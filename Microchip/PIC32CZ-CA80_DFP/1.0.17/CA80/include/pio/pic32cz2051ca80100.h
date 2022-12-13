/*
 * Peripheral I/O description for PIC32CZ2051CA80100
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

/* file generated from device description version 2022-07-07T22:59:00Z */
#ifndef _PIC32CZ2051CA80100_GPIO_H_
#define _PIC32CZ2051CA80100_GPIO_H_

/* ========== Peripheral I/O pin numbers ========== */
#define PIN_PA00                    (    0)  /**< Pin Number for PA00 */
#define PIN_PA01                    (    1)  /**< Pin Number for PA01 */
#define PIN_PA02                    (    2)  /**< Pin Number for PA02 */
#define PIN_PA03                    (    3)  /**< Pin Number for PA03 */
#define PIN_PA04                    (    4)  /**< Pin Number for PA04 */
#define PIN_PA05                    (    5)  /**< Pin Number for PA05 */
#define PIN_PA06                    (    6)  /**< Pin Number for PA06 */
#define PIN_PA07                    (    7)  /**< Pin Number for PA07 */
#define PIN_PA08                    (    8)  /**< Pin Number for PA08 */
#define PIN_PA09                    (    9)  /**< Pin Number for PA09 */
#define PIN_PA10                    (   10)  /**< Pin Number for PA10 */
#define PIN_PA11                    (   11)  /**< Pin Number for PA11 */
#define PIN_PA12                    (   12)  /**< Pin Number for PA12 */
#define PIN_PA13                    (   13)  /**< Pin Number for PA13 */
#define PIN_PA14                    (   14)  /**< Pin Number for PA14 */
#define PIN_PA15                    (   15)  /**< Pin Number for PA15 */
#define PIN_PA16                    (   16)  /**< Pin Number for PA16 */
#define PIN_PA17                    (   17)  /**< Pin Number for PA17 */
#define PIN_PA18                    (   18)  /**< Pin Number for PA18 */
#define PIN_PA19                    (   19)  /**< Pin Number for PA19 */
#define PIN_PA20                    (   20)  /**< Pin Number for PA20 */
#define PIN_PB00                    (   32)  /**< Pin Number for PB00 */
#define PIN_PB01                    (   33)  /**< Pin Number for PB01 */
#define PIN_PB02                    (   34)  /**< Pin Number for PB02 */
#define PIN_PB03                    (   35)  /**< Pin Number for PB03 */
#define PIN_PB04                    (   36)  /**< Pin Number for PB04 */
#define PIN_PB05                    (   37)  /**< Pin Number for PB05 */
#define PIN_PB06                    (   38)  /**< Pin Number for PB06 */
#define PIN_PB07                    (   39)  /**< Pin Number for PB07 */
#define PIN_PB08                    (   40)  /**< Pin Number for PB08 */
#define PIN_PB09                    (   41)  /**< Pin Number for PB09 */
#define PIN_PB10                    (   42)  /**< Pin Number for PB10 */
#define PIN_PB11                    (   43)  /**< Pin Number for PB11 */
#define PIN_PB12                    (   44)  /**< Pin Number for PB12 */
#define PIN_PB13                    (   45)  /**< Pin Number for PB13 */
#define PIN_PB14                    (   46)  /**< Pin Number for PB14 */
#define PIN_PB15                    (   47)  /**< Pin Number for PB15 */
#define PIN_PB16                    (   48)  /**< Pin Number for PB16 */
#define PIN_PB17                    (   49)  /**< Pin Number for PB17 */
#define PIN_PC00                    (   64)  /**< Pin Number for PC00 */
#define PIN_PC01                    (   65)  /**< Pin Number for PC01 */
#define PIN_PC02                    (   66)  /**< Pin Number for PC02 */
#define PIN_PC03                    (   67)  /**< Pin Number for PC03 */
#define PIN_PC04                    (   68)  /**< Pin Number for PC04 */
#define PIN_PC05                    (   69)  /**< Pin Number for PC05 */
#define PIN_PC06                    (   70)  /**< Pin Number for PC06 */
#define PIN_PC07                    (   71)  /**< Pin Number for PC07 */
#define PIN_PC08                    (   72)  /**< Pin Number for PC08 */
#define PIN_PC09                    (   73)  /**< Pin Number for PC09 */
#define PIN_PC10                    (   74)  /**< Pin Number for PC10 */
#define PIN_PC11                    (   75)  /**< Pin Number for PC11 */
#define PIN_PC12                    (   76)  /**< Pin Number for PC12 */
#define PIN_PC13                    (   77)  /**< Pin Number for PC13 */
#define PIN_PC14                    (   78)  /**< Pin Number for PC14 */
#define PIN_PC15                    (   79)  /**< Pin Number for PC15 */
#define PIN_PC17                    (   81)  /**< Pin Number for PC17 */
#define PIN_PC18                    (   82)  /**< Pin Number for PC18 */
#define PIN_PC19                    (   83)  /**< Pin Number for PC19 */
#define PIN_PC20                    (   84)  /**< Pin Number for PC20 */
#define PIN_PD00                    (   96)  /**< Pin Number for PD00 */
#define PIN_PD01                    (   97)  /**< Pin Number for PD01 */
#define PIN_PD02                    (   98)  /**< Pin Number for PD02 */
#define PIN_PD03                    (   99)  /**< Pin Number for PD03 */
#define PIN_PD04                    (  100)  /**< Pin Number for PD04 */
#define PIN_PD05                    (  101)  /**< Pin Number for PD05 */
#define PIN_PD06                    (  102)  /**< Pin Number for PD06 */
#define PIN_PD07                    (  103)  /**< Pin Number for PD07 */
#define PIN_PD08                    (  104)  /**< Pin Number for PD08 */
#define PIN_PD09                    (  105)  /**< Pin Number for PD09 */
#define PIN_PD10                    (  106)  /**< Pin Number for PD10 */
#define PIN_PD11                    (  107)  /**< Pin Number for PD11 */
#define PIN_PD12                    (  108)  /**< Pin Number for PD12 */

/* ========== Peripheral I/O masks ========== */
#define PORT_PA00                   (_UINT32_(1) << 0) /**< PORT mask for PA00 */
#define PORT_PA01                   (_UINT32_(1) << 1) /**< PORT mask for PA01 */
#define PORT_PA02                   (_UINT32_(1) << 2) /**< PORT mask for PA02 */
#define PORT_PA03                   (_UINT32_(1) << 3) /**< PORT mask for PA03 */
#define PORT_PA04                   (_UINT32_(1) << 4) /**< PORT mask for PA04 */
#define PORT_PA05                   (_UINT32_(1) << 5) /**< PORT mask for PA05 */
#define PORT_PA06                   (_UINT32_(1) << 6) /**< PORT mask for PA06 */
#define PORT_PA07                   (_UINT32_(1) << 7) /**< PORT mask for PA07 */
#define PORT_PA08                   (_UINT32_(1) << 8) /**< PORT mask for PA08 */
#define PORT_PA09                   (_UINT32_(1) << 9) /**< PORT mask for PA09 */
#define PORT_PA10                   (_UINT32_(1) << 10) /**< PORT mask for PA10 */
#define PORT_PA11                   (_UINT32_(1) << 11) /**< PORT mask for PA11 */
#define PORT_PA12                   (_UINT32_(1) << 12) /**< PORT mask for PA12 */
#define PORT_PA13                   (_UINT32_(1) << 13) /**< PORT mask for PA13 */
#define PORT_PA14                   (_UINT32_(1) << 14) /**< PORT mask for PA14 */
#define PORT_PA15                   (_UINT32_(1) << 15) /**< PORT mask for PA15 */
#define PORT_PA16                   (_UINT32_(1) << 16) /**< PORT mask for PA16 */
#define PORT_PA17                   (_UINT32_(1) << 17) /**< PORT mask for PA17 */
#define PORT_PA18                   (_UINT32_(1) << 18) /**< PORT mask for PA18 */
#define PORT_PA19                   (_UINT32_(1) << 19) /**< PORT mask for PA19 */
#define PORT_PA20                   (_UINT32_(1) << 20) /**< PORT mask for PA20 */
#define PORT_PB00                   (_UINT32_(1) << 0) /**< PORT mask for PB00 */
#define PORT_PB01                   (_UINT32_(1) << 1) /**< PORT mask for PB01 */
#define PORT_PB02                   (_UINT32_(1) << 2) /**< PORT mask for PB02 */
#define PORT_PB03                   (_UINT32_(1) << 3) /**< PORT mask for PB03 */
#define PORT_PB04                   (_UINT32_(1) << 4) /**< PORT mask for PB04 */
#define PORT_PB05                   (_UINT32_(1) << 5) /**< PORT mask for PB05 */
#define PORT_PB06                   (_UINT32_(1) << 6) /**< PORT mask for PB06 */
#define PORT_PB07                   (_UINT32_(1) << 7) /**< PORT mask for PB07 */
#define PORT_PB08                   (_UINT32_(1) << 8) /**< PORT mask for PB08 */
#define PORT_PB09                   (_UINT32_(1) << 9) /**< PORT mask for PB09 */
#define PORT_PB10                   (_UINT32_(1) << 10) /**< PORT mask for PB10 */
#define PORT_PB11                   (_UINT32_(1) << 11) /**< PORT mask for PB11 */
#define PORT_PB12                   (_UINT32_(1) << 12) /**< PORT mask for PB12 */
#define PORT_PB13                   (_UINT32_(1) << 13) /**< PORT mask for PB13 */
#define PORT_PB14                   (_UINT32_(1) << 14) /**< PORT mask for PB14 */
#define PORT_PB15                   (_UINT32_(1) << 15) /**< PORT mask for PB15 */
#define PORT_PB16                   (_UINT32_(1) << 16) /**< PORT mask for PB16 */
#define PORT_PB17                   (_UINT32_(1) << 17) /**< PORT mask for PB17 */
#define PORT_PC00                   (_UINT32_(1) << 0) /**< PORT mask for PC00 */
#define PORT_PC01                   (_UINT32_(1) << 1) /**< PORT mask for PC01 */
#define PORT_PC02                   (_UINT32_(1) << 2) /**< PORT mask for PC02 */
#define PORT_PC03                   (_UINT32_(1) << 3) /**< PORT mask for PC03 */
#define PORT_PC04                   (_UINT32_(1) << 4) /**< PORT mask for PC04 */
#define PORT_PC05                   (_UINT32_(1) << 5) /**< PORT mask for PC05 */
#define PORT_PC06                   (_UINT32_(1) << 6) /**< PORT mask for PC06 */
#define PORT_PC07                   (_UINT32_(1) << 7) /**< PORT mask for PC07 */
#define PORT_PC08                   (_UINT32_(1) << 8) /**< PORT mask for PC08 */
#define PORT_PC09                   (_UINT32_(1) << 9) /**< PORT mask for PC09 */
#define PORT_PC10                   (_UINT32_(1) << 10) /**< PORT mask for PC10 */
#define PORT_PC11                   (_UINT32_(1) << 11) /**< PORT mask for PC11 */
#define PORT_PC12                   (_UINT32_(1) << 12) /**< PORT mask for PC12 */
#define PORT_PC13                   (_UINT32_(1) << 13) /**< PORT mask for PC13 */
#define PORT_PC14                   (_UINT32_(1) << 14) /**< PORT mask for PC14 */
#define PORT_PC15                   (_UINT32_(1) << 15) /**< PORT mask for PC15 */
#define PORT_PC17                   (_UINT32_(1) << 17) /**< PORT mask for PC17 */
#define PORT_PC18                   (_UINT32_(1) << 18) /**< PORT mask for PC18 */
#define PORT_PC19                   (_UINT32_(1) << 19) /**< PORT mask for PC19 */
#define PORT_PC20                   (_UINT32_(1) << 20) /**< PORT mask for PC20 */
#define PORT_PD00                   (_UINT32_(1) << 0) /**< PORT mask for PD00 */
#define PORT_PD01                   (_UINT32_(1) << 1) /**< PORT mask for PD01 */
#define PORT_PD02                   (_UINT32_(1) << 2) /**< PORT mask for PD02 */
#define PORT_PD03                   (_UINT32_(1) << 3) /**< PORT mask for PD03 */
#define PORT_PD04                   (_UINT32_(1) << 4) /**< PORT mask for PD04 */
#define PORT_PD05                   (_UINT32_(1) << 5) /**< PORT mask for PD05 */
#define PORT_PD06                   (_UINT32_(1) << 6) /**< PORT mask for PD06 */
#define PORT_PD07                   (_UINT32_(1) << 7) /**< PORT mask for PD07 */
#define PORT_PD08                   (_UINT32_(1) << 8) /**< PORT mask for PD08 */
#define PORT_PD09                   (_UINT32_(1) << 9) /**< PORT mask for PD09 */
#define PORT_PD10                   (_UINT32_(1) << 10) /**< PORT mask for PD10 */
#define PORT_PD11                   (_UINT32_(1) << 11) /**< PORT mask for PD11 */
#define PORT_PD12                   (_UINT32_(1) << 12) /**< PORT mask for PD12 */

/* ========== PORT definition for AC peripheral ========== */
#define PIN_PB01B_AC_AIN0                          _UINT32_(33)
#define MUX_PB01B_AC_AIN0                          _UINT32_(1) 
#define PINMUX_PB01B_AC_AIN0                       ((PIN_PB01B_AC_AIN0 << 16) | MUX_PB01B_AC_AIN0)
#define PORT_PB01B_AC_AIN0                         (_UINT32_(1) << 1)

#define PIN_PB00B_AC_AIN1                          _UINT32_(32)
#define MUX_PB00B_AC_AIN1                          _UINT32_(1) 
#define PINMUX_PB00B_AC_AIN1                       ((PIN_PB00B_AC_AIN1 << 16) | MUX_PB00B_AC_AIN1)
#define PORT_PB00B_AC_AIN1                         (_UINT32_(1) << 0)

#define PIN_PA20B_AC_AIN2                          _UINT32_(20)
#define MUX_PA20B_AC_AIN2                          _UINT32_(1) 
#define PINMUX_PA20B_AC_AIN2                       ((PIN_PA20B_AC_AIN2 << 16) | MUX_PA20B_AC_AIN2)
#define PORT_PA20B_AC_AIN2                         (_UINT32_(1) << 20)

#define PIN_PA19B_AC_AIN3                          _UINT32_(19)
#define MUX_PA19B_AC_AIN3                          _UINT32_(1) 
#define PINMUX_PA19B_AC_AIN3                       ((PIN_PA19B_AC_AIN3 << 16) | MUX_PA19B_AC_AIN3)
#define PORT_PA19B_AC_AIN3                         (_UINT32_(1) << 19)

#define PIN_PC07B_AC_CMP0                          _UINT32_(71)
#define MUX_PC07B_AC_CMP0                          _UINT32_(1) 
#define PINMUX_PC07B_AC_CMP0                       ((PIN_PC07B_AC_CMP0 << 16) | MUX_PC07B_AC_CMP0)
#define PORT_PC07B_AC_CMP0                         (_UINT32_(1) << 7)

#define PIN_PC06B_AC_CMP1                          _UINT32_(70)
#define MUX_PC06B_AC_CMP1                          _UINT32_(1) 
#define PINMUX_PC06B_AC_CMP1                       ((PIN_PC06B_AC_CMP1 << 16) | MUX_PC06B_AC_CMP1)
#define PORT_PC06B_AC_CMP1                         (_UINT32_(1) << 6)

/* ========== PORT definition for ADC peripheral ========== */
#define PIN_PA17B_ADC_VINM16                       _UINT32_(17)
#define MUX_PA17B_ADC_VINM16                       _UINT32_(1) 
#define PINMUX_PA17B_ADC_VINM16                    ((PIN_PA17B_ADC_VINM16 << 16) | MUX_PA17B_ADC_VINM16)
#define PORT_PA17B_ADC_VINM16                      (_UINT32_(1) << 17)

#define PIN_PA15B_ADC_VINM18                       _UINT32_(15)
#define MUX_PA15B_ADC_VINM18                       _UINT32_(1) 
#define PINMUX_PA15B_ADC_VINM18                    ((PIN_PA15B_ADC_VINM18 << 16) | MUX_PA15B_ADC_VINM18)
#define PORT_PA15B_ADC_VINM18                      (_UINT32_(1) << 15)

