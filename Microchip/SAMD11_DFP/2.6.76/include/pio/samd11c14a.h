/*
 * Peripheral I/O description for SAMD11C14A
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

/* file generated from device description version 2019-11-25T07:00:44Z */
#ifndef _SAMD11C14A_GPIO_H_
#define _SAMD11C14A_GPIO_H_

/* ========== Peripheral I/O pin numbers ========== */
#define PIN_PA02                    (    2)  /**< Pin Number for PA02 */
#define PIN_PA04                    (    4)  /**< Pin Number for PA04 */
#define PIN_PA05                    (    5)  /**< Pin Number for PA05 */
#define PIN_PA08                    (    8)  /**< Pin Number for PA08 */
#define PIN_PA09                    (    9)  /**< Pin Number for PA09 */
#define PIN_PA14                    (   14)  /**< Pin Number for PA14 */
#define PIN_PA15                    (   15)  /**< Pin Number for PA15 */
#define PIN_PA24                    (   24)  /**< Pin Number for PA24 */
#define PIN_PA25                    (   25)  /**< Pin Number for PA25 */
#define PIN_PA28                    (   28)  /**< Pin Number for PA28 */
#define PIN_PA30                    (   30)  /**< Pin Number for PA30 */
#define PIN_PA31                    (   31)  /**< Pin Number for PA31 */

/* ========== Peripheral I/O masks ========== */
#define PORT_PA02                   (_UINT32_(1) << 2) /**< PORT mask for PA02 */
#define PORT_PA04                   (_UINT32_(1) << 4) /**< PORT mask for PA04 */
#define PORT_PA05                   (_UINT32_(1) << 5) /**< PORT mask for PA05 */
#define PORT_PA08                   (_UINT32_(1) << 8) /**< PORT mask for PA08 */
#define PORT_PA09                   (_UINT32_(1) << 9) /**< PORT mask for PA09 */
#define PORT_PA14                   (_UINT32_(1) << 14) /**< PORT mask for PA14 */
#define PORT_PA15                   (_UINT32_(1) << 15) /**< PORT mask for PA15 */
#define PORT_PA24                   (_UINT32_(1) << 24) /**< PORT mask for PA24 */
#define PORT_PA25                   (_UINT32_(1) << 25) /**< PORT mask for PA25 */
#define PORT_PA28                   (_UINT32_(1) << 28) /**< PORT mask for PA28 */
#define PORT_PA30                   (_UINT32_(1) << 30) /**< PORT mask for PA30 */
#define PORT_PA31                   (_UINT32_(1) << 31) /**< PORT mask for PA31 */

/* ========== PORT definition for AC peripheral ========== */
#define PIN_PA04B_AC_AIN0                          _UINT32_(4) 
#define MUX_PA04B_AC_AIN0                          _UINT32_(1) 
#define PINMUX_PA04B_AC_AIN0                       ((PIN_PA04B_AC_AIN0 << 16) | MUX_PA04B_AC_AIN0)
#define PORT_PA04B_AC_AIN0                         (_UINT32_(1) << 4)

#define PIN_PA05B_AC_AIN1                          _UINT32_(5) 
#define MUX_PA05B_AC_AIN1                          _UINT32_(1) 
#define PINMUX_PA05B_AC_AIN1                       ((PIN_PA05B_AC_AIN1 << 16) | MUX_PA05B_AC_AIN1)
#define PORT_PA05B_AC_AIN1                         (_UINT32_(1) << 5)

#define PIN_PA14G_AC_CMP0                          _UINT32_(14)
#define MUX_PA14G_AC_CMP0                          _UINT32_(6) 
#define PINMUX_PA14G_AC_CMP0                       ((PIN_PA14G_AC_CMP0 << 16) | MUX_PA14G_AC_CMP0)
#define PORT_PA14G_AC_CMP0                         (_UINT32_(1) << 14)

#define PIN_PA15G_AC_CMP1                          _UINT32_(15)
#define MUX_PA15G_AC_CMP1                          _UINT32_(6) 
#define PINMUX_PA15G_AC_CMP1                       ((PIN_PA15G_AC_CMP1 << 16) | MUX_PA15G_AC_CMP1)
#define PORT_PA15G_AC_CMP1                         (_UINT32_(1) << 15)

/* ========== PORT definition for ADC peripheral ========== */
#define PIN_PA02B_ADC_AIN0                         _UINT32_(2) 
#define MUX_PA02B_ADC_AIN0                         _UINT32_(1) 
#define PINMUX_PA02B_ADC_AIN0                      ((PIN_PA02B_ADC_AIN0 << 16) | MUX_PA02B_ADC_AIN0)
#define PORT_PA02B_ADC_AIN0                        (_UINT32_(1) << 2)

