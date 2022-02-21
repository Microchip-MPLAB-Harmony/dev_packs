# This file is autogenerated
comm_speed=2000000
erase_as_needed = True  # used in prog_write
comm_iface = True
reset_delay = 0
has_reset = True
show_output = False
log_level = 0

def _begin_debug_session():
    dev.Connect(comm_iface, comm_speed)
    reset_and_halt()
    cache_onDebugStart()

def _begin_communication_session(): 
    global log_level,show_output,reset_delay, target_was_reset, has_reset, _stealth_runstate    
    log_level    = settings.getNumeric("script.log_level",log_level)
    show_output  = settings.getBool("script.show_output",show_output)
    has_reset  = settings.getBool("script.has_reset",has_reset)
    reset_delay = settings.getNumeric("script.reset_delay",reset_delay)

    target_was_reset = False
    _stealth_runstate = 2
    dev.SetApiLogging(log_level)
    log.setShowOutput(show_output)

    global comm_iface, comm_speed, erase_as_needed
    comm_iface = settings.getString("communication.interface", "swd") == "swd"
    comm_speed = settings.getNumeric("communication.frequency", comm_speed)
    erase_as_needed = True  # used in prog_write

    init_mem_handlers()

def _end_communication_session(): 
    _end_of_operations()

def onShowPropsDFP2(t):
    ide.addBooleanProperty(t,"arm.use_vtor" , "*|programoptions|programoptions.eraseb4program","Set PC and SP to VTOR","After reset, force PC and SP to the entries defined by the VTOR", False)
    ide.addTextProperty(t,"arm.vtor_adr" , "*|programoptions|programoptions.eraseb4program","VTOR table or numerical address", "Enter address of vector table", "exception_table")
    ide.addPropCategory(t,"diagnostics" , "*|toolpack", "Diagnostics")
    ide.addBooleanProperty(t,"script.show_output" , "*|diagnostics|*","Output diagnostic logging","Show diagnostic text in the Output window", False)
    ide.addTextProperty(t,"script.log_level" , "*|diagnostics|*","Diagnostic log level","Set diagnostic level (usually 0 1 or 3)", "1")
    ide.addTextProperty(t,"script.reset_delay" , "*|diagnostics|*","Additional delay after reset","Enter additional RST settling delay in msec", "0")
    ide.addBooleanProperty(t,"script.has_reset" , "*|diagnostics|*","Uncheck if RESET line is not wired","Normally checked. Uncheck if the target does not have RST connected to the debugger", True)
    ide.addTextProperty(t, "loader.board_file", "*|programoptions|**","Board file path","Set the path of board file", "${ProjectDir}/board.xboard")

def print_dhcsr_v(t, d):
    log.info(t + arm.getDHCSRString(d))

def print_dhcsr(text):
    try:
        d = dev.Read32(arm.DHCSR)
        print_dhcsr_v(text, d)
        return d
    except:
        log.log("DHCSR is unreadable")
        return 0

def _debug_read(mt, start, length, data):
    cache_onDataRead(start,length)
    _prog_read(mt, start, length, data)

def _debug_write(mt, start, length, data):
    if str(mt) == "Pgm":
        cache_invalidateInstrCache()
        _flash_write(start, length, data, True)
        return

    cache_onDataWrite(start,length)
    dev.Write(start, data, 0, length)

def debug_write_supports_flash():
    return 1

def _get_pc():
    try:
        pc = dev.ReadReg64(15)
    except:
        log.error("get_pc returned error")
        return 0
    return pc
    
def _mem_read(start, length, data):
    dev.Read(start, data, 0, length)

def _mem_write(start, length, data):
    dev.Write(start, data, 0, length)

def _run_target():
    cache_onRun()
    dev.Write32(arm.DHCSR, 0xa05f0001)  # DBGKEY | C_DEBUGEN | C_HALT

def _halt_target():
    dev.Write32(arm.DHCSR, 0xa05f0003)  # DBGKEY | C_DEBUGEN | C_HALT

