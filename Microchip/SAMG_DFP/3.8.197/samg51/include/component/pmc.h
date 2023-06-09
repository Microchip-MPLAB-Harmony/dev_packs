/*
 * Component description for PMC
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

/* file generated from device description version 2023-04-11T10:24:51Z */
#ifndef _SAMG51_PMC_COMPONENT_H_
#define _SAMG51_PMC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PMC                                          */
/* ************************************************************************** */

/* -------- PMC_SCER : (PMC Offset: 0x00) ( /W 32) System Clock Enable Register -------- */
#define PMC_SCER_PCK0_Pos                     _UINT32_(8)                                          /* (PMC_SCER) Programmable Clock 0 Output Enable Position */
#define PMC_SCER_PCK0_Msk                     (_UINT32_(0x1) << PMC_SCER_PCK0_Pos)                 /* (PMC_SCER) Programmable Clock 0 Output Enable Mask */
#define PMC_SCER_PCK0(value)                  (PMC_SCER_PCK0_Msk & (_UINT32_(value) << PMC_SCER_PCK0_Pos)) /* Assigment of value for PCK0 in the PMC_SCER register */
#define PMC_SCER_PCK1_Pos                     _UINT32_(9)                                          /* (PMC_SCER) Programmable Clock 1 Output Enable Position */
#define PMC_SCER_PCK1_Msk                     (_UINT32_(0x1) << PMC_SCER_PCK1_Pos)                 /* (PMC_SCER) Programmable Clock 1 Output Enable Mask */
#define PMC_SCER_PCK1(value)                  (PMC_SCER_PCK1_Msk & (_UINT32_(value) << PMC_SCER_PCK1_Pos)) /* Assigment of value for PCK1 in the PMC_SCER register */
#define PMC_SCER_PCK2_Pos                     _UINT32_(10)                                         /* (PMC_SCER) Programmable Clock 2 Output Enable Position */
#define PMC_SCER_PCK2_Msk                     (_UINT32_(0x1) << PMC_SCER_PCK2_Pos)                 /* (PMC_SCER) Programmable Clock 2 Output Enable Mask */
#define PMC_SCER_PCK2(value)                  (PMC_SCER_PCK2_Msk & (_UINT32_(value) << PMC_SCER_PCK2_Pos)) /* Assigment of value for PCK2 in the PMC_SCER register */
#define PMC_SCER_Msk                          _UINT32_(0x00000700)                                 /* (PMC_SCER) Register Mask  */

#define PMC_SCER_PCK_Pos                      _UINT32_(8)                                          /* (PMC_SCER Position) Programmable Clock 2 Output Enable */
#define PMC_SCER_PCK_Msk                      (_UINT32_(0x7) << PMC_SCER_PCK_Pos)                  /* (PMC_SCER Mask) PCK */
#define PMC_SCER_PCK(value)                   (PMC_SCER_PCK_Msk & (_UINT32_(value) << PMC_SCER_PCK_Pos)) 

/* -------- PMC_SCDR : (PMC Offset: 0x04) ( /W 32) System Clock Disable Register -------- */
#define PMC_SCDR_PCK0_Pos                     _UINT32_(8)                                          /* (PMC_SCDR) Programmable Clock 0 Output Disable Position */
#define PMC_SCDR_PCK0_Msk                     (_UINT32_(0x1) << PMC_SCDR_PCK0_Pos)                 /* (PMC_SCDR) Programmable Clock 0 Output Disable Mask */
#define PMC_SCDR_PCK0(value)                  (PMC_SCDR_PCK0_Msk & (_UINT32_(value) << PMC_SCDR_PCK0_Pos)) /* Assigment of value for PCK0 in the PMC_SCDR register */
#define PMC_SCDR_PCK1_Pos                     _UINT32_(9)                                          /* (PMC_SCDR) Programmable Clock 1 Output Disable Position */
#define PMC_SCDR_PCK1_Msk                     (_UINT32_(0x1) << PMC_SCDR_PCK1_Pos)                 /* (PMC_SCDR) Programmable Clock 1 Output Disable Mask */
#define PMC_SCDR_PCK1(value)                  (PMC_SCDR_PCK1_Msk & (_UINT32_(value) << PMC_SCDR_PCK1_Pos)) /* Assigment of value for PCK1 in the PMC_SCDR register */
#define PMC_SCDR_PCK2_Pos                     _UINT32_(10)                                         /* (PMC_SCDR) Programmable Clock 2 Output Disable Position */
#define PMC_SCDR_PCK2_Msk                     (_UINT32_(0x1) << PMC_SCDR_PCK2_Pos)                 /* (PMC_SCDR) Programmable Clock 2 Output Disable Mask */
#define PMC_SCDR_PCK2(value)                  (PMC_SCDR_PCK2_Msk & (_UINT32_(value) << PMC_SCDR_PCK2_Pos)) /* Assigment of value for PCK2 in the PMC_SCDR register */
#define PMC_SCDR_Msk                          _UINT32_(0x00000700)                                 /* (PMC_SCDR) Register Mask  */

#define PMC_SCDR_PCK_Pos                      _UINT32_(8)                                          /* (PMC_SCDR Position) Programmable Clock 2 Output Disable */
#define PMC_SCDR_PCK_Msk                      (_UINT32_(0x7) << PMC_SCDR_PCK_Pos)                  /* (PMC_SCDR Mask) PCK */
#define PMC_SCDR_PCK(value)                   (PMC_SCDR_PCK_Msk & (_UINT32_(value) << PMC_SCDR_PCK_Pos)) 

/* -------- PMC_SCSR : (PMC Offset: 0x08) ( R/ 32) System Clock Status Register -------- */
#define PMC_SCSR_PCK0_Pos                     _UINT32_(8)                                          /* (PMC_SCSR) Programmable Clock 0 Output Status Position */
#define PMC_SCSR_PCK0_Msk                     (_UINT32_(0x1) << PMC_SCSR_PCK0_Pos)                 /* (PMC_SCSR) Programmable Clock 0 Output Status Mask */
#define PMC_SCSR_PCK0(value)                  (PMC_SCSR_PCK0_Msk & (_UINT32_(value) << PMC_SCSR_PCK0_Pos)) /* Assigment of value for PCK0 in the PMC_SCSR register */
#define PMC_SCSR_PCK1_Pos                     _UINT32_(9)                                          /* (PMC_SCSR) Programmable Clock 1 Output Status Position */
#define PMC_SCSR_PCK1_Msk                     (_UINT32_(0x1) << PMC_SCSR_PCK1_Pos)                 /* (PMC_SCSR) Programmable Clock 1 Output Status Mask */
#define PMC_SCSR_PCK1(value)                  (PMC_SCSR_PCK1_Msk & (_UINT32_(value) << PMC_SCSR_PCK1_Pos)) /* Assigment of value for PCK1 in the PMC_SCSR register */
#define PMC_SCSR_PCK2_Pos                     _UINT32_(10)                                         /* (PMC_SCSR) Programmable Clock 2 Output Status Position */
#define PMC_SCSR_PCK2_Msk                     (_UINT32_(0x1) << PMC_SCSR_PCK2_Pos)                 /* (PMC_SCSR) Programmable Clock 2 Output Status Mask */
#define PMC_SCSR_PCK2(value)                  (PMC_SCSR_PCK2_Msk & (_UINT32_(value) << PMC_SCSR_PCK2_Pos)) /* Assigment of value for PCK2 in the PMC_SCSR register */
#define PMC_SCSR_Msk                          _UINT32_(0x00000700)                                 /* (PMC_SCSR) Register Mask  */

#define PMC_SCSR_PCK_Pos                      _UINT32_(8)                                          /* (PMC_SCSR Position) Programmable Clock 2 Output Status */
#define PMC_SCSR_PCK_Msk                      (_UINT32_(0x7) << PMC_SCSR_PCK_Pos)                  /* (PMC_SCSR Mask) PCK */
#define PMC_SCSR_PCK(value)                   (PMC_SCSR_PCK_Msk & (_UINT32_(value) << PMC_SCSR_PCK_Pos)) 

/* -------- PMC_PCER0 : (PMC Offset: 0x10) ( /W 32) Peripheral Clock Enable Register 0 -------- */
#define PMC_PCER0_PID8_Pos                    _UINT32_(8)                                          /* (PMC_PCER0) Peripheral Clock 8 Enable Position */
#define PMC_PCER0_PID8_Msk                    (_UINT32_(0x1) << PMC_PCER0_PID8_Pos)                /* (PMC_PCER0) Peripheral Clock 8 Enable Mask */
#define PMC_PCER0_PID8(value)                 (PMC_PCER0_PID8_Msk & (_UINT32_(value) << PMC_PCER0_PID8_Pos)) /* Assigment of value for PID8 in the PMC_PCER0 register */
#define PMC_PCER0_PID9_Pos                    _UINT32_(9)                                          /* (PMC_PCER0) Peripheral Clock 9 Enable Position */
#define PMC_PCER0_PID9_Msk                    (_UINT32_(0x1) << PMC_PCER0_PID9_Pos)                /* (PMC_PCER0) Peripheral Clock 9 Enable Mask */
#define PMC_PCER0_PID9(value)                 (PMC_PCER0_PID9_Msk & (_UINT32_(value) << PMC_PCER0_PID9_Pos)) /* Assigment of value for PID9 in the PMC_PCER0 register */
#define PMC_PCER0_PID10_Pos                   _UINT32_(10)                                         /* (PMC_PCER0) Peripheral Clock 10 Enable Position */
#define PMC_PCER0_PID10_Msk                   (_UINT32_(0x1) << PMC_PCER0_PID10_Pos)               /* (PMC_PCER0) Peripheral Clock 10 Enable Mask */
#define PMC_PCER0_PID10(value)                (PMC_PCER0_PID10_Msk & (_UINT32_(value) << PMC_PCER0_PID10_Pos)) /* Assigment of value for PID10 in the PMC_PCER0 register */
#define PMC_PCER0_PID11_Pos                   _UINT32_(11)                                         /* (PMC_PCER0) Peripheral Clock 11 Enable Position */
#define PMC_PCER0_PID11_Msk                   (_UINT32_(0x1) << PMC_PCER0_PID11_Pos)               /* (PMC_PCER0) Peripheral Clock 11 Enable Mask */
#define PMC_PCER0_PID11(value)                (PMC_PCER0_PID11_Msk & (_UINT32_(value) << PMC_PCER0_PID11_Pos)) /* Assigment of value for PID11 in the PMC_PCER0 register */
#define PMC_PCER0_PID12_Pos                   _UINT32_(12)                                         /* (PMC_PCER0) Peripheral Clock 12 Enable Position */
#define PMC_PCER0_PID12_Msk                   (_UINT32_(0x1) << PMC_PCER0_PID12_Pos)               /* (PMC_PCER0) Peripheral Clock 12 Enable Mask */
#define PMC_PCER0_PID12(value)                (PMC_PCER0_PID12_Msk & (_UINT32_(value) << PMC_PCER0_PID12_Pos)) /* Assigment of value for PID12 in the PMC_PCER0 register */
#define PMC_PCER0_PID13_Pos                   _UINT32_(13)                                         /* (PMC_PCER0) Peripheral Clock 13 Enable Position */
#define PMC_PCER0_PID13_Msk                   (_UINT32_(0x1) << PMC_PCER0_PID13_Pos)               /* (PMC_PCER0) Peripheral Clock 13 Enable Mask */
#define PMC_PCER0_PID13(value)                (PMC_PCER0_PID13_Msk & (_UINT32_(value) << PMC_PCER0_PID13_Pos)) /* Assigment of value for PID13 in the PMC_PCER0 register */
#define PMC_PCER0_PID14_Pos                   _UINT32_(14)                                         /* (PMC_PCER0) Peripheral Clock 14 Enable Position */
#define PMC_PCER0_PID14_Msk                   (_UINT32_(0x1) << PMC_PCER0_PID14_Pos)               /* (PMC_PCER0) Peripheral Clock 14 Enable Mask */
#define PMC_PCER0_PID14(value)                (PMC_PCER0_PID14_Msk & (_UINT32_(value) << PMC_PCER0_PID14_Pos)) /* Assigment of value for PID14 in the PMC_PCER0 register */
#define PMC_PCER0_PID15_Pos                   _UINT32_(15)                                         /* (PMC_PCER0) Peripheral Clock 15 Enable Position */
#define PMC_PCER0_PID15_Msk                   (_UINT32_(0x1) << PMC_PCER0_PID15_Pos)               /* (PMC_PCER0) Peripheral Clock 15 Enable Mask */
#define PMC_PCER0_PID15(value)                (PMC_PCER0_PID15_Msk & (_UINT32_(value) << PMC_PCER0_PID15_Pos)) /* Assigment of value for PID15 in the PMC_PCER0 register */
#define PMC_PCER0_PID16_Pos                   _UINT32_(16)                                         /* (PMC_PCER0) Peripheral Clock 16 Enable Position */
#define PMC_PCER0_PID16_Msk                   (_UINT32_(0x1) << PMC_PCER0_PID16_Pos)               /* (PMC_PCER0) Peripheral Clock 16 Enable Mask */
#define PMC_PCER0_PID16(value)                (PMC_PCER0_PID16_Msk & (_UINT32_(value) << PMC_PCER0_PID16_Pos)) /* Assigment of value for PID16 in the PMC_PCER0 register */
#define PMC_PCER0_PID17_Pos                   _UINT32_(17)                                         /* (PMC_PCER0) Peripheral Clock 17 Enable Position */
#define PMC_PCER0_PID17_Msk                   (_UINT32_(0x1) << PMC_PCER0_PID17_Pos)               /* (PMC_PCER0) Peripheral Clock 17 Enable Mask */
#define PMC_PCER0_PID17(value)                (PMC_PCER0_PID17_Msk & (_UINT32_(value) << PMC_PCER0_PID17_Pos)) /* Assigment of value for PID17 in the PMC_PCER0 register */
#define PMC_PCER0_PID18_Pos                   _UINT32_(18)                                         /* (PMC_PCER0) Peripheral Clock 18 Enable Position */
#define PMC_PCER0_PID18_Msk                   (_UINT32_(0x1) << PMC_PCER0_PID18_Pos)               /* (PMC_PCER0) Peripheral Clock 18 Enable Mask */
#define PMC_PCER0_PID18(value)                (PMC_PCER0_PID18_Msk & (_UINT32_(value) << PMC_PCER0_PID18_Pos)) /* Assigment of value for PID18 in the PMC_PCER0 register */
#define PMC_PCER0_PID19_Pos                   _UINT32_(19)                                         /* (PMC_PCER0) Peripheral Clock 19 Enable Position */
#define PMC_PCER0_PID19_Msk                   (_UINT32_(0x1) << PMC_PCER0_PID19_Pos)               /* (PMC_PCER0) Peripheral Clock 19 Enable Mask */
#define PMC_PCER0_PID19(value)                (PMC_PCER0_PID19_Msk & (_UINT32_(value) << PMC_PCER0_PID19_Pos)) /* Assigment of value for PID19 in the PMC_PCER0 register */
#define PMC_PCER0_PID20_Pos                   _UINT32_(20)                                         /* (PMC_PCER0) Peripheral Clock 20 Enable Position */
#define PMC_PCER0_PID20_Msk                   (_UINT32_(0x1) << PMC_PCER0_PID20_Pos)               /* (PMC_PCER0) Peripheral Clock 20 Enable Mask */
#define PMC_PCER0_PID20(value)                (PMC_PCER0_PID20_Msk & (_UINT32_(value) << PMC_PCER0_PID20_Pos)) /* Assigment of value for PID20 in the PMC_PCER0 register */
#define PMC_PCER0_PID21_Pos                   _UINT32_(21)                                         /* (PMC_PCER0) Peripheral Clock 21 Enable Position */
#define PMC_PCER0_PID21_Msk                   (_UINT32_(0x1) << PMC_PCER0_PID21_Pos)               /* (PMC_PCER0) Peripheral Clock 21 Enable Mask */
#define PMC_PCER0_PID21(value)                (PMC_PCER0_PID21_Msk & (_UINT32_(value) << PMC_PCER0_PID21_Pos)) /* Assigment of value for PID21 in the PMC_PCER0 register */
#define PMC_PCER0_PID22_Pos                   _UINT32_(22)                                         /* (PMC_PCER0) Peripheral Clock 22 Enable Position */
#define PMC_PCER0_PID22_Msk                   (_UINT32_(0x1) << PMC_PCER0_PID22_Pos)               /* (PMC_PCER0) Peripheral Clock 22 Enable Mask */
#define PMC_PCER0_PID22(value)                (PMC_PCER0_PID22_Msk & (_UINT32_(value) << PMC_PCER0_PID22_Pos)) /* Assigment of value for PID22 in the PMC_PCER0 register */
#define PMC_PCER0_PID23_Pos                   _UINT32_(23)                                         /* (PMC_PCER0) Peripheral Clock 23 Enable Position */
#define PMC_PCER0_PID23_Msk                   (_UINT32_(0x1) << PMC_PCER0_PID23_Pos)               /* (PMC_PCER0) Peripheral Clock 23 Enable Mask */
#define PMC_PCER0_PID23(value)                (PMC_PCER0_PID23_Msk & (_UINT32_(value) << PMC_PCER0_PID23_Pos)) /* Assigment of value for PID23 in the PMC_PCER0 register */
#define PMC_PCER0_PID24_Pos                   _UINT32_(24)                                         /* (PMC_PCER0) Peripheral Clock 24 Enable Position */
#define PMC_PCER0_PID24_Msk                   (_UINT32_(0x1) << PMC_PCER0_PID24_Pos)               /* (PMC_PCER0) Peripheral Clock 24 Enable Mask */
#define PMC_PCER0_PID24(value)                (PMC_PCER0_PID24_Msk & (_UINT32_(value) << PMC_PCER0_PID24_Pos)) /* Assigment of value for PID24 in the PMC_PCER0 register */
#define PMC_PCER0_PID25_Pos                   _UINT32_(25)                                         /* (PMC_PCER0) Peripheral Clock 25 Enable Position */
#define PMC_PCER0_PID25_Msk                   (_UINT32_(0x1) << PMC_PCER0_PID25_Pos)               /* (PMC_PCER0) Peripheral Clock 25 Enable Mask */
#define PMC_PCER0_PID25(value)                (PMC_PCER0_PID25_Msk & (_UINT32_(value) << PMC_PCER0_PID25_Pos)) /* Assigment of value for PID25 in the PMC_PCER0 register */
#define PMC_PCER0_PID26_Pos                   _UINT32_(26)                                         /* (PMC_PCER0) Peripheral Clock 26 Enable Position */
#define PMC_PCER0_PID26_Msk                   (_UINT32_(0x1) << PMC_PCER0_PID26_Pos)               /* (PMC_PCER0) Peripheral Clock 26 Enable Mask */
#define PMC_PCER0_PID26(value)                (PMC_PCER0_PID26_Msk & (_UINT32_(value) << PMC_PCER0_PID26_Pos)) /* Assigment of value for PID26 in the PMC_PCER0 register */
#define PMC_PCER0_PID27_Pos                   _UINT32_(27)                                         /* (PMC_PCER0) Peripheral Clock 27 Enable Position */
#define PMC_PCER0_PID27_Msk                   (_UINT32_(0x1) << PMC_PCER0_PID27_Pos)               /* (PMC_PCER0) Peripheral Clock 27 Enable Mask */
#define PMC_PCER0_PID27(value)                (PMC_PCER0_PID27_Msk & (_UINT32_(value) << PMC_PCER0_PID27_Pos)) /* Assigment of value for PID27 in the PMC_PCER0 register */
#define PMC_PCER0_PID28_Pos                   _UINT32_(28)                                         /* (PMC_PCER0) Peripheral Clock 28 Enable Position */
#define PMC_PCER0_PID28_Msk                   (_UINT32_(0x1) << PMC_PCER0_PID28_Pos)               /* (PMC_PCER0) Peripheral Clock 28 Enable Mask */
#define PMC_PCER0_PID28(value)                (PMC_PCER0_PID28_Msk & (_UINT32_(value) << PMC_PCER0_PID28_Pos)) /* Assigment of value for PID28 in the PMC_PCER0 register */
#define PMC_PCER0_PID29_Pos                   _UINT32_(29)                                         /* (PMC_PCER0) Peripheral Clock 29 Enable Position */
#define PMC_PCER0_PID29_Msk                   (_UINT32_(0x1) << PMC_PCER0_PID29_Pos)               /* (PMC_PCER0) Peripheral Clock 29 Enable Mask */
#define PMC_PCER0_PID29(value)                (PMC_PCER0_PID29_Msk & (_UINT32_(value) << PMC_PCER0_PID29_Pos)) /* Assigment of value for PID29 in the PMC_PCER0 register */
#define PMC_PCER0_Msk                         _UINT32_(0x3FFFFF00)                                 /* (PMC_PCER0) Register Mask  */

