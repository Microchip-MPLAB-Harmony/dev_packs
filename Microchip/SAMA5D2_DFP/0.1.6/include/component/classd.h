/**
 * \file
 *
 * \brief Component description for CLASSD
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
#ifndef _SAMA5D2_CLASSD_COMPONENT_H_
#define _SAMA5D2_CLASSD_COMPONENT_H_
#define _SAMA5D2_CLASSD_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Audio Class D Amplifier (CLASSD)
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR CLASSD */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define CLASSD_11283                      /**< (CLASSD) Module ID */
#define REV_CLASSD G                      /**< (CLASSD) Module revision */

/* -------- CLASSD_CR : (CLASSD Offset: 0x00) (/W 32) Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset                           */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} CLASSD_CR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CLASSD_CR_OFFSET                    (0x00)                                        /**<  (CLASSD_CR) Control Register  Offset */

#define CLASSD_CR_SWRST_Pos                 0                                              /**< (CLASSD_CR) Software Reset Position */
#define CLASSD_CR_SWRST_Msk                 (_U_(0x1) << CLASSD_CR_SWRST_Pos)              /**< (CLASSD_CR) Software Reset Mask */
#define CLASSD_CR_SWRST                     CLASSD_CR_SWRST_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use CLASSD_CR_SWRST_Msk instead */
#define CLASSD_CR_MASK                      _U_(0x01)                                      /**< \deprecated (CLASSD_CR) Register MASK  (Use CLASSD_CR_Msk instead)  */
#define CLASSD_CR_Msk                       _U_(0x01)                                      /**< (CLASSD_CR) Register Mask  */


/* -------- CLASSD_MR : (CLASSD Offset: 0x04) (R/W 32) Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t LEN:1;                     /**< bit:      0  Left Channel Enable                      */
    uint32_t LMUTE:1;                   /**< bit:      1  Left Channel Mute                        */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t REN:1;                     /**< bit:      4  Right Channel Enable                     */
    uint32_t RMUTE:1;                   /**< bit:      5  Right Channel Mute                       */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t PWMTYP:1;                  /**< bit:      8  PWM Modulation Type                      */
    uint32_t :7;                        /**< bit:  9..15  Reserved */
    uint32_t NON_OVERLAP:1;             /**< bit:     16  Non-Overlapping Enable                   */
    uint32_t :3;                        /**< bit: 17..19  Reserved */
    uint32_t NOVRVAL:2;                 /**< bit: 20..21  Non-Overlapping Value                    */
    uint32_t :10;                       /**< bit: 22..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} CLASSD_MR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CLASSD_MR_OFFSET                    (0x04)                                        /**<  (CLASSD_MR) Mode Register  Offset */

