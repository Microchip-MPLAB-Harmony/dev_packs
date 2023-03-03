/*
 * Component description for PCR
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

/* file generated from device description version 2018-10-01T10:50:03Z */
#ifndef _CEC1702Q_PCR_COMPONENT_H_
#define _CEC1702Q_PCR_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PCR                                          */
/* ************************************************************************** */

/* -------- PCR_SYS_SLP_CTRL : (PCR Offset: 0x00) (R/W 32) System Sleep Control -------- */
#define PCR_SYS_SLP_CTRL_RESETVALUE           _UINT32_(0x00)                                       /*  (PCR_SYS_SLP_CTRL) System Sleep Control  Reset Value */

#define PCR_SYS_SLP_CTRL_SLP_MOD_Pos          _UINT32_(0)                                          /* (PCR_SYS_SLP_CTRL) Selects the System Sleep mode Position */
#define PCR_SYS_SLP_CTRL_SLP_MOD_Msk          (_UINT32_(0x1) << PCR_SYS_SLP_CTRL_SLP_MOD_Pos)      /* (PCR_SYS_SLP_CTRL) Selects the System Sleep mode Mask */
#define PCR_SYS_SLP_CTRL_SLP_MOD(value)       (PCR_SYS_SLP_CTRL_SLP_MOD_Msk & (_UINT32_(value) << PCR_SYS_SLP_CTRL_SLP_MOD_Pos)) /* Assigment of value for SLP_MOD in the PCR_SYS_SLP_CTRL register */
#define PCR_SYS_SLP_CTRL_TEST_Pos             _UINT32_(2)                                          /* (PCR_SYS_SLP_CTRL) Test bit Position */
#define PCR_SYS_SLP_CTRL_TEST_Msk             (_UINT32_(0x1) << PCR_SYS_SLP_CTRL_TEST_Pos)         /* (PCR_SYS_SLP_CTRL) Test bit Mask */
#define PCR_SYS_SLP_CTRL_TEST(value)          (PCR_SYS_SLP_CTRL_TEST_Msk & (_UINT32_(value) << PCR_SYS_SLP_CTRL_TEST_Pos)) /* Assigment of value for TEST in the PCR_SYS_SLP_CTRL register */
#define PCR_SYS_SLP_CTRL_SLP_ALL_Pos          _UINT32_(3)                                          /* (PCR_SYS_SLP_CTRL) Initiates the System Sleep mode Position */
#define PCR_SYS_SLP_CTRL_SLP_ALL_Msk          (_UINT32_(0x1) << PCR_SYS_SLP_CTRL_SLP_ALL_Pos)      /* (PCR_SYS_SLP_CTRL) Initiates the System Sleep mode Mask */
#define PCR_SYS_SLP_CTRL_SLP_ALL(value)       (PCR_SYS_SLP_CTRL_SLP_ALL_Msk & (_UINT32_(value) << PCR_SYS_SLP_CTRL_SLP_ALL_Pos)) /* Assigment of value for SLP_ALL in the PCR_SYS_SLP_CTRL register */
#define PCR_SYS_SLP_CTRL_Msk                  _UINT32_(0x0000000D)                                 /* (PCR_SYS_SLP_CTRL) Register Mask  */


/* -------- PCR_PROC_CLK_CTRL : (PCR Offset: 0x04) (R/W 32) Processor Clock Control Register [7:0] Processor Clock Divide Value (PROC_DIV)\n                           1: divide 48 MHz Ring Oscillator by 1.\n                   3: divide 48 MHz Ring Oscillator by 3.\n                         4: divide 48 MHz Ring Oscillator by 4.\n                         16: divide 48 MHz Ring Oscillator by 16.\n                 48: divide 48 MHz Ring Oscillator by 48.\n                 No other values are supported. -------- */
#define PCR_PROC_CLK_CTRL_RESETVALUE          _UINT32_(0x04)                                       /*  (PCR_PROC_CLK_CTRL) Processor Clock Control Register [7:0] Processor Clock Divide Value (PROC_DIV)\n                           1: divide 48 MHz Ring Oscillator by 1.\n                   3: divide 48 MHz Ring Oscillator by 3.\n                         4: divide 48 MHz Ring Oscillator by 4.\n                         16: divide 48 MHz Ring Oscillator by 16.\n                 48: divide 48 MHz Ring Oscillator by 48.\n                 No other values are supported.  Reset Value */

#define PCR_PROC_CLK_CTRL_DIV_Pos             _UINT32_(0)                                          /* (PCR_PROC_CLK_CTRL) Selects the EC clock rate Position */
#define PCR_PROC_CLK_CTRL_DIV_Msk             (_UINT32_(0xFF) << PCR_PROC_CLK_CTRL_DIV_Pos)        /* (PCR_PROC_CLK_CTRL) Selects the EC clock rate Mask */
#define PCR_PROC_CLK_CTRL_DIV(value)          (PCR_PROC_CLK_CTRL_DIV_Msk & (_UINT32_(value) << PCR_PROC_CLK_CTRL_DIV_Pos)) /* Assigment of value for DIV in the PCR_PROC_CLK_CTRL register */
#define   PCR_PROC_CLK_CTRL_DIV_DIV_BY_1_Val  _UINT32_(0x1)                                        /* (PCR_PROC_CLK_CTRL) 1: divide 48 MHz Ring Oscillator by 1  */
#define   PCR_PROC_CLK_CTRL_DIV_DIV_BY_3_Val  _UINT32_(0x3)                                        /* (PCR_PROC_CLK_CTRL) 3: divide 48 MHz Ring Oscillator by 3  */
#define   PCR_PROC_CLK_CTRL_DIV_DIV_BY_4_Val  _UINT32_(0x4)                                        /* (PCR_PROC_CLK_CTRL) 4: divide 48 MHz Ring Oscillator by 4  */
#define   PCR_PROC_CLK_CTRL_DIV_DIV_BY_16_Val _UINT32_(0x10)                                       /* (PCR_PROC_CLK_CTRL) 16: divide 48 MHz Ring Oscillator by 16  */
#define   PCR_PROC_CLK_CTRL_DIV_DIV_BY_48_Val _UINT32_(0x30)                                       /* (PCR_PROC_CLK_CTRL) 48: divide 48 MHz Ring Oscillator by 48  */
#define PCR_PROC_CLK_CTRL_DIV_DIV_BY_1        (PCR_PROC_CLK_CTRL_DIV_DIV_BY_1_Val << PCR_PROC_CLK_CTRL_DIV_Pos) /* (PCR_PROC_CLK_CTRL) 1: divide 48 MHz Ring Oscillator by 1 Position  */
#define PCR_PROC_CLK_CTRL_DIV_DIV_BY_3        (PCR_PROC_CLK_CTRL_DIV_DIV_BY_3_Val << PCR_PROC_CLK_CTRL_DIV_Pos) /* (PCR_PROC_CLK_CTRL) 3: divide 48 MHz Ring Oscillator by 3 Position  */
#define PCR_PROC_CLK_CTRL_DIV_DIV_BY_4        (PCR_PROC_CLK_CTRL_DIV_DIV_BY_4_Val << PCR_PROC_CLK_CTRL_DIV_Pos) /* (PCR_PROC_CLK_CTRL) 4: divide 48 MHz Ring Oscillator by 4 Position  */
#define PCR_PROC_CLK_CTRL_DIV_DIV_BY_16       (PCR_PROC_CLK_CTRL_DIV_DIV_BY_16_Val << PCR_PROC_CLK_CTRL_DIV_Pos) /* (PCR_PROC_CLK_CTRL) 16: divide 48 MHz Ring Oscillator by 16 Position  */
#define PCR_PROC_CLK_CTRL_DIV_DIV_BY_48       (PCR_PROC_CLK_CTRL_DIV_DIV_BY_48_Val << PCR_PROC_CLK_CTRL_DIV_Pos) /* (PCR_PROC_CLK_CTRL) 48: divide 48 MHz Ring Oscillator by 48 Position  */
#define PCR_PROC_CLK_CTRL_Msk                 _UINT32_(0x000000FF)                                 /* (PCR_PROC_CLK_CTRL) Register Mask  */


/* -------- PCR_SLOW_CLK_CTRL : (PCR Offset: 0x08) (R/W 32) Configures the EC_CLK clock domain -------- */
#define PCR_SLOW_CLK_CTRL_RESETVALUE          _UINT32_(0x1E0)                                      /*  (PCR_SLOW_CLK_CTRL) Configures the EC_CLK clock domain  Reset Value */

#define PCR_SLOW_CLK_CTRL_DIV_Pos             _UINT32_(0)                                          /* (PCR_SLOW_CLK_CTRL) DIV. n=Divide by n; 0=Clock off Position */
#define PCR_SLOW_CLK_CTRL_DIV_Msk             (_UINT32_(0x3FF) << PCR_SLOW_CLK_CTRL_DIV_Pos)       /* (PCR_SLOW_CLK_CTRL) DIV. n=Divide by n; 0=Clock off Mask */
#define PCR_SLOW_CLK_CTRL_DIV(value)          (PCR_SLOW_CLK_CTRL_DIV_Msk & (_UINT32_(value) << PCR_SLOW_CLK_CTRL_DIV_Pos)) /* Assigment of value for DIV in the PCR_SLOW_CLK_CTRL register */
#define PCR_SLOW_CLK_CTRL_Msk                 _UINT32_(0x000003FF)                                 /* (PCR_SLOW_CLK_CTRL) Register Mask  */


/* -------- PCR_OSC_ID : (PCR Offset: 0x0C) (R/W 32) Oscillator ID Register -------- */
#define PCR_OSC_ID_RESETVALUE                 _UINT32_(0x00)                                       /*  (PCR_OSC_ID) Oscillator ID Register  Reset Value */

#define PCR_OSC_ID_TEST_Pos                   _UINT32_(0)                                          /* (PCR_OSC_ID) Test bits Position */
#define PCR_OSC_ID_TEST_Msk                   (_UINT32_(0xFF) << PCR_OSC_ID_TEST_Pos)              /* (PCR_OSC_ID) Test bits Mask */
#define PCR_OSC_ID_TEST(value)                (PCR_OSC_ID_TEST_Msk & (_UINT32_(value) << PCR_OSC_ID_TEST_Pos)) /* Assigment of value for TEST in the PCR_OSC_ID register */
#define PCR_OSC_ID_PLL_LOCK_Pos               _UINT32_(8)                                          /* (PCR_OSC_ID) PLL Lock Status Position */
#define PCR_OSC_ID_PLL_LOCK_Msk               (_UINT32_(0x1) << PCR_OSC_ID_PLL_LOCK_Pos)           /* (PCR_OSC_ID) PLL Lock Status Mask */
#define PCR_OSC_ID_PLL_LOCK(value)            (PCR_OSC_ID_PLL_LOCK_Msk & (_UINT32_(value) << PCR_OSC_ID_PLL_LOCK_Pos)) /* Assigment of value for PLL_LOCK in the PCR_OSC_ID register */
#define PCR_OSC_ID_Msk                        _UINT32_(0x000001FF)                                 /* (PCR_OSC_ID) Register Mask  */


/* -------- PCR_PWR_RST_STS : (PCR Offset: 0x10) (R/W 32) PCR Power Reset Status Register -------- */
#define PCR_PWR_RST_STS_RESETVALUE            _UINT32_(0x00)                                       /*  (PCR_PWR_RST_STS) PCR Power Reset Status Register  Reset Value */

#define PCR_PWR_RST_STS_VCC_PWRGD_STS_Pos     _UINT32_(2)                                          /* (PCR_PWR_RST_STS) Indicates the status of VCC_PWRGD. 0 = PWRGD not asserted. 1 = PWRGD asserte. Position */
#define PCR_PWR_RST_STS_VCC_PWRGD_STS_Msk     (_UINT32_(0x1) << PCR_PWR_RST_STS_VCC_PWRGD_STS_Pos) /* (PCR_PWR_RST_STS) Indicates the status of VCC_PWRGD. 0 = PWRGD not asserted. 1 = PWRGD asserte. Mask */
#define PCR_PWR_RST_STS_VCC_PWRGD_STS(value)  (PCR_PWR_RST_STS_VCC_PWRGD_STS_Msk & (_UINT32_(value) << PCR_PWR_RST_STS_VCC_PWRGD_STS_Pos)) /* Assigment of value for VCC_PWRGD_STS in the PCR_PWR_RST_STS register */
#define PCR_PWR_RST_STS_RST_H_STS_Pos         _UINT32_(3)                                          /* (PCR_PWR_RST_STS) Indicates the status of RESET_VCC. 0 = reset active. 1 = reset not active. Position */
#define PCR_PWR_RST_STS_RST_H_STS_Msk         (_UINT32_(0x1) << PCR_PWR_RST_STS_RST_H_STS_Pos)     /* (PCR_PWR_RST_STS) Indicates the status of RESET_VCC. 0 = reset active. 1 = reset not active. Mask */
#define PCR_PWR_RST_STS_RST_H_STS(value)      (PCR_PWR_RST_STS_RST_H_STS_Msk & (_UINT32_(value) << PCR_PWR_RST_STS_RST_H_STS_Pos)) /* Assigment of value for RST_H_STS in the PCR_PWR_RST_STS register */
#define PCR_PWR_RST_STS_VBAT_RST_STS_Pos      _UINT32_(5)                                          /* (PCR_PWR_RST_STS) VBAT reset status 0 = No reset occurred while VTR was off or since the last time this bit was cleared. 1 = A reset occurred.(R/WC) Position */
#define PCR_PWR_RST_STS_VBAT_RST_STS_Msk      (_UINT32_(0x1) << PCR_PWR_RST_STS_VBAT_RST_STS_Pos)  /* (PCR_PWR_RST_STS) VBAT reset status 0 = No reset occurred while VTR was off or since the last time this bit was cleared. 1 = A reset occurred.(R/WC) Mask */
#define PCR_PWR_RST_STS_VBAT_RST_STS(value)   (PCR_PWR_RST_STS_VBAT_RST_STS_Msk & (_UINT32_(value) << PCR_PWR_RST_STS_VBAT_RST_STS_Pos)) /* Assigment of value for VBAT_RST_STS in the PCR_PWR_RST_STS register */
#define PCR_PWR_RST_STS_RST_VTR_STS_Pos       _UINT32_(6)                                          /* (PCR_PWR_RST_STS) Indicates the status of VTR_RESET.(R/WC)\n        0 = No reset occurred since the last time this bit was cleared.\n                1 = A reset occurred. Position */
#define PCR_PWR_RST_STS_RST_VTR_STS_Msk       (_UINT32_(0x1) << PCR_PWR_RST_STS_RST_VTR_STS_Pos)   /* (PCR_PWR_RST_STS) Indicates the status of VTR_RESET.(R/WC)\n        0 = No reset occurred since the last time this bit was cleared.\n                1 = A reset occurred. Mask */
#define PCR_PWR_RST_STS_RST_VTR_STS(value)    (PCR_PWR_RST_STS_RST_VTR_STS_Msk & (_UINT32_(value) << PCR_PWR_RST_STS_RST_VTR_STS_Pos)) /* Assigment of value for RST_VTR_STS in the PCR_PWR_RST_STS register */
#define PCR_PWR_RST_STS_JTAG_RST_STS_Pos      _UINT32_(7)                                          /* (PCR_PWR_RST_STS) Indicates s RESET_SYS was triggered by a JTAG action.(R/WC)\n          0 = No JTAG reset occurred since the last time this bit was cleared.\n           1 = A reset occurred because of a JATAG command. Position */
#define PCR_PWR_RST_STS_JTAG_RST_STS_Msk      (_UINT32_(0x1) << PCR_PWR_RST_STS_JTAG_RST_STS_Pos)  /* (PCR_PWR_RST_STS) Indicates s RESET_SYS was triggered by a JTAG action.(R/WC)\n          0 = No JTAG reset occurred since the last time this bit was cleared.\n           1 = A reset occurred because of a JATAG command. Mask */
#define PCR_PWR_RST_STS_JTAG_RST_STS(value)   (PCR_PWR_RST_STS_JTAG_RST_STS_Msk & (_UINT32_(value) << PCR_PWR_RST_STS_JTAG_RST_STS_Pos)) /* Assigment of value for JTAG_RST_STS in the PCR_PWR_RST_STS register */
#define PCR_PWR_RST_STS__32K_ACTIVE_Pos       _UINT32_(10)                                         /* (PCR_PWR_RST_STS) 32K_ACTIVE Position */
#define PCR_PWR_RST_STS__32K_ACTIVE_Msk       (_UINT32_(0x1) << PCR_PWR_RST_STS__32K_ACTIVE_Pos)   /* (PCR_PWR_RST_STS) 32K_ACTIVE Mask */
#define PCR_PWR_RST_STS__32K_ACTIVE(value)    (PCR_PWR_RST_STS__32K_ACTIVE_Msk & (_UINT32_(value) << PCR_PWR_RST_STS__32K_ACTIVE_Pos)) /* Assigment of value for _32K_ACTIVE in the PCR_PWR_RST_STS register */
#define PCR_PWR_RST_STS_PCICLK_ACTIVE_Pos     _UINT32_(11)                                         /* (PCR_PWR_RST_STS) PCICLK_ACTIVE Position */
#define PCR_PWR_RST_STS_PCICLK_ACTIVE_Msk     (_UINT32_(0x1) << PCR_PWR_RST_STS_PCICLK_ACTIVE_Pos) /* (PCR_PWR_RST_STS) PCICLK_ACTIVE Mask */
#define PCR_PWR_RST_STS_PCICLK_ACTIVE(value)  (PCR_PWR_RST_STS_PCICLK_ACTIVE_Msk & (_UINT32_(value) << PCR_PWR_RST_STS_PCICLK_ACTIVE_Pos)) /* Assigment of value for PCICLK_ACTIVE in the PCR_PWR_RST_STS register */
#define PCR_PWR_RST_STS_ESPI_CLK_ACTIVE_Pos   _UINT32_(12)                                         /* (PCR_PWR_RST_STS) ESPI_CLK_ACTIVE Position */
#define PCR_PWR_RST_STS_ESPI_CLK_ACTIVE_Msk   (_UINT32_(0x1) << PCR_PWR_RST_STS_ESPI_CLK_ACTIVE_Pos) /* (PCR_PWR_RST_STS) ESPI_CLK_ACTIVE Mask */
#define PCR_PWR_RST_STS_ESPI_CLK_ACTIVE(value) (PCR_PWR_RST_STS_ESPI_CLK_ACTIVE_Msk & (_UINT32_(value) << PCR_PWR_RST_STS_ESPI_CLK_ACTIVE_Pos)) /* Assigment of value for ESPI_CLK_ACTIVE in the PCR_PWR_RST_STS register */
#define PCR_PWR_RST_STS_Msk                   _UINT32_(0x00001CEC)                                 /* (PCR_PWR_RST_STS) Register Mask  */