#define PIN_PA13B_ADC_VINM24                       _UINT32_(13)
#define MUX_PA13B_ADC_VINM24                       _UINT32_(1) 
#define PINMUX_PA13B_ADC_VINM24                    ((PIN_PA13B_ADC_VINM24 << 16) | MUX_PA13B_ADC_VINM24)
#define PORT_PA13B_ADC_VINM24                      (_UINT32_(1) << 13)

#define PIN_PA11B_ADC_VINM26                       _UINT32_(11)
#define MUX_PA11B_ADC_VINM26                       _UINT32_(1) 
#define PINMUX_PA11B_ADC_VINM26                    ((PIN_PA11B_ADC_VINM26 << 16) | MUX_PA11B_ADC_VINM26)
#define PORT_PA11B_ADC_VINM26                      (_UINT32_(1) << 11)

#define PIN_PA09B_ADC_VINM32                       _UINT32_(9) 
#define MUX_PA09B_ADC_VINM32                       _UINT32_(1) 
#define PINMUX_PA09B_ADC_VINM32                    ((PIN_PA09B_ADC_VINM32 << 16) | MUX_PA09B_ADC_VINM32)
#define PORT_PA09B_ADC_VINM32                      (_UINT32_(1) << 9)

#define PIN_PA07B_ADC_VINM34                       _UINT32_(7) 
#define MUX_PA07B_ADC_VINM34                       _UINT32_(1) 
#define PINMUX_PA07B_ADC_VINM34                    ((PIN_PA07B_ADC_VINM34 << 16) | MUX_PA07B_ADC_VINM34)
#define PORT_PA07B_ADC_VINM34                      (_UINT32_(1) << 7)

#define PIN_PB03B_ADC_VINP0                        _UINT32_(35)
#define MUX_PB03B_ADC_VINP0                        _UINT32_(1) 
#define PINMUX_PB03B_ADC_VINP0                     ((PIN_PB03B_ADC_VINP0 << 16) | MUX_PB03B_ADC_VINP0)
#define PORT_PB03B_ADC_VINP0                       (_UINT32_(1) << 3)

#define PIN_PB02B_ADC_VINP1                        _UINT32_(34)
#define MUX_PB02B_ADC_VINP1                        _UINT32_(1) 
#define PINMUX_PB02B_ADC_VINP1                     ((PIN_PB02B_ADC_VINP1 << 16) | MUX_PB02B_ADC_VINP1)
#define PORT_PB02B_ADC_VINP1                       (_UINT32_(1) << 2)

#define PIN_PB01B_ADC_VINP2                        _UINT32_(33)
#define MUX_PB01B_ADC_VINP2                        _UINT32_(1) 
#define PINMUX_PB01B_ADC_VINP2                     ((PIN_PB01B_ADC_VINP2 << 16) | MUX_PB01B_ADC_VINP2)
#define PORT_PB01B_ADC_VINP2                       (_UINT32_(1) << 1)

#define PIN_PB00B_ADC_VINP3                        _UINT32_(32)
#define MUX_PB00B_ADC_VINP3                        _UINT32_(1) 
#define PINMUX_PB00B_ADC_VINP3                     ((PIN_PB00B_ADC_VINP3 << 16) | MUX_PB00B_ADC_VINP3)
#define PORT_PB00B_ADC_VINP3                       (_UINT32_(1) << 0)

#define PIN_PA20B_ADC_VINP4                        _UINT32_(20)
#define MUX_PA20B_ADC_VINP4                        _UINT32_(1) 
#define PINMUX_PA20B_ADC_VINP4                     ((PIN_PA20B_ADC_VINP4 << 16) | MUX_PA20B_ADC_VINP4)
#define PORT_PA20B_ADC_VINP4                       (_UINT32_(1) << 20)

#define PIN_PA19B_ADC_VINP5                        _UINT32_(19)
#define MUX_PA19B_ADC_VINP5                        _UINT32_(1) 
#define PINMUX_PA19B_ADC_VINP5                     ((PIN_PA19B_ADC_VINP5 << 16) | MUX_PA19B_ADC_VINP5)
#define PORT_PA19B_ADC_VINP5                       (_UINT32_(1) << 19)

#define PIN_PA18B_ADC_VINP16                       _UINT32_(18)
#define MUX_PA18B_ADC_VINP16                       _UINT32_(1) 
#define PINMUX_PA18B_ADC_VINP16                    ((PIN_PA18B_ADC_VINP16 << 16) | MUX_PA18B_ADC_VINP16)
#define PORT_PA18B_ADC_VINP16                      (_UINT32_(1) << 18)

#define PIN_PA17B_ADC_VINP17                       _UINT32_(17)
#define MUX_PA17B_ADC_VINP17                       _UINT32_(1) 
#define PINMUX_PA17B_ADC_VINP17                    ((PIN_PA17B_ADC_VINP17 << 16) | MUX_PA17B_ADC_VINP17)
#define PORT_PA17B_ADC_VINP17                      (_UINT32_(1) << 17)

#define PIN_PA16B_ADC_VINP18                       _UINT32_(16)
#define MUX_PA16B_ADC_VINP18                       _UINT32_(1) 
#define PINMUX_PA16B_ADC_VINP18                    ((PIN_PA16B_ADC_VINP18 << 16) | MUX_PA16B_ADC_VINP18)
#define PORT_PA16B_ADC_VINP18                      (_UINT32_(1) << 16)

#define PIN_PA15B_ADC_VINP19                       _UINT32_(15)
#define MUX_PA15B_ADC_VINP19                       _UINT32_(1) 
#define PINMUX_PA15B_ADC_VINP19                    ((PIN_PA15B_ADC_VINP19 << 16) | MUX_PA15B_ADC_VINP19)
#define PORT_PA15B_ADC_VINP19                      (_UINT32_(1) << 15)

#define PIN_PA14B_ADC_VINP24                       _UINT32_(14)
#define MUX_PA14B_ADC_VINP24                       _UINT32_(1) 
#define PINMUX_PA14B_ADC_VINP24                    ((PIN_PA14B_ADC_VINP24 << 16) | MUX_PA14B_ADC_VINP24)
#define PORT_PA14B_ADC_VINP24                      (_UINT32_(1) << 14)

#define PIN_PA13B_ADC_VINP25                       _UINT32_(13)
#define MUX_PA13B_ADC_VINP25                       _UINT32_(1) 
#define PINMUX_PA13B_ADC_VINP25                    ((PIN_PA13B_ADC_VINP25 << 16) | MUX_PA13B_ADC_VINP25)
#define PORT_PA13B_ADC_VINP25                      (_UINT32_(1) << 13)

#define PIN_PA12B_ADC_VINP26                       _UINT32_(12)
#define MUX_PA12B_ADC_VINP26                       _UINT32_(1) 
#define PINMUX_PA12B_ADC_VINP26                    ((PIN_PA12B_ADC_VINP26 << 16) | MUX_PA12B_ADC_VINP26)
#define PORT_PA12B_ADC_VINP26                      (_UINT32_(1) << 12)

#define PIN_PA11B_ADC_VINP27                       _UINT32_(11)
#define MUX_PA11B_ADC_VINP27                       _UINT32_(1) 
#define PINMUX_PA11B_ADC_VINP27                    ((PIN_PA11B_ADC_VINP27 << 16) | MUX_PA11B_ADC_VINP27)
#define PORT_PA11B_ADC_VINP27                      (_UINT32_(1) << 11)

#define PIN_PA10B_ADC_VINP32                       _UINT32_(10)
#define MUX_PA10B_ADC_VINP32                       _UINT32_(1) 
#define PINMUX_PA10B_ADC_VINP32                    ((PIN_PA10B_ADC_VINP32 << 16) | MUX_PA10B_ADC_VINP32)
#define PORT_PA10B_ADC_VINP32                      (_UINT32_(1) << 10)

#define PIN_PA09B_ADC_VINP33                       _UINT32_(9) 
#define MUX_PA09B_ADC_VINP33                       _UINT32_(1) 
#define PINMUX_PA09B_ADC_VINP33                    ((PIN_PA09B_ADC_VINP33 << 16) | MUX_PA09B_ADC_VINP33)
#define PORT_PA09B_ADC_VINP33                      (_UINT32_(1) << 9)

#define PIN_PA08B_ADC_VINP34                       _UINT32_(8) 
#define MUX_PA08B_ADC_VINP34                       _UINT32_(1) 
#define PINMUX_PA08B_ADC_VINP34                    ((PIN_PA08B_ADC_VINP34 << 16) | MUX_PA08B_ADC_VINP34)
#define PORT_PA08B_ADC_VINP34                      (_UINT32_(1) << 8)

#define PIN_PA07B_ADC_VINP35                       _UINT32_(7) 
#define MUX_PA07B_ADC_VINP35                       _UINT32_(1) 
#define PINMUX_PA07B_ADC_VINP35                    ((PIN_PA07B_ADC_VINP35 << 16) | MUX_PA07B_ADC_VINP35)
#define PORT_PA07B_ADC_VINP35                      (_UINT32_(1) << 7)

/* ========== PORT definition for BSDAP peripheral ========== */
#define PIN_PC20G_BSDAP_TCK_SWCLK                  _UINT32_(84)
#define MUX_PC20G_BSDAP_TCK_SWCLK                  _UINT32_(6) 
#define PINMUX_PC20G_BSDAP_TCK_SWCLK               ((PIN_PC20G_BSDAP_TCK_SWCLK << 16) | MUX_PC20G_BSDAP_TCK_SWCLK)
#define PORT_PC20G_BSDAP_TCK_SWCLK                 (_UINT32_(1) << 20)

#define PIN_PC17G_BSDAP_TDI                        _UINT32_(81)
#define MUX_PC17G_BSDAP_TDI                        _UINT32_(6) 
#define PINMUX_PC17G_BSDAP_TDI                     ((PIN_PC17G_BSDAP_TDI << 16) | MUX_PC17G_BSDAP_TDI)
#define PORT_PC17G_BSDAP_TDI                       (_UINT32_(1) << 17)

#define PIN_PC19G_BSDAP_TDO                        _UINT32_(83)
#define MUX_PC19G_BSDAP_TDO                        _UINT32_(6) 
#define PINMUX_PC19G_BSDAP_TDO                     ((PIN_PC19G_BSDAP_TDO << 16) | MUX_PC19G_BSDAP_TDO)
#define PORT_PC19G_BSDAP_TDO                       (_UINT32_(1) << 19)

#define PIN_PC18G_BSDAP_TMS_SWDIO                  _UINT32_(82)
#define MUX_PC18G_BSDAP_TMS_SWDIO                  _UINT32_(6) 
#define PINMUX_PC18G_BSDAP_TMS_SWDIO               ((PIN_PC18G_BSDAP_TMS_SWDIO << 16) | MUX_PC18G_BSDAP_TMS_SWDIO)
#define PORT_PC18G_BSDAP_TMS_SWDIO                 (_UINT32_(1) << 18)

/* ========== PORT definition for CAN0 peripheral ========== */
#define PIN_PC04H_CAN0_RX                          _UINT32_(68)
#define MUX_PC04H_CAN0_RX                          _UINT32_(7) 
#define PINMUX_PC04H_CAN0_RX                       ((PIN_PC04H_CAN0_RX << 16) | MUX_PC04H_CAN0_RX)
#define PORT_PC04H_CAN0_RX                         (_UINT32_(1) << 4)

#define PIN_PC19H_CAN0_RX                          _UINT32_(83)
#define MUX_PC19H_CAN0_RX                          _UINT32_(7) 
#define PINMUX_PC19H_CAN0_RX                       ((PIN_PC19H_CAN0_RX << 16) | MUX_PC19H_CAN0_RX)
#define PORT_PC19H_CAN0_RX                         (_UINT32_(1) << 19)

#define PIN_PC05H_CAN0_TX                          _UINT32_(69)
#define MUX_PC05H_CAN0_TX                          _UINT32_(7) 
#define PINMUX_PC05H_CAN0_TX                       ((PIN_PC05H_CAN0_TX << 16) | MUX_PC05H_CAN0_TX)
#define PORT_PC05H_CAN0_TX                         (_UINT32_(1) << 5)

#define PIN_PC20H_CAN0_TX                          _UINT32_(84)
#define MUX_PC20H_CAN0_TX                          _UINT32_(7) 
#define PINMUX_PC20H_CAN0_TX                       ((PIN_PC20H_CAN0_TX << 16) | MUX_PC20H_CAN0_TX)
#define PORT_PC20H_CAN0_TX                         (_UINT32_(1) << 20)

/* ========== PORT definition for CAN1 peripheral ========== */
#define PIN_PC06H_CAN1_RX                          _UINT32_(70)
#define MUX_PC06H_CAN1_RX                          _UINT32_(7) 
#define PINMUX_PC06H_CAN1_RX                       ((PIN_PC06H_CAN1_RX << 16) | MUX_PC06H_CAN1_RX)
#define PORT_PC06H_CAN1_RX                         (_UINT32_(1) << 6)

#define PIN_PD08H_CAN1_RX                          _UINT32_(104)
#define MUX_PD08H_CAN1_RX                          _UINT32_(7) 
#define PINMUX_PD08H_CAN1_RX                       ((PIN_PD08H_CAN1_RX << 16) | MUX_PD08H_CAN1_RX)
#define PORT_PD08H_CAN1_RX                         (_UINT32_(1) << 8)

#define PIN_PC07H_CAN1_TX                          _UINT32_(71)
#define MUX_PC07H_CAN1_TX                          _UINT32_(7) 
#define PINMUX_PC07H_CAN1_TX                       ((PIN_PC07H_CAN1_TX << 16) | MUX_PC07H_CAN1_TX)
#define PORT_PC07H_CAN1_TX                         (_UINT32_(1) << 7)

#define PIN_PD09H_CAN1_TX                          _UINT32_(105)
#define MUX_PD09H_CAN1_TX                          _UINT32_(7) 
#define PINMUX_PD09H_CAN1_TX                       ((PIN_PD09H_CAN1_TX << 16) | MUX_PD09H_CAN1_TX)
#define PORT_PD09H_CAN1_TX                         (_UINT32_(1) << 9)

/* ========== PORT definition for EIC peripheral ========== */
#define PIN_PA00A_EIC_EXTINT0                      _UINT32_(0) 
#define MUX_PA00A_EIC_EXTINT0                      _UINT32_(0) 
#define PINMUX_PA00A_EIC_EXTINT0                   ((PIN_PA00A_EIC_EXTINT0 << 16) | MUX_PA00A_EIC_EXTINT0)
#define PORT_PA00A_EIC_EXTINT0                     (_UINT32_(1) << 0)
#define PIN_PA00A_EIC_EXTINT_NUM                   _UINT32_(0)  /* EIC signal: PIN_PA00 External Interrupt Line */

#define PIN_PA16A_EIC_EXTINT0                      _UINT32_(16)
#define MUX_PA16A_EIC_EXTINT0                      _UINT32_(0) 
#define PINMUX_PA16A_EIC_EXTINT0                   ((PIN_PA16A_EIC_EXTINT0 << 16) | MUX_PA16A_EIC_EXTINT0)
#define PORT_PA16A_EIC_EXTINT0                     (_UINT32_(1) << 16)
#define PIN_PA16A_EIC_EXTINT_NUM                   _UINT32_(0)  /* EIC signal: PIN_PA16 External Interrupt Line */

#define PIN_PB00A_EIC_EXTINT0                      _UINT32_(32)
#define MUX_PB00A_EIC_EXTINT0                      _UINT32_(0) 
#define PINMUX_PB00A_EIC_EXTINT0                   ((PIN_PB00A_EIC_EXTINT0 << 16) | MUX_PB00A_EIC_EXTINT0)
#define PORT_PB00A_EIC_EXTINT0                     (_UINT32_(1) << 0)
#define PIN_PB00A_EIC_EXTINT_NUM                   _UINT32_(0)  /* EIC signal: PIN_PB00 External Interrupt Line */

#define PIN_PB16A_EIC_EXTINT0                      _UINT32_(48)
#define MUX_PB16A_EIC_EXTINT0                      _UINT32_(0) 
#define PINMUX_PB16A_EIC_EXTINT0                   ((PIN_PB16A_EIC_EXTINT0 << 16) | MUX_PB16A_EIC_EXTINT0)
#define PORT_PB16A_EIC_EXTINT0                     (_UINT32_(1) << 16)
#define PIN_PB16A_EIC_EXTINT_NUM                   _UINT32_(0)  /* EIC signal: PIN_PB16 External Interrupt Line */