#define PIN_PA04B_ADC_AIN2                         _UINT32_(4) 
#define MUX_PA04B_ADC_AIN2                         _UINT32_(1) 
#define PINMUX_PA04B_ADC_AIN2                      ((PIN_PA04B_ADC_AIN2 << 16) | MUX_PA04B_ADC_AIN2)
#define PORT_PA04B_ADC_AIN2                        (_UINT32_(1) << 4)

#define PIN_PA05B_ADC_AIN3                         _UINT32_(5) 
#define MUX_PA05B_ADC_AIN3                         _UINT32_(1) 
#define PINMUX_PA05B_ADC_AIN3                      ((PIN_PA05B_ADC_AIN3 << 16) | MUX_PA05B_ADC_AIN3)
#define PORT_PA05B_ADC_AIN3                        (_UINT32_(1) << 5)

#define PIN_PA14B_ADC_AIN6                         _UINT32_(14)
#define MUX_PA14B_ADC_AIN6                         _UINT32_(1) 
#define PINMUX_PA14B_ADC_AIN6                      ((PIN_PA14B_ADC_AIN6 << 16) | MUX_PA14B_ADC_AIN6)
#define PORT_PA14B_ADC_AIN6                        (_UINT32_(1) << 14)

#define PIN_PA15B_ADC_AIN7                         _UINT32_(15)
#define MUX_PA15B_ADC_AIN7                         _UINT32_(1) 
#define PINMUX_PA15B_ADC_AIN7                      ((PIN_PA15B_ADC_AIN7 << 16) | MUX_PA15B_ADC_AIN7)
#define PORT_PA15B_ADC_AIN7                        (_UINT32_(1) << 15)

#define PIN_PA04B_ADC_VREFP                        _UINT32_(4) 
#define MUX_PA04B_ADC_VREFP                        _UINT32_(1) 
#define PINMUX_PA04B_ADC_VREFP                     ((PIN_PA04B_ADC_VREFP << 16) | MUX_PA04B_ADC_VREFP)
#define PORT_PA04B_ADC_VREFP                       (_UINT32_(1) << 4)

/* ========== PORT definition for DAC peripheral ========== */
#define PIN_PA02B_DAC_VOUT                         _UINT32_(2) 
#define MUX_PA02B_DAC_VOUT                         _UINT32_(1) 
#define PINMUX_PA02B_DAC_VOUT                      ((PIN_PA02B_DAC_VOUT << 16) | MUX_PA02B_DAC_VOUT)
#define PORT_PA02B_DAC_VOUT                        (_UINT32_(1) << 2)

/* ========== PORT definition for EIC peripheral ========== */
#define PIN_PA15A_EIC_EXTINT1                      _UINT32_(15)
#define MUX_PA15A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PA15A_EIC_EXTINT1                   ((PIN_PA15A_EIC_EXTINT1 << 16) | MUX_PA15A_EIC_EXTINT1)
#define PORT_PA15A_EIC_EXTINT1                     (_UINT32_(1) << 15)
#define PIN_PA15A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PA15 External Interrupt Line */

#define PIN_PA02A_EIC_EXTINT2                      _UINT32_(2) 
#define MUX_PA02A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PA02A_EIC_EXTINT2                   ((PIN_PA02A_EIC_EXTINT2 << 16) | MUX_PA02A_EIC_EXTINT2)
#define PORT_PA02A_EIC_EXTINT2                     (_UINT32_(1) << 2)
#define PIN_PA02A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PA02 External Interrupt Line */

#define PIN_PA30A_EIC_EXTINT2                      _UINT32_(30)
#define MUX_PA30A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PA30A_EIC_EXTINT2                   ((PIN_PA30A_EIC_EXTINT2 << 16) | MUX_PA30A_EIC_EXTINT2)
#define PORT_PA30A_EIC_EXTINT2                     (_UINT32_(1) << 30)
#define PIN_PA30A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PA30 External Interrupt Line */

#define PIN_PA31A_EIC_EXTINT3                      _UINT32_(31)
#define MUX_PA31A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PA31A_EIC_EXTINT3                   ((PIN_PA31A_EIC_EXTINT3 << 16) | MUX_PA31A_EIC_EXTINT3)
#define PORT_PA31A_EIC_EXTINT3                     (_UINT32_(1) << 31)
#define PIN_PA31A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PA31 External Interrupt Line */

#define PIN_PA04A_EIC_EXTINT4                      _UINT32_(4) 
#define MUX_PA04A_EIC_EXTINT4                      _UINT32_(0) 
#define PINMUX_PA04A_EIC_EXTINT4                   ((PIN_PA04A_EIC_EXTINT4 << 16) | MUX_PA04A_EIC_EXTINT4)
#define PORT_PA04A_EIC_EXTINT4                     (_UINT32_(1) << 4)
#define PIN_PA04A_EIC_EXTINT_NUM                   _UINT32_(4)  /* EIC signal: PIN_PA04 External Interrupt Line */

