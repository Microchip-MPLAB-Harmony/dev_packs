/*
 * Component description for RTC
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

/* file generated from device description version 2022-11-28T06:55:11Z */
#ifndef _PIC32CKSG01_RTC_COMPONENT_H_
#define _PIC32CKSG01_RTC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR RTC                                          */
/* ************************************************************************** */

/* -------- RTC_CNTH : (RTC Offset: 0x04) (R/W 32) Upper  Count -------- */
#define RTC_CNTH_RESETVALUE                   _UINT32_(0x00)                                       /*  (RTC_CNTH) Upper  Count  Reset Value */

#define RTC_CNTH_CNTH_Pos                     _UINT32_(0)                                          /* (RTC_CNTH) RTC Upper Counter Register Position */
#define RTC_CNTH_CNTH_Msk                     (_UINT32_(0xFFFFFFFF) << RTC_CNTH_CNTH_Pos)          /* (RTC_CNTH) RTC Upper Counter Register Mask */
#define RTC_CNTH_CNTH(value)                  (RTC_CNTH_CNTH_Msk & (_UINT32_(value) << RTC_CNTH_CNTH_Pos)) /* Assigment of value for CNTH in the RTC_CNTH register */
#define RTC_CNTH_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (RTC_CNTH) Register Mask  */


/* -------- RTC_CNTL : (RTC Offset: 0x00) (R/W 32) Lower Count -------- */
#define RTC_CNTL_RESETVALUE                   _UINT32_(0x00)                                       /*  (RTC_CNTL) Lower Count  Reset Value */

#define RTC_CNTL_CNTL_Pos                     _UINT32_(17)                                         /* (RTC_CNTL) RTC Lower Counter Register Position */
#define RTC_CNTL_CNTL_Msk                     (_UINT32_(0x7FFF) << RTC_CNTL_CNTL_Pos)              /* (RTC_CNTL) RTC Lower Counter Register Mask */
#define RTC_CNTL_CNTL(value)                  (RTC_CNTL_CNTL_Msk & (_UINT32_(value) << RTC_CNTL_CNTL_Pos)) /* Assigment of value for CNTL in the RTC_CNTL register */
#define RTC_CNTL_Msk                          _UINT32_(0xFFFE0000)                                 /* (RTC_CNTL) Register Mask  */


/* -------- RTC_CTRL : (RTC Offset: 0x10) (R/W 32) Control -------- */
#define RTC_CTRL_RESETVALUE                   _UINT32_(0x00)                                       /*  (RTC_CTRL) Control  Reset Value */

#define RTC_CTRL_ENI_Pos                      _UINT32_(0)                                          /* (RTC_CTRL) ENI Position */
#define RTC_CTRL_ENI_Msk                      (_UINT32_(0x1) << RTC_CTRL_ENI_Pos)                  /* (RTC_CTRL) ENI Mask */
#define RTC_CTRL_ENI(value)                   (RTC_CTRL_ENI_Msk & (_UINT32_(value) << RTC_CTRL_ENI_Pos)) /* Assigment of value for ENI in the RTC_CTRL register */
#define RTC_CTRL_ENB_Pos                      _UINT32_(1)                                          /* (RTC_CTRL) ENB Position */
#define RTC_CTRL_ENB_Msk                      (_UINT32_(0x1) << RTC_CTRL_ENB_Pos)                  /* (RTC_CTRL) ENB Mask */
#define RTC_CTRL_ENB(value)                   (RTC_CTRL_ENB_Msk & (_UINT32_(value) << RTC_CTRL_ENB_Pos)) /* Assigment of value for ENB in the RTC_CTRL register */
#define RTC_CTRL_Msk                          _UINT32_(0x00000003)                                 /* (RTC_CTRL) Register Mask  */


/* -------- RTC_MATCHH : (RTC Offset: 0x0C) (R/W 32) UpperMatch -------- */
#define RTC_MATCHH_RESETVALUE                 _UINT32_(0x00)                                       /*  (RTC_MATCHH) UpperMatch  Reset Value */

#define RTC_MATCHH_MATCHH_Pos                 _UINT32_(0)                                          /* (RTC_MATCHH)  Position */
#define RTC_MATCHH_MATCHH_Msk                 (_UINT32_(0xFFFFFFFF) << RTC_MATCHH_MATCHH_Pos)      /* (RTC_MATCHH)  Mask */
#define RTC_MATCHH_MATCHH(value)              (RTC_MATCHH_MATCHH_Msk & (_UINT32_(value) << RTC_MATCHH_MATCHH_Pos)) /* Assigment of value for MATCHH in the RTC_MATCHH register */
#define RTC_MATCHH_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (RTC_MATCHH) Register Mask  */


/* -------- RTC_MATCHL : (RTC Offset: 0x08) (R/W 32) Lower Match -------- */
#define RTC_MATCHL_RESETVALUE                 _UINT32_(0x00)                                       /*  (RTC_MATCHL) Lower Match  Reset Value */

#define RTC_MATCHL_MATCHL_Pos                 _UINT32_(17)                                         /* (RTC_MATCHL) RTC Match Register Position */
#define RTC_MATCHL_MATCHL_Msk                 (_UINT32_(0x7FFF) << RTC_MATCHL_MATCHL_Pos)          /* (RTC_MATCHL) RTC Match Register Mask */
#define RTC_MATCHL_MATCHL(value)              (RTC_MATCHL_MATCHL_Msk & (_UINT32_(value) << RTC_MATCHL_MATCHL_Pos)) /* Assigment of value for MATCHL in the RTC_MATCHL register */
#define RTC_MATCHL_Msk                        _UINT32_(0xFFFE0000)                                 /* (RTC_MATCHL) Register Mask  */


/* -------- RTC_STAT : (RTC Offset: 0x14) ( R/ 32) Status -------- */
#define RTC_STAT_RESETVALUE                   _UINT32_(0x00)                                       /*  (RTC_STAT) Status  Reset Value */

#define RTC_STAT_STAT_Pos                     _UINT32_(0)                                          /* (RTC_STAT) Raw match status Position */
#define RTC_STAT_STAT_Msk                     (_UINT32_(0x1) << RTC_STAT_STAT_Pos)                 /* (RTC_STAT) Raw match status Mask */
#define RTC_STAT_STAT(value)                  (RTC_STAT_STAT_Msk & (_UINT32_(value) << RTC_STAT_STAT_Pos)) /* Assigment of value for STAT in the RTC_STAT register */
#define RTC_STAT_Msk                          _UINT32_(0x00000001)                                 /* (RTC_STAT) Register Mask  */


/** \brief RTC register offsets definitions */
#define RTC_CNTH_REG_OFST              _UINT32_(0x04)      /* (RTC_CNTH) Upper  Count Offset */
#define RTC_CNTL_REG_OFST              _UINT32_(0x00)      /* (RTC_CNTL) Lower Count Offset */
#define RTC_CTRL_REG_OFST              _UINT32_(0x10)      /* (RTC_CTRL) Control Offset */
#define RTC_MATCHH_REG_OFST            _UINT32_(0x0C)      /* (RTC_MATCHH) UpperMatch Offset */
#define RTC_MATCHL_REG_OFST            _UINT32_(0x08)      /* (RTC_MATCHL) Lower Match Offset */
#define RTC_STAT_REG_OFST              _UINT32_(0x14)      /* (RTC_STAT) Status Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief RTC register API structure */
typedef struct
{  /* Real Time Clock Module */
  __IO  uint32_t                       RTC_CNTL;           /**< Offset: 0x00 (R/W  32) Lower Count */
  __IO  uint32_t                       RTC_CNTH;           /**< Offset: 0x04 (R/W  32) Upper  Count */
  __IO  uint32_t                       RTC_MATCHL;         /**< Offset: 0x08 (R/W  32) Lower Match */
  __IO  uint32_t                       RTC_MATCHH;         /**< Offset: 0x0C (R/W  32) UpperMatch */
  __IO  uint32_t                       RTC_CTRL;           /**< Offset: 0x10 (R/W  32) Control */
  __I   uint32_t                       RTC_STAT;           /**< Offset: 0x14 (R/   32) Status */
} rtc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CKSG01_RTC_COMPONENT_H_ */