def _step_target():
    cache_onRun()
    dev.Write32(arm.DHCSR, 0xa05f000b)  # DBGKEY | C_DEBUGEN | C_HALT | C_MASKINTS
    dev.Write32(arm.DHCSR, 0xa05f000d)  # DBGKEY | C_DEBUGEN | C_STEP | C_MASKINTS
    dev.Write32(arm.DHCSR, 0xa05f0003)  # DBGKEY | C_DEBUGEN | C_HALT
    cache_onStop()

def _set_pc(pc):
    dev.WriteReg64(15, pc)

def print_byte_array(text, array, index, size):
    string = text
    for i in range(size):
        string += " %x" % array[i+index]
    log.info(string)

g_is_running = True
def _is_target_running():
    global g_is_running
    dhcsr = dev.Read32(arm.DHCSR)
    state = 0 == (dhcsr & 0x20000)
    if state != g_is_running:
        log.info("Debug: target is now running" if state else "Debug: target has halted")
        g_is_running = state 
    if not g_is_running:
        cache_onStop()
    return g_is_running

def _reset_target(): 
    reset_and_halt()

def _end_debug_session(): 
    #disable hw bp
    fpb = dev.Read32(0xe0002000)
    if 0 != (fpb & 1):
        dev.Write32(0xe0002000,2|(fpb&0xFFFFfffe))
    run_target()
    dev.Disconnect()


def set_sw_bp_gen(address, erase_size, instruction, flags):  #mplab
    global erase_as_needed
    log.debug("Debug: set/reset bp at address 0x%0x, store instructions 0x%0x, flags = 0x%0x" % (address, instruction, flags))
    if address >= 0x20000000:
        erase_size = 4 
    else:
        clear_and_report_flash_error()


    erase_page_start = address & ~(erase_size-1)
    address_in_erase_page = address & (erase_size-1)

    data = bytearray(erase_size)
    cache_invalidateInstrCache()
    dev.Read(erase_page_start, data, 0, erase_size)
    return_value = data[address_in_erase_page] | (data[address_in_erase_page+1] << 8)

    # Insert software breakpoint instruction in the data
    data[address_in_erase_page] = instruction & 0xFF
    data[address_in_erase_page+1] = (instruction >> 8) & 0xFF

    if erase_size == 4:
        dev.Write(erase_page_start, data, 0, erase_size)
    else:
        erase_as_needed = True
        prog_write("Pgm", erase_page_start, erase_size, data)
    return return_value

# device specific functions


def dap_Read8(adr):
    return dev.Read8(adr)

def dap_Write8(adr,val):
    return dev.Write8(adr,val)

def dap_Read16(adr):
    return dev.Read16(adr)

def dap_Write16(adr,val):
    return dev.Write16(adr,val)

def dap_Read32(adr):
    return dev.Read32(adr)

def dap_Write32(adr,val):
    return dev.Write32(adr,val)

def dap_Read(adr,b,o,l):
    return dev.Read(adr,b,o,l)

no_device = False

def set_globals(dev_copy, utils_copy, settings_copy, device_copy, log_copy):
    global dev, utils, settings, device, log, no_device
    dev = dev_copy
    utils = utils_copy
    settings = settings_copy
    device = device_copy
    log = log_copy
    no_device = True

def _hold_in_reset(): 
    global target_was_reset
    global has_reset
    if not has_reset:
        alt_hold_in_reset()
        return
    log.info("Prog: Hold in reset")
    try:
        dev.SetInterface(dev.SWD if comm_iface else dev.JTAG)
    except:
        dev.Connect(comm_iface, comm_speed)
    dev.Pins(0, dev.RESET, 1000)
    target_was_reset = True
    # do not dev.Disconnect() . The debugger needs to stay connected to actively keep the reset line low.

def alt_hold_in_reset(): 
    # Alternative if RESET pin is not connected to debugger
    log.info("Prog: Hold in reset , no reset line")
    dev.Connect(comm_iface, comm_speed)
    reset_and_halt()

