
def onShowPropsDFP(t):
    ide.addBooleanProperty(t, "x.erase.clearprot", "*|programoptions|programoptions.eraseb4program", "Clear protection on erase", "If checked, an erase will clear all protection by resetting BOOTPROT and NVMCTRL region locks. If unchecked, an erase may leave parts of the chip unerased", True)

