/*
 * Peripheral I/O description for SAMRH707F18A
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

/* file generated from device description version 2023-03-27T04:07:22Z */
#ifndef _SAMRH707F18A_GPIO_H_
#define _SAMRH707F18A_GPIO_H_

/* ========== Peripheral I/O pin numbers ========== */
#define PIN_PA0                     (    0)  /**< Pin Number for PA0 */
#define PIN_PA1                     (    1)  /**< Pin Number for PA1 */
#define PIN_PA2                     (    2)  /**< Pin Number for PA2 */
#define PIN_PA3                     (    3)  /**< Pin Number for PA3 */
#define PIN_PA4                     (    4)  /**< Pin Number for PA4 */
#define PIN_PA5                     (    5)  /**< Pin Number for PA5 */
#define PIN_PA6                     (    6)  /**< Pin Number for PA6 */
#define PIN_PA7                     (    7)  /**< Pin Number for PA7 */
#define PIN_PA8                     (    8)  /**< Pin Number for PA8 */
#define PIN_PA9                     (    9)  /**< Pin Number for PA9 */
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
#define PIN_PA21                    (   21)  /**< Pin Number for PA21 */
#define PIN_PA22                    (   22)  /**< Pin Number for PA22 */
#define PIN_PA23                    (   23)  /**< Pin Number for PA23 */
#define PIN_PA24                    (   24)  /**< Pin Number for PA24 */
#define PIN_PA25                    (   25)  /**< Pin Number for PA25 */
#define PIN_PA26                    (   26)  /**< Pin Number for PA26 */
#define PIN_PA27                    (   27)  /**< Pin Number for PA27 */
#define PIN_PA28                    (   28)  /**< Pin Number for PA28 */
#define PIN_PA29                    (   29)  /**< Pin Number for PA29 */
#define PIN_PA30                    (   30)  /**< Pin Number for PA30 */
#define PIN_PA31                    (   31)  /**< Pin Number for PA31 */
#define PIN_PB0                     (   32)  /**< Pin Number for PB0 */
#define PIN_PB1                     (   33)  /**< Pin Number for PB1 */
#define PIN_PB2                     (   34)  /**< Pin Number for PB2 */
#define PIN_PB3                     (   35)  /**< Pin Number for PB3 */
#define PIN_PB4                     (   36)  /**< Pin Number for PB4 */
#define PIN_PB5                     (   37)  /**< Pin Number for PB5 */
#define PIN_PB6                     (   38)  /**< Pin Number for PB6 */
#define PIN_PB7                     (   39)  /**< Pin Number for PB7 */
#define PIN_PB8                     (   40)  /**< Pin Number for PB8 */
#define PIN_PB9                     (   41)  /**< Pin Number for PB9 */
#define PIN_PB10                    (   42)  /**< Pin Number for PB10 */
#define PIN_PB11                    (   43)  /**< Pin Number for PB11 */
#define PIN_PB12                    (   44)  /**< Pin Number for PB12 */
#define PIN_PB13                    (   45)  /**< Pin Number for PB13 */
#define PIN_PB14                    (   46)  /**< Pin Number for PB14 */
#define PIN_PB15                    (   47)  /**< Pin Number for PB15 */
#define PIN_PB16                    (   48)  /**< Pin Number for PB16 */
#define PIN_PB17                    (   49)  /**< Pin Number for PB17 */
#define PIN_PB18                    (   50)  /**< Pin Number for PB18 */
#define PIN_PB19                    (   51)  /**< Pin Number for PB19 */
#define PIN_PB20                    (   52)  /**< Pin Number for PB20 */
#define PIN_PB21                    (   53)  /**< Pin Number for PB21 */
#define PIN_PB22                    (   54)  /**< Pin Number for PB22 */
#define PIN_PB23                    (   55)  /**< Pin Number for PB23 */
#define PIN_PB24                    (   56)  /**< Pin Number for PB24 */
#define PIN_PB25                    (   57)  /**< Pin Number for PB25 */
#define PIN_PB26                    (   58)  /**< Pin Number for PB26 */
#define PIN_PB27                    (   59)  /**< Pin Number for PB27 */
#define PIN_PB28                    (   60)  /**< Pin Number for PB28 */
#define PIN_PB29                    (   61)  /**< Pin Number for PB29 */
#define PIN_PB30                    (   62)  /**< Pin Number for PB30 */
#define PIN_PB31                    (   63)  /**< Pin Number for PB31 */
#define PIN_PC0                     (   64)  /**< Pin Number for PC0 */
#define PIN_PC1                     (   65)  /**< Pin Number for PC1 */
#define PIN_PC2                     (   66)  /**< Pin Number for PC2 */
#define PIN_PC3                     (   67)  /**< Pin Number for PC3 */
#define PIN_PC4                     (   68)  /**< Pin Number for PC4 */
#define PIN_PC5                     (   69)  /**< Pin Number for PC5 */
#define PIN_PC6                     (   70)  /**< Pin Number for PC6 */
#define PIN_PC7                     (   71)  /**< Pin Number for PC7 */
#define PIN_PC8                     (   72)  /**< Pin Number for PC8 */
#define PIN_PC9                     (   73)  /**< Pin Number for PC9 */
#define PIN_PC10                    (   74)  /**< Pin Number for PC10 */
#define PIN_PC11                    (   75)  /**< Pin Number for PC11 */
#define PIN_PC12                    (   76)  /**< Pin Number for PC12 */
#define PIN_PC13                    (   77)  /**< Pin Number for PC13 */
#define PIN_PC14                    (   78)  /**< Pin Number for PC14 */
#define PIN_PC15                    (   79)  /**< Pin Number for PC15 */
#define PIN_PC16                    (   80)  /**< Pin Number for PC16 */
#define PIN_PC17                    (   81)  /**< Pin Number for PC17 */
#define PIN_PC18                    (   82)  /**< Pin Number for PC18 */
#define PIN_PC19                    (   83)  /**< Pin Number for PC19 */
#define PIN_PC20                    (   84)  /**< Pin Number for PC20 */
#define PIN_PC21                    (   85)  /**< Pin Number for PC21 */
#define PIN_PC22                    (   86)  /**< Pin Number for PC22 */
#define PIN_PC23                    (   87)  /**< Pin Number for PC23 */
#define PIN_PC24                    (   88)  /**< Pin Number for PC24 */
#define PIN_PC25                    (   89)  /**< Pin Number for PC25 */
#define PIN_PC26                    (   90)  /**< Pin Number for PC26 */
#define PIN_PC27                    (   91)  /**< Pin Number for PC27 */
#define PIN_PC28                    (   92)  /**< Pin Number for PC28 */
#define PIN_PC29                    (   93)  /**< Pin Number for PC29 */
#define PIN_PC30                    (   94)  /**< Pin Number for PC30 */
#define PIN_PC31                    (   95)  /**< Pin Number for PC31 */
#define PIN_PD0                     (   96)  /**< Pin Number for PD0 */
#define PIN_PD1                     (   97)  /**< Pin Number for PD1 */
#define PIN_PD2                     (   98)  /**< Pin Number for PD2 */
#define PIN_PD3                     (   99)  /**< Pin Number for PD3 */
#define PIN_PD4                     (  100)  /**< Pin Number for PD4 */
#define PIN_PD5                     (  101)  /**< Pin Number for PD5 */
#define PIN_PD6                     (  102)  /**< Pin Number for PD6 */
#define PIN_PD7                     (  103)  /**< Pin Number for PD7 */
#define PIN_PD8                     (  104)  /**< Pin Number for PD8 */
#define PIN_PD9                     (  105)  /**< Pin Number for PD9 */
#define PIN_PD10                    (  106)  /**< Pin Number for PD10 */
#define PIN_PD11                    (  107)  /**< Pin Number for PD11 */
#define PIN_PD12                    (  108)  /**< Pin Number for PD12 */
#define PIN_PD13                    (  109)  /**< Pin Number for PD13 */
#define PIN_PD14                    (  110)  /**< Pin Number for PD14 */
#define PIN_PD15                    (  111)  /**< Pin Number for PD15 */
#define PIN_PD16                    (  112)  /**< Pin Number for PD16 */
#define PIN_PD17                    (  113)  /**< Pin Number for PD17 */
#define PIN_PD18                    (  114)  /**< Pin Number for PD18 */
#define PIN_PD19                    (  115)  /**< Pin Number for PD19 */
#define PIN_PD20                    (  116)  /**< Pin Number for PD20 */
#define PIN_PD21                    (  117)  /**< Pin Number for PD21 */
#define PIN_PD22                    (  118)  /**< Pin Number for PD22 */
#define PIN_PD23                    (  119)  /**< Pin Number for PD23 */
#define PIN_PD24                    (  120)  /**< Pin Number for PD24 */
#define PIN_PD25                    (  121)  /**< Pin Number for PD25 */
#define PIN_PD26                    (  122)  /**< Pin Number for PD26 */
#define PIN_PD27                    (  123)  /**< Pin Number for PD27 */
#define PIN_PD28                    (  124)  /**< Pin Number for PD28 */
#define PIN_PD29                    (  125)  /**< Pin Number for PD29 */
#define PIN_PD30                    (  126)  /**< Pin Number for PD30 */
#define PIN_PD31                    (  127)  /**< Pin Number for PD31 */

