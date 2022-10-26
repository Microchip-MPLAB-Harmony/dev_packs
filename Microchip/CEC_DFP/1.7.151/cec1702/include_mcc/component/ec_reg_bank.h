/*
 * Component description for EC_REG_BANK
 *
 * Copyright (c) 2022 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2018-10-01T10:50:03Z */
#ifndef _CEC1702Q_EC_REG_BANK_COMPONENT_H_
#define _CEC1702Q_EC_REG_BANK_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR EC_REG_BANK                                  */
/* ************************************************************************** */

/* -------- EC_REG_BANK_AHB_ERR_ADDR : (EC_REG_BANK Offset: 0x04) (R/W 32) AHB Error Address [0:0] AHB_ERR_ADDR, In priority order:\n        1. AHB address is registered when an AHB error occurs on the processor's AHB master port and the register value was\n          already 0. This way only the first address to generate an exception is captured.\n         2. The processor can clear this register by writing any 32-bit value to this register. -------- */
#define EC_REG_BANK_AHB_ERR_ADDR_RESETVALUE   _UINT32_(0x00)                                       /*  (EC_REG_BANK_AHB_ERR_ADDR) AHB Error Address [0:0] AHB_ERR_ADDR, In priority order:\n        1. AHB address is registered when an AHB error occurs on the processor's AHB master port and the register value was\n          already 0. This way only the first address to generate an exception is captured.\n         2. The processor can clear this register by writing any 32-bit value to this register.  Reset Value */

#define EC_REG_BANK_AHB_ERR_ADDR_Msk          _UINT32_(0x00000000)                                 /* (EC_REG_BANK_AHB_ERR_ADDR) Register Mask  */


/* -------- EC_REG_BANK_AHB_ERR_CTRL : (EC_REG_BANK Offset: 0x14) (R/W 8) AHB Error Control [0:0] AHB_ERROR_DISABLE,\n       0: EC memory exceptions are enabled. 1: EC memory exceptions are disabled. -------- */
#define EC_REG_BANK_AHB_ERR_CTRL_RESETVALUE   _UINT8_(0x00)                                        /*  (EC_REG_BANK_AHB_ERR_CTRL) AHB Error Control [0:0] AHB_ERROR_DISABLE,\n       0: EC memory exceptions are enabled. 1: EC memory exceptions are disabled.  Reset Value */

#define EC_REG_BANK_AHB_ERR_CTRL_Msk          _UINT8_(0x00)                                        /* (EC_REG_BANK_AHB_ERR_CTRL) Register Mask  */


/* -------- EC_REG_BANK_INTR_CTRL : (EC_REG_BANK Offset: 0x18) (R/W 32) Interrupt Control [0:0] NVIC_EN (NVIC_EN) \n       This bit enables Alternate NVIC IRQ's Vectors. The Alternate NVIC Vectors provides each interrupt event with a dedicated (direct) NVIC vector.\n         0 = Alternate NVIC vectors disabled, 1= Alternate NVIC vectors enabled -------- */
#define EC_REG_BANK_INTR_CTRL_RESETVALUE      _UINT32_(0x01)                                       /*  (EC_REG_BANK_INTR_CTRL) Interrupt Control [0:0] NVIC_EN (NVIC_EN) \n       This bit enables Alternate NVIC IRQ's Vectors. The Alternate NVIC Vectors provides each interrupt event with a dedicated (direct) NVIC vector.\n         0 = Alternate NVIC vectors disabled, 1= Alternate NVIC vectors enabled  Reset Value */

#define EC_REG_BANK_INTR_CTRL_Msk             _UINT32_(0x00000000)                                 /* (EC_REG_BANK_INTR_CTRL) Register Mask  */


/* -------- EC_REG_BANK_ETM_CTRL : (EC_REG_BANK Offset: 0x1C) (R/W 32) ETM TRACE Enable [0:0] TRACE_EN (TRACE_EN) \n       This bit enables the ARM TRACE debug port (ETM/ITM). The Trace Debug Interface pins are forced to the TRACE functions.\n       0 = ARM TRACE port disabled, 1= ARM TRACE port enabled -------- */
#define EC_REG_BANK_ETM_CTRL_RESETVALUE       _UINT32_(0x00)                                       /*  (EC_REG_BANK_ETM_CTRL) ETM TRACE Enable [0:0] TRACE_EN (TRACE_EN) \n       This bit enables the ARM TRACE debug port (ETM/ITM). The Trace Debug Interface pins are forced to the TRACE functions.\n       0 = ARM TRACE port disabled, 1= ARM TRACE port enabled  Reset Value */

#define EC_REG_BANK_ETM_CTRL_Msk              _UINT32_(0x00000000)                                 /* (EC_REG_BANK_ETM_CTRL) Register Mask  */


/* -------- EC_REG_BANK_DEBUG_CTRL : (EC_REG_BANK Offset: 0x20) (R/W 32) Debug Enable Register -------- */
#define EC_REG_BANK_DEBUG_CTRL_RESETVALUE     _UINT32_(0x00)                                       /*  (EC_REG_BANK_DEBUG_CTRL) Debug Enable Register  Reset Value */

