/**
 * \file
 *
 * \brief Component description for SHDWC
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
#ifndef _SAMA5D2_SHDWC_COMPONENT_H_
#define _SAMA5D2_SHDWC_COMPONENT_H_
#define _SAMA5D2_SHDWC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Shutdown Controller
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SHDWC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define SHDWC_6122                       /**< (SHDWC) Module ID */
#define REV_SHDWC S                      /**< (SHDWC) Module revision */

/* -------- SHDWC_SHDW_CR : (SHDWC Offset: 0x00) (/W 32) Shutdown Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SHDW:1;                    /**< bit:      0  Shutdown Command                         */
    uint32_t :23;                       /**< bit:  1..23  Reserved */
    uint32_t KEY:8;                     /**< bit: 24..31  Password                                 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SHDWC_SHDW_CR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SHDWC_SHDW_CR_OFFSET                (0x00)                                        /**<  (SHDWC_SHDW_CR) Shutdown Control Register  Offset */

#define SHDWC_SHDW_CR_SHDW_Pos              0                                              /**< (SHDWC_SHDW_CR) Shutdown Command Position */
#define SHDWC_SHDW_CR_SHDW_Msk              (_U_(0x1) << SHDWC_SHDW_CR_SHDW_Pos)           /**< (SHDWC_SHDW_CR) Shutdown Command Mask */
#define SHDWC_SHDW_CR_SHDW                  SHDWC_SHDW_CR_SHDW_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_CR_SHDW_Msk instead */
#define SHDWC_SHDW_CR_KEY_Pos               24                                             /**< (SHDWC_SHDW_CR) Password Position */
#define SHDWC_SHDW_CR_KEY_Msk               (_U_(0xFF) << SHDWC_SHDW_CR_KEY_Pos)           /**< (SHDWC_SHDW_CR) Password Mask */
#define SHDWC_SHDW_CR_KEY(value)            (SHDWC_SHDW_CR_KEY_Msk & ((value) << SHDWC_SHDW_CR_KEY_Pos))
#define   SHDWC_SHDW_CR_KEY_PASSWD_Val      _U_(0xA5)                                      /**< (SHDWC_SHDW_CR) Writing any other value in this field aborts the write operation.  */
#define SHDWC_SHDW_CR_KEY_PASSWD            (SHDWC_SHDW_CR_KEY_PASSWD_Val << SHDWC_SHDW_CR_KEY_Pos)  /**< (SHDWC_SHDW_CR) Writing any other value in this field aborts the write operation. Position  */
#define SHDWC_SHDW_CR_MASK                  _U_(0xFF000001)                                /**< \deprecated (SHDWC_SHDW_CR) Register MASK  (Use SHDWC_SHDW_CR_Msk instead)  */
#define SHDWC_SHDW_CR_Msk                   _U_(0xFF000001)                                /**< (SHDWC_SHDW_CR) Register Mask  */


/* -------- SHDWC_SHDW_MR : (SHDWC Offset: 0x04) (R/W 32) Shutdown Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :17;                       /**< bit:  0..16  Reserved */
    uint32_t RTCWKEN:1;                 /**< bit:     17  Real-time Clock Wake-up Enable           */
    uint32_t ACCWKEN:1;                 /**< bit:     18  Analog Comparator Controller Wake-up Enable */
    uint32_t RXLPWKEN:1;                /**< bit:     19  Debug Unit Wake-up Enable                */
    uint32_t :4;                        /**< bit: 20..23  Reserved */
    uint32_t WKUPDBC:3;                 /**< bit: 24..26  Wake-up Inputs Debouncer Period          */
    uint32_t :5;                        /**< bit: 27..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SHDWC_SHDW_MR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SHDWC_SHDW_MR_OFFSET                (0x04)                                        /**<  (SHDWC_SHDW_MR) Shutdown Mode Register  Offset */

#define SHDWC_SHDW_MR_RTCWKEN_Pos           17                                             /**< (SHDWC_SHDW_MR) Real-time Clock Wake-up Enable Position */
#define SHDWC_SHDW_MR_RTCWKEN_Msk           (_U_(0x1) << SHDWC_SHDW_MR_RTCWKEN_Pos)        /**< (SHDWC_SHDW_MR) Real-time Clock Wake-up Enable Mask */
#define SHDWC_SHDW_MR_RTCWKEN               SHDWC_SHDW_MR_RTCWKEN_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_MR_RTCWKEN_Msk instead */
#define SHDWC_SHDW_MR_ACCWKEN_Pos           18                                             /**< (SHDWC_SHDW_MR) Analog Comparator Controller Wake-up Enable Position */
#define SHDWC_SHDW_MR_ACCWKEN_Msk           (_U_(0x1) << SHDWC_SHDW_MR_ACCWKEN_Pos)        /**< (SHDWC_SHDW_MR) Analog Comparator Controller Wake-up Enable Mask */
#define SHDWC_SHDW_MR_ACCWKEN               SHDWC_SHDW_MR_ACCWKEN_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_MR_ACCWKEN_Msk instead */
#define SHDWC_SHDW_MR_RXLPWKEN_Pos          19                                             /**< (SHDWC_SHDW_MR) Debug Unit Wake-up Enable Position */
#define SHDWC_SHDW_MR_RXLPWKEN_Msk          (_U_(0x1) << SHDWC_SHDW_MR_RXLPWKEN_Pos)       /**< (SHDWC_SHDW_MR) Debug Unit Wake-up Enable Mask */
#define SHDWC_SHDW_MR_RXLPWKEN              SHDWC_SHDW_MR_RXLPWKEN_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_MR_RXLPWKEN_Msk instead */
#define SHDWC_SHDW_MR_WKUPDBC_Pos           24                                             /**< (SHDWC_SHDW_MR) Wake-up Inputs Debouncer Period Position */
#define SHDWC_SHDW_MR_WKUPDBC_Msk           (_U_(0x7) << SHDWC_SHDW_MR_WKUPDBC_Pos)        /**< (SHDWC_SHDW_MR) Wake-up Inputs Debouncer Period Mask */
#define SHDWC_SHDW_MR_WKUPDBC(value)        (SHDWC_SHDW_MR_WKUPDBC_Msk & ((value) << SHDWC_SHDW_MR_WKUPDBC_Pos))
#define   SHDWC_SHDW_MR_WKUPDBC_IMMEDIATE_Val _U_(0x0)                                       /**< (SHDWC_SHDW_MR) Immediate, no debouncing, detected active at least on one Slow Clock edge  */
#define   SHDWC_SHDW_MR_WKUPDBC_3_SLCK_Val  _U_(0x1)                                       /**< (SHDWC_SHDW_MR) PIOBUx shall be in its active state for at least 3 SLCK periods  */
#define   SHDWC_SHDW_MR_WKUPDBC_32_SLCK_Val _U_(0x2)                                       /**< (SHDWC_SHDW_MR) PIOBUx shall be in its active state for at least 32 SLCK periods  */
#define   SHDWC_SHDW_MR_WKUPDBC_512_SLCK_Val _U_(0x3)                                       /**< (SHDWC_SHDW_MR) PIOBUx shall be in its active state for at least 512 SLCK periods  */
#define   SHDWC_SHDW_MR_WKUPDBC_4096_SLCK_Val _U_(0x4)                                       /**< (SHDWC_SHDW_MR) PIOBUx shall be in its active state for at least 4,096 SLCK periods  */
#define   SHDWC_SHDW_MR_WKUPDBC_32768_SLCK_Val _U_(0x5)                                       /**< (SHDWC_SHDW_MR) PIOBUx shall be in its active state for at least 32,768 SLCK periods  */
#define SHDWC_SHDW_MR_WKUPDBC_IMMEDIATE     (SHDWC_SHDW_MR_WKUPDBC_IMMEDIATE_Val << SHDWC_SHDW_MR_WKUPDBC_Pos)  /**< (SHDWC_SHDW_MR) Immediate, no debouncing, detected active at least on one Slow Clock edge Position  */
#define SHDWC_SHDW_MR_WKUPDBC_3_SLCK        (SHDWC_SHDW_MR_WKUPDBC_3_SLCK_Val << SHDWC_SHDW_MR_WKUPDBC_Pos)  /**< (SHDWC_SHDW_MR) PIOBUx shall be in its active state for at least 3 SLCK periods Position  */
#define SHDWC_SHDW_MR_WKUPDBC_32_SLCK       (SHDWC_SHDW_MR_WKUPDBC_32_SLCK_Val << SHDWC_SHDW_MR_WKUPDBC_Pos)  /**< (SHDWC_SHDW_MR) PIOBUx shall be in its active state for at least 32 SLCK periods Position  */
#define SHDWC_SHDW_MR_WKUPDBC_512_SLCK      (SHDWC_SHDW_MR_WKUPDBC_512_SLCK_Val << SHDWC_SHDW_MR_WKUPDBC_Pos)  /**< (SHDWC_SHDW_MR) PIOBUx shall be in its active state for at least 512 SLCK periods Position  */
#define SHDWC_SHDW_MR_WKUPDBC_4096_SLCK     (SHDWC_SHDW_MR_WKUPDBC_4096_SLCK_Val << SHDWC_SHDW_MR_WKUPDBC_Pos)  /**< (SHDWC_SHDW_MR) PIOBUx shall be in its active state for at least 4,096 SLCK periods Position  */
#define SHDWC_SHDW_MR_WKUPDBC_32768_SLCK    (SHDWC_SHDW_MR_WKUPDBC_32768_SLCK_Val << SHDWC_SHDW_MR_WKUPDBC_Pos)  /**< (SHDWC_SHDW_MR) PIOBUx shall be in its active state for at least 32,768 SLCK periods Position  */
#define SHDWC_SHDW_MR_MASK                  _U_(0x70E0000)                                 /**< \deprecated (SHDWC_SHDW_MR) Register MASK  (Use SHDWC_SHDW_MR_Msk instead)  */
#define SHDWC_SHDW_MR_Msk                   _U_(0x70E0000)                                 /**< (SHDWC_SHDW_MR) Register Mask  */


