/*
 * Component description for CSM
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

/* file generated from device description version 2023-02-20T18:49:00Z */
#ifndef _PIC32CKSG01_CSM_COMPONENT_H_
#define _PIC32CKSG01_CSM_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR CSM                                          */
/* ************************************************************************** */

/* -------- CSM_CSMCTRLA : (CSM Offset: 0x00) (R/W 32) CSM Control register A -------- */
#define CSM_CSMCTRLA_RESETVALUE               _UINT32_(0x300)                                      /*  (CSM_CSMCTRLA) CSM Control register A  Reset Value */

#define CSM_CSMCTRLA_SECURED_Pos              _UINT32_(2)                                          /* (CSM_CSMCTRLA) Secured bit Position */
#define CSM_CSMCTRLA_SECURED_Msk              (_UINT32_(0x1) << CSM_CSMCTRLA_SECURED_Pos)          /* (CSM_CSMCTRLA) Secured bit Mask */
#define CSM_CSMCTRLA_SECURED(value)           (CSM_CSMCTRLA_SECURED_Msk & (_UINT32_(value) << CSM_CSMCTRLA_SECURED_Pos)) /* Assigment of value for SECURED in the CSM_CSMCTRLA register */
#define CSM_CSMCTRLA_RTCCLK_Pos               _UINT32_(3)                                          /* (CSM_CSMCTRLA) RTC Clock Enable bit Position */
#define CSM_CSMCTRLA_RTCCLK_Msk               (_UINT32_(0x1) << CSM_CSMCTRLA_RTCCLK_Pos)           /* (CSM_CSMCTRLA) RTC Clock Enable bit Mask */
#define CSM_CSMCTRLA_RTCCLK(value)            (CSM_CSMCTRLA_RTCCLK_Msk & (_UINT32_(value) << CSM_CSMCTRLA_RTCCLK_Pos)) /* Assigment of value for RTCCLK in the CSM_CSMCTRLA register */
#define CSM_CSMCTRLA_Msk                      _UINT32_(0x0000000C)                                 /* (CSM_CSMCTRLA) Register Mask  */


/* -------- CSM_CSMCTRLB : (CSM Offset: 0x04) (R/W 32) CSM Control register B -------- */
#define CSM_CSMCTRLB_RESETVALUE               _UINT32_(0x00)                                       /*  (CSM_CSMCTRLB) CSM Control register B  Reset Value */

#define CSM_CSMCTRLB_ERROR_Pos                _UINT32_(0)                                          /* (CSM_CSMCTRLB) Error Interrupt Request bit. Position */
#define CSM_CSMCTRLB_ERROR_Msk                (_UINT32_(0x1) << CSM_CSMCTRLB_ERROR_Pos)            /* (CSM_CSMCTRLB) Error Interrupt Request bit. Mask */
#define CSM_CSMCTRLB_ERROR(value)             (CSM_CSMCTRLB_ERROR_Msk & (_UINT32_(value) << CSM_CSMCTRLB_ERROR_Pos)) /* Assigment of value for ERROR in the CSM_CSMCTRLB register */
#define CSM_CSMCTRLB_TAMPER_Pos               _UINT32_(1)                                          /* (CSM_CSMCTRLB) Tamper Interrupt Request bit. Position */
#define CSM_CSMCTRLB_TAMPER_Msk               (_UINT32_(0x1) << CSM_CSMCTRLB_TAMPER_Pos)           /* (CSM_CSMCTRLB) Tamper Interrupt Request bit. Mask */
#define CSM_CSMCTRLB_TAMPER(value)            (CSM_CSMCTRLB_TAMPER_Msk & (_UINT32_(value) << CSM_CSMCTRLB_TAMPER_Pos)) /* Assigment of value for TAMPER in the CSM_CSMCTRLB register */
#define CSM_CSMCTRLB_Msk                      _UINT32_(0x00000003)                                 /* (CSM_CSMCTRLB) Register Mask  */


/* -------- CSM_CSMINTENCLR : (CSM Offset: 0x08) ( R/ 32) CSM INTERRUPT ENABLE Clear register -------- */
#define CSM_CSMINTENCLR_RESETVALUE            _UINT32_(0x00)                                       /*  (CSM_CSMINTENCLR) CSM INTERRUPT ENABLE Clear register  Reset Value */

#define CSM_CSMINTENCLR_CANCEL_Pos            _UINT32_(0)                                          /* (CSM_CSMINTENCLR) Cancel Command Interrupt Enable bit Position */
#define CSM_CSMINTENCLR_CANCEL_Msk            (_UINT32_(0x1) << CSM_CSMINTENCLR_CANCEL_Pos)        /* (CSM_CSMINTENCLR) Cancel Command Interrupt Enable bit Mask */
#define CSM_CSMINTENCLR_CANCEL(value)         (CSM_CSMINTENCLR_CANCEL_Msk & (_UINT32_(value) << CSM_CSMINTENCLR_CANCEL_Pos)) /* Assigment of value for CANCEL in the CSM_CSMINTENCLR register */
#define CSM_CSMINTENCLR_Msk                   _UINT32_(0x00000001)                                 /* (CSM_CSMINTENCLR) Register Mask  */


/* -------- CSM_CSMINTENSET : (CSM Offset: 0x0C) (R/W 32) CSM INTERRUPT ENABLE SET register -------- */
#define CSM_CSMINTENSET_RESETVALUE            _UINT32_(0x00)                                       /*  (CSM_CSMINTENSET) CSM INTERRUPT ENABLE SET register  Reset Value */

#define CSM_CSMINTENSET_CANCEL_Pos            _UINT32_(0)                                          /* (CSM_CSMINTENSET) Cancel Command Interrupt Enable bit Position */
#define CSM_CSMINTENSET_CANCEL_Msk            (_UINT32_(0x1) << CSM_CSMINTENSET_CANCEL_Pos)        /* (CSM_CSMINTENSET) Cancel Command Interrupt Enable bit Mask */
#define CSM_CSMINTENSET_CANCEL(value)         (CSM_CSMINTENSET_CANCEL_Msk & (_UINT32_(value) << CSM_CSMINTENSET_CANCEL_Pos)) /* Assigment of value for CANCEL in the CSM_CSMINTENSET register */
#define CSM_CSMINTENSET_Msk                   _UINT32_(0x00000001)                                 /* (CSM_CSMINTENSET) Register Mask  */


/* -------- CSM_CSMINTFLAG : (CSM Offset: 0x10) ( R/ 32) CSM INTERRUPT FLAG register -------- */
#define CSM_CSMINTFLAG_RESETVALUE             _UINT32_(0x00)                                       /*  (CSM_CSMINTFLAG) CSM INTERRUPT FLAG register  Reset Value */

#define CSM_CSMINTFLAG_CANCEL_Pos             _UINT32_(0)                                          /* (CSM_CSMINTFLAG) Cancel Command Interrupt Flag bit Position */
#define CSM_CSMINTFLAG_CANCEL_Msk             (_UINT32_(0x1) << CSM_CSMINTFLAG_CANCEL_Pos)         /* (CSM_CSMINTFLAG) Cancel Command Interrupt Flag bit Mask */
#define CSM_CSMINTFLAG_CANCEL(value)          (CSM_CSMINTFLAG_CANCEL_Msk & (_UINT32_(value) << CSM_CSMINTFLAG_CANCEL_Pos)) /* Assigment of value for CANCEL in the CSM_CSMINTFLAG register */
#define CSM_CSMINTFLAG_Msk                    _UINT32_(0x00000001)                                 /* (CSM_CSMINTFLAG) Register Mask  */


/* -------- CSM_CSMSTATUS : (CSM Offset: 0x14) ( R/ 32) CSM Status register -------- */
#define CSM_CSMSTATUS_RESETVALUE              _UINT32_(0x00)                                       /*  (CSM_CSMSTATUS) CSM Status register  Reset Value */

#define CSM_CSMSTATUS_OTPLOCK_Pos             _UINT32_(0)                                          /* (CSM_CSMSTATUS) OTP Lock bit Position */
#define CSM_CSMSTATUS_OTPLOCK_Msk             (_UINT32_(0x1) << CSM_CSMSTATUS_OTPLOCK_Pos)         /* (CSM_CSMSTATUS) OTP Lock bit Mask */
#define CSM_CSMSTATUS_OTPLOCK(value)          (CSM_CSMSTATUS_OTPLOCK_Msk & (_UINT32_(value) << CSM_CSMSTATUS_OTPLOCK_Pos)) /* Assigment of value for OTPLOCK in the CSM_CSMSTATUS register */
#define CSM_CSMSTATUS_Msk                     _UINT32_(0x00000001)                                 /* (CSM_CSMSTATUS) Register Mask  */


/* -------- CSM_CSMREPORT : (CSM Offset: 0x18) (R/W 32) CSM REPORT register -------- */
#define CSM_CSMREPORT_RESETVALUE              _UINT32_(0x00)                                       /*  (CSM_CSMREPORT) CSM REPORT register  Reset Value */

#define CSM_CSMREPORT_BUSY_Pos                _UINT32_(0)                                          /* (CSM_CSMREPORT) HSM CPU Busy Position */
#define CSM_CSMREPORT_BUSY_Msk                (_UINT32_(0x1) << CSM_CSMREPORT_BUSY_Pos)            /* (CSM_CSMREPORT) HSM CPU Busy Mask */
#define CSM_CSMREPORT_BUSY(value)             (CSM_CSMREPORT_BUSY_Msk & (_UINT32_(value) << CSM_CSMREPORT_BUSY_Pos)) /* Assigment of value for BUSY in the CSM_CSMREPORT register */
#define CSM_CSMREPORT_PS_Pos                  _UINT32_(4)                                          /* (CSM_CSMREPORT) Processing State bits Position */
#define CSM_CSMREPORT_PS_Msk                  (_UINT32_(0x7) << CSM_CSMREPORT_PS_Pos)              /* (CSM_CSMREPORT) Processing State bits Mask */
#define CSM_CSMREPORT_PS(value)               (CSM_CSMREPORT_PS_Msk & (_UINT32_(value) << CSM_CSMREPORT_PS_Pos)) /* Assigment of value for PS in the CSM_CSMREPORT register */
#define CSM_CSMREPORT_LCS_Pos                 _UINT32_(8)                                          /* (CSM_CSMREPORT) Lifecycle State bits Position */
#define CSM_CSMREPORT_LCS_Msk                 (_UINT32_(0x7) << CSM_CSMREPORT_LCS_Pos)             /* (CSM_CSMREPORT) Lifecycle State bits Mask */
#define CSM_CSMREPORT_LCS(value)              (CSM_CSMREPORT_LCS_Msk & (_UINT32_(value) << CSM_CSMREPORT_LCS_Pos)) /* Assigment of value for LCS in the CSM_CSMREPORT register */
#define CSM_CSMREPORT_SBS_Pos                 _UINT32_(12)                                         /* (CSM_CSMREPORT) Secure Boot State bits Position */
#define CSM_CSMREPORT_SBS_Msk                 (_UINT32_(0x7) << CSM_CSMREPORT_SBS_Pos)             /* (CSM_CSMREPORT) Secure Boot State bits Mask */
#define CSM_CSMREPORT_SBS(value)              (CSM_CSMREPORT_SBS_Msk & (_UINT32_(value) << CSM_CSMREPORT_SBS_Pos)) /* Assigment of value for SBS in the CSM_CSMREPORT register */
#define CSM_CSMREPORT_ECODE_Pos               _UINT32_(16)                                         /* (CSM_CSMREPORT) Error Code Position */
#define CSM_CSMREPORT_ECODE_Msk               (_UINT32_(0xF) << CSM_CSMREPORT_ECODE_Pos)           /* (CSM_CSMREPORT) Error Code Mask */
#define CSM_CSMREPORT_ECODE(value)            (CSM_CSMREPORT_ECODE_Msk & (_UINT32_(value) << CSM_CSMREPORT_ECODE_Pos)) /* Assigment of value for ECODE in the CSM_CSMREPORT register */
#define CSM_CSMREPORT_Msk                     _UINT32_(0x000F7771)                                 /* (CSM_CSMREPORT) Register Mask  */


/** \brief CSM register offsets definitions */
#define CSM_CSMCTRLA_REG_OFST          _UINT32_(0x00)      /* (CSM_CSMCTRLA) CSM Control register A Offset */
#define CSM_CSMCTRLB_REG_OFST          _UINT32_(0x04)      /* (CSM_CSMCTRLB) CSM Control register B Offset */
#define CSM_CSMINTENCLR_REG_OFST       _UINT32_(0x08)      /* (CSM_CSMINTENCLR) CSM INTERRUPT ENABLE Clear register Offset */
#define CSM_CSMINTENSET_REG_OFST       _UINT32_(0x0C)      /* (CSM_CSMINTENSET) CSM INTERRUPT ENABLE SET register Offset */
#define CSM_CSMINTFLAG_REG_OFST        _UINT32_(0x10)      /* (CSM_CSMINTFLAG) CSM INTERRUPT FLAG register Offset */
#define CSM_CSMSTATUS_REG_OFST         _UINT32_(0x14)      /* (CSM_CSMSTATUS) CSM Status register Offset */
#define CSM_CSMREPORT_REG_OFST         _UINT32_(0x18)      /* (CSM_CSMREPORT) CSM REPORT register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief CSM register API structure */
typedef struct
{  /* Control and Status Module */
  __IO  uint32_t                       CSM_CSMCTRLA;       /**< Offset: 0x00 (R/W  32) CSM Control register A */
  __IO  uint32_t                       CSM_CSMCTRLB;       /**< Offset: 0x04 (R/W  32) CSM Control register B */
  __I   uint32_t                       CSM_CSMINTENCLR;    /**< Offset: 0x08 (R/   32) CSM INTERRUPT ENABLE Clear register */
  __IO  uint32_t                       CSM_CSMINTENSET;    /**< Offset: 0x0C (R/W  32) CSM INTERRUPT ENABLE SET register */
  __I   uint32_t                       CSM_CSMINTFLAG;     /**< Offset: 0x10 (R/   32) CSM INTERRUPT FLAG register */
  __I   uint32_t                       CSM_CSMSTATUS;      /**< Offset: 0x14 (R/   32) CSM Status register */
  __IO  uint32_t                       CSM_CSMREPORT;      /**< Offset: 0x18 (R/W  32) CSM REPORT register */
} csm_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CKSG01_CSM_COMPONENT_H_ */
