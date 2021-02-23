
def onShowPropsDFP(t):
    ide.addEnumProperty(t,"x.erase.type", "*|programoptions|programoptions.eraseb4program","Chip erase type", "Select memories to erase", "ChipEraseAll", 
                    "ChipEraseAll|Erase All Memories + NVM Configuration rows (ChipErase_ALL)|n/a\n"
                    "ChipErase|Erase All Memories excluding BOOT region (ChipErase)|n/a")
