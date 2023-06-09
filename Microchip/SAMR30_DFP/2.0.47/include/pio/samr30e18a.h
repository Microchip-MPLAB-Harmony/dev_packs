/*
 * Peripheral I/O description for SAMR30E18A
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

/* file generated from device description version 2021-06-07T06:13:43Z */
#ifndef _SAMR30E18A_GPIO_H_
#define _SAMR30E18A_GPIO_H_

/* ========== Peripheral I/O pin numbers ========== */
#define PIN_PA06                    (  6  )  /**< Pin Number for PA06 */
#define PIN_PA07                    (  7  )  /**< Pin Number for PA07 */
#define PIN_PA08                    (  8  )  /**< Pin Number for PA08 */
#define PIN_PA09                    (  9  )  /**< Pin Number for PA09 */
#define PIN_PA10                    ( 10  )  /**< Pin Number for PA10 */
#define PIN_PA11                    ( 11  )  /**< Pin Number for PA11 */
#define PIN_PA14                    ( 14  )  /**< Pin Number for PA14 */
#define PIN_PA15                    ( 15  )  /**< Pin Number for PA15 */
#define PIN_PA16                    ( 16  )  /**< Pin Number for PA16 */
#define PIN_PA17                    ( 17  )  /**< Pin Number for PA17 */
#define PIN_PA18                    ( 18  )  /**< Pin Number for PA18 */
#define PIN_PA19                    ( 19  )  /**< Pin Number for PA19 */
#define PIN_PA20                    ( 20  )  /**< Pin Number for PA20 */
#define PIN_PA24                    ( 24  )  /**< Pin Number for PA24 */
#define PIN_PA25                    ( 25  )  /**< Pin Number for PA25 */
#define PIN_PA27                    ( 27  )  /**< Pin Number for PA27 */
#define PIN_PA28                    ( 28  )  /**< Pin Number for PA28 */
#define PIN_PA30                    ( 30  )  /**< Pin Number for PA30 */
#define PIN_PA31                    ( 31  )  /**< Pin Number for PA31 */
#define PIN_PB00                    ( 32  )  /**< Pin Number for PB00 */
#define PIN_PB08                    ( 40  )  /**< Pin Number for PB08 */
#define PIN_PB09                    ( 41  )  /**< Pin Number for PB09 */
#define PIN_PB14                    ( 46  )  /**< Pin Number for PB14 */
#define PIN_PB15                    ( 47  )  /**< Pin Number for PB15 */
#define PIN_PB16                    ( 48  )  /**< Pin Number for PB16 */
#define PIN_PB17                    ( 49  )  /**< Pin Number for PB17 */
#define PIN_PB30                    ( 62  )  /**< Pin Number for PB30 */
#define PIN_PB31                    ( 63  )  /**< Pin Number for PB31 */
#define PIN_PC16                    ( 80  )  /**< Pin Number for PC16 */
#define PIN_PC18                    ( 82  )  /**< Pin Number for PC18 */
#define PIN_PC19                    ( 83  )  /**< Pin Number for PC19 */

/* ========== Peripheral I/O masks ========== */
#define PORT_PA06                   (_U_(1) << 6)   /**< PORT mask for PA06 */
#define PORT_PA07                   (_U_(1) << 7)   /**< PORT mask for PA07 */
#define PORT_PA08                   (_U_(1) << 8)   /**< PORT mask for PA08 */
#define PORT_PA09                   (_U_(1) << 9)   /**< PORT mask for PA09 */
#define PORT_PA10                   (_U_(1) << 10)  /**< PORT mask for PA10 */
#define PORT_PA11                   (_U_(1) << 11)  /**< PORT mask for PA11 */
#define PORT_PA14                   (_U_(1) << 14)  /**< PORT mask for PA14 */
#define PORT_PA15                   (_U_(1) << 15)  /**< PORT mask for PA15 */
#define PORT_PA16                   (_U_(1) << 16)  /**< PORT mask for PA16 */
#define PORT_PA17                   (_U_(1) << 17)  /**< PORT mask for PA17 */
#define PORT_PA18                   (_U_(1) << 18)  /**< PORT mask for PA18 */
#define PORT_PA19                   (_U_(1) << 19)  /**< PORT mask for PA19 */
#define PORT_PA20                   (_U_(1) << 20)  /**< PORT mask for PA20 */
#define PORT_PA24                   (_U_(1) << 24)  /**< PORT mask for PA24 */
#define PORT_PA25                   (_U_(1) << 25)  /**< PORT mask for PA25 */
#define PORT_PA27                   (_U_(1) << 27)  /**< PORT mask for PA27 */
#define PORT_PA28                   (_U_(1) << 28)  /**< PORT mask for PA28 */
#define PORT_PA30                   (_U_(1) << 30)  /**< PORT mask for PA30 */
#define PORT_PA31                   (_U_(1) << 31)  /**< PORT mask for PA31 */
#define PORT_PB00                   (_U_(1) << 0)   /**< PORT mask for PB00 */
#define PORT_PB08                   (_U_(1) << 8)   /**< PORT mask for PB08 */
#define PORT_PB09                   (_U_(1) << 9)   /**< PORT mask for PB09 */
#define PORT_PB14                   (_U_(1) << 14)  /**< PORT mask for PB14 */
#define PORT_PB15                   (_U_(1) << 15)  /**< PORT mask for PB15 */
#define PORT_PB16                   (_U_(1) << 16)  /**< PORT mask for PB16 */
#define PORT_PB17                   (_U_(1) << 17)  /**< PORT mask for PB17 */
#define PORT_PB30                   (_U_(1) << 30)  /**< PORT mask for PB30 */
#define PORT_PB31                   (_U_(1) << 31)  /**< PORT mask for PB31 */
#define PORT_PC16                   (_U_(1) << 16)  /**< PORT mask for PC16 */
#define PORT_PC18                   (_U_(1) << 18)  /**< PORT mask for PC18 */
#define PORT_PC19                   (_U_(1) << 19)  /**< PORT mask for PC19 */

/* ========== PORT definition for AC peripheral ========== */
#define PIN_PA06B_AC_AIN2                          _UL_(6)     
#define MUX_PA06B_AC_AIN2                          _UL_(1)     
#define PINMUX_PA06B_AC_AIN2                       ((PIN_PA06B_AC_AIN2 << 16) | MUX_PA06B_AC_AIN2)
#define PORT_PA06B_AC_AIN2                         (_UL_(1) << 6)

#define PIN_PA07B_AC_AIN3                          _UL_(7)     
#define MUX_PA07B_AC_AIN3                          _UL_(1)     
#define PINMUX_PA07B_AC_AIN3                       ((PIN_PA07B_AC_AIN3 << 16) | MUX_PA07B_AC_AIN3)
#define PORT_PA07B_AC_AIN3                         (_UL_(1) << 7)

#define PIN_PA18H_AC_CMP0                          _UL_(18)    
#define MUX_PA18H_AC_CMP0                          _UL_(7)     
#define PINMUX_PA18H_AC_CMP0                       ((PIN_PA18H_AC_CMP0 << 16) | MUX_PA18H_AC_CMP0)
#define PORT_PA18H_AC_CMP0                         (_UL_(1) << 18)

#define PIN_PA19H_AC_CMP1                          _UL_(19)    
#define MUX_PA19H_AC_CMP1                          _UL_(7)     
#define PINMUX_PA19H_AC_CMP1                       ((PIN_PA19H_AC_CMP1 << 16) | MUX_PA19H_AC_CMP1)
#define PORT_PA19H_AC_CMP1                         (_UL_(1) << 19)

/* ========== PORT definition for ADC peripheral ========== */
#define PIN_PB08B_ADC_AIN2                         _UL_(40)    
#define MUX_PB08B_ADC_AIN2                         _UL_(1)     
#define PINMUX_PB08B_ADC_AIN2                      ((PIN_PB08B_ADC_AIN2 << 16) | MUX_PB08B_ADC_AIN2)
#define PORT_PB08B_ADC_AIN2                        (_UL_(1) << 8)

#define PIN_PB09B_ADC_AIN3                         _UL_(41)    
#define MUX_PB09B_ADC_AIN3                         _UL_(1)     
#define PINMUX_PB09B_ADC_AIN3                      ((PIN_PB09B_ADC_AIN3 << 16) | MUX_PB09B_ADC_AIN3)
#define PORT_PB09B_ADC_AIN3                        (_UL_(1) << 9)

#define PIN_PA06B_ADC_AIN6                         _UL_(6)     
#define MUX_PA06B_ADC_AIN6                         _UL_(1)     
#define PINMUX_PA06B_ADC_AIN6                      ((PIN_PA06B_ADC_AIN6 << 16) | MUX_PA06B_ADC_AIN6)
#define PORT_PA06B_ADC_AIN6                        (_UL_(1) << 6)

#define PIN_PA07B_ADC_AIN7                         _UL_(7)     
#define MUX_PA07B_ADC_AIN7                         _UL_(1)     
#define PINMUX_PA07B_ADC_AIN7                      ((PIN_PA07B_ADC_AIN7 << 16) | MUX_PA07B_ADC_AIN7)
#define PORT_PA07B_ADC_AIN7                        (_UL_(1) << 7)

#define PIN_PB00B_ADC_AIN8                         _UL_(32)    
#define MUX_PB00B_ADC_AIN8                         _UL_(1)     
#define PINMUX_PB00B_ADC_AIN8                      ((PIN_PB00B_ADC_AIN8 << 16) | MUX_PB00B_ADC_AIN8)
#define PORT_PB00B_ADC_AIN8                        (_UL_(1) << 0)

#define PIN_PA08B_ADC_AIN16                        _UL_(8)     
#define MUX_PA08B_ADC_AIN16                        _UL_(1)     
#define PINMUX_PA08B_ADC_AIN16                     ((PIN_PA08B_ADC_AIN16 << 16) | MUX_PA08B_ADC_AIN16)
#define PORT_PA08B_ADC_AIN16                       (_UL_(1) << 8)

#define PIN_PA09B_ADC_AIN17                        _UL_(9)     
#define MUX_PA09B_ADC_AIN17                        _UL_(1)     
#define PINMUX_PA09B_ADC_AIN17                     ((PIN_PA09B_ADC_AIN17 << 16) | MUX_PA09B_ADC_AIN17)
#define PORT_PA09B_ADC_AIN17                       (_UL_(1) << 9)

#define PIN_PA10B_ADC_AIN18                        _UL_(10)    
#define MUX_PA10B_ADC_AIN18                        _UL_(1)     
#define PINMUX_PA10B_ADC_AIN18                     ((PIN_PA10B_ADC_AIN18 << 16) | MUX_PA10B_ADC_AIN18)
#define PORT_PA10B_ADC_AIN18                       (_UL_(1) << 10)

