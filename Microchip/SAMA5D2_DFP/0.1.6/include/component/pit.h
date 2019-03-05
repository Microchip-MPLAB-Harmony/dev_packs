/**
 * \file
 *
 * \brief Component description for PIT
 *
 * Copyright (c) 2019 Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \license_stop
 *
 */

/* file generated from device description version 2019-01-23T22:42:14Z */
#ifndef _SAMA5D2_PIT_COMPONENT_H_
#define _SAMA5D2_PIT_COMPONENT_H_
#define _SAMA5D2_PIT_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Periodic Interval Timer
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PIT */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define PIT_6079                       /**< (PIT) Module ID */
#define REV_PIT C                      /**< (PIT) Module revision */

/* -------- PIT_MR : (PIT Offset: 0x00) (R/W 32) Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PIV:20;                    /**< bit:  0..19  Periodic Interval Value                  */
    uint32_t :4;                        /**< bit: 20..23  Reserved */
    uint32_t PITEN:1;                   /**< bit:     24  Period Interval Timer Enabled            */
    uint32_t PITIEN:1;                  /**< bit:     25  Periodic Interval Timer Interrupt Enable */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PIT_MR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PIT_MR_OFFSET                       (0x00)                                        /**<  (PIT_MR) Mode Register  Offset */

#define PIT_MR_PIV_Pos                      0                                              /**< (PIT_MR) Periodic Interval Value Position */
#define PIT_MR_PIV_Msk                      (_U_(0xFFFFF) << PIT_MR_PIV_Pos)               /**< (PIT_MR) Periodic Interval Value Mask */
#define PIT_MR_PIV(value)                   (PIT_MR_PIV_Msk & ((value) << PIT_MR_PIV_Pos))
#define PIT_MR_PITEN_Pos                    24                                             /**< (PIT_MR) Period Interval Timer Enabled Position */
#define PIT_MR_PITEN_Msk                    (_U_(0x1) << PIT_MR_PITEN_Pos)                 /**< (PIT_MR) Period Interval Timer Enabled Mask */
#define PIT_MR_PITEN                        PIT_MR_PITEN_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIT_MR_PITEN_Msk instead */
#define PIT_MR_PITIEN_Pos                   25                                             /**< (PIT_MR) Periodic Interval Timer Interrupt Enable Position */
#define PIT_MR_PITIEN_Msk                   (_U_(0x1) << PIT_MR_PITIEN_Pos)                /**< (PIT_MR) Periodic Interval Timer Interrupt Enable Mask */
#define PIT_MR_PITIEN                       PIT_MR_PITIEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIT_MR_PITIEN_Msk instead */
#define PIT_MR_MASK                         _U_(0x30FFFFF)                                 /**< \deprecated (PIT_MR) Register MASK  (Use PIT_MR_Msk instead)  */
#define PIT_MR_Msk                          _U_(0x30FFFFF)                                 /**< (PIT_MR) Register Mask  */


/* -------- PIT_SR : (PIT Offset: 0x04) (R/ 32) Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PITS:1;                    /**< bit:      0  Periodic Interval Timer Status           */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PIT_SR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PIT_SR_OFFSET                       (0x04)                                        /**<  (PIT_SR) Status Register  Offset */

#define PIT_SR_PITS_Pos                     0                                              /**< (PIT_SR) Periodic Interval Timer Status Position */
#define PIT_SR_PITS_Msk                     (_U_(0x1) << PIT_SR_PITS_Pos)                  /**< (PIT_SR) Periodic Interval Timer Status Mask */
#define PIT_SR_PITS                         PIT_SR_PITS_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIT_SR_PITS_Msk instead */
#define PIT_SR_MASK                         _U_(0x01)                                      /**< \deprecated (PIT_SR) Register MASK  (Use PIT_SR_Msk instead)  */
#define PIT_SR_Msk                          _U_(0x01)                                      /**< (PIT_SR) Register Mask  */


/* -------- PIT_PIVR : (PIT Offset: 0x08) (R/ 32) Periodic Interval Value Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CPIV:20;                   /**< bit:  0..19  Current Periodic Interval Value          */
    uint32_t PICNT:12;                  /**< bit: 20..31  Periodic Interval Counter                */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PIT_PIVR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PIT_PIVR_OFFSET                     (0x08)                                        /**<  (PIT_PIVR) Periodic Interval Value Register  Offset */

#define PIT_PIVR_CPIV_Pos                   0                                              /**< (PIT_PIVR) Current Periodic Interval Value Position */
#define PIT_PIVR_CPIV_Msk                   (_U_(0xFFFFF) << PIT_PIVR_CPIV_Pos)            /**< (PIT_PIVR) Current Periodic Interval Value Mask */
#define PIT_PIVR_CPIV(value)                (PIT_PIVR_CPIV_Msk & ((value) << PIT_PIVR_CPIV_Pos))
#define PIT_PIVR_PICNT_Pos                  20                                             /**< (PIT_PIVR) Periodic Interval Counter Position */
#define PIT_PIVR_PICNT_Msk                  (_U_(0xFFF) << PIT_PIVR_PICNT_Pos)             /**< (PIT_PIVR) Periodic Interval Counter Mask */
#define PIT_PIVR_PICNT(value)               (PIT_PIVR_PICNT_Msk & ((value) << PIT_PIVR_PICNT_Pos))
#define PIT_PIVR_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (PIT_PIVR) Register MASK  (Use PIT_PIVR_Msk instead)  */
#define PIT_PIVR_Msk                        _U_(0xFFFFFFFF)                                /**< (PIT_PIVR) Register Mask  */


/* -------- PIT_PIIR : (PIT Offset: 0x0c) (R/ 32) Periodic Interval Image Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CPIV:20;                   /**< bit:  0..19  Current Periodic Interval Value          */
    uint32_t PICNT:12;                  /**< bit: 20..31  Periodic Interval Counter                */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PIT_PIIR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PIT_PIIR_OFFSET                     (0x0C)                                        /**<  (PIT_PIIR) Periodic Interval Image Register  Offset */

#define PIT_PIIR_CPIV_Pos                   0                                              /**< (PIT_PIIR) Current Periodic Interval Value Position */
#define PIT_PIIR_CPIV_Msk                   (_U_(0xFFFFF) << PIT_PIIR_CPIV_Pos)            /**< (PIT_PIIR) Current Periodic Interval Value Mask */
#define PIT_PIIR_CPIV(value)                (PIT_PIIR_CPIV_Msk & ((value) << PIT_PIIR_CPIV_Pos))
#define PIT_PIIR_PICNT_Pos                  20                                             /**< (PIT_PIIR) Periodic Interval Counter Position */
#define PIT_PIIR_PICNT_Msk                  (_U_(0xFFF) << PIT_PIIR_PICNT_Pos)             /**< (PIT_PIIR) Periodic Interval Counter Mask */
#define PIT_PIIR_PICNT(value)               (PIT_PIIR_PICNT_Msk & ((value) << PIT_PIIR_PICNT_Pos))
#define PIT_PIIR_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (PIT_PIIR) Register MASK  (Use PIT_PIIR_Msk instead)  */
#define PIT_PIIR_Msk                        _U_(0xFFFFFFFF)                                /**< (PIT_PIIR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief PIT hardware registers */
typedef struct {  
  __IO uint32_t PIT_MR;         /**< (PIT Offset: 0x00) Mode Register */
  __I  uint32_t PIT_SR;         /**< (PIT Offset: 0x04) Status Register */
  __I  uint32_t PIT_PIVR;       /**< (PIT Offset: 0x08) Periodic Interval Value Register */
  __I  uint32_t PIT_PIIR;       /**< (PIT Offset: 0x0C) Periodic Interval Image Register */
} Pit;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief PIT hardware registers */
typedef struct {  
  __IO PIT_MR_Type                    PIT_MR;         /**< Offset: 0x00 (R/W  32) Mode Register */
  __I  PIT_SR_Type                    PIT_SR;         /**< Offset: 0x04 (R/   32) Status Register */
  __I  PIT_PIVR_Type                  PIT_PIVR;       /**< Offset: 0x08 (R/   32) Periodic Interval Value Register */
  __I  PIT_PIIR_Type                  PIT_PIIR;       /**< Offset: 0x0C (R/   32) Periodic Interval Image Register */
} Pit;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Periodic Interval Timer */

#endif /* _SAMA5D2_PIT_COMPONENT_H_ */