#define PIN_PC00A_EIC_EXTINT0                      _UINT32_(64)
#define MUX_PC00A_EIC_EXTINT0                      _UINT32_(0) 
#define PINMUX_PC00A_EIC_EXTINT0                   ((PIN_PC00A_EIC_EXTINT0 << 16) | MUX_PC00A_EIC_EXTINT0)
#define PORT_PC00A_EIC_EXTINT0                     (_UINT32_(1) << 0)
#define PIN_PC00A_EIC_EXTINT_NUM                   _UINT32_(0)  /* EIC signal: PIN_PC00 External Interrupt Line */

#define PIN_PD00A_EIC_EXTINT0                      _UINT32_(96)
#define MUX_PD00A_EIC_EXTINT0                      _UINT32_(0) 
#define PINMUX_PD00A_EIC_EXTINT0                   ((PIN_PD00A_EIC_EXTINT0 << 16) | MUX_PD00A_EIC_EXTINT0)
#define PORT_PD00A_EIC_EXTINT0                     (_UINT32_(1) << 0)
#define PIN_PD00A_EIC_EXTINT_NUM                   _UINT32_(0)  /* EIC signal: PIN_PD00 External Interrupt Line */

#define PIN_PA01A_EIC_EXTINT1                      _UINT32_(1) 
#define MUX_PA01A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PA01A_EIC_EXTINT1                   ((PIN_PA01A_EIC_EXTINT1 << 16) | MUX_PA01A_EIC_EXTINT1)
#define PORT_PA01A_EIC_EXTINT1                     (_UINT32_(1) << 1)
#define PIN_PA01A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PA01 External Interrupt Line */

#define PIN_PA17A_EIC_EXTINT1                      _UINT32_(17)
#define MUX_PA17A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PA17A_EIC_EXTINT1                   ((PIN_PA17A_EIC_EXTINT1 << 16) | MUX_PA17A_EIC_EXTINT1)
#define PORT_PA17A_EIC_EXTINT1                     (_UINT32_(1) << 17)
#define PIN_PA17A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PA17 External Interrupt Line */

#define PIN_PB01A_EIC_EXTINT1                      _UINT32_(33)
#define MUX_PB01A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PB01A_EIC_EXTINT1                   ((PIN_PB01A_EIC_EXTINT1 << 16) | MUX_PB01A_EIC_EXTINT1)
#define PORT_PB01A_EIC_EXTINT1                     (_UINT32_(1) << 1)
#define PIN_PB01A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PB01 External Interrupt Line */

#define PIN_PB17A_EIC_EXTINT1                      _UINT32_(49)
#define MUX_PB17A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PB17A_EIC_EXTINT1                   ((PIN_PB17A_EIC_EXTINT1 << 16) | MUX_PB17A_EIC_EXTINT1)
#define PORT_PB17A_EIC_EXTINT1                     (_UINT32_(1) << 17)
#define PIN_PB17A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PB17 External Interrupt Line */

#define PIN_PC01A_EIC_EXTINT1                      _UINT32_(65)
#define MUX_PC01A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PC01A_EIC_EXTINT1                   ((PIN_PC01A_EIC_EXTINT1 << 16) | MUX_PC01A_EIC_EXTINT1)
#define PORT_PC01A_EIC_EXTINT1                     (_UINT32_(1) << 1)
#define PIN_PC01A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PC01 External Interrupt Line */

#define PIN_PC02A_EIC_EXTINT1                      _UINT32_(66)
#define MUX_PC02A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PC02A_EIC_EXTINT1                   ((PIN_PC02A_EIC_EXTINT1 << 16) | MUX_PC02A_EIC_EXTINT1)
#define PORT_PC02A_EIC_EXTINT1                     (_UINT32_(1) << 2)
#define PIN_PC02A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PC02 External Interrupt Line */

#define PIN_PC17A_EIC_EXTINT1                      _UINT32_(81)
#define MUX_PC17A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PC17A_EIC_EXTINT1                   ((PIN_PC17A_EIC_EXTINT1 << 16) | MUX_PC17A_EIC_EXTINT1)
#define PORT_PC17A_EIC_EXTINT1                     (_UINT32_(1) << 17)
#define PIN_PC17A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PC17 External Interrupt Line */

#define PIN_PD01A_EIC_EXTINT1                      _UINT32_(97)
#define MUX_PD01A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PD01A_EIC_EXTINT1                   ((PIN_PD01A_EIC_EXTINT1 << 16) | MUX_PD01A_EIC_EXTINT1)
#define PORT_PD01A_EIC_EXTINT1                     (_UINT32_(1) << 1)
#define PIN_PD01A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PD01 External Interrupt Line */

#define PIN_PA02A_EIC_EXTINT2                      _UINT32_(2) 
#define MUX_PA02A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PA02A_EIC_EXTINT2                   ((PIN_PA02A_EIC_EXTINT2 << 16) | MUX_PA02A_EIC_EXTINT2)
#define PORT_PA02A_EIC_EXTINT2                     (_UINT32_(1) << 2)
#define PIN_PA02A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PA02 External Interrupt Line */

#define PIN_PA18A_EIC_EXTINT2                      _UINT32_(18)
#define MUX_PA18A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PA18A_EIC_EXTINT2                   ((PIN_PA18A_EIC_EXTINT2 << 16) | MUX_PA18A_EIC_EXTINT2)
#define PORT_PA18A_EIC_EXTINT2                     (_UINT32_(1) << 18)
#define PIN_PA18A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PA18 External Interrupt Line */

#define PIN_PB02A_EIC_EXTINT2                      _UINT32_(34)
#define MUX_PB02A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PB02A_EIC_EXTINT2                   ((PIN_PB02A_EIC_EXTINT2 << 16) | MUX_PB02A_EIC_EXTINT2)
#define PORT_PB02A_EIC_EXTINT2                     (_UINT32_(1) << 2)
#define PIN_PB02A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PB02 External Interrupt Line */

#define PIN_PC18A_EIC_EXTINT2                      _UINT32_(82)
#define MUX_PC18A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PC18A_EIC_EXTINT2                   ((PIN_PC18A_EIC_EXTINT2 << 16) | MUX_PC18A_EIC_EXTINT2)
#define PORT_PC18A_EIC_EXTINT2                     (_UINT32_(1) << 18)
#define PIN_PC18A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PC18 External Interrupt Line */

#define PIN_PD02A_EIC_EXTINT2                      _UINT32_(98)
#define MUX_PD02A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PD02A_EIC_EXTINT2                   ((PIN_PD02A_EIC_EXTINT2 << 16) | MUX_PD02A_EIC_EXTINT2)
#define PORT_PD02A_EIC_EXTINT2                     (_UINT32_(1) << 2)
#define PIN_PD02A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PD02 External Interrupt Line */

#define PIN_PA03A_EIC_EXTINT3                      _UINT32_(3) 
#define MUX_PA03A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PA03A_EIC_EXTINT3                   ((PIN_PA03A_EIC_EXTINT3 << 16) | MUX_PA03A_EIC_EXTINT3)
#define PORT_PA03A_EIC_EXTINT3                     (_UINT32_(1) << 3)
#define PIN_PA03A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PA03 External Interrupt Line */

#define PIN_PA19A_EIC_EXTINT3                      _UINT32_(19)
#define MUX_PA19A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PA19A_EIC_EXTINT3                   ((PIN_PA19A_EIC_EXTINT3 << 16) | MUX_PA19A_EIC_EXTINT3)
#define PORT_PA19A_EIC_EXTINT3                     (_UINT32_(1) << 19)
#define PIN_PA19A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PA19 External Interrupt Line */

#define PIN_PB03A_EIC_EXTINT3                      _UINT32_(35)
#define MUX_PB03A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PB03A_EIC_EXTINT3                   ((PIN_PB03A_EIC_EXTINT3 << 16) | MUX_PB03A_EIC_EXTINT3)
#define PORT_PB03A_EIC_EXTINT3                     (_UINT32_(1) << 3)
#define PIN_PB03A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PB03 External Interrupt Line */

#define PIN_PC03A_EIC_EXTINT3                      _UINT32_(67)
#define MUX_PC03A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PC03A_EIC_EXTINT3                   ((PIN_PC03A_EIC_EXTINT3 << 16) | MUX_PC03A_EIC_EXTINT3)
#define PORT_PC03A_EIC_EXTINT3                     (_UINT32_(1) << 3)
#define PIN_PC03A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PC03 External Interrupt Line */

#define PIN_PC19A_EIC_EXTINT3                      _UINT32_(83)
#define MUX_PC19A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PC19A_EIC_EXTINT3                   ((PIN_PC19A_EIC_EXTINT3 << 16) | MUX_PC19A_EIC_EXTINT3)
#define PORT_PC19A_EIC_EXTINT3                     (_UINT32_(1) << 19)
#define PIN_PC19A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PC19 External Interrupt Line */

#define PIN_PD03A_EIC_EXTINT3                      _UINT32_(99)
#define MUX_PD03A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PD03A_EIC_EXTINT3                   ((PIN_PD03A_EIC_EXTINT3 << 16) | MUX_PD03A_EIC_EXTINT3)
#define PORT_PD03A_EIC_EXTINT3                     (_UINT32_(1) << 3)
#define PIN_PD03A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PD03 External Interrupt Line */

#define PIN_PA04A_EIC_EXTINT4                      _UINT32_(4) 
#define MUX_PA04A_EIC_EXTINT4                      _UINT32_(0) 
#define PINMUX_PA04A_EIC_EXTINT4                   ((PIN_PA04A_EIC_EXTINT4 << 16) | MUX_PA04A_EIC_EXTINT4)
#define PORT_PA04A_EIC_EXTINT4                     (_UINT32_(1) << 4)
#define PIN_PA04A_EIC_EXTINT_NUM                   _UINT32_(4)  /* EIC signal: PIN_PA04 External Interrupt Line */

#define PIN_PA05A_EIC_EXTINT4                      _UINT32_(5) 
#define MUX_PA05A_EIC_EXTINT4                      _UINT32_(0) 
#define PINMUX_PA05A_EIC_EXTINT4                   ((PIN_PA05A_EIC_EXTINT4 << 16) | MUX_PA05A_EIC_EXTINT4)
#define PORT_PA05A_EIC_EXTINT4                     (_UINT32_(1) << 5)
#define PIN_PA05A_EIC_EXTINT_NUM                   _UINT32_(4)  /* EIC signal: PIN_PA05 External Interrupt Line */

#define PIN_PA20A_EIC_EXTINT4                      _UINT32_(20)
#define MUX_PA20A_EIC_EXTINT4                      _UINT32_(0) 
#define PINMUX_PA20A_EIC_EXTINT4                   ((PIN_PA20A_EIC_EXTINT4 << 16) | MUX_PA20A_EIC_EXTINT4)
#define PORT_PA20A_EIC_EXTINT4                     (_UINT32_(1) << 20)
#define PIN_PA20A_EIC_EXTINT_NUM                   _UINT32_(4)  /* EIC signal: PIN_PA20 External Interrupt Line */

#define PIN_PB04A_EIC_EXTINT4                      _UINT32_(36)
#define MUX_PB04A_EIC_EXTINT4                      _UINT32_(0) 
#define PINMUX_PB04A_EIC_EXTINT4                   ((PIN_PB04A_EIC_EXTINT4 << 16) | MUX_PB04A_EIC_EXTINT4)
#define PORT_PB04A_EIC_EXTINT4                     (_UINT32_(1) << 4)
#define PIN_PB04A_EIC_EXTINT_NUM                   _UINT32_(4)  /* EIC signal: PIN_PB04 External Interrupt Line */

#define PIN_PC04A_EIC_EXTINT4                      _UINT32_(68)
#define MUX_PC04A_EIC_EXTINT4                      _UINT32_(0) 
#define PINMUX_PC04A_EIC_EXTINT4                   ((PIN_PC04A_EIC_EXTINT4 << 16) | MUX_PC04A_EIC_EXTINT4)
#define PORT_PC04A_EIC_EXTINT4                     (_UINT32_(1) << 4)
#define PIN_PC04A_EIC_EXTINT_NUM                   _UINT32_(4)  /* EIC signal: PIN_PC04 External Interrupt Line */

#define PIN_PD04A_EIC_EXTINT4                      _UINT32_(100)
#define MUX_PD04A_EIC_EXTINT4                      _UINT32_(0) 
#define PINMUX_PD04A_EIC_EXTINT4                   ((PIN_PD04A_EIC_EXTINT4 << 16) | MUX_PD04A_EIC_EXTINT4)
#define PORT_PD04A_EIC_EXTINT4                     (_UINT32_(1) << 4)
#define PIN_PD04A_EIC_EXTINT_NUM                   _UINT32_(4)  /* EIC signal: PIN_PD04 External Interrupt Line */

#define PIN_PB05A_EIC_EXTINT5                      _UINT32_(37)
#define MUX_PB05A_EIC_EXTINT5                      _UINT32_(0) 
#define PINMUX_PB05A_EIC_EXTINT5                   ((PIN_PB05A_EIC_EXTINT5 << 16) | MUX_PB05A_EIC_EXTINT5)
#define PORT_PB05A_EIC_EXTINT5                     (_UINT32_(1) << 5)
#define PIN_PB05A_EIC_EXTINT_NUM                   _UINT32_(5)  /* EIC signal: PIN_PB05 External Interrupt Line */

#define PIN_PC05A_EIC_EXTINT5                      _UINT32_(69)
#define MUX_PC05A_EIC_EXTINT5                      _UINT32_(0) 
#define PINMUX_PC05A_EIC_EXTINT5                   ((PIN_PC05A_EIC_EXTINT5 << 16) | MUX_PC05A_EIC_EXTINT5)
#define PORT_PC05A_EIC_EXTINT5                     (_UINT32_(1) << 5)
#define PIN_PC05A_EIC_EXTINT_NUM                   _UINT32_(5)  /* EIC signal: PIN_PC05 External Interrupt Line */

#define PIN_PD05A_EIC_EXTINT5                      _UINT32_(101)
#define MUX_PD05A_EIC_EXTINT5                      _UINT32_(0) 
#define PINMUX_PD05A_EIC_EXTINT5                   ((PIN_PD05A_EIC_EXTINT5 << 16) | MUX_PD05A_EIC_EXTINT5)
#define PORT_PD05A_EIC_EXTINT5                     (_UINT32_(1) << 5)
#define PIN_PD05A_EIC_EXTINT_NUM                   _UINT32_(5)  /* EIC signal: PIN_PD05 External Interrupt Line */

#define PIN_PA06A_EIC_EXTINT6                      _UINT32_(6) 
#define MUX_PA06A_EIC_EXTINT6                      _UINT32_(0) 
#define PINMUX_PA06A_EIC_EXTINT6                   ((PIN_PA06A_EIC_EXTINT6 << 16) | MUX_PA06A_EIC_EXTINT6)
#define PORT_PA06A_EIC_EXTINT6                     (_UINT32_(1) << 6)
#define PIN_PA06A_EIC_EXTINT_NUM                   _UINT32_(6)  /* EIC signal: PIN_PA06 External Interrupt Line */

#define PIN_PB06A_EIC_EXTINT6                      _UINT32_(38)
#define MUX_PB06A_EIC_EXTINT6                      _UINT32_(0) 
#define PINMUX_PB06A_EIC_EXTINT6                   ((PIN_PB06A_EIC_EXTINT6 << 16) | MUX_PB06A_EIC_EXTINT6)
#define PORT_PB06A_EIC_EXTINT6                     (_UINT32_(1) << 6)
#define PIN_PB06A_EIC_EXTINT_NUM                   _UINT32_(6)  /* EIC signal: PIN_PB06 External Interrupt Line */

#define PIN_PC06A_EIC_EXTINT6                      _UINT32_(70)
#define MUX_PC06A_EIC_EXTINT6                      _UINT32_(0) 
#define PINMUX_PC06A_EIC_EXTINT6                   ((PIN_PC06A_EIC_EXTINT6 << 16) | MUX_PC06A_EIC_EXTINT6)
#define PORT_PC06A_EIC_EXTINT6                     (_UINT32_(1) << 6)
#define PIN_PC06A_EIC_EXTINT_NUM                   _UINT32_(6)  /* EIC signal: PIN_PC06 External Interrupt Line */

