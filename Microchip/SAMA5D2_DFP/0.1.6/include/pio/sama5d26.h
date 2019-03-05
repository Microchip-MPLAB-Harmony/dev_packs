/**
 * \file
 *
 * \brief Peripheral I/O description for SAMA5D26
 *
 * Copyright (c) 2019 Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \license_stop
 *
 */

/* file generated from device description version 2019-01-23T22:42:10Z */
#ifndef _SAMA5D26_PIO_H_
#define _SAMA5D26_PIO_H_

/* ========== Peripheral I/O pin numbers ========== */
#define PIN_PA0                     (  0)  /**< Pin Number for PA0 */
#define PIN_PA1                     (  1)  /**< Pin Number for PA1 */
#define PIN_PA2                     (  2)  /**< Pin Number for PA2 */
#define PIN_PA3                     (  3)  /**< Pin Number for PA3 */
#define PIN_PA4                     (  4)  /**< Pin Number for PA4 */
#define PIN_PA5                     (  5)  /**< Pin Number for PA5 */
#define PIN_PA6                     (  6)  /**< Pin Number for PA6 */
#define PIN_PA7                     (  7)  /**< Pin Number for PA7 */
#define PIN_PA8                     (  8)  /**< Pin Number for PA8 */
#define PIN_PA9                     (  9)  /**< Pin Number for PA9 */
#define PIN_PA10                    ( 10)  /**< Pin Number for PA10 */
#define PIN_PA11                    ( 11)  /**< Pin Number for PA11 */
#define PIN_PA12                    ( 12)  /**< Pin Number for PA12 */
#define PIN_PA13                    ( 13)  /**< Pin Number for PA13 */
#define PIN_PA14                    ( 14)  /**< Pin Number for PA14 */
#define PIN_PA15                    ( 15)  /**< Pin Number for PA15 */
#define PIN_PA16                    ( 16)  /**< Pin Number for PA16 */
#define PIN_PA17                    ( 17)  /**< Pin Number for PA17 */
#define PIN_PA18                    ( 18)  /**< Pin Number for PA18 */
#define PIN_PA19                    ( 19)  /**< Pin Number for PA19 */
#define PIN_PA20                    ( 20)  /**< Pin Number for PA20 */
#define PIN_PA21                    ( 21)  /**< Pin Number for PA21 */
#define PIN_PA22                    ( 22)  /**< Pin Number for PA22 */
#define PIN_PA23                    ( 23)  /**< Pin Number for PA23 */
#define PIN_PA24                    ( 24)  /**< Pin Number for PA24 */
#define PIN_PA25                    ( 25)  /**< Pin Number for PA25 */
#define PIN_PA26                    ( 26)  /**< Pin Number for PA26 */
#define PIN_PA27                    ( 27)  /**< Pin Number for PA27 */
#define PIN_PA28                    ( 28)  /**< Pin Number for PA28 */
#define PIN_PA29                    ( 29)  /**< Pin Number for PA29 */
#define PIN_PA30                    ( 30)  /**< Pin Number for PA30 */
#define PIN_PA31                    ( 31)  /**< Pin Number for PA31 */
#define PIN_PB0                     ( 32)  /**< Pin Number for PB0 */
#define PIN_PB1                     ( 33)  /**< Pin Number for PB1 */
#define PIN_PB2                     ( 34)  /**< Pin Number for PB2 */
#define PIN_PB3                     ( 35)  /**< Pin Number for PB3 */
#define PIN_PB4                     ( 36)  /**< Pin Number for PB4 */
#define PIN_PB5                     ( 37)  /**< Pin Number for PB5 */
#define PIN_PB6                     ( 38)  /**< Pin Number for PB6 */
#define PIN_PB7                     ( 39)  /**< Pin Number for PB7 */
#define PIN_PB8                     ( 40)  /**< Pin Number for PB8 */
#define PIN_PB9                     ( 41)  /**< Pin Number for PB9 */
#define PIN_PB10                    ( 42)  /**< Pin Number for PB10 */
#define PIN_PB11                    ( 43)  /**< Pin Number for PB11 */
#define PIN_PB12                    ( 44)  /**< Pin Number for PB12 */
#define PIN_PB13                    ( 45)  /**< Pin Number for PB13 */
#define PIN_PB14                    ( 46)  /**< Pin Number for PB14 */
#define PIN_PB15                    ( 47)  /**< Pin Number for PB15 */
#define PIN_PB16                    ( 48)  /**< Pin Number for PB16 */
#define PIN_PB17                    ( 49)  /**< Pin Number for PB17 */
#define PIN_PB18                    ( 50)  /**< Pin Number for PB18 */
#define PIN_PB19                    ( 51)  /**< Pin Number for PB19 */
#define PIN_PB20                    ( 52)  /**< Pin Number for PB20 */
#define PIN_PB21                    ( 53)  /**< Pin Number for PB21 */
#define PIN_PB22                    ( 54)  /**< Pin Number for PB22 */
#define PIN_PB23                    ( 55)  /**< Pin Number for PB23 */
#define PIN_PB24                    ( 56)  /**< Pin Number for PB24 */
#define PIN_PB25                    ( 57)  /**< Pin Number for PB25 */
#define PIN_PB26                    ( 58)  /**< Pin Number for PB26 */
#define PIN_PB27                    ( 59)  /**< Pin Number for PB27 */
#define PIN_PB28                    ( 60)  /**< Pin Number for PB28 */
#define PIN_PB29                    ( 61)  /**< Pin Number for PB29 */
#define PIN_PB30                    ( 62)  /**< Pin Number for PB30 */
#define PIN_PB31                    ( 63)  /**< Pin Number for PB31 */
#define PIN_PC0                     ( 64)  /**< Pin Number for PC0 */
#define PIN_PC1                     ( 65)  /**< Pin Number for PC1 */
#define PIN_PC2                     ( 66)  /**< Pin Number for PC2 */
#define PIN_PC3                     ( 67)  /**< Pin Number for PC3 */
#define PIN_PC4                     ( 68)  /**< Pin Number for PC4 */
#define PIN_PC5                     ( 69)  /**< Pin Number for PC5 */
#define PIN_PC6                     ( 70)  /**< Pin Number for PC6 */
#define PIN_PC7                     ( 71)  /**< Pin Number for PC7 */
#define PIN_PC8                     ( 72)  /**< Pin Number for PC8 */
#define PIN_PC9                     ( 73)  /**< Pin Number for PC9 */
#define PIN_PC10                    ( 74)  /**< Pin Number for PC10 */
#define PIN_PC11                    ( 75)  /**< Pin Number for PC11 */
#define PIN_PC12                    ( 76)  /**< Pin Number for PC12 */
#define PIN_PC13                    ( 77)  /**< Pin Number for PC13 */
#define PIN_PC14                    ( 78)  /**< Pin Number for PC14 */
#define PIN_PC15                    ( 79)  /**< Pin Number for PC15 */
#define PIN_PC16                    ( 80)  /**< Pin Number for PC16 */
#define PIN_PC17                    ( 81)  /**< Pin Number for PC17 */
#define PIN_PC18                    ( 82)  /**< Pin Number for PC18 */
#define PIN_PC19                    ( 83)  /**< Pin Number for PC19 */
#define PIN_PC20                    ( 84)  /**< Pin Number for PC20 */
#define PIN_PC21                    ( 85)  /**< Pin Number for PC21 */
#define PIN_PC22                    ( 86)  /**< Pin Number for PC22 */
#define PIN_PC23                    ( 87)  /**< Pin Number for PC23 */
#define PIN_PC24                    ( 88)  /**< Pin Number for PC24 */
#define PIN_PC25                    ( 89)  /**< Pin Number for PC25 */
#define PIN_PC26                    ( 90)  /**< Pin Number for PC26 */
#define PIN_PC27                    ( 91)  /**< Pin Number for PC27 */
#define PIN_PC28                    ( 92)  /**< Pin Number for PC28 */
#define PIN_PC29                    ( 93)  /**< Pin Number for PC29 */
#define PIN_PC30                    ( 94)  /**< Pin Number for PC30 */
#define PIN_PC31                    ( 95)  /**< Pin Number for PC31 */
#define PIN_PD0                     ( 96)  /**< Pin Number for PD0 */
#define PIN_PD1                     ( 97)  /**< Pin Number for PD1 */
#define PIN_PD2                     ( 98)  /**< Pin Number for PD2 */
#define PIN_PD3                     ( 99)  /**< Pin Number for PD3 */
#define PIN_PD4                     (100)  /**< Pin Number for PD4 */
#define PIN_PD5                     (101)  /**< Pin Number for PD5 */
#define PIN_PD6                     (102)  /**< Pin Number for PD6 */
#define PIN_PD7                     (103)  /**< Pin Number for PD7 */
#define PIN_PD8                     (104)  /**< Pin Number for PD8 */
#define PIN_PD9                     (105)  /**< Pin Number for PD9 */
#define PIN_PD10                    (106)  /**< Pin Number for PD10 */
#define PIN_PD11                    (107)  /**< Pin Number for PD11 */
#define PIN_PD12                    (108)  /**< Pin Number for PD12 */
#define PIN_PD13                    (109)  /**< Pin Number for PD13 */
#define PIN_PD14                    (110)  /**< Pin Number for PD14 */
#define PIN_PD15                    (111)  /**< Pin Number for PD15 */
#define PIN_PD16                    (112)  /**< Pin Number for PD16 */
#define PIN_PD17                    (113)  /**< Pin Number for PD17 */
#define PIN_PD18                    (114)  /**< Pin Number for PD18 */
#define PIN_PD19                    (115)  /**< Pin Number for PD19 */
#define PIN_PD20                    (116)  /**< Pin Number for PD20 */
#define PIN_PD21                    (117)  /**< Pin Number for PD21 */
#define PIN_PD22                    (118)  /**< Pin Number for PD22 */
#define PIN_PD23                    (119)  /**< Pin Number for PD23 */
#define PIN_PD24                    (120)  /**< Pin Number for PD24 */
#define PIN_PD25                    (121)  /**< Pin Number for PD25 */
#define PIN_PD26                    (122)  /**< Pin Number for PD26 */
#define PIN_PD27                    (123)  /**< Pin Number for PD27 */
#define PIN_PD28                    (124)  /**< Pin Number for PD28 */
#define PIN_PD29                    (125)  /**< Pin Number for PD29 */
#define PIN_PD30                    (126)  /**< Pin Number for PD30 */
#define PIN_PD31                    (127)  /**< Pin Number for PD31 */


/* ========== Peripheral I/O masks ========== */
#define PIO_PA0                     (_U_(1) << 0) /**< PIO Mask for PA0 */
#define PIO_PA1                     (_U_(1) << 1) /**< PIO Mask for PA1 */
#define PIO_PA2                     (_U_(1) << 2) /**< PIO Mask for PA2 */
#define PIO_PA3                     (_U_(1) << 3) /**< PIO Mask for PA3 */
#define PIO_PA4                     (_U_(1) << 4) /**< PIO Mask for PA4 */
#define PIO_PA5                     (_U_(1) << 5) /**< PIO Mask for PA5 */
#define PIO_PA6                     (_U_(1) << 6) /**< PIO Mask for PA6 */
#define PIO_PA7                     (_U_(1) << 7) /**< PIO Mask for PA7 */
#define PIO_PA8                     (_U_(1) << 8) /**< PIO Mask for PA8 */
#define PIO_PA9                     (_U_(1) << 9) /**< PIO Mask for PA9 */
#define PIO_PA10                    (_U_(1) << 10) /**< PIO Mask for PA10 */
#define PIO_PA11                    (_U_(1) << 11) /**< PIO Mask for PA11 */
#define PIO_PA12                    (_U_(1) << 12) /**< PIO Mask for PA12 */
#define PIO_PA13                    (_U_(1) << 13) /**< PIO Mask for PA13 */
#define PIO_PA14                    (_U_(1) << 14) /**< PIO Mask for PA14 */
#define PIO_PA15                    (_U_(1) << 15) /**< PIO Mask for PA15 */
#define PIO_PA16                    (_U_(1) << 16) /**< PIO Mask for PA16 */
#define PIO_PA17                    (_U_(1) << 17) /**< PIO Mask for PA17 */
#define PIO_PA18                    (_U_(1) << 18) /**< PIO Mask for PA18 */
#define PIO_PA19                    (_U_(1) << 19) /**< PIO Mask for PA19 */
#define PIO_PA20                    (_U_(1) << 20) /**< PIO Mask for PA20 */
#define PIO_PA21                    (_U_(1) << 21) /**< PIO Mask for PA21 */
#define PIO_PA22                    (_U_(1) << 22) /**< PIO Mask for PA22 */
#define PIO_PA23                    (_U_(1) << 23) /**< PIO Mask for PA23 */
#define PIO_PA24                    (_U_(1) << 24) /**< PIO Mask for PA24 */
#define PIO_PA25                    (_U_(1) << 25) /**< PIO Mask for PA25 */
#define PIO_PA26                    (_U_(1) << 26) /**< PIO Mask for PA26 */
#define PIO_PA27                    (_U_(1) << 27) /**< PIO Mask for PA27 */
#define PIO_PA28                    (_U_(1) << 28) /**< PIO Mask for PA28 */
#define PIO_PA29                    (_U_(1) << 29) /**< PIO Mask for PA29 */
#define PIO_PA30                    (_U_(1) << 30) /**< PIO Mask for PA30 */
#define PIO_PA31                    (_U_(1) << 31) /**< PIO Mask for PA31 */
#define PIO_PB0                     (_U_(1) << 0) /**< PIO Mask for PB0 */
#define PIO_PB1                     (_U_(1) << 1) /**< PIO Mask for PB1 */
#define PIO_PB2                     (_U_(1) << 2) /**< PIO Mask for PB2 */
#define PIO_PB3                     (_U_(1) << 3) /**< PIO Mask for PB3 */
#define PIO_PB4                     (_U_(1) << 4) /**< PIO Mask for PB4 */
#define PIO_PB5                     (_U_(1) << 5) /**< PIO Mask for PB5 */
#define PIO_PB6                     (_U_(1) << 6) /**< PIO Mask for PB6 */
#define PIO_PB7                     (_U_(1) << 7) /**< PIO Mask for PB7 */
#define PIO_PB8                     (_U_(1) << 8) /**< PIO Mask for PB8 */
#define PIO_PB9                     (_U_(1) << 9) /**< PIO Mask for PB9 */
#define PIO_PB10                    (_U_(1) << 10) /**< PIO Mask for PB10 */
#define PIO_PB11                    (_U_(1) << 11) /**< PIO Mask for PB11 */
#define PIO_PB12                    (_U_(1) << 12) /**< PIO Mask for PB12 */
#define PIO_PB13                    (_U_(1) << 13) /**< PIO Mask for PB13 */
#define PIO_PB14                    (_U_(1) << 14) /**< PIO Mask for PB14 */
#define PIO_PB15                    (_U_(1) << 15) /**< PIO Mask for PB15 */
#define PIO_PB16                    (_U_(1) << 16) /**< PIO Mask for PB16 */
#define PIO_PB17                    (_U_(1) << 17) /**< PIO Mask for PB17 */
#define PIO_PB18                    (_U_(1) << 18) /**< PIO Mask for PB18 */
#define PIO_PB19                    (_U_(1) << 19) /**< PIO Mask for PB19 */
#define PIO_PB20                    (_U_(1) << 20) /**< PIO Mask for PB20 */
#define PIO_PB21                    (_U_(1) << 21) /**< PIO Mask for PB21 */
#define PIO_PB22                    (_U_(1) << 22) /**< PIO Mask for PB22 */
#define PIO_PB23                    (_U_(1) << 23) /**< PIO Mask for PB23 */
#define PIO_PB24                    (_U_(1) << 24) /**< PIO Mask for PB24 */
#define PIO_PB25                    (_U_(1) << 25) /**< PIO Mask for PB25 */
#define PIO_PB26                    (_U_(1) << 26) /**< PIO Mask for PB26 */
#define PIO_PB27                    (_U_(1) << 27) /**< PIO Mask for PB27 */
#define PIO_PB28                    (_U_(1) << 28) /**< PIO Mask for PB28 */
#define PIO_PB29                    (_U_(1) << 29) /**< PIO Mask for PB29 */
#define PIO_PB30                    (_U_(1) << 30) /**< PIO Mask for PB30 */
#define PIO_PB31                    (_U_(1) << 31) /**< PIO Mask for PB31 */
#define PIO_PC0                     (_U_(1) << 0) /**< PIO Mask for PC0 */
#define PIO_PC1                     (_U_(1) << 1) /**< PIO Mask for PC1 */
#define PIO_PC2                     (_U_(1) << 2) /**< PIO Mask for PC2 */
#define PIO_PC3                     (_U_(1) << 3) /**< PIO Mask for PC3 */
#define PIO_PC4                     (_U_(1) << 4) /**< PIO Mask for PC4 */
#define PIO_PC5                     (_U_(1) << 5) /**< PIO Mask for PC5 */
#define PIO_PC6                     (_U_(1) << 6) /**< PIO Mask for PC6 */
#define PIO_PC7                     (_U_(1) << 7) /**< PIO Mask for PC7 */
#define PIO_PC8                     (_U_(1) << 8) /**< PIO Mask for PC8 */
#define PIO_PC9                     (_U_(1) << 9) /**< PIO Mask for PC9 */
#define PIO_PC10                    (_U_(1) << 10) /**< PIO Mask for PC10 */
#define PIO_PC11                    (_U_(1) << 11) /**< PIO Mask for PC11 */
#define PIO_PC12                    (_U_(1) << 12) /**< PIO Mask for PC12 */
#define PIO_PC13                    (_U_(1) << 13) /**< PIO Mask for PC13 */
#define PIO_PC14                    (_U_(1) << 14) /**< PIO Mask for PC14 */
#define PIO_PC15                    (_U_(1) << 15) /**< PIO Mask for PC15 */
#define PIO_PC16                    (_U_(1) << 16) /**< PIO Mask for PC16 */
#define PIO_PC17                    (_U_(1) << 17) /**< PIO Mask for PC17 */
#define PIO_PC18                    (_U_(1) << 18) /**< PIO Mask for PC18 */
#define PIO_PC19                    (_U_(1) << 19) /**< PIO Mask for PC19 */
#define PIO_PC20                    (_U_(1) << 20) /**< PIO Mask for PC20 */
#define PIO_PC21                    (_U_(1) << 21) /**< PIO Mask for PC21 */
#define PIO_PC22                    (_U_(1) << 22) /**< PIO Mask for PC22 */
#define PIO_PC23                    (_U_(1) << 23) /**< PIO Mask for PC23 */
#define PIO_PC24                    (_U_(1) << 24) /**< PIO Mask for PC24 */
#define PIO_PC25                    (_U_(1) << 25) /**< PIO Mask for PC25 */
#define PIO_PC26                    (_U_(1) << 26) /**< PIO Mask for PC26 */
#define PIO_PC27                    (_U_(1) << 27) /**< PIO Mask for PC27 */
#define PIO_PC28                    (_U_(1) << 28) /**< PIO Mask for PC28 */
#define PIO_PC29                    (_U_(1) << 29) /**< PIO Mask for PC29 */
#define PIO_PC30                    (_U_(1) << 30) /**< PIO Mask for PC30 */
#define PIO_PC31                    (_U_(1) << 31) /**< PIO Mask for PC31 */
#define PIO_PD0                     (_U_(1) << 0) /**< PIO Mask for PD0 */
#define PIO_PD1                     (_U_(1) << 1) /**< PIO Mask for PD1 */
#define PIO_PD2                     (_U_(1) << 2) /**< PIO Mask for PD2 */
#define PIO_PD3                     (_U_(1) << 3) /**< PIO Mask for PD3 */
#define PIO_PD4                     (_U_(1) << 4) /**< PIO Mask for PD4 */
#define PIO_PD5                     (_U_(1) << 5) /**< PIO Mask for PD5 */
#define PIO_PD6                     (_U_(1) << 6) /**< PIO Mask for PD6 */
#define PIO_PD7                     (_U_(1) << 7) /**< PIO Mask for PD7 */
#define PIO_PD8                     (_U_(1) << 8) /**< PIO Mask for PD8 */
#define PIO_PD9                     (_U_(1) << 9) /**< PIO Mask for PD9 */
#define PIO_PD10                    (_U_(1) << 10) /**< PIO Mask for PD10 */
#define PIO_PD11                    (_U_(1) << 11) /**< PIO Mask for PD11 */
#define PIO_PD12                    (_U_(1) << 12) /**< PIO Mask for PD12 */
#define PIO_PD13                    (_U_(1) << 13) /**< PIO Mask for PD13 */
#define PIO_PD14                    (_U_(1) << 14) /**< PIO Mask for PD14 */
#define PIO_PD15                    (_U_(1) << 15) /**< PIO Mask for PD15 */
#define PIO_PD16                    (_U_(1) << 16) /**< PIO Mask for PD16 */
#define PIO_PD17                    (_U_(1) << 17) /**< PIO Mask for PD17 */
#define PIO_PD18                    (_U_(1) << 18) /**< PIO Mask for PD18 */
#define PIO_PD19                    (_U_(1) << 19) /**< PIO Mask for PD19 */
#define PIO_PD20                    (_U_(1) << 20) /**< PIO Mask for PD20 */
#define PIO_PD21                    (_U_(1) << 21) /**< PIO Mask for PD21 */
#define PIO_PD22                    (_U_(1) << 22) /**< PIO Mask for PD22 */
#define PIO_PD23                    (_U_(1) << 23) /**< PIO Mask for PD23 */
#define PIO_PD24                    (_U_(1) << 24) /**< PIO Mask for PD24 */
#define PIO_PD25                    (_U_(1) << 25) /**< PIO Mask for PD25 */
#define PIO_PD26                    (_U_(1) << 26) /**< PIO Mask for PD26 */
#define PIO_PD27                    (_U_(1) << 27) /**< PIO Mask for PD27 */
#define PIO_PD28                    (_U_(1) << 28) /**< PIO Mask for PD28 */
#define PIO_PD29                    (_U_(1) << 29) /**< PIO Mask for PD29 */
#define PIO_PD30                    (_U_(1) << 30) /**< PIO Mask for PD30 */
#define PIO_PD31                    (_U_(1) << 31) /**< PIO Mask for PD31 */


/* ========== Peripheral I/O indexes ========== */
#define PIO_PA0_IDX                 (  0)  /**< PIO Index Number for PA0 */
#define PIO_PA1_IDX                 (  1)  /**< PIO Index Number for PA1 */
#define PIO_PA2_IDX                 (  2)  /**< PIO Index Number for PA2 */
#define PIO_PA3_IDX                 (  3)  /**< PIO Index Number for PA3 */
#define PIO_PA4_IDX                 (  4)  /**< PIO Index Number for PA4 */
#define PIO_PA5_IDX                 (  5)  /**< PIO Index Number for PA5 */
#define PIO_PA6_IDX                 (  6)  /**< PIO Index Number for PA6 */
#define PIO_PA7_IDX                 (  7)  /**< PIO Index Number for PA7 */
#define PIO_PA8_IDX                 (  8)  /**< PIO Index Number for PA8 */
#define PIO_PA9_IDX                 (  9)  /**< PIO Index Number for PA9 */
#define PIO_PA10_IDX                ( 10)  /**< PIO Index Number for PA10 */
#define PIO_PA11_IDX                ( 11)  /**< PIO Index Number for PA11 */
#define PIO_PA12_IDX                ( 12)  /**< PIO Index Number for PA12 */
#define PIO_PA13_IDX                ( 13)  /**< PIO Index Number for PA13 */
#define PIO_PA14_IDX                ( 14)  /**< PIO Index Number for PA14 */
#define PIO_PA15_IDX                ( 15)  /**< PIO Index Number for PA15 */
#define PIO_PA16_IDX                ( 16)  /**< PIO Index Number for PA16 */
#define PIO_PA17_IDX                ( 17)  /**< PIO Index Number for PA17 */
#define PIO_PA18_IDX                ( 18)  /**< PIO Index Number for PA18 */
#define PIO_PA19_IDX                ( 19)  /**< PIO Index Number for PA19 */
#define PIO_PA20_IDX                ( 20)  /**< PIO Index Number for PA20 */
#define PIO_PA21_IDX                ( 21)  /**< PIO Index Number for PA21 */
#define PIO_PA22_IDX                ( 22)  /**< PIO Index Number for PA22 */
#define PIO_PA23_IDX                ( 23)  /**< PIO Index Number for PA23 */
#define PIO_PA24_IDX                ( 24)  /**< PIO Index Number for PA24 */
#define PIO_PA25_IDX                ( 25)  /**< PIO Index Number for PA25 */
#define PIO_PA26_IDX                ( 26)  /**< PIO Index Number for PA26 */
#define PIO_PA27_IDX                ( 27)  /**< PIO Index Number for PA27 */
#define PIO_PA28_IDX                ( 28)  /**< PIO Index Number for PA28 */
#define PIO_PA29_IDX                ( 29)  /**< PIO Index Number for PA29 */
#define PIO_PA30_IDX                ( 30)  /**< PIO Index Number for PA30 */
#define PIO_PA31_IDX                ( 31)  /**< PIO Index Number for PA31 */
#define PIO_PB0_IDX                 ( 32)  /**< PIO Index Number for PB0 */
#define PIO_PB1_IDX                 ( 33)  /**< PIO Index Number for PB1 */
#define PIO_PB2_IDX                 ( 34)  /**< PIO Index Number for PB2 */
#define PIO_PB3_IDX                 ( 35)  /**< PIO Index Number for PB3 */
#define PIO_PB4_IDX                 ( 36)  /**< PIO Index Number for PB4 */
#define PIO_PB5_IDX                 ( 37)  /**< PIO Index Number for PB5 */
#define PIO_PB6_IDX                 ( 38)  /**< PIO Index Number for PB6 */
#define PIO_PB7_IDX                 ( 39)  /**< PIO Index Number for PB7 */
#define PIO_PB8_IDX                 ( 40)  /**< PIO Index Number for PB8 */
#define PIO_PB9_IDX                 ( 41)  /**< PIO Index Number for PB9 */
#define PIO_PB10_IDX                ( 42)  /**< PIO Index Number for PB10 */
#define PIO_PB11_IDX                ( 43)  /**< PIO Index Number for PB11 */
#define PIO_PB12_IDX                ( 44)  /**< PIO Index Number for PB12 */
#define PIO_PB13_IDX                ( 45)  /**< PIO Index Number for PB13 */
#define PIO_PB14_IDX                ( 46)  /**< PIO Index Number for PB14 */
#define PIO_PB15_IDX                ( 47)  /**< PIO Index Number for PB15 */
#define PIO_PB16_IDX                ( 48)  /**< PIO Index Number for PB16 */
#define PIO_PB17_IDX                ( 49)  /**< PIO Index Number for PB17 */
#define PIO_PB18_IDX                ( 50)  /**< PIO Index Number for PB18 */
#define PIO_PB19_IDX                ( 51)  /**< PIO Index Number for PB19 */
#define PIO_PB20_IDX                ( 52)  /**< PIO Index Number for PB20 */
#define PIO_PB21_IDX                ( 53)  /**< PIO Index Number for PB21 */
#define PIO_PB22_IDX                ( 54)  /**< PIO Index Number for PB22 */
#define PIO_PB23_IDX                ( 55)  /**< PIO Index Number for PB23 */
#define PIO_PB24_IDX                ( 56)  /**< PIO Index Number for PB24 */
#define PIO_PB25_IDX                ( 57)  /**< PIO Index Number for PB25 */
#define PIO_PB26_IDX                ( 58)  /**< PIO Index Number for PB26 */
#define PIO_PB27_IDX                ( 59)  /**< PIO Index Number for PB27 */
#define PIO_PB28_IDX                ( 60)  /**< PIO Index Number for PB28 */
#define PIO_PB29_IDX                ( 61)  /**< PIO Index Number for PB29 */
#define PIO_PB30_IDX                ( 62)  /**< PIO Index Number for PB30 */
#define PIO_PB31_IDX                ( 63)  /**< PIO Index Number for PB31 */
#define PIO_PC0_IDX                 ( 64)  /**< PIO Index Number for PC0 */
#define PIO_PC1_IDX                 ( 65)  /**< PIO Index Number for PC1 */
#define PIO_PC2_IDX                 ( 66)  /**< PIO Index Number for PC2 */
#define PIO_PC3_IDX                 ( 67)  /**< PIO Index Number for PC3 */
#define PIO_PC4_IDX                 ( 68)  /**< PIO Index Number for PC4 */
#define PIO_PC5_IDX                 ( 69)  /**< PIO Index Number for PC5 */
#define PIO_PC6_IDX                 ( 70)  /**< PIO Index Number for PC6 */
#define PIO_PC7_IDX                 ( 71)  /**< PIO Index Number for PC7 */
#define PIO_PC8_IDX                 ( 72)  /**< PIO Index Number for PC8 */
#define PIO_PC9_IDX                 ( 73)  /**< PIO Index Number for PC9 */
#define PIO_PC10_IDX                ( 74)  /**< PIO Index Number for PC10 */
#define PIO_PC11_IDX                ( 75)  /**< PIO Index Number for PC11 */
#define PIO_PC12_IDX                ( 76)  /**< PIO Index Number for PC12 */
#define PIO_PC13_IDX                ( 77)  /**< PIO Index Number for PC13 */
#define PIO_PC14_IDX                ( 78)  /**< PIO Index Number for PC14 */
#define PIO_PC15_IDX                ( 79)  /**< PIO Index Number for PC15 */
#define PIO_PC16_IDX                ( 80)  /**< PIO Index Number for PC16 */
#define PIO_PC17_IDX                ( 81)  /**< PIO Index Number for PC17 */
#define PIO_PC18_IDX                ( 82)  /**< PIO Index Number for PC18 */
#define PIO_PC19_IDX                ( 83)  /**< PIO Index Number for PC19 */
#define PIO_PC20_IDX                ( 84)  /**< PIO Index Number for PC20 */
#define PIO_PC21_IDX                ( 85)  /**< PIO Index Number for PC21 */
#define PIO_PC22_IDX                ( 86)  /**< PIO Index Number for PC22 */
#define PIO_PC23_IDX                ( 87)  /**< PIO Index Number for PC23 */
#define PIO_PC24_IDX                ( 88)  /**< PIO Index Number for PC24 */
#define PIO_PC25_IDX                ( 89)  /**< PIO Index Number for PC25 */
#define PIO_PC26_IDX                ( 90)  /**< PIO Index Number for PC26 */
#define PIO_PC27_IDX                ( 91)  /**< PIO Index Number for PC27 */
#define PIO_PC28_IDX                ( 92)  /**< PIO Index Number for PC28 */
#define PIO_PC29_IDX                ( 93)  /**< PIO Index Number for PC29 */
#define PIO_PC30_IDX                ( 94)  /**< PIO Index Number for PC30 */
#define PIO_PC31_IDX                ( 95)  /**< PIO Index Number for PC31 */
#define PIO_PD0_IDX                 ( 96)  /**< PIO Index Number for PD0 */
#define PIO_PD1_IDX                 ( 97)  /**< PIO Index Number for PD1 */
#define PIO_PD2_IDX                 ( 98)  /**< PIO Index Number for PD2 */
#define PIO_PD3_IDX                 ( 99)  /**< PIO Index Number for PD3 */
#define PIO_PD4_IDX                 (100)  /**< PIO Index Number for PD4 */
#define PIO_PD5_IDX                 (101)  /**< PIO Index Number for PD5 */
#define PIO_PD6_IDX                 (102)  /**< PIO Index Number for PD6 */
#define PIO_PD7_IDX                 (103)  /**< PIO Index Number for PD7 */
#define PIO_PD8_IDX                 (104)  /**< PIO Index Number for PD8 */
#define PIO_PD9_IDX                 (105)  /**< PIO Index Number for PD9 */
#define PIO_PD10_IDX                (106)  /**< PIO Index Number for PD10 */
#define PIO_PD11_IDX                (107)  /**< PIO Index Number for PD11 */
#define PIO_PD12_IDX                (108)  /**< PIO Index Number for PD12 */
#define PIO_PD13_IDX                (109)  /**< PIO Index Number for PD13 */
#define PIO_PD14_IDX                (110)  /**< PIO Index Number for PD14 */
#define PIO_PD15_IDX                (111)  /**< PIO Index Number for PD15 */
#define PIO_PD16_IDX                (112)  /**< PIO Index Number for PD16 */
#define PIO_PD17_IDX                (113)  /**< PIO Index Number for PD17 */
#define PIO_PD18_IDX                (114)  /**< PIO Index Number for PD18 */
#define PIO_PD19_IDX                (115)  /**< PIO Index Number for PD19 */
#define PIO_PD20_IDX                (116)  /**< PIO Index Number for PD20 */
#define PIO_PD21_IDX                (117)  /**< PIO Index Number for PD21 */
#define PIO_PD22_IDX                (118)  /**< PIO Index Number for PD22 */
#define PIO_PD23_IDX                (119)  /**< PIO Index Number for PD23 */
#define PIO_PD24_IDX                (120)  /**< PIO Index Number for PD24 */
#define PIO_PD25_IDX                (121)  /**< PIO Index Number for PD25 */
#define PIO_PD26_IDX                (122)  /**< PIO Index Number for PD26 */
#define PIO_PD27_IDX                (123)  /**< PIO Index Number for PD27 */
#define PIO_PD28_IDX                (124)  /**< PIO Index Number for PD28 */
#define PIO_PD29_IDX                (125)  /**< PIO Index Number for PD29 */
#define PIO_PD30_IDX                (126)  /**< PIO Index Number for PD30 */
#define PIO_PD31_IDX                (127)  /**< PIO Index Number for PD31 */