#define PMC_PCER0_PID_Pos                     _UINT32_(8)                                          /* (PMC_PCER0 Position) Peripheral Clock 29 Enable */
#define PMC_PCER0_PID_Msk                     (_UINT32_(0x3FFFFF) << PMC_PCER0_PID_Pos)            /* (PMC_PCER0 Mask) PID */
#define PMC_PCER0_PID(value)                  (PMC_PCER0_PID_Msk & (_UINT32_(value) << PMC_PCER0_PID_Pos)) 

/* -------- PMC_PCDR0 : (PMC Offset: 0x14) ( /W 32) Peripheral Clock Disable Register 0 -------- */
#define PMC_PCDR0_PID8_Pos                    _UINT32_(8)                                          /* (PMC_PCDR0) Peripheral Clock 8 Disable Position */
#define PMC_PCDR0_PID8_Msk                    (_UINT32_(0x1) << PMC_PCDR0_PID8_Pos)                /* (PMC_PCDR0) Peripheral Clock 8 Disable Mask */
#define PMC_PCDR0_PID8(value)                 (PMC_PCDR0_PID8_Msk & (_UINT32_(value) << PMC_PCDR0_PID8_Pos)) /* Assigment of value for PID8 in the PMC_PCDR0 register */
#define PMC_PCDR0_PID9_Pos                    _UINT32_(9)                                          /* (PMC_PCDR0) Peripheral Clock 9 Disable Position */
#define PMC_PCDR0_PID9_Msk                    (_UINT32_(0x1) << PMC_PCDR0_PID9_Pos)                /* (PMC_PCDR0) Peripheral Clock 9 Disable Mask */
#define PMC_PCDR0_PID9(value)                 (PMC_PCDR0_PID9_Msk & (_UINT32_(value) << PMC_PCDR0_PID9_Pos)) /* Assigment of value for PID9 in the PMC_PCDR0 register */
#define PMC_PCDR0_PID10_Pos                   _UINT32_(10)                                         /* (PMC_PCDR0) Peripheral Clock 10 Disable Position */
#define PMC_PCDR0_PID10_Msk                   (_UINT32_(0x1) << PMC_PCDR0_PID10_Pos)               /* (PMC_PCDR0) Peripheral Clock 10 Disable Mask */
#define PMC_PCDR0_PID10(value)                (PMC_PCDR0_PID10_Msk & (_UINT32_(value) << PMC_PCDR0_PID10_Pos)) /* Assigment of value for PID10 in the PMC_PCDR0 register */
#define PMC_PCDR0_PID11_Pos                   _UINT32_(11)                                         /* (PMC_PCDR0) Peripheral Clock 11 Disable Position */
#define PMC_PCDR0_PID11_Msk                   (_UINT32_(0x1) << PMC_PCDR0_PID11_Pos)               /* (PMC_PCDR0) Peripheral Clock 11 Disable Mask */
#define PMC_PCDR0_PID11(value)                (PMC_PCDR0_PID11_Msk & (_UINT32_(value) << PMC_PCDR0_PID11_Pos)) /* Assigment of value for PID11 in the PMC_PCDR0 register */
#define PMC_PCDR0_PID12_Pos                   _UINT32_(12)                                         /* (PMC_PCDR0) Peripheral Clock 12 Disable Position */
#define PMC_PCDR0_PID12_Msk                   (_UINT32_(0x1) << PMC_PCDR0_PID12_Pos)               /* (PMC_PCDR0) Peripheral Clock 12 Disable Mask */
#define PMC_PCDR0_PID12(value)                (PMC_PCDR0_PID12_Msk & (_UINT32_(value) << PMC_PCDR0_PID12_Pos)) /* Assigment of value for PID12 in the PMC_PCDR0 register */
#define PMC_PCDR0_PID13_Pos                   _UINT32_(13)                                         /* (PMC_PCDR0) Peripheral Clock 13 Disable Position */
#define PMC_PCDR0_PID13_Msk                   (_UINT32_(0x1) << PMC_PCDR0_PID13_Pos)               /* (PMC_PCDR0) Peripheral Clock 13 Disable Mask */
#define PMC_PCDR0_PID13(value)                (PMC_PCDR0_PID13_Msk & (_UINT32_(value) << PMC_PCDR0_PID13_Pos)) /* Assigment of value for PID13 in the PMC_PCDR0 register */
#define PMC_PCDR0_PID14_Pos                   _UINT32_(14)                                         /* (PMC_PCDR0) Peripheral Clock 14 Disable Position */
#define PMC_PCDR0_PID14_Msk                   (_UINT32_(0x1) << PMC_PCDR0_PID14_Pos)               /* (PMC_PCDR0) Peripheral Clock 14 Disable Mask */
#define PMC_PCDR0_PID14(value)                (PMC_PCDR0_PID14_Msk & (_UINT32_(value) << PMC_PCDR0_PID14_Pos)) /* Assigment of value for PID14 in the PMC_PCDR0 register */
#define PMC_PCDR0_PID15_Pos                   _UINT32_(15)                                         /* (PMC_PCDR0) Peripheral Clock 15 Disable Position */
#define PMC_PCDR0_PID15_Msk                   (_UINT32_(0x1) << PMC_PCDR0_PID15_Pos)               /* (PMC_PCDR0) Peripheral Clock 15 Disable Mask */
#define PMC_PCDR0_PID15(value)                (PMC_PCDR0_PID15_Msk & (_UINT32_(value) << PMC_PCDR0_PID15_Pos)) /* Assigment of value for PID15 in the PMC_PCDR0 register */
#define PMC_PCDR0_PID16_Pos                   _UINT32_(16)                                         /* (PMC_PCDR0) Peripheral Clock 16 Disable Position */
#define PMC_PCDR0_PID16_Msk                   (_UINT32_(0x1) << PMC_PCDR0_PID16_Pos)               /* (PMC_PCDR0) Peripheral Clock 16 Disable Mask */
#define PMC_PCDR0_PID16(value)                (PMC_PCDR0_PID16_Msk & (_UINT32_(value) << PMC_PCDR0_PID16_Pos)) /* Assigment of value for PID16 in the PMC_PCDR0 register */
#define PMC_PCDR0_PID17_Pos                   _UINT32_(17)                                         /* (PMC_PCDR0) Peripheral Clock 17 Disable Position */
#define PMC_PCDR0_PID17_Msk                   (_UINT32_(0x1) << PMC_PCDR0_PID17_Pos)               /* (PMC_PCDR0) Peripheral Clock 17 Disable Mask */
#define PMC_PCDR0_PID17(value)                (PMC_PCDR0_PID17_Msk & (_UINT32_(value) << PMC_PCDR0_PID17_Pos)) /* Assigment of value for PID17 in the PMC_PCDR0 register */
#define PMC_PCDR0_PID18_Pos                   _UINT32_(18)                                         /* (PMC_PCDR0) Peripheral Clock 18 Disable Position */
#define PMC_PCDR0_PID18_Msk                   (_UINT32_(0x1) << PMC_PCDR0_PID18_Pos)               /* (PMC_PCDR0) Peripheral Clock 18 Disable Mask */
#define PMC_PCDR0_PID18(value)                (PMC_PCDR0_PID18_Msk & (_UINT32_(value) << PMC_PCDR0_PID18_Pos)) /* Assigment of value for PID18 in the PMC_PCDR0 register */
#define PMC_PCDR0_PID19_Pos                   _UINT32_(19)                                         /* (PMC_PCDR0) Peripheral Clock 19 Disable Position */
#define PMC_PCDR0_PID19_Msk                   (_UINT32_(0x1) << PMC_PCDR0_PID19_Pos)               /* (PMC_PCDR0) Peripheral Clock 19 Disable Mask */
#define PMC_PCDR0_PID19(value)                (PMC_PCDR0_PID19_Msk & (_UINT32_(value) << PMC_PCDR0_PID19_Pos)) /* Assigment of value for PID19 in the PMC_PCDR0 register */
#define PMC_PCDR0_PID20_Pos                   _UINT32_(20)                                         /* (PMC_PCDR0) Peripheral Clock 20 Disable Position */
#define PMC_PCDR0_PID20_Msk                   (_UINT32_(0x1) << PMC_PCDR0_PID20_Pos)               /* (PMC_PCDR0) Peripheral Clock 20 Disable Mask */
#define PMC_PCDR0_PID20(value)                (PMC_PCDR0_PID20_Msk & (_UINT32_(value) << PMC_PCDR0_PID20_Pos)) /* Assigment of value for PID20 in the PMC_PCDR0 register */
#define PMC_PCDR0_PID21_Pos                   _UINT32_(21)                                         /* (PMC_PCDR0) Peripheral Clock 21 Disable Position */
#define PMC_PCDR0_PID21_Msk                   (_UINT32_(0x1) << PMC_PCDR0_PID21_Pos)               /* (PMC_PCDR0) Peripheral Clock 21 Disable Mask */
#define PMC_PCDR0_PID21(value)                (PMC_PCDR0_PID21_Msk & (_UINT32_(value) << PMC_PCDR0_PID21_Pos)) /* Assigment of value for PID21 in the PMC_PCDR0 register */
#define PMC_PCDR0_PID22_Pos                   _UINT32_(22)                                         /* (PMC_PCDR0) Peripheral Clock 22 Disable Position */
#define PMC_PCDR0_PID22_Msk                   (_UINT32_(0x1) << PMC_PCDR0_PID22_Pos)               /* (PMC_PCDR0) Peripheral Clock 22 Disable Mask */
#define PMC_PCDR0_PID22(value)                (PMC_PCDR0_PID22_Msk & (_UINT32_(value) << PMC_PCDR0_PID22_Pos)) /* Assigment of value for PID22 in the PMC_PCDR0 register */
#define PMC_PCDR0_PID23_Pos                   _UINT32_(23)                                         /* (PMC_PCDR0) Peripheral Clock 23 Disable Position */
#define PMC_PCDR0_PID23_Msk                   (_UINT32_(0x1) << PMC_PCDR0_PID23_Pos)               /* (PMC_PCDR0) Peripheral Clock 23 Disable Mask */
#define PMC_PCDR0_PID23(value)                (PMC_PCDR0_PID23_Msk & (_UINT32_(value) << PMC_PCDR0_PID23_Pos)) /* Assigment of value for PID23 in the PMC_PCDR0 register */
#define PMC_PCDR0_PID24_Pos                   _UINT32_(24)                                         /* (PMC_PCDR0) Peripheral Clock 24 Disable Position */
#define PMC_PCDR0_PID24_Msk                   (_UINT32_(0x1) << PMC_PCDR0_PID24_Pos)               /* (PMC_PCDR0) Peripheral Clock 24 Disable Mask */
#define PMC_PCDR0_PID24(value)                (PMC_PCDR0_PID24_Msk & (_UINT32_(value) << PMC_PCDR0_PID24_Pos)) /* Assigment of value for PID24 in the PMC_PCDR0 register */
#define PMC_PCDR0_PID25_Pos                   _UINT32_(25)                                         /* (PMC_PCDR0) Peripheral Clock 25 Disable Position */
#define PMC_PCDR0_PID25_Msk                   (_UINT32_(0x1) << PMC_PCDR0_PID25_Pos)               /* (PMC_PCDR0) Peripheral Clock 25 Disable Mask */
#define PMC_PCDR0_PID25(value)                (PMC_PCDR0_PID25_Msk & (_UINT32_(value) << PMC_PCDR0_PID25_Pos)) /* Assigment of value for PID25 in the PMC_PCDR0 register */
#define PMC_PCDR0_PID26_Pos                   _UINT32_(26)                                         /* (PMC_PCDR0) Peripheral Clock 26 Disable Position */
#define PMC_PCDR0_PID26_Msk                   (_UINT32_(0x1) << PMC_PCDR0_PID26_Pos)               /* (PMC_PCDR0) Peripheral Clock 26 Disable Mask */
#define PMC_PCDR0_PID26(value)                (PMC_PCDR0_PID26_Msk & (_UINT32_(value) << PMC_PCDR0_PID26_Pos)) /* Assigment of value for PID26 in the PMC_PCDR0 register */
#define PMC_PCDR0_PID27_Pos                   _UINT32_(27)                                         /* (PMC_PCDR0) Peripheral Clock 27 Disable Position */
#define PMC_PCDR0_PID27_Msk                   (_UINT32_(0x1) << PMC_PCDR0_PID27_Pos)               /* (PMC_PCDR0) Peripheral Clock 27 Disable Mask */
#define PMC_PCDR0_PID27(value)                (PMC_PCDR0_PID27_Msk & (_UINT32_(value) << PMC_PCDR0_PID27_Pos)) /* Assigment of value for PID27 in the PMC_PCDR0 register */
#define PMC_PCDR0_PID28_Pos                   _UINT32_(28)                                         /* (PMC_PCDR0) Peripheral Clock 28 Disable Position */
#define PMC_PCDR0_PID28_Msk                   (_UINT32_(0x1) << PMC_PCDR0_PID28_Pos)               /* (PMC_PCDR0) Peripheral Clock 28 Disable Mask */
#define PMC_PCDR0_PID28(value)                (PMC_PCDR0_PID28_Msk & (_UINT32_(value) << PMC_PCDR0_PID28_Pos)) /* Assigment of value for PID28 in the PMC_PCDR0 register */
#define PMC_PCDR0_PID29_Pos                   _UINT32_(29)                                         /* (PMC_PCDR0) Peripheral Clock 29 Disable Position */
#define PMC_PCDR0_PID29_Msk                   (_UINT32_(0x1) << PMC_PCDR0_PID29_Pos)               /* (PMC_PCDR0) Peripheral Clock 29 Disable Mask */
#define PMC_PCDR0_PID29(value)                (PMC_PCDR0_PID29_Msk & (_UINT32_(value) << PMC_PCDR0_PID29_Pos)) /* Assigment of value for PID29 in the PMC_PCDR0 register */
#define PMC_PCDR0_Msk                         _UINT32_(0x3FFFFF00)                                 /* (PMC_PCDR0) Register Mask  */

