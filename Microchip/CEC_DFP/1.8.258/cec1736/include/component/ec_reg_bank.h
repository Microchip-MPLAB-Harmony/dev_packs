/*
 * Component description for EC_REG_BANK
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description version 2023-01-17T13:00:30Z */
#ifndef _CEC_EC_REG_BANK_COMPONENT_H_
#define _CEC_EC_REG_BANK_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR EC_REG_BANK                                  */
/* ************************************************************************** */

/* -------- EC_REG_BANK_SRAM_CNFG : (EC_REG_BANK Offset: 0x00) (R/W 8) SRAM Configuration Register -------- */
#define EC_REG_BANK_SRAM_CNFG_RESETVALUE      _UINT8_(0x00)                                        /*  (EC_REG_BANK_SRAM_CNFG) SRAM Configuration Register  Reset Value */

#define EC_REG_BANK_SRAM_CNFG_SRAM_SIZE_Pos   _UINT8_(0)                                           /* (EC_REG_BANK_SRAM_CNFG) SRAM Configuration Register:     0: 384KB         (352k Code, 32k Data)    1: 320kB         (288k Code, 32k Data)    2: 256kB         (224k Code, 32k Data)    3: Illegal 256kB (224k Code, 32k Data) Position */
#define EC_REG_BANK_SRAM_CNFG_SRAM_SIZE_Msk   (_UINT8_(0x3) << EC_REG_BANK_SRAM_CNFG_SRAM_SIZE_Pos) /* (EC_REG_BANK_SRAM_CNFG) SRAM Configuration Register:     0: 384KB         (352k Code, 32k Data)    1: 320kB         (288k Code, 32k Data)    2: 256kB         (224k Code, 32k Data)    3: Illegal 256kB (224k Code, 32k Data) Mask */
#define EC_REG_BANK_SRAM_CNFG_SRAM_SIZE(value) (EC_REG_BANK_SRAM_CNFG_SRAM_SIZE_Msk & (_UINT8_(value) << EC_REG_BANK_SRAM_CNFG_SRAM_SIZE_Pos)) /* Assigment of value for SRAM_SIZE in the EC_REG_BANK_SRAM_CNFG register */
#define EC_REG_BANK_SRAM_CNFG_Msk             _UINT8_(0x03)                                        /* (EC_REG_BANK_SRAM_CNFG) Register Mask  */


/* -------- EC_REG_BANK_AHB_ERR_ADDR : (EC_REG_BANK Offset: 0x04) (R/W 32) AHB Error Address [0:0] -------- */
#define EC_REG_BANK_AHB_ERR_ADDR_RESETVALUE   _UINT32_(0x00)                                       /*  (EC_REG_BANK_AHB_ERR_ADDR) AHB Error Address [0:0]  Reset Value */

#define EC_REG_BANK_AHB_ERR_ADDR_Msk          _UINT32_(0x00000000)                                 /* (EC_REG_BANK_AHB_ERR_ADDR) Register Mask  */


/* -------- EC_REG_BANK_AHB_ERR_CTRL : (EC_REG_BANK Offset: 0x14) (R/W 8) AHB Error Control [0:0] AHB_ERROR_DISABLE, 0: EC memory exceptions are enabled. 1: EC memory exceptions are disabled. -------- */
#define EC_REG_BANK_AHB_ERR_CTRL_RESETVALUE   _UINT8_(0x00)                                        /*  (EC_REG_BANK_AHB_ERR_CTRL) AHB Error Control [0:0] AHB_ERROR_DISABLE, 0: EC memory exceptions are enabled. 1: EC memory exceptions are disabled.  Reset Value */

#define EC_REG_BANK_AHB_ERR_CTRL_Msk          _UINT8_(0x00)                                        /* (EC_REG_BANK_AHB_ERR_CTRL) Register Mask  */


/* -------- EC_REG_BANK_INTR_CTRL : (EC_REG_BANK Offset: 0x18) (R/W 32) Interrupt Control [0:0] NVIC_EN (NVIC_EN) This bit enables Alternate NVIC IRQ's Vectors. The Alternate NVIC Vectors provides each interrupt event with a dedicated (direct) NVIC vector.            0 = Alternate NVIC vectors disabled, 1= Alternate NVIC vectors enabled -------- */
#define EC_REG_BANK_INTR_CTRL_RESETVALUE      _UINT32_(0x01)                                       /*  (EC_REG_BANK_INTR_CTRL) Interrupt Control [0:0] NVIC_EN (NVIC_EN) This bit enables Alternate NVIC IRQ's Vectors. The Alternate NVIC Vectors provides each interrupt event with a dedicated (direct) NVIC vector.            0 = Alternate NVIC vectors disabled, 1= Alternate NVIC vectors enabled  Reset Value */

#define EC_REG_BANK_INTR_CTRL_Msk             _UINT32_(0x00000000)                                 /* (EC_REG_BANK_INTR_CTRL) Register Mask  */


/* -------- EC_REG_BANK_ETM_CTRL : (EC_REG_BANK Offset: 0x1C) (R/W 32) ETM TRACE Enable [0:0] TRACE_EN (TRACE_EN) This bit enables the ARM TRACE debug port (ETM/ITM). The Trace Debug Interface pins are forced to the TRACE functions.            0 = ARM TRACE port disabled, 1= ARM TRACE port enabled -------- */
#define EC_REG_BANK_ETM_CTRL_RESETVALUE       _UINT32_(0x00)                                       /*  (EC_REG_BANK_ETM_CTRL) ETM TRACE Enable [0:0] TRACE_EN (TRACE_EN) This bit enables the ARM TRACE debug port (ETM/ITM). The Trace Debug Interface pins are forced to the TRACE functions.            0 = ARM TRACE port disabled, 1= ARM TRACE port enabled  Reset Value */

#define EC_REG_BANK_ETM_CTRL_Msk              _UINT32_(0x00000000)                                 /* (EC_REG_BANK_ETM_CTRL) Register Mask  */


/* -------- EC_REG_BANK_DEBUG_CTRL : (EC_REG_BANK Offset: 0x20) (R/W 32) Debug Enable Register -------- */
#define EC_REG_BANK_DEBUG_CTRL_RESETVALUE     _UINT32_(0x80)                                       /*  (EC_REG_BANK_DEBUG_CTRL) Debug Enable Register  Reset Value */

