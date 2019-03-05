/**
 * \file
 *
 * \brief Component description for TDES
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
#ifndef _SAMA5D2_TDES_COMPONENT_H_
#define _SAMA5D2_TDES_COMPONENT_H_
#define _SAMA5D2_TDES_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Triple Data Encryption Standard
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR TDES */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define TDES_6150                       /**< (TDES) Module ID */
#define REV_TDES N                      /**< (TDES) Module revision */

/* -------- TDES_CR : (TDES Offset: 0x00) (/W 32) Control Register -------- */
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
} TDES_CR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TDES_CR_OFFSET                      (0x00)                                        /**<  (TDES_CR) Control Register  Offset */

#define TDES_CR_START_Pos                   0                                              /**< (TDES_CR) Start Processing Position */
#define TDES_CR_START_Msk                   (_U_(0x1) << TDES_CR_START_Pos)                /**< (TDES_CR) Start Processing Mask */
#define TDES_CR_START                       TDES_CR_START_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TDES_CR_START_Msk instead */
#define TDES_CR_SWRST_Pos                   8                                              /**< (TDES_CR) Software Reset Position */
#define TDES_CR_SWRST_Msk                   (_U_(0x1) << TDES_CR_SWRST_Pos)                /**< (TDES_CR) Software Reset Mask */
#define TDES_CR_SWRST                       TDES_CR_SWRST_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TDES_CR_SWRST_Msk instead */
#define TDES_CR_MASK                        _U_(0x101)                                     /**< \deprecated (TDES_CR) Register MASK  (Use TDES_CR_Msk instead)  */
#define TDES_CR_Msk                         _U_(0x101)                                     /**< (TDES_CR) Register Mask  */


/* -------- TDES_MR : (TDES Offset: 0x04) (R/W 32) Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CIPHER:1;                  /**< bit:      0  Processing Mode                          */
    uint32_t TDESMOD:2;                 /**< bit:   1..2  ALGORITHM Mode                           */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t KEYMOD:1;                  /**< bit:      4  Key Mode                                 */
    uint32_t :3;                        /**< bit:   5..7  Reserved */
    uint32_t SMOD:2;                    /**< bit:   8..9  Start Mode                               */
    uint32_t :2;                        /**< bit: 10..11  Reserved */
    uint32_t OPMOD:2;                   /**< bit: 12..13  Operating Mode                           */
    uint32_t :1;                        /**< bit:     14  Reserved */
    uint32_t LOD:1;                     /**< bit:     15  Last Output Data Mode                    */
    uint32_t CFBS:2;                    /**< bit: 16..17  Cipher Feedback Data Size                */
    uint32_t :14;                       /**< bit: 18..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TDES_MR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TDES_MR_OFFSET                      (0x04)                                        /**<  (TDES_MR) Mode Register  Offset */

#define TDES_MR_CIPHER_Pos                  0                                              /**< (TDES_MR) Processing Mode Position */
#define TDES_MR_CIPHER_Msk                  (_U_(0x1) << TDES_MR_CIPHER_Pos)               /**< (TDES_MR) Processing Mode Mask */
#define TDES_MR_CIPHER                      TDES_MR_CIPHER_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TDES_MR_CIPHER_Msk instead */
#define   TDES_MR_CIPHER_DECRYPT_Val        _U_(0x0)                                       /**< (TDES_MR) Decrypts data.  */
#define   TDES_MR_CIPHER_ENCRYPT_Val        _U_(0x1)                                       /**< (TDES_MR) Encrypts data.  */
#define TDES_MR_CIPHER_DECRYPT              (TDES_MR_CIPHER_DECRYPT_Val << TDES_MR_CIPHER_Pos)  /**< (TDES_MR) Decrypts data. Position  */
#define TDES_MR_CIPHER_ENCRYPT              (TDES_MR_CIPHER_ENCRYPT_Val << TDES_MR_CIPHER_Pos)  /**< (TDES_MR) Encrypts data. Position  */
#define TDES_MR_TDESMOD_Pos                 1                                              /**< (TDES_MR) ALGORITHM Mode Position */
#define TDES_MR_TDESMOD_Msk                 (_U_(0x3) << TDES_MR_TDESMOD_Pos)              /**< (TDES_MR) ALGORITHM Mode Mask */
#define TDES_MR_TDESMOD(value)              (TDES_MR_TDESMOD_Msk & ((value) << TDES_MR_TDESMOD_Pos))
#define   TDES_MR_TDESMOD_SINGLE_DES_Val    _U_(0x0)                                       /**< (TDES_MR) Single DES processing using Key 1 Registers  */
#define   TDES_MR_TDESMOD_TRIPLE_DES_Val    _U_(0x1)                                       /**< (TDES_MR) Triple DES processing using Key 1, Key 2 and Key 3 Registers  */
#define   TDES_MR_TDESMOD_XTEA_Val          _U_(0x2)                                       /**< (TDES_MR) XTEA processing using Key 1 and Key 2 Registers  */
#define TDES_MR_TDESMOD_SINGLE_DES          (TDES_MR_TDESMOD_SINGLE_DES_Val << TDES_MR_TDESMOD_Pos)  /**< (TDES_MR) Single DES processing using Key 1 Registers Position  */
#define TDES_MR_TDESMOD_TRIPLE_DES          (TDES_MR_TDESMOD_TRIPLE_DES_Val << TDES_MR_TDESMOD_Pos)  /**< (TDES_MR) Triple DES processing using Key 1, Key 2 and Key 3 Registers Position  */
#define TDES_MR_TDESMOD_XTEA                (TDES_MR_TDESMOD_XTEA_Val << TDES_MR_TDESMOD_Pos)  /**< (TDES_MR) XTEA processing using Key 1 and Key 2 Registers Position  */
#define TDES_MR_KEYMOD_Pos                  4                                              /**< (TDES_MR) Key Mode Position */
#define TDES_MR_KEYMOD_Msk                  (_U_(0x1) << TDES_MR_KEYMOD_Pos)               /**< (TDES_MR) Key Mode Mask */
#define TDES_MR_KEYMOD                      TDES_MR_KEYMOD_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TDES_MR_KEYMOD_Msk instead */
#define TDES_MR_SMOD_Pos                    8                                              /**< (TDES_MR) Start Mode Position */
#define TDES_MR_SMOD_Msk                    (_U_(0x3) << TDES_MR_SMOD_Pos)                 /**< (TDES_MR) Start Mode Mask */
#define TDES_MR_SMOD(value)                 (TDES_MR_SMOD_Msk & ((value) << TDES_MR_SMOD_Pos))
#define   TDES_MR_SMOD_MANUAL_START_Val     _U_(0x0)                                       /**< (TDES_MR) Manual Mode  */
#define   TDES_MR_SMOD_AUTO_START_Val       _U_(0x1)                                       /**< (TDES_MR) Auto Mode  */
#define   TDES_MR_SMOD_IDATAR0_START_Val    _U_(0x2)                                       /**< (TDES_MR) TDES_IDATAR0 accesses only Auto Mode  */
#define TDES_MR_SMOD_MANUAL_START           (TDES_MR_SMOD_MANUAL_START_Val << TDES_MR_SMOD_Pos)  /**< (TDES_MR) Manual Mode Position  */
#define TDES_MR_SMOD_AUTO_START             (TDES_MR_SMOD_AUTO_START_Val << TDES_MR_SMOD_Pos)  /**< (TDES_MR) Auto Mode Position  */
#define TDES_MR_SMOD_IDATAR0_START          (TDES_MR_SMOD_IDATAR0_START_Val << TDES_MR_SMOD_Pos)  /**< (TDES_MR) TDES_IDATAR0 accesses only Auto Mode Position  */
#define TDES_MR_OPMOD_Pos                   12                                             /**< (TDES_MR) Operating Mode Position */
#define TDES_MR_OPMOD_Msk                   (_U_(0x3) << TDES_MR_OPMOD_Pos)                /**< (TDES_MR) Operating Mode Mask */
#define TDES_MR_OPMOD(value)                (TDES_MR_OPMOD_Msk & ((value) << TDES_MR_OPMOD_Pos))
#define   TDES_MR_OPMOD_ECB_Val             _U_(0x0)                                       /**< (TDES_MR) Electronic Code Book mode  */
#define   TDES_MR_OPMOD_CBC_Val             _U_(0x1)                                       /**< (TDES_MR) Cipher Block Chaining mode  */
#define   TDES_MR_OPMOD_OFB_Val             _U_(0x2)                                       /**< (TDES_MR) Output Feedback mode  */
#define   TDES_MR_OPMOD_CFB_Val             _U_(0x3)                                       /**< (TDES_MR) Cipher Feedback mode  */
#define TDES_MR_OPMOD_ECB                   (TDES_MR_OPMOD_ECB_Val << TDES_MR_OPMOD_Pos)   /**< (TDES_MR) Electronic Code Book mode Position  */
#define TDES_MR_OPMOD_CBC                   (TDES_MR_OPMOD_CBC_Val << TDES_MR_OPMOD_Pos)   /**< (TDES_MR) Cipher Block Chaining mode Position  */
#define TDES_MR_OPMOD_OFB                   (TDES_MR_OPMOD_OFB_Val << TDES_MR_OPMOD_Pos)   /**< (TDES_MR) Output Feedback mode Position  */
#define TDES_MR_OPMOD_CFB                   (TDES_MR_OPMOD_CFB_Val << TDES_MR_OPMOD_Pos)   /**< (TDES_MR) Cipher Feedback mode Position  */
#define TDES_MR_LOD_Pos                     15                                             /**< (TDES_MR) Last Output Data Mode Position */
#define TDES_MR_LOD_Msk                     (_U_(0x1) << TDES_MR_LOD_Pos)                  /**< (TDES_MR) Last Output Data Mode Mask */
#define TDES_MR_LOD                         TDES_MR_LOD_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TDES_MR_LOD_Msk instead */
#define TDES_MR_CFBS_Pos                    16                                             /**< (TDES_MR) Cipher Feedback Data Size Position */
#define TDES_MR_CFBS_Msk                    (_U_(0x3) << TDES_MR_CFBS_Pos)                 /**< (TDES_MR) Cipher Feedback Data Size Mask */
#define TDES_MR_CFBS(value)                 (TDES_MR_CFBS_Msk & ((value) << TDES_MR_CFBS_Pos))
#define   TDES_MR_CFBS_SIZE_64BIT_Val       _U_(0x0)                                       /**< (TDES_MR) 64-bit  */
#define   TDES_MR_CFBS_SIZE_32BIT_Val       _U_(0x1)                                       /**< (TDES_MR) 32-bit  */
#define   TDES_MR_CFBS_SIZE_16BIT_Val       _U_(0x2)                                       /**< (TDES_MR) 16-bit  */
#define   TDES_MR_CFBS_SIZE_8BIT_Val        _U_(0x3)                                       /**< (TDES_MR) 8-bit  */
#define TDES_MR_CFBS_SIZE_64BIT             (TDES_MR_CFBS_SIZE_64BIT_Val << TDES_MR_CFBS_Pos)  /**< (TDES_MR) 64-bit Position  */
#define TDES_MR_CFBS_SIZE_32BIT             (TDES_MR_CFBS_SIZE_32BIT_Val << TDES_MR_CFBS_Pos)  /**< (TDES_MR) 32-bit Position  */
#define TDES_MR_CFBS_SIZE_16BIT             (TDES_MR_CFBS_SIZE_16BIT_Val << TDES_MR_CFBS_Pos)  /**< (TDES_MR) 16-bit Position  */
#define TDES_MR_CFBS_SIZE_8BIT              (TDES_MR_CFBS_SIZE_8BIT_Val << TDES_MR_CFBS_Pos)  /**< (TDES_MR) 8-bit Position  */
#define TDES_MR_MASK                        _U_(0x3B317)                                   /**< \deprecated (TDES_MR) Register MASK  (Use TDES_MR_Msk instead)  */
#define TDES_MR_Msk                         _U_(0x3B317)                                   /**< (TDES_MR) Register Mask  */


/* -------- TDES_IER : (TDES Offset: 0x10) (/W 32) Interrupt Enable Register -------- */
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
} TDES_IER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TDES_IER_OFFSET                     (0x10)                                        /**<  (TDES_IER) Interrupt Enable Register  Offset */

#define TDES_IER_DATRDY_Pos                 0                                              /**< (TDES_IER) Data Ready Interrupt Enable Position */
#define TDES_IER_DATRDY_Msk                 (_U_(0x1) << TDES_IER_DATRDY_Pos)              /**< (TDES_IER) Data Ready Interrupt Enable Mask */
#define TDES_IER_DATRDY                     TDES_IER_DATRDY_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TDES_IER_DATRDY_Msk instead */
#define TDES_IER_URAD_Pos                   8                                              /**< (TDES_IER) Unspecified Register Access Detection Interrupt Enable Position */
#define TDES_IER_URAD_Msk                   (_U_(0x1) << TDES_IER_URAD_Pos)                /**< (TDES_IER) Unspecified Register Access Detection Interrupt Enable Mask */
#define TDES_IER_URAD                       TDES_IER_URAD_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TDES_IER_URAD_Msk instead */
#define TDES_IER_MASK                       _U_(0x101)                                     /**< \deprecated (TDES_IER) Register MASK  (Use TDES_IER_Msk instead)  */
#define TDES_IER_Msk                        _U_(0x101)                                     /**< (TDES_IER) Register Mask  */


/* -------- TDES_IDR : (TDES Offset: 0x14) (/W 32) Interrupt Disable Register -------- */
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
} TDES_IDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TDES_IDR_OFFSET                     (0x14)                                        /**<  (TDES_IDR) Interrupt Disable Register  Offset */

#define TDES_IDR_DATRDY_Pos                 0                                              /**< (TDES_IDR) Data Ready Interrupt Disable Position */
#define TDES_IDR_DATRDY_Msk                 (_U_(0x1) << TDES_IDR_DATRDY_Pos)              /**< (TDES_IDR) Data Ready Interrupt Disable Mask */
#define TDES_IDR_DATRDY                     TDES_IDR_DATRDY_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TDES_IDR_DATRDY_Msk instead */
#define TDES_IDR_URAD_Pos                   8                                              /**< (TDES_IDR) Unspecified Register Access Detection Interrupt Disable Position */
#define TDES_IDR_URAD_Msk                   (_U_(0x1) << TDES_IDR_URAD_Pos)                /**< (TDES_IDR) Unspecified Register Access Detection Interrupt Disable Mask */
#define TDES_IDR_URAD                       TDES_IDR_URAD_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TDES_IDR_URAD_Msk instead */
#define TDES_IDR_MASK                       _U_(0x101)                                     /**< \deprecated (TDES_IDR) Register MASK  (Use TDES_IDR_Msk instead)  */
#define TDES_IDR_Msk                        _U_(0x101)                                     /**< (TDES_IDR) Register Mask  */


/* -------- TDES_IMR : (TDES Offset: 0x18) (R/ 32) Interrupt Mask Register -------- */
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
} TDES_IMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TDES_IMR_OFFSET                     (0x18)                                        /**<  (TDES_IMR) Interrupt Mask Register  Offset */

#define TDES_IMR_DATRDY_Pos                 0                                              /**< (TDES_IMR) Data Ready Interrupt Mask Position */
#define TDES_IMR_DATRDY_Msk                 (_U_(0x1) << TDES_IMR_DATRDY_Pos)              /**< (TDES_IMR) Data Ready Interrupt Mask Mask */
#define TDES_IMR_DATRDY                     TDES_IMR_DATRDY_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TDES_IMR_DATRDY_Msk instead */
#define TDES_IMR_URAD_Pos                   8                                              /**< (TDES_IMR) Unspecified Register Access Detection Interrupt Mask Position */
#define TDES_IMR_URAD_Msk                   (_U_(0x1) << TDES_IMR_URAD_Pos)                /**< (TDES_IMR) Unspecified Register Access Detection Interrupt Mask Mask */
#define TDES_IMR_URAD                       TDES_IMR_URAD_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TDES_IMR_URAD_Msk instead */
#define TDES_IMR_MASK                       _U_(0x101)                                     /**< \deprecated (TDES_IMR) Register MASK  (Use TDES_IMR_Msk instead)  */
#define TDES_IMR_Msk                        _U_(0x101)                                     /**< (TDES_IMR) Register Mask  */


/* -------- TDES_ISR : (TDES Offset: 0x1c) (R/ 32) Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DATRDY:1;                  /**< bit:      0  Data Ready (cleared by setting bit START or bit SWRST in TDES_CR or by reading TDES_ODATARx) */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t URAD:1;                    /**< bit:      8  Unspecified Register Access Detection Status (cleared by setting bit TDES_CR.SWRST) */
    uint32_t :3;                        /**< bit:  9..11  Reserved */
    uint32_t URAT:2;                    /**< bit: 12..13  Unspecified Register Access (cleared by setting bit TDES_CR.SWRST) */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TDES_ISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TDES_ISR_OFFSET                     (0x1C)                                        /**<  (TDES_ISR) Interrupt Status Register  Offset */

#define TDES_ISR_DATRDY_Pos                 0                                              /**< (TDES_ISR) Data Ready (cleared by setting bit START or bit SWRST in TDES_CR or by reading TDES_ODATARx) Position */
#define TDES_ISR_DATRDY_Msk                 (_U_(0x1) << TDES_ISR_DATRDY_Pos)              /**< (TDES_ISR) Data Ready (cleared by setting bit START or bit SWRST in TDES_CR or by reading TDES_ODATARx) Mask */
#define TDES_ISR_DATRDY                     TDES_ISR_DATRDY_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TDES_ISR_DATRDY_Msk instead */
#define TDES_ISR_URAD_Pos                   8                                              /**< (TDES_ISR) Unspecified Register Access Detection Status (cleared by setting bit TDES_CR.SWRST) Position */
#define TDES_ISR_URAD_Msk                   (_U_(0x1) << TDES_ISR_URAD_Pos)                /**< (TDES_ISR) Unspecified Register Access Detection Status (cleared by setting bit TDES_CR.SWRST) Mask */
#define TDES_ISR_URAD                       TDES_ISR_URAD_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TDES_ISR_URAD_Msk instead */
#define TDES_ISR_URAT_Pos                   12                                             /**< (TDES_ISR) Unspecified Register Access (cleared by setting bit TDES_CR.SWRST) Position */
#define TDES_ISR_URAT_Msk                   (_U_(0x3) << TDES_ISR_URAT_Pos)                /**< (TDES_ISR) Unspecified Register Access (cleared by setting bit TDES_CR.SWRST) Mask */
#define TDES_ISR_URAT(value)                (TDES_ISR_URAT_Msk & ((value) << TDES_ISR_URAT_Pos))
#define   TDES_ISR_URAT_IDR_WR_PROCESSING_Val _U_(0x0)                                       /**< (TDES_ISR) Input Data Register written during data processing when SMOD = 0x2 mode.  */
#define   TDES_ISR_URAT_ODR_RD_PROCESSING_Val _U_(0x1)                                       /**< (TDES_ISR) Output Data Register read during data processing.  */
#define   TDES_ISR_URAT_MR_WR_PROCESSING_Val _U_(0x2)                                       /**< (TDES_ISR) Mode Register written during data processing.  */
#define   TDES_ISR_URAT_WOR_RD_ACCESS_Val   _U_(0x3)                                       /**< (TDES_ISR) Write-only register read access.  */
#define TDES_ISR_URAT_IDR_WR_PROCESSING     (TDES_ISR_URAT_IDR_WR_PROCESSING_Val << TDES_ISR_URAT_Pos)  /**< (TDES_ISR) Input Data Register written during data processing when SMOD = 0x2 mode. Position  */
#define TDES_ISR_URAT_ODR_RD_PROCESSING     (TDES_ISR_URAT_ODR_RD_PROCESSING_Val << TDES_ISR_URAT_Pos)  /**< (TDES_ISR) Output Data Register read during data processing. Position  */
#define TDES_ISR_URAT_MR_WR_PROCESSING      (TDES_ISR_URAT_MR_WR_PROCESSING_Val << TDES_ISR_URAT_Pos)  /**< (TDES_ISR) Mode Register written during data processing. Position  */
#define TDES_ISR_URAT_WOR_RD_ACCESS         (TDES_ISR_URAT_WOR_RD_ACCESS_Val << TDES_ISR_URAT_Pos)  /**< (TDES_ISR) Write-only register read access. Position  */
#define TDES_ISR_MASK                       _U_(0x3101)                                    /**< \deprecated (TDES_ISR) Register MASK  (Use TDES_ISR_Msk instead)  */
#define TDES_ISR_Msk                        _U_(0x3101)                                    /**< (TDES_ISR) Register Mask  */


/* -------- TDES_KEY1WR : (TDES Offset: 0x20) (/W 32) Key 1 Word Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t KEY1W:32;                  /**< bit:  0..31  Key 1 Word                               */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TDES_KEY1WR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TDES_KEY1WR_OFFSET                  (0x20)                                        /**<  (TDES_KEY1WR) Key 1 Word Register  Offset */

#define TDES_KEY1WR_KEY1W_Pos               0                                              /**< (TDES_KEY1WR) Key 1 Word Position */
#define TDES_KEY1WR_KEY1W_Msk               (_U_(0xFFFFFFFF) << TDES_KEY1WR_KEY1W_Pos)     /**< (TDES_KEY1WR) Key 1 Word Mask */
#define TDES_KEY1WR_KEY1W(value)            (TDES_KEY1WR_KEY1W_Msk & ((value) << TDES_KEY1WR_KEY1W_Pos))
#define TDES_KEY1WR_MASK                    _U_(0xFFFFFFFF)                                /**< \deprecated (TDES_KEY1WR) Register MASK  (Use TDES_KEY1WR_Msk instead)  */
#define TDES_KEY1WR_Msk                     _U_(0xFFFFFFFF)                                /**< (TDES_KEY1WR) Register Mask  */


/* -------- TDES_KEY2WR : (TDES Offset: 0x28) (/W 32) Key 2 Word Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t KEY2W:32;                  /**< bit:  0..31  Key 2 Word                               */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TDES_KEY2WR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TDES_KEY2WR_OFFSET                  (0x28)                                        /**<  (TDES_KEY2WR) Key 2 Word Register  Offset */

#define TDES_KEY2WR_KEY2W_Pos               0                                              /**< (TDES_KEY2WR) Key 2 Word Position */
#define TDES_KEY2WR_KEY2W_Msk               (_U_(0xFFFFFFFF) << TDES_KEY2WR_KEY2W_Pos)     /**< (TDES_KEY2WR) Key 2 Word Mask */
#define TDES_KEY2WR_KEY2W(value)            (TDES_KEY2WR_KEY2W_Msk & ((value) << TDES_KEY2WR_KEY2W_Pos))
#define TDES_KEY2WR_MASK                    _U_(0xFFFFFFFF)                                /**< \deprecated (TDES_KEY2WR) Register MASK  (Use TDES_KEY2WR_Msk instead)  */
#define TDES_KEY2WR_Msk                     _U_(0xFFFFFFFF)                                /**< (TDES_KEY2WR) Register Mask  */


/* -------- TDES_KEY3WR : (TDES Offset: 0x30) (/W 32) Key 3 Word Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t KEY3W:32;                  /**< bit:  0..31  Key 3 Word                               */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TDES_KEY3WR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TDES_KEY3WR_OFFSET                  (0x30)                                        /**<  (TDES_KEY3WR) Key 3 Word Register  Offset */

#define TDES_KEY3WR_KEY3W_Pos               0                                              /**< (TDES_KEY3WR) Key 3 Word Position */
#define TDES_KEY3WR_KEY3W_Msk               (_U_(0xFFFFFFFF) << TDES_KEY3WR_KEY3W_Pos)     /**< (TDES_KEY3WR) Key 3 Word Mask */
#define TDES_KEY3WR_KEY3W(value)            (TDES_KEY3WR_KEY3W_Msk & ((value) << TDES_KEY3WR_KEY3W_Pos))
#define TDES_KEY3WR_MASK                    _U_(0xFFFFFFFF)                                /**< \deprecated (TDES_KEY3WR) Register MASK  (Use TDES_KEY3WR_Msk instead)  */
#define TDES_KEY3WR_Msk                     _U_(0xFFFFFFFF)                                /**< (TDES_KEY3WR) Register Mask  */


/* -------- TDES_IDATAR : (TDES Offset: 0x40) (/W 32) Input Data Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t IDATA:32;                  /**< bit:  0..31  Input Data                               */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TDES_IDATAR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TDES_IDATAR_OFFSET                  (0x40)                                        /**<  (TDES_IDATAR) Input Data Register  Offset */

#define TDES_IDATAR_IDATA_Pos               0                                              /**< (TDES_IDATAR) Input Data Position */
#define TDES_IDATAR_IDATA_Msk               (_U_(0xFFFFFFFF) << TDES_IDATAR_IDATA_Pos)     /**< (TDES_IDATAR) Input Data Mask */
#define TDES_IDATAR_IDATA(value)            (TDES_IDATAR_IDATA_Msk & ((value) << TDES_IDATAR_IDATA_Pos))
#define TDES_IDATAR_MASK                    _U_(0xFFFFFFFF)                                /**< \deprecated (TDES_IDATAR) Register MASK  (Use TDES_IDATAR_Msk instead)  */
#define TDES_IDATAR_Msk                     _U_(0xFFFFFFFF)                                /**< (TDES_IDATAR) Register Mask  */


/* -------- TDES_ODATAR : (TDES Offset: 0x50) (R/ 32) Output Data Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ODATA:32;                  /**< bit:  0..31  Output Data                              */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TDES_ODATAR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TDES_ODATAR_OFFSET                  (0x50)                                        /**<  (TDES_ODATAR) Output Data Register  Offset */

#define TDES_ODATAR_ODATA_Pos               0                                              /**< (TDES_ODATAR) Output Data Position */
#define TDES_ODATAR_ODATA_Msk               (_U_(0xFFFFFFFF) << TDES_ODATAR_ODATA_Pos)     /**< (TDES_ODATAR) Output Data Mask */
#define TDES_ODATAR_ODATA(value)            (TDES_ODATAR_ODATA_Msk & ((value) << TDES_ODATAR_ODATA_Pos))
#define TDES_ODATAR_MASK                    _U_(0xFFFFFFFF)                                /**< \deprecated (TDES_ODATAR) Register MASK  (Use TDES_ODATAR_Msk instead)  */
#define TDES_ODATAR_Msk                     _U_(0xFFFFFFFF)                                /**< (TDES_ODATAR) Register Mask  */


/* -------- TDES_IVR : (TDES Offset: 0x60) (/W 32) Initialization Vector Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t IV:32;                     /**< bit:  0..31  Initialization Vector                    */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TDES_IVR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TDES_IVR_OFFSET                     (0x60)                                        /**<  (TDES_IVR) Initialization Vector Register  Offset */

#define TDES_IVR_IV_Pos                     0                                              /**< (TDES_IVR) Initialization Vector Position */
#define TDES_IVR_IV_Msk                     (_U_(0xFFFFFFFF) << TDES_IVR_IV_Pos)           /**< (TDES_IVR) Initialization Vector Mask */
#define TDES_IVR_IV(value)                  (TDES_IVR_IV_Msk & ((value) << TDES_IVR_IV_Pos))
#define TDES_IVR_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (TDES_IVR) Register MASK  (Use TDES_IVR_Msk instead)  */
#define TDES_IVR_Msk                        _U_(0xFFFFFFFF)                                /**< (TDES_IVR) Register Mask  */


/* -------- TDES_XTEA_RNDR : (TDES Offset: 0x70) (R/W 32) XTEA Rounds Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XTEA_RNDS:6;               /**< bit:   0..5  Number of Rounds                         */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TDES_XTEA_RNDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TDES_XTEA_RNDR_OFFSET               (0x70)                                        /**<  (TDES_XTEA_RNDR) XTEA Rounds Register  Offset */

#define TDES_XTEA_RNDR_XTEA_RNDS_Pos        0                                              /**< (TDES_XTEA_RNDR) Number of Rounds Position */
#define TDES_XTEA_RNDR_XTEA_RNDS_Msk        (_U_(0x3F) << TDES_XTEA_RNDR_XTEA_RNDS_Pos)    /**< (TDES_XTEA_RNDR) Number of Rounds Mask */
#define TDES_XTEA_RNDR_XTEA_RNDS(value)     (TDES_XTEA_RNDR_XTEA_RNDS_Msk & ((value) << TDES_XTEA_RNDR_XTEA_RNDS_Pos))
#define TDES_XTEA_RNDR_MASK                 _U_(0x3F)                                      /**< \deprecated (TDES_XTEA_RNDR) Register MASK  (Use TDES_XTEA_RNDR_Msk instead)  */
#define TDES_XTEA_RNDR_Msk                  _U_(0x3F)                                      /**< (TDES_XTEA_RNDR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief TDES hardware registers */
typedef struct {  
  __O  uint32_t TDES_CR;        /**< (TDES Offset: 0x00) Control Register */
  __IO uint32_t TDES_MR;        /**< (TDES Offset: 0x04) Mode Register */
  __I  uint8_t                        Reserved1[8];
  __O  uint32_t TDES_IER;       /**< (TDES Offset: 0x10) Interrupt Enable Register */
  __O  uint32_t TDES_IDR;       /**< (TDES Offset: 0x14) Interrupt Disable Register */
  __I  uint32_t TDES_IMR;       /**< (TDES Offset: 0x18) Interrupt Mask Register */
  __I  uint32_t TDES_ISR;       /**< (TDES Offset: 0x1C) Interrupt Status Register */
  __O  uint32_t TDES_KEY1WR[2]; /**< (TDES Offset: 0x20) Key 1 Word Register */
  __O  uint32_t TDES_KEY2WR[2]; /**< (TDES Offset: 0x28) Key 2 Word Register */
  __O  uint32_t TDES_KEY3WR[2]; /**< (TDES Offset: 0x30) Key 3 Word Register */
  __I  uint8_t                        Reserved2[8];
  __O  uint32_t TDES_IDATAR[2]; /**< (TDES Offset: 0x40) Input Data Register */
  __I  uint8_t                        Reserved3[8];
  __I  uint32_t TDES_ODATAR[2]; /**< (TDES Offset: 0x50) Output Data Register */
  __I  uint8_t                        Reserved4[8];
  __O  uint32_t TDES_IVR[2];    /**< (TDES Offset: 0x60) Initialization Vector Register */
  __I  uint8_t                        Reserved5[8];
  __IO uint32_t TDES_XTEA_RNDR; /**< (TDES Offset: 0x70) XTEA Rounds Register */
} Tdes;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief TDES hardware registers */
typedef struct {  
  __O  TDES_CR_Type                   TDES_CR;        /**< Offset: 0x00 ( /W  32) Control Register */
  __IO TDES_MR_Type                   TDES_MR;        /**< Offset: 0x04 (R/W  32) Mode Register */
  __I  uint8_t                        Reserved1[8];
  __O  TDES_IER_Type                  TDES_IER;       /**< Offset: 0x10 ( /W  32) Interrupt Enable Register */
  __O  TDES_IDR_Type                  TDES_IDR;       /**< Offset: 0x14 ( /W  32) Interrupt Disable Register */
  __I  TDES_IMR_Type                  TDES_IMR;       /**< Offset: 0x18 (R/   32) Interrupt Mask Register */
  __I  TDES_ISR_Type                  TDES_ISR;       /**< Offset: 0x1C (R/   32) Interrupt Status Register */
  __O  TDES_KEY1WR_Type               TDES_KEY1WR[2]; /**< Offset: 0x20 ( /W  32) Key 1 Word Register */
  __O  TDES_KEY2WR_Type               TDES_KEY2WR[2]; /**< Offset: 0x28 ( /W  32) Key 2 Word Register */
  __O  TDES_KEY3WR_Type               TDES_KEY3WR[2]; /**< Offset: 0x30 ( /W  32) Key 3 Word Register */
  __I  uint8_t                        Reserved2[8];
  __O  TDES_IDATAR_Type               TDES_IDATAR[2]; /**< Offset: 0x40 ( /W  32) Input Data Register */
  __I  uint8_t                        Reserved3[8];
  __I  TDES_ODATAR_Type               TDES_ODATAR[2]; /**< Offset: 0x50 (R/   32) Output Data Register */
  __I  uint8_t                        Reserved4[8];
  __O  TDES_IVR_Type                  TDES_IVR[2];    /**< Offset: 0x60 ( /W  32) Initialization Vector Register */
  __I  uint8_t                        Reserved5[8];
  __IO TDES_XTEA_RNDR_Type            TDES_XTEA_RNDR; /**< Offset: 0x70 (R/W  32) XTEA Rounds Register */
} Tdes;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Triple Data Encryption Standard */

#endif /* _SAMA5D2_TDES_COMPONENT_H_ */
