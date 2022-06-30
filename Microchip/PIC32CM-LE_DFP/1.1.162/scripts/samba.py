import os


class Samba():
    def __init__(self, range_start, range_end, config):
        self.range_start = range_start
        self.range_end = range_end
        self.config = config
        self.applet_type = config["applet_type"]
        self.code_url = config["code_url"]
        self.code_addr = config["code_addr"]
        self.mailbox_addr = config["mailbox_addr"]
        self.entry_addr = config["entry_addr"]

    def initialize(self):
        log.info("Initialize applet_type: %s\n code_url: %s\n code_addr: %08x\n mailbox_addr: %08x\n entry_addr: %08x\n" % (self.applet_type, self.code_url, self.code_addr, self.mailbox_addr, self.entry_addr))
        if self.applet_type == "BootConfig":
            return apply_boot_config_applet(self.config, self.code_url, self.code_addr, self.mailbox_addr, self.entry_addr)
        elif self.applet_type == "ExtRam":
            return apply_extram_applet(self.config, self.code_url, self.code_addr, self.mailbox_addr, self.entry_addr)
        elif self.applet_type == "InternalFlash":
            return apply_internal_flash_applet(self.config, self.code_url, self.code_addr, self.mailbox_addr, self.entry_addr)
        elif self.applet_type == "LowLevel":
            return apply_low_level_applet(self.config, self.code_url, self.code_addr, self.mailbox_addr, self.entry_addr)
        elif self.applet_type == "NANDFlash":
            return apply_nand_flash_applet(self.config, self.code_url, self.code_addr, self.mailbox_addr, self.entry_addr)
        elif self.applet_type == "QSPIFlash":
            return apply_qspi_flash_applet(self.config, self.code_url, self.code_addr, self.mailbox_addr, self.entry_addr)
        elif self.applet_type == "SDMMC":
            return apply_sdmmc_applet(self.config, self.code_url, self.code_addr, self.mailbox_addr, self.entry_addr)

    def write(self, address, data):
        applet = self.initialize()
        applet.write(address, data)

    def read(self, address, data):
        applet = self.initialize()
        applet.read(address, data)

    def erase(self, address, size):
        applet = self.initialize()
        applet.erase(address, size)


class Device:
    def __init__(self, config, code_url, code_address, mailbox_address, entry_address):
        self.config = config
        self.code_url = code_url
        self.code_address = code_address
        self.mailbox_address = mailbox_address
        self.entry_address = entry_address