/* -------- PCR_PWR_RST_CTRL : (PCR Offset: 0x14) (R/W 32) Power Reset Control Register -------- */
#define PCR_PWR_RST_CTRL_RESETVALUE           _UINT32_(0x101)                                      /*  (PCR_PWR_RST_CTRL) Power Reset Control Register  Reset Value */

#define PCR_PWR_RST_CTRL_PWR_INV_Pos          _UINT32_(0)                                          /* (PCR_PWR_RST_CTRL) Used by FW to control internal RESET_VCC signal function and external PWROK pin. This bit is read-only when VCC_PWRGD\n                is de-asserted low. Position */
#define PCR_PWR_RST_CTRL_PWR_INV_Msk          (_UINT32_(0x1) << PCR_PWR_RST_CTRL_PWR_INV_Pos)      /* (PCR_PWR_RST_CTRL) Used by FW to control internal RESET_VCC signal function and external PWROK pin. This bit is read-only when VCC_PWRGD\n                is de-asserted low. Mask */
#define PCR_PWR_RST_CTRL_PWR_INV(value)       (PCR_PWR_RST_CTRL_PWR_INV_Msk & (_UINT32_(value) << PCR_PWR_RST_CTRL_PWR_INV_Pos)) /* Assigment of value for PWR_INV in the PCR_PWR_RST_CTRL register */
#define PCR_PWR_RST_CTRL_H_RST_SEL_Pos        _UINT32_(8)                                          /* (PCR_PWR_RST_CTRL) Determines what generates the internal platform reset signal. 1=LRESET# pin; 0=eSPI PLTRST# VWire Position */
#define PCR_PWR_RST_CTRL_H_RST_SEL_Msk        (_UINT32_(0x1) << PCR_PWR_RST_CTRL_H_RST_SEL_Pos)    /* (PCR_PWR_RST_CTRL) Determines what generates the internal platform reset signal. 1=LRESET# pin; 0=eSPI PLTRST# VWire Mask */
#define PCR_PWR_RST_CTRL_H_RST_SEL(value)     (PCR_PWR_RST_CTRL_H_RST_SEL_Msk & (_UINT32_(value) << PCR_PWR_RST_CTRL_H_RST_SEL_Pos)) /* Assigment of value for H_RST_SEL in the PCR_PWR_RST_CTRL register */
#define PCR_PWR_RST_CTRL_Msk                  _UINT32_(0x00000101)                                 /* (PCR_PWR_RST_CTRL) Register Mask  */


/* -------- PCR_SYS_RST : (PCR Offset: 0x18) (R/W 32) System Reset Register -------- */
#define PCR_SYS_RST_RESETVALUE                _UINT32_(0x00)                                       /*  (PCR_SYS_RST) System Reset Register  Reset Value */

#define PCR_SYS_RST_SOFT_SYS_RST_Pos          _UINT32_(8)                                          /* (PCR_SYS_RST) A write of a 1 forces an assertion of the RESET_SYS reset signal, resetting the device. A write of 0 has no effect. Position */
#define PCR_SYS_RST_SOFT_SYS_RST_Msk          (_UINT32_(0x1) << PCR_SYS_RST_SOFT_SYS_RST_Pos)      /* (PCR_SYS_RST) A write of a 1 forces an assertion of the RESET_SYS reset signal, resetting the device. A write of 0 has no effect. Mask */
#define PCR_SYS_RST_SOFT_SYS_RST(value)       (PCR_SYS_RST_SOFT_SYS_RST_Msk & (_UINT32_(value) << PCR_SYS_RST_SOFT_SYS_RST_Pos)) /* Assigment of value for SOFT_SYS_RST in the PCR_SYS_RST register */
#define PCR_SYS_RST_Msk                       _UINT32_(0x00000100)                                 /* (PCR_SYS_RST) Register Mask  */


/* -------- PCR_SLP_EN_0 : (PCR Offset: 0x30) (R/W 32) Sleep Enable 0 Register -------- */
#define PCR_SLP_EN_0_RESETVALUE               _UINT32_(0x00)                                       /*  (PCR_SLP_EN_0) Sleep Enable 0 Register  Reset Value */

#define PCR_SLP_EN_0_JTAG_STAP_SLP_EN_Pos     _UINT32_(0)                                          /* (PCR_SLP_EN_0) JTAG STAP Enable Position */
#define PCR_SLP_EN_0_JTAG_STAP_SLP_EN_Msk     (_UINT32_(0x1) << PCR_SLP_EN_0_JTAG_STAP_SLP_EN_Pos) /* (PCR_SLP_EN_0) JTAG STAP Enable Mask */
#define PCR_SLP_EN_0_JTAG_STAP_SLP_EN(value)  (PCR_SLP_EN_0_JTAG_STAP_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_0_JTAG_STAP_SLP_EN_Pos)) /* Assigment of value for JTAG_STAP_SLP_EN in the PCR_SLP_EN_0 register */
#define PCR_SLP_EN_0_OTP_SLP_EN_Pos           _UINT32_(1)                                          /* (PCR_SLP_EN_0) eFuse Enable Position */
#define PCR_SLP_EN_0_OTP_SLP_EN_Msk           (_UINT32_(0x1) << PCR_SLP_EN_0_OTP_SLP_EN_Pos)       /* (PCR_SLP_EN_0) eFuse Enable Mask */
#define PCR_SLP_EN_0_OTP_SLP_EN(value)        (PCR_SLP_EN_0_OTP_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_0_OTP_SLP_EN_Pos)) /* Assigment of value for OTP_SLP_EN in the PCR_SLP_EN_0 register */
#define PCR_SLP_EN_0_Msk                      _UINT32_(0x00000003)                                 /* (PCR_SLP_EN_0) Register Mask  */


/* -------- PCR_SLP_EN_1 : (PCR Offset: 0x34) (R/W 32) Sleep Enable 1 Register -------- */
#define PCR_SLP_EN_1_RESETVALUE               _UINT32_(0x00)                                       /*  (PCR_SLP_EN_1) Sleep Enable 1 Register  Reset Value */

#define PCR_SLP_EN_1_INT_SLP_EN_Pos           _UINT32_(0)                                          /* (PCR_SLP_EN_1) Interrupt Sleep Enable Position */
#define PCR_SLP_EN_1_INT_SLP_EN_Msk           (_UINT32_(0x1) << PCR_SLP_EN_1_INT_SLP_EN_Pos)       /* (PCR_SLP_EN_1) Interrupt Sleep Enable Mask */
#define PCR_SLP_EN_1_INT_SLP_EN(value)        (PCR_SLP_EN_1_INT_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_INT_SLP_EN_Pos)) /* Assigment of value for INT_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_TACH0_SLP_EN_Pos         _UINT32_(2)                                          /* (PCR_SLP_EN_1) TACH0 Sleep Enable Position */
#define PCR_SLP_EN_1_TACH0_SLP_EN_Msk         (_UINT32_(0x1) << PCR_SLP_EN_1_TACH0_SLP_EN_Pos)     /* (PCR_SLP_EN_1) TACH0 Sleep Enable Mask */
#define PCR_SLP_EN_1_TACH0_SLP_EN(value)      (PCR_SLP_EN_1_TACH0_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_TACH0_SLP_EN_Pos)) /* Assigment of value for TACH0_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_PWM0_SLP_EN_Pos          _UINT32_(4)                                          /* (PCR_SLP_EN_1) PWM0 Sleep Enable Position */
#define PCR_SLP_EN_1_PWM0_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_1_PWM0_SLP_EN_Pos)      /* (PCR_SLP_EN_1) PWM0 Sleep Enable Mask */
#define PCR_SLP_EN_1_PWM0_SLP_EN(value)       (PCR_SLP_EN_1_PWM0_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_PWM0_SLP_EN_Pos)) /* Assigment of value for PWM0_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_PMC_SLP_EN_Pos           _UINT32_(5)                                          /* (PCR_SLP_EN_1) PMC Sleep Enable Position */
#define PCR_SLP_EN_1_PMC_SLP_EN_Msk           (_UINT32_(0x1) << PCR_SLP_EN_1_PMC_SLP_EN_Pos)       /* (PCR_SLP_EN_1) PMC Sleep Enable Mask */
#define PCR_SLP_EN_1_PMC_SLP_EN(value)        (PCR_SLP_EN_1_PMC_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_PMC_SLP_EN_Pos)) /* Assigment of value for PMC_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_DMA_SLP_EN_Pos           _UINT32_(6)                                          /* (PCR_SLP_EN_1) DMA Sleep Enable Position */
#define PCR_SLP_EN_1_DMA_SLP_EN_Msk           (_UINT32_(0x1) << PCR_SLP_EN_1_DMA_SLP_EN_Pos)       /* (PCR_SLP_EN_1) DMA Sleep Enable Mask */
#define PCR_SLP_EN_1_DMA_SLP_EN(value)        (PCR_SLP_EN_1_DMA_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_DMA_SLP_EN_Pos)) /* Assigment of value for DMA_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_TFDP_SLP_EN_Pos          _UINT32_(7)                                          /* (PCR_SLP_EN_1) TFDP Sleep Enable Position */
#define PCR_SLP_EN_1_TFDP_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_1_TFDP_SLP_EN_Pos)      /* (PCR_SLP_EN_1) TFDP Sleep Enable Mask */
#define PCR_SLP_EN_1_TFDP_SLP_EN(value)       (PCR_SLP_EN_1_TFDP_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_TFDP_SLP_EN_Pos)) /* Assigment of value for TFDP_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_PROC_SLP_EN_Pos          _UINT32_(8)                                          /* (PCR_SLP_EN_1) PROCESSOR Sleep Enable Position */
#define PCR_SLP_EN_1_PROC_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_1_PROC_SLP_EN_Pos)      /* (PCR_SLP_EN_1) PROCESSOR Sleep Enable Mask */
#define PCR_SLP_EN_1_PROC_SLP_EN(value)       (PCR_SLP_EN_1_PROC_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_PROC_SLP_EN_Pos)) /* Assigment of value for PROC_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_WDT_SLP_EN_Pos           _UINT32_(9)                                          /* (PCR_SLP_EN_1) WDT Sleep Enable Position */
#define PCR_SLP_EN_1_WDT_SLP_EN_Msk           (_UINT32_(0x1) << PCR_SLP_EN_1_WDT_SLP_EN_Pos)       /* (PCR_SLP_EN_1) WDT Sleep Enable Mask */
#define PCR_SLP_EN_1_WDT_SLP_EN(value)        (PCR_SLP_EN_1_WDT_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_WDT_SLP_EN_Pos)) /* Assigment of value for WDT_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_SMB0_SLP_EN_Pos          _UINT32_(10)                                         /* (PCR_SLP_EN_1) SMB0 Sleep Enable Position */
#define PCR_SLP_EN_1_SMB0_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_1_SMB0_SLP_EN_Pos)      /* (PCR_SLP_EN_1) SMB0 Sleep Enable Mask */
#define PCR_SLP_EN_1_SMB0_SLP_EN(value)       (PCR_SLP_EN_1_SMB0_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_SMB0_SLP_EN_Pos)) /* Assigment of value for SMB0_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_TACH1_SLP_EN_Pos         _UINT32_(11)                                         /* (PCR_SLP_EN_1) TACH1 Sleep Enable Position */
#define PCR_SLP_EN_1_TACH1_SLP_EN_Msk         (_UINT32_(0x1) << PCR_SLP_EN_1_TACH1_SLP_EN_Pos)     /* (PCR_SLP_EN_1) TACH1 Sleep Enable Mask */
#define PCR_SLP_EN_1_TACH1_SLP_EN(value)      (PCR_SLP_EN_1_TACH1_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_TACH1_SLP_EN_Pos)) /* Assigment of value for TACH1_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_PWM1_SLP_EN_Pos          _UINT32_(20)                                         /* (PCR_SLP_EN_1) PWM1 Sleep Enable Position */
#define PCR_SLP_EN_1_PWM1_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_1_PWM1_SLP_EN_Pos)      /* (PCR_SLP_EN_1) PWM1 Sleep Enable Mask */
#define PCR_SLP_EN_1_PWM1_SLP_EN(value)       (PCR_SLP_EN_1_PWM1_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_PWM1_SLP_EN_Pos)) /* Assigment of value for PWM1_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_PWM2_SLP_EN_Pos          _UINT32_(21)                                         /* (PCR_SLP_EN_1) PWM2 Sleep Enable Position */
#define PCR_SLP_EN_1_PWM2_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_1_PWM2_SLP_EN_Pos)      /* (PCR_SLP_EN_1) PWM2 Sleep Enable Mask */
#define PCR_SLP_EN_1_PWM2_SLP_EN(value)       (PCR_SLP_EN_1_PWM2_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_PWM2_SLP_EN_Pos)) /* Assigment of value for PWM2_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_PWM3_SLP_EN_Pos          _UINT32_(22)                                         /* (PCR_SLP_EN_1) PWM3 Sleep Enable Position */
#define PCR_SLP_EN_1_PWM3_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_1_PWM3_SLP_EN_Pos)      /* (PCR_SLP_EN_1) PWM3 Sleep Enable Mask */
#define PCR_SLP_EN_1_PWM3_SLP_EN(value)       (PCR_SLP_EN_1_PWM3_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_PWM3_SLP_EN_Pos)) /* Assigment of value for PWM3_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_PWM4_SLP_EN_Pos          _UINT32_(23)                                         /* (PCR_SLP_EN_1) PWM4 Sleep Enable Position */
#define PCR_SLP_EN_1_PWM4_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_1_PWM4_SLP_EN_Pos)      /* (PCR_SLP_EN_1) PWM4 Sleep Enable Mask */
#define PCR_SLP_EN_1_PWM4_SLP_EN(value)       (PCR_SLP_EN_1_PWM4_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_PWM4_SLP_EN_Pos)) /* Assigment of value for PWM4_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_PWM5_SLP_EN_Pos          _UINT32_(24)                                         /* (PCR_SLP_EN_1) PWM5 Sleep Enable Position */
#define PCR_SLP_EN_1_PWM5_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_1_PWM5_SLP_EN_Pos)      /* (PCR_SLP_EN_1) PWM5 Sleep Enable Mask */
#define PCR_SLP_EN_1_PWM5_SLP_EN(value)       (PCR_SLP_EN_1_PWM5_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_PWM5_SLP_EN_Pos)) /* Assigment of value for PWM5_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_EC_REG_BANK_SLP_EN_Pos   _UINT32_(29)                                         /* (PCR_SLP_EN_1) EC_REG_BANK Sleep Enable Position */
#define PCR_SLP_EN_1_EC_REG_BANK_SLP_EN_Msk   (_UINT32_(0x1) << PCR_SLP_EN_1_EC_REG_BANK_SLP_EN_Pos) /* (PCR_SLP_EN_1) EC_REG_BANK Sleep Enable Mask */
#define PCR_SLP_EN_1_EC_REG_BANK_SLP_EN(value) (PCR_SLP_EN_1_EC_REG_BANK_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_EC_REG_BANK_SLP_EN_Pos)) /* Assigment of value for EC_REG_BANK_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_TMR16_0_SLP_EN_Pos       _UINT32_(30)                                         /* (PCR_SLP_EN_1) TIMER16_0 Sleep Enable Position */
#define PCR_SLP_EN_1_TMR16_0_SLP_EN_Msk       (_UINT32_(0x1) << PCR_SLP_EN_1_TMR16_0_SLP_EN_Pos)   /* (PCR_SLP_EN_1) TIMER16_0 Sleep Enable Mask */
#define PCR_SLP_EN_1_TMR16_0_SLP_EN(value)    (PCR_SLP_EN_1_TMR16_0_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_TMR16_0_SLP_EN_Pos)) /* Assigment of value for TMR16_0_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_TMR16_1_SLP_EN_Pos       _UINT32_(31)                                         /* (PCR_SLP_EN_1) TIMER16_1 Sleep Enable Position */
#define PCR_SLP_EN_1_TMR16_1_SLP_EN_Msk       (_UINT32_(0x1) << PCR_SLP_EN_1_TMR16_1_SLP_EN_Pos)   /* (PCR_SLP_EN_1) TIMER16_1 Sleep Enable Mask */
#define PCR_SLP_EN_1_TMR16_1_SLP_EN(value)    (PCR_SLP_EN_1_TMR16_1_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_TMR16_1_SLP_EN_Pos)) /* Assigment of value for TMR16_1_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_Msk                      _UINT32_(0xE1F00FF5)                                 /* (PCR_SLP_EN_1) Register Mask  */


/* -------- PCR_SLP_EN_2 : (PCR Offset: 0x38) (R/W 32) Sleep Enable 2 Register -------- */
#define PCR_SLP_EN_2_RESETVALUE               _UINT32_(0x00)                                       /*  (PCR_SLP_EN_2) Sleep Enable 2 Register  Reset Value */