#define PIN_PD06A_EIC_EXTINT6                      _UINT32_(102)
#define MUX_PD06A_EIC_EXTINT6                      _UINT32_(0) 
#define PINMUX_PD06A_EIC_EXTINT6                   ((PIN_PD06A_EIC_EXTINT6 << 16) | MUX_PD06A_EIC_EXTINT6)
#define PORT_PD06A_EIC_EXTINT6                     (_UINT32_(1) << 6)
#define PIN_PD06A_EIC_EXTINT_NUM                   _UINT32_(6)  /* EIC signal: PIN_PD06 External Interrupt Line */

#define PIN_PA07A_EIC_EXTINT7                      _UINT32_(7) 
#define MUX_PA07A_EIC_EXTINT7                      _UINT32_(0) 
#define PINMUX_PA07A_EIC_EXTINT7                   ((PIN_PA07A_EIC_EXTINT7 << 16) | MUX_PA07A_EIC_EXTINT7)
#define PORT_PA07A_EIC_EXTINT7                     (_UINT32_(1) << 7)
#define PIN_PA07A_EIC_EXTINT_NUM                   _UINT32_(7)  /* EIC signal: PIN_PA07 External Interrupt Line */

#define PIN_PB07A_EIC_EXTINT7                      _UINT32_(39)
#define MUX_PB07A_EIC_EXTINT7                      _UINT32_(0) 
#define PINMUX_PB07A_EIC_EXTINT7                   ((PIN_PB07A_EIC_EXTINT7 << 16) | MUX_PB07A_EIC_EXTINT7)
#define PORT_PB07A_EIC_EXTINT7                     (_UINT32_(1) << 7)
#define PIN_PB07A_EIC_EXTINT_NUM                   _UINT32_(7)  /* EIC signal: PIN_PB07 External Interrupt Line */

#define PIN_PC07A_EIC_EXTINT7                      _UINT32_(71)
#define MUX_PC07A_EIC_EXTINT7                      _UINT32_(0) 
#define PINMUX_PC07A_EIC_EXTINT7                   ((PIN_PC07A_EIC_EXTINT7 << 16) | MUX_PC07A_EIC_EXTINT7)
#define PORT_PC07A_EIC_EXTINT7                     (_UINT32_(1) << 7)
#define PIN_PC07A_EIC_EXTINT_NUM                   _UINT32_(7)  /* EIC signal: PIN_PC07 External Interrupt Line */

#define PIN_PD07A_EIC_EXTINT7                      _UINT32_(103)
#define MUX_PD07A_EIC_EXTINT7                      _UINT32_(0) 
#define PINMUX_PD07A_EIC_EXTINT7                   ((PIN_PD07A_EIC_EXTINT7 << 16) | MUX_PD07A_EIC_EXTINT7)
#define PORT_PD07A_EIC_EXTINT7                     (_UINT32_(1) << 7)
#define PIN_PD07A_EIC_EXTINT_NUM                   _UINT32_(7)  /* EIC signal: PIN_PD07 External Interrupt Line */

#define PIN_PA08A_EIC_EXTINT8                      _UINT32_(8) 
#define MUX_PA08A_EIC_EXTINT8                      _UINT32_(0) 
#define PINMUX_PA08A_EIC_EXTINT8                   ((PIN_PA08A_EIC_EXTINT8 << 16) | MUX_PA08A_EIC_EXTINT8)
#define PORT_PA08A_EIC_EXTINT8                     (_UINT32_(1) << 8)
#define PIN_PA08A_EIC_EXTINT_NUM                   _UINT32_(8)  /* EIC signal: PIN_PA08 External Interrupt Line */

#define PIN_PB08A_EIC_EXTINT8                      _UINT32_(40)
#define MUX_PB08A_EIC_EXTINT8                      _UINT32_(0) 
#define PINMUX_PB08A_EIC_EXTINT8                   ((PIN_PB08A_EIC_EXTINT8 << 16) | MUX_PB08A_EIC_EXTINT8)
#define PORT_PB08A_EIC_EXTINT8                     (_UINT32_(1) << 8)
#define PIN_PB08A_EIC_EXTINT_NUM                   _UINT32_(8)  /* EIC signal: PIN_PB08 External Interrupt Line */

#define PIN_PC08A_EIC_EXTINT8                      _UINT32_(72)
#define MUX_PC08A_EIC_EXTINT8                      _UINT32_(0) 
#define PINMUX_PC08A_EIC_EXTINT8                   ((PIN_PC08A_EIC_EXTINT8 << 16) | MUX_PC08A_EIC_EXTINT8)
#define PORT_PC08A_EIC_EXTINT8                     (_UINT32_(1) << 8)
#define PIN_PC08A_EIC_EXTINT_NUM                   _UINT32_(8)  /* EIC signal: PIN_PC08 External Interrupt Line */

#define PIN_PD08A_EIC_EXTINT8                      _UINT32_(104)
#define MUX_PD08A_EIC_EXTINT8                      _UINT32_(0) 
#define PINMUX_PD08A_EIC_EXTINT8                   ((PIN_PD08A_EIC_EXTINT8 << 16) | MUX_PD08A_EIC_EXTINT8)
#define PORT_PD08A_EIC_EXTINT8                     (_UINT32_(1) << 8)
#define PIN_PD08A_EIC_EXTINT_NUM                   _UINT32_(8)  /* EIC signal: PIN_PD08 External Interrupt Line */

#define PIN_PA09A_EIC_EXTINT9                      _UINT32_(9) 
#define MUX_PA09A_EIC_EXTINT9                      _UINT32_(0) 
#define PINMUX_PA09A_EIC_EXTINT9                   ((PIN_PA09A_EIC_EXTINT9 << 16) | MUX_PA09A_EIC_EXTINT9)
#define PORT_PA09A_EIC_EXTINT9                     (_UINT32_(1) << 9)
#define PIN_PA09A_EIC_EXTINT_NUM                   _UINT32_(9)  /* EIC signal: PIN_PA09 External Interrupt Line */

#define PIN_PB09A_EIC_EXTINT9                      _UINT32_(41)
#define MUX_PB09A_EIC_EXTINT9                      _UINT32_(0) 
#define PINMUX_PB09A_EIC_EXTINT9                   ((PIN_PB09A_EIC_EXTINT9 << 16) | MUX_PB09A_EIC_EXTINT9)
#define PORT_PB09A_EIC_EXTINT9                     (_UINT32_(1) << 9)
#define PIN_PB09A_EIC_EXTINT_NUM                   _UINT32_(9)  /* EIC signal: PIN_PB09 External Interrupt Line */

#define PIN_PC09A_EIC_EXTINT9                      _UINT32_(73)
#define MUX_PC09A_EIC_EXTINT9                      _UINT32_(0) 
#define PINMUX_PC09A_EIC_EXTINT9                   ((PIN_PC09A_EIC_EXTINT9 << 16) | MUX_PC09A_EIC_EXTINT9)
#define PORT_PC09A_EIC_EXTINT9                     (_UINT32_(1) << 9)
#define PIN_PC09A_EIC_EXTINT_NUM                   _UINT32_(9)  /* EIC signal: PIN_PC09 External Interrupt Line */

#define PIN_PD09A_EIC_EXTINT9                      _UINT32_(105)
#define MUX_PD09A_EIC_EXTINT9                      _UINT32_(0) 
#define PINMUX_PD09A_EIC_EXTINT9                   ((PIN_PD09A_EIC_EXTINT9 << 16) | MUX_PD09A_EIC_EXTINT9)
#define PORT_PD09A_EIC_EXTINT9                     (_UINT32_(1) << 9)
#define PIN_PD09A_EIC_EXTINT_NUM                   _UINT32_(9)  /* EIC signal: PIN_PD09 External Interrupt Line */

#define PIN_PA10A_EIC_EXTINT10                     _UINT32_(10)
#define MUX_PA10A_EIC_EXTINT10                     _UINT32_(0) 
#define PINMUX_PA10A_EIC_EXTINT10                  ((PIN_PA10A_EIC_EXTINT10 << 16) | MUX_PA10A_EIC_EXTINT10)
#define PORT_PA10A_EIC_EXTINT10                    (_UINT32_(1) << 10)
#define PIN_PA10A_EIC_EXTINT_NUM                   _UINT32_(10) /* EIC signal: PIN_PA10 External Interrupt Line */

#define PIN_PB10A_EIC_EXTINT10                     _UINT32_(42)
#define MUX_PB10A_EIC_EXTINT10                     _UINT32_(0) 
#define PINMUX_PB10A_EIC_EXTINT10                  ((PIN_PB10A_EIC_EXTINT10 << 16) | MUX_PB10A_EIC_EXTINT10)
#define PORT_PB10A_EIC_EXTINT10                    (_UINT32_(1) << 10)
#define PIN_PB10A_EIC_EXTINT_NUM                   _UINT32_(10) /* EIC signal: PIN_PB10 External Interrupt Line */

#define PIN_PC10A_EIC_EXTINT10                     _UINT32_(74)
#define MUX_PC10A_EIC_EXTINT10                     _UINT32_(0) 
#define PINMUX_PC10A_EIC_EXTINT10                  ((PIN_PC10A_EIC_EXTINT10 << 16) | MUX_PC10A_EIC_EXTINT10)
#define PORT_PC10A_EIC_EXTINT10                    (_UINT32_(1) << 10)
#define PIN_PC10A_EIC_EXTINT_NUM                   _UINT32_(10) /* EIC signal: PIN_PC10 External Interrupt Line */

#define PIN_PD10A_EIC_EXTINT10                     _UINT32_(106)
#define MUX_PD10A_EIC_EXTINT10                     _UINT32_(0) 
#define PINMUX_PD10A_EIC_EXTINT10                  ((PIN_PD10A_EIC_EXTINT10 << 16) | MUX_PD10A_EIC_EXTINT10)
#define PORT_PD10A_EIC_EXTINT10                    (_UINT32_(1) << 10)
#define PIN_PD10A_EIC_EXTINT_NUM                   _UINT32_(10) /* EIC signal: PIN_PD10 External Interrupt Line */

#define PIN_PA11A_EIC_EXTINT11                     _UINT32_(11)
#define MUX_PA11A_EIC_EXTINT11                     _UINT32_(0) 
#define PINMUX_PA11A_EIC_EXTINT11                  ((PIN_PA11A_EIC_EXTINT11 << 16) | MUX_PA11A_EIC_EXTINT11)
#define PORT_PA11A_EIC_EXTINT11                    (_UINT32_(1) << 11)
#define PIN_PA11A_EIC_EXTINT_NUM                   _UINT32_(11) /* EIC signal: PIN_PA11 External Interrupt Line */

#define PIN_PB11A_EIC_EXTINT11                     _UINT32_(43)
#define MUX_PB11A_EIC_EXTINT11                     _UINT32_(0) 
#define PINMUX_PB11A_EIC_EXTINT11                  ((PIN_PB11A_EIC_EXTINT11 << 16) | MUX_PB11A_EIC_EXTINT11)
#define PORT_PB11A_EIC_EXTINT11                    (_UINT32_(1) << 11)
#define PIN_PB11A_EIC_EXTINT_NUM                   _UINT32_(11) /* EIC signal: PIN_PB11 External Interrupt Line */

#define PIN_PC11A_EIC_EXTINT11                     _UINT32_(75)
#define MUX_PC11A_EIC_EXTINT11                     _UINT32_(0) 
#define PINMUX_PC11A_EIC_EXTINT11                  ((PIN_PC11A_EIC_EXTINT11 << 16) | MUX_PC11A_EIC_EXTINT11)
#define PORT_PC11A_EIC_EXTINT11                    (_UINT32_(1) << 11)
#define PIN_PC11A_EIC_EXTINT_NUM                   _UINT32_(11) /* EIC signal: PIN_PC11 External Interrupt Line */

#define PIN_PD11A_EIC_EXTINT11                     _UINT32_(107)
#define MUX_PD11A_EIC_EXTINT11                     _UINT32_(0) 
#define PINMUX_PD11A_EIC_EXTINT11                  ((PIN_PD11A_EIC_EXTINT11 << 16) | MUX_PD11A_EIC_EXTINT11)
#define PORT_PD11A_EIC_EXTINT11                    (_UINT32_(1) << 11)
#define PIN_PD11A_EIC_EXTINT_NUM                   _UINT32_(11) /* EIC signal: PIN_PD11 External Interrupt Line */

#define PIN_PA12A_EIC_EXTINT12                     _UINT32_(12)
#define MUX_PA12A_EIC_EXTINT12                     _UINT32_(0) 
#define PINMUX_PA12A_EIC_EXTINT12                  ((PIN_PA12A_EIC_EXTINT12 << 16) | MUX_PA12A_EIC_EXTINT12)
#define PORT_PA12A_EIC_EXTINT12                    (_UINT32_(1) << 12)
#define PIN_PA12A_EIC_EXTINT_NUM                   _UINT32_(12) /* EIC signal: PIN_PA12 External Interrupt Line */

#define PIN_PB12A_EIC_EXTINT12                     _UINT32_(44)
#define MUX_PB12A_EIC_EXTINT12                     _UINT32_(0) 
#define PINMUX_PB12A_EIC_EXTINT12                  ((PIN_PB12A_EIC_EXTINT12 << 16) | MUX_PB12A_EIC_EXTINT12)
#define PORT_PB12A_EIC_EXTINT12                    (_UINT32_(1) << 12)
#define PIN_PB12A_EIC_EXTINT_NUM                   _UINT32_(12) /* EIC signal: PIN_PB12 External Interrupt Line */

#define PIN_PC12A_EIC_EXTINT12                     _UINT32_(76)
#define MUX_PC12A_EIC_EXTINT12                     _UINT32_(0) 
#define PINMUX_PC12A_EIC_EXTINT12                  ((PIN_PC12A_EIC_EXTINT12 << 16) | MUX_PC12A_EIC_EXTINT12)
#define PORT_PC12A_EIC_EXTINT12                    (_UINT32_(1) << 12)
#define PIN_PC12A_EIC_EXTINT_NUM                   _UINT32_(12) /* EIC signal: PIN_PC12 External Interrupt Line */

#define PIN_PD12A_EIC_EXTINT12                     _UINT32_(108)
#define MUX_PD12A_EIC_EXTINT12                     _UINT32_(0) 
#define PINMUX_PD12A_EIC_EXTINT12                  ((PIN_PD12A_EIC_EXTINT12 << 16) | MUX_PD12A_EIC_EXTINT12)
#define PORT_PD12A_EIC_EXTINT12                    (_UINT32_(1) << 12)
#define PIN_PD12A_EIC_EXTINT_NUM                   _UINT32_(12) /* EIC signal: PIN_PD12 External Interrupt Line */

#define PIN_PA13A_EIC_EXTINT13                     _UINT32_(13)
#define MUX_PA13A_EIC_EXTINT13                     _UINT32_(0) 
#define PINMUX_PA13A_EIC_EXTINT13                  ((PIN_PA13A_EIC_EXTINT13 << 16) | MUX_PA13A_EIC_EXTINT13)
#define PORT_PA13A_EIC_EXTINT13                    (_UINT32_(1) << 13)
#define PIN_PA13A_EIC_EXTINT_NUM                   _UINT32_(13) /* EIC signal: PIN_PA13 External Interrupt Line */

#define PIN_PB13A_EIC_EXTINT13                     _UINT32_(45)
#define MUX_PB13A_EIC_EXTINT13                     _UINT32_(0) 
#define PINMUX_PB13A_EIC_EXTINT13                  ((PIN_PB13A_EIC_EXTINT13 << 16) | MUX_PB13A_EIC_EXTINT13)
#define PORT_PB13A_EIC_EXTINT13                    (_UINT32_(1) << 13)
#define PIN_PB13A_EIC_EXTINT_NUM                   _UINT32_(13) /* EIC signal: PIN_PB13 External Interrupt Line */

