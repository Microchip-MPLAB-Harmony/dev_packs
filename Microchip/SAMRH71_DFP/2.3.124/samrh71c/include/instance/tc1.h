/*
 * Instance header file for ATSAMRH71F20C
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

/* file generated from device description version 2021-05-04T16:48:28Z */
#ifndef _SAMRH71_TC1_INSTANCE_
#define _SAMRH71_TC1_INSTANCE_


/* ========== Instance Parameter definitions for TC1 peripheral ========== */
#define TC1_DMAC_ID_RX                           _UL_(25)   
#define TC1_DMAC_ID_CPA                          _UL_(30)   
#define TC1_DMAC_ID_CPB                          _UL_(34)   
#define TC1_DMAC_ID_CPC                          _UL_(38)   
#define TC1_DMAC_ID_ETRG                         _UL_(42)   
#define TC1_INSTANCE_ID_CHANNEL0                 _UL_(28)   
#define TC1_INSTANCE_ID_CHANNEL1                 _UL_(29)   
#define TC1_INSTANCE_ID_CHANNEL2                 _UL_(30)   
#define TC1_CLOCK_ID_CHANNEL0                    _UL_(28)   
#define TC1_CLOCK_ID_CHANNEL1                    _UL_(29)   
#define TC1_CLOCK_ID_CHANNEL2                    _UL_(30)   
#define TC1_TCCLKS_                              _UL_(0)    /* MCK */
#define TC1_TCCLKS_TIMER_CLOCK1                  _UL_(1)    /* GCLK */
#define TC1_TCCLKS_TIMER_CLOCK2                  _UL_(2)    /* MCK/8 */
#define TC1_TCCLKS_TIMER_CLOCK3                  _UL_(3)    /* MCK/32 */
#define TC1_TCCLKS_TIMER_CLOCK4                  _UL_(4)    /* MCK/128 */
#define TC1_TCCLKS_TIMER_CLOCK5                  _UL_(5)    /* SLCK */
#define TC1_TCCLKS_XC0                           _UL_(6)    /* XC0 */
#define TC1_TCCLKS_XC1                           _UL_(7)    /* XC1 */
#define TC1_TCCLKS_XC2                           _UL_(8)    /* XC2 */
#define TC1_NUM_INTERRUPT_LINES                  _UL_(3)    
#define TC1_TIMER_WIDTH                          _UL_(32)   

#endif /* _SAMRH71_TC1_INSTANCE_ */
