
def onShowPropsDFP(t):
    if "S1" not in device:
        ide.addTextProperty(t,"x.erase.key" , "*|programoptions|programoptions.eraseb4program","Erasechip key with validation","Enter 4x32 bit numbers separated by comma :", "0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF")
        if ("CK" in device) and ("SG" in device):
            ide.addEnumProperty(t,"x.erase.type", "RI4Tool|programoptions|programoptions.eraseb4program","Chip erase type", "Select memories to erase", "ChipEraseAll", 
                        "ChipEraseAll|All Memories + NVM configuration rows (ChipErase_ALL)|n/a\n"
                        "ChipEraseS|All Memories excluding BOOT region (ChipErase_S)|n/a\n"
                        "ChipEraseNS|All Non Secure Memory Regions excluding BOOT region(ChipErase_NS)|n/a")