#define EC_REG_BANK_DEBUG_CTRL_EN_Pos         _UINT32_(0)                                          /* (EC_REG_BANK_DEBUG_CTRL) EN (JTAG_EN) This bit enables the JTAG/SWD debug port.\n           0= JTAG/SWD port disabled. JTAG/SWD cannot be enabled (i.e., the TRST# pin is ignored and the JTAG signals remain in their non-JTAG state)\n        1= JTAG/SWD port enabled. A high on TRST# enables JTAG or SWD, as determined by SWD_EN. Position */
#define EC_REG_BANK_DEBUG_CTRL_EN_Msk         (_UINT32_(0x1) << EC_REG_BANK_DEBUG_CTRL_EN_Pos)     /* (EC_REG_BANK_DEBUG_CTRL) EN (JTAG_EN) This bit enables the JTAG/SWD debug port.\n           0= JTAG/SWD port disabled. JTAG/SWD cannot be enabled (i.e., the TRST# pin is ignored and the JTAG signals remain in their non-JTAG state)\n        1= JTAG/SWD port enabled. A high on TRST# enables JTAG or SWD, as determined by SWD_EN. Mask */
#define EC_REG_BANK_DEBUG_CTRL_EN(value)      (EC_REG_BANK_DEBUG_CTRL_EN_Msk & (_UINT32_(value) << EC_REG_BANK_DEBUG_CTRL_EN_Pos)) /* Assigment of value for EN in the EC_REG_BANK_DEBUG_CTRL register */
#define EC_REG_BANK_DEBUG_CTRL_PIN_CFG_Pos    _UINT32_(1)                                          /* (EC_REG_BANK_DEBUG_CTRL) This field determines which pins are affected by the TRST# debug enable pin.3=Reserved\n           2=The pins associated with the JTAG TCK and TMS switch to the debug interface when TRST# is de-asserted high. The pins\n           associated with TDI and TDO remain controlled by the associated GPIO. This setting should be used when the ARM Serial\n          Wire Debug (SWD) is required for debugging and the Serial Wire Viewer is not required\n                1=The pins associated with the JTAG TCK, TMS and TDO switch to the debug interface when TRST# is de-asserted high. The pin\n           associated with TDI remains controlled by the associated GPIO. This setting should be used when the ARM Serial Wire Debug\n             (SWD) and Serial Wire Viewer (SWV) are both required for debugging\n          0=All four pins associated with JTAG (TCK, TMS, TDI and TDO) switch to the debug interface when TRST# is de-asserted high.\n         This setting should be used when the JTAG TAP controller is required for debugging. Position */
#define EC_REG_BANK_DEBUG_CTRL_PIN_CFG_Msk    (_UINT32_(0x3) << EC_REG_BANK_DEBUG_CTRL_PIN_CFG_Pos) /* (EC_REG_BANK_DEBUG_CTRL) This field determines which pins are affected by the TRST# debug enable pin.3=Reserved\n           2=The pins associated with the JTAG TCK and TMS switch to the debug interface when TRST# is de-asserted high. The pins\n           associated with TDI and TDO remain controlled by the associated GPIO. This setting should be used when the ARM Serial\n          Wire Debug (SWD) is required for debugging and the Serial Wire Viewer is not required\n                1=The pins associated with the JTAG TCK, TMS and TDO switch to the debug interface when TRST# is de-asserted high. The pin\n           associated with TDI remains controlled by the associated GPIO. This setting should be used when the ARM Serial Wire Debug\n             (SWD) and Serial Wire Viewer (SWV) are both required for debugging\n          0=All four pins associated with JTAG (TCK, TMS, TDI and TDO) switch to the debug interface when TRST# is de-asserted high.\n         This setting should be used when the JTAG TAP controller is required for debugging. Mask */
#define EC_REG_BANK_DEBUG_CTRL_PIN_CFG(value) (EC_REG_BANK_DEBUG_CTRL_PIN_CFG_Msk & (_UINT32_(value) << EC_REG_BANK_DEBUG_CTRL_PIN_CFG_Pos)) /* Assigment of value for PIN_CFG in the EC_REG_BANK_DEBUG_CTRL register */
#define   EC_REG_BANK_DEBUG_CTRL_PIN_CFG_JTAG_TCK_TMS_Val _UINT32_(0x2)                                        /* (EC_REG_BANK_DEBUG_CTRL) 2=The pins associated with the JTAG TCK and TMS switch to the debug interface when TRST# is de-asserted high. The pins\n           associated with TDI and TDO remain controlled by the associated GPIO. This setting should be used when the ARM Serial\n          Wire Debug (SWD) is required for debugging and the Serial Wire Viewer is not required   */
#define   EC_REG_BANK_DEBUG_CTRL_PIN_CFG_JTAG_TCK_TMS_TDO_Val _UINT32_(0x1)                                        /* (EC_REG_BANK_DEBUG_CTRL) 1=The pins associated with the JTAG TCK, TMS and TDO switch to the debug interface when TRST# is de-asserted high. The pin\n           associated with TDI remains controlled by the associated GPIO. This setting should be used when the ARM Serial Wire Debug\n             (SWD) and Serial Wire Viewer (SWV) are both required for debugging  */
#define   EC_REG_BANK_DEBUG_CTRL_PIN_CFG_JTAG_TCK_TMS_TDO_TDI_Val _UINT32_(0x0)                                        /* (EC_REG_BANK_DEBUG_CTRL) 0=All four pins associated with JTAG (TCK, TMS, TDI and TDO) switch to the debug interface when TRST# is de-asserted high.\n         This setting should be used when the JTAG TAP controller is required for debugging.  */
#define EC_REG_BANK_DEBUG_CTRL_PIN_CFG_JTAG_TCK_TMS (EC_REG_BANK_DEBUG_CTRL_PIN_CFG_JTAG_TCK_TMS_Val << EC_REG_BANK_DEBUG_CTRL_PIN_CFG_Pos) /* (EC_REG_BANK_DEBUG_CTRL) 2=The pins associated with the JTAG TCK and TMS switch to the debug interface when TRST# is de-asserted high. The pins\n           associated with TDI and TDO remain controlled by the associated GPIO. This setting should be used when the ARM Serial\n          Wire Debug (SWD) is required for debugging and the Serial Wire Viewer is not required  Position  */
#define EC_REG_BANK_DEBUG_CTRL_PIN_CFG_JTAG_TCK_TMS_TDO (EC_REG_BANK_DEBUG_CTRL_PIN_CFG_JTAG_TCK_TMS_TDO_Val << EC_REG_BANK_DEBUG_CTRL_PIN_CFG_Pos) /* (EC_REG_BANK_DEBUG_CTRL) 1=The pins associated with the JTAG TCK, TMS and TDO switch to the debug interface when TRST# is de-asserted high. The pin\n           associated with TDI remains controlled by the associated GPIO. This setting should be used when the ARM Serial Wire Debug\n             (SWD) and Serial Wire Viewer (SWV) are both required for debugging Position  */
#define EC_REG_BANK_DEBUG_CTRL_PIN_CFG_JTAG_TCK_TMS_TDO_TDI (EC_REG_BANK_DEBUG_CTRL_PIN_CFG_JTAG_TCK_TMS_TDO_TDI_Val << EC_REG_BANK_DEBUG_CTRL_PIN_CFG_Pos) /* (EC_REG_BANK_DEBUG_CTRL) 0=All four pins associated with JTAG (TCK, TMS, TDI and TDO) switch to the debug interface when TRST# is de-asserted high.\n         This setting should be used when the JTAG TAP controller is required for debugging. Position  */
#define EC_REG_BANK_DEBUG_CTRL_PU_EN_Pos      _UINT32_(3)                                          /* (EC_REG_BANK_DEBUG_CTRL) If this bit is set to '1b' internal pull-up resistors are automatically enabled on the appropriate debugging port\n         wires whenever the debug port is enabled (the DEBUG_EN bit in this register is '1b' and the JTAG_RST# pin is high). The setting\n              of DEBUG_PIN_CFG determines which pins have pull-ups enabled when the debug port is enabled. Position */
#define EC_REG_BANK_DEBUG_CTRL_PU_EN_Msk      (_UINT32_(0x1) << EC_REG_BANK_DEBUG_CTRL_PU_EN_Pos)  /* (EC_REG_BANK_DEBUG_CTRL) If this bit is set to '1b' internal pull-up resistors are automatically enabled on the appropriate debugging port\n         wires whenever the debug port is enabled (the DEBUG_EN bit in this register is '1b' and the JTAG_RST# pin is high). The setting\n              of DEBUG_PIN_CFG determines which pins have pull-ups enabled when the debug port is enabled. Mask */
#define EC_REG_BANK_DEBUG_CTRL_PU_EN(value)   (EC_REG_BANK_DEBUG_CTRL_PU_EN_Msk & (_UINT32_(value) << EC_REG_BANK_DEBUG_CTRL_PU_EN_Pos)) /* Assigment of value for PU_EN in the EC_REG_BANK_DEBUG_CTRL register */
#define EC_REG_BANK_DEBUG_CTRL_Msk            _UINT32_(0x0000000F)                                 /* (EC_REG_BANK_DEBUG_CTRL) Register Mask  */


/* -------- EC_REG_BANK_OTP_LOCK : (EC_REG_BANK Offset: 0x24) (R/W 32) OTP Lock -------- */
#define EC_REG_BANK_OTP_LOCK_RESETVALUE       _UINT32_(0x00)                                       /*  (EC_REG_BANK_OTP_LOCK) OTP Lock  Reset Value */

