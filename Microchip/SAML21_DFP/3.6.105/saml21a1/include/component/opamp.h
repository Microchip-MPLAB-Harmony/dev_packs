/*
 * Component description for OPAMP
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

/* file generated from device description version 2018-06-06T13:39:06Z */
#ifndef _SAML21_OPAMP_COMPONENT_H_
#define _SAML21_OPAMP_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR OPAMP                                        */
/* ************************************************************************** */

/* -------- OPAMP_CTRLA : (OPAMP Offset: 0x00) (R/W 8) Control A -------- */
#define OPAMP_CTRLA_RESETVALUE                _UINT8_(0x00)                                        /*  (OPAMP_CTRLA) Control A  Reset Value */

#define OPAMP_CTRLA_SWRST_Pos                 _UINT8_(0)                                           /* (OPAMP_CTRLA) Software Reset Position */
#define OPAMP_CTRLA_SWRST_Msk                 (_UINT8_(0x1) << OPAMP_CTRLA_SWRST_Pos)              /* (OPAMP_CTRLA) Software Reset Mask */
#define OPAMP_CTRLA_SWRST(value)              (OPAMP_CTRLA_SWRST_Msk & (_UINT8_(value) << OPAMP_CTRLA_SWRST_Pos)) /* Assigment of value for SWRST in the OPAMP_CTRLA register */
#define OPAMP_CTRLA_ENABLE_Pos                _UINT8_(1)                                           /* (OPAMP_CTRLA) Enable Position */
#define OPAMP_CTRLA_ENABLE_Msk                (_UINT8_(0x1) << OPAMP_CTRLA_ENABLE_Pos)             /* (OPAMP_CTRLA) Enable Mask */
#define OPAMP_CTRLA_ENABLE(value)             (OPAMP_CTRLA_ENABLE_Msk & (_UINT8_(value) << OPAMP_CTRLA_ENABLE_Pos)) /* Assigment of value for ENABLE in the OPAMP_CTRLA register */
#define OPAMP_CTRLA_LPMUX_Pos                 _UINT8_(7)                                           /* (OPAMP_CTRLA) Low-Power Mux Position */
#define OPAMP_CTRLA_LPMUX_Msk                 (_UINT8_(0x1) << OPAMP_CTRLA_LPMUX_Pos)              /* (OPAMP_CTRLA) Low-Power Mux Mask */
#define OPAMP_CTRLA_LPMUX(value)              (OPAMP_CTRLA_LPMUX_Msk & (_UINT8_(value) << OPAMP_CTRLA_LPMUX_Pos)) /* Assigment of value for LPMUX in the OPAMP_CTRLA register */
#define OPAMP_CTRLA_Msk                       _UINT8_(0x83)                                        /* (OPAMP_CTRLA) Register Mask  */


/* -------- OPAMP_STATUS : (OPAMP Offset: 0x02) ( R/ 8) Status -------- */
#define OPAMP_STATUS_RESETVALUE               _UINT8_(0x00)                                        /*  (OPAMP_STATUS) Status  Reset Value */