#define PIN_PA24A_EIC_EXTINT4                      _UINT32_(24)
#define MUX_PA24A_EIC_EXTINT4                      _UINT32_(0) 
#define PINMUX_PA24A_EIC_EXTINT4                   ((PIN_PA24A_EIC_EXTINT4 << 16) | MUX_PA24A_EIC_EXTINT4)
#define PORT_PA24A_EIC_EXTINT4                     (_UINT32_(1) << 24)
#define PIN_PA24A_EIC_EXTINT_NUM                   _UINT32_(4)  /* EIC signal: PIN_PA24 External Interrupt Line */

#define PIN_PA05A_EIC_EXTINT5                      _UINT32_(5) 
#define MUX_PA05A_EIC_EXTINT5                      _UINT32_(0) 
#define PINMUX_PA05A_EIC_EXTINT5                   ((PIN_PA05A_EIC_EXTINT5 << 16) | MUX_PA05A_EIC_EXTINT5)
#define PORT_PA05A_EIC_EXTINT5                     (_UINT32_(1) << 5)
#define PIN_PA05A_EIC_EXTINT_NUM                   _UINT32_(5)  /* EIC signal: PIN_PA05 External Interrupt Line */

#define PIN_PA25A_EIC_EXTINT5                      _UINT32_(25)
#define MUX_PA25A_EIC_EXTINT5                      _UINT32_(0) 
#define PINMUX_PA25A_EIC_EXTINT5                   ((PIN_PA25A_EIC_EXTINT5 << 16) | MUX_PA25A_EIC_EXTINT5)
#define PORT_PA25A_EIC_EXTINT5                     (_UINT32_(1) << 25)
#define PIN_PA25A_EIC_EXTINT_NUM                   _UINT32_(5)  /* EIC signal: PIN_PA25 External Interrupt Line */

#define PIN_PA08A_EIC_EXTINT6                      _UINT32_(8) 
#define MUX_PA08A_EIC_EXTINT6                      _UINT32_(0) 
#define PINMUX_PA08A_EIC_EXTINT6                   ((PIN_PA08A_EIC_EXTINT6 << 16) | MUX_PA08A_EIC_EXTINT6)
#define PORT_PA08A_EIC_EXTINT6                     (_UINT32_(1) << 8)
#define PIN_PA08A_EIC_EXTINT_NUM                   _UINT32_(6)  /* EIC signal: PIN_PA08 External Interrupt Line */

#define PIN_PA09A_EIC_EXTINT7                      _UINT32_(9) 
#define MUX_PA09A_EIC_EXTINT7                      _UINT32_(0) 
#define PINMUX_PA09A_EIC_EXTINT7                   ((PIN_PA09A_EIC_EXTINT7 << 16) | MUX_PA09A_EIC_EXTINT7)
#define PORT_PA09A_EIC_EXTINT7                     (_UINT32_(1) << 9)
#define PIN_PA09A_EIC_EXTINT_NUM                   _UINT32_(7)  /* EIC signal: PIN_PA09 External Interrupt Line */

#define PIN_PA14A_EIC_NMI                          _UINT32_(14)
#define MUX_PA14A_EIC_NMI                          _UINT32_(0) 
#define PINMUX_PA14A_EIC_NMI                       ((PIN_PA14A_EIC_NMI << 16) | MUX_PA14A_EIC_NMI)
#define PORT_PA14A_EIC_NMI                         (_UINT32_(1) << 14)

/* ========== PORT definition for GCLK peripheral ========== */
#define PIN_PA08H_GCLK_IO0                         _UINT32_(8) 
#define MUX_PA08H_GCLK_IO0                         _UINT32_(7) 
#define PINMUX_PA08H_GCLK_IO0                      ((PIN_PA08H_GCLK_IO0 << 16) | MUX_PA08H_GCLK_IO0)
#define PORT_PA08H_GCLK_IO0                        (_UINT32_(1) << 8)

#define PIN_PA24H_GCLK_IO0                         _UINT32_(24)
#define MUX_PA24H_GCLK_IO0                         _UINT32_(7) 
#define PINMUX_PA24H_GCLK_IO0                      ((PIN_PA24H_GCLK_IO0 << 16) | MUX_PA24H_GCLK_IO0)
#define PORT_PA24H_GCLK_IO0                        (_UINT32_(1) << 24)