#define PIN_PA11B_ADC_AIN19                        _UL_(11)    
#define MUX_PA11B_ADC_AIN19                        _UL_(1)     
#define PINMUX_PA11B_ADC_AIN19                     ((PIN_PA11B_ADC_AIN19 << 16) | MUX_PA11B_ADC_AIN19)
#define PORT_PA11B_ADC_AIN19                       (_UL_(1) << 11)

/* ========== PORT definition for CCL peripheral ========== */
#define PIN_PA16I_CCL_IN0                          _UL_(16)    
#define MUX_PA16I_CCL_IN0                          _UL_(8)     
#define PINMUX_PA16I_CCL_IN0                       ((PIN_PA16I_CCL_IN0 << 16) | MUX_PA16I_CCL_IN0)
#define PORT_PA16I_CCL_IN0                         (_UL_(1) << 16)

#define PIN_PA17I_CCL_IN1                          _UL_(17)    
#define MUX_PA17I_CCL_IN1                          _UL_(8)     
#define PINMUX_PA17I_CCL_IN1                       ((PIN_PA17I_CCL_IN1 << 16) | MUX_PA17I_CCL_IN1)
#define PORT_PA17I_CCL_IN1                         (_UL_(1) << 17)

#define PIN_PB00I_CCL_IN1                          _UL_(32)    
#define MUX_PB00I_CCL_IN1                          _UL_(8)     
#define PINMUX_PB00I_CCL_IN1                       ((PIN_PB00I_CCL_IN1 << 16) | MUX_PB00I_CCL_IN1)
#define PORT_PB00I_CCL_IN1                         (_UL_(1) << 0)

#define PIN_PA06I_CCL_IN2                          _UL_(6)     
#define MUX_PA06I_CCL_IN2                          _UL_(8)     
#define PINMUX_PA06I_CCL_IN2                       ((PIN_PA06I_CCL_IN2 << 16) | MUX_PA06I_CCL_IN2)
#define PORT_PA06I_CCL_IN2                         (_UL_(1) << 6)

#define PIN_PA18I_CCL_IN2                          _UL_(18)    
#define MUX_PA18I_CCL_IN2                          _UL_(8)     
#define PINMUX_PA18I_CCL_IN2                       ((PIN_PA18I_CCL_IN2 << 16) | MUX_PA18I_CCL_IN2)
#define PORT_PA18I_CCL_IN2                         (_UL_(1) << 18)

#define PIN_PA08I_CCL_IN3                          _UL_(8)     
#define MUX_PA08I_CCL_IN3                          _UL_(8)     
#define PINMUX_PA08I_CCL_IN3                       ((PIN_PA08I_CCL_IN3 << 16) | MUX_PA08I_CCL_IN3)
#define PORT_PA08I_CCL_IN3                         (_UL_(1) << 8)

#define PIN_PA30I_CCL_IN3                          _UL_(30)    
#define MUX_PA30I_CCL_IN3                          _UL_(8)     
#define PINMUX_PA30I_CCL_IN3                       ((PIN_PA30I_CCL_IN3 << 16) | MUX_PA30I_CCL_IN3)
#define PORT_PA30I_CCL_IN3                         (_UL_(1) << 30)

#define PIN_PA09I_CCL_IN4                          _UL_(9)     
#define MUX_PA09I_CCL_IN4                          _UL_(8)     
#define PINMUX_PA09I_CCL_IN4                       ((PIN_PA09I_CCL_IN4 << 16) | MUX_PA09I_CCL_IN4)
#define PORT_PA09I_CCL_IN4                         (_UL_(1) << 9)

#define PIN_PA10I_CCL_IN5                          _UL_(10)    
#define MUX_PA10I_CCL_IN5                          _UL_(8)     
#define PINMUX_PA10I_CCL_IN5                       ((PIN_PA10I_CCL_IN5 << 16) | MUX_PA10I_CCL_IN5)
#define PORT_PA10I_CCL_IN5                         (_UL_(1) << 10)

#define PIN_PA24I_CCL_IN8                          _UL_(24)    
#define MUX_PA24I_CCL_IN8                          _UL_(8)     
#define PINMUX_PA24I_CCL_IN8                       ((PIN_PA24I_CCL_IN8 << 16) | MUX_PA24I_CCL_IN8)
#define PORT_PA24I_CCL_IN8                         (_UL_(1) << 24)

#define PIN_PB08I_CCL_IN8                          _UL_(40)    
#define MUX_PB08I_CCL_IN8                          _UL_(8)     
#define PINMUX_PB08I_CCL_IN8                       ((PIN_PB08I_CCL_IN8 << 16) | MUX_PB08I_CCL_IN8)
#define PORT_PB08I_CCL_IN8                         (_UL_(1) << 8)

#define PIN_PB14I_CCL_IN9                          _UL_(46)    
#define MUX_PB14I_CCL_IN9                          _UL_(8)     
#define PINMUX_PB14I_CCL_IN9                       ((PIN_PB14I_CCL_IN9 << 16) | MUX_PB14I_CCL_IN9)
#define PORT_PB14I_CCL_IN9                         (_UL_(1) << 14)

#define PIN_PB15I_CCL_IN10                         _UL_(47)    
#define MUX_PB15I_CCL_IN10                         _UL_(8)     
#define PINMUX_PB15I_CCL_IN10                      ((PIN_PB15I_CCL_IN10 << 16) | MUX_PB15I_CCL_IN10)
#define PORT_PB15I_CCL_IN10                        (_UL_(1) << 15)

#define PIN_PB16I_CCL_IN11                         _UL_(48)    
#define MUX_PB16I_CCL_IN11                         _UL_(8)     
#define PINMUX_PB16I_CCL_IN11                      ((PIN_PB16I_CCL_IN11 << 16) | MUX_PB16I_CCL_IN11)
#define PORT_PB16I_CCL_IN11                        (_UL_(1) << 16)

#define PIN_PA07I_CCL_OUT0                         _UL_(7)     
#define MUX_PA07I_CCL_OUT0                         _UL_(8)     
#define PINMUX_PA07I_CCL_OUT0                      ((PIN_PA07I_CCL_OUT0 << 16) | MUX_PA07I_CCL_OUT0)
#define PORT_PA07I_CCL_OUT0                        (_UL_(1) << 7)

#define PIN_PA19I_CCL_OUT0                         _UL_(19)    
#define MUX_PA19I_CCL_OUT0                         _UL_(8)     
#define PINMUX_PA19I_CCL_OUT0                      ((PIN_PA19I_CCL_OUT0 << 16) | MUX_PA19I_CCL_OUT0)
#define PORT_PA19I_CCL_OUT0                        (_UL_(1) << 19)

#define PIN_PA11I_CCL_OUT1                         _UL_(11)    
#define MUX_PA11I_CCL_OUT1                         _UL_(8)     
#define PINMUX_PA11I_CCL_OUT1                      ((PIN_PA11I_CCL_OUT1 << 16) | MUX_PA11I_CCL_OUT1)
#define PORT_PA11I_CCL_OUT1                        (_UL_(1) << 11)

#define PIN_PA31I_CCL_OUT1                         _UL_(31)    
#define MUX_PA31I_CCL_OUT1                         _UL_(8)     
#define PINMUX_PA31I_CCL_OUT1                      ((PIN_PA31I_CCL_OUT1 << 16) | MUX_PA31I_CCL_OUT1)
#define PORT_PA31I_CCL_OUT1                        (_UL_(1) << 31)

#define PIN_PA25I_CCL_OUT2                         _UL_(25)    
#define MUX_PA25I_CCL_OUT2                         _UL_(8)     
#define PINMUX_PA25I_CCL_OUT2                      ((PIN_PA25I_CCL_OUT2 << 16) | MUX_PA25I_CCL_OUT2)
#define PORT_PA25I_CCL_OUT2                        (_UL_(1) << 25)

#define PIN_PB09I_CCL_OUT2                         _UL_(41)    
#define MUX_PB09I_CCL_OUT2                         _UL_(8)     
#define PINMUX_PB09I_CCL_OUT2                      ((PIN_PB09I_CCL_OUT2 << 16) | MUX_PB09I_CCL_OUT2)
#define PORT_PB09I_CCL_OUT2                        (_UL_(1) << 9)

#define PIN_PB17I_CCL_OUT3                         _UL_(49)    
#define MUX_PB17I_CCL_OUT3                         _UL_(8)     
#define PINMUX_PB17I_CCL_OUT3                      ((PIN_PB17I_CCL_OUT3 << 16) | MUX_PB17I_CCL_OUT3)
#define PORT_PB17I_CCL_OUT3                        (_UL_(1) << 17)

/* ========== PORT definition for EIC peripheral ========== */
#define PIN_PA16A_EIC_EXTINT0                      _UL_(16)    
#define MUX_PA16A_EIC_EXTINT0                      _UL_(0)     
#define PINMUX_PA16A_EIC_EXTINT0                   ((PIN_PA16A_EIC_EXTINT0 << 16) | MUX_PA16A_EIC_EXTINT0)
#define PORT_PA16A_EIC_EXTINT0                     (_UL_(1) << 16)
#define PIN_PA16A_EIC_EXTINT_NUM                   _L_(0)       /**< EIC signal: PIN_PA16 External Interrupt Line */

#define PIN_PB00A_EIC_EXTINT0                      _UL_(32)    
#define MUX_PB00A_EIC_EXTINT0                      _UL_(0)     
#define PINMUX_PB00A_EIC_EXTINT0                   ((PIN_PB00A_EIC_EXTINT0 << 16) | MUX_PB00A_EIC_EXTINT0)
#define PORT_PB00A_EIC_EXTINT0                     (_UL_(1) << 0)
#define PIN_PB00A_EIC_EXTINT_NUM                   _L_(0)       /**< EIC signal: PIN_PB00 External Interrupt Line */

#define PIN_PB16A_EIC_EXTINT0                      _UL_(48)    
#define MUX_PB16A_EIC_EXTINT0                      _UL_(0)     
#define PINMUX_PB16A_EIC_EXTINT0                   ((PIN_PB16A_EIC_EXTINT0 << 16) | MUX_PB16A_EIC_EXTINT0)
#define PORT_PB16A_EIC_EXTINT0                     (_UL_(1) << 16)
#define PIN_PB16A_EIC_EXTINT_NUM                   _L_(0)       /**< EIC signal: PIN_PB16 External Interrupt Line */

#define PIN_PA17A_EIC_EXTINT1                      _UL_(17)    
#define MUX_PA17A_EIC_EXTINT1                      _UL_(0)     
#define PINMUX_PA17A_EIC_EXTINT1                   ((PIN_PA17A_EIC_EXTINT1 << 16) | MUX_PA17A_EIC_EXTINT1)
#define PORT_PA17A_EIC_EXTINT1                     (_UL_(1) << 17)
#define PIN_PA17A_EIC_EXTINT_NUM                   _L_(1)       /**< EIC signal: PIN_PA17 External Interrupt Line */

