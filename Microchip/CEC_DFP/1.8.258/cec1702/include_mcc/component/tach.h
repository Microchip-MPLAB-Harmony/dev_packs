/*
 * Component description for TACH
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
#ifndef _CEC1702Q_TACH_COMPONENT_H_
#define _CEC1702Q_TACH_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR TACH                                         */
/* ************************************************************************** */

/* -------- TACH_CTRL : (TACH Offset: 0x00) (R/W 32) TACHx Control Register -------- */
#define TACH_CTRL_RESETVALUE                  _UINT32_(0x00)                                       /*  (TACH_CTRL) TACHx Control Register  Reset Value */

#define TACH_CTRL_OUTOF_LIM_EN_Pos            _UINT32_(0)                                          /* (TACH_CTRL) OUTOF_LIM_EN  This bit is used to enable the TACH_OUT_OF_LIMIT_STATUS bit in the TACHx Status Register to generate an interrupt event.\n        1=Enable interrupt output from Tach block\n             0=Disable interrupt output from Tach block (default) Position */
#define TACH_CTRL_OUTOF_LIM_EN_Msk            (_UINT32_(0x1) << TACH_CTRL_OUTOF_LIM_EN_Pos)        /* (TACH_CTRL) OUTOF_LIM_EN  This bit is used to enable the TACH_OUT_OF_LIMIT_STATUS bit in the TACHx Status Register to generate an interrupt event.\n        1=Enable interrupt output from Tach block\n             0=Disable interrupt output from Tach block (default) Mask */
#define TACH_CTRL_OUTOF_LIM_EN(value)         (TACH_CTRL_OUTOF_LIM_EN_Msk & (_UINT32_(value) << TACH_CTRL_OUTOF_LIM_EN_Pos)) /* Assigment of value for OUTOF_LIM_EN in the TACH_CTRL register */
#define TACH_CTRL_EN_Pos                      _UINT32_(1)                                          /* (TACH_CTRL) EN  1= TACH Monitoring enabled, clocks enabled. 0= TACH Idle, clocks gated Position */
#define TACH_CTRL_EN_Msk                      (_UINT32_(0x1) << TACH_CTRL_EN_Pos)                  /* (TACH_CTRL) EN  1= TACH Monitoring enabled, clocks enabled. 0= TACH Idle, clocks gated Mask */
#define TACH_CTRL_EN(value)                   (TACH_CTRL_EN_Msk & (_UINT32_(value) << TACH_CTRL_EN_Pos)) /* Assigment of value for EN in the TACH_CTRL register */
#define TACH_CTRL_FILT_EN_Pos                 _UINT32_(8)                                          /* (TACH_CTRL) FILT_EN  This filter is used to remove high frequency glitches from Tach Input. When this filter is enabled, Tach input pulses less than two 100kHz_- Clk periods wide get filtered.\n         1= Filter enabled\n                0= Filter disabled (default)\n        It is recommended that the Tach input filter always be enabled. Position */
#define TACH_CTRL_FILT_EN_Msk                 (_UINT32_(0x1) << TACH_CTRL_FILT_EN_Pos)             /* (TACH_CTRL) FILT_EN  This filter is used to remove high frequency glitches from Tach Input. When this filter is enabled, Tach input pulses less than two 100kHz_- Clk periods wide get filtered.\n         1= Filter enabled\n                0= Filter disabled (default)\n        It is recommended that the Tach input filter always be enabled. Mask */
#define TACH_CTRL_FILT_EN(value)              (TACH_CTRL_FILT_EN_Msk & (_UINT32_(value) << TACH_CTRL_FILT_EN_Pos)) /* Assigment of value for FILT_EN in the TACH_CTRL register */
#define TACH_CTRL_RD_MOD_SEL_Pos              _UINT32_(10)                                         /* (TACH_CTRL) RD_MOD_SEL\n        1=Counter is incremented on the rising edge of the 100kHz_Clk input. The counter is latched into the TACHX_COUNTER field and reset when the programmed number of edges is detected.\n         0=Counter is incremented when Tach Input transitions from low-tohigh state (default) Position */
#define TACH_CTRL_RD_MOD_SEL_Msk              (_UINT32_(0x1) << TACH_CTRL_RD_MOD_SEL_Pos)          /* (TACH_CTRL) RD_MOD_SEL\n        1=Counter is incremented on the rising edge of the 100kHz_Clk input. The counter is latched into the TACHX_COUNTER field and reset when the programmed number of edges is detected.\n         0=Counter is incremented when Tach Input transitions from low-tohigh state (default) Mask */
#define TACH_CTRL_RD_MOD_SEL(value)           (TACH_CTRL_RD_MOD_SEL_Msk & (_UINT32_(value) << TACH_CTRL_RD_MOD_SEL_Pos)) /* Assigment of value for RD_MOD_SEL in the TACH_CTRL register */
#define TACH_CTRL_EDGES_Pos                   _UINT32_(11)                                         /* (TACH_CTRL) EDGES A Tach signal is a square wave with a 50% duty cycle. Typically, two Tach periods represents one revolution of the fan. A Tach period consists of three Tach edges.\n       This programmed value represents the number of Tach edges that will be used to determine the interval for which the number of 100kHz_Clk pulses will be counted\n        11b=9 Tach edges (4 Tach periods)\n              10b=5 Tach edges (2 Tach periods)\n                  01b=3 Tach edges (1 Tach period)\n                  00b=2 Tach edges (1/2 Tach period) Position */
#define TACH_CTRL_EDGES_Msk                   (_UINT32_(0x3) << TACH_CTRL_EDGES_Pos)               /* (TACH_CTRL) EDGES A Tach signal is a square wave with a 50% duty cycle. Typically, two Tach periods represents one revolution of the fan. A Tach period consists of three Tach edges.\n       This programmed value represents the number of Tach edges that will be used to determine the interval for which the number of 100kHz_Clk pulses will be counted\n        11b=9 Tach edges (4 Tach periods)\n              10b=5 Tach edges (2 Tach periods)\n                  01b=3 Tach edges (1 Tach period)\n                  00b=2 Tach edges (1/2 Tach period) Mask */
#define TACH_CTRL_EDGES(value)                (TACH_CTRL_EDGES_Msk & (_UINT32_(value) << TACH_CTRL_EDGES_Pos)) /* Assigment of value for EDGES in the TACH_CTRL register */
#define TACH_CTRL_CNT_RDY_INT_EN_Pos          _UINT32_(14)                                         /* (TACH_CTRL) CNT_RDY_INT_EN 1=Enable Count Ready interrupt from Tach block, 0=Disable Count Ready interrupt from Tach block Position */
#define TACH_CTRL_CNT_RDY_INT_EN_Msk          (_UINT32_(0x1) << TACH_CTRL_CNT_RDY_INT_EN_Pos)      /* (TACH_CTRL) CNT_RDY_INT_EN 1=Enable Count Ready interrupt from Tach block, 0=Disable Count Ready interrupt from Tach block Mask */
#define TACH_CTRL_CNT_RDY_INT_EN(value)       (TACH_CTRL_CNT_RDY_INT_EN_Msk & (_UINT32_(value) << TACH_CTRL_CNT_RDY_INT_EN_Pos)) /* Assigment of value for CNT_RDY_INT_EN in the TACH_CTRL register */
#define TACH_CTRL_IN_INT_EN_Pos               _UINT32_(15)                                         /* (TACH_CTRL) IN_INT_EN 1=Enable Tach Input toggle interrupt from Tach block, 0=Disable Tach Input toggle interrupt from Tach block Position */
#define TACH_CTRL_IN_INT_EN_Msk               (_UINT32_(0x1) << TACH_CTRL_IN_INT_EN_Pos)           /* (TACH_CTRL) IN_INT_EN 1=Enable Tach Input toggle interrupt from Tach block, 0=Disable Tach Input toggle interrupt from Tach block Mask */
#define TACH_CTRL_IN_INT_EN(value)            (TACH_CTRL_IN_INT_EN_Msk & (_UINT32_(value) << TACH_CTRL_IN_INT_EN_Pos)) /* Assigment of value for IN_INT_EN in the TACH_CTRL register */
#define TACH_CTRL_CNTR_Pos                    _UINT32_(16)                                         /* (TACH_CTRL) This 16-bit field contains the latched value of the internal Tach pulse counter, which may be configured by the \n       Tach Reading Mode Select field to operate as a free-running counter or to be gated by the Tach input signal. Position */
#define TACH_CTRL_CNTR_Msk                    (_UINT32_(0xFFFF) << TACH_CTRL_CNTR_Pos)             /* (TACH_CTRL) This 16-bit field contains the latched value of the internal Tach pulse counter, which may be configured by the \n       Tach Reading Mode Select field to operate as a free-running counter or to be gated by the Tach input signal. Mask */
#define TACH_CTRL_CNTR(value)                 (TACH_CTRL_CNTR_Msk & (_UINT32_(value) << TACH_CTRL_CNTR_Pos)) /* Assigment of value for CNTR in the TACH_CTRL register */
#define TACH_CTRL_Msk                         _UINT32_(0xFFFFDD03)                                 /* (TACH_CTRL) Register Mask  */


/* -------- TACH_STS : (TACH Offset: 0x04) (R/W 32) TACHx Status Register -------- */
#define TACH_STS_RESETVALUE                   _UINT32_(0x00)                                       /*  (TACH_STS) TACHx Status Register  Reset Value */

#define TACH_STS_OUTOF_LIM_STS_Pos            _UINT32_(0)                                          /* (TACH_STS) OUTOF_LIM_STS  1=Tach is outside of limits, 0=Tach is within limits (R/WC) Position */
#define TACH_STS_OUTOF_LIM_STS_Msk            (_UINT32_(0x1) << TACH_STS_OUTOF_LIM_STS_Pos)        /* (TACH_STS) OUTOF_LIM_STS  1=Tach is outside of limits, 0=Tach is within limits (R/WC) Mask */
#define TACH_STS_OUTOF_LIM_STS(value)         (TACH_STS_OUTOF_LIM_STS_Msk & (_UINT32_(value) << TACH_STS_OUTOF_LIM_STS_Pos)) /* Assigment of value for OUTOF_LIM_STS in the TACH_STS register */
#define TACH_STS_PIN_STS_Pos                  _UINT32_(1)                                          /* (TACH_STS) PIN_STS  1= Tach Input is high, 0= Tach Input is low Position */
#define TACH_STS_PIN_STS_Msk                  (_UINT32_(0x1) << TACH_STS_PIN_STS_Pos)              /* (TACH_STS) PIN_STS  1= Tach Input is high, 0= Tach Input is low Mask */
#define TACH_STS_PIN_STS(value)               (TACH_STS_PIN_STS_Msk & (_UINT32_(value) << TACH_STS_PIN_STS_Pos)) /* Assigment of value for PIN_STS in the TACH_STS register */
#define TACH_STS_TOG_STS_Pos                  _UINT32_(2)                                          /* (TACH_STS) TOG_STS  1=Tach Input changed state (this bit is set on a low-to-high or high-tolow transition), 0=Tach stable (R/WC) Position */
#define TACH_STS_TOG_STS_Msk                  (_UINT32_(0x1) << TACH_STS_TOG_STS_Pos)              /* (TACH_STS) TOG_STS  1=Tach Input changed state (this bit is set on a low-to-high or high-tolow transition), 0=Tach stable (R/WC) Mask */
#define TACH_STS_TOG_STS(value)               (TACH_STS_TOG_STS_Msk & (_UINT32_(value) << TACH_STS_TOG_STS_Pos)) /* Assigment of value for TOG_STS in the TACH_STS register */
#define TACH_STS_CNT_RDY_STS_Pos              _UINT32_(3)                                          /* (TACH_STS) CNT_RDY_STS  1=Reading ready, 0=Reading not ready Position */
#define TACH_STS_CNT_RDY_STS_Msk              (_UINT32_(0x1) << TACH_STS_CNT_RDY_STS_Pos)          /* (TACH_STS) CNT_RDY_STS  1=Reading ready, 0=Reading not ready Mask */
#define TACH_STS_CNT_RDY_STS(value)           (TACH_STS_CNT_RDY_STS_Msk & (_UINT32_(value) << TACH_STS_CNT_RDY_STS_Pos)) /* Assigment of value for CNT_RDY_STS in the TACH_STS register */
#define TACH_STS_Msk                          _UINT32_(0x0000000F)                                 /* (TACH_STS) Register Mask  */


/* -------- TACH_LIM_HI : (TACH Offset: 0x08) (R/W 32) TACH HIGH LIMIT Register -------- */
#define TACH_LIM_HI_RESETVALUE                _UINT32_(0xFFFF)                                     /*  (TACH_LIM_HI) TACH HIGH LIMIT Register  Reset Value */

#define TACH_LIM_HI_T_HIGH_Pos                _UINT32_(0)                                          /* (TACH_LIM_HI) This value is compared with the value in the TACHX_COUNTER field. If the value in the counter is greater than the value\n            programmed in this register, the TACH_OUT_OF_LIMIT_STATUS bit will be set. The TACH_OUT_OF_LIMIT_STATUS status event may be enabled\n               to generate an interrupt to the embedded controller via the TACH_OUT_OF_LIMIT_ENABLE bit in the TACHx Control Register. Position */
#define TACH_LIM_HI_T_HIGH_Msk                (_UINT32_(0xFFFF) << TACH_LIM_HI_T_HIGH_Pos)         /* (TACH_LIM_HI) This value is compared with the value in the TACHX_COUNTER field. If the value in the counter is greater than the value\n            programmed in this register, the TACH_OUT_OF_LIMIT_STATUS bit will be set. The TACH_OUT_OF_LIMIT_STATUS status event may be enabled\n               to generate an interrupt to the embedded controller via the TACH_OUT_OF_LIMIT_ENABLE bit in the TACHx Control Register. Mask */
#define TACH_LIM_HI_T_HIGH(value)             (TACH_LIM_HI_T_HIGH_Msk & (_UINT32_(value) << TACH_LIM_HI_T_HIGH_Pos)) /* Assigment of value for T_HIGH in the TACH_LIM_HI register */
#define TACH_LIM_HI_Msk                       _UINT32_(0x0000FFFF)                                 /* (TACH_LIM_HI) Register Mask  */


/* -------- TACH_LIM_LO : (TACH Offset: 0x0C) (R/W 32) TACHx Low Limit Register -------- */
#define TACH_LIM_LO_RESETVALUE                _UINT32_(0x00)                                       /*  (TACH_LIM_LO) TACHx Low Limit Register  Reset Value */

#define TACH_LIM_LO_T_LOW_Pos                 _UINT32_(0)                                          /* (TACH_LIM_LO) This value is compared with the value in the TACHX_COUNTER field of the TACHx Control Register. If the value in the counter\n          is less than the value programmed in this register, the TACH_OUT_OF_LIMIT_STATUS bit will be set. The TACH_OUT_OF_LIMIT_STATUS\n              status event may be enabled to generate an interrupt to the embedded controller via the TACH_OUT_OF_LIMIT_ENABLE bit in the TACHx\n         Control Register To disable the TACH_OUT_OF_LIMIT_STATUS low event, program 0000h into this register. Position */
#define TACH_LIM_LO_T_LOW_Msk                 (_UINT32_(0xFFFF) << TACH_LIM_LO_T_LOW_Pos)          /* (TACH_LIM_LO) This value is compared with the value in the TACHX_COUNTER field of the TACHx Control Register. If the value in the counter\n          is less than the value programmed in this register, the TACH_OUT_OF_LIMIT_STATUS bit will be set. The TACH_OUT_OF_LIMIT_STATUS\n              status event may be enabled to generate an interrupt to the embedded controller via the TACH_OUT_OF_LIMIT_ENABLE bit in the TACHx\n         Control Register To disable the TACH_OUT_OF_LIMIT_STATUS low event, program 0000h into this register. Mask */
#define TACH_LIM_LO_T_LOW(value)              (TACH_LIM_LO_T_LOW_Msk & (_UINT32_(value) << TACH_LIM_LO_T_LOW_Pos)) /* Assigment of value for T_LOW in the TACH_LIM_LO register */
#define TACH_LIM_LO_Msk                       _UINT32_(0x0000FFFF)                                 /* (TACH_LIM_LO) Register Mask  */


/** \brief TACH register offsets definitions */
#define TACH_CTRL_REG_OFST             _UINT32_(0x00)      /* (TACH_CTRL) TACHx Control Register Offset */
#define TACH_STS_REG_OFST              _UINT32_(0x04)      /* (TACH_STS) TACHx Status Register Offset */
#define TACH_LIM_HI_REG_OFST           _UINT32_(0x08)      /* (TACH_LIM_HI) TACH HIGH LIMIT Register Offset */
#define TACH_LIM_LO_REG_OFST           _UINT32_(0x0C)      /* (TACH_LIM_LO) TACHx Low Limit Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief TACH register API structure */
typedef struct
{  /* This block monitors TACH output signals (or locked rotor signals) from\n        various types of fans, and determines their speed. */
  __IO  uint32_t                       TACH_CTRL;          /**< Offset: 0x00 (R/W  32) TACHx Control Register */
  __IO  uint32_t                       TACH_STS;           /**< Offset: 0x04 (R/W  32) TACHx Status Register */
  __IO  uint32_t                       TACH_LIM_HI;        /**< Offset: 0x08 (R/W  32) TACH HIGH LIMIT Register */
  __IO  uint32_t                       TACH_LIM_LO;        /**< Offset: 0x0C (R/W  32) TACHx Low Limit Register */
} tach_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC1702Q_TACH_COMPONENT_H_ */
