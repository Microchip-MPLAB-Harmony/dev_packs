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

/* file generated from device description version 2023-01-17T13:00:30Z */
#ifndef _CEC_PCR_COMPONENT_H_
#define _CEC_PCR_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PCR                                          */
/* ************************************************************************** */

/* -------- PCR_PROC_CLK_CTRL : (PCR Offset: 0x04) (R/W 32) Processor Clock Control Register [7:0] Processor Clock Divide Value (PROC_DIV) -------- */
#define PCR_PROC_CLK_CTRL_RESETVALUE          _UINT32_(0x04)                                       /*  (PCR_PROC_CLK_CTRL) Processor Clock Control Register [7:0] Processor Clock Divide Value (PROC_DIV)  Reset Value */

#define PCR_PROC_CLK_CTRL_DIV_Pos             _UINT32_(0)                                          /* (PCR_PROC_CLK_CTRL) Selects the EC clock rate Position */
#define PCR_PROC_CLK_CTRL_DIV_Msk             (_UINT32_(0xFF) << PCR_PROC_CLK_CTRL_DIV_Pos)        /* (PCR_PROC_CLK_CTRL) Selects the EC clock rate Mask */
#define PCR_PROC_CLK_CTRL_DIV(value)          (PCR_PROC_CLK_CTRL_DIV_Msk & (_UINT32_(value) << PCR_PROC_CLK_CTRL_DIV_Pos)) /* Assigment of value for DIV in the PCR_PROC_CLK_CTRL register */
#define   PCR_PROC_CLK_CTRL_DIV_DIVIDE_BY_1_Val _UINT32_(0x1)                                        /* (PCR_PROC_CLK_CTRL) Divide 96 MHz clock by 1 (96 MHz Processor Clock)  */
#define   PCR_PROC_CLK_CTRL_DIV_DIVIDE_BY_2_Val _UINT32_(0x2)                                        /* (PCR_PROC_CLK_CTRL) Divide 96 MHz clock by 2 (48 MHz Processor Clock)  */
#define   PCR_PROC_CLK_CTRL_DIV_DIVIDE_BY_4_Val _UINT32_(0x4)                                        /* (PCR_PROC_CLK_CTRL) Divide 96 MHz clock by 4 (24 MHz Processor Clock)  */
#define   PCR_PROC_CLK_CTRL_DIV_DIVIDE_BY_16_Val _UINT32_(0x10)                                       /* (PCR_PROC_CLK_CTRL) Divide 96 MHz clock by 16 (6 MHz Processor Clock)  */
#define   PCR_PROC_CLK_CTRL_DIV_DIVIDE_BY_48_Val _UINT32_(0x30)                                       /* (PCR_PROC_CLK_CTRL) Divide 96 MHz clock by 48 (2 MHz Processor Clock)  */
#define PCR_PROC_CLK_CTRL_DIV_DIVIDE_BY_1     (PCR_PROC_CLK_CTRL_DIV_DIVIDE_BY_1_Val << PCR_PROC_CLK_CTRL_DIV_Pos) /* (PCR_PROC_CLK_CTRL) Divide 96 MHz clock by 1 (96 MHz Processor Clock) Position  */
#define PCR_PROC_CLK_CTRL_DIV_DIVIDE_BY_2     (PCR_PROC_CLK_CTRL_DIV_DIVIDE_BY_2_Val << PCR_PROC_CLK_CTRL_DIV_Pos) /* (PCR_PROC_CLK_CTRL) Divide 96 MHz clock by 2 (48 MHz Processor Clock) Position  */
#define PCR_PROC_CLK_CTRL_DIV_DIVIDE_BY_4     (PCR_PROC_CLK_CTRL_DIV_DIVIDE_BY_4_Val << PCR_PROC_CLK_CTRL_DIV_Pos) /* (PCR_PROC_CLK_CTRL) Divide 96 MHz clock by 4 (24 MHz Processor Clock) Position  */
#define PCR_PROC_CLK_CTRL_DIV_DIVIDE_BY_16    (PCR_PROC_CLK_CTRL_DIV_DIVIDE_BY_16_Val << PCR_PROC_CLK_CTRL_DIV_Pos) /* (PCR_PROC_CLK_CTRL) Divide 96 MHz clock by 16 (6 MHz Processor Clock) Position  */
#define PCR_PROC_CLK_CTRL_DIV_DIVIDE_BY_48    (PCR_PROC_CLK_CTRL_DIV_DIVIDE_BY_48_Val << PCR_PROC_CLK_CTRL_DIV_Pos) /* (PCR_PROC_CLK_CTRL) Divide 96 MHz clock by 48 (2 MHz Processor Clock) Position  */
#define PCR_PROC_CLK_CTRL_Msk                 _UINT32_(0x000000FF)                                 /* (PCR_PROC_CLK_CTRL) Register Mask  */


/* -------- PCR_SLOW_CLK_CTRL : (PCR Offset: 0x08) (R/W 32) Configures the EC_CLK clock domain -------- */
#define PCR_SLOW_CLK_CTRL_RESETVALUE          _UINT32_(0x1E0)                                      /*  (PCR_SLOW_CLK_CTRL) Configures the EC_CLK clock domain  Reset Value */

#define PCR_SLOW_CLK_CTRL_DIV_Pos             _UINT32_(0)                                          /* (PCR_SLOW_CLK_CTRL) SLOW_CLOCK_DIVIDE. n=Divide by n; 0=Clock off Position */
#define PCR_SLOW_CLK_CTRL_DIV_Msk             (_UINT32_(0x3FF) << PCR_SLOW_CLK_CTRL_DIV_Pos)       /* (PCR_SLOW_CLK_CTRL) SLOW_CLOCK_DIVIDE. n=Divide by n; 0=Clock off Mask */
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
#define PCR_PWR_RST_STS_RESETVALUE            _UINT32_(0x50)                                       /*  (PCR_PWR_RST_STS) PCR Power Reset Status Register  Reset Value */

#define PCR_PWR_RST_STS_VCC_PWRGD_STS_Pos     _UINT32_(2)                                          /* (PCR_PWR_RST_STS) Indicates the status of VCC_PWRGD. 0 = PWRGD not asserted. 1 = PWRGD asserte. Position */
#define PCR_PWR_RST_STS_VCC_PWRGD_STS_Msk     (_UINT32_(0x1) << PCR_PWR_RST_STS_VCC_PWRGD_STS_Pos) /* (PCR_PWR_RST_STS) Indicates the status of VCC_PWRGD. 0 = PWRGD not asserted. 1 = PWRGD asserte. Mask */
#define PCR_PWR_RST_STS_VCC_PWRGD_STS(value)  (PCR_PWR_RST_STS_VCC_PWRGD_STS_Msk & (_UINT32_(value) << PCR_PWR_RST_STS_VCC_PWRGD_STS_Pos)) /* Assigment of value for VCC_PWRGD_STS in the PCR_PWR_RST_STS register */
#define PCR_PWR_RST_STS_RST_H_STS_Pos         _UINT32_(3)                                          /* (PCR_PWR_RST_STS) Indicates the status of RESET_VCC. 0 = reset active. 1 = reset not active. Position */
#define PCR_PWR_RST_STS_RST_H_STS_Msk         (_UINT32_(0x1) << PCR_PWR_RST_STS_RST_H_STS_Pos)     /* (PCR_PWR_RST_STS) Indicates the status of RESET_VCC. 0 = reset active. 1 = reset not active. Mask */
#define PCR_PWR_RST_STS_RST_H_STS(value)      (PCR_PWR_RST_STS_RST_H_STS_Msk & (_UINT32_(value) << PCR_PWR_RST_STS_RST_H_STS_Pos)) /* Assigment of value for RST_H_STS in the PCR_PWR_RST_STS register */
#define PCR_PWR_RST_STS_RST_VTR_STS_Pos       _UINT32_(4)                                          /* (PCR_PWR_RST_STS) Indicates the status of RESET_VTR. 0 = reset active. 1 = reset not active.(R/W1C) Position */
#define PCR_PWR_RST_STS_RST_VTR_STS_Msk       (_UINT32_(0x1) << PCR_PWR_RST_STS_RST_VTR_STS_Pos)   /* (PCR_PWR_RST_STS) Indicates the status of RESET_VTR. 0 = reset active. 1 = reset not active.(R/W1C) Mask */
#define PCR_PWR_RST_STS_RST_VTR_STS(value)    (PCR_PWR_RST_STS_RST_VTR_STS_Msk & (_UINT32_(value) << PCR_PWR_RST_STS_RST_VTR_STS_Pos)) /* Assigment of value for RST_VTR_STS in the PCR_PWR_RST_STS register */
#define PCR_PWR_RST_STS_VBAT_RST_STS_Pos      _UINT32_(5)                                          /* (PCR_PWR_RST_STS) VBAT reset status 0 = No reset occurred while VTR was off or since the last time this bit was cleared. 1 = A reset occurred.(R/WC) Position */
#define PCR_PWR_RST_STS_VBAT_RST_STS_Msk      (_UINT32_(0x1) << PCR_PWR_RST_STS_VBAT_RST_STS_Pos)  /* (PCR_PWR_RST_STS) VBAT reset status 0 = No reset occurred while VTR was off or since the last time this bit was cleared. 1 = A reset occurred.(R/WC) Mask */
#define PCR_PWR_RST_STS_VBAT_RST_STS(value)   (PCR_PWR_RST_STS_VBAT_RST_STS_Msk & (_UINT32_(value) << PCR_PWR_RST_STS_VBAT_RST_STS_Pos)) /* Assigment of value for VBAT_RST_STS in the PCR_PWR_RST_STS register */
#define PCR_PWR_RST_STS_RST_SYS_STS_Pos       _UINT32_(6)                                          /* (PCR_PWR_RST_STS) Indicates the status of RESET_SYS.(R/W1C)                0 = No reset occurred since the last time this bit was cleared.                1 = A reset occurred. Position */
#define PCR_PWR_RST_STS_RST_SYS_STS_Msk       (_UINT32_(0x1) << PCR_PWR_RST_STS_RST_SYS_STS_Pos)   /* (PCR_PWR_RST_STS) Indicates the status of RESET_SYS.(R/W1C)                0 = No reset occurred since the last time this bit was cleared.                1 = A reset occurred. Mask */
#define PCR_PWR_RST_STS_RST_SYS_STS(value)    (PCR_PWR_RST_STS_RST_SYS_STS_Msk & (_UINT32_(value) << PCR_PWR_RST_STS_RST_SYS_STS_Pos)) /* Assigment of value for RST_SYS_STS in the PCR_PWR_RST_STS register */
#define PCR_PWR_RST_STS_JTAG_RST_STS_Pos      _UINT32_(7)                                          /* (PCR_PWR_RST_STS) Indicates status of JTAG_TRST# pin.                0 = No JTAG reset occurred since the last time this bit was cleared.                1 = A reset occurred because of a JTAG command. Position */
#define PCR_PWR_RST_STS_JTAG_RST_STS_Msk      (_UINT32_(0x1) << PCR_PWR_RST_STS_JTAG_RST_STS_Pos)  /* (PCR_PWR_RST_STS) Indicates status of JTAG_TRST# pin.                0 = No JTAG reset occurred since the last time this bit was cleared.                1 = A reset occurred because of a JTAG command. Mask */
#define PCR_PWR_RST_STS_JTAG_RST_STS(value)   (PCR_PWR_RST_STS_JTAG_RST_STS_Msk & (_UINT32_(value) << PCR_PWR_RST_STS_JTAG_RST_STS_Pos)) /* Assigment of value for JTAG_RST_STS in the PCR_PWR_RST_STS register */
#define PCR_PWR_RST_STS_WDT_EVENT_Pos         _UINT32_(8)                                          /* (PCR_PWR_RST_STS) Indicates that a WDT_EVENT happened. (R/W1C)                0 = Not active.                1 = A WDT_EVENT occured. Position */
#define PCR_PWR_RST_STS_WDT_EVENT_Msk         (_UINT32_(0x1) << PCR_PWR_RST_STS_WDT_EVENT_Pos)     /* (PCR_PWR_RST_STS) Indicates that a WDT_EVENT happened. (R/W1C)                0 = Not active.                1 = A WDT_EVENT occured. Mask */
#define PCR_PWR_RST_STS_WDT_EVENT(value)      (PCR_PWR_RST_STS_WDT_EVENT_Msk & (_UINT32_(value) << PCR_PWR_RST_STS_WDT_EVENT_Pos)) /* Assigment of value for WDT_EVENT in the PCR_PWR_RST_STS register */
#define PCR_PWR_RST_STS_ACTIVE_32K_Pos        _UINT32_(10)                                         /* (PCR_PWR_RST_STS) 32K ACTIVE (ACTIVE_32K) Position */
#define PCR_PWR_RST_STS_ACTIVE_32K_Msk        (_UINT32_(0x1) << PCR_PWR_RST_STS_ACTIVE_32K_Pos)    /* (PCR_PWR_RST_STS) 32K ACTIVE (ACTIVE_32K) Mask */
#define PCR_PWR_RST_STS_ACTIVE_32K(value)     (PCR_PWR_RST_STS_ACTIVE_32K_Msk & (_UINT32_(value) << PCR_PWR_RST_STS_ACTIVE_32K_Pos)) /* Assigment of value for ACTIVE_32K in the PCR_PWR_RST_STS register */
#define PCR_PWR_RST_STS_PCICLK_ACTIVE_Pos     _UINT32_(11)                                         /* (PCR_PWR_RST_STS) PCICLK_ACTIVE (PCICLK_ACTIVE) Position */
#define PCR_PWR_RST_STS_PCICLK_ACTIVE_Msk     (_UINT32_(0x1) << PCR_PWR_RST_STS_PCICLK_ACTIVE_Pos) /* (PCR_PWR_RST_STS) PCICLK_ACTIVE (PCICLK_ACTIVE) Mask */
#define PCR_PWR_RST_STS_PCICLK_ACTIVE(value)  (PCR_PWR_RST_STS_PCICLK_ACTIVE_Msk & (_UINT32_(value) << PCR_PWR_RST_STS_PCICLK_ACTIVE_Pos)) /* Assigment of value for PCICLK_ACTIVE in the PCR_PWR_RST_STS register */
#define PCR_PWR_RST_STS_Msk                   _UINT32_(0x00000DFC)                                 /* (PCR_PWR_RST_STS) Register Mask  */