class AppletBase(object):
    def __init__(self, device):
        self.device = device
        self.commands = {}
        self.code_url = self.device.code_url
        self.code_address = self.device.code_address
        self.mailbox_address = self.device.mailbox_address
        self.entry_address = self.device.entry_address
        self.buffer_address = None
        self.buffer_size = None
        self.page_size = None
        self.memory_pages = None
        self.erase_support = None
        self.nand_header = None
        self.trim_padding = False
        self.padding_byte = 0xFF
        self.init_commands()

    def init_commands(self):
        pass

    def initialize(self):
        self.applet_upload()
        self.call_initialize()
        if self.memory_pages * self.page_size > 0:
            msg.print("Detected memory size is %d bytes\n" % (self.memory_pages * self.page_size))
        if self.page_size > 0:
            msg.print("Page size is %d bytes\n" % self.page_size)
        if self.buffer_size > 0:
            msg.print("Buffer is %d bytes (%d pages) at address %08x\n" % (
                self.buffer_size, (self.buffer_size / self.page_size), self.buffer_address))
        if self.nand_header != 0:
            msg.print("NAND header value is %08x\n" % self.nand_header)
        if self.erase_support != 0:
            erase_sizes = []
            for i in range(32):
                if self.erase_support & (1 << i) != 0:
                    size = (1 << i) * self.page_size
                    if size > 1024 * 1024:
                        erase_sizes.append("%d MB" % (size >> 20))
                    elif size > 1024:
                        erase_sizes.append("%d KB" % (size >> 10))
                    else:
                        erase_sizes.append("%d B" % size)
            msg.print("Supported erase block sizes: " + ",".join(erase_sizes) + "\n")

    def applet_upload(self):
        try:
            with open(self.code_url, "rb") as fb:
                binary = bytearray(fb.read())
            dev.Write(self.code_address, binary, 0, len(binary))
            fb.close()
        except:
            msg.msg("Failed to open applet binary file %s" % self.code_url, "Error")
            raise

    def default_init_args(self):
        serial_instance = self.device.config["instance"]
        serial_ioset = self.device.config["ioset"]
        connection_type = 2
        trace_level = 3
        return [connection_type, trace_level, serial_instance, serial_ioset]

    def call_initialize(self):
        cmd = self.commands.get("initialize", None)
        if cmd is not None:
            args = self.build_init_args()
            status, mailbox = self.applet_execute(cmd, args)
            if status == 0:
                self.buffer_address = self.applet_mailbox_read(mailbox, 0)
                self.buffer_size = self.applet_mailbox_read(mailbox, 1)
                self.page_size = self.applet_mailbox_read(mailbox, 2)
                self.memory_pages = self.applet_mailbox_read(mailbox, 3)
                self.erase_support = self.applet_mailbox_read(mailbox, 4)
                self.nand_header = self.applet_mailbox_read(mailbox, 5)
            else:
                self.buffer_address = 0
                self.buffer_size = 0
                self.page_size = 0
                self.memory_pages = 0
                self.erase_support = 0
                self.nand_header = 0
                raise Exception("could not initialize applet (status %d)" % status)
        else:
            raise Exception("applet does not support 'initialize' command")

        if self.buffer_size > 128 * 1024:
            self.buffer_size = 128 * 1024

    def build_init_args(self):
        return self.default_init_args()

    def applet_execute(self, cmd, args):
        return self.default_applet_execute(cmd, args)

    def default_applet_execute(self, cmd, args):
        mailbox = [cmd, 0xFFFFFFFF]
        mailbox.extend(args)
        self.applet_mailbox_send(mailbox)
        AppletBase.run_applet(self.entry_address)
        mailbox = self.applet_mailbox_receive()
        if mailbox[0] == 0xFFFFFFFF - cmd:
            return mailbox[1], mailbox

    def applet_mailbox_send(self, mailbox):
        log.info("Applet mailbox send")
        for i in range(len(mailbox)):
            dev.Write32(self.mailbox_address + i * 4, mailbox[i])

    def applet_mailbox_receive(self):
        log.info("Applet mailbox receive")
        mailbox = [0] * 32
        for i in range(32):
            mailbox[i] = dev.Read32(self.mailbox_address + 4 * i)
        return mailbox

    @staticmethod
    def applet_mailbox_read(mailbox, index):
        if index + 2 > len(mailbox) - 1:
            return 0
        return mailbox[index + 2]

    @staticmethod
    def run_applet(address):
        if  is_target_running():
            log.info("Debug: applet has not halted.")
            return
        if "A5" in architecture or "A7" in architecture or "ARM9" in architecture:
            dev.WriteReg64(27, 0)
            dev.WriteReg64(arm.PC, address)

            handle = dev.SetBPEx(0, 0)

        elif "CORTEX-M" in architecture:
            pc = dev.Read32(address + 4)
            pc &= 0xFFFFFFFE  # make sue pc is even
            dev.WriteReg64(14, 1)
            dev.WriteReg64(arm.PC, pc)

            AppletBase.clear_hardware_breakpoint(0)
            AppletBase.set_hardware_breakpoint(0, 0)
        
        run_target()

        for i in range(10):  # wait for breakpoint at 0 to hit
            if not is_target_running():
                log.info("Debug: applet has halted.")
                if "A5" in architecture or "A7" in architecture or "ARM9" in architecture:
                    dev.ClearBPEx(handle)
                return
            dev.Delay(1000000)

        raise Exception("target does not halt")

    @staticmethod
    def set_hardware_breakpoint(slot, address):
        log.info("set HW breakpoint at slot %08x, address %08x" % (slot, address))
        rev = dev.Read32(0xe0002000)
        if rev & 1 == 0:
            address |= ((address & 2) + 2) << 29;
            address &= ~3;
        dev.Write32(0xe0002000, 0x10000083)  # enable FPB
        dev.Write32(0xe0002008 + 4 * slot, address | 1)

    @staticmethod
    def clear_hardware_breakpoint(slot):
        log.info("clear HW breakpoint %08x" % slot)
        dev.Write32(0xe0002008 + 4 * slot, 0)

    def erase(self, offset, size):
        log.info("erase at offset %08x" % offset)

        if offset is None:
            offset = 0
        else:
            if (offset & (self.page_size - 1)) != 0:
                log.info("offset 0x%08x is not page-aligned" % offset)
                padding_before = offset & (self.page_size - 1)
                offset -= padding_before
                log.info("adjust offset to 0x%08x to be page-aligned" % offset)
            offset /= self.page_size

        if size is None:
            size = self.memory_pages - offset
        else:
            if (size & (self.page_size - 1)) != 0:
                log.info("size 0x%08x is not page-aligned" % size)
                padding_after = self.page_size - (size & (self.page_size - 1))
                size += padding_after
                log.info("adjust size to 0x%08x to be page-aligned" % size)
            size /= self.page_size

        if offset + size > self.memory_pages:
            raise Exception("requested erase region overflows memory")

        end = offset + size

        plan = self.compute_erase_plan(offset, end, False)
        if plan is None:
            raise Exception("cannot erase requested region using supported erase block size without overflow")

        for d in plan:
            offset = d["start"]
            for n in range(d["count"]):
                count = self.call_erase_pages(offset, d["length"])
                percent = 100.0 * offset / end
                msg.print("erased %d bytes at address %08x (%f%%)\n" % (count * self.page_size, offset * self.page_size, percent))
                offset += count

    def compute_erase_plan(self, start, end, overflow):
        supported = []
        for i in range(32, -1, -1):
            size = 1 << i
            if (self.erase_support & size) != 0:
                supported.append(size)

        plan = []
        current_start = 0
        current_size = 0
        current_count = 0
        while start < end:
            best_size = 0
            for support in supported:
                size = support
                # skip unaligned
                if (start & (size - 1)) != 0:
                    continue
                if start + size > end:
                    continue
                best_size = size
                break

            if not overflow and best_size == 0:
                best_size = supported[len(supported) - 1]
                if current_size == 0:
                    start &= not (best_size - 1)

            if best_size == 0:
                return

            if current_size == best_size:
                current_count += 1
            else:
                if current_size != 0:
                    plan.append({"start": current_start, "length": current_size, "count": current_count})
                current_start = start
                current_size = best_size
                current_count = 1

            start += best_size

        if current_size != 0:
            plan.append({"start": current_start, "length": current_size, "count": current_count})

        return plan

    def call_erase_pages(self, page_offset, length):
        log.info("call erase pages at offset %08x length %08x" % (page_offset, length))
        cmd = self.commands.get("erasePages", None)
        if cmd is not None:
            args = [page_offset, length]
            status, mailbox = self.applet_execute(cmd, args)
            if status == 0:
                return self.applet_mailbox_read(mailbox, 0)
            elif status == 9:
                msg.print("skipped bad pages at offset %08x\n" % page_offset * self.page_size)
                return length
            else:
                raise Exception("could not erase pages at address %08x" % page_offset * self.page_size)
        else:
            raise Exception("applet does not support 'erase pages' command")

    def applet_buffer_write(self, data):
        log.info("applet buffer write")
        if len(data) > self.buffer_size:
            return False
        dev.Write(self.buffer_address, data, 0, len(data))

        return True

    def applet_buffer_read(self, length):
        log.info("applet buffer read %08x bytes" % length)
        data = bytearray(length)
        dev.Read(self.buffer_address, data, 0, length)
        return data

    def call_write_pages(self, page_offset, data):
        log.info("call write pages at page offset %08x" % page_offset)
        cmd = self.commands.get("writePages", None)
        if cmd is not None:
            if (len(data) & (self.page_size - 1)) != 0:
                raise Exception("invalid write data buffer length(must be a multiple of page size")
            length = len(data) / self.page_size
            if page_offset + length > self.memory_pages  * self.page_size:
                remaining = self.memory_pages - page_offset
                raise Exception("cannot write past end of memory, only %d bytes remaining at offset %08x (requested %d bytes)" % (remaining * self.page_size, page_offset * self.page_size, length * self.page_size))
            if not self.applet_buffer_write(data):
                raise Exception("could not write pages at address %08x (write to applet buffer failed)" % (page_offset * self.page_size))
            args = [page_offset, length]
            status, mailbox = self.applet_execute(cmd, args)
            if status != 0 and status != 9:
                raise Exception(
                    "failed to write pages at address %08x (status: %d)" % (page_offset * self.page_size, status))
            pages_written = self.applet_mailbox_read(mailbox, 0)
            if status != 9 and pages_written != length:
                raise Exception(
                    "could not write pages at address %08x (applet returned success but did not write enough data" % (page_offset * self.page_size))
            return pages_written
        else:
            raise Exception("applet does not support 'write pages' command")

    def call_read_pages(self, page_offset, length):
        log.info("call read pages at page offset %08x, length %08x" % (page_offset, length))
        cmd = self.commands.get("readPages", None)

        if cmd is not None:
            if page_offset + length > self.memory_pages * self.page_size:
                remaining = self.memory_pages - page_offset
                raise Exception("Cannot read past end of memory, only %08x bytes remaining at offset %08x (requested %08x bytes)" % (remaining * self.page_size, page_offset * self.page_size, length * self.page_size))
            args = [page_offset, length]
            status, mailbox = self.applet_execute(cmd, args)
            if status != 0 and status != 9:
                raise Exception("Failed to read pages at address %08x (status: %08x)" % (page_offset * self.page_size, status))
            pages_read = self.applet_mailbox_read(mailbox, 0)
            if status != 9 and pages_read != length:
                raise Exception("Could not read pages at address %08x (applet returned success but did not return enough data)" % page_offset * self.page_size)
            data = self.applet_buffer_read(pages_read * self.page_size)
            if len(data) < pages_read * self.page_size:
                raise Exception("Could not read pages at address %08x (read from applet buffer failed)" % page_offset * self.page_size)
            return data
        raise Exception("Applet does not support 'Read Pages' commands")

    @staticmethod
    def get_buffer_trim_count(buffer, offset, pages, page_size, padding_byte):
        if offset + pages * page_size > len(buffer):
            return 0

        for page in range(pages, 0, -1):
            empty = True
            for i in range(page_size):
                if buffer[offset + (page - 1) * page_size + i] != padding_byte:
                    empty = False
                    break
            if not empty:
                break

        return pages - page

    def prepare_for_write(self, offset, byte_array):
        if (offset & (self.page_size - 1)) != 0:
            padding_before = offset & (self.page_size - 1)
            msg.print("offset %08x not page-aligned: add %d bytes of padding and adjusting offset to %08x\n" % (offset, padding_before, offset - padding_before))
            for i in range(padding_before):
                byte_array.insert(0, self.padding_byte)
            offset -= padding_before

        if (len(byte_array) & (self.page_size - 1)) != 0:
            padding_after = self.page_size - (len(byte_array) & (self.page_size - 1))
            msg.print("appending %d bytes of padding to fill the last written page\n" % padding_after)
            for i in range(padding_after):
                byte_array.append(self.padding_byte)

        return offset, byte_array

    def write(self, offset, data):
        log.info("write to offset %08x" %  offset)

        byte_array = data

        offset, byte_array = self.prepare_for_write(offset, byte_array)
        offset /= self.page_size

        size = len(byte_array) / self.page_size

        current = 0
        bad_offset = 0
        bad_count = 0
        remaining = size

        while remaining > 0:
            start = current * self.page_size
            if self.trim_padding:
                pages_to_end_of_block = min(remaining, self.erase_support - (offset & (self.erase_support - 1)))
                data = byte_array[start:pages_to_end_of_block * self.page_size - start]
                if pages_to_end_of_block == self.erase_support:
                    pages_to_skip = AppletBase.get_buffer_trim_count(data, 0, pages_to_end_of_block, self.page_size, self.padding_byte)
                else:
                    pages_to_skip = 0
                pages_to_write = pages_to_end_of_block - pages_to_skip
            else:
                pages_to_skip = 0
                pages_to_write = min(remaining, self.buffer_size / self.page_size)
                data = byte_array[start:pages_to_write * self.page_size + start]

            while pages_to_write > 0:
                count = min(pages_to_write, self.buffer_size / self.page_size)
                pages_written = self.call_write_pages(offset, data[0:count * self.page_size])

                if pages_written < count:
                    count = pages_written

                if count == 0:
                    if bad_count == 0:
                        bad_offset = offset
                    bad_count += 1
                    offset += 1
                    continue
                elif bad_count > 0:
                    msg.print("skipped %d badpage(s) at address %08x\n" % (bad_count, bad_offset * self.page_size))

                percent = (1 - (float(remaining) - float(count)) / float(size)) * 100
                msg.print("wrote %d bytes at address %08x (%f%%)\n" % (count * self.page_size, offset * self.page_size, percent))
                data = data[count * self.page_size:]
                current += count
                offset += count
                remaining -= count
                pages_to_write -= count

            if pages_to_skip > 0:
                msg.print("skipped %d empty page(s) at address %08x\n" % (pages_to_skip, offset * self.page_size))
                current += pages_to_skip
                offset += pages_to_skip
                remaining -= pages_to_skip

    def read(self, offset, data):
        bad_page_total = 0
        bad_page_count = 0
        size = len(data)
        log.info("read from offset %08x size %08x" %  (offset, size))
        remaining = size
        while remaining > 0:
            first_page = offset // self.page_size
            last_page = -(-(offset + remaining) // self.page_size)

            count = max(1, min(last_page - first_page, self.buffer_size / self.page_size))

            result = self.call_read_pages(bad_page_total + first_page, count)
            if len(result) < count * self.page_size:
                count = len(result) / self.page_size

            if count == 0:
                if bad_page_count == 0:
                    bad_page_first = first_page
                bad_page_count += 1
                bad_page_total += 1
                continue
            elif bad_page_count > 0:
                log.info("Skipped %08x bad page(s) at address %08x" % (bad_page_count, bad_page_first * self.page_size))
                bad_page_count = 0

            if count != 0:
                read_offset = offset - first_page * self.page_size
                read_length = min(remaining, count * self.page_size - read_offset)
                data[size - remaining: size - remaining + read_length] = result[read_offset: read_offset + read_length]
                
                percent = 100 * (1 - (float(remaining) - float(read_length)) / float(size))
                log.info("Read %08x bytes at address %08x (%f%%)" %(read_length, offset, percent))

                offset += read_length
                remaining -= read_length
        

class BootConfigApplet(AppletBase):
    def init_commands(self):
        self.commands["initialize"] = 0
        self.commands["readBootCfg"] = 0x34
        self.commands["writeBootCfg"] = 0x35

    def write_boot_cfg(self, index, value):
        log.info("call write boot config index %08x value %08x" % (index, value))
        cmd = self.commands.get("writeBootCfg", None)
        if cmd is not None:
            status, _ = self.applet_execute(cmd, [index, value])
            if status != 0:
                raise Exception("write boot config command failed (status=%d)" % status)
        else:
            raise Exception("applet does not support 'write boot config' command")

    def read_boot_cfg(self, index):
        log.info("call read boot config index %08x" % index)
        cmd = self.commands.get("readBootCfg", None)
        if cmd is not None:
            status, _ = self.applet_execute(cmd, [index])
            if status != 0:
                raise Exception("read boot config command failed (status=%d)" % status)
            return AppletBase.applet_mailbox_read(0)
        else:
            raise Exception("applet does not support 'read boot config' command")


class ExtRamApplet(AppletBase):
    def init_commands(self):
        self.commands["initialize"] = 0

    def build_init_args(self):
        args = self.default_init_args()
        config = [0, self.device.config["preset"]]
        args.extend(config)
        return args


class InternalFlashApplet(AppletBase):
    def init_commands(self):
        self.commands["initialize"] = 0
        self.commands["erasePages"] = 0x31
        self.commands["readPages"] = 0x32
        self.commands["writePages"] = 0x33


class LowLevelApplet(AppletBase):
    def init_commands(self):
        self.commands["initialize"] = 0

    def build_init_args(self):
        args = self.default_init_args()
        args.extend([0, 0, 0])
        return args


class NANDFlashApplet(AppletBase):
    def init_commands(self):
        self.commands["initialize"] = 0
        self.commands["erasePages"] = 0x31
        self.commands["readPages"] = 0x32
        self.commands["writePages"] = 0x33
        self.commands["tagBlocks"] = 0x36
    
    def build_init_args(self):
        args = self.default_init_args()
        config = [self.device.config["ioset"], self.device.config["busWidth"], self.device.config["header"]]
        args.extend(config)
        return args


class QSPIFlashApplet(AppletBase):
    def init_commands(self):
        self.commands["initialize"] = 0
        self.commands["erasePages"] = 0x31
        self.commands["readPages"] = 0x32
        self.commands["writePages"] = 0x33
        
    def build_init_args(self):
        args = self.default_init_args()
        config = [self.device.config["instance"], self.device.config["ioset"], int(self.device.config["freq"] * 1000000)]
        args.extend(config)
        return args


class SDMMCApplet(AppletBase):
    def init_commands(self):
        self.commands["initialize"] = 0
        self.commands["readPages"] = 0x32
        self.commands["writePages"] = 0x33
        self.commands["enableBootParatition"] = 0x37

    def build_init_args(self):
        args = self.default_init_args()
        config = [self.device.config["instance"], self.device.config["ioset"], self.device.config["partition"], self.device.config["busWidth"], self.device.config["voltages"]]
        args.extend(config)
        return args


# The users can overwrite the following functions to customize their own ways of using applets
def apply_boot_config_applet(config, code_url, code_addr, mailbox_addr, entry_addr):
    # example applet binary for param code_url
    # https://github.com/atmelcorp/sam-ba/blob/master/src/plugins/device/samv71/applets/applet-bootconfig_samv71-generic_sram.bin
    device = Device(config, code_url, code_addr, mailbox_addr, entry_addr)
    applet = BootConfigApplet(device)
    applet.initialize()

    # read from boot cfg and write back, no change
    value = applet.read_boot_cfg(0)
    applet.write_boot_cfg(0, value)

    return applet


def apply_extram_applet(config, code_url, code_addr, mailbox_addr, entry_addr):
    # example applet binary for param code_url
    # https://github.com/atmelcorp/sam-ba/blob/master/src/plugins/device/sam9x60/applets/applet-extram_sam9x60-generic_sram.bin
    device = Device(config, code_url, code_addr, mailbox_addr, entry_addr)
    applet = ExtRamApplet(device)
    applet.initialize()
    
    return applet


def apply_internal_flash_applet(config, code_url, code_addr, mailbox_addr, entry_addr):
    # example applet binary for param code_url
    # https://github.com/atmelcorp/sam-ba/blob/master/src/plugins/device/samv71/applets/applet-internalflash_samv71-generic_sram.bin
    device = Device(config, code_url, code_addr, mailbox_addr, entry_addr)
    applet = InternalFlashApplet(device)
    applet.initialize()

    return applet


def apply_low_level_applet(config, code_url, code_addr, mailbox_addr, entry_addr):
    # example applet binary for param code_url
    # https://github.com/atmelcorp/sam-ba/blob/master/src/plugins/device/sam9x60/applets/applet-lowlevel_sam9x60-generic_sram.bin
    device = Device(config, code_url, code_addr, mailbox_addr, entry_addr)
    applet =LowLevelApplet(device)
    applet.initialize()

    return applet


def apply_nand_flash_applet(config, code_url, code_addr, mailbox_addr, entry_addr):
    # example applet binary for param code_url
    # https://github.com/atmelcorp/sam-ba/blob/master/src/plugins/device/sam9x60/applets/applet-nandflash_sam9x60-generic_sram.bin
    device = Device(config, code_url, code_addr, mailbox_addr, entry_addr)
    applet = NANDFlashApplet(device)
    applet.initialize()
    
    return applet


def apply_qspi_flash_applet(config, code_url, code_addr, mailbox_addr, entry_addr):
    # example applet binary for param code_url
    # https://github.com/atmelcorp/sam-ba/blob/master/src/plugins/device/sam9x60/applets/applet-qspiflash_sam9x60-generic_sram.bin
    device = Device(config, code_url, code_addr, mailbox_addr, entry_addr)
    applet = QSPIFlashApplet(device)
    applet.initialize()
    
    return applet


def apply_sdmmc_applet(config, code_url, code_addr, mailbox_addr, entry_addr):
    # example applet binary for param code_url
    # https://github.com/atmelcorp/sam-ba/blob/master/src/plugins/device/sam9x60/applets/applet-sdmmc_sam9x60-generic_sram.bin
    device = Device(config, code_url, code_addr, mailbox_addr, entry_addr)
    applet = SDMMCApplet(device)
    applet.initialize()
    
    return applet