#define PIN_PB17A_EIC_EXTINT1                      _UL_(49)    
#define MUX_PB17A_EIC_EXTINT1                      _UL_(0)     
#define PINMUX_PB17A_EIC_EXTINT1                   ((PIN_PB17A_EIC_EXTINT1 << 16) | MUX_PB17A_EIC_EXTINT1)
#define PORT_PB17A_EIC_EXTINT1                     (_UL_(1) << 17)
#define PIN_PB17A_EIC_EXTINT_NUM                   _L_(1)       /**< EIC signal: PIN_PB17 External Interrupt Line */

#define PIN_PA18A_EIC_EXTINT2                      _UL_(18)    
#define MUX_PA18A_EIC_EXTINT2                      _UL_(0)     
#define PINMUX_PA18A_EIC_EXTINT2                   ((PIN_PA18A_EIC_EXTINT2 << 16) | MUX_PA18A_EIC_EXTINT2)
#define PORT_PA18A_EIC_EXTINT2                     (_UL_(1) << 18)
#define PIN_PA18A_EIC_EXTINT_NUM                   _L_(2)       /**< EIC signal: PIN_PA18 External Interrupt Line */

#define PIN_PA19A_EIC_EXTINT3                      _UL_(19)    
#define MUX_PA19A_EIC_EXTINT3                      _UL_(0)     
#define PINMUX_PA19A_EIC_EXTINT3                   ((PIN_PA19A_EIC_EXTINT3 << 16) | MUX_PA19A_EIC_EXTINT3)
#define PORT_PA19A_EIC_EXTINT3                     (_UL_(1) << 19)
#define PIN_PA19A_EIC_EXTINT_NUM                   _L_(3)       /**< EIC signal: PIN_PA19 External Interrupt Line */

#define PIN_PA20A_EIC_EXTINT4                      _UL_(20)    
#define MUX_PA20A_EIC_EXTINT4                      _UL_(0)     
#define PINMUX_PA20A_EIC_EXTINT4                   ((PIN_PA20A_EIC_EXTINT4 << 16) | MUX_PA20A_EIC_EXTINT4)
#define PORT_PA20A_EIC_EXTINT4                     (_UL_(1) << 20)
#define PIN_PA20A_EIC_EXTINT_NUM                   _L_(4)       /**< EIC signal: PIN_PA20 External Interrupt Line */

#define PIN_PA06A_EIC_EXTINT6                      _UL_(6)     
#define MUX_PA06A_EIC_EXTINT6                      _UL_(0)     
#define PINMUX_PA06A_EIC_EXTINT6                   ((PIN_PA06A_EIC_EXTINT6 << 16) | MUX_PA06A_EIC_EXTINT6)
#define PORT_PA06A_EIC_EXTINT6                     (_UL_(1) << 6)
#define PIN_PA06A_EIC_EXTINT_NUM                   _L_(6)       /**< EIC signal: PIN_PA06 External Interrupt Line */

#define PIN_PA07A_EIC_EXTINT7                      _UL_(7)     
#define MUX_PA07A_EIC_EXTINT7                      _UL_(0)     
#define PINMUX_PA07A_EIC_EXTINT7                   ((PIN_PA07A_EIC_EXTINT7 << 16) | MUX_PA07A_EIC_EXTINT7)
#define PORT_PA07A_EIC_EXTINT7                     (_UL_(1) << 7)
#define PIN_PA07A_EIC_EXTINT_NUM                   _L_(7)       /**< EIC signal: PIN_PA07 External Interrupt Line */

#define PIN_PB08A_EIC_EXTINT8                      _UL_(40)    
#define MUX_PB08A_EIC_EXTINT8                      _UL_(0)     
#define PINMUX_PB08A_EIC_EXTINT8                   ((PIN_PB08A_EIC_EXTINT8 << 16) | MUX_PB08A_EIC_EXTINT8)
#define PORT_PB08A_EIC_EXTINT8                     (_UL_(1) << 8)
#define PIN_PB08A_EIC_EXTINT_NUM                   _L_(8)       /**< EIC signal: PIN_PB08 External Interrupt Line */

#define PIN_PA28A_EIC_EXTINT8                      _UL_(28)    
#define MUX_PA28A_EIC_EXTINT8                      _UL_(0)     
#define PINMUX_PA28A_EIC_EXTINT8                   ((PIN_PA28A_EIC_EXTINT8 << 16) | MUX_PA28A_EIC_EXTINT8)
#define PORT_PA28A_EIC_EXTINT8                     (_UL_(1) << 28)
#define PIN_PA28A_EIC_EXTINT_NUM                   _L_(8)       /**< EIC signal: PIN_PA28 External Interrupt Line */

#define PIN_PA09A_EIC_EXTINT9                      _UL_(9)     
#define MUX_PA09A_EIC_EXTINT9                      _UL_(0)     
#define PINMUX_PA09A_EIC_EXTINT9                   ((PIN_PA09A_EIC_EXTINT9 << 16) | MUX_PA09A_EIC_EXTINT9)
#define PORT_PA09A_EIC_EXTINT9                     (_UL_(1) << 9)
#define PIN_PA09A_EIC_EXTINT_NUM                   _L_(9)       /**< EIC signal: PIN_PA09 External Interrupt Line */

#define PIN_PB09A_EIC_EXTINT9                      _UL_(41)    
#define MUX_PB09A_EIC_EXTINT9                      _UL_(0)     
#define PINMUX_PB09A_EIC_EXTINT9                   ((PIN_PB09A_EIC_EXTINT9 << 16) | MUX_PB09A_EIC_EXTINT9)
#define PORT_PB09A_EIC_EXTINT9                     (_UL_(1) << 9)
#define PIN_PB09A_EIC_EXTINT_NUM                   _L_(9)       /**< EIC signal: PIN_PB09 External Interrupt Line */

#define PIN_PA10A_EIC_EXTINT10                     _UL_(10)    
#define MUX_PA10A_EIC_EXTINT10                     _UL_(0)     
#define PINMUX_PA10A_EIC_EXTINT10                  ((PIN_PA10A_EIC_EXTINT10 << 16) | MUX_PA10A_EIC_EXTINT10)
#define PORT_PA10A_EIC_EXTINT10                    (_UL_(1) << 10)
#define PIN_PA10A_EIC_EXTINT_NUM                   _L_(10)      /**< EIC signal: PIN_PA10 External Interrupt Line */

#define PIN_PA30A_EIC_EXTINT10                     _UL_(30)    
#define MUX_PA30A_EIC_EXTINT10                     _UL_(0)     
#define PINMUX_PA30A_EIC_EXTINT10                  ((PIN_PA30A_EIC_EXTINT10 << 16) | MUX_PA30A_EIC_EXTINT10)
#define PORT_PA30A_EIC_EXTINT10                    (_UL_(1) << 30)
#define PIN_PA30A_EIC_EXTINT_NUM                   _L_(10)      /**< EIC signal: PIN_PA30 External Interrupt Line */

#define PIN_PA11A_EIC_EXTINT11                     _UL_(11)    
#define MUX_PA11A_EIC_EXTINT11                     _UL_(0)     
#define PINMUX_PA11A_EIC_EXTINT11                  ((PIN_PA11A_EIC_EXTINT11 << 16) | MUX_PA11A_EIC_EXTINT11)
#define PORT_PA11A_EIC_EXTINT11                    (_UL_(1) << 11)
#define PIN_PA11A_EIC_EXTINT_NUM                   _L_(11)      /**< EIC signal: PIN_PA11 External Interrupt Line */

#define PIN_PA31A_EIC_EXTINT11                     _UL_(31)    
#define MUX_PA31A_EIC_EXTINT11                     _UL_(0)     
#define PINMUX_PA31A_EIC_EXTINT11                  ((PIN_PA31A_EIC_EXTINT11 << 16) | MUX_PA31A_EIC_EXTINT11)
#define PORT_PA31A_EIC_EXTINT11                    (_UL_(1) << 31)
#define PIN_PA31A_EIC_EXTINT_NUM                   _L_(11)      /**< EIC signal: PIN_PA31 External Interrupt Line */

#define PIN_PA24A_EIC_EXTINT12                     _UL_(24)    
#define MUX_PA24A_EIC_EXTINT12                     _UL_(0)     
#define PINMUX_PA24A_EIC_EXTINT12                  ((PIN_PA24A_EIC_EXTINT12 << 16) | MUX_PA24A_EIC_EXTINT12)
#define PORT_PA24A_EIC_EXTINT12                    (_UL_(1) << 24)
#define PIN_PA24A_EIC_EXTINT_NUM                   _L_(12)      /**< EIC signal: PIN_PA24 External Interrupt Line */

#define PIN_PA25A_EIC_EXTINT13                     _UL_(25)    
#define MUX_PA25A_EIC_EXTINT13                     _UL_(0)     
#define PINMUX_PA25A_EIC_EXTINT13                  ((PIN_PA25A_EIC_EXTINT13 << 16) | MUX_PA25A_EIC_EXTINT13)
#define PORT_PA25A_EIC_EXTINT13                    (_UL_(1) << 25)
#define PIN_PA25A_EIC_EXTINT_NUM                   _L_(13)      /**< EIC signal: PIN_PA25 External Interrupt Line */

#define PIN_PB14A_EIC_EXTINT14                     _UL_(46)    
#define MUX_PB14A_EIC_EXTINT14                     _UL_(0)     
#define PINMUX_PB14A_EIC_EXTINT14                  ((PIN_PB14A_EIC_EXTINT14 << 16) | MUX_PB14A_EIC_EXTINT14)
#define PORT_PB14A_EIC_EXTINT14                    (_UL_(1) << 14)
#define PIN_PB14A_EIC_EXTINT_NUM                   _L_(14)      /**< EIC signal: PIN_PB14 External Interrupt Line */

#define PIN_PB30A_EIC_EXTINT14                     _UL_(62)    
#define MUX_PB30A_EIC_EXTINT14                     _UL_(0)     
#define PINMUX_PB30A_EIC_EXTINT14                  ((PIN_PB30A_EIC_EXTINT14 << 16) | MUX_PB30A_EIC_EXTINT14)
#define PORT_PB30A_EIC_EXTINT14                    (_UL_(1) << 30)
#define PIN_PB30A_EIC_EXTINT_NUM                   _L_(14)      /**< EIC signal: PIN_PB30 External Interrupt Line */

#define PIN_PA14A_EIC_EXTINT14                     _UL_(14)    
#define MUX_PA14A_EIC_EXTINT14                     _UL_(0)     
#define PINMUX_PA14A_EIC_EXTINT14                  ((PIN_PA14A_EIC_EXTINT14 << 16) | MUX_PA14A_EIC_EXTINT14)
#define PORT_PA14A_EIC_EXTINT14                    (_UL_(1) << 14)
#define PIN_PA14A_EIC_EXTINT_NUM                   _L_(14)      /**< EIC signal: PIN_PA14 External Interrupt Line */

