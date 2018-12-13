import sys
import time

class sam_d_info:
    dsu_address = 0x41002000
    ctrl_reg_offset = 0x100
    statusa_offset = 0x101
    ctrl_ce_bit = 0x10
    erase_size = 0x100

class flash_info:
    moduleName = "NVMCTRL"
    mappedAddress = 0x0000000000000000
    size = 0x00040000
    pageSize = 0x00000040
    hasUserpage = 1
    mappedUserPageAddress = 0x0000000000804000
    userPageSize = 0x00000040
    nPagesPerLockRegion = 0xcdcdcdcd
    pageSizeParameter = 0xcdcdcdcd
    flashSizeParameter = 0xcdcdcdcd
    lockbitsSizeInBytes = 0xcdcdcdcd
    hasRWW = 0
    mappedRwwAddress = 0x0000000000000000
    rWWSectionOffsetFromFlashStart = 0x0000000000000000
    rwwSectionSize = 0x0000000000000000
    baseAddress = 0x0000000041004000  # Address of the flash controller module
    fcrRegisterAddress = 0xcdcdcdcdcdcdcdcd # Address of the Flash Control register , fmr for eeflashcontroller
    fcmdRegisterAddress = 0xcdcdcdcdcdcdcdcd # Address of the flash command register
    fsrRegisterAddress = 0xcdcdcdcdcdcdcdcd # Address of the Flash status register
    frrRegisterAddress = 0xcdcdcdcdcdcdcdcd #Result register address. only for eeflashcontroller
    userPageOffsetFromFlashStart = 0x0000000000804000
    fuseGpHiAddress = 0xcdcdcdcdcdcdcdcd
    fuseGpLoAddress = 0xcdcdcdcdcdcdcdcd # used for gpnvm for eeflashcontroller
    fuseGpMasks = 0x000000ff # Encode up to 32 mask bits for GPNVMbits
    mSectorSize = 0x0004
    mSizeEwpSector = 0x0000
    nvmCtrl2409_E54 = 0
    nvmCtrl2802_L1x = 0
    cmdRegOfs = 0x00000000
    cfgRegOfs = 0x00000004
    cmdRegSize = 0x00000002
    cfgRegSize = 0x00000004
    stsRegSize = 0x00000002
    intRegSize = 0x00000001

dap.LogPackets(0)
log.getLogLevelThreshold()
log.setShowOutput(False)
#log.log(LEVEL_SEVERE,"Test")
log.info("info")
log.error("error")

def printDHCSR(text):
    d = dap.ReadD32(dap.DHCSR)
    decodeAndPrintDHCSR(text, d)

def decodeAndPrintDHCSR(text, d):
    strDHCSR=" %s %x : " % (text,d)
    if (d & 0x02000000):
        strDHCSR = strDHCSR +  "S_RESET_ST."
    if (d & 0x01000000):
        strDHCSR = strDHCSR +  "S_RETIRE."
    if (d & 0x00100000):
        strDHCSR = strDHCSR +  "S_SDE."
    if (d & 0x00080000):
        strDHCSR = strDHCSR +  "S_LOCKUP."
    if (d & 0x00040000):
        strDHCSR = strDHCSR +  "S_SLEEP."
    if (d & 0x00020000):
        strDHCSR = strDHCSR +  "S_HALT."
    if (d & 0x00010000):
        strDHCSR = strDHCSR +  "S_REGRDY."
    if (d & 0x00000020):
        strDHCSR = strDHCSR +  "C_SNAPSTALL."
    if (d & 0x00000008):
        strDHCSR = strDHCSR +  "C_MASKINTS."
    if (d & 0x00000004):
        strDHCSR = strDHCSR +  "C_STEP."
    if (d & 0x00000002):
        strDHCSR = strDHCSR +  "C_HALT."
    if (d & 0x00000001):
        strDHCSR = strDHCSR +  "C_DEBUGEN"
    log.log(LEVEL_INFO,strDHCSR)

#import program_api
#reload (debug_api)
# this file contains all the methods that satisfy the APIs exposed by ScriptBasedController
# RI4ProgramInterface

