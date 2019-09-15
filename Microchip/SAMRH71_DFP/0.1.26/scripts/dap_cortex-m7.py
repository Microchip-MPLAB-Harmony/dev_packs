efc_cmd_getd = 0x5a000000
efc_cmd_wp   = 0x5a000001
efc_cmd_wpl  = 0x5a000002
efc_cmd_ea   = 0x5a000005
efc_cmd_epa  = 0x5a000007
efc_cmd_slb  = 0x5a000008
efc_cmd_clb  = 0x5a000009
efc_cmd_glb  = 0x5a00000A
efc_cmd_sgpb = 0x5a00000B
efc_cmd_cgpb = 0x5a00000C
efc_cmd_ggpb = 0x5a00000D

if "RH71" in device:
    FLASH_START = 0x10000000
    PAGE_SIZE = 256
    GPNVM_BIT_MASK = 0x2   # Bit mask for user changeable GPNVM bits
    efc_fmr  = 0x40004000  # HEFC Flash Mode Register
    efc_fcr  = 0x40004004  # HEFC Flash Command Register
    efc_fsr  = 0x40004008  # HEFC Flash Status Register
    efc_frr  = 0x4000400c  # HEFC Flash Result Register
    efc_fpmr = 0x40004040  # HEFC Flash Power Management Register
    efc_wpmr = 0x400040e4  # HEFC Write Protection Mode Register
    efc_cmd_ep = 0x5a000006  # available on SAMRH71, but not available on Canopus (SAME70, S70, V70/71)
    rstc_cr = 0x40100200
    rstc_sr = 0x40100204
    rstc_mr = 0x40100208
else:
    FLASH_START = 0x0400000
    PAGE_SIZE = 512
    GPNVM_BIT_MASK = 0x183 # Bit mask for user changeable GPNVM bits
    efc_fmr  = 0x400e0c00  # EEFC Flash Mode Register
    efc_fcr  = 0x400e0c04  # EEFC Flash Command Register
    efc_fsr  = 0x400e0c08  # EEFC Flash Status Register
    efc_frr  = 0x400e0c0c  # EEFC Flash Result Register
    efc_wpmr = 0x400e0ce4  # EEFC Write Protection Mode Register
    efc_cmd_ewp = 0x5a000003  # available on Canopus (SAME70, S70, V70/71), but not available on SAMRH71
    efc_cmd_ewpl = 0x5a000004  # available on Canopus (SAME70, S70, V70/71), but not available on SAMRH71
    rstc_cr = 0x400e1800
    rstc_sr = 0x400e1804
    rstc_mr = 0x400e1808

# Flash strategy
# 0: Halt before programming/read mem operations, run afterwards
# 1: Reset and halt before programming/read mem operations, release from reset afterwards
if "RH71" in device:
    flash_strategy = 0
else:
    flash_strategy = 1
was_running = False
did_read_operation = False
need_reset_for_read_operations = False

comm_iface = True if settings["COM_INTERFACE"].lower()=="swd" else False
comm_speed = 8000000 if settings["COM_AUTOSPEED"] else settings["COM_SPEED"]

def begin_communication_session():
    dev.SetApiLogging(1)
    log.setShowOutput(True)

def begin_programming_operation():
    log.info("begin_programming_operation")
    dev.Connect(comm_iface, comm_speed)

    global was_running
    was_running = False
    global did_read_operation
    did_read_operation = False
    if is_target_running():
        was_running = True
        halt_or_raise()
    global need_reset_for_read_operations
    need_reset_for_read_operations = True if flash_strategy == 1 else False

def bitsInByte(byteValue):
    for i in xrange(8):
        yield (byteValue >> i) & 1

def log_efc_fsr_error(fsr):
    err_string = ""
    if fsr & 0x00080000: # FSR_MECCEMSB
        err_string = "MECCEMSB"
    if fsr & 0x00040000: # FSR_UECCEMSB
        err_string += " UECCEMSB"
    if fsr & 0x00020000: # FSR_MECCELSB
        err_string += " MECCELSB"
    if fsr & 0x00010000: # FSR_UECCELSB
        err_string += " UECCELSB"
    if fsr & 0x10: # FSR_WREER
        err_string += " WREER"
    if fsr & 8: # FSR_FLERR
        err_string += " FLERR"
    if fsr & 4: # FSR_FLOCKE
        err_string += " FLOCKE"
    if fsr & 2: # FSR_FCMDE
        err_string += " FCMDE"
    if err_string == "":
        return
    err_string = err_string + (" from the flash controller after command 0x%0x" % (dev.Read32(efc_fcr)))
    log.error(err_string)