#define CLASSD_MR_LEN_Pos                   0                                              /**< (CLASSD_MR) Left Channel Enable Position */
#define CLASSD_MR_LEN_Msk                   (_U_(0x1) << CLASSD_MR_LEN_Pos)                /**< (CLASSD_MR) Left Channel Enable Mask */
#define CLASSD_MR_LEN                       CLASSD_MR_LEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use CLASSD_MR_LEN_Msk instead */
#define CLASSD_MR_LMUTE_Pos                 1                                              /**< (CLASSD_MR) Left Channel Mute Position */
#define CLASSD_MR_LMUTE_Msk                 (_U_(0x1) << CLASSD_MR_LMUTE_Pos)              /**< (CLASSD_MR) Left Channel Mute Mask */
#define CLASSD_MR_LMUTE                     CLASSD_MR_LMUTE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use CLASSD_MR_LMUTE_Msk instead */
#define CLASSD_MR_REN_Pos                   4                                              /**< (CLASSD_MR) Right Channel Enable Position */
#define CLASSD_MR_REN_Msk                   (_U_(0x1) << CLASSD_MR_REN_Pos)                /**< (CLASSD_MR) Right Channel Enable Mask */
#define CLASSD_MR_REN                       CLASSD_MR_REN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use CLASSD_MR_REN_Msk instead */
#define CLASSD_MR_RMUTE_Pos                 5                                              /**< (CLASSD_MR) Right Channel Mute Position */
#define CLASSD_MR_RMUTE_Msk                 (_U_(0x1) << CLASSD_MR_RMUTE_Pos)              /**< (CLASSD_MR) Right Channel Mute Mask */
#define CLASSD_MR_RMUTE                     CLASSD_MR_RMUTE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use CLASSD_MR_RMUTE_Msk instead */
#define CLASSD_MR_PWMTYP_Pos                8                                              /**< (CLASSD_MR) PWM Modulation Type Position */
#define CLASSD_MR_PWMTYP_Msk                (_U_(0x1) << CLASSD_MR_PWMTYP_Pos)             /**< (CLASSD_MR) PWM Modulation Type Mask */
#define CLASSD_MR_PWMTYP                    CLASSD_MR_PWMTYP_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use CLASSD_MR_PWMTYP_Msk instead */
#define CLASSD_MR_NON_OVERLAP_Pos           16                                             /**< (CLASSD_MR) Non-Overlapping Enable Position */
#define CLASSD_MR_NON_OVERLAP_Msk           (_U_(0x1) << CLASSD_MR_NON_OVERLAP_Pos)        /**< (CLASSD_MR) Non-Overlapping Enable Mask */
#define CLASSD_MR_NON_OVERLAP               CLASSD_MR_NON_OVERLAP_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use CLASSD_MR_NON_OVERLAP_Msk instead */
#define CLASSD_MR_NOVRVAL_Pos               20                                             /**< (CLASSD_MR) Non-Overlapping Value Position */
#define CLASSD_MR_NOVRVAL_Msk               (_U_(0x3) << CLASSD_MR_NOVRVAL_Pos)            /**< (CLASSD_MR) Non-Overlapping Value Mask */
#define CLASSD_MR_NOVRVAL(value)            (CLASSD_MR_NOVRVAL_Msk & ((value) << CLASSD_MR_NOVRVAL_Pos))
#define   CLASSD_MR_NOVRVAL_5NS_Val         _U_(0x0)                                       /**< (CLASSD_MR) Non-overlapping time is 5 ns  */
#define   CLASSD_MR_NOVRVAL_10NS_Val        _U_(0x1)                                       /**< (CLASSD_MR) Non-overlapping time is 10 ns  */
#define   CLASSD_MR_NOVRVAL_15NS_Val        _U_(0x2)                                       /**< (CLASSD_MR) Non-overlapping time is 15 ns  */
#define   CLASSD_MR_NOVRVAL_20NS_Val        _U_(0x3)                                       /**< (CLASSD_MR) Non-overlapping time is 20 ns  */
#define CLASSD_MR_NOVRVAL_5NS               (CLASSD_MR_NOVRVAL_5NS_Val << CLASSD_MR_NOVRVAL_Pos)  /**< (CLASSD_MR) Non-overlapping time is 5 ns Position  */
#define CLASSD_MR_NOVRVAL_10NS              (CLASSD_MR_NOVRVAL_10NS_Val << CLASSD_MR_NOVRVAL_Pos)  /**< (CLASSD_MR) Non-overlapping time is 10 ns Position  */
#define CLASSD_MR_NOVRVAL_15NS              (CLASSD_MR_NOVRVAL_15NS_Val << CLASSD_MR_NOVRVAL_Pos)  /**< (CLASSD_MR) Non-overlapping time is 15 ns Position  */
#define CLASSD_MR_NOVRVAL_20NS              (CLASSD_MR_NOVRVAL_20NS_Val << CLASSD_MR_NOVRVAL_Pos)  /**< (CLASSD_MR) Non-overlapping time is 20 ns Position  */
#define CLASSD_MR_MASK                      _U_(0x310133)                                  /**< \deprecated (CLASSD_MR) Register MASK  (Use CLASSD_MR_Msk instead)  */
#define CLASSD_MR_Msk                       _U_(0x310133)                                  /**< (CLASSD_MR) Register Mask  */


/* -------- CLASSD_INTPMR : (CLASSD Offset: 0x08) (R/W 32) Interpolator Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ATTL:7;                    /**< bit:   0..6  Left Channel Attenuation                 */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t ATTR:7;                    /**< bit:  8..14  Right Channel Attenuation                */
    uint32_t :1;                        /**< bit:     15  Reserved */
    uint32_t DSPCLKFREQ:1;              /**< bit:     16  DSP Clock Frequency                      */
    uint32_t :1;                        /**< bit:     17  Reserved */
    uint32_t DEEMP:1;                   /**< bit:     18  Enable De-emphasis Filter                */
    uint32_t SWAP:1;                    /**< bit:     19  Swap Left and Right Channels             */
    uint32_t FRAME:3;                   /**< bit: 20..22  CLASSD Incoming Data Sampling Frequency  */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t EQCFG:4;                   /**< bit: 24..27  Equalization Selection                   */
    uint32_t MONO:1;                    /**< bit:     28  Mono Signal                              */
    uint32_t MONOMODE:2;                /**< bit: 29..30  Mono Mode Selection                      */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} CLASSD_INTPMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CLASSD_INTPMR_OFFSET                (0x08)                                        /**<  (CLASSD_INTPMR) Interpolator Mode Register  Offset */

#define CLASSD_INTPMR_ATTL_Pos              0                                              /**< (CLASSD_INTPMR) Left Channel Attenuation Position */
#define CLASSD_INTPMR_ATTL_Msk              (_U_(0x7F) << CLASSD_INTPMR_ATTL_Pos)          /**< (CLASSD_INTPMR) Left Channel Attenuation Mask */
#define CLASSD_INTPMR_ATTL(value)           (CLASSD_INTPMR_ATTL_Msk & ((value) << CLASSD_INTPMR_ATTL_Pos))
#define CLASSD_INTPMR_ATTR_Pos              8                                              /**< (CLASSD_INTPMR) Right Channel Attenuation Position */
#define CLASSD_INTPMR_ATTR_Msk              (_U_(0x7F) << CLASSD_INTPMR_ATTR_Pos)          /**< (CLASSD_INTPMR) Right Channel Attenuation Mask */
#define CLASSD_INTPMR_ATTR(value)           (CLASSD_INTPMR_ATTR_Msk & ((value) << CLASSD_INTPMR_ATTR_Pos))
#define CLASSD_INTPMR_DSPCLKFREQ_Pos        16                                             /**< (CLASSD_INTPMR) DSP Clock Frequency Position */
#define CLASSD_INTPMR_DSPCLKFREQ_Msk        (_U_(0x1) << CLASSD_INTPMR_DSPCLKFREQ_Pos)     /**< (CLASSD_INTPMR) DSP Clock Frequency Mask */
#define CLASSD_INTPMR_DSPCLKFREQ            CLASSD_INTPMR_DSPCLKFREQ_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use CLASSD_INTPMR_DSPCLKFREQ_Msk instead */
#define   CLASSD_INTPMR_DSPCLKFREQ_12M288_Val _U_(0x0)                                       /**< (CLASSD_INTPMR) DSP Clock (DSPCLK) is 12.288 MHz.  */
#define   CLASSD_INTPMR_DSPCLKFREQ_11M2896_Val _U_(0x1)                                       /**< (CLASSD_INTPMR) DSP Clock (DSPCLK) is 11.2896 MHz.  */
#define CLASSD_INTPMR_DSPCLKFREQ_12M288     (CLASSD_INTPMR_DSPCLKFREQ_12M288_Val << CLASSD_INTPMR_DSPCLKFREQ_Pos)  /**< (CLASSD_INTPMR) DSP Clock (DSPCLK) is 12.288 MHz. Position  */
#define CLASSD_INTPMR_DSPCLKFREQ_11M2896    (CLASSD_INTPMR_DSPCLKFREQ_11M2896_Val << CLASSD_INTPMR_DSPCLKFREQ_Pos)  /**< (CLASSD_INTPMR) DSP Clock (DSPCLK) is 11.2896 MHz. Position  */
#define CLASSD_INTPMR_DEEMP_Pos             18                                             /**< (CLASSD_INTPMR) Enable De-emphasis Filter Position */
#define CLASSD_INTPMR_DEEMP_Msk             (_U_(0x1) << CLASSD_INTPMR_DEEMP_Pos)          /**< (CLASSD_INTPMR) Enable De-emphasis Filter Mask */
#define CLASSD_INTPMR_DEEMP                 CLASSD_INTPMR_DEEMP_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use CLASSD_INTPMR_DEEMP_Msk instead */
#define   CLASSD_INTPMR_DEEMP_DISABLED_Val  _U_(0x0)                                       /**< (CLASSD_INTPMR) De-emphasis filter is disabled.  */
#define   CLASSD_INTPMR_DEEMP_ENABLED_Val   _U_(0x1)                                       /**< (CLASSD_INTPMR) De-emphasis filter is enabled.  */
#define CLASSD_INTPMR_DEEMP_DISABLED        (CLASSD_INTPMR_DEEMP_DISABLED_Val << CLASSD_INTPMR_DEEMP_Pos)  /**< (CLASSD_INTPMR) De-emphasis filter is disabled. Position  */
#define CLASSD_INTPMR_DEEMP_ENABLED         (CLASSD_INTPMR_DEEMP_ENABLED_Val << CLASSD_INTPMR_DEEMP_Pos)  /**< (CLASSD_INTPMR) De-emphasis filter is enabled. Position  */
#define CLASSD_INTPMR_SWAP_Pos              19                                             /**< (CLASSD_INTPMR) Swap Left and Right Channels Position */
#define CLASSD_INTPMR_SWAP_Msk              (_U_(0x1) << CLASSD_INTPMR_SWAP_Pos)           /**< (CLASSD_INTPMR) Swap Left and Right Channels Mask */
#define CLASSD_INTPMR_SWAP                  CLASSD_INTPMR_SWAP_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use CLASSD_INTPMR_SWAP_Msk instead */
#define   CLASSD_INTPMR_SWAP_LEFT_ON_LSB_Val _U_(0x0)                                       /**< (CLASSD_INTPMR) Left channel is on CLASSD_THR[15:0], right channel is on CLASSD_THR[31:16].  */
#define   CLASSD_INTPMR_SWAP_RIGHT_ON_LSB_Val _U_(0x1)                                       /**< (CLASSD_INTPMR) Right channel is on CLASSD_THR[15:0], left channel is on CLASSD_THR[31:16].  */
#define CLASSD_INTPMR_SWAP_LEFT_ON_LSB      (CLASSD_INTPMR_SWAP_LEFT_ON_LSB_Val << CLASSD_INTPMR_SWAP_Pos)  /**< (CLASSD_INTPMR) Left channel is on CLASSD_THR[15:0], right channel is on CLASSD_THR[31:16]. Position  */
#define CLASSD_INTPMR_SWAP_RIGHT_ON_LSB     (CLASSD_INTPMR_SWAP_RIGHT_ON_LSB_Val << CLASSD_INTPMR_SWAP_Pos)  /**< (CLASSD_INTPMR) Right channel is on CLASSD_THR[15:0], left channel is on CLASSD_THR[31:16]. Position  */
#define CLASSD_INTPMR_FRAME_Pos             20                                             /**< (CLASSD_INTPMR) CLASSD Incoming Data Sampling Frequency Position */
#define CLASSD_INTPMR_FRAME_Msk             (_U_(0x7) << CLASSD_INTPMR_FRAME_Pos)          /**< (CLASSD_INTPMR) CLASSD Incoming Data Sampling Frequency Mask */
#define CLASSD_INTPMR_FRAME(value)          (CLASSD_INTPMR_FRAME_Msk & ((value) << CLASSD_INTPMR_FRAME_Pos))
#define   CLASSD_INTPMR_FRAME_FRAME_8K_Val  _U_(0x0)                                       /**< (CLASSD_INTPMR) 8 kHz  */
#define   CLASSD_INTPMR_FRAME_FRAME_16K_Val _U_(0x1)                                       /**< (CLASSD_INTPMR) 16 kHz  */
#define   CLASSD_INTPMR_FRAME_FRAME_32K_Val _U_(0x2)                                       /**< (CLASSD_INTPMR) 32 kHz  */
#define   CLASSD_INTPMR_FRAME_FRAME_48K_Val _U_(0x3)                                       /**< (CLASSD_INTPMR) 48 kHz  */
#define   CLASSD_INTPMR_FRAME_FRAME_96K_Val _U_(0x4)                                       /**< (CLASSD_INTPMR) 96 kHz  */
#define   CLASSD_INTPMR_FRAME_FRAME_22K_Val _U_(0x5)                                       /**< (CLASSD_INTPMR) 22.05 kHz  */
#define   CLASSD_INTPMR_FRAME_FRAME_44K_Val _U_(0x6)                                       /**< (CLASSD_INTPMR) 44.1 kHz  */
#define   CLASSD_INTPMR_FRAME_FRAME_88K_Val _U_(0x7)                                       /**< (CLASSD_INTPMR) 88.2 kHz  */
#define CLASSD_INTPMR_FRAME_FRAME_8K        (CLASSD_INTPMR_FRAME_FRAME_8K_Val << CLASSD_INTPMR_FRAME_Pos)  /**< (CLASSD_INTPMR) 8 kHz Position  */
#define CLASSD_INTPMR_FRAME_FRAME_16K       (CLASSD_INTPMR_FRAME_FRAME_16K_Val << CLASSD_INTPMR_FRAME_Pos)  /**< (CLASSD_INTPMR) 16 kHz Position  */
#define CLASSD_INTPMR_FRAME_FRAME_32K       (CLASSD_INTPMR_FRAME_FRAME_32K_Val << CLASSD_INTPMR_FRAME_Pos)  /**< (CLASSD_INTPMR) 32 kHz Position  */
#define CLASSD_INTPMR_FRAME_FRAME_48K       (CLASSD_INTPMR_FRAME_FRAME_48K_Val << CLASSD_INTPMR_FRAME_Pos)  /**< (CLASSD_INTPMR) 48 kHz Position  */
#define CLASSD_INTPMR_FRAME_FRAME_96K       (CLASSD_INTPMR_FRAME_FRAME_96K_Val << CLASSD_INTPMR_FRAME_Pos)  /**< (CLASSD_INTPMR) 96 kHz Position  */
#define CLASSD_INTPMR_FRAME_FRAME_22K       (CLASSD_INTPMR_FRAME_FRAME_22K_Val << CLASSD_INTPMR_FRAME_Pos)  /**< (CLASSD_INTPMR) 22.05 kHz Position  */
#define CLASSD_INTPMR_FRAME_FRAME_44K       (CLASSD_INTPMR_FRAME_FRAME_44K_Val << CLASSD_INTPMR_FRAME_Pos)  /**< (CLASSD_INTPMR) 44.1 kHz Position  */
#define CLASSD_INTPMR_FRAME_FRAME_88K       (CLASSD_INTPMR_FRAME_FRAME_88K_Val << CLASSD_INTPMR_FRAME_Pos)  /**< (CLASSD_INTPMR) 88.2 kHz Position  */
#define CLASSD_INTPMR_EQCFG_Pos             24                                             /**< (CLASSD_INTPMR) Equalization Selection Position */
#define CLASSD_INTPMR_EQCFG_Msk             (_U_(0xF) << CLASSD_INTPMR_EQCFG_Pos)          /**< (CLASSD_INTPMR) Equalization Selection Mask */
#define CLASSD_INTPMR_EQCFG(value)          (CLASSD_INTPMR_EQCFG_Msk & ((value) << CLASSD_INTPMR_EQCFG_Pos))
#define   CLASSD_INTPMR_EQCFG_FLAT_Val      _U_(0x0)                                       /**< (CLASSD_INTPMR) Flat Response  */
#define   CLASSD_INTPMR_EQCFG_BBOOST12_Val  _U_(0x1)                                       /**< (CLASSD_INTPMR) Bass boost +12 dB  */
#define   CLASSD_INTPMR_EQCFG_BBOOST6_Val   _U_(0x2)                                       /**< (CLASSD_INTPMR) Bass boost +6 dB  */
#define   CLASSD_INTPMR_EQCFG_BCUT12_Val    _U_(0x3)                                       /**< (CLASSD_INTPMR) Bass cut -12 dB  */
#define   CLASSD_INTPMR_EQCFG_BCUT6_Val     _U_(0x4)                                       /**< (CLASSD_INTPMR) Bass cut -6 dB  */
#define   CLASSD_INTPMR_EQCFG_MBOOST3_Val   _U_(0x5)                                       /**< (CLASSD_INTPMR) Medium boost +3 dB  */
#define   CLASSD_INTPMR_EQCFG_MBOOST8_Val   _U_(0x6)                                       /**< (CLASSD_INTPMR) Medium boost +8 dB  */
#define   CLASSD_INTPMR_EQCFG_MCUT3_Val     _U_(0x7)                                       /**< (CLASSD_INTPMR) Medium cut -3 dB  */
#define   CLASSD_INTPMR_EQCFG_MCUT8_Val     _U_(0x8)                                       /**< (CLASSD_INTPMR) Medium cut -8 dB  */
#define   CLASSD_INTPMR_EQCFG_TBOOST12_Val  _U_(0x9)                                       /**< (CLASSD_INTPMR) Treble boost +12 dB  */
#define   CLASSD_INTPMR_EQCFG_TBOOST6_Val   _U_(0xA)                                       /**< (CLASSD_INTPMR) Treble boost +6 dB  */
#define   CLASSD_INTPMR_EQCFG_TCUT12_Val    _U_(0xB)                                       /**< (CLASSD_INTPMR) Treble cut -12 dB  */
#define   CLASSD_INTPMR_EQCFG_TCUT6_Val     _U_(0xC)                                       /**< (CLASSD_INTPMR) Treble cut -6 dB  */
#define CLASSD_INTPMR_EQCFG_FLAT            (CLASSD_INTPMR_EQCFG_FLAT_Val << CLASSD_INTPMR_EQCFG_Pos)  /**< (CLASSD_INTPMR) Flat Response Position  */
#define CLASSD_INTPMR_EQCFG_BBOOST12        (CLASSD_INTPMR_EQCFG_BBOOST12_Val << CLASSD_INTPMR_EQCFG_Pos)  /**< (CLASSD_INTPMR) Bass boost +12 dB Position  */
#define CLASSD_INTPMR_EQCFG_BBOOST6         (CLASSD_INTPMR_EQCFG_BBOOST6_Val << CLASSD_INTPMR_EQCFG_Pos)  /**< (CLASSD_INTPMR) Bass boost +6 dB Position  */
#define CLASSD_INTPMR_EQCFG_BCUT12          (CLASSD_INTPMR_EQCFG_BCUT12_Val << CLASSD_INTPMR_EQCFG_Pos)  /**< (CLASSD_INTPMR) Bass cut -12 dB Position  */
#define CLASSD_INTPMR_EQCFG_BCUT6           (CLASSD_INTPMR_EQCFG_BCUT6_Val << CLASSD_INTPMR_EQCFG_Pos)  /**< (CLASSD_INTPMR) Bass cut -6 dB Position  */
#define CLASSD_INTPMR_EQCFG_MBOOST3         (CLASSD_INTPMR_EQCFG_MBOOST3_Val << CLASSD_INTPMR_EQCFG_Pos)  /**< (CLASSD_INTPMR) Medium boost +3 dB Position  */
#define CLASSD_INTPMR_EQCFG_MBOOST8         (CLASSD_INTPMR_EQCFG_MBOOST8_Val << CLASSD_INTPMR_EQCFG_Pos)  /**< (CLASSD_INTPMR) Medium boost +8 dB Position  */
#define CLASSD_INTPMR_EQCFG_MCUT3           (CLASSD_INTPMR_EQCFG_MCUT3_Val << CLASSD_INTPMR_EQCFG_Pos)  /**< (CLASSD_INTPMR) Medium cut -3 dB Position  */
#define CLASSD_INTPMR_EQCFG_MCUT8           (CLASSD_INTPMR_EQCFG_MCUT8_Val << CLASSD_INTPMR_EQCFG_Pos)  /**< (CLASSD_INTPMR) Medium cut -8 dB Position  */
#define CLASSD_INTPMR_EQCFG_TBOOST12        (CLASSD_INTPMR_EQCFG_TBOOST12_Val << CLASSD_INTPMR_EQCFG_Pos)  /**< (CLASSD_INTPMR) Treble boost +12 dB Position  */
#define CLASSD_INTPMR_EQCFG_TBOOST6         (CLASSD_INTPMR_EQCFG_TBOOST6_Val << CLASSD_INTPMR_EQCFG_Pos)  /**< (CLASSD_INTPMR) Treble boost +6 dB Position  */
#define CLASSD_INTPMR_EQCFG_TCUT12          (CLASSD_INTPMR_EQCFG_TCUT12_Val << CLASSD_INTPMR_EQCFG_Pos)  /**< (CLASSD_INTPMR) Treble cut -12 dB Position  */
#define CLASSD_INTPMR_EQCFG_TCUT6           (CLASSD_INTPMR_EQCFG_TCUT6_Val << CLASSD_INTPMR_EQCFG_Pos)  /**< (CLASSD_INTPMR) Treble cut -6 dB Position  */
#define CLASSD_INTPMR_MONO_Pos              28                                             /**< (CLASSD_INTPMR) Mono Signal Position */
#define CLASSD_INTPMR_MONO_Msk              (_U_(0x1) << CLASSD_INTPMR_MONO_Pos)           /**< (CLASSD_INTPMR) Mono Signal Mask */
#define CLASSD_INTPMR_MONO                  CLASSD_INTPMR_MONO_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use CLASSD_INTPMR_MONO_Msk instead */
#define   CLASSD_INTPMR_MONO_DISABLED_Val   _U_(0x0)                                       /**< (CLASSD_INTPMR) The signal is sent stereo to the left and right channels.  */
#define   CLASSD_INTPMR_MONO_ENABLED_Val    _U_(0x1)                                       /**< (CLASSD_INTPMR) The same signal is sent on both left and right channels. The sent signal is defined by the MONOMODE field value.  */
#define CLASSD_INTPMR_MONO_DISABLED         (CLASSD_INTPMR_MONO_DISABLED_Val << CLASSD_INTPMR_MONO_Pos)  /**< (CLASSD_INTPMR) The signal is sent stereo to the left and right channels. Position  */
#define CLASSD_INTPMR_MONO_ENABLED          (CLASSD_INTPMR_MONO_ENABLED_Val << CLASSD_INTPMR_MONO_Pos)  /**< (CLASSD_INTPMR) The same signal is sent on both left and right channels. The sent signal is defined by the MONOMODE field value. Position  */
#define CLASSD_INTPMR_MONOMODE_Pos          29                                             /**< (CLASSD_INTPMR) Mono Mode Selection Position */
#define CLASSD_INTPMR_MONOMODE_Msk          (_U_(0x3) << CLASSD_INTPMR_MONOMODE_Pos)       /**< (CLASSD_INTPMR) Mono Mode Selection Mask */
#define CLASSD_INTPMR_MONOMODE(value)       (CLASSD_INTPMR_MONOMODE_Msk & ((value) << CLASSD_INTPMR_MONOMODE_Pos))
#define   CLASSD_INTPMR_MONOMODE_MONOMIX_Val _U_(0x0)                                       /**< (CLASSD_INTPMR) (left + right) / 2 is sent on both channels  */
#define   CLASSD_INTPMR_MONOMODE_MONOSAT_Val _U_(0x1)                                       /**< (CLASSD_INTPMR) (left + right) is sent to both channels. If the sum is too high, the result is saturated.  */
#define   CLASSD_INTPMR_MONOMODE_MONOLEFT_Val _U_(0x2)                                       /**< (CLASSD_INTPMR) THR[15:0] is sent on both left and right channels  */
#define   CLASSD_INTPMR_MONOMODE_MONORIGHT_Val _U_(0x3)                                       /**< (CLASSD_INTPMR) THR[31:16] is sent on both left and right channels  */
#define CLASSD_INTPMR_MONOMODE_MONOMIX      (CLASSD_INTPMR_MONOMODE_MONOMIX_Val << CLASSD_INTPMR_MONOMODE_Pos)  /**< (CLASSD_INTPMR) (left + right) / 2 is sent on both channels Position  */
#define CLASSD_INTPMR_MONOMODE_MONOSAT      (CLASSD_INTPMR_MONOMODE_MONOSAT_Val << CLASSD_INTPMR_MONOMODE_Pos)  /**< (CLASSD_INTPMR) (left + right) is sent to both channels. If the sum is too high, the result is saturated. Position  */
#define CLASSD_INTPMR_MONOMODE_MONOLEFT     (CLASSD_INTPMR_MONOMODE_MONOLEFT_Val << CLASSD_INTPMR_MONOMODE_Pos)  /**< (CLASSD_INTPMR) THR[15:0] is sent on both left and right channels Position  */
#define CLASSD_INTPMR_MONOMODE_MONORIGHT    (CLASSD_INTPMR_MONOMODE_MONORIGHT_Val << CLASSD_INTPMR_MONOMODE_Pos)  /**< (CLASSD_INTPMR) THR[31:16] is sent on both left and right channels Position  */
#define CLASSD_INTPMR_MASK                  _U_(0x7F7D7F7F)                                /**< \deprecated (CLASSD_INTPMR) Register MASK  (Use CLASSD_INTPMR_Msk instead)  */
#define CLASSD_INTPMR_Msk                   _U_(0x7F7D7F7F)                                /**< (CLASSD_INTPMR) Register Mask  */


/* -------- CLASSD_INTSR : (CLASSD Offset: 0x0c) (R/ 32) Interpolator Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CFGERR:1;                  /**< bit:      0  Configuration Error                      */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} CLASSD_INTSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CLASSD_INTSR_OFFSET                 (0x0C)                                        /**<  (CLASSD_INTSR) Interpolator Status Register  Offset */

#define CLASSD_INTSR_CFGERR_Pos             0                                              /**< (CLASSD_INTSR) Configuration Error Position */
#define CLASSD_INTSR_CFGERR_Msk             (_U_(0x1) << CLASSD_INTSR_CFGERR_Pos)          /**< (CLASSD_INTSR) Configuration Error Mask */
#define CLASSD_INTSR_CFGERR                 CLASSD_INTSR_CFGERR_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use CLASSD_INTSR_CFGERR_Msk instead */
#define CLASSD_INTSR_MASK                   _U_(0x01)                                      /**< \deprecated (CLASSD_INTSR) Register MASK  (Use CLASSD_INTSR_Msk instead)  */
#define CLASSD_INTSR_Msk                    _U_(0x01)                                      /**< (CLASSD_INTSR) Register Mask  */


/* -------- CLASSD_THR : (CLASSD Offset: 0x10) (R/W 32) Transmit Holding Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t LDATA:16;                  /**< bit:  0..15  Left Channel Data                        */
    uint32_t RDATA:16;                  /**< bit: 16..31  Right Channel Data                       */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} CLASSD_THR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CLASSD_THR_OFFSET                   (0x10)                                        /**<  (CLASSD_THR) Transmit Holding Register  Offset */

#define CLASSD_THR_LDATA_Pos                0                                              /**< (CLASSD_THR) Left Channel Data Position */
#define CLASSD_THR_LDATA_Msk                (_U_(0xFFFF) << CLASSD_THR_LDATA_Pos)          /**< (CLASSD_THR) Left Channel Data Mask */
#define CLASSD_THR_LDATA(value)             (CLASSD_THR_LDATA_Msk & ((value) << CLASSD_THR_LDATA_Pos))
#define CLASSD_THR_RDATA_Pos                16                                             /**< (CLASSD_THR) Right Channel Data Position */
#define CLASSD_THR_RDATA_Msk                (_U_(0xFFFF) << CLASSD_THR_RDATA_Pos)          /**< (CLASSD_THR) Right Channel Data Mask */
#define CLASSD_THR_RDATA(value)             (CLASSD_THR_RDATA_Msk & ((value) << CLASSD_THR_RDATA_Pos))
#define CLASSD_THR_MASK                     _U_(0xFFFFFFFF)                                /**< \deprecated (CLASSD_THR) Register MASK  (Use CLASSD_THR_Msk instead)  */
#define CLASSD_THR_Msk                      _U_(0xFFFFFFFF)                                /**< (CLASSD_THR) Register Mask  */


/* -------- CLASSD_IER : (CLASSD Offset: 0x14) (/W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DATRDY:1;                  /**< bit:      0  Data Ready                               */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} CLASSD_IER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CLASSD_IER_OFFSET                   (0x14)                                        /**<  (CLASSD_IER) Interrupt Enable Register  Offset */

#define CLASSD_IER_DATRDY_Pos               0                                              /**< (CLASSD_IER) Data Ready Position */
#define CLASSD_IER_DATRDY_Msk               (_U_(0x1) << CLASSD_IER_DATRDY_Pos)            /**< (CLASSD_IER) Data Ready Mask */
#define CLASSD_IER_DATRDY                   CLASSD_IER_DATRDY_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use CLASSD_IER_DATRDY_Msk instead */
#define CLASSD_IER_MASK                     _U_(0x01)                                      /**< \deprecated (CLASSD_IER) Register MASK  (Use CLASSD_IER_Msk instead)  */
#define CLASSD_IER_Msk                      _U_(0x01)                                      /**< (CLASSD_IER) Register Mask  */


/* -------- CLASSD_IDR : (CLASSD Offset: 0x18) (/W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DATRDY:1;                  /**< bit:      0  Data Ready                               */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} CLASSD_IDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CLASSD_IDR_OFFSET                   (0x18)                                        /**<  (CLASSD_IDR) Interrupt Disable Register  Offset */

#define CLASSD_IDR_DATRDY_Pos               0                                              /**< (CLASSD_IDR) Data Ready Position */
#define CLASSD_IDR_DATRDY_Msk               (_U_(0x1) << CLASSD_IDR_DATRDY_Pos)            /**< (CLASSD_IDR) Data Ready Mask */
#define CLASSD_IDR_DATRDY                   CLASSD_IDR_DATRDY_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use CLASSD_IDR_DATRDY_Msk instead */
#define CLASSD_IDR_MASK                     _U_(0x01)                                      /**< \deprecated (CLASSD_IDR) Register MASK  (Use CLASSD_IDR_Msk instead)  */
#define CLASSD_IDR_Msk                      _U_(0x01)                                      /**< (CLASSD_IDR) Register Mask  */


/* -------- CLASSD_IMR : (CLASSD Offset: 0x1c) (R/W 32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DATRDY:1;                  /**< bit:      0  Data Ready                               */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} CLASSD_IMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CLASSD_IMR_OFFSET                   (0x1C)                                        /**<  (CLASSD_IMR) Interrupt Mask Register  Offset */

#define CLASSD_IMR_DATRDY_Pos               0                                              /**< (CLASSD_IMR) Data Ready Position */
#define CLASSD_IMR_DATRDY_Msk               (_U_(0x1) << CLASSD_IMR_DATRDY_Pos)            /**< (CLASSD_IMR) Data Ready Mask */
#define CLASSD_IMR_DATRDY                   CLASSD_IMR_DATRDY_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use CLASSD_IMR_DATRDY_Msk instead */
#define CLASSD_IMR_MASK                     _U_(0x01)                                      /**< \deprecated (CLASSD_IMR) Register MASK  (Use CLASSD_IMR_Msk instead)  */
#define CLASSD_IMR_Msk                      _U_(0x01)                                      /**< (CLASSD_IMR) Register Mask  */


/* -------- CLASSD_ISR : (CLASSD Offset: 0x20) (R/ 32) Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DATRDY:1;                  /**< bit:      0  Data Ready                               */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} CLASSD_ISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CLASSD_ISR_OFFSET                   (0x20)                                        /**<  (CLASSD_ISR) Interrupt Status Register  Offset */

#define CLASSD_ISR_DATRDY_Pos               0                                              /**< (CLASSD_ISR) Data Ready Position */
#define CLASSD_ISR_DATRDY_Msk               (_U_(0x1) << CLASSD_ISR_DATRDY_Pos)            /**< (CLASSD_ISR) Data Ready Mask */
#define CLASSD_ISR_DATRDY                   CLASSD_ISR_DATRDY_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use CLASSD_ISR_DATRDY_Msk instead */
#define CLASSD_ISR_MASK                     _U_(0x01)                                      /**< \deprecated (CLASSD_ISR) Register MASK  (Use CLASSD_ISR_Msk instead)  */
#define CLASSD_ISR_Msk                      _U_(0x01)                                      /**< (CLASSD_ISR) Register Mask  */