def set_program_exec(address, data):
  log.log(LEVEL_INFO,"RI4ProgramInterface: Program exec at 0x%x, is %d bytes long" % (address, len(data)))
  

def set_debug_exec(address, data):
  log.log(LEVEL_INFO,"RI4ProgramInterface: Debug exec at 0x%x, is %d bytes long" % (address, len(data)))

def blank_check():
  log.log(LEVEL_INFO,"RI4ProgramInterface: Blank check")

def resetExtension():
  timeout=1000
  log.log(LEVEL_INFO,"Reset extension")
  dap.Pins(0,dap.RESET,timeout)  # 1 msec with reset high 
  dap.Pins(dap.RESET,dap.RESET,timeout) # 1 msec with floating reset 
  dap.Pins(0,dap.RESET | dap.SWCLK,timeout); # 1 msec with reset and clock low 
  dap.Pins(dap.RESET,dap.RESET,timeout); # now float reset back 

def erase():
  log.log(LEVEL_INFO,"RI4ProgramInterface: Erase")
  resetExtension()
  dap.Connect(True,2000000L)
  issueResetAndWait()      
  
  dap.WriteD8(0x41002100,0x10)
  log.log(LEVEL_INFO,"Issued DSU.CE STATUSA now %x"  % dap.ReadD8(0x41002101))
  n = 0
  while n<100:
    r=dap.ReadD8(0x41002101)
    log.log(LEVEL_INFO,"Read DSU.STATUSA %x"  %r)
    if r & 1:
      break
    time.sleep(0.1)
    n=n+1


def issueResetAndWait():
  log.log(LEVEL_INFO,"RI4ProgramInterface: issueResetAndWait")
  dap.WriteD32(dap.DEMCR, 0x01000001) #VC_CORERESET|TRCENA
  dap.WriteD32(dap.AIRCR, 0x05fa0004) # 1=VECTRESET 4=sysresetreq
  n = 0
  seenReset = False
  while n<10:
    r=dap.ReadD32(dap.DHCSR)
    decodeAndPrintDHCSR("dap.DHCSR",r)
    if (r & 0x02000000): # wait for S_RESET_ST 
      seenReset=True
      dap.WriteD32(dap.DHCSR, 0xa05f0003) #DBGKEY | C_DEBUGEN | C_HALT
      dap.WriteD8(0x41002101,0x2)
      printDHCSR("After clearing CRSTEXT")
    hasHalted = 0 != (r & 0x00020000)
    if seenReset:
      if hasHalted: # wait for S_HALT 
        break
    time.sleep(0.1)
    n=n+1
  dap.WriteD32(dap.DEMCR, 0x01000000) #TRCENA
  testRegs()
  if n==100:
    raise "timeout in reset"

def hold_in_reset():
  log.log(LEVEL_INFO,"RI4ProgramInterface: Hold in reset")
  issueResetAndWait()

def release_from_reset():
  log.log(LEVEL_INFO,"RI4ProgramInterface: Release from reset")


def write_reg(adr, val, size):
  if size == 4:
    dap.WriteD32(adr, val)
  elif size == 2:
    dap.WriteD16(adr, val)
  elif size == 1:
    dap.WriteD8(adr, val)
  else: 
    log.log(LEVEL_INFO,"Error write_reg size == %i" % size)
	
def read_reg(adr, size):
  if size == 4:
    return dap.ReadD32(adr)
  elif size == 2:
    return dap.ReadD16(adr)
  elif size == 1:
    return dap.ReadD8(adr)
  else: 
    log.log(LEVEL_INFO,"Error read_reg size == %i" % size)
    return 0x0

prevCfgReg = 0x0

