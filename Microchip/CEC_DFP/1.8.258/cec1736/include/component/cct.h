/*
 * Component description for CCT
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

/* file generated from device description version 2023-01-17T13:00:30Z */
#ifndef _CEC_CCT_COMPONENT_H_
#define _CEC_CCT_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR CCT                                          */
/* ************************************************************************** */

/* -------- CCT_CTRL : (CCT Offset: 0x00) (R/W 32) This register controls the capture and compare timer. -------- */
#define CCT_CTRL_RESETVALUE                   _UINT32_(0x00)                                       /*  (CCT_CTRL) This register controls the capture and compare timer.  Reset Value */

#define CCT_CTRL_ACT_Pos                      _UINT32_(0)                                          /* (CCT_CTRL) This bit is used to start the capture and compare timer running and power it down. Position */
#define CCT_CTRL_ACT_Msk                      (_UINT32_(0x1) << CCT_CTRL_ACT_Pos)                  /* (CCT_CTRL) This bit is used to start the capture and compare timer running and power it down. Mask */
#define CCT_CTRL_ACT(value)                   (CCT_CTRL_ACT_Msk & (_UINT32_(value) << CCT_CTRL_ACT_Pos)) /* Assigment of value for ACT in the CCT_CTRL register */
#define CCT_CTRL_FREE_EN_Pos                  _UINT32_(1)                                          /* (CCT_CTRL) Free-Running Timer Enable. This bit is used to start and stop the free running timer. Position */
#define CCT_CTRL_FREE_EN_Msk                  (_UINT32_(0x1) << CCT_CTRL_FREE_EN_Pos)              /* (CCT_CTRL) Free-Running Timer Enable. This bit is used to start and stop the free running timer. Mask */
#define CCT_CTRL_FREE_EN(value)               (CCT_CTRL_FREE_EN_Msk & (_UINT32_(value) << CCT_CTRL_FREE_EN_Pos)) /* Assigment of value for FREE_EN in the CCT_CTRL register */
#define CCT_CTRL_FREE_RST_Pos                 _UINT32_(2)                                          /* (CCT_CTRL) Free Running Timer Reset. This bit stops the timer and resets the internal counter to 0000_0000h. Position */
#define CCT_CTRL_FREE_RST_Msk                 (_UINT32_(0x1) << CCT_CTRL_FREE_RST_Pos)             /* (CCT_CTRL) Free Running Timer Reset. This bit stops the timer and resets the internal counter to 0000_0000h. Mask */
#define CCT_CTRL_FREE_RST(value)              (CCT_CTRL_FREE_RST_Msk & (_UINT32_(value) << CCT_CTRL_FREE_RST_Pos)) /* Assigment of value for FREE_RST in the CCT_CTRL register */
#define CCT_CTRL_TCLK_Pos                     _UINT32_(4)                                          /* (CCT_CTRL) This 3-bit field sets the clock source for the Free-Running Counter. Position */
#define CCT_CTRL_TCLK_Msk                     (_UINT32_(0x7) << CCT_CTRL_TCLK_Pos)                 /* (CCT_CTRL) This 3-bit field sets the clock source for the Free-Running Counter. Mask */
#define CCT_CTRL_TCLK(value)                  (CCT_CTRL_TCLK_Msk & (_UINT32_(value) << CCT_CTRL_TCLK_Pos)) /* Assigment of value for TCLK in the CCT_CTRL register */
#define CCT_CTRL_CMP_EN0_Pos                  _UINT32_(8)                                          /* (CCT_CTRL) Compare Enable for Compare 0 Register. Position */
#define CCT_CTRL_CMP_EN0_Msk                  (_UINT32_(0x1) << CCT_CTRL_CMP_EN0_Pos)              /* (CCT_CTRL) Compare Enable for Compare 0 Register. Mask */
#define CCT_CTRL_CMP_EN0(value)               (CCT_CTRL_CMP_EN0_Msk & (_UINT32_(value) << CCT_CTRL_CMP_EN0_Pos)) /* Assigment of value for CMP_EN0 in the CCT_CTRL register */
#define CCT_CTRL_CMP_EN1_Pos                  _UINT32_(9)                                          /* (CCT_CTRL) Compare Enable for Compare 1 Register. Position */
#define CCT_CTRL_CMP_EN1_Msk                  (_UINT32_(0x1) << CCT_CTRL_CMP_EN1_Pos)              /* (CCT_CTRL) Compare Enable for Compare 1 Register. Mask */
#define CCT_CTRL_CMP_EN1(value)               (CCT_CTRL_CMP_EN1_Msk & (_UINT32_(value) << CCT_CTRL_CMP_EN1_Pos)) /* Assigment of value for CMP_EN1 in the CCT_CTRL register */
#define CCT_CTRL_CMP_SET1_Pos                 _UINT32_(16)                                         /* (CCT_CTRL) When read, returns the current value off the Compare Timer Output 1 state. Position */
#define CCT_CTRL_CMP_SET1_Msk                 (_UINT32_(0x1) << CCT_CTRL_CMP_SET1_Pos)             /* (CCT_CTRL) When read, returns the current value off the Compare Timer Output 1 state. Mask */
#define CCT_CTRL_CMP_SET1(value)              (CCT_CTRL_CMP_SET1_Msk & (_UINT32_(value) << CCT_CTRL_CMP_SET1_Pos)) /* Assigment of value for CMP_SET1 in the CCT_CTRL register */
#define CCT_CTRL_CMP_SET0_Pos                 _UINT32_(17)                                         /* (CCT_CTRL) When read, returns the current value off the Compare Timer Output 0 state. Position */
#define CCT_CTRL_CMP_SET0_Msk                 (_UINT32_(0x1) << CCT_CTRL_CMP_SET0_Pos)             /* (CCT_CTRL) When read, returns the current value off the Compare Timer Output 0 state. Mask */
#define CCT_CTRL_CMP_SET0(value)              (CCT_CTRL_CMP_SET0_Msk & (_UINT32_(value) << CCT_CTRL_CMP_SET0_Pos)) /* Assigment of value for CMP_SET0 in the CCT_CTRL register */
#define CCT_CTRL_CMP_CLR1_Pos                 _UINT32_(24)                                         /* (CCT_CTRL) When read, returns the current value off the Compare Timer Output 1 state. Position */
#define CCT_CTRL_CMP_CLR1_Msk                 (_UINT32_(0x1) << CCT_CTRL_CMP_CLR1_Pos)             /* (CCT_CTRL) When read, returns the current value off the Compare Timer Output 1 state. Mask */
#define CCT_CTRL_CMP_CLR1(value)              (CCT_CTRL_CMP_CLR1_Msk & (_UINT32_(value) << CCT_CTRL_CMP_CLR1_Pos)) /* Assigment of value for CMP_CLR1 in the CCT_CTRL register */
#define CCT_CTRL_CMP_CLR0_Pos                 _UINT32_(25)                                         /* (CCT_CTRL) When read, returns the current value off the Compare Timer Output 0 state. Position */
#define CCT_CTRL_CMP_CLR0_Msk                 (_UINT32_(0x1) << CCT_CTRL_CMP_CLR0_Pos)             /* (CCT_CTRL) When read, returns the current value off the Compare Timer Output 0 state. Mask */
#define CCT_CTRL_CMP_CLR0(value)              (CCT_CTRL_CMP_CLR0_Msk & (_UINT32_(value) << CCT_CTRL_CMP_CLR0_Pos)) /* Assigment of value for CMP_CLR0 in the CCT_CTRL register */
#define CCT_CTRL_Msk                          _UINT32_(0x03030377)                                 /* (CCT_CTRL) Register Mask  */

#define CCT_CTRL_CMP_EN_Pos                   _UINT32_(8)                                          /* (CCT_CTRL Position) Compare Enable for Compare x Register. */
#define CCT_CTRL_CMP_EN_Msk                   (_UINT32_(0x3) << CCT_CTRL_CMP_EN_Pos)               /* (CCT_CTRL Mask) CMP_EN */
#define CCT_CTRL_CMP_EN(value)                (CCT_CTRL_CMP_EN_Msk & (_UINT32_(value) << CCT_CTRL_CMP_EN_Pos)) 
#define CCT_CTRL_CMP_SET_Pos                  _UINT32_(16)                                         /* (CCT_CTRL Position) When read, returns the current value off the Compare Timer Output x state. */
#define CCT_CTRL_CMP_SET_Msk                  (_UINT32_(0x3) << CCT_CTRL_CMP_SET_Pos)              /* (CCT_CTRL Mask) CMP_SET */
#define CCT_CTRL_CMP_SET(value)               (CCT_CTRL_CMP_SET_Msk & (_UINT32_(value) << CCT_CTRL_CMP_SET_Pos)) 
#define CCT_CTRL_CMP_CLR_Pos                  _UINT32_(24)                                         /* (CCT_CTRL Position) When read, returns the current value off the Compare Timer Output x state. */
#define CCT_CTRL_CMP_CLR_Msk                  (_UINT32_(0x3) << CCT_CTRL_CMP_CLR_Pos)              /* (CCT_CTRL Mask) CMP_CLR */
#define CCT_CTRL_CMP_CLR(value)               (CCT_CTRL_CMP_CLR_Msk & (_UINT32_(value) << CCT_CTRL_CMP_CLR_Pos)) 

/* -------- CCT_CAP0_CTRL : (CCT Offset: 0x04) (R/W 32) This register is used to configure capture and compare timers 0-3. -------- */
#define CCT_CAP0_CTRL_RESETVALUE              _UINT32_(0x00)                                       /*  (CCT_CAP0_CTRL) This register is used to configure capture and compare timers 0-3.  Reset Value */