#define EC_REG_BANK_DEBUG_CTRL_JTAG_EN_Pos    _UINT32_(0)                                          /* (EC_REG_BANK_DEBUG_CTRL) DEBUG_EN (JTAG_EN) This bit enables the JTAG/SWD debug port.               0= JTAG/SWD port disabled. JTAG/SWD cannot be enabled (i.e., the TRST# pin is ignored and the JTAG signals remain in their non-JTAG state)               1= JTAG/SWD port enabled. A high on TRST# enables JTAG or SWD, as determined by SWD_EN. Position */
#define EC_REG_BANK_DEBUG_CTRL_JTAG_EN_Msk    (_UINT32_(0x1) << EC_REG_BANK_DEBUG_CTRL_JTAG_EN_Pos) /* (EC_REG_BANK_DEBUG_CTRL) DEBUG_EN (JTAG_EN) This bit enables the JTAG/SWD debug port.               0= JTAG/SWD port disabled. JTAG/SWD cannot be enabled (i.e., the TRST# pin is ignored and the JTAG signals remain in their non-JTAG state)               1= JTAG/SWD port enabled. A high on TRST# enables JTAG or SWD, as determined by SWD_EN. Mask */
#define EC_REG_BANK_DEBUG_CTRL_JTAG_EN(value) (EC_REG_BANK_DEBUG_CTRL_JTAG_EN_Msk & (_UINT32_(value) << EC_REG_BANK_DEBUG_CTRL_JTAG_EN_Pos)) /* Assigment of value for JTAG_EN in the EC_REG_BANK_DEBUG_CTRL register */
#define EC_REG_BANK_DEBUG_CTRL_DBG_PIN_CFG_Pos _UINT32_(1)                                          /* (EC_REG_BANK_DEBUG_CTRL) This field determines which pins are affected by the TRST# debug enable pin.      3=Reserved      2=The pins associated with the JTAG TCK and TMS switch to the debug interface when TRST# is de-asserted high. The pins      associated with TDI and TDO remain controlled by the associated GPIO. This setting should be used when the ARM Serial      Wire Debug (SWD) is required for debugging and the Serial Wire Viewer is not required      1=The pins associated with the JTAG TCK, TMS and TDO switch to the debug interface when TRST# is de-asserted high. The pin      associated with TDI remains controlled by the associated GPIO. This setting should be used when the ARM Serial Wire Debug      (SWD) and Serial Wire Viewer (SWV) are both required for debugging      0=All four pins associated with JTAG (TCK, TMS, TDI and TDO) switch to the debug interface when TRST# is de-asserted high.      This setting should be used when the JTAG TAP controller is required for debugging. Position */
#define EC_REG_BANK_DEBUG_CTRL_DBG_PIN_CFG_Msk (_UINT32_(0x3) << EC_REG_BANK_DEBUG_CTRL_DBG_PIN_CFG_Pos) /* (EC_REG_BANK_DEBUG_CTRL) This field determines which pins are affected by the TRST# debug enable pin.      3=Reserved      2=The pins associated with the JTAG TCK and TMS switch to the debug interface when TRST# is de-asserted high. The pins      associated with TDI and TDO remain controlled by the associated GPIO. This setting should be used when the ARM Serial      Wire Debug (SWD) is required for debugging and the Serial Wire Viewer is not required      1=The pins associated with the JTAG TCK, TMS and TDO switch to the debug interface when TRST# is de-asserted high. The pin      associated with TDI remains controlled by the associated GPIO. This setting should be used when the ARM Serial Wire Debug      (SWD) and Serial Wire Viewer (SWV) are both required for debugging      0=All four pins associated with JTAG (TCK, TMS, TDI and TDO) switch to the debug interface when TRST# is de-asserted high.      This setting should be used when the JTAG TAP controller is required for debugging. Mask */
#define EC_REG_BANK_DEBUG_CTRL_DBG_PIN_CFG(value) (EC_REG_BANK_DEBUG_CTRL_DBG_PIN_CFG_Msk & (_UINT32_(value) << EC_REG_BANK_DEBUG_CTRL_DBG_PIN_CFG_Pos)) /* Assigment of value for DBG_PIN_CFG in the EC_REG_BANK_DEBUG_CTRL register */
#define   EC_REG_BANK_DEBUG_CTRL_DBG_PIN_CFG_JTAG_TCK_TMS_Val _UINT32_(0x2)                                        /* (EC_REG_BANK_DEBUG_CTRL) 2=The pins associated with the JTAG TCK and TMS switch to the debug interface when TRST# is de-asserted high. The pins           associated with TDI and TDO remain controlled by the associated GPIO. This setting should be used when the ARM Serial          Wire Debug (SWD) is required for debugging and the Serial Wire Viewer is not required   */
#define   EC_REG_BANK_DEBUG_CTRL_DBG_PIN_CFG_JTAG_TCK_TMS_TDO_Val _UINT32_(0x1)                                        /* (EC_REG_BANK_DEBUG_CTRL) 1=The pins associated with the JTAG TCK, TMS and TDO switch to the debug interface when TRST# is de-asserted high. The pin           associated with TDI remains controlled by the associated GPIO. This setting should be used when the ARM Serial Wire Debug             (SWD) and Serial Wire Viewer (SWV) are both required for debugging  */
#define   EC_REG_BANK_DEBUG_CTRL_DBG_PIN_CFG_JTAG_TCK_TMS_TDO_TDI_Val _UINT32_(0x0)                                        /* (EC_REG_BANK_DEBUG_CTRL) 0=All four pins associated with JTAG (TCK, TMS, TDI and TDO) switch to the debug interface when TRST# is de-asserted high.         This setting should be used when the JTAG TAP controller is required for debugging.  */
#define EC_REG_BANK_DEBUG_CTRL_DBG_PIN_CFG_JTAG_TCK_TMS (EC_REG_BANK_DEBUG_CTRL_DBG_PIN_CFG_JTAG_TCK_TMS_Val << EC_REG_BANK_DEBUG_CTRL_DBG_PIN_CFG_Pos) /* (EC_REG_BANK_DEBUG_CTRL) 2=The pins associated with the JTAG TCK and TMS switch to the debug interface when TRST# is de-asserted high. The pins           associated with TDI and TDO remain controlled by the associated GPIO. This setting should be used when the ARM Serial          Wire Debug (SWD) is required for debugging and the Serial Wire Viewer is not required  Position  */
#define EC_REG_BANK_DEBUG_CTRL_DBG_PIN_CFG_JTAG_TCK_TMS_TDO (EC_REG_BANK_DEBUG_CTRL_DBG_PIN_CFG_JTAG_TCK_TMS_TDO_Val << EC_REG_BANK_DEBUG_CTRL_DBG_PIN_CFG_Pos) /* (EC_REG_BANK_DEBUG_CTRL) 1=The pins associated with the JTAG TCK, TMS and TDO switch to the debug interface when TRST# is de-asserted high. The pin           associated with TDI remains controlled by the associated GPIO. This setting should be used when the ARM Serial Wire Debug             (SWD) and Serial Wire Viewer (SWV) are both required for debugging Position  */
#define EC_REG_BANK_DEBUG_CTRL_DBG_PIN_CFG_JTAG_TCK_TMS_TDO_TDI (EC_REG_BANK_DEBUG_CTRL_DBG_PIN_CFG_JTAG_TCK_TMS_TDO_TDI_Val << EC_REG_BANK_DEBUG_CTRL_DBG_PIN_CFG_Pos) /* (EC_REG_BANK_DEBUG_CTRL) 0=All four pins associated with JTAG (TCK, TMS, TDI and TDO) switch to the debug interface when TRST# is de-asserted high.         This setting should be used when the JTAG TAP controller is required for debugging. Position  */
#define EC_REG_BANK_DEBUG_CTRL_JTAG_PU_EN_Pos _UINT32_(3)                                          /* (EC_REG_BANK_DEBUG_CTRL) If this bit is set to '1b' internal pull-up resistors are automatically enabled on the appropriate debugging port      wires whenever the debug port is enabled (the DEBUG_EN bit in this register is '1b' and the JTAG_RST# pin is high). The setting      of DEBUG_PIN_CFG determines which pins have pull-ups enabled when the debug port is enabled. Position */
#define EC_REG_BANK_DEBUG_CTRL_JTAG_PU_EN_Msk (_UINT32_(0x1) << EC_REG_BANK_DEBUG_CTRL_JTAG_PU_EN_Pos) /* (EC_REG_BANK_DEBUG_CTRL) If this bit is set to '1b' internal pull-up resistors are automatically enabled on the appropriate debugging port      wires whenever the debug port is enabled (the DEBUG_EN bit in this register is '1b' and the JTAG_RST# pin is high). The setting      of DEBUG_PIN_CFG determines which pins have pull-ups enabled when the debug port is enabled. Mask */
#define EC_REG_BANK_DEBUG_CTRL_JTAG_PU_EN(value) (EC_REG_BANK_DEBUG_CTRL_JTAG_PU_EN_Msk & (_UINT32_(value) << EC_REG_BANK_DEBUG_CTRL_JTAG_PU_EN_Pos)) /* Assigment of value for JTAG_PU_EN in the EC_REG_BANK_DEBUG_CTRL register */
#define EC_REG_BANK_DEBUG_CTRL_BS_EN_Pos      _UINT32_(4)                                          /* (EC_REG_BANK_DEBUG_CTRL) This bit sets the boundary scan tap controller accessibility from JTAG port.             1= Boundary scan tap controller accessibile through JTAG Port.             0= Boundary scan tap controller not accessibile through JTAG Port. Position */
#define EC_REG_BANK_DEBUG_CTRL_BS_EN_Msk      (_UINT32_(0x1) << EC_REG_BANK_DEBUG_CTRL_BS_EN_Pos)  /* (EC_REG_BANK_DEBUG_CTRL) This bit sets the boundary scan tap controller accessibility from JTAG port.             1= Boundary scan tap controller accessibile through JTAG Port.             0= Boundary scan tap controller not accessibile through JTAG Port. Mask */
#define EC_REG_BANK_DEBUG_CTRL_BS_EN(value)   (EC_REG_BANK_DEBUG_CTRL_BS_EN_Msk & (_UINT32_(value) << EC_REG_BANK_DEBUG_CTRL_BS_EN_Pos)) /* Assigment of value for BS_EN in the EC_REG_BANK_DEBUG_CTRL register */
#define EC_REG_BANK_DEBUG_CTRL_Msk            _UINT32_(0x0000001F)                                 /* (EC_REG_BANK_DEBUG_CTRL) Register Mask  */


/* -------- EC_REG_BANK_OTP_LOCK : (EC_REG_BANK Offset: 0x24) (R/W 32) Lock Register -------- */
#define EC_REG_BANK_OTP_LOCK_RESETVALUE       _UINT32_(0x00)                                       /*  (EC_REG_BANK_OTP_LOCK) Lock Register  Reset Value */

