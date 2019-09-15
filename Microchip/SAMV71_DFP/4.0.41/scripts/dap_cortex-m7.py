import sys
import time

FLASH_START = 0x0400000
PAGE_SIZE = 512

GPNVM_BIT_MASK = 0x183  # Bit mask for user changeable GPNVM bits

eefc_fmr  = 0x400e0c00  # EEFC Flash Mode Register
eefc_fcr  = 0x400e0c04  # EEFC Flash Command Register
eefc_fsr  = 0x400e0c08  # EEFC Flash Status Register
eefc_frr  = 0x400e0c0c  # EEFC Flash Result Register
eefc_wpmr = 0x400e0ce4  # EEFC Write Protection Mode Register

eefc_fkey = 0x5a000000  # Flash Writing Protection Key

eefc_cmd_getd = eefc_fkey | 0x00
eefc_cmd_wp   = eefc_fkey | 0x01
eefc_cmd_wpl  = eefc_fkey | 0x02
eefc_cmd_ewp  = eefc_fkey | 0x03
eefc_cmd_ewpl = eefc_fkey | 0x04
eefc_cmd_ea   = eefc_fkey | 0x05
eefc_cmd_epl  = eefc_fkey | 0x06
eefc_cmd_epa  = eefc_fkey | 0x07
eefc_cmd_slb  = eefc_fkey | 0x08
eefc_cmd_clb  = eefc_fkey | 0x09
eefc_cmd_glb  = eefc_fkey | 0x0A
eefc_cmd_sgpb = eefc_fkey | 0x0B
eefc_cmd_cgpb = eefc_fkey | 0x0C
eefc_cmd_ggpb = eefc_fkey | 0x0D

fp_ctrl  = 0xe0002000
fp_comp0 = 0xe0002008

# FP_CTRL bitfields
FP_CTRL_KEY    = 0x00000002
FP_CTRL_ENABLE = 0x00000001

# FP_COMP0 bitfields
FP_COMP0_ENABLE = 0x00000001

# FSR bitfields
FSR_FRDY = 0x01
FSR_WREER = 0x10
FSR_FLOCKE = 0x04
FSR_FCMDE = 0x02

# DHCSR bitfields
DBGKEY      = 0xa05f0000
S_RESET_ST  = 0x02000000
S_RETIRE_ST = 0x01000000
S_SDE       = 0x00100000
S_LOCKUP    = 0x00080000
S_SLEEP     = 0x00040000
S_HALT      = 0x00020000
S_REGRDY    = 0x00010000
C_SNAPSTALL = 0x00000020
C_MASKINTS  = 0x00000008
C_STEP      = 0x00000004
C_HALT      = 0x00000002
C_DEBUGEN   = 0x00000001

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
VECTKEY     = 0x05fa0000
SYSRESETREQ = 0x00000004
VECTRESET   = 0x00000001

# NVIC used for getting ARM core type
NVIC_Addr    = 0xE000E000
NVIC_CPUID   = NVIC_Addr + 0x0D00
CPUID_PARTNO = 0x0000FFF0  # Part Number Mask

RSTC_KEY = 0xa5000000

EXTRST  = 0x00000008
PROCRST = 0x00000001

URSTEN = 0x00000001

SRCMP = 0x00020000
NRSTL = 0x00010000

rstc_cr = 0x400e1800
rstc_sr = 0x400e1804
rstc_mr = 0x400e1808

log.info("Cortex-M7 programmer/debugger")
communication_freq = 8000000L

# Flash strategy
# 0: Halt before programming/read mem operations, run afterwards
# 1: Reset and halt before programming/read mem operations, release from reset afterwards
flash_strategy = 1
was_running = False
did_read_operation = False

def begin_communication_session():
    global dap
    dap.LogPackets(0)
    # log is a global object injected by MPLAB
    log.getLogLevelThreshold()
    log.setShowOutput(False)

def begin_programming_operation():
    log.info("begin_programming_operation")
    dap.Connect(True, communication_freq)

    global was_running
    was_running = False
    global did_read_operation
    did_read_operation = False
    if is_target_running():
        was_running = True
    if flash_strategy == 0 and is_target_running():
        halt()
    if flash_strategy == 1:
        issueResetAndWait() # necessary for reading flash with some projects, ref MPLABX-4516

def bitsInByte(byteValue):
    for i in xrange(8):
        yield (byteValue >> i) & 1