/* -------- SHDWC_SHDW_SR : (SHDWC Offset: 0x08) (R/ 32) Shutdown Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WKUPS:1;                   /**< bit:      0  PIOBU, WKUP Wake-up Status               */
    uint32_t :4;                        /**< bit:   1..4  Reserved */
    uint32_t RTCWK:1;                   /**< bit:      5                                           */
    uint32_t ACCWK:1;                   /**< bit:      6  Analog Comparator Controller Wake-up     */
    uint32_t RXLPWK:1;                  /**< bit:      7  Debug Unit Wake-up                       */
    uint32_t :8;                        /**< bit:  8..15  Reserved */
    uint32_t WKUPIS0:1;                 /**< bit:     16  Wake-up 0 Input Status                   */
    uint32_t WKUPIS1:1;                 /**< bit:     17  Wake-up 1 Input Status                   */
    uint32_t WKUPIS2:1;                 /**< bit:     18  Wake-up 2 Input Status                   */
    uint32_t WKUPIS3:1;                 /**< bit:     19  Wake-up 3 Input Status                   */
    uint32_t WKUPIS4:1;                 /**< bit:     20  Wake-up 4 Input Status                   */
    uint32_t WKUPIS5:1;                 /**< bit:     21  Wake-up 5 Input Status                   */
    uint32_t WKUPIS6:1;                 /**< bit:     22  Wake-up 6 Input Status                   */
    uint32_t WKUPIS7:1;                 /**< bit:     23  Wake-up 7 Input Status                   */
    uint32_t WKUPIS8:1;                 /**< bit:     24  Wake-up 8 Input Status                   */
    uint32_t WKUPIS9:1;                 /**< bit:     25  Wake-up 9 Input Status                   */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t WKUPIS:10;                 /**< bit: 16..25  Wake-up 9 Input Status                   */
    uint32_t :6;                        /**< bit: 26..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} SHDWC_SHDW_SR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SHDWC_SHDW_SR_OFFSET                (0x08)                                        /**<  (SHDWC_SHDW_SR) Shutdown Status Register  Offset */

