
def onShowPropsDFP(t):
    ide.addTextProperty(t,"x.erase.key" , "RI4Tool|programoptions|programoptions.eraseb4program","Erase key with validation","Enter 4x32 bit numbers separated by comma", "0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF")
    ide.addEnumProperty(t,"x.erase.type", "RI4Tool|programoptions|programoptions.eraseb4program","Chip erase type", "Select type of erase ", "ChipEraseAll", 
                        "ChipEraseAll|ChipErase All|Chip Erase all\n"
                        "ChipEraseS|ChipErase S|Chip erase of secure\n"
                        "ChipEraseNS|ChipErase NS|Chip erase of nonsec")