#define EC_REG_BANK_OTP_LOCK_TEST_Pos         _UINT32_(0)                                          /* (EC_REG_BANK_OTP_LOCK) Test Position */
#define EC_REG_BANK_OTP_LOCK_TEST_Msk         (_UINT32_(0x1) << EC_REG_BANK_OTP_LOCK_TEST_Pos)     /* (EC_REG_BANK_OTP_LOCK) Test Mask */
#define EC_REG_BANK_OTP_LOCK_TEST(value)      (EC_REG_BANK_OTP_LOCK_TEST_Msk & (_UINT32_(value) << EC_REG_BANK_OTP_LOCK_TEST_Pos)) /* Assigment of value for TEST in the EC_REG_BANK_OTP_LOCK register */
#define EC_REG_BANK_OTP_LOCK_MCHIP_LOCK_Pos   _UINT32_(1)                                          /* (EC_REG_BANK_OTP_LOCK) This bit controls access to Microchip region of the eFuse memory, bytes 32 to 127. Once written, this bit becomes Read Only.\n          If the JTAG_EN bit is 1 (enabled), the Private Key is inaccessible, independent of the state of this bit.\n             1=The Microchip region is inaccessible (i.e, always returns 0 or 1 for every bit); 0=The Microchip region is accessible. Position */
#define EC_REG_BANK_OTP_LOCK_MCHIP_LOCK_Msk   (_UINT32_(0x1) << EC_REG_BANK_OTP_LOCK_MCHIP_LOCK_Pos) /* (EC_REG_BANK_OTP_LOCK) This bit controls access to Microchip region of the eFuse memory, bytes 32 to 127. Once written, this bit becomes Read Only.\n          If the JTAG_EN bit is 1 (enabled), the Private Key is inaccessible, independent of the state of this bit.\n             1=The Microchip region is inaccessible (i.e, always returns 0 or 1 for every bit); 0=The Microchip region is accessible. Mask */
#define EC_REG_BANK_OTP_LOCK_MCHIP_LOCK(value) (EC_REG_BANK_OTP_LOCK_MCHIP_LOCK_Msk & (_UINT32_(value) << EC_REG_BANK_OTP_LOCK_MCHIP_LOCK_Pos)) /* Assigment of value for MCHIP_LOCK in the EC_REG_BANK_OTP_LOCK register */
#define EC_REG_BANK_OTP_LOCK_PRIV_KEY_LOCK_Pos _UINT32_(2)                                          /* (EC_REG_BANK_OTP_LOCK) This bit controls access to Private Key region of the eFuse memory, bytes 0 to 31. Once written, this bit becomes Read Only.\n        If the JTAG_EN bit is 1 (enabled), the Private Key is inaccessible, independent of the state of this bit.\n           1=The Private Key is inaccessible (i.e, always returns 0 or 1 for every bit); 0=The Private Key is accessible. Position */
#define EC_REG_BANK_OTP_LOCK_PRIV_KEY_LOCK_Msk (_UINT32_(0x1) << EC_REG_BANK_OTP_LOCK_PRIV_KEY_LOCK_Pos) /* (EC_REG_BANK_OTP_LOCK) This bit controls access to Private Key region of the eFuse memory, bytes 0 to 31. Once written, this bit becomes Read Only.\n        If the JTAG_EN bit is 1 (enabled), the Private Key is inaccessible, independent of the state of this bit.\n           1=The Private Key is inaccessible (i.e, always returns 0 or 1 for every bit); 0=The Private Key is accessible. Mask */
#define EC_REG_BANK_OTP_LOCK_PRIV_KEY_LOCK(value) (EC_REG_BANK_OTP_LOCK_PRIV_KEY_LOCK_Msk & (_UINT32_(value) << EC_REG_BANK_OTP_LOCK_PRIV_KEY_LOCK_Pos)) /* Assigment of value for PRIV_KEY_LOCK in the EC_REG_BANK_OTP_LOCK register */
#define EC_REG_BANK_OTP_LOCK_USER_OTP_LOCK_Pos _UINT32_(3)                                          /* (EC_REG_BANK_OTP_LOCK) This bit controls access to the User region of the eFuse memory, bytes 192 to 511. Once written, this bit becomes Read Only.\n           If the JTAG_EN bit is 1 (enabled), the User region is inaccessible, independent of the state of this bit.\n          1=The User region is inaccessible (i.e, always returns 0 or 1 for every bit); 0=The User region is accessible Position */
#define EC_REG_BANK_OTP_LOCK_USER_OTP_LOCK_Msk (_UINT32_(0x1) << EC_REG_BANK_OTP_LOCK_USER_OTP_LOCK_Pos) /* (EC_REG_BANK_OTP_LOCK) This bit controls access to the User region of the eFuse memory, bytes 192 to 511. Once written, this bit becomes Read Only.\n           If the JTAG_EN bit is 1 (enabled), the User region is inaccessible, independent of the state of this bit.\n          1=The User region is inaccessible (i.e, always returns 0 or 1 for every bit); 0=The User region is accessible Mask */
#define EC_REG_BANK_OTP_LOCK_USER_OTP_LOCK(value) (EC_REG_BANK_OTP_LOCK_USER_OTP_LOCK_Msk & (_UINT32_(value) << EC_REG_BANK_OTP_LOCK_USER_OTP_LOCK_Pos)) /* Assigment of value for USER_OTP_LOCK in the EC_REG_BANK_OTP_LOCK register */
#define EC_REG_BANK_OTP_LOCK_PUB_KEY_LOCK_Pos _UINT32_(4)                                          /* (EC_REG_BANK_OTP_LOCK) This bit controls access to the Public Key region of the eFuse memory, bytes 128 to 191. Once written, this bit becomes Read Only.\n          If the JTAG_EN bit is 1 (enabled), the Public Key is inaccessible, independent of the state of this bit.\n            1=The Public Key is inaccessible (i.e, always returns 0 or 1 for every bit); 0=The Public Key is accessible Position */
#define EC_REG_BANK_OTP_LOCK_PUB_KEY_LOCK_Msk (_UINT32_(0x1) << EC_REG_BANK_OTP_LOCK_PUB_KEY_LOCK_Pos) /* (EC_REG_BANK_OTP_LOCK) This bit controls access to the Public Key region of the eFuse memory, bytes 128 to 191. Once written, this bit becomes Read Only.\n          If the JTAG_EN bit is 1 (enabled), the Public Key is inaccessible, independent of the state of this bit.\n            1=The Public Key is inaccessible (i.e, always returns 0 or 1 for every bit); 0=The Public Key is accessible Mask */
#define EC_REG_BANK_OTP_LOCK_PUB_KEY_LOCK(value) (EC_REG_BANK_OTP_LOCK_PUB_KEY_LOCK_Msk & (_UINT32_(value) << EC_REG_BANK_OTP_LOCK_PUB_KEY_LOCK_Pos)) /* Assigment of value for PUB_KEY_LOCK in the EC_REG_BANK_OTP_LOCK register */
#define EC_REG_BANK_OTP_LOCK_Msk              _UINT32_(0x0000001F)                                 /* (EC_REG_BANK_OTP_LOCK) Register Mask  */


/* -------- EC_REG_BANK_WDT_CNT : (EC_REG_BANK Offset: 0x28) (R/W 32) WDT Event Count [3:0] WDT_COUNT (WDT_COUNT) These EC R/W bits are cleared to 0 on VCC1 POR,\n       but not on a WDT Note: This field is written by Boot ROM firmware to indicate the number of times a WDT fired before loading a good EC code image. -------- */
#define EC_REG_BANK_WDT_CNT_RESETVALUE        _UINT32_(0x00)                                       /*  (EC_REG_BANK_WDT_CNT) WDT Event Count [3:0] WDT_COUNT (WDT_COUNT) These EC R/W bits are cleared to 0 on VCC1 POR,\n       but not on a WDT Note: This field is written by Boot ROM firmware to indicate the number of times a WDT fired before loading a good EC code image.  Reset Value */

#define EC_REG_BANK_WDT_CNT_Msk               _UINT32_(0x00000000)                                 /* (EC_REG_BANK_WDT_CNT) Register Mask  */


/* -------- EC_REG_BANK_AESH_BSWAP_CTRL : (EC_REG_BANK Offset: 0x2C) (R/W 32) AES HASH Byte Swap Control Register. -------- */
#define EC_REG_BANK_AESH_BSWAP_CTRL_RESETVALUE _UINT32_(0x00)                                       /*  (EC_REG_BANK_AESH_BSWAP_CTRL) AES HASH Byte Swap Control Register.  Reset Value */

