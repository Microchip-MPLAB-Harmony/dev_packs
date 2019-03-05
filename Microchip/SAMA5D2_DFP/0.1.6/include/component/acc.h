/**
 * \file
 *
 * \brief Component description for ACC
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
#ifndef _SAMA5D2_ACC_COMPONENT_H_
#define _SAMA5D2_ACC_COMPONENT_H_
#define _SAMA5D2_ACC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Analog Comparator Controller
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR ACC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define ACC_6490                       /**< (ACC) Module ID */
#define REV_ACC M                      /**< (ACC) Module revision */

/* -------- ACC_CR : (ACC Offset: 0x00) (/W 32) Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset                           */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ACC_CR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ACC_CR_OFFSET                       (0x00)                                        /**<  (ACC_CR) Control Register  Offset */

#define ACC_CR_SWRST_Pos                    0                                              /**< (ACC_CR) Software Reset Position */
#define ACC_CR_SWRST_Msk                    (_U_(0x1) << ACC_CR_SWRST_Pos)                 /**< (ACC_CR) Software Reset Mask */
#define ACC_CR_SWRST                        ACC_CR_SWRST_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ACC_CR_SWRST_Msk instead */
#define ACC_CR_MASK                         _U_(0x01)                                      /**< \deprecated (ACC_CR) Register MASK  (Use ACC_CR_Msk instead)  */
#define ACC_CR_Msk                          _U_(0x01)                                      /**< (ACC_CR) Register Mask  */


/* -------- ACC_MR : (ACC Offset: 0x04) (R/W 32) Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t ACEN:1;                    /**< bit:      8  Analog Comparator Enable                 */
    uint32_t :3;                        /**< bit:  9..11  Reserved */
    uint32_t INV:1;                     /**< bit:     12  Invert Comparator Output                 */
    uint32_t :19;                       /**< bit: 13..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ACC_MR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ACC_MR_OFFSET                       (0x04)                                        /**<  (ACC_MR) Mode Register  Offset */

#define ACC_MR_ACEN_Pos                     8                                              /**< (ACC_MR) Analog Comparator Enable Position */
#define ACC_MR_ACEN_Msk                     (_U_(0x1) << ACC_MR_ACEN_Pos)                  /**< (ACC_MR) Analog Comparator Enable Mask */
#define ACC_MR_ACEN                         ACC_MR_ACEN_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use ACC_MR_ACEN_Msk instead */
#define   ACC_MR_ACEN_DIS_Val               _U_(0x0)                                       /**< (ACC_MR) Analog comparator disabled.  */
#define   ACC_MR_ACEN_EN_Val                _U_(0x1)                                       /**< (ACC_MR) Analog comparator enabled.  */
#define ACC_MR_ACEN_DIS                     (ACC_MR_ACEN_DIS_Val << ACC_MR_ACEN_Pos)       /**< (ACC_MR) Analog comparator disabled. Position  */
#define ACC_MR_ACEN_EN                      (ACC_MR_ACEN_EN_Val << ACC_MR_ACEN_Pos)        /**< (ACC_MR) Analog comparator enabled. Position  */
#define ACC_MR_INV_Pos                      12                                             /**< (ACC_MR) Invert Comparator Output Position */
#define ACC_MR_INV_Msk                      (_U_(0x1) << ACC_MR_INV_Pos)                   /**< (ACC_MR) Invert Comparator Output Mask */
#define ACC_MR_INV                          ACC_MR_INV_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use ACC_MR_INV_Msk instead */
#define   ACC_MR_INV_DIS_Val                _U_(0x0)                                       /**< (ACC_MR) Analog comparator output is directly processed.  */
#define   ACC_MR_INV_EN_Val                 _U_(0x1)                                       /**< (ACC_MR) Analog comparator output is inverted prior to being processed.  */
#define ACC_MR_INV_DIS                      (ACC_MR_INV_DIS_Val << ACC_MR_INV_Pos)         /**< (ACC_MR) Analog comparator output is directly processed. Position  */
#define ACC_MR_INV_EN                       (ACC_MR_INV_EN_Val << ACC_MR_INV_Pos)          /**< (ACC_MR) Analog comparator output is inverted prior to being processed. Position  */
#define ACC_MR_MASK                         _U_(0x1100)                                    /**< \deprecated (ACC_MR) Register MASK  (Use ACC_MR_Msk instead)  */
#define ACC_MR_Msk                          _U_(0x1100)                                    /**< (ACC_MR) Register Mask  */


/* -------- ACC_WPMR : (ACC Offset: 0xe4) (R/W 32) Write Protection Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPEN:1;                    /**< bit:      0  Write Protection Enable                  */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPKEY:24;                  /**< bit:  8..31  Write Protection Key                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ACC_WPMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ACC_WPMR_OFFSET                     (0xE4)                                        /**<  (ACC_WPMR) Write Protection Mode Register  Offset */

#define ACC_WPMR_WPEN_Pos                   0                                              /**< (ACC_WPMR) Write Protection Enable Position */
#define ACC_WPMR_WPEN_Msk                   (_U_(0x1) << ACC_WPMR_WPEN_Pos)                /**< (ACC_WPMR) Write Protection Enable Mask */
#define ACC_WPMR_WPEN                       ACC_WPMR_WPEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ACC_WPMR_WPEN_Msk instead */
#define ACC_WPMR_WPKEY_Pos                  8                                              /**< (ACC_WPMR) Write Protection Key Position */
#define ACC_WPMR_WPKEY_Msk                  (_U_(0xFFFFFF) << ACC_WPMR_WPKEY_Pos)          /**< (ACC_WPMR) Write Protection Key Mask */
#define ACC_WPMR_WPKEY(value)               (ACC_WPMR_WPKEY_Msk & ((value) << ACC_WPMR_WPKEY_Pos))
#define   ACC_WPMR_WPKEY_PASSWD_Val         _U_(0x414343)                                  /**< (ACC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0.  */
#define ACC_WPMR_WPKEY_PASSWD               (ACC_WPMR_WPKEY_PASSWD_Val << ACC_WPMR_WPKEY_Pos)  /**< (ACC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0. Position  */
#define ACC_WPMR_MASK                       _U_(0xFFFFFF01)                                /**< \deprecated (ACC_WPMR) Register MASK  (Use ACC_WPMR_Msk instead)  */
#define ACC_WPMR_Msk                        _U_(0xFFFFFF01)                                /**< (ACC_WPMR) Register Mask  */


/* -------- ACC_WPSR : (ACC Offset: 0xe8) (R/ 32) Write Protection Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPVS:1;                    /**< bit:      0  Write Protection Violation Status        */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ACC_WPSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ACC_WPSR_OFFSET                     (0xE8)                                        /**<  (ACC_WPSR) Write Protection Status Register  Offset */

#define ACC_WPSR_WPVS_Pos                   0                                              /**< (ACC_WPSR) Write Protection Violation Status Position */
#define ACC_WPSR_WPVS_Msk                   (_U_(0x1) << ACC_WPSR_WPVS_Pos)                /**< (ACC_WPSR) Write Protection Violation Status Mask */
#define ACC_WPSR_WPVS                       ACC_WPSR_WPVS_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ACC_WPSR_WPVS_Msk instead */
#define ACC_WPSR_MASK                       _U_(0x01)                                      /**< \deprecated (ACC_WPSR) Register MASK  (Use ACC_WPSR_Msk instead)  */
#define ACC_WPSR_Msk                        _U_(0x01)                                      /**< (ACC_WPSR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief ACC hardware registers */
typedef struct {  
  __O  uint32_t ACC_CR;         /**< (ACC Offset: 0x00) Control Register */
  __IO uint32_t ACC_MR;         /**< (ACC Offset: 0x04) Mode Register */
  __I  uint8_t                        Reserved1[220];
  __IO uint32_t ACC_WPMR;       /**< (ACC Offset: 0xE4) Write Protection Mode Register */
  __I  uint32_t ACC_WPSR;       /**< (ACC Offset: 0xE8) Write Protection Status Register */
} Acc;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief ACC hardware registers */
typedef struct {  
  __O  ACC_CR_Type                    ACC_CR;         /**< Offset: 0x00 ( /W  32) Control Register */
  __IO ACC_MR_Type                    ACC_MR;         /**< Offset: 0x04 (R/W  32) Mode Register */
  __I  uint8_t                        Reserved1[220];
  __IO ACC_WPMR_Type                  ACC_WPMR;       /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I  ACC_WPSR_Type                  ACC_WPSR;       /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
} Acc;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Analog Comparator Controller */

#endif /* _SAMA5D2_ACC_COMPONENT_H_ */