#define EC_REG_BANK_OTP_LOCK_TEST_Pos         _UINT32_(0)                                          /* (EC_REG_BANK_OTP_LOCK) Test Position */
#define EC_REG_BANK_OTP_LOCK_TEST_Msk         (_UINT32_(0x1) << EC_REG_BANK_OTP_LOCK_TEST_Pos)     /* (EC_REG_BANK_OTP_LOCK) Test Mask */
#define EC_REG_BANK_OTP_LOCK_TEST(value)      (EC_REG_BANK_OTP_LOCK_TEST_Msk & (_UINT32_(value) << EC_REG_BANK_OTP_LOCK_TEST_Pos)) /* Assigment of value for TEST in the EC_REG_BANK_OTP_LOCK register */
#define EC_REG_BANK_OTP_LOCK_VBAT_RAM_LOCK_Pos _UINT32_(1)                                          /* (EC_REG_BANK_OTP_LOCK) VBAT RAM LOCK bit.         0 = Not Locked.         1 = Locked. Position */
#define EC_REG_BANK_OTP_LOCK_VBAT_RAM_LOCK_Msk (_UINT32_(0x1) << EC_REG_BANK_OTP_LOCK_VBAT_RAM_LOCK_Pos) /* (EC_REG_BANK_OTP_LOCK) VBAT RAM LOCK bit.         0 = Not Locked.         1 = Locked. Mask */
#define EC_REG_BANK_OTP_LOCK_VBAT_RAM_LOCK(value) (EC_REG_BANK_OTP_LOCK_VBAT_RAM_LOCK_Msk & (_UINT32_(value) << EC_REG_BANK_OTP_LOCK_VBAT_RAM_LOCK_Pos)) /* Assigment of value for VBAT_RAM_LOCK in the EC_REG_BANK_OTP_LOCK register */
#define EC_REG_BANK_OTP_LOCK_VBAT_REG_LOCK_Pos _UINT32_(2)                                          /* (EC_REG_BANK_OTP_LOCK) VBAT REG LOCK.         0 = Not Locked.         1 = Locked. Position */
#define EC_REG_BANK_OTP_LOCK_VBAT_REG_LOCK_Msk (_UINT32_(0x1) << EC_REG_BANK_OTP_LOCK_VBAT_REG_LOCK_Pos) /* (EC_REG_BANK_OTP_LOCK) VBAT REG LOCK.         0 = Not Locked.         1 = Locked. Mask */
#define EC_REG_BANK_OTP_LOCK_VBAT_REG_LOCK(value) (EC_REG_BANK_OTP_LOCK_VBAT_REG_LOCK_Msk & (_UINT32_(value) << EC_REG_BANK_OTP_LOCK_VBAT_REG_LOCK_Pos)) /* Assigment of value for VBAT_REG_LOCK in the EC_REG_BANK_OTP_LOCK register */
#define EC_REG_BANK_OTP_LOCK_SCUR_MBX_LOCK_Pos _UINT32_(8)                                          /* (EC_REG_BANK_OTP_LOCK) Secure Mailbox LOCK.         0 = Not Locked.         1 = Write Locked. Position */
#define EC_REG_BANK_OTP_LOCK_SCUR_MBX_LOCK_Msk (_UINT32_(0x1) << EC_REG_BANK_OTP_LOCK_SCUR_MBX_LOCK_Pos) /* (EC_REG_BANK_OTP_LOCK) Secure Mailbox LOCK.         0 = Not Locked.         1 = Write Locked. Mask */
#define EC_REG_BANK_OTP_LOCK_SCUR_MBX_LOCK(value) (EC_REG_BANK_OTP_LOCK_SCUR_MBX_LOCK_Msk & (_UINT32_(value) << EC_REG_BANK_OTP_LOCK_SCUR_MBX_LOCK_Pos)) /* Assigment of value for SCUR_MBX_LOCK in the EC_REG_BANK_OTP_LOCK register */
#define EC_REG_BANK_OTP_LOCK_Msk              _UINT32_(0x00000107)                                 /* (EC_REG_BANK_OTP_LOCK) Register Mask  */


/* -------- EC_REG_BANK_WDT_CNT : (EC_REG_BANK Offset: 0x28) (R/W 32) WDT Event Count [3:0] WDT_COUNT (WDT_COUNT) These EC R/W bits are cleared to 0 on VCC1 POR, but not on a WDT.            Note: This field is written by Boot ROM firmware to indicate the number of times a WDT fired before loading a good EC code image. -------- */
#define EC_REG_BANK_WDT_CNT_RESETVALUE        _UINT32_(0x00)                                       /*  (EC_REG_BANK_WDT_CNT) WDT Event Count [3:0] WDT_COUNT (WDT_COUNT) These EC R/W bits are cleared to 0 on VCC1 POR, but not on a WDT.            Note: This field is written by Boot ROM firmware to indicate the number of times a WDT fired before loading a good EC code image.  Reset Value */

#define EC_REG_BANK_WDT_CNT_Msk               _UINT32_(0x00000000)                                 /* (EC_REG_BANK_WDT_CNT) Register Mask  */


/* -------- EC_REG_BANK_AESH_BSWAP_CTRL : (EC_REG_BANK Offset: 0x2C) (R/W 32) AES HASH Byte Swap Control Register. -------- */
#define EC_REG_BANK_AESH_BSWAP_CTRL_RESETVALUE _UINT32_(0x00)                                       /*  (EC_REG_BANK_AESH_BSWAP_CTRL) AES HASH Byte Swap Control Register.  Reset Value */

#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BYTE_SWAP_EN_Pos _UINT32_(0)                                          /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable byte swap on a DWORD during AHB read from AES / HASH block: 1=Enable; 0=Disable. Position */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BYTE_SWAP_EN_Msk (_UINT32_(0x1) << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BYTE_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable byte swap on a DWORD during AHB read from AES / HASH block: 1=Enable; 0=Disable. Mask */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BYTE_SWAP_EN(value) (EC_REG_BANK_AESH_BSWAP_CTRL_IP_BYTE_SWAP_EN_Msk & (_UINT32_(value) << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BYTE_SWAP_EN_Pos)) /* Assigment of value for IP_BYTE_SWAP_EN in the EC_REG_BANK_AESH_BSWAP_CTRL register */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BYTE_SWAP_EN_Pos _UINT32_(1)                                          /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable byte swap on a DWORD during AHB write from AES / HASH block: 1=Enable; 0=Disable. Position */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BYTE_SWAP_EN_Msk (_UINT32_(0x1) << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BYTE_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable byte swap on a DWORD during AHB write from AES / HASH block: 1=Enable; 0=Disable. Mask */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BYTE_SWAP_EN(value) (EC_REG_BANK_AESH_BSWAP_CTRL_OP_BYTE_SWAP_EN_Msk & (_UINT32_(value) << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BYTE_SWAP_EN_Pos)) /* Assigment of value for OP_BYTE_SWAP_EN in the EC_REG_BANK_AESH_BSWAP_CTRL register */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos _UINT32_(2)                                          /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable word swap on a DWORD during AHB read from AES / HASH block 0=Disable. Position */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Msk (_UINT32_(0x7) << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable word swap on a DWORD during AHB read from AES / HASH block 0=Disable. Mask */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN(value) (EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Msk & (_UINT32_(value) << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos)) /* Assigment of value for IP_BLK_SWAP_EN in the EC_REG_BANK_AESH_BSWAP_CTRL register */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_128_BYTE_BLOCK_Val _UINT32_(0x4)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 4=Swap 32-bit doublewords in 128-byte blocks   */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_64_BYTE_BLOCK_Val _UINT32_(0x3)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,          0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,...  */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_16_BYTE_BLOCK_Val _UINT32_(0x2)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,...  */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_8_BYTE_BLOCK_Val _UINT32_(0x1)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,       0x0, 0xC, 0x8, ...  */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_DIS_Val _UINT32_(0x0)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 0=Disable.  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_128_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_128_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 4=Swap 32-bit doublewords in 128-byte blocks  Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_64_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_64_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,          0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,... Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_16_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_16_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,... Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_8_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_SWAP_8_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,       0x0, 0xC, 0x8, ... Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_DIS (EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_DIS_Val << EC_REG_BANK_AESH_BSWAP_CTRL_IP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 0=Disable. Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos _UINT32_(5)                                          /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable word swap on a DWORD during AHB write from AES / HASH block 0=Disable. Position */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Msk (_UINT32_(0x7) << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) Used to enable word swap on a DWORD during AHB write from AES / HASH block 0=Disable. Mask */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN(value) (EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Msk & (_UINT32_(value) << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos)) /* Assigment of value for OP_BLK_SWAP_EN in the EC_REG_BANK_AESH_BSWAP_CTRL register */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_128_BYTE_BLOCK_Val _UINT32_(0x4)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 4=Swap 32-bit doublewords in 128-byte blocks   */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_64_BYTE_BLOCK_Val _UINT32_(0x3)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,          0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,...  */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_16_BYTE_BLOCK_Val _UINT32_(0x2)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,...  */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_8_BYTE_BLOCK_Val _UINT32_(0x1)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,       0x0, 0xC, 0x8, ...  */
#define   EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_DIS_Val _UINT32_(0x0)                                        /* (EC_REG_BANK_AESH_BSWAP_CTRL) 0=Disable.  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_128_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_128_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 4=Swap 32-bit doublewords in 128-byte blocks  Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_64_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_64_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,          0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,... Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_16_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_16_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,... Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_8_BYTE_BLOCK (EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_SWAP_8_BYTE_BLOCK_Val << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,       0x0, 0xC, 0x8, ... Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_DIS (EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_DIS_Val << EC_REG_BANK_AESH_BSWAP_CTRL_OP_BLK_SWAP_EN_Pos) /* (EC_REG_BANK_AESH_BSWAP_CTRL) 0=Disable. Position  */
#define EC_REG_BANK_AESH_BSWAP_CTRL_Msk       _UINT32_(0x000000FF)                                 /* (EC_REG_BANK_AESH_BSWAP_CTRL) Register Mask  */


/* -------- EC_REG_BANK_GPIO_BANK_PWR : (EC_REG_BANK Offset: 0x64) (R/W 32) GPIO Bank Power Register -------- */
#define EC_REG_BANK_GPIO_BANK_PWR_RESETVALUE  _UINT32_(0x00)                                       /*  (EC_REG_BANK_GPIO_BANK_PWR) GPIO Bank Power Register  Reset Value */

