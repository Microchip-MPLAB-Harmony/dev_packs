comm_speed=2000000

def reset_peripherals():
    # We toggle reset pin before connect, so not sure if we need reset peripherals
    write_named_register("R8",0xd3)      # Disable all interrupts and go to supervisor mode
    dev.Write32(0xF8048000, 0xA5000004)  # Reset peripherals (using RSTC_CR)
    dev.Write32(0x00A00100, 0x0)         # Reset L2 Cache controller
    dev.Write32(0xF8048044, 0x00008000)  # Disable Watchdog (using WDT_MR)

# Alleged Page size
PAGE_SIZE = 0x1C0

# Debug Status and Control Register = ARM DDI 0406C pC11-2229
ARMv7A_DBGDSCR =                                 0x0088  # RW Debug Status and Control Register
ARMv7A_DBGDSCR_S_RXFULL =                    0x40000000  # DBGDTRRX register full
ARMv7A_DBGDSCR_S_TXFULL =                    0x20000000  # DBGDTRTX register full
ARMv7A_DBGDSCR_S_RXFULL_L =                  0x08000000  # Latched RXfull
ARMv7A_DBGDSCR_S_TXFULL_L =                  0x04000000  # Latched TXfull
ARMv7A_DBGDSCR_S_PIPEADV =                   0x02000000  # Sticky Pipeline Advance bit
ARMv7A_DBGDSCR_S_INSTCOMPL_L =               0x01000000  # Latched Instruction Complete
ARMv7A_DBGDSCR_C_EXTDCCMODE_MASK =           0xFFCFFFFF  # External DCC access mode
ARMv7A_DBGDSCR_C_EXTDCCMODE_NONBLOCKING =    0x00000000  # Non-blocking mode
ARMv7A_DBGDSCR_C_EXTDCCMODE_STALL =          0x00100000  # Stall mode
ARMv7A_DBGDSCR_C_EXTDCCMODE_FAST =           0x00200000  # Fast mode
ARMv7A_DBGDSCR_C_ADADISCARD =                0x00080000  # Asynchronous Aborts Discarded
ARMv7A_DBGDSCR_S_NS =                        0x00040000  # Non-secure state status
ARMv7A_DBGDSCR_S_SPNIDDIS =                  0x00020000  # Secure PL1 Non-Invasive Debug Disabled
ARMv7A_DBGDSCR_S_SPIDDIS =                   0x00010000  # Secure PL1 Invasive Debug Disabled
ARMv7A_DBGDSCR_C_MDBGEN =                    0x00008000  # Monitor debug-mode enable
ARMv7A_DBGDSCR_C_HDBGEN =                    0x00004000  # Halting debug-mode enable
ARMv7A_DBGDSCR_C_ITREN_MASK =                0xFFFFDFFF  # For clearing the ITRen bit
ARMv7A_DBGDSCR_C_ITREN =                     0x00002000  # Execute ARM instruction enable - Enables running the instruction in DBGITR.
ARMv7A_DBGDSCR_C_UDCCDIS =                   0x00001000  # User mode access to Debug Communications Channel (DCC) disable
ARMv7A_DBGDSCR_C_INTDIS =                    0x00000800  # Interrupts Disable
ARMv7A_DBGDSCR_C_DBGACK =                    0x00000400  # Force Debug Acknowledge
ARMv7A_DBGDSCR_S_FS =                        0x00000200  # Fault status. (Only if Virtualization Extenstions are implemented.)
ARMv7A_DBGDSCR_S_UND_L =                     0x00000100  # Latched Sticky Undefined Instruction bit
ARMv7A_DBGDSCR_S_ADABORT_L =                 0x00000080  # Latched Sticky Asynchronous Abort bit
ARMv7A_DBGDSCR_S_SDABORT_L =                 0x00000040  # Latched Sticky Synchronous Abort bit
ARMv7A_DBGDSCR_S_MOE =                       0x0000003C  # Method of Debug Entry mask
ARMv7A_DBGDSCR_S_MOE_HALT =                  0x00000000  # MOE - Halt request debug event
ARMv7A_DBGDSCR_S_MOE_BREAK =                 0x00000004  # MOE - Breakpoint debug event
ARMv7A_DBGDSCR_S_MOE_AWTCHP =                0x00000008  # MOE - Asynchronous watchpoint debug event
ARMv7A_DBGDSCR_S_MOE_BKPT =                  0x0000000C  # MOE - BKPT instruction debug event
ARMv7A_DBGDSCR_S_MOE_EXT =                   0x00000010  # MOE - External debug request debug event (Halting debug events)
ARMv7A_DBGDSCR_S_MOE_VECT =                  0x00000014  # MOE - Vector catch debug event
ARMv7A_DBGDSCR_S_MOE_OSUNL =                 0x00000020  # MOE - OS Unlock catch debug event
ARMv7A_DBGDSCR_S_MOE_SWTCHP =                0x00000028  # MOE - Synchronous watchpoint debug event
ARMv7A_DBGDSCR_S_RESTARTED =                 0x00000002  # Processor Restarted bit
ARMv7A_DBGDSCR_S_HALTED =                    0x00000001  # Processor Halted bit