#define SHDWC_SHDW_SR_WKUPS_Pos             0                                              /**< (SHDWC_SHDW_SR) PIOBU, WKUP Wake-up Status Position */
#define SHDWC_SHDW_SR_WKUPS_Msk             (_U_(0x1) << SHDWC_SHDW_SR_WKUPS_Pos)          /**< (SHDWC_SHDW_SR) PIOBU, WKUP Wake-up Status Mask */
#define SHDWC_SHDW_SR_WKUPS                 SHDWC_SHDW_SR_WKUPS_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_SR_WKUPS_Msk instead */
#define   SHDWC_SHDW_SR_WKUPS_NO_Val        _U_(0x0)                                       /**< (SHDWC_SHDW_SR) No wake-up due to the assertion of the PIOBU, WKUP pins has occurred since the last read of SHDW_SR.  */
#define   SHDWC_SHDW_SR_WKUPS_PRESENT_Val   _U_(0x1)                                       /**< (SHDWC_SHDW_SR) At least one wake-up due to the assertion of the PIOBU, WKUP pins has occurred since the last read of SHDW_SR.  */
#define SHDWC_SHDW_SR_WKUPS_NO              (SHDWC_SHDW_SR_WKUPS_NO_Val << SHDWC_SHDW_SR_WKUPS_Pos)  /**< (SHDWC_SHDW_SR) No wake-up due to the assertion of the PIOBU, WKUP pins has occurred since the last read of SHDW_SR. Position  */
#define SHDWC_SHDW_SR_WKUPS_PRESENT         (SHDWC_SHDW_SR_WKUPS_PRESENT_Val << SHDWC_SHDW_SR_WKUPS_Pos)  /**< (SHDWC_SHDW_SR) At least one wake-up due to the assertion of the PIOBU, WKUP pins has occurred since the last read of SHDW_SR. Position  */
#define SHDWC_SHDW_SR_RTCWK_Pos             5                                              /**< (SHDWC_SHDW_SR)  Position */
#define SHDWC_SHDW_SR_RTCWK_Msk             (_U_(0x1) << SHDWC_SHDW_SR_RTCWK_Pos)          /**< (SHDWC_SHDW_SR)  Mask */
#define SHDWC_SHDW_SR_RTCWK                 SHDWC_SHDW_SR_RTCWK_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_SR_RTCWK_Msk instead */
#define SHDWC_SHDW_SR_ACCWK_Pos             6                                              /**< (SHDWC_SHDW_SR) Analog Comparator Controller Wake-up Position */
#define SHDWC_SHDW_SR_ACCWK_Msk             (_U_(0x1) << SHDWC_SHDW_SR_ACCWK_Pos)          /**< (SHDWC_SHDW_SR) Analog Comparator Controller Wake-up Mask */
#define SHDWC_SHDW_SR_ACCWK                 SHDWC_SHDW_SR_ACCWK_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_SR_ACCWK_Msk instead */
#define SHDWC_SHDW_SR_RXLPWK_Pos            7                                              /**< (SHDWC_SHDW_SR) Debug Unit Wake-up Position */
#define SHDWC_SHDW_SR_RXLPWK_Msk            (_U_(0x1) << SHDWC_SHDW_SR_RXLPWK_Pos)         /**< (SHDWC_SHDW_SR) Debug Unit Wake-up Mask */
#define SHDWC_SHDW_SR_RXLPWK                SHDWC_SHDW_SR_RXLPWK_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_SR_RXLPWK_Msk instead */
#define SHDWC_SHDW_SR_WKUPIS0_Pos           16                                             /**< (SHDWC_SHDW_SR) Wake-up 0 Input Status Position */
#define SHDWC_SHDW_SR_WKUPIS0_Msk           (_U_(0x1) << SHDWC_SHDW_SR_WKUPIS0_Pos)        /**< (SHDWC_SHDW_SR) Wake-up 0 Input Status Mask */
#define SHDWC_SHDW_SR_WKUPIS0               SHDWC_SHDW_SR_WKUPIS0_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_SR_WKUPIS0_Msk instead */
#define   SHDWC_SHDW_SR_WKUPIS0_DISABLE_Val _U_(0x0)                                       /**< (SHDWC_SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDWC_SHDW_SR_WKUPIS0_ENABLE_Val  _U_(0x1)                                       /**< (SHDWC_SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDWC_SHDW_SR_WKUPIS0_DISABLE       (SHDWC_SHDW_SR_WKUPIS0_DISABLE_Val << SHDWC_SHDW_SR_WKUPIS0_Pos)  /**< (SHDWC_SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDWC_SHDW_SR_WKUPIS0_ENABLE        (SHDWC_SHDW_SR_WKUPIS0_ENABLE_Val << SHDWC_SHDW_SR_WKUPIS0_Pos)  /**< (SHDWC_SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDWC_SHDW_SR_WKUPIS1_Pos           17                                             /**< (SHDWC_SHDW_SR) Wake-up 1 Input Status Position */
#define SHDWC_SHDW_SR_WKUPIS1_Msk           (_U_(0x1) << SHDWC_SHDW_SR_WKUPIS1_Pos)        /**< (SHDWC_SHDW_SR) Wake-up 1 Input Status Mask */
#define SHDWC_SHDW_SR_WKUPIS1               SHDWC_SHDW_SR_WKUPIS1_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_SR_WKUPIS1_Msk instead */
#define   SHDWC_SHDW_SR_WKUPIS1_DISABLE_Val _U_(0x0)                                       /**< (SHDWC_SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDWC_SHDW_SR_WKUPIS1_ENABLE_Val  _U_(0x1)                                       /**< (SHDWC_SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDWC_SHDW_SR_WKUPIS1_DISABLE       (SHDWC_SHDW_SR_WKUPIS1_DISABLE_Val << SHDWC_SHDW_SR_WKUPIS1_Pos)  /**< (SHDWC_SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDWC_SHDW_SR_WKUPIS1_ENABLE        (SHDWC_SHDW_SR_WKUPIS1_ENABLE_Val << SHDWC_SHDW_SR_WKUPIS1_Pos)  /**< (SHDWC_SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDWC_SHDW_SR_WKUPIS2_Pos           18                                             /**< (SHDWC_SHDW_SR) Wake-up 2 Input Status Position */
#define SHDWC_SHDW_SR_WKUPIS2_Msk           (_U_(0x1) << SHDWC_SHDW_SR_WKUPIS2_Pos)        /**< (SHDWC_SHDW_SR) Wake-up 2 Input Status Mask */
#define SHDWC_SHDW_SR_WKUPIS2               SHDWC_SHDW_SR_WKUPIS2_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_SR_WKUPIS2_Msk instead */
#define   SHDWC_SHDW_SR_WKUPIS2_DISABLE_Val _U_(0x0)                                       /**< (SHDWC_SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDWC_SHDW_SR_WKUPIS2_ENABLE_Val  _U_(0x1)                                       /**< (SHDWC_SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDWC_SHDW_SR_WKUPIS2_DISABLE       (SHDWC_SHDW_SR_WKUPIS2_DISABLE_Val << SHDWC_SHDW_SR_WKUPIS2_Pos)  /**< (SHDWC_SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDWC_SHDW_SR_WKUPIS2_ENABLE        (SHDWC_SHDW_SR_WKUPIS2_ENABLE_Val << SHDWC_SHDW_SR_WKUPIS2_Pos)  /**< (SHDWC_SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDWC_SHDW_SR_WKUPIS3_Pos           19                                             /**< (SHDWC_SHDW_SR) Wake-up 3 Input Status Position */
#define SHDWC_SHDW_SR_WKUPIS3_Msk           (_U_(0x1) << SHDWC_SHDW_SR_WKUPIS3_Pos)        /**< (SHDWC_SHDW_SR) Wake-up 3 Input Status Mask */
#define SHDWC_SHDW_SR_WKUPIS3               SHDWC_SHDW_SR_WKUPIS3_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_SR_WKUPIS3_Msk instead */
#define   SHDWC_SHDW_SR_WKUPIS3_DISABLE_Val _U_(0x0)                                       /**< (SHDWC_SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDWC_SHDW_SR_WKUPIS3_ENABLE_Val  _U_(0x1)                                       /**< (SHDWC_SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDWC_SHDW_SR_WKUPIS3_DISABLE       (SHDWC_SHDW_SR_WKUPIS3_DISABLE_Val << SHDWC_SHDW_SR_WKUPIS3_Pos)  /**< (SHDWC_SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDWC_SHDW_SR_WKUPIS3_ENABLE        (SHDWC_SHDW_SR_WKUPIS3_ENABLE_Val << SHDWC_SHDW_SR_WKUPIS3_Pos)  /**< (SHDWC_SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDWC_SHDW_SR_WKUPIS4_Pos           20                                             /**< (SHDWC_SHDW_SR) Wake-up 4 Input Status Position */
#define SHDWC_SHDW_SR_WKUPIS4_Msk           (_U_(0x1) << SHDWC_SHDW_SR_WKUPIS4_Pos)        /**< (SHDWC_SHDW_SR) Wake-up 4 Input Status Mask */
#define SHDWC_SHDW_SR_WKUPIS4               SHDWC_SHDW_SR_WKUPIS4_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_SR_WKUPIS4_Msk instead */
#define   SHDWC_SHDW_SR_WKUPIS4_DISABLE_Val _U_(0x0)                                       /**< (SHDWC_SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDWC_SHDW_SR_WKUPIS4_ENABLE_Val  _U_(0x1)                                       /**< (SHDWC_SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDWC_SHDW_SR_WKUPIS4_DISABLE       (SHDWC_SHDW_SR_WKUPIS4_DISABLE_Val << SHDWC_SHDW_SR_WKUPIS4_Pos)  /**< (SHDWC_SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDWC_SHDW_SR_WKUPIS4_ENABLE        (SHDWC_SHDW_SR_WKUPIS4_ENABLE_Val << SHDWC_SHDW_SR_WKUPIS4_Pos)  /**< (SHDWC_SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDWC_SHDW_SR_WKUPIS5_Pos           21                                             /**< (SHDWC_SHDW_SR) Wake-up 5 Input Status Position */
#define SHDWC_SHDW_SR_WKUPIS5_Msk           (_U_(0x1) << SHDWC_SHDW_SR_WKUPIS5_Pos)        /**< (SHDWC_SHDW_SR) Wake-up 5 Input Status Mask */
#define SHDWC_SHDW_SR_WKUPIS5               SHDWC_SHDW_SR_WKUPIS5_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_SR_WKUPIS5_Msk instead */
#define   SHDWC_SHDW_SR_WKUPIS5_DISABLE_Val _U_(0x0)                                       /**< (SHDWC_SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDWC_SHDW_SR_WKUPIS5_ENABLE_Val  _U_(0x1)                                       /**< (SHDWC_SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDWC_SHDW_SR_WKUPIS5_DISABLE       (SHDWC_SHDW_SR_WKUPIS5_DISABLE_Val << SHDWC_SHDW_SR_WKUPIS5_Pos)  /**< (SHDWC_SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDWC_SHDW_SR_WKUPIS5_ENABLE        (SHDWC_SHDW_SR_WKUPIS5_ENABLE_Val << SHDWC_SHDW_SR_WKUPIS5_Pos)  /**< (SHDWC_SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDWC_SHDW_SR_WKUPIS6_Pos           22                                             /**< (SHDWC_SHDW_SR) Wake-up 6 Input Status Position */
#define SHDWC_SHDW_SR_WKUPIS6_Msk           (_U_(0x1) << SHDWC_SHDW_SR_WKUPIS6_Pos)        /**< (SHDWC_SHDW_SR) Wake-up 6 Input Status Mask */
#define SHDWC_SHDW_SR_WKUPIS6               SHDWC_SHDW_SR_WKUPIS6_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_SR_WKUPIS6_Msk instead */
#define   SHDWC_SHDW_SR_WKUPIS6_DISABLE_Val _U_(0x0)                                       /**< (SHDWC_SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDWC_SHDW_SR_WKUPIS6_ENABLE_Val  _U_(0x1)                                       /**< (SHDWC_SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDWC_SHDW_SR_WKUPIS6_DISABLE       (SHDWC_SHDW_SR_WKUPIS6_DISABLE_Val << SHDWC_SHDW_SR_WKUPIS6_Pos)  /**< (SHDWC_SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDWC_SHDW_SR_WKUPIS6_ENABLE        (SHDWC_SHDW_SR_WKUPIS6_ENABLE_Val << SHDWC_SHDW_SR_WKUPIS6_Pos)  /**< (SHDWC_SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDWC_SHDW_SR_WKUPIS7_Pos           23                                             /**< (SHDWC_SHDW_SR) Wake-up 7 Input Status Position */
#define SHDWC_SHDW_SR_WKUPIS7_Msk           (_U_(0x1) << SHDWC_SHDW_SR_WKUPIS7_Pos)        /**< (SHDWC_SHDW_SR) Wake-up 7 Input Status Mask */
#define SHDWC_SHDW_SR_WKUPIS7               SHDWC_SHDW_SR_WKUPIS7_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_SR_WKUPIS7_Msk instead */
#define   SHDWC_SHDW_SR_WKUPIS7_DISABLE_Val _U_(0x0)                                       /**< (SHDWC_SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDWC_SHDW_SR_WKUPIS7_ENABLE_Val  _U_(0x1)                                       /**< (SHDWC_SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDWC_SHDW_SR_WKUPIS7_DISABLE       (SHDWC_SHDW_SR_WKUPIS7_DISABLE_Val << SHDWC_SHDW_SR_WKUPIS7_Pos)  /**< (SHDWC_SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDWC_SHDW_SR_WKUPIS7_ENABLE        (SHDWC_SHDW_SR_WKUPIS7_ENABLE_Val << SHDWC_SHDW_SR_WKUPIS7_Pos)  /**< (SHDWC_SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDWC_SHDW_SR_WKUPIS8_Pos           24                                             /**< (SHDWC_SHDW_SR) Wake-up 8 Input Status Position */
#define SHDWC_SHDW_SR_WKUPIS8_Msk           (_U_(0x1) << SHDWC_SHDW_SR_WKUPIS8_Pos)        /**< (SHDWC_SHDW_SR) Wake-up 8 Input Status Mask */
#define SHDWC_SHDW_SR_WKUPIS8               SHDWC_SHDW_SR_WKUPIS8_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_SR_WKUPIS8_Msk instead */
#define   SHDWC_SHDW_SR_WKUPIS8_DISABLE_Val _U_(0x0)                                       /**< (SHDWC_SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDWC_SHDW_SR_WKUPIS8_ENABLE_Val  _U_(0x1)                                       /**< (SHDWC_SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDWC_SHDW_SR_WKUPIS8_DISABLE       (SHDWC_SHDW_SR_WKUPIS8_DISABLE_Val << SHDWC_SHDW_SR_WKUPIS8_Pos)  /**< (SHDWC_SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDWC_SHDW_SR_WKUPIS8_ENABLE        (SHDWC_SHDW_SR_WKUPIS8_ENABLE_Val << SHDWC_SHDW_SR_WKUPIS8_Pos)  /**< (SHDWC_SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDWC_SHDW_SR_WKUPIS9_Pos           25                                             /**< (SHDWC_SHDW_SR) Wake-up 9 Input Status Position */
#define SHDWC_SHDW_SR_WKUPIS9_Msk           (_U_(0x1) << SHDWC_SHDW_SR_WKUPIS9_Pos)        /**< (SHDWC_SHDW_SR) Wake-up 9 Input Status Mask */
#define SHDWC_SHDW_SR_WKUPIS9               SHDWC_SHDW_SR_WKUPIS9_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_SR_WKUPIS9_Msk instead */
#define   SHDWC_SHDW_SR_WKUPIS9_DISABLE_Val _U_(0x0)                                       /**< (SHDWC_SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDWC_SHDW_SR_WKUPIS9_ENABLE_Val  _U_(0x1)                                       /**< (SHDWC_SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDWC_SHDW_SR_WKUPIS9_DISABLE       (SHDWC_SHDW_SR_WKUPIS9_DISABLE_Val << SHDWC_SHDW_SR_WKUPIS9_Pos)  /**< (SHDWC_SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDWC_SHDW_SR_WKUPIS9_ENABLE        (SHDWC_SHDW_SR_WKUPIS9_ENABLE_Val << SHDWC_SHDW_SR_WKUPIS9_Pos)  /**< (SHDWC_SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDWC_SHDW_SR_MASK                  _U_(0x3FF00E1)                                 /**< \deprecated (SHDWC_SHDW_SR) Register MASK  (Use SHDWC_SHDW_SR_Msk instead)  */
#define SHDWC_SHDW_SR_Msk                   _U_(0x3FF00E1)                                 /**< (SHDWC_SHDW_SR) Register Mask  */