#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BYTE_SWAP_EN_Pos _UINT32_(0)                                          /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable byte swap on a DWORD during AHB read from AES / HASH block: 1=Enable; 0=Disable. Position */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BYTE_SWAP_EN_Msk (_UINT32_(0x1) << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BYTE_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable byte swap on a DWORD during AHB read from AES / HASH block: 1=Enable; 0=Disable. Mask */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BYTE_SWAP_EN(value) (EC_REG_BANK_AESH_BSWAP_CTRL_IP_BYTE_SWAP_EN_Msk & (_UINT32_(value) << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BYTE_SWAP_EN_Pos)) /* Assigment of value for IP_BYTE_SWAP_EN in the EC_REG_BANK_AESH_BSWAP_CTRL register */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BYTE_SWAP_EN_Pos _UINT32_(1)                                          /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable byte swap on a DWORD during AHB write from AES / HASH block: 1=Enable; 0=Disable. Position */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BYTE_SWAP_EN_Msk (_UINT32_(0x1) << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BYTE_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable byte swap on a DWORD during AHB write from AES / HASH block: 1=Enable; 0=Disable. Mask */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BYTE_SWAP_EN(value) (EC_REG_BANK_AESH_BSWAP_CTRL_OP_BYTE_SWAP_EN_Msk & (_UINT32_(value) << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BYTE_SWAP_EN_Pos)) /* Assigment of value for OP_BYTE_SWAP_EN in the EC_REG_BANK_AESH_BSWAP_CTRL register */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos _UINT32_(2)                                          /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable word swap on a DWORD during AHB read from AES / HASH block\n              4=Swap 32-bit doublewords in 128-byte blocks\n            3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,\n          0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,...\n              2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,...\n          1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,\n       0x0, 0xC, 0x8, ...\n           0=Disable. Position */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Msk (_UINT32_(0x7) << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable word swap on a DWORD during AHB read from AES / HASH block\n              4=Swap 32-bit doublewords in 128-byte blocks\n            3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,\n          0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,...\n              2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,...\n          1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,\n       0x0, 0xC, 0x8, ...\n           0=Disable. Mask */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN(value) (EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Msk & (_UINT32_(value) << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos)) /* Assigment of value for IP_BLK_SWAP_EN in the EC_REG_BANK_AESH_BSWAP_CTRL register */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_128_BYTE_BLOCK_Val _UINT32_(0x4)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 4=Swap 32-bit doublewords in 128-byte blocks   */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_64_BYTE_BLOCK_Val _UINT32_(0x3)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,\n          0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,...  */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_16_BYTE_BLOCK_Val _UINT32_(0x2)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,...  */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_8_BYTE_BLOCK_Val _UINT32_(0x1)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,\n       0x0, 0xC, 0x8, ...\n  */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_DIS_Val _UINT32_(0x0)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 0=Disable.  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_128_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_128_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 4=Swap 32-bit doublewords in 128-byte blocks  Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_64_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_64_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,\n          0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,... Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_16_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_16_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,... Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_8_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_8_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,\n       0x0, 0xC, 0x8, ...\n Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_DIS (EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_DIS_Val << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 0=Disable. Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos _UINT32_(5)                                          /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable word swap on a DWORD during AHB write from AES / HASH block\n           4=Swap 32-bit doublewords in 128-byte blocks\n                  3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,\n              0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,...\n               2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,...\n         1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,\n       0x0, 0xC, 0x8, ...\n            0=Disable. Position */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Msk (_UINT32_(0x7) << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable word swap on a DWORD during AHB write from AES / HASH block\n           4=Swap 32-bit doublewords in 128-byte blocks\n                  3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,\n              0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,...\n               2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,...\n         1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,\n       0x0, 0xC, 0x8, ...\n            0=Disable. Mask */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN(value) (EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Msk & (_UINT32_(value) << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos)) /* Assigment of value for OP_BLK_SWAP_EN in the EC_REG_BANK_AESH_BSWAP_CTRL register */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_128_BYTE_BLOCK_Val _UINT32_(0x4)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 4=Swap 32-bit doublewords in 128-byte blocks   */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_64_BYTE_BLOCK_Val _UINT32_(0x3)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,\n          0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,...  */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_16_BYTE_BLOCK_Val _UINT32_(0x2)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,...  */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_8_BYTE_BLOCK_Val _UINT32_(0x1)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,\n       0x0, 0xC, 0x8, ...\n  */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_DIS_Val _UINT32_(0x0)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 0=Disable.  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_128_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_128_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 4=Swap 32-bit doublewords in 128-byte blocks  Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_64_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_64_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,\n          0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,... Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_16_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_16_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,... Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_8_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_8_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,\n       0x0, 0xC, 0x8, ...\n Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_DIS (EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_DIS_Val << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 0=Disable. Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_Msk       _UINT32_(0x000000FF)                                 /* (EC_REG_BANK_AESH_BSWAP_CTRL) Register Mask  */


/* -------- EC_REG_BANK_SYS_SHUTDWN_RST : (EC_REG_BANK Offset: 0x38) (R/W 32) AES HASH Byte Swap Control Register. -------- */
#define EC_REG_BANK_SYS_SHUTDWN_RST_RESETVALUE _UINT32_(0x00)                                       /*  (EC_REG_BANK_SYS_SHUTDWN_RST) AES HASH Byte Swap Control Register.  Reset Value */

#define EC_REG_BANK_SYS_SHUTDWN_RST_SYS_SHDN_RST_Pos _UINT32_(0)                                          /* (EC_REG_BANK_SYS_SHUTDWN_RST) When this bit is asserted 1, the SYS_SHDN# output is deasserted Position */
#define EC_REG_BANK_SYS_SHUTDWN_RST_SYS_SHDN_RST_Msk (_UINT32_(0x1) << EC_REG_BANK_SYS_SHUTDWN_RST_SYS_SHDN_RST_Pos) /* (EC_REG_BANK_SYS_SHUTDWN_RST) When this bit is asserted 1, the SYS_SHDN# output is deasserted Mask */
#define EC_REG_BANK_SYS_SHUTDWN_RST_SYS_SHDN_RST(value) (EC_REG_BANK_SYS_SHUTDWN_RST_SYS_SHDN_RST_Msk & (_UINT32_(value) << EC_REG_BANK_SYS_SHUTDWN_RST_SYS_SHDN_RST_Pos)) /* Assigment of value for SYS_SHDN_RST in the EC_REG_BANK_SYS_SHUTDWN_RST register */
#define EC_REG_BANK_SYS_SHUTDWN_RST_Msk       _UINT32_(0x00000001)                                 /* (EC_REG_BANK_SYS_SHUTDWN_RST) Register Mask  */


/* -------- EC_REG_BANK_PECI_DIS : (EC_REG_BANK Offset: 0x40) (R/W 32) PECI Disable -------- */
#define EC_REG_BANK_PECI_DIS_RESETVALUE       _UINT32_(0x00)                                       /*  (EC_REG_BANK_PECI_DIS) PECI Disable  Reset Value */

#define EC_REG_BANK_PECI_DIS_PECI_DISABLE_Pos _UINT32_(0)                                          /* (EC_REG_BANK_PECI_DIS) When this bit is asserted 1, it disables the PECI pads to reduce leakage. Position */
#define EC_REG_BANK_PECI_DIS_PECI_DISABLE_Msk (_UINT32_(0x1) << EC_REG_BANK_PECI_DIS_PECI_DISABLE_Pos) /* (EC_REG_BANK_PECI_DIS) When this bit is asserted 1, it disables the PECI pads to reduce leakage. Mask */
#define EC_REG_BANK_PECI_DIS_PECI_DISABLE(value) (EC_REG_BANK_PECI_DIS_PECI_DISABLE_Msk & (_UINT32_(value) << EC_REG_BANK_PECI_DIS_PECI_DISABLE_Pos)) /* Assigment of value for PECI_DISABLE in the EC_REG_BANK_PECI_DIS register */
#define EC_REG_BANK_PECI_DIS_Msk              _UINT32_(0x00000001)                                 /* (EC_REG_BANK_PECI_DIS) Register Mask  */


/* -------- EC_REG_BANK_CRYPTO_SRST : (EC_REG_BANK Offset: 0x5C) (R/W 32) System Shutdown Reset -------- */
#define EC_REG_BANK_CRYPTO_SRST_RESETVALUE    _UINT32_(0x00)                                       /*  (EC_REG_BANK_CRYPTO_SRST) System Shutdown Reset  Reset Value */

