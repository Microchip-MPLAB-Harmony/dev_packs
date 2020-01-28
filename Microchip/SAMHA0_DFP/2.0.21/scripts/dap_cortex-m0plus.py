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
    AUX_ERASE = 0xA505
    ROW_ERASE = 0xA502
    erase_time = 100
    UROW = 0x00804000
	
def is_nvm_ready():
    intFlag = dev.Read8(nvm.intReg)
    isReady = 0 != (intFlag & 1)
    isError = 0 != (intFlag & 2)
    if not isError: # if no ERROR bit is set
        return isReady

    status = dev.Read16(nvm.stsReg)
    log.error("NVMCtrl error bits set! (STATUS = 0x%X, INTFLAG = 0x%X)" % (status, intFlag))
    dev.Write16(nvm.stsReg, status | 0x001E) # clear error bits and load bit by setting 1
    dev.Write8(nvm.intReg, intFlag | 2) # clear error bit by setting 1
    raise Exception("NVMctrl reports an error")

# global variable keeps previous value of flash cfg register while programming
prevCfgReg = 0x0

def set_autowrite():
    global prevCfgReg
    prevCfgReg = dev.Read32(nvm.cfgReg)
    newCfgReg = (prevCfgReg & 0xFFFFFF61) | 0x1e  # 15 wait states and clear MANW
    if newCfgReg != prevCfgReg:
        dev.Write32(nvm.cfgReg, newCfgReg)

def restore_cfg():
    #log.debug("reset_cfg_word: prevCfgReg = %x" % prevCfgReg)
    dev.Write32(nvm.cfgReg, prevCfgReg)

use_swd = True
use_jtag = False

def begin_communication_session(): #mplab
    dev.LogPackets(0)
    log.setShowOutput(False)
    global comm_iface, comm_speed
    try:
        comm_iface = True if settings["communication.interface"].lower()=="swd" else False
        comm_speed = 2000000 if settings["communication.autoselectspeed"] else settings["communication.frequency"]
    except:
        comm_iface = True
        comm_speed = 2000000

def print_DHCSR(text):
    d = dev.Read32(arm.DHCSR)
    print_DHCSR_val(text, d)
    return d

def print_DHCSR_val(t,d):
    log.info( t + arm.getDHCSRString(d))

def begin_programming_operation(): #mplab
    reset_extension()
    dev.Connect(comm_iface, comm_speed)
    statusa = dev.Read8(dsu_statusa) # verify CRSTEXT is set
    if 0 == (statusa & 2): #STATUSA.CRSTEXT
        log.error("Device could not enter reset extension, check cap on RST line")
        raise Exception("Reset error.")
    else:
        log.info("Prog: Device entered reset extension")


def blank_check(): #mplab
    log.info("Prog: Blank check")

def reset_extension():
    delay=1000
    dev.Pins(0,dev.RESET,delay)  # 1 msec with reset high 
    dev.Pins(dev.RESET,dev.RESET,delay) # 1 msec with floating reset 
    dev.Pins(0,dev.RESET | dev.SWCLK,delay); # 1 msec with reset and clock low 
    dev.Pins(dev.RESET,dev.RESET,delay); # now float reset back 


def erase():#mplab
    log.info("Prog: Erase")
    dsu_ce = 0x10
    dev.Write8(dsu_ctrl, dsu_ce) # 0x41002100,0x10

    n = 0
    while n < nvm.erase_time:
        statusa=dev.Read8(dsu_statusa) # 0x41002101
        if statusa & 1: #statusa_done
            if statusa & 0x1c:
                log.error("DSU.STATUSA indicates an error %x"  % statusa)
                raise Exception("Erase error")
            break
        dev.Delay(100000)
        n=n+1

def reset_and_halt():
    dev.Write32(arm.DEMCR, 0x01000001) # TRCENA  | VC_CORERESET
    dev.Write32(arm.AIRCR, 0x05fa0004) # VECTKEY | SYSRESETREQ
    n = 0
    retries = 10
    seenReset = False
    while n<retries:
        dhcsr = dev.Read32(arm.DHCSR)
        #print_DHCSR_val("arm.DHCSR",dhcsr)
        if (dhcsr & 0x02000000): # wait for S_RESET_ST
            seenReset=True
            dev.Write32(arm.DHCSR, 0xa05f0003) # DBGKEY|C_HALT|C_DEBUGEN
            dev.Write8(dsu_statusa, 2) # release the cpu 0x41002101,0x2  STATUSA.CRSTEXT
            dhcsr = print_DHCSR("Prog: Cleared CRSTEXT")
        hasHalted = 0 != (dhcsr & 0x20000) # S_HALT
        if seenReset:
            if hasHalted: # wait for S_HALT
                break
        dev.Delay(100000)
        n=n+1
    dev.Write32(arm.DEMCR, 0x01000000) # TRCENA
    if n==retries:
        raise Exception("Timeout in reset")

