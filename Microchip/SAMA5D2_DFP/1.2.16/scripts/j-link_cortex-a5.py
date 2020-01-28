global g_is_running
g_is_running = False

global g_mpu_config

def check_config():
    message = ""
    try:
        g_mpu_config
    except:
        message = "The global variable(dictionary) \'g_mpu_config\' needs to be defined in \'autoload.py\' for MPU projects"
    else:
        if not 'type' in g_mpu_config.keys():
            message = "The global variable \'g_mpu_config\' should have key \'type\', it needs to be either \'bootstrap\' or \'application\'"
        if g_mpu_config['type'] == 'application' and not 'entry_addr' in g_mpu_config.keys():
           message = "The global variable \'g_mpu_config\' should have key \'entry_addr\' for the entry address of the application"
        if g_mpu_config['type'] == 'application' and not 'bootstrap_entry_addr' in g_mpu_config.keys():
            message = "The global variable \'g_mpu_config\' should have key \'bootstrap_entry_addr\' for the entry address of the bootstrap"
        if g_mpu_config['type'] == 'application' and not 'bootstrap_bin_path' in g_mpu_config.keys():
            message = "The global variable \'g_mpu_config\' should have key \'bootstrap_bin_path\' for the binary file of the bootstrap"
        if g_mpu_config['type'] == 'bootstrap' and not 'entry_addr' in g_mpu_config.keys():
            message = "The global variable \'g_mpu_config\' should have key \'entry_addr\' for the entry address of the bootstrap"

    if message != "":
        msg.msg(message,"")
        raise Exception(message)

def begin_communication_session():
    log.setShowOutput(False)
    log.setApiLogging(3)
    log.info("CortexA debugger")
    check_config()
    global comm_iface, comm_speed
    try:
        comm_iface = True if settings["communication.interface"].lower()=="swd" else False
        comm_speed = 2000000 if settings["communication.autoselectspeed"] else settings["communication.frequency"]
    except:
        comm_iface = True
        comm_speed = 2000000
    dev.Connect(comm_iface, comm_speed)
    halt_target()
    reset_peripherals()
    reset_registers()
    global g_mpu_config
    if g_mpu_config['type'] == 'application':
        load_and_run_bootstrap()
    elif g_mpu_config['type'] == 'bootstrap':
        pass
    else:
        raise Exception("unknown value for key \'type\' in g_mpu_config")

def erase():
    log.info("RI4ProgramInterface: erase")