#define PIN_PA27A_EIC_EXTINT15                     _UL_(27)    
#define MUX_PA27A_EIC_EXTINT15                     _UL_(0)     
#define PINMUX_PA27A_EIC_EXTINT15                  ((PIN_PA27A_EIC_EXTINT15 << 16) | MUX_PA27A_EIC_EXTINT15)
#define PORT_PA27A_EIC_EXTINT15                    (_UL_(1) << 27)
#define PIN_PA27A_EIC_EXTINT_NUM                   _L_(15)      /**< EIC signal: PIN_PA27 External Interrupt Line */

#define PIN_PB15A_EIC_EXTINT15                     _UL_(47)    
#define MUX_PB15A_EIC_EXTINT15                     _UL_(0)     
#define PINMUX_PB15A_EIC_EXTINT15                  ((PIN_PB15A_EIC_EXTINT15 << 16) | MUX_PB15A_EIC_EXTINT15)
#define PORT_PB15A_EIC_EXTINT15                    (_UL_(1) << 15)
#define PIN_PB15A_EIC_EXTINT_NUM                   _L_(15)      /**< EIC signal: PIN_PB15 External Interrupt Line */

#define PIN_PB31A_EIC_EXTINT15                     _UL_(63)    
#define MUX_PB31A_EIC_EXTINT15                     _UL_(0)     
#define PINMUX_PB31A_EIC_EXTINT15                  ((PIN_PB31A_EIC_EXTINT15 << 16) | MUX_PB31A_EIC_EXTINT15)
#define PORT_PB31A_EIC_EXTINT15                    (_UL_(1) << 31)
#define PIN_PB31A_EIC_EXTINT_NUM                   _L_(15)      /**< EIC signal: PIN_PB31 External Interrupt Line */

#define PIN_PA15A_EIC_EXTINT15                     _UL_(15)    
#define MUX_PA15A_EIC_EXTINT15                     _UL_(0)     
#define PINMUX_PA15A_EIC_EXTINT15                  ((PIN_PA15A_EIC_EXTINT15 << 16) | MUX_PA15A_EIC_EXTINT15)
#define PORT_PA15A_EIC_EXTINT15                    (_UL_(1) << 15)
#define PIN_PA15A_EIC_EXTINT_NUM                   _L_(15)      /**< EIC signal: PIN_PA15 External Interrupt Line */

#define PIN_PA08A_EIC_NMI                          _UL_(8)     
#define MUX_PA08A_EIC_NMI                          _UL_(0)     
#define PINMUX_PA08A_EIC_NMI                       ((PIN_PA08A_EIC_NMI << 16) | MUX_PA08A_EIC_NMI)
#define PORT_PA08A_EIC_NMI                         (_UL_(1) << 8)

/* ========== PORT definition for GCLK peripheral ========== */
#define PIN_PB14H_GCLK_IO0                         _UL_(46)    
#define MUX_PB14H_GCLK_IO0                         _UL_(7)     
#define PINMUX_PB14H_GCLK_IO0                      ((PIN_PB14H_GCLK_IO0 << 16) | MUX_PB14H_GCLK_IO0)
#define PORT_PB14H_GCLK_IO0                        (_UL_(1) << 14)

#define PIN_PA14H_GCLK_IO0                         _UL_(14)    
#define MUX_PA14H_GCLK_IO0                         _UL_(7)     
#define PINMUX_PA14H_GCLK_IO0                      ((PIN_PA14H_GCLK_IO0 << 16) | MUX_PA14H_GCLK_IO0)
#define PORT_PA14H_GCLK_IO0                        (_UL_(1) << 14)

#define PIN_PA27H_GCLK_IO0                         _UL_(27)    
#define MUX_PA27H_GCLK_IO0                         _UL_(7)     
#define PINMUX_PA27H_GCLK_IO0                      ((PIN_PA27H_GCLK_IO0 << 16) | MUX_PA27H_GCLK_IO0)
#define PORT_PA27H_GCLK_IO0                        (_UL_(1) << 27)

#define PIN_PA30H_GCLK_IO0                         _UL_(30)    
#define MUX_PA30H_GCLK_IO0                         _UL_(7)     
#define PINMUX_PA30H_GCLK_IO0                      ((PIN_PA30H_GCLK_IO0 << 16) | MUX_PA30H_GCLK_IO0)
#define PORT_PA30H_GCLK_IO0                        (_UL_(1) << 30)

#define PIN_PA28H_GCLK_IO0                         _UL_(28)    
#define MUX_PA28H_GCLK_IO0                         _UL_(7)     
#define PINMUX_PA28H_GCLK_IO0                      ((PIN_PA28H_GCLK_IO0 << 16) | MUX_PA28H_GCLK_IO0)
#define PORT_PA28H_GCLK_IO0                        (_UL_(1) << 28)

#define PIN_PB15H_GCLK_IO1                         _UL_(47)    
#define MUX_PB15H_GCLK_IO1                         _UL_(7)     
#define PINMUX_PB15H_GCLK_IO1                      ((PIN_PB15H_GCLK_IO1 << 16) | MUX_PB15H_GCLK_IO1)
#define PORT_PB15H_GCLK_IO1                        (_UL_(1) << 15)

#define PIN_PA15H_GCLK_IO1                         _UL_(15)    
#define MUX_PA15H_GCLK_IO1                         _UL_(7)     
#define PINMUX_PA15H_GCLK_IO1                      ((PIN_PA15H_GCLK_IO1 << 16) | MUX_PA15H_GCLK_IO1)
#define PORT_PA15H_GCLK_IO1                        (_UL_(1) << 15)

#define PIN_PB16H_GCLK_IO2                         _UL_(48)    
#define MUX_PB16H_GCLK_IO2                         _UL_(7)     
#define PINMUX_PB16H_GCLK_IO2                      ((PIN_PB16H_GCLK_IO2 << 16) | MUX_PB16H_GCLK_IO2)
#define PORT_PB16H_GCLK_IO2                        (_UL_(1) << 16)

#define PIN_PA16H_GCLK_IO2                         _UL_(16)    
#define MUX_PA16H_GCLK_IO2                         _UL_(7)     
#define PINMUX_PA16H_GCLK_IO2                      ((PIN_PA16H_GCLK_IO2 << 16) | MUX_PA16H_GCLK_IO2)
#define PORT_PA16H_GCLK_IO2                        (_UL_(1) << 16)

#define PIN_PA17H_GCLK_IO3                         _UL_(17)    
#define MUX_PA17H_GCLK_IO3                         _UL_(7)     
#define PINMUX_PA17H_GCLK_IO3                      ((PIN_PA17H_GCLK_IO3 << 16) | MUX_PA17H_GCLK_IO3)
#define PORT_PA17H_GCLK_IO3                        (_UL_(1) << 17)

#define PIN_PB17H_GCLK_IO3                         _UL_(49)    
#define MUX_PB17H_GCLK_IO3                         _UL_(7)     
#define PINMUX_PB17H_GCLK_IO3                      ((PIN_PB17H_GCLK_IO3 << 16) | MUX_PB17H_GCLK_IO3)
#define PORT_PB17H_GCLK_IO3                        (_UL_(1) << 17)

#define PIN_PA10H_GCLK_IO4                         _UL_(10)    
#define MUX_PA10H_GCLK_IO4                         _UL_(7)     
#define PINMUX_PA10H_GCLK_IO4                      ((PIN_PA10H_GCLK_IO4 << 16) | MUX_PA10H_GCLK_IO4)
#define PORT_PA10H_GCLK_IO4                        (_UL_(1) << 10)

#define PIN_PA20H_GCLK_IO4                         _UL_(20)    
#define MUX_PA20H_GCLK_IO4                         _UL_(7)     
#define PINMUX_PA20H_GCLK_IO4                      ((PIN_PA20H_GCLK_IO4 << 16) | MUX_PA20H_GCLK_IO4)
#define PORT_PA20H_GCLK_IO4                        (_UL_(1) << 20)

#define PIN_PA11H_GCLK_IO5                         _UL_(11)    
#define MUX_PA11H_GCLK_IO5                         _UL_(7)     
#define PINMUX_PA11H_GCLK_IO5                      ((PIN_PA11H_GCLK_IO5 << 16) | MUX_PA11H_GCLK_IO5)
#define PORT_PA11H_GCLK_IO5                        (_UL_(1) << 11)

/* ========== PORT definition for PTC peripheral ========== */
#define PIN_PA08B_PTC_X0                           _UL_(8)     
#define MUX_PA08B_PTC_X0                           _UL_(1)     
#define PINMUX_PA08B_PTC_X0                        ((PIN_PA08B_PTC_X0 << 16) | MUX_PA08B_PTC_X0)
#define PORT_PA08B_PTC_X0                          (_UL_(1) << 8)

#define PIN_PA09B_PTC_X1                           _UL_(9)     
#define MUX_PA09B_PTC_X1                           _UL_(1)     
#define PINMUX_PA09B_PTC_X1                        ((PIN_PA09B_PTC_X1 << 16) | MUX_PA09B_PTC_X1)
#define PORT_PA09B_PTC_X1                          (_UL_(1) << 9)

#define PIN_PA10B_PTC_X2                           _UL_(10)    
#define MUX_PA10B_PTC_X2                           _UL_(1)     
#define PINMUX_PA10B_PTC_X2                        ((PIN_PA10B_PTC_X2 << 16) | MUX_PA10B_PTC_X2)
#define PORT_PA10B_PTC_X2                          (_UL_(1) << 10)

#define PIN_PA11B_PTC_X3                           _UL_(11)    
#define MUX_PA11B_PTC_X3                           _UL_(1)     
#define PINMUX_PA11B_PTC_X3                        ((PIN_PA11B_PTC_X3 << 16) | MUX_PA11B_PTC_X3)
#define PORT_PA11B_PTC_X3                          (_UL_(1) << 11)

#define PIN_PA16B_PTC_X4                           _UL_(16)    
#define MUX_PA16B_PTC_X4                           _UL_(1)     
#define PINMUX_PA16B_PTC_X4                        ((PIN_PA16B_PTC_X4 << 16) | MUX_PA16B_PTC_X4)
#define PORT_PA16B_PTC_X4                          (_UL_(1) << 16)

#define PIN_PA17B_PTC_X5                           _UL_(17)    
#define MUX_PA17B_PTC_X5                           _UL_(1)     
#define PINMUX_PA17B_PTC_X5                        ((PIN_PA17B_PTC_X5 << 16) | MUX_PA17B_PTC_X5)
#define PORT_PA17B_PTC_X5                          (_UL_(1) << 17)

