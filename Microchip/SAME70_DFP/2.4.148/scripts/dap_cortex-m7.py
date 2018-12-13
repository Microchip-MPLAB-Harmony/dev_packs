import sys
import time

FLASH_START = 0x0400000
PAGE_SIZE = 512

eefc_fmr  = 0x400e0c00  #EEFC Flash Mode Register
eefc_fcr  = 0x400e0c04  #EEFC Flash Command Register
eefc_fsr  = 0x400e0c08  #EEFC Flash Status Register
eefc_frr  = 0x400e0c0c  #EEFC Flash Result Register
eefc_wpmr = 0x400e0ce4  #EEFC Write Protection Mode Register

eefc_fkey = 0x5a000000  #Flash Writing Protection Key

eefc_cmd_getd = eefc_fkey | 0x00
eefc_cmd_wp   = eefc_fkey | 0x01
eefc_cmd_wpl  = eefc_fkey | 0x02
eefc_cmd_ewp  = eefc_fkey | 0x03
eefc_cmd_ewpl = eefc_fkey | 0x04
eefc_cmd_ea   = eefc_fkey | 0x05
eefc_cmd_epl  = eefc_fkey | 0x06
eefc_cmd_epa  = eefc_fkey | 0x07

fp_ctrl  = 0xe0002000
fp_comp0 = 0xe0002008

# FP_CTRL bitfields
FP_CTRL_KEY    = 0x00000002
FP_CTRL_ENABLE = 0x00000001

# FP_COMP0 bitfields
FP_COMP0_ENABLE = 0x00000001

# DHCSR bitfields
DBGKEY       = 0xa05f0000
S_RESET_ST   = 0x02000000
S_RETIRE_ST  = 0x01000000
S_SDE        = 0x00100000
S_LOCKUP     = 0x00080000
S_SLEEP      = 0x00040000
S_HALT       = 0x00020000
S_REGRDY     = 0x00010000
C_SNAPSTALL  = 0x00000020
C_MASKINTS   = 0x00000008
C_STEP       = 0x00000004
C_HALT       = 0x00000002
C_DEBUGEN    = 0x00000001

# DEMCR bitfields
TRCENA       = 0x01000000
MON_REQ      = 0x00080000
MON_STEP     = 0x00040000
MON_PEND     = 0x00020000
MON_EN       = 0x00010000
VC_HARDERR   = 0x00000400
VC_INTERR    = 0x00000200
VC_BUSERR    = 0x00000100
VC_STATERR   = 0x00000080
VC_CHKERR    = 0x00000040
VC_NOCPERR   = 0x00000020
VC_MMERR     = 0x00000010
VC_CORERESET = 0x00000001

# AIRCR bitfields
VECTKEY      = 0x05fa0000
SYSRESETREQ  = 0x00000004
VECTRESET    = 0x00000001

RSTC_KEY = 0xa5000000

EXTRST   = 0x00000008
PROCRST  = 0x00000001

URSTEN   = 0x00000001

SRCMP    = 0x00020000
NRSTL    = 0x00010000

rstc_cr = 0x400e1800
rstc_sr = 0x400e1804
rstc_mr = 0x400e1808

dap.LogPackets(0)
# log is a global object injected by MPLAB
log.getLogLevelThreshold()
log.setShowOutput(False)

log.info("ATSAME70 debugger")

def waitForFlashReady():
  n = 0
  while n<100:
    r=dap.ReadD32(long(eefc_fsr))
    if r & 1:
      break
    time.sleep(0.1)
    n=n+1

def halt():
  dap.WriteD32(dap.DHCSR, long(DBGKEY)|C_HALT|C_DEBUGEN)
  n = 0
  while n<100:
    r=dap.ReadD32(dap.DHCSR)
    if r & S_HALT:
      return
    time.sleep(0.1)
    n=n+1
  raise "Failed to halt target!"

def resetPeripheralsWithRstc():
  #dap.WriteD32(long(rstc_mr), long(RSTC_KEY)|0xe00)
  dap.WriteD32(long(rstc_cr), long(RSTC_KEY)|EXTRST)
  n = 0
  while n<100:
    time.sleep(0.01)
    r=dap.ReadD32(long(rstc_sr))
    if r & SRCMP:
      continue # Software reset in progress
    if r & NRSTL:
      break
  if n==100:
    raise "timeout in reset"
  #dap.WriteD32(long(rstc_mr), long(RSTC_KEY)|URSTEN)