#define PMC_PCDR0_PID_Pos                     _UINT32_(8)                                          /* (PMC_PCDR0 Position) Peripheral Clock 29 Disable */
#define PMC_PCDR0_PID_Msk                     (_UINT32_(0x3FFFFF) << PMC_PCDR0_PID_Pos)            /* (PMC_PCDR0 Mask) PID */
#define PMC_PCDR0_PID(value)                  (PMC_PCDR0_PID_Msk & (_UINT32_(value) << PMC_PCDR0_PID_Pos)) 

/* -------- PMC_PCSR0 : (PMC Offset: 0x18) ( R/ 32) Peripheral Clock Status Register 0 -------- */
#define PMC_PCSR0_PID8_Pos                    _UINT32_(8)                                          /* (PMC_PCSR0) Peripheral Clock 8 Status Position */
#define PMC_PCSR0_PID8_Msk                    (_UINT32_(0x1) << PMC_PCSR0_PID8_Pos)                /* (PMC_PCSR0) Peripheral Clock 8 Status Mask */
#define PMC_PCSR0_PID8(value)                 (PMC_PCSR0_PID8_Msk & (_UINT32_(value) << PMC_PCSR0_PID8_Pos)) /* Assigment of value for PID8 in the PMC_PCSR0 register */
#define PMC_PCSR0_PID9_Pos                    _UINT32_(9)                                          /* (PMC_PCSR0) Peripheral Clock 9 Status Position */
#define PMC_PCSR0_PID9_Msk                    (_UINT32_(0x1) << PMC_PCSR0_PID9_Pos)                /* (PMC_PCSR0) Peripheral Clock 9 Status Mask */
#define PMC_PCSR0_PID9(value)                 (PMC_PCSR0_PID9_Msk & (_UINT32_(value) << PMC_PCSR0_PID9_Pos)) /* Assigment of value for PID9 in the PMC_PCSR0 register */
#define PMC_PCSR0_PID10_Pos                   _UINT32_(10)                                         /* (PMC_PCSR0) Peripheral Clock 10 Status Position */
#define PMC_PCSR0_PID10_Msk                   (_UINT32_(0x1) << PMC_PCSR0_PID10_Pos)               /* (PMC_PCSR0) Peripheral Clock 10 Status Mask */
#define PMC_PCSR0_PID10(value)                (PMC_PCSR0_PID10_Msk & (_UINT32_(value) << PMC_PCSR0_PID10_Pos)) /* Assigment of value for PID10 in the PMC_PCSR0 register */
#define PMC_PCSR0_PID11_Pos                   _UINT32_(11)                                         /* (PMC_PCSR0) Peripheral Clock 11 Status Position */
#define PMC_PCSR0_PID11_Msk                   (_UINT32_(0x1) << PMC_PCSR0_PID11_Pos)               /* (PMC_PCSR0) Peripheral Clock 11 Status Mask */
#define PMC_PCSR0_PID11(value)                (PMC_PCSR0_PID11_Msk & (_UINT32_(value) << PMC_PCSR0_PID11_Pos)) /* Assigment of value for PID11 in the PMC_PCSR0 register */
#define PMC_PCSR0_PID12_Pos                   _UINT32_(12)                                         /* (PMC_PCSR0) Peripheral Clock 12 Status Position */
#define PMC_PCSR0_PID12_Msk                   (_UINT32_(0x1) << PMC_PCSR0_PID12_Pos)               /* (PMC_PCSR0) Peripheral Clock 12 Status Mask */
#define PMC_PCSR0_PID12(value)                (PMC_PCSR0_PID12_Msk & (_UINT32_(value) << PMC_PCSR0_PID12_Pos)) /* Assigment of value for PID12 in the PMC_PCSR0 register */
#define PMC_PCSR0_PID13_Pos                   _UINT32_(13)                                         /* (PMC_PCSR0) Peripheral Clock 13 Status Position */
#define PMC_PCSR0_PID13_Msk                   (_UINT32_(0x1) << PMC_PCSR0_PID13_Pos)               /* (PMC_PCSR0) Peripheral Clock 13 Status Mask */
#define PMC_PCSR0_PID13(value)                (PMC_PCSR0_PID13_Msk & (_UINT32_(value) << PMC_PCSR0_PID13_Pos)) /* Assigment of value for PID13 in the PMC_PCSR0 register */
#define PMC_PCSR0_PID14_Pos                   _UINT32_(14)                                         /* (PMC_PCSR0) Peripheral Clock 14 Status Position */
#define PMC_PCSR0_PID14_Msk                   (_UINT32_(0x1) << PMC_PCSR0_PID14_Pos)               /* (PMC_PCSR0) Peripheral Clock 14 Status Mask */
#define PMC_PCSR0_PID14(value)                (PMC_PCSR0_PID14_Msk & (_UINT32_(value) << PMC_PCSR0_PID14_Pos)) /* Assigment of value for PID14 in the PMC_PCSR0 register */
#define PMC_PCSR0_PID15_Pos                   _UINT32_(15)                                         /* (PMC_PCSR0) Peripheral Clock 15 Status Position */
#define PMC_PCSR0_PID15_Msk                   (_UINT32_(0x1) << PMC_PCSR0_PID15_Pos)               /* (PMC_PCSR0) Peripheral Clock 15 Status Mask */
#define PMC_PCSR0_PID15(value)                (PMC_PCSR0_PID15_Msk & (_UINT32_(value) << PMC_PCSR0_PID15_Pos)) /* Assigment of value for PID15 in the PMC_PCSR0 register */
#define PMC_PCSR0_PID16_Pos                   _UINT32_(16)                                         /* (PMC_PCSR0) Peripheral Clock 16 Status Position */
#define PMC_PCSR0_PID16_Msk                   (_UINT32_(0x1) << PMC_PCSR0_PID16_Pos)               /* (PMC_PCSR0) Peripheral Clock 16 Status Mask */
#define PMC_PCSR0_PID16(value)                (PMC_PCSR0_PID16_Msk & (_UINT32_(value) << PMC_PCSR0_PID16_Pos)) /* Assigment of value for PID16 in the PMC_PCSR0 register */
#define PMC_PCSR0_PID17_Pos                   _UINT32_(17)                                         /* (PMC_PCSR0) Peripheral Clock 17 Status Position */
#define PMC_PCSR0_PID17_Msk                   (_UINT32_(0x1) << PMC_PCSR0_PID17_Pos)               /* (PMC_PCSR0) Peripheral Clock 17 Status Mask */
#define PMC_PCSR0_PID17(value)                (PMC_PCSR0_PID17_Msk & (_UINT32_(value) << PMC_PCSR0_PID17_Pos)) /* Assigment of value for PID17 in the PMC_PCSR0 register */
#define PMC_PCSR0_PID18_Pos                   _UINT32_(18)                                         /* (PMC_PCSR0) Peripheral Clock 18 Status Position */
#define PMC_PCSR0_PID18_Msk                   (_UINT32_(0x1) << PMC_PCSR0_PID18_Pos)               /* (PMC_PCSR0) Peripheral Clock 18 Status Mask */
#define PMC_PCSR0_PID18(value)                (PMC_PCSR0_PID18_Msk & (_UINT32_(value) << PMC_PCSR0_PID18_Pos)) /* Assigment of value for PID18 in the PMC_PCSR0 register */
#define PMC_PCSR0_PID19_Pos                   _UINT32_(19)                                         /* (PMC_PCSR0) Peripheral Clock 19 Status Position */
#define PMC_PCSR0_PID19_Msk                   (_UINT32_(0x1) << PMC_PCSR0_PID19_Pos)               /* (PMC_PCSR0) Peripheral Clock 19 Status Mask */
#define PMC_PCSR0_PID19(value)                (PMC_PCSR0_PID19_Msk & (_UINT32_(value) << PMC_PCSR0_PID19_Pos)) /* Assigment of value for PID19 in the PMC_PCSR0 register */
#define PMC_PCSR0_PID20_Pos                   _UINT32_(20)                                         /* (PMC_PCSR0) Peripheral Clock 20 Status Position */
#define PMC_PCSR0_PID20_Msk                   (_UINT32_(0x1) << PMC_PCSR0_PID20_Pos)               /* (PMC_PCSR0) Peripheral Clock 20 Status Mask */
#define PMC_PCSR0_PID20(value)                (PMC_PCSR0_PID20_Msk & (_UINT32_(value) << PMC_PCSR0_PID20_Pos)) /* Assigment of value for PID20 in the PMC_PCSR0 register */
#define PMC_PCSR0_PID21_Pos                   _UINT32_(21)                                         /* (PMC_PCSR0) Peripheral Clock 21 Status Position */
#define PMC_PCSR0_PID21_Msk                   (_UINT32_(0x1) << PMC_PCSR0_PID21_Pos)               /* (PMC_PCSR0) Peripheral Clock 21 Status Mask */
#define PMC_PCSR0_PID21(value)                (PMC_PCSR0_PID21_Msk & (_UINT32_(value) << PMC_PCSR0_PID21_Pos)) /* Assigment of value for PID21 in the PMC_PCSR0 register */
#define PMC_PCSR0_PID22_Pos                   _UINT32_(22)                                         /* (PMC_PCSR0) Peripheral Clock 22 Status Position */
#define PMC_PCSR0_PID22_Msk                   (_UINT32_(0x1) << PMC_PCSR0_PID22_Pos)               /* (PMC_PCSR0) Peripheral Clock 22 Status Mask */
#define PMC_PCSR0_PID22(value)                (PMC_PCSR0_PID22_Msk & (_UINT32_(value) << PMC_PCSR0_PID22_Pos)) /* Assigment of value for PID22 in the PMC_PCSR0 register */
#define PMC_PCSR0_PID23_Pos                   _UINT32_(23)                                         /* (PMC_PCSR0) Peripheral Clock 23 Status Position */
#define PMC_PCSR0_PID23_Msk                   (_UINT32_(0x1) << PMC_PCSR0_PID23_Pos)               /* (PMC_PCSR0) Peripheral Clock 23 Status Mask */
#define PMC_PCSR0_PID23(value)                (PMC_PCSR0_PID23_Msk & (_UINT32_(value) << PMC_PCSR0_PID23_Pos)) /* Assigment of value for PID23 in the PMC_PCSR0 register */
#define PMC_PCSR0_PID24_Pos                   _UINT32_(24)                                         /* (PMC_PCSR0) Peripheral Clock 24 Status Position */
#define PMC_PCSR0_PID24_Msk                   (_UINT32_(0x1) << PMC_PCSR0_PID24_Pos)               /* (PMC_PCSR0) Peripheral Clock 24 Status Mask */
#define PMC_PCSR0_PID24(value)                (PMC_PCSR0_PID24_Msk & (_UINT32_(value) << PMC_PCSR0_PID24_Pos)) /* Assigment of value for PID24 in the PMC_PCSR0 register */
#define PMC_PCSR0_PID25_Pos                   _UINT32_(25)                                         /* (PMC_PCSR0) Peripheral Clock 25 Status Position */
#define PMC_PCSR0_PID25_Msk                   (_UINT32_(0x1) << PMC_PCSR0_PID25_Pos)               /* (PMC_PCSR0) Peripheral Clock 25 Status Mask */
#define PMC_PCSR0_PID25(value)                (PMC_PCSR0_PID25_Msk & (_UINT32_(value) << PMC_PCSR0_PID25_Pos)) /* Assigment of value for PID25 in the PMC_PCSR0 register */
#define PMC_PCSR0_PID26_Pos                   _UINT32_(26)                                         /* (PMC_PCSR0) Peripheral Clock 26 Status Position */
#define PMC_PCSR0_PID26_Msk                   (_UINT32_(0x1) << PMC_PCSR0_PID26_Pos)               /* (PMC_PCSR0) Peripheral Clock 26 Status Mask */
#define PMC_PCSR0_PID26(value)                (PMC_PCSR0_PID26_Msk & (_UINT32_(value) << PMC_PCSR0_PID26_Pos)) /* Assigment of value for PID26 in the PMC_PCSR0 register */
#define PMC_PCSR0_PID27_Pos                   _UINT32_(27)                                         /* (PMC_PCSR0) Peripheral Clock 27 Status Position */
#define PMC_PCSR0_PID27_Msk                   (_UINT32_(0x1) << PMC_PCSR0_PID27_Pos)               /* (PMC_PCSR0) Peripheral Clock 27 Status Mask */
#define PMC_PCSR0_PID27(value)                (PMC_PCSR0_PID27_Msk & (_UINT32_(value) << PMC_PCSR0_PID27_Pos)) /* Assigment of value for PID27 in the PMC_PCSR0 register */
#define PMC_PCSR0_PID28_Pos                   _UINT32_(28)                                         /* (PMC_PCSR0) Peripheral Clock 28 Status Position */
#define PMC_PCSR0_PID28_Msk                   (_UINT32_(0x1) << PMC_PCSR0_PID28_Pos)               /* (PMC_PCSR0) Peripheral Clock 28 Status Mask */
#define PMC_PCSR0_PID28(value)                (PMC_PCSR0_PID28_Msk & (_UINT32_(value) << PMC_PCSR0_PID28_Pos)) /* Assigment of value for PID28 in the PMC_PCSR0 register */
#define PMC_PCSR0_PID29_Pos                   _UINT32_(29)                                         /* (PMC_PCSR0) Peripheral Clock 29 Status Position */
#define PMC_PCSR0_PID29_Msk                   (_UINT32_(0x1) << PMC_PCSR0_PID29_Pos)               /* (PMC_PCSR0) Peripheral Clock 29 Status Mask */
#define PMC_PCSR0_PID29(value)                (PMC_PCSR0_PID29_Msk & (_UINT32_(value) << PMC_PCSR0_PID29_Pos)) /* Assigment of value for PID29 in the PMC_PCSR0 register */
#define PMC_PCSR0_Msk                         _UINT32_(0x3FFFFF00)                                 /* (PMC_PCSR0) Register Mask  */

#define PMC_PCSR0_PID_Pos                     _UINT32_(8)                                          /* (PMC_PCSR0 Position) Peripheral Clock 29 Status */
#define PMC_PCSR0_PID_Msk                     (_UINT32_(0x3FFFFF) << PMC_PCSR0_PID_Pos)            /* (PMC_PCSR0 Mask) PID */
#define PMC_PCSR0_PID(value)                  (PMC_PCSR0_PID_Msk & (_UINT32_(value) << PMC_PCSR0_PID_Pos)) 

