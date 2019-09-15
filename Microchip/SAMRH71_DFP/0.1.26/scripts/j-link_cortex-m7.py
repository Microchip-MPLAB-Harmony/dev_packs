global g_in_debug_mode
g_in_debug_mode = False

global g_is_running
g_is_running = False


# log is a global object injected by MPLAB
# dev is a global object injected by MPLAB


def begin_communication_session():
  global g_in_debug_mode
  g_in_debug_mode = True
  dev.Connect(settings["COM_INTERFACE"].lower()=="swd", 0 if settings["COM_AUTOSPEED"] else settings["COM_SPEED"])
  log.setShowOutput(False)
  log.info("ATSAME70 debugger")

# this file contains all the methods that satisfy the APIs exposed by ScriptBasedController
# RI4ProgramInterface


def erase():
  # looks like dev erases as it goes. No need for a whole cheap erase
  log.info("RI4ProgramInterface: Erase")
  pass

def prog_write(type_of_mem, address, length, data):
  log.log(LEVEL_INFO, "RI4ProgramInterface: Writing %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))
  dev.Write(address, data, 0, length)

def prog_read(type_of_mem, address, length, data):
  log.log(LEVEL_INFO, "RI4ProgramInterface: Reading %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))
  dev.Read(address, data, 0, length)


def end_of_operations():
  log.info("RI4ProgramInterface: End of operations")
  dev.Reset()
  dev.Halt()


# this file contains all the methods that satisfy the APIs exposed by ScriptBasedController
# RI4DebugInterfaceWithBP


def begin_debug_session():
  log.info("Debug:: Init debug session")
  global g_is_running
  g_is_running = False

def debug_read(mem_type, start, length, data):
  log.info("Debug:: Reading %d bytes at start address 0x%0x (%s)" %
           (length, start, mem_type))
  res = dev.Read(start, data, 0, length)
  if res == 1:
    raise Exception("Failed to read %d bytes at start address 0x%0x (%s)" % (length, start, mem_type))

def debug_write(mem_type, start, length, data):
  log.log(LEVEL_INFO, "Debug:: Writing %d bytes at start address 0x%0x (%s)" % (length, start, mem_type))
  res = dev.Write(start, data, 0, length)
  if res < 0:
    raise Exception("Failed to write %d bytes at start address 0x%0x (%s)" % (length, start, mem_type))

def is_target_in_debug_mode():
  log.log(LEVEL_INFO, "Debug:: Is target in debug mode? %s" % g_in_debug_mode)
  return g_in_debug_mode

def get_pc():
  return dev.ReadReg64(15)

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
    raise Exception("Failed to halt target")
  global g_is_running
  g_is_running = False

def step_target():
  log.info("Debug:: Step")
  res = dev.Step()
  if res != 0:
    raise Exception("Failed to step target")

def set_pc(pc):
  log.log(LEVEL_INFO, "Debug:: set pc to 0x%0x" % pc)

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

def reset_target():
  log.log(LEVEL_INFO, "Debug:: reset")
  dev.Reset()

def is_target_running():
  res = dev.IsHalted()
  global g_is_running
  g_is_running = res != 1
  return g_is_running

def end_debug_session():
  global g_in_debug_mode
  g_in_debug_mode = False
  log.info("Debug:: End debug session")