#define PCR_SLP_EN_2_UART0_SLP_EN_Pos         _UINT32_(1)                                          /* (PCR_SLP_EN_2) UART 0 Sleep Enable Position */
#define PCR_SLP_EN_2_UART0_SLP_EN_Msk         (_UINT32_(0x1) << PCR_SLP_EN_2_UART0_SLP_EN_Pos)     /* (PCR_SLP_EN_2) UART 0 Sleep Enable Mask */
#define PCR_SLP_EN_2_UART0_SLP_EN(value)      (PCR_SLP_EN_2_UART0_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_2_UART0_SLP_EN_Pos)) /* Assigment of value for UART0_SLP_EN in the PCR_SLP_EN_2 register */
#define PCR_SLP_EN_2_UART1_SLP_EN_Pos         _UINT32_(2)                                          /* (PCR_SLP_EN_2) UART 1 Sleep Enable Position */
#define PCR_SLP_EN_2_UART1_SLP_EN_Msk         (_UINT32_(0x1) << PCR_SLP_EN_2_UART1_SLP_EN_Pos)     /* (PCR_SLP_EN_2) UART 1 Sleep Enable Mask */
#define PCR_SLP_EN_2_UART1_SLP_EN(value)      (PCR_SLP_EN_2_UART1_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_2_UART1_SLP_EN_Pos)) /* Assigment of value for UART1_SLP_EN in the PCR_SLP_EN_2 register */
#define PCR_SLP_EN_2_GLBL_CFG_SLP_EN_Pos      _UINT32_(12)                                         /* (PCR_SLP_EN_2) GLBL_CFG Position */
#define PCR_SLP_EN_2_GLBL_CFG_SLP_EN_Msk      (_UINT32_(0x1) << PCR_SLP_EN_2_GLBL_CFG_SLP_EN_Pos)  /* (PCR_SLP_EN_2) GLBL_CFG Mask */
#define PCR_SLP_EN_2_GLBL_CFG_SLP_EN(value)   (PCR_SLP_EN_2_GLBL_CFG_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_2_GLBL_CFG_SLP_EN_Pos)) /* Assigment of value for GLBL_CFG_SLP_EN in the PCR_SLP_EN_2 register */
#define PCR_SLP_EN_2_RTC_SLP_EN_Pos           _UINT32_(18)                                         /* (PCR_SLP_EN_2) RTC Sleep Enable Position */
#define PCR_SLP_EN_2_RTC_SLP_EN_Msk           (_UINT32_(0x1) << PCR_SLP_EN_2_RTC_SLP_EN_Pos)       /* (PCR_SLP_EN_2) RTC Sleep Enable Mask */
#define PCR_SLP_EN_2_RTC_SLP_EN(value)        (PCR_SLP_EN_2_RTC_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_2_RTC_SLP_EN_Pos)) /* Assigment of value for RTC_SLP_EN in the PCR_SLP_EN_2 register */
#define PCR_SLP_EN_2_Msk                      _UINT32_(0x00041006)                                 /* (PCR_SLP_EN_2) Register Mask  */


/* -------- PCR_SLP_EN_3 : (PCR Offset: 0x3C) (R/W 32) Sleep Enable 3 Register -------- */
#define PCR_SLP_EN_3_RESETVALUE               _UINT32_(0x00)                                       /*  (PCR_SLP_EN_3) Sleep Enable 3 Register  Reset Value */

#define PCR_SLP_EN_3_ADC_SLP_EN_Pos           _UINT32_(3)                                          /* (PCR_SLP_EN_3) ADC Sleep Enable Position */
#define PCR_SLP_EN_3_ADC_SLP_EN_Msk           (_UINT32_(0x1) << PCR_SLP_EN_3_ADC_SLP_EN_Pos)       /* (PCR_SLP_EN_3) ADC Sleep Enable Mask */
#define PCR_SLP_EN_3_ADC_SLP_EN(value)        (PCR_SLP_EN_3_ADC_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_ADC_SLP_EN_Pos)) /* Assigment of value for ADC_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_GP_SPI0_SLP_EN_Pos       _UINT32_(9)                                          /* (PCR_SLP_EN_3) GP SPI0 Sleep Enable Position */
#define PCR_SLP_EN_3_GP_SPI0_SLP_EN_Msk       (_UINT32_(0x1) << PCR_SLP_EN_3_GP_SPI0_SLP_EN_Pos)   /* (PCR_SLP_EN_3) GP SPI0 Sleep Enable Mask */
#define PCR_SLP_EN_3_GP_SPI0_SLP_EN(value)    (PCR_SLP_EN_3_GP_SPI0_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_GP_SPI0_SLP_EN_Pos)) /* Assigment of value for GP_SPI0_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_HTMR_0_SLP_EN_Pos        _UINT32_(10)                                         /* (PCR_SLP_EN_3) HTIMER 0 Sleep Enable Position */
#define PCR_SLP_EN_3_HTMR_0_SLP_EN_Msk        (_UINT32_(0x1) << PCR_SLP_EN_3_HTMR_0_SLP_EN_Pos)    /* (PCR_SLP_EN_3) HTIMER 0 Sleep Enable Mask */
#define PCR_SLP_EN_3_HTMR_0_SLP_EN(value)     (PCR_SLP_EN_3_HTMR_0_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_HTMR_0_SLP_EN_Pos)) /* Assigment of value for HTMR_0_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_KEYSCAN_SLP_EN_Pos       _UINT32_(11)                                         /* (PCR_SLP_EN_3) KEYSCAN Sleep Enable Position */
#define PCR_SLP_EN_3_KEYSCAN_SLP_EN_Msk       (_UINT32_(0x1) << PCR_SLP_EN_3_KEYSCAN_SLP_EN_Pos)   /* (PCR_SLP_EN_3) KEYSCAN Sleep Enable Mask */
#define PCR_SLP_EN_3_KEYSCAN_SLP_EN(value)    (PCR_SLP_EN_3_KEYSCAN_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_KEYSCAN_SLP_EN_Pos)) /* Assigment of value for KEYSCAN_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_RPMPWM_SLP_EN_Pos        _UINT32_(12)                                         /* (PCR_SLP_EN_3) RPM-PWM Sleep Enable Position */
#define PCR_SLP_EN_3_RPMPWM_SLP_EN_Msk        (_UINT32_(0x1) << PCR_SLP_EN_3_RPMPWM_SLP_EN_Pos)    /* (PCR_SLP_EN_3) RPM-PWM Sleep Enable Mask */
#define PCR_SLP_EN_3_RPMPWM_SLP_EN(value)     (PCR_SLP_EN_3_RPMPWM_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_RPMPWM_SLP_EN_Pos)) /* Assigment of value for RPMPWM_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_SMB1_SLP_EN_Pos          _UINT32_(13)                                         /* (PCR_SLP_EN_3) SMB1 Sleep Enable Position */
#define PCR_SLP_EN_3_SMB1_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_3_SMB1_SLP_EN_Pos)      /* (PCR_SLP_EN_3) SMB1 Sleep Enable Mask */
#define PCR_SLP_EN_3_SMB1_SLP_EN(value)       (PCR_SLP_EN_3_SMB1_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_SMB1_SLP_EN_Pos)) /* Assigment of value for SMB1_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_SMB2_SLP_EN_Pos          _UINT32_(14)                                         /* (PCR_SLP_EN_3) SMB2 Sleep Enable Position */
#define PCR_SLP_EN_3_SMB2_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_3_SMB2_SLP_EN_Pos)      /* (PCR_SLP_EN_3) SMB2 Sleep Enable Mask */
#define PCR_SLP_EN_3_SMB2_SLP_EN(value)       (PCR_SLP_EN_3_SMB2_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_SMB2_SLP_EN_Pos)) /* Assigment of value for SMB2_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_SMB3_SLP_EN_Pos          _UINT32_(15)                                         /* (PCR_SLP_EN_3) SMB3 Sleep Enable Position */
#define PCR_SLP_EN_3_SMB3_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_3_SMB3_SLP_EN_Pos)      /* (PCR_SLP_EN_3) SMB3 Sleep Enable Mask */
#define PCR_SLP_EN_3_SMB3_SLP_EN(value)       (PCR_SLP_EN_3_SMB3_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_SMB3_SLP_EN_Pos)) /* Assigment of value for SMB3_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_LED0_SLP_EN_Pos          _UINT32_(16)                                         /* (PCR_SLP_EN_3) LED0 Sleep Enable Position */
#define PCR_SLP_EN_3_LED0_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_3_LED0_SLP_EN_Pos)      /* (PCR_SLP_EN_3) LED0 Sleep Enable Mask */
#define PCR_SLP_EN_3_LED0_SLP_EN(value)       (PCR_SLP_EN_3_LED0_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_LED0_SLP_EN_Pos)) /* Assigment of value for LED0_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_LED1_SLP_EN_Pos          _UINT32_(17)                                         /* (PCR_SLP_EN_3) LED1 Sleep Enable Position */
#define PCR_SLP_EN_3_LED1_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_3_LED1_SLP_EN_Pos)      /* (PCR_SLP_EN_3) LED1 Sleep Enable Mask */
#define PCR_SLP_EN_3_LED1_SLP_EN(value)       (PCR_SLP_EN_3_LED1_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_LED1_SLP_EN_Pos)) /* Assigment of value for LED1_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_TMR16_2_SLP_EN_Pos       _UINT32_(21)                                         /* (PCR_SLP_EN_3) TIMER16_2_Sleep Enable Position */
#define PCR_SLP_EN_3_TMR16_2_SLP_EN_Msk       (_UINT32_(0x1) << PCR_SLP_EN_3_TMR16_2_SLP_EN_Pos)   /* (PCR_SLP_EN_3) TIMER16_2_Sleep Enable Mask */
#define PCR_SLP_EN_3_TMR16_2_SLP_EN(value)    (PCR_SLP_EN_3_TMR16_2_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_TMR16_2_SLP_EN_Pos)) /* Assigment of value for TMR16_2_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_TMR16_3_SLP_EN_Pos       _UINT32_(22)                                         /* (PCR_SLP_EN_3) TIMER16_3 Sleep Enable Position */
#define PCR_SLP_EN_3_TMR16_3_SLP_EN_Msk       (_UINT32_(0x1) << PCR_SLP_EN_3_TMR16_3_SLP_EN_Pos)   /* (PCR_SLP_EN_3) TIMER16_3 Sleep Enable Mask */
#define PCR_SLP_EN_3_TMR16_3_SLP_EN(value)    (PCR_SLP_EN_3_TMR16_3_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_TMR16_3_SLP_EN_Pos)) /* Assigment of value for TMR16_3_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_TMR32_0_SLP_EN_Pos       _UINT32_(23)                                         /* (PCR_SLP_EN_3) TIMER32_0 Sleep Enable Position */
#define PCR_SLP_EN_3_TMR32_0_SLP_EN_Msk       (_UINT32_(0x1) << PCR_SLP_EN_3_TMR32_0_SLP_EN_Pos)   /* (PCR_SLP_EN_3) TIMER32_0 Sleep Enable Mask */
#define PCR_SLP_EN_3_TMR32_0_SLP_EN(value)    (PCR_SLP_EN_3_TMR32_0_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_TMR32_0_SLP_EN_Pos)) /* Assigment of value for TMR32_0_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_TMR32_1_SLP_EN_Pos       _UINT32_(24)                                         /* (PCR_SLP_EN_3) TIMER32_1 Sleep Enable Position */
#define PCR_SLP_EN_3_TMR32_1_SLP_EN_Msk       (_UINT32_(0x1) << PCR_SLP_EN_3_TMR32_1_SLP_EN_Pos)   /* (PCR_SLP_EN_3) TIMER32_1 Sleep Enable Mask */
#define PCR_SLP_EN_3_TMR32_1_SLP_EN(value)    (PCR_SLP_EN_3_TMR32_1_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_TMR32_1_SLP_EN_Pos)) /* Assigment of value for TMR32_1_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_HTMR_1_SLP_EN_Pos        _UINT32_(29)                                         /* (PCR_SLP_EN_3) HTIMER 1 Sleep Enable Position */
#define PCR_SLP_EN_3_HTMR_1_SLP_EN_Msk        (_UINT32_(0x1) << PCR_SLP_EN_3_HTMR_1_SLP_EN_Pos)    /* (PCR_SLP_EN_3) HTIMER 1 Sleep Enable Mask */
#define PCR_SLP_EN_3_HTMR_1_SLP_EN(value)     (PCR_SLP_EN_3_HTMR_1_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_HTMR_1_SLP_EN_Pos)) /* Assigment of value for HTMR_1_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_CCTMR_SLP_EN_Pos         _UINT32_(30)                                         /* (PCR_SLP_EN_3) Capture Compare Timer Sleep Enable Position */
#define PCR_SLP_EN_3_CCTMR_SLP_EN_Msk         (_UINT32_(0x1) << PCR_SLP_EN_3_CCTMR_SLP_EN_Pos)     /* (PCR_SLP_EN_3) Capture Compare Timer Sleep Enable Mask */
#define PCR_SLP_EN_3_CCTMR_SLP_EN(value)      (PCR_SLP_EN_3_CCTMR_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_CCTMR_SLP_EN_Pos)) /* Assigment of value for CCTMR_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_Msk                      _UINT32_(0x61E3FE08)                                 /* (PCR_SLP_EN_3) Register Mask  */


/* -------- PCR_SLP_EN_4 : (PCR Offset: 0x40) (R/W 32) Sleep Enable 4 Register -------- */
#define PCR_SLP_EN_4_RESETVALUE               _UINT32_(0x00)                                       /*  (PCR_SLP_EN_4) Sleep Enable 4 Register  Reset Value */

