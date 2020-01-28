erase_as_needed = True 

L11SDAL0 = 100
L11SDAL1 = 101
L11CHIPERASE0 = 0xE0
L11CHIPERASE1 = 0xE1
L11CHIPERASE2 = 0xE2
L10CHIPERASE = 0xE3

ERASEKEY0 = [0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff]
ERASEKEY1 = [0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff]
ERASEKEY2 = [0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff]

dal = -1
dsuAddress = 0x41002100 # external address range to bypass security filter

def onloadDFP(ide):
  if "L11" in device:
    ide.addCommand("Device actions|Set DAL 0", "set_dal_0")
    ide.addCommand("Device actions|Set DAL 1", "set_dal_1")
    ide.addCommand("Device actions|Chip Erase 0", "chip_erase_0_action")
    ide.addCommand("Device actions|Chip Erase 1", "chip_erase_1_action")
    ide.addCommand("Device actions|Chip Erase 2", "chip_erase_2_action")
  elif "L10" in device:
    ide.addCommand("Device actions|Chip Erase", "chip_erase_l10_action")

def special_action(key,cmd):
  if deb.Connected():
    r=msg.msg("Debugger is in use. Stop debugging and retry","Busy")       
    return
  deb.Connect()
  try:
    SpecialOp(key,cmd)
  finally:
    deb.Disconnect()


def set_dal_0():
  global dal
  special_action([],L11SDAL0)
  msg.msg("DAL is now " + str(dal),"Set DAL 0")


def set_dal_1():
  global dal
  special_action([],L11SDAL1)
  msg.msg("DAL is now " + str(dal),"Set DAL 1")

def ce_with_dlg(k,t):
  global dal
  try:
    special_action(k,  t)
    msg.msg("Chip erase done. DAL is now " + str(dal),"Chip Erase")
  except Exception, e:
    log.error("Chip erase - " + str(e))
    msg.msg(str(e),"Chip Erase - Error")

def chip_erase_2_action():
  ce_with_dlg(ERASEKEY2,  L11CHIPERASE2)

def chip_erase_1_action():
  ce_with_dlg(ERASEKEY1,  L11CHIPERASE1)

def chip_erase_0_action():
  ce_with_dlg(ERASEKEY0,  L11CHIPERASE0)

def chip_erase_l10_action():
  ce_with_dlg(ERASEKEY0,  L10CHIPERASE)

def begin_communication_session():
  dev.SetApiLogging(0)
  log.setShowOutput(False)
  global comm_iface, comm_speed
  comm_iface = settings.getString("communication.interface","swd") == "swd"
  comm_speed = settings.getNumeric("communication.autoselectspeed",2000000)

nvmCtrl = 0
erase_size = 0x100
UROW = 0x00804000
BOCOR = 0x0080C000

def print_dhcsr_v(t,d):
  log.info( t + arm.getDHCSRString(d))

def print_dhcsr(text):
  try:
    d = dev.Read32(arm.DHCSR)
    print_dhcsr_v(text,d)
    return d
  except:
    log.log("DHCSR is unreadable")
    return 0

def blank_check():
  log.info("Blank check")

def resetExtension():
  timeout=1000
  #log.info("Reset extension")
  dev.Pins(0,dev.RESET,timeout)  # 1 msec with reset high
  dev.Pins(dev.RESET,dev.RESET,timeout) # 1 msec with floating reset
  dev.Pins(0,dev.RESET | dev.SWCLK,timeout); # 1 msec with reset and clock low
  dev.Pins(dev.RESET,dev.RESET,timeout); # now float reset back

def reset_to_park(brext):
  resetExtension()
  dev.Connect(comm_iface, comm_speed)
  ExitResetExtensionL10(brext)

def begin_debug_session():
  log.info("Debug:: Init debug session")
  reset_to_park(True)
    

def begin_programming_operation():
  global erase_as_needed
  erase_as_needed = True 
  try:
    reset_to_park(False) # may fail if locked
  except:
    pass