/* -------- CKGR_MOR : (PMC Offset: 0x20) (R/W 32) Main Oscillator Register -------- */
#define CKGR_MOR_MOSCXTEN_Pos                 _UINT32_(0)                                          /* (CKGR_MOR) Main Crystal Oscillator Enable Position */
#define CKGR_MOR_MOSCXTEN_Msk                 (_UINT32_(0x1) << CKGR_MOR_MOSCXTEN_Pos)             /* (CKGR_MOR) Main Crystal Oscillator Enable Mask */
#define CKGR_MOR_MOSCXTEN(value)              (CKGR_MOR_MOSCXTEN_Msk & (_UINT32_(value) << CKGR_MOR_MOSCXTEN_Pos)) /* Assigment of value for MOSCXTEN in the CKGR_MOR register */
#define CKGR_MOR_MOSCXTBY_Pos                 _UINT32_(1)                                          /* (CKGR_MOR) Main Crystal Oscillator Bypass Position */
#define CKGR_MOR_MOSCXTBY_Msk                 (_UINT32_(0x1) << CKGR_MOR_MOSCXTBY_Pos)             /* (CKGR_MOR) Main Crystal Oscillator Bypass Mask */
#define CKGR_MOR_MOSCXTBY(value)              (CKGR_MOR_MOSCXTBY_Msk & (_UINT32_(value) << CKGR_MOR_MOSCXTBY_Pos)) /* Assigment of value for MOSCXTBY in the CKGR_MOR register */
#define CKGR_MOR_WAITMODE_Pos                 _UINT32_(2)                                          /* (CKGR_MOR) Wait Mode Command (Write-only) Position */
#define CKGR_MOR_WAITMODE_Msk                 (_UINT32_(0x1) << CKGR_MOR_WAITMODE_Pos)             /* (CKGR_MOR) Wait Mode Command (Write-only) Mask */
#define CKGR_MOR_WAITMODE(value)              (CKGR_MOR_WAITMODE_Msk & (_UINT32_(value) << CKGR_MOR_WAITMODE_Pos)) /* Assigment of value for WAITMODE in the CKGR_MOR register */
#define CKGR_MOR_MOSCRCEN_Pos                 _UINT32_(3)                                          /* (CKGR_MOR) Main On-Chip RC Oscillator Enable Position */
#define CKGR_MOR_MOSCRCEN_Msk                 (_UINT32_(0x1) << CKGR_MOR_MOSCRCEN_Pos)             /* (CKGR_MOR) Main On-Chip RC Oscillator Enable Mask */
#define CKGR_MOR_MOSCRCEN(value)              (CKGR_MOR_MOSCRCEN_Msk & (_UINT32_(value) << CKGR_MOR_MOSCRCEN_Pos)) /* Assigment of value for MOSCRCEN in the CKGR_MOR register */
#define CKGR_MOR_MOSCRCF_Pos                  _UINT32_(4)                                          /* (CKGR_MOR) Main On-Chip RC Oscillator Frequency Selection Position */
#define CKGR_MOR_MOSCRCF_Msk                  (_UINT32_(0x7) << CKGR_MOR_MOSCRCF_Pos)              /* (CKGR_MOR) Main On-Chip RC Oscillator Frequency Selection Mask */
#define CKGR_MOR_MOSCRCF(value)               (CKGR_MOR_MOSCRCF_Msk & (_UINT32_(value) << CKGR_MOR_MOSCRCF_Pos)) /* Assigment of value for MOSCRCF in the CKGR_MOR register */
#define   CKGR_MOR_MOSCRCF_8_MHz_Val          _UINT32_(0x0)                                        /* (CKGR_MOR) The Fast RC Oscillator frequency is at 8 MHz (default)  */
#define   CKGR_MOR_MOSCRCF_16_MHz_Val         _UINT32_(0x1)                                        /* (CKGR_MOR) The Fast RC Oscillator frequency is at 16 MHz  */
#define   CKGR_MOR_MOSCRCF_24_MHz_Val         _UINT32_(0x2)                                        /* (CKGR_MOR) The Fast RC Oscillator frequency is at 24 MHz  */
#define CKGR_MOR_MOSCRCF_8_MHz                (CKGR_MOR_MOSCRCF_8_MHz_Val << CKGR_MOR_MOSCRCF_Pos) /* (CKGR_MOR) The Fast RC Oscillator frequency is at 8 MHz (default) Position  */
#define CKGR_MOR_MOSCRCF_16_MHz               (CKGR_MOR_MOSCRCF_16_MHz_Val << CKGR_MOR_MOSCRCF_Pos) /* (CKGR_MOR) The Fast RC Oscillator frequency is at 16 MHz Position  */
#define CKGR_MOR_MOSCRCF_24_MHz               (CKGR_MOR_MOSCRCF_24_MHz_Val << CKGR_MOR_MOSCRCF_Pos) /* (CKGR_MOR) The Fast RC Oscillator frequency is at 24 MHz Position  */
#define CKGR_MOR_MOSCXTST_Pos                 _UINT32_(8)                                          /* (CKGR_MOR) Main Crystal Oscillator Start-up Time Position */
#define CKGR_MOR_MOSCXTST_Msk                 (_UINT32_(0xFF) << CKGR_MOR_MOSCXTST_Pos)            /* (CKGR_MOR) Main Crystal Oscillator Start-up Time Mask */
#define CKGR_MOR_MOSCXTST(value)              (CKGR_MOR_MOSCXTST_Msk & (_UINT32_(value) << CKGR_MOR_MOSCXTST_Pos)) /* Assigment of value for MOSCXTST in the CKGR_MOR register */
#define CKGR_MOR_KEY_Pos                      _UINT32_(16)                                         /* (CKGR_MOR) Write Access Password Position */
#define CKGR_MOR_KEY_Msk                      (_UINT32_(0xFF) << CKGR_MOR_KEY_Pos)                 /* (CKGR_MOR) Write Access Password Mask */
#define CKGR_MOR_KEY(value)                   (CKGR_MOR_KEY_Msk & (_UINT32_(value) << CKGR_MOR_KEY_Pos)) /* Assigment of value for KEY in the CKGR_MOR register */
#define   CKGR_MOR_KEY_PASSWD_Val             _UINT32_(0x37)                                       /* (CKGR_MOR) Writing any other value in this field aborts the write operation.Always reads as 0.  */
#define CKGR_MOR_KEY_PASSWD                   (CKGR_MOR_KEY_PASSWD_Val << CKGR_MOR_KEY_Pos)        /* (CKGR_MOR) Writing any other value in this field aborts the write operation.Always reads as 0. Position  */
#define CKGR_MOR_MOSCSEL_Pos                  _UINT32_(24)                                         /* (CKGR_MOR) Main Oscillator Selection Position */
#define CKGR_MOR_MOSCSEL_Msk                  (_UINT32_(0x1) << CKGR_MOR_MOSCSEL_Pos)              /* (CKGR_MOR) Main Oscillator Selection Mask */
#define CKGR_MOR_MOSCSEL(value)               (CKGR_MOR_MOSCSEL_Msk & (_UINT32_(value) << CKGR_MOR_MOSCSEL_Pos)) /* Assigment of value for MOSCSEL in the CKGR_MOR register */
#define CKGR_MOR_CFDEN_Pos                    _UINT32_(25)                                         /* (CKGR_MOR) Clock Failure Detector Enable Position */
#define CKGR_MOR_CFDEN_Msk                    (_UINT32_(0x1) << CKGR_MOR_CFDEN_Pos)                /* (CKGR_MOR) Clock Failure Detector Enable Mask */
#define CKGR_MOR_CFDEN(value)                 (CKGR_MOR_CFDEN_Msk & (_UINT32_(value) << CKGR_MOR_CFDEN_Pos)) /* Assigment of value for CFDEN in the CKGR_MOR register */
#define CKGR_MOR_Msk                          _UINT32_(0x03FFFF7F)                                 /* (CKGR_MOR) Register Mask  */


/* -------- CKGR_MCFR : (PMC Offset: 0x24) (R/W 32) Main Clock Frequency Register -------- */
#define CKGR_MCFR_MAINF_Pos                   _UINT32_(0)                                          /* (CKGR_MCFR) Main Clock Frequency Position */
#define CKGR_MCFR_MAINF_Msk                   (_UINT32_(0xFFFF) << CKGR_MCFR_MAINF_Pos)            /* (CKGR_MCFR) Main Clock Frequency Mask */
#define CKGR_MCFR_MAINF(value)                (CKGR_MCFR_MAINF_Msk & (_UINT32_(value) << CKGR_MCFR_MAINF_Pos)) /* Assigment of value for MAINF in the CKGR_MCFR register */
#define CKGR_MCFR_MAINFRDY_Pos                _UINT32_(16)                                         /* (CKGR_MCFR) Main Clock Frequency Measure Ready Position */
#define CKGR_MCFR_MAINFRDY_Msk                (_UINT32_(0x1) << CKGR_MCFR_MAINFRDY_Pos)            /* (CKGR_MCFR) Main Clock Frequency Measure Ready Mask */
#define CKGR_MCFR_MAINFRDY(value)             (CKGR_MCFR_MAINFRDY_Msk & (_UINT32_(value) << CKGR_MCFR_MAINFRDY_Pos)) /* Assigment of value for MAINFRDY in the CKGR_MCFR register */
#define CKGR_MCFR_RCMEAS_Pos                  _UINT32_(20)                                         /* (CKGR_MCFR) RC Oscillator Frequency Measure (write-only) Position */
#define CKGR_MCFR_RCMEAS_Msk                  (_UINT32_(0x1) << CKGR_MCFR_RCMEAS_Pos)              /* (CKGR_MCFR) RC Oscillator Frequency Measure (write-only) Mask */
#define CKGR_MCFR_RCMEAS(value)               (CKGR_MCFR_RCMEAS_Msk & (_UINT32_(value) << CKGR_MCFR_RCMEAS_Pos)) /* Assigment of value for RCMEAS in the CKGR_MCFR register */
#define CKGR_MCFR_Msk                         _UINT32_(0x0011FFFF)                                 /* (CKGR_MCFR) Register Mask  */


/* -------- CKGR_PLLAR : (PMC Offset: 0x28) (R/W 32) PLLA Register -------- */
#define CKGR_PLLAR_PLLAEN_Pos                 _UINT32_(0)                                          /* (CKGR_PLLAR) PLLA Control Position */
#define CKGR_PLLAR_PLLAEN_Msk                 (_UINT32_(0xFF) << CKGR_PLLAR_PLLAEN_Pos)            /* (CKGR_PLLAR) PLLA Control Mask */
#define CKGR_PLLAR_PLLAEN(value)              (CKGR_PLLAR_PLLAEN_Msk & (_UINT32_(value) << CKGR_PLLAR_PLLAEN_Pos)) /* Assigment of value for PLLAEN in the CKGR_PLLAR register */
#define CKGR_PLLAR_PLLACOUNT_Pos              _UINT32_(8)                                          /* (CKGR_PLLAR) PLLA Counter Position */
#define CKGR_PLLAR_PLLACOUNT_Msk              (_UINT32_(0x3F) << CKGR_PLLAR_PLLACOUNT_Pos)         /* (CKGR_PLLAR) PLLA Counter Mask */
#define CKGR_PLLAR_PLLACOUNT(value)           (CKGR_PLLAR_PLLACOUNT_Msk & (_UINT32_(value) << CKGR_PLLAR_PLLACOUNT_Pos)) /* Assigment of value for PLLACOUNT in the CKGR_PLLAR register */
#define CKGR_PLLAR_MULA_Pos                   _UINT32_(16)                                         /* (CKGR_PLLAR) PLLA Multiplier Position */
#define CKGR_PLLAR_MULA_Msk                   (_UINT32_(0xFFF) << CKGR_PLLAR_MULA_Pos)             /* (CKGR_PLLAR) PLLA Multiplier Mask */
#define CKGR_PLLAR_MULA(value)                (CKGR_PLLAR_MULA_Msk & (_UINT32_(value) << CKGR_PLLAR_MULA_Pos)) /* Assigment of value for MULA in the CKGR_PLLAR register */
#define CKGR_PLLAR_ZERO_Pos                   _UINT32_(29)                                         /* (CKGR_PLLAR)  Position */
#define CKGR_PLLAR_ZERO_Msk                   (_UINT32_(0x1) << CKGR_PLLAR_ZERO_Pos)               /* (CKGR_PLLAR)  Mask */
#define CKGR_PLLAR_ZERO(value)                (CKGR_PLLAR_ZERO_Msk & (_UINT32_(value) << CKGR_PLLAR_ZERO_Pos)) /* Assigment of value for ZERO in the CKGR_PLLAR register */
#define CKGR_PLLAR_Msk                        _UINT32_(0x2FFF3FFF)                                 /* (CKGR_PLLAR) Register Mask  */


/* -------- PMC_MCKR : (PMC Offset: 0x30) (R/W 32) Master Clock Register -------- */
#define PMC_MCKR_CSS_Pos                      _UINT32_(0)                                          /* (PMC_MCKR) Master Clock Source Selection Position */
#define PMC_MCKR_CSS_Msk                      (_UINT32_(0x3) << PMC_MCKR_CSS_Pos)                  /* (PMC_MCKR) Master Clock Source Selection Mask */
#define PMC_MCKR_CSS(value)                   (PMC_MCKR_CSS_Msk & (_UINT32_(value) << PMC_MCKR_CSS_Pos)) /* Assigment of value for CSS in the PMC_MCKR register */
#define   PMC_MCKR_CSS_SLOW_CLK_Val           _UINT32_(0x0)                                        /* (PMC_MCKR) Slow Clock is selected  */
#define   PMC_MCKR_CSS_MAIN_CLK_Val           _UINT32_(0x1)                                        /* (PMC_MCKR) Main Clock is selected  */
#define   PMC_MCKR_CSS_PLLA_CLK_Val           _UINT32_(0x2)                                        /* (PMC_MCKR) PLLA Clock is selected  */
#define PMC_MCKR_CSS_SLOW_CLK                 (PMC_MCKR_CSS_SLOW_CLK_Val << PMC_MCKR_CSS_Pos)      /* (PMC_MCKR) Slow Clock is selected Position  */
#define PMC_MCKR_CSS_MAIN_CLK                 (PMC_MCKR_CSS_MAIN_CLK_Val << PMC_MCKR_CSS_Pos)      /* (PMC_MCKR) Main Clock is selected Position  */
#define PMC_MCKR_CSS_PLLA_CLK                 (PMC_MCKR_CSS_PLLA_CLK_Val << PMC_MCKR_CSS_Pos)      /* (PMC_MCKR) PLLA Clock is selected Position  */
#define PMC_MCKR_PRES_Pos                     _UINT32_(4)                                          /* (PMC_MCKR) Processor Clock Prescaler Position */
#define PMC_MCKR_PRES_Msk                     (_UINT32_(0x7) << PMC_MCKR_PRES_Pos)                 /* (PMC_MCKR) Processor Clock Prescaler Mask */
#define PMC_MCKR_PRES(value)                  (PMC_MCKR_PRES_Msk & (_UINT32_(value) << PMC_MCKR_PRES_Pos)) /* Assigment of value for PRES in the PMC_MCKR register */
#define   PMC_MCKR_PRES_CLK_1_Val             _UINT32_(0x0)                                        /* (PMC_MCKR) Selected clock  */
#define   PMC_MCKR_PRES_CLK_2_Val             _UINT32_(0x1)                                        /* (PMC_MCKR) Selected clock divided by 2  */
#define   PMC_MCKR_PRES_CLK_4_Val             _UINT32_(0x2)                                        /* (PMC_MCKR) Selected clock divided by 4  */
#define   PMC_MCKR_PRES_CLK_8_Val             _UINT32_(0x3)                                        /* (PMC_MCKR) Selected clock divided by 8  */
#define   PMC_MCKR_PRES_CLK_16_Val            _UINT32_(0x4)                                        /* (PMC_MCKR) Selected clock divided by 16  */
#define   PMC_MCKR_PRES_CLK_32_Val            _UINT32_(0x5)                                        /* (PMC_MCKR) Selected clock divided by 32  */
#define   PMC_MCKR_PRES_CLK_64_Val            _UINT32_(0x6)                                        /* (PMC_MCKR) Selected clock divided by 64  */
#define   PMC_MCKR_PRES_CLK_3_Val             _UINT32_(0x7)                                        /* (PMC_MCKR) Selected clock divided by 3  */
#define PMC_MCKR_PRES_CLK_1                   (PMC_MCKR_PRES_CLK_1_Val << PMC_MCKR_PRES_Pos)       /* (PMC_MCKR) Selected clock Position  */
#define PMC_MCKR_PRES_CLK_2                   (PMC_MCKR_PRES_CLK_2_Val << PMC_MCKR_PRES_Pos)       /* (PMC_MCKR) Selected clock divided by 2 Position  */
#define PMC_MCKR_PRES_CLK_4                   (PMC_MCKR_PRES_CLK_4_Val << PMC_MCKR_PRES_Pos)       /* (PMC_MCKR) Selected clock divided by 4 Position  */
#define PMC_MCKR_PRES_CLK_8                   (PMC_MCKR_PRES_CLK_8_Val << PMC_MCKR_PRES_Pos)       /* (PMC_MCKR) Selected clock divided by 8 Position  */
#define PMC_MCKR_PRES_CLK_16                  (PMC_MCKR_PRES_CLK_16_Val << PMC_MCKR_PRES_Pos)      /* (PMC_MCKR) Selected clock divided by 16 Position  */
#define PMC_MCKR_PRES_CLK_32                  (PMC_MCKR_PRES_CLK_32_Val << PMC_MCKR_PRES_Pos)      /* (PMC_MCKR) Selected clock divided by 32 Position  */
#define PMC_MCKR_PRES_CLK_64                  (PMC_MCKR_PRES_CLK_64_Val << PMC_MCKR_PRES_Pos)      /* (PMC_MCKR) Selected clock divided by 64 Position  */
#define PMC_MCKR_PRES_CLK_3                   (PMC_MCKR_PRES_CLK_3_Val << PMC_MCKR_PRES_Pos)       /* (PMC_MCKR) Selected clock divided by 3 Position  */
#define PMC_MCKR_PLLADIV2_Pos                 _UINT32_(12)                                         /* (PMC_MCKR) PLLA Divisor by 2 Position */
#define PMC_MCKR_PLLADIV2_Msk                 (_UINT32_(0x1) << PMC_MCKR_PLLADIV2_Pos)             /* (PMC_MCKR) PLLA Divisor by 2 Mask */
#define PMC_MCKR_PLLADIV2(value)              (PMC_MCKR_PLLADIV2_Msk & (_UINT32_(value) << PMC_MCKR_PLLADIV2_Pos)) /* Assigment of value for PLLADIV2 in the PMC_MCKR register */
#define PMC_MCKR_Msk                          _UINT32_(0x00001073)                                 /* (PMC_MCKR) Register Mask  */

#define PMC_MCKR_PLLADIV_Pos                  _UINT32_(12)                                         /* (PMC_MCKR Position) PLLA Divisor by 2 */
#define PMC_MCKR_PLLADIV_Msk                  (_UINT32_(0x1) << PMC_MCKR_PLLADIV_Pos)              /* (PMC_MCKR Mask) PLLADIV */
#define PMC_MCKR_PLLADIV(value)               (PMC_MCKR_PLLADIV_Msk & (_UINT32_(value) << PMC_MCKR_PLLADIV_Pos)) 