#define EC_REG_BANK_CRYPTO_SRST_RNG_SFT_RST_Pos _UINT32_(0)                                          /* (EC_REG_BANK_CRYPTO_SRST) When this bit is asserted 1, the Random Number Generator block is reset. Position */
#define EC_REG_BANK_CRYPTO_SRST_RNG_SFT_RST_Msk (_UINT32_(0x1) << EC_REG_BANK_CRYPTO_SRST_RNG_SFT_RST_Pos) /* (EC_REG_BANK_CRYPTO_SRST) When this bit is asserted 1, the Random Number Generator block is reset. Mask */
#define EC_REG_BANK_CRYPTO_SRST_RNG_SFT_RST(value) (EC_REG_BANK_CRYPTO_SRST_RNG_SFT_RST_Msk & (_UINT32_(value) << EC_REG_BANK_CRYPTO_SRST_RNG_SFT_RST_Pos)) /* Assigment of value for RNG_SFT_RST in the EC_REG_BANK_CRYPTO_SRST register */
#define EC_REG_BANK_CRYPTO_SRST_PUB_KEY_SFT_RST_Pos _UINT32_(1)                                          /* (EC_REG_BANK_CRYPTO_SRST) When this bit is asserted 1, the Public Key block is reset. Position */
#define EC_REG_BANK_CRYPTO_SRST_PUB_KEY_SFT_RST_Msk (_UINT32_(0x1) << EC_REG_BANK_CRYPTO_SRST_PUB_KEY_SFT_RST_Pos) /* (EC_REG_BANK_CRYPTO_SRST) When this bit is asserted 1, the Public Key block is reset. Mask */
#define EC_REG_BANK_CRYPTO_SRST_PUB_KEY_SFT_RST(value) (EC_REG_BANK_CRYPTO_SRST_PUB_KEY_SFT_RST_Msk & (_UINT32_(value) << EC_REG_BANK_CRYPTO_SRST_PUB_KEY_SFT_RST_Pos)) /* Assigment of value for PUB_KEY_SFT_RST in the EC_REG_BANK_CRYPTO_SRST register */
#define EC_REG_BANK_CRYPTO_SRST_AES_HASH_SFT_RST_Pos _UINT32_(2)                                          /* (EC_REG_BANK_CRYPTO_SRST) When this bit is asserted 1, the AES and Hash blocks are reset. Position */
#define EC_REG_BANK_CRYPTO_SRST_AES_HASH_SFT_RST_Msk (_UINT32_(0x1) << EC_REG_BANK_CRYPTO_SRST_AES_HASH_SFT_RST_Pos) /* (EC_REG_BANK_CRYPTO_SRST) When this bit is asserted 1, the AES and Hash blocks are reset. Mask */
#define EC_REG_BANK_CRYPTO_SRST_AES_HASH_SFT_RST(value) (EC_REG_BANK_CRYPTO_SRST_AES_HASH_SFT_RST_Msk & (_UINT32_(value) << EC_REG_BANK_CRYPTO_SRST_AES_HASH_SFT_RST_Pos)) /* Assigment of value for AES_HASH_SFT_RST in the EC_REG_BANK_CRYPTO_SRST register */
#define EC_REG_BANK_CRYPTO_SRST_Msk           _UINT32_(0x00000007)                                 /* (EC_REG_BANK_CRYPTO_SRST) Register Mask  */


/* -------- EC_REG_BANK_GPIO_BANK_PWR : (EC_REG_BANK Offset: 0x64) (R/W 32) GPIO Bank Power Register -------- */
#define EC_REG_BANK_GPIO_BANK_PWR_RESETVALUE  _UINT32_(0x00)                                       /*  (EC_REG_BANK_GPIO_BANK_PWR) GPIO Bank Power Register  Reset Value */

#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL1_Pos _UINT32_(0)                                          /* (EC_REG_BANK_GPIO_BANK_PWR) Voltage value on VTR1. This bit is set by hardware after a VTR Power On Reset, but may be overridden by software.\n               It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted. Write access is determined by bit 7.\n          1=VTR1 is powered by 3.3V\n               0=VTR1 is powered by 1.8V. Position */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL1_Msk (_UINT32_(0x1) << EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL1_Pos) /* (EC_REG_BANK_GPIO_BANK_PWR) Voltage value on VTR1. This bit is set by hardware after a VTR Power On Reset, but may be overridden by software.\n               It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted. Write access is determined by bit 7.\n          1=VTR1 is powered by 3.3V\n               0=VTR1 is powered by 1.8V. Mask */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL1(value) (EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL1_Msk & (_UINT32_(value) << EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL1_Pos)) /* Assigment of value for VTR_LVL1 in the EC_REG_BANK_GPIO_BANK_PWR register */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL2_Pos _UINT32_(1)                                          /* (EC_REG_BANK_GPIO_BANK_PWR) Voltage value on VTR2. This bit is set by hardware after a VTR Power On Reset, but may be overridden by software.\n        It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted. Write access is determined by bit 7.\n       1=VTR2 is powered by 3.3V\n                0=VTR2 is powered by 1.8V. Position */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL2_Msk (_UINT32_(0x1) << EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL2_Pos) /* (EC_REG_BANK_GPIO_BANK_PWR) Voltage value on VTR2. This bit is set by hardware after a VTR Power On Reset, but may be overridden by software.\n        It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted. Write access is determined by bit 7.\n       1=VTR2 is powered by 3.3V\n                0=VTR2 is powered by 1.8V. Mask */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL2(value) (EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL2_Msk & (_UINT32_(value) << EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL2_Pos)) /* Assigment of value for VTR_LVL2 in the EC_REG_BANK_GPIO_BANK_PWR register */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL3_Pos _UINT32_(2)                                          /* (EC_REG_BANK_GPIO_BANK_PWR) Voltage value on VTR3. This bit is set by hardware after a VTR Power On Reset, but may be overridden by software.\n           It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted. Write access is determined by bit 7.\n              1=VTR3 is powered by 3.3V\n                 0=VTR3 is powered by 1.8V. Position */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL3_Msk (_UINT32_(0x1) << EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL3_Pos) /* (EC_REG_BANK_GPIO_BANK_PWR) Voltage value on VTR3. This bit is set by hardware after a VTR Power On Reset, but may be overridden by software.\n           It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted. Write access is determined by bit 7.\n              1=VTR3 is powered by 3.3V\n                 0=VTR3 is powered by 1.8V. Mask */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL3(value) (EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL3_Msk & (_UINT32_(value) << EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL3_Pos)) /* Assigment of value for VTR_LVL3 in the EC_REG_BANK_GPIO_BANK_PWR register */
#define EC_REG_BANK_GPIO_BANK_PWR_GPIO_BANK_PWR_LOCK_Pos _UINT32_(7)                                          /* (EC_REG_BANK_GPIO_BANK_PWR) GPIO Bank Power Lock. 0: VTR_LEVEL bits[2:0] and GPIO Bank Power Lock bit are R/W\n        1 = VTR_LEVEL bits[2:0] and GPIO Bank Power Lock bit are Read Only. Position */
#define EC_REG_BANK_GPIO_BANK_PWR_GPIO_BANK_PWR_LOCK_Msk (_UINT32_(0x1) << EC_REG_BANK_GPIO_BANK_PWR_GPIO_BANK_PWR_LOCK_Pos) /* (EC_REG_BANK_GPIO_BANK_PWR) GPIO Bank Power Lock. 0: VTR_LEVEL bits[2:0] and GPIO Bank Power Lock bit are R/W\n        1 = VTR_LEVEL bits[2:0] and GPIO Bank Power Lock bit are Read Only. Mask */
#define EC_REG_BANK_GPIO_BANK_PWR_GPIO_BANK_PWR_LOCK(value) (EC_REG_BANK_GPIO_BANK_PWR_GPIO_BANK_PWR_LOCK_Msk & (_UINT32_(value) << EC_REG_BANK_GPIO_BANK_PWR_GPIO_BANK_PWR_LOCK_Pos)) /* Assigment of value for GPIO_BANK_PWR_LOCK in the EC_REG_BANK_GPIO_BANK_PWR register */
#define EC_REG_BANK_GPIO_BANK_PWR_Msk         _UINT32_(0x00000087)                                 /* (EC_REG_BANK_GPIO_BANK_PWR) Register Mask  */

#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL_Pos _UINT32_(0)                                          /* (EC_REG_BANK_GPIO_BANK_PWR Position) Voltage value on VTRx. This bit is set by hardware after a VTR Power On Reset, but may be overridden by software.\n               It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted. Write access is determined by bit 7.\n          x=VTRx is powered by 3.3V\n               x=VTRx is powered by x.8V. */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL_Msk (_UINT32_(0x7) << EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL_Pos) /* (EC_REG_BANK_GPIO_BANK_PWR Mask) VTR_LVL */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL(value) (EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL_Msk & (_UINT32_(value) << EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL_Pos)) 

/* -------- EC_REG_BANK_JTAG_MCFG : (EC_REG_BANK Offset: 0x70) (R/W 32) JTAG Master Configuration Register -------- */
#define EC_REG_BANK_JTAG_MCFG_RESETVALUE      _UINT32_(0x03)                                       /*  (EC_REG_BANK_JTAG_MCFG) JTAG Master Configuration Register  Reset Value */

