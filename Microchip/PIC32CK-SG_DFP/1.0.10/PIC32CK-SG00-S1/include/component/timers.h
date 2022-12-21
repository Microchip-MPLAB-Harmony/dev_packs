/*
 * Component description for TIMERS
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

/* file generated from device description version 2022-11-28T06:54:46Z */
#ifndef _PIC32CKSG00_TIMERS_COMPONENT_H_
#define _PIC32CKSG00_TIMERS_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR TIMERS                                       */
/* ************************************************************************** */

/* -------- TIMERS_CNT0 : (TIMERS Offset: 0x18) (R/W 32) Counter 0 -------- */
#define TIMERS_CNT0_Msk                       _UINT32_(0x00000000)                                 /* (TIMERS_CNT0) Register Mask  */


/* -------- TIMERS_CNT1 : (TIMERS Offset: 0x20) (R/W 32) Counter 1 -------- */
#define TIMERS_CNT1_Msk                       _UINT32_(0x00000000)                                 /* (TIMERS_CNT1) Register Mask  */


/* -------- TIMERS_INTDIS : (TIMERS Offset: 0x0C) (R/W 32) Interrupt Disable -------- */
#define TIMERS_INTDIS_Msk                     _UINT32_(0x00000000)                                 /* (TIMERS_INTDIS) Register Mask  */


/* -------- TIMERS_INTEN : (TIMERS Offset: 0x08) (R/W 32) Interrupt Enable -------- */
#define TIMERS_INTEN_Msk                      _UINT32_(0x00000000)                                 /* (TIMERS_INTEN) Register Mask  */


/* -------- TIMERS_MATCH0 : (TIMERS Offset: 0x1C) (R/W 32) Match 0 -------- */
#define TIMERS_MATCH0_Msk                     _UINT32_(0x00000000)                                 /* (TIMERS_MATCH0) Register Mask  */


/* -------- TIMERS_MATCH1 : (TIMERS Offset: 0x24) (R/W 32) Match 1 -------- */
#define TIMERS_MATCH1_Msk                     _UINT32_(0x00000000)                                 /* (TIMERS_MATCH1) Register Mask  */


/* -------- TIMERS_RST : (TIMERS Offset: 0x00) (R/W 32) Reset -------- */
#define TIMERS_RST_Msk                        _UINT32_(0x00000000)                                 /* (TIMERS_RST) Register Mask  */


/* -------- TIMERS_STAT : (TIMERS Offset: 0x10) (R/W 32) Status -------- */
#define TIMERS_STAT_Msk                       _UINT32_(0x00000000)                                 /* (TIMERS_STAT) Register Mask  */


/* -------- TIMERS_STOP : (TIMERS Offset: 0x04) (R/W 32) Stop -------- */
#define TIMERS_STOP_Msk                       _UINT32_(0x00000000)                                 /* (TIMERS_STOP) Register Mask  */


/** \brief TIMERS register offsets definitions */
#define TIMERS_CNT0_REG_OFST           _UINT32_(0x18)      /* (TIMERS_CNT0) Counter 0 Offset */
#define TIMERS_CNT1_REG_OFST           _UINT32_(0x20)      /* (TIMERS_CNT1) Counter 1 Offset */
#define TIMERS_INTDIS_REG_OFST         _UINT32_(0x0C)      /* (TIMERS_INTDIS) Interrupt Disable Offset */
#define TIMERS_INTEN_REG_OFST          _UINT32_(0x08)      /* (TIMERS_INTEN) Interrupt Enable Offset */
#define TIMERS_MATCH0_REG_OFST         _UINT32_(0x1C)      /* (TIMERS_MATCH0) Match 0 Offset */
#define TIMERS_MATCH1_REG_OFST         _UINT32_(0x24)      /* (TIMERS_MATCH1) Match 1 Offset */
#define TIMERS_RST_REG_OFST            _UINT32_(0x00)      /* (TIMERS_RST) Reset Offset */
#define TIMERS_STAT_REG_OFST           _UINT32_(0x10)      /* (TIMERS_STAT) Status Offset */
#define TIMERS_STOP_REG_OFST           _UINT32_(0x04)      /* (TIMERS_STOP) Stop Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief TIMERS register API structure */
typedef struct
{  /* Timer Module */
  __IO  uint32_t                       TIMERS_RST;         /**< Offset: 0x00 (R/W  32) Reset */
  __IO  uint32_t                       TIMERS_STOP;        /**< Offset: 0x04 (R/W  32) Stop */
  __IO  uint32_t                       TIMERS_INTEN;       /**< Offset: 0x08 (R/W  32) Interrupt Enable */
  __IO  uint32_t                       TIMERS_INTDIS;      /**< Offset: 0x0C (R/W  32) Interrupt Disable */
  __IO  uint32_t                       TIMERS_STAT;        /**< Offset: 0x10 (R/W  32) Status */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       TIMERS_CNT0;        /**< Offset: 0x18 (R/W  32) Counter 0 */
  __IO  uint32_t                       TIMERS_MATCH0;      /**< Offset: 0x1C (R/W  32) Match 0 */
  __IO  uint32_t                       TIMERS_CNT1;        /**< Offset: 0x20 (R/W  32) Counter 1 */
  __IO  uint32_t                       TIMERS_MATCH1;      /**< Offset: 0x24 (R/W  32) Match 1 */
} timers_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CKSG00_TIMERS_COMPONENT_H_ */