#define PIN_PA18B_PTC_X6                           _UL_(18)    
#define MUX_PA18B_PTC_X6                           _UL_(1)     
#define PINMUX_PA18B_PTC_X6                        ((PIN_PA18B_PTC_X6 << 16) | MUX_PA18B_PTC_X6)
#define PORT_PA18B_PTC_X6                          (_UL_(1) << 18)

#define PIN_PA19B_PTC_X7                           _UL_(19)    
#define MUX_PA19B_PTC_X7                           _UL_(1)     
#define PINMUX_PA19B_PTC_X7                        ((PIN_PA19B_PTC_X7 << 16) | MUX_PA19B_PTC_X7)
#define PORT_PA19B_PTC_X7                          (_UL_(1) << 19)

#define PIN_PA20B_PTC_X8                           _UL_(20)    
#define MUX_PA20B_PTC_X8                           _UL_(1)     
#define PINMUX_PA20B_PTC_X8                        ((PIN_PA20B_PTC_X8 << 16) | MUX_PA20B_PTC_X8)
#define PORT_PA20B_PTC_X8                          (_UL_(1) << 20)

#define PIN_PB14B_PTC_X14                          _UL_(46)    
#define MUX_PB14B_PTC_X14                          _UL_(1)     
#define PINMUX_PB14B_PTC_X14                       ((PIN_PB14B_PTC_X14 << 16) | MUX_PB14B_PTC_X14)
#define PORT_PB14B_PTC_X14                         (_UL_(1) << 14)

#define PIN_PB15B_PTC_X15                          _UL_(47)    
#define MUX_PB15B_PTC_X15                          _UL_(1)     
#define PINMUX_PB15B_PTC_X15                       ((PIN_PB15B_PTC_X15 << 16) | MUX_PB15B_PTC_X15)
#define PORT_PB15B_PTC_X15                         (_UL_(1) << 15)

#define PIN_PA06B_PTC_Y4                           _UL_(6)     
#define MUX_PA06B_PTC_Y4                           _UL_(1)     
#define PINMUX_PA06B_PTC_Y4                        ((PIN_PA06B_PTC_Y4 << 16) | MUX_PA06B_PTC_Y4)
#define PORT_PA06B_PTC_Y4                          (_UL_(1) << 6)

#define PIN_PA08B_PTC_Y6                           _UL_(8)     
#define MUX_PA08B_PTC_Y6                           _UL_(1)     
#define PINMUX_PA08B_PTC_Y6                        ((PIN_PA08B_PTC_Y6 << 16) | MUX_PA08B_PTC_Y6)
#define PORT_PA08B_PTC_Y6                          (_UL_(1) << 8)

#define PIN_PA09B_PTC_Y7                           _UL_(9)     
#define MUX_PA09B_PTC_Y7                           _UL_(1)     
#define PINMUX_PA09B_PTC_Y7                        ((PIN_PA09B_PTC_Y7 << 16) | MUX_PA09B_PTC_Y7)
#define PORT_PA09B_PTC_Y7                          (_UL_(1) << 9)

#define PIN_PA10B_PTC_Y8                           _UL_(10)    
#define MUX_PA10B_PTC_Y8                           _UL_(1)     
#define PINMUX_PA10B_PTC_Y8                        ((PIN_PA10B_PTC_Y8 << 16) | MUX_PA10B_PTC_Y8)
#define PORT_PA10B_PTC_Y8                          (_UL_(1) << 10)

#define PIN_PA11B_PTC_Y9                           _UL_(11)    
#define MUX_PA11B_PTC_Y9                           _UL_(1)     
#define PINMUX_PA11B_PTC_Y9                        ((PIN_PA11B_PTC_Y9 << 16) | MUX_PA11B_PTC_Y9)
#define PORT_PA11B_PTC_Y9                          (_UL_(1) << 11)

#define PIN_PB09B_PTC_Y15                          _UL_(41)    
#define MUX_PB09B_PTC_Y15                          _UL_(1)     
#define PINMUX_PB09B_PTC_Y15                       ((PIN_PB09B_PTC_Y15 << 16) | MUX_PB09B_PTC_Y15)
#define PORT_PB09B_PTC_Y15                         (_UL_(1) << 9)

/* ========== PORT definition for RFCTRL peripheral ========== */
#define PIN_PA08F_RFCTRL_FECTRL0                   _UL_(8)     
#define MUX_PA08F_RFCTRL_FECTRL0                   _UL_(5)     
#define PINMUX_PA08F_RFCTRL_FECTRL0                ((PIN_PA08F_RFCTRL_FECTRL0 << 16) | MUX_PA08F_RFCTRL_FECTRL0)
#define PORT_PA08F_RFCTRL_FECTRL0                  (_UL_(1) << 8)

#define PIN_PA09F_RFCTRL_FECTRL1                   _UL_(9)     
#define MUX_PA09F_RFCTRL_FECTRL1                   _UL_(5)     
#define PINMUX_PA09F_RFCTRL_FECTRL1                ((PIN_PA09F_RFCTRL_FECTRL1 << 16) | MUX_PA09F_RFCTRL_FECTRL1)
#define PORT_PA09F_RFCTRL_FECTRL1                  (_UL_(1) << 9)

#define PIN_PA14F_RFCTRL_FECTRL4                   _UL_(14)    
#define MUX_PA14F_RFCTRL_FECTRL4                   _UL_(5)     
#define PINMUX_PA14F_RFCTRL_FECTRL4                ((PIN_PA14F_RFCTRL_FECTRL4 << 16) | MUX_PA14F_RFCTRL_FECTRL4)
#define PORT_PA14F_RFCTRL_FECTRL4                  (_UL_(1) << 14)

#define PIN_PA15F_RFCTRL_FECTRL5                   _UL_(15)    
#define MUX_PA15F_RFCTRL_FECTRL5                   _UL_(5)     
#define PINMUX_PA15F_RFCTRL_FECTRL5                ((PIN_PA15F_RFCTRL_FECTRL5 << 16) | MUX_PA15F_RFCTRL_FECTRL5)
#define PORT_PA15F_RFCTRL_FECTRL5                  (_UL_(1) << 15)

/* ========== PORT definition for RSTC peripheral ========== */
#define PIN_PA06A_RSTC_EXTWAKE6                    _UL_(6)     
#define MUX_PA06A_RSTC_EXTWAKE6                    _UL_(0)     
#define PINMUX_PA06A_RSTC_EXTWAKE6                 ((PIN_PA06A_RSTC_EXTWAKE6 << 16) | MUX_PA06A_RSTC_EXTWAKE6)
#define PORT_PA06A_RSTC_EXTWAKE6                   (_UL_(1) << 6)

#define PIN_PA07A_RSTC_EXTWAKE7                    _UL_(7)     
#define MUX_PA07A_RSTC_EXTWAKE7                    _UL_(0)     
#define PINMUX_PA07A_RSTC_EXTWAKE7                 ((PIN_PA07A_RSTC_EXTWAKE7 << 16) | MUX_PA07A_RSTC_EXTWAKE7)
#define PORT_PA07A_RSTC_EXTWAKE7                   (_UL_(1) << 7)

/* ========== PORT definition for SERCOM0 peripheral ========== */
#define PIN_PA08C_SERCOM0_PAD0                     _UL_(8)     
#define MUX_PA08C_SERCOM0_PAD0                     _UL_(2)     
#define PINMUX_PA08C_SERCOM0_PAD0                  ((PIN_PA08C_SERCOM0_PAD0 << 16) | MUX_PA08C_SERCOM0_PAD0)
#define PORT_PA08C_SERCOM0_PAD0                    (_UL_(1) << 8)

#define PIN_PA09C_SERCOM0_PAD1                     _UL_(9)     
#define MUX_PA09C_SERCOM0_PAD1                     _UL_(2)     
#define PINMUX_PA09C_SERCOM0_PAD1                  ((PIN_PA09C_SERCOM0_PAD1 << 16) | MUX_PA09C_SERCOM0_PAD1)
#define PORT_PA09C_SERCOM0_PAD1                    (_UL_(1) << 9)

#define PIN_PA06D_SERCOM0_PAD2                     _UL_(6)     
#define MUX_PA06D_SERCOM0_PAD2                     _UL_(3)     
#define PINMUX_PA06D_SERCOM0_PAD2                  ((PIN_PA06D_SERCOM0_PAD2 << 16) | MUX_PA06D_SERCOM0_PAD2)
#define PORT_PA06D_SERCOM0_PAD2                    (_UL_(1) << 6)

#define PIN_PA10C_SERCOM0_PAD2                     _UL_(10)    
#define MUX_PA10C_SERCOM0_PAD2                     _UL_(2)     
#define PINMUX_PA10C_SERCOM0_PAD2                  ((PIN_PA10C_SERCOM0_PAD2 << 16) | MUX_PA10C_SERCOM0_PAD2)
#define PORT_PA10C_SERCOM0_PAD2                    (_UL_(1) << 10)

#define PIN_PA07D_SERCOM0_PAD3                     _UL_(7)     
#define MUX_PA07D_SERCOM0_PAD3                     _UL_(3)     
#define PINMUX_PA07D_SERCOM0_PAD3                  ((PIN_PA07D_SERCOM0_PAD3 << 16) | MUX_PA07D_SERCOM0_PAD3)
#define PORT_PA07D_SERCOM0_PAD3                    (_UL_(1) << 7)

#define PIN_PA11C_SERCOM0_PAD3                     _UL_(11)    
#define MUX_PA11C_SERCOM0_PAD3                     _UL_(2)     
#define PINMUX_PA11C_SERCOM0_PAD3                  ((PIN_PA11C_SERCOM0_PAD3 << 16) | MUX_PA11C_SERCOM0_PAD3)
#define PORT_PA11C_SERCOM0_PAD3                    (_UL_(1) << 11)

/* ========== PORT definition for SERCOM1 peripheral ========== */
#define PIN_PA16C_SERCOM1_PAD0                     _UL_(16)    
#define MUX_PA16C_SERCOM1_PAD0                     _UL_(2)     
#define PINMUX_PA16C_SERCOM1_PAD0                  ((PIN_PA16C_SERCOM1_PAD0 << 16) | MUX_PA16C_SERCOM1_PAD0)
#define PORT_PA16C_SERCOM1_PAD0                    (_UL_(1) << 16)

#define PIN_PA17C_SERCOM1_PAD1                     _UL_(17)    
#define MUX_PA17C_SERCOM1_PAD1                     _UL_(2)     
#define PINMUX_PA17C_SERCOM1_PAD1                  ((PIN_PA17C_SERCOM1_PAD1 << 16) | MUX_PA17C_SERCOM1_PAD1)
#define PORT_PA17C_SERCOM1_PAD1                    (_UL_(1) << 17)

#define PIN_PA30D_SERCOM1_PAD2                     _UL_(30)    
#define MUX_PA30D_SERCOM1_PAD2                     _UL_(3)     
#define PINMUX_PA30D_SERCOM1_PAD2                  ((PIN_PA30D_SERCOM1_PAD2 << 16) | MUX_PA30D_SERCOM1_PAD2)
#define PORT_PA30D_SERCOM1_PAD2                    (_UL_(1) << 30)