#define EC_REG_BANK_JTAG_MCFG_JTM_CLK_Pos     _UINT32_(0)                                          /* (EC_REG_BANK_JTAG_MCFG) This field determines the JTAG Master clock rate, derived from the 48MHz master clock.\n                7=375KHz; 6=750KHz; 5=1.5Mhz; 4=3Mhz; 3=6Mhz; 2=12Mhz; 1=24MHz; 0=Reserved. Position */
#define EC_REG_BANK_JTAG_MCFG_JTM_CLK_Msk     (_UINT32_(0x7) << EC_REG_BANK_JTAG_MCFG_JTM_CLK_Pos) /* (EC_REG_BANK_JTAG_MCFG) This field determines the JTAG Master clock rate, derived from the 48MHz master clock.\n                7=375KHz; 6=750KHz; 5=1.5Mhz; 4=3Mhz; 3=6Mhz; 2=12Mhz; 1=24MHz; 0=Reserved. Mask */
#define EC_REG_BANK_JTAG_MCFG_JTM_CLK(value)  (EC_REG_BANK_JTAG_MCFG_JTM_CLK_Msk & (_UINT32_(value) << EC_REG_BANK_JTAG_MCFG_JTM_CLK_Pos)) /* Assigment of value for JTM_CLK in the EC_REG_BANK_JTAG_MCFG register */
#define   EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_375KHz_Val _UINT32_(0x7)                                        /* (EC_REG_BANK_JTAG_MCFG) 7=375KHz  */
#define   EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_750KHz_Val _UINT32_(0x6)                                        /* (EC_REG_BANK_JTAG_MCFG) 6=750KHz  */
#define   EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_1MHz_Val _UINT32_(0x5)                                        /* (EC_REG_BANK_JTAG_MCFG) 5=1.5Mhz  */
#define   EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_3Mhz_Val _UINT32_(0x4)                                        /* (EC_REG_BANK_JTAG_MCFG) 4=3Mhz  */
#define   EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_6Mhz_Val _UINT32_(0x3)                                        /* (EC_REG_BANK_JTAG_MCFG) 3=6Mhz  */
#define   EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_12Mhz_Val _UINT32_(0x2)                                        /* (EC_REG_BANK_JTAG_MCFG) 2=12Mhz  */
#define   EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_24MHz_Val _UINT32_(0x1)                                        /* (EC_REG_BANK_JTAG_MCFG) 1=24MHz  */
#define EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_375KHz (EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_375KHz_Val << EC_REG_BANK_JTAG_MCFG_JTM_CLK_Pos) /* (EC_REG_BANK_JTAG_MCFG) 7=375KHz Position  */
#define EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_750KHz (EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_750KHz_Val << EC_REG_BANK_JTAG_MCFG_JTM_CLK_Pos) /* (EC_REG_BANK_JTAG_MCFG) 6=750KHz Position  */
#define EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_1MHz (EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_1MHz_Val << EC_REG_BANK_JTAG_MCFG_JTM_CLK_Pos) /* (EC_REG_BANK_JTAG_MCFG) 5=1.5Mhz Position  */
#define EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_3Mhz (EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_3Mhz_Val << EC_REG_BANK_JTAG_MCFG_JTM_CLK_Pos) /* (EC_REG_BANK_JTAG_MCFG) 4=3Mhz Position  */
#define EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_6Mhz (EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_6Mhz_Val << EC_REG_BANK_JTAG_MCFG_JTM_CLK_Pos) /* (EC_REG_BANK_JTAG_MCFG) 3=6Mhz Position  */
#define EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_12Mhz (EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_12Mhz_Val << EC_REG_BANK_JTAG_MCFG_JTM_CLK_Pos) /* (EC_REG_BANK_JTAG_MCFG) 2=12Mhz Position  */
#define EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_24MHz (EC_REG_BANK_JTAG_MCFG_JTM_CLK_JTM_CLK_24MHz_Val << EC_REG_BANK_JTAG_MCFG_JTM_CLK_Pos) /* (EC_REG_BANK_JTAG_MCFG) 1=24MHz Position  */
#define EC_REG_BANK_JTAG_MCFG_MAS_SLV_Pos     _UINT32_(3)                                          /* (EC_REG_BANK_JTAG_MCFG) This bit controls the direction of the JTAG port. 1=The JTAG Port is configured as a Master\n          0=The JTAG Port is configures as a Slave. Position */
#define EC_REG_BANK_JTAG_MCFG_MAS_SLV_Msk     (_UINT32_(0x1) << EC_REG_BANK_JTAG_MCFG_MAS_SLV_Pos) /* (EC_REG_BANK_JTAG_MCFG) This bit controls the direction of the JTAG port. 1=The JTAG Port is configured as a Master\n          0=The JTAG Port is configures as a Slave. Mask */
#define EC_REG_BANK_JTAG_MCFG_MAS_SLV(value)  (EC_REG_BANK_JTAG_MCFG_MAS_SLV_Msk & (_UINT32_(value) << EC_REG_BANK_JTAG_MCFG_MAS_SLV_Pos)) /* Assigment of value for MAS_SLV in the EC_REG_BANK_JTAG_MCFG register */
#define EC_REG_BANK_JTAG_MCFG_Msk             _UINT32_(0x0000000F)                                 /* (EC_REG_BANK_JTAG_MCFG) Register Mask  */


/* -------- EC_REG_BANK_JTAG_MSTS : (EC_REG_BANK Offset: 0x74) ( R/ 32) JTAG Master Status Register -------- */
#define EC_REG_BANK_JTAG_MSTS_RESETVALUE      _UINT32_(0x00)                                       /*  (EC_REG_BANK_JTAG_MSTS) JTAG Master Status Register  Reset Value */

#define EC_REG_BANK_JTAG_MSTS_JTM_DONE_Pos    _UINT32_(0)                                          /* (EC_REG_BANK_JTAG_MSTS) This bit is set to '1b' when the JTAG Master Command Register is written. It becomes '0b' when shifting has completed.\n         Software can poll this bit to determine when a command has completed and it is therefore safe to remove the data in the JTAG Master TDO\n        Register and load new data into the JTAG Master TMS Register and the JTAG Master TDI Register. Position */
#define EC_REG_BANK_JTAG_MSTS_JTM_DONE_Msk    (_UINT32_(0x1) << EC_REG_BANK_JTAG_MSTS_JTM_DONE_Pos) /* (EC_REG_BANK_JTAG_MSTS) This bit is set to '1b' when the JTAG Master Command Register is written. It becomes '0b' when shifting has completed.\n         Software can poll this bit to determine when a command has completed and it is therefore safe to remove the data in the JTAG Master TDO\n        Register and load new data into the JTAG Master TMS Register and the JTAG Master TDI Register. Mask */
#define EC_REG_BANK_JTAG_MSTS_JTM_DONE(value) (EC_REG_BANK_JTAG_MSTS_JTM_DONE_Msk & (_UINT32_(value) << EC_REG_BANK_JTAG_MSTS_JTM_DONE_Pos)) /* Assigment of value for JTM_DONE in the EC_REG_BANK_JTAG_MSTS register */
#define EC_REG_BANK_JTAG_MSTS_Msk             _UINT32_(0x00000001)                                 /* (EC_REG_BANK_JTAG_MSTS) Register Mask  */


/* -------- EC_REG_BANK_JTAG_MTDO : (EC_REG_BANK Offset: 0x78) (R/W 32) JTAG Master TDO Register -------- */
#define EC_REG_BANK_JTAG_MTDO_RESETVALUE      _UINT32_(0x00)                                       /*  (EC_REG_BANK_JTAG_MTDO) JTAG Master TDO Register  Reset Value */

#define EC_REG_BANK_JTAG_MTDO_JTM_TDO_Pos     _UINT32_(0)                                          /* (EC_REG_BANK_JTAG_MTDO) When the JTAG Master Command Register is written, from 1 to 32 bits are shifted into this register, starting with bit 0,\n        from the JTAG_TDO pin. Shifting is at the rate determined by the JTM_CLK field in the JTAG Master Configuration Register. Position */
#define EC_REG_BANK_JTAG_MTDO_JTM_TDO_Msk     (_UINT32_(0xFFFFFFFF) << EC_REG_BANK_JTAG_MTDO_JTM_TDO_Pos) /* (EC_REG_BANK_JTAG_MTDO) When the JTAG Master Command Register is written, from 1 to 32 bits are shifted into this register, starting with bit 0,\n        from the JTAG_TDO pin. Shifting is at the rate determined by the JTM_CLK field in the JTAG Master Configuration Register. Mask */
#define EC_REG_BANK_JTAG_MTDO_JTM_TDO(value)  (EC_REG_BANK_JTAG_MTDO_JTM_TDO_Msk & (_UINT32_(value) << EC_REG_BANK_JTAG_MTDO_JTM_TDO_Pos)) /* Assigment of value for JTM_TDO in the EC_REG_BANK_JTAG_MTDO register */
#define EC_REG_BANK_JTAG_MTDO_Msk             _UINT32_(0xFFFFFFFF)                                 /* (EC_REG_BANK_JTAG_MTDO) Register Mask  */