def prog_write(type_of_mem, address, length, data):
    log.info("RI4ProgramInterface: Writing %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))
    dev.api.JLINK_BeginDownload(0)
    dev.Write(address, data, 0, length)
    dev.api.JLINK_EndDownload()

def prog_read(type_of_mem, address, length, data):
    log.info("RI4ProgramInterface: Reading %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))
    dev.Read(address, data, 0, length)

def end_of_operations():
    log.info("RI4ProgramInterface: End of operations")
    dev.IsHalted()

def begin_debug_session():
    log.info("Debug:: Init debug session")
    global g_mpu_config
    dev.WriteReg64(9, g_mpu_config['entry_addr'])
    global g_is_running
    g_is_running = False

def get_pc():
    return dev.ReadReg64(9)

def run_target():
    log.info("Debug:: Target to be set to running")
    res = dev.GoEx(1, 1)
    if res != 0:
        raise Exception("Failed to run target")
    global g_is_running
    g_is_running = True

def halt_target():
    log.info("Debug:: Target to be halted ")
    res = dev.Halt()
    if res != 0:
        raise Exception("Failed to halt target error " + str(res))
    global g_is_running
    g_is_running = False

def step_target():
    log.info("Debug:: Step")
    res = dev.Step()
    if res != 0:
        raise Exception("Failed to step target"  + str(res))

def set_pc(pc):
    log.info("Debug:: set pc to 0x%0x" % pc)
    dev.WriteReg64(9, pc)

def set_sw_bp(address, instruction, flags):
    """
      * Sets/clears a software breakpoint
      * @param address -> the address of the software breakpoin
      * @param instruction -> the instruction to be programmed (either the software breakpoint
      * opcode or the original instruction the software breakopint was replacing).
      * @param flags -> One or more of the SWBPFlags listed below
      * @return returns the original/old opcode at address
    """
    log.info("Debug:: set bp at address 0x%0x, store instructions 0x%0x, flags = 0x%0x" % (address, instruction, flags))

def reset_target():
    if not dev.IsHalted():
        halt_target()
    global g_mpu_config
    dev.WriteReg64(9, g_mpu_config['entry_addr'])
    log.info("Debug:: reset")

def is_target_running():
    res = dev.IsHalted()
    global g_is_running
    g_is_running = res != 1
    return g_is_running

def end_debug_session():
    log.info("Debug:: End debug session")
    dev.Disconnect()

def load_binary_file(f, a):
    with open(f, "rb") as fb:
        bootstrap_data = bytearray(fb.read())
    dev.Write(a, bootstrap_data, 0, len(bootstrap_data))

def reset_registers():
    dev.WriteReg64(0, 0)
    dev.WriteReg64(1, 0)
    dev.WriteReg64(2, 0)
    dev.WriteReg64(3, 0)
    dev.WriteReg64(4, 0)
    dev.WriteReg64(5, 0)
    dev.WriteReg64(6, 0)
    dev.WriteReg64(7, 0)
    dev.WriteReg64(10, 0)
    dev.WriteReg64(11, 0)
    dev.WriteReg64(12, 0)
    dev.WriteReg64(13, 0)
    dev.WriteReg64(14, 0)
    dev.WriteReg64(15, 0)
    dev.WriteReg64(16, 0)
    dev.WriteReg64(17, 0)
    dev.WriteReg64(18, 0)
    dev.WriteReg64(19, 0)
    dev.WriteReg64(20, 0)
    dev.WriteReg64(21, 0)
    dev.WriteReg64(22, 0)
    dev.WriteReg64(23, 0)
    dev.WriteReg64(24, 0)
    dev.WriteReg64(25, 0)
    dev.WriteReg64(26, 0)
    dev.WriteReg64(27, 0)
    dev.WriteReg64(28, 0)
    dev.WriteReg64(29, 0)
    dev.WriteReg64(30, 0)
    dev.WriteReg64(34, 0)
    dev.WriteReg64(35, 0)
    dev.WriteReg64(36, 0)

def reset_peripherals():
    # Disable all interrupts and go to supervisor mode
    dev.WriteReg64(8, 0xd3)

    # Reset peripherals (using RSTC_CR)
    dev.Write32(0xF8048000, 0xA5000004)

    # Reset L2 Cache controller
    dev.Write32(0x00A00100, 0x0)

    # Disable Watchdog (using WDT_MR)
    dev.Write32(0xF8048044, 0x00008000)

def load_and_run_bootstrap():
    log.info("Debug:: Loading bootstrap")
    global g_mpu_config
    load_binary_file(g_mpu_config['bootstrap_bin_path'], g_mpu_config['bootstrap_entry_addr'])
    log.info("Debug:: Running bootstrap")
    dev.WriteReg64(9, g_mpu_config['bootstrap_entry_addr'])
    dev.GoEx(1,1)
    for i in range(50):
        if dev.IsHalted():
            break
        dev.Delay(100000)
    log.info("Debug:: done boostrap " + str(dev.IsHalted()))

def debug_read(mem_type, start, length, data):
  log.info("Debug:: Reading %d bytes at start address 0x%0x (%s)" %
           (length, start, mem_type))
  dev.Read(start, data, 0, length)
   
def debug_write(mem_type, start, length, data):
  log.info("Debug:: Writing %d bytes at start address 0x%0x (%s)" % (length, start, mem_type))
  dev.Write(start, data, 0, length)