/* ========== Peripheral I/O masks ========== */
#define PIO_PA0                     (_UINT32_(1) << 0) /**< PIO mask for PA0 */
#define PIO_PA1                     (_UINT32_(1) << 1) /**< PIO mask for PA1 */
#define PIO_PA2                     (_UINT32_(1) << 2) /**< PIO mask for PA2 */
#define PIO_PA3                     (_UINT32_(1) << 3) /**< PIO mask for PA3 */
#define PIO_PA4                     (_UINT32_(1) << 4) /**< PIO mask for PA4 */
#define PIO_PA5                     (_UINT32_(1) << 5) /**< PIO mask for PA5 */
#define PIO_PA6                     (_UINT32_(1) << 6) /**< PIO mask for PA6 */
#define PIO_PA7                     (_UINT32_(1) << 7) /**< PIO mask for PA7 */
#define PIO_PA8                     (_UINT32_(1) << 8) /**< PIO mask for PA8 */
#define PIO_PA9                     (_UINT32_(1) << 9) /**< PIO mask for PA9 */
#define PIO_PA10                    (_UINT32_(1) << 10) /**< PIO mask for PA10 */
#define PIO_PA11                    (_UINT32_(1) << 11) /**< PIO mask for PA11 */
#define PIO_PA12                    (_UINT32_(1) << 12) /**< PIO mask for PA12 */
#define PIO_PA13                    (_UINT32_(1) << 13) /**< PIO mask for PA13 */
#define PIO_PA14                    (_UINT32_(1) << 14) /**< PIO mask for PA14 */
#define PIO_PA15                    (_UINT32_(1) << 15) /**< PIO mask for PA15 */
#define PIO_PA16                    (_UINT32_(1) << 16) /**< PIO mask for PA16 */
#define PIO_PA17                    (_UINT32_(1) << 17) /**< PIO mask for PA17 */
#define PIO_PA18                    (_UINT32_(1) << 18) /**< PIO mask for PA18 */
#define PIO_PA19                    (_UINT32_(1) << 19) /**< PIO mask for PA19 */
#define PIO_PA20                    (_UINT32_(1) << 20) /**< PIO mask for PA20 */
#define PIO_PA21                    (_UINT32_(1) << 21) /**< PIO mask for PA21 */
#define PIO_PA22                    (_UINT32_(1) << 22) /**< PIO mask for PA22 */
#define PIO_PA23                    (_UINT32_(1) << 23) /**< PIO mask for PA23 */
#define PIO_PA24                    (_UINT32_(1) << 24) /**< PIO mask for PA24 */
#define PIO_PA25                    (_UINT32_(1) << 25) /**< PIO mask for PA25 */
#define PIO_PA26                    (_UINT32_(1) << 26) /**< PIO mask for PA26 */
#define PIO_PA27                    (_UINT32_(1) << 27) /**< PIO mask for PA27 */
#define PIO_PA28                    (_UINT32_(1) << 28) /**< PIO mask for PA28 */
#define PIO_PA29                    (_UINT32_(1) << 29) /**< PIO mask for PA29 */
#define PIO_PA30                    (_UINT32_(1) << 30) /**< PIO mask for PA30 */
#define PIO_PA31                    (_UINT32_(1) << 31) /**< PIO mask for PA31 */
#define PIO_PB0                     (_UINT32_(1) << 0) /**< PIO mask for PB0 */
#define PIO_PB1                     (_UINT32_(1) << 1) /**< PIO mask for PB1 */
#define PIO_PB2                     (_UINT32_(1) << 2) /**< PIO mask for PB2 */
#define PIO_PB3                     (_UINT32_(1) << 3) /**< PIO mask for PB3 */
#define PIO_PB4                     (_UINT32_(1) << 4) /**< PIO mask for PB4 */
#define PIO_PB5                     (_UINT32_(1) << 5) /**< PIO mask for PB5 */
#define PIO_PB6                     (_UINT32_(1) << 6) /**< PIO mask for PB6 */
#define PIO_PB7                     (_UINT32_(1) << 7) /**< PIO mask for PB7 */
#define PIO_PB8                     (_UINT32_(1) << 8) /**< PIO mask for PB8 */
#define PIO_PB9                     (_UINT32_(1) << 9) /**< PIO mask for PB9 */
#define PIO_PB10                    (_UINT32_(1) << 10) /**< PIO mask for PB10 */
#define PIO_PB11                    (_UINT32_(1) << 11) /**< PIO mask for PB11 */
#define PIO_PB12                    (_UINT32_(1) << 12) /**< PIO mask for PB12 */
#define PIO_PB13                    (_UINT32_(1) << 13) /**< PIO mask for PB13 */
#define PIO_PB14                    (_UINT32_(1) << 14) /**< PIO mask for PB14 */
#define PIO_PB15                    (_UINT32_(1) << 15) /**< PIO mask for PB15 */
#define PIO_PB16                    (_UINT32_(1) << 16) /**< PIO mask for PB16 */
#define PIO_PB17                    (_UINT32_(1) << 17) /**< PIO mask for PB17 */
#define PIO_PB18                    (_UINT32_(1) << 18) /**< PIO mask for PB18 */
#define PIO_PB19                    (_UINT32_(1) << 19) /**< PIO mask for PB19 */
#define PIO_PB20                    (_UINT32_(1) << 20) /**< PIO mask for PB20 */
#define PIO_PB21                    (_UINT32_(1) << 21) /**< PIO mask for PB21 */
#define PIO_PB22                    (_UINT32_(1) << 22) /**< PIO mask for PB22 */
#define PIO_PB23                    (_UINT32_(1) << 23) /**< PIO mask for PB23 */
#define PIO_PB24                    (_UINT32_(1) << 24) /**< PIO mask for PB24 */
#define PIO_PB25                    (_UINT32_(1) << 25) /**< PIO mask for PB25 */
#define PIO_PB26                    (_UINT32_(1) << 26) /**< PIO mask for PB26 */
#define PIO_PB27                    (_UINT32_(1) << 27) /**< PIO mask for PB27 */
#define PIO_PB28                    (_UINT32_(1) << 28) /**< PIO mask for PB28 */
#define PIO_PB29                    (_UINT32_(1) << 29) /**< PIO mask for PB29 */
#define PIO_PB30                    (_UINT32_(1) << 30) /**< PIO mask for PB30 */
#define PIO_PB31                    (_UINT32_(1) << 31) /**< PIO mask for PB31 */
#define PIO_PC0                     (_UINT32_(1) << 0) /**< PIO mask for PC0 */
#define PIO_PC1                     (_UINT32_(1) << 1) /**< PIO mask for PC1 */
#define PIO_PC2                     (_UINT32_(1) << 2) /**< PIO mask for PC2 */
#define PIO_PC3                     (_UINT32_(1) << 3) /**< PIO mask for PC3 */
#define PIO_PC4                     (_UINT32_(1) << 4) /**< PIO mask for PC4 */
#define PIO_PC5                     (_UINT32_(1) << 5) /**< PIO mask for PC5 */
#define PIO_PC6                     (_UINT32_(1) << 6) /**< PIO mask for PC6 */
#define PIO_PC7                     (_UINT32_(1) << 7) /**< PIO mask for PC7 */
#define PIO_PC8                     (_UINT32_(1) << 8) /**< PIO mask for PC8 */
#define PIO_PC9                     (_UINT32_(1) << 9) /**< PIO mask for PC9 */
#define PIO_PC10                    (_UINT32_(1) << 10) /**< PIO mask for PC10 */
#define PIO_PC11                    (_UINT32_(1) << 11) /**< PIO mask for PC11 */
#define PIO_PC12                    (_UINT32_(1) << 12) /**< PIO mask for PC12 */
#define PIO_PC13                    (_UINT32_(1) << 13) /**< PIO mask for PC13 */
#define PIO_PC14                    (_UINT32_(1) << 14) /**< PIO mask for PC14 */
#define PIO_PC15                    (_UINT32_(1) << 15) /**< PIO mask for PC15 */
#define PIO_PC16                    (_UINT32_(1) << 16) /**< PIO mask for PC16 */
#define PIO_PC17                    (_UINT32_(1) << 17) /**< PIO mask for PC17 */
#define PIO_PC18                    (_UINT32_(1) << 18) /**< PIO mask for PC18 */
#define PIO_PC19                    (_UINT32_(1) << 19) /**< PIO mask for PC19 */
#define PIO_PC20                    (_UINT32_(1) << 20) /**< PIO mask for PC20 */
#define PIO_PC21                    (_UINT32_(1) << 21) /**< PIO mask for PC21 */
#define PIO_PC22                    (_UINT32_(1) << 22) /**< PIO mask for PC22 */
#define PIO_PC23                    (_UINT32_(1) << 23) /**< PIO mask for PC23 */
#define PIO_PC24                    (_UINT32_(1) << 24) /**< PIO mask for PC24 */
#define PIO_PC25                    (_UINT32_(1) << 25) /**< PIO mask for PC25 */
#define PIO_PC26                    (_UINT32_(1) << 26) /**< PIO mask for PC26 */
#define PIO_PC27                    (_UINT32_(1) << 27) /**< PIO mask for PC27 */
#define PIO_PC28                    (_UINT32_(1) << 28) /**< PIO mask for PC28 */
#define PIO_PC29                    (_UINT32_(1) << 29) /**< PIO mask for PC29 */
#define PIO_PC30                    (_UINT32_(1) << 30) /**< PIO mask for PC30 */
#define PIO_PC31                    (_UINT32_(1) << 31) /**< PIO mask for PC31 */
#define PIO_PD0                     (_UINT32_(1) << 0) /**< PIO mask for PD0 */
#define PIO_PD1                     (_UINT32_(1) << 1) /**< PIO mask for PD1 */
#define PIO_PD2                     (_UINT32_(1) << 2) /**< PIO mask for PD2 */
#define PIO_PD3                     (_UINT32_(1) << 3) /**< PIO mask for PD3 */
#define PIO_PD4                     (_UINT32_(1) << 4) /**< PIO mask for PD4 */
#define PIO_PD5                     (_UINT32_(1) << 5) /**< PIO mask for PD5 */
#define PIO_PD6                     (_UINT32_(1) << 6) /**< PIO mask for PD6 */
#define PIO_PD7                     (_UINT32_(1) << 7) /**< PIO mask for PD7 */
#define PIO_PD8                     (_UINT32_(1) << 8) /**< PIO mask for PD8 */
#define PIO_PD9                     (_UINT32_(1) << 9) /**< PIO mask for PD9 */
#define PIO_PD10                    (_UINT32_(1) << 10) /**< PIO mask for PD10 */
#define PIO_PD11                    (_UINT32_(1) << 11) /**< PIO mask for PD11 */
#define PIO_PD12                    (_UINT32_(1) << 12) /**< PIO mask for PD12 */
#define PIO_PD13                    (_UINT32_(1) << 13) /**< PIO mask for PD13 */
#define PIO_PD14                    (_UINT32_(1) << 14) /**< PIO mask for PD14 */
#define PIO_PD15                    (_UINT32_(1) << 15) /**< PIO mask for PD15 */
#define PIO_PD16                    (_UINT32_(1) << 16) /**< PIO mask for PD16 */
#define PIO_PD17                    (_UINT32_(1) << 17) /**< PIO mask for PD17 */
#define PIO_PD18                    (_UINT32_(1) << 18) /**< PIO mask for PD18 */
#define PIO_PD19                    (_UINT32_(1) << 19) /**< PIO mask for PD19 */
#define PIO_PD20                    (_UINT32_(1) << 20) /**< PIO mask for PD20 */
#define PIO_PD21                    (_UINT32_(1) << 21) /**< PIO mask for PD21 */
#define PIO_PD22                    (_UINT32_(1) << 22) /**< PIO mask for PD22 */
#define PIO_PD23                    (_UINT32_(1) << 23) /**< PIO mask for PD23 */
#define PIO_PD24                    (_UINT32_(1) << 24) /**< PIO mask for PD24 */
#define PIO_PD25                    (_UINT32_(1) << 25) /**< PIO mask for PD25 */
#define PIO_PD26                    (_UINT32_(1) << 26) /**< PIO mask for PD26 */
#define PIO_PD27                    (_UINT32_(1) << 27) /**< PIO mask for PD27 */
#define PIO_PD28                    (_UINT32_(1) << 28) /**< PIO mask for PD28 */
#define PIO_PD29                    (_UINT32_(1) << 29) /**< PIO mask for PD29 */
#define PIO_PD30                    (_UINT32_(1) << 30) /**< PIO mask for PD30 */
#define PIO_PD31                    (_UINT32_(1) << 31) /**< PIO mask for PD31 */