#define PIN_PA25H_GCLK_IO0                         _UINT32_(25)
#define MUX_PA25H_GCLK_IO0                         _UINT32_(7) 
#define PINMUX_PA25H_GCLK_IO0                      ((PIN_PA25H_GCLK_IO0 << 16) | MUX_PA25H_GCLK_IO0)
#define PORT_PA25H_GCLK_IO0                        (_UINT32_(1) << 25)

#define PIN_PA30H_GCLK_IO0                         _UINT32_(30)
#define MUX_PA30H_GCLK_IO0                         _UINT32_(7) 
#define PINMUX_PA30H_GCLK_IO0                      ((PIN_PA30H_GCLK_IO0 << 16) | MUX_PA30H_GCLK_IO0)
#define PORT_PA30H_GCLK_IO0                        (_UINT32_(1) << 30)

#define PIN_PA31H_GCLK_IO0                         _UINT32_(31)
#define MUX_PA31H_GCLK_IO0                         _UINT32_(7) 
#define PINMUX_PA31H_GCLK_IO0                      ((PIN_PA31H_GCLK_IO0 << 16) | MUX_PA31H_GCLK_IO0)
#define PORT_PA31H_GCLK_IO0                        (_UINT32_(1) << 31)

#define PIN_PA09H_GCLK_IO1                         _UINT32_(9) 
#define MUX_PA09H_GCLK_IO1                         _UINT32_(7) 
#define PINMUX_PA09H_GCLK_IO1                      ((PIN_PA09H_GCLK_IO1 << 16) | MUX_PA09H_GCLK_IO1)
#define PORT_PA09H_GCLK_IO1                        (_UINT32_(1) << 9)

#define PIN_PA14H_GCLK_IO4                         _UINT32_(14)
#define MUX_PA14H_GCLK_IO4                         _UINT32_(7) 
#define PINMUX_PA14H_GCLK_IO4                      ((PIN_PA14H_GCLK_IO4 << 16) | MUX_PA14H_GCLK_IO4)
#define PORT_PA14H_GCLK_IO4                        (_UINT32_(1) << 14)

#define PIN_PA15H_GCLK_IO5                         _UINT32_(15)
#define MUX_PA15H_GCLK_IO5                         _UINT32_(7) 
#define PINMUX_PA15H_GCLK_IO5                      ((PIN_PA15H_GCLK_IO5 << 16) | MUX_PA15H_GCLK_IO5)
#define PORT_PA15H_GCLK_IO5                        (_UINT32_(1) << 15)

/* ========== PORT definition for PTC peripheral ========== */
#define PIN_PA14B_PTC_X0                           _UINT32_(14)
#define MUX_PA14B_PTC_X0                           _UINT32_(1) 
#define PINMUX_PA14B_PTC_X0                        ((PIN_PA14B_PTC_X0 << 16) | MUX_PA14B_PTC_X0)
#define PORT_PA14B_PTC_X0                          (_UINT32_(1) << 14)

#define PIN_PA15B_PTC_X1                           _UINT32_(15)
#define MUX_PA15B_PTC_X1                           _UINT32_(1) 
#define PINMUX_PA15B_PTC_X1                        ((PIN_PA15B_PTC_X1 << 16) | MUX_PA15B_PTC_X1)
#define PORT_PA15B_PTC_X1                          (_UINT32_(1) << 15)

#define PIN_PA24B_PTC_X8                           _UINT32_(24)
#define MUX_PA24B_PTC_X8                           _UINT32_(1) 
#define PINMUX_PA24B_PTC_X8                        ((PIN_PA24B_PTC_X8 << 16) | MUX_PA24B_PTC_X8)
#define PORT_PA24B_PTC_X8                          (_UINT32_(1) << 24)

#define PIN_PA25B_PTC_X9                           _UINT32_(25)
#define MUX_PA25B_PTC_X9                           _UINT32_(1) 
#define PINMUX_PA25B_PTC_X9                        ((PIN_PA25B_PTC_X9 << 16) | MUX_PA25B_PTC_X9)
#define PORT_PA25B_PTC_X9                          (_UINT32_(1) << 25)

#define PIN_PA02B_PTC_Y0                           _UINT32_(2) 
#define MUX_PA02B_PTC_Y0                           _UINT32_(1) 
#define PINMUX_PA02B_PTC_Y0                        ((PIN_PA02B_PTC_Y0 << 16) | MUX_PA02B_PTC_Y0)
#define PORT_PA02B_PTC_Y0                          (_UINT32_(1) << 2)

#define PIN_PA04B_PTC_Y2                           _UINT32_(4) 
#define MUX_PA04B_PTC_Y2                           _UINT32_(1) 
#define PINMUX_PA04B_PTC_Y2                        ((PIN_PA04B_PTC_Y2 << 16) | MUX_PA04B_PTC_Y2)
#define PORT_PA04B_PTC_Y2                          (_UINT32_(1) << 4)