def _release_from_reset():
    global target_was_reset,reset_delay
    global has_reset
    if target_was_reset:
        return
    if not has_reset:
        log.info("Prog: Release from reset (soft reset)")
        dev.Connect(comm_iface, comm_speed)
        reset_and_halt()
        run_target()
        return
    log.info("Prog: Release from reset (float reset line)")
    # toggle reset line
    try:
        dev.SetInterface(dev.SWD if comm_iface else dev.JTAG)
    except:
        dev.Connect(comm_iface, comm_speed)
    dev.Pins(0, dev.RESET, 1000)
    dev.Delay(reset_delay)
    dev.Pins(dev.RESET, dev.RESET, 1000)  # now float reset back
    dev.Delay(reset_delay)
    target_was_reset = True
    try:
        dev.Disconnect() #we are done with the part
    except:
        pass

def alt_release_from_reset():
    log.info("Prog: Release from reset, no reset line")
    dev.Connect(comm_iface, comm_speed)
    dev.Write32(dev.AIRCR, 0x05fa0004)  # VECTKEY | SYSRESETREQ
dsu_statusa = 0x41002101
dsu_ctrl = 0x41002100
    
class nvm:
    page_size = 64
    erase_size = 256
    aux_size = 256
    cmdReg = 0x41004000
    cfgReg  = 0x41004004
    stsReg = 0x41004018
    intReg = 0x41004014
    adrReg = 0x4100401c
    AUX_ERASE = 0xA505
    ROW_ERASE = 0xA502
    RWW_ERASE = 0xA51A
    RWW_WRITE = 0xA51C
    erase_time = 100
    UROW = 0x00804000
    RWW = 0x00400000
    SSB  = 0xA545

def cache_invalidate():
    nvm_cmd(0xA546,20)
def cache_onDebugStart():
    cache_invalidate()
def cache_onStop():
    cache_invalidate()

def cache_onRun():
    pass    
def cache_onDataRead(adr,size):
    pass #done in onStop
def cache_onDataWrite(adr,size):
    pass #done in onStop
def cache_invalidateInstrCache():
    pass #done in onStop

def is_nvm_ready():
    intFlag = dap_Read8(nvm.intReg)
    isReady = 0 != (intFlag & 1)
    isError = 0 != (intFlag & 2)
    if not isError:
        return isReady

    status = dap_Read16(nvm.stsReg)
    log.error("NVMCtrl error bits set! (STATUS = 0x%X, INTFLAG = 0x%X)" % (status, intFlag))
    dap_Write16(nvm.stsReg, status | 0x001E) # clear Error and Load bits in Status
    dap_Write8(nvm.intReg, intFlag | 2) # clear Error bit in INTFLAG
    err = " error"
    if status & 4:
        err = " PROGE" + err
    if status & 8:
        err = " LOCKE" + err
    if status & 16:
        err = " NVME" + err
    raise Exception("The NVM controller reports an" + err)

def clear_and_report_flash_error():
    try:
        is_nvm_ready()
    except:
        log.error("NVM controller is in an error state while setting a swbp. Clearing the error")

# global variable keeps previous value of flash cfg register while programming
prevCfgReg = 0x0

def cfg_nvmctrl():
    global prevCfgReg
    prevCfgReg = dap_Read32(nvm.cfgReg)
    newCfgReg = (prevCfgReg & 0xFFFFFF61) | 0x1e  # 15 wait states and clear MANW
    if newCfgReg != prevCfgReg:
        dap_Write32(nvm.cfgReg, newCfgReg)

def restore_nvmctrl():
    #log.debug("reset_cfg_word: prevCfgReg = %x" % prevCfgReg)
    dap_Write32(nvm.cfgReg, prevCfgReg)

def erase_row(addr,cmd):
    dap_Write32(nvm.adrReg,addr/2)
    nvm_cmd (cmd, 20)

def _begin_programming_operation():
    global erase_as_needed,has_reset
    erase_as_needed = True
    
    reset_extension()
    if has_reset:
        statusa = dev.Read8(dsu_statusa) # verify CRSTEXT is set
        if 0 == (statusa & 2): #STATUSA.CRSTEXT
            log.error("Device could not enter reset extension, check cap on RST line")
            raise Exception("Reset error.")
        else:
            log.info("Device entered reset extension")
    try:
        reset_and_halt()  # clear CRSTEXT
    except:
        pass