ARMv7A_DEBUG_BASE =                          0x80030000

# Debug Run Control Register, ARM DDI 0406C pC11-2222
ARMv7A_DBGDRCR =                                 0x0090  # WO Debug Run Control Register
ARMv7A_DBGDRCR_RRQ =                         0x00000002  # Restart Request. Write 1 to exit Debug state
ARMv7A_DBGDRCR_HRQ =                         0x00000001  # Halt Request. Write 1 to request entry to Debug state, by generating a Halt request debug event.

#debug Instruction Transfer Register
ARMv7A_DBGITR =                              0x0084

# Debug Breakpoint Registers = DBGBVRx and DBGVCRx
#
ARMv7A_DBGBVR0 =                                  0x100  # Breakpoint Value Register 0 (DEBUG_BASE needs to be added)
ARMv7A_DBGBVR1 =                                  0x104  # Breakpoint Value Register 1 (DEBUG_BASE needs to be added)
ARMv7A_DBGBVR2 =                                  0x108  # Breakpoint Value Register 2 (DEBUG_BASE needs to be added)
ARMv7A_DBGBVRx_ADDR_MASK =                   0xFFFFFFFC

ARMv7A_DBGBCR0 =                                  0x140  # Breakpoint Control Register 0 (DEBUG_BASE needs to be added)
ARMv7A_DBGBCR1 =                                  0x144  # Breakpoint Control Register 1 (DEBUG_BASE needs to be added)
ARMv7A_DBGBCR2 =                                  0x148  # Breakpoint Control Register 2 (DEBUG_BASE needs to be added)
ARMv7A_DBGBCR_M_MASK =                       0x00700000
ARMv7A_DBGBCR_M_IVA_MATCH =                  0x00000000
ARMv7A_DBGBCR_M_LIVA_MATCH =                 0x00100000  # Not available for DBGBCR0 or DBGBCR1
ARMv7A_DBGBCR_M_UCID =                       0x00200000
ARMv7A_DBGBCR_M_LCID =                       0x00300000
ARMv7A_DBGBCR_M_IVA_MISMATCH =               0x00400000
ARMv7A_DBGBCR_M_LIVA_MISMATCH =              0x00500000  # Not available for DBGBCR0 or DBGBCR1
ARMv7A_DBGBCR_LINKED_BP_MASK =               0x000F0000
ARMv7A_DBGBCR_C_SECURE_ACCESS =              0x0000C000
ARMv7A_DBGBCR_C_SECURE_ACCESS_BOTH =         0x00000000
ARMv7A_DBGBCR_C_SECURE_ACCESS_NONSECURE =    0x00004000
ARMv7A_DBGBCR_C_SECURE_ACCESS_SECURE =       0x00008000
ARMv7A_DBGBCR_C_BYTE_ACCESS_MASK =           0x000001E0
ARMv7A_DBGBCR_C_BYTE_ACCESS_NEVER =          0x00000000
ARMv7A_DBGBCR_C_BYTE_ACCESS_2BYTES_0 =       0x00000060
ARMv7A_DBGBCR_C_BYTE_ACCESS_2BYTES_2 =       0x00000180
ARMv7A_DBGBCR_C_BYTE_ACCESS_4BYTES =         0x000001E0
ARMv7A_DBGBCR_C_SUPER_MASK =                 0x00000006
ARMv7A_DBGBCR_C_SUPER_U_SYS_SUPER =          0x00000000
ARMv7A_DBGBCR_C_SUPER_PRIVILEDGED =          0x00000002
ARMv7A_DBGBCR_C_SUPER_USER =                 0x00000004
ARMv7A_DBGBCR_C_SUPER_ANY =                  0x00000006
ARMv7A_DBGBCR_C_BKPT_ENABLE_MASK =           0x00000001
ARMv7A_DBGBCR_C_BKPT_DISABLED =              0x00000000
ARMv7A_DBGBCR_C_BKPT_ENABLED =               0x00000001

# ARM Instructions necessary for issuing instructions via the DBGITR register
ARMv7A_ISB_SY =                              0xF57FF06F  # ISB SY (Flush the pipeline)
ARMv7A_DSB_SY =                              0xF57FF04F  # DSB SY (Flush the data pipeline)
ARMv7A_INVALIDATE_CACHE =                    0xEE070F15  # Invalidate cache - MCR p15, #0, r0, c7, c5, #0
ARMv7A_BKPT =                                0xE1200070  # BKPT Instn ARM
ARMv7A_BKPT_THUMB =                          0xBE00      # BKPT Instn Thumb

# ARM CPSR thumb instruction mode bit
ARMv7A_CPSR_THUMBMODE_MASK =                 0x20