/* ========== PIO definition for ADC peripheral ========== */
#define PIN_PA0X1_ADC_AD0                          _UINT32_(0)  /**< ADC signal: ADC_AD0 on PA0 mux X1 */
#define PIO_PA0X1_ADC_AD0                          (_UINT32_(1) << 0) /**< ADC signal: ADC_AD0 */
#define PIN_PA1X1_ADC_AD1                          _UINT32_(1)  /**< ADC signal: ADC_AD1 on PA1 mux X1 */
#define PIO_PA1X1_ADC_AD1                          (_UINT32_(1) << 1) /**< ADC signal: ADC_AD1 */
#define PIN_PA2X1_ADC_AD2                          _UINT32_(2)  /**< ADC signal: ADC_AD2 on PA2 mux X1 */
#define PIO_PA2X1_ADC_AD2                          (_UINT32_(1) << 2) /**< ADC signal: ADC_AD2 */
#define PIN_PA3X1_ADC_AD3                          _UINT32_(3)  /**< ADC signal: ADC_AD3 on PA3 mux X1 */
#define PIO_PA3X1_ADC_AD3                          (_UINT32_(1) << 3) /**< ADC signal: ADC_AD3 */
#define PIN_PA4X1_ADC_AD4                          _UINT32_(4)  /**< ADC signal: ADC_AD4 on PA4 mux X1 */
#define PIO_PA4X1_ADC_AD4                          (_UINT32_(1) << 4) /**< ADC signal: ADC_AD4 */
#define PIN_PA5X1_ADC_AD5                          _UINT32_(5)  /**< ADC signal: ADC_AD5 on PA5 mux X1 */
#define PIO_PA5X1_ADC_AD5                          (_UINT32_(1) << 5) /**< ADC signal: ADC_AD5 */
#define PIN_PA6X1_ADC_AD6                          _UINT32_(6)  /**< ADC signal: ADC_AD6 on PA6 mux X1 */
#define PIO_PA6X1_ADC_AD6                          (_UINT32_(1) << 6) /**< ADC signal: ADC_AD6 */
#define PIN_PA7X1_ADC_AD7                          _UINT32_(7)  /**< ADC signal: ADC_AD7 on PA7 mux X1 */
#define PIO_PA7X1_ADC_AD7                          (_UINT32_(1) << 7) /**< ADC signal: ADC_AD7 */
#define PIN_PA8X1_ADC_AD8                          _UINT32_(8)  /**< ADC signal: ADC_AD8 on PA8 mux X1 */
#define PIO_PA8X1_ADC_AD8                          (_UINT32_(1) << 8) /**< ADC signal: ADC_AD8 */
#define PIN_PA9X1_ADC_AD9                          _UINT32_(9)  /**< ADC signal: ADC_AD9 on PA9 mux X1 */
#define PIO_PA9X1_ADC_AD9                          (_UINT32_(1) << 9) /**< ADC signal: ADC_AD9 */
#define PIN_PA10X1_ADC_AD10                        _UINT32_(10) /**< ADC signal: ADC_AD10 on PA10 mux X1 */
#define PIO_PA10X1_ADC_AD10                        (_UINT32_(1) << 10) /**< ADC signal: ADC_AD10 */
#define PIN_PA11X1_ADC_AD11                        _UINT32_(11) /**< ADC signal: ADC_AD11 on PA11 mux X1 */
#define PIO_PA11X1_ADC_AD11                        (_UINT32_(1) << 11) /**< ADC signal: ADC_AD11 */
#define PIN_PA12X1_ADC_AD12                        _UINT32_(12) /**< ADC signal: ADC_AD12 on PA12 mux X1 */
#define PIO_PA12X1_ADC_AD12                        (_UINT32_(1) << 12) /**< ADC signal: ADC_AD12 */
#define PIN_PA13X1_ADC_AD13                        _UINT32_(13) /**< ADC signal: ADC_AD13 on PA13 mux X1 */
#define PIO_PA13X1_ADC_AD13                        (_UINT32_(1) << 13) /**< ADC signal: ADC_AD13 */
#define PIN_PA14X1_ADC_AD14                        _UINT32_(14) /**< ADC signal: ADC_AD14 on PA14 mux X1 */
#define PIO_PA14X1_ADC_AD14                        (_UINT32_(1) << 14) /**< ADC signal: ADC_AD14 */
#define PIN_PA15X1_ADC_AD15                        _UINT32_(15) /**< ADC signal: ADC_AD15 on PA15 mux X1 */
#define PIO_PA15X1_ADC_AD15                        (_UINT32_(1) << 15) /**< ADC signal: ADC_AD15 */
#define PIN_PC30A_ADC_ADTRG                        _UINT32_(94) /**< ADC signal: ADC_ADTRG on PC30 mux A */
#define MUX_PC30A_ADC_ADTRG                        _UINT32_(0)  /**< ADC signal line function value: ADC_ADTRG */
#define PIO_PC30A_ADC_ADTRG                        (_UINT32_(1) << 30) /**< ADC signal: ADC_ADTRG */
/* ========== PIO definition for DACC peripheral ========== */
#define PIN_PD31X1_DACC_DAC0                       _UINT32_(127) /**< DACC signal: DACC_DAC0 on PD31 mux X1 */
#define PIO_PD31X1_DACC_DAC0                       (_UINT32_(1) << 31) /**< DACC signal: DACC_DAC0 */
#define PIN_PD28X1_DACC_DAC2                       _UINT32_(124) /**< DACC signal: DACC_DAC2 on PD28 mux X1 */
#define PIO_PD28X1_DACC_DAC2                       (_UINT32_(1) << 28) /**< DACC signal: DACC_DAC2 */
#define PIN_PD30X1_DACC_DAC1N                      _UINT32_(126) /**< DACC signal: DACC_DAC1N on PD30 mux X1 */
#define PIO_PD30X1_DACC_DAC1N                      (_UINT32_(1) << 30) /**< DACC signal: DACC_DAC1N */
#define PIN_PD29X1_DACC_DAC1P                      _UINT32_(125) /**< DACC signal: DACC_DAC1P on PD29 mux X1 */
#define PIO_PD29X1_DACC_DAC1P                      (_UINT32_(1) << 29) /**< DACC signal: DACC_DAC1P */
#define PIN_PC29A_DACC_DATRG                       _UINT32_(93) /**< DACC signal: DACC_DATRG on PC29 mux A */
#define MUX_PC29A_DACC_DATRG                       _UINT32_(0)  /**< DACC signal line function value: DACC_DATRG */
#define PIO_PC29A_DACC_DATRG                       (_UINT32_(1) << 29) /**< DACC signal: DACC_DATRG */
/* ========== PIO definition for FLEXCOM0 peripheral ========== */
#define PIN_PA21A_FLEXCOM0_IO0                     _UINT32_(21) /**< FLEXCOM0 signal: FLEXCOM0_IO0 on PA21 mux A */
#define MUX_PA21A_FLEXCOM0_IO0                     _UINT32_(0)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO0 */
#define PIO_PA21A_FLEXCOM0_IO0                     (_UINT32_(1) << 21) /**< FLEXCOM0 signal: FLEXCOM0_IO0 */
#define PIN_PA22A_FLEXCOM0_IO1                     _UINT32_(22) /**< FLEXCOM0 signal: FLEXCOM0_IO1 on PA22 mux A */
#define MUX_PA22A_FLEXCOM0_IO1                     _UINT32_(0)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO1 */
#define PIO_PA22A_FLEXCOM0_IO1                     (_UINT32_(1) << 22) /**< FLEXCOM0 signal: FLEXCOM0_IO1 */
#define PIN_PA17A_FLEXCOM0_IO2                     _UINT32_(17) /**< FLEXCOM0 signal: FLEXCOM0_IO2 on PA17 mux A */
#define MUX_PA17A_FLEXCOM0_IO2                     _UINT32_(0)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO2 */
#define PIO_PA17A_FLEXCOM0_IO2                     (_UINT32_(1) << 17) /**< FLEXCOM0 signal: FLEXCOM0_IO2 */
#define PIN_PA26A_FLEXCOM0_IO2                     _UINT32_(26) /**< FLEXCOM0 signal: FLEXCOM0_IO2 on PA26 mux A */
#define MUX_PA26A_FLEXCOM0_IO2                     _UINT32_(0)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO2 */
#define PIO_PA26A_FLEXCOM0_IO2                     (_UINT32_(1) << 26) /**< FLEXCOM0 signal: FLEXCOM0_IO2 */
#define PIN_PA18A_FLEXCOM0_IO3                     _UINT32_(18) /**< FLEXCOM0 signal: FLEXCOM0_IO3 on PA18 mux A */
#define MUX_PA18A_FLEXCOM0_IO3                     _UINT32_(0)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO3 */
#define PIO_PA18A_FLEXCOM0_IO3                     (_UINT32_(1) << 18) /**< FLEXCOM0 signal: FLEXCOM0_IO3 */
#define PIN_PA28A_FLEXCOM0_IO3                     _UINT32_(28) /**< FLEXCOM0 signal: FLEXCOM0_IO3 on PA28 mux A */
#define MUX_PA28A_FLEXCOM0_IO3                     _UINT32_(0)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO3 */
#define PIO_PA28A_FLEXCOM0_IO3                     (_UINT32_(1) << 28) /**< FLEXCOM0 signal: FLEXCOM0_IO3 */
#define PIN_PA25A_FLEXCOM0_IO4                     _UINT32_(25) /**< FLEXCOM0 signal: FLEXCOM0_IO4 on PA25 mux A */
#define MUX_PA25A_FLEXCOM0_IO4                     _UINT32_(0)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO4 */
#define PIO_PA25A_FLEXCOM0_IO4                     (_UINT32_(1) << 25) /**< FLEXCOM0 signal: FLEXCOM0_IO4 */
#define PIN_PA24A_FLEXCOM0_IO5                     _UINT32_(24) /**< FLEXCOM0 signal: FLEXCOM0_IO5 on PA24 mux A */
#define MUX_PA24A_FLEXCOM0_IO5                     _UINT32_(0)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO5 */
#define PIO_PA24A_FLEXCOM0_IO5                     (_UINT32_(1) << 24) /**< FLEXCOM0 signal: FLEXCOM0_IO5 */
#define PIN_PA27A_FLEXCOM0_IO5                     _UINT32_(27) /**< FLEXCOM0 signal: FLEXCOM0_IO5 on PA27 mux A */
#define MUX_PA27A_FLEXCOM0_IO5                     _UINT32_(0)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO5 */
#define PIO_PA27A_FLEXCOM0_IO5                     (_UINT32_(1) << 27) /**< FLEXCOM0 signal: FLEXCOM0_IO5 */
#define PIN_PA20A_FLEXCOM0_IO6                     _UINT32_(20) /**< FLEXCOM0 signal: FLEXCOM0_IO6 on PA20 mux A */
#define MUX_PA20A_FLEXCOM0_IO6                     _UINT32_(0)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO6 */
#define PIO_PA20A_FLEXCOM0_IO6                     (_UINT32_(1) << 20) /**< FLEXCOM0 signal: FLEXCOM0_IO6 */
#define PIN_PA23A_FLEXCOM0_IO6                     _UINT32_(23) /**< FLEXCOM0 signal: FLEXCOM0_IO6 on PA23 mux A */
#define MUX_PA23A_FLEXCOM0_IO6                     _UINT32_(0)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO6 */
#define PIO_PA23A_FLEXCOM0_IO6                     (_UINT32_(1) << 23) /**< FLEXCOM0 signal: FLEXCOM0_IO6 */
/* ========== PIO definition for FLEXCOM1 peripheral ========== */
#define PIN_PB4B_FLEXCOM1_IO0                      _UINT32_(36) /**< FLEXCOM1 signal: FLEXCOM1_IO0 on PB4 mux B */
#define MUX_PB4B_FLEXCOM1_IO0                      _UINT32_(1)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO0 */
#define PIO_PB4B_FLEXCOM1_IO0                      (_UINT32_(1) << 4) /**< FLEXCOM1 signal: FLEXCOM1_IO0 */
#define PIN_PB5B_FLEXCOM1_IO1                      _UINT32_(37) /**< FLEXCOM1 signal: FLEXCOM1_IO1 on PB5 mux B */
#define MUX_PB5B_FLEXCOM1_IO1                      _UINT32_(1)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO1 */
#define PIO_PB5B_FLEXCOM1_IO1                      (_UINT32_(1) << 5) /**< FLEXCOM1 signal: FLEXCOM1_IO1 */
#define PIN_PA30B_FLEXCOM1_IO2                     _UINT32_(30) /**< FLEXCOM1 signal: FLEXCOM1_IO2 on PA30 mux B */
#define MUX_PA30B_FLEXCOM1_IO2                     _UINT32_(1)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO2 */
#define PIO_PA30B_FLEXCOM1_IO2                     (_UINT32_(1) << 30) /**< FLEXCOM1 signal: FLEXCOM1_IO2 */
#define PIN_PA29B_FLEXCOM1_IO3                     _UINT32_(29) /**< FLEXCOM1 signal: FLEXCOM1_IO3 on PA29 mux B */
#define MUX_PA29B_FLEXCOM1_IO3                     _UINT32_(1)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO3 */
#define PIO_PA29B_FLEXCOM1_IO3                     (_UINT32_(1) << 29) /**< FLEXCOM1 signal: FLEXCOM1_IO3 */
#define PIN_PB3B_FLEXCOM1_IO4                      _UINT32_(35) /**< FLEXCOM1 signal: FLEXCOM1_IO4 on PB3 mux B */
#define MUX_PB3B_FLEXCOM1_IO4                      _UINT32_(1)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO4 */
#define PIO_PB3B_FLEXCOM1_IO4                      (_UINT32_(1) << 3) /**< FLEXCOM1 signal: FLEXCOM1_IO4 */
#define PIN_PA15B_FLEXCOM1_IO5                     _UINT32_(15) /**< FLEXCOM1 signal: FLEXCOM1_IO5 on PA15 mux B */
#define MUX_PA15B_FLEXCOM1_IO5                     _UINT32_(1)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO5 */
#define PIO_PA15B_FLEXCOM1_IO5                     (_UINT32_(1) << 15) /**< FLEXCOM1 signal: FLEXCOM1_IO5 */
#define PIN_PA16B_FLEXCOM1_IO5                     _UINT32_(16) /**< FLEXCOM1 signal: FLEXCOM1_IO5 on PA16 mux B */
#define MUX_PA16B_FLEXCOM1_IO5                     _UINT32_(1)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO5 */
#define PIO_PA16B_FLEXCOM1_IO5                     (_UINT32_(1) << 16) /**< FLEXCOM1 signal: FLEXCOM1_IO5 */
#define PIN_PA14B_FLEXCOM1_IO6                     _UINT32_(14) /**< FLEXCOM1 signal: FLEXCOM1_IO6 on PA14 mux B */
#define MUX_PA14B_FLEXCOM1_IO6                     _UINT32_(1)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO6 */
#define PIO_PA14B_FLEXCOM1_IO6                     (_UINT32_(1) << 14) /**< FLEXCOM1 signal: FLEXCOM1_IO6 */
#define PIN_PA31B_FLEXCOM1_IO6                     _UINT32_(31) /**< FLEXCOM1 signal: FLEXCOM1_IO6 on PA31 mux B */
#define MUX_PA31B_FLEXCOM1_IO6                     _UINT32_(1)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO6 */
#define PIO_PA31B_FLEXCOM1_IO6                     (_UINT32_(1) << 31) /**< FLEXCOM1 signal: FLEXCOM1_IO6 */
/* ========== PIO definition for FLEXCOM2 peripheral ========== */
#define PIN_PD8C_FLEXCOM2_IO0                      _UINT32_(104) /**< FLEXCOM2 signal: FLEXCOM2_IO0 on PD8 mux C */
#define MUX_PD8C_FLEXCOM2_IO0                      _UINT32_(2)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO0 */
#define PIO_PD8C_FLEXCOM2_IO0                      (_UINT32_(1) << 8) /**< FLEXCOM2 signal: FLEXCOM2_IO0 */
#define PIN_PD9C_FLEXCOM2_IO1                      _UINT32_(105) /**< FLEXCOM2 signal: FLEXCOM2_IO1 on PD9 mux C */
#define MUX_PD9C_FLEXCOM2_IO1                      _UINT32_(2)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO1 */
#define PIO_PD9C_FLEXCOM2_IO1                      (_UINT32_(1) << 9) /**< FLEXCOM2 signal: FLEXCOM2_IO1 */
#define PIN_PC16A_FLEXCOM2_IO2                     _UINT32_(80) /**< FLEXCOM2 signal: FLEXCOM2_IO2 on PC16 mux A */
#define MUX_PC16A_FLEXCOM2_IO2                     _UINT32_(0)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO2 */
#define PIO_PC16A_FLEXCOM2_IO2                     (_UINT32_(1) << 16) /**< FLEXCOM2 signal: FLEXCOM2_IO2 */
#define PIN_PD13B_FLEXCOM2_IO2                     _UINT32_(109) /**< FLEXCOM2 signal: FLEXCOM2_IO2 on PD13 mux B */
#define MUX_PD13B_FLEXCOM2_IO2                     _UINT32_(1)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO2 */
#define PIO_PD13B_FLEXCOM2_IO2                     (_UINT32_(1) << 13) /**< FLEXCOM2 signal: FLEXCOM2_IO2 */
#define PIN_PD26A_FLEXCOM2_IO2                     _UINT32_(122) /**< FLEXCOM2 signal: FLEXCOM2_IO2 on PD26 mux A */
#define MUX_PD26A_FLEXCOM2_IO2                     _UINT32_(0)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO2 */
#define PIO_PD26A_FLEXCOM2_IO2                     (_UINT32_(1) << 26) /**< FLEXCOM2 signal: FLEXCOM2_IO2 */
#define PIN_PC17A_FLEXCOM2_IO3                     _UINT32_(81) /**< FLEXCOM2 signal: FLEXCOM2_IO3 on PC17 mux A */
#define MUX_PC17A_FLEXCOM2_IO3                     _UINT32_(0)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO3 */
#define PIO_PC17A_FLEXCOM2_IO3                     (_UINT32_(1) << 17) /**< FLEXCOM2 signal: FLEXCOM2_IO3 */
#define PIN_PD17B_FLEXCOM2_IO3                     _UINT32_(113) /**< FLEXCOM2 signal: FLEXCOM2_IO3 on PD17 mux B */
#define MUX_PD17B_FLEXCOM2_IO3                     _UINT32_(1)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO3 */
#define PIO_PD17B_FLEXCOM2_IO3                     (_UINT32_(1) << 17) /**< FLEXCOM2 signal: FLEXCOM2_IO3 */
#define PIN_PD27A_FLEXCOM2_IO3                     _UINT32_(123) /**< FLEXCOM2 signal: FLEXCOM2_IO3 on PD27 mux A */
#define MUX_PD27A_FLEXCOM2_IO3                     _UINT32_(0)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO3 */
#define PIO_PD27A_FLEXCOM2_IO3                     (_UINT32_(1) << 27) /**< FLEXCOM2 signal: FLEXCOM2_IO3 */
#define PIN_PC18A_FLEXCOM2_IO4                     _UINT32_(82) /**< FLEXCOM2 signal: FLEXCOM2_IO4 on PC18 mux A */
#define MUX_PC18A_FLEXCOM2_IO4                     _UINT32_(0)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO4 */
#define PIO_PC18A_FLEXCOM2_IO4                     (_UINT32_(1) << 18) /**< FLEXCOM2 signal: FLEXCOM2_IO4 */
#define PIN_PC31A_FLEXCOM2_IO4                     _UINT32_(95) /**< FLEXCOM2 signal: FLEXCOM2_IO4 on PC31 mux A */
#define MUX_PC31A_FLEXCOM2_IO4                     _UINT32_(0)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO4 */
#define PIO_PC31A_FLEXCOM2_IO4                     (_UINT32_(1) << 31) /**< FLEXCOM2 signal: FLEXCOM2_IO4 */
#define PIN_PD11B_FLEXCOM2_IO4                     _UINT32_(107) /**< FLEXCOM2 signal: FLEXCOM2_IO4 on PD11 mux B */
#define MUX_PD11B_FLEXCOM2_IO4                     _UINT32_(1)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO4 */
#define PIO_PD11B_FLEXCOM2_IO4                     (_UINT32_(1) << 11) /**< FLEXCOM2 signal: FLEXCOM2_IO4 */
#define PIN_PC19A_FLEXCOM2_IO5                     _UINT32_(83) /**< FLEXCOM2 signal: FLEXCOM2_IO5 on PC19 mux A */
#define MUX_PC19A_FLEXCOM2_IO5                     _UINT32_(0)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO5 */
#define PIO_PC19A_FLEXCOM2_IO5                     (_UINT32_(1) << 19) /**< FLEXCOM2 signal: FLEXCOM2_IO5 */
#define PIN_PC20A_FLEXCOM2_IO6                     _UINT32_(84) /**< FLEXCOM2 signal: FLEXCOM2_IO6 on PC20 mux A */
#define MUX_PC20A_FLEXCOM2_IO6                     _UINT32_(0)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO6 */
#define PIO_PC20A_FLEXCOM2_IO6                     (_UINT32_(1) << 20) /**< FLEXCOM2 signal: FLEXCOM2_IO6 */
#define PIN_PD15B_FLEXCOM2_IO6                     _UINT32_(111) /**< FLEXCOM2 signal: FLEXCOM2_IO6 on PD15 mux B */
#define MUX_PD15B_FLEXCOM2_IO6                     _UINT32_(1)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO6 */
#define PIO_PD15B_FLEXCOM2_IO6                     (_UINT32_(1) << 15) /**< FLEXCOM2 signal: FLEXCOM2_IO6 */
/* ========== PIO definition for FLEXCOM3 peripheral ========== */
#define PIN_PB22B_FLEXCOM3_IO0                     _UINT32_(54) /**< FLEXCOM3 signal: FLEXCOM3_IO0 on PB22 mux B */
#define MUX_PB22B_FLEXCOM3_IO0                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO0 */
#define PIO_PB22B_FLEXCOM3_IO0                     (_UINT32_(1) << 22) /**< FLEXCOM3 signal: FLEXCOM3_IO0 */
#define PIN_PB21B_FLEXCOM3_IO1                     _UINT32_(53) /**< FLEXCOM3 signal: FLEXCOM3_IO1 on PB21 mux B */
#define MUX_PB21B_FLEXCOM3_IO1                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO1 */
#define PIO_PB21B_FLEXCOM3_IO1                     (_UINT32_(1) << 21) /**< FLEXCOM3 signal: FLEXCOM3_IO1 */
#define PIN_PB17B_FLEXCOM3_IO2                     _UINT32_(49) /**< FLEXCOM3 signal: FLEXCOM3_IO2 on PB17 mux B */
#define MUX_PB17B_FLEXCOM3_IO2                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO2 */
#define PIO_PB17B_FLEXCOM3_IO2                     (_UINT32_(1) << 17) /**< FLEXCOM3 signal: FLEXCOM3_IO2 */
#define PIN_PB30B_FLEXCOM3_IO2                     _UINT32_(62) /**< FLEXCOM3 signal: FLEXCOM3_IO2 on PB30 mux B */
#define MUX_PB30B_FLEXCOM3_IO2                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO2 */
#define PIO_PB30B_FLEXCOM3_IO2                     (_UINT32_(1) << 30) /**< FLEXCOM3 signal: FLEXCOM3_IO2 */
#define PIN_PB18B_FLEXCOM3_IO3                     _UINT32_(50) /**< FLEXCOM3 signal: FLEXCOM3_IO3 on PB18 mux B */
#define MUX_PB18B_FLEXCOM3_IO3                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO3 */
#define PIO_PB18B_FLEXCOM3_IO3                     (_UINT32_(1) << 18) /**< FLEXCOM3 signal: FLEXCOM3_IO3 */
#define PIN_PB31B_FLEXCOM3_IO3                     _UINT32_(63) /**< FLEXCOM3 signal: FLEXCOM3_IO3 on PB31 mux B */
#define MUX_PB31B_FLEXCOM3_IO3                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO3 */
#define PIO_PB31B_FLEXCOM3_IO3                     (_UINT32_(1) << 31) /**< FLEXCOM3 signal: FLEXCOM3_IO3 */
#define PIN_PB20B_FLEXCOM3_IO4                     _UINT32_(52) /**< FLEXCOM3 signal: FLEXCOM3_IO4 on PB20 mux B */
#define MUX_PB20B_FLEXCOM3_IO4                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO4 */
#define PIO_PB20B_FLEXCOM3_IO4                     (_UINT32_(1) << 20) /**< FLEXCOM3 signal: FLEXCOM3_IO4 */
#define PIN_PB16B_FLEXCOM3_IO5                     _UINT32_(48) /**< FLEXCOM3 signal: FLEXCOM3_IO5 on PB16 mux B */
#define MUX_PB16B_FLEXCOM3_IO5                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO5 */
#define PIO_PB16B_FLEXCOM3_IO5                     (_UINT32_(1) << 16) /**< FLEXCOM3 signal: FLEXCOM3_IO5 */
#define PIN_PB29B_FLEXCOM3_IO5                     _UINT32_(61) /**< FLEXCOM3 signal: FLEXCOM3_IO5 on PB29 mux B */
#define MUX_PB29B_FLEXCOM3_IO5                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO5 */
#define PIO_PB29B_FLEXCOM3_IO5                     (_UINT32_(1) << 29) /**< FLEXCOM3 signal: FLEXCOM3_IO5 */
#define PIN_PB19B_FLEXCOM3_IO6                     _UINT32_(51) /**< FLEXCOM3 signal: FLEXCOM3_IO6 on PB19 mux B */
#define MUX_PB19B_FLEXCOM3_IO6                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO6 */
#define PIO_PB19B_FLEXCOM3_IO6                     (_UINT32_(1) << 19) /**< FLEXCOM3 signal: FLEXCOM3_IO6 */
/* ========== PIO definition for HEMC peripheral ========== */
#define PIN_PC8B_HEMC_A0                           _UINT32_(72) /**< HEMC signal: HEMC_A0 on PC8 mux B */
#define MUX_PC8B_HEMC_A0                           _UINT32_(1)  /**< HEMC signal line function value: HEMC_A0 */
#define PIO_PC8B_HEMC_A0                           (_UINT32_(1) << 8) /**< HEMC signal: HEMC_A0 */
#define PIN_PC9B_HEMC_A1                           _UINT32_(73) /**< HEMC signal: HEMC_A1 on PC9 mux B */
#define MUX_PC9B_HEMC_A1                           _UINT32_(1)  /**< HEMC signal line function value: HEMC_A1 */
#define PIO_PC9B_HEMC_A1                           (_UINT32_(1) << 9) /**< HEMC signal: HEMC_A1 */
#define PIN_PC10B_HEMC_A2                          _UINT32_(74) /**< HEMC signal: HEMC_A2 on PC10 mux B */
#define MUX_PC10B_HEMC_A2                          _UINT32_(1)  /**< HEMC signal line function value: HEMC_A2 */
#define PIO_PC10B_HEMC_A2                          (_UINT32_(1) << 10) /**< HEMC signal: HEMC_A2 */
#define PIN_PC11B_HEMC_A3                          _UINT32_(75) /**< HEMC signal: HEMC_A3 on PC11 mux B */
#define MUX_PC11B_HEMC_A3                          _UINT32_(1)  /**< HEMC signal line function value: HEMC_A3 */
#define PIO_PC11B_HEMC_A3                          (_UINT32_(1) << 11) /**< HEMC signal: HEMC_A3 */
#define PIN_PC12B_HEMC_A4                          _UINT32_(76) /**< HEMC signal: HEMC_A4 on PC12 mux B */
#define MUX_PC12B_HEMC_A4                          _UINT32_(1)  /**< HEMC signal line function value: HEMC_A4 */
#define PIO_PC12B_HEMC_A4                          (_UINT32_(1) << 12) /**< HEMC signal: HEMC_A4 */
#define PIN_PC13B_HEMC_A5                          _UINT32_(77) /**< HEMC signal: HEMC_A5 on PC13 mux B */
#define MUX_PC13B_HEMC_A5                          _UINT32_(1)  /**< HEMC signal line function value: HEMC_A5 */
#define PIO_PC13B_HEMC_A5                          (_UINT32_(1) << 13) /**< HEMC signal: HEMC_A5 */
#define PIN_PC14B_HEMC_A6                          _UINT32_(78) /**< HEMC signal: HEMC_A6 on PC14 mux B */
#define MUX_PC14B_HEMC_A6                          _UINT32_(1)  /**< HEMC signal line function value: HEMC_A6 */
#define PIO_PC14B_HEMC_A6                          (_UINT32_(1) << 14) /**< HEMC signal: HEMC_A6 */
#define PIN_PC15B_HEMC_A7                          _UINT32_(79) /**< HEMC signal: HEMC_A7 on PC15 mux B */
#define MUX_PC15B_HEMC_A7                          _UINT32_(1)  /**< HEMC signal line function value: HEMC_A7 */
#define PIO_PC15B_HEMC_A7                          (_UINT32_(1) << 15) /**< HEMC signal: HEMC_A7 */
#define PIN_PC16B_HEMC_A8                          _UINT32_(80) /**< HEMC signal: HEMC_A8 on PC16 mux B */
#define MUX_PC16B_HEMC_A8                          _UINT32_(1)  /**< HEMC signal line function value: HEMC_A8 */
#define PIO_PC16B_HEMC_A8                          (_UINT32_(1) << 16) /**< HEMC signal: HEMC_A8 */
#define PIN_PC17B_HEMC_A9                          _UINT32_(81) /**< HEMC signal: HEMC_A9 on PC17 mux B */
#define MUX_PC17B_HEMC_A9                          _UINT32_(1)  /**< HEMC signal line function value: HEMC_A9 */
#define PIO_PC17B_HEMC_A9                          (_UINT32_(1) << 17) /**< HEMC signal: HEMC_A9 */
#define PIN_PC18B_HEMC_A10                         _UINT32_(82) /**< HEMC signal: HEMC_A10 on PC18 mux B */
#define MUX_PC18B_HEMC_A10                         _UINT32_(1)  /**< HEMC signal line function value: HEMC_A10 */
#define PIO_PC18B_HEMC_A10                         (_UINT32_(1) << 18) /**< HEMC signal: HEMC_A10 */
#define PIN_PC19B_HEMC_A11                         _UINT32_(83) /**< HEMC signal: HEMC_A11 on PC19 mux B */
#define MUX_PC19B_HEMC_A11                         _UINT32_(1)  /**< HEMC signal line function value: HEMC_A11 */
#define PIO_PC19B_HEMC_A11                         (_UINT32_(1) << 19) /**< HEMC signal: HEMC_A11 */
#define PIN_PC20B_HEMC_A12                         _UINT32_(84) /**< HEMC signal: HEMC_A12 on PC20 mux B */
#define MUX_PC20B_HEMC_A12                         _UINT32_(1)  /**< HEMC signal line function value: HEMC_A12 */
#define PIO_PC20B_HEMC_A12                         (_UINT32_(1) << 20) /**< HEMC signal: HEMC_A12 */
#define PIN_PC21B_HEMC_A13                         _UINT32_(85) /**< HEMC signal: HEMC_A13 on PC21 mux B */
#define MUX_PC21B_HEMC_A13                         _UINT32_(1)  /**< HEMC signal line function value: HEMC_A13 */
#define PIO_PC21B_HEMC_A13                         (_UINT32_(1) << 21) /**< HEMC signal: HEMC_A13 */
#define PIN_PC22B_HEMC_A14                         _UINT32_(86) /**< HEMC signal: HEMC_A14 on PC22 mux B */
#define MUX_PC22B_HEMC_A14                         _UINT32_(1)  /**< HEMC signal line function value: HEMC_A14 */
#define PIO_PC22B_HEMC_A14                         (_UINT32_(1) << 22) /**< HEMC signal: HEMC_A14 */
#define PIN_PC23B_HEMC_A15                         _UINT32_(87) /**< HEMC signal: HEMC_A15 on PC23 mux B */
#define MUX_PC23B_HEMC_A15                         _UINT32_(1)  /**< HEMC signal line function value: HEMC_A15 */
#define PIO_PC23B_HEMC_A15                         (_UINT32_(1) << 23) /**< HEMC signal: HEMC_A15 */
#define PIN_PC24B_HEMC_A16                         _UINT32_(88) /**< HEMC signal: HEMC_A16 on PC24 mux B */
#define MUX_PC24B_HEMC_A16                         _UINT32_(1)  /**< HEMC signal line function value: HEMC_A16 */
#define PIO_PC24B_HEMC_A16                         (_UINT32_(1) << 24) /**< HEMC signal: HEMC_A16 */
#define PIN_PC25B_HEMC_A17                         _UINT32_(89) /**< HEMC signal: HEMC_A17 on PC25 mux B */
#define MUX_PC25B_HEMC_A17                         _UINT32_(1)  /**< HEMC signal line function value: HEMC_A17 */
#define PIO_PC25B_HEMC_A17                         (_UINT32_(1) << 25) /**< HEMC signal: HEMC_A17 */
#define PIN_PC26B_HEMC_A18                         _UINT32_(90) /**< HEMC signal: HEMC_A18 on PC26 mux B */
#define MUX_PC26B_HEMC_A18                         _UINT32_(1)  /**< HEMC signal line function value: HEMC_A18 */
#define PIO_PC26B_HEMC_A18                         (_UINT32_(1) << 26) /**< HEMC signal: HEMC_A18 */
#define PIN_PC27B_HEMC_A19                         _UINT32_(91) /**< HEMC signal: HEMC_A19 on PC27 mux B */
#define MUX_PC27B_HEMC_A19                         _UINT32_(1)  /**< HEMC signal line function value: HEMC_A19 */
#define PIO_PC27B_HEMC_A19                         (_UINT32_(1) << 27) /**< HEMC signal: HEMC_A19 */
#define PIN_PC28B_HEMC_A20                         _UINT32_(92) /**< HEMC signal: HEMC_A20 on PC28 mux B */
#define MUX_PC28B_HEMC_A20                         _UINT32_(1)  /**< HEMC signal line function value: HEMC_A20 */
#define PIO_PC28B_HEMC_A20                         (_UINT32_(1) << 28) /**< HEMC signal: HEMC_A20 */
#define PIN_PC30X1_HEMC_BOOT_MODE0                 _UINT32_(94) /**< HEMC signal: HEMC_BOOT_MODE0 on PC30 mux X1 */
#define PIO_PC30X1_HEMC_BOOT_MODE0                 (_UINT32_(1) << 30) /**< HEMC signal: HEMC_BOOT_MODE0 */
#define PIN_PC29X1_HEMC_BOOT_MODE1                 _UINT32_(93) /**< HEMC signal: HEMC_BOOT_MODE1 on PC29 mux X1 */
#define PIO_PC29X1_HEMC_BOOT_MODE1                 (_UINT32_(1) << 29) /**< HEMC signal: HEMC_BOOT_MODE1 */
#define PIN_PA25X1_HEMC_CFG2                       _UINT32_(25) /**< HEMC signal: HEMC_CFG2 on PA25 mux X1 */
#define PIO_PA25X1_HEMC_CFG2                       (_UINT32_(1) << 25) /**< HEMC signal: HEMC_CFG2 */
#define PIN_PC0B_HEMC_D0                           _UINT32_(64) /**< HEMC signal: HEMC_D0 on PC0 mux B */
#define MUX_PC0B_HEMC_D0                           _UINT32_(1)  /**< HEMC signal line function value: HEMC_D0 */
#define PIO_PC0B_HEMC_D0                           (_UINT32_(1) << 0) /**< HEMC signal: HEMC_D0 */
#define PIN_PC1B_HEMC_D1                           _UINT32_(65) /**< HEMC signal: HEMC_D1 on PC1 mux B */
#define MUX_PC1B_HEMC_D1                           _UINT32_(1)  /**< HEMC signal line function value: HEMC_D1 */
#define PIO_PC1B_HEMC_D1                           (_UINT32_(1) << 1) /**< HEMC signal: HEMC_D1 */
#define PIN_PC2B_HEMC_D2                           _UINT32_(66) /**< HEMC signal: HEMC_D2 on PC2 mux B */
#define MUX_PC2B_HEMC_D2                           _UINT32_(1)  /**< HEMC signal line function value: HEMC_D2 */
#define PIO_PC2B_HEMC_D2                           (_UINT32_(1) << 2) /**< HEMC signal: HEMC_D2 */
#define PIN_PC3B_HEMC_D3                           _UINT32_(67) /**< HEMC signal: HEMC_D3 on PC3 mux B */
#define MUX_PC3B_HEMC_D3                           _UINT32_(1)  /**< HEMC signal line function value: HEMC_D3 */
#define PIO_PC3B_HEMC_D3                           (_UINT32_(1) << 3) /**< HEMC signal: HEMC_D3 */
#define PIN_PC4B_HEMC_D4                           _UINT32_(68) /**< HEMC signal: HEMC_D4 on PC4 mux B */
#define MUX_PC4B_HEMC_D4                           _UINT32_(1)  /**< HEMC signal line function value: HEMC_D4 */
#define PIO_PC4B_HEMC_D4                           (_UINT32_(1) << 4) /**< HEMC signal: HEMC_D4 */
#define PIN_PC5B_HEMC_D5                           _UINT32_(69) /**< HEMC signal: HEMC_D5 on PC5 mux B */
#define MUX_PC5B_HEMC_D5                           _UINT32_(1)  /**< HEMC signal line function value: HEMC_D5 */
#define PIO_PC5B_HEMC_D5                           (_UINT32_(1) << 5) /**< HEMC signal: HEMC_D5 */
#define PIN_PC6B_HEMC_D6                           _UINT32_(70) /**< HEMC signal: HEMC_D6 on PC6 mux B */
#define MUX_PC6B_HEMC_D6                           _UINT32_(1)  /**< HEMC signal line function value: HEMC_D6 */
#define PIO_PC6B_HEMC_D6                           (_UINT32_(1) << 6) /**< HEMC signal: HEMC_D6 */
#define PIN_PC7B_HEMC_D7                           _UINT32_(71) /**< HEMC signal: HEMC_D7 on PC7 mux B */
#define MUX_PC7B_HEMC_D7                           _UINT32_(1)  /**< HEMC signal line function value: HEMC_D7 */
#define PIO_PC7B_HEMC_D7                           (_UINT32_(1) << 7) /**< HEMC signal: HEMC_D7 */
#define PIN_PD5B_HEMC_NCS0                         _UINT32_(101) /**< HEMC signal: HEMC_NCS0 on PD5 mux B */
#define MUX_PD5B_HEMC_NCS0                         _UINT32_(1)  /**< HEMC signal line function value: HEMC_NCS0 */
#define PIO_PD5B_HEMC_NCS0                         (_UINT32_(1) << 5) /**< HEMC signal: HEMC_NCS0 */
#define PIN_PD4B_HEMC_NCS1                         _UINT32_(100) /**< HEMC signal: HEMC_NCS1 on PD4 mux B */
#define MUX_PD4B_HEMC_NCS1                         _UINT32_(1)  /**< HEMC signal line function value: HEMC_NCS1 */
#define PIO_PD4B_HEMC_NCS1                         (_UINT32_(1) << 4) /**< HEMC signal: HEMC_NCS1 */
#define PIN_PD6B_HEMC_NRD                          _UINT32_(102) /**< HEMC signal: HEMC_NRD on PD6 mux B */
#define MUX_PD6B_HEMC_NRD                          _UINT32_(1)  /**< HEMC signal line function value: HEMC_NRD */
#define PIO_PD6B_HEMC_NRD                          (_UINT32_(1) << 6) /**< HEMC signal: HEMC_NRD */
#define PIN_PD8B_HEMC_NWAIT                        _UINT32_(104) /**< HEMC signal: HEMC_NWAIT on PD8 mux B */
#define MUX_PD8B_HEMC_NWAIT                        _UINT32_(1)  /**< HEMC signal line function value: HEMC_NWAIT */
#define PIO_PD8B_HEMC_NWAIT                        (_UINT32_(1) << 8) /**< HEMC signal: HEMC_NWAIT */
#define PIN_PD7B_HEMC_NWE                          _UINT32_(103) /**< HEMC signal: HEMC_NWE on PD7 mux B */
#define MUX_PD7B_HEMC_NWE                          _UINT32_(1)  /**< HEMC signal line function value: HEMC_NWE */
#define PIO_PD7B_HEMC_NWE                          (_UINT32_(1) << 7) /**< HEMC signal: HEMC_NWE */
/* ========== PIO definition for IP1553 peripheral ========== */
#define PIN_PB28A_IP1553_ARXINN                    _UINT32_(60) /**< IP1553 signal: IP1553_ARXINN on PB28 mux A */
#define MUX_PB28A_IP1553_ARXINN                    _UINT32_(0)  /**< IP1553 signal line function value: IP1553_ARXINN */
#define PIO_PB28A_IP1553_ARXINN                    (_UINT32_(1) << 28) /**< IP1553 signal: IP1553_ARXINN */
#define PIN_PB27A_IP1553_ARXINP                    _UINT32_(59) /**< IP1553 signal: IP1553_ARXINP on PB27 mux A */
#define MUX_PB27A_IP1553_ARXINP                    _UINT32_(0)  /**< IP1553 signal line function value: IP1553_ARXINP */
#define PIO_PB27A_IP1553_ARXINP                    (_UINT32_(1) << 27) /**< IP1553 signal: IP1553_ARXINP */
#define PIN_PB26A_IP1553_ATXOUTN                   _UINT32_(58) /**< IP1553 signal: IP1553_ATXOUTN on PB26 mux A */
#define MUX_PB26A_IP1553_ATXOUTN                   _UINT32_(0)  /**< IP1553 signal line function value: IP1553_ATXOUTN */
#define PIO_PB26A_IP1553_ATXOUTN                   (_UINT32_(1) << 26) /**< IP1553 signal: IP1553_ATXOUTN */
#define PIN_PB25A_IP1553_ATXOUTP                   _UINT32_(57) /**< IP1553 signal: IP1553_ATXOUTP on PB25 mux A */
#define MUX_PB25A_IP1553_ATXOUTP                   _UINT32_(0)  /**< IP1553 signal line function value: IP1553_ATXOUTP */
#define PIO_PB25A_IP1553_ATXOUTP                   (_UINT32_(1) << 25) /**< IP1553 signal: IP1553_ATXOUTP */
#define PIN_PC3A_IP1553_BRXINN                     _UINT32_(67) /**< IP1553 signal: IP1553_BRXINN on PC3 mux A */
#define MUX_PC3A_IP1553_BRXINN                     _UINT32_(0)  /**< IP1553 signal line function value: IP1553_BRXINN */
#define PIO_PC3A_IP1553_BRXINN                     (_UINT32_(1) << 3) /**< IP1553 signal: IP1553_BRXINN */
#define PIN_PD3A_IP1553_BRXINN                     _UINT32_(99) /**< IP1553 signal: IP1553_BRXINN on PD3 mux A */
#define MUX_PD3A_IP1553_BRXINN                     _UINT32_(0)  /**< IP1553 signal line function value: IP1553_BRXINN */
#define PIO_PD3A_IP1553_BRXINN                     (_UINT32_(1) << 3) /**< IP1553 signal: IP1553_BRXINN */
#define PIN_PC2A_IP1553_BRXINP                     _UINT32_(66) /**< IP1553 signal: IP1553_BRXINP on PC2 mux A */
#define MUX_PC2A_IP1553_BRXINP                     _UINT32_(0)  /**< IP1553 signal line function value: IP1553_BRXINP */
#define PIO_PC2A_IP1553_BRXINP                     (_UINT32_(1) << 2) /**< IP1553 signal: IP1553_BRXINP */
#define PIN_PD2A_IP1553_BRXINP                     _UINT32_(98) /**< IP1553 signal: IP1553_BRXINP on PD2 mux A */
#define MUX_PD2A_IP1553_BRXINP                     _UINT32_(0)  /**< IP1553 signal line function value: IP1553_BRXINP */
#define PIO_PD2A_IP1553_BRXINP                     (_UINT32_(1) << 2) /**< IP1553 signal: IP1553_BRXINP */
#define PIN_PC1A_IP1553_BTXOUTN                    _UINT32_(65) /**< IP1553 signal: IP1553_BTXOUTN on PC1 mux A */
#define MUX_PC1A_IP1553_BTXOUTN                    _UINT32_(0)  /**< IP1553 signal line function value: IP1553_BTXOUTN */
#define PIO_PC1A_IP1553_BTXOUTN                    (_UINT32_(1) << 1) /**< IP1553 signal: IP1553_BTXOUTN */
#define PIN_PD1A_IP1553_BTXOUTN                    _UINT32_(97) /**< IP1553 signal: IP1553_BTXOUTN on PD1 mux A */
#define MUX_PD1A_IP1553_BTXOUTN                    _UINT32_(0)  /**< IP1553 signal line function value: IP1553_BTXOUTN */
#define PIO_PD1A_IP1553_BTXOUTN                    (_UINT32_(1) << 1) /**< IP1553 signal: IP1553_BTXOUTN */
#define PIN_PC0A_IP1553_BTXOUTP                    _UINT32_(64) /**< IP1553 signal: IP1553_BTXOUTP on PC0 mux A */
#define MUX_PC0A_IP1553_BTXOUTP                    _UINT32_(0)  /**< IP1553 signal line function value: IP1553_BTXOUTP */
#define PIO_PC0A_IP1553_BTXOUTP                    (_UINT32_(1) << 0) /**< IP1553 signal: IP1553_BTXOUTP */
#define PIN_PD0A_IP1553_BTXOUTP                    _UINT32_(96) /**< IP1553 signal: IP1553_BTXOUTP on PD0 mux A */
#define MUX_PD0A_IP1553_BTXOUTP                    _UINT32_(0)  /**< IP1553 signal line function value: IP1553_BTXOUTP */
#define PIO_PD0A_IP1553_BTXOUTP                    (_UINT32_(1) << 0) /**< IP1553 signal: IP1553_BTXOUTP */
/* ========== PIO definition for MCAN0 peripheral ========== */
#define PIN_PB8A_MCAN0_CANRX0                      _UINT32_(40) /**< MCAN0 signal: MCAN0_CANRX0 on PB8 mux A */
#define MUX_PB8A_MCAN0_CANRX0                      _UINT32_(0)  /**< MCAN0 signal line function value: MCAN0_CANRX0 */
#define PIO_PB8A_MCAN0_CANRX0                      (_UINT32_(1) << 8) /**< MCAN0 signal: MCAN0_CANRX0 */
#define PIN_PB7A_MCAN0_CANTX0                      _UINT32_(39) /**< MCAN0 signal: MCAN0_CANTX0 on PB7 mux A */
#define MUX_PB7A_MCAN0_CANTX0                      _UINT32_(0)  /**< MCAN0 signal line function value: MCAN0_CANTX0 */
#define PIO_PB7A_MCAN0_CANTX0                      (_UINT32_(1) << 7) /**< MCAN0 signal: MCAN0_CANTX0 */
/* ========== PIO definition for MCAN1 peripheral ========== */
#define PIN_PB9A_MCAN1_CANRX1                      _UINT32_(41) /**< MCAN1 signal: MCAN1_CANRX1 on PB9 mux A */
#define MUX_PB9A_MCAN1_CANRX1                      _UINT32_(0)  /**< MCAN1 signal line function value: MCAN1_CANRX1 */
#define PIO_PB9A_MCAN1_CANRX1                      (_UINT32_(1) << 9) /**< MCAN1 signal: MCAN1_CANRX1 */
#define PIN_PC12A_MCAN1_CANRX1                     _UINT32_(76) /**< MCAN1 signal: MCAN1_CANRX1 on PC12 mux A */
#define MUX_PC12A_MCAN1_CANRX1                     _UINT32_(0)  /**< MCAN1 signal line function value: MCAN1_CANRX1 */
#define PIO_PC12A_MCAN1_CANRX1                     (_UINT32_(1) << 12) /**< MCAN1 signal: MCAN1_CANRX1 */
#define PIN_PB10A_MCAN1_CANTX1                     _UINT32_(42) /**< MCAN1 signal: MCAN1_CANTX1 on PB10 mux A */
#define MUX_PB10A_MCAN1_CANTX1                     _UINT32_(0)  /**< MCAN1 signal line function value: MCAN1_CANTX1 */
#define PIO_PB10A_MCAN1_CANTX1                     (_UINT32_(1) << 10) /**< MCAN1 signal: MCAN1_CANTX1 */
#define PIN_PC13A_MCAN1_CANTX1                     _UINT32_(77) /**< MCAN1 signal: MCAN1_CANTX1 on PC13 mux A */
#define MUX_PC13A_MCAN1_CANTX1                     _UINT32_(0)  /**< MCAN1 signal line function value: MCAN1_CANTX1 */
#define PIO_PC13A_MCAN1_CANTX1                     (_UINT32_(1) << 13) /**< MCAN1 signal: MCAN1_CANTX1 */
/* ========== PIO definition for PCC peripheral ========== */
#define PIN_PA20D_PCC_PCCCLK                       _UINT32_(20) /**< PCC signal: PCC_PCCCLK on PA20 mux D */
#define MUX_PA20D_PCC_PCCCLK                       _UINT32_(3)  /**< PCC signal line function value: PCC_PCCCLK */
#define PIO_PA20D_PCC_PCCCLK                       (_UINT32_(1) << 20) /**< PCC signal: PCC_PCCCLK */
#define PIN_PA0D_PCC_PCCDATA0                      _UINT32_(0)  /**< PCC signal: PCC_PCCDATA0 on PA0 mux D */
#define MUX_PA0D_PCC_PCCDATA0                      _UINT32_(3)  /**< PCC signal line function value: PCC_PCCDATA0 */
#define PIO_PA0D_PCC_PCCDATA0                      (_UINT32_(1) << 0) /**< PCC signal: PCC_PCCDATA0 */
#define PIN_PA1D_PCC_PCCDATA1                      _UINT32_(1)  /**< PCC signal: PCC_PCCDATA1 on PA1 mux D */
#define MUX_PA1D_PCC_PCCDATA1                      _UINT32_(3)  /**< PCC signal line function value: PCC_PCCDATA1 */
#define PIO_PA1D_PCC_PCCDATA1                      (_UINT32_(1) << 1) /**< PCC signal: PCC_PCCDATA1 */
#define PIN_PA2D_PCC_PCCDATA2                      _UINT32_(2)  /**< PCC signal: PCC_PCCDATA2 on PA2 mux D */
#define MUX_PA2D_PCC_PCCDATA2                      _UINT32_(3)  /**< PCC signal line function value: PCC_PCCDATA2 */
#define PIO_PA2D_PCC_PCCDATA2                      (_UINT32_(1) << 2) /**< PCC signal: PCC_PCCDATA2 */
#define PIN_PA3D_PCC_PCCDATA3                      _UINT32_(3)  /**< PCC signal: PCC_PCCDATA3 on PA3 mux D */
#define MUX_PA3D_PCC_PCCDATA3                      _UINT32_(3)  /**< PCC signal line function value: PCC_PCCDATA3 */
#define PIO_PA3D_PCC_PCCDATA3                      (_UINT32_(1) << 3) /**< PCC signal: PCC_PCCDATA3 */
#define PIN_PA4D_PCC_PCCDATA4                      _UINT32_(4)  /**< PCC signal: PCC_PCCDATA4 on PA4 mux D */
#define MUX_PA4D_PCC_PCCDATA4                      _UINT32_(3)  /**< PCC signal line function value: PCC_PCCDATA4 */
#define PIO_PA4D_PCC_PCCDATA4                      (_UINT32_(1) << 4) /**< PCC signal: PCC_PCCDATA4 */
#define PIN_PA5D_PCC_PCCDATA5                      _UINT32_(5)  /**< PCC signal: PCC_PCCDATA5 on PA5 mux D */
#define MUX_PA5D_PCC_PCCDATA5                      _UINT32_(3)  /**< PCC signal line function value: PCC_PCCDATA5 */
#define PIO_PA5D_PCC_PCCDATA5                      (_UINT32_(1) << 5) /**< PCC signal: PCC_PCCDATA5 */
#define PIN_PA6D_PCC_PCCDATA6                      _UINT32_(6)  /**< PCC signal: PCC_PCCDATA6 on PA6 mux D */
#define MUX_PA6D_PCC_PCCDATA6                      _UINT32_(3)  /**< PCC signal line function value: PCC_PCCDATA6 */
#define PIO_PA6D_PCC_PCCDATA6                      (_UINT32_(1) << 6) /**< PCC signal: PCC_PCCDATA6 */
#define PIN_PA7D_PCC_PCCDATA7                      _UINT32_(7)  /**< PCC signal: PCC_PCCDATA7 on PA7 mux D */
#define MUX_PA7D_PCC_PCCDATA7                      _UINT32_(3)  /**< PCC signal line function value: PCC_PCCDATA7 */
#define PIO_PA7D_PCC_PCCDATA7                      (_UINT32_(1) << 7) /**< PCC signal: PCC_PCCDATA7 */
#define PIN_PA8D_PCC_PCCDATA8                      _UINT32_(8)  /**< PCC signal: PCC_PCCDATA8 on PA8 mux D */
#define MUX_PA8D_PCC_PCCDATA8                      _UINT32_(3)  /**< PCC signal line function value: PCC_PCCDATA8 */
#define PIO_PA8D_PCC_PCCDATA8                      (_UINT32_(1) << 8) /**< PCC signal: PCC_PCCDATA8 */
#define PIN_PA9D_PCC_PCCDATA9                      _UINT32_(9)  /**< PCC signal: PCC_PCCDATA9 on PA9 mux D */
#define MUX_PA9D_PCC_PCCDATA9                      _UINT32_(3)  /**< PCC signal line function value: PCC_PCCDATA9 */
#define PIO_PA9D_PCC_PCCDATA9                      (_UINT32_(1) << 9) /**< PCC signal: PCC_PCCDATA9 */
#define PIN_PA10D_PCC_PCCDATA10                    _UINT32_(10) /**< PCC signal: PCC_PCCDATA10 on PA10 mux D */
#define MUX_PA10D_PCC_PCCDATA10                    _UINT32_(3)  /**< PCC signal line function value: PCC_PCCDATA10 */
#define PIO_PA10D_PCC_PCCDATA10                    (_UINT32_(1) << 10) /**< PCC signal: PCC_PCCDATA10 */
#define PIN_PA11D_PCC_PCCDATA11                    _UINT32_(11) /**< PCC signal: PCC_PCCDATA11 on PA11 mux D */
#define MUX_PA11D_PCC_PCCDATA11                    _UINT32_(3)  /**< PCC signal line function value: PCC_PCCDATA11 */
#define PIO_PA11D_PCC_PCCDATA11                    (_UINT32_(1) << 11) /**< PCC signal: PCC_PCCDATA11 */
#define PIN_PA12D_PCC_PCCDATA12                    _UINT32_(12) /**< PCC signal: PCC_PCCDATA12 on PA12 mux D */
#define MUX_PA12D_PCC_PCCDATA12                    _UINT32_(3)  /**< PCC signal line function value: PCC_PCCDATA12 */
#define PIO_PA12D_PCC_PCCDATA12                    (_UINT32_(1) << 12) /**< PCC signal: PCC_PCCDATA12 */
#define PIN_PA13D_PCC_PCCDATA13                    _UINT32_(13) /**< PCC signal: PCC_PCCDATA13 on PA13 mux D */
#define MUX_PA13D_PCC_PCCDATA13                    _UINT32_(3)  /**< PCC signal line function value: PCC_PCCDATA13 */
#define PIO_PA13D_PCC_PCCDATA13                    (_UINT32_(1) << 13) /**< PCC signal: PCC_PCCDATA13 */
#define PIN_PA14D_PCC_PCCDATA14                    _UINT32_(14) /**< PCC signal: PCC_PCCDATA14 on PA14 mux D */
#define MUX_PA14D_PCC_PCCDATA14                    _UINT32_(3)  /**< PCC signal line function value: PCC_PCCDATA14 */
#define PIO_PA14D_PCC_PCCDATA14                    (_UINT32_(1) << 14) /**< PCC signal: PCC_PCCDATA14 */
#define PIN_PA15D_PCC_PCCDATA15                    _UINT32_(15) /**< PCC signal: PCC_PCCDATA15 on PA15 mux D */
#define MUX_PA15D_PCC_PCCDATA15                    _UINT32_(3)  /**< PCC signal line function value: PCC_PCCDATA15 */
#define PIO_PA15D_PCC_PCCDATA15                    (_UINT32_(1) << 15) /**< PCC signal: PCC_PCCDATA15 */
#define PIN_PA27D_PCC_PCCDEN1                      _UINT32_(27) /**< PCC signal: PCC_PCCDEN1 on PA27 mux D */
#define MUX_PA27D_PCC_PCCDEN1                      _UINT32_(3)  /**< PCC signal line function value: PCC_PCCDEN1 */
#define PIO_PA27D_PCC_PCCDEN1                      (_UINT32_(1) << 27) /**< PCC signal: PCC_PCCDEN1 */
#define PIN_PA25D_PCC_PCCDEN2                      _UINT32_(25) /**< PCC signal: PCC_PCCDEN2 on PA25 mux D */
#define MUX_PA25D_PCC_PCCDEN2                      _UINT32_(3)  /**< PCC signal line function value: PCC_PCCDEN2 */
#define PIO_PA25D_PCC_PCCDEN2                      (_UINT32_(1) << 25) /**< PCC signal: PCC_PCCDEN2 */
/* ========== PIO definition for PMC peripheral ========== */
#define PIN_PA19A_PMC_PCK0                         _UINT32_(19) /**< PMC signal: PMC_PCK0 on PA19 mux A */
#define MUX_PA19A_PMC_PCK0                         _UINT32_(0)  /**< PMC signal line function value: PMC_PCK0 */
#define PIO_PA19A_PMC_PCK0                         (_UINT32_(1) << 19) /**< PMC signal: PMC_PCK0 */
#define PIN_PA30A_PMC_PCK1                         _UINT32_(30) /**< PMC signal: PMC_PCK1 on PA30 mux A */
#define MUX_PA30A_PMC_PCK1                         _UINT32_(0)  /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PA30A_PMC_PCK1                         (_UINT32_(1) << 30) /**< PMC signal: PMC_PCK1 */
#define PIN_PA31A_PMC_PCK1                         _UINT32_(31) /**< PMC signal: PMC_PCK1 on PA31 mux A */
#define MUX_PA31A_PMC_PCK1                         _UINT32_(0)  /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PA31A_PMC_PCK1                         (_UINT32_(1) << 31) /**< PMC signal: PMC_PCK1 */
#define PIN_PD8A_PMC_PCK2                          _UINT32_(104) /**< PMC signal: PMC_PCK2 on PD8 mux A */
#define MUX_PD8A_PMC_PCK2                          _UINT32_(0)  /**< PMC signal line function value: PMC_PCK2 */
#define PIO_PD8A_PMC_PCK2                          (_UINT32_(1) << 8) /**< PMC signal: PMC_PCK2 */
/* ========== PIO definition for PWM0 peripheral ========== */
#define PIN_PA19B_PWM0_PWMC0_PWMEXTRG0             _UINT32_(19) /**< PWM0 signal: PWM0_PWMC0_PWMEXTRG0 on PA19 mux B */
#define MUX_PA19B_PWM0_PWMC0_PWMEXTRG0             _UINT32_(1)  /**< PWM0 signal line function value: PWM0_PWMC0_PWMEXTRG0 */
#define PIO_PA19B_PWM0_PWMC0_PWMEXTRG0             (_UINT32_(1) << 19) /**< PWM0 signal: PWM0_PWMC0_PWMEXTRG0 */
#define PIN_PB1B_PWM0_PWMC0_PWMEXTRG1              _UINT32_(33) /**< PWM0 signal: PWM0_PWMC0_PWMEXTRG1 on PB1 mux B */
#define MUX_PB1B_PWM0_PWMC0_PWMEXTRG1              _UINT32_(1)  /**< PWM0 signal line function value: PWM0_PWMC0_PWMEXTRG1 */
#define PIO_PB1B_PWM0_PWMC0_PWMEXTRG1              (_UINT32_(1) << 1) /**< PWM0 signal: PWM0_PWMC0_PWMEXTRG1 */
#define PIN_PA29D_PWM0_PWMC0_PWMFI0                _UINT32_(29) /**< PWM0 signal: PWM0_PWMC0_PWMFI0 on PA29 mux D */
#define MUX_PA29D_PWM0_PWMC0_PWMFI0                _UINT32_(3)  /**< PWM0 signal line function value: PWM0_PWMC0_PWMFI0 */
#define PIO_PA29D_PWM0_PWMC0_PWMFI0                (_UINT32_(1) << 29) /**< PWM0 signal: PWM0_PWMC0_PWMFI0 */
#define PIN_PA30D_PWM0_PWMC0_PWMFI1                _UINT32_(30) /**< PWM0 signal: PWM0_PWMC0_PWMFI1 on PA30 mux D */
#define MUX_PA30D_PWM0_PWMC0_PWMFI1                _UINT32_(3)  /**< PWM0 signal line function value: PWM0_PWMC0_PWMFI1 */
#define PIO_PA30D_PWM0_PWMC0_PWMFI1                (_UINT32_(1) << 30) /**< PWM0 signal: PWM0_PWMC0_PWMFI1 */
#define PIN_PA16C_PWM0_PWMC0_PWMFI2                _UINT32_(16) /**< PWM0 signal: PWM0_PWMC0_PWMFI2 on PA16 mux C */
#define MUX_PA16C_PWM0_PWMC0_PWMFI2                _UINT32_(2)  /**< PWM0 signal line function value: PWM0_PWMC0_PWMFI2 */
#define PIO_PA16C_PWM0_PWMC0_PWMFI2                (_UINT32_(1) << 16) /**< PWM0 signal: PWM0_PWMC0_PWMFI2 */
#define PIN_PB11A_PWM0_PWMC0_PWMH0                 _UINT32_(43) /**< PWM0 signal: PWM0_PWMC0_PWMH0 on PB11 mux A */
#define MUX_PB11A_PWM0_PWMC0_PWMH0                 _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWMC0_PWMH0 */
#define PIO_PB11A_PWM0_PWMC0_PWMH0                 (_UINT32_(1) << 11) /**< PWM0 signal: PWM0_PWMC0_PWMH0 */
#define PIN_PB13A_PWM0_PWMC0_PWMH1                 _UINT32_(45) /**< PWM0 signal: PWM0_PWMC0_PWMH1 on PB13 mux A */
#define MUX_PB13A_PWM0_PWMC0_PWMH1                 _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWMC0_PWMH1 */
#define PIO_PB13A_PWM0_PWMC0_PWMH1                 (_UINT32_(1) << 13) /**< PWM0 signal: PWM0_PWMC0_PWMH1 */
#define PIN_PB15A_PWM0_PWMC0_PWMH2                 _UINT32_(47) /**< PWM0 signal: PWM0_PWMC0_PWMH2 on PB15 mux A */
#define MUX_PB15A_PWM0_PWMC0_PWMH2                 _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWMC0_PWMH2 */
#define PIO_PB15A_PWM0_PWMC0_PWMH2                 (_UINT32_(1) << 15) /**< PWM0 signal: PWM0_PWMC0_PWMH2 */
#define PIN_PB17A_PWM0_PWMC0_PWMH3                 _UINT32_(49) /**< PWM0 signal: PWM0_PWMC0_PWMH3 on PB17 mux A */
#define MUX_PB17A_PWM0_PWMC0_PWMH3                 _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWMC0_PWMH3 */
#define PIO_PB17A_PWM0_PWMC0_PWMH3                 (_UINT32_(1) << 17) /**< PWM0 signal: PWM0_PWMC0_PWMH3 */
#define PIN_PB12A_PWM0_PWMC0_PWML0                 _UINT32_(44) /**< PWM0 signal: PWM0_PWMC0_PWML0 on PB12 mux A */
#define MUX_PB12A_PWM0_PWMC0_PWML0                 _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWMC0_PWML0 */
#define PIO_PB12A_PWM0_PWMC0_PWML0                 (_UINT32_(1) << 12) /**< PWM0 signal: PWM0_PWMC0_PWML0 */
#define PIN_PB14A_PWM0_PWMC0_PWML1                 _UINT32_(46) /**< PWM0 signal: PWM0_PWMC0_PWML1 on PB14 mux A */
#define MUX_PB14A_PWM0_PWMC0_PWML1                 _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWMC0_PWML1 */
#define PIO_PB14A_PWM0_PWMC0_PWML1                 (_UINT32_(1) << 14) /**< PWM0 signal: PWM0_PWMC0_PWML1 */
#define PIN_PB16A_PWM0_PWMC0_PWML2                 _UINT32_(48) /**< PWM0 signal: PWM0_PWMC0_PWML2 on PB16 mux A */
#define MUX_PB16A_PWM0_PWMC0_PWML2                 _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWMC0_PWML2 */
#define PIO_PB16A_PWM0_PWMC0_PWML2                 (_UINT32_(1) << 16) /**< PWM0 signal: PWM0_PWMC0_PWML2 */
#define PIN_PB18A_PWM0_PWMC0_PWML3                 _UINT32_(50) /**< PWM0 signal: PWM0_PWMC0_PWML3 on PB18 mux A */
#define MUX_PB18A_PWM0_PWMC0_PWML3                 _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWMC0_PWML3 */
#define PIO_PB18A_PWM0_PWMC0_PWML3                 (_UINT32_(1) << 18) /**< PWM0 signal: PWM0_PWMC0_PWML3 */
/* ========== PIO definition for PWM1 peripheral ========== */
#define PIN_PD5A_PWM1_PWMC1_PWMEXTRG0              _UINT32_(101) /**< PWM1 signal: PWM1_PWMC1_PWMEXTRG0 on PD5 mux A */
#define MUX_PD5A_PWM1_PWMC1_PWMEXTRG0              _UINT32_(0)  /**< PWM1 signal line function value: PWM1_PWMC1_PWMEXTRG0 */
#define PIO_PD5A_PWM1_PWMC1_PWMEXTRG0              (_UINT32_(1) << 5) /**< PWM1 signal: PWM1_PWMC1_PWMEXTRG0 */
#define PIN_PC19C_PWM1_PWMC1_PWMEXTRG1             _UINT32_(83) /**< PWM1 signal: PWM1_PWMC1_PWMEXTRG1 on PC19 mux C */
#define MUX_PC19C_PWM1_PWMC1_PWMEXTRG1             _UINT32_(2)  /**< PWM1 signal line function value: PWM1_PWMC1_PWMEXTRG1 */
#define PIO_PC19C_PWM1_PWMC1_PWMEXTRG1             (_UINT32_(1) << 19) /**< PWM1 signal: PWM1_PWMC1_PWMEXTRG1 */
#define PIN_PD4A_PWM1_PWMC1_PWMFI0                 _UINT32_(100) /**< PWM1 signal: PWM1_PWMC1_PWMFI0 on PD4 mux A */
#define MUX_PD4A_PWM1_PWMC1_PWMFI0                 _UINT32_(0)  /**< PWM1 signal line function value: PWM1_PWMC1_PWMFI0 */
#define PIO_PD4A_PWM1_PWMC1_PWMFI0                 (_UINT32_(1) << 4) /**< PWM1 signal: PWM1_PWMC1_PWMFI0 */
#define PIN_PC16C_PWM1_PWMC1_PWMFI1                _UINT32_(80) /**< PWM1 signal: PWM1_PWMC1_PWMFI1 on PC16 mux C */
#define MUX_PC16C_PWM1_PWMC1_PWMFI1                _UINT32_(2)  /**< PWM1 signal line function value: PWM1_PWMC1_PWMFI1 */
#define PIO_PC16C_PWM1_PWMC1_PWMFI1                (_UINT32_(1) << 16) /**< PWM1 signal: PWM1_PWMC1_PWMFI1 */
#define PIN_PC18C_PWM1_PWMC1_PWMFI2                _UINT32_(82) /**< PWM1 signal: PWM1_PWMC1_PWMFI2 on PC18 mux C */
#define MUX_PC18C_PWM1_PWMC1_PWMFI2                _UINT32_(2)  /**< PWM1 signal line function value: PWM1_PWMC1_PWMFI2 */
#define PIO_PC18C_PWM1_PWMC1_PWMFI2                (_UINT32_(1) << 18) /**< PWM1 signal: PWM1_PWMC1_PWMFI2 */
#define PIN_PC4A_PWM1_PWMC1_PWMH0                  _UINT32_(68) /**< PWM1 signal: PWM1_PWMC1_PWMH0 on PC4 mux A */
#define MUX_PC4A_PWM1_PWMC1_PWMH0                  _UINT32_(0)  /**< PWM1 signal line function value: PWM1_PWMC1_PWMH0 */
#define PIO_PC4A_PWM1_PWMC1_PWMH0                  (_UINT32_(1) << 4) /**< PWM1 signal: PWM1_PWMC1_PWMH0 */
#define PIN_PC6A_PWM1_PWMC1_PWMH1                  _UINT32_(70) /**< PWM1 signal: PWM1_PWMC1_PWMH1 on PC6 mux A */
#define MUX_PC6A_PWM1_PWMC1_PWMH1                  _UINT32_(0)  /**< PWM1 signal line function value: PWM1_PWMC1_PWMH1 */
#define PIO_PC6A_PWM1_PWMC1_PWMH1                  (_UINT32_(1) << 6) /**< PWM1 signal: PWM1_PWMC1_PWMH1 */
#define PIN_PC8A_PWM1_PWMC1_PWMH2                  _UINT32_(72) /**< PWM1 signal: PWM1_PWMC1_PWMH2 on PC8 mux A */
#define MUX_PC8A_PWM1_PWMC1_PWMH2                  _UINT32_(0)  /**< PWM1 signal line function value: PWM1_PWMC1_PWMH2 */
#define PIO_PC8A_PWM1_PWMC1_PWMH2                  (_UINT32_(1) << 8) /**< PWM1 signal: PWM1_PWMC1_PWMH2 */
#define PIN_PC10A_PWM1_PWMC1_PWMH3                 _UINT32_(74) /**< PWM1 signal: PWM1_PWMC1_PWMH3 on PC10 mux A */
#define MUX_PC10A_PWM1_PWMC1_PWMH3                 _UINT32_(0)  /**< PWM1 signal line function value: PWM1_PWMC1_PWMH3 */
#define PIO_PC10A_PWM1_PWMC1_PWMH3                 (_UINT32_(1) << 10) /**< PWM1 signal: PWM1_PWMC1_PWMH3 */
#define PIN_PC5A_PWM1_PWMC1_PWML0                  _UINT32_(69) /**< PWM1 signal: PWM1_PWMC1_PWML0 on PC5 mux A */
#define MUX_PC5A_PWM1_PWMC1_PWML0                  _UINT32_(0)  /**< PWM1 signal line function value: PWM1_PWMC1_PWML0 */
#define PIO_PC5A_PWM1_PWMC1_PWML0                  (_UINT32_(1) << 5) /**< PWM1 signal: PWM1_PWMC1_PWML0 */
#define PIN_PC7A_PWM1_PWMC1_PWML1                  _UINT32_(71) /**< PWM1 signal: PWM1_PWMC1_PWML1 on PC7 mux A */
#define MUX_PC7A_PWM1_PWMC1_PWML1                  _UINT32_(0)  /**< PWM1 signal line function value: PWM1_PWMC1_PWML1 */
#define PIO_PC7A_PWM1_PWMC1_PWML1                  (_UINT32_(1) << 7) /**< PWM1 signal: PWM1_PWMC1_PWML1 */
#define PIN_PC9A_PWM1_PWMC1_PWML2                  _UINT32_(73) /**< PWM1 signal: PWM1_PWMC1_PWML2 on PC9 mux A */
#define MUX_PC9A_PWM1_PWMC1_PWML2                  _UINT32_(0)  /**< PWM1 signal line function value: PWM1_PWMC1_PWML2 */
#define PIO_PC9A_PWM1_PWMC1_PWML2                  (_UINT32_(1) << 9) /**< PWM1 signal: PWM1_PWMC1_PWML2 */
#define PIN_PC11A_PWM1_PWMC1_PWML3                 _UINT32_(75) /**< PWM1 signal: PWM1_PWMC1_PWML3 on PC11 mux A */
#define MUX_PC11A_PWM1_PWMC1_PWML3                 _UINT32_(0)  /**< PWM1 signal line function value: PWM1_PWMC1_PWML3 */
#define PIO_PC11A_PWM1_PWMC1_PWML3                 (_UINT32_(1) << 11) /**< PWM1 signal: PWM1_PWMC1_PWML3 */
/* ========== PIO definition for RTC peripheral ========== */
#define PIN_PB2A_RTC_RTCOUT0                       _UINT32_(34) /**< RTC signal: RTC_RTCOUT0 on PB2 mux A */
#define MUX_PB2A_RTC_RTCOUT0                       _UINT32_(0)  /**< RTC signal line function value: RTC_RTCOUT0 */
#define PIO_PB2A_RTC_RTCOUT0                       (_UINT32_(1) << 2) /**< RTC signal: RTC_RTCOUT0 */
#define PIN_PD6A_RTC_RTCOUT1                       _UINT32_(102) /**< RTC signal: RTC_RTCOUT1 on PD6 mux A */
#define MUX_PD6A_RTC_RTCOUT1                       _UINT32_(0)  /**< RTC signal line function value: RTC_RTCOUT1 */
#define PIO_PD6A_RTC_RTCOUT1                       (_UINT32_(1) << 6) /**< RTC signal: RTC_RTCOUT1 */
#define PIN_PD9B_RTC_RTCOUT1                       _UINT32_(105) /**< RTC signal: RTC_RTCOUT1 on PD9 mux B */
#define MUX_PD9B_RTC_RTCOUT1                       _UINT32_(1)  /**< RTC signal line function value: RTC_RTCOUT1 */
#define PIO_PD9B_RTC_RTCOUT1                       (_UINT32_(1) << 9) /**< RTC signal: RTC_RTCOUT1 */
/* ========== PIO definition for SPW peripheral ========== */
#define PIN_PD11A_SPW_SPWDINN0                     _UINT32_(107) /**< SPW signal: SPW_SPWDINN0 on PD11 mux A */
#define MUX_PD11A_SPW_SPWDINN0                     _UINT32_(0)  /**< SPW signal line function value: SPW_SPWDINN0 */
#define PIO_PD11A_SPW_SPWDINN0                     (_UINT32_(1) << 11) /**< SPW signal: SPW_SPWDINN0 */
#define PIN_PD19A_SPW_SPWDINN1                     _UINT32_(115) /**< SPW signal: SPW_SPWDINN1 on PD19 mux A */
#define MUX_PD19A_SPW_SPWDINN1                     _UINT32_(0)  /**< SPW signal line function value: SPW_SPWDINN1 */
#define PIO_PD19A_SPW_SPWDINN1                     (_UINT32_(1) << 19) /**< SPW signal: SPW_SPWDINN1 */
#define PIN_PD10A_SPW_SPWDINP0                     _UINT32_(106) /**< SPW signal: SPW_SPWDINP0 on PD10 mux A */
#define MUX_PD10A_SPW_SPWDINP0                     _UINT32_(0)  /**< SPW signal line function value: SPW_SPWDINP0 */
#define PIO_PD10A_SPW_SPWDINP0                     (_UINT32_(1) << 10) /**< SPW signal: SPW_SPWDINP0 */
#define PIN_PD18A_SPW_SPWDINP1                     _UINT32_(114) /**< SPW signal: SPW_SPWDINP1 on PD18 mux A */
#define MUX_PD18A_SPW_SPWDINP1                     _UINT32_(0)  /**< SPW signal line function value: SPW_SPWDINP1 */
#define PIO_PD18A_SPW_SPWDINP1                     (_UINT32_(1) << 18) /**< SPW signal: SPW_SPWDINP1 */
#define PIN_PD13A_SPW_SPWDOUTN0                    _UINT32_(109) /**< SPW signal: SPW_SPWDOUTN0 on PD13 mux A */
#define MUX_PD13A_SPW_SPWDOUTN0                    _UINT32_(0)  /**< SPW signal line function value: SPW_SPWDOUTN0 */
#define PIO_PD13A_SPW_SPWDOUTN0                    (_UINT32_(1) << 13) /**< SPW signal: SPW_SPWDOUTN0 */
#define PIN_PD21A_SPW_SPWDOUTN1                    _UINT32_(117) /**< SPW signal: SPW_SPWDOUTN1 on PD21 mux A */
#define MUX_PD21A_SPW_SPWDOUTN1                    _UINT32_(0)  /**< SPW signal line function value: SPW_SPWDOUTN1 */
#define PIO_PD21A_SPW_SPWDOUTN1                    (_UINT32_(1) << 21) /**< SPW signal: SPW_SPWDOUTN1 */
#define PIN_PD12A_SPW_SPWDOUTP0                    _UINT32_(108) /**< SPW signal: SPW_SPWDOUTP0 on PD12 mux A */
#define MUX_PD12A_SPW_SPWDOUTP0                    _UINT32_(0)  /**< SPW signal line function value: SPW_SPWDOUTP0 */
#define PIO_PD12A_SPW_SPWDOUTP0                    (_UINT32_(1) << 12) /**< SPW signal: SPW_SPWDOUTP0 */
#define PIN_PD20A_SPW_SPWDOUTP1                    _UINT32_(116) /**< SPW signal: SPW_SPWDOUTP1 on PD20 mux A */
#define MUX_PD20A_SPW_SPWDOUTP1                    _UINT32_(0)  /**< SPW signal line function value: SPW_SPWDOUTP1 */
#define PIO_PD20A_SPW_SPWDOUTP1                    (_UINT32_(1) << 20) /**< SPW signal: SPW_SPWDOUTP1 */
#define PIN_PD17A_SPW_SPWSINN0                     _UINT32_(113) /**< SPW signal: SPW_SPWSINN0 on PD17 mux A */
#define MUX_PD17A_SPW_SPWSINN0                     _UINT32_(0)  /**< SPW signal line function value: SPW_SPWSINN0 */
#define PIO_PD17A_SPW_SPWSINN0                     (_UINT32_(1) << 17) /**< SPW signal: SPW_SPWSINN0 */
#define PIN_PD25A_SPW_SPWSINN1                     _UINT32_(121) /**< SPW signal: SPW_SPWSINN1 on PD25 mux A */
#define MUX_PD25A_SPW_SPWSINN1                     _UINT32_(0)  /**< SPW signal line function value: SPW_SPWSINN1 */
#define PIO_PD25A_SPW_SPWSINN1                     (_UINT32_(1) << 25) /**< SPW signal: SPW_SPWSINN1 */
#define PIN_PD16A_SPW_SPWSINP0                     _UINT32_(112) /**< SPW signal: SPW_SPWSINP0 on PD16 mux A */
#define MUX_PD16A_SPW_SPWSINP0                     _UINT32_(0)  /**< SPW signal line function value: SPW_SPWSINP0 */
#define PIO_PD16A_SPW_SPWSINP0                     (_UINT32_(1) << 16) /**< SPW signal: SPW_SPWSINP0 */
#define PIN_PD24A_SPW_SPWSINP1                     _UINT32_(120) /**< SPW signal: SPW_SPWSINP1 on PD24 mux A */
#define MUX_PD24A_SPW_SPWSINP1                     _UINT32_(0)  /**< SPW signal line function value: SPW_SPWSINP1 */
#define PIO_PD24A_SPW_SPWSINP1                     (_UINT32_(1) << 24) /**< SPW signal: SPW_SPWSINP1 */
#define PIN_PD15A_SPW_SPWSOUTN0                    _UINT32_(111) /**< SPW signal: SPW_SPWSOUTN0 on PD15 mux A */
#define MUX_PD15A_SPW_SPWSOUTN0                    _UINT32_(0)  /**< SPW signal line function value: SPW_SPWSOUTN0 */
#define PIO_PD15A_SPW_SPWSOUTN0                    (_UINT32_(1) << 15) /**< SPW signal: SPW_SPWSOUTN0 */
#define PIN_PD23A_SPW_SPWSOUTN1                    _UINT32_(119) /**< SPW signal: SPW_SPWSOUTN1 on PD23 mux A */
#define MUX_PD23A_SPW_SPWSOUTN1                    _UINT32_(0)  /**< SPW signal line function value: SPW_SPWSOUTN1 */
#define PIO_PD23A_SPW_SPWSOUTN1                    (_UINT32_(1) << 23) /**< SPW signal: SPW_SPWSOUTN1 */
#define PIN_PD14A_SPW_SPWSOUTP0                    _UINT32_(110) /**< SPW signal: SPW_SPWSOUTP0 on PD14 mux A */
#define MUX_PD14A_SPW_SPWSOUTP0                    _UINT32_(0)  /**< SPW signal line function value: SPW_SPWSOUTP0 */
#define PIO_PD14A_SPW_SPWSOUTP0                    (_UINT32_(1) << 14) /**< SPW signal: SPW_SPWSOUTP0 */
#define PIN_PD22A_SPW_SPWSOUTP1                    _UINT32_(118) /**< SPW signal: SPW_SPWSOUTP1 on PD22 mux A */
#define MUX_PD22A_SPW_SPWSOUTP1                    _UINT32_(0)  /**< SPW signal line function value: SPW_SPWSOUTP1 */
#define PIO_PD22A_SPW_SPWSOUTP1                    (_UINT32_(1) << 22) /**< SPW signal: SPW_SPWSOUTP1 */
/* ========== PIO definition for TC0 peripheral ========== */
#define PIN_PB18C_TC0_TCLK0                        _UINT32_(50) /**< TC0 signal: TC0_TCLK0 on PB18 mux C */
#define MUX_PB18C_TC0_TCLK0                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TCLK0 */
#define PIO_PB18C_TC0_TCLK0                        (_UINT32_(1) << 18) /**< TC0 signal: TC0_TCLK0 */
#define PIN_PA20C_TC0_TCLK1                        _UINT32_(20) /**< TC0 signal: TC0_TCLK1 on PA20 mux C */
#define MUX_PA20C_TC0_TCLK1                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TCLK1 */
#define PIO_PA20C_TC0_TCLK1                        (_UINT32_(1) << 20) /**< TC0 signal: TC0_TCLK1 */
#define PIN_PA25C_TC0_TCLK2                        _UINT32_(25) /**< TC0 signal: TC0_TCLK2 on PA25 mux C */
#define MUX_PA25C_TC0_TCLK2                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TCLK2 */
#define PIO_PA25C_TC0_TCLK2                        (_UINT32_(1) << 25) /**< TC0 signal: TC0_TCLK2 */
#define PIN_PB19C_TC0_TCLK2                        _UINT32_(51) /**< TC0 signal: TC0_TCLK2 on PB19 mux C */
#define MUX_PB19C_TC0_TCLK2                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TCLK2 */
#define PIO_PB19C_TC0_TCLK2                        (_UINT32_(1) << 19) /**< TC0 signal: TC0_TCLK2 */
#define PIN_PA29C_TC0_TIOA0                        _UINT32_(29) /**< TC0 signal: TC0_TIOA0 on PA29 mux C */
#define MUX_PA29C_TC0_TIOA0                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TIOA0 */
#define PIO_PA29C_TC0_TIOA0                        (_UINT32_(1) << 29) /**< TC0 signal: TC0_TIOA0 */
#define PIN_PA27C_TC0_TIOA1                        _UINT32_(27) /**< TC0 signal: TC0_TIOA1 on PA27 mux C */
#define MUX_PA27C_TC0_TIOA1                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TIOA1 */
#define PIO_PA27C_TC0_TIOA1                        (_UINT32_(1) << 27) /**< TC0 signal: TC0_TIOA1 */
#define PIN_PA28C_TC0_TIOA2                        _UINT32_(28) /**< TC0 signal: TC0_TIOA2 on PA28 mux C */
#define MUX_PA28C_TC0_TIOA2                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TIOA2 */
#define PIO_PA28C_TC0_TIOA2                        (_UINT32_(1) << 28) /**< TC0 signal: TC0_TIOA2 */
#define PIN_PB0C_TC0_TIOA2                         _UINT32_(32) /**< TC0 signal: TC0_TIOA2 on PB0 mux C */
#define MUX_PB0C_TC0_TIOA2                         _UINT32_(2)  /**< TC0 signal line function value: TC0_TIOA2 */
#define PIO_PB0C_TC0_TIOA2                         (_UINT32_(1) << 0) /**< TC0 signal: TC0_TIOA2 */
#define PIN_PA30C_TC0_TIOB0                        _UINT32_(30) /**< TC0 signal: TC0_TIOB0 on PA30 mux C */
#define MUX_PA30C_TC0_TIOB0                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TIOB0 */
#define PIO_PA30C_TC0_TIOB0                        (_UINT32_(1) << 30) /**< TC0 signal: TC0_TIOB0 */
#define PIN_PB17C_TC0_TIOB1                        _UINT32_(49) /**< TC0 signal: TC0_TIOB1 on PB17 mux C */
#define MUX_PB17C_TC0_TIOB1                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TIOB1 */
#define PIO_PB17C_TC0_TIOB1                        (_UINT32_(1) << 17) /**< TC0 signal: TC0_TIOB1 */
#define PIN_PA26C_TC0_TIOB2                        _UINT32_(26) /**< TC0 signal: TC0_TIOB2 on PA26 mux C */
#define MUX_PA26C_TC0_TIOB2                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TIOB2 */
#define PIO_PA26C_TC0_TIOB2                        (_UINT32_(1) << 26) /**< TC0 signal: TC0_TIOB2 */
/* ========== PIO definition for TC1 peripheral ========== */
#define PIN_PB11C_TC1_TCLK3                        _UINT32_(43) /**< TC1 signal: TC1_TCLK3 on PB11 mux C */
#define MUX_PB11C_TC1_TCLK3                        _UINT32_(2)  /**< TC1 signal line function value: TC1_TCLK3 */
#define PIO_PB11C_TC1_TCLK3                        (_UINT32_(1) << 11) /**< TC1 signal: TC1_TCLK3 */
#define PIN_PB12C_TC1_TCLK4                        _UINT32_(44) /**< TC1 signal: TC1_TCLK4 on PB12 mux C */
#define MUX_PB12C_TC1_TCLK4                        _UINT32_(2)  /**< TC1 signal line function value: TC1_TCLK4 */
#define PIO_PB12C_TC1_TCLK4                        (_UINT32_(1) << 12) /**< TC1 signal: TC1_TCLK4 */
#define PIN_PB1C_TC1_TCLK5                         _UINT32_(33) /**< TC1 signal: TC1_TCLK5 on PB1 mux C */
#define MUX_PB1C_TC1_TCLK5                         _UINT32_(2)  /**< TC1 signal line function value: TC1_TCLK5 */
#define PIO_PB1C_TC1_TCLK5                         (_UINT32_(1) << 1) /**< TC1 signal: TC1_TCLK5 */
#define PIN_PB7C_TC1_TIOA3                         _UINT32_(39) /**< TC1 signal: TC1_TIOA3 on PB7 mux C */
#define MUX_PB7C_TC1_TIOA3                         _UINT32_(2)  /**< TC1 signal line function value: TC1_TIOA3 */
#define PIO_PB7C_TC1_TIOA3                         (_UINT32_(1) << 7) /**< TC1 signal: TC1_TIOA3 */
#define PIN_PB13C_TC1_TIOA4                        _UINT32_(45) /**< TC1 signal: TC1_TIOA4 on PB13 mux C */
#define MUX_PB13C_TC1_TIOA4                        _UINT32_(2)  /**< TC1 signal line function value: TC1_TIOA4 */
#define PIO_PB13C_TC1_TIOA4                        (_UINT32_(1) << 13) /**< TC1 signal: TC1_TIOA4 */
#define PIN_PB16C_TC1_TIOA5                        _UINT32_(48) /**< TC1 signal: TC1_TIOA5 on PB16 mux C */
#define MUX_PB16C_TC1_TIOA5                        _UINT32_(2)  /**< TC1 signal line function value: TC1_TIOA5 */
#define PIO_PB16C_TC1_TIOA5                        (_UINT32_(1) << 16) /**< TC1 signal: TC1_TIOA5 */
#define PIN_PB8C_TC1_TIOB3                         _UINT32_(40) /**< TC1 signal: TC1_TIOB3 on PB8 mux C */
#define MUX_PB8C_TC1_TIOB3                         _UINT32_(2)  /**< TC1 signal line function value: TC1_TIOB3 */
#define PIO_PB8C_TC1_TIOB3                         (_UINT32_(1) << 8) /**< TC1 signal: TC1_TIOB3 */
#define PIN_PB14C_TC1_TIOB4                        _UINT32_(46) /**< TC1 signal: TC1_TIOB4 on PB14 mux C */
#define MUX_PB14C_TC1_TIOB4                        _UINT32_(2)  /**< TC1 signal line function value: TC1_TIOB4 */
#define PIO_PB14C_TC1_TIOB4                        (_UINT32_(1) << 14) /**< TC1 signal: TC1_TIOB4 */
#define PIN_PB15C_TC1_TIOB5                        _UINT32_(47) /**< TC1 signal: TC1_TIOB5 on PB15 mux C */
#define MUX_PB15C_TC1_TIOB5                        _UINT32_(2)  /**< TC1 signal line function value: TC1_TIOB5 */
#define PIO_PB15C_TC1_TIOB5                        (_UINT32_(1) << 15) /**< TC1 signal: TC1_TIOB5 */
/* ========== PIO definition for TC2 peripheral ========== */
#define PIN_PC11C_TC2_TCLK6                        _UINT32_(75) /**< TC2 signal: TC2_TCLK6 on PC11 mux C */
#define MUX_PC11C_TC2_TCLK6                        _UINT32_(2)  /**< TC2 signal line function value: TC2_TCLK6 */
#define PIO_PC11C_TC2_TCLK6                        (_UINT32_(1) << 11) /**< TC2 signal: TC2_TCLK6 */
#define PIN_PC10C_TC2_TCLK7                        _UINT32_(74) /**< TC2 signal: TC2_TCLK7 on PC10 mux C */
#define MUX_PC10C_TC2_TCLK7                        _UINT32_(2)  /**< TC2 signal line function value: TC2_TCLK7 */
#define PIO_PC10C_TC2_TCLK7                        (_UINT32_(1) << 10) /**< TC2 signal: TC2_TCLK7 */
#define PIN_PC26C_TC2_TCLK8                        _UINT32_(90) /**< TC2 signal: TC2_TCLK8 on PC26 mux C */
#define MUX_PC26C_TC2_TCLK8                        _UINT32_(2)  /**< TC2 signal line function value: TC2_TCLK8 */
#define PIO_PC26C_TC2_TCLK8                        (_UINT32_(1) << 26) /**< TC2 signal: TC2_TCLK8 */
#define PIN_PC8C_TC2_TIOA6                         _UINT32_(72) /**< TC2 signal: TC2_TIOA6 on PC8 mux C */
#define MUX_PC8C_TC2_TIOA6                         _UINT32_(2)  /**< TC2 signal line function value: TC2_TIOA6 */
#define PIO_PC8C_TC2_TIOA6                         (_UINT32_(1) << 8) /**< TC2 signal: TC2_TIOA6 */
#define PIN_PC14C_TC2_TIOA7                        _UINT32_(78) /**< TC2 signal: TC2_TIOA7 on PC14 mux C */
#define MUX_PC14C_TC2_TIOA7                        _UINT32_(2)  /**< TC2 signal line function value: TC2_TIOA7 */
#define PIO_PC14C_TC2_TIOA7                        (_UINT32_(1) << 14) /**< TC2 signal: TC2_TIOA7 */
#define PIN_PC27C_TC2_TIOA8                        _UINT32_(91) /**< TC2 signal: TC2_TIOA8 on PC27 mux C */
#define MUX_PC27C_TC2_TIOA8                        _UINT32_(2)  /**< TC2 signal line function value: TC2_TIOA8 */
#define PIO_PC27C_TC2_TIOA8                        (_UINT32_(1) << 27) /**< TC2 signal: TC2_TIOA8 */
#define PIN_PC9C_TC2_TIOB6                         _UINT32_(73) /**< TC2 signal: TC2_TIOB6 on PC9 mux C */
#define MUX_PC9C_TC2_TIOB6                         _UINT32_(2)  /**< TC2 signal line function value: TC2_TIOB6 */
#define PIO_PC9C_TC2_TIOB6                         (_UINT32_(1) << 9) /**< TC2 signal: TC2_TIOB6 */
#define PIN_PC15C_TC2_TIOB7                        _UINT32_(79) /**< TC2 signal: TC2_TIOB7 on PC15 mux C */
#define MUX_PC15C_TC2_TIOB7                        _UINT32_(2)  /**< TC2 signal line function value: TC2_TIOB7 */
#define PIO_PC15C_TC2_TIOB7                        (_UINT32_(1) << 15) /**< TC2 signal: TC2_TIOB7 */
#define PIN_PC28C_TC2_TIOB8                        _UINT32_(92) /**< TC2 signal: TC2_TIOB8 on PC28 mux C */
#define MUX_PC28C_TC2_TIOB8                        _UINT32_(2)  /**< TC2 signal line function value: TC2_TIOB8 */
#define PIO_PC28C_TC2_TIOB8                        (_UINT32_(1) << 28) /**< TC2 signal: TC2_TIOB8 */
/* ========== PIO definition for ICE peripheral ========== */
#define PIN_PB24A_ICE_SWDCLK                       _UINT32_(56) /**< ICE signal: ICE_SWDCLK on PB24 mux A */
#define MUX_PB24A_ICE_SWDCLK                       _UINT32_(0)  /**< ICE signal line function value: ICE_SWDCLK */
#define PIO_PB24A_ICE_SWDCLK                       (_UINT32_(1) << 24) /**< ICE signal: ICE_SWDCLK */
#define PIN_PB23A_ICE_SWDIO                        _UINT32_(55) /**< ICE signal: ICE_SWDIO on PB23 mux A */
#define MUX_PB23A_ICE_SWDIO                        _UINT32_(0)  /**< ICE signal line function value: ICE_SWDIO */
#define PIO_PB23A_ICE_SWDIO                        (_UINT32_(1) << 23) /**< ICE signal: ICE_SWDIO */
#define PIN_PB24A_ICE_TCK                          _UINT32_(56) /**< ICE signal: ICE_TCK on PB24 mux A */
#define MUX_PB24A_ICE_TCK                          _UINT32_(0)  /**< ICE signal line function value: ICE_TCK */
#define PIO_PB24A_ICE_TCK                          (_UINT32_(1) << 24) /**< ICE signal: ICE_TCK */
#define PIN_PA26E_ICE_TDI                          _UINT32_(26) /**< ICE signal: ICE_TDI on PA26 mux E */
#define MUX_PA26E_ICE_TDI                          _UINT32_(4)  /**< ICE signal line function value: ICE_TDI */
#define PIO_PA26E_ICE_TDI                          (_UINT32_(1) << 26) /**< ICE signal: ICE_TDI */
#define PIN_PA25E_ICE_TDO                          _UINT32_(25) /**< ICE signal: ICE_TDO on PA25 mux E */
#define MUX_PA25E_ICE_TDO                          _UINT32_(4)  /**< ICE signal line function value: ICE_TDO */
#define PIO_PA25E_ICE_TDO                          (_UINT32_(1) << 25) /**< ICE signal: ICE_TDO */
#define PIN_PB23A_ICE_TMS                          _UINT32_(55) /**< ICE signal: ICE_TMS on PB23 mux A */
#define MUX_PB23A_ICE_TMS                          _UINT32_(0)  /**< ICE signal line function value: ICE_TMS */
#define PIO_PB23A_ICE_TMS                          (_UINT32_(1) << 23) /**< ICE signal: ICE_TMS */
#define PIN_PA25E_ICE_TRACESWO                     _UINT32_(25) /**< ICE signal: ICE_TRACESWO on PA25 mux E */
#define MUX_PA25E_ICE_TRACESWO                     _UINT32_(4)  /**< ICE signal line function value: ICE_TRACESWO */
#define PIO_PA25E_ICE_TRACESWO                     (_UINT32_(1) << 25) /**< ICE signal: ICE_TRACESWO */
/* ========== PIO definition for TPIU peripheral ========== */
#define PIN_PA20E_TPIU_TRACECLK                    _UINT32_(20) /**< TPIU signal: TPIU_TRACECLK on PA20 mux E */
#define MUX_PA20E_TPIU_TRACECLK                    _UINT32_(4)  /**< TPIU signal line function value: TPIU_TRACECLK */
#define PIO_PA20E_TPIU_TRACECLK                    (_UINT32_(1) << 20) /**< TPIU signal: TPIU_TRACECLK */
#define PIN_PA29E_TPIU_TRACED0                     _UINT32_(29) /**< TPIU signal: TPIU_TRACED0 on PA29 mux E */
#define MUX_PA29E_TPIU_TRACED0                     _UINT32_(4)  /**< TPIU signal line function value: TPIU_TRACED0 */
#define PIO_PA29E_TPIU_TRACED0                     (_UINT32_(1) << 29) /**< TPIU signal: TPIU_TRACED0 */
#define PIN_PA30E_TPIU_TRACED1                     _UINT32_(30) /**< TPIU signal: TPIU_TRACED1 on PA30 mux E */
#define MUX_PA30E_TPIU_TRACED1                     _UINT32_(4)  /**< TPIU signal line function value: TPIU_TRACED1 */
#define PIO_PA30E_TPIU_TRACED1                     (_UINT32_(1) << 30) /**< TPIU signal: TPIU_TRACED1 */
#define PIN_PA28E_TPIU_TRACED2                     _UINT32_(28) /**< TPIU signal: TPIU_TRACED2 on PA28 mux E */
#define MUX_PA28E_TPIU_TRACED2                     _UINT32_(4)  /**< TPIU signal line function value: TPIU_TRACED2 */
#define PIO_PA28E_TPIU_TRACED2                     (_UINT32_(1) << 28) /**< TPIU signal: TPIU_TRACED2 */
#define PIN_PA27E_TPIU_TRACED3                     _UINT32_(27) /**< TPIU signal: TPIU_TRACED3 on PA27 mux E */
#define MUX_PA27E_TPIU_TRACED3                     _UINT32_(4)  /**< TPIU signal line function value: TPIU_TRACED3 */
#define PIO_PA27E_TPIU_TRACED3                     (_UINT32_(1) << 27) /**< TPIU signal: TPIU_TRACED3 */

#endif /* _SAMRH707F18A_GPIO_H_ */