def _erase():
    global erase_as_needed
    global set_security_bit

    set_security_bit = False
    chip_erase()
    reset_extension() # reset_extension is required after a chip erase when chip(e.g. SAME54) was secured
    reset_and_halt()
    
    if settings.getBool("x.erase.clearprot", True):
        restoreBOOTPROTandNVMCTRLREGIONLOCKS()

def reset_and_halt():
    halt_target()
    dev.Write32(arm.DEMCR, 0x01000001) # TRCENA  | VC_CORERESET
    dev.Write32(arm.AIRCR, 0x05fa0004) # VECTKEY | SYSRESETREQ
    n = 0
    retries = 10
    seenReset = False
    while n<retries:
        dhcsr = dev.Read32(arm.DHCSR)
        #print_dhcsr_v("arm.DHCSR",dhcsr)
        if (dhcsr & 0x02000000): # wait for S_RESET_ST
            seenReset=True
            dev.Write32(arm.DHCSR, 0xa05f0003) # DBGKEY|C_HALT|C_DEBUGEN
            dev.Write8(dsu_statusa, 2) # release the cpu 0x41002101,0x2  STATUSA.CRSTEXT
            dhcsr = print_dhcsr("Cleared CRSTEXT")
        hasHalted = 0 != (dhcsr & 0x20000) # S_HALT
        if seenReset:
            if hasHalted: # wait for S_HALT
                break
        dev.Delay(100000)
        n=n+1
    dev.Write32(arm.DEMCR, 0x01000000) # TRCENA
    if n==retries:
        raise Exception("The device did not come out of reset")

def reconnectAfterExtension():
    dev.Connect(comm_iface, comm_speed)

def write_row(adr, ofs, data,len):
    dev.Write(adr, data, ofs , len)
    wait_nvm_ready(10)

def _prog_write_internal(type_of_mem, address, length, data): 
    global erase_as_needed

    if _handle_security_flags(address,length,data):
        return
        
    statusb = dap_Read8(dsu_ctrl + 2)
    if statusb & 1:
        raise Exception("Device is protected. A chip erase is needed to remove the protection.")

    if str(type_of_mem) != "Pgm" and  str(type_of_mem) != "Cfg" and str(type_of_mem) != "RWW":
        dev.Write(address, data, 0, length)
        return
    if address == nvm.UROW: # user page / fuses / configuration bits
        _flash_write_rng(address,length,data,nvm.AUX_ERASE)
        reset_and_halt()
    else:
        erase_cmd = nvm.RWW_ERASE if str(type_of_mem) == "RWW" or address >= 0x00400000 and address <= 0x00410000 else nvm.ROW_ERASE
        _flash_write_rng(address,length,data,erase_cmd if erase_as_needed else 0)

    erase_as_needed = True

def _flash_write_rng(address, length, data, erase_cmd):
    cfg_nvmctrl()
    written = 0
    # a flash row has 'erase_size' bytes
    while written < length:
        if erase_cmd != 0:
            erase_row(address, erase_cmd)
        if erase_cmd == nvm.AUX_ERASE:
            dev.Read32(address) # fix for MPLABX-4768. For the particular project provided in the Jira ticket, MPLAB need to to a read before write, otherwise the PC will be 0
        write_row(address,written,data, min(length - written, nvm.erase_size))
        #dev.Read(address,data1,0,nvm.erase_size)
        written += nvm.erase_size
        address += nvm.erase_size
    restore_nvmctrl()

def _flash_write(address, length, data, doerase): # for swbps
    _flash_write_rng(address, length, data, nvm.ROW_ERASE)

def _prog_read_internal(type_of_mem, address, length, data):    
    dev.Read(address,data,0,length)

def set_sw_bp(address, instruction, flags):#mplab
    return set_sw_bp_gen(address,nvm.erase_size,instruction,flags)