/* -------- PMC_PCK : (PMC Offset: 0x40) (R/W 32) Programmable Clock 0 Register 0 -------- */
#define PMC_PCK_CSS_Pos                       _UINT32_(0)                                          /* (PMC_PCK) Master Clock Source Selection Position */
#define PMC_PCK_CSS_Msk                       (_UINT32_(0x7) << PMC_PCK_CSS_Pos)                   /* (PMC_PCK) Master Clock Source Selection Mask */
#define PMC_PCK_CSS(value)                    (PMC_PCK_CSS_Msk & (_UINT32_(value) << PMC_PCK_CSS_Pos)) /* Assigment of value for CSS in the PMC_PCK register */
#define   PMC_PCK_CSS_SLOW_CLK_Val            _UINT32_(0x0)                                        /* (PMC_PCK) Slow Clock is selected  */
#define   PMC_PCK_CSS_MAIN_CLK_Val            _UINT32_(0x1)                                        /* (PMC_PCK) Main Clock is selected  */
#define   PMC_PCK_CSS_PLLA_CLK_Val            _UINT32_(0x2)                                        /* (PMC_PCK) PLLA Clock is selected  */
#define   PMC_PCK_CSS_MCK_Val                 _UINT32_(0x4)                                        /* (PMC_PCK) Master Clock is selected  */
#define PMC_PCK_CSS_SLOW_CLK                  (PMC_PCK_CSS_SLOW_CLK_Val << PMC_PCK_CSS_Pos)        /* (PMC_PCK) Slow Clock is selected Position  */
#define PMC_PCK_CSS_MAIN_CLK                  (PMC_PCK_CSS_MAIN_CLK_Val << PMC_PCK_CSS_Pos)        /* (PMC_PCK) Main Clock is selected Position  */
#define PMC_PCK_CSS_PLLA_CLK                  (PMC_PCK_CSS_PLLA_CLK_Val << PMC_PCK_CSS_Pos)        /* (PMC_PCK) PLLA Clock is selected Position  */
#define PMC_PCK_CSS_MCK                       (PMC_PCK_CSS_MCK_Val << PMC_PCK_CSS_Pos)             /* (PMC_PCK) Master Clock is selected Position  */
#define PMC_PCK_PRES_Pos                      _UINT32_(4)                                          /* (PMC_PCK) Programmable Clock Prescaler Position */
#define PMC_PCK_PRES_Msk                      (_UINT32_(0x7) << PMC_PCK_PRES_Pos)                  /* (PMC_PCK) Programmable Clock Prescaler Mask */
#define PMC_PCK_PRES(value)                   (PMC_PCK_PRES_Msk & (_UINT32_(value) << PMC_PCK_PRES_Pos)) /* Assigment of value for PRES in the PMC_PCK register */
#define   PMC_PCK_PRES_CLK_1_Val              _UINT32_(0x0)                                        /* (PMC_PCK) Selected clock  */
#define   PMC_PCK_PRES_CLK_2_Val              _UINT32_(0x1)                                        /* (PMC_PCK) Selected clock divided by 2  */
#define   PMC_PCK_PRES_CLK_4_Val              _UINT32_(0x2)                                        /* (PMC_PCK) Selected clock divided by 4  */
#define   PMC_PCK_PRES_CLK_8_Val              _UINT32_(0x3)                                        /* (PMC_PCK) Selected clock divided by 8  */
#define   PMC_PCK_PRES_CLK_16_Val             _UINT32_(0x4)                                        /* (PMC_PCK) Selected clock divided by 16  */
#define   PMC_PCK_PRES_CLK_32_Val             _UINT32_(0x5)                                        /* (PMC_PCK) Selected clock divided by 32  */
#define   PMC_PCK_PRES_CLK_64_Val             _UINT32_(0x6)                                        /* (PMC_PCK) Selected clock divided by 64  */
#define PMC_PCK_PRES_CLK_1                    (PMC_PCK_PRES_CLK_1_Val << PMC_PCK_PRES_Pos)         /* (PMC_PCK) Selected clock Position  */
#define PMC_PCK_PRES_CLK_2                    (PMC_PCK_PRES_CLK_2_Val << PMC_PCK_PRES_Pos)         /* (PMC_PCK) Selected clock divided by 2 Position  */
#define PMC_PCK_PRES_CLK_4                    (PMC_PCK_PRES_CLK_4_Val << PMC_PCK_PRES_Pos)         /* (PMC_PCK) Selected clock divided by 4 Position  */
#define PMC_PCK_PRES_CLK_8                    (PMC_PCK_PRES_CLK_8_Val << PMC_PCK_PRES_Pos)         /* (PMC_PCK) Selected clock divided by 8 Position  */
#define PMC_PCK_PRES_CLK_16                   (PMC_PCK_PRES_CLK_16_Val << PMC_PCK_PRES_Pos)        /* (PMC_PCK) Selected clock divided by 16 Position  */
#define PMC_PCK_PRES_CLK_32                   (PMC_PCK_PRES_CLK_32_Val << PMC_PCK_PRES_Pos)        /* (PMC_PCK) Selected clock divided by 32 Position  */
#define PMC_PCK_PRES_CLK_64                   (PMC_PCK_PRES_CLK_64_Val << PMC_PCK_PRES_Pos)        /* (PMC_PCK) Selected clock divided by 64 Position  */
#define PMC_PCK_Msk                           _UINT32_(0x00000077)                                 /* (PMC_PCK) Register Mask  */


/* -------- PMC_IER : (PMC Offset: 0x60) ( /W 32) Interrupt Enable Register -------- */
#define PMC_IER_MOSCXTS_Pos                   _UINT32_(0)                                          /* (PMC_IER) Main Crystal Oscillator Status Interrupt Enable Position */
#define PMC_IER_MOSCXTS_Msk                   (_UINT32_(0x1) << PMC_IER_MOSCXTS_Pos)               /* (PMC_IER) Main Crystal Oscillator Status Interrupt Enable Mask */
#define PMC_IER_MOSCXTS(value)                (PMC_IER_MOSCXTS_Msk & (_UINT32_(value) << PMC_IER_MOSCXTS_Pos)) /* Assigment of value for MOSCXTS in the PMC_IER register */
#define PMC_IER_LOCKA_Pos                     _UINT32_(1)                                          /* (PMC_IER) PLLA Lock Interrupt Enable Position */
#define PMC_IER_LOCKA_Msk                     (_UINT32_(0x1) << PMC_IER_LOCKA_Pos)                 /* (PMC_IER) PLLA Lock Interrupt Enable Mask */
#define PMC_IER_LOCKA(value)                  (PMC_IER_LOCKA_Msk & (_UINT32_(value) << PMC_IER_LOCKA_Pos)) /* Assigment of value for LOCKA in the PMC_IER register */
#define PMC_IER_MCKRDY_Pos                    _UINT32_(3)                                          /* (PMC_IER) Master Clock Ready Interrupt Enable Position */
#define PMC_IER_MCKRDY_Msk                    (_UINT32_(0x1) << PMC_IER_MCKRDY_Pos)                /* (PMC_IER) Master Clock Ready Interrupt Enable Mask */
#define PMC_IER_MCKRDY(value)                 (PMC_IER_MCKRDY_Msk & (_UINT32_(value) << PMC_IER_MCKRDY_Pos)) /* Assigment of value for MCKRDY in the PMC_IER register */
#define PMC_IER_PCKRDY0_Pos                   _UINT32_(8)                                          /* (PMC_IER) Programmable Clock Ready 0 Interrupt Enable Position */
#define PMC_IER_PCKRDY0_Msk                   (_UINT32_(0x1) << PMC_IER_PCKRDY0_Pos)               /* (PMC_IER) Programmable Clock Ready 0 Interrupt Enable Mask */
#define PMC_IER_PCKRDY0(value)                (PMC_IER_PCKRDY0_Msk & (_UINT32_(value) << PMC_IER_PCKRDY0_Pos)) /* Assigment of value for PCKRDY0 in the PMC_IER register */
#define PMC_IER_PCKRDY1_Pos                   _UINT32_(9)                                          /* (PMC_IER) Programmable Clock Ready 1 Interrupt Enable Position */
#define PMC_IER_PCKRDY1_Msk                   (_UINT32_(0x1) << PMC_IER_PCKRDY1_Pos)               /* (PMC_IER) Programmable Clock Ready 1 Interrupt Enable Mask */
#define PMC_IER_PCKRDY1(value)                (PMC_IER_PCKRDY1_Msk & (_UINT32_(value) << PMC_IER_PCKRDY1_Pos)) /* Assigment of value for PCKRDY1 in the PMC_IER register */
#define PMC_IER_PCKRDY2_Pos                   _UINT32_(10)                                         /* (PMC_IER) Programmable Clock Ready 2 Interrupt Enable Position */
#define PMC_IER_PCKRDY2_Msk                   (_UINT32_(0x1) << PMC_IER_PCKRDY2_Pos)               /* (PMC_IER) Programmable Clock Ready 2 Interrupt Enable Mask */
#define PMC_IER_PCKRDY2(value)                (PMC_IER_PCKRDY2_Msk & (_UINT32_(value) << PMC_IER_PCKRDY2_Pos)) /* Assigment of value for PCKRDY2 in the PMC_IER register */
#define PMC_IER_MOSCSELS_Pos                  _UINT32_(16)                                         /* (PMC_IER) Main Oscillator Selection Status Interrupt Enable Position */
#define PMC_IER_MOSCSELS_Msk                  (_UINT32_(0x1) << PMC_IER_MOSCSELS_Pos)              /* (PMC_IER) Main Oscillator Selection Status Interrupt Enable Mask */
#define PMC_IER_MOSCSELS(value)               (PMC_IER_MOSCSELS_Msk & (_UINT32_(value) << PMC_IER_MOSCSELS_Pos)) /* Assigment of value for MOSCSELS in the PMC_IER register */
#define PMC_IER_MOSCRCS_Pos                   _UINT32_(17)                                         /* (PMC_IER) Main On-Chip RC Status Interrupt Enable Position */
#define PMC_IER_MOSCRCS_Msk                   (_UINT32_(0x1) << PMC_IER_MOSCRCS_Pos)               /* (PMC_IER) Main On-Chip RC Status Interrupt Enable Mask */
#define PMC_IER_MOSCRCS(value)                (PMC_IER_MOSCRCS_Msk & (_UINT32_(value) << PMC_IER_MOSCRCS_Pos)) /* Assigment of value for MOSCRCS in the PMC_IER register */
#define PMC_IER_CFDEV_Pos                     _UINT32_(18)                                         /* (PMC_IER) Clock Failure Detector Event Interrupt Enable Position */
#define PMC_IER_CFDEV_Msk                     (_UINT32_(0x1) << PMC_IER_CFDEV_Pos)                 /* (PMC_IER) Clock Failure Detector Event Interrupt Enable Mask */
#define PMC_IER_CFDEV(value)                  (PMC_IER_CFDEV_Msk & (_UINT32_(value) << PMC_IER_CFDEV_Pos)) /* Assigment of value for CFDEV in the PMC_IER register */
#define PMC_IER_Msk                           _UINT32_(0x0007070B)                                 /* (PMC_IER) Register Mask  */

#define PMC_IER_PCKRDY_Pos                    _UINT32_(8)                                          /* (PMC_IER Position) Programmable Clock Ready x Interrupt Enable */
#define PMC_IER_PCKRDY_Msk                    (_UINT32_(0x7) << PMC_IER_PCKRDY_Pos)                /* (PMC_IER Mask) PCKRDY */
#define PMC_IER_PCKRDY(value)                 (PMC_IER_PCKRDY_Msk & (_UINT32_(value) << PMC_IER_PCKRDY_Pos)) 

/* -------- PMC_IDR : (PMC Offset: 0x64) ( /W 32) Interrupt Disable Register -------- */
#define PMC_IDR_MOSCXTS_Pos                   _UINT32_(0)                                          /* (PMC_IDR) Main Crystal Oscillator Status Interrupt Disable Position */
#define PMC_IDR_MOSCXTS_Msk                   (_UINT32_(0x1) << PMC_IDR_MOSCXTS_Pos)               /* (PMC_IDR) Main Crystal Oscillator Status Interrupt Disable Mask */
#define PMC_IDR_MOSCXTS(value)                (PMC_IDR_MOSCXTS_Msk & (_UINT32_(value) << PMC_IDR_MOSCXTS_Pos)) /* Assigment of value for MOSCXTS in the PMC_IDR register */
#define PMC_IDR_LOCKA_Pos                     _UINT32_(1)                                          /* (PMC_IDR) PLLA Lock Interrupt Disable Position */
#define PMC_IDR_LOCKA_Msk                     (_UINT32_(0x1) << PMC_IDR_LOCKA_Pos)                 /* (PMC_IDR) PLLA Lock Interrupt Disable Mask */
#define PMC_IDR_LOCKA(value)                  (PMC_IDR_LOCKA_Msk & (_UINT32_(value) << PMC_IDR_LOCKA_Pos)) /* Assigment of value for LOCKA in the PMC_IDR register */
#define PMC_IDR_MCKRDY_Pos                    _UINT32_(3)                                          /* (PMC_IDR) Master Clock Ready Interrupt Disable Position */
#define PMC_IDR_MCKRDY_Msk                    (_UINT32_(0x1) << PMC_IDR_MCKRDY_Pos)                /* (PMC_IDR) Master Clock Ready Interrupt Disable Mask */
#define PMC_IDR_MCKRDY(value)                 (PMC_IDR_MCKRDY_Msk & (_UINT32_(value) << PMC_IDR_MCKRDY_Pos)) /* Assigment of value for MCKRDY in the PMC_IDR register */
#define PMC_IDR_PCKRDY0_Pos                   _UINT32_(8)                                          /* (PMC_IDR) Programmable Clock Ready 0 Interrupt Disable Position */
#define PMC_IDR_PCKRDY0_Msk                   (_UINT32_(0x1) << PMC_IDR_PCKRDY0_Pos)               /* (PMC_IDR) Programmable Clock Ready 0 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY0(value)                (PMC_IDR_PCKRDY0_Msk & (_UINT32_(value) << PMC_IDR_PCKRDY0_Pos)) /* Assigment of value for PCKRDY0 in the PMC_IDR register */
#define PMC_IDR_PCKRDY1_Pos                   _UINT32_(9)                                          /* (PMC_IDR) Programmable Clock Ready 1 Interrupt Disable Position */
#define PMC_IDR_PCKRDY1_Msk                   (_UINT32_(0x1) << PMC_IDR_PCKRDY1_Pos)               /* (PMC_IDR) Programmable Clock Ready 1 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY1(value)                (PMC_IDR_PCKRDY1_Msk & (_UINT32_(value) << PMC_IDR_PCKRDY1_Pos)) /* Assigment of value for PCKRDY1 in the PMC_IDR register */
#define PMC_IDR_PCKRDY2_Pos                   _UINT32_(10)                                         /* (PMC_IDR) Programmable Clock Ready 2 Interrupt Disable Position */
#define PMC_IDR_PCKRDY2_Msk                   (_UINT32_(0x1) << PMC_IDR_PCKRDY2_Pos)               /* (PMC_IDR) Programmable Clock Ready 2 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY2(value)                (PMC_IDR_PCKRDY2_Msk & (_UINT32_(value) << PMC_IDR_PCKRDY2_Pos)) /* Assigment of value for PCKRDY2 in the PMC_IDR register */
#define PMC_IDR_MOSCSELS_Pos                  _UINT32_(16)                                         /* (PMC_IDR) Main Oscillator Selection Status Interrupt Disable Position */
#define PMC_IDR_MOSCSELS_Msk                  (_UINT32_(0x1) << PMC_IDR_MOSCSELS_Pos)              /* (PMC_IDR) Main Oscillator Selection Status Interrupt Disable Mask */
#define PMC_IDR_MOSCSELS(value)               (PMC_IDR_MOSCSELS_Msk & (_UINT32_(value) << PMC_IDR_MOSCSELS_Pos)) /* Assigment of value for MOSCSELS in the PMC_IDR register */
#define PMC_IDR_MOSCRCS_Pos                   _UINT32_(17)                                         /* (PMC_IDR) Main On-Chip RC Status Interrupt Disable Position */
#define PMC_IDR_MOSCRCS_Msk                   (_UINT32_(0x1) << PMC_IDR_MOSCRCS_Pos)               /* (PMC_IDR) Main On-Chip RC Status Interrupt Disable Mask */
#define PMC_IDR_MOSCRCS(value)                (PMC_IDR_MOSCRCS_Msk & (_UINT32_(value) << PMC_IDR_MOSCRCS_Pos)) /* Assigment of value for MOSCRCS in the PMC_IDR register */
#define PMC_IDR_CFDEV_Pos                     _UINT32_(18)                                         /* (PMC_IDR) Clock Failure Detector Event Interrupt Disable Position */
#define PMC_IDR_CFDEV_Msk                     (_UINT32_(0x1) << PMC_IDR_CFDEV_Pos)                 /* (PMC_IDR) Clock Failure Detector Event Interrupt Disable Mask */
#define PMC_IDR_CFDEV(value)                  (PMC_IDR_CFDEV_Msk & (_UINT32_(value) << PMC_IDR_CFDEV_Pos)) /* Assigment of value for CFDEV in the PMC_IDR register */
#define PMC_IDR_Msk                           _UINT32_(0x0007070B)                                 /* (PMC_IDR) Register Mask  */