def get_arm_type():
    val = dap.ReadD32(NVIC_CPUID)
    switcherCPUPartno = {
        0xC330: "ARM_SC300",
        0xC300: "ARM_SC000",
        0xC240: "ARM_CM4",
        0xC230: "ARM_CM3",
        0xC210: "ARM_CM1",
        0xC200: "ARM_CM0",
        0xC600: "ARM_CM0P",  # Flycatcher
        0xC270: "ARM_CM7",   # Pelican
        0xD200: "ARM_CM8"   # L10
    }
    return switcherCPUPartno.get(val & CPUID_PARTNO, "Unknown core...")


def waitForFlashReady():
    n = 0
    while n < 100:
        r = dap.ReadD32(long(eefc_fsr))
        if r & FSR_WREER:
            log.error("Write Register Error")
        if r & FSR_FLOCKE:
            log.error("Flash Lock Error")
        if r & FSR_FCMDE:
            log.error("Flash Command Error")

        if r & FSR_FRDY:
            break
        time.sleep(0.1)
        n = n+1
    if n == 100:
        raise "Timeout waiting for flash ready"


def halt():
    dap.WriteD32(dap.DHCSR, long(DBGKEY) | C_HALT | C_DEBUGEN)
    n = 0
    while n < 100:
        r = dap.ReadD32(dap.DHCSR)
        if r & S_HALT:
            return
        time.sleep(0.1)
        n = n+1
    raise "Failed to halt target!"


def resetPeripheralsWithRstc():
    dap.WriteD32(long(rstc_mr), long(RSTC_KEY) | 0xb00)
    dap.WriteD32(long(rstc_cr), long(RSTC_KEY) | 0x003)
    # dap.WriteD32(long(rstc_cr), long(RSTC_KEY)|EXTRST)
    n = 0
    while n < 100:
        time.sleep(0.01)
        r = dap.ReadD32(long(rstc_sr))
        if r & SRCMP:
            continue  # Software reset in progress
        if r & NRSTL:
            break
        n = n+1

    if n == 100:
        raise "timeout in reset"

    dap.WriteD32(long(rstc_mr), long(RSTC_KEY) | URSTEN)


def erasePage(address):
    log.info("Erase page at address %x" % address)
    if is_target_running():
        halt()

# this file contains all the methods that satisfy the APIs exposed by ScriptBasedController
# RI4ProgramInterface


def blank_check():
    log.info("RI4ProgramInterface: Blank check")



def erase():
    log.info("RI4ProgramInterface: Erase")
    issueResetAndWait()

    # Get device description info
    dap.WriteD32(long(eefc_fcr), eefc_cmd_getd)
    waitForFlashReady()
    FL_ID = dap.ReadD32(long(eefc_frr))
    FL_SIZE = dap.ReadD32(long(eefc_frr))
    FL_PAGE_SIZE = dap.ReadD32(long(eefc_frr))
    FL_NB_PLANE = dap.ReadD32(long(eefc_frr))
    FL_PLANE0 = dap.ReadD32(long(eefc_frr))
    FL_NB_LOCK = dap.ReadD32(long(eefc_frr))
    FL_LOCK0 = dap.ReadD32(long(eefc_frr))
    log.info(
        "Device descr info: ID=0x%X, SIZE=0x%X, PAGE_SIZE=0x%X, NB_PLANE=0x%X, PLANE0=0x%X, NB_LOCK=0x%X, LOCK0=0x%X" %
        (FL_ID, FL_SIZE, FL_PAGE_SIZE, FL_NB_PLANE, FL_PLANE0, FL_NB_LOCK, FL_LOCK0))
    global PAGE_SIZE
    if PAGE_SIZE != FL_PAGE_SIZE:
        log.error("Using wrong page size! (PAGE_SIZE = %X, device description page size = %X" %
                  (PAGE_SIZE, FL_PAGE_SIZE))
        PAGE_SIZE = FL_PAGE_SIZE

    dap.WriteD32(long(eefc_fcr), eefc_cmd_ea)
    log.info("Issued Erase All, wait for flash ready")
    waitForFlashReady()
    log.info("ARM core: " + get_arm_type())


def issueResetAndWait():
    log.info("RI4ProgramInterface: issueResetAndWait")
    # check run state and clear S_RESET_ST so that we can use it to detect end of reset later
    if is_target_running():
        halt()
    dap.WriteD32(dap.DEMCR, TRCENA | VC_CORERESET)  # 0x01000001
    resetPeripheralsWithRstc()
    dap.WriteD32(dap.AIRCR, VECTKEY | VECTRESET)  # 1=VECTRESET 4=sysresetreq
    n = 0
    retries = 100
    seenReset = False
    while n < retries:
        dhcsr = dap.ReadD32(dap.DHCSR)
        if (dhcsr & S_RESET_ST):  # wait for reset
            seenReset = True
            log.info(" - Seen reset")
        hasHalted = 0 != (dhcsr & S_HALT)
        if seenReset:
            if hasHalted:  # wait for S_HALT
                log.info(" - has halted")
                break
        time.sleep(0.1)
        n = n+1
    dap.WriteD32(dap.DEMCR, TRCENA)  # 0x01000000
    if n == retries:
        raise "timeout in reset"
    return