#define EC_REG_BANK_GPIO_BANK_PWR_TEST_Pos    _UINT32_(0)                                          /* (EC_REG_BANK_GPIO_BANK_PWR) This bit must be programmed to 0h for proper operation of the device. Position */
#define EC_REG_BANK_GPIO_BANK_PWR_TEST_Msk    (_UINT32_(0x1) << EC_REG_BANK_GPIO_BANK_PWR_TEST_Pos) /* (EC_REG_BANK_GPIO_BANK_PWR) This bit must be programmed to 0h for proper operation of the device. Mask */
#define EC_REG_BANK_GPIO_BANK_PWR_TEST(value) (EC_REG_BANK_GPIO_BANK_PWR_TEST_Msk & (_UINT32_(value) << EC_REG_BANK_GPIO_BANK_PWR_TEST_Pos)) /* Assigment of value for TEST in the EC_REG_BANK_GPIO_BANK_PWR register */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL2_Pos _UINT32_(1)                                          /* (EC_REG_BANK_GPIO_BANK_PWR) Voltage value on VTR2. This bit is set by Firmware after a VTR Power On Reset.         It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted.         Write access is determined by bit 7.      1=VTR2 is powered by 1.8V      0=VTR2 is powered by 3.3V. Position */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL2_Msk (_UINT32_(0x1) << EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL2_Pos) /* (EC_REG_BANK_GPIO_BANK_PWR) Voltage value on VTR2. This bit is set by Firmware after a VTR Power On Reset.         It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted.         Write access is determined by bit 7.      1=VTR2 is powered by 1.8V      0=VTR2 is powered by 3.3V. Mask */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL2(value) (EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL2_Msk & (_UINT32_(value) << EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL2_Pos)) /* Assigment of value for VTR_LVL2 in the EC_REG_BANK_GPIO_BANK_PWR register */
#define EC_REG_BANK_GPIO_BANK_PWR_GPIO_BANK_PWR_LOCK_Pos _UINT32_(7)                                          /* (EC_REG_BANK_GPIO_BANK_PWR) GPIO Bank Power Lock. 0: VTR_LEVEL bits[2:0] and GPIO Bank Power Lock bit are R/W      1 = VTR_LEVEL bits[2:0] and GPIO Bank Power Lock bit are Read Only. Position */
#define EC_REG_BANK_GPIO_BANK_PWR_GPIO_BANK_PWR_LOCK_Msk (_UINT32_(0x1) << EC_REG_BANK_GPIO_BANK_PWR_GPIO_BANK_PWR_LOCK_Pos) /* (EC_REG_BANK_GPIO_BANK_PWR) GPIO Bank Power Lock. 0: VTR_LEVEL bits[2:0] and GPIO Bank Power Lock bit are R/W      1 = VTR_LEVEL bits[2:0] and GPIO Bank Power Lock bit are Read Only. Mask */
#define EC_REG_BANK_GPIO_BANK_PWR_GPIO_BANK_PWR_LOCK(value) (EC_REG_BANK_GPIO_BANK_PWR_GPIO_BANK_PWR_LOCK_Msk & (_UINT32_(value) << EC_REG_BANK_GPIO_BANK_PWR_GPIO_BANK_PWR_LOCK_Pos)) /* Assigment of value for GPIO_BANK_PWR_LOCK in the EC_REG_BANK_GPIO_BANK_PWR register */
#define EC_REG_BANK_GPIO_BANK_PWR_Msk         _UINT32_(0x00000083)                                 /* (EC_REG_BANK_GPIO_BANK_PWR) Register Mask  */

#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL_Pos _UINT32_(1)                                          /* (EC_REG_BANK_GPIO_BANK_PWR Position) Voltage value on VTR2. This bit is set by Firmware after a VTR Power On Reset.         It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted.         Write access is determined by bit 7.      x=VTR2 is powered by x.8V      x=VTR2 is powered by 3.3V. */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL_Msk (_UINT32_(0x1) << EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL_Pos) /* (EC_REG_BANK_GPIO_BANK_PWR Mask) VTR_LVL */
#define EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL(value) (EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL_Msk & (_UINT32_(value) << EC_REG_BANK_GPIO_BANK_PWR_VTR_LVL_Pos)) 

/* -------- EC_REG_BANK_SRAM_BNK_SWP : (EC_REG_BANK Offset: 0x70) (R/W 32) Security Monitor SRAM Bank Swap Register -------- */
#define EC_REG_BANK_SRAM_BNK_SWP_RESETVALUE   _UINT32_(0x00)                                       /*  (EC_REG_BANK_SRAM_BNK_SWP) Security Monitor SRAM Bank Swap Register  Reset Value */

#define EC_REG_BANK_SRAM_BNK_SWP_BNK_SWP_Pos  _UINT32_(0)                                          /* (EC_REG_BANK_SRAM_BNK_SWP) SRAM bank Swap Register Position */
#define EC_REG_BANK_SRAM_BNK_SWP_BNK_SWP_Msk  (_UINT32_(0x1) << EC_REG_BANK_SRAM_BNK_SWP_BNK_SWP_Pos) /* (EC_REG_BANK_SRAM_BNK_SWP) SRAM bank Swap Register Mask */
#define EC_REG_BANK_SRAM_BNK_SWP_BNK_SWP(value) (EC_REG_BANK_SRAM_BNK_SWP_BNK_SWP_Msk & (_UINT32_(value) << EC_REG_BANK_SRAM_BNK_SWP_BNK_SWP_Pos)) /* Assigment of value for BNK_SWP in the EC_REG_BANK_SRAM_BNK_SWP register */
#define EC_REG_BANK_SRAM_BNK_SWP_Msk          _UINT32_(0x00000001)                                 /* (EC_REG_BANK_SRAM_BNK_SWP) Register Mask  */


/* -------- EC_REG_BANK_VW_SRC_CNGF : (EC_REG_BANK Offset: 0x90) (R/W 32) Virtual Wire Source Configuration Register -------- */
#define EC_REG_BANK_VW_SRC_CNGF_RESETVALUE    _UINT32_(0x07)                                       /*  (EC_REG_BANK_VW_SRC_CNGF) Virtual Wire Source Configuration Register  Reset Value */

#define EC_REG_BANK_VW_SRC_CNGF_VW_SRC_Pos    _UINT32_(0)                                          /* (EC_REG_BANK_VW_SRC_CNGF) VWIRE_SOURCE [2], VWIRE_SOURCE [1], VWIRE_SOURCE [0] Position */
#define EC_REG_BANK_VW_SRC_CNGF_VW_SRC_Msk    (_UINT32_(0x7) << EC_REG_BANK_VW_SRC_CNGF_VW_SRC_Pos) /* (EC_REG_BANK_VW_SRC_CNGF) VWIRE_SOURCE [2], VWIRE_SOURCE [1], VWIRE_SOURCE [0] Mask */
#define EC_REG_BANK_VW_SRC_CNGF_VW_SRC(value) (EC_REG_BANK_VW_SRC_CNGF_VW_SRC_Msk & (_UINT32_(value) << EC_REG_BANK_VW_SRC_CNGF_VW_SRC_Pos)) /* Assigment of value for VW_SRC in the EC_REG_BANK_VW_SRC_CNGF register */
#define EC_REG_BANK_VW_SRC_CNGF_Msk           _UINT32_(0x00000007)                                 /* (EC_REG_BANK_VW_SRC_CNGF) Register Mask  */


/* -------- EC_REG_BANK_SPIMON_IB_CNGF : (EC_REG_BANK Offset: 0xC4) (R/W 32) SPI Monitor's Inter-Bus Configuration Register -------- */
#define EC_REG_BANK_SPIMON_IB_CNGF_RESETVALUE _UINT32_(0x00)                                       /*  (EC_REG_BANK_SPIMON_IB_CNGF) SPI Monitor's Inter-Bus Configuration Register  Reset Value */