# Device Power-down and Reset Control Register
ARMv7A_DBGPRCR =                                 0x0310  # RW Device Power-down and Reset Control Register
ARMv7A_DBGPRCR_C_DBGnoPWRDWN =               0x00000001
# Device Power-down and Reset Status
ARMv7A_DBGPRSR =                                 0x0314  # Device Power-down and Reset Status Register
ARMv7A_DBGPRSR_S_STICKY_RESET =              0x00000008
ARMv7A_DBGPRSR_S_RESET =                     0x00000004
ARMv7A_DBGPRSR_S_STICKY_POWERDOWN =          0x00000002
ARMv7A_DBGPRSR_S_POWERDOWN =                 0x00000001

# Operating System Lock and Save/Restore Registers, ARM DDI 0406C pC11-2256
ARMv7A_DBGOSLSR =                            0x0304  # RO Operating System Lock and Save/Restore Registers

printDebug = False     # set to True to print diagnostic info
logLevel = 0           # set to 1 to print diagnostic info

# The l_ variables are reinitialized at every debug session. They are used locally in this script and should not be overriden in autoload.py
l_use_bootstrap = 0
l_bootstrap_entry = -1
l_app_entry = -1
l_bootstrap_bin = ""
l_bootstrap_load = -1
g_is_running = True

hw_bkpts = {}
max_number_of_breakpoints = 3

def mplab_chooseBootstrap(self):
    project_dir = ide.expandProjectMacros("${ProjectName}", "${ProjectDir}")
    pdl = len(project_dir)
    fileChooser = JFileChooser(project_dir)
    retval = fileChooser.showOpenDialog(None)
    if retval == JFileChooser.APPROVE_OPTION:
        f = fileChooser.getSelectedFile().getPath()
        if 0==f.find(project_dir):
            f="${ProjectDir}" + f[pdl:]
        bsOpt.binTxt.text= f
        msg.print("Selected bootstrap binary: %s\n" % f)
        settings.setString("boot.path", f)