#define PIN_PA05B_PTC_Y3                           _UINT32_(5) 
#define MUX_PA05B_PTC_Y3                           _UINT32_(1) 
#define PINMUX_PA05B_PTC_Y3                        ((PIN_PA05B_PTC_Y3 << 16) | MUX_PA05B_PTC_Y3)
#define PORT_PA05B_PTC_Y3                          (_UINT32_(1) << 5)

#define PIN_PA14B_PTC_Y6                           _UINT32_(14)
#define MUX_PA14B_PTC_Y6                           _UINT32_(1) 
#define PINMUX_PA14B_PTC_Y6                        ((PIN_PA14B_PTC_Y6 << 16) | MUX_PA14B_PTC_Y6)
#define PORT_PA14B_PTC_Y6                          (_UINT32_(1) << 14)

#define PIN_PA15B_PTC_Y7                           _UINT32_(15)
#define MUX_PA15B_PTC_Y7                           _UINT32_(1) 
#define PINMUX_PA15B_PTC_Y7                        ((PIN_PA15B_PTC_Y7 << 16) | MUX_PA15B_PTC_Y7)
#define PORT_PA15B_PTC_Y7                          (_UINT32_(1) << 15)

#define PIN_PA24B_PTC_Y14                          _UINT32_(24)
#define MUX_PA24B_PTC_Y14                          _UINT32_(1) 
#define PINMUX_PA24B_PTC_Y14                       ((PIN_PA24B_PTC_Y14 << 16) | MUX_PA24B_PTC_Y14)
#define PORT_PA24B_PTC_Y14                         (_UINT32_(1) << 24)

#define PIN_PA25B_PTC_Y15                          _UINT32_(25)
#define MUX_PA25B_PTC_Y15                          _UINT32_(1) 
#define PINMUX_PA25B_PTC_Y15                       ((PIN_PA25B_PTC_Y15 << 16) | MUX_PA25B_PTC_Y15)
#define PORT_PA25B_PTC_Y15                         (_UINT32_(1) << 25)

/* ========== PORT definition for SERCOM0 peripheral ========== */
#define PIN_PA04D_SERCOM0_PAD0                     _UINT32_(4) 
#define MUX_PA04D_SERCOM0_PAD0                     _UINT32_(3) 
#define PINMUX_PA04D_SERCOM0_PAD0                  ((PIN_PA04D_SERCOM0_PAD0 << 16) | MUX_PA04D_SERCOM0_PAD0)
#define PORT_PA04D_SERCOM0_PAD0                    (_UINT32_(1) << 4)

#define PIN_PA14C_SERCOM0_PAD0                     _UINT32_(14)
#define MUX_PA14C_SERCOM0_PAD0                     _UINT32_(2) 
#define PINMUX_PA14C_SERCOM0_PAD0                  ((PIN_PA14C_SERCOM0_PAD0 << 16) | MUX_PA14C_SERCOM0_PAD0)
#define PORT_PA14C_SERCOM0_PAD0                    (_UINT32_(1) << 14)

#define PIN_PA05D_SERCOM0_PAD1                     _UINT32_(5) 
#define MUX_PA05D_SERCOM0_PAD1                     _UINT32_(3) 
#define PINMUX_PA05D_SERCOM0_PAD1                  ((PIN_PA05D_SERCOM0_PAD1 << 16) | MUX_PA05D_SERCOM0_PAD1)
#define PORT_PA05D_SERCOM0_PAD1                    (_UINT32_(1) << 5)

#define PIN_PA15C_SERCOM0_PAD1                     _UINT32_(15)
#define MUX_PA15C_SERCOM0_PAD1                     _UINT32_(2) 
#define PINMUX_PA15C_SERCOM0_PAD1                  ((PIN_PA15C_SERCOM0_PAD1 << 16) | MUX_PA15C_SERCOM0_PAD1)
#define PORT_PA15C_SERCOM0_PAD1                    (_UINT32_(1) << 15)

#define PIN_PA08D_SERCOM0_PAD2                     _UINT32_(8) 
#define MUX_PA08D_SERCOM0_PAD2                     _UINT32_(3) 
#define PINMUX_PA08D_SERCOM0_PAD2                  ((PIN_PA08D_SERCOM0_PAD2 << 16) | MUX_PA08D_SERCOM0_PAD2)
#define PORT_PA08D_SERCOM0_PAD2                    (_UINT32_(1) << 8)

#define PIN_PA04C_SERCOM0_PAD2                     _UINT32_(4) 
#define MUX_PA04C_SERCOM0_PAD2                     _UINT32_(2) 
#define PINMUX_PA04C_SERCOM0_PAD2                  ((PIN_PA04C_SERCOM0_PAD2 << 16) | MUX_PA04C_SERCOM0_PAD2)
#define PORT_PA04C_SERCOM0_PAD2                    (_UINT32_(1) << 4)