def hold_in_reset():
    log.info("RI4ProgramInterface: Hold in reset")
    dap.Connect(True, communication_freq)
    issueResetAndWait()
    dap.Disconnect()
    
def release_from_reset():
    log.info("RI4ProgramInterface: Release from reset")
    dap.Pins(0, dap.RESET, 1000)
    dap.Pins(dap.RESET, dap.RESET, 1000)  # now float reset back
    


def write_flash_page(adr, ofs, data):
    log.info("Write flash page adr=0x%0x, ofs=0x%0x" % (adr, ofs))
    dap.WriteMem(adr, data, ofs, PAGE_SIZE)
    # Remove flash offset, if any, and mask away page internal address bits.
    # Then shift right once to position page_number in the FARG bitfield in EEFC_FCR
    page_number = (adr & 0x3ffe00)/2
    dap.WriteD32(long(eefc_fcr), eefc_cmd_wp | page_number)
    waitForFlashReady()
    log.info("Written page %d (0x%0x) at 0x%0x" %
             (page_number/256, page_number*2, adr))


def prog_write(type_of_mem, address, length, data):
    log.info("RI4ProgramInterface: Writing %d bytes to address 0x%0x of %s memory" % (
        length, address, type_of_mem))
    if str(type_of_mem) == "Cfg":
        # Converting value to indexing access, and writing one GPNVM bit at the time
        mask = GPNVM_BIT_MASK  # Use mask to avoid writing to reserved bits
        bit_index = 0
        for val in data:
            for bit in bitsInByte(val):
                if(mask & 0x01):
                    if(bit == 1):
                        log.info("Debug:: Setting GPNVM bit %d" % bit_index)
                        dap.WriteD32(long(eefc_fcr),
                                     eefc_cmd_sgpb | (bit_index << 8))
                        waitForFlashReady()
                    else:
                        log.info("Debug:: Clearing GPNVM bit %d" % bit_index)
                        dap.WriteD32(long(eefc_fcr),
                                     eefc_cmd_cgpb | (bit_index << 8))
                        waitForFlashReady()
                mask = mask >> 1
                if not mask:
                    return
                bit_index += 1
        return  # This should never be reached...
    elif str(type_of_mem) != "Pgm":
        log.warning(
            "Debug:: Currently not supporting writing to memory type %s" % type_of_mem)
        return
    if is_target_running():
        halt()
    # Set Flash Wait States to 7 cycles (6+1)
    dap.WriteD32(long(eefc_fmr), 0x00000600)

    written = 0
    while written < length:
        write_flash_page(address, written, data)
        written += PAGE_SIZE
        address += PAGE_SIZE


def prog_read(type_of_mem, address, length, data):
    log.info("RI4ProgramInterface: Reading %0x bytes to address 0x%0x of %s memory" % (
        length, address, type_of_mem))

    global did_read_operation
    did_read_operation = True

    if str(type_of_mem) == "Cfg":
        gpnvm_address = address & 0x1F
        dap.WriteD32(long(eefc_fcr), eefc_cmd_ggpb)
        read_index = 0
        data_index = 0
        read_data = 0
        while read_index < (gpnvm_address + length):
            if read_index % 4 == 0:
                read_data = dap.ReadD32(long(eefc_frr))
                log.info("Debug:: GPNVM at address 0x%0X, value: 0x%0X" %
                         (address, read_data))
            if read_index >= gpnvm_address:
                data[data_index] = 0xFF & read_data
                data_index += 1
            read_data = read_data >> 8
            read_index += 1
        return
    dap.ReadMem(address, data, 0, length)


def verify_transfer(type_of_mem, address, data, length):
    log.info("RI4ProgramInterface: Verifying %d bytes to address 0x%0x of %s memory" % (
        length, address, type_of_mem))


def end_of_operations():
    log.info("RI4ProgramInterface: End of operations")
    if was_running and did_read_operation:
        if flash_strategy == 0:
            run_target()
        if flash_strategy == 1:
            log.info("Target was running and we did prog_read, release it now")
            release_from_reset()
    dap.Disconnect()


# this file contains all the methods that satisfy the APIs exposed by ScriptBasedController
# RI4DebugInterfaceWithBP

global g_in_debug_mode
g_in_debug_mode = False