#define PCR_SLP_EN_4_PWM10_SLP_EN_Pos         _UINT32_(0)                                          /* (PCR_SLP_EN_4) PWM10 Sleep Enable Position */
#define PCR_SLP_EN_4_PWM10_SLP_EN_Msk         (_UINT32_(0x1) << PCR_SLP_EN_4_PWM10_SLP_EN_Pos)     /* (PCR_SLP_EN_4) PWM10 Sleep Enable Mask */
#define PCR_SLP_EN_4_PWM10_SLP_EN(value)      (PCR_SLP_EN_4_PWM10_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_4_PWM10_SLP_EN_Pos)) /* Assigment of value for PWM10_SLP_EN in the PCR_SLP_EN_4 register */
#define PCR_SLP_EN_4_CNT_TMER0_SLP_EN_Pos     _UINT32_(2)                                          /* (PCR_SLP_EN_4) CNT_TMER0 Sleep Enable Position */
#define PCR_SLP_EN_4_CNT_TMER0_SLP_EN_Msk     (_UINT32_(0x1) << PCR_SLP_EN_4_CNT_TMER0_SLP_EN_Pos) /* (PCR_SLP_EN_4) CNT_TMER0 Sleep Enable Mask */
#define PCR_SLP_EN_4_CNT_TMER0_SLP_EN(value)  (PCR_SLP_EN_4_CNT_TMER0_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_4_CNT_TMER0_SLP_EN_Pos)) /* Assigment of value for CNT_TMER0_SLP_EN in the PCR_SLP_EN_4 register */
#define PCR_SLP_EN_4_CNT_TMER1_SLP_EN_Pos     _UINT32_(3)                                          /* (PCR_SLP_EN_4) CNT_TMER1 Sleep Enable Position */
#define PCR_SLP_EN_4_CNT_TMER1_SLP_EN_Msk     (_UINT32_(0x1) << PCR_SLP_EN_4_CNT_TMER1_SLP_EN_Pos) /* (PCR_SLP_EN_4) CNT_TMER1 Sleep Enable Mask */
#define PCR_SLP_EN_4_CNT_TMER1_SLP_EN(value)  (PCR_SLP_EN_4_CNT_TMER1_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_4_CNT_TMER1_SLP_EN_Pos)) /* Assigment of value for CNT_TMER1_SLP_EN in the PCR_SLP_EN_4 register */
#define PCR_SLP_EN_4_CNT_TMER2_SLP_EN_Pos     _UINT32_(4)                                          /* (PCR_SLP_EN_4) CNT_TMER2 Sleep Enable Position */
#define PCR_SLP_EN_4_CNT_TMER2_SLP_EN_Msk     (_UINT32_(0x1) << PCR_SLP_EN_4_CNT_TMER2_SLP_EN_Pos) /* (PCR_SLP_EN_4) CNT_TMER2 Sleep Enable Mask */
#define PCR_SLP_EN_4_CNT_TMER2_SLP_EN(value)  (PCR_SLP_EN_4_CNT_TMER2_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_4_CNT_TMER2_SLP_EN_Pos)) /* Assigment of value for CNT_TMER2_SLP_EN in the PCR_SLP_EN_4 register */
#define PCR_SLP_EN_4_CNT_TMER3_SLP_EN_Pos     _UINT32_(5)                                          /* (PCR_SLP_EN_4) CNT_TMER3 Sleep Enable Position */
#define PCR_SLP_EN_4_CNT_TMER3_SLP_EN_Msk     (_UINT32_(0x1) << PCR_SLP_EN_4_CNT_TMER3_SLP_EN_Pos) /* (PCR_SLP_EN_4) CNT_TMER3 Sleep Enable Mask */
#define PCR_SLP_EN_4_CNT_TMER3_SLP_EN(value)  (PCR_SLP_EN_4_CNT_TMER3_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_4_CNT_TMER3_SLP_EN_Pos)) /* Assigment of value for CNT_TMER3_SLP_EN in the PCR_SLP_EN_4 register */
#define PCR_SLP_EN_4_RTOS_SLP_EN_Pos          _UINT32_(6)                                          /* (PCR_SLP_EN_4) PWM6 Sleep Enable Position */
#define PCR_SLP_EN_4_RTOS_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_4_RTOS_SLP_EN_Pos)      /* (PCR_SLP_EN_4) PWM6 Sleep Enable Mask */
#define PCR_SLP_EN_4_RTOS_SLP_EN(value)       (PCR_SLP_EN_4_RTOS_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_4_RTOS_SLP_EN_Pos)) /* Assigment of value for RTOS_SLP_EN in the PCR_SLP_EN_4 register */
#define PCR_SLP_EN_4_RPMPWM1_SLP_EN_Pos       _UINT32_(7)                                          /* (PCR_SLP_EN_4) RPMPWM 1 Sleep Enable Position */
#define PCR_SLP_EN_4_RPMPWM1_SLP_EN_Msk       (_UINT32_(0x1) << PCR_SLP_EN_4_RPMPWM1_SLP_EN_Pos)   /* (PCR_SLP_EN_4) RPMPWM 1 Sleep Enable Mask */
#define PCR_SLP_EN_4_RPMPWM1_SLP_EN(value)    (PCR_SLP_EN_4_RPMPWM1_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_4_RPMPWM1_SLP_EN_Pos)) /* Assigment of value for RPMPWM1_SLP_EN in the PCR_SLP_EN_4 register */
#define PCR_SLP_EN_4_QMSPI_SLP_EN_Pos         _UINT32_(8)                                          /* (PCR_SLP_EN_4) Quad SPI Sleep Enable Position */
#define PCR_SLP_EN_4_QMSPI_SLP_EN_Msk         (_UINT32_(0x1) << PCR_SLP_EN_4_QMSPI_SLP_EN_Pos)     /* (PCR_SLP_EN_4) Quad SPI Sleep Enable Mask */
#define PCR_SLP_EN_4_QMSPI_SLP_EN(value)      (PCR_SLP_EN_4_QMSPI_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_4_QMSPI_SLP_EN_Pos)) /* Assigment of value for QMSPI_SLP_EN in the PCR_SLP_EN_4 register */
#define PCR_SLP_EN_4_RC_ID1_SLP_EN_Pos        _UINT32_(11)                                         /* (PCR_SLP_EN_4) RC_ID1 Sleep Enable Position */
#define PCR_SLP_EN_4_RC_ID1_SLP_EN_Msk        (_UINT32_(0x1) << PCR_SLP_EN_4_RC_ID1_SLP_EN_Pos)    /* (PCR_SLP_EN_4) RC_ID1 Sleep Enable Mask */
#define PCR_SLP_EN_4_RC_ID1_SLP_EN(value)     (PCR_SLP_EN_4_RC_ID1_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_4_RC_ID1_SLP_EN_Pos)) /* Assigment of value for RC_ID1_SLP_EN in the PCR_SLP_EN_4 register */
#define PCR_SLP_EN_4_RC_ID2_SLP_EN_Pos        _UINT32_(12)                                         /* (PCR_SLP_EN_4) RC_ID2 Sleep Enable Position */
#define PCR_SLP_EN_4_RC_ID2_SLP_EN_Msk        (_UINT32_(0x1) << PCR_SLP_EN_4_RC_ID2_SLP_EN_Pos)    /* (PCR_SLP_EN_4) RC_ID2 Sleep Enable Mask */
#define PCR_SLP_EN_4_RC_ID2_SLP_EN(value)     (PCR_SLP_EN_4_RC_ID2_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_4_RC_ID2_SLP_EN_Pos)) /* Assigment of value for RC_ID2_SLP_EN in the PCR_SLP_EN_4 register */
#define PCR_SLP_EN_4_PROCHOT_SLP_EN_Pos       _UINT32_(13)                                         /* (PCR_SLP_EN_4) PROCHOT Sleep Enable Position */
#define PCR_SLP_EN_4_PROCHOT_SLP_EN_Msk       (_UINT32_(0x1) << PCR_SLP_EN_4_PROCHOT_SLP_EN_Pos)   /* (PCR_SLP_EN_4) PROCHOT Sleep Enable Mask */
#define PCR_SLP_EN_4_PROCHOT_SLP_EN(value)    (PCR_SLP_EN_4_PROCHOT_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_4_PROCHOT_SLP_EN_Pos)) /* Assigment of value for PROCHOT_SLP_EN in the PCR_SLP_EN_4 register */
#define PCR_SLP_EN_4_FUJICL_SLP_EN_Pos        _UINT32_(15)                                         /* (PCR_SLP_EN_4) Fujitsu Custom Logic Sleep Enable Position */
#define PCR_SLP_EN_4_FUJICL_SLP_EN_Msk        (_UINT32_(0x1) << PCR_SLP_EN_4_FUJICL_SLP_EN_Pos)    /* (PCR_SLP_EN_4) Fujitsu Custom Logic Sleep Enable Mask */
#define PCR_SLP_EN_4_FUJICL_SLP_EN(value)     (PCR_SLP_EN_4_FUJICL_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_4_FUJICL_SLP_EN_Pos)) /* Assigment of value for FUJICL_SLP_EN in the PCR_SLP_EN_4 register */
#define PCR_SLP_EN_4_Msk                      _UINT32_(0x0000B9FD)                                 /* (PCR_SLP_EN_4) Register Mask  */


/* -------- PCR_CLK_REQ_0 : (PCR Offset: 0x50) (R/W 32) Clock Required 0 Register -------- */
#define PCR_CLK_REQ_0_RESETVALUE              _UINT32_(0x00)                                       /*  (PCR_CLK_REQ_0) Clock Required 0 Register  Reset Value */

#define PCR_CLK_REQ_0_JTAG_STAP_CLK_REQ_Pos   _UINT32_(0)                                          /* (PCR_CLK_REQ_0) JTAG Clock Reuqired Position */
#define PCR_CLK_REQ_0_JTAG_STAP_CLK_REQ_Msk   (_UINT32_(0x1) << PCR_CLK_REQ_0_JTAG_STAP_CLK_REQ_Pos) /* (PCR_CLK_REQ_0) JTAG Clock Reuqired Mask */
#define PCR_CLK_REQ_0_JTAG_STAP_CLK_REQ(value) (PCR_CLK_REQ_0_JTAG_STAP_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_0_JTAG_STAP_CLK_REQ_Pos)) /* Assigment of value for JTAG_STAP_CLK_REQ in the PCR_CLK_REQ_0 register */
#define PCR_CLK_REQ_0_EFUSE_CLK_REQ_Pos       _UINT32_(1)                                          /* (PCR_CLK_REQ_0) eFuse Clock Reuqired Position */
#define PCR_CLK_REQ_0_EFUSE_CLK_REQ_Msk       (_UINT32_(0x1) << PCR_CLK_REQ_0_EFUSE_CLK_REQ_Pos)   /* (PCR_CLK_REQ_0) eFuse Clock Reuqired Mask */
#define PCR_CLK_REQ_0_EFUSE_CLK_REQ(value)    (PCR_CLK_REQ_0_EFUSE_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_0_EFUSE_CLK_REQ_Pos)) /* Assigment of value for EFUSE_CLK_REQ in the PCR_CLK_REQ_0 register */
#define PCR_CLK_REQ_0_Msk                     _UINT32_(0x00000003)                                 /* (PCR_CLK_REQ_0) Register Mask  */


/* -------- PCR_CLK_REQ_1 : (PCR Offset: 0x54) (R/W 32) Clock Required 1 Register -------- */
#define PCR_CLK_REQ_1_RESETVALUE              _UINT32_(0x00)                                       /*  (PCR_CLK_REQ_1) Clock Required 1 Register  Reset Value */

#define PCR_CLK_REQ_1_INT_CLK_REQ_Pos         _UINT32_(0)                                          /* (PCR_CLK_REQ_1) Interrupt Clock Reuqired Position */
#define PCR_CLK_REQ_1_INT_CLK_REQ_Msk         (_UINT32_(0x1) << PCR_CLK_REQ_1_INT_CLK_REQ_Pos)     /* (PCR_CLK_REQ_1) Interrupt Clock Reuqired Mask */
#define PCR_CLK_REQ_1_INT_CLK_REQ(value)      (PCR_CLK_REQ_1_INT_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_1_INT_CLK_REQ_Pos)) /* Assigment of value for INT_CLK_REQ in the PCR_CLK_REQ_1 register */
#define PCR_CLK_REQ_1_TACH0_CLK_REQ_Pos       _UINT32_(2)                                          /* (PCR_CLK_REQ_1) TACH0 Clock Reuqired Position */
#define PCR_CLK_REQ_1_TACH0_CLK_REQ_Msk       (_UINT32_(0x1) << PCR_CLK_REQ_1_TACH0_CLK_REQ_Pos)   /* (PCR_CLK_REQ_1) TACH0 Clock Reuqired Mask */
#define PCR_CLK_REQ_1_TACH0_CLK_REQ(value)    (PCR_CLK_REQ_1_TACH0_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_1_TACH0_CLK_REQ_Pos)) /* Assigment of value for TACH0_CLK_REQ in the PCR_CLK_REQ_1 register */
#define PCR_CLK_REQ_1_PWM0_CLK_REQ_Pos        _UINT32_(4)                                          /* (PCR_CLK_REQ_1) PWM0 Clock Reuqired Position */
#define PCR_CLK_REQ_1_PWM0_CLK_REQ_Msk        (_UINT32_(0x1) << PCR_CLK_REQ_1_PWM0_CLK_REQ_Pos)    /* (PCR_CLK_REQ_1) PWM0 Clock Reuqired Mask */
#define PCR_CLK_REQ_1_PWM0_CLK_REQ(value)     (PCR_CLK_REQ_1_PWM0_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_1_PWM0_CLK_REQ_Pos)) /* Assigment of value for PWM0_CLK_REQ in the PCR_CLK_REQ_1 register */
#define PCR_CLK_REQ_1_PMC_CLK_REQ_Pos         _UINT32_(5)                                          /* (PCR_CLK_REQ_1) PMC Clock Reuqired Position */
#define PCR_CLK_REQ_1_PMC_CLK_REQ_Msk         (_UINT32_(0x1) << PCR_CLK_REQ_1_PMC_CLK_REQ_Pos)     /* (PCR_CLK_REQ_1) PMC Clock Reuqired Mask */
#define PCR_CLK_REQ_1_PMC_CLK_REQ(value)      (PCR_CLK_REQ_1_PMC_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_1_PMC_CLK_REQ_Pos)) /* Assigment of value for PMC_CLK_REQ in the PCR_CLK_REQ_1 register */
#define PCR_CLK_REQ_1_DMA_CLK_REQ_Pos         _UINT32_(6)                                          /* (PCR_CLK_REQ_1) DMA Clock Reuqired Position */
#define PCR_CLK_REQ_1_DMA_CLK_REQ_Msk         (_UINT32_(0x1) << PCR_CLK_REQ_1_DMA_CLK_REQ_Pos)     /* (PCR_CLK_REQ_1) DMA Clock Reuqired Mask */
#define PCR_CLK_REQ_1_DMA_CLK_REQ(value)      (PCR_CLK_REQ_1_DMA_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_1_DMA_CLK_REQ_Pos)) /* Assigment of value for DMA_CLK_REQ in the PCR_CLK_REQ_1 register */
#define PCR_CLK_REQ_1_TFDP_CLK_REQ_Pos        _UINT32_(7)                                          /* (PCR_CLK_REQ_1) TFDP Clock Reuqired Position */
#define PCR_CLK_REQ_1_TFDP_CLK_REQ_Msk        (_UINT32_(0x1) << PCR_CLK_REQ_1_TFDP_CLK_REQ_Pos)    /* (PCR_CLK_REQ_1) TFDP Clock Reuqired Mask */
#define PCR_CLK_REQ_1_TFDP_CLK_REQ(value)     (PCR_CLK_REQ_1_TFDP_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_1_TFDP_CLK_REQ_Pos)) /* Assigment of value for TFDP_CLK_REQ in the PCR_CLK_REQ_1 register */
#define PCR_CLK_REQ_1_PROCESSOR_CLK_REQ_Pos   _UINT32_(8)                                          /* (PCR_CLK_REQ_1) PROCESSOR Clock Reuqired Position */
#define PCR_CLK_REQ_1_PROCESSOR_CLK_REQ_Msk   (_UINT32_(0x1) << PCR_CLK_REQ_1_PROCESSOR_CLK_REQ_Pos) /* (PCR_CLK_REQ_1) PROCESSOR Clock Reuqired Mask */
#define PCR_CLK_REQ_1_PROCESSOR_CLK_REQ(value) (PCR_CLK_REQ_1_PROCESSOR_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_1_PROCESSOR_CLK_REQ_Pos)) /* Assigment of value for PROCESSOR_CLK_REQ in the PCR_CLK_REQ_1 register */
#define PCR_CLK_REQ_1_WDT_CLK_REQ_Pos         _UINT32_(9)                                          /* (PCR_CLK_REQ_1) WDT Clock Reuqired Position */
#define PCR_CLK_REQ_1_WDT_CLK_REQ_Msk         (_UINT32_(0x1) << PCR_CLK_REQ_1_WDT_CLK_REQ_Pos)     /* (PCR_CLK_REQ_1) WDT Clock Reuqired Mask */
#define PCR_CLK_REQ_1_WDT_CLK_REQ(value)      (PCR_CLK_REQ_1_WDT_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_1_WDT_CLK_REQ_Pos)) /* Assigment of value for WDT_CLK_REQ in the PCR_CLK_REQ_1 register */
#define PCR_CLK_REQ_1_SMB0_CLK_REQ_Pos        _UINT32_(10)                                         /* (PCR_CLK_REQ_1) SMB0 Clock Reuqired Position */
#define PCR_CLK_REQ_1_SMB0_CLK_REQ_Msk        (_UINT32_(0x1) << PCR_CLK_REQ_1_SMB0_CLK_REQ_Pos)    /* (PCR_CLK_REQ_1) SMB0 Clock Reuqired Mask */
#define PCR_CLK_REQ_1_SMB0_CLK_REQ(value)     (PCR_CLK_REQ_1_SMB0_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_1_SMB0_CLK_REQ_Pos)) /* Assigment of value for SMB0_CLK_REQ in the PCR_CLK_REQ_1 register */
#define PCR_CLK_REQ_1_TACH1_CLK_REQ_Pos       _UINT32_(11)                                         /* (PCR_CLK_REQ_1) TACH1 Clock Reuqired Position */
#define PCR_CLK_REQ_1_TACH1_CLK_REQ_Msk       (_UINT32_(0x1) << PCR_CLK_REQ_1_TACH1_CLK_REQ_Pos)   /* (PCR_CLK_REQ_1) TACH1 Clock Reuqired Mask */
#define PCR_CLK_REQ_1_TACH1_CLK_REQ(value)    (PCR_CLK_REQ_1_TACH1_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_1_TACH1_CLK_REQ_Pos)) /* Assigment of value for TACH1_CLK_REQ in the PCR_CLK_REQ_1 register */
#define PCR_CLK_REQ_1_PWM1_CLK_REQ_Pos        _UINT32_(20)                                         /* (PCR_CLK_REQ_1) PWM1 Clock Reuqired Position */
#define PCR_CLK_REQ_1_PWM1_CLK_REQ_Msk        (_UINT32_(0x1) << PCR_CLK_REQ_1_PWM1_CLK_REQ_Pos)    /* (PCR_CLK_REQ_1) PWM1 Clock Reuqired Mask */
#define PCR_CLK_REQ_1_PWM1_CLK_REQ(value)     (PCR_CLK_REQ_1_PWM1_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_1_PWM1_CLK_REQ_Pos)) /* Assigment of value for PWM1_CLK_REQ in the PCR_CLK_REQ_1 register */
#define PCR_CLK_REQ_1_PWM2_CLK_REQ_Pos        _UINT32_(21)                                         /* (PCR_CLK_REQ_1) PWM2 Clock Reuqired Position */
#define PCR_CLK_REQ_1_PWM2_CLK_REQ_Msk        (_UINT32_(0x1) << PCR_CLK_REQ_1_PWM2_CLK_REQ_Pos)    /* (PCR_CLK_REQ_1) PWM2 Clock Reuqired Mask */
#define PCR_CLK_REQ_1_PWM2_CLK_REQ(value)     (PCR_CLK_REQ_1_PWM2_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_1_PWM2_CLK_REQ_Pos)) /* Assigment of value for PWM2_CLK_REQ in the PCR_CLK_REQ_1 register */
#define PCR_CLK_REQ_1_PWM3_CLK_REQ_Pos        _UINT32_(22)                                         /* (PCR_CLK_REQ_1) PWM3 Clock Reuqired Position */
#define PCR_CLK_REQ_1_PWM3_CLK_REQ_Msk        (_UINT32_(0x1) << PCR_CLK_REQ_1_PWM3_CLK_REQ_Pos)    /* (PCR_CLK_REQ_1) PWM3 Clock Reuqired Mask */
#define PCR_CLK_REQ_1_PWM3_CLK_REQ(value)     (PCR_CLK_REQ_1_PWM3_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_1_PWM3_CLK_REQ_Pos)) /* Assigment of value for PWM3_CLK_REQ in the PCR_CLK_REQ_1 register */
#define PCR_CLK_REQ_1_PWM4_CLK_REQ_Pos        _UINT32_(23)                                         /* (PCR_CLK_REQ_1) PWM4 Clock Reuqired Position */
#define PCR_CLK_REQ_1_PWM4_CLK_REQ_Msk        (_UINT32_(0x1) << PCR_CLK_REQ_1_PWM4_CLK_REQ_Pos)    /* (PCR_CLK_REQ_1) PWM4 Clock Reuqired Mask */
#define PCR_CLK_REQ_1_PWM4_CLK_REQ(value)     (PCR_CLK_REQ_1_PWM4_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_1_PWM4_CLK_REQ_Pos)) /* Assigment of value for PWM4_CLK_REQ in the PCR_CLK_REQ_1 register */
#define PCR_CLK_REQ_1_PWM5_CLK_REQ_Pos        _UINT32_(24)                                         /* (PCR_CLK_REQ_1) PWM5 Clock Reuqired Position */
#define PCR_CLK_REQ_1_PWM5_CLK_REQ_Msk        (_UINT32_(0x1) << PCR_CLK_REQ_1_PWM5_CLK_REQ_Pos)    /* (PCR_CLK_REQ_1) PWM5 Clock Reuqired Mask */
#define PCR_CLK_REQ_1_PWM5_CLK_REQ(value)     (PCR_CLK_REQ_1_PWM5_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_1_PWM5_CLK_REQ_Pos)) /* Assigment of value for PWM5_CLK_REQ in the PCR_CLK_REQ_1 register */
#define PCR_CLK_REQ_1_EC_REG_BANK_CLK_REQ_Pos _UINT32_(29)                                         /* (PCR_CLK_REQ_1) EC_REG_BANK Clock Reuqired Position */
#define PCR_CLK_REQ_1_EC_REG_BANK_CLK_REQ_Msk (_UINT32_(0x1) << PCR_CLK_REQ_1_EC_REG_BANK_CLK_REQ_Pos) /* (PCR_CLK_REQ_1) EC_REG_BANK Clock Reuqired Mask */
#define PCR_CLK_REQ_1_EC_REG_BANK_CLK_REQ(value) (PCR_CLK_REQ_1_EC_REG_BANK_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_1_EC_REG_BANK_CLK_REQ_Pos)) /* Assigment of value for EC_REG_BANK_CLK_REQ in the PCR_CLK_REQ_1 register */
#define PCR_CLK_REQ_1_TMR16_0_CLK_REQ_Pos     _UINT32_(30)                                         /* (PCR_CLK_REQ_1) TIMER16_0 Clock Reuqired Position */
#define PCR_CLK_REQ_1_TMR16_0_CLK_REQ_Msk     (_UINT32_(0x1) << PCR_CLK_REQ_1_TMR16_0_CLK_REQ_Pos) /* (PCR_CLK_REQ_1) TIMER16_0 Clock Reuqired Mask */
#define PCR_CLK_REQ_1_TMR16_0_CLK_REQ(value)  (PCR_CLK_REQ_1_TMR16_0_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_1_TMR16_0_CLK_REQ_Pos)) /* Assigment of value for TMR16_0_CLK_REQ in the PCR_CLK_REQ_1 register */
#define PCR_CLK_REQ_1_TMR16_1_CLK_REQ_Pos     _UINT32_(31)                                         /* (PCR_CLK_REQ_1) TIMER16_1 Clock Reuqired Position */
#define PCR_CLK_REQ_1_TMR16_1_CLK_REQ_Msk     (_UINT32_(0x1) << PCR_CLK_REQ_1_TMR16_1_CLK_REQ_Pos) /* (PCR_CLK_REQ_1) TIMER16_1 Clock Reuqired Mask */
#define PCR_CLK_REQ_1_TMR16_1_CLK_REQ(value)  (PCR_CLK_REQ_1_TMR16_1_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_1_TMR16_1_CLK_REQ_Pos)) /* Assigment of value for TMR16_1_CLK_REQ in the PCR_CLK_REQ_1 register */
#define PCR_CLK_REQ_1_Msk                     _UINT32_(0xE1F00FF5)                                 /* (PCR_CLK_REQ_1) Register Mask  */


