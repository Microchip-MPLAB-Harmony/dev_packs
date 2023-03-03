/*
 * Component description for ADC
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

/* file generated from device description version 2018-10-01T10:50:03Z */
#ifndef _CEC1702Q_ADC_COMPONENT_H_
#define _CEC1702Q_ADC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR ADC                                          */
/* ************************************************************************** */

/* -------- ADC_CTRL : (ADC Offset: 0x00) (R/W 32) The ADC Control Register is used to control the behavior of the Analog to Digital Converter. -------- */
#define ADC_CTRL_RESETVALUE                   _UINT32_(0x00)                                       /*  (ADC_CTRL) The ADC Control Register is used to control the behavior of the Analog to Digital Converter.  Reset Value */

#define ADC_CTRL_ACT_Pos                      _UINT32_(0)                                          /* (ADC_CTRL) 0: The ADC is disabled and placed in its lowest power state. 1: ADC block is enabled for operation. Position */
#define ADC_CTRL_ACT_Msk                      (_UINT32_(0x1) << ADC_CTRL_ACT_Pos)                  /* (ADC_CTRL) 0: The ADC is disabled and placed in its lowest power state. 1: ADC block is enabled for operation. Mask */
#define ADC_CTRL_ACT(value)                   (ADC_CTRL_ACT_Msk & (_UINT32_(value) << ADC_CTRL_ACT_Pos)) /* Assigment of value for ACT in the ADC_CTRL register */
#define ADC_CTRL_STRT_SIN_Pos                 _UINT32_(1)                                          /* (ADC_CTRL) (STRT_SIN) 0: The ADC Single Mode is disabled. 1: The ADC Single Mode is enabled. Note: This bit is self-clearing Position */
#define ADC_CTRL_STRT_SIN_Msk                 (_UINT32_(0x1) << ADC_CTRL_STRT_SIN_Pos)             /* (ADC_CTRL) (STRT_SIN) 0: The ADC Single Mode is disabled. 1: The ADC Single Mode is enabled. Note: This bit is self-clearing Mask */
#define ADC_CTRL_STRT_SIN(value)              (ADC_CTRL_STRT_SIN_Msk & (_UINT32_(value) << ADC_CTRL_STRT_SIN_Pos)) /* Assigment of value for STRT_SIN in the ADC_CTRL register */
#define ADC_CTRL_STRT_RPT_Pos                 _UINT32_(2)                                          /* (ADC_CTRL) 0: The ADC Repeat Mode is disabled. 1: The ADC Repeat Mode is enabled. Position */
#define ADC_CTRL_STRT_RPT_Msk                 (_UINT32_(0x1) << ADC_CTRL_STRT_RPT_Pos)             /* (ADC_CTRL) 0: The ADC Repeat Mode is disabled. 1: The ADC Repeat Mode is enabled. Mask */
#define ADC_CTRL_STRT_RPT(value)              (ADC_CTRL_STRT_RPT_Msk & (_UINT32_(value) << ADC_CTRL_STRT_RPT_Pos)) /* Assigment of value for STRT_RPT in the ADC_CTRL register */
#define ADC_CTRL_PWR_SAV_DIS_Pos              _UINT32_(3)                                          /* (ADC_CTRL) 0: Power saving feature is enabled. 1: Power saving feature is disabled. Position */
#define ADC_CTRL_PWR_SAV_DIS_Msk              (_UINT32_(0x1) << ADC_CTRL_PWR_SAV_DIS_Pos)          /* (ADC_CTRL) 0: Power saving feature is enabled. 1: Power saving feature is disabled. Mask */
#define ADC_CTRL_PWR_SAV_DIS(value)           (ADC_CTRL_PWR_SAV_DIS_Msk & (_UINT32_(value) << ADC_CTRL_PWR_SAV_DIS_Pos)) /* Assigment of value for PWR_SAV_DIS in the ADC_CTRL register */
#define ADC_CTRL_SFT_RST_Pos                  _UINT32_(4)                                          /* (ADC_CTRL) (SFT_RST) 1: writing one causes a reset of the ADC block hardware (not the registers) 0: writing zero takes the ADC block out of reset Position */
#define ADC_CTRL_SFT_RST_Msk                  (_UINT32_(0x1) << ADC_CTRL_SFT_RST_Pos)              /* (ADC_CTRL) (SFT_RST) 1: writing one causes a reset of the ADC block hardware (not the registers) 0: writing zero takes the ADC block out of reset Mask */
#define ADC_CTRL_SFT_RST(value)               (ADC_CTRL_SFT_RST_Msk & (_UINT32_(value) << ADC_CTRL_SFT_RST_Pos)) /* Assigment of value for SFT_RST in the ADC_CTRL register */
#define ADC_CTRL_RPT_DONE_STS_Pos             _UINT32_(6)                                          /* (ADC_CTRL) 0: ADC repeat-sample conversion is not complete. 1: ADC repeat-sample conversion is completed. (R/WC) Position */
#define ADC_CTRL_RPT_DONE_STS_Msk             (_UINT32_(0x1) << ADC_CTRL_RPT_DONE_STS_Pos)         /* (ADC_CTRL) 0: ADC repeat-sample conversion is not complete. 1: ADC repeat-sample conversion is completed. (R/WC) Mask */
#define ADC_CTRL_RPT_DONE_STS(value)          (ADC_CTRL_RPT_DONE_STS_Msk & (_UINT32_(value) << ADC_CTRL_RPT_DONE_STS_Pos)) /* Assigment of value for RPT_DONE_STS in the ADC_CTRL register */
#define ADC_CTRL_SIN_DONE_STS_Pos             _UINT32_(7)                                          /* (ADC_CTRL) 0: ADC single-sample conversion is not complete. 1: ADC single-sample conversion is completed. (R/WC) Position */
#define ADC_CTRL_SIN_DONE_STS_Msk             (_UINT32_(0x1) << ADC_CTRL_SIN_DONE_STS_Pos)         /* (ADC_CTRL) 0: ADC single-sample conversion is not complete. 1: ADC single-sample conversion is completed. (R/WC) Mask */
#define ADC_CTRL_SIN_DONE_STS(value)          (ADC_CTRL_SIN_DONE_STS_Msk & (_UINT32_(value) << ADC_CTRL_SIN_DONE_STS_Pos)) /* Assigment of value for SIN_DONE_STS in the ADC_CTRL register */
#define ADC_CTRL_Msk                          _UINT32_(0x000000DF)                                 /* (ADC_CTRL) Register Mask  */