#define EC_REG_BANK_SPIMON_IB_CNGF_MON0_Pos   _UINT32_(8)                                          /* (EC_REG_BANK_SPIMON_IB_CNGF) QSPI0 Monitor 0. 1 = Route QMSPI0 Traffic to Monitor. 0 = Route Host AP0 Traffic to Monitor Position */
#define EC_REG_BANK_SPIMON_IB_CNGF_MON0_Msk   (_UINT32_(0x1) << EC_REG_BANK_SPIMON_IB_CNGF_MON0_Pos) /* (EC_REG_BANK_SPIMON_IB_CNGF) QSPI0 Monitor 0. 1 = Route QMSPI0 Traffic to Monitor. 0 = Route Host AP0 Traffic to Monitor Mask */
#define EC_REG_BANK_SPIMON_IB_CNGF_MON0(value) (EC_REG_BANK_SPIMON_IB_CNGF_MON0_Msk & (_UINT32_(value) << EC_REG_BANK_SPIMON_IB_CNGF_MON0_Pos)) /* Assigment of value for MON0 in the EC_REG_BANK_SPIMON_IB_CNGF register */
#define EC_REG_BANK_SPIMON_IB_CNGF_MON1_Pos   _UINT32_(9)                                          /* (EC_REG_BANK_SPIMON_IB_CNGF) QSPI1 Monitor 1. 1 = Route QMSPI1 Traffic to Monitor. 0 = Route Host AP1 Traffic to Monitor Position */
#define EC_REG_BANK_SPIMON_IB_CNGF_MON1_Msk   (_UINT32_(0x1) << EC_REG_BANK_SPIMON_IB_CNGF_MON1_Pos) /* (EC_REG_BANK_SPIMON_IB_CNGF) QSPI1 Monitor 1. 1 = Route QMSPI1 Traffic to Monitor. 0 = Route Host AP1 Traffic to Monitor Mask */
#define EC_REG_BANK_SPIMON_IB_CNGF_MON1(value) (EC_REG_BANK_SPIMON_IB_CNGF_MON1_Msk & (_UINT32_(value) << EC_REG_BANK_SPIMON_IB_CNGF_MON1_Pos)) /* Assigment of value for MON1 in the EC_REG_BANK_SPIMON_IB_CNGF register */
#define EC_REG_BANK_SPIMON_IB_CNGF_IDL_Pos    _UINT32_(12)                                         /* (EC_REG_BANK_SPIMON_IB_CNGF) Lock bit for IDE Position */
#define EC_REG_BANK_SPIMON_IB_CNGF_IDL_Msk    (_UINT32_(0x1) << EC_REG_BANK_SPIMON_IB_CNGF_IDL_Pos) /* (EC_REG_BANK_SPIMON_IB_CNGF) Lock bit for IDE Mask */
#define EC_REG_BANK_SPIMON_IB_CNGF_IDL(value) (EC_REG_BANK_SPIMON_IB_CNGF_IDL_Msk & (_UINT32_(value) << EC_REG_BANK_SPIMON_IB_CNGF_IDL_Pos)) /* Assigment of value for IDL in the EC_REG_BANK_SPIMON_IB_CNGF register */
#define EC_REG_BANK_SPIMON_IB_CNGF_IDV_Pos    _UINT32_(20)                                         /* (EC_REG_BANK_SPIMON_IB_CNGF) Delay Value Position */
#define EC_REG_BANK_SPIMON_IB_CNGF_IDV_Msk    (_UINT32_(0x1F) << EC_REG_BANK_SPIMON_IB_CNGF_IDV_Pos) /* (EC_REG_BANK_SPIMON_IB_CNGF) Delay Value Mask */
#define EC_REG_BANK_SPIMON_IB_CNGF_IDV(value) (EC_REG_BANK_SPIMON_IB_CNGF_IDV_Msk & (_UINT32_(value) << EC_REG_BANK_SPIMON_IB_CNGF_IDV_Pos)) /* Assigment of value for IDV in the EC_REG_BANK_SPIMON_IB_CNGF register */
#define EC_REG_BANK_SPIMON_IB_CNGF_IDU_Pos    _UINT32_(25)                                         /* (EC_REG_BANK_SPIMON_IB_CNGF) Delay Units Position */
#define EC_REG_BANK_SPIMON_IB_CNGF_IDU_Msk    (_UINT32_(0x3) << EC_REG_BANK_SPIMON_IB_CNGF_IDU_Pos) /* (EC_REG_BANK_SPIMON_IB_CNGF) Delay Units Mask */
#define EC_REG_BANK_SPIMON_IB_CNGF_IDU(value) (EC_REG_BANK_SPIMON_IB_CNGF_IDU_Msk & (_UINT32_(value) << EC_REG_BANK_SPIMON_IB_CNGF_IDU_Pos)) /* Assigment of value for IDU in the EC_REG_BANK_SPIMON_IB_CNGF register */
#define EC_REG_BANK_SPIMON_IB_CNGF_IDE_Pos    _UINT32_(27)                                         /* (EC_REG_BANK_SPIMON_IB_CNGF) Inter-Bus Intervention Enable Position */
#define EC_REG_BANK_SPIMON_IB_CNGF_IDE_Msk    (_UINT32_(0x1) << EC_REG_BANK_SPIMON_IB_CNGF_IDE_Pos) /* (EC_REG_BANK_SPIMON_IB_CNGF) Inter-Bus Intervention Enable Mask */
#define EC_REG_BANK_SPIMON_IB_CNGF_IDE(value) (EC_REG_BANK_SPIMON_IB_CNGF_IDE_Msk & (_UINT32_(value) << EC_REG_BANK_SPIMON_IB_CNGF_IDE_Pos)) /* Assigment of value for IDE in the EC_REG_BANK_SPIMON_IB_CNGF register */
#define EC_REG_BANK_SPIMON_IB_CNGF_Msk        _UINT32_(0x0FF01300)                                 /* (EC_REG_BANK_SPIMON_IB_CNGF) Register Mask  */

#define EC_REG_BANK_SPIMON_IB_CNGF_MON_Pos    _UINT32_(8)                                          /* (EC_REG_BANK_SPIMON_IB_CNGF Position) QSPIx Monitor x. x = Route QMSPIx Traffic to Monitor. x = Route Host APx Traffic to Monitor */
#define EC_REG_BANK_SPIMON_IB_CNGF_MON_Msk    (_UINT32_(0x3) << EC_REG_BANK_SPIMON_IB_CNGF_MON_Pos) /* (EC_REG_BANK_SPIMON_IB_CNGF Mask) MON */
#define EC_REG_BANK_SPIMON_IB_CNGF_MON(value) (EC_REG_BANK_SPIMON_IB_CNGF_MON_Msk & (_UINT32_(value) << EC_REG_BANK_SPIMON_IB_CNGF_MON_Pos)) 

/* -------- EC_REG_BANK_PD_MON_CTRL : (EC_REG_BANK Offset: 0x240) (R/W 32) PAD Monitor Control Register -------- */
#define EC_REG_BANK_PD_MON_CTRL_RESETVALUE    _UINT32_(0x00)                                       /*  (EC_REG_BANK_PD_MON_CTRL) PAD Monitor Control Register  Reset Value */

