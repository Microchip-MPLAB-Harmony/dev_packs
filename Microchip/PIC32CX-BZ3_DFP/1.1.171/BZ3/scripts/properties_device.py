#merged
import struct
from javax.swing import JPanel, JLabel, JFrame, JTextField, BoxLayout, JCheckBox, JButton,JFileChooser
from javax.swing import JOptionPane, GroupLayout, JComboBox, JFormattedTextField, JSeparator
from java.awt import BorderLayout
from java.text import DecimalFormat
import commands
import sys
import os.path
from os import path
from intelhex import IntelHex
import array
import hashlib
import binascii

from javax.crypto import Cipher
from javax.crypto.spec import IvParameterSpec, SecretKeySpec
from javax.swing.text import MaskFormatter
from java.awt.event import MouseAdapter
from javax.swing import ImageIcon

try:
    try:
        sys.modules.pop('internal_autoload')
    except:
        pass
    from internal_autoload import ss_login, ss_check_log_in, ss_sign_bytes
    ia_found = 1
    print("loaded")
except:
    ia_found = 0

global current_working_dir
current_working_dir = os.getcwd()

bsOpt = None
g_confName = None
zotaOpt = None


global_flash_type=1
global_slot_num=0
global_device_variant=0
g_device_family=1

global_header_start_address=0x1000000
global_header_size=0x200
global_crop_start_address=0x1000200
global_crop_end_address=0x1080000  
g_ecdsa_mthd='Local Key'
g_ss_role='securesign-test1-dev'
g_ss_key_name='test1ecdsap256'
g_ss_key_version='0'
g_private_key_file=''
g_private_key_file_absolute=''
g_project_fw_file=' '
g4_seq_num=0xFFFFFFFE
g1_md_rev=3
g1_cont_idx=1
g4_identifier='PHCM'
g4_filler1=0
g4_filler2=0
g4_filler3=0
g1_auth_mthd=0
g1_auth_key=0
gl_dec_mthd=0
gl_dec_key=0
g2_len=116 
g4_fw_img_rev=bytearray(b'\x01\x00\x00\x00')
g4_fw_img_len=0
g1_fw_img_dec_mthd=0
g1_fw_img_dec_key=0
g1_fw_img_signature_size=72
g96_fw_img_signature=bytearray(b'\x00')*96
g228_filler=bytearray(b'\x00')*228
g96_md_signature=bytearray(b'\x00')*96
g_metaheader=bytearray(b'\x00')*512
g1_md_signature_size=0
g_cfg_seq=0xFFEEDDBB
g_cfg_manu='MCHP'
g_cfg_auth='None'
g_cfg_fw_rev='00000001'
g_aes_key=bytearray(b'\xAA\xBB\xCC\xDD\xEE\xFF\x00\x11\x22\x33\x44\x55\x66\x77\x88\x99')
g_iv=bytearray(b'\x00')*16
g_img_src_addr=0
g_img_dst_addr=0
g_img_bytes=None
g_zota_header=bytearray(b'\x00')*69
g_zota_file_identifier=0x0BEEF11E
g_zota_header_version='0x0100'
g_zota_header_length=56
g_zota_field_control=0
g_zota_manufacture_code='0xFFFF'
g_zota_image_type='0xFFFF'
g_zota_file_version='0x00000000'
g_zota_zigbee_stack_version='0x0002'
g_zota_header_string='MCHP'
g_zota_total_image_size=0
g_zota_security_credential_version='0x00'
g_zota_security_credential_version_check=False
g_zota_upgrade_file_destination='0x0000000000000000'
g_zota_upgrade_file_destination_check=False
g_zota_minimum_hardware_version='0x0000'
g_zota_maximum_hardware_version='0x0000'
g_zota_hardware_version_check=False
g_cfg_outputfile='OTAPackage.bin'
g_cfg_outputfiletypes='BLE OTA File'
g_cfg_OTAPath='Internal Flash DFU'
g_cfg_outputEncryption='Encrypted'
g_bota_header=bytearray(b'\x00')*32
g_bota_header_ver=1
g_bota_encryption=1
g_bota_checksum=0
g_bota_file_type=1
g_bota_flash_img_id='0x9E000000'
g_bota_crc16=0xFFFF
g_alreadyLogin=0
g_ss_option=0
gframe=None

g_extflash_header=bytearray(b'\x00')*16
g_exthdr_rev=1
g_exthdr_dec_key=0
g_exthdr_chksum=0

def header_copyright():
    print("Header GUI v1.16 (c) 9/12/2023 Microchip Technology All Rights Reserved")
    
def ota_copyright():
    print("Over The Air Package Maker GUI v1.13 (c) 8/25/2023 Microchip Technology All Rights Reserved")
    
def memory_addr_set():
    global global_header_start_address
    global global_header_size 
    global global_crop_start_address
    global global_crop_end_address 
    global global_flash_type
    global g_img_src_addr
    global g_img_dst_addr
    global g_device_family
    global g2_len
    global g1_md_rev
    global g_bota_header_ver
    
    if g_device_family == 0:
        g2_len = 85
        g1_md_rev = 2
        g_bota_header_ver = 1
    else:
        g2_len = 116
        g_bota_header_ver = 2
        if g_device_family == 1:
            g1_md_rev = 1
        elif g_device_family < 4:
            g1_md_rev = 3
        else:
            dialog("Invalid Device Family", True)
    
    if global_flash_type == 0:
        if g_device_family == 1 or g_device_family == 2: # Buckland
            global_crop_end_address = 0x805000
        elif g_device_family == 3: # BigBuck
            global_crop_end_address = 0x80F000
        else:
            dialog("Invalid combo of device and flash type", True)
            return
        global_crop_end_address=0x805000
        #g_img_dst_addr=0x800200
        if global_slot_num == 0:
            global_header_start_address=0x800000
            global_crop_start_address=0x800200
            g_img_src_addr=0x800200
            g_img_dst_addr=0x800200
        elif global_slot_num == 1:
            if g_device_family == 1 or g_device_family == 2: #Buckland
                dialog("Invalid combo of device and flash type", True)
            elif g_device_family == 3: #BigBuck
                global_header_start_address=0x800000
                global_crop_start_address=0x800200
                g_img_src_addr=0x807A00
                g_img_dst_addr=0x800200
        else:
            dialog("Invalid Slot Number " + str(global_slot_num), True)
            return
    elif global_flash_type == 1:
        if g_device_family == 0:
            global_crop_end_address=0x1100000
        elif g_device_family < 3:
            if( global_device_variant == 0 ):
                global_crop_end_address=0x1080000
            else:
                global_crop_end_address=0x1040000
        elif g_device_family == 3:
            if(global_device_variant==0):
                global_crop_end_address = 0x1200000
            else:
                global_crop_end_address = 0x1100000
        else:
            dialog("Invalid device and flash type", True)
            return
        
        g_img_dst_addr=0x01000200
        global_header_start_address=0x1000000
        global_crop_start_address=0x1000200
        if global_slot_num == 0:
            #global_header_start_address=0x1000000
            #global_crop_start_address=0x1000200
            g_img_src_addr=0x01000200
            g_img_dst_addr=0x01000200
        elif global_slot_num == 1:
            if g_device_family == 0:
                g_img_src_addr=0x01080200
            elif g_device_family < 3:
                #global_header_start_address=0x1040000
                #global_crop_start_address=0x1040200
                if( global_device_variant == 0):
                    g_img_src_addr=0x01040200
                else:
                    dialog("Invalid device variant, flash type and slot number", True)
                    return
                #g_img_dst_addr=0x01040200
            elif g_device_family == 3:
                #global_header_start_address=0x1100000
                #global_crop_start_address=0x1100200
                if (global_device_variant == 0):
                    g_img_src_addr=0x01100200
                else:
                    g_img_src_addr=0x01080200
                #g_img_dst_addr=0x01100200
        else:
            dialog("Invalid Slot Number " + str(global_slot_num), True)
            return
    elif global_flash_type == 2:
        global_header_start_address=0x20000000
        global_crop_start_address=0x20000200
        if g_device_family < 3:
            global_crop_end_address=0x20008000 
        elif g_device_family == 3:
            global_crop_end_address=0x20038000
        else:
            dialog("Invalid combo of device and flash type", True)
            return
        g_img_src_addr=0x20000200
        g_img_dst_addr=0x20000200
    else:
        dialog("Invalid Flash Type " + str(global_flash_type), True)
        
def from_unsigned_to_signed_byte(unsigned_value):
  if unsigned_value  > 127:
    return unsigned_value-256
  return unsigned_value

def from_signed_to_unsigned_byte(signed_value):
  if signed_value  < 0:
    return signed_value+256
  return signed_value

def from_unsigned_list_to_signed(list_of_unsigned_values):
  return [from_unsigned_to_signed_byte(i) for i in list_of_unsigned_values]

def from_signed_list_to_unsigned(list_of_signed_values):
  return [from_signed_to_unsigned_byte(i) for i in list_of_signed_values]
    
def read_config_file():
    global g_cfg_seq 
    global g_cfg_manu
    global g_cfg_auth
    global g_cfg_fw_rev
    global g_ecdsa_mthd
    global g_ss_role
    global g_ss_key_name
    global g_ss_key_version
    global g_private_key_file
    global g_private_key_file_absolute
    global g_img_src_addr
    global g_img_dst_addr
    global g4_seq_num
    global g1_auth_mthd
    global g4_fw_img_rev
    global g_cfg_outputfiletypes
    global g_cfg_OTAPath
    global g_cfg_outputfile
    global g_cfg_outputEncryption
    global g_zota_file_identifier 
    global g_zota_header_version
    global g_zota_header_length
    global g_zota_field_control
    global g_zota_manufacture_code
    global g_zota_image_type
    global g_zota_file_version
    global g_zota_zigbee_stack_version
    global g_zota_header_string
    global g_zota_total_image_size
    global g_zota_security_credential_version
    global g_zota_upgrade_file_destination
    global g_zota_minimum_hardware_version
    global g_zota_maximum_hardware_version
    global g_zota_security_credential_version_check
    global g_zota_upgrade_file_destination_check
    global g_zota_hardware_version_check
    global g_bota_flash_img_id
    global g4_identifier
    global g_device_family
    global g_aes_key
    global g_iv
    global global_flash_type
    
#    if "BZ2" in device:
#        g_device_family = 0
#    elif "BZ3" in device:
#        g_device_family = 1
#    elif "BZ6" in device:
#        g_device_family = 3
    if( g_device_family == 0 ):
        print('device family is PIC32CXBZ2')
    elif (g_device_family == 1 ):
        print('device family is PIC32CXBZ3 A0')
    elif (g_device_family == 2 ):
        print('device family is PIC32CXBZ3 B0')
    elif (g_device_family == 3 ):
        print('device family is PIC32CXBZ6')
    else:
        print('incorrect device family')

    data = settings.getString("configuration.header.flash_type", "eflash")
    if( 'boot' in data ):
        global_flash_type = 0
    else:
        global_flash_type = 1

    g_cfg_seq = settings.getString("configuration.header.sequence", '0xFFFFFFFE')
    data = g_cfg_seq[:10]
    g4_seq_num = int(data,16) 
    if( g4_seq_num == 0 ):
        dialog("Invalid Sequence Number", True)
        return 1
    
    if g_device_family == 0:
        g_cfg_manu = settings.getString("configuration.header.manu", 'MCHP')
        data = g_cfg_manu[:4]
        g4_identifier = data
        
        g_cfg_auth = settings.getString("configuration.header.auth", 'None')
        g1_auth_mthd = 1
        if( 'ECDSA256-SHA256' in g_cfg_auth ):
            g1_auth_mthd = 2
        if( 'None' in g_cfg_auth ):
            g1_auth_mthd = 0
    else:
        g_cfg_auth = settings.getString("configuration.header.auth", 'None')
        if( 'None' in g_cfg_auth ):
            g1_auth_mthd = 0
        if( 'ECDSA p256+SHA256' in g_cfg_auth ):
            g1_auth_mthd = 1
        if( 'ECDSA p384+SHA384' in g_cfg_auth ):
            g1_auth_mthd = 2
    g_ecdsa_mthd = settings.getString("configuration.header.ecdsa_mthd", 'Local Key')
    g_ss_role = settings.getString("configuration.header.ss_role", 'securesign-test1-dev')
    g_ss_key_name = settings.getString("configuration.header.ss_key_name", 'test1ecdsap256')
    g_ss_key_version = settings.getString("configuration.header.ss_key_version", '0')
    g_cfg_fw_rev = settings.getString("configuration.header.fw_rev", "1.0")
    rev = [int(x) for x in g_cfg_fw_rev.split('.')]
    g4_fw_img_rev = bytearray(b'\x00') * 4
    if (len(rev) > 4 ):
        revlen = 4
    else:
        revlen = len(rev)
    g4_fw_img_rev[0:revlen] = rev[0:revlen]
    g4_fw_img_rev.reverse()
    g_private_key_file = settings.getString("configuration.header.key_file", '')
    if len(g_private_key_file) > 0:
        proj_dir = ide.expandProjectMacrosEx("${ProjectName}", g_confName, "${ProjectDir}", False)
        g_private_key_file_absolute = AbsolutePath(proj_dir, g_private_key_file)
    aes_key_str = settings.getString("configuration.header.aes_key", '0xaabbccddeeff00112233445566778899')
    g_aes_key = bytearray.fromhex(aes_key_str[2:])
    iv_str = settings.getString("configuration.header.iv", '0x00000000000000000000000000000000')
    g_iv = bytearray.fromhex(iv_str[2:])

    g_cfg_outputfile = settings.getString("configuration.header.outputfilename", 'OTAPackage.bin')
    g_cfg_outputfiletypes = settings.getString("configuration.header.outputfiletypes", 'BLE OTA File')
    g_cfg_OTAPath = settings.getString("configuration.header.OTAPath", 'Internal Flash DFU')
    g_cfg_outputEncryption = settings.getString("configuration.header.outputEncryption", 'Encrypted')
    g_zota_manufacture_code = settings.getString("configuration.header.zota_manufacture_code", '0xFFFF')
    g_zota_image_type = settings.getString("configuration.header.zota_image_type", '0xFFFF')
    g_zota_file_version = settings.getString("configuration.header.zota_file_version", '0x00000000')
    g_zota_zigbee_stack_version = settings.getString("configuration.header.zota_zigbee_stack_version", '0x0002')
    g_zota_header_string = settings.getString("configuration.header.zota_header_string", 'MCHP')
    g_zota_security_credential_version = settings.getString("configuration.header.zota_security_credential_version", '0x00')
    g_zota_security_credential_version_check = False
    security_credential_version_check = settings.getString("configuration.header.zota_security_credential_version_check", 'False')
    if ('True' in security_credential_version_check):
        g_zota_security_credential_version_check = True
    g_zota_upgrade_file_destination = settings.getString("configuration.header.zota_upgrade_file_destination", '0x0000000000000000')
    g_zota_upgrade_file_destination_check = False
    upgrade_file_destination_check = settings.getString("configuration.header.zota_upgrade_file_destination_check", 'False')
    if ('True' in upgrade_file_destination_check):
        g_zota_upgrade_file_destination_check = True
    g_zota_minimum_hardware_version = settings.getString("configuration.header.zota_minimum_hardware_version", '0x0000')
    g_zota_maximum_hardware_version = settings.getString("configuration.header.zota_maximum_hardware_version", '0x0000')
    g_zota_hardware_version_check = False
    hardware_version_check = settings.getString("configuration.header.zota_hardware_version_check", 'False')
    if ('True' in hardware_version_check ):
        g_zota_hardware_version_check = True
    if (g_device_family==0):
        g_bota_flash_img_id = settings.getString("configuration.header.bota_flash_img_id", '0x9B000000')
    else:
        g_bota_flash_img_id = settings.getString("configuration.header.bota_flash_img_id", '0x9E000000')
    