#define PIN_PC13A_EIC_EXTINT13                     _UINT32_(77)
#define MUX_PC13A_EIC_EXTINT13                     _UINT32_(0) 
#define PINMUX_PC13A_EIC_EXTINT13                  ((PIN_PC13A_EIC_EXTINT13 << 16) | MUX_PC13A_EIC_EXTINT13)
#define PORT_PC13A_EIC_EXTINT13                    (_UINT32_(1) << 13)
#define PIN_PC13A_EIC_EXTINT_NUM                   _UINT32_(13) /* EIC signal: PIN_PC13 External Interrupt Line */

#define PIN_PA14A_EIC_EXTINT14                     _UINT32_(14)
#define MUX_PA14A_EIC_EXTINT14                     _UINT32_(0) 
#define PINMUX_PA14A_EIC_EXTINT14                  ((PIN_PA14A_EIC_EXTINT14 << 16) | MUX_PA14A_EIC_EXTINT14)
#define PORT_PA14A_EIC_EXTINT14                    (_UINT32_(1) << 14)
#define PIN_PA14A_EIC_EXTINT_NUM                   _UINT32_(14) /* EIC signal: PIN_PA14 External Interrupt Line */

#define PIN_PB14A_EIC_EXTINT14                     _UINT32_(46)
#define MUX_PB14A_EIC_EXTINT14                     _UINT32_(0) 
#define PINMUX_PB14A_EIC_EXTINT14                  ((PIN_PB14A_EIC_EXTINT14 << 16) | MUX_PB14A_EIC_EXTINT14)
#define PORT_PB14A_EIC_EXTINT14                    (_UINT32_(1) << 14)
#define PIN_PB14A_EIC_EXTINT_NUM                   _UINT32_(14) /* EIC signal: PIN_PB14 External Interrupt Line */

#define PIN_PC14A_EIC_EXTINT14                     _UINT32_(78)
#define MUX_PC14A_EIC_EXTINT14                     _UINT32_(0) 
#define PINMUX_PC14A_EIC_EXTINT14                  ((PIN_PC14A_EIC_EXTINT14 << 16) | MUX_PC14A_EIC_EXTINT14)
#define PORT_PC14A_EIC_EXTINT14                    (_UINT32_(1) << 14)
#define PIN_PC14A_EIC_EXTINT_NUM                   _UINT32_(14) /* EIC signal: PIN_PC14 External Interrupt Line */

#define PIN_PA15A_EIC_EXTINT15                     _UINT32_(15)
#define MUX_PA15A_EIC_EXTINT15                     _UINT32_(0) 
#define PINMUX_PA15A_EIC_EXTINT15                  ((PIN_PA15A_EIC_EXTINT15 << 16) | MUX_PA15A_EIC_EXTINT15)
#define PORT_PA15A_EIC_EXTINT15                    (_UINT32_(1) << 15)
#define PIN_PA15A_EIC_EXTINT_NUM                   _UINT32_(15) /* EIC signal: PIN_PA15 External Interrupt Line */

#define PIN_PB15A_EIC_EXTINT15                     _UINT32_(47)
#define MUX_PB15A_EIC_EXTINT15                     _UINT32_(0) 
#define PINMUX_PB15A_EIC_EXTINT15                  ((PIN_PB15A_EIC_EXTINT15 << 16) | MUX_PB15A_EIC_EXTINT15)
#define PORT_PB15A_EIC_EXTINT15                    (_UINT32_(1) << 15)
#define PIN_PB15A_EIC_EXTINT_NUM                   _UINT32_(15) /* EIC signal: PIN_PB15 External Interrupt Line */

#define PIN_PC15A_EIC_EXTINT15                     _UINT32_(79)
#define MUX_PC15A_EIC_EXTINT15                     _UINT32_(0) 
#define PINMUX_PC15A_EIC_EXTINT15                  ((PIN_PC15A_EIC_EXTINT15 << 16) | MUX_PC15A_EIC_EXTINT15)
#define PORT_PC15A_EIC_EXTINT15                    (_UINT32_(1) << 15)
#define PIN_PC15A_EIC_EXTINT_NUM                   _UINT32_(15) /* EIC signal: PIN_PC15 External Interrupt Line */

#define PIN_PC20A_EIC_NMI                          _UINT32_(84)
#define MUX_PC20A_EIC_NMI                          _UINT32_(0) 
#define PINMUX_PC20A_EIC_NMI                       ((PIN_PC20A_EIC_NMI << 16) | MUX_PC20A_EIC_NMI)
#define PORT_PC20A_EIC_NMI                         (_UINT32_(1) << 20)

/* ========== PORT definition for ETH peripheral ========== */
#define PIN_PD08K_ETH_COL                          _UINT32_(104)
#define MUX_PD08K_ETH_COL                          _UINT32_(10)
#define PINMUX_PD08K_ETH_COL                       ((PIN_PD08K_ETH_COL << 16) | MUX_PD08K_ETH_COL)
#define PORT_PD08K_ETH_COL                         (_UINT32_(1) << 8)

#define PIN_PD09K_ETH_CRS                          _UINT32_(105)
#define MUX_PD09K_ETH_CRS                          _UINT32_(10)
#define PINMUX_PD09K_ETH_CRS                       ((PIN_PD09K_ETH_CRS << 16) | MUX_PD09K_ETH_CRS)
#define PORT_PD09K_ETH_CRS                         (_UINT32_(1) << 9)

#define PIN_PD05L_ETH_GTX_CLK                      _UINT32_(101)
#define MUX_PD05L_ETH_GTX_CLK                      _UINT32_(11)
#define PINMUX_PD05L_ETH_GTX_CLK                   ((PIN_PD05L_ETH_GTX_CLK << 16) | MUX_PD05L_ETH_GTX_CLK)
#define PORT_PD05L_ETH_GTX_CLK                     (_UINT32_(1) << 5)

#define PIN_PA03K_ETH_MDC                          _UINT32_(3) 
#define MUX_PA03K_ETH_MDC                          _UINT32_(10)
#define PINMUX_PA03K_ETH_MDC                       ((PIN_PA03K_ETH_MDC << 16) | MUX_PA03K_ETH_MDC)
#define PORT_PA03K_ETH_MDC                         (_UINT32_(1) << 3)

#define PIN_PA04K_ETH_MDIO                         _UINT32_(4) 
#define MUX_PA04K_ETH_MDIO                         _UINT32_(10)
#define PINMUX_PA04K_ETH_MDIO                      ((PIN_PA04K_ETH_MDIO << 16) | MUX_PA04K_ETH_MDIO)
#define PORT_PA04K_ETH_MDIO                        (_UINT32_(1) << 4)

#define PIN_PD12K_ETH_REF_CLK                      _UINT32_(108)
#define MUX_PD12K_ETH_REF_CLK                      _UINT32_(10)
#define PINMUX_PD12K_ETH_REF_CLK                   ((PIN_PD12K_ETH_REF_CLK << 16) | MUX_PD12K_ETH_REF_CLK)
#define PORT_PD12K_ETH_REF_CLK                     (_UINT32_(1) << 12)

#define PIN_PD11K_ETH_RXD0                         _UINT32_(107)
#define MUX_PD11K_ETH_RXD0                         _UINT32_(10)
#define PINMUX_PD11K_ETH_RXD0                      ((PIN_PD11K_ETH_RXD0 << 16) | MUX_PD11K_ETH_RXD0)
#define PORT_PD11K_ETH_RXD0                        (_UINT32_(1) << 11)

#define PIN_PD10K_ETH_RXD1                         _UINT32_(106)
#define MUX_PD10K_ETH_RXD1                         _UINT32_(10)
#define PINMUX_PD10K_ETH_RXD1                      ((PIN_PD10K_ETH_RXD1 << 16) | MUX_PD10K_ETH_RXD1)
#define PORT_PD10K_ETH_RXD1                        (_UINT32_(1) << 10)

#define PIN_PD07K_ETH_RXD2                         _UINT32_(103)
#define MUX_PD07K_ETH_RXD2                         _UINT32_(10)
#define PINMUX_PD07K_ETH_RXD2                      ((PIN_PD07K_ETH_RXD2 << 16) | MUX_PD07K_ETH_RXD2)
#define PORT_PD07K_ETH_RXD2                        (_UINT32_(1) << 7)

#define PIN_PD06K_ETH_RXD3                         _UINT32_(102)
#define MUX_PD06K_ETH_RXD3                         _UINT32_(10)
#define PINMUX_PD06K_ETH_RXD3                      ((PIN_PD06K_ETH_RXD3 << 16) | MUX_PD06K_ETH_RXD3)
#define PORT_PD06K_ETH_RXD3                        (_UINT32_(1) << 6)

#define PIN_PA05K_ETH_RXDV                         _UINT32_(5) 
#define MUX_PA05K_ETH_RXDV                         _UINT32_(10)
#define PINMUX_PA05K_ETH_RXDV                      ((PIN_PA05K_ETH_RXDV << 16) | MUX_PA05K_ETH_RXDV)
#define PORT_PA05K_ETH_RXDV                        (_UINT32_(1) << 5)

#define PIN_PA06K_ETH_RXER                         _UINT32_(6) 
#define MUX_PA06K_ETH_RXER                         _UINT32_(10)
#define PINMUX_PA06K_ETH_RXER                      ((PIN_PA06K_ETH_RXER << 16) | MUX_PA06K_ETH_RXER)
#define PORT_PA06K_ETH_RXER                        (_UINT32_(1) << 6)

#define PIN_PD12L_ETH_RX_CLK                       _UINT32_(108)
#define MUX_PD12L_ETH_RX_CLK                       _UINT32_(11)
#define PINMUX_PD12L_ETH_RX_CLK                    ((PIN_PD12L_ETH_RX_CLK << 16) | MUX_PD12L_ETH_RX_CLK)
#define PORT_PD12L_ETH_RX_CLK                      (_UINT32_(1) << 12)

#define PIN_PC05K_ETH_TSUCOMP                      _UINT32_(69)
#define MUX_PC05K_ETH_TSUCOMP                      _UINT32_(10)
#define PINMUX_PC05K_ETH_TSUCOMP                   ((PIN_PC05K_ETH_TSUCOMP << 16) | MUX_PC05K_ETH_TSUCOMP)
#define PORT_PC05K_ETH_TSUCOMP                     (_UINT32_(1) << 5)

#define PIN_PC17K_ETH_TSUCOMP                      _UINT32_(81)
#define MUX_PC17K_ETH_TSUCOMP                      _UINT32_(10)
#define PINMUX_PC17K_ETH_TSUCOMP                   ((PIN_PC17K_ETH_TSUCOMP << 16) | MUX_PC17K_ETH_TSUCOMP)
#define PORT_PC17K_ETH_TSUCOMP                     (_UINT32_(1) << 17)

#define PIN_PA01K_ETH_TXD0                         _UINT32_(1) 
#define MUX_PA01K_ETH_TXD0                         _UINT32_(10)
#define PINMUX_PA01K_ETH_TXD0                      ((PIN_PA01K_ETH_TXD0 << 16) | MUX_PA01K_ETH_TXD0)
#define PORT_PA01K_ETH_TXD0                        (_UINT32_(1) << 1)

#define PIN_PA00K_ETH_TXD1                         _UINT32_(0) 
#define MUX_PA00K_ETH_TXD1                         _UINT32_(10)
#define PINMUX_PA00K_ETH_TXD1                      ((PIN_PA00K_ETH_TXD1 << 16) | MUX_PA00K_ETH_TXD1)
#define PORT_PA00K_ETH_TXD1                        (_UINT32_(1) << 0)

#define PIN_PD04K_ETH_TXD2                         _UINT32_(100)
#define MUX_PD04K_ETH_TXD2                         _UINT32_(10)
#define PINMUX_PD04K_ETH_TXD2                      ((PIN_PD04K_ETH_TXD2 << 16) | MUX_PD04K_ETH_TXD2)
#define PORT_PD04K_ETH_TXD2                        (_UINT32_(1) << 4)

#define PIN_PD03K_ETH_TXD3                         _UINT32_(99)
#define MUX_PD03K_ETH_TXD3                         _UINT32_(10)
#define PINMUX_PD03K_ETH_TXD3                      ((PIN_PD03K_ETH_TXD3 << 16) | MUX_PD03K_ETH_TXD3)
#define PORT_PD03K_ETH_TXD3                        (_UINT32_(1) << 3)

#define PIN_PA02K_ETH_TXEN                         _UINT32_(2) 
#define MUX_PA02K_ETH_TXEN                         _UINT32_(10)
#define PINMUX_PA02K_ETH_TXEN                      ((PIN_PA02K_ETH_TXEN << 16) | MUX_PA02K_ETH_TXEN)
#define PORT_PA02K_ETH_TXEN                        (_UINT32_(1) << 2)

#define PIN_PD02K_ETH_TXER                         _UINT32_(98)
#define MUX_PD02K_ETH_TXER                         _UINT32_(10)
#define PINMUX_PD02K_ETH_TXER                      ((PIN_PD02K_ETH_TXER << 16) | MUX_PD02K_ETH_TXER)
#define PORT_PD02K_ETH_TXER                        (_UINT32_(1) << 2)

#define PIN_PD05K_ETH_TX_CLK                       _UINT32_(101)
#define MUX_PD05K_ETH_TX_CLK                       _UINT32_(10)
#define PINMUX_PD05K_ETH_TX_CLK                    ((PIN_PD05K_ETH_TX_CLK << 16) | MUX_PD05K_ETH_TX_CLK)
#define PORT_PD05K_ETH_TX_CLK                      (_UINT32_(1) << 5)

/* ========== PORT definition for GCLK peripheral ========== */
#define PIN_PC20M_GCLK_IO0                         _UINT32_(84)
#define MUX_PC20M_GCLK_IO0                         _UINT32_(12)
#define PINMUX_PC20M_GCLK_IO0                      ((PIN_PC20M_GCLK_IO0 << 16) | MUX_PC20M_GCLK_IO0)
#define PORT_PC20M_GCLK_IO0                        (_UINT32_(1) << 20)

#define PIN_PC19M_GCLK_IO1                         _UINT32_(83)
#define MUX_PC19M_GCLK_IO1                         _UINT32_(12)
#define PINMUX_PC19M_GCLK_IO1                      ((PIN_PC19M_GCLK_IO1 << 16) | MUX_PC19M_GCLK_IO1)
#define PORT_PC19M_GCLK_IO1                        (_UINT32_(1) << 19)

#define PIN_PD00M_GCLK_IO2                         _UINT32_(96)
#define MUX_PD00M_GCLK_IO2                         _UINT32_(12)
#define PINMUX_PD00M_GCLK_IO2                      ((PIN_PD00M_GCLK_IO2 << 16) | MUX_PD00M_GCLK_IO2)
#define PORT_PD00M_GCLK_IO2                        (_UINT32_(1) << 0)

#define PIN_PD01M_GCLK_IO3                         _UINT32_(97)
#define MUX_PD01M_GCLK_IO3                         _UINT32_(12)
#define PINMUX_PD01M_GCLK_IO3                      ((PIN_PD01M_GCLK_IO3 << 16) | MUX_PD01M_GCLK_IO3)
#define PORT_PD01M_GCLK_IO3                        (_UINT32_(1) << 1)

#define PIN_PC00M_GCLK_IO4                         _UINT32_(64)
#define MUX_PC00M_GCLK_IO4                         _UINT32_(12)
#define PINMUX_PC00M_GCLK_IO4                      ((PIN_PC00M_GCLK_IO4 << 16) | MUX_PC00M_GCLK_IO4)
#define PORT_PC00M_GCLK_IO4                        (_UINT32_(1) << 0)

#define PIN_PC01M_GCLK_IO5                         _UINT32_(65)
#define MUX_PC01M_GCLK_IO5                         _UINT32_(12)
#define PINMUX_PC01M_GCLK_IO5                      ((PIN_PC01M_GCLK_IO5 << 16) | MUX_PC01M_GCLK_IO5)
#define PORT_PC01M_GCLK_IO5                        (_UINT32_(1) << 1)

#define PIN_PC02M_GCLK_IO6                         _UINT32_(66)
#define MUX_PC02M_GCLK_IO6                         _UINT32_(12)
#define PINMUX_PC02M_GCLK_IO6                      ((PIN_PC02M_GCLK_IO6 << 16) | MUX_PC02M_GCLK_IO6)
#define PORT_PC02M_GCLK_IO6                        (_UINT32_(1) << 2)