/* ========== PIO definition for ADC peripheral ========== */
#define PIN_PD31A_ADC_ADTRG                        _L_(127)     /**< ADC signal: ADTRG on PD31 mux A*/
#define MUX_PD31A_ADC_ADTRG                        _L_(0)       /**< ADC signal line function value: ADTRG */
#define PIO_PD31A_ADC_ADTRG                        (_UL_(1) << 31)

#define PIN_PD19X1_ADC_AD0                         _L_(115)     /**< ADC signal: AD0 on PD19 mux X1*/
#define PIO_PD19X1_ADC_AD0                         (_UL_(1) << 19)

#define PIN_PD20X1_ADC_AD1                         _L_(116)     /**< ADC signal: AD1 on PD20 mux X1*/
#define PIO_PD20X1_ADC_AD1                         (_UL_(1) << 20)

#define PIN_PD21X1_ADC_AD2                         _L_(117)     /**< ADC signal: AD2 on PD21 mux X1*/
#define PIO_PD21X1_ADC_AD2                         (_UL_(1) << 21)

#define PIN_PD22X1_ADC_AD3                         _L_(118)     /**< ADC signal: AD3 on PD22 mux X1*/
#define PIO_PD22X1_ADC_AD3                         (_UL_(1) << 22)

#define PIN_PD23X1_ADC_AD4                         _L_(119)     /**< ADC signal: AD4 on PD23 mux X1*/
#define PIO_PD23X1_ADC_AD4                         (_UL_(1) << 23)

#define PIN_PD24X1_ADC_AD5                         _L_(120)     /**< ADC signal: AD5 on PD24 mux X1*/
#define PIO_PD24X1_ADC_AD5                         (_UL_(1) << 24)

#define PIN_PD25X1_ADC_AD6                         _L_(121)     /**< ADC signal: AD6 on PD25 mux X1*/
#define PIO_PD25X1_ADC_AD6                         (_UL_(1) << 25)

#define PIN_PD26X1_ADC_AD7                         _L_(122)     /**< ADC signal: AD7 on PD26 mux X1*/
#define PIO_PD26X1_ADC_AD7                         (_UL_(1) << 26)

#define PIN_PD27X1_ADC_AD8                         _L_(123)     /**< ADC signal: AD8 on PD27 mux X1*/
#define PIO_PD27X1_ADC_AD8                         (_UL_(1) << 27)

#define PIN_PD28X1_ADC_AD9                         _L_(124)     /**< ADC signal: AD9 on PD28 mux X1*/
#define PIO_PD28X1_ADC_AD9                         (_UL_(1) << 28)

#define PIN_PD29X1_ADC_AD10                        _L_(125)     /**< ADC signal: AD10 on PD29 mux X1*/
#define PIO_PD29X1_ADC_AD10                        (_UL_(1) << 29)

#define PIN_PD30X1_ADC_AD11                        _L_(126)     /**< ADC signal: AD11 on PD30 mux X1*/
#define PIO_PD30X1_ADC_AD11                        (_UL_(1) << 30)

/* ========== PIO definition for AIC peripheral ========== */
#define PIN_PA12B_AIC_IRQ                          _L_(12)      /**< AIC signal: IRQ on PA12 mux B*/
#define MUX_PA12B_AIC_IRQ                          _L_(1)       /**< AIC signal line function value: IRQ */
#define PIO_PA12B_AIC_IRQ                          (_UL_(1) << 12)

#define PIN_PA21A_AIC_IRQ                          _L_(21)      /**< AIC signal: IRQ on PA21 mux A*/
#define MUX_PA21A_AIC_IRQ                          _L_(0)       /**< AIC signal line function value: IRQ */
#define PIO_PA21A_AIC_IRQ                          (_UL_(1) << 21)

#define PIN_PB3C_AIC_IRQ                           _L_(35)      /**< AIC signal: IRQ on PB3 mux C*/
#define MUX_PB3C_AIC_IRQ                           _L_(2)       /**< AIC signal line function value: IRQ */
#define PIO_PB3C_AIC_IRQ                           (_UL_(1) << 3)

#define PIN_PD31C_AIC_IRQ                          _L_(127)     /**< AIC signal: IRQ on PD31 mux C*/
#define MUX_PD31C_AIC_IRQ                          _L_(2)       /**< AIC signal line function value: IRQ */
#define PIO_PD31C_AIC_IRQ                          (_UL_(1) << 31)

/* ========== PIO definition for SAIC peripheral ========== */
#define PIN_PB4C_SAIC_FIQ                          _L_(36)      /**< SAIC signal: FIQ on PB4 mux C*/
#define MUX_PB4C_SAIC_FIQ                          _L_(2)       /**< SAIC signal line function value: FIQ */
#define PIO_PB4C_SAIC_FIQ                          (_UL_(1) << 4)

#define PIN_PC8C_SAIC_FIQ                          _L_(72)      /**< SAIC signal: FIQ on PC8 mux C*/
#define MUX_PC8C_SAIC_FIQ                          _L_(2)       /**< SAIC signal line function value: FIQ */
#define PIO_PC8C_SAIC_FIQ                          (_UL_(1) << 8)

#define PIN_PC9A_SAIC_FIQ                          _L_(73)      /**< SAIC signal: FIQ on PC9 mux A*/
#define MUX_PC9A_SAIC_FIQ                          _L_(0)       /**< SAIC signal line function value: FIQ */
#define PIO_PC9A_SAIC_FIQ                          (_UL_(1) << 9)

#define PIN_PD3B_SAIC_FIQ                          _L_(99)      /**< SAIC signal: FIQ on PD3 mux B*/
#define MUX_PD3B_SAIC_FIQ                          _L_(1)       /**< SAIC signal line function value: FIQ */
#define PIO_PD3B_SAIC_FIQ                          (_UL_(1) << 3)

/* ========== PIO definition for CLASSD peripheral ========== */
#define PIN_PA28F_CLASSD_CLASSD_L0                 _L_(28)      /**< CLASSD signal: CLASSD_L0 on PA28 mux F*/
#define MUX_PA28F_CLASSD_CLASSD_L0                 _L_(5)       /**< CLASSD signal line function value: CLASSD_L0 */
#define PIO_PA28F_CLASSD_CLASSD_L0                 (_UL_(1) << 28)

#define PIN_PA29F_CLASSD_CLASSD_L1                 _L_(29)      /**< CLASSD signal: CLASSD_L1 on PA29 mux F*/
#define MUX_PA29F_CLASSD_CLASSD_L1                 _L_(5)       /**< CLASSD signal line function value: CLASSD_L1 */
#define PIO_PA29F_CLASSD_CLASSD_L1                 (_UL_(1) << 29)

#define PIN_PA30F_CLASSD_CLASSD_L2                 _L_(30)      /**< CLASSD signal: CLASSD_L2 on PA30 mux F*/
#define MUX_PA30F_CLASSD_CLASSD_L2                 _L_(5)       /**< CLASSD signal line function value: CLASSD_L2 */
#define PIO_PA30F_CLASSD_CLASSD_L2                 (_UL_(1) << 30)

#define PIN_PA31F_CLASSD_CLASSD_L3                 _L_(31)      /**< CLASSD signal: CLASSD_L3 on PA31 mux F*/
#define MUX_PA31F_CLASSD_CLASSD_L3                 _L_(5)       /**< CLASSD signal line function value: CLASSD_L3 */
#define PIO_PA31F_CLASSD_CLASSD_L3                 (_UL_(1) << 31)

#define PIN_PB1F_CLASSD_CLASSD_R0                  _L_(33)      /**< CLASSD signal: CLASSD_R0 on PB1 mux F*/
#define MUX_PB1F_CLASSD_CLASSD_R0                  _L_(5)       /**< CLASSD signal line function value: CLASSD_R0 */
#define PIO_PB1F_CLASSD_CLASSD_R0                  (_UL_(1) << 1)

#define PIN_PB2F_CLASSD_CLASSD_R1                  _L_(34)      /**< CLASSD signal: CLASSD_R1 on PB2 mux F*/
#define MUX_PB2F_CLASSD_CLASSD_R1                  _L_(5)       /**< CLASSD signal line function value: CLASSD_R1 */
#define PIO_PB2F_CLASSD_CLASSD_R1                  (_UL_(1) << 2)

#define PIN_PB3F_CLASSD_CLASSD_R2                  _L_(35)      /**< CLASSD signal: CLASSD_R2 on PB3 mux F*/
#define MUX_PB3F_CLASSD_CLASSD_R2                  _L_(5)       /**< CLASSD signal line function value: CLASSD_R2 */
#define PIO_PB3F_CLASSD_CLASSD_R2                  (_UL_(1) << 3)

#define PIN_PB4F_CLASSD_CLASSD_R3                  _L_(36)      /**< CLASSD signal: CLASSD_R3 on PB4 mux F*/
#define MUX_PB4F_CLASSD_CLASSD_R3                  _L_(5)       /**< CLASSD signal line function value: CLASSD_R3 */
#define PIO_PB4F_CLASSD_CLASSD_R3                  (_UL_(1) << 4)

/* ========== PIO definition for FLEXCOM0 peripheral ========== */
#define PIN_PB28C_FLEXCOM0_FLEXCOM0_IO0            _L_(60)      /**< FLEXCOM0 signal: FLEXCOM0_IO0 on PB28 mux C*/
#define MUX_PB28C_FLEXCOM0_FLEXCOM0_IO0            _L_(2)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO0 */
#define PIO_PB28C_FLEXCOM0_FLEXCOM0_IO0            (_UL_(1) << 28)

#define PIN_PB29C_FLEXCOM0_FLEXCOM0_IO1            _L_(61)      /**< FLEXCOM0 signal: FLEXCOM0_IO1 on PB29 mux C*/
#define MUX_PB29C_FLEXCOM0_FLEXCOM0_IO1            _L_(2)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO1 */
#define PIO_PB29C_FLEXCOM0_FLEXCOM0_IO1            (_UL_(1) << 29)

#define PIN_PB30C_FLEXCOM0_FLEXCOM0_IO2            _L_(62)      /**< FLEXCOM0 signal: FLEXCOM0_IO2 on PB30 mux C*/
#define MUX_PB30C_FLEXCOM0_FLEXCOM0_IO2            _L_(2)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO2 */
#define PIO_PB30C_FLEXCOM0_FLEXCOM0_IO2            (_UL_(1) << 30)

#define PIN_PB31C_FLEXCOM0_FLEXCOM0_IO3            _L_(63)      /**< FLEXCOM0 signal: FLEXCOM0_IO3 on PB31 mux C*/
#define MUX_PB31C_FLEXCOM0_FLEXCOM0_IO3            _L_(2)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO3 */
#define PIO_PB31C_FLEXCOM0_FLEXCOM0_IO3            (_UL_(1) << 31)

#define PIN_PC0C_FLEXCOM0_FLEXCOM0_IO4             _L_(64)      /**< FLEXCOM0 signal: FLEXCOM0_IO4 on PC0 mux C*/
#define MUX_PC0C_FLEXCOM0_FLEXCOM0_IO4             _L_(2)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO4 */
#define PIO_PC0C_FLEXCOM0_FLEXCOM0_IO4             (_UL_(1) << 0)

/* ========== PIO definition for FLEXCOM1 peripheral ========== */
#define PIN_PA24A_FLEXCOM1_FLEXCOM1_IO0            _L_(24)      /**< FLEXCOM1 signal: FLEXCOM1_IO0 on PA24 mux A*/
#define MUX_PA24A_FLEXCOM1_FLEXCOM1_IO0            _L_(0)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO0 */
#define PIO_PA24A_FLEXCOM1_FLEXCOM1_IO0            (_UL_(1) << 24)

#define PIN_PA23A_FLEXCOM1_FLEXCOM1_IO1            _L_(23)      /**< FLEXCOM1 signal: FLEXCOM1_IO1 on PA23 mux A*/
#define MUX_PA23A_FLEXCOM1_FLEXCOM1_IO1            _L_(0)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO1 */
#define PIO_PA23A_FLEXCOM1_FLEXCOM1_IO1            (_UL_(1) << 23)

#define PIN_PA22A_FLEXCOM1_FLEXCOM1_IO2            _L_(22)      /**< FLEXCOM1 signal: FLEXCOM1_IO2 on PA22 mux A*/
#define MUX_PA22A_FLEXCOM1_FLEXCOM1_IO2            _L_(0)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO2 */
#define PIO_PA22A_FLEXCOM1_FLEXCOM1_IO2            (_UL_(1) << 22)

#define PIN_PA25A_FLEXCOM1_FLEXCOM1_IO3            _L_(25)      /**< FLEXCOM1 signal: FLEXCOM1_IO3 on PA25 mux A*/
#define MUX_PA25A_FLEXCOM1_FLEXCOM1_IO3            _L_(0)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO3 */
#define PIO_PA25A_FLEXCOM1_FLEXCOM1_IO3            (_UL_(1) << 25)

#define PIN_PA26A_FLEXCOM1_FLEXCOM1_IO4            _L_(26)      /**< FLEXCOM1 signal: FLEXCOM1_IO4 on PA26 mux A*/
#define MUX_PA26A_FLEXCOM1_FLEXCOM1_IO4            _L_(0)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO4 */
#define PIO_PA26A_FLEXCOM1_FLEXCOM1_IO4            (_UL_(1) << 26)

/* ========== PIO definition for FLEXCOM2 peripheral ========== */
#define PIN_PA6E_FLEXCOM2_FLEXCOM2_IO0             _L_(6)       /**< FLEXCOM2 signal: FLEXCOM2_IO0 on PA6 mux E*/
#define MUX_PA6E_FLEXCOM2_FLEXCOM2_IO0             _L_(4)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO0 */
#define PIO_PA6E_FLEXCOM2_FLEXCOM2_IO0             (_UL_(1) << 6)

#define PIN_PD26C_FLEXCOM2_FLEXCOM2_IO0            _L_(122)     /**< FLEXCOM2 signal: FLEXCOM2_IO0 on PD26 mux C*/
#define MUX_PD26C_FLEXCOM2_FLEXCOM2_IO0            _L_(2)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO0 */
#define PIO_PD26C_FLEXCOM2_FLEXCOM2_IO0            (_UL_(1) << 26)

#define PIN_PA7E_FLEXCOM2_FLEXCOM2_IO1             _L_(7)       /**< FLEXCOM2 signal: FLEXCOM2_IO1 on PA7 mux E*/
#define MUX_PA7E_FLEXCOM2_FLEXCOM2_IO1             _L_(4)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO1 */
#define PIO_PA7E_FLEXCOM2_FLEXCOM2_IO1             (_UL_(1) << 7)

#define PIN_PD27C_FLEXCOM2_FLEXCOM2_IO1            _L_(123)     /**< FLEXCOM2 signal: FLEXCOM2_IO1 on PD27 mux C*/
#define MUX_PD27C_FLEXCOM2_FLEXCOM2_IO1            _L_(2)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO1 */
#define PIO_PD27C_FLEXCOM2_FLEXCOM2_IO1            (_UL_(1) << 27)

#define PIN_PA8E_FLEXCOM2_FLEXCOM2_IO2             _L_(8)       /**< FLEXCOM2 signal: FLEXCOM2_IO2 on PA8 mux E*/
#define MUX_PA8E_FLEXCOM2_FLEXCOM2_IO2             _L_(4)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO2 */
#define PIO_PA8E_FLEXCOM2_FLEXCOM2_IO2             (_UL_(1) << 8)

#define PIN_PD28C_FLEXCOM2_FLEXCOM2_IO2            _L_(124)     /**< FLEXCOM2 signal: FLEXCOM2_IO2 on PD28 mux C*/
#define MUX_PD28C_FLEXCOM2_FLEXCOM2_IO2            _L_(2)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO2 */
#define PIO_PD28C_FLEXCOM2_FLEXCOM2_IO2            (_UL_(1) << 28)

#define PIN_PA9E_FLEXCOM2_FLEXCOM2_IO3             _L_(9)       /**< FLEXCOM2 signal: FLEXCOM2_IO3 on PA9 mux E*/
#define MUX_PA9E_FLEXCOM2_FLEXCOM2_IO3             _L_(4)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO3 */
#define PIO_PA9E_FLEXCOM2_FLEXCOM2_IO3             (_UL_(1) << 9)

#define PIN_PD29C_FLEXCOM2_FLEXCOM2_IO3            _L_(125)     /**< FLEXCOM2 signal: FLEXCOM2_IO3 on PD29 mux C*/
#define MUX_PD29C_FLEXCOM2_FLEXCOM2_IO3            _L_(2)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO3 */
#define PIO_PD29C_FLEXCOM2_FLEXCOM2_IO3            (_UL_(1) << 29)

#define PIN_PA10E_FLEXCOM2_FLEXCOM2_IO4            _L_(10)      /**< FLEXCOM2 signal: FLEXCOM2_IO4 on PA10 mux E*/
#define MUX_PA10E_FLEXCOM2_FLEXCOM2_IO4            _L_(4)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO4 */
#define PIO_PA10E_FLEXCOM2_FLEXCOM2_IO4            (_UL_(1) << 10)

#define PIN_PD30C_FLEXCOM2_FLEXCOM2_IO4            _L_(126)     /**< FLEXCOM2 signal: FLEXCOM2_IO4 on PD30 mux C*/
#define MUX_PD30C_FLEXCOM2_FLEXCOM2_IO4            _L_(2)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO4 */
#define PIO_PD30C_FLEXCOM2_FLEXCOM2_IO4            (_UL_(1) << 30)

/* ========== PIO definition for FLEXCOM3 peripheral ========== */
#define PIN_PA15E_FLEXCOM3_FLEXCOM3_IO0            _L_(15)      /**< FLEXCOM3 signal: FLEXCOM3_IO0 on PA15 mux E*/
#define MUX_PA15E_FLEXCOM3_FLEXCOM3_IO0            _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO0 */
#define PIO_PA15E_FLEXCOM3_FLEXCOM3_IO0            (_UL_(1) << 15)

#define PIN_PB23E_FLEXCOM3_FLEXCOM3_IO0            _L_(55)      /**< FLEXCOM3 signal: FLEXCOM3_IO0 on PB23 mux E*/
#define MUX_PB23E_FLEXCOM3_FLEXCOM3_IO0            _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO0 */
#define PIO_PB23E_FLEXCOM3_FLEXCOM3_IO0            (_UL_(1) << 23)

#define PIN_PC20E_FLEXCOM3_FLEXCOM3_IO0            _L_(84)      /**< FLEXCOM3 signal: FLEXCOM3_IO0 on PC20 mux E*/
#define MUX_PC20E_FLEXCOM3_FLEXCOM3_IO0            _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO0 */
#define PIO_PC20E_FLEXCOM3_FLEXCOM3_IO0            (_UL_(1) << 20)

#define PIN_PA13E_FLEXCOM3_FLEXCOM3_IO1            _L_(13)      /**< FLEXCOM3 signal: FLEXCOM3_IO1 on PA13 mux E*/
#define MUX_PA13E_FLEXCOM3_FLEXCOM3_IO1            _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO1 */
#define PIO_PA13E_FLEXCOM3_FLEXCOM3_IO1            (_UL_(1) << 13)

#define PIN_PB22E_FLEXCOM3_FLEXCOM3_IO1            _L_(54)      /**< FLEXCOM3 signal: FLEXCOM3_IO1 on PB22 mux E*/
#define MUX_PB22E_FLEXCOM3_FLEXCOM3_IO1            _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO1 */
#define PIO_PB22E_FLEXCOM3_FLEXCOM3_IO1            (_UL_(1) << 22)

#define PIN_PC19E_FLEXCOM3_FLEXCOM3_IO1            _L_(83)      /**< FLEXCOM3 signal: FLEXCOM3_IO1 on PC19 mux E*/
#define MUX_PC19E_FLEXCOM3_FLEXCOM3_IO1            _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO1 */
#define PIO_PC19E_FLEXCOM3_FLEXCOM3_IO1            (_UL_(1) << 19)

#define PIN_PA14E_FLEXCOM3_FLEXCOM3_IO2            _L_(14)      /**< FLEXCOM3 signal: FLEXCOM3_IO2 on PA14 mux E*/
#define MUX_PA14E_FLEXCOM3_FLEXCOM3_IO2            _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO2 */
#define PIO_PA14E_FLEXCOM3_FLEXCOM3_IO2            (_UL_(1) << 14)

#define PIN_PB21E_FLEXCOM3_FLEXCOM3_IO2            _L_(53)      /**< FLEXCOM3 signal: FLEXCOM3_IO2 on PB21 mux E*/
#define MUX_PB21E_FLEXCOM3_FLEXCOM3_IO2            _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO2 */
#define PIO_PB21E_FLEXCOM3_FLEXCOM3_IO2            (_UL_(1) << 21)

#define PIN_PC18E_FLEXCOM3_FLEXCOM3_IO2            _L_(82)      /**< FLEXCOM3 signal: FLEXCOM3_IO2 on PC18 mux E*/
#define MUX_PC18E_FLEXCOM3_FLEXCOM3_IO2            _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO2 */
#define PIO_PC18E_FLEXCOM3_FLEXCOM3_IO2            (_UL_(1) << 18)

#define PIN_PA16E_FLEXCOM3_FLEXCOM3_IO3            _L_(16)      /**< FLEXCOM3 signal: FLEXCOM3_IO3 on PA16 mux E*/
#define MUX_PA16E_FLEXCOM3_FLEXCOM3_IO3            _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO3 */
#define PIO_PA16E_FLEXCOM3_FLEXCOM3_IO3            (_UL_(1) << 16)

#define PIN_PB24E_FLEXCOM3_FLEXCOM3_IO3            _L_(56)      /**< FLEXCOM3 signal: FLEXCOM3_IO3 on PB24 mux E*/
#define MUX_PB24E_FLEXCOM3_FLEXCOM3_IO3            _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO3 */
#define PIO_PB24E_FLEXCOM3_FLEXCOM3_IO3            (_UL_(1) << 24)

#define PIN_PC21E_FLEXCOM3_FLEXCOM3_IO3            _L_(85)      /**< FLEXCOM3 signal: FLEXCOM3_IO3 on PC21 mux E*/
#define MUX_PC21E_FLEXCOM3_FLEXCOM3_IO3            _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO3 */
#define PIO_PC21E_FLEXCOM3_FLEXCOM3_IO3            (_UL_(1) << 21)

#define PIN_PA17E_FLEXCOM3_FLEXCOM3_IO4            _L_(17)      /**< FLEXCOM3 signal: FLEXCOM3_IO4 on PA17 mux E*/
#define MUX_PA17E_FLEXCOM3_FLEXCOM3_IO4            _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO4 */
#define PIO_PA17E_FLEXCOM3_FLEXCOM3_IO4            (_UL_(1) << 17)

#define PIN_PB25E_FLEXCOM3_FLEXCOM3_IO4            _L_(57)      /**< FLEXCOM3 signal: FLEXCOM3_IO4 on PB25 mux E*/
#define MUX_PB25E_FLEXCOM3_FLEXCOM3_IO4            _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO4 */
#define PIO_PB25E_FLEXCOM3_FLEXCOM3_IO4            (_UL_(1) << 25)

#define PIN_PC22E_FLEXCOM3_FLEXCOM3_IO4            _L_(86)      /**< FLEXCOM3 signal: FLEXCOM3_IO4 on PC22 mux E*/
#define MUX_PC22E_FLEXCOM3_FLEXCOM3_IO4            _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO4 */
#define PIO_PC22E_FLEXCOM3_FLEXCOM3_IO4            (_UL_(1) << 22)

/* ========== PIO definition for FLEXCOM4 peripheral ========== */
#define PIN_PC28B_FLEXCOM4_FLEXCOM4_IO0            _L_(92)      /**< FLEXCOM4 signal: FLEXCOM4_IO0 on PC28 mux B*/
#define MUX_PC28B_FLEXCOM4_FLEXCOM4_IO0            _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO0 */
#define PIO_PC28B_FLEXCOM4_FLEXCOM4_IO0            (_UL_(1) << 28)

#define PIN_PD12B_FLEXCOM4_FLEXCOM4_IO0            _L_(108)     /**< FLEXCOM4 signal: FLEXCOM4_IO0 on PD12 mux B*/
#define MUX_PD12B_FLEXCOM4_FLEXCOM4_IO0            _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO0 */
#define PIO_PD12B_FLEXCOM4_FLEXCOM4_IO0            (_UL_(1) << 12)

#define PIN_PD21C_FLEXCOM4_FLEXCOM4_IO0            _L_(117)     /**< FLEXCOM4 signal: FLEXCOM4_IO0 on PD21 mux C*/
#define MUX_PD21C_FLEXCOM4_FLEXCOM4_IO0            _L_(2)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO0 */
#define PIO_PD21C_FLEXCOM4_FLEXCOM4_IO0            (_UL_(1) << 21)

#define PIN_PC29B_FLEXCOM4_FLEXCOM4_IO1            _L_(93)      /**< FLEXCOM4 signal: FLEXCOM4_IO1 on PC29 mux B*/
#define MUX_PC29B_FLEXCOM4_FLEXCOM4_IO1            _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO1 */
#define PIO_PC29B_FLEXCOM4_FLEXCOM4_IO1            (_UL_(1) << 29)

#define PIN_PD13B_FLEXCOM4_FLEXCOM4_IO1            _L_(109)     /**< FLEXCOM4 signal: FLEXCOM4_IO1 on PD13 mux B*/
#define MUX_PD13B_FLEXCOM4_FLEXCOM4_IO1            _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO1 */
#define PIO_PD13B_FLEXCOM4_FLEXCOM4_IO1            (_UL_(1) << 13)

#define PIN_PD22C_FLEXCOM4_FLEXCOM4_IO1            _L_(118)     /**< FLEXCOM4 signal: FLEXCOM4_IO1 on PD22 mux C*/
#define MUX_PD22C_FLEXCOM4_FLEXCOM4_IO1            _L_(2)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO1 */
#define PIO_PD22C_FLEXCOM4_FLEXCOM4_IO1            (_UL_(1) << 22)

#define PIN_PC30B_FLEXCOM4_FLEXCOM4_IO2            _L_(94)      /**< FLEXCOM4 signal: FLEXCOM4_IO2 on PC30 mux B*/
#define MUX_PC30B_FLEXCOM4_FLEXCOM4_IO2            _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO2 */
#define PIO_PC30B_FLEXCOM4_FLEXCOM4_IO2            (_UL_(1) << 30)

#define PIN_PD14B_FLEXCOM4_FLEXCOM4_IO2            _L_(110)     /**< FLEXCOM4 signal: FLEXCOM4_IO2 on PD14 mux B*/
#define MUX_PD14B_FLEXCOM4_FLEXCOM4_IO2            _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO2 */
#define PIO_PD14B_FLEXCOM4_FLEXCOM4_IO2            (_UL_(1) << 14)

#define PIN_PD23C_FLEXCOM4_FLEXCOM4_IO2            _L_(119)     /**< FLEXCOM4 signal: FLEXCOM4_IO2 on PD23 mux C*/
#define MUX_PD23C_FLEXCOM4_FLEXCOM4_IO2            _L_(2)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO2 */
#define PIO_PD23C_FLEXCOM4_FLEXCOM4_IO2            (_UL_(1) << 23)

#define PIN_PC31B_FLEXCOM4_FLEXCOM4_IO3            _L_(95)      /**< FLEXCOM4 signal: FLEXCOM4_IO3 on PC31 mux B*/
#define MUX_PC31B_FLEXCOM4_FLEXCOM4_IO3            _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO3 */
#define PIO_PC31B_FLEXCOM4_FLEXCOM4_IO3            (_UL_(1) << 31)

#define PIN_PD15B_FLEXCOM4_FLEXCOM4_IO3            _L_(111)     /**< FLEXCOM4 signal: FLEXCOM4_IO3 on PD15 mux B*/
#define MUX_PD15B_FLEXCOM4_FLEXCOM4_IO3            _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO3 */
#define PIO_PD15B_FLEXCOM4_FLEXCOM4_IO3            (_UL_(1) << 15)

#define PIN_PD24C_FLEXCOM4_FLEXCOM4_IO3            _L_(120)     /**< FLEXCOM4 signal: FLEXCOM4_IO3 on PD24 mux C*/
#define MUX_PD24C_FLEXCOM4_FLEXCOM4_IO3            _L_(2)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO3 */
#define PIO_PD24C_FLEXCOM4_FLEXCOM4_IO3            (_UL_(1) << 24)

#define PIN_PD0B_FLEXCOM4_FLEXCOM4_IO4             _L_(96)      /**< FLEXCOM4 signal: FLEXCOM4_IO4 on PD0 mux B*/
#define MUX_PD0B_FLEXCOM4_FLEXCOM4_IO4             _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO4 */
#define PIO_PD0B_FLEXCOM4_FLEXCOM4_IO4             (_UL_(1) << 0)

#define PIN_PD16B_FLEXCOM4_FLEXCOM4_IO4            _L_(112)     /**< FLEXCOM4 signal: FLEXCOM4_IO4 on PD16 mux B*/
#define MUX_PD16B_FLEXCOM4_FLEXCOM4_IO4            _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO4 */
#define PIO_PD16B_FLEXCOM4_FLEXCOM4_IO4            (_UL_(1) << 16)

#define PIN_PD25C_FLEXCOM4_FLEXCOM4_IO4            _L_(121)     /**< FLEXCOM4 signal: FLEXCOM4_IO4 on PD25 mux C*/
#define MUX_PD25C_FLEXCOM4_FLEXCOM4_IO4            _L_(2)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO4 */
#define PIO_PD25C_FLEXCOM4_FLEXCOM4_IO4            (_UL_(1) << 25)

/* ========== PIO definition for GMAC peripheral ========== */
#define PIN_PB9F_GMAC_GCOL                         _L_(41)      /**< GMAC signal: GCOL on PB9 mux F*/
#define MUX_PB9F_GMAC_GCOL                         _L_(5)       /**< GMAC signal line function value: GCOL */
#define PIO_PB9F_GMAC_GCOL                         (_UL_(1) << 9)

#define PIN_PC23B_GMAC_GCOL                        _L_(87)      /**< GMAC signal: GCOL on PC23 mux B*/
#define MUX_PC23B_GMAC_GCOL                        _L_(1)       /**< GMAC signal line function value: GCOL */
#define PIO_PC23B_GMAC_GCOL                        (_UL_(1) << 23)

#define PIN_PD4D_GMAC_GCOL                         _L_(100)     /**< GMAC signal: GCOL on PD4 mux D*/
#define MUX_PD4D_GMAC_GCOL                         _L_(3)       /**< GMAC signal line function value: GCOL */
#define PIO_PD4D_GMAC_GCOL                         (_UL_(1) << 4)

#define PIN_PB8F_GMAC_GCRS                         _L_(40)      /**< GMAC signal: GCRS on PB8 mux F*/
#define MUX_PB8F_GMAC_GCRS                         _L_(5)       /**< GMAC signal line function value: GCRS */
#define PIO_PB8F_GMAC_GCRS                         (_UL_(1) << 8)

#define PIN_PC22B_GMAC_GCRS                        _L_(86)      /**< GMAC signal: GCRS on PC22 mux B*/
#define MUX_PC22B_GMAC_GCRS                        _L_(1)       /**< GMAC signal line function value: GCRS */
#define PIO_PC22B_GMAC_GCRS                        (_UL_(1) << 22)

