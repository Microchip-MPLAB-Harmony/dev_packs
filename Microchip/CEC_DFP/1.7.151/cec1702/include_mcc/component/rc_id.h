/*
 * Component description for RC_ID
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

/* file generated from device description version 2018-10-01T10:50:03Z */
#ifndef _CEC1702Q_RC_ID_COMPONENT_H_
#define _CEC1702Q_RC_ID_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR RC_ID                                        */
/* ************************************************************************** */

/* -------- RC_ID_CTRL : (RC_ID Offset: 0x00) (R/W 32) RC_ID Control Register -------- */
#define RC_ID_CTRL_RESETVALUE                 _UINT32_(0x00)                                       /*  (RC_ID_CTRL) RC_ID Control Register  Reset Value */

#define RC_ID_CTRL_DONE_Pos                   _UINT32_(0)                                          /* (RC_ID_CTRL) This bit is cleared to 0 when the RC_ID interface is in the Reset phase, and set to 1 when the interface completes an RC_ID measurement. Position */
#define RC_ID_CTRL_DONE_Msk                   (_UINT32_(0x1) << RC_ID_CTRL_DONE_Pos)               /* (RC_ID_CTRL) This bit is cleared to 0 when the RC_ID interface is in the Reset phase, and set to 1 when the interface completes an RC_ID measurement. Mask */
#define RC_ID_CTRL_DONE(value)                (RC_ID_CTRL_DONE_Msk & (_UINT32_(value) << RC_ID_CTRL_DONE_Pos)) /* Assigment of value for DONE in the RC_ID_CTRL register */
#define RC_ID_CTRL_TC_Pos                     _UINT32_(1)                                          /* (RC_ID_CTRL) This bit is cleared to 0 when the RC_ID interface is in the Reset phase, and set to 1 when the interface completes the Discharged phase of an RC_ID measurement. Position */
#define RC_ID_CTRL_TC_Msk                     (_UINT32_(0x1) << RC_ID_CTRL_TC_Pos)                 /* (RC_ID_CTRL) This bit is cleared to 0 when the RC_ID interface is in the Reset phase, and set to 1 when the interface completes the Discharged phase of an RC_ID measurement. Mask */
#define RC_ID_CTRL_TC(value)                  (RC_ID_CTRL_TC_Msk & (_UINT32_(value) << RC_ID_CTRL_TC_Pos)) /* Assigment of value for TC in the RC_ID_CTRL register */
#define RC_ID_CTRL_CY_ER_Pos                  _UINT32_(2)                                          /* (RC_ID_CTRL) This bit is 1 if an RC_ID measurement encountered an error and the reading in the RC_ID Data Register is invalid. This bit is cleared to 0 when the RC_ID interface is in the Reset phase. Position */
#define RC_ID_CTRL_CY_ER_Msk                  (_UINT32_(0x1) << RC_ID_CTRL_CY_ER_Pos)              /* (RC_ID_CTRL) This bit is 1 if an RC_ID measurement encountered an error and the reading in the RC_ID Data Register is invalid. This bit is cleared to 0 when the RC_ID interface is in the Reset phase. Mask */
#define RC_ID_CTRL_CY_ER(value)               (RC_ID_CTRL_CY_ER_Msk & (_UINT32_(value) << RC_ID_CTRL_CY_ER_Pos)) /* Assigment of value for CY_ER in the RC_ID_CTRL register */
#define RC_ID_CTRL_START_Pos                  _UINT32_(6)                                          /* (RC_ID_CTRL) Setting this bit to 1 initiates the Discharged phase of an RC_ID measurement. Position */
#define RC_ID_CTRL_START_Msk                  (_UINT32_(0x1) << RC_ID_CTRL_START_Pos)              /* (RC_ID_CTRL) Setting this bit to 1 initiates the Discharged phase of an RC_ID measurement. Mask */
#define RC_ID_CTRL_START(value)               (RC_ID_CTRL_START_Msk & (_UINT32_(value) << RC_ID_CTRL_START_Pos)) /* Assigment of value for START in the RC_ID_CTRL register */
#define RC_ID_CTRL_ENABLE_Pos                 _UINT32_(7)                                          /* (RC_ID_CTRL) Clearing the bit to 0 causes the RC_ID interface to enter the Reset state, gating its clocks, clearing the status bits in this register and entering \n       into its lowest power state. Setting this bit to 1 causes the RC_ID interface to enter the Armed phase of an RC_ID measurement. Position */
#define RC_ID_CTRL_ENABLE_Msk                 (_UINT32_(0x1) << RC_ID_CTRL_ENABLE_Pos)             /* (RC_ID_CTRL) Clearing the bit to 0 causes the RC_ID interface to enter the Reset state, gating its clocks, clearing the status bits in this register and entering \n       into its lowest power state. Setting this bit to 1 causes the RC_ID interface to enter the Armed phase of an RC_ID measurement. Mask */
#define RC_ID_CTRL_ENABLE(value)              (RC_ID_CTRL_ENABLE_Msk & (_UINT32_(value) << RC_ID_CTRL_ENABLE_Pos)) /* Assigment of value for ENABLE in the RC_ID_CTRL register */
#define RC_ID_CTRL_CLOCK_SET_Pos              _UINT32_(8)                                          /* (RC_ID_CTRL) This field selects the frequency of the Counter circuit clock. This field must retain the same value as long as the ENABLE bit in this register is 1. Position */
#define RC_ID_CTRL_CLOCK_SET_Msk              (_UINT32_(0x3) << RC_ID_CTRL_CLOCK_SET_Pos)          /* (RC_ID_CTRL) This field selects the frequency of the Counter circuit clock. This field must retain the same value as long as the ENABLE bit in this register is 1. Mask */
#define RC_ID_CTRL_CLOCK_SET(value)           (RC_ID_CTRL_CLOCK_SET_Msk & (_UINT32_(value) << RC_ID_CTRL_CLOCK_SET_Pos)) /* Assigment of value for CLOCK_SET in the RC_ID_CTRL register */
#define RC_ID_CTRL_Msk                        _UINT32_(0x000003C7)                                 /* (RC_ID_CTRL) Register Mask  */


/* -------- RC_ID_DAT : (RC_ID Offset: 0x04) (R/W 32) Reads of this register provide the result of an RC_ID measurement. -------- */
#define RC_ID_DAT_RESETVALUE                  _UINT32_(0x00)                                       /*  (RC_ID_DAT) Reads of this register provide the result of an RC_ID measurement.  Reset Value */

#define RC_ID_DAT_RCID_DATA_Pos               _UINT32_(0)                                          /* (RC_ID_DAT) Reads of this register provide the result of an RC_ID measurement. Position */
#define RC_ID_DAT_RCID_DATA_Msk               (_UINT32_(0xFFFF) << RC_ID_DAT_RCID_DATA_Pos)        /* (RC_ID_DAT) Reads of this register provide the result of an RC_ID measurement. Mask */
#define RC_ID_DAT_RCID_DATA(value)            (RC_ID_DAT_RCID_DATA_Msk & (_UINT32_(value) << RC_ID_DAT_RCID_DATA_Pos)) /* Assigment of value for RCID_DATA in the RC_ID_DAT register */
#define RC_ID_DAT_Msk                         _UINT32_(0x0000FFFF)                                 /* (RC_ID_DAT) Register Mask  */


/** \brief RC_ID register offsets definitions */
#define RC_ID_CTRL_REG_OFST            _UINT32_(0x00)      /* (RC_ID_CTRL) RC_ID Control Register Offset */
#define RC_ID_DAT_REG_OFST             _UINT32_(0x04)      /* (RC_ID_DAT) Reads of this register provide the result of an RC_ID measurement. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief RC_ID register API structure */
typedef struct
{  /* This interface provides a single pin interface which can discriminate a number of quantized RC constants. */
  __IO  uint32_t                       RC_ID_CTRL;         /**< Offset: 0x00 (R/W  32) RC_ID Control Register */
  __IO  uint32_t                       RC_ID_DAT;          /**< Offset: 0x04 (R/W  32) Reads of this register provide the result of an RC_ID measurement. */
} rc_id_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC1702Q_RC_ID_COMPONENT_H_ */
