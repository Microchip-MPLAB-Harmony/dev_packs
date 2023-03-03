/*
 * Component description for OTP
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
#ifndef _CEC_OTP_COMPONENT_H_
#define _CEC_OTP_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR OTP                                          */
/* ************************************************************************** */

/* -------- OTP_WR_LOCK0 : (OTP Offset: 0x44) (R/W 8) This is the Write Lock Register. -------- */
#define OTP_WR_LOCK0_RESETVALUE               _UINT8_(0x00)                                        /*  (OTP_WR_LOCK0) This is the Write Lock Register.  Reset Value */

#define OTP_WR_LOCK0_WL0_Pos                  _UINT8_(0)                                           /* (OTP_WR_LOCK0) When any of the bits are set, the corresponding 32byte range in the OTP is not writable. Position */
#define OTP_WR_LOCK0_WL0_Msk                  (_UINT8_(0xFF) << OTP_WR_LOCK0_WL0_Pos)              /* (OTP_WR_LOCK0) When any of the bits are set, the corresponding 32byte range in the OTP is not writable. Mask */
#define OTP_WR_LOCK0_WL0(value)               (OTP_WR_LOCK0_WL0_Msk & (_UINT8_(value) << OTP_WR_LOCK0_WL0_Pos)) /* Assigment of value for WL0 in the OTP_WR_LOCK0 register */
#define OTP_WR_LOCK0_Msk                      _UINT8_(0xFF)                                        /* (OTP_WR_LOCK0) Register Mask  */


/* -------- OTP_WR_LOCK1 : (OTP Offset: 0x45) (R/W 8) This is the Write Lock Register. -------- */
#define OTP_WR_LOCK1_RESETVALUE               _UINT8_(0x00)                                        /*  (OTP_WR_LOCK1) This is the Write Lock Register.  Reset Value */

#define OTP_WR_LOCK1_WL1_Pos                  _UINT8_(0)                                           /* (OTP_WR_LOCK1) When any of the bits are set, the corresponding 32byte range in the OTP is not writable. Position */
#define OTP_WR_LOCK1_WL1_Msk                  (_UINT8_(0xFF) << OTP_WR_LOCK1_WL1_Pos)              /* (OTP_WR_LOCK1) When any of the bits are set, the corresponding 32byte range in the OTP is not writable. Mask */
#define OTP_WR_LOCK1_WL1(value)               (OTP_WR_LOCK1_WL1_Msk & (_UINT8_(value) << OTP_WR_LOCK1_WL1_Pos)) /* Assigment of value for WL1 in the OTP_WR_LOCK1 register */
#define OTP_WR_LOCK1_Msk                      _UINT8_(0xFF)                                        /* (OTP_WR_LOCK1) Register Mask  */


/* -------- OTP_WR_LOCK2 : (OTP Offset: 0x46) (R/W 8) This is the Write Lock Register. -------- */
#define OTP_WR_LOCK2_RESETVALUE               _UINT8_(0x00)                                        /*  (OTP_WR_LOCK2) This is the Write Lock Register.  Reset Value */

#define OTP_WR_LOCK2_WL2_Pos                  _UINT8_(0)                                           /* (OTP_WR_LOCK2) When any of the bits are set, the corresponding 32byte range in the OTP is not writable. Position */
#define OTP_WR_LOCK2_WL2_Msk                  (_UINT8_(0xFF) << OTP_WR_LOCK2_WL2_Pos)              /* (OTP_WR_LOCK2) When any of the bits are set, the corresponding 32byte range in the OTP is not writable. Mask */
#define OTP_WR_LOCK2_WL2(value)               (OTP_WR_LOCK2_WL2_Msk & (_UINT8_(value) << OTP_WR_LOCK2_WL2_Pos)) /* Assigment of value for WL2 in the OTP_WR_LOCK2 register */
#define OTP_WR_LOCK2_Msk                      _UINT8_(0xFF)                                        /* (OTP_WR_LOCK2) Register Mask  */


/* -------- OTP_WR_LOCK3 : (OTP Offset: 0x47) (R/W 8) This is the Write Lock Register. -------- */
#define OTP_WR_LOCK3_RESETVALUE               _UINT8_(0x00)                                        /*  (OTP_WR_LOCK3) This is the Write Lock Register.  Reset Value */

#define OTP_WR_LOCK3_WL3_Pos                  _UINT8_(0)                                           /* (OTP_WR_LOCK3) When any of the bits are set, the corresponding 32byte range in the OTP is not writable. Position */
#define OTP_WR_LOCK3_WL3_Msk                  (_UINT8_(0xFF) << OTP_WR_LOCK3_WL3_Pos)              /* (OTP_WR_LOCK3) When any of the bits are set, the corresponding 32byte range in the OTP is not writable. Mask */
#define OTP_WR_LOCK3_WL3(value)               (OTP_WR_LOCK3_WL3_Msk & (_UINT8_(value) << OTP_WR_LOCK3_WL3_Pos)) /* Assigment of value for WL3 in the OTP_WR_LOCK3 register */
#define OTP_WR_LOCK3_Msk                      _UINT8_(0xFF)                                        /* (OTP_WR_LOCK3) Register Mask  */


/* -------- OTP_RD_LOCK0 : (OTP Offset: 0x48) (R/W 8) This is the Read Lock Register. -------- */
#define OTP_RD_LOCK0_RESETVALUE               _UINT8_(0x00)                                        /*  (OTP_RD_LOCK0) This is the Read Lock Register.  Reset Value */

#define OTP_RD_LOCK0_RL0_Pos                  _UINT8_(0)                                           /* (OTP_RD_LOCK0) When any of the bits are set, the corresponding 32byte range in the OTP is not readable. Position */
#define OTP_RD_LOCK0_RL0_Msk                  (_UINT8_(0xFF) << OTP_RD_LOCK0_RL0_Pos)              /* (OTP_RD_LOCK0) When any of the bits are set, the corresponding 32byte range in the OTP is not readable. Mask */
#define OTP_RD_LOCK0_RL0(value)               (OTP_RD_LOCK0_RL0_Msk & (_UINT8_(value) << OTP_RD_LOCK0_RL0_Pos)) /* Assigment of value for RL0 in the OTP_RD_LOCK0 register */
#define OTP_RD_LOCK0_Msk                      _UINT8_(0xFF)                                        /* (OTP_RD_LOCK0) Register Mask  */


/* -------- OTP_RD_LOCK1 : (OTP Offset: 0x49) (R/W 8) This is the Read Lock Register. -------- */
#define OTP_RD_LOCK1_RESETVALUE               _UINT8_(0x00)                                        /*  (OTP_RD_LOCK1) This is the Read Lock Register.  Reset Value */

#define OTP_RD_LOCK1_RL1_Pos                  _UINT8_(0)                                           /* (OTP_RD_LOCK1) When any of the bits are set, the corresponding 32byte range in the OTP is not readable. Position */
#define OTP_RD_LOCK1_RL1_Msk                  (_UINT8_(0xFF) << OTP_RD_LOCK1_RL1_Pos)              /* (OTP_RD_LOCK1) When any of the bits are set, the corresponding 32byte range in the OTP is not readable. Mask */
#define OTP_RD_LOCK1_RL1(value)               (OTP_RD_LOCK1_RL1_Msk & (_UINT8_(value) << OTP_RD_LOCK1_RL1_Pos)) /* Assigment of value for RL1 in the OTP_RD_LOCK1 register */
#define OTP_RD_LOCK1_Msk                      _UINT8_(0xFF)                                        /* (OTP_RD_LOCK1) Register Mask  */


/* -------- OTP_RD_LOCK2 : (OTP Offset: 0x4A) (R/W 8) This is the Read Lock Register. -------- */
#define OTP_RD_LOCK2_RESETVALUE               _UINT8_(0x00)                                        /*  (OTP_RD_LOCK2) This is the Read Lock Register.  Reset Value */

#define OTP_RD_LOCK2_RL2_Pos                  _UINT8_(0)                                           /* (OTP_RD_LOCK2) When any of the bits are set, the corresponding 32byte range in the OTP is not readable. Position */
#define OTP_RD_LOCK2_RL2_Msk                  (_UINT8_(0xFF) << OTP_RD_LOCK2_RL2_Pos)              /* (OTP_RD_LOCK2) When any of the bits are set, the corresponding 32byte range in the OTP is not readable. Mask */
#define OTP_RD_LOCK2_RL2(value)               (OTP_RD_LOCK2_RL2_Msk & (_UINT8_(value) << OTP_RD_LOCK2_RL2_Pos)) /* Assigment of value for RL2 in the OTP_RD_LOCK2 register */
#define OTP_RD_LOCK2_Msk                      _UINT8_(0xFF)                                        /* (OTP_RD_LOCK2) Register Mask  */


/* -------- OTP_RD_LOCK3 : (OTP Offset: 0x4B) (R/W 8) This is the Read Lock Register. -------- */
#define OTP_RD_LOCK3_RESETVALUE               _UINT8_(0x00)                                        /*  (OTP_RD_LOCK3) This is the Read Lock Register.  Reset Value */

#define OTP_RD_LOCK3_RL3_Pos                  _UINT8_(0)                                           /* (OTP_RD_LOCK3) When any of the bits are set, the corresponding 32byte range in the OTP is not readable. Position */
#define OTP_RD_LOCK3_RL3_Msk                  (_UINT8_(0xFF) << OTP_RD_LOCK3_RL3_Pos)              /* (OTP_RD_LOCK3) When any of the bits are set, the corresponding 32byte range in the OTP is not readable. Mask */
#define OTP_RD_LOCK3_RL3(value)               (OTP_RD_LOCK3_RL3_Msk & (_UINT8_(value) << OTP_RD_LOCK3_RL3_Pos)) /* Assigment of value for RL3 in the OTP_RD_LOCK3 register */
#define OTP_RD_LOCK3_Msk                      _UINT8_(0xFF)                                        /* (OTP_RD_LOCK3) Register Mask  */


/* -------- OTP_WR_FINE_LCK : (OTP Offset: 0x4C) (R/W 32) This is the Write Fine Lock Register. -------- */
#define OTP_WR_FINE_LCK_RESETVALUE            _UINT32_(0x00)                                       /*  (OTP_WR_FINE_LCK) This is the Write Fine Lock Register.  Reset Value */

#define OTP_WR_FINE_LCK_WR_FINE_LCK_Pos       _UINT32_(0)                                          /* (OTP_WR_FINE_LCK) Each bit locks write to a byte in the OTP range starting byte 320 to 351 0=Not Locked 1=Locked. Position */
#define OTP_WR_FINE_LCK_WR_FINE_LCK_Msk       (_UINT32_(0xFFFFFFFF) << OTP_WR_FINE_LCK_WR_FINE_LCK_Pos) /* (OTP_WR_FINE_LCK) Each bit locks write to a byte in the OTP range starting byte 320 to 351 0=Not Locked 1=Locked. Mask */
#define OTP_WR_FINE_LCK_WR_FINE_LCK(value)    (OTP_WR_FINE_LCK_WR_FINE_LCK_Msk & (_UINT32_(value) << OTP_WR_FINE_LCK_WR_FINE_LCK_Pos)) /* Assigment of value for WR_FINE_LCK in the OTP_WR_FINE_LCK register */
#define OTP_WR_FINE_LCK_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (OTP_WR_FINE_LCK) Register Mask  */


/* -------- OTP_RD_FINE_LCK : (OTP Offset: 0x50) (R/W 32) This is the Read Fine Lock Register. -------- */
#define OTP_RD_FINE_LCK_RESETVALUE            _UINT32_(0x00)                                       /*  (OTP_RD_FINE_LCK) This is the Read Fine Lock Register.  Reset Value */

#define OTP_RD_FINE_LCK_RD_FINE_LCK_Pos       _UINT32_(0)                                          /* (OTP_RD_FINE_LCK) Each bit locks read to a byte in the OTP range starting byte 320 to 351 0=Not Locked 1=Locked. Position */
#define OTP_RD_FINE_LCK_RD_FINE_LCK_Msk       (_UINT32_(0xFFFFFFFF) << OTP_RD_FINE_LCK_RD_FINE_LCK_Pos) /* (OTP_RD_FINE_LCK) Each bit locks read to a byte in the OTP range starting byte 320 to 351 0=Not Locked 1=Locked. Mask */
#define OTP_RD_FINE_LCK_RD_FINE_LCK(value)    (OTP_RD_FINE_LCK_RD_FINE_LCK_Msk & (_UINT32_(value) << OTP_RD_FINE_LCK_RD_FINE_LCK_Pos)) /* Assigment of value for RD_FINE_LCK in the OTP_RD_FINE_LCK register */
#define OTP_RD_FINE_LCK_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (OTP_RD_FINE_LCK) Register Mask  */


/** \brief OTP register offsets definitions */
#define OTP_WR_LOCK0_REG_OFST          _UINT32_(0x44)      /* (OTP_WR_LOCK0) This is the Write Lock Register. Offset */
#define OTP_WR_LOCK1_REG_OFST          _UINT32_(0x45)      /* (OTP_WR_LOCK1) This is the Write Lock Register. Offset */
#define OTP_WR_LOCK2_REG_OFST          _UINT32_(0x46)      /* (OTP_WR_LOCK2) This is the Write Lock Register. Offset */
#define OTP_WR_LOCK3_REG_OFST          _UINT32_(0x47)      /* (OTP_WR_LOCK3) This is the Write Lock Register. Offset */
#define OTP_RD_LOCK0_REG_OFST          _UINT32_(0x48)      /* (OTP_RD_LOCK0) This is the Read Lock Register. Offset */
#define OTP_RD_LOCK1_REG_OFST          _UINT32_(0x49)      /* (OTP_RD_LOCK1) This is the Read Lock Register. Offset */
#define OTP_RD_LOCK2_REG_OFST          _UINT32_(0x4A)      /* (OTP_RD_LOCK2) This is the Read Lock Register. Offset */
#define OTP_RD_LOCK3_REG_OFST          _UINT32_(0x4B)      /* (OTP_RD_LOCK3) This is the Read Lock Register. Offset */
#define OTP_WR_FINE_LCK_REG_OFST       _UINT32_(0x4C)      /* (OTP_WR_FINE_LCK) This is the Write Fine Lock Register. Offset */
#define OTP_RD_FINE_LCK_REG_OFST       _UINT32_(0x50)      /* (OTP_RD_FINE_LCK) This is the Read Fine Lock Register. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief OTP register API structure */
typedef struct
{  /* OTP Programming registers. */
  __I   uint8_t                        Reserved1[0x44];
  __IO  uint8_t                        OTP_WR_LOCK0;       /**< Offset: 0x44 (R/W  8) This is the Write Lock Register. */
  __IO  uint8_t                        OTP_WR_LOCK1;       /**< Offset: 0x45 (R/W  8) This is the Write Lock Register. */
  __IO  uint8_t                        OTP_WR_LOCK2;       /**< Offset: 0x46 (R/W  8) This is the Write Lock Register. */
  __IO  uint8_t                        OTP_WR_LOCK3;       /**< Offset: 0x47 (R/W  8) This is the Write Lock Register. */
  __IO  uint8_t                        OTP_RD_LOCK0;       /**< Offset: 0x48 (R/W  8) This is the Read Lock Register. */
  __IO  uint8_t                        OTP_RD_LOCK1;       /**< Offset: 0x49 (R/W  8) This is the Read Lock Register. */
  __IO  uint8_t                        OTP_RD_LOCK2;       /**< Offset: 0x4A (R/W  8) This is the Read Lock Register. */
  __IO  uint8_t                        OTP_RD_LOCK3;       /**< Offset: 0x4B (R/W  8) This is the Read Lock Register. */
  __IO  uint32_t                       OTP_WR_FINE_LCK;    /**< Offset: 0x4C (R/W  32) This is the Write Fine Lock Register. */
  __IO  uint32_t                       OTP_RD_FINE_LCK;    /**< Offset: 0x50 (R/W  32) This is the Read Fine Lock Register. */
} otp_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_OTP_COMPONENT_H_ */