def restoreBOOTPROTandNVMCTRLREGIONLOCKS():
    b=bytearray(nvm.page_size)
    dev.Read(nvm.UROW, b, 0, nvm.page_size)
    if "M0" in architecture:
        if "JH" in device and "PIC32CM" in device:
            b[0] = b[0] | 0x0F # clear BOOTPROT
        else:
            b[0] = b[0] | 0x07 # clear BOOTPROT
        b[6] = 0xFF # clear NVMCTRL_REGION_LOCKS
        b[7] = 0xFF # clear NVMCTRL_REGION_LOCKS
    elif "M4" in architecture:
        b[3] = b[3] | 0x3C # clear BOOTPROT
        b[8] = 0xFF # clear NVMCTRL_REGION_LOCKS
        b[9] = 0xFF # clear NVMCTRL_REGION_LOCKS
        b[10] = 0xFF # clear NVMCTRL_REGION_LOCKS
        b[11] = 0xFF # clear NVMCTRL_REGION_LOCKS
    prog_write("Cfg", nvm.UROW, nvm.page_size, b)
    reset_and_halt()
target_was_reset = False
debug_session  = True

def begin_communication_session(): #mplab
    log.info("Begin comm session")
    _begin_communication_session()

def end_communication_session(): #mplab
    log.info("End comm session")
    _end_communication_session()

def begin_programming_operation(): #mplab
    global debug_session
    log.info("Begin operations")
    debug_session = False
    _begin_programming_operation()

def erase(): #mplab
    log.info("Erase")
    _erase()

def prog_write(type_of_mem, address, length, data): #mplab
    log.info("Writing %08x bytes to address 0x%08x of %s memory" % (length, address, type_of_mem))
    _prog_write(type_of_mem, address, length, data)

def prog_read(type_of_mem, address, length, data): #mplab
    log.info("Reading %08x bytes from address 0x%08x of %s memory" % (length, address, type_of_mem))
    _prog_read(type_of_mem, address, length, data)

def end_of_operations():#mplab
    log.info("End of operations")
    _end_of_operations()

def begin_debug_session():  #mplab
    log.info("Debug: Init debug session")
    global debug_session
    debug_session = True
    _begin_debug_session()

def debug_read(mt, start, length, data):  #mplab
    log.info("Debug: Reading %08x bytes at start address 0x%08x (%s)" % (length, start, mt))
    _debug_read(mt, start, length, data)

def debug_write(mt, start, length, data):  #mplab
    log.info("Debug: Writing %08x bytes at start address 0x%08x (%s)" % (length, start, mt))
    _debug_write(mt, start, length, data)

def set_pc(pc):  #mplab
    log.info("Debug: set pc to 0x%08x" % pc)
    _set_pc(pc)

def get_pc():  #mplab
    pc = _get_pc()
    log.info("Debug: get_pc PC=0x%08x" % pc)
    return pc

def run_target():#mplab
    log.info("Debug: run target")
    _run_target()

_stealth_runstate = 2
def halt_target():  #mplab
    global _stealth_runstate    
    log.info("Debug: halt target")
    _stealth_runstate = 2  # cancels stealth mode
    _halt_target()

def step_target():  #mplab
    log.info("Debug: stepping at pc 0x%08x" % get_pc())
    _step_target()

def reset_target(): #mplab
    log.info("Debug: reset")
    _reset_target()
    on_after_reset() # call autoload hook

def is_target_running():#mplab
    global _stealth_runstate
    if _stealth_runstate == 2:
        return _is_target_running()
    return _stealth_runstate != 0

def on_after_reset(): 
    if not debug_session:
        return
    if not settings.getBool("arm.use_vtor", False):
        return
    vtor_name  = settings.getString("arm.vtor_adr", "0")

    vtor = -1
    try:
        vtor = int(vtor_name,0)
    except:
        try:
            vtor=deb.GetSymbolAddress(vtor_name)
        except:
            log.error("Debug: failed to compute location of VTOR")
            return
    load_vtor(vtor) 
    pass

def load_vtor(adr):
    try:
        pc = dev.Read32(adr + 4)
        sp = dev.Read32(adr)
        set_pc(pc)
        dev.WriteReg64(arm.SP,sp)
        log.info("Setting pc=%08x and sp=%08x" % (pc, sp))
    except:
        log.error("Debug: failed to set PC and SP to contents of exception_table")