#define PIN_PD3D_GMAC_GCRS                         _L_(99)      /**< GMAC signal: GCRS on PD3 mux D*/
#define MUX_PD3D_GMAC_GCRS                         _L_(3)       /**< GMAC signal line function value: GCRS */
#define PIO_PD3D_GMAC_GCRS                         (_UL_(1) << 3)

#define PIN_PB22F_GMAC_GMDC                        _L_(54)      /**< GMAC signal: GMDC on PB22 mux F*/
#define MUX_PB22F_GMAC_GMDC                        _L_(5)       /**< GMAC signal line function value: GMDC */
#define PIO_PB22F_GMAC_GMDC                        (_UL_(1) << 22)

#define PIN_PC18B_GMAC_GMDC                        _L_(82)      /**< GMAC signal: GMDC on PC18 mux B*/
#define MUX_PC18B_GMAC_GMDC                        _L_(1)       /**< GMAC signal line function value: GMDC */
#define PIO_PC18B_GMAC_GMDC                        (_UL_(1) << 18)

#define PIN_PD17D_GMAC_GMDC                        _L_(113)     /**< GMAC signal: GMDC on PD17 mux D*/
#define MUX_PD17D_GMAC_GMDC                        _L_(3)       /**< GMAC signal line function value: GMDC */
#define PIO_PD17D_GMAC_GMDC                        (_UL_(1) << 17)

#define PIN_PB23F_GMAC_GMDIO                       _L_(55)      /**< GMAC signal: GMDIO on PB23 mux F*/
#define MUX_PB23F_GMAC_GMDIO                       _L_(5)       /**< GMAC signal line function value: GMDIO */
#define PIO_PB23F_GMAC_GMDIO                       (_UL_(1) << 23)

#define PIN_PC19B_GMAC_GMDIO                       _L_(83)      /**< GMAC signal: GMDIO on PC19 mux B*/
#define MUX_PC19B_GMAC_GMDIO                       _L_(1)       /**< GMAC signal line function value: GMDIO */
#define PIO_PC19B_GMAC_GMDIO                       (_UL_(1) << 19)

#define PIN_PD18D_GMAC_GMDIO                       _L_(114)     /**< GMAC signal: GMDIO on PD18 mux D*/
#define MUX_PD18D_GMAC_GMDIO                       _L_(3)       /**< GMAC signal line function value: GMDIO */
#define PIO_PD18D_GMAC_GMDIO                       (_UL_(1) << 18)

#define PIN_PB7F_GMAC_GRXCK                        _L_(39)      /**< GMAC signal: GRXCK on PB7 mux F*/
#define MUX_PB7F_GMAC_GRXCK                        _L_(5)       /**< GMAC signal line function value: GRXCK */
#define PIO_PB7F_GMAC_GRXCK                        (_UL_(1) << 7)

#define PIN_PC20B_GMAC_GRXCK                       _L_(84)      /**< GMAC signal: GRXCK on PC20 mux B*/
#define MUX_PC20B_GMAC_GRXCK                       _L_(1)       /**< GMAC signal line function value: GRXCK */
#define PIO_PC20B_GMAC_GRXCK                       (_UL_(1) << 20)

#define PIN_PD1D_GMAC_GRXCK                        _L_(97)      /**< GMAC signal: GRXCK on PD1 mux D*/
#define MUX_PD1D_GMAC_GRXCK                        _L_(3)       /**< GMAC signal line function value: GRXCK */
#define PIO_PD1D_GMAC_GRXCK                        (_UL_(1) << 1)

#define PIN_PB16F_GMAC_GRXDV                       _L_(48)      /**< GMAC signal: GRXDV on PB16 mux F*/
#define MUX_PB16F_GMAC_GRXDV                       _L_(5)       /**< GMAC signal line function value: GRXDV */
#define PIO_PB16F_GMAC_GRXDV                       (_UL_(1) << 16)

#define PIN_PC12B_GMAC_GRXDV                       _L_(76)      /**< GMAC signal: GRXDV on PC12 mux B*/
#define MUX_PC12B_GMAC_GRXDV                       _L_(1)       /**< GMAC signal line function value: GRXDV */
#define PIO_PC12B_GMAC_GRXDV                       (_UL_(1) << 12)

#define PIN_PD11D_GMAC_GRXDV                       _L_(107)     /**< GMAC signal: GRXDV on PD11 mux D*/
#define MUX_PD11D_GMAC_GRXDV                       _L_(3)       /**< GMAC signal line function value: GRXDV */
#define PIO_PD11D_GMAC_GRXDV                       (_UL_(1) << 11)

#define PIN_PB17F_GMAC_GRXER                       _L_(49)      /**< GMAC signal: GRXER on PB17 mux F*/
#define MUX_PB17F_GMAC_GRXER                       _L_(5)       /**< GMAC signal line function value: GRXER */
#define PIO_PB17F_GMAC_GRXER                       (_UL_(1) << 17)

#define PIN_PC13B_GMAC_GRXER                       _L_(77)      /**< GMAC signal: GRXER on PC13 mux B*/
#define MUX_PC13B_GMAC_GRXER                       _L_(1)       /**< GMAC signal line function value: GRXER */
#define PIO_PC13B_GMAC_GRXER                       (_UL_(1) << 13)

#define PIN_PD12D_GMAC_GRXER                       _L_(108)     /**< GMAC signal: GRXER on PD12 mux D*/
#define MUX_PD12D_GMAC_GRXER                       _L_(3)       /**< GMAC signal line function value: GRXER */
#define PIO_PD12D_GMAC_GRXER                       (_UL_(1) << 12)

#define PIN_PB18F_GMAC_GRX0                        _L_(50)      /**< GMAC signal: GRX0 on PB18 mux F*/
#define MUX_PB18F_GMAC_GRX0                        _L_(5)       /**< GMAC signal line function value: GRX0 */
#define PIO_PB18F_GMAC_GRX0                        (_UL_(1) << 18)

#define PIN_PC14B_GMAC_GRX0                        _L_(78)      /**< GMAC signal: GRX0 on PC14 mux B*/
#define MUX_PC14B_GMAC_GRX0                        _L_(1)       /**< GMAC signal line function value: GRX0 */
#define PIO_PC14B_GMAC_GRX0                        (_UL_(1) << 14)

#define PIN_PD13D_GMAC_GRX0                        _L_(109)     /**< GMAC signal: GRX0 on PD13 mux D*/
#define MUX_PD13D_GMAC_GRX0                        _L_(3)       /**< GMAC signal line function value: GRX0 */
#define PIO_PD13D_GMAC_GRX0                        (_UL_(1) << 13)

#define PIN_PB19F_GMAC_GRX1                        _L_(51)      /**< GMAC signal: GRX1 on PB19 mux F*/
#define MUX_PB19F_GMAC_GRX1                        _L_(5)       /**< GMAC signal line function value: GRX1 */
#define PIO_PB19F_GMAC_GRX1                        (_UL_(1) << 19)

#define PIN_PC15B_GMAC_GRX1                        _L_(79)      /**< GMAC signal: GRX1 on PC15 mux B*/
#define MUX_PC15B_GMAC_GRX1                        _L_(1)       /**< GMAC signal line function value: GRX1 */
#define PIO_PC15B_GMAC_GRX1                        (_UL_(1) << 15)

#define PIN_PD14D_GMAC_GRX1                        _L_(110)     /**< GMAC signal: GRX1 on PD14 mux D*/
#define MUX_PD14D_GMAC_GRX1                        _L_(3)       /**< GMAC signal line function value: GRX1 */
#define PIO_PD14D_GMAC_GRX1                        (_UL_(1) << 14)

#define PIN_PB10F_GMAC_GRX2                        _L_(42)      /**< GMAC signal: GRX2 on PB10 mux F*/
#define MUX_PB10F_GMAC_GRX2                        _L_(5)       /**< GMAC signal line function value: GRX2 */
#define PIO_PB10F_GMAC_GRX2                        (_UL_(1) << 10)

#define PIN_PC24B_GMAC_GRX2                        _L_(88)      /**< GMAC signal: GRX2 on PC24 mux B*/
#define MUX_PC24B_GMAC_GRX2                        _L_(1)       /**< GMAC signal line function value: GRX2 */
#define PIO_PC24B_GMAC_GRX2                        (_UL_(1) << 24)

#define PIN_PD5D_GMAC_GRX2                         _L_(101)     /**< GMAC signal: GRX2 on PD5 mux D*/
#define MUX_PD5D_GMAC_GRX2                         _L_(3)       /**< GMAC signal line function value: GRX2 */
#define PIO_PD5D_GMAC_GRX2                         (_UL_(1) << 5)

#define PIN_PB11F_GMAC_GRX3                        _L_(43)      /**< GMAC signal: GRX3 on PB11 mux F*/
#define MUX_PB11F_GMAC_GRX3                        _L_(5)       /**< GMAC signal line function value: GRX3 */
#define PIO_PB11F_GMAC_GRX3                        (_UL_(1) << 11)

#define PIN_PC25B_GMAC_GRX3                        _L_(89)      /**< GMAC signal: GRX3 on PC25 mux B*/
#define MUX_PC25B_GMAC_GRX3                        _L_(1)       /**< GMAC signal line function value: GRX3 */
#define PIO_PC25B_GMAC_GRX3                        (_UL_(1) << 25)

#define PIN_PD6D_GMAC_GRX3                         _L_(102)     /**< GMAC signal: GRX3 on PD6 mux D*/
#define MUX_PD6D_GMAC_GRX3                         _L_(3)       /**< GMAC signal line function value: GRX3 */
#define PIO_PD6D_GMAC_GRX3                         (_UL_(1) << 6)

#define PIN_PB5F_GMAC_GTSUCOMP                     _L_(37)      /**< GMAC signal: GTSUCOMP on PB5 mux F*/
#define MUX_PB5F_GMAC_GTSUCOMP                     _L_(5)       /**< GMAC signal line function value: GTSUCOMP */
#define PIO_PB5F_GMAC_GTSUCOMP                     (_UL_(1) << 5)

#define PIN_PC9B_GMAC_GTSUCOMP                     _L_(73)      /**< GMAC signal: GTSUCOMP on PC9 mux B*/
#define MUX_PC9B_GMAC_GTSUCOMP                     _L_(1)       /**< GMAC signal line function value: GTSUCOMP */
#define PIO_PC9B_GMAC_GTSUCOMP                     (_UL_(1) << 9)

#define PIN_PD0D_GMAC_GTSUCOMP                     _L_(96)      /**< GMAC signal: GTSUCOMP on PD0 mux D*/
#define MUX_PD0D_GMAC_GTSUCOMP                     _L_(3)       /**< GMAC signal line function value: GTSUCOMP */
#define PIO_PD0D_GMAC_GTSUCOMP                     (_UL_(1) << 0)

#define PIN_PB14F_GMAC_GTXCK                       _L_(46)      /**< GMAC signal: GTXCK on PB14 mux F*/
#define MUX_PB14F_GMAC_GTXCK                       _L_(5)       /**< GMAC signal line function value: GTXCK */
#define PIO_PB14F_GMAC_GTXCK                       (_UL_(1) << 14)

#define PIN_PC10B_GMAC_GTXCK                       _L_(74)      /**< GMAC signal: GTXCK on PC10 mux B*/
#define MUX_PC10B_GMAC_GTXCK                       _L_(1)       /**< GMAC signal line function value: GTXCK */
#define PIO_PC10B_GMAC_GTXCK                       (_UL_(1) << 10)

#define PIN_PD9D_GMAC_GTXCK                        _L_(105)     /**< GMAC signal: GTXCK on PD9 mux D*/
#define MUX_PD9D_GMAC_GTXCK                        _L_(3)       /**< GMAC signal line function value: GTXCK */
#define PIO_PD9D_GMAC_GTXCK                        (_UL_(1) << 9)

#define PIN_PB15F_GMAC_GTXEN                       _L_(47)      /**< GMAC signal: GTXEN on PB15 mux F*/
#define MUX_PB15F_GMAC_GTXEN                       _L_(5)       /**< GMAC signal line function value: GTXEN */
#define PIO_PB15F_GMAC_GTXEN                       (_UL_(1) << 15)

#define PIN_PC11B_GMAC_GTXEN                       _L_(75)      /**< GMAC signal: GTXEN on PC11 mux B*/
#define MUX_PC11B_GMAC_GTXEN                       _L_(1)       /**< GMAC signal line function value: GTXEN */
#define PIO_PC11B_GMAC_GTXEN                       (_UL_(1) << 11)

#define PIN_PD10D_GMAC_GTXEN                       _L_(106)     /**< GMAC signal: GTXEN on PD10 mux D*/
#define MUX_PD10D_GMAC_GTXEN                       _L_(3)       /**< GMAC signal line function value: GTXEN */
#define PIO_PD10D_GMAC_GTXEN                       (_UL_(1) << 10)

#define PIN_PB6F_GMAC_GTXER                        _L_(38)      /**< GMAC signal: GTXER on PB6 mux F*/
#define MUX_PB6F_GMAC_GTXER                        _L_(5)       /**< GMAC signal line function value: GTXER */
#define PIO_PB6F_GMAC_GTXER                        (_UL_(1) << 6)

#define PIN_PC21B_GMAC_GTXER                       _L_(85)      /**< GMAC signal: GTXER on PC21 mux B*/
#define MUX_PC21B_GMAC_GTXER                       _L_(1)       /**< GMAC signal line function value: GTXER */
#define PIO_PC21B_GMAC_GTXER                       (_UL_(1) << 21)

#define PIN_PD2D_GMAC_GTXER                        _L_(98)      /**< GMAC signal: GTXER on PD2 mux D*/
#define MUX_PD2D_GMAC_GTXER                        _L_(3)       /**< GMAC signal line function value: GTXER */
#define PIO_PD2D_GMAC_GTXER                        (_UL_(1) << 2)

#define PIN_PB20F_GMAC_GTX0                        _L_(52)      /**< GMAC signal: GTX0 on PB20 mux F*/
#define MUX_PB20F_GMAC_GTX0                        _L_(5)       /**< GMAC signal line function value: GTX0 */
#define PIO_PB20F_GMAC_GTX0                        (_UL_(1) << 20)

#define PIN_PC16B_GMAC_GTX0                        _L_(80)      /**< GMAC signal: GTX0 on PC16 mux B*/
#define MUX_PC16B_GMAC_GTX0                        _L_(1)       /**< GMAC signal line function value: GTX0 */
#define PIO_PC16B_GMAC_GTX0                        (_UL_(1) << 16)

#define PIN_PD15D_GMAC_GTX0                        _L_(111)     /**< GMAC signal: GTX0 on PD15 mux D*/
#define MUX_PD15D_GMAC_GTX0                        _L_(3)       /**< GMAC signal line function value: GTX0 */
#define PIO_PD15D_GMAC_GTX0                        (_UL_(1) << 15)

#define PIN_PB21F_GMAC_GTX1                        _L_(53)      /**< GMAC signal: GTX1 on PB21 mux F*/
#define MUX_PB21F_GMAC_GTX1                        _L_(5)       /**< GMAC signal line function value: GTX1 */
#define PIO_PB21F_GMAC_GTX1                        (_UL_(1) << 21)

#define PIN_PC17B_GMAC_GTX1                        _L_(81)      /**< GMAC signal: GTX1 on PC17 mux B*/
#define MUX_PC17B_GMAC_GTX1                        _L_(1)       /**< GMAC signal line function value: GTX1 */
#define PIO_PC17B_GMAC_GTX1                        (_UL_(1) << 17)

#define PIN_PD16D_GMAC_GTX1                        _L_(112)     /**< GMAC signal: GTX1 on PD16 mux D*/
#define MUX_PD16D_GMAC_GTX1                        _L_(3)       /**< GMAC signal line function value: GTX1 */
#define PIO_PD16D_GMAC_GTX1                        (_UL_(1) << 16)

#define PIN_PB12F_GMAC_GTX2                        _L_(44)      /**< GMAC signal: GTX2 on PB12 mux F*/
#define MUX_PB12F_GMAC_GTX2                        _L_(5)       /**< GMAC signal line function value: GTX2 */
#define PIO_PB12F_GMAC_GTX2                        (_UL_(1) << 12)

#define PIN_PC26B_GMAC_GTX2                        _L_(90)      /**< GMAC signal: GTX2 on PC26 mux B*/
#define MUX_PC26B_GMAC_GTX2                        _L_(1)       /**< GMAC signal line function value: GTX2 */
#define PIO_PC26B_GMAC_GTX2                        (_UL_(1) << 26)

#define PIN_PD7D_GMAC_GTX2                         _L_(103)     /**< GMAC signal: GTX2 on PD7 mux D*/
#define MUX_PD7D_GMAC_GTX2                         _L_(3)       /**< GMAC signal line function value: GTX2 */
#define PIO_PD7D_GMAC_GTX2                         (_UL_(1) << 7)

#define PIN_PB13F_GMAC_GTX3                        _L_(45)      /**< GMAC signal: GTX3 on PB13 mux F*/
#define MUX_PB13F_GMAC_GTX3                        _L_(5)       /**< GMAC signal line function value: GTX3 */
#define PIO_PB13F_GMAC_GTX3                        (_UL_(1) << 13)

#define PIN_PC27B_GMAC_GTX3                        _L_(91)      /**< GMAC signal: GTX3 on PC27 mux B*/
#define MUX_PC27B_GMAC_GTX3                        _L_(1)       /**< GMAC signal line function value: GTX3 */
#define PIO_PC27B_GMAC_GTX3                        (_UL_(1) << 27)

#define PIN_PD8D_GMAC_GTX3                         _L_(104)     /**< GMAC signal: GTX3 on PD8 mux D*/
#define MUX_PD8D_GMAC_GTX3                         _L_(3)       /**< GMAC signal line function value: GTX3 */
#define PIO_PD8D_GMAC_GTX3                         (_UL_(1) << 8)

/* ========== PIO definition for I2SC0 peripheral ========== */
#define PIN_PC1E_I2SC0_I2SC0_CK                    _L_(65)      /**< I2SC0 signal: I2SC0_CK on PC1 mux E*/
#define MUX_PC1E_I2SC0_I2SC0_CK                    _L_(4)       /**< I2SC0 signal line function value: I2SC0_CK */
#define PIO_PC1E_I2SC0_I2SC0_CK                    (_UL_(1) << 1)

#define PIN_PD19E_I2SC0_I2SC0_CK                   _L_(115)     /**< I2SC0 signal: I2SC0_CK on PD19 mux E*/
#define MUX_PD19E_I2SC0_I2SC0_CK                   _L_(4)       /**< I2SC0 signal line function value: I2SC0_CK */
#define PIO_PD19E_I2SC0_I2SC0_CK                   (_UL_(1) << 19)

#define PIN_PC4E_I2SC0_I2SC0_DI0                   _L_(68)      /**< I2SC0 signal: I2SC0_DI0 on PC4 mux E*/
#define MUX_PC4E_I2SC0_I2SC0_DI0                   _L_(4)       /**< I2SC0 signal line function value: I2SC0_DI0 */
#define PIO_PC4E_I2SC0_I2SC0_DI0                   (_UL_(1) << 4)

#define PIN_PD22E_I2SC0_I2SC0_DI0                  _L_(118)     /**< I2SC0 signal: I2SC0_DI0 on PD22 mux E*/
#define MUX_PD22E_I2SC0_I2SC0_DI0                  _L_(4)       /**< I2SC0 signal line function value: I2SC0_DI0 */
#define PIO_PD22E_I2SC0_I2SC0_DI0                  (_UL_(1) << 22)

#define PIN_PC5E_I2SC0_I2SC0_DO0                   _L_(69)      /**< I2SC0 signal: I2SC0_DO0 on PC5 mux E*/
#define MUX_PC5E_I2SC0_I2SC0_DO0                   _L_(4)       /**< I2SC0 signal line function value: I2SC0_DO0 */
#define PIO_PC5E_I2SC0_I2SC0_DO0                   (_UL_(1) << 5)

#define PIN_PD23E_I2SC0_I2SC0_DO0                  _L_(119)     /**< I2SC0 signal: I2SC0_DO0 on PD23 mux E*/
#define MUX_PD23E_I2SC0_I2SC0_DO0                  _L_(4)       /**< I2SC0 signal line function value: I2SC0_DO0 */
#define PIO_PD23E_I2SC0_I2SC0_DO0                  (_UL_(1) << 23)

#define PIN_PC2E_I2SC0_I2SC0_MCK                   _L_(66)      /**< I2SC0 signal: I2SC0_MCK on PC2 mux E*/
#define MUX_PC2E_I2SC0_I2SC0_MCK                   _L_(4)       /**< I2SC0 signal line function value: I2SC0_MCK */
#define PIO_PC2E_I2SC0_I2SC0_MCK                   (_UL_(1) << 2)

#define PIN_PD20E_I2SC0_I2SC0_MCK                  _L_(116)     /**< I2SC0 signal: I2SC0_MCK on PD20 mux E*/
#define MUX_PD20E_I2SC0_I2SC0_MCK                  _L_(4)       /**< I2SC0 signal line function value: I2SC0_MCK */
#define PIO_PD20E_I2SC0_I2SC0_MCK                  (_UL_(1) << 20)

#define PIN_PC3E_I2SC0_I2SC0_WS                    _L_(67)      /**< I2SC0 signal: I2SC0_WS on PC3 mux E*/
#define MUX_PC3E_I2SC0_I2SC0_WS                    _L_(4)       /**< I2SC0 signal line function value: I2SC0_WS */
#define PIO_PC3E_I2SC0_I2SC0_WS                    (_UL_(1) << 3)

#define PIN_PD21E_I2SC0_I2SC0_WS                   _L_(117)     /**< I2SC0 signal: I2SC0_WS on PD21 mux E*/
#define MUX_PD21E_I2SC0_I2SC0_WS                   _L_(4)       /**< I2SC0 signal line function value: I2SC0_WS */
#define PIO_PD21E_I2SC0_I2SC0_WS                   (_UL_(1) << 21)

/* ========== PIO definition for I2SC1 peripheral ========== */
#define PIN_PA15D_I2SC1_I2SC1_CK                   _L_(15)      /**< I2SC1 signal: I2SC1_CK on PA15 mux D*/
#define MUX_PA15D_I2SC1_I2SC1_CK                   _L_(3)       /**< I2SC1 signal line function value: I2SC1_CK */
#define PIO_PA15D_I2SC1_I2SC1_CK                   (_UL_(1) << 15)

#define PIN_PB15D_I2SC1_I2SC1_CK                   _L_(47)      /**< I2SC1 signal: I2SC1_CK on PB15 mux D*/
#define MUX_PB15D_I2SC1_I2SC1_CK                   _L_(3)       /**< I2SC1 signal line function value: I2SC1_CK */
#define PIO_PB15D_I2SC1_I2SC1_CK                   (_UL_(1) << 15)

#define PIN_PA17D_I2SC1_I2SC1_DI0                  _L_(17)      /**< I2SC1 signal: I2SC1_DI0 on PA17 mux D*/
#define MUX_PA17D_I2SC1_I2SC1_DI0                  _L_(3)       /**< I2SC1 signal line function value: I2SC1_DI0 */
#define PIO_PA17D_I2SC1_I2SC1_DI0                  (_UL_(1) << 17)

#define PIN_PB17D_I2SC1_I2SC1_DI0                  _L_(49)      /**< I2SC1 signal: I2SC1_DI0 on PB17 mux D*/
#define MUX_PB17D_I2SC1_I2SC1_DI0                  _L_(3)       /**< I2SC1 signal line function value: I2SC1_DI0 */
#define PIO_PB17D_I2SC1_I2SC1_DI0                  (_UL_(1) << 17)

#define PIN_PA18D_I2SC1_I2SC1_DO0                  _L_(18)      /**< I2SC1 signal: I2SC1_DO0 on PA18 mux D*/
#define MUX_PA18D_I2SC1_I2SC1_DO0                  _L_(3)       /**< I2SC1 signal line function value: I2SC1_DO0 */
#define PIO_PA18D_I2SC1_I2SC1_DO0                  (_UL_(1) << 18)

#define PIN_PB18D_I2SC1_I2SC1_DO0                  _L_(50)      /**< I2SC1 signal: I2SC1_DO0 on PB18 mux D*/
#define MUX_PB18D_I2SC1_I2SC1_DO0                  _L_(3)       /**< I2SC1 signal line function value: I2SC1_DO0 */
#define PIO_PB18D_I2SC1_I2SC1_DO0                  (_UL_(1) << 18)

#define PIN_PA14D_I2SC1_I2SC1_MCK                  _L_(14)      /**< I2SC1 signal: I2SC1_MCK on PA14 mux D*/
#define MUX_PA14D_I2SC1_I2SC1_MCK                  _L_(3)       /**< I2SC1 signal line function value: I2SC1_MCK */
#define PIO_PA14D_I2SC1_I2SC1_MCK                  (_UL_(1) << 14)

#define PIN_PB14D_I2SC1_I2SC1_MCK                  _L_(46)      /**< I2SC1 signal: I2SC1_MCK on PB14 mux D*/
#define MUX_PB14D_I2SC1_I2SC1_MCK                  _L_(3)       /**< I2SC1 signal line function value: I2SC1_MCK */
#define PIO_PB14D_I2SC1_I2SC1_MCK                  (_UL_(1) << 14)

#define PIN_PA16D_I2SC1_I2SC1_WS                   _L_(16)      /**< I2SC1 signal: I2SC1_WS on PA16 mux D*/
#define MUX_PA16D_I2SC1_I2SC1_WS                   _L_(3)       /**< I2SC1 signal line function value: I2SC1_WS */
#define PIO_PA16D_I2SC1_I2SC1_WS                   (_UL_(1) << 16)

#define PIN_PB16D_I2SC1_I2SC1_WS                   _L_(48)      /**< I2SC1 signal: I2SC1_WS on PB16 mux D*/
#define MUX_PB16D_I2SC1_I2SC1_WS                   _L_(3)       /**< I2SC1 signal line function value: I2SC1_WS */
#define PIO_PB16D_I2SC1_I2SC1_WS                   (_UL_(1) << 16)

/* ========== PIO definition for ICE peripheral ========== */
#define PIN_PA23C_ICE_TDI                          _L_(23)      /**< ICE signal: TDI on PA23 mux C*/
#define MUX_PA23C_ICE_TDI                          _L_(2)       /**< ICE signal line function value: TDI */
#define PIO_PA23C_ICE_TDI                          (_UL_(1) << 23)

#define PIN_PD7A_ICE_TDI                           _L_(103)     /**< ICE signal: TDI on PD7 mux A*/
#define MUX_PD7A_ICE_TDI                           _L_(0)       /**< ICE signal line function value: TDI */
#define PIO_PD7A_ICE_TDI                           (_UL_(1) << 7)

#define PIN_PD15A_ICE_TDI                          _L_(111)     /**< ICE signal: TDI on PD15 mux A*/
#define MUX_PD15A_ICE_TDI                          _L_(0)       /**< ICE signal line function value: TDI */
#define PIO_PD15A_ICE_TDI                          (_UL_(1) << 15)

#define PIN_PD28B_ICE_TDI                          _L_(124)     /**< ICE signal: TDI on PD28 mux B*/
#define MUX_PD28B_ICE_TDI                          _L_(1)       /**< ICE signal line function value: TDI */
#define PIO_PD28B_ICE_TDI                          (_UL_(1) << 28)

#define PIN_PA24C_ICE_TDO                          _L_(24)      /**< ICE signal: TDO on PA24 mux C*/
#define MUX_PA24C_ICE_TDO                          _L_(2)       /**< ICE signal line function value: TDO */
#define PIO_PA24C_ICE_TDO                          (_UL_(1) << 24)

#define PIN_PD8A_ICE_TDO                           _L_(104)     /**< ICE signal: TDO on PD8 mux A*/
#define MUX_PD8A_ICE_TDO                           _L_(0)       /**< ICE signal line function value: TDO */
#define PIO_PD8A_ICE_TDO                           (_UL_(1) << 8)

#define PIN_PD16A_ICE_TDO                          _L_(112)     /**< ICE signal: TDO on PD16 mux A*/
#define MUX_PD16A_ICE_TDO                          _L_(0)       /**< ICE signal line function value: TDO */
#define PIO_PD16A_ICE_TDO                          (_UL_(1) << 16)

#define PIN_PD29B_ICE_TDO                          _L_(125)     /**< ICE signal: TDO on PD29 mux B*/
#define MUX_PD29B_ICE_TDO                          _L_(1)       /**< ICE signal line function value: TDO */
#define PIO_PD29B_ICE_TDO                          (_UL_(1) << 29)

#define PIN_PA25C_ICE_TMS                          _L_(25)      /**< ICE signal: TMS on PA25 mux C*/
#define MUX_PA25C_ICE_TMS                          _L_(2)       /**< ICE signal line function value: TMS */
#define PIO_PA25C_ICE_TMS                          (_UL_(1) << 25)

#define PIN_PD9A_ICE_TMS                           _L_(105)     /**< ICE signal: TMS on PD9 mux A*/
#define MUX_PD9A_ICE_TMS                           _L_(0)       /**< ICE signal line function value: TMS */
#define PIO_PD9A_ICE_TMS                           (_UL_(1) << 9)

#define PIN_PD17A_ICE_TMS                          _L_(113)     /**< ICE signal: TMS on PD17 mux A*/
#define MUX_PD17A_ICE_TMS                          _L_(0)       /**< ICE signal line function value: TMS */
#define PIO_PD17A_ICE_TMS                          (_UL_(1) << 17)

#define PIN_PD30B_ICE_TMS                          _L_(126)     /**< ICE signal: TMS on PD30 mux B*/
#define MUX_PD30B_ICE_TMS                          _L_(1)       /**< ICE signal line function value: TMS */
#define PIO_PD30B_ICE_TMS                          (_UL_(1) << 30)

#define PIN_PA22C_ICE_TCK                          _L_(22)      /**< ICE signal: TCK on PA22 mux C*/
#define MUX_PA22C_ICE_TCK                          _L_(2)       /**< ICE signal line function value: TCK */
#define PIO_PA22C_ICE_TCK                          (_UL_(1) << 22)

#define PIN_PD6A_ICE_TCK                           _L_(102)     /**< ICE signal: TCK on PD6 mux A*/
#define MUX_PD6A_ICE_TCK                           _L_(0)       /**< ICE signal line function value: TCK */
#define PIO_PD6A_ICE_TCK                           (_UL_(1) << 6)

#define PIN_PD14A_ICE_TCK                          _L_(110)     /**< ICE signal: TCK on PD14 mux A*/
#define MUX_PD14A_ICE_TCK                          _L_(0)       /**< ICE signal line function value: TCK */
#define PIO_PD14A_ICE_TCK                          (_UL_(1) << 14)

#define PIN_PD27B_ICE_TCK                          _L_(123)     /**< ICE signal: TCK on PD27 mux B*/
#define MUX_PD27B_ICE_TCK                          _L_(1)       /**< ICE signal line function value: TCK */
#define PIO_PD27B_ICE_TCK                          (_UL_(1) << 27)

#define PIN_PA26C_ICE_NTRST                        _L_(26)      /**< ICE signal: NTRST on PA26 mux C*/
#define MUX_PA26C_ICE_NTRST                        _L_(2)       /**< ICE signal line function value: NTRST */
#define PIO_PA26C_ICE_NTRST                        (_UL_(1) << 26)

#define PIN_PD10A_ICE_NTRST                        _L_(106)     /**< ICE signal: NTRST on PD10 mux A*/
#define MUX_PD10A_ICE_NTRST                        _L_(0)       /**< ICE signal line function value: NTRST */
#define PIO_PD10A_ICE_NTRST                        (_UL_(1) << 10)

#define PIN_PD18A_ICE_NTRST                        _L_(114)     /**< ICE signal: NTRST on PD18 mux A*/
#define MUX_PD18A_ICE_NTRST                        _L_(0)       /**< ICE signal line function value: NTRST */
#define PIO_PD18A_ICE_NTRST                        (_UL_(1) << 18)

#define PIN_PD31B_ICE_NTRST                        _L_(127)     /**< ICE signal: NTRST on PD31 mux B*/
#define MUX_PD31B_ICE_NTRST                        _L_(1)       /**< ICE signal line function value: NTRST */
#define PIO_PD31B_ICE_NTRST                        (_UL_(1) << 31)

/* ========== PIO definition for ISC peripheral ========== */
#define PIN_PB26F_ISC_ISC_D0                       _L_(58)      /**< ISC signal: ISC_D0 on PB26 mux F*/
#define MUX_PB26F_ISC_ISC_D0                       _L_(5)       /**< ISC signal line function value: ISC_D0 */
#define PIO_PB26F_ISC_ISC_D0                       (_UL_(1) << 26)

#define PIN_PC9C_ISC_ISC_D0                        _L_(73)      /**< ISC signal: ISC_D0 on PC9 mux C*/
#define MUX_PC9C_ISC_ISC_D0                        _L_(2)       /**< ISC signal line function value: ISC_D0 */
#define PIO_PC9C_ISC_ISC_D0                        (_UL_(1) << 9)

#define PIN_PD7E_ISC_ISC_D0                        _L_(103)     /**< ISC signal: ISC_D0 on PD7 mux E*/
#define MUX_PD7E_ISC_ISC_D0                        _L_(4)       /**< ISC signal line function value: ISC_D0 */
#define PIO_PD7E_ISC_ISC_D0                        (_UL_(1) << 7)

#define PIN_PB27F_ISC_ISC_D1                       _L_(59)      /**< ISC signal: ISC_D1 on PB27 mux F*/
#define MUX_PB27F_ISC_ISC_D1                       _L_(5)       /**< ISC signal line function value: ISC_D1 */
#define PIO_PB27F_ISC_ISC_D1                       (_UL_(1) << 27)

#define PIN_PC10C_ISC_ISC_D1                       _L_(74)      /**< ISC signal: ISC_D1 on PC10 mux C*/
#define MUX_PC10C_ISC_ISC_D1                       _L_(2)       /**< ISC signal line function value: ISC_D1 */
#define PIO_PC10C_ISC_ISC_D1                       (_UL_(1) << 10)

#define PIN_PD8E_ISC_ISC_D1                        _L_(104)     /**< ISC signal: ISC_D1 on PD8 mux E*/
#define MUX_PD8E_ISC_ISC_D1                        _L_(4)       /**< ISC signal line function value: ISC_D1 */
#define PIO_PD8E_ISC_ISC_D1                        (_UL_(1) << 8)

#define PIN_PB28F_ISC_ISC_D2                       _L_(60)      /**< ISC signal: ISC_D2 on PB28 mux F*/
#define MUX_PB28F_ISC_ISC_D2                       _L_(5)       /**< ISC signal line function value: ISC_D2 */
#define PIO_PB28F_ISC_ISC_D2                       (_UL_(1) << 28)

#define PIN_PC11C_ISC_ISC_D2                       _L_(75)      /**< ISC signal: ISC_D2 on PC11 mux C*/
#define MUX_PC11C_ISC_ISC_D2                       _L_(2)       /**< ISC signal line function value: ISC_D2 */
#define PIO_PC11C_ISC_ISC_D2                       (_UL_(1) << 11)

#define PIN_PD9E_ISC_ISC_D2                        _L_(105)     /**< ISC signal: ISC_D2 on PD9 mux E*/
#define MUX_PD9E_ISC_ISC_D2                        _L_(4)       /**< ISC signal line function value: ISC_D2 */
#define PIO_PD9E_ISC_ISC_D2                        (_UL_(1) << 9)

#define PIN_PB29F_ISC_ISC_D3                       _L_(61)      /**< ISC signal: ISC_D3 on PB29 mux F*/
#define MUX_PB29F_ISC_ISC_D3                       _L_(5)       /**< ISC signal line function value: ISC_D3 */
#define PIO_PB29F_ISC_ISC_D3                       (_UL_(1) << 29)

#define PIN_PC12C_ISC_ISC_D3                       _L_(76)      /**< ISC signal: ISC_D3 on PC12 mux C*/
#define MUX_PC12C_ISC_ISC_D3                       _L_(2)       /**< ISC signal line function value: ISC_D3 */
#define PIO_PC12C_ISC_ISC_D3                       (_UL_(1) << 12)

#define PIN_PD10E_ISC_ISC_D3                       _L_(106)     /**< ISC signal: ISC_D3 on PD10 mux E*/
#define MUX_PD10E_ISC_ISC_D3                       _L_(4)       /**< ISC signal line function value: ISC_D3 */
#define PIO_PD10E_ISC_ISC_D3                       (_UL_(1) << 10)

#define PIN_PB30F_ISC_ISC_D4                       _L_(62)      /**< ISC signal: ISC_D4 on PB30 mux F*/
#define MUX_PB30F_ISC_ISC_D4                       _L_(5)       /**< ISC signal line function value: ISC_D4 */
#define PIO_PB30F_ISC_ISC_D4                       (_UL_(1) << 30)

#define PIN_PC13C_ISC_ISC_D4                       _L_(77)      /**< ISC signal: ISC_D4 on PC13 mux C*/
#define MUX_PC13C_ISC_ISC_D4                       _L_(2)       /**< ISC signal line function value: ISC_D4 */
#define PIO_PC13C_ISC_ISC_D4                       (_UL_(1) << 13)

#define PIN_PD11E_ISC_ISC_D4                       _L_(107)     /**< ISC signal: ISC_D4 on PD11 mux E*/
#define MUX_PD11E_ISC_ISC_D4                       _L_(4)       /**< ISC signal line function value: ISC_D4 */
#define PIO_PD11E_ISC_ISC_D4                       (_UL_(1) << 11)

#define PIN_PD12F_ISC_ISC_D4                       _L_(108)     /**< ISC signal: ISC_D4 on PD12 mux F*/
#define MUX_PD12F_ISC_ISC_D4                       _L_(5)       /**< ISC signal line function value: ISC_D4 */
#define PIO_PD12F_ISC_ISC_D4                       (_UL_(1) << 12)

#define PIN_PB31F_ISC_ISC_D5                       _L_(63)      /**< ISC signal: ISC_D5 on PB31 mux F*/
#define MUX_PB31F_ISC_ISC_D5                       _L_(5)       /**< ISC signal line function value: ISC_D5 */
#define PIO_PB31F_ISC_ISC_D5                       (_UL_(1) << 31)

#define PIN_PC14C_ISC_ISC_D5                       _L_(78)      /**< ISC signal: ISC_D5 on PC14 mux C*/
#define MUX_PC14C_ISC_ISC_D5                       _L_(2)       /**< ISC signal line function value: ISC_D5 */
#define PIO_PC14C_ISC_ISC_D5                       (_UL_(1) << 14)

#define PIN_PD12E_ISC_ISC_D5                       _L_(108)     /**< ISC signal: ISC_D5 on PD12 mux E*/
#define MUX_PD12E_ISC_ISC_D5                       _L_(4)       /**< ISC signal line function value: ISC_D5 */
#define PIO_PD12E_ISC_ISC_D5                       (_UL_(1) << 12)

#define PIN_PD13F_ISC_ISC_D5                       _L_(109)     /**< ISC signal: ISC_D5 on PD13 mux F*/
#define MUX_PD13F_ISC_ISC_D5                       _L_(5)       /**< ISC signal line function value: ISC_D5 */
#define PIO_PD13F_ISC_ISC_D5                       (_UL_(1) << 13)

#define PIN_PC0F_ISC_ISC_D6                        _L_(64)      /**< ISC signal: ISC_D6 on PC0 mux F*/
#define MUX_PC0F_ISC_ISC_D6                        _L_(5)       /**< ISC signal line function value: ISC_D6 */
#define PIO_PC0F_ISC_ISC_D6                        (_UL_(1) << 0)

#define PIN_PC15C_ISC_ISC_D6                       _L_(79)      /**< ISC signal: ISC_D6 on PC15 mux C*/
#define MUX_PC15C_ISC_ISC_D6                       _L_(2)       /**< ISC signal line function value: ISC_D6 */
#define PIO_PC15C_ISC_ISC_D6                       (_UL_(1) << 15)

#define PIN_PD13E_ISC_ISC_D6                       _L_(109)     /**< ISC signal: ISC_D6 on PD13 mux E*/
#define MUX_PD13E_ISC_ISC_D6                       _L_(4)       /**< ISC signal line function value: ISC_D6 */
#define PIO_PD13E_ISC_ISC_D6                       (_UL_(1) << 13)

#define PIN_PD14F_ISC_ISC_D6                       _L_(110)     /**< ISC signal: ISC_D6 on PD14 mux F*/
#define MUX_PD14F_ISC_ISC_D6                       _L_(5)       /**< ISC signal line function value: ISC_D6 */
#define PIO_PD14F_ISC_ISC_D6                       (_UL_(1) << 14)

#define PIN_PC1F_ISC_ISC_D7                        _L_(65)      /**< ISC signal: ISC_D7 on PC1 mux F*/
#define MUX_PC1F_ISC_ISC_D7                        _L_(5)       /**< ISC signal line function value: ISC_D7 */
#define PIO_PC1F_ISC_ISC_D7                        (_UL_(1) << 1)

#define PIN_PC16C_ISC_ISC_D7                       _L_(80)      /**< ISC signal: ISC_D7 on PC16 mux C*/
#define MUX_PC16C_ISC_ISC_D7                       _L_(2)       /**< ISC signal line function value: ISC_D7 */
#define PIO_PC16C_ISC_ISC_D7                       (_UL_(1) << 16)

#define PIN_PD14E_ISC_ISC_D7                       _L_(110)     /**< ISC signal: ISC_D7 on PD14 mux E*/
#define MUX_PD14E_ISC_ISC_D7                       _L_(4)       /**< ISC signal line function value: ISC_D7 */
#define PIO_PD14E_ISC_ISC_D7                       (_UL_(1) << 14)

#define PIN_PD15F_ISC_ISC_D7                       _L_(111)     /**< ISC signal: ISC_D7 on PD15 mux F*/
#define MUX_PD15F_ISC_ISC_D7                       _L_(5)       /**< ISC signal line function value: ISC_D7 */
#define PIO_PD15F_ISC_ISC_D7                       (_UL_(1) << 15)

#define PIN_PC2F_ISC_ISC_D8                        _L_(66)      /**< ISC signal: ISC_D8 on PC2 mux F*/
#define MUX_PC2F_ISC_ISC_D8                        _L_(5)       /**< ISC signal line function value: ISC_D8 */
#define PIO_PC2F_ISC_ISC_D8                        (_UL_(1) << 2)

#define PIN_PC17C_ISC_ISC_D8                       _L_(81)      /**< ISC signal: ISC_D8 on PC17 mux C*/
#define MUX_PC17C_ISC_ISC_D8                       _L_(2)       /**< ISC signal line function value: ISC_D8 */
#define PIO_PC17C_ISC_ISC_D8                       (_UL_(1) << 17)

#define PIN_PD6E_ISC_ISC_D8                        _L_(102)     /**< ISC signal: ISC_D8 on PD6 mux E*/
#define MUX_PD6E_ISC_ISC_D8                        _L_(4)       /**< ISC signal line function value: ISC_D8 */
#define PIO_PD6E_ISC_ISC_D8                        (_UL_(1) << 6)

#define PIN_PD16F_ISC_ISC_D8                       _L_(112)     /**< ISC signal: ISC_D8 on PD16 mux F*/
#define MUX_PD16F_ISC_ISC_D8                       _L_(5)       /**< ISC signal line function value: ISC_D8 */
#define PIO_PD16F_ISC_ISC_D8                       (_UL_(1) << 16)

#define PIN_PC3F_ISC_ISC_D9                        _L_(67)      /**< ISC signal: ISC_D9 on PC3 mux F*/
#define MUX_PC3F_ISC_ISC_D9                        _L_(5)       /**< ISC signal line function value: ISC_D9 */
#define PIO_PC3F_ISC_ISC_D9                        (_UL_(1) << 3)

#define PIN_PC18C_ISC_ISC_D9                       _L_(82)      /**< ISC signal: ISC_D9 on PC18 mux C*/
#define MUX_PC18C_ISC_ISC_D9                       _L_(2)       /**< ISC signal line function value: ISC_D9 */
#define PIO_PC18C_ISC_ISC_D9                       (_UL_(1) << 18)

#define PIN_PD5E_ISC_ISC_D9                        _L_(101)     /**< ISC signal: ISC_D9 on PD5 mux E*/
#define MUX_PD5E_ISC_ISC_D9                        _L_(4)       /**< ISC signal line function value: ISC_D9 */
#define PIO_PD5E_ISC_ISC_D9                        (_UL_(1) << 5)

#define PIN_PD17F_ISC_ISC_D9                       _L_(113)     /**< ISC signal: ISC_D9 on PD17 mux F*/
#define MUX_PD17F_ISC_ISC_D9                       _L_(5)       /**< ISC signal line function value: ISC_D9 */
#define PIO_PD17F_ISC_ISC_D9                       (_UL_(1) << 17)

#define PIN_PB24F_ISC_ISC_D10                      _L_(56)      /**< ISC signal: ISC_D10 on PB24 mux F*/
#define MUX_PB24F_ISC_ISC_D10                      _L_(5)       /**< ISC signal line function value: ISC_D10 */
#define PIO_PB24F_ISC_ISC_D10                      (_UL_(1) << 24)

#define PIN_PC19C_ISC_ISC_D10                      _L_(83)      /**< ISC signal: ISC_D10 on PC19 mux C*/
#define MUX_PC19C_ISC_ISC_D10                      _L_(2)       /**< ISC signal line function value: ISC_D10 */
#define PIO_PC19C_ISC_ISC_D10                      (_UL_(1) << 19)

#define PIN_PD4E_ISC_ISC_D10                       _L_(100)     /**< ISC signal: ISC_D10 on PD4 mux E*/
#define MUX_PD4E_ISC_ISC_D10                       _L_(4)       /**< ISC signal line function value: ISC_D10 */
#define PIO_PD4E_ISC_ISC_D10                       (_UL_(1) << 4)

#define PIN_PD18F_ISC_ISC_D10                      _L_(114)     /**< ISC signal: ISC_D10 on PD18 mux F*/
#define MUX_PD18F_ISC_ISC_D10                      _L_(5)       /**< ISC signal line function value: ISC_D10 */
#define PIO_PD18F_ISC_ISC_D10                      (_UL_(1) << 18)

#define PIN_PB25F_ISC_ISC_D11                      _L_(57)      /**< ISC signal: ISC_D11 on PB25 mux F*/
#define MUX_PB25F_ISC_ISC_D11                      _L_(5)       /**< ISC signal line function value: ISC_D11 */
#define PIO_PB25F_ISC_ISC_D11                      (_UL_(1) << 25)

#define PIN_PC20C_ISC_ISC_D11                      _L_(84)      /**< ISC signal: ISC_D11 on PC20 mux C*/
#define MUX_PC20C_ISC_ISC_D11                      _L_(2)       /**< ISC signal line function value: ISC_D11 */
#define PIO_PC20C_ISC_ISC_D11                      (_UL_(1) << 20)

#define PIN_PD3E_ISC_ISC_D11                       _L_(99)      /**< ISC signal: ISC_D11 on PD3 mux E*/
#define MUX_PD3E_ISC_ISC_D11                       _L_(4)       /**< ISC signal line function value: ISC_D11 */
#define PIO_PD3E_ISC_ISC_D11                       (_UL_(1) << 3)

#define PIN_PD19F_ISC_ISC_D11                      _L_(115)     /**< ISC signal: ISC_D11 on PD19 mux F*/
#define MUX_PD19F_ISC_ISC_D11                      _L_(5)       /**< ISC signal line function value: ISC_D11 */
#define PIO_PD19F_ISC_ISC_D11                      (_UL_(1) << 19)

#define PIN_PC8F_ISC_ISC_FIELD                     _L_(72)      /**< ISC signal: ISC_FIELD on PC8 mux F*/
#define MUX_PC8F_ISC_ISC_FIELD                     _L_(5)       /**< ISC signal line function value: ISC_FIELD */
#define PIO_PC8F_ISC_ISC_FIELD                     (_UL_(1) << 8)

#define PIN_PC25C_ISC_ISC_FIELD                    _L_(89)      /**< ISC signal: ISC_FIELD on PC25 mux C*/
#define MUX_PC25C_ISC_ISC_FIELD                    _L_(2)       /**< ISC signal line function value: ISC_FIELD */
#define PIO_PC25C_ISC_ISC_FIELD                    (_UL_(1) << 25)

#define PIN_PD18E_ISC_ISC_FIELD                    _L_(114)     /**< ISC signal: ISC_FIELD on PD18 mux E*/
#define MUX_PD18E_ISC_ISC_FIELD                    _L_(4)       /**< ISC signal line function value: ISC_FIELD */
#define PIO_PD18E_ISC_ISC_FIELD                    (_UL_(1) << 18)

#define PIN_PD23F_ISC_ISC_FIELD                    _L_(119)     /**< ISC signal: ISC_FIELD on PD23 mux F*/
#define MUX_PD23F_ISC_ISC_FIELD                    _L_(5)       /**< ISC signal line function value: ISC_FIELD */
#define PIO_PD23F_ISC_ISC_FIELD                    (_UL_(1) << 23)

#define PIN_PC6F_ISC_ISC_HSYNC                     _L_(70)      /**< ISC signal: ISC_HSYNC on PC6 mux F*/
#define MUX_PC6F_ISC_ISC_HSYNC                     _L_(5)       /**< ISC signal line function value: ISC_HSYNC */
#define PIO_PC6F_ISC_ISC_HSYNC                     (_UL_(1) << 6)

#define PIN_PC23C_ISC_ISC_HSYNC                    _L_(87)      /**< ISC signal: ISC_HSYNC on PC23 mux C*/
#define MUX_PC23C_ISC_ISC_HSYNC                    _L_(2)       /**< ISC signal line function value: ISC_HSYNC */
#define PIO_PC23C_ISC_ISC_HSYNC                    (_UL_(1) << 23)

#define PIN_PD17E_ISC_ISC_HSYNC                    _L_(113)     /**< ISC signal: ISC_HSYNC on PD17 mux E*/
#define MUX_PD17E_ISC_ISC_HSYNC                    _L_(4)       /**< ISC signal line function value: ISC_HSYNC */
#define PIO_PD17E_ISC_ISC_HSYNC                    (_UL_(1) << 17)

#define PIN_PD22F_ISC_ISC_HSYNC                    _L_(118)     /**< ISC signal: ISC_HSYNC on PD22 mux F*/
#define MUX_PD22F_ISC_ISC_HSYNC                    _L_(5)       /**< ISC signal line function value: ISC_HSYNC */
#define PIO_PD22F_ISC_ISC_HSYNC                    (_UL_(1) << 22)

#define PIN_PC7F_ISC_ISC_MCK                       _L_(71)      /**< ISC signal: ISC_MCK on PC7 mux F*/
#define MUX_PC7F_ISC_ISC_MCK                       _L_(5)       /**< ISC signal line function value: ISC_MCK */
#define PIO_PC7F_ISC_ISC_MCK                       (_UL_(1) << 7)

#define PIN_PC24C_ISC_ISC_MCK                      _L_(88)      /**< ISC signal: ISC_MCK on PC24 mux C*/
#define MUX_PC24C_ISC_ISC_MCK                      _L_(2)       /**< ISC signal line function value: ISC_MCK */
#define PIO_PC24C_ISC_ISC_MCK                      (_UL_(1) << 24)

#define PIN_PD2E_ISC_ISC_MCK                       _L_(98)      /**< ISC signal: ISC_MCK on PD2 mux E*/
#define MUX_PD2E_ISC_ISC_MCK                       _L_(4)       /**< ISC signal line function value: ISC_MCK */
#define PIO_PD2E_ISC_ISC_MCK                       (_UL_(1) << 2)

#define PIN_PD11F_ISC_ISC_MCK                      _L_(107)     /**< ISC signal: ISC_MCK on PD11 mux F*/
#define MUX_PD11F_ISC_ISC_MCK                      _L_(5)       /**< ISC signal line function value: ISC_MCK */
#define PIO_PD11F_ISC_ISC_MCK                      (_UL_(1) << 11)

#define PIN_PC4F_ISC_ISC_PCK                       _L_(68)      /**< ISC signal: ISC_PCK on PC4 mux F*/
#define MUX_PC4F_ISC_ISC_PCK                       _L_(5)       /**< ISC signal line function value: ISC_PCK */
#define PIO_PC4F_ISC_ISC_PCK                       (_UL_(1) << 4)

#define PIN_PC21C_ISC_ISC_PCK                      _L_(85)      /**< ISC signal: ISC_PCK on PC21 mux C*/
#define MUX_PC21C_ISC_ISC_PCK                      _L_(2)       /**< ISC signal line function value: ISC_PCK */
#define PIO_PC21C_ISC_ISC_PCK                      (_UL_(1) << 21)

#define PIN_PD15E_ISC_ISC_PCK                      _L_(111)     /**< ISC signal: ISC_PCK on PD15 mux E*/
#define MUX_PD15E_ISC_ISC_PCK                      _L_(4)       /**< ISC signal line function value: ISC_PCK */
#define PIO_PD15E_ISC_ISC_PCK                      (_UL_(1) << 15)

#define PIN_PD20F_ISC_ISC_PCK                      _L_(116)     /**< ISC signal: ISC_PCK on PD20 mux F*/
#define MUX_PD20F_ISC_ISC_PCK                      _L_(5)       /**< ISC signal line function value: ISC_PCK */
#define PIO_PD20F_ISC_ISC_PCK                      (_UL_(1) << 20)

#define PIN_PC5F_ISC_ISC_VSYNC                     _L_(69)      /**< ISC signal: ISC_VSYNC on PC5 mux F*/
#define MUX_PC5F_ISC_ISC_VSYNC                     _L_(5)       /**< ISC signal line function value: ISC_VSYNC */
#define PIO_PC5F_ISC_ISC_VSYNC                     (_UL_(1) << 5)

#define PIN_PC22C_ISC_ISC_VSYNC                    _L_(86)      /**< ISC signal: ISC_VSYNC on PC22 mux C*/
#define MUX_PC22C_ISC_ISC_VSYNC                    _L_(2)       /**< ISC signal line function value: ISC_VSYNC */
#define PIO_PC22C_ISC_ISC_VSYNC                    (_UL_(1) << 22)

#define PIN_PD16E_ISC_ISC_VSYNC                    _L_(112)     /**< ISC signal: ISC_VSYNC on PD16 mux E*/
#define MUX_PD16E_ISC_ISC_VSYNC                    _L_(4)       /**< ISC signal line function value: ISC_VSYNC */
#define PIO_PD16E_ISC_ISC_VSYNC                    (_UL_(1) << 16)

#define PIN_PD21F_ISC_ISC_VSYNC                    _L_(117)     /**< ISC signal: ISC_VSYNC on PD21 mux F*/
#define MUX_PD21F_ISC_ISC_VSYNC                    _L_(5)       /**< ISC signal line function value: ISC_VSYNC */
#define PIO_PD21F_ISC_ISC_VSYNC                    (_UL_(1) << 21)

/* ========== PIO definition for LCDC peripheral ========== */
#define PIN_PB11A_LCDC_LCDDAT0                     _L_(43)      /**< LCDC signal: LCDDAT0 on PB11 mux A*/
#define MUX_PB11A_LCDC_LCDDAT0                     _L_(0)       /**< LCDC signal line function value: LCDDAT0 */
#define PIO_PB11A_LCDC_LCDDAT0                     (_UL_(1) << 11)

#define PIN_PB12A_LCDC_LCDDAT1                     _L_(44)      /**< LCDC signal: LCDDAT1 on PB12 mux A*/
#define MUX_PB12A_LCDC_LCDDAT1                     _L_(0)       /**< LCDC signal line function value: LCDDAT1 */
#define PIO_PB12A_LCDC_LCDDAT1                     (_UL_(1) << 12)

#define PIN_PB13A_LCDC_LCDDAT2                     _L_(45)      /**< LCDC signal: LCDDAT2 on PB13 mux A*/
#define MUX_PB13A_LCDC_LCDDAT2                     _L_(0)       /**< LCDC signal line function value: LCDDAT2 */
#define PIO_PB13A_LCDC_LCDDAT2                     (_UL_(1) << 13)

#define PIN_PC10A_LCDC_LCDDAT2                     _L_(74)      /**< LCDC signal: LCDDAT2 on PC10 mux A*/
#define MUX_PC10A_LCDC_LCDDAT2                     _L_(0)       /**< LCDC signal line function value: LCDDAT2 */
#define PIO_PC10A_LCDC_LCDDAT2                     (_UL_(1) << 10)

#define PIN_PB14A_LCDC_LCDDAT3                     _L_(46)      /**< LCDC signal: LCDDAT3 on PB14 mux A*/
#define MUX_PB14A_LCDC_LCDDAT3                     _L_(0)       /**< LCDC signal line function value: LCDDAT3 */
#define PIO_PB14A_LCDC_LCDDAT3                     (_UL_(1) << 14)

#define PIN_PC11A_LCDC_LCDDAT3                     _L_(75)      /**< LCDC signal: LCDDAT3 on PC11 mux A*/
#define MUX_PC11A_LCDC_LCDDAT3                     _L_(0)       /**< LCDC signal line function value: LCDDAT3 */
#define PIO_PC11A_LCDC_LCDDAT3                     (_UL_(1) << 11)

#define PIN_PB15A_LCDC_LCDDAT4                     _L_(47)      /**< LCDC signal: LCDDAT4 on PB15 mux A*/
#define MUX_PB15A_LCDC_LCDDAT4                     _L_(0)       /**< LCDC signal line function value: LCDDAT4 */
#define PIO_PB15A_LCDC_LCDDAT4                     (_UL_(1) << 15)

#define PIN_PC12A_LCDC_LCDDAT4                     _L_(76)      /**< LCDC signal: LCDDAT4 on PC12 mux A*/
#define MUX_PC12A_LCDC_LCDDAT4                     _L_(0)       /**< LCDC signal line function value: LCDDAT4 */
#define PIO_PC12A_LCDC_LCDDAT4                     (_UL_(1) << 12)

#define PIN_PB16A_LCDC_LCDDAT5                     _L_(48)      /**< LCDC signal: LCDDAT5 on PB16 mux A*/
#define MUX_PB16A_LCDC_LCDDAT5                     _L_(0)       /**< LCDC signal line function value: LCDDAT5 */
#define PIO_PB16A_LCDC_LCDDAT5                     (_UL_(1) << 16)

#define PIN_PC13A_LCDC_LCDDAT5                     _L_(77)      /**< LCDC signal: LCDDAT5 on PC13 mux A*/
#define MUX_PC13A_LCDC_LCDDAT5                     _L_(0)       /**< LCDC signal line function value: LCDDAT5 */
#define PIO_PC13A_LCDC_LCDDAT5                     (_UL_(1) << 13)

#define PIN_PB17A_LCDC_LCDDAT6                     _L_(49)      /**< LCDC signal: LCDDAT6 on PB17 mux A*/
#define MUX_PB17A_LCDC_LCDDAT6                     _L_(0)       /**< LCDC signal line function value: LCDDAT6 */
#define PIO_PB17A_LCDC_LCDDAT6                     (_UL_(1) << 17)

#define PIN_PC14A_LCDC_LCDDAT6                     _L_(78)      /**< LCDC signal: LCDDAT6 on PC14 mux A*/
#define MUX_PC14A_LCDC_LCDDAT6                     _L_(0)       /**< LCDC signal line function value: LCDDAT6 */
#define PIO_PC14A_LCDC_LCDDAT6                     (_UL_(1) << 14)

#define PIN_PB18A_LCDC_LCDDAT7                     _L_(50)      /**< LCDC signal: LCDDAT7 on PB18 mux A*/
#define MUX_PB18A_LCDC_LCDDAT7                     _L_(0)       /**< LCDC signal line function value: LCDDAT7 */
#define PIO_PB18A_LCDC_LCDDAT7                     (_UL_(1) << 18)

#define PIN_PC15A_LCDC_LCDDAT7                     _L_(79)      /**< LCDC signal: LCDDAT7 on PC15 mux A*/
#define MUX_PC15A_LCDC_LCDDAT7                     _L_(0)       /**< LCDC signal line function value: LCDDAT7 */
#define PIO_PC15A_LCDC_LCDDAT7                     (_UL_(1) << 15)

#define PIN_PB19A_LCDC_LCDDAT8                     _L_(51)      /**< LCDC signal: LCDDAT8 on PB19 mux A*/
#define MUX_PB19A_LCDC_LCDDAT8                     _L_(0)       /**< LCDC signal line function value: LCDDAT8 */
#define PIO_PB19A_LCDC_LCDDAT8                     (_UL_(1) << 19)

#define PIN_PB20A_LCDC_LCDDAT9                     _L_(52)      /**< LCDC signal: LCDDAT9 on PB20 mux A*/
#define MUX_PB20A_LCDC_LCDDAT9                     _L_(0)       /**< LCDC signal line function value: LCDDAT9 */
#define PIO_PB20A_LCDC_LCDDAT9                     (_UL_(1) << 20)

#define PIN_PB21A_LCDC_LCDDAT10                    _L_(53)      /**< LCDC signal: LCDDAT10 on PB21 mux A*/
#define MUX_PB21A_LCDC_LCDDAT10                    _L_(0)       /**< LCDC signal line function value: LCDDAT10 */
#define PIO_PB21A_LCDC_LCDDAT10                    (_UL_(1) << 21)

#define PIN_PC16A_LCDC_LCDDAT10                    _L_(80)      /**< LCDC signal: LCDDAT10 on PC16 mux A*/
#define MUX_PC16A_LCDC_LCDDAT10                    _L_(0)       /**< LCDC signal line function value: LCDDAT10 */
#define PIO_PC16A_LCDC_LCDDAT10                    (_UL_(1) << 16)

#define PIN_PB22A_LCDC_LCDDAT11                    _L_(54)      /**< LCDC signal: LCDDAT11 on PB22 mux A*/
#define MUX_PB22A_LCDC_LCDDAT11                    _L_(0)       /**< LCDC signal line function value: LCDDAT11 */
#define PIO_PB22A_LCDC_LCDDAT11                    (_UL_(1) << 22)

#define PIN_PC17A_LCDC_LCDDAT11                    _L_(81)      /**< LCDC signal: LCDDAT11 on PC17 mux A*/
#define MUX_PC17A_LCDC_LCDDAT11                    _L_(0)       /**< LCDC signal line function value: LCDDAT11 */
#define PIO_PC17A_LCDC_LCDDAT11                    (_UL_(1) << 17)

#define PIN_PB23A_LCDC_LCDDAT12                    _L_(55)      /**< LCDC signal: LCDDAT12 on PB23 mux A*/
#define MUX_PB23A_LCDC_LCDDAT12                    _L_(0)       /**< LCDC signal line function value: LCDDAT12 */
#define PIO_PB23A_LCDC_LCDDAT12                    (_UL_(1) << 23)

#define PIN_PC18A_LCDC_LCDDAT12                    _L_(82)      /**< LCDC signal: LCDDAT12 on PC18 mux A*/
#define MUX_PC18A_LCDC_LCDDAT12                    _L_(0)       /**< LCDC signal line function value: LCDDAT12 */
#define PIO_PC18A_LCDC_LCDDAT12                    (_UL_(1) << 18)

#define PIN_PB24A_LCDC_LCDDAT13                    _L_(56)      /**< LCDC signal: LCDDAT13 on PB24 mux A*/
#define MUX_PB24A_LCDC_LCDDAT13                    _L_(0)       /**< LCDC signal line function value: LCDDAT13 */
#define PIO_PB24A_LCDC_LCDDAT13                    (_UL_(1) << 24)

#define PIN_PC19A_LCDC_LCDDAT13                    _L_(83)      /**< LCDC signal: LCDDAT13 on PC19 mux A*/
#define MUX_PC19A_LCDC_LCDDAT13                    _L_(0)       /**< LCDC signal line function value: LCDDAT13 */
#define PIO_PC19A_LCDC_LCDDAT13                    (_UL_(1) << 19)

#define PIN_PB25A_LCDC_LCDDAT14                    _L_(57)      /**< LCDC signal: LCDDAT14 on PB25 mux A*/
#define MUX_PB25A_LCDC_LCDDAT14                    _L_(0)       /**< LCDC signal line function value: LCDDAT14 */
#define PIO_PB25A_LCDC_LCDDAT14                    (_UL_(1) << 25)

#define PIN_PC20A_LCDC_LCDDAT14                    _L_(84)      /**< LCDC signal: LCDDAT14 on PC20 mux A*/
#define MUX_PC20A_LCDC_LCDDAT14                    _L_(0)       /**< LCDC signal line function value: LCDDAT14 */
#define PIO_PC20A_LCDC_LCDDAT14                    (_UL_(1) << 20)

#define PIN_PB26A_LCDC_LCDDAT15                    _L_(58)      /**< LCDC signal: LCDDAT15 on PB26 mux A*/
#define MUX_PB26A_LCDC_LCDDAT15                    _L_(0)       /**< LCDC signal line function value: LCDDAT15 */
#define PIO_PB26A_LCDC_LCDDAT15                    (_UL_(1) << 26)

#define PIN_PC21A_LCDC_LCDDAT15                    _L_(85)      /**< LCDC signal: LCDDAT15 on PC21 mux A*/
#define MUX_PC21A_LCDC_LCDDAT15                    _L_(0)       /**< LCDC signal line function value: LCDDAT15 */
#define PIO_PC21A_LCDC_LCDDAT15                    (_UL_(1) << 21)

#define PIN_PB27A_LCDC_LCDDAT16                    _L_(59)      /**< LCDC signal: LCDDAT16 on PB27 mux A*/
#define MUX_PB27A_LCDC_LCDDAT16                    _L_(0)       /**< LCDC signal line function value: LCDDAT16 */
#define PIO_PB27A_LCDC_LCDDAT16                    (_UL_(1) << 27)

#define PIN_PB28A_LCDC_LCDDAT17                    _L_(60)      /**< LCDC signal: LCDDAT17 on PB28 mux A*/
#define MUX_PB28A_LCDC_LCDDAT17                    _L_(0)       /**< LCDC signal line function value: LCDDAT17 */
#define PIO_PB28A_LCDC_LCDDAT17                    (_UL_(1) << 28)

#define PIN_PB29A_LCDC_LCDDAT18                    _L_(61)      /**< LCDC signal: LCDDAT18 on PB29 mux A*/
#define MUX_PB29A_LCDC_LCDDAT18                    _L_(0)       /**< LCDC signal line function value: LCDDAT18 */
#define PIO_PB29A_LCDC_LCDDAT18                    (_UL_(1) << 29)

#define PIN_PC22A_LCDC_LCDDAT18                    _L_(86)      /**< LCDC signal: LCDDAT18 on PC22 mux A*/
#define MUX_PC22A_LCDC_LCDDAT18                    _L_(0)       /**< LCDC signal line function value: LCDDAT18 */
#define PIO_PC22A_LCDC_LCDDAT18                    (_UL_(1) << 22)

#define PIN_PB30A_LCDC_LCDDAT19                    _L_(62)      /**< LCDC signal: LCDDAT19 on PB30 mux A*/
#define MUX_PB30A_LCDC_LCDDAT19                    _L_(0)       /**< LCDC signal line function value: LCDDAT19 */
#define PIO_PB30A_LCDC_LCDDAT19                    (_UL_(1) << 30)

#define PIN_PC23A_LCDC_LCDDAT19                    _L_(87)      /**< LCDC signal: LCDDAT19 on PC23 mux A*/
#define MUX_PC23A_LCDC_LCDDAT19                    _L_(0)       /**< LCDC signal line function value: LCDDAT19 */
#define PIO_PC23A_LCDC_LCDDAT19                    (_UL_(1) << 23)

#define PIN_PB31A_LCDC_LCDDAT20                    _L_(63)      /**< LCDC signal: LCDDAT20 on PB31 mux A*/
#define MUX_PB31A_LCDC_LCDDAT20                    _L_(0)       /**< LCDC signal line function value: LCDDAT20 */
#define PIO_PB31A_LCDC_LCDDAT20                    (_UL_(1) << 31)

#define PIN_PC24A_LCDC_LCDDAT20                    _L_(88)      /**< LCDC signal: LCDDAT20 on PC24 mux A*/
#define MUX_PC24A_LCDC_LCDDAT20                    _L_(0)       /**< LCDC signal line function value: LCDDAT20 */
#define PIO_PC24A_LCDC_LCDDAT20                    (_UL_(1) << 24)

#define PIN_PC0A_LCDC_LCDDAT21                     _L_(64)      /**< LCDC signal: LCDDAT21 on PC0 mux A*/
#define MUX_PC0A_LCDC_LCDDAT21                     _L_(0)       /**< LCDC signal line function value: LCDDAT21 */
#define PIO_PC0A_LCDC_LCDDAT21                     (_UL_(1) << 0)

#define PIN_PC25A_LCDC_LCDDAT21                    _L_(89)      /**< LCDC signal: LCDDAT21 on PC25 mux A*/
#define MUX_PC25A_LCDC_LCDDAT21                    _L_(0)       /**< LCDC signal line function value: LCDDAT21 */
#define PIO_PC25A_LCDC_LCDDAT21                    (_UL_(1) << 25)

#define PIN_PC1A_LCDC_LCDDAT22                     _L_(65)      /**< LCDC signal: LCDDAT22 on PC1 mux A*/
#define MUX_PC1A_LCDC_LCDDAT22                     _L_(0)       /**< LCDC signal line function value: LCDDAT22 */
#define PIO_PC1A_LCDC_LCDDAT22                     (_UL_(1) << 1)

#define PIN_PC26A_LCDC_LCDDAT22                    _L_(90)      /**< LCDC signal: LCDDAT22 on PC26 mux A*/
#define MUX_PC26A_LCDC_LCDDAT22                    _L_(0)       /**< LCDC signal line function value: LCDDAT22 */
#define PIO_PC26A_LCDC_LCDDAT22                    (_UL_(1) << 26)

#define PIN_PC2A_LCDC_LCDDAT23                     _L_(66)      /**< LCDC signal: LCDDAT23 on PC2 mux A*/
#define MUX_PC2A_LCDC_LCDDAT23                     _L_(0)       /**< LCDC signal line function value: LCDDAT23 */
#define PIO_PC2A_LCDC_LCDDAT23                     (_UL_(1) << 2)

#define PIN_PC27A_LCDC_LCDDAT23                    _L_(91)      /**< LCDC signal: LCDDAT23 on PC27 mux A*/
#define MUX_PC27A_LCDC_LCDDAT23                    _L_(0)       /**< LCDC signal line function value: LCDDAT23 */
#define PIO_PC27A_LCDC_LCDDAT23                    (_UL_(1) << 27)

#define PIN_PC8A_LCDC_LCDDEN                       _L_(72)      /**< LCDC signal: LCDDEN on PC8 mux A*/
#define MUX_PC8A_LCDC_LCDDEN                       _L_(0)       /**< LCDC signal line function value: LCDDEN */
#define PIO_PC8A_LCDC_LCDDEN                       (_UL_(1) << 8)

#define PIN_PD1A_LCDC_LCDDEN                       _L_(97)      /**< LCDC signal: LCDDEN on PD1 mux A*/
#define MUX_PD1A_LCDC_LCDDEN                       _L_(0)       /**< LCDC signal line function value: LCDDEN */
#define PIO_PD1A_LCDC_LCDDEN                       (_UL_(1) << 1)

#define PIN_PC4A_LCDC_LCDDISP                      _L_(68)      /**< LCDC signal: LCDDISP on PC4 mux A*/
#define MUX_PC4A_LCDC_LCDDISP                      _L_(0)       /**< LCDC signal line function value: LCDDISP */
#define PIO_PC4A_LCDC_LCDDISP                      (_UL_(1) << 4)

#define PIN_PC29A_LCDC_LCDDISP                     _L_(93)      /**< LCDC signal: LCDDISP on PC29 mux A*/
#define MUX_PC29A_LCDC_LCDDISP                     _L_(0)       /**< LCDC signal line function value: LCDDISP */
#define PIO_PC29A_LCDC_LCDDISP                     (_UL_(1) << 29)

#define PIN_PC6A_LCDC_LCDHSYNC                     _L_(70)      /**< LCDC signal: LCDHSYNC on PC6 mux A*/
#define MUX_PC6A_LCDC_LCDHSYNC                     _L_(0)       /**< LCDC signal line function value: LCDHSYNC */
#define PIO_PC6A_LCDC_LCDHSYNC                     (_UL_(1) << 6)

#define PIN_PC31A_LCDC_LCDHSYNC                    _L_(95)      /**< LCDC signal: LCDHSYNC on PC31 mux A*/
#define MUX_PC31A_LCDC_LCDHSYNC                    _L_(0)       /**< LCDC signal line function value: LCDHSYNC */
#define PIO_PC31A_LCDC_LCDHSYNC                    (_UL_(1) << 31)

#define PIN_PC7A_LCDC_LCDPCK                       _L_(71)      /**< LCDC signal: LCDPCK on PC7 mux A*/
#define MUX_PC7A_LCDC_LCDPCK                       _L_(0)       /**< LCDC signal line function value: LCDPCK */
#define PIO_PC7A_LCDC_LCDPCK                       (_UL_(1) << 7)

#define PIN_PD0A_LCDC_LCDPCK                       _L_(96)      /**< LCDC signal: LCDPCK on PD0 mux A*/
#define MUX_PD0A_LCDC_LCDPCK                       _L_(0)       /**< LCDC signal line function value: LCDPCK */
#define PIO_PD0A_LCDC_LCDPCK                       (_UL_(1) << 0)

#define PIN_PC3A_LCDC_LCDPWM                       _L_(67)      /**< LCDC signal: LCDPWM on PC3 mux A*/
#define MUX_PC3A_LCDC_LCDPWM                       _L_(0)       /**< LCDC signal line function value: LCDPWM */
#define PIO_PC3A_LCDC_LCDPWM                       (_UL_(1) << 3)

#define PIN_PC28A_LCDC_LCDPWM                      _L_(92)      /**< LCDC signal: LCDPWM on PC28 mux A*/
#define MUX_PC28A_LCDC_LCDPWM                      _L_(0)       /**< LCDC signal line function value: LCDPWM */
#define PIO_PC28A_LCDC_LCDPWM                      (_UL_(1) << 28)

#define PIN_PC5A_LCDC_LCDVSYNC                     _L_(69)      /**< LCDC signal: LCDVSYNC on PC5 mux A*/
#define MUX_PC5A_LCDC_LCDVSYNC                     _L_(0)       /**< LCDC signal line function value: LCDVSYNC */
#define PIO_PC5A_LCDC_LCDVSYNC                     (_UL_(1) << 5)

#define PIN_PC30A_LCDC_LCDVSYNC                    _L_(94)      /**< LCDC signal: LCDVSYNC on PC30 mux A*/
#define MUX_PC30A_LCDC_LCDVSYNC                    _L_(0)       /**< LCDC signal line function value: LCDVSYNC */
#define PIO_PC30A_LCDC_LCDVSYNC                    (_UL_(1) << 30)

/* ========== PIO definition for MCAN0 peripheral ========== */
#define PIN_PC2C_MCAN0_CANRX0                      _L_(66)      /**< MCAN0 signal: CANRX0 on PC2 mux C*/
#define MUX_PC2C_MCAN0_CANRX0                      _L_(2)       /**< MCAN0 signal line function value: CANRX0 */
#define PIO_PC2C_MCAN0_CANRX0                      (_UL_(1) << 2)

#define PIN_PC11E_MCAN0_CANRX0                     _L_(75)      /**< MCAN0 signal: CANRX0 on PC11 mux E*/
#define MUX_PC11E_MCAN0_CANRX0                     _L_(4)       /**< MCAN0 signal line function value: CANRX0 */
#define PIO_PC11E_MCAN0_CANRX0                     (_UL_(1) << 11)

#define PIN_PC1C_MCAN0_CANTX0                      _L_(65)      /**< MCAN0 signal: CANTX0 on PC1 mux C*/
#define MUX_PC1C_MCAN0_CANTX0                      _L_(2)       /**< MCAN0 signal line function value: CANTX0 */
#define PIO_PC1C_MCAN0_CANTX0                      (_UL_(1) << 1)

#define PIN_PC10E_MCAN0_CANTX0                     _L_(74)      /**< MCAN0 signal: CANTX0 on PC10 mux E*/
#define MUX_PC10E_MCAN0_CANTX0                     _L_(4)       /**< MCAN0 signal line function value: CANTX0 */
#define PIO_PC10E_MCAN0_CANTX0                     (_UL_(1) << 10)

/* ========== PIO definition for MCAN1 peripheral ========== */
#define PIN_PC27D_MCAN1_CANRX1                     _L_(91)      /**< MCAN1 signal: CANRX1 on PC27 mux D*/
#define MUX_PC27D_MCAN1_CANRX1                     _L_(3)       /**< MCAN1 signal line function value: CANRX1 */
#define PIO_PC27D_MCAN1_CANRX1                     (_UL_(1) << 27)

#define PIN_PC26D_MCAN1_CANTX1                     _L_(90)      /**< MCAN1 signal: CANTX1 on PC26 mux D*/
#define MUX_PC26D_MCAN1_CANTX1                     _L_(3)       /**< MCAN1 signal line function value: CANTX1 */
#define PIO_PC26D_MCAN1_CANTX1                     (_UL_(1) << 26)

/* ========== PIO definition for PDMIC peripheral ========== */
#define PIN_PB12D_PDMIC_PDMIC_CLK                  _L_(44)      /**< PDMIC signal: PDMIC_CLK on PB12 mux D*/
#define MUX_PB12D_PDMIC_PDMIC_CLK                  _L_(3)       /**< PDMIC signal line function value: PDMIC_CLK */
#define PIO_PB12D_PDMIC_PDMIC_CLK                  (_UL_(1) << 12)

#define PIN_PB27D_PDMIC_PDMIC_CLK                  _L_(59)      /**< PDMIC signal: PDMIC_CLK on PB27 mux D*/
#define MUX_PB27D_PDMIC_PDMIC_CLK                  _L_(3)       /**< PDMIC signal line function value: PDMIC_CLK */
#define PIO_PB27D_PDMIC_PDMIC_CLK                  (_UL_(1) << 27)

#define PIN_PB11D_PDMIC_PDMIC_DAT                  _L_(43)      /**< PDMIC signal: PDMIC_DAT on PB11 mux D*/
#define MUX_PB11D_PDMIC_PDMIC_DAT                  _L_(3)       /**< PDMIC signal line function value: PDMIC_DAT */
#define PIO_PB11D_PDMIC_PDMIC_DAT                  (_UL_(1) << 11)

#define PIN_PB26D_PDMIC_PDMIC_DAT                  _L_(58)      /**< PDMIC signal: PDMIC_DAT on PB26 mux D*/
#define MUX_PB26D_PDMIC_PDMIC_DAT                  _L_(3)       /**< PDMIC signal line function value: PDMIC_DAT */
#define PIO_PB26D_PDMIC_PDMIC_DAT                  (_UL_(1) << 26)

/* ========== PIO definition for PMC peripheral ========== */
#define PIN_PC8D_PMC_PCK0                          _L_(72)      /**< PMC signal: PCK0 on PC8 mux D*/
#define MUX_PC8D_PMC_PCK0                          _L_(3)       /**< PMC signal line function value: PCK0 */
#define PIO_PC8D_PMC_PCK0                          (_UL_(1) << 8)

#define PIN_PD19A_PMC_PCK0                         _L_(115)     /**< PMC signal: PCK0 on PD19 mux A*/
#define MUX_PD19A_PMC_PCK0                         _L_(0)       /**< PMC signal line function value: PCK0 */
#define PIO_PD19A_PMC_PCK0                         (_UL_(1) << 19)

#define PIN_PD31E_PMC_PCK0                         _L_(127)     /**< PMC signal: PCK0 on PD31 mux E*/
#define MUX_PD31E_PMC_PCK0                         _L_(4)       /**< PMC signal line function value: PCK0 */
#define PIO_PD31E_PMC_PCK0                         (_UL_(1) << 31)

#define PIN_PB13C_PMC_PCK1                         _L_(45)      /**< PMC signal: PCK1 on PB13 mux C*/
#define MUX_PB13C_PMC_PCK1                         _L_(2)       /**< PMC signal line function value: PCK1 */
#define PIO_PB13C_PMC_PCK1                         (_UL_(1) << 13)

#define PIN_PB20E_PMC_PCK1                         _L_(52)      /**< PMC signal: PCK1 on PB20 mux E*/
#define MUX_PB20E_PMC_PCK1                         _L_(4)       /**< PMC signal line function value: PCK1 */
#define PIO_PB20E_PMC_PCK1                         (_UL_(1) << 20)

#define PIN_PC27C_PMC_PCK1                         _L_(91)      /**< PMC signal: PCK1 on PC27 mux C*/
#define MUX_PC27C_PMC_PCK1                         _L_(2)       /**< PMC signal line function value: PCK1 */
#define PIO_PC27C_PMC_PCK1                         (_UL_(1) << 27)

#define PIN_PD6B_PMC_PCK1                          _L_(102)     /**< PMC signal: PCK1 on PD6 mux B*/
#define MUX_PD6B_PMC_PCK1                          _L_(1)       /**< PMC signal line function value: PCK1 */
#define PIO_PD6B_PMC_PCK1                          (_UL_(1) << 6)

#define PIN_PA21B_PMC_PCK2                         _L_(21)      /**< PMC signal: PCK2 on PA21 mux B*/
#define MUX_PA21B_PMC_PCK2                         _L_(1)       /**< PMC signal line function value: PCK2 */
#define PIO_PA21B_PMC_PCK2                         (_UL_(1) << 21)

#define PIN_PC28C_PMC_PCK2                         _L_(92)      /**< PMC signal: PCK2 on PC28 mux C*/
#define MUX_PC28C_PMC_PCK2                         _L_(2)       /**< PMC signal line function value: PCK2 */
#define PIO_PC28C_PMC_PCK2                         (_UL_(1) << 28)

#define PIN_PD11B_PMC_PCK2                         _L_(107)     /**< PMC signal: PCK2 on PD11 mux B*/
#define MUX_PD11B_PMC_PCK2                         _L_(1)       /**< PMC signal line function value: PCK2 */
#define PIO_PD11B_PMC_PCK2                         (_UL_(1) << 11)

/* ========== PIO definition for PTC peripheral ========== */
#define PIN_PD3X1_PTC_PTC_X0                       _L_(99)      /**< PTC signal: PTC_X0 on PD3 mux X1*/
#define PIO_PD3X1_PTC_PTC_X0                       (_UL_(1) << 3)

#define PIN_PD4X1_PTC_PTC_X1                       _L_(100)     /**< PTC signal: PTC_X1 on PD4 mux X1*/
#define PIO_PD4X1_PTC_PTC_X1                       (_UL_(1) << 4)

#define PIN_PD5X1_PTC_PTC_X2                       _L_(101)     /**< PTC signal: PTC_X2 on PD5 mux X1*/
#define PIO_PD5X1_PTC_PTC_X2                       (_UL_(1) << 5)

#define PIN_PD6X1_PTC_PTC_X3                       _L_(102)     /**< PTC signal: PTC_X3 on PD6 mux X1*/
#define PIO_PD6X1_PTC_PTC_X3                       (_UL_(1) << 6)

#define PIN_PD7X1_PTC_PTC_X4                       _L_(103)     /**< PTC signal: PTC_X4 on PD7 mux X1*/
#define PIO_PD7X1_PTC_PTC_X4                       (_UL_(1) << 7)

#define PIN_PD8X1_PTC_PTC_X5                       _L_(104)     /**< PTC signal: PTC_X5 on PD8 mux X1*/
#define PIO_PD8X1_PTC_PTC_X5                       (_UL_(1) << 8)

#define PIN_PD9X1_PTC_PTC_X6                       _L_(105)     /**< PTC signal: PTC_X6 on PD9 mux X1*/
#define PIO_PD9X1_PTC_PTC_X6                       (_UL_(1) << 9)

#define PIN_PD10X1_PTC_PTC_X7                      _L_(106)     /**< PTC signal: PTC_X7 on PD10 mux X1*/
#define PIO_PD10X1_PTC_PTC_X7                      (_UL_(1) << 10)

#define PIN_PD11X1_PTC_PTC_Y0                      _L_(107)     /**< PTC signal: PTC_Y0 on PD11 mux X1*/
#define PIO_PD11X1_PTC_PTC_Y0                      (_UL_(1) << 11)

#define PIN_PD12X1_PTC_PTC_Y1                      _L_(108)     /**< PTC signal: PTC_Y1 on PD12 mux X1*/
#define PIO_PD12X1_PTC_PTC_Y1                      (_UL_(1) << 12)

#define PIN_PD13X1_PTC_PTC_Y2                      _L_(109)     /**< PTC signal: PTC_Y2 on PD13 mux X1*/
#define PIO_PD13X1_PTC_PTC_Y2                      (_UL_(1) << 13)

#define PIN_PD14X1_PTC_PTC_Y3                      _L_(110)     /**< PTC signal: PTC_Y3 on PD14 mux X1*/
#define PIO_PD14X1_PTC_PTC_Y3                      (_UL_(1) << 14)

#define PIN_PD15X1_PTC_PTC_Y4                      _L_(111)     /**< PTC signal: PTC_Y4 on PD15 mux X1*/
#define PIO_PD15X1_PTC_PTC_Y4                      (_UL_(1) << 15)

#define PIN_PD16X1_PTC_PTC_Y5                      _L_(112)     /**< PTC signal: PTC_Y5 on PD16 mux X1*/
#define PIO_PD16X1_PTC_PTC_Y5                      (_UL_(1) << 16)

#define PIN_PD17X1_PTC_PTC_Y6                      _L_(113)     /**< PTC signal: PTC_Y6 on PD17 mux X1*/
#define PIO_PD17X1_PTC_PTC_Y6                      (_UL_(1) << 17)

#define PIN_PD18X1_PTC_PTC_Y7                      _L_(114)     /**< PTC signal: PTC_Y7 on PD18 mux X1*/
#define PIO_PD18X1_PTC_PTC_Y7                      (_UL_(1) << 18)

/* ========== PIO definition for PWM peripheral ========== */
#define PIN_PB3D_PWM_PWMEXTRG1                     _L_(35)      /**< PWM signal: PWMEXTRG1 on PB3 mux D*/
#define MUX_PB3D_PWM_PWMEXTRG1                     _L_(3)       /**< PWM signal line function value: PWMEXTRG1 */
#define PIO_PB3D_PWM_PWMEXTRG1                     (_UL_(1) << 3)

#define PIN_PB10C_PWM_PWMEXTRG2                    _L_(42)      /**< PWM signal: PWMEXTRG2 on PB10 mux C*/
#define MUX_PB10C_PWM_PWMEXTRG2                    _L_(2)       /**< PWM signal line function value: PWMEXTRG2 */
#define PIO_PB10C_PWM_PWMEXTRG2                    (_UL_(1) << 10)

#define PIN_PB2D_PWM_PWMFI0                        _L_(34)      /**< PWM signal: PWMFI0 on PB2 mux D*/
#define MUX_PB2D_PWM_PWMFI0                        _L_(3)       /**< PWM signal line function value: PWMFI0 */
#define PIO_PB2D_PWM_PWMFI0                        (_UL_(1) << 2)

#define PIN_PB9C_PWM_PWMFI1                        _L_(41)      /**< PWM signal: PWMFI1 on PB9 mux C*/
#define MUX_PB9C_PWM_PWMFI1                        _L_(2)       /**< PWM signal line function value: PWMFI1 */
#define PIO_PB9C_PWM_PWMFI1                        (_UL_(1) << 9)

#define PIN_PA30D_PWM_PWMH0                        _L_(30)      /**< PWM signal: PWMH0 on PA30 mux D*/
#define MUX_PA30D_PWM_PWMH0                        _L_(3)       /**< PWM signal line function value: PWMH0 */
#define PIO_PA30D_PWM_PWMH0                        (_UL_(1) << 30)

#define PIN_PB0D_PWM_PWMH1                         _L_(32)      /**< PWM signal: PWMH1 on PB0 mux D*/
#define MUX_PB0D_PWM_PWMH1                         _L_(3)       /**< PWM signal line function value: PWMH1 */
#define PIO_PB0D_PWM_PWMH1                         (_UL_(1) << 0)

#define PIN_PB5C_PWM_PWMH2                         _L_(37)      /**< PWM signal: PWMH2 on PB5 mux C*/
#define MUX_PB5C_PWM_PWMH2                         _L_(2)       /**< PWM signal line function value: PWMH2 */
#define PIO_PB5C_PWM_PWMH2                         (_UL_(1) << 5)

#define PIN_PB7C_PWM_PWMH3                         _L_(39)      /**< PWM signal: PWMH3 on PB7 mux C*/
#define MUX_PB7C_PWM_PWMH3                         _L_(2)       /**< PWM signal line function value: PWMH3 */
#define PIO_PB7C_PWM_PWMH3                         (_UL_(1) << 7)

#define PIN_PA31D_PWM_PWML0                        _L_(31)      /**< PWM signal: PWML0 on PA31 mux D*/
#define MUX_PA31D_PWM_PWML0                        _L_(3)       /**< PWM signal line function value: PWML0 */
#define PIO_PA31D_PWM_PWML0                        (_UL_(1) << 31)

#define PIN_PB1D_PWM_PWML1                         _L_(33)      /**< PWM signal: PWML1 on PB1 mux D*/
#define MUX_PB1D_PWM_PWML1                         _L_(3)       /**< PWM signal line function value: PWML1 */
#define PIO_PB1D_PWM_PWML1                         (_UL_(1) << 1)

#define PIN_PB6C_PWM_PWML2                         _L_(38)      /**< PWM signal: PWML2 on PB6 mux C*/
#define MUX_PB6C_PWM_PWML2                         _L_(2)       /**< PWM signal line function value: PWML2 */
#define PIO_PB6C_PWM_PWML2                         (_UL_(1) << 6)

#define PIN_PB8C_PWM_PWML3                         _L_(40)      /**< PWM signal: PWML3 on PB8 mux C*/
#define MUX_PB8C_PWM_PWML3                         _L_(2)       /**< PWM signal line function value: PWML3 */
#define PIO_PB8C_PWM_PWML3                         (_UL_(1) << 8)

/* ========== PIO definition for QSPI0 peripheral ========== */
#define PIN_PA1B_QSPI0_QSPI0_CS                    _L_(1)       /**< QSPI0 signal: QSPI0_CS on PA1 mux B*/
#define MUX_PA1B_QSPI0_QSPI0_CS                    _L_(1)       /**< QSPI0 signal line function value: QSPI0_CS */
#define PIO_PA1B_QSPI0_QSPI0_CS                    (_UL_(1) << 1)

#define PIN_PA15C_QSPI0_QSPI0_CS                   _L_(15)      /**< QSPI0 signal: QSPI0_CS on PA15 mux C*/
#define MUX_PA15C_QSPI0_QSPI0_CS                   _L_(2)       /**< QSPI0 signal line function value: QSPI0_CS */
#define PIO_PA15C_QSPI0_QSPI0_CS                   (_UL_(1) << 15)

#define PIN_PA23F_QSPI0_QSPI0_CS                   _L_(23)      /**< QSPI0 signal: QSPI0_CS on PA23 mux F*/
#define MUX_PA23F_QSPI0_QSPI0_CS                   _L_(5)       /**< QSPI0 signal line function value: QSPI0_CS */
#define PIO_PA23F_QSPI0_QSPI0_CS                   (_UL_(1) << 23)

#define PIN_PA2B_QSPI0_QSPI0_IO0                   _L_(2)       /**< QSPI0 signal: QSPI0_IO0 on PA2 mux B*/
#define MUX_PA2B_QSPI0_QSPI0_IO0                   _L_(1)       /**< QSPI0 signal line function value: QSPI0_IO0 */
#define PIO_PA2B_QSPI0_QSPI0_IO0                   (_UL_(1) << 2)

#define PIN_PA16C_QSPI0_QSPI0_IO0                  _L_(16)      /**< QSPI0 signal: QSPI0_IO0 on PA16 mux C*/
#define MUX_PA16C_QSPI0_QSPI0_IO0                  _L_(2)       /**< QSPI0 signal line function value: QSPI0_IO0 */
#define PIO_PA16C_QSPI0_QSPI0_IO0                  (_UL_(1) << 16)

#define PIN_PA24F_QSPI0_QSPI0_IO0                  _L_(24)      /**< QSPI0 signal: QSPI0_IO0 on PA24 mux F*/
#define MUX_PA24F_QSPI0_QSPI0_IO0                  _L_(5)       /**< QSPI0 signal line function value: QSPI0_IO0 */
#define PIO_PA24F_QSPI0_QSPI0_IO0                  (_UL_(1) << 24)

#define PIN_PA3B_QSPI0_QSPI0_IO1                   _L_(3)       /**< QSPI0 signal: QSPI0_IO1 on PA3 mux B*/
#define MUX_PA3B_QSPI0_QSPI0_IO1                   _L_(1)       /**< QSPI0 signal line function value: QSPI0_IO1 */
#define PIO_PA3B_QSPI0_QSPI0_IO1                   (_UL_(1) << 3)

#define PIN_PA17C_QSPI0_QSPI0_IO1                  _L_(17)      /**< QSPI0 signal: QSPI0_IO1 on PA17 mux C*/
#define MUX_PA17C_QSPI0_QSPI0_IO1                  _L_(2)       /**< QSPI0 signal line function value: QSPI0_IO1 */
#define PIO_PA17C_QSPI0_QSPI0_IO1                  (_UL_(1) << 17)

#define PIN_PA25F_QSPI0_QSPI0_IO1                  _L_(25)      /**< QSPI0 signal: QSPI0_IO1 on PA25 mux F*/
#define MUX_PA25F_QSPI0_QSPI0_IO1                  _L_(5)       /**< QSPI0 signal line function value: QSPI0_IO1 */
#define PIO_PA25F_QSPI0_QSPI0_IO1                  (_UL_(1) << 25)

#define PIN_PA4B_QSPI0_QSPI0_IO2                   _L_(4)       /**< QSPI0 signal: QSPI0_IO2 on PA4 mux B*/
#define MUX_PA4B_QSPI0_QSPI0_IO2                   _L_(1)       /**< QSPI0 signal line function value: QSPI0_IO2 */
#define PIO_PA4B_QSPI0_QSPI0_IO2                   (_UL_(1) << 4)

#define PIN_PA18C_QSPI0_QSPI0_IO2                  _L_(18)      /**< QSPI0 signal: QSPI0_IO2 on PA18 mux C*/
#define MUX_PA18C_QSPI0_QSPI0_IO2                  _L_(2)       /**< QSPI0 signal line function value: QSPI0_IO2 */
#define PIO_PA18C_QSPI0_QSPI0_IO2                  (_UL_(1) << 18)

#define PIN_PA26F_QSPI0_QSPI0_IO2                  _L_(26)      /**< QSPI0 signal: QSPI0_IO2 on PA26 mux F*/
#define MUX_PA26F_QSPI0_QSPI0_IO2                  _L_(5)       /**< QSPI0 signal line function value: QSPI0_IO2 */
#define PIO_PA26F_QSPI0_QSPI0_IO2                  (_UL_(1) << 26)

#define PIN_PA5B_QSPI0_QSPI0_IO3                   _L_(5)       /**< QSPI0 signal: QSPI0_IO3 on PA5 mux B*/
#define MUX_PA5B_QSPI0_QSPI0_IO3                   _L_(1)       /**< QSPI0 signal line function value: QSPI0_IO3 */
#define PIO_PA5B_QSPI0_QSPI0_IO3                   (_UL_(1) << 5)

#define PIN_PA19C_QSPI0_QSPI0_IO3                  _L_(19)      /**< QSPI0 signal: QSPI0_IO3 on PA19 mux C*/
#define MUX_PA19C_QSPI0_QSPI0_IO3                  _L_(2)       /**< QSPI0 signal line function value: QSPI0_IO3 */
#define PIO_PA19C_QSPI0_QSPI0_IO3                  (_UL_(1) << 19)

#define PIN_PA27F_QSPI0_QSPI0_IO3                  _L_(27)      /**< QSPI0 signal: QSPI0_IO3 on PA27 mux F*/
#define MUX_PA27F_QSPI0_QSPI0_IO3                  _L_(5)       /**< QSPI0 signal line function value: QSPI0_IO3 */
#define PIO_PA27F_QSPI0_QSPI0_IO3                  (_UL_(1) << 27)

#define PIN_PA0B_QSPI0_QSPI0_SCK                   _L_(0)       /**< QSPI0 signal: QSPI0_SCK on PA0 mux B*/
#define MUX_PA0B_QSPI0_QSPI0_SCK                   _L_(1)       /**< QSPI0 signal line function value: QSPI0_SCK */
#define PIO_PA0B_QSPI0_QSPI0_SCK                   (_UL_(1) << 0)

#define PIN_PA14C_QSPI0_QSPI0_SCK                  _L_(14)      /**< QSPI0 signal: QSPI0_SCK on PA14 mux C*/
#define MUX_PA14C_QSPI0_QSPI0_SCK                  _L_(2)       /**< QSPI0 signal line function value: QSPI0_SCK */
#define PIO_PA14C_QSPI0_QSPI0_SCK                  (_UL_(1) << 14)

#define PIN_PA22F_QSPI0_QSPI0_SCK                  _L_(22)      /**< QSPI0 signal: QSPI0_SCK on PA22 mux F*/
#define MUX_PA22F_QSPI0_QSPI0_SCK                  _L_(5)       /**< QSPI0 signal line function value: QSPI0_SCK */
#define PIO_PA22F_QSPI0_QSPI0_SCK                  (_UL_(1) << 22)

/* ========== PIO definition for QSPI1 peripheral ========== */
#define PIN_PA11B_QSPI1_QSPI1_CS                   _L_(11)      /**< QSPI1 signal: QSPI1_CS on PA11 mux B*/
#define MUX_PA11B_QSPI1_QSPI1_CS                   _L_(1)       /**< QSPI1 signal line function value: QSPI1_CS */
#define PIO_PA11B_QSPI1_QSPI1_CS                   (_UL_(1) << 11)

#define PIN_PB6D_QSPI1_QSPI1_CS                    _L_(38)      /**< QSPI1 signal: QSPI1_CS on PB6 mux D*/
#define MUX_PB6D_QSPI1_QSPI1_CS                    _L_(3)       /**< QSPI1 signal line function value: QSPI1_CS */
#define PIO_PB6D_QSPI1_QSPI1_CS                    (_UL_(1) << 6)

#define PIN_PB15E_QSPI1_QSPI1_CS                   _L_(47)      /**< QSPI1 signal: QSPI1_CS on PB15 mux E*/
#define MUX_PB15E_QSPI1_QSPI1_CS                   _L_(4)       /**< QSPI1 signal line function value: QSPI1_CS */
#define PIO_PB15E_QSPI1_QSPI1_CS                   (_UL_(1) << 15)

#define PIN_PA7B_QSPI1_QSPI1_IO0                   _L_(7)       /**< QSPI1 signal: QSPI1_IO0 on PA7 mux B*/
#define MUX_PA7B_QSPI1_QSPI1_IO0                   _L_(1)       /**< QSPI1 signal line function value: QSPI1_IO0 */
#define PIO_PA7B_QSPI1_QSPI1_IO0                   (_UL_(1) << 7)

#define PIN_PB7D_QSPI1_QSPI1_IO0                   _L_(39)      /**< QSPI1 signal: QSPI1_IO0 on PB7 mux D*/
#define MUX_PB7D_QSPI1_QSPI1_IO0                   _L_(3)       /**< QSPI1 signal line function value: QSPI1_IO0 */
#define PIO_PB7D_QSPI1_QSPI1_IO0                   (_UL_(1) << 7)

#define PIN_PB16E_QSPI1_QSPI1_IO0                  _L_(48)      /**< QSPI1 signal: QSPI1_IO0 on PB16 mux E*/
#define MUX_PB16E_QSPI1_QSPI1_IO0                  _L_(4)       /**< QSPI1 signal line function value: QSPI1_IO0 */
#define PIO_PB16E_QSPI1_QSPI1_IO0                  (_UL_(1) << 16)

#define PIN_PA8B_QSPI1_QSPI1_IO1                   _L_(8)       /**< QSPI1 signal: QSPI1_IO1 on PA8 mux B*/
#define MUX_PA8B_QSPI1_QSPI1_IO1                   _L_(1)       /**< QSPI1 signal line function value: QSPI1_IO1 */
#define PIO_PA8B_QSPI1_QSPI1_IO1                   (_UL_(1) << 8)

#define PIN_PB8D_QSPI1_QSPI1_IO1                   _L_(40)      /**< QSPI1 signal: QSPI1_IO1 on PB8 mux D*/
#define MUX_PB8D_QSPI1_QSPI1_IO1                   _L_(3)       /**< QSPI1 signal line function value: QSPI1_IO1 */
#define PIO_PB8D_QSPI1_QSPI1_IO1                   (_UL_(1) << 8)

#define PIN_PB17E_QSPI1_QSPI1_IO1                  _L_(49)      /**< QSPI1 signal: QSPI1_IO1 on PB17 mux E*/
#define MUX_PB17E_QSPI1_QSPI1_IO1                  _L_(4)       /**< QSPI1 signal line function value: QSPI1_IO1 */
#define PIO_PB17E_QSPI1_QSPI1_IO1                  (_UL_(1) << 17)

#define PIN_PA9B_QSPI1_QSPI1_IO2                   _L_(9)       /**< QSPI1 signal: QSPI1_IO2 on PA9 mux B*/
#define MUX_PA9B_QSPI1_QSPI1_IO2                   _L_(1)       /**< QSPI1 signal line function value: QSPI1_IO2 */
#define PIO_PA9B_QSPI1_QSPI1_IO2                   (_UL_(1) << 9)

#define PIN_PB9D_QSPI1_QSPI1_IO2                   _L_(41)      /**< QSPI1 signal: QSPI1_IO2 on PB9 mux D*/
#define MUX_PB9D_QSPI1_QSPI1_IO2                   _L_(3)       /**< QSPI1 signal line function value: QSPI1_IO2 */
#define PIO_PB9D_QSPI1_QSPI1_IO2                   (_UL_(1) << 9)

#define PIN_PB18E_QSPI1_QSPI1_IO2                  _L_(50)      /**< QSPI1 signal: QSPI1_IO2 on PB18 mux E*/
#define MUX_PB18E_QSPI1_QSPI1_IO2                  _L_(4)       /**< QSPI1 signal line function value: QSPI1_IO2 */
#define PIO_PB18E_QSPI1_QSPI1_IO2                  (_UL_(1) << 18)

#define PIN_PA10B_QSPI1_QSPI1_IO3                  _L_(10)      /**< QSPI1 signal: QSPI1_IO3 on PA10 mux B*/
#define MUX_PA10B_QSPI1_QSPI1_IO3                  _L_(1)       /**< QSPI1 signal line function value: QSPI1_IO3 */
#define PIO_PA10B_QSPI1_QSPI1_IO3                  (_UL_(1) << 10)

#define PIN_PB10D_QSPI1_QSPI1_IO3                  _L_(42)      /**< QSPI1 signal: QSPI1_IO3 on PB10 mux D*/
#define MUX_PB10D_QSPI1_QSPI1_IO3                  _L_(3)       /**< QSPI1 signal line function value: QSPI1_IO3 */
#define PIO_PB10D_QSPI1_QSPI1_IO3                  (_UL_(1) << 10)

#define PIN_PB19E_QSPI1_QSPI1_IO3                  _L_(51)      /**< QSPI1 signal: QSPI1_IO3 on PB19 mux E*/
#define MUX_PB19E_QSPI1_QSPI1_IO3                  _L_(4)       /**< QSPI1 signal line function value: QSPI1_IO3 */
#define PIO_PB19E_QSPI1_QSPI1_IO3                  (_UL_(1) << 19)

#define PIN_PA6B_QSPI1_QSPI1_SCK                   _L_(6)       /**< QSPI1 signal: QSPI1_SCK on PA6 mux B*/
#define MUX_PA6B_QSPI1_QSPI1_SCK                   _L_(1)       /**< QSPI1 signal line function value: QSPI1_SCK */
#define PIO_PA6B_QSPI1_QSPI1_SCK                   (_UL_(1) << 6)

#define PIN_PB5D_QSPI1_QSPI1_SCK                   _L_(37)      /**< QSPI1 signal: QSPI1_SCK on PB5 mux D*/
#define MUX_PB5D_QSPI1_QSPI1_SCK                   _L_(3)       /**< QSPI1 signal line function value: QSPI1_SCK */
#define PIO_PB5D_QSPI1_QSPI1_SCK                   (_UL_(1) << 5)

#define PIN_PB14E_QSPI1_QSPI1_SCK                  _L_(46)      /**< QSPI1 signal: QSPI1_SCK on PB14 mux E*/
#define MUX_PB14E_QSPI1_QSPI1_SCK                  _L_(4)       /**< QSPI1 signal line function value: QSPI1_SCK */
#define PIO_PB14E_QSPI1_QSPI1_SCK                  (_UL_(1) << 14)

/* ========== PIO definition for SDMMC0 peripheral ========== */
#define PIN_PA13A_SDMMC0_SDMMC0_CD                 _L_(13)      /**< SDMMC0 signal: SDMMC0_CD on PA13 mux A*/
#define MUX_PA13A_SDMMC0_SDMMC0_CD                 _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_CD */
#define PIO_PA13A_SDMMC0_SDMMC0_CD                 (_UL_(1) << 13)

#define PIN_PA0A_SDMMC0_SDMMC0_CK                  _L_(0)       /**< SDMMC0 signal: SDMMC0_CK on PA0 mux A*/
#define MUX_PA0A_SDMMC0_SDMMC0_CK                  _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_CK */
#define PIO_PA0A_SDMMC0_SDMMC0_CK                  (_UL_(1) << 0)

#define PIN_PA1A_SDMMC0_SDMMC0_CMD                 _L_(1)       /**< SDMMC0 signal: SDMMC0_CMD on PA1 mux A*/
#define MUX_PA1A_SDMMC0_SDMMC0_CMD                 _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_CMD */
#define PIO_PA1A_SDMMC0_SDMMC0_CMD                 (_UL_(1) << 1)

#define PIN_PA2A_SDMMC0_SDMMC0_DAT0                _L_(2)       /**< SDMMC0 signal: SDMMC0_DAT0 on PA2 mux A*/
#define MUX_PA2A_SDMMC0_SDMMC0_DAT0                _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT0 */
#define PIO_PA2A_SDMMC0_SDMMC0_DAT0                (_UL_(1) << 2)

#define PIN_PA3A_SDMMC0_SDMMC0_DAT1                _L_(3)       /**< SDMMC0 signal: SDMMC0_DAT1 on PA3 mux A*/
#define MUX_PA3A_SDMMC0_SDMMC0_DAT1                _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT1 */
#define PIO_PA3A_SDMMC0_SDMMC0_DAT1                (_UL_(1) << 3)

#define PIN_PA4A_SDMMC0_SDMMC0_DAT2                _L_(4)       /**< SDMMC0 signal: SDMMC0_DAT2 on PA4 mux A*/
#define MUX_PA4A_SDMMC0_SDMMC0_DAT2                _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT2 */
#define PIO_PA4A_SDMMC0_SDMMC0_DAT2                (_UL_(1) << 4)

#define PIN_PA5A_SDMMC0_SDMMC0_DAT3                _L_(5)       /**< SDMMC0 signal: SDMMC0_DAT3 on PA5 mux A*/
#define MUX_PA5A_SDMMC0_SDMMC0_DAT3                _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT3 */
#define PIO_PA5A_SDMMC0_SDMMC0_DAT3                (_UL_(1) << 5)

#define PIN_PA6A_SDMMC0_SDMMC0_DAT4                _L_(6)       /**< SDMMC0 signal: SDMMC0_DAT4 on PA6 mux A*/
#define MUX_PA6A_SDMMC0_SDMMC0_DAT4                _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT4 */
#define PIO_PA6A_SDMMC0_SDMMC0_DAT4                (_UL_(1) << 6)

#define PIN_PA7A_SDMMC0_SDMMC0_DAT5                _L_(7)       /**< SDMMC0 signal: SDMMC0_DAT5 on PA7 mux A*/
#define MUX_PA7A_SDMMC0_SDMMC0_DAT5                _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT5 */
#define PIO_PA7A_SDMMC0_SDMMC0_DAT5                (_UL_(1) << 7)

#define PIN_PA8A_SDMMC0_SDMMC0_DAT6                _L_(8)       /**< SDMMC0 signal: SDMMC0_DAT6 on PA8 mux A*/
#define MUX_PA8A_SDMMC0_SDMMC0_DAT6                _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT6 */
#define PIO_PA8A_SDMMC0_SDMMC0_DAT6                (_UL_(1) << 8)

#define PIN_PA9A_SDMMC0_SDMMC0_DAT7                _L_(9)       /**< SDMMC0 signal: SDMMC0_DAT7 on PA9 mux A*/
#define MUX_PA9A_SDMMC0_SDMMC0_DAT7                _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT7 */
#define PIO_PA9A_SDMMC0_SDMMC0_DAT7                (_UL_(1) << 9)

#define PIN_PA10A_SDMMC0_SDMMC0_RSTN               _L_(10)      /**< SDMMC0 signal: SDMMC0_RSTN on PA10 mux A*/
#define MUX_PA10A_SDMMC0_SDMMC0_RSTN               _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_RSTN */
#define PIO_PA10A_SDMMC0_SDMMC0_RSTN               (_UL_(1) << 10)

#define PIN_PA12A_SDMMC0_SDMMC0_WP                 _L_(12)      /**< SDMMC0 signal: SDMMC0_WP on PA12 mux A*/
#define MUX_PA12A_SDMMC0_SDMMC0_WP                 _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_WP */
#define PIO_PA12A_SDMMC0_SDMMC0_WP                 (_UL_(1) << 12)

#define PIN_PA11A_SDMMC0_SDMMC0_1V8SEL             _L_(11)      /**< SDMMC0 signal: SDMMC0_1V8SEL on PA11 mux A*/
#define MUX_PA11A_SDMMC0_SDMMC0_1V8SEL             _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_1V8SEL */
#define PIO_PA11A_SDMMC0_SDMMC0_1V8SEL             (_UL_(1) << 11)

/* ========== PIO definition for SDMMC1 peripheral ========== */
#define PIN_PA30E_SDMMC1_SDMMC1_CD                 _L_(30)      /**< SDMMC1 signal: SDMMC1_CD on PA30 mux E*/
#define MUX_PA30E_SDMMC1_SDMMC1_CD                 _L_(4)       /**< SDMMC1 signal line function value: SDMMC1_CD */
#define PIO_PA30E_SDMMC1_SDMMC1_CD                 (_UL_(1) << 30)

#define PIN_PA22E_SDMMC1_SDMMC1_CK                 _L_(22)      /**< SDMMC1 signal: SDMMC1_CK on PA22 mux E*/
#define MUX_PA22E_SDMMC1_SDMMC1_CK                 _L_(4)       /**< SDMMC1 signal line function value: SDMMC1_CK */
#define PIO_PA22E_SDMMC1_SDMMC1_CK                 (_UL_(1) << 22)

#define PIN_PA28E_SDMMC1_SDMMC1_CMD                _L_(28)      /**< SDMMC1 signal: SDMMC1_CMD on PA28 mux E*/
#define MUX_PA28E_SDMMC1_SDMMC1_CMD                _L_(4)       /**< SDMMC1 signal line function value: SDMMC1_CMD */
#define PIO_PA28E_SDMMC1_SDMMC1_CMD                (_UL_(1) << 28)

#define PIN_PA18E_SDMMC1_SDMMC1_DAT0               _L_(18)      /**< SDMMC1 signal: SDMMC1_DAT0 on PA18 mux E*/
#define MUX_PA18E_SDMMC1_SDMMC1_DAT0               _L_(4)       /**< SDMMC1 signal line function value: SDMMC1_DAT0 */
#define PIO_PA18E_SDMMC1_SDMMC1_DAT0               (_UL_(1) << 18)

#define PIN_PA19E_SDMMC1_SDMMC1_DAT1               _L_(19)      /**< SDMMC1 signal: SDMMC1_DAT1 on PA19 mux E*/
#define MUX_PA19E_SDMMC1_SDMMC1_DAT1               _L_(4)       /**< SDMMC1 signal line function value: SDMMC1_DAT1 */
#define PIO_PA19E_SDMMC1_SDMMC1_DAT1               (_UL_(1) << 19)

#define PIN_PA20E_SDMMC1_SDMMC1_DAT2               _L_(20)      /**< SDMMC1 signal: SDMMC1_DAT2 on PA20 mux E*/
#define MUX_PA20E_SDMMC1_SDMMC1_DAT2               _L_(4)       /**< SDMMC1 signal line function value: SDMMC1_DAT2 */
#define PIO_PA20E_SDMMC1_SDMMC1_DAT2               (_UL_(1) << 20)

#define PIN_PA21E_SDMMC1_SDMMC1_DAT3               _L_(21)      /**< SDMMC1 signal: SDMMC1_DAT3 on PA21 mux E*/
#define MUX_PA21E_SDMMC1_SDMMC1_DAT3               _L_(4)       /**< SDMMC1 signal line function value: SDMMC1_DAT3 */
#define PIO_PA21E_SDMMC1_SDMMC1_DAT3               (_UL_(1) << 21)

#define PIN_PA27E_SDMMC1_SDMMC1_RSTN               _L_(27)      /**< SDMMC1 signal: SDMMC1_RSTN on PA27 mux E*/
#define MUX_PA27E_SDMMC1_SDMMC1_RSTN               _L_(4)       /**< SDMMC1 signal line function value: SDMMC1_RSTN */
#define PIO_PA27E_SDMMC1_SDMMC1_RSTN               (_UL_(1) << 27)

#define PIN_PA29E_SDMMC1_SDMMC1_WP                 _L_(29)      /**< SDMMC1 signal: SDMMC1_WP on PA29 mux E*/
#define MUX_PA29E_SDMMC1_SDMMC1_WP                 _L_(4)       /**< SDMMC1 signal line function value: SDMMC1_WP */
#define PIO_PA29E_SDMMC1_SDMMC1_WP                 (_UL_(1) << 29)

/* ========== PIO definition for SMC peripheral ========== */
#define PIN_PC5B_SMC_NCS0                          _L_(69)      /**< SMC signal: NCS0 on PC5 mux B*/
#define MUX_PC5B_SMC_NCS0                          _L_(1)       /**< SMC signal line function value: NCS0 */
#define PIO_PC5B_SMC_NCS0                          (_UL_(1) << 5)

#define PIN_PD4F_SMC_NCS0                          _L_(100)     /**< SMC signal: NCS0 on PD4 mux F*/
#define MUX_PD4F_SMC_NCS0                          _L_(5)       /**< SMC signal line function value: NCS0 */
#define PIO_PD4F_SMC_NCS0                          (_UL_(1) << 4)

#define PIN_PD5F_SMC_NCS1                          _L_(101)     /**< SMC signal: NCS1 on PD5 mux F*/
#define MUX_PD5F_SMC_NCS1                          _L_(5)       /**< SMC signal line function value: NCS1 */
#define PIO_PD5F_SMC_NCS1                          (_UL_(1) << 5)

#define PIN_PC7B_SMC_NCS2                          _L_(71)      /**< SMC signal: NCS2 on PC7 mux B*/
#define MUX_PC7B_SMC_NCS2                          _L_(1)       /**< SMC signal line function value: NCS2 */
#define PIO_PC7B_SMC_NCS2                          (_UL_(1) << 7)

#define PIN_PD6F_SMC_NCS2                          _L_(102)     /**< SMC signal: NCS2 on PD6 mux F*/
#define MUX_PD6F_SMC_NCS2                          _L_(5)       /**< SMC signal line function value: NCS2 */
#define PIO_PD6F_SMC_NCS2                          (_UL_(1) << 6)

#define PIN_PA9F_SMC_NCS3                          _L_(9)       /**< SMC signal: NCS3 on PA9 mux F*/
#define MUX_PA9F_SMC_NCS3                          _L_(5)       /**< SMC signal line function value: NCS3 */
#define PIO_PA9F_SMC_NCS3                          (_UL_(1) << 9)

#define PIN_PA31B_SMC_NCS3                         _L_(31)      /**< SMC signal: NCS3 on PA31 mux B*/
#define MUX_PA31B_SMC_NCS3                         _L_(1)       /**< SMC signal line function value: NCS3 */
#define PIO_PA31B_SMC_NCS3                         (_UL_(1) << 31)

#define PIN_PA12F_SMC_NANDOE                       _L_(12)      /**< SMC signal: NANDOE on PA12 mux F*/
#define MUX_PA12F_SMC_NANDOE                       _L_(5)       /**< SMC signal line function value: NANDOE */
#define PIO_PA12F_SMC_NANDOE                       (_UL_(1) << 12)

#define PIN_PB2B_SMC_NANDOE                        _L_(34)      /**< SMC signal: NANDOE on PB2 mux B*/
#define MUX_PB2B_SMC_NANDOE                        _L_(1)       /**< SMC signal line function value: NANDOE */
#define PIO_PB2B_SMC_NANDOE                        (_UL_(1) << 2)

#define PIN_PA8F_SMC_NANDNWE                       _L_(8)       /**< SMC signal: NANDNWE on PA8 mux F*/
#define MUX_PA8F_SMC_NANDNWE                       _L_(5)       /**< SMC signal line function value: NANDNWE */
#define PIO_PA8F_SMC_NANDNWE                       (_UL_(1) << 8)

#define PIN_PA30B_SMC_NANDNWE                      _L_(30)      /**< SMC signal: NANDNWE on PA30 mux B*/
#define MUX_PA30B_SMC_NANDNWE                      _L_(1)       /**< SMC signal line function value: NANDNWE */
#define PIO_PA30B_SMC_NANDNWE                      (_UL_(1) << 30)

#define PIN_PB11B_SMC_A0                           _L_(43)      /**< SMC signal: A0 on PB11 mux B*/
#define MUX_PB11B_SMC_A0                           _L_(1)       /**< SMC signal line function value: A0 */
#define PIO_PB11B_SMC_A0                           (_UL_(1) << 11)

#define PIN_PC11F_SMC_A0                           _L_(75)      /**< SMC signal: A0 on PC11 mux F*/
#define MUX_PC11F_SMC_A0                           _L_(5)       /**< SMC signal line function value: A0 */
#define PIO_PC11F_SMC_A0                           (_UL_(1) << 11)

#define PIN_PC4B_SMC_NWR1                          _L_(68)      /**< SMC signal: NWR1 on PC4 mux B*/
#define MUX_PC4B_SMC_NWR1                          _L_(1)       /**< SMC signal line function value: NWR1 */
#define PIO_PC4B_SMC_NWR1                          (_UL_(1) << 4)

#define PIN_PD7F_SMC_NWR1                          _L_(103)     /**< SMC signal: NWR1 on PD7 mux F*/
#define MUX_PD7F_SMC_NWR1                          _L_(5)       /**< SMC signal line function value: NWR1 */
#define PIO_PD7F_SMC_NWR1                          (_UL_(1) << 7)

#define PIN_PB12B_SMC_A1                           _L_(44)      /**< SMC signal: A1 on PB12 mux B*/
#define MUX_PB12B_SMC_A1                           _L_(1)       /**< SMC signal line function value: A1 */
#define PIO_PB12B_SMC_A1                           (_UL_(1) << 12)

#define PIN_PB13B_SMC_A2                           _L_(45)      /**< SMC signal: A2 on PB13 mux B*/
#define MUX_PB13B_SMC_A2                           _L_(1)       /**< SMC signal line function value: A2 */
#define PIO_PB13B_SMC_A2                           (_UL_(1) << 13)

#define PIN_PB14B_SMC_A3                           _L_(46)      /**< SMC signal: A3 on PB14 mux B*/
#define MUX_PB14B_SMC_A3                           _L_(1)       /**< SMC signal line function value: A3 */
#define PIO_PB14B_SMC_A3                           (_UL_(1) << 14)

#define PIN_PB15B_SMC_A4                           _L_(47)      /**< SMC signal: A4 on PB15 mux B*/
#define MUX_PB15B_SMC_A4                           _L_(1)       /**< SMC signal line function value: A4 */
#define PIO_PB15B_SMC_A4                           (_UL_(1) << 15)

#define PIN_PB16B_SMC_A5                           _L_(48)      /**< SMC signal: A5 on PB16 mux B*/
#define MUX_PB16B_SMC_A5                           _L_(1)       /**< SMC signal line function value: A5 */
#define PIO_PB16B_SMC_A5                           (_UL_(1) << 16)

#define PIN_PB17B_SMC_A6                           _L_(49)      /**< SMC signal: A6 on PB17 mux B*/
#define MUX_PB17B_SMC_A6                           _L_(1)       /**< SMC signal line function value: A6 */
#define PIO_PB17B_SMC_A6                           (_UL_(1) << 17)

#define PIN_PB18B_SMC_A7                           _L_(50)      /**< SMC signal: A7 on PB18 mux B*/
#define MUX_PB18B_SMC_A7                           _L_(1)       /**< SMC signal line function value: A7 */
#define PIO_PB18B_SMC_A7                           (_UL_(1) << 18)

#define PIN_PB19B_SMC_A8                           _L_(51)      /**< SMC signal: A8 on PB19 mux B*/
#define MUX_PB19B_SMC_A8                           _L_(1)       /**< SMC signal line function value: A8 */
#define PIO_PB19B_SMC_A8                           (_UL_(1) << 19)

#define PIN_PB20B_SMC_A9                           _L_(52)      /**< SMC signal: A9 on PB20 mux B*/
#define MUX_PB20B_SMC_A9                           _L_(1)       /**< SMC signal line function value: A9 */
#define PIO_PB20B_SMC_A9                           (_UL_(1) << 20)

#define PIN_PB21B_SMC_A10                          _L_(53)      /**< SMC signal: A10 on PB21 mux B*/
#define MUX_PB21B_SMC_A10                          _L_(1)       /**< SMC signal line function value: A10 */
#define PIO_PB21B_SMC_A10                          (_UL_(1) << 21)

#define PIN_PB22B_SMC_A11                          _L_(54)      /**< SMC signal: A11 on PB22 mux B*/
#define MUX_PB22B_SMC_A11                          _L_(1)       /**< SMC signal line function value: A11 */
#define PIO_PB22B_SMC_A11                          (_UL_(1) << 22)

#define PIN_PB23B_SMC_A12                          _L_(55)      /**< SMC signal: A12 on PB23 mux B*/
#define MUX_PB23B_SMC_A12                          _L_(1)       /**< SMC signal line function value: A12 */
#define PIO_PB23B_SMC_A12                          (_UL_(1) << 23)

#define PIN_PB24B_SMC_A13                          _L_(56)      /**< SMC signal: A13 on PB24 mux B*/
#define MUX_PB24B_SMC_A13                          _L_(1)       /**< SMC signal line function value: A13 */
#define PIO_PB24B_SMC_A13                          (_UL_(1) << 24)

#define PIN_PB25B_SMC_A14                          _L_(57)      /**< SMC signal: A14 on PB25 mux B*/
#define MUX_PB25B_SMC_A14                          _L_(1)       /**< SMC signal line function value: A14 */
#define PIO_PB25B_SMC_A14                          (_UL_(1) << 25)

#define PIN_PB26B_SMC_A15                          _L_(58)      /**< SMC signal: A15 on PB26 mux B*/
#define MUX_PB26B_SMC_A15                          _L_(1)       /**< SMC signal line function value: A15 */
#define PIO_PB26B_SMC_A15                          (_UL_(1) << 26)

#define PIN_PB27B_SMC_A16                          _L_(59)      /**< SMC signal: A16 on PB27 mux B*/
#define MUX_PB27B_SMC_A16                          _L_(1)       /**< SMC signal line function value: A16 */
#define PIO_PB27B_SMC_A16                          (_UL_(1) << 27)

#define PIN_PB28B_SMC_A17                          _L_(60)      /**< SMC signal: A17 on PB28 mux B*/
#define MUX_PB28B_SMC_A17                          _L_(1)       /**< SMC signal line function value: A17 */
#define PIO_PB28B_SMC_A17                          (_UL_(1) << 28)

#define PIN_PB29B_SMC_A18                          _L_(61)      /**< SMC signal: A18 on PB29 mux B*/
#define MUX_PB29B_SMC_A18                          _L_(1)       /**< SMC signal line function value: A18 */
#define PIO_PB29B_SMC_A18                          (_UL_(1) << 29)

#define PIN_PB30B_SMC_A19                          _L_(62)      /**< SMC signal: A19 on PB30 mux B*/
#define MUX_PB30B_SMC_A19                          _L_(1)       /**< SMC signal line function value: A19 */
#define PIO_PB30B_SMC_A19                          (_UL_(1) << 30)

#define PIN_PB31B_SMC_A20                          _L_(63)      /**< SMC signal: A20 on PB31 mux B*/
#define MUX_PB31B_SMC_A20                          _L_(1)       /**< SMC signal line function value: A20 */
#define PIO_PB31B_SMC_A20                          (_UL_(1) << 31)

#define PIN_PC0B_SMC_A23                           _L_(64)      /**< SMC signal: A23 on PC0 mux B*/
#define MUX_PC0B_SMC_A23                           _L_(1)       /**< SMC signal line function value: A23 */
#define PIO_PC0B_SMC_A23                           (_UL_(1) << 0)

#define PIN_PC1B_SMC_A24                           _L_(65)      /**< SMC signal: A24 on PC1 mux B*/
#define MUX_PC1B_SMC_A24                           _L_(1)       /**< SMC signal line function value: A24 */
#define PIO_PC1B_SMC_A24                           (_UL_(1) << 1)

#define PIN_PC2B_SMC_A25                           _L_(66)      /**< SMC signal: A25 on PC2 mux B*/
#define MUX_PC2B_SMC_A25                           _L_(1)       /**< SMC signal line function value: A25 */
#define PIO_PC2B_SMC_A25                           (_UL_(1) << 2)

#define PIN_PC12C_SMC_A1                           _L_(76)      /**< SMC signal: A1 on PC12 mux C*/
#define MUX_PC12C_SMC_A1                           _L_(2)       /**< SMC signal line function value: A1 */
#define PIO_PC12C_SMC_A1                           (_UL_(1) << 12)

#define PIN_PC13C_SMC_A2                           _L_(77)      /**< SMC signal: A2 on PC13 mux C*/
#define MUX_PC13C_SMC_A2                           _L_(2)       /**< SMC signal line function value: A2 */
#define PIO_PC13C_SMC_A2                           (_UL_(1) << 13)

#define PIN_PC14C_SMC_A3                           _L_(78)      /**< SMC signal: A3 on PC14 mux C*/
#define MUX_PC14C_SMC_A3                           _L_(2)       /**< SMC signal line function value: A3 */
#define PIO_PC14C_SMC_A3                           (_UL_(1) << 14)

#define PIN_PC15C_SMC_A4                           _L_(79)      /**< SMC signal: A4 on PC15 mux C*/
#define MUX_PC15C_SMC_A4                           _L_(2)       /**< SMC signal line function value: A4 */
#define PIO_PC15C_SMC_A4                           (_UL_(1) << 15)

#define PIN_PC16C_SMC_A5                           _L_(80)      /**< SMC signal: A5 on PC16 mux C*/
#define MUX_PC16C_SMC_A5                           _L_(2)       /**< SMC signal line function value: A5 */
#define PIO_PC16C_SMC_A5                           (_UL_(1) << 16)

#define PIN_PC17C_SMC_A6                           _L_(81)      /**< SMC signal: A6 on PC17 mux C*/
#define MUX_PC17C_SMC_A6                           _L_(2)       /**< SMC signal line function value: A6 */
#define PIO_PC17C_SMC_A6                           (_UL_(1) << 17)

#define PIN_PC18C_SMC_A7                           _L_(82)      /**< SMC signal: A7 on PC18 mux C*/
#define MUX_PC18C_SMC_A7                           _L_(2)       /**< SMC signal line function value: A7 */
#define PIO_PC18C_SMC_A7                           (_UL_(1) << 18)

#define PIN_PC19C_SMC_A8                           _L_(83)      /**< SMC signal: A8 on PC19 mux C*/
#define MUX_PC19C_SMC_A8                           _L_(2)       /**< SMC signal line function value: A8 */
#define PIO_PC19C_SMC_A8                           (_UL_(1) << 19)

#define PIN_PC20C_SMC_A9                           _L_(84)      /**< SMC signal: A9 on PC20 mux C*/
#define MUX_PC20C_SMC_A9                           _L_(2)       /**< SMC signal line function value: A9 */
#define PIO_PC20C_SMC_A9                           (_UL_(1) << 20)

#define PIN_PC21C_SMC_A10                          _L_(85)      /**< SMC signal: A10 on PC21 mux C*/
#define MUX_PC21C_SMC_A10                          _L_(2)       /**< SMC signal line function value: A10 */
#define PIO_PC21C_SMC_A10                          (_UL_(1) << 21)

#define PIN_PC22C_SMC_A11                          _L_(86)      /**< SMC signal: A11 on PC22 mux C*/
#define MUX_PC22C_SMC_A11                          _L_(2)       /**< SMC signal line function value: A11 */
#define PIO_PC22C_SMC_A11                          (_UL_(1) << 22)

#define PIN_PC23C_SMC_A12                          _L_(87)      /**< SMC signal: A12 on PC23 mux C*/
#define MUX_PC23C_SMC_A12                          _L_(2)       /**< SMC signal line function value: A12 */
#define PIO_PC23C_SMC_A12                          (_UL_(1) << 23)

#define PIN_PC24C_SMC_A13                          _L_(88)      /**< SMC signal: A13 on PC24 mux C*/
#define MUX_PC24C_SMC_A13                          _L_(2)       /**< SMC signal line function value: A13 */
#define PIO_PC24C_SMC_A13                          (_UL_(1) << 24)

#define PIN_PC25C_SMC_A14                          _L_(89)      /**< SMC signal: A14 on PC25 mux C*/
#define MUX_PC25C_SMC_A14                          _L_(2)       /**< SMC signal line function value: A14 */
#define PIO_PC25C_SMC_A14                          (_UL_(1) << 25)

#define PIN_PC26C_SMC_A15                          _L_(90)      /**< SMC signal: A15 on PC26 mux C*/
#define MUX_PC26C_SMC_A15                          _L_(2)       /**< SMC signal line function value: A15 */
#define PIO_PC26C_SMC_A15                          (_UL_(1) << 26)

#define PIN_PC27C_SMC_A16                          _L_(91)      /**< SMC signal: A16 on PC27 mux C*/
#define MUX_PC27C_SMC_A16                          _L_(2)       /**< SMC signal line function value: A16 */
#define PIO_PC27C_SMC_A16                          (_UL_(1) << 27)

#define PIN_PC28C_SMC_A17                          _L_(92)      /**< SMC signal: A17 on PC28 mux C*/
#define MUX_PC28C_SMC_A17                          _L_(2)       /**< SMC signal line function value: A17 */
#define PIO_PC28C_SMC_A17                          (_UL_(1) << 28)

#define PIN_PC29C_SMC_A18                          _L_(93)      /**< SMC signal: A18 on PC29 mux C*/
#define MUX_PC29C_SMC_A18                          _L_(2)       /**< SMC signal line function value: A18 */
#define PIO_PC29C_SMC_A18                          (_UL_(1) << 29)

#define PIN_PC30C_SMC_A19                          _L_(94)      /**< SMC signal: A19 on PC30 mux C*/
#define MUX_PC30C_SMC_A19                          _L_(2)       /**< SMC signal line function value: A19 */
#define PIO_PC30C_SMC_A19                          (_UL_(1) << 30)

#define PIN_PC31C_SMC_A20                          _L_(95)      /**< SMC signal: A20 on PC31 mux C*/
#define MUX_PC31C_SMC_A20                          _L_(2)       /**< SMC signal line function value: A20 */
#define PIO_PC31C_SMC_A20                          (_UL_(1) << 31)

#define PIN_PD0C_SMC_A23                           _L_(96)      /**< SMC signal: A23 on PD0 mux C*/
#define MUX_PD0C_SMC_A23                           _L_(2)       /**< SMC signal line function value: A23 */
#define PIO_PD0C_SMC_A23                           (_UL_(1) << 0)

#define PIN_PD1C_SMC_A24                           _L_(97)      /**< SMC signal: A24 on PD1 mux C*/
#define MUX_PD1C_SMC_A24                           _L_(2)       /**< SMC signal line function value: A24 */
#define PIO_PD1C_SMC_A24                           (_UL_(1) << 1)

#define PIN_PD2C_SMC_A25                           _L_(98)      /**< SMC signal: A25 on PD2 mux C*/
#define MUX_PD2C_SMC_A25                           _L_(2)       /**< SMC signal line function value: A25 */
#define PIO_PD2C_SMC_A25                           (_UL_(1) << 2)

#define PIN_PA0F_SMC_D0                            _L_(0)       /**< SMC signal: D0 on PA0 mux F*/
#define MUX_PA0F_SMC_D0                            _L_(5)       /**< SMC signal line function value: D0 */
#define PIO_PA0F_SMC_D0                            (_UL_(1) << 0)

#define PIN_PA1F_SMC_D1                            _L_(1)       /**< SMC signal: D1 on PA1 mux F*/
#define MUX_PA1F_SMC_D1                            _L_(5)       /**< SMC signal line function value: D1 */
#define PIO_PA1F_SMC_D1                            (_UL_(1) << 1)

#define PIN_PA2F_SMC_D2                            _L_(2)       /**< SMC signal: D2 on PA2 mux F*/
#define MUX_PA2F_SMC_D2                            _L_(5)       /**< SMC signal line function value: D2 */
#define PIO_PA2F_SMC_D2                            (_UL_(1) << 2)

#define PIN_PA3F_SMC_D3                            _L_(3)       /**< SMC signal: D3 on PA3 mux F*/
#define MUX_PA3F_SMC_D3                            _L_(5)       /**< SMC signal line function value: D3 */
#define PIO_PA3F_SMC_D3                            (_UL_(1) << 3)

#define PIN_PA4F_SMC_D4                            _L_(4)       /**< SMC signal: D4 on PA4 mux F*/
#define MUX_PA4F_SMC_D4                            _L_(5)       /**< SMC signal line function value: D4 */
#define PIO_PA4F_SMC_D4                            (_UL_(1) << 4)

#define PIN_PA5F_SMC_D5                            _L_(5)       /**< SMC signal: D5 on PA5 mux F*/
#define MUX_PA5F_SMC_D5                            _L_(5)       /**< SMC signal line function value: D5 */
#define PIO_PA5F_SMC_D5                            (_UL_(1) << 5)

#define PIN_PA6F_SMC_D6                            _L_(6)       /**< SMC signal: D6 on PA6 mux F*/
#define MUX_PA6F_SMC_D6                            _L_(5)       /**< SMC signal line function value: D6 */
#define PIO_PA6F_SMC_D6                            (_UL_(1) << 6)

#define PIN_PA7F_SMC_D7                            _L_(7)       /**< SMC signal: D7 on PA7 mux F*/
#define MUX_PA7F_SMC_D7                            _L_(5)       /**< SMC signal line function value: D7 */
#define PIO_PA7F_SMC_D7                            (_UL_(1) << 7)

#define PIN_PA13F_SMC_D8                           _L_(13)      /**< SMC signal: D8 on PA13 mux F*/
#define MUX_PA13F_SMC_D8                           _L_(5)       /**< SMC signal line function value: D8 */
#define PIO_PA13F_SMC_D8                           (_UL_(1) << 13)

#define PIN_PA14F_SMC_D9                           _L_(14)      /**< SMC signal: D9 on PA14 mux F*/
#define MUX_PA14F_SMC_D9                           _L_(5)       /**< SMC signal line function value: D9 */
#define PIO_PA14F_SMC_D9                           (_UL_(1) << 14)

#define PIN_PA15F_SMC_D10                          _L_(15)      /**< SMC signal: D10 on PA15 mux F*/
#define MUX_PA15F_SMC_D10                          _L_(5)       /**< SMC signal line function value: D10 */
#define PIO_PA15F_SMC_D10                          (_UL_(1) << 15)

#define PIN_PA16F_SMC_D11                          _L_(16)      /**< SMC signal: D11 on PA16 mux F*/
#define MUX_PA16F_SMC_D11                          _L_(5)       /**< SMC signal line function value: D11 */
#define PIO_PA16F_SMC_D11                          (_UL_(1) << 16)

#define PIN_PA17F_SMC_D12                          _L_(17)      /**< SMC signal: D12 on PA17 mux F*/
#define MUX_PA17F_SMC_D12                          _L_(5)       /**< SMC signal line function value: D12 */
#define PIO_PA17F_SMC_D12                          (_UL_(1) << 17)

#define PIN_PA18F_SMC_D13                          _L_(18)      /**< SMC signal: D13 on PA18 mux F*/
#define MUX_PA18F_SMC_D13                          _L_(5)       /**< SMC signal line function value: D13 */
#define PIO_PA18F_SMC_D13                          (_UL_(1) << 18)

#define PIN_PA19F_SMC_D14                          _L_(19)      /**< SMC signal: D14 on PA19 mux F*/
#define MUX_PA19F_SMC_D14                          _L_(5)       /**< SMC signal line function value: D14 */
#define PIO_PA19F_SMC_D14                          (_UL_(1) << 19)

#define PIN_PA20F_SMC_D15                          _L_(20)      /**< SMC signal: D15 on PA20 mux F*/
#define MUX_PA20F_SMC_D15                          _L_(5)       /**< SMC signal line function value: D15 */
#define PIO_PA20F_SMC_D15                          (_UL_(1) << 20)

#define PIN_PA22B_SMC_D0                           _L_(22)      /**< SMC signal: D0 on PA22 mux B*/
#define MUX_PA22B_SMC_D0                           _L_(1)       /**< SMC signal line function value: D0 */
#define PIO_PA22B_SMC_D0                           (_UL_(1) << 22)

#define PIN_PA23B_SMC_D1                           _L_(23)      /**< SMC signal: D1 on PA23 mux B*/
#define MUX_PA23B_SMC_D1                           _L_(1)       /**< SMC signal line function value: D1 */
#define PIO_PA23B_SMC_D1                           (_UL_(1) << 23)

#define PIN_PA24B_SMC_D2                           _L_(24)      /**< SMC signal: D2 on PA24 mux B*/
#define MUX_PA24B_SMC_D2                           _L_(1)       /**< SMC signal line function value: D2 */
#define PIO_PA24B_SMC_D2                           (_UL_(1) << 24)

#define PIN_PA25B_SMC_D3                           _L_(25)      /**< SMC signal: D3 on PA25 mux B*/
#define MUX_PA25B_SMC_D3                           _L_(1)       /**< SMC signal line function value: D3 */
#define PIO_PA25B_SMC_D3                           (_UL_(1) << 25)

#define PIN_PA26B_SMC_D4                           _L_(26)      /**< SMC signal: D4 on PA26 mux B*/
#define MUX_PA26B_SMC_D4                           _L_(1)       /**< SMC signal line function value: D4 */
#define PIO_PA26B_SMC_D4                           (_UL_(1) << 26)

#define PIN_PA27B_SMC_D5                           _L_(27)      /**< SMC signal: D5 on PA27 mux B*/
#define MUX_PA27B_SMC_D5                           _L_(1)       /**< SMC signal line function value: D5 */
#define PIO_PA27B_SMC_D5                           (_UL_(1) << 27)

#define PIN_PA28B_SMC_D6                           _L_(28)      /**< SMC signal: D6 on PA28 mux B*/
#define MUX_PA28B_SMC_D6                           _L_(1)       /**< SMC signal line function value: D6 */
#define PIO_PA28B_SMC_D6                           (_UL_(1) << 28)

#define PIN_PA29B_SMC_D7                           _L_(29)      /**< SMC signal: D7 on PA29 mux B*/
#define MUX_PA29B_SMC_D7                           _L_(1)       /**< SMC signal line function value: D7 */
#define PIO_PA29B_SMC_D7                           (_UL_(1) << 29)

#define PIN_PB3B_SMC_D8                            _L_(35)      /**< SMC signal: D8 on PB3 mux B*/
#define MUX_PB3B_SMC_D8                            _L_(1)       /**< SMC signal line function value: D8 */
#define PIO_PB3B_SMC_D8                            (_UL_(1) << 3)

#define PIN_PB4B_SMC_D9                            _L_(36)      /**< SMC signal: D9 on PB4 mux B*/
#define MUX_PB4B_SMC_D9                            _L_(1)       /**< SMC signal line function value: D9 */
#define PIO_PB4B_SMC_D9                            (_UL_(1) << 4)

#define PIN_PB5B_SMC_D10                           _L_(37)      /**< SMC signal: D10 on PB5 mux B*/
#define MUX_PB5B_SMC_D10                           _L_(1)       /**< SMC signal line function value: D10 */
#define PIO_PB5B_SMC_D10                           (_UL_(1) << 5)

#define PIN_PB6B_SMC_D11                           _L_(38)      /**< SMC signal: D11 on PB6 mux B*/
#define MUX_PB6B_SMC_D11                           _L_(1)       /**< SMC signal line function value: D11 */
#define PIO_PB6B_SMC_D11                           (_UL_(1) << 6)

#define PIN_PB7B_SMC_D12                           _L_(39)      /**< SMC signal: D12 on PB7 mux B*/
#define MUX_PB7B_SMC_D12                           _L_(1)       /**< SMC signal line function value: D12 */
#define PIO_PB7B_SMC_D12                           (_UL_(1) << 7)

#define PIN_PB8B_SMC_D13                           _L_(40)      /**< SMC signal: D13 on PB8 mux B*/
#define MUX_PB8B_SMC_D13                           _L_(1)       /**< SMC signal line function value: D13 */
#define PIO_PB8B_SMC_D13                           (_UL_(1) << 8)

#define PIN_PB9B_SMC_D14                           _L_(41)      /**< SMC signal: D14 on PB9 mux B*/
#define MUX_PB9B_SMC_D14                           _L_(1)       /**< SMC signal line function value: D14 */
#define PIO_PB9B_SMC_D14                           (_UL_(1) << 9)

#define PIN_PB10B_SMC_D15                          _L_(42)      /**< SMC signal: D15 on PB10 mux B*/
#define MUX_PB10B_SMC_D15                          _L_(1)       /**< SMC signal line function value: D15 */
#define PIO_PB10B_SMC_D15                          (_UL_(1) << 10)

#define PIN_PC3B_SMC_NWAIT                         _L_(67)      /**< SMC signal: NWAIT on PC3 mux B*/
#define MUX_PC3B_SMC_NWAIT                         _L_(1)       /**< SMC signal line function value: NWAIT */
#define PIO_PC3B_SMC_NWAIT                         (_UL_(1) << 3)

#define PIN_PD3F_SMC_NWAIT                         _L_(99)      /**< SMC signal: NWAIT on PD3 mux F*/
#define MUX_PD3F_SMC_NWAIT                         _L_(5)       /**< SMC signal line function value: NWAIT */
#define PIO_PD3F_SMC_NWAIT                         (_UL_(1) << 3)

#define PIN_PA21F_SMC_NANDRDY                      _L_(21)      /**< SMC signal: NANDRDY on PA21 mux F*/
#define MUX_PA21F_SMC_NANDRDY                      _L_(5)       /**< SMC signal line function value: NANDRDY */
#define PIO_PA21F_SMC_NANDRDY                      (_UL_(1) << 21)

#define PIN_PC8B_SMC_NANDRDY                       _L_(72)      /**< SMC signal: NANDRDY on PC8 mux B*/
#define MUX_PC8B_SMC_NANDRDY                       _L_(1)       /**< SMC signal line function value: NANDRDY */
#define PIO_PC8B_SMC_NANDRDY                       (_UL_(1) << 8)

#define PIN_PD8F_SMC_NANDRDY                       _L_(104)     /**< SMC signal: NANDRDY on PD8 mux F*/
#define MUX_PD8F_SMC_NANDRDY                       _L_(5)       /**< SMC signal line function value: NANDRDY */
#define PIO_PD8F_SMC_NANDRDY                       (_UL_(1) << 8)

#define PIN_PA10F_SMC_A21                          _L_(10)      /**< SMC signal: A21 on PA10 mux F*/
#define MUX_PA10F_SMC_A21                          _L_(5)       /**< SMC signal line function value: A21 */
#define PIO_PA10F_SMC_A21                          (_UL_(1) << 10)

#define PIN_PB0B_SMC_A21                           _L_(32)      /**< SMC signal: A21 on PB0 mux B*/
#define MUX_PB0B_SMC_A21                           _L_(1)       /**< SMC signal line function value: A21 */
#define PIO_PB0B_SMC_A21                           (_UL_(1) << 0)

#define PIN_PA11F_SMC_A22                          _L_(11)      /**< SMC signal: A22 on PA11 mux F*/
#define MUX_PA11F_SMC_A22                          _L_(5)       /**< SMC signal line function value: A22 */
#define PIO_PA11F_SMC_A22                          (_UL_(1) << 11)

#define PIN_PB1B_SMC_A22                           _L_(33)      /**< SMC signal: A22 on PB1 mux B*/
#define MUX_PB1B_SMC_A22                           _L_(1)       /**< SMC signal line function value: A22 */
#define PIO_PB1B_SMC_A22                           (_UL_(1) << 1)

/* ========== PIO definition for SPI0 peripheral ========== */
#define PIN_PA16A_SPI0_SPI0_MISO                   _L_(16)      /**< SPI0 signal: SPI0_MISO on PA16 mux A*/
#define MUX_PA16A_SPI0_SPI0_MISO                   _L_(0)       /**< SPI0 signal line function value: SPI0_MISO */
#define PIO_PA16A_SPI0_SPI0_MISO                   (_UL_(1) << 16)

#define PIN_PA31C_SPI0_SPI0_MISO                   _L_(31)      /**< SPI0 signal: SPI0_MISO on PA31 mux C*/
#define MUX_PA31C_SPI0_SPI0_MISO                   _L_(2)       /**< SPI0 signal line function value: SPI0_MISO */
#define PIO_PA31C_SPI0_SPI0_MISO                   (_UL_(1) << 31)

#define PIN_PA15A_SPI0_SPI0_MOSI                   _L_(15)      /**< SPI0 signal: SPI0_MOSI on PA15 mux A*/
#define MUX_PA15A_SPI0_SPI0_MOSI                   _L_(0)       /**< SPI0 signal line function value: SPI0_MOSI */
#define PIO_PA15A_SPI0_SPI0_MOSI                   (_UL_(1) << 15)

#define PIN_PB0C_SPI0_SPI0_MOSI                    _L_(32)      /**< SPI0 signal: SPI0_MOSI on PB0 mux C*/
#define MUX_PB0C_SPI0_SPI0_MOSI                    _L_(2)       /**< SPI0 signal line function value: SPI0_MOSI */
#define PIO_PB0C_SPI0_SPI0_MOSI                    (_UL_(1) << 0)

#define PIN_PA17A_SPI0_SPI0_NPCS0                  _L_(17)      /**< SPI0 signal: SPI0_NPCS0 on PA17 mux A*/
#define MUX_PA17A_SPI0_SPI0_NPCS0                  _L_(0)       /**< SPI0 signal line function value: SPI0_NPCS0 */
#define PIO_PA17A_SPI0_SPI0_NPCS0                  (_UL_(1) << 17)

#define PIN_PA30C_SPI0_SPI0_NPCS0                  _L_(30)      /**< SPI0 signal: SPI0_NPCS0 on PA30 mux C*/
#define MUX_PA30C_SPI0_SPI0_NPCS0                  _L_(2)       /**< SPI0 signal line function value: SPI0_NPCS0 */
#define PIO_PA30C_SPI0_SPI0_NPCS0                  (_UL_(1) << 30)

#define PIN_PA18A_SPI0_SPI0_NPCS1                  _L_(18)      /**< SPI0 signal: SPI0_NPCS1 on PA18 mux A*/
#define MUX_PA18A_SPI0_SPI0_NPCS1                  _L_(0)       /**< SPI0 signal line function value: SPI0_NPCS1 */
#define PIO_PA18A_SPI0_SPI0_NPCS1                  (_UL_(1) << 18)

#define PIN_PA29C_SPI0_SPI0_NPCS1                  _L_(29)      /**< SPI0 signal: SPI0_NPCS1 on PA29 mux C*/
#define MUX_PA29C_SPI0_SPI0_NPCS1                  _L_(2)       /**< SPI0 signal line function value: SPI0_NPCS1 */
#define PIO_PA29C_SPI0_SPI0_NPCS1                  (_UL_(1) << 29)

#define PIN_PA19A_SPI0_SPI0_NPCS2                  _L_(19)      /**< SPI0 signal: SPI0_NPCS2 on PA19 mux A*/
#define MUX_PA19A_SPI0_SPI0_NPCS2                  _L_(0)       /**< SPI0 signal line function value: SPI0_NPCS2 */
#define PIO_PA19A_SPI0_SPI0_NPCS2                  (_UL_(1) << 19)

#define PIN_PA27C_SPI0_SPI0_NPCS2                  _L_(27)      /**< SPI0 signal: SPI0_NPCS2 on PA27 mux C*/
#define MUX_PA27C_SPI0_SPI0_NPCS2                  _L_(2)       /**< SPI0 signal line function value: SPI0_NPCS2 */
#define PIO_PA27C_SPI0_SPI0_NPCS2                  (_UL_(1) << 27)

#define PIN_PA20A_SPI0_SPI0_NPCS3                  _L_(20)      /**< SPI0 signal: SPI0_NPCS3 on PA20 mux A*/
#define MUX_PA20A_SPI0_SPI0_NPCS3                  _L_(0)       /**< SPI0 signal line function value: SPI0_NPCS3 */
#define PIO_PA20A_SPI0_SPI0_NPCS3                  (_UL_(1) << 20)

#define PIN_PA28C_SPI0_SPI0_NPCS3                  _L_(28)      /**< SPI0 signal: SPI0_NPCS3 on PA28 mux C*/
#define MUX_PA28C_SPI0_SPI0_NPCS3                  _L_(2)       /**< SPI0 signal line function value: SPI0_NPCS3 */
#define PIO_PA28C_SPI0_SPI0_NPCS3                  (_UL_(1) << 28)

#define PIN_PA14A_SPI0_SPI0_SPCK                   _L_(14)      /**< SPI0 signal: SPI0_SPCK on PA14 mux A*/
#define MUX_PA14A_SPI0_SPI0_SPCK                   _L_(0)       /**< SPI0 signal line function value: SPI0_SPCK */
#define PIO_PA14A_SPI0_SPI0_SPCK                   (_UL_(1) << 14)

#define PIN_PB1C_SPI0_SPI0_SPCK                    _L_(33)      /**< SPI0 signal: SPI0_SPCK on PB1 mux C*/
#define MUX_PB1C_SPI0_SPI0_SPCK                    _L_(2)       /**< SPI0 signal line function value: SPI0_SPCK */
#define PIO_PB1C_SPI0_SPI0_SPCK                    (_UL_(1) << 1)

/* ========== PIO definition for SPI1 peripheral ========== */
#define PIN_PA24D_SPI1_SPI1_MISO                   _L_(24)      /**< SPI1 signal: SPI1_MISO on PA24 mux D*/
#define MUX_PA24D_SPI1_SPI1_MISO                   _L_(3)       /**< SPI1 signal line function value: SPI1_MISO */
#define PIO_PA24D_SPI1_SPI1_MISO                   (_UL_(1) << 24)

#define PIN_PC3D_SPI1_SPI1_MISO                    _L_(67)      /**< SPI1 signal: SPI1_MISO on PC3 mux D*/
#define MUX_PC3D_SPI1_SPI1_MISO                    _L_(3)       /**< SPI1 signal line function value: SPI1_MISO */
#define PIO_PC3D_SPI1_SPI1_MISO                    (_UL_(1) << 3)

#define PIN_PD27A_SPI1_SPI1_MISO                   _L_(123)     /**< SPI1 signal: SPI1_MISO on PD27 mux A*/
#define MUX_PD27A_SPI1_SPI1_MISO                   _L_(0)       /**< SPI1 signal line function value: SPI1_MISO */
#define PIO_PD27A_SPI1_SPI1_MISO                   (_UL_(1) << 27)

#define PIN_PA23D_SPI1_SPI1_MOSI                   _L_(23)      /**< SPI1 signal: SPI1_MOSI on PA23 mux D*/
#define MUX_PA23D_SPI1_SPI1_MOSI                   _L_(3)       /**< SPI1 signal line function value: SPI1_MOSI */
#define PIO_PA23D_SPI1_SPI1_MOSI                   (_UL_(1) << 23)

#define PIN_PC2D_SPI1_SPI1_MOSI                    _L_(66)      /**< SPI1 signal: SPI1_MOSI on PC2 mux D*/
#define MUX_PC2D_SPI1_SPI1_MOSI                    _L_(3)       /**< SPI1 signal line function value: SPI1_MOSI */
#define PIO_PC2D_SPI1_SPI1_MOSI                    (_UL_(1) << 2)

#define PIN_PD26A_SPI1_SPI1_MOSI                   _L_(122)     /**< SPI1 signal: SPI1_MOSI on PD26 mux A*/
#define MUX_PD26A_SPI1_SPI1_MOSI                   _L_(0)       /**< SPI1 signal line function value: SPI1_MOSI */
#define PIO_PD26A_SPI1_SPI1_MOSI                   (_UL_(1) << 26)

#define PIN_PA25D_SPI1_SPI1_NPCS0                  _L_(25)      /**< SPI1 signal: SPI1_NPCS0 on PA25 mux D*/
#define MUX_PA25D_SPI1_SPI1_NPCS0                  _L_(3)       /**< SPI1 signal line function value: SPI1_NPCS0 */
#define PIO_PA25D_SPI1_SPI1_NPCS0                  (_UL_(1) << 25)

#define PIN_PC4D_SPI1_SPI1_NPCS0                   _L_(68)      /**< SPI1 signal: SPI1_NPCS0 on PC4 mux D*/
#define MUX_PC4D_SPI1_SPI1_NPCS0                   _L_(3)       /**< SPI1 signal line function value: SPI1_NPCS0 */
#define PIO_PC4D_SPI1_SPI1_NPCS0                   (_UL_(1) << 4)

#define PIN_PD28A_SPI1_SPI1_NPCS0                  _L_(124)     /**< SPI1 signal: SPI1_NPCS0 on PD28 mux A*/
#define MUX_PD28A_SPI1_SPI1_NPCS0                  _L_(0)       /**< SPI1 signal line function value: SPI1_NPCS0 */
#define PIO_PD28A_SPI1_SPI1_NPCS0                  (_UL_(1) << 28)

#define PIN_PA26D_SPI1_SPI1_NPCS1                  _L_(26)      /**< SPI1 signal: SPI1_NPCS1 on PA26 mux D*/
#define MUX_PA26D_SPI1_SPI1_NPCS1                  _L_(3)       /**< SPI1 signal line function value: SPI1_NPCS1 */
#define PIO_PA26D_SPI1_SPI1_NPCS1                  (_UL_(1) << 26)

#define PIN_PC5D_SPI1_SPI1_NPCS1                   _L_(69)      /**< SPI1 signal: SPI1_NPCS1 on PC5 mux D*/
#define MUX_PC5D_SPI1_SPI1_NPCS1                   _L_(3)       /**< SPI1 signal line function value: SPI1_NPCS1 */
#define PIO_PC5D_SPI1_SPI1_NPCS1                   (_UL_(1) << 5)

#define PIN_PD29A_SPI1_SPI1_NPCS1                  _L_(125)     /**< SPI1 signal: SPI1_NPCS1 on PD29 mux A*/
#define MUX_PD29A_SPI1_SPI1_NPCS1                  _L_(0)       /**< SPI1 signal line function value: SPI1_NPCS1 */
#define PIO_PD29A_SPI1_SPI1_NPCS1                  (_UL_(1) << 29)

#define PIN_PA27D_SPI1_SPI1_NPCS2                  _L_(27)      /**< SPI1 signal: SPI1_NPCS2 on PA27 mux D*/
#define MUX_PA27D_SPI1_SPI1_NPCS2                  _L_(3)       /**< SPI1 signal line function value: SPI1_NPCS2 */
#define PIO_PA27D_SPI1_SPI1_NPCS2                  (_UL_(1) << 27)

#define PIN_PC6D_SPI1_SPI1_NPCS2                   _L_(70)      /**< SPI1 signal: SPI1_NPCS2 on PC6 mux D*/
#define MUX_PC6D_SPI1_SPI1_NPCS2                   _L_(3)       /**< SPI1 signal line function value: SPI1_NPCS2 */
#define PIO_PC6D_SPI1_SPI1_NPCS2                   (_UL_(1) << 6)

#define PIN_PD30A_SPI1_SPI1_NPCS2                  _L_(126)     /**< SPI1 signal: SPI1_NPCS2 on PD30 mux A*/
#define MUX_PD30A_SPI1_SPI1_NPCS2                  _L_(0)       /**< SPI1 signal line function value: SPI1_NPCS2 */
#define PIO_PD30A_SPI1_SPI1_NPCS2                  (_UL_(1) << 30)

#define PIN_PA28D_SPI1_SPI1_NPCS3                  _L_(28)      /**< SPI1 signal: SPI1_NPCS3 on PA28 mux D*/
#define MUX_PA28D_SPI1_SPI1_NPCS3                  _L_(3)       /**< SPI1 signal line function value: SPI1_NPCS3 */
#define PIO_PA28D_SPI1_SPI1_NPCS3                  (_UL_(1) << 28)

#define PIN_PC7D_SPI1_SPI1_NPCS3                   _L_(71)      /**< SPI1 signal: SPI1_NPCS3 on PC7 mux D*/
#define MUX_PC7D_SPI1_SPI1_NPCS3                   _L_(3)       /**< SPI1 signal line function value: SPI1_NPCS3 */
#define PIO_PC7D_SPI1_SPI1_NPCS3                   (_UL_(1) << 7)

#define PIN_PA22D_SPI1_SPI1_SPCK                   _L_(22)      /**< SPI1 signal: SPI1_SPCK on PA22 mux D*/
#define MUX_PA22D_SPI1_SPI1_SPCK                   _L_(3)       /**< SPI1 signal line function value: SPI1_SPCK */
#define PIO_PA22D_SPI1_SPI1_SPCK                   (_UL_(1) << 22)

#define PIN_PC1D_SPI1_SPI1_SPCK                    _L_(65)      /**< SPI1 signal: SPI1_SPCK on PC1 mux D*/
#define MUX_PC1D_SPI1_SPI1_SPCK                    _L_(3)       /**< SPI1 signal line function value: SPI1_SPCK */
#define PIO_PC1D_SPI1_SPI1_SPCK                    (_UL_(1) << 1)

#define PIN_PD25A_SPI1_SPI1_SPCK                   _L_(121)     /**< SPI1 signal: SPI1_SPCK on PD25 mux A*/
#define MUX_PD25A_SPI1_SPI1_SPCK                   _L_(0)       /**< SPI1 signal line function value: SPI1_SPCK */
#define PIO_PD25A_SPI1_SPI1_SPCK                   (_UL_(1) << 25)

/* ========== PIO definition for SSC0 peripheral ========== */
#define PIN_PB23C_SSC0_RD0                         _L_(55)      /**< SSC0 signal: RD0 on PB23 mux C*/
#define MUX_PB23C_SSC0_RD0                         _L_(2)       /**< SSC0 signal line function value: RD0 */
#define PIO_PB23C_SSC0_RD0                         (_UL_(1) << 23)

#define PIN_PC15E_SSC0_RD0                         _L_(79)      /**< SSC0 signal: RD0 on PC15 mux E*/
#define MUX_PC15E_SSC0_RD0                         _L_(4)       /**< SSC0 signal line function value: RD0 */
#define PIO_PC15E_SSC0_RD0                         (_UL_(1) << 15)

#define PIN_PB25C_SSC0_RF0                         _L_(57)      /**< SSC0 signal: RF0 on PB25 mux C*/
#define MUX_PB25C_SSC0_RF0                         _L_(2)       /**< SSC0 signal line function value: RF0 */
#define PIO_PB25C_SSC0_RF0                         (_UL_(1) << 25)

#define PIN_PC17E_SSC0_RF0                         _L_(81)      /**< SSC0 signal: RF0 on PC17 mux E*/
#define MUX_PC17E_SSC0_RF0                         _L_(4)       /**< SSC0 signal line function value: RF0 */
#define PIO_PC17E_SSC0_RF0                         (_UL_(1) << 17)

#define PIN_PB24C_SSC0_RK0                         _L_(56)      /**< SSC0 signal: RK0 on PB24 mux C*/
#define MUX_PB24C_SSC0_RK0                         _L_(2)       /**< SSC0 signal line function value: RK0 */
#define PIO_PB24C_SSC0_RK0                         (_UL_(1) << 24)

#define PIN_PC16E_SSC0_RK0                         _L_(80)      /**< SSC0 signal: RK0 on PC16 mux E*/
#define MUX_PC16E_SSC0_RK0                         _L_(4)       /**< SSC0 signal line function value: RK0 */
#define PIO_PC16E_SSC0_RK0                         (_UL_(1) << 16)

#define PIN_PB22C_SSC0_TD0                         _L_(54)      /**< SSC0 signal: TD0 on PB22 mux C*/
#define MUX_PB22C_SSC0_TD0                         _L_(2)       /**< SSC0 signal line function value: TD0 */
#define PIO_PB22C_SSC0_TD0                         (_UL_(1) << 22)