#define EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1_Pos _UINT32_(0)                                          /* (EC_REG_BANK_PD_MON_CTRL) Pad Monitor Control VTR1. 0=OFF, 1=1ms delay, 2=10ms delay, 3=100ms delay Position */
#define EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1_Msk (_UINT32_(0x3) << EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1_Pos) /* (EC_REG_BANK_PD_MON_CTRL) Pad Monitor Control VTR1. 0=OFF, 1=1ms delay, 2=10ms delay, 3=100ms delay Mask */
#define EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1(value) (EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1_Msk & (_UINT32_(value) << EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1_Pos)) /* Assigment of value for CTRL_VTR1 in the EC_REG_BANK_PD_MON_CTRL register */
#define   EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1_DISABLED_Val _UINT32_(0x0)                                        /* (EC_REG_BANK_PD_MON_CTRL) Disabled  */
#define   EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1_1MS_DEBOUNCE_CNTR_Val _UINT32_(0x1)                                        /* (EC_REG_BANK_PD_MON_CTRL) 1ms Debounce Counter Enable  */
#define   EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1_10MS_DEBOUNCE_CNTR_Val _UINT32_(0x2)                                        /* (EC_REG_BANK_PD_MON_CTRL) 10ms Debounce Counter Enable  */
#define   EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1_100MS_DEBOUNCE_CNTR_Val _UINT32_(0x3)                                        /* (EC_REG_BANK_PD_MON_CTRL) 100ms Debounce Counter Enable  */
#define EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1_DISABLED (EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1_DISABLED_Val << EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1_Pos) /* (EC_REG_BANK_PD_MON_CTRL) Disabled Position  */
#define EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1_1MS_DEBOUNCE_CNTR (EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1_1MS_DEBOUNCE_CNTR_Val << EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1_Pos) /* (EC_REG_BANK_PD_MON_CTRL) 1ms Debounce Counter Enable Position  */
#define EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1_10MS_DEBOUNCE_CNTR (EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1_10MS_DEBOUNCE_CNTR_Val << EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1_Pos) /* (EC_REG_BANK_PD_MON_CTRL) 10ms Debounce Counter Enable Position  */
#define EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1_100MS_DEBOUNCE_CNTR (EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1_100MS_DEBOUNCE_CNTR_Val << EC_REG_BANK_PD_MON_CTRL_CTRL_VTR1_Pos) /* (EC_REG_BANK_PD_MON_CTRL) 100ms Debounce Counter Enable Position  */
#define EC_REG_BANK_PD_MON_CTRL_OVRD_VTR1_Pos _UINT32_(4)                                          /* (EC_REG_BANK_PD_MON_CTRL) PAD Monitor Override VTR1 0=Normal Operation 1=Override input_disable and pad_protect_n Position */
#define EC_REG_BANK_PD_MON_CTRL_OVRD_VTR1_Msk (_UINT32_(0x1) << EC_REG_BANK_PD_MON_CTRL_OVRD_VTR1_Pos) /* (EC_REG_BANK_PD_MON_CTRL) PAD Monitor Override VTR1 0=Normal Operation 1=Override input_disable and pad_protect_n Mask */
#define EC_REG_BANK_PD_MON_CTRL_OVRD_VTR1(value) (EC_REG_BANK_PD_MON_CTRL_OVRD_VTR1_Msk & (_UINT32_(value) << EC_REG_BANK_PD_MON_CTRL_OVRD_VTR1_Pos)) /* Assigment of value for OVRD_VTR1 in the EC_REG_BANK_PD_MON_CTRL register */
#define EC_REG_BANK_PD_MON_CTRL_VTR1_INPT_DIS_Pos _UINT32_(5)                                          /* (EC_REG_BANK_PD_MON_CTRL) PAD Monitor Override Input Disable VTR1. 0=Normal Operation 1=input_disable Position */
#define EC_REG_BANK_PD_MON_CTRL_VTR1_INPT_DIS_Msk (_UINT32_(0x1) << EC_REG_BANK_PD_MON_CTRL_VTR1_INPT_DIS_Pos) /* (EC_REG_BANK_PD_MON_CTRL) PAD Monitor Override Input Disable VTR1. 0=Normal Operation 1=input_disable Mask */
#define EC_REG_BANK_PD_MON_CTRL_VTR1_INPT_DIS(value) (EC_REG_BANK_PD_MON_CTRL_VTR1_INPT_DIS_Msk & (_UINT32_(value) << EC_REG_BANK_PD_MON_CTRL_VTR1_INPT_DIS_Pos)) /* Assigment of value for VTR1_INPT_DIS in the EC_REG_BANK_PD_MON_CTRL register */
#define EC_REG_BANK_PD_MON_CTRL_VTR1_PROTECN_Pos _UINT32_(6)                                          /* (EC_REG_BANK_PD_MON_CTRL) PAD Monitor Override Protect N VTR1. Position */
#define EC_REG_BANK_PD_MON_CTRL_VTR1_PROTECN_Msk (_UINT32_(0x1) << EC_REG_BANK_PD_MON_CTRL_VTR1_PROTECN_Pos) /* (EC_REG_BANK_PD_MON_CTRL) PAD Monitor Override Protect N VTR1. Mask */
#define EC_REG_BANK_PD_MON_CTRL_VTR1_PROTECN(value) (EC_REG_BANK_PD_MON_CTRL_VTR1_PROTECN_Msk & (_UINT32_(value) << EC_REG_BANK_PD_MON_CTRL_VTR1_PROTECN_Pos)) /* Assigment of value for VTR1_PROTECN in the EC_REG_BANK_PD_MON_CTRL register */
#define EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2_Pos _UINT32_(8)                                          /* (EC_REG_BANK_PD_MON_CTRL) Pad Monitor Control VTR2. 0=OFF, 1=1ms delay, 2=10ms delay, 3=100ms delay Position */
#define EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2_Msk (_UINT32_(0x3) << EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2_Pos) /* (EC_REG_BANK_PD_MON_CTRL) Pad Monitor Control VTR2. 0=OFF, 1=1ms delay, 2=10ms delay, 3=100ms delay Mask */
#define EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2(value) (EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2_Msk & (_UINT32_(value) << EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2_Pos)) /* Assigment of value for CTRL_VTR2 in the EC_REG_BANK_PD_MON_CTRL register */
#define   EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2_DISABLED_Val _UINT32_(0x0)                                        /* (EC_REG_BANK_PD_MON_CTRL) Disabled  */
#define   EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2_1MS_DEBOUNCE_CNTR_Val _UINT32_(0x1)                                        /* (EC_REG_BANK_PD_MON_CTRL) 1ms Debounce Counter Enable  */
#define   EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2_10MS_DEBOUNCE_CNTR_Val _UINT32_(0x2)                                        /* (EC_REG_BANK_PD_MON_CTRL) 10ms Debounce Counter Enable  */
#define   EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2_100MS_DEBOUNCE_CNTR_Val _UINT32_(0x3)                                        /* (EC_REG_BANK_PD_MON_CTRL) 100ms Debounce Counter Enable  */
#define EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2_DISABLED (EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2_DISABLED_Val << EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2_Pos) /* (EC_REG_BANK_PD_MON_CTRL) Disabled Position  */
#define EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2_1MS_DEBOUNCE_CNTR (EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2_1MS_DEBOUNCE_CNTR_Val << EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2_Pos) /* (EC_REG_BANK_PD_MON_CTRL) 1ms Debounce Counter Enable Position  */
#define EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2_10MS_DEBOUNCE_CNTR (EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2_10MS_DEBOUNCE_CNTR_Val << EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2_Pos) /* (EC_REG_BANK_PD_MON_CTRL) 10ms Debounce Counter Enable Position  */
#define EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2_100MS_DEBOUNCE_CNTR (EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2_100MS_DEBOUNCE_CNTR_Val << EC_REG_BANK_PD_MON_CTRL_CTRL_VTR2_Pos) /* (EC_REG_BANK_PD_MON_CTRL) 100ms Debounce Counter Enable Position  */
#define EC_REG_BANK_PD_MON_CTRL_OVRD_VTR2_Pos _UINT32_(12)                                         /* (EC_REG_BANK_PD_MON_CTRL) PAD Monitor Override VTR2 0=Normal Operation 1=Override input_disable and pad_protect_n Position */
#define EC_REG_BANK_PD_MON_CTRL_OVRD_VTR2_Msk (_UINT32_(0x1) << EC_REG_BANK_PD_MON_CTRL_OVRD_VTR2_Pos) /* (EC_REG_BANK_PD_MON_CTRL) PAD Monitor Override VTR2 0=Normal Operation 1=Override input_disable and pad_protect_n Mask */
#define EC_REG_BANK_PD_MON_CTRL_OVRD_VTR2(value) (EC_REG_BANK_PD_MON_CTRL_OVRD_VTR2_Msk & (_UINT32_(value) << EC_REG_BANK_PD_MON_CTRL_OVRD_VTR2_Pos)) /* Assigment of value for OVRD_VTR2 in the EC_REG_BANK_PD_MON_CTRL register */
#define EC_REG_BANK_PD_MON_CTRL_VTR2_INPT_DIS_Pos _UINT32_(13)                                         /* (EC_REG_BANK_PD_MON_CTRL) PAD Monitor Override Input Disable VTR2. 0=Normal Operation 1=input_disable Position */
#define EC_REG_BANK_PD_MON_CTRL_VTR2_INPT_DIS_Msk (_UINT32_(0x1) << EC_REG_BANK_PD_MON_CTRL_VTR2_INPT_DIS_Pos) /* (EC_REG_BANK_PD_MON_CTRL) PAD Monitor Override Input Disable VTR2. 0=Normal Operation 1=input_disable Mask */
#define EC_REG_BANK_PD_MON_CTRL_VTR2_INPT_DIS(value) (EC_REG_BANK_PD_MON_CTRL_VTR2_INPT_DIS_Msk & (_UINT32_(value) << EC_REG_BANK_PD_MON_CTRL_VTR2_INPT_DIS_Pos)) /* Assigment of value for VTR2_INPT_DIS in the EC_REG_BANK_PD_MON_CTRL register */
#define EC_REG_BANK_PD_MON_CTRL_VTR2_PROTECN_Pos _UINT32_(14)                                         /* (EC_REG_BANK_PD_MON_CTRL) PAD Monitor Override Protect N VTR2. Position */
#define EC_REG_BANK_PD_MON_CTRL_VTR2_PROTECN_Msk (_UINT32_(0x1) << EC_REG_BANK_PD_MON_CTRL_VTR2_PROTECN_Pos) /* (EC_REG_BANK_PD_MON_CTRL) PAD Monitor Override Protect N VTR2. Mask */
#define EC_REG_BANK_PD_MON_CTRL_VTR2_PROTECN(value) (EC_REG_BANK_PD_MON_CTRL_VTR2_PROTECN_Msk & (_UINT32_(value) << EC_REG_BANK_PD_MON_CTRL_VTR2_PROTECN_Pos)) /* Assigment of value for VTR2_PROTECN in the EC_REG_BANK_PD_MON_CTRL register */
#define EC_REG_BANK_PD_MON_CTRL_Msk           _UINT32_(0x00007373)                                 /* (EC_REG_BANK_PD_MON_CTRL) Register Mask  */


/* -------- EC_REG_BANK_PD_MON_INT_EN : (EC_REG_BANK Offset: 0x244) (R/W 32) PAD Monitor Interrupt Enable Register -------- */
#define EC_REG_BANK_PD_MON_INT_EN_RESETVALUE  _UINT32_(0x00)                                       /*  (EC_REG_BANK_PD_MON_INT_EN) PAD Monitor Interrupt Enable Register  Reset Value */

