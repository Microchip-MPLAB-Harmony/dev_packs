/**
 * \file
 *
 * \brief Component description for AESB
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
#ifndef _SAMA5D2_AESB_COMPONENT_H_
#define _SAMA5D2_AESB_COMPONENT_H_
#define _SAMA5D2_AESB_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Advanced Encryption Standard Bridge
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR AESB */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define AESB_11145                      /**< (AESB) Module ID */
#define REV_AESB E                      /**< (AESB) Module revision */

/* -------- AESB_CR : (AESB Offset: 0x00) (/W 32) Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t START:1;                   /**< bit:      0  Start Processing                         */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t SWRST:1;                   /**< bit:      8  Software Reset                           */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AESB_CR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESB_CR_OFFSET                      (0x00)                                        /**<  (AESB_CR) Control Register  Offset */

#define AESB_CR_START_Pos                   0                                              /**< (AESB_CR) Start Processing Position */
#define AESB_CR_START_Msk                   (_U_(0x1) << AESB_CR_START_Pos)                /**< (AESB_CR) Start Processing Mask */
#define AESB_CR_START                       AESB_CR_START_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AESB_CR_START_Msk instead */
#define AESB_CR_SWRST_Pos                   8                                              /**< (AESB_CR) Software Reset Position */
#define AESB_CR_SWRST_Msk                   (_U_(0x1) << AESB_CR_SWRST_Pos)                /**< (AESB_CR) Software Reset Mask */
#define AESB_CR_SWRST                       AESB_CR_SWRST_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AESB_CR_SWRST_Msk instead */
#define AESB_CR_MASK                        _U_(0x101)                                     /**< \deprecated (AESB_CR) Register MASK  (Use AESB_CR_Msk instead)  */
#define AESB_CR_Msk                         _U_(0x101)                                     /**< (AESB_CR) Register Mask  */


/* -------- AESB_MR : (AESB Offset: 0x04) (R/W 32) Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CIPHER:1;                  /**< bit:      0  Processing Mode                          */
    uint32_t :1;                        /**< bit:      1  Reserved */
    uint32_t AAHB:1;                    /**< bit:      2  Automatic Bridge Mode                    */
    uint32_t DUALBUFF:1;                /**< bit:      3  Dual Input Buffer                        */
    uint32_t PROCDLY:4;                 /**< bit:   4..7  Processing Delay                         */
    uint32_t SMOD:2;                    /**< bit:   8..9  Start Mode                               */
    uint32_t :2;                        /**< bit: 10..11  Reserved */
    uint32_t OPMOD:3;                   /**< bit: 12..14  Operating Mode                           */
    uint32_t LOD:1;                     /**< bit:     15  Last Output Data Mode                    */
    uint32_t :4;                        /**< bit: 16..19  Reserved */
    uint32_t CKEY:4;                    /**< bit: 20..23  Key                                      */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AESB_MR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESB_MR_OFFSET                      (0x04)                                        /**<  (AESB_MR) Mode Register  Offset */

#define AESB_MR_CIPHER_Pos                  0                                              /**< (AESB_MR) Processing Mode Position */
#define AESB_MR_CIPHER_Msk                  (_U_(0x1) << AESB_MR_CIPHER_Pos)               /**< (AESB_MR) Processing Mode Mask */
#define AESB_MR_CIPHER                      AESB_MR_CIPHER_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AESB_MR_CIPHER_Msk instead */
#define AESB_MR_AAHB_Pos                    2                                              /**< (AESB_MR) Automatic Bridge Mode Position */
#define AESB_MR_AAHB_Msk                    (_U_(0x1) << AESB_MR_AAHB_Pos)                 /**< (AESB_MR) Automatic Bridge Mode Mask */
#define AESB_MR_AAHB                        AESB_MR_AAHB_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use AESB_MR_AAHB_Msk instead */
#define AESB_MR_DUALBUFF_Pos                3                                              /**< (AESB_MR) Dual Input Buffer Position */
#define AESB_MR_DUALBUFF_Msk                (_U_(0x1) << AESB_MR_DUALBUFF_Pos)             /**< (AESB_MR) Dual Input Buffer Mask */
#define AESB_MR_DUALBUFF                    AESB_MR_DUALBUFF_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use AESB_MR_DUALBUFF_Msk instead */
#define   AESB_MR_DUALBUFF_INACTIVE_Val     _U_(0x0)                                       /**< (AESB_MR) AESB_IDATARx cannot be written during processing of previous block.  */
#define   AESB_MR_DUALBUFF_ACTIVE_Val       _U_(0x1)                                       /**< (AESB_MR) AESB_IDATARx can be written during processing of previous block when SMOD = 0x2. It speeds up the overall runtime of large files.  */
#define AESB_MR_DUALBUFF_INACTIVE           (AESB_MR_DUALBUFF_INACTIVE_Val << AESB_MR_DUALBUFF_Pos)  /**< (AESB_MR) AESB_IDATARx cannot be written during processing of previous block. Position  */
#define AESB_MR_DUALBUFF_ACTIVE             (AESB_MR_DUALBUFF_ACTIVE_Val << AESB_MR_DUALBUFF_Pos)  /**< (AESB_MR) AESB_IDATARx can be written during processing of previous block when SMOD = 0x2. It speeds up the overall runtime of large files. Position  */
#define AESB_MR_PROCDLY_Pos                 4                                              /**< (AESB_MR) Processing Delay Position */
#define AESB_MR_PROCDLY_Msk                 (_U_(0xF) << AESB_MR_PROCDLY_Pos)              /**< (AESB_MR) Processing Delay Mask */
#define AESB_MR_PROCDLY(value)              (AESB_MR_PROCDLY_Msk & ((value) << AESB_MR_PROCDLY_Pos))
#define AESB_MR_SMOD_Pos                    8                                              /**< (AESB_MR) Start Mode Position */
#define AESB_MR_SMOD_Msk                    (_U_(0x3) << AESB_MR_SMOD_Pos)                 /**< (AESB_MR) Start Mode Mask */
#define AESB_MR_SMOD(value)                 (AESB_MR_SMOD_Msk & ((value) << AESB_MR_SMOD_Pos))
#define   AESB_MR_SMOD_MANUAL_START_Val     _U_(0x0)                                       /**< (AESB_MR) Manual mode  */
#define   AESB_MR_SMOD_AUTO_START_Val       _U_(0x1)                                       /**< (AESB_MR) Auto mode  */
#define   AESB_MR_SMOD_IDATAR0_START_Val    _U_(0x2)                                       /**< (AESB_MR) AESB_IDATAR0 access only Auto mode  */
#define AESB_MR_SMOD_MANUAL_START           (AESB_MR_SMOD_MANUAL_START_Val << AESB_MR_SMOD_Pos)  /**< (AESB_MR) Manual mode Position  */
#define AESB_MR_SMOD_AUTO_START             (AESB_MR_SMOD_AUTO_START_Val << AESB_MR_SMOD_Pos)  /**< (AESB_MR) Auto mode Position  */
#define AESB_MR_SMOD_IDATAR0_START          (AESB_MR_SMOD_IDATAR0_START_Val << AESB_MR_SMOD_Pos)  /**< (AESB_MR) AESB_IDATAR0 access only Auto mode Position  */
#define AESB_MR_OPMOD_Pos                   12                                             /**< (AESB_MR) Operating Mode Position */
#define AESB_MR_OPMOD_Msk                   (_U_(0x7) << AESB_MR_OPMOD_Pos)                /**< (AESB_MR) Operating Mode Mask */
#define AESB_MR_OPMOD(value)                (AESB_MR_OPMOD_Msk & ((value) << AESB_MR_OPMOD_Pos))
#define   AESB_MR_OPMOD_ECB_Val             _U_(0x0)                                       /**< (AESB_MR) Electronic Code Book mode  */
#define   AESB_MR_OPMOD_CBC_Val             _U_(0x1)                                       /**< (AESB_MR) Cipher Block Chaining mode  */
#define   AESB_MR_OPMOD_CTR_Val             _U_(0x4)                                       /**< (AESB_MR) Counter mode (16-bit internal counter)  */
#define AESB_MR_OPMOD_ECB                   (AESB_MR_OPMOD_ECB_Val << AESB_MR_OPMOD_Pos)   /**< (AESB_MR) Electronic Code Book mode Position  */
#define AESB_MR_OPMOD_CBC                   (AESB_MR_OPMOD_CBC_Val << AESB_MR_OPMOD_Pos)   /**< (AESB_MR) Cipher Block Chaining mode Position  */
#define AESB_MR_OPMOD_CTR                   (AESB_MR_OPMOD_CTR_Val << AESB_MR_OPMOD_Pos)   /**< (AESB_MR) Counter mode (16-bit internal counter) Position  */
#define AESB_MR_LOD_Pos                     15                                             /**< (AESB_MR) Last Output Data Mode Position */
#define AESB_MR_LOD_Msk                     (_U_(0x1) << AESB_MR_LOD_Pos)                  /**< (AESB_MR) Last Output Data Mode Mask */
#define AESB_MR_LOD                         AESB_MR_LOD_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use AESB_MR_LOD_Msk instead */
#define AESB_MR_CKEY_Pos                    20                                             /**< (AESB_MR) Key Position */
#define AESB_MR_CKEY_Msk                    (_U_(0xF) << AESB_MR_CKEY_Pos)                 /**< (AESB_MR) Key Mask */
#define AESB_MR_CKEY(value)                 (AESB_MR_CKEY_Msk & ((value) << AESB_MR_CKEY_Pos))
#define   AESB_MR_CKEY_PASSWD_Val           _U_(0xE)                                       /**< (AESB_MR) This field must be written with 0xE the first time that AESB_MR is programmed. For subsequent programming of the AESB_MR register, any value can be written, including that of 0xE.Always reads as 0.  */
#define AESB_MR_CKEY_PASSWD                 (AESB_MR_CKEY_PASSWD_Val << AESB_MR_CKEY_Pos)  /**< (AESB_MR) This field must be written with 0xE the first time that AESB_MR is programmed. For subsequent programming of the AESB_MR register, any value can be written, including that of 0xE.Always reads as 0. Position  */
#define AESB_MR_MASK                        _U_(0xF0F3FD)                                  /**< \deprecated (AESB_MR) Register MASK  (Use AESB_MR_Msk instead)  */
#define AESB_MR_Msk                         _U_(0xF0F3FD)                                  /**< (AESB_MR) Register Mask  */


/* -------- AESB_IER : (AESB Offset: 0x10) (/W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DATRDY:1;                  /**< bit:      0  Data Ready Interrupt Enable              */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t URAD:1;                    /**< bit:      8  Unspecified Register Access Detection Interrupt Enable */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AESB_IER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESB_IER_OFFSET                     (0x10)                                        /**<  (AESB_IER) Interrupt Enable Register  Offset */

#define AESB_IER_DATRDY_Pos                 0                                              /**< (AESB_IER) Data Ready Interrupt Enable Position */
#define AESB_IER_DATRDY_Msk                 (_U_(0x1) << AESB_IER_DATRDY_Pos)              /**< (AESB_IER) Data Ready Interrupt Enable Mask */
#define AESB_IER_DATRDY                     AESB_IER_DATRDY_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AESB_IER_DATRDY_Msk instead */
#define AESB_IER_URAD_Pos                   8                                              /**< (AESB_IER) Unspecified Register Access Detection Interrupt Enable Position */
#define AESB_IER_URAD_Msk                   (_U_(0x1) << AESB_IER_URAD_Pos)                /**< (AESB_IER) Unspecified Register Access Detection Interrupt Enable Mask */
#define AESB_IER_URAD                       AESB_IER_URAD_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AESB_IER_URAD_Msk instead */
#define AESB_IER_MASK                       _U_(0x101)                                     /**< \deprecated (AESB_IER) Register MASK  (Use AESB_IER_Msk instead)  */
#define AESB_IER_Msk                        _U_(0x101)                                     /**< (AESB_IER) Register Mask  */


/* -------- AESB_IDR : (AESB Offset: 0x14) (/W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DATRDY:1;                  /**< bit:      0  Data Ready Interrupt Disable             */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t URAD:1;                    /**< bit:      8  Unspecified Register Access Detection Interrupt Disable */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AESB_IDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESB_IDR_OFFSET                     (0x14)                                        /**<  (AESB_IDR) Interrupt Disable Register  Offset */

#define AESB_IDR_DATRDY_Pos                 0                                              /**< (AESB_IDR) Data Ready Interrupt Disable Position */
#define AESB_IDR_DATRDY_Msk                 (_U_(0x1) << AESB_IDR_DATRDY_Pos)              /**< (AESB_IDR) Data Ready Interrupt Disable Mask */
#define AESB_IDR_DATRDY                     AESB_IDR_DATRDY_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AESB_IDR_DATRDY_Msk instead */
#define AESB_IDR_URAD_Pos                   8                                              /**< (AESB_IDR) Unspecified Register Access Detection Interrupt Disable Position */
#define AESB_IDR_URAD_Msk                   (_U_(0x1) << AESB_IDR_URAD_Pos)                /**< (AESB_IDR) Unspecified Register Access Detection Interrupt Disable Mask */
#define AESB_IDR_URAD                       AESB_IDR_URAD_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AESB_IDR_URAD_Msk instead */
#define AESB_IDR_MASK                       _U_(0x101)                                     /**< \deprecated (AESB_IDR) Register MASK  (Use AESB_IDR_Msk instead)  */
#define AESB_IDR_Msk                        _U_(0x101)                                     /**< (AESB_IDR) Register Mask  */


/* -------- AESB_IMR : (AESB Offset: 0x18) (R/ 32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DATRDY:1;                  /**< bit:      0  Data Ready Interrupt Mask                */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t URAD:1;                    /**< bit:      8  Unspecified Register Access Detection Interrupt Mask */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AESB_IMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESB_IMR_OFFSET                     (0x18)                                        /**<  (AESB_IMR) Interrupt Mask Register  Offset */

#define AESB_IMR_DATRDY_Pos                 0                                              /**< (AESB_IMR) Data Ready Interrupt Mask Position */
#define AESB_IMR_DATRDY_Msk                 (_U_(0x1) << AESB_IMR_DATRDY_Pos)              /**< (AESB_IMR) Data Ready Interrupt Mask Mask */
#define AESB_IMR_DATRDY                     AESB_IMR_DATRDY_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AESB_IMR_DATRDY_Msk instead */
#define AESB_IMR_URAD_Pos                   8                                              /**< (AESB_IMR) Unspecified Register Access Detection Interrupt Mask Position */
#define AESB_IMR_URAD_Msk                   (_U_(0x1) << AESB_IMR_URAD_Pos)                /**< (AESB_IMR) Unspecified Register Access Detection Interrupt Mask Mask */
#define AESB_IMR_URAD                       AESB_IMR_URAD_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AESB_IMR_URAD_Msk instead */
#define AESB_IMR_MASK                       _U_(0x101)                                     /**< \deprecated (AESB_IMR) Register MASK  (Use AESB_IMR_Msk instead)  */
#define AESB_IMR_Msk                        _U_(0x101)                                     /**< (AESB_IMR) Register Mask  */


/* -------- AESB_ISR : (AESB Offset: 0x1c) (R/ 32) Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DATRDY:1;                  /**< bit:      0  Data Ready                               */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t URAD:1;                    /**< bit:      8  Unspecified Register Access Detection Status */
    uint32_t :3;                        /**< bit:  9..11  Reserved */
    uint32_t URAT:4;                    /**< bit: 12..15  Unspecified Register Access              */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AESB_ISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESB_ISR_OFFSET                     (0x1C)                                        /**<  (AESB_ISR) Interrupt Status Register  Offset */

#define AESB_ISR_DATRDY_Pos                 0                                              /**< (AESB_ISR) Data Ready Position */
#define AESB_ISR_DATRDY_Msk                 (_U_(0x1) << AESB_ISR_DATRDY_Pos)              /**< (AESB_ISR) Data Ready Mask */
#define AESB_ISR_DATRDY                     AESB_ISR_DATRDY_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AESB_ISR_DATRDY_Msk instead */
#define AESB_ISR_URAD_Pos                   8                                              /**< (AESB_ISR) Unspecified Register Access Detection Status Position */
#define AESB_ISR_URAD_Msk                   (_U_(0x1) << AESB_ISR_URAD_Pos)                /**< (AESB_ISR) Unspecified Register Access Detection Status Mask */
#define AESB_ISR_URAD                       AESB_ISR_URAD_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AESB_ISR_URAD_Msk instead */
#define AESB_ISR_URAT_Pos                   12                                             /**< (AESB_ISR) Unspecified Register Access Position */
#define AESB_ISR_URAT_Msk                   (_U_(0xF) << AESB_ISR_URAT_Pos)                /**< (AESB_ISR) Unspecified Register Access Mask */
#define AESB_ISR_URAT(value)                (AESB_ISR_URAT_Msk & ((value) << AESB_ISR_URAT_Pos))
#define   AESB_ISR_URAT_IDR_WR_PROCESSING_Val _U_(0x0)                                       /**< (AESB_ISR) Input Data Register written during the data processing when SMOD = 0x2 mode  */
#define   AESB_ISR_URAT_ODR_RD_PROCESSING_Val _U_(0x1)                                       /**< (AESB_ISR) Output Data Register read during the data processing  */
#define   AESB_ISR_URAT_MR_WR_PROCESSING_Val _U_(0x2)                                       /**< (AESB_ISR) Mode Register written during the data processing  */
#define   AESB_ISR_URAT_ODR_RD_SUBKGEN_Val  _U_(0x3)                                       /**< (AESB_ISR) Output Data Register read during the sub-keys generation  */
#define   AESB_ISR_URAT_MR_WR_SUBKGEN_Val   _U_(0x4)                                       /**< (AESB_ISR) Mode Register written during the sub-keys generation  */
#define   AESB_ISR_URAT_WOR_RD_ACCESS_Val   _U_(0x5)                                       /**< (AESB_ISR) Write-only register read access  */
#define AESB_ISR_URAT_IDR_WR_PROCESSING     (AESB_ISR_URAT_IDR_WR_PROCESSING_Val << AESB_ISR_URAT_Pos)  /**< (AESB_ISR) Input Data Register written during the data processing when SMOD = 0x2 mode Position  */
#define AESB_ISR_URAT_ODR_RD_PROCESSING     (AESB_ISR_URAT_ODR_RD_PROCESSING_Val << AESB_ISR_URAT_Pos)  /**< (AESB_ISR) Output Data Register read during the data processing Position  */
#define AESB_ISR_URAT_MR_WR_PROCESSING      (AESB_ISR_URAT_MR_WR_PROCESSING_Val << AESB_ISR_URAT_Pos)  /**< (AESB_ISR) Mode Register written during the data processing Position  */
#define AESB_ISR_URAT_ODR_RD_SUBKGEN        (AESB_ISR_URAT_ODR_RD_SUBKGEN_Val << AESB_ISR_URAT_Pos)  /**< (AESB_ISR) Output Data Register read during the sub-keys generation Position  */
#define AESB_ISR_URAT_MR_WR_SUBKGEN         (AESB_ISR_URAT_MR_WR_SUBKGEN_Val << AESB_ISR_URAT_Pos)  /**< (AESB_ISR) Mode Register written during the sub-keys generation Position  */
#define AESB_ISR_URAT_WOR_RD_ACCESS         (AESB_ISR_URAT_WOR_RD_ACCESS_Val << AESB_ISR_URAT_Pos)  /**< (AESB_ISR) Write-only register read access Position  */
#define AESB_ISR_MASK                       _U_(0xF101)                                    /**< \deprecated (AESB_ISR) Register MASK  (Use AESB_ISR_Msk instead)  */
#define AESB_ISR_Msk                        _U_(0xF101)                                    /**< (AESB_ISR) Register Mask  */


/* -------- AESB_KEYWR : (AESB Offset: 0x20) (/W 32) Key Word Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t KEYW:32;                   /**< bit:  0..31  Key Word                                 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AESB_KEYWR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESB_KEYWR_OFFSET                   (0x20)                                        /**<  (AESB_KEYWR) Key Word Register  Offset */

#define AESB_KEYWR_KEYW_Pos                 0                                              /**< (AESB_KEYWR) Key Word Position */
#define AESB_KEYWR_KEYW_Msk                 (_U_(0xFFFFFFFF) << AESB_KEYWR_KEYW_Pos)       /**< (AESB_KEYWR) Key Word Mask */
#define AESB_KEYWR_KEYW(value)              (AESB_KEYWR_KEYW_Msk & ((value) << AESB_KEYWR_KEYW_Pos))
#define AESB_KEYWR_MASK                     _U_(0xFFFFFFFF)                                /**< \deprecated (AESB_KEYWR) Register MASK  (Use AESB_KEYWR_Msk instead)  */
#define AESB_KEYWR_Msk                      _U_(0xFFFFFFFF)                                /**< (AESB_KEYWR) Register Mask  */


/* -------- AESB_IDATAR : (AESB Offset: 0x40) (/W 32) Input Data Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t IDATA:32;                  /**< bit:  0..31  Input Data Word                          */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AESB_IDATAR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESB_IDATAR_OFFSET                  (0x40)                                        /**<  (AESB_IDATAR) Input Data Register  Offset */

#define AESB_IDATAR_IDATA_Pos               0                                              /**< (AESB_IDATAR) Input Data Word Position */
#define AESB_IDATAR_IDATA_Msk               (_U_(0xFFFFFFFF) << AESB_IDATAR_IDATA_Pos)     /**< (AESB_IDATAR) Input Data Word Mask */
#define AESB_IDATAR_IDATA(value)            (AESB_IDATAR_IDATA_Msk & ((value) << AESB_IDATAR_IDATA_Pos))
#define AESB_IDATAR_MASK                    _U_(0xFFFFFFFF)                                /**< \deprecated (AESB_IDATAR) Register MASK  (Use AESB_IDATAR_Msk instead)  */
#define AESB_IDATAR_Msk                     _U_(0xFFFFFFFF)                                /**< (AESB_IDATAR) Register Mask  */


/* -------- AESB_ODATAR : (AESB Offset: 0x50) (R/ 32) Output Data Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ODATA:32;                  /**< bit:  0..31  Output Data                              */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AESB_ODATAR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESB_ODATAR_OFFSET                  (0x50)                                        /**<  (AESB_ODATAR) Output Data Register  Offset */

#define AESB_ODATAR_ODATA_Pos               0                                              /**< (AESB_ODATAR) Output Data Position */
#define AESB_ODATAR_ODATA_Msk               (_U_(0xFFFFFFFF) << AESB_ODATAR_ODATA_Pos)     /**< (AESB_ODATAR) Output Data Mask */
#define AESB_ODATAR_ODATA(value)            (AESB_ODATAR_ODATA_Msk & ((value) << AESB_ODATAR_ODATA_Pos))
#define AESB_ODATAR_MASK                    _U_(0xFFFFFFFF)                                /**< \deprecated (AESB_ODATAR) Register MASK  (Use AESB_ODATAR_Msk instead)  */
#define AESB_ODATAR_Msk                     _U_(0xFFFFFFFF)                                /**< (AESB_ODATAR) Register Mask  */


/* -------- AESB_IVR : (AESB Offset: 0x60) (/W 32) Initialization Vector Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t IV:32;                     /**< bit:  0..31  Initialization Vector                    */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AESB_IVR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESB_IVR_OFFSET                     (0x60)                                        /**<  (AESB_IVR) Initialization Vector Register  Offset */

#define AESB_IVR_IV_Pos                     0                                              /**< (AESB_IVR) Initialization Vector Position */
#define AESB_IVR_IV_Msk                     (_U_(0xFFFFFFFF) << AESB_IVR_IV_Pos)           /**< (AESB_IVR) Initialization Vector Mask */
#define AESB_IVR_IV(value)                  (AESB_IVR_IV_Msk & ((value) << AESB_IVR_IV_Pos))
#define AESB_IVR_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (AESB_IVR) Register MASK  (Use AESB_IVR_Msk instead)  */
#define AESB_IVR_Msk                        _U_(0xFFFFFFFF)                                /**< (AESB_IVR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief AESB hardware registers */
typedef struct {  
  __O  uint32_t AESB_CR;        /**< (AESB Offset: 0x00) Control Register */
  __IO uint32_t AESB_MR;        /**< (AESB Offset: 0x04) Mode Register */
  __I  uint8_t                        Reserved1[8];
  __O  uint32_t AESB_IER;       /**< (AESB Offset: 0x10) Interrupt Enable Register */
  __O  uint32_t AESB_IDR;       /**< (AESB Offset: 0x14) Interrupt Disable Register */
  __I  uint32_t AESB_IMR;       /**< (AESB Offset: 0x18) Interrupt Mask Register */
  __I  uint32_t AESB_ISR;       /**< (AESB Offset: 0x1C) Interrupt Status Register */
  __O  uint32_t AESB_KEYWR[4];  /**< (AESB Offset: 0x20) Key Word Register */
  __I  uint8_t                        Reserved2[16];
  __O  uint32_t AESB_IDATAR[4]; /**< (AESB Offset: 0x40) Input Data Register */
  __I  uint32_t AESB_ODATAR[4]; /**< (AESB Offset: 0x50) Output Data Register */
  __O  uint32_t AESB_IVR[4];    /**< (AESB Offset: 0x60) Initialization Vector Register */
} Aesb;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief AESB hardware registers */
typedef struct {  
  __O  AESB_CR_Type                   AESB_CR;        /**< Offset: 0x00 ( /W  32) Control Register */
  __IO AESB_MR_Type                   AESB_MR;        /**< Offset: 0x04 (R/W  32) Mode Register */
  __I  uint8_t                        Reserved1[8];
  __O  AESB_IER_Type                  AESB_IER;       /**< Offset: 0x10 ( /W  32) Interrupt Enable Register */
  __O  AESB_IDR_Type                  AESB_IDR;       /**< Offset: 0x14 ( /W  32) Interrupt Disable Register */
  __I  AESB_IMR_Type                  AESB_IMR;       /**< Offset: 0x18 (R/   32) Interrupt Mask Register */
  __I  AESB_ISR_Type                  AESB_ISR;       /**< Offset: 0x1C (R/   32) Interrupt Status Register */
  __O  AESB_KEYWR_Type                AESB_KEYWR[4];  /**< Offset: 0x20 ( /W  32) Key Word Register */
  __I  uint8_t                        Reserved2[16];
  __O  AESB_IDATAR_Type               AESB_IDATAR[4]; /**< Offset: 0x40 ( /W  32) Input Data Register */
  __I  AESB_ODATAR_Type               AESB_ODATAR[4]; /**< Offset: 0x50 (R/   32) Output Data Register */
  __O  AESB_IVR_Type                  AESB_IVR[4];    /**< Offset: 0x60 ( /W  32) Initialization Vector Register */
} Aesb;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Advanced Encryption Standard Bridge */

#endif /* _SAMA5D2_AESB_COMPONENT_H_ */
