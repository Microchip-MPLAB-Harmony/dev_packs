
def onShowPropsDFP(t):
    ide.addBooleanProperty(t, "x.erase.clearprot", "*|programoptions|programoptions.eraseb4program", "restore BOOTPROT and NVMCTRL_REGION_LOCKS to default", "If this option is enabled, an erase will restore BOOTPROT and NVMCTRL_REGION_LOCKS to default values", True)