#define EC_REG_BANK_PD_MON_INT_EN_VTR1_PD_INTEN_Pos _UINT32_(0)                                          /* (EC_REG_BANK_PD_MON_INT_EN) Pad Monitor VTR1 Power Down Interrupt Enable. Position */
#define EC_REG_BANK_PD_MON_INT_EN_VTR1_PD_INTEN_Msk (_UINT32_(0x1) << EC_REG_BANK_PD_MON_INT_EN_VTR1_PD_INTEN_Pos) /* (EC_REG_BANK_PD_MON_INT_EN) Pad Monitor VTR1 Power Down Interrupt Enable. Mask */
#define EC_REG_BANK_PD_MON_INT_EN_VTR1_PD_INTEN(value) (EC_REG_BANK_PD_MON_INT_EN_VTR1_PD_INTEN_Msk & (_UINT32_(value) << EC_REG_BANK_PD_MON_INT_EN_VTR1_PD_INTEN_Pos)) /* Assigment of value for VTR1_PD_INTEN in the EC_REG_BANK_PD_MON_INT_EN register */
#define EC_REG_BANK_PD_MON_INT_EN_VTR1_PU_INTEN_Pos _UINT32_(1)                                          /* (EC_REG_BANK_PD_MON_INT_EN) Pad Monitor VTR1 Power Up Interrupt Enable Position */
#define EC_REG_BANK_PD_MON_INT_EN_VTR1_PU_INTEN_Msk (_UINT32_(0x1) << EC_REG_BANK_PD_MON_INT_EN_VTR1_PU_INTEN_Pos) /* (EC_REG_BANK_PD_MON_INT_EN) Pad Monitor VTR1 Power Up Interrupt Enable Mask */
#define EC_REG_BANK_PD_MON_INT_EN_VTR1_PU_INTEN(value) (EC_REG_BANK_PD_MON_INT_EN_VTR1_PU_INTEN_Msk & (_UINT32_(value) << EC_REG_BANK_PD_MON_INT_EN_VTR1_PU_INTEN_Pos)) /* Assigment of value for VTR1_PU_INTEN in the EC_REG_BANK_PD_MON_INT_EN register */
#define EC_REG_BANK_PD_MON_INT_EN_VTR2_PD_INTEN_Pos _UINT32_(8)                                          /* (EC_REG_BANK_PD_MON_INT_EN) Pad Monitor VTR2 Power Down Interrupt Enable. Position */
#define EC_REG_BANK_PD_MON_INT_EN_VTR2_PD_INTEN_Msk (_UINT32_(0x1) << EC_REG_BANK_PD_MON_INT_EN_VTR2_PD_INTEN_Pos) /* (EC_REG_BANK_PD_MON_INT_EN) Pad Monitor VTR2 Power Down Interrupt Enable. Mask */
#define EC_REG_BANK_PD_MON_INT_EN_VTR2_PD_INTEN(value) (EC_REG_BANK_PD_MON_INT_EN_VTR2_PD_INTEN_Msk & (_UINT32_(value) << EC_REG_BANK_PD_MON_INT_EN_VTR2_PD_INTEN_Pos)) /* Assigment of value for VTR2_PD_INTEN in the EC_REG_BANK_PD_MON_INT_EN register */
#define EC_REG_BANK_PD_MON_INT_EN_VTR2_PU_INTEN_Pos _UINT32_(9)                                          /* (EC_REG_BANK_PD_MON_INT_EN) Pad Monitor VTR2 Power Up Interrupt Enable Position */
#define EC_REG_BANK_PD_MON_INT_EN_VTR2_PU_INTEN_Msk (_UINT32_(0x1) << EC_REG_BANK_PD_MON_INT_EN_VTR2_PU_INTEN_Pos) /* (EC_REG_BANK_PD_MON_INT_EN) Pad Monitor VTR2 Power Up Interrupt Enable Mask */
#define EC_REG_BANK_PD_MON_INT_EN_VTR2_PU_INTEN(value) (EC_REG_BANK_PD_MON_INT_EN_VTR2_PU_INTEN_Msk & (_UINT32_(value) << EC_REG_BANK_PD_MON_INT_EN_VTR2_PU_INTEN_Pos)) /* Assigment of value for VTR2_PU_INTEN in the EC_REG_BANK_PD_MON_INT_EN register */
#define EC_REG_BANK_PD_MON_INT_EN_Msk         _UINT32_(0x00000303)                                 /* (EC_REG_BANK_PD_MON_INT_EN) Register Mask  */


/* -------- EC_REG_BANK_PD_MON_STS : (EC_REG_BANK Offset: 0x248) (R/W 32) PAD Monitor Status Register -------- */
#define EC_REG_BANK_PD_MON_STS_RESETVALUE     _UINT32_(0x00)                                       /*  (EC_REG_BANK_PD_MON_STS) PAD Monitor Status Register  Reset Value */

#define EC_REG_BANK_PD_MON_STS_VTR1_PD_STS_Pos _UINT32_(0)                                          /* (EC_REG_BANK_PD_MON_STS) Pad Monitor VTR1 Power Down Status Position */
#define EC_REG_BANK_PD_MON_STS_VTR1_PD_STS_Msk (_UINT32_(0x1) << EC_REG_BANK_PD_MON_STS_VTR1_PD_STS_Pos) /* (EC_REG_BANK_PD_MON_STS) Pad Monitor VTR1 Power Down Status Mask */
#define EC_REG_BANK_PD_MON_STS_VTR1_PD_STS(value) (EC_REG_BANK_PD_MON_STS_VTR1_PD_STS_Msk & (_UINT32_(value) << EC_REG_BANK_PD_MON_STS_VTR1_PD_STS_Pos)) /* Assigment of value for VTR1_PD_STS in the EC_REG_BANK_PD_MON_STS register */
#define EC_REG_BANK_PD_MON_STS_VTR1_PU_STS_Pos _UINT32_(1)                                          /* (EC_REG_BANK_PD_MON_STS) Pad Monitor VTR1 Power Up Status Position */
#define EC_REG_BANK_PD_MON_STS_VTR1_PU_STS_Msk (_UINT32_(0x1) << EC_REG_BANK_PD_MON_STS_VTR1_PU_STS_Pos) /* (EC_REG_BANK_PD_MON_STS) Pad Monitor VTR1 Power Up Status Mask */
#define EC_REG_BANK_PD_MON_STS_VTR1_PU_STS(value) (EC_REG_BANK_PD_MON_STS_VTR1_PU_STS_Msk & (_UINT32_(value) << EC_REG_BANK_PD_MON_STS_VTR1_PU_STS_Pos)) /* Assigment of value for VTR1_PU_STS in the EC_REG_BANK_PD_MON_STS register */
#define EC_REG_BANK_PD_MON_STS_VTR1_CS_STS_Pos _UINT32_(7)                                          /* (EC_REG_BANK_PD_MON_STS) Pad Monitor Current state VTR1 Position */
#define EC_REG_BANK_PD_MON_STS_VTR1_CS_STS_Msk (_UINT32_(0x1) << EC_REG_BANK_PD_MON_STS_VTR1_CS_STS_Pos) /* (EC_REG_BANK_PD_MON_STS) Pad Monitor Current state VTR1 Mask */
#define EC_REG_BANK_PD_MON_STS_VTR1_CS_STS(value) (EC_REG_BANK_PD_MON_STS_VTR1_CS_STS_Msk & (_UINT32_(value) << EC_REG_BANK_PD_MON_STS_VTR1_CS_STS_Pos)) /* Assigment of value for VTR1_CS_STS in the EC_REG_BANK_PD_MON_STS register */
#define EC_REG_BANK_PD_MON_STS_VTR2_PD_STS_Pos _UINT32_(8)                                          /* (EC_REG_BANK_PD_MON_STS) Pad Monitor VTR2 Power Down Status Position */
#define EC_REG_BANK_PD_MON_STS_VTR2_PD_STS_Msk (_UINT32_(0x1) << EC_REG_BANK_PD_MON_STS_VTR2_PD_STS_Pos) /* (EC_REG_BANK_PD_MON_STS) Pad Monitor VTR2 Power Down Status Mask */
#define EC_REG_BANK_PD_MON_STS_VTR2_PD_STS(value) (EC_REG_BANK_PD_MON_STS_VTR2_PD_STS_Msk & (_UINT32_(value) << EC_REG_BANK_PD_MON_STS_VTR2_PD_STS_Pos)) /* Assigment of value for VTR2_PD_STS in the EC_REG_BANK_PD_MON_STS register */
#define EC_REG_BANK_PD_MON_STS_VTR2_PU_STS_Pos _UINT32_(9)                                          /* (EC_REG_BANK_PD_MON_STS) Pad Monitor VTR2 Power Up Status Position */
#define EC_REG_BANK_PD_MON_STS_VTR2_PU_STS_Msk (_UINT32_(0x1) << EC_REG_BANK_PD_MON_STS_VTR2_PU_STS_Pos) /* (EC_REG_BANK_PD_MON_STS) Pad Monitor VTR2 Power Up Status Mask */
#define EC_REG_BANK_PD_MON_STS_VTR2_PU_STS(value) (EC_REG_BANK_PD_MON_STS_VTR2_PU_STS_Msk & (_UINT32_(value) << EC_REG_BANK_PD_MON_STS_VTR2_PU_STS_Pos)) /* Assigment of value for VTR2_PU_STS in the EC_REG_BANK_PD_MON_STS register */
#define EC_REG_BANK_PD_MON_STS_VTR2_CS_STS_Pos _UINT32_(15)                                         /* (EC_REG_BANK_PD_MON_STS) Pad Monitor Current state VTR2 Position */
#define EC_REG_BANK_PD_MON_STS_VTR2_CS_STS_Msk (_UINT32_(0x1) << EC_REG_BANK_PD_MON_STS_VTR2_CS_STS_Pos) /* (EC_REG_BANK_PD_MON_STS) Pad Monitor Current state VTR2 Mask */
#define EC_REG_BANK_PD_MON_STS_VTR2_CS_STS(value) (EC_REG_BANK_PD_MON_STS_VTR2_CS_STS_Msk & (_UINT32_(value) << EC_REG_BANK_PD_MON_STS_VTR2_CS_STS_Pos)) /* Assigment of value for VTR2_CS_STS in the EC_REG_BANK_PD_MON_STS register */
#define EC_REG_BANK_PD_MON_STS_Msk            _UINT32_(0x00008383)                                 /* (EC_REG_BANK_PD_MON_STS) Register Mask  */