def begin_debug_session():
    log.info("Debug:: Begin debug session")
    dap.Connect(True, communication_freq)
    global g_in_debug_mode
    issueResetAndWait()
    g_in_debug_mode = True


def debug_read(mem_type, start, length, data):
    log.info("Debug:: Reading %d bytes at start address 0x%0x (%s)" %
             (length, start, mem_type))
    dap.ReadMem(start, data, 0, length)


def debug_write(mem_type, start, length, data):
    log.info("Debug:: Writing %d bytes at start address 0x%0x (%s)" %
             (length, start, mem_type))
    dap.WriteMem(start, data, 0, length)


def is_target_in_debug_mode():
    log.info("Debug:: Is target in debug mode? %s" % g_in_debug_mode)
    return g_in_debug_mode


def get_pc():
    return dap.GetARMReg(15)


def run_target():
    log.info("Target to be set to running")
    dap.WriteD32(dap.DHCSR, DBGKEY | C_DEBUGEN)  # 0xa05f0001


def halt_target():
    log.info("Target to be halted ")
    dap.WriteD32(dap.DHCSR, DBGKEY | C_HALT | C_DEBUGEN)  # 0xa05f0003


def step_target():
    log.info("Target is to be stepped")
    dap.WriteD32(dap.DHCSR, DBGKEY | C_MASKINTS |
                 C_HALT | C_DEBUGEN)  # 0xa05f000b
    dap.WriteD32(dap.DHCSR, DBGKEY | C_MASKINTS |
                 C_STEP | C_DEBUGEN)  # 0xa05f000d
    dap.WriteD32(dap.DHCSR, DBGKEY | C_HALT |
                 C_DEBUGEN)             # 0xa05f0003


def set_pc(pc):
    log.info("Debug:: set pc to 0x%0x" % pc)
    dap.SetARMReg(15, pc)


def set_sw_bp(address, instruction, flags):
    """
      * Sets/clears a software breakpoint
      * @param address -> the address of the software breakpoin
      * @param instruction -> the instruction to be programmed (either the software breakpoint
      * opcode or the original instruction the software breakopint was replacing).
      * @param flags -> One or more of the SWBPFlags listed below
      * @return returns the original/old opcode at address
    """
    log.info("Debug:: set bp at address 0x%0x, store instructions 0x%0x, flags = 0x%0x" % (
        address, instruction, flags))
    # Accept addressing both from FLASH_START and from 0x0
    addr = address & (FLASH_START-1)

    single_page_access = False
    buffer_size = PAGE_SIZE * 16
    # If address is within the first 16kb a single page read-modify-write can be used.
    if addr < (2 * 8 * 1024):
        buffer_size = PAGE_SIZE
        single_page_access = True

    buffer_mask = long(buffer_size-1)
    data_buffer = bytearray(buffer_size)
    # Get the start address to the flash page(es) we need to erase
    start_addr = addr & ~(buffer_mask)
    absolute_start_addr = address & ~(buffer_mask)
    # Get BP address within the buffer
    bp_addr = addr & buffer_mask
    prog_read("pgm", absolute_start_addr, buffer_size, data_buffer)
    #dap.ReadMem(start_addr, data_buffer, 0, buffer_size)
    org_inst = 0
    n = 0
    # Replace instruction in data_buffer
    while(n < 2):
        org_inst += data_buffer[bp_addr+n] << (n*8)
        data_buffer[bp_addr+n] = ((instruction >> (n*8)) & 0xff)
        n = n+1

    if single_page_access:
        dap.WriteMem(start_addr, data_buffer, 0, PAGE_SIZE)
        # Remove flash offset, if any, and mask away page internal address bits.
        # Then shift right once to position page_number in the FARG bitfield in EEFC_FCR
        page_number = (addr & 0x3ffe00)/2
        # Erase and write page
        dap.WriteD32(long(eefc_fcr), eefc_cmd_ewp | page_number)
        waitForFlashReady()
    else:
        # Erase 16 pages (16pages == buffer_size). The "0x200" sets the number of pages to erase.
        dap.WriteD32(long(eefc_fcr), eefc_cmd_epa | (start_addr >> 1) | 0x200)
        waitForFlashReady()
        prog_write("Pgm", absolute_start_addr, buffer_size, data_buffer)
    return org_inst


def reset_target():
    issueResetAndWait()


def is_target_running():
    d = dap.ReadD32(dap.DHCSR)
    return (0 == (d & S_HALT))


def end_debug_session():
    global g_in_debug_mode
    g_in_debug_mode = False
    dap.Disconnect()
    log.info("Debug:: End debug session")