#define PIN_PA09D_SERCOM0_PAD3                     _UINT32_(9) 
#define MUX_PA09D_SERCOM0_PAD3                     _UINT32_(3) 
#define PINMUX_PA09D_SERCOM0_PAD3                  ((PIN_PA09D_SERCOM0_PAD3 << 16) | MUX_PA09D_SERCOM0_PAD3)
#define PORT_PA09D_SERCOM0_PAD3                    (_UINT32_(1) << 9)

#define PIN_PA05C_SERCOM0_PAD3                     _UINT32_(5) 
#define MUX_PA05C_SERCOM0_PAD3                     _UINT32_(2) 
#define PINMUX_PA05C_SERCOM0_PAD3                  ((PIN_PA05C_SERCOM0_PAD3 << 16) | MUX_PA05C_SERCOM0_PAD3)
#define PORT_PA05C_SERCOM0_PAD3                    (_UINT32_(1) << 5)

/* ========== PORT definition for SERCOM1 peripheral ========== */
#define PIN_PA30C_SERCOM1_PAD0                     _UINT32_(30)
#define MUX_PA30C_SERCOM1_PAD0                     _UINT32_(2) 
#define PINMUX_PA30C_SERCOM1_PAD0                  ((PIN_PA30C_SERCOM1_PAD0 << 16) | MUX_PA30C_SERCOM1_PAD0)
#define PORT_PA30C_SERCOM1_PAD0                    (_UINT32_(1) << 30)

#define PIN_PA31C_SERCOM1_PAD1                     _UINT32_(31)
#define MUX_PA31C_SERCOM1_PAD1                     _UINT32_(2) 
#define PINMUX_PA31C_SERCOM1_PAD1                  ((PIN_PA31C_SERCOM1_PAD1 << 16) | MUX_PA31C_SERCOM1_PAD1)
#define PORT_PA31C_SERCOM1_PAD1                    (_UINT32_(1) << 31)

#define PIN_PA30D_SERCOM1_PAD2                     _UINT32_(30)
#define MUX_PA30D_SERCOM1_PAD2                     _UINT32_(3) 
#define PINMUX_PA30D_SERCOM1_PAD2                  ((PIN_PA30D_SERCOM1_PAD2 << 16) | MUX_PA30D_SERCOM1_PAD2)
#define PORT_PA30D_SERCOM1_PAD2                    (_UINT32_(1) << 30)

#define PIN_PA24C_SERCOM1_PAD2                     _UINT32_(24)
#define MUX_PA24C_SERCOM1_PAD2                     _UINT32_(2) 
#define PINMUX_PA24C_SERCOM1_PAD2                  ((PIN_PA24C_SERCOM1_PAD2 << 16) | MUX_PA24C_SERCOM1_PAD2)
#define PORT_PA24C_SERCOM1_PAD2                    (_UINT32_(1) << 24)

#define PIN_PA08C_SERCOM1_PAD2                     _UINT32_(8) 
#define MUX_PA08C_SERCOM1_PAD2                     _UINT32_(2) 
#define PINMUX_PA08C_SERCOM1_PAD2                  ((PIN_PA08C_SERCOM1_PAD2 << 16) | MUX_PA08C_SERCOM1_PAD2)
#define PORT_PA08C_SERCOM1_PAD2                    (_UINT32_(1) << 8)

#define PIN_PA31D_SERCOM1_PAD3                     _UINT32_(31)
#define MUX_PA31D_SERCOM1_PAD3                     _UINT32_(3) 
#define PINMUX_PA31D_SERCOM1_PAD3                  ((PIN_PA31D_SERCOM1_PAD3 << 16) | MUX_PA31D_SERCOM1_PAD3)
#define PORT_PA31D_SERCOM1_PAD3                    (_UINT32_(1) << 31)

#define PIN_PA25C_SERCOM1_PAD3                     _UINT32_(25)
#define MUX_PA25C_SERCOM1_PAD3                     _UINT32_(2) 
#define PINMUX_PA25C_SERCOM1_PAD3                  ((PIN_PA25C_SERCOM1_PAD3 << 16) | MUX_PA25C_SERCOM1_PAD3)
#define PORT_PA25C_SERCOM1_PAD3                    (_UINT32_(1) << 25)

#define PIN_PA09C_SERCOM1_PAD3                     _UINT32_(9) 
#define MUX_PA09C_SERCOM1_PAD3                     _UINT32_(2) 
#define PINMUX_PA09C_SERCOM1_PAD3                  ((PIN_PA09C_SERCOM1_PAD3 << 16) | MUX_PA09C_SERCOM1_PAD3)
#define PORT_PA09C_SERCOM1_PAD3                    (_UINT32_(1) << 9)

