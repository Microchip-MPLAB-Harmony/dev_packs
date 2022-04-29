/*
 * Component description for ADC
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

/* file generated from device description version 2020-03-24T11:15:30Z */
#ifndef _CEC1712H_S2_SX_ADC_COMPONENT_H_
#define _CEC1712H_S2_SX_ADC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR ADC                                          */
/* ************************************************************************** */

/* -------- ADC_CTRL : (ADC Offset: 0x00) (R/W 32) The ADC Control Register is used to control the behavior of the Analog to Digital Converter. -------- */
#define ADC_CTRL_RESETVALUE                   _UINT32_(0x10106)                                    /*  (ADC_CTRL) The ADC Control Register is used to control the behavior of the Analog to Digital Converter.  Reset Value */

#define ADC_CTRL_ACT_Pos                      _UINT32_(0)                                          /* (ADC_CTRL) 0: The ADC is disabled and placed in its lowest power state. 1: ADC block is enabled for operation. Position */
#define ADC_CTRL_ACT_Msk                      (_UINT32_(0x1) << ADC_CTRL_ACT_Pos)                  /* (ADC_CTRL) 0: The ADC is disabled and placed in its lowest power state. 1: ADC block is enabled for operation. Mask */
#define ADC_CTRL_ACT(value)                   (ADC_CTRL_ACT_Msk & (_UINT32_(value) << ADC_CTRL_ACT_Pos)) /* Assigment of value for ACT in the ADC_CTRL register */
#define ADC_CTRL_STRT_SIN_Pos                 _UINT32_(1)                                          /* (ADC_CTRL) (START_SINGLE) 0: The ADC Single Mode is disabled. 1: The ADC Single Mode is enabled. Note: This bit is self-clearing Position */
#define ADC_CTRL_STRT_SIN_Msk                 (_UINT32_(0x1) << ADC_CTRL_STRT_SIN_Pos)             /* (ADC_CTRL) (START_SINGLE) 0: The ADC Single Mode is disabled. 1: The ADC Single Mode is enabled. Note: This bit is self-clearing Mask */
#define ADC_CTRL_STRT_SIN(value)              (ADC_CTRL_STRT_SIN_Msk & (_UINT32_(value) << ADC_CTRL_STRT_SIN_Pos)) /* Assigment of value for STRT_SIN in the ADC_CTRL register */
#define ADC_CTRL_STRT_RPT_Pos                 _UINT32_(2)                                          /* (ADC_CTRL) 0: The ADC Repeat Mode is disabled. 1: The ADC Repeat Mode is enabled. Position */
#define ADC_CTRL_STRT_RPT_Msk                 (_UINT32_(0x1) << ADC_CTRL_STRT_RPT_Pos)             /* (ADC_CTRL) 0: The ADC Repeat Mode is disabled. 1: The ADC Repeat Mode is enabled. Mask */
#define ADC_CTRL_STRT_RPT(value)              (ADC_CTRL_STRT_RPT_Msk & (_UINT32_(value) << ADC_CTRL_STRT_RPT_Pos)) /* Assigment of value for STRT_RPT in the ADC_CTRL register */
#define ADC_CTRL_PWR_SAV_DIS_Pos              _UINT32_(3)                                          /* (ADC_CTRL) 0: Power saving feature is enabled. 1: Power saving feature is disabled. Position */
#define ADC_CTRL_PWR_SAV_DIS_Msk              (_UINT32_(0x1) << ADC_CTRL_PWR_SAV_DIS_Pos)          /* (ADC_CTRL) 0: Power saving feature is enabled. 1: Power saving feature is disabled. Mask */
#define ADC_CTRL_PWR_SAV_DIS(value)           (ADC_CTRL_PWR_SAV_DIS_Msk & (_UINT32_(value) << ADC_CTRL_PWR_SAV_DIS_Pos)) /* Assigment of value for PWR_SAV_DIS in the ADC_CTRL register */
#define ADC_CTRL_SFT_RST_Pos                  _UINT32_(4)                                          /* (ADC_CTRL) (SOFT_RESET) 1: writing one causes a reset of the ADC block hardware (not the registers) 0: writing zero takes the ADC block out of reset Position */
#define ADC_CTRL_SFT_RST_Msk                  (_UINT32_(0x1) << ADC_CTRL_SFT_RST_Pos)              /* (ADC_CTRL) (SOFT_RESET) 1: writing one causes a reset of the ADC block hardware (not the registers) 0: writing zero takes the ADC block out of reset Mask */
#define ADC_CTRL_SFT_RST(value)               (ADC_CTRL_SFT_RST_Msk & (_UINT32_(value) << ADC_CTRL_SFT_RST_Pos)) /* Assigment of value for SFT_RST in the ADC_CTRL register */
#define ADC_CTRL_RPT_DONE_STS_Pos             _UINT32_(6)                                          /* (ADC_CTRL) 0: ADC repeat-sample conversion is not complete. 1: ADC repeat-sample conversion is completed. (R/WC) Position */
#define ADC_CTRL_RPT_DONE_STS_Msk             (_UINT32_(0x1) << ADC_CTRL_RPT_DONE_STS_Pos)         /* (ADC_CTRL) 0: ADC repeat-sample conversion is not complete. 1: ADC repeat-sample conversion is completed. (R/WC) Mask */
#define ADC_CTRL_RPT_DONE_STS(value)          (ADC_CTRL_RPT_DONE_STS_Msk & (_UINT32_(value) << ADC_CTRL_RPT_DONE_STS_Pos)) /* Assigment of value for RPT_DONE_STS in the ADC_CTRL register */
#define ADC_CTRL_SIN_DONE_STS_Pos             _UINT32_(7)                                          /* (ADC_CTRL) 0: ADC single-sample conversion is not complete. 1: ADC single-sample conversion is completed. (R/WC) Position */
#define ADC_CTRL_SIN_DONE_STS_Msk             (_UINT32_(0x1) << ADC_CTRL_SIN_DONE_STS_Pos)         /* (ADC_CTRL) 0: ADC single-sample conversion is not complete. 1: ADC single-sample conversion is completed. (R/WC) Mask */
#define ADC_CTRL_SIN_DONE_STS(value)          (ADC_CTRL_SIN_DONE_STS_Msk & (_UINT32_(value) << ADC_CTRL_SIN_DONE_STS_Pos)) /* Assigment of value for SIN_DONE_STS in the ADC_CTRL register */
#define ADC_CTRL_Msk                          _UINT32_(0x000000DF)                                 /* (ADC_CTRL) Register Mask  */


/* -------- ADC_DELAY : (ADC Offset: 0x04) (R/W 32) The ADC Delay register determines the delay from setting Start_Repeat in the ADC Control Register and the start of a conversion cycle. This register also controls the interval between conversion cycles in repeat mode. -------- */
#define ADC_DELAY_RESETVALUE                  _UINT32_(0x00)                                       /*  (ADC_DELAY) The ADC Delay register determines the delay from setting Start_Repeat in the ADC Control Register and the start of a conversion cycle. This register also controls the interval between conversion cycles in repeat mode.  Reset Value */

#define ADC_DELAY_STRT_DLY_Pos                _UINT32_(0)                                          /* (ADC_DELAY) This field determines the starting delay before a conversion cycle is begun when Start_Repeat is written with a 1. Position */
#define ADC_DELAY_STRT_DLY_Msk                (_UINT32_(0xFFFF) << ADC_DELAY_STRT_DLY_Pos)         /* (ADC_DELAY) This field determines the starting delay before a conversion cycle is begun when Start_Repeat is written with a 1. Mask */
#define ADC_DELAY_STRT_DLY(value)             (ADC_DELAY_STRT_DLY_Msk & (_UINT32_(value) << ADC_DELAY_STRT_DLY_Pos)) /* Assigment of value for STRT_DLY in the ADC_DELAY register */
#define ADC_DELAY_RPT_DLY_Pos                 _UINT32_(16)                                         /* (ADC_DELAY) This field determines the interval between conversion cycles when Start_Repeat is 1. Position */
#define ADC_DELAY_RPT_DLY_Msk                 (_UINT32_(0xFFFF) << ADC_DELAY_RPT_DLY_Pos)          /* (ADC_DELAY) This field determines the interval between conversion cycles when Start_Repeat is 1. Mask */
#define ADC_DELAY_RPT_DLY(value)              (ADC_DELAY_RPT_DLY_Msk & (_UINT32_(value) << ADC_DELAY_RPT_DLY_Pos)) /* Assigment of value for RPT_DLY in the ADC_DELAY register */
#define ADC_DELAY_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (ADC_DELAY) Register Mask  */


/* -------- ADC_CHAN_STS : (ADC Offset: 0x08) (R/W 32) The ADC Status Register indicates whether the ADC has completed a conversion cycle. All bits are cleared by being written with a 1. \n            0: conversion of the corresponding ADC channel is not complete\n            1: conversion of the corresponding ADC channel is complete -------- */
#define ADC_CHAN_STS_RESETVALUE               _UINT32_(0x00)                                       /*  (ADC_CHAN_STS) The ADC Status Register indicates whether the ADC has completed a conversion cycle. All bits are cleared by being written with a 1. \n            0: conversion of the corresponding ADC channel is not complete\n            1: conversion of the corresponding ADC channel is complete  Reset Value */

#define ADC_CHAN_STS_STS_Pos                  _UINT32_(0)                                          /* (ADC_CHAN_STS) All bits are cleared by being written with a '1'. 1=conversion of the corresponding ADC channel is complete;\n      0=conversion of the corresponding ADC channel is not complete. For enabled single cycles, the SINGLE_DONE_STATUS bit in the\n      ADC Control Register is also set after all enabled channel conversion are done; for enabled repeat cycles, the REPEAT_DONE_STATUS\n      in the ADC Control Register is also set after all enabled channel conversion are done. Position */
#define ADC_CHAN_STS_STS_Msk                  (_UINT32_(0xFFFF) << ADC_CHAN_STS_STS_Pos)           /* (ADC_CHAN_STS) All bits are cleared by being written with a '1'. 1=conversion of the corresponding ADC channel is complete;\n      0=conversion of the corresponding ADC channel is not complete. For enabled single cycles, the SINGLE_DONE_STATUS bit in the\n      ADC Control Register is also set after all enabled channel conversion are done; for enabled repeat cycles, the REPEAT_DONE_STATUS\n      in the ADC Control Register is also set after all enabled channel conversion are done. Mask */
#define ADC_CHAN_STS_STS(value)               (ADC_CHAN_STS_STS_Msk & (_UINT32_(value) << ADC_CHAN_STS_STS_Pos)) /* Assigment of value for STS in the ADC_CHAN_STS register */
#define ADC_CHAN_STS_Msk                      _UINT32_(0x0000FFFF)                                 /* (ADC_CHAN_STS) Register Mask  */


/* -------- ADC_SNG_EN : (ADC Offset: 0x0C) (R/W 32) The ADC Single Register is used to control which ADC channel is captured during a Single-Sample conversion cycle initiated by the Start_Single bit in the ADC Control Register. \n            APPLICATION NOTE: Do not change the bits in this register in the middle of a conversion cycle to insure proper operation.\n            0: single cycle conversions for this channel are disabled\n            1: single cycle conversions for this channel are enabled -------- */
#define ADC_SNG_EN_RESETVALUE                 _UINT32_(0x00)                                       /*  (ADC_SNG_EN) The ADC Single Register is used to control which ADC channel is captured during a Single-Sample conversion cycle initiated by the Start_Single bit in the ADC Control Register. \n            APPLICATION NOTE: Do not change the bits in this register in the middle of a conversion cycle to insure proper operation.\n            0: single cycle conversions for this channel are disabled\n            1: single cycle conversions for this channel are enabled  Reset Value */

#define ADC_SNG_EN_S_EN_Pos                   _UINT32_(0)                                          /* (ADC_SNG_EN) Each bit in this field enables the corresponding ADC channel when a single cycle of conversions is started when the\n      START_SINGLE bit in the ADC Control Register is written with a 1. 1=single cycle conversions for this channel are enabled\n      0=single cycle conversions for this channel are disabled. Note: If this register is changed while a conversion. Position */
#define ADC_SNG_EN_S_EN_Msk                   (_UINT32_(0xFFFF) << ADC_SNG_EN_S_EN_Pos)            /* (ADC_SNG_EN) Each bit in this field enables the corresponding ADC channel when a single cycle of conversions is started when the\n      START_SINGLE bit in the ADC Control Register is written with a 1. 1=single cycle conversions for this channel are enabled\n      0=single cycle conversions for this channel are disabled. Note: If this register is changed while a conversion. Mask */
#define ADC_SNG_EN_S_EN(value)                (ADC_SNG_EN_S_EN_Msk & (_UINT32_(value) << ADC_SNG_EN_S_EN_Pos)) /* Assigment of value for S_EN in the ADC_SNG_EN register */
#define ADC_SNG_EN_Msk                        _UINT32_(0x0000FFFF)                                 /* (ADC_SNG_EN) Register Mask  */


/* -------- ADC_REPT_EN : (ADC Offset: 0x10) (R/W 32) The ADC Repeat Register is used to control which ADC channels are captured during a repeat conversion cycle initiated by the Start_Repeat bit in the ADC Control Register. -------- */
#define ADC_REPT_EN_RESETVALUE                _UINT32_(0x00)                                       /*  (ADC_REPT_EN) The ADC Repeat Register is used to control which ADC channels are captured during a repeat conversion cycle initiated by the Start_Repeat bit in the ADC Control Register.  Reset Value */

#define ADC_REPT_EN_R_EN_Pos                  _UINT32_(0)                                          /* (ADC_REPT_EN) Each bit in this field enables the corresponding ADC channel for each pass of the Repeated ADC Conversion that is\n      controlled by bit START_REPEAT in the ADC Control Register. 1=repeat conversions for this channel are enabled;\n      0=repeat conversions for this channel are disabled Position */
#define ADC_REPT_EN_R_EN_Msk                  (_UINT32_(0xFFFF) << ADC_REPT_EN_R_EN_Pos)           /* (ADC_REPT_EN) Each bit in this field enables the corresponding ADC channel for each pass of the Repeated ADC Conversion that is\n      controlled by bit START_REPEAT in the ADC Control Register. 1=repeat conversions for this channel are enabled;\n      0=repeat conversions for this channel are disabled Mask */
#define ADC_REPT_EN_R_EN(value)               (ADC_REPT_EN_R_EN_Msk & (_UINT32_(value) << ADC_REPT_EN_R_EN_Pos)) /* Assigment of value for R_EN in the ADC_REPT_EN register */
#define ADC_REPT_EN_Msk                       _UINT32_(0x0000FFFF)                                 /* (ADC_REPT_EN) Register Mask  */


/* -------- ADC_CHAN_RD : (ADC Offset: 0x14) (R/W 32) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. -------- */
#define ADC_CHAN_RD_RESETVALUE                _UINT32_(0x00)                                       /*  (ADC_CHAN_RD) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0.  Reset Value */

#define ADC_CHAN_RD_Msk                       _UINT32_(0x00000000)                                 /* (ADC_CHAN_RD) Register Mask  */


/* -------- ADC_CFG : (ADC Offset: 0x7C) (R/W 32) The ADC Configuration Register is used to configure the ADC clock timing. -------- */
#define ADC_CFG_RESETVALUE                    _UINT32_(0x101)                                      /*  (ADC_CFG) The ADC Configuration Register is used to configure the ADC clock timing.  Reset Value */

#define ADC_CFG_CLKLW_TIM_Pos                 _UINT32_(0)                                          /* (ADC_CFG) These bits define the low time count of the ADC clock.\n         0= not used.\n         1= 1 System Clock.\n         2= 2 System Clock.\n Position */
#define ADC_CFG_CLKLW_TIM_Msk                 (_UINT32_(0xFF) << ADC_CFG_CLKLW_TIM_Pos)            /* (ADC_CFG) These bits define the low time count of the ADC clock.\n         0= not used.\n         1= 1 System Clock.\n         2= 2 System Clock.\n Mask */
#define ADC_CFG_CLKLW_TIM(value)              (ADC_CFG_CLKLW_TIM_Msk & (_UINT32_(value) << ADC_CFG_CLKLW_TIM_Pos)) /* Assigment of value for CLKLW_TIM in the ADC_CFG register */
#define ADC_CFG_CLKHIGH_TIM_Pos               _UINT32_(8)                                          /* (ADC_CFG) These bits define the high time count of the ADC clock.\n         0= not used.\n         1= 1 System Clock.\n         2= 2 System Clock.\n Position */
#define ADC_CFG_CLKHIGH_TIM_Msk               (_UINT32_(0xFF) << ADC_CFG_CLKHIGH_TIM_Pos)          /* (ADC_CFG) These bits define the high time count of the ADC clock.\n         0= not used.\n         1= 1 System Clock.\n         2= 2 System Clock.\n Mask */
#define ADC_CFG_CLKHIGH_TIM(value)            (ADC_CFG_CLKHIGH_TIM_Msk & (_UINT32_(value) << ADC_CFG_CLKHIGH_TIM_Pos)) /* Assigment of value for CLKHIGH_TIM in the ADC_CFG register */
#define ADC_CFG_CLKDUMY_TIM_Pos               _UINT32_(16)                                         /* (ADC_CFG) These bits define the dummy cycles of the ADC clock.\n         Valid Values are from 0x0 to 0xF.\n Position */
#define ADC_CFG_CLKDUMY_TIM_Msk               (_UINT32_(0xF) << ADC_CFG_CLKDUMY_TIM_Pos)           /* (ADC_CFG) These bits define the dummy cycles of the ADC clock.\n         Valid Values are from 0x0 to 0xF.\n Mask */
#define ADC_CFG_CLKDUMY_TIM(value)            (ADC_CFG_CLKDUMY_TIM_Msk & (_UINT32_(value) << ADC_CFG_CLKDUMY_TIM_Pos)) /* Assigment of value for CLKDUMY_TIM in the ADC_CFG register */
#define ADC_CFG_PWRUP_DLY_Pos                 _UINT32_(20)                                         /* (ADC_CFG) These bits define the power up delay in number of micro-seconds.\n         Valid Values are from 0x0 to 0xF.\n Position */
#define ADC_CFG_PWRUP_DLY_Msk                 (_UINT32_(0xF) << ADC_CFG_PWRUP_DLY_Pos)             /* (ADC_CFG) These bits define the power up delay in number of micro-seconds.\n         Valid Values are from 0x0 to 0xF.\n Mask */
#define ADC_CFG_PWRUP_DLY(value)              (ADC_CFG_PWRUP_DLY_Msk & (_UINT32_(value) << ADC_CFG_PWRUP_DLY_Pos)) /* Assigment of value for PWRUP_DLY in the ADC_CFG register */
#define ADC_CFG_DUMYCYC_GAP_Pos               _UINT32_(24)                                         /* (ADC_CFG) These bits define the number of micro-seconds between consective Starts.\n Position */
#define ADC_CFG_DUMYCYC_GAP_Msk               (_UINT32_(0xFF) << ADC_CFG_DUMYCYC_GAP_Pos)          /* (ADC_CFG) These bits define the number of micro-seconds between consective Starts.\n Mask */
#define ADC_CFG_DUMYCYC_GAP(value)            (ADC_CFG_DUMYCYC_GAP_Msk & (_UINT32_(value) << ADC_CFG_DUMYCYC_GAP_Pos)) /* Assigment of value for DUMYCYC_GAP in the ADC_CFG register */
#define ADC_CFG_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (ADC_CFG) Register Mask  */


/* -------- ADC_VREF_CHAN : (ADC Offset: 0x80) (R/W 32) The ADC Channel Register is used to configure the reference voltage to the clock timing.\n -------- */
#define ADC_VREF_CHAN_RESETVALUE              _UINT32_(0x00)                                       /*  (ADC_VREF_CHAN) The ADC Channel Register is used to configure the reference voltage to the clock timing.\n  Reset Value */

#define ADC_VREF_CHAN_SEL0_Pos                _UINT32_(0)                                          /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 0.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHAN_SEL0_Msk                (_UINT32_(0x3) << ADC_VREF_CHAN_SEL0_Pos)            /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 0.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHAN_SEL0(value)             (ADC_VREF_CHAN_SEL0_Msk & (_UINT32_(value) << ADC_VREF_CHAN_SEL0_Pos)) /* Assigment of value for SEL0 in the ADC_VREF_CHAN register */
#define ADC_VREF_CHAN_SEL1_Pos                _UINT32_(2)                                          /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 1.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHAN_SEL1_Msk                (_UINT32_(0x3) << ADC_VREF_CHAN_SEL1_Pos)            /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 1.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHAN_SEL1(value)             (ADC_VREF_CHAN_SEL1_Msk & (_UINT32_(value) << ADC_VREF_CHAN_SEL1_Pos)) /* Assigment of value for SEL1 in the ADC_VREF_CHAN register */
#define ADC_VREF_CHAN_SEL2_Pos                _UINT32_(4)                                          /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 2.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHAN_SEL2_Msk                (_UINT32_(0x3) << ADC_VREF_CHAN_SEL2_Pos)            /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 2.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHAN_SEL2(value)             (ADC_VREF_CHAN_SEL2_Msk & (_UINT32_(value) << ADC_VREF_CHAN_SEL2_Pos)) /* Assigment of value for SEL2 in the ADC_VREF_CHAN register */
#define ADC_VREF_CHAN_SEL3_Pos                _UINT32_(6)                                          /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 3.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHAN_SEL3_Msk                (_UINT32_(0x3) << ADC_VREF_CHAN_SEL3_Pos)            /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 3.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHAN_SEL3(value)             (ADC_VREF_CHAN_SEL3_Msk & (_UINT32_(value) << ADC_VREF_CHAN_SEL3_Pos)) /* Assigment of value for SEL3 in the ADC_VREF_CHAN register */
#define ADC_VREF_CHAN_SEL4_Pos                _UINT32_(8)                                          /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 4.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHAN_SEL4_Msk                (_UINT32_(0x3) << ADC_VREF_CHAN_SEL4_Pos)            /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 4.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHAN_SEL4(value)             (ADC_VREF_CHAN_SEL4_Msk & (_UINT32_(value) << ADC_VREF_CHAN_SEL4_Pos)) /* Assigment of value for SEL4 in the ADC_VREF_CHAN register */
#define ADC_VREF_CHAN_SEL5_Pos                _UINT32_(10)                                         /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 5.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHAN_SEL5_Msk                (_UINT32_(0x3) << ADC_VREF_CHAN_SEL5_Pos)            /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 5.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHAN_SEL5(value)             (ADC_VREF_CHAN_SEL5_Msk & (_UINT32_(value) << ADC_VREF_CHAN_SEL5_Pos)) /* Assigment of value for SEL5 in the ADC_VREF_CHAN register */
#define ADC_VREF_CHAN_SEL6_Pos                _UINT32_(12)                                         /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 6.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHAN_SEL6_Msk                (_UINT32_(0x3) << ADC_VREF_CHAN_SEL6_Pos)            /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 6.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHAN_SEL6(value)             (ADC_VREF_CHAN_SEL6_Msk & (_UINT32_(value) << ADC_VREF_CHAN_SEL6_Pos)) /* Assigment of value for SEL6 in the ADC_VREF_CHAN register */
#define ADC_VREF_CHAN_SEL7_Pos                _UINT32_(14)                                         /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 7.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHAN_SEL7_Msk                (_UINT32_(0x3) << ADC_VREF_CHAN_SEL7_Pos)            /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 7.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHAN_SEL7(value)             (ADC_VREF_CHAN_SEL7_Msk & (_UINT32_(value) << ADC_VREF_CHAN_SEL7_Pos)) /* Assigment of value for SEL7 in the ADC_VREF_CHAN register */
#define ADC_VREF_CHAN_SEL8_Pos                _UINT32_(16)                                         /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 8.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHAN_SEL8_Msk                (_UINT32_(0x3) << ADC_VREF_CHAN_SEL8_Pos)            /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 8.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHAN_SEL8(value)             (ADC_VREF_CHAN_SEL8_Msk & (_UINT32_(value) << ADC_VREF_CHAN_SEL8_Pos)) /* Assigment of value for SEL8 in the ADC_VREF_CHAN register */
#define ADC_VREF_CHAN_SEL9_Pos                _UINT32_(18)                                         /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 9.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHAN_SEL9_Msk                (_UINT32_(0x3) << ADC_VREF_CHAN_SEL9_Pos)            /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 9.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHAN_SEL9(value)             (ADC_VREF_CHAN_SEL9_Msk & (_UINT32_(value) << ADC_VREF_CHAN_SEL9_Pos)) /* Assigment of value for SEL9 in the ADC_VREF_CHAN register */
#define ADC_VREF_CHAN_SEL10_Pos               _UINT32_(20)                                         /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 10.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHAN_SEL10_Msk               (_UINT32_(0x3) << ADC_VREF_CHAN_SEL10_Pos)           /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 10.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHAN_SEL10(value)            (ADC_VREF_CHAN_SEL10_Msk & (_UINT32_(value) << ADC_VREF_CHAN_SEL10_Pos)) /* Assigment of value for SEL10 in the ADC_VREF_CHAN register */
#define ADC_VREF_CHAN_SEL11_Pos               _UINT32_(22)                                         /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 11.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHAN_SEL11_Msk               (_UINT32_(0x3) << ADC_VREF_CHAN_SEL11_Pos)           /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 11.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHAN_SEL11(value)            (ADC_VREF_CHAN_SEL11_Msk & (_UINT32_(value) << ADC_VREF_CHAN_SEL11_Pos)) /* Assigment of value for SEL11 in the ADC_VREF_CHAN register */
#define ADC_VREF_CHAN_SEL12_Pos               _UINT32_(24)                                         /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 12.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHAN_SEL12_Msk               (_UINT32_(0x3) << ADC_VREF_CHAN_SEL12_Pos)           /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 12.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHAN_SEL12(value)            (ADC_VREF_CHAN_SEL12_Msk & (_UINT32_(value) << ADC_VREF_CHAN_SEL12_Pos)) /* Assigment of value for SEL12 in the ADC_VREF_CHAN register */
#define ADC_VREF_CHAN_SEL13_Pos               _UINT32_(26)                                         /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 13.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHAN_SEL13_Msk               (_UINT32_(0x3) << ADC_VREF_CHAN_SEL13_Pos)           /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 13.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHAN_SEL13(value)            (ADC_VREF_CHAN_SEL13_Msk & (_UINT32_(value) << ADC_VREF_CHAN_SEL13_Pos)) /* Assigment of value for SEL13 in the ADC_VREF_CHAN register */
#define ADC_VREF_CHAN_SEL14_Pos               _UINT32_(28)                                         /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 14.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHAN_SEL14_Msk               (_UINT32_(0x3) << ADC_VREF_CHAN_SEL14_Pos)           /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 14.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHAN_SEL14(value)            (ADC_VREF_CHAN_SEL14_Msk & (_UINT32_(value) << ADC_VREF_CHAN_SEL14_Pos)) /* Assigment of value for SEL14 in the ADC_VREF_CHAN register */
#define ADC_VREF_CHAN_SEL15_Pos               _UINT32_(30)                                         /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 15.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHAN_SEL15_Msk               (_UINT32_(0x3) << ADC_VREF_CHAN_SEL15_Pos)           /* (ADC_VREF_CHAN) These bits define the reference voltage for Channel 15.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHAN_SEL15(value)            (ADC_VREF_CHAN_SEL15_Msk & (_UINT32_(value) << ADC_VREF_CHAN_SEL15_Pos)) /* Assigment of value for SEL15 in the ADC_VREF_CHAN register */
#define ADC_VREF_CHAN_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (ADC_VREF_CHAN) Register Mask  */


/* -------- ADC_VREF_CTRL : (ADC Offset: 0x84) (R/W 32) This is the VREF Control Register -------- */
#define ADC_VREF_CTRL_RESETVALUE              _UINT32_(0x00)                                       /*  (ADC_VREF_CTRL) This is the VREF Control Register  Reset Value */

#define ADC_VREF_CTRL_CHRG_DLY_Pos            _UINT32_(0)                                          /* (ADC_VREF_CTRL) This field represnts the delay time to charge up the external VREF capacitor.\n Position */
#define ADC_VREF_CTRL_CHRG_DLY_Msk            (_UINT32_(0xFFFF) << ADC_VREF_CTRL_CHRG_DLY_Pos)     /* (ADC_VREF_CTRL) This field represnts the delay time to charge up the external VREF capacitor.\n Mask */
#define ADC_VREF_CTRL_CHRG_DLY(value)         (ADC_VREF_CTRL_CHRG_DLY_Msk & (_UINT32_(value) << ADC_VREF_CTRL_CHRG_DLY_Pos)) /* Assigment of value for CHRG_DLY in the ADC_VREF_CTRL register */
#define ADC_VREF_CTRL_SWITCH_DLY_Pos          _UINT32_(16)                                         /* (ADC_VREF_CTRL) This field represnts the delay time interval between switching VREF Selects.\n Position */
#define ADC_VREF_CTRL_SWITCH_DLY_Msk          (_UINT32_(0x1FFF) << ADC_VREF_CTRL_SWITCH_DLY_Pos)   /* (ADC_VREF_CTRL) This field represnts the delay time interval between switching VREF Selects.\n Mask */
#define ADC_VREF_CTRL_SWITCH_DLY(value)       (ADC_VREF_CTRL_SWITCH_DLY_Msk & (_UINT32_(value) << ADC_VREF_CTRL_SWITCH_DLY_Pos)) /* Assigment of value for SWITCH_DLY in the ADC_VREF_CTRL register */
#define ADC_VREF_CTRL_PADCTRL_Pos             _UINT32_(29)                                         /* (ADC_VREF_CTRL) This fields give the choice to the application whether to float the unused PAD's or to Drive them to 0.\n         1= Drive unused PAD's Low 0b\n         0= Leave unused PAD's Floating.\n Position */
#define ADC_VREF_CTRL_PADCTRL_Msk             (_UINT32_(0x1) << ADC_VREF_CTRL_PADCTRL_Pos)         /* (ADC_VREF_CTRL) This fields give the choice to the application whether to float the unused PAD's or to Drive them to 0.\n         1= Drive unused PAD's Low 0b\n         0= Leave unused PAD's Floating.\n Mask */
#define ADC_VREF_CTRL_PADCTRL(value)          (ADC_VREF_CTRL_PADCTRL_Msk & (_UINT32_(value) << ADC_VREF_CTRL_PADCTRL_Pos)) /* Assigment of value for PADCTRL in the ADC_VREF_CTRL register */
#define ADC_VREF_CTRL_SELSTAT_Pos             _UINT32_(30)                                         /* (ADC_VREF_CTRL) This fields gives information about the current VREF selected.\n         0x0= VREF0\n         0x1= VREF1\n         0x2= Reserved\n         0x3= Reserved\n Position */
#define ADC_VREF_CTRL_SELSTAT_Msk             (_UINT32_(0x3) << ADC_VREF_CTRL_SELSTAT_Pos)         /* (ADC_VREF_CTRL) This fields gives information about the current VREF selected.\n         0x0= VREF0\n         0x1= VREF1\n         0x2= Reserved\n         0x3= Reserved\n Mask */
#define ADC_VREF_CTRL_SELSTAT(value)          (ADC_VREF_CTRL_SELSTAT_Msk & (_UINT32_(value) << ADC_VREF_CTRL_SELSTAT_Pos)) /* Assigment of value for SELSTAT in the ADC_VREF_CTRL register */
#define ADC_VREF_CTRL_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (ADC_VREF_CTRL) Register Mask  */


/* -------- ADC_SAR_CTRL : (ADC Offset: 0x88) (R/W 32) This is the SAR ADC Control Register.\n -------- */
#define ADC_SAR_CTRL_RESETVALUE               _UINT32_(0x06)                                       /*  (ADC_SAR_CTRL) This is the SAR ADC Control Register.\n  Reset Value */

#define ADC_SAR_CTRL_SEL_DIFF_Pos             _UINT32_(0)                                          /* (ADC_SAR_CTRL) This field select between Single ended / Differential input.\n    0= ADC core is enabled for single ended input operation.\n    1= ADC core is enabled for differential input operation.\n Position */
#define ADC_SAR_CTRL_SEL_DIFF_Msk             (_UINT32_(0x1) << ADC_SAR_CTRL_SEL_DIFF_Pos)         /* (ADC_SAR_CTRL) This field select between Single ended / Differential input.\n    0= ADC core is enabled for single ended input operation.\n    1= ADC core is enabled for differential input operation.\n Mask */
#define ADC_SAR_CTRL_SEL_DIFF(value)          (ADC_SAR_CTRL_SEL_DIFF_Msk & (_UINT32_(value) << ADC_SAR_CTRL_SEL_DIFF_Pos)) /* Assigment of value for SEL_DIFF in the ADC_SAR_CTRL register */
#define ADC_SAR_CTRL_SEL_RES_Pos              _UINT32_(1)                                          /* (ADC_SAR_CTRL) This field select the ADC Resolution (10/12 bits).\n    0x0= Reserved.\n    0x1= Reserved.\n    0x2= 10 bit ADC resolution.\n    0x3= 12 bit ADC resolution.\n Position */
#define ADC_SAR_CTRL_SEL_RES_Msk              (_UINT32_(0x3) << ADC_SAR_CTRL_SEL_RES_Pos)          /* (ADC_SAR_CTRL) This field select the ADC Resolution (10/12 bits).\n    0x0= Reserved.\n    0x1= Reserved.\n    0x2= 10 bit ADC resolution.\n    0x3= 12 bit ADC resolution.\n Mask */
#define ADC_SAR_CTRL_SEL_RES(value)           (ADC_SAR_CTRL_SEL_RES_Msk & (_UINT32_(value) << ADC_SAR_CTRL_SEL_RES_Pos)) /* Assigment of value for SEL_RES in the ADC_SAR_CTRL register */
#define ADC_SAR_CTRL_SHIFT_DAT_Pos            _UINT32_(3)                                          /* (ADC_SAR_CTRL) This field defined if the ADC output is Right or Left Justified.\n         1= adc_dout is not shifted and lower bits are set to 0.\n         0= adc_dout is shifted right following resolution selected.\n Position */
#define ADC_SAR_CTRL_SHIFT_DAT_Msk            (_UINT32_(0x1) << ADC_SAR_CTRL_SHIFT_DAT_Pos)        /* (ADC_SAR_CTRL) This field defined if the ADC output is Right or Left Justified.\n         1= adc_dout is not shifted and lower bits are set to 0.\n         0= adc_dout is shifted right following resolution selected.\n Mask */
#define ADC_SAR_CTRL_SHIFT_DAT(value)         (ADC_SAR_CTRL_SHIFT_DAT_Msk & (_UINT32_(value) << ADC_SAR_CTRL_SHIFT_DAT_Pos)) /* Assigment of value for SHIFT_DAT in the ADC_SAR_CTRL register */
#define ADC_SAR_CTRL_EN_ASYN_SMPL_Pos         _UINT32_(4)                                          /* (ADC_SAR_CTRL) This field enables asynchronous sampling.\n         0= Async Sampling Disabled.\n         1= Async Sampling Enabled.\n Position */
#define ADC_SAR_CTRL_EN_ASYN_SMPL_Msk         (_UINT32_(0x1) << ADC_SAR_CTRL_EN_ASYN_SMPL_Pos)     /* (ADC_SAR_CTRL) This field enables asynchronous sampling.\n         0= Async Sampling Disabled.\n         1= Async Sampling Enabled.\n Mask */
#define ADC_SAR_CTRL_EN_ASYN_SMPL(value)      (ADC_SAR_CTRL_EN_ASYN_SMPL_Msk & (_UINT32_(value) << ADC_SAR_CTRL_EN_ASYN_SMPL_Pos)) /* Assigment of value for EN_ASYN_SMPL in the ADC_SAR_CTRL register */
#define ADC_SAR_CTRL_EN_SERIAL_Pos            _UINT32_(5)                                          /* (ADC_SAR_CTRL) This field enables serial output (dout) from ADC.\n         0= Parallel dout.\n         1= Serial dout.\n Position */
#define ADC_SAR_CTRL_EN_SERIAL_Msk            (_UINT32_(0x1) << ADC_SAR_CTRL_EN_SERIAL_Pos)        /* (ADC_SAR_CTRL) This field enables serial output (dout) from ADC.\n         0= Parallel dout.\n         1= Serial dout.\n Mask */
#define ADC_SAR_CTRL_EN_SERIAL(value)         (ADC_SAR_CTRL_EN_SERIAL_Msk & (_UINT32_(value) << ADC_SAR_CTRL_EN_SERIAL_Pos)) /* Assigment of value for EN_SERIAL in the ADC_SAR_CTRL register */
#define ADC_SAR_CTRL_WARM_UP_DLY_Pos          _UINT32_(7)                                          /* (ADC_SAR_CTRL) This field represents the warmup delay number in microseconds.\n Position */
#define ADC_SAR_CTRL_WARM_UP_DLY_Msk          (_UINT32_(0x1FF) << ADC_SAR_CTRL_WARM_UP_DLY_Pos)    /* (ADC_SAR_CTRL) This field represents the warmup delay number in microseconds.\n Mask */
#define ADC_SAR_CTRL_WARM_UP_DLY(value)       (ADC_SAR_CTRL_WARM_UP_DLY_Msk & (_UINT32_(value) << ADC_SAR_CTRL_WARM_UP_DLY_Pos)) /* Assigment of value for WARM_UP_DLY in the ADC_SAR_CTRL register */
#define ADC_SAR_CTRL_Msk                      _UINT32_(0x0000FFBF)                                 /* (ADC_SAR_CTRL) Register Mask  */


/* -------- ADC_SAR_CFG : (ADC Offset: 0x8C) (R/W 32) This is the SAR ADC Configuration Register.\n -------- */
#define ADC_SAR_CFG_RESETVALUE                _UINT32_(0x00)                                       /*  (ADC_SAR_CFG) This is the SAR ADC Configuration Register.\n  Reset Value */

#define ADC_SAR_CFG_EN_CMBF_Pos               _UINT32_(0)                                          /* (ADC_SAR_CFG) Enable Common Mode Buffer Amplifier.\n    0= Common Mode Buffer Amplifier is high all the time.\n    1= Controls Common Mode Buffer Amplifier during power cycling.\n Position */
#define ADC_SAR_CFG_EN_CMBF_Msk               (_UINT32_(0x1) << ADC_SAR_CFG_EN_CMBF_Pos)           /* (ADC_SAR_CFG) Enable Common Mode Buffer Amplifier.\n    0= Common Mode Buffer Amplifier is high all the time.\n    1= Controls Common Mode Buffer Amplifier during power cycling.\n Mask */
#define ADC_SAR_CFG_EN_CMBF(value)            (ADC_SAR_CFG_EN_CMBF_Msk & (_UINT32_(value) << ADC_SAR_CFG_EN_CMBF_Pos)) /* Assigment of value for EN_CMBF in the ADC_SAR_CFG register */
#define ADC_SAR_CFG_DIS_DOUT_Pos              _UINT32_(1)                                          /* (ADC_SAR_CFG) Disable Parallel Output.\n    0= Enable Parallel Output.\n    1= Disable Parallel Output.\n Position */
#define ADC_SAR_CFG_DIS_DOUT_Msk              (_UINT32_(0x1) << ADC_SAR_CFG_DIS_DOUT_Pos)          /* (ADC_SAR_CFG) Disable Parallel Output.\n    0= Enable Parallel Output.\n    1= Disable Parallel Output.\n Mask */
#define ADC_SAR_CFG_DIS_DOUT(value)           (ADC_SAR_CFG_DIS_DOUT_Msk & (_UINT32_(value) << ADC_SAR_CFG_DIS_DOUT_Pos)) /* Assigment of value for DIS_DOUT in the ADC_SAR_CFG register */
#define ADC_SAR_CFG_EN_DITHER_Pos             _UINT32_(2)                                          /* (ADC_SAR_CFG) Enable Dithering.\n    0= Disable Dither.\n    1= Enable Dither.\n Position */
#define ADC_SAR_CFG_EN_DITHER_Msk             (_UINT32_(0x1) << ADC_SAR_CFG_EN_DITHER_Pos)         /* (ADC_SAR_CFG) Enable Dithering.\n    0= Disable Dither.\n    1= Enable Dither.\n Mask */
#define ADC_SAR_CFG_EN_DITHER(value)          (ADC_SAR_CFG_EN_DITHER_Msk & (_UINT32_(value) << ADC_SAR_CFG_EN_DITHER_Pos)) /* Assigment of value for EN_DITHER in the ADC_SAR_CFG register */
#define ADC_SAR_CFG_FAZ_AU_ZERO_Pos           _UINT32_(3)                                          /* (ADC_SAR_CFG) Enable F_AZ AUTOZEROING.\n    1= Disable f_az autozeroing.\n    0= Enable f_az autozeroing.\n Position */
#define ADC_SAR_CFG_FAZ_AU_ZERO_Msk           (_UINT32_(0x1) << ADC_SAR_CFG_FAZ_AU_ZERO_Pos)       /* (ADC_SAR_CFG) Enable F_AZ AUTOZEROING.\n    1= Disable f_az autozeroing.\n    0= Enable f_az autozeroing.\n Mask */
#define ADC_SAR_CFG_FAZ_AU_ZERO(value)        (ADC_SAR_CFG_FAZ_AU_ZERO_Msk & (_UINT32_(value) << ADC_SAR_CFG_FAZ_AU_ZERO_Pos)) /* Assigment of value for FAZ_AU_ZERO in the ADC_SAR_CFG register */
#define ADC_SAR_CFG_SAZ_AU_ZERO_Pos           _UINT32_(4)                                          /* (ADC_SAR_CFG) Enable S_AZ AUTOZEROING.\n    1= Disable S_AZ autozeroing.\n    0= Enable S_AZ autozeroing.\n Position */
#define ADC_SAR_CFG_SAZ_AU_ZERO_Msk           (_UINT32_(0x1) << ADC_SAR_CFG_SAZ_AU_ZERO_Pos)       /* (ADC_SAR_CFG) Enable S_AZ AUTOZEROING.\n    1= Disable S_AZ autozeroing.\n    0= Enable S_AZ autozeroing.\n Mask */
#define ADC_SAR_CFG_SAZ_AU_ZERO(value)        (ADC_SAR_CFG_SAZ_AU_ZERO_Msk & (_UINT32_(value) << ADC_SAR_CFG_SAZ_AU_ZERO_Pos)) /* Assigment of value for SAZ_AU_ZERO in the ADC_SAR_CFG register */
#define ADC_SAR_CFG_LAZ_AU_ZERO_Pos           _UINT32_(5)                                          /* (ADC_SAR_CFG) Enable L_AZ AUTOZEROING.\n    1= Disable L_AZ autozeroing.\n    0= Enable L_AZ autozeroing.\n Position */
#define ADC_SAR_CFG_LAZ_AU_ZERO_Msk           (_UINT32_(0x1) << ADC_SAR_CFG_LAZ_AU_ZERO_Pos)       /* (ADC_SAR_CFG) Enable L_AZ AUTOZEROING.\n    1= Disable L_AZ autozeroing.\n    0= Enable L_AZ autozeroing.\n Mask */
#define ADC_SAR_CFG_LAZ_AU_ZERO(value)        (ADC_SAR_CFG_LAZ_AU_ZERO_Msk & (_UINT32_(value) << ADC_SAR_CFG_LAZ_AU_ZERO_Pos)) /* Assigment of value for LAZ_AU_ZERO in the ADC_SAR_CFG register */
#define ADC_SAR_CFG_EN_RADC_Pos               _UINT32_(6)                                          /* (ADC_SAR_CFG) Enable RADC.\n    1 = RDAC remains high during power cycling.\n    0 = Controls RDAC during power cycling.\n Position */
#define ADC_SAR_CFG_EN_RADC_Msk               (_UINT32_(0x1) << ADC_SAR_CFG_EN_RADC_Pos)           /* (ADC_SAR_CFG) Enable RADC.\n    1 = RDAC remains high during power cycling.\n    0 = Controls RDAC during power cycling.\n Mask */
#define ADC_SAR_CFG_EN_RADC(value)            (ADC_SAR_CFG_EN_RADC_Msk & (_UINT32_(value) << ADC_SAR_CFG_EN_RADC_Pos)) /* Assigment of value for EN_RADC in the ADC_SAR_CFG register */
#define ADC_SAR_CFG_REGEN_DLY_Pos             _UINT32_(9)                                          /* (ADC_SAR_CFG) This register defines the delay between regen and latch.\n Position */
#define ADC_SAR_CFG_REGEN_DLY_Msk             (_UINT32_(0x3) << ADC_SAR_CFG_REGEN_DLY_Pos)         /* (ADC_SAR_CFG) This register defines the delay between regen and latch.\n Mask */
#define ADC_SAR_CFG_REGEN_DLY(value)          (ADC_SAR_CFG_REGEN_DLY_Msk & (_UINT32_(value) << ADC_SAR_CFG_REGEN_DLY_Pos)) /* Assigment of value for REGEN_DLY in the ADC_SAR_CFG register */
#define ADC_SAR_CFG_CLK_DIV_Pos               _UINT32_(11)                                         /* (ADC_SAR_CFG) This register defines the programmable ADC Clock divider value.         Divider ratios of 256,128,64,32,16 are supported.\n Position */
#define ADC_SAR_CFG_CLK_DIV_Msk               (_UINT32_(0x1F) << ADC_SAR_CFG_CLK_DIV_Pos)          /* (ADC_SAR_CFG) This register defines the programmable ADC Clock divider value.         Divider ratios of 256,128,64,32,16 are supported.\n Mask */
#define ADC_SAR_CFG_CLK_DIV(value)            (ADC_SAR_CFG_CLK_DIV_Msk & (_UINT32_(value) << ADC_SAR_CFG_CLK_DIV_Pos)) /* Assigment of value for CLK_DIV in the ADC_SAR_CFG register */
#define ADC_SAR_CFG_IADC_RANGE2_Pos           _UINT32_(20)                                         /* (ADC_SAR_CFG) This register controls the current consumption for the whole ADC.\n Position */
#define ADC_SAR_CFG_IADC_RANGE2_Msk           (_UINT32_(0x3) << ADC_SAR_CFG_IADC_RANGE2_Pos)       /* (ADC_SAR_CFG) This register controls the current consumption for the whole ADC.\n Mask */
#define ADC_SAR_CFG_IADC_RANGE2(value)        (ADC_SAR_CFG_IADC_RANGE2_Msk & (_UINT32_(value) << ADC_SAR_CFG_IADC_RANGE2_Pos)) /* Assigment of value for IADC_RANGE2 in the ADC_SAR_CFG register */
#define ADC_SAR_CFG_IADC_RANGE1_Pos           _UINT32_(22)                                         /* (ADC_SAR_CFG) This register controls the current consumption for the whole ADC.\n Position */
#define ADC_SAR_CFG_IADC_RANGE1_Msk           (_UINT32_(0x3) << ADC_SAR_CFG_IADC_RANGE1_Pos)       /* (ADC_SAR_CFG) This register controls the current consumption for the whole ADC.\n Mask */
#define ADC_SAR_CFG_IADC_RANGE1(value)        (ADC_SAR_CFG_IADC_RANGE1_Msk & (_UINT32_(value) << ADC_SAR_CFG_IADC_RANGE1_Pos)) /* Assigment of value for IADC_RANGE1 in the ADC_SAR_CFG register */
#define ADC_SAR_CFG_ICMBF_STG1_Pos            _UINT32_(24)                                         /* (ADC_SAR_CFG) This register controls the bias current for the 1st stage of the comparator.\n Position */
#define ADC_SAR_CFG_ICMBF_STG1_Msk            (_UINT32_(0x3) << ADC_SAR_CFG_ICMBF_STG1_Pos)        /* (ADC_SAR_CFG) This register controls the bias current for the 1st stage of the comparator.\n Mask */
#define ADC_SAR_CFG_ICMBF_STG1(value)         (ADC_SAR_CFG_ICMBF_STG1_Msk & (_UINT32_(value) << ADC_SAR_CFG_ICMBF_STG1_Pos)) /* Assigment of value for ICMBF_STG1 in the ADC_SAR_CFG register */
#define ADC_SAR_CFG_ICMBF_STG2_Pos            _UINT32_(26)                                         /* (ADC_SAR_CFG) This register controls the bias current for the 2nd stage of the comparator.\n Position */
#define ADC_SAR_CFG_ICMBF_STG2_Msk            (_UINT32_(0x3) << ADC_SAR_CFG_ICMBF_STG2_Pos)        /* (ADC_SAR_CFG) This register controls the bias current for the 2nd stage of the comparator.\n Mask */
#define ADC_SAR_CFG_ICMBF_STG2(value)         (ADC_SAR_CFG_ICMBF_STG2_Msk & (_UINT32_(value) << ADC_SAR_CFG_ICMBF_STG2_Pos)) /* Assigment of value for ICMBF_STG2 in the ADC_SAR_CFG register */
#define ADC_SAR_CFG_ICMBF_Pos                 _UINT32_(28)                                         /* (ADC_SAR_CFG) This register controls the bias current for common mode buffer amplifier.\n Position */
#define ADC_SAR_CFG_ICMBF_Msk                 (_UINT32_(0x3) << ADC_SAR_CFG_ICMBF_Pos)             /* (ADC_SAR_CFG) This register controls the bias current for common mode buffer amplifier.\n Mask */
#define ADC_SAR_CFG_ICMBF(value)              (ADC_SAR_CFG_ICMBF_Msk & (_UINT32_(value) << ADC_SAR_CFG_ICMBF_Pos)) /* Assigment of value for ICMBF in the ADC_SAR_CFG register */
#define ADC_SAR_CFG_EN_EXT_BIAS_Pos           _UINT32_(31)                                         /* (ADC_SAR_CFG) EN external bias.\n    1 = Disables internal switched cap bias circuit.\n    0 = Enables internal switched cap bias circuit.\n Position */
#define ADC_SAR_CFG_EN_EXT_BIAS_Msk           (_UINT32_(0x1) << ADC_SAR_CFG_EN_EXT_BIAS_Pos)       /* (ADC_SAR_CFG) EN external bias.\n    1 = Disables internal switched cap bias circuit.\n    0 = Enables internal switched cap bias circuit.\n Mask */
#define ADC_SAR_CFG_EN_EXT_BIAS(value)        (ADC_SAR_CFG_EN_EXT_BIAS_Msk & (_UINT32_(value) << ADC_SAR_CFG_EN_EXT_BIAS_Pos)) /* Assigment of value for EN_EXT_BIAS in the ADC_SAR_CFG register */
#define ADC_SAR_CFG_Msk                       _UINT32_(0xBFF0FE7F)                                 /* (ADC_SAR_CFG) Register Mask  */


/** \brief ADC register offsets definitions */
#define ADC_CTRL_REG_OFST              _UINT32_(0x00)      /* (ADC_CTRL) The ADC Control Register is used to control the behavior of the Analog to Digital Converter. Offset */
#define ADC_DELAY_REG_OFST             _UINT32_(0x04)      /* (ADC_DELAY) The ADC Delay register determines the delay from setting Start_Repeat in the ADC Control Register and the start of a conversion cycle. This register also controls the interval between conversion cycles in repeat mode. Offset */
#define ADC_CHAN_STS_REG_OFST          _UINT32_(0x08)      /* (ADC_CHAN_STS) The ADC Status Register indicates whether the ADC has completed a conversion cycle. All bits are cleared by being written with a 1. \n            0: conversion of the corresponding ADC channel is not complete\n            1: conversion of the corresponding ADC channel is complete Offset */
#define ADC_SNG_EN_REG_OFST            _UINT32_(0x0C)      /* (ADC_SNG_EN) The ADC Single Register is used to control which ADC channel is captured during a Single-Sample conversion cycle initiated by the Start_Single bit in the ADC Control Register. \n            APPLICATION NOTE: Do not change the bits in this register in the middle of a conversion cycle to insure proper operation.\n            0: single cycle conversions for this channel are disabled\n            1: single cycle conversions for this channel are enabled Offset */
#define ADC_REPT_EN_REG_OFST           _UINT32_(0x10)      /* (ADC_REPT_EN) The ADC Repeat Register is used to control which ADC channels are captured during a repeat conversion cycle initiated by the Start_Repeat bit in the ADC Control Register. Offset */
#define ADC_CHAN_RD_REG_OFST           _UINT32_(0x14)      /* (ADC_CHAN_RD) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD0_REG_OFST          _UINT32_(0x14)      /* (ADC_CHAN_RD0) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD1_REG_OFST          _UINT32_(0x18)      /* (ADC_CHAN_RD1) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD2_REG_OFST          _UINT32_(0x1C)      /* (ADC_CHAN_RD2) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD3_REG_OFST          _UINT32_(0x20)      /* (ADC_CHAN_RD3) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD4_REG_OFST          _UINT32_(0x24)      /* (ADC_CHAN_RD4) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD5_REG_OFST          _UINT32_(0x28)      /* (ADC_CHAN_RD5) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD6_REG_OFST          _UINT32_(0x2C)      /* (ADC_CHAN_RD6) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD7_REG_OFST          _UINT32_(0x30)      /* (ADC_CHAN_RD7) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD8_REG_OFST          _UINT32_(0x34)      /* (ADC_CHAN_RD8) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD9_REG_OFST          _UINT32_(0x38)      /* (ADC_CHAN_RD9) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD10_REG_OFST         _UINT32_(0x3C)      /* (ADC_CHAN_RD10) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD11_REG_OFST         _UINT32_(0x40)      /* (ADC_CHAN_RD11) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD12_REG_OFST         _UINT32_(0x44)      /* (ADC_CHAN_RD12) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD13_REG_OFST         _UINT32_(0x48)      /* (ADC_CHAN_RD13) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD14_REG_OFST         _UINT32_(0x4C)      /* (ADC_CHAN_RD14) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD15_REG_OFST         _UINT32_(0x50)      /* (ADC_CHAN_RD15) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CFG_REG_OFST               _UINT32_(0x7C)      /* (ADC_CFG) The ADC Configuration Register is used to configure the ADC clock timing. Offset */
#define ADC_VREF_CHAN_REG_OFST         _UINT32_(0x80)      /* (ADC_VREF_CHAN) The ADC Channel Register is used to configure the reference voltage to the clock timing.\n Offset */
#define ADC_VREF_CTRL_REG_OFST         _UINT32_(0x84)      /* (ADC_VREF_CTRL) This is the VREF Control Register Offset */
#define ADC_SAR_CTRL_REG_OFST          _UINT32_(0x88)      /* (ADC_SAR_CTRL) This is the SAR ADC Control Register.\n Offset */
#define ADC_SAR_CFG_REG_OFST           _UINT32_(0x8C)      /* (ADC_SAR_CFG) This is the SAR ADC Configuration Register.\n Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief ADC register API structure */
typedef struct
{  /* This0block is designed to convert external analog voltage readings into digital values. */
  __IO  uint32_t                       ADC_CTRL;           /**< Offset: 0x00 (R/W  32) The ADC Control Register is used to control the behavior of the Analog to Digital Converter. */
  __IO  uint32_t                       ADC_DELAY;          /**< Offset: 0x04 (R/W  32) The ADC Delay register determines the delay from setting Start_Repeat in the ADC Control Register and the start of a conversion cycle. This register also controls the interval between conversion cycles in repeat mode. */
  __IO  uint32_t                       ADC_CHAN_STS;       /**< Offset: 0x08 (R/W  32) The ADC Status Register indicates whether the ADC has completed a conversion cycle. All bits are cleared by being written with a 1. \n            0: conversion of the corresponding ADC channel is not complete\n            1: conversion of the corresponding ADC channel is complete */
  __IO  uint32_t                       ADC_SNG_EN;         /**< Offset: 0x0C (R/W  32) The ADC Single Register is used to control which ADC channel is captured during a Single-Sample conversion cycle initiated by the Start_Single bit in the ADC Control Register. \n            APPLICATION NOTE: Do not change the bits in this register in the middle of a conversion cycle to insure proper operation.\n            0: single cycle conversions for this channel are disabled\n            1: single cycle conversions for this channel are enabled */
  __IO  uint32_t                       ADC_REPT_EN;        /**< Offset: 0x10 (R/W  32) The ADC Repeat Register is used to control which ADC channels are captured during a repeat conversion cycle initiated by the Start_Repeat bit in the ADC Control Register. */
  __IO  uint32_t                       ADC_CHAN_RD[16];    /**< Offset: 0x14 (R/W  32) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. */
  __I   uint8_t                        Reserved1[0x28];
  __IO  uint32_t                       ADC_CFG;            /**< Offset: 0x7C (R/W  32) The ADC Configuration Register is used to configure the ADC clock timing. */
  __IO  uint32_t                       ADC_VREF_CHAN;      /**< Offset: 0x80 (R/W  32) The ADC Channel Register is used to configure the reference voltage to the clock timing.\n */
  __IO  uint32_t                       ADC_VREF_CTRL;      /**< Offset: 0x84 (R/W  32) This is the VREF Control Register */
  __IO  uint32_t                       ADC_SAR_CTRL;       /**< Offset: 0x88 (R/W  32) This is the SAR ADC Control Register.\n */
  __IO  uint32_t                       ADC_SAR_CFG;        /**< Offset: 0x8C (R/W  32) This is the SAR ADC Configuration Register.\n */
} adc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC1712H_S2_SX_ADC_COMPONENT_H_ */