def write_header_config_file():
    global bsOpt
    
    settings.setString("configuration.header.flash_type", bsOpt.flashTypeList.getSelectedItem())
    data = bsOpt.seqTxt.getText()
    data = data[:10]
    if (g_device_family == 0):
        manu = bsOpt.manuTxt.getText()
        manu = manu[:4]
        bsOpt.manuTxt.setText(manu)
        settings.setString("configuration.header.manu", manu)
    settings.setString("configuration.header.sequence", data)
    settings.setString("configuration.header.auth", bsOpt.AuthMethodList.getSelectedItem())
    settings.setString("configuration.header.fw_rev", bsOpt.FWRevTxt.getText())
    settings.setString("configuration.header.key_file", bsOpt.PrivateKeyTxt.getText())
    settings.setString("configuration.header.ecdsa_mthd", bsOpt.ECDSAMethodList.getSelectedItem())
    settings.setString("configuration.header.ss_role", bsOpt.SSRoleTxt.getText())
    settings.setString("configuration.header.ss_key_name", bsOpt.SSKeyNameTxt.getText())
    settings.setString("configuration.header.ss_key_version", bsOpt.SSKeyVerTxt.getText())

def write_ota_config_file():
    global zotaOpt
    settings.setString("configuration.header.outputfilename", zotaOpt.OutputFileTxt.getText())
    settings.setString("configuration.header.outputfiletypes", zotaOpt.OutputFileTypesList.getSelectedItem())
    settings.setString("configuration.header.OTAPath", zotaOpt.OTAPathList.getSelectedItem())
    settings.setString("configuration.header.outputEncryption", zotaOpt.OutputEncryptionList.getSelectedItem())
    settings.setString("configuration.header.zota_manufacture_code", zotaOpt.manuCodeTxt.getText())
    settings.setString("configuration.header.zota_image_type", zotaOpt.imageTypeTxt.getText())
    settings.setString("configuration.header.zota_file_version", zotaOpt.fileVersionTxt.getText())
    settings.setString("configuration.header.zota_zigbee_stack_version", zotaOpt.zigbeeStackVersionTxt.getText())
    settings.setString("configuration.header.zota_header_string", zotaOpt.headerStringTxt.getText())
    if zotaOpt.security_credential_version_checkbox.isSelected():
        settings.setString("configuration.header.zota_security_credential_version", zotaOpt.securityCredentialVersionTxt.getText())
    settings.setString("configuration.header.zota_security_credential_version_check", str(zotaOpt.security_credential_version_checkbox.isSelected()))
    if zotaOpt.upgrade_file_destination_checkbox.isSelected():
        settings.setString("configuration.header.zota_upgrade_file_destination", zotaOpt.upgradeFileDestinationTxt.getText())
    settings.setString("configuration.header.zota_upgrade_file_destination_check", str(zotaOpt.upgrade_file_destination_checkbox.isSelected()))
    if zotaOpt.hardware_version_checkbox.isSelected():  
        settings.setString("configuration.header.zota_minimum_hardware_version", zotaOpt.minimumHardwareVersionTxt.getText())
        settings.setString("configuration.header.zota_maximum_hardware_version", zotaOpt.maximumHardwareVersionTxt.getText())
    settings.setString("configuration.header.zota_hardware_version_check", str(zotaOpt.hardware_version_checkbox.isSelected()))
    settings.setString("configuration.header.aes_key", zotaOpt.AESKeyTxt.getText())
    settings.setString("configuration.header.iv", zotaOpt.IVTxt.getText())    
    settings.setString("configuration.header.bota_flash_img_id", zotaOpt.flashImgIDTxt.getText())

    
def AbsolutePath(absolutePath, absoluteTarget):
    absoluteDir = absolutePath.split('\\')
    targetDir = absoluteTarget.split('\\')
    targetIndex = len(absoluteDir)
    index = 0
    while index < len(absoluteDir):
        if targetDir[index] == "..":
            targetIndex -= 1
        else:
            break
        index += 1
            
    if targetIndex < 0:
        return None
    
    targetPath = ""
    for index in range(targetIndex):
        targetPath += str(absoluteDir[index]) + "\\"
        
    for index in range(len(targetDir)):
        if targetDir[index] != "..":
            targetPath += str(targetDir[index]) + "\\"
    
    targetPath = targetPath[:len(targetPath)-1]
    return targetPath
    
def RelativePath(absolutePath, relativeTarget):
    absoluteDir = absolutePath.split('\\')
    relativeDir = relativeTarget.split('\\')

    length = len(relativeDir)
    if len(absoluteDir) < length:
        length = len(absoluteDir)
        
    CommonDirIndex = 0xffff
    for index in range(length):
        if absoluteDir[index] == relativeDir[index]:
            CommonDirIndex = index
        else:
            break

    if (CommonDirIndex == 0xffff):
        return None

    relativePath = ""
    index = CommonDirIndex + 1
    while index < len(absoluteDir):
        if (len(absoluteDir[index]) > 0):
            relativePath += str("..\\")
        index += 1

    index = CommonDirIndex + 1
    while index < len(relativeDir) - 1:
        relativePath += (str(relativeDir[index]) + "\\")
        index += 1
    relativePath += str(relativeDir[len(relativeDir) - 1])

    return relativePath


def get_crc16(crc_buf):
    crc = 0xFFFF
    x = 0
    for index in range(len(crc_buf)):
        x = crc >> 8 ^ crc_buf[index]
        x ^= x>>4
        crc = (crc<<8)^(x<<12)^(x<<5)^x
	crc &= 0xFFFF
    return crc