#define CCT_CAP0_CTRL_CAP_EDGE0_Pos           _UINT32_(0)                                          /* (CCT_CAP0_CTRL) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 0. Position */
#define CCT_CAP0_CTRL_CAP_EDGE0_Msk           (_UINT32_(0x3) << CCT_CAP0_CTRL_CAP_EDGE0_Pos)       /* (CCT_CAP0_CTRL) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 0. Mask */
#define CCT_CAP0_CTRL_CAP_EDGE0(value)        (CCT_CAP0_CTRL_CAP_EDGE0_Msk & (_UINT32_(value) << CCT_CAP0_CTRL_CAP_EDGE0_Pos)) /* Assigment of value for CAP_EDGE0 in the CCT_CAP0_CTRL register */
#define   CCT_CAP0_CTRL_CAP_EDGE0_FALLING_Val _UINT32_(0x0)                                        /* (CCT_CAP0_CTRL) Capture on falling edge  */
#define   CCT_CAP0_CTRL_CAP_EDGE0_RISING_Val  _UINT32_(0x1)                                        /* (CCT_CAP0_CTRL) Capture on rising edge  */
#define   CCT_CAP0_CTRL_CAP_EDGE0_BOTH_Val    _UINT32_(0x2)                                        /* (CCT_CAP0_CTRL) Capture on both falling and rising edges  */
#define   CCT_CAP0_CTRL_CAP_EDGE0_DISABLED_Val _UINT32_(0x3)                                        /* (CCT_CAP0_CTRL) Capture event disabled  */
#define CCT_CAP0_CTRL_CAP_EDGE0_FALLING       (CCT_CAP0_CTRL_CAP_EDGE0_FALLING_Val << CCT_CAP0_CTRL_CAP_EDGE0_Pos) /* (CCT_CAP0_CTRL) Capture on falling edge Position  */
#define CCT_CAP0_CTRL_CAP_EDGE0_RISING        (CCT_CAP0_CTRL_CAP_EDGE0_RISING_Val << CCT_CAP0_CTRL_CAP_EDGE0_Pos) /* (CCT_CAP0_CTRL) Capture on rising edge Position  */
#define CCT_CAP0_CTRL_CAP_EDGE0_BOTH          (CCT_CAP0_CTRL_CAP_EDGE0_BOTH_Val << CCT_CAP0_CTRL_CAP_EDGE0_Pos) /* (CCT_CAP0_CTRL) Capture on both falling and rising edges Position  */
#define CCT_CAP0_CTRL_CAP_EDGE0_DISABLED      (CCT_CAP0_CTRL_CAP_EDGE0_DISABLED_Val << CCT_CAP0_CTRL_CAP_EDGE0_Pos) /* (CCT_CAP0_CTRL) Capture event disabled Position  */
#define CCT_CAP0_CTRL_FILTER_BYP0_Pos         _UINT32_(2)                                          /* (CCT_CAP0_CTRL) This bit enables bypassing the input noise filter for Capture Register 0, so that the input signal goes directly into the timer. Position */
#define CCT_CAP0_CTRL_FILTER_BYP0_Msk         (_UINT32_(0x1) << CCT_CAP0_CTRL_FILTER_BYP0_Pos)     /* (CCT_CAP0_CTRL) This bit enables bypassing the input noise filter for Capture Register 0, so that the input signal goes directly into the timer. Mask */
#define CCT_CAP0_CTRL_FILTER_BYP0(value)      (CCT_CAP0_CTRL_FILTER_BYP0_Msk & (_UINT32_(value) << CCT_CAP0_CTRL_FILTER_BYP0_Pos)) /* Assigment of value for FILTER_BYP0 in the CCT_CAP0_CTRL register */
#define CCT_CAP0_CTRL_FCLK_SEL0_Pos           _UINT32_(5)                                          /* (CCT_CAP0_CTRL) This 3-bit field sets the clock source for the input filter for Capture Register 0. Position */
#define CCT_CAP0_CTRL_FCLK_SEL0_Msk           (_UINT32_(0x7) << CCT_CAP0_CTRL_FCLK_SEL0_Pos)       /* (CCT_CAP0_CTRL) This 3-bit field sets the clock source for the input filter for Capture Register 0. Mask */
#define CCT_CAP0_CTRL_FCLK_SEL0(value)        (CCT_CAP0_CTRL_FCLK_SEL0_Msk & (_UINT32_(value) << CCT_CAP0_CTRL_FCLK_SEL0_Pos)) /* Assigment of value for FCLK_SEL0 in the CCT_CAP0_CTRL register */
#define   CCT_CAP0_CTRL_FCLK_SEL0_DIV_1_Val   _UINT32_(0x0)                                        /* (CCT_CAP0_CTRL) Divide by 1 (48 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL0_DIV_2_Val   _UINT32_(0x1)                                        /* (CCT_CAP0_CTRL) Divide by 2 (24 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL0_DIV_4_Val   _UINT32_(0x2)                                        /* (CCT_CAP0_CTRL) Divide by 4 (12 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL0_DIV_8_Val   _UINT32_(0x3)                                        /* (CCT_CAP0_CTRL) Divide by 8 (6 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL0_DIV_16_Val  _UINT32_(0x4)                                        /* (CCT_CAP0_CTRL) Divide by 16 (3 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL0_DIV_32_Val  _UINT32_(0x5)                                        /* (CCT_CAP0_CTRL) Divide by 32 (1.5 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL0_DIV_64_Val  _UINT32_(0x6)                                        /* (CCT_CAP0_CTRL) Divide by 64 (750 KHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL0_DIV_128_Val _UINT32_(0x7)                                        /* (CCT_CAP0_CTRL) Divide by 128 (375 KHz)  */
#define CCT_CAP0_CTRL_FCLK_SEL0_DIV_1         (CCT_CAP0_CTRL_FCLK_SEL0_DIV_1_Val << CCT_CAP0_CTRL_FCLK_SEL0_Pos) /* (CCT_CAP0_CTRL) Divide by 1 (48 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL0_DIV_2         (CCT_CAP0_CTRL_FCLK_SEL0_DIV_2_Val << CCT_CAP0_CTRL_FCLK_SEL0_Pos) /* (CCT_CAP0_CTRL) Divide by 2 (24 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL0_DIV_4         (CCT_CAP0_CTRL_FCLK_SEL0_DIV_4_Val << CCT_CAP0_CTRL_FCLK_SEL0_Pos) /* (CCT_CAP0_CTRL) Divide by 4 (12 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL0_DIV_8         (CCT_CAP0_CTRL_FCLK_SEL0_DIV_8_Val << CCT_CAP0_CTRL_FCLK_SEL0_Pos) /* (CCT_CAP0_CTRL) Divide by 8 (6 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL0_DIV_16        (CCT_CAP0_CTRL_FCLK_SEL0_DIV_16_Val << CCT_CAP0_CTRL_FCLK_SEL0_Pos) /* (CCT_CAP0_CTRL) Divide by 16 (3 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL0_DIV_32        (CCT_CAP0_CTRL_FCLK_SEL0_DIV_32_Val << CCT_CAP0_CTRL_FCLK_SEL0_Pos) /* (CCT_CAP0_CTRL) Divide by 32 (1.5 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL0_DIV_64        (CCT_CAP0_CTRL_FCLK_SEL0_DIV_64_Val << CCT_CAP0_CTRL_FCLK_SEL0_Pos) /* (CCT_CAP0_CTRL) Divide by 64 (750 KHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL0_DIV_128       (CCT_CAP0_CTRL_FCLK_SEL0_DIV_128_Val << CCT_CAP0_CTRL_FCLK_SEL0_Pos) /* (CCT_CAP0_CTRL) Divide by 128 (375 KHz) Position  */
#define CCT_CAP0_CTRL_CAP_EDGE1_Pos           _UINT32_(8)                                          /* (CCT_CAP0_CTRL) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 1. Position */
#define CCT_CAP0_CTRL_CAP_EDGE1_Msk           (_UINT32_(0x3) << CCT_CAP0_CTRL_CAP_EDGE1_Pos)       /* (CCT_CAP0_CTRL) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 1. Mask */
#define CCT_CAP0_CTRL_CAP_EDGE1(value)        (CCT_CAP0_CTRL_CAP_EDGE1_Msk & (_UINT32_(value) << CCT_CAP0_CTRL_CAP_EDGE1_Pos)) /* Assigment of value for CAP_EDGE1 in the CCT_CAP0_CTRL register */
#define   CCT_CAP0_CTRL_CAP_EDGE1_FALLING_Val _UINT32_(0x0)                                        /* (CCT_CAP0_CTRL) Capture on falling edge  */
#define   CCT_CAP0_CTRL_CAP_EDGE1_RISING_Val  _UINT32_(0x1)                                        /* (CCT_CAP0_CTRL) Capture on rising edge  */
#define   CCT_CAP0_CTRL_CAP_EDGE1_BOTH_Val    _UINT32_(0x2)                                        /* (CCT_CAP0_CTRL) Capture on both falling and rising edges  */
#define   CCT_CAP0_CTRL_CAP_EDGE1_DISABLED_Val _UINT32_(0x3)                                        /* (CCT_CAP0_CTRL) Capture event disabled  */
#define CCT_CAP0_CTRL_CAP_EDGE1_FALLING       (CCT_CAP0_CTRL_CAP_EDGE1_FALLING_Val << CCT_CAP0_CTRL_CAP_EDGE1_Pos) /* (CCT_CAP0_CTRL) Capture on falling edge Position  */
#define CCT_CAP0_CTRL_CAP_EDGE1_RISING        (CCT_CAP0_CTRL_CAP_EDGE1_RISING_Val << CCT_CAP0_CTRL_CAP_EDGE1_Pos) /* (CCT_CAP0_CTRL) Capture on rising edge Position  */
#define CCT_CAP0_CTRL_CAP_EDGE1_BOTH          (CCT_CAP0_CTRL_CAP_EDGE1_BOTH_Val << CCT_CAP0_CTRL_CAP_EDGE1_Pos) /* (CCT_CAP0_CTRL) Capture on both falling and rising edges Position  */
#define CCT_CAP0_CTRL_CAP_EDGE1_DISABLED      (CCT_CAP0_CTRL_CAP_EDGE1_DISABLED_Val << CCT_CAP0_CTRL_CAP_EDGE1_Pos) /* (CCT_CAP0_CTRL) Capture event disabled Position  */
#define CCT_CAP0_CTRL_FILTER_BYP1_Pos         _UINT32_(10)                                         /* (CCT_CAP0_CTRL) This bit enables bypassing the input noise filter for Capture Register 1, so that the input signal goes directly into the timer. Position */
#define CCT_CAP0_CTRL_FILTER_BYP1_Msk         (_UINT32_(0x1) << CCT_CAP0_CTRL_FILTER_BYP1_Pos)     /* (CCT_CAP0_CTRL) This bit enables bypassing the input noise filter for Capture Register 1, so that the input signal goes directly into the timer. Mask */
#define CCT_CAP0_CTRL_FILTER_BYP1(value)      (CCT_CAP0_CTRL_FILTER_BYP1_Msk & (_UINT32_(value) << CCT_CAP0_CTRL_FILTER_BYP1_Pos)) /* Assigment of value for FILTER_BYP1 in the CCT_CAP0_CTRL register */
#define CCT_CAP0_CTRL_FCLK_SEL1_Pos           _UINT32_(13)                                         /* (CCT_CAP0_CTRL) This 3-bit field sets the clock source for the input filter for Capture Register 1. Position */
#define CCT_CAP0_CTRL_FCLK_SEL1_Msk           (_UINT32_(0x7) << CCT_CAP0_CTRL_FCLK_SEL1_Pos)       /* (CCT_CAP0_CTRL) This 3-bit field sets the clock source for the input filter for Capture Register 1. Mask */
#define CCT_CAP0_CTRL_FCLK_SEL1(value)        (CCT_CAP0_CTRL_FCLK_SEL1_Msk & (_UINT32_(value) << CCT_CAP0_CTRL_FCLK_SEL1_Pos)) /* Assigment of value for FCLK_SEL1 in the CCT_CAP0_CTRL register */
#define   CCT_CAP0_CTRL_FCLK_SEL1_DIV_1_Val   _UINT32_(0x0)                                        /* (CCT_CAP0_CTRL) Divide by 1 (48 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL1_DIV_2_Val   _UINT32_(0x1)                                        /* (CCT_CAP0_CTRL) Divide by 2 (24 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL1_DIV_4_Val   _UINT32_(0x2)                                        /* (CCT_CAP0_CTRL) Divide by 4 (12 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL1_DIV_8_Val   _UINT32_(0x3)                                        /* (CCT_CAP0_CTRL) Divide by 8 (6 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL1_DIV_16_Val  _UINT32_(0x4)                                        /* (CCT_CAP0_CTRL) Divide by 16 (3 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL1_DIV_32_Val  _UINT32_(0x5)                                        /* (CCT_CAP0_CTRL) Divide by 32 (1.5 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL1_DIV_64_Val  _UINT32_(0x6)                                        /* (CCT_CAP0_CTRL) Divide by 64 (750 KHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL1_DIV_128_Val _UINT32_(0x7)                                        /* (CCT_CAP0_CTRL) Divide by 128 (375 KHz)  */
#define CCT_CAP0_CTRL_FCLK_SEL1_DIV_1         (CCT_CAP0_CTRL_FCLK_SEL1_DIV_1_Val << CCT_CAP0_CTRL_FCLK_SEL1_Pos) /* (CCT_CAP0_CTRL) Divide by 1 (48 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL1_DIV_2         (CCT_CAP0_CTRL_FCLK_SEL1_DIV_2_Val << CCT_CAP0_CTRL_FCLK_SEL1_Pos) /* (CCT_CAP0_CTRL) Divide by 2 (24 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL1_DIV_4         (CCT_CAP0_CTRL_FCLK_SEL1_DIV_4_Val << CCT_CAP0_CTRL_FCLK_SEL1_Pos) /* (CCT_CAP0_CTRL) Divide by 4 (12 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL1_DIV_8         (CCT_CAP0_CTRL_FCLK_SEL1_DIV_8_Val << CCT_CAP0_CTRL_FCLK_SEL1_Pos) /* (CCT_CAP0_CTRL) Divide by 8 (6 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL1_DIV_16        (CCT_CAP0_CTRL_FCLK_SEL1_DIV_16_Val << CCT_CAP0_CTRL_FCLK_SEL1_Pos) /* (CCT_CAP0_CTRL) Divide by 16 (3 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL1_DIV_32        (CCT_CAP0_CTRL_FCLK_SEL1_DIV_32_Val << CCT_CAP0_CTRL_FCLK_SEL1_Pos) /* (CCT_CAP0_CTRL) Divide by 32 (1.5 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL1_DIV_64        (CCT_CAP0_CTRL_FCLK_SEL1_DIV_64_Val << CCT_CAP0_CTRL_FCLK_SEL1_Pos) /* (CCT_CAP0_CTRL) Divide by 64 (750 KHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL1_DIV_128       (CCT_CAP0_CTRL_FCLK_SEL1_DIV_128_Val << CCT_CAP0_CTRL_FCLK_SEL1_Pos) /* (CCT_CAP0_CTRL) Divide by 128 (375 KHz) Position  */
#define CCT_CAP0_CTRL_CAP_EDGE2_Pos           _UINT32_(16)                                         /* (CCT_CAP0_CTRL) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 2. Position */
#define CCT_CAP0_CTRL_CAP_EDGE2_Msk           (_UINT32_(0x3) << CCT_CAP0_CTRL_CAP_EDGE2_Pos)       /* (CCT_CAP0_CTRL) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 2. Mask */
#define CCT_CAP0_CTRL_CAP_EDGE2(value)        (CCT_CAP0_CTRL_CAP_EDGE2_Msk & (_UINT32_(value) << CCT_CAP0_CTRL_CAP_EDGE2_Pos)) /* Assigment of value for CAP_EDGE2 in the CCT_CAP0_CTRL register */
#define   CCT_CAP0_CTRL_CAP_EDGE2_FALLING_Val _UINT32_(0x0)                                        /* (CCT_CAP0_CTRL) Capture on falling edge  */
#define   CCT_CAP0_CTRL_CAP_EDGE2_RISING_Val  _UINT32_(0x1)                                        /* (CCT_CAP0_CTRL) Capture on rising edge  */
#define   CCT_CAP0_CTRL_CAP_EDGE2_BOTH_Val    _UINT32_(0x2)                                        /* (CCT_CAP0_CTRL) Capture on both falling and rising edges  */
#define   CCT_CAP0_CTRL_CAP_EDGE2_DISABLED_Val _UINT32_(0x3)                                        /* (CCT_CAP0_CTRL) Capture event disabled  */
#define CCT_CAP0_CTRL_CAP_EDGE2_FALLING       (CCT_CAP0_CTRL_CAP_EDGE2_FALLING_Val << CCT_CAP0_CTRL_CAP_EDGE2_Pos) /* (CCT_CAP0_CTRL) Capture on falling edge Position  */
#define CCT_CAP0_CTRL_CAP_EDGE2_RISING        (CCT_CAP0_CTRL_CAP_EDGE2_RISING_Val << CCT_CAP0_CTRL_CAP_EDGE2_Pos) /* (CCT_CAP0_CTRL) Capture on rising edge Position  */
#define CCT_CAP0_CTRL_CAP_EDGE2_BOTH          (CCT_CAP0_CTRL_CAP_EDGE2_BOTH_Val << CCT_CAP0_CTRL_CAP_EDGE2_Pos) /* (CCT_CAP0_CTRL) Capture on both falling and rising edges Position  */
#define CCT_CAP0_CTRL_CAP_EDGE2_DISABLED      (CCT_CAP0_CTRL_CAP_EDGE2_DISABLED_Val << CCT_CAP0_CTRL_CAP_EDGE2_Pos) /* (CCT_CAP0_CTRL) Capture event disabled Position  */
#define CCT_CAP0_CTRL_FILTER_BYP2_Pos         _UINT32_(18)                                         /* (CCT_CAP0_CTRL) This bit enables bypassing the input noise filter for Capture Register 2, so that the input signal goes directly into the timer. Position */
#define CCT_CAP0_CTRL_FILTER_BYP2_Msk         (_UINT32_(0x1) << CCT_CAP0_CTRL_FILTER_BYP2_Pos)     /* (CCT_CAP0_CTRL) This bit enables bypassing the input noise filter for Capture Register 2, so that the input signal goes directly into the timer. Mask */
#define CCT_CAP0_CTRL_FILTER_BYP2(value)      (CCT_CAP0_CTRL_FILTER_BYP2_Msk & (_UINT32_(value) << CCT_CAP0_CTRL_FILTER_BYP2_Pos)) /* Assigment of value for FILTER_BYP2 in the CCT_CAP0_CTRL register */
#define CCT_CAP0_CTRL_FCLK_SEL2_Pos           _UINT32_(21)                                         /* (CCT_CAP0_CTRL) This 3-bit field sets the clock source for the input filter for Capture Register 2. Position */
#define CCT_CAP0_CTRL_FCLK_SEL2_Msk           (_UINT32_(0x7) << CCT_CAP0_CTRL_FCLK_SEL2_Pos)       /* (CCT_CAP0_CTRL) This 3-bit field sets the clock source for the input filter for Capture Register 2. Mask */
#define CCT_CAP0_CTRL_FCLK_SEL2(value)        (CCT_CAP0_CTRL_FCLK_SEL2_Msk & (_UINT32_(value) << CCT_CAP0_CTRL_FCLK_SEL2_Pos)) /* Assigment of value for FCLK_SEL2 in the CCT_CAP0_CTRL register */
#define   CCT_CAP0_CTRL_FCLK_SEL2_DIV_1_Val   _UINT32_(0x0)                                        /* (CCT_CAP0_CTRL) Divide by 1 (48 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL2_DIV_2_Val   _UINT32_(0x1)                                        /* (CCT_CAP0_CTRL) Divide by 2 (24 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL2_DIV_4_Val   _UINT32_(0x2)                                        /* (CCT_CAP0_CTRL) Divide by 4 (12 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL2_DIV_8_Val   _UINT32_(0x3)                                        /* (CCT_CAP0_CTRL) Divide by 8 (6 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL2_DIV_16_Val  _UINT32_(0x4)                                        /* (CCT_CAP0_CTRL) Divide by 16 (3 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL2_DIV_32_Val  _UINT32_(0x5)                                        /* (CCT_CAP0_CTRL) Divide by 32 (1.5 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL2_DIV_64_Val  _UINT32_(0x6)                                        /* (CCT_CAP0_CTRL) Divide by 64 (750 KHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL2_DIV_128_Val _UINT32_(0x7)                                        /* (CCT_CAP0_CTRL) Divide by 128 (375 KHz)  */
#define CCT_CAP0_CTRL_FCLK_SEL2_DIV_1         (CCT_CAP0_CTRL_FCLK_SEL2_DIV_1_Val << CCT_CAP0_CTRL_FCLK_SEL2_Pos) /* (CCT_CAP0_CTRL) Divide by 1 (48 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL2_DIV_2         (CCT_CAP0_CTRL_FCLK_SEL2_DIV_2_Val << CCT_CAP0_CTRL_FCLK_SEL2_Pos) /* (CCT_CAP0_CTRL) Divide by 2 (24 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL2_DIV_4         (CCT_CAP0_CTRL_FCLK_SEL2_DIV_4_Val << CCT_CAP0_CTRL_FCLK_SEL2_Pos) /* (CCT_CAP0_CTRL) Divide by 4 (12 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL2_DIV_8         (CCT_CAP0_CTRL_FCLK_SEL2_DIV_8_Val << CCT_CAP0_CTRL_FCLK_SEL2_Pos) /* (CCT_CAP0_CTRL) Divide by 8 (6 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL2_DIV_16        (CCT_CAP0_CTRL_FCLK_SEL2_DIV_16_Val << CCT_CAP0_CTRL_FCLK_SEL2_Pos) /* (CCT_CAP0_CTRL) Divide by 16 (3 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL2_DIV_32        (CCT_CAP0_CTRL_FCLK_SEL2_DIV_32_Val << CCT_CAP0_CTRL_FCLK_SEL2_Pos) /* (CCT_CAP0_CTRL) Divide by 32 (1.5 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL2_DIV_64        (CCT_CAP0_CTRL_FCLK_SEL2_DIV_64_Val << CCT_CAP0_CTRL_FCLK_SEL2_Pos) /* (CCT_CAP0_CTRL) Divide by 64 (750 KHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL2_DIV_128       (CCT_CAP0_CTRL_FCLK_SEL2_DIV_128_Val << CCT_CAP0_CTRL_FCLK_SEL2_Pos) /* (CCT_CAP0_CTRL) Divide by 128 (375 KHz) Position  */
#define CCT_CAP0_CTRL_CAP_EDGE3_Pos           _UINT32_(24)                                         /* (CCT_CAP0_CTRL) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 3. Position */
#define CCT_CAP0_CTRL_CAP_EDGE3_Msk           (_UINT32_(0x3) << CCT_CAP0_CTRL_CAP_EDGE3_Pos)       /* (CCT_CAP0_CTRL) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 3. Mask */
#define CCT_CAP0_CTRL_CAP_EDGE3(value)        (CCT_CAP0_CTRL_CAP_EDGE3_Msk & (_UINT32_(value) << CCT_CAP0_CTRL_CAP_EDGE3_Pos)) /* Assigment of value for CAP_EDGE3 in the CCT_CAP0_CTRL register */
#define   CCT_CAP0_CTRL_CAP_EDGE3_FALLING_Val _UINT32_(0x0)                                        /* (CCT_CAP0_CTRL) Capture on falling edge  */
#define   CCT_CAP0_CTRL_CAP_EDGE3_RISING_Val  _UINT32_(0x1)                                        /* (CCT_CAP0_CTRL) Capture on rising edge  */
#define   CCT_CAP0_CTRL_CAP_EDGE3_BOTH_Val    _UINT32_(0x2)                                        /* (CCT_CAP0_CTRL) Capture on both falling and rising edges  */
#define   CCT_CAP0_CTRL_CAP_EDGE3_DISABLED_Val _UINT32_(0x3)                                        /* (CCT_CAP0_CTRL) Capture event disabled  */
#define CCT_CAP0_CTRL_CAP_EDGE3_FALLING       (CCT_CAP0_CTRL_CAP_EDGE3_FALLING_Val << CCT_CAP0_CTRL_CAP_EDGE3_Pos) /* (CCT_CAP0_CTRL) Capture on falling edge Position  */
#define CCT_CAP0_CTRL_CAP_EDGE3_RISING        (CCT_CAP0_CTRL_CAP_EDGE3_RISING_Val << CCT_CAP0_CTRL_CAP_EDGE3_Pos) /* (CCT_CAP0_CTRL) Capture on rising edge Position  */
#define CCT_CAP0_CTRL_CAP_EDGE3_BOTH          (CCT_CAP0_CTRL_CAP_EDGE3_BOTH_Val << CCT_CAP0_CTRL_CAP_EDGE3_Pos) /* (CCT_CAP0_CTRL) Capture on both falling and rising edges Position  */
#define CCT_CAP0_CTRL_CAP_EDGE3_DISABLED      (CCT_CAP0_CTRL_CAP_EDGE3_DISABLED_Val << CCT_CAP0_CTRL_CAP_EDGE3_Pos) /* (CCT_CAP0_CTRL) Capture event disabled Position  */
#define CCT_CAP0_CTRL_FILTER_BYP3_Pos         _UINT32_(26)                                         /* (CCT_CAP0_CTRL) This bit enables bypassing the input noise filter for Capture Register 3, so that the input signal goes directly into the timer. Position */
#define CCT_CAP0_CTRL_FILTER_BYP3_Msk         (_UINT32_(0x1) << CCT_CAP0_CTRL_FILTER_BYP3_Pos)     /* (CCT_CAP0_CTRL) This bit enables bypassing the input noise filter for Capture Register 3, so that the input signal goes directly into the timer. Mask */
#define CCT_CAP0_CTRL_FILTER_BYP3(value)      (CCT_CAP0_CTRL_FILTER_BYP3_Msk & (_UINT32_(value) << CCT_CAP0_CTRL_FILTER_BYP3_Pos)) /* Assigment of value for FILTER_BYP3 in the CCT_CAP0_CTRL register */
#define CCT_CAP0_CTRL_FCLK_SEL3_Pos           _UINT32_(29)                                         /* (CCT_CAP0_CTRL) This 3-bit field sets the clock source for the input filter for Capture Register 3. Position */
#define CCT_CAP0_CTRL_FCLK_SEL3_Msk           (_UINT32_(0x7) << CCT_CAP0_CTRL_FCLK_SEL3_Pos)       /* (CCT_CAP0_CTRL) This 3-bit field sets the clock source for the input filter for Capture Register 3. Mask */
#define CCT_CAP0_CTRL_FCLK_SEL3(value)        (CCT_CAP0_CTRL_FCLK_SEL3_Msk & (_UINT32_(value) << CCT_CAP0_CTRL_FCLK_SEL3_Pos)) /* Assigment of value for FCLK_SEL3 in the CCT_CAP0_CTRL register */
#define   CCT_CAP0_CTRL_FCLK_SEL3_DIV_1_Val   _UINT32_(0x0)                                        /* (CCT_CAP0_CTRL) Divide by 1 (48 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL3_DIV_2_Val   _UINT32_(0x1)                                        /* (CCT_CAP0_CTRL) Divide by 2 (24 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL3_DIV_4_Val   _UINT32_(0x2)                                        /* (CCT_CAP0_CTRL) Divide by 4 (12 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL3_DIV_8_Val   _UINT32_(0x3)                                        /* (CCT_CAP0_CTRL) Divide by 8 (6 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL3_DIV_16_Val  _UINT32_(0x4)                                        /* (CCT_CAP0_CTRL) Divide by 16 (3 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL3_DIV_32_Val  _UINT32_(0x5)                                        /* (CCT_CAP0_CTRL) Divide by 32 (1.5 MHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL3_DIV_64_Val  _UINT32_(0x6)                                        /* (CCT_CAP0_CTRL) Divide by 64 (750 KHz)  */
#define   CCT_CAP0_CTRL_FCLK_SEL3_DIV_128_Val _UINT32_(0x7)                                        /* (CCT_CAP0_CTRL) Divide by 128 (375 KHz)  */
#define CCT_CAP0_CTRL_FCLK_SEL3_DIV_1         (CCT_CAP0_CTRL_FCLK_SEL3_DIV_1_Val << CCT_CAP0_CTRL_FCLK_SEL3_Pos) /* (CCT_CAP0_CTRL) Divide by 1 (48 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL3_DIV_2         (CCT_CAP0_CTRL_FCLK_SEL3_DIV_2_Val << CCT_CAP0_CTRL_FCLK_SEL3_Pos) /* (CCT_CAP0_CTRL) Divide by 2 (24 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL3_DIV_4         (CCT_CAP0_CTRL_FCLK_SEL3_DIV_4_Val << CCT_CAP0_CTRL_FCLK_SEL3_Pos) /* (CCT_CAP0_CTRL) Divide by 4 (12 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL3_DIV_8         (CCT_CAP0_CTRL_FCLK_SEL3_DIV_8_Val << CCT_CAP0_CTRL_FCLK_SEL3_Pos) /* (CCT_CAP0_CTRL) Divide by 8 (6 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL3_DIV_16        (CCT_CAP0_CTRL_FCLK_SEL3_DIV_16_Val << CCT_CAP0_CTRL_FCLK_SEL3_Pos) /* (CCT_CAP0_CTRL) Divide by 16 (3 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL3_DIV_32        (CCT_CAP0_CTRL_FCLK_SEL3_DIV_32_Val << CCT_CAP0_CTRL_FCLK_SEL3_Pos) /* (CCT_CAP0_CTRL) Divide by 32 (1.5 MHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL3_DIV_64        (CCT_CAP0_CTRL_FCLK_SEL3_DIV_64_Val << CCT_CAP0_CTRL_FCLK_SEL3_Pos) /* (CCT_CAP0_CTRL) Divide by 64 (750 KHz) Position  */
#define CCT_CAP0_CTRL_FCLK_SEL3_DIV_128       (CCT_CAP0_CTRL_FCLK_SEL3_DIV_128_Val << CCT_CAP0_CTRL_FCLK_SEL3_Pos) /* (CCT_CAP0_CTRL) Divide by 128 (375 KHz) Position  */
#define CCT_CAP0_CTRL_Msk                     _UINT32_(0xE7E7E7E7)                                 /* (CCT_CAP0_CTRL) Register Mask  */


