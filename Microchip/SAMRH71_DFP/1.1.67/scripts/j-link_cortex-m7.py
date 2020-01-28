
def begin_communication_session():
  global comm_iface, comm_speed
  comm_iface = settings.getString("communication.interface", "swd") == "swd"
  comm_speed = settings.getNumeric("communication.frequency", 1000000)
  dev.Connect(comm_iface, comm_speed)
  dev.Reset()
  log.setShowOutput(False)
  log.info("Cortex-M7 debugger")

# this file contains all the methods that satisfy the APIs exposed by ScriptBasedController
# RI4ProgramInterface


def erase(): # mplab
  # looks like dev erases as it goes. No need for a whole chip erase
  log.info("RI4ProgramInterface: Erase")
  if "RH71" in device:
    dev.Halt()
    dev.api.JLINK_EraseChip()
    dev.Delay(1000000)


def prog_write(type_of_mem, address, length, data): # mplab
  log.log(LEVEL_INFO, "RI4ProgramInterface: Writing %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))
  dev.Write(address, data, 0, length)

def prog_read(type_of_mem, address, length, data): # mplab
  log.log(LEVEL_INFO, "RI4ProgramInterface: Reading %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))
  dev.Read(address, data, 0, length)


def end_of_operations(): # mplab
  log.info("RI4ProgramInterface: End of operations")
  dev.Reset()

def begin_debug_session():#mplab
  log.info("Debug:: Init debug session")

def debug_read(mem_type, start, length, data):#mplab
  log.info("Debug: Reading %d bytes at start address 0x%0x (%s)" % (length, start))
  dev.Read(start, data, 0, length)

def debug_write(mem_type, start, length, data):#mplab
  log.info("Debug:: Writing %d bytes at start address 0x%0x (%s)" % (length, start))
  dev.Write(start, data, 0, length)

def get_pc():#mplab
  return dev.ReadReg64(arm.PC)

def run_target():#mplab
  log.info("Debug:: Target to be set to running")
  dev.GoEx(1, 1)

def halt_target():#mplab
  log.info("Debug:: Target to be halted ")
  dev.Halt()

def step_target():#mplab
  log.info("Debug:: Step")
  dev.Step()

def set_pc(pc):#mplab
  log.log(LEVEL_INFO, "Debug:: set pc to 0x%0x" % pc)
  dev.WriteReg64(arm.PC,pc)

def reset_target(): # mplab
  log.log(LEVEL_INFO, "Debug:: reset")
  dev.Reset()

g_is_running = True

def is_target_running(): # mplab
  global g_is_running

  state =  dev.IsHalted()
  if state != g_is_running:
    log.info("Debug:: is_running %s" % state)
    g_is_running = state
  return 0  == g_is_running


def end_debug_session():  # mplab
  log.info("Debug:: End debug session")