/* ========== PORT definition for TC1 peripheral ========== */
#define PIN_PA04E_TC1_WO0                          _UINT32_(4) 
#define MUX_PA04E_TC1_WO0                          _UINT32_(4) 
#define PINMUX_PA04E_TC1_WO0                       ((PIN_PA04E_TC1_WO0 << 16) | MUX_PA04E_TC1_WO0)
#define PORT_PA04E_TC1_WO0                         (_UINT32_(1) << 4)

#define PIN_PA14E_TC1_WO0                          _UINT32_(14)
#define MUX_PA14E_TC1_WO0                          _UINT32_(4) 
#define PINMUX_PA14E_TC1_WO0                       ((PIN_PA14E_TC1_WO0 << 16) | MUX_PA14E_TC1_WO0)
#define PORT_PA14E_TC1_WO0                         (_UINT32_(1) << 14)

#define PIN_PA05E_TC1_WO1                          _UINT32_(5) 
#define MUX_PA05E_TC1_WO1                          _UINT32_(4) 
#define PINMUX_PA05E_TC1_WO1                       ((PIN_PA05E_TC1_WO1 << 16) | MUX_PA05E_TC1_WO1)
#define PORT_PA05E_TC1_WO1                         (_UINT32_(1) << 5)

#define PIN_PA15E_TC1_WO1                          _UINT32_(15)
#define MUX_PA15E_TC1_WO1                          _UINT32_(4) 
#define PINMUX_PA15E_TC1_WO1                       ((PIN_PA15E_TC1_WO1 << 16) | MUX_PA15E_TC1_WO1)
#define PORT_PA15E_TC1_WO1                         (_UINT32_(1) << 15)

/* ========== PORT definition for TC2 peripheral ========== */
#define PIN_PA30E_TC2_WO0                          _UINT32_(30)
#define MUX_PA30E_TC2_WO0                          _UINT32_(4) 
#define PINMUX_PA30E_TC2_WO0                       ((PIN_PA30E_TC2_WO0 << 16) | MUX_PA30E_TC2_WO0)
#define PORT_PA30E_TC2_WO0                         (_UINT32_(1) << 30)

#define PIN_PA31E_TC2_WO1                          _UINT32_(31)
#define MUX_PA31E_TC2_WO1                          _UINT32_(4) 
#define PINMUX_PA31E_TC2_WO1                       ((PIN_PA31E_TC2_WO1 << 16) | MUX_PA31E_TC2_WO1)
#define PORT_PA31E_TC2_WO1                         (_UINT32_(1) << 31)

/* ========== PORT definition for TCC0 peripheral ========== */
#define PIN_PA04F_TCC0_WO0                         _UINT32_(4) 
#define MUX_PA04F_TCC0_WO0                         _UINT32_(5) 
#define PINMUX_PA04F_TCC0_WO0                      ((PIN_PA04F_TCC0_WO0 << 16) | MUX_PA04F_TCC0_WO0)
#define PORT_PA04F_TCC0_WO0                        (_UINT32_(1) << 4)

#define PIN_PA14F_TCC0_WO0                         _UINT32_(14)
#define MUX_PA14F_TCC0_WO0                         _UINT32_(5) 
#define PINMUX_PA14F_TCC0_WO0                      ((PIN_PA14F_TCC0_WO0 << 16) | MUX_PA14F_TCC0_WO0)
#define PORT_PA14F_TCC0_WO0                        (_UINT32_(1) << 14)

#define PIN_PA05F_TCC0_WO1                         _UINT32_(5) 
#define MUX_PA05F_TCC0_WO1                         _UINT32_(5) 
#define PINMUX_PA05F_TCC0_WO1                      ((PIN_PA05F_TCC0_WO1 << 16) | MUX_PA05F_TCC0_WO1)
#define PORT_PA05F_TCC0_WO1                        (_UINT32_(1) << 5)

#define PIN_PA15F_TCC0_WO1                         _UINT32_(15)
#define MUX_PA15F_TCC0_WO1                         _UINT32_(5) 
#define PINMUX_PA15F_TCC0_WO1                      ((PIN_PA15F_TCC0_WO1 << 16) | MUX_PA15F_TCC0_WO1)
#define PORT_PA15F_TCC0_WO1                        (_UINT32_(1) << 15)

#define PIN_PA30F_TCC0_WO2                         _UINT32_(30)
#define MUX_PA30F_TCC0_WO2                         _UINT32_(5) 
#define PINMUX_PA30F_TCC0_WO2                      ((PIN_PA30F_TCC0_WO2 << 16) | MUX_PA30F_TCC0_WO2)
#define PORT_PA30F_TCC0_WO2                        (_UINT32_(1) << 30)