/* -------- EC_REG_BANK_JTAG_MTDI : (EC_REG_BANK Offset: 0x7C) (R/W 32) JTAG Master TDI Register -------- */
#define EC_REG_BANK_JTAG_MTDI_RESETVALUE      _UINT32_(0x00)                                       /*  (EC_REG_BANK_JTAG_MTDI) JTAG Master TDI Register  Reset Value */

#define EC_REG_BANK_JTAG_MTDI_JTM_TDI_Pos     _UINT32_(0)                                          /* (EC_REG_BANK_JTAG_MTDI) When the JTAG Master Command Register is written, from 1 to 32 bits are shifted out of this register, starting with bit 0,\n       onto the JTAG_TDI pin. Shifting is at the rate determined by the JTM_CLK field in the JTAG Master Configuration Register. Position */
#define EC_REG_BANK_JTAG_MTDI_JTM_TDI_Msk     (_UINT32_(0xFFFFFFFF) << EC_REG_BANK_JTAG_MTDI_JTM_TDI_Pos) /* (EC_REG_BANK_JTAG_MTDI) When the JTAG Master Command Register is written, from 1 to 32 bits are shifted out of this register, starting with bit 0,\n       onto the JTAG_TDI pin. Shifting is at the rate determined by the JTM_CLK field in the JTAG Master Configuration Register. Mask */
#define EC_REG_BANK_JTAG_MTDI_JTM_TDI(value)  (EC_REG_BANK_JTAG_MTDI_JTM_TDI_Msk & (_UINT32_(value) << EC_REG_BANK_JTAG_MTDI_JTM_TDI_Pos)) /* Assigment of value for JTM_TDI in the EC_REG_BANK_JTAG_MTDI register */
#define EC_REG_BANK_JTAG_MTDI_Msk             _UINT32_(0xFFFFFFFF)                                 /* (EC_REG_BANK_JTAG_MTDI) Register Mask  */


/* -------- EC_REG_BANK_JTAG_MTMS : (EC_REG_BANK Offset: 0x80) (R/W 32) JTAG Master TMS Register -------- */
#define EC_REG_BANK_JTAG_MTMS_RESETVALUE      _UINT32_(0x00)                                       /*  (EC_REG_BANK_JTAG_MTMS) JTAG Master TMS Register  Reset Value */

#define EC_REG_BANK_JTAG_MTMS_JTM_TMS_Pos     _UINT32_(0)                                          /* (EC_REG_BANK_JTAG_MTMS) When the JTAG Master Command Register is written, from 1 to 32 bits are shifted out of this register, starting with bit 0,\n         onto the JTAG_TMS pin. Shifting is at the rate determined by the JTM_CLK field in the JTAG Master Configuration Register. Position */
#define EC_REG_BANK_JTAG_MTMS_JTM_TMS_Msk     (_UINT32_(0xFFFFFFFF) << EC_REG_BANK_JTAG_MTMS_JTM_TMS_Pos) /* (EC_REG_BANK_JTAG_MTMS) When the JTAG Master Command Register is written, from 1 to 32 bits are shifted out of this register, starting with bit 0,\n         onto the JTAG_TMS pin. Shifting is at the rate determined by the JTM_CLK field in the JTAG Master Configuration Register. Mask */
#define EC_REG_BANK_JTAG_MTMS_JTM_TMS(value)  (EC_REG_BANK_JTAG_MTMS_JTM_TMS_Msk & (_UINT32_(value) << EC_REG_BANK_JTAG_MTMS_JTM_TMS_Pos)) /* Assigment of value for JTM_TMS in the EC_REG_BANK_JTAG_MTMS register */
#define EC_REG_BANK_JTAG_MTMS_Msk             _UINT32_(0xFFFFFFFF)                                 /* (EC_REG_BANK_JTAG_MTMS) Register Mask  */


/* -------- EC_REG_BANK_JTAG_MCMD : (EC_REG_BANK Offset: 0x84) (R/W 32) JTAG Master Command Register -------- */
#define EC_REG_BANK_JTAG_MCMD_RESETVALUE      _UINT32_(0x00)                                       /*  (EC_REG_BANK_JTAG_MCMD) JTAG Master Command Register  Reset Value */

#define EC_REG_BANK_JTAG_MCMD_JTM_COUNT_Pos   _UINT32_(0)                                          /* (EC_REG_BANK_JTAG_MCMD) If the JTAG Port is configured as a Master, writing this register starts clocking and shifting on the JTAG port. The JTAG\n         Master port will shift JTM_COUNT+1 times, so writing a '0h' will shift 1 bit, and writing '31h' will shift 32 bits. The signal JTAG_CLK\n             will cycle JTM_COUNT+1 times. The contents of the JTAG Master TMS Register and the JTAG Master TDI Register will be shifted out on\n         the falling edge of JTAG_CLK and the.JTAG Master TDO Register will get shifted in on the rising edge of JTAG_CLK.\n                 If the JTAG Port is configured as a Slave, writing this register has no effect. Position */
#define EC_REG_BANK_JTAG_MCMD_JTM_COUNT_Msk   (_UINT32_(0x1F) << EC_REG_BANK_JTAG_MCMD_JTM_COUNT_Pos) /* (EC_REG_BANK_JTAG_MCMD) If the JTAG Port is configured as a Master, writing this register starts clocking and shifting on the JTAG port. The JTAG\n         Master port will shift JTM_COUNT+1 times, so writing a '0h' will shift 1 bit, and writing '31h' will shift 32 bits. The signal JTAG_CLK\n             will cycle JTM_COUNT+1 times. The contents of the JTAG Master TMS Register and the JTAG Master TDI Register will be shifted out on\n         the falling edge of JTAG_CLK and the.JTAG Master TDO Register will get shifted in on the rising edge of JTAG_CLK.\n                 If the JTAG Port is configured as a Slave, writing this register has no effect. Mask */
#define EC_REG_BANK_JTAG_MCMD_JTM_COUNT(value) (EC_REG_BANK_JTAG_MCMD_JTM_COUNT_Msk & (_UINT32_(value) << EC_REG_BANK_JTAG_MCMD_JTM_COUNT_Pos)) /* Assigment of value for JTM_COUNT in the EC_REG_BANK_JTAG_MCMD register */
#define EC_REG_BANK_JTAG_MCMD_Msk             _UINT32_(0x0000001F)                                 /* (EC_REG_BANK_JTAG_MCMD) Register Mask  */