#define SHDWC_SHDW_SR_WKUPIS_Pos            16                                             /**< (SHDWC_SHDW_SR Position) Wake-up 9 Input Status */
#define SHDWC_SHDW_SR_WKUPIS_Msk            (_U_(0x3FF) << SHDWC_SHDW_SR_WKUPIS_Pos)       /**< (SHDWC_SHDW_SR Mask) WKUPIS */
#define SHDWC_SHDW_SR_WKUPIS(value)         (SHDWC_SHDW_SR_WKUPIS_Msk & ((value) << SHDWC_SHDW_SR_WKUPIS_Pos))  

/* -------- SHDWC_SHDW_WUIR : (SHDWC Offset: 0x0c) (R/W 32) Shutdown Wake-up Inputs Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WKUPEN0:1;                 /**< bit:      0  Wake-up 0 Input Enable                   */
    uint32_t WKUPEN1:1;                 /**< bit:      1  Wake-up 1 Input Enable                   */
    uint32_t WKUPEN2:1;                 /**< bit:      2  Wake-up 2 Input Enable                   */
    uint32_t WKUPEN3:1;                 /**< bit:      3  Wake-up 3 Input Enable                   */
    uint32_t WKUPEN4:1;                 /**< bit:      4  Wake-up 4 Input Enable                   */
    uint32_t WKUPEN5:1;                 /**< bit:      5  Wake-up 5 Input Enable                   */
    uint32_t WKUPEN6:1;                 /**< bit:      6  Wake-up 6 Input Enable                   */
    uint32_t WKUPEN7:1;                 /**< bit:      7  Wake-up 7 Input Enable                   */
    uint32_t WKUPEN8:1;                 /**< bit:      8  Wake-up 8 Input Enable                   */
    uint32_t WKUPEN9:1;                 /**< bit:      9  Wake-up 9 Input Enable                   */
    uint32_t :6;                        /**< bit: 10..15  Reserved */
    uint32_t WKUPT0:1;                  /**< bit:     16  Wake-up 0 Input Type                     */
    uint32_t WKUPT1:1;                  /**< bit:     17  Wake-up 1 Input Type                     */
    uint32_t WKUPT2:1;                  /**< bit:     18  Wake-up 2 Input Type                     */
    uint32_t WKUPT3:1;                  /**< bit:     19  Wake-up 3 Input Type                     */
    uint32_t WKUPT4:1;                  /**< bit:     20  Wake-up 4 Input Type                     */
    uint32_t WKUPT5:1;                  /**< bit:     21  Wake-up 5 Input Type                     */
    uint32_t WKUPT6:1;                  /**< bit:     22  Wake-up 6 Input Type                     */
    uint32_t WKUPT7:1;                  /**< bit:     23  Wake-up 7 Input Type                     */
    uint32_t WKUPT8:1;                  /**< bit:     24  Wake-up 8 Input Type                     */
    uint32_t WKUPT9:1;                  /**< bit:     25  Wake-up 9 Input Type                     */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t WKUPEN:10;                 /**< bit:   0..9  Wake-up x Input Enable                   */
    uint32_t :6;                        /**< bit: 10..15  Reserved */
    uint32_t WKUPT:10;                  /**< bit: 16..25  Wake-up 9 Input Type                     */
    uint32_t :6;                        /**< bit: 26..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} SHDWC_SHDW_WUIR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SHDWC_SHDW_WUIR_OFFSET              (0x0C)                                        /**<  (SHDWC_SHDW_WUIR) Shutdown Wake-up Inputs Register  Offset */