/* -------- PCR_SYS_RST : (PCR Offset: 0x18) (R/W 32) System Reset Register -------- */
#define PCR_SYS_RST_RESETVALUE                _UINT32_(0x00)                                       /*  (PCR_SYS_RST) System Reset Register  Reset Value */

#define PCR_SYS_RST_SOFT_SYS_RST_Pos          _UINT32_(8)                                          /* (PCR_SYS_RST) A write of a 1 forces an assertion of the RESET_SYS reset signal, resetting the device. A write of 0 has no effect. Position */
#define PCR_SYS_RST_SOFT_SYS_RST_Msk          (_UINT32_(0x1) << PCR_SYS_RST_SOFT_SYS_RST_Pos)      /* (PCR_SYS_RST) A write of a 1 forces an assertion of the RESET_SYS reset signal, resetting the device. A write of 0 has no effect. Mask */
#define PCR_SYS_RST_SOFT_SYS_RST(value)       (PCR_SYS_RST_SOFT_SYS_RST_Msk & (_UINT32_(value) << PCR_SYS_RST_SOFT_SYS_RST_Pos)) /* Assigment of value for SOFT_SYS_RST in the PCR_SYS_RST register */
#define PCR_SYS_RST_Msk                       _UINT32_(0x00000100)                                 /* (PCR_SYS_RST) Register Mask  */


/* -------- PCR_PRIV_EN_LOCK : (PCR Offset: 0x24) (R/W 32) Peripheral Privilege Register -------- */
#define PCR_PRIV_EN_LOCK_RESETVALUE           _UINT32_(0x00)                                       /*  (PCR_PRIV_EN_LOCK) Peripheral Privilege Register  Reset Value */

#define PCR_PRIV_EN_LOCK_LOCK_EN_Pos          _UINT32_(0)                                          /* (PCR_PRIV_EN_LOCK) Peripheral Privilege Lock Register. 1=Locked, 0=Unlocked. Locks Itself and CHIP_PRIV_EN, EC_PRIV_EN,           EC_PRIV_EN2, EC_PRIV_EN3, HOST_PRIV_EN registers Position */
#define PCR_PRIV_EN_LOCK_LOCK_EN_Msk          (_UINT32_(0x1) << PCR_PRIV_EN_LOCK_LOCK_EN_Pos)      /* (PCR_PRIV_EN_LOCK) Peripheral Privilege Lock Register. 1=Locked, 0=Unlocked. Locks Itself and CHIP_PRIV_EN, EC_PRIV_EN,           EC_PRIV_EN2, EC_PRIV_EN3, HOST_PRIV_EN registers Mask */
#define PCR_PRIV_EN_LOCK_LOCK_EN(value)       (PCR_PRIV_EN_LOCK_LOCK_EN_Msk & (_UINT32_(value) << PCR_PRIV_EN_LOCK_LOCK_EN_Pos)) /* Assigment of value for LOCK_EN in the PCR_PRIV_EN_LOCK register */
#define PCR_PRIV_EN_LOCK_Msk                  _UINT32_(0x00000001)                                 /* (PCR_PRIV_EN_LOCK) Register Mask  */


/* -------- PCR_SLP_EN_0 : (PCR Offset: 0x30) (R/W 32) Sleep Enable 0 Register -------- */
#define PCR_SLP_EN_0_RESETVALUE               _UINT32_(0x00)                                       /*  (PCR_SLP_EN_0) Sleep Enable 0 Register  Reset Value */

#define PCR_SLP_EN_0_STAP_SLP_EN_Pos          _UINT32_(0)                                          /* (PCR_SLP_EN_0) STAP Sleep Enable Position */
#define PCR_SLP_EN_0_STAP_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_0_STAP_SLP_EN_Pos)      /* (PCR_SLP_EN_0) STAP Sleep Enable Mask */
#define PCR_SLP_EN_0_STAP_SLP_EN(value)       (PCR_SLP_EN_0_STAP_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_0_STAP_SLP_EN_Pos)) /* Assigment of value for STAP_SLP_EN in the PCR_SLP_EN_0 register */
#define PCR_SLP_EN_0_OTP_SLP_EN_Pos           _UINT32_(1)                                          /* (PCR_SLP_EN_0) OTP Sleep Enable Position */
#define PCR_SLP_EN_0_OTP_SLP_EN_Msk           (_UINT32_(0x1) << PCR_SLP_EN_0_OTP_SLP_EN_Pos)       /* (PCR_SLP_EN_0) OTP Sleep Enable Mask */
#define PCR_SLP_EN_0_OTP_SLP_EN(value)        (PCR_SLP_EN_0_OTP_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_0_OTP_SLP_EN_Pos)) /* Assigment of value for OTP_SLP_EN in the PCR_SLP_EN_0 register */
#define PCR_SLP_EN_0_IMSPI_SLP_EN_Pos         _UINT32_(2)                                          /* (PCR_SLP_EN_0) IMSPI Sleep Enable Position */
#define PCR_SLP_EN_0_IMSPI_SLP_EN_Msk         (_UINT32_(0x1) << PCR_SLP_EN_0_IMSPI_SLP_EN_Pos)     /* (PCR_SLP_EN_0) IMSPI Sleep Enable Mask */
#define PCR_SLP_EN_0_IMSPI_SLP_EN(value)      (PCR_SLP_EN_0_IMSPI_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_0_IMSPI_SLP_EN_Pos)) /* Assigment of value for IMSPI_SLP_EN in the PCR_SLP_EN_0 register */
#define PCR_SLP_EN_0_CHPTST_SLP_EN_Pos        _UINT32_(3)                                          /* (PCR_SLP_EN_0) Chip Test Sleep Enable Position */
#define PCR_SLP_EN_0_CHPTST_SLP_EN_Msk        (_UINT32_(0x1) << PCR_SLP_EN_0_CHPTST_SLP_EN_Pos)    /* (PCR_SLP_EN_0) Chip Test Sleep Enable Mask */
#define PCR_SLP_EN_0_CHPTST_SLP_EN(value)     (PCR_SLP_EN_0_CHPTST_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_0_CHPTST_SLP_EN_Pos)) /* Assigment of value for CHPTST_SLP_EN in the PCR_SLP_EN_0 register */
#define PCR_SLP_EN_0_HRBNK_SLP_EN_Pos         _UINT32_(4)                                          /* (PCR_SLP_EN_0) Host Register Bank Sleep Enable Position */
#define PCR_SLP_EN_0_HRBNK_SLP_EN_Msk         (_UINT32_(0x1) << PCR_SLP_EN_0_HRBNK_SLP_EN_Pos)     /* (PCR_SLP_EN_0) Host Register Bank Sleep Enable Mask */
#define PCR_SLP_EN_0_HRBNK_SLP_EN(value)      (PCR_SLP_EN_0_HRBNK_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_0_HRBNK_SLP_EN_Pos)) /* Assigment of value for HRBNK_SLP_EN in the PCR_SLP_EN_0 register */
#define PCR_SLP_EN_0_TSTSPI_SLP_EN_Pos        _UINT32_(5)                                          /* (PCR_SLP_EN_0) Test SPI Sleep Enable Position */
#define PCR_SLP_EN_0_TSTSPI_SLP_EN_Msk        (_UINT32_(0x1) << PCR_SLP_EN_0_TSTSPI_SLP_EN_Pos)    /* (PCR_SLP_EN_0) Test SPI Sleep Enable Mask */
#define PCR_SLP_EN_0_TSTSPI_SLP_EN(value)     (PCR_SLP_EN_0_TSTSPI_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_0_TSTSPI_SLP_EN_Pos)) /* Assigment of value for TSTSPI_SLP_EN in the PCR_SLP_EN_0 register */
#define PCR_SLP_EN_0_GPIO_SLP_EN_Pos          _UINT32_(6)                                          /* (PCR_SLP_EN_0) GPIO Sleep Enable Position */
#define PCR_SLP_EN_0_GPIO_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_0_GPIO_SLP_EN_Pos)      /* (PCR_SLP_EN_0) GPIO Sleep Enable Mask */
#define PCR_SLP_EN_0_GPIO_SLP_EN(value)       (PCR_SLP_EN_0_GPIO_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_0_GPIO_SLP_EN_Pos)) /* Assigment of value for GPIO_SLP_EN in the PCR_SLP_EN_0 register */
#define PCR_SLP_EN_0_PCR_SLP_EN_Pos           _UINT32_(7)                                          /* (PCR_SLP_EN_0) PCR Sleep Enable Position */
#define PCR_SLP_EN_0_PCR_SLP_EN_Msk           (_UINT32_(0x1) << PCR_SLP_EN_0_PCR_SLP_EN_Pos)       /* (PCR_SLP_EN_0) PCR Sleep Enable Mask */
#define PCR_SLP_EN_0_PCR_SLP_EN(value)        (PCR_SLP_EN_0_PCR_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_0_PCR_SLP_EN_Pos)) /* Assigment of value for PCR_SLP_EN in the PCR_SLP_EN_0 register */
#define PCR_SLP_EN_0_Msk                      _UINT32_(0x000000FF)                                 /* (PCR_SLP_EN_0) Register Mask  */


/* -------- PCR_SLP_EN_1 : (PCR Offset: 0x34) (R/W 32) Sleep Enable 1 Register -------- */
#define PCR_SLP_EN_1_RESETVALUE               _UINT32_(0x00)                                       /*  (PCR_SLP_EN_1) Sleep Enable 1 Register  Reset Value */

#define PCR_SLP_EN_1_INT_SLP_EN_Pos           _UINT32_(0)                                          /* (PCR_SLP_EN_1) Interrupt Sleep Enable Position */
#define PCR_SLP_EN_1_INT_SLP_EN_Msk           (_UINT32_(0x1) << PCR_SLP_EN_1_INT_SLP_EN_Pos)       /* (PCR_SLP_EN_1) Interrupt Sleep Enable Mask */
#define PCR_SLP_EN_1_INT_SLP_EN(value)        (PCR_SLP_EN_1_INT_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_INT_SLP_EN_Pos)) /* Assigment of value for INT_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_PWM0_SLP_EN_Pos          _UINT32_(4)                                          /* (PCR_SLP_EN_1) PWM0 Sleep Enable (PWM0_SLP_EN) Position */
#define PCR_SLP_EN_1_PWM0_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_1_PWM0_SLP_EN_Pos)      /* (PCR_SLP_EN_1) PWM0 Sleep Enable (PWM0_SLP_EN) Mask */
#define PCR_SLP_EN_1_PWM0_SLP_EN(value)       (PCR_SLP_EN_1_PWM0_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_PWM0_SLP_EN_Pos)) /* Assigment of value for PWM0_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_PMC_SLP_EN_Pos           _UINT32_(5)                                          /* (PCR_SLP_EN_1) PMC Sleep Enable (PMC_SLP_EN) Position */
#define PCR_SLP_EN_1_PMC_SLP_EN_Msk           (_UINT32_(0x1) << PCR_SLP_EN_1_PMC_SLP_EN_Pos)       /* (PCR_SLP_EN_1) PMC Sleep Enable (PMC_SLP_EN) Mask */
#define PCR_SLP_EN_1_PMC_SLP_EN(value)        (PCR_SLP_EN_1_PMC_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_PMC_SLP_EN_Pos)) /* Assigment of value for PMC_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_DMA_SLP_EN_Pos           _UINT32_(6)                                          /* (PCR_SLP_EN_1) DMA Sleep Enable (DMA_SLP_EN) Position */
#define PCR_SLP_EN_1_DMA_SLP_EN_Msk           (_UINT32_(0x1) << PCR_SLP_EN_1_DMA_SLP_EN_Pos)       /* (PCR_SLP_EN_1) DMA Sleep Enable (DMA_SLP_EN) Mask */
#define PCR_SLP_EN_1_DMA_SLP_EN(value)        (PCR_SLP_EN_1_DMA_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_DMA_SLP_EN_Pos)) /* Assigment of value for DMA_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_TFDP_SLP_EN_Pos          _UINT32_(7)                                          /* (PCR_SLP_EN_1) TFDP Sleep Enable (TFDP_SLP_EN) Position */
#define PCR_SLP_EN_1_TFDP_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_1_TFDP_SLP_EN_Pos)      /* (PCR_SLP_EN_1) TFDP Sleep Enable (TFDP_SLP_EN) Mask */
#define PCR_SLP_EN_1_TFDP_SLP_EN(value)       (PCR_SLP_EN_1_TFDP_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_TFDP_SLP_EN_Pos)) /* Assigment of value for TFDP_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_PROC_SLP_EN_Pos          _UINT32_(8)                                          /* (PCR_SLP_EN_1) PROCESSOR Sleep Enable (PROCESSOR_SLP_EN) Position */
#define PCR_SLP_EN_1_PROC_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_1_PROC_SLP_EN_Pos)      /* (PCR_SLP_EN_1) PROCESSOR Sleep Enable (PROCESSOR_SLP_EN) Mask */
#define PCR_SLP_EN_1_PROC_SLP_EN(value)       (PCR_SLP_EN_1_PROC_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_PROC_SLP_EN_Pos)) /* Assigment of value for PROC_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_WDT_SLP_EN_Pos           _UINT32_(9)                                          /* (PCR_SLP_EN_1) Watch Dog Sleep Enable (WDT_SLP_EN) Position */
#define PCR_SLP_EN_1_WDT_SLP_EN_Msk           (_UINT32_(0x1) << PCR_SLP_EN_1_WDT_SLP_EN_Pos)       /* (PCR_SLP_EN_1) Watch Dog Sleep Enable (WDT_SLP_EN) Mask */
#define PCR_SLP_EN_1_WDT_SLP_EN(value)        (PCR_SLP_EN_1_WDT_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_WDT_SLP_EN_Pos)) /* Assigment of value for WDT_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_SMB0_SLP_EN_Pos          _UINT32_(10)                                         /* (PCR_SLP_EN_1) SMB0 Sleep Enable (SMB0_SLP_EN) Position */
#define PCR_SLP_EN_1_SMB0_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_1_SMB0_SLP_EN_Pos)      /* (PCR_SLP_EN_1) SMB0 Sleep Enable (SMB0_SLP_EN) Mask */
#define PCR_SLP_EN_1_SMB0_SLP_EN(value)       (PCR_SLP_EN_1_SMB0_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_SMB0_SLP_EN_Pos)) /* Assigment of value for SMB0_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_EC_REG_BANK_SLP_EN_Pos   _UINT32_(29)                                         /* (PCR_SLP_EN_1) EC Register Bank Sleep Enable (EC_REG_BANK_SLP_EN) Position */
#define PCR_SLP_EN_1_EC_REG_BANK_SLP_EN_Msk   (_UINT32_(0x1) << PCR_SLP_EN_1_EC_REG_BANK_SLP_EN_Pos) /* (PCR_SLP_EN_1) EC Register Bank Sleep Enable (EC_REG_BANK_SLP_EN) Mask */
#define PCR_SLP_EN_1_EC_REG_BANK_SLP_EN(value) (PCR_SLP_EN_1_EC_REG_BANK_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_EC_REG_BANK_SLP_EN_Pos)) /* Assigment of value for EC_REG_BANK_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_TMR32_0_SLP_EN_Pos       _UINT32_(30)                                         /* (PCR_SLP_EN_1) TIMER32_0 Sleep Enable (TIMER32_0_SLP_EN) Position */
#define PCR_SLP_EN_1_TMR32_0_SLP_EN_Msk       (_UINT32_(0x1) << PCR_SLP_EN_1_TMR32_0_SLP_EN_Pos)   /* (PCR_SLP_EN_1) TIMER32_0 Sleep Enable (TIMER32_0_SLP_EN) Mask */
#define PCR_SLP_EN_1_TMR32_0_SLP_EN(value)    (PCR_SLP_EN_1_TMR32_0_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_TMR32_0_SLP_EN_Pos)) /* Assigment of value for TMR32_0_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_TMR32_1_SLP_EN_Pos       _UINT32_(31)                                         /* (PCR_SLP_EN_1) TIMER32_1 Sleep Enable (TIMER32_1_SLP_EN) Position */
#define PCR_SLP_EN_1_TMR32_1_SLP_EN_Msk       (_UINT32_(0x1) << PCR_SLP_EN_1_TMR32_1_SLP_EN_Pos)   /* (PCR_SLP_EN_1) TIMER32_1 Sleep Enable (TIMER32_1_SLP_EN) Mask */
#define PCR_SLP_EN_1_TMR32_1_SLP_EN(value)    (PCR_SLP_EN_1_TMR32_1_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_1_TMR32_1_SLP_EN_Pos)) /* Assigment of value for TMR32_1_SLP_EN in the PCR_SLP_EN_1 register */
#define PCR_SLP_EN_1_Msk                      _UINT32_(0xE00007F1)                                 /* (PCR_SLP_EN_1) Register Mask  */


/* -------- PCR_SLP_EN_3 : (PCR Offset: 0x3C) (R/W 32) Sleep Enable 3 Register -------- */
#define PCR_SLP_EN_3_RESETVALUE               _UINT32_(0x00)                                       /*  (PCR_SLP_EN_3) Sleep Enable 3 Register  Reset Value */

#define PCR_SLP_EN_3_HTM_0_SLP_EN_Pos         _UINT32_(10)                                         /* (PCR_SLP_EN_3) Hibernation Timer 0 Sleep Enable (HTM_0_SLP_EN) Position */
#define PCR_SLP_EN_3_HTM_0_SLP_EN_Msk         (_UINT32_(0x1) << PCR_SLP_EN_3_HTM_0_SLP_EN_Pos)     /* (PCR_SLP_EN_3) Hibernation Timer 0 Sleep Enable (HTM_0_SLP_EN) Mask */
#define PCR_SLP_EN_3_HTM_0_SLP_EN(value)      (PCR_SLP_EN_3_HTM_0_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_HTM_0_SLP_EN_Pos)) /* Assigment of value for HTM_0_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_SMB1_SLP_EN_Pos          _UINT32_(13)                                         /* (PCR_SLP_EN_3) SMB1 Sleep Enable (SMB1_SLP_EN) Position */
#define PCR_SLP_EN_3_SMB1_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_3_SMB1_SLP_EN_Pos)      /* (PCR_SLP_EN_3) SMB1 Sleep Enable (SMB1_SLP_EN) Mask */
#define PCR_SLP_EN_3_SMB1_SLP_EN(value)       (PCR_SLP_EN_3_SMB1_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_SMB1_SLP_EN_Pos)) /* Assigment of value for SMB1_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_SMB2_SLP_EN_Pos          _UINT32_(14)                                         /* (PCR_SLP_EN_3) SMB2 Sleep Enable (SMB2_SLP_EN) Position */
#define PCR_SLP_EN_3_SMB2_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_3_SMB2_SLP_EN_Pos)      /* (PCR_SLP_EN_3) SMB2 Sleep Enable (SMB2_SLP_EN) Mask */
#define PCR_SLP_EN_3_SMB2_SLP_EN(value)       (PCR_SLP_EN_3_SMB2_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_SMB2_SLP_EN_Pos)) /* Assigment of value for SMB2_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_SMB3_SLP_EN_Pos          _UINT32_(15)                                         /* (PCR_SLP_EN_3) SMB3 Sleep Enable (SMB3_SLP_EN) Position */
#define PCR_SLP_EN_3_SMB3_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_3_SMB3_SLP_EN_Pos)      /* (PCR_SLP_EN_3) SMB3 Sleep Enable (SMB3_SLP_EN) Mask */
#define PCR_SLP_EN_3_SMB3_SLP_EN(value)       (PCR_SLP_EN_3_SMB3_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_SMB3_SLP_EN_Pos)) /* Assigment of value for SMB3_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_LED0_SLP_EN_Pos          _UINT32_(16)                                         /* (PCR_SLP_EN_3) LED0 Sleep Enable (LED0_SLP_EN) Position */
#define PCR_SLP_EN_3_LED0_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_3_LED0_SLP_EN_Pos)      /* (PCR_SLP_EN_3) LED0 Sleep Enable (LED0_SLP_EN) Mask */
#define PCR_SLP_EN_3_LED0_SLP_EN(value)       (PCR_SLP_EN_3_LED0_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_LED0_SLP_EN_Pos)) /* Assigment of value for LED0_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_LED1_SLP_EN_Pos          _UINT32_(17)                                         /* (PCR_SLP_EN_3) LED1 Sleep Enable (LED1_SLP_EN) Position */
#define PCR_SLP_EN_3_LED1_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_3_LED1_SLP_EN_Pos)      /* (PCR_SLP_EN_3) LED1 Sleep Enable (LED1_SLP_EN) Mask */
#define PCR_SLP_EN_3_LED1_SLP_EN(value)       (PCR_SLP_EN_3_LED1_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_LED1_SLP_EN_Pos)) /* Assigment of value for LED1_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_SMB4_SLP_EN_Pos          _UINT32_(20)                                         /* (PCR_SLP_EN_3) SMB4 Sleep Enable (SMB4_SLP_EN) Position */
#define PCR_SLP_EN_3_SMB4_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_3_SMB4_SLP_EN_Pos)      /* (PCR_SLP_EN_3) SMB4 Sleep Enable (SMB4_SLP_EN) Mask */
#define PCR_SLP_EN_3_SMB4_SLP_EN(value)       (PCR_SLP_EN_3_SMB4_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_SMB4_SLP_EN_Pos)) /* Assigment of value for SMB4_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_CRYPTO_SLP_EN_Pos        _UINT32_(26)                                         /* (PCR_SLP_EN_3) CRYPTO Sleep Enable Position */
#define PCR_SLP_EN_3_CRYPTO_SLP_EN_Msk        (_UINT32_(0x1) << PCR_SLP_EN_3_CRYPTO_SLP_EN_Pos)    /* (PCR_SLP_EN_3) CRYPTO Sleep Enable Mask */
#define PCR_SLP_EN_3_CRYPTO_SLP_EN(value)     (PCR_SLP_EN_3_CRYPTO_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_CRYPTO_SLP_EN_Pos)) /* Assigment of value for CRYPTO_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_HTM_1_SLP_EN_Pos         _UINT32_(29)                                         /* (PCR_SLP_EN_3) Hibernation TIMER 1 Sleep Enable (HTM_1_SLP_EN) Position */
#define PCR_SLP_EN_3_HTM_1_SLP_EN_Msk         (_UINT32_(0x1) << PCR_SLP_EN_3_HTM_1_SLP_EN_Pos)     /* (PCR_SLP_EN_3) Hibernation TIMER 1 Sleep Enable (HTM_1_SLP_EN) Mask */
#define PCR_SLP_EN_3_HTM_1_SLP_EN(value)      (PCR_SLP_EN_3_HTM_1_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_HTM_1_SLP_EN_Pos)) /* Assigment of value for HTM_1_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_CCT_SLP_EN_Pos           _UINT32_(30)                                         /* (PCR_SLP_EN_3) Capture Compare Timer Sleep Enable (CCTIMER_SLP_EN) Position */
#define PCR_SLP_EN_3_CCT_SLP_EN_Msk           (_UINT32_(0x1) << PCR_SLP_EN_3_CCT_SLP_EN_Pos)       /* (PCR_SLP_EN_3) Capture Compare Timer Sleep Enable (CCTIMER_SLP_EN) Mask */
#define PCR_SLP_EN_3_CCT_SLP_EN(value)        (PCR_SLP_EN_3_CCT_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_3_CCT_SLP_EN_Pos)) /* Assigment of value for CCT_SLP_EN in the PCR_SLP_EN_3 register */
#define PCR_SLP_EN_3_Msk                      _UINT32_(0x6413E400)                                 /* (PCR_SLP_EN_3) Register Mask  */


/* -------- PCR_SLP_EN_4 : (PCR Offset: 0x40) (R/W 32) Sleep Enable 4 Register -------- */
#define PCR_SLP_EN_4_RESETVALUE               _UINT32_(0x00)                                       /*  (PCR_SLP_EN_4) Sleep Enable 4 Register  Reset Value */

#define PCR_SLP_EN_4_SECMON0_SLP_EN_Pos       _UINT32_(0)                                          /* (PCR_SLP_EN_4) SPI Monitor 0 Sleep Enable (SECMON0_SLP_EN) Position */
#define PCR_SLP_EN_4_SECMON0_SLP_EN_Msk       (_UINT32_(0x1) << PCR_SLP_EN_4_SECMON0_SLP_EN_Pos)   /* (PCR_SLP_EN_4) SPI Monitor 0 Sleep Enable (SECMON0_SLP_EN) Mask */
#define PCR_SLP_EN_4_SECMON0_SLP_EN(value)    (PCR_SLP_EN_4_SECMON0_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_4_SECMON0_SLP_EN_Pos)) /* Assigment of value for SECMON0_SLP_EN in the PCR_SLP_EN_4 register */
#define PCR_SLP_EN_4_SECMON1_SLP_EN_Pos       _UINT32_(1)                                          /* (PCR_SLP_EN_4) SPI Monitor 1 Sleep Enable (SECMON1_SLP_EN) Position */
#define PCR_SLP_EN_4_SECMON1_SLP_EN_Msk       (_UINT32_(0x1) << PCR_SLP_EN_4_SECMON1_SLP_EN_Pos)   /* (PCR_SLP_EN_4) SPI Monitor 1 Sleep Enable (SECMON1_SLP_EN) Mask */
#define PCR_SLP_EN_4_SECMON1_SLP_EN(value)    (PCR_SLP_EN_4_SECMON1_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_4_SECMON1_SLP_EN_Pos)) /* Assigment of value for SECMON1_SLP_EN in the PCR_SLP_EN_4 register */
#define PCR_SLP_EN_4_RTOS_SLP_EN_Pos          _UINT32_(6)                                          /* (PCR_SLP_EN_4) RTOS Sleep Enable (RTOS_SLP_EN) Position */
#define PCR_SLP_EN_4_RTOS_SLP_EN_Msk          (_UINT32_(0x1) << PCR_SLP_EN_4_RTOS_SLP_EN_Pos)      /* (PCR_SLP_EN_4) RTOS Sleep Enable (RTOS_SLP_EN) Mask */
#define PCR_SLP_EN_4_RTOS_SLP_EN(value)       (PCR_SLP_EN_4_RTOS_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_4_RTOS_SLP_EN_Pos)) /* Assigment of value for RTOS_SLP_EN in the PCR_SLP_EN_4 register */
#define PCR_SLP_EN_4_QMSPI0_SLP_EN_Pos        _UINT32_(8)                                          /* (PCR_SLP_EN_4) Quad Master SPI 0 Sleep Enable (QMSPI_1_SLP_EN) Position */
#define PCR_SLP_EN_4_QMSPI0_SLP_EN_Msk        (_UINT32_(0x1) << PCR_SLP_EN_4_QMSPI0_SLP_EN_Pos)    /* (PCR_SLP_EN_4) Quad Master SPI 0 Sleep Enable (QMSPI_1_SLP_EN) Mask */
#define PCR_SLP_EN_4_QMSPI0_SLP_EN(value)     (PCR_SLP_EN_4_QMSPI0_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_4_QMSPI0_SLP_EN_Pos)) /* Assigment of value for QMSPI0_SLP_EN in the PCR_SLP_EN_4 register */
#define PCR_SLP_EN_4_UART0_SLP_EN_Pos         _UINT32_(9)                                          /* (PCR_SLP_EN_4) UART0 Sleep Enable (UART_1_SLP_EN) Position */
#define PCR_SLP_EN_4_UART0_SLP_EN_Msk         (_UINT32_(0x1) << PCR_SLP_EN_4_UART0_SLP_EN_Pos)     /* (PCR_SLP_EN_4) UART0 Sleep Enable (UART_1_SLP_EN) Mask */
#define PCR_SLP_EN_4_UART0_SLP_EN(value)      (PCR_SLP_EN_4_UART0_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_4_UART0_SLP_EN_Pos)) /* Assigment of value for UART0_SLP_EN in the PCR_SLP_EN_4 register */
#define PCR_SLP_EN_4_SPIPER0_SLP_EN_Pos       _UINT32_(16)                                         /* (PCR_SLP_EN_4) SPI Peropheral 0 Sleep Enable (SPIPER0_SLP_EN) Position */
#define PCR_SLP_EN_4_SPIPER0_SLP_EN_Msk       (_UINT32_(0x1) << PCR_SLP_EN_4_SPIPER0_SLP_EN_Pos)   /* (PCR_SLP_EN_4) SPI Peropheral 0 Sleep Enable (SPIPER0_SLP_EN) Mask */
#define PCR_SLP_EN_4_SPIPER0_SLP_EN(value)    (PCR_SLP_EN_4_SPIPER0_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_4_SPIPER0_SLP_EN_Pos)) /* Assigment of value for SPIPER0_SLP_EN in the PCR_SLP_EN_4 register */
#define PCR_SLP_EN_4_SPIPER1_SLP_EN_Pos       _UINT32_(21)                                         /* (PCR_SLP_EN_4) SPI Peropheral 1 Sleep Enable (SPIPER1_SLP_EN) Position */
#define PCR_SLP_EN_4_SPIPER1_SLP_EN_Msk       (_UINT32_(0x1) << PCR_SLP_EN_4_SPIPER1_SLP_EN_Pos)   /* (PCR_SLP_EN_4) SPI Peropheral 1 Sleep Enable (SPIPER1_SLP_EN) Mask */
#define PCR_SLP_EN_4_SPIPER1_SLP_EN(value)    (PCR_SLP_EN_4_SPIPER1_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_4_SPIPER1_SLP_EN_Pos)) /* Assigment of value for SPIPER1_SLP_EN in the PCR_SLP_EN_4 register */
#define PCR_SLP_EN_4_QMSPI_1_SLP_EN_Pos       _UINT32_(22)                                         /* (PCR_SLP_EN_4) QMSPI 1 Sleep Enable (QMSPI_1_SLP_EN) Position */
#define PCR_SLP_EN_4_QMSPI_1_SLP_EN_Msk       (_UINT32_(0x1) << PCR_SLP_EN_4_QMSPI_1_SLP_EN_Pos)   /* (PCR_SLP_EN_4) QMSPI 1 Sleep Enable (QMSPI_1_SLP_EN) Mask */
#define PCR_SLP_EN_4_QMSPI_1_SLP_EN(value)    (PCR_SLP_EN_4_QMSPI_1_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_4_QMSPI_1_SLP_EN_Pos)) /* Assigment of value for QMSPI_1_SLP_EN in the PCR_SLP_EN_4 register */
#define PCR_SLP_EN_4_VBAT_REG_SLP_EN_Pos      _UINT32_(23)                                         /* (PCR_SLP_EN_4) VBAT REG Sleep Enable (VBAT_REG_SLP_EN) Position */
#define PCR_SLP_EN_4_VBAT_REG_SLP_EN_Msk      (_UINT32_(0x1) << PCR_SLP_EN_4_VBAT_REG_SLP_EN_Pos)  /* (PCR_SLP_EN_4) VBAT REG Sleep Enable (VBAT_REG_SLP_EN) Mask */
#define PCR_SLP_EN_4_VBAT_REG_SLP_EN(value)   (PCR_SLP_EN_4_VBAT_REG_SLP_EN_Msk & (_UINT32_(value) << PCR_SLP_EN_4_VBAT_REG_SLP_EN_Pos)) /* Assigment of value for VBAT_REG_SLP_EN in the PCR_SLP_EN_4 register */
#define PCR_SLP_EN_4_Msk                      _UINT32_(0x00E10343)                                 /* (PCR_SLP_EN_4) Register Mask  */


/* -------- PCR_RST_EN_0 : (PCR Offset: 0x70) (R/W 32) Reset Enable 0 Register -------- */
#define PCR_RST_EN_0_RESETVALUE               _UINT32_(0x00)                                       /*  (PCR_RST_EN_0) Reset Enable 0 Register  Reset Value */

#define PCR_RST_EN_0_JTAG_STAP_CLK_REQ_Pos    _UINT32_(0)                                          /* (PCR_RST_EN_0) JTAG STAP Enable Position */
#define PCR_RST_EN_0_JTAG_STAP_CLK_REQ_Msk    (_UINT32_(0x1) << PCR_RST_EN_0_JTAG_STAP_CLK_REQ_Pos) /* (PCR_RST_EN_0) JTAG STAP Enable Mask */
#define PCR_RST_EN_0_JTAG_STAP_CLK_REQ(value) (PCR_RST_EN_0_JTAG_STAP_CLK_REQ_Msk & (_UINT32_(value) << PCR_RST_EN_0_JTAG_STAP_CLK_REQ_Pos)) /* Assigment of value for JTAG_STAP_CLK_REQ in the PCR_RST_EN_0 register */
#define PCR_RST_EN_0_OTP_RST_EN_Pos           _UINT32_(1)                                          /* (PCR_RST_EN_0) OTP Reset Enable Position */
#define PCR_RST_EN_0_OTP_RST_EN_Msk           (_UINT32_(0x1) << PCR_RST_EN_0_OTP_RST_EN_Pos)       /* (PCR_RST_EN_0) OTP Reset Enable Mask */
#define PCR_RST_EN_0_OTP_RST_EN(value)        (PCR_RST_EN_0_OTP_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_0_OTP_RST_EN_Pos)) /* Assigment of value for OTP_RST_EN in the PCR_RST_EN_0 register */
#define PCR_RST_EN_0_CHPTST_RST_EN_Pos        _UINT32_(3)                                          /* (PCR_RST_EN_0) Chip Test Reset Enable Position */
#define PCR_RST_EN_0_CHPTST_RST_EN_Msk        (_UINT32_(0x1) << PCR_RST_EN_0_CHPTST_RST_EN_Pos)    /* (PCR_RST_EN_0) Chip Test Reset Enable Mask */
#define PCR_RST_EN_0_CHPTST_RST_EN(value)     (PCR_RST_EN_0_CHPTST_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_0_CHPTST_RST_EN_Pos)) /* Assigment of value for CHPTST_RST_EN in the PCR_RST_EN_0 register */
#define PCR_RST_EN_0_TSTSPI_RST_EN_Pos        _UINT32_(5)                                          /* (PCR_RST_EN_0) Test SPI Reset Enable Position */
#define PCR_RST_EN_0_TSTSPI_RST_EN_Msk        (_UINT32_(0x1) << PCR_RST_EN_0_TSTSPI_RST_EN_Pos)    /* (PCR_RST_EN_0) Test SPI Reset Enable Mask */
#define PCR_RST_EN_0_TSTSPI_RST_EN(value)     (PCR_RST_EN_0_TSTSPI_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_0_TSTSPI_RST_EN_Pos)) /* Assigment of value for TSTSPI_RST_EN in the PCR_RST_EN_0 register */
#define PCR_RST_EN_0_GPIO_RST_EN_Pos          _UINT32_(6)                                          /* (PCR_RST_EN_0) GPIO Reset Enable Position */
#define PCR_RST_EN_0_GPIO_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_0_GPIO_RST_EN_Pos)      /* (PCR_RST_EN_0) GPIO Reset Enable Mask */
#define PCR_RST_EN_0_GPIO_RST_EN(value)       (PCR_RST_EN_0_GPIO_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_0_GPIO_RST_EN_Pos)) /* Assigment of value for GPIO_RST_EN in the PCR_RST_EN_0 register */
#define PCR_RST_EN_0_PCR_RST_EN_Pos           _UINT32_(7)                                          /* (PCR_RST_EN_0) PCR Reset Enable Position */
#define PCR_RST_EN_0_PCR_RST_EN_Msk           (_UINT32_(0x1) << PCR_RST_EN_0_PCR_RST_EN_Pos)       /* (PCR_RST_EN_0) PCR Reset Enable Mask */
#define PCR_RST_EN_0_PCR_RST_EN(value)        (PCR_RST_EN_0_PCR_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_0_PCR_RST_EN_Pos)) /* Assigment of value for PCR_RST_EN in the PCR_RST_EN_0 register */
#define PCR_RST_EN_0_Msk                      _UINT32_(0x000000EB)                                 /* (PCR_RST_EN_0) Register Mask  */


/* -------- PCR_RST_EN_1 : (PCR Offset: 0x74) (R/W 32) Reset Enable 1 Register -------- */
#define PCR_RST_EN_1_RESETVALUE               _UINT32_(0x00)                                       /*  (PCR_RST_EN_1) Reset Enable 1 Register  Reset Value */

#define PCR_RST_EN_1_INT_RST_EN_Pos           _UINT32_(0)                                          /* (PCR_RST_EN_1) Interrupt Reset Enable Position */
#define PCR_RST_EN_1_INT_RST_EN_Msk           (_UINT32_(0x1) << PCR_RST_EN_1_INT_RST_EN_Pos)       /* (PCR_RST_EN_1) Interrupt Reset Enable Mask */
#define PCR_RST_EN_1_INT_RST_EN(value)        (PCR_RST_EN_1_INT_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_INT_RST_EN_Pos)) /* Assigment of value for INT_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_PWM0_RST_EN_Pos          _UINT32_(4)                                          /* (PCR_RST_EN_1) PWM0 Reset Enable (PWM0_RST_EN) Position */
#define PCR_RST_EN_1_PWM0_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_1_PWM0_RST_EN_Pos)      /* (PCR_RST_EN_1) PWM0 Reset Enable (PWM0_RST_EN) Mask */
#define PCR_RST_EN_1_PWM0_RST_EN(value)       (PCR_RST_EN_1_PWM0_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_PWM0_RST_EN_Pos)) /* Assigment of value for PWM0_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_DMA_RST_EN_Pos           _UINT32_(6)                                          /* (PCR_RST_EN_1) DMA Reset Enable (DMA_RST_EN) Position */
#define PCR_RST_EN_1_DMA_RST_EN_Msk           (_UINT32_(0x1) << PCR_RST_EN_1_DMA_RST_EN_Pos)       /* (PCR_RST_EN_1) DMA Reset Enable (DMA_RST_EN) Mask */
#define PCR_RST_EN_1_DMA_RST_EN(value)        (PCR_RST_EN_1_DMA_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_DMA_RST_EN_Pos)) /* Assigment of value for DMA_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_TFDP_RST_EN_Pos          _UINT32_(7)                                          /* (PCR_RST_EN_1) TFDP Reset Enable (TFDP_RST_EN) Position */
#define PCR_RST_EN_1_TFDP_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_1_TFDP_RST_EN_Pos)      /* (PCR_RST_EN_1) TFDP Reset Enable (TFDP_RST_EN) Mask */
#define PCR_RST_EN_1_TFDP_RST_EN(value)       (PCR_RST_EN_1_TFDP_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_TFDP_RST_EN_Pos)) /* Assigment of value for TFDP_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_WDT_RST_EN_Pos           _UINT32_(9)                                          /* (PCR_RST_EN_1) WDT Reset Enable (WDT_RST_EN) Position */
#define PCR_RST_EN_1_WDT_RST_EN_Msk           (_UINT32_(0x1) << PCR_RST_EN_1_WDT_RST_EN_Pos)       /* (PCR_RST_EN_1) WDT Reset Enable (WDT_RST_EN) Mask */
#define PCR_RST_EN_1_WDT_RST_EN(value)        (PCR_RST_EN_1_WDT_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_WDT_RST_EN_Pos)) /* Assigment of value for WDT_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_SMB0_RST_EN_Pos          _UINT32_(10)                                         /* (PCR_RST_EN_1) SMB0 Reset Enable (SMB0_RST_EN) Position */
#define PCR_RST_EN_1_SMB0_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_1_SMB0_RST_EN_Pos)      /* (PCR_RST_EN_1) SMB0 Reset Enable (SMB0_RST_EN) Mask */
#define PCR_RST_EN_1_SMB0_RST_EN(value)       (PCR_RST_EN_1_SMB0_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_SMB0_RST_EN_Pos)) /* Assigment of value for SMB0_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_TMR32_0_RST_EN_Pos       _UINT32_(30)                                         /* (PCR_RST_EN_1) TIMER32_0 Reset Enable (TIMER32_0_RST_EN) Position */
#define PCR_RST_EN_1_TMR32_0_RST_EN_Msk       (_UINT32_(0x1) << PCR_RST_EN_1_TMR32_0_RST_EN_Pos)   /* (PCR_RST_EN_1) TIMER32_0 Reset Enable (TIMER32_0_RST_EN) Mask */
#define PCR_RST_EN_1_TMR32_0_RST_EN(value)    (PCR_RST_EN_1_TMR32_0_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_TMR32_0_RST_EN_Pos)) /* Assigment of value for TMR32_0_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_TMR32_1_RST_EN_Pos       _UINT32_(31)                                         /* (PCR_RST_EN_1) TIMER32_1 Reset Enable (TIMER32_1_RST_EN) Position */
#define PCR_RST_EN_1_TMR32_1_RST_EN_Msk       (_UINT32_(0x1) << PCR_RST_EN_1_TMR32_1_RST_EN_Pos)   /* (PCR_RST_EN_1) TIMER32_1 Reset Enable (TIMER32_1_RST_EN) Mask */
#define PCR_RST_EN_1_TMR32_1_RST_EN(value)    (PCR_RST_EN_1_TMR32_1_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_1_TMR32_1_RST_EN_Pos)) /* Assigment of value for TMR32_1_RST_EN in the PCR_RST_EN_1 register */
#define PCR_RST_EN_1_Msk                      _UINT32_(0xC00006D1)                                 /* (PCR_RST_EN_1) Register Mask  */


/* -------- PCR_RST_EN_3 : (PCR Offset: 0x7C) (R/W 32) Reset Enable 3 Register -------- */
#define PCR_RST_EN_3_RESETVALUE               _UINT32_(0x00)                                       /*  (PCR_RST_EN_3) Reset Enable 3 Register  Reset Value */

#define PCR_RST_EN_3_HTM_0_RST_EN_Pos         _UINT32_(10)                                         /* (PCR_RST_EN_3) Hibernation TIMER 0 Reset Enable (HTM_0_RST_EN) Position */
#define PCR_RST_EN_3_HTM_0_RST_EN_Msk         (_UINT32_(0x1) << PCR_RST_EN_3_HTM_0_RST_EN_Pos)     /* (PCR_RST_EN_3) Hibernation TIMER 0 Reset Enable (HTM_0_RST_EN) Mask */
#define PCR_RST_EN_3_HTM_0_RST_EN(value)      (PCR_RST_EN_3_HTM_0_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_HTM_0_RST_EN_Pos)) /* Assigment of value for HTM_0_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_SMB1_RST_EN_Pos          _UINT32_(13)                                         /* (PCR_RST_EN_3) SMB1 Reset Enable (SMB1_RST_EN) Position */
#define PCR_RST_EN_3_SMB1_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_3_SMB1_RST_EN_Pos)      /* (PCR_RST_EN_3) SMB1 Reset Enable (SMB1_RST_EN) Mask */
#define PCR_RST_EN_3_SMB1_RST_EN(value)       (PCR_RST_EN_3_SMB1_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_SMB1_RST_EN_Pos)) /* Assigment of value for SMB1_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_SMB2_RST_EN_Pos          _UINT32_(14)                                         /* (PCR_RST_EN_3) SMB2 Reset Enable (SMB2_RST_EN) Position */
#define PCR_RST_EN_3_SMB2_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_3_SMB2_RST_EN_Pos)      /* (PCR_RST_EN_3) SMB2 Reset Enable (SMB2_RST_EN) Mask */
#define PCR_RST_EN_3_SMB2_RST_EN(value)       (PCR_RST_EN_3_SMB2_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_SMB2_RST_EN_Pos)) /* Assigment of value for SMB2_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_SMB3_RST_EN_Pos          _UINT32_(15)                                         /* (PCR_RST_EN_3) SMB3 Reset Enable (SMB3_RST_EN) Position */
#define PCR_RST_EN_3_SMB3_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_3_SMB3_RST_EN_Pos)      /* (PCR_RST_EN_3) SMB3 Reset Enable (SMB3_RST_EN) Mask */
#define PCR_RST_EN_3_SMB3_RST_EN(value)       (PCR_RST_EN_3_SMB3_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_SMB3_RST_EN_Pos)) /* Assigment of value for SMB3_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_LED0_RST_EN_Pos          _UINT32_(16)                                         /* (PCR_RST_EN_3) LED0 Reset Enable (LED0_RST_EN) Position */
#define PCR_RST_EN_3_LED0_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_3_LED0_RST_EN_Pos)      /* (PCR_RST_EN_3) LED0 Reset Enable (LED0_RST_EN) Mask */
#define PCR_RST_EN_3_LED0_RST_EN(value)       (PCR_RST_EN_3_LED0_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_LED0_RST_EN_Pos)) /* Assigment of value for LED0_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_LED1_RST_EN_Pos          _UINT32_(17)                                         /* (PCR_RST_EN_3) LED1 Reset Enable (LED1_RST_EN) Position */
#define PCR_RST_EN_3_LED1_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_3_LED1_RST_EN_Pos)      /* (PCR_RST_EN_3) LED1 Reset Enable (LED1_RST_EN) Mask */
#define PCR_RST_EN_3_LED1_RST_EN(value)       (PCR_RST_EN_3_LED1_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_LED1_RST_EN_Pos)) /* Assigment of value for LED1_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_SMB_4_RST_EN_Pos         _UINT32_(20)                                         /* (PCR_RST_EN_3) SMB 4 Reset Enable (SMB_4_RST_EN) Position */
#define PCR_RST_EN_3_SMB_4_RST_EN_Msk         (_UINT32_(0x1) << PCR_RST_EN_3_SMB_4_RST_EN_Pos)     /* (PCR_RST_EN_3) SMB 4 Reset Enable (SMB_4_RST_EN) Mask */
#define PCR_RST_EN_3_SMB_4_RST_EN(value)      (PCR_RST_EN_3_SMB_4_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_SMB_4_RST_EN_Pos)) /* Assigment of value for SMB_4_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_CRYPTO_RST_EN_Pos        _UINT32_(26)                                         /* (PCR_RST_EN_3) CRYPTO Reset Enable Position */
#define PCR_RST_EN_3_CRYPTO_RST_EN_Msk        (_UINT32_(0x1) << PCR_RST_EN_3_CRYPTO_RST_EN_Pos)    /* (PCR_RST_EN_3) CRYPTO Reset Enable Mask */
#define PCR_RST_EN_3_CRYPTO_RST_EN(value)     (PCR_RST_EN_3_CRYPTO_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_CRYPTO_RST_EN_Pos)) /* Assigment of value for CRYPTO_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_HTM_1_RST_EN_Pos         _UINT32_(29)                                         /* (PCR_RST_EN_3) Hibernation TIMER 1 Reset Enable (HTM_1_RST_EN) Position */
#define PCR_RST_EN_3_HTM_1_RST_EN_Msk         (_UINT32_(0x1) << PCR_RST_EN_3_HTM_1_RST_EN_Pos)     /* (PCR_RST_EN_3) Hibernation TIMER 1 Reset Enable (HTM_1_RST_EN) Mask */
#define PCR_RST_EN_3_HTM_1_RST_EN(value)      (PCR_RST_EN_3_HTM_1_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_HTM_1_RST_EN_Pos)) /* Assigment of value for HTM_1_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_CCTIMER_RST_EN_Pos       _UINT32_(30)                                         /* (PCR_RST_EN_3) Capture Compare Timer Reset Enable (CCTIMER_RST_EN) Position */
#define PCR_RST_EN_3_CCTIMER_RST_EN_Msk       (_UINT32_(0x1) << PCR_RST_EN_3_CCTIMER_RST_EN_Pos)   /* (PCR_RST_EN_3) Capture Compare Timer Reset Enable (CCTIMER_RST_EN) Mask */
#define PCR_RST_EN_3_CCTIMER_RST_EN(value)    (PCR_RST_EN_3_CCTIMER_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_3_CCTIMER_RST_EN_Pos)) /* Assigment of value for CCTIMER_RST_EN in the PCR_RST_EN_3 register */
#define PCR_RST_EN_3_Msk                      _UINT32_(0x6413E400)                                 /* (PCR_RST_EN_3) Register Mask  */


/* -------- PCR_RST_EN_4 : (PCR Offset: 0x80) (R/W 32) Reset Enable 4 Register -------- */
#define PCR_RST_EN_4_RESETVALUE               _UINT32_(0x00)                                       /*  (PCR_RST_EN_4) Reset Enable 4 Register  Reset Value */

#define PCR_RST_EN_4_SECMON0_RST_EN_Pos       _UINT32_(0)                                          /* (PCR_RST_EN_4) SPI Monitor 0 Reset Enable (SECMON0_RST_EN) Position */
#define PCR_RST_EN_4_SECMON0_RST_EN_Msk       (_UINT32_(0x1) << PCR_RST_EN_4_SECMON0_RST_EN_Pos)   /* (PCR_RST_EN_4) SPI Monitor 0 Reset Enable (SECMON0_RST_EN) Mask */
#define PCR_RST_EN_4_SECMON0_RST_EN(value)    (PCR_RST_EN_4_SECMON0_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_4_SECMON0_RST_EN_Pos)) /* Assigment of value for SECMON0_RST_EN in the PCR_RST_EN_4 register */
#define PCR_RST_EN_4_SECMON1_RST_EN_Pos       _UINT32_(1)                                          /* (PCR_RST_EN_4) SPI Monitor 1 Reset Enable (SECMON1_RST_EN) Position */
#define PCR_RST_EN_4_SECMON1_RST_EN_Msk       (_UINT32_(0x1) << PCR_RST_EN_4_SECMON1_RST_EN_Pos)   /* (PCR_RST_EN_4) SPI Monitor 1 Reset Enable (SECMON1_RST_EN) Mask */
#define PCR_RST_EN_4_SECMON1_RST_EN(value)    (PCR_RST_EN_4_SECMON1_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_4_SECMON1_RST_EN_Pos)) /* Assigment of value for SECMON1_RST_EN in the PCR_RST_EN_4 register */
#define PCR_RST_EN_4_RTOS_RST_EN_Pos          _UINT32_(6)                                          /* (PCR_RST_EN_4) RTOS Reset Enable (RTOS_RST_EN) Position */
#define PCR_RST_EN_4_RTOS_RST_EN_Msk          (_UINT32_(0x1) << PCR_RST_EN_4_RTOS_RST_EN_Pos)      /* (PCR_RST_EN_4) RTOS Reset Enable (RTOS_RST_EN) Mask */
#define PCR_RST_EN_4_RTOS_RST_EN(value)       (PCR_RST_EN_4_RTOS_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_4_RTOS_RST_EN_Pos)) /* Assigment of value for RTOS_RST_EN in the PCR_RST_EN_4 register */
#define PCR_RST_EN_4_QMSPI0_RST_EN_Pos        _UINT32_(8)                                          /* (PCR_RST_EN_4) Quad Master SPI 0 Reset Enable (QMSPI_1_RST_EN) Position */
#define PCR_RST_EN_4_QMSPI0_RST_EN_Msk        (_UINT32_(0x1) << PCR_RST_EN_4_QMSPI0_RST_EN_Pos)    /* (PCR_RST_EN_4) Quad Master SPI 0 Reset Enable (QMSPI_1_RST_EN) Mask */
#define PCR_RST_EN_4_QMSPI0_RST_EN(value)     (PCR_RST_EN_4_QMSPI0_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_4_QMSPI0_RST_EN_Pos)) /* Assigment of value for QMSPI0_RST_EN in the PCR_RST_EN_4 register */
#define PCR_RST_EN_4_UART0_RST_EN_Pos         _UINT32_(9)                                          /* (PCR_RST_EN_4) UART0 Reset Enable (UART_0_RST_EN) Position */
#define PCR_RST_EN_4_UART0_RST_EN_Msk         (_UINT32_(0x1) << PCR_RST_EN_4_UART0_RST_EN_Pos)     /* (PCR_RST_EN_4) UART0 Reset Enable (UART_0_RST_EN) Mask */
#define PCR_RST_EN_4_UART0_RST_EN(value)      (PCR_RST_EN_4_UART0_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_4_UART0_RST_EN_Pos)) /* Assigment of value for UART0_RST_EN in the PCR_RST_EN_4 register */
#define PCR_RST_EN_4_SPIPER0_RST_EN_Pos       _UINT32_(16)                                         /* (PCR_RST_EN_4) SPI Peropheral 0 Reset Enable (SPIPER0_RST_EN) Position */
#define PCR_RST_EN_4_SPIPER0_RST_EN_Msk       (_UINT32_(0x1) << PCR_RST_EN_4_SPIPER0_RST_EN_Pos)   /* (PCR_RST_EN_4) SPI Peropheral 0 Reset Enable (SPIPER0_RST_EN) Mask */
#define PCR_RST_EN_4_SPIPER0_RST_EN(value)    (PCR_RST_EN_4_SPIPER0_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_4_SPIPER0_RST_EN_Pos)) /* Assigment of value for SPIPER0_RST_EN in the PCR_RST_EN_4 register */
#define PCR_RST_EN_4_SPIPER1_RST_EN_Pos       _UINT32_(21)                                         /* (PCR_RST_EN_4) SPI Peropheral 1 Reset Enable (SPIPER1_RST_EN) Position */
#define PCR_RST_EN_4_SPIPER1_RST_EN_Msk       (_UINT32_(0x1) << PCR_RST_EN_4_SPIPER1_RST_EN_Pos)   /* (PCR_RST_EN_4) SPI Peropheral 1 Reset Enable (SPIPER1_RST_EN) Mask */
#define PCR_RST_EN_4_SPIPER1_RST_EN(value)    (PCR_RST_EN_4_SPIPER1_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_4_SPIPER1_RST_EN_Pos)) /* Assigment of value for SPIPER1_RST_EN in the PCR_RST_EN_4 register */
#define PCR_RST_EN_4_QMSPI_1_RST_EN_Pos       _UINT32_(22)                                         /* (PCR_RST_EN_4) QMSPI 1 Reset Enable (QMSPI_1_RST_EN) Position */
#define PCR_RST_EN_4_QMSPI_1_RST_EN_Msk       (_UINT32_(0x1) << PCR_RST_EN_4_QMSPI_1_RST_EN_Pos)   /* (PCR_RST_EN_4) QMSPI 1 Reset Enable (QMSPI_1_RST_EN) Mask */
#define PCR_RST_EN_4_QMSPI_1_RST_EN(value)    (PCR_RST_EN_4_QMSPI_1_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_4_QMSPI_1_RST_EN_Pos)) /* Assigment of value for QMSPI_1_RST_EN in the PCR_RST_EN_4 register */
#define PCR_RST_EN_4_VBAT_REG_RST_EN_Pos      _UINT32_(23)                                         /* (PCR_RST_EN_4) VBAT REG Reset Enable (VBAT_REG_RST_EN) Position */
#define PCR_RST_EN_4_VBAT_REG_RST_EN_Msk      (_UINT32_(0x1) << PCR_RST_EN_4_VBAT_REG_RST_EN_Pos)  /* (PCR_RST_EN_4) VBAT REG Reset Enable (VBAT_REG_RST_EN) Mask */
#define PCR_RST_EN_4_VBAT_REG_RST_EN(value)   (PCR_RST_EN_4_VBAT_REG_RST_EN_Msk & (_UINT32_(value) << PCR_RST_EN_4_VBAT_REG_RST_EN_Pos)) /* Assigment of value for VBAT_REG_RST_EN in the PCR_RST_EN_4 register */
#define PCR_RST_EN_4_Msk                      _UINT32_(0x00E10343)                                 /* (PCR_RST_EN_4) Register Mask  */


/* -------- PCR_PERIPH_RST_EN_LOCK : (PCR Offset: 0x84) (R/W 32) Peripheral Reset Lock Register -------- */
#define PCR_PERIPH_RST_EN_LOCK_RESETVALUE     _UINT32_(0xA6382D4D)                                 /*  (PCR_PERIPH_RST_EN_LOCK) Peripheral Reset Lock Register  Reset Value */

#define PCR_PERIPH_RST_EN_LOCK_EN_Pos         _UINT32_(0)                                          /* (PCR_PERIPH_RST_EN_LOCK) PCR Reset Enable Lock Register. Position */
#define PCR_PERIPH_RST_EN_LOCK_EN_Msk         (_UINT32_(0xFFFFFFFF) << PCR_PERIPH_RST_EN_LOCK_EN_Pos) /* (PCR_PERIPH_RST_EN_LOCK) PCR Reset Enable Lock Register. Mask */
#define PCR_PERIPH_RST_EN_LOCK_EN(value)      (PCR_PERIPH_RST_EN_LOCK_EN_Msk & (_UINT32_(value) << PCR_PERIPH_RST_EN_LOCK_EN_Pos)) /* Assigment of value for EN in the PCR_PERIPH_RST_EN_LOCK register */
#define PCR_PERIPH_RST_EN_LOCK_Msk            _UINT32_(0xFFFFFFFF)                                 /* (PCR_PERIPH_RST_EN_LOCK) Register Mask  */


/* -------- PCR_EC_PRIV_EN0 : (PCR Offset: 0xF0) (R/W 32) EC Priviliges 0 Register -------- */
#define PCR_EC_PRIV_EN0_RESETVALUE            _UINT32_(0x00)                                       /*  (PCR_EC_PRIV_EN0) EC Priviliges 0 Register  Reset Value */

#define PCR_EC_PRIV_EN0_OTP_Pos               _UINT32_(1)                                          /* (PCR_EC_PRIV_EN0) OTP Privilege Enable. Position */
#define PCR_EC_PRIV_EN0_OTP_Msk               (_UINT32_(0x1) << PCR_EC_PRIV_EN0_OTP_Pos)           /* (PCR_EC_PRIV_EN0) OTP Privilege Enable. Mask */
#define PCR_EC_PRIV_EN0_OTP(value)            (PCR_EC_PRIV_EN0_OTP_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN0_OTP_Pos)) /* Assigment of value for OTP in the PCR_EC_PRIV_EN0 register */
#define PCR_EC_PRIV_EN0_HOST_REG_Pos          _UINT32_(4)                                          /* (PCR_EC_PRIV_EN0) Host Register Bank Privilege Enable. Position */
#define PCR_EC_PRIV_EN0_HOST_REG_Msk          (_UINT32_(0x1) << PCR_EC_PRIV_EN0_HOST_REG_Pos)      /* (PCR_EC_PRIV_EN0) Host Register Bank Privilege Enable. Mask */
#define PCR_EC_PRIV_EN0_HOST_REG(value)       (PCR_EC_PRIV_EN0_HOST_REG_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN0_HOST_REG_Pos)) /* Assigment of value for HOST_REG in the PCR_EC_PRIV_EN0 register */
#define PCR_EC_PRIV_EN0_TST_SPI_Pos           _UINT32_(5)                                          /* (PCR_EC_PRIV_EN0) Test SPI Privilege Enable. Position */
#define PCR_EC_PRIV_EN0_TST_SPI_Msk           (_UINT32_(0x1) << PCR_EC_PRIV_EN0_TST_SPI_Pos)       /* (PCR_EC_PRIV_EN0) Test SPI Privilege Enable. Mask */
#define PCR_EC_PRIV_EN0_TST_SPI(value)        (PCR_EC_PRIV_EN0_TST_SPI_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN0_TST_SPI_Pos)) /* Assigment of value for TST_SPI in the PCR_EC_PRIV_EN0 register */
#define PCR_EC_PRIV_EN0_GPIO_Pos              _UINT32_(6)                                          /* (PCR_EC_PRIV_EN0) GPIO Privilege Enable. Position */
#define PCR_EC_PRIV_EN0_GPIO_Msk              (_UINT32_(0x1) << PCR_EC_PRIV_EN0_GPIO_Pos)          /* (PCR_EC_PRIV_EN0) GPIO Privilege Enable. Mask */
#define PCR_EC_PRIV_EN0_GPIO(value)           (PCR_EC_PRIV_EN0_GPIO_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN0_GPIO_Pos)) /* Assigment of value for GPIO in the PCR_EC_PRIV_EN0 register */
#define PCR_EC_PRIV_EN0_PCR_Pos               _UINT32_(7)                                          /* (PCR_EC_PRIV_EN0) PCR Privilege Enable. Position */
#define PCR_EC_PRIV_EN0_PCR_Msk               (_UINT32_(0x1) << PCR_EC_PRIV_EN0_PCR_Pos)           /* (PCR_EC_PRIV_EN0) PCR Privilege Enable. Mask */
#define PCR_EC_PRIV_EN0_PCR(value)            (PCR_EC_PRIV_EN0_PCR_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN0_PCR_Pos)) /* Assigment of value for PCR in the PCR_EC_PRIV_EN0 register */
#define PCR_EC_PRIV_EN0_Msk                   _UINT32_(0x000000F2)                                 /* (PCR_EC_PRIV_EN0) Register Mask  */


/* -------- PCR_EC_PRIV_EN1 : (PCR Offset: 0xF4) (R/W 32) EC Priviliges 1 Register -------- */
#define PCR_EC_PRIV_EN1_RESETVALUE            _UINT32_(0x00)                                       /*  (PCR_EC_PRIV_EN1) EC Priviliges 1 Register  Reset Value */

#define PCR_EC_PRIV_EN1_INTR_Pos              _UINT32_(0)                                          /* (PCR_EC_PRIV_EN1) Interrupt Privilege Enable. Position */
#define PCR_EC_PRIV_EN1_INTR_Msk              (_UINT32_(0x1) << PCR_EC_PRIV_EN1_INTR_Pos)          /* (PCR_EC_PRIV_EN1) Interrupt Privilege Enable. Mask */
#define PCR_EC_PRIV_EN1_INTR(value)           (PCR_EC_PRIV_EN1_INTR_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN1_INTR_Pos)) /* Assigment of value for INTR in the PCR_EC_PRIV_EN1 register */
#define PCR_EC_PRIV_EN1_PWM0_Pos              _UINT32_(4)                                          /* (PCR_EC_PRIV_EN1) PWM 0 Privilege Enable. Position */
#define PCR_EC_PRIV_EN1_PWM0_Msk              (_UINT32_(0x1) << PCR_EC_PRIV_EN1_PWM0_Pos)          /* (PCR_EC_PRIV_EN1) PWM 0 Privilege Enable. Mask */
#define PCR_EC_PRIV_EN1_PWM0(value)           (PCR_EC_PRIV_EN1_PWM0_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN1_PWM0_Pos)) /* Assigment of value for PWM0 in the PCR_EC_PRIV_EN1 register */
#define PCR_EC_PRIV_EN1_PMC_Pos               _UINT32_(5)                                          /* (PCR_EC_PRIV_EN1) PMC Privilege Enable. Position */
#define PCR_EC_PRIV_EN1_PMC_Msk               (_UINT32_(0x1) << PCR_EC_PRIV_EN1_PMC_Pos)           /* (PCR_EC_PRIV_EN1) PMC Privilege Enable. Mask */
#define PCR_EC_PRIV_EN1_PMC(value)            (PCR_EC_PRIV_EN1_PMC_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN1_PMC_Pos)) /* Assigment of value for PMC in the PCR_EC_PRIV_EN1 register */
#define PCR_EC_PRIV_EN1_DMA_Pos               _UINT32_(6)                                          /* (PCR_EC_PRIV_EN1) DMA Privilege Enable. Position */
#define PCR_EC_PRIV_EN1_DMA_Msk               (_UINT32_(0x1) << PCR_EC_PRIV_EN1_DMA_Pos)           /* (PCR_EC_PRIV_EN1) DMA Privilege Enable. Mask */
#define PCR_EC_PRIV_EN1_DMA(value)            (PCR_EC_PRIV_EN1_DMA_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN1_DMA_Pos)) /* Assigment of value for DMA in the PCR_EC_PRIV_EN1 register */
#define PCR_EC_PRIV_EN1_TFDP_Pos              _UINT32_(7)                                          /* (PCR_EC_PRIV_EN1) TFDP Privilege Enable. Position */
#define PCR_EC_PRIV_EN1_TFDP_Msk              (_UINT32_(0x1) << PCR_EC_PRIV_EN1_TFDP_Pos)          /* (PCR_EC_PRIV_EN1) TFDP Privilege Enable. Mask */
#define PCR_EC_PRIV_EN1_TFDP(value)           (PCR_EC_PRIV_EN1_TFDP_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN1_TFDP_Pos)) /* Assigment of value for TFDP in the PCR_EC_PRIV_EN1 register */
#define PCR_EC_PRIV_EN1_WDT_Pos               _UINT32_(9)                                          /* (PCR_EC_PRIV_EN1) WDT Privilege Enable. Position */
#define PCR_EC_PRIV_EN1_WDT_Msk               (_UINT32_(0x1) << PCR_EC_PRIV_EN1_WDT_Pos)           /* (PCR_EC_PRIV_EN1) WDT Privilege Enable. Mask */
#define PCR_EC_PRIV_EN1_WDT(value)            (PCR_EC_PRIV_EN1_WDT_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN1_WDT_Pos)) /* Assigment of value for WDT in the PCR_EC_PRIV_EN1 register */
#define PCR_EC_PRIV_EN1_SMB_I2C0_Pos          _UINT32_(10)                                         /* (PCR_EC_PRIV_EN1) SMB I2C 0 Privilege Enable. Position */
#define PCR_EC_PRIV_EN1_SMB_I2C0_Msk          (_UINT32_(0x1) << PCR_EC_PRIV_EN1_SMB_I2C0_Pos)      /* (PCR_EC_PRIV_EN1) SMB I2C 0 Privilege Enable. Mask */
#define PCR_EC_PRIV_EN1_SMB_I2C0(value)       (PCR_EC_PRIV_EN1_SMB_I2C0_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN1_SMB_I2C0_Pos)) /* Assigment of value for SMB_I2C0 in the PCR_EC_PRIV_EN1 register */
#define PCR_EC_PRIV_EN1_EC_REGS_Pos           _UINT32_(29)                                         /* (PCR_EC_PRIV_EN1) EC Registers Privilege Enable. Position */
#define PCR_EC_PRIV_EN1_EC_REGS_Msk           (_UINT32_(0x1) << PCR_EC_PRIV_EN1_EC_REGS_Pos)       /* (PCR_EC_PRIV_EN1) EC Registers Privilege Enable. Mask */
#define PCR_EC_PRIV_EN1_EC_REGS(value)        (PCR_EC_PRIV_EN1_EC_REGS_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN1_EC_REGS_Pos)) /* Assigment of value for EC_REGS in the PCR_EC_PRIV_EN1 register */
#define PCR_EC_PRIV_EN1_BASIC_TMR0_Pos        _UINT32_(30)                                         /* (PCR_EC_PRIV_EN1) Basic Timer 0 Privilege Enable. Position */
#define PCR_EC_PRIV_EN1_BASIC_TMR0_Msk        (_UINT32_(0x1) << PCR_EC_PRIV_EN1_BASIC_TMR0_Pos)    /* (PCR_EC_PRIV_EN1) Basic Timer 0 Privilege Enable. Mask */
#define PCR_EC_PRIV_EN1_BASIC_TMR0(value)     (PCR_EC_PRIV_EN1_BASIC_TMR0_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN1_BASIC_TMR0_Pos)) /* Assigment of value for BASIC_TMR0 in the PCR_EC_PRIV_EN1 register */
#define PCR_EC_PRIV_EN1_BASIC_TMR1_Pos        _UINT32_(31)                                         /* (PCR_EC_PRIV_EN1) Basic Timer 1 Privilege Enable. Position */
#define PCR_EC_PRIV_EN1_BASIC_TMR1_Msk        (_UINT32_(0x1) << PCR_EC_PRIV_EN1_BASIC_TMR1_Pos)    /* (PCR_EC_PRIV_EN1) Basic Timer 1 Privilege Enable. Mask */
#define PCR_EC_PRIV_EN1_BASIC_TMR1(value)     (PCR_EC_PRIV_EN1_BASIC_TMR1_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN1_BASIC_TMR1_Pos)) /* Assigment of value for BASIC_TMR1 in the PCR_EC_PRIV_EN1 register */
#define PCR_EC_PRIV_EN1_Msk                   _UINT32_(0xE00006F1)                                 /* (PCR_EC_PRIV_EN1) Register Mask  */

#define PCR_EC_PRIV_EN1_PWM_Pos               _UINT32_(4)                                          /* (PCR_EC_PRIV_EN1 Position) PWM x Privilege Enable. */
#define PCR_EC_PRIV_EN1_PWM_Msk               (_UINT32_(0x1) << PCR_EC_PRIV_EN1_PWM_Pos)           /* (PCR_EC_PRIV_EN1 Mask) PWM */
#define PCR_EC_PRIV_EN1_PWM(value)            (PCR_EC_PRIV_EN1_PWM_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN1_PWM_Pos)) 
#define PCR_EC_PRIV_EN1_SMB_I2C_Pos           _UINT32_(10)                                         /* (PCR_EC_PRIV_EN1 Position) SMB I2C x Privilege Enable. */
#define PCR_EC_PRIV_EN1_SMB_I2C_Msk           (_UINT32_(0x1) << PCR_EC_PRIV_EN1_SMB_I2C_Pos)       /* (PCR_EC_PRIV_EN1 Mask) SMB_I2C */
#define PCR_EC_PRIV_EN1_SMB_I2C(value)        (PCR_EC_PRIV_EN1_SMB_I2C_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN1_SMB_I2C_Pos)) 
#define PCR_EC_PRIV_EN1_BASIC_TMR_Pos         _UINT32_(30)                                         /* (PCR_EC_PRIV_EN1 Position) Basic Timer x Privilege Enable. */
#define PCR_EC_PRIV_EN1_BASIC_TMR_Msk         (_UINT32_(0x3) << PCR_EC_PRIV_EN1_BASIC_TMR_Pos)     /* (PCR_EC_PRIV_EN1 Mask) BASIC_TMR */
#define PCR_EC_PRIV_EN1_BASIC_TMR(value)      (PCR_EC_PRIV_EN1_BASIC_TMR_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN1_BASIC_TMR_Pos)) 

/* -------- PCR_EC_PRIV_EN3 : (PCR Offset: 0xF8) (R/W 32) EC Priviliges 3 Register -------- */
#define PCR_EC_PRIV_EN3_RESETVALUE            _UINT32_(0x00)                                       /*  (PCR_EC_PRIV_EN3) EC Priviliges 3 Register  Reset Value */

#define PCR_EC_PRIV_EN3_HIB_TIM0_Pos          _UINT32_(10)                                         /* (PCR_EC_PRIV_EN3) Hibernation TIMER 0 Privilege Enable. Position */
#define PCR_EC_PRIV_EN3_HIB_TIM0_Msk          (_UINT32_(0x1) << PCR_EC_PRIV_EN3_HIB_TIM0_Pos)      /* (PCR_EC_PRIV_EN3) Hibernation TIMER 0 Privilege Enable. Mask */
#define PCR_EC_PRIV_EN3_HIB_TIM0(value)       (PCR_EC_PRIV_EN3_HIB_TIM0_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN3_HIB_TIM0_Pos)) /* Assigment of value for HIB_TIM0 in the PCR_EC_PRIV_EN3 register */
#define PCR_EC_PRIV_EN3_SMB_I2C1_Pos          _UINT32_(13)                                         /* (PCR_EC_PRIV_EN3) SMB I2C 1 Privilege Enable. Position */
#define PCR_EC_PRIV_EN3_SMB_I2C1_Msk          (_UINT32_(0x1) << PCR_EC_PRIV_EN3_SMB_I2C1_Pos)      /* (PCR_EC_PRIV_EN3) SMB I2C 1 Privilege Enable. Mask */
#define PCR_EC_PRIV_EN3_SMB_I2C1(value)       (PCR_EC_PRIV_EN3_SMB_I2C1_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN3_SMB_I2C1_Pos)) /* Assigment of value for SMB_I2C1 in the PCR_EC_PRIV_EN3 register */
#define PCR_EC_PRIV_EN3_SMB_I2C2_Pos          _UINT32_(14)                                         /* (PCR_EC_PRIV_EN3) SMB I2C 2 Privilege Enable. Position */
#define PCR_EC_PRIV_EN3_SMB_I2C2_Msk          (_UINT32_(0x1) << PCR_EC_PRIV_EN3_SMB_I2C2_Pos)      /* (PCR_EC_PRIV_EN3) SMB I2C 2 Privilege Enable. Mask */
#define PCR_EC_PRIV_EN3_SMB_I2C2(value)       (PCR_EC_PRIV_EN3_SMB_I2C2_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN3_SMB_I2C2_Pos)) /* Assigment of value for SMB_I2C2 in the PCR_EC_PRIV_EN3 register */
#define PCR_EC_PRIV_EN3_SMB_I2C3_Pos          _UINT32_(15)                                         /* (PCR_EC_PRIV_EN3) SMB I2C 3 Privilege Enable. Position */
#define PCR_EC_PRIV_EN3_SMB_I2C3_Msk          (_UINT32_(0x1) << PCR_EC_PRIV_EN3_SMB_I2C3_Pos)      /* (PCR_EC_PRIV_EN3) SMB I2C 3 Privilege Enable. Mask */
#define PCR_EC_PRIV_EN3_SMB_I2C3(value)       (PCR_EC_PRIV_EN3_SMB_I2C3_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN3_SMB_I2C3_Pos)) /* Assigment of value for SMB_I2C3 in the PCR_EC_PRIV_EN3 register */
#define PCR_EC_PRIV_EN3_LED0_Pos              _UINT32_(16)                                         /* (PCR_EC_PRIV_EN3) LED 0 Privilege Enable. Position */
#define PCR_EC_PRIV_EN3_LED0_Msk              (_UINT32_(0x1) << PCR_EC_PRIV_EN3_LED0_Pos)          /* (PCR_EC_PRIV_EN3) LED 0 Privilege Enable. Mask */
#define PCR_EC_PRIV_EN3_LED0(value)           (PCR_EC_PRIV_EN3_LED0_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN3_LED0_Pos)) /* Assigment of value for LED0 in the PCR_EC_PRIV_EN3 register */
#define PCR_EC_PRIV_EN3_LED1_Pos              _UINT32_(17)                                         /* (PCR_EC_PRIV_EN3) LED 1 Privilege Enable. Position */
#define PCR_EC_PRIV_EN3_LED1_Msk              (_UINT32_(0x1) << PCR_EC_PRIV_EN3_LED1_Pos)          /* (PCR_EC_PRIV_EN3) LED 1 Privilege Enable. Mask */
#define PCR_EC_PRIV_EN3_LED1(value)           (PCR_EC_PRIV_EN3_LED1_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN3_LED1_Pos)) /* Assigment of value for LED1 in the PCR_EC_PRIV_EN3 register */
#define PCR_EC_PRIV_EN3_SMB_I2C4_Pos          _UINT32_(20)                                         /* (PCR_EC_PRIV_EN3) SMB I2C 4 Privilege Enable. Position */
#define PCR_EC_PRIV_EN3_SMB_I2C4_Msk          (_UINT32_(0x1) << PCR_EC_PRIV_EN3_SMB_I2C4_Pos)      /* (PCR_EC_PRIV_EN3) SMB I2C 4 Privilege Enable. Mask */
#define PCR_EC_PRIV_EN3_SMB_I2C4(value)       (PCR_EC_PRIV_EN3_SMB_I2C4_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN3_SMB_I2C4_Pos)) /* Assigment of value for SMB_I2C4 in the PCR_EC_PRIV_EN3 register */
#define PCR_EC_PRIV_EN3_CRYPTO_Pos            _UINT32_(26)                                         /* (PCR_EC_PRIV_EN3) Crypto Privilege Enable. Position */
#define PCR_EC_PRIV_EN3_CRYPTO_Msk            (_UINT32_(0x1) << PCR_EC_PRIV_EN3_CRYPTO_Pos)        /* (PCR_EC_PRIV_EN3) Crypto Privilege Enable. Mask */
#define PCR_EC_PRIV_EN3_CRYPTO(value)         (PCR_EC_PRIV_EN3_CRYPTO_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN3_CRYPTO_Pos)) /* Assigment of value for CRYPTO in the PCR_EC_PRIV_EN3 register */
#define PCR_EC_PRIV_EN3_HIB_TIM1_Pos          _UINT32_(29)                                         /* (PCR_EC_PRIV_EN3) Hibernation Timer 1 Privilege Enable. Position */
#define PCR_EC_PRIV_EN3_HIB_TIM1_Msk          (_UINT32_(0x1) << PCR_EC_PRIV_EN3_HIB_TIM1_Pos)      /* (PCR_EC_PRIV_EN3) Hibernation Timer 1 Privilege Enable. Mask */
#define PCR_EC_PRIV_EN3_HIB_TIM1(value)       (PCR_EC_PRIV_EN3_HIB_TIM1_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN3_HIB_TIM1_Pos)) /* Assigment of value for HIB_TIM1 in the PCR_EC_PRIV_EN3 register */
#define PCR_EC_PRIV_EN3_CCT0_Pos              _UINT32_(30)                                         /* (PCR_EC_PRIV_EN3) Capture Compare Timer Privilege Enable. Position */
#define PCR_EC_PRIV_EN3_CCT0_Msk              (_UINT32_(0x1) << PCR_EC_PRIV_EN3_CCT0_Pos)          /* (PCR_EC_PRIV_EN3) Capture Compare Timer Privilege Enable. Mask */
#define PCR_EC_PRIV_EN3_CCT0(value)           (PCR_EC_PRIV_EN3_CCT0_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN3_CCT0_Pos)) /* Assigment of value for CCT0 in the PCR_EC_PRIV_EN3 register */
#define PCR_EC_PRIV_EN3_Msk                   _UINT32_(0x6413E400)                                 /* (PCR_EC_PRIV_EN3) Register Mask  */

#define PCR_EC_PRIV_EN3_LED_Pos               _UINT32_(16)                                         /* (PCR_EC_PRIV_EN3 Position) LED x Privilege Enable. */
#define PCR_EC_PRIV_EN3_LED_Msk               (_UINT32_(0x3) << PCR_EC_PRIV_EN3_LED_Pos)           /* (PCR_EC_PRIV_EN3 Mask) LED */
#define PCR_EC_PRIV_EN3_LED(value)            (PCR_EC_PRIV_EN3_LED_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN3_LED_Pos)) 
#define PCR_EC_PRIV_EN3_CCT_Pos               _UINT32_(30)                                         /* (PCR_EC_PRIV_EN3 Position) Capture Compare Timer Privilege Enable. */
#define PCR_EC_PRIV_EN3_CCT_Msk               (_UINT32_(0x1) << PCR_EC_PRIV_EN3_CCT_Pos)           /* (PCR_EC_PRIV_EN3 Mask) CCT */
#define PCR_EC_PRIV_EN3_CCT(value)            (PCR_EC_PRIV_EN3_CCT_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN3_CCT_Pos)) 

/* -------- PCR_EC_PRIV_EN4 : (PCR Offset: 0xFC) (R/W 32) EC Priviliges 4 Register -------- */
#define PCR_EC_PRIV_EN4_RESETVALUE            _UINT32_(0x00)                                       /*  (PCR_EC_PRIV_EN4) EC Priviliges 4 Register  Reset Value */

#define PCR_EC_PRIV_EN4_SPIMON0_Pos           _UINT32_(0)                                          /* (PCR_EC_PRIV_EN4) SPI Monitor 0 Privilege Enable. Position */
#define PCR_EC_PRIV_EN4_SPIMON0_Msk           (_UINT32_(0x1) << PCR_EC_PRIV_EN4_SPIMON0_Pos)       /* (PCR_EC_PRIV_EN4) SPI Monitor 0 Privilege Enable. Mask */
#define PCR_EC_PRIV_EN4_SPIMON0(value)        (PCR_EC_PRIV_EN4_SPIMON0_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN4_SPIMON0_Pos)) /* Assigment of value for SPIMON0 in the PCR_EC_PRIV_EN4 register */
#define PCR_EC_PRIV_EN4_SPIMON1_Pos           _UINT32_(1)                                          /* (PCR_EC_PRIV_EN4) SPI Monitor 1 Privilege Enable. Position */
#define PCR_EC_PRIV_EN4_SPIMON1_Msk           (_UINT32_(0x1) << PCR_EC_PRIV_EN4_SPIMON1_Pos)       /* (PCR_EC_PRIV_EN4) SPI Monitor 1 Privilege Enable. Mask */
#define PCR_EC_PRIV_EN4_SPIMON1(value)        (PCR_EC_PRIV_EN4_SPIMON1_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN4_SPIMON1_Pos)) /* Assigment of value for SPIMON1 in the PCR_EC_PRIV_EN4 register */
#define PCR_EC_PRIV_EN4_RTOS_TIM_Pos          _UINT32_(6)                                          /* (PCR_EC_PRIV_EN4) RTOS Timer Privilege Enable. Position */
#define PCR_EC_PRIV_EN4_RTOS_TIM_Msk          (_UINT32_(0x1) << PCR_EC_PRIV_EN4_RTOS_TIM_Pos)      /* (PCR_EC_PRIV_EN4) RTOS Timer Privilege Enable. Mask */
#define PCR_EC_PRIV_EN4_RTOS_TIM(value)       (PCR_EC_PRIV_EN4_RTOS_TIM_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN4_RTOS_TIM_Pos)) /* Assigment of value for RTOS_TIM in the PCR_EC_PRIV_EN4 register */
#define PCR_EC_PRIV_EN4_QMSPI0_Pos            _UINT32_(8)                                          /* (PCR_EC_PRIV_EN4) QMSPI 0 Privilege Enable. Position */
#define PCR_EC_PRIV_EN4_QMSPI0_Msk            (_UINT32_(0x1) << PCR_EC_PRIV_EN4_QMSPI0_Pos)        /* (PCR_EC_PRIV_EN4) QMSPI 0 Privilege Enable. Mask */
#define PCR_EC_PRIV_EN4_QMSPI0(value)         (PCR_EC_PRIV_EN4_QMSPI0_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN4_QMSPI0_Pos)) /* Assigment of value for QMSPI0 in the PCR_EC_PRIV_EN4 register */
#define PCR_EC_PRIV_EN4_UART0_Pos             _UINT32_(9)                                          /* (PCR_EC_PRIV_EN4) UART 0 Privilege Enable. Position */
#define PCR_EC_PRIV_EN4_UART0_Msk             (_UINT32_(0x1) << PCR_EC_PRIV_EN4_UART0_Pos)         /* (PCR_EC_PRIV_EN4) UART 0 Privilege Enable. Mask */
#define PCR_EC_PRIV_EN4_UART0(value)          (PCR_EC_PRIV_EN4_UART0_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN4_UART0_Pos)) /* Assigment of value for UART0 in the PCR_EC_PRIV_EN4 register */
#define PCR_EC_PRIV_EN4_SPISLV0_Pos           _UINT32_(16)                                         /* (PCR_EC_PRIV_EN4) SPISLV 0 Privilege Enable. Position */
#define PCR_EC_PRIV_EN4_SPISLV0_Msk           (_UINT32_(0x1) << PCR_EC_PRIV_EN4_SPISLV0_Pos)       /* (PCR_EC_PRIV_EN4) SPISLV 0 Privilege Enable. Mask */
#define PCR_EC_PRIV_EN4_SPISLV0(value)        (PCR_EC_PRIV_EN4_SPISLV0_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN4_SPISLV0_Pos)) /* Assigment of value for SPISLV0 in the PCR_EC_PRIV_EN4 register */
#define PCR_EC_PRIV_EN4_SPISLV1_Pos           _UINT32_(21)                                         /* (PCR_EC_PRIV_EN4) SPISLV 1 Privilege Enable. Position */
#define PCR_EC_PRIV_EN4_SPISLV1_Msk           (_UINT32_(0x1) << PCR_EC_PRIV_EN4_SPISLV1_Pos)       /* (PCR_EC_PRIV_EN4) SPISLV 1 Privilege Enable. Mask */
#define PCR_EC_PRIV_EN4_SPISLV1(value)        (PCR_EC_PRIV_EN4_SPISLV1_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN4_SPISLV1_Pos)) /* Assigment of value for SPISLV1 in the PCR_EC_PRIV_EN4 register */
#define PCR_EC_PRIV_EN4_QMSPI1_Pos            _UINT32_(22)                                         /* (PCR_EC_PRIV_EN4) QMSPI 1 Privilege Enable. Position */
#define PCR_EC_PRIV_EN4_QMSPI1_Msk            (_UINT32_(0x1) << PCR_EC_PRIV_EN4_QMSPI1_Pos)        /* (PCR_EC_PRIV_EN4) QMSPI 1 Privilege Enable. Mask */
#define PCR_EC_PRIV_EN4_QMSPI1(value)         (PCR_EC_PRIV_EN4_QMSPI1_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN4_QMSPI1_Pos)) /* Assigment of value for QMSPI1 in the PCR_EC_PRIV_EN4 register */
#define PCR_EC_PRIV_EN4_VBAT_REG_Pos          _UINT32_(23)                                         /* (PCR_EC_PRIV_EN4) VBAT Register Privilege Enable. Position */
#define PCR_EC_PRIV_EN4_VBAT_REG_Msk          (_UINT32_(0x1) << PCR_EC_PRIV_EN4_VBAT_REG_Pos)      /* (PCR_EC_PRIV_EN4) VBAT Register Privilege Enable. Mask */
#define PCR_EC_PRIV_EN4_VBAT_REG(value)       (PCR_EC_PRIV_EN4_VBAT_REG_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN4_VBAT_REG_Pos)) /* Assigment of value for VBAT_REG in the PCR_EC_PRIV_EN4 register */
#define PCR_EC_PRIV_EN4_Msk                   _UINT32_(0x00E10343)                                 /* (PCR_EC_PRIV_EN4) Register Mask  */

#define PCR_EC_PRIV_EN4_SPIMON_Pos            _UINT32_(0)                                          /* (PCR_EC_PRIV_EN4 Position) SPI Monitor x Privilege Enable. */
#define PCR_EC_PRIV_EN4_SPIMON_Msk            (_UINT32_(0x3) << PCR_EC_PRIV_EN4_SPIMON_Pos)        /* (PCR_EC_PRIV_EN4 Mask) SPIMON */
#define PCR_EC_PRIV_EN4_SPIMON(value)         (PCR_EC_PRIV_EN4_SPIMON_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN4_SPIMON_Pos)) 
#define PCR_EC_PRIV_EN4_UART_Pos              _UINT32_(9)                                          /* (PCR_EC_PRIV_EN4 Position) UART x Privilege Enable. */
#define PCR_EC_PRIV_EN4_UART_Msk              (_UINT32_(0x1) << PCR_EC_PRIV_EN4_UART_Pos)          /* (PCR_EC_PRIV_EN4 Mask) UART */
#define PCR_EC_PRIV_EN4_UART(value)           (PCR_EC_PRIV_EN4_UART_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN4_UART_Pos)) 
#define PCR_EC_PRIV_EN4_SPISLV_Pos            _UINT32_(16)                                         /* (PCR_EC_PRIV_EN4 Position) SPISLV x Privilege Enable. */
#define PCR_EC_PRIV_EN4_SPISLV_Msk            (_UINT32_(0x3) << PCR_EC_PRIV_EN4_SPISLV_Pos)        /* (PCR_EC_PRIV_EN4 Mask) SPISLV */
#define PCR_EC_PRIV_EN4_SPISLV(value)         (PCR_EC_PRIV_EN4_SPISLV_Msk & (_UINT32_(value) << PCR_EC_PRIV_EN4_SPISLV_Pos)) 

/** \brief PCR register offsets definitions */
#define PCR_PROC_CLK_CTRL_REG_OFST     _UINT32_(0x04)      /* (PCR_PROC_CLK_CTRL) Processor Clock Control Register [7:0] Processor Clock Divide Value (PROC_DIV) Offset */
#define PCR_SLOW_CLK_CTRL_REG_OFST     _UINT32_(0x08)      /* (PCR_SLOW_CLK_CTRL) Configures the EC_CLK clock domain Offset */
#define PCR_OSC_ID_REG_OFST            _UINT32_(0x0C)      /* (PCR_OSC_ID) Oscillator ID Register Offset */
#define PCR_PWR_RST_STS_REG_OFST       _UINT32_(0x10)      /* (PCR_PWR_RST_STS) PCR Power Reset Status Register Offset */
#define PCR_SYS_RST_REG_OFST           _UINT32_(0x18)      /* (PCR_SYS_RST) System Reset Register Offset */
#define PCR_PRIV_EN_LOCK_REG_OFST      _UINT32_(0x24)      /* (PCR_PRIV_EN_LOCK) Peripheral Privilege Register Offset */
#define PCR_SLP_EN_0_REG_OFST          _UINT32_(0x30)      /* (PCR_SLP_EN_0) Sleep Enable 0 Register Offset */
#define PCR_SLP_EN_1_REG_OFST          _UINT32_(0x34)      /* (PCR_SLP_EN_1) Sleep Enable 1 Register Offset */
#define PCR_SLP_EN_3_REG_OFST          _UINT32_(0x3C)      /* (PCR_SLP_EN_3) Sleep Enable 3 Register Offset */
#define PCR_SLP_EN_4_REG_OFST          _UINT32_(0x40)      /* (PCR_SLP_EN_4) Sleep Enable 4 Register Offset */
#define PCR_RST_EN_0_REG_OFST          _UINT32_(0x70)      /* (PCR_RST_EN_0) Reset Enable 0 Register Offset */
#define PCR_RST_EN_1_REG_OFST          _UINT32_(0x74)      /* (PCR_RST_EN_1) Reset Enable 1 Register Offset */
#define PCR_RST_EN_3_REG_OFST          _UINT32_(0x7C)      /* (PCR_RST_EN_3) Reset Enable 3 Register Offset */
#define PCR_RST_EN_4_REG_OFST          _UINT32_(0x80)      /* (PCR_RST_EN_4) Reset Enable 4 Register Offset */
#define PCR_PERIPH_RST_EN_LOCK_REG_OFST _UINT32_(0x84)      /* (PCR_PERIPH_RST_EN_LOCK) Peripheral Reset Lock Register Offset */
#define PCR_EC_PRIV_EN0_REG_OFST       _UINT32_(0xF0)      /* (PCR_EC_PRIV_EN0) EC Priviliges 0 Register Offset */
#define PCR_EC_PRIV_EN1_REG_OFST       _UINT32_(0xF4)      /* (PCR_EC_PRIV_EN1) EC Priviliges 1 Register Offset */
#define PCR_EC_PRIV_EN3_REG_OFST       _UINT32_(0xF8)      /* (PCR_EC_PRIV_EN3) EC Priviliges 3 Register Offset */
#define PCR_EC_PRIV_EN4_REG_OFST       _UINT32_(0xFC)      /* (PCR_EC_PRIV_EN4) EC Priviliges 4 Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PCR register API structure */
typedef struct
{  /* The Power, Clocks, and Resets (PCR) Section identifies clock sources, and reset inputs to the chip. */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       PCR_PROC_CLK_CTRL;  /**< Offset: 0x04 (R/W  32) Processor Clock Control Register [7:0] Processor Clock Divide Value (PROC_DIV) */
  __IO  uint32_t                       PCR_SLOW_CLK_CTRL;  /**< Offset: 0x08 (R/W  32) Configures the EC_CLK clock domain */
  __IO  uint32_t                       PCR_OSC_ID;         /**< Offset: 0x0C (R/W  32) Oscillator ID Register */
  __IO  uint32_t                       PCR_PWR_RST_STS;    /**< Offset: 0x10 (R/W  32) PCR Power Reset Status Register */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       PCR_SYS_RST;        /**< Offset: 0x18 (R/W  32) System Reset Register */
  __I   uint8_t                        Reserved3[0x08];
  __IO  uint32_t                       PCR_PRIV_EN_LOCK;   /**< Offset: 0x24 (R/W  32) Peripheral Privilege Register */
  __I   uint8_t                        Reserved4[0x08];
  __IO  uint32_t                       PCR_SLP_EN_0;       /**< Offset: 0x30 (R/W  32) Sleep Enable 0 Register */
  __IO  uint32_t                       PCR_SLP_EN_1;       /**< Offset: 0x34 (R/W  32) Sleep Enable 1 Register */
  __I   uint8_t                        Reserved5[0x04];
  __IO  uint32_t                       PCR_SLP_EN_3;       /**< Offset: 0x3C (R/W  32) Sleep Enable 3 Register */
  __IO  uint32_t                       PCR_SLP_EN_4;       /**< Offset: 0x40 (R/W  32) Sleep Enable 4 Register */
  __I   uint8_t                        Reserved6[0x2C];
  __IO  uint32_t                       PCR_RST_EN_0;       /**< Offset: 0x70 (R/W  32) Reset Enable 0 Register */
  __IO  uint32_t                       PCR_RST_EN_1;       /**< Offset: 0x74 (R/W  32) Reset Enable 1 Register */
  __I   uint8_t                        Reserved7[0x04];
  __IO  uint32_t                       PCR_RST_EN_3;       /**< Offset: 0x7C (R/W  32) Reset Enable 3 Register */
  __IO  uint32_t                       PCR_RST_EN_4;       /**< Offset: 0x80 (R/W  32) Reset Enable 4 Register */
  __IO  uint32_t                       PCR_PERIPH_RST_EN_LOCK; /**< Offset: 0x84 (R/W  32) Peripheral Reset Lock Register */
  __I   uint8_t                        Reserved8[0x68];
  __IO  uint32_t                       PCR_EC_PRIV_EN0;    /**< Offset: 0xF0 (R/W  32) EC Priviliges 0 Register */
  __IO  uint32_t                       PCR_EC_PRIV_EN1;    /**< Offset: 0xF4 (R/W  32) EC Priviliges 1 Register */
  __IO  uint32_t                       PCR_EC_PRIV_EN3;    /**< Offset: 0xF8 (R/W  32) EC Priviliges 3 Register */
  __IO  uint32_t                       PCR_EC_PRIV_EN4;    /**< Offset: 0xFC (R/W  32) EC Priviliges 4 Register */
} pcr_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_PCR_COMPONENT_H_ */
