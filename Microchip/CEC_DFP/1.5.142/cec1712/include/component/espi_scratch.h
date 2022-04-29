/*
 * Component description for ESPI_SCRATCH
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
#ifndef _CEC1712H_S2_SX_ESPI_SCRATCH_COMPONENT_H_
#define _CEC1712H_S2_SX_ESPI_SCRATCH_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR ESPI_SCRATCH                                 */
/* ************************************************************************** */

/* -------- ESPI_SCRATCH_SCRATCH0 : (ESPI_SCRATCH Offset: 0x00) (R/W 32) Scratch 0 Register -------- */
#define ESPI_SCRATCH_SCRATCH0_RESETVALUE      _UINT32_(0x00)                                       /*  (ESPI_SCRATCH_SCRATCH0) Scratch 0 Register  Reset Value */

#define ESPI_SCRATCH_SCRATCH0_SCR0_Pos        _UINT32_(0)                                          /* (ESPI_SCRATCH_SCRATCH0) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define ESPI_SCRATCH_SCRATCH0_SCR0_Msk        (_UINT32_(0xFFFFFFFF) << ESPI_SCRATCH_SCRATCH0_SCR0_Pos) /* (ESPI_SCRATCH_SCRATCH0) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define ESPI_SCRATCH_SCRATCH0_SCR0(value)     (ESPI_SCRATCH_SCRATCH0_SCR0_Msk & (_UINT32_(value) << ESPI_SCRATCH_SCRATCH0_SCR0_Pos)) /* Assigment of value for SCR0 in the ESPI_SCRATCH_SCRATCH0 register */
#define ESPI_SCRATCH_SCRATCH0_Msk             _UINT32_(0xFFFFFFFF)                                 /* (ESPI_SCRATCH_SCRATCH0) Register Mask  */


/* -------- ESPI_SCRATCH_SCRATCH1 : (ESPI_SCRATCH Offset: 0x04) (R/W 32) Scratch 1 Register -------- */
#define ESPI_SCRATCH_SCRATCH1_RESETVALUE      _UINT32_(0x00)                                       /*  (ESPI_SCRATCH_SCRATCH1) Scratch 1 Register  Reset Value */

#define ESPI_SCRATCH_SCRATCH1_SCR1_Pos        _UINT32_(0)                                          /* (ESPI_SCRATCH_SCRATCH1) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define ESPI_SCRATCH_SCRATCH1_SCR1_Msk        (_UINT32_(0xFFFFFFFF) << ESPI_SCRATCH_SCRATCH1_SCR1_Pos) /* (ESPI_SCRATCH_SCRATCH1) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define ESPI_SCRATCH_SCRATCH1_SCR1(value)     (ESPI_SCRATCH_SCRATCH1_SCR1_Msk & (_UINT32_(value) << ESPI_SCRATCH_SCRATCH1_SCR1_Pos)) /* Assigment of value for SCR1 in the ESPI_SCRATCH_SCRATCH1 register */
#define ESPI_SCRATCH_SCRATCH1_Msk             _UINT32_(0xFFFFFFFF)                                 /* (ESPI_SCRATCH_SCRATCH1) Register Mask  */


/* -------- ESPI_SCRATCH_SCRATCH2 : (ESPI_SCRATCH Offset: 0x08) (R/W 32) Scratch 2 Register -------- */
#define ESPI_SCRATCH_SCRATCH2_RESETVALUE      _UINT32_(0x00)                                       /*  (ESPI_SCRATCH_SCRATCH2) Scratch 2 Register  Reset Value */

#define ESPI_SCRATCH_SCRATCH2_SCR2_Pos        _UINT32_(0)                                          /* (ESPI_SCRATCH_SCRATCH2) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define ESPI_SCRATCH_SCRATCH2_SCR2_Msk        (_UINT32_(0xFFFFFFFF) << ESPI_SCRATCH_SCRATCH2_SCR2_Pos) /* (ESPI_SCRATCH_SCRATCH2) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define ESPI_SCRATCH_SCRATCH2_SCR2(value)     (ESPI_SCRATCH_SCRATCH2_SCR2_Msk & (_UINT32_(value) << ESPI_SCRATCH_SCRATCH2_SCR2_Pos)) /* Assigment of value for SCR2 in the ESPI_SCRATCH_SCRATCH2 register */
#define ESPI_SCRATCH_SCRATCH2_Msk             _UINT32_(0xFFFFFFFF)                                 /* (ESPI_SCRATCH_SCRATCH2) Register Mask  */


/* -------- ESPI_SCRATCH_SCRATCH3 : (ESPI_SCRATCH Offset: 0x0C) (R/W 32) Scratch 3 Register -------- */
#define ESPI_SCRATCH_SCRATCH3_RESETVALUE      _UINT32_(0x00)                                       /*  (ESPI_SCRATCH_SCRATCH3) Scratch 3 Register  Reset Value */

#define ESPI_SCRATCH_SCRATCH3_SCR3_Pos        _UINT32_(0)                                          /* (ESPI_SCRATCH_SCRATCH3) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define ESPI_SCRATCH_SCRATCH3_SCR3_Msk        (_UINT32_(0xFFFFFFFF) << ESPI_SCRATCH_SCRATCH3_SCR3_Pos) /* (ESPI_SCRATCH_SCRATCH3) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define ESPI_SCRATCH_SCRATCH3_SCR3(value)     (ESPI_SCRATCH_SCRATCH3_SCR3_Msk & (_UINT32_(value) << ESPI_SCRATCH_SCRATCH3_SCR3_Pos)) /* Assigment of value for SCR3 in the ESPI_SCRATCH_SCRATCH3 register */
#define ESPI_SCRATCH_SCRATCH3_Msk             _UINT32_(0xFFFFFFFF)                                 /* (ESPI_SCRATCH_SCRATCH3) Register Mask  */


/* -------- ESPI_SCRATCH_SCRATCH4 : (ESPI_SCRATCH Offset: 0x10) (R/W 32) Scratch 4 Register -------- */
#define ESPI_SCRATCH_SCRATCH4_RESETVALUE      _UINT32_(0x00)                                       /*  (ESPI_SCRATCH_SCRATCH4) Scratch 4 Register  Reset Value */

#define ESPI_SCRATCH_SCRATCH4_SCR4_Pos        _UINT32_(0)                                          /* (ESPI_SCRATCH_SCRATCH4) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define ESPI_SCRATCH_SCRATCH4_SCR4_Msk        (_UINT32_(0xFFFFFFFF) << ESPI_SCRATCH_SCRATCH4_SCR4_Pos) /* (ESPI_SCRATCH_SCRATCH4) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define ESPI_SCRATCH_SCRATCH4_SCR4(value)     (ESPI_SCRATCH_SCRATCH4_SCR4_Msk & (_UINT32_(value) << ESPI_SCRATCH_SCRATCH4_SCR4_Pos)) /* Assigment of value for SCR4 in the ESPI_SCRATCH_SCRATCH4 register */
#define ESPI_SCRATCH_SCRATCH4_Msk             _UINT32_(0xFFFFFFFF)                                 /* (ESPI_SCRATCH_SCRATCH4) Register Mask  */


/* -------- ESPI_SCRATCH_SCRATCH5 : (ESPI_SCRATCH Offset: 0x14) (R/W 32) Scratch 5 Register -------- */
#define ESPI_SCRATCH_SCRATCH5_RESETVALUE      _UINT32_(0x00)                                       /*  (ESPI_SCRATCH_SCRATCH5) Scratch 5 Register  Reset Value */

#define ESPI_SCRATCH_SCRATCH5_SCR5_Pos        _UINT32_(0)                                          /* (ESPI_SCRATCH_SCRATCH5) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define ESPI_SCRATCH_SCRATCH5_SCR5_Msk        (_UINT32_(0xFFFFFFFF) << ESPI_SCRATCH_SCRATCH5_SCR5_Pos) /* (ESPI_SCRATCH_SCRATCH5) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define ESPI_SCRATCH_SCRATCH5_SCR5(value)     (ESPI_SCRATCH_SCRATCH5_SCR5_Msk & (_UINT32_(value) << ESPI_SCRATCH_SCRATCH5_SCR5_Pos)) /* Assigment of value for SCR5 in the ESPI_SCRATCH_SCRATCH5 register */
#define ESPI_SCRATCH_SCRATCH5_Msk             _UINT32_(0xFFFFFFFF)                                 /* (ESPI_SCRATCH_SCRATCH5) Register Mask  */


/* -------- ESPI_SCRATCH_SCRATCH6 : (ESPI_SCRATCH Offset: 0x18) (R/W 32) Scratch 6 Register -------- */
#define ESPI_SCRATCH_SCRATCH6_RESETVALUE      _UINT32_(0x00)                                       /*  (ESPI_SCRATCH_SCRATCH6) Scratch 6 Register  Reset Value */

#define ESPI_SCRATCH_SCRATCH6_SCR6_Pos        _UINT32_(0)                                          /* (ESPI_SCRATCH_SCRATCH6) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define ESPI_SCRATCH_SCRATCH6_SCR6_Msk        (_UINT32_(0xFFFFFFFF) << ESPI_SCRATCH_SCRATCH6_SCR6_Pos) /* (ESPI_SCRATCH_SCRATCH6) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define ESPI_SCRATCH_SCRATCH6_SCR6(value)     (ESPI_SCRATCH_SCRATCH6_SCR6_Msk & (_UINT32_(value) << ESPI_SCRATCH_SCRATCH6_SCR6_Pos)) /* Assigment of value for SCR6 in the ESPI_SCRATCH_SCRATCH6 register */
#define ESPI_SCRATCH_SCRATCH6_Msk             _UINT32_(0xFFFFFFFF)                                 /* (ESPI_SCRATCH_SCRATCH6) Register Mask  */


/* -------- ESPI_SCRATCH_SCRATCH7 : (ESPI_SCRATCH Offset: 0x1C) (R/W 32) Scratch 7 Register -------- */
#define ESPI_SCRATCH_SCRATCH7_RESETVALUE      _UINT32_(0x00)                                       /*  (ESPI_SCRATCH_SCRATCH7) Scratch 7 Register  Reset Value */

#define ESPI_SCRATCH_SCRATCH7_SCR7_Pos        _UINT32_(0)                                          /* (ESPI_SCRATCH_SCRATCH7) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define ESPI_SCRATCH_SCRATCH7_SCR7_Msk        (_UINT32_(0xFFFFFFFF) << ESPI_SCRATCH_SCRATCH7_SCR7_Pos) /* (ESPI_SCRATCH_SCRATCH7) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define ESPI_SCRATCH_SCRATCH7_SCR7(value)     (ESPI_SCRATCH_SCRATCH7_SCR7_Msk & (_UINT32_(value) << ESPI_SCRATCH_SCRATCH7_SCR7_Pos)) /* Assigment of value for SCR7 in the ESPI_SCRATCH_SCRATCH7 register */
#define ESPI_SCRATCH_SCRATCH7_Msk             _UINT32_(0xFFFFFFFF)                                 /* (ESPI_SCRATCH_SCRATCH7) Register Mask  */


/** \brief ESPI_SCRATCH register offsets definitions */
#define ESPI_SCRATCH_SCRATCH0_REG_OFST _UINT32_(0x00)      /* (ESPI_SCRATCH_SCRATCH0) Scratch 0 Register Offset */
#define ESPI_SCRATCH_SCRATCH1_REG_OFST _UINT32_(0x04)      /* (ESPI_SCRATCH_SCRATCH1) Scratch 1 Register Offset */
#define ESPI_SCRATCH_SCRATCH2_REG_OFST _UINT32_(0x08)      /* (ESPI_SCRATCH_SCRATCH2) Scratch 2 Register Offset */
#define ESPI_SCRATCH_SCRATCH3_REG_OFST _UINT32_(0x0C)      /* (ESPI_SCRATCH_SCRATCH3) Scratch 3 Register Offset */
#define ESPI_SCRATCH_SCRATCH4_REG_OFST _UINT32_(0x10)      /* (ESPI_SCRATCH_SCRATCH4) Scratch 4 Register Offset */
#define ESPI_SCRATCH_SCRATCH5_REG_OFST _UINT32_(0x14)      /* (ESPI_SCRATCH_SCRATCH5) Scratch 5 Register Offset */
#define ESPI_SCRATCH_SCRATCH6_REG_OFST _UINT32_(0x18)      /* (ESPI_SCRATCH_SCRATCH6) Scratch 6 Register Offset */
#define ESPI_SCRATCH_SCRATCH7_REG_OFST _UINT32_(0x1C)      /* (ESPI_SCRATCH_SCRATCH7) Scratch 7 Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief ESPI_SCRATCH register API structure */
typedef struct
{  /* 32 Byte ESPI Test Register */
  __IO  uint32_t                       ESPI_SCRATCH_SCRATCH0; /**< Offset: 0x00 (R/W  32) Scratch 0 Register */
  __IO  uint32_t                       ESPI_SCRATCH_SCRATCH1; /**< Offset: 0x04 (R/W  32) Scratch 1 Register */
  __IO  uint32_t                       ESPI_SCRATCH_SCRATCH2; /**< Offset: 0x08 (R/W  32) Scratch 2 Register */
  __IO  uint32_t                       ESPI_SCRATCH_SCRATCH3; /**< Offset: 0x0C (R/W  32) Scratch 3 Register */
  __IO  uint32_t                       ESPI_SCRATCH_SCRATCH4; /**< Offset: 0x10 (R/W  32) Scratch 4 Register */
  __IO  uint32_t                       ESPI_SCRATCH_SCRATCH5; /**< Offset: 0x14 (R/W  32) Scratch 5 Register */
  __IO  uint32_t                       ESPI_SCRATCH_SCRATCH6; /**< Offset: 0x18 (R/W  32) Scratch 6 Register */
  __IO  uint32_t                       ESPI_SCRATCH_SCRATCH7; /**< Offset: 0x1C (R/W  32) Scratch 7 Register */
} espi_scratch_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC1712H_S2_SX_ESPI_SCRATCH_COMPONENT_H_ */
