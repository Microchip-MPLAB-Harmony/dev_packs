/**
 * \file
 *
 * \brief Component description for SHA
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
#ifndef _SAMA5D2_SHA_COMPONENT_H_
#define _SAMA5D2_SHA_COMPONENT_H_
#define _SAMA5D2_SHA_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Secure Hash Algorithm
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SHA */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define SHA_6156                       /**< (SHA) Module ID */
#define REV_SHA O                      /**< (SHA) Module revision */

/* -------- SHA_CR : (SHA Offset: 0x00) (/W 32) Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t START:1;                   /**< bit:      0  Start Processing                         */
    uint32_t :3;                        /**< bit:   1..3  Reserved */
    uint32_t FIRST:1;                   /**< bit:      4  First Block of a Message                 */
    uint32_t :3;                        /**< bit:   5..7  Reserved */
    uint32_t SWRST:1;                   /**< bit:      8  Software Reset                           */
    uint32_t :3;                        /**< bit:  9..11  Reserved */
    uint32_t WUIHV:1;                   /**< bit:     12  Write User Initial Hash Values           */
    uint32_t WUIEHV:1;                  /**< bit:     13  Write User Initial or Expected Hash Values */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SHA_CR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SHA_CR_OFFSET                       (0x00)                                        /**<  (SHA_CR) Control Register  Offset */

#define SHA_CR_START_Pos                    0                                              /**< (SHA_CR) Start Processing Position */
#define SHA_CR_START_Msk                    (_U_(0x1) << SHA_CR_START_Pos)                 /**< (SHA_CR) Start Processing Mask */
#define SHA_CR_START                        SHA_CR_START_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_CR_START_Msk instead */
#define SHA_CR_FIRST_Pos                    4                                              /**< (SHA_CR) First Block of a Message Position */
#define SHA_CR_FIRST_Msk                    (_U_(0x1) << SHA_CR_FIRST_Pos)                 /**< (SHA_CR) First Block of a Message Mask */
#define SHA_CR_FIRST                        SHA_CR_FIRST_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_CR_FIRST_Msk instead */
#define SHA_CR_SWRST_Pos                    8                                              /**< (SHA_CR) Software Reset Position */
#define SHA_CR_SWRST_Msk                    (_U_(0x1) << SHA_CR_SWRST_Pos)                 /**< (SHA_CR) Software Reset Mask */
#define SHA_CR_SWRST                        SHA_CR_SWRST_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_CR_SWRST_Msk instead */
#define SHA_CR_WUIHV_Pos                    12                                             /**< (SHA_CR) Write User Initial Hash Values Position */
#define SHA_CR_WUIHV_Msk                    (_U_(0x1) << SHA_CR_WUIHV_Pos)                 /**< (SHA_CR) Write User Initial Hash Values Mask */
#define SHA_CR_WUIHV                        SHA_CR_WUIHV_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_CR_WUIHV_Msk instead */
#define SHA_CR_WUIEHV_Pos                   13                                             /**< (SHA_CR) Write User Initial or Expected Hash Values Position */
#define SHA_CR_WUIEHV_Msk                   (_U_(0x1) << SHA_CR_WUIEHV_Pos)                /**< (SHA_CR) Write User Initial or Expected Hash Values Mask */
#define SHA_CR_WUIEHV                       SHA_CR_WUIEHV_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_CR_WUIEHV_Msk instead */
#define SHA_CR_MASK                         _U_(0x3111)                                    /**< \deprecated (SHA_CR) Register MASK  (Use SHA_CR_Msk instead)  */
#define SHA_CR_Msk                          _U_(0x3111)                                    /**< (SHA_CR) Register Mask  */


/* -------- SHA_MR : (SHA Offset: 0x04) (R/W 32) Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SMOD:2;                    /**< bit:   0..1  Start Mode                               */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t PROCDLY:1;                 /**< bit:      4  Processing Delay                         */
    uint32_t UIHV:1;                    /**< bit:      5  User Initial Hash Value Registers        */
    uint32_t UIEHV:1;                   /**< bit:      6  User Initial or Expected Hash Value Registers */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t ALGO:4;                    /**< bit:  8..11  SHA Algorithm                            */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t DUALBUFF:1;                /**< bit:     16  Dual Input Buffer                        */
    uint32_t :7;                        /**< bit: 17..23  Reserved */
    uint32_t CHECK:2;                   /**< bit: 24..25  Hash Check                               */
    uint32_t :2;                        /**< bit: 26..27  Reserved */
    uint32_t CHKCNT:4;                  /**< bit: 28..31  Check Counter                            */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SHA_MR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SHA_MR_OFFSET                       (0x04)                                        /**<  (SHA_MR) Mode Register  Offset */

#define SHA_MR_SMOD_Pos                     0                                              /**< (SHA_MR) Start Mode Position */
#define SHA_MR_SMOD_Msk                     (_U_(0x3) << SHA_MR_SMOD_Pos)                  /**< (SHA_MR) Start Mode Mask */
#define SHA_MR_SMOD(value)                  (SHA_MR_SMOD_Msk & ((value) << SHA_MR_SMOD_Pos))
#define   SHA_MR_SMOD_MANUAL_START_Val      _U_(0x0)                                       /**< (SHA_MR) Manual mode  */
#define   SHA_MR_SMOD_AUTO_START_Val        _U_(0x1)                                       /**< (SHA_MR) Auto mode  */
#define   SHA_MR_SMOD_IDATAR0_START_Val     _U_(0x2)                                       /**< (SHA_MR) SHA_IDATAR0 access only mode (mandatory when DMA is used)  */
#define SHA_MR_SMOD_MANUAL_START            (SHA_MR_SMOD_MANUAL_START_Val << SHA_MR_SMOD_Pos)  /**< (SHA_MR) Manual mode Position  */
#define SHA_MR_SMOD_AUTO_START              (SHA_MR_SMOD_AUTO_START_Val << SHA_MR_SMOD_Pos)  /**< (SHA_MR) Auto mode Position  */
#define SHA_MR_SMOD_IDATAR0_START           (SHA_MR_SMOD_IDATAR0_START_Val << SHA_MR_SMOD_Pos)  /**< (SHA_MR) SHA_IDATAR0 access only mode (mandatory when DMA is used) Position  */
#define SHA_MR_PROCDLY_Pos                  4                                              /**< (SHA_MR) Processing Delay Position */
#define SHA_MR_PROCDLY_Msk                  (_U_(0x1) << SHA_MR_PROCDLY_Pos)               /**< (SHA_MR) Processing Delay Mask */
#define SHA_MR_PROCDLY                      SHA_MR_PROCDLY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_MR_PROCDLY_Msk instead */
#define   SHA_MR_PROCDLY_SHORTEST_Val       _U_(0x0)                                       /**< (SHA_MR) SHA processing runtime is the shortest one  */
#define   SHA_MR_PROCDLY_LONGEST_Val        _U_(0x1)                                       /**< (SHA_MR) SHA processing runtime is the longest one (reduces the SHA bandwidth requirement, reduces the system bus overload)  */
#define SHA_MR_PROCDLY_SHORTEST             (SHA_MR_PROCDLY_SHORTEST_Val << SHA_MR_PROCDLY_Pos)  /**< (SHA_MR) SHA processing runtime is the shortest one Position  */
#define SHA_MR_PROCDLY_LONGEST              (SHA_MR_PROCDLY_LONGEST_Val << SHA_MR_PROCDLY_Pos)  /**< (SHA_MR) SHA processing runtime is the longest one (reduces the SHA bandwidth requirement, reduces the system bus overload) Position  */
#define SHA_MR_UIHV_Pos                     5                                              /**< (SHA_MR) User Initial Hash Value Registers Position */
#define SHA_MR_UIHV_Msk                     (_U_(0x1) << SHA_MR_UIHV_Pos)                  /**< (SHA_MR) User Initial Hash Value Registers Mask */
#define SHA_MR_UIHV                         SHA_MR_UIHV_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_MR_UIHV_Msk instead */
#define SHA_MR_UIEHV_Pos                    6                                              /**< (SHA_MR) User Initial or Expected Hash Value Registers Position */
#define SHA_MR_UIEHV_Msk                    (_U_(0x1) << SHA_MR_UIEHV_Pos)                 /**< (SHA_MR) User Initial or Expected Hash Value Registers Mask */
#define SHA_MR_UIEHV                        SHA_MR_UIEHV_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_MR_UIEHV_Msk instead */
#define SHA_MR_ALGO_Pos                     8                                              /**< (SHA_MR) SHA Algorithm Position */
#define SHA_MR_ALGO_Msk                     (_U_(0xF) << SHA_MR_ALGO_Pos)                  /**< (SHA_MR) SHA Algorithm Mask */
#define SHA_MR_ALGO(value)                  (SHA_MR_ALGO_Msk & ((value) << SHA_MR_ALGO_Pos))
#define   SHA_MR_ALGO_SHA1_Val              _U_(0x0)                                       /**< (SHA_MR) SHA1 algorithm processed  */
#define   SHA_MR_ALGO_SHA256_Val            _U_(0x1)                                       /**< (SHA_MR) SHA256 algorithm processed  */
#define   SHA_MR_ALGO_SHA384_Val            _U_(0x2)                                       /**< (SHA_MR) SHA384 algorithm processed  */
#define   SHA_MR_ALGO_SHA512_Val            _U_(0x3)                                       /**< (SHA_MR) SHA512 algorithm processed  */
#define   SHA_MR_ALGO_SHA224_Val            _U_(0x4)                                       /**< (SHA_MR) SHA224 algorithm processed  */
#define   SHA_MR_ALGO_HMAC_SHA1_Val         _U_(0x8)                                       /**< (SHA_MR) HMAC algorithm with SHA1 Hash processed  */
#define   SHA_MR_ALGO_HMAC_SHA256_Val       _U_(0x9)                                       /**< (SHA_MR) HMAC algorithm with SHA256 Hash processed  */
#define   SHA_MR_ALGO_HMAC_SHA384_Val       _U_(0xA)                                       /**< (SHA_MR) HMAC algorithm with SHA384 Hash processed  */
#define   SHA_MR_ALGO_HMAC_SHA512_Val       _U_(0xB)                                       /**< (SHA_MR) HMAC algorithm with SHA512 Hash processed  */
#define   SHA_MR_ALGO_HMAC_SHA224_Val       _U_(0xC)                                       /**< (SHA_MR) HMAC algorithm with SHA224 Hash processed  */
#define SHA_MR_ALGO_SHA1                    (SHA_MR_ALGO_SHA1_Val << SHA_MR_ALGO_Pos)      /**< (SHA_MR) SHA1 algorithm processed Position  */
#define SHA_MR_ALGO_SHA256                  (SHA_MR_ALGO_SHA256_Val << SHA_MR_ALGO_Pos)    /**< (SHA_MR) SHA256 algorithm processed Position  */
#define SHA_MR_ALGO_SHA384                  (SHA_MR_ALGO_SHA384_Val << SHA_MR_ALGO_Pos)    /**< (SHA_MR) SHA384 algorithm processed Position  */
#define SHA_MR_ALGO_SHA512                  (SHA_MR_ALGO_SHA512_Val << SHA_MR_ALGO_Pos)    /**< (SHA_MR) SHA512 algorithm processed Position  */
#define SHA_MR_ALGO_SHA224                  (SHA_MR_ALGO_SHA224_Val << SHA_MR_ALGO_Pos)    /**< (SHA_MR) SHA224 algorithm processed Position  */
#define SHA_MR_ALGO_HMAC_SHA1               (SHA_MR_ALGO_HMAC_SHA1_Val << SHA_MR_ALGO_Pos)  /**< (SHA_MR) HMAC algorithm with SHA1 Hash processed Position  */
#define SHA_MR_ALGO_HMAC_SHA256             (SHA_MR_ALGO_HMAC_SHA256_Val << SHA_MR_ALGO_Pos)  /**< (SHA_MR) HMAC algorithm with SHA256 Hash processed Position  */
#define SHA_MR_ALGO_HMAC_SHA384             (SHA_MR_ALGO_HMAC_SHA384_Val << SHA_MR_ALGO_Pos)  /**< (SHA_MR) HMAC algorithm with SHA384 Hash processed Position  */
#define SHA_MR_ALGO_HMAC_SHA512             (SHA_MR_ALGO_HMAC_SHA512_Val << SHA_MR_ALGO_Pos)  /**< (SHA_MR) HMAC algorithm with SHA512 Hash processed Position  */
#define SHA_MR_ALGO_HMAC_SHA224             (SHA_MR_ALGO_HMAC_SHA224_Val << SHA_MR_ALGO_Pos)  /**< (SHA_MR) HMAC algorithm with SHA224 Hash processed Position  */
#define SHA_MR_DUALBUFF_Pos                 16                                             /**< (SHA_MR) Dual Input Buffer Position */
#define SHA_MR_DUALBUFF_Msk                 (_U_(0x1) << SHA_MR_DUALBUFF_Pos)              /**< (SHA_MR) Dual Input Buffer Mask */
#define SHA_MR_DUALBUFF                     SHA_MR_DUALBUFF_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_MR_DUALBUFF_Msk instead */
#define   SHA_MR_DUALBUFF_INACTIVE_Val      _U_(0x0)                                       /**< (SHA_MR) SHA_IDATARx and SHA_IODATARx cannot be written during processing of previous block.  */
#define   SHA_MR_DUALBUFF_ACTIVE_Val        _U_(0x1)                                       /**< (SHA_MR) SHA_IDATARx and SHA_IODATARx can be written during processing of previous block when SMOD value = 2. It speeds up the overall runtime of large files.  */
#define SHA_MR_DUALBUFF_INACTIVE            (SHA_MR_DUALBUFF_INACTIVE_Val << SHA_MR_DUALBUFF_Pos)  /**< (SHA_MR) SHA_IDATARx and SHA_IODATARx cannot be written during processing of previous block. Position  */
#define SHA_MR_DUALBUFF_ACTIVE              (SHA_MR_DUALBUFF_ACTIVE_Val << SHA_MR_DUALBUFF_Pos)  /**< (SHA_MR) SHA_IDATARx and SHA_IODATARx can be written during processing of previous block when SMOD value = 2. It speeds up the overall runtime of large files. Position  */
#define SHA_MR_CHECK_Pos                    24                                             /**< (SHA_MR) Hash Check Position */
#define SHA_MR_CHECK_Msk                    (_U_(0x3) << SHA_MR_CHECK_Pos)                 /**< (SHA_MR) Hash Check Mask */
#define SHA_MR_CHECK(value)                 (SHA_MR_CHECK_Msk & ((value) << SHA_MR_CHECK_Pos))
#define   SHA_MR_CHECK_NO_CHECK_Val         _U_(0x0)                                       /**< (SHA_MR) No check is performed  */
#define   SHA_MR_CHECK_CHECK_EHV_Val        _U_(0x1)                                       /**< (SHA_MR) Check is performed with expected hash stored in internal expected hash value registers.  */
#define   SHA_MR_CHECK_CHECK_MESSAGE_Val    _U_(0x2)                                       /**< (SHA_MR) Check is performed with expected hash provided after the message.  */
#define SHA_MR_CHECK_NO_CHECK               (SHA_MR_CHECK_NO_CHECK_Val << SHA_MR_CHECK_Pos)  /**< (SHA_MR) No check is performed Position  */
#define SHA_MR_CHECK_CHECK_EHV              (SHA_MR_CHECK_CHECK_EHV_Val << SHA_MR_CHECK_Pos)  /**< (SHA_MR) Check is performed with expected hash stored in internal expected hash value registers. Position  */
#define SHA_MR_CHECK_CHECK_MESSAGE          (SHA_MR_CHECK_CHECK_MESSAGE_Val << SHA_MR_CHECK_Pos)  /**< (SHA_MR) Check is performed with expected hash provided after the message. Position  */
#define SHA_MR_CHKCNT_Pos                   28                                             /**< (SHA_MR) Check Counter Position */
#define SHA_MR_CHKCNT_Msk                   (_U_(0xF) << SHA_MR_CHKCNT_Pos)                /**< (SHA_MR) Check Counter Mask */
#define SHA_MR_CHKCNT(value)                (SHA_MR_CHKCNT_Msk & ((value) << SHA_MR_CHKCNT_Pos))
#define SHA_MR_MASK                         _U_(0xF3010F73)                                /**< \deprecated (SHA_MR) Register MASK  (Use SHA_MR_Msk instead)  */
#define SHA_MR_Msk                          _U_(0xF3010F73)                                /**< (SHA_MR) Register Mask  */


/* -------- SHA_IER : (SHA Offset: 0x10) (/W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DATRDY:1;                  /**< bit:      0  Data Ready Interrupt Enable              */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t URAD:1;                    /**< bit:      8  Unspecified Register Access Detection Interrupt Enable */
    uint32_t :7;                        /**< bit:  9..15  Reserved */
    uint32_t CHECKF:1;                  /**< bit:     16  Check Done Interrupt Enable              */
    uint32_t :15;                       /**< bit: 17..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SHA_IER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SHA_IER_OFFSET                      (0x10)                                        /**<  (SHA_IER) Interrupt Enable Register  Offset */

#define SHA_IER_DATRDY_Pos                  0                                              /**< (SHA_IER) Data Ready Interrupt Enable Position */
#define SHA_IER_DATRDY_Msk                  (_U_(0x1) << SHA_IER_DATRDY_Pos)               /**< (SHA_IER) Data Ready Interrupt Enable Mask */
#define SHA_IER_DATRDY                      SHA_IER_DATRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_IER_DATRDY_Msk instead */
#define SHA_IER_URAD_Pos                    8                                              /**< (SHA_IER) Unspecified Register Access Detection Interrupt Enable Position */
#define SHA_IER_URAD_Msk                    (_U_(0x1) << SHA_IER_URAD_Pos)                 /**< (SHA_IER) Unspecified Register Access Detection Interrupt Enable Mask */
#define SHA_IER_URAD                        SHA_IER_URAD_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_IER_URAD_Msk instead */
#define SHA_IER_CHECKF_Pos                  16                                             /**< (SHA_IER) Check Done Interrupt Enable Position */
#define SHA_IER_CHECKF_Msk                  (_U_(0x1) << SHA_IER_CHECKF_Pos)               /**< (SHA_IER) Check Done Interrupt Enable Mask */
#define SHA_IER_CHECKF                      SHA_IER_CHECKF_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_IER_CHECKF_Msk instead */
#define SHA_IER_MASK                        _U_(0x10101)                                   /**< \deprecated (SHA_IER) Register MASK  (Use SHA_IER_Msk instead)  */
#define SHA_IER_Msk                         _U_(0x10101)                                   /**< (SHA_IER) Register Mask  */


/* -------- SHA_IDR : (SHA Offset: 0x14) (/W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DATRDY:1;                  /**< bit:      0  Data Ready Interrupt Disable             */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t URAD:1;                    /**< bit:      8  Unspecified Register Access Detection Interrupt Disable */
    uint32_t :7;                        /**< bit:  9..15  Reserved */
    uint32_t CHECKF:1;                  /**< bit:     16  Check Done Interrupt Disable             */
    uint32_t :15;                       /**< bit: 17..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SHA_IDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SHA_IDR_OFFSET                      (0x14)                                        /**<  (SHA_IDR) Interrupt Disable Register  Offset */

#define SHA_IDR_DATRDY_Pos                  0                                              /**< (SHA_IDR) Data Ready Interrupt Disable Position */
#define SHA_IDR_DATRDY_Msk                  (_U_(0x1) << SHA_IDR_DATRDY_Pos)               /**< (SHA_IDR) Data Ready Interrupt Disable Mask */
#define SHA_IDR_DATRDY                      SHA_IDR_DATRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_IDR_DATRDY_Msk instead */
#define SHA_IDR_URAD_Pos                    8                                              /**< (SHA_IDR) Unspecified Register Access Detection Interrupt Disable Position */
#define SHA_IDR_URAD_Msk                    (_U_(0x1) << SHA_IDR_URAD_Pos)                 /**< (SHA_IDR) Unspecified Register Access Detection Interrupt Disable Mask */
#define SHA_IDR_URAD                        SHA_IDR_URAD_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_IDR_URAD_Msk instead */
#define SHA_IDR_CHECKF_Pos                  16                                             /**< (SHA_IDR) Check Done Interrupt Disable Position */
#define SHA_IDR_CHECKF_Msk                  (_U_(0x1) << SHA_IDR_CHECKF_Pos)               /**< (SHA_IDR) Check Done Interrupt Disable Mask */
#define SHA_IDR_CHECKF                      SHA_IDR_CHECKF_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_IDR_CHECKF_Msk instead */
#define SHA_IDR_MASK                        _U_(0x10101)                                   /**< \deprecated (SHA_IDR) Register MASK  (Use SHA_IDR_Msk instead)  */
#define SHA_IDR_Msk                         _U_(0x10101)                                   /**< (SHA_IDR) Register Mask  */


/* -------- SHA_IMR : (SHA Offset: 0x18) (R/ 32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DATRDY:1;                  /**< bit:      0  Data Ready Interrupt Mask                */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t URAD:1;                    /**< bit:      8  Unspecified Register Access Detection Interrupt Mask */
    uint32_t :7;                        /**< bit:  9..15  Reserved */
    uint32_t CHECKF:1;                  /**< bit:     16  Check Done Interrupt Mask                */
    uint32_t :15;                       /**< bit: 17..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SHA_IMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SHA_IMR_OFFSET                      (0x18)                                        /**<  (SHA_IMR) Interrupt Mask Register  Offset */

#define SHA_IMR_DATRDY_Pos                  0                                              /**< (SHA_IMR) Data Ready Interrupt Mask Position */
#define SHA_IMR_DATRDY_Msk                  (_U_(0x1) << SHA_IMR_DATRDY_Pos)               /**< (SHA_IMR) Data Ready Interrupt Mask Mask */
#define SHA_IMR_DATRDY                      SHA_IMR_DATRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_IMR_DATRDY_Msk instead */
#define SHA_IMR_URAD_Pos                    8                                              /**< (SHA_IMR) Unspecified Register Access Detection Interrupt Mask Position */
#define SHA_IMR_URAD_Msk                    (_U_(0x1) << SHA_IMR_URAD_Pos)                 /**< (SHA_IMR) Unspecified Register Access Detection Interrupt Mask Mask */
#define SHA_IMR_URAD                        SHA_IMR_URAD_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_IMR_URAD_Msk instead */
#define SHA_IMR_CHECKF_Pos                  16                                             /**< (SHA_IMR) Check Done Interrupt Mask Position */
#define SHA_IMR_CHECKF_Msk                  (_U_(0x1) << SHA_IMR_CHECKF_Pos)               /**< (SHA_IMR) Check Done Interrupt Mask Mask */
#define SHA_IMR_CHECKF                      SHA_IMR_CHECKF_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_IMR_CHECKF_Msk instead */
#define SHA_IMR_MASK                        _U_(0x10101)                                   /**< \deprecated (SHA_IMR) Register MASK  (Use SHA_IMR_Msk instead)  */
#define SHA_IMR_Msk                         _U_(0x10101)                                   /**< (SHA_IMR) Register Mask  */


/* -------- SHA_ISR : (SHA Offset: 0x1c) (R/ 32) Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DATRDY:1;                  /**< bit:      0  Data Ready (cleared by writing a 1 to bit SWRST or START in SHA_CR, or by reading SHA_IODATARx) */
    uint32_t :3;                        /**< bit:   1..3  Reserved */
    uint32_t WRDY:1;                    /**< bit:      4  Input Data Register Write Ready          */
    uint32_t :3;                        /**< bit:   5..7  Reserved */
    uint32_t URAD:1;                    /**< bit:      8  Unspecified Register Access Detection Status (cleared by writing a 1 to SWRST bit in SHA_CR) */
    uint32_t :3;                        /**< bit:  9..11  Reserved */
    uint32_t URAT:3;                    /**< bit: 12..14  Unspecified Register Access Type (cleared by writing a 1 to SWRST bit in SHA_CR) */
    uint32_t :1;                        /**< bit:     15  Reserved */
    uint32_t CHECKF:1;                  /**< bit:     16  Check Done Status (cleared by writing START or SWRST bits in SHA_CR or by reading SHA_IODATARx) */
    uint32_t :3;                        /**< bit: 17..19  Reserved */
    uint32_t CHKST:4;                   /**< bit: 20..23  Check Status (cleared by writing START or SWRST bits in SHA_CR or by reading SHA_IODATARx) */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SHA_ISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SHA_ISR_OFFSET                      (0x1C)                                        /**<  (SHA_ISR) Interrupt Status Register  Offset */

#define SHA_ISR_DATRDY_Pos                  0                                              /**< (SHA_ISR) Data Ready (cleared by writing a 1 to bit SWRST or START in SHA_CR, or by reading SHA_IODATARx) Position */
#define SHA_ISR_DATRDY_Msk                  (_U_(0x1) << SHA_ISR_DATRDY_Pos)               /**< (SHA_ISR) Data Ready (cleared by writing a 1 to bit SWRST or START in SHA_CR, or by reading SHA_IODATARx) Mask */
#define SHA_ISR_DATRDY                      SHA_ISR_DATRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_ISR_DATRDY_Msk instead */
#define SHA_ISR_WRDY_Pos                    4                                              /**< (SHA_ISR) Input Data Register Write Ready Position */
#define SHA_ISR_WRDY_Msk                    (_U_(0x1) << SHA_ISR_WRDY_Pos)                 /**< (SHA_ISR) Input Data Register Write Ready Mask */
#define SHA_ISR_WRDY                        SHA_ISR_WRDY_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_ISR_WRDY_Msk instead */
#define SHA_ISR_URAD_Pos                    8                                              /**< (SHA_ISR) Unspecified Register Access Detection Status (cleared by writing a 1 to SWRST bit in SHA_CR) Position */
#define SHA_ISR_URAD_Msk                    (_U_(0x1) << SHA_ISR_URAD_Pos)                 /**< (SHA_ISR) Unspecified Register Access Detection Status (cleared by writing a 1 to SWRST bit in SHA_CR) Mask */
#define SHA_ISR_URAD                        SHA_ISR_URAD_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_ISR_URAD_Msk instead */
#define SHA_ISR_URAT_Pos                    12                                             /**< (SHA_ISR) Unspecified Register Access Type (cleared by writing a 1 to SWRST bit in SHA_CR) Position */
#define SHA_ISR_URAT_Msk                    (_U_(0x7) << SHA_ISR_URAT_Pos)                 /**< (SHA_ISR) Unspecified Register Access Type (cleared by writing a 1 to SWRST bit in SHA_CR) Mask */
#define SHA_ISR_URAT(value)                 (SHA_ISR_URAT_Msk & ((value) << SHA_ISR_URAT_Pos))
#define SHA_ISR_CHECKF_Pos                  16                                             /**< (SHA_ISR) Check Done Status (cleared by writing START or SWRST bits in SHA_CR or by reading SHA_IODATARx) Position */
#define SHA_ISR_CHECKF_Msk                  (_U_(0x1) << SHA_ISR_CHECKF_Pos)               /**< (SHA_ISR) Check Done Status (cleared by writing START or SWRST bits in SHA_CR or by reading SHA_IODATARx) Mask */
#define SHA_ISR_CHECKF                      SHA_ISR_CHECKF_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHA_ISR_CHECKF_Msk instead */
#define SHA_ISR_CHKST_Pos                   20                                             /**< (SHA_ISR) Check Status (cleared by writing START or SWRST bits in SHA_CR or by reading SHA_IODATARx) Position */
#define SHA_ISR_CHKST_Msk                   (_U_(0xF) << SHA_ISR_CHKST_Pos)                /**< (SHA_ISR) Check Status (cleared by writing START or SWRST bits in SHA_CR or by reading SHA_IODATARx) Mask */
#define SHA_ISR_CHKST(value)                (SHA_ISR_CHKST_Msk & ((value) << SHA_ISR_CHKST_Pos))
#define SHA_ISR_MASK                        _U_(0xF17111)                                  /**< \deprecated (SHA_ISR) Register MASK  (Use SHA_ISR_Msk instead)  */
#define SHA_ISR_Msk                         _U_(0xF17111)                                  /**< (SHA_ISR) Register Mask  */


/* -------- SHA_MSR : (SHA Offset: 0x20) (R/W 32) Message Size Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MSGSIZE:32;                /**< bit:  0..31  Message Size                             */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SHA_MSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SHA_MSR_OFFSET                      (0x20)                                        /**<  (SHA_MSR) Message Size Register  Offset */

#define SHA_MSR_MSGSIZE_Pos                 0                                              /**< (SHA_MSR) Message Size Position */
#define SHA_MSR_MSGSIZE_Msk                 (_U_(0xFFFFFFFF) << SHA_MSR_MSGSIZE_Pos)       /**< (SHA_MSR) Message Size Mask */
#define SHA_MSR_MSGSIZE(value)              (SHA_MSR_MSGSIZE_Msk & ((value) << SHA_MSR_MSGSIZE_Pos))
#define SHA_MSR_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (SHA_MSR) Register MASK  (Use SHA_MSR_Msk instead)  */
#define SHA_MSR_Msk                         _U_(0xFFFFFFFF)                                /**< (SHA_MSR) Register Mask  */


/* -------- SHA_BCR : (SHA Offset: 0x30) (R/W 32) Bytes Count Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BYTCNT:32;                 /**< bit:  0..31  Remaining Byte Count Before Auto Padding */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SHA_BCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SHA_BCR_OFFSET                      (0x30)                                        /**<  (SHA_BCR) Bytes Count Register  Offset */

#define SHA_BCR_BYTCNT_Pos                  0                                              /**< (SHA_BCR) Remaining Byte Count Before Auto Padding Position */
#define SHA_BCR_BYTCNT_Msk                  (_U_(0xFFFFFFFF) << SHA_BCR_BYTCNT_Pos)        /**< (SHA_BCR) Remaining Byte Count Before Auto Padding Mask */
#define SHA_BCR_BYTCNT(value)               (SHA_BCR_BYTCNT_Msk & ((value) << SHA_BCR_BYTCNT_Pos))
#define SHA_BCR_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (SHA_BCR) Register MASK  (Use SHA_BCR_Msk instead)  */
#define SHA_BCR_Msk                         _U_(0xFFFFFFFF)                                /**< (SHA_BCR) Register Mask  */


/* -------- SHA_IDATAR : (SHA Offset: 0x40) (/W 32) Input Data 0 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t IDATA:32;                  /**< bit:  0..31  Input Data                               */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SHA_IDATAR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SHA_IDATAR_OFFSET                   (0x40)                                        /**<  (SHA_IDATAR) Input Data 0 Register  Offset */

#define SHA_IDATAR_IDATA_Pos                0                                              /**< (SHA_IDATAR) Input Data Position */
#define SHA_IDATAR_IDATA_Msk                (_U_(0xFFFFFFFF) << SHA_IDATAR_IDATA_Pos)      /**< (SHA_IDATAR) Input Data Mask */
#define SHA_IDATAR_IDATA(value)             (SHA_IDATAR_IDATA_Msk & ((value) << SHA_IDATAR_IDATA_Pos))
#define SHA_IDATAR_MASK                     _U_(0xFFFFFFFF)                                /**< \deprecated (SHA_IDATAR) Register MASK  (Use SHA_IDATAR_Msk instead)  */
#define SHA_IDATAR_Msk                      _U_(0xFFFFFFFF)                                /**< (SHA_IDATAR) Register Mask  */


/* -------- SHA_IODATAR : (SHA Offset: 0x80) (R/W 32) Input/Output Data 0 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t IODATA:32;                 /**< bit:  0..31  Input/Output Data                        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SHA_IODATAR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SHA_IODATAR_OFFSET                  (0x80)                                        /**<  (SHA_IODATAR) Input/Output Data 0 Register  Offset */

#define SHA_IODATAR_IODATA_Pos              0                                              /**< (SHA_IODATAR) Input/Output Data Position */
#define SHA_IODATAR_IODATA_Msk              (_U_(0xFFFFFFFF) << SHA_IODATAR_IODATA_Pos)    /**< (SHA_IODATAR) Input/Output Data Mask */
#define SHA_IODATAR_IODATA(value)           (SHA_IODATAR_IODATA_Msk & ((value) << SHA_IODATAR_IODATA_Pos))
#define SHA_IODATAR_MASK                    _U_(0xFFFFFFFF)                                /**< \deprecated (SHA_IODATAR) Register MASK  (Use SHA_IODATAR_Msk instead)  */
#define SHA_IODATAR_Msk                     _U_(0xFFFFFFFF)                                /**< (SHA_IODATAR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief SHA hardware registers */
typedef struct {  
  __O  uint32_t SHA_CR;         /**< (SHA Offset: 0x00) Control Register */
  __IO uint32_t SHA_MR;         /**< (SHA Offset: 0x04) Mode Register */
  __I  uint8_t                        Reserved1[8];
  __O  uint32_t SHA_IER;        /**< (SHA Offset: 0x10) Interrupt Enable Register */
  __O  uint32_t SHA_IDR;        /**< (SHA Offset: 0x14) Interrupt Disable Register */
  __I  uint32_t SHA_IMR;        /**< (SHA Offset: 0x18) Interrupt Mask Register */
  __I  uint32_t SHA_ISR;        /**< (SHA Offset: 0x1C) Interrupt Status Register */
  __IO uint32_t SHA_MSR;        /**< (SHA Offset: 0x20) Message Size Register */
  __I  uint8_t                        Reserved2[12];
  __IO uint32_t SHA_BCR;        /**< (SHA Offset: 0x30) Bytes Count Register */
  __I  uint8_t                        Reserved3[12];
  __O  uint32_t SHA_IDATAR[16]; /**< (SHA Offset: 0x40) Input Data 0 Register */
  __IO uint32_t SHA_IODATAR[16]; /**< (SHA Offset: 0x80) Input/Output Data 0 Register */
} Sha;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief SHA hardware registers */
typedef struct {  
  __O  SHA_CR_Type                    SHA_CR;         /**< Offset: 0x00 ( /W  32) Control Register */
  __IO SHA_MR_Type                    SHA_MR;         /**< Offset: 0x04 (R/W  32) Mode Register */
  __I  uint8_t                        Reserved1[8];
  __O  SHA_IER_Type                   SHA_IER;        /**< Offset: 0x10 ( /W  32) Interrupt Enable Register */
  __O  SHA_IDR_Type                   SHA_IDR;        /**< Offset: 0x14 ( /W  32) Interrupt Disable Register */
  __I  SHA_IMR_Type                   SHA_IMR;        /**< Offset: 0x18 (R/   32) Interrupt Mask Register */
  __I  SHA_ISR_Type                   SHA_ISR;        /**< Offset: 0x1C (R/   32) Interrupt Status Register */
  __IO SHA_MSR_Type                   SHA_MSR;        /**< Offset: 0x20 (R/W  32) Message Size Register */
  __I  uint8_t                        Reserved2[12];
  __IO SHA_BCR_Type                   SHA_BCR;        /**< Offset: 0x30 (R/W  32) Bytes Count Register */
  __I  uint8_t                        Reserved3[12];
  __O  SHA_IDATAR_Type                SHA_IDATAR[16]; /**< Offset: 0x40 ( /W  32) Input Data 0 Register */
  __IO SHA_IODATAR_Type               SHA_IODATAR[16]; /**< Offset: 0x80 (R/W  32) Input/Output Data 0 Register */
} Sha;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Secure Hash Algorithm */

#endif /* _SAMA5D2_SHA_COMPONENT_H_ */