#define OPAMP_STATUS_READY0_Pos               _UINT8_(0)                                           /* (OPAMP_STATUS) OPAMP 0 Ready Position */
#define OPAMP_STATUS_READY0_Msk               (_UINT8_(0x1) << OPAMP_STATUS_READY0_Pos)            /* (OPAMP_STATUS) OPAMP 0 Ready Mask */
#define OPAMP_STATUS_READY0(value)            (OPAMP_STATUS_READY0_Msk & (_UINT8_(value) << OPAMP_STATUS_READY0_Pos)) /* Assigment of value for READY0 in the OPAMP_STATUS register */
#define OPAMP_STATUS_READY1_Pos               _UINT8_(1)                                           /* (OPAMP_STATUS) OPAMP 1 Ready Position */
#define OPAMP_STATUS_READY1_Msk               (_UINT8_(0x1) << OPAMP_STATUS_READY1_Pos)            /* (OPAMP_STATUS) OPAMP 1 Ready Mask */
#define OPAMP_STATUS_READY1(value)            (OPAMP_STATUS_READY1_Msk & (_UINT8_(value) << OPAMP_STATUS_READY1_Pos)) /* Assigment of value for READY1 in the OPAMP_STATUS register */
#define OPAMP_STATUS_READY2_Pos               _UINT8_(2)                                           /* (OPAMP_STATUS) OPAMP 2 Ready Position */
#define OPAMP_STATUS_READY2_Msk               (_UINT8_(0x1) << OPAMP_STATUS_READY2_Pos)            /* (OPAMP_STATUS) OPAMP 2 Ready Mask */
#define OPAMP_STATUS_READY2(value)            (OPAMP_STATUS_READY2_Msk & (_UINT8_(value) << OPAMP_STATUS_READY2_Pos)) /* Assigment of value for READY2 in the OPAMP_STATUS register */
#define OPAMP_STATUS_Msk                      _UINT8_(0x07)                                        /* (OPAMP_STATUS) Register Mask  */

#define OPAMP_STATUS_READY_Pos                _UINT8_(0)                                           /* (OPAMP_STATUS Position) OPAMP 2 Ready */
#define OPAMP_STATUS_READY_Msk                (_UINT8_(0x7) << OPAMP_STATUS_READY_Pos)             /* (OPAMP_STATUS Mask) READY */
#define OPAMP_STATUS_READY(value)             (OPAMP_STATUS_READY_Msk & (_UINT8_(value) << OPAMP_STATUS_READY_Pos)) 

/* -------- OPAMP_OPAMPCTRL : (OPAMP Offset: 0x04) (R/W 32) OPAMP Control n -------- */
#define OPAMP_OPAMPCTRL_RESETVALUE            _UINT32_(0x00)                                       /*  (OPAMP_OPAMPCTRL) OPAMP Control n  Reset Value */