#define PIN_PC14E_SSC0_TD0                         _L_(78)      /**< SSC0 signal: TD0 on PC14 mux E*/
#define MUX_PC14E_SSC0_TD0                         _L_(4)       /**< SSC0 signal line function value: TD0 */
#define PIO_PC14E_SSC0_TD0                         (_UL_(1) << 14)

#define PIN_PB21C_SSC0_TF0                         _L_(53)      /**< SSC0 signal: TF0 on PB21 mux C*/
#define MUX_PB21C_SSC0_TF0                         _L_(2)       /**< SSC0 signal line function value: TF0 */
#define PIO_PB21C_SSC0_TF0                         (_UL_(1) << 21)

#define PIN_PC13E_SSC0_TF0                         _L_(77)      /**< SSC0 signal: TF0 on PC13 mux E*/
#define MUX_PC13E_SSC0_TF0                         _L_(4)       /**< SSC0 signal line function value: TF0 */
#define PIO_PC13E_SSC0_TF0                         (_UL_(1) << 13)

#define PIN_PB20C_SSC0_TK0                         _L_(52)      /**< SSC0 signal: TK0 on PB20 mux C*/
#define MUX_PB20C_SSC0_TK0                         _L_(2)       /**< SSC0 signal line function value: TK0 */
#define PIO_PB20C_SSC0_TK0                         (_UL_(1) << 20)

#define PIN_PC12E_SSC0_TK0                         _L_(76)      /**< SSC0 signal: TK0 on PC12 mux E*/
#define MUX_PC12E_SSC0_TK0                         _L_(4)       /**< SSC0 signal line function value: TK0 */
#define PIO_PC12E_SSC0_TK0                         (_UL_(1) << 12)

/* ========== PIO definition for SSC1 peripheral ========== */
#define PIN_PA17B_SSC1_RD1                         _L_(17)      /**< SSC1 signal: RD1 on PA17 mux B*/
#define MUX_PA17B_SSC1_RD1                         _L_(1)       /**< SSC1 signal line function value: RD1 */
#define PIO_PA17B_SSC1_RD1                         (_UL_(1) << 17)

#define PIN_PB17C_SSC1_RD1                         _L_(49)      /**< SSC1 signal: RD1 on PB17 mux C*/
#define MUX_PB17C_SSC1_RD1                         _L_(2)       /**< SSC1 signal line function value: RD1 */
#define PIO_PB17C_SSC1_RD1                         (_UL_(1) << 17)

#define PIN_PA19B_SSC1_RF1                         _L_(19)      /**< SSC1 signal: RF1 on PA19 mux B*/
#define MUX_PA19B_SSC1_RF1                         _L_(1)       /**< SSC1 signal line function value: RF1 */
#define PIO_PA19B_SSC1_RF1                         (_UL_(1) << 19)

#define PIN_PB19C_SSC1_RF1                         _L_(51)      /**< SSC1 signal: RF1 on PB19 mux C*/
#define MUX_PB19C_SSC1_RF1                         _L_(2)       /**< SSC1 signal line function value: RF1 */
#define PIO_PB19C_SSC1_RF1                         (_UL_(1) << 19)

#define PIN_PA18B_SSC1_RK1                         _L_(18)      /**< SSC1 signal: RK1 on PA18 mux B*/
#define MUX_PA18B_SSC1_RK1                         _L_(1)       /**< SSC1 signal line function value: RK1 */
#define PIO_PA18B_SSC1_RK1                         (_UL_(1) << 18)

#define PIN_PB18C_SSC1_RK1                         _L_(50)      /**< SSC1 signal: RK1 on PB18 mux C*/
#define MUX_PB18C_SSC1_RK1                         _L_(2)       /**< SSC1 signal line function value: RK1 */
#define PIO_PB18C_SSC1_RK1                         (_UL_(1) << 18)

#define PIN_PA16B_SSC1_TD1                         _L_(16)      /**< SSC1 signal: TD1 on PA16 mux B*/
#define MUX_PA16B_SSC1_TD1                         _L_(1)       /**< SSC1 signal line function value: TD1 */
#define PIO_PA16B_SSC1_TD1                         (_UL_(1) << 16)

#define PIN_PB16C_SSC1_TD1                         _L_(48)      /**< SSC1 signal: TD1 on PB16 mux C*/
#define MUX_PB16C_SSC1_TD1                         _L_(2)       /**< SSC1 signal line function value: TD1 */
#define PIO_PB16C_SSC1_TD1                         (_UL_(1) << 16)

#define PIN_PA15B_SSC1_TF1                         _L_(15)      /**< SSC1 signal: TF1 on PA15 mux B*/
#define MUX_PA15B_SSC1_TF1                         _L_(1)       /**< SSC1 signal line function value: TF1 */
#define PIO_PA15B_SSC1_TF1                         (_UL_(1) << 15)

#define PIN_PB15C_SSC1_TF1                         _L_(47)      /**< SSC1 signal: TF1 on PB15 mux C*/
#define MUX_PB15C_SSC1_TF1                         _L_(2)       /**< SSC1 signal line function value: TF1 */
#define PIO_PB15C_SSC1_TF1                         (_UL_(1) << 15)

#define PIN_PA14B_SSC1_TK1                         _L_(14)      /**< SSC1 signal: TK1 on PA14 mux B*/
#define MUX_PA14B_SSC1_TK1                         _L_(1)       /**< SSC1 signal line function value: TK1 */
#define PIO_PA14B_SSC1_TK1                         (_UL_(1) << 14)

#define PIN_PB14C_SSC1_TK1                         _L_(46)      /**< SSC1 signal: TK1 on PB14 mux C*/
#define MUX_PB14C_SSC1_TK1                         _L_(2)       /**< SSC1 signal line function value: TK1 */
#define PIO_PB14C_SSC1_TK1                         (_UL_(1) << 14)

/* ========== PIO definition for TC0 peripheral ========== */
#define PIN_PA21D_TC0_TCLK0                        _L_(21)      /**< TC0 signal: TCLK0 on PA21 mux D*/
#define MUX_PA21D_TC0_TCLK0                        _L_(3)       /**< TC0 signal line function value: TCLK0 */
#define PIO_PA21D_TC0_TCLK0                        (_UL_(1) << 21)

#define PIN_PA29A_TC0_TCLK1                        _L_(29)      /**< TC0 signal: TCLK1 on PA29 mux A*/
#define MUX_PA29A_TC0_TCLK1                        _L_(0)       /**< TC0 signal line function value: TCLK1 */
#define PIO_PA29A_TC0_TCLK1                        (_UL_(1) << 29)

#define PIN_PC5C_TC0_TCLK1                         _L_(69)      /**< TC0 signal: TCLK1 on PC5 mux C*/
#define MUX_PC5C_TC0_TCLK1                         _L_(2)       /**< TC0 signal line function value: TCLK1 */
#define PIO_PC5C_TC0_TCLK1                         (_UL_(1) << 5)

#define PIN_PD13A_TC0_TCLK1                        _L_(109)     /**< TC0 signal: TCLK1 on PD13 mux A*/
#define MUX_PD13A_TC0_TCLK1                        _L_(0)       /**< TC0 signal line function value: TCLK1 */
#define PIO_PD13A_TC0_TCLK1                        (_UL_(1) << 13)

#define PIN_PB5A_TC0_TCLK2                         _L_(37)      /**< TC0 signal: TCLK2 on PB5 mux A*/
#define MUX_PB5A_TC0_TCLK2                         _L_(0)       /**< TC0 signal line function value: TCLK2 */
#define PIO_PB5A_TC0_TCLK2                         (_UL_(1) << 5)

#define PIN_PB24D_TC0_TCLK2                        _L_(56)      /**< TC0 signal: TCLK2 on PB24 mux D*/
#define MUX_PB24D_TC0_TCLK2                        _L_(3)       /**< TC0 signal line function value: TCLK2 */
#define PIO_PB24D_TC0_TCLK2                        (_UL_(1) << 24)

#define PIN_PD22A_TC0_TCLK2                        _L_(118)     /**< TC0 signal: TCLK2 on PD22 mux A*/
#define MUX_PD22A_TC0_TCLK2                        _L_(0)       /**< TC0 signal line function value: TCLK2 */
#define PIO_PD22A_TC0_TCLK2                        (_UL_(1) << 22)

#define PIN_PA19D_TC0_TIOA0                        _L_(19)      /**< TC0 signal: TIOA0 on PA19 mux D*/
#define MUX_PA19D_TC0_TIOA0                        _L_(3)       /**< TC0 signal line function value: TIOA0 */
#define PIO_PA19D_TC0_TIOA0                        (_UL_(1) << 19)

#define PIN_PA27A_TC0_TIOA1                        _L_(27)      /**< TC0 signal: TIOA1 on PA27 mux A*/
#define MUX_PA27A_TC0_TIOA1                        _L_(0)       /**< TC0 signal line function value: TIOA1 */
#define PIO_PA27A_TC0_TIOA1                        (_UL_(1) << 27)

#define PIN_PC3C_TC0_TIOA1                         _L_(67)      /**< TC0 signal: TIOA1 on PC3 mux C*/
#define MUX_PC3C_TC0_TIOA1                         _L_(2)       /**< TC0 signal line function value: TIOA1 */
#define PIO_PC3C_TC0_TIOA1                         (_UL_(1) << 3)

#define PIN_PD11A_TC0_TIOA1                        _L_(107)     /**< TC0 signal: TIOA1 on PD11 mux A*/
#define MUX_PD11A_TC0_TIOA1                        _L_(0)       /**< TC0 signal line function value: TIOA1 */
#define PIO_PD11A_TC0_TIOA1                        (_UL_(1) << 11)

#define PIN_PB6A_TC0_TIOA2                         _L_(38)      /**< TC0 signal: TIOA2 on PB6 mux A*/
#define MUX_PB6A_TC0_TIOA2                         _L_(0)       /**< TC0 signal line function value: TIOA2 */
#define PIO_PB6A_TC0_TIOA2                         (_UL_(1) << 6)

#define PIN_PB22D_TC0_TIOA2                        _L_(54)      /**< TC0 signal: TIOA2 on PB22 mux D*/
#define MUX_PB22D_TC0_TIOA2                        _L_(3)       /**< TC0 signal line function value: TIOA2 */
#define PIO_PB22D_TC0_TIOA2                        (_UL_(1) << 22)

#define PIN_PD20A_TC0_TIOA2                        _L_(116)     /**< TC0 signal: TIOA2 on PD20 mux A*/
#define MUX_PD20A_TC0_TIOA2                        _L_(0)       /**< TC0 signal line function value: TIOA2 */
#define PIO_PD20A_TC0_TIOA2                        (_UL_(1) << 20)

#define PIN_PA20D_TC0_TIOB0                        _L_(20)      /**< TC0 signal: TIOB0 on PA20 mux D*/
#define MUX_PA20D_TC0_TIOB0                        _L_(3)       /**< TC0 signal line function value: TIOB0 */
#define PIO_PA20D_TC0_TIOB0                        (_UL_(1) << 20)

#define PIN_PA28A_TC0_TIOB1                        _L_(28)      /**< TC0 signal: TIOB1 on PA28 mux A*/
#define MUX_PA28A_TC0_TIOB1                        _L_(0)       /**< TC0 signal line function value: TIOB1 */
#define PIO_PA28A_TC0_TIOB1                        (_UL_(1) << 28)

#define PIN_PC4C_TC0_TIOB1                         _L_(68)      /**< TC0 signal: TIOB1 on PC4 mux C*/
#define MUX_PC4C_TC0_TIOB1                         _L_(2)       /**< TC0 signal line function value: TIOB1 */
#define PIO_PC4C_TC0_TIOB1                         (_UL_(1) << 4)

#define PIN_PD12A_TC0_TIOB1                        _L_(108)     /**< TC0 signal: TIOB1 on PD12 mux A*/
#define MUX_PD12A_TC0_TIOB1                        _L_(0)       /**< TC0 signal line function value: TIOB1 */
#define PIO_PD12A_TC0_TIOB1                        (_UL_(1) << 12)

#define PIN_PB7A_TC0_TIOB2                         _L_(39)      /**< TC0 signal: TIOB2 on PB7 mux A*/
#define MUX_PB7A_TC0_TIOB2                         _L_(0)       /**< TC0 signal line function value: TIOB2 */
#define PIO_PB7A_TC0_TIOB2                         (_UL_(1) << 7)

#define PIN_PB23D_TC0_TIOB2                        _L_(55)      /**< TC0 signal: TIOB2 on PB23 mux D*/
#define MUX_PB23D_TC0_TIOB2                        _L_(3)       /**< TC0 signal line function value: TIOB2 */
#define PIO_PB23D_TC0_TIOB2                        (_UL_(1) << 23)

#define PIN_PD21A_TC0_TIOB2                        _L_(117)     /**< TC0 signal: TIOB2 on PD21 mux A*/
#define MUX_PD21A_TC0_TIOB2                        _L_(0)       /**< TC0 signal line function value: TIOB2 */
#define PIO_PD21A_TC0_TIOB2                        (_UL_(1) << 21)

/* ========== PIO definition for TC1 peripheral ========== */
#define PIN_PB8A_TC1_TCLK3                         _L_(40)      /**< TC1 signal: TCLK3 on PB8 mux A*/
#define MUX_PB8A_TC1_TCLK3                         _L_(0)       /**< TC1 signal line function value: TCLK3 */
#define PIO_PB8A_TC1_TCLK3                         (_UL_(1) << 8)

#define PIN_PB21D_TC1_TCLK3                        _L_(53)      /**< TC1 signal: TCLK3 on PB21 mux D*/
#define MUX_PB21D_TC1_TCLK3                        _L_(3)       /**< TC1 signal line function value: TCLK3 */
#define PIO_PB21D_TC1_TCLK3                        (_UL_(1) << 21)

#define PIN_PD31D_TC1_TCLK3                        _L_(127)     /**< TC1 signal: TCLK3 on PD31 mux D*/
#define MUX_PD31D_TC1_TCLK3                        _L_(3)       /**< TC1 signal line function value: TCLK3 */
#define PIO_PD31D_TC1_TCLK3                        (_UL_(1) << 31)

#define PIN_PA11D_TC1_TCLK4                        _L_(11)      /**< TC1 signal: TCLK4 on PA11 mux D*/
#define MUX_PA11D_TC1_TCLK4                        _L_(3)       /**< TC1 signal line function value: TCLK4 */
#define PIO_PA11D_TC1_TCLK4                        (_UL_(1) << 11)

#define PIN_PC11D_TC1_TCLK4                        _L_(75)      /**< TC1 signal: TCLK4 on PC11 mux D*/
#define MUX_PC11D_TC1_TCLK4                        _L_(3)       /**< TC1 signal line function value: TCLK4 */
#define PIO_PC11D_TC1_TCLK4                        (_UL_(1) << 11)

#define PIN_PA8D_TC1_TCLK5                         _L_(8)       /**< TC1 signal: TCLK5 on PA8 mux D*/
#define MUX_PA8D_TC1_TCLK5                         _L_(3)       /**< TC1 signal line function value: TCLK5 */
#define PIO_PA8D_TC1_TCLK5                         (_UL_(1) << 8)

#define PIN_PB30D_TC1_TCLK5                        _L_(62)      /**< TC1 signal: TCLK5 on PB30 mux D*/
#define MUX_PB30D_TC1_TCLK5                        _L_(3)       /**< TC1 signal line function value: TCLK5 */
#define PIO_PB30D_TC1_TCLK5                        (_UL_(1) << 30)

#define PIN_PB9A_TC1_TIOA3                         _L_(41)      /**< TC1 signal: TIOA3 on PB9 mux A*/
#define MUX_PB9A_TC1_TIOA3                         _L_(0)       /**< TC1 signal line function value: TIOA3 */
#define PIO_PB9A_TC1_TIOA3                         (_UL_(1) << 9)

#define PIN_PB19D_TC1_TIOA3                        _L_(51)      /**< TC1 signal: TIOA3 on PB19 mux D*/
#define MUX_PB19D_TC1_TIOA3                        _L_(3)       /**< TC1 signal line function value: TIOA3 */
#define PIO_PB19D_TC1_TIOA3                        (_UL_(1) << 19)

#define PIN_PD29D_TC1_TIOA3                        _L_(125)     /**< TC1 signal: TIOA3 on PD29 mux D*/
#define MUX_PD29D_TC1_TIOA3                        _L_(3)       /**< TC1 signal line function value: TIOA3 */
#define PIO_PD29D_TC1_TIOA3                        (_UL_(1) << 29)

#define PIN_PA9D_TC1_TIOA4                         _L_(9)       /**< TC1 signal: TIOA4 on PA9 mux D*/
#define MUX_PA9D_TC1_TIOA4                         _L_(3)       /**< TC1 signal line function value: TIOA4 */
#define PIO_PA9D_TC1_TIOA4                         (_UL_(1) << 9)

#define PIN_PC9D_TC1_TIOA4                         _L_(73)      /**< TC1 signal: TIOA4 on PC9 mux D*/
#define MUX_PC9D_TC1_TIOA4                         _L_(3)       /**< TC1 signal line function value: TIOA4 */
#define PIO_PC9D_TC1_TIOA4                         (_UL_(1) << 9)

#define PIN_PA6D_TC1_TIOA5                         _L_(6)       /**< TC1 signal: TIOA5 on PA6 mux D*/
#define MUX_PA6D_TC1_TIOA5                         _L_(3)       /**< TC1 signal line function value: TIOA5 */
#define PIO_PA6D_TC1_TIOA5                         (_UL_(1) << 6)

#define PIN_PB28D_TC1_TIOA5                        _L_(60)      /**< TC1 signal: TIOA5 on PB28 mux D*/
#define MUX_PB28D_TC1_TIOA5                        _L_(3)       /**< TC1 signal line function value: TIOA5 */
#define PIO_PB28D_TC1_TIOA5                        (_UL_(1) << 28)

#define PIN_PB10A_TC1_TIOB3                        _L_(42)      /**< TC1 signal: TIOB3 on PB10 mux A*/
#define MUX_PB10A_TC1_TIOB3                        _L_(0)       /**< TC1 signal line function value: TIOB3 */
#define PIO_PB10A_TC1_TIOB3                        (_UL_(1) << 10)

#define PIN_PB20D_TC1_TIOB3                        _L_(52)      /**< TC1 signal: TIOB3 on PB20 mux D*/
#define MUX_PB20D_TC1_TIOB3                        _L_(3)       /**< TC1 signal line function value: TIOB3 */
#define PIO_PB20D_TC1_TIOB3                        (_UL_(1) << 20)

#define PIN_PD30D_TC1_TIOB3                        _L_(126)     /**< TC1 signal: TIOB3 on PD30 mux D*/
#define MUX_PD30D_TC1_TIOB3                        _L_(3)       /**< TC1 signal line function value: TIOB3 */
#define PIO_PD30D_TC1_TIOB3                        (_UL_(1) << 30)

#define PIN_PA10D_TC1_TIOB4                        _L_(10)      /**< TC1 signal: TIOB4 on PA10 mux D*/
#define MUX_PA10D_TC1_TIOB4                        _L_(3)       /**< TC1 signal line function value: TIOB4 */
#define PIO_PA10D_TC1_TIOB4                        (_UL_(1) << 10)

#define PIN_PC10D_TC1_TIOB4                        _L_(74)      /**< TC1 signal: TIOB4 on PC10 mux D*/
#define MUX_PC10D_TC1_TIOB4                        _L_(3)       /**< TC1 signal line function value: TIOB4 */
#define PIO_PC10D_TC1_TIOB4                        (_UL_(1) << 10)

#define PIN_PA7D_TC1_TIOB5                         _L_(7)       /**< TC1 signal: TIOB5 on PA7 mux D*/
#define MUX_PA7D_TC1_TIOB5                         _L_(3)       /**< TC1 signal line function value: TIOB5 */
#define PIO_PA7D_TC1_TIOB5                         (_UL_(1) << 7)

#define PIN_PB29D_TC1_TIOB5                        _L_(61)      /**< TC1 signal: TIOB5 on PB29 mux D*/
#define MUX_PB29D_TC1_TIOB5                        _L_(3)       /**< TC1 signal line function value: TIOB5 */
#define PIO_PB29D_TC1_TIOB5                        (_UL_(1) << 29)

/* ========== PIO definition for TWIHS0 peripheral ========== */
#define PIN_PC0D_TWIHS0_TWCK0                      _L_(64)      /**< TWIHS0 signal: TWCK0 on PC0 mux D*/
#define MUX_PC0D_TWIHS0_TWCK0                      _L_(3)       /**< TWIHS0 signal line function value: TWCK0 */
#define PIO_PC0D_TWIHS0_TWCK0                      (_UL_(1) << 0)

#define PIN_PC28E_TWIHS0_TWCK0                     _L_(92)      /**< TWIHS0 signal: TWCK0 on PC28 mux E*/
#define MUX_PC28E_TWIHS0_TWCK0                     _L_(4)       /**< TWIHS0 signal line function value: TWCK0 */
#define PIO_PC28E_TWIHS0_TWCK0                     (_UL_(1) << 28)

#define PIN_PD22B_TWIHS0_TWCK0                     _L_(118)     /**< TWIHS0 signal: TWCK0 on PD22 mux B*/
#define MUX_PD22B_TWIHS0_TWCK0                     _L_(1)       /**< TWIHS0 signal line function value: TWCK0 */
#define PIO_PD22B_TWIHS0_TWCK0                     (_UL_(1) << 22)

#define PIN_PD30E_TWIHS0_TWCK0                     _L_(126)     /**< TWIHS0 signal: TWCK0 on PD30 mux E*/
#define MUX_PD30E_TWIHS0_TWCK0                     _L_(4)       /**< TWIHS0 signal line function value: TWCK0 */
#define PIO_PD30E_TWIHS0_TWCK0                     (_UL_(1) << 30)

#define PIN_PB31D_TWIHS0_TWD0                      _L_(63)      /**< TWIHS0 signal: TWD0 on PB31 mux D*/
#define MUX_PB31D_TWIHS0_TWD0                      _L_(3)       /**< TWIHS0 signal line function value: TWD0 */
#define PIO_PB31D_TWIHS0_TWD0                      (_UL_(1) << 31)

#define PIN_PC27E_TWIHS0_TWD0                      _L_(91)      /**< TWIHS0 signal: TWD0 on PC27 mux E*/
#define MUX_PC27E_TWIHS0_TWD0                      _L_(4)       /**< TWIHS0 signal line function value: TWD0 */
#define PIO_PC27E_TWIHS0_TWD0                      (_UL_(1) << 27)

#define PIN_PD21B_TWIHS0_TWD0                      _L_(117)     /**< TWIHS0 signal: TWD0 on PD21 mux B*/
#define MUX_PD21B_TWIHS0_TWD0                      _L_(1)       /**< TWIHS0 signal line function value: TWD0 */
#define PIO_PD21B_TWIHS0_TWD0                      (_UL_(1) << 21)

#define PIN_PD29E_TWIHS0_TWD0                      _L_(125)     /**< TWIHS0 signal: TWD0 on PD29 mux E*/
#define MUX_PD29E_TWIHS0_TWD0                      _L_(4)       /**< TWIHS0 signal line function value: TWD0 */
#define PIO_PD29E_TWIHS0_TWD0                      (_UL_(1) << 29)

/* ========== PIO definition for TWIHS1 peripheral ========== */
#define PIN_PC7C_TWIHS1_TWCK1                      _L_(71)      /**< TWIHS1 signal: TWCK1 on PC7 mux C*/
#define MUX_PC7C_TWIHS1_TWCK1                      _L_(2)       /**< TWIHS1 signal line function value: TWCK1 */
#define PIO_PC7C_TWIHS1_TWCK1                      (_UL_(1) << 7)

#define PIN_PD5A_TWIHS1_TWCK1                      _L_(101)     /**< TWIHS1 signal: TWCK1 on PD5 mux A*/
#define MUX_PD5A_TWIHS1_TWCK1                      _L_(0)       /**< TWIHS1 signal line function value: TWCK1 */
#define PIO_PD5A_TWIHS1_TWCK1                      (_UL_(1) << 5)

#define PIN_PD20B_TWIHS1_TWCK1                     _L_(116)     /**< TWIHS1 signal: TWCK1 on PD20 mux B*/
#define MUX_PD20B_TWIHS1_TWCK1                     _L_(1)       /**< TWIHS1 signal line function value: TWCK1 */
#define PIO_PD20B_TWIHS1_TWCK1                     (_UL_(1) << 20)

#define PIN_PC6C_TWIHS1_TWD1                       _L_(70)      /**< TWIHS1 signal: TWD1 on PC6 mux C*/
#define MUX_PC6C_TWIHS1_TWD1                       _L_(2)       /**< TWIHS1 signal line function value: TWD1 */
#define PIO_PC6C_TWIHS1_TWD1                       (_UL_(1) << 6)

#define PIN_PD4A_TWIHS1_TWD1                       _L_(100)     /**< TWIHS1 signal: TWD1 on PD4 mux A*/
#define MUX_PD4A_TWIHS1_TWD1                       _L_(0)       /**< TWIHS1 signal line function value: TWD1 */
#define PIO_PD4A_TWIHS1_TWD1                       (_UL_(1) << 4)

#define PIN_PD19B_TWIHS1_TWD1                      _L_(115)     /**< TWIHS1 signal: TWD1 on PD19 mux B*/
#define MUX_PD19B_TWIHS1_TWD1                      _L_(1)       /**< TWIHS1 signal line function value: TWD1 */
#define PIO_PD19B_TWIHS1_TWD1                      (_UL_(1) << 19)

/* ========== PIO definition for UART0 peripheral ========== */
#define PIN_PB26C_UART0_URXD0                      _L_(58)      /**< UART0 signal: URXD0 on PB26 mux C*/
#define MUX_PB26C_UART0_URXD0                      _L_(2)       /**< UART0 signal line function value: URXD0 */
#define PIO_PB26C_UART0_URXD0                      (_UL_(1) << 26)

#define PIN_PB27C_UART0_UTXD0                      _L_(59)      /**< UART0 signal: UTXD0 on PB27 mux C*/
#define MUX_PB27C_UART0_UTXD0                      _L_(2)       /**< UART0 signal line function value: UTXD0 */
#define PIO_PB27C_UART0_UTXD0                      (_UL_(1) << 27)

/* ========== PIO definition for UART1 peripheral ========== */
#define PIN_PC7E_UART1_URXD1                       _L_(71)      /**< UART1 signal: URXD1 on PC7 mux E*/
#define MUX_PC7E_UART1_URXD1                       _L_(4)       /**< UART1 signal line function value: URXD1 */
#define PIO_PC7E_UART1_URXD1                       (_UL_(1) << 7)

#define PIN_PD2A_UART1_URXD1                       _L_(98)      /**< UART1 signal: URXD1 on PD2 mux A*/
#define MUX_PD2A_UART1_URXD1                       _L_(0)       /**< UART1 signal line function value: URXD1 */
#define PIO_PD2A_UART1_URXD1                       (_UL_(1) << 2)

#define PIN_PC8E_UART1_UTXD1                       _L_(72)      /**< UART1 signal: UTXD1 on PC8 mux E*/
#define MUX_PC8E_UART1_UTXD1                       _L_(4)       /**< UART1 signal line function value: UTXD1 */
#define PIO_PC8E_UART1_UTXD1                       (_UL_(1) << 8)

#define PIN_PD3A_UART1_UTXD1                       _L_(99)      /**< UART1 signal: UTXD1 on PD3 mux A*/
#define MUX_PD3A_UART1_UTXD1                       _L_(0)       /**< UART1 signal line function value: UTXD1 */
#define PIO_PD3A_UART1_UTXD1                       (_UL_(1) << 3)

/* ========== PIO definition for UART2 peripheral ========== */
#define PIN_PD4B_UART2_URXD2                       _L_(100)     /**< UART2 signal: URXD2 on PD4 mux B*/
#define MUX_PD4B_UART2_URXD2                       _L_(1)       /**< UART2 signal line function value: URXD2 */
#define PIO_PD4B_UART2_URXD2                       (_UL_(1) << 4)

#define PIN_PD19C_UART2_URXD2                      _L_(115)     /**< UART2 signal: URXD2 on PD19 mux C*/
#define MUX_PD19C_UART2_URXD2                      _L_(2)       /**< UART2 signal line function value: URXD2 */
#define PIO_PD19C_UART2_URXD2                      (_UL_(1) << 19)

#define PIN_PD23A_UART2_URXD2                      _L_(119)     /**< UART2 signal: URXD2 on PD23 mux A*/
#define MUX_PD23A_UART2_URXD2                      _L_(0)       /**< UART2 signal line function value: URXD2 */
#define PIO_PD23A_UART2_URXD2                      (_UL_(1) << 23)

#define PIN_PD5B_UART2_UTXD2                       _L_(101)     /**< UART2 signal: UTXD2 on PD5 mux B*/
#define MUX_PD5B_UART2_UTXD2                       _L_(1)       /**< UART2 signal line function value: UTXD2 */
#define PIO_PD5B_UART2_UTXD2                       (_UL_(1) << 5)

#define PIN_PD20C_UART2_UTXD2                      _L_(116)     /**< UART2 signal: UTXD2 on PD20 mux C*/
#define MUX_PD20C_UART2_UTXD2                      _L_(2)       /**< UART2 signal line function value: UTXD2 */
#define PIO_PD20C_UART2_UTXD2                      (_UL_(1) << 20)

#define PIN_PD24A_UART2_UTXD2                      _L_(120)     /**< UART2 signal: UTXD2 on PD24 mux A*/
#define MUX_PD24A_UART2_UTXD2                      _L_(0)       /**< UART2 signal line function value: UTXD2 */
#define PIO_PD24A_UART2_UTXD2                      (_UL_(1) << 24)

/* ========== PIO definition for UART3 peripheral ========== */
#define PIN_PB11C_UART3_URXD3                      _L_(43)      /**< UART3 signal: URXD3 on PB11 mux C*/
#define MUX_PB11C_UART3_URXD3                      _L_(2)       /**< UART3 signal line function value: URXD3 */
#define PIO_PB11C_UART3_URXD3                      (_UL_(1) << 11)

#define PIN_PC12D_UART3_URXD3                      _L_(76)      /**< UART3 signal: URXD3 on PC12 mux D*/
#define MUX_PC12D_UART3_URXD3                      _L_(3)       /**< UART3 signal line function value: URXD3 */
#define PIO_PC12D_UART3_URXD3                      (_UL_(1) << 12)

#define PIN_PC31C_UART3_URXD3                      _L_(95)      /**< UART3 signal: URXD3 on PC31 mux C*/
#define MUX_PC31C_UART3_URXD3                      _L_(2)       /**< UART3 signal line function value: URXD3 */
#define PIO_PC31C_UART3_URXD3                      (_UL_(1) << 31)

#define PIN_PB12C_UART3_UTXD3                      _L_(44)      /**< UART3 signal: UTXD3 on PB12 mux C*/
#define MUX_PB12C_UART3_UTXD3                      _L_(2)       /**< UART3 signal line function value: UTXD3 */
#define PIO_PB12C_UART3_UTXD3                      (_UL_(1) << 12)

#define PIN_PC13D_UART3_UTXD3                      _L_(77)      /**< UART3 signal: UTXD3 on PC13 mux D*/
#define MUX_PC13D_UART3_UTXD3                      _L_(3)       /**< UART3 signal line function value: UTXD3 */
#define PIO_PC13D_UART3_UTXD3                      (_UL_(1) << 13)

#define PIN_PD0C_UART3_UTXD3                       _L_(96)      /**< UART3 signal: UTXD3 on PD0 mux C*/
#define MUX_PD0C_UART3_UTXD3                       _L_(2)       /**< UART3 signal line function value: UTXD3 */
#define PIO_PD0C_UART3_UTXD3                       (_UL_(1) << 0)

/* ========== PIO definition for UART4 peripheral ========== */
#define PIN_PB3A_UART4_URXD4                       _L_(35)      /**< UART4 signal: URXD4 on PB3 mux A*/
#define MUX_PB3A_UART4_URXD4                       _L_(0)       /**< UART4 signal line function value: URXD4 */
#define PIO_PB3A_UART4_URXD4                       (_UL_(1) << 3)

#define PIN_PB4A_UART4_UTXD4                       _L_(36)      /**< UART4 signal: UTXD4 on PB4 mux A*/
#define MUX_PB4A_UART4_UTXD4                       _L_(0)       /**< UART4 signal line function value: UTXD4 */
#define PIO_PB4A_UART4_UTXD4                       (_UL_(1) << 4)


#endif /* _SAMA5D26_PIO_H_ */