/* -------- PCR_CLK_REQ_2 : (PCR Offset: 0x58) (R/W 32) Clock Required 2 Register -------- */
#define PCR_CLK_REQ_2_RESETVALUE              _UINT32_(0x00)                                       /*  (PCR_CLK_REQ_2) Clock Required 2 Register  Reset Value */

#define PCR_CLK_REQ_2_UART_0_CLK_REQ_Pos      _UINT32_(1)                                          /* (PCR_CLK_REQ_2) UART 0 Clock Reuqired Position */
#define PCR_CLK_REQ_2_UART_0_CLK_REQ_Msk      (_UINT32_(0x1) << PCR_CLK_REQ_2_UART_0_CLK_REQ_Pos)  /* (PCR_CLK_REQ_2) UART 0 Clock Reuqired Mask */
#define PCR_CLK_REQ_2_UART_0_CLK_REQ(value)   (PCR_CLK_REQ_2_UART_0_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_2_UART_0_CLK_REQ_Pos)) /* Assigment of value for UART_0_CLK_REQ in the PCR_CLK_REQ_2 register */
#define PCR_CLK_REQ_2_UART_1_CLK_REQ_Pos      _UINT32_(2)                                          /* (PCR_CLK_REQ_2) UART 1 Clock Reuqired Position */
#define PCR_CLK_REQ_2_UART_1_CLK_REQ_Msk      (_UINT32_(0x1) << PCR_CLK_REQ_2_UART_1_CLK_REQ_Pos)  /* (PCR_CLK_REQ_2) UART 1 Clock Reuqired Mask */
#define PCR_CLK_REQ_2_UART_1_CLK_REQ(value)   (PCR_CLK_REQ_2_UART_1_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_2_UART_1_CLK_REQ_Pos)) /* Assigment of value for UART_1_CLK_REQ in the PCR_CLK_REQ_2 register */
#define PCR_CLK_REQ_2_GLBL_CFG_CLK_REQ_Pos    _UINT32_(12)                                         /* (PCR_CLK_REQ_2) GLBL_CFG Clock Reuqired Position */
#define PCR_CLK_REQ_2_GLBL_CFG_CLK_REQ_Msk    (_UINT32_(0x1) << PCR_CLK_REQ_2_GLBL_CFG_CLK_REQ_Pos) /* (PCR_CLK_REQ_2) GLBL_CFG Clock Reuqired Mask */
#define PCR_CLK_REQ_2_GLBL_CFG_CLK_REQ(value) (PCR_CLK_REQ_2_GLBL_CFG_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_2_GLBL_CFG_CLK_REQ_Pos)) /* Assigment of value for GLBL_CFG_CLK_REQ in the PCR_CLK_REQ_2 register */
#define PCR_CLK_REQ_2_RTC_CLK_REQ_Pos         _UINT32_(18)                                         /* (PCR_CLK_REQ_2) RTC Clock Reuqired Position */
#define PCR_CLK_REQ_2_RTC_CLK_REQ_Msk         (_UINT32_(0x1) << PCR_CLK_REQ_2_RTC_CLK_REQ_Pos)     /* (PCR_CLK_REQ_2) RTC Clock Reuqired Mask */
#define PCR_CLK_REQ_2_RTC_CLK_REQ(value)      (PCR_CLK_REQ_2_RTC_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_2_RTC_CLK_REQ_Pos)) /* Assigment of value for RTC_CLK_REQ in the PCR_CLK_REQ_2 register */
#define PCR_CLK_REQ_2_Msk                     _UINT32_(0x00041006)                                 /* (PCR_CLK_REQ_2) Register Mask  */


/* -------- PCR_CLK_REQ_3 : (PCR Offset: 0x5C) (R/W 32) Clock Required 3 Register -------- */
#define PCR_CLK_REQ_3_RESETVALUE              _UINT32_(0x00)                                       /*  (PCR_CLK_REQ_3) Clock Required 3 Register  Reset Value */

#define PCR_CLK_REQ_3_ADC_CLK_REQ_Pos         _UINT32_(3)                                          /* (PCR_CLK_REQ_3) ADC Clock Reuqired Position */
#define PCR_CLK_REQ_3_ADC_CLK_REQ_Msk         (_UINT32_(0x1) << PCR_CLK_REQ_3_ADC_CLK_REQ_Pos)     /* (PCR_CLK_REQ_3) ADC Clock Reuqired Mask */
#define PCR_CLK_REQ_3_ADC_CLK_REQ(value)      (PCR_CLK_REQ_3_ADC_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_3_ADC_CLK_REQ_Pos)) /* Assigment of value for ADC_CLK_REQ in the PCR_CLK_REQ_3 register */
#define PCR_CLK_REQ_3_GP_SPI0_CLK_REQ_Pos     _UINT32_(9)                                          /* (PCR_CLK_REQ_3) GP SPI0 Clock Reuqired Position */
#define PCR_CLK_REQ_3_GP_SPI0_CLK_REQ_Msk     (_UINT32_(0x1) << PCR_CLK_REQ_3_GP_SPI0_CLK_REQ_Pos) /* (PCR_CLK_REQ_3) GP SPI0 Clock Reuqired Mask */
#define PCR_CLK_REQ_3_GP_SPI0_CLK_REQ(value)  (PCR_CLK_REQ_3_GP_SPI0_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_3_GP_SPI0_CLK_REQ_Pos)) /* Assigment of value for GP_SPI0_CLK_REQ in the PCR_CLK_REQ_3 register */
#define PCR_CLK_REQ_3_HTMR_0_CLK_REQ_Pos      _UINT32_(10)                                         /* (PCR_CLK_REQ_3) HTIMER 0 Clock Reuqired Position */
#define PCR_CLK_REQ_3_HTMR_0_CLK_REQ_Msk      (_UINT32_(0x1) << PCR_CLK_REQ_3_HTMR_0_CLK_REQ_Pos)  /* (PCR_CLK_REQ_3) HTIMER 0 Clock Reuqired Mask */
#define PCR_CLK_REQ_3_HTMR_0_CLK_REQ(value)   (PCR_CLK_REQ_3_HTMR_0_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_3_HTMR_0_CLK_REQ_Pos)) /* Assigment of value for HTMR_0_CLK_REQ in the PCR_CLK_REQ_3 register */
#define PCR_CLK_REQ_3_KEYSCAN_CLK_REQ_Pos     _UINT32_(11)                                         /* (PCR_CLK_REQ_3) KEYSCAN Clock Reuqired Position */
#define PCR_CLK_REQ_3_KEYSCAN_CLK_REQ_Msk     (_UINT32_(0x1) << PCR_CLK_REQ_3_KEYSCAN_CLK_REQ_Pos) /* (PCR_CLK_REQ_3) KEYSCAN Clock Reuqired Mask */
#define PCR_CLK_REQ_3_KEYSCAN_CLK_REQ(value)  (PCR_CLK_REQ_3_KEYSCAN_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_3_KEYSCAN_CLK_REQ_Pos)) /* Assigment of value for KEYSCAN_CLK_REQ in the PCR_CLK_REQ_3 register */
#define PCR_CLK_REQ_3_RPMPWM_CLK_REQ_Pos      _UINT32_(12)                                         /* (PCR_CLK_REQ_3) RPM-PWM Clock Reuqired Position */
#define PCR_CLK_REQ_3_RPMPWM_CLK_REQ_Msk      (_UINT32_(0x1) << PCR_CLK_REQ_3_RPMPWM_CLK_REQ_Pos)  /* (PCR_CLK_REQ_3) RPM-PWM Clock Reuqired Mask */
#define PCR_CLK_REQ_3_RPMPWM_CLK_REQ(value)   (PCR_CLK_REQ_3_RPMPWM_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_3_RPMPWM_CLK_REQ_Pos)) /* Assigment of value for RPMPWM_CLK_REQ in the PCR_CLK_REQ_3 register */
#define PCR_CLK_REQ_3_SMB1_CLK_REQ_Pos        _UINT32_(13)                                         /* (PCR_CLK_REQ_3) SMB1 Clock Reuqired Position */
#define PCR_CLK_REQ_3_SMB1_CLK_REQ_Msk        (_UINT32_(0x1) << PCR_CLK_REQ_3_SMB1_CLK_REQ_Pos)    /* (PCR_CLK_REQ_3) SMB1 Clock Reuqired Mask */
#define PCR_CLK_REQ_3_SMB1_CLK_REQ(value)     (PCR_CLK_REQ_3_SMB1_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_3_SMB1_CLK_REQ_Pos)) /* Assigment of value for SMB1_CLK_REQ in the PCR_CLK_REQ_3 register */
#define PCR_CLK_REQ_3_SMB2_CLK_REQ_Pos        _UINT32_(14)                                         /* (PCR_CLK_REQ_3) SMB2 Clock Reuqired Position */
#define PCR_CLK_REQ_3_SMB2_CLK_REQ_Msk        (_UINT32_(0x1) << PCR_CLK_REQ_3_SMB2_CLK_REQ_Pos)    /* (PCR_CLK_REQ_3) SMB2 Clock Reuqired Mask */
#define PCR_CLK_REQ_3_SMB2_CLK_REQ(value)     (PCR_CLK_REQ_3_SMB2_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_3_SMB2_CLK_REQ_Pos)) /* Assigment of value for SMB2_CLK_REQ in the PCR_CLK_REQ_3 register */
#define PCR_CLK_REQ_3_SMB3_CLK_REQ_Pos        _UINT32_(15)                                         /* (PCR_CLK_REQ_3) SMB3 Clock Reuqired Position */
#define PCR_CLK_REQ_3_SMB3_CLK_REQ_Msk        (_UINT32_(0x1) << PCR_CLK_REQ_3_SMB3_CLK_REQ_Pos)    /* (PCR_CLK_REQ_3) SMB3 Clock Reuqired Mask */
#define PCR_CLK_REQ_3_SMB3_CLK_REQ(value)     (PCR_CLK_REQ_3_SMB3_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_3_SMB3_CLK_REQ_Pos)) /* Assigment of value for SMB3_CLK_REQ in the PCR_CLK_REQ_3 register */
#define PCR_CLK_REQ_3_LED0_CLK_REQ_Pos        _UINT32_(16)                                         /* (PCR_CLK_REQ_3) LED0 Clock Reuqired Position */
#define PCR_CLK_REQ_3_LED0_CLK_REQ_Msk        (_UINT32_(0x1) << PCR_CLK_REQ_3_LED0_CLK_REQ_Pos)    /* (PCR_CLK_REQ_3) LED0 Clock Reuqired Mask */
#define PCR_CLK_REQ_3_LED0_CLK_REQ(value)     (PCR_CLK_REQ_3_LED0_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_3_LED0_CLK_REQ_Pos)) /* Assigment of value for LED0_CLK_REQ in the PCR_CLK_REQ_3 register */
#define PCR_CLK_REQ_3_LED1_CLK_REQ_Pos        _UINT32_(17)                                         /* (PCR_CLK_REQ_3) LED1 Clock Reuqired Position */
#define PCR_CLK_REQ_3_LED1_CLK_REQ_Msk        (_UINT32_(0x1) << PCR_CLK_REQ_3_LED1_CLK_REQ_Pos)    /* (PCR_CLK_REQ_3) LED1 Clock Reuqired Mask */
#define PCR_CLK_REQ_3_LED1_CLK_REQ(value)     (PCR_CLK_REQ_3_LED1_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_3_LED1_CLK_REQ_Pos)) /* Assigment of value for LED1_CLK_REQ in the PCR_CLK_REQ_3 register */
#define PCR_CLK_REQ_3_TMR16_2_CLK_REQ_Pos     _UINT32_(21)                                         /* (PCR_CLK_REQ_3) TIMER16_2 Clock Reuqired Position */
#define PCR_CLK_REQ_3_TMR16_2_CLK_REQ_Msk     (_UINT32_(0x1) << PCR_CLK_REQ_3_TMR16_2_CLK_REQ_Pos) /* (PCR_CLK_REQ_3) TIMER16_2 Clock Reuqired Mask */
#define PCR_CLK_REQ_3_TMR16_2_CLK_REQ(value)  (PCR_CLK_REQ_3_TMR16_2_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_3_TMR16_2_CLK_REQ_Pos)) /* Assigment of value for TMR16_2_CLK_REQ in the PCR_CLK_REQ_3 register */
#define PCR_CLK_REQ_3_TMR16_3_CLK_REQ_Pos     _UINT32_(22)                                         /* (PCR_CLK_REQ_3) TIMER16_3 Clock Reuqired Position */
#define PCR_CLK_REQ_3_TMR16_3_CLK_REQ_Msk     (_UINT32_(0x1) << PCR_CLK_REQ_3_TMR16_3_CLK_REQ_Pos) /* (PCR_CLK_REQ_3) TIMER16_3 Clock Reuqired Mask */
#define PCR_CLK_REQ_3_TMR16_3_CLK_REQ(value)  (PCR_CLK_REQ_3_TMR16_3_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_3_TMR16_3_CLK_REQ_Pos)) /* Assigment of value for TMR16_3_CLK_REQ in the PCR_CLK_REQ_3 register */
#define PCR_CLK_REQ_3_TMR32_0_CLK_REQ_Pos     _UINT32_(23)                                         /* (PCR_CLK_REQ_3) TIMER32_0 Clock Reuqired Position */
#define PCR_CLK_REQ_3_TMR32_0_CLK_REQ_Msk     (_UINT32_(0x1) << PCR_CLK_REQ_3_TMR32_0_CLK_REQ_Pos) /* (PCR_CLK_REQ_3) TIMER32_0 Clock Reuqired Mask */
#define PCR_CLK_REQ_3_TMR32_0_CLK_REQ(value)  (PCR_CLK_REQ_3_TMR32_0_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_3_TMR32_0_CLK_REQ_Pos)) /* Assigment of value for TMR32_0_CLK_REQ in the PCR_CLK_REQ_3 register */
#define PCR_CLK_REQ_3_TMR32_1_CLK_REQ_Pos     _UINT32_(24)                                         /* (PCR_CLK_REQ_3) TIMER32_1 Clock Reuqired Position */
#define PCR_CLK_REQ_3_TMR32_1_CLK_REQ_Msk     (_UINT32_(0x1) << PCR_CLK_REQ_3_TMR32_1_CLK_REQ_Pos) /* (PCR_CLK_REQ_3) TIMER32_1 Clock Reuqired Mask */
#define PCR_CLK_REQ_3_TMR32_1_CLK_REQ(value)  (PCR_CLK_REQ_3_TMR32_1_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_3_TMR32_1_CLK_REQ_Pos)) /* Assigment of value for TMR32_1_CLK_REQ in the PCR_CLK_REQ_3 register */
#define PCR_CLK_REQ_3_HTMR_1_CLK_REQ_Pos      _UINT32_(29)                                         /* (PCR_CLK_REQ_3) HTIMER 1 Clock Reuqired Position */
#define PCR_CLK_REQ_3_HTMR_1_CLK_REQ_Msk      (_UINT32_(0x1) << PCR_CLK_REQ_3_HTMR_1_CLK_REQ_Pos)  /* (PCR_CLK_REQ_3) HTIMER 1 Clock Reuqired Mask */
#define PCR_CLK_REQ_3_HTMR_1_CLK_REQ(value)   (PCR_CLK_REQ_3_HTMR_1_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_3_HTMR_1_CLK_REQ_Pos)) /* Assigment of value for HTMR_1_CLK_REQ in the PCR_CLK_REQ_3 register */
#define PCR_CLK_REQ_3_CCTMR_CLK_REQ_Pos       _UINT32_(30)                                         /* (PCR_CLK_REQ_3) Capture Compare Timer Clock Reuqired Position */
#define PCR_CLK_REQ_3_CCTMR_CLK_REQ_Msk       (_UINT32_(0x1) << PCR_CLK_REQ_3_CCTMR_CLK_REQ_Pos)   /* (PCR_CLK_REQ_3) Capture Compare Timer Clock Reuqired Mask */
#define PCR_CLK_REQ_3_CCTMR_CLK_REQ(value)    (PCR_CLK_REQ_3_CCTMR_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_3_CCTMR_CLK_REQ_Pos)) /* Assigment of value for CCTMR_CLK_REQ in the PCR_CLK_REQ_3 register */
#define PCR_CLK_REQ_3_Msk                     _UINT32_(0x61E3FE08)                                 /* (PCR_CLK_REQ_3) Register Mask  */