/* -------- ADC_DELAY : (ADC Offset: 0x04) (R/W 32) The ADC Delay register determines the delay from setting Start_Repeat in the \n       ADC Control Register and the start of a conversion cycle. This register also controls the interval between conversion cycles in repeat mode. -------- */
#define ADC_DELAY_RESETVALUE                  _UINT32_(0x00)                                       /*  (ADC_DELAY) The ADC Delay register determines the delay from setting Start_Repeat in the \n       ADC Control Register and the start of a conversion cycle. This register also controls the interval between conversion cycles in repeat mode.  Reset Value */

#define ADC_DELAY_STRT_DLY_Pos                _UINT32_(0)                                          /* (ADC_DELAY) This field determines the starting delay before a conversion cycle is begun when Start_Repeat is written with a 1. Position */
#define ADC_DELAY_STRT_DLY_Msk                (_UINT32_(0xFFFF) << ADC_DELAY_STRT_DLY_Pos)         /* (ADC_DELAY) This field determines the starting delay before a conversion cycle is begun when Start_Repeat is written with a 1. Mask */
#define ADC_DELAY_STRT_DLY(value)             (ADC_DELAY_STRT_DLY_Msk & (_UINT32_(value) << ADC_DELAY_STRT_DLY_Pos)) /* Assigment of value for STRT_DLY in the ADC_DELAY register */
#define ADC_DELAY_RPT_DLY_Pos                 _UINT32_(16)                                         /* (ADC_DELAY) This field determines the interval between conversion cycles when Start_Repeat is 1. Position */
#define ADC_DELAY_RPT_DLY_Msk                 (_UINT32_(0xFFFF) << ADC_DELAY_RPT_DLY_Pos)          /* (ADC_DELAY) This field determines the interval between conversion cycles when Start_Repeat is 1. Mask */
#define ADC_DELAY_RPT_DLY(value)              (ADC_DELAY_RPT_DLY_Msk & (_UINT32_(value) << ADC_DELAY_RPT_DLY_Pos)) /* Assigment of value for RPT_DLY in the ADC_DELAY register */
#define ADC_DELAY_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (ADC_DELAY) Register Mask  */


/* -------- ADC_CHAN_STS : (ADC Offset: 0x08) (R/W 32) The ADC Status Register indicates whether the ADC has completed a conversion cycle.\n       All bits are cleared by being written with a 1. \n             0: conversion of the corresponding ADC channel is not complete\n        1: conversion of the corresponding ADC channel is complete -------- */
#define ADC_CHAN_STS_RESETVALUE               _UINT32_(0x00)                                       /*  (ADC_CHAN_STS) The ADC Status Register indicates whether the ADC has completed a conversion cycle.\n       All bits are cleared by being written with a 1. \n             0: conversion of the corresponding ADC channel is not complete\n        1: conversion of the corresponding ADC channel is complete  Reset Value */

#define ADC_CHAN_STS_STS_Pos                  _UINT32_(0)                                          /* (ADC_CHAN_STS) All bits are cleared by being written with a '1'. 1=conversion of the corresponding ADC channel is complete;\n          0=conversion of the corresponding ADC channel is not complete. For enabled single cycles, the SINGLE_DONE_STATUS bit in the\n              ADC Control Register is also set after all enabled channel conversion are done; for enabled repeat cycles, the REPEAT_DONE_STATUS\n          in the ADC Control Register is also set after all enabled channel conversion are done. Position */
#define ADC_CHAN_STS_STS_Msk                  (_UINT32_(0xFFFF) << ADC_CHAN_STS_STS_Pos)           /* (ADC_CHAN_STS) All bits are cleared by being written with a '1'. 1=conversion of the corresponding ADC channel is complete;\n          0=conversion of the corresponding ADC channel is not complete. For enabled single cycles, the SINGLE_DONE_STATUS bit in the\n              ADC Control Register is also set after all enabled channel conversion are done; for enabled repeat cycles, the REPEAT_DONE_STATUS\n          in the ADC Control Register is also set after all enabled channel conversion are done. Mask */
#define ADC_CHAN_STS_STS(value)               (ADC_CHAN_STS_STS_Msk & (_UINT32_(value) << ADC_CHAN_STS_STS_Pos)) /* Assigment of value for STS in the ADC_CHAN_STS register */
#define ADC_CHAN_STS_Msk                      _UINT32_(0x0000FFFF)                                 /* (ADC_CHAN_STS) Register Mask  */


/* -------- ADC_SNG_EN : (ADC Offset: 0x0C) (R/W 32) The ADC Single Register is used to control which ADC channel \n       is captured during a Single-Sample conversion cycle initiated by the Start_Single bit in the ADC Control Register. \n           APPLICATION NOTE: Do not change the bits in this register in the middle of a conversion cycle to insure proper operation.\n           0: single cycle conversions for this channel are disabled\n          1: single cycle conversions for this channel are enabled -------- */
#define ADC_SNG_EN_RESETVALUE                 _UINT32_(0x00)                                       /*  (ADC_SNG_EN) The ADC Single Register is used to control which ADC channel \n       is captured during a Single-Sample conversion cycle initiated by the Start_Single bit in the ADC Control Register. \n           APPLICATION NOTE: Do not change the bits in this register in the middle of a conversion cycle to insure proper operation.\n           0: single cycle conversions for this channel are disabled\n          1: single cycle conversions for this channel are enabled  Reset Value */

#define ADC_SNG_EN_S_EN_Pos                   _UINT32_(0)                                          /* (ADC_SNG_EN) Each bit in this field enables the corresponding ADC channel when a single cycle of conversions is started when the\n            START_SINGLE bit in the ADC Control Register is written with a 1. 1=single cycle conversions for this channel are enabled\n               0=single cycle conversions for this channel are disabled. Note: If this register is changed while a conversion. Position */
#define ADC_SNG_EN_S_EN_Msk                   (_UINT32_(0xFFFF) << ADC_SNG_EN_S_EN_Pos)            /* (ADC_SNG_EN) Each bit in this field enables the corresponding ADC channel when a single cycle of conversions is started when the\n            START_SINGLE bit in the ADC Control Register is written with a 1. 1=single cycle conversions for this channel are enabled\n               0=single cycle conversions for this channel are disabled. Note: If this register is changed while a conversion. Mask */
#define ADC_SNG_EN_S_EN(value)                (ADC_SNG_EN_S_EN_Msk & (_UINT32_(value) << ADC_SNG_EN_S_EN_Pos)) /* Assigment of value for S_EN in the ADC_SNG_EN register */
#define ADC_SNG_EN_Msk                        _UINT32_(0x0000FFFF)                                 /* (ADC_SNG_EN) Register Mask  */


/* -------- ADC_REPT_EN : (ADC Offset: 0x10) (R/W 32) The ADC Repeat Register is used to control which ADC channels \n       are captured during a repeat conversion cycle initiated by the Start_Repeat bit in the ADC Control Register. -------- */
#define ADC_REPT_EN_RESETVALUE                _UINT32_(0x00)                                       /*  (ADC_REPT_EN) The ADC Repeat Register is used to control which ADC channels \n       are captured during a repeat conversion cycle initiated by the Start_Repeat bit in the ADC Control Register.  Reset Value */

#define ADC_REPT_EN_R_EN_Pos                  _UINT32_(0)                                          /* (ADC_REPT_EN) Each bit in this field enables the corresponding ADC channel for each pass of the Repeated ADC Conversion that is\n         controlled by bit START_REPEAT in the ADC Control Register. 1=repeat conversions for this channel are enabled;\n               0=repeat conversions for this channel are disabled Position */
#define ADC_REPT_EN_R_EN_Msk                  (_UINT32_(0xFFFF) << ADC_REPT_EN_R_EN_Pos)           /* (ADC_REPT_EN) Each bit in this field enables the corresponding ADC channel for each pass of the Repeated ADC Conversion that is\n         controlled by bit START_REPEAT in the ADC Control Register. 1=repeat conversions for this channel are enabled;\n               0=repeat conversions for this channel are disabled Mask */
#define ADC_REPT_EN_R_EN(value)               (ADC_REPT_EN_R_EN_Msk & (_UINT32_(value) << ADC_REPT_EN_R_EN_Pos)) /* Assigment of value for R_EN in the ADC_REPT_EN register */
#define ADC_REPT_EN_Msk                       _UINT32_(0x0000FFFF)                                 /* (ADC_REPT_EN) Register Mask  */


/* -------- ADC_CHAN_RD : (ADC Offset: 0x14) (R/W 32) All 16 ADC channels return their results into \n       a 32-bit reading register. In each case the low 10 bits of the reading register\n       return the result of the Analog to Digital conversion and the upper 22 bits return 0. -------- */
#define ADC_CHAN_RD_RESETVALUE                _UINT32_(0x00)                                       /*  (ADC_CHAN_RD) All 16 ADC channels return their results into \n       a 32-bit reading register. In each case the low 10 bits of the reading register\n       return the result of the Analog to Digital conversion and the upper 22 bits return 0.  Reset Value */

#define ADC_CHAN_RD_Msk                       _UINT32_(0x00000000)                                 /* (ADC_CHAN_RD) Register Mask  */


/** \brief ADC register offsets definitions */
#define ADC_CTRL_REG_OFST              _UINT32_(0x00)      /* (ADC_CTRL) The ADC Control Register is used to control the behavior of the Analog to Digital Converter. Offset */
#define ADC_DELAY_REG_OFST             _UINT32_(0x04)      /* (ADC_DELAY) The ADC Delay register determines the delay from setting Start_Repeat in the \n       ADC Control Register and the start of a conversion cycle. This register also controls the interval between conversion cycles in repeat mode. Offset */
#define ADC_CHAN_STS_REG_OFST          _UINT32_(0x08)      /* (ADC_CHAN_STS) The ADC Status Register indicates whether the ADC has completed a conversion cycle.\n       All bits are cleared by being written with a 1. \n             0: conversion of the corresponding ADC channel is not complete\n        1: conversion of the corresponding ADC channel is complete Offset */
#define ADC_SNG_EN_REG_OFST            _UINT32_(0x0C)      /* (ADC_SNG_EN) The ADC Single Register is used to control which ADC channel \n       is captured during a Single-Sample conversion cycle initiated by the Start_Single bit in the ADC Control Register. \n           APPLICATION NOTE: Do not change the bits in this register in the middle of a conversion cycle to insure proper operation.\n           0: single cycle conversions for this channel are disabled\n          1: single cycle conversions for this channel are enabled Offset */
#define ADC_REPT_EN_REG_OFST           _UINT32_(0x10)      /* (ADC_REPT_EN) The ADC Repeat Register is used to control which ADC channels \n       are captured during a repeat conversion cycle initiated by the Start_Repeat bit in the ADC Control Register. Offset */
#define ADC_CHAN_RD_REG_OFST           _UINT32_(0x14)      /* (ADC_CHAN_RD) All 16 ADC channels return their results into \n       a 32-bit reading register. In each case the low 10 bits of the reading register\n       return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD0_REG_OFST          _UINT32_(0x14)      /* (ADC_CHAN_RD0) All 16 ADC channels return their results into \n       a 32-bit reading register. In each case the low 10 bits of the reading register\n       return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD1_REG_OFST          _UINT32_(0x18)      /* (ADC_CHAN_RD1) All 16 ADC channels return their results into \n       a 32-bit reading register. In each case the low 10 bits of the reading register\n       return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD2_REG_OFST          _UINT32_(0x1C)      /* (ADC_CHAN_RD2) All 16 ADC channels return their results into \n       a 32-bit reading register. In each case the low 10 bits of the reading register\n       return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD3_REG_OFST          _UINT32_(0x20)      /* (ADC_CHAN_RD3) All 16 ADC channels return their results into \n       a 32-bit reading register. In each case the low 10 bits of the reading register\n       return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD4_REG_OFST          _UINT32_(0x24)      /* (ADC_CHAN_RD4) All 16 ADC channels return their results into \n       a 32-bit reading register. In each case the low 10 bits of the reading register\n       return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD5_REG_OFST          _UINT32_(0x28)      /* (ADC_CHAN_RD5) All 16 ADC channels return their results into \n       a 32-bit reading register. In each case the low 10 bits of the reading register\n       return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD6_REG_OFST          _UINT32_(0x2C)      /* (ADC_CHAN_RD6) All 16 ADC channels return their results into \n       a 32-bit reading register. In each case the low 10 bits of the reading register\n       return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD7_REG_OFST          _UINT32_(0x30)      /* (ADC_CHAN_RD7) All 16 ADC channels return their results into \n       a 32-bit reading register. In each case the low 10 bits of the reading register\n       return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD8_REG_OFST          _UINT32_(0x34)      /* (ADC_CHAN_RD8) All 16 ADC channels return their results into \n       a 32-bit reading register. In each case the low 10 bits of the reading register\n       return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD9_REG_OFST          _UINT32_(0x38)      /* (ADC_CHAN_RD9) All 16 ADC channels return their results into \n       a 32-bit reading register. In each case the low 10 bits of the reading register\n       return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD10_REG_OFST         _UINT32_(0x3C)      /* (ADC_CHAN_RD10) All 16 ADC channels return their results into \n       a 32-bit reading register. In each case the low 10 bits of the reading register\n       return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD11_REG_OFST         _UINT32_(0x40)      /* (ADC_CHAN_RD11) All 16 ADC channels return their results into \n       a 32-bit reading register. In each case the low 10 bits of the reading register\n       return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD12_REG_OFST         _UINT32_(0x44)      /* (ADC_CHAN_RD12) All 16 ADC channels return their results into \n       a 32-bit reading register. In each case the low 10 bits of the reading register\n       return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD13_REG_OFST         _UINT32_(0x48)      /* (ADC_CHAN_RD13) All 16 ADC channels return their results into \n       a 32-bit reading register. In each case the low 10 bits of the reading register\n       return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD14_REG_OFST         _UINT32_(0x4C)      /* (ADC_CHAN_RD14) All 16 ADC channels return their results into \n       a 32-bit reading register. In each case the low 10 bits of the reading register\n       return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CHAN_RD15_REG_OFST         _UINT32_(0x50)      /* (ADC_CHAN_RD15) All 16 ADC channels return their results into \n       a 32-bit reading register. In each case the low 10 bits of the reading register\n       return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief ADC register API structure */
typedef struct
{  /* This block is designed to convert external analog voltage readings into digital values. */
  __IO  uint32_t                       ADC_CTRL;           /**< Offset: 0x00 (R/W  32) The ADC Control Register is used to control the behavior of the Analog to Digital Converter. */
  __IO  uint32_t                       ADC_DELAY;          /**< Offset: 0x04 (R/W  32) The ADC Delay register determines the delay from setting Start_Repeat in the \n       ADC Control Register and the start of a conversion cycle. This register also controls the interval between conversion cycles in repeat mode. */
  __IO  uint32_t                       ADC_CHAN_STS;       /**< Offset: 0x08 (R/W  32) The ADC Status Register indicates whether the ADC has completed a conversion cycle.\n       All bits are cleared by being written with a 1. \n             0: conversion of the corresponding ADC channel is not complete\n        1: conversion of the corresponding ADC channel is complete */
  __IO  uint32_t                       ADC_SNG_EN;         /**< Offset: 0x0C (R/W  32) The ADC Single Register is used to control which ADC channel \n       is captured during a Single-Sample conversion cycle initiated by the Start_Single bit in the ADC Control Register. \n           APPLICATION NOTE: Do not change the bits in this register in the middle of a conversion cycle to insure proper operation.\n           0: single cycle conversions for this channel are disabled\n          1: single cycle conversions for this channel are enabled */
  __IO  uint32_t                       ADC_REPT_EN;        /**< Offset: 0x10 (R/W  32) The ADC Repeat Register is used to control which ADC channels \n       are captured during a repeat conversion cycle initiated by the Start_Repeat bit in the ADC Control Register. */
  __IO  uint32_t                       ADC_CHAN_RD[16];    /**< Offset: 0x14 (R/W  32) All 16 ADC channels return their results into \n       a 32-bit reading register. In each case the low 10 bits of the reading register\n       return the result of the Analog to Digital conversion and the upper 22 bits return 0. */
} adc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC1702Q_ADC_COMPONENT_H_ */
