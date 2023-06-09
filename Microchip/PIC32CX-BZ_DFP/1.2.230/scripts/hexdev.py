from intelhex import IntelHex


class HexDev:

    def __init__(self, blocksize, input_file, output_file="HexOut.hex"):
        self.ih = IntelHex()
        self.ih.fromfile(input_file, format='hex')
        self.output_file = output_file
        self.ih.padding = 0xFF
        self.blocksize = blocksize

    def Read8(self, adr):
        return self.ih[adr]

    def Read16(self, adr): 
        return self.ih[adr] + (self.ih[adr+1] << 8)

    def Read32(self, adr):
        return self.ih[adr] + (self.ih[adr+1] << 8) + (self.ih[adr+2] << 16) + (self.ih[adr+3] << 24)

    def Write8(self, adr, val):
        self.ih[adr] = 0xFF & val

    def Write16(self, adr, val):
        self.ih[adr] = 0xFF & val
        self.ih[adr+1] = 0xFF & (val >> 8)

    def Write32(self, adr, val):
        self.ih[adr] = 0xFF & val
        self.ih[adr+1] = 0xFF & (val >> 8)
        self.ih[adr+2] = 0xFF & (val >> 16)
        self.ih[adr+3] = 0xFF & (val >> 24)

    def Read(self, adr, arr, offset, length):
        for i in range(length):
            arr[i+offset] = self.ih[adr+i]

    def Write(self, adr, arr, offset, length):
        for i in range(length):
            self.ih[adr+i] = arr[i+offset]

    def ReadBlock(self, type, address, offset, length, data):
        self.Read(address, data, offset, length)
    
    
    def WriteBlock(self, type, address, offset, length, data):
        self.Write(address, data, offset, length)
    
    def GetUsedAreas(self, type, startAddress, endAddress):
        keyList = sorted(list(self.ih.todict().keys()))
        new_list = [] 
        start = keyList[0] 
        
        for i in range(len(keyList)-1):
            if keyList[i] < startAddress:
                start = keyList[i+1]
                continue
            elif keyList[i+1] > endAddress:
                end = keyList[i]
                new_list.append([start,end, True])
                break

            if keyList[i+1] != keyList[i]+1:
                end = keyList[i]
                new_list.append([start,end,True])
                start = keyList[i+1]
            elif i == len(keyList)-2:
                end = keyList[i+1]
                new_list.append([start,end,True])

        #add padding to the block
        for block in new_list:
            block[0] = block[0] & ~(self.blocksize-1)
            block[1] = (block[1] + self.blocksize) & ~(self.blocksize-1)
        if len(new_list) < 2:
            return new_list
        changed = True
        lenl = len(new_list)
        while changed:
            changed = False
            for i in range(0,lenl-1):
                if new_list[i+1][0] <= new_list[i][1]:
                    new_list[i][1] = new_list[i+1][1]
                    del new_list[i+1]
                    lenl = lenl -1
                    changed = True 
                    break
        for block in new_list:
            block[1] = block[1] - 1  #match MPLAB behaviour, ranges are inclusive
        print (new_list)
        return new_list

    def GetLoadedAreas(self):
        keyList = sorted(list(self.ih.todict().keys()))
        new_list = [] 
        start = keyList[0]

        for i in range(len(keyList)-1):

            if keyList[i+1] != keyList[i]+1:
                end = keyList[i]
                new_list.append([start,end,"Pgm"])
                start = keyList[i+1]
            elif i == len(keyList)-2:
                end = keyList[i+1]
                new_list.append([start,end,"Pgm"])
        
        #add padding to the block
        for block in new_list:
            block[0] = block[0] & ~(self.blocksize-1)
            block[1] = (block[1] + self.blocksize) & ~(self.blocksize-1)
        if len(new_list) < 2:
            return new_list
        changed = True
        lenl = len(new_list)
        while changed:
            changed = False
            for i in range(0,lenl-1):
                if new_list[i+1][0] <= new_list[i][1]:
                    new_list[i][1] = new_list[i+1][1]
                    del new_list[i+1]
                    lenl = lenl -1
                    changed = True 
                    break
        for block in new_list:
            block[1] = block[1] - 1  #match MPLAB behaviour, ranges are inclusive
        return new_list

    class MemType:
        ProgramMemory = 1