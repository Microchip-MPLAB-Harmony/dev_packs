/**
 * \file
 *
 * \brief Component description for SFC
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
#ifndef _SAMA5D2_SFC_COMPONENT_H_
#define _SAMA5D2_SFC_COMPONENT_H_
#define _SAMA5D2_SFC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Secure Fuse Controller
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SFC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define SFC_11170                      /**< (SFC) Module ID */
#define REV_SFC I                      /**< (SFC) Module revision */

/* -------- SFC_KR : (SFC Offset: 0x00) (/W 32) SFC Key Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t KEY:8;                     /**< bit:   0..7  Key Code                                 */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFC_KR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFC_KR_OFFSET                       (0x00)                                        /**<  (SFC_KR) SFC Key Register  Offset */

#define SFC_KR_KEY_Pos                      0                                              /**< (SFC_KR) Key Code Position */
#define SFC_KR_KEY_Msk                      (_U_(0xFF) << SFC_KR_KEY_Pos)                  /**< (SFC_KR) Key Code Mask */
#define SFC_KR_KEY(value)                   (SFC_KR_KEY_Msk & ((value) << SFC_KR_KEY_Pos))
#define SFC_KR_MASK                         _U_(0xFF)                                      /**< \deprecated (SFC_KR) Register MASK  (Use SFC_KR_Msk instead)  */
#define SFC_KR_Msk                          _U_(0xFF)                                      /**< (SFC_KR) Register Mask  */


/* -------- SFC_MR : (SFC Offset: 0x04) (R/W 32) SFC Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MSK:1;                     /**< bit:      0  Mask Data Registers                      */
    uint32_t :3;                        /**< bit:   1..3  Reserved */
    uint32_t SASEL:1;                   /**< bit:      4  Sense Amplifier Selection                */
    uint32_t :27;                       /**< bit:  5..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFC_MR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFC_MR_OFFSET                       (0x04)                                        /**<  (SFC_MR) SFC Mode Register  Offset */

#define SFC_MR_MSK_Pos                      0                                              /**< (SFC_MR) Mask Data Registers Position */
#define SFC_MR_MSK_Msk                      (_U_(0x1) << SFC_MR_MSK_Pos)                   /**< (SFC_MR) Mask Data Registers Mask */
#define SFC_MR_MSK                          SFC_MR_MSK_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFC_MR_MSK_Msk instead */
#define SFC_MR_SASEL_Pos                    4                                              /**< (SFC_MR) Sense Amplifier Selection Position */
#define SFC_MR_SASEL_Msk                    (_U_(0x1) << SFC_MR_SASEL_Pos)                 /**< (SFC_MR) Sense Amplifier Selection Mask */
#define SFC_MR_SASEL                        SFC_MR_SASEL_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFC_MR_SASEL_Msk instead */
#define SFC_MR_MASK                         _U_(0x11)                                      /**< \deprecated (SFC_MR) Register MASK  (Use SFC_MR_Msk instead)  */
#define SFC_MR_Msk                          _U_(0x11)                                      /**< (SFC_MR) Register Mask  */


/* -------- SFC_IER : (SFC Offset: 0x10) (/W 32) SFC Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PGMC:1;                    /**< bit:      0  Programming Sequence Completed Interrupt Enable */
    uint32_t PGMF:1;                    /**< bit:      1  Programming Sequence Failed Interrupt Enable */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t LCHECK:1;                  /**< bit:      4  Live Integrity Check Error Interrupt Enable */
    uint32_t :12;                       /**< bit:  5..16  Reserved */
    uint32_t ACE:1;                     /**< bit:     17  Area Check Error Interrupt Enable        */
    uint32_t :14;                       /**< bit: 18..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFC_IER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFC_IER_OFFSET                      (0x10)                                        /**<  (SFC_IER) SFC Interrupt Enable Register  Offset */

#define SFC_IER_PGMC_Pos                    0                                              /**< (SFC_IER) Programming Sequence Completed Interrupt Enable Position */
#define SFC_IER_PGMC_Msk                    (_U_(0x1) << SFC_IER_PGMC_Pos)                 /**< (SFC_IER) Programming Sequence Completed Interrupt Enable Mask */
#define SFC_IER_PGMC                        SFC_IER_PGMC_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFC_IER_PGMC_Msk instead */
#define SFC_IER_PGMF_Pos                    1                                              /**< (SFC_IER) Programming Sequence Failed Interrupt Enable Position */
#define SFC_IER_PGMF_Msk                    (_U_(0x1) << SFC_IER_PGMF_Pos)                 /**< (SFC_IER) Programming Sequence Failed Interrupt Enable Mask */
#define SFC_IER_PGMF                        SFC_IER_PGMF_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFC_IER_PGMF_Msk instead */
#define SFC_IER_LCHECK_Pos                  4                                              /**< (SFC_IER) Live Integrity Check Error Interrupt Enable Position */
#define SFC_IER_LCHECK_Msk                  (_U_(0x1) << SFC_IER_LCHECK_Pos)               /**< (SFC_IER) Live Integrity Check Error Interrupt Enable Mask */
#define SFC_IER_LCHECK                      SFC_IER_LCHECK_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFC_IER_LCHECK_Msk instead */
#define SFC_IER_ACE_Pos                     17                                             /**< (SFC_IER) Area Check Error Interrupt Enable Position */
#define SFC_IER_ACE_Msk                     (_U_(0x1) << SFC_IER_ACE_Pos)                  /**< (SFC_IER) Area Check Error Interrupt Enable Mask */
#define SFC_IER_ACE                         SFC_IER_ACE_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFC_IER_ACE_Msk instead */
#define SFC_IER_MASK                        _U_(0x20013)                                   /**< \deprecated (SFC_IER) Register MASK  (Use SFC_IER_Msk instead)  */
#define SFC_IER_Msk                         _U_(0x20013)                                   /**< (SFC_IER) Register Mask  */


/* -------- SFC_IDR : (SFC Offset: 0x14) (/W 32) SFC Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PGMC:1;                    /**< bit:      0  Programming Sequence Completed Interrupt Disable */
    uint32_t PGMF:1;                    /**< bit:      1  Programming Sequence Failed Interrupt Disable */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t LCHECK:1;                  /**< bit:      4  Live Integrity Check Error Interrupt Disable */
    uint32_t :12;                       /**< bit:  5..16  Reserved */
    uint32_t ACE:1;                     /**< bit:     17  Area Check Error Interrupt Disable       */
    uint32_t :14;                       /**< bit: 18..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFC_IDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFC_IDR_OFFSET                      (0x14)                                        /**<  (SFC_IDR) SFC Interrupt Disable Register  Offset */

#define SFC_IDR_PGMC_Pos                    0                                              /**< (SFC_IDR) Programming Sequence Completed Interrupt Disable Position */
#define SFC_IDR_PGMC_Msk                    (_U_(0x1) << SFC_IDR_PGMC_Pos)                 /**< (SFC_IDR) Programming Sequence Completed Interrupt Disable Mask */
#define SFC_IDR_PGMC                        SFC_IDR_PGMC_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFC_IDR_PGMC_Msk instead */
#define SFC_IDR_PGMF_Pos                    1                                              /**< (SFC_IDR) Programming Sequence Failed Interrupt Disable Position */
#define SFC_IDR_PGMF_Msk                    (_U_(0x1) << SFC_IDR_PGMF_Pos)                 /**< (SFC_IDR) Programming Sequence Failed Interrupt Disable Mask */
#define SFC_IDR_PGMF                        SFC_IDR_PGMF_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFC_IDR_PGMF_Msk instead */
#define SFC_IDR_LCHECK_Pos                  4                                              /**< (SFC_IDR) Live Integrity Check Error Interrupt Disable Position */
#define SFC_IDR_LCHECK_Msk                  (_U_(0x1) << SFC_IDR_LCHECK_Pos)               /**< (SFC_IDR) Live Integrity Check Error Interrupt Disable Mask */
#define SFC_IDR_LCHECK                      SFC_IDR_LCHECK_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFC_IDR_LCHECK_Msk instead */
#define SFC_IDR_ACE_Pos                     17                                             /**< (SFC_IDR) Area Check Error Interrupt Disable Position */
#define SFC_IDR_ACE_Msk                     (_U_(0x1) << SFC_IDR_ACE_Pos)                  /**< (SFC_IDR) Area Check Error Interrupt Disable Mask */
#define SFC_IDR_ACE                         SFC_IDR_ACE_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFC_IDR_ACE_Msk instead */
#define SFC_IDR_MASK                        _U_(0x20013)                                   /**< \deprecated (SFC_IDR) Register MASK  (Use SFC_IDR_Msk instead)  */
#define SFC_IDR_Msk                         _U_(0x20013)                                   /**< (SFC_IDR) Register Mask  */


/* -------- SFC_IMR : (SFC Offset: 0x18) (R/ 32) SFC Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PGMC:1;                    /**< bit:      0  Programming Sequence Completed Interrupt Mask */
    uint32_t PGMF:1;                    /**< bit:      1  Programming Sequence Failed Interrupt Mask */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t LCHECK:1;                  /**< bit:      4  Live Integrity Checking Error Interrupt Mask */
    uint32_t :12;                       /**< bit:  5..16  Reserved */
    uint32_t ACE:1;                     /**< bit:     17  Area Check Error Interrupt Mask          */
    uint32_t :14;                       /**< bit: 18..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFC_IMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFC_IMR_OFFSET                      (0x18)                                        /**<  (SFC_IMR) SFC Interrupt Mask Register  Offset */

#define SFC_IMR_PGMC_Pos                    0                                              /**< (SFC_IMR) Programming Sequence Completed Interrupt Mask Position */
#define SFC_IMR_PGMC_Msk                    (_U_(0x1) << SFC_IMR_PGMC_Pos)                 /**< (SFC_IMR) Programming Sequence Completed Interrupt Mask Mask */
#define SFC_IMR_PGMC                        SFC_IMR_PGMC_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFC_IMR_PGMC_Msk instead */
#define SFC_IMR_PGMF_Pos                    1                                              /**< (SFC_IMR) Programming Sequence Failed Interrupt Mask Position */
#define SFC_IMR_PGMF_Msk                    (_U_(0x1) << SFC_IMR_PGMF_Pos)                 /**< (SFC_IMR) Programming Sequence Failed Interrupt Mask Mask */
#define SFC_IMR_PGMF                        SFC_IMR_PGMF_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFC_IMR_PGMF_Msk instead */
#define SFC_IMR_LCHECK_Pos                  4                                              /**< (SFC_IMR) Live Integrity Checking Error Interrupt Mask Position */
#define SFC_IMR_LCHECK_Msk                  (_U_(0x1) << SFC_IMR_LCHECK_Pos)               /**< (SFC_IMR) Live Integrity Checking Error Interrupt Mask Mask */
#define SFC_IMR_LCHECK                      SFC_IMR_LCHECK_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFC_IMR_LCHECK_Msk instead */
#define SFC_IMR_ACE_Pos                     17                                             /**< (SFC_IMR) Area Check Error Interrupt Mask Position */
#define SFC_IMR_ACE_Msk                     (_U_(0x1) << SFC_IMR_ACE_Pos)                  /**< (SFC_IMR) Area Check Error Interrupt Mask Mask */
#define SFC_IMR_ACE                         SFC_IMR_ACE_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFC_IMR_ACE_Msk instead */
#define SFC_IMR_MASK                        _U_(0x20013)                                   /**< \deprecated (SFC_IMR) Register MASK  (Use SFC_IMR_Msk instead)  */
#define SFC_IMR_Msk                         _U_(0x20013)                                   /**< (SFC_IMR) Register Mask  */


/* -------- SFC_SR : (SFC Offset: 0x1c) (R/ 32) SFC Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PGMC:1;                    /**< bit:      0  Programming Sequence Completed (cleared on read) */
    uint32_t PGMF:1;                    /**< bit:      1  Programming Sequence Failed (cleared on read) */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t LCHECK:1;                  /**< bit:      4  Live Integrity Checking Error (cleared on read) */
    uint32_t :11;                       /**< bit:  5..15  Reserved */
    uint32_t APLE:1;                    /**< bit:     16  Area Programming Lock Error (cleared on read) */
    uint32_t ACE:1;                     /**< bit:     17  Area Check Error (cleared on read)       */
    uint32_t :14;                       /**< bit: 18..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFC_SR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFC_SR_OFFSET                       (0x1C)                                        /**<  (SFC_SR) SFC Status Register  Offset */

#define SFC_SR_PGMC_Pos                     0                                              /**< (SFC_SR) Programming Sequence Completed (cleared on read) Position */
#define SFC_SR_PGMC_Msk                     (_U_(0x1) << SFC_SR_PGMC_Pos)                  /**< (SFC_SR) Programming Sequence Completed (cleared on read) Mask */
#define SFC_SR_PGMC                         SFC_SR_PGMC_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFC_SR_PGMC_Msk instead */
#define SFC_SR_PGMF_Pos                     1                                              /**< (SFC_SR) Programming Sequence Failed (cleared on read) Position */
#define SFC_SR_PGMF_Msk                     (_U_(0x1) << SFC_SR_PGMF_Pos)                  /**< (SFC_SR) Programming Sequence Failed (cleared on read) Mask */
#define SFC_SR_PGMF                         SFC_SR_PGMF_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFC_SR_PGMF_Msk instead */
#define SFC_SR_LCHECK_Pos                   4                                              /**< (SFC_SR) Live Integrity Checking Error (cleared on read) Position */
#define SFC_SR_LCHECK_Msk                   (_U_(0x1) << SFC_SR_LCHECK_Pos)                /**< (SFC_SR) Live Integrity Checking Error (cleared on read) Mask */
#define SFC_SR_LCHECK                       SFC_SR_LCHECK_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFC_SR_LCHECK_Msk instead */
#define SFC_SR_APLE_Pos                     16                                             /**< (SFC_SR) Area Programming Lock Error (cleared on read) Position */
#define SFC_SR_APLE_Msk                     (_U_(0x1) << SFC_SR_APLE_Pos)                  /**< (SFC_SR) Area Programming Lock Error (cleared on read) Mask */
#define SFC_SR_APLE                         SFC_SR_APLE_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFC_SR_APLE_Msk instead */
#define SFC_SR_ACE_Pos                      17                                             /**< (SFC_SR) Area Check Error (cleared on read) Position */
#define SFC_SR_ACE_Msk                      (_U_(0x1) << SFC_SR_ACE_Pos)                   /**< (SFC_SR) Area Check Error (cleared on read) Mask */
#define SFC_SR_ACE                          SFC_SR_ACE_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFC_SR_ACE_Msk instead */
#define SFC_SR_MASK                         _U_(0x30013)                                   /**< \deprecated (SFC_SR) Register MASK  (Use SFC_SR_Msk instead)  */
#define SFC_SR_Msk                          _U_(0x30013)                                   /**< (SFC_SR) Register Mask  */


/* -------- SFC_DR : (SFC Offset: 0x20) (R/W 32) SFC Data Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DATA:32;                   /**< bit:  0..31  Fuse Data                                */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFC_DR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFC_DR_OFFSET                       (0x20)                                        /**<  (SFC_DR) SFC Data Register  Offset */

#define SFC_DR_DATA_Pos                     0                                              /**< (SFC_DR) Fuse Data Position */
#define SFC_DR_DATA_Msk                     (_U_(0xFFFFFFFF) << SFC_DR_DATA_Pos)           /**< (SFC_DR) Fuse Data Mask */
#define SFC_DR_DATA(value)                  (SFC_DR_DATA_Msk & ((value) << SFC_DR_DATA_Pos))
#define SFC_DR_MASK                         _U_(0xFFFFFFFF)                                /**< \deprecated (SFC_DR) Register MASK  (Use SFC_DR_Msk instead)  */
#define SFC_DR_Msk                          _U_(0xFFFFFFFF)                                /**< (SFC_DR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief SFC hardware registers */
typedef struct {  
  __O  uint32_t SFC_KR;         /**< (SFC Offset: 0x00) SFC Key Register */
  __IO uint32_t SFC_MR;         /**< (SFC Offset: 0x04) SFC Mode Register */
  __I  uint8_t                        Reserved1[8];
  __O  uint32_t SFC_IER;        /**< (SFC Offset: 0x10) SFC Interrupt Enable Register */
  __O  uint32_t SFC_IDR;        /**< (SFC Offset: 0x14) SFC Interrupt Disable Register */
  __I  uint32_t SFC_IMR;        /**< (SFC Offset: 0x18) SFC Interrupt Mask Register */
  __I  uint32_t SFC_SR;         /**< (SFC Offset: 0x1C) SFC Status Register */
  __IO uint32_t SFC_DR[17];     /**< (SFC Offset: 0x20) SFC Data Register */
} Sfc;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief SFC hardware registers */
typedef struct {  
  __O  SFC_KR_Type                    SFC_KR;         /**< Offset: 0x00 ( /W  32) SFC Key Register */
  __IO SFC_MR_Type                    SFC_MR;         /**< Offset: 0x04 (R/W  32) SFC Mode Register */
  __I  uint8_t                        Reserved1[8];
  __O  SFC_IER_Type                   SFC_IER;        /**< Offset: 0x10 ( /W  32) SFC Interrupt Enable Register */
  __O  SFC_IDR_Type                   SFC_IDR;        /**< Offset: 0x14 ( /W  32) SFC Interrupt Disable Register */
  __I  SFC_IMR_Type                   SFC_IMR;        /**< Offset: 0x18 (R/   32) SFC Interrupt Mask Register */
  __I  SFC_SR_Type                    SFC_SR;         /**< Offset: 0x1C (R/   32) SFC Status Register */
  __IO SFC_DR_Type                    SFC_DR[17];     /**< Offset: 0x20 (R/W  32) SFC Data Register */
} Sfc;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Secure Fuse Controller */

#endif /* _SAMA5D2_SFC_COMPONENT_H_ */