#define PIN_PC03M_GCLK_IO7                         _UINT32_(67)
#define MUX_PC03M_GCLK_IO7                         _UINT32_(12)
#define PINMUX_PC03M_GCLK_IO7                      ((PIN_PC03M_GCLK_IO7 << 16) | MUX_PC03M_GCLK_IO7)
#define PORT_PC03M_GCLK_IO7                        (_UINT32_(1) << 3)

#define PIN_PC04J_GCLK_spi_ixs_mclk0               _UINT32_(68)
#define MUX_PC04J_GCLK_spi_ixs_mclk0               _UINT32_(9) 
#define PINMUX_PC04J_GCLK_spi_ixs_mclk0            ((PIN_PC04J_GCLK_spi_ixs_mclk0 << 16) | MUX_PC04J_GCLK_spi_ixs_mclk0)
#define PORT_PC04J_GCLK_spi_ixs_mclk0              (_UINT32_(1) << 4)

#define PIN_PD06J_GCLK_spi_ixs_mclk0               _UINT32_(102)
#define MUX_PD06J_GCLK_spi_ixs_mclk0               _UINT32_(9) 
#define PINMUX_PD06J_GCLK_spi_ixs_mclk0            ((PIN_PD06J_GCLK_spi_ixs_mclk0 << 16) | MUX_PD06J_GCLK_spi_ixs_mclk0)
#define PORT_PD06J_GCLK_spi_ixs_mclk0              (_UINT32_(1) << 6)

/* ========== PORT definition for MLB peripheral ========== */
#define PIN_PD07G_MLB_MLBC                         _UINT32_(103)
#define MUX_PD07G_MLB_MLBC                         _UINT32_(6) 
#define PINMUX_PD07G_MLB_MLBC                      ((PIN_PD07G_MLB_MLBC << 16) | MUX_PD07G_MLB_MLBC)
#define PORT_PD07G_MLB_MLBC                        (_UINT32_(1) << 7)

#define PIN_PD09G_MLB_MLBD                         _UINT32_(105)
#define MUX_PD09G_MLB_MLBD                         _UINT32_(6) 
#define PINMUX_PD09G_MLB_MLBD                      ((PIN_PD09G_MLB_MLBD << 16) | MUX_PD09G_MLB_MLBD)
#define PORT_PD09G_MLB_MLBD                        (_UINT32_(1) << 9)

#define PIN_PD08G_MLB_MLBS                         _UINT32_(104)
#define MUX_PD08G_MLB_MLBS                         _UINT32_(6) 
#define PINMUX_PD08G_MLB_MLBS                      ((PIN_PD08G_MLB_MLBS << 16) | MUX_PD08G_MLB_MLBS)
#define PORT_PD08G_MLB_MLBS                        (_UINT32_(1) << 8)

/* ========== PORT definition for PTC peripheral ========== */
#define PIN_PB17P_PTC_DRV0                         _UINT32_(49)
#define MUX_PB17P_PTC_DRV0                         _UINT32_(15)
#define PINMUX_PB17P_PTC_DRV0                      ((PIN_PB17P_PTC_DRV0 << 16) | MUX_PB17P_PTC_DRV0)
#define PORT_PB17P_PTC_DRV0                        (_UINT32_(1) << 17)

#define PIN_PB16P_PTC_DRV1                         _UINT32_(48)
#define MUX_PB16P_PTC_DRV1                         _UINT32_(15)
#define PINMUX_PB16P_PTC_DRV1                      ((PIN_PB16P_PTC_DRV1 << 16) | MUX_PB16P_PTC_DRV1)
#define PORT_PB16P_PTC_DRV1                        (_UINT32_(1) << 16)

#define PIN_PB15P_PTC_DRV2                         _UINT32_(47)
#define MUX_PB15P_PTC_DRV2                         _UINT32_(15)
#define PINMUX_PB15P_PTC_DRV2                      ((PIN_PB15P_PTC_DRV2 << 16) | MUX_PB15P_PTC_DRV2)
#define PORT_PB15P_PTC_DRV2                        (_UINT32_(1) << 15)

#define PIN_PB14P_PTC_DRV3                         _UINT32_(46)
#define MUX_PB14P_PTC_DRV3                         _UINT32_(15)
#define PINMUX_PB14P_PTC_DRV3                      ((PIN_PB14P_PTC_DRV3 << 16) | MUX_PB14P_PTC_DRV3)
#define PORT_PB14P_PTC_DRV3                        (_UINT32_(1) << 14)

#define PIN_PB13P_PTC_DRV4                         _UINT32_(45)
#define MUX_PB13P_PTC_DRV4                         _UINT32_(15)
#define PINMUX_PB13P_PTC_DRV4                      ((PIN_PB13P_PTC_DRV4 << 16) | MUX_PB13P_PTC_DRV4)
#define PORT_PB13P_PTC_DRV4                        (_UINT32_(1) << 13)

#define PIN_PB12P_PTC_DRV5                         _UINT32_(44)
#define MUX_PB12P_PTC_DRV5                         _UINT32_(15)
#define PINMUX_PB12P_PTC_DRV5                      ((PIN_PB12P_PTC_DRV5 << 16) | MUX_PB12P_PTC_DRV5)
#define PORT_PB12P_PTC_DRV5                        (_UINT32_(1) << 12)

#define PIN_PB11P_PTC_DRV6                         _UINT32_(43)
#define MUX_PB11P_PTC_DRV6                         _UINT32_(15)
#define PINMUX_PB11P_PTC_DRV6                      ((PIN_PB11P_PTC_DRV6 << 16) | MUX_PB11P_PTC_DRV6)
#define PORT_PB11P_PTC_DRV6                        (_UINT32_(1) << 11)

#define PIN_PB10P_PTC_DRV7                         _UINT32_(42)
#define MUX_PB10P_PTC_DRV7                         _UINT32_(15)
#define PINMUX_PB10P_PTC_DRV7                      ((PIN_PB10P_PTC_DRV7 << 16) | MUX_PB10P_PTC_DRV7)
#define PORT_PB10P_PTC_DRV7                        (_UINT32_(1) << 10)

#define PIN_PB09P_PTC_DRV8                         _UINT32_(41)
#define MUX_PB09P_PTC_DRV8                         _UINT32_(15)
#define PINMUX_PB09P_PTC_DRV8                      ((PIN_PB09P_PTC_DRV8 << 16) | MUX_PB09P_PTC_DRV8)
#define PORT_PB09P_PTC_DRV8                        (_UINT32_(1) << 9)

#define PIN_PB08P_PTC_DRV9                         _UINT32_(40)
#define MUX_PB08P_PTC_DRV9                         _UINT32_(15)
#define PINMUX_PB08P_PTC_DRV9                      ((PIN_PB08P_PTC_DRV9 << 16) | MUX_PB08P_PTC_DRV9)
#define PORT_PB08P_PTC_DRV9                        (_UINT32_(1) << 8)

#define PIN_PB07P_PTC_DRV10                        _UINT32_(39)
#define MUX_PB07P_PTC_DRV10                        _UINT32_(15)
#define PINMUX_PB07P_PTC_DRV10                     ((PIN_PB07P_PTC_DRV10 << 16) | MUX_PB07P_PTC_DRV10)
#define PORT_PB07P_PTC_DRV10                       (_UINT32_(1) << 7)

#define PIN_PB06P_PTC_DRV11                        _UINT32_(38)
#define MUX_PB06P_PTC_DRV11                        _UINT32_(15)
#define PINMUX_PB06P_PTC_DRV11                     ((PIN_PB06P_PTC_DRV11 << 16) | MUX_PB06P_PTC_DRV11)
#define PORT_PB06P_PTC_DRV11                       (_UINT32_(1) << 6)

#define PIN_PC02P_PTC_ECI0                         _UINT32_(66)
#define MUX_PC02P_PTC_ECI0                         _UINT32_(15)
#define PINMUX_PC02P_PTC_ECI0                      ((PIN_PC02P_PTC_ECI0 << 16) | MUX_PC02P_PTC_ECI0)
#define PORT_PC02P_PTC_ECI0                        (_UINT32_(1) << 2)

#define PIN_PC03P_PTC_ECI1                         _UINT32_(67)
#define MUX_PC03P_PTC_ECI1                         _UINT32_(15)
#define PINMUX_PC03P_PTC_ECI1                      ((PIN_PC03P_PTC_ECI1 << 16) | MUX_PC03P_PTC_ECI1)
#define PORT_PC03P_PTC_ECI1                        (_UINT32_(1) << 3)

/* ========== PORT definition for SDMMC0 peripheral ========== */
#define PIN_PC15I_SDMMC0_SDCD                      _UINT32_(79)
#define MUX_PC15I_SDMMC0_SDCD                      _UINT32_(8) 
#define PINMUX_PC15I_SDMMC0_SDCD                   ((PIN_PC15I_SDMMC0_SDCD << 16) | MUX_PC15I_SDMMC0_SDCD)
#define PORT_PC15I_SDMMC0_SDCD                     (_UINT32_(1) << 15)

#define PIN_PC08I_SDMMC0_SDCK                      _UINT32_(72)
#define MUX_PC08I_SDMMC0_SDCK                      _UINT32_(8) 
#define PINMUX_PC08I_SDMMC0_SDCK                   ((PIN_PC08I_SDMMC0_SDCK << 16) | MUX_PC08I_SDMMC0_SDCK)
#define PORT_PC08I_SDMMC0_SDCK                     (_UINT32_(1) << 8)

#define PIN_PC13I_SDMMC0_SDCMD                     _UINT32_(77)
#define MUX_PC13I_SDMMC0_SDCMD                     _UINT32_(8) 
#define PINMUX_PC13I_SDMMC0_SDCMD                  ((PIN_PC13I_SDMMC0_SDCMD << 16) | MUX_PC13I_SDMMC0_SDCMD)
#define PORT_PC13I_SDMMC0_SDCMD                    (_UINT32_(1) << 13)

#define PIN_PC09I_SDMMC0_SDDAT0                    _UINT32_(73)
#define MUX_PC09I_SDMMC0_SDDAT0                    _UINT32_(8) 
#define PINMUX_PC09I_SDMMC0_SDDAT0                 ((PIN_PC09I_SDMMC0_SDDAT0 << 16) | MUX_PC09I_SDMMC0_SDDAT0)
#define PORT_PC09I_SDMMC0_SDDAT0                   (_UINT32_(1) << 9)

#define PIN_PC10I_SDMMC0_SDDAT1                    _UINT32_(74)
#define MUX_PC10I_SDMMC0_SDDAT1                    _UINT32_(8) 
#define PINMUX_PC10I_SDMMC0_SDDAT1                 ((PIN_PC10I_SDMMC0_SDDAT1 << 16) | MUX_PC10I_SDMMC0_SDDAT1)
#define PORT_PC10I_SDMMC0_SDDAT1                   (_UINT32_(1) << 10)

#define PIN_PC11I_SDMMC0_SDDAT2                    _UINT32_(75)
#define MUX_PC11I_SDMMC0_SDDAT2                    _UINT32_(8) 
#define PINMUX_PC11I_SDMMC0_SDDAT2                 ((PIN_PC11I_SDMMC0_SDDAT2 << 16) | MUX_PC11I_SDMMC0_SDDAT2)
#define PORT_PC11I_SDMMC0_SDDAT2                   (_UINT32_(1) << 11)

#define PIN_PC12I_SDMMC0_SDDAT3                    _UINT32_(76)
#define MUX_PC12I_SDMMC0_SDDAT3                    _UINT32_(8) 
#define PINMUX_PC12I_SDMMC0_SDDAT3                 ((PIN_PC12I_SDMMC0_SDDAT3 << 16) | MUX_PC12I_SDMMC0_SDDAT3)
#define PORT_PC12I_SDMMC0_SDDAT3                   (_UINT32_(1) << 12)

#define PIN_PC14I_SDMMC0_SDWP                      _UINT32_(78)
#define MUX_PC14I_SDMMC0_SDWP                      _UINT32_(8) 
#define PINMUX_PC14I_SDMMC0_SDWP                   ((PIN_PC14I_SDMMC0_SDWP << 16) | MUX_PC14I_SDMMC0_SDWP)
#define PORT_PC14I_SDMMC0_SDWP                     (_UINT32_(1) << 14)

/* ========== PORT definition for SERCOM0 peripheral ========== */
#define PIN_PC00D_SERCOM0_PAD0                     _UINT32_(64)
#define MUX_PC00D_SERCOM0_PAD0                     _UINT32_(3) 
#define PINMUX_PC00D_SERCOM0_PAD0                  ((PIN_PC00D_SERCOM0_PAD0 << 16) | MUX_PC00D_SERCOM0_PAD0)
#define PORT_PC00D_SERCOM0_PAD0                    (_UINT32_(1) << 0)

#define PIN_PC01D_SERCOM0_PAD1                     _UINT32_(65)
#define MUX_PC01D_SERCOM0_PAD1                     _UINT32_(3) 
#define PINMUX_PC01D_SERCOM0_PAD1                  ((PIN_PC01D_SERCOM0_PAD1 << 16) | MUX_PC01D_SERCOM0_PAD1)
#define PORT_PC01D_SERCOM0_PAD1                    (_UINT32_(1) << 1)

#define PIN_PC02D_SERCOM0_PAD2                     _UINT32_(66)
#define MUX_PC02D_SERCOM0_PAD2                     _UINT32_(3) 
#define PINMUX_PC02D_SERCOM0_PAD2                  ((PIN_PC02D_SERCOM0_PAD2 << 16) | MUX_PC02D_SERCOM0_PAD2)
#define PORT_PC02D_SERCOM0_PAD2                    (_UINT32_(1) << 2)

#define PIN_PC03D_SERCOM0_PAD3                     _UINT32_(67)
#define MUX_PC03D_SERCOM0_PAD3                     _UINT32_(3) 
#define PINMUX_PC03D_SERCOM0_PAD3                  ((PIN_PC03D_SERCOM0_PAD3 << 16) | MUX_PC03D_SERCOM0_PAD3)
#define PORT_PC03D_SERCOM0_PAD3                    (_UINT32_(1) << 3)

/* ========== PORT definition for SERCOM1 peripheral ========== */
#define PIN_PC04D_SERCOM1_PAD0                     _UINT32_(68)
#define MUX_PC04D_SERCOM1_PAD0                     _UINT32_(3) 
#define PINMUX_PC04D_SERCOM1_PAD0                  ((PIN_PC04D_SERCOM1_PAD0 << 16) | MUX_PC04D_SERCOM1_PAD0)
#define PORT_PC04D_SERCOM1_PAD0                    (_UINT32_(1) << 4)

#define PIN_PC20D_SERCOM1_PAD0                     _UINT32_(84)
#define MUX_PC20D_SERCOM1_PAD0                     _UINT32_(3) 
#define PINMUX_PC20D_SERCOM1_PAD0                  ((PIN_PC20D_SERCOM1_PAD0 << 16) | MUX_PC20D_SERCOM1_PAD0)
#define PORT_PC20D_SERCOM1_PAD0                    (_UINT32_(1) << 20)

#define PIN_PC05D_SERCOM1_PAD1                     _UINT32_(69)
#define MUX_PC05D_SERCOM1_PAD1                     _UINT32_(3) 
#define PINMUX_PC05D_SERCOM1_PAD1                  ((PIN_PC05D_SERCOM1_PAD1 << 16) | MUX_PC05D_SERCOM1_PAD1)
#define PORT_PC05D_SERCOM1_PAD1                    (_UINT32_(1) << 5)

#define PIN_PC19D_SERCOM1_PAD1                     _UINT32_(83)
#define MUX_PC19D_SERCOM1_PAD1                     _UINT32_(3) 
#define PINMUX_PC19D_SERCOM1_PAD1                  ((PIN_PC19D_SERCOM1_PAD1 << 16) | MUX_PC19D_SERCOM1_PAD1)
#define PORT_PC19D_SERCOM1_PAD1                    (_UINT32_(1) << 19)

#define PIN_PC06D_SERCOM1_PAD2                     _UINT32_(70)
#define MUX_PC06D_SERCOM1_PAD2                     _UINT32_(3) 
#define PINMUX_PC06D_SERCOM1_PAD2                  ((PIN_PC06D_SERCOM1_PAD2 << 16) | MUX_PC06D_SERCOM1_PAD2)
#define PORT_PC06D_SERCOM1_PAD2                    (_UINT32_(1) << 6)