/* -------- PCR_CLK_REQ_4 : (PCR Offset: 0x60) (R/W 32) Clock Required 4 Register -------- */
#define PCR_CLK_REQ_4_RESETVALUE              _UINT32_(0x00)                                       /*  (PCR_CLK_REQ_4) Clock Required 4 Register  Reset Value */

#define PCR_CLK_REQ_4_PWM10_CLK_REQ_Pos       _UINT32_(0)                                          /* (PCR_CLK_REQ_4) PWM10 Clock Reuqired Position */
#define PCR_CLK_REQ_4_PWM10_CLK_REQ_Msk       (_UINT32_(0x1) << PCR_CLK_REQ_4_PWM10_CLK_REQ_Pos)   /* (PCR_CLK_REQ_4) PWM10 Clock Reuqired Mask */
#define PCR_CLK_REQ_4_PWM10_CLK_REQ(value)    (PCR_CLK_REQ_4_PWM10_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_4_PWM10_CLK_REQ_Pos)) /* Assigment of value for PWM10_CLK_REQ in the PCR_CLK_REQ_4 register */
#define PCR_CLK_REQ_4_CNT_TMER0_CLK_REQ_Pos   _UINT32_(2)                                          /* (PCR_CLK_REQ_4) CNT_TMER0 Clock Reuqired Position */
#define PCR_CLK_REQ_4_CNT_TMER0_CLK_REQ_Msk   (_UINT32_(0x1) << PCR_CLK_REQ_4_CNT_TMER0_CLK_REQ_Pos) /* (PCR_CLK_REQ_4) CNT_TMER0 Clock Reuqired Mask */
#define PCR_CLK_REQ_4_CNT_TMER0_CLK_REQ(value) (PCR_CLK_REQ_4_CNT_TMER0_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_4_CNT_TMER0_CLK_REQ_Pos)) /* Assigment of value for CNT_TMER0_CLK_REQ in the PCR_CLK_REQ_4 register */
#define PCR_CLK_REQ_4_CNT_TMER1_CLK_REQ_Pos   _UINT32_(3)                                          /* (PCR_CLK_REQ_4) CNT_TMER1 Clock Reuqired Position */
#define PCR_CLK_REQ_4_CNT_TMER1_CLK_REQ_Msk   (_UINT32_(0x1) << PCR_CLK_REQ_4_CNT_TMER1_CLK_REQ_Pos) /* (PCR_CLK_REQ_4) CNT_TMER1 Clock Reuqired Mask */
#define PCR_CLK_REQ_4_CNT_TMER1_CLK_REQ(value) (PCR_CLK_REQ_4_CNT_TMER1_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_4_CNT_TMER1_CLK_REQ_Pos)) /* Assigment of value for CNT_TMER1_CLK_REQ in the PCR_CLK_REQ_4 register */
#define PCR_CLK_REQ_4_CNT_TMER2_CLK_REQ_Pos   _UINT32_(4)                                          /* (PCR_CLK_REQ_4) CNT_TMER2 Clock Reuqired Position */
#define PCR_CLK_REQ_4_CNT_TMER2_CLK_REQ_Msk   (_UINT32_(0x1) << PCR_CLK_REQ_4_CNT_TMER2_CLK_REQ_Pos) /* (PCR_CLK_REQ_4) CNT_TMER2 Clock Reuqired Mask */
#define PCR_CLK_REQ_4_CNT_TMER2_CLK_REQ(value) (PCR_CLK_REQ_4_CNT_TMER2_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_4_CNT_TMER2_CLK_REQ_Pos)) /* Assigment of value for CNT_TMER2_CLK_REQ in the PCR_CLK_REQ_4 register */
#define PCR_CLK_REQ_4_CNT_TMER3_CLK_REQ_Pos   _UINT32_(5)                                          /* (PCR_CLK_REQ_4) CNT_TMER3 Clock Reuqired Position */
#define PCR_CLK_REQ_4_CNT_TMER3_CLK_REQ_Msk   (_UINT32_(0x1) << PCR_CLK_REQ_4_CNT_TMER3_CLK_REQ_Pos) /* (PCR_CLK_REQ_4) CNT_TMER3 Clock Reuqired Mask */
#define PCR_CLK_REQ_4_CNT_TMER3_CLK_REQ(value) (PCR_CLK_REQ_4_CNT_TMER3_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_4_CNT_TMER3_CLK_REQ_Pos)) /* Assigment of value for CNT_TMER3_CLK_REQ in the PCR_CLK_REQ_4 register */
#define PCR_CLK_REQ_4_RTOS_CLK_REQ_Pos        _UINT32_(6)                                          /* (PCR_CLK_REQ_4) PWM6 Clock Reuqired Position */
#define PCR_CLK_REQ_4_RTOS_CLK_REQ_Msk        (_UINT32_(0x1) << PCR_CLK_REQ_4_RTOS_CLK_REQ_Pos)    /* (PCR_CLK_REQ_4) PWM6 Clock Reuqired Mask */
#define PCR_CLK_REQ_4_RTOS_CLK_REQ(value)     (PCR_CLK_REQ_4_RTOS_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_4_RTOS_CLK_REQ_Pos)) /* Assigment of value for RTOS_CLK_REQ in the PCR_CLK_REQ_4 register */
#define PCR_CLK_REQ_4_RPMPWM1_CLK_REQ_Pos     _UINT32_(7)                                          /* (PCR_CLK_REQ_4) RPMPWM 1 Clock Reuqired Position */
#define PCR_CLK_REQ_4_RPMPWM1_CLK_REQ_Msk     (_UINT32_(0x1) << PCR_CLK_REQ_4_RPMPWM1_CLK_REQ_Pos) /* (PCR_CLK_REQ_4) RPMPWM 1 Clock Reuqired Mask */
#define PCR_CLK_REQ_4_RPMPWM1_CLK_REQ(value)  (PCR_CLK_REQ_4_RPMPWM1_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_4_RPMPWM1_CLK_REQ_Pos)) /* Assigment of value for RPMPWM1_CLK_REQ in the PCR_CLK_REQ_4 register */
#define PCR_CLK_REQ_4_QSPI_CLK_REQ_Pos        _UINT32_(8)                                          /* (PCR_CLK_REQ_4) Quad SPI Clock Reuqired Position */
#define PCR_CLK_REQ_4_QSPI_CLK_REQ_Msk        (_UINT32_(0x1) << PCR_CLK_REQ_4_QSPI_CLK_REQ_Pos)    /* (PCR_CLK_REQ_4) Quad SPI Clock Reuqired Mask */
#define PCR_CLK_REQ_4_QSPI_CLK_REQ(value)     (PCR_CLK_REQ_4_QSPI_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_4_QSPI_CLK_REQ_Pos)) /* Assigment of value for QSPI_CLK_REQ in the PCR_CLK_REQ_4 register */
#define PCR_CLK_REQ_4_RC_ID1_CLK_REQ_Pos      _UINT32_(11)                                         /* (PCR_CLK_REQ_4) RC_ID1 Clock Reuqired Position */
#define PCR_CLK_REQ_4_RC_ID1_CLK_REQ_Msk      (_UINT32_(0x1) << PCR_CLK_REQ_4_RC_ID1_CLK_REQ_Pos)  /* (PCR_CLK_REQ_4) RC_ID1 Clock Reuqired Mask */
#define PCR_CLK_REQ_4_RC_ID1_CLK_REQ(value)   (PCR_CLK_REQ_4_RC_ID1_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_4_RC_ID1_CLK_REQ_Pos)) /* Assigment of value for RC_ID1_CLK_REQ in the PCR_CLK_REQ_4 register */
#define PCR_CLK_REQ_4_RC_ID2_CLK_REQ_Pos      _UINT32_(12)                                         /* (PCR_CLK_REQ_4) RC_ID2 Clock Reuqired Position */
#define PCR_CLK_REQ_4_RC_ID2_CLK_REQ_Msk      (_UINT32_(0x1) << PCR_CLK_REQ_4_RC_ID2_CLK_REQ_Pos)  /* (PCR_CLK_REQ_4) RC_ID2 Clock Reuqired Mask */
#define PCR_CLK_REQ_4_RC_ID2_CLK_REQ(value)   (PCR_CLK_REQ_4_RC_ID2_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_4_RC_ID2_CLK_REQ_Pos)) /* Assigment of value for RC_ID2_CLK_REQ in the PCR_CLK_REQ_4 register */
#define PCR_CLK_REQ_4_PROCHOT_CLK_REQ_Pos     _UINT32_(13)                                         /* (PCR_CLK_REQ_4) PROCHOT Clock Reuqired Position */
#define PCR_CLK_REQ_4_PROCHOT_CLK_REQ_Msk     (_UINT32_(0x1) << PCR_CLK_REQ_4_PROCHOT_CLK_REQ_Pos) /* (PCR_CLK_REQ_4) PROCHOT Clock Reuqired Mask */
#define PCR_CLK_REQ_4_PROCHOT_CLK_REQ(value)  (PCR_CLK_REQ_4_PROCHOT_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_4_PROCHOT_CLK_REQ_Pos)) /* Assigment of value for PROCHOT_CLK_REQ in the PCR_CLK_REQ_4 register */
#define PCR_CLK_REQ_4_FUJICL_CLK_REQ_Pos      _UINT32_(15)                                         /* (PCR_CLK_REQ_4) Fujitsu Custom Logic Clock Reuqired Position */
#define PCR_CLK_REQ_4_FUJICL_CLK_REQ_Msk      (_UINT32_(0x1) << PCR_CLK_REQ_4_FUJICL_CLK_REQ_Pos)  /* (PCR_CLK_REQ_4) Fujitsu Custom Logic Clock Reuqired Mask */
#define PCR_CLK_REQ_4_FUJICL_CLK_REQ(value)   (PCR_CLK_REQ_4_FUJICL_CLK_REQ_Msk & (_UINT32_(value) << PCR_CLK_REQ_4_FUJICL_CLK_REQ_Pos)) /* Assigment of value for FUJICL_CLK_REQ in the PCR_CLK_REQ_4 register */
#define PCR_CLK_REQ_4_Msk                     _UINT32_(0x0000B9FD)                                 /* (PCR_CLK_REQ_4) Register Mask  */


/* -------- PCR_RST_EN_0 : (PCR Offset: 0x70) (R/W 32) Reset Enable 0 Register -------- */
#define PCR_RST_EN_0_RESETVALUE               _UINT32_(0x00)                                       /*  (PCR_RST_EN_0) Reset Enable 0 Register  Reset Value */

#define PCR_RST_EN_0_JTAG_STAP_RST_EN_Pos     _UINT32_(0)                                          /* (PCR_RST_EN_0) JTAG STAP Reset Enable Position */
#define PCR_RST_EN_0_JTAG_STAP_RST_EN_Msk     (_UINT32_(0x1) << PCR_RST_EN_0_JTAG_STAP_RST_EN_Pos) /* (PCR_RST_EN_0) JTAG STAP Reset Enable Mask */
#define PCR_RST_EN_0_JTAG_STAP_RST_EN(value)  (PCR_RST_EN_0_JTAG_STAP_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_0_JTAG_STAP_RST_EN_Pos)) /* Assigment of value for JTAG_STAP_RST_EN in the PCR_RST_EN_0 register */
#define PCR_RST_EN_0_EFUSE_RST_EN_Pos         _UINT32_(1)                                          /* (PCR_RST_EN_0) eFuse Reset Enable Position */
#define PCR_RST_EN_0_EFUSE_RST_EN_Msk         (_UINT32_(0x1) << PCR_RST_EN_0_EFUSE_RST_EN_Pos)     /* (PCR_RST_EN_0) eFuse Reset Enable Mask */
#define PCR_RST_EN_0_EFUSE_RST_EN(value)      (PCR_RST_EN_0_EFUSE_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_0_EFUSE_RST_EN_Pos)) /* Assigment of value for EFUSE_RST_EN in the PCR_RST_EN_0 register */
#define PCR_RST_EN_0_Msk                      _UINT32_(0x00000003)                                 /* (PCR_RST_EN_0) Register Mask  */


/* -------- PCR_RST_EN_1 : (PCR Offset: 0x74) (R/W 32) Reset Enable 1 Register -------- */
#define PCR_RST_EN_1_RESETVALUE               _UINT32_(0x00)                                       /*  (PCR_RST_EN_1) Reset Enable 1 Register  Reset Value */