def erasePage(address):
  log.log(LEVEL_INFO, "Erase page at address %x" % address)
  if is_running():
    halt()

# this file contains all the methods that satisfy the APIs exposed by ScriptBasedController
# RI4ProgramInterface

def set_program_exec(address, data):
  log.log(LEVEL_INFO, "RI4ProgramInterface: Program exec at 0x%x, is %d bytes long" & (address, len(data)))

def set_debug_exec(address, data):
  log.log(LEVEL_INFO, "RI4ProgramInterface: Debug exec at 0x%x, is %d bytes long" & (address, len(data)))

def blank_check():
  log.info("RI4ProgramInterface: Blank check")

def erase():
  log.info("RI4ProgramInterface: Erase")
  dap.Connect(True, 8000000L)
  if is_running():
    halt()
  dap.WriteD32(long(eefc_fcr), eefc_cmd_ea)
  log.log(LEVEL_INFO, "Issued Erase All, EEFC_SR now %x" % (dap.ReadD32(long(eefc_fsr))))
  waitForFlashReady()

def issueResetAndWait():
  log.info("RI4ProgramInterface: issueResetAndWait")
  # check run state and clear S_RESET_ST so that we can use it to detect end of reset later
  if is_running():
    halt()
  dap.WriteD32(dap.DEMCR, TRCENA|VC_CORERESET) #0x01000001
  resetPeripheralsWithRstc()
  dap.WriteD32(dap.AIRCR, VECTKEY|VECTRESET) # 1=VECTRESET 4=sysresetreq
  n = 0
  seenReset = False
  while n<100:
    r=dap.ReadD32(dap.DHCSR)
    if (r & S_RESET_ST): # wait for 0x02000000
      seenReset=True
      log.info("Seen reset")
    hasHalted = 0 != (r & S_HALT)
    if seenReset:
      if hasHalted: # wait for S_HALT
        log.info("has halted")
        break
    time.sleep(0.1)
    n=n+1
  dap.WriteD32(dap.DEMCR, TRCENA) #0x01000000
  if n==100:
    raise "timeout in reset"
  return

def hold_in_reset():
  log.info("RI4ProgramInterface: Hold in reset")
  issueResetAndWait()

def release_from_reset():
  log.info("RI4ProgramInterface: Release from reset")
  dap.Pins(0,dap.RESET,1000)
  dap.Pins(dap.RESET,dap.RESET,1000); # now float reset back 

def write_flash_page(adr, ofs, data):
  log.log(LEVEL_INFO, "Write flash page adr=0x%x, ofs=0x%x" % (adr, ofs))
  dap.WriteMem(adr,data,ofs,PAGE_SIZE)
  # Remove flash offset, if any, and mask away page internal address bits.
  # Then shift right once to position page_number in the FARG bitfield in EEFC_FCR
  page_number = (adr&0x3ffe00)/2
  dap.WriteD32(long(eefc_fcr), eefc_cmd_wp|page_number)
  waitForFlashReady()
  log.log(LEVEL_INFO, "Written page %d (0x%x) at 0x%x" % (page_number/256, page_number*2, adr))