def on_program_done():
    on_after_reset()

def end_debug_session():  #mplab
    log.info("Debug: End debug session")
    _end_debug_session()

def verify_transfer(type_of_mem, address, data, length):  #mplab
    log.info("Verifying %08x bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))
    _verify_transfer(type_of_mem, address, data, length)

    

def _verify_transfer(type_of_mem, address, data, length):
    if len(data) != length:
        raise Exception("The given data and length mismatch")
    d = bytearray(length)
    prog_read(type_of_mem, address, length, d)
    if str(type_of_mem) == "Cfg":
        verify_config(address, data, d, "verify")
    else:
        for i in range(length):
            if data[i] != d[i]:
                raise Exception("Verify failed for mem type {}, at address 0x{:X}".format(str(type_of_mem), address + i))

global dev_cfg_masks_bytearray
dev_cfg_masks_bytearray = None

def init_masks_as_bytearray():
    global dev_cfg_masks_bytearray
    if dev_cfg_masks_bytearray:
        return
    dev_cfg_masks_bytearray = {}
    for address, val in dev_cfg_masks.items():
        dev_cfg_masks_bytearray[address    ] = int(val      ) & 0xFF
        dev_cfg_masks_bytearray[address + 1] = int(val >> 8 ) & 0xFF
        dev_cfg_masks_bytearray[address + 2] = int(val >> 16) & 0xFF
        dev_cfg_masks_bytearray[address + 3] = int(val >> 24) & 0xFF

def verify_config(address, expected, actual, error_string_prefix):
    try:
        # older versions of MPLAB X (<=v5.45) did not pass dev_cfg_masks
        # so very_config cannot be executed
        dev_cfg_masks 
    except:
        raise Exception("{} config is not implemented".format(error_string_prefix))
    init_masks_as_bytearray()

    for index, actual_val in enumerate(actual):
        current_address = address + index
        if current_address in dev_cfg_masks_bytearray:
            mask = dev_cfg_masks_bytearray[current_address]
            expected_val = expected[index] & mask
            actual_val &= mask
            if actual_val != expected_val:
                error_string = "{} failed at address 0x{:0X}, expected 0x{:0X}, got 0x{:0X}".format(error_string_prefix, current_address, expected_val, actual_val)
                raise Exception(error_string)

def is_memory_blank_all_ffs(type_of_mem):
    return str(type_of_mem) == "Pgm" or str(type_of_mem) == "UserID"
        
def blank_check():  #mplab
    log.info("Blank check")

def blank_check_mem(type_of_mem, address, length):  #mplab
    msg.print("Blank checking %08x bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))
    _blank_check_mem(type_of_mem, address, length)

def _blank_check_mem(type_of_mem, address, length):
    data = bytearray(length)
    prog_read(type_of_mem, address, length, data)
    if str(type_of_mem) == "Cfg":
        prog_read(type_of_mem, address, length, data)
        verify_config(address, data, data, "blank check")
    elif is_memory_blank_all_ffs(type_of_mem):
        for index, x in enumerate(data):
            if x != 255:
                raise Exception("Blank failed for mem type {}, at address 0x{:X}".format(str(type_of_mem), address + index))
    else:
        log.error("Blank check, ignoring {}".format(str(type_of_mem)))

def hold_in_reset():  #mplab
    log.info("Hold in reset")
    _hold_in_reset()

def release_from_reset():  #mplab
    log.info("Release from reset")
    _release_from_reset()
    
def read_device_id():#mplab
    log.info("Read device ID")
    return _read_device_id()
def onloadDFP(ide):
    try:
        if ide.getVersion() > 0x545:
            ide.addCommand("Device actions|Set security bit", "menu_set_secbit")
            ide.addCommand("Device actions|Chip erase", "menu_chiperase")
    except:
        pass

def menu_set_secbit():
    device_action(True)

def menu_chiperase():
    device_action(False)

def device_action(set_bit):
    global connect_mode 
    if deb.Connected():
        r = msg.msg("Debugger is in use. Stop debugging and retry", "Busy")
        return
    try:
        connect_mode = 1
        deb.Connect()
    finally:
        connect_mode = 2
    try:
        reset_extension()
        if set_bit:
            statusb = dap_Read8(dsu_ctrl + 2)
            if statusb & 1:
                raise Exception("Device is protected. A chip erase is needed to remove the protection.")
            nvm_cmd(nvm.SSB,20)
            msg.msg("The security bit is now set","Set security bit")                
        else:
            chip_erase()
            msg.msg("Chip erase done", "Chip erase")
    except Exception as e:
        msg.msg(str(e),"Error")
        raise e
    except :
        msg.msg("Device might be locked. Perform a chip erase to remove the lock.","Error")
    finally:
        dev.Disconnect()
        deb.Disconnect()

def nvm_cmd(command, t):
    dap_Write16(nvm.cmdReg, command)
    wait_nvm_ready(t)

def wait_nvm_ready(t):
    while t > 0 :
        if is_nvm_ready():
            return
        dev.Delay(1000)
        t  = t - 1
    if t == 0:
        raise Exception("The NVM controller operation did not finish")

def chip_erase():
    dsu_ce = 0x10
    dap_Write8(dsu_ctrl, dsu_ce) # 0x41002100,0x10

    n = 0
    while n < nvm.erase_time:
        statusa=dap_Read8(dsu_statusa) # 0x41002101
        if statusa & 1: #statusa_done
            if statusa & 0x1c:
                log.error("DSU.STATUSA indicates an error %x"  % statusa)
                raise Exception("Erase error")
            break
        dev.Delay(100000)
        n=n+1
    erase_as_needed = False # tell prog_write not to erase rows prior to write

set_security_bit  = False 
def _handle_security_flags(address, length, data): 
    if address == 0x41004000:
        if length < 1:
            log.error("Empty security bit payload")
            return False
        global set_security_bit
        set_security_bit = data[0] != 0
        if set_security_bit:
            log.info("Will set the security bit")
        return True
    return False

def _end_of_operations():
    global erase_as_needed,set_security_bit
    erase_as_needed = True

    if set_security_bit:
        nvm_cmd(nvm.SSB,20)
        set_security_bit = False
    dev.Disconnect()

def reset_extension():
    global reset_delay # additional delay for reset line if needed
    global has_reset
    if not has_reset:
        return

    delay=1000  # time to  wait for analog RESET/SWCLK pins to become digitally high/low
    try:
        dev.SetInterface(dev.SWD)
    except:
        dev.Connect(comm_iface, comm_speed)
    dev.Pins(0,dev.RESET,delay)  # 1 msec with reset high 
    if reset_delay > 0:
        dev.Delay(reset_delay)
    dev.Pins(dev.RESET,dev.RESET,delay) # 1 msec with floating reset 
    if reset_delay > 0:
        dev.Delay(reset_delay)
    dev.Pins(0,dev.RESET | dev.SWCLK,delay); # 1 msec with reset and clock low 
    if reset_delay > 0:
        dev.Delay(reset_delay)
    dev.Pins(dev.RESET,dev.RESET,delay); # now float reset back
    if reset_delay > 0:
        dev.Delay(reset_delay)
    dev.Delay(10000)
    reconnectAfterExtension()

def _read_device_id():
    return dap_Read32(0x41002118) # DSU-DID register

import os
has_samba = os.path.isfile(os.path.join("handlers","samba.py"))
if has_samba:
    from handlers import samba
from xml.dom import minidom


class MemHandlers():
    def __init__(self, board_file):
        if has_samba:
            samba.log = log
            samba.msg = msg
            samba.dev = dev
            samba.is_target_running = is_target_running
            samba.run_target = run_target
            samba.architecture = architecture
            samba.arm = arm
        self.parse_board_file(board_file)

    def parse_board_file(self, board_file):
        self.handlers = []
        xmldoc = minidom.parse(board_file)
        rangeNodes = xmldoc.getElementsByTagName("range")
        for rangeNode in rangeNodes:
            start = int(rangeNode.getAttribute("start"), 0)
            end = int(rangeNode.getAttribute("end"), 0)
            type = rangeNode.getAttribute("type")
            config = {}
            for configNode in rangeNode.childNodes:
                if configNode.nodeType == configNode.ELEMENT_NODE:
                    try:
                        config[configNode.tagName] = int(configNode.firstChild.nodeValue, 0)
                    except:
                        config[configNode.tagName] = ide.expandProjectMacros("${ProjectName}", configNode.firstChild.nodeValue).replace("\\", os.path.sep)
            if type == "samba" and has_samba:
                self.handlers.append(samba.Samba(start, end, config))
            elif type == "user":
                self.handlers.append(UserHandler(start, end, config))

    def prog_write(self, type_of_mem, address, length, data):
        log.info("Prog: Writing %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))
        remainings = [[address, address + length]]
        for handler in self.handlers:
            write_start = max(address, handler.range_start)
            write_end = min(address + length, handler.range_end)
            if write_start < write_end:
                # chop the data buffer and pass it to handler and run
                handler.write(write_start, data[write_start - address: write_end - address])
            new_remainings = []
            for remaining in remainings:
                write_start = max(remaining[0], handler.range_start)
                write_end = min(remaining[1], handler.range_end)
                if remaining[0] < write_start < remaining[1]:
                    new_remainings.append([remaining[0], write_start])
                if remaining[0] < write_end < remaining[1]:
                    new_remainings.append([write_end, remaining[1]])
                elif write_start < write_end < remaining[0] or remaining[1] < write_start < write_end or write_start > write_end:
                    new_remainings.append(remaining)
            remainings = new_remainings
        # now write to memory ranges that are not covered by handlers
        for remaining in remainings:
            _prog_write_internal(type_of_mem, remaining[0], remaining[1] - remaining[0], data[remaining[0] - address: remaining[1] - address])

    def prog_read(self, type_of_mem, address, length, data):
        log.info("Prog: Reading %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))
        remainings = [[address, address + length]]
        for handler in self.handlers:
            read_start = max(address, handler.range_start)
            read_end = min(address + length, handler.range_end)
            if read_start < read_end:
                # chop the data buffer and pass it to handler and run
                buffer = bytearray(read_end - read_start)
                handler.read(read_start, buffer)
                data[read_start - address: read_end - address] = buffer
            new_remainings = []
            for remaining in remainings:
                read_start = max(remaining[0], handler.range_start)
                read_end = min(remaining[1], handler.range_end)
                if remaining[0] < read_start < remaining[1]:
                    new_remainings.append([remaining[0], read_start])
                if remaining[0] < read_end < remaining[1]:
                    new_remainings.append([read_end, remaining[1]])
                elif read_start < read_end < remaining[0] or remaining[1] < read_start < read_end or read_start > read_end:
                    new_remainings.append(remaining)
            remainings = new_remainings
        # now write to memory ranges that are not covered by handlers
        for remaining in remainings:
            _prog_read_internal(type_of_mem, remaining[0], remaining[1] - remaining[0], data[remaining[0] - address: remaining[1] - address])


class UserHandler():
    def __init__(self, range_start, range_end, config):
        self.range_start = range_start
        self.range_end = range_end
        self.config = config

    def call(self, address=0, data=None):
        if "handler_name" in self.config.keys():
            eval(self.config["handler_name"])()
        else:
            log.info("The name of handler function is missing")


def _prog_write(type_of_mem, address, length, data):
    global mem_handlers
    if mem_handlers is None:
        _prog_write_internal(type_of_mem, address, length, data)
    else:
        mem_handlers.prog_write(type_of_mem, address, length, data)


def _prog_read(type_of_mem, address, length, data):
    global mem_handlers
    if mem_handlers is None:
        _prog_read_internal(type_of_mem, address, length, data)
    else:
        mem_handlers.prog_read(type_of_mem, address, length, data)

def init_mem_handlers():
    global mem_handlers
    mem_handlers = None
    try:
        board_file = ide.expandProjectMacros("${ProjectName}", settings.getString("loader.board_file", "${ProjectDir}/board.xboard"))
    except:
        board_file = "./board.xboard"
    if os.path.isfile(board_file):
        mem_handlers = MemHandlers(board_file)