/* -------- CLASSD_WPMR : (CLASSD Offset: 0xe4) (R/W 32) Write Protection Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPEN:1;                    /**< bit:      0  Write Protection Enable                  */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPKEY:24;                  /**< bit:  8..31  Write Protection Key                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} CLASSD_WPMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CLASSD_WPMR_OFFSET                  (0xE4)                                        /**<  (CLASSD_WPMR) Write Protection Mode Register  Offset */

#define CLASSD_WPMR_WPEN_Pos                0                                              /**< (CLASSD_WPMR) Write Protection Enable Position */
#define CLASSD_WPMR_WPEN_Msk                (_U_(0x1) << CLASSD_WPMR_WPEN_Pos)             /**< (CLASSD_WPMR) Write Protection Enable Mask */
#define CLASSD_WPMR_WPEN                    CLASSD_WPMR_WPEN_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use CLASSD_WPMR_WPEN_Msk instead */
#define CLASSD_WPMR_WPKEY_Pos               8                                              /**< (CLASSD_WPMR) Write Protection Key Position */
#define CLASSD_WPMR_WPKEY_Msk               (_U_(0xFFFFFF) << CLASSD_WPMR_WPKEY_Pos)       /**< (CLASSD_WPMR) Write Protection Key Mask */
#define CLASSD_WPMR_WPKEY(value)            (CLASSD_WPMR_WPKEY_Msk & ((value) << CLASSD_WPMR_WPKEY_Pos))
#define   CLASSD_WPMR_WPKEY_PASSWD_Val      _U_(0x434C44)                                  /**< (CLASSD_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0.  */
#define CLASSD_WPMR_WPKEY_PASSWD            (CLASSD_WPMR_WPKEY_PASSWD_Val << CLASSD_WPMR_WPKEY_Pos)  /**< (CLASSD_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0. Position  */
#define CLASSD_WPMR_MASK                    _U_(0xFFFFFF01)                                /**< \deprecated (CLASSD_WPMR) Register MASK  (Use CLASSD_WPMR_Msk instead)  */
#define CLASSD_WPMR_Msk                     _U_(0xFFFFFF01)                                /**< (CLASSD_WPMR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief CLASSD hardware registers */
typedef struct {  
  __O  uint32_t CLASSD_CR;      /**< (CLASSD Offset: 0x00) Control Register */
  __IO uint32_t CLASSD_MR;      /**< (CLASSD Offset: 0x04) Mode Register */
  __IO uint32_t CLASSD_INTPMR;  /**< (CLASSD Offset: 0x08) Interpolator Mode Register */
  __I  uint32_t CLASSD_INTSR;   /**< (CLASSD Offset: 0x0C) Interpolator Status Register */
  __IO uint32_t CLASSD_THR;     /**< (CLASSD Offset: 0x10) Transmit Holding Register */
  __O  uint32_t CLASSD_IER;     /**< (CLASSD Offset: 0x14) Interrupt Enable Register */
  __O  uint32_t CLASSD_IDR;     /**< (CLASSD Offset: 0x18) Interrupt Disable Register */
  __IO uint32_t CLASSD_IMR;     /**< (CLASSD Offset: 0x1C) Interrupt Mask Register */
  __I  uint32_t CLASSD_ISR;     /**< (CLASSD Offset: 0x20) Interrupt Status Register */
  __I  uint8_t                        Reserved1[192];
  __IO uint32_t CLASSD_WPMR;    /**< (CLASSD Offset: 0xE4) Write Protection Mode Register */
} Classd;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief CLASSD hardware registers */
typedef struct {  
  __O  CLASSD_CR_Type                 CLASSD_CR;      /**< Offset: 0x00 ( /W  32) Control Register */
  __IO CLASSD_MR_Type                 CLASSD_MR;      /**< Offset: 0x04 (R/W  32) Mode Register */
  __IO CLASSD_INTPMR_Type             CLASSD_INTPMR;  /**< Offset: 0x08 (R/W  32) Interpolator Mode Register */
  __I  CLASSD_INTSR_Type              CLASSD_INTSR;   /**< Offset: 0x0C (R/   32) Interpolator Status Register */
  __IO CLASSD_THR_Type                CLASSD_THR;     /**< Offset: 0x10 (R/W  32) Transmit Holding Register */
  __O  CLASSD_IER_Type                CLASSD_IER;     /**< Offset: 0x14 ( /W  32) Interrupt Enable Register */
  __O  CLASSD_IDR_Type                CLASSD_IDR;     /**< Offset: 0x18 ( /W  32) Interrupt Disable Register */
  __IO CLASSD_IMR_Type                CLASSD_IMR;     /**< Offset: 0x1C (R/W  32) Interrupt Mask Register */
  __I  CLASSD_ISR_Type                CLASSD_ISR;     /**< Offset: 0x20 (R/   32) Interrupt Status Register */
  __I  uint8_t                        Reserved1[192];
  __IO CLASSD_WPMR_Type               CLASSD_WPMR;    /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
} Classd;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Audio Class D Amplifier (CLASSD) */

#endif /* _SAMA5D2_CLASSD_COMPONENT_H_ */