def save_cfg_word():
  cfgAdr = flash_info.baseAddress + flash_info.cfgRegOfs
  cfgSize = flash_info.cfgRegSize
  #global prevCfgReg
  prevCfgReg = read_reg(cfgAdr, cfgSize)
  #prevCfgReg = 0x0
  newCfgReg = prevCfgReg & ~0x80; # set auto writes (clear bit 7)
  wait_states = 0xf
  newCfgReg = (newCfgReg & ~0x1e) | (wait_states << 1) # wait states 15
  if newCfgReg != prevCfgReg:
    log.log(LEVEL_INFO,"save_cfg_word: Write prevCfgReg = %x, newCfgReg = %x" % (prevCfgReg, newCfgReg))
    write_reg(cfgAdr, newCfgReg, cfgSize)
  else:
    log.log(LEVEL_INFO,"save_cfg_word: prevCfgReg = %x unchanged, skipped saving" % prevCfgReg)

def reset_cfg_word():
  log.log(LEVEL_INFO,"reset_cfg_word: prevCfgReg = %x" % prevCfgReg)
  cfgAdr = flash_info.baseAddress + flash_info.cfgRegOfs
  cfgSize = flash_info.cfgRegSize
  write_reg(cfgAdr, prevCfgReg, cfgSize)

def write_flash_page(adr, ofs, data):
  dap.WriteD32(adr, 0) 
  dap.WriteD16(flash_info.baseAddress, 0xa502) 
  log.log(LEVEL_INFO,"RI4ProgramInterface: write_flash_page adr %x" % adr)

  page_size = flash_info.pageSize
  written = 0
  while written < sam_d_info.erase_size:
    # print "write_flash_page call dap.WriteMem address = 0x%x-+0x%x" % (adr, adr + page_size-1)
    dap.WriteMem(adr, data, ofs + written, page_size)
    adr += page_size
    written += page_size