/** \brief EC_REG_BANK register offsets definitions */
#define EC_REG_BANK_AHB_ERR_ADDR_REG_OFST _UINT32_(0x04)      /* (EC_REG_BANK_AHB_ERR_ADDR) AHB Error Address [0:0] AHB_ERR_ADDR, In priority order:\n        1. AHB address is registered when an AHB error occurs on the processor's AHB master port and the register value was\n          already 0. This way only the first address to generate an exception is captured.\n         2. The processor can clear this register by writing any 32-bit value to this register. Offset */
#define EC_REG_BANK_AHB_ERR_CTRL_REG_OFST _UINT32_(0x14)      /* (EC_REG_BANK_AHB_ERR_CTRL) AHB Error Control [0:0] AHB_ERROR_DISABLE,\n       0: EC memory exceptions are enabled. 1: EC memory exceptions are disabled. Offset */
#define EC_REG_BANK_INTR_CTRL_REG_OFST _UINT32_(0x18)      /* (EC_REG_BANK_INTR_CTRL) Interrupt Control [0:0] NVIC_EN (NVIC_EN) \n       This bit enables Alternate NVIC IRQ's Vectors. The Alternate NVIC Vectors provides each interrupt event with a dedicated (direct) NVIC vector.\n         0 = Alternate NVIC vectors disabled, 1= Alternate NVIC vectors enabled Offset */
#define EC_REG_BANK_ETM_CTRL_REG_OFST  _UINT32_(0x1C)      /* (EC_REG_BANK_ETM_CTRL) ETM TRACE Enable [0:0] TRACE_EN (TRACE_EN) \n       This bit enables the ARM TRACE debug port (ETM/ITM). The Trace Debug Interface pins are forced to the TRACE functions.\n       0 = ARM TRACE port disabled, 1= ARM TRACE port enabled Offset */
#define EC_REG_BANK_DEBUG_CTRL_REG_OFST _UINT32_(0x20)      /* (EC_REG_BANK_DEBUG_CTRL) Debug Enable Register Offset */
#define EC_REG_BANK_OTP_LOCK_REG_OFST  _UINT32_(0x24)      /* (EC_REG_BANK_OTP_LOCK) OTP Lock Offset */
#define EC_REG_BANK_WDT_CNT_REG_OFST   _UINT32_(0x28)      /* (EC_REG_BANK_WDT_CNT) WDT Event Count [3:0] WDT_COUNT (WDT_COUNT) These EC R/W bits are cleared to 0 on VCC1 POR,\n       but not on a WDT Note: This field is written by Boot ROM firmware to indicate the number of times a WDT fired before loading a good EC code image. Offset */
#define EC_REG_BANK_AESH_BSWAP_CTRL_REG_OFST _UINT32_(0x2C)      /* (EC_REG_BANK_AESH_BSWAP_CTRL) AES HASH Byte Swap Control Register. Offset */
#define EC_REG_BANK_SYS_SHUTDWN_RST_REG_OFST _UINT32_(0x38)      /* (EC_REG_BANK_SYS_SHUTDWN_RST) AES HASH Byte Swap Control Register. Offset */
#define EC_REG_BANK_PECI_DIS_REG_OFST  _UINT32_(0x40)      /* (EC_REG_BANK_PECI_DIS) PECI Disable Offset */
#define EC_REG_BANK_CRYPTO_SRST_REG_OFST _UINT32_(0x5C)      /* (EC_REG_BANK_CRYPTO_SRST) System Shutdown Reset Offset */
#define EC_REG_BANK_GPIO_BANK_PWR_REG_OFST _UINT32_(0x64)      /* (EC_REG_BANK_GPIO_BANK_PWR) GPIO Bank Power Register Offset */
#define EC_REG_BANK_JTAG_MCFG_REG_OFST _UINT32_(0x70)      /* (EC_REG_BANK_JTAG_MCFG) JTAG Master Configuration Register Offset */
#define EC_REG_BANK_JTAG_MSTS_REG_OFST _UINT32_(0x74)      /* (EC_REG_BANK_JTAG_MSTS) JTAG Master Status Register Offset */
#define EC_REG_BANK_JTAG_MTDO_REG_OFST _UINT32_(0x78)      /* (EC_REG_BANK_JTAG_MTDO) JTAG Master TDO Register Offset */
#define EC_REG_BANK_JTAG_MTDI_REG_OFST _UINT32_(0x7C)      /* (EC_REG_BANK_JTAG_MTDI) JTAG Master TDI Register Offset */
#define EC_REG_BANK_JTAG_MTMS_REG_OFST _UINT32_(0x80)      /* (EC_REG_BANK_JTAG_MTMS) JTAG Master TMS Register Offset */
#define EC_REG_BANK_JTAG_MCMD_REG_OFST _UINT32_(0x84)      /* (EC_REG_BANK_JTAG_MCMD) JTAG Master Command Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief EC_REG_BANK register API structure */
typedef struct
{  /* This block is designed to be accessed internally by the EC via the register interface. */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       EC_REG_BANK_AHB_ERR_ADDR; /**< Offset: 0x04 (R/W  32) AHB Error Address [0:0] AHB_ERR_ADDR, In priority order:\n        1. AHB address is registered when an AHB error occurs on the processor's AHB master port and the register value was\n          already 0. This way only the first address to generate an exception is captured.\n         2. The processor can clear this register by writing any 32-bit value to this register. */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint8_t                        EC_REG_BANK_AHB_ERR_CTRL; /**< Offset: 0x14 (R/W  8) AHB Error Control [0:0] AHB_ERROR_DISABLE,\n       0: EC memory exceptions are enabled. 1: EC memory exceptions are disabled. */
  __I   uint8_t                        Reserved3[0x03];
  __IO  uint32_t                       EC_REG_BANK_INTR_CTRL; /**< Offset: 0x18 (R/W  32) Interrupt Control [0:0] NVIC_EN (NVIC_EN) \n       This bit enables Alternate NVIC IRQ's Vectors. The Alternate NVIC Vectors provides each interrupt event with a dedicated (direct) NVIC vector.\n         0 = Alternate NVIC vectors disabled, 1= Alternate NVIC vectors enabled */
  __IO  uint32_t                       EC_REG_BANK_ETM_CTRL; /**< Offset: 0x1C (R/W  32) ETM TRACE Enable [0:0] TRACE_EN (TRACE_EN) \n       This bit enables the ARM TRACE debug port (ETM/ITM). The Trace Debug Interface pins are forced to the TRACE functions.\n       0 = ARM TRACE port disabled, 1= ARM TRACE port enabled */
  __IO  uint32_t                       EC_REG_BANK_DEBUG_CTRL; /**< Offset: 0x20 (R/W  32) Debug Enable Register */
  __IO  uint32_t                       EC_REG_BANK_OTP_LOCK; /**< Offset: 0x24 (R/W  32) OTP Lock */
  __IO  uint32_t                       EC_REG_BANK_WDT_CNT; /**< Offset: 0x28 (R/W  32) WDT Event Count [3:0] WDT_COUNT (WDT_COUNT) These EC R/W bits are cleared to 0 on VCC1 POR,\n       but not on a WDT Note: This field is written by Boot ROM firmware to indicate the number of times a WDT fired before loading a good EC code image. */
  __IO  uint32_t                       EC_REG_BANK_AESH_BSWAP_CTRL; /**< Offset: 0x2C (R/W  32) AES HASH Byte Swap Control Register. */
  __I   uint8_t                        Reserved4[0x08];
  __IO  uint32_t                       EC_REG_BANK_SYS_SHUTDWN_RST; /**< Offset: 0x38 (R/W  32) AES HASH Byte Swap Control Register. */
  __I   uint8_t                        Reserved5[0x04];
  __IO  uint32_t                       EC_REG_BANK_PECI_DIS; /**< Offset: 0x40 (R/W  32) PECI Disable */
  __I   uint8_t                        Reserved6[0x18];
  __IO  uint32_t                       EC_REG_BANK_CRYPTO_SRST; /**< Offset: 0x5C (R/W  32) System Shutdown Reset */
  __I   uint8_t                        Reserved7[0x04];
  __IO  uint32_t                       EC_REG_BANK_GPIO_BANK_PWR; /**< Offset: 0x64 (R/W  32) GPIO Bank Power Register */
  __I   uint8_t                        Reserved8[0x08];
  __IO  uint32_t                       EC_REG_BANK_JTAG_MCFG; /**< Offset: 0x70 (R/W  32) JTAG Master Configuration Register */
  __I   uint32_t                       EC_REG_BANK_JTAG_MSTS; /**< Offset: 0x74 (R/   32) JTAG Master Status Register */
  __IO  uint32_t                       EC_REG_BANK_JTAG_MTDO; /**< Offset: 0x78 (R/W  32) JTAG Master TDO Register */
  __IO  uint32_t                       EC_REG_BANK_JTAG_MTDI; /**< Offset: 0x7C (R/W  32) JTAG Master TDI Register */
  __IO  uint32_t                       EC_REG_BANK_JTAG_MTMS; /**< Offset: 0x80 (R/W  32) JTAG Master TMS Register */
  __IO  uint32_t                       EC_REG_BANK_JTAG_MCMD; /**< Offset: 0x84 (R/W  32) JTAG Master Command Register */
} ec_reg_bank_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC1702Q_EC_REG_BANK_COMPONENT_H_ */