from javax.swing import JPanel, JLabel , JTextField, BoxLayout, JCheckBox, JButton,JFileChooser,GroupLayout
from java.awt import BorderLayout
class BootstrapPane():
    
    def __init__(self):
        self.panel = JPanel()
        self.panel.setLayout(BorderLayout())
        
        self.pane = JPanel()
        self.initUI()

    def initUI(self):
    
        layout = GroupLayout(self.pane)
        self.pane.setLayout(layout)
        layout.setAutoCreateGaps(True)
        layout.setAutoCreateContainerGaps(True)

        bc = settings.getBool("boot.use", False)
        self.useBs = JCheckBox("Use bootstrap",bc)
        binLabel = JLabel("Bootstrap file: ")
        self.binTxt = JTextField()
        self.binTxt.text = settings.getString("boot.path", "")
        self.binBtn = JButton("Load", actionPerformed=mplab_chooseBootstrap)

        entryLabel = JLabel("Bootstrap entry address (if bin): ")
        self.entryTxt = JTextField()
        self.entryTxt.text = settings.getString("boot.entry_adr", "")
        
        prjLabel = JLabel("Bootstrap project: ")
        self.prjTxt = JTextField()
        self.prjTxt.text = settings.getString("boot.prj", "")
        
        loadLabel=JLabel("Bootstrap load address (if bin): ")

        self.loadTxt = JTextField()
        self.loadTxt.text = settings.getString("boot.load_adr", "")

        layout.setHorizontalGroup(layout.createSequentialGroup()
            .addGroup(layout.createParallelGroup()
                .addComponent(self.useBs)
                .addComponent(prjLabel)
                .addComponent(binLabel)
                .addComponent(entryLabel)
                .addComponent(loadLabel)
                )
            .addGroup(layout.createParallelGroup()
#                .addComponent(self.useBs)
                .addComponent(self.prjTxt)
                .addComponent(self.binTxt)
                .addComponent(self.entryTxt)
                .addComponent(self.loadTxt)
                )
            .addGroup(layout.createParallelGroup()
                .addComponent(self.binBtn)
            )
        )

        layout.setVerticalGroup(layout.createSequentialGroup()
            .addGroup(layout.createParallelGroup()
                .addComponent(self.useBs)
            )
            .addGroup(layout.createParallelGroup()
                .addComponent(prjLabel)
                .addComponent(self.prjTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
            )
            .addGroup(layout.createParallelGroup()
                .addComponent(binLabel)
                .addComponent(self.binTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                .addComponent(self.binBtn)
                )
            .addGroup(layout.createParallelGroup()
                .addComponent(entryLabel)
                .addComponent(self.entryTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
            )
            .addGroup(layout.createParallelGroup()
                .addComponent(loadLabel)
                .addComponent(self.loadTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
            )
        )
        self.panel.add(self.pane,BorderLayout.CENTER)

    def getPanel(self):
        return self.panel

bsOpt = None
def mplab_configure_Bootstrap(confName):
    global bsOpt
    if bsOpt == None:
        bsOpt=BootstrapPane()
    return bsOpt.getPanel()

def save_mplab_configure_Bootstrap(confName):
    global bsOpt
    if bsOpt == None:
        return

    settings.setString("boot.path", bsOpt.binTxt.getText())
    settings.setString("boot.prj", bsOpt.prjTxt.getText())
    settings.setString("boot.load_adr", bsOpt.loadTxt.getText())
    settings.setString("boot.entry_adr", bsOpt.entryTxt.getText())      
    settings.setString("boot.use",  "true" if bsOpt.useBs.isSelected() else "false")

def onShowPropsDFP2(t):
    ide.addPropCategory(t,"diagnostics" , "*|programoptions", "Diagnostics")
    ide.addBooleanProperty(t,"script.show_output" , "*|diagnostics|*","Output diagnostic logging","Show diagnostic text in the Output window", False)
    ide.addTextProperty(t,"script.log_level" , "*|diagnostics|*","Diagnostic log level","Set diagnostic level (usually 0 1 or 3)", "1")
    ide.addTextProperty(t,"script.reset_delay" , "*|diagnostics|*","Additional delay after reset","Enter additional RST settling delay in msec", "0")
    ide.addBooleanProperty(t,"script.has_reset" , "*|diagnostics|*","Uncheck if RESET line is not wired","Normally checked. Uncheck if the target does not have RST connected to the debugger", True)


def connect():
    global comm_speed,comm_iface
    comm_iface = settings.getString("communication.interface", "swd") == "swd"
    comm_speed = settings.getNumeric("communication.frequency", comm_speed)
    dev.Connect(True, 100000)

reset_delay=1000
has_reset=True

def _begin_communication_session():
    global comm_speed,comm_iface,has_reset,reset_delay
    global logLevel,printDebug,has_reset  
    logLevel    = settings.getNumeric("script.logLevel",logLevel)
    printDebug  = settings.getBool("script.printDebug",printDebug)
    has_reset   = settings.getBool("script.has_reset",has_reset)
    reset_delay = settings.getNumeric("script.reset_delay",reset_delay)
    if reset_delay < 1:
        reset_delay = 1

    dev.SetApiLogging(logLevel)
    log.setShowOutput(printDebug)


def _end_communication_session(): 
    pass

def _erase(): 
    pass

def _begin_programming_operation():
    
    if has_reset and settings.getBool("programoptions.resetafterprogram", False): 
        dev.Pins(0, dev.RESET, 1000)
        dev.Delay(reset_delay)
        dev.Pins(dev.RESET, dev.RESET, 1000)  # now float reset back
        dev.Delay(reset_delay)
    
    connect()
    # Power up
    dev.Write32(ARMv7A_DEBUG_BASE + ARMv7A_DBGPRCR,ARMv7A_DBGPRCR_C_DBGnoPWRDWN)
    # Enable Halt debug 
    dev.Write32(ARMv7A_DEBUG_BASE + ARMv7A_DBGDSCR,ARMv7A_DBGDSCR_C_HDBGEN)
    # Check status of power up
    dev.Read32(ARMv7A_DEBUG_BASE + ARMv7A_DBGPRSR)
    # Check OS save/restore status
    dev.Read32(ARMv7A_DEBUG_BASE + ARMv7A_DBGOSLSR)
    halt_target()
    reset_peripherals()
    
    global l_use_bootstrap, l_app_entry, l_bootstrap_entry, l_bootstrap_bin, l_bootstrap_load
    l_app_entry = -1
    l_use_bootstrap = settings.getBool("boot.use",False)
    l_bootstrap_bin = settings.getString("boot.path","")  
    prj = settings.getString("boot.prj","")
    if prj == "":
        prj="${ProjectName}"
    if l_use_bootstrap:
        l_bootstrap_bin = ide.expandProjectMacros(prj,l_bootstrap_bin)

    # handle legacy way of setting variables
    try:
        l_use_bootstrap = True if g_mpu_config['type'] == 'application'  else False
        l_app_entry = g_mpu_config['entry_addr']
        if l_use_bootstrap:
            l_bootstrap_load = l_bootstrap_entry = g_mpu_config['bootstrap_entry_addr']
            l_bootstrap_bin  = g_mpu_config['bootstrap_bin_path']
    except:
        pass
    
    if l_app_entry == -1:
        l_app_entry = deb.GetSpecialSymbolAddress("__entry_address")
    if l_use_bootstrap != 0:
        load_and_run_bootstrap(l_bootstrap_bin)

def _prog_write(type_of_mem, address, length, data):
    log.info("Debug: address 0x%08x\n" % (address))
    global l_app_entry
    addr = address
    if l_app_entry == 0x7fffffffffffffffL:
        l_app_entry = address # hack when we dont have a known entry point, use first write

    written = 0
    while written < length:
        write_len = min(length - written, PAGE_SIZE)
        dev.Write(addr,data,written,write_len)
        written += write_len
        addr += write_len
    verLen = 256  # verify a few bytes
    if verLen > length:
        verLen = length
    rdb = bytearray(verLen)
    dev.Read(address,rdb, 0, verLen)
    for i in range(0,verLen):
        if rdb[i] != data[i]:
            log.error("The programmed bytes do not verify. Please check that your bootloader is working correctly.")
            raise  Exception("Verify error")



def _prog_read(type_of_mem, address, length, data):
    dev.Read(address, data, 0, length)

def _end_of_operations():
    set_pc_to_appstart()
    pass

def set_pc_to_appstart():
    if l_app_entry != -1:
        set_pc(l_app_entry)

def _begin_debug_session():
    hw_bkpts.clear()
    for i in range(max_number_of_breakpoints):
        clr_hardware_bp(i)
    halt_and_reset()

def _run_target():
    log.info("Debug: run")
    enable_halting_debug()
    # Step target once before run to get over hardware breakpoints
    step_target()
    dev.runScript("Run")

def _halt_target():
    global g_is_running
    dev.Write32(ARMv7A_DEBUG_BASE + ARMv7A_DBGDRCR, ARMv7A_DBGDRCR_HRQ) # Debug Run Control register, Halt Request
    for i in range(10):
        if not _is_target_running():
            log.info("Debug: halted")
            return
        dev.Delay(1000)
    raise  Exception("Target failed to halt")

def is_thumb_mode():
    mode = (read_named_register("CPSR") & ARMv7A_CPSR_THUMBMODE_MASK)
    return bool(mode)

def _step_target():
    dev.runScript("SingleStep")



def _set_pc(pc):
    write_register_index(9,pc)


def _reset_target():
    msg.msg("The reset button will only set PC to application start. For a full reset, please press the Reset button and restart the debug session.", "Reset")
    halt_and_reset()

def halt_and_reset():
    if _is_target_running():
        halt_target()
    set_pc_to_appstart()

def _is_target_running():
  global g_is_running
  dbgdscr = dev.Read32(ARMv7A_DEBUG_BASE+ARMv7A_DBGDSCR)
  log_dbgdscr(dbgdscr)
  state =  0 == (dbgdscr & ARMv7A_DBGDSCR_S_HALTED)
  if state != g_is_running:
    log.info("Debug:: is_running %s" % state)
    g_is_running = state
  return g_is_running

def _end_debug_session(): 
    dev.Disconnect()

def load_binary_file(f, a):
    with open(f, "rb") as fb:
        bootstrap_data = bytearray(fb.read())
    dev.Write(a, bootstrap_data, 0, len(bootstrap_data))

def writeBlock(adr,bytes,name):
    log.info("Section %s at %08x %d" % (name, adr,len(bytes)))
    dev.Write(adr,bytes,0,len(bytes))

def enable_instrn_execution():
    dbgdscr = dev.Read32(ARMv7A_DEBUG_BASE+ARMv7A_DBGDSCR)
    # Enable instruction execution
    dev.Write32(ARMv7A_DEBUG_BASE+ARMv7A_DBGDSCR,dbgdscr | ARMv7A_DBGDSCR_C_ITREN)

def wait_instrn_complete():
    for i in range(10):
        dbgdscr = dev.Read32(ARMv7A_DEBUG_BASE+ARMv7A_DBGDSCR)
        log_dbgdscr(dbgdscr)
        if (dbgdscr & ARMv7A_DBGDSCR_S_INSTCOMPL_L == ARMv7A_DBGDSCR_S_INSTCOMPL_L):
            return
        dev.Delay(100)
    raise  Exception("Instruction execution failed")

def enable_halting_debug():
    dbgdscr = dev.Read32(ARMv7A_DEBUG_BASE+ARMv7A_DBGDSCR)
    # Enable instruction execution
    dev.Write32(ARMv7A_DEBUG_BASE+ARMv7A_DBGDSCR,dbgdscr | ARMv7A_DBGDSCR_C_HDBGEN)

def execute_instruction(instruction):
    enable_instrn_execution()
    dev.Write32(ARMv7A_DEBUG_BASE+ARMv7A_DBGITR,instruction)
    wait_instrn_complete()

def flush_pipeline():
    execute_instruction(ARMv7A_ISB_SY)
    wait_instrn_complete()

def flush_data_pipeline():
    execute_instruction(ARMv7A_DSB_SY)
    wait_instrn_complete()

def to_bytes(n, length):
    bytes = bytearray(length)
    for i in range(length):
        bytes[i] = (n >> i*8) & 0xff
    return bytes
def print_byte_array(text, array, index, size):
    string = text
    for i in range(size):
        string += " 0x%x" % array[i+index]
    print(string)

def load_file_and_pc(binary_path):
    global l_bootstrap_entry, l_bootstrap_load
    bsLoad = l_bootstrap_load
    bsEntry = l_bootstrap_entry
    filetype = deb.PeekFileType(binary_path)
    if "hex" == filetype or "elf" == filetype:
        msg.print("Debug: Loading %s\n" % binary_path)
        deb.EnumCodeBlocks(binary_path, "writeBlock")
        bsEntry = deb.PeekSymbolAddress(binary_path,"__entry_address",True)
    else:
        try:
            l = settings.getString("boot.load_adr","").strip()
            if l != "":
                bsLoad = int(l,0)
            l = settings.getString("boot.entry_adr","").strip()
            if l != "":
                bsEntry = int(l,0)
        except:
            raise Exception("You need to specify a numeric load address and entry point address for bootstrap %s" % binary_path)
        msg.print("Debug: Loading %s as a binary file at address 0x%08x entry point 0x%08x\n" % (binary_path, bsLoad, bsEntry))
        if bsLoad == -1 or bsEntry == -1:
            raise Exception("You need to specify a numeric load and entry address for %s" % binary_path)
        load_binary_file(binary_path,  bsLoad)
    set_pc(bsEntry)

def load_and_run_bootstrap(l_bootstrap_bin):
    global g_is_running
    try:
        f = open(l_bootstrap_bin, "rb")
        f.close()
    except:
        msg.msg("Failed to open bootstrap file %s" % l_bootstrap_bin, "Error")
        raise Exception("Failed to open bootstrap file")
    load_file_and_pc(l_bootstrap_bin)
    run_target()
    dev.Delay(1000000)
    for i in range(10):
        if not _is_target_running():
            msg.print("Debug: bootstrap has halted. Will load application.\n")
            return
        dev.Delay(10000)
    log.error("Debug: bootstrap timed out")
    halt_target() # should not have timed out, but still halting the CPU

def _debug_read(mem_type, start, length, data):
    dev.Read(start, data, 0, length)

def _debug_write(mt, start, length, data):
    dev.Write(start, data, 0, length)

def _get_pc():
    pc = read_named_register("PC")
    log.info("Debug: get_pc PC=0x%08x" % pc)
    return pc

def _hold_in_reset():
    pass

def _release_from_reset():
    pass

def _read_device_id():
    pass

def begin_communication_session(): #mplab
    log.info("Begin comm session")
    _begin_communication_session()

def end_communication_session(): #mplab
    log.info("End comm session")
    _end_communication_session()

def begin_programming_operation(): #mplab
    log.info("Begin operations")
    _begin_programming_operation()

def read_device_id():#mplab
    log.info("Read device ID")
    return _read_device_id()

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
    return _get_pc()

def run_target():#mplab
    log.info("Debug: run target")
    _run_target()


def halt_target():  #mplab
    log.info("Debug: halt target")
    _halt_target()

def step_target():  #mplab
    log.info("Debug: stepping at pc 0x%08x" % get_pc())
    _step_target()

def reset_target(): #mplab
    log.info("Debug: reset")
    _reset_target()
    on_after_reset() # call autoload hook

def is_target_running():#mplab
    return _is_target_running()


def on_after_reset(): 
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
        log.info("Setting pc=%08x and sp=%08x" % (pc, sp))
    except:
        log.error("Debug: failed to set PC and SP to contents of exception_table")

def on_program_done():
    on_after_reset()

def end_debug_session():  #mplab
    log.info("Debug: End debug session")
    _end_debug_session()

def verify_transfer(type_of_mem, address, data, length):  #mplab
    log.error("Not-implemented Verifying %08x bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))
    return True

def blank_check():  #mplab
    log.info("Blank check")

def hold_in_reset():  #mplab
    log.info("Hold in reset")
    _hold_in_reset()

def release_from_reset():  #mplab
    log.info("Release from reset")
    _release_from_reset()
    
dbgdscr_debug_enable = False
def log_dbgdscr(intflag):
    global dbgdscr_debug_enable
    if not dbgdscr_debug_enable:
        return
    err_string = ""
    dbg_string = ""
    if intflag & ARMv7A_DBGDSCR_S_RXFULL:
        dbg_string += " RXFULL"
    if intflag & ARMv7A_DBGDSCR_S_TXFULL:
        dbg_string += " TXFULL"
    if intflag & ARMv7A_DBGDSCR_S_RXFULL_L:
        dbg_string += " RXFULL_L"
    if intflag & ARMv7A_DBGDSCR_S_TXFULL_L:
        dbg_string += " TXFULL_L"
    if intflag & ARMv7A_DBGDSCR_S_PIPEADV:
        dbg_string += " S_PIPEADV"
    if intflag & ARMv7A_DBGDSCR_S_INSTCOMPL_L:
        dbg_string += " INSTCOMPL_L"
    if intflag & ARMv7A_DBGDSCR_C_ADADISCARD:
        dbg_string += " ADADISCARD"
    if intflag & ARMv7A_DBGDSCR_S_NS:
        dbg_string += " S_NS"
    if intflag & ARMv7A_DBGDSCR_S_SPNIDDIS:
        dbg_string += " SPNIDDIS"
    if intflag & ARMv7A_DBGDSCR_S_SPIDDIS:
        dbg_string += " SPIDDIS"
    if intflag & ARMv7A_DBGDSCR_C_MDBGEN:
        dbg_string += " C_MDBGEN"
    if intflag & ARMv7A_DBGDSCR_C_HDBGEN:
        dbg_string += " C_HDBGEN"
    if intflag & ARMv7A_DBGDSCR_C_ITREN:
        dbg_string += " C_ITREN"
    if intflag & ARMv7A_DBGDSCR_C_UDCCDIS:
        dbg_string += " C_UDCCDIS"
    if intflag & ARMv7A_DBGDSCR_C_INTDIS:
        dbg_string += " C_INTDIS"
    if intflag & ARMv7A_DBGDSCR_C_DBGACK:
        dbg_string += " C_DBGACK"
    if intflag & ARMv7A_DBGDSCR_S_UND_L:
        err_string += " S_UND_L"
    if intflag & ARMv7A_DBGDSCR_S_ADABORT_L:
        err_string += " S_ADABORT_L"
    if intflag & ARMv7A_DBGDSCR_S_SDABORT_L:
        err_string += " S_SDABORT_L"
    if intflag & ARMv7A_DBGDSCR_S_RESTARTED:
        dbg_string += " S_RESTARTED"
    if intflag & ARMv7A_DBGDSCR_S_HALTED:
        dbg_string += " S_HALTED"
    if dbgdscr_debug_enable:
        dbg_string = "DBGDSCR : " + dbg_string
        msg.print("Debug: DBGDSCR %s\n" % (dbg_string))
    if err_string == "":
        return
    err_string = "DBGDSCR error " + err_string 
    msg.print("ERROR: DBGDSCR %s\n" % (err_string))
    raise Exception(err_string)

names = ["R0","R1","R2","R3","R4","R5","R6","R7","CPSR","PC","R8_USR","R9_USR","R10_USR","R11_USR","R12_USR","SP_USR","LR_USR","SPSR_FIQ","R8_FIQ","R9_FIQ","R10_FIQ","R11_FIQ","R12_FIQ","SP_FIQ","LR_FIQ","SPSR_SVC","SP_SVC","LR_SVC","SPSR_ABT","SP_ABT","LR_ABT","SPSR_IRQ","SP_IRQ","LR_IRQ","SPSR_UND","SP_UND","LR_UND","FPSID","FPSCR","FPEXC","S0","S1","S2","S3","S4","S5","S6","S7","S8","S9","S10","S11","S12","S13","S14","S15","S16","S17","S18","S19","S20","S21","S22","S23","S24","S25","S26","S27","S28","S29","S30","S31","MVFR0","MVFR1","R8","R9","R10","R11","R12","SP","LR","SPSR"]


def read_named_register(n):
    log.info("rnn " + n)
    if n in names:
        reg = read_register_index(names.index(n))
        return reg
    return 0

def read_register_index(n):
    script = "readcoreregid" + str(n)
    res = dev.runScriptWithUpload(script,4)
    result = (res[0] | res[1] << 8 | res[2] << 16 | res[3] << 24)
    return result

def write_register_index(n,v):
    script = "writecoreregid" + str(n)
    dev.runScriptWithDownload(script,to_bytes(v,4))


def write_named_register(n,v):
    log.info("wnn %s val: 0x%x" % (n,v))
    write_register_index(names.index(n),v)
# Still a work in progress
def set_sw_bp(address, instruction, flags):
    log.info("swbp at %x instn :%x flags: %x\n" % (address,instruction,flags))
    # Save Register 0
    reg0 = read_named_register("R0")
    data_read = dev.Read32(address)
    dev.Write32(address, instruction)
    flush_data_pipeline()
    invalidate_cache()
    flush_pipeline()
    # Restore Register 0
    write_named_register("R0",reg0)
    return data_read

def invalidate_cache():
    write_named_register("R0",0) # Clear register 0
    #Invalidate cache - MCR p15, #0, r0, c7, c5, #0
    execute_instruction(ARMv7A_INVALIDATE_CACHE)
    flush_data_pipeline()
    flush_pipeline()



def set_hw_bp(num,addr):
    log.info("break: set_hw_bp num %d addr: %x\n" % (num,addr))
    global hw_bkpts
    global max_number_of_breakpoints
    for i in range(max_number_of_breakpoints):
        if i in hw_bkpts:
            if num in hw_bkpts[i]:
                log.info("debug : duplicate hwbp at %d addr 0x%x\n" % (num,addr))
                return 0
    for i in range(max_number_of_breakpoints):
        if i not in hw_bkpts:
            hw_bkpts.update({i : {num : addr}})
            set_hardware_bp(i,addr)
            return 0
    raise Exception("Insufficient number of hardware breakpoints : use software breakpoints")
    
    
def set_hardware_bp(bp,addr):
    if bp == 0:
        log.info("Debug: hwbp0 addr: %x\n" % (addr))
        enable_halting_debug()
        # Set the breakpoint
        dev.Write32(ARMv7A_DEBUG_BASE+ARMv7A_DBGBVR0,addr)
        # Enable the breakpoint, with address mismatch
        if is_thumb_mode():
            if addr % 4 == 0: # Word aligned
                dev.Write32(ARMv7A_DEBUG_BASE+ARMv7A_DBGBCR0, ARMv7A_DBGBCR_M_IVA_MATCH | ARMv7A_DBGBCR_C_BYTE_ACCESS_2BYTES_0 | ARMv7A_DBGBCR_C_SUPER_ANY | ARMv7A_DBGBCR_C_BKPT_ENABLED)
            else:
                dev.Write32(ARMv7A_DEBUG_BASE+ARMv7A_DBGBCR0, ARMv7A_DBGBCR_M_IVA_MATCH | ARMv7A_DBGBCR_C_BYTE_ACCESS_2BYTES_2 | ARMv7A_DBGBCR_C_SUPER_ANY | ARMv7A_DBGBCR_C_BKPT_ENABLED)
        else:
            dev.Write32(ARMv7A_DEBUG_BASE+ARMv7A_DBGBCR0, ARMv7A_DBGBCR_M_IVA_MATCH | ARMv7A_DBGBCR_C_BYTE_ACCESS_4BYTES | ARMv7A_DBGBCR_C_SUPER_ANY | ARMv7A_DBGBCR_C_BKPT_ENABLED)
    elif bp == 1:
        log.info("Debug: hwbp1 addr: %x\n" % (addr))
        enable_halting_debug()
        # Set the breakpoint
        dev.Write32(ARMv7A_DEBUG_BASE+ARMv7A_DBGBVR1,addr)
        # Enable the breakpoint, with address mismatch
        if is_thumb_mode():
            if addr % 4 == 0: # Word aligned
                dev.Write32(ARMv7A_DEBUG_BASE+ARMv7A_DBGBCR1, ARMv7A_DBGBCR_M_IVA_MATCH | ARMv7A_DBGBCR_C_BYTE_ACCESS_2BYTES_0 | ARMv7A_DBGBCR_C_SUPER_ANY | ARMv7A_DBGBCR_C_BKPT_ENABLED)
            else:
                dev.Write32(ARMv7A_DEBUG_BASE+ARMv7A_DBGBCR1, ARMv7A_DBGBCR_M_IVA_MATCH | ARMv7A_DBGBCR_C_BYTE_ACCESS_2BYTES_2 | ARMv7A_DBGBCR_C_SUPER_ANY | ARMv7A_DBGBCR_C_BKPT_ENABLED)
        else:
            dev.Write32(ARMv7A_DEBUG_BASE+ARMv7A_DBGBCR1, ARMv7A_DBGBCR_M_IVA_MATCH | ARMv7A_DBGBCR_C_BYTE_ACCESS_4BYTES | ARMv7A_DBGBCR_C_SUPER_ANY | ARMv7A_DBGBCR_C_BKPT_ENABLED)
    elif bp == 2:
        log.info("Debug: hwbp2 addr: %x\n" % (addr))
        enable_halting_debug()
        # Set the breakpoint
        dev.Write32(ARMv7A_DEBUG_BASE+ARMv7A_DBGBVR2,addr)
        # Enable the breakpoint, with address mismatch
        if is_thumb_mode():
            if addr % 4 == 0: # Word aligned
                dev.Write32(ARMv7A_DEBUG_BASE+ARMv7A_DBGBCR2, ARMv7A_DBGBCR_M_IVA_MATCH | ARMv7A_DBGBCR_C_BYTE_ACCESS_2BYTES_0 | ARMv7A_DBGBCR_C_SUPER_ANY | ARMv7A_DBGBCR_C_BKPT_ENABLED)
            else:
                dev.Write32(ARMv7A_DEBUG_BASE+ARMv7A_DBGBCR2, ARMv7A_DBGBCR_M_IVA_MATCH | ARMv7A_DBGBCR_C_BYTE_ACCESS_2BYTES_2 | ARMv7A_DBGBCR_C_SUPER_ANY | ARMv7A_DBGBCR_C_BKPT_ENABLED)
    else:
        raise Exception("Insufficient number of hardware breakpoints : use software breakpoints")

def clear_hw_bp(num):
    log.info("Debug: clr_hw_bp num %d \n" % (num))
    global hw_bkpts
    global max_number_of_breakpoints
    for i in range(0,max_number_of_breakpoints):
        if i in hw_bkpts:
            if num in hw_bkpts[i]:
                hw_bkpts.pop(i)
                clr_hardware_bp(i)
                return 0
    raise Exception("Illegal clear of breakpoint")
            
def clr_hardware_bp(bp):
    if bp == 0:
        log.info("Debug: hwbp0 cleared\n")
        # Disable the breakpoint
        dev.Write32(ARMv7A_DEBUG_BASE+ARMv7A_DBGBCR0, 0x0)
    elif bp == 1:
        log.info("Debug: hwbp1 cleared\n")
        # Disable the breakpoint
        dev.Write32(ARMv7A_DEBUG_BASE+ARMv7A_DBGBCR1, 0x0)
    elif bp == 2:
        log.info("Debug: hwbp2 cleared\n")
        # Disable the breakpoint
        dev.Write32(ARMv7A_DEBUG_BASE+ARMv7A_DBGBCR2, 0x0)
    else:
        raise Exception("Illegal clear of breakpoint")