def waitForFlashReady():
    n = 0
    max_retries = 100
    while n < max_retries:
        r = dev.Read32(efc_fsr)
        log_efc_fsr_error(r)
        if r & 1: # FSR_FRDY:
            break
        dev.Delay(100000) # 100ms
        n = n+1
    if n == max_retries:
        raise Exception("Timeout waiting for flash ready")

def halt_or_raise():
    halt_target()
    n = 0
    while n < 100:
        if not is_target_running():
            return
        dev.Delay(100000) # 100ms
        n = n+1
    raise Exception("Failed to halt target!")

def resetPeripheralsWithRstc():
    dev.Write32(rstc_mr, 0xa5000b00) # long(RSTC_KEY) | rstc_erstl)
    dev.Write32(rstc_cr, 0xa5000001)  # long(RSTC_KEY) | PROCRST)

    n = 0
    max_retries = 100
    while n < max_retries:
        dev.Delay(10000)  # 10ms
        r = dev.Read32(rstc_sr)
        if r & 0x00020000: # SRCMP
            continue  # Software reset in progress
        if r & 0x00010000: # NRSTL
            break
        n = n+1

    if n == max_retries:
        raise Exception("timeout in reset")

    dev.Write32(rstc_mr, 0xa5000001) # long(RSTC_KEY) | URSTEN) # Enable user reset again (URSTEN == 1)


def blank_check(): #mplab
    log.info("Prog: Blank check")

def erase():#mplab
    log.info("Prog: Erase")

    reset_and_halt()
    dev.Write32(efc_fcr, efc_cmd_ea)
    #log.info("Issued Erase All, wait for flash ready")
    waitForFlashReady()


def reset_and_halt():
    log.info("Prog: Reset and halt")
    # check run state and clear S_RESET_ST so that we can use it to detect end of reset later
    if is_target_running():
        halt_or_raise()

    dev.Write32(arm.DEMCR, 0x01000001) # TRCENA | VC_CORERESET) 

    if "RH71" in device:
        # SAMRH71 use SYSRESETREQ to reset core + peripherals, will loose connection so need to reconnect.
        try:
            dev.Write32(arm.AIRCR, 0x05fa0004) # VECTKEY | SYSRESETREQ)  # 1=VECTRESET 4=SYSRESETREQ
        except:
            log.info("Reset with SYSRESETREQ, lost connection, try to reconnect to the device")
            dev.Disconnect()
            dev.Connect(comm_iface, comm_speed)
    else:
        # Canopus use RSTC (PROCRST) to reset peripherals and VECTRESET to reset core.
        resetPeripheralsWithRstc()
        dev.Write32(arm.AIRCR, 0x05fa0001) # VECTKEY | VECTRESET)  # 1=VECTRESET 4=SYSRESETREQ

    n = 0
    max_retries = 100
    seenReset = False
    while n < max_retries:
        dhcsr = dev.Read32(arm.DHCSR)
        # log.debug("S_RESET_ST = %s / %s at PC = %X" % ("1" if dhcsr & S_RESET_ST else "0", "Halted" if dhcsr & S_HALT else "RUNNING", get_pc()))
        if (dhcsr & 0x02000000): # wait for S_RESET_ST
            seenReset = True
        hasHalted = 0 != (dhcsr & 0x20000) # S_HALT
        if seenReset:
            if hasHalted:  # wait for S_HALT
                break
        dev.Delay(100000) # 100ms
        n = n+1
    dev.Write32(dev.DEMCR, 0x01000000) # TRCENA reset VC_CORERESET bit
    if n == max_retries:
        raise Exception("timeout in reset")

    if "RH71" in device:
        initialize_HEFC()



def initialize_HEFC(): # only for SAMRH71
    log.info("Prog: Initialize HEFC")

    # set up GCLK for HEFC
    dev.Write32(0x40100254, 0x00008000) # disable watchdog        wdt_mr
    dev.Write32(0x4000C020, 0x00370028) # Set internal RC 10 MHz  ckgr_mor
    dev.Write32(0x4000C10C, 0x30401432) # Set GCLK with div 5     pmc_pcr

    # reset problem for flash (for rev 2.0 of device), can read flash only every second reset
    # without this workaround
    dev.Write32(efc_fpmr, 0x00013F0F) # set var factor at 0x3F  1111
    dev.Write32(efc_fpmr, 0x00013F0E) # Power OFF flash         1110
    dev.Write32(efc_fpmr, 0x00003F0D) # Power ON flash          1101

    #waitForPWSReady
    n = 0
    max_retries = 100
    
    while n < max_retries:
        r = dev.Read32(efc_fpmr)
        if r & 2: # PWS_STAT
            dev.Delay(250000)  # wait 250ms after seeing PWS_STAT bit
            break
        dev.Delay(100000) # 100ms
        n = n+1
    if n == max_retries:
        raise Exception("Timeout waiting for PWS ready")
    

