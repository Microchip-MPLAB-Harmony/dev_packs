/*
 * Peripheral I/O description for SAMV71J19B
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

/* file generated from device description version 2023-03-27T04:10:47Z */
#ifndef _SAMV71J19B_GPIO_H_
#define _SAMV71J19B_GPIO_H_

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
#define PIN_PB12                    (   44)  /**< Pin Number for PB12 */
#define PIN_PB13                    (   45)  /**< Pin Number for PB13 */
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
#define PIO_PB12                    (_UINT32_(1) << 12) /**< PIO mask for PB12 */
#define PIO_PB13                    (_UINT32_(1) << 13) /**< PIO mask for PB13 */
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

/* ========== PIO definition for AFEC0 peripheral ========== */
#define PIN_PD30X1_AFEC0_AD0                       _UINT32_(126) /**< AFEC0 signal: AFEC0_AD0 on PD30 mux X1 */
#define PIO_PD30X1_AFEC0_AD0                       (_UINT32_(1) << 30) /**< AFEC0 signal: AFEC0_AD0 */
#define PIN_PA21X1_AFEC0_AD1                       _UINT32_(21) /**< AFEC0 signal: AFEC0_AD1 on PA21 mux X1 */
#define PIO_PA21X1_AFEC0_AD1                       (_UINT32_(1) << 21) /**< AFEC0 signal: AFEC0_AD1 */
#define PIN_PB3X1_AFEC0_AD2                        _UINT32_(35) /**< AFEC0 signal: AFEC0_AD2 on PB3 mux X1 */
#define PIO_PB3X1_AFEC0_AD2                        (_UINT32_(1) << 3) /**< AFEC0 signal: AFEC0_AD2 */
#define PIN_PB2X1_AFEC0_AD5                        _UINT32_(34) /**< AFEC0 signal: AFEC0_AD5 on PB2 mux X1 */
#define PIO_PB2X1_AFEC0_AD5                        (_UINT32_(1) << 2) /**< AFEC0 signal: AFEC0_AD5 */
#define PIN_PA17X1_AFEC0_AD6                       _UINT32_(17) /**< AFEC0 signal: AFEC0_AD6 on PA17 mux X1 */
#define PIO_PA17X1_AFEC0_AD6                       (_UINT32_(1) << 17) /**< AFEC0 signal: AFEC0_AD6 */
#define PIN_PA18X1_AFEC0_AD7                       _UINT32_(18) /**< AFEC0 signal: AFEC0_AD7 on PA18 mux X1 */
#define PIO_PA18X1_AFEC0_AD7                       (_UINT32_(1) << 18) /**< AFEC0 signal: AFEC0_AD7 */
#define PIN_PA19X1_AFEC0_AD8                       _UINT32_(19) /**< AFEC0 signal: AFEC0_AD8 on PA19 mux X1 */
#define PIO_PA19X1_AFEC0_AD8                       (_UINT32_(1) << 19) /**< AFEC0 signal: AFEC0_AD8 */
#define PIN_PA20X1_AFEC0_AD9                       _UINT32_(20) /**< AFEC0 signal: AFEC0_AD9 on PA20 mux X1 */
#define PIO_PA20X1_AFEC0_AD9                       (_UINT32_(1) << 20) /**< AFEC0 signal: AFEC0_AD9 */
#define PIN_PB0X1_AFEC0_AD10                       _UINT32_(32) /**< AFEC0 signal: AFEC0_AD10 on PB0 mux X1 */
#define PIO_PB0X1_AFEC0_AD10                       (_UINT32_(1) << 0) /**< AFEC0 signal: AFEC0_AD10 */
#define PIN_PA8B_AFEC0_ADTRG                       _UINT32_(8)  /**< AFEC0 signal: AFEC0_ADTRG on PA8 mux B */
#define MUX_PA8B_AFEC0_ADTRG                       _UINT32_(1)  /**< AFEC0 signal line function value: AFEC0_ADTRG */
#define PIO_PA8B_AFEC0_ADTRG                       (_UINT32_(1) << 8) /**< AFEC0 signal: AFEC0_ADTRG */
/* ========== PIO definition for AFEC1 peripheral ========== */
#define PIN_PB1X1_AFEC1_AD0                        _UINT32_(33) /**< AFEC1 signal: AFEC1_AD0 on PB1 mux X1 */
#define PIO_PB1X1_AFEC1_AD0                        (_UINT32_(1) << 1) /**< AFEC1 signal: AFEC1_AD0 */
#define PIN_PD9C_AFEC1_ADTRG                       _UINT32_(105) /**< AFEC1 signal: AFEC1_ADTRG on PD9 mux C */
#define MUX_PD9C_AFEC1_ADTRG                       _UINT32_(2)  /**< AFEC1 signal line function value: AFEC1_ADTRG */
#define PIO_PD9C_AFEC1_ADTRG                       (_UINT32_(1) << 9) /**< AFEC1 signal: AFEC1_ADTRG */
/* ========== PIO definition for DACC peripheral ========== */
#define PIN_PB13X1_DACC_DAC0                       _UINT32_(45) /**< DACC signal: DACC_DAC0 on PB13 mux X1 */
#define PIO_PB13X1_DACC_DAC0                       (_UINT32_(1) << 13) /**< DACC signal: DACC_DAC0 */
#define PIN_PD0X1_DACC_DAC1                        _UINT32_(96) /**< DACC signal: DACC_DAC1 on PD0 mux X1 */
#define PIO_PD0X1_DACC_DAC1                        (_UINT32_(1) << 0) /**< DACC signal: DACC_DAC1 */
#define PIN_PA2C_DACC_DATRG                        _UINT32_(2)  /**< DACC signal: DACC_DATRG on PA2 mux C */
#define MUX_PA2C_DACC_DATRG                        _UINT32_(2)  /**< DACC signal line function value: DACC_DATRG */
#define PIO_PA2C_DACC_DATRG                        (_UINT32_(1) << 2) /**< DACC signal: DACC_DATRG */
/* ========== PIO definition for EFC peripheral ========== */
#define PIN_PB12X1_EFC_ERASE                       _UINT32_(44) /**< EFC signal: EFC_ERASE on PB12 mux X1 */
#define PIO_PB12X1_EFC_ERASE                       (_UINT32_(1) << 12) /**< EFC signal: EFC_ERASE */
/* ========== PIO definition for GMAC peripheral ========== */
#define PIN_PD13A_GMAC_GCOL                        _UINT32_(109) /**< GMAC signal: GMAC_GCOL on PD13 mux A */
#define MUX_PD13A_GMAC_GCOL                        _UINT32_(0)  /**< GMAC signal line function value: GMAC_GCOL */
#define PIO_PD13A_GMAC_GCOL                        (_UINT32_(1) << 13) /**< GMAC signal: GMAC_GCOL */
#define PIN_PD10A_GMAC_GCRS                        _UINT32_(106) /**< GMAC signal: GMAC_GCRS on PD10 mux A */
#define MUX_PD10A_GMAC_GCRS                        _UINT32_(0)  /**< GMAC signal line function value: GMAC_GCRS */
#define PIO_PD10A_GMAC_GCRS                        (_UINT32_(1) << 10) /**< GMAC signal: GMAC_GCRS */
#define PIN_PD8A_GMAC_GMDC                         _UINT32_(104) /**< GMAC signal: GMAC_GMDC on PD8 mux A */
#define MUX_PD8A_GMAC_GMDC                         _UINT32_(0)  /**< GMAC signal line function value: GMAC_GMDC */
#define PIO_PD8A_GMAC_GMDC                         (_UINT32_(1) << 8) /**< GMAC signal: GMAC_GMDC */
#define PIN_PD9A_GMAC_GMDIO                        _UINT32_(105) /**< GMAC signal: GMAC_GMDIO on PD9 mux A */
#define MUX_PD9A_GMAC_GMDIO                        _UINT32_(0)  /**< GMAC signal line function value: GMAC_GMDIO */
#define PIO_PD9A_GMAC_GMDIO                        (_UINT32_(1) << 9) /**< GMAC signal: GMAC_GMDIO */
#define PIN_PD5A_GMAC_GRX0                         _UINT32_(101) /**< GMAC signal: GMAC_GRX0 on PD5 mux A */
#define MUX_PD5A_GMAC_GRX0                         _UINT32_(0)  /**< GMAC signal line function value: GMAC_GRX0 */
#define PIO_PD5A_GMAC_GRX0                         (_UINT32_(1) << 5) /**< GMAC signal: GMAC_GRX0 */
#define PIN_PD6A_GMAC_GRX1                         _UINT32_(102) /**< GMAC signal: GMAC_GRX1 on PD6 mux A */
#define MUX_PD6A_GMAC_GRX1                         _UINT32_(0)  /**< GMAC signal line function value: GMAC_GRX1 */
#define PIO_PD6A_GMAC_GRX1                         (_UINT32_(1) << 6) /**< GMAC signal: GMAC_GRX1 */
#define PIN_PD11A_GMAC_GRX2                        _UINT32_(107) /**< GMAC signal: GMAC_GRX2 on PD11 mux A */
#define MUX_PD11A_GMAC_GRX2                        _UINT32_(0)  /**< GMAC signal line function value: GMAC_GRX2 */
#define PIO_PD11A_GMAC_GRX2                        (_UINT32_(1) << 11) /**< GMAC signal: GMAC_GRX2 */
#define PIN_PD12A_GMAC_GRX3                        _UINT32_(108) /**< GMAC signal: GMAC_GRX3 on PD12 mux A */
#define MUX_PD12A_GMAC_GRX3                        _UINT32_(0)  /**< GMAC signal line function value: GMAC_GRX3 */
#define PIO_PD12A_GMAC_GRX3                        (_UINT32_(1) << 12) /**< GMAC signal: GMAC_GRX3 */
#define PIN_PD14A_GMAC_GRXCK                       _UINT32_(110) /**< GMAC signal: GMAC_GRXCK on PD14 mux A */
#define MUX_PD14A_GMAC_GRXCK                       _UINT32_(0)  /**< GMAC signal line function value: GMAC_GRXCK */
#define PIO_PD14A_GMAC_GRXCK                       (_UINT32_(1) << 14) /**< GMAC signal: GMAC_GRXCK */
#define PIN_PD4A_GMAC_GRXDV                        _UINT32_(100) /**< GMAC signal: GMAC_GRXDV on PD4 mux A */
#define MUX_PD4A_GMAC_GRXDV                        _UINT32_(0)  /**< GMAC signal line function value: GMAC_GRXDV */
#define PIO_PD4A_GMAC_GRXDV                        (_UINT32_(1) << 4) /**< GMAC signal: GMAC_GRXDV */
#define PIN_PD7A_GMAC_GRXER                        _UINT32_(103) /**< GMAC signal: GMAC_GRXER on PD7 mux A */
#define MUX_PD7A_GMAC_GRXER                        _UINT32_(0)  /**< GMAC signal line function value: GMAC_GRXER */
#define PIO_PD7A_GMAC_GRXER                        (_UINT32_(1) << 7) /**< GMAC signal: GMAC_GRXER */
#define PIN_PB1B_GMAC_GTSUCOMP                     _UINT32_(33) /**< GMAC signal: GMAC_GTSUCOMP on PB1 mux B */
#define MUX_PB1B_GMAC_GTSUCOMP                     _UINT32_(1)  /**< GMAC signal line function value: GMAC_GTSUCOMP */
#define PIO_PB1B_GMAC_GTSUCOMP                     (_UINT32_(1) << 1) /**< GMAC signal: GMAC_GTSUCOMP */
#define PIN_PB12B_GMAC_GTSUCOMP                    _UINT32_(44) /**< GMAC signal: GMAC_GTSUCOMP on PB12 mux B */
#define MUX_PB12B_GMAC_GTSUCOMP                    _UINT32_(1)  /**< GMAC signal line function value: GMAC_GTSUCOMP */
#define PIO_PB12B_GMAC_GTSUCOMP                    (_UINT32_(1) << 12) /**< GMAC signal: GMAC_GTSUCOMP */
#define PIN_PD11C_GMAC_GTSUCOMP                    _UINT32_(107) /**< GMAC signal: GMAC_GTSUCOMP on PD11 mux C */
#define MUX_PD11C_GMAC_GTSUCOMP                    _UINT32_(2)  /**< GMAC signal line function value: GMAC_GTSUCOMP */
#define PIO_PD11C_GMAC_GTSUCOMP                    (_UINT32_(1) << 11) /**< GMAC signal: GMAC_GTSUCOMP */
#define PIN_PD20C_GMAC_GTSUCOMP                    _UINT32_(116) /**< GMAC signal: GMAC_GTSUCOMP on PD20 mux C */
#define MUX_PD20C_GMAC_GTSUCOMP                    _UINT32_(2)  /**< GMAC signal line function value: GMAC_GTSUCOMP */
#define PIO_PD20C_GMAC_GTSUCOMP                    (_UINT32_(1) << 20) /**< GMAC signal: GMAC_GTSUCOMP */
#define PIN_PD2A_GMAC_GTX0                         _UINT32_(98) /**< GMAC signal: GMAC_GTX0 on PD2 mux A */
#define MUX_PD2A_GMAC_GTX0                         _UINT32_(0)  /**< GMAC signal line function value: GMAC_GTX0 */
#define PIO_PD2A_GMAC_GTX0                         (_UINT32_(1) << 2) /**< GMAC signal: GMAC_GTX0 */
#define PIN_PD3A_GMAC_GTX1                         _UINT32_(99) /**< GMAC signal: GMAC_GTX1 on PD3 mux A */
#define MUX_PD3A_GMAC_GTX1                         _UINT32_(0)  /**< GMAC signal line function value: GMAC_GTX1 */
#define PIO_PD3A_GMAC_GTX1                         (_UINT32_(1) << 3) /**< GMAC signal: GMAC_GTX1 */
#define PIN_PD15A_GMAC_GTX2                        _UINT32_(111) /**< GMAC signal: GMAC_GTX2 on PD15 mux A */
#define MUX_PD15A_GMAC_GTX2                        _UINT32_(0)  /**< GMAC signal line function value: GMAC_GTX2 */
#define PIO_PD15A_GMAC_GTX2                        (_UINT32_(1) << 15) /**< GMAC signal: GMAC_GTX2 */
#define PIN_PD16A_GMAC_GTX3                        _UINT32_(112) /**< GMAC signal: GMAC_GTX3 on PD16 mux A */
#define MUX_PD16A_GMAC_GTX3                        _UINT32_(0)  /**< GMAC signal line function value: GMAC_GTX3 */
#define PIO_PD16A_GMAC_GTX3                        (_UINT32_(1) << 16) /**< GMAC signal: GMAC_GTX3 */
#define PIN_PD0A_GMAC_GTXCK                        _UINT32_(96) /**< GMAC signal: GMAC_GTXCK on PD0 mux A */
#define MUX_PD0A_GMAC_GTXCK                        _UINT32_(0)  /**< GMAC signal line function value: GMAC_GTXCK */
#define PIO_PD0A_GMAC_GTXCK                        (_UINT32_(1) << 0) /**< GMAC signal: GMAC_GTXCK */
#define PIN_PD1A_GMAC_GTXEN                        _UINT32_(97) /**< GMAC signal: GMAC_GTXEN on PD1 mux A */
#define MUX_PD1A_GMAC_GTXEN                        _UINT32_(0)  /**< GMAC signal line function value: GMAC_GTXEN */
#define PIO_PD1A_GMAC_GTXEN                        (_UINT32_(1) << 1) /**< GMAC signal: GMAC_GTXEN */
#define PIN_PD17A_GMAC_GTXER                       _UINT32_(113) /**< GMAC signal: GMAC_GTXER on PD17 mux A */
#define MUX_PD17A_GMAC_GTXER                       _UINT32_(0)  /**< GMAC signal line function value: GMAC_GTXER */
#define PIO_PD17A_GMAC_GTXER                       (_UINT32_(1) << 17) /**< GMAC signal: GMAC_GTXER */
/* ========== PIO definition for ISI peripheral ========== */
#define PIN_PD22D_ISI_D0                           _UINT32_(118) /**< ISI signal: ISI_D0 on PD22 mux D */
#define MUX_PD22D_ISI_D0                           _UINT32_(3)  /**< ISI signal line function value: ISI_D0 */
#define PIO_PD22D_ISI_D0                           (_UINT32_(1) << 22) /**< ISI signal: ISI_D0 */
#define PIN_PD21D_ISI_D1                           _UINT32_(117) /**< ISI signal: ISI_D1 on PD21 mux D */
#define MUX_PD21D_ISI_D1                           _UINT32_(3)  /**< ISI signal line function value: ISI_D1 */
#define PIO_PD21D_ISI_D1                           (_UINT32_(1) << 21) /**< ISI signal: ISI_D1 */
#define PIN_PB3D_ISI_D2                            _UINT32_(35) /**< ISI signal: ISI_D2 on PB3 mux D */
#define MUX_PB3D_ISI_D2                            _UINT32_(3)  /**< ISI signal line function value: ISI_D2 */
#define PIO_PB3D_ISI_D2                            (_UINT32_(1) << 3) /**< ISI signal: ISI_D2 */
#define PIN_PA9B_ISI_D3                            _UINT32_(9)  /**< ISI signal: ISI_D3 on PA9 mux B */
#define MUX_PA9B_ISI_D3                            _UINT32_(1)  /**< ISI signal line function value: ISI_D3 */
#define PIO_PA9B_ISI_D3                            (_UINT32_(1) << 9) /**< ISI signal: ISI_D3 */
#define PIN_PA5B_ISI_D4                            _UINT32_(5)  /**< ISI signal: ISI_D4 on PA5 mux B */
#define MUX_PA5B_ISI_D4                            _UINT32_(1)  /**< ISI signal line function value: ISI_D4 */
#define PIO_PA5B_ISI_D4                            (_UINT32_(1) << 5) /**< ISI signal: ISI_D4 */
#define PIN_PD11D_ISI_D5                           _UINT32_(107) /**< ISI signal: ISI_D5 on PD11 mux D */
#define MUX_PD11D_ISI_D5                           _UINT32_(3)  /**< ISI signal line function value: ISI_D5 */
#define PIO_PD11D_ISI_D5                           (_UINT32_(1) << 11) /**< ISI signal: ISI_D5 */
#define PIN_PD12D_ISI_D6                           _UINT32_(108) /**< ISI signal: ISI_D6 on PD12 mux D */
#define MUX_PD12D_ISI_D6                           _UINT32_(3)  /**< ISI signal line function value: ISI_D6 */
#define PIO_PD12D_ISI_D6                           (_UINT32_(1) << 12) /**< ISI signal: ISI_D6 */
#define PIN_PA27D_ISI_D7                           _UINT32_(27) /**< ISI signal: ISI_D7 on PA27 mux D */
#define MUX_PA27D_ISI_D7                           _UINT32_(3)  /**< ISI signal line function value: ISI_D7 */
#define PIO_PA27D_ISI_D7                           (_UINT32_(1) << 27) /**< ISI signal: ISI_D7 */
#define PIN_PD27D_ISI_D8                           _UINT32_(123) /**< ISI signal: ISI_D8 on PD27 mux D */
#define MUX_PD27D_ISI_D8                           _UINT32_(3)  /**< ISI signal line function value: ISI_D8 */
#define PIO_PD27D_ISI_D8                           (_UINT32_(1) << 27) /**< ISI signal: ISI_D8 */
#define PIN_PD28D_ISI_D9                           _UINT32_(124) /**< ISI signal: ISI_D9 on PD28 mux D */
#define MUX_PD28D_ISI_D9                           _UINT32_(3)  /**< ISI signal line function value: ISI_D9 */
#define PIO_PD28D_ISI_D9                           (_UINT32_(1) << 28) /**< ISI signal: ISI_D9 */
#define PIN_PD30D_ISI_D10                          _UINT32_(126) /**< ISI signal: ISI_D10 on PD30 mux D */
#define MUX_PD30D_ISI_D10                          _UINT32_(3)  /**< ISI signal line function value: ISI_D10 */
#define PIO_PD30D_ISI_D10                          (_UINT32_(1) << 30) /**< ISI signal: ISI_D10 */
#define PIN_PD31D_ISI_D11                          _UINT32_(127) /**< ISI signal: ISI_D11 on PD31 mux D */
#define MUX_PD31D_ISI_D11                          _UINT32_(3)  /**< ISI signal line function value: ISI_D11 */
#define PIO_PD31D_ISI_D11                          (_UINT32_(1) << 31) /**< ISI signal: ISI_D11 */
#define PIN_PD24D_ISI_HSYNC                        _UINT32_(120) /**< ISI signal: ISI_HSYNC on PD24 mux D */
#define MUX_PD24D_ISI_HSYNC                        _UINT32_(3)  /**< ISI signal line function value: ISI_HSYNC */
#define PIO_PD24D_ISI_HSYNC                        (_UINT32_(1) << 24) /**< ISI signal: ISI_HSYNC */
#define PIN_PA24D_ISI_PCK                          _UINT32_(24) /**< ISI signal: ISI_PCK on PA24 mux D */
#define MUX_PA24D_ISI_PCK                          _UINT32_(3)  /**< ISI signal line function value: ISI_PCK */
#define PIO_PA24D_ISI_PCK                          (_UINT32_(1) << 24) /**< ISI signal: ISI_PCK */
#define PIN_PD25D_ISI_VSYNC                        _UINT32_(121) /**< ISI signal: ISI_VSYNC on PD25 mux D */
#define MUX_PD25D_ISI_VSYNC                        _UINT32_(3)  /**< ISI signal line function value: ISI_VSYNC */
#define PIO_PD25D_ISI_VSYNC                        (_UINT32_(1) << 25) /**< ISI signal: ISI_VSYNC */
/* ========== PIO definition for MCAN0 peripheral ========== */
#define PIN_PB3A_MCAN0_CANRX0                      _UINT32_(35) /**< MCAN0 signal: MCAN0_CANRX0 on PB3 mux A */
#define MUX_PB3A_MCAN0_CANRX0                      _UINT32_(0)  /**< MCAN0 signal line function value: MCAN0_CANRX0 */
#define PIO_PB3A_MCAN0_CANRX0                      (_UINT32_(1) << 3) /**< MCAN0 signal: MCAN0_CANRX0 */
#define PIN_PB2A_MCAN0_CANTX0                      _UINT32_(34) /**< MCAN0 signal: MCAN0_CANTX0 on PB2 mux A */
#define MUX_PB2A_MCAN0_CANTX0                      _UINT32_(0)  /**< MCAN0 signal line function value: MCAN0_CANTX0 */
#define PIO_PB2A_MCAN0_CANTX0                      (_UINT32_(1) << 2) /**< MCAN0 signal: MCAN0_CANTX0 */
/* ========== PIO definition for MLB peripheral ========== */
#define PIN_PB4C_MLB_MLBCLK                        _UINT32_(36) /**< MLB signal: MLB_MLBCLK on PB4 mux C */
#define MUX_PB4C_MLB_MLBCLK                        _UINT32_(2)  /**< MLB signal line function value: MLB_MLBCLK */
#define PIO_PB4C_MLB_MLBCLK                        (_UINT32_(1) << 4) /**< MLB signal: MLB_MLBCLK */
#define PIN_PB5C_MLB_MLBDAT                        _UINT32_(37) /**< MLB signal: MLB_MLBDAT on PB5 mux C */
#define MUX_PB5C_MLB_MLBDAT                        _UINT32_(2)  /**< MLB signal line function value: MLB_MLBDAT */
#define PIO_PB5C_MLB_MLBDAT                        (_UINT32_(1) << 5) /**< MLB signal: MLB_MLBDAT */
#define PIN_PD10D_MLB_MLBSIG                       _UINT32_(106) /**< MLB signal: MLB_MLBSIG on PD10 mux D */
#define MUX_PD10D_MLB_MLBSIG                       _UINT32_(3)  /**< MLB signal line function value: MLB_MLBSIG */
#define PIO_PD10D_MLB_MLBSIG                       (_UINT32_(1) << 10) /**< MLB signal: MLB_MLBSIG */
/* ========== PIO definition for PMC peripheral ========== */
#define PIN_PA6B_PMC_PCK0                          _UINT32_(6)  /**< PMC signal: PMC_PCK0 on PA6 mux B */
#define MUX_PA6B_PMC_PCK0                          _UINT32_(1)  /**< PMC signal line function value: PMC_PCK0 */
#define PIO_PA6B_PMC_PCK0                          (_UINT32_(1) << 6) /**< PMC signal: PMC_PCK0 */
#define PIN_PB12D_PMC_PCK0                         _UINT32_(44) /**< PMC signal: PMC_PCK0 on PB12 mux D */
#define MUX_PB12D_PMC_PCK0                         _UINT32_(3)  /**< PMC signal line function value: PMC_PCK0 */
#define PIO_PB12D_PMC_PCK0                         (_UINT32_(1) << 12) /**< PMC signal: PMC_PCK0 */
#define PIN_PB13B_PMC_PCK0                         _UINT32_(45) /**< PMC signal: PMC_PCK0 on PB13 mux B */
#define MUX_PB13B_PMC_PCK0                         _UINT32_(1)  /**< PMC signal line function value: PMC_PCK0 */
#define PIO_PB13B_PMC_PCK0                         (_UINT32_(1) << 13) /**< PMC signal: PMC_PCK0 */
#define PIN_PA17B_PMC_PCK1                         _UINT32_(17) /**< PMC signal: PMC_PCK1 on PA17 mux B */
#define MUX_PA17B_PMC_PCK1                         _UINT32_(1)  /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PA17B_PMC_PCK1                         (_UINT32_(1) << 17) /**< PMC signal: PMC_PCK1 */
#define PIN_PA21B_PMC_PCK1                         _UINT32_(21) /**< PMC signal: PMC_PCK1 on PA21 mux B */
#define MUX_PA21B_PMC_PCK1                         _UINT32_(1)  /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PA21B_PMC_PCK1                         (_UINT32_(1) << 21) /**< PMC signal: PMC_PCK1 */
#define PIN_PA3C_PMC_PCK2                          _UINT32_(3)  /**< PMC signal: PMC_PCK2 on PA3 mux C */
#define MUX_PA3C_PMC_PCK2                          _UINT32_(2)  /**< PMC signal line function value: PMC_PCK2 */
#define PIO_PA3C_PMC_PCK2                          (_UINT32_(1) << 3) /**< PMC signal: PMC_PCK2 */
#define PIN_PA18B_PMC_PCK2                         _UINT32_(18) /**< PMC signal: PMC_PCK2 on PA18 mux B */
#define MUX_PA18B_PMC_PCK2                         _UINT32_(1)  /**< PMC signal line function value: PMC_PCK2 */
#define PIO_PA18B_PMC_PCK2                         (_UINT32_(1) << 18) /**< PMC signal: PMC_PCK2 */
#define PIN_PA31B_PMC_PCK2                         _UINT32_(31) /**< PMC signal: PMC_PCK2 on PA31 mux B */
#define MUX_PA31B_PMC_PCK2                         _UINT32_(1)  /**< PMC signal line function value: PMC_PCK2 */
#define PIO_PA31B_PMC_PCK2                         (_UINT32_(1) << 31) /**< PMC signal: PMC_PCK2 */
#define PIN_PB3B_PMC_PCK2                          _UINT32_(35) /**< PMC signal: PMC_PCK2 on PB3 mux B */
#define MUX_PB3B_PMC_PCK2                          _UINT32_(1)  /**< PMC signal line function value: PMC_PCK2 */
#define PIO_PB3B_PMC_PCK2                          (_UINT32_(1) << 3) /**< PMC signal: PMC_PCK2 */
#define PIN_PD31C_PMC_PCK2                         _UINT32_(127) /**< PMC signal: PMC_PCK2 on PD31 mux C */
#define MUX_PD31C_PMC_PCK2                         _UINT32_(2)  /**< PMC signal line function value: PMC_PCK2 */
#define PIO_PD31C_PMC_PCK2                         (_UINT32_(1) << 31) /**< PMC signal: PMC_PCK2 */
#define PIN_PB9X1_PMC_XIN                          _UINT32_(41) /**< PMC signal: PMC_XIN on PB9 mux X1 */
#define PIO_PB9X1_PMC_XIN                          (_UINT32_(1) << 9) /**< PMC signal: PMC_XIN */
#define PIN_PA7X1_PMC_XIN32                        _UINT32_(7)  /**< PMC signal: PMC_XIN32 on PA7 mux X1 */
#define PIO_PA7X1_PMC_XIN32                        (_UINT32_(1) << 7) /**< PMC signal: PMC_XIN32 */
#define PIN_PB8X1_PMC_XOUT                         _UINT32_(40) /**< PMC signal: PMC_XOUT on PB8 mux X1 */
#define PIO_PB8X1_PMC_XOUT                         (_UINT32_(1) << 8) /**< PMC signal: PMC_XOUT */
#define PIN_PA8X1_PMC_XOUT32                       _UINT32_(8)  /**< PMC signal: PMC_XOUT32 on PA8 mux X1 */
#define PIO_PA8X1_PMC_XOUT32                       (_UINT32_(1) << 8) /**< PMC signal: PMC_XOUT32 */
/* ========== PIO definition for PWM0 peripheral ========== */
#define PIN_PA10B_PWM0_PWMEXTRG0                   _UINT32_(10) /**< PWM0 signal: PWM0_PWMEXTRG0 on PA10 mux B */
#define MUX_PA10B_PWM0_PWMEXTRG0                   _UINT32_(1)  /**< PWM0 signal line function value: PWM0_PWMEXTRG0 */
#define PIO_PA10B_PWM0_PWMEXTRG0                   (_UINT32_(1) << 10) /**< PWM0 signal: PWM0_PWMEXTRG0 */
#define PIN_PA22B_PWM0_PWMEXTRG1                   _UINT32_(22) /**< PWM0 signal: PWM0_PWMEXTRG1 on PA22 mux B */
#define MUX_PA22B_PWM0_PWMEXTRG1                   _UINT32_(1)  /**< PWM0 signal line function value: PWM0_PWMEXTRG1 */
#define PIO_PA22B_PWM0_PWMEXTRG1                   (_UINT32_(1) << 22) /**< PWM0 signal: PWM0_PWMEXTRG1 */
#define PIN_PA9C_PWM0_PWMFI0                       _UINT32_(9)  /**< PWM0 signal: PWM0_PWMFI0 on PA9 mux C */
#define MUX_PA9C_PWM0_PWMFI0                       _UINT32_(2)  /**< PWM0 signal line function value: PWM0_PWMFI0 */
#define PIO_PA9C_PWM0_PWMFI0                       (_UINT32_(1) << 9) /**< PWM0 signal: PWM0_PWMFI0 */
#define PIN_PD8B_PWM0_PWMFI1                       _UINT32_(104) /**< PWM0 signal: PWM0_PWMFI1 on PD8 mux B */
#define MUX_PD8B_PWM0_PWMFI1                       _UINT32_(1)  /**< PWM0 signal line function value: PWM0_PWMFI1 */
#define PIO_PD8B_PWM0_PWMFI1                       (_UINT32_(1) << 8) /**< PWM0 signal: PWM0_PWMFI1 */
#define PIN_PD9B_PWM0_PWMFI2                       _UINT32_(105) /**< PWM0 signal: PWM0_PWMFI2 on PD9 mux B */
#define MUX_PD9B_PWM0_PWMFI2                       _UINT32_(1)  /**< PWM0 signal line function value: PWM0_PWMFI2 */
#define PIO_PD9B_PWM0_PWMFI2                       (_UINT32_(1) << 9) /**< PWM0 signal: PWM0_PWMFI2 */
#define PIN_PA0A_PWM0_PWMH0                        _UINT32_(0)  /**< PWM0 signal: PWM0_PWMH0 on PA0 mux A */
#define MUX_PA0A_PWM0_PWMH0                        _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWMH0 */
#define PIO_PA0A_PWM0_PWMH0                        (_UINT32_(1) << 0) /**< PWM0 signal: PWM0_PWMH0 */
#define PIN_PA11B_PWM0_PWMH0                       _UINT32_(11) /**< PWM0 signal: PWM0_PWMH0 on PA11 mux B */
#define MUX_PA11B_PWM0_PWMH0                       _UINT32_(1)  /**< PWM0 signal line function value: PWM0_PWMH0 */
#define PIO_PA11B_PWM0_PWMH0                       (_UINT32_(1) << 11) /**< PWM0 signal: PWM0_PWMH0 */
#define PIN_PA23B_PWM0_PWMH0                       _UINT32_(23) /**< PWM0 signal: PWM0_PWMH0 on PA23 mux B */
#define MUX_PA23B_PWM0_PWMH0                       _UINT32_(1)  /**< PWM0 signal line function value: PWM0_PWMH0 */
#define PIO_PA23B_PWM0_PWMH0                       (_UINT32_(1) << 23) /**< PWM0 signal: PWM0_PWMH0 */
#define PIN_PB0A_PWM0_PWMH0                        _UINT32_(32) /**< PWM0 signal: PWM0_PWMH0 on PB0 mux A */
#define MUX_PB0A_PWM0_PWMH0                        _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWMH0 */
#define PIO_PB0A_PWM0_PWMH0                        (_UINT32_(1) << 0) /**< PWM0 signal: PWM0_PWMH0 */
#define PIN_PD11B_PWM0_PWMH0                       _UINT32_(107) /**< PWM0 signal: PWM0_PWMH0 on PD11 mux B */
#define MUX_PD11B_PWM0_PWMH0                       _UINT32_(1)  /**< PWM0 signal line function value: PWM0_PWMH0 */
#define PIO_PD11B_PWM0_PWMH0                       (_UINT32_(1) << 11) /**< PWM0 signal: PWM0_PWMH0 */
#define PIN_PD20A_PWM0_PWMH0                       _UINT32_(116) /**< PWM0 signal: PWM0_PWMH0 on PD20 mux A */
#define MUX_PD20A_PWM0_PWMH0                       _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWMH0 */
#define PIO_PD20A_PWM0_PWMH0                       (_UINT32_(1) << 20) /**< PWM0 signal: PWM0_PWMH0 */
#define PIN_PA2A_PWM0_PWMH1                        _UINT32_(2)  /**< PWM0 signal: PWM0_PWMH1 on PA2 mux A */
#define MUX_PA2A_PWM0_PWMH1                        _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWMH1 */
#define PIO_PA2A_PWM0_PWMH1                        (_UINT32_(1) << 2) /**< PWM0 signal: PWM0_PWMH1 */
#define PIN_PA12B_PWM0_PWMH1                       _UINT32_(12) /**< PWM0 signal: PWM0_PWMH1 on PA12 mux B */
#define MUX_PA12B_PWM0_PWMH1                       _UINT32_(1)  /**< PWM0 signal line function value: PWM0_PWMH1 */
#define PIO_PA12B_PWM0_PWMH1                       (_UINT32_(1) << 12) /**< PWM0 signal: PWM0_PWMH1 */
#define PIN_PA24B_PWM0_PWMH1                       _UINT32_(24) /**< PWM0 signal: PWM0_PWMH1 on PA24 mux B */
#define MUX_PA24B_PWM0_PWMH1                       _UINT32_(1)  /**< PWM0 signal line function value: PWM0_PWMH1 */
#define PIO_PA24B_PWM0_PWMH1                       (_UINT32_(1) << 24) /**< PWM0 signal: PWM0_PWMH1 */
#define PIN_PB1A_PWM0_PWMH1                        _UINT32_(33) /**< PWM0 signal: PWM0_PWMH1 on PB1 mux A */
#define MUX_PB1A_PWM0_PWMH1                        _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWMH1 */
#define PIO_PB1A_PWM0_PWMH1                        (_UINT32_(1) << 1) /**< PWM0 signal: PWM0_PWMH1 */
#define PIN_PD21A_PWM0_PWMH1                       _UINT32_(117) /**< PWM0 signal: PWM0_PWMH1 on PD21 mux A */
#define MUX_PD21A_PWM0_PWMH1                       _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWMH1 */
#define PIO_PD21A_PWM0_PWMH1                       (_UINT32_(1) << 21) /**< PWM0 signal: PWM0_PWMH1 */
#define PIN_PA13B_PWM0_PWMH2                       _UINT32_(13) /**< PWM0 signal: PWM0_PWMH2 on PA13 mux B */
#define MUX_PA13B_PWM0_PWMH2                       _UINT32_(1)  /**< PWM0 signal line function value: PWM0_PWMH2 */
#define PIO_PA13B_PWM0_PWMH2                       (_UINT32_(1) << 13) /**< PWM0 signal: PWM0_PWMH2 */
#define PIN_PA25B_PWM0_PWMH2                       _UINT32_(25) /**< PWM0 signal: PWM0_PWMH2 on PA25 mux B */
#define MUX_PA25B_PWM0_PWMH2                       _UINT32_(1)  /**< PWM0 signal line function value: PWM0_PWMH2 */
#define PIO_PA25B_PWM0_PWMH2                       (_UINT32_(1) << 25) /**< PWM0 signal: PWM0_PWMH2 */
#define PIN_PB4B_PWM0_PWMH2                        _UINT32_(36) /**< PWM0 signal: PWM0_PWMH2 on PB4 mux B */
#define MUX_PB4B_PWM0_PWMH2                        _UINT32_(1)  /**< PWM0 signal line function value: PWM0_PWMH2 */
#define PIO_PB4B_PWM0_PWMH2                        (_UINT32_(1) << 4) /**< PWM0 signal: PWM0_PWMH2 */
#define PIN_PD22A_PWM0_PWMH2                       _UINT32_(118) /**< PWM0 signal: PWM0_PWMH2 on PD22 mux A */
#define MUX_PD22A_PWM0_PWMH2                       _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWMH2 */
#define PIO_PD22A_PWM0_PWMH2                       (_UINT32_(1) << 22) /**< PWM0 signal: PWM0_PWMH2 */
#define PIN_PA7B_PWM0_PWMH3                        _UINT32_(7)  /**< PWM0 signal: PWM0_PWMH3 on PA7 mux B */
#define MUX_PA7B_PWM0_PWMH3                        _UINT32_(1)  /**< PWM0 signal line function value: PWM0_PWMH3 */
#define PIO_PA7B_PWM0_PWMH3                        (_UINT32_(1) << 7) /**< PWM0 signal: PWM0_PWMH3 */
#define PIN_PA14B_PWM0_PWMH3                       _UINT32_(14) /**< PWM0 signal: PWM0_PWMH3 on PA14 mux B */
#define MUX_PA14B_PWM0_PWMH3                       _UINT32_(1)  /**< PWM0 signal line function value: PWM0_PWMH3 */
#define PIO_PA14B_PWM0_PWMH3                       (_UINT32_(1) << 14) /**< PWM0 signal: PWM0_PWMH3 */
#define PIN_PA17C_PWM0_PWMH3                       _UINT32_(17) /**< PWM0 signal: PWM0_PWMH3 on PA17 mux C */
#define MUX_PA17C_PWM0_PWMH3                       _UINT32_(2)  /**< PWM0 signal line function value: PWM0_PWMH3 */
#define PIO_PA17C_PWM0_PWMH3                       (_UINT32_(1) << 17) /**< PWM0 signal: PWM0_PWMH3 */
#define PIN_PD23A_PWM0_PWMH3                       _UINT32_(119) /**< PWM0 signal: PWM0_PWMH3 on PD23 mux A */
#define MUX_PD23A_PWM0_PWMH3                       _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWMH3 */
#define PIO_PD23A_PWM0_PWMH3                       (_UINT32_(1) << 23) /**< PWM0 signal: PWM0_PWMH3 */
#define PIN_PA1A_PWM0_PWML0                        _UINT32_(1)  /**< PWM0 signal: PWM0_PWML0 on PA1 mux A */
#define MUX_PA1A_PWM0_PWML0                        _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWML0 */
#define PIO_PA1A_PWM0_PWML0                        (_UINT32_(1) << 1) /**< PWM0 signal: PWM0_PWML0 */
#define PIN_PA19B_PWM0_PWML0                       _UINT32_(19) /**< PWM0 signal: PWM0_PWML0 on PA19 mux B */
#define MUX_PA19B_PWM0_PWML0                       _UINT32_(1)  /**< PWM0 signal line function value: PWM0_PWML0 */
#define PIO_PA19B_PWM0_PWML0                       (_UINT32_(1) << 19) /**< PWM0 signal: PWM0_PWML0 */
#define PIN_PB5B_PWM0_PWML0                        _UINT32_(37) /**< PWM0 signal: PWM0_PWML0 on PB5 mux B */
#define MUX_PB5B_PWM0_PWML0                        _UINT32_(1)  /**< PWM0 signal line function value: PWM0_PWML0 */
#define PIO_PB5B_PWM0_PWML0                        (_UINT32_(1) << 5) /**< PWM0 signal: PWM0_PWML0 */
#define PIN_PD10B_PWM0_PWML0                       _UINT32_(106) /**< PWM0 signal: PWM0_PWML0 on PD10 mux B */
#define MUX_PD10B_PWM0_PWML0                       _UINT32_(1)  /**< PWM0 signal line function value: PWM0_PWML0 */
#define PIO_PD10B_PWM0_PWML0                       (_UINT32_(1) << 10) /**< PWM0 signal: PWM0_PWML0 */
#define PIN_PD24A_PWM0_PWML0                       _UINT32_(120) /**< PWM0 signal: PWM0_PWML0 on PD24 mux A */
#define MUX_PD24A_PWM0_PWML0                       _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWML0 */
#define PIO_PD24A_PWM0_PWML0                       (_UINT32_(1) << 24) /**< PWM0 signal: PWM0_PWML0 */
#define PIN_PA20B_PWM0_PWML1                       _UINT32_(20) /**< PWM0 signal: PWM0_PWML1 on PA20 mux B */
#define MUX_PA20B_PWM0_PWML1                       _UINT32_(1)  /**< PWM0 signal line function value: PWM0_PWML1 */
#define PIO_PA20B_PWM0_PWML1                       (_UINT32_(1) << 20) /**< PWM0 signal: PWM0_PWML1 */
#define PIN_PB12A_PWM0_PWML1                       _UINT32_(44) /**< PWM0 signal: PWM0_PWML1 on PB12 mux A */
#define MUX_PB12A_PWM0_PWML1                       _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWML1 */
#define PIO_PB12A_PWM0_PWML1                       (_UINT32_(1) << 12) /**< PWM0 signal: PWM0_PWML1 */
#define PIN_PD25A_PWM0_PWML1                       _UINT32_(121) /**< PWM0 signal: PWM0_PWML1 on PD25 mux A */
#define MUX_PD25A_PWM0_PWML1                       _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWML1 */
#define PIO_PD25A_PWM0_PWML1                       (_UINT32_(1) << 25) /**< PWM0 signal: PWM0_PWML1 */
#define PIN_PA16C_PWM0_PWML2                       _UINT32_(16) /**< PWM0 signal: PWM0_PWML2 on PA16 mux C */
#define MUX_PA16C_PWM0_PWML2                       _UINT32_(2)  /**< PWM0 signal line function value: PWM0_PWML2 */
#define PIO_PA16C_PWM0_PWML2                       (_UINT32_(1) << 16) /**< PWM0 signal: PWM0_PWML2 */
#define PIN_PA30A_PWM0_PWML2                       _UINT32_(30) /**< PWM0 signal: PWM0_PWML2 on PA30 mux A */
#define MUX_PA30A_PWM0_PWML2                       _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWML2 */
#define PIO_PA30A_PWM0_PWML2                       (_UINT32_(1) << 30) /**< PWM0 signal: PWM0_PWML2 */
#define PIN_PB13A_PWM0_PWML2                       _UINT32_(45) /**< PWM0 signal: PWM0_PWML2 on PB13 mux A */
#define MUX_PB13A_PWM0_PWML2                       _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWML2 */
#define PIO_PB13A_PWM0_PWML2                       (_UINT32_(1) << 13) /**< PWM0 signal: PWM0_PWML2 */
#define PIN_PD26A_PWM0_PWML2                       _UINT32_(122) /**< PWM0 signal: PWM0_PWML2 on PD26 mux A */
#define MUX_PD26A_PWM0_PWML2                       _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWML2 */
#define PIO_PD26A_PWM0_PWML2                       (_UINT32_(1) << 26) /**< PWM0 signal: PWM0_PWML2 */
#define PIN_PA15C_PWM0_PWML3                       _UINT32_(15) /**< PWM0 signal: PWM0_PWML3 on PA15 mux C */
#define MUX_PA15C_PWM0_PWML3                       _UINT32_(2)  /**< PWM0 signal line function value: PWM0_PWML3 */
#define PIO_PA15C_PWM0_PWML3                       (_UINT32_(1) << 15) /**< PWM0 signal: PWM0_PWML3 */
#define PIN_PD27A_PWM0_PWML3                       _UINT32_(123) /**< PWM0 signal: PWM0_PWML3 on PD27 mux A */
#define MUX_PD27A_PWM0_PWML3                       _UINT32_(0)  /**< PWM0 signal line function value: PWM0_PWML3 */
#define PIO_PD27A_PWM0_PWML3                       (_UINT32_(1) << 27) /**< PWM0 signal: PWM0_PWML3 */
/* ========== PIO definition for PWM1 peripheral ========== */
#define PIN_PA30B_PWM1_PWMEXTRG0                   _UINT32_(30) /**< PWM1 signal: PWM1_PWMEXTRG0 on PA30 mux B */
#define MUX_PA30B_PWM1_PWMEXTRG0                   _UINT32_(1)  /**< PWM1 signal line function value: PWM1_PWMEXTRG0 */
#define PIO_PA30B_PWM1_PWMEXTRG0                   (_UINT32_(1) << 30) /**< PWM1 signal: PWM1_PWMEXTRG0 */
#define PIN_PA18A_PWM1_PWMEXTRG1                   _UINT32_(18) /**< PWM1 signal: PWM1_PWMEXTRG1 on PA18 mux A */
#define MUX_PA18A_PWM1_PWMEXTRG1                   _UINT32_(0)  /**< PWM1 signal line function value: PWM1_PWMEXTRG1 */
#define PIO_PA18A_PWM1_PWMEXTRG1                   (_UINT32_(1) << 18) /**< PWM1 signal: PWM1_PWMEXTRG1 */
#define PIN_PA21C_PWM1_PWMFI0                      _UINT32_(21) /**< PWM1 signal: PWM1_PWMFI0 on PA21 mux C */
#define MUX_PA21C_PWM1_PWMFI0                      _UINT32_(2)  /**< PWM1 signal line function value: PWM1_PWMFI0 */
#define PIO_PA21C_PWM1_PWMFI0                      (_UINT32_(1) << 21) /**< PWM1 signal: PWM1_PWMFI0 */
#define PIN_PA26D_PWM1_PWMFI1                      _UINT32_(26) /**< PWM1 signal: PWM1_PWMFI1 on PA26 mux D */
#define MUX_PA26D_PWM1_PWMFI1                      _UINT32_(3)  /**< PWM1 signal line function value: PWM1_PWMFI1 */
#define PIO_PA26D_PWM1_PWMFI1                      (_UINT32_(1) << 26) /**< PWM1 signal: PWM1_PWMFI1 */
#define PIN_PA28D_PWM1_PWMFI2                      _UINT32_(28) /**< PWM1 signal: PWM1_PWMFI2 on PA28 mux D */
#define MUX_PA28D_PWM1_PWMFI2                      _UINT32_(3)  /**< PWM1 signal line function value: PWM1_PWMFI2 */
#define PIO_PA28D_PWM1_PWMFI2                      (_UINT32_(1) << 28) /**< PWM1 signal: PWM1_PWMFI2 */
#define PIN_PA12C_PWM1_PWMH0                       _UINT32_(12) /**< PWM1 signal: PWM1_PWMH0 on PA12 mux C */
#define MUX_PA12C_PWM1_PWMH0                       _UINT32_(2)  /**< PWM1 signal line function value: PWM1_PWMH0 */
#define PIO_PA12C_PWM1_PWMH0                       (_UINT32_(1) << 12) /**< PWM1 signal: PWM1_PWMH0 */
#define PIN_PD1B_PWM1_PWMH0                        _UINT32_(97) /**< PWM1 signal: PWM1_PWMH0 on PD1 mux B */
#define MUX_PD1B_PWM1_PWMH0                        _UINT32_(1)  /**< PWM1 signal line function value: PWM1_PWMH0 */
#define PIO_PD1B_PWM1_PWMH0                        (_UINT32_(1) << 1) /**< PWM1 signal: PWM1_PWMH0 */
#define PIN_PA14C_PWM1_PWMH1                       _UINT32_(14) /**< PWM1 signal: PWM1_PWMH1 on PA14 mux C */
#define MUX_PA14C_PWM1_PWMH1                       _UINT32_(2)  /**< PWM1 signal line function value: PWM1_PWMH1 */
#define PIO_PA14C_PWM1_PWMH1                       (_UINT32_(1) << 14) /**< PWM1 signal: PWM1_PWMH1 */
#define PIN_PD3B_PWM1_PWMH1                        _UINT32_(99) /**< PWM1 signal: PWM1_PWMH1 on PD3 mux B */
#define MUX_PD3B_PWM1_PWMH1                        _UINT32_(1)  /**< PWM1 signal line function value: PWM1_PWMH1 */
#define PIO_PD3B_PWM1_PWMH1                        (_UINT32_(1) << 3) /**< PWM1 signal: PWM1_PWMH1 */
#define PIN_PA31D_PWM1_PWMH2                       _UINT32_(31) /**< PWM1 signal: PWM1_PWMH2 on PA31 mux D */
#define MUX_PA31D_PWM1_PWMH2                       _UINT32_(3)  /**< PWM1 signal line function value: PWM1_PWMH2 */
#define PIO_PA31D_PWM1_PWMH2                       (_UINT32_(1) << 31) /**< PWM1 signal: PWM1_PWMH2 */
#define PIN_PD5B_PWM1_PWMH2                        _UINT32_(101) /**< PWM1 signal: PWM1_PWMH2 on PD5 mux B */
#define MUX_PD5B_PWM1_PWMH2                        _UINT32_(1)  /**< PWM1 signal line function value: PWM1_PWMH2 */
#define PIO_PD5B_PWM1_PWMH2                        (_UINT32_(1) << 5) /**< PWM1 signal: PWM1_PWMH2 */
#define PIN_PA8A_PWM1_PWMH3                        _UINT32_(8)  /**< PWM1 signal: PWM1_PWMH3 on PA8 mux A */
#define MUX_PA8A_PWM1_PWMH3                        _UINT32_(0)  /**< PWM1 signal line function value: PWM1_PWMH3 */
#define PIO_PA8A_PWM1_PWMH3                        (_UINT32_(1) << 8) /**< PWM1 signal: PWM1_PWMH3 */
#define PIN_PD7B_PWM1_PWMH3                        _UINT32_(103) /**< PWM1 signal: PWM1_PWMH3 on PD7 mux B */
#define MUX_PD7B_PWM1_PWMH3                        _UINT32_(1)  /**< PWM1 signal line function value: PWM1_PWMH3 */
#define PIO_PD7B_PWM1_PWMH3                        (_UINT32_(1) << 7) /**< PWM1 signal: PWM1_PWMH3 */
#define PIN_PA11C_PWM1_PWML0                       _UINT32_(11) /**< PWM1 signal: PWM1_PWML0 on PA11 mux C */
#define MUX_PA11C_PWM1_PWML0                       _UINT32_(2)  /**< PWM1 signal line function value: PWM1_PWML0 */
#define PIO_PA11C_PWM1_PWML0                       (_UINT32_(1) << 11) /**< PWM1 signal: PWM1_PWML0 */
#define PIN_PD0B_PWM1_PWML0                        _UINT32_(96) /**< PWM1 signal: PWM1_PWML0 on PD0 mux B */
#define MUX_PD0B_PWM1_PWML0                        _UINT32_(1)  /**< PWM1 signal line function value: PWM1_PWML0 */
#define PIO_PD0B_PWM1_PWML0                        (_UINT32_(1) << 0) /**< PWM1 signal: PWM1_PWML0 */
#define PIN_PA13C_PWM1_PWML1                       _UINT32_(13) /**< PWM1 signal: PWM1_PWML1 on PA13 mux C */
#define MUX_PA13C_PWM1_PWML1                       _UINT32_(2)  /**< PWM1 signal line function value: PWM1_PWML1 */
#define PIO_PA13C_PWM1_PWML1                       (_UINT32_(1) << 13) /**< PWM1 signal: PWM1_PWML1 */
#define PIN_PD2B_PWM1_PWML1                        _UINT32_(98) /**< PWM1 signal: PWM1_PWML1 on PD2 mux B */
#define MUX_PD2B_PWM1_PWML1                        _UINT32_(1)  /**< PWM1 signal line function value: PWM1_PWML1 */
#define PIO_PD2B_PWM1_PWML1                        (_UINT32_(1) << 2) /**< PWM1 signal: PWM1_PWML1 */
#define PIN_PA23D_PWM1_PWML2                       _UINT32_(23) /**< PWM1 signal: PWM1_PWML2 on PA23 mux D */
#define MUX_PA23D_PWM1_PWML2                       _UINT32_(3)  /**< PWM1 signal line function value: PWM1_PWML2 */
#define PIO_PA23D_PWM1_PWML2                       (_UINT32_(1) << 23) /**< PWM1 signal: PWM1_PWML2 */
#define PIN_PD4B_PWM1_PWML2                        _UINT32_(100) /**< PWM1 signal: PWM1_PWML2 on PD4 mux B */
#define MUX_PD4B_PWM1_PWML2                        _UINT32_(1)  /**< PWM1 signal line function value: PWM1_PWML2 */
#define PIO_PD4B_PWM1_PWML2                        (_UINT32_(1) << 4) /**< PWM1 signal: PWM1_PWML2 */
#define PIN_PA5A_PWM1_PWML3                        _UINT32_(5)  /**< PWM1 signal: PWM1_PWML3 on PA5 mux A */
#define MUX_PA5A_PWM1_PWML3                        _UINT32_(0)  /**< PWM1 signal line function value: PWM1_PWML3 */
#define PIO_PA5A_PWM1_PWML3                        (_UINT32_(1) << 5) /**< PWM1 signal: PWM1_PWML3 */
#define PIN_PD6B_PWM1_PWML3                        _UINT32_(102) /**< PWM1 signal: PWM1_PWML3 on PD6 mux B */
#define MUX_PD6B_PWM1_PWML3                        _UINT32_(1)  /**< PWM1 signal line function value: PWM1_PWML3 */
#define PIO_PD6B_PWM1_PWML3                        (_UINT32_(1) << 6) /**< PWM1 signal: PWM1_PWML3 */
/* ========== PIO definition for QSPI peripheral ========== */
#define PIN_PA11A_QSPI_QCS                         _UINT32_(11) /**< QSPI signal: QSPI_QCS on PA11 mux A */
#define MUX_PA11A_QSPI_QCS                         _UINT32_(0)  /**< QSPI signal line function value: QSPI_QCS */
#define PIO_PA11A_QSPI_QCS                         (_UINT32_(1) << 11) /**< QSPI signal: QSPI_QCS */
#define PIN_PA13A_QSPI_QIO0                        _UINT32_(13) /**< QSPI signal: QSPI_QIO0 on PA13 mux A */
#define MUX_PA13A_QSPI_QIO0                        _UINT32_(0)  /**< QSPI signal line function value: QSPI_QIO0 */
#define PIO_PA13A_QSPI_QIO0                        (_UINT32_(1) << 13) /**< QSPI signal: QSPI_QIO0 */
#define PIN_PA12A_QSPI_QIO1                        _UINT32_(12) /**< QSPI signal: QSPI_QIO1 on PA12 mux A */
#define MUX_PA12A_QSPI_QIO1                        _UINT32_(0)  /**< QSPI signal line function value: QSPI_QIO1 */
#define PIO_PA12A_QSPI_QIO1                        (_UINT32_(1) << 12) /**< QSPI signal: QSPI_QIO1 */
#define PIN_PA17A_QSPI_QIO2                        _UINT32_(17) /**< QSPI signal: QSPI_QIO2 on PA17 mux A */
#define MUX_PA17A_QSPI_QIO2                        _UINT32_(0)  /**< QSPI signal line function value: QSPI_QIO2 */
#define PIO_PA17A_QSPI_QIO2                        (_UINT32_(1) << 17) /**< QSPI signal: QSPI_QIO2 */
#define PIN_PD31A_QSPI_QIO3                        _UINT32_(127) /**< QSPI signal: QSPI_QIO3 on PD31 mux A */
#define MUX_PD31A_QSPI_QIO3                        _UINT32_(0)  /**< QSPI signal line function value: QSPI_QIO3 */
#define PIO_PD31A_QSPI_QIO3                        (_UINT32_(1) << 31) /**< QSPI signal: QSPI_QIO3 */
#define PIN_PA14A_QSPI_QSCK                        _UINT32_(14) /**< QSPI signal: QSPI_QSCK on PA14 mux A */
#define MUX_PA14A_QSPI_QSCK                        _UINT32_(0)  /**< QSPI signal line function value: QSPI_QSCK */
#define PIO_PA14A_QSPI_QSCK                        (_UINT32_(1) << 14) /**< QSPI signal: QSPI_QSCK */
/* ========== PIO definition for RTC peripheral ========== */
#define PIN_PB0X1_RTC_RTCOUT0                      _UINT32_(32) /**< RTC signal: RTC_RTCOUT0 on PB0 mux X1 */
#define PIO_PB0X1_RTC_RTCOUT0                      (_UINT32_(1) << 0) /**< RTC signal: RTC_RTCOUT0 */
#define PIN_PB1X1_RTC_RTCOUT1                      _UINT32_(33) /**< RTC signal: RTC_RTCOUT1 on PB1 mux X1 */
#define PIO_PB1X1_RTC_RTCOUT1                      (_UINT32_(1) << 1) /**< RTC signal: RTC_RTCOUT1 */
/* ========== PIO definition for SSC peripheral ========== */
#define PIN_PA10C_SSC_RD                           _UINT32_(10) /**< SSC signal: SSC_RD on PA10 mux C */
#define MUX_PA10C_SSC_RD                           _UINT32_(2)  /**< SSC signal line function value: SSC_RD */
#define PIO_PA10C_SSC_RD                           (_UINT32_(1) << 10) /**< SSC signal: SSC_RD */
#define PIN_PD24B_SSC_RF                           _UINT32_(120) /**< SSC signal: SSC_RF on PD24 mux B */
#define MUX_PD24B_SSC_RF                           _UINT32_(1)  /**< SSC signal line function value: SSC_RF */
#define PIO_PD24B_SSC_RF                           (_UINT32_(1) << 24) /**< SSC signal: SSC_RF */
#define PIN_PA22A_SSC_RK                           _UINT32_(22) /**< SSC signal: SSC_RK on PA22 mux A */
#define MUX_PA22A_SSC_RK                           _UINT32_(0)  /**< SSC signal line function value: SSC_RK */
#define PIO_PA22A_SSC_RK                           (_UINT32_(1) << 22) /**< SSC signal: SSC_RK */
#define PIN_PB5D_SSC_TD                            _UINT32_(37) /**< SSC signal: SSC_TD on PB5 mux D */
#define MUX_PB5D_SSC_TD                            _UINT32_(3)  /**< SSC signal line function value: SSC_TD */
#define PIO_PB5D_SSC_TD                            (_UINT32_(1) << 5) /**< SSC signal: SSC_TD */
#define PIN_PD10C_SSC_TD                           _UINT32_(106) /**< SSC signal: SSC_TD on PD10 mux C */
#define MUX_PD10C_SSC_TD                           _UINT32_(2)  /**< SSC signal line function value: SSC_TD */
#define PIO_PD10C_SSC_TD                           (_UINT32_(1) << 10) /**< SSC signal: SSC_TD */
#define PIN_PD26B_SSC_TD                           _UINT32_(122) /**< SSC signal: SSC_TD on PD26 mux B */
#define MUX_PD26B_SSC_TD                           _UINT32_(1)  /**< SSC signal line function value: SSC_TD */
#define PIO_PD26B_SSC_TD                           (_UINT32_(1) << 26) /**< SSC signal: SSC_TD */
#define PIN_PB0D_SSC_TF                            _UINT32_(32) /**< SSC signal: SSC_TF on PB0 mux D */
#define MUX_PB0D_SSC_TF                            _UINT32_(3)  /**< SSC signal line function value: SSC_TF */
#define PIO_PB0D_SSC_TF                            (_UINT32_(1) << 0) /**< SSC signal: SSC_TF */
#define PIN_PB1D_SSC_TK                            _UINT32_(33) /**< SSC signal: SSC_TK on PB1 mux D */
#define MUX_PB1D_SSC_TK                            _UINT32_(3)  /**< SSC signal line function value: SSC_TK */
#define PIO_PB1D_SSC_TK                            (_UINT32_(1) << 1) /**< SSC signal: SSC_TK */
/* ========== PIO definition for SUPC peripheral ========== */
#define PIN_PA0X1_SUPC_WKUP0                       _UINT32_(0)  /**< SUPC signal: SUPC_WKUP0 on PA0 mux X1 */
#define PIO_PA0X1_SUPC_WKUP0                       (_UINT32_(1) << 0) /**< SUPC signal: SUPC_WKUP0 */
#define PIN_PA1X1_SUPC_WKUP1                       _UINT32_(1)  /**< SUPC signal: SUPC_WKUP1 on PA1 mux X1 */
#define PIO_PA1X1_SUPC_WKUP1                       (_UINT32_(1) << 1) /**< SUPC signal: SUPC_WKUP1 */
#define PIN_PA2X1_SUPC_WKUP2                       _UINT32_(2)  /**< SUPC signal: SUPC_WKUP2 on PA2 mux X1 */
#define PIO_PA2X1_SUPC_WKUP2                       (_UINT32_(1) << 2) /**< SUPC signal: SUPC_WKUP2 */
#define PIN_PA4X1_SUPC_WKUP3                       _UINT32_(4)  /**< SUPC signal: SUPC_WKUP3 on PA4 mux X1 */
#define PIO_PA4X1_SUPC_WKUP3                       (_UINT32_(1) << 4) /**< SUPC signal: SUPC_WKUP3 */
#define PIN_PA5X1_SUPC_WKUP4                       _UINT32_(5)  /**< SUPC signal: SUPC_WKUP4 on PA5 mux X1 */
#define PIO_PA5X1_SUPC_WKUP4                       (_UINT32_(1) << 5) /**< SUPC signal: SUPC_WKUP4 */
#define PIN_PD28X1_SUPC_WKUP5                      _UINT32_(124) /**< SUPC signal: SUPC_WKUP5 on PD28 mux X1 */
#define PIO_PD28X1_SUPC_WKUP5                      (_UINT32_(1) << 28) /**< SUPC signal: SUPC_WKUP5 */
#define PIN_PA9X1_SUPC_WKUP6                       _UINT32_(9)  /**< SUPC signal: SUPC_WKUP6 on PA9 mux X1 */
#define PIO_PA9X1_SUPC_WKUP6                       (_UINT32_(1) << 9) /**< SUPC signal: SUPC_WKUP6 */
#define PIN_PA11X1_SUPC_WKUP7                      _UINT32_(11) /**< SUPC signal: SUPC_WKUP7 on PA11 mux X1 */
#define PIO_PA11X1_SUPC_WKUP7                      (_UINT32_(1) << 11) /**< SUPC signal: SUPC_WKUP7 */
#define PIN_PA14X1_SUPC_WKUP8                      _UINT32_(14) /**< SUPC signal: SUPC_WKUP8 on PA14 mux X1 */
#define PIO_PA14X1_SUPC_WKUP8                      (_UINT32_(1) << 14) /**< SUPC signal: SUPC_WKUP8 */
#define PIN_PA19X1_SUPC_WKUP9                      _UINT32_(19) /**< SUPC signal: SUPC_WKUP9 on PA19 mux X1 */
#define PIO_PA19X1_SUPC_WKUP9                      (_UINT32_(1) << 19) /**< SUPC signal: SUPC_WKUP9 */
#define PIN_PA20X1_SUPC_WKUP10                     _UINT32_(20) /**< SUPC signal: SUPC_WKUP10 on PA20 mux X1 */
#define PIO_PA20X1_SUPC_WKUP10                     (_UINT32_(1) << 20) /**< SUPC signal: SUPC_WKUP10 */
#define PIN_PA30X1_SUPC_WKUP11                     _UINT32_(30) /**< SUPC signal: SUPC_WKUP11 on PA30 mux X1 */
#define PIO_PA30X1_SUPC_WKUP11                     (_UINT32_(1) << 30) /**< SUPC signal: SUPC_WKUP11 */
#define PIN_PB3X1_SUPC_WKUP12                      _UINT32_(35) /**< SUPC signal: SUPC_WKUP12 on PB3 mux X1 */
#define PIO_PB3X1_SUPC_WKUP12                      (_UINT32_(1) << 3) /**< SUPC signal: SUPC_WKUP12 */
#define PIN_PB5X1_SUPC_WKUP13                      _UINT32_(37) /**< SUPC signal: SUPC_WKUP13 on PB5 mux X1 */
#define PIO_PB5X1_SUPC_WKUP13                      (_UINT32_(1) << 5) /**< SUPC signal: SUPC_WKUP13 */
/* ========== PIO definition for TC0 peripheral ========== */
#define PIN_PA4B_TC0_TCLK0                         _UINT32_(4)  /**< TC0 signal: TC0_TCLK0 on PA4 mux B */
#define MUX_PA4B_TC0_TCLK0                         _UINT32_(1)  /**< TC0 signal line function value: TC0_TCLK0 */
#define PIO_PA4B_TC0_TCLK0                         (_UINT32_(1) << 4) /**< TC0 signal: TC0_TCLK0 */
#define PIN_PA28B_TC0_TCLK1                        _UINT32_(28) /**< TC0 signal: TC0_TCLK1 on PA28 mux B */
#define MUX_PA28B_TC0_TCLK1                        _UINT32_(1)  /**< TC0 signal line function value: TC0_TCLK1 */
#define PIO_PA28B_TC0_TCLK1                        (_UINT32_(1) << 28) /**< TC0 signal: TC0_TCLK1 */
#define PIN_PA29B_TC0_TCLK2                        _UINT32_(29) /**< TC0 signal: TC0_TCLK2 on PA29 mux B */
#define MUX_PA29B_TC0_TCLK2                        _UINT32_(1)  /**< TC0 signal line function value: TC0_TCLK2 */
#define PIO_PA29B_TC0_TCLK2                        (_UINT32_(1) << 29) /**< TC0 signal: TC0_TCLK2 */
#define PIN_PA0B_TC0_TIOA0                         _UINT32_(0)  /**< TC0 signal: TC0_TIOA0 on PA0 mux B */
#define MUX_PA0B_TC0_TIOA0                         _UINT32_(1)  /**< TC0 signal line function value: TC0_TIOA0 */
#define PIO_PA0B_TC0_TIOA0                         (_UINT32_(1) << 0) /**< TC0 signal: TC0_TIOA0 */
#define PIN_PA15B_TC0_TIOA1                        _UINT32_(15) /**< TC0 signal: TC0_TIOA1 on PA15 mux B */
#define MUX_PA15B_TC0_TIOA1                        _UINT32_(1)  /**< TC0 signal line function value: TC0_TIOA1 */
#define PIO_PA15B_TC0_TIOA1                        (_UINT32_(1) << 15) /**< TC0 signal: TC0_TIOA1 */
#define PIN_PA26B_TC0_TIOA2                        _UINT32_(26) /**< TC0 signal: TC0_TIOA2 on PA26 mux B */
#define MUX_PA26B_TC0_TIOA2                        _UINT32_(1)  /**< TC0 signal line function value: TC0_TIOA2 */
#define PIO_PA26B_TC0_TIOA2                        (_UINT32_(1) << 26) /**< TC0 signal: TC0_TIOA2 */
#define PIN_PA1B_TC0_TIOB0                         _UINT32_(1)  /**< TC0 signal: TC0_TIOB0 on PA1 mux B */
#define MUX_PA1B_TC0_TIOB0                         _UINT32_(1)  /**< TC0 signal line function value: TC0_TIOB0 */
#define PIO_PA1B_TC0_TIOB0                         (_UINT32_(1) << 1) /**< TC0 signal: TC0_TIOB0 */
#define PIN_PA16B_TC0_TIOB1                        _UINT32_(16) /**< TC0 signal: TC0_TIOB1 on PA16 mux B */
#define MUX_PA16B_TC0_TIOB1                        _UINT32_(1)  /**< TC0 signal line function value: TC0_TIOB1 */
#define PIO_PA16B_TC0_TIOB1                        (_UINT32_(1) << 16) /**< TC0 signal: TC0_TIOB1 */
#define PIN_PA27B_TC0_TIOB2                        _UINT32_(27) /**< TC0 signal: TC0_TIOB2 on PA27 mux B */
#define MUX_PA27B_TC0_TIOB2                        _UINT32_(1)  /**< TC0 signal line function value: TC0_TIOB2 */
#define PIO_PA27B_TC0_TIOB2                        (_UINT32_(1) << 27) /**< TC0 signal: TC0_TIOB2 */
/* ========== PIO definition for TC3 peripheral ========== */
#define PIN_PD24C_TC3_TCLK11                       _UINT32_(120) /**< TC3 signal: TC3_TCLK11 on PD24 mux C */
#define MUX_PD24C_TC3_TCLK11                       _UINT32_(2)  /**< TC3 signal line function value: TC3_TCLK11 */
#define PIO_PD24C_TC3_TCLK11                       (_UINT32_(1) << 24) /**< TC3 signal: TC3_TCLK11 */
#define PIN_PD21C_TC3_TIOA11                       _UINT32_(117) /**< TC3 signal: TC3_TIOA11 on PD21 mux C */
#define MUX_PD21C_TC3_TIOA11                       _UINT32_(2)  /**< TC3 signal line function value: TC3_TIOA11 */
#define PIO_PD21C_TC3_TIOA11                       (_UINT32_(1) << 21) /**< TC3 signal: TC3_TIOA11 */
#define PIN_PD22C_TC3_TIOB11                       _UINT32_(118) /**< TC3 signal: TC3_TIOB11 on PD22 mux C */
#define MUX_PD22C_TC3_TIOB11                       _UINT32_(2)  /**< TC3 signal line function value: TC3_TIOB11 */
#define PIO_PD22C_TC3_TIOB11                       (_UINT32_(1) << 22) /**< TC3 signal: TC3_TIOB11 */
/* ========== PIO definition for TWIHS0 peripheral ========== */
#define PIN_PA4A_TWIHS0_TWCK0                      _UINT32_(4)  /**< TWIHS0 signal: TWIHS0_TWCK0 on PA4 mux A */
#define MUX_PA4A_TWIHS0_TWCK0                      _UINT32_(0)  /**< TWIHS0 signal line function value: TWIHS0_TWCK0 */
#define PIO_PA4A_TWIHS0_TWCK0                      (_UINT32_(1) << 4) /**< TWIHS0 signal: TWIHS0_TWCK0 */
#define PIN_PA3A_TWIHS0_TWD0                       _UINT32_(3)  /**< TWIHS0 signal: TWIHS0_TWD0 on PA3 mux A */
#define MUX_PA3A_TWIHS0_TWD0                       _UINT32_(0)  /**< TWIHS0 signal line function value: TWIHS0_TWD0 */
#define PIO_PA3A_TWIHS0_TWD0                       (_UINT32_(1) << 3) /**< TWIHS0 signal: TWIHS0_TWD0 */
/* ========== PIO definition for TWIHS1 peripheral ========== */
#define PIN_PB5A_TWIHS1_TWCK1                      _UINT32_(37) /**< TWIHS1 signal: TWIHS1_TWCK1 on PB5 mux A */
#define MUX_PB5A_TWIHS1_TWCK1                      _UINT32_(0)  /**< TWIHS1 signal line function value: TWIHS1_TWCK1 */
#define PIO_PB5A_TWIHS1_TWCK1                      (_UINT32_(1) << 5) /**< TWIHS1 signal: TWIHS1_TWCK1 */
#define PIN_PB4A_TWIHS1_TWD1                       _UINT32_(36) /**< TWIHS1 signal: TWIHS1_TWD1 on PB4 mux A */
#define MUX_PB4A_TWIHS1_TWD1                       _UINT32_(0)  /**< TWIHS1 signal line function value: TWIHS1_TWD1 */
#define PIO_PB4A_TWIHS1_TWD1                       (_UINT32_(1) << 4) /**< TWIHS1 signal: TWIHS1_TWD1 */
/* ========== PIO definition for UART0 peripheral ========== */
#define PIN_PA9A_UART0_URXD0                       _UINT32_(9)  /**< UART0 signal: UART0_URXD0 on PA9 mux A */
#define MUX_PA9A_UART0_URXD0                       _UINT32_(0)  /**< UART0 signal line function value: UART0_URXD0 */
#define PIO_PA9A_UART0_URXD0                       (_UINT32_(1) << 9) /**< UART0 signal: UART0_URXD0 */
#define PIN_PA10A_UART0_UTXD0                      _UINT32_(10) /**< UART0 signal: UART0_UTXD0 on PA10 mux A */
#define MUX_PA10A_UART0_UTXD0                      _UINT32_(0)  /**< UART0 signal line function value: UART0_UTXD0 */
#define PIO_PA10A_UART0_UTXD0                      (_UINT32_(1) << 10) /**< UART0 signal: UART0_UTXD0 */
/* ========== PIO definition for UART1 peripheral ========== */
#define PIN_PA5C_UART1_URXD1                       _UINT32_(5)  /**< UART1 signal: UART1_URXD1 on PA5 mux C */
#define MUX_PA5C_UART1_URXD1                       _UINT32_(2)  /**< UART1 signal line function value: UART1_URXD1 */
#define PIO_PA5C_UART1_URXD1                       (_UINT32_(1) << 5) /**< UART1 signal: UART1_URXD1 */
#define PIN_PA4C_UART1_UTXD1                       _UINT32_(4)  /**< UART1 signal: UART1_UTXD1 on PA4 mux C */
#define MUX_PA4C_UART1_UTXD1                       _UINT32_(2)  /**< UART1 signal line function value: UART1_UTXD1 */
#define PIO_PA4C_UART1_UTXD1                       (_UINT32_(1) << 4) /**< UART1 signal: UART1_UTXD1 */
#define PIN_PA6C_UART1_UTXD1                       _UINT32_(6)  /**< UART1 signal: UART1_UTXD1 on PA6 mux C */
#define MUX_PA6C_UART1_UTXD1                       _UINT32_(2)  /**< UART1 signal line function value: UART1_UTXD1 */
#define PIO_PA6C_UART1_UTXD1                       (_UINT32_(1) << 6) /**< UART1 signal: UART1_UTXD1 */
#define PIN_PD26D_UART1_UTXD1                      _UINT32_(122) /**< UART1 signal: UART1_UTXD1 on PD26 mux D */
#define MUX_PD26D_UART1_UTXD1                      _UINT32_(3)  /**< UART1 signal line function value: UART1_UTXD1 */
#define PIO_PD26D_UART1_UTXD1                      (_UINT32_(1) << 26) /**< UART1 signal: UART1_UTXD1 */
/* ========== PIO definition for UART2 peripheral ========== */
#define PIN_PD25C_UART2_URXD2                      _UINT32_(121) /**< UART2 signal: UART2_URXD2 on PD25 mux C */
#define MUX_PD25C_UART2_URXD2                      _UINT32_(2)  /**< UART2 signal line function value: UART2_URXD2 */
#define PIO_PD25C_UART2_URXD2                      (_UINT32_(1) << 25) /**< UART2 signal: UART2_URXD2 */
#define PIN_PD26C_UART2_UTXD2                      _UINT32_(122) /**< UART2 signal: UART2_UTXD2 on PD26 mux C */
#define MUX_PD26C_UART2_UTXD2                      _UINT32_(2)  /**< UART2 signal line function value: UART2_UTXD2 */
#define PIO_PD26C_UART2_UTXD2                      (_UINT32_(1) << 26) /**< UART2 signal: UART2_UTXD2 */
/* ========== PIO definition for USART0 peripheral ========== */
#define PIN_PB2C_USART0_CTS0                       _UINT32_(34) /**< USART0 signal: USART0_CTS0 on PB2 mux C */
#define MUX_PB2C_USART0_CTS0                       _UINT32_(2)  /**< USART0 signal line function value: USART0_CTS0 */
#define PIO_PB2C_USART0_CTS0                       (_UINT32_(1) << 2) /**< USART0 signal: USART0_CTS0 */
#define PIN_PD0D_USART0_DCD0                       _UINT32_(96) /**< USART0 signal: USART0_DCD0 on PD0 mux D */
#define MUX_PD0D_USART0_DCD0                       _UINT32_(3)  /**< USART0 signal line function value: USART0_DCD0 */
#define PIO_PD0D_USART0_DCD0                       (_UINT32_(1) << 0) /**< USART0 signal: USART0_DCD0 */
#define PIN_PD2D_USART0_DSR0                       _UINT32_(98) /**< USART0 signal: USART0_DSR0 on PD2 mux D */
#define MUX_PD2D_USART0_DSR0                       _UINT32_(3)  /**< USART0 signal line function value: USART0_DSR0 */
#define PIO_PD2D_USART0_DSR0                       (_UINT32_(1) << 2) /**< USART0 signal: USART0_DSR0 */
#define PIN_PD1D_USART0_DTR0                       _UINT32_(97) /**< USART0 signal: USART0_DTR0 on PD1 mux D */
#define MUX_PD1D_USART0_DTR0                       _UINT32_(3)  /**< USART0 signal line function value: USART0_DTR0 */
#define PIO_PD1D_USART0_DTR0                       (_UINT32_(1) << 1) /**< USART0 signal: USART0_DTR0 */
#define PIN_PD3D_USART0_RI0                        _UINT32_(99) /**< USART0 signal: USART0_RI0 on PD3 mux D */
#define MUX_PD3D_USART0_RI0                        _UINT32_(3)  /**< USART0 signal line function value: USART0_RI0 */
#define PIO_PD3D_USART0_RI0                        (_UINT32_(1) << 3) /**< USART0 signal: USART0_RI0 */
#define PIN_PB3C_USART0_RTS0                       _UINT32_(35) /**< USART0 signal: USART0_RTS0 on PB3 mux C */
#define MUX_PB3C_USART0_RTS0                       _UINT32_(2)  /**< USART0 signal line function value: USART0_RTS0 */
#define PIO_PB3C_USART0_RTS0                       (_UINT32_(1) << 3) /**< USART0 signal: USART0_RTS0 */
#define PIN_PB0C_USART0_RXD0                       _UINT32_(32) /**< USART0 signal: USART0_RXD0 on PB0 mux C */
#define MUX_PB0C_USART0_RXD0                       _UINT32_(2)  /**< USART0 signal line function value: USART0_RXD0 */
#define PIO_PB0C_USART0_RXD0                       (_UINT32_(1) << 0) /**< USART0 signal: USART0_RXD0 */
#define PIN_PB13C_USART0_SCK0                      _UINT32_(45) /**< USART0 signal: USART0_SCK0 on PB13 mux C */
#define MUX_PB13C_USART0_SCK0                      _UINT32_(2)  /**< USART0 signal line function value: USART0_SCK0 */
#define PIO_PB13C_USART0_SCK0                      (_UINT32_(1) << 13) /**< USART0 signal: USART0_SCK0 */
#define PIN_PB1C_USART0_TXD0                       _UINT32_(33) /**< USART0 signal: USART0_TXD0 on PB1 mux C */
#define MUX_PB1C_USART0_TXD0                       _UINT32_(2)  /**< USART0 signal line function value: USART0_TXD0 */
#define PIO_PB1C_USART0_TXD0                       (_UINT32_(1) << 1) /**< USART0 signal: USART0_TXD0 */
/* ========== PIO definition for USART1 peripheral ========== */
#define PIN_PA25A_USART1_CTS1                      _UINT32_(25) /**< USART1 signal: USART1_CTS1 on PA25 mux A */
#define MUX_PA25A_USART1_CTS1                      _UINT32_(0)  /**< USART1 signal line function value: USART1_CTS1 */
#define PIO_PA25A_USART1_CTS1                      (_UINT32_(1) << 25) /**< USART1 signal: USART1_CTS1 */
#define PIN_PA26A_USART1_DCD1                      _UINT32_(26) /**< USART1 signal: USART1_DCD1 on PA26 mux A */
#define MUX_PA26A_USART1_DCD1                      _UINT32_(0)  /**< USART1 signal line function value: USART1_DCD1 */
#define PIO_PA26A_USART1_DCD1                      (_UINT32_(1) << 26) /**< USART1 signal: USART1_DCD1 */
#define PIN_PA28A_USART1_DSR1                      _UINT32_(28) /**< USART1 signal: USART1_DSR1 on PA28 mux A */
#define MUX_PA28A_USART1_DSR1                      _UINT32_(0)  /**< USART1 signal line function value: USART1_DSR1 */
#define PIO_PA28A_USART1_DSR1                      (_UINT32_(1) << 28) /**< USART1 signal: USART1_DSR1 */
#define PIN_PA27A_USART1_DTR1                      _UINT32_(27) /**< USART1 signal: USART1_DTR1 on PA27 mux A */
#define MUX_PA27A_USART1_DTR1                      _UINT32_(0)  /**< USART1 signal line function value: USART1_DTR1 */
#define PIO_PA27A_USART1_DTR1                      (_UINT32_(1) << 27) /**< USART1 signal: USART1_DTR1 */
#define PIN_PA3B_USART1_LONCOL1                    _UINT32_(3)  /**< USART1 signal: USART1_LONCOL1 on PA3 mux B */
#define MUX_PA3B_USART1_LONCOL1                    _UINT32_(1)  /**< USART1 signal line function value: USART1_LONCOL1 */
#define PIO_PA3B_USART1_LONCOL1                    (_UINT32_(1) << 3) /**< USART1 signal: USART1_LONCOL1 */
#define PIN_PA29A_USART1_RI1                       _UINT32_(29) /**< USART1 signal: USART1_RI1 on PA29 mux A */
#define MUX_PA29A_USART1_RI1                       _UINT32_(0)  /**< USART1 signal line function value: USART1_RI1 */
#define PIO_PA29A_USART1_RI1                       (_UINT32_(1) << 29) /**< USART1 signal: USART1_RI1 */
#define PIN_PA24A_USART1_RTS1                      _UINT32_(24) /**< USART1 signal: USART1_RTS1 on PA24 mux A */
#define MUX_PA24A_USART1_RTS1                      _UINT32_(0)  /**< USART1 signal line function value: USART1_RTS1 */
#define PIO_PA24A_USART1_RTS1                      (_UINT32_(1) << 24) /**< USART1 signal: USART1_RTS1 */
#define PIN_PA21A_USART1_RXD1                      _UINT32_(21) /**< USART1 signal: USART1_RXD1 on PA21 mux A */
#define MUX_PA21A_USART1_RXD1                      _UINT32_(0)  /**< USART1 signal line function value: USART1_RXD1 */
#define PIO_PA21A_USART1_RXD1                      (_UINT32_(1) << 21) /**< USART1 signal: USART1_RXD1 */
#define PIN_PA23A_USART1_SCK1                      _UINT32_(23) /**< USART1 signal: USART1_SCK1 on PA23 mux A */
#define MUX_PA23A_USART1_SCK1                      _UINT32_(0)  /**< USART1 signal line function value: USART1_SCK1 */
#define PIO_PA23A_USART1_SCK1                      (_UINT32_(1) << 23) /**< USART1 signal: USART1_SCK1 */
#define PIN_PB4D_USART1_TXD1                       _UINT32_(36) /**< USART1 signal: USART1_TXD1 on PB4 mux D */
#define MUX_PB4D_USART1_TXD1                       _UINT32_(3)  /**< USART1 signal line function value: USART1_TXD1 */
#define PIO_PB4D_USART1_TXD1                       (_UINT32_(1) << 4) /**< USART1 signal: USART1_TXD1 */
/* ========== PIO definition for ICE peripheral ========== */
#define PIN_PB7X1_ICE_SWDCLK                       _UINT32_(39) /**< ICE signal: ICE_SWDCLK on PB7 mux X1 */
#define PIO_PB7X1_ICE_SWDCLK                       (_UINT32_(1) << 7) /**< ICE signal: ICE_SWDCLK */
#define PIN_PB6X1_ICE_SWDIO                        _UINT32_(38) /**< ICE signal: ICE_SWDIO on PB6 mux X1 */
#define PIO_PB6X1_ICE_SWDIO                        (_UINT32_(1) << 6) /**< ICE signal: ICE_SWDIO */
#define PIN_PB7X1_ICE_TCK                          _UINT32_(39) /**< ICE signal: ICE_TCK on PB7 mux X1 */
#define PIO_PB7X1_ICE_TCK                          (_UINT32_(1) << 7) /**< ICE signal: ICE_TCK */
#define PIN_PB4X1_ICE_TDI                          _UINT32_(36) /**< ICE signal: ICE_TDI on PB4 mux X1 */
#define PIO_PB4X1_ICE_TDI                          (_UINT32_(1) << 4) /**< ICE signal: ICE_TDI */
#define PIN_PB5X1_ICE_TDO                          _UINT32_(37) /**< ICE signal: ICE_TDO on PB5 mux X1 */
#define PIO_PB5X1_ICE_TDO                          (_UINT32_(1) << 5) /**< ICE signal: ICE_TDO */
#define PIN_PB6X1_ICE_TMS                          _UINT32_(38) /**< ICE signal: ICE_TMS on PB6 mux X1 */
#define PIO_PB6X1_ICE_TMS                          (_UINT32_(1) << 6) /**< ICE signal: ICE_TMS */
#define PIN_PB5X1_ICE_TRACESWO                     _UINT32_(37) /**< ICE signal: ICE_TRACESWO on PB5 mux X1 */
#define PIO_PB5X1_ICE_TRACESWO                     (_UINT32_(1) << 5) /**< ICE signal: ICE_TRACESWO */
/* ========== PIO definition for TPIU peripheral ========== */
#define PIN_PD8D_TPIU_TRACECLK                     _UINT32_(104) /**< TPIU signal: TPIU_TRACECLK on PD8 mux D */
#define MUX_PD8D_TPIU_TRACECLK                     _UINT32_(3)  /**< TPIU signal line function value: TPIU_TRACECLK */
#define PIO_PD8D_TPIU_TRACECLK                     (_UINT32_(1) << 8) /**< TPIU signal: TPIU_TRACECLK */
#define PIN_PD4C_TPIU_TRACED0                      _UINT32_(100) /**< TPIU signal: TPIU_TRACED0 on PD4 mux C */
#define MUX_PD4C_TPIU_TRACED0                      _UINT32_(2)  /**< TPIU signal line function value: TPIU_TRACED0 */
#define PIO_PD4C_TPIU_TRACED0                      (_UINT32_(1) << 4) /**< TPIU signal: TPIU_TRACED0 */
#define PIN_PD5C_TPIU_TRACED1                      _UINT32_(101) /**< TPIU signal: TPIU_TRACED1 on PD5 mux C */
#define MUX_PD5C_TPIU_TRACED1                      _UINT32_(2)  /**< TPIU signal line function value: TPIU_TRACED1 */
#define PIO_PD5C_TPIU_TRACED1                      (_UINT32_(1) << 5) /**< TPIU signal: TPIU_TRACED1 */
#define PIN_PD6C_TPIU_TRACED2                      _UINT32_(102) /**< TPIU signal: TPIU_TRACED2 on PD6 mux C */
#define MUX_PD6C_TPIU_TRACED2                      _UINT32_(2)  /**< TPIU signal line function value: TPIU_TRACED2 */
#define PIO_PD6C_TPIU_TRACED2                      (_UINT32_(1) << 6) /**< TPIU signal: TPIU_TRACED2 */
#define PIN_PD7C_TPIU_TRACED3                      _UINT32_(103) /**< TPIU signal: TPIU_TRACED3 on PD7 mux C */
#define MUX_PD7C_TPIU_TRACED3                      _UINT32_(2)  /**< TPIU signal line function value: TPIU_TRACED3 */
#define PIO_PD7C_TPIU_TRACED3                      (_UINT32_(1) << 7) /**< TPIU signal: TPIU_TRACED3 */

#endif /* _SAMV71J19B_GPIO_H_ */