#define SHDWC_SHDW_WUIR_WKUPEN0_Pos         0                                              /**< (SHDWC_SHDW_WUIR) Wake-up 0 Input Enable Position */
#define SHDWC_SHDW_WUIR_WKUPEN0_Msk         (_U_(0x1) << SHDWC_SHDW_WUIR_WKUPEN0_Pos)      /**< (SHDWC_SHDW_WUIR) Wake-up 0 Input Enable Mask */
#define SHDWC_SHDW_WUIR_WKUPEN0             SHDWC_SHDW_WUIR_WKUPEN0_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_WUIR_WKUPEN0_Msk instead */
#define   SHDWC_SHDW_WUIR_WKUPEN0_DISABLE_Val _U_(0x0)                                       /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDWC_SHDW_WUIR_WKUPEN0_ENABLE_Val _U_(0x1)                                       /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDWC_SHDW_WUIR_WKUPEN0_DISABLE     (SHDWC_SHDW_WUIR_WKUPEN0_DISABLE_Val << SHDWC_SHDW_WUIR_WKUPEN0_Pos)  /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDWC_SHDW_WUIR_WKUPEN0_ENABLE      (SHDWC_SHDW_WUIR_WKUPEN0_ENABLE_Val << SHDWC_SHDW_WUIR_WKUPEN0_Pos)  /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPEN1_Pos         1                                              /**< (SHDWC_SHDW_WUIR) Wake-up 1 Input Enable Position */
#define SHDWC_SHDW_WUIR_WKUPEN1_Msk         (_U_(0x1) << SHDWC_SHDW_WUIR_WKUPEN1_Pos)      /**< (SHDWC_SHDW_WUIR) Wake-up 1 Input Enable Mask */
#define SHDWC_SHDW_WUIR_WKUPEN1             SHDWC_SHDW_WUIR_WKUPEN1_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_WUIR_WKUPEN1_Msk instead */
#define   SHDWC_SHDW_WUIR_WKUPEN1_DISABLE_Val _U_(0x0)                                       /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDWC_SHDW_WUIR_WKUPEN1_ENABLE_Val _U_(0x1)                                       /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDWC_SHDW_WUIR_WKUPEN1_DISABLE     (SHDWC_SHDW_WUIR_WKUPEN1_DISABLE_Val << SHDWC_SHDW_WUIR_WKUPEN1_Pos)  /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDWC_SHDW_WUIR_WKUPEN1_ENABLE      (SHDWC_SHDW_WUIR_WKUPEN1_ENABLE_Val << SHDWC_SHDW_WUIR_WKUPEN1_Pos)  /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPEN2_Pos         2                                              /**< (SHDWC_SHDW_WUIR) Wake-up 2 Input Enable Position */
#define SHDWC_SHDW_WUIR_WKUPEN2_Msk         (_U_(0x1) << SHDWC_SHDW_WUIR_WKUPEN2_Pos)      /**< (SHDWC_SHDW_WUIR) Wake-up 2 Input Enable Mask */
#define SHDWC_SHDW_WUIR_WKUPEN2             SHDWC_SHDW_WUIR_WKUPEN2_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_WUIR_WKUPEN2_Msk instead */
#define   SHDWC_SHDW_WUIR_WKUPEN2_DISABLE_Val _U_(0x0)                                       /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDWC_SHDW_WUIR_WKUPEN2_ENABLE_Val _U_(0x1)                                       /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDWC_SHDW_WUIR_WKUPEN2_DISABLE     (SHDWC_SHDW_WUIR_WKUPEN2_DISABLE_Val << SHDWC_SHDW_WUIR_WKUPEN2_Pos)  /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDWC_SHDW_WUIR_WKUPEN2_ENABLE      (SHDWC_SHDW_WUIR_WKUPEN2_ENABLE_Val << SHDWC_SHDW_WUIR_WKUPEN2_Pos)  /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPEN3_Pos         3                                              /**< (SHDWC_SHDW_WUIR) Wake-up 3 Input Enable Position */
#define SHDWC_SHDW_WUIR_WKUPEN3_Msk         (_U_(0x1) << SHDWC_SHDW_WUIR_WKUPEN3_Pos)      /**< (SHDWC_SHDW_WUIR) Wake-up 3 Input Enable Mask */
#define SHDWC_SHDW_WUIR_WKUPEN3             SHDWC_SHDW_WUIR_WKUPEN3_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_WUIR_WKUPEN3_Msk instead */
#define   SHDWC_SHDW_WUIR_WKUPEN3_DISABLE_Val _U_(0x0)                                       /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDWC_SHDW_WUIR_WKUPEN3_ENABLE_Val _U_(0x1)                                       /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDWC_SHDW_WUIR_WKUPEN3_DISABLE     (SHDWC_SHDW_WUIR_WKUPEN3_DISABLE_Val << SHDWC_SHDW_WUIR_WKUPEN3_Pos)  /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDWC_SHDW_WUIR_WKUPEN3_ENABLE      (SHDWC_SHDW_WUIR_WKUPEN3_ENABLE_Val << SHDWC_SHDW_WUIR_WKUPEN3_Pos)  /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPEN4_Pos         4                                              /**< (SHDWC_SHDW_WUIR) Wake-up 4 Input Enable Position */
#define SHDWC_SHDW_WUIR_WKUPEN4_Msk         (_U_(0x1) << SHDWC_SHDW_WUIR_WKUPEN4_Pos)      /**< (SHDWC_SHDW_WUIR) Wake-up 4 Input Enable Mask */
#define SHDWC_SHDW_WUIR_WKUPEN4             SHDWC_SHDW_WUIR_WKUPEN4_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_WUIR_WKUPEN4_Msk instead */
#define   SHDWC_SHDW_WUIR_WKUPEN4_DISABLE_Val _U_(0x0)                                       /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDWC_SHDW_WUIR_WKUPEN4_ENABLE_Val _U_(0x1)                                       /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDWC_SHDW_WUIR_WKUPEN4_DISABLE     (SHDWC_SHDW_WUIR_WKUPEN4_DISABLE_Val << SHDWC_SHDW_WUIR_WKUPEN4_Pos)  /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDWC_SHDW_WUIR_WKUPEN4_ENABLE      (SHDWC_SHDW_WUIR_WKUPEN4_ENABLE_Val << SHDWC_SHDW_WUIR_WKUPEN4_Pos)  /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPEN5_Pos         5                                              /**< (SHDWC_SHDW_WUIR) Wake-up 5 Input Enable Position */
#define SHDWC_SHDW_WUIR_WKUPEN5_Msk         (_U_(0x1) << SHDWC_SHDW_WUIR_WKUPEN5_Pos)      /**< (SHDWC_SHDW_WUIR) Wake-up 5 Input Enable Mask */
#define SHDWC_SHDW_WUIR_WKUPEN5             SHDWC_SHDW_WUIR_WKUPEN5_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_WUIR_WKUPEN5_Msk instead */
#define   SHDWC_SHDW_WUIR_WKUPEN5_DISABLE_Val _U_(0x0)                                       /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDWC_SHDW_WUIR_WKUPEN5_ENABLE_Val _U_(0x1)                                       /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDWC_SHDW_WUIR_WKUPEN5_DISABLE     (SHDWC_SHDW_WUIR_WKUPEN5_DISABLE_Val << SHDWC_SHDW_WUIR_WKUPEN5_Pos)  /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDWC_SHDW_WUIR_WKUPEN5_ENABLE      (SHDWC_SHDW_WUIR_WKUPEN5_ENABLE_Val << SHDWC_SHDW_WUIR_WKUPEN5_Pos)  /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPEN6_Pos         6                                              /**< (SHDWC_SHDW_WUIR) Wake-up 6 Input Enable Position */
#define SHDWC_SHDW_WUIR_WKUPEN6_Msk         (_U_(0x1) << SHDWC_SHDW_WUIR_WKUPEN6_Pos)      /**< (SHDWC_SHDW_WUIR) Wake-up 6 Input Enable Mask */
#define SHDWC_SHDW_WUIR_WKUPEN6             SHDWC_SHDW_WUIR_WKUPEN6_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_WUIR_WKUPEN6_Msk instead */
#define   SHDWC_SHDW_WUIR_WKUPEN6_DISABLE_Val _U_(0x0)                                       /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDWC_SHDW_WUIR_WKUPEN6_ENABLE_Val _U_(0x1)                                       /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDWC_SHDW_WUIR_WKUPEN6_DISABLE     (SHDWC_SHDW_WUIR_WKUPEN6_DISABLE_Val << SHDWC_SHDW_WUIR_WKUPEN6_Pos)  /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDWC_SHDW_WUIR_WKUPEN6_ENABLE      (SHDWC_SHDW_WUIR_WKUPEN6_ENABLE_Val << SHDWC_SHDW_WUIR_WKUPEN6_Pos)  /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPEN7_Pos         7                                              /**< (SHDWC_SHDW_WUIR) Wake-up 7 Input Enable Position */
#define SHDWC_SHDW_WUIR_WKUPEN7_Msk         (_U_(0x1) << SHDWC_SHDW_WUIR_WKUPEN7_Pos)      /**< (SHDWC_SHDW_WUIR) Wake-up 7 Input Enable Mask */
#define SHDWC_SHDW_WUIR_WKUPEN7             SHDWC_SHDW_WUIR_WKUPEN7_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_WUIR_WKUPEN7_Msk instead */
#define   SHDWC_SHDW_WUIR_WKUPEN7_DISABLE_Val _U_(0x0)                                       /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDWC_SHDW_WUIR_WKUPEN7_ENABLE_Val _U_(0x1)                                       /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDWC_SHDW_WUIR_WKUPEN7_DISABLE     (SHDWC_SHDW_WUIR_WKUPEN7_DISABLE_Val << SHDWC_SHDW_WUIR_WKUPEN7_Pos)  /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDWC_SHDW_WUIR_WKUPEN7_ENABLE      (SHDWC_SHDW_WUIR_WKUPEN7_ENABLE_Val << SHDWC_SHDW_WUIR_WKUPEN7_Pos)  /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPEN8_Pos         8                                              /**< (SHDWC_SHDW_WUIR) Wake-up 8 Input Enable Position */
#define SHDWC_SHDW_WUIR_WKUPEN8_Msk         (_U_(0x1) << SHDWC_SHDW_WUIR_WKUPEN8_Pos)      /**< (SHDWC_SHDW_WUIR) Wake-up 8 Input Enable Mask */
#define SHDWC_SHDW_WUIR_WKUPEN8             SHDWC_SHDW_WUIR_WKUPEN8_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_WUIR_WKUPEN8_Msk instead */
#define   SHDWC_SHDW_WUIR_WKUPEN8_DISABLE_Val _U_(0x0)                                       /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDWC_SHDW_WUIR_WKUPEN8_ENABLE_Val _U_(0x1)                                       /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDWC_SHDW_WUIR_WKUPEN8_DISABLE     (SHDWC_SHDW_WUIR_WKUPEN8_DISABLE_Val << SHDWC_SHDW_WUIR_WKUPEN8_Pos)  /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDWC_SHDW_WUIR_WKUPEN8_ENABLE      (SHDWC_SHDW_WUIR_WKUPEN8_ENABLE_Val << SHDWC_SHDW_WUIR_WKUPEN8_Pos)  /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPEN9_Pos         9                                              /**< (SHDWC_SHDW_WUIR) Wake-up 9 Input Enable Position */
#define SHDWC_SHDW_WUIR_WKUPEN9_Msk         (_U_(0x1) << SHDWC_SHDW_WUIR_WKUPEN9_Pos)      /**< (SHDWC_SHDW_WUIR) Wake-up 9 Input Enable Mask */
#define SHDWC_SHDW_WUIR_WKUPEN9             SHDWC_SHDW_WUIR_WKUPEN9_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_WUIR_WKUPEN9_Msk instead */
#define   SHDWC_SHDW_WUIR_WKUPEN9_DISABLE_Val _U_(0x0)                                       /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDWC_SHDW_WUIR_WKUPEN9_ENABLE_Val _U_(0x1)                                       /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDWC_SHDW_WUIR_WKUPEN9_DISABLE     (SHDWC_SHDW_WUIR_WKUPEN9_DISABLE_Val << SHDWC_SHDW_WUIR_WKUPEN9_Pos)  /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDWC_SHDW_WUIR_WKUPEN9_ENABLE      (SHDWC_SHDW_WUIR_WKUPEN9_ENABLE_Val << SHDWC_SHDW_WUIR_WKUPEN9_Pos)  /**< (SHDWC_SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPT0_Pos          16                                             /**< (SHDWC_SHDW_WUIR) Wake-up 0 Input Type Position */
#define SHDWC_SHDW_WUIR_WKUPT0_Msk          (_U_(0x1) << SHDWC_SHDW_WUIR_WKUPT0_Pos)       /**< (SHDWC_SHDW_WUIR) Wake-up 0 Input Type Mask */
#define SHDWC_SHDW_WUIR_WKUPT0              SHDWC_SHDW_WUIR_WKUPT0_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_WUIR_WKUPT0_Msk instead */
#define   SHDWC_SHDW_WUIR_WKUPT0_LOW_Val    _U_(0x0)                                       /**< (SHDWC_SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SHDWC_SHDW_WUIR_WKUPT0_HIGH_Val   _U_(0x1)                                       /**< (SHDWC_SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDWC_SHDW_WUIR_WKUPT0_LOW          (SHDWC_SHDW_WUIR_WKUPT0_LOW_Val << SHDWC_SHDW_WUIR_WKUPT0_Pos)  /**< (SHDWC_SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPT0_HIGH         (SHDWC_SHDW_WUIR_WKUPT0_HIGH_Val << SHDWC_SHDW_WUIR_WKUPT0_Pos)  /**< (SHDWC_SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPT1_Pos          17                                             /**< (SHDWC_SHDW_WUIR) Wake-up 1 Input Type Position */
#define SHDWC_SHDW_WUIR_WKUPT1_Msk          (_U_(0x1) << SHDWC_SHDW_WUIR_WKUPT1_Pos)       /**< (SHDWC_SHDW_WUIR) Wake-up 1 Input Type Mask */
#define SHDWC_SHDW_WUIR_WKUPT1              SHDWC_SHDW_WUIR_WKUPT1_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_WUIR_WKUPT1_Msk instead */
#define   SHDWC_SHDW_WUIR_WKUPT1_LOW_Val    _U_(0x0)                                       /**< (SHDWC_SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SHDWC_SHDW_WUIR_WKUPT1_HIGH_Val   _U_(0x1)                                       /**< (SHDWC_SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDWC_SHDW_WUIR_WKUPT1_LOW          (SHDWC_SHDW_WUIR_WKUPT1_LOW_Val << SHDWC_SHDW_WUIR_WKUPT1_Pos)  /**< (SHDWC_SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPT1_HIGH         (SHDWC_SHDW_WUIR_WKUPT1_HIGH_Val << SHDWC_SHDW_WUIR_WKUPT1_Pos)  /**< (SHDWC_SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPT2_Pos          18                                             /**< (SHDWC_SHDW_WUIR) Wake-up 2 Input Type Position */
#define SHDWC_SHDW_WUIR_WKUPT2_Msk          (_U_(0x1) << SHDWC_SHDW_WUIR_WKUPT2_Pos)       /**< (SHDWC_SHDW_WUIR) Wake-up 2 Input Type Mask */
#define SHDWC_SHDW_WUIR_WKUPT2              SHDWC_SHDW_WUIR_WKUPT2_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_WUIR_WKUPT2_Msk instead */
#define   SHDWC_SHDW_WUIR_WKUPT2_LOW_Val    _U_(0x0)                                       /**< (SHDWC_SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SHDWC_SHDW_WUIR_WKUPT2_HIGH_Val   _U_(0x1)                                       /**< (SHDWC_SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDWC_SHDW_WUIR_WKUPT2_LOW          (SHDWC_SHDW_WUIR_WKUPT2_LOW_Val << SHDWC_SHDW_WUIR_WKUPT2_Pos)  /**< (SHDWC_SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPT2_HIGH         (SHDWC_SHDW_WUIR_WKUPT2_HIGH_Val << SHDWC_SHDW_WUIR_WKUPT2_Pos)  /**< (SHDWC_SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPT3_Pos          19                                             /**< (SHDWC_SHDW_WUIR) Wake-up 3 Input Type Position */
#define SHDWC_SHDW_WUIR_WKUPT3_Msk          (_U_(0x1) << SHDWC_SHDW_WUIR_WKUPT3_Pos)       /**< (SHDWC_SHDW_WUIR) Wake-up 3 Input Type Mask */
#define SHDWC_SHDW_WUIR_WKUPT3              SHDWC_SHDW_WUIR_WKUPT3_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_WUIR_WKUPT3_Msk instead */
#define   SHDWC_SHDW_WUIR_WKUPT3_LOW_Val    _U_(0x0)                                       /**< (SHDWC_SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SHDWC_SHDW_WUIR_WKUPT3_HIGH_Val   _U_(0x1)                                       /**< (SHDWC_SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDWC_SHDW_WUIR_WKUPT3_LOW          (SHDWC_SHDW_WUIR_WKUPT3_LOW_Val << SHDWC_SHDW_WUIR_WKUPT3_Pos)  /**< (SHDWC_SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPT3_HIGH         (SHDWC_SHDW_WUIR_WKUPT3_HIGH_Val << SHDWC_SHDW_WUIR_WKUPT3_Pos)  /**< (SHDWC_SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPT4_Pos          20                                             /**< (SHDWC_SHDW_WUIR) Wake-up 4 Input Type Position */
#define SHDWC_SHDW_WUIR_WKUPT4_Msk          (_U_(0x1) << SHDWC_SHDW_WUIR_WKUPT4_Pos)       /**< (SHDWC_SHDW_WUIR) Wake-up 4 Input Type Mask */
#define SHDWC_SHDW_WUIR_WKUPT4              SHDWC_SHDW_WUIR_WKUPT4_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_WUIR_WKUPT4_Msk instead */
#define   SHDWC_SHDW_WUIR_WKUPT4_LOW_Val    _U_(0x0)                                       /**< (SHDWC_SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SHDWC_SHDW_WUIR_WKUPT4_HIGH_Val   _U_(0x1)                                       /**< (SHDWC_SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDWC_SHDW_WUIR_WKUPT4_LOW          (SHDWC_SHDW_WUIR_WKUPT4_LOW_Val << SHDWC_SHDW_WUIR_WKUPT4_Pos)  /**< (SHDWC_SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPT4_HIGH         (SHDWC_SHDW_WUIR_WKUPT4_HIGH_Val << SHDWC_SHDW_WUIR_WKUPT4_Pos)  /**< (SHDWC_SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPT5_Pos          21                                             /**< (SHDWC_SHDW_WUIR) Wake-up 5 Input Type Position */
#define SHDWC_SHDW_WUIR_WKUPT5_Msk          (_U_(0x1) << SHDWC_SHDW_WUIR_WKUPT5_Pos)       /**< (SHDWC_SHDW_WUIR) Wake-up 5 Input Type Mask */
#define SHDWC_SHDW_WUIR_WKUPT5              SHDWC_SHDW_WUIR_WKUPT5_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_WUIR_WKUPT5_Msk instead */
#define   SHDWC_SHDW_WUIR_WKUPT5_LOW_Val    _U_(0x0)                                       /**< (SHDWC_SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SHDWC_SHDW_WUIR_WKUPT5_HIGH_Val   _U_(0x1)                                       /**< (SHDWC_SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDWC_SHDW_WUIR_WKUPT5_LOW          (SHDWC_SHDW_WUIR_WKUPT5_LOW_Val << SHDWC_SHDW_WUIR_WKUPT5_Pos)  /**< (SHDWC_SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPT5_HIGH         (SHDWC_SHDW_WUIR_WKUPT5_HIGH_Val << SHDWC_SHDW_WUIR_WKUPT5_Pos)  /**< (SHDWC_SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPT6_Pos          22                                             /**< (SHDWC_SHDW_WUIR) Wake-up 6 Input Type Position */
#define SHDWC_SHDW_WUIR_WKUPT6_Msk          (_U_(0x1) << SHDWC_SHDW_WUIR_WKUPT6_Pos)       /**< (SHDWC_SHDW_WUIR) Wake-up 6 Input Type Mask */
#define SHDWC_SHDW_WUIR_WKUPT6              SHDWC_SHDW_WUIR_WKUPT6_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_WUIR_WKUPT6_Msk instead */
#define   SHDWC_SHDW_WUIR_WKUPT6_LOW_Val    _U_(0x0)                                       /**< (SHDWC_SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SHDWC_SHDW_WUIR_WKUPT6_HIGH_Val   _U_(0x1)                                       /**< (SHDWC_SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDWC_SHDW_WUIR_WKUPT6_LOW          (SHDWC_SHDW_WUIR_WKUPT6_LOW_Val << SHDWC_SHDW_WUIR_WKUPT6_Pos)  /**< (SHDWC_SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPT6_HIGH         (SHDWC_SHDW_WUIR_WKUPT6_HIGH_Val << SHDWC_SHDW_WUIR_WKUPT6_Pos)  /**< (SHDWC_SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPT7_Pos          23                                             /**< (SHDWC_SHDW_WUIR) Wake-up 7 Input Type Position */
#define SHDWC_SHDW_WUIR_WKUPT7_Msk          (_U_(0x1) << SHDWC_SHDW_WUIR_WKUPT7_Pos)       /**< (SHDWC_SHDW_WUIR) Wake-up 7 Input Type Mask */
#define SHDWC_SHDW_WUIR_WKUPT7              SHDWC_SHDW_WUIR_WKUPT7_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_WUIR_WKUPT7_Msk instead */
#define   SHDWC_SHDW_WUIR_WKUPT7_LOW_Val    _U_(0x0)                                       /**< (SHDWC_SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SHDWC_SHDW_WUIR_WKUPT7_HIGH_Val   _U_(0x1)                                       /**< (SHDWC_SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDWC_SHDW_WUIR_WKUPT7_LOW          (SHDWC_SHDW_WUIR_WKUPT7_LOW_Val << SHDWC_SHDW_WUIR_WKUPT7_Pos)  /**< (SHDWC_SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPT7_HIGH         (SHDWC_SHDW_WUIR_WKUPT7_HIGH_Val << SHDWC_SHDW_WUIR_WKUPT7_Pos)  /**< (SHDWC_SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPT8_Pos          24                                             /**< (SHDWC_SHDW_WUIR) Wake-up 8 Input Type Position */
#define SHDWC_SHDW_WUIR_WKUPT8_Msk          (_U_(0x1) << SHDWC_SHDW_WUIR_WKUPT8_Pos)       /**< (SHDWC_SHDW_WUIR) Wake-up 8 Input Type Mask */
#define SHDWC_SHDW_WUIR_WKUPT8              SHDWC_SHDW_WUIR_WKUPT8_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_WUIR_WKUPT8_Msk instead */
#define   SHDWC_SHDW_WUIR_WKUPT8_LOW_Val    _U_(0x0)                                       /**< (SHDWC_SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SHDWC_SHDW_WUIR_WKUPT8_HIGH_Val   _U_(0x1)                                       /**< (SHDWC_SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDWC_SHDW_WUIR_WKUPT8_LOW          (SHDWC_SHDW_WUIR_WKUPT8_LOW_Val << SHDWC_SHDW_WUIR_WKUPT8_Pos)  /**< (SHDWC_SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPT8_HIGH         (SHDWC_SHDW_WUIR_WKUPT8_HIGH_Val << SHDWC_SHDW_WUIR_WKUPT8_Pos)  /**< (SHDWC_SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPT9_Pos          25                                             /**< (SHDWC_SHDW_WUIR) Wake-up 9 Input Type Position */
#define SHDWC_SHDW_WUIR_WKUPT9_Msk          (_U_(0x1) << SHDWC_SHDW_WUIR_WKUPT9_Pos)       /**< (SHDWC_SHDW_WUIR) Wake-up 9 Input Type Mask */
#define SHDWC_SHDW_WUIR_WKUPT9              SHDWC_SHDW_WUIR_WKUPT9_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SHDWC_SHDW_WUIR_WKUPT9_Msk instead */
#define   SHDWC_SHDW_WUIR_WKUPT9_LOW_Val    _U_(0x0)                                       /**< (SHDWC_SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SHDWC_SHDW_WUIR_WKUPT9_HIGH_Val   _U_(0x1)                                       /**< (SHDWC_SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDWC_SHDW_WUIR_WKUPT9_LOW          (SHDWC_SHDW_WUIR_WKUPT9_LOW_Val << SHDWC_SHDW_WUIR_WKUPT9_Pos)  /**< (SHDWC_SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_WKUPT9_HIGH         (SHDWC_SHDW_WUIR_WKUPT9_HIGH_Val << SHDWC_SHDW_WUIR_WKUPT9_Pos)  /**< (SHDWC_SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDWC_SHDW_WUIR_MASK                _U_(0x3FF03FF)                                 /**< \deprecated (SHDWC_SHDW_WUIR) Register MASK  (Use SHDWC_SHDW_WUIR_Msk instead)  */
#define SHDWC_SHDW_WUIR_Msk                 _U_(0x3FF03FF)                                 /**< (SHDWC_SHDW_WUIR) Register Mask  */