#define PCR_RST_EN_1_INT_RST_EN_Pos           _UINT32_(0)                                          /* (PCR_RST_EN_1) Interrupt Reset Enable Position */
#define PCR_RST_EN_1_INT_RST_EN_Msk           (_UINT32_(0x1) << PCR_RST_EN_1_INT_RST_EN_Pos)       /* (PCR_RST_EN_1) Interrupt Reset Enable Mask */
#define PCR_RST_EN_1_INT_RST_EN(value)        (PCR_RST_EN_1_INT_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_INT_RST_EN_Pos)) /* Assigment of value for INT_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_TACH0_RST_EN_Pos         _UINT32_(2)                                          /* (PCR_RST_EN_1) TACH0 Reset Enable Position */
#define PCR_RST_EN_1_TACH0_RST_EN_Msk         (_UINT32_(0x1) << PCR_RST_EN_1_TACH0_RST_EN_Pos)     /* (PCR_RST_EN_1) TACH0 Reset Enable Mask */
#define PCR_RST_EN_1_TACH0_RST_EN(value)      (PCR_RST_EN_1_TACH0_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_TACH0_RST_EN_Pos)) /* Assigment of value for TACH0_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_PWM0_RST_EN_Pos          _UINT32_(4)                                          /* (PCR_RST_EN_1) PWM0 Reset Enable Position */
#define PCR_RST_EN_1_PWM0_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_1_PWM0_RST_EN_Pos)      /* (PCR_RST_EN_1) PWM0 Reset Enable Mask */
#define PCR_RST_EN_1_PWM0_RST_EN(value)       (PCR_RST_EN_1_PWM0_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_PWM0_RST_EN_Pos)) /* Assigment of value for PWM0_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_PMC_RST_EN_Pos           _UINT32_(5)                                          /* (PCR_RST_EN_1) PMC Reset Enable Position */
#define PCR_RST_EN_1_PMC_RST_EN_Msk           (_UINT32_(0x1) << PCR_RST_EN_1_PMC_RST_EN_Pos)       /* (PCR_RST_EN_1) PMC Reset Enable Mask */
#define PCR_RST_EN_1_PMC_RST_EN(value)        (PCR_RST_EN_1_PMC_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_PMC_RST_EN_Pos)) /* Assigment of value for PMC_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_DMA_RST_EN_Pos           _UINT32_(6)                                          /* (PCR_RST_EN_1) DMA Reset Enable Position */
#define PCR_RST_EN_1_DMA_RST_EN_Msk           (_UINT32_(0x1) << PCR_RST_EN_1_DMA_RST_EN_Pos)       /* (PCR_RST_EN_1) DMA Reset Enable Mask */
#define PCR_RST_EN_1_DMA_RST_EN(value)        (PCR_RST_EN_1_DMA_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_DMA_RST_EN_Pos)) /* Assigment of value for DMA_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_TFDP_RST_EN_Pos          _UINT32_(7)                                          /* (PCR_RST_EN_1) TFDP Reset Enable Position */
#define PCR_RST_EN_1_TFDP_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_1_TFDP_RST_EN_Pos)      /* (PCR_RST_EN_1) TFDP Reset Enable Mask */
#define PCR_RST_EN_1_TFDP_RST_EN(value)       (PCR_RST_EN_1_TFDP_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_TFDP_RST_EN_Pos)) /* Assigment of value for TFDP_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_PROCESSOR_RST_EN_Pos     _UINT32_(8)                                          /* (PCR_RST_EN_1) PROCESSOR Reset Enable Position */
#define PCR_RST_EN_1_PROCESSOR_RST_EN_Msk     (_UINT32_(0x1) << PCR_RST_EN_1_PROCESSOR_RST_EN_Pos) /* (PCR_RST_EN_1) PROCESSOR Reset Enable Mask */
#define PCR_RST_EN_1_PROCESSOR_RST_EN(value)  (PCR_RST_EN_1_PROCESSOR_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_PROCESSOR_RST_EN_Pos)) /* Assigment of value for PROCESSOR_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_WDT_RST_EN_Pos           _UINT32_(9)                                          /* (PCR_RST_EN_1) WDT Reset Enable Position */
#define PCR_RST_EN_1_WDT_RST_EN_Msk           (_UINT32_(0x1) << PCR_RST_EN_1_WDT_RST_EN_Pos)       /* (PCR_RST_EN_1) WDT Reset Enable Mask */
#define PCR_RST_EN_1_WDT_RST_EN(value)        (PCR_RST_EN_1_WDT_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_WDT_RST_EN_Pos)) /* Assigment of value for WDT_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_SMB0_RST_EN_Pos          _UINT32_(10)                                         /* (PCR_RST_EN_1) SMB0 Reset Enable Position */
#define PCR_RST_EN_1_SMB0_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_1_SMB0_RST_EN_Pos)      /* (PCR_RST_EN_1) SMB0 Reset Enable Mask */
#define PCR_RST_EN_1_SMB0_RST_EN(value)       (PCR_RST_EN_1_SMB0_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_SMB0_RST_EN_Pos)) /* Assigment of value for SMB0_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_TACH1_RST_EN_Pos         _UINT32_(11)                                         /* (PCR_RST_EN_1) TACH1 Reset Enable Position */
#define PCR_RST_EN_1_TACH1_RST_EN_Msk         (_UINT32_(0x1) << PCR_RST_EN_1_TACH1_RST_EN_Pos)     /* (PCR_RST_EN_1) TACH1 Reset Enable Mask */
#define PCR_RST_EN_1_TACH1_RST_EN(value)      (PCR_RST_EN_1_TACH1_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_TACH1_RST_EN_Pos)) /* Assigment of value for TACH1_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_PWM1_RST_EN_Pos          _UINT32_(20)                                         /* (PCR_RST_EN_1) PWM1 Reset Enable Position */
#define PCR_RST_EN_1_PWM1_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_1_PWM1_RST_EN_Pos)      /* (PCR_RST_EN_1) PWM1 Reset Enable Mask */
#define PCR_RST_EN_1_PWM1_RST_EN(value)       (PCR_RST_EN_1_PWM1_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_PWM1_RST_EN_Pos)) /* Assigment of value for PWM1_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_PWM2_RST_EN_Pos          _UINT32_(21)                                         /* (PCR_RST_EN_1) PWM2 Reset Enable Position */
#define PCR_RST_EN_1_PWM2_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_1_PWM2_RST_EN_Pos)      /* (PCR_RST_EN_1) PWM2 Reset Enable Mask */
#define PCR_RST_EN_1_PWM2_RST_EN(value)       (PCR_RST_EN_1_PWM2_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_PWM2_RST_EN_Pos)) /* Assigment of value for PWM2_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_PWM3_RST_EN_Pos          _UINT32_(22)                                         /* (PCR_RST_EN_1) PWM3 Reset Enable Position */
#define PCR_RST_EN_1_PWM3_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_1_PWM3_RST_EN_Pos)      /* (PCR_RST_EN_1) PWM3 Reset Enable Mask */
#define PCR_RST_EN_1_PWM3_RST_EN(value)       (PCR_RST_EN_1_PWM3_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_PWM3_RST_EN_Pos)) /* Assigment of value for PWM3_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_PWM4_RST_EN_Pos          _UINT32_(23)                                         /* (PCR_RST_EN_1) PWM4 Reset Enable Position */
#define PCR_RST_EN_1_PWM4_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_1_PWM4_RST_EN_Pos)      /* (PCR_RST_EN_1) PWM4 Reset Enable Mask */
#define PCR_RST_EN_1_PWM4_RST_EN(value)       (PCR_RST_EN_1_PWM4_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_PWM4_RST_EN_Pos)) /* Assigment of value for PWM4_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_PWM5_RST_EN_Pos          _UINT32_(24)                                         /* (PCR_RST_EN_1) PWM5 Reset Enable Position */
#define PCR_RST_EN_1_PWM5_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_1_PWM5_RST_EN_Pos)      /* (PCR_RST_EN_1) PWM5 Reset Enable Mask */
#define PCR_RST_EN_1_PWM5_RST_EN(value)       (PCR_RST_EN_1_PWM5_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_PWM5_RST_EN_Pos)) /* Assigment of value for PWM5_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_EC_REG_BANK_RST_EN_Pos   _UINT32_(29)                                         /* (PCR_RST_EN_1) EC_REG_BANK Reset Enable Position */
#define PCR_RST_EN_1_EC_REG_BANK_RST_EN_Msk   (_UINT32_(0x1) << PCR_RST_EN_1_EC_REG_BANK_RST_EN_Pos) /* (PCR_RST_EN_1) EC_REG_BANK Reset Enable Mask */
#define PCR_RST_EN_1_EC_REG_BANK_RST_EN(value) (PCR_RST_EN_1_EC_REG_BANK_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_EC_REG_BANK_RST_EN_Pos)) /* Assigment of value for EC_REG_BANK_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_TMR16_0_RST_EN_Pos       _UINT32_(30)                                         /* (PCR_RST_EN_1) TIMER16_0 Reset Enable Position */
#define PCR_RST_EN_1_TMR16_0_RST_EN_Msk       (_UINT32_(0x1) << PCR_RST_EN_1_TMR16_0_RST_EN_Pos)   /* (PCR_RST_EN_1) TIMER16_0 Reset Enable Mask */
#define PCR_RST_EN_1_TMR16_0_RST_EN(value)    (PCR_RST_EN_1_TMR16_0_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_TMR16_0_RST_EN_Pos)) /* Assigment of value for TMR16_0_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_TMR16_1_RST_EN_Pos       _UINT32_(31)                                         /* (PCR_RST_EN_1) TIMER16_1 Reset Enable Position */
#define PCR_RST_EN_1_TMR16_1_RST_EN_Msk       (_UINT32_(0x1) << PCR_RST_EN_1_TMR16_1_RST_EN_Pos)   /* (PCR_RST_EN_1) TIMER16_1 Reset Enable Mask */
#define PCR_RST_EN_1_TMR16_1_RST_EN(value)    (PCR_RST_EN_1_TMR16_1_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_TMR16_1_RST_EN_Pos)) /* Assigment of value for TMR16_1_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_Msk                      _UINT32_(0xE1F00FF5)                                 /* (PCR_RST_EN_1) Register Mask  */


/* -------- PCR_RST_EN_2 : (PCR Offset: 0x78) (R/W 32) Reset Enable 2 Register -------- */
#define PCR_RST_EN_2_RESETVALUE               _UINT32_(0x00)                                       /*  (PCR_RST_EN_2) Reset Enable 2 Register  Reset Value */

#define PCR_RST_EN_2_UART_0_RST_EN_Pos        _UINT32_(1)                                          /* (PCR_RST_EN_2) UART 0 Reset Enable Position */
#define PCR_RST_EN_2_UART_0_RST_EN_Msk        (_UINT32_(0x1) << PCR_RST_EN_2_UART_0_RST_EN_Pos)    /* (PCR_RST_EN_2) UART 0 Reset Enable Mask */
#define PCR_RST_EN_2_UART_0_RST_EN(value)     (PCR_RST_EN_2_UART_0_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_2_UART_0_RST_EN_Pos)) /* Assigment of value for UART_0_RST_EN in the PCR_RST_EN_2 register */
#define PCR_RST_EN_2_UART_1_RST_EN_Pos        _UINT32_(2)                                          /* (PCR_RST_EN_2) UART 1 Reset Enable Position */
#define PCR_RST_EN_2_UART_1_RST_EN_Msk        (_UINT32_(0x1) << PCR_RST_EN_2_UART_1_RST_EN_Pos)    /* (PCR_RST_EN_2) UART 1 Reset Enable Mask */
#define PCR_RST_EN_2_UART_1_RST_EN(value)     (PCR_RST_EN_2_UART_1_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_2_UART_1_RST_EN_Pos)) /* Assigment of value for UART_1_RST_EN in the PCR_RST_EN_2 register */
#define PCR_RST_EN_2_GLBL_CFG_RST_EN_Pos      _UINT32_(12)                                         /* (PCR_RST_EN_2) GLBL_CFG Reset Enable Position */
#define PCR_RST_EN_2_GLBL_CFG_RST_EN_Msk      (_UINT32_(0x1) << PCR_RST_EN_2_GLBL_CFG_RST_EN_Pos)  /* (PCR_RST_EN_2) GLBL_CFG Reset Enable Mask */
#define PCR_RST_EN_2_GLBL_CFG_RST_EN(value)   (PCR_RST_EN_2_GLBL_CFG_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_2_GLBL_CFG_RST_EN_Pos)) /* Assigment of value for GLBL_CFG_RST_EN in the PCR_RST_EN_2 register */
#define PCR_RST_EN_2_RTC_RST_EN_Pos           _UINT32_(18)                                         /* (PCR_RST_EN_2) RTC Reset Enable Position */
#define PCR_RST_EN_2_RTC_RST_EN_Msk           (_UINT32_(0x1) << PCR_RST_EN_2_RTC_RST_EN_Pos)       /* (PCR_RST_EN_2) RTC Reset Enable Mask */
#define PCR_RST_EN_2_RTC_RST_EN(value)        (PCR_RST_EN_2_RTC_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_2_RTC_RST_EN_Pos)) /* Assigment of value for RTC_RST_EN in the PCR_RST_EN_2 register */
#define PCR_RST_EN_2_Msk                      _UINT32_(0x00041006)                                 /* (PCR_RST_EN_2) Register Mask  */


/* -------- PCR_RST_EN_3 : (PCR Offset: 0x7C) (R/W 32) Reset Enable 3 Register -------- */
#define PCR_RST_EN_3_RESETVALUE               _UINT32_(0x00)                                       /*  (PCR_RST_EN_3) Reset Enable 3 Register  Reset Value */

#define PCR_RST_EN_3_ADC_RST_EN_Pos           _UINT32_(3)                                          /* (PCR_RST_EN_3) ADC Reset Enable Position */
#define PCR_RST_EN_3_ADC_RST_EN_Msk           (_UINT32_(0x1) << PCR_RST_EN_3_ADC_RST_EN_Pos)       /* (PCR_RST_EN_3) ADC Reset Enable Mask */
#define PCR_RST_EN_3_ADC_RST_EN(value)        (PCR_RST_EN_3_ADC_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_ADC_RST_EN_Pos)) /* Assigment of value for ADC_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_GP_SPI0_RST_EN_Pos       _UINT32_(9)                                          /* (PCR_RST_EN_3) GP SPI0 Reset Enable Position */
#define PCR_RST_EN_3_GP_SPI0_RST_EN_Msk       (_UINT32_(0x1) << PCR_RST_EN_3_GP_SPI0_RST_EN_Pos)   /* (PCR_RST_EN_3) GP SPI0 Reset Enable Mask */
#define PCR_RST_EN_3_GP_SPI0_RST_EN(value)    (PCR_RST_EN_3_GP_SPI0_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_GP_SPI0_RST_EN_Pos)) /* Assigment of value for GP_SPI0_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_HTMR_0_RST_EN_Pos        _UINT32_(10)                                         /* (PCR_RST_EN_3) HTIMER 0 Reset Enable Position */
#define PCR_RST_EN_3_HTMR_0_RST_EN_Msk        (_UINT32_(0x1) << PCR_RST_EN_3_HTMR_0_RST_EN_Pos)    /* (PCR_RST_EN_3) HTIMER 0 Reset Enable Mask */
#define PCR_RST_EN_3_HTMR_0_RST_EN(value)     (PCR_RST_EN_3_HTMR_0_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_HTMR_0_RST_EN_Pos)) /* Assigment of value for HTMR_0_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_KEYSCAN_RST_EN_Pos       _UINT32_(11)                                         /* (PCR_RST_EN_3) KEYSCAN Reset Enable Position */
#define PCR_RST_EN_3_KEYSCAN_RST_EN_Msk       (_UINT32_(0x1) << PCR_RST_EN_3_KEYSCAN_RST_EN_Pos)   /* (PCR_RST_EN_3) KEYSCAN Reset Enable Mask */
#define PCR_RST_EN_3_KEYSCAN_RST_EN(value)    (PCR_RST_EN_3_KEYSCAN_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_KEYSCAN_RST_EN_Pos)) /* Assigment of value for KEYSCAN_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_RPMPWM_RST_EN_Pos        _UINT32_(12)                                         /* (PCR_RST_EN_3) RPM-PWM Reset Enable Position */
#define PCR_RST_EN_3_RPMPWM_RST_EN_Msk        (_UINT32_(0x1) << PCR_RST_EN_3_RPMPWM_RST_EN_Pos)    /* (PCR_RST_EN_3) RPM-PWM Reset Enable Mask */
#define PCR_RST_EN_3_RPMPWM_RST_EN(value)     (PCR_RST_EN_3_RPMPWM_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_RPMPWM_RST_EN_Pos)) /* Assigment of value for RPMPWM_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_SMB1_RST_EN_Pos          _UINT32_(13)                                         /* (PCR_RST_EN_3) SMB1 Reset Enable Position */
#define PCR_RST_EN_3_SMB1_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_3_SMB1_RST_EN_Pos)      /* (PCR_RST_EN_3) SMB1 Reset Enable Mask */
#define PCR_RST_EN_3_SMB1_RST_EN(value)       (PCR_RST_EN_3_SMB1_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_SMB1_RST_EN_Pos)) /* Assigment of value for SMB1_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_SMB2_RST_EN_Pos          _UINT32_(14)                                         /* (PCR_RST_EN_3) SMB2 Reset Enable Position */
#define PCR_RST_EN_3_SMB2_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_3_SMB2_RST_EN_Pos)      /* (PCR_RST_EN_3) SMB2 Reset Enable Mask */
#define PCR_RST_EN_3_SMB2_RST_EN(value)       (PCR_RST_EN_3_SMB2_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_SMB2_RST_EN_Pos)) /* Assigment of value for SMB2_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_SMB3_RST_EN_Pos          _UINT32_(15)                                         /* (PCR_RST_EN_3) SMB3 Reset Enable Position */
#define PCR_RST_EN_3_SMB3_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_3_SMB3_RST_EN_Pos)      /* (PCR_RST_EN_3) SMB3 Reset Enable Mask */
#define PCR_RST_EN_3_SMB3_RST_EN(value)       (PCR_RST_EN_3_SMB3_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_SMB3_RST_EN_Pos)) /* Assigment of value for SMB3_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_LED0_RST_EN_Pos          _UINT32_(16)                                         /* (PCR_RST_EN_3) LED0 Reset Enable Position */
#define PCR_RST_EN_3_LED0_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_3_LED0_RST_EN_Pos)      /* (PCR_RST_EN_3) LED0 Reset Enable Mask */
#define PCR_RST_EN_3_LED0_RST_EN(value)       (PCR_RST_EN_3_LED0_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_LED0_RST_EN_Pos)) /* Assigment of value for LED0_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_LED1_RST_EN_Pos          _UINT32_(17)                                         /* (PCR_RST_EN_3) LED1 Reset Enable Position */
#define PCR_RST_EN_3_LED1_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_3_LED1_RST_EN_Pos)      /* (PCR_RST_EN_3) LED1 Reset Enable Mask */
#define PCR_RST_EN_3_LED1_RST_EN(value)       (PCR_RST_EN_3_LED1_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_LED1_RST_EN_Pos)) /* Assigment of value for LED1_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_TMR16_2_RST_EN_Pos       _UINT32_(21)                                         /* (PCR_RST_EN_3) TIMER16_2 Reset Enable Position */
#define PCR_RST_EN_3_TMR16_2_RST_EN_Msk       (_UINT32_(0x1) << PCR_RST_EN_3_TMR16_2_RST_EN_Pos)   /* (PCR_RST_EN_3) TIMER16_2 Reset Enable Mask */
#define PCR_RST_EN_3_TMR16_2_RST_EN(value)    (PCR_RST_EN_3_TMR16_2_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_TMR16_2_RST_EN_Pos)) /* Assigment of value for TMR16_2_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_TMR16_3_RST_EN_Pos       _UINT32_(22)                                         /* (PCR_RST_EN_3) TIMER16_3 Reset Enable Position */
#define PCR_RST_EN_3_TMR16_3_RST_EN_Msk       (_UINT32_(0x1) << PCR_RST_EN_3_TMR16_3_RST_EN_Pos)   /* (PCR_RST_EN_3) TIMER16_3 Reset Enable Mask */
#define PCR_RST_EN_3_TMR16_3_RST_EN(value)    (PCR_RST_EN_3_TMR16_3_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_TMR16_3_RST_EN_Pos)) /* Assigment of value for TMR16_3_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_TMR32_0_RST_EN_Pos       _UINT32_(23)                                         /* (PCR_RST_EN_3) TIMER32_0 Reset Enable Position */
#define PCR_RST_EN_3_TMR32_0_RST_EN_Msk       (_UINT32_(0x1) << PCR_RST_EN_3_TMR32_0_RST_EN_Pos)   /* (PCR_RST_EN_3) TIMER32_0 Reset Enable Mask */
#define PCR_RST_EN_3_TMR32_0_RST_EN(value)    (PCR_RST_EN_3_TMR32_0_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_TMR32_0_RST_EN_Pos)) /* Assigment of value for TMR32_0_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_TMR32_1_RST_EN_Pos       _UINT32_(24)                                         /* (PCR_RST_EN_3) TIMER32_1 Reset Enable Position */
#define PCR_RST_EN_3_TMR32_1_RST_EN_Msk       (_UINT32_(0x1) << PCR_RST_EN_3_TMR32_1_RST_EN_Pos)   /* (PCR_RST_EN_3) TIMER32_1 Reset Enable Mask */
#define PCR_RST_EN_3_TMR32_1_RST_EN(value)    (PCR_RST_EN_3_TMR32_1_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_TMR32_1_RST_EN_Pos)) /* Assigment of value for TMR32_1_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_HTMR_1_RST_EN_Pos        _UINT32_(29)                                         /* (PCR_RST_EN_3) HTIMER 1 Reset Enable Position */
#define PCR_RST_EN_3_HTMR_1_RST_EN_Msk        (_UINT32_(0x1) << PCR_RST_EN_3_HTMR_1_RST_EN_Pos)    /* (PCR_RST_EN_3) HTIMER 1 Reset Enable Mask */
#define PCR_RST_EN_3_HTMR_1_RST_EN(value)     (PCR_RST_EN_3_HTMR_1_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_HTMR_1_RST_EN_Pos)) /* Assigment of value for HTMR_1_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_CCTMR_RST_EN_Pos         _UINT32_(30)                                         /* (PCR_RST_EN_3) Capture Compare Timer Reset Enable Position */
#define PCR_RST_EN_3_CCTMR_RST_EN_Msk         (_UINT32_(0x1) << PCR_RST_EN_3_CCTMR_RST_EN_Pos)     /* (PCR_RST_EN_3) Capture Compare Timer Reset Enable Mask */
#define PCR_RST_EN_3_CCTMR_RST_EN(value)      (PCR_RST_EN_3_CCTMR_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_CCTMR_RST_EN_Pos)) /* Assigment of value for CCTMR_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_Msk                      _UINT32_(0x61E3FE08)                                 /* (PCR_RST_EN_3) Register Mask  */