#define OPAMP_OPAMPCTRL_ENABLE_Pos            _UINT32_(1)                                          /* (OPAMP_OPAMPCTRL) Operational Amplifier Enable Position */
#define OPAMP_OPAMPCTRL_ENABLE_Msk            (_UINT32_(0x1) << OPAMP_OPAMPCTRL_ENABLE_Pos)        /* (OPAMP_OPAMPCTRL) Operational Amplifier Enable Mask */
#define OPAMP_OPAMPCTRL_ENABLE(value)         (OPAMP_OPAMPCTRL_ENABLE_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL_ENABLE_Pos)) /* Assigment of value for ENABLE in the OPAMP_OPAMPCTRL register */
#define OPAMP_OPAMPCTRL_ANAOUT_Pos            _UINT32_(2)                                          /* (OPAMP_OPAMPCTRL) Analog Output Position */
#define OPAMP_OPAMPCTRL_ANAOUT_Msk            (_UINT32_(0x1) << OPAMP_OPAMPCTRL_ANAOUT_Pos)        /* (OPAMP_OPAMPCTRL) Analog Output Mask */
#define OPAMP_OPAMPCTRL_ANAOUT(value)         (OPAMP_OPAMPCTRL_ANAOUT_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL_ANAOUT_Pos)) /* Assigment of value for ANAOUT in the OPAMP_OPAMPCTRL register */
#define OPAMP_OPAMPCTRL_BIAS_Pos              _UINT32_(3)                                          /* (OPAMP_OPAMPCTRL) Bias Selection Position */
#define OPAMP_OPAMPCTRL_BIAS_Msk              (_UINT32_(0x3) << OPAMP_OPAMPCTRL_BIAS_Pos)          /* (OPAMP_OPAMPCTRL) Bias Selection Mask */
#define OPAMP_OPAMPCTRL_BIAS(value)           (OPAMP_OPAMPCTRL_BIAS_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL_BIAS_Pos)) /* Assigment of value for BIAS in the OPAMP_OPAMPCTRL register */
#define OPAMP_OPAMPCTRL_RUNSTDBY_Pos          _UINT32_(6)                                          /* (OPAMP_OPAMPCTRL) Run in Standby Position */
#define OPAMP_OPAMPCTRL_RUNSTDBY_Msk          (_UINT32_(0x1) << OPAMP_OPAMPCTRL_RUNSTDBY_Pos)      /* (OPAMP_OPAMPCTRL) Run in Standby Mask */
#define OPAMP_OPAMPCTRL_RUNSTDBY(value)       (OPAMP_OPAMPCTRL_RUNSTDBY_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL_RUNSTDBY_Pos)) /* Assigment of value for RUNSTDBY in the OPAMP_OPAMPCTRL register */
#define OPAMP_OPAMPCTRL_ONDEMAND_Pos          _UINT32_(7)                                          /* (OPAMP_OPAMPCTRL) On Demand Control Position */
#define OPAMP_OPAMPCTRL_ONDEMAND_Msk          (_UINT32_(0x1) << OPAMP_OPAMPCTRL_ONDEMAND_Pos)      /* (OPAMP_OPAMPCTRL) On Demand Control Mask */
#define OPAMP_OPAMPCTRL_ONDEMAND(value)       (OPAMP_OPAMPCTRL_ONDEMAND_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL_ONDEMAND_Pos)) /* Assigment of value for ONDEMAND in the OPAMP_OPAMPCTRL register */
#define OPAMP_OPAMPCTRL_RES2OUT_Pos           _UINT32_(8)                                          /* (OPAMP_OPAMPCTRL) Resistor ladder To Output Position */
#define OPAMP_OPAMPCTRL_RES2OUT_Msk           (_UINT32_(0x1) << OPAMP_OPAMPCTRL_RES2OUT_Pos)       /* (OPAMP_OPAMPCTRL) Resistor ladder To Output Mask */
#define OPAMP_OPAMPCTRL_RES2OUT(value)        (OPAMP_OPAMPCTRL_RES2OUT_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL_RES2OUT_Pos)) /* Assigment of value for RES2OUT in the OPAMP_OPAMPCTRL register */
#define OPAMP_OPAMPCTRL_RES2VCC_Pos           _UINT32_(9)                                          /* (OPAMP_OPAMPCTRL) Resistor ladder To VCC Position */
#define OPAMP_OPAMPCTRL_RES2VCC_Msk           (_UINT32_(0x1) << OPAMP_OPAMPCTRL_RES2VCC_Pos)       /* (OPAMP_OPAMPCTRL) Resistor ladder To VCC Mask */
#define OPAMP_OPAMPCTRL_RES2VCC(value)        (OPAMP_OPAMPCTRL_RES2VCC_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL_RES2VCC_Pos)) /* Assigment of value for RES2VCC in the OPAMP_OPAMPCTRL register */
#define OPAMP_OPAMPCTRL_RES1EN_Pos            _UINT32_(10)                                         /* (OPAMP_OPAMPCTRL) Resistor 1 Enable Position */
#define OPAMP_OPAMPCTRL_RES1EN_Msk            (_UINT32_(0x1) << OPAMP_OPAMPCTRL_RES1EN_Pos)        /* (OPAMP_OPAMPCTRL) Resistor 1 Enable Mask */
#define OPAMP_OPAMPCTRL_RES1EN(value)         (OPAMP_OPAMPCTRL_RES1EN_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL_RES1EN_Pos)) /* Assigment of value for RES1EN in the OPAMP_OPAMPCTRL register */
#define OPAMP_OPAMPCTRL_RES1MUX_Pos           _UINT32_(11)                                         /* (OPAMP_OPAMPCTRL) Resistor 1 Mux Position */
#define OPAMP_OPAMPCTRL_RES1MUX_Msk           (_UINT32_(0x3) << OPAMP_OPAMPCTRL_RES1MUX_Pos)       /* (OPAMP_OPAMPCTRL) Resistor 1 Mux Mask */
#define OPAMP_OPAMPCTRL_RES1MUX(value)        (OPAMP_OPAMPCTRL_RES1MUX_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL_RES1MUX_Pos)) /* Assigment of value for RES1MUX in the OPAMP_OPAMPCTRL register */
#define OPAMP_OPAMPCTRL_POTMUX_Pos            _UINT32_(13)                                         /* (OPAMP_OPAMPCTRL) Potentiometer Selection Position */
#define OPAMP_OPAMPCTRL_POTMUX_Msk            (_UINT32_(0x7) << OPAMP_OPAMPCTRL_POTMUX_Pos)        /* (OPAMP_OPAMPCTRL) Potentiometer Selection Mask */
#define OPAMP_OPAMPCTRL_POTMUX(value)         (OPAMP_OPAMPCTRL_POTMUX_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL_POTMUX_Pos)) /* Assigment of value for POTMUX in the OPAMP_OPAMPCTRL register */
#define OPAMP_OPAMPCTRL_MUXPOS_Pos            _UINT32_(16)                                         /* (OPAMP_OPAMPCTRL) Positive Input Mux Selection Position */
#define OPAMP_OPAMPCTRL_MUXPOS_Msk            (_UINT32_(0x7) << OPAMP_OPAMPCTRL_MUXPOS_Pos)        /* (OPAMP_OPAMPCTRL) Positive Input Mux Selection Mask */
#define OPAMP_OPAMPCTRL_MUXPOS(value)         (OPAMP_OPAMPCTRL_MUXPOS_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL_MUXPOS_Pos)) /* Assigment of value for MUXPOS in the OPAMP_OPAMPCTRL register */
#define OPAMP_OPAMPCTRL_MUXNEG_Pos            _UINT32_(20)                                         /* (OPAMP_OPAMPCTRL) Negative Input Mux Selection Position */
#define OPAMP_OPAMPCTRL_MUXNEG_Msk            (_UINT32_(0x7) << OPAMP_OPAMPCTRL_MUXNEG_Pos)        /* (OPAMP_OPAMPCTRL) Negative Input Mux Selection Mask */
#define OPAMP_OPAMPCTRL_MUXNEG(value)         (OPAMP_OPAMPCTRL_MUXNEG_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL_MUXNEG_Pos)) /* Assigment of value for MUXNEG in the OPAMP_OPAMPCTRL register */
#define OPAMP_OPAMPCTRL_Msk                   _UINT32_(0x0077FFDE)                                 /* (OPAMP_OPAMPCTRL) Register Mask  */