#define PIN_PA18C_SERCOM1_PAD2                     _UL_(18)    
#define MUX_PA18C_SERCOM1_PAD2                     _UL_(2)     
#define PINMUX_PA18C_SERCOM1_PAD2                  ((PIN_PA18C_SERCOM1_PAD2 << 16) | MUX_PA18C_SERCOM1_PAD2)
#define PORT_PA18C_SERCOM1_PAD2                    (_UL_(1) << 18)

#define PIN_PA31D_SERCOM1_PAD3                     _UL_(31)    
#define MUX_PA31D_SERCOM1_PAD3                     _UL_(3)     
#define PINMUX_PA31D_SERCOM1_PAD3                  ((PIN_PA31D_SERCOM1_PAD3 << 16) | MUX_PA31D_SERCOM1_PAD3)
#define PORT_PA31D_SERCOM1_PAD3                    (_UL_(1) << 31)

#define PIN_PA19C_SERCOM1_PAD3                     _UL_(19)    
#define MUX_PA19C_SERCOM1_PAD3                     _UL_(2)     
#define PINMUX_PA19C_SERCOM1_PAD3                  ((PIN_PA19C_SERCOM1_PAD3 << 16) | MUX_PA19C_SERCOM1_PAD3)
#define PORT_PA19C_SERCOM1_PAD3                    (_UL_(1) << 19)

/* ========== PORT definition for SERCOM2 peripheral ========== */
#define PIN_PA08D_SERCOM2_PAD0                     _UL_(8)     
#define MUX_PA08D_SERCOM2_PAD0                     _UL_(3)     
#define PINMUX_PA08D_SERCOM2_PAD0                  ((PIN_PA08D_SERCOM2_PAD0 << 16) | MUX_PA08D_SERCOM2_PAD0)
#define PORT_PA08D_SERCOM2_PAD0                    (_UL_(1) << 8)

#define PIN_PA09D_SERCOM2_PAD1                     _UL_(9)     
#define MUX_PA09D_SERCOM2_PAD1                     _UL_(3)     
#define PINMUX_PA09D_SERCOM2_PAD1                  ((PIN_PA09D_SERCOM2_PAD1 << 16) | MUX_PA09D_SERCOM2_PAD1)
#define PORT_PA09D_SERCOM2_PAD1                    (_UL_(1) << 9)

#define PIN_PA10D_SERCOM2_PAD2                     _UL_(10)    
#define MUX_PA10D_SERCOM2_PAD2                     _UL_(3)     
#define PINMUX_PA10D_SERCOM2_PAD2                  ((PIN_PA10D_SERCOM2_PAD2 << 16) | MUX_PA10D_SERCOM2_PAD2)
#define PORT_PA10D_SERCOM2_PAD2                    (_UL_(1) << 10)

#define PIN_PA14C_SERCOM2_PAD2                     _UL_(14)    
#define MUX_PA14C_SERCOM2_PAD2                     _UL_(2)     
#define PINMUX_PA14C_SERCOM2_PAD2                  ((PIN_PA14C_SERCOM2_PAD2 << 16) | MUX_PA14C_SERCOM2_PAD2)
#define PORT_PA14C_SERCOM2_PAD2                    (_UL_(1) << 14)

#define PIN_PA11D_SERCOM2_PAD3                     _UL_(11)    
#define MUX_PA11D_SERCOM2_PAD3                     _UL_(3)     
#define PINMUX_PA11D_SERCOM2_PAD3                  ((PIN_PA11D_SERCOM2_PAD3 << 16) | MUX_PA11D_SERCOM2_PAD3)
#define PORT_PA11D_SERCOM2_PAD3                    (_UL_(1) << 11)

#define PIN_PA15C_SERCOM2_PAD3                     _UL_(15)    
#define MUX_PA15C_SERCOM2_PAD3                     _UL_(2)     
#define PINMUX_PA15C_SERCOM2_PAD3                  ((PIN_PA15C_SERCOM2_PAD3 << 16) | MUX_PA15C_SERCOM2_PAD3)
#define PORT_PA15C_SERCOM2_PAD3                    (_UL_(1) << 15)

/* ========== PORT definition for SERCOM3 peripheral ========== */
#define PIN_PA16D_SERCOM3_PAD0                     _UL_(16)    
#define MUX_PA16D_SERCOM3_PAD0                     _UL_(3)     
#define PINMUX_PA16D_SERCOM3_PAD0                  ((PIN_PA16D_SERCOM3_PAD0 << 16) | MUX_PA16D_SERCOM3_PAD0)
#define PORT_PA16D_SERCOM3_PAD0                    (_UL_(1) << 16)

#define PIN_PA17D_SERCOM3_PAD1                     _UL_(17)    
#define MUX_PA17D_SERCOM3_PAD1                     _UL_(3)     
#define PINMUX_PA17D_SERCOM3_PAD1                  ((PIN_PA17D_SERCOM3_PAD1 << 16) | MUX_PA17D_SERCOM3_PAD1)
#define PORT_PA17D_SERCOM3_PAD1                    (_UL_(1) << 17)

#define PIN_PA18D_SERCOM3_PAD2                     _UL_(18)    
#define MUX_PA18D_SERCOM3_PAD2                     _UL_(3)     
#define PINMUX_PA18D_SERCOM3_PAD2                  ((PIN_PA18D_SERCOM3_PAD2 << 16) | MUX_PA18D_SERCOM3_PAD2)
#define PORT_PA18D_SERCOM3_PAD2                    (_UL_(1) << 18)

#define PIN_PA20D_SERCOM3_PAD2                     _UL_(20)    
#define MUX_PA20D_SERCOM3_PAD2                     _UL_(3)     
#define PINMUX_PA20D_SERCOM3_PAD2                  ((PIN_PA20D_SERCOM3_PAD2 << 16) | MUX_PA20D_SERCOM3_PAD2)
#define PORT_PA20D_SERCOM3_PAD2                    (_UL_(1) << 20)

#define PIN_PA24C_SERCOM3_PAD2                     _UL_(24)    
#define MUX_PA24C_SERCOM3_PAD2                     _UL_(2)     
#define PINMUX_PA24C_SERCOM3_PAD2                  ((PIN_PA24C_SERCOM3_PAD2 << 16) | MUX_PA24C_SERCOM3_PAD2)
#define PORT_PA24C_SERCOM3_PAD2                    (_UL_(1) << 24)

#define PIN_PA19D_SERCOM3_PAD3                     _UL_(19)    
#define MUX_PA19D_SERCOM3_PAD3                     _UL_(3)     
#define PINMUX_PA19D_SERCOM3_PAD3                  ((PIN_PA19D_SERCOM3_PAD3 << 16) | MUX_PA19D_SERCOM3_PAD3)
#define PORT_PA19D_SERCOM3_PAD3                    (_UL_(1) << 19)

#define PIN_PA25C_SERCOM3_PAD3                     _UL_(25)    
#define MUX_PA25C_SERCOM3_PAD3                     _UL_(2)     
#define PINMUX_PA25C_SERCOM3_PAD3                  ((PIN_PA25C_SERCOM3_PAD3 << 16) | MUX_PA25C_SERCOM3_PAD3)
#define PORT_PA25C_SERCOM3_PAD3                    (_UL_(1) << 25)

/* ========== PORT definition for SERCOM4 peripheral ========== */
#define PIN_PB08D_SERCOM4_PAD0                     _UL_(40)    
#define MUX_PB08D_SERCOM4_PAD0                     _UL_(3)     
#define PINMUX_PB08D_SERCOM4_PAD0                  ((PIN_PB08D_SERCOM4_PAD0 << 16) | MUX_PB08D_SERCOM4_PAD0)
#define PORT_PB08D_SERCOM4_PAD0                    (_UL_(1) << 8)

#define PIN_PC19F_SERCOM4_PAD0                     _UL_(83)    
#define MUX_PC19F_SERCOM4_PAD0                     _UL_(5)     
#define PINMUX_PC19F_SERCOM4_PAD0                  ((PIN_PC19F_SERCOM4_PAD0 << 16) | MUX_PC19F_SERCOM4_PAD0)
#define PORT_PC19F_SERCOM4_PAD0                    (_UL_(1) << 19)

#define PIN_PB09D_SERCOM4_PAD1                     _UL_(41)    
#define MUX_PB09D_SERCOM4_PAD1                     _UL_(3)     
#define PINMUX_PB09D_SERCOM4_PAD1                  ((PIN_PB09D_SERCOM4_PAD1 << 16) | MUX_PB09D_SERCOM4_PAD1)
#define PORT_PB09D_SERCOM4_PAD1                    (_UL_(1) << 9)

#define PIN_PB31F_SERCOM4_PAD1                     _UL_(63)    
#define MUX_PB31F_SERCOM4_PAD1                     _UL_(5)     
#define PINMUX_PB31F_SERCOM4_PAD1                  ((PIN_PB31F_SERCOM4_PAD1 << 16) | MUX_PB31F_SERCOM4_PAD1)
#define PORT_PB31F_SERCOM4_PAD1                    (_UL_(1) << 31)

#define PIN_PA14D_SERCOM4_PAD2                     _UL_(14)    
#define MUX_PA14D_SERCOM4_PAD2                     _UL_(3)     
#define PINMUX_PA14D_SERCOM4_PAD2                  ((PIN_PA14D_SERCOM4_PAD2 << 16) | MUX_PA14D_SERCOM4_PAD2)
#define PORT_PA14D_SERCOM4_PAD2                    (_UL_(1) << 14)

#define PIN_PB14C_SERCOM4_PAD2                     _UL_(46)    
#define MUX_PB14C_SERCOM4_PAD2                     _UL_(2)     
#define PINMUX_PB14C_SERCOM4_PAD2                  ((PIN_PB14C_SERCOM4_PAD2 << 16) | MUX_PB14C_SERCOM4_PAD2)
#define PORT_PB14C_SERCOM4_PAD2                    (_UL_(1) << 14)

#define PIN_PB30F_SERCOM4_PAD2                     _UL_(62)    
#define MUX_PB30F_SERCOM4_PAD2                     _UL_(5)     
#define PINMUX_PB30F_SERCOM4_PAD2                  ((PIN_PB30F_SERCOM4_PAD2 << 16) | MUX_PB30F_SERCOM4_PAD2)
#define PORT_PB30F_SERCOM4_PAD2                    (_UL_(1) << 30)

#define PIN_PA15D_SERCOM4_PAD3                     _UL_(15)    
#define MUX_PA15D_SERCOM4_PAD3                     _UL_(3)     
#define PINMUX_PA15D_SERCOM4_PAD3                  ((PIN_PA15D_SERCOM4_PAD3 << 16) | MUX_PA15D_SERCOM4_PAD3)
#define PORT_PA15D_SERCOM4_PAD3                    (_UL_(1) << 15)