def hold_in_reset():#mplab
    log.info("Prog: Hold in reset")
    dev.Connect(comm_iface, comm_speed)
    reset_and_halt()
    dev.Disconnect()
    
def release_from_reset():#mplab
    log.info("Prog: Release from reset")
    # toggle reset line
    dev.Pins(0,dev.RESET,1000)
    dev.Pins(dev.RESET,dev.RESET,1000) # now float reset back

    # workaround if reset line is not connected on board
    # dev.Write32(dev.AIRCR, 0x05fa0004) # VECTKEY | SYSRESETREQ
    
def write_flash_page(adr, ofs, data):
    log.info("Write flash page adr=0x%0x, ofs=0x%0x" % (adr, ofs))
    dev.Write(adr, data, ofs, PAGE_SIZE)
    # Remove flash offset, if any, and mask away page internal address bits.
    # Position page_number in the FARG bitfield in EFC_FCR
    if "RH71" in device:
        page_number = adr & 0x3fff00 # SAMRH71 has page_size 256
    else:
        page_number = (adr & 0x3ffe00)/2 # Canopus has page_size 512
    dev.Write32(efc_fcr, efc_cmd_wp | page_number)
    waitForFlashReady()
    log.info("Written page %d (0x%0x) at 0x%0x" %
             (page_number/256, page_number*2, adr))