def hold_in_reset():#mplab
    log.info("Prog: Hold in reset")
    dev.Connect(comm_iface, comm_speed)
    reset_and_halt()
    #dev.Disconnect()  this will float the reset back.

def release_from_reset():#mplab
    log.info("Prog: Release from reset")
    # toggle reset line
    dev.Pins(0,dev.RESET,1000)
    dev.Pins(dev.RESET,dev.RESET,1000) # now float reset back

    # workaround if reset line is not connected on board
    # dev.Write32(dev.AIRCR, 0x05fa0004) # VECTKEY | SYSRESETREQ

def erase_row(addr,cmd):
    #log.debug("Erase row at address %X" % addr)
    dev.Write32(addr, 0xFFFFFFFF) # write a few bytes to the page buffer to set address register
    nvm_cmd (cmd, 20)

def nvm_cmd(command, t):
    dev.Write16(nvm.cmdReg, command)
    wait_nvm_ready(t)

def wait_nvm_ready(t):
    while t > 0 :
        if is_nvm_ready():
            return
        dev.Delay(1000)
        t  = t - 1
    if t == 0:
        raise Exception("Timeout executing NVM command")

def write_row(adr, ofs, data,len):
    written = 0
    while written < len:
        dap.WriteMem(adr, data, ofs + written, nvm.page_size)
        adr += nvm.page_size
        written += nvm.page_size
    wait_nvm_ready(4)

def prog_write(type_of_mem, address, length, data):#mplab
    log.info("Prog: Writing %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))
    set_autowrite()
    if address == nvm.UROW: # user page / fuses / configuration bits
        if length > nvm.aux_size:
            raise Exception("prog_write, Cfg, length (%X) longer then aux page size , only handle writing 0x100 bytes for user page!" % length)
        erase_row(address,nvm.AUX_ERASE) # not cleared by chip erase
        write_row(address, 0, data, nvm.erase_size)
    else:
        written = 0
		# a flash row has 'erase_size' bytes
        #data1 = bytearray(nvm.erase_size)
        while written < length:
            #dev.Read(address,data1,0,nvm.erase_size)
            write_row(address,written,data, min(length - written, nvm.erase_size))
            #dev.Read(address,data1,0,nvm.erase_size)
            written += nvm.erase_size
            address += nvm.erase_size
    restore_cfg()

def prog_read(type_of_mem, address, length, data):#mplab
    log.info("Prog: Reading %d bytes from address 0x%0x of %s memory..." % (length, address, type_of_mem))
    dev.Read(address,data,0,length)

def verify_transfer(type_of_mem, address, data, length):#mplab
    log.info("Prog: not implemented: Verifying %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))

def end_of_operations():#mplab
    log.info("Prog: End of operations")
    #reset_and_halt()
    dev.Disconnect()

global g_is_running 
g_is_running = True

def begin_debug_session():#mplab
    log.info("Debug: Init debug session")
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

def set_sw_bp(address, instruction, flags):#mplab
    erase_page_start = address & ~(nvm.erase_size-1)
    address_in_erase_page = address & (nvm.erase_size-1)

    data = bytearray(nvm.erase_size)
    
    dev.Read(erase_page_start, data, 0, nvm.erase_size)
    return_value = data[address_in_erase_page] | (data[address_in_erase_page+1] << 8)

    # Insert software breakpoint instruction in the data
    data[address_in_erase_page] = instruction & 0xFF
    data[address_in_erase_page+1] = (instruction >> 8) & 0xFF

    erase_row(erase_page_start, nvm.ROW_ERASE)
    set_autowrite()
    write_row(erase_page_start,0,data,nvm.erase_size)
    restore_cfg()
    return return_value

def reset_target():#mplab
    log.info("Debug: Reset target")
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