def write_transfer(type_of_mem, address, data, length):
  log.log(LEVEL_INFO,"RI4ProgramInterface: Writing %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))
  orig_address = address

  save_cfg_word()

  written = 0
  while written < length:
    write_flash_page(address,written,data)
    written += sam_d_info.erase_size
    address += sam_d_info.erase_size
  # print "RI4ProgramInterface: Written %d bytes to address 0x%0x of %s memory" % (length, orig_address, type_of_mem)

  reset_cfg_word()

  #if not orig_address == 0x200:
    #log.log(LEVEL_INFO,"Test setting SW BP")
    #instruction = set_sw_bp(0x24a, 0xbe00, 0)
    #log.log(LEVEL_INFO,"SW BP replaced instruction %x" % instruction)
    #set_sw_bp(0x24a, instruction, 0)

  if True: #str(type_of_mem) == "Pgm" :
    issueResetAndWait()

def read_transfer(type_of_mem, address, data, length):
  dap.ReadMem(address,data,0,length)
  log.log(LEVEL_INFO,"RI4ProgramInterface: Reading %d bytes from address 0x%0x of %s memory" % (length, address, type_of_mem))

def verify_transfer(type_of_mem, address, data, length):
  log.log(LEVEL_INFO,"RI4ProgramInterface: Verifying %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))

def end_of_operations():
  log.log(LEVEL_INFO,"RI4ProgramInterface: End of operations")


# this file contains all the methods that satisfy the APIs exposed by ScriptBasedController
# RI4DebugInterfaceWithBP

global g_in_debug_mode
g_in_debug_mode = False

global g_is_running 
g_is_running = False

def init_debug_session():
  log.log(LEVEL_INFO,"Debug:: Init debug session")
  global g_in_debug_mode
  global g_is_running
  issueResetAndWait()
  testRegs()
  g_in_debug_mode = True
  g_is_running = False

def hold_in_reset():
  log.log(LEVEL_INFO,"top Debug:: Hold in reset")

def debug_read_target_memory(mem_type, start, end, data):
  len = end-start+1
  log.log(LEVEL_INFO,"Debug:: Reading %d bytes at start address 0x%0x (%s)" % (len, start, mem_type))
  dap.ReadMem(start,data,0,len)

def debug_write_target_memory(mem_type, start, end, data):
  len = end-start+1
  log.log(LEVEL_INFO,"Debug:: Writing %d bytes at start address 0x%0x (%s)" % (len, start, mem_type))
  dap.WriteMem(start,data,0,len)

def is_target_in_debug_mode():
  log.log(LEVEL_INFO,"Debug:: Is target in debug mode? %s" % g_in_debug_mode)
  return g_in_debug_mode
    

def get_pc():
  rv = dap.GetARMReg(13)
  pc = dap.GetARMReg(15)
  log.log(LEVEL_INFO,"get_pc SP=%x PC=%x" %  (rv,pc))
  return pc

def run_target():
  global g_is_running
  g_is_running = True
  printDHCSR("Target to be set to running ")  
  dap.WriteD32(dap.DHCSR, 0xa05f0001) #DBGKEY | C_DEBUGEN | C_HALT
  printDHCSR("Target should be running ")

def halt_target():
  global g_is_running
  g_is_running = False
  printDHCSR("Target to be halted ")
  dap.WriteD32(dap.DHCSR, 0xa05f0003) #DBGKEY | C_DEBUGEN | C_HALT
  printDHCSR("Target was halted ")


def step_target():
  printDHCSR("Debug:: step target")
  get_pc()
  dap.WriteD32(dap.DHCSR, 0xa05f000b)  #DBGKEY | C_DEBUGEN | C_HALT | C_MASKINTS
  dap.WriteD32(dap.DHCSR, 0xa05f000d)  #DBGKEY | C_DEBUGEN | C_STEP | C_MASKINTS
  dap.WriteD32(dap.DHCSR, 0xa05f0003)  #DBGKEY | C_DEBUGEN | C_HALT
  get_pc()

def set_pc(pc):
  log.log(LEVEL_INFO,"Debug:: set pc to 0x%0x" % pc)
  dap.SetARMReg(15,pc)
  get_pc()

def print_byte_array(text, array, index, size):
  string = text
  for i in range(size):
    string += " %x" % array[i+index]
  log.log(LEVEL_INFO,string)

def set_sw_bp(address, instruction, flags):
  log.log(LEVEL_INFO,"Debug:: set/reset pb at address 0x%0x, store instructions 0x%0x, flags = 0x%0x" % (address, instruction, flags))
  erase_page_start = address & ~(sam_d_info.erase_size-1)
  address_in_erase_page = address & sam_d_info.erase_size-1
  log.log(LEVEL_INFO,"set_sw_bp: erase_page_start = %x, address_in_erase_page = %x" % (erase_page_start, address_in_erase_page))

  data = bytearray(256)
  dap.ReadMem(erase_page_start, data, 0, sam_d_info.erase_size)
  print_byte_array("set_sw_bp: data[address_in_erase_page] =", data, address_in_erase_page, 4)
  return_value = data[address_in_erase_page] | (data[address_in_erase_page+1] << 8)
  log.log(LEVEL_INFO,"set_sw_bp: return_value (replaced instruction) = %x" % return_value)

  # Insert software breakpoint instruction in the data
  data[address_in_erase_page] = instruction & 0xFF
  data[address_in_erase_page+1] = (instruction >> 8) & 0xFF

  print_byte_array("set_sw_bp: data[address_in_erase_page] after changing instr =", data, address_in_erase_page, 4)
  write_transfer("Pgm", erase_page_start, data, sam_d_info.erase_size)

  return return_value

def reset_target():
  global regsAreInvalid
  log.log(LEVEL_INFO,"Debug:: Reset target")
  regsAreInvalid = True
  issueResetAndWait()

def is_running():
  global g_is_running, regsAreInvalid 
  d = dap.ReadD32(dap.DHCSR)
  state =  0 == (d & 0x00020000)
  if state != g_is_running:
    log.log(LEVEL_INFO,"Debug:: is_running %s" % state)
    regsAreInvalid = True
    g_is_running = state
  return g_is_running

def setHardwareBreakpoint(number, address):
  log.log(LEVEL_INFO,"Debug:: set hw bp number %d, at address 0x%0x"  % (number, address))

def clearHardwareBreakpoint(number):
  log.log(LEVEL_INFO,"Debug:: clear hw bp number %d" % number)

def end_debug_session():
  global g_in_debug_mode
  global g_is_running
  g_is_running = False
  g_in_debug_mode = False 


def testRegs():
  get_pc()
  return
 