/** \brief OPAMP register offsets definitions */
#define OPAMP_CTRLA_REG_OFST           _UINT32_(0x00)      /* (OPAMP_CTRLA) Control A Offset */
#define OPAMP_STATUS_REG_OFST          _UINT32_(0x02)      /* (OPAMP_STATUS) Status Offset */
#define OPAMP_OPAMPCTRL_REG_OFST       _UINT32_(0x04)      /* (OPAMP_OPAMPCTRL) OPAMP Control n Offset */
#define OPAMP_OPAMPCTRL0_REG_OFST      _UINT32_(0x04)      /* (OPAMP_OPAMPCTRL0) OPAMP Control n Offset */
#define OPAMP_OPAMPCTRL1_REG_OFST      _UINT32_(0x08)      /* (OPAMP_OPAMPCTRL1) OPAMP Control n Offset */
#define OPAMP_OPAMPCTRL2_REG_OFST      _UINT32_(0x0C)      /* (OPAMP_OPAMPCTRL2) OPAMP Control n Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief OPAMP register API structure */
typedef struct
{  /* Operational Amplifier */
  __IO  uint8_t                        OPAMP_CTRLA;        /**< Offset: 0x00 (R/W  8) Control A */
  __I   uint8_t                        Reserved1[0x01];
  __I   uint8_t                        OPAMP_STATUS;       /**< Offset: 0x02 (R/   8) Status */
  __I   uint8_t                        Reserved2[0x01];
  __IO  uint32_t                       OPAMP_OPAMPCTRL[3]; /**< Offset: 0x04 (R/W  32) OPAMP Control n */
} opamp_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAML21_OPAMP_COMPONENT_H_ */