def erase():
  global ERASEKEY,ERASETYPE
  global erase_as_needed
  global set_dal_val 

  set_dal_val = 10 # reset DAL variable
  keys = settings.getString("x.erase.key", "0xffffffff,0xffffffff,0xffffffff,0xffffffff").split(",")
  ERASEKEY = [0,0,0,0]
  for i in range(0,4):
    ERASEKEY[i]=long(keys[i],16)

  if "L10" in device:
    ERASETYPE=L10CHIPERASE
  else:
    et = settings.getString("x.erase.type","ChipEraseAll")

    if et == "ChipEraseS":
      ERASETYPE=L11CHIPERASE1
    elif et == "ChipEraseNS":
      ERASETYPE=L11CHIPERASE0
    elif et == "ChipEraseAll":
      ERASETYPE=L11CHIPERASE2
    else:
      return    # do not erase 
      
  erase_as_needed = False # tell prog_write to erase rows prior to write
  #if erase_as_needed:
  #  log.info("Erase is configured to be skipped in autoload.py")
  #  return
  log.info("Erase")
  SpecialOp(ERASEKEY,ERASETYPE)
  pass
  
def hold_in_reset():
  log.info("Hold in reset")
  resetExtension()

def release_from_reset():
  log.info("Release from reset")
  dev.Pins(0,dev.RESET,1000)  # 1 msec with reset high
  dev.Pins(dev.RESET,dev.RESET,1000) # 1 msec with floating reset
 
prevCfgReg = 0
prevCfgReg2 = 0
L11 = True
OFFSET_CTRLB_2802 = 4 # ctrlb offset 4 size 4
OFFSET_CTRLC_2802 = 8 # offset 8 size 1

def save_cfg_word():
  global prevCfgReg,prevCfgReg2
  set_nvmctrl()
  if L11:
    #OFFSET_CTRLC_2802_SIZE = 1
    #if 0 == prevCfgReg2:
    prevCfgReg2 = dev.Read8(nvmCtrl+OFFSET_CTRLC_2802)
    newCfgReg2 = prevCfgReg2 & 0x00fe # on L11 we want manual writes
    if newCfgReg2 != prevCfgReg2:
        dev.Write8(nvmCtrl+OFFSET_CTRLC_2802, newCfgReg2)

  # CTRLB size = 4
  #global prevCfgReg
  if 0 == prevCfgReg:
    prevCfgReg = dev.Read32(nvmCtrl+OFFSET_CTRLB_2802)
  wait_states = 15
  newCfgReg = (prevCfgReg & ~0x1e) | (wait_states << 1) # wait states 15
  if newCfgReg != prevCfgReg:
     dev.Write32(nvmCtrl+OFFSET_CTRLB_2802, newCfgReg)

def restore_cfg_word():
  dev.Write8(nvmCtrl + OFFSET_CTRLC_2802, prevCfgReg2)
  dev.Write32(nvmCtrl + OFFSET_CTRLB_2802, prevCfgReg)

def erase_row(addr):
  dev.Write32(addr, 0xFFFFFFFF) # write a few bytes to the page buffer to set address register
  CMD_ERASE_ROW = 0xA502 #works on all flash sections on L10
  nvm_cmd (CMD_ERASE_ROW, 20)


def nvm_cmd(command, t):
  dev.Write16(nvmCtrl + 0, command)
  while t > 0 :
    if isNvmReady():
      return
    dev.Delay(1000)
    t  = t - 1
  if t == 0:
    raise Exception("timeout executing NVM command")

def write_row(adr, ofs, data):
  page_size = 64
  written = 0

  while written < erase_size:
    dev.Write(adr, data, ofs + written, page_size)
    nvm_cmd(0xA504,20)  # writePage
    adr += page_size
    written += page_size