/* -------- PCR_RST_EN_4 : (PCR Offset: 0x80) (R/W 32) Reset Enable 4 Register -------- */
#define PCR_RST_EN_4_RESETVALUE               _UINT32_(0x00)                                       /*  (PCR_RST_EN_4) Reset Enable 4 Register  Reset Value */

#define PCR_RST_EN_4_PWM10_RST_EN_Pos         _UINT32_(0)                                          /* (PCR_RST_EN_4) PWM10 Reset Enable Position */
#define PCR_RST_EN_4_PWM10_RST_EN_Msk         (_UINT32_(0x1) << PCR_RST_EN_4_PWM10_RST_EN_Pos)     /* (PCR_RST_EN_4) PWM10 Reset Enable Mask */
#define PCR_RST_EN_4_PWM10_RST_EN(value)      (PCR_RST_EN_4_PWM10_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_4_PWM10_RST_EN_Pos)) /* Assigment of value for PWM10_RST_EN in the PCR_RST_EN_4 register */
#define PCR_RST_EN_4_CNT_TMER0_RST_EN_Pos     _UINT32_(2)                                          /* (PCR_RST_EN_4) CNT_TMER0 Reset Enable Position */
#define PCR_RST_EN_4_CNT_TMER0_RST_EN_Msk     (_UINT32_(0x1) << PCR_RST_EN_4_CNT_TMER0_RST_EN_Pos) /* (PCR_RST_EN_4) CNT_TMER0 Reset Enable Mask */
#define PCR_RST_EN_4_CNT_TMER0_RST_EN(value)  (PCR_RST_EN_4_CNT_TMER0_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_4_CNT_TMER0_RST_EN_Pos)) /* Assigment of value for CNT_TMER0_RST_EN in the PCR_RST_EN_4 register */
#define PCR_RST_EN_4_CNT_TMER1_RST_EN_Pos     _UINT32_(3)                                          /* (PCR_RST_EN_4) CNT_TMER1 Reset Enable Position */
#define PCR_RST_EN_4_CNT_TMER1_RST_EN_Msk     (_UINT32_(0x1) << PCR_RST_EN_4_CNT_TMER1_RST_EN_Pos) /* (PCR_RST_EN_4) CNT_TMER1 Reset Enable Mask */
#define PCR_RST_EN_4_CNT_TMER1_RST_EN(value)  (PCR_RST_EN_4_CNT_TMER1_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_4_CNT_TMER1_RST_EN_Pos)) /* Assigment of value for CNT_TMER1_RST_EN in the PCR_RST_EN_4 register */
#define PCR_RST_EN_4_CNT_TMER2_RST_EN_Pos     _UINT32_(4)                                          /* (PCR_RST_EN_4) CNT_TMER2 Reset Enable Position */
#define PCR_RST_EN_4_CNT_TMER2_RST_EN_Msk     (_UINT32_(0x1) << PCR_RST_EN_4_CNT_TMER2_RST_EN_Pos) /* (PCR_RST_EN_4) CNT_TMER2 Reset Enable Mask */
#define PCR_RST_EN_4_CNT_TMER2_RST_EN(value)  (PCR_RST_EN_4_CNT_TMER2_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_4_CNT_TMER2_RST_EN_Pos)) /* Assigment of value for CNT_TMER2_RST_EN in the PCR_RST_EN_4 register */
#define PCR_RST_EN_4_CNT_TMER3_RST_EN_Pos     _UINT32_(5)                                          /* (PCR_RST_EN_4) CNT_TMER3 Reset Enable Position */
#define PCR_RST_EN_4_CNT_TMER3_RST_EN_Msk     (_UINT32_(0x1) << PCR_RST_EN_4_CNT_TMER3_RST_EN_Pos) /* (PCR_RST_EN_4) CNT_TMER3 Reset Enable Mask */
#define PCR_RST_EN_4_CNT_TMER3_RST_EN(value)  (PCR_RST_EN_4_CNT_TMER3_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_4_CNT_TMER3_RST_EN_Pos)) /* Assigment of value for CNT_TMER3_RST_EN in the PCR_RST_EN_4 register */
#define PCR_RST_EN_4_RTOS_RST_EN_Pos          _UINT32_(6)                                          /* (PCR_RST_EN_4) PWM6 Reset Enable Position */
#define PCR_RST_EN_4_RTOS_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_4_RTOS_RST_EN_Pos)      /* (PCR_RST_EN_4) PWM6 Reset Enable Mask */
#define PCR_RST_EN_4_RTOS_RST_EN(value)       (PCR_RST_EN_4_RTOS_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_4_RTOS_RST_EN_Pos)) /* Assigment of value for RTOS_RST_EN in the PCR_RST_EN_4 register */
#define PCR_RST_EN_4_RPMPWM1_RST_EN_Pos       _UINT32_(7)                                          /* (PCR_RST_EN_4) RPMPWM 1 Reset Enable Position */
#define PCR_RST_EN_4_RPMPWM1_RST_EN_Msk       (_UINT32_(0x1) << PCR_RST_EN_4_RPMPWM1_RST_EN_Pos)   /* (PCR_RST_EN_4) RPMPWM 1 Reset Enable Mask */
#define PCR_RST_EN_4_RPMPWM1_RST_EN(value)    (PCR_RST_EN_4_RPMPWM1_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_4_RPMPWM1_RST_EN_Pos)) /* Assigment of value for RPMPWM1_RST_EN in the PCR_RST_EN_4 register */
#define PCR_RST_EN_4_QSPI_RST_EN_Pos          _UINT32_(8)                                          /* (PCR_RST_EN_4) Quad SPI Reset Enable Position */
#define PCR_RST_EN_4_QSPI_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_4_QSPI_RST_EN_Pos)      /* (PCR_RST_EN_4) Quad SPI Reset Enable Mask */
#define PCR_RST_EN_4_QSPI_RST_EN(value)       (PCR_RST_EN_4_QSPI_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_4_QSPI_RST_EN_Pos)) /* Assigment of value for QSPI_RST_EN in the PCR_RST_EN_4 register */
#define PCR_RST_EN_4_RC_ID1_RST_EN_Pos        _UINT32_(11)                                         /* (PCR_RST_EN_4) RC_ID1 Reset Enable Position */
#define PCR_RST_EN_4_RC_ID1_RST_EN_Msk        (_UINT32_(0x1) << PCR_RST_EN_4_RC_ID1_RST_EN_Pos)    /* (PCR_RST_EN_4) RC_ID1 Reset Enable Mask */
#define PCR_RST_EN_4_RC_ID1_RST_EN(value)     (PCR_RST_EN_4_RC_ID1_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_4_RC_ID1_RST_EN_Pos)) /* Assigment of value for RC_ID1_RST_EN in the PCR_RST_EN_4 register */
#define PCR_RST_EN_4_RC_ID2_RST_EN_Pos        _UINT32_(12)                                         /* (PCR_RST_EN_4) RC_ID2 Reset Enable Position */
#define PCR_RST_EN_4_RC_ID2_RST_EN_Msk        (_UINT32_(0x1) << PCR_RST_EN_4_RC_ID2_RST_EN_Pos)    /* (PCR_RST_EN_4) RC_ID2 Reset Enable Mask */
#define PCR_RST_EN_4_RC_ID2_RST_EN(value)     (PCR_RST_EN_4_RC_ID2_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_4_RC_ID2_RST_EN_Pos)) /* Assigment of value for RC_ID2_RST_EN in the PCR_RST_EN_4 register */
#define PCR_RST_EN_4_PROCHOT_RST_EN_Pos       _UINT32_(13)                                         /* (PCR_RST_EN_4) PROCHOT Reset Enable Position */
#define PCR_RST_EN_4_PROCHOT_RST_EN_Msk       (_UINT32_(0x1) << PCR_RST_EN_4_PROCHOT_RST_EN_Pos)   /* (PCR_RST_EN_4) PROCHOT Reset Enable Mask */
#define PCR_RST_EN_4_PROCHOT_RST_EN(value)    (PCR_RST_EN_4_PROCHOT_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_4_PROCHOT_RST_EN_Pos)) /* Assigment of value for PROCHOT_RST_EN in the PCR_RST_EN_4 register */
#define PCR_RST_EN_4_FUJICL_RST_EN_Pos        _UINT32_(15)                                         /* (PCR_RST_EN_4) Fujitsu Custom Logic Reset Enable Position */
#define PCR_RST_EN_4_FUJICL_RST_EN_Msk        (_UINT32_(0x1) << PCR_RST_EN_4_FUJICL_RST_EN_Pos)    /* (PCR_RST_EN_4) Fujitsu Custom Logic Reset Enable Mask */
#define PCR_RST_EN_4_FUJICL_RST_EN(value)     (PCR_RST_EN_4_FUJICL_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_4_FUJICL_RST_EN_Pos)) /* Assigment of value for FUJICL_RST_EN in the PCR_RST_EN_4 register */
#define PCR_RST_EN_4_Msk                      _UINT32_(0x0000B9FD)                                 /* (PCR_RST_EN_4) Register Mask  */


/** \brief PCR register offsets definitions */
#define PCR_SYS_SLP_CTRL_REG_OFST      _UINT32_(0x00)      /* (PCR_SYS_SLP_CTRL) System Sleep Control Offset */
#define PCR_PROC_CLK_CTRL_REG_OFST     _UINT32_(0x04)      /* (PCR_PROC_CLK_CTRL) Processor Clock Control Register [7:0] Processor Clock Divide Value (PROC_DIV)\n                           1: divide 48 MHz Ring Oscillator by 1.\n                   3: divide 48 MHz Ring Oscillator by 3.\n                         4: divide 48 MHz Ring Oscillator by 4.\n                         16: divide 48 MHz Ring Oscillator by 16.\n                 48: divide 48 MHz Ring Oscillator by 48.\n                 No other values are supported. Offset */
#define PCR_SLOW_CLK_CTRL_REG_OFST     _UINT32_(0x08)      /* (PCR_SLOW_CLK_CTRL) Configures the EC_CLK clock domain Offset */
#define PCR_OSC_ID_REG_OFST            _UINT32_(0x0C)      /* (PCR_OSC_ID) Oscillator ID Register Offset */
#define PCR_PWR_RST_STS_REG_OFST       _UINT32_(0x10)      /* (PCR_PWR_RST_STS) PCR Power Reset Status Register Offset */
#define PCR_PWR_RST_CTRL_REG_OFST      _UINT32_(0x14)      /* (PCR_PWR_RST_CTRL) Power Reset Control Register Offset */
#define PCR_SYS_RST_REG_OFST           _UINT32_(0x18)      /* (PCR_SYS_RST) System Reset Register Offset */
#define PCR_SLP_EN_0_REG_OFST          _UINT32_(0x30)      /* (PCR_SLP_EN_0) Sleep Enable 0 Register Offset */
#define PCR_SLP_EN_1_REG_OFST          _UINT32_(0x34)      /* (PCR_SLP_EN_1) Sleep Enable 1 Register Offset */
#define PCR_SLP_EN_2_REG_OFST          _UINT32_(0x38)      /* (PCR_SLP_EN_2) Sleep Enable 2 Register Offset */
#define PCR_SLP_EN_3_REG_OFST          _UINT32_(0x3C)      /* (PCR_SLP_EN_3) Sleep Enable 3 Register Offset */
#define PCR_SLP_EN_4_REG_OFST          _UINT32_(0x40)      /* (PCR_SLP_EN_4) Sleep Enable 4 Register Offset */
#define PCR_CLK_REQ_0_REG_OFST         _UINT32_(0x50)      /* (PCR_CLK_REQ_0) Clock Required 0 Register Offset */
#define PCR_CLK_REQ_1_REG_OFST         _UINT32_(0x54)      /* (PCR_CLK_REQ_1) Clock Required 1 Register Offset */
#define PCR_CLK_REQ_2_REG_OFST         _UINT32_(0x58)      /* (PCR_CLK_REQ_2) Clock Required 2 Register Offset */
#define PCR_CLK_REQ_3_REG_OFST         _UINT32_(0x5C)      /* (PCR_CLK_REQ_3) Clock Required 3 Register Offset */
#define PCR_CLK_REQ_4_REG_OFST         _UINT32_(0x60)      /* (PCR_CLK_REQ_4) Clock Required 4 Register Offset */
#define PCR_RST_EN_0_REG_OFST          _UINT32_(0x70)      /* (PCR_RST_EN_0) Reset Enable 0 Register Offset */
#define PCR_RST_EN_1_REG_OFST          _UINT32_(0x74)      /* (PCR_RST_EN_1) Reset Enable 1 Register Offset */
#define PCR_RST_EN_2_REG_OFST          _UINT32_(0x78)      /* (PCR_RST_EN_2) Reset Enable 2 Register Offset */
#define PCR_RST_EN_3_REG_OFST          _UINT32_(0x7C)      /* (PCR_RST_EN_3) Reset Enable 3 Register Offset */
#define PCR_RST_EN_4_REG_OFST          _UINT32_(0x80)      /* (PCR_RST_EN_4) Reset Enable 4 Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PCR register API structure */
typedef struct
{  /* The Power, Clocks, and Resets (PCR) Section identifies all the power supplies,\n                      clock sources, and reset inputs to the chip and defines all the derived power, clock, and reset signals. */
  __IO  uint32_t                       PCR_SYS_SLP_CTRL;   /**< Offset: 0x00 (R/W  32) System Sleep Control */
  __IO  uint32_t                       PCR_PROC_CLK_CTRL;  /**< Offset: 0x04 (R/W  32) Processor Clock Control Register [7:0] Processor Clock Divide Value (PROC_DIV)\n                           1: divide 48 MHz Ring Oscillator by 1.\n                   3: divide 48 MHz Ring Oscillator by 3.\n                         4: divide 48 MHz Ring Oscillator by 4.\n                         16: divide 48 MHz Ring Oscillator by 16.\n                 48: divide 48 MHz Ring Oscillator by 48.\n                 No other values are supported. */
  __IO  uint32_t                       PCR_SLOW_CLK_CTRL;  /**< Offset: 0x08 (R/W  32) Configures the EC_CLK clock domain */
  __IO  uint32_t                       PCR_OSC_ID;         /**< Offset: 0x0C (R/W  32) Oscillator ID Register */
  __IO  uint32_t                       PCR_PWR_RST_STS;    /**< Offset: 0x10 (R/W  32) PCR Power Reset Status Register */
  __IO  uint32_t                       PCR_PWR_RST_CTRL;   /**< Offset: 0x14 (R/W  32) Power Reset Control Register */
  __IO  uint32_t                       PCR_SYS_RST;        /**< Offset: 0x18 (R/W  32) System Reset Register */
  __I   uint8_t                        Reserved1[0x14];
  __IO  uint32_t                       PCR_SLP_EN_0;       /**< Offset: 0x30 (R/W  32) Sleep Enable 0 Register */
  __IO  uint32_t                       PCR_SLP_EN_1;       /**< Offset: 0x34 (R/W  32) Sleep Enable 1 Register */
  __IO  uint32_t                       PCR_SLP_EN_2;       /**< Offset: 0x38 (R/W  32) Sleep Enable 2 Register */
  __IO  uint32_t                       PCR_SLP_EN_3;       /**< Offset: 0x3C (R/W  32) Sleep Enable 3 Register */
  __IO  uint32_t                       PCR_SLP_EN_4;       /**< Offset: 0x40 (R/W  32) Sleep Enable 4 Register */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint32_t                       PCR_CLK_REQ_0;      /**< Offset: 0x50 (R/W  32) Clock Required 0 Register */
  __IO  uint32_t                       PCR_CLK_REQ_1;      /**< Offset: 0x54 (R/W  32) Clock Required 1 Register */
  __IO  uint32_t                       PCR_CLK_REQ_2;      /**< Offset: 0x58 (R/W  32) Clock Required 2 Register */
  __IO  uint32_t                       PCR_CLK_REQ_3;      /**< Offset: 0x5C (R/W  32) Clock Required 3 Register */
  __IO  uint32_t                       PCR_CLK_REQ_4;      /**< Offset: 0x60 (R/W  32) Clock Required 4 Register */
  __I   uint8_t                        Reserved3[0x0C];
  __IO  uint32_t                       PCR_RST_EN_0;       /**< Offset: 0x70 (R/W  32) Reset Enable 0 Register */
  __IO  uint32_t                       PCR_RST_EN_1;       /**< Offset: 0x74 (R/W  32) Reset Enable 1 Register */
  __IO  uint32_t                       PCR_RST_EN_2;       /**< Offset: 0x78 (R/W  32) Reset Enable 2 Register */
  __IO  uint32_t                       PCR_RST_EN_3;       /**< Offset: 0x7C (R/W  32) Reset Enable 3 Register */
  __IO  uint32_t                       PCR_RST_EN_4;       /**< Offset: 0x80 (R/W  32) Reset Enable 4 Register */
} pcr_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC1702Q_PCR_COMPONENT_H_ */