#define PIN_PA08E_TCC0_WO2                         _UINT32_(8) 
#define MUX_PA08E_TCC0_WO2                         _UINT32_(4) 
#define PINMUX_PA08E_TCC0_WO2                      ((PIN_PA08E_TCC0_WO2 << 16) | MUX_PA08E_TCC0_WO2)
#define PORT_PA08E_TCC0_WO2                        (_UINT32_(1) << 8)

#define PIN_PA24E_TCC0_WO2                         _UINT32_(24)
#define MUX_PA24E_TCC0_WO2                         _UINT32_(4) 
#define PINMUX_PA24E_TCC0_WO2                      ((PIN_PA24E_TCC0_WO2 << 16) | MUX_PA24E_TCC0_WO2)
#define PORT_PA24E_TCC0_WO2                        (_UINT32_(1) << 24)

#define PIN_PA31F_TCC0_WO3                         _UINT32_(31)
#define MUX_PA31F_TCC0_WO3                         _UINT32_(5) 
#define PINMUX_PA31F_TCC0_WO3                      ((PIN_PA31F_TCC0_WO3 << 16) | MUX_PA31F_TCC0_WO3)
#define PORT_PA31F_TCC0_WO3                        (_UINT32_(1) << 31)

#define PIN_PA09E_TCC0_WO3                         _UINT32_(9) 
#define MUX_PA09E_TCC0_WO3                         _UINT32_(4) 
#define PINMUX_PA09E_TCC0_WO3                      ((PIN_PA09E_TCC0_WO3 << 16) | MUX_PA09E_TCC0_WO3)
#define PORT_PA09E_TCC0_WO3                        (_UINT32_(1) << 9)

#define PIN_PA25E_TCC0_WO3                         _UINT32_(25)
#define MUX_PA25E_TCC0_WO3                         _UINT32_(4) 
#define PINMUX_PA25E_TCC0_WO3                      ((PIN_PA25E_TCC0_WO3 << 16) | MUX_PA25E_TCC0_WO3)
#define PORT_PA25E_TCC0_WO3                        (_UINT32_(1) << 25)

#define PIN_PA24F_TCC0_WO4                         _UINT32_(24)
#define MUX_PA24F_TCC0_WO4                         _UINT32_(5) 
#define PINMUX_PA24F_TCC0_WO4                      ((PIN_PA24F_TCC0_WO4 << 16) | MUX_PA24F_TCC0_WO4)
#define PORT_PA24F_TCC0_WO4                        (_UINT32_(1) << 24)

#define PIN_PA08F_TCC0_WO4                         _UINT32_(8) 
#define MUX_PA08F_TCC0_WO4                         _UINT32_(5) 
#define PINMUX_PA08F_TCC0_WO4                      ((PIN_PA08F_TCC0_WO4 << 16) | MUX_PA08F_TCC0_WO4)
#define PORT_PA08F_TCC0_WO4                        (_UINT32_(1) << 8)

#define PIN_PA25F_TCC0_WO5                         _UINT32_(25)
#define MUX_PA25F_TCC0_WO5                         _UINT32_(5) 
#define PINMUX_PA25F_TCC0_WO5                      ((PIN_PA25F_TCC0_WO5 << 16) | MUX_PA25F_TCC0_WO5)
#define PORT_PA25F_TCC0_WO5                        (_UINT32_(1) << 25)

#define PIN_PA09F_TCC0_WO5                         _UINT32_(9) 
#define MUX_PA09F_TCC0_WO5                         _UINT32_(5) 
#define PINMUX_PA09F_TCC0_WO5                      ((PIN_PA09F_TCC0_WO5 << 16) | MUX_PA09F_TCC0_WO5)
#define PORT_PA09F_TCC0_WO5                        (_UINT32_(1) << 9)

/* ========== PORT definition for USB peripheral ========== */
#define PIN_PA24G_USB_DM                           _UINT32_(24)
#define MUX_PA24G_USB_DM                           _UINT32_(6) 
#define PINMUX_PA24G_USB_DM                        ((PIN_PA24G_USB_DM << 16) | MUX_PA24G_USB_DM)
#define PORT_PA24G_USB_DM                          (_UINT32_(1) << 24)

#define PIN_PA25G_USB_DP                           _UINT32_(25)
#define MUX_PA25G_USB_DP                           _UINT32_(6) 
#define PINMUX_PA25G_USB_DP                        ((PIN_PA25G_USB_DP << 16) | MUX_PA25G_USB_DP)
#define PORT_PA25G_USB_DP                          (_UINT32_(1) << 25)



#endif /* _SAMD11C14A_GPIO_H_ */

