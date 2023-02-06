def __on_project_load_done(confName):  
    try:
       firstWord = 0x1d &  memCfg.Read32(0xd0000000)
    except: # core 1 does not have cfg mem
        return
    if firstWord == 0x19:
        if 1 == msg.dlgYesNo("The config bits are set to disable the EFL. Do you want to continue ?","Warning"):
            raise Exception("Aborting load because the config bits are set to disable the EFL")