/** \brief EC_REG_BANK register offsets definitions */
#define EC_REG_BANK_SRAM_CNFG_REG_OFST _UINT32_(0x00)      /* (EC_REG_BANK_SRAM_CNFG) SRAM Configuration Register Offset */
#define EC_REG_BANK_AHB_ERR_ADDR_REG_OFST _UINT32_(0x04)      /* (EC_REG_BANK_AHB_ERR_ADDR) AHB Error Address [0:0] Offset */
#define EC_REG_BANK_AHB_ERR_CTRL_REG_OFST _UINT32_(0x14)      /* (EC_REG_BANK_AHB_ERR_CTRL) AHB Error Control [0:0] AHB_ERROR_DISABLE, 0: EC memory exceptions are enabled. 1: EC memory exceptions are disabled. Offset */
#define EC_REG_BANK_INTR_CTRL_REG_OFST _UINT32_(0x18)      /* (EC_REG_BANK_INTR_CTRL) Interrupt Control [0:0] NVIC_EN (NVIC_EN) This bit enables Alternate NVIC IRQ's Vectors. The Alternate NVIC Vectors provides each interrupt event with a dedicated (direct) NVIC vector.            0 = Alternate NVIC vectors disabled, 1= Alternate NVIC vectors enabled Offset */
#define EC_REG_BANK_ETM_CTRL_REG_OFST  _UINT32_(0x1C)      /* (EC_REG_BANK_ETM_CTRL) ETM TRACE Enable [0:0] TRACE_EN (TRACE_EN) This bit enables the ARM TRACE debug port (ETM/ITM). The Trace Debug Interface pins are forced to the TRACE functions.            0 = ARM TRACE port disabled, 1= ARM TRACE port enabled Offset */
#define EC_REG_BANK_DEBUG_CTRL_REG_OFST _UINT32_(0x20)      /* (EC_REG_BANK_DEBUG_CTRL) Debug Enable Register Offset */
#define EC_REG_BANK_OTP_LOCK_REG_OFST  _UINT32_(0x24)      /* (EC_REG_BANK_OTP_LOCK) Lock Register Offset */
#define EC_REG_BANK_WDT_CNT_REG_OFST   _UINT32_(0x28)      /* (EC_REG_BANK_WDT_CNT) WDT Event Count [3:0] WDT_COUNT (WDT_COUNT) These EC R/W bits are cleared to 0 on VCC1 POR, but not on a WDT.            Note: This field is written by Boot ROM firmware to indicate the number of times a WDT fired before loading a good EC code image. Offset */
#define EC_REG_BANK_AESH_BSWAP_CTRL_REG_OFST _UINT32_(0x2C)      /* (EC_REG_BANK_AESH_BSWAP_CTRL) AES HASH Byte Swap Control Register. Offset */
#define EC_REG_BANK_GPIO_BANK_PWR_REG_OFST _UINT32_(0x64)      /* (EC_REG_BANK_GPIO_BANK_PWR) GPIO Bank Power Register Offset */
#define EC_REG_BANK_SRAM_BNK_SWP_REG_OFST _UINT32_(0x70)      /* (EC_REG_BANK_SRAM_BNK_SWP) Security Monitor SRAM Bank Swap Register Offset */
#define EC_REG_BANK_VW_SRC_CNGF_REG_OFST _UINT32_(0x90)      /* (EC_REG_BANK_VW_SRC_CNGF) Virtual Wire Source Configuration Register Offset */
#define EC_REG_BANK_SPIMON_IB_CNGF_REG_OFST _UINT32_(0xC4)      /* (EC_REG_BANK_SPIMON_IB_CNGF) SPI Monitor's Inter-Bus Configuration Register Offset */
#define EC_REG_BANK_PD_MON_CTRL_REG_OFST _UINT32_(0x240)     /* (EC_REG_BANK_PD_MON_CTRL) PAD Monitor Control Register Offset */
#define EC_REG_BANK_PD_MON_INT_EN_REG_OFST _UINT32_(0x244)     /* (EC_REG_BANK_PD_MON_INT_EN) PAD Monitor Interrupt Enable Register Offset */
#define EC_REG_BANK_PD_MON_STS_REG_OFST _UINT32_(0x248)     /* (EC_REG_BANK_PD_MON_STS) PAD Monitor Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief EC_REG_BANK register API structure */
typedef struct
{  /* This block is designed to be accessed internally by the EC via the register interface. */
  __IO  uint8_t                        EC_REG_BANK_SRAM_CNFG; /**< Offset: 0x00 (R/W  8) SRAM Configuration Register */
  __I   uint8_t                        Reserved1[0x03];
  __IO  uint32_t                       EC_REG_BANK_AHB_ERR_ADDR; /**< Offset: 0x04 (R/W  32) AHB Error Address [0:0] */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint8_t                        EC_REG_BANK_AHB_ERR_CTRL; /**< Offset: 0x14 (R/W  8) AHB Error Control [0:0] AHB_ERROR_DISABLE, 0: EC memory exceptions are enabled. 1: EC memory exceptions are disabled. */
  __I   uint8_t                        Reserved3[0x03];
  __IO  uint32_t                       EC_REG_BANK_INTR_CTRL; /**< Offset: 0x18 (R/W  32) Interrupt Control [0:0] NVIC_EN (NVIC_EN) This bit enables Alternate NVIC IRQ's Vectors. The Alternate NVIC Vectors provides each interrupt event with a dedicated (direct) NVIC vector.            0 = Alternate NVIC vectors disabled, 1= Alternate NVIC vectors enabled */
  __IO  uint32_t                       EC_REG_BANK_ETM_CTRL; /**< Offset: 0x1C (R/W  32) ETM TRACE Enable [0:0] TRACE_EN (TRACE_EN) This bit enables the ARM TRACE debug port (ETM/ITM). The Trace Debug Interface pins are forced to the TRACE functions.            0 = ARM TRACE port disabled, 1= ARM TRACE port enabled */
  __IO  uint32_t                       EC_REG_BANK_DEBUG_CTRL; /**< Offset: 0x20 (R/W  32) Debug Enable Register */
  __IO  uint32_t                       EC_REG_BANK_OTP_LOCK; /**< Offset: 0x24 (R/W  32) Lock Register */
  __IO  uint32_t                       EC_REG_BANK_WDT_CNT; /**< Offset: 0x28 (R/W  32) WDT Event Count [3:0] WDT_COUNT (WDT_COUNT) These EC R/W bits are cleared to 0 on VCC1 POR, but not on a WDT.            Note: This field is written by Boot ROM firmware to indicate the number of times a WDT fired before loading a good EC code image. */
  __IO  uint32_t                       EC_REG_BANK_AESH_BSWAP_CTRL; /**< Offset: 0x2C (R/W  32) AES HASH Byte Swap Control Register. */
  __I   uint8_t                        Reserved4[0x34];
  __IO  uint32_t                       EC_REG_BANK_GPIO_BANK_PWR; /**< Offset: 0x64 (R/W  32) GPIO Bank Power Register */
  __I   uint8_t                        Reserved5[0x08];
  __IO  uint32_t                       EC_REG_BANK_SRAM_BNK_SWP; /**< Offset: 0x70 (R/W  32) Security Monitor SRAM Bank Swap Register */
  __I   uint8_t                        Reserved6[0x1C];
  __IO  uint32_t                       EC_REG_BANK_VW_SRC_CNGF; /**< Offset: 0x90 (R/W  32) Virtual Wire Source Configuration Register */
  __I   uint8_t                        Reserved7[0x30];
  __IO  uint32_t                       EC_REG_BANK_SPIMON_IB_CNGF; /**< Offset: 0xC4 (R/W  32) SPI Monitor's Inter-Bus Configuration Register */
  __I   uint8_t                        Reserved8[0x178];
  __IO  uint32_t                       EC_REG_BANK_PD_MON_CTRL; /**< Offset: 0x240 (R/W  32) PAD Monitor Control Register */
  __IO  uint32_t                       EC_REG_BANK_PD_MON_INT_EN; /**< Offset: 0x244 (R/W  32) PAD Monitor Interrupt Enable Register */
  __IO  uint32_t                       EC_REG_BANK_PD_MON_STS; /**< Offset: 0x248 (R/W  32) PAD Monitor Status Register */
} ec_reg_bank_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_EC_REG_BANK_COMPONENT_H_ */