set_dal_val = 10
def prog_write(type_of_mem, address, length, data):
  log.info("Writing %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))
  orig_address = address
  save_cfg_word()
  if address == 0x41004000:
    if length < 1:
      log.error("Empty DAL payload")
      return
    global set_dal_val
    set_dal_val = data[0] - 0x4B
    log.info("Will change DAL to %d" % set_dal_val)
    return
  # assumes flash is pre erased, so no row erase
  written = 0
  if address == UROW or address == BOCOR:
    if "L10" in device:
      erase_row(address)
      write_row(address,0,data)
    else:
      write_cfg_page(address, data,  0)
      if length > 0xc000-0x4000:
        write_cfg_page(BOCOR, data, 0xc000-0x4000)
  else:
    while written < length:
      if erase_as_needed:
        erase_row(address)
      write_row(address,written,data)
      written += erase_size
      address += erase_size
  restore_cfg_word()

def prog_read(type_of_mem, address, length, data):
  log.info("Reading %d bytes from address 0x%0x of %s memory" % (length, address, type_of_mem))
  dev.Read(address,data,0,length)

def verify_transfer(type_of_mem, address, data, length):
  log.info("NOT IMPLEMENTED  Verifying %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))


# this file contains all the methods that satisfy the APIs exposed by ScriptBasedController
# RI4DebugInterfaceWithBP

def hold_in_reset():
  dev.Connect(comm_iface, comm_speed)
  reset_to_park(False)
  dev.Disconnect()

def debug_read(mem_type, start,  length, data):
  #log.debug("Debug: Reading %d bytes at start address 0x%0x (%s)" % (length, start, mem_type))
  dev.Read(start, data, 0, length)

def debug_write(mem_type, start, length, data):
  #log.debug("Debug: Writing %d bytes at start address 0x%0x (%s)" % (length, start, mem_type))
  dev.Write(start, data, 0, length)

def get_pc():
  global dal
  #rv = dev.ReadReg64(13)
  if dal == 1:
    try:
      pc = dev.ReadReg64(15)
    except:
      log.error("get_pc returned error at DAL 1")
      return 0
  pc = dev.ReadReg64(15)
  log.info("get_pc PC=%x" % pc)
  return pc

def run_target():
  log.info("Debug: run target")
  dev.Write32(arm.DHCSR, 0xa05f0001) #DBGKEY | C_DEBUGEN | C_HALT

def halt_target():
  log.info("Debug: halt target")
  dev.Write32(arm.DHCSR, 0xa05f0003) #DBGKEY | C_DEBUGEN | C_HALT


def step_target():
  log.info("Debug:: stepping at pc 0x%0x" % get_pc())
  #get_pc()
  dev.Write32(arm.DHCSR, 0xa05f000b)  #DBGKEY | C_DEBUGEN | C_HALT | C_MASKINTS
  dev.Write32(arm.DHCSR, 0xa05f000d)  #DBGKEY | C_DEBUGEN | C_STEP | C_MASKINTS
  dev.Write32(arm.DHCSR, 0xa05f0003)  #DBGKEY | C_DEBUGEN | C_HALT

def set_pc(pc):
  log.info("Debug: set pc to 0x%0x" % pc)
  dev.WriteReg64(15,pc)

def print_byte_array(text, array, index, size):
  string = text
  for i in range(size):
    string += " %x" % array[i+index]
  log.info(string)

def set_sw_bp(address, instruction, flags):
  log.debug("Debug: set/reset bp at address 0x%0x, store instructions 0x%0x, flags = 0x%0x" % (address, instruction, flags))
  erase_page_start = address & ~(erase_size-1)
  address_in_erase_page = address & erase_size-1
  #log.debug("set_sw_bp: erase_page_start = %x, address_in_erase_page = %x" % (erase_page_start, address_in_erase_page))

  data = bytearray(256)
  dev.Read(erase_page_start, data, 0, erase_size)
  print_byte_array("set_sw_bp: data[address_in_erase_page] =", data, address_in_erase_page, 4)
  return_value = data[address_in_erase_page] | (data[address_in_erase_page+1] << 8)
  #log.debug("set_sw_bp: return_value (replaced instruction) = %x" % return_value)

  # Insert software breakpoint instruction in the data
  data[address_in_erase_page] = instruction & 0xFF
  data[address_in_erase_page+1] = (instruction >> 8) & 0xFF

  print_byte_array("set_sw_bp: data[address_in_erase_page] after changing instr =", data, address_in_erase_page, 4)
  erase_as_needed = True
  prog_write("Pgm", erase_page_start, erase_size, data)

  return return_value

def reset_target():
  log.info("Debug: Reset target")
  reset_to_park(False)
# set a dwt breakpoint to halt on flash entry
  dev.Write32(arm.DEMCR, 0x01000000) #enable TRCENA
  dev.Write32(0xe0001028,0x00000412)
  dev.Write32(0xe0001020,0x00000000)
  dev.Write32(0xe0001030,0x00400000)
  dev.Write32(0xe0001038,0x00000413)
  run_target()
  releaseBrext()
  dev.Delay(1000)
  t = 10
  while t > 0 :
    if not is_target_running():
      dev.Write32(arm.DEMCR, 0x000000) #disable TRCENA
      return
    dev.Delay(1000)
    t  = t - 1
  if t == 0:
    log.error("Device did not halt")
  dev.Write32(arm.DEMCR, 0x000000) #disable TRCENA

g_is_running = True

def is_target_running():
  global g_is_running
  dhcsr = dev.Read32(arm.DHCSR)
  state =  0 == (dhcsr & 0x20000)
  if state != g_is_running:
    log.info("Debug:: is_running %s" % state)
    g_is_running = state
  return g_is_running

def end_debug_session():
  log.info("Debug: end debug session")
  dev.Disconnect()

def end_of_operations():
  log.info("End of operations")      
  if set_dal_val < 2:
    log.info("Setting DAL " + str(set_dal_val))
    SpecialOp([], (L11SDAL0 if set_dal_val == 0 else  L11SDAL1))
  dev.Disconnect()

def program_row(adr,ofs, buf):
  erase_row(adr)
  write_row(adr, ofs, buf)


def computeAndWriteKey(bs , bnsc, bootopt):
  bootHashAddr = 0
  BOOTKEYLEN = 0x20
  NVMCTRL_ROW_SIZE = 256
  u8BootKey = bytearray(BOOTKEYLEN)

  if bootopt == 0:
    return
  utils.sha256_reset()
  FLASH_ADDR = 0
  bsSize = bs - bnsc
  if bootopt != 1:
    FUSES_BOOTROM_BOOTKEY_0_ADDR = 0x0080C050
    #Read bootkey
    dev.Read(FUSES_BOOTROM_BOOTKEY_0_ADDR, u8BootKey,0,BOOTKEYLEN)
    utils.sha256_update(u8BootKey, 0, BOOTKEYLEN)
    utils.sha256_update(u8BootKey, 0, BOOTKEYLEN)

  buffNvmData  = bytearray(bs)
  #Read bootloader
  dev.Read(FLASH_ADDR, buffNvmData, 0, bs)
  utils.sha256_update(buffNvmData,0,bsSize - SHA_HASHSIZE_IN_BYTES)
  if bnsc > 0 :
      utils.sha256_update(buffNvmData,bsSize, bnsc)
  hashOffset = bsSize - SHA_HASHSIZE_IN_BYTES
  # Compute hash and store it in the last page of boot section
  utils.sha256_compute(buffNvmData,hashOffset)

  rowStartAddr = NVMCTRL_ROW_SIZE*(hashOffset / NVMCTRL_ROW_SIZE)
  program_row(rowStartAddr,  rowStartAddr - FLASH_ADDR, buffNvmData)


BCC = 0x20 # bootrom communication channel
STATUSA = 1
STATUSB = 2
CRSTEXTBIT = 2 # CRSTEXT bit in STATUSA
BREXTBIT = 0x20 # BREXT bit in STATUSA

DEBUGGER_CMD_INIT = 0x44424755 #,    /**< Initiate communication to enter trap functions */
DEBUGGER_CMD_EXIT = 0x444247AA #,    /**< Goto exit function */

def isNvmReady():
  OFFSET_INTFLAG_2802 = 0x14
  intReg = dev.Read8(nvmCtrl + OFFSET_INTFLAG_2802)
  isReady = 0 != (intReg & 1)
  if not (intReg & 0xfe): # if no ERROR bit is set 
    return isReady
  # clear error bits in INTFLAG
  dev.Write8(nvmCtrl + OFFSET_INTFLAG_2802, 2 |4 |8 | 16 );
  raise Exception("NVMctrl reports an error") 


def brom_read_status():
  return dev.Read32(dsuAddress + BCC + 4)

def  ExitResetExtensionL10(brext):
  global dal
  reply = 0
  statusa = dev.Read8(dsuAddress + STATUSA) # debug
  if 0 == (statusa & CRSTEXTBIT):
    log.error("SAML1x - could not enter reset extension")
    return False

  dev.Write8(dsuAddress + STATUSA, CRSTEXTBIT) # clear crstext 
  #  ROM starts running after clearing reset extension
  dev.Delay(5000)
  reply = 0
  if (dev.Read8(dsuAddress+STATUSB) & 0x80):
    reply =  brom_read_status()
  if reply != 0:
    log.error("User page validation failure with error code %x", reply & 0xff)
    raise Exception("Page validation")

  dev.Write32(dsuAddress + BCC, DEBUGGER_CMD_EXIT) # exit to park mode

  # after cmdexit , BOOTROM does boot validation, which may take up to 500msec
  # after which it enters the park loop and can be halted, if bootldr verify ok
  n = 0
  r = 0
  while n < 20:
    if 0 != (dev.Read8(dsuAddress + STATUSB) & 0x80) :   # if new data on BCCD1 , read it
      reply = brom_read_status()
      if reply == 0xEC000022:
        raise Exception("Chip is locked")
      if reply != 0xEC000039:
        log.error ("Boot validation failed with error code  {}".format(reply&0xff))
        raise Exception("Boot validation")
      break
    dev.Delay(50000)
    n = n+1
  if n == 20 :
    log.error("The Bootrom did not confirm the CPU park mode")
    raise Exception("Cannot enter park mode")
  # we can now halt the target if at DAL 2
  halt_target()
  dal = 3 & dev.Read8(dsuAddress + 2)    
  if brext:
    releaseBrext()
  return True

def releaseBrext():
  dev.Write8(dsuAddress + STATUSA, BREXTBIT) 
  

DSU_STATUSB_BCCD0 = 1 << 6
dsuAddress = 0x41002100  # external address range to bypass security filter
BCC = 0x20               # bootrom communication channel

def brom_send_key(data, timeout):
  for wrd in data:
    dev.Write32(dsuAddress + BCC, wrd)
    while timeout > 0 :
      u8regval = dev.Read8(dsuAddress + 2) # read statusb
      if 0 == (u8regval & DSU_STATUSB_BCCD0):  # break if BCC was read
        break
      dev.Delay(1000)
      timeout = timeout - 1
    if timeout == 0 :
      return 1
  return 0


def brom_read_status():
    return dev.Read32(dsuAddress + BCC + 4)

def SpecialOp(key ,ceMode):
    global dal
    SIG_COMM = 0xec000020
    SIG_CMD_SUCCESS = 0xec000021
    SIG_CMD_VALID  = 0xec000024
    SIG_CMD_INVALID= 0xec000025
    SIG_BOOT_OK = 0xEC000039
    STATUSA = 1
    STATUSB = 2
    CRSTEXTMASK = 2 #CRSTEXT bit in STATUSA

    if (ceMode == L11SDAL0)  or (ceMode == L11SDAL1):
      reset_to_park(False)
      CMD_SDAL0 = 0xA54B
      CMD_SDAL1 = 0xA54C
      set_nvmctrl()
      nvm_cmd(CMD_SDAL0 if (ceMode == L11SDAL0) else CMD_SDAL1,100)
      try:
        reset_to_park(True)  # at DAL 0 the device will not exit to park mode
      except:
        pass
      return

    resetExtension()
    dev.Connect(comm_iface, comm_speed)

    statusa = dev.Read8(dsuAddress + STATUSA)
    if 0 == (statusa & CRSTEXTMASK):
      raise  Exception("SAM L1x could not enter reset extension. Please check the reset line is connected to debugger.")

    dev.Write8(dsuAddress + STATUSA, CRSTEXTMASK)
    dev.Delay(5000) # // wait for device validation
    errCode = 0
    if 0 != (dev.Read8(dsuAddress + STATUSB) & 0x80):
      errCode = brom_read_status()

    if errCode != 0 :
      log.error( "SAML1x - SDAL failed to boot. Error code {}".format(errCode)) # log the error, but proceed with chip erase

    dev.Write32(dsuAddress + BCC, DEBUGGER_CMD_INIT)
    reply = brom_read_status()
    if (errCode == 0 and reply != SIG_COMM) :
      raise  Exception("SAML1x chip erase failed to enter command loop.") # shouldnt happen

    if (ceMode != L10CHIPERASE and (ceMode < L11CHIPERASE0 or ceMode > L11CHIPERASE2)) :
      raise  Exception("SAML1x chip erase failed (invalid mode).")
      
    dev.Write32(dsuAddress + BCC, 0x44424700 | ceMode)
    reply = brom_read_status()
    if reply != SIG_CMD_VALID:
      log.error("SAML1x - chip erase failed because bootrom did not accept chip erase command")
      raise Exception("SAML1x chip erase failed (cmd error)")

    if (ceMode != L10CHIPERASE):
      brom_send_key(key, 100)

    for j in range(0,20):
      reply = brom_read_status()
      if reply != SIG_CMD_VALID and reply != 0 :
        break
      dev.Delay(1000000)
    if reply != SIG_CMD_SUCCESS :
      log.error( "SAML1x - chip erase failed : error code 0x%X" % reply)
      raise Exception("SAML1x chip erase failed : error code 0x%X" % reply)
    else :
      log.info("SAML1x - chip erase done")
    reset_to_park(True)
    pass

def set_nvmctrl():
  global nvmCtrl,dal
  nvmCtrl = 0x41004000
  if "L10" in device:    
    return
  dal = 3 & dev.Read8(dsuAddress + 2)
  if dal != 1 :
    nvmCtrl = 0x41005000
  return

def write_cfg_page(address,data,ofs):
  pageCopy = bytearray(256)
  pageCopy0 = bytearray(256)
  if len(data) < 256:
    log.error("write_cfg_page should be called with 256 bytes of data")
    return
        
  dev.Read(address,pageCopy0,0,256)
  for i in range(0,256):
    pageCopy[i] = data[ofs+i]       
    if pageCopy[i] != pageCopy0[i]:
      log.info(" %x was %02x new %02x" % (address+i,pageCopy0[i],pageCopy[i]))
      
  #dev.Read(address,pageCopy,0,256)

  if address == UROW:		# USER1+USER2+USER3/2 CRC area (part of USER)
    AS = 8  # offset to AS
    USERCRC = 0x1C    
    UROWCRCLEN = 0x14 
    
    crc = utils.crc32(pageCopy,AS, UROWCRCLEN)
    crc = crc ^ 0xFFFFFFFF

    pageCopy[USERCRC + 0] = crc & 255 
    pageCopy[USERCRC + 1] = (crc >> 8) & 255
    pageCopy[USERCRC + 2] = (crc >> 16) & 255
    pageCopy[USERCRC + 3] = (crc >> 24) & 255
    erase_row(address)
    write_row(address,0,pageCopy)
    return

  if address != BOCOR:
    return

  pageCopy[6] = pageCopy[6] | 1  # force BCWEN to 1 to allow BOCOR rewrites
  if ERASETYPE==L11CHIPERASE0:
    ERASEKEYOFFSET = 0x10
  elif ERASETYPE==L11CHIPERASE1:
        ERASEKEYOFFSET = 0x20
  elif ERASETYPE==L11CHIPERASE2:
        ERASEKEYOFFSET = 0x30
  for i in range(16):
    pageCopy[ERASEKEYOFFSET + i] = 255 & (ERASEKEY[i/4] >> (8*(i&3)))
    log.info("ce - key %d %02x" % (i,pageCopy[ERASEKEYOFFSET + i]))
  #return
  # Writing the BOCOR row

  #Handle changes in the BOCOR row, computing CRC and hash and boothash if needed 
  # BOCOR first doubleword CRC area
  crc = utils.crc32(pageCopy,0,8)
  crc = crc ^ 0xFFFFFFFF

  pageCopy[8 + 0] = (crc >> 0) & 255
  pageCopy[8 + 1] = (crc >> 8) & 255
  pageCopy[8 + 2] = (crc >> 16) & 255
  pageCopy[8 + 3] = (crc >> 24) & 255

  #Perform SHA on DW0, [DW8 .. DW19] and place the computed hash at BOCORHASH addr
  bHashWithBootkey = 0
  utils.sha256_reset()
  # Check whether bootkey is part of hash 
  FUSES_BOOTROM_BOOTOPT = 24
  sec_boot = (pageCopy[FUSES_BOOTROM_BOOTOPT / 8] & 0x0F) & 0x03
  if sec_boot > 1 :
    # If SHA-256 with BOOTKEY is specified, the SHA hash calculation begins with a
    # virtual 512-bit chunk, consisting of BOOTKEY from BOCOR replicated twice
    bHashWithBootkey = 1
    FUSES_BOOTROM_BOOTKEY = 640/8
    FUSES_BOOTROM_BOOTKEYSIZE = (896-640)/8
    utils.sha256_update(pageCopy,FUSES_BOOTROM_BOOTKEY, FUSES_BOOTROM_BOOTKEYSIZE)
    utils.sha256_update(pageCopy,FUSES_BOOTROM_BOOTKEY, FUSES_BOOTROM_BOOTKEYSIZE)

  # add the BOCOR data
  utils.sha256_update(pageCopy, 0, 0x100 - 0x20)
  FUSES_BOOTROM_BOCORHASH = 1792/8
  #finalize sha and store it in pageCopy
  utils.sha256_compute(pageCopy, FUSES_BOOTROM_BOCORHASH)

  erase_row(address)
  write_row(address, 0, pageCopy)

  if sec_boot == 0:
    return
  
  BNSC_GRANULARITY = 0x20   # Boot Flash Non-Secure Callable region granularity
  BP_GRANULARITY = 0x100    # BOOTPROT region granularity
  BS_GRANULARITY = 0x100    # Boot Flash Secure region granularity

  boot_prot = getFuse(pageCopy, 32, 39)*BP_GRANULARITY
  bs = getFuse(pageCopy, 8, 15)*BS_GRANULARITY
  bnsc = getFuse(pageCopy, 16, 21)*BNSC_GRANULARITY

  if (boot_prot >= bs and bs-bnsc >= 0x100):
    log.info("Configured sizes : bootprot=0x%x, bs=0x%x, bnsc=0x%x , bootopt=%x\n" % (boot_prot, bs, bnsc, sec_boot))
    AddBootHashL11(bs, bnsc, sec_boot)
  else:
    raise Exception("BOOTPROT region too small or BNSC too small")

  