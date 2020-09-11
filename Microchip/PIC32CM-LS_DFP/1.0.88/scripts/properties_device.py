
def onShowPropsDFP(t):
    ide.addTextProperty(t,"x.erase.key" , "RI4Tool|programoptions|programoptions.eraseb4program","Erase key with validation","Enter 4x32 bit numbers separated by comma", "0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF")
    ide.addEnumProperty(t,"x.erase.type", "RI4Tool|programoptions|programoptions.eraseb4program","Chip erase type", "Select memories to erase", "ChipEraseAll", 
                        "ChipEraseAll|All Memories + NVM configuration rows (ChipErase_ALL)|n/a\n"
                        "ChipEraseS|All Memories excluding BOOT region (ChipErase_S)|n/a\n"
                        "ChipEraseNS|All Non Secure Memory Regions (ChipErase_NS)|n/a")