#define PIN_PB15C_SERCOM4_PAD3                     _UL_(47)    
#define MUX_PB15C_SERCOM4_PAD3                     _UL_(2)     
#define PINMUX_PB15C_SERCOM4_PAD3                  ((PIN_PB15C_SERCOM4_PAD3 << 16) | MUX_PB15C_SERCOM4_PAD3)
#define PORT_PB15C_SERCOM4_PAD3                    (_UL_(1) << 15)

#define PIN_PC18F_SERCOM4_PAD3                     _UL_(82)    
#define MUX_PC18F_SERCOM4_PAD3                     _UL_(5)     
#define PINMUX_PC18F_SERCOM4_PAD3                  ((PIN_PC18F_SERCOM4_PAD3 << 16) | MUX_PC18F_SERCOM4_PAD3)
#define PORT_PC18F_SERCOM4_PAD3                    (_UL_(1) << 18)

/* ========== PORT definition for SERCOM5 peripheral ========== */
#define PIN_PB30D_SERCOM5_PAD0                     _UL_(62)    
#define MUX_PB30D_SERCOM5_PAD0                     _UL_(3)     
#define PINMUX_PB30D_SERCOM5_PAD0                  ((PIN_PB30D_SERCOM5_PAD0 << 16) | MUX_PB30D_SERCOM5_PAD0)
#define PORT_PB30D_SERCOM5_PAD0                    (_UL_(1) << 30)

#define PIN_PB16C_SERCOM5_PAD0                     _UL_(48)    
#define MUX_PB16C_SERCOM5_PAD0                     _UL_(2)     
#define PINMUX_PB16C_SERCOM5_PAD0                  ((PIN_PB16C_SERCOM5_PAD0 << 16) | MUX_PB16C_SERCOM5_PAD0)
#define PORT_PB16C_SERCOM5_PAD0                    (_UL_(1) << 16)

#define PIN_PB31D_SERCOM5_PAD1                     _UL_(63)    
#define MUX_PB31D_SERCOM5_PAD1                     _UL_(3)     
#define PINMUX_PB31D_SERCOM5_PAD1                  ((PIN_PB31D_SERCOM5_PAD1 << 16) | MUX_PB31D_SERCOM5_PAD1)
#define PORT_PB31D_SERCOM5_PAD1                    (_UL_(1) << 31)

#define PIN_PB17C_SERCOM5_PAD1                     _UL_(49)    
#define MUX_PB17C_SERCOM5_PAD1                     _UL_(2)     
#define PINMUX_PB17C_SERCOM5_PAD1                  ((PIN_PB17C_SERCOM5_PAD1 << 16) | MUX_PB17C_SERCOM5_PAD1)
#define PORT_PB17C_SERCOM5_PAD1                    (_UL_(1) << 17)

#define PIN_PA24D_SERCOM5_PAD2                     _UL_(24)    
#define MUX_PA24D_SERCOM5_PAD2                     _UL_(3)     
#define PINMUX_PA24D_SERCOM5_PAD2                  ((PIN_PA24D_SERCOM5_PAD2 << 16) | MUX_PA24D_SERCOM5_PAD2)
#define PORT_PA24D_SERCOM5_PAD2                    (_UL_(1) << 24)

#define PIN_PB00D_SERCOM5_PAD2                     _UL_(32)    
#define MUX_PB00D_SERCOM5_PAD2                     _UL_(3)     
#define PINMUX_PB00D_SERCOM5_PAD2                  ((PIN_PB00D_SERCOM5_PAD2 << 16) | MUX_PB00D_SERCOM5_PAD2)
#define PORT_PB00D_SERCOM5_PAD2                    (_UL_(1) << 0)

#define PIN_PA20C_SERCOM5_PAD2                     _UL_(20)    
#define MUX_PA20C_SERCOM5_PAD2                     _UL_(2)     
#define PINMUX_PA20C_SERCOM5_PAD2                  ((PIN_PA20C_SERCOM5_PAD2 << 16) | MUX_PA20C_SERCOM5_PAD2)
#define PORT_PA20C_SERCOM5_PAD2                    (_UL_(1) << 20)

#define PIN_PA25D_SERCOM5_PAD3                     _UL_(25)    
#define MUX_PA25D_SERCOM5_PAD3                     _UL_(3)     
#define PINMUX_PA25D_SERCOM5_PAD3                  ((PIN_PA25D_SERCOM5_PAD3 << 16) | MUX_PA25D_SERCOM5_PAD3)
#define PORT_PA25D_SERCOM5_PAD3                    (_UL_(1) << 25)

/* ========== PORT definition for SUPC peripheral ========== */
#define PIN_PB00H_SUPC_PSOK                        _UL_(32)    
#define MUX_PB00H_SUPC_PSOK                        _UL_(7)     
#define PINMUX_PB00H_SUPC_PSOK                     ((PIN_PB00H_SUPC_PSOK << 16) | MUX_PB00H_SUPC_PSOK)
#define PORT_PB00H_SUPC_PSOK                       (_UL_(1) << 0)

/* ========== PORT definition for TC0 peripheral ========== */
#define PIN_PB08E_TC0_WO0                          _UL_(40)    
#define MUX_PB08E_TC0_WO0                          _UL_(4)     
#define PINMUX_PB08E_TC0_WO0                       ((PIN_PB08E_TC0_WO0 << 16) | MUX_PB08E_TC0_WO0)
#define PORT_PB08E_TC0_WO0                         (_UL_(1) << 8)

#define PIN_PB09E_TC0_WO1                          _UL_(41)    
#define MUX_PB09E_TC0_WO1                          _UL_(4)     
#define PINMUX_PB09E_TC0_WO1                       ((PIN_PB09E_TC0_WO1 << 16) | MUX_PB09E_TC0_WO1)
#define PORT_PB09E_TC0_WO1                         (_UL_(1) << 9)

/* ========== PORT definition for TC1 peripheral ========== */
#define PIN_PA24E_TC1_WO0                          _UL_(24)    
#define MUX_PA24E_TC1_WO0                          _UL_(4)     
#define PINMUX_PA24E_TC1_WO0                       ((PIN_PA24E_TC1_WO0 << 16) | MUX_PA24E_TC1_WO0)
#define PORT_PA24E_TC1_WO0                         (_UL_(1) << 24)

#define PIN_PB14E_TC1_WO0                          _UL_(46)    
#define MUX_PB14E_TC1_WO0                          _UL_(4)     
#define PINMUX_PB14E_TC1_WO0                       ((PIN_PB14E_TC1_WO0 << 16) | MUX_PB14E_TC1_WO0)
#define PORT_PB14E_TC1_WO0                         (_UL_(1) << 14)

#define PIN_PA25E_TC1_WO1                          _UL_(25)    
#define MUX_PA25E_TC1_WO1                          _UL_(4)     
#define PINMUX_PA25E_TC1_WO1                       ((PIN_PA25E_TC1_WO1 << 16) | MUX_PA25E_TC1_WO1)
#define PORT_PA25E_TC1_WO1                         (_UL_(1) << 25)

#define PIN_PB15E_TC1_WO1                          _UL_(47)    
#define MUX_PB15E_TC1_WO1                          _UL_(4)     
#define PINMUX_PB15E_TC1_WO1                       ((PIN_PB15E_TC1_WO1 << 16) | MUX_PB15E_TC1_WO1)
#define PORT_PB15E_TC1_WO1                         (_UL_(1) << 15)

/* ========== PORT definition for TC4 peripheral ========== */
#define PIN_PA18E_TC4_WO0                          _UL_(18)    
#define MUX_PA18E_TC4_WO0                          _UL_(4)     
#define PINMUX_PA18E_TC4_WO0                       ((PIN_PA18E_TC4_WO0 << 16) | MUX_PA18E_TC4_WO0)
#define PORT_PA18E_TC4_WO0                         (_UL_(1) << 18)

#define PIN_PA14E_TC4_WO0                          _UL_(14)    
#define MUX_PA14E_TC4_WO0                          _UL_(4)     
#define PINMUX_PA14E_TC4_WO0                       ((PIN_PA14E_TC4_WO0 << 16) | MUX_PA14E_TC4_WO0)
#define PORT_PA14E_TC4_WO0                         (_UL_(1) << 14)

#define PIN_PA19E_TC4_WO1                          _UL_(19)    
#define MUX_PA19E_TC4_WO1                          _UL_(4)     
#define PINMUX_PA19E_TC4_WO1                       ((PIN_PA19E_TC4_WO1 << 16) | MUX_PA19E_TC4_WO1)
#define PORT_PA19E_TC4_WO1                         (_UL_(1) << 19)

#define PIN_PA15E_TC4_WO1                          _UL_(15)    
#define MUX_PA15E_TC4_WO1                          _UL_(4)     
#define PINMUX_PA15E_TC4_WO1                       ((PIN_PA15E_TC4_WO1 << 16) | MUX_PA15E_TC4_WO1)
#define PORT_PA15E_TC4_WO1                         (_UL_(1) << 15)

/* ========== PORT definition for TCC0 peripheral ========== */
#define PIN_PA08E_TCC0_WO0                         _UL_(8)     
#define MUX_PA08E_TCC0_WO0                         _UL_(4)     
#define PINMUX_PA08E_TCC0_WO0                      ((PIN_PA08E_TCC0_WO0 << 16) | MUX_PA08E_TCC0_WO0)
#define PORT_PA08E_TCC0_WO0                        (_UL_(1) << 8)

#define PIN_PB30E_TCC0_WO0                         _UL_(62)    
#define MUX_PB30E_TCC0_WO0                         _UL_(4)     
#define PINMUX_PB30E_TCC0_WO0                      ((PIN_PB30E_TCC0_WO0 << 16) | MUX_PB30E_TCC0_WO0)
#define PORT_PB30E_TCC0_WO0                        (_UL_(1) << 30)

#define PIN_PA09E_TCC0_WO1                         _UL_(9)     
#define MUX_PA09E_TCC0_WO1                         _UL_(4)     
#define PINMUX_PA09E_TCC0_WO1                      ((PIN_PA09E_TCC0_WO1 << 16) | MUX_PA09E_TCC0_WO1)
#define PORT_PA09E_TCC0_WO1                        (_UL_(1) << 9)

#define PIN_PB31E_TCC0_WO1                         _UL_(63)    
#define MUX_PB31E_TCC0_WO1                         _UL_(4)     
#define PINMUX_PB31E_TCC0_WO1                      ((PIN_PB31E_TCC0_WO1 << 16) | MUX_PB31E_TCC0_WO1)
#define PORT_PB31E_TCC0_WO1                        (_UL_(1) << 31)