#define PMC_IDR_PCKRDY_Pos                    _UINT32_(8)                                          /* (PMC_IDR Position) Programmable Clock Ready x Interrupt Disable */
#define PMC_IDR_PCKRDY_Msk                    (_UINT32_(0x7) << PMC_IDR_PCKRDY_Pos)                /* (PMC_IDR Mask) PCKRDY */
#define PMC_IDR_PCKRDY(value)                 (PMC_IDR_PCKRDY_Msk & (_UINT32_(value) << PMC_IDR_PCKRDY_Pos)) 

/* -------- PMC_SR : (PMC Offset: 0x68) ( R/ 32) Status Register -------- */
#define PMC_SR_MOSCXTS_Pos                    _UINT32_(0)                                          /* (PMC_SR) Main Crystal Oscillator Status Position */
#define PMC_SR_MOSCXTS_Msk                    (_UINT32_(0x1) << PMC_SR_MOSCXTS_Pos)                /* (PMC_SR) Main Crystal Oscillator Status Mask */
#define PMC_SR_MOSCXTS(value)                 (PMC_SR_MOSCXTS_Msk & (_UINT32_(value) << PMC_SR_MOSCXTS_Pos)) /* Assigment of value for MOSCXTS in the PMC_SR register */
#define PMC_SR_LOCKA_Pos                      _UINT32_(1)                                          /* (PMC_SR) PLLA Lock Status Position */
#define PMC_SR_LOCKA_Msk                      (_UINT32_(0x1) << PMC_SR_LOCKA_Pos)                  /* (PMC_SR) PLLA Lock Status Mask */
#define PMC_SR_LOCKA(value)                   (PMC_SR_LOCKA_Msk & (_UINT32_(value) << PMC_SR_LOCKA_Pos)) /* Assigment of value for LOCKA in the PMC_SR register */
#define PMC_SR_MCKRDY_Pos                     _UINT32_(3)                                          /* (PMC_SR) Master Clock Status Position */
#define PMC_SR_MCKRDY_Msk                     (_UINT32_(0x1) << PMC_SR_MCKRDY_Pos)                 /* (PMC_SR) Master Clock Status Mask */
#define PMC_SR_MCKRDY(value)                  (PMC_SR_MCKRDY_Msk & (_UINT32_(value) << PMC_SR_MCKRDY_Pos)) /* Assigment of value for MCKRDY in the PMC_SR register */
#define PMC_SR_OSCSELS_Pos                    _UINT32_(7)                                          /* (PMC_SR) Slow Clock Oscillator Selection Position */
#define PMC_SR_OSCSELS_Msk                    (_UINT32_(0x1) << PMC_SR_OSCSELS_Pos)                /* (PMC_SR) Slow Clock Oscillator Selection Mask */
#define PMC_SR_OSCSELS(value)                 (PMC_SR_OSCSELS_Msk & (_UINT32_(value) << PMC_SR_OSCSELS_Pos)) /* Assigment of value for OSCSELS in the PMC_SR register */
#define PMC_SR_PCKRDY0_Pos                    _UINT32_(8)                                          /* (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY0_Msk                    (_UINT32_(0x1) << PMC_SR_PCKRDY0_Pos)                /* (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY0(value)                 (PMC_SR_PCKRDY0_Msk & (_UINT32_(value) << PMC_SR_PCKRDY0_Pos)) /* Assigment of value for PCKRDY0 in the PMC_SR register */
#define PMC_SR_PCKRDY1_Pos                    _UINT32_(9)                                          /* (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY1_Msk                    (_UINT32_(0x1) << PMC_SR_PCKRDY1_Pos)                /* (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY1(value)                 (PMC_SR_PCKRDY1_Msk & (_UINT32_(value) << PMC_SR_PCKRDY1_Pos)) /* Assigment of value for PCKRDY1 in the PMC_SR register */
#define PMC_SR_PCKRDY2_Pos                    _UINT32_(10)                                         /* (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY2_Msk                    (_UINT32_(0x1) << PMC_SR_PCKRDY2_Pos)                /* (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY2(value)                 (PMC_SR_PCKRDY2_Msk & (_UINT32_(value) << PMC_SR_PCKRDY2_Pos)) /* Assigment of value for PCKRDY2 in the PMC_SR register */
#define PMC_SR_MOSCSELS_Pos                   _UINT32_(16)                                         /* (PMC_SR) Main Oscillator Selection Status Position */
#define PMC_SR_MOSCSELS_Msk                   (_UINT32_(0x1) << PMC_SR_MOSCSELS_Pos)               /* (PMC_SR) Main Oscillator Selection Status Mask */
#define PMC_SR_MOSCSELS(value)                (PMC_SR_MOSCSELS_Msk & (_UINT32_(value) << PMC_SR_MOSCSELS_Pos)) /* Assigment of value for MOSCSELS in the PMC_SR register */
#define PMC_SR_MOSCRCS_Pos                    _UINT32_(17)                                         /* (PMC_SR) Main On-Chip RC Oscillator Status Position */
#define PMC_SR_MOSCRCS_Msk                    (_UINT32_(0x1) << PMC_SR_MOSCRCS_Pos)                /* (PMC_SR) Main On-Chip RC Oscillator Status Mask */
#define PMC_SR_MOSCRCS(value)                 (PMC_SR_MOSCRCS_Msk & (_UINT32_(value) << PMC_SR_MOSCRCS_Pos)) /* Assigment of value for MOSCRCS in the PMC_SR register */
#define PMC_SR_CFDEV_Pos                      _UINT32_(18)                                         /* (PMC_SR) Clock Failure Detector Event Position */
#define PMC_SR_CFDEV_Msk                      (_UINT32_(0x1) << PMC_SR_CFDEV_Pos)                  /* (PMC_SR) Clock Failure Detector Event Mask */
#define PMC_SR_CFDEV(value)                   (PMC_SR_CFDEV_Msk & (_UINT32_(value) << PMC_SR_CFDEV_Pos)) /* Assigment of value for CFDEV in the PMC_SR register */
#define PMC_SR_CFDS_Pos                       _UINT32_(19)                                         /* (PMC_SR) Clock Failure Detector Status Position */
#define PMC_SR_CFDS_Msk                       (_UINT32_(0x1) << PMC_SR_CFDS_Pos)                   /* (PMC_SR) Clock Failure Detector Status Mask */
#define PMC_SR_CFDS(value)                    (PMC_SR_CFDS_Msk & (_UINT32_(value) << PMC_SR_CFDS_Pos)) /* Assigment of value for CFDS in the PMC_SR register */
#define PMC_SR_FOS_Pos                        _UINT32_(20)                                         /* (PMC_SR) Clock Failure Detector Fault Output Status Position */
#define PMC_SR_FOS_Msk                        (_UINT32_(0x1) << PMC_SR_FOS_Pos)                    /* (PMC_SR) Clock Failure Detector Fault Output Status Mask */
#define PMC_SR_FOS(value)                     (PMC_SR_FOS_Msk & (_UINT32_(value) << PMC_SR_FOS_Pos)) /* Assigment of value for FOS in the PMC_SR register */
#define PMC_SR_Msk                            _UINT32_(0x001F078B)                                 /* (PMC_SR) Register Mask  */

#define PMC_SR_PCKRDY_Pos                     _UINT32_(8)                                          /* (PMC_SR Position) Programmable Clock Ready Status */
#define PMC_SR_PCKRDY_Msk                     (_UINT32_(0x7) << PMC_SR_PCKRDY_Pos)                 /* (PMC_SR Mask) PCKRDY */
#define PMC_SR_PCKRDY(value)                  (PMC_SR_PCKRDY_Msk & (_UINT32_(value) << PMC_SR_PCKRDY_Pos)) 

/* -------- PMC_IMR : (PMC Offset: 0x6C) ( R/ 32) Interrupt Mask Register -------- */
#define PMC_IMR_MOSCXTS_Pos                   _UINT32_(0)                                          /* (PMC_IMR) Main Crystal Oscillator Status Interrupt Mask Position */
#define PMC_IMR_MOSCXTS_Msk                   (_UINT32_(0x1) << PMC_IMR_MOSCXTS_Pos)               /* (PMC_IMR) Main Crystal Oscillator Status Interrupt Mask Mask */
#define PMC_IMR_MOSCXTS(value)                (PMC_IMR_MOSCXTS_Msk & (_UINT32_(value) << PMC_IMR_MOSCXTS_Pos)) /* Assigment of value for MOSCXTS in the PMC_IMR register */
#define PMC_IMR_LOCKA_Pos                     _UINT32_(1)                                          /* (PMC_IMR) PLLA Lock Interrupt Mask Position */
#define PMC_IMR_LOCKA_Msk                     (_UINT32_(0x1) << PMC_IMR_LOCKA_Pos)                 /* (PMC_IMR) PLLA Lock Interrupt Mask Mask */
#define PMC_IMR_LOCKA(value)                  (PMC_IMR_LOCKA_Msk & (_UINT32_(value) << PMC_IMR_LOCKA_Pos)) /* Assigment of value for LOCKA in the PMC_IMR register */
#define PMC_IMR_MCKRDY_Pos                    _UINT32_(3)                                          /* (PMC_IMR) Master Clock Ready Interrupt Mask Position */
#define PMC_IMR_MCKRDY_Msk                    (_UINT32_(0x1) << PMC_IMR_MCKRDY_Pos)                /* (PMC_IMR) Master Clock Ready Interrupt Mask Mask */
#define PMC_IMR_MCKRDY(value)                 (PMC_IMR_MCKRDY_Msk & (_UINT32_(value) << PMC_IMR_MCKRDY_Pos)) /* Assigment of value for MCKRDY in the PMC_IMR register */
#define PMC_IMR_PCKRDY0_Pos                   _UINT32_(8)                                          /* (PMC_IMR) Programmable Clock Ready 0 Interrupt Mask Position */
#define PMC_IMR_PCKRDY0_Msk                   (_UINT32_(0x1) << PMC_IMR_PCKRDY0_Pos)               /* (PMC_IMR) Programmable Clock Ready 0 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY0(value)                (PMC_IMR_PCKRDY0_Msk & (_UINT32_(value) << PMC_IMR_PCKRDY0_Pos)) /* Assigment of value for PCKRDY0 in the PMC_IMR register */
#define PMC_IMR_PCKRDY1_Pos                   _UINT32_(9)                                          /* (PMC_IMR) Programmable Clock Ready 1 Interrupt Mask Position */
#define PMC_IMR_PCKRDY1_Msk                   (_UINT32_(0x1) << PMC_IMR_PCKRDY1_Pos)               /* (PMC_IMR) Programmable Clock Ready 1 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY1(value)                (PMC_IMR_PCKRDY1_Msk & (_UINT32_(value) << PMC_IMR_PCKRDY1_Pos)) /* Assigment of value for PCKRDY1 in the PMC_IMR register */
#define PMC_IMR_PCKRDY2_Pos                   _UINT32_(10)                                         /* (PMC_IMR) Programmable Clock Ready 2 Interrupt Mask Position */
#define PMC_IMR_PCKRDY2_Msk                   (_UINT32_(0x1) << PMC_IMR_PCKRDY2_Pos)               /* (PMC_IMR) Programmable Clock Ready 2 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY2(value)                (PMC_IMR_PCKRDY2_Msk & (_UINT32_(value) << PMC_IMR_PCKRDY2_Pos)) /* Assigment of value for PCKRDY2 in the PMC_IMR register */
#define PMC_IMR_MOSCSELS_Pos                  _UINT32_(16)                                         /* (PMC_IMR) Main Oscillator Selection Status Interrupt Mask Position */
#define PMC_IMR_MOSCSELS_Msk                  (_UINT32_(0x1) << PMC_IMR_MOSCSELS_Pos)              /* (PMC_IMR) Main Oscillator Selection Status Interrupt Mask Mask */
#define PMC_IMR_MOSCSELS(value)               (PMC_IMR_MOSCSELS_Msk & (_UINT32_(value) << PMC_IMR_MOSCSELS_Pos)) /* Assigment of value for MOSCSELS in the PMC_IMR register */
#define PMC_IMR_MOSCRCS_Pos                   _UINT32_(17)                                         /* (PMC_IMR) Main On-Chip RC Status Interrupt Mask Position */
#define PMC_IMR_MOSCRCS_Msk                   (_UINT32_(0x1) << PMC_IMR_MOSCRCS_Pos)               /* (PMC_IMR) Main On-Chip RC Status Interrupt Mask Mask */
#define PMC_IMR_MOSCRCS(value)                (PMC_IMR_MOSCRCS_Msk & (_UINT32_(value) << PMC_IMR_MOSCRCS_Pos)) /* Assigment of value for MOSCRCS in the PMC_IMR register */
#define PMC_IMR_CFDEV_Pos                     _UINT32_(18)                                         /* (PMC_IMR) Clock Failure Detector Event Interrupt Mask Position */
#define PMC_IMR_CFDEV_Msk                     (_UINT32_(0x1) << PMC_IMR_CFDEV_Pos)                 /* (PMC_IMR) Clock Failure Detector Event Interrupt Mask Mask */
#define PMC_IMR_CFDEV(value)                  (PMC_IMR_CFDEV_Msk & (_UINT32_(value) << PMC_IMR_CFDEV_Pos)) /* Assigment of value for CFDEV in the PMC_IMR register */
#define PMC_IMR_Msk                           _UINT32_(0x0007070B)                                 /* (PMC_IMR) Register Mask  */

#define PMC_IMR_PCKRDY_Pos                    _UINT32_(8)                                          /* (PMC_IMR Position) Programmable Clock Ready x Interrupt Mask */
#define PMC_IMR_PCKRDY_Msk                    (_UINT32_(0x7) << PMC_IMR_PCKRDY_Pos)                /* (PMC_IMR Mask) PCKRDY */
#define PMC_IMR_PCKRDY(value)                 (PMC_IMR_PCKRDY_Msk & (_UINT32_(value) << PMC_IMR_PCKRDY_Pos)) 

