/*
 * Peripheral I/O description for PIC32CX2051MTG64
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

/* file generated from device description version 2023-01-20T11:01:00Z */
#ifndef _PIC32CX2051MTG64_GPIO_H_
#define _PIC32CX2051MTG64_GPIO_H_

/* ========== Peripheral I/O pin numbers ========== */
#define PIN_PA4                     (    4)  /**< Pin Number for PA4 */
#define PIN_PA5                     (    5)  /**< Pin Number for PA5 */
#define PIN_PA6                     (    6)  /**< Pin Number for PA6 */
#define PIN_PA7                     (    7)  /**< Pin Number for PA7 */
#define PIN_PA8                     (    8)  /**< Pin Number for PA8 */
#define PIN_PA9                     (    9)  /**< Pin Number for PA9 */
#define PIN_PA12                    (   12)  /**< Pin Number for PA12 */
#define PIN_PA13                    (   13)  /**< Pin Number for PA13 */
#define PIN_PA24                    (   24)  /**< Pin Number for PA24 */
#define PIN_PA25                    (   25)  /**< Pin Number for PA25 */
#define PIN_PA29                    (   29)  /**< Pin Number for PA29 */
#define PIN_PB0                     (   32)  /**< Pin Number for PB0 */
#define PIN_PB2                     (   34)  /**< Pin Number for PB2 */
#define PIN_PB3                     (   35)  /**< Pin Number for PB3 */
#define PIN_PB4                     (   36)  /**< Pin Number for PB4 */
#define PIN_PB9                     (   41)  /**< Pin Number for PB9 */
#define PIN_PB10                    (   42)  /**< Pin Number for PB10 */
#define PIN_PB11                    (   43)  /**< Pin Number for PB11 */
#define PIN_PB12                    (   44)  /**< Pin Number for PB12 */
#define PIN_PB24                    (   56)  /**< Pin Number for PB24 */
#define PIN_PB25                    (   57)  /**< Pin Number for PB25 */
#define PIN_PB26                    (   58)  /**< Pin Number for PB26 */
#define PIN_PC0                     (   64)  /**< Pin Number for PC0 */
#define PIN_PC2                     (   66)  /**< Pin Number for PC2 */
#define PIN_PC3                     (   67)  /**< Pin Number for PC3 */
#define PIN_PC5                     (   69)  /**< Pin Number for PC5 */
#define PIN_PC10                    (   74)  /**< Pin Number for PC10 */
#define PIN_PC11                    (   75)  /**< Pin Number for PC11 */
#define PIN_PC12                    (   76)  /**< Pin Number for PC12 */
#define PIN_PC13                    (   77)  /**< Pin Number for PC13 */
#define PIN_PC14                    (   78)  /**< Pin Number for PC14 */
#define PIN_PC15                    (   79)  /**< Pin Number for PC15 */
#define PIN_PC18                    (   82)  /**< Pin Number for PC18 */
#define PIN_PC19                    (   83)  /**< Pin Number for PC19 */
#define PIN_PC20                    (   84)  /**< Pin Number for PC20 */
#define PIN_PC21                    (   85)  /**< Pin Number for PC21 */
#define PIN_PC22                    (   86)  /**< Pin Number for PC22 */
#define PIN_PD17                    (  113)  /**< Pin Number for PD17 */
#define PIN_PD18                    (  114)  /**< Pin Number for PD18 */
#define PIN_PD19                    (  115)  /**< Pin Number for PD19 */

/* ========== Peripheral I/O masks ========== */
#define PIO_PA4                     (_UINT32_(1) << 4) /**< PIO mask for PA4 */
#define PIO_PA5                     (_UINT32_(1) << 5) /**< PIO mask for PA5 */
#define PIO_PA6                     (_UINT32_(1) << 6) /**< PIO mask for PA6 */
#define PIO_PA7                     (_UINT32_(1) << 7) /**< PIO mask for PA7 */
#define PIO_PA8                     (_UINT32_(1) << 8) /**< PIO mask for PA8 */
#define PIO_PA9                     (_UINT32_(1) << 9) /**< PIO mask for PA9 */
#define PIO_PA12                    (_UINT32_(1) << 12) /**< PIO mask for PA12 */
#define PIO_PA13                    (_UINT32_(1) << 13) /**< PIO mask for PA13 */
#define PIO_PA24                    (_UINT32_(1) << 24) /**< PIO mask for PA24 */
#define PIO_PA25                    (_UINT32_(1) << 25) /**< PIO mask for PA25 */
#define PIO_PA29                    (_UINT32_(1) << 29) /**< PIO mask for PA29 */
#define PIO_PB0                     (_UINT32_(1) << 0) /**< PIO mask for PB0 */
#define PIO_PB2                     (_UINT32_(1) << 2) /**< PIO mask for PB2 */
#define PIO_PB3                     (_UINT32_(1) << 3) /**< PIO mask for PB3 */
#define PIO_PB4                     (_UINT32_(1) << 4) /**< PIO mask for PB4 */
#define PIO_PB9                     (_UINT32_(1) << 9) /**< PIO mask for PB9 */
#define PIO_PB10                    (_UINT32_(1) << 10) /**< PIO mask for PB10 */
#define PIO_PB11                    (_UINT32_(1) << 11) /**< PIO mask for PB11 */
#define PIO_PB12                    (_UINT32_(1) << 12) /**< PIO mask for PB12 */
#define PIO_PB24                    (_UINT32_(1) << 24) /**< PIO mask for PB24 */
#define PIO_PB25                    (_UINT32_(1) << 25) /**< PIO mask for PB25 */
#define PIO_PB26                    (_UINT32_(1) << 26) /**< PIO mask for PB26 */
#define PIO_PC0                     (_UINT32_(1) << 0) /**< PIO mask for PC0 */
#define PIO_PC2                     (_UINT32_(1) << 2) /**< PIO mask for PC2 */
#define PIO_PC3                     (_UINT32_(1) << 3) /**< PIO mask for PC3 */
#define PIO_PC5                     (_UINT32_(1) << 5) /**< PIO mask for PC5 */
#define PIO_PC10                    (_UINT32_(1) << 10) /**< PIO mask for PC10 */
#define PIO_PC11                    (_UINT32_(1) << 11) /**< PIO mask for PC11 */
#define PIO_PC12                    (_UINT32_(1) << 12) /**< PIO mask for PC12 */
#define PIO_PC13                    (_UINT32_(1) << 13) /**< PIO mask for PC13 */
#define PIO_PC14                    (_UINT32_(1) << 14) /**< PIO mask for PC14 */
#define PIO_PC15                    (_UINT32_(1) << 15) /**< PIO mask for PC15 */
#define PIO_PC18                    (_UINT32_(1) << 18) /**< PIO mask for PC18 */
#define PIO_PC19                    (_UINT32_(1) << 19) /**< PIO mask for PC19 */
#define PIO_PC20                    (_UINT32_(1) << 20) /**< PIO mask for PC20 */
#define PIO_PC21                    (_UINT32_(1) << 21) /**< PIO mask for PC21 */
#define PIO_PC22                    (_UINT32_(1) << 22) /**< PIO mask for PC22 */
#define PIO_PD17                    (_UINT32_(1) << 17) /**< PIO mask for PD17 */
#define PIO_PD18                    (_UINT32_(1) << 18) /**< PIO mask for PD18 */
#define PIO_PD19                    (_UINT32_(1) << 19) /**< PIO mask for PD19 */

/* ========== PIO definition for ACC peripheral ========== */
#define PIN_PB0X1_ACC_INN0                         _UINT32_(32) /**< ACC signal: ACC_INN0 on PB0 mux X1 */
#define PIO_PB0X1_ACC_INN0                         (_UINT32_(1) << 0) /**< ACC signal: ACC_INN0 */
#define PIN_PA29X1_ACC_INP0                        _UINT32_(29) /**< ACC signal: ACC_INP0 on PA29 mux X1 */
#define PIO_PA29X1_ACC_INP0                        (_UINT32_(1) << 29) /**< ACC signal: ACC_INP0 */
#define PIN_PA29X1_ACC_AD0                         _UINT32_(29) /**< ACC signal: ACC_AD0 on PA29 mux X1 */
#define PIO_PA29X1_ACC_AD0                         (_UINT32_(1) << 29) /**< ACC signal: ACC_AD0 */
#define PIN_PB0X1_ACC_AD3                          _UINT32_(32) /**< ACC signal: ACC_AD3 on PB0 mux X1 */
#define PIO_PB0X1_ACC_AD3                          (_UINT32_(1) << 0) /**< ACC signal: ACC_AD3 */
#define PIN_PA29X1_ACC_XIN                         _UINT32_(29) /**< ACC signal: ACC_XIN on PA29 mux X1 */
#define PIO_PA29X1_ACC_XIN                         (_UINT32_(1) << 29) /**< ACC signal: ACC_XIN */
#define PIN_PB0X1_ACC_XOUT                         _UINT32_(32) /**< ACC signal: ACC_XOUT on PB0 mux X1 */
#define PIO_PB0X1_ACC_XOUT                         (_UINT32_(1) << 0) /**< ACC signal: ACC_XOUT */
/* ========== PIO definition for ADC peripheral ========== */
#define PIN_PB0X1_ADC_ACC_INN0                     _UINT32_(32) /**< ADC signal: ADC_ACC_INN0 on PB0 mux X1 */
#define PIO_PB0X1_ADC_ACC_INN0                     (_UINT32_(1) << 0) /**< ADC signal: ADC_ACC_INN0 */
#define PIN_PA29X1_ADC_ACC_INP0                    _UINT32_(29) /**< ADC signal: ADC_ACC_INP0 on PA29 mux X1 */
#define PIO_PA29X1_ADC_ACC_INP0                    (_UINT32_(1) << 29) /**< ADC signal: ADC_ACC_INP0 */
#define PIN_PA29X1_ADC_AD0                         _UINT32_(29) /**< ADC signal: ADC_AD0 on PA29 mux X1 */
#define PIO_PA29X1_ADC_AD0                         (_UINT32_(1) << 29) /**< ADC signal: ADC_AD0 */
#define PIN_PB0X1_ADC_AD3                          _UINT32_(32) /**< ADC signal: ADC_AD3 on PB0 mux X1 */
#define PIO_PB0X1_ADC_AD3                          (_UINT32_(1) << 0) /**< ADC signal: ADC_AD3 */
#define PIN_PA29X1_ADC_XIN                         _UINT32_(29) /**< ADC signal: ADC_XIN on PA29 mux X1 */
#define PIO_PA29X1_ADC_XIN                         (_UINT32_(1) << 29) /**< ADC signal: ADC_XIN */
#define PIN_PB0X1_ADC_XOUT                         _UINT32_(32) /**< ADC signal: ADC_XOUT on PB0 mux X1 */
#define PIO_PB0X1_ADC_XOUT                         (_UINT32_(1) << 0) /**< ADC signal: ADC_XOUT */
/* ========== PIO definition for FLEXCOM0 peripheral ========== */
#define PIN_PA4A_FLEXCOM0_IO0                      _UINT32_(4)  /**< FLEXCOM0 signal: FLEXCOM0_IO0 on PA4 mux A */
#define MUX_PA4A_FLEXCOM0_IO0                      _UINT32_(0)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO0 */
#define PIO_PA4A_FLEXCOM0_IO0                      (_UINT32_(1) << 4) /**< FLEXCOM0 signal: FLEXCOM0_IO0 */
#define PIN_PA5A_FLEXCOM0_IO1                      _UINT32_(5)  /**< FLEXCOM0 signal: FLEXCOM0_IO1 on PA5 mux A */
#define MUX_PA5A_FLEXCOM0_IO1                      _UINT32_(0)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO1 */
#define PIO_PA5A_FLEXCOM0_IO1                      (_UINT32_(1) << 5) /**< FLEXCOM0 signal: FLEXCOM0_IO1 */
#define PIN_PA6A_FLEXCOM0_IO2                      _UINT32_(6)  /**< FLEXCOM0 signal: FLEXCOM0_IO2 on PA6 mux A */
#define MUX_PA6A_FLEXCOM0_IO2                      _UINT32_(0)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO2 */
#define PIO_PA6A_FLEXCOM0_IO2                      (_UINT32_(1) << 6) /**< FLEXCOM0 signal: FLEXCOM0_IO2 */
#define PIN_PA7A_FLEXCOM0_IO3                      _UINT32_(7)  /**< FLEXCOM0 signal: FLEXCOM0_IO3 on PA7 mux A */
#define MUX_PA7A_FLEXCOM0_IO3                      _UINT32_(0)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO3 */
#define PIO_PA7A_FLEXCOM0_IO3                      (_UINT32_(1) << 7) /**< FLEXCOM0 signal: FLEXCOM0_IO3 */
#define PIN_PA6B_FLEXCOM0_IO4                      _UINT32_(6)  /**< FLEXCOM0 signal: FLEXCOM0_IO4 on PA6 mux B */
#define MUX_PA6B_FLEXCOM0_IO4                      _UINT32_(1)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO4 */
#define PIO_PA6B_FLEXCOM0_IO4                      (_UINT32_(1) << 6) /**< FLEXCOM0 signal: FLEXCOM0_IO4 */
#define PIN_PA29B_FLEXCOM0_IO4                     _UINT32_(29) /**< FLEXCOM0 signal: FLEXCOM0_IO4 on PA29 mux B */
#define MUX_PA29B_FLEXCOM0_IO4                     _UINT32_(1)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO4 */
#define PIO_PA29B_FLEXCOM0_IO4                     (_UINT32_(1) << 29) /**< FLEXCOM0 signal: FLEXCOM0_IO4 */
/* ========== PIO definition for FLEXCOM1 peripheral ========== */
#define PIN_PA8A_FLEXCOM1_IO0                      _UINT32_(8)  /**< FLEXCOM1 signal: FLEXCOM1_IO0 on PA8 mux A */
#define MUX_PA8A_FLEXCOM1_IO0                      _UINT32_(0)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO0 */
#define PIO_PA8A_FLEXCOM1_IO0                      (_UINT32_(1) << 8) /**< FLEXCOM1 signal: FLEXCOM1_IO0 */
#define PIN_PC2B_FLEXCOM1_IO0                      _UINT32_(66) /**< FLEXCOM1 signal: FLEXCOM1_IO0 on PC2 mux B */
#define MUX_PC2B_FLEXCOM1_IO0                      _UINT32_(1)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO0 */
#define PIO_PC2B_FLEXCOM1_IO0                      (_UINT32_(1) << 2) /**< FLEXCOM1 signal: FLEXCOM1_IO0 */
#define PIN_PA9A_FLEXCOM1_IO1                      _UINT32_(9)  /**< FLEXCOM1 signal: FLEXCOM1_IO1 on PA9 mux A */
#define MUX_PA9A_FLEXCOM1_IO1                      _UINT32_(0)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO1 */
#define PIO_PA9A_FLEXCOM1_IO1                      (_UINT32_(1) << 9) /**< FLEXCOM1 signal: FLEXCOM1_IO1 */
#define PIN_PC3B_FLEXCOM1_IO1                      _UINT32_(67) /**< FLEXCOM1 signal: FLEXCOM1_IO1 on PC3 mux B */
#define MUX_PC3B_FLEXCOM1_IO1                      _UINT32_(1)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO1 */
#define PIO_PC3B_FLEXCOM1_IO1                      (_UINT32_(1) << 3) /**< FLEXCOM1 signal: FLEXCOM1_IO1 */
#define PIN_PA29C_FLEXCOM1_IO4                     _UINT32_(29) /**< FLEXCOM1 signal: FLEXCOM1_IO4 on PA29 mux C */
#define MUX_PA29C_FLEXCOM1_IO4                     _UINT32_(2)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO4 */
#define PIO_PA29C_FLEXCOM1_IO4                     (_UINT32_(1) << 29) /**< FLEXCOM1 signal: FLEXCOM1_IO4 */
/* ========== PIO definition for FLEXCOM2 peripheral ========== */
#define PIN_PA12A_FLEXCOM2_IO0                     _UINT32_(12) /**< FLEXCOM2 signal: FLEXCOM2_IO0 on PA12 mux A */
#define MUX_PA12A_FLEXCOM2_IO0                     _UINT32_(0)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO0 */
#define PIO_PA12A_FLEXCOM2_IO0                     (_UINT32_(1) << 12) /**< FLEXCOM2 signal: FLEXCOM2_IO0 */
#define PIN_PA13A_FLEXCOM2_IO1                     _UINT32_(13) /**< FLEXCOM2 signal: FLEXCOM2_IO1 on PA13 mux A */
#define MUX_PA13A_FLEXCOM2_IO1                     _UINT32_(0)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO1 */
#define PIO_PA13A_FLEXCOM2_IO1                     (_UINT32_(1) << 13) /**< FLEXCOM2 signal: FLEXCOM2_IO1 */
#define PIN_PA29D_FLEXCOM2_IO4                     _UINT32_(29) /**< FLEXCOM2 signal: FLEXCOM2_IO4 on PA29 mux D */
#define MUX_PA29D_FLEXCOM2_IO4                     _UINT32_(3)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO4 */
#define PIO_PA29D_FLEXCOM2_IO4                     (_UINT32_(1) << 29) /**< FLEXCOM2 signal: FLEXCOM2_IO4 */
/* ========== PIO definition for FLEXCOM3 peripheral ========== */
#define PIN_PB9B_FLEXCOM3_IO0                      _UINT32_(41) /**< FLEXCOM3 signal: FLEXCOM3_IO0 on PB9 mux B */
#define MUX_PB9B_FLEXCOM3_IO0                      _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO0 */
#define PIO_PB9B_FLEXCOM3_IO0                      (_UINT32_(1) << 9) /**< FLEXCOM3 signal: FLEXCOM3_IO0 */
#define PIN_PB10B_FLEXCOM3_IO1                     _UINT32_(42) /**< FLEXCOM3 signal: FLEXCOM3_IO1 on PB10 mux B */
#define MUX_PB10B_FLEXCOM3_IO1                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO1 */
#define PIO_PB10B_FLEXCOM3_IO1                     (_UINT32_(1) << 10) /**< FLEXCOM3 signal: FLEXCOM3_IO1 */
#define PIN_PB11B_FLEXCOM3_IO2                     _UINT32_(43) /**< FLEXCOM3 signal: FLEXCOM3_IO2 on PB11 mux B */
#define MUX_PB11B_FLEXCOM3_IO2                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO2 */
#define PIO_PB11B_FLEXCOM3_IO2                     (_UINT32_(1) << 11) /**< FLEXCOM3 signal: FLEXCOM3_IO2 */
#define PIN_PB12B_FLEXCOM3_IO3                     _UINT32_(44) /**< FLEXCOM3 signal: FLEXCOM3_IO3 on PB12 mux B */
#define MUX_PB12B_FLEXCOM3_IO3                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO3 */
#define PIO_PB12B_FLEXCOM3_IO3                     (_UINT32_(1) << 12) /**< FLEXCOM3 signal: FLEXCOM3_IO3 */
#define PIN_PB0B_FLEXCOM3_IO4                      _UINT32_(32) /**< FLEXCOM3 signal: FLEXCOM3_IO4 on PB0 mux B */
#define MUX_PB0B_FLEXCOM3_IO4                      _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO4 */
#define PIO_PB0B_FLEXCOM3_IO4                      (_UINT32_(1) << 0) /**< FLEXCOM3 signal: FLEXCOM3_IO4 */
#define PIN_PB11C_FLEXCOM3_IO4                     _UINT32_(43) /**< FLEXCOM3 signal: FLEXCOM3_IO4 on PB11 mux C */
#define MUX_PB11C_FLEXCOM3_IO4                     _UINT32_(2)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO4 */
#define PIO_PB11C_FLEXCOM3_IO4                     (_UINT32_(1) << 11) /**< FLEXCOM3 signal: FLEXCOM3_IO4 */
/* ========== PIO definition for FLEXCOM4 peripheral ========== */
#define PIN_PB24B_FLEXCOM4_IO0                     _UINT32_(56) /**< FLEXCOM4 signal: FLEXCOM4_IO0 on PB24 mux B */
#define MUX_PB24B_FLEXCOM4_IO0                     _UINT32_(1)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO0 */
#define PIO_PB24B_FLEXCOM4_IO0                     (_UINT32_(1) << 24) /**< FLEXCOM4 signal: FLEXCOM4_IO0 */
#define PIN_PB25B_FLEXCOM4_IO1                     _UINT32_(57) /**< FLEXCOM4 signal: FLEXCOM4_IO1 on PB25 mux B */
#define MUX_PB25B_FLEXCOM4_IO1                     _UINT32_(1)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO1 */
#define PIO_PB25B_FLEXCOM4_IO1                     (_UINT32_(1) << 25) /**< FLEXCOM4 signal: FLEXCOM4_IO1 */
#define PIN_PB26B_FLEXCOM4_IO2                     _UINT32_(58) /**< FLEXCOM4 signal: FLEXCOM4_IO2 on PB26 mux B */
#define MUX_PB26B_FLEXCOM4_IO2                     _UINT32_(1)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO2 */
#define PIO_PB26B_FLEXCOM4_IO2                     (_UINT32_(1) << 26) /**< FLEXCOM4 signal: FLEXCOM4_IO2 */
#define PIN_PC0B_FLEXCOM4_IO3                      _UINT32_(64) /**< FLEXCOM4 signal: FLEXCOM4_IO3 on PC0 mux B */
#define MUX_PC0B_FLEXCOM4_IO3                      _UINT32_(1)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO3 */
#define PIO_PC0B_FLEXCOM4_IO3                      (_UINT32_(1) << 0) /**< FLEXCOM4 signal: FLEXCOM4_IO3 */
#define PIN_PB26C_FLEXCOM4_IO4                     _UINT32_(58) /**< FLEXCOM4 signal: FLEXCOM4_IO4 on PB26 mux C */
#define MUX_PB26C_FLEXCOM4_IO4                     _UINT32_(2)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO4 */
#define PIO_PB26C_FLEXCOM4_IO4                     (_UINT32_(1) << 26) /**< FLEXCOM4 signal: FLEXCOM4_IO4 */
/* ========== PIO definition for FLEXCOM5 peripheral ========== */
#define PIN_PA24B_FLEXCOM5_IO0                     _UINT32_(24) /**< FLEXCOM5 signal: FLEXCOM5_IO0 on PA24 mux B */
#define MUX_PA24B_FLEXCOM5_IO0                     _UINT32_(1)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO0 */
#define PIO_PA24B_FLEXCOM5_IO0                     (_UINT32_(1) << 24) /**< FLEXCOM5 signal: FLEXCOM5_IO0 */
/* ========== PIO definition for FLEXCOM6 peripheral ========== */
#define PIN_PA25B_FLEXCOM6_IO0                     _UINT32_(25) /**< FLEXCOM6 signal: FLEXCOM6_IO0 on PA25 mux B */
#define MUX_PA25B_FLEXCOM6_IO0                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO0 */
#define PIO_PA25B_FLEXCOM6_IO0                     (_UINT32_(1) << 25) /**< FLEXCOM6 signal: FLEXCOM6_IO0 */
#define PIN_PC18A_FLEXCOM6_IO2                     _UINT32_(82) /**< FLEXCOM6 signal: FLEXCOM6_IO2 on PC18 mux A */
#define MUX_PC18A_FLEXCOM6_IO2                     _UINT32_(0)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO2 */
#define PIO_PC18A_FLEXCOM6_IO2                     (_UINT32_(1) << 18) /**< FLEXCOM6 signal: FLEXCOM6_IO2 */
#define PIN_PC19A_FLEXCOM6_IO3                     _UINT32_(83) /**< FLEXCOM6 signal: FLEXCOM6_IO3 on PC19 mux A */
#define MUX_PC19A_FLEXCOM6_IO3                     _UINT32_(0)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO3 */
#define PIO_PC19A_FLEXCOM6_IO3                     (_UINT32_(1) << 19) /**< FLEXCOM6 signal: FLEXCOM6_IO3 */
#define PIN_PC18B_FLEXCOM6_IO4                     _UINT32_(82) /**< FLEXCOM6 signal: FLEXCOM6_IO4 on PC18 mux B */
#define MUX_PC18B_FLEXCOM6_IO4                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO4 */
#define PIO_PC18B_FLEXCOM6_IO4                     (_UINT32_(1) << 18) /**< FLEXCOM6 signal: FLEXCOM6_IO4 */
/* ========== PIO definition for FLEXCOM7 peripheral ========== */
#define PIN_PB4B_FLEXCOM7_IO0                      _UINT32_(36) /**< FLEXCOM7 signal: FLEXCOM7_IO0 on PB4 mux B */
#define MUX_PB4B_FLEXCOM7_IO0                      _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO0 */
#define PIO_PB4B_FLEXCOM7_IO0                      (_UINT32_(1) << 4) /**< FLEXCOM7 signal: FLEXCOM7_IO0 */
#define PIN_PC13B_FLEXCOM7_IO0                     _UINT32_(77) /**< FLEXCOM7 signal: FLEXCOM7_IO0 on PC13 mux B */
#define MUX_PC13B_FLEXCOM7_IO0                     _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO0 */
#define PIO_PC13B_FLEXCOM7_IO0                     (_UINT32_(1) << 13) /**< FLEXCOM7 signal: FLEXCOM7_IO0 */
#define PIN_PC21A_FLEXCOM7_IO0                     _UINT32_(85) /**< FLEXCOM7 signal: FLEXCOM7_IO0 on PC21 mux A */
#define MUX_PC21A_FLEXCOM7_IO0                     _UINT32_(0)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO0 */
#define PIO_PC21A_FLEXCOM7_IO0                     (_UINT32_(1) << 21) /**< FLEXCOM7 signal: FLEXCOM7_IO0 */
#define PIN_PB3B_FLEXCOM7_IO1                      _UINT32_(35) /**< FLEXCOM7 signal: FLEXCOM7_IO1 on PB3 mux B */
#define MUX_PB3B_FLEXCOM7_IO1                      _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO1 */
#define PIO_PB3B_FLEXCOM7_IO1                      (_UINT32_(1) << 3) /**< FLEXCOM7 signal: FLEXCOM7_IO1 */
#define PIN_PC12B_FLEXCOM7_IO1                     _UINT32_(76) /**< FLEXCOM7 signal: FLEXCOM7_IO1 on PC12 mux B */
#define MUX_PC12B_FLEXCOM7_IO1                     _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO1 */
#define PIO_PC12B_FLEXCOM7_IO1                     (_UINT32_(1) << 12) /**< FLEXCOM7 signal: FLEXCOM7_IO1 */
#define PIN_PC20A_FLEXCOM7_IO1                     _UINT32_(84) /**< FLEXCOM7 signal: FLEXCOM7_IO1 on PC20 mux A */
#define MUX_PC20A_FLEXCOM7_IO1                     _UINT32_(0)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO1 */
#define PIO_PC20A_FLEXCOM7_IO1                     (_UINT32_(1) << 20) /**< FLEXCOM7 signal: FLEXCOM7_IO1 */
#define PIN_PB2B_FLEXCOM7_IO2                      _UINT32_(34) /**< FLEXCOM7 signal: FLEXCOM7_IO2 on PB2 mux B */
#define MUX_PB2B_FLEXCOM7_IO2                      _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO2 */
#define PIO_PB2B_FLEXCOM7_IO2                      (_UINT32_(1) << 2) /**< FLEXCOM7 signal: FLEXCOM7_IO2 */
#define PIN_PC15B_FLEXCOM7_IO2                     _UINT32_(79) /**< FLEXCOM7 signal: FLEXCOM7_IO2 on PC15 mux B */
#define MUX_PC15B_FLEXCOM7_IO2                     _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO2 */
#define PIO_PC15B_FLEXCOM7_IO2                     (_UINT32_(1) << 15) /**< FLEXCOM7 signal: FLEXCOM7_IO2 */
#define PIN_PC14B_FLEXCOM7_IO3                     _UINT32_(78) /**< FLEXCOM7 signal: FLEXCOM7_IO3 on PC14 mux B */
#define MUX_PC14B_FLEXCOM7_IO3                     _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO3 */
#define PIO_PC14B_FLEXCOM7_IO3                     (_UINT32_(1) << 14) /**< FLEXCOM7 signal: FLEXCOM7_IO3 */
#define PIN_PB2C_FLEXCOM7_IO4                      _UINT32_(34) /**< FLEXCOM7 signal: FLEXCOM7_IO4 on PB2 mux C */
#define MUX_PB2C_FLEXCOM7_IO4                      _UINT32_(2)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO4 */
#define PIO_PB2C_FLEXCOM7_IO4                      (_UINT32_(1) << 2) /**< FLEXCOM7 signal: FLEXCOM7_IO4 */
#define PIN_PC11B_FLEXCOM7_IO4                     _UINT32_(75) /**< FLEXCOM7 signal: FLEXCOM7_IO4 on PC11 mux B */
#define MUX_PC11B_FLEXCOM7_IO4                     _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO4 */
#define PIO_PC11B_FLEXCOM7_IO4                     (_UINT32_(1) << 11) /**< FLEXCOM7 signal: FLEXCOM7_IO4 */
/* ========== PIO definition for PMC peripheral ========== */
#define PIN_PC22A_PMC_PCK0                         _UINT32_(86) /**< PMC signal: PMC_PCK0 on PC22 mux A */
#define MUX_PC22A_PMC_PCK0                         _UINT32_(0)  /**< PMC signal line function value: PMC_PCK0 */
#define PIO_PC22A_PMC_PCK0                         (_UINT32_(1) << 22) /**< PMC signal: PMC_PCK0 */
#define PIN_PC5A_PMC_PCK2                          _UINT32_(69) /**< PMC signal: PMC_PCK2 on PC5 mux A */
#define MUX_PC5A_PMC_PCK2                          _UINT32_(0)  /**< PMC signal line function value: PMC_PCK2 */
#define PIO_PC5A_PMC_PCK2                          (_UINT32_(1) << 5) /**< PMC signal: PMC_PCK2 */
/* ========== PIO definition for PWM peripheral ========== */
#define PIN_PD17A_PWM_PWML0                        _UINT32_(113) /**< PWM signal: PWM_PWML0 on PD17 mux A */
#define MUX_PD17A_PWM_PWML0                        _UINT32_(0)  /**< PWM signal line function value: PWM_PWML0 */
#define PIO_PD17A_PWM_PWML0                        (_UINT32_(1) << 17) /**< PWM signal: PWM_PWML0 */
#define PIN_PD18A_PWM_PWML1                        _UINT32_(114) /**< PWM signal: PWM_PWML1 on PD18 mux A */
#define MUX_PD18A_PWM_PWML1                        _UINT32_(0)  /**< PWM signal line function value: PWM_PWML1 */
#define PIO_PD18A_PWM_PWML1                        (_UINT32_(1) << 18) /**< PWM signal: PWM_PWML1 */
#define PIN_PD19A_PWM_PWML2                        _UINT32_(115) /**< PWM signal: PWM_PWML2 on PD19 mux A */
#define MUX_PD19A_PWM_PWML2                        _UINT32_(0)  /**< PWM signal line function value: PWM_PWML2 */
#define PIO_PD19A_PWM_PWML2                        (_UINT32_(1) << 19) /**< PWM signal: PWM_PWML2 */
/* ========== PIO definition for QSPI peripheral ========== */
#define PIN_PC14A_QSPI_QCS                         _UINT32_(78) /**< QSPI signal: QSPI_QCS on PC14 mux A */
#define MUX_PC14A_QSPI_QCS                         _UINT32_(0)  /**< QSPI signal line function value: QSPI_QCS */
#define PIO_PC14A_QSPI_QCS                         (_UINT32_(1) << 14) /**< QSPI signal: QSPI_QCS */
#define PIN_PC13A_QSPI_QIO0                        _UINT32_(77) /**< QSPI signal: QSPI_QIO0 on PC13 mux A */
#define MUX_PC13A_QSPI_QIO0                        _UINT32_(0)  /**< QSPI signal line function value: QSPI_QIO0 */
#define PIO_PC13A_QSPI_QIO0                        (_UINT32_(1) << 13) /**< QSPI signal: QSPI_QIO0 */
#define PIN_PC12A_QSPI_QIO1                        _UINT32_(76) /**< QSPI signal: QSPI_QIO1 on PC12 mux A */
#define MUX_PC12A_QSPI_QIO1                        _UINT32_(0)  /**< QSPI signal line function value: QSPI_QIO1 */
#define PIO_PC12A_QSPI_QIO1                        (_UINT32_(1) << 12) /**< QSPI signal: QSPI_QIO1 */
#define PIN_PC11A_QSPI_QIO2                        _UINT32_(75) /**< QSPI signal: QSPI_QIO2 on PC11 mux A */
#define MUX_PC11A_QSPI_QIO2                        _UINT32_(0)  /**< QSPI signal line function value: QSPI_QIO2 */
#define PIO_PC11A_QSPI_QIO2                        (_UINT32_(1) << 11) /**< QSPI signal: QSPI_QIO2 */
#define PIN_PC10A_QSPI_QIO3                        _UINT32_(74) /**< QSPI signal: QSPI_QIO3 on PC10 mux A */
#define MUX_PC10A_QSPI_QIO3                        _UINT32_(0)  /**< QSPI signal line function value: QSPI_QIO3 */
#define PIO_PC10A_QSPI_QIO3                        (_UINT32_(1) << 10) /**< QSPI signal: QSPI_QIO3 */
#define PIN_PC15A_QSPI_QSCK                        _UINT32_(79) /**< QSPI signal: QSPI_QSCK on PC15 mux A */
#define MUX_PC15A_QSPI_QSCK                        _UINT32_(0)  /**< QSPI signal line function value: QSPI_QSCK */
#define PIO_PC15A_QSPI_QSCK                        (_UINT32_(1) << 15) /**< QSPI signal: QSPI_QSCK */
/* ========== PIO definition for SUPC peripheral ========== */
#define PIN_PA5X1_SUPC_WKUP5                       _UINT32_(5)  /**< SUPC signal: SUPC_WKUP5 on PA5 mux X1 */
#define PIO_PA5X1_SUPC_WKUP5                       (_UINT32_(1) << 5) /**< SUPC signal: SUPC_WKUP5 */
#define PIN_PA9X1_SUPC_WKUP6                       _UINT32_(9)  /**< SUPC signal: SUPC_WKUP6 on PA9 mux X1 */
#define PIO_PA9X1_SUPC_WKUP6                       (_UINT32_(1) << 9) /**< SUPC signal: SUPC_WKUP6 */
#define PIN_PA13X1_SUPC_WKUP7                      _UINT32_(13) /**< SUPC signal: SUPC_WKUP7 on PA13 mux X1 */
#define PIO_PA13X1_SUPC_WKUP7                      (_UINT32_(1) << 13) /**< SUPC signal: SUPC_WKUP7 */
#define PIN_PB25X1_SUPC_WKUP8                      _UINT32_(57) /**< SUPC signal: SUPC_WKUP8 on PB25 mux X1 */
#define PIO_PB25X1_SUPC_WKUP8                      (_UINT32_(1) << 25) /**< SUPC signal: SUPC_WKUP8 */
#define PIN_PB9X1_SUPC_WKUP9                       _UINT32_(41) /**< SUPC signal: SUPC_WKUP9 on PB9 mux X1 */
#define PIO_PB9X1_SUPC_WKUP9                       (_UINT32_(1) << 9) /**< SUPC signal: SUPC_WKUP9 */
#define PIN_PB12X1_SUPC_WKUP10                     _UINT32_(44) /**< SUPC signal: SUPC_WKUP10 on PB12 mux X1 */
#define PIO_PB12X1_SUPC_WKUP10                     (_UINT32_(1) << 12) /**< SUPC signal: SUPC_WKUP10 */
#define PIN_PC14X1_SUPC_WKUP13                     _UINT32_(78) /**< SUPC signal: SUPC_WKUP13 on PC14 mux X1 */
#define PIO_PC14X1_SUPC_WKUP13                     (_UINT32_(1) << 14) /**< SUPC signal: SUPC_WKUP13 */
#define PIN_PC21X1_SUPC_WKUP14                     _UINT32_(85) /**< SUPC signal: SUPC_WKUP14 on PC21 mux X1 */
#define PIO_PC21X1_SUPC_WKUP14                     (_UINT32_(1) << 21) /**< SUPC signal: SUPC_WKUP14 */
/* ========== PIO definition for TC0 peripheral ========== */
#define PIN_PB4D_TC0_TCLK2                         _UINT32_(36) /**< TC0 signal: TC0_TCLK2 on PB4 mux D */
#define MUX_PB4D_TC0_TCLK2                         _UINT32_(3)  /**< TC0 signal line function value: TC0_TCLK2 */
#define PIO_PB4D_TC0_TCLK2                         (_UINT32_(1) << 4) /**< TC0 signal: TC0_TCLK2 */
#define PIN_PA25D_TC0_TIOA0                        _UINT32_(25) /**< TC0 signal: TC0_TIOA0 on PA25 mux D */
#define MUX_PA25D_TC0_TIOA0                        _UINT32_(3)  /**< TC0 signal line function value: TC0_TIOA0 */
#define PIO_PA25D_TC0_TIOA0                        (_UINT32_(1) << 25) /**< TC0 signal: TC0_TIOA0 */
#define PIN_PB2D_TC0_TIOA2                         _UINT32_(34) /**< TC0 signal: TC0_TIOA2 on PB2 mux D */
#define MUX_PB2D_TC0_TIOA2                         _UINT32_(3)  /**< TC0 signal line function value: TC0_TIOA2 */
#define PIO_PB2D_TC0_TIOA2                         (_UINT32_(1) << 2) /**< TC0 signal: TC0_TIOA2 */
#define PIN_PA24D_TC0_TIOB0                        _UINT32_(24) /**< TC0 signal: TC0_TIOB0 on PA24 mux D */
#define MUX_PA24D_TC0_TIOB0                        _UINT32_(3)  /**< TC0 signal line function value: TC0_TIOB0 */
#define PIO_PA24D_TC0_TIOB0                        (_UINT32_(1) << 24) /**< TC0 signal: TC0_TIOB0 */
#define PIN_PB0D_TC0_TIOB1                         _UINT32_(32) /**< TC0 signal: TC0_TIOB1 on PB0 mux D */
#define MUX_PB0D_TC0_TIOB1                         _UINT32_(3)  /**< TC0 signal line function value: TC0_TIOB1 */
#define PIO_PB0D_TC0_TIOB1                         (_UINT32_(1) << 0) /**< TC0 signal: TC0_TIOB1 */
#define PIN_PB3D_TC0_TIOB2                         _UINT32_(35) /**< TC0 signal: TC0_TIOB2 on PB3 mux D */
#define MUX_PB3D_TC0_TIOB2                         _UINT32_(3)  /**< TC0 signal line function value: TC0_TIOB2 */
#define PIO_PB3D_TC0_TIOB2                         (_UINT32_(1) << 3) /**< TC0 signal: TC0_TIOB2 */
/* ========== PIO definition for TC1 peripheral ========== */
#define PIN_PC5D_TC1_TCLK5                         _UINT32_(69) /**< TC1 signal: TC1_TCLK5 on PC5 mux D */
#define MUX_PC5D_TC1_TCLK5                         _UINT32_(3)  /**< TC1 signal line function value: TC1_TCLK5 */
#define PIO_PC5D_TC1_TCLK5                         (_UINT32_(1) << 5) /**< TC1 signal: TC1_TCLK5 */
#define PIN_PC0C_TC1_TIOA3                         _UINT32_(64) /**< TC1 signal: TC1_TIOA3 on PC0 mux C */
#define MUX_PC0C_TC1_TIOA3                         _UINT32_(2)  /**< TC1 signal line function value: TC1_TIOA3 */
#define PIO_PC0C_TC1_TIOA3                         (_UINT32_(1) << 0) /**< TC1 signal: TC1_TIOA3 */
#define PIN_PB24C_TC1_TIOA5                        _UINT32_(56) /**< TC1 signal: TC1_TIOA5 on PB24 mux C */
#define MUX_PB24C_TC1_TIOA5                        _UINT32_(2)  /**< TC1 signal line function value: TC1_TIOA5 */
#define PIO_PB24C_TC1_TIOA5                        (_UINT32_(1) << 24) /**< TC1 signal: TC1_TIOA5 */
#define PIN_PB25C_TC1_TIOB5                        _UINT32_(57) /**< TC1 signal: TC1_TIOB5 on PB25 mux C */
#define MUX_PB25C_TC1_TIOB5                        _UINT32_(2)  /**< TC1 signal line function value: TC1_TIOB5 */
#define PIO_PB25C_TC1_TIOB5                        (_UINT32_(1) << 25) /**< TC1 signal: TC1_TIOB5 */
/* ========== PIO definition for TC2 peripheral ========== */
#define PIN_PC19D_TC2_TCLK8                        _UINT32_(83) /**< TC2 signal: TC2_TCLK8 on PC19 mux D */
#define MUX_PC19D_TC2_TCLK8                        _UINT32_(3)  /**< TC2 signal line function value: TC2_TCLK8 */
#define PIO_PC19D_TC2_TCLK8                        (_UINT32_(1) << 19) /**< TC2 signal: TC2_TCLK8 */
#define PIN_PA6C_TC2_TIOA6                         _UINT32_(6)  /**< TC2 signal: TC2_TIOA6 on PA6 mux C */
#define MUX_PA6C_TC2_TIOA6                         _UINT32_(2)  /**< TC2 signal line function value: TC2_TIOA6 */
#define PIO_PA6C_TC2_TIOA6                         (_UINT32_(1) << 6) /**< TC2 signal: TC2_TIOA6 */
#define PIN_PC14D_TC2_TIOA7                        _UINT32_(78) /**< TC2 signal: TC2_TIOA7 on PC14 mux D */
#define MUX_PC14D_TC2_TIOA7                        _UINT32_(3)  /**< TC2 signal line function value: TC2_TIOA7 */
#define PIO_PC14D_TC2_TIOA7                        (_UINT32_(1) << 14) /**< TC2 signal: TC2_TIOA7 */
#define PIN_PA7C_TC2_TIOB6                         _UINT32_(7)  /**< TC2 signal: TC2_TIOB6 on PA7 mux C */
#define MUX_PA7C_TC2_TIOB6                         _UINT32_(2)  /**< TC2 signal line function value: TC2_TIOB6 */
#define PIO_PA7C_TC2_TIOB6                         (_UINT32_(1) << 7) /**< TC2 signal: TC2_TIOB6 */
#define PIN_PC15D_TC2_TIOB7                        _UINT32_(79) /**< TC2 signal: TC2_TIOB7 on PC15 mux D */
#define MUX_PC15D_TC2_TIOB7                        _UINT32_(3)  /**< TC2 signal line function value: TC2_TIOB7 */
#define PIO_PC15D_TC2_TIOB7                        (_UINT32_(1) << 15) /**< TC2 signal: TC2_TIOB7 */
#define PIN_PC18D_TC2_TIOB8                        _UINT32_(82) /**< TC2 signal: TC2_TIOB8 on PC18 mux D */
#define MUX_PC18D_TC2_TIOB8                        _UINT32_(3)  /**< TC2 signal line function value: TC2_TIOB8 */
#define PIO_PC18D_TC2_TIOB8                        (_UINT32_(1) << 18) /**< TC2 signal: TC2_TIOB8 */
/* ========== PIO definition for TC3 peripheral ========== */
#define PIN_PD19C_TC3_TCLK11                       _UINT32_(115) /**< TC3 signal: TC3_TCLK11 on PD19 mux C */
#define MUX_PD19C_TC3_TCLK11                       _UINT32_(2)  /**< TC3 signal line function value: TC3_TCLK11 */
#define PIO_PD19C_TC3_TCLK11                       (_UINT32_(1) << 19) /**< TC3 signal: TC3_TCLK11 */
#define PIN_PD17C_TC3_TIOA11                       _UINT32_(113) /**< TC3 signal: TC3_TIOA11 on PD17 mux C */
#define MUX_PD17C_TC3_TIOA11                       _UINT32_(2)  /**< TC3 signal line function value: TC3_TIOA11 */
#define PIO_PD17C_TC3_TIOA11                       (_UINT32_(1) << 17) /**< TC3 signal: TC3_TIOA11 */
#define PIN_PD18C_TC3_TIOB11                       _UINT32_(114) /**< TC3 signal: TC3_TIOB11 on PD18 mux C */
#define MUX_PD18C_TC3_TIOB11                       _UINT32_(2)  /**< TC3 signal line function value: TC3_TIOB11 */
#define PIO_PD18C_TC3_TIOB11                       (_UINT32_(1) << 18) /**< TC3 signal: TC3_TIOB11 */
/* ========== PIO definition for TPI peripheral ========== */
#define PIN_PB10D_TPI_TRACESWO0                    _UINT32_(42) /**< TPI signal: TPI_TRACESWO0 on PB10 mux D */
#define MUX_PB10D_TPI_TRACESWO0                    _UINT32_(3)  /**< TPI signal line function value: TPI_TRACESWO0 */
#define PIO_PB10D_TPI_TRACESWO0                    (_UINT32_(1) << 10) /**< TPI signal: TPI_TRACESWO0 */

#endif /* _PIC32CX2051MTG64_GPIO_H_ */