#define PIN_PC18D_SERCOM1_PAD2                     _UINT32_(82)
#define MUX_PC18D_SERCOM1_PAD2                     _UINT32_(3) 
#define PINMUX_PC18D_SERCOM1_PAD2                  ((PIN_PC18D_SERCOM1_PAD2 << 16) | MUX_PC18D_SERCOM1_PAD2)
#define PORT_PC18D_SERCOM1_PAD2                    (_UINT32_(1) << 18)

#define PIN_PC07D_SERCOM1_PAD3                     _UINT32_(71)
#define MUX_PC07D_SERCOM1_PAD3                     _UINT32_(3) 
#define PINMUX_PC07D_SERCOM1_PAD3                  ((PIN_PC07D_SERCOM1_PAD3 << 16) | MUX_PC07D_SERCOM1_PAD3)
#define PORT_PC07D_SERCOM1_PAD3                    (_UINT32_(1) << 7)

#define PIN_PC17D_SERCOM1_PAD3                     _UINT32_(81)
#define MUX_PC17D_SERCOM1_PAD3                     _UINT32_(3) 
#define PINMUX_PC17D_SERCOM1_PAD3                  ((PIN_PC17D_SERCOM1_PAD3 << 16) | MUX_PC17D_SERCOM1_PAD3)
#define PORT_PC17D_SERCOM1_PAD3                    (_UINT32_(1) << 17)

/* ========== PORT definition for SERCOM2 peripheral ========== */
#define PIN_PC08D_SERCOM2_PAD0                     _UINT32_(72)
#define MUX_PC08D_SERCOM2_PAD0                     _UINT32_(3) 
#define PINMUX_PC08D_SERCOM2_PAD0                  ((PIN_PC08D_SERCOM2_PAD0 << 16) | MUX_PC08D_SERCOM2_PAD0)
#define PORT_PC08D_SERCOM2_PAD0                    (_UINT32_(1) << 8)

#define PIN_PD11D_SERCOM2_PAD0                     _UINT32_(107)
#define MUX_PD11D_SERCOM2_PAD0                     _UINT32_(3) 
#define PINMUX_PD11D_SERCOM2_PAD0                  ((PIN_PD11D_SERCOM2_PAD0 << 16) | MUX_PD11D_SERCOM2_PAD0)
#define PORT_PD11D_SERCOM2_PAD0                    (_UINT32_(1) << 11)

#define PIN_PC09D_SERCOM2_PAD1                     _UINT32_(73)
#define MUX_PC09D_SERCOM2_PAD1                     _UINT32_(3) 
#define PINMUX_PC09D_SERCOM2_PAD1                  ((PIN_PC09D_SERCOM2_PAD1 << 16) | MUX_PC09D_SERCOM2_PAD1)
#define PORT_PC09D_SERCOM2_PAD1                    (_UINT32_(1) << 9)

#define PIN_PD12D_SERCOM2_PAD1                     _UINT32_(108)
#define MUX_PD12D_SERCOM2_PAD1                     _UINT32_(3) 
#define PINMUX_PD12D_SERCOM2_PAD1                  ((PIN_PD12D_SERCOM2_PAD1 << 16) | MUX_PD12D_SERCOM2_PAD1)
#define PORT_PD12D_SERCOM2_PAD1                    (_UINT32_(1) << 12)

#define PIN_PC10D_SERCOM2_PAD2                     _UINT32_(74)
#define MUX_PC10D_SERCOM2_PAD2                     _UINT32_(3) 
#define PINMUX_PC10D_SERCOM2_PAD2                  ((PIN_PC10D_SERCOM2_PAD2 << 16) | MUX_PC10D_SERCOM2_PAD2)
#define PORT_PC10D_SERCOM2_PAD2                    (_UINT32_(1) << 10)

#define PIN_PA04D_SERCOM2_PAD2                     _UINT32_(4) 
#define MUX_PA04D_SERCOM2_PAD2                     _UINT32_(3) 
#define PINMUX_PA04D_SERCOM2_PAD2                  ((PIN_PA04D_SERCOM2_PAD2 << 16) | MUX_PA04D_SERCOM2_PAD2)
#define PORT_PA04D_SERCOM2_PAD2                    (_UINT32_(1) << 4)

#define PIN_PC11D_SERCOM2_PAD3                     _UINT32_(75)
#define MUX_PC11D_SERCOM2_PAD3                     _UINT32_(3) 
#define PINMUX_PC11D_SERCOM2_PAD3                  ((PIN_PC11D_SERCOM2_PAD3 << 16) | MUX_PC11D_SERCOM2_PAD3)
#define PORT_PC11D_SERCOM2_PAD3                    (_UINT32_(1) << 11)

#define PIN_PA03D_SERCOM2_PAD3                     _UINT32_(3) 
#define MUX_PA03D_SERCOM2_PAD3                     _UINT32_(3) 
#define PINMUX_PA03D_SERCOM2_PAD3                  ((PIN_PA03D_SERCOM2_PAD3 << 16) | MUX_PA03D_SERCOM2_PAD3)
#define PORT_PA03D_SERCOM2_PAD3                    (_UINT32_(1) << 3)

/* ========== PORT definition for SERCOM3 peripheral ========== */
#define PIN_PC12D_SERCOM3_PAD0                     _UINT32_(76)
#define MUX_PC12D_SERCOM3_PAD0                     _UINT32_(3) 
#define PINMUX_PC12D_SERCOM3_PAD0                  ((PIN_PC12D_SERCOM3_PAD0 << 16) | MUX_PC12D_SERCOM3_PAD0)
#define PORT_PC12D_SERCOM3_PAD0                    (_UINT32_(1) << 12)

#define PIN_PD03D_SERCOM3_PAD0                     _UINT32_(99)
#define MUX_PD03D_SERCOM3_PAD0                     _UINT32_(3) 
#define PINMUX_PD03D_SERCOM3_PAD0                  ((PIN_PD03D_SERCOM3_PAD0 << 16) | MUX_PD03D_SERCOM3_PAD0)
#define PORT_PD03D_SERCOM3_PAD0                    (_UINT32_(1) << 3)

#define PIN_PC13D_SERCOM3_PAD1                     _UINT32_(77)
#define MUX_PC13D_SERCOM3_PAD1                     _UINT32_(3) 
#define PINMUX_PC13D_SERCOM3_PAD1                  ((PIN_PC13D_SERCOM3_PAD1 << 16) | MUX_PC13D_SERCOM3_PAD1)
#define PORT_PC13D_SERCOM3_PAD1                    (_UINT32_(1) << 13)

#define PIN_PD04D_SERCOM3_PAD1                     _UINT32_(100)
#define MUX_PD04D_SERCOM3_PAD1                     _UINT32_(3) 
#define PINMUX_PD04D_SERCOM3_PAD1                  ((PIN_PD04D_SERCOM3_PAD1 << 16) | MUX_PD04D_SERCOM3_PAD1)
#define PORT_PD04D_SERCOM3_PAD1                    (_UINT32_(1) << 4)

#define PIN_PC14D_SERCOM3_PAD2                     _UINT32_(78)
#define MUX_PC14D_SERCOM3_PAD2                     _UINT32_(3) 
#define PINMUX_PC14D_SERCOM3_PAD2                  ((PIN_PC14D_SERCOM3_PAD2 << 16) | MUX_PC14D_SERCOM3_PAD2)
#define PORT_PC14D_SERCOM3_PAD2                    (_UINT32_(1) << 14)

#define PIN_PD05D_SERCOM3_PAD2                     _UINT32_(101)
#define MUX_PD05D_SERCOM3_PAD2                     _UINT32_(3) 
#define PINMUX_PD05D_SERCOM3_PAD2                  ((PIN_PD05D_SERCOM3_PAD2 << 16) | MUX_PD05D_SERCOM3_PAD2)
#define PORT_PD05D_SERCOM3_PAD2                    (_UINT32_(1) << 5)

#define PIN_PC15D_SERCOM3_PAD3                     _UINT32_(79)
#define MUX_PC15D_SERCOM3_PAD3                     _UINT32_(3) 
#define PINMUX_PC15D_SERCOM3_PAD3                  ((PIN_PC15D_SERCOM3_PAD3 << 16) | MUX_PC15D_SERCOM3_PAD3)
#define PORT_PC15D_SERCOM3_PAD3                    (_UINT32_(1) << 15)

#define PIN_PD06D_SERCOM3_PAD3                     _UINT32_(102)
#define MUX_PD06D_SERCOM3_PAD3                     _UINT32_(3) 
#define PINMUX_PD06D_SERCOM3_PAD3                  ((PIN_PD06D_SERCOM3_PAD3 << 16) | MUX_PD06D_SERCOM3_PAD3)
#define PORT_PD06D_SERCOM3_PAD3                    (_UINT32_(1) << 6)

/* ========== PORT definition for SPI_IXS0 peripheral ========== */
#define PIN_PC00J_SPI_IXS0_FSYNC                   _UINT32_(64)
#define MUX_PC00J_SPI_IXS0_FSYNC                   _UINT32_(9) 
#define PINMUX_PC00J_SPI_IXS0_FSYNC                ((PIN_PC00J_SPI_IXS0_FSYNC << 16) | MUX_PC00J_SPI_IXS0_FSYNC)
#define PORT_PC00J_SPI_IXS0_FSYNC                  (_UINT32_(1) << 0)

#define PIN_PD02J_SPI_IXS0_FSYNC                   _UINT32_(98)
#define MUX_PD02J_SPI_IXS0_FSYNC                   _UINT32_(9) 
#define PINMUX_PD02J_SPI_IXS0_FSYNC                ((PIN_PD02J_SPI_IXS0_FSYNC << 16) | MUX_PD02J_SPI_IXS0_FSYNC)
#define PORT_PD02J_SPI_IXS0_FSYNC                  (_UINT32_(1) << 2)

#define PIN_PC01J_SPI_IXS0_SCK                     _UINT32_(65)
#define MUX_PC01J_SPI_IXS0_SCK                     _UINT32_(9) 
#define PINMUX_PC01J_SPI_IXS0_SCK                  ((PIN_PC01J_SPI_IXS0_SCK << 16) | MUX_PC01J_SPI_IXS0_SCK)
#define PORT_PC01J_SPI_IXS0_SCK                    (_UINT32_(1) << 1)

#define PIN_PD04J_SPI_IXS0_SCK                     _UINT32_(100)
#define MUX_PD04J_SPI_IXS0_SCK                     _UINT32_(9) 
#define PINMUX_PD04J_SPI_IXS0_SCK                  ((PIN_PD04J_SPI_IXS0_SCK << 16) | MUX_PD04J_SPI_IXS0_SCK)
#define PORT_PD04J_SPI_IXS0_SCK                    (_UINT32_(1) << 4)

#define PIN_PC02J_SPI_IXS0_SDI                     _UINT32_(66)
#define MUX_PC02J_SPI_IXS0_SDI                     _UINT32_(9) 
#define PINMUX_PC02J_SPI_IXS0_SDI                  ((PIN_PC02J_SPI_IXS0_SDI << 16) | MUX_PC02J_SPI_IXS0_SDI)
#define PORT_PC02J_SPI_IXS0_SDI                    (_UINT32_(1) << 2)

#define PIN_PD03J_SPI_IXS0_SDI                     _UINT32_(99)
#define MUX_PD03J_SPI_IXS0_SDI                     _UINT32_(9) 
#define PINMUX_PD03J_SPI_IXS0_SDI                  ((PIN_PD03J_SPI_IXS0_SDI << 16) | MUX_PD03J_SPI_IXS0_SDI)
#define PORT_PD03J_SPI_IXS0_SDI                    (_UINT32_(1) << 3)

#define PIN_PC03J_SPI_IXS0_SDO                     _UINT32_(67)
#define MUX_PC03J_SPI_IXS0_SDO                     _UINT32_(9) 
#define PINMUX_PC03J_SPI_IXS0_SDO                  ((PIN_PC03J_SPI_IXS0_SDO << 16) | MUX_PC03J_SPI_IXS0_SDO)
#define PORT_PC03J_SPI_IXS0_SDO                    (_UINT32_(1) << 3)

#define PIN_PD05J_SPI_IXS0_SDO                     _UINT32_(101)
#define MUX_PD05J_SPI_IXS0_SDO                     _UINT32_(9) 
#define PINMUX_PD05J_SPI_IXS0_SDO                  ((PIN_PD05J_SPI_IXS0_SDO << 16) | MUX_PD05J_SPI_IXS0_SDO)
#define PORT_PD05J_SPI_IXS0_SDO                    (_UINT32_(1) << 5)

/* ========== PORT definition for SQI0 peripheral ========== */
#define PIN_PC08H_SQI0_CLK                         _UINT32_(72)
#define MUX_PC08H_SQI0_CLK                         _UINT32_(7) 
#define PINMUX_PC08H_SQI0_CLK                      ((PIN_PC08H_SQI0_CLK << 16) | MUX_PC08H_SQI0_CLK)
#define PORT_PC08H_SQI0_CLK                        (_UINT32_(1) << 8)

#define PIN_PC13H_SQI0_CS0                         _UINT32_(77)
#define MUX_PC13H_SQI0_CS0                         _UINT32_(7) 
#define PINMUX_PC13H_SQI0_CS0                      ((PIN_PC13H_SQI0_CS0 << 16) | MUX_PC13H_SQI0_CS0)
#define PORT_PC13H_SQI0_CS0                        (_UINT32_(1) << 13)

#define PIN_PC15H_SQI0_CS1                         _UINT32_(79)
#define MUX_PC15H_SQI0_CS1                         _UINT32_(7) 
#define PINMUX_PC15H_SQI0_CS1                      ((PIN_PC15H_SQI0_CS1 << 16) | MUX_PC15H_SQI0_CS1)
#define PORT_PC15H_SQI0_CS1                        (_UINT32_(1) << 15)

#define PIN_PC09H_SQI0_DATA0                       _UINT32_(73)
#define MUX_PC09H_SQI0_DATA0                       _UINT32_(7) 
#define PINMUX_PC09H_SQI0_DATA0                    ((PIN_PC09H_SQI0_DATA0 << 16) | MUX_PC09H_SQI0_DATA0)
#define PORT_PC09H_SQI0_DATA0                      (_UINT32_(1) << 9)

#define PIN_PC10H_SQI0_DATA1                       _UINT32_(74)
#define MUX_PC10H_SQI0_DATA1                       _UINT32_(7) 
#define PINMUX_PC10H_SQI0_DATA1                    ((PIN_PC10H_SQI0_DATA1 << 16) | MUX_PC10H_SQI0_DATA1)
#define PORT_PC10H_SQI0_DATA1                      (_UINT32_(1) << 10)

#define PIN_PC11H_SQI0_DATA2                       _UINT32_(75)
#define MUX_PC11H_SQI0_DATA2                       _UINT32_(7) 
#define PINMUX_PC11H_SQI0_DATA2                    ((PIN_PC11H_SQI0_DATA2 << 16) | MUX_PC11H_SQI0_DATA2)
#define PORT_PC11H_SQI0_DATA2                      (_UINT32_(1) << 11)

#define PIN_PC12H_SQI0_DATA3                       _UINT32_(76)
#define MUX_PC12H_SQI0_DATA3                       _UINT32_(7) 
#define PINMUX_PC12H_SQI0_DATA3                    ((PIN_PC12H_SQI0_DATA3 << 16) | MUX_PC12H_SQI0_DATA3)
#define PORT_PC12H_SQI0_DATA3                      (_UINT32_(1) << 12)

/* ========== PORT definition for TCC0 peripheral ========== */
#define PIN_PC00F_TCC0_WO0                         _UINT32_(64)
#define MUX_PC00F_TCC0_WO0                         _UINT32_(5) 
#define PINMUX_PC00F_TCC0_WO0                      ((PIN_PC00F_TCC0_WO0 << 16) | MUX_PC00F_TCC0_WO0)
#define PORT_PC00F_TCC0_WO0                        (_UINT32_(1) << 0)

#define PIN_PC01F_TCC0_WO1                         _UINT32_(65)
#define MUX_PC01F_TCC0_WO1                         _UINT32_(5) 
#define PINMUX_PC01F_TCC0_WO1                      ((PIN_PC01F_TCC0_WO1 << 16) | MUX_PC01F_TCC0_WO1)
#define PORT_PC01F_TCC0_WO1                        (_UINT32_(1) << 1)