#define SHDWC_SHDW_WUIR_WKUPEN_Pos          0                                              /**< (SHDWC_SHDW_WUIR Position) Wake-up x Input Enable */
#define SHDWC_SHDW_WUIR_WKUPEN_Msk          (_U_(0x3FF) << SHDWC_SHDW_WUIR_WKUPEN_Pos)     /**< (SHDWC_SHDW_WUIR Mask) WKUPEN */
#define SHDWC_SHDW_WUIR_WKUPEN(value)       (SHDWC_SHDW_WUIR_WKUPEN_Msk & ((value) << SHDWC_SHDW_WUIR_WKUPEN_Pos))  
#define SHDWC_SHDW_WUIR_WKUPT_Pos           16                                             /**< (SHDWC_SHDW_WUIR Position) Wake-up 9 Input Type */
#define SHDWC_SHDW_WUIR_WKUPT_Msk           (_U_(0x3FF) << SHDWC_SHDW_WUIR_WKUPT_Pos)      /**< (SHDWC_SHDW_WUIR Mask) WKUPT */
#define SHDWC_SHDW_WUIR_WKUPT(value)        (SHDWC_SHDW_WUIR_WKUPT_Msk & ((value) << SHDWC_SHDW_WUIR_WKUPT_Pos))  

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief SHDWC hardware registers */
typedef struct {  
  __O  uint32_t SHDW_CR;        /**< (SHDWC Offset: 0x00) Shutdown Control Register */
  __IO uint32_t SHDW_MR;        /**< (SHDWC Offset: 0x04) Shutdown Mode Register */
  __I  uint32_t SHDW_SR;        /**< (SHDWC Offset: 0x08) Shutdown Status Register */
  __IO uint32_t SHDW_WUIR;      /**< (SHDWC Offset: 0x0C) Shutdown Wake-up Inputs Register */
} Shdwc;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief SHDWC hardware registers */
typedef struct {  
  __O  SHDWC_SHDW_CR_Type             SHDW_CR;        /**< Offset: 0x00 ( /W  32) Shutdown Control Register */
  __IO SHDWC_SHDW_MR_Type             SHDW_MR;        /**< Offset: 0x04 (R/W  32) Shutdown Mode Register */
  __I  SHDWC_SHDW_SR_Type             SHDW_SR;        /**< Offset: 0x08 (R/   32) Shutdown Status Register */
  __IO SHDWC_SHDW_WUIR_Type           SHDW_WUIR;      /**< Offset: 0x0C (R/W  32) Shutdown Wake-up Inputs Register */
} Shdwc;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Shutdown Controller */

#endif /* _SAMA5D2_SHDWC_COMPONENT_H_ */
