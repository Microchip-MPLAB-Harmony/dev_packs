from settings import Settings
from hexdev import HexDev
import sys

# was signhexfiles.py
class Log:
    def error(self, input):
        print(input)

    def info(self, input):
        print(input)

g_project_dir = ""
g_input_file = ""

class Ide:
    def expandProjectMacrosEx(t, p,c,toExpand,debugMode):
        if toExpand == "${ProjectDir}":
            return g_project_dir
        if toExpand == "${ProjectDir}/${ImagePath}":
            return g_input_file
        return toExpand

def cmddialog(t): #mock for dialog function
    print t

if __name__ == "__main__":
    from com.microchip.mchpython import Utils

    if len (sys.argv) < 4:
        print ("Usage : sign.py  autoloadPyPath  InputeHexFile ProjectDir ConfigName FuncName fnargs")
        exit()
    autoexec_script_file  = sys.argv[1]
    
    g_input_file = sys.argv[2] 
    g_project_dir = sys.argv[3]
    cfg_name = sys.argv[4]

    func_name = sys.argv[5]
    
    utils = Utils()
    log = Log()
    ide = Ide()
    is_debug_build = False
    config_file = g_project_dir + "/nbproject/configurations.xml"

    device = "PIC32CX"    
    blocksize = 128 #TODO: Set correct blocksize

    settings = Settings()
    settings.parseMPLABProjectFile(config_file,cfg_name)
    mem = HexDev(blocksize, g_input_file)
    dev = HexDev(blocksize, g_input_file)

    scriptLocals = {"__file__": autoexec_script_file, "is_debug_build" : False, "ide":ide , "dev":dev, "log":log, "mem":mem , "utils":utils, "settings":settings}
    execfile(autoexec_script_file, scriptLocals)

    fncall = func_name + "("
    for i in range(6,len(sys.argv)):
        fncall = fncall + sys.argv[i]
        if i < len(sys.argv) - 1:
            fncall = fncall + ","

    fncall = fncall + ")"
    print("Running function: \n--------------------- " + fncall)
    scriptLocals["dialog"] = cmddialog
    eval(fncall,scriptLocals)
    print("--------------------- Finished")
        
   