/* -------- CCT_CAP1_CTRL : (CCT Offset: 0x08) (R/W 32) This register is used to configure capture and compare timers 4-5. -------- */
#define CCT_CAP1_CTRL_RESETVALUE              _UINT32_(0x00)                                       /*  (CCT_CAP1_CTRL) This register is used to configure capture and compare timers 4-5.  Reset Value */

#define CCT_CAP1_CTRL_CAP_EDGE4_Pos           _UINT32_(0)                                          /* (CCT_CAP1_CTRL) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 4. Position */
#define CCT_CAP1_CTRL_CAP_EDGE4_Msk           (_UINT32_(0x3) << CCT_CAP1_CTRL_CAP_EDGE4_Pos)       /* (CCT_CAP1_CTRL) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 4. Mask */
#define CCT_CAP1_CTRL_CAP_EDGE4(value)        (CCT_CAP1_CTRL_CAP_EDGE4_Msk & (_UINT32_(value) << CCT_CAP1_CTRL_CAP_EDGE4_Pos)) /* Assigment of value for CAP_EDGE4 in the CCT_CAP1_CTRL register */
#define   CCT_CAP1_CTRL_CAP_EDGE4_FALLING_Val _UINT32_(0x0)                                        /* (CCT_CAP1_CTRL) Capture on falling edge  */
#define   CCT_CAP1_CTRL_CAP_EDGE4_RISING_Val  _UINT32_(0x1)                                        /* (CCT_CAP1_CTRL) Capture on rising edge  */
#define   CCT_CAP1_CTRL_CAP_EDGE4_BOTH_Val    _UINT32_(0x2)                                        /* (CCT_CAP1_CTRL) Capture on both falling and rising edges  */
#define   CCT_CAP1_CTRL_CAP_EDGE4_DISABLED_Val _UINT32_(0x3)                                        /* (CCT_CAP1_CTRL) Capture event disabled  */
#define CCT_CAP1_CTRL_CAP_EDGE4_FALLING       (CCT_CAP1_CTRL_CAP_EDGE4_FALLING_Val << CCT_CAP1_CTRL_CAP_EDGE4_Pos) /* (CCT_CAP1_CTRL) Capture on falling edge Position  */
#define CCT_CAP1_CTRL_CAP_EDGE4_RISING        (CCT_CAP1_CTRL_CAP_EDGE4_RISING_Val << CCT_CAP1_CTRL_CAP_EDGE4_Pos) /* (CCT_CAP1_CTRL) Capture on rising edge Position  */
#define CCT_CAP1_CTRL_CAP_EDGE4_BOTH          (CCT_CAP1_CTRL_CAP_EDGE4_BOTH_Val << CCT_CAP1_CTRL_CAP_EDGE4_Pos) /* (CCT_CAP1_CTRL) Capture on both falling and rising edges Position  */
#define CCT_CAP1_CTRL_CAP_EDGE4_DISABLED      (CCT_CAP1_CTRL_CAP_EDGE4_DISABLED_Val << CCT_CAP1_CTRL_CAP_EDGE4_Pos) /* (CCT_CAP1_CTRL) Capture event disabled Position  */
#define CCT_CAP1_CTRL_FILTER_BYP4_Pos         _UINT32_(2)                                          /* (CCT_CAP1_CTRL) This bit enables bypassing the input noise filter for Capture Register 4, so that the input signal goes directly into the timer. Position */
#define CCT_CAP1_CTRL_FILTER_BYP4_Msk         (_UINT32_(0x1) << CCT_CAP1_CTRL_FILTER_BYP4_Pos)     /* (CCT_CAP1_CTRL) This bit enables bypassing the input noise filter for Capture Register 4, so that the input signal goes directly into the timer. Mask */
#define CCT_CAP1_CTRL_FILTER_BYP4(value)      (CCT_CAP1_CTRL_FILTER_BYP4_Msk & (_UINT32_(value) << CCT_CAP1_CTRL_FILTER_BYP4_Pos)) /* Assigment of value for FILTER_BYP4 in the CCT_CAP1_CTRL register */
#define CCT_CAP1_CTRL_FCLK_SEL4_Pos           _UINT32_(5)                                          /* (CCT_CAP1_CTRL) This 3-bit field sets the clock source for the input filter for Capture Register 4. Position */
#define CCT_CAP1_CTRL_FCLK_SEL4_Msk           (_UINT32_(0x7) << CCT_CAP1_CTRL_FCLK_SEL4_Pos)       /* (CCT_CAP1_CTRL) This 3-bit field sets the clock source for the input filter for Capture Register 4. Mask */
#define CCT_CAP1_CTRL_FCLK_SEL4(value)        (CCT_CAP1_CTRL_FCLK_SEL4_Msk & (_UINT32_(value) << CCT_CAP1_CTRL_FCLK_SEL4_Pos)) /* Assigment of value for FCLK_SEL4 in the CCT_CAP1_CTRL register */
#define   CCT_CAP1_CTRL_FCLK_SEL4_DIV_1_Val   _UINT32_(0x0)                                        /* (CCT_CAP1_CTRL) Divide by 1 (48 MHz)  */
#define   CCT_CAP1_CTRL_FCLK_SEL4_DIV_2_Val   _UINT32_(0x1)                                        /* (CCT_CAP1_CTRL) Divide by 2 (24 MHz)  */
#define   CCT_CAP1_CTRL_FCLK_SEL4_DIV_4_Val   _UINT32_(0x2)                                        /* (CCT_CAP1_CTRL) Divide by 4 (12 MHz)  */
#define   CCT_CAP1_CTRL_FCLK_SEL4_DIV_8_Val   _UINT32_(0x3)                                        /* (CCT_CAP1_CTRL) Divide by 8 (6 MHz)  */
#define   CCT_CAP1_CTRL_FCLK_SEL4_DIV_16_Val  _UINT32_(0x4)                                        /* (CCT_CAP1_CTRL) Divide by 16 (3 MHz)  */
#define   CCT_CAP1_CTRL_FCLK_SEL4_DIV_32_Val  _UINT32_(0x5)                                        /* (CCT_CAP1_CTRL) Divide by 32 (1.5 MHz)  */
#define   CCT_CAP1_CTRL_FCLK_SEL4_DIV_64_Val  _UINT32_(0x6)                                        /* (CCT_CAP1_CTRL) Divide by 64 (750 KHz)  */
#define   CCT_CAP1_CTRL_FCLK_SEL4_DIV_128_Val _UINT32_(0x7)                                        /* (CCT_CAP1_CTRL) Divide by 128 (375 KHz)  */
#define CCT_CAP1_CTRL_FCLK_SEL4_DIV_1         (CCT_CAP1_CTRL_FCLK_SEL4_DIV_1_Val << CCT_CAP1_CTRL_FCLK_SEL4_Pos) /* (CCT_CAP1_CTRL) Divide by 1 (48 MHz) Position  */
#define CCT_CAP1_CTRL_FCLK_SEL4_DIV_2         (CCT_CAP1_CTRL_FCLK_SEL4_DIV_2_Val << CCT_CAP1_CTRL_FCLK_SEL4_Pos) /* (CCT_CAP1_CTRL) Divide by 2 (24 MHz) Position  */
#define CCT_CAP1_CTRL_FCLK_SEL4_DIV_4         (CCT_CAP1_CTRL_FCLK_SEL4_DIV_4_Val << CCT_CAP1_CTRL_FCLK_SEL4_Pos) /* (CCT_CAP1_CTRL) Divide by 4 (12 MHz) Position  */
#define CCT_CAP1_CTRL_FCLK_SEL4_DIV_8         (CCT_CAP1_CTRL_FCLK_SEL4_DIV_8_Val << CCT_CAP1_CTRL_FCLK_SEL4_Pos) /* (CCT_CAP1_CTRL) Divide by 8 (6 MHz) Position  */
#define CCT_CAP1_CTRL_FCLK_SEL4_DIV_16        (CCT_CAP1_CTRL_FCLK_SEL4_DIV_16_Val << CCT_CAP1_CTRL_FCLK_SEL4_Pos) /* (CCT_CAP1_CTRL) Divide by 16 (3 MHz) Position  */
#define CCT_CAP1_CTRL_FCLK_SEL4_DIV_32        (CCT_CAP1_CTRL_FCLK_SEL4_DIV_32_Val << CCT_CAP1_CTRL_FCLK_SEL4_Pos) /* (CCT_CAP1_CTRL) Divide by 32 (1.5 MHz) Position  */
#define CCT_CAP1_CTRL_FCLK_SEL4_DIV_64        (CCT_CAP1_CTRL_FCLK_SEL4_DIV_64_Val << CCT_CAP1_CTRL_FCLK_SEL4_Pos) /* (CCT_CAP1_CTRL) Divide by 64 (750 KHz) Position  */
#define CCT_CAP1_CTRL_FCLK_SEL4_DIV_128       (CCT_CAP1_CTRL_FCLK_SEL4_DIV_128_Val << CCT_CAP1_CTRL_FCLK_SEL4_Pos) /* (CCT_CAP1_CTRL) Divide by 128 (375 KHz) Position  */
#define CCT_CAP1_CTRL_CAP_EDGE5_Pos           _UINT32_(8)                                          /* (CCT_CAP1_CTRL) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 5. Position */
#define CCT_CAP1_CTRL_CAP_EDGE5_Msk           (_UINT32_(0x3) << CCT_CAP1_CTRL_CAP_EDGE5_Pos)       /* (CCT_CAP1_CTRL) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 5. Mask */
#define CCT_CAP1_CTRL_CAP_EDGE5(value)        (CCT_CAP1_CTRL_CAP_EDGE5_Msk & (_UINT32_(value) << CCT_CAP1_CTRL_CAP_EDGE5_Pos)) /* Assigment of value for CAP_EDGE5 in the CCT_CAP1_CTRL register */
#define   CCT_CAP1_CTRL_CAP_EDGE5_FALLING_Val _UINT32_(0x0)                                        /* (CCT_CAP1_CTRL) Capture on falling edge  */
#define   CCT_CAP1_CTRL_CAP_EDGE5_RISING_Val  _UINT32_(0x1)                                        /* (CCT_CAP1_CTRL) Capture on rising edge  */
#define   CCT_CAP1_CTRL_CAP_EDGE5_BOTH_Val    _UINT32_(0x2)                                        /* (CCT_CAP1_CTRL) Capture on both falling and rising edges  */
#define   CCT_CAP1_CTRL_CAP_EDGE5_DISABLED_Val _UINT32_(0x3)                                        /* (CCT_CAP1_CTRL) Capture event disabled  */
#define CCT_CAP1_CTRL_CAP_EDGE5_FALLING       (CCT_CAP1_CTRL_CAP_EDGE5_FALLING_Val << CCT_CAP1_CTRL_CAP_EDGE5_Pos) /* (CCT_CAP1_CTRL) Capture on falling edge Position  */
#define CCT_CAP1_CTRL_CAP_EDGE5_RISING        (CCT_CAP1_CTRL_CAP_EDGE5_RISING_Val << CCT_CAP1_CTRL_CAP_EDGE5_Pos) /* (CCT_CAP1_CTRL) Capture on rising edge Position  */
#define CCT_CAP1_CTRL_CAP_EDGE5_BOTH          (CCT_CAP1_CTRL_CAP_EDGE5_BOTH_Val << CCT_CAP1_CTRL_CAP_EDGE5_Pos) /* (CCT_CAP1_CTRL) Capture on both falling and rising edges Position  */
#define CCT_CAP1_CTRL_CAP_EDGE5_DISABLED      (CCT_CAP1_CTRL_CAP_EDGE5_DISABLED_Val << CCT_CAP1_CTRL_CAP_EDGE5_Pos) /* (CCT_CAP1_CTRL) Capture event disabled Position  */
#define CCT_CAP1_CTRL_FILTER_BYP5_Pos         _UINT32_(10)                                         /* (CCT_CAP1_CTRL) This bit enables bypassing the input noise filter for Capture Register 5, so that the input signal goes directly into the timer. Position */
#define CCT_CAP1_CTRL_FILTER_BYP5_Msk         (_UINT32_(0x1) << CCT_CAP1_CTRL_FILTER_BYP5_Pos)     /* (CCT_CAP1_CTRL) This bit enables bypassing the input noise filter for Capture Register 5, so that the input signal goes directly into the timer. Mask */
#define CCT_CAP1_CTRL_FILTER_BYP5(value)      (CCT_CAP1_CTRL_FILTER_BYP5_Msk & (_UINT32_(value) << CCT_CAP1_CTRL_FILTER_BYP5_Pos)) /* Assigment of value for FILTER_BYP5 in the CCT_CAP1_CTRL register */
#define CCT_CAP1_CTRL_FCLK_SEL5_Pos           _UINT32_(13)                                         /* (CCT_CAP1_CTRL) This 3-bit field sets the clock source for the input filter for Capture Register 5. Position */
#define CCT_CAP1_CTRL_FCLK_SEL5_Msk           (_UINT32_(0x7) << CCT_CAP1_CTRL_FCLK_SEL5_Pos)       /* (CCT_CAP1_CTRL) This 3-bit field sets the clock source for the input filter for Capture Register 5. Mask */
#define CCT_CAP1_CTRL_FCLK_SEL5(value)        (CCT_CAP1_CTRL_FCLK_SEL5_Msk & (_UINT32_(value) << CCT_CAP1_CTRL_FCLK_SEL5_Pos)) /* Assigment of value for FCLK_SEL5 in the CCT_CAP1_CTRL register */
#define   CCT_CAP1_CTRL_FCLK_SEL5_DIV_1_Val   _UINT32_(0x0)                                        /* (CCT_CAP1_CTRL) Divide by 1 (48 MHz)  */
#define   CCT_CAP1_CTRL_FCLK_SEL5_DIV_2_Val   _UINT32_(0x1)                                        /* (CCT_CAP1_CTRL) Divide by 2 (24 MHz)  */
#define   CCT_CAP1_CTRL_FCLK_SEL5_DIV_4_Val   _UINT32_(0x2)                                        /* (CCT_CAP1_CTRL) Divide by 4 (12 MHz)  */
#define   CCT_CAP1_CTRL_FCLK_SEL5_DIV_8_Val   _UINT32_(0x3)                                        /* (CCT_CAP1_CTRL) Divide by 8 (6 MHz)  */
#define   CCT_CAP1_CTRL_FCLK_SEL5_DIV_16_Val  _UINT32_(0x4)                                        /* (CCT_CAP1_CTRL) Divide by 16 (3 MHz)  */
#define   CCT_CAP1_CTRL_FCLK_SEL5_DIV_32_Val  _UINT32_(0x5)                                        /* (CCT_CAP1_CTRL) Divide by 32 (1.5 MHz)  */
#define   CCT_CAP1_CTRL_FCLK_SEL5_DIV_64_Val  _UINT32_(0x6)                                        /* (CCT_CAP1_CTRL) Divide by 64 (750 KHz)  */
#define   CCT_CAP1_CTRL_FCLK_SEL5_DIV_128_Val _UINT32_(0x7)                                        /* (CCT_CAP1_CTRL) Divide by 128 (375 KHz)  */
#define CCT_CAP1_CTRL_FCLK_SEL5_DIV_1         (CCT_CAP1_CTRL_FCLK_SEL5_DIV_1_Val << CCT_CAP1_CTRL_FCLK_SEL5_Pos) /* (CCT_CAP1_CTRL) Divide by 1 (48 MHz) Position  */
#define CCT_CAP1_CTRL_FCLK_SEL5_DIV_2         (CCT_CAP1_CTRL_FCLK_SEL5_DIV_2_Val << CCT_CAP1_CTRL_FCLK_SEL5_Pos) /* (CCT_CAP1_CTRL) Divide by 2 (24 MHz) Position  */
#define CCT_CAP1_CTRL_FCLK_SEL5_DIV_4         (CCT_CAP1_CTRL_FCLK_SEL5_DIV_4_Val << CCT_CAP1_CTRL_FCLK_SEL5_Pos) /* (CCT_CAP1_CTRL) Divide by 4 (12 MHz) Position  */
#define CCT_CAP1_CTRL_FCLK_SEL5_DIV_8         (CCT_CAP1_CTRL_FCLK_SEL5_DIV_8_Val << CCT_CAP1_CTRL_FCLK_SEL5_Pos) /* (CCT_CAP1_CTRL) Divide by 8 (6 MHz) Position  */
#define CCT_CAP1_CTRL_FCLK_SEL5_DIV_16        (CCT_CAP1_CTRL_FCLK_SEL5_DIV_16_Val << CCT_CAP1_CTRL_FCLK_SEL5_Pos) /* (CCT_CAP1_CTRL) Divide by 16 (3 MHz) Position  */
#define CCT_CAP1_CTRL_FCLK_SEL5_DIV_32        (CCT_CAP1_CTRL_FCLK_SEL5_DIV_32_Val << CCT_CAP1_CTRL_FCLK_SEL5_Pos) /* (CCT_CAP1_CTRL) Divide by 32 (1.5 MHz) Position  */
#define CCT_CAP1_CTRL_FCLK_SEL5_DIV_64        (CCT_CAP1_CTRL_FCLK_SEL5_DIV_64_Val << CCT_CAP1_CTRL_FCLK_SEL5_Pos) /* (CCT_CAP1_CTRL) Divide by 64 (750 KHz) Position  */
#define CCT_CAP1_CTRL_FCLK_SEL5_DIV_128       (CCT_CAP1_CTRL_FCLK_SEL5_DIV_128_Val << CCT_CAP1_CTRL_FCLK_SEL5_Pos) /* (CCT_CAP1_CTRL) Divide by 128 (375 KHz) Position  */
#define CCT_CAP1_CTRL_Msk                     _UINT32_(0x0000E7E7)                                 /* (CCT_CAP1_CTRL) Register Mask  */


/* -------- CCT_FREE_RUN : (CCT Offset: 0x0C) (R/W 32) This register contains the current value of the Free Running Timer. -------- */
#define CCT_FREE_RUN_RESETVALUE               _UINT32_(0x00)                                       /*  (CCT_FREE_RUN) This register contains the current value of the Free Running Timer.  Reset Value */

#define CCT_FREE_RUN_TMR_Pos                  _UINT32_(0)                                          /* (CCT_FREE_RUN) This register contains the current value of the Free Running Timer. Position */
#define CCT_FREE_RUN_TMR_Msk                  (_UINT32_(0xFFFFFFFF) << CCT_FREE_RUN_TMR_Pos)       /* (CCT_FREE_RUN) This register contains the current value of the Free Running Timer. Mask */
#define CCT_FREE_RUN_TMR(value)               (CCT_FREE_RUN_TMR_Msk & (_UINT32_(value) << CCT_FREE_RUN_TMR_Pos)) /* Assigment of value for TMR in the CCT_FREE_RUN register */
#define CCT_FREE_RUN_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (CCT_FREE_RUN) Register Mask  */


/* -------- CCT_CAP0 : (CCT Offset: 0x10) (R/W 32) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. -------- */
#define CCT_CAP0_RESETVALUE                   _UINT32_(0x00)                                       /*  (CCT_CAP0) This register saves the value copied from the Free Running timer on a programmed edge of ICT0.  Reset Value */

#define CCT_CAP0_CAP_0_Pos                    _UINT32_(0)                                          /* (CCT_CAP0) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. Position */
#define CCT_CAP0_CAP_0_Msk                    (_UINT32_(0xFFFFFFFF) << CCT_CAP0_CAP_0_Pos)         /* (CCT_CAP0) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. Mask */
#define CCT_CAP0_CAP_0(value)                 (CCT_CAP0_CAP_0_Msk & (_UINT32_(value) << CCT_CAP0_CAP_0_Pos)) /* Assigment of value for CAP_0 in the CCT_CAP0 register */
#define CCT_CAP0_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (CCT_CAP0) Register Mask  */


/* -------- CCT_CAP1 : (CCT Offset: 0x14) (R/W 32) This register saves the value copied from the Free Running timer on a programmed edge of ICT1. -------- */
#define CCT_CAP1_RESETVALUE                   _UINT32_(0x00)                                       /*  (CCT_CAP1) This register saves the value copied from the Free Running timer on a programmed edge of ICT1.  Reset Value */

#define CCT_CAP1_CAP_1_Pos                    _UINT32_(0)                                          /* (CCT_CAP1) This register saves the value copied from the Free Running timer on a programmed edge of ICT1. Position */
#define CCT_CAP1_CAP_1_Msk                    (_UINT32_(0xFFFFFFFF) << CCT_CAP1_CAP_1_Pos)         /* (CCT_CAP1) This register saves the value copied from the Free Running timer on a programmed edge of ICT1. Mask */
#define CCT_CAP1_CAP_1(value)                 (CCT_CAP1_CAP_1_Msk & (_UINT32_(value) << CCT_CAP1_CAP_1_Pos)) /* Assigment of value for CAP_1 in the CCT_CAP1 register */
#define CCT_CAP1_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (CCT_CAP1) Register Mask  */


/* -------- CCT_CAP2 : (CCT Offset: 0x18) (R/W 32) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. -------- */
#define CCT_CAP2_RESETVALUE                   _UINT32_(0x00)                                       /*  (CCT_CAP2) This register saves the value copied from the Free Running timer on a programmed edge of ICT0.  Reset Value */

#define CCT_CAP2_CAP_2_Pos                    _UINT32_(0)                                          /* (CCT_CAP2) This register saves the value copied from the Free Running timer on a programmed edge of ICT2. Position */
#define CCT_CAP2_CAP_2_Msk                    (_UINT32_(0xFFFFFFFF) << CCT_CAP2_CAP_2_Pos)         /* (CCT_CAP2) This register saves the value copied from the Free Running timer on a programmed edge of ICT2. Mask */
#define CCT_CAP2_CAP_2(value)                 (CCT_CAP2_CAP_2_Msk & (_UINT32_(value) << CCT_CAP2_CAP_2_Pos)) /* Assigment of value for CAP_2 in the CCT_CAP2 register */
#define CCT_CAP2_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (CCT_CAP2) Register Mask  */


/* -------- CCT_CAP3 : (CCT Offset: 0x1C) (R/W 32) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. -------- */
#define CCT_CAP3_RESETVALUE                   _UINT32_(0x00)                                       /*  (CCT_CAP3) This register saves the value copied from the Free Running timer on a programmed edge of ICT0.  Reset Value */

#define CCT_CAP3_CAP_3_Pos                    _UINT32_(0)                                          /* (CCT_CAP3) This register saves the value copied from the Free Running timer on a programmed edge of ICT3. Position */
#define CCT_CAP3_CAP_3_Msk                    (_UINT32_(0xFFFFFFFF) << CCT_CAP3_CAP_3_Pos)         /* (CCT_CAP3) This register saves the value copied from the Free Running timer on a programmed edge of ICT3. Mask */
#define CCT_CAP3_CAP_3(value)                 (CCT_CAP3_CAP_3_Msk & (_UINT32_(value) << CCT_CAP3_CAP_3_Pos)) /* Assigment of value for CAP_3 in the CCT_CAP3 register */
#define CCT_CAP3_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (CCT_CAP3) Register Mask  */


/* -------- CCT_CAP4 : (CCT Offset: 0x20) (R/W 32) This register saves the value copied from the Free Running timer on a programmed edge of ICT4. -------- */
#define CCT_CAP4_RESETVALUE                   _UINT32_(0x00)                                       /*  (CCT_CAP4) This register saves the value copied from the Free Running timer on a programmed edge of ICT4.  Reset Value */

#define CCT_CAP4_CAP_4_Pos                    _UINT32_(0)                                          /* (CCT_CAP4) This register saves the value copied from the Free Running timer on a programmed edge of ICT4. Position */
#define CCT_CAP4_CAP_4_Msk                    (_UINT32_(0xFFFFFFFF) << CCT_CAP4_CAP_4_Pos)         /* (CCT_CAP4) This register saves the value copied from the Free Running timer on a programmed edge of ICT4. Mask */
#define CCT_CAP4_CAP_4(value)                 (CCT_CAP4_CAP_4_Msk & (_UINT32_(value) << CCT_CAP4_CAP_4_Pos)) /* Assigment of value for CAP_4 in the CCT_CAP4 register */
#define CCT_CAP4_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (CCT_CAP4) Register Mask  */


/* -------- CCT_CAP5 : (CCT Offset: 0x24) (R/W 32) This register saves the value copied from the Free Running timer on a programmed edge of ICT5. -------- */
#define CCT_CAP5_RESETVALUE                   _UINT32_(0x00)                                       /*  (CCT_CAP5) This register saves the value copied from the Free Running timer on a programmed edge of ICT5.  Reset Value */

#define CCT_CAP5_CAP_5_Pos                    _UINT32_(0)                                          /* (CCT_CAP5) This register saves the value copied from the Free Running timer on a programmed edge of ICT5. Position */
#define CCT_CAP5_CAP_5_Msk                    (_UINT32_(0xFFFFFFFF) << CCT_CAP5_CAP_5_Pos)         /* (CCT_CAP5) This register saves the value copied from the Free Running timer on a programmed edge of ICT5. Mask */
#define CCT_CAP5_CAP_5(value)                 (CCT_CAP5_CAP_5_Msk & (_UINT32_(value) << CCT_CAP5_CAP_5_Pos)) /* Assigment of value for CAP_5 in the CCT_CAP5 register */
#define CCT_CAP5_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (CCT_CAP5) Register Mask  */


/* -------- CCT_COMP0 : (CCT Offset: 0x28) (R/W 32) A COMPARE 0 interrupt is generated when this register matches the value in the Free Running Timer. -------- */
#define CCT_COMP0_RESETVALUE                  _UINT32_(0x00)                                       /*  (CCT_COMP0) A COMPARE 0 interrupt is generated when this register matches the value in the Free Running Timer.  Reset Value */

#define CCT_COMP0_COMP_0_Pos                  _UINT32_(0)                                          /* (CCT_COMP0) A COMPARE 0 interrupt is generated when this register matches the value in the Free Running Timer. Position */
#define CCT_COMP0_COMP_0_Msk                  (_UINT32_(0xFFFFFFFF) << CCT_COMP0_COMP_0_Pos)       /* (CCT_COMP0) A COMPARE 0 interrupt is generated when this register matches the value in the Free Running Timer. Mask */
#define CCT_COMP0_COMP_0(value)               (CCT_COMP0_COMP_0_Msk & (_UINT32_(value) << CCT_COMP0_COMP_0_Pos)) /* Assigment of value for COMP_0 in the CCT_COMP0 register */
#define CCT_COMP0_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (CCT_COMP0) Register Mask  */


/* -------- CCT_COMP1 : (CCT Offset: 0x2C) (R/W 32) A COMPARE 1 interrupt is generated when this register matches the value in the Free Running Timer. -------- */
#define CCT_COMP1_RESETVALUE                  _UINT32_(0x00)                                       /*  (CCT_COMP1) A COMPARE 1 interrupt is generated when this register matches the value in the Free Running Timer.  Reset Value */