#define PIN_PA10F_TCC0_WO2                         _UL_(10)    
#define MUX_PA10F_TCC0_WO2                         _UL_(5)     
#define PINMUX_PA10F_TCC0_WO2                      ((PIN_PA10F_TCC0_WO2 << 16) | MUX_PA10F_TCC0_WO2)
#define PORT_PA10F_TCC0_WO2                        (_UL_(1) << 10)

#define PIN_PA18F_TCC0_WO2                         _UL_(18)    
#define MUX_PA18F_TCC0_WO2                         _UL_(5)     
#define PINMUX_PA18F_TCC0_WO2                      ((PIN_PA18F_TCC0_WO2 << 16) | MUX_PA18F_TCC0_WO2)
#define PORT_PA18F_TCC0_WO2                        (_UL_(1) << 18)

#define PIN_PA11F_TCC0_WO3                         _UL_(11)    
#define MUX_PA11F_TCC0_WO3                         _UL_(5)     
#define PINMUX_PA11F_TCC0_WO3                      ((PIN_PA11F_TCC0_WO3 << 16) | MUX_PA11F_TCC0_WO3)
#define PORT_PA11F_TCC0_WO3                        (_UL_(1) << 11)

#define PIN_PA19F_TCC0_WO3                         _UL_(19)    
#define MUX_PA19F_TCC0_WO3                         _UL_(5)     
#define PINMUX_PA19F_TCC0_WO3                      ((PIN_PA19F_TCC0_WO3 << 16) | MUX_PA19F_TCC0_WO3)
#define PORT_PA19F_TCC0_WO3                        (_UL_(1) << 19)

#define PIN_PB16F_TCC0_WO4                         _UL_(48)    
#define MUX_PB16F_TCC0_WO4                         _UL_(5)     
#define PINMUX_PB16F_TCC0_WO4                      ((PIN_PB16F_TCC0_WO4 << 16) | MUX_PB16F_TCC0_WO4)
#define PORT_PB16F_TCC0_WO4                        (_UL_(1) << 16)

#define PIN_PA14F_TCC0_WO4                         _UL_(14)    
#define MUX_PA14F_TCC0_WO4                         _UL_(5)     
#define PINMUX_PA14F_TCC0_WO4                      ((PIN_PA14F_TCC0_WO4 << 16) | MUX_PA14F_TCC0_WO4)
#define PORT_PA14F_TCC0_WO4                        (_UL_(1) << 14)

#define PIN_PA15F_TCC0_WO5                         _UL_(15)    
#define MUX_PA15F_TCC0_WO5                         _UL_(5)     
#define PINMUX_PA15F_TCC0_WO5                      ((PIN_PA15F_TCC0_WO5 << 16) | MUX_PA15F_TCC0_WO5)
#define PORT_PA15F_TCC0_WO5                        (_UL_(1) << 15)

#define PIN_PB17F_TCC0_WO5                         _UL_(49)    
#define MUX_PB17F_TCC0_WO5                         _UL_(5)     
#define PINMUX_PB17F_TCC0_WO5                      ((PIN_PB17F_TCC0_WO5 << 16) | MUX_PB17F_TCC0_WO5)
#define PORT_PB17F_TCC0_WO5                        (_UL_(1) << 17)

#define PIN_PA16F_TCC0_WO6                         _UL_(16)    
#define MUX_PA16F_TCC0_WO6                         _UL_(5)     
#define PINMUX_PA16F_TCC0_WO6                      ((PIN_PA16F_TCC0_WO6 << 16) | MUX_PA16F_TCC0_WO6)
#define PORT_PA16F_TCC0_WO6                        (_UL_(1) << 16)

#define PIN_PA20F_TCC0_WO6                         _UL_(20)    
#define MUX_PA20F_TCC0_WO6                         _UL_(5)     
#define PINMUX_PA20F_TCC0_WO6                      ((PIN_PA20F_TCC0_WO6 << 16) | MUX_PA20F_TCC0_WO6)
#define PORT_PA20F_TCC0_WO6                        (_UL_(1) << 20)

#define PIN_PA17F_TCC0_WO7                         _UL_(17)    
#define MUX_PA17F_TCC0_WO7                         _UL_(5)     
#define PINMUX_PA17F_TCC0_WO7                      ((PIN_PA17F_TCC0_WO7 << 16) | MUX_PA17F_TCC0_WO7)
#define PORT_PA17F_TCC0_WO7                        (_UL_(1) << 17)

/* ========== PORT definition for TCC1 peripheral ========== */
#define PIN_PA06E_TCC1_WO0                         _UL_(6)     
#define MUX_PA06E_TCC1_WO0                         _UL_(4)     
#define PINMUX_PA06E_TCC1_WO0                      ((PIN_PA06E_TCC1_WO0 << 16) | MUX_PA06E_TCC1_WO0)
#define PORT_PA06E_TCC1_WO0                        (_UL_(1) << 6)

#define PIN_PA10E_TCC1_WO0                         _UL_(10)    
#define MUX_PA10E_TCC1_WO0                         _UL_(4)     
#define PINMUX_PA10E_TCC1_WO0                      ((PIN_PA10E_TCC1_WO0 << 16) | MUX_PA10E_TCC1_WO0)
#define PORT_PA10E_TCC1_WO0                        (_UL_(1) << 10)

#define PIN_PA30E_TCC1_WO0                         _UL_(30)    
#define MUX_PA30E_TCC1_WO0                         _UL_(4)     
#define PINMUX_PA30E_TCC1_WO0                      ((PIN_PA30E_TCC1_WO0 << 16) | MUX_PA30E_TCC1_WO0)
#define PORT_PA30E_TCC1_WO0                        (_UL_(1) << 30)

#define PIN_PA07E_TCC1_WO1                         _UL_(7)     
#define MUX_PA07E_TCC1_WO1                         _UL_(4)     
#define PINMUX_PA07E_TCC1_WO1                      ((PIN_PA07E_TCC1_WO1 << 16) | MUX_PA07E_TCC1_WO1)
#define PORT_PA07E_TCC1_WO1                        (_UL_(1) << 7)

#define PIN_PA11E_TCC1_WO1                         _UL_(11)    
#define MUX_PA11E_TCC1_WO1                         _UL_(4)     
#define PINMUX_PA11E_TCC1_WO1                      ((PIN_PA11E_TCC1_WO1 << 16) | MUX_PA11E_TCC1_WO1)
#define PORT_PA11E_TCC1_WO1                        (_UL_(1) << 11)

#define PIN_PA31E_TCC1_WO1                         _UL_(31)    
#define MUX_PA31E_TCC1_WO1                         _UL_(4)     
#define PINMUX_PA31E_TCC1_WO1                      ((PIN_PA31E_TCC1_WO1 << 16) | MUX_PA31E_TCC1_WO1)
#define PORT_PA31E_TCC1_WO1                        (_UL_(1) << 31)

#define PIN_PA08F_TCC1_WO2                         _UL_(8)     
#define MUX_PA08F_TCC1_WO2                         _UL_(5)     
#define PINMUX_PA08F_TCC1_WO2                      ((PIN_PA08F_TCC1_WO2 << 16) | MUX_PA08F_TCC1_WO2)
#define PORT_PA08F_TCC1_WO2                        (_UL_(1) << 8)

#define PIN_PA24F_TCC1_WO2                         _UL_(24)    
#define MUX_PA24F_TCC1_WO2                         _UL_(5)     
#define PINMUX_PA24F_TCC1_WO2                      ((PIN_PA24F_TCC1_WO2 << 16) | MUX_PA24F_TCC1_WO2)
#define PORT_PA24F_TCC1_WO2                        (_UL_(1) << 24)

#define PIN_PB30F_TCC1_WO2                         _UL_(62)    
#define MUX_PB30F_TCC1_WO2                         _UL_(5)     
#define PINMUX_PB30F_TCC1_WO2                      ((PIN_PB30F_TCC1_WO2 << 16) | MUX_PB30F_TCC1_WO2)
#define PORT_PB30F_TCC1_WO2                        (_UL_(1) << 30)

#define PIN_PA09F_TCC1_WO3                         _UL_(9)     
#define MUX_PA09F_TCC1_WO3                         _UL_(5)     
#define PINMUX_PA09F_TCC1_WO3                      ((PIN_PA09F_TCC1_WO3 << 16) | MUX_PA09F_TCC1_WO3)
#define PORT_PA09F_TCC1_WO3                        (_UL_(1) << 9)

#define PIN_PA25F_TCC1_WO3                         _UL_(25)    
#define MUX_PA25F_TCC1_WO3                         _UL_(5)     
#define PINMUX_PA25F_TCC1_WO3                      ((PIN_PA25F_TCC1_WO3 << 16) | MUX_PA25F_TCC1_WO3)
#define PORT_PA25F_TCC1_WO3                        (_UL_(1) << 25)

#define PIN_PB31F_TCC1_WO3                         _UL_(63)    
#define MUX_PB31F_TCC1_WO3                         _UL_(5)     
#define PINMUX_PB31F_TCC1_WO3                      ((PIN_PB31F_TCC1_WO3 << 16) | MUX_PB31F_TCC1_WO3)
#define PORT_PB31F_TCC1_WO3                        (_UL_(1) << 31)

/* ========== PORT definition for TCC2 peripheral ========== */
#define PIN_PA16E_TCC2_WO0                         _UL_(16)    
#define MUX_PA16E_TCC2_WO0                         _UL_(4)     
#define PINMUX_PA16E_TCC2_WO0                      ((PIN_PA16E_TCC2_WO0 << 16) | MUX_PA16E_TCC2_WO0)
#define PORT_PA16E_TCC2_WO0                        (_UL_(1) << 16)

#define PIN_PA17E_TCC2_WO1                         _UL_(17)    
#define MUX_PA17E_TCC2_WO1                         _UL_(4)     
#define PINMUX_PA17E_TCC2_WO1                      ((PIN_PA17E_TCC2_WO1 << 16) | MUX_PA17E_TCC2_WO1)
#define PORT_PA17E_TCC2_WO1                        (_UL_(1) << 17)

/* ========== PORT definition for USB peripheral ========== */
#define PIN_PA24G_USB_DM                           _UL_(24)    
#define MUX_PA24G_USB_DM                           _UL_(6)     
#define PINMUX_PA24G_USB_DM                        ((PIN_PA24G_USB_DM << 16) | MUX_PA24G_USB_DM)
#define PORT_PA24G_USB_DM                          (_UL_(1) << 24)

#define PIN_PA25G_USB_DP                           _UL_(25)    
#define MUX_PA25G_USB_DP                           _UL_(6)     
#define PINMUX_PA25G_USB_DP                        ((PIN_PA25G_USB_DP << 16) | MUX_PA25G_USB_DP)
#define PORT_PA25G_USB_DP                          (_UL_(1) << 25)



#endif /* _SAMR30E18A_GPIO_H_ */