def prog_write(type_of_mem, address, length, data):#mplab
    log.info("Prog: Writing %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))
    if str(type_of_mem) == "Cfg":
        # Converting value to indexing access, and writing one GPNVM bit at the time
        mask = GPNVM_BIT_MASK  # Use mask to avoid writing to reserved bits
        bit_index = 0
        for val in data:
            for bit in bitsInByte(val):
                if(mask & 0x01):
                    if(bit == 1):
                        log.info("Debug:: Setting GPNVM bit %d" % bit_index)
                        dev.Write32(efc_fcr,
                                     efc_cmd_sgpb | (bit_index << 8))
                        waitForFlashReady()
                    else:
                        log.info("Debug:: Clearing GPNVM bit %d" % bit_index)
                        dev.Write32(efc_fcr,
                                     efc_cmd_cgpb | (bit_index << 8))
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
        log.error("Error: Target is running when it should be halted")
        halt_or_raise()

    if "RH71" not in device: # SAMRH71 don't support wait states (ref prelim data sheet)
        # Set Flash Wait States to 7 cycles (6+1)
        dev.Write32(efc_fmr, 0x00000600)

    written = 0
    while written < length:
        write_flash_page(address, written, data)
        written += PAGE_SIZE
        address += PAGE_SIZE


def prog_read(type_of_mem, address, length, data):#mplab
    log.info("Prog: Reading %d bytes from address 0x%0x of %s memory..." % (length, address, type_of_mem))

    global need_reset_for_read_operations
    if need_reset_for_read_operations:
        reset_and_halt() # necessary for reading flash with specific projects, ref MPLABX-4516
        need_reset_for_read_operations = False

    global did_read_operation
    did_read_operation = True

    if str(type_of_mem) == "Cfg":
        gpnvm_address = address & 0x1F
        dev.Write32(efc_fcr, efc_cmd_ggpb)
        read_index = 0
        data_index = 0
        read_data = 0
        while read_index < (gpnvm_address + length):
            if read_index % 4 == 0:
                read_data = dev.Read32(efc_frr)
                log.info("Debug:: GPNVM at address 0x%0X, value: 0x%0X" %
                         (address, read_data))
            if read_index >= gpnvm_address:
                data[data_index] = 0xFF & read_data
                data_index += 1
            read_data = read_data >> 8
            read_index += 1
        return
    dev.Read(address, data, 0, length)


def verify_transfer(type_of_mem, address, data, length):#mplab
    log.info("Prog: not implemented: Verifying %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))

def end_of_operations():#mplab
    log.info("Prog: End of operations")
    if was_running and did_read_operation:
        if flash_strategy == 0:
            run_target()
        if flash_strategy == 1:
            log.info("Target was running and we did prog_read, release it now")
            release_from_reset()
    dev.Disconnect()

global g_is_running 
g_is_running = True

def begin_debug_session():#mplab
    log.info("Debug:: Begin debug session")
    dev.Connect(comm_iface, comm_speed)
    reset_and_halt()

def debug_read(mem_type, start, length, data):#mplab
    log.info("Debug: Reading %d bytes at start address 0x%0x (%s)" % (length, start, mem_type))
    dev.Read(start, data, 0, length)

def debug_write(mem_type, start, length, data):#mplab
    log.info("Debug: Writing %d bytes at start address 0x%0x (%s)" % (length, start, mem_type))
    dev.Write(start, data, 0, length)

def get_pc():#mplab
    return dev.ReadReg64(arm.PC)

def run_target():#mplab
    log.info("Debug: Run target")
    dev.Write32(arm.DHCSR, 0xa05f0001) # DBGKEY|C_DEBUGEN

def halt_target():#mplab
    log.info("Debug: Halt target")
    #print_DHCSR("Target to be halted ")
    dev.Write32(arm.DHCSR, 0xa05f0003) # DBGKEY|C_HALT|C_DEBUGEN

def step_target():#mplab
    log.info("Debug: Stepping at pc 0x%0x" % get_pc())
    #get_pc()
    dev.Write32(arm.DHCSR, 0xa05f000b)  #DBGKEY | C_DEBUGEN | C_HALT | C_MASKINTS
    dev.Write32(arm.DHCSR, 0xa05f000d)  #DBGKEY | C_DEBUGEN | C_STEP | C_MASKINTS
    dev.Write32(arm.DHCSR, 0xa05f0003)  #DBGKEY | C_DEBUGEN | C_HALT

def set_pc(pc):#mplab
    log.info("Debug: Set pc to 0x%0x" % pc)
    dev.WriteReg64(arm.PC,pc)

def set_sw_bp(address, instruction, flags):
    """
      * Sets/clears a software breakpoint
      * @param address -> the address of the software breakpoint
      * @param instruction -> the instruction to be programmed (either the software breakpoint
      * opcode or the original instruction the software breakopint was replacing).
      * @param flags -> One or more of the SWBPFlags listed below
      * @return returns the original/old opcode at address
    """
    log.info("Debug:: set/remove bp at address 0x%0x, instructions 0x%0x, flags = 0x%0x" % (
        address, instruction, flags))
    # Accept addressing both from FLASH_START and from 0x0
    addr = address & (FLASH_START-1)

    single_page_access = False
    buffer_size = PAGE_SIZE * 16
    # Canopus: single page read-modify-write is possible within the first 16kb of flash.
    # SAMRH71: single page read-modify-write is possible in whole flash.
    if addr < 16384 or "RH71" in device:
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

    org_inst = 0
    n = 0
    # Replace instruction in data_buffer
    while(n < 2):
        org_inst += data_buffer[bp_addr+n] << (n*8)
        data_buffer[bp_addr+n] = ((instruction >> (n*8)) & 0xff)
        n = n+1

    if single_page_access:
        if "RH71" in device:
            # Remove flash offset, if any, and mask away page internal address bits.
            # FARG bitfield in EFC_FCR
            page_number = addr & 0x3fff00 # SAMRH71 has page_size 256

            # Erase and write page (two separate commands on SAMRH71)
            dev.Write32(efc_fcr, efc_cmd_ep | page_number)
            waitForFlashReady()
            dev.Write(start_addr, data_buffer, 0, PAGE_SIZE)
            dev.Write32(efc_fcr, efc_cmd_wp | page_number)
            waitForFlashReady()
        else:
            dev.Write(start_addr, data_buffer, 0, PAGE_SIZE)

            # Remove flash offset, if any, and mask away page internal address bits.
            # Then shift right once to position page_number in the FARG bitfield in EFC_FCR
            page_number = (addr & 0x3ffe00)/2 # Canopus has page_size 512

            # Erase and write page (one single command on Canopus)
            dev.Write32(efc_fcr, efc_cmd_ewp | page_number)
            waitForFlashReady()
    else:
        # Erase 16 pages (16pages == buffer_size). The "0x200" sets the number of pages to erase.
        dev.Write32(efc_fcr, efc_cmd_epa | (start_addr >> 1) | 0x200)
        waitForFlashReady()
        prog_write("Pgm", absolute_start_addr, buffer_size, data_buffer)
    return org_inst


def reset_target():#mplab
    reset_and_halt()

def is_target_running():#mplab
    global g_is_running
    dhcsr = dev.Read32(arm.DHCSR)
    state =  0 == (dhcsr & 0x20000) # S_HALT
    if state != g_is_running:
        log.info("Debug: Changed running state to %s" % state)
        g_is_running = state
    return g_is_running

def end_debug_session():#mplab
    dev.Disconnect()