#define CCT_COMP1_COMP_1_Pos                  _UINT32_(0)                                          /* (CCT_COMP1) A COMPARE 1 interrupt is generated when this register matches the value in the Free Running Timer. Position */
#define CCT_COMP1_COMP_1_Msk                  (_UINT32_(0xFFFFFFFF) << CCT_COMP1_COMP_1_Pos)       /* (CCT_COMP1) A COMPARE 1 interrupt is generated when this register matches the value in the Free Running Timer. Mask */
#define CCT_COMP1_COMP_1(value)               (CCT_COMP1_COMP_1_Msk & (_UINT32_(value) << CCT_COMP1_COMP_1_Pos)) /* Assigment of value for COMP_1 in the CCT_COMP1 register */
#define CCT_COMP1_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (CCT_COMP1) Register Mask  */


/* -------- CCT_MUX_SEL : (CCT Offset: 0x30) (R/W 32) This register selects the pin mapping to the capture register. -------- */
#define CCT_MUX_SEL_RESETVALUE                _UINT32_(0x543210)                                   /*  (CCT_MUX_SEL) This register selects the pin mapping to the capture register.  Reset Value */

#define CCT_MUX_SEL_CAP0_Pos                  _UINT32_(0)                                          /* (CCT_MUX_SEL) Mux Select for Capture 0 register. Position */
#define CCT_MUX_SEL_CAP0_Msk                  (_UINT32_(0xF) << CCT_MUX_SEL_CAP0_Pos)              /* (CCT_MUX_SEL) Mux Select for Capture 0 register. Mask */
#define CCT_MUX_SEL_CAP0(value)               (CCT_MUX_SEL_CAP0_Msk & (_UINT32_(value) << CCT_MUX_SEL_CAP0_Pos)) /* Assigment of value for CAP0 in the CCT_MUX_SEL register */
#define CCT_MUX_SEL_CAP1_Pos                  _UINT32_(4)                                          /* (CCT_MUX_SEL) Mux Select for Capture 1 register. Position */
#define CCT_MUX_SEL_CAP1_Msk                  (_UINT32_(0xF) << CCT_MUX_SEL_CAP1_Pos)              /* (CCT_MUX_SEL) Mux Select for Capture 1 register. Mask */
#define CCT_MUX_SEL_CAP1(value)               (CCT_MUX_SEL_CAP1_Msk & (_UINT32_(value) << CCT_MUX_SEL_CAP1_Pos)) /* Assigment of value for CAP1 in the CCT_MUX_SEL register */
#define CCT_MUX_SEL_CAP2_Pos                  _UINT32_(8)                                          /* (CCT_MUX_SEL) Mux Select for Capture 2 register. Position */
#define CCT_MUX_SEL_CAP2_Msk                  (_UINT32_(0xF) << CCT_MUX_SEL_CAP2_Pos)              /* (CCT_MUX_SEL) Mux Select for Capture 2 register. Mask */
#define CCT_MUX_SEL_CAP2(value)               (CCT_MUX_SEL_CAP2_Msk & (_UINT32_(value) << CCT_MUX_SEL_CAP2_Pos)) /* Assigment of value for CAP2 in the CCT_MUX_SEL register */
#define CCT_MUX_SEL_CAP3_Pos                  _UINT32_(12)                                         /* (CCT_MUX_SEL) Mux Select for Capture 3 register. Position */
#define CCT_MUX_SEL_CAP3_Msk                  (_UINT32_(0xF) << CCT_MUX_SEL_CAP3_Pos)              /* (CCT_MUX_SEL) Mux Select for Capture 3 register. Mask */
#define CCT_MUX_SEL_CAP3(value)               (CCT_MUX_SEL_CAP3_Msk & (_UINT32_(value) << CCT_MUX_SEL_CAP3_Pos)) /* Assigment of value for CAP3 in the CCT_MUX_SEL register */
#define CCT_MUX_SEL_CAP4_Pos                  _UINT32_(16)                                         /* (CCT_MUX_SEL) Mux Select for Capture 4 register. Position */
#define CCT_MUX_SEL_CAP4_Msk                  (_UINT32_(0xF) << CCT_MUX_SEL_CAP4_Pos)              /* (CCT_MUX_SEL) Mux Select for Capture 4 register. Mask */
#define CCT_MUX_SEL_CAP4(value)               (CCT_MUX_SEL_CAP4_Msk & (_UINT32_(value) << CCT_MUX_SEL_CAP4_Pos)) /* Assigment of value for CAP4 in the CCT_MUX_SEL register */
#define CCT_MUX_SEL_CAP5_Pos                  _UINT32_(20)                                         /* (CCT_MUX_SEL) Mux Select for Capture 5 register. Position */
#define CCT_MUX_SEL_CAP5_Msk                  (_UINT32_(0xF) << CCT_MUX_SEL_CAP5_Pos)              /* (CCT_MUX_SEL) Mux Select for Capture 5 register. Mask */
#define CCT_MUX_SEL_CAP5(value)               (CCT_MUX_SEL_CAP5_Msk & (_UINT32_(value) << CCT_MUX_SEL_CAP5_Pos)) /* Assigment of value for CAP5 in the CCT_MUX_SEL register */
#define CCT_MUX_SEL_Msk                       _UINT32_(0x00FFFFFF)                                 /* (CCT_MUX_SEL) Register Mask  */


/** \brief CCT register offsets definitions */
#define CCT_CTRL_REG_OFST              _UINT32_(0x00)      /* (CCT_CTRL) This register controls the capture and compare timer. Offset */
#define CCT_CAP0_CTRL_REG_OFST         _UINT32_(0x04)      /* (CCT_CAP0_CTRL) This register is used to configure capture and compare timers 0-3. Offset */
#define CCT_CAP1_CTRL_REG_OFST         _UINT32_(0x08)      /* (CCT_CAP1_CTRL) This register is used to configure capture and compare timers 4-5. Offset */
#define CCT_FREE_RUN_REG_OFST          _UINT32_(0x0C)      /* (CCT_FREE_RUN) This register contains the current value of the Free Running Timer. Offset */
#define CCT_CAP0_REG_OFST              _UINT32_(0x10)      /* (CCT_CAP0) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. Offset */
#define CCT_CAP1_REG_OFST              _UINT32_(0x14)      /* (CCT_CAP1) This register saves the value copied from the Free Running timer on a programmed edge of ICT1. Offset */
#define CCT_CAP2_REG_OFST              _UINT32_(0x18)      /* (CCT_CAP2) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. Offset */
#define CCT_CAP3_REG_OFST              _UINT32_(0x1C)      /* (CCT_CAP3) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. Offset */
#define CCT_CAP4_REG_OFST              _UINT32_(0x20)      /* (CCT_CAP4) This register saves the value copied from the Free Running timer on a programmed edge of ICT4. Offset */
#define CCT_CAP5_REG_OFST              _UINT32_(0x24)      /* (CCT_CAP5) This register saves the value copied from the Free Running timer on a programmed edge of ICT5. Offset */
#define CCT_COMP0_REG_OFST             _UINT32_(0x28)      /* (CCT_COMP0) A COMPARE 0 interrupt is generated when this register matches the value in the Free Running Timer. Offset */
#define CCT_COMP1_REG_OFST             _UINT32_(0x2C)      /* (CCT_COMP1) A COMPARE 1 interrupt is generated when this register matches the value in the Free Running Timer. Offset */
#define CCT_MUX_SEL_REG_OFST           _UINT32_(0x30)      /* (CCT_MUX_SEL) This register selects the pin mapping to the capture register. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief CCT register API structure */
typedef struct
{  /* This is a 16-bit auto-reloading timer/counter. */
  __IO  uint32_t                       CCT_CTRL;           /**< Offset: 0x00 (R/W  32) This register controls the capture and compare timer. */
  __IO  uint32_t                       CCT_CAP0_CTRL;      /**< Offset: 0x04 (R/W  32) This register is used to configure capture and compare timers 0-3. */
  __IO  uint32_t                       CCT_CAP1_CTRL;      /**< Offset: 0x08 (R/W  32) This register is used to configure capture and compare timers 4-5. */
  __IO  uint32_t                       CCT_FREE_RUN;       /**< Offset: 0x0C (R/W  32) This register contains the current value of the Free Running Timer. */
  __IO  uint32_t                       CCT_CAP0;           /**< Offset: 0x10 (R/W  32) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. */
  __IO  uint32_t                       CCT_CAP1;           /**< Offset: 0x14 (R/W  32) This register saves the value copied from the Free Running timer on a programmed edge of ICT1. */
  __IO  uint32_t                       CCT_CAP2;           /**< Offset: 0x18 (R/W  32) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. */
  __IO  uint32_t                       CCT_CAP3;           /**< Offset: 0x1C (R/W  32) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. */
  __IO  uint32_t                       CCT_CAP4;           /**< Offset: 0x20 (R/W  32) This register saves the value copied from the Free Running timer on a programmed edge of ICT4. */
  __IO  uint32_t                       CCT_CAP5;           /**< Offset: 0x24 (R/W  32) This register saves the value copied from the Free Running timer on a programmed edge of ICT5. */
  __IO  uint32_t                       CCT_COMP0;          /**< Offset: 0x28 (R/W  32) A COMPARE 0 interrupt is generated when this register matches the value in the Free Running Timer. */
  __IO  uint32_t                       CCT_COMP1;          /**< Offset: 0x2C (R/W  32) A COMPARE 1 interrupt is generated when this register matches the value in the Free Running Timer. */
  __IO  uint32_t                       CCT_MUX_SEL;        /**< Offset: 0x30 (R/W  32) This register selects the pin mapping to the capture register. */
} cct_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_CCT_COMPONENT_H_ */