class HeaderPane():
    def __init__(self):
        self.panel = JPanel()
        self.panel.setLayout(BorderLayout())
        self.pane = JPanel()
        self.initUI()

    def initUI(self):
        global g_cfg_seq 
        global g_cfg_manu
        global g_cfg_auth
        global g_cfg_fw_rev
        global g_ecdsa_mthd
        global g_aes_key
        global g_iv
        global g_private_key_file
        global g_private_key_file_absolute
        global gframe
        global g_alreadyLogin
        global g_ss_option
        
        header_copyright()
		
        gframe = JFrame("Help Info")
        gframe.setLocation(100,100)
        gframe.setSize(400,300)
        gframe.setLocationRelativeTo(None)
        gframe.setLayout(BorderLayout())
        
        layout = GroupLayout(self.pane)
        self.pane.setLayout(layout)
        layout.setAutoCreateGaps(True)
        layout.setAutoCreateContainerGaps(True)

        read_config_file()
        proj_path = ide.expandProjectMacrosEx("${ProjectName}", g_confName, "${ProjectDir}", False)
        
        g_ecdsa_mthd = 'Local Key'
        if(g_device_family == 0):
            if( g1_auth_mthd==2) and 'SecureSign' in g_ecdsa_mthd:
                g_alreadyLogin = ss_check_log_in(proj_path)
        else:
            if( g1_auth_mthd>0) and 'SecureSign' in g_ecdsa_mthd:
                g_alreadyLogin = ss_check_log_in(proj_path)

        if path.exists(proj_path+"\\securesign.exe") and path.exists(proj_path+"\\internal_autoload.py"):
            g_ss_option = 1
        else:
            g_ss_option = 0
        
        infoImg = ImageIcon(proj_path + "\\info-10.png")
            
        flashTypeLabel = JLabel("Flash Type:")
        flashTypeLabel.setHorizontalTextPosition(JLabel.LEADING)
        flashTypeLabel.setIcon(infoImg)
        flashTypeLabel.addMouseListener(flashTypeMouseListener())
        self.flashType_items = ("boot flash", "eflash")
        self.flashTypeList = JComboBox(self.flashType_items)
        self.flashTypeList.setSelectedIndex(global_flash_type)
        self.flashTypeList.addItemListener(self.flashTypeListListener)
        
        seqLabel = JLabel("MD_SEQ_NUM:")
        seqLabel.setHorizontalTextPosition(JLabel.LEADING)
        seqLabel.setIcon(infoImg)
        seqLabel.addMouseListener(seqMouseListener())
        Hexformat1 = MaskFormatter('0xHHHHHHHH')
        Hexformat1.setValidCharacters('0123456789abcdefABCDEF-h')
        self.seqTxt = JFormattedTextField(Hexformat1)
        self.seqTxt.setText(g_cfg_seq)
        
        if( g_device_family == 0):
            manuLabel = JLabel("Manufacture ID:")
            manuLabel.setHorizontalTextPosition(JLabel.LEADING)
            manuLabel.setIcon(infoImg)
            manuLabel.addMouseListener(manuMouseListener())
            self.manuTxt = JTextField()
            self.manuTxt.setText(g_cfg_manu)
            
        AuthMethodLabel = JLabel("AUTH_MTHD:")
        AuthMethodLabel.setHorizontalTextPosition(JLabel.LEADING)
        AuthMethodLabel.setIcon(infoImg)
        AuthMethodLabel.addMouseListener(AuthMethodMouseListener())
        if g_device_family != 0:
            self.AuthMethod_items = ("None", "ECDSA p256+SHA256", "ECDSA p384+SHA384")
        else:
            self.AuthMethod_items = ("None", "SHA256", "ECDSA256-SHA256")
        self.AuthMethodList = JComboBox(self.AuthMethod_items)
        self.AuthMethodList.setSelectedItem(g_cfg_auth)
        self.AuthMethodList.addItemListener(self.AuthMethodListListener)

        FWRevLabel = JLabel("FW_IMG_REV:")
        FWRevLabel.setHorizontalTextPosition(JLabel.LEADING)
        FWRevLabel.setIcon(infoImg)
        FWRevLabel.addMouseListener(FWRevMouseListener())
        self.FWRevTxt = JTextField()
        self.FWRevTxt.setText(g_cfg_fw_rev)
        
        self.ECDSAMethodLabel = JLabel("Auth Key Source:")
        self.ECDSAMethodLabel.setHorizontalTextPosition(JLabel.LEADING)
        self.ECDSAMethodLabel.setIcon(infoImg)            
        self.ECDSAMethodLabel.addMouseListener(ECDSAMthdMouseListener())
        self.ECDSAMethod_items = ("Local Key", "SecureSign")
        self.ECDSAMethodList = JComboBox(self.ECDSAMethod_items)
        self.ECDSAMethodList.setSelectedItem(g_ecdsa_mthd)
        self.ECDSAMethodList.addItemListener(self.ECDSAMethodListListener)
        if g_ss_option==1 and (((g1_auth_mthd>0)and(g_device_family>0)) or ((g1_auth_mthd==2)and(g_device_family==0))):
            self.ECDSAMethodLabel.setVisible(True)
            self.ECDSAMethodList.setVisible(True)
        else:
            self.ECDSAMethodLabel.setVisible(False)
            self.ECDSAMethodList.setVisible(False)
            
        self.PrivateKeyLabel = JLabel("Private Key File:")
        self.PrivateKeyLabel.setHorizontalTextPosition(JLabel.LEADING)
        self.PrivateKeyLabel.setIcon(infoImg)
        self.PrivateKeyLabel.addMouseListener(PrivateKeyMouseListener())
        self.PrivateKeyTxt = JTextField()
        self.PrivateKeyTxt.setText(g_private_key_file)
        self.PrivateKeyBut = JButton('Select Key File',actionPerformed=self.selectkeyfile)
        bDisplay = True
        if g_device_family == 0:
            if (g1_auth_mthd==2) and 'Local' in g_ecdsa_mthd:
                bDisplay = True
            else:
                bDisplay = False
        else:
            if( 'None' in g_cfg_auth or 'Local' not in g_ecdsa_mthd):
                bDisplay = False
            else:
                bDisplay = True
        self.PrivateKeyLabel.setVisible(bDisplay)
        self.PrivateKeyTxt.setVisible(bDisplay)
        self.PrivateKeyBut.setVisible(bDisplay)

        self.SSRoleLabel = JLabel("SS Role:")
        self.SSRoleLabel.setHorizontalTextPosition(JLabel.LEADING)
        self.SSRoleLabel.setIcon(infoImg)            
        self.SSRoleLabel.addMouseListener(SSRoleMouseListener())
        self.SSRoleTxt = JTextField()
        self.SSRoleTxt.setText(g_ss_role)
        if g_device_family==0:
            if (g_ss_option==1) and (g1_auth_mthd==2) and 'SecureSign' in g_ecdsa_mthd:
                bDisplay = True
            else:
                bDisplay = False
        else:
            if (g_ss_option==1) and (g1_auth_mthd>0) and 'SecureSign' in g_ecdsa_mthd:
                bDisplay = True
            else:
                bDisplay = False
        self.SSRoleLabel.setVisible(bDisplay)
        self.SSRoleTxt.setVisible(bDisplay)
        
        self.SSKeyNameLabel = JLabel("SS Key Name:")
        self.SSKeyNameLabel.setHorizontalTextPosition(JLabel.LEADING)
        self.SSKeyNameLabel.setIcon(infoImg)            
        self.SSKeyNameLabel.addMouseListener(SSKeyNameMouseListener())
        self.SSKeyNameTxt = JTextField()
        self.SSKeyNameTxt.setText(g_ss_key_name)
        if g_device_family == 0:
            if (g_ss_option==1) and (g1_auth_mthd==2) and 'SecureSign' in g_ecdsa_mthd and g_alreadyLogin:
                bDisplay = True
            else:
                bDisplay = False
        else:
            if (g_ss_option==1) and (g1_auth_mthd>0) and 'SecureSign' in g_ecdsa_mthd and g_alreadyLogin:
                bDisplay = True
            else:
                bDisplay = False
        self.SSKeyNameLabel.setVisible(bDisplay)
        self.SSKeyNameTxt.setVisible(bDisplay)
        
        self.SSKeyVerLabel = JLabel("SS Key Version:")
        self.SSKeyVerLabel.setHorizontalTextPosition(JLabel.LEADING)
        self.SSKeyVerLabel.setIcon(infoImg)            
        self.SSKeyVerLabel.addMouseListener(SSKeyVerMouseListener())
        self.SSKeyVerTxt = JTextField()
        self.SSKeyVerTxt.setText(g_ss_key_version)
        if g_device_family == 0:
            if (g_ss_option==1) and (g1_auth_mthd==2) and 'SecureSign' in g_ecdsa_mthd and g_alreadyLogin:
                bDisplay = True
            else:
                bDisplay = False
        else:
            if (g_ss_option==1) and (g1_auth_mthd>0) and 'SecureSign' in g_ecdsa_mthd and g_alreadyLogin:
                bDisplay = True
            else:
                bDisplay = False
        self.SSKeyVerLabel.setVisible(bDisplay) 
        self.SSKeyVerTxt.setVisible(bDisplay)
            
        self.SSLoginBut = JButton('Log into SecureSign', actionPerformed=self.SSLogin)
        if g_device_family == 0:
            if (g_ss_option==1) and g_alreadyLogin==0 and ( g1_auth_mthd==2) and 'SecureSign' in g_ecdsa_mthd:
                self.SSLoginBut.setVisible(True)
            else:
                self.SSLoginBut.setVisible(False)
        else:
            if (g_ss_option==1) and g_alreadyLogin==0 and ( g1_auth_mthd>0 ) and 'SecureSign' in g_ecdsa_mthd:
                self.SSLoginBut.setVisible(True)
            else:
                self.SSLoginBut.setVisible(False)    

        emptyLabel = JLabel(" ")
        
        if g_device_family == 0:
            layout.setHorizontalGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup()
                    .addComponent(seqLabel)
                    .addComponent(manuLabel)
                    .addComponent(AuthMethodLabel)
                    .addComponent(FWRevLabel)
                    .addComponent(self.PrivateKeyLabel)
                    .addComponent(self.ECDSAMethodLabel)
                    .addComponent(self.SSRoleLabel)
                    .addComponent(self.SSKeyNameLabel)
                    .addComponent(self.SSKeyVerLabel)
                    .addComponent(emptyLabel)
                    )
                .addGroup(layout.createParallelGroup()
                    .addComponent(self.seqTxt)
                    .addComponent(self.manuTxt)
                    .addComponent(self.AuthMethodList)
                    .addComponent(self.FWRevTxt)
                    .addComponent(self.PrivateKeyTxt)
                    .addComponent(self.ECDSAMethodList)
                    .addComponent(self.SSRoleTxt)
                    .addComponent(self.SSKeyNameTxt)
                    .addComponent(self.SSKeyVerTxt)
                    .addComponent(self.SSLoginBut)
                    )
                .addGroup(layout.createParallelGroup()
                    .addComponent(self.PrivateKeyBut)
                    )
            )
        
            layout.setVerticalGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup()
                    .addComponent(seqLabel)
                    .addComponent(self.seqTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                )
                .addGroup(layout.createParallelGroup()
                    .addComponent(manuLabel)
                    .addComponent(self.manuTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                )
                .addGroup(layout.createParallelGroup()
                    .addComponent(AuthMethodLabel)
                    .addComponent(self.AuthMethodList, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                )
                .addGroup(layout.createParallelGroup()
                    .addComponent(FWRevLabel)
                    .addComponent(self.FWRevTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                )
                .addGroup(layout.createParallelGroup()
                    .addComponent(self.ECDSAMethodLabel)
                    .addComponent(self.ECDSAMethodList, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                )
                .addGroup(layout.createParallelGroup()
                    .addComponent(self.PrivateKeyLabel)
                    .addComponent(self.PrivateKeyTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                    .addComponent(self.PrivateKeyBut, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                )
                .addGroup(layout.createParallelGroup()
                    .addComponent(self.SSRoleLabel)
                    .addComponent(self.SSRoleTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                ) 
                .addGroup(layout.createParallelGroup()
                    .addComponent(self.SSKeyNameLabel)
                    .addComponent(self.SSKeyNameTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                ) 
                .addGroup(layout.createParallelGroup()
                    .addComponent(self.SSKeyVerLabel)
                    .addComponent(self.SSKeyVerTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                ) 
                .addGroup(layout.createParallelGroup()
                    .addComponent(emptyLabel)
                )
                .addGroup(layout.createParallelGroup()
                    .addComponent(emptyLabel)
                )
                .addGroup(layout.createParallelGroup()
                    .addComponent(self.SSLoginBut, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                )
            )
            
        else:
            layout.setHorizontalGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup()
                    .addComponent(flashTypeLabel)
                    .addComponent(seqLabel)
                    .addComponent(AuthMethodLabel)
                    .addComponent(FWRevLabel)
                    .addComponent(self.PrivateKeyLabel)
                    .addComponent(self.ECDSAMethodLabel)
                    .addComponent(self.SSRoleLabel)
                    .addComponent(self.SSKeyNameLabel)
                    .addComponent(self.SSKeyVerLabel)  
                    .addComponent(emptyLabel)
                    )
                .addGroup(layout.createParallelGroup()
                    .addComponent(self.flashTypeList)  
                    .addComponent(self.seqTxt)
                    .addComponent(self.AuthMethodList)
                    .addComponent(self.FWRevTxt)
                    .addComponent(self.PrivateKeyTxt)
                    .addComponent(self.ECDSAMethodList)
                    .addComponent(self.SSRoleTxt)
                    .addComponent(self.SSKeyNameTxt)
                    .addComponent(self.SSKeyVerTxt)
                    .addComponent(self.SSLoginBut)  
                    )
                .addGroup(layout.createParallelGroup()
                    .addComponent(self.PrivateKeyBut)
                    )
            )

            layout.setVerticalGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup()
                    .addComponent(flashTypeLabel)
                    .addComponent(self.flashTypeList, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                )
                .addGroup(layout.createParallelGroup()
                    .addComponent(seqLabel)
                    .addComponent(self.seqTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                )
                .addGroup(layout.createParallelGroup()
                    .addComponent(AuthMethodLabel)
                    .addComponent(self.AuthMethodList, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                )
                .addGroup(layout.createParallelGroup()
                    .addComponent(FWRevLabel)
                    .addComponent(self.FWRevTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                )
                .addGroup(layout.createParallelGroup()
                    .addComponent(self.ECDSAMethodLabel)
                    .addComponent(self.ECDSAMethodList, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                )            
                .addGroup(layout.createParallelGroup()
                    .addComponent(self.PrivateKeyLabel)
                    .addComponent(self.PrivateKeyTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                    .addComponent(self.PrivateKeyBut, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                )
                .addGroup(layout.createParallelGroup()
                    .addComponent(self.SSRoleLabel)
                    .addComponent(self.SSRoleTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                ) 
                .addGroup(layout.createParallelGroup()
                    .addComponent(self.SSKeyNameLabel)
                    .addComponent(self.SSKeyNameTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                ) 
                .addGroup(layout.createParallelGroup()
                    .addComponent(self.SSKeyVerLabel)
                    .addComponent(self.SSKeyVerTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                )             
                .addGroup(layout.createParallelGroup()
                    .addComponent(emptyLabel)
                )
                .addGroup(layout.createParallelGroup()
                    .addComponent(self.SSLoginBut, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                )            
            )
        self.panel.add(self.pane,BorderLayout.CENTER)

    def getPanel(self):
        return self.panel

    def selectkeyfile(self,event):
        global g_private_key_file
        global g_private_key_file_absolute
 
        proj_dir = ide.expandProjectMacrosEx("${ProjectName}", g_confName, "${ProjectDir}", False)
        
        directory = ide.expandProjectMacrosEx("${ProjectName}", None, "${ProjectDir}", False)
        choseFile = JFileChooser(directory)
        choseFile.setDialogTitle('Select Private Key file for signing the firmware/metadata')
        ret = choseFile.showSaveDialog(self.panel)
        if ret == JFileChooser.APPROVE_OPTION:  
            pkf = choseFile.getSelectedFile().getAbsolutePath()
            g_private_key_file = RelativePath(proj_dir, pkf)
            self.PrivateKeyTxt.setText(g_private_key_file)
            g_private_key_file_absolute = pkf


    def flashTypeListListener(self, event):
        global global_flash_type
        global_flash_type = self.flashTypeList.getSelectedIndex()

    def AuthMethodListListener(self, event):
        selectedItem = self.AuthMethodList.getSelectedItem()
        
        if( 'ECDSA' in selectedItem ):
            if g_ss_option == 1:
                self.ECDSAMethodLabel.setVisible(True)
                self.ECDSAMethodList.setVisible(True)
            if (g_ss_option==0) or 'Local' in self.ECDSAMethodList.getSelectedItem():
                self.PrivateKeyLabel.setVisible(True)
                self.PrivateKeyTxt.setVisible(True)
                self.PrivateKeyBut.setVisible(True)
                
                self.SSRoleLabel.setVisible(False)
                self.SSRoleTxt.setVisible(False)
                self.SSKeyNameLabel.setVisible(False)
                self.SSKeyNameTxt.setVisible(False)
                self.SSKeyVerLabel.setVisible(False)
                self.SSKeyVerTxt.setVisible(False)
                self.SSLoginBut.setVisible(False)
            else:
                self.PrivateKeyLabel.setVisible(False)
                self.PrivateKeyTxt.setVisible(False)
                self.PrivateKeyBut.setVisible(False)
                
                self.SSRoleLabel.setVisible(True)
                self.SSRoleTxt.setVisible(True)
                if g_alreadyLogin == 1:
                    self.SSKeyNameLabel.setVisible(True)
                    self.SSKeyNameTxt.setVisible(True)
                    self.SSKeyVerLabel.setVisible(True)
                    self.SSKeyVerTxt.setVisible(True)
                    self.SSLoginBut.setVisible(False)
                else:
                    self.SSKeyNameLabel.setVisible(False)
                    self.SSKeyNameTxt.setVisible(False)
                    self.SSKeyVerLabel.setVisible(False)
                    self.SSKeyVerTxt.setVisible(False)
                    self.SSLoginBut.setVisible(True)
        else:
            self.ECDSAMethodLabel.setVisible(False)
            self.ECDSAMethodList.setVisible(False)
            self.PrivateKeyLabel.setVisible(False)
            self.PrivateKeyTxt.setVisible(False)
            self.PrivateKeyBut.setVisible(False)
            
            self.SSRoleLabel.setVisible(False)
            self.SSRoleTxt.setVisible(False)
            self.SSKeyNameLabel.setVisible(False)
            self.SSKeyNameTxt.setVisible(False)
            self.SSKeyVerLabel.setVisible(False)
            self.SSKeyVerTxt.setVisible(False)
            self.SSLoginBut.setVisible(False)

    def ECDSAMethodListListener(self, event):
        global g_alreadyLogin
         
        selectedItem = self.ECDSAMethodList.getSelectedItem()
        if (g_ss_option==0) or 'Local' in selectedItem :
            self.PrivateKeyLabel.setVisible(True)
            self.PrivateKeyTxt.setVisible(True)
            self.PrivateKeyBut.setVisible(True)
            self.SSRoleLabel.setVisible(False)
            self.SSRoleTxt.setVisible(False)
            self.SSKeyNameLabel.setVisible(False)
            self.SSKeyNameTxt.setVisible(False)
            self.SSKeyVerLabel.setVisible(False)
            self.SSKeyVerTxt.setVisible(False)
            self.SSLoginBut.setVisible(False)
        else:
            g_alreadyLogin = ss_check_log_in(current_working_dir)
            self.PrivateKeyLabel.setVisible(False)
            self.PrivateKeyTxt.setVisible(False)
            self.PrivateKeyBut.setVisible(False)
            self.SSRoleLabel.setVisible(True)
            self.SSRoleTxt.setVisible(True)
            if g_alreadyLogin == 1:
                self.SSKeyNameLabel.setVisible(True)
                self.SSKeyNameTxt.setVisible(True)
                self.SSKeyVerLabel.setVisible(True)
                self.SSKeyVerTxt.setVisible(True)
                self.SSLoginBut.setVisible(False)
            else:
                self.SSKeyNameLabel.setVisible(False)
                self.SSKeyNameTxt.setVisible(False)
                self.SSKeyVerLabel.setVisible(False)
                self.SSKeyVerTxt.setVisible(False)
                self.SSLoginBut.setVisible(True)
    
    def SSLogin(self, event):
        ret = ss_login(current_working_dir, g_ss_role)
        if ret == 1:
            self.SSLoginBut.setVisible(False)
            self.SSKeyNameLabel.setVisible(True)
            self.SSKeyNameTxt.setVisible(True)
            self.SSKeyVerLabel.setVisible(True)
            self.SSKeyVerTxt.setVisible(True)
        else:
            dialog("Failed to Log into Secure Sign", True)
        

def mplab_configure_Header(confName):
    global bsOpt

    if bsOpt == None:
        bsOpt=HeaderPane()
        g_confName = confName

    return bsOpt.getPanel()


def save_mplab_configure_Header(confName):
    global bsOpt
    if bsOpt == None:
        return
    write_header_config_file()


class flashTypeMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "Flash type is the choice of either boot flash or eflash", 
                              "Flash Type Help", 
                              JOptionPane.INFORMATION_MESSAGE)
                           
class seqMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "Sequence Number in 64bit Hex format, range from 0x00000001 to 0xFFFFFFFE", 
                              "Sequence Number Help", 
                              JOptionPane.INFORMATION_MESSAGE)

class manuMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "Manufacture Identifier up to 4 ASCII characters", 
                              "Manufacture Identifier Help", 
                              JOptionPane.INFORMATION_MESSAGE)
                              
class AuthMethodMouseListener(MouseAdapter):
    def mousePressed(self, event):
        if g_device_family == 0:
            JOptionPane.showMessageDialog(gframe, 
                                  "Authentication Method, choose from None, SHA256 and ECDSA256+SHA256", 
                                  "Authentication Method Help", 
                                  JOptionPane.INFORMATION_MESSAGE)
        else:
            JOptionPane.showMessageDialog(gframe, 
                                  "Authentication Method, choose from None, ECDSA p256+SHA256 and ECDSA p384+SHA384", 
                                  "Authentication Method Help", 
                                  JOptionPane.INFORMATION_MESSAGE)

class FWRevMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "Firmware Revision in the format of x.x.x.x, where x is value in range 0-255", 
                              "Firmware Revision Help", 
                              JOptionPane.INFORMATION_MESSAGE)

class PrivateKeyMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "Choose the Private Key File in PKCS#8 fromat for ECDSA authentication", 
                              "Private Key File Selection Help", 
                              JOptionPane.INFORMATION_MESSAGE)

class ECDSAMthdMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "Select Authentication Key Source: Local Private Key or Sign via SecureSign service", 
                              "Authentication Key Source Help", 
                              JOptionPane.INFORMATION_MESSAGE)

class SSRoleMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe,  
                              "Define the SecureSign Role as string", 
                              "SecureSign Role Help", 
                              JOptionPane.INFORMATION_MESSAGE)
                              
class SSKeyNameMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "Define the SecureSign Key Name as string", 
                              "SecureSign Key Name Help", 
                              JOptionPane.INFORMATION_MESSAGE)
                              
class SSKeyVerMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "Define the SecureSign Key Version as string", 
                              "SecureSign Key Version Help", 
                              JOptionPane.INFORMATION_MESSAGE)

class OTAPane():
    
    def __init__(self):
        self.panel = JPanel()
        self.panel.setLayout(BorderLayout())
        self.pane = JPanel()
        self.initUI()

    def initUI(self):
        global g_zota_file_identifier
        global g_zota_header_version
        global g_zota_header_length
        global g_zota_field_control
        global g_zota_manufacture_code
        global g_zota_image_type
        global g_zota_file_version
        global g_zota_zigbee_stack_version
        global g_zota_header_string
        global g_zota_total_image_size
        global g_zota_security_credential_version
        global g_zota_upgrade_file_destination
        global g_zota_minimum_hardware_version
        global g_zota_maximum_hardware_version
        global g_zota_security_credential_version_check
        global g_zota_upgrade_file_destination_check
        global g_zota_hardware_version_check
        global g_cfg_outputfiletypes
        global g_cfg_outputEncryption
        global g_cfg_OTAPath
        
        ota_copyright()

        layout = GroupLayout(self.pane)
        self.pane.setLayout(layout)
        layout.setAutoCreateGaps(True)
        layout.setAutoCreateContainerGaps(True)

        read_config_file()

        path   = ide.expandProjectMacrosEx("${ProjectName}", g_confName, "${ProjectDir}", False)
        infoImg = ImageIcon(path + "\\info-10.png")

        OutputFileLabel = JLabel("Output File Name:")
        OutputFileLabel.setHorizontalTextPosition(JLabel.LEADING)
        OutputFileLabel.setIcon(infoImg)          
        OutputFileLabel.addMouseListener(OutputFileMouseListener())
        self.OutputFileTxt = JTextField()
        self.OutputFileTxt.setText(g_cfg_outputfile)
        
        OutputTypeLabel = JLabel("Output File Type:")
        OutputTypeLabel.setHorizontalTextPosition(JLabel.LEADING)
        OutputTypeLabel.setIcon(infoImg)         
        OutputTypeLabel.addMouseListener(OutputTypeMouseListener())
        self.OutputFileTypes_items = ("BLE OTA File", "Zigbee OTA File", "Combo OTA File")
        self.OutputFileTypesList = JComboBox(self.OutputFileTypes_items)
        self.OutputFileTypesList.setSelectedItem(g_cfg_outputfiletypes)
        self.OutputFileTypesList.addItemListener(self.OutputFileTypesListListener)        

        self.OTAPathLabel = JLabel("OTA Path:")
        self.OTAPathLabel.setHorizontalTextPosition(JLabel.LEADING)
        self.OTAPathLabel.setIcon(infoImg) 
        self.OTAPathLabel.addMouseListener(OTAPathLabelMouseListener())
        if( g_device_family == 0 ):
            self.OTAPath_items = ("Internal Flash DFU","N/A")
        elif( g_device_family == 3 ):
            self.OTAPath_items = ("Internal Flash DFU", "Pass to Application")
        else:
            self.OTAPath_items = ("Internal Flash DFU", "Pass to Application", "External Flash DFU")
        self.OTAPathList = JComboBox(self.OTAPath_items)
        self.OTAPathList.setSelectedItem(g_cfg_OTAPath)
        self.OTAPathList.addItemListener(self.OTAPathListListener)
        if( "BLE" not in g_cfg_outputfiletypes ):
            self.OTAPathLabel.setVisible(False)
            self.OTAPathList.setVisible(False)
        else:
            self.OTAPathLabel.setVisible(True)
            self.OTAPathList.setVisible(True)

        OutputEncryptionLabel = JLabel("Output File Encryption:")
        OutputEncryptionLabel.setHorizontalTextPosition(JLabel.LEADING)
        OutputEncryptionLabel.setIcon(infoImg)          
        OutputEncryptionLabel.addMouseListener(OutputEncryptionMouseListener())
        self.OutputEncryption_items = ("Unencrypted", "Encrypted")
        self.OutputEncryptionList = JComboBox(self.OutputEncryption_items)
        self.OutputEncryptionList.setSelectedItem(g_cfg_outputEncryption)
        self.OutputEncryptionList.addItemListener(self.OutputEncryptionListListener)

        ota_header = 0
        if( "Zigbee" in g_cfg_outputfiletypes ):
            ota_header = 1
        elif( "Combo" in g_cfg_outputfiletypes ):
            ota_header = 2

        image_encryption = True
        if( "Unencrypted" in g_cfg_outputEncryption):
            image_encryption = False

        Hexformat8 = MaskFormatter('0xHH')
        Hexformat8.setValidCharacters('0123456789abcdefABCDEF-h')
        Hexformat16 = MaskFormatter('0xHHHH')
        Hexformat16.setValidCharacters('0123456789abcdefABCDEF-h')
        Hexformat32 = MaskFormatter('0xHHHHHHHH')
        Hexformat32.setValidCharacters('0123456789abcdefABCDEF-h')
        Hexformat64 = MaskFormatter('0xHHHHHHHHHHHHHHHH')
        Hexformat64.setValidCharacters('0123456789abcdefABCDEF-h')
        Hexformat128 = MaskFormatter('0xHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH')
        Hexformat128.setValidCharacters('0123456789abcdefABCDEF-h')

        self.manu_code_Label = JLabel("Manufacture Code:")
        self.manu_code_Label.setHorizontalTextPosition(JLabel.LEADING)
        self.manu_code_Label.setIcon(infoImg)           
        self.manu_code_Label.addMouseListener(manuCodeMouseListener())
        self.manuCodeTxt = JFormattedTextField(Hexformat16)
        self.manuCodeTxt.setText(g_zota_manufacture_code[2:])
        if ota_header > 0:
            self.manu_code_Label.setVisible(True)
            self.manuCodeTxt.setVisible(True)
        else:
            self.manu_code_Label.setVisible(False)
            self.manuCodeTxt.setVisible(False)

        self.image_type_Label = JLabel("Image Type:")
        self.image_type_Label.setHorizontalTextPosition(JLabel.LEADING)
        self.image_type_Label.setIcon(infoImg)          
        self.image_type_Label.addMouseListener(imageTypeMouseListener())
        self.imageTypeTxt = JFormattedTextField(Hexformat16)
        self.imageTypeTxt.setText(g_zota_image_type)
        if ota_header > 0:
            self.image_type_Label.setVisible(True)
            self.imageTypeTxt.setVisible(True)
        else:
            self.image_type_Label.setVisible(False)
            self.imageTypeTxt.setVisible(False)

        self.file_version_Label = JLabel("File Version:")
        self.file_version_Label.setHorizontalTextPosition(JLabel.LEADING)
        self.file_version_Label.setIcon(infoImg)          
        self.file_version_Label.addMouseListener(fileVersionMouseListener())
        self.fileVersionTxt = JFormattedTextField(Hexformat32)
        self.fileVersionTxt.setText(g_zota_file_version)
        if ota_header > 0:
            self.file_version_Label.setVisible(True)
            self.fileVersionTxt.setVisible(True)
        else:
            self.file_version_Label.setVisible(False)
            self.fileVersionTxt.setVisible(False)

        self.zigbee_stack_version_Label = JLabel("Zigbee Stack Version:")
        self.zigbee_stack_version_Label.setHorizontalTextPosition(JLabel.LEADING)
        self.zigbee_stack_version_Label.setIcon(infoImg)          
        self.zigbee_stack_version_Label.addMouseListener(zigbeeStackVersionMouseListener())
        self.zigbeeStackVersionTxt = JFormattedTextField(Hexformat16)
        self.zigbeeStackVersionTxt.setText(g_zota_zigbee_stack_version)
        if ota_header>0:
            self.zigbee_stack_version_Label.setVisible(True)
            self.zigbeeStackVersionTxt.setVisible(True)
        else:
            self.zigbee_stack_version_Label.setVisible(False)
            self.zigbeeStackVersionTxt.setVisible(False)

        self.header_string_Label = JLabel("Header String:")
        self.header_string_Label.setHorizontalTextPosition(JLabel.LEADING)
        self.header_string_Label.setIcon(infoImg)         
        self.header_string_Label.addMouseListener(headerStringMouseListener())
        self.headerStringTxt = JTextField()
        self.headerStringTxt.setText(str(g_zota_header_string))
        if ota_header>0:
            self.header_string_Label.setVisible(True)
            self.headerStringTxt.setVisible(True)
        else:
            self.header_string_Label.setVisible(False)
            self.headerStringTxt.setVisible(False)

        self.security_credential_version_Label = JLabel("Security Credential Version:")
        self.security_credential_version_Label.setHorizontalTextPosition(JLabel.LEADING)
        self.security_credential_version_Label.setIcon(infoImg)          
        self.security_credential_version_Label.addMouseListener(securityCredentialVersionMouseListener())
        self.securityCredentialVersionTxt = JFormattedTextField(Hexformat8)
        self.securityCredentialVersionTxt.setText(g_zota_security_credential_version)
        self.security_credential_version_checkbox = JCheckBox()
        self.security_credential_version_checkbox.setSelected(g_zota_security_credential_version_check)
        self.security_credential_version_checkbox.addActionListener(self.security_credential_version_listener)
        if ota_header>0:
            self.security_credential_version_Label.setVisible(True)
            self.security_credential_version_checkbox.setVisible(True)
            self.securityCredentialVersionTxt.setVisible(True)
            if g_zota_security_credential_version_check:
                self.securityCredentialVersionTxt.setEnabled(True)
            else:
                self.securityCredentialVersionTxt.setEnabled(False)
        else:
            self.security_credential_version_Label.setVisible(False)
            self.securityCredentialVersionTxt.setVisible(False)
            self.security_credential_version_checkbox.setVisible(False)

        self.upgrade_file_destination_Label = JLabel("Upgrade File Destination:")
        self.upgrade_file_destination_Label.setHorizontalTextPosition(JLabel.LEADING)
        self.upgrade_file_destination_Label.setIcon(infoImg)         
        self.upgrade_file_destination_Label.addMouseListener(upgradeFileDestinationMouseListener())
        self.upgradeFileDestinationTxt = JFormattedTextField(Hexformat64)
        self.upgradeFileDestinationTxt.setText(g_zota_upgrade_file_destination)
        self.upgrade_file_destination_checkbox = JCheckBox()
        self.upgrade_file_destination_checkbox.setSelected(g_zota_upgrade_file_destination_check)
        self.upgrade_file_destination_checkbox.addActionListener(self.upgrade_file_destination_listener)
        if ota_header>0:
            self.upgrade_file_destination_Label.setVisible(True)
            self.upgrade_file_destination_checkbox.setVisible(True)
            self.upgradeFileDestinationTxt.setVisible(True)
            if g_zota_upgrade_file_destination_check:
                self.upgradeFileDestinationTxt.setEnabled(True)
            else:
                self.upgradeFileDestinationTxt.setEnabled(False)
        else:
            self.upgrade_file_destination_Label.setVisible(False)
            self.upgrade_file_destination_checkbox.setVisible(False)
            self.upgradeFileDestinationTxt.setVisible(False)

        self.hardware_version_checkbox = JCheckBox()
        self.hardware_version_checkbox.setSelected(g_zota_hardware_version_check)
        self.hardware_version_checkbox.addActionListener(self.hardware_version_listener)
        if ota_header>0:
            self.hardware_version_checkbox.setVisible(True)
        else:
            self.hardware_version_checkbox.setVisible(False)

        self.min_hardware_version_Label = JLabel("Min Hardware Version:")
        self.min_hardware_version_Label.setHorizontalTextPosition(JLabel.LEADING)
        self.min_hardware_version_Label.setIcon(infoImg)          
        self.min_hardware_version_Label.addMouseListener(minHardwareVersionMouseListener())
        self.minimumHardwareVersionTxt = JFormattedTextField(Hexformat16)
        self.minimumHardwareVersionTxt.setText(g_zota_minimum_hardware_version)
        if g_zota_hardware_version_check:
            self.minimumHardwareVersionTxt.setEnabled(True)
        else:
            self.minimumHardwareVersionTxt.setEnabled(False)
        if ota_header>0:
            self.min_hardware_version_Label.setVisible(True)
            self.minimumHardwareVersionTxt.setVisible(True)
        else:
            self.min_hardware_version_Label.setVisible(False)
            self.minimumHardwareVersionTxt.setVisible(False)

        self.max_hardware_version_Label = JLabel("Max Hardware Version:")
        self.max_hardware_version_Label.setHorizontalTextPosition(JLabel.LEADING)
        self.max_hardware_version_Label.setIcon(infoImg)          
        self.max_hardware_version_Label.addMouseListener(maxHardwareVersionMouseListener())
        self.maximumHardwareVersionTxt = JFormattedTextField(Hexformat16)
        self.maximumHardwareVersionTxt.setText(g_zota_maximum_hardware_version)
        if g_zota_hardware_version_check:
            self.maximumHardwareVersionTxt.setEnabled(True)
        else:
            self.maximumHardwareVersionTxt.setEnabled(False)
        if ota_header>0:
            self.max_hardware_version_Label.setVisible(True)
            self.maximumHardwareVersionTxt.setVisible(True)
        else:
            self.max_hardware_version_Label.setVisible(False)
            self.maximumHardwareVersionTxt.setVisible(False)

        self.flashImgIDLabel = JLabel("Flash Image ID:")
        self.flashImgIDLabel.setHorizontalTextPosition(JLabel.LEADING)
        self.flashImgIDLabel.setIcon(infoImg)   
        self.flashImgIDLabel.addMouseListener(flashImgIDMouseListener())
        self.flashImgIDTxt = JFormattedTextField(Hexformat32)
        self.flashImgIDTxt.setText(g_bota_flash_img_id)
        if ota_header!=1:
            self.flashImgIDLabel.setVisible(True)
            self.flashImgIDTxt.setVisible(True)
        else:
            self.flashImgIDLabel.setVisible(False)
            self.flashImgIDTxt.setVisible(False)

        emptyLabel = JLabel(" ")

        self.AESKeyLabel = JLabel("AES Key:")
        self.AESKeyLabel.setHorizontalTextPosition(JLabel.LEADING)
        self.AESKeyLabel.setIcon(infoImg)  
        self.AESKeyLabel.addMouseListener(AESKeyMouseListener())
        self.AESKeyTxt = JFormattedTextField(Hexformat128)
        g_aes_key_txt = binascii.hexlify(g_aes_key)
        self.AESKeyTxt.setText(g_aes_key_txt.zfill(33))
        if image_encryption:
            self.AESKeyLabel.setVisible(True)
            self.AESKeyTxt.setVisible(True)
        else:
            self.AESKeyLabel.setVisible(False)
            self.AESKeyTxt.setVisible(False)

        self.IVLabel = JLabel("Init Vector:")
        self.IVLabel.setHorizontalTextPosition(JLabel.LEADING)
        self.IVLabel.setIcon(infoImg)  
        self.IVLabel.addMouseListener(IVMouseListener())
        self.IVTxt = JFormattedTextField(Hexformat128)
        g_iv_text = binascii.hexlify(g_iv)
        self.IVTxt.setText(g_iv_text.zfill(33))
        if image_encryption:
            self.IVLabel.setVisible(True)
            self.IVTxt.setVisible(True)
        else:
            self.IVLabel.setVisible(False)
            self.IVTxt.setVisible(False)

        self.CreateFileBut = JButton('Create OTA File', actionPerformed=self.CreateOTAFile)

        layout.setHorizontalGroup(layout.createSequentialGroup()
            .addGroup(layout.createParallelGroup()
                .addComponent(self.manu_code_Label)
                .addComponent(self.image_type_Label)
                .addComponent(self.file_version_Label)
                .addComponent(self.zigbee_stack_version_Label)
                .addComponent(self.header_string_Label)
                .addComponent(self.security_credential_version_Label)
                .addComponent(emptyLabel)
                .addComponent(self.upgrade_file_destination_Label)
                .addComponent(self.min_hardware_version_Label)
                .addComponent(self.max_hardware_version_Label)
                .addComponent(OutputTypeLabel)
                .addComponent(OutputEncryptionLabel)
                .addComponent(self.AESKeyLabel)
                .addComponent(self.IVLabel)
                .addComponent(OutputFileLabel)
                .addComponent(self.flashImgIDLabel)
                .addComponent(self.OTAPathLabel)
                )
            .addGroup(layout.createParallelGroup()
                .addComponent(self.security_credential_version_checkbox)
                .addComponent(self.upgrade_file_destination_checkbox)
                .addComponent(self.hardware_version_checkbox)
                )
            .addGroup(layout.createParallelGroup()
                .addComponent(self.manuCodeTxt)
                .addComponent(self.imageTypeTxt)
                .addComponent(self.fileVersionTxt)
                .addComponent(self.zigbeeStackVersionTxt)
                .addComponent(self.headerStringTxt)
                .addComponent(self.securityCredentialVersionTxt)
                .addComponent(self.upgradeFileDestinationTxt)
                .addComponent(self.minimumHardwareVersionTxt)
                .addComponent(self.maximumHardwareVersionTxt)
                .addComponent(self.OutputFileTypesList)
                .addComponent(self.OutputEncryptionList)
                .addComponent(self.AESKeyTxt)
                .addComponent(self.IVTxt)
                .addComponent(self.OutputFileTxt)
                .addComponent(self.CreateFileBut)
                .addComponent(self.flashImgIDTxt)
                .addComponent(self.OTAPathList)
                )
        )

        layout.setVerticalGroup(layout.createSequentialGroup()
            .addGroup(layout.createParallelGroup()
                .addComponent(OutputFileLabel)
                .addComponent(self.OutputFileTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
            )
            .addGroup(layout.createParallelGroup()
                .addComponent(emptyLabel)
            )
            .addGroup(layout.createParallelGroup()
                .addComponent(OutputEncryptionLabel)
                .addComponent(self.OutputEncryptionList, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
            )
            .addGroup(layout.createParallelGroup()
                .addComponent(self.AESKeyLabel)
                .addComponent(self.AESKeyTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
            )
            .addGroup(layout.createParallelGroup()
                .addComponent(self.IVLabel)
                .addComponent(self.IVTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
            )
            .addGroup(layout.createParallelGroup()
                .addComponent(emptyLabel)
            )
            .addGroup(layout.createParallelGroup()
                .addComponent(OutputTypeLabel)
                .addComponent(self.OutputFileTypesList, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
            )
            .addGroup(layout.createParallelGroup()
                .addComponent(self.OTAPathLabel)
                .addComponent(self.OTAPathList, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
            )
            .addGroup(layout.createParallelGroup()
                .addComponent(self.flashImgIDLabel)
                .addComponent(self.flashImgIDTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
            )
            .addGroup(layout.createParallelGroup()
                .addComponent(self.manu_code_Label)
                .addComponent(self.manuCodeTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
            )
            .addGroup(layout.createParallelGroup()
                .addComponent(self.image_type_Label)
                .addComponent(self.imageTypeTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
            )
            .addGroup(layout.createParallelGroup()
                .addComponent(self.file_version_Label)
                .addComponent(self.fileVersionTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
            )
            .addGroup(layout.createParallelGroup()
                .addComponent(self.zigbee_stack_version_Label)
                .addComponent(self.zigbeeStackVersionTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
            )
            .addGroup(layout.createParallelGroup()
                .addComponent(self.header_string_Label)
                .addComponent(self.headerStringTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
            )
            .addGroup(layout.createParallelGroup()
                .addComponent(self.security_credential_version_Label)
                .addComponent(self.security_credential_version_checkbox, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                .addComponent(self.securityCredentialVersionTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
            )
            .addGroup(layout.createParallelGroup()
                .addComponent(self.upgrade_file_destination_Label)
                .addComponent(self.upgrade_file_destination_checkbox, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                .addComponent(self.upgradeFileDestinationTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
            )
            .addGroup(layout.createParallelGroup()
                .addComponent(self.min_hardware_version_Label)
                .addComponent(self.hardware_version_checkbox, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
                .addComponent(self.minimumHardwareVersionTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
            )
            .addGroup(layout.createParallelGroup()
                .addComponent(self.max_hardware_version_Label)
                .addComponent(self.maximumHardwareVersionTxt, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
            )         
            .addGroup(layout.createParallelGroup()
                .addComponent(emptyLabel)
            )
            .addGroup(layout.createParallelGroup()
                .addComponent(self.CreateFileBut, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE,GroupLayout.PREFERRED_SIZE)
            )
        )
        self.panel.add(self.pane,BorderLayout.CENTER)

    def getPanel(self):
        return self.panel

    def security_credential_version_listener(self, event):
        global g_zota_security_credential_version_check

        g_zota_security_credential_version_check = self.security_credential_version_checkbox.isSelected()
        if( g_zota_security_credential_version_check == True ):
            self.securityCredentialVersionTxt.setEnabled(True)
        else:
            self.securityCredentialVersionTxt.setEnabled(False)

    def upgrade_file_destination_listener(self, event):
        global g_zota_upgrade_file_destination_check

        g_zota_upgrade_file_destination_check = self.upgrade_file_destination_checkbox.isSelected()
        if( g_zota_upgrade_file_destination_check == True ):
            self.upgradeFileDestinationTxt.setEnabled(True)
        else:
            self.upgradeFileDestinationTxt.setEnabled(False)

    def hardware_version_listener(self, event):
        global g_zota_hardware_version_check

        g_zota_hardware_version_check = self.hardware_version_checkbox.isSelected()
        if( g_zota_hardware_version_check == True ):
            self.minimumHardwareVersionTxt.setEnabled(True)
            self.maximumHardwareVersionTxt.setEnabled(True)
        else:
            self.minimumHardwareVersionTxt.setEnabled(False)
            self.maximumHardwareVersionTxt.setEnabled(False)
    
    def OutputFileTypesListListener(self, event):
        selectedItem = self.OutputFileTypesList.getSelectedItem()
        if( 'BLE' in selectedItem or 'Combo' in selectedItem ):
            self.flashImgIDLabel.setVisible(True)
            self.flashImgIDTxt.setVisible(True)
        else:
            self.flashImgIDLabel.setVisible(False)
            self.flashImgIDTxt.setVisible(False)
        
        if( "BLE" not in selectedItem ):
            self.OTAPathLabel.setVisible(False)
            self.OTAPathList.setVisible(False)
        else:
            self.OTAPathLabel.setVisible(True)
            self.OTAPathList.setVisible(True)
            
        if( 'Zigbee' in selectedItem or 'Combo' in selectedItem ):
            self.manu_code_Label.setVisible(True)
            self.manuCodeTxt.setVisible(True)
            self.image_type_Label.setVisible(True)
            self.imageTypeTxt.setVisible(True)
            self.file_version_Label.setVisible(True)
            self.fileVersionTxt.setVisible(True)
            self.zigbee_stack_version_Label.setVisible(True)
            self.zigbeeStackVersionTxt.setVisible(True)
            self.header_string_Label.setVisible(True)
            self.headerStringTxt.setVisible(True)
            self.security_credential_version_Label.setVisible(True)
            self.securityCredentialVersionTxt.setVisible(True)
            if( g_zota_security_credential_version_check ):
                self.securityCredentialVersionTxt.setEnabled(True)
            else:
                self.securityCredentialVersionTxt.setEnabled(False)
            self.security_credential_version_checkbox.setVisible(True)
            self.upgrade_file_destination_Label.setVisible(True)
            self.upgradeFileDestinationTxt.setVisible(True)
            if( g_zota_upgrade_file_destination_check ):
                self.upgradeFileDestinationTxt.setEnabled(True)
            else:
                self.upgradeFileDestinationTxt.setEnabled(False)
            self.upgrade_file_destination_checkbox.setVisible(True)
            self.hardware_version_checkbox.setVisible(True)
            self.min_hardware_version_Label.setVisible(True)
            self.max_hardware_version_Label.setVisible(True)
            self.minimumHardwareVersionTxt.setVisible(True)
            self.maximumHardwareVersionTxt.setVisible(True)
            if (g_zota_hardware_version_check ):
                self.minimumHardwareVersionTxt.setEnabled(True)
                self.maximumHardwareVersionTxt.setEnabled(True)
            else:
                self.minimumHardwareVersionTxt.setEnabled(False)
                self.maximumHardwareVersionTxt.setEnabled(False)
        else:
            self.manu_code_Label.setVisible(False)
            self.manuCodeTxt.setVisible(False)
            self.image_type_Label.setVisible(False)
            self.imageTypeTxt.setVisible(False)
            self.file_version_Label.setVisible(False)
            self.fileVersionTxt.setVisible(False)
            self.zigbee_stack_version_Label.setVisible(False)
            self.zigbeeStackVersionTxt.setVisible(False)
            self.header_string_Label.setVisible(False)
            self.headerStringTxt.setVisible(False)
            self.security_credential_version_Label.setVisible(False)
            self.security_credential_version_checkbox.setVisible(False)
            self.securityCredentialVersionTxt.setVisible(False)
            self.upgrade_file_destination_Label.setVisible(False)
            self.upgradeFileDestinationTxt.setVisible(False)
            self.upgrade_file_destination_checkbox.setVisible(False)
            self.hardware_version_checkbox.setVisible(False)
            self.min_hardware_version_Label.setVisible(False)
            self.minimumHardwareVersionTxt.setVisible(False)
            self.max_hardware_version_Label.setVisible(False)
            self.maximumHardwareVersionTxt.setVisible(False)

    def OTAPathListListener(self, event):
        global g_cfg_OTAPath
        g_cfg_OTAPath = self.OTAPathList.getSelectedItem()
        if( g_cfg_OTAPath == 'N/A' ):
            g_cfg_OTAPath = 'Internal Flash DFU'
        
    def OutputEncryptionListListener(self, event):
        selectedItem = self.OutputEncryptionList.getSelectedItem()
        if( 'Unencrypted' in selectedItem ):
            self.AESKeyLabel.setVisible(False)
            self.AESKeyTxt.setVisible(False)
            self.IVLabel.setVisible(False)
            self.IVTxt.setVisible(False)
        else:
            self.AESKeyLabel.setVisible(True)
            self.AESKeyTxt.setVisible(True)
            self.IVLabel.setVisible(True)
            self.IVTxt.setVisible(True)

    def CreateOTAFile(self, event):
        global bsOpt
        global g1_md_signature_size
        global g1_md_auth_mthd
        global g4_fw_img_len
        global g1_auth_mthd
        global g_signed_fw_file
        global g_metaheader
        global g_img_bytes
        global g_project_fw_file
        global g_cfg_outputfile
        global g_cfg_outputfiletypes
        global g_cfg_outputEncryption
        global g_zota_header
        global g_zota_total_image_size
        global g_confName
        global g_aes_key
        global g_iv
        global g96_fw_img_signature
        global g96_md_signature
        global g_img_src_addr
        global g1_fw_img_dec_mthd
        global g_bota_header
        global g_bota_encryption
        global g_bota_file_type
        global g_bota_checksum
        global g_private_key_file_absolute
        global g_bota_crc16
        global g_exthdr_chksum
        global g4_seq_num
        
        write_ota_config_file()
        read_config_file()
        memory_addr_set()
        
        ecdsa_mthd = 0
        if (ia_found == 1) and ('Local' not in g_ecdsa_mthd):
            ecdsa_mthd = 1

        exe_file_prod   = ide.expandProjectMacrosEx("${ProjectName}", g_confName, "${ProjectDir}/${ImagePath}", False)
        if( False == path.exists(exe_file_prod) ):
            dialog("Hex file " + exe_file_prod + " not found", True)
            return 1
        if( len(g_cfg_outputfile.strip()) == 0 ):
            dialog("Output file name not set", True)
            return 1

        fw_dec_mthd = 1
        if( 'Unencrypted' in g_cfg_outputEncryption ):
            fw_dec_mthd = 0

        ih = IntelHex(exe_file_prod)
        cropped_end_address = get_end_address_cropped(ih, global_crop_start_address, global_crop_end_address)
        ih.padding = 0xFF
        g4_fw_img_len = cropped_end_address - global_crop_start_address + 1
        fw = ih.tobinarray(start = global_crop_start_address, size = g4_fw_img_len)
        bin_bytes = bytearray(fw)

        if g_device_family == 1:
            pad_len = g4_fw_img_len % 4096
            if pad_len > 0:
                pad_len = 4096 - pad_len
                g4_fw_img_len += pad_len
        else:
            pad_len = g4_fw_img_len % 16
            if pad_len > 0:
                pad_len = 16 - pad_len
                g4_fw_img_len += pad_len
        if pad_len > 0:
            pad_bytes = bytearray(b'\xFF')*pad_len
            bin_bytes.extend(pad_bytes)

        g1_fw_img_signature_size = 0
        g96_fw_img_signature[0:96] = bytearray(b'\x00') * 96
        g96_md_signature[0:96] = bytearray(b'\x00') * 96

        if( g1_auth_mthd > 2 ):
            dialog("Invalid Authentication Method", True)
            return 1

        if( g1_auth_mthd == 1):
            if g_device_family == 0:
                hash = shabytes(bin_bytes)
                g1_fw_img_signature_size = len(hash)
                g96_fw_img_signature[0:g1_fw_img_signature_size] = hash
                
                g1_md_signature_size = 0
                g96_md_signature[0:96] = bytearray(b'\x00') * 96
                fill_header()
                hash = shabytes(g_metaheader[20:])
                g1_md_signature_size = len(hash)
                g96_md_signature[0:g1_md_signature_size] = hash
            else:
                if ecdsa_mthd == 0:
                    if False == path.exists(g_private_key_file_absolute):
                        dialog("Private key file " + g_private_key_file_absolute + " not found", True)
                        return 1

                    prk_file = g_private_key_file_absolute
                    pr = utils.readPrivateKey("EC", prk_file) 

                    key_bytes = pr.getEncoded()
                    if len(key_bytes) != 138:
                        dialog("Incorrect format of private key file " + prk_file, True)
                        return 1

                    sign = bytearray(b'\x00') * 72
                    sign = utils.computeSignatureFromHash(bin_bytes,  "SHA256withECDSA", pr, None)
                else:
                    print('OTA SecureSign Firmware Signing P256')
                    sign = ss_sign_bytes(current_working_dir, bin_bytes, g_ss_role, g_ss_key_name, g_ss_key_version) 
                    if sign == None:
                        dialog("Failed in SecureSign service", True)
                        return 1

                reformat = reformat_signature(sign, 32)
                for i in range(64):
                    g96_fw_img_signature[i] = reformat[i]

                tmp_src = g_img_src_addr
                g_img_src_addr = 0
                fill_header()
                if g_device_family == 1:
                    file_bytes = g_metaheader[16:132]
                elif g_device_family == 2:
                    file_bytes = g_metaheader[40:156]
                elif g_device_family == 3:
                    file_bytes = g_metaheader[72:188]

                g_img_src_addr = tmp_src

                sign = bytearray(b'\x00') * 72

                if ecdsa_mthd == 0:
                    sign = utils.computeSignatureFromHash(file_bytes,  "SHA256withECDSA", pr, None)
                else:
                    print('OTA SecureSign Header Signing P256')
                    sign = ss_sign_bytes(current_working_dir, bin_bytes, g_ss_role, g_ss_key_name, g_ss_key_version) 
                    if sign == None:
                        dialog("Failed in SecureSign service", True)
                        return 1

                reformat = reformat_signature(sign, 32)
                for i in range(64):
                    g96_md_signature[i] = reformat[i]

        if( g1_auth_mthd == 2):
            if g_device_family == 0:
                if ecdsa_mthd == 0:
                    if False == path.exists(g_private_key_file_absolute):
                        dialog("Private key file " + g_private_key_file_absolute + " not found", True)
                        return 1

                    sign = signbytes(bin_bytes)
                else: 
                    print('OTA SecureSign Firmware Signing')
                    sign = ss_sign_bytes(current_working_dir, bin_bytes, g_ss_role, g_ss_key_name, g_ss_key_version) 
                    if sign == None:
                        dialog("Failed in SecureSign service", True)
                        return 1
                g1_fw_img_signature_size = len(sign)
                g96_fw_img_signature[0:g1_fw_img_signature_size] = sign
                
                g1_md_signature_size = 0
                g96_md_signature[0:72] = bytearray(b'\x00') * 96
                fill_header()
                
                if ecdsa_mthd == 0:
                    if False == path.exists(g_private_key_file_absolute):
                        dialog("Private key file " + g_private_key_file_absolute + " not found", True)
                        return
                    sign = signbytes(g_metaheader[20:])
                else:
                    print('OTA SecureSign Metaheader Signing')
                    sign = ss_sign_bytes(current_working_dir, g_metaheader[20:], g_ss_role, g_ss_key_name, g_ss_key_version) 
                    if sign == None:
                        dialog("Failed in SecureSign service2", True)
                        return 1

                g1_md_signature_size = len(sign)
                g96_md_signature[0:g1_md_signature_size] = sign
            else:
                if ecdsa_mthd == 0:
                    if False == path.exists(g_private_key_file_absolute):
                        dialog("Private key file " + g_private_key_file_absolute + " not found", True)
                        return 1
                    prk_file = g_private_key_file_absolute
                    pr = utils.readPrivateKey("EC", prk_file) 
                    key_bytes = pr.getEncoded()
                    if len(key_bytes) != 185:
                        dialog("Incorrect format of private key file " + prk_file, True)
                        return 1

                    sign = bytearray(b'\x00') * 104
                    sign = utils.computeSignatureFromHash(bin_bytes,  "SHA384withECDSA", pr, None)
                else:
                    print('OTA SecureSign Firmware Signing P384')
                    sign = ss_sign_bytes(current_working_dir, bin_bytes, g_ss_role, g_ss_key_name, g_ss_key_version) 
                    if sign == None:
                        dialog("Failed in SecureSign service", True)
                        return 1   

                reformat = reformat_signature(sign, 48)
                for i in range(96):
                    g96_fw_img_signature[i] = reformat[i]

                tmp_src = g_img_src_addr
                g_img_src_addr = 0
                fill_header()
                if g_device_family == 1:
                    file_bytes = g_metaheader[16:132]
                elif g_device_family == 2:
                    file_bytes = g_metaheader[40:156]
                elif g_device_family == 3:
                    file_bytes = g_metaheader[72:188]
                g_img_src_addr = tmp_src

                sign = bytearray(b'\x00') * 104
                if ecdsa_mthd == 0:
                    sign = utils.computeSignatureFromHash(file_bytes,  "SHA384withECDSA", pr, None)
                else:
                    print('OTA SecureSign Header Signing P384')
                    sign = ss_sign_bytes(current_working_dir, file_bytes, g_ss_role, g_ss_key_name, g_ss_key_version) 
                    if sign == None:
                        dialog("Failed in SecureSign service", True)
                        return 1   

                reformat = reformat_signature(sign, 48)
                for i in range(96):
                    g96_md_signature[i] = reformat[i]

        fill_header()
        project_root_path   = ide.expandProjectMacrosEx("${ProjectName}", g_confName, "${ProjectDir}", False)
        with open(project_root_path+"\\"+g_cfg_outputfile, "wb") as fb:
            g_bota_checksum = 0
            bota_checksum = 0

            tmp_src = g_img_src_addr
            g_img_src_addr = 0
            fill_header()
            if g_device_family == 0:
                crc_buf = g_metaheader[28:]
            elif g_device_family == 1:
                crc_buf = g_metaheader[16:]
            elif g_device_family == 2:
                crc_buf = g_metaheader[40:]
            elif g_device_family == 3:
                crc_buf = g_metaheader[72:]
            g_img_src_addr = tmp_src
            fill_header()
            crc_buf.extend(bin_bytes)
            g_bota_crc16 = get_crc16(crc_buf)
            
            if( "BLE" not in g_cfg_outputfiletypes ):
                g_bota_file_type = 3
            else:
                if( "Internal" in g_cfg_OTAPath ):
                    g_bota_file_type = 1
                elif( "External" in g_cfg_OTAPath ):
                    g_bota_file_type = 3
                else:
                    g_bota_file_type = 2

            if( g_bota_file_type == 3 ):
                g_exthdr_chksum = 0
                if( fw_dec_mthd == 0 ):
                    g_bota_encryption = 0
                else:
                    g_bota_encryption = 1
                tmp_seq = g4_seq_num
                g4_seq_num = 0
                fill_ext_flash_header()
                for i in range(len(g_extflash_header)):
                    g_exthdr_chksum += g_extflash_header[i]
                g4_seq_num = 0xFFFFFFFF
                fill_ext_flash_header()
                g4_seq_num = tmp_seq
                for i in range(len(g_extflash_header)):
                    bota_checksum += g_extflash_header[i]
                
            if( (fw_dec_mthd == 0) or (g_bota_file_type == 3) ):
                g_bota_encryption = 0
            else:
                g_bota_encryption = 1

            if( fw_dec_mthd == 0 ):
                for i in range(len(bin_bytes)):
                    bota_checksum += bin_bytes[i]
                for i in range(512):
                    bota_checksum += g_metaheader[i]
                if( 'Combo' in g_cfg_outputfiletypes ):
                    g_zota_total_image_size = g4_fw_img_len + 512
                    if fill_zota_header() != 0:
                        fb.close()
                        return
                    for i in range(len(g_zota_header)):
                        bota_checksum += g_zota_header[i]
                    g_bota_checksum = 0xFFFF - (bota_checksum&0x0000FFFF) + 1
                    if fill_bota_header() != 0:
                        fb.close()
                        return
                    fb.write(g_bota_header)
                    fb.write(g_zota_header)

                elif( 'Zigbee' in g_cfg_outputfiletypes ):
                    g_zota_total_image_size = g4_fw_img_len + 512 
                    if fill_zota_header() != 0:
                        fb.close()
                        return
                    fb.write(g_zota_header)

                elif( 'BLE' in g_cfg_outputfiletypes ):
                    g_bota_checksum = 0xFFFF - (bota_checksum&0x0000FFFF) + 1
                    if fill_bota_header() != 0:
                        fb.close()
                        return
                    fb.write(g_bota_header)

                if( g_bota_file_type == 3 ):
                    fb.write(g_extflash_header)
                fb.write(g_metaheader)
                fb.write(bin_bytes)
            else:   # encryption enabled
                tobeEncrypt = bytearray(g_metaheader)
                tobeEncrypt.extend(bin_bytes)
                plain = bytearray(tobeEncrypt)

                plain_list = list(plain)
                iv_list = list(g_iv)
                key_list = list(g_aes_key)

                plain = from_unsigned_list_to_signed(plain_list)
                iv = from_unsigned_list_to_signed(iv_list)
                key = from_unsigned_list_to_signed(key_list)

                ivSpec = IvParameterSpec(iv)
                skeySpec = SecretKeySpec(key, "AES");
                cipher = Cipher.getInstance("AES/CBC/PKCS5Padding")
                cipher.init(Cipher.ENCRYPT_MODE, skeySpec, ivSpec);
                encrypted = cipher.doFinal(plain);

                encrypted_unsigned = from_signed_list_to_unsigned(encrypted)
                encrypted_bin = bytearray(encrypted_unsigned)

                for i in range(len(encrypted_bin)):
                    bota_checksum += encrypted_bin[i]

                if( 'Combo' in g_cfg_outputfiletypes ):
                    g_zota_total_image_size = len(encrypted_bin)
                    if fill_zota_header() != 0:
                        fb.close()
                        return
                    for i in range(len(g_zota_header)):
                        bota_checksum += g_zota_header[i]
                    g_bota_checksum = 0xFFFF - (bota_checksum&0x0000FFFF) + 1
                    if fill_bota_header() != 0:
                        fb.close()
                        return
                    fb.write(g_bota_header)
                    fb.write(g_zota_header)

                elif( 'Zigbee' in g_cfg_outputfiletypes ):
                    g_zota_total_image_size = len(encrypted_bin)
                    if fill_zota_header() != 0:
                        fb.close()
                        return
                    fb.write(g_zota_header)

                elif( 'BLE' in g_cfg_outputfiletypes ):
                    g_bota_checksum = 0xFFFF - (bota_checksum&0x0000FFFF) + 1
                    if fill_bota_header() != 0:
                        fb.close()
                        return
                    fb.write(g_bota_header)

                if( g_bota_file_type == 3 ):
                    fb.write(g_extflash_header)
                fb.write(encrypted_bin)
                
            fb.flush()
            fb.close()

        dialog("OTA image file " + g_cfg_outputfile + " was Created Successfully!", False)
        return

def mplab_configure_OTA(confName):
    global zotaOpt

    if zotaOpt == None:
        zotaOpt=OTAPane()
        g_confName = confName

    return zotaOpt.getPanel()

def save_mplab_configure_OTA(confName):
    global zotaOpt

    if zotaOpt == None:
        return

    write_ota_config_file()
    read_config_file()
    return

class OutputFileMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "Choose Output File Name for the OTA package in binary format", 
                              "Output File Name Help", 
                              JOptionPane.INFORMATION_MESSAGE)
                              
                                
class OutputTypeMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "Choose Output File Type, choose among BLE, Zigbee or Combo OTA operation", 
                              "Output File Type Help", 
                              JOptionPane.INFORMATION_MESSAGE)

class OTAPathLabelMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "Choose OTA path, choose among Internal Flash DFU, Pass to Application or External Flash DFU", 
                              "OTA Path Help", 
                              JOptionPane.INFORMATION_MESSAGE)

class OutputEncryptionMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "Choose whether to Encrypt the OTA package", 
                              "Output File Encryption Help", 
                              JOptionPane.INFORMATION_MESSAGE)

class manuCodeMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "Zigbee 16-bit manufacturer identifier used to match supported devices. Defaults to 0xFFFF (match all).", 
                              "Manufacture Code Help", 
                              JOptionPane.INFORMATION_MESSAGE)

class imageTypeMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "Zigbee 16-bit image type. Defaults to 0xFFFF (match all)", 
                              "Image Type Help", 
                              JOptionPane.INFORMATION_MESSAGE)

class fileVersionMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "Zigbee 32-bit integer representing the file version. Can be in the recommended format (8-bit app release, 8-bit app build, 8 bit stack release, 8-bit stack build), simple increasing version, or an unsupported version format. If in an unsupported version format the OTA Cluster will not be able to compare file versions. Defaults to 0x0000.", 
                              "File Version Help", 
                              JOptionPane.INFORMATION_MESSAGE)

class zigbeeStackVersionMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "Zigbee 16-bit identifier of the zigbee stack version. Defaults to 0x02 for ZigBee Pro.", 
                              "Zigbee Stack Version Help", 
                              JOptionPane.INFORMATION_MESSAGE)

class headerStringMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "Zigbee 32-byte string used by each manufacturer as they see fit but recommended to be human readable.", 
                              "Header String Help", 
                              JOptionPane.INFORMATION_MESSAGE)

class securityCredentialVersionMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "Zigbee Optional 8-bit identifier of the Security Credential Version. Defaults to not included.", 
                              "Security Credential Version Help", 
                              JOptionPane.INFORMATION_MESSAGE)

class upgradeFileDestinationMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "Zigbee Optional 64-bit extended address of the device to which this image is specific. Defaults to not include, image is available to all devices.", 
                              "Upgrade File Destination Help", 
                              JOptionPane.INFORMATION_MESSAGE)

class minHardwareVersionMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "Zigbee Optional 0/16-bit integer representing the earliest hardware platorm this image can be used on.", 
                              "Minimum Hardware Version Help", 
                              JOptionPane.INFORMATION_MESSAGE)

class maxHardwareVersionMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "Zigbee Optional 16-bit integer representing the latest hardware platorm this image can be used on.", 
                              "Maximum Hardware Version Help", 
                              JOptionPane.INFORMATION_MESSAGE)                              

class flashImgIDMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "BLE 32bit Identification Number for App layer to confirm the new Flash Image is acceptable", 
                              "Flash Image ID Help", 
                              JOptionPane.INFORMATION_MESSAGE)   

class AESKeyMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "128bit AES key to encrypt the OTA pacakge with AES-CBC-128", 
                              "AES Key Help", 
                              JOptionPane.INFORMATION_MESSAGE)    

class IVMouseListener(MouseAdapter):
    def mousePressed(self, event):
        JOptionPane.showMessageDialog(gframe, 
                              "128bit Initial Vector to encrypt the OTA pacakge with AES-CBC-128", 
                              "Initial Vector Help", 
                              JOptionPane.INFORMATION_MESSAGE)  

def dialog(e, error):
    frame = JFrame("End of Build")
    frame.setLocation(100,100)
    frame.setSize(400,300)
    frame.setLayout(BorderLayout())

    if (error == True):
        JOptionPane.showMessageDialog(frame,e, "Error", JOptionPane.ERROR_MESSAGE)
    else:
        JOptionPane.showMessageDialog(frame,e)

def fill_bota_header():
    global g_bota_header_ver
    global g_bota_encryption
    global g_bota_checksum
    global g_bota_file_type
    global g_bota_crc16
    global g4_fw_img_rev
    global g_bota_header

    g_bota_header = bytearray(b'\x00')*32

    g_bota_header[0:1] = bytearray(struct.pack("<B", g_bota_header_ver))
    g_bota_header[1:2] = bytearray(struct.pack("<B", g_bota_encryption))
    g_bota_header[2:4] = bytearray(struct.pack("<H", g_bota_checksum))
    flash_img_id = 0
    text = (g_bota_flash_img_id[:10]).strip()
    if len(text) == 10 :
        flash_img_id = int(text, 16)
    else:
        dialog("Flash Image ID NOT Set Correctly", True)
        return 1
    g_bota_header[4:8] = bytearray(struct.pack("<L", flash_img_id))
    g_bota_header[8:12] = g4_fw_img_rev
    g_bota_header[12:13] = bytearray(struct.pack("<B", g_bota_file_type))
    g_bota_header[14:16] = bytearray(struct.pack("<H", g_bota_crc16))
    g_bota_header[16:20] = bytearray(struct.pack("<4s", 'MCHP'))
    return 0

def fill_zota_header():
    global g_zota_file_identifier
    global g_zota_header_version
    global g_zota_header_length
    global g_zota_field_control
    global g_zota_manufacture_code
    global g_zota_image_type
    global g_zota_file_version
    global g_zota_zigbee_stack_version
    global g_zota_header_string
    global g_zota_total_image_size
    global g_zota_security_credential_version
    global g_zota_upgrade_file_destination
    global g_zota_minimum_hardware_version
    global g_zota_maximum_hardware_version
    global g_zota_security_credential_version_check
    global g_zota_upgrade_file_destination_check
    global g_zota_hardware_version_check
    global g_zota_header

    g_zota_field_control = 0
    g_zota_header_length = 56
    if g_zota_security_credential_version_check:
        text = (g_zota_security_credential_version[:4]).strip()
        security_credential_version = 0
        if len(text) == 4:
            g_zota_field_control |= 0x01
            g_zota_header_length += 1
            security_credential_version = int(text, 16)
        else:
            dialog("Security Credential Version NOT Set Correctly", True)
            return 1

    if g_zota_upgrade_file_destination_check:
        upgrade_file_destination = bytearray(b'\x00')*8
        text = (g_zota_upgrade_file_destination[:18]).strip()
        if len(text) == 18:
            g_zota_field_control |= 0x02
            g_zota_header_length += 8
            upgrade_file_destination = bytearray.fromhex(text[2:])
        else:
            dialog("Upgrade File Destination Not Set Correctly", True)
            return 1

    if g_zota_hardware_version_check:
        minimum_hardware_version = 0
        maximum_hardware_version = 0
        text = (g_zota_minimum_hardware_version[:6]).strip()
        text2 = (g_zota_maximum_hardware_version[:6]).strip()
        if ((len(text)==6) and (len(text2)==6)):
            g_zota_field_control |= 0x04
            g_zota_header_length += 4
            minimum_hardware_version = int(text, 16)
            maximum_hardware_version = int(text2, 16)
        else:
            dialog("Hardware Versions Not Set Correctly", True)
            return 1

    g_zota_header[0:4] = bytearray(struct.pack("<L", g_zota_file_identifier))
    text = (g_zota_header_version[:6]).strip()
    data = int(text, 16)
    g_zota_header[4:6] = bytearray(struct.pack("<H", data))
    g_zota_header[6:8] = bytearray(struct.pack("<H", g_zota_header_length))
    g_zota_header[8:10] = bytearray(struct.pack("<H", g_zota_field_control))
    text = (g_zota_manufacture_code[:6]).strip()
    data = int(text, 16)
    g_zota_header[10:12] = bytearray(struct.pack("<H", data))
    text = (g_zota_image_type[:6]).strip()
    data = int(text, 16)
    g_zota_header[12:14] = bytearray(struct.pack("<H", data))
    text = (g_zota_file_version[:10]).strip()
    data = int(text, 16)
    g_zota_header[14:18] = bytearray(struct.pack("<L", data))
    text = (g_zota_zigbee_stack_version[:6]).strip()
    data = int(text, 16)
    g_zota_header[18:20] = bytearray(struct.pack("<H", data))
    text = g_zota_header_string.strip()
    g_zota_header[20:52] = bytearray(b'\x00')*32
    g_zota_header[20:52] = bytearray(struct.pack("<32s", text))
    g_zota_header[52:56] = bytearray(struct.pack("<L", (g_zota_total_image_size+g_zota_header_length+16)))
    header_index = 56
    if( (g_zota_field_control & 0x01) > 0 ):
        g_zota_header[header_index:(header_index+1)] = bytearray(struct.pack("<B", security_credential_version))
        header_index += 1
    if( (g_zota_field_control & 0x02) > 0 ):
        g_zota_header[header_index:(header_index+8)] = upgrade_file_destination
        header_index += 8
    if( (g_zota_field_control & 0x04) > 0 ):
        g_zota_header[header_index:(header_index+2)] = bytearray(struct.pack("<H", minimum_hardware_version))
        g_zota_header[(header_index+2):(header_index+4)] = bytearray(struct.pack("<H", maximum_hardware_version))
        header_index += 4

    g_zota_header = g_zota_header[:header_index]
    return 0


def fill_ext_flash_header():
    global g_extflash_header
    
    g_extflash_header[0:4] = bytearray(struct.pack("<4s", 'MCHP'))
    g_extflash_header[4:5] = bytearray(struct.pack("<B", g_exthdr_rev))
    g_extflash_header[5:6] = bytearray(struct.pack("<B", g_bota_encryption))
    g_extflash_header[6:7] = bytearray(struct.pack("<B", g_exthdr_dec_key))
    reserved=0
    g_extflash_header[7:8] = bytearray(struct.pack("<B", reserved))
    g_extflash_header[8:12] = bytearray(struct.pack("<L", g4_seq_num))
    g_extflash_header[12:14] = bytearray(struct.pack("<H", g_bota_crc16))
    g_extflash_header[14:16] = bytearray(struct.pack("<H", g_exthdr_chksum))
    
    
def fill_header():
    global g_device_family
    
    if g_device_family == 0: 
        fill_chimera_header()
    elif g_device_family == 1:
        fill_buckland_a0_header()
    elif g_device_family == 2:
        fill_buckland_a1_header()
    elif g_device_family == 3:
        fill_bigbuck_header()
        

def fill_chimera_header():
    global g_metaheader
    global g_filler1
    global g_filler2
    global g_filler3
    global g4_identifier
    global g4_seq_num
    global g1_md_rev
    global g1_cont_idx
    global g1_auth_mthd
    global g1_auth_key
    global gl_dec_mthd
    global gl_dec_key
    global g2_len
    global g4_fw_img_rev
    global g4_fw_img_len
    global g1_fw_img_dec_mthd
    global g1_fw_img_dec_key
    global g1_fw_img_signature_size
    global g96_fw_img_signature
    global g1_md_signature_size
    global g96_md_signature

    g_metaheader[0:4] = bytearray(struct.pack("<L", g4_filler1))
    g_metaheader[4:8] = bytearray(struct.pack("<L", g4_filler2))
    g_metaheader[8:12] = bytearray(struct.pack("4s", g4_identifier))
    g_metaheader[12:16] = bytearray(struct.pack("<L", g4_filler3))
    g_metaheader[16:20] = bytearray(struct.pack("<L", g4_seq_num))
    g_metaheader[20:21] = bytearray(struct.pack("B", g1_md_rev))
    g_metaheader[21:22] = bytearray(struct.pack("B", g1_cont_idx))
    g_metaheader[22:23] = bytearray(struct.pack("B", g1_auth_mthd))
    g_metaheader[23:24] = bytearray(struct.pack("B", g1_auth_key))
    g_metaheader[24:25] = bytearray(struct.pack("B", gl_dec_mthd))
    g_metaheader[25:26] = bytearray(struct.pack("B", gl_dec_key))
    g_metaheader[26:28] = bytearray(struct.pack("<H", g2_len))
    g_metaheader[28:32] = g4_fw_img_rev
    g_metaheader[32:36] = bytearray(struct.pack("<L", g4_fw_img_len))
    g_metaheader[36:37] = bytearray(struct.pack("B", g1_auth_mthd))
    g_metaheader[37:38] = bytearray(struct.pack("B", g1_auth_key))
    g_metaheader[38:39] = bytearray(struct.pack("B", g1_fw_img_dec_mthd))
    g_metaheader[39:40] = bytearray(struct.pack("B", g1_fw_img_dec_key))
    g_metaheader[40:41] = bytearray(struct.pack("B", g1_fw_img_signature_size))
    g_metaheader[41:113] = g96_fw_img_signature[0:72]
    filler_326 = bytearray(b'\x00')*326
    g_metaheader[113:439] = filler_326
    g_metaheader[439:440] = bytearray(struct.pack("B", g1_md_signature_size))
    g_metaheader[440:512] = g96_md_signature[0:72]
    #g_metaheader = g_metaheader[0:512]

    
def fill_buckland_a0_header():
    global g_metaheader
    global g_filler1
    global g_filler2
    global g_filler3
    global g4_identifier
    global g4_seq_num
    global g1_md_rev
    global g1_cont_idx
    global g1_auth_mthd
    global g1_auth_key
    global gl_dec_mthd
    global gl_dec_key
    global g2_len
    global g4_fw_img_rev
    global g4_fw_img_len
    global g1_fw_img_dec_mthd
    global g1_fw_img_dec_key
    global g96_fw_img_signature
    global g96_md_signature
    global g_img_src_addr
    global g_img_dst_addr
    
    g_metaheader[0:4] = bytearray(struct.pack("<L", g4_seq_num))
    g_metaheader[4:5] = bytearray(struct.pack("B", g1_md_rev))
    g_metaheader[5:6] = bytearray(struct.pack("B", g1_cont_idx))
    g_metaheader[6:10] = bytearray(struct.pack("<4s", g4_identifier))
    if( g1_auth_mthd == 0 ):
        g_metaheader[10:11] = bytearray(struct.pack("B", g1_auth_mthd))
    else:
        g_metaheader[10:11] = bytearray(struct.pack("B", (g1_auth_mthd+1)))
    g_metaheader[11:12] = bytearray(struct.pack("B", g1_auth_key))
    g_metaheader[12:13] = bytearray(struct.pack("B", gl_dec_mthd))
    g_metaheader[13:14] = bytearray(struct.pack("B", gl_dec_key))
    g_metaheader[14:16] = bytearray(struct.pack("<H", g2_len))
    g_metaheader[16:20] = g4_fw_img_rev
    g_metaheader[20:24] = bytearray(struct.pack("<L", g_img_src_addr))
    g_metaheader[24:28] = bytearray(struct.pack("<L", g_img_dst_addr))
    g_metaheader[28:32] = bytearray(struct.pack("<L", g4_fw_img_len))
    if( g1_auth_mthd == 0 ):
        g_metaheader[32:33] = bytearray(struct.pack("B", g1_auth_mthd))
    else:
        g_metaheader[32:33] = bytearray(struct.pack("B", (g1_auth_mthd+1)))
    g_metaheader[33:34] = bytearray(struct.pack("B", g1_auth_key))
    g_metaheader[34:35] = bytearray(struct.pack("B", g1_fw_img_dec_mthd))
    g_metaheader[35:36] = bytearray(struct.pack("B", g1_fw_img_dec_key))
    g_metaheader[36:132] = g96_fw_img_signature
    g_metaheader[132:228] = g96_md_signature
    filler_284 = bytearray(b'\x00')*284
    g_metaheader[228:512] = filler_284
    
def fill_buckland_a1_header():
    global g_metaheader
    global g4_filler1
    global g4_filler2
    global g4_filler3
    global g4_identifier
    global g4_seq_num
    global g1_md_rev
    global g1_cont_idx
    global g1_auth_mthd
    global g1_auth_key
    global gl_dec_mthd
    global gl_dec_key
    global g2_len
    global g4_fw_img_rev
    global g4_fw_img_len
    global g1_fw_img_dec_mthd
    global g1_fw_img_dec_key
    global g96_fw_img_signature
    global g96_md_signature
    global g_img_src_addr
    global g_img_dst_addr

    g_metaheader[0:4] = bytearray(struct.pack("<L", g4_filler1))
    g_metaheader[4:8] = bytearray(struct.pack("<L", g4_filler1))
    g_metaheader[8:12] = bytearray(struct.pack("4s", g4_identifier))
    g_metaheader[12:16] = bytearray(struct.pack("<L", g4_filler2))
    if( g4_seq_num == 0xFFFFFFFF ):
        ff_filler = 0xFFFFFFFF
        g_metaheader[16:20] = bytearray(struct.pack("<L", ff_filler))
        g_metaheader[20:24] = bytearray(struct.pack("<L", ff_filler))
        g_metaheader[24:28] = bytearray(struct.pack("<L", ff_filler))
    else:
        g_metaheader[16:20] = bytearray(struct.pack("<L", g4_filler2))
        g_metaheader[20:24] = bytearray(struct.pack("<L", g4_filler2))
        g_metaheader[24:28] = bytearray(struct.pack("<L", g4_filler2))
    g_metaheader[28:32] = bytearray(struct.pack("<L", g4_seq_num))
    g_metaheader[32:33] = bytearray(struct.pack("B", g1_md_rev))
    g_metaheader[33:34] = bytearray(struct.pack("B", g1_cont_idx))
    if( g1_auth_mthd == 0 ):
        g_metaheader[34:35] = bytearray(struct.pack("B", g1_auth_mthd))
    else:
        g_metaheader[34:35] = bytearray(struct.pack("B", (g1_auth_mthd+1)))
    g_metaheader[35:36] = bytearray(struct.pack("B", g1_auth_key))
    g_metaheader[36:37] = bytearray(struct.pack("B", gl_dec_mthd))
    g_metaheader[37:38] = bytearray(struct.pack("B", gl_dec_key))
    g_metaheader[38:40] = bytearray(struct.pack("<H", g2_len))
    g_metaheader[40:44] = g4_fw_img_rev
    g_metaheader[44:48] = bytearray(struct.pack("<L", g_img_src_addr))
    g_metaheader[48:52] = bytearray(struct.pack("<L", g_img_dst_addr))
    g_metaheader[52:56] = bytearray(struct.pack("<L", g4_fw_img_len))
    if( g1_auth_mthd == 0 ):
        g_metaheader[56:57] = bytearray(struct.pack("B", g1_auth_mthd))
    else:
        g_metaheader[56:57] = bytearray(struct.pack("B", (g1_auth_mthd+1)))
    g_metaheader[57:58] = bytearray(struct.pack("B", g1_auth_key))
    g_metaheader[58:59] = bytearray(struct.pack("B", g1_fw_img_dec_mthd))
    g_metaheader[59:60] = bytearray(struct.pack("B", g1_fw_img_dec_key))
    g_metaheader[60:156] = g96_fw_img_signature
    g_metaheader[156:252] = g96_md_signature
    filler_260 = bytearray(b'\x00')*260
    g_metaheader[252:512] = filler_260    
    
def fill_bigbuck_header():
    global g_metaheader
    global g4_filler1
    global g4_filler2
    global g4_filler3
    global g4_identifier
    global g4_seq_num
    global g1_md_rev
    global g1_cont_idx
    global g1_auth_mthd
    global g1_auth_key
    global gl_dec_mthd
    global gl_dec_key
    global g2_len
    global g4_fw_img_rev
    global g4_fw_img_len
    global g1_fw_img_dec_mthd
    global g1_fw_img_dec_key
    global g96_fw_img_signature
    global g228_filler
    global g96_md_signature
    global g_img_src_addr
    global g_img_dst_addr

    g_metaheader[0:4] = bytearray(struct.pack("<L", g4_filler1))
    g_metaheader[4:8] = bytearray(struct.pack("<L", g4_filler1))
    g_metaheader[8:12] = bytearray(struct.pack("<L", g4_filler1))
    g_metaheader[12:16] = bytearray(struct.pack("<L", g4_filler1))
    g_metaheader[16:20] = bytearray(struct.pack("<L", g4_filler1))
    g_metaheader[20:24] = bytearray(struct.pack("<L", g4_filler1))
    g_metaheader[24:28] = bytearray(struct.pack("4s", g4_identifier))
    g_metaheader[28:32] = bytearray(struct.pack("<L", g4_filler2))
    if(g4_seq_num == 0xFFFFFFFF):
        ff_filler = 0xFFFFFFFF
        g_metaheader[32:36] = bytearray(struct.pack("<L", ff_filler))
        g_metaheader[36:40] = bytearray(struct.pack("<L", ff_filler))
        g_metaheader[40:44] = bytearray(struct.pack("<L", ff_filler))
        g_metaheader[44:48] = bytearray(struct.pack("<L", ff_filler))
        g_metaheader[48:52] = bytearray(struct.pack("<L", ff_filler))
        g_metaheader[52:56] = bytearray(struct.pack("<L", ff_filler))
        g_metaheader[56:60] = bytearray(struct.pack("<L", ff_filler))
    else:
        g_metaheader[32:36] = bytearray(struct.pack("<L", g4_filler2))
        g_metaheader[36:40] = bytearray(struct.pack("<L", g4_filler2))
        g_metaheader[40:44] = bytearray(struct.pack("<L", g4_filler2))
        g_metaheader[44:48] = bytearray(struct.pack("<L", g4_filler2))
        g_metaheader[48:52] = bytearray(struct.pack("<L", g4_filler2))
        g_metaheader[52:56] = bytearray(struct.pack("<L", g4_filler2))
        g_metaheader[56:60] = bytearray(struct.pack("<L", g4_filler2))
    g_metaheader[60:64] = bytearray(struct.pack("<L", g4_seq_num))
    g_metaheader[64:65] = bytearray(struct.pack("B", g1_md_rev))
    g_metaheader[65:66] = bytearray(struct.pack("B", g1_cont_idx))
    if( g1_auth_mthd == 0 ):
        g_metaheader[66:67] = bytearray(struct.pack("B", g1_auth_mthd))
    else:
        g_metaheader[66:67] = bytearray(struct.pack("B", (g1_auth_mthd+1)))
    g_metaheader[67:68] = bytearray(struct.pack("B", g1_auth_key))
    g_metaheader[68:69] = bytearray(struct.pack("B", gl_dec_mthd))
    g_metaheader[69:70] = bytearray(struct.pack("B", gl_dec_key))
    g_metaheader[70:72] = bytearray(struct.pack("<H", g2_len))
    g_metaheader[72:76] = g4_fw_img_rev
    g_metaheader[76:80] = bytearray(struct.pack("<L", g_img_src_addr))
    g_metaheader[80:84] = bytearray(struct.pack("<L", g_img_dst_addr))
    g_metaheader[84:88] = bytearray(struct.pack("<L", g4_fw_img_len))
    if( g1_auth_mthd == 0 ):
        g_metaheader[88:89] = bytearray(struct.pack("B", g1_auth_mthd))
    else:
        g_metaheader[88:89] = bytearray(struct.pack("B", (g1_auth_mthd+1)))
    g_metaheader[89:90] = bytearray(struct.pack("B", g1_auth_key))
    g_metaheader[90:91] = bytearray(struct.pack("B", g1_fw_img_dec_mthd))
    g_metaheader[91:92] = bytearray(struct.pack("B", g1_fw_img_dec_key))
    g_metaheader[92:188] = g96_fw_img_signature
    g_metaheader[188:284] = g96_md_signature
    g_metaheader[284:512] = g228_filler

def get_file_bytes(file):
    with open(file, "rb") as fb:
        exe_content = bytearray(fb.read())
    fb.close()
    return exe_content 


def shafile(file):
    global g4_fw_img_len
    
    file_bytes = get_file_bytes(file)
    file_bytes = file_bytes[:g4_fw_img_len]
    engine = hashlib.sha256()
    engine.update(bytes(file_bytes))
    data_hash = engine.digest()
    return data_hash
    
    
def signbytes(data_bytes):
    global g_private_key_file_absolute

    prk_file = g_private_key_file_absolute
    pr = utils.readPrivateKey("EC", prk_file) 
    sign2 = bytearray(b'\x00') * 72
    sign2 = utils.computeSignatureFromHash(data_bytes,  "SHA256withECDSA", pr, None)
    return sign2


def shabytes(data_bytes):
    engine = hashlib.sha256()
    engine.update(bytes(data_bytes))
    data_hash = engine.digest()
    return data_hash


def get_end_address_cropped(ih, crop_start_address, crop_end_address):
    max_address = ih.maxaddr()
    if max_address > crop_end_address:
        max_address = crop_end_address
    size = max_address - crop_start_address
    size = size + 1
    padlen = 16 - (size % 16)
    if padlen == 16:
        return crop_start_address + size
    else:
        return crop_start_address + size + padlen

def reformat_signature(sign, sig_sz):
    reformat = bytearray(b'\x00') * (sig_sz * 2)
    idx = 4
    if( (sign[idx] == 0) and (sign[idx+1] > 0x7F) ):
        idx = 5

    for i in range(sig_sz):
        reformat[i] = sign[idx+i]

    idx += sig_sz
    if( sign[idx] != 0x02 ):
        print 'wrong format'
        print str(sign[idx]) + ' ' + str(idx)
        return None

    idx += 2
    if( (sign[idx] == 0) and (sign[idx+1] > 0x7F) ):
        idx += 1
    for i in range(sig_sz):
        reformat[sig_sz+i] = sign[idx+i]

    return reformat

def on_pre_program():
    global bsOpt
    global g96_md_signature
    global g1_auth_mthd
    global g96_fw_img_signature
    global g4_fw_img_len
    global g_signed_fw_file
    global g_metaheader
    global g_private_key_file
    global g96_md_signature
    global g_img_src_addr
    global g_private_key_file_absolute
    global g1_fw_img_signature_size
    global g1_md_signature_size
    
    read_config_file()

    ecdsa_mthd = 0
    if (ia_found == 1) and ('Local' not in g_ecdsa_mthd):
        ecdsa_mthd = 1
        if ss_check_log_in(current_working_dir) == 0:
            dialog("Hasn't Logged into SecureSign", True)
            return 1
        print("SecureSign Logged In")

    memory_addr_set()    
    code_buffer = bytearray(global_crop_end_address - global_crop_start_address)
    mem_type = None 

    mem.ReadBlock(mem_type, global_crop_start_address, 0, len(code_buffer), code_buffer )
    memblocks = mem.GetUsedAreas(mem_type, global_crop_start_address, global_crop_end_address)

    mblock = memblocks[0]
    g4_fw_img_len = (mblock[1]-mblock[0]+1)

    if g_device_family == 1:
        padlen = 4096 - (g4_fw_img_len % 4096)
        if padlen < 4096:
            g4_fw_img_len += padlen
    elif g_device_family > 1:
        padlen = 16 - (g4_fw_img_len % 16)
        if padlen < 16:
            g4_fw_img_len += padlen
            
    img_bytes = code_buffer[:g4_fw_img_len]

    g1_fw_img_signature_size = 0
    g96_fw_img_signature[0:96] = bytearray(b'\x00') * 96
    g96_md_signature[0:96] = bytearray(b'\x00') * 96

    if( g1_auth_mthd == 0):
        fill_header()
        mem.WriteBlock(mem_type, global_header_start_address, 0, len(g_metaheader), g_metaheader)
        return 0

    if( g1_auth_mthd == 1):
        if g_device_family == 0:
            hash = shabytes(img_bytes)
            g1_fw_img_signature_size = len(hash)
            g96_fw_img_signature[0:g1_fw_img_signature_size] = hash
            g1_md_signature_size = 0
            g96_md_signature[0:72] = bytearray(b'\x00') * 72
            fill_header()
            hash = shabytes(g_metaheader[20:])
            g1_md_signature_size = len(hash)
            g96_md_signature[0:g1_md_signature_size] = hash
            fill_header()
            
        else:
            img_bytes = code_buffer[:g4_fw_img_len]
            sign = bytearray(b'\x00') * 72

            if ecdsa_mthd == 0:
                prk_file = g_private_key_file_absolute
                pr = utils.readPrivateKey("EC", prk_file) 
                key_bytes = pr.getEncoded()
                if len(key_bytes) != 138:
                    dialog("Incorrect format of P256r1 private key file " + prk_file, True)
                    return 1

                sign = utils.computeSignatureFromHash(img_bytes,  "SHA256withECDSA", pr, None)
            else:
                print('Preprogram SecureSign Firmware Signing P256')
                sign = ss_sign_bytes(current_working_dir, img_bytes, g_ss_role, g_ss_key_name, g_ss_key_version) 
                if sign == None:
                    dialog("Failed in SecureSign service", True)
                    return 1

            reformat = reformat_signature(sign, 32)
            for i in range(64):
                g96_fw_img_signature[i] = reformat[i]

            tmp_src = g_img_src_addr
            g_img_src_addr = 0
            fill_header()

            if g_device_family == 1:
                file_bytes = g_metaheader[16:132]
            elif g_device_family == 2:
                file_bytes = g_metaheader[40:156]
            elif g_device_family == 3:
                file_bytes = g_metaheader[72:188]
            g_img_src_addr = tmp_src

            sign = bytearray(b'\x00') * 72
            if ecdsa_mthd == 0:
                sign = utils.computeSignatureFromHash(file_bytes,  "SHA256withECDSA", pr, None)
            else:
                print('Preprogram SecureSign Header Signing P256')
                sign = ss_sign_bytes(current_working_dir, file_bytes, g_ss_role, g_ss_key_name, g_ss_key_version) 
                if sign == None:
                    dialog("Failed in SecureSign service", True)
                    return 1

            reformat = reformat_signature(sign, 32)
            for i in range(64):
                g96_md_signature[i] = reformat[i]

            fill_header()

        mem.WriteBlock(mem_type, global_header_start_address, 0, len(g_metaheader), g_metaheader)
        print("Preprogram Metadata Created")
        return 0

    if( g1_auth_mthd == 2):
        if g_device_family == 0:
            if ecdsa_mthd == 0:
                if False == path.exists(g_private_key_file_absolute):
                    dialog("Private key file " + g_private_key_file_absolute + " not found", True)
                    return 1

                sign = signbytes(img_bytes)
            else: 
                print('Preprogram SecureSign Firmware Signing')
                sign = ss_sign_bytes(current_working_dir, img_bytes, g_ss_role, g_ss_key_name, g_ss_key_version) 
                if sign == None:
                    dialog("Failed in SecureSign service", True)
                    return 1

            g1_fw_img_signature_size = len(sign)
            g96_fw_img_signature[0:g1_fw_img_signature_size] = sign
            
            g1_md_signature_size = 0
            g96_md_signature[0:72] = bytearray(b'\x00') * 72
            fill_header()
    
            if ecdsa_mthd == 0:
                if False == path.exists(g_private_key_file_absolute):
                    dialog("Private key file " + g_private_key_file_absolute + " not found", True)
                    return
                sign = signbytes(g_metaheader[20:])
            else:
                print('Preprogram SecureSign Metaheader Signing')
                sign = ss_sign_bytes(current_working_dir, g_metaheader[20:], g_ss_role, g_ss_key_name, g_ss_key_version) 
                if sign == None:
                    dialog("Failed in SecureSign service2", True)
                    return 1
            g1_md_signature_size = len(sign)
            g96_md_signature[0:g1_md_signature_size] = sign
            fill_header()
            
        else:
            img_bytes = code_buffer[:g4_fw_img_len]
            sign = bytearray(b'\x00') * 104

            if ecdsa_mthd == 0:
                prk_file = g_private_key_file_absolute
                pr = utils.readPrivateKey("EC", prk_file) 
                key_bytes = pr.getEncoded()
                if len(key_bytes) != 185:
                    dialog("Incorrect format of P384r1 private key file " + prk_file, True)
                    return 1

                sign = utils.computeSignatureFromHash(img_bytes,  "SHA384withECDSA", pr, None) 
            else:
                print('Preprogram SecureSign Firmware Signing P384')
                sign = ss_sign_bytes(current_working_dir, img_bytes, g_ss_role, g_ss_key_name, g_ss_key_version) 
                if sign == None:
                    dialog("Failed in SecureSign service", True)
                    return 1

            reformat = reformat_signature(sign, 48)
            for i in range(96):
                g96_fw_img_signature[i] = reformat[i]

            tmp_src = g_img_src_addr
            g_img_src_addr = 0
            fill_header()
            if g_device_family == 1:
                file_bytes = g_metaheader[16:132]
            elif g_device_family == 2:
                file_bytes = g_metaheader[40:156]
            elif g_device_family == 3:
                file_bytes = g_metaheader[72:188]
            g_img_src_addr = tmp_src

            sign = bytearray(b'\x00') * 104

            if ecdsa_mthd == 0:
                sign = utils.computeSignatureFromHash(file_bytes,  "SHA384withECDSA", pr, None)
            else:
                print('Preprogram SecureSign Header Signing P384')
                sign = ss_sign_bytes(current_working_dir, file_bytes, g_ss_role, g_ss_key_name, g_ss_key_version) 
                if sign == None:
                    dialog("Failed in SecureSign service", True)
                    return 1

            reformat = reformat_signature(sign, 48)
            for i in range(96):
                g96_md_signature[i] = reformat[i]

            fill_header()
            
        mem.WriteBlock(mem_type, global_header_start_address, 0, len(g_metaheader), g_metaheader)
        print("Preprogram Metadata Created")
        return 0
    return 1

def on_project_load_done(confName): 
    global g96_md_signature
    global g1_auth_mthd
    global g96_fw_img_signature
    global g4_fw_img_len
    global g_signed_fw_file
    global g_metaheader
    global g_private_key_file
    global g96_md_signature
    global g_img_src_addr
    global g_img_bytes
    global g_private_key_file_absolute
    global g1_fw_img_signature_size
    global g1_md_signature_size
    
    if( is_debug_build ):
        exe_file_debug  = ide.expandProjectMacrosEx("${ProjectName}", confName, "${ProjectDir}/${ImagePath}", True)
        g_project_fw_file = exe_file_debug[:(len(exe_file_debug)-4)]
        if( False == path.exists(exe_file_debug) ):
            dialog("Elf file " + exe_file_debug + " not found", True)
            return 1
    else:
        exe_file_prod   = ide.expandProjectMacrosEx("${ProjectName}", confName, "${ProjectDir}/${ImagePath}", False)
        g_project_fw_file = exe_file_prod[:(len(exe_file_prod)-4)]
        if( False == path.exists(exe_file_prod) ):
            dialog("Hex file " + exe_file_prod + " not found", True)
            return 1  

    read_config_file() 
    ecdsa_mthd = 0
    if (ia_found == 1) and ('Local' not in g_ecdsa_mthd):
        ecdsa_mthd = 1
        if ss_check_log_in(current_working_dir) == 0:
            dialog("Hasn't Logged into SecureSign", True)
            return 1
        print("SecureSign Logged In")

    memory_addr_set()
    code_buffer = bytearray(global_crop_end_address - global_crop_start_address)
    mem.ReadBlock(None, global_crop_start_address, 0, len(code_buffer), code_buffer )
    memblocks = mem.GetUsedAreas(None, global_crop_start_address, global_crop_end_address)

    if( len(memblocks) > 1 ):
        return 1

    mblock = memblocks[0] 
    g4_fw_img_len = (mblock[1]-mblock[0]+1) 
    if g_device_family == 1:
        padlen = 4096 - (g4_fw_img_len % 4096)
        if padlen < 4096:
            g4_fw_img_len += padlen
    elif g_device_family > 1:
        padlen = 16 - (g4_fw_img_len % 16)
        if padlen < 16:
            g4_fw_img_len += padlen
    img_bytes = code_buffer[:g4_fw_img_len]

    g1_fw_img_signature_size = 0
    g1_md_signature_size = 0
    g96_fw_img_signature[0:96] = bytearray(b'\x00') * 96
    g96_md_signature[0:96] = bytearray(b'\x00') * 96

    if( g1_auth_mthd > 2 ):
        dialog("Invalid Authentication Method", True)
        return 1

    if( g1_auth_mthd == 1):
        if g_device_family == 0:
            hash = shabytes(img_bytes)
            g1_fw_img_signature_size = len(hash)
            g96_fw_img_signature[0:g1_fw_img_signature_size] = hash

            g1_md_signature_size = 0
            g96_md_signature[0:72] = bytearray(b'\x00') * 72
            fill_header()
            
            hash = shabytes(g_metaheader[20:])
            g1_md_signature_size = len(hash)
            g96_md_signature[0:g1_md_signature_size] = hash
            
        else:    
            sign = bytearray(b'\x00') * 72
            if ecdsa_mthd == 0:
                if False == path.exists(g_private_key_file_absolute):
                    dialog("Private key file " + g_private_key_file_absolute + " not found", True)
                    return 1

                prk_file = g_private_key_file_absolute
                pr = utils.readPrivateKey("EC", prk_file) 

                key_bytes = pr.getEncoded()
                if len(key_bytes) != 138:
                    dialog("Incorrect format of private key file " + prk_file, True)
                    return 1
                sign = utils.computeSignatureFromHash(img_bytes,  "SHA256withECDSA", pr, None)
            else:
                print('SecureSign Firmware Signing P256')
                sign = ss_sign_bytes(current_working_dir, img_bytes, g_ss_role, g_ss_key_name, g_ss_key_version) 
                if sign == None:
                    dialog("Failed in SecureSign service", True)
                    return 1

            reformat = reformat_signature(sign, 32)
            for i in range(64):
                g96_fw_img_signature[i] = reformat[i]

            tmp_src = g_img_src_addr
            g_img_src_addr = 0
            fill_header()
            if g_device_family == 1:
                file_bytes = g_metaheader[16:132]
            elif g_device_family == 2:
                file_bytes = g_metaheader[40:156]
            elif g_device_family == 3:
                file_bytes = g_metaheader[72:188]

            g_img_src_addr = tmp_src
            sign = bytearray(b'\x00') * 72
            if ecdsa_mthd == 0:
                sign = utils.computeSignatureFromHash(file_bytes,  "SHA256withECDSA", pr, None)
            else:
                print('SecureSign Header Signing P256')
                sign = ss_sign_bytes(current_working_dir, file_bytes, g_ss_role, g_ss_key_name, g_ss_key_version) 
                if sign == None:
                    dialog("Failed in SecureSign service", True)
                    return 1

            reformat = reformat_signature(sign, 32)
            for i in range(64):
                g96_md_signature[i] = reformat[i]

    if( g1_auth_mthd == 2):
        if g_device_family == 0:
            if ecdsa_mthd == 0:
                if False == path.exists(g_private_key_file_absolute):
                    dialog("Private key file " + g_private_key_file_absolute + " not found", True)
                    return 1

                sign = signbytes(img_bytes)
            else: 
                print('SecureSign Firmware Signing')
                sign = ss_sign_bytes(current_working_dir, img_bytes, g_ss_role, g_ss_key_name, g_ss_key_version) 
                if sign == None:
                    dialog("Failed in SecureSign service", True)
                    return 1
            g1_fw_img_signature_size = len(sign)
            g96_fw_img_signature[0:g1_fw_img_signature_size] = sign
            
            g1_md_signature_size = 0
            g96_md_signature[0:72] = bytearray(b'\x00') * 72
            fill_header()
            
            if ecdsa_mthd == 0:
                if False == path.exists(g_private_key_file_absolute):
                    dialog("Private key file " + g_private_key_file_absolute + " not found", True)
                    return
                sign = signbytes(g_metaheader[20:])
            else:
                print('SecureSign Metaheader Signing')
                sign = ss_sign_bytes(current_working_dir, g_metaheader[20:], g_ss_role, g_ss_key_name, g_ss_key_version) 
                if sign == None:
                    dialog("Failed in SecureSign service2", True)
                    return 1
            g1_md_signature_size = len(sign)
            g96_md_signature[0:g1_md_signature_size] = sign
    
        else:
            sign = bytearray(b'\x00') * 104
            if ecdsa_mthd == 0:
                if False == path.exists(g_private_key_file_absolute):
                    dialog("Private key file " + g_private_key_file_absolute + " not found", True)
                    return 1
                prk_file = g_private_key_file_absolute
                pr = utils.readPrivateKey("EC", prk_file) 
                key_bytes = pr.getEncoded()
                if len(key_bytes) != 185:
                    dialog("Incorrect format of private key file " + prk_file, True)
                    return 1
                sign = utils.computeSignatureFromHash(img_bytes,  "SHA384withECDSA", pr, None)
            else:
                print('SecureSign Firmware Signing P384')
                sign = ss_sign_bytes(current_working_dir, img_bytes, g_ss_role, g_ss_key_name, g_ss_key_version) 
                if sign == None:
                    dialog("Failed in SecureSign service", True)
                    return 1

            reformat = reformat_signature(sign, 48)
            for i in range(96):
                g96_fw_img_signature[i] = reformat[i]

            tmp_src = g_img_src_addr
            g_img_src_addr = 0
            fill_header()
            if g_device_family == 1:
                file_bytes = g_metaheader[16:132]
            elif g_device_family == 2:
                file_bytes = g_metaheader[40:156]
            elif g_device_family == 3:
                file_bytes = g_metaheader[72:188]
            g_img_src_addr = tmp_src

            sign = bytearray(b'\x00') * 104
            if ecdsa_mthd == 0:
                sign = utils.computeSignatureFromHash(file_bytes,  "SHA384withECDSA", pr, None)
            else:
                print('SecureSign Header Signing P384')
                sign = ss_sign_bytes(current_working_dir, file_bytes, g_ss_role, g_ss_key_name, g_ss_key_version) 
                if sign == None:
                    dialog("Failed in SecureSign service", True)
                    return 1

            reformat = reformat_signature(sign, 48)
            for i in range(96):
                g96_md_signature[i] = reformat[i]

    fill_header()

    g_signed_fw_file = g_project_fw_file + ".signed.bin"
    with open(g_signed_fw_file, "wb") as fb:
        fb.write(g_metaheader)
        g_img_bytes = bytearray(g_metaheader)
        if is_debug_build == 0:
            g_img_bytes.extend(img_bytes)
        fb.write(img_bytes)
        fb.close()

    if( not is_debug_build ):
        signed_fw_hex_file = g_project_fw_file + ".signed.hex"
        fw_hex_file = g_project_fw_file + ".hex"
        header_hex = IntelHex()
        header_hex.frombytes(g_metaheader, global_header_start_address)
        fw_hex = IntelHex(fw_hex_file)
        fw_hex.merge(header_hex, overlap='replace')
        fw_hex.tofile(signed_fw_hex_file, "hex")

    unified_file = g_project_fw_file + ".unified.hex"
    if( path.exists(unified_file) and path.exists(signed_fw_hex_file)):
        unified_hex = IntelHex(unified_file)
        signed_hex = IntelHex(signed_fw_hex_file)
        unified_hex.merge(signed_hex, overlap='replace')
        signed_unified_file = g_project_fw_file + ".signed.unified.hex"
        unified_hex.tofile(signed_unified_file, "hex")

    print("Metadata Header Created")
    return