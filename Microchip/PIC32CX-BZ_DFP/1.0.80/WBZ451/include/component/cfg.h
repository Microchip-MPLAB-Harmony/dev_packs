/**
 * \brief Component description for CFG
 *
 * Copyright (c) 2021 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description version 2021-05-04T23:48:40Z */
#ifndef _BZ45_CFG_COMPONENT_H_
#define _BZ45_CFG_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR CFG                                          */
/* ************************************************************************** */

/* -------- CFG_CFGCON0 : (CFG Offset: 0x00) (R/W 32)  -------- */
#define CFG_CFGCON0_RESETVALUE                _U_(0x7100000B)                                      /**<  (CFG_CFGCON0)   Reset Value */

#define CFG_CFGCON0_TDOEN_Pos                 _U_(0)                                               /**< (CFG_CFGCON0) TDO enable for 2-wire JTAG Position */
#define CFG_CFGCON0_TDOEN_Msk                 (_U_(0x1) << CFG_CFGCON0_TDOEN_Pos)                  /**< (CFG_CFGCON0) TDO enable for 2-wire JTAG Mask */
#define CFG_CFGCON0_TDOEN(value)              (CFG_CFGCON0_TDOEN_Msk & ((value) << CFG_CFGCON0_TDOEN_Pos))
#define CFG_CFGCON0_SWOEN_Pos                 _U_(1)                                               /**< (CFG_CFGCON0) SWO enable on 2-wire debug interface Position */
#define CFG_CFGCON0_SWOEN_Msk                 (_U_(0x1) << CFG_CFGCON0_SWOEN_Pos)                  /**< (CFG_CFGCON0) SWO enable on 2-wire debug interface Mask */
#define CFG_CFGCON0_SWOEN(value)              (CFG_CFGCON0_SWOEN_Msk & ((value) << CFG_CFGCON0_SWOEN_Pos))
#define CFG_CFGCON0_TROEN_Pos                 _U_(2)                                               /**< (CFG_CFGCON0) Trace Output Enable Position */
#define CFG_CFGCON0_TROEN_Msk                 (_U_(0x1) << CFG_CFGCON0_TROEN_Pos)                  /**< (CFG_CFGCON0) Trace Output Enable Mask */
#define CFG_CFGCON0_TROEN(value)              (CFG_CFGCON0_TROEN_Msk & ((value) << CFG_CFGCON0_TROEN_Pos))
#define CFG_CFGCON0_JTAGEN_Pos                _U_(3)                                               /**< (CFG_CFGCON0) JTAG Enable Position */
#define CFG_CFGCON0_JTAGEN_Msk                (_U_(0x1) << CFG_CFGCON0_JTAGEN_Pos)                 /**< (CFG_CFGCON0) JTAG Enable Mask */
#define CFG_CFGCON0_JTAGEN(value)             (CFG_CFGCON0_JTAGEN_Msk & ((value) << CFG_CFGCON0_JTAGEN_Pos))
#define CFG_CFGCON0_ADCPOVR_Pos               _U_(4)                                               /**< (CFG_CFGCON0) ADC Charge Pump Override Position */
#define CFG_CFGCON0_ADCPOVR_Msk               (_U_(0x1) << CFG_CFGCON0_ADCPOVR_Pos)                /**< (CFG_CFGCON0) ADC Charge Pump Override Mask */
#define CFG_CFGCON0_ADCPOVR(value)            (CFG_CFGCON0_ADCPOVR_Msk & ((value) << CFG_CFGCON0_ADCPOVR_Pos))
#define CFG_CFGCON0_ACCMP1_ALTEN_Pos          _U_(6)                                               /**< (CFG_CFGCON0) AC CMP1 Alternate Enable Position */
#define CFG_CFGCON0_ACCMP1_ALTEN_Msk          (_U_(0x1) << CFG_CFGCON0_ACCMP1_ALTEN_Pos)           /**< (CFG_CFGCON0) AC CMP1 Alternate Enable Mask */
#define CFG_CFGCON0_ACCMP1_ALTEN(value)       (CFG_CFGCON0_ACCMP1_ALTEN_Msk & ((value) << CFG_CFGCON0_ACCMP1_ALTEN_Pos))
#define CFG_CFGCON0_CPENFILT_Pos              _U_(7)                                               /**< (CFG_CFGCON0) ADC CP Filter Enable Position */
#define CFG_CFGCON0_CPENFILT_Msk              (_U_(0x1) << CFG_CFGCON0_CPENFILT_Pos)               /**< (CFG_CFGCON0) ADC CP Filter Enable Mask */
#define CFG_CFGCON0_CPENFILT(value)           (CFG_CFGCON0_CPENFILT_Msk & ((value) << CFG_CFGCON0_CPENFILT_Pos))
#define CFG_CFGCON0_RTCIN0_ALTEN_Pos          _U_(8)                                               /**< (CFG_CFGCON0) RTCIN0 Alternate Enable Position */
#define CFG_CFGCON0_RTCIN0_ALTEN_Msk          (_U_(0x1) << CFG_CFGCON0_RTCIN0_ALTEN_Pos)           /**< (CFG_CFGCON0) RTCIN0 Alternate Enable Mask */
#define CFG_CFGCON0_RTCIN0_ALTEN(value)       (CFG_CFGCON0_RTCIN0_ALTEN_Msk & ((value) << CFG_CFGCON0_RTCIN0_ALTEN_Pos))
#define CFG_CFGCON0_RTCOUT_ALTEN_Pos          _U_(9)                                               /**< (CFG_CFGCON0) RTCOUT Alternate Enable Position */
#define CFG_CFGCON0_RTCOUT_ALTEN_Msk          (_U_(0x1) << CFG_CFGCON0_RTCOUT_ALTEN_Pos)           /**< (CFG_CFGCON0) RTCOUT Alternate Enable Mask */
#define CFG_CFGCON0_RTCOUT_ALTEN(value)       (CFG_CFGCON0_RTCOUT_ALTEN_Msk & ((value) << CFG_CFGCON0_RTCOUT_ALTEN_Pos))
#define CFG_CFGCON0_PMULOCK_Pos               _U_(10)                                              /**< (CFG_CFGCON0) PMU Controller Register LOCK Position */
#define CFG_CFGCON0_PMULOCK_Msk               (_U_(0x1) << CFG_CFGCON0_PMULOCK_Pos)                /**< (CFG_CFGCON0) PMU Controller Register LOCK Mask */
#define CFG_CFGCON0_PMULOCK(value)            (CFG_CFGCON0_PMULOCK_Msk & ((value) << CFG_CFGCON0_PMULOCK_Pos))
#define CFG_CFGCON0_PGLCOK_Pos                _U_(11)                                              /**< (CFG_CFGCON0) Permission Group LOCK Position */
#define CFG_CFGCON0_PGLCOK_Msk                (_U_(0x1) << CFG_CFGCON0_PGLCOK_Pos)                 /**< (CFG_CFGCON0) Permission Group LOCK Mask */
#define CFG_CFGCON0_PGLCOK(value)             (CFG_CFGCON0_PGLCOK_Msk & ((value) << CFG_CFGCON0_PGLCOK_Pos))
#define CFG_CFGCON0_PMDLOCK_Pos               _U_(12)                                              /**< (CFG_CFGCON0) Peripheral Module Disable (PMD) LOCK Position */
#define CFG_CFGCON0_PMDLOCK_Msk               (_U_(0x1) << CFG_CFGCON0_PMDLOCK_Pos)                /**< (CFG_CFGCON0) Peripheral Module Disable (PMD) LOCK Mask */
#define CFG_CFGCON0_PMDLOCK(value)            (CFG_CFGCON0_PMDLOCK_Msk & ((value) << CFG_CFGCON0_PMDLOCK_Pos))
#define CFG_CFGCON0_IOLOCK_Pos                _U_(13)                                              /**< (CFG_CFGCON0) IO LOCK Position */
#define CFG_CFGCON0_IOLOCK_Msk                (_U_(0x1) << CFG_CFGCON0_IOLOCK_Pos)                 /**< (CFG_CFGCON0) IO LOCK Mask */
#define CFG_CFGCON0_IOLOCK(value)             (CFG_CFGCON0_IOLOCK_Msk & ((value) << CFG_CFGCON0_IOLOCK_Pos))
#define CFG_CFGCON0_CFGCLOCK_Pos              _U_(14)                                              /**< (CFG_CFGCON0) Configuration Register Lock Position */
#define CFG_CFGCON0_CFGCLOCK_Msk              (_U_(0x3) << CFG_CFGCON0_CFGCLOCK_Pos)               /**< (CFG_CFGCON0) Configuration Register Lock Mask */
#define CFG_CFGCON0_CFGCLOCK(value)           (CFG_CFGCON0_CFGCLOCK_Msk & ((value) << CFG_CFGCON0_CFGCLOCK_Pos))
#define CFG_CFGCON0_VBCMODE_Pos               _U_(16)                                              /**< (CFG_CFGCON0) VBC Operating Mode Position */
#define CFG_CFGCON0_VBCMODE_Msk               (_U_(0x1) << CFG_CFGCON0_VBCMODE_Pos)                /**< (CFG_CFGCON0) VBC Operating Mode Mask */
#define CFG_CFGCON0_VBCMODE(value)            (CFG_CFGCON0_VBCMODE_Msk & ((value) << CFG_CFGCON0_VBCMODE_Pos))
#define CFG_CFGCON0_SMBUSEN0_Pos              _U_(17)                                              /**< (CFG_CFGCON0) SMBus Enable for SERCOM0 Position */
#define CFG_CFGCON0_SMBUSEN0_Msk              (_U_(0x1) << CFG_CFGCON0_SMBUSEN0_Pos)               /**< (CFG_CFGCON0) SMBus Enable for SERCOM0 Mask */
#define CFG_CFGCON0_SMBUSEN0(value)           (CFG_CFGCON0_SMBUSEN0_Msk & ((value) << CFG_CFGCON0_SMBUSEN0_Pos))
#define CFG_CFGCON0_SMBUSEN1_Pos              _U_(18)                                              /**< (CFG_CFGCON0) SMBus Enable for SERCOM1 Position */
#define CFG_CFGCON0_SMBUSEN1_Msk              (_U_(0x1) << CFG_CFGCON0_SMBUSEN1_Pos)               /**< (CFG_CFGCON0) SMBus Enable for SERCOM1 Mask */
#define CFG_CFGCON0_SMBUSEN1(value)           (CFG_CFGCON0_SMBUSEN1_Msk & ((value) << CFG_CFGCON0_SMBUSEN1_Pos))
#define CFG_CFGCON0_SMBUSEN2_Pos              _U_(19)                                              /**< (CFG_CFGCON0) SMBus Enable for SERCOM2 Position */
#define CFG_CFGCON0_SMBUSEN2_Msk              (_U_(0x1) << CFG_CFGCON0_SMBUSEN2_Pos)               /**< (CFG_CFGCON0) SMBus Enable for SERCOM2 Mask */
#define CFG_CFGCON0_SMBUSEN2(value)           (CFG_CFGCON0_SMBUSEN2_Msk & ((value) << CFG_CFGCON0_SMBUSEN2_Pos))
#define CFG_CFGCON0_HPLUGDIS_Pos              _U_(20)                                              /**< (CFG_CFGCON0) Hot Plugging Disable Position */
#define CFG_CFGCON0_HPLUGDIS_Msk              (_U_(0x1) << CFG_CFGCON0_HPLUGDIS_Pos)               /**< (CFG_CFGCON0) Hot Plugging Disable Mask */
#define CFG_CFGCON0_HPLUGDIS(value)           (CFG_CFGCON0_HPLUGDIS_Msk & ((value) << CFG_CFGCON0_HPLUGDIS_Pos))
#define CFG_CFGCON0_SLRTEN0_Pos               _U_(21)                                              /**< (CFG_CFGCON0) SLRT Enable for SERCOM0 Position */
#define CFG_CFGCON0_SLRTEN0_Msk               (_U_(0x1) << CFG_CFGCON0_SLRTEN0_Pos)                /**< (CFG_CFGCON0) SLRT Enable for SERCOM0 Mask */
#define CFG_CFGCON0_SLRTEN0(value)            (CFG_CFGCON0_SLRTEN0_Msk & ((value) << CFG_CFGCON0_SLRTEN0_Pos))
#define CFG_CFGCON0_SLRTEN1_Pos               _U_(22)                                              /**< (CFG_CFGCON0) SLRT Enable for SERCOM1 Position */
#define CFG_CFGCON0_SLRTEN1_Msk               (_U_(0x1) << CFG_CFGCON0_SLRTEN1_Pos)                /**< (CFG_CFGCON0) SLRT Enable for SERCOM1 Mask */
#define CFG_CFGCON0_SLRTEN1(value)            (CFG_CFGCON0_SLRTEN1_Msk & ((value) << CFG_CFGCON0_SLRTEN1_Pos))
#define CFG_CFGCON0_SLRTEN2_Pos               _U_(23)                                              /**< (CFG_CFGCON0) SLRT Enable for SERCOM2 Position */
#define CFG_CFGCON0_SLRTEN2_Msk               (_U_(0x1) << CFG_CFGCON0_SLRTEN2_Pos)                /**< (CFG_CFGCON0) SLRT Enable for SERCOM2 Mask */
#define CFG_CFGCON0_SLRTEN2(value)            (CFG_CFGCON0_SLRTEN2_Msk & ((value) << CFG_CFGCON0_SLRTEN2_Pos))
#define CFG_CFGCON0_PCM_Pos                   _U_(24)                                              /**< (CFG_CFGCON0) PCHE I/D Cacheable Mode Position */
#define CFG_CFGCON0_PCM_Msk                   (_U_(0x1) << CFG_CFGCON0_PCM_Pos)                    /**< (CFG_CFGCON0) PCHE I/D Cacheable Mode Mask */
#define CFG_CFGCON0_PCM(value)                (CFG_CFGCON0_PCM_Msk & ((value) << CFG_CFGCON0_PCM_Pos))
#define CFG_CFGCON0_INT0E_Pos                 _U_(25)                                              /**< (CFG_CFGCON0) INT0 Enable Position */
#define CFG_CFGCON0_INT0E_Msk                 (_U_(0x1) << CFG_CFGCON0_INT0E_Pos)                  /**< (CFG_CFGCON0) INT0 Enable Mask */
#define CFG_CFGCON0_INT0E(value)              (CFG_CFGCON0_INT0E_Msk & ((value) << CFG_CFGCON0_INT0E_Pos))
#define CFG_CFGCON0_INT0P_Pos                 _U_(26)                                              /**< (CFG_CFGCON0) INT0P Polarity Position */
#define CFG_CFGCON0_INT0P_Msk                 (_U_(0x1) << CFG_CFGCON0_INT0P_Pos)                  /**< (CFG_CFGCON0) INT0P Polarity Mask */
#define CFG_CFGCON0_INT0P(value)              (CFG_CFGCON0_INT0P_Msk & ((value) << CFG_CFGCON0_INT0P_Pos))
#define CFG_CFGCON0_FECCCON_Pos               _U_(28)                                              /**< (CFG_CFGCON0) Flash ECC Control Position */
#define CFG_CFGCON0_FECCCON_Msk               (_U_(0x3) << CFG_CFGCON0_FECCCON_Pos)                /**< (CFG_CFGCON0) Flash ECC Control Mask */
#define CFG_CFGCON0_FECCCON(value)            (CFG_CFGCON0_FECCCON_Msk & ((value) << CFG_CFGCON0_FECCCON_Pos))
#define CFG_CFGCON0_FRECCDIS_Pos              _U_(30)                                              /**< (CFG_CFGCON0) Flex RAM ECC Control Position */
#define CFG_CFGCON0_FRECCDIS_Msk              (_U_(0x1) << CFG_CFGCON0_FRECCDIS_Pos)               /**< (CFG_CFGCON0) Flex RAM ECC Control Mask */
#define CFG_CFGCON0_FRECCDIS(value)           (CFG_CFGCON0_FRECCDIS_Msk & ((value) << CFG_CFGCON0_FRECCDIS_Pos))
#define CFG_CFGCON0_Msk                       _U_(0x77FFFFDF)                                      /**< (CFG_CFGCON0) Register Mask  */

#define CFG_CFGCON0_SMBUSEN_Pos               _U_(17)                                              /**< (CFG_CFGCON0 Position) SMBus Enable for SERCOMx */
#define CFG_CFGCON0_SMBUSEN_Msk               (_U_(0x7) << CFG_CFGCON0_SMBUSEN_Pos)                /**< (CFG_CFGCON0 Mask) SMBUSEN */
#define CFG_CFGCON0_SMBUSEN(value)            (CFG_CFGCON0_SMBUSEN_Msk & ((value) << CFG_CFGCON0_SMBUSEN_Pos)) 
#define CFG_CFGCON0_SLRTEN_Pos                _U_(21)                                              /**< (CFG_CFGCON0 Position) SLRT Enable for SERCOMx */
#define CFG_CFGCON0_SLRTEN_Msk                (_U_(0x7) << CFG_CFGCON0_SLRTEN_Pos)                 /**< (CFG_CFGCON0 Mask) SLRTEN */
#define CFG_CFGCON0_SLRTEN(value)             (CFG_CFGCON0_SLRTEN_Msk & ((value) << CFG_CFGCON0_SLRTEN_Pos)) 

/* -------- CFG_CFGCON1 : (CFG Offset: 0x10) (R/W 32)  -------- */
#define CFG_CFGCON1_RESETVALUE                _U_(0x1F00443B)                                      /**<  (CFG_CFGCON1)   Reset Value */

#define CFG_CFGCON1_DEBUG_Pos                 _U_(0)                                               /**< (CFG_CFGCON1) Background Debugger Access Selection Position */
#define CFG_CFGCON1_DEBUG_Msk                 (_U_(0x3) << CFG_CFGCON1_DEBUG_Pos)                  /**< (CFG_CFGCON1) Background Debugger Access Selection Mask */
#define CFG_CFGCON1_DEBUG(value)              (CFG_CFGCON1_DEBUG_Msk & ((value) << CFG_CFGCON1_DEBUG_Pos))
#define CFG_CFGCON1_ICESEL_Pos                _U_(3)                                               /**< (CFG_CFGCON1) EMUC/EMUD Communication Channel Select Position */
#define CFG_CFGCON1_ICESEL_Msk                (_U_(0x3) << CFG_CFGCON1_ICESEL_Pos)                 /**< (CFG_CFGCON1) EMUC/EMUD Communication Channel Select Mask */
#define CFG_CFGCON1_ICESEL(value)             (CFG_CFGCON1_ICESEL_Msk & ((value) << CFG_CFGCON1_ICESEL_Pos))
#define CFG_CFGCON1_TRCEN_Pos                 _U_(5)                                               /**< (CFG_CFGCON1) Trace Enable Position */
#define CFG_CFGCON1_TRCEN_Msk                 (_U_(0x1) << CFG_CFGCON1_TRCEN_Pos)                  /**< (CFG_CFGCON1) Trace Enable Mask */
#define CFG_CFGCON1_TRCEN(value)              (CFG_CFGCON1_TRCEN_Msk & ((value) << CFG_CFGCON1_TRCEN_Pos))
#define CFG_CFGCON1_ZBTWKSYS_Pos              _U_(7)                                               /**< (CFG_CFGCON1) ZBT Subsystem External Wake-up source Position */
#define CFG_CFGCON1_ZBTWKSYS_Msk              (_U_(0x1) << CFG_CFGCON1_ZBTWKSYS_Pos)               /**< (CFG_CFGCON1) ZBT Subsystem External Wake-up source Mask */
#define CFG_CFGCON1_ZBTWKSYS(value)           (CFG_CFGCON1_ZBTWKSYS_Msk & ((value) << CFG_CFGCON1_ZBTWKSYS_Pos))
#define CFG_CFGCON1_CMP0_OE_Pos               _U_(8)                                               /**< (CFG_CFGCON1) Analog Comparator-0 Output Enable Position */
#define CFG_CFGCON1_CMP0_OE_Msk               (_U_(0x1) << CFG_CFGCON1_CMP0_OE_Pos)                /**< (CFG_CFGCON1) Analog Comparator-0 Output Enable Mask */
#define CFG_CFGCON1_CMP0_OE(value)            (CFG_CFGCON1_CMP0_OE_Msk & ((value) << CFG_CFGCON1_CMP0_OE_Pos))
#define CFG_CFGCON1_CMP1_OE_Pos               _U_(9)                                               /**< (CFG_CFGCON1) Analog Comparator-1 Output Enable Position */
#define CFG_CFGCON1_CMP1_OE_Msk               (_U_(0x1) << CFG_CFGCON1_CMP1_OE_Pos)                /**< (CFG_CFGCON1) Analog Comparator-1 Output Enable Mask */
#define CFG_CFGCON1_CMP1_OE(value)            (CFG_CFGCON1_CMP1_OE_Msk & ((value) << CFG_CFGCON1_CMP1_OE_Pos))
#define CFG_CFGCON1_CLASSBDIS_Pos             _U_(10)                                              /**< (CFG_CFGCON1) Disable CLASSB Device Functionality Position */
#define CFG_CFGCON1_CLASSBDIS_Msk             (_U_(0x1) << CFG_CFGCON1_CLASSBDIS_Pos)              /**< (CFG_CFGCON1) Disable CLASSB Device Functionality Mask */
#define CFG_CFGCON1_CLASSBDIS(value)          (CFG_CFGCON1_CLASSBDIS_Msk & ((value) << CFG_CFGCON1_CLASSBDIS_Pos))
#define CFG_CFGCON1_SLRCTRL0_Pos              _U_(11)                                              /**< (CFG_CFGCON1) I2C Slew Rate Control for SERCOM0 Position */
#define CFG_CFGCON1_SLRCTRL0_Msk              (_U_(0x1) << CFG_CFGCON1_SLRCTRL0_Pos)               /**< (CFG_CFGCON1) I2C Slew Rate Control for SERCOM0 Mask */
#define CFG_CFGCON1_SLRCTRL0(value)           (CFG_CFGCON1_SLRCTRL0_Msk & ((value) << CFG_CFGCON1_SLRCTRL0_Pos))
#define CFG_CFGCON1_SLRCTRL1_Pos              _U_(12)                                              /**< (CFG_CFGCON1) I2C Slew Rate Control for SERCOM1 Position */
#define CFG_CFGCON1_SLRCTRL1_Msk              (_U_(0x1) << CFG_CFGCON1_SLRCTRL1_Pos)               /**< (CFG_CFGCON1) I2C Slew Rate Control for SERCOM1 Mask */
#define CFG_CFGCON1_SLRCTRL1(value)           (CFG_CFGCON1_SLRCTRL1_Msk & ((value) << CFG_CFGCON1_SLRCTRL1_Pos))
#define CFG_CFGCON1_SLRCTRL2_Pos              _U_(13)                                              /**< (CFG_CFGCON1) I2C Slew Rate Control for SERCOM2 Position */
#define CFG_CFGCON1_SLRCTRL2_Msk              (_U_(0x1) << CFG_CFGCON1_SLRCTRL2_Pos)               /**< (CFG_CFGCON1) I2C Slew Rate Control for SERCOM2 Mask */
#define CFG_CFGCON1_SLRCTRL2(value)           (CFG_CFGCON1_SLRCTRL2_Msk & ((value) << CFG_CFGCON1_SLRCTRL2_Pos))
#define CFG_CFGCON1_SMCLR_Pos                 _U_(14)                                              /**< (CFG_CFGCON1) Selects CRU handling of MCLR Control Position */
#define CFG_CFGCON1_SMCLR_Msk                 (_U_(0x1) << CFG_CFGCON1_SMCLR_Pos)                  /**< (CFG_CFGCON1) Selects CRU handling of MCLR Control Mask */
#define CFG_CFGCON1_SMCLR(value)              (CFG_CFGCON1_SMCLR_Msk & ((value) << CFG_CFGCON1_SMCLR_Pos))
#define CFG_CFGCON1_QSCHE_EN_Pos              _U_(15)                                              /**< (CFG_CFGCON1) QSPI Address Space Cache Attribute Position */
#define CFG_CFGCON1_QSCHE_EN_Msk              (_U_(0x1) << CFG_CFGCON1_QSCHE_EN_Pos)               /**< (CFG_CFGCON1) QSPI Address Space Cache Attribute Mask */
#define CFG_CFGCON1_QSCHE_EN(value)           (CFG_CFGCON1_QSCHE_EN_Msk & ((value) << CFG_CFGCON1_QSCHE_EN_Pos))
#define CFG_CFGCON1_QSPI_HSEN_Pos             _U_(16)                                              /**< (CFG_CFGCON1) QSPI (Direct) Enable Position */
#define CFG_CFGCON1_QSPI_HSEN_Msk             (_U_(0x1) << CFG_CFGCON1_QSPI_HSEN_Pos)              /**< (CFG_CFGCON1) QSPI (Direct) Enable Mask */
#define CFG_CFGCON1_QSPI_HSEN(value)          (CFG_CFGCON1_QSPI_HSEN_Msk & ((value) << CFG_CFGCON1_QSPI_HSEN_Pos))
#define CFG_CFGCON1_SCOM0_HSEN_Pos            _U_(17)                                              /**< (CFG_CFGCON1) SERCOM0 (Direct)High Speed Pin Enable Position */
#define CFG_CFGCON1_SCOM0_HSEN_Msk            (_U_(0x1) << CFG_CFGCON1_SCOM0_HSEN_Pos)             /**< (CFG_CFGCON1) SERCOM0 (Direct)High Speed Pin Enable Mask */
#define CFG_CFGCON1_SCOM0_HSEN(value)         (CFG_CFGCON1_SCOM0_HSEN_Msk & ((value) << CFG_CFGCON1_SCOM0_HSEN_Pos))
#define CFG_CFGCON1_SCOM1_HSEN_Pos            _U_(18)                                              /**< (CFG_CFGCON1) SERCOM1 (Direct)High Speed Pin Enable Position */
#define CFG_CFGCON1_SCOM1_HSEN_Msk            (_U_(0x1) << CFG_CFGCON1_SCOM1_HSEN_Pos)             /**< (CFG_CFGCON1) SERCOM1 (Direct)High Speed Pin Enable Mask */
#define CFG_CFGCON1_SCOM1_HSEN(value)         (CFG_CFGCON1_SCOM1_HSEN_Msk & ((value) << CFG_CFGCON1_SCOM1_HSEN_Pos))
#define CFG_CFGCON1_SCOM2_HSEN_Pos            _U_(19)                                              /**< (CFG_CFGCON1) SERCOM2 (Direct)High Speed Pin Enable Position */
#define CFG_CFGCON1_SCOM2_HSEN_Msk            (_U_(0x1) << CFG_CFGCON1_SCOM2_HSEN_Pos)             /**< (CFG_CFGCON1) SERCOM2 (Direct)High Speed Pin Enable Mask */
#define CFG_CFGCON1_SCOM2_HSEN(value)         (CFG_CFGCON1_SCOM2_HSEN_Msk & ((value) << CFG_CFGCON1_SCOM2_HSEN_Pos))
#define CFG_CFGCON1_CCL_OE_Pos                _U_(20)                                              /**< (CFG_CFGCON1) CCL Pads (via PPS) Output Enable Position */
#define CFG_CFGCON1_CCL_OE_Msk                (_U_(0x1) << CFG_CFGCON1_CCL_OE_Pos)                 /**< (CFG_CFGCON1) CCL Pads (via PPS) Output Enable Mask */
#define CFG_CFGCON1_CCL_OE(value)             (CFG_CFGCON1_CCL_OE_Msk & ((value) << CFG_CFGCON1_CCL_OE_Pos))
#define CFG_CFGCON1_I2CDSEL0_Pos              _U_(21)                                              /**< (CFG_CFGCON1) I2C Delay Select for SERCOM0 Position */
#define CFG_CFGCON1_I2CDSEL0_Msk              (_U_(0x1) << CFG_CFGCON1_I2CDSEL0_Pos)               /**< (CFG_CFGCON1) I2C Delay Select for SERCOM0 Mask */
#define CFG_CFGCON1_I2CDSEL0(value)           (CFG_CFGCON1_I2CDSEL0_Msk & ((value) << CFG_CFGCON1_I2CDSEL0_Pos))
#define CFG_CFGCON1_I2CDSEL1_Pos              _U_(22)                                              /**< (CFG_CFGCON1) I2C Delay Select for SERCOM1 Position */
#define CFG_CFGCON1_I2CDSEL1_Msk              (_U_(0x1) << CFG_CFGCON1_I2CDSEL1_Pos)               /**< (CFG_CFGCON1) I2C Delay Select for SERCOM1 Mask */
#define CFG_CFGCON1_I2CDSEL1(value)           (CFG_CFGCON1_I2CDSEL1_Msk & ((value) << CFG_CFGCON1_I2CDSEL1_Pos))
#define CFG_CFGCON1_I2CDSEL2_Pos              _U_(23)                                              /**< (CFG_CFGCON1) I2C Delay Select for SERCOM2 Position */
#define CFG_CFGCON1_I2CDSEL2_Msk              (_U_(0x1) << CFG_CFGCON1_I2CDSEL2_Pos)               /**< (CFG_CFGCON1) I2C Delay Select for SERCOM2 Mask */
#define CFG_CFGCON1_I2CDSEL2(value)           (CFG_CFGCON1_I2CDSEL2_Msk & ((value) << CFG_CFGCON1_I2CDSEL2_Pos))
#define CFG_CFGCON1_WDTPSS_Pos                _U_(24)                                              /**< (CFG_CFGCON1) Watchdog Timer Post-scale Select Sleep Position */
#define CFG_CFGCON1_WDTPSS_Msk                (_U_(0x1F) << CFG_CFGCON1_WDTPSS_Pos)                /**< (CFG_CFGCON1) Watchdog Timer Post-scale Select Sleep Mask */
#define CFG_CFGCON1_WDTPSS(value)             (CFG_CFGCON1_WDTPSS_Msk & ((value) << CFG_CFGCON1_WDTPSS_Pos))
#define CFG_CFGCON1_QSPIDDRM_Pos              _U_(29)                                              /**< (CFG_CFGCON1) QSPI DDR Mode Clock Enable Position */
#define CFG_CFGCON1_QSPIDDRM_Msk              (_U_(0x1) << CFG_CFGCON1_QSPIDDRM_Pos)               /**< (CFG_CFGCON1) QSPI DDR Mode Clock Enable Mask */
#define CFG_CFGCON1_QSPIDDRM(value)           (CFG_CFGCON1_QSPIDDRM_Msk & ((value) << CFG_CFGCON1_QSPIDDRM_Pos))
#define CFG_CFGCON1_CLKZBREF_Pos              _U_(30)                                              /**< (CFG_CFGCON1) External Reference Clock ZB Enable Position */
#define CFG_CFGCON1_CLKZBREF_Msk              (_U_(0x1) << CFG_CFGCON1_CLKZBREF_Pos)               /**< (CFG_CFGCON1) External Reference Clock ZB Enable Mask */
#define CFG_CFGCON1_CLKZBREF(value)           (CFG_CFGCON1_CLKZBREF_Msk & ((value) << CFG_CFGCON1_CLKZBREF_Pos))
#define CFG_CFGCON1_Msk                       _U_(0x7FFFFFBB)                                      /**< (CFG_CFGCON1) Register Mask  */

#define CFG_CFGCON1_SLRCTRL_Pos               _U_(11)                                              /**< (CFG_CFGCON1 Position) I2C Slew Rate Control for SERCOMx */
#define CFG_CFGCON1_SLRCTRL_Msk               (_U_(0x7) << CFG_CFGCON1_SLRCTRL_Pos)                /**< (CFG_CFGCON1 Mask) SLRCTRL */
#define CFG_CFGCON1_SLRCTRL(value)            (CFG_CFGCON1_SLRCTRL_Msk & ((value) << CFG_CFGCON1_SLRCTRL_Pos)) 
#define CFG_CFGCON1_I2CDSEL_Pos               _U_(21)                                              /**< (CFG_CFGCON1 Position) I2C Delay Select for SERCOMx */
#define CFG_CFGCON1_I2CDSEL_Msk               (_U_(0x7) << CFG_CFGCON1_I2CDSEL_Pos)                /**< (CFG_CFGCON1 Mask) I2CDSEL */
#define CFG_CFGCON1_I2CDSEL(value)            (CFG_CFGCON1_I2CDSEL_Msk & ((value) << CFG_CFGCON1_I2CDSEL_Pos)) 

/* -------- CFG_CFGCON2 : (CFG Offset: 0x20) (R/W 32)  -------- */
#define CFG_CFGCON2_RESETVALUE                _U_(0x7F7FFF38)                                      /**<  (CFG_CFGCON2)   Reset Value */

#define CFG_CFGCON2_ACMP_CYCLE_Pos            _U_(0)                                               /**< (CFG_CFGCON2) AC SIB Comparator Result Wait Cycles Position */
#define CFG_CFGCON2_ACMP_CYCLE_Msk            (_U_(0x7) << CFG_CFGCON2_ACMP_CYCLE_Pos)             /**< (CFG_CFGCON2) AC SIB Comparator Result Wait Cycles Mask */
#define CFG_CFGCON2_ACMP_CYCLE(value)         (CFG_CFGCON2_ACMP_CYCLE_Msk & ((value) << CFG_CFGCON2_ACMP_CYCLE_Pos))
#define CFG_CFGCON2_DMTINTV_Pos               _U_(3)                                               /**< (CFG_CFGCON2) Dead Man Timer Count Window Interval Position */
#define CFG_CFGCON2_DMTINTV_Msk               (_U_(0x7) << CFG_CFGCON2_DMTINTV_Pos)                /**< (CFG_CFGCON2) Dead Man Timer Count Window Interval Mask */
#define CFG_CFGCON2_DMTINTV(value)            (CFG_CFGCON2_DMTINTV_Msk & ((value) << CFG_CFGCON2_DMTINTV_Pos))
#define CFG_CFGCON2_PMUTEST_VDD_EN_Pos        _U_(7)                                               /**< (CFG_CFGCON2) PMU Test Output or VDD/2 Enable via ADC IE12 Position */
#define CFG_CFGCON2_PMUTEST_VDD_EN_Msk        (_U_(0x1) << CFG_CFGCON2_PMUTEST_VDD_EN_Pos)         /**< (CFG_CFGCON2) PMU Test Output or VDD/2 Enable via ADC IE12 Mask */
#define CFG_CFGCON2_PMUTEST_VDD_EN(value)     (CFG_CFGCON2_PMUTEST_VDD_EN_Msk & ((value) << CFG_CFGCON2_PMUTEST_VDD_EN_Pos))
#define CFG_CFGCON2_POSCMOD_Pos               _U_(8)                                               /**< (CFG_CFGCON2) Primary Oscillator Configuration Position */
#define CFG_CFGCON2_POSCMOD_Msk               (_U_(0x3) << CFG_CFGCON2_POSCMOD_Pos)                /**< (CFG_CFGCON2) Primary Oscillator Configuration Mask */
#define CFG_CFGCON2_POSCMOD(value)            (CFG_CFGCON2_POSCMOD_Msk & ((value) << CFG_CFGCON2_POSCMOD_Pos))
#define CFG_CFGCON2_WDTRMCS_Pos               _U_(10)                                              /**< (CFG_CFGCON2) WDT RUN Mode Clock Select Position */
#define CFG_CFGCON2_WDTRMCS_Msk               (_U_(0x3) << CFG_CFGCON2_WDTRMCS_Pos)                /**< (CFG_CFGCON2) WDT RUN Mode Clock Select Mask */
#define CFG_CFGCON2_WDTRMCS(value)            (CFG_CFGCON2_WDTRMCS_Msk & ((value) << CFG_CFGCON2_WDTRMCS_Pos))
#define CFG_CFGCON2_SOSCSEL_Pos               _U_(12)                                              /**< (CFG_CFGCON2) SOSC Selection Configuration Position */
#define CFG_CFGCON2_SOSCSEL_Msk               (_U_(0x1) << CFG_CFGCON2_SOSCSEL_Pos)                /**< (CFG_CFGCON2) SOSC Selection Configuration Mask */
#define CFG_CFGCON2_SOSCSEL(value)            (CFG_CFGCON2_SOSCSEL_Msk & ((value) << CFG_CFGCON2_SOSCSEL_Pos))
#define CFG_CFGCON2_WAKE2SPD_Pos              _U_(13)                                              /**< (CFG_CFGCON2) 2-Speed startup enabled in Sleep mode Position */
#define CFG_CFGCON2_WAKE2SPD_Msk              (_U_(0x1) << CFG_CFGCON2_WAKE2SPD_Pos)               /**< (CFG_CFGCON2) 2-Speed startup enabled in Sleep mode Mask */
#define CFG_CFGCON2_WAKE2SPD(value)           (CFG_CFGCON2_WAKE2SPD_Msk & ((value) << CFG_CFGCON2_WAKE2SPD_Pos))
#define CFG_CFGCON2_CKSWEN_Pos                _U_(14)                                              /**< (CFG_CFGCON2) Software Clock Switching Enable Position */
#define CFG_CFGCON2_CKSWEN_Msk                (_U_(0x1) << CFG_CFGCON2_CKSWEN_Pos)                 /**< (CFG_CFGCON2) Software Clock Switching Enable Mask */
#define CFG_CFGCON2_CKSWEN(value)             (CFG_CFGCON2_CKSWEN_Msk & ((value) << CFG_CFGCON2_CKSWEN_Pos))
#define CFG_CFGCON2_FSCMEN_Pos                _U_(15)                                              /**< (CFG_CFGCON2) Fail-Safe Clock Monitor Enable Position */
#define CFG_CFGCON2_FSCMEN_Msk                (_U_(0x1) << CFG_CFGCON2_FSCMEN_Pos)                 /**< (CFG_CFGCON2) Fail-Safe Clock Monitor Enable Mask */
#define CFG_CFGCON2_FSCMEN(value)             (CFG_CFGCON2_FSCMEN_Msk & ((value) << CFG_CFGCON2_FSCMEN_Pos))
#define CFG_CFGCON2_WDTPSR_Pos                _U_(16)                                              /**< (CFG_CFGCON2) Watchdog Timer Post-scale Select Run Position */
#define CFG_CFGCON2_WDTPSR_Msk                (_U_(0x1F) << CFG_CFGCON2_WDTPSR_Pos)                /**< (CFG_CFGCON2) Watchdog Timer Post-scale Select Run Mask */
#define CFG_CFGCON2_WDTPSR(value)             (CFG_CFGCON2_WDTPSR_Msk & ((value) << CFG_CFGCON2_WDTPSR_Pos))
#define CFG_CFGCON2_WDTSPGM_Pos               _U_(21)                                              /**< (CFG_CFGCON2) Watchdog Timer Stop during Flash Programming Position */
#define CFG_CFGCON2_WDTSPGM_Msk               (_U_(0x1) << CFG_CFGCON2_WDTSPGM_Pos)                /**< (CFG_CFGCON2) Watchdog Timer Stop during Flash Programming Mask */
#define CFG_CFGCON2_WDTSPGM(value)            (CFG_CFGCON2_WDTSPGM_Msk & ((value) << CFG_CFGCON2_WDTSPGM_Pos))
#define CFG_CFGCON2_WINDIS_Pos                _U_(22)                                              /**< (CFG_CFGCON2) Windowed Watchdog Timer Disable Position */
#define CFG_CFGCON2_WINDIS_Msk                (_U_(0x1) << CFG_CFGCON2_WINDIS_Pos)                 /**< (CFG_CFGCON2) Windowed Watchdog Timer Disable Mask */
#define CFG_CFGCON2_WINDIS(value)             (CFG_CFGCON2_WINDIS_Msk & ((value) << CFG_CFGCON2_WINDIS_Pos))
#define CFG_CFGCON2_WDTEN_Pos                 _U_(23)                                              /**< (CFG_CFGCON2) Watchdog Timer Enable Position */
#define CFG_CFGCON2_WDTEN_Msk                 (_U_(0x1) << CFG_CFGCON2_WDTEN_Pos)                  /**< (CFG_CFGCON2) Watchdog Timer Enable Mask */
#define CFG_CFGCON2_WDTEN(value)              (CFG_CFGCON2_WDTEN_Msk & ((value) << CFG_CFGCON2_WDTEN_Pos))
#define CFG_CFGCON2_WDTWINSZ_Pos              _U_(24)                                              /**< (CFG_CFGCON2) Watchdog Timer Window Size Position */
#define CFG_CFGCON2_WDTWINSZ_Msk              (_U_(0x3) << CFG_CFGCON2_WDTWINSZ_Pos)               /**< (CFG_CFGCON2) Watchdog Timer Window Size Mask */
#define CFG_CFGCON2_WDTWINSZ(value)           (CFG_CFGCON2_WDTWINSZ_Msk & ((value) << CFG_CFGCON2_WDTWINSZ_Pos))
#define CFG_CFGCON2_DMTCNT_Pos                _U_(26)                                              /**< (CFG_CFGCON2) Dead Man Timer Count Select Position */
#define CFG_CFGCON2_DMTCNT_Msk                (_U_(0x1F) << CFG_CFGCON2_DMTCNT_Pos)                /**< (CFG_CFGCON2) Dead Man Timer Count Select Mask */
#define CFG_CFGCON2_DMTCNT(value)             (CFG_CFGCON2_DMTCNT_Msk & ((value) << CFG_CFGCON2_DMTCNT_Pos))
#define CFG_CFGCON2_DMTEN_Pos                 _U_(31)                                              /**< (CFG_CFGCON2) Dead Man Timer Enable Position */
#define CFG_CFGCON2_DMTEN_Msk                 (_U_(0x1) << CFG_CFGCON2_DMTEN_Pos)                  /**< (CFG_CFGCON2) Dead Man Timer Enable Mask */
#define CFG_CFGCON2_DMTEN(value)              (CFG_CFGCON2_DMTEN_Msk & ((value) << CFG_CFGCON2_DMTEN_Pos))
#define CFG_CFGCON2_Msk                       _U_(0xFFFFFFBF)                                      /**< (CFG_CFGCON2) Register Mask  */


/* -------- CFG_CFGCON4 : (CFG Offset: 0x40) (R/W 32)  -------- */
#define CFG_CFGCON4_RESETVALUE                _U_(0x840E4000)                                      /**<  (CFG_CFGCON4)   Reset Value */

#define CFG_CFGCON4_SOSCCFG_Pos               _U_(0)                                               /**< (CFG_CFGCON4) SOSC Configuration Position */
#define CFG_CFGCON4_SOSCCFG_Msk               (_U_(0xFF) << CFG_CFGCON4_SOSCCFG_Pos)               /**< (CFG_CFGCON4) SOSC Configuration Mask */
#define CFG_CFGCON4_SOSCCFG(value)            (CFG_CFGCON4_SOSCCFG_Msk & ((value) << CFG_CFGCON4_SOSCCFG_Pos))
#define CFG_CFGCON4_RTCEVENT_SEL_Pos          _U_(8)                                               /**< (CFG_CFGCON4) RTC Event Selection Position */
#define CFG_CFGCON4_RTCEVENT_SEL_Msk          (_U_(0x3) << CFG_CFGCON4_RTCEVENT_SEL_Pos)           /**< (CFG_CFGCON4) RTC Event Selection Mask */
#define CFG_CFGCON4_RTCEVENT_SEL(value)       (CFG_CFGCON4_RTCEVENT_SEL_Msk & ((value) << CFG_CFGCON4_RTCEVENT_SEL_Pos))
#define CFG_CFGCON4_RTCEVENT_EN_Pos           _U_(10)                                              /**< (CFG_CFGCON4) Pad Output Enable for MCHP legacy RTC event output Position */
#define CFG_CFGCON4_RTCEVENT_EN_Msk           (_U_(0x1) << CFG_CFGCON4_RTCEVENT_EN_Pos)            /**< (CFG_CFGCON4) Pad Output Enable for MCHP legacy RTC event output Mask */
#define CFG_CFGCON4_RTCEVENT_EN(value)        (CFG_CFGCON4_RTCEVENT_EN_Msk & ((value) << CFG_CFGCON4_RTCEVENT_EN_Pos))
#define CFG_CFGCON4_VBKP_1KCSEL_Pos           _U_(11)                                              /**< (CFG_CFGCON4) VDDBUKPCORE LPCLK Clock Selection Position */
#define CFG_CFGCON4_VBKP_1KCSEL_Msk           (_U_(0x1) << CFG_CFGCON4_VBKP_1KCSEL_Pos)            /**< (CFG_CFGCON4) VDDBUKPCORE LPCLK Clock Selection Mask */
#define CFG_CFGCON4_VBKP_1KCSEL(value)        (CFG_CFGCON4_VBKP_1KCSEL_Msk & ((value) << CFG_CFGCON4_VBKP_1KCSEL_Pos))
#define CFG_CFGCON4_VBKP_32KCSEL_Pos          _U_(12)                                              /**< (CFG_CFGCON4) VDDBUKPCORE 32KHz clock source selection Position */
#define CFG_CFGCON4_VBKP_32KCSEL_Msk          (_U_(0x3) << CFG_CFGCON4_VBKP_32KCSEL_Pos)           /**< (CFG_CFGCON4) VDDBUKPCORE 32KHz clock source selection Mask */
#define CFG_CFGCON4_VBKP_32KCSEL(value)       (CFG_CFGCON4_VBKP_32KCSEL_Msk & ((value) << CFG_CFGCON4_VBKP_32KCSEL_Pos))
#define CFG_CFGCON4_VBKP_DIVSEL_Pos           _U_(14)                                              /**< (CFG_CFGCON4) VDDBUKPCORE LPCLK Clock Divider Selection Position */
#define CFG_CFGCON4_VBKP_DIVSEL_Msk           (_U_(0x1) << CFG_CFGCON4_VBKP_DIVSEL_Pos)            /**< (CFG_CFGCON4) VDDBUKPCORE LPCLK Clock Divider Selection Mask */
#define CFG_CFGCON4_VBKP_DIVSEL(value)        (CFG_CFGCON4_VBKP_DIVSEL_Msk & ((value) << CFG_CFGCON4_VBKP_DIVSEL_Pos))
#define CFG_CFGCON4_LPCLK_MOD_Pos             _U_(15)                                              /**< (CFG_CFGCON4) LPCLK modifier in counter/delay mode Position */
#define CFG_CFGCON4_LPCLK_MOD_Msk             (_U_(0x1) << CFG_CFGCON4_LPCLK_MOD_Pos)              /**< (CFG_CFGCON4) LPCLK modifier in counter/delay mode Mask */
#define CFG_CFGCON4_LPCLK_MOD(value)          (CFG_CFGCON4_LPCLK_MOD_Msk & ((value) << CFG_CFGCON4_LPCLK_MOD_Pos))
#define CFG_CFGCON4_RTCEFTYPE_Pos             _U_(16)                                              /**< (CFG_CFGCON4) RTC Event Type Position */
#define CFG_CFGCON4_RTCEFTYPE_Msk             (_U_(0x1) << CFG_CFGCON4_RTCEFTYPE_Pos)              /**< (CFG_CFGCON4) RTC Event Type Mask */
#define CFG_CFGCON4_RTCEFTYPE(value)          (CFG_CFGCON4_RTCEFTYPE_Msk & ((value) << CFG_CFGCON4_RTCEFTYPE_Pos))
#define CFG_CFGCON4_CPEN_DLY_Pos              _U_(17)                                              /**< (CFG_CFGCON4) Charge-pump ready digital delay Position */
#define CFG_CFGCON4_CPEN_DLY_Msk              (_U_(0x7) << CFG_CFGCON4_CPEN_DLY_Pos)               /**< (CFG_CFGCON4) Charge-pump ready digital delay Mask */
#define CFG_CFGCON4_CPEN_DLY(value)           (CFG_CFGCON4_CPEN_DLY_Msk & ((value) << CFG_CFGCON4_CPEN_DLY_Pos))
#define CFG_CFGCON4_DSZPBOREN_Pos             _U_(20)                                              /**< (CFG_CFGCON4) Deep Sleep Zero-Power BOR Enable Position */
#define CFG_CFGCON4_DSZPBOREN_Msk             (_U_(0x1) << CFG_CFGCON4_DSZPBOREN_Pos)              /**< (CFG_CFGCON4) Deep Sleep Zero-Power BOR Enable Mask */
#define CFG_CFGCON4_DSZPBOREN(value)          (CFG_CFGCON4_DSZPBOREN_Msk & ((value) << CFG_CFGCON4_DSZPBOREN_Pos))
#define CFG_CFGCON4_DSWDTPS_Pos               _U_(21)                                              /**< (CFG_CFGCON4) Deep Sleep Watchdog Timer Postscale Select Position */
#define CFG_CFGCON4_DSWDTPS_Msk               (_U_(0x1F) << CFG_CFGCON4_DSWDTPS_Pos)               /**< (CFG_CFGCON4) Deep Sleep Watchdog Timer Postscale Select Mask */
#define CFG_CFGCON4_DSWDTPS(value)            (CFG_CFGCON4_DSWDTPS_Msk & ((value) << CFG_CFGCON4_DSWDTPS_Pos))
#define CFG_CFGCON4_DSWDTOSC_Pos              _U_(26)                                              /**< (CFG_CFGCON4) Deep Sleep Watchdog Timer Reference Clock Select Position */
#define CFG_CFGCON4_DSWDTOSC_Msk              (_U_(0x1) << CFG_CFGCON4_DSWDTOSC_Pos)               /**< (CFG_CFGCON4) Deep Sleep Watchdog Timer Reference Clock Select Mask */
#define CFG_CFGCON4_DSWDTOSC(value)           (CFG_CFGCON4_DSWDTOSC_Msk & ((value) << CFG_CFGCON4_DSWDTOSC_Pos))
#define CFG_CFGCON4_DSWDTEN_Pos               _U_(27)                                              /**< (CFG_CFGCON4) Deep Sleep Watchdog Timer Enable Position */
#define CFG_CFGCON4_DSWDTEN_Msk               (_U_(0x1) << CFG_CFGCON4_DSWDTEN_Pos)                /**< (CFG_CFGCON4) Deep Sleep Watchdog Timer Enable Mask */
#define CFG_CFGCON4_DSWDTEN(value)            (CFG_CFGCON4_DSWDTEN_Msk & ((value) << CFG_CFGCON4_DSWDTEN_Pos))
#define CFG_CFGCON4_DSEN_Pos                  _U_(28)                                              /**< (CFG_CFGCON4) Deep Sleep Bit Enable Position */
#define CFG_CFGCON4_DSEN_Msk                  (_U_(0x1) << CFG_CFGCON4_DSEN_Pos)                   /**< (CFG_CFGCON4) Deep Sleep Bit Enable Mask */
#define CFG_CFGCON4_DSEN(value)               (CFG_CFGCON4_DSEN_Msk & ((value) << CFG_CFGCON4_DSEN_Pos))
#define CFG_CFGCON4_UVREGROVR_Pos             _U_(29)                                              /**< (CFG_CFGCON4) ULPVREG Retention Mode Override Position */
#define CFG_CFGCON4_UVREGROVR_Msk             (_U_(0x1) << CFG_CFGCON4_UVREGROVR_Pos)              /**< (CFG_CFGCON4) ULPVREG Retention Mode Override Mask */
#define CFG_CFGCON4_UVREGROVR(value)          (CFG_CFGCON4_UVREGROVR_Msk & ((value) << CFG_CFGCON4_UVREGROVR_Pos))
#define CFG_CFGCON4_LPOSCEN_Pos               _U_(30)                                              /**< (CFG_CFGCON4) Low Power (Secondary) Oscillator Enable Position */
#define CFG_CFGCON4_LPOSCEN_Msk               (_U_(0x1) << CFG_CFGCON4_LPOSCEN_Pos)                /**< (CFG_CFGCON4) Low Power (Secondary) Oscillator Enable Mask */
#define CFG_CFGCON4_LPOSCEN(value)            (CFG_CFGCON4_LPOSCEN_Msk & ((value) << CFG_CFGCON4_LPOSCEN_Pos))
#define CFG_CFGCON4_RTCNTM_CSEL_Pos           _U_(31)                                              /**< (CFG_CFGCON4) RTC Counter Mode Clock Select Position */
#define CFG_CFGCON4_RTCNTM_CSEL_Msk           (_U_(0x1) << CFG_CFGCON4_RTCNTM_CSEL_Pos)            /**< (CFG_CFGCON4) RTC Counter Mode Clock Select Mask */
#define CFG_CFGCON4_RTCNTM_CSEL(value)        (CFG_CFGCON4_RTCNTM_CSEL_Msk & ((value) << CFG_CFGCON4_RTCNTM_CSEL_Pos))
#define CFG_CFGCON4_Msk                       _U_(0xFFFFFFFF)                                      /**< (CFG_CFGCON4) Register Mask  */


/* -------- CFG_CFGPGQOS : (CFG Offset: 0x50) (R/W 32)  -------- */
#define CFG_CFGPGQOS_RESETVALUE               _U_(0xE040004C)                                      /**<  (CFG_CFGPGQOS)   Reset Value */

#define CFG_CFGPGQOS_CPUPG_Pos                _U_(0)                                               /**< (CFG_CFGPGQOS) CPU (Code) Permission Group Position */
#define CFG_CFGPGQOS_CPUPG_Msk                (_U_(0x3) << CFG_CFGPGQOS_CPUPG_Pos)                 /**< (CFG_CFGPGQOS) CPU (Code) Permission Group Mask */
#define CFG_CFGPGQOS_CPUPG(value)             (CFG_CFGPGQOS_CPUPG_Msk & ((value) << CFG_CFGPGQOS_CPUPG_Pos))
#define CFG_CFGPGQOS_CPUQOS_Pos               _U_(2)                                               /**< (CFG_CFGPGQOS) CPU I/D and System Bus QOS Control Position */
#define CFG_CFGPGQOS_CPUQOS_Msk               (_U_(0x3) << CFG_CFGPGQOS_CPUQOS_Pos)                /**< (CFG_CFGPGQOS) CPU I/D and System Bus QOS Control Mask */
#define CFG_CFGPGQOS_CPUQOS(value)            (CFG_CFGPGQOS_CPUQOS_Msk & ((value) << CFG_CFGPGQOS_CPUQOS_Pos))
#define CFG_CFGPGQOS_ICDJPG_Pos               _U_(4)                                               /**< (CFG_CFGPGQOS) ICD-JTAG Permission Group Position */
#define CFG_CFGPGQOS_ICDJPG_Msk               (_U_(0x3) << CFG_CFGPGQOS_ICDJPG_Pos)                /**< (CFG_CFGPGQOS) ICD-JTAG Permission Group Mask */
#define CFG_CFGPGQOS_ICDJPG(value)            (CFG_CFGPGQOS_ICDJPG_Msk & ((value) << CFG_CFGPGQOS_ICDJPG_Pos))
#define CFG_CFGPGQOS_ICDJQOS_Pos              _U_(6)                                               /**< (CFG_CFGPGQOS) ICD-JTAG Bus QOS Control Position */
#define CFG_CFGPGQOS_ICDJQOS_Msk              (_U_(0x3) << CFG_CFGPGQOS_ICDJQOS_Pos)               /**< (CFG_CFGPGQOS) ICD-JTAG Bus QOS Control Mask */
#define CFG_CFGPGQOS_ICDJQOS(value)           (CFG_CFGPGQOS_ICDJQOS_Msk & ((value) << CFG_CFGPGQOS_ICDJQOS_Pos))
#define CFG_CFGPGQOS_DMAPG_Pos                _U_(8)                                               /**< (CFG_CFGPGQOS) DMA (Rd/Wr) Permission Group Position */
#define CFG_CFGPGQOS_DMAPG_Msk                (_U_(0x3) << CFG_CFGPGQOS_DMAPG_Pos)                 /**< (CFG_CFGPGQOS) DMA (Rd/Wr) Permission Group Mask */
#define CFG_CFGPGQOS_DMAPG(value)             (CFG_CFGPGQOS_DMAPG_Msk & ((value) << CFG_CFGPGQOS_DMAPG_Pos))
#define CFG_CFGPGQOS_ADCPG_Pos                _U_(16)                                              /**< (CFG_CFGPGQOS) ADC Controller Permission Group Position */
#define CFG_CFGPGQOS_ADCPG_Msk                (_U_(0x3) << CFG_CFGPGQOS_ADCPG_Pos)                 /**< (CFG_CFGPGQOS) ADC Controller Permission Group Mask */
#define CFG_CFGPGQOS_ADCPG(value)             (CFG_CFGPGQOS_ADCPG_Msk & ((value) << CFG_CFGPGQOS_ADCPG_Pos))
#define CFG_CFGPGQOS_ADCQOS_Pos               _U_(18)                                              /**< (CFG_CFGPGQOS) ADC Controller QOS Control Position */
#define CFG_CFGPGQOS_ADCQOS_Msk               (_U_(0x3) << CFG_CFGPGQOS_ADCQOS_Pos)                /**< (CFG_CFGPGQOS) ADC Controller QOS Control Mask */
#define CFG_CFGPGQOS_ADCQOS(value)            (CFG_CFGPGQOS_ADCQOS_Msk & ((value) << CFG_CFGPGQOS_ADCQOS_Pos))
#define CFG_CFGPGQOS_ICMPG_Pos                _U_(20)                                              /**< (CFG_CFGPGQOS) ICM Permission Group Position */
#define CFG_CFGPGQOS_ICMPG_Msk                (_U_(0x3) << CFG_CFGPGQOS_ICMPG_Pos)                 /**< (CFG_CFGPGQOS) ICM Permission Group Mask */
#define CFG_CFGPGQOS_ICMPG(value)             (CFG_CFGPGQOS_ICMPG_Msk & ((value) << CFG_CFGPGQOS_ICMPG_Pos))
#define CFG_CFGPGQOS_ICMQOS_Pos               _U_(22)                                              /**< (CFG_CFGPGQOS) ICM QOS Control Position */
#define CFG_CFGPGQOS_ICMQOS_Msk               (_U_(0x3) << CFG_CFGPGQOS_ICMQOS_Pos)                /**< (CFG_CFGPGQOS) ICM QOS Control Mask */
#define CFG_CFGPGQOS_ICMQOS(value)            (CFG_CFGPGQOS_ICMQOS_Msk & ((value) << CFG_CFGPGQOS_ICMQOS_Pos))
#define CFG_CFGPGQOS_DSUPG_Pos                _U_(24)                                              /**< (CFG_CFGPGQOS) DSU Permission Group Position */
#define CFG_CFGPGQOS_DSUPG_Msk                (_U_(0x3) << CFG_CFGPGQOS_DSUPG_Pos)                 /**< (CFG_CFGPGQOS) DSU Permission Group Mask */
#define CFG_CFGPGQOS_DSUPG(value)             (CFG_CFGPGQOS_DSUPG_Msk & ((value) << CFG_CFGPGQOS_DSUPG_Pos))
#define CFG_CFGPGQOS_FCQOS_Pos                _U_(28)                                              /**< (CFG_CFGPGQOS) FC Controller QOS Control Position */
#define CFG_CFGPGQOS_FCQOS_Msk                (_U_(0x3) << CFG_CFGPGQOS_FCQOS_Pos)                 /**< (CFG_CFGPGQOS) FC Controller QOS Control Mask */
#define CFG_CFGPGQOS_FCQOS(value)             (CFG_CFGPGQOS_FCQOS_Msk & ((value) << CFG_CFGPGQOS_FCQOS_Pos))
#define CFG_CFGPGQOS_WISIBQOS_Pos             _U_(30)                                              /**< (CFG_CFGPGQOS) Wireless SIB QOS Control Position */
#define CFG_CFGPGQOS_WISIBQOS_Msk             (_U_(0x3) << CFG_CFGPGQOS_WISIBQOS_Pos)              /**< (CFG_CFGPGQOS) Wireless SIB QOS Control Mask */
#define CFG_CFGPGQOS_WISIBQOS(value)          (CFG_CFGPGQOS_WISIBQOS_Msk & ((value) << CFG_CFGPGQOS_WISIBQOS_Pos))
#define CFG_CFGPGQOS_Msk                      _U_(0xF3FF03FF)                                      /**< (CFG_CFGPGQOS) Register Mask  */


/* -------- CFG_CFGPCLKGEN1 : (CFG Offset: 0x60) (R/W 32)  -------- */
#define CFG_CFGPCLKGEN1_RESETVALUE            _U_(0x00)                                            /**<  (CFG_CFGPCLKGEN1)   Reset Value */

#define CFG_CFGPCLKGEN1_EICCSEL_Pos           _U_(0)                                               /**< (CFG_CFGPCLKGEN1) EIC Clock Selection Position */
#define CFG_CFGPCLKGEN1_EICCSEL_Msk           (_U_(0x7) << CFG_CFGPCLKGEN1_EICCSEL_Pos)            /**< (CFG_CFGPCLKGEN1) EIC Clock Selection Mask */
#define CFG_CFGPCLKGEN1_EICCSEL(value)        (CFG_CFGPCLKGEN1_EICCSEL_Msk & ((value) << CFG_CFGPCLKGEN1_EICCSEL_Pos))
#define   CFG_CFGPCLKGEN1_EICCSEL_NO_CLK_Val  _U_(0x0)                                             /**< (CFG_CFGPCLKGEN1) No Clock  */
#define   CFG_CFGPCLKGEN1_EICCSEL_REFO1_Val   _U_(0x1)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 1  */
#define   CFG_CFGPCLKGEN1_EICCSEL_REFO2_Val   _U_(0x2)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 2  */
#define   CFG_CFGPCLKGEN1_EICCSEL_REFO3_Val   _U_(0x3)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 3  */
#define   CFG_CFGPCLKGEN1_EICCSEL_REFO4_Val   _U_(0x4)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 4  */
#define   CFG_CFGPCLKGEN1_EICCSEL_REFO5_Val   _U_(0x5)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 5  */
#define   CFG_CFGPCLKGEN1_EICCSEL_REFO6_Val   _U_(0x6)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 6  */
#define   CFG_CFGPCLKGEN1_EICCSEL_LPCLK_Val   _U_(0x7)                                             /**< (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN1_EICCSEL_NO_CLK        (CFG_CFGPCLKGEN1_EICCSEL_NO_CLK_Val << CFG_CFGPCLKGEN1_EICCSEL_Pos) /**< (CFG_CFGPCLKGEN1) No Clock Position  */
#define CFG_CFGPCLKGEN1_EICCSEL_REFO1         (CFG_CFGPCLKGEN1_EICCSEL_REFO1_Val << CFG_CFGPCLKGEN1_EICCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN1_EICCSEL_REFO2         (CFG_CFGPCLKGEN1_EICCSEL_REFO2_Val << CFG_CFGPCLKGEN1_EICCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN1_EICCSEL_REFO3         (CFG_CFGPCLKGEN1_EICCSEL_REFO3_Val << CFG_CFGPCLKGEN1_EICCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN1_EICCSEL_REFO4         (CFG_CFGPCLKGEN1_EICCSEL_REFO4_Val << CFG_CFGPCLKGEN1_EICCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN1_EICCSEL_REFO5         (CFG_CFGPCLKGEN1_EICCSEL_REFO5_Val << CFG_CFGPCLKGEN1_EICCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN1_EICCSEL_REFO6         (CFG_CFGPCLKGEN1_EICCSEL_REFO6_Val << CFG_CFGPCLKGEN1_EICCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN1_EICCSEL_LPCLK         (CFG_CFGPCLKGEN1_EICCSEL_LPCLK_Val << CFG_CFGPCLKGEN1_EICCSEL_Pos) /**< (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN1_EICCD_Pos             _U_(3)                                               /**< (CFG_CFGPCLKGEN1) EIC Clock Disable Position */
#define CFG_CFGPCLKGEN1_EICCD_Msk             (_U_(0x1) << CFG_CFGPCLKGEN1_EICCD_Pos)              /**< (CFG_CFGPCLKGEN1) EIC Clock Disable Mask */
#define CFG_CFGPCLKGEN1_EICCD(value)          (CFG_CFGPCLKGEN1_EICCD_Msk & ((value) << CFG_CFGPCLKGEN1_EICCD_Pos))
#define   CFG_CFGPCLKGEN1_EICCD_ON_Val        _U_(0x1)                                             /**< (CFG_CFGPCLKGEN1) Enable PGCLK  */
#define   CFG_CFGPCLKGEN1_EICCD_OFF_Val       _U_(0x0)                                             /**< (CFG_CFGPCLKGEN1) Disable PGCLK  */
#define CFG_CFGPCLKGEN1_EICCD_ON              (CFG_CFGPCLKGEN1_EICCD_ON_Val << CFG_CFGPCLKGEN1_EICCD_Pos) /**< (CFG_CFGPCLKGEN1) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN1_EICCD_OFF             (CFG_CFGPCLKGEN1_EICCD_OFF_Val << CFG_CFGPCLKGEN1_EICCD_Pos) /**< (CFG_CFGPCLKGEN1) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN1_FREQMRCSEL_Pos        _U_(4)                                               /**< (CFG_CFGPCLKGEN1) FREQMRC Clock Selection Position */
#define CFG_CFGPCLKGEN1_FREQMRCSEL_Msk        (_U_(0x7) << CFG_CFGPCLKGEN1_FREQMRCSEL_Pos)         /**< (CFG_CFGPCLKGEN1) FREQMRC Clock Selection Mask */
#define CFG_CFGPCLKGEN1_FREQMRCSEL(value)     (CFG_CFGPCLKGEN1_FREQMRCSEL_Msk & ((value) << CFG_CFGPCLKGEN1_FREQMRCSEL_Pos))
#define   CFG_CFGPCLKGEN1_FREQMRCSEL_NO_CLK_Val _U_(0x0)                                             /**< (CFG_CFGPCLKGEN1) No Clock  */
#define   CFG_CFGPCLKGEN1_FREQMRCSEL_REFO1_Val _U_(0x1)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 1  */
#define   CFG_CFGPCLKGEN1_FREQMRCSEL_REFO2_Val _U_(0x2)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 2  */
#define   CFG_CFGPCLKGEN1_FREQMRCSEL_REFO3_Val _U_(0x3)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 3  */
#define   CFG_CFGPCLKGEN1_FREQMRCSEL_REFO4_Val _U_(0x4)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 4  */
#define   CFG_CFGPCLKGEN1_FREQMRCSEL_REFO5_Val _U_(0x5)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 5  */
#define   CFG_CFGPCLKGEN1_FREQMRCSEL_REFO6_Val _U_(0x6)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 6  */
#define   CFG_CFGPCLKGEN1_FREQMRCSEL_LPCLK_Val _U_(0x7)                                             /**< (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN1_FREQMRCSEL_NO_CLK     (CFG_CFGPCLKGEN1_FREQMRCSEL_NO_CLK_Val << CFG_CFGPCLKGEN1_FREQMRCSEL_Pos) /**< (CFG_CFGPCLKGEN1) No Clock Position  */
#define CFG_CFGPCLKGEN1_FREQMRCSEL_REFO1      (CFG_CFGPCLKGEN1_FREQMRCSEL_REFO1_Val << CFG_CFGPCLKGEN1_FREQMRCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN1_FREQMRCSEL_REFO2      (CFG_CFGPCLKGEN1_FREQMRCSEL_REFO2_Val << CFG_CFGPCLKGEN1_FREQMRCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN1_FREQMRCSEL_REFO3      (CFG_CFGPCLKGEN1_FREQMRCSEL_REFO3_Val << CFG_CFGPCLKGEN1_FREQMRCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN1_FREQMRCSEL_REFO4      (CFG_CFGPCLKGEN1_FREQMRCSEL_REFO4_Val << CFG_CFGPCLKGEN1_FREQMRCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN1_FREQMRCSEL_REFO5      (CFG_CFGPCLKGEN1_FREQMRCSEL_REFO5_Val << CFG_CFGPCLKGEN1_FREQMRCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN1_FREQMRCSEL_REFO6      (CFG_CFGPCLKGEN1_FREQMRCSEL_REFO6_Val << CFG_CFGPCLKGEN1_FREQMRCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN1_FREQMRCSEL_LPCLK      (CFG_CFGPCLKGEN1_FREQMRCSEL_LPCLK_Val << CFG_CFGPCLKGEN1_FREQMRCSEL_Pos) /**< (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN1_RCD_Pos               _U_(7)                                               /**< (CFG_CFGPCLKGEN1) FREQMRC Clock Disable Position */
#define CFG_CFGPCLKGEN1_RCD_Msk               (_U_(0x1) << CFG_CFGPCLKGEN1_RCD_Pos)                /**< (CFG_CFGPCLKGEN1) FREQMRC Clock Disable Mask */
#define CFG_CFGPCLKGEN1_RCD(value)            (CFG_CFGPCLKGEN1_RCD_Msk & ((value) << CFG_CFGPCLKGEN1_RCD_Pos))
#define   CFG_CFGPCLKGEN1_RCD_ON_Val          _U_(0x1)                                             /**< (CFG_CFGPCLKGEN1) Enable PGCLK  */
#define   CFG_CFGPCLKGEN1_RCD_OFF_Val         _U_(0x0)                                             /**< (CFG_CFGPCLKGEN1) Disable PGCLK  */
#define CFG_CFGPCLKGEN1_RCD_ON                (CFG_CFGPCLKGEN1_RCD_ON_Val << CFG_CFGPCLKGEN1_RCD_Pos) /**< (CFG_CFGPCLKGEN1) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN1_RCD_OFF               (CFG_CFGPCLKGEN1_RCD_OFF_Val << CFG_CFGPCLKGEN1_RCD_Pos) /**< (CFG_CFGPCLKGEN1) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN1_FREQMMCSEL_Pos        _U_(8)                                               /**< (CFG_CFGPCLKGEN1) FREQMMC Clock Selection Position */
#define CFG_CFGPCLKGEN1_FREQMMCSEL_Msk        (_U_(0x7) << CFG_CFGPCLKGEN1_FREQMMCSEL_Pos)         /**< (CFG_CFGPCLKGEN1) FREQMMC Clock Selection Mask */
#define CFG_CFGPCLKGEN1_FREQMMCSEL(value)     (CFG_CFGPCLKGEN1_FREQMMCSEL_Msk & ((value) << CFG_CFGPCLKGEN1_FREQMMCSEL_Pos))
#define   CFG_CFGPCLKGEN1_FREQMMCSEL_NO_CLK_Val _U_(0x0)                                             /**< (CFG_CFGPCLKGEN1) No Clock  */
#define   CFG_CFGPCLKGEN1_FREQMMCSEL_REFO1_Val _U_(0x1)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 1  */
#define   CFG_CFGPCLKGEN1_FREQMMCSEL_REFO2_Val _U_(0x2)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 2  */
#define   CFG_CFGPCLKGEN1_FREQMMCSEL_REFO3_Val _U_(0x3)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 3  */
#define   CFG_CFGPCLKGEN1_FREQMMCSEL_REFO4_Val _U_(0x4)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 4  */
#define   CFG_CFGPCLKGEN1_FREQMMCSEL_REFO5_Val _U_(0x5)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 5  */
#define   CFG_CFGPCLKGEN1_FREQMMCSEL_REFO6_Val _U_(0x6)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 6  */
#define   CFG_CFGPCLKGEN1_FREQMMCSEL_LPCLK_Val _U_(0x7)                                             /**< (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN1_FREQMMCSEL_NO_CLK     (CFG_CFGPCLKGEN1_FREQMMCSEL_NO_CLK_Val << CFG_CFGPCLKGEN1_FREQMMCSEL_Pos) /**< (CFG_CFGPCLKGEN1) No Clock Position  */
#define CFG_CFGPCLKGEN1_FREQMMCSEL_REFO1      (CFG_CFGPCLKGEN1_FREQMMCSEL_REFO1_Val << CFG_CFGPCLKGEN1_FREQMMCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN1_FREQMMCSEL_REFO2      (CFG_CFGPCLKGEN1_FREQMMCSEL_REFO2_Val << CFG_CFGPCLKGEN1_FREQMMCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN1_FREQMMCSEL_REFO3      (CFG_CFGPCLKGEN1_FREQMMCSEL_REFO3_Val << CFG_CFGPCLKGEN1_FREQMMCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN1_FREQMMCSEL_REFO4      (CFG_CFGPCLKGEN1_FREQMMCSEL_REFO4_Val << CFG_CFGPCLKGEN1_FREQMMCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN1_FREQMMCSEL_REFO5      (CFG_CFGPCLKGEN1_FREQMMCSEL_REFO5_Val << CFG_CFGPCLKGEN1_FREQMMCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN1_FREQMMCSEL_REFO6      (CFG_CFGPCLKGEN1_FREQMMCSEL_REFO6_Val << CFG_CFGPCLKGEN1_FREQMMCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN1_FREQMMCSEL_LPCLK      (CFG_CFGPCLKGEN1_FREQMMCSEL_LPCLK_Val << CFG_CFGPCLKGEN1_FREQMMCSEL_Pos) /**< (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN1_MCD_Pos               _U_(11)                                              /**< (CFG_CFGPCLKGEN1) FREQMMC Clock Disable Position */
#define CFG_CFGPCLKGEN1_MCD_Msk               (_U_(0x1) << CFG_CFGPCLKGEN1_MCD_Pos)                /**< (CFG_CFGPCLKGEN1) FREQMMC Clock Disable Mask */
#define CFG_CFGPCLKGEN1_MCD(value)            (CFG_CFGPCLKGEN1_MCD_Msk & ((value) << CFG_CFGPCLKGEN1_MCD_Pos))
#define   CFG_CFGPCLKGEN1_MCD_ON_Val          _U_(0x1)                                             /**< (CFG_CFGPCLKGEN1) Enable PGCLK  */
#define   CFG_CFGPCLKGEN1_MCD_OFF_Val         _U_(0x0)                                             /**< (CFG_CFGPCLKGEN1) Disable PGCLK  */
#define CFG_CFGPCLKGEN1_MCD_ON                (CFG_CFGPCLKGEN1_MCD_ON_Val << CFG_CFGPCLKGEN1_MCD_Pos) /**< (CFG_CFGPCLKGEN1) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN1_MCD_OFF               (CFG_CFGPCLKGEN1_MCD_OFF_Val << CFG_CFGPCLKGEN1_MCD_Pos) /**< (CFG_CFGPCLKGEN1) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN1_SERCOM01CSEL_Pos      _U_(12)                                              /**< (CFG_CFGPCLKGEN1) SERCOM0/1 Clock Selection Position */
#define CFG_CFGPCLKGEN1_SERCOM01CSEL_Msk      (_U_(0x7) << CFG_CFGPCLKGEN1_SERCOM01CSEL_Pos)       /**< (CFG_CFGPCLKGEN1) SERCOM0/1 Clock Selection Mask */
#define CFG_CFGPCLKGEN1_SERCOM01CSEL(value)   (CFG_CFGPCLKGEN1_SERCOM01CSEL_Msk & ((value) << CFG_CFGPCLKGEN1_SERCOM01CSEL_Pos))
#define   CFG_CFGPCLKGEN1_SERCOM01CSEL_NO_CLK_Val _U_(0x0)                                             /**< (CFG_CFGPCLKGEN1) No Clock  */
#define   CFG_CFGPCLKGEN1_SERCOM01CSEL_REFO1_Val _U_(0x1)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 1  */
#define   CFG_CFGPCLKGEN1_SERCOM01CSEL_REFO2_Val _U_(0x2)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 2  */
#define   CFG_CFGPCLKGEN1_SERCOM01CSEL_REFO3_Val _U_(0x3)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 3  */
#define   CFG_CFGPCLKGEN1_SERCOM01CSEL_REFO4_Val _U_(0x4)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 4  */
#define   CFG_CFGPCLKGEN1_SERCOM01CSEL_REFO5_Val _U_(0x5)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 5  */
#define   CFG_CFGPCLKGEN1_SERCOM01CSEL_REFO6_Val _U_(0x6)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 6  */
#define   CFG_CFGPCLKGEN1_SERCOM01CSEL_LPCLK_Val _U_(0x7)                                             /**< (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN1_SERCOM01CSEL_NO_CLK   (CFG_CFGPCLKGEN1_SERCOM01CSEL_NO_CLK_Val << CFG_CFGPCLKGEN1_SERCOM01CSEL_Pos) /**< (CFG_CFGPCLKGEN1) No Clock Position  */
#define CFG_CFGPCLKGEN1_SERCOM01CSEL_REFO1    (CFG_CFGPCLKGEN1_SERCOM01CSEL_REFO1_Val << CFG_CFGPCLKGEN1_SERCOM01CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN1_SERCOM01CSEL_REFO2    (CFG_CFGPCLKGEN1_SERCOM01CSEL_REFO2_Val << CFG_CFGPCLKGEN1_SERCOM01CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN1_SERCOM01CSEL_REFO3    (CFG_CFGPCLKGEN1_SERCOM01CSEL_REFO3_Val << CFG_CFGPCLKGEN1_SERCOM01CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN1_SERCOM01CSEL_REFO4    (CFG_CFGPCLKGEN1_SERCOM01CSEL_REFO4_Val << CFG_CFGPCLKGEN1_SERCOM01CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN1_SERCOM01CSEL_REFO5    (CFG_CFGPCLKGEN1_SERCOM01CSEL_REFO5_Val << CFG_CFGPCLKGEN1_SERCOM01CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN1_SERCOM01CSEL_REFO6    (CFG_CFGPCLKGEN1_SERCOM01CSEL_REFO6_Val << CFG_CFGPCLKGEN1_SERCOM01CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN1_SERCOM01CSEL_LPCLK    (CFG_CFGPCLKGEN1_SERCOM01CSEL_LPCLK_Val << CFG_CFGPCLKGEN1_SERCOM01CSEL_Pos) /**< (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN1_S01CD_Pos             _U_(15)                                              /**< (CFG_CFGPCLKGEN1) SERCOM0/1 Clock Disable Position */
#define CFG_CFGPCLKGEN1_S01CD_Msk             (_U_(0x1) << CFG_CFGPCLKGEN1_S01CD_Pos)              /**< (CFG_CFGPCLKGEN1) SERCOM0/1 Clock Disable Mask */
#define CFG_CFGPCLKGEN1_S01CD(value)          (CFG_CFGPCLKGEN1_S01CD_Msk & ((value) << CFG_CFGPCLKGEN1_S01CD_Pos))
#define   CFG_CFGPCLKGEN1_S01CD_ON_Val        _U_(0x1)                                             /**< (CFG_CFGPCLKGEN1) Enable PGCLK  */
#define   CFG_CFGPCLKGEN1_S01CD_OFF_Val       _U_(0x0)                                             /**< (CFG_CFGPCLKGEN1) Disable PGCLK  */
#define CFG_CFGPCLKGEN1_S01CD_ON              (CFG_CFGPCLKGEN1_S01CD_ON_Val << CFG_CFGPCLKGEN1_S01CD_Pos) /**< (CFG_CFGPCLKGEN1) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN1_S01CD_OFF             (CFG_CFGPCLKGEN1_S01CD_OFF_Val << CFG_CFGPCLKGEN1_S01CD_Pos) /**< (CFG_CFGPCLKGEN1) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN1_SERCOM23CSEL_Pos      _U_(16)                                              /**< (CFG_CFGPCLKGEN1) SERCOM2/3 Clock Selection Position */
#define CFG_CFGPCLKGEN1_SERCOM23CSEL_Msk      (_U_(0x7) << CFG_CFGPCLKGEN1_SERCOM23CSEL_Pos)       /**< (CFG_CFGPCLKGEN1) SERCOM2/3 Clock Selection Mask */
#define CFG_CFGPCLKGEN1_SERCOM23CSEL(value)   (CFG_CFGPCLKGEN1_SERCOM23CSEL_Msk & ((value) << CFG_CFGPCLKGEN1_SERCOM23CSEL_Pos))
#define   CFG_CFGPCLKGEN1_SERCOM23CSEL_NO_CLK_Val _U_(0x0)                                             /**< (CFG_CFGPCLKGEN1) No Clock  */
#define   CFG_CFGPCLKGEN1_SERCOM23CSEL_REFO1_Val _U_(0x1)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 1  */
#define   CFG_CFGPCLKGEN1_SERCOM23CSEL_REFO2_Val _U_(0x2)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 2  */
#define   CFG_CFGPCLKGEN1_SERCOM23CSEL_REFO3_Val _U_(0x3)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 3  */
#define   CFG_CFGPCLKGEN1_SERCOM23CSEL_REFO4_Val _U_(0x4)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 4  */
#define   CFG_CFGPCLKGEN1_SERCOM23CSEL_REFO5_Val _U_(0x5)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 5  */
#define   CFG_CFGPCLKGEN1_SERCOM23CSEL_REFO6_Val _U_(0x6)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 6  */
#define   CFG_CFGPCLKGEN1_SERCOM23CSEL_LPCLK_Val _U_(0x7)                                             /**< (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN1_SERCOM23CSEL_NO_CLK   (CFG_CFGPCLKGEN1_SERCOM23CSEL_NO_CLK_Val << CFG_CFGPCLKGEN1_SERCOM23CSEL_Pos) /**< (CFG_CFGPCLKGEN1) No Clock Position  */
#define CFG_CFGPCLKGEN1_SERCOM23CSEL_REFO1    (CFG_CFGPCLKGEN1_SERCOM23CSEL_REFO1_Val << CFG_CFGPCLKGEN1_SERCOM23CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN1_SERCOM23CSEL_REFO2    (CFG_CFGPCLKGEN1_SERCOM23CSEL_REFO2_Val << CFG_CFGPCLKGEN1_SERCOM23CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN1_SERCOM23CSEL_REFO3    (CFG_CFGPCLKGEN1_SERCOM23CSEL_REFO3_Val << CFG_CFGPCLKGEN1_SERCOM23CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN1_SERCOM23CSEL_REFO4    (CFG_CFGPCLKGEN1_SERCOM23CSEL_REFO4_Val << CFG_CFGPCLKGEN1_SERCOM23CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN1_SERCOM23CSEL_REFO5    (CFG_CFGPCLKGEN1_SERCOM23CSEL_REFO5_Val << CFG_CFGPCLKGEN1_SERCOM23CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN1_SERCOM23CSEL_REFO6    (CFG_CFGPCLKGEN1_SERCOM23CSEL_REFO6_Val << CFG_CFGPCLKGEN1_SERCOM23CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN1_SERCOM23CSEL_LPCLK    (CFG_CFGPCLKGEN1_SERCOM23CSEL_LPCLK_Val << CFG_CFGPCLKGEN1_SERCOM23CSEL_Pos) /**< (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN1_S23CD_Pos             _U_(19)                                              /**< (CFG_CFGPCLKGEN1) SERCOM2/3 Clock Disable Position */
#define CFG_CFGPCLKGEN1_S23CD_Msk             (_U_(0x1) << CFG_CFGPCLKGEN1_S23CD_Pos)              /**< (CFG_CFGPCLKGEN1) SERCOM2/3 Clock Disable Mask */
#define CFG_CFGPCLKGEN1_S23CD(value)          (CFG_CFGPCLKGEN1_S23CD_Msk & ((value) << CFG_CFGPCLKGEN1_S23CD_Pos))
#define   CFG_CFGPCLKGEN1_S23CD_ON_Val        _U_(0x1)                                             /**< (CFG_CFGPCLKGEN1) Enable PGCLK  */
#define   CFG_CFGPCLKGEN1_S23CD_OFF_Val       _U_(0x0)                                             /**< (CFG_CFGPCLKGEN1) Disable PGCLK  */
#define CFG_CFGPCLKGEN1_S23CD_ON              (CFG_CFGPCLKGEN1_S23CD_ON_Val << CFG_CFGPCLKGEN1_S23CD_Pos) /**< (CFG_CFGPCLKGEN1) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN1_S23CD_OFF             (CFG_CFGPCLKGEN1_S23CD_OFF_Val << CFG_CFGPCLKGEN1_S23CD_Pos) /**< (CFG_CFGPCLKGEN1) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN1_TCC12CSEL_Pos         _U_(20)                                              /**< (CFG_CFGPCLKGEN1) TCC1/2 Clock Selection Position */
#define CFG_CFGPCLKGEN1_TCC12CSEL_Msk         (_U_(0x7) << CFG_CFGPCLKGEN1_TCC12CSEL_Pos)          /**< (CFG_CFGPCLKGEN1) TCC1/2 Clock Selection Mask */
#define CFG_CFGPCLKGEN1_TCC12CSEL(value)      (CFG_CFGPCLKGEN1_TCC12CSEL_Msk & ((value) << CFG_CFGPCLKGEN1_TCC12CSEL_Pos))
#define   CFG_CFGPCLKGEN1_TCC12CSEL_NO_CLK_Val _U_(0x0)                                             /**< (CFG_CFGPCLKGEN1) No Clock  */
#define   CFG_CFGPCLKGEN1_TCC12CSEL_REFO1_Val _U_(0x1)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 1  */
#define   CFG_CFGPCLKGEN1_TCC12CSEL_REFO2_Val _U_(0x2)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 2  */
#define   CFG_CFGPCLKGEN1_TCC12CSEL_REFO3_Val _U_(0x3)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 3  */
#define   CFG_CFGPCLKGEN1_TCC12CSEL_REFO4_Val _U_(0x4)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 4  */
#define   CFG_CFGPCLKGEN1_TCC12CSEL_REFO5_Val _U_(0x5)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 5  */
#define   CFG_CFGPCLKGEN1_TCC12CSEL_REFO6_Val _U_(0x6)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 6  */
#define   CFG_CFGPCLKGEN1_TCC12CSEL_LPCLK_Val _U_(0x7)                                             /**< (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN1_TCC12CSEL_NO_CLK      (CFG_CFGPCLKGEN1_TCC12CSEL_NO_CLK_Val << CFG_CFGPCLKGEN1_TCC12CSEL_Pos) /**< (CFG_CFGPCLKGEN1) No Clock Position  */
#define CFG_CFGPCLKGEN1_TCC12CSEL_REFO1       (CFG_CFGPCLKGEN1_TCC12CSEL_REFO1_Val << CFG_CFGPCLKGEN1_TCC12CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN1_TCC12CSEL_REFO2       (CFG_CFGPCLKGEN1_TCC12CSEL_REFO2_Val << CFG_CFGPCLKGEN1_TCC12CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN1_TCC12CSEL_REFO3       (CFG_CFGPCLKGEN1_TCC12CSEL_REFO3_Val << CFG_CFGPCLKGEN1_TCC12CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN1_TCC12CSEL_REFO4       (CFG_CFGPCLKGEN1_TCC12CSEL_REFO4_Val << CFG_CFGPCLKGEN1_TCC12CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN1_TCC12CSEL_REFO5       (CFG_CFGPCLKGEN1_TCC12CSEL_REFO5_Val << CFG_CFGPCLKGEN1_TCC12CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN1_TCC12CSEL_REFO6       (CFG_CFGPCLKGEN1_TCC12CSEL_REFO6_Val << CFG_CFGPCLKGEN1_TCC12CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN1_TCC12CSEL_LPCLK       (CFG_CFGPCLKGEN1_TCC12CSEL_LPCLK_Val << CFG_CFGPCLKGEN1_TCC12CSEL_Pos) /**< (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN1_TCC12CD_Pos           _U_(23)                                              /**< (CFG_CFGPCLKGEN1) TCC1/2 Clock Disable Position */
#define CFG_CFGPCLKGEN1_TCC12CD_Msk           (_U_(0x1) << CFG_CFGPCLKGEN1_TCC12CD_Pos)            /**< (CFG_CFGPCLKGEN1) TCC1/2 Clock Disable Mask */
#define CFG_CFGPCLKGEN1_TCC12CD(value)        (CFG_CFGPCLKGEN1_TCC12CD_Msk & ((value) << CFG_CFGPCLKGEN1_TCC12CD_Pos))
#define   CFG_CFGPCLKGEN1_TCC12CD_ON_Val      _U_(0x1)                                             /**< (CFG_CFGPCLKGEN1) Enable PGCLK  */
#define   CFG_CFGPCLKGEN1_TCC12CD_OFF_Val     _U_(0x0)                                             /**< (CFG_CFGPCLKGEN1) Disable PGCLK  */
#define CFG_CFGPCLKGEN1_TCC12CD_ON            (CFG_CFGPCLKGEN1_TCC12CD_ON_Val << CFG_CFGPCLKGEN1_TCC12CD_Pos) /**< (CFG_CFGPCLKGEN1) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN1_TCC12CD_OFF           (CFG_CFGPCLKGEN1_TCC12CD_OFF_Val << CFG_CFGPCLKGEN1_TCC12CD_Pos) /**< (CFG_CFGPCLKGEN1) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN1_TC23CSEL_Pos          _U_(24)                                              /**< (CFG_CFGPCLKGEN1) TC2/3 Clock Selection Position */
#define CFG_CFGPCLKGEN1_TC23CSEL_Msk          (_U_(0x7) << CFG_CFGPCLKGEN1_TC23CSEL_Pos)           /**< (CFG_CFGPCLKGEN1) TC2/3 Clock Selection Mask */
#define CFG_CFGPCLKGEN1_TC23CSEL(value)       (CFG_CFGPCLKGEN1_TC23CSEL_Msk & ((value) << CFG_CFGPCLKGEN1_TC23CSEL_Pos))
#define   CFG_CFGPCLKGEN1_TC23CSEL_NO_CLK_Val _U_(0x0)                                             /**< (CFG_CFGPCLKGEN1) No Clock  */
#define   CFG_CFGPCLKGEN1_TC23CSEL_REFO1_Val  _U_(0x1)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 1  */
#define   CFG_CFGPCLKGEN1_TC23CSEL_REFO2_Val  _U_(0x2)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 2  */
#define   CFG_CFGPCLKGEN1_TC23CSEL_REFO3_Val  _U_(0x3)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 3  */
#define   CFG_CFGPCLKGEN1_TC23CSEL_REFO4_Val  _U_(0x4)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 4  */
#define   CFG_CFGPCLKGEN1_TC23CSEL_REFO5_Val  _U_(0x5)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 5  */
#define   CFG_CFGPCLKGEN1_TC23CSEL_REFO6_Val  _U_(0x6)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 6  */
#define   CFG_CFGPCLKGEN1_TC23CSEL_LPCLK_Val  _U_(0x7)                                             /**< (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN1_TC23CSEL_NO_CLK       (CFG_CFGPCLKGEN1_TC23CSEL_NO_CLK_Val << CFG_CFGPCLKGEN1_TC23CSEL_Pos) /**< (CFG_CFGPCLKGEN1) No Clock Position  */
#define CFG_CFGPCLKGEN1_TC23CSEL_REFO1        (CFG_CFGPCLKGEN1_TC23CSEL_REFO1_Val << CFG_CFGPCLKGEN1_TC23CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN1_TC23CSEL_REFO2        (CFG_CFGPCLKGEN1_TC23CSEL_REFO2_Val << CFG_CFGPCLKGEN1_TC23CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN1_TC23CSEL_REFO3        (CFG_CFGPCLKGEN1_TC23CSEL_REFO3_Val << CFG_CFGPCLKGEN1_TC23CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN1_TC23CSEL_REFO4        (CFG_CFGPCLKGEN1_TC23CSEL_REFO4_Val << CFG_CFGPCLKGEN1_TC23CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN1_TC23CSEL_REFO5        (CFG_CFGPCLKGEN1_TC23CSEL_REFO5_Val << CFG_CFGPCLKGEN1_TC23CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN1_TC23CSEL_REFO6        (CFG_CFGPCLKGEN1_TC23CSEL_REFO6_Val << CFG_CFGPCLKGEN1_TC23CSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN1_TC23CSEL_LPCLK        (CFG_CFGPCLKGEN1_TC23CSEL_LPCLK_Val << CFG_CFGPCLKGEN1_TC23CSEL_Pos) /**< (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN1_TC23CD_Pos            _U_(27)                                              /**< (CFG_CFGPCLKGEN1) TC2/3 Clock Disable Position */
#define CFG_CFGPCLKGEN1_TC23CD_Msk            (_U_(0x1) << CFG_CFGPCLKGEN1_TC23CD_Pos)             /**< (CFG_CFGPCLKGEN1) TC2/3 Clock Disable Mask */
#define CFG_CFGPCLKGEN1_TC23CD(value)         (CFG_CFGPCLKGEN1_TC23CD_Msk & ((value) << CFG_CFGPCLKGEN1_TC23CD_Pos))
#define   CFG_CFGPCLKGEN1_TC23CD_ON_Val       _U_(0x1)                                             /**< (CFG_CFGPCLKGEN1) Enable PGCLK  */
#define   CFG_CFGPCLKGEN1_TC23CD_OFF_Val      _U_(0x0)                                             /**< (CFG_CFGPCLKGEN1) Disable PGCLK  */
#define CFG_CFGPCLKGEN1_TC23CD_ON             (CFG_CFGPCLKGEN1_TC23CD_ON_Val << CFG_CFGPCLKGEN1_TC23CD_Pos) /**< (CFG_CFGPCLKGEN1) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN1_TC23CD_OFF            (CFG_CFGPCLKGEN1_TC23CD_OFF_Val << CFG_CFGPCLKGEN1_TC23CD_Pos) /**< (CFG_CFGPCLKGEN1) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN1_CM4TCSEL_Pos          _U_(28)                                              /**< (CFG_CFGPCLKGEN1) CM4T Clock Selection Position */
#define CFG_CFGPCLKGEN1_CM4TCSEL_Msk          (_U_(0x7) << CFG_CFGPCLKGEN1_CM4TCSEL_Pos)           /**< (CFG_CFGPCLKGEN1) CM4T Clock Selection Mask */
#define CFG_CFGPCLKGEN1_CM4TCSEL(value)       (CFG_CFGPCLKGEN1_CM4TCSEL_Msk & ((value) << CFG_CFGPCLKGEN1_CM4TCSEL_Pos))
#define   CFG_CFGPCLKGEN1_CM4TCSEL_NO_CLK_Val _U_(0x0)                                             /**< (CFG_CFGPCLKGEN1) No Clock  */
#define   CFG_CFGPCLKGEN1_CM4TCSEL_REFO1_Val  _U_(0x1)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 1  */
#define   CFG_CFGPCLKGEN1_CM4TCSEL_REFO2_Val  _U_(0x2)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 2  */
#define   CFG_CFGPCLKGEN1_CM4TCSEL_REFO3_Val  _U_(0x3)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 3  */
#define   CFG_CFGPCLKGEN1_CM4TCSEL_REFO4_Val  _U_(0x4)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 4  */
#define   CFG_CFGPCLKGEN1_CM4TCSEL_REFO5_Val  _U_(0x5)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 5  */
#define   CFG_CFGPCLKGEN1_CM4TCSEL_REFO6_Val  _U_(0x6)                                             /**< (CFG_CFGPCLKGEN1) Reference Clock 6  */
#define   CFG_CFGPCLKGEN1_CM4TCSEL_LPCLK_Val  _U_(0x7)                                             /**< (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN1_CM4TCSEL_NO_CLK       (CFG_CFGPCLKGEN1_CM4TCSEL_NO_CLK_Val << CFG_CFGPCLKGEN1_CM4TCSEL_Pos) /**< (CFG_CFGPCLKGEN1) No Clock Position  */
#define CFG_CFGPCLKGEN1_CM4TCSEL_REFO1        (CFG_CFGPCLKGEN1_CM4TCSEL_REFO1_Val << CFG_CFGPCLKGEN1_CM4TCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN1_CM4TCSEL_REFO2        (CFG_CFGPCLKGEN1_CM4TCSEL_REFO2_Val << CFG_CFGPCLKGEN1_CM4TCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN1_CM4TCSEL_REFO3        (CFG_CFGPCLKGEN1_CM4TCSEL_REFO3_Val << CFG_CFGPCLKGEN1_CM4TCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN1_CM4TCSEL_REFO4        (CFG_CFGPCLKGEN1_CM4TCSEL_REFO4_Val << CFG_CFGPCLKGEN1_CM4TCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN1_CM4TCSEL_REFO5        (CFG_CFGPCLKGEN1_CM4TCSEL_REFO5_Val << CFG_CFGPCLKGEN1_CM4TCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN1_CM4TCSEL_REFO6        (CFG_CFGPCLKGEN1_CM4TCSEL_REFO6_Val << CFG_CFGPCLKGEN1_CM4TCSEL_Pos) /**< (CFG_CFGPCLKGEN1) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN1_CM4TCSEL_LPCLK        (CFG_CFGPCLKGEN1_CM4TCSEL_LPCLK_Val << CFG_CFGPCLKGEN1_CM4TCSEL_Pos) /**< (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN1_CM4TD_Pos             _U_(31)                                              /**< (CFG_CFGPCLKGEN1) CM4T Clock Disable Position */
#define CFG_CFGPCLKGEN1_CM4TD_Msk             (_U_(0x1) << CFG_CFGPCLKGEN1_CM4TD_Pos)              /**< (CFG_CFGPCLKGEN1) CM4T Clock Disable Mask */
#define CFG_CFGPCLKGEN1_CM4TD(value)          (CFG_CFGPCLKGEN1_CM4TD_Msk & ((value) << CFG_CFGPCLKGEN1_CM4TD_Pos))
#define   CFG_CFGPCLKGEN1_CM4TD_ON_Val        _U_(0x1)                                             /**< (CFG_CFGPCLKGEN1) Enable PGCLK  */
#define   CFG_CFGPCLKGEN1_CM4TD_OFF_Val       _U_(0x0)                                             /**< (CFG_CFGPCLKGEN1) Disable PGCLK  */
#define CFG_CFGPCLKGEN1_CM4TD_ON              (CFG_CFGPCLKGEN1_CM4TD_ON_Val << CFG_CFGPCLKGEN1_CM4TD_Pos) /**< (CFG_CFGPCLKGEN1) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN1_CM4TD_OFF             (CFG_CFGPCLKGEN1_CM4TD_OFF_Val << CFG_CFGPCLKGEN1_CM4TD_Pos) /**< (CFG_CFGPCLKGEN1) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN1_Msk                   _U_(0xFFFFFFFF)                                      /**< (CFG_CFGPCLKGEN1) Register Mask  */


/* -------- CFG_CFGPCLKGEN2 : (CFG Offset: 0x70) (R/W 32)  -------- */
#define CFG_CFGPCLKGEN2_RESETVALUE            _U_(0x00)                                            /**<  (CFG_CFGPCLKGEN2)   Reset Value */

#define CFG_CFGPCLKGEN2_EVSYSC1SEL_Pos        _U_(0)                                               /**< (CFG_CFGPCLKGEN2) EVSYSC1 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN2_EVSYSC1SEL_Msk        (_U_(0x7) << CFG_CFGPCLKGEN2_EVSYSC1SEL_Pos)         /**< (CFG_CFGPCLKGEN2) EVSYSC1 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN2_EVSYSC1SEL(value)     (CFG_CFGPCLKGEN2_EVSYSC1SEL_Msk & ((value) << CFG_CFGPCLKGEN2_EVSYSC1SEL_Pos))
#define   CFG_CFGPCLKGEN2_EVSYSC1SEL_NO_CLK_Val _U_(0x0)                                             /**< (CFG_CFGPCLKGEN2) No Clock  */
#define   CFG_CFGPCLKGEN2_EVSYSC1SEL_REFO1_Val _U_(0x1)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 1  */
#define   CFG_CFGPCLKGEN2_EVSYSC1SEL_REFO2_Val _U_(0x2)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 2  */
#define   CFG_CFGPCLKGEN2_EVSYSC1SEL_REFO3_Val _U_(0x3)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 3  */
#define   CFG_CFGPCLKGEN2_EVSYSC1SEL_REFO4_Val _U_(0x4)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 4  */
#define   CFG_CFGPCLKGEN2_EVSYSC1SEL_REFO5_Val _U_(0x5)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 5  */
#define   CFG_CFGPCLKGEN2_EVSYSC1SEL_REFO6_Val _U_(0x6)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 6  */
#define   CFG_CFGPCLKGEN2_EVSYSC1SEL_LPCLK_Val _U_(0x7)                                             /**< (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN2_EVSYSC1SEL_NO_CLK     (CFG_CFGPCLKGEN2_EVSYSC1SEL_NO_CLK_Val << CFG_CFGPCLKGEN2_EVSYSC1SEL_Pos) /**< (CFG_CFGPCLKGEN2) No Clock Position  */
#define CFG_CFGPCLKGEN2_EVSYSC1SEL_REFO1      (CFG_CFGPCLKGEN2_EVSYSC1SEL_REFO1_Val << CFG_CFGPCLKGEN2_EVSYSC1SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC1SEL_REFO2      (CFG_CFGPCLKGEN2_EVSYSC1SEL_REFO2_Val << CFG_CFGPCLKGEN2_EVSYSC1SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC1SEL_REFO3      (CFG_CFGPCLKGEN2_EVSYSC1SEL_REFO3_Val << CFG_CFGPCLKGEN2_EVSYSC1SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC1SEL_REFO4      (CFG_CFGPCLKGEN2_EVSYSC1SEL_REFO4_Val << CFG_CFGPCLKGEN2_EVSYSC1SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC1SEL_REFO5      (CFG_CFGPCLKGEN2_EVSYSC1SEL_REFO5_Val << CFG_CFGPCLKGEN2_EVSYSC1SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC1SEL_REFO6      (CFG_CFGPCLKGEN2_EVSYSC1SEL_REFO6_Val << CFG_CFGPCLKGEN2_EVSYSC1SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC1SEL_LPCLK      (CFG_CFGPCLKGEN2_EVSYSC1SEL_LPCLK_Val << CFG_CFGPCLKGEN2_EVSYSC1SEL_Pos) /**< (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN2_C1D_Pos               _U_(3)                                               /**< (CFG_CFGPCLKGEN2) EVSYSC1 Clock Disable Position */
#define CFG_CFGPCLKGEN2_C1D_Msk               (_U_(0x1) << CFG_CFGPCLKGEN2_C1D_Pos)                /**< (CFG_CFGPCLKGEN2) EVSYSC1 Clock Disable Mask */
#define CFG_CFGPCLKGEN2_C1D(value)            (CFG_CFGPCLKGEN2_C1D_Msk & ((value) << CFG_CFGPCLKGEN2_C1D_Pos))
#define   CFG_CFGPCLKGEN2_C1D_ON_Val          _U_(0x1)                                             /**< (CFG_CFGPCLKGEN2) Enable PGCLK  */
#define   CFG_CFGPCLKGEN2_C1D_OFF_Val         _U_(0x0)                                             /**< (CFG_CFGPCLKGEN2) Disable PGCLK  */
#define CFG_CFGPCLKGEN2_C1D_ON                (CFG_CFGPCLKGEN2_C1D_ON_Val << CFG_CFGPCLKGEN2_C1D_Pos) /**< (CFG_CFGPCLKGEN2) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN2_C1D_OFF               (CFG_CFGPCLKGEN2_C1D_OFF_Val << CFG_CFGPCLKGEN2_C1D_Pos) /**< (CFG_CFGPCLKGEN2) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN2_EVSYSC2SEL_Pos        _U_(4)                                               /**< (CFG_CFGPCLKGEN2) EVSYSC2 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN2_EVSYSC2SEL_Msk        (_U_(0x7) << CFG_CFGPCLKGEN2_EVSYSC2SEL_Pos)         /**< (CFG_CFGPCLKGEN2) EVSYSC2 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN2_EVSYSC2SEL(value)     (CFG_CFGPCLKGEN2_EVSYSC2SEL_Msk & ((value) << CFG_CFGPCLKGEN2_EVSYSC2SEL_Pos))
#define   CFG_CFGPCLKGEN2_EVSYSC2SEL_NO_CLK_Val _U_(0x0)                                             /**< (CFG_CFGPCLKGEN2) No Clock  */
#define   CFG_CFGPCLKGEN2_EVSYSC2SEL_REFO1_Val _U_(0x1)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 1  */
#define   CFG_CFGPCLKGEN2_EVSYSC2SEL_REFO2_Val _U_(0x2)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 2  */
#define   CFG_CFGPCLKGEN2_EVSYSC2SEL_REFO3_Val _U_(0x3)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 3  */
#define   CFG_CFGPCLKGEN2_EVSYSC2SEL_REFO4_Val _U_(0x4)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 4  */
#define   CFG_CFGPCLKGEN2_EVSYSC2SEL_REFO5_Val _U_(0x5)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 5  */
#define   CFG_CFGPCLKGEN2_EVSYSC2SEL_REFO6_Val _U_(0x6)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 6  */
#define   CFG_CFGPCLKGEN2_EVSYSC2SEL_LPCLK_Val _U_(0x7)                                             /**< (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN2_EVSYSC2SEL_NO_CLK     (CFG_CFGPCLKGEN2_EVSYSC2SEL_NO_CLK_Val << CFG_CFGPCLKGEN2_EVSYSC2SEL_Pos) /**< (CFG_CFGPCLKGEN2) No Clock Position  */
#define CFG_CFGPCLKGEN2_EVSYSC2SEL_REFO1      (CFG_CFGPCLKGEN2_EVSYSC2SEL_REFO1_Val << CFG_CFGPCLKGEN2_EVSYSC2SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC2SEL_REFO2      (CFG_CFGPCLKGEN2_EVSYSC2SEL_REFO2_Val << CFG_CFGPCLKGEN2_EVSYSC2SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC2SEL_REFO3      (CFG_CFGPCLKGEN2_EVSYSC2SEL_REFO3_Val << CFG_CFGPCLKGEN2_EVSYSC2SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC2SEL_REFO4      (CFG_CFGPCLKGEN2_EVSYSC2SEL_REFO4_Val << CFG_CFGPCLKGEN2_EVSYSC2SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC2SEL_REFO5      (CFG_CFGPCLKGEN2_EVSYSC2SEL_REFO5_Val << CFG_CFGPCLKGEN2_EVSYSC2SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC2SEL_REFO6      (CFG_CFGPCLKGEN2_EVSYSC2SEL_REFO6_Val << CFG_CFGPCLKGEN2_EVSYSC2SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC2SEL_LPCLK      (CFG_CFGPCLKGEN2_EVSYSC2SEL_LPCLK_Val << CFG_CFGPCLKGEN2_EVSYSC2SEL_Pos) /**< (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN2_C2D_Pos               _U_(7)                                               /**< (CFG_CFGPCLKGEN2) EVSYSC2 Clock Disable Position */
#define CFG_CFGPCLKGEN2_C2D_Msk               (_U_(0x1) << CFG_CFGPCLKGEN2_C2D_Pos)                /**< (CFG_CFGPCLKGEN2) EVSYSC2 Clock Disable Mask */
#define CFG_CFGPCLKGEN2_C2D(value)            (CFG_CFGPCLKGEN2_C2D_Msk & ((value) << CFG_CFGPCLKGEN2_C2D_Pos))
#define   CFG_CFGPCLKGEN2_C2D_ON_Val          _U_(0x1)                                             /**< (CFG_CFGPCLKGEN2) Enable PGCLK  */
#define   CFG_CFGPCLKGEN2_C2D_OFF_Val         _U_(0x0)                                             /**< (CFG_CFGPCLKGEN2) Disable PGCLK  */
#define CFG_CFGPCLKGEN2_C2D_ON                (CFG_CFGPCLKGEN2_C2D_ON_Val << CFG_CFGPCLKGEN2_C2D_Pos) /**< (CFG_CFGPCLKGEN2) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN2_C2D_OFF               (CFG_CFGPCLKGEN2_C2D_OFF_Val << CFG_CFGPCLKGEN2_C2D_Pos) /**< (CFG_CFGPCLKGEN2) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN2_EVSYSC3SEL_Pos        _U_(8)                                               /**< (CFG_CFGPCLKGEN2) EVSYSC3 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN2_EVSYSC3SEL_Msk        (_U_(0x7) << CFG_CFGPCLKGEN2_EVSYSC3SEL_Pos)         /**< (CFG_CFGPCLKGEN2) EVSYSC3 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN2_EVSYSC3SEL(value)     (CFG_CFGPCLKGEN2_EVSYSC3SEL_Msk & ((value) << CFG_CFGPCLKGEN2_EVSYSC3SEL_Pos))
#define   CFG_CFGPCLKGEN2_EVSYSC3SEL_NO_CLK_Val _U_(0x0)                                             /**< (CFG_CFGPCLKGEN2) No Clock  */
#define   CFG_CFGPCLKGEN2_EVSYSC3SEL_REFO1_Val _U_(0x1)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 1  */
#define   CFG_CFGPCLKGEN2_EVSYSC3SEL_REFO2_Val _U_(0x2)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 2  */
#define   CFG_CFGPCLKGEN2_EVSYSC3SEL_REFO3_Val _U_(0x3)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 3  */
#define   CFG_CFGPCLKGEN2_EVSYSC3SEL_REFO4_Val _U_(0x4)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 4  */
#define   CFG_CFGPCLKGEN2_EVSYSC3SEL_REFO5_Val _U_(0x5)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 5  */
#define   CFG_CFGPCLKGEN2_EVSYSC3SEL_REFO6_Val _U_(0x6)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 6  */
#define   CFG_CFGPCLKGEN2_EVSYSC3SEL_LPCLK_Val _U_(0x7)                                             /**< (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN2_EVSYSC3SEL_NO_CLK     (CFG_CFGPCLKGEN2_EVSYSC3SEL_NO_CLK_Val << CFG_CFGPCLKGEN2_EVSYSC3SEL_Pos) /**< (CFG_CFGPCLKGEN2) No Clock Position  */
#define CFG_CFGPCLKGEN2_EVSYSC3SEL_REFO1      (CFG_CFGPCLKGEN2_EVSYSC3SEL_REFO1_Val << CFG_CFGPCLKGEN2_EVSYSC3SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC3SEL_REFO2      (CFG_CFGPCLKGEN2_EVSYSC3SEL_REFO2_Val << CFG_CFGPCLKGEN2_EVSYSC3SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC3SEL_REFO3      (CFG_CFGPCLKGEN2_EVSYSC3SEL_REFO3_Val << CFG_CFGPCLKGEN2_EVSYSC3SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC3SEL_REFO4      (CFG_CFGPCLKGEN2_EVSYSC3SEL_REFO4_Val << CFG_CFGPCLKGEN2_EVSYSC3SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC3SEL_REFO5      (CFG_CFGPCLKGEN2_EVSYSC3SEL_REFO5_Val << CFG_CFGPCLKGEN2_EVSYSC3SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC3SEL_REFO6      (CFG_CFGPCLKGEN2_EVSYSC3SEL_REFO6_Val << CFG_CFGPCLKGEN2_EVSYSC3SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC3SEL_LPCLK      (CFG_CFGPCLKGEN2_EVSYSC3SEL_LPCLK_Val << CFG_CFGPCLKGEN2_EVSYSC3SEL_Pos) /**< (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN2_C3D_Pos               _U_(11)                                              /**< (CFG_CFGPCLKGEN2) EVSYSC3 Clock Disable Position */
#define CFG_CFGPCLKGEN2_C3D_Msk               (_U_(0x1) << CFG_CFGPCLKGEN2_C3D_Pos)                /**< (CFG_CFGPCLKGEN2) EVSYSC3 Clock Disable Mask */
#define CFG_CFGPCLKGEN2_C3D(value)            (CFG_CFGPCLKGEN2_C3D_Msk & ((value) << CFG_CFGPCLKGEN2_C3D_Pos))
#define   CFG_CFGPCLKGEN2_C3D_ON_Val          _U_(0x1)                                             /**< (CFG_CFGPCLKGEN2) Enable PGCLK  */
#define   CFG_CFGPCLKGEN2_C3D_OFF_Val         _U_(0x0)                                             /**< (CFG_CFGPCLKGEN2) Disable PGCLK  */
#define CFG_CFGPCLKGEN2_C3D_ON                (CFG_CFGPCLKGEN2_C3D_ON_Val << CFG_CFGPCLKGEN2_C3D_Pos) /**< (CFG_CFGPCLKGEN2) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN2_C3D_OFF               (CFG_CFGPCLKGEN2_C3D_OFF_Val << CFG_CFGPCLKGEN2_C3D_Pos) /**< (CFG_CFGPCLKGEN2) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN2_EVSYSC4SEL_Pos        _U_(12)                                              /**< (CFG_CFGPCLKGEN2) EVSYSC4 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN2_EVSYSC4SEL_Msk        (_U_(0x7) << CFG_CFGPCLKGEN2_EVSYSC4SEL_Pos)         /**< (CFG_CFGPCLKGEN2) EVSYSC4 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN2_EVSYSC4SEL(value)     (CFG_CFGPCLKGEN2_EVSYSC4SEL_Msk & ((value) << CFG_CFGPCLKGEN2_EVSYSC4SEL_Pos))
#define   CFG_CFGPCLKGEN2_EVSYSC4SEL_NO_CLK_Val _U_(0x0)                                             /**< (CFG_CFGPCLKGEN2) No Clock  */
#define   CFG_CFGPCLKGEN2_EVSYSC4SEL_REFO1_Val _U_(0x1)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 1  */
#define   CFG_CFGPCLKGEN2_EVSYSC4SEL_REFO2_Val _U_(0x2)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 2  */
#define   CFG_CFGPCLKGEN2_EVSYSC4SEL_REFO3_Val _U_(0x3)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 3  */
#define   CFG_CFGPCLKGEN2_EVSYSC4SEL_REFO4_Val _U_(0x4)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 4  */
#define   CFG_CFGPCLKGEN2_EVSYSC4SEL_REFO5_Val _U_(0x5)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 5  */
#define   CFG_CFGPCLKGEN2_EVSYSC4SEL_REFO6_Val _U_(0x6)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 6  */
#define   CFG_CFGPCLKGEN2_EVSYSC4SEL_LPCLK_Val _U_(0x7)                                             /**< (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN2_EVSYSC4SEL_NO_CLK     (CFG_CFGPCLKGEN2_EVSYSC4SEL_NO_CLK_Val << CFG_CFGPCLKGEN2_EVSYSC4SEL_Pos) /**< (CFG_CFGPCLKGEN2) No Clock Position  */
#define CFG_CFGPCLKGEN2_EVSYSC4SEL_REFO1      (CFG_CFGPCLKGEN2_EVSYSC4SEL_REFO1_Val << CFG_CFGPCLKGEN2_EVSYSC4SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC4SEL_REFO2      (CFG_CFGPCLKGEN2_EVSYSC4SEL_REFO2_Val << CFG_CFGPCLKGEN2_EVSYSC4SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC4SEL_REFO3      (CFG_CFGPCLKGEN2_EVSYSC4SEL_REFO3_Val << CFG_CFGPCLKGEN2_EVSYSC4SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC4SEL_REFO4      (CFG_CFGPCLKGEN2_EVSYSC4SEL_REFO4_Val << CFG_CFGPCLKGEN2_EVSYSC4SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC4SEL_REFO5      (CFG_CFGPCLKGEN2_EVSYSC4SEL_REFO5_Val << CFG_CFGPCLKGEN2_EVSYSC4SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC4SEL_REFO6      (CFG_CFGPCLKGEN2_EVSYSC4SEL_REFO6_Val << CFG_CFGPCLKGEN2_EVSYSC4SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC4SEL_LPCLK      (CFG_CFGPCLKGEN2_EVSYSC4SEL_LPCLK_Val << CFG_CFGPCLKGEN2_EVSYSC4SEL_Pos) /**< (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN2_C4D_Pos               _U_(15)                                              /**< (CFG_CFGPCLKGEN2) EVSYSC4 Clock Disable Position */
#define CFG_CFGPCLKGEN2_C4D_Msk               (_U_(0x1) << CFG_CFGPCLKGEN2_C4D_Pos)                /**< (CFG_CFGPCLKGEN2) EVSYSC4 Clock Disable Mask */
#define CFG_CFGPCLKGEN2_C4D(value)            (CFG_CFGPCLKGEN2_C4D_Msk & ((value) << CFG_CFGPCLKGEN2_C4D_Pos))
#define   CFG_CFGPCLKGEN2_C4D_ON_Val          _U_(0x1)                                             /**< (CFG_CFGPCLKGEN2) Enable PGCLK  */
#define   CFG_CFGPCLKGEN2_C4D_OFF_Val         _U_(0x0)                                             /**< (CFG_CFGPCLKGEN2) Disable PGCLK  */
#define CFG_CFGPCLKGEN2_C4D_ON                (CFG_CFGPCLKGEN2_C4D_ON_Val << CFG_CFGPCLKGEN2_C4D_Pos) /**< (CFG_CFGPCLKGEN2) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN2_C4D_OFF               (CFG_CFGPCLKGEN2_C4D_OFF_Val << CFG_CFGPCLKGEN2_C4D_Pos) /**< (CFG_CFGPCLKGEN2) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN2_EVSYSC5SEL_Pos        _U_(16)                                              /**< (CFG_CFGPCLKGEN2) EVSYSC5 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN2_EVSYSC5SEL_Msk        (_U_(0x7) << CFG_CFGPCLKGEN2_EVSYSC5SEL_Pos)         /**< (CFG_CFGPCLKGEN2) EVSYSC5 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN2_EVSYSC5SEL(value)     (CFG_CFGPCLKGEN2_EVSYSC5SEL_Msk & ((value) << CFG_CFGPCLKGEN2_EVSYSC5SEL_Pos))
#define   CFG_CFGPCLKGEN2_EVSYSC5SEL_NO_CLK_Val _U_(0x0)                                             /**< (CFG_CFGPCLKGEN2) No Clock  */
#define   CFG_CFGPCLKGEN2_EVSYSC5SEL_REFO1_Val _U_(0x1)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 1  */
#define   CFG_CFGPCLKGEN2_EVSYSC5SEL_REFO2_Val _U_(0x2)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 2  */
#define   CFG_CFGPCLKGEN2_EVSYSC5SEL_REFO3_Val _U_(0x3)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 3  */
#define   CFG_CFGPCLKGEN2_EVSYSC5SEL_REFO4_Val _U_(0x4)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 4  */
#define   CFG_CFGPCLKGEN2_EVSYSC5SEL_REFO5_Val _U_(0x5)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 5  */
#define   CFG_CFGPCLKGEN2_EVSYSC5SEL_REFO6_Val _U_(0x6)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 6  */
#define   CFG_CFGPCLKGEN2_EVSYSC5SEL_LPCLK_Val _U_(0x7)                                             /**< (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN2_EVSYSC5SEL_NO_CLK     (CFG_CFGPCLKGEN2_EVSYSC5SEL_NO_CLK_Val << CFG_CFGPCLKGEN2_EVSYSC5SEL_Pos) /**< (CFG_CFGPCLKGEN2) No Clock Position  */
#define CFG_CFGPCLKGEN2_EVSYSC5SEL_REFO1      (CFG_CFGPCLKGEN2_EVSYSC5SEL_REFO1_Val << CFG_CFGPCLKGEN2_EVSYSC5SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC5SEL_REFO2      (CFG_CFGPCLKGEN2_EVSYSC5SEL_REFO2_Val << CFG_CFGPCLKGEN2_EVSYSC5SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC5SEL_REFO3      (CFG_CFGPCLKGEN2_EVSYSC5SEL_REFO3_Val << CFG_CFGPCLKGEN2_EVSYSC5SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC5SEL_REFO4      (CFG_CFGPCLKGEN2_EVSYSC5SEL_REFO4_Val << CFG_CFGPCLKGEN2_EVSYSC5SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC5SEL_REFO5      (CFG_CFGPCLKGEN2_EVSYSC5SEL_REFO5_Val << CFG_CFGPCLKGEN2_EVSYSC5SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC5SEL_REFO6      (CFG_CFGPCLKGEN2_EVSYSC5SEL_REFO6_Val << CFG_CFGPCLKGEN2_EVSYSC5SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC5SEL_LPCLK      (CFG_CFGPCLKGEN2_EVSYSC5SEL_LPCLK_Val << CFG_CFGPCLKGEN2_EVSYSC5SEL_Pos) /**< (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN2_C5D_Pos               _U_(19)                                              /**< (CFG_CFGPCLKGEN2) EVSYSC5 Clock Disable Position */
#define CFG_CFGPCLKGEN2_C5D_Msk               (_U_(0x1) << CFG_CFGPCLKGEN2_C5D_Pos)                /**< (CFG_CFGPCLKGEN2) EVSYSC5 Clock Disable Mask */
#define CFG_CFGPCLKGEN2_C5D(value)            (CFG_CFGPCLKGEN2_C5D_Msk & ((value) << CFG_CFGPCLKGEN2_C5D_Pos))
#define   CFG_CFGPCLKGEN2_C5D_ON_Val          _U_(0x1)                                             /**< (CFG_CFGPCLKGEN2) Enable PGCLK  */
#define   CFG_CFGPCLKGEN2_C5D_OFF_Val         _U_(0x0)                                             /**< (CFG_CFGPCLKGEN2) Disable PGCLK  */
#define CFG_CFGPCLKGEN2_C5D_ON                (CFG_CFGPCLKGEN2_C5D_ON_Val << CFG_CFGPCLKGEN2_C5D_Pos) /**< (CFG_CFGPCLKGEN2) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN2_C5D_OFF               (CFG_CFGPCLKGEN2_C5D_OFF_Val << CFG_CFGPCLKGEN2_C5D_Pos) /**< (CFG_CFGPCLKGEN2) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN2_EVSYSC6SEL_Pos        _U_(20)                                              /**< (CFG_CFGPCLKGEN2) EVSYSC6 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN2_EVSYSC6SEL_Msk        (_U_(0x7) << CFG_CFGPCLKGEN2_EVSYSC6SEL_Pos)         /**< (CFG_CFGPCLKGEN2) EVSYSC6 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN2_EVSYSC6SEL(value)     (CFG_CFGPCLKGEN2_EVSYSC6SEL_Msk & ((value) << CFG_CFGPCLKGEN2_EVSYSC6SEL_Pos))
#define   CFG_CFGPCLKGEN2_EVSYSC6SEL_NO_CLK_Val _U_(0x0)                                             /**< (CFG_CFGPCLKGEN2) No Clock  */
#define   CFG_CFGPCLKGEN2_EVSYSC6SEL_REFO1_Val _U_(0x1)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 1  */
#define   CFG_CFGPCLKGEN2_EVSYSC6SEL_REFO2_Val _U_(0x2)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 2  */
#define   CFG_CFGPCLKGEN2_EVSYSC6SEL_REFO3_Val _U_(0x3)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 3  */
#define   CFG_CFGPCLKGEN2_EVSYSC6SEL_REFO4_Val _U_(0x4)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 4  */
#define   CFG_CFGPCLKGEN2_EVSYSC6SEL_REFO5_Val _U_(0x5)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 5  */
#define   CFG_CFGPCLKGEN2_EVSYSC6SEL_REFO6_Val _U_(0x6)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 6  */
#define   CFG_CFGPCLKGEN2_EVSYSC6SEL_LPCLK_Val _U_(0x7)                                             /**< (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN2_EVSYSC6SEL_NO_CLK     (CFG_CFGPCLKGEN2_EVSYSC6SEL_NO_CLK_Val << CFG_CFGPCLKGEN2_EVSYSC6SEL_Pos) /**< (CFG_CFGPCLKGEN2) No Clock Position  */
#define CFG_CFGPCLKGEN2_EVSYSC6SEL_REFO1      (CFG_CFGPCLKGEN2_EVSYSC6SEL_REFO1_Val << CFG_CFGPCLKGEN2_EVSYSC6SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC6SEL_REFO2      (CFG_CFGPCLKGEN2_EVSYSC6SEL_REFO2_Val << CFG_CFGPCLKGEN2_EVSYSC6SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC6SEL_REFO3      (CFG_CFGPCLKGEN2_EVSYSC6SEL_REFO3_Val << CFG_CFGPCLKGEN2_EVSYSC6SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC6SEL_REFO4      (CFG_CFGPCLKGEN2_EVSYSC6SEL_REFO4_Val << CFG_CFGPCLKGEN2_EVSYSC6SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC6SEL_REFO5      (CFG_CFGPCLKGEN2_EVSYSC6SEL_REFO5_Val << CFG_CFGPCLKGEN2_EVSYSC6SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC6SEL_REFO6      (CFG_CFGPCLKGEN2_EVSYSC6SEL_REFO6_Val << CFG_CFGPCLKGEN2_EVSYSC6SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC6SEL_LPCLK      (CFG_CFGPCLKGEN2_EVSYSC6SEL_LPCLK_Val << CFG_CFGPCLKGEN2_EVSYSC6SEL_Pos) /**< (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN2_C6D_Pos               _U_(23)                                              /**< (CFG_CFGPCLKGEN2) EVSYSC6 Clock Disable Position */
#define CFG_CFGPCLKGEN2_C6D_Msk               (_U_(0x1) << CFG_CFGPCLKGEN2_C6D_Pos)                /**< (CFG_CFGPCLKGEN2) EVSYSC6 Clock Disable Mask */
#define CFG_CFGPCLKGEN2_C6D(value)            (CFG_CFGPCLKGEN2_C6D_Msk & ((value) << CFG_CFGPCLKGEN2_C6D_Pos))
#define   CFG_CFGPCLKGEN2_C6D_ON_Val          _U_(0x1)                                             /**< (CFG_CFGPCLKGEN2) Enable PGCLK  */
#define   CFG_CFGPCLKGEN2_C6D_OFF_Val         _U_(0x0)                                             /**< (CFG_CFGPCLKGEN2) Disable PGCLK  */
#define CFG_CFGPCLKGEN2_C6D_ON                (CFG_CFGPCLKGEN2_C6D_ON_Val << CFG_CFGPCLKGEN2_C6D_Pos) /**< (CFG_CFGPCLKGEN2) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN2_C6D_OFF               (CFG_CFGPCLKGEN2_C6D_OFF_Val << CFG_CFGPCLKGEN2_C6D_Pos) /**< (CFG_CFGPCLKGEN2) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN2_EVSYSC7SEL_Pos        _U_(24)                                              /**< (CFG_CFGPCLKGEN2) EVSYSC7 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN2_EVSYSC7SEL_Msk        (_U_(0x7) << CFG_CFGPCLKGEN2_EVSYSC7SEL_Pos)         /**< (CFG_CFGPCLKGEN2) EVSYSC7 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN2_EVSYSC7SEL(value)     (CFG_CFGPCLKGEN2_EVSYSC7SEL_Msk & ((value) << CFG_CFGPCLKGEN2_EVSYSC7SEL_Pos))
#define   CFG_CFGPCLKGEN2_EVSYSC7SEL_NO_CLK_Val _U_(0x0)                                             /**< (CFG_CFGPCLKGEN2) No Clock  */
#define   CFG_CFGPCLKGEN2_EVSYSC7SEL_REFO1_Val _U_(0x1)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 1  */
#define   CFG_CFGPCLKGEN2_EVSYSC7SEL_REFO2_Val _U_(0x2)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 2  */
#define   CFG_CFGPCLKGEN2_EVSYSC7SEL_REFO3_Val _U_(0x3)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 3  */
#define   CFG_CFGPCLKGEN2_EVSYSC7SEL_REFO4_Val _U_(0x4)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 4  */
#define   CFG_CFGPCLKGEN2_EVSYSC7SEL_REFO5_Val _U_(0x5)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 5  */
#define   CFG_CFGPCLKGEN2_EVSYSC7SEL_REFO6_Val _U_(0x6)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 6  */
#define   CFG_CFGPCLKGEN2_EVSYSC7SEL_LPCLK_Val _U_(0x7)                                             /**< (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN2_EVSYSC7SEL_NO_CLK     (CFG_CFGPCLKGEN2_EVSYSC7SEL_NO_CLK_Val << CFG_CFGPCLKGEN2_EVSYSC7SEL_Pos) /**< (CFG_CFGPCLKGEN2) No Clock Position  */
#define CFG_CFGPCLKGEN2_EVSYSC7SEL_REFO1      (CFG_CFGPCLKGEN2_EVSYSC7SEL_REFO1_Val << CFG_CFGPCLKGEN2_EVSYSC7SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC7SEL_REFO2      (CFG_CFGPCLKGEN2_EVSYSC7SEL_REFO2_Val << CFG_CFGPCLKGEN2_EVSYSC7SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC7SEL_REFO3      (CFG_CFGPCLKGEN2_EVSYSC7SEL_REFO3_Val << CFG_CFGPCLKGEN2_EVSYSC7SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC7SEL_REFO4      (CFG_CFGPCLKGEN2_EVSYSC7SEL_REFO4_Val << CFG_CFGPCLKGEN2_EVSYSC7SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC7SEL_REFO5      (CFG_CFGPCLKGEN2_EVSYSC7SEL_REFO5_Val << CFG_CFGPCLKGEN2_EVSYSC7SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC7SEL_REFO6      (CFG_CFGPCLKGEN2_EVSYSC7SEL_REFO6_Val << CFG_CFGPCLKGEN2_EVSYSC7SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC7SEL_LPCLK      (CFG_CFGPCLKGEN2_EVSYSC7SEL_LPCLK_Val << CFG_CFGPCLKGEN2_EVSYSC7SEL_Pos) /**< (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN2_C7D_Pos               _U_(27)                                              /**< (CFG_CFGPCLKGEN2) C7D Clock Disable Position */
#define CFG_CFGPCLKGEN2_C7D_Msk               (_U_(0x1) << CFG_CFGPCLKGEN2_C7D_Pos)                /**< (CFG_CFGPCLKGEN2) C7D Clock Disable Mask */
#define CFG_CFGPCLKGEN2_C7D(value)            (CFG_CFGPCLKGEN2_C7D_Msk & ((value) << CFG_CFGPCLKGEN2_C7D_Pos))
#define   CFG_CFGPCLKGEN2_C7D_ON_Val          _U_(0x1)                                             /**< (CFG_CFGPCLKGEN2) Enable PGCLK  */
#define   CFG_CFGPCLKGEN2_C7D_OFF_Val         _U_(0x0)                                             /**< (CFG_CFGPCLKGEN2) Disable PGCLK  */
#define CFG_CFGPCLKGEN2_C7D_ON                (CFG_CFGPCLKGEN2_C7D_ON_Val << CFG_CFGPCLKGEN2_C7D_Pos) /**< (CFG_CFGPCLKGEN2) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN2_C7D_OFF               (CFG_CFGPCLKGEN2_C7D_OFF_Val << CFG_CFGPCLKGEN2_C7D_Pos) /**< (CFG_CFGPCLKGEN2) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN2_EVSYSC8SEL_Pos        _U_(28)                                              /**< (CFG_CFGPCLKGEN2) EVSYSC8 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN2_EVSYSC8SEL_Msk        (_U_(0x7) << CFG_CFGPCLKGEN2_EVSYSC8SEL_Pos)         /**< (CFG_CFGPCLKGEN2) EVSYSC8 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN2_EVSYSC8SEL(value)     (CFG_CFGPCLKGEN2_EVSYSC8SEL_Msk & ((value) << CFG_CFGPCLKGEN2_EVSYSC8SEL_Pos))
#define   CFG_CFGPCLKGEN2_EVSYSC8SEL_NO_CLK_Val _U_(0x0)                                             /**< (CFG_CFGPCLKGEN2) No Clock  */
#define   CFG_CFGPCLKGEN2_EVSYSC8SEL_REFO1_Val _U_(0x1)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 1  */
#define   CFG_CFGPCLKGEN2_EVSYSC8SEL_REFO2_Val _U_(0x2)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 2  */
#define   CFG_CFGPCLKGEN2_EVSYSC8SEL_REFO3_Val _U_(0x3)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 3  */
#define   CFG_CFGPCLKGEN2_EVSYSC8SEL_REFO4_Val _U_(0x4)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 4  */
#define   CFG_CFGPCLKGEN2_EVSYSC8SEL_REFO5_Val _U_(0x5)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 5  */
#define   CFG_CFGPCLKGEN2_EVSYSC8SEL_REFO6_Val _U_(0x6)                                             /**< (CFG_CFGPCLKGEN2) Reference Clock 6  */
#define   CFG_CFGPCLKGEN2_EVSYSC8SEL_LPCLK_Val _U_(0x7)                                             /**< (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN2_EVSYSC8SEL_NO_CLK     (CFG_CFGPCLKGEN2_EVSYSC8SEL_NO_CLK_Val << CFG_CFGPCLKGEN2_EVSYSC8SEL_Pos) /**< (CFG_CFGPCLKGEN2) No Clock Position  */
#define CFG_CFGPCLKGEN2_EVSYSC8SEL_REFO1      (CFG_CFGPCLKGEN2_EVSYSC8SEL_REFO1_Val << CFG_CFGPCLKGEN2_EVSYSC8SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC8SEL_REFO2      (CFG_CFGPCLKGEN2_EVSYSC8SEL_REFO2_Val << CFG_CFGPCLKGEN2_EVSYSC8SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC8SEL_REFO3      (CFG_CFGPCLKGEN2_EVSYSC8SEL_REFO3_Val << CFG_CFGPCLKGEN2_EVSYSC8SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC8SEL_REFO4      (CFG_CFGPCLKGEN2_EVSYSC8SEL_REFO4_Val << CFG_CFGPCLKGEN2_EVSYSC8SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC8SEL_REFO5      (CFG_CFGPCLKGEN2_EVSYSC8SEL_REFO5_Val << CFG_CFGPCLKGEN2_EVSYSC8SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC8SEL_REFO6      (CFG_CFGPCLKGEN2_EVSYSC8SEL_REFO6_Val << CFG_CFGPCLKGEN2_EVSYSC8SEL_Pos) /**< (CFG_CFGPCLKGEN2) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN2_EVSYSC8SEL_LPCLK      (CFG_CFGPCLKGEN2_EVSYSC8SEL_LPCLK_Val << CFG_CFGPCLKGEN2_EVSYSC8SEL_Pos) /**< (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN2_C8D_Pos               _U_(31)                                              /**< (CFG_CFGPCLKGEN2) C8D Clock Disable Position */
#define CFG_CFGPCLKGEN2_C8D_Msk               (_U_(0x1) << CFG_CFGPCLKGEN2_C8D_Pos)                /**< (CFG_CFGPCLKGEN2) C8D Clock Disable Mask */
#define CFG_CFGPCLKGEN2_C8D(value)            (CFG_CFGPCLKGEN2_C8D_Msk & ((value) << CFG_CFGPCLKGEN2_C8D_Pos))
#define   CFG_CFGPCLKGEN2_C8D_ON_Val          _U_(0x1)                                             /**< (CFG_CFGPCLKGEN2) Enable PGCLK  */
#define   CFG_CFGPCLKGEN2_C8D_OFF_Val         _U_(0x0)                                             /**< (CFG_CFGPCLKGEN2) Disable PGCLK  */
#define CFG_CFGPCLKGEN2_C8D_ON                (CFG_CFGPCLKGEN2_C8D_ON_Val << CFG_CFGPCLKGEN2_C8D_Pos) /**< (CFG_CFGPCLKGEN2) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN2_C8D_OFF               (CFG_CFGPCLKGEN2_C8D_OFF_Val << CFG_CFGPCLKGEN2_C8D_Pos) /**< (CFG_CFGPCLKGEN2) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN2_Msk                   _U_(0xFFFFFFFF)                                      /**< (CFG_CFGPCLKGEN2) Register Mask  */


/* -------- CFG_CFGPCLKGEN3 : (CFG Offset: 0x80) (R/W 32)  -------- */
#define CFG_CFGPCLKGEN3_RESETVALUE            _U_(0x00)                                            /**<  (CFG_CFGPCLKGEN3)   Reset Value */

#define CFG_CFGPCLKGEN3_EVSYSC9SEL_Pos        _U_(0)                                               /**< (CFG_CFGPCLKGEN3) EVSYSC9 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN3_EVSYSC9SEL_Msk        (_U_(0x7) << CFG_CFGPCLKGEN3_EVSYSC9SEL_Pos)         /**< (CFG_CFGPCLKGEN3) EVSYSC9 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN3_EVSYSC9SEL(value)     (CFG_CFGPCLKGEN3_EVSYSC9SEL_Msk & ((value) << CFG_CFGPCLKGEN3_EVSYSC9SEL_Pos))
#define   CFG_CFGPCLKGEN3_EVSYSC9SEL_NO_CLK_Val _U_(0x0)                                             /**< (CFG_CFGPCLKGEN3) No Clock  */
#define   CFG_CFGPCLKGEN3_EVSYSC9SEL_REFO1_Val _U_(0x1)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 1  */
#define   CFG_CFGPCLKGEN3_EVSYSC9SEL_REFO2_Val _U_(0x2)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 2  */
#define   CFG_CFGPCLKGEN3_EVSYSC9SEL_REFO3_Val _U_(0x3)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 3  */
#define   CFG_CFGPCLKGEN3_EVSYSC9SEL_REFO4_Val _U_(0x4)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 4  */
#define   CFG_CFGPCLKGEN3_EVSYSC9SEL_REFO5_Val _U_(0x5)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 5  */
#define   CFG_CFGPCLKGEN3_EVSYSC9SEL_REFO6_Val _U_(0x6)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 6  */
#define   CFG_CFGPCLKGEN3_EVSYSC9SEL_LPCLK_Val _U_(0x7)                                             /**< (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN3_EVSYSC9SEL_NO_CLK     (CFG_CFGPCLKGEN3_EVSYSC9SEL_NO_CLK_Val << CFG_CFGPCLKGEN3_EVSYSC9SEL_Pos) /**< (CFG_CFGPCLKGEN3) No Clock Position  */
#define CFG_CFGPCLKGEN3_EVSYSC9SEL_REFO1      (CFG_CFGPCLKGEN3_EVSYSC9SEL_REFO1_Val << CFG_CFGPCLKGEN3_EVSYSC9SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC9SEL_REFO2      (CFG_CFGPCLKGEN3_EVSYSC9SEL_REFO2_Val << CFG_CFGPCLKGEN3_EVSYSC9SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC9SEL_REFO3      (CFG_CFGPCLKGEN3_EVSYSC9SEL_REFO3_Val << CFG_CFGPCLKGEN3_EVSYSC9SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC9SEL_REFO4      (CFG_CFGPCLKGEN3_EVSYSC9SEL_REFO4_Val << CFG_CFGPCLKGEN3_EVSYSC9SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC9SEL_REFO5      (CFG_CFGPCLKGEN3_EVSYSC9SEL_REFO5_Val << CFG_CFGPCLKGEN3_EVSYSC9SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC9SEL_REFO6      (CFG_CFGPCLKGEN3_EVSYSC9SEL_REFO6_Val << CFG_CFGPCLKGEN3_EVSYSC9SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC9SEL_LPCLK      (CFG_CFGPCLKGEN3_EVSYSC9SEL_LPCLK_Val << CFG_CFGPCLKGEN3_EVSYSC9SEL_Pos) /**< (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN3_C9D_Pos               _U_(3)                                               /**< (CFG_CFGPCLKGEN3) C9D Clock Disable Position */
#define CFG_CFGPCLKGEN3_C9D_Msk               (_U_(0x1) << CFG_CFGPCLKGEN3_C9D_Pos)                /**< (CFG_CFGPCLKGEN3) C9D Clock Disable Mask */
#define CFG_CFGPCLKGEN3_C9D(value)            (CFG_CFGPCLKGEN3_C9D_Msk & ((value) << CFG_CFGPCLKGEN3_C9D_Pos))
#define   CFG_CFGPCLKGEN3_C9D_ON_Val          _U_(0x1)                                             /**< (CFG_CFGPCLKGEN3) Enable PGCLK  */
#define   CFG_CFGPCLKGEN3_C9D_OFF_Val         _U_(0x0)                                             /**< (CFG_CFGPCLKGEN3) Disable PGCLK  */
#define CFG_CFGPCLKGEN3_C9D_ON                (CFG_CFGPCLKGEN3_C9D_ON_Val << CFG_CFGPCLKGEN3_C9D_Pos) /**< (CFG_CFGPCLKGEN3) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN3_C9D_OFF               (CFG_CFGPCLKGEN3_C9D_OFF_Val << CFG_CFGPCLKGEN3_C9D_Pos) /**< (CFG_CFGPCLKGEN3) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN3_EVSYSC10SEL_Pos       _U_(4)                                               /**< (CFG_CFGPCLKGEN3) EVSYSC10 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN3_EVSYSC10SEL_Msk       (_U_(0x7) << CFG_CFGPCLKGEN3_EVSYSC10SEL_Pos)        /**< (CFG_CFGPCLKGEN3) EVSYSC10 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN3_EVSYSC10SEL(value)    (CFG_CFGPCLKGEN3_EVSYSC10SEL_Msk & ((value) << CFG_CFGPCLKGEN3_EVSYSC10SEL_Pos))
#define   CFG_CFGPCLKGEN3_EVSYSC10SEL_NO_CLK_Val _U_(0x0)                                             /**< (CFG_CFGPCLKGEN3) No Clock  */
#define   CFG_CFGPCLKGEN3_EVSYSC10SEL_REFO1_Val _U_(0x1)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 1  */
#define   CFG_CFGPCLKGEN3_EVSYSC10SEL_REFO2_Val _U_(0x2)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 2  */
#define   CFG_CFGPCLKGEN3_EVSYSC10SEL_REFO3_Val _U_(0x3)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 3  */
#define   CFG_CFGPCLKGEN3_EVSYSC10SEL_REFO4_Val _U_(0x4)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 4  */
#define   CFG_CFGPCLKGEN3_EVSYSC10SEL_REFO5_Val _U_(0x5)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 5  */
#define   CFG_CFGPCLKGEN3_EVSYSC10SEL_REFO6_Val _U_(0x6)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 6  */
#define   CFG_CFGPCLKGEN3_EVSYSC10SEL_LPCLK_Val _U_(0x7)                                             /**< (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN3_EVSYSC10SEL_NO_CLK    (CFG_CFGPCLKGEN3_EVSYSC10SEL_NO_CLK_Val << CFG_CFGPCLKGEN3_EVSYSC10SEL_Pos) /**< (CFG_CFGPCLKGEN3) No Clock Position  */
#define CFG_CFGPCLKGEN3_EVSYSC10SEL_REFO1     (CFG_CFGPCLKGEN3_EVSYSC10SEL_REFO1_Val << CFG_CFGPCLKGEN3_EVSYSC10SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC10SEL_REFO2     (CFG_CFGPCLKGEN3_EVSYSC10SEL_REFO2_Val << CFG_CFGPCLKGEN3_EVSYSC10SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC10SEL_REFO3     (CFG_CFGPCLKGEN3_EVSYSC10SEL_REFO3_Val << CFG_CFGPCLKGEN3_EVSYSC10SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC10SEL_REFO4     (CFG_CFGPCLKGEN3_EVSYSC10SEL_REFO4_Val << CFG_CFGPCLKGEN3_EVSYSC10SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC10SEL_REFO5     (CFG_CFGPCLKGEN3_EVSYSC10SEL_REFO5_Val << CFG_CFGPCLKGEN3_EVSYSC10SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC10SEL_REFO6     (CFG_CFGPCLKGEN3_EVSYSC10SEL_REFO6_Val << CFG_CFGPCLKGEN3_EVSYSC10SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC10SEL_LPCLK     (CFG_CFGPCLKGEN3_EVSYSC10SEL_LPCLK_Val << CFG_CFGPCLKGEN3_EVSYSC10SEL_Pos) /**< (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN3_C10D_Pos              _U_(7)                                               /**< (CFG_CFGPCLKGEN3) C10D Clock Disable Position */
#define CFG_CFGPCLKGEN3_C10D_Msk              (_U_(0x1) << CFG_CFGPCLKGEN3_C10D_Pos)               /**< (CFG_CFGPCLKGEN3) C10D Clock Disable Mask */
#define CFG_CFGPCLKGEN3_C10D(value)           (CFG_CFGPCLKGEN3_C10D_Msk & ((value) << CFG_CFGPCLKGEN3_C10D_Pos))
#define   CFG_CFGPCLKGEN3_C10D_ON_Val         _U_(0x1)                                             /**< (CFG_CFGPCLKGEN3) Enable PGCLK  */
#define   CFG_CFGPCLKGEN3_C10D_OFF_Val        _U_(0x0)                                             /**< (CFG_CFGPCLKGEN3) Disable PGCLK  */
#define CFG_CFGPCLKGEN3_C10D_ON               (CFG_CFGPCLKGEN3_C10D_ON_Val << CFG_CFGPCLKGEN3_C10D_Pos) /**< (CFG_CFGPCLKGEN3) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN3_C10D_OFF              (CFG_CFGPCLKGEN3_C10D_OFF_Val << CFG_CFGPCLKGEN3_C10D_Pos) /**< (CFG_CFGPCLKGEN3) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN3_EVSYSC11SEL_Pos       _U_(8)                                               /**< (CFG_CFGPCLKGEN3) EVSYSC11 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN3_EVSYSC11SEL_Msk       (_U_(0x7) << CFG_CFGPCLKGEN3_EVSYSC11SEL_Pos)        /**< (CFG_CFGPCLKGEN3) EVSYSC11 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN3_EVSYSC11SEL(value)    (CFG_CFGPCLKGEN3_EVSYSC11SEL_Msk & ((value) << CFG_CFGPCLKGEN3_EVSYSC11SEL_Pos))
#define   CFG_CFGPCLKGEN3_EVSYSC11SEL_NO_CLK_Val _U_(0x0)                                             /**< (CFG_CFGPCLKGEN3) No Clock  */
#define   CFG_CFGPCLKGEN3_EVSYSC11SEL_REFO1_Val _U_(0x1)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 1  */
#define   CFG_CFGPCLKGEN3_EVSYSC11SEL_REFO2_Val _U_(0x2)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 2  */
#define   CFG_CFGPCLKGEN3_EVSYSC11SEL_REFO3_Val _U_(0x3)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 3  */
#define   CFG_CFGPCLKGEN3_EVSYSC11SEL_REFO4_Val _U_(0x4)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 4  */
#define   CFG_CFGPCLKGEN3_EVSYSC11SEL_REFO5_Val _U_(0x5)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 5  */
#define   CFG_CFGPCLKGEN3_EVSYSC11SEL_REFO6_Val _U_(0x6)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 6  */
#define   CFG_CFGPCLKGEN3_EVSYSC11SEL_LPCLK_Val _U_(0x7)                                             /**< (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN3_EVSYSC11SEL_NO_CLK    (CFG_CFGPCLKGEN3_EVSYSC11SEL_NO_CLK_Val << CFG_CFGPCLKGEN3_EVSYSC11SEL_Pos) /**< (CFG_CFGPCLKGEN3) No Clock Position  */
#define CFG_CFGPCLKGEN3_EVSYSC11SEL_REFO1     (CFG_CFGPCLKGEN3_EVSYSC11SEL_REFO1_Val << CFG_CFGPCLKGEN3_EVSYSC11SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC11SEL_REFO2     (CFG_CFGPCLKGEN3_EVSYSC11SEL_REFO2_Val << CFG_CFGPCLKGEN3_EVSYSC11SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC11SEL_REFO3     (CFG_CFGPCLKGEN3_EVSYSC11SEL_REFO3_Val << CFG_CFGPCLKGEN3_EVSYSC11SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC11SEL_REFO4     (CFG_CFGPCLKGEN3_EVSYSC11SEL_REFO4_Val << CFG_CFGPCLKGEN3_EVSYSC11SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC11SEL_REFO5     (CFG_CFGPCLKGEN3_EVSYSC11SEL_REFO5_Val << CFG_CFGPCLKGEN3_EVSYSC11SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC11SEL_REFO6     (CFG_CFGPCLKGEN3_EVSYSC11SEL_REFO6_Val << CFG_CFGPCLKGEN3_EVSYSC11SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC11SEL_LPCLK     (CFG_CFGPCLKGEN3_EVSYSC11SEL_LPCLK_Val << CFG_CFGPCLKGEN3_EVSYSC11SEL_Pos) /**< (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN3_C11D_Pos              _U_(11)                                              /**< (CFG_CFGPCLKGEN3) C11D Clock Disable Position */
#define CFG_CFGPCLKGEN3_C11D_Msk              (_U_(0x1) << CFG_CFGPCLKGEN3_C11D_Pos)               /**< (CFG_CFGPCLKGEN3) C11D Clock Disable Mask */
#define CFG_CFGPCLKGEN3_C11D(value)           (CFG_CFGPCLKGEN3_C11D_Msk & ((value) << CFG_CFGPCLKGEN3_C11D_Pos))
#define   CFG_CFGPCLKGEN3_C11D_ON_Val         _U_(0x1)                                             /**< (CFG_CFGPCLKGEN3) Enable PGCLK  */
#define   CFG_CFGPCLKGEN3_C11D_OFF_Val        _U_(0x0)                                             /**< (CFG_CFGPCLKGEN3) Disable PGCLK  */
#define CFG_CFGPCLKGEN3_C11D_ON               (CFG_CFGPCLKGEN3_C11D_ON_Val << CFG_CFGPCLKGEN3_C11D_Pos) /**< (CFG_CFGPCLKGEN3) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN3_C11D_OFF              (CFG_CFGPCLKGEN3_C11D_OFF_Val << CFG_CFGPCLKGEN3_C11D_Pos) /**< (CFG_CFGPCLKGEN3) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN3_EVSYSC12SEL_Pos       _U_(12)                                              /**< (CFG_CFGPCLKGEN3) EVSYSC12 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN3_EVSYSC12SEL_Msk       (_U_(0x7) << CFG_CFGPCLKGEN3_EVSYSC12SEL_Pos)        /**< (CFG_CFGPCLKGEN3) EVSYSC12 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN3_EVSYSC12SEL(value)    (CFG_CFGPCLKGEN3_EVSYSC12SEL_Msk & ((value) << CFG_CFGPCLKGEN3_EVSYSC12SEL_Pos))
#define   CFG_CFGPCLKGEN3_EVSYSC12SEL_NO_CLK_Val _U_(0x0)                                             /**< (CFG_CFGPCLKGEN3) No Clock  */
#define   CFG_CFGPCLKGEN3_EVSYSC12SEL_REFO1_Val _U_(0x1)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 1  */
#define   CFG_CFGPCLKGEN3_EVSYSC12SEL_REFO2_Val _U_(0x2)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 2  */
#define   CFG_CFGPCLKGEN3_EVSYSC12SEL_REFO3_Val _U_(0x3)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 3  */
#define   CFG_CFGPCLKGEN3_EVSYSC12SEL_REFO4_Val _U_(0x4)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 4  */
#define   CFG_CFGPCLKGEN3_EVSYSC12SEL_REFO5_Val _U_(0x5)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 5  */
#define   CFG_CFGPCLKGEN3_EVSYSC12SEL_REFO6_Val _U_(0x6)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 6  */
#define   CFG_CFGPCLKGEN3_EVSYSC12SEL_LPCLK_Val _U_(0x7)                                             /**< (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN3_EVSYSC12SEL_NO_CLK    (CFG_CFGPCLKGEN3_EVSYSC12SEL_NO_CLK_Val << CFG_CFGPCLKGEN3_EVSYSC12SEL_Pos) /**< (CFG_CFGPCLKGEN3) No Clock Position  */
#define CFG_CFGPCLKGEN3_EVSYSC12SEL_REFO1     (CFG_CFGPCLKGEN3_EVSYSC12SEL_REFO1_Val << CFG_CFGPCLKGEN3_EVSYSC12SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC12SEL_REFO2     (CFG_CFGPCLKGEN3_EVSYSC12SEL_REFO2_Val << CFG_CFGPCLKGEN3_EVSYSC12SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC12SEL_REFO3     (CFG_CFGPCLKGEN3_EVSYSC12SEL_REFO3_Val << CFG_CFGPCLKGEN3_EVSYSC12SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC12SEL_REFO4     (CFG_CFGPCLKGEN3_EVSYSC12SEL_REFO4_Val << CFG_CFGPCLKGEN3_EVSYSC12SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC12SEL_REFO5     (CFG_CFGPCLKGEN3_EVSYSC12SEL_REFO5_Val << CFG_CFGPCLKGEN3_EVSYSC12SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC12SEL_REFO6     (CFG_CFGPCLKGEN3_EVSYSC12SEL_REFO6_Val << CFG_CFGPCLKGEN3_EVSYSC12SEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN3_EVSYSC12SEL_LPCLK     (CFG_CFGPCLKGEN3_EVSYSC12SEL_LPCLK_Val << CFG_CFGPCLKGEN3_EVSYSC12SEL_Pos) /**< (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN3_C12D_Pos              _U_(15)                                              /**< (CFG_CFGPCLKGEN3) C12D Clock Disable Position */
#define CFG_CFGPCLKGEN3_C12D_Msk              (_U_(0x1) << CFG_CFGPCLKGEN3_C12D_Pos)               /**< (CFG_CFGPCLKGEN3) C12D Clock Disable Mask */
#define CFG_CFGPCLKGEN3_C12D(value)           (CFG_CFGPCLKGEN3_C12D_Msk & ((value) << CFG_CFGPCLKGEN3_C12D_Pos))
#define   CFG_CFGPCLKGEN3_C12D_ON_Val         _U_(0x1)                                             /**< (CFG_CFGPCLKGEN3) Enable PGCLK  */
#define   CFG_CFGPCLKGEN3_C12D_OFF_Val        _U_(0x0)                                             /**< (CFG_CFGPCLKGEN3) Disable PGCLK  */
#define CFG_CFGPCLKGEN3_C12D_ON               (CFG_CFGPCLKGEN3_C12D_ON_Val << CFG_CFGPCLKGEN3_C12D_Pos) /**< (CFG_CFGPCLKGEN3) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN3_C12D_OFF              (CFG_CFGPCLKGEN3_C12D_OFF_Val << CFG_CFGPCLKGEN3_C12D_Pos) /**< (CFG_CFGPCLKGEN3) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN3_ACCLKSEL_Pos          _U_(16)                                              /**< (CFG_CFGPCLKGEN3) AC Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN3_ACCLKSEL_Msk          (_U_(0x7) << CFG_CFGPCLKGEN3_ACCLKSEL_Pos)           /**< (CFG_CFGPCLKGEN3) AC Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN3_ACCLKSEL(value)       (CFG_CFGPCLKGEN3_ACCLKSEL_Msk & ((value) << CFG_CFGPCLKGEN3_ACCLKSEL_Pos))
#define   CFG_CFGPCLKGEN3_ACCLKSEL_NO_CLK_Val _U_(0x0)                                             /**< (CFG_CFGPCLKGEN3) No Clock  */
#define   CFG_CFGPCLKGEN3_ACCLKSEL_REFO1_Val  _U_(0x1)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 1  */
#define   CFG_CFGPCLKGEN3_ACCLKSEL_REFO2_Val  _U_(0x2)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 2  */
#define   CFG_CFGPCLKGEN3_ACCLKSEL_REFO3_Val  _U_(0x3)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 3  */
#define   CFG_CFGPCLKGEN3_ACCLKSEL_REFO4_Val  _U_(0x4)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 4  */
#define   CFG_CFGPCLKGEN3_ACCLKSEL_REFO5_Val  _U_(0x5)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 5  */
#define   CFG_CFGPCLKGEN3_ACCLKSEL_REFO6_Val  _U_(0x6)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 6  */
#define   CFG_CFGPCLKGEN3_ACCLKSEL_LPCLK_Val  _U_(0x7)                                             /**< (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN3_ACCLKSEL_NO_CLK       (CFG_CFGPCLKGEN3_ACCLKSEL_NO_CLK_Val << CFG_CFGPCLKGEN3_ACCLKSEL_Pos) /**< (CFG_CFGPCLKGEN3) No Clock Position  */
#define CFG_CFGPCLKGEN3_ACCLKSEL_REFO1        (CFG_CFGPCLKGEN3_ACCLKSEL_REFO1_Val << CFG_CFGPCLKGEN3_ACCLKSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN3_ACCLKSEL_REFO2        (CFG_CFGPCLKGEN3_ACCLKSEL_REFO2_Val << CFG_CFGPCLKGEN3_ACCLKSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN3_ACCLKSEL_REFO3        (CFG_CFGPCLKGEN3_ACCLKSEL_REFO3_Val << CFG_CFGPCLKGEN3_ACCLKSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN3_ACCLKSEL_REFO4        (CFG_CFGPCLKGEN3_ACCLKSEL_REFO4_Val << CFG_CFGPCLKGEN3_ACCLKSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN3_ACCLKSEL_REFO5        (CFG_CFGPCLKGEN3_ACCLKSEL_REFO5_Val << CFG_CFGPCLKGEN3_ACCLKSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN3_ACCLKSEL_REFO6        (CFG_CFGPCLKGEN3_ACCLKSEL_REFO6_Val << CFG_CFGPCLKGEN3_ACCLKSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN3_ACCLKSEL_LPCLK        (CFG_CFGPCLKGEN3_ACCLKSEL_LPCLK_Val << CFG_CFGPCLKGEN3_ACCLKSEL_Pos) /**< (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN3_ACCD_Pos              _U_(19)                                              /**< (CFG_CFGPCLKGEN3) AC Clock Disable Position */
#define CFG_CFGPCLKGEN3_ACCD_Msk              (_U_(0x1) << CFG_CFGPCLKGEN3_ACCD_Pos)               /**< (CFG_CFGPCLKGEN3) AC Clock Disable Mask */
#define CFG_CFGPCLKGEN3_ACCD(value)           (CFG_CFGPCLKGEN3_ACCD_Msk & ((value) << CFG_CFGPCLKGEN3_ACCD_Pos))
#define   CFG_CFGPCLKGEN3_ACCD_ON_Val         _U_(0x1)                                             /**< (CFG_CFGPCLKGEN3) Enable PGCLK  */
#define   CFG_CFGPCLKGEN3_ACCD_OFF_Val        _U_(0x0)                                             /**< (CFG_CFGPCLKGEN3) Disable PGCLK  */
#define CFG_CFGPCLKGEN3_ACCD_ON               (CFG_CFGPCLKGEN3_ACCD_ON_Val << CFG_CFGPCLKGEN3_ACCD_Pos) /**< (CFG_CFGPCLKGEN3) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN3_ACCD_OFF              (CFG_CFGPCLKGEN3_ACCD_OFF_Val << CFG_CFGPCLKGEN3_ACCD_Pos) /**< (CFG_CFGPCLKGEN3) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN3_TCC0CSEL_Pos          _U_(20)                                              /**< (CFG_CFGPCLKGEN3) TCC0 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN3_TCC0CSEL_Msk          (_U_(0x7) << CFG_CFGPCLKGEN3_TCC0CSEL_Pos)           /**< (CFG_CFGPCLKGEN3) TCC0 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN3_TCC0CSEL(value)       (CFG_CFGPCLKGEN3_TCC0CSEL_Msk & ((value) << CFG_CFGPCLKGEN3_TCC0CSEL_Pos))
#define   CFG_CFGPCLKGEN3_TCC0CSEL_NO_CLK_Val _U_(0x0)                                             /**< (CFG_CFGPCLKGEN3) No Clock  */
#define   CFG_CFGPCLKGEN3_TCC0CSEL_REFO1_Val  _U_(0x1)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 1  */
#define   CFG_CFGPCLKGEN3_TCC0CSEL_REFO2_Val  _U_(0x2)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 2  */
#define   CFG_CFGPCLKGEN3_TCC0CSEL_REFO3_Val  _U_(0x3)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 3  */
#define   CFG_CFGPCLKGEN3_TCC0CSEL_REFO4_Val  _U_(0x4)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 4  */
#define   CFG_CFGPCLKGEN3_TCC0CSEL_REFO5_Val  _U_(0x5)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 5  */
#define   CFG_CFGPCLKGEN3_TCC0CSEL_REFO6_Val  _U_(0x6)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 6  */
#define   CFG_CFGPCLKGEN3_TCC0CSEL_LPCLK_Val  _U_(0x7)                                             /**< (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN3_TCC0CSEL_NO_CLK       (CFG_CFGPCLKGEN3_TCC0CSEL_NO_CLK_Val << CFG_CFGPCLKGEN3_TCC0CSEL_Pos) /**< (CFG_CFGPCLKGEN3) No Clock Position  */
#define CFG_CFGPCLKGEN3_TCC0CSEL_REFO1        (CFG_CFGPCLKGEN3_TCC0CSEL_REFO1_Val << CFG_CFGPCLKGEN3_TCC0CSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN3_TCC0CSEL_REFO2        (CFG_CFGPCLKGEN3_TCC0CSEL_REFO2_Val << CFG_CFGPCLKGEN3_TCC0CSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN3_TCC0CSEL_REFO3        (CFG_CFGPCLKGEN3_TCC0CSEL_REFO3_Val << CFG_CFGPCLKGEN3_TCC0CSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN3_TCC0CSEL_REFO4        (CFG_CFGPCLKGEN3_TCC0CSEL_REFO4_Val << CFG_CFGPCLKGEN3_TCC0CSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN3_TCC0CSEL_REFO5        (CFG_CFGPCLKGEN3_TCC0CSEL_REFO5_Val << CFG_CFGPCLKGEN3_TCC0CSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN3_TCC0CSEL_REFO6        (CFG_CFGPCLKGEN3_TCC0CSEL_REFO6_Val << CFG_CFGPCLKGEN3_TCC0CSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN3_TCC0CSEL_LPCLK        (CFG_CFGPCLKGEN3_TCC0CSEL_LPCLK_Val << CFG_CFGPCLKGEN3_TCC0CSEL_Pos) /**< (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN3_TCC0CD_Pos            _U_(23)                                              /**< (CFG_CFGPCLKGEN3) TCC0 Clock Disable Position */
#define CFG_CFGPCLKGEN3_TCC0CD_Msk            (_U_(0x1) << CFG_CFGPCLKGEN3_TCC0CD_Pos)             /**< (CFG_CFGPCLKGEN3) TCC0 Clock Disable Mask */
#define CFG_CFGPCLKGEN3_TCC0CD(value)         (CFG_CFGPCLKGEN3_TCC0CD_Msk & ((value) << CFG_CFGPCLKGEN3_TCC0CD_Pos))
#define   CFG_CFGPCLKGEN3_TCC0CD_ON_Val       _U_(0x1)                                             /**< (CFG_CFGPCLKGEN3) Enable PGCLK  */
#define   CFG_CFGPCLKGEN3_TCC0CD_OFF_Val      _U_(0x0)                                             /**< (CFG_CFGPCLKGEN3) Disable PGCLK  */
#define CFG_CFGPCLKGEN3_TCC0CD_ON             (CFG_CFGPCLKGEN3_TCC0CD_ON_Val << CFG_CFGPCLKGEN3_TCC0CD_Pos) /**< (CFG_CFGPCLKGEN3) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN3_TCC0CD_OFF            (CFG_CFGPCLKGEN3_TCC0CD_OFF_Val << CFG_CFGPCLKGEN3_TCC0CD_Pos) /**< (CFG_CFGPCLKGEN3) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN3_TC0CSEL_Pos           _U_(24)                                              /**< (CFG_CFGPCLKGEN3) TC0 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN3_TC0CSEL_Msk           (_U_(0x7) << CFG_CFGPCLKGEN3_TC0CSEL_Pos)            /**< (CFG_CFGPCLKGEN3) TC0 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN3_TC0CSEL(value)        (CFG_CFGPCLKGEN3_TC0CSEL_Msk & ((value) << CFG_CFGPCLKGEN3_TC0CSEL_Pos))
#define   CFG_CFGPCLKGEN3_TC0CSEL_NO_CLK_Val  _U_(0x0)                                             /**< (CFG_CFGPCLKGEN3) No Clock  */
#define   CFG_CFGPCLKGEN3_TC0CSEL_REFO1_Val   _U_(0x1)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 1  */
#define   CFG_CFGPCLKGEN3_TC0CSEL_REFO2_Val   _U_(0x2)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 2  */
#define   CFG_CFGPCLKGEN3_TC0CSEL_REFO3_Val   _U_(0x3)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 3  */
#define   CFG_CFGPCLKGEN3_TC0CSEL_REFO4_Val   _U_(0x4)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 4  */
#define   CFG_CFGPCLKGEN3_TC0CSEL_REFO5_Val   _U_(0x5)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 5  */
#define   CFG_CFGPCLKGEN3_TC0CSEL_REFO6_Val   _U_(0x6)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 6  */
#define   CFG_CFGPCLKGEN3_TC0CSEL_LPCLK_Val   _U_(0x7)                                             /**< (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN3_TC0CSEL_NO_CLK        (CFG_CFGPCLKGEN3_TC0CSEL_NO_CLK_Val << CFG_CFGPCLKGEN3_TC0CSEL_Pos) /**< (CFG_CFGPCLKGEN3) No Clock Position  */
#define CFG_CFGPCLKGEN3_TC0CSEL_REFO1         (CFG_CFGPCLKGEN3_TC0CSEL_REFO1_Val << CFG_CFGPCLKGEN3_TC0CSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN3_TC0CSEL_REFO2         (CFG_CFGPCLKGEN3_TC0CSEL_REFO2_Val << CFG_CFGPCLKGEN3_TC0CSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN3_TC0CSEL_REFO3         (CFG_CFGPCLKGEN3_TC0CSEL_REFO3_Val << CFG_CFGPCLKGEN3_TC0CSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN3_TC0CSEL_REFO4         (CFG_CFGPCLKGEN3_TC0CSEL_REFO4_Val << CFG_CFGPCLKGEN3_TC0CSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN3_TC0CSEL_REFO5         (CFG_CFGPCLKGEN3_TC0CSEL_REFO5_Val << CFG_CFGPCLKGEN3_TC0CSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN3_TC0CSEL_REFO6         (CFG_CFGPCLKGEN3_TC0CSEL_REFO6_Val << CFG_CFGPCLKGEN3_TC0CSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN3_TC0CSEL_LPCLK         (CFG_CFGPCLKGEN3_TC0CSEL_LPCLK_Val << CFG_CFGPCLKGEN3_TC0CSEL_Pos) /**< (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN3_TC0CD_Pos             _U_(27)                                              /**< (CFG_CFGPCLKGEN3) TC0 Clock Disable Position */
#define CFG_CFGPCLKGEN3_TC0CD_Msk             (_U_(0x1) << CFG_CFGPCLKGEN3_TC0CD_Pos)              /**< (CFG_CFGPCLKGEN3) TC0 Clock Disable Mask */
#define CFG_CFGPCLKGEN3_TC0CD(value)          (CFG_CFGPCLKGEN3_TC0CD_Msk & ((value) << CFG_CFGPCLKGEN3_TC0CD_Pos))
#define   CFG_CFGPCLKGEN3_TC0CD_ON_Val        _U_(0x1)                                             /**< (CFG_CFGPCLKGEN3) Enable PGCLK  */
#define   CFG_CFGPCLKGEN3_TC0CD_OFF_Val       _U_(0x0)                                             /**< (CFG_CFGPCLKGEN3) Disable PGCLK  */
#define CFG_CFGPCLKGEN3_TC0CD_ON              (CFG_CFGPCLKGEN3_TC0CD_ON_Val << CFG_CFGPCLKGEN3_TC0CD_Pos) /**< (CFG_CFGPCLKGEN3) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN3_TC0CD_OFF             (CFG_CFGPCLKGEN3_TC0CD_OFF_Val << CFG_CFGPCLKGEN3_TC0CD_Pos) /**< (CFG_CFGPCLKGEN3) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN3_TC1CSEL_Pos           _U_(28)                                              /**< (CFG_CFGPCLKGEN3) TC1 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN3_TC1CSEL_Msk           (_U_(0x7) << CFG_CFGPCLKGEN3_TC1CSEL_Pos)            /**< (CFG_CFGPCLKGEN3) TC1 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN3_TC1CSEL(value)        (CFG_CFGPCLKGEN3_TC1CSEL_Msk & ((value) << CFG_CFGPCLKGEN3_TC1CSEL_Pos))
#define   CFG_CFGPCLKGEN3_TC1CSEL_NO_CLK_Val  _U_(0x0)                                             /**< (CFG_CFGPCLKGEN3) No Clock  */
#define   CFG_CFGPCLKGEN3_TC1CSEL_REFO1_Val   _U_(0x1)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 1  */
#define   CFG_CFGPCLKGEN3_TC1CSEL_REFO2_Val   _U_(0x2)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 2  */
#define   CFG_CFGPCLKGEN3_TC1CSEL_REFO3_Val   _U_(0x3)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 3  */
#define   CFG_CFGPCLKGEN3_TC1CSEL_REFO4_Val   _U_(0x4)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 4  */
#define   CFG_CFGPCLKGEN3_TC1CSEL_REFO5_Val   _U_(0x5)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 5  */
#define   CFG_CFGPCLKGEN3_TC1CSEL_REFO6_Val   _U_(0x6)                                             /**< (CFG_CFGPCLKGEN3) Reference Clock 6  */
#define   CFG_CFGPCLKGEN3_TC1CSEL_LPCLK_Val   _U_(0x7)                                             /**< (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN3_TC1CSEL_NO_CLK        (CFG_CFGPCLKGEN3_TC1CSEL_NO_CLK_Val << CFG_CFGPCLKGEN3_TC1CSEL_Pos) /**< (CFG_CFGPCLKGEN3) No Clock Position  */
#define CFG_CFGPCLKGEN3_TC1CSEL_REFO1         (CFG_CFGPCLKGEN3_TC1CSEL_REFO1_Val << CFG_CFGPCLKGEN3_TC1CSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 1 Position  */
#define CFG_CFGPCLKGEN3_TC1CSEL_REFO2         (CFG_CFGPCLKGEN3_TC1CSEL_REFO2_Val << CFG_CFGPCLKGEN3_TC1CSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 2 Position  */
#define CFG_CFGPCLKGEN3_TC1CSEL_REFO3         (CFG_CFGPCLKGEN3_TC1CSEL_REFO3_Val << CFG_CFGPCLKGEN3_TC1CSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 3 Position  */
#define CFG_CFGPCLKGEN3_TC1CSEL_REFO4         (CFG_CFGPCLKGEN3_TC1CSEL_REFO4_Val << CFG_CFGPCLKGEN3_TC1CSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 4 Position  */
#define CFG_CFGPCLKGEN3_TC1CSEL_REFO5         (CFG_CFGPCLKGEN3_TC1CSEL_REFO5_Val << CFG_CFGPCLKGEN3_TC1CSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 5 Position  */
#define CFG_CFGPCLKGEN3_TC1CSEL_REFO6         (CFG_CFGPCLKGEN3_TC1CSEL_REFO6_Val << CFG_CFGPCLKGEN3_TC1CSEL_Pos) /**< (CFG_CFGPCLKGEN3) Reference Clock 6 Position  */
#define CFG_CFGPCLKGEN3_TC1CSEL_LPCLK         (CFG_CFGPCLKGEN3_TC1CSEL_LPCLK_Val << CFG_CFGPCLKGEN3_TC1CSEL_Pos) /**< (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock Position  */
#define CFG_CFGPCLKGEN3_TC1CD_Pos             _U_(31)                                              /**< (CFG_CFGPCLKGEN3) TC1 Clock Disable Position */
#define CFG_CFGPCLKGEN3_TC1CD_Msk             (_U_(0x1) << CFG_CFGPCLKGEN3_TC1CD_Pos)              /**< (CFG_CFGPCLKGEN3) TC1 Clock Disable Mask */
#define CFG_CFGPCLKGEN3_TC1CD(value)          (CFG_CFGPCLKGEN3_TC1CD_Msk & ((value) << CFG_CFGPCLKGEN3_TC1CD_Pos))
#define   CFG_CFGPCLKGEN3_TC1CD_ON_Val        _U_(0x1)                                             /**< (CFG_CFGPCLKGEN3) Enable PGCLK  */
#define   CFG_CFGPCLKGEN3_TC1CD_OFF_Val       _U_(0x0)                                             /**< (CFG_CFGPCLKGEN3) Disable PGCLK  */
#define CFG_CFGPCLKGEN3_TC1CD_ON              (CFG_CFGPCLKGEN3_TC1CD_ON_Val << CFG_CFGPCLKGEN3_TC1CD_Pos) /**< (CFG_CFGPCLKGEN3) Enable PGCLK Position  */
#define CFG_CFGPCLKGEN3_TC1CD_OFF             (CFG_CFGPCLKGEN3_TC1CD_OFF_Val << CFG_CFGPCLKGEN3_TC1CD_Pos) /**< (CFG_CFGPCLKGEN3) Disable PGCLK Position  */
#define CFG_CFGPCLKGEN3_Msk                   _U_(0xFFFFFFFF)                                      /**< (CFG_CFGPCLKGEN3) Register Mask  */


/* -------- CFG_ID : (CFG Offset: 0x90) ( R/ 32) Device ID -------- */
#define CFG_ID_RESETVALUE                     _U_(0x00)                                            /**<  (CFG_ID) Device ID  Reset Value */

#define CFG_ID_Msk                            _U_(0x00000000)                                      /**< (CFG_ID) Register Mask  */


/* -------- CFG_USER_ID : (CFG Offset: 0xA0) (R/W 32)  -------- */
#define CFG_USER_ID_RESETVALUE                _U_(0x00)                                            /**<  (CFG_USER_ID)   Reset Value */

#define CFG_USER_ID_USER_ID_Pos               _U_(0)                                               /**< (CFG_USER_ID) User unique ID, readable using the JTAG USER_ID instruction Position */
#define CFG_USER_ID_USER_ID_Msk               (_U_(0xFFFF) << CFG_USER_ID_USER_ID_Pos)             /**< (CFG_USER_ID) User unique ID, readable using the JTAG USER_ID instruction Mask */
#define CFG_USER_ID_USER_ID(value)            (CFG_USER_ID_USER_ID_Msk & ((value) << CFG_USER_ID_USER_ID_Pos))
#define CFG_USER_ID_Msk                       _U_(0x0000FFFF)                                      /**< (CFG_USER_ID) Register Mask  */


/* -------- CFG_SYSKEY : (CFG Offset: 0xB0) (R/W 32)  -------- */
#define CFG_SYSKEY_RESETVALUE                 _U_(0x00)                                            /**<  (CFG_SYSKEY)   Reset Value */

#define CFG_SYSKEY_SYSKEY_Pos                 _U_(0)                                               /**< (CFG_SYSKEY) System Key Position */
#define CFG_SYSKEY_SYSKEY_Msk                 (_U_(0xFFFFFFFF) << CFG_SYSKEY_SYSKEY_Pos)           /**< (CFG_SYSKEY) System Key Mask */
#define CFG_SYSKEY_SYSKEY(value)              (CFG_SYSKEY_SYSKEY_Msk & ((value) << CFG_SYSKEY_SYSKEY_Pos))
#define CFG_SYSKEY_Msk                        _U_(0xFFFFFFFF)                                      /**< (CFG_SYSKEY) Register Mask  */


/* -------- CFG_PMD1 : (CFG Offset: 0xC0) (R/W 32)  -------- */
#define CFG_PMD1_RESETVALUE                   _U_(0x00)                                            /**<  (CFG_PMD1)   Reset Value */

#define CFG_PMD1_ZBMD_Pos                     _U_(0)                                               /**< (CFG_PMD1) ZigBee Module Disable Position */
#define CFG_PMD1_ZBMD_Msk                     (_U_(0x1) << CFG_PMD1_ZBMD_Pos)                      /**< (CFG_PMD1) ZigBee Module Disable Mask */
#define CFG_PMD1_ZBMD(value)                  (CFG_PMD1_ZBMD_Msk & ((value) << CFG_PMD1_ZBMD_Pos))
#define CFG_PMD1_BTMD_Pos                     _U_(1)                                               /**< (CFG_PMD1) Bluetooth Module Disable Position */
#define CFG_PMD1_BTMD_Msk                     (_U_(0x1) << CFG_PMD1_BTMD_Pos)                      /**< (CFG_PMD1) Bluetooth Module Disable Mask */
#define CFG_PMD1_BTMD(value)                  (CFG_PMD1_BTMD_Msk & ((value) << CFG_PMD1_BTMD_Pos))
#define CFG_PMD1_MPAMD_Pos                    _U_(2)                                               /**< (CFG_PMD1) RF MPA Module Disable Position */
#define CFG_PMD1_MPAMD_Msk                    (_U_(0x1) << CFG_PMD1_MPAMD_Pos)                     /**< (CFG_PMD1) RF MPA Module Disable Mask */
#define CFG_PMD1_MPAMD(value)                 (CFG_PMD1_MPAMD_Msk & ((value) << CFG_PMD1_MPAMD_Pos))
#define CFG_PMD1_LPAMD_Pos                    _U_(3)                                               /**< (CFG_PMD1) RF LPA Module Disable Position */
#define CFG_PMD1_LPAMD_Msk                    (_U_(0x1) << CFG_PMD1_LPAMD_Pos)                     /**< (CFG_PMD1) RF LPA Module Disable Mask */
#define CFG_PMD1_LPAMD(value)                 (CFG_PMD1_LPAMD_Msk & ((value) << CFG_PMD1_LPAMD_Pos))
#define CFG_PMD1_PLVDMD_Pos                   _U_(4)                                               /**< (CFG_PMD1) PLVD Module Disable Position */
#define CFG_PMD1_PLVDMD_Msk                   (_U_(0x1) << CFG_PMD1_PLVDMD_Pos)                    /**< (CFG_PMD1) PLVD Module Disable Mask */
#define CFG_PMD1_PLVDMD(value)                (CFG_PMD1_PLVDMD_Msk & ((value) << CFG_PMD1_PLVDMD_Pos))
#define CFG_PMD1_ACMD_Pos                     _U_(6)                                               /**< (CFG_PMD1) AC Module Disable Position */
#define CFG_PMD1_ACMD_Msk                     (_U_(0x1) << CFG_PMD1_ACMD_Pos)                      /**< (CFG_PMD1) AC Module Disable Mask */
#define CFG_PMD1_ACMD(value)                  (CFG_PMD1_ACMD_Msk & ((value) << CFG_PMD1_ACMD_Pos))
#define CFG_PMD1_ADCMD_Pos                    _U_(7)                                               /**< (CFG_PMD1) ADC Controller Module Disable Position */
#define CFG_PMD1_ADCMD_Msk                    (_U_(0x1) << CFG_PMD1_ADCMD_Pos)                     /**< (CFG_PMD1) ADC Controller Module Disable Mask */
#define CFG_PMD1_ADCMD(value)                 (CFG_PMD1_ADCMD_Msk & ((value) << CFG_PMD1_ADCMD_Pos))
#define CFG_PMD1_ADCSARMD_Pos                 _U_(8)                                               /**< (CFG_PMD1) Shared ADC SAR Core Module Disable Position */
#define CFG_PMD1_ADCSARMD_Msk                 (_U_(0x1) << CFG_PMD1_ADCSARMD_Pos)                  /**< (CFG_PMD1) Shared ADC SAR Core Module Disable Mask */
#define CFG_PMD1_ADCSARMD(value)              (CFG_PMD1_ADCSARMD_Msk & ((value) << CFG_PMD1_ADCSARMD_Pos))
#define CFG_PMD1_RTCCMD_Pos                   _U_(16)                                              /**< (CFG_PMD1) RTCC Module Disable Position */
#define CFG_PMD1_RTCCMD_Msk                   (_U_(0x1) << CFG_PMD1_RTCCMD_Pos)                    /**< (CFG_PMD1) RTCC Module Disable Mask */
#define CFG_PMD1_RTCCMD(value)                (CFG_PMD1_RTCCMD_Msk & ((value) << CFG_PMD1_RTCCMD_Pos))
#define CFG_PMD1_SQIMD_Pos                    _U_(29)                                              /**< (CFG_PMD1) SQI Module Disable Position */
#define CFG_PMD1_SQIMD_Msk                    (_U_(0x1) << CFG_PMD1_SQIMD_Pos)                     /**< (CFG_PMD1) SQI Module Disable Mask */
#define CFG_PMD1_SQIMD(value)                 (CFG_PMD1_SQIMD_Msk & ((value) << CFG_PMD1_SQIMD_Pos))
#define CFG_PMD1_Msk                          _U_(0x200101DF)                                      /**< (CFG_PMD1) Register Mask  */


/* -------- CFG_PMD2 : (CFG Offset: 0xD0) (R/W 32)  -------- */
#define CFG_PMD2_RESETVALUE                   _U_(0x00)                                            /**<  (CFG_PMD2)   Reset Value */

#define CFG_PMD2_REFO5MD_Pos                  _U_(24)                                              /**< (CFG_PMD2) Reference (Clock) Out 5 Module Disable Position */
#define CFG_PMD2_REFO5MD_Msk                  (_U_(0x1) << CFG_PMD2_REFO5MD_Pos)                   /**< (CFG_PMD2) Reference (Clock) Out 5 Module Disable Mask */
#define CFG_PMD2_REFO5MD(value)               (CFG_PMD2_REFO5MD_Msk & ((value) << CFG_PMD2_REFO5MD_Pos))
#define CFG_PMD2_REFO6MD_Pos                  _U_(25)                                              /**< (CFG_PMD2) Reference (Clock) Out 6 Module Disable Position */
#define CFG_PMD2_REFO6MD_Msk                  (_U_(0x1) << CFG_PMD2_REFO6MD_Pos)                   /**< (CFG_PMD2) Reference (Clock) Out 6 Module Disable Mask */
#define CFG_PMD2_REFO6MD(value)               (CFG_PMD2_REFO6MD_Msk & ((value) << CFG_PMD2_REFO6MD_Pos))
#define CFG_PMD2_REFO1MD_Pos                  _U_(28)                                              /**< (CFG_PMD2) Reference (Clock) Out 1 Module Disable Position */
#define CFG_PMD2_REFO1MD_Msk                  (_U_(0x1) << CFG_PMD2_REFO1MD_Pos)                   /**< (CFG_PMD2) Reference (Clock) Out 1 Module Disable Mask */
#define CFG_PMD2_REFO1MD(value)               (CFG_PMD2_REFO1MD_Msk & ((value) << CFG_PMD2_REFO1MD_Pos))
#define CFG_PMD2_REFO2MD_Pos                  _U_(29)                                              /**< (CFG_PMD2) Reference (Clock) Out 2 Module Disable Position */
#define CFG_PMD2_REFO2MD_Msk                  (_U_(0x1) << CFG_PMD2_REFO2MD_Pos)                   /**< (CFG_PMD2) Reference (Clock) Out 2 Module Disable Mask */
#define CFG_PMD2_REFO2MD(value)               (CFG_PMD2_REFO2MD_Msk & ((value) << CFG_PMD2_REFO2MD_Pos))
#define CFG_PMD2_REFO3MD_Pos                  _U_(30)                                              /**< (CFG_PMD2) Reference (Clock) Out 3 Module Disable Position */
#define CFG_PMD2_REFO3MD_Msk                  (_U_(0x1) << CFG_PMD2_REFO3MD_Pos)                   /**< (CFG_PMD2) Reference (Clock) Out 3 Module Disable Mask */
#define CFG_PMD2_REFO3MD(value)               (CFG_PMD2_REFO3MD_Msk & ((value) << CFG_PMD2_REFO3MD_Pos))
#define CFG_PMD2_REFO4MD_Pos                  _U_(31)                                              /**< (CFG_PMD2) Reference (Clock) Out 4 Module Disable Position */
#define CFG_PMD2_REFO4MD_Msk                  (_U_(0x1) << CFG_PMD2_REFO4MD_Pos)                   /**< (CFG_PMD2) Reference (Clock) Out 4 Module Disable Mask */
#define CFG_PMD2_REFO4MD(value)               (CFG_PMD2_REFO4MD_Msk & ((value) << CFG_PMD2_REFO4MD_Pos))
#define CFG_PMD2_Msk                          _U_(0xF3000000)                                      /**< (CFG_PMD2) Register Mask  */


/* -------- CFG_PMD3 : (CFG Offset: 0xE0) (R/W 32)  -------- */
#define CFG_PMD3_RESETVALUE                   _U_(0x00)                                            /**<  (CFG_PMD3)   Reset Value */

#define CFG_PMD3_SER1MD_Pos                   _U_(0)                                               /**< (CFG_PMD3) SERCOM1 Module Disable Position */
#define CFG_PMD3_SER1MD_Msk                   (_U_(0x1) << CFG_PMD3_SER1MD_Pos)                    /**< (CFG_PMD3) SERCOM1 Module Disable Mask */
#define CFG_PMD3_SER1MD(value)                (CFG_PMD3_SER1MD_Msk & ((value) << CFG_PMD3_SER1MD_Pos))
#define CFG_PMD3_SER2MD_Pos                   _U_(1)                                               /**< (CFG_PMD3) SERCOM2 Module Disable Position */
#define CFG_PMD3_SER2MD_Msk                   (_U_(0x1) << CFG_PMD3_SER2MD_Pos)                    /**< (CFG_PMD3) SERCOM2 Module Disable Mask */
#define CFG_PMD3_SER2MD(value)                (CFG_PMD3_SER2MD_Msk & ((value) << CFG_PMD3_SER2MD_Pos))
#define CFG_PMD3_SER3MD_Pos                   _U_(2)                                               /**< (CFG_PMD3) SERCOM3 Module Disable Position */
#define CFG_PMD3_SER3MD_Msk                   (_U_(0x1) << CFG_PMD3_SER3MD_Pos)                    /**< (CFG_PMD3) SERCOM3 Module Disable Mask */
#define CFG_PMD3_SER3MD(value)                (CFG_PMD3_SER3MD_Msk & ((value) << CFG_PMD3_SER3MD_Pos))
#define CFG_PMD3_SER4MD_Pos                   _U_(3)                                               /**< (CFG_PMD3) SERCOM4 Module Disable Position */
#define CFG_PMD3_SER4MD_Msk                   (_U_(0x1) << CFG_PMD3_SER4MD_Pos)                    /**< (CFG_PMD3) SERCOM4 Module Disable Mask */
#define CFG_PMD3_SER4MD(value)                (CFG_PMD3_SER4MD_Msk & ((value) << CFG_PMD3_SER4MD_Pos))
#define CFG_PMD3_ICMMD_Pos                    _U_(4)                                               /**< (CFG_PMD3) ICM Module Disable Position */
#define CFG_PMD3_ICMMD_Msk                    (_U_(0x1) << CFG_PMD3_ICMMD_Pos)                     /**< (CFG_PMD3) ICM Module Disable Mask */
#define CFG_PMD3_ICMMD(value)                 (CFG_PMD3_ICMMD_Msk & ((value) << CFG_PMD3_ICMMD_Pos))
#define CFG_PMD3_PUKCCMD_Pos                  _U_(5)                                               /**< (CFG_PMD3) PUKCC Module Disable Position */
#define CFG_PMD3_PUKCCMD_Msk                  (_U_(0x1) << CFG_PMD3_PUKCCMD_Pos)                   /**< (CFG_PMD3) PUKCC Module Disable Mask */
#define CFG_PMD3_PUKCCMD(value)               (CFG_PMD3_PUKCCMD_Msk & ((value) << CFG_PMD3_PUKCCMD_Pos))
#define CFG_PMD3_RNGMD_Pos                    _U_(6)                                               /**< (CFG_PMD3) TRNG Module Disable Position */
#define CFG_PMD3_RNGMD_Msk                    (_U_(0x1) << CFG_PMD3_RNGMD_Pos)                     /**< (CFG_PMD3) TRNG Module Disable Mask */
#define CFG_PMD3_RNGMD(value)                 (CFG_PMD3_RNGMD_Msk & ((value) << CFG_PMD3_RNGMD_Pos))
#define CFG_PMD3_AESMD_Pos                    _U_(7)                                               /**< (CFG_PMD3) AES Module Disable Position */
#define CFG_PMD3_AESMD_Msk                    (_U_(0x1) << CFG_PMD3_AESMD_Pos)                     /**< (CFG_PMD3) AES Module Disable Mask */
#define CFG_PMD3_AESMD(value)                 (CFG_PMD3_AESMD_Msk & ((value) << CFG_PMD3_AESMD_Pos))
#define CFG_PMD3_TC0MD_Pos                    _U_(8)                                               /**< (CFG_PMD3) TC0 Module Disable Position */
#define CFG_PMD3_TC0MD_Msk                    (_U_(0x1) << CFG_PMD3_TC0MD_Pos)                     /**< (CFG_PMD3) TC0 Module Disable Mask */
#define CFG_PMD3_TC0MD(value)                 (CFG_PMD3_TC0MD_Msk & ((value) << CFG_PMD3_TC0MD_Pos))
#define CFG_PMD3_TC1MD_Pos                    _U_(9)                                               /**< (CFG_PMD3) TC1 Module Disable Position */
#define CFG_PMD3_TC1MD_Msk                    (_U_(0x1) << CFG_PMD3_TC1MD_Pos)                     /**< (CFG_PMD3) TC1 Module Disable Mask */
#define CFG_PMD3_TC1MD(value)                 (CFG_PMD3_TC1MD_Msk & ((value) << CFG_PMD3_TC1MD_Pos))
#define CFG_PMD3_TC2MD_Pos                    _U_(10)                                              /**< (CFG_PMD3) TC2 Module Disable Position */
#define CFG_PMD3_TC2MD_Msk                    (_U_(0x1) << CFG_PMD3_TC2MD_Pos)                     /**< (CFG_PMD3) TC2 Module Disable Mask */
#define CFG_PMD3_TC2MD(value)                 (CFG_PMD3_TC2MD_Msk & ((value) << CFG_PMD3_TC2MD_Pos))
#define CFG_PMD3_TC3MD_Pos                    _U_(11)                                              /**< (CFG_PMD3) TC3 Module Disable Position */
#define CFG_PMD3_TC3MD_Msk                    (_U_(0x1) << CFG_PMD3_TC3MD_Pos)                     /**< (CFG_PMD3) TC3 Module Disable Mask */
#define CFG_PMD3_TC3MD(value)                 (CFG_PMD3_TC3MD_Msk & ((value) << CFG_PMD3_TC3MD_Pos))
#define CFG_PMD3_TCC0MD_Pos                   _U_(12)                                              /**< (CFG_PMD3) TCC0 Module Disable Position */
#define CFG_PMD3_TCC0MD_Msk                   (_U_(0x1) << CFG_PMD3_TCC0MD_Pos)                    /**< (CFG_PMD3) TCC0 Module Disable Mask */
#define CFG_PMD3_TCC0MD(value)                (CFG_PMD3_TCC0MD_Msk & ((value) << CFG_PMD3_TCC0MD_Pos))
#define CFG_PMD3_TCC1MD_Pos                   _U_(13)                                              /**< (CFG_PMD3) TCC1 Module Disable Position */
#define CFG_PMD3_TCC1MD_Msk                   (_U_(0x1) << CFG_PMD3_TCC1MD_Pos)                    /**< (CFG_PMD3) TCC1 Module Disable Mask */
#define CFG_PMD3_TCC1MD(value)                (CFG_PMD3_TCC1MD_Msk & ((value) << CFG_PMD3_TCC1MD_Pos))
#define CFG_PMD3_TCC2MD_Pos                   _U_(14)                                              /**< (CFG_PMD3) TCC2 Module Disable Position */
#define CFG_PMD3_TCC2MD_Msk                   (_U_(0x1) << CFG_PMD3_TCC2MD_Pos)                    /**< (CFG_PMD3) TCC2 Module Disable Mask */
#define CFG_PMD3_TCC2MD(value)                (CFG_PMD3_TCC2MD_Msk & ((value) << CFG_PMD3_TCC2MD_Pos))
#define CFG_PMD3_Msk                          _U_(0x00007FFF)                                      /**< (CFG_PMD3) Register Mask  */


/* -------- CFG_MISCSTAT : (CFG Offset: 0x100) (R/W 32)  -------- */
#define CFG_MISCSTAT_RESETVALUE               _U_(0x1000081)                                       /**<  (CFG_MISCSTAT)   Reset Value */

#define CFG_MISCSTAT_CLDORDY_Pos              _U_(9)                                               /**< (CFG_MISCSTAT) CLDO Ready Position */
#define CFG_MISCSTAT_CLDORDY_Msk              (_U_(0x1) << CFG_MISCSTAT_CLDORDY_Pos)               /**< (CFG_MISCSTAT) CLDO Ready Mask */
#define CFG_MISCSTAT_CLDORDY(value)           (CFG_MISCSTAT_CLDORDY_Msk & ((value) << CFG_MISCSTAT_CLDORDY_Pos))
#define CFG_MISCSTAT_Msk                      _U_(0x00000200)                                      /**< (CFG_MISCSTAT) Register Mask  */


/* -------- CFG_BCFG0 : (CFG Offset: 0x200) ( R/ 32)  -------- */
#define CFG_BCFG0_RESETVALUE                  _U_(0x00)                                            /**<  (CFG_BCFG0)   Reset Value */

#define CFG_BCFG0_PCSCMODE_Pos                _U_(1)                                               /**< (CFG_BCFG0) PCHE Single cache Mode Position */
#define CFG_BCFG0_PCSCMODE_Msk                (_U_(0x1) << CFG_BCFG0_PCSCMODE_Pos)                 /**< (CFG_BCFG0) PCHE Single cache Mode Mask */
#define CFG_BCFG0_PCSCMODE(value)             (CFG_BCFG0_PCSCMODE_Msk & ((value) << CFG_BCFG0_PCSCMODE_Pos))
#define CFG_BCFG0_CP_Pos                      _U_(28)                                              /**< (CFG_BCFG0) Boot Code Protect Position */
#define CFG_BCFG0_CP_Msk                      (_U_(0x1) << CFG_BCFG0_CP_Pos)                       /**< (CFG_BCFG0) Boot Code Protect Mask */
#define CFG_BCFG0_CP(value)                   (CFG_BCFG0_CP_Msk & ((value) << CFG_BCFG0_CP_Pos))  
#define CFG_BCFG0_SIGN_Pos                    _U_(29)                                              /**< (CFG_BCFG0) Flash SIGN Position */
#define CFG_BCFG0_SIGN_Msk                    (_U_(0x1) << CFG_BCFG0_SIGN_Pos)                     /**< (CFG_BCFG0) Flash SIGN Mask */
#define CFG_BCFG0_SIGN(value)                 (CFG_BCFG0_SIGN_Msk & ((value) << CFG_BCFG0_SIGN_Pos))
#define CFG_BCFG0_BINFOVALID0_Pos             _U_(31)                                              /**< (CFG_BCFG0) First 256-bit BCFG information Valid Position */
#define CFG_BCFG0_BINFOVALID0_Msk             (_U_(0x1) << CFG_BCFG0_BINFOVALID0_Pos)              /**< (CFG_BCFG0) First 256-bit BCFG information Valid Mask */
#define CFG_BCFG0_BINFOVALID0(value)          (CFG_BCFG0_BINFOVALID0_Msk & ((value) << CFG_BCFG0_BINFOVALID0_Pos))
#define CFG_BCFG0_Msk                         _U_(0xB0000002)                                      /**< (CFG_BCFG0) Register Mask  */

#define CFG_BCFG0_BINFOVALID_Pos              _U_(31)                                              /**< (CFG_BCFG0 Position) First 256-bit BCFG information Valid */
#define CFG_BCFG0_BINFOVALID_Msk              (_U_(0x1) << CFG_BCFG0_BINFOVALID_Pos)               /**< (CFG_BCFG0 Mask) BINFOVALID */
#define CFG_BCFG0_BINFOVALID(value)           (CFG_BCFG0_BINFOVALID_Msk & ((value) << CFG_BCFG0_BINFOVALID_Pos)) 

/* -------- CFG_CFGCON0CLR : (CFG Offset: 0x04) (R/W 32) Bit clear register -------- */
#define CFG_CFGCON0CLR_RESETVALUE             _U_(0x00)                                            /**<  (CFG_CFGCON0CLR) Bit clear register  Reset Value */

#define CFG_CFGCON0CLR_Msk                    _U_(0x00000000)                                      /**< (CFG_CFGCON0CLR) Register Mask  */


/* -------- CFG_CFGCON0SET : (CFG Offset: 0x08) (R/W 32) Bit set register -------- */
#define CFG_CFGCON0SET_RESETVALUE             _U_(0x00)                                            /**<  (CFG_CFGCON0SET) Bit set register  Reset Value */

#define CFG_CFGCON0SET_Msk                    _U_(0x00000000)                                      /**< (CFG_CFGCON0SET) Register Mask  */


/* -------- CFG_CFGCON0INV : (CFG Offset: 0x0C) (R/W 32) Bit invert register -------- */
#define CFG_CFGCON0INV_RESETVALUE             _U_(0x00)                                            /**<  (CFG_CFGCON0INV) Bit invert register  Reset Value */

#define CFG_CFGCON0INV_Msk                    _U_(0x00000000)                                      /**< (CFG_CFGCON0INV) Register Mask  */


/* -------- CFG_CFGCON1CLR : (CFG Offset: 0x14) (R/W 32) Bit clear register -------- */
#define CFG_CFGCON1CLR_RESETVALUE             _U_(0x00)                                            /**<  (CFG_CFGCON1CLR) Bit clear register  Reset Value */

#define CFG_CFGCON1CLR_Msk                    _U_(0x00000000)                                      /**< (CFG_CFGCON1CLR) Register Mask  */


/* -------- CFG_CFGCON1SET : (CFG Offset: 0x18) (R/W 32) Bit set register -------- */
#define CFG_CFGCON1SET_RESETVALUE             _U_(0x00)                                            /**<  (CFG_CFGCON1SET) Bit set register  Reset Value */

#define CFG_CFGCON1SET_Msk                    _U_(0x00000000)                                      /**< (CFG_CFGCON1SET) Register Mask  */


/* -------- CFG_CFGCON1INV : (CFG Offset: 0x1C) (R/W 32) Bit invert register -------- */
#define CFG_CFGCON1INV_RESETVALUE             _U_(0x00)                                            /**<  (CFG_CFGCON1INV) Bit invert register  Reset Value */

#define CFG_CFGCON1INV_Msk                    _U_(0x00000000)                                      /**< (CFG_CFGCON1INV) Register Mask  */


/* -------- CFG_CFGCON2CLR : (CFG Offset: 0x24) (R/W 32) Bit clear register -------- */
#define CFG_CFGCON2CLR_RESETVALUE             _U_(0x00)                                            /**<  (CFG_CFGCON2CLR) Bit clear register  Reset Value */

#define CFG_CFGCON2CLR_Msk                    _U_(0x00000000)                                      /**< (CFG_CFGCON2CLR) Register Mask  */


/* -------- CFG_CFGCON2SET : (CFG Offset: 0x28) (R/W 32) Bit set register -------- */
#define CFG_CFGCON2SET_RESETVALUE             _U_(0x00)                                            /**<  (CFG_CFGCON2SET) Bit set register  Reset Value */

#define CFG_CFGCON2SET_Msk                    _U_(0x00000000)                                      /**< (CFG_CFGCON2SET) Register Mask  */


/* -------- CFG_CFGCON2INV : (CFG Offset: 0x2C) (R/W 32) Bit invert register -------- */
#define CFG_CFGCON2INV_RESETVALUE             _U_(0x00)                                            /**<  (CFG_CFGCON2INV) Bit invert register  Reset Value */

#define CFG_CFGCON2INV_Msk                    _U_(0x00000000)                                      /**< (CFG_CFGCON2INV) Register Mask  */


/* -------- CFG_CFGCON4CLR : (CFG Offset: 0x44) (R/W 32) Bit clear register -------- */
#define CFG_CFGCON4CLR_RESETVALUE             _U_(0x00)                                            /**<  (CFG_CFGCON4CLR) Bit clear register  Reset Value */

#define CFG_CFGCON4CLR_Msk                    _U_(0x00000000)                                      /**< (CFG_CFGCON4CLR) Register Mask  */


/* -------- CFG_CFGCON4SET : (CFG Offset: 0x48) (R/W 32) Bit set register -------- */
#define CFG_CFGCON4SET_RESETVALUE             _U_(0x00)                                            /**<  (CFG_CFGCON4SET) Bit set register  Reset Value */

#define CFG_CFGCON4SET_Msk                    _U_(0x00000000)                                      /**< (CFG_CFGCON4SET) Register Mask  */


/* -------- CFG_CFGCON4INV : (CFG Offset: 0x4C) (R/W 32) Bit invert register -------- */
#define CFG_CFGCON4INV_RESETVALUE             _U_(0x00)                                            /**<  (CFG_CFGCON4INV) Bit invert register  Reset Value */

#define CFG_CFGCON4INV_Msk                    _U_(0x00000000)                                      /**< (CFG_CFGCON4INV) Register Mask  */


/* -------- CFG_CFGPGQOSCLR : (CFG Offset: 0x54) (R/W 32) Bit clear register -------- */
#define CFG_CFGPGQOSCLR_RESETVALUE            _U_(0x00)                                            /**<  (CFG_CFGPGQOSCLR) Bit clear register  Reset Value */

#define CFG_CFGPGQOSCLR_Msk                   _U_(0x00000000)                                      /**< (CFG_CFGPGQOSCLR) Register Mask  */


/* -------- CFG_CFGPGQOSSET : (CFG Offset: 0x58) (R/W 32) Bit set register -------- */
#define CFG_CFGPGQOSSET_RESETVALUE            _U_(0x00)                                            /**<  (CFG_CFGPGQOSSET) Bit set register  Reset Value */

#define CFG_CFGPGQOSSET_Msk                   _U_(0x00000000)                                      /**< (CFG_CFGPGQOSSET) Register Mask  */


/* -------- CFG_CFGPGQOSINV : (CFG Offset: 0x5C) (R/W 32) Bit invert register -------- */
#define CFG_CFGPGQOSINV_RESETVALUE            _U_(0x00)                                            /**<  (CFG_CFGPGQOSINV) Bit invert register  Reset Value */

#define CFG_CFGPGQOSINV_Msk                   _U_(0x00000000)                                      /**< (CFG_CFGPGQOSINV) Register Mask  */


/* -------- CFG_CFGPCLKGEN1CLR : (CFG Offset: 0x64) (R/W 32) Bit clear register -------- */
#define CFG_CFGPCLKGEN1CLR_RESETVALUE         _U_(0x00)                                            /**<  (CFG_CFGPCLKGEN1CLR) Bit clear register  Reset Value */

#define CFG_CFGPCLKGEN1CLR_Msk                _U_(0x00000000)                                      /**< (CFG_CFGPCLKGEN1CLR) Register Mask  */


/* -------- CFG_CFGPCLKGEN1SET : (CFG Offset: 0x68) (R/W 32) Bit set register -------- */
#define CFG_CFGPCLKGEN1SET_RESETVALUE         _U_(0x00)                                            /**<  (CFG_CFGPCLKGEN1SET) Bit set register  Reset Value */

#define CFG_CFGPCLKGEN1SET_Msk                _U_(0x00000000)                                      /**< (CFG_CFGPCLKGEN1SET) Register Mask  */


/* -------- CFG_CFGPCLKGEN1INV : (CFG Offset: 0x6C) (R/W 32) Bit invert register -------- */
#define CFG_CFGPCLKGEN1INV_RESETVALUE         _U_(0x00)                                            /**<  (CFG_CFGPCLKGEN1INV) Bit invert register  Reset Value */

#define CFG_CFGPCLKGEN1INV_Msk                _U_(0x00000000)                                      /**< (CFG_CFGPCLKGEN1INV) Register Mask  */


/* -------- CFG_CFGPCLKGEN2CLR : (CFG Offset: 0x74) (R/W 32) Bit clear register -------- */
#define CFG_CFGPCLKGEN2CLR_RESETVALUE         _U_(0x00)                                            /**<  (CFG_CFGPCLKGEN2CLR) Bit clear register  Reset Value */

#define CFG_CFGPCLKGEN2CLR_Msk                _U_(0x00000000)                                      /**< (CFG_CFGPCLKGEN2CLR) Register Mask  */


/* -------- CFG_CFGPCLKGEN2SET : (CFG Offset: 0x78) (R/W 32) Bit set register -------- */
#define CFG_CFGPCLKGEN2SET_RESETVALUE         _U_(0x00)                                            /**<  (CFG_CFGPCLKGEN2SET) Bit set register  Reset Value */

#define CFG_CFGPCLKGEN2SET_Msk                _U_(0x00000000)                                      /**< (CFG_CFGPCLKGEN2SET) Register Mask  */


/* -------- CFG_CFGPCLKGEN2INV : (CFG Offset: 0x7C) (R/W 32) Bit invert register -------- */
#define CFG_CFGPCLKGEN2INV_RESETVALUE         _U_(0x00)                                            /**<  (CFG_CFGPCLKGEN2INV) Bit invert register  Reset Value */

#define CFG_CFGPCLKGEN2INV_Msk                _U_(0x00000000)                                      /**< (CFG_CFGPCLKGEN2INV) Register Mask  */


/* -------- CFG_CFGPCLKGEN3CLR : (CFG Offset: 0x84) (R/W 32) Bit clear register -------- */
#define CFG_CFGPCLKGEN3CLR_RESETVALUE         _U_(0x00)                                            /**<  (CFG_CFGPCLKGEN3CLR) Bit clear register  Reset Value */

#define CFG_CFGPCLKGEN3CLR_Msk                _U_(0x00000000)                                      /**< (CFG_CFGPCLKGEN3CLR) Register Mask  */


/* -------- CFG_CFGPCLKGEN3SET : (CFG Offset: 0x88) (R/W 32) Bit set register -------- */
#define CFG_CFGPCLKGEN3SET_RESETVALUE         _U_(0x00)                                            /**<  (CFG_CFGPCLKGEN3SET) Bit set register  Reset Value */

#define CFG_CFGPCLKGEN3SET_Msk                _U_(0x00000000)                                      /**< (CFG_CFGPCLKGEN3SET) Register Mask  */


/* -------- CFG_CFGPCLKGEN3INV : (CFG Offset: 0x8C) (R/W 32) Bit invert register -------- */
#define CFG_CFGPCLKGEN3INV_RESETVALUE         _U_(0x00)                                            /**<  (CFG_CFGPCLKGEN3INV) Bit invert register  Reset Value */

#define CFG_CFGPCLKGEN3INV_Msk                _U_(0x00000000)                                      /**< (CFG_CFGPCLKGEN3INV) Register Mask  */


/* -------- CFG_USER_IDCLR : (CFG Offset: 0xA4) (R/W 32) Bit clear register -------- */
#define CFG_USER_IDCLR_RESETVALUE             _U_(0x00)                                            /**<  (CFG_USER_IDCLR) Bit clear register  Reset Value */

#define CFG_USER_IDCLR_Msk                    _U_(0x00000000)                                      /**< (CFG_USER_IDCLR) Register Mask  */


/* -------- CFG_USER_IDSET : (CFG Offset: 0xA8) (R/W 32) Bit set register -------- */
#define CFG_USER_IDSET_RESETVALUE             _U_(0x00)                                            /**<  (CFG_USER_IDSET) Bit set register  Reset Value */

#define CFG_USER_IDSET_Msk                    _U_(0x00000000)                                      /**< (CFG_USER_IDSET) Register Mask  */


/* -------- CFG_USER_IDINV : (CFG Offset: 0xAC) (R/W 32) Bit invert register -------- */
#define CFG_USER_IDINV_RESETVALUE             _U_(0x00)                                            /**<  (CFG_USER_IDINV) Bit invert register  Reset Value */

#define CFG_USER_IDINV_Msk                    _U_(0x00000000)                                      /**< (CFG_USER_IDINV) Register Mask  */


/* -------- CFG_PMD1CLR : (CFG Offset: 0xC4) (R/W 32) Bit clear register -------- */
#define CFG_PMD1CLR_RESETVALUE                _U_(0x00)                                            /**<  (CFG_PMD1CLR) Bit clear register  Reset Value */

#define CFG_PMD1CLR_Msk                       _U_(0x00000000)                                      /**< (CFG_PMD1CLR) Register Mask  */


/* -------- CFG_PMD1SET : (CFG Offset: 0xC8) (R/W 32) Bit set register -------- */
#define CFG_PMD1SET_RESETVALUE                _U_(0x00)                                            /**<  (CFG_PMD1SET) Bit set register  Reset Value */

#define CFG_PMD1SET_Msk                       _U_(0x00000000)                                      /**< (CFG_PMD1SET) Register Mask  */


/* -------- CFG_PMD1INV : (CFG Offset: 0xCC) (R/W 32) Bit invert register -------- */
#define CFG_PMD1INV_RESETVALUE                _U_(0x00)                                            /**<  (CFG_PMD1INV) Bit invert register  Reset Value */

#define CFG_PMD1INV_Msk                       _U_(0x00000000)                                      /**< (CFG_PMD1INV) Register Mask  */


/* -------- CFG_PMD2CLR : (CFG Offset: 0xD4) (R/W 32) Bit clear register -------- */
#define CFG_PMD2CLR_RESETVALUE                _U_(0x00)                                            /**<  (CFG_PMD2CLR) Bit clear register  Reset Value */

#define CFG_PMD2CLR_Msk                       _U_(0x00000000)                                      /**< (CFG_PMD2CLR) Register Mask  */


/* -------- CFG_PMD2SET : (CFG Offset: 0xD8) (R/W 32) Bit set register -------- */
#define CFG_PMD2SET_RESETVALUE                _U_(0x00)                                            /**<  (CFG_PMD2SET) Bit set register  Reset Value */

#define CFG_PMD2SET_Msk                       _U_(0x00000000)                                      /**< (CFG_PMD2SET) Register Mask  */


/* -------- CFG_PMD2INV : (CFG Offset: 0xDC) (R/W 32) Bit invert register -------- */
#define CFG_PMD2INV_RESETVALUE                _U_(0x00)                                            /**<  (CFG_PMD2INV) Bit invert register  Reset Value */

#define CFG_PMD2INV_Msk                       _U_(0x00000000)                                      /**< (CFG_PMD2INV) Register Mask  */


/* -------- CFG_PMD3CLR : (CFG Offset: 0xE4) (R/W 32) Bit clear register -------- */
#define CFG_PMD3CLR_RESETVALUE                _U_(0x00)                                            /**<  (CFG_PMD3CLR) Bit clear register  Reset Value */

#define CFG_PMD3CLR_Msk                       _U_(0x00000000)                                      /**< (CFG_PMD3CLR) Register Mask  */


/* -------- CFG_PMD3SET : (CFG Offset: 0xE8) (R/W 32) Bit set register -------- */
#define CFG_PMD3SET_RESETVALUE                _U_(0x00)                                            /**<  (CFG_PMD3SET) Bit set register  Reset Value */

#define CFG_PMD3SET_Msk                       _U_(0x00000000)                                      /**< (CFG_PMD3SET) Register Mask  */


/* -------- CFG_PMD3INV : (CFG Offset: 0xEC) (R/W 32) Bit invert register -------- */
#define CFG_PMD3INV_RESETVALUE                _U_(0x00)                                            /**<  (CFG_PMD3INV) Bit invert register  Reset Value */

#define CFG_PMD3INV_Msk                       _U_(0x00000000)                                      /**< (CFG_PMD3INV) Register Mask  */


/** \brief CFG register offsets definitions */
#define CFG_CFGCON0_REG_OFST           (0x00)              /**< (CFG_CFGCON0)  Offset */
#define CFG_CFGCON1_REG_OFST           (0x10)              /**< (CFG_CFGCON1)  Offset */
#define CFG_CFGCON2_REG_OFST           (0x20)              /**< (CFG_CFGCON2)  Offset */
#define CFG_CFGCON4_REG_OFST           (0x40)              /**< (CFG_CFGCON4)  Offset */
#define CFG_CFGPGQOS_REG_OFST          (0x50)              /**< (CFG_CFGPGQOS)  Offset */
#define CFG_CFGPCLKGEN1_REG_OFST       (0x60)              /**< (CFG_CFGPCLKGEN1)  Offset */
#define CFG_CFGPCLKGEN2_REG_OFST       (0x70)              /**< (CFG_CFGPCLKGEN2)  Offset */
#define CFG_CFGPCLKGEN3_REG_OFST       (0x80)              /**< (CFG_CFGPCLKGEN3)  Offset */
#define CFG_ID_REG_OFST                (0x90)              /**< (CFG_ID) Device ID Offset */
#define CFG_USER_ID_REG_OFST           (0xA0)              /**< (CFG_USER_ID)  Offset */
#define CFG_SYSKEY_REG_OFST            (0xB0)              /**< (CFG_SYSKEY)  Offset */
#define CFG_PMD1_REG_OFST              (0xC0)              /**< (CFG_PMD1)  Offset */
#define CFG_PMD2_REG_OFST              (0xD0)              /**< (CFG_PMD2)  Offset */
#define CFG_PMD3_REG_OFST              (0xE0)              /**< (CFG_PMD3)  Offset */
#define CFG_MISCSTAT_REG_OFST          (0x100)             /**< (CFG_MISCSTAT)  Offset */
#define CFG_BCFG0_REG_OFST             (0x200)             /**< (CFG_BCFG0)  Offset */
#define CFG_CFGCON0CLR_REG_OFST        (0x04)              /**< (CFG_CFGCON0CLR) Bit clear register Offset */
#define CFG_CFGCON0SET_REG_OFST        (0x08)              /**< (CFG_CFGCON0SET) Bit set register Offset */
#define CFG_CFGCON0INV_REG_OFST        (0x0C)              /**< (CFG_CFGCON0INV) Bit invert register Offset */
#define CFG_CFGCON1CLR_REG_OFST        (0x14)              /**< (CFG_CFGCON1CLR) Bit clear register Offset */
#define CFG_CFGCON1SET_REG_OFST        (0x18)              /**< (CFG_CFGCON1SET) Bit set register Offset */
#define CFG_CFGCON1INV_REG_OFST        (0x1C)              /**< (CFG_CFGCON1INV) Bit invert register Offset */
#define CFG_CFGCON2CLR_REG_OFST        (0x24)              /**< (CFG_CFGCON2CLR) Bit clear register Offset */
#define CFG_CFGCON2SET_REG_OFST        (0x28)              /**< (CFG_CFGCON2SET) Bit set register Offset */
#define CFG_CFGCON2INV_REG_OFST        (0x2C)              /**< (CFG_CFGCON2INV) Bit invert register Offset */
#define CFG_CFGCON4CLR_REG_OFST        (0x44)              /**< (CFG_CFGCON4CLR) Bit clear register Offset */
#define CFG_CFGCON4SET_REG_OFST        (0x48)              /**< (CFG_CFGCON4SET) Bit set register Offset */
#define CFG_CFGCON4INV_REG_OFST        (0x4C)              /**< (CFG_CFGCON4INV) Bit invert register Offset */
#define CFG_CFGPGQOSCLR_REG_OFST       (0x54)              /**< (CFG_CFGPGQOSCLR) Bit clear register Offset */
#define CFG_CFGPGQOSSET_REG_OFST       (0x58)              /**< (CFG_CFGPGQOSSET) Bit set register Offset */
#define CFG_CFGPGQOSINV_REG_OFST       (0x5C)              /**< (CFG_CFGPGQOSINV) Bit invert register Offset */
#define CFG_CFGPCLKGEN1CLR_REG_OFST    (0x64)              /**< (CFG_CFGPCLKGEN1CLR) Bit clear register Offset */
#define CFG_CFGPCLKGEN1SET_REG_OFST    (0x68)              /**< (CFG_CFGPCLKGEN1SET) Bit set register Offset */
#define CFG_CFGPCLKGEN1INV_REG_OFST    (0x6C)              /**< (CFG_CFGPCLKGEN1INV) Bit invert register Offset */
#define CFG_CFGPCLKGEN2CLR_REG_OFST    (0x74)              /**< (CFG_CFGPCLKGEN2CLR) Bit clear register Offset */
#define CFG_CFGPCLKGEN2SET_REG_OFST    (0x78)              /**< (CFG_CFGPCLKGEN2SET) Bit set register Offset */
#define CFG_CFGPCLKGEN2INV_REG_OFST    (0x7C)              /**< (CFG_CFGPCLKGEN2INV) Bit invert register Offset */
#define CFG_CFGPCLKGEN3CLR_REG_OFST    (0x84)              /**< (CFG_CFGPCLKGEN3CLR) Bit clear register Offset */
#define CFG_CFGPCLKGEN3SET_REG_OFST    (0x88)              /**< (CFG_CFGPCLKGEN3SET) Bit set register Offset */
#define CFG_CFGPCLKGEN3INV_REG_OFST    (0x8C)              /**< (CFG_CFGPCLKGEN3INV) Bit invert register Offset */
#define CFG_USER_IDCLR_REG_OFST        (0xA4)              /**< (CFG_USER_IDCLR) Bit clear register Offset */
#define CFG_USER_IDSET_REG_OFST        (0xA8)              /**< (CFG_USER_IDSET) Bit set register Offset */
#define CFG_USER_IDINV_REG_OFST        (0xAC)              /**< (CFG_USER_IDINV) Bit invert register Offset */
#define CFG_PMD1CLR_REG_OFST           (0xC4)              /**< (CFG_PMD1CLR) Bit clear register Offset */
#define CFG_PMD1SET_REG_OFST           (0xC8)              /**< (CFG_PMD1SET) Bit set register Offset */
#define CFG_PMD1INV_REG_OFST           (0xCC)              /**< (CFG_PMD1INV) Bit invert register Offset */
#define CFG_PMD2CLR_REG_OFST           (0xD4)              /**< (CFG_PMD2CLR) Bit clear register Offset */
#define CFG_PMD2SET_REG_OFST           (0xD8)              /**< (CFG_PMD2SET) Bit set register Offset */
#define CFG_PMD2INV_REG_OFST           (0xDC)              /**< (CFG_PMD2INV) Bit invert register Offset */
#define CFG_PMD3CLR_REG_OFST           (0xE4)              /**< (CFG_PMD3CLR) Bit clear register Offset */
#define CFG_PMD3SET_REG_OFST           (0xE8)              /**< (CFG_PMD3SET) Bit set register Offset */
#define CFG_PMD3INV_REG_OFST           (0xEC)              /**< (CFG_PMD3INV) Bit invert register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief CFG register API structure */
typedef struct
{  /*  */
  __IO  uint32_t                       CFG_CFGCON0;        /**< Offset: 0x00 (R/W  32)  */
  __IO  uint32_t                       CFG_CFGCON0CLR;     /**< Offset: 0x04 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_CFGCON0SET;     /**< Offset: 0x08 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_CFGCON0INV;     /**< Offset: 0x0C (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_CFGCON1;        /**< Offset: 0x10 (R/W  32)  */
  __IO  uint32_t                       CFG_CFGCON1CLR;     /**< Offset: 0x14 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_CFGCON1SET;     /**< Offset: 0x18 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_CFGCON1INV;     /**< Offset: 0x1C (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_CFGCON2;        /**< Offset: 0x20 (R/W  32)  */
  __IO  uint32_t                       CFG_CFGCON2CLR;     /**< Offset: 0x24 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_CFGCON2SET;     /**< Offset: 0x28 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_CFGCON2INV;     /**< Offset: 0x2C (R/W  32) Bit invert register */
  __I   uint8_t                        Reserved1[0x10];
  __IO  uint32_t                       CFG_CFGCON4;        /**< Offset: 0x40 (R/W  32)  */
  __IO  uint32_t                       CFG_CFGCON4CLR;     /**< Offset: 0x44 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_CFGCON4SET;     /**< Offset: 0x48 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_CFGCON4INV;     /**< Offset: 0x4C (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_CFGPGQOS;       /**< Offset: 0x50 (R/W  32)  */
  __IO  uint32_t                       CFG_CFGPGQOSCLR;    /**< Offset: 0x54 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_CFGPGQOSSET;    /**< Offset: 0x58 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_CFGPGQOSINV;    /**< Offset: 0x5C (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_CFGPCLKGEN1;    /**< Offset: 0x60 (R/W  32)  */
  __IO  uint32_t                       CFG_CFGPCLKGEN1CLR; /**< Offset: 0x64 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_CFGPCLKGEN1SET; /**< Offset: 0x68 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_CFGPCLKGEN1INV; /**< Offset: 0x6C (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_CFGPCLKGEN2;    /**< Offset: 0x70 (R/W  32)  */
  __IO  uint32_t                       CFG_CFGPCLKGEN2CLR; /**< Offset: 0x74 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_CFGPCLKGEN2SET; /**< Offset: 0x78 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_CFGPCLKGEN2INV; /**< Offset: 0x7C (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_CFGPCLKGEN3;    /**< Offset: 0x80 (R/W  32)  */
  __IO  uint32_t                       CFG_CFGPCLKGEN3CLR; /**< Offset: 0x84 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_CFGPCLKGEN3SET; /**< Offset: 0x88 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_CFGPCLKGEN3INV; /**< Offset: 0x8C (R/W  32) Bit invert register */
  __I   uint32_t                       CFG_ID;             /**< Offset: 0x90 (R/   32) Device ID */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint32_t                       CFG_USER_ID;        /**< Offset: 0xA0 (R/W  32)  */
  __IO  uint32_t                       CFG_USER_IDCLR;     /**< Offset: 0xA4 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_USER_IDSET;     /**< Offset: 0xA8 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_USER_IDINV;     /**< Offset: 0xAC (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_SYSKEY;         /**< Offset: 0xB0 (R/W  32)  */
  __I   uint8_t                        Reserved3[0x0C];
  __IO  uint32_t                       CFG_PMD1;           /**< Offset: 0xC0 (R/W  32)  */
  __IO  uint32_t                       CFG_PMD1CLR;        /**< Offset: 0xC4 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_PMD1SET;        /**< Offset: 0xC8 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_PMD1INV;        /**< Offset: 0xCC (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_PMD2;           /**< Offset: 0xD0 (R/W  32)  */
  __IO  uint32_t                       CFG_PMD2CLR;        /**< Offset: 0xD4 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_PMD2SET;        /**< Offset: 0xD8 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_PMD2INV;        /**< Offset: 0xDC (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_PMD3;           /**< Offset: 0xE0 (R/W  32)  */
  __IO  uint32_t                       CFG_PMD3CLR;        /**< Offset: 0xE4 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_PMD3SET;        /**< Offset: 0xE8 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_PMD3INV;        /**< Offset: 0xEC (R/W  32) Bit invert register */
  __I   uint8_t                        Reserved4[0x10];
  __IO  uint32_t                       CFG_MISCSTAT;       /**< Offset: 0x100 (R/W  32)  */
  __I   uint8_t                        Reserved5[0xFC];
  __I   uint32_t                       CFG_BCFG0;          /**< Offset: 0x200 (R/   32)  */
} cfg_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _BZ45_CFG_COMPONENT_H_ */