#define PIN_PC02F_TCC0_WO2                         _UINT32_(66)
#define MUX_PC02F_TCC0_WO2                         _UINT32_(5) 
#define PINMUX_PC02F_TCC0_WO2                      ((PIN_PC02F_TCC0_WO2 << 16) | MUX_PC02F_TCC0_WO2)
#define PORT_PC02F_TCC0_WO2                        (_UINT32_(1) << 2)

#define PIN_PC03F_TCC0_WO3                         _UINT32_(67)
#define MUX_PC03F_TCC0_WO3                         _UINT32_(5) 
#define PINMUX_PC03F_TCC0_WO3                      ((PIN_PC03F_TCC0_WO3 << 16) | MUX_PC03F_TCC0_WO3)
#define PORT_PC03F_TCC0_WO3                        (_UINT32_(1) << 3)

#define PIN_PC04F_TCC0_WO4                         _UINT32_(68)
#define MUX_PC04F_TCC0_WO4                         _UINT32_(5) 
#define PINMUX_PC04F_TCC0_WO4                      ((PIN_PC04F_TCC0_WO4 << 16) | MUX_PC04F_TCC0_WO4)
#define PORT_PC04F_TCC0_WO4                        (_UINT32_(1) << 4)

#define PIN_PC05F_TCC0_WO5                         _UINT32_(69)
#define MUX_PC05F_TCC0_WO5                         _UINT32_(5) 
#define PINMUX_PC05F_TCC0_WO5                      ((PIN_PC05F_TCC0_WO5 << 16) | MUX_PC05F_TCC0_WO5)
#define PORT_PC05F_TCC0_WO5                        (_UINT32_(1) << 5)

#define PIN_PC06F_TCC0_WO6                         _UINT32_(70)
#define MUX_PC06F_TCC0_WO6                         _UINT32_(5) 
#define PINMUX_PC06F_TCC0_WO6                      ((PIN_PC06F_TCC0_WO6 << 16) | MUX_PC06F_TCC0_WO6)
#define PORT_PC06F_TCC0_WO6                        (_UINT32_(1) << 6)

#define PIN_PC07F_TCC0_WO7                         _UINT32_(71)
#define MUX_PC07F_TCC0_WO7                         _UINT32_(5) 
#define PINMUX_PC07F_TCC0_WO7                      ((PIN_PC07F_TCC0_WO7 << 16) | MUX_PC07F_TCC0_WO7)
#define PORT_PC07F_TCC0_WO7                        (_UINT32_(1) << 7)

/* ========== PORT definition for TCC1 peripheral ========== */
#define PIN_PB10F_TCC1_WO0                         _UINT32_(42)
#define MUX_PB10F_TCC1_WO0                         _UINT32_(5) 
#define PINMUX_PB10F_TCC1_WO0                      ((PIN_PB10F_TCC1_WO0 << 16) | MUX_PB10F_TCC1_WO0)
#define PORT_PB10F_TCC1_WO0                        (_UINT32_(1) << 10)

#define PIN_PB11F_TCC1_WO1                         _UINT32_(43)
#define MUX_PB11F_TCC1_WO1                         _UINT32_(5) 
#define PINMUX_PB11F_TCC1_WO1                      ((PIN_PB11F_TCC1_WO1 << 16) | MUX_PB11F_TCC1_WO1)
#define PORT_PB11F_TCC1_WO1                        (_UINT32_(1) << 11)

#define PIN_PB12F_TCC1_WO2                         _UINT32_(44)
#define MUX_PB12F_TCC1_WO2                         _UINT32_(5) 
#define PINMUX_PB12F_TCC1_WO2                      ((PIN_PB12F_TCC1_WO2 << 16) | MUX_PB12F_TCC1_WO2)
#define PORT_PB12F_TCC1_WO2                        (_UINT32_(1) << 12)

#define PIN_PB13F_TCC1_WO3                         _UINT32_(45)
#define MUX_PB13F_TCC1_WO3                         _UINT32_(5) 
#define PINMUX_PB13F_TCC1_WO3                      ((PIN_PB13F_TCC1_WO3 << 16) | MUX_PB13F_TCC1_WO3)
#define PORT_PB13F_TCC1_WO3                        (_UINT32_(1) << 13)

#define PIN_PB14F_TCC1_WO4                         _UINT32_(46)
#define MUX_PB14F_TCC1_WO4                         _UINT32_(5) 
#define PINMUX_PB14F_TCC1_WO4                      ((PIN_PB14F_TCC1_WO4 << 16) | MUX_PB14F_TCC1_WO4)
#define PORT_PB14F_TCC1_WO4                        (_UINT32_(1) << 14)

#define PIN_PB15F_TCC1_WO5                         _UINT32_(47)
#define MUX_PB15F_TCC1_WO5                         _UINT32_(5) 
#define PINMUX_PB15F_TCC1_WO5                      ((PIN_PB15F_TCC1_WO5 << 16) | MUX_PB15F_TCC1_WO5)
#define PORT_PB15F_TCC1_WO5                        (_UINT32_(1) << 15)

#define PIN_PB16F_TCC1_WO6                         _UINT32_(48)
#define MUX_PB16F_TCC1_WO6                         _UINT32_(5) 
#define PINMUX_PB16F_TCC1_WO6                      ((PIN_PB16F_TCC1_WO6 << 16) | MUX_PB16F_TCC1_WO6)
#define PORT_PB16F_TCC1_WO6                        (_UINT32_(1) << 16)

#define PIN_PB17F_TCC1_WO7                         _UINT32_(49)
#define MUX_PB17F_TCC1_WO7                         _UINT32_(5) 
#define PINMUX_PB17F_TCC1_WO7                      ((PIN_PB17F_TCC1_WO7 << 16) | MUX_PB17F_TCC1_WO7)
#define PORT_PB17F_TCC1_WO7                        (_UINT32_(1) << 17)

/* ========== PORT definition for TCC2 peripheral ========== */
#define PIN_PD10F_TCC2_WO0                         _UINT32_(106)
#define MUX_PD10F_TCC2_WO0                         _UINT32_(5) 
#define PINMUX_PD10F_TCC2_WO0                      ((PIN_PD10F_TCC2_WO0 << 16) | MUX_PD10F_TCC2_WO0)
#define PORT_PD10F_TCC2_WO0                        (_UINT32_(1) << 10)

#define PIN_PD11F_TCC2_WO1                         _UINT32_(107)
#define MUX_PD11F_TCC2_WO1                         _UINT32_(5) 
#define PINMUX_PD11F_TCC2_WO1                      ((PIN_PD11F_TCC2_WO1 << 16) | MUX_PD11F_TCC2_WO1)
#define PORT_PD11F_TCC2_WO1                        (_UINT32_(1) << 11)

#define PIN_PD12F_TCC2_WO2                         _UINT32_(108)
#define MUX_PD12F_TCC2_WO2                         _UINT32_(5) 
#define PINMUX_PD12F_TCC2_WO2                      ((PIN_PD12F_TCC2_WO2 << 16) | MUX_PD12F_TCC2_WO2)
#define PORT_PD12F_TCC2_WO2                        (_UINT32_(1) << 12)

#define PIN_PA04F_TCC2_WO3                         _UINT32_(4) 
#define MUX_PA04F_TCC2_WO3                         _UINT32_(5) 
#define PINMUX_PA04F_TCC2_WO3                      ((PIN_PA04F_TCC2_WO3 << 16) | MUX_PA04F_TCC2_WO3)
#define PORT_PA04F_TCC2_WO3                        (_UINT32_(1) << 4)

#define PIN_PA03F_TCC2_WO4                         _UINT32_(3) 
#define MUX_PA03F_TCC2_WO4                         _UINT32_(5) 
#define PINMUX_PA03F_TCC2_WO4                      ((PIN_PA03F_TCC2_WO4 << 16) | MUX_PA03F_TCC2_WO4)
#define PORT_PA03F_TCC2_WO4                        (_UINT32_(1) << 3)

#define PIN_PA02F_TCC2_WO5                         _UINT32_(2) 
#define MUX_PA02F_TCC2_WO5                         _UINT32_(5) 
#define PINMUX_PA02F_TCC2_WO5                      ((PIN_PA02F_TCC2_WO5 << 16) | MUX_PA02F_TCC2_WO5)
#define PORT_PA02F_TCC2_WO5                        (_UINT32_(1) << 2)

/* ========== PORT definition for TCC3 peripheral ========== */
#define PIN_PA05F_TCC3_WO0                         _UINT32_(5) 
#define MUX_PA05F_TCC3_WO0                         _UINT32_(5) 
#define PINMUX_PA05F_TCC3_WO0                      ((PIN_PA05F_TCC3_WO0 << 16) | MUX_PA05F_TCC3_WO0)
#define PORT_PA05F_TCC3_WO0                        (_UINT32_(1) << 5)

#define PIN_PA06F_TCC3_WO1                         _UINT32_(6) 
#define MUX_PA06F_TCC3_WO1                         _UINT32_(5) 
#define PINMUX_PA06F_TCC3_WO1                      ((PIN_PA06F_TCC3_WO1 << 16) | MUX_PA06F_TCC3_WO1)
#define PORT_PA06F_TCC3_WO1                        (_UINT32_(1) << 6)

/* ========== PORT definition for TCC4 peripheral ========== */
#define PIN_PC12F_TCC4_WO0                         _UINT32_(76)
#define MUX_PC12F_TCC4_WO0                         _UINT32_(5) 
#define PINMUX_PC12F_TCC4_WO0                      ((PIN_PC12F_TCC4_WO0 << 16) | MUX_PC12F_TCC4_WO0)
#define PORT_PC12F_TCC4_WO0                        (_UINT32_(1) << 12)

#define PIN_PC13F_TCC4_WO1                         _UINT32_(77)
#define MUX_PC13F_TCC4_WO1                         _UINT32_(5) 
#define PINMUX_PC13F_TCC4_WO1                      ((PIN_PC13F_TCC4_WO1 << 16) | MUX_PC13F_TCC4_WO1)
#define PORT_PC13F_TCC4_WO1                        (_UINT32_(1) << 13)

/* ========== PORT definition for TCC5 peripheral ========== */
#define PIN_PC08F_TCC5_WO0                         _UINT32_(72)
#define MUX_PC08F_TCC5_WO0                         _UINT32_(5) 
#define PINMUX_PC08F_TCC5_WO0                      ((PIN_PC08F_TCC5_WO0 << 16) | MUX_PC08F_TCC5_WO0)
#define PORT_PC08F_TCC5_WO0                        (_UINT32_(1) << 8)

#define PIN_PC09F_TCC5_WO1                         _UINT32_(73)
#define MUX_PC09F_TCC5_WO1                         _UINT32_(5) 
#define PINMUX_PC09F_TCC5_WO1                      ((PIN_PC09F_TCC5_WO1 << 16) | MUX_PC09F_TCC5_WO1)
#define PORT_PC09F_TCC5_WO1                        (_UINT32_(1) << 9)

/* ========== PORT definition for TCC6 peripheral ========== */
#define PIN_PC10F_TCC6_WO0                         _UINT32_(74)
#define MUX_PC10F_TCC6_WO0                         _UINT32_(5) 
#define PINMUX_PC10F_TCC6_WO0                      ((PIN_PC10F_TCC6_WO0 << 16) | MUX_PC10F_TCC6_WO0)
#define PORT_PC10F_TCC6_WO0                        (_UINT32_(1) << 10)

#define PIN_PC11F_TCC6_WO1                         _UINT32_(75)
#define MUX_PC11F_TCC6_WO1                         _UINT32_(5) 
#define PINMUX_PC11F_TCC6_WO1                      ((PIN_PC11F_TCC6_WO1 << 16) | MUX_PC11F_TCC6_WO1)
#define PORT_PC11F_TCC6_WO1                        (_UINT32_(1) << 11)

/* ========== PORT definition for TCC7 peripheral ========== */
#define PIN_PD08F_TCC7_WO0                         _UINT32_(104)
#define MUX_PD08F_TCC7_WO0                         _UINT32_(5) 
#define PINMUX_PD08F_TCC7_WO0                      ((PIN_PD08F_TCC7_WO0 << 16) | MUX_PD08F_TCC7_WO0)
#define PORT_PD08F_TCC7_WO0                        (_UINT32_(1) << 8)

#define PIN_PD07F_TCC7_WO1                         _UINT32_(103)
#define MUX_PD07F_TCC7_WO1                         _UINT32_(5) 
#define PINMUX_PD07F_TCC7_WO1                      ((PIN_PD07F_TCC7_WO1 << 16) | MUX_PD07F_TCC7_WO1)
#define PORT_PD07F_TCC7_WO1                        (_UINT32_(1) << 7)

/* ========== PORT definition for TCC8 peripheral ========== */
#define PIN_PC14F_TCC8_WO0                         _UINT32_(78)
#define MUX_PC14F_TCC8_WO0                         _UINT32_(5) 
#define PINMUX_PC14F_TCC8_WO0                      ((PIN_PC14F_TCC8_WO0 << 16) | MUX_PC14F_TCC8_WO0)
#define PORT_PC14F_TCC8_WO0                        (_UINT32_(1) << 14)

#define PIN_PC15F_TCC8_WO1                         _UINT32_(79)
#define MUX_PC15F_TCC8_WO1                         _UINT32_(5) 
#define PINMUX_PC15F_TCC8_WO1                      ((PIN_PC15F_TCC8_WO1 << 16) | MUX_PC15F_TCC8_WO1)
#define PORT_PC15F_TCC8_WO1                        (_UINT32_(1) << 15)

/* ========== PORT definition for TCC9 peripheral ========== */
#define PIN_PD04F_TCC9_WO0                         _UINT32_(100)
#define MUX_PD04F_TCC9_WO0                         _UINT32_(5) 
#define PINMUX_PD04F_TCC9_WO0                      ((PIN_PD04F_TCC9_WO0 << 16) | MUX_PD04F_TCC9_WO0)
#define PORT_PD04F_TCC9_WO0                        (_UINT32_(1) << 4)

#define PIN_PD05F_TCC9_WO1                         _UINT32_(101)
#define MUX_PD05F_TCC9_WO1                         _UINT32_(5) 
#define PINMUX_PD05F_TCC9_WO1                      ((PIN_PD05F_TCC9_WO1 << 16) | MUX_PD05F_TCC9_WO1)
#define PORT_PD05F_TCC9_WO1                        (_UINT32_(1) << 5)

#define PIN_PD06F_TCC9_WO2                         _UINT32_(102)
#define MUX_PD06F_TCC9_WO2                         _UINT32_(5) 
#define PINMUX_PD06F_TCC9_WO2                      ((PIN_PD06F_TCC9_WO2 << 16) | MUX_PD06F_TCC9_WO2)
#define PORT_PD06F_TCC9_WO2                        (_UINT32_(1) << 6)

#define PIN_PD03F_TCC9_WO3                         _UINT32_(99)
#define MUX_PD03F_TCC9_WO3                         _UINT32_(5) 
#define PINMUX_PD03F_TCC9_WO3                      ((PIN_PD03F_TCC9_WO3 << 16) | MUX_PD03F_TCC9_WO3)
#define PORT_PD03F_TCC9_WO3                        (_UINT32_(1) << 3)

#define PIN_PD02F_TCC9_WO4                         _UINT32_(98)
#define MUX_PD02F_TCC9_WO4                         _UINT32_(5) 
#define PINMUX_PD02F_TCC9_WO4                      ((PIN_PD02F_TCC9_WO4 << 16) | MUX_PD02F_TCC9_WO4)
#define PORT_PD02F_TCC9_WO4                        (_UINT32_(1) << 2)

#define PIN_PC20F_TCC9_WO5                         _UINT32_(84)
#define MUX_PC20F_TCC9_WO5                         _UINT32_(5) 
#define PINMUX_PC20F_TCC9_WO5                      ((PIN_PC20F_TCC9_WO5 << 16) | MUX_PC20F_TCC9_WO5)
#define PORT_PC20F_TCC9_WO5                        (_UINT32_(1) << 20)



#endif /* _PIC32CZ2051CA80100_GPIO_H_ */