/* -------- PMC_FSMR : (PMC Offset: 0x70) (R/W 32) Fast Startup Mode Register -------- */
#define PMC_FSMR_FSTT0_Pos                    _UINT32_(0)                                          /* (PMC_FSMR) Fast Startup Input Enable 0 Position */
#define PMC_FSMR_FSTT0_Msk                    (_UINT32_(0x1) << PMC_FSMR_FSTT0_Pos)                /* (PMC_FSMR) Fast Startup Input Enable 0 Mask */
#define PMC_FSMR_FSTT0(value)                 (PMC_FSMR_FSTT0_Msk & (_UINT32_(value) << PMC_FSMR_FSTT0_Pos)) /* Assigment of value for FSTT0 in the PMC_FSMR register */
#define PMC_FSMR_FSTT1_Pos                    _UINT32_(1)                                          /* (PMC_FSMR) Fast Startup Input Enable 1 Position */
#define PMC_FSMR_FSTT1_Msk                    (_UINT32_(0x1) << PMC_FSMR_FSTT1_Pos)                /* (PMC_FSMR) Fast Startup Input Enable 1 Mask */
#define PMC_FSMR_FSTT1(value)                 (PMC_FSMR_FSTT1_Msk & (_UINT32_(value) << PMC_FSMR_FSTT1_Pos)) /* Assigment of value for FSTT1 in the PMC_FSMR register */
#define PMC_FSMR_FSTT2_Pos                    _UINT32_(2)                                          /* (PMC_FSMR) Fast Startup Input Enable 2 Position */
#define PMC_FSMR_FSTT2_Msk                    (_UINT32_(0x1) << PMC_FSMR_FSTT2_Pos)                /* (PMC_FSMR) Fast Startup Input Enable 2 Mask */
#define PMC_FSMR_FSTT2(value)                 (PMC_FSMR_FSTT2_Msk & (_UINT32_(value) << PMC_FSMR_FSTT2_Pos)) /* Assigment of value for FSTT2 in the PMC_FSMR register */
#define PMC_FSMR_FSTT3_Pos                    _UINT32_(3)                                          /* (PMC_FSMR) Fast Startup Input Enable 3 Position */
#define PMC_FSMR_FSTT3_Msk                    (_UINT32_(0x1) << PMC_FSMR_FSTT3_Pos)                /* (PMC_FSMR) Fast Startup Input Enable 3 Mask */
#define PMC_FSMR_FSTT3(value)                 (PMC_FSMR_FSTT3_Msk & (_UINT32_(value) << PMC_FSMR_FSTT3_Pos)) /* Assigment of value for FSTT3 in the PMC_FSMR register */
#define PMC_FSMR_FSTT4_Pos                    _UINT32_(4)                                          /* (PMC_FSMR) Fast Startup Input Enable 4 Position */
#define PMC_FSMR_FSTT4_Msk                    (_UINT32_(0x1) << PMC_FSMR_FSTT4_Pos)                /* (PMC_FSMR) Fast Startup Input Enable 4 Mask */
#define PMC_FSMR_FSTT4(value)                 (PMC_FSMR_FSTT4_Msk & (_UINT32_(value) << PMC_FSMR_FSTT4_Pos)) /* Assigment of value for FSTT4 in the PMC_FSMR register */
#define PMC_FSMR_FSTT5_Pos                    _UINT32_(5)                                          /* (PMC_FSMR) Fast Startup Input Enable 5 Position */
#define PMC_FSMR_FSTT5_Msk                    (_UINT32_(0x1) << PMC_FSMR_FSTT5_Pos)                /* (PMC_FSMR) Fast Startup Input Enable 5 Mask */
#define PMC_FSMR_FSTT5(value)                 (PMC_FSMR_FSTT5_Msk & (_UINT32_(value) << PMC_FSMR_FSTT5_Pos)) /* Assigment of value for FSTT5 in the PMC_FSMR register */
#define PMC_FSMR_FSTT6_Pos                    _UINT32_(6)                                          /* (PMC_FSMR) Fast Startup Input Enable 6 Position */
#define PMC_FSMR_FSTT6_Msk                    (_UINT32_(0x1) << PMC_FSMR_FSTT6_Pos)                /* (PMC_FSMR) Fast Startup Input Enable 6 Mask */
#define PMC_FSMR_FSTT6(value)                 (PMC_FSMR_FSTT6_Msk & (_UINT32_(value) << PMC_FSMR_FSTT6_Pos)) /* Assigment of value for FSTT6 in the PMC_FSMR register */
#define PMC_FSMR_FSTT7_Pos                    _UINT32_(7)                                          /* (PMC_FSMR) Fast Startup Input Enable 7 Position */
#define PMC_FSMR_FSTT7_Msk                    (_UINT32_(0x1) << PMC_FSMR_FSTT7_Pos)                /* (PMC_FSMR) Fast Startup Input Enable 7 Mask */
#define PMC_FSMR_FSTT7(value)                 (PMC_FSMR_FSTT7_Msk & (_UINT32_(value) << PMC_FSMR_FSTT7_Pos)) /* Assigment of value for FSTT7 in the PMC_FSMR register */
#define PMC_FSMR_FSTT8_Pos                    _UINT32_(8)                                          /* (PMC_FSMR) Fast Startup Input Enable 8 Position */
#define PMC_FSMR_FSTT8_Msk                    (_UINT32_(0x1) << PMC_FSMR_FSTT8_Pos)                /* (PMC_FSMR) Fast Startup Input Enable 8 Mask */
#define PMC_FSMR_FSTT8(value)                 (PMC_FSMR_FSTT8_Msk & (_UINT32_(value) << PMC_FSMR_FSTT8_Pos)) /* Assigment of value for FSTT8 in the PMC_FSMR register */
#define PMC_FSMR_FSTT9_Pos                    _UINT32_(9)                                          /* (PMC_FSMR) Fast Startup Input Enable 9 Position */
#define PMC_FSMR_FSTT9_Msk                    (_UINT32_(0x1) << PMC_FSMR_FSTT9_Pos)                /* (PMC_FSMR) Fast Startup Input Enable 9 Mask */
#define PMC_FSMR_FSTT9(value)                 (PMC_FSMR_FSTT9_Msk & (_UINT32_(value) << PMC_FSMR_FSTT9_Pos)) /* Assigment of value for FSTT9 in the PMC_FSMR register */
#define PMC_FSMR_FSTT10_Pos                   _UINT32_(10)                                         /* (PMC_FSMR) Fast Startup Input Enable 10 Position */
#define PMC_FSMR_FSTT10_Msk                   (_UINT32_(0x1) << PMC_FSMR_FSTT10_Pos)               /* (PMC_FSMR) Fast Startup Input Enable 10 Mask */
#define PMC_FSMR_FSTT10(value)                (PMC_FSMR_FSTT10_Msk & (_UINT32_(value) << PMC_FSMR_FSTT10_Pos)) /* Assigment of value for FSTT10 in the PMC_FSMR register */
#define PMC_FSMR_FSTT11_Pos                   _UINT32_(11)                                         /* (PMC_FSMR) Fast Startup Input Enable 11 Position */
#define PMC_FSMR_FSTT11_Msk                   (_UINT32_(0x1) << PMC_FSMR_FSTT11_Pos)               /* (PMC_FSMR) Fast Startup Input Enable 11 Mask */
#define PMC_FSMR_FSTT11(value)                (PMC_FSMR_FSTT11_Msk & (_UINT32_(value) << PMC_FSMR_FSTT11_Pos)) /* Assigment of value for FSTT11 in the PMC_FSMR register */
#define PMC_FSMR_FSTT12_Pos                   _UINT32_(12)                                         /* (PMC_FSMR) Fast Startup Input Enable 12 Position */
#define PMC_FSMR_FSTT12_Msk                   (_UINT32_(0x1) << PMC_FSMR_FSTT12_Pos)               /* (PMC_FSMR) Fast Startup Input Enable 12 Mask */
#define PMC_FSMR_FSTT12(value)                (PMC_FSMR_FSTT12_Msk & (_UINT32_(value) << PMC_FSMR_FSTT12_Pos)) /* Assigment of value for FSTT12 in the PMC_FSMR register */
#define PMC_FSMR_FSTT13_Pos                   _UINT32_(13)                                         /* (PMC_FSMR) Fast Startup Input Enable 13 Position */
#define PMC_FSMR_FSTT13_Msk                   (_UINT32_(0x1) << PMC_FSMR_FSTT13_Pos)               /* (PMC_FSMR) Fast Startup Input Enable 13 Mask */
#define PMC_FSMR_FSTT13(value)                (PMC_FSMR_FSTT13_Msk & (_UINT32_(value) << PMC_FSMR_FSTT13_Pos)) /* Assigment of value for FSTT13 in the PMC_FSMR register */
#define PMC_FSMR_FSTT14_Pos                   _UINT32_(14)                                         /* (PMC_FSMR) Fast Startup Input Enable 14 Position */
#define PMC_FSMR_FSTT14_Msk                   (_UINT32_(0x1) << PMC_FSMR_FSTT14_Pos)               /* (PMC_FSMR) Fast Startup Input Enable 14 Mask */
#define PMC_FSMR_FSTT14(value)                (PMC_FSMR_FSTT14_Msk & (_UINT32_(value) << PMC_FSMR_FSTT14_Pos)) /* Assigment of value for FSTT14 in the PMC_FSMR register */
#define PMC_FSMR_FSTT15_Pos                   _UINT32_(15)                                         /* (PMC_FSMR) Fast Startup Input Enable 15 Position */
#define PMC_FSMR_FSTT15_Msk                   (_UINT32_(0x1) << PMC_FSMR_FSTT15_Pos)               /* (PMC_FSMR) Fast Startup Input Enable 15 Mask */
#define PMC_FSMR_FSTT15(value)                (PMC_FSMR_FSTT15_Msk & (_UINT32_(value) << PMC_FSMR_FSTT15_Pos)) /* Assigment of value for FSTT15 in the PMC_FSMR register */
#define PMC_FSMR_RTTAL_Pos                    _UINT32_(16)                                         /* (PMC_FSMR) RTT Alarm Enable Position */
#define PMC_FSMR_RTTAL_Msk                    (_UINT32_(0x1) << PMC_FSMR_RTTAL_Pos)                /* (PMC_FSMR) RTT Alarm Enable Mask */
#define PMC_FSMR_RTTAL(value)                 (PMC_FSMR_RTTAL_Msk & (_UINT32_(value) << PMC_FSMR_RTTAL_Pos)) /* Assigment of value for RTTAL in the PMC_FSMR register */
#define PMC_FSMR_RTCAL_Pos                    _UINT32_(17)                                         /* (PMC_FSMR) RTC Alarm Enable Position */
#define PMC_FSMR_RTCAL_Msk                    (_UINT32_(0x1) << PMC_FSMR_RTCAL_Pos)                /* (PMC_FSMR) RTC Alarm Enable Mask */
#define PMC_FSMR_RTCAL(value)                 (PMC_FSMR_RTCAL_Msk & (_UINT32_(value) << PMC_FSMR_RTCAL_Pos)) /* Assigment of value for RTCAL in the PMC_FSMR register */
#define PMC_FSMR_LPM_Pos                      _UINT32_(20)                                         /* (PMC_FSMR) Low-power Mode Position */
#define PMC_FSMR_LPM_Msk                      (_UINT32_(0x1) << PMC_FSMR_LPM_Pos)                  /* (PMC_FSMR) Low-power Mode Mask */
#define PMC_FSMR_LPM(value)                   (PMC_FSMR_LPM_Msk & (_UINT32_(value) << PMC_FSMR_LPM_Pos)) /* Assigment of value for LPM in the PMC_FSMR register */
#define PMC_FSMR_FLPM_Pos                     _UINT32_(21)                                         /* (PMC_FSMR) Flash Low-power Mode Position */
#define PMC_FSMR_FLPM_Msk                     (_UINT32_(0x3) << PMC_FSMR_FLPM_Pos)                 /* (PMC_FSMR) Flash Low-power Mode Mask */
#define PMC_FSMR_FLPM(value)                  (PMC_FSMR_FLPM_Msk & (_UINT32_(value) << PMC_FSMR_FLPM_Pos)) /* Assigment of value for FLPM in the PMC_FSMR register */
#define   PMC_FSMR_FLPM_FLASH_STANDBY_Val     _UINT32_(0x0)                                        /* (PMC_FSMR) Flash is in Standby Mode when system enters Wait Mode  */
#define   PMC_FSMR_FLPM_FLASH_DEEP_POWERDOWN_Val _UINT32_(0x1)                                        /* (PMC_FSMR) Flash is in Deep-power-down mode when system enters Wait Mode  */
#define   PMC_FSMR_FLPM_FLASH_IDLE_Val        _UINT32_(0x2)                                        /* (PMC_FSMR) Idle mode  */
#define PMC_FSMR_FLPM_FLASH_STANDBY           (PMC_FSMR_FLPM_FLASH_STANDBY_Val << PMC_FSMR_FLPM_Pos) /* (PMC_FSMR) Flash is in Standby Mode when system enters Wait Mode Position  */
#define PMC_FSMR_FLPM_FLASH_DEEP_POWERDOWN    (PMC_FSMR_FLPM_FLASH_DEEP_POWERDOWN_Val << PMC_FSMR_FLPM_Pos) /* (PMC_FSMR) Flash is in Deep-power-down mode when system enters Wait Mode Position  */
#define PMC_FSMR_FLPM_FLASH_IDLE              (PMC_FSMR_FLPM_FLASH_IDLE_Val << PMC_FSMR_FLPM_Pos)  /* (PMC_FSMR) Idle mode Position  */
#define PMC_FSMR_Msk                          _UINT32_(0x0073FFFF)                                 /* (PMC_FSMR) Register Mask  */

#define PMC_FSMR_FSTT_Pos                     _UINT32_(0)                                          /* (PMC_FSMR Position) Fast Startup Input Enable x */
#define PMC_FSMR_FSTT_Msk                     (_UINT32_(0xFFFF) << PMC_FSMR_FSTT_Pos)              /* (PMC_FSMR Mask) FSTT */
#define PMC_FSMR_FSTT(value)                  (PMC_FSMR_FSTT_Msk & (_UINT32_(value) << PMC_FSMR_FSTT_Pos)) 

/* -------- PMC_FSPR : (PMC Offset: 0x74) (R/W 32) Fast Startup Polarity Register -------- */
#define PMC_FSPR_FSTP0_Pos                    _UINT32_(0)                                          /* (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP0_Msk                    (_UINT32_(0x1) << PMC_FSPR_FSTP0_Pos)                /* (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP0(value)                 (PMC_FSPR_FSTP0_Msk & (_UINT32_(value) << PMC_FSPR_FSTP0_Pos)) /* Assigment of value for FSTP0 in the PMC_FSPR register */
#define PMC_FSPR_FSTP1_Pos                    _UINT32_(1)                                          /* (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP1_Msk                    (_UINT32_(0x1) << PMC_FSPR_FSTP1_Pos)                /* (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP1(value)                 (PMC_FSPR_FSTP1_Msk & (_UINT32_(value) << PMC_FSPR_FSTP1_Pos)) /* Assigment of value for FSTP1 in the PMC_FSPR register */
#define PMC_FSPR_FSTP2_Pos                    _UINT32_(2)                                          /* (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP2_Msk                    (_UINT32_(0x1) << PMC_FSPR_FSTP2_Pos)                /* (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP2(value)                 (PMC_FSPR_FSTP2_Msk & (_UINT32_(value) << PMC_FSPR_FSTP2_Pos)) /* Assigment of value for FSTP2 in the PMC_FSPR register */
#define PMC_FSPR_FSTP3_Pos                    _UINT32_(3)                                          /* (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP3_Msk                    (_UINT32_(0x1) << PMC_FSPR_FSTP3_Pos)                /* (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP3(value)                 (PMC_FSPR_FSTP3_Msk & (_UINT32_(value) << PMC_FSPR_FSTP3_Pos)) /* Assigment of value for FSTP3 in the PMC_FSPR register */
#define PMC_FSPR_FSTP4_Pos                    _UINT32_(4)                                          /* (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP4_Msk                    (_UINT32_(0x1) << PMC_FSPR_FSTP4_Pos)                /* (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP4(value)                 (PMC_FSPR_FSTP4_Msk & (_UINT32_(value) << PMC_FSPR_FSTP4_Pos)) /* Assigment of value for FSTP4 in the PMC_FSPR register */
#define PMC_FSPR_FSTP5_Pos                    _UINT32_(5)                                          /* (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP5_Msk                    (_UINT32_(0x1) << PMC_FSPR_FSTP5_Pos)                /* (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP5(value)                 (PMC_FSPR_FSTP5_Msk & (_UINT32_(value) << PMC_FSPR_FSTP5_Pos)) /* Assigment of value for FSTP5 in the PMC_FSPR register */
#define PMC_FSPR_FSTP6_Pos                    _UINT32_(6)                                          /* (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP6_Msk                    (_UINT32_(0x1) << PMC_FSPR_FSTP6_Pos)                /* (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP6(value)                 (PMC_FSPR_FSTP6_Msk & (_UINT32_(value) << PMC_FSPR_FSTP6_Pos)) /* Assigment of value for FSTP6 in the PMC_FSPR register */
#define PMC_FSPR_FSTP7_Pos                    _UINT32_(7)                                          /* (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP7_Msk                    (_UINT32_(0x1) << PMC_FSPR_FSTP7_Pos)                /* (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP7(value)                 (PMC_FSPR_FSTP7_Msk & (_UINT32_(value) << PMC_FSPR_FSTP7_Pos)) /* Assigment of value for FSTP7 in the PMC_FSPR register */
#define PMC_FSPR_FSTP8_Pos                    _UINT32_(8)                                          /* (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP8_Msk                    (_UINT32_(0x1) << PMC_FSPR_FSTP8_Pos)                /* (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP8(value)                 (PMC_FSPR_FSTP8_Msk & (_UINT32_(value) << PMC_FSPR_FSTP8_Pos)) /* Assigment of value for FSTP8 in the PMC_FSPR register */
#define PMC_FSPR_FSTP9_Pos                    _UINT32_(9)                                          /* (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP9_Msk                    (_UINT32_(0x1) << PMC_FSPR_FSTP9_Pos)                /* (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP9(value)                 (PMC_FSPR_FSTP9_Msk & (_UINT32_(value) << PMC_FSPR_FSTP9_Pos)) /* Assigment of value for FSTP9 in the PMC_FSPR register */
#define PMC_FSPR_FSTP10_Pos                   _UINT32_(10)                                         /* (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP10_Msk                   (_UINT32_(0x1) << PMC_FSPR_FSTP10_Pos)               /* (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP10(value)                (PMC_FSPR_FSTP10_Msk & (_UINT32_(value) << PMC_FSPR_FSTP10_Pos)) /* Assigment of value for FSTP10 in the PMC_FSPR register */
#define PMC_FSPR_FSTP11_Pos                   _UINT32_(11)                                         /* (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP11_Msk                   (_UINT32_(0x1) << PMC_FSPR_FSTP11_Pos)               /* (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP11(value)                (PMC_FSPR_FSTP11_Msk & (_UINT32_(value) << PMC_FSPR_FSTP11_Pos)) /* Assigment of value for FSTP11 in the PMC_FSPR register */
#define PMC_FSPR_FSTP12_Pos                   _UINT32_(12)                                         /* (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP12_Msk                   (_UINT32_(0x1) << PMC_FSPR_FSTP12_Pos)               /* (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP12(value)                (PMC_FSPR_FSTP12_Msk & (_UINT32_(value) << PMC_FSPR_FSTP12_Pos)) /* Assigment of value for FSTP12 in the PMC_FSPR register */
#define PMC_FSPR_FSTP13_Pos                   _UINT32_(13)                                         /* (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP13_Msk                   (_UINT32_(0x1) << PMC_FSPR_FSTP13_Pos)               /* (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP13(value)                (PMC_FSPR_FSTP13_Msk & (_UINT32_(value) << PMC_FSPR_FSTP13_Pos)) /* Assigment of value for FSTP13 in the PMC_FSPR register */
#define PMC_FSPR_FSTP14_Pos                   _UINT32_(14)                                         /* (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP14_Msk                   (_UINT32_(0x1) << PMC_FSPR_FSTP14_Pos)               /* (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP14(value)                (PMC_FSPR_FSTP14_Msk & (_UINT32_(value) << PMC_FSPR_FSTP14_Pos)) /* Assigment of value for FSTP14 in the PMC_FSPR register */
#define PMC_FSPR_FSTP15_Pos                   _UINT32_(15)                                         /* (PMC_FSPR) Fast Startup Input Polarityx Position */
#define PMC_FSPR_FSTP15_Msk                   (_UINT32_(0x1) << PMC_FSPR_FSTP15_Pos)               /* (PMC_FSPR) Fast Startup Input Polarityx Mask */
#define PMC_FSPR_FSTP15(value)                (PMC_FSPR_FSTP15_Msk & (_UINT32_(value) << PMC_FSPR_FSTP15_Pos)) /* Assigment of value for FSTP15 in the PMC_FSPR register */
#define PMC_FSPR_Msk                          _UINT32_(0x0000FFFF)                                 /* (PMC_FSPR) Register Mask  */

