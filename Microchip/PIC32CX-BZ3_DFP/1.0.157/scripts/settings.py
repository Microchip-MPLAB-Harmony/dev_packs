class Settings():
    def __init__(self):
        self.dict = {}

    def getBool(self, key, default):
        if key not in self.dict:
            return default
        return self.dict[key] == "true"

    def getString(self, key, default):
        if key not in self.dict:
            return default
        return self.dict[key]

    def getNumeric(self, key, default):
        if key not in self.dict:
            return default
        return int(self.dict[key])

    def parseMPLABProjectFile(self, file, cfg):
        from xml.dom import minidom
        xmldoc = minidom.parse(file)
        new_dict = {}
        confs = xmldoc.getElementsByTagName('conf')
        for conf in confs:
            if str(conf.attributes['name'].value) == str(cfg):
                tools = conf.getElementsByTagName('Tool')
                for tool in tools:
                    properties = tool.getElementsByTagName('property')
                    for p in properties:
                        new_dict[str(p.attributes['key'].value)] = str(p.attributes['value'].value)
                settings = conf.getElementsByTagName('ScriptingSettings')
                for setting in settings:
                    properties = setting.getElementsByTagName('ScriptingSetting')
                    for p in properties:
                        new_dict[str(p.attributes['key'].value)] = str(p.attributes['value'].value)
        self.dict = new_dict
        print(self.dict)



