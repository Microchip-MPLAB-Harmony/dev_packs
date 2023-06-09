/*
 * Component description for FUSES
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

/* file generated from device description version 2023-03-27T04:07:22Z */
#ifndef _SAMRH707_FUSES_COMPONENT_H_
#define _SAMRH707_FUSES_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR FUSES                                        */
/* ************************************************************************** */

/* -------- FUSES_USER_WORD_0 : (FUSES Offset: 0x00) ( R/ 32) USER Page Word 0. Contains factory setting values, do no override. -------- */
#define FUSES_USER_WORD_0_RC_TRIM_CRC_Pos     _UINT32_(0)                                          /* (FUSES_USER_WORD_0) RC Trim CRC Position */
#define FUSES_USER_WORD_0_RC_TRIM_CRC_Msk     (_UINT32_(0xFFFFFFFF) << FUSES_USER_WORD_0_RC_TRIM_CRC_Pos) /* (FUSES_USER_WORD_0) RC Trim CRC Mask */
#define FUSES_USER_WORD_0_RC_TRIM_CRC(value)  (FUSES_USER_WORD_0_RC_TRIM_CRC_Msk & (_UINT32_(value) << FUSES_USER_WORD_0_RC_TRIM_CRC_Pos)) /* Assigment of value for RC_TRIM_CRC in the FUSES_USER_WORD_0 register */
#define FUSES_USER_WORD_0_Msk                 _UINT32_(0xFFFFFFFF)                                 /* (FUSES_USER_WORD_0) Register Mask  */


/* -------- FUSES_USER_WORD_1 : (FUSES Offset: 0x04) ( R/ 32) USER Page Word 1. Contains factory setting values, do no override. -------- */
#define FUSES_USER_WORD_1_RC_TTRIM0_Pos       _UINT32_(0)                                          /* (FUSES_USER_WORD_1) RC Temperature Trim 0 Position */
#define FUSES_USER_WORD_1_RC_TTRIM0_Msk       (_UINT32_(0x3) << FUSES_USER_WORD_1_RC_TTRIM0_Pos)   /* (FUSES_USER_WORD_1) RC Temperature Trim 0 Mask */
#define FUSES_USER_WORD_1_RC_TTRIM0(value)    (FUSES_USER_WORD_1_RC_TTRIM0_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_RC_TTRIM0_Pos)) /* Assigment of value for RC_TTRIM0 in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_RC_FTRIM0_Pos       _UINT32_(2)                                          /* (FUSES_USER_WORD_1) RC Frequency Trim 0 Position */
#define FUSES_USER_WORD_1_RC_FTRIM0_Msk       (_UINT32_(0x7) << FUSES_USER_WORD_1_RC_FTRIM0_Pos)   /* (FUSES_USER_WORD_1) RC Frequency Trim 0 Mask */
#define FUSES_USER_WORD_1_RC_FTRIM0(value)    (FUSES_USER_WORD_1_RC_FTRIM0_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_RC_FTRIM0_Pos)) /* Assigment of value for RC_FTRIM0 in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_RC_TTRIM1_Pos       _UINT32_(5)                                          /* (FUSES_USER_WORD_1) RC Temperature Trim 1 Position */
#define FUSES_USER_WORD_1_RC_TTRIM1_Msk       (_UINT32_(0x3) << FUSES_USER_WORD_1_RC_TTRIM1_Pos)   /* (FUSES_USER_WORD_1) RC Temperature Trim 1 Mask */
#define FUSES_USER_WORD_1_RC_TTRIM1(value)    (FUSES_USER_WORD_1_RC_TTRIM1_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_RC_TTRIM1_Pos)) /* Assigment of value for RC_TTRIM1 in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_RC_FTRIM1_Pos       _UINT32_(7)                                          /* (FUSES_USER_WORD_1) RC Frequency Trim 1 Position */
#define FUSES_USER_WORD_1_RC_FTRIM1_Msk       (_UINT32_(0x7) << FUSES_USER_WORD_1_RC_FTRIM1_Pos)   /* (FUSES_USER_WORD_1) RC Frequency Trim 1 Mask */
#define FUSES_USER_WORD_1_RC_FTRIM1(value)    (FUSES_USER_WORD_1_RC_FTRIM1_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_RC_FTRIM1_Pos)) /* Assigment of value for RC_FTRIM1 in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_RC_TTRIM2_Pos       _UINT32_(10)                                         /* (FUSES_USER_WORD_1) RC Temperature Trim 2 Position */
#define FUSES_USER_WORD_1_RC_TTRIM2_Msk       (_UINT32_(0x3) << FUSES_USER_WORD_1_RC_TTRIM2_Pos)   /* (FUSES_USER_WORD_1) RC Temperature Trim 2 Mask */
#define FUSES_USER_WORD_1_RC_TTRIM2(value)    (FUSES_USER_WORD_1_RC_TTRIM2_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_RC_TTRIM2_Pos)) /* Assigment of value for RC_TTRIM2 in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_RC_FTRIM2_Pos       _UINT32_(12)                                         /* (FUSES_USER_WORD_1) RC Frequency Trim 2 Position */
#define FUSES_USER_WORD_1_RC_FTRIM2_Msk       (_UINT32_(0x7) << FUSES_USER_WORD_1_RC_FTRIM2_Pos)   /* (FUSES_USER_WORD_1) RC Frequency Trim 2 Mask */
#define FUSES_USER_WORD_1_RC_FTRIM2(value)    (FUSES_USER_WORD_1_RC_FTRIM2_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_RC_FTRIM2_Pos)) /* Assigment of value for RC_FTRIM2 in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_Msk                 _UINT32_(0x00007FFF)                                 /* (FUSES_USER_WORD_1) Register Mask  */


/* -------- FUSES_USER_WORD_2 : (FUSES Offset: 0x08) ( R/ 32) USER Page Word 2. Contains factory setting values, do no override. -------- */
#define FUSES_USER_WORD_2_USR_WORD2_Pos       _UINT32_(0)                                          /* (FUSES_USER_WORD_2) USER Word 2 Position */
#define FUSES_USER_WORD_2_USR_WORD2_Msk       (_UINT32_(0xFFFFFFFF) << FUSES_USER_WORD_2_USR_WORD2_Pos) /* (FUSES_USER_WORD_2) USER Word 2 Mask */
#define FUSES_USER_WORD_2_USR_WORD2(value)    (FUSES_USER_WORD_2_USR_WORD2_Msk & (_UINT32_(value) << FUSES_USER_WORD_2_USR_WORD2_Pos)) /* Assigment of value for USR_WORD2 in the FUSES_USER_WORD_2 register */
#define FUSES_USER_WORD_2_Msk                 _UINT32_(0xFFFFFFFF)                                 /* (FUSES_USER_WORD_2) Register Mask  */


/* -------- FUSES_USER_WORD_3 : (FUSES Offset: 0x0C) ( R/ 32) USER Page Word 3. Contains factory setting values, do no override. -------- */
#define FUSES_USER_WORD_3_USR_WORD3_Pos       _UINT32_(0)                                          /* (FUSES_USER_WORD_3) USER Word 3 Position */
#define FUSES_USER_WORD_3_USR_WORD3_Msk       (_UINT32_(0xFFFFFFFF) << FUSES_USER_WORD_3_USR_WORD3_Pos) /* (FUSES_USER_WORD_3) USER Word 3 Mask */
#define FUSES_USER_WORD_3_USR_WORD3(value)    (FUSES_USER_WORD_3_USR_WORD3_Msk & (_UINT32_(value) << FUSES_USER_WORD_3_USR_WORD3_Pos)) /* Assigment of value for USR_WORD3 in the FUSES_USER_WORD_3 register */
#define FUSES_USER_WORD_3_Msk                 _UINT32_(0xFFFFFFFF)                                 /* (FUSES_USER_WORD_3) Register Mask  */


/** \brief FUSES register offsets definitions */
#define FUSES_USER_WORD_0_REG_OFST     _UINT32_(0x00)      /* (FUSES_USER_WORD_0) USER Page Word 0. Contains factory setting values, do no override. Offset */
#define FUSES_USER_WORD_1_REG_OFST     _UINT32_(0x04)      /* (FUSES_USER_WORD_1) USER Page Word 1. Contains factory setting values, do no override. Offset */
#define FUSES_USER_WORD_2_REG_OFST     _UINT32_(0x08)      /* (FUSES_USER_WORD_2) USER Page Word 2. Contains factory setting values, do no override. Offset */
#define FUSES_USER_WORD_3_REG_OFST     _UINT32_(0x0C)      /* (FUSES_USER_WORD_3) USER Page Word 3. Contains factory setting values, do no override. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief GPNVMBITS register API structure */
typedef struct
{  /* GPNVM Bits */
  __I   uint32_t                       FUSES_USER_WORD_0;  /**< Offset: 0x00 (R/   32) USER Page Word 0. Contains factory setting values, do no override. */
  __I   uint32_t                       FUSES_USER_WORD_1;  /**< Offset: 0x04 (R/   32) USER Page Word 1. Contains factory setting values, do no override. */
  __I   uint32_t                       FUSES_USER_WORD_2;  /**< Offset: 0x08 (R/   32) USER Page Word 2. Contains factory setting values, do no override. */
  __I   uint32_t                       FUSES_USER_WORD_3;  /**< Offset: 0x0C (R/   32) USER Page Word 3. Contains factory setting values, do no override. */
} fuses_gpnvmbits_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMRH707_FUSES_COMPONENT_H_ */
