
def onShowPropsDFP(t):
    ide.addPropCategory(t,"diagnostics" , "*|toolpack", "Diagnostics")
    ide.addBooleanProperty(t,"script.reset_by_pin" , "*|diagnostics|*","Use RESET pin instead of AIRCR reset","Normally unchecked. Check to reset using the RST pin instead of AIRCR", False)