#define PMC_FSPR_FSTP_Pos                     _UINT32_(0)                                          /* (PMC_FSPR Position) Fast Startup Input Polarityx */
#define PMC_FSPR_FSTP_Msk                     (_UINT32_(0xFFFF) << PMC_FSPR_FSTP_Pos)              /* (PMC_FSPR Mask) FSTP */
#define PMC_FSPR_FSTP(value)                  (PMC_FSPR_FSTP_Msk & (_UINT32_(value) << PMC_FSPR_FSTP_Pos)) 

/* -------- PMC_FOCR : (PMC Offset: 0x78) ( /W 32) Fault Output Clear Register -------- */
#define PMC_FOCR_FOCLR_Pos                    _UINT32_(0)                                          /* (PMC_FOCR) Fault Output Clear Position */
#define PMC_FOCR_FOCLR_Msk                    (_UINT32_(0x1) << PMC_FOCR_FOCLR_Pos)                /* (PMC_FOCR) Fault Output Clear Mask */
#define PMC_FOCR_FOCLR(value)                 (PMC_FOCR_FOCLR_Msk & (_UINT32_(value) << PMC_FOCR_FOCLR_Pos)) /* Assigment of value for FOCLR in the PMC_FOCR register */
#define PMC_FOCR_Msk                          _UINT32_(0x00000001)                                 /* (PMC_FOCR) Register Mask  */


/* -------- PMC_WPMR : (PMC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define PMC_WPMR_WPEN_Pos                     _UINT32_(0)                                          /* (PMC_WPMR) Write Protection Enable Position */
#define PMC_WPMR_WPEN_Msk                     (_UINT32_(0x1) << PMC_WPMR_WPEN_Pos)                 /* (PMC_WPMR) Write Protection Enable Mask */
#define PMC_WPMR_WPEN(value)                  (PMC_WPMR_WPEN_Msk & (_UINT32_(value) << PMC_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the PMC_WPMR register */
#define PMC_WPMR_WPKEY_Pos                    _UINT32_(8)                                          /* (PMC_WPMR) Write Protection Key Position */
#define PMC_WPMR_WPKEY_Msk                    (_UINT32_(0xFFFFFF) << PMC_WPMR_WPKEY_Pos)           /* (PMC_WPMR) Write Protection Key Mask */
#define PMC_WPMR_WPKEY(value)                 (PMC_WPMR_WPKEY_Msk & (_UINT32_(value) << PMC_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the PMC_WPMR register */
#define   PMC_WPMR_WPKEY_PASSWD_Val           _UINT32_(0x504D43)                                   /* (PMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define PMC_WPMR_WPKEY_PASSWD                 (PMC_WPMR_WPKEY_PASSWD_Val << PMC_WPMR_WPKEY_Pos)    /* (PMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define PMC_WPMR_Msk                          _UINT32_(0xFFFFFF01)                                 /* (PMC_WPMR) Register Mask  */


/* -------- PMC_WPSR : (PMC Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define PMC_WPSR_WPVS_Pos                     _UINT32_(0)                                          /* (PMC_WPSR) Write Protection Violation Status Position */
#define PMC_WPSR_WPVS_Msk                     (_UINT32_(0x1) << PMC_WPSR_WPVS_Pos)                 /* (PMC_WPSR) Write Protection Violation Status Mask */
#define PMC_WPSR_WPVS(value)                  (PMC_WPSR_WPVS_Msk & (_UINT32_(value) << PMC_WPSR_WPVS_Pos)) /* Assigment of value for WPVS in the PMC_WPSR register */
#define PMC_WPSR_WPVSRC_Pos                   _UINT32_(8)                                          /* (PMC_WPSR) Write Protection Violation Source Position */
#define PMC_WPSR_WPVSRC_Msk                   (_UINT32_(0xFFFF) << PMC_WPSR_WPVSRC_Pos)            /* (PMC_WPSR) Write Protection Violation Source Mask */
#define PMC_WPSR_WPVSRC(value)                (PMC_WPSR_WPVSRC_Msk & (_UINT32_(value) << PMC_WPSR_WPVSRC_Pos)) /* Assigment of value for WPVSRC in the PMC_WPSR register */
#define PMC_WPSR_Msk                          _UINT32_(0x00FFFF01)                                 /* (PMC_WPSR) Register Mask  */


/* -------- PMC_OCR : (PMC Offset: 0x110) (R/W 32) Oscillator Calibration Register -------- */
#define PMC_OCR_CAL8_Pos                      _UINT32_(0)                                          /* (PMC_OCR) RC Oscillator Calibration bits for 8 MHz Position */
#define PMC_OCR_CAL8_Msk                      (_UINT32_(0x7F) << PMC_OCR_CAL8_Pos)                 /* (PMC_OCR) RC Oscillator Calibration bits for 8 MHz Mask */
#define PMC_OCR_CAL8(value)                   (PMC_OCR_CAL8_Msk & (_UINT32_(value) << PMC_OCR_CAL8_Pos)) /* Assigment of value for CAL8 in the PMC_OCR register */
#define PMC_OCR_SEL8_Pos                      _UINT32_(7)                                          /* (PMC_OCR) Selection of RC Oscillator Calibration bits for 8 MHz Position */
#define PMC_OCR_SEL8_Msk                      (_UINT32_(0x1) << PMC_OCR_SEL8_Pos)                  /* (PMC_OCR) Selection of RC Oscillator Calibration bits for 8 MHz Mask */
#define PMC_OCR_SEL8(value)                   (PMC_OCR_SEL8_Msk & (_UINT32_(value) << PMC_OCR_SEL8_Pos)) /* Assigment of value for SEL8 in the PMC_OCR register */
#define PMC_OCR_CAL16_Pos                     _UINT32_(8)                                          /* (PMC_OCR) RC Oscillator Calibration bits for 16 MHz Position */
#define PMC_OCR_CAL16_Msk                     (_UINT32_(0x7F) << PMC_OCR_CAL16_Pos)                /* (PMC_OCR) RC Oscillator Calibration bits for 16 MHz Mask */
#define PMC_OCR_CAL16(value)                  (PMC_OCR_CAL16_Msk & (_UINT32_(value) << PMC_OCR_CAL16_Pos)) /* Assigment of value for CAL16 in the PMC_OCR register */
#define PMC_OCR_SEL16_Pos                     _UINT32_(15)                                         /* (PMC_OCR) Selection of RC Oscillator Calibration bits for 16 MHz Position */
#define PMC_OCR_SEL16_Msk                     (_UINT32_(0x1) << PMC_OCR_SEL16_Pos)                 /* (PMC_OCR) Selection of RC Oscillator Calibration bits for 16 MHz Mask */
#define PMC_OCR_SEL16(value)                  (PMC_OCR_SEL16_Msk & (_UINT32_(value) << PMC_OCR_SEL16_Pos)) /* Assigment of value for SEL16 in the PMC_OCR register */
#define PMC_OCR_CAL24_Pos                     _UINT32_(16)                                         /* (PMC_OCR) RC Oscillator Calibration bits for 24 MHz Position */
#define PMC_OCR_CAL24_Msk                     (_UINT32_(0x7F) << PMC_OCR_CAL24_Pos)                /* (PMC_OCR) RC Oscillator Calibration bits for 24 MHz Mask */
#define PMC_OCR_CAL24(value)                  (PMC_OCR_CAL24_Msk & (_UINT32_(value) << PMC_OCR_CAL24_Pos)) /* Assigment of value for CAL24 in the PMC_OCR register */
#define PMC_OCR_SEL24_Pos                     _UINT32_(23)                                         /* (PMC_OCR) Selection of RC Oscillator Calibration bits for 24 MHz Position */
#define PMC_OCR_SEL24_Msk                     (_UINT32_(0x1) << PMC_OCR_SEL24_Pos)                 /* (PMC_OCR) Selection of RC Oscillator Calibration bits for 24 MHz Mask */
#define PMC_OCR_SEL24(value)                  (PMC_OCR_SEL24_Msk & (_UINT32_(value) << PMC_OCR_SEL24_Pos)) /* Assigment of value for SEL24 in the PMC_OCR register */
#define PMC_OCR_Msk                           _UINT32_(0x00FFFFFF)                                 /* (PMC_OCR) Register Mask  */


/* -------- PMC_PMMR : (PMC Offset: 0x130) (R/W 32) PLL Maximum Multiplier Value Register -------- */
#define PMC_PMMR_PLLA_MMAX_Pos                _UINT32_(0)                                          /* (PMC_PMMR) PLLA Maximum Allowed Multiplier Value Position */
#define PMC_PMMR_PLLA_MMAX_Msk                (_UINT32_(0x7FF) << PMC_PMMR_PLLA_MMAX_Pos)          /* (PMC_PMMR) PLLA Maximum Allowed Multiplier Value Mask */
#define PMC_PMMR_PLLA_MMAX(value)             (PMC_PMMR_PLLA_MMAX_Msk & (_UINT32_(value) << PMC_PMMR_PLLA_MMAX_Pos)) /* Assigment of value for PLLA_MMAX in the PMC_PMMR register */
#define PMC_PMMR_Msk                          _UINT32_(0x000007FF)                                 /* (PMC_PMMR) Register Mask  */


/** \brief PMC register offsets definitions */
#define PMC_SCER_REG_OFST              _UINT32_(0x00)      /* (PMC_SCER) System Clock Enable Register Offset */
#define PMC_SCDR_REG_OFST              _UINT32_(0x04)      /* (PMC_SCDR) System Clock Disable Register Offset */
#define PMC_SCSR_REG_OFST              _UINT32_(0x08)      /* (PMC_SCSR) System Clock Status Register Offset */
#define PMC_PCER0_REG_OFST             _UINT32_(0x10)      /* (PMC_PCER0) Peripheral Clock Enable Register 0 Offset */
#define PMC_PCDR0_REG_OFST             _UINT32_(0x14)      /* (PMC_PCDR0) Peripheral Clock Disable Register 0 Offset */
#define PMC_PCSR0_REG_OFST             _UINT32_(0x18)      /* (PMC_PCSR0) Peripheral Clock Status Register 0 Offset */
#define CKGR_MOR_REG_OFST              _UINT32_(0x20)      /* (CKGR_MOR) Main Oscillator Register Offset */
#define CKGR_MCFR_REG_OFST             _UINT32_(0x24)      /* (CKGR_MCFR) Main Clock Frequency Register Offset */
#define CKGR_PLLAR_REG_OFST            _UINT32_(0x28)      /* (CKGR_PLLAR) PLLA Register Offset */
#define PMC_MCKR_REG_OFST              _UINT32_(0x30)      /* (PMC_MCKR) Master Clock Register Offset */
#define PMC_PCK_REG_OFST               _UINT32_(0x40)      /* (PMC_PCK) Programmable Clock 0 Register 0 Offset */
#define PMC_PCK0_REG_OFST              _UINT32_(0x40)      /* (PMC_PCK0) Programmable Clock 0 Register 0 Offset */
#define PMC_PCK1_REG_OFST              _UINT32_(0x44)      /* (PMC_PCK1) Programmable Clock 0 Register 0 Offset */
#define PMC_PCK2_REG_OFST              _UINT32_(0x48)      /* (PMC_PCK2) Programmable Clock 0 Register 0 Offset */
#define PMC_IER_REG_OFST               _UINT32_(0x60)      /* (PMC_IER) Interrupt Enable Register Offset */
#define PMC_IDR_REG_OFST               _UINT32_(0x64)      /* (PMC_IDR) Interrupt Disable Register Offset */
#define PMC_SR_REG_OFST                _UINT32_(0x68)      /* (PMC_SR) Status Register Offset */
#define PMC_IMR_REG_OFST               _UINT32_(0x6C)      /* (PMC_IMR) Interrupt Mask Register Offset */
#define PMC_FSMR_REG_OFST              _UINT32_(0x70)      /* (PMC_FSMR) Fast Startup Mode Register Offset */
#define PMC_FSPR_REG_OFST              _UINT32_(0x74)      /* (PMC_FSPR) Fast Startup Polarity Register Offset */
#define PMC_FOCR_REG_OFST              _UINT32_(0x78)      /* (PMC_FOCR) Fault Output Clear Register Offset */
#define PMC_WPMR_REG_OFST              _UINT32_(0xE4)      /* (PMC_WPMR) Write Protection Mode Register Offset */
#define PMC_WPSR_REG_OFST              _UINT32_(0xE8)      /* (PMC_WPSR) Write Protection Status Register Offset */
#define PMC_OCR_REG_OFST               _UINT32_(0x110)     /* (PMC_OCR) Oscillator Calibration Register Offset */
#define PMC_PMMR_REG_OFST              _UINT32_(0x130)     /* (PMC_PMMR) PLL Maximum Multiplier Value Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PMC register API structure */
typedef struct
{
  __O   uint32_t                       PMC_SCER;           /**< Offset: 0x00 ( /W  32) System Clock Enable Register */
  __O   uint32_t                       PMC_SCDR;           /**< Offset: 0x04 ( /W  32) System Clock Disable Register */
  __I   uint32_t                       PMC_SCSR;           /**< Offset: 0x08 (R/   32) System Clock Status Register */
  __I   uint8_t                        Reserved1[0x04];
  __O   uint32_t                       PMC_PCER0;          /**< Offset: 0x10 ( /W  32) Peripheral Clock Enable Register 0 */
  __O   uint32_t                       PMC_PCDR0;          /**< Offset: 0x14 ( /W  32) Peripheral Clock Disable Register 0 */
  __I   uint32_t                       PMC_PCSR0;          /**< Offset: 0x18 (R/   32) Peripheral Clock Status Register 0 */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       CKGR_MOR;           /**< Offset: 0x20 (R/W  32) Main Oscillator Register */
  __IO  uint32_t                       CKGR_MCFR;          /**< Offset: 0x24 (R/W  32) Main Clock Frequency Register */
  __IO  uint32_t                       CKGR_PLLAR;         /**< Offset: 0x28 (R/W  32) PLLA Register */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint32_t                       PMC_MCKR;           /**< Offset: 0x30 (R/W  32) Master Clock Register */
  __I   uint8_t                        Reserved4[0x0C];
  __IO  uint32_t                       PMC_PCK[3];         /**< Offset: 0x40 (R/W  32) Programmable Clock 0 Register 0 */
  __I   uint8_t                        Reserved5[0x14];
  __O   uint32_t                       PMC_IER;            /**< Offset: 0x60 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       PMC_IDR;            /**< Offset: 0x64 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       PMC_SR;             /**< Offset: 0x68 (R/   32) Status Register */
  __I   uint32_t                       PMC_IMR;            /**< Offset: 0x6C (R/   32) Interrupt Mask Register */
  __IO  uint32_t                       PMC_FSMR;           /**< Offset: 0x70 (R/W  32) Fast Startup Mode Register */
  __IO  uint32_t                       PMC_FSPR;           /**< Offset: 0x74 (R/W  32) Fast Startup Polarity Register */
  __O   uint32_t                       PMC_FOCR;           /**< Offset: 0x78 ( /W  32) Fault Output Clear Register */
  __I   uint8_t                        Reserved6[0x68];
  __IO  uint32_t                       PMC_WPMR;           /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       PMC_WPSR;           /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
  __I   uint8_t                        Reserved7[0x24];
  __IO  uint32_t                       PMC_OCR;            /**< Offset: 0x110 (R/W  32) Oscillator Calibration Register */
  __I   uint8_t                        Reserved8[0x1C];
  __IO  uint32_t                       PMC_PMMR;           /**< Offset: 0x130 (R/W  32) PLL Maximum Multiplier Value Register */
} pmc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMG51_PMC_COMPONENT_H_ */