def write_transfer(type_of_mem, address, data, length):
  log.log(LEVEL_INFO, "RI4ProgramInterface: Writing %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))
  if str(type_of_mem) != "Pgm" :
      return
  if is_running():
    halt()
  dap.WriteD32(long(eefc_fmr), 0x00000600)  #Set Flash Wait States to 7 cycles (6+1)

  written = 0
  while written < length:
    write_flash_page(address,written,data)
    written += PAGE_SIZE
    address += PAGE_SIZE

def read_transfer(type_of_mem, address, data, length):
  dap.ReadMem(address,data,0,length)
  log.log(LEVEL_INFO, "RI4ProgramInterface: Reading %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))

def verify_transfer(type_of_mem, address, data, length):
  log.log(LEVEL_INFO, "RI4ProgramInterface: Verifying %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))

def end_of_operations():
  log.info("RI4ProgramInterface: End of operations")


# this file contains all the methods that satisfy the APIs exposed by ScriptBasedController
# RI4DebugInterfaceWithBP

global g_in_debug_mode
g_in_debug_mode = False

def init_debug_session():
  log.info("Debug:: Init debug session")
  global g_in_debug_mode
  issueResetAndWait()
  g_in_debug_mode = True

def debug_read_target_memory(mem_type, start, end, data):
  len = end-start+1
  log.log(LEVEL_INFO, "Debug:: Reading %d bytes at start address 0x%0x (%s)" % (len, start, mem_type))
  dap.ReadMem(start,data,0,len)

def debug_write_target_memory(mem_type, start, end, data):
  len = end-start+1
  log.log(LEVEL_INFO, "Debug:: Writing %d bytes at start address 0x%0x (%s)" % (len, start, mem_type))
  dap.WriteMem(start,data,0,len)

def is_target_in_debug_mode():
  log.log(LEVEL_INFO, "Debug:: Is target in debug mode? %s" % g_in_debug_mode)
  return g_in_debug_mode

def get_pc():
  return dap.GetARMReg(15)

def run_target():
  log.info("Target to be set to running")
  dap.WriteD32(dap.DHCSR, 0xa05f0001) #DBGKEY | C_DEBUGEN | C_HALT

def halt_target():
  log.info("Target to be halted ")
  dap.WriteD32(dap.DHCSR, 0xa05f0003) #DBGKEY | C_DEBUGEN | C_HALT


def step_target():
  dap.WriteD32(dap.DHCSR, 0xa05f000b)  #DBGKEY | C_DEBUGEN | C_HALT | C_MASKINTS
  dap.WriteD32(dap.DHCSR, 0xa05f000d)  #DBGKEY | C_DEBUGEN | C_STEP | C_MASKINTS
  dap.WriteD32(dap.DHCSR, 0xa05f0003)  #DBGKEY | C_DEBUGEN | C_HALT

def set_pc(pc):
  log.log(LEVEL_INFO, "Debug:: set pc to 0x%0x" % pc)
  dap.SetARMReg(15,pc)

def set_sw_bp(address, instruction, flags):
  """
    * Sets/clears a software breakpoint
    * @param address -> the address of the software breakpoin
    * @param instruction -> the instruction to be programmed (either the software breakpoint
    * opcode or the original instruction the software breakopint was replacing).
    * @param flags -> One or more of the SWBPFlags listed below
    * @return returns the original/old opcode at address
  """
  log.log(LEVEL_INFO, "Debug:: set bp at address 0x%0x, store instructions 0x%0x, flags = 0x%0x" % (address, instruction, flags))
  # Accept addressing both from FLASH_START and from 0x0
  addr = address & (FLASH_START-1)

  single_page_access = False
  buffer_size = PAGE_SIZE * 16
  # If address is within the first 16kb a single page read-modify-write can be used.
  if addr < (2 * 8 * 1024):
    buffer_size = PAGE_SIZE
    single_page_access = True

  buffer_mask = long(buffer_size-1)
  data_buffer=bytearray(buffer_size)
  # Get the start address to the flash page(es) we need to erase
  start_addr = addr & ~(buffer_mask)
  # Get BP address within the buffer
  bp_addr = addr & buffer_mask
  dap.ReadMem(start_addr, data_buffer, 0, buffer_size)
  org_inst = 0
  n = 0
  # Replace instruction in data_buffer
  while(n<2):
    org_inst += data_buffer[bp_addr+n]<<(n*8)
    data_buffer[bp_addr+n] = ((instruction>>(n*8)) & 0xff)
    n=n+1

  if single_page_access:
    dap.WriteMem(start_addr,data_buffer,0,PAGE_SIZE)
    # Remove flash offset, if any, and mask away page internal address bits.
    # Then shift right once to position page_number in the FARG bitfield in EEFC_FCR
    page_number = (addr&0x3ffe00)/2
    # Erase and write page
    dap.WriteD32(long(eefc_fcr), eefc_cmd_ewp|page_number)
    waitForFlashReady()
  else:
    # Erase 16 pages (16pages == buffer_size). The "0x200" sets the number of pages to erase.
    dap.WriteD32(long(eefc_fcr), eefc_cmd_epa|(start_addr>>1)|0x200)
    write_transfer("Pgm", start_addr, data_buffer, buffer_size)
  return org_inst

def reset_target():
  issueResetAndWait()

def is_running():
  d = dap.ReadD32(dap.DHCSR)
  return (0 == (d & 0x00020000))

def end_debug_session():
  global g_in_debug_mode
  g_in_debug_mode = False
  log.info("Debug:: End debug session")
