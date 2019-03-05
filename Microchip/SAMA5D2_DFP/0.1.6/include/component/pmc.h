/**
 * \file
 *
 * \brief Component description for PMC
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
#ifndef _SAMA5D2_PMC_COMPONENT_H_
#define _SAMA5D2_PMC_COMPONENT_H_
#define _SAMA5D2_PMC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Power Management Controller
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PMC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define PMC_11041                      /**< (PMC) Module ID */
#define REV_PMC ZD                     /**< (PMC) Module revision */

/* -------- PMC_SCER : (PMC Offset: 0x00) (/W 32) System Clock Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DDRCK:1;                   /**< bit:      2  DDR Clock Enable                         */
    uint32_t LCDCK:1;                   /**< bit:      3  MCK2x Clock Enable                       */
    uint32_t :2;                        /**< bit:   4..5  Reserved */
    uint32_t UHP:1;                     /**< bit:      6  USB Host OHCI Clocks Enable              */
    uint32_t UDP:1;                     /**< bit:      7  USB Device Clock Enable                  */
    uint32_t PCK0:1;                    /**< bit:      8  Programmable Clock 0 Output Enable       */
    uint32_t PCK1:1;                    /**< bit:      9  Programmable Clock 1 Output Enable       */
    uint32_t PCK2:1;                    /**< bit:     10  Programmable Clock 2 Output Enable       */
    uint32_t :7;                        /**< bit: 11..17  Reserved */
    uint32_t ISCCK:1;                   /**< bit:     18  ISC Clock Enable                         */
    uint32_t :13;                       /**< bit: 19..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PCK:3;                     /**< bit:  8..10  Programmable Clock x Output Enable       */
    uint32_t :21;                       /**< bit: 11..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_SCER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_SCER_OFFSET                     (0x00)                                        /**<  (PMC_SCER) System Clock Enable Register  Offset */

#define PMC_SCER_DDRCK_Pos                  2                                              /**< (PMC_SCER) DDR Clock Enable Position */
#define PMC_SCER_DDRCK_Msk                  (_U_(0x1) << PMC_SCER_DDRCK_Pos)               /**< (PMC_SCER) DDR Clock Enable Mask */
#define PMC_SCER_DDRCK                      PMC_SCER_DDRCK_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCER_DDRCK_Msk instead */
#define PMC_SCER_LCDCK_Pos                  3                                              /**< (PMC_SCER) MCK2x Clock Enable Position */
#define PMC_SCER_LCDCK_Msk                  (_U_(0x1) << PMC_SCER_LCDCK_Pos)               /**< (PMC_SCER) MCK2x Clock Enable Mask */
#define PMC_SCER_LCDCK                      PMC_SCER_LCDCK_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCER_LCDCK_Msk instead */
#define PMC_SCER_UHP_Pos                    6                                              /**< (PMC_SCER) USB Host OHCI Clocks Enable Position */
#define PMC_SCER_UHP_Msk                    (_U_(0x1) << PMC_SCER_UHP_Pos)                 /**< (PMC_SCER) USB Host OHCI Clocks Enable Mask */
#define PMC_SCER_UHP                        PMC_SCER_UHP_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCER_UHP_Msk instead */
#define PMC_SCER_UDP_Pos                    7                                              /**< (PMC_SCER) USB Device Clock Enable Position */
#define PMC_SCER_UDP_Msk                    (_U_(0x1) << PMC_SCER_UDP_Pos)                 /**< (PMC_SCER) USB Device Clock Enable Mask */
#define PMC_SCER_UDP                        PMC_SCER_UDP_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCER_UDP_Msk instead */
#define PMC_SCER_PCK0_Pos                   8                                              /**< (PMC_SCER) Programmable Clock 0 Output Enable Position */
#define PMC_SCER_PCK0_Msk                   (_U_(0x1) << PMC_SCER_PCK0_Pos)                /**< (PMC_SCER) Programmable Clock 0 Output Enable Mask */
#define PMC_SCER_PCK0                       PMC_SCER_PCK0_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCER_PCK0_Msk instead */
#define PMC_SCER_PCK1_Pos                   9                                              /**< (PMC_SCER) Programmable Clock 1 Output Enable Position */
#define PMC_SCER_PCK1_Msk                   (_U_(0x1) << PMC_SCER_PCK1_Pos)                /**< (PMC_SCER) Programmable Clock 1 Output Enable Mask */
#define PMC_SCER_PCK1                       PMC_SCER_PCK1_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCER_PCK1_Msk instead */
#define PMC_SCER_PCK2_Pos                   10                                             /**< (PMC_SCER) Programmable Clock 2 Output Enable Position */
#define PMC_SCER_PCK2_Msk                   (_U_(0x1) << PMC_SCER_PCK2_Pos)                /**< (PMC_SCER) Programmable Clock 2 Output Enable Mask */
#define PMC_SCER_PCK2                       PMC_SCER_PCK2_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCER_PCK2_Msk instead */
#define PMC_SCER_ISCCK_Pos                  18                                             /**< (PMC_SCER) ISC Clock Enable Position */
#define PMC_SCER_ISCCK_Msk                  (_U_(0x1) << PMC_SCER_ISCCK_Pos)               /**< (PMC_SCER) ISC Clock Enable Mask */
#define PMC_SCER_ISCCK                      PMC_SCER_ISCCK_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCER_ISCCK_Msk instead */
#define PMC_SCER_MASK                       _U_(0x407CC)                                   /**< \deprecated (PMC_SCER) Register MASK  (Use PMC_SCER_Msk instead)  */
#define PMC_SCER_Msk                        _U_(0x407CC)                                   /**< (PMC_SCER) Register Mask  */

#define PMC_SCER_PCK_Pos                    8                                              /**< (PMC_SCER Position) Programmable Clock x Output Enable */
#define PMC_SCER_PCK_Msk                    (_U_(0x7) << PMC_SCER_PCK_Pos)                 /**< (PMC_SCER Mask) PCK */
#define PMC_SCER_PCK(value)                 (PMC_SCER_PCK_Msk & ((value) << PMC_SCER_PCK_Pos))  

/* -------- PMC_SCDR : (PMC Offset: 0x04) (/W 32) System Clock Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PCK:1;                     /**< bit:      0  Processor Clock Disable                  */
    uint32_t :1;                        /**< bit:      1  Reserved */
    uint32_t DDRCK:1;                   /**< bit:      2  DDR Clock Disable                        */
    uint32_t LCDCK:1;                   /**< bit:      3  MCK2x Clock Disable                      */
    uint32_t :2;                        /**< bit:   4..5  Reserved */
    uint32_t UHP:1;                     /**< bit:      6  USB Host OHCI Clock Disable              */
    uint32_t UDP:1;                     /**< bit:      7  USB Device Clock Enable                  */
    uint32_t PCK0:1;                    /**< bit:      8  Programmable Clock 0 Output Disable      */
    uint32_t PCK1:1;                    /**< bit:      9  Programmable Clock 1 Output Disable      */
    uint32_t PCK2:1;                    /**< bit:     10  Programmable Clock 2 Output Disable      */
    uint32_t :7;                        /**< bit: 11..17  Reserved */
    uint32_t ISCCK:1;                   /**< bit:     18  ISC Clock Disable                        */
    uint32_t :13;                       /**< bit: 19..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PCK:3;                     /**< bit:  8..10  Programmable Clock x Output Disable      */
    uint32_t :21;                       /**< bit: 11..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_SCDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_SCDR_OFFSET                     (0x04)                                        /**<  (PMC_SCDR) System Clock Disable Register  Offset */

#define PMC_SCDR_PCK_Pos                    0                                              /**< (PMC_SCDR) Processor Clock Disable Position */
#define PMC_SCDR_PCK_Msk                    (_U_(0x1) << PMC_SCDR_PCK_Pos)                 /**< (PMC_SCDR) Processor Clock Disable Mask */
#define PMC_SCDR_PCK                        PMC_SCDR_PCK_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCDR_PCK_Msk instead */
#define PMC_SCDR_DDRCK_Pos                  2                                              /**< (PMC_SCDR) DDR Clock Disable Position */
#define PMC_SCDR_DDRCK_Msk                  (_U_(0x1) << PMC_SCDR_DDRCK_Pos)               /**< (PMC_SCDR) DDR Clock Disable Mask */
#define PMC_SCDR_DDRCK                      PMC_SCDR_DDRCK_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCDR_DDRCK_Msk instead */
#define PMC_SCDR_LCDCK_Pos                  3                                              /**< (PMC_SCDR) MCK2x Clock Disable Position */
#define PMC_SCDR_LCDCK_Msk                  (_U_(0x1) << PMC_SCDR_LCDCK_Pos)               /**< (PMC_SCDR) MCK2x Clock Disable Mask */
#define PMC_SCDR_LCDCK                      PMC_SCDR_LCDCK_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCDR_LCDCK_Msk instead */
#define PMC_SCDR_UHP_Pos                    6                                              /**< (PMC_SCDR) USB Host OHCI Clock Disable Position */
#define PMC_SCDR_UHP_Msk                    (_U_(0x1) << PMC_SCDR_UHP_Pos)                 /**< (PMC_SCDR) USB Host OHCI Clock Disable Mask */
#define PMC_SCDR_UHP                        PMC_SCDR_UHP_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCDR_UHP_Msk instead */
#define PMC_SCDR_UDP_Pos                    7                                              /**< (PMC_SCDR) USB Device Clock Enable Position */
#define PMC_SCDR_UDP_Msk                    (_U_(0x1) << PMC_SCDR_UDP_Pos)                 /**< (PMC_SCDR) USB Device Clock Enable Mask */
#define PMC_SCDR_UDP                        PMC_SCDR_UDP_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCDR_UDP_Msk instead */
#define PMC_SCDR_PCK0_Pos                   8                                              /**< (PMC_SCDR) Programmable Clock 0 Output Disable Position */
#define PMC_SCDR_PCK0_Msk                   (_U_(0x1) << PMC_SCDR_PCK0_Pos)                /**< (PMC_SCDR) Programmable Clock 0 Output Disable Mask */
#define PMC_SCDR_PCK0                       PMC_SCDR_PCK0_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCDR_PCK0_Msk instead */
#define PMC_SCDR_PCK1_Pos                   9                                              /**< (PMC_SCDR) Programmable Clock 1 Output Disable Position */
#define PMC_SCDR_PCK1_Msk                   (_U_(0x1) << PMC_SCDR_PCK1_Pos)                /**< (PMC_SCDR) Programmable Clock 1 Output Disable Mask */
#define PMC_SCDR_PCK1                       PMC_SCDR_PCK1_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCDR_PCK1_Msk instead */
#define PMC_SCDR_PCK2_Pos                   10                                             /**< (PMC_SCDR) Programmable Clock 2 Output Disable Position */
#define PMC_SCDR_PCK2_Msk                   (_U_(0x1) << PMC_SCDR_PCK2_Pos)                /**< (PMC_SCDR) Programmable Clock 2 Output Disable Mask */
#define PMC_SCDR_PCK2                       PMC_SCDR_PCK2_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCDR_PCK2_Msk instead */
#define PMC_SCDR_ISCCK_Pos                  18                                             /**< (PMC_SCDR) ISC Clock Disable Position */
#define PMC_SCDR_ISCCK_Msk                  (_U_(0x1) << PMC_SCDR_ISCCK_Pos)               /**< (PMC_SCDR) ISC Clock Disable Mask */
#define PMC_SCDR_ISCCK                      PMC_SCDR_ISCCK_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCDR_ISCCK_Msk instead */
#define PMC_SCDR_MASK                       _U_(0x407CD)                                   /**< \deprecated (PMC_SCDR) Register MASK  (Use PMC_SCDR_Msk instead)  */
#define PMC_SCDR_Msk                        _U_(0x407CD)                                   /**< (PMC_SCDR) Register Mask  */

#define PMC_SCDR_PCK_Pos                    8                                              /**< (PMC_SCDR Position) Programmable Clock x Output Disable */
#define PMC_SCDR_PCK_Msk                    (_U_(0x7) << PMC_SCDR_PCK_Pos)                 /**< (PMC_SCDR Mask) PCK */
#define PMC_SCDR_PCK(value)                 (PMC_SCDR_PCK_Msk & ((value) << PMC_SCDR_PCK_Pos))  

/* -------- PMC_SCSR : (PMC Offset: 0x08) (R/ 32) System Clock Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PCK:1;                     /**< bit:      0  Processor Clock Status                   */
    uint32_t :1;                        /**< bit:      1  Reserved */
    uint32_t DDRCK:1;                   /**< bit:      2  DDR Clock Status                         */
    uint32_t LCDCK:1;                   /**< bit:      3  MCK2x Clock Status                       */
    uint32_t :2;                        /**< bit:   4..5  Reserved */
    uint32_t UHP:1;                     /**< bit:      6  USB Host Port Clock Status               */
    uint32_t UDP:1;                     /**< bit:      7  USB Device Port Clock Status             */
    uint32_t PCK0:1;                    /**< bit:      8  Programmable Clock 0 Output Status       */
    uint32_t PCK1:1;                    /**< bit:      9  Programmable Clock 1 Output Status       */
    uint32_t PCK2:1;                    /**< bit:     10  Programmable Clock 2 Output Status       */
    uint32_t :7;                        /**< bit: 11..17  Reserved */
    uint32_t ISCCK:1;                   /**< bit:     18  ISC Clock Status                         */
    uint32_t :13;                       /**< bit: 19..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PCK:3;                     /**< bit:  8..10  Programmable Clock x Output Status       */
    uint32_t :21;                       /**< bit: 11..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_SCSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_SCSR_OFFSET                     (0x08)                                        /**<  (PMC_SCSR) System Clock Status Register  Offset */

#define PMC_SCSR_PCK_Pos                    0                                              /**< (PMC_SCSR) Processor Clock Status Position */
#define PMC_SCSR_PCK_Msk                    (_U_(0x1) << PMC_SCSR_PCK_Pos)                 /**< (PMC_SCSR) Processor Clock Status Mask */
#define PMC_SCSR_PCK                        PMC_SCSR_PCK_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCSR_PCK_Msk instead */
#define PMC_SCSR_DDRCK_Pos                  2                                              /**< (PMC_SCSR) DDR Clock Status Position */
#define PMC_SCSR_DDRCK_Msk                  (_U_(0x1) << PMC_SCSR_DDRCK_Pos)               /**< (PMC_SCSR) DDR Clock Status Mask */
#define PMC_SCSR_DDRCK                      PMC_SCSR_DDRCK_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCSR_DDRCK_Msk instead */
#define PMC_SCSR_LCDCK_Pos                  3                                              /**< (PMC_SCSR) MCK2x Clock Status Position */
#define PMC_SCSR_LCDCK_Msk                  (_U_(0x1) << PMC_SCSR_LCDCK_Pos)               /**< (PMC_SCSR) MCK2x Clock Status Mask */
#define PMC_SCSR_LCDCK                      PMC_SCSR_LCDCK_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCSR_LCDCK_Msk instead */
#define PMC_SCSR_UHP_Pos                    6                                              /**< (PMC_SCSR) USB Host Port Clock Status Position */
#define PMC_SCSR_UHP_Msk                    (_U_(0x1) << PMC_SCSR_UHP_Pos)                 /**< (PMC_SCSR) USB Host Port Clock Status Mask */
#define PMC_SCSR_UHP                        PMC_SCSR_UHP_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCSR_UHP_Msk instead */
#define PMC_SCSR_UDP_Pos                    7                                              /**< (PMC_SCSR) USB Device Port Clock Status Position */
#define PMC_SCSR_UDP_Msk                    (_U_(0x1) << PMC_SCSR_UDP_Pos)                 /**< (PMC_SCSR) USB Device Port Clock Status Mask */
#define PMC_SCSR_UDP                        PMC_SCSR_UDP_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCSR_UDP_Msk instead */
#define PMC_SCSR_PCK0_Pos                   8                                              /**< (PMC_SCSR) Programmable Clock 0 Output Status Position */
#define PMC_SCSR_PCK0_Msk                   (_U_(0x1) << PMC_SCSR_PCK0_Pos)                /**< (PMC_SCSR) Programmable Clock 0 Output Status Mask */
#define PMC_SCSR_PCK0                       PMC_SCSR_PCK0_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCSR_PCK0_Msk instead */
#define PMC_SCSR_PCK1_Pos                   9                                              /**< (PMC_SCSR) Programmable Clock 1 Output Status Position */
#define PMC_SCSR_PCK1_Msk                   (_U_(0x1) << PMC_SCSR_PCK1_Pos)                /**< (PMC_SCSR) Programmable Clock 1 Output Status Mask */
#define PMC_SCSR_PCK1                       PMC_SCSR_PCK1_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCSR_PCK1_Msk instead */
#define PMC_SCSR_PCK2_Pos                   10                                             /**< (PMC_SCSR) Programmable Clock 2 Output Status Position */
#define PMC_SCSR_PCK2_Msk                   (_U_(0x1) << PMC_SCSR_PCK2_Pos)                /**< (PMC_SCSR) Programmable Clock 2 Output Status Mask */
#define PMC_SCSR_PCK2                       PMC_SCSR_PCK2_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCSR_PCK2_Msk instead */
#define PMC_SCSR_ISCCK_Pos                  18                                             /**< (PMC_SCSR) ISC Clock Status Position */
#define PMC_SCSR_ISCCK_Msk                  (_U_(0x1) << PMC_SCSR_ISCCK_Pos)               /**< (PMC_SCSR) ISC Clock Status Mask */
#define PMC_SCSR_ISCCK                      PMC_SCSR_ISCCK_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SCSR_ISCCK_Msk instead */
#define PMC_SCSR_MASK                       _U_(0x407CD)                                   /**< \deprecated (PMC_SCSR) Register MASK  (Use PMC_SCSR_Msk instead)  */
#define PMC_SCSR_Msk                        _U_(0x407CD)                                   /**< (PMC_SCSR) Register Mask  */

#define PMC_SCSR_PCK_Pos                    8                                              /**< (PMC_SCSR Position) Programmable Clock x Output Status */
#define PMC_SCSR_PCK_Msk                    (_U_(0x7) << PMC_SCSR_PCK_Pos)                 /**< (PMC_SCSR Mask) PCK */
#define PMC_SCSR_PCK(value)                 (PMC_SCSR_PCK_Msk & ((value) << PMC_SCSR_PCK_Pos))  

/* -------- PMC_PCER0 : (PMC Offset: 0x10) (/W 32) Peripheral Clock Enable Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t PID2:1;                    /**< bit:      2  Peripheral Clock 2 Enable                */
    uint32_t PID3:1;                    /**< bit:      3  Peripheral Clock 3 Enable                */
    uint32_t PID4:1;                    /**< bit:      4  Peripheral Clock 4 Enable                */
    uint32_t PID5:1;                    /**< bit:      5  Peripheral Clock 5 Enable                */
    uint32_t PID6:1;                    /**< bit:      6  Peripheral Clock 6 Enable                */
    uint32_t PID7:1;                    /**< bit:      7  Peripheral Clock 7 Enable                */
    uint32_t PID8:1;                    /**< bit:      8  Peripheral Clock 8 Enable                */
    uint32_t PID9:1;                    /**< bit:      9  Peripheral Clock 9 Enable                */
    uint32_t PID10:1;                   /**< bit:     10  Peripheral Clock 10 Enable               */
    uint32_t PID11:1;                   /**< bit:     11  Peripheral Clock 11 Enable               */
    uint32_t PID12:1;                   /**< bit:     12  Peripheral Clock 12 Enable               */
    uint32_t PID13:1;                   /**< bit:     13  Peripheral Clock 13 Enable               */
    uint32_t PID14:1;                   /**< bit:     14  Peripheral Clock 14 Enable               */
    uint32_t PID15:1;                   /**< bit:     15  Peripheral Clock 15 Enable               */
    uint32_t PID16:1;                   /**< bit:     16  Peripheral Clock 16 Enable               */
    uint32_t PID17:1;                   /**< bit:     17  Peripheral Clock 17 Enable               */
    uint32_t PID18:1;                   /**< bit:     18  Peripheral Clock 18 Enable               */
    uint32_t PID19:1;                   /**< bit:     19  Peripheral Clock 19 Enable               */
    uint32_t PID20:1;                   /**< bit:     20  Peripheral Clock 20 Enable               */
    uint32_t PID21:1;                   /**< bit:     21  Peripheral Clock 21 Enable               */
    uint32_t PID22:1;                   /**< bit:     22  Peripheral Clock 22 Enable               */
    uint32_t PID23:1;                   /**< bit:     23  Peripheral Clock 23 Enable               */
    uint32_t PID24:1;                   /**< bit:     24  Peripheral Clock 24 Enable               */
    uint32_t PID25:1;                   /**< bit:     25  Peripheral Clock 25 Enable               */
    uint32_t PID26:1;                   /**< bit:     26  Peripheral Clock 26 Enable               */
    uint32_t PID27:1;                   /**< bit:     27  Peripheral Clock 27 Enable               */
    uint32_t PID28:1;                   /**< bit:     28  Peripheral Clock 28 Enable               */
    uint32_t PID29:1;                   /**< bit:     29  Peripheral Clock 29 Enable               */
    uint32_t PID30:1;                   /**< bit:     30  Peripheral Clock 30 Enable               */
    uint32_t PID31:1;                   /**< bit:     31  Peripheral Clock 31 Enable               */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t PID:30;                    /**< bit:  2..31  Peripheral Clock 3x Enable               */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_PCER0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_PCER0_OFFSET                    (0x10)                                        /**<  (PMC_PCER0) Peripheral Clock Enable Register 0  Offset */

#define PMC_PCER0_PID2_Pos                  2                                              /**< (PMC_PCER0) Peripheral Clock 2 Enable Position */
#define PMC_PCER0_PID2_Msk                  (_U_(0x1) << PMC_PCER0_PID2_Pos)               /**< (PMC_PCER0) Peripheral Clock 2 Enable Mask */
#define PMC_PCER0_PID2                      PMC_PCER0_PID2_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID2_Msk instead */
#define PMC_PCER0_PID3_Pos                  3                                              /**< (PMC_PCER0) Peripheral Clock 3 Enable Position */
#define PMC_PCER0_PID3_Msk                  (_U_(0x1) << PMC_PCER0_PID3_Pos)               /**< (PMC_PCER0) Peripheral Clock 3 Enable Mask */
#define PMC_PCER0_PID3                      PMC_PCER0_PID3_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID3_Msk instead */
#define PMC_PCER0_PID4_Pos                  4                                              /**< (PMC_PCER0) Peripheral Clock 4 Enable Position */
#define PMC_PCER0_PID4_Msk                  (_U_(0x1) << PMC_PCER0_PID4_Pos)               /**< (PMC_PCER0) Peripheral Clock 4 Enable Mask */
#define PMC_PCER0_PID4                      PMC_PCER0_PID4_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID4_Msk instead */
#define PMC_PCER0_PID5_Pos                  5                                              /**< (PMC_PCER0) Peripheral Clock 5 Enable Position */
#define PMC_PCER0_PID5_Msk                  (_U_(0x1) << PMC_PCER0_PID5_Pos)               /**< (PMC_PCER0) Peripheral Clock 5 Enable Mask */
#define PMC_PCER0_PID5                      PMC_PCER0_PID5_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID5_Msk instead */
#define PMC_PCER0_PID6_Pos                  6                                              /**< (PMC_PCER0) Peripheral Clock 6 Enable Position */
#define PMC_PCER0_PID6_Msk                  (_U_(0x1) << PMC_PCER0_PID6_Pos)               /**< (PMC_PCER0) Peripheral Clock 6 Enable Mask */
#define PMC_PCER0_PID6                      PMC_PCER0_PID6_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID6_Msk instead */
#define PMC_PCER0_PID7_Pos                  7                                              /**< (PMC_PCER0) Peripheral Clock 7 Enable Position */
#define PMC_PCER0_PID7_Msk                  (_U_(0x1) << PMC_PCER0_PID7_Pos)               /**< (PMC_PCER0) Peripheral Clock 7 Enable Mask */
#define PMC_PCER0_PID7                      PMC_PCER0_PID7_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID7_Msk instead */
#define PMC_PCER0_PID8_Pos                  8                                              /**< (PMC_PCER0) Peripheral Clock 8 Enable Position */
#define PMC_PCER0_PID8_Msk                  (_U_(0x1) << PMC_PCER0_PID8_Pos)               /**< (PMC_PCER0) Peripheral Clock 8 Enable Mask */
#define PMC_PCER0_PID8                      PMC_PCER0_PID8_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID8_Msk instead */
#define PMC_PCER0_PID9_Pos                  9                                              /**< (PMC_PCER0) Peripheral Clock 9 Enable Position */
#define PMC_PCER0_PID9_Msk                  (_U_(0x1) << PMC_PCER0_PID9_Pos)               /**< (PMC_PCER0) Peripheral Clock 9 Enable Mask */
#define PMC_PCER0_PID9                      PMC_PCER0_PID9_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID9_Msk instead */
#define PMC_PCER0_PID10_Pos                 10                                             /**< (PMC_PCER0) Peripheral Clock 10 Enable Position */
#define PMC_PCER0_PID10_Msk                 (_U_(0x1) << PMC_PCER0_PID10_Pos)              /**< (PMC_PCER0) Peripheral Clock 10 Enable Mask */
#define PMC_PCER0_PID10                     PMC_PCER0_PID10_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID10_Msk instead */
#define PMC_PCER0_PID11_Pos                 11                                             /**< (PMC_PCER0) Peripheral Clock 11 Enable Position */
#define PMC_PCER0_PID11_Msk                 (_U_(0x1) << PMC_PCER0_PID11_Pos)              /**< (PMC_PCER0) Peripheral Clock 11 Enable Mask */
#define PMC_PCER0_PID11                     PMC_PCER0_PID11_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID11_Msk instead */
#define PMC_PCER0_PID12_Pos                 12                                             /**< (PMC_PCER0) Peripheral Clock 12 Enable Position */
#define PMC_PCER0_PID12_Msk                 (_U_(0x1) << PMC_PCER0_PID12_Pos)              /**< (PMC_PCER0) Peripheral Clock 12 Enable Mask */
#define PMC_PCER0_PID12                     PMC_PCER0_PID12_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID12_Msk instead */
#define PMC_PCER0_PID13_Pos                 13                                             /**< (PMC_PCER0) Peripheral Clock 13 Enable Position */
#define PMC_PCER0_PID13_Msk                 (_U_(0x1) << PMC_PCER0_PID13_Pos)              /**< (PMC_PCER0) Peripheral Clock 13 Enable Mask */
#define PMC_PCER0_PID13                     PMC_PCER0_PID13_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID13_Msk instead */
#define PMC_PCER0_PID14_Pos                 14                                             /**< (PMC_PCER0) Peripheral Clock 14 Enable Position */
#define PMC_PCER0_PID14_Msk                 (_U_(0x1) << PMC_PCER0_PID14_Pos)              /**< (PMC_PCER0) Peripheral Clock 14 Enable Mask */
#define PMC_PCER0_PID14                     PMC_PCER0_PID14_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID14_Msk instead */
#define PMC_PCER0_PID15_Pos                 15                                             /**< (PMC_PCER0) Peripheral Clock 15 Enable Position */
#define PMC_PCER0_PID15_Msk                 (_U_(0x1) << PMC_PCER0_PID15_Pos)              /**< (PMC_PCER0) Peripheral Clock 15 Enable Mask */
#define PMC_PCER0_PID15                     PMC_PCER0_PID15_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID15_Msk instead */
#define PMC_PCER0_PID16_Pos                 16                                             /**< (PMC_PCER0) Peripheral Clock 16 Enable Position */
#define PMC_PCER0_PID16_Msk                 (_U_(0x1) << PMC_PCER0_PID16_Pos)              /**< (PMC_PCER0) Peripheral Clock 16 Enable Mask */
#define PMC_PCER0_PID16                     PMC_PCER0_PID16_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID16_Msk instead */
#define PMC_PCER0_PID17_Pos                 17                                             /**< (PMC_PCER0) Peripheral Clock 17 Enable Position */
#define PMC_PCER0_PID17_Msk                 (_U_(0x1) << PMC_PCER0_PID17_Pos)              /**< (PMC_PCER0) Peripheral Clock 17 Enable Mask */
#define PMC_PCER0_PID17                     PMC_PCER0_PID17_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID17_Msk instead */
#define PMC_PCER0_PID18_Pos                 18                                             /**< (PMC_PCER0) Peripheral Clock 18 Enable Position */
#define PMC_PCER0_PID18_Msk                 (_U_(0x1) << PMC_PCER0_PID18_Pos)              /**< (PMC_PCER0) Peripheral Clock 18 Enable Mask */
#define PMC_PCER0_PID18                     PMC_PCER0_PID18_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID18_Msk instead */
#define PMC_PCER0_PID19_Pos                 19                                             /**< (PMC_PCER0) Peripheral Clock 19 Enable Position */
#define PMC_PCER0_PID19_Msk                 (_U_(0x1) << PMC_PCER0_PID19_Pos)              /**< (PMC_PCER0) Peripheral Clock 19 Enable Mask */
#define PMC_PCER0_PID19                     PMC_PCER0_PID19_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID19_Msk instead */
#define PMC_PCER0_PID20_Pos                 20                                             /**< (PMC_PCER0) Peripheral Clock 20 Enable Position */
#define PMC_PCER0_PID20_Msk                 (_U_(0x1) << PMC_PCER0_PID20_Pos)              /**< (PMC_PCER0) Peripheral Clock 20 Enable Mask */
#define PMC_PCER0_PID20                     PMC_PCER0_PID20_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID20_Msk instead */
#define PMC_PCER0_PID21_Pos                 21                                             /**< (PMC_PCER0) Peripheral Clock 21 Enable Position */
#define PMC_PCER0_PID21_Msk                 (_U_(0x1) << PMC_PCER0_PID21_Pos)              /**< (PMC_PCER0) Peripheral Clock 21 Enable Mask */
#define PMC_PCER0_PID21                     PMC_PCER0_PID21_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID21_Msk instead */
#define PMC_PCER0_PID22_Pos                 22                                             /**< (PMC_PCER0) Peripheral Clock 22 Enable Position */
#define PMC_PCER0_PID22_Msk                 (_U_(0x1) << PMC_PCER0_PID22_Pos)              /**< (PMC_PCER0) Peripheral Clock 22 Enable Mask */
#define PMC_PCER0_PID22                     PMC_PCER0_PID22_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID22_Msk instead */
#define PMC_PCER0_PID23_Pos                 23                                             /**< (PMC_PCER0) Peripheral Clock 23 Enable Position */
#define PMC_PCER0_PID23_Msk                 (_U_(0x1) << PMC_PCER0_PID23_Pos)              /**< (PMC_PCER0) Peripheral Clock 23 Enable Mask */
#define PMC_PCER0_PID23                     PMC_PCER0_PID23_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID23_Msk instead */
#define PMC_PCER0_PID24_Pos                 24                                             /**< (PMC_PCER0) Peripheral Clock 24 Enable Position */
#define PMC_PCER0_PID24_Msk                 (_U_(0x1) << PMC_PCER0_PID24_Pos)              /**< (PMC_PCER0) Peripheral Clock 24 Enable Mask */
#define PMC_PCER0_PID24                     PMC_PCER0_PID24_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID24_Msk instead */
#define PMC_PCER0_PID25_Pos                 25                                             /**< (PMC_PCER0) Peripheral Clock 25 Enable Position */
#define PMC_PCER0_PID25_Msk                 (_U_(0x1) << PMC_PCER0_PID25_Pos)              /**< (PMC_PCER0) Peripheral Clock 25 Enable Mask */
#define PMC_PCER0_PID25                     PMC_PCER0_PID25_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID25_Msk instead */
#define PMC_PCER0_PID26_Pos                 26                                             /**< (PMC_PCER0) Peripheral Clock 26 Enable Position */
#define PMC_PCER0_PID26_Msk                 (_U_(0x1) << PMC_PCER0_PID26_Pos)              /**< (PMC_PCER0) Peripheral Clock 26 Enable Mask */
#define PMC_PCER0_PID26                     PMC_PCER0_PID26_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID26_Msk instead */
#define PMC_PCER0_PID27_Pos                 27                                             /**< (PMC_PCER0) Peripheral Clock 27 Enable Position */
#define PMC_PCER0_PID27_Msk                 (_U_(0x1) << PMC_PCER0_PID27_Pos)              /**< (PMC_PCER0) Peripheral Clock 27 Enable Mask */
#define PMC_PCER0_PID27                     PMC_PCER0_PID27_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID27_Msk instead */
#define PMC_PCER0_PID28_Pos                 28                                             /**< (PMC_PCER0) Peripheral Clock 28 Enable Position */
#define PMC_PCER0_PID28_Msk                 (_U_(0x1) << PMC_PCER0_PID28_Pos)              /**< (PMC_PCER0) Peripheral Clock 28 Enable Mask */
#define PMC_PCER0_PID28                     PMC_PCER0_PID28_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID28_Msk instead */
#define PMC_PCER0_PID29_Pos                 29                                             /**< (PMC_PCER0) Peripheral Clock 29 Enable Position */
#define PMC_PCER0_PID29_Msk                 (_U_(0x1) << PMC_PCER0_PID29_Pos)              /**< (PMC_PCER0) Peripheral Clock 29 Enable Mask */
#define PMC_PCER0_PID29                     PMC_PCER0_PID29_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID29_Msk instead */
#define PMC_PCER0_PID30_Pos                 30                                             /**< (PMC_PCER0) Peripheral Clock 30 Enable Position */
#define PMC_PCER0_PID30_Msk                 (_U_(0x1) << PMC_PCER0_PID30_Pos)              /**< (PMC_PCER0) Peripheral Clock 30 Enable Mask */
#define PMC_PCER0_PID30                     PMC_PCER0_PID30_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID30_Msk instead */
#define PMC_PCER0_PID31_Pos                 31                                             /**< (PMC_PCER0) Peripheral Clock 31 Enable Position */
#define PMC_PCER0_PID31_Msk                 (_U_(0x1) << PMC_PCER0_PID31_Pos)              /**< (PMC_PCER0) Peripheral Clock 31 Enable Mask */
#define PMC_PCER0_PID31                     PMC_PCER0_PID31_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER0_PID31_Msk instead */
#define PMC_PCER0_MASK                      _U_(0xFFFFFFFC)                                /**< \deprecated (PMC_PCER0) Register MASK  (Use PMC_PCER0_Msk instead)  */
#define PMC_PCER0_Msk                       _U_(0xFFFFFFFC)                                /**< (PMC_PCER0) Register Mask  */

#define PMC_PCER0_PID_Pos                   2                                              /**< (PMC_PCER0 Position) Peripheral Clock 3x Enable */
#define PMC_PCER0_PID_Msk                   (_U_(0x3FFFFFFF) << PMC_PCER0_PID_Pos)         /**< (PMC_PCER0 Mask) PID */
#define PMC_PCER0_PID(value)                (PMC_PCER0_PID_Msk & ((value) << PMC_PCER0_PID_Pos))  

/* -------- PMC_PCDR0 : (PMC Offset: 0x14) (/W 32) Peripheral Clock Disable Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t PID2:1;                    /**< bit:      2  Peripheral Clock 2 Disable               */
    uint32_t PID3:1;                    /**< bit:      3  Peripheral Clock 3 Disable               */
    uint32_t PID4:1;                    /**< bit:      4  Peripheral Clock 4 Disable               */
    uint32_t PID5:1;                    /**< bit:      5  Peripheral Clock 5 Disable               */
    uint32_t PID6:1;                    /**< bit:      6  Peripheral Clock 6 Disable               */
    uint32_t PID7:1;                    /**< bit:      7  Peripheral Clock 7 Disable               */
    uint32_t PID8:1;                    /**< bit:      8  Peripheral Clock 8 Disable               */
    uint32_t PID9:1;                    /**< bit:      9  Peripheral Clock 9 Disable               */
    uint32_t PID10:1;                   /**< bit:     10  Peripheral Clock 10 Disable              */
    uint32_t PID11:1;                   /**< bit:     11  Peripheral Clock 11 Disable              */
    uint32_t PID12:1;                   /**< bit:     12  Peripheral Clock 12 Disable              */
    uint32_t PID13:1;                   /**< bit:     13  Peripheral Clock 13 Disable              */
    uint32_t PID14:1;                   /**< bit:     14  Peripheral Clock 14 Disable              */
    uint32_t PID15:1;                   /**< bit:     15  Peripheral Clock 15 Disable              */
    uint32_t PID16:1;                   /**< bit:     16  Peripheral Clock 16 Disable              */
    uint32_t PID17:1;                   /**< bit:     17  Peripheral Clock 17 Disable              */
    uint32_t PID18:1;                   /**< bit:     18  Peripheral Clock 18 Disable              */
    uint32_t PID19:1;                   /**< bit:     19  Peripheral Clock 19 Disable              */
    uint32_t PID20:1;                   /**< bit:     20  Peripheral Clock 20 Disable              */
    uint32_t PID21:1;                   /**< bit:     21  Peripheral Clock 21 Disable              */
    uint32_t PID22:1;                   /**< bit:     22  Peripheral Clock 22 Disable              */
    uint32_t PID23:1;                   /**< bit:     23  Peripheral Clock 23 Disable              */
    uint32_t PID24:1;                   /**< bit:     24  Peripheral Clock 24 Disable              */
    uint32_t PID25:1;                   /**< bit:     25  Peripheral Clock 25 Disable              */
    uint32_t PID26:1;                   /**< bit:     26  Peripheral Clock 26 Disable              */
    uint32_t PID27:1;                   /**< bit:     27  Peripheral Clock 27 Disable              */
    uint32_t PID28:1;                   /**< bit:     28  Peripheral Clock 28 Disable              */
    uint32_t PID29:1;                   /**< bit:     29  Peripheral Clock 29 Disable              */
    uint32_t PID30:1;                   /**< bit:     30  Peripheral Clock 30 Disable              */
    uint32_t PID31:1;                   /**< bit:     31  Peripheral Clock 31 Disable              */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t PID:30;                    /**< bit:  2..31  Peripheral Clock 3x Disable              */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_PCDR0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_PCDR0_OFFSET                    (0x14)                                        /**<  (PMC_PCDR0) Peripheral Clock Disable Register 0  Offset */

#define PMC_PCDR0_PID2_Pos                  2                                              /**< (PMC_PCDR0) Peripheral Clock 2 Disable Position */
#define PMC_PCDR0_PID2_Msk                  (_U_(0x1) << PMC_PCDR0_PID2_Pos)               /**< (PMC_PCDR0) Peripheral Clock 2 Disable Mask */
#define PMC_PCDR0_PID2                      PMC_PCDR0_PID2_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID2_Msk instead */
#define PMC_PCDR0_PID3_Pos                  3                                              /**< (PMC_PCDR0) Peripheral Clock 3 Disable Position */
#define PMC_PCDR0_PID3_Msk                  (_U_(0x1) << PMC_PCDR0_PID3_Pos)               /**< (PMC_PCDR0) Peripheral Clock 3 Disable Mask */
#define PMC_PCDR0_PID3                      PMC_PCDR0_PID3_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID3_Msk instead */
#define PMC_PCDR0_PID4_Pos                  4                                              /**< (PMC_PCDR0) Peripheral Clock 4 Disable Position */
#define PMC_PCDR0_PID4_Msk                  (_U_(0x1) << PMC_PCDR0_PID4_Pos)               /**< (PMC_PCDR0) Peripheral Clock 4 Disable Mask */
#define PMC_PCDR0_PID4                      PMC_PCDR0_PID4_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID4_Msk instead */
#define PMC_PCDR0_PID5_Pos                  5                                              /**< (PMC_PCDR0) Peripheral Clock 5 Disable Position */
#define PMC_PCDR0_PID5_Msk                  (_U_(0x1) << PMC_PCDR0_PID5_Pos)               /**< (PMC_PCDR0) Peripheral Clock 5 Disable Mask */
#define PMC_PCDR0_PID5                      PMC_PCDR0_PID5_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID5_Msk instead */
#define PMC_PCDR0_PID6_Pos                  6                                              /**< (PMC_PCDR0) Peripheral Clock 6 Disable Position */
#define PMC_PCDR0_PID6_Msk                  (_U_(0x1) << PMC_PCDR0_PID6_Pos)               /**< (PMC_PCDR0) Peripheral Clock 6 Disable Mask */
#define PMC_PCDR0_PID6                      PMC_PCDR0_PID6_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID6_Msk instead */
#define PMC_PCDR0_PID7_Pos                  7                                              /**< (PMC_PCDR0) Peripheral Clock 7 Disable Position */
#define PMC_PCDR0_PID7_Msk                  (_U_(0x1) << PMC_PCDR0_PID7_Pos)               /**< (PMC_PCDR0) Peripheral Clock 7 Disable Mask */
#define PMC_PCDR0_PID7                      PMC_PCDR0_PID7_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID7_Msk instead */
#define PMC_PCDR0_PID8_Pos                  8                                              /**< (PMC_PCDR0) Peripheral Clock 8 Disable Position */
#define PMC_PCDR0_PID8_Msk                  (_U_(0x1) << PMC_PCDR0_PID8_Pos)               /**< (PMC_PCDR0) Peripheral Clock 8 Disable Mask */
#define PMC_PCDR0_PID8                      PMC_PCDR0_PID8_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID8_Msk instead */
#define PMC_PCDR0_PID9_Pos                  9                                              /**< (PMC_PCDR0) Peripheral Clock 9 Disable Position */
#define PMC_PCDR0_PID9_Msk                  (_U_(0x1) << PMC_PCDR0_PID9_Pos)               /**< (PMC_PCDR0) Peripheral Clock 9 Disable Mask */
#define PMC_PCDR0_PID9                      PMC_PCDR0_PID9_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID9_Msk instead */
#define PMC_PCDR0_PID10_Pos                 10                                             /**< (PMC_PCDR0) Peripheral Clock 10 Disable Position */
#define PMC_PCDR0_PID10_Msk                 (_U_(0x1) << PMC_PCDR0_PID10_Pos)              /**< (PMC_PCDR0) Peripheral Clock 10 Disable Mask */
#define PMC_PCDR0_PID10                     PMC_PCDR0_PID10_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID10_Msk instead */
#define PMC_PCDR0_PID11_Pos                 11                                             /**< (PMC_PCDR0) Peripheral Clock 11 Disable Position */
#define PMC_PCDR0_PID11_Msk                 (_U_(0x1) << PMC_PCDR0_PID11_Pos)              /**< (PMC_PCDR0) Peripheral Clock 11 Disable Mask */
#define PMC_PCDR0_PID11                     PMC_PCDR0_PID11_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID11_Msk instead */
#define PMC_PCDR0_PID12_Pos                 12                                             /**< (PMC_PCDR0) Peripheral Clock 12 Disable Position */
#define PMC_PCDR0_PID12_Msk                 (_U_(0x1) << PMC_PCDR0_PID12_Pos)              /**< (PMC_PCDR0) Peripheral Clock 12 Disable Mask */
#define PMC_PCDR0_PID12                     PMC_PCDR0_PID12_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID12_Msk instead */
#define PMC_PCDR0_PID13_Pos                 13                                             /**< (PMC_PCDR0) Peripheral Clock 13 Disable Position */
#define PMC_PCDR0_PID13_Msk                 (_U_(0x1) << PMC_PCDR0_PID13_Pos)              /**< (PMC_PCDR0) Peripheral Clock 13 Disable Mask */
#define PMC_PCDR0_PID13                     PMC_PCDR0_PID13_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID13_Msk instead */
#define PMC_PCDR0_PID14_Pos                 14                                             /**< (PMC_PCDR0) Peripheral Clock 14 Disable Position */
#define PMC_PCDR0_PID14_Msk                 (_U_(0x1) << PMC_PCDR0_PID14_Pos)              /**< (PMC_PCDR0) Peripheral Clock 14 Disable Mask */
#define PMC_PCDR0_PID14                     PMC_PCDR0_PID14_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID14_Msk instead */
#define PMC_PCDR0_PID15_Pos                 15                                             /**< (PMC_PCDR0) Peripheral Clock 15 Disable Position */
#define PMC_PCDR0_PID15_Msk                 (_U_(0x1) << PMC_PCDR0_PID15_Pos)              /**< (PMC_PCDR0) Peripheral Clock 15 Disable Mask */
#define PMC_PCDR0_PID15                     PMC_PCDR0_PID15_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID15_Msk instead */
#define PMC_PCDR0_PID16_Pos                 16                                             /**< (PMC_PCDR0) Peripheral Clock 16 Disable Position */
#define PMC_PCDR0_PID16_Msk                 (_U_(0x1) << PMC_PCDR0_PID16_Pos)              /**< (PMC_PCDR0) Peripheral Clock 16 Disable Mask */
#define PMC_PCDR0_PID16                     PMC_PCDR0_PID16_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID16_Msk instead */
#define PMC_PCDR0_PID17_Pos                 17                                             /**< (PMC_PCDR0) Peripheral Clock 17 Disable Position */
#define PMC_PCDR0_PID17_Msk                 (_U_(0x1) << PMC_PCDR0_PID17_Pos)              /**< (PMC_PCDR0) Peripheral Clock 17 Disable Mask */
#define PMC_PCDR0_PID17                     PMC_PCDR0_PID17_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID17_Msk instead */
#define PMC_PCDR0_PID18_Pos                 18                                             /**< (PMC_PCDR0) Peripheral Clock 18 Disable Position */
#define PMC_PCDR0_PID18_Msk                 (_U_(0x1) << PMC_PCDR0_PID18_Pos)              /**< (PMC_PCDR0) Peripheral Clock 18 Disable Mask */
#define PMC_PCDR0_PID18                     PMC_PCDR0_PID18_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID18_Msk instead */
#define PMC_PCDR0_PID19_Pos                 19                                             /**< (PMC_PCDR0) Peripheral Clock 19 Disable Position */
#define PMC_PCDR0_PID19_Msk                 (_U_(0x1) << PMC_PCDR0_PID19_Pos)              /**< (PMC_PCDR0) Peripheral Clock 19 Disable Mask */
#define PMC_PCDR0_PID19                     PMC_PCDR0_PID19_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID19_Msk instead */
#define PMC_PCDR0_PID20_Pos                 20                                             /**< (PMC_PCDR0) Peripheral Clock 20 Disable Position */
#define PMC_PCDR0_PID20_Msk                 (_U_(0x1) << PMC_PCDR0_PID20_Pos)              /**< (PMC_PCDR0) Peripheral Clock 20 Disable Mask */
#define PMC_PCDR0_PID20                     PMC_PCDR0_PID20_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID20_Msk instead */
#define PMC_PCDR0_PID21_Pos                 21                                             /**< (PMC_PCDR0) Peripheral Clock 21 Disable Position */
#define PMC_PCDR0_PID21_Msk                 (_U_(0x1) << PMC_PCDR0_PID21_Pos)              /**< (PMC_PCDR0) Peripheral Clock 21 Disable Mask */
#define PMC_PCDR0_PID21                     PMC_PCDR0_PID21_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID21_Msk instead */
#define PMC_PCDR0_PID22_Pos                 22                                             /**< (PMC_PCDR0) Peripheral Clock 22 Disable Position */
#define PMC_PCDR0_PID22_Msk                 (_U_(0x1) << PMC_PCDR0_PID22_Pos)              /**< (PMC_PCDR0) Peripheral Clock 22 Disable Mask */
#define PMC_PCDR0_PID22                     PMC_PCDR0_PID22_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID22_Msk instead */
#define PMC_PCDR0_PID23_Pos                 23                                             /**< (PMC_PCDR0) Peripheral Clock 23 Disable Position */
#define PMC_PCDR0_PID23_Msk                 (_U_(0x1) << PMC_PCDR0_PID23_Pos)              /**< (PMC_PCDR0) Peripheral Clock 23 Disable Mask */
#define PMC_PCDR0_PID23                     PMC_PCDR0_PID23_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID23_Msk instead */
#define PMC_PCDR0_PID24_Pos                 24                                             /**< (PMC_PCDR0) Peripheral Clock 24 Disable Position */
#define PMC_PCDR0_PID24_Msk                 (_U_(0x1) << PMC_PCDR0_PID24_Pos)              /**< (PMC_PCDR0) Peripheral Clock 24 Disable Mask */
#define PMC_PCDR0_PID24                     PMC_PCDR0_PID24_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID24_Msk instead */
#define PMC_PCDR0_PID25_Pos                 25                                             /**< (PMC_PCDR0) Peripheral Clock 25 Disable Position */
#define PMC_PCDR0_PID25_Msk                 (_U_(0x1) << PMC_PCDR0_PID25_Pos)              /**< (PMC_PCDR0) Peripheral Clock 25 Disable Mask */
#define PMC_PCDR0_PID25                     PMC_PCDR0_PID25_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID25_Msk instead */
#define PMC_PCDR0_PID26_Pos                 26                                             /**< (PMC_PCDR0) Peripheral Clock 26 Disable Position */
#define PMC_PCDR0_PID26_Msk                 (_U_(0x1) << PMC_PCDR0_PID26_Pos)              /**< (PMC_PCDR0) Peripheral Clock 26 Disable Mask */
#define PMC_PCDR0_PID26                     PMC_PCDR0_PID26_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID26_Msk instead */
#define PMC_PCDR0_PID27_Pos                 27                                             /**< (PMC_PCDR0) Peripheral Clock 27 Disable Position */
#define PMC_PCDR0_PID27_Msk                 (_U_(0x1) << PMC_PCDR0_PID27_Pos)              /**< (PMC_PCDR0) Peripheral Clock 27 Disable Mask */
#define PMC_PCDR0_PID27                     PMC_PCDR0_PID27_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID27_Msk instead */
#define PMC_PCDR0_PID28_Pos                 28                                             /**< (PMC_PCDR0) Peripheral Clock 28 Disable Position */
#define PMC_PCDR0_PID28_Msk                 (_U_(0x1) << PMC_PCDR0_PID28_Pos)              /**< (PMC_PCDR0) Peripheral Clock 28 Disable Mask */
#define PMC_PCDR0_PID28                     PMC_PCDR0_PID28_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID28_Msk instead */
#define PMC_PCDR0_PID29_Pos                 29                                             /**< (PMC_PCDR0) Peripheral Clock 29 Disable Position */
#define PMC_PCDR0_PID29_Msk                 (_U_(0x1) << PMC_PCDR0_PID29_Pos)              /**< (PMC_PCDR0) Peripheral Clock 29 Disable Mask */
#define PMC_PCDR0_PID29                     PMC_PCDR0_PID29_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID29_Msk instead */
#define PMC_PCDR0_PID30_Pos                 30                                             /**< (PMC_PCDR0) Peripheral Clock 30 Disable Position */
#define PMC_PCDR0_PID30_Msk                 (_U_(0x1) << PMC_PCDR0_PID30_Pos)              /**< (PMC_PCDR0) Peripheral Clock 30 Disable Mask */
#define PMC_PCDR0_PID30                     PMC_PCDR0_PID30_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID30_Msk instead */
#define PMC_PCDR0_PID31_Pos                 31                                             /**< (PMC_PCDR0) Peripheral Clock 31 Disable Position */
#define PMC_PCDR0_PID31_Msk                 (_U_(0x1) << PMC_PCDR0_PID31_Pos)              /**< (PMC_PCDR0) Peripheral Clock 31 Disable Mask */
#define PMC_PCDR0_PID31                     PMC_PCDR0_PID31_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR0_PID31_Msk instead */
#define PMC_PCDR0_MASK                      _U_(0xFFFFFFFC)                                /**< \deprecated (PMC_PCDR0) Register MASK  (Use PMC_PCDR0_Msk instead)  */
#define PMC_PCDR0_Msk                       _U_(0xFFFFFFFC)                                /**< (PMC_PCDR0) Register Mask  */

#define PMC_PCDR0_PID_Pos                   2                                              /**< (PMC_PCDR0 Position) Peripheral Clock 3x Disable */
#define PMC_PCDR0_PID_Msk                   (_U_(0x3FFFFFFF) << PMC_PCDR0_PID_Pos)         /**< (PMC_PCDR0 Mask) PID */
#define PMC_PCDR0_PID(value)                (PMC_PCDR0_PID_Msk & ((value) << PMC_PCDR0_PID_Pos))  

/* -------- PMC_PCSR0 : (PMC Offset: 0x18) (R/ 32) Peripheral Clock Status Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t PID2:1;                    /**< bit:      2  Peripheral Clock 2 Status                */
    uint32_t PID3:1;                    /**< bit:      3  Peripheral Clock 3 Status                */
    uint32_t PID4:1;                    /**< bit:      4  Peripheral Clock 4 Status                */
    uint32_t PID5:1;                    /**< bit:      5  Peripheral Clock 5 Status                */
    uint32_t PID6:1;                    /**< bit:      6  Peripheral Clock 6 Status                */
    uint32_t PID7:1;                    /**< bit:      7  Peripheral Clock 7 Status                */
    uint32_t PID8:1;                    /**< bit:      8  Peripheral Clock 8 Status                */
    uint32_t PID9:1;                    /**< bit:      9  Peripheral Clock 9 Status                */
    uint32_t PID10:1;                   /**< bit:     10  Peripheral Clock 10 Status               */
    uint32_t PID11:1;                   /**< bit:     11  Peripheral Clock 11 Status               */
    uint32_t PID12:1;                   /**< bit:     12  Peripheral Clock 12 Status               */
    uint32_t PID13:1;                   /**< bit:     13  Peripheral Clock 13 Status               */
    uint32_t PID14:1;                   /**< bit:     14  Peripheral Clock 14 Status               */
    uint32_t PID15:1;                   /**< bit:     15  Peripheral Clock 15 Status               */
    uint32_t PID16:1;                   /**< bit:     16  Peripheral Clock 16 Status               */
    uint32_t PID17:1;                   /**< bit:     17  Peripheral Clock 17 Status               */
    uint32_t PID18:1;                   /**< bit:     18  Peripheral Clock 18 Status               */
    uint32_t PID19:1;                   /**< bit:     19  Peripheral Clock 19 Status               */
    uint32_t PID20:1;                   /**< bit:     20  Peripheral Clock 20 Status               */
    uint32_t PID21:1;                   /**< bit:     21  Peripheral Clock 21 Status               */
    uint32_t PID22:1;                   /**< bit:     22  Peripheral Clock 22 Status               */
    uint32_t PID23:1;                   /**< bit:     23  Peripheral Clock 23 Status               */
    uint32_t PID24:1;                   /**< bit:     24  Peripheral Clock 24 Status               */
    uint32_t PID25:1;                   /**< bit:     25  Peripheral Clock 25 Status               */
    uint32_t PID26:1;                   /**< bit:     26  Peripheral Clock 26 Status               */
    uint32_t PID27:1;                   /**< bit:     27  Peripheral Clock 27 Status               */
    uint32_t PID28:1;                   /**< bit:     28  Peripheral Clock 28 Status               */
    uint32_t PID29:1;                   /**< bit:     29  Peripheral Clock 29 Status               */
    uint32_t PID30:1;                   /**< bit:     30  Peripheral Clock 30 Status               */
    uint32_t PID31:1;                   /**< bit:     31  Peripheral Clock 31 Status               */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t PID:30;                    /**< bit:  2..31  Peripheral Clock 3x Status               */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_PCSR0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_PCSR0_OFFSET                    (0x18)                                        /**<  (PMC_PCSR0) Peripheral Clock Status Register 0  Offset */

#define PMC_PCSR0_PID2_Pos                  2                                              /**< (PMC_PCSR0) Peripheral Clock 2 Status Position */
#define PMC_PCSR0_PID2_Msk                  (_U_(0x1) << PMC_PCSR0_PID2_Pos)               /**< (PMC_PCSR0) Peripheral Clock 2 Status Mask */
#define PMC_PCSR0_PID2                      PMC_PCSR0_PID2_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID2_Msk instead */
#define PMC_PCSR0_PID3_Pos                  3                                              /**< (PMC_PCSR0) Peripheral Clock 3 Status Position */
#define PMC_PCSR0_PID3_Msk                  (_U_(0x1) << PMC_PCSR0_PID3_Pos)               /**< (PMC_PCSR0) Peripheral Clock 3 Status Mask */
#define PMC_PCSR0_PID3                      PMC_PCSR0_PID3_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID3_Msk instead */
#define PMC_PCSR0_PID4_Pos                  4                                              /**< (PMC_PCSR0) Peripheral Clock 4 Status Position */
#define PMC_PCSR0_PID4_Msk                  (_U_(0x1) << PMC_PCSR0_PID4_Pos)               /**< (PMC_PCSR0) Peripheral Clock 4 Status Mask */
#define PMC_PCSR0_PID4                      PMC_PCSR0_PID4_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID4_Msk instead */
#define PMC_PCSR0_PID5_Pos                  5                                              /**< (PMC_PCSR0) Peripheral Clock 5 Status Position */
#define PMC_PCSR0_PID5_Msk                  (_U_(0x1) << PMC_PCSR0_PID5_Pos)               /**< (PMC_PCSR0) Peripheral Clock 5 Status Mask */
#define PMC_PCSR0_PID5                      PMC_PCSR0_PID5_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID5_Msk instead */
#define PMC_PCSR0_PID6_Pos                  6                                              /**< (PMC_PCSR0) Peripheral Clock 6 Status Position */
#define PMC_PCSR0_PID6_Msk                  (_U_(0x1) << PMC_PCSR0_PID6_Pos)               /**< (PMC_PCSR0) Peripheral Clock 6 Status Mask */
#define PMC_PCSR0_PID6                      PMC_PCSR0_PID6_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID6_Msk instead */
#define PMC_PCSR0_PID7_Pos                  7                                              /**< (PMC_PCSR0) Peripheral Clock 7 Status Position */
#define PMC_PCSR0_PID7_Msk                  (_U_(0x1) << PMC_PCSR0_PID7_Pos)               /**< (PMC_PCSR0) Peripheral Clock 7 Status Mask */
#define PMC_PCSR0_PID7                      PMC_PCSR0_PID7_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID7_Msk instead */
#define PMC_PCSR0_PID8_Pos                  8                                              /**< (PMC_PCSR0) Peripheral Clock 8 Status Position */
#define PMC_PCSR0_PID8_Msk                  (_U_(0x1) << PMC_PCSR0_PID8_Pos)               /**< (PMC_PCSR0) Peripheral Clock 8 Status Mask */
#define PMC_PCSR0_PID8                      PMC_PCSR0_PID8_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID8_Msk instead */
#define PMC_PCSR0_PID9_Pos                  9                                              /**< (PMC_PCSR0) Peripheral Clock 9 Status Position */
#define PMC_PCSR0_PID9_Msk                  (_U_(0x1) << PMC_PCSR0_PID9_Pos)               /**< (PMC_PCSR0) Peripheral Clock 9 Status Mask */
#define PMC_PCSR0_PID9                      PMC_PCSR0_PID9_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID9_Msk instead */
#define PMC_PCSR0_PID10_Pos                 10                                             /**< (PMC_PCSR0) Peripheral Clock 10 Status Position */
#define PMC_PCSR0_PID10_Msk                 (_U_(0x1) << PMC_PCSR0_PID10_Pos)              /**< (PMC_PCSR0) Peripheral Clock 10 Status Mask */
#define PMC_PCSR0_PID10                     PMC_PCSR0_PID10_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID10_Msk instead */
#define PMC_PCSR0_PID11_Pos                 11                                             /**< (PMC_PCSR0) Peripheral Clock 11 Status Position */
#define PMC_PCSR0_PID11_Msk                 (_U_(0x1) << PMC_PCSR0_PID11_Pos)              /**< (PMC_PCSR0) Peripheral Clock 11 Status Mask */
#define PMC_PCSR0_PID11                     PMC_PCSR0_PID11_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID11_Msk instead */
#define PMC_PCSR0_PID12_Pos                 12                                             /**< (PMC_PCSR0) Peripheral Clock 12 Status Position */
#define PMC_PCSR0_PID12_Msk                 (_U_(0x1) << PMC_PCSR0_PID12_Pos)              /**< (PMC_PCSR0) Peripheral Clock 12 Status Mask */
#define PMC_PCSR0_PID12                     PMC_PCSR0_PID12_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID12_Msk instead */
#define PMC_PCSR0_PID13_Pos                 13                                             /**< (PMC_PCSR0) Peripheral Clock 13 Status Position */
#define PMC_PCSR0_PID13_Msk                 (_U_(0x1) << PMC_PCSR0_PID13_Pos)              /**< (PMC_PCSR0) Peripheral Clock 13 Status Mask */
#define PMC_PCSR0_PID13                     PMC_PCSR0_PID13_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID13_Msk instead */
#define PMC_PCSR0_PID14_Pos                 14                                             /**< (PMC_PCSR0) Peripheral Clock 14 Status Position */
#define PMC_PCSR0_PID14_Msk                 (_U_(0x1) << PMC_PCSR0_PID14_Pos)              /**< (PMC_PCSR0) Peripheral Clock 14 Status Mask */
#define PMC_PCSR0_PID14                     PMC_PCSR0_PID14_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID14_Msk instead */
#define PMC_PCSR0_PID15_Pos                 15                                             /**< (PMC_PCSR0) Peripheral Clock 15 Status Position */
#define PMC_PCSR0_PID15_Msk                 (_U_(0x1) << PMC_PCSR0_PID15_Pos)              /**< (PMC_PCSR0) Peripheral Clock 15 Status Mask */
#define PMC_PCSR0_PID15                     PMC_PCSR0_PID15_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID15_Msk instead */
#define PMC_PCSR0_PID16_Pos                 16                                             /**< (PMC_PCSR0) Peripheral Clock 16 Status Position */
#define PMC_PCSR0_PID16_Msk                 (_U_(0x1) << PMC_PCSR0_PID16_Pos)              /**< (PMC_PCSR0) Peripheral Clock 16 Status Mask */
#define PMC_PCSR0_PID16                     PMC_PCSR0_PID16_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID16_Msk instead */
#define PMC_PCSR0_PID17_Pos                 17                                             /**< (PMC_PCSR0) Peripheral Clock 17 Status Position */
#define PMC_PCSR0_PID17_Msk                 (_U_(0x1) << PMC_PCSR0_PID17_Pos)              /**< (PMC_PCSR0) Peripheral Clock 17 Status Mask */
#define PMC_PCSR0_PID17                     PMC_PCSR0_PID17_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID17_Msk instead */
#define PMC_PCSR0_PID18_Pos                 18                                             /**< (PMC_PCSR0) Peripheral Clock 18 Status Position */
#define PMC_PCSR0_PID18_Msk                 (_U_(0x1) << PMC_PCSR0_PID18_Pos)              /**< (PMC_PCSR0) Peripheral Clock 18 Status Mask */
#define PMC_PCSR0_PID18                     PMC_PCSR0_PID18_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID18_Msk instead */
#define PMC_PCSR0_PID19_Pos                 19                                             /**< (PMC_PCSR0) Peripheral Clock 19 Status Position */
#define PMC_PCSR0_PID19_Msk                 (_U_(0x1) << PMC_PCSR0_PID19_Pos)              /**< (PMC_PCSR0) Peripheral Clock 19 Status Mask */
#define PMC_PCSR0_PID19                     PMC_PCSR0_PID19_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID19_Msk instead */
#define PMC_PCSR0_PID20_Pos                 20                                             /**< (PMC_PCSR0) Peripheral Clock 20 Status Position */
#define PMC_PCSR0_PID20_Msk                 (_U_(0x1) << PMC_PCSR0_PID20_Pos)              /**< (PMC_PCSR0) Peripheral Clock 20 Status Mask */
#define PMC_PCSR0_PID20                     PMC_PCSR0_PID20_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID20_Msk instead */
#define PMC_PCSR0_PID21_Pos                 21                                             /**< (PMC_PCSR0) Peripheral Clock 21 Status Position */
#define PMC_PCSR0_PID21_Msk                 (_U_(0x1) << PMC_PCSR0_PID21_Pos)              /**< (PMC_PCSR0) Peripheral Clock 21 Status Mask */
#define PMC_PCSR0_PID21                     PMC_PCSR0_PID21_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID21_Msk instead */
#define PMC_PCSR0_PID22_Pos                 22                                             /**< (PMC_PCSR0) Peripheral Clock 22 Status Position */
#define PMC_PCSR0_PID22_Msk                 (_U_(0x1) << PMC_PCSR0_PID22_Pos)              /**< (PMC_PCSR0) Peripheral Clock 22 Status Mask */
#define PMC_PCSR0_PID22                     PMC_PCSR0_PID22_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID22_Msk instead */
#define PMC_PCSR0_PID23_Pos                 23                                             /**< (PMC_PCSR0) Peripheral Clock 23 Status Position */
#define PMC_PCSR0_PID23_Msk                 (_U_(0x1) << PMC_PCSR0_PID23_Pos)              /**< (PMC_PCSR0) Peripheral Clock 23 Status Mask */
#define PMC_PCSR0_PID23                     PMC_PCSR0_PID23_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID23_Msk instead */
#define PMC_PCSR0_PID24_Pos                 24                                             /**< (PMC_PCSR0) Peripheral Clock 24 Status Position */
#define PMC_PCSR0_PID24_Msk                 (_U_(0x1) << PMC_PCSR0_PID24_Pos)              /**< (PMC_PCSR0) Peripheral Clock 24 Status Mask */
#define PMC_PCSR0_PID24                     PMC_PCSR0_PID24_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID24_Msk instead */
#define PMC_PCSR0_PID25_Pos                 25                                             /**< (PMC_PCSR0) Peripheral Clock 25 Status Position */
#define PMC_PCSR0_PID25_Msk                 (_U_(0x1) << PMC_PCSR0_PID25_Pos)              /**< (PMC_PCSR0) Peripheral Clock 25 Status Mask */
#define PMC_PCSR0_PID25                     PMC_PCSR0_PID25_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID25_Msk instead */
#define PMC_PCSR0_PID26_Pos                 26                                             /**< (PMC_PCSR0) Peripheral Clock 26 Status Position */
#define PMC_PCSR0_PID26_Msk                 (_U_(0x1) << PMC_PCSR0_PID26_Pos)              /**< (PMC_PCSR0) Peripheral Clock 26 Status Mask */
#define PMC_PCSR0_PID26                     PMC_PCSR0_PID26_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID26_Msk instead */
#define PMC_PCSR0_PID27_Pos                 27                                             /**< (PMC_PCSR0) Peripheral Clock 27 Status Position */
#define PMC_PCSR0_PID27_Msk                 (_U_(0x1) << PMC_PCSR0_PID27_Pos)              /**< (PMC_PCSR0) Peripheral Clock 27 Status Mask */
#define PMC_PCSR0_PID27                     PMC_PCSR0_PID27_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID27_Msk instead */
#define PMC_PCSR0_PID28_Pos                 28                                             /**< (PMC_PCSR0) Peripheral Clock 28 Status Position */
#define PMC_PCSR0_PID28_Msk                 (_U_(0x1) << PMC_PCSR0_PID28_Pos)              /**< (PMC_PCSR0) Peripheral Clock 28 Status Mask */
#define PMC_PCSR0_PID28                     PMC_PCSR0_PID28_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID28_Msk instead */
#define PMC_PCSR0_PID29_Pos                 29                                             /**< (PMC_PCSR0) Peripheral Clock 29 Status Position */
#define PMC_PCSR0_PID29_Msk                 (_U_(0x1) << PMC_PCSR0_PID29_Pos)              /**< (PMC_PCSR0) Peripheral Clock 29 Status Mask */
#define PMC_PCSR0_PID29                     PMC_PCSR0_PID29_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID29_Msk instead */
#define PMC_PCSR0_PID30_Pos                 30                                             /**< (PMC_PCSR0) Peripheral Clock 30 Status Position */
#define PMC_PCSR0_PID30_Msk                 (_U_(0x1) << PMC_PCSR0_PID30_Pos)              /**< (PMC_PCSR0) Peripheral Clock 30 Status Mask */
#define PMC_PCSR0_PID30                     PMC_PCSR0_PID30_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID30_Msk instead */
#define PMC_PCSR0_PID31_Pos                 31                                             /**< (PMC_PCSR0) Peripheral Clock 31 Status Position */
#define PMC_PCSR0_PID31_Msk                 (_U_(0x1) << PMC_PCSR0_PID31_Pos)              /**< (PMC_PCSR0) Peripheral Clock 31 Status Mask */
#define PMC_PCSR0_PID31                     PMC_PCSR0_PID31_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR0_PID31_Msk instead */
#define PMC_PCSR0_MASK                      _U_(0xFFFFFFFC)                                /**< \deprecated (PMC_PCSR0) Register MASK  (Use PMC_PCSR0_Msk instead)  */
#define PMC_PCSR0_Msk                       _U_(0xFFFFFFFC)                                /**< (PMC_PCSR0) Register Mask  */

#define PMC_PCSR0_PID_Pos                   2                                              /**< (PMC_PCSR0 Position) Peripheral Clock 3x Status */
#define PMC_PCSR0_PID_Msk                   (_U_(0x3FFFFFFF) << PMC_PCSR0_PID_Pos)         /**< (PMC_PCSR0 Mask) PID */
#define PMC_PCSR0_PID(value)                (PMC_PCSR0_PID_Msk & ((value) << PMC_PCSR0_PID_Pos))  

/* -------- CKGR_UCKR : (PMC Offset: 0x1c) (R/W 32) UTMI Clock Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t UPLLEN:1;                  /**< bit:     16  UTMI PLL Enable                          */
    uint32_t :3;                        /**< bit: 17..19  Reserved */
    uint32_t UPLLCOUNT:4;               /**< bit: 20..23  UTMI PLL Startup Time                    */
    uint32_t BIASEN:1;                  /**< bit:     24  UTMI BIAS Enable                         */
    uint32_t :3;                        /**< bit: 25..27  Reserved */
    uint32_t BIASCOUNT:4;               /**< bit: 28..31  UTMI BIAS Startup Time                   */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} CKGR_UCKR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CKGR_UCKR_OFFSET                    (0x1C)                                        /**<  (CKGR_UCKR) UTMI Clock Register  Offset */

#define CKGR_UCKR_UPLLEN_Pos                16                                             /**< (CKGR_UCKR) UTMI PLL Enable Position */
#define CKGR_UCKR_UPLLEN_Msk                (_U_(0x1) << CKGR_UCKR_UPLLEN_Pos)             /**< (CKGR_UCKR) UTMI PLL Enable Mask */
#define CKGR_UCKR_UPLLEN                    CKGR_UCKR_UPLLEN_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_UCKR_UPLLEN_Msk instead */
#define CKGR_UCKR_UPLLCOUNT_Pos             20                                             /**< (CKGR_UCKR) UTMI PLL Startup Time Position */
#define CKGR_UCKR_UPLLCOUNT_Msk             (_U_(0xF) << CKGR_UCKR_UPLLCOUNT_Pos)          /**< (CKGR_UCKR) UTMI PLL Startup Time Mask */
#define CKGR_UCKR_UPLLCOUNT(value)          (CKGR_UCKR_UPLLCOUNT_Msk & ((value) << CKGR_UCKR_UPLLCOUNT_Pos))
#define CKGR_UCKR_BIASEN_Pos                24                                             /**< (CKGR_UCKR) UTMI BIAS Enable Position */
#define CKGR_UCKR_BIASEN_Msk                (_U_(0x1) << CKGR_UCKR_BIASEN_Pos)             /**< (CKGR_UCKR) UTMI BIAS Enable Mask */
#define CKGR_UCKR_BIASEN                    CKGR_UCKR_BIASEN_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_UCKR_BIASEN_Msk instead */
#define CKGR_UCKR_BIASCOUNT_Pos             28                                             /**< (CKGR_UCKR) UTMI BIAS Startup Time Position */
#define CKGR_UCKR_BIASCOUNT_Msk             (_U_(0xF) << CKGR_UCKR_BIASCOUNT_Pos)          /**< (CKGR_UCKR) UTMI BIAS Startup Time Mask */
#define CKGR_UCKR_BIASCOUNT(value)          (CKGR_UCKR_BIASCOUNT_Msk & ((value) << CKGR_UCKR_BIASCOUNT_Pos))
#define CKGR_UCKR_MASK                      _U_(0xF1F10000)                                /**< \deprecated (CKGR_UCKR) Register MASK  (Use CKGR_UCKR_Msk instead)  */
#define CKGR_UCKR_Msk                       _U_(0xF1F10000)                                /**< (CKGR_UCKR) Register Mask  */


/* -------- CKGR_MOR : (PMC Offset: 0x20) (R/W 32) Main Oscillator Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MOSCXTEN:1;                /**< bit:      0  8 to 24 MHz Crystal Oscillator Enable    */
    uint32_t MOSCXTBY:1;                /**< bit:      1  8 to 24 MHz Crystal Oscillator Bypass    */
    uint32_t WAITMODE:1;                /**< bit:      2  Wait Mode Command (Write-only)           */
    uint32_t MOSCRCEN:1;                /**< bit:      3  12 MHz RC Oscillator Enable              */
    uint32_t :1;                        /**< bit:      4  Reserved */
    uint32_t ONE:1;                     /**< bit:      5  Must Be Set to 1                         */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t MOSCXTST:8;                /**< bit:  8..15  8 to 24 MHz Crystal Oscillator Startup Time */
    uint32_t KEY:8;                     /**< bit: 16..23  Password                                 */
    uint32_t MOSCSEL:1;                 /**< bit:     24  Main Clock Oscillator Selection          */
    uint32_t CFDEN:1;                   /**< bit:     25  Clock Failure Detector Enable            */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} CKGR_MOR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CKGR_MOR_OFFSET                     (0x20)                                        /**<  (CKGR_MOR) Main Oscillator Register  Offset */

#define CKGR_MOR_MOSCXTEN_Pos               0                                              /**< (CKGR_MOR) 8 to 24 MHz Crystal Oscillator Enable Position */
#define CKGR_MOR_MOSCXTEN_Msk               (_U_(0x1) << CKGR_MOR_MOSCXTEN_Pos)            /**< (CKGR_MOR) 8 to 24 MHz Crystal Oscillator Enable Mask */
#define CKGR_MOR_MOSCXTEN                   CKGR_MOR_MOSCXTEN_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_MOR_MOSCXTEN_Msk instead */
#define CKGR_MOR_MOSCXTBY_Pos               1                                              /**< (CKGR_MOR) 8 to 24 MHz Crystal Oscillator Bypass Position */
#define CKGR_MOR_MOSCXTBY_Msk               (_U_(0x1) << CKGR_MOR_MOSCXTBY_Pos)            /**< (CKGR_MOR) 8 to 24 MHz Crystal Oscillator Bypass Mask */
#define CKGR_MOR_MOSCXTBY                   CKGR_MOR_MOSCXTBY_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_MOR_MOSCXTBY_Msk instead */
#define CKGR_MOR_WAITMODE_Pos               2                                              /**< (CKGR_MOR) Wait Mode Command (Write-only) Position */
#define CKGR_MOR_WAITMODE_Msk               (_U_(0x1) << CKGR_MOR_WAITMODE_Pos)            /**< (CKGR_MOR) Wait Mode Command (Write-only) Mask */
#define CKGR_MOR_WAITMODE                   CKGR_MOR_WAITMODE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_MOR_WAITMODE_Msk instead */
#define CKGR_MOR_MOSCRCEN_Pos               3                                              /**< (CKGR_MOR) 12 MHz RC Oscillator Enable Position */
#define CKGR_MOR_MOSCRCEN_Msk               (_U_(0x1) << CKGR_MOR_MOSCRCEN_Pos)            /**< (CKGR_MOR) 12 MHz RC Oscillator Enable Mask */
#define CKGR_MOR_MOSCRCEN                   CKGR_MOR_MOSCRCEN_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_MOR_MOSCRCEN_Msk instead */
#define CKGR_MOR_ONE_Pos                    5                                              /**< (CKGR_MOR) Must Be Set to 1 Position */
#define CKGR_MOR_ONE_Msk                    (_U_(0x1) << CKGR_MOR_ONE_Pos)                 /**< (CKGR_MOR) Must Be Set to 1 Mask */
#define CKGR_MOR_ONE                        CKGR_MOR_ONE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_MOR_ONE_Msk instead */
#define CKGR_MOR_MOSCXTST_Pos               8                                              /**< (CKGR_MOR) 8 to 24 MHz Crystal Oscillator Startup Time Position */
#define CKGR_MOR_MOSCXTST_Msk               (_U_(0xFF) << CKGR_MOR_MOSCXTST_Pos)           /**< (CKGR_MOR) 8 to 24 MHz Crystal Oscillator Startup Time Mask */
#define CKGR_MOR_MOSCXTST(value)            (CKGR_MOR_MOSCXTST_Msk & ((value) << CKGR_MOR_MOSCXTST_Pos))
#define CKGR_MOR_KEY_Pos                    16                                             /**< (CKGR_MOR) Password Position */
#define CKGR_MOR_KEY_Msk                    (_U_(0xFF) << CKGR_MOR_KEY_Pos)                /**< (CKGR_MOR) Password Mask */
#define CKGR_MOR_KEY(value)                 (CKGR_MOR_KEY_Msk & ((value) << CKGR_MOR_KEY_Pos))
#define   CKGR_MOR_KEY_PASSWD_Val           _U_(0x37)                                      /**< (CKGR_MOR) Writing any other value in this field aborts the write operation.  */
#define CKGR_MOR_KEY_PASSWD                 (CKGR_MOR_KEY_PASSWD_Val << CKGR_MOR_KEY_Pos)  /**< (CKGR_MOR) Writing any other value in this field aborts the write operation. Position  */
#define CKGR_MOR_MOSCSEL_Pos                24                                             /**< (CKGR_MOR) Main Clock Oscillator Selection Position */
#define CKGR_MOR_MOSCSEL_Msk                (_U_(0x1) << CKGR_MOR_MOSCSEL_Pos)             /**< (CKGR_MOR) Main Clock Oscillator Selection Mask */
#define CKGR_MOR_MOSCSEL                    CKGR_MOR_MOSCSEL_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_MOR_MOSCSEL_Msk instead */
#define CKGR_MOR_CFDEN_Pos                  25                                             /**< (CKGR_MOR) Clock Failure Detector Enable Position */
#define CKGR_MOR_CFDEN_Msk                  (_U_(0x1) << CKGR_MOR_CFDEN_Pos)               /**< (CKGR_MOR) Clock Failure Detector Enable Mask */
#define CKGR_MOR_CFDEN                      CKGR_MOR_CFDEN_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_MOR_CFDEN_Msk instead */
#define CKGR_MOR_MASK                       _U_(0x3FFFF2F)                                 /**< \deprecated (CKGR_MOR) Register MASK  (Use CKGR_MOR_Msk instead)  */
#define CKGR_MOR_Msk                        _U_(0x3FFFF2F)                                 /**< (CKGR_MOR) Register Mask  */


/* -------- CKGR_MCFR : (PMC Offset: 0x24) (R/W 32) Main Clock Frequency Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MAINF:16;                  /**< bit:  0..15  Main Clock Frequency                     */
    uint32_t MAINFRDY:1;                /**< bit:     16  Main Clock Frequency Measure Ready       */
    uint32_t :3;                        /**< bit: 17..19  Reserved */
    uint32_t RCMEAS:1;                  /**< bit:     20  RC Oscillator Frequency Measure (write-only) */
    uint32_t :3;                        /**< bit: 21..23  Reserved */
    uint32_t CCSS:1;                    /**< bit:     24  Counter Clock Source Selection           */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} CKGR_MCFR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CKGR_MCFR_OFFSET                    (0x24)                                        /**<  (CKGR_MCFR) Main Clock Frequency Register  Offset */

#define CKGR_MCFR_MAINF_Pos                 0                                              /**< (CKGR_MCFR) Main Clock Frequency Position */
#define CKGR_MCFR_MAINF_Msk                 (_U_(0xFFFF) << CKGR_MCFR_MAINF_Pos)           /**< (CKGR_MCFR) Main Clock Frequency Mask */
#define CKGR_MCFR_MAINF(value)              (CKGR_MCFR_MAINF_Msk & ((value) << CKGR_MCFR_MAINF_Pos))
#define CKGR_MCFR_MAINFRDY_Pos              16                                             /**< (CKGR_MCFR) Main Clock Frequency Measure Ready Position */
#define CKGR_MCFR_MAINFRDY_Msk              (_U_(0x1) << CKGR_MCFR_MAINFRDY_Pos)           /**< (CKGR_MCFR) Main Clock Frequency Measure Ready Mask */
#define CKGR_MCFR_MAINFRDY                  CKGR_MCFR_MAINFRDY_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_MCFR_MAINFRDY_Msk instead */
#define CKGR_MCFR_RCMEAS_Pos                20                                             /**< (CKGR_MCFR) RC Oscillator Frequency Measure (write-only) Position */
#define CKGR_MCFR_RCMEAS_Msk                (_U_(0x1) << CKGR_MCFR_RCMEAS_Pos)             /**< (CKGR_MCFR) RC Oscillator Frequency Measure (write-only) Mask */
#define CKGR_MCFR_RCMEAS                    CKGR_MCFR_RCMEAS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_MCFR_RCMEAS_Msk instead */
#define CKGR_MCFR_CCSS_Pos                  24                                             /**< (CKGR_MCFR) Counter Clock Source Selection Position */
#define CKGR_MCFR_CCSS_Msk                  (_U_(0x1) << CKGR_MCFR_CCSS_Pos)               /**< (CKGR_MCFR) Counter Clock Source Selection Mask */
#define CKGR_MCFR_CCSS                      CKGR_MCFR_CCSS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_MCFR_CCSS_Msk instead */
#define CKGR_MCFR_MASK                      _U_(0x111FFFF)                                 /**< \deprecated (CKGR_MCFR) Register MASK  (Use CKGR_MCFR_Msk instead)  */
#define CKGR_MCFR_Msk                       _U_(0x111FFFF)                                 /**< (CKGR_MCFR) Register Mask  */


/* -------- CKGR_PLLAR : (PMC Offset: 0x28) (R/W 32) PLLA Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DIVA:1;                    /**< bit:      0  Divider A                                */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t PLLACOUNT:6;               /**< bit:  8..13  PLLA Counter                             */
    uint32_t OUTA:4;                    /**< bit: 14..17  PLLA Clock Frequency Range               */
    uint32_t MULA:7;                    /**< bit: 18..24  PLLA Multiplier                          */
    uint32_t :4;                        /**< bit: 25..28  Reserved */
    uint32_t ONE:1;                     /**< bit:     29  Must Be Set to 1                         */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} CKGR_PLLAR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CKGR_PLLAR_OFFSET                   (0x28)                                        /**<  (CKGR_PLLAR) PLLA Register  Offset */

#define CKGR_PLLAR_DIVA_Pos                 0                                              /**< (CKGR_PLLAR) Divider A Position */
#define CKGR_PLLAR_DIVA_Msk                 (_U_(0x1) << CKGR_PLLAR_DIVA_Pos)              /**< (CKGR_PLLAR) Divider A Mask */
#define CKGR_PLLAR_DIVA                     CKGR_PLLAR_DIVA_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_PLLAR_DIVA_Msk instead */
#define CKGR_PLLAR_PLLACOUNT_Pos            8                                              /**< (CKGR_PLLAR) PLLA Counter Position */
#define CKGR_PLLAR_PLLACOUNT_Msk            (_U_(0x3F) << CKGR_PLLAR_PLLACOUNT_Pos)        /**< (CKGR_PLLAR) PLLA Counter Mask */
#define CKGR_PLLAR_PLLACOUNT(value)         (CKGR_PLLAR_PLLACOUNT_Msk & ((value) << CKGR_PLLAR_PLLACOUNT_Pos))
#define CKGR_PLLAR_OUTA_Pos                 14                                             /**< (CKGR_PLLAR) PLLA Clock Frequency Range Position */
#define CKGR_PLLAR_OUTA_Msk                 (_U_(0xF) << CKGR_PLLAR_OUTA_Pos)              /**< (CKGR_PLLAR) PLLA Clock Frequency Range Mask */
#define CKGR_PLLAR_OUTA(value)              (CKGR_PLLAR_OUTA_Msk & ((value) << CKGR_PLLAR_OUTA_Pos))
#define CKGR_PLLAR_MULA_Pos                 18                                             /**< (CKGR_PLLAR) PLLA Multiplier Position */
#define CKGR_PLLAR_MULA_Msk                 (_U_(0x7F) << CKGR_PLLAR_MULA_Pos)             /**< (CKGR_PLLAR) PLLA Multiplier Mask */
#define CKGR_PLLAR_MULA(value)              (CKGR_PLLAR_MULA_Msk & ((value) << CKGR_PLLAR_MULA_Pos))
#define CKGR_PLLAR_ONE_Pos                  29                                             /**< (CKGR_PLLAR) Must Be Set to 1 Position */
#define CKGR_PLLAR_ONE_Msk                  (_U_(0x1) << CKGR_PLLAR_ONE_Pos)               /**< (CKGR_PLLAR) Must Be Set to 1 Mask */
#define CKGR_PLLAR_ONE                      CKGR_PLLAR_ONE_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use CKGR_PLLAR_ONE_Msk instead */
#define CKGR_PLLAR_MASK                     _U_(0x21FFFF01)                                /**< \deprecated (CKGR_PLLAR) Register MASK  (Use CKGR_PLLAR_Msk instead)  */
#define CKGR_PLLAR_Msk                      _U_(0x21FFFF01)                                /**< (CKGR_PLLAR) Register Mask  */


/* -------- PMC_MCKR : (PMC Offset: 0x30) (R/W 32) Master Clock Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CSS:2;                     /**< bit:   0..1  Master/Processor Clock Source Selection  */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t PRES:3;                    /**< bit:   4..6  Master/Processor Clock Prescaler         */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t MDIV:2;                    /**< bit:   8..9  Master Clock Division                    */
    uint32_t :2;                        /**< bit: 10..11  Reserved */
    uint32_t PLLADIV2:1;                /**< bit:     12  PLLA Divisor by 2                        */
    uint32_t :11;                       /**< bit: 13..23  Reserved */
    uint32_t H32MXDIV:1;                /**< bit:     24  AHB 32-bit Matrix Divisor                */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :12;                       /**< bit:  0..11  Reserved */
    uint32_t PLLADIV:1;                 /**< bit:     12  PLLA Divisor by 2                        */
    uint32_t :19;                       /**< bit: 13..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_MCKR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_MCKR_OFFSET                     (0x30)                                        /**<  (PMC_MCKR) Master Clock Register  Offset */

#define PMC_MCKR_CSS_Pos                    0                                              /**< (PMC_MCKR) Master/Processor Clock Source Selection Position */
#define PMC_MCKR_CSS_Msk                    (_U_(0x3) << PMC_MCKR_CSS_Pos)                 /**< (PMC_MCKR) Master/Processor Clock Source Selection Mask */
#define PMC_MCKR_CSS(value)                 (PMC_MCKR_CSS_Msk & ((value) << PMC_MCKR_CSS_Pos))
#define   PMC_MCKR_CSS_SLOW_CLK_Val         _U_(0x0)                                       /**< (PMC_MCKR) Slow clock is selected  */
#define   PMC_MCKR_CSS_MAIN_CLK_Val         _U_(0x1)                                       /**< (PMC_MCKR) Main clock is selected  */
#define   PMC_MCKR_CSS_PLLA_CLK_Val         _U_(0x2)                                       /**< (PMC_MCKR) PLLACK is selected  */
#define   PMC_MCKR_CSS_UPLL_CLK_Val         _U_(0x3)                                       /**< (PMC_MCKR) UPLL Clock is selected  */
#define PMC_MCKR_CSS_SLOW_CLK               (PMC_MCKR_CSS_SLOW_CLK_Val << PMC_MCKR_CSS_Pos)  /**< (PMC_MCKR) Slow clock is selected Position  */
#define PMC_MCKR_CSS_MAIN_CLK               (PMC_MCKR_CSS_MAIN_CLK_Val << PMC_MCKR_CSS_Pos)  /**< (PMC_MCKR) Main clock is selected Position  */
#define PMC_MCKR_CSS_PLLA_CLK               (PMC_MCKR_CSS_PLLA_CLK_Val << PMC_MCKR_CSS_Pos)  /**< (PMC_MCKR) PLLACK is selected Position  */
#define PMC_MCKR_CSS_UPLL_CLK               (PMC_MCKR_CSS_UPLL_CLK_Val << PMC_MCKR_CSS_Pos)  /**< (PMC_MCKR) UPLL Clock is selected Position  */
#define PMC_MCKR_PRES_Pos                   4                                              /**< (PMC_MCKR) Master/Processor Clock Prescaler Position */
#define PMC_MCKR_PRES_Msk                   (_U_(0x7) << PMC_MCKR_PRES_Pos)                /**< (PMC_MCKR) Master/Processor Clock Prescaler Mask */
#define PMC_MCKR_PRES(value)                (PMC_MCKR_PRES_Msk & ((value) << PMC_MCKR_PRES_Pos))
#define   PMC_MCKR_PRES_CLOCK_Val           _U_(0x0)                                       /**< (PMC_MCKR) Selected clock  */
#define   PMC_MCKR_PRES_CLOCK_DIV2_Val      _U_(0x1)                                       /**< (PMC_MCKR) Selected clock divided by 2  */
#define   PMC_MCKR_PRES_CLOCK_DIV4_Val      _U_(0x2)                                       /**< (PMC_MCKR) Selected clock divided by 4  */
#define   PMC_MCKR_PRES_CLOCK_DIV8_Val      _U_(0x3)                                       /**< (PMC_MCKR) Selected clock divided by 8  */
#define   PMC_MCKR_PRES_CLOCK_DIV16_Val     _U_(0x4)                                       /**< (PMC_MCKR) Selected clock divided by 16  */
#define   PMC_MCKR_PRES_CLOCK_DIV32_Val     _U_(0x5)                                       /**< (PMC_MCKR) Selected clock divided by 32  */
#define   PMC_MCKR_PRES_CLOCK_DIV64_Val     _U_(0x6)                                       /**< (PMC_MCKR) Selected clock divided by 64  */
#define PMC_MCKR_PRES_CLOCK                 (PMC_MCKR_PRES_CLOCK_Val << PMC_MCKR_PRES_Pos)  /**< (PMC_MCKR) Selected clock Position  */
#define PMC_MCKR_PRES_CLOCK_DIV2            (PMC_MCKR_PRES_CLOCK_DIV2_Val << PMC_MCKR_PRES_Pos)  /**< (PMC_MCKR) Selected clock divided by 2 Position  */
#define PMC_MCKR_PRES_CLOCK_DIV4            (PMC_MCKR_PRES_CLOCK_DIV4_Val << PMC_MCKR_PRES_Pos)  /**< (PMC_MCKR) Selected clock divided by 4 Position  */
#define PMC_MCKR_PRES_CLOCK_DIV8            (PMC_MCKR_PRES_CLOCK_DIV8_Val << PMC_MCKR_PRES_Pos)  /**< (PMC_MCKR) Selected clock divided by 8 Position  */
#define PMC_MCKR_PRES_CLOCK_DIV16           (PMC_MCKR_PRES_CLOCK_DIV16_Val << PMC_MCKR_PRES_Pos)  /**< (PMC_MCKR) Selected clock divided by 16 Position  */
#define PMC_MCKR_PRES_CLOCK_DIV32           (PMC_MCKR_PRES_CLOCK_DIV32_Val << PMC_MCKR_PRES_Pos)  /**< (PMC_MCKR) Selected clock divided by 32 Position  */
#define PMC_MCKR_PRES_CLOCK_DIV64           (PMC_MCKR_PRES_CLOCK_DIV64_Val << PMC_MCKR_PRES_Pos)  /**< (PMC_MCKR) Selected clock divided by 64 Position  */
#define PMC_MCKR_MDIV_Pos                   8                                              /**< (PMC_MCKR) Master Clock Division Position */
#define PMC_MCKR_MDIV_Msk                   (_U_(0x3) << PMC_MCKR_MDIV_Pos)                /**< (PMC_MCKR) Master Clock Division Mask */
#define PMC_MCKR_MDIV(value)                (PMC_MCKR_MDIV_Msk & ((value) << PMC_MCKR_MDIV_Pos))
#define   PMC_MCKR_MDIV_EQ_PCK_Val          _U_(0x0)                                       /**< (PMC_MCKR) Master Clock is Prescaler Output Clock divided by 1.Warning: DDRCK is not available.  */
#define   PMC_MCKR_MDIV_PCK_DIV2_Val        _U_(0x1)                                       /**< (PMC_MCKR) Master Clock is Prescaler Output Clock divided by 2. DDRCK is equal to MCK.  */
#define   PMC_MCKR_MDIV_PCK_DIV4_Val        _U_(0x2)                                       /**< (PMC_MCKR) Master Clock is Prescaler Output Clock divided by 4. DDRCK is equal to MCK.  */
#define   PMC_MCKR_MDIV_PCK_DIV3_Val        _U_(0x3)                                       /**< (PMC_MCKR) Master Clock is Prescaler Output Clock divided by 3. DDRCK is equal to MCK.  */
#define PMC_MCKR_MDIV_EQ_PCK                (PMC_MCKR_MDIV_EQ_PCK_Val << PMC_MCKR_MDIV_Pos)  /**< (PMC_MCKR) Master Clock is Prescaler Output Clock divided by 1.Warning: DDRCK is not available. Position  */
#define PMC_MCKR_MDIV_PCK_DIV2              (PMC_MCKR_MDIV_PCK_DIV2_Val << PMC_MCKR_MDIV_Pos)  /**< (PMC_MCKR) Master Clock is Prescaler Output Clock divided by 2. DDRCK is equal to MCK. Position  */
#define PMC_MCKR_MDIV_PCK_DIV4              (PMC_MCKR_MDIV_PCK_DIV4_Val << PMC_MCKR_MDIV_Pos)  /**< (PMC_MCKR) Master Clock is Prescaler Output Clock divided by 4. DDRCK is equal to MCK. Position  */
#define PMC_MCKR_MDIV_PCK_DIV3              (PMC_MCKR_MDIV_PCK_DIV3_Val << PMC_MCKR_MDIV_Pos)  /**< (PMC_MCKR) Master Clock is Prescaler Output Clock divided by 3. DDRCK is equal to MCK. Position  */
#define PMC_MCKR_PLLADIV2_Pos               12                                             /**< (PMC_MCKR) PLLA Divisor by 2 Position */
#define PMC_MCKR_PLLADIV2_Msk               (_U_(0x1) << PMC_MCKR_PLLADIV2_Pos)            /**< (PMC_MCKR) PLLA Divisor by 2 Mask */
#define PMC_MCKR_PLLADIV2                   PMC_MCKR_PLLADIV2_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_MCKR_PLLADIV2_Msk instead */
#define PMC_MCKR_H32MXDIV_Pos               24                                             /**< (PMC_MCKR) AHB 32-bit Matrix Divisor Position */
#define PMC_MCKR_H32MXDIV_Msk               (_U_(0x1) << PMC_MCKR_H32MXDIV_Pos)            /**< (PMC_MCKR) AHB 32-bit Matrix Divisor Mask */
#define PMC_MCKR_H32MXDIV                   PMC_MCKR_H32MXDIV_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_MCKR_H32MXDIV_Msk instead */
#define   PMC_MCKR_H32MXDIV_H32MXDIV1_Val   _U_(0x0)                                       /**< (PMC_MCKR) The AHB 32-bit Matrix frequency is equal to the AHB 64-bit Matrix frequency. It is possible only if the AHB 64-bit Matrix frequency does not exceed 83 MHz.  */
#define   PMC_MCKR_H32MXDIV_H32MXDIV2_Val   _U_(0x1)                                       /**< (PMC_MCKR) The AHB 32-bit Matrix frequency is equal to the AHB 64-bit Matrix frequency divided by 2.  */
#define PMC_MCKR_H32MXDIV_H32MXDIV1         (PMC_MCKR_H32MXDIV_H32MXDIV1_Val << PMC_MCKR_H32MXDIV_Pos)  /**< (PMC_MCKR) The AHB 32-bit Matrix frequency is equal to the AHB 64-bit Matrix frequency. It is possible only if the AHB 64-bit Matrix frequency does not exceed 83 MHz. Position  */
#define PMC_MCKR_H32MXDIV_H32MXDIV2         (PMC_MCKR_H32MXDIV_H32MXDIV2_Val << PMC_MCKR_H32MXDIV_Pos)  /**< (PMC_MCKR) The AHB 32-bit Matrix frequency is equal to the AHB 64-bit Matrix frequency divided by 2. Position  */
#define PMC_MCKR_MASK                       _U_(0x1001373)                                 /**< \deprecated (PMC_MCKR) Register MASK  (Use PMC_MCKR_Msk instead)  */
#define PMC_MCKR_Msk                        _U_(0x1001373)                                 /**< (PMC_MCKR) Register Mask  */

#define PMC_MCKR_PLLADIV_Pos                12                                             /**< (PMC_MCKR Position) PLLA Divisor by 2 */
#define PMC_MCKR_PLLADIV_Msk                (_U_(0x1) << PMC_MCKR_PLLADIV_Pos)             /**< (PMC_MCKR Mask) PLLADIV */
#define PMC_MCKR_PLLADIV(value)             (PMC_MCKR_PLLADIV_Msk & ((value) << PMC_MCKR_PLLADIV_Pos))  

/* -------- PMC_USB : (PMC Offset: 0x38) (R/W 32) USB Clock Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t USBS:1;                    /**< bit:      0  USB OHCI Input Clock Selection           */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t USBDIV:4;                  /**< bit:  8..11  Divider for USB OHCI Clock               */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PMC_USB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_USB_OFFSET                      (0x38)                                        /**<  (PMC_USB) USB Clock Register  Offset */

#define PMC_USB_USBS_Pos                    0                                              /**< (PMC_USB) USB OHCI Input Clock Selection Position */
#define PMC_USB_USBS_Msk                    (_U_(0x1) << PMC_USB_USBS_Pos)                 /**< (PMC_USB) USB OHCI Input Clock Selection Mask */
#define PMC_USB_USBS                        PMC_USB_USBS_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_USB_USBS_Msk instead */
#define PMC_USB_USBDIV_Pos                  8                                              /**< (PMC_USB) Divider for USB OHCI Clock Position */
#define PMC_USB_USBDIV_Msk                  (_U_(0xF) << PMC_USB_USBDIV_Pos)               /**< (PMC_USB) Divider for USB OHCI Clock Mask */
#define PMC_USB_USBDIV(value)               (PMC_USB_USBDIV_Msk & ((value) << PMC_USB_USBDIV_Pos))
#define PMC_USB_MASK                        _U_(0xF01)                                     /**< \deprecated (PMC_USB) Register MASK  (Use PMC_USB_Msk instead)  */
#define PMC_USB_Msk                         _U_(0xF01)                                     /**< (PMC_USB) Register Mask  */


/* -------- PMC_PCK : (PMC Offset: 0x40) (R/W 32) Programmable Clock 0 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CSS:3;                     /**< bit:   0..2  Master Clock Source Selection            */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t PRES:8;                    /**< bit:  4..11  Programmable Clock Prescaler             */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PMC_PCK_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_PCK_OFFSET                      (0x40)                                        /**<  (PMC_PCK) Programmable Clock 0 Register  Offset */

#define PMC_PCK_CSS_Pos                     0                                              /**< (PMC_PCK) Master Clock Source Selection Position */
#define PMC_PCK_CSS_Msk                     (_U_(0x7) << PMC_PCK_CSS_Pos)                  /**< (PMC_PCK) Master Clock Source Selection Mask */
#define PMC_PCK_CSS(value)                  (PMC_PCK_CSS_Msk & ((value) << PMC_PCK_CSS_Pos))
#define   PMC_PCK_CSS_SLOW_CLK_Val          _U_(0x0)                                       /**< (PMC_PCK) Slow clock is selected  */
#define   PMC_PCK_CSS_MAIN_CLK_Val          _U_(0x1)                                       /**< (PMC_PCK) Main clock is selected  */
#define   PMC_PCK_CSS_PLLA_CLK_Val          _U_(0x2)                                       /**< (PMC_PCK) PLLACK is selected  */
#define   PMC_PCK_CSS_UPLL_CLK_Val          _U_(0x3)                                       /**< (PMC_PCK) UPLL Clock is selected  */
#define   PMC_PCK_CSS_MCK_CLK_Val           _U_(0x4)                                       /**< (PMC_PCK) Master Clock is selected  */
#define   PMC_PCK_CSS_AUDIO_CLK_Val         _U_(0x5)                                       /**< (PMC_PCK) Audio PLL clock is selected  */
#define PMC_PCK_CSS_SLOW_CLK                (PMC_PCK_CSS_SLOW_CLK_Val << PMC_PCK_CSS_Pos)  /**< (PMC_PCK) Slow clock is selected Position  */
#define PMC_PCK_CSS_MAIN_CLK                (PMC_PCK_CSS_MAIN_CLK_Val << PMC_PCK_CSS_Pos)  /**< (PMC_PCK) Main clock is selected Position  */
#define PMC_PCK_CSS_PLLA_CLK                (PMC_PCK_CSS_PLLA_CLK_Val << PMC_PCK_CSS_Pos)  /**< (PMC_PCK) PLLACK is selected Position  */
#define PMC_PCK_CSS_UPLL_CLK                (PMC_PCK_CSS_UPLL_CLK_Val << PMC_PCK_CSS_Pos)  /**< (PMC_PCK) UPLL Clock is selected Position  */
#define PMC_PCK_CSS_MCK_CLK                 (PMC_PCK_CSS_MCK_CLK_Val << PMC_PCK_CSS_Pos)   /**< (PMC_PCK) Master Clock is selected Position  */
#define PMC_PCK_CSS_AUDIO_CLK               (PMC_PCK_CSS_AUDIO_CLK_Val << PMC_PCK_CSS_Pos)  /**< (PMC_PCK) Audio PLL clock is selected Position  */
#define PMC_PCK_PRES_Pos                    4                                              /**< (PMC_PCK) Programmable Clock Prescaler Position */
#define PMC_PCK_PRES_Msk                    (_U_(0xFF) << PMC_PCK_PRES_Pos)                /**< (PMC_PCK) Programmable Clock Prescaler Mask */
#define PMC_PCK_PRES(value)                 (PMC_PCK_PRES_Msk & ((value) << PMC_PCK_PRES_Pos))
#define PMC_PCK_MASK                        _U_(0xFF7)                                     /**< \deprecated (PMC_PCK) Register MASK  (Use PMC_PCK_Msk instead)  */
#define PMC_PCK_Msk                         _U_(0xFF7)                                     /**< (PMC_PCK) Register Mask  */


/* -------- PMC_IER : (PMC Offset: 0x60) (/W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MOSCXTS:1;                 /**< bit:      0  8 to 24 MHz Crystal Oscillator Status Interrupt Enable */
    uint32_t LOCKA:1;                   /**< bit:      1  PLLA Lock Interrupt Enable               */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t MCKRDY:1;                  /**< bit:      3  Master Clock Ready Interrupt Enable      */
    uint32_t :2;                        /**< bit:   4..5  Reserved */
    uint32_t LOCKU:1;                   /**< bit:      6  UTMI PLL Lock Interrupt Enable           */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t PCKRDY0:1;                 /**< bit:      8  Programmable Clock Ready 0 Interrupt Enable */
    uint32_t PCKRDY1:1;                 /**< bit:      9  Programmable Clock Ready 1 Interrupt Enable */
    uint32_t PCKRDY2:1;                 /**< bit:     10  Programmable Clock Ready 2 Interrupt Enable */
    uint32_t :5;                        /**< bit: 11..15  Reserved */
    uint32_t MOSCSELS:1;                /**< bit:     16  Main Clock Source Oscillator Selection Status Interrupt Enable */
    uint32_t MOSCRCS:1;                 /**< bit:     17  12 MHz RC Oscillator Status Interrupt Enable */
    uint32_t CFDEV:1;                   /**< bit:     18  Clock Failure Detector Event Interrupt Enable */
    uint32_t :13;                       /**< bit: 19..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PCKRDY:3;                  /**< bit:  8..10  Programmable Clock Ready x Interrupt Enable */
    uint32_t :21;                       /**< bit: 11..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_IER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_IER_OFFSET                      (0x60)                                        /**<  (PMC_IER) Interrupt Enable Register  Offset */

#define PMC_IER_MOSCXTS_Pos                 0                                              /**< (PMC_IER) 8 to 24 MHz Crystal Oscillator Status Interrupt Enable Position */
#define PMC_IER_MOSCXTS_Msk                 (_U_(0x1) << PMC_IER_MOSCXTS_Pos)              /**< (PMC_IER) 8 to 24 MHz Crystal Oscillator Status Interrupt Enable Mask */
#define PMC_IER_MOSCXTS                     PMC_IER_MOSCXTS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IER_MOSCXTS_Msk instead */
#define PMC_IER_LOCKA_Pos                   1                                              /**< (PMC_IER) PLLA Lock Interrupt Enable Position */
#define PMC_IER_LOCKA_Msk                   (_U_(0x1) << PMC_IER_LOCKA_Pos)                /**< (PMC_IER) PLLA Lock Interrupt Enable Mask */
#define PMC_IER_LOCKA                       PMC_IER_LOCKA_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IER_LOCKA_Msk instead */
#define PMC_IER_MCKRDY_Pos                  3                                              /**< (PMC_IER) Master Clock Ready Interrupt Enable Position */
#define PMC_IER_MCKRDY_Msk                  (_U_(0x1) << PMC_IER_MCKRDY_Pos)               /**< (PMC_IER) Master Clock Ready Interrupt Enable Mask */
#define PMC_IER_MCKRDY                      PMC_IER_MCKRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IER_MCKRDY_Msk instead */
#define PMC_IER_LOCKU_Pos                   6                                              /**< (PMC_IER) UTMI PLL Lock Interrupt Enable Position */
#define PMC_IER_LOCKU_Msk                   (_U_(0x1) << PMC_IER_LOCKU_Pos)                /**< (PMC_IER) UTMI PLL Lock Interrupt Enable Mask */
#define PMC_IER_LOCKU                       PMC_IER_LOCKU_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IER_LOCKU_Msk instead */
#define PMC_IER_PCKRDY0_Pos                 8                                              /**< (PMC_IER) Programmable Clock Ready 0 Interrupt Enable Position */
#define PMC_IER_PCKRDY0_Msk                 (_U_(0x1) << PMC_IER_PCKRDY0_Pos)              /**< (PMC_IER) Programmable Clock Ready 0 Interrupt Enable Mask */
#define PMC_IER_PCKRDY0                     PMC_IER_PCKRDY0_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IER_PCKRDY0_Msk instead */
#define PMC_IER_PCKRDY1_Pos                 9                                              /**< (PMC_IER) Programmable Clock Ready 1 Interrupt Enable Position */
#define PMC_IER_PCKRDY1_Msk                 (_U_(0x1) << PMC_IER_PCKRDY1_Pos)              /**< (PMC_IER) Programmable Clock Ready 1 Interrupt Enable Mask */
#define PMC_IER_PCKRDY1                     PMC_IER_PCKRDY1_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IER_PCKRDY1_Msk instead */
#define PMC_IER_PCKRDY2_Pos                 10                                             /**< (PMC_IER) Programmable Clock Ready 2 Interrupt Enable Position */
#define PMC_IER_PCKRDY2_Msk                 (_U_(0x1) << PMC_IER_PCKRDY2_Pos)              /**< (PMC_IER) Programmable Clock Ready 2 Interrupt Enable Mask */
#define PMC_IER_PCKRDY2                     PMC_IER_PCKRDY2_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IER_PCKRDY2_Msk instead */
#define PMC_IER_MOSCSELS_Pos                16                                             /**< (PMC_IER) Main Clock Source Oscillator Selection Status Interrupt Enable Position */
#define PMC_IER_MOSCSELS_Msk                (_U_(0x1) << PMC_IER_MOSCSELS_Pos)             /**< (PMC_IER) Main Clock Source Oscillator Selection Status Interrupt Enable Mask */
#define PMC_IER_MOSCSELS                    PMC_IER_MOSCSELS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IER_MOSCSELS_Msk instead */
#define PMC_IER_MOSCRCS_Pos                 17                                             /**< (PMC_IER) 12 MHz RC Oscillator Status Interrupt Enable Position */
#define PMC_IER_MOSCRCS_Msk                 (_U_(0x1) << PMC_IER_MOSCRCS_Pos)              /**< (PMC_IER) 12 MHz RC Oscillator Status Interrupt Enable Mask */
#define PMC_IER_MOSCRCS                     PMC_IER_MOSCRCS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IER_MOSCRCS_Msk instead */
#define PMC_IER_CFDEV_Pos                   18                                             /**< (PMC_IER) Clock Failure Detector Event Interrupt Enable Position */
#define PMC_IER_CFDEV_Msk                   (_U_(0x1) << PMC_IER_CFDEV_Pos)                /**< (PMC_IER) Clock Failure Detector Event Interrupt Enable Mask */
#define PMC_IER_CFDEV                       PMC_IER_CFDEV_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IER_CFDEV_Msk instead */
#define PMC_IER_MASK                        _U_(0x7074B)                                   /**< \deprecated (PMC_IER) Register MASK  (Use PMC_IER_Msk instead)  */
#define PMC_IER_Msk                         _U_(0x7074B)                                   /**< (PMC_IER) Register Mask  */

#define PMC_IER_PCKRDY_Pos                  8                                              /**< (PMC_IER Position) Programmable Clock Ready x Interrupt Enable */
#define PMC_IER_PCKRDY_Msk                  (_U_(0x7) << PMC_IER_PCKRDY_Pos)               /**< (PMC_IER Mask) PCKRDY */
#define PMC_IER_PCKRDY(value)               (PMC_IER_PCKRDY_Msk & ((value) << PMC_IER_PCKRDY_Pos))  

/* -------- PMC_IDR : (PMC Offset: 0x64) (/W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MOSCXTS:1;                 /**< bit:      0  8 to 24 MHz Crystal Oscillator Status Interrupt Disable */
    uint32_t LOCKA:1;                   /**< bit:      1  PLLA Lock Interrupt Disable              */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t MCKRDY:1;                  /**< bit:      3  Master Clock Ready Interrupt Disable     */
    uint32_t :2;                        /**< bit:   4..5  Reserved */
    uint32_t LOCKU:1;                   /**< bit:      6  UTMI PLL Lock Interrupt Enable           */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t PCKRDY0:1;                 /**< bit:      8  Programmable Clock Ready 0 Interrupt Disable */
    uint32_t PCKRDY1:1;                 /**< bit:      9  Programmable Clock Ready 1 Interrupt Disable */
    uint32_t PCKRDY2:1;                 /**< bit:     10  Programmable Clock Ready 2 Interrupt Disable */
    uint32_t :5;                        /**< bit: 11..15  Reserved */
    uint32_t MOSCSELS:1;                /**< bit:     16  Main Oscillator Clock Source Selection Status Interrupt Disable */
    uint32_t MOSCRCS:1;                 /**< bit:     17  12 MHz RC Oscillator Status Interrupt Disable */
    uint32_t CFDEV:1;                   /**< bit:     18  Clock Failure Detector Event Interrupt Disable */
    uint32_t :13;                       /**< bit: 19..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PCKRDY:3;                  /**< bit:  8..10  Programmable Clock Ready x Interrupt Disable */
    uint32_t :21;                       /**< bit: 11..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_IDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_IDR_OFFSET                      (0x64)                                        /**<  (PMC_IDR) Interrupt Disable Register  Offset */

#define PMC_IDR_MOSCXTS_Pos                 0                                              /**< (PMC_IDR) 8 to 24 MHz Crystal Oscillator Status Interrupt Disable Position */
#define PMC_IDR_MOSCXTS_Msk                 (_U_(0x1) << PMC_IDR_MOSCXTS_Pos)              /**< (PMC_IDR) 8 to 24 MHz Crystal Oscillator Status Interrupt Disable Mask */
#define PMC_IDR_MOSCXTS                     PMC_IDR_MOSCXTS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IDR_MOSCXTS_Msk instead */
#define PMC_IDR_LOCKA_Pos                   1                                              /**< (PMC_IDR) PLLA Lock Interrupt Disable Position */
#define PMC_IDR_LOCKA_Msk                   (_U_(0x1) << PMC_IDR_LOCKA_Pos)                /**< (PMC_IDR) PLLA Lock Interrupt Disable Mask */
#define PMC_IDR_LOCKA                       PMC_IDR_LOCKA_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IDR_LOCKA_Msk instead */
#define PMC_IDR_MCKRDY_Pos                  3                                              /**< (PMC_IDR) Master Clock Ready Interrupt Disable Position */
#define PMC_IDR_MCKRDY_Msk                  (_U_(0x1) << PMC_IDR_MCKRDY_Pos)               /**< (PMC_IDR) Master Clock Ready Interrupt Disable Mask */
#define PMC_IDR_MCKRDY                      PMC_IDR_MCKRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IDR_MCKRDY_Msk instead */
#define PMC_IDR_LOCKU_Pos                   6                                              /**< (PMC_IDR) UTMI PLL Lock Interrupt Enable Position */
#define PMC_IDR_LOCKU_Msk                   (_U_(0x1) << PMC_IDR_LOCKU_Pos)                /**< (PMC_IDR) UTMI PLL Lock Interrupt Enable Mask */
#define PMC_IDR_LOCKU                       PMC_IDR_LOCKU_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IDR_LOCKU_Msk instead */
#define PMC_IDR_PCKRDY0_Pos                 8                                              /**< (PMC_IDR) Programmable Clock Ready 0 Interrupt Disable Position */
#define PMC_IDR_PCKRDY0_Msk                 (_U_(0x1) << PMC_IDR_PCKRDY0_Pos)              /**< (PMC_IDR) Programmable Clock Ready 0 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY0                     PMC_IDR_PCKRDY0_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IDR_PCKRDY0_Msk instead */
#define PMC_IDR_PCKRDY1_Pos                 9                                              /**< (PMC_IDR) Programmable Clock Ready 1 Interrupt Disable Position */
#define PMC_IDR_PCKRDY1_Msk                 (_U_(0x1) << PMC_IDR_PCKRDY1_Pos)              /**< (PMC_IDR) Programmable Clock Ready 1 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY1                     PMC_IDR_PCKRDY1_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IDR_PCKRDY1_Msk instead */
#define PMC_IDR_PCKRDY2_Pos                 10                                             /**< (PMC_IDR) Programmable Clock Ready 2 Interrupt Disable Position */
#define PMC_IDR_PCKRDY2_Msk                 (_U_(0x1) << PMC_IDR_PCKRDY2_Pos)              /**< (PMC_IDR) Programmable Clock Ready 2 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY2                     PMC_IDR_PCKRDY2_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IDR_PCKRDY2_Msk instead */
#define PMC_IDR_MOSCSELS_Pos                16                                             /**< (PMC_IDR) Main Oscillator Clock Source Selection Status Interrupt Disable Position */
#define PMC_IDR_MOSCSELS_Msk                (_U_(0x1) << PMC_IDR_MOSCSELS_Pos)             /**< (PMC_IDR) Main Oscillator Clock Source Selection Status Interrupt Disable Mask */
#define PMC_IDR_MOSCSELS                    PMC_IDR_MOSCSELS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IDR_MOSCSELS_Msk instead */
#define PMC_IDR_MOSCRCS_Pos                 17                                             /**< (PMC_IDR) 12 MHz RC Oscillator Status Interrupt Disable Position */
#define PMC_IDR_MOSCRCS_Msk                 (_U_(0x1) << PMC_IDR_MOSCRCS_Pos)              /**< (PMC_IDR) 12 MHz RC Oscillator Status Interrupt Disable Mask */
#define PMC_IDR_MOSCRCS                     PMC_IDR_MOSCRCS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IDR_MOSCRCS_Msk instead */
#define PMC_IDR_CFDEV_Pos                   18                                             /**< (PMC_IDR) Clock Failure Detector Event Interrupt Disable Position */
#define PMC_IDR_CFDEV_Msk                   (_U_(0x1) << PMC_IDR_CFDEV_Pos)                /**< (PMC_IDR) Clock Failure Detector Event Interrupt Disable Mask */
#define PMC_IDR_CFDEV                       PMC_IDR_CFDEV_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IDR_CFDEV_Msk instead */
#define PMC_IDR_MASK                        _U_(0x7074B)                                   /**< \deprecated (PMC_IDR) Register MASK  (Use PMC_IDR_Msk instead)  */
#define PMC_IDR_Msk                         _U_(0x7074B)                                   /**< (PMC_IDR) Register Mask  */

#define PMC_IDR_PCKRDY_Pos                  8                                              /**< (PMC_IDR Position) Programmable Clock Ready x Interrupt Disable */
#define PMC_IDR_PCKRDY_Msk                  (_U_(0x7) << PMC_IDR_PCKRDY_Pos)               /**< (PMC_IDR Mask) PCKRDY */
#define PMC_IDR_PCKRDY(value)               (PMC_IDR_PCKRDY_Msk & ((value) << PMC_IDR_PCKRDY_Pos))  

/* -------- PMC_SR : (PMC Offset: 0x68) (R/ 32) Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MOSCXTS:1;                 /**< bit:      0  8 to 24 MHz Crystal Oscillator Status    */
    uint32_t LOCKA:1;                   /**< bit:      1  PLLA Lock Status                         */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t MCKRDY:1;                  /**< bit:      3  Master Clock Status                      */
    uint32_t :2;                        /**< bit:   4..5  Reserved */
    uint32_t LOCKU:1;                   /**< bit:      6  UPLL Clock Status                        */
    uint32_t OSCSELS:1;                 /**< bit:      7  Slow Clock Oscillator Selection          */
    uint32_t PCKRDY0:1;                 /**< bit:      8  Programmable Clock Ready Status          */
    uint32_t PCKRDY1:1;                 /**< bit:      9  Programmable Clock Ready Status          */
    uint32_t PCKRDY2:1;                 /**< bit:     10  Programmable Clock Ready Status          */
    uint32_t :5;                        /**< bit: 11..15  Reserved */
    uint32_t MOSCSELS:1;                /**< bit:     16  Main Oscillator Selection Status         */
    uint32_t MOSCRCS:1;                 /**< bit:     17  12 MHz RC Oscillator Status              */
    uint32_t CFDEV:1;                   /**< bit:     18  Clock Failure Detector Event             */
    uint32_t CFDS:1;                    /**< bit:     19  Clock Failure Detector Status            */
    uint32_t FOS:1;                     /**< bit:     20  Clock Failure Detector Fault Output Status */
    uint32_t :1;                        /**< bit:     21  Reserved */
    uint32_t APLLCKRDY:1;               /**< bit:     22  Audio PLL Lock Status                    */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t GCKRDY:1;                  /**< bit:     24  Generic Clock Status                     */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PCKRDY:3;                  /**< bit:  8..10  Programmable Clock Ready Status          */
    uint32_t :21;                       /**< bit: 11..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_SR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_SR_OFFSET                       (0x68)                                        /**<  (PMC_SR) Status Register  Offset */

#define PMC_SR_MOSCXTS_Pos                  0                                              /**< (PMC_SR) 8 to 24 MHz Crystal Oscillator Status Position */
#define PMC_SR_MOSCXTS_Msk                  (_U_(0x1) << PMC_SR_MOSCXTS_Pos)               /**< (PMC_SR) 8 to 24 MHz Crystal Oscillator Status Mask */
#define PMC_SR_MOSCXTS                      PMC_SR_MOSCXTS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_MOSCXTS_Msk instead */
#define PMC_SR_LOCKA_Pos                    1                                              /**< (PMC_SR) PLLA Lock Status Position */
#define PMC_SR_LOCKA_Msk                    (_U_(0x1) << PMC_SR_LOCKA_Pos)                 /**< (PMC_SR) PLLA Lock Status Mask */
#define PMC_SR_LOCKA                        PMC_SR_LOCKA_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_LOCKA_Msk instead */
#define PMC_SR_MCKRDY_Pos                   3                                              /**< (PMC_SR) Master Clock Status Position */
#define PMC_SR_MCKRDY_Msk                   (_U_(0x1) << PMC_SR_MCKRDY_Pos)                /**< (PMC_SR) Master Clock Status Mask */
#define PMC_SR_MCKRDY                       PMC_SR_MCKRDY_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_MCKRDY_Msk instead */
#define PMC_SR_LOCKU_Pos                    6                                              /**< (PMC_SR) UPLL Clock Status Position */
#define PMC_SR_LOCKU_Msk                    (_U_(0x1) << PMC_SR_LOCKU_Pos)                 /**< (PMC_SR) UPLL Clock Status Mask */
#define PMC_SR_LOCKU                        PMC_SR_LOCKU_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_LOCKU_Msk instead */
#define PMC_SR_OSCSELS_Pos                  7                                              /**< (PMC_SR) Slow Clock Oscillator Selection Position */
#define PMC_SR_OSCSELS_Msk                  (_U_(0x1) << PMC_SR_OSCSELS_Pos)               /**< (PMC_SR) Slow Clock Oscillator Selection Mask */
#define PMC_SR_OSCSELS                      PMC_SR_OSCSELS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_OSCSELS_Msk instead */
#define PMC_SR_PCKRDY0_Pos                  8                                              /**< (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY0_Msk                  (_U_(0x1) << PMC_SR_PCKRDY0_Pos)               /**< (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY0                      PMC_SR_PCKRDY0_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_PCKRDY0_Msk instead */
#define PMC_SR_PCKRDY1_Pos                  9                                              /**< (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY1_Msk                  (_U_(0x1) << PMC_SR_PCKRDY1_Pos)               /**< (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY1                      PMC_SR_PCKRDY1_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_PCKRDY1_Msk instead */
#define PMC_SR_PCKRDY2_Pos                  10                                             /**< (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY2_Msk                  (_U_(0x1) << PMC_SR_PCKRDY2_Pos)               /**< (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY2                      PMC_SR_PCKRDY2_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_PCKRDY2_Msk instead */
#define PMC_SR_MOSCSELS_Pos                 16                                             /**< (PMC_SR) Main Oscillator Selection Status Position */
#define PMC_SR_MOSCSELS_Msk                 (_U_(0x1) << PMC_SR_MOSCSELS_Pos)              /**< (PMC_SR) Main Oscillator Selection Status Mask */
#define PMC_SR_MOSCSELS                     PMC_SR_MOSCSELS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_MOSCSELS_Msk instead */
#define PMC_SR_MOSCRCS_Pos                  17                                             /**< (PMC_SR) 12 MHz RC Oscillator Status Position */
#define PMC_SR_MOSCRCS_Msk                  (_U_(0x1) << PMC_SR_MOSCRCS_Pos)               /**< (PMC_SR) 12 MHz RC Oscillator Status Mask */
#define PMC_SR_MOSCRCS                      PMC_SR_MOSCRCS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_MOSCRCS_Msk instead */
#define PMC_SR_CFDEV_Pos                    18                                             /**< (PMC_SR) Clock Failure Detector Event Position */
#define PMC_SR_CFDEV_Msk                    (_U_(0x1) << PMC_SR_CFDEV_Pos)                 /**< (PMC_SR) Clock Failure Detector Event Mask */
#define PMC_SR_CFDEV                        PMC_SR_CFDEV_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_CFDEV_Msk instead */
#define PMC_SR_CFDS_Pos                     19                                             /**< (PMC_SR) Clock Failure Detector Status Position */
#define PMC_SR_CFDS_Msk                     (_U_(0x1) << PMC_SR_CFDS_Pos)                  /**< (PMC_SR) Clock Failure Detector Status Mask */
#define PMC_SR_CFDS                         PMC_SR_CFDS_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_CFDS_Msk instead */
#define PMC_SR_FOS_Pos                      20                                             /**< (PMC_SR) Clock Failure Detector Fault Output Status Position */
#define PMC_SR_FOS_Msk                      (_U_(0x1) << PMC_SR_FOS_Pos)                   /**< (PMC_SR) Clock Failure Detector Fault Output Status Mask */
#define PMC_SR_FOS                          PMC_SR_FOS_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_FOS_Msk instead */
#define PMC_SR_APLLCKRDY_Pos                22                                             /**< (PMC_SR) Audio PLL Lock Status Position */
#define PMC_SR_APLLCKRDY_Msk                (_U_(0x1) << PMC_SR_APLLCKRDY_Pos)             /**< (PMC_SR) Audio PLL Lock Status Mask */
#define PMC_SR_APLLCKRDY                    PMC_SR_APLLCKRDY_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_APLLCKRDY_Msk instead */
#define PMC_SR_GCKRDY_Pos                   24                                             /**< (PMC_SR) Generic Clock Status Position */
#define PMC_SR_GCKRDY_Msk                   (_U_(0x1) << PMC_SR_GCKRDY_Pos)                /**< (PMC_SR) Generic Clock Status Mask */
#define PMC_SR_GCKRDY                       PMC_SR_GCKRDY_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SR_GCKRDY_Msk instead */
#define PMC_SR_MASK                         _U_(0x15F07CB)                                 /**< \deprecated (PMC_SR) Register MASK  (Use PMC_SR_Msk instead)  */
#define PMC_SR_Msk                          _U_(0x15F07CB)                                 /**< (PMC_SR) Register Mask  */

#define PMC_SR_PCKRDY_Pos                   8                                              /**< (PMC_SR Position) Programmable Clock Ready Status */
#define PMC_SR_PCKRDY_Msk                   (_U_(0x7) << PMC_SR_PCKRDY_Pos)                /**< (PMC_SR Mask) PCKRDY */
#define PMC_SR_PCKRDY(value)                (PMC_SR_PCKRDY_Msk & ((value) << PMC_SR_PCKRDY_Pos))  

/* -------- PMC_IMR : (PMC Offset: 0x6c) (R/ 32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MOSCXTS:1;                 /**< bit:      0  8 to 24 MHz Crystal Oscillator Status Interrupt Mask */
    uint32_t LOCKA:1;                   /**< bit:      1  PLLA Lock Interrupt Mask                 */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t MCKRDY:1;                  /**< bit:      3  Master Clock Ready Interrupt Mask        */
    uint32_t :4;                        /**< bit:   4..7  Reserved */
    uint32_t PCKRDY0:1;                 /**< bit:      8  Programmable Clock Ready 0 Interrupt Mask */
    uint32_t PCKRDY1:1;                 /**< bit:      9  Programmable Clock Ready 1 Interrupt Mask */
    uint32_t PCKRDY2:1;                 /**< bit:     10  Programmable Clock Ready 2 Interrupt Mask */
    uint32_t :5;                        /**< bit: 11..15  Reserved */
    uint32_t MOSCSELS:1;                /**< bit:     16  Main Oscillator Clock Source Selection Status Interrupt Mask */
    uint32_t MOSCRCS:1;                 /**< bit:     17  12 MHz RC Oscillator Status Interrupt Mask */
    uint32_t CFDEV:1;                   /**< bit:     18  Clock Failure Detector Event Interrupt Mask */
    uint32_t :13;                       /**< bit: 19..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t PCKRDY:3;                  /**< bit:  8..10  Programmable Clock Ready x Interrupt Mask */
    uint32_t :21;                       /**< bit: 11..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_IMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_IMR_OFFSET                      (0x6C)                                        /**<  (PMC_IMR) Interrupt Mask Register  Offset */

#define PMC_IMR_MOSCXTS_Pos                 0                                              /**< (PMC_IMR) 8 to 24 MHz Crystal Oscillator Status Interrupt Mask Position */
#define PMC_IMR_MOSCXTS_Msk                 (_U_(0x1) << PMC_IMR_MOSCXTS_Pos)              /**< (PMC_IMR) 8 to 24 MHz Crystal Oscillator Status Interrupt Mask Mask */
#define PMC_IMR_MOSCXTS                     PMC_IMR_MOSCXTS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IMR_MOSCXTS_Msk instead */
#define PMC_IMR_LOCKA_Pos                   1                                              /**< (PMC_IMR) PLLA Lock Interrupt Mask Position */
#define PMC_IMR_LOCKA_Msk                   (_U_(0x1) << PMC_IMR_LOCKA_Pos)                /**< (PMC_IMR) PLLA Lock Interrupt Mask Mask */
#define PMC_IMR_LOCKA                       PMC_IMR_LOCKA_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IMR_LOCKA_Msk instead */
#define PMC_IMR_MCKRDY_Pos                  3                                              /**< (PMC_IMR) Master Clock Ready Interrupt Mask Position */
#define PMC_IMR_MCKRDY_Msk                  (_U_(0x1) << PMC_IMR_MCKRDY_Pos)               /**< (PMC_IMR) Master Clock Ready Interrupt Mask Mask */
#define PMC_IMR_MCKRDY                      PMC_IMR_MCKRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IMR_MCKRDY_Msk instead */
#define PMC_IMR_PCKRDY0_Pos                 8                                              /**< (PMC_IMR) Programmable Clock Ready 0 Interrupt Mask Position */
#define PMC_IMR_PCKRDY0_Msk                 (_U_(0x1) << PMC_IMR_PCKRDY0_Pos)              /**< (PMC_IMR) Programmable Clock Ready 0 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY0                     PMC_IMR_PCKRDY0_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IMR_PCKRDY0_Msk instead */
#define PMC_IMR_PCKRDY1_Pos                 9                                              /**< (PMC_IMR) Programmable Clock Ready 1 Interrupt Mask Position */
#define PMC_IMR_PCKRDY1_Msk                 (_U_(0x1) << PMC_IMR_PCKRDY1_Pos)              /**< (PMC_IMR) Programmable Clock Ready 1 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY1                     PMC_IMR_PCKRDY1_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IMR_PCKRDY1_Msk instead */
#define PMC_IMR_PCKRDY2_Pos                 10                                             /**< (PMC_IMR) Programmable Clock Ready 2 Interrupt Mask Position */
#define PMC_IMR_PCKRDY2_Msk                 (_U_(0x1) << PMC_IMR_PCKRDY2_Pos)              /**< (PMC_IMR) Programmable Clock Ready 2 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY2                     PMC_IMR_PCKRDY2_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IMR_PCKRDY2_Msk instead */
#define PMC_IMR_MOSCSELS_Pos                16                                             /**< (PMC_IMR) Main Oscillator Clock Source Selection Status Interrupt Mask Position */
#define PMC_IMR_MOSCSELS_Msk                (_U_(0x1) << PMC_IMR_MOSCSELS_Pos)             /**< (PMC_IMR) Main Oscillator Clock Source Selection Status Interrupt Mask Mask */
#define PMC_IMR_MOSCSELS                    PMC_IMR_MOSCSELS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IMR_MOSCSELS_Msk instead */
#define PMC_IMR_MOSCRCS_Pos                 17                                             /**< (PMC_IMR) 12 MHz RC Oscillator Status Interrupt Mask Position */
#define PMC_IMR_MOSCRCS_Msk                 (_U_(0x1) << PMC_IMR_MOSCRCS_Pos)              /**< (PMC_IMR) 12 MHz RC Oscillator Status Interrupt Mask Mask */
#define PMC_IMR_MOSCRCS                     PMC_IMR_MOSCRCS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IMR_MOSCRCS_Msk instead */
#define PMC_IMR_CFDEV_Pos                   18                                             /**< (PMC_IMR) Clock Failure Detector Event Interrupt Mask Position */
#define PMC_IMR_CFDEV_Msk                   (_U_(0x1) << PMC_IMR_CFDEV_Pos)                /**< (PMC_IMR) Clock Failure Detector Event Interrupt Mask Mask */
#define PMC_IMR_CFDEV                       PMC_IMR_CFDEV_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_IMR_CFDEV_Msk instead */
#define PMC_IMR_MASK                        _U_(0x7070B)                                   /**< \deprecated (PMC_IMR) Register MASK  (Use PMC_IMR_Msk instead)  */
#define PMC_IMR_Msk                         _U_(0x7070B)                                   /**< (PMC_IMR) Register Mask  */

#define PMC_IMR_PCKRDY_Pos                  8                                              /**< (PMC_IMR Position) Programmable Clock Ready x Interrupt Mask */
#define PMC_IMR_PCKRDY_Msk                  (_U_(0x7) << PMC_IMR_PCKRDY_Pos)               /**< (PMC_IMR Mask) PCKRDY */
#define PMC_IMR_PCKRDY(value)               (PMC_IMR_PCKRDY_Msk & ((value) << PMC_IMR_PCKRDY_Pos))  

/* -------- PMC_FSMR : (PMC Offset: 0x70) (R/W 32) Fast Startup Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t FSTT0:1;                   /**< bit:      0  Fast Startup from WKUP Pin Enable        */
    uint32_t FSTT1:1;                   /**< bit:      1  Fast Startup from Security Module Enable */
    uint32_t FSTT2:1;                   /**< bit:      2  Fast Startup from PIOBU0-7 Input Enable  */
    uint32_t FSTT3:1;                   /**< bit:      3  Fast Startup from PIOBU0-7 Input Enable  */
    uint32_t FSTT4:1;                   /**< bit:      4  Fast Startup from PIOBU0-7 Input Enable  */
    uint32_t FSTT5:1;                   /**< bit:      5  Fast Startup from PIOBU0-7 Input Enable  */
    uint32_t FSTT6:1;                   /**< bit:      6  Fast Startup from PIOBU0-7 Input Enable  */
    uint32_t FSTT7:1;                   /**< bit:      7  Fast Startup from PIOBU0-7 Input Enable  */
    uint32_t FSTT8:1;                   /**< bit:      8  Fast Startup from PIOBU0-7 Input Enable  */
    uint32_t FSTT9:1;                   /**< bit:      9  Fast Startup from PIOBU0-7 Input Enable  */
    uint32_t FSTT10:1;                  /**< bit:     10  Fast Startup from PIOBU0-7 Input Enable  */
    uint32_t :6;                        /**< bit: 11..16  Reserved */
    uint32_t RTCAL:1;                   /**< bit:     17  Fast Startup from RTC Alarm Enable       */
    uint32_t USBAL:1;                   /**< bit:     18  Fast Startup from USB Resume Enable      */
    uint32_t SDMMC_CD:1;                /**< bit:     19  Fast Startup from SDMMC Card Detect Enable */
    uint32_t LPM:1;                     /**< bit:     20  Low-power Mode                           */
    uint32_t :3;                        /**< bit: 21..23  Reserved */
    uint32_t RXLP_MCE:1;                /**< bit:     24  Fast Startup from Backup UART Receive Match Condition Enable */
    uint32_t ACC_CE:1;                  /**< bit:     25  Fast Startup from Analog Comparator Controller Comparison Enable */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t FSTT:11;                   /**< bit:  0..10  Fast Startup from WKUP Pin Enable        */
    uint32_t :21;                       /**< bit: 11..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_FSMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_FSMR_OFFSET                     (0x70)                                        /**<  (PMC_FSMR) Fast Startup Mode Register  Offset */

#define PMC_FSMR_FSTT0_Pos                  0                                              /**< (PMC_FSMR) Fast Startup from WKUP Pin Enable Position */
#define PMC_FSMR_FSTT0_Msk                  (_U_(0x1) << PMC_FSMR_FSTT0_Pos)               /**< (PMC_FSMR) Fast Startup from WKUP Pin Enable Mask */
#define PMC_FSMR_FSTT0                      PMC_FSMR_FSTT0_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT0_Msk instead */
#define PMC_FSMR_FSTT1_Pos                  1                                              /**< (PMC_FSMR) Fast Startup from Security Module Enable Position */
#define PMC_FSMR_FSTT1_Msk                  (_U_(0x1) << PMC_FSMR_FSTT1_Pos)               /**< (PMC_FSMR) Fast Startup from Security Module Enable Mask */
#define PMC_FSMR_FSTT1                      PMC_FSMR_FSTT1_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT1_Msk instead */
#define PMC_FSMR_FSTT2_Pos                  2                                              /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Position */
#define PMC_FSMR_FSTT2_Msk                  (_U_(0x1) << PMC_FSMR_FSTT2_Pos)               /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Mask */
#define PMC_FSMR_FSTT2                      PMC_FSMR_FSTT2_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT2_Msk instead */
#define PMC_FSMR_FSTT3_Pos                  3                                              /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Position */
#define PMC_FSMR_FSTT3_Msk                  (_U_(0x1) << PMC_FSMR_FSTT3_Pos)               /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Mask */
#define PMC_FSMR_FSTT3                      PMC_FSMR_FSTT3_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT3_Msk instead */
#define PMC_FSMR_FSTT4_Pos                  4                                              /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Position */
#define PMC_FSMR_FSTT4_Msk                  (_U_(0x1) << PMC_FSMR_FSTT4_Pos)               /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Mask */
#define PMC_FSMR_FSTT4                      PMC_FSMR_FSTT4_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT4_Msk instead */
#define PMC_FSMR_FSTT5_Pos                  5                                              /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Position */
#define PMC_FSMR_FSTT5_Msk                  (_U_(0x1) << PMC_FSMR_FSTT5_Pos)               /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Mask */
#define PMC_FSMR_FSTT5                      PMC_FSMR_FSTT5_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT5_Msk instead */
#define PMC_FSMR_FSTT6_Pos                  6                                              /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Position */
#define PMC_FSMR_FSTT6_Msk                  (_U_(0x1) << PMC_FSMR_FSTT6_Pos)               /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Mask */
#define PMC_FSMR_FSTT6                      PMC_FSMR_FSTT6_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT6_Msk instead */
#define PMC_FSMR_FSTT7_Pos                  7                                              /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Position */
#define PMC_FSMR_FSTT7_Msk                  (_U_(0x1) << PMC_FSMR_FSTT7_Pos)               /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Mask */
#define PMC_FSMR_FSTT7                      PMC_FSMR_FSTT7_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT7_Msk instead */
#define PMC_FSMR_FSTT8_Pos                  8                                              /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Position */
#define PMC_FSMR_FSTT8_Msk                  (_U_(0x1) << PMC_FSMR_FSTT8_Pos)               /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Mask */
#define PMC_FSMR_FSTT8                      PMC_FSMR_FSTT8_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT8_Msk instead */
#define PMC_FSMR_FSTT9_Pos                  9                                              /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Position */
#define PMC_FSMR_FSTT9_Msk                  (_U_(0x1) << PMC_FSMR_FSTT9_Pos)               /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Mask */
#define PMC_FSMR_FSTT9                      PMC_FSMR_FSTT9_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT9_Msk instead */
#define PMC_FSMR_FSTT10_Pos                 10                                             /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Position */
#define PMC_FSMR_FSTT10_Msk                 (_U_(0x1) << PMC_FSMR_FSTT10_Pos)              /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Mask */
#define PMC_FSMR_FSTT10                     PMC_FSMR_FSTT10_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_FSTT10_Msk instead */
#define PMC_FSMR_RTCAL_Pos                  17                                             /**< (PMC_FSMR) Fast Startup from RTC Alarm Enable Position */
#define PMC_FSMR_RTCAL_Msk                  (_U_(0x1) << PMC_FSMR_RTCAL_Pos)               /**< (PMC_FSMR) Fast Startup from RTC Alarm Enable Mask */
#define PMC_FSMR_RTCAL                      PMC_FSMR_RTCAL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_RTCAL_Msk instead */
#define PMC_FSMR_USBAL_Pos                  18                                             /**< (PMC_FSMR) Fast Startup from USB Resume Enable Position */
#define PMC_FSMR_USBAL_Msk                  (_U_(0x1) << PMC_FSMR_USBAL_Pos)               /**< (PMC_FSMR) Fast Startup from USB Resume Enable Mask */
#define PMC_FSMR_USBAL                      PMC_FSMR_USBAL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_USBAL_Msk instead */
#define PMC_FSMR_SDMMC_CD_Pos               19                                             /**< (PMC_FSMR) Fast Startup from SDMMC Card Detect Enable Position */
#define PMC_FSMR_SDMMC_CD_Msk               (_U_(0x1) << PMC_FSMR_SDMMC_CD_Pos)            /**< (PMC_FSMR) Fast Startup from SDMMC Card Detect Enable Mask */
#define PMC_FSMR_SDMMC_CD                   PMC_FSMR_SDMMC_CD_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_SDMMC_CD_Msk instead */
#define PMC_FSMR_LPM_Pos                    20                                             /**< (PMC_FSMR) Low-power Mode Position */
#define PMC_FSMR_LPM_Msk                    (_U_(0x1) << PMC_FSMR_LPM_Pos)                 /**< (PMC_FSMR) Low-power Mode Mask */
#define PMC_FSMR_LPM                        PMC_FSMR_LPM_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_LPM_Msk instead */
#define PMC_FSMR_RXLP_MCE_Pos               24                                             /**< (PMC_FSMR) Fast Startup from Backup UART Receive Match Condition Enable Position */
#define PMC_FSMR_RXLP_MCE_Msk               (_U_(0x1) << PMC_FSMR_RXLP_MCE_Pos)            /**< (PMC_FSMR) Fast Startup from Backup UART Receive Match Condition Enable Mask */
#define PMC_FSMR_RXLP_MCE                   PMC_FSMR_RXLP_MCE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_RXLP_MCE_Msk instead */
#define PMC_FSMR_ACC_CE_Pos                 25                                             /**< (PMC_FSMR) Fast Startup from Analog Comparator Controller Comparison Enable Position */
#define PMC_FSMR_ACC_CE_Msk                 (_U_(0x1) << PMC_FSMR_ACC_CE_Pos)              /**< (PMC_FSMR) Fast Startup from Analog Comparator Controller Comparison Enable Mask */
#define PMC_FSMR_ACC_CE                     PMC_FSMR_ACC_CE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSMR_ACC_CE_Msk instead */
#define PMC_FSMR_MASK                       _U_(0x31E07FF)                                 /**< \deprecated (PMC_FSMR) Register MASK  (Use PMC_FSMR_Msk instead)  */
#define PMC_FSMR_Msk                        _U_(0x31E07FF)                                 /**< (PMC_FSMR) Register Mask  */

#define PMC_FSMR_FSTT_Pos                   0                                              /**< (PMC_FSMR Position) Fast Startup from WKUP Pin Enable */
#define PMC_FSMR_FSTT_Msk                   (_U_(0x7FF) << PMC_FSMR_FSTT_Pos)              /**< (PMC_FSMR Mask) FSTT */
#define PMC_FSMR_FSTT(value)                (PMC_FSMR_FSTT_Msk & ((value) << PMC_FSMR_FSTT_Pos))  

/* -------- PMC_FSPR : (PMC Offset: 0x74) (R/W 32) Fast Startup Polarity Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t FSTP0:1;                   /**< bit:      0  WKUP Pin Polarity for Fast Startup       */
    uint32_t FSTP1:1;                   /**< bit:      1  Security Module Polarity for Fast Startup */
    uint32_t FSTP2:1;                   /**< bit:      2  PIOBU0-7 Pin Polarity for Fast Startup   */
    uint32_t FSTP3:1;                   /**< bit:      3  PIOBU0-7 Pin Polarity for Fast Startup   */
    uint32_t FSTP4:1;                   /**< bit:      4  PIOBU0-7 Pin Polarity for Fast Startup   */
    uint32_t FSTP5:1;                   /**< bit:      5  PIOBU0-7 Pin Polarity for Fast Startup   */
    uint32_t FSTP6:1;                   /**< bit:      6  PIOBU0-7 Pin Polarity for Fast Startup   */
    uint32_t FSTP7:1;                   /**< bit:      7  PIOBU0-7 Pin Polarity for Fast Startup   */
    uint32_t FSTP8:1;                   /**< bit:      8  PIOBU0-7 Pin Polarity for Fast Startup   */
    uint32_t FSTP9:1;                   /**< bit:      9  PIOBU0-7 Pin Polarity for Fast Startup   */
    uint32_t FSTP10:1;                  /**< bit:     10  PIOBU0-7 Pin Polarity for Fast Startup   */
    uint32_t :21;                       /**< bit: 11..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t FSTP:11;                   /**< bit:  0..10  PIOBUx-7 Pin Polarity for Fast Startup   */
    uint32_t :21;                       /**< bit: 11..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_FSPR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_FSPR_OFFSET                     (0x74)                                        /**<  (PMC_FSPR) Fast Startup Polarity Register  Offset */

#define PMC_FSPR_FSTP0_Pos                  0                                              /**< (PMC_FSPR) WKUP Pin Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP0_Msk                  (_U_(0x1) << PMC_FSPR_FSTP0_Pos)               /**< (PMC_FSPR) WKUP Pin Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP0                      PMC_FSPR_FSTP0_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP0_Msk instead */
#define PMC_FSPR_FSTP1_Pos                  1                                              /**< (PMC_FSPR) Security Module Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP1_Msk                  (_U_(0x1) << PMC_FSPR_FSTP1_Pos)               /**< (PMC_FSPR) Security Module Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP1                      PMC_FSPR_FSTP1_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP1_Msk instead */
#define PMC_FSPR_FSTP2_Pos                  2                                              /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP2_Msk                  (_U_(0x1) << PMC_FSPR_FSTP2_Pos)               /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP2                      PMC_FSPR_FSTP2_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP2_Msk instead */
#define PMC_FSPR_FSTP3_Pos                  3                                              /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP3_Msk                  (_U_(0x1) << PMC_FSPR_FSTP3_Pos)               /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP3                      PMC_FSPR_FSTP3_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP3_Msk instead */
#define PMC_FSPR_FSTP4_Pos                  4                                              /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP4_Msk                  (_U_(0x1) << PMC_FSPR_FSTP4_Pos)               /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP4                      PMC_FSPR_FSTP4_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP4_Msk instead */
#define PMC_FSPR_FSTP5_Pos                  5                                              /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP5_Msk                  (_U_(0x1) << PMC_FSPR_FSTP5_Pos)               /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP5                      PMC_FSPR_FSTP5_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP5_Msk instead */
#define PMC_FSPR_FSTP6_Pos                  6                                              /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP6_Msk                  (_U_(0x1) << PMC_FSPR_FSTP6_Pos)               /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP6                      PMC_FSPR_FSTP6_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP6_Msk instead */
#define PMC_FSPR_FSTP7_Pos                  7                                              /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP7_Msk                  (_U_(0x1) << PMC_FSPR_FSTP7_Pos)               /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP7                      PMC_FSPR_FSTP7_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP7_Msk instead */
#define PMC_FSPR_FSTP8_Pos                  8                                              /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP8_Msk                  (_U_(0x1) << PMC_FSPR_FSTP8_Pos)               /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP8                      PMC_FSPR_FSTP8_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP8_Msk instead */
#define PMC_FSPR_FSTP9_Pos                  9                                              /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP9_Msk                  (_U_(0x1) << PMC_FSPR_FSTP9_Pos)               /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP9                      PMC_FSPR_FSTP9_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP9_Msk instead */
#define PMC_FSPR_FSTP10_Pos                 10                                             /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP10_Msk                 (_U_(0x1) << PMC_FSPR_FSTP10_Pos)              /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP10                     PMC_FSPR_FSTP10_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FSPR_FSTP10_Msk instead */
#define PMC_FSPR_MASK                       _U_(0x7FF)                                     /**< \deprecated (PMC_FSPR) Register MASK  (Use PMC_FSPR_Msk instead)  */
#define PMC_FSPR_Msk                        _U_(0x7FF)                                     /**< (PMC_FSPR) Register Mask  */

#define PMC_FSPR_FSTP_Pos                   0                                              /**< (PMC_FSPR Position) PIOBUx-7 Pin Polarity for Fast Startup */
#define PMC_FSPR_FSTP_Msk                   (_U_(0x7FF) << PMC_FSPR_FSTP_Pos)              /**< (PMC_FSPR Mask) FSTP */
#define PMC_FSPR_FSTP(value)                (PMC_FSPR_FSTP_Msk & ((value) << PMC_FSPR_FSTP_Pos))  

/* -------- PMC_FOCR : (PMC Offset: 0x78) (/W 32) Fault Output Clear Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t FOCLR:1;                   /**< bit:      0  Fault Output Clear                       */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PMC_FOCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_FOCR_OFFSET                     (0x78)                                        /**<  (PMC_FOCR) Fault Output Clear Register  Offset */

#define PMC_FOCR_FOCLR_Pos                  0                                              /**< (PMC_FOCR) Fault Output Clear Position */
#define PMC_FOCR_FOCLR_Msk                  (_U_(0x1) << PMC_FOCR_FOCLR_Pos)               /**< (PMC_FOCR) Fault Output Clear Mask */
#define PMC_FOCR_FOCLR                      PMC_FOCR_FOCLR_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_FOCR_FOCLR_Msk instead */
#define PMC_FOCR_MASK                       _U_(0x01)                                      /**< \deprecated (PMC_FOCR) Register MASK  (Use PMC_FOCR_Msk instead)  */
#define PMC_FOCR_Msk                        _U_(0x01)                                      /**< (PMC_FOCR) Register Mask  */


/* -------- PMC_PLLICPR : (PMC Offset: 0x80) (R/W 32) PLL Charge Pump Current Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ICP_PLLA:2;                /**< bit:   0..1  Charge Pump Current                      */
    uint32_t :14;                       /**< bit:  2..15  Reserved */
    uint32_t ICP_PLLU:2;                /**< bit: 16..17  Charge Pump Current PLL UTMI             */
    uint32_t :6;                        /**< bit: 18..23  Reserved */
    uint32_t IVCO_PLLU:2;               /**< bit: 24..25  Voltage Control Output Current PLL UTMI  */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PMC_PLLICPR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_PLLICPR_OFFSET                  (0x80)                                        /**<  (PMC_PLLICPR) PLL Charge Pump Current Register  Offset */

#define PMC_PLLICPR_ICP_PLLA_Pos            0                                              /**< (PMC_PLLICPR) Charge Pump Current Position */
#define PMC_PLLICPR_ICP_PLLA_Msk            (_U_(0x3) << PMC_PLLICPR_ICP_PLLA_Pos)         /**< (PMC_PLLICPR) Charge Pump Current Mask */
#define PMC_PLLICPR_ICP_PLLA(value)         (PMC_PLLICPR_ICP_PLLA_Msk & ((value) << PMC_PLLICPR_ICP_PLLA_Pos))
#define PMC_PLLICPR_ICP_PLLU_Pos            16                                             /**< (PMC_PLLICPR) Charge Pump Current PLL UTMI Position */
#define PMC_PLLICPR_ICP_PLLU_Msk            (_U_(0x3) << PMC_PLLICPR_ICP_PLLU_Pos)         /**< (PMC_PLLICPR) Charge Pump Current PLL UTMI Mask */
#define PMC_PLLICPR_ICP_PLLU(value)         (PMC_PLLICPR_ICP_PLLU_Msk & ((value) << PMC_PLLICPR_ICP_PLLU_Pos))
#define PMC_PLLICPR_IVCO_PLLU_Pos           24                                             /**< (PMC_PLLICPR) Voltage Control Output Current PLL UTMI Position */
#define PMC_PLLICPR_IVCO_PLLU_Msk           (_U_(0x3) << PMC_PLLICPR_IVCO_PLLU_Pos)        /**< (PMC_PLLICPR) Voltage Control Output Current PLL UTMI Mask */
#define PMC_PLLICPR_IVCO_PLLU(value)        (PMC_PLLICPR_IVCO_PLLU_Msk & ((value) << PMC_PLLICPR_IVCO_PLLU_Pos))
#define PMC_PLLICPR_MASK                    _U_(0x3030003)                                 /**< \deprecated (PMC_PLLICPR) Register MASK  (Use PMC_PLLICPR_Msk instead)  */
#define PMC_PLLICPR_Msk                     _U_(0x3030003)                                 /**< (PMC_PLLICPR) Register Mask  */


/* -------- PMC_WPMR : (PMC Offset: 0xe4) (R/W 32) Write ProtectIon Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPEN:1;                    /**< bit:      0  Write Protection Enable                  */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPKEY:24;                  /**< bit:  8..31  Write Protection Key                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PMC_WPMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_WPMR_OFFSET                     (0xE4)                                        /**<  (PMC_WPMR) Write ProtectIon Mode Register  Offset */

#define PMC_WPMR_WPEN_Pos                   0                                              /**< (PMC_WPMR) Write Protection Enable Position */
#define PMC_WPMR_WPEN_Msk                   (_U_(0x1) << PMC_WPMR_WPEN_Pos)                /**< (PMC_WPMR) Write Protection Enable Mask */
#define PMC_WPMR_WPEN                       PMC_WPMR_WPEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_WPMR_WPEN_Msk instead */
#define PMC_WPMR_WPKEY_Pos                  8                                              /**< (PMC_WPMR) Write Protection Key Position */
#define PMC_WPMR_WPKEY_Msk                  (_U_(0xFFFFFF) << PMC_WPMR_WPKEY_Pos)          /**< (PMC_WPMR) Write Protection Key Mask */
#define PMC_WPMR_WPKEY(value)               (PMC_WPMR_WPKEY_Msk & ((value) << PMC_WPMR_WPKEY_Pos))
#define   PMC_WPMR_WPKEY_PASSWD_Val         _U_(0x504D43)                                  /**< (PMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0.  */
#define PMC_WPMR_WPKEY_PASSWD               (PMC_WPMR_WPKEY_PASSWD_Val << PMC_WPMR_WPKEY_Pos)  /**< (PMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0. Position  */
#define PMC_WPMR_MASK                       _U_(0xFFFFFF01)                                /**< \deprecated (PMC_WPMR) Register MASK  (Use PMC_WPMR_Msk instead)  */
#define PMC_WPMR_Msk                        _U_(0xFFFFFF01)                                /**< (PMC_WPMR) Register Mask  */


/* -------- PMC_WPSR : (PMC Offset: 0xe8) (R/ 32) Write Protection Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPVS:1;                    /**< bit:      0  Write Protection Violation Status        */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPVSRC:16;                 /**< bit:  8..23  Write Protection Violation Source        */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PMC_WPSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_WPSR_OFFSET                     (0xE8)                                        /**<  (PMC_WPSR) Write Protection Status Register  Offset */

#define PMC_WPSR_WPVS_Pos                   0                                              /**< (PMC_WPSR) Write Protection Violation Status Position */
#define PMC_WPSR_WPVS_Msk                   (_U_(0x1) << PMC_WPSR_WPVS_Pos)                /**< (PMC_WPSR) Write Protection Violation Status Mask */
#define PMC_WPSR_WPVS                       PMC_WPSR_WPVS_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_WPSR_WPVS_Msk instead */
#define PMC_WPSR_WPVSRC_Pos                 8                                              /**< (PMC_WPSR) Write Protection Violation Source Position */
#define PMC_WPSR_WPVSRC_Msk                 (_U_(0xFFFF) << PMC_WPSR_WPVSRC_Pos)           /**< (PMC_WPSR) Write Protection Violation Source Mask */
#define PMC_WPSR_WPVSRC(value)              (PMC_WPSR_WPVSRC_Msk & ((value) << PMC_WPSR_WPVSRC_Pos))
#define PMC_WPSR_MASK                       _U_(0xFFFF01)                                  /**< \deprecated (PMC_WPSR) Register MASK  (Use PMC_WPSR_Msk instead)  */
#define PMC_WPSR_Msk                        _U_(0xFFFF01)                                  /**< (PMC_WPSR) Register Mask  */


/* -------- PMC_PCER1 : (PMC Offset: 0x100) (/W 32) Peripheral Clock Enable Register 1 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PID32:1;                   /**< bit:      0  Peripheral Clock 32 Enable               */
    uint32_t PID33:1;                   /**< bit:      1  Peripheral Clock 33 Enable               */
    uint32_t PID34:1;                   /**< bit:      2  Peripheral Clock 34 Enable               */
    uint32_t PID35:1;                   /**< bit:      3  Peripheral Clock 35 Enable               */
    uint32_t PID36:1;                   /**< bit:      4  Peripheral Clock 36 Enable               */
    uint32_t PID37:1;                   /**< bit:      5  Peripheral Clock 37 Enable               */
    uint32_t PID38:1;                   /**< bit:      6  Peripheral Clock 38 Enable               */
    uint32_t PID39:1;                   /**< bit:      7  Peripheral Clock 39 Enable               */
    uint32_t PID40:1;                   /**< bit:      8  Peripheral Clock 40 Enable               */
    uint32_t PID41:1;                   /**< bit:      9  Peripheral Clock 41 Enable               */
    uint32_t PID42:1;                   /**< bit:     10  Peripheral Clock 42 Enable               */
    uint32_t PID43:1;                   /**< bit:     11  Peripheral Clock 43 Enable               */
    uint32_t PID44:1;                   /**< bit:     12  Peripheral Clock 44 Enable               */
    uint32_t PID45:1;                   /**< bit:     13  Peripheral Clock 45 Enable               */
    uint32_t PID46:1;                   /**< bit:     14  Peripheral Clock 46 Enable               */
    uint32_t PID47:1;                   /**< bit:     15  Peripheral Clock 47 Enable               */
    uint32_t PID48:1;                   /**< bit:     16  Peripheral Clock 48 Enable               */
    uint32_t PID49:1;                   /**< bit:     17  Peripheral Clock 49 Enable               */
    uint32_t PID50:1;                   /**< bit:     18  Peripheral Clock 50 Enable               */
    uint32_t PID51:1;                   /**< bit:     19  Peripheral Clock 51 Enable               */
    uint32_t PID52:1;                   /**< bit:     20  Peripheral Clock 52 Enable               */
    uint32_t PID53:1;                   /**< bit:     21  Peripheral Clock 53 Enable               */
    uint32_t PID54:1;                   /**< bit:     22  Peripheral Clock 54 Enable               */
    uint32_t PID55:1;                   /**< bit:     23  Peripheral Clock 55 Enable               */
    uint32_t PID56:1;                   /**< bit:     24  Peripheral Clock 56 Enable               */
    uint32_t PID57:1;                   /**< bit:     25  Peripheral Clock 57 Enable               */
    uint32_t PID58:1;                   /**< bit:     26  Peripheral Clock 58 Enable               */
    uint32_t PID59:1;                   /**< bit:     27  Peripheral Clock 59 Enable               */
    uint32_t PID60:1;                   /**< bit:     28  Peripheral Clock 60 Enable               */
    uint32_t PID61:1;                   /**< bit:     29  Peripheral Clock 61 Enable               */
    uint32_t PID62:1;                   /**< bit:     30  Peripheral Clock 62 Enable               */
    uint32_t PID63:1;                   /**< bit:     31  Peripheral Clock 63 Enable               */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t PID:32;                    /**< bit:  0..31  Peripheral Clock 63 Enable               */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_PCER1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_PCER1_OFFSET                    (0x100)                                       /**<  (PMC_PCER1) Peripheral Clock Enable Register 1  Offset */

#define PMC_PCER1_PID32_Pos                 0                                              /**< (PMC_PCER1) Peripheral Clock 32 Enable Position */
#define PMC_PCER1_PID32_Msk                 (_U_(0x1) << PMC_PCER1_PID32_Pos)              /**< (PMC_PCER1) Peripheral Clock 32 Enable Mask */
#define PMC_PCER1_PID32                     PMC_PCER1_PID32_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID32_Msk instead */
#define PMC_PCER1_PID33_Pos                 1                                              /**< (PMC_PCER1) Peripheral Clock 33 Enable Position */
#define PMC_PCER1_PID33_Msk                 (_U_(0x1) << PMC_PCER1_PID33_Pos)              /**< (PMC_PCER1) Peripheral Clock 33 Enable Mask */
#define PMC_PCER1_PID33                     PMC_PCER1_PID33_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID33_Msk instead */
#define PMC_PCER1_PID34_Pos                 2                                              /**< (PMC_PCER1) Peripheral Clock 34 Enable Position */
#define PMC_PCER1_PID34_Msk                 (_U_(0x1) << PMC_PCER1_PID34_Pos)              /**< (PMC_PCER1) Peripheral Clock 34 Enable Mask */
#define PMC_PCER1_PID34                     PMC_PCER1_PID34_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID34_Msk instead */
#define PMC_PCER1_PID35_Pos                 3                                              /**< (PMC_PCER1) Peripheral Clock 35 Enable Position */
#define PMC_PCER1_PID35_Msk                 (_U_(0x1) << PMC_PCER1_PID35_Pos)              /**< (PMC_PCER1) Peripheral Clock 35 Enable Mask */
#define PMC_PCER1_PID35                     PMC_PCER1_PID35_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID35_Msk instead */
#define PMC_PCER1_PID36_Pos                 4                                              /**< (PMC_PCER1) Peripheral Clock 36 Enable Position */
#define PMC_PCER1_PID36_Msk                 (_U_(0x1) << PMC_PCER1_PID36_Pos)              /**< (PMC_PCER1) Peripheral Clock 36 Enable Mask */
#define PMC_PCER1_PID36                     PMC_PCER1_PID36_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID36_Msk instead */
#define PMC_PCER1_PID37_Pos                 5                                              /**< (PMC_PCER1) Peripheral Clock 37 Enable Position */
#define PMC_PCER1_PID37_Msk                 (_U_(0x1) << PMC_PCER1_PID37_Pos)              /**< (PMC_PCER1) Peripheral Clock 37 Enable Mask */
#define PMC_PCER1_PID37                     PMC_PCER1_PID37_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID37_Msk instead */
#define PMC_PCER1_PID38_Pos                 6                                              /**< (PMC_PCER1) Peripheral Clock 38 Enable Position */
#define PMC_PCER1_PID38_Msk                 (_U_(0x1) << PMC_PCER1_PID38_Pos)              /**< (PMC_PCER1) Peripheral Clock 38 Enable Mask */
#define PMC_PCER1_PID38                     PMC_PCER1_PID38_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID38_Msk instead */
#define PMC_PCER1_PID39_Pos                 7                                              /**< (PMC_PCER1) Peripheral Clock 39 Enable Position */
#define PMC_PCER1_PID39_Msk                 (_U_(0x1) << PMC_PCER1_PID39_Pos)              /**< (PMC_PCER1) Peripheral Clock 39 Enable Mask */
#define PMC_PCER1_PID39                     PMC_PCER1_PID39_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID39_Msk instead */
#define PMC_PCER1_PID40_Pos                 8                                              /**< (PMC_PCER1) Peripheral Clock 40 Enable Position */
#define PMC_PCER1_PID40_Msk                 (_U_(0x1) << PMC_PCER1_PID40_Pos)              /**< (PMC_PCER1) Peripheral Clock 40 Enable Mask */
#define PMC_PCER1_PID40                     PMC_PCER1_PID40_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID40_Msk instead */
#define PMC_PCER1_PID41_Pos                 9                                              /**< (PMC_PCER1) Peripheral Clock 41 Enable Position */
#define PMC_PCER1_PID41_Msk                 (_U_(0x1) << PMC_PCER1_PID41_Pos)              /**< (PMC_PCER1) Peripheral Clock 41 Enable Mask */
#define PMC_PCER1_PID41                     PMC_PCER1_PID41_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID41_Msk instead */
#define PMC_PCER1_PID42_Pos                 10                                             /**< (PMC_PCER1) Peripheral Clock 42 Enable Position */
#define PMC_PCER1_PID42_Msk                 (_U_(0x1) << PMC_PCER1_PID42_Pos)              /**< (PMC_PCER1) Peripheral Clock 42 Enable Mask */
#define PMC_PCER1_PID42                     PMC_PCER1_PID42_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID42_Msk instead */
#define PMC_PCER1_PID43_Pos                 11                                             /**< (PMC_PCER1) Peripheral Clock 43 Enable Position */
#define PMC_PCER1_PID43_Msk                 (_U_(0x1) << PMC_PCER1_PID43_Pos)              /**< (PMC_PCER1) Peripheral Clock 43 Enable Mask */
#define PMC_PCER1_PID43                     PMC_PCER1_PID43_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID43_Msk instead */
#define PMC_PCER1_PID44_Pos                 12                                             /**< (PMC_PCER1) Peripheral Clock 44 Enable Position */
#define PMC_PCER1_PID44_Msk                 (_U_(0x1) << PMC_PCER1_PID44_Pos)              /**< (PMC_PCER1) Peripheral Clock 44 Enable Mask */
#define PMC_PCER1_PID44                     PMC_PCER1_PID44_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID44_Msk instead */
#define PMC_PCER1_PID45_Pos                 13                                             /**< (PMC_PCER1) Peripheral Clock 45 Enable Position */
#define PMC_PCER1_PID45_Msk                 (_U_(0x1) << PMC_PCER1_PID45_Pos)              /**< (PMC_PCER1) Peripheral Clock 45 Enable Mask */
#define PMC_PCER1_PID45                     PMC_PCER1_PID45_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID45_Msk instead */
#define PMC_PCER1_PID46_Pos                 14                                             /**< (PMC_PCER1) Peripheral Clock 46 Enable Position */
#define PMC_PCER1_PID46_Msk                 (_U_(0x1) << PMC_PCER1_PID46_Pos)              /**< (PMC_PCER1) Peripheral Clock 46 Enable Mask */
#define PMC_PCER1_PID46                     PMC_PCER1_PID46_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID46_Msk instead */
#define PMC_PCER1_PID47_Pos                 15                                             /**< (PMC_PCER1) Peripheral Clock 47 Enable Position */
#define PMC_PCER1_PID47_Msk                 (_U_(0x1) << PMC_PCER1_PID47_Pos)              /**< (PMC_PCER1) Peripheral Clock 47 Enable Mask */
#define PMC_PCER1_PID47                     PMC_PCER1_PID47_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID47_Msk instead */
#define PMC_PCER1_PID48_Pos                 16                                             /**< (PMC_PCER1) Peripheral Clock 48 Enable Position */
#define PMC_PCER1_PID48_Msk                 (_U_(0x1) << PMC_PCER1_PID48_Pos)              /**< (PMC_PCER1) Peripheral Clock 48 Enable Mask */
#define PMC_PCER1_PID48                     PMC_PCER1_PID48_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID48_Msk instead */
#define PMC_PCER1_PID49_Pos                 17                                             /**< (PMC_PCER1) Peripheral Clock 49 Enable Position */
#define PMC_PCER1_PID49_Msk                 (_U_(0x1) << PMC_PCER1_PID49_Pos)              /**< (PMC_PCER1) Peripheral Clock 49 Enable Mask */
#define PMC_PCER1_PID49                     PMC_PCER1_PID49_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID49_Msk instead */
#define PMC_PCER1_PID50_Pos                 18                                             /**< (PMC_PCER1) Peripheral Clock 50 Enable Position */
#define PMC_PCER1_PID50_Msk                 (_U_(0x1) << PMC_PCER1_PID50_Pos)              /**< (PMC_PCER1) Peripheral Clock 50 Enable Mask */
#define PMC_PCER1_PID50                     PMC_PCER1_PID50_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID50_Msk instead */
#define PMC_PCER1_PID51_Pos                 19                                             /**< (PMC_PCER1) Peripheral Clock 51 Enable Position */
#define PMC_PCER1_PID51_Msk                 (_U_(0x1) << PMC_PCER1_PID51_Pos)              /**< (PMC_PCER1) Peripheral Clock 51 Enable Mask */
#define PMC_PCER1_PID51                     PMC_PCER1_PID51_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID51_Msk instead */
#define PMC_PCER1_PID52_Pos                 20                                             /**< (PMC_PCER1) Peripheral Clock 52 Enable Position */
#define PMC_PCER1_PID52_Msk                 (_U_(0x1) << PMC_PCER1_PID52_Pos)              /**< (PMC_PCER1) Peripheral Clock 52 Enable Mask */
#define PMC_PCER1_PID52                     PMC_PCER1_PID52_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID52_Msk instead */
#define PMC_PCER1_PID53_Pos                 21                                             /**< (PMC_PCER1) Peripheral Clock 53 Enable Position */
#define PMC_PCER1_PID53_Msk                 (_U_(0x1) << PMC_PCER1_PID53_Pos)              /**< (PMC_PCER1) Peripheral Clock 53 Enable Mask */
#define PMC_PCER1_PID53                     PMC_PCER1_PID53_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID53_Msk instead */
#define PMC_PCER1_PID54_Pos                 22                                             /**< (PMC_PCER1) Peripheral Clock 54 Enable Position */
#define PMC_PCER1_PID54_Msk                 (_U_(0x1) << PMC_PCER1_PID54_Pos)              /**< (PMC_PCER1) Peripheral Clock 54 Enable Mask */
#define PMC_PCER1_PID54                     PMC_PCER1_PID54_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID54_Msk instead */
#define PMC_PCER1_PID55_Pos                 23                                             /**< (PMC_PCER1) Peripheral Clock 55 Enable Position */
#define PMC_PCER1_PID55_Msk                 (_U_(0x1) << PMC_PCER1_PID55_Pos)              /**< (PMC_PCER1) Peripheral Clock 55 Enable Mask */
#define PMC_PCER1_PID55                     PMC_PCER1_PID55_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID55_Msk instead */
#define PMC_PCER1_PID56_Pos                 24                                             /**< (PMC_PCER1) Peripheral Clock 56 Enable Position */
#define PMC_PCER1_PID56_Msk                 (_U_(0x1) << PMC_PCER1_PID56_Pos)              /**< (PMC_PCER1) Peripheral Clock 56 Enable Mask */
#define PMC_PCER1_PID56                     PMC_PCER1_PID56_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID56_Msk instead */
#define PMC_PCER1_PID57_Pos                 25                                             /**< (PMC_PCER1) Peripheral Clock 57 Enable Position */
#define PMC_PCER1_PID57_Msk                 (_U_(0x1) << PMC_PCER1_PID57_Pos)              /**< (PMC_PCER1) Peripheral Clock 57 Enable Mask */
#define PMC_PCER1_PID57                     PMC_PCER1_PID57_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID57_Msk instead */
#define PMC_PCER1_PID58_Pos                 26                                             /**< (PMC_PCER1) Peripheral Clock 58 Enable Position */
#define PMC_PCER1_PID58_Msk                 (_U_(0x1) << PMC_PCER1_PID58_Pos)              /**< (PMC_PCER1) Peripheral Clock 58 Enable Mask */
#define PMC_PCER1_PID58                     PMC_PCER1_PID58_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID58_Msk instead */
#define PMC_PCER1_PID59_Pos                 27                                             /**< (PMC_PCER1) Peripheral Clock 59 Enable Position */
#define PMC_PCER1_PID59_Msk                 (_U_(0x1) << PMC_PCER1_PID59_Pos)              /**< (PMC_PCER1) Peripheral Clock 59 Enable Mask */
#define PMC_PCER1_PID59                     PMC_PCER1_PID59_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID59_Msk instead */
#define PMC_PCER1_PID60_Pos                 28                                             /**< (PMC_PCER1) Peripheral Clock 60 Enable Position */
#define PMC_PCER1_PID60_Msk                 (_U_(0x1) << PMC_PCER1_PID60_Pos)              /**< (PMC_PCER1) Peripheral Clock 60 Enable Mask */
#define PMC_PCER1_PID60                     PMC_PCER1_PID60_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID60_Msk instead */
#define PMC_PCER1_PID61_Pos                 29                                             /**< (PMC_PCER1) Peripheral Clock 61 Enable Position */
#define PMC_PCER1_PID61_Msk                 (_U_(0x1) << PMC_PCER1_PID61_Pos)              /**< (PMC_PCER1) Peripheral Clock 61 Enable Mask */
#define PMC_PCER1_PID61                     PMC_PCER1_PID61_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID61_Msk instead */
#define PMC_PCER1_PID62_Pos                 30                                             /**< (PMC_PCER1) Peripheral Clock 62 Enable Position */
#define PMC_PCER1_PID62_Msk                 (_U_(0x1) << PMC_PCER1_PID62_Pos)              /**< (PMC_PCER1) Peripheral Clock 62 Enable Mask */
#define PMC_PCER1_PID62                     PMC_PCER1_PID62_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID62_Msk instead */
#define PMC_PCER1_PID63_Pos                 31                                             /**< (PMC_PCER1) Peripheral Clock 63 Enable Position */
#define PMC_PCER1_PID63_Msk                 (_U_(0x1) << PMC_PCER1_PID63_Pos)              /**< (PMC_PCER1) Peripheral Clock 63 Enable Mask */
#define PMC_PCER1_PID63                     PMC_PCER1_PID63_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCER1_PID63_Msk instead */
#define PMC_PCER1_MASK                      _U_(0xFFFFFFFF)                                /**< \deprecated (PMC_PCER1) Register MASK  (Use PMC_PCER1_Msk instead)  */
#define PMC_PCER1_Msk                       _U_(0xFFFFFFFF)                                /**< (PMC_PCER1) Register Mask  */

#define PMC_PCER1_PID_Pos                   0                                              /**< (PMC_PCER1 Position) Peripheral Clock 63 Enable */
#define PMC_PCER1_PID_Msk                   (_U_(0xFFFFFFFF) << PMC_PCER1_PID_Pos)         /**< (PMC_PCER1 Mask) PID */
#define PMC_PCER1_PID(value)                (PMC_PCER1_PID_Msk & ((value) << PMC_PCER1_PID_Pos))  

/* -------- PMC_PCDR1 : (PMC Offset: 0x104) (/W 32) Peripheral Clock Disable Register 1 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PID32:1;                   /**< bit:      0  Peripheral Clock 32 Disable              */
    uint32_t PID33:1;                   /**< bit:      1  Peripheral Clock 33 Disable              */
    uint32_t PID34:1;                   /**< bit:      2  Peripheral Clock 34 Disable              */
    uint32_t PID35:1;                   /**< bit:      3  Peripheral Clock 35 Disable              */
    uint32_t PID36:1;                   /**< bit:      4  Peripheral Clock 36 Disable              */
    uint32_t PID37:1;                   /**< bit:      5  Peripheral Clock 37 Disable              */
    uint32_t PID38:1;                   /**< bit:      6  Peripheral Clock 38 Disable              */
    uint32_t PID39:1;                   /**< bit:      7  Peripheral Clock 39 Disable              */
    uint32_t PID40:1;                   /**< bit:      8  Peripheral Clock 40 Disable              */
    uint32_t PID41:1;                   /**< bit:      9  Peripheral Clock 41 Disable              */
    uint32_t PID42:1;                   /**< bit:     10  Peripheral Clock 42 Disable              */
    uint32_t PID43:1;                   /**< bit:     11  Peripheral Clock 43 Disable              */
    uint32_t PID44:1;                   /**< bit:     12  Peripheral Clock 44 Disable              */
    uint32_t PID45:1;                   /**< bit:     13  Peripheral Clock 45 Disable              */
    uint32_t PID46:1;                   /**< bit:     14  Peripheral Clock 46 Disable              */
    uint32_t PID47:1;                   /**< bit:     15  Peripheral Clock 47 Disable              */
    uint32_t PID48:1;                   /**< bit:     16  Peripheral Clock 48 Disable              */
    uint32_t PID49:1;                   /**< bit:     17  Peripheral Clock 49 Disable              */
    uint32_t PID50:1;                   /**< bit:     18  Peripheral Clock 50 Disable              */
    uint32_t PID51:1;                   /**< bit:     19  Peripheral Clock 51 Disable              */
    uint32_t PID52:1;                   /**< bit:     20  Peripheral Clock 52 Disable              */
    uint32_t PID53:1;                   /**< bit:     21  Peripheral Clock 53 Disable              */
    uint32_t PID54:1;                   /**< bit:     22  Peripheral Clock 54 Disable              */
    uint32_t PID55:1;                   /**< bit:     23  Peripheral Clock 55 Disable              */
    uint32_t PID56:1;                   /**< bit:     24  Peripheral Clock 56 Disable              */
    uint32_t PID57:1;                   /**< bit:     25  Peripheral Clock 57 Disable              */
    uint32_t PID58:1;                   /**< bit:     26  Peripheral Clock 58 Disable              */
    uint32_t PID59:1;                   /**< bit:     27  Peripheral Clock 59 Disable              */
    uint32_t PID60:1;                   /**< bit:     28  Peripheral Clock 60 Disable              */
    uint32_t PID61:1;                   /**< bit:     29  Peripheral Clock 61 Disable              */
    uint32_t PID62:1;                   /**< bit:     30  Peripheral Clock 62 Disable              */
    uint32_t PID63:1;                   /**< bit:     31  Peripheral Clock 63 Disable              */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t PID:32;                    /**< bit:  0..31  Peripheral Clock 63 Disable              */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_PCDR1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_PCDR1_OFFSET                    (0x104)                                       /**<  (PMC_PCDR1) Peripheral Clock Disable Register 1  Offset */

#define PMC_PCDR1_PID32_Pos                 0                                              /**< (PMC_PCDR1) Peripheral Clock 32 Disable Position */
#define PMC_PCDR1_PID32_Msk                 (_U_(0x1) << PMC_PCDR1_PID32_Pos)              /**< (PMC_PCDR1) Peripheral Clock 32 Disable Mask */
#define PMC_PCDR1_PID32                     PMC_PCDR1_PID32_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID32_Msk instead */
#define PMC_PCDR1_PID33_Pos                 1                                              /**< (PMC_PCDR1) Peripheral Clock 33 Disable Position */
#define PMC_PCDR1_PID33_Msk                 (_U_(0x1) << PMC_PCDR1_PID33_Pos)              /**< (PMC_PCDR1) Peripheral Clock 33 Disable Mask */
#define PMC_PCDR1_PID33                     PMC_PCDR1_PID33_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID33_Msk instead */
#define PMC_PCDR1_PID34_Pos                 2                                              /**< (PMC_PCDR1) Peripheral Clock 34 Disable Position */
#define PMC_PCDR1_PID34_Msk                 (_U_(0x1) << PMC_PCDR1_PID34_Pos)              /**< (PMC_PCDR1) Peripheral Clock 34 Disable Mask */
#define PMC_PCDR1_PID34                     PMC_PCDR1_PID34_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID34_Msk instead */
#define PMC_PCDR1_PID35_Pos                 3                                              /**< (PMC_PCDR1) Peripheral Clock 35 Disable Position */
#define PMC_PCDR1_PID35_Msk                 (_U_(0x1) << PMC_PCDR1_PID35_Pos)              /**< (PMC_PCDR1) Peripheral Clock 35 Disable Mask */
#define PMC_PCDR1_PID35                     PMC_PCDR1_PID35_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID35_Msk instead */
#define PMC_PCDR1_PID36_Pos                 4                                              /**< (PMC_PCDR1) Peripheral Clock 36 Disable Position */
#define PMC_PCDR1_PID36_Msk                 (_U_(0x1) << PMC_PCDR1_PID36_Pos)              /**< (PMC_PCDR1) Peripheral Clock 36 Disable Mask */
#define PMC_PCDR1_PID36                     PMC_PCDR1_PID36_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID36_Msk instead */
#define PMC_PCDR1_PID37_Pos                 5                                              /**< (PMC_PCDR1) Peripheral Clock 37 Disable Position */
#define PMC_PCDR1_PID37_Msk                 (_U_(0x1) << PMC_PCDR1_PID37_Pos)              /**< (PMC_PCDR1) Peripheral Clock 37 Disable Mask */
#define PMC_PCDR1_PID37                     PMC_PCDR1_PID37_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID37_Msk instead */
#define PMC_PCDR1_PID38_Pos                 6                                              /**< (PMC_PCDR1) Peripheral Clock 38 Disable Position */
#define PMC_PCDR1_PID38_Msk                 (_U_(0x1) << PMC_PCDR1_PID38_Pos)              /**< (PMC_PCDR1) Peripheral Clock 38 Disable Mask */
#define PMC_PCDR1_PID38                     PMC_PCDR1_PID38_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID38_Msk instead */
#define PMC_PCDR1_PID39_Pos                 7                                              /**< (PMC_PCDR1) Peripheral Clock 39 Disable Position */
#define PMC_PCDR1_PID39_Msk                 (_U_(0x1) << PMC_PCDR1_PID39_Pos)              /**< (PMC_PCDR1) Peripheral Clock 39 Disable Mask */
#define PMC_PCDR1_PID39                     PMC_PCDR1_PID39_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID39_Msk instead */
#define PMC_PCDR1_PID40_Pos                 8                                              /**< (PMC_PCDR1) Peripheral Clock 40 Disable Position */
#define PMC_PCDR1_PID40_Msk                 (_U_(0x1) << PMC_PCDR1_PID40_Pos)              /**< (PMC_PCDR1) Peripheral Clock 40 Disable Mask */
#define PMC_PCDR1_PID40                     PMC_PCDR1_PID40_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID40_Msk instead */
#define PMC_PCDR1_PID41_Pos                 9                                              /**< (PMC_PCDR1) Peripheral Clock 41 Disable Position */
#define PMC_PCDR1_PID41_Msk                 (_U_(0x1) << PMC_PCDR1_PID41_Pos)              /**< (PMC_PCDR1) Peripheral Clock 41 Disable Mask */
#define PMC_PCDR1_PID41                     PMC_PCDR1_PID41_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID41_Msk instead */
#define PMC_PCDR1_PID42_Pos                 10                                             /**< (PMC_PCDR1) Peripheral Clock 42 Disable Position */
#define PMC_PCDR1_PID42_Msk                 (_U_(0x1) << PMC_PCDR1_PID42_Pos)              /**< (PMC_PCDR1) Peripheral Clock 42 Disable Mask */
#define PMC_PCDR1_PID42                     PMC_PCDR1_PID42_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID42_Msk instead */
#define PMC_PCDR1_PID43_Pos                 11                                             /**< (PMC_PCDR1) Peripheral Clock 43 Disable Position */
#define PMC_PCDR1_PID43_Msk                 (_U_(0x1) << PMC_PCDR1_PID43_Pos)              /**< (PMC_PCDR1) Peripheral Clock 43 Disable Mask */
#define PMC_PCDR1_PID43                     PMC_PCDR1_PID43_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID43_Msk instead */
#define PMC_PCDR1_PID44_Pos                 12                                             /**< (PMC_PCDR1) Peripheral Clock 44 Disable Position */
#define PMC_PCDR1_PID44_Msk                 (_U_(0x1) << PMC_PCDR1_PID44_Pos)              /**< (PMC_PCDR1) Peripheral Clock 44 Disable Mask */
#define PMC_PCDR1_PID44                     PMC_PCDR1_PID44_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID44_Msk instead */
#define PMC_PCDR1_PID45_Pos                 13                                             /**< (PMC_PCDR1) Peripheral Clock 45 Disable Position */
#define PMC_PCDR1_PID45_Msk                 (_U_(0x1) << PMC_PCDR1_PID45_Pos)              /**< (PMC_PCDR1) Peripheral Clock 45 Disable Mask */
#define PMC_PCDR1_PID45                     PMC_PCDR1_PID45_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID45_Msk instead */
#define PMC_PCDR1_PID46_Pos                 14                                             /**< (PMC_PCDR1) Peripheral Clock 46 Disable Position */
#define PMC_PCDR1_PID46_Msk                 (_U_(0x1) << PMC_PCDR1_PID46_Pos)              /**< (PMC_PCDR1) Peripheral Clock 46 Disable Mask */
#define PMC_PCDR1_PID46                     PMC_PCDR1_PID46_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID46_Msk instead */
#define PMC_PCDR1_PID47_Pos                 15                                             /**< (PMC_PCDR1) Peripheral Clock 47 Disable Position */
#define PMC_PCDR1_PID47_Msk                 (_U_(0x1) << PMC_PCDR1_PID47_Pos)              /**< (PMC_PCDR1) Peripheral Clock 47 Disable Mask */
#define PMC_PCDR1_PID47                     PMC_PCDR1_PID47_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID47_Msk instead */
#define PMC_PCDR1_PID48_Pos                 16                                             /**< (PMC_PCDR1) Peripheral Clock 48 Disable Position */
#define PMC_PCDR1_PID48_Msk                 (_U_(0x1) << PMC_PCDR1_PID48_Pos)              /**< (PMC_PCDR1) Peripheral Clock 48 Disable Mask */
#define PMC_PCDR1_PID48                     PMC_PCDR1_PID48_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID48_Msk instead */
#define PMC_PCDR1_PID49_Pos                 17                                             /**< (PMC_PCDR1) Peripheral Clock 49 Disable Position */
#define PMC_PCDR1_PID49_Msk                 (_U_(0x1) << PMC_PCDR1_PID49_Pos)              /**< (PMC_PCDR1) Peripheral Clock 49 Disable Mask */
#define PMC_PCDR1_PID49                     PMC_PCDR1_PID49_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID49_Msk instead */
#define PMC_PCDR1_PID50_Pos                 18                                             /**< (PMC_PCDR1) Peripheral Clock 50 Disable Position */
#define PMC_PCDR1_PID50_Msk                 (_U_(0x1) << PMC_PCDR1_PID50_Pos)              /**< (PMC_PCDR1) Peripheral Clock 50 Disable Mask */
#define PMC_PCDR1_PID50                     PMC_PCDR1_PID50_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID50_Msk instead */
#define PMC_PCDR1_PID51_Pos                 19                                             /**< (PMC_PCDR1) Peripheral Clock 51 Disable Position */
#define PMC_PCDR1_PID51_Msk                 (_U_(0x1) << PMC_PCDR1_PID51_Pos)              /**< (PMC_PCDR1) Peripheral Clock 51 Disable Mask */
#define PMC_PCDR1_PID51                     PMC_PCDR1_PID51_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID51_Msk instead */
#define PMC_PCDR1_PID52_Pos                 20                                             /**< (PMC_PCDR1) Peripheral Clock 52 Disable Position */
#define PMC_PCDR1_PID52_Msk                 (_U_(0x1) << PMC_PCDR1_PID52_Pos)              /**< (PMC_PCDR1) Peripheral Clock 52 Disable Mask */
#define PMC_PCDR1_PID52                     PMC_PCDR1_PID52_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID52_Msk instead */
#define PMC_PCDR1_PID53_Pos                 21                                             /**< (PMC_PCDR1) Peripheral Clock 53 Disable Position */
#define PMC_PCDR1_PID53_Msk                 (_U_(0x1) << PMC_PCDR1_PID53_Pos)              /**< (PMC_PCDR1) Peripheral Clock 53 Disable Mask */
#define PMC_PCDR1_PID53                     PMC_PCDR1_PID53_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID53_Msk instead */
#define PMC_PCDR1_PID54_Pos                 22                                             /**< (PMC_PCDR1) Peripheral Clock 54 Disable Position */
#define PMC_PCDR1_PID54_Msk                 (_U_(0x1) << PMC_PCDR1_PID54_Pos)              /**< (PMC_PCDR1) Peripheral Clock 54 Disable Mask */
#define PMC_PCDR1_PID54                     PMC_PCDR1_PID54_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID54_Msk instead */
#define PMC_PCDR1_PID55_Pos                 23                                             /**< (PMC_PCDR1) Peripheral Clock 55 Disable Position */
#define PMC_PCDR1_PID55_Msk                 (_U_(0x1) << PMC_PCDR1_PID55_Pos)              /**< (PMC_PCDR1) Peripheral Clock 55 Disable Mask */
#define PMC_PCDR1_PID55                     PMC_PCDR1_PID55_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID55_Msk instead */
#define PMC_PCDR1_PID56_Pos                 24                                             /**< (PMC_PCDR1) Peripheral Clock 56 Disable Position */
#define PMC_PCDR1_PID56_Msk                 (_U_(0x1) << PMC_PCDR1_PID56_Pos)              /**< (PMC_PCDR1) Peripheral Clock 56 Disable Mask */
#define PMC_PCDR1_PID56                     PMC_PCDR1_PID56_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID56_Msk instead */
#define PMC_PCDR1_PID57_Pos                 25                                             /**< (PMC_PCDR1) Peripheral Clock 57 Disable Position */
#define PMC_PCDR1_PID57_Msk                 (_U_(0x1) << PMC_PCDR1_PID57_Pos)              /**< (PMC_PCDR1) Peripheral Clock 57 Disable Mask */
#define PMC_PCDR1_PID57                     PMC_PCDR1_PID57_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID57_Msk instead */
#define PMC_PCDR1_PID58_Pos                 26                                             /**< (PMC_PCDR1) Peripheral Clock 58 Disable Position */
#define PMC_PCDR1_PID58_Msk                 (_U_(0x1) << PMC_PCDR1_PID58_Pos)              /**< (PMC_PCDR1) Peripheral Clock 58 Disable Mask */
#define PMC_PCDR1_PID58                     PMC_PCDR1_PID58_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID58_Msk instead */
#define PMC_PCDR1_PID59_Pos                 27                                             /**< (PMC_PCDR1) Peripheral Clock 59 Disable Position */
#define PMC_PCDR1_PID59_Msk                 (_U_(0x1) << PMC_PCDR1_PID59_Pos)              /**< (PMC_PCDR1) Peripheral Clock 59 Disable Mask */
#define PMC_PCDR1_PID59                     PMC_PCDR1_PID59_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID59_Msk instead */
#define PMC_PCDR1_PID60_Pos                 28                                             /**< (PMC_PCDR1) Peripheral Clock 60 Disable Position */
#define PMC_PCDR1_PID60_Msk                 (_U_(0x1) << PMC_PCDR1_PID60_Pos)              /**< (PMC_PCDR1) Peripheral Clock 60 Disable Mask */
#define PMC_PCDR1_PID60                     PMC_PCDR1_PID60_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID60_Msk instead */
#define PMC_PCDR1_PID61_Pos                 29                                             /**< (PMC_PCDR1) Peripheral Clock 61 Disable Position */
#define PMC_PCDR1_PID61_Msk                 (_U_(0x1) << PMC_PCDR1_PID61_Pos)              /**< (PMC_PCDR1) Peripheral Clock 61 Disable Mask */
#define PMC_PCDR1_PID61                     PMC_PCDR1_PID61_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID61_Msk instead */
#define PMC_PCDR1_PID62_Pos                 30                                             /**< (PMC_PCDR1) Peripheral Clock 62 Disable Position */
#define PMC_PCDR1_PID62_Msk                 (_U_(0x1) << PMC_PCDR1_PID62_Pos)              /**< (PMC_PCDR1) Peripheral Clock 62 Disable Mask */
#define PMC_PCDR1_PID62                     PMC_PCDR1_PID62_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID62_Msk instead */
#define PMC_PCDR1_PID63_Pos                 31                                             /**< (PMC_PCDR1) Peripheral Clock 63 Disable Position */
#define PMC_PCDR1_PID63_Msk                 (_U_(0x1) << PMC_PCDR1_PID63_Pos)              /**< (PMC_PCDR1) Peripheral Clock 63 Disable Mask */
#define PMC_PCDR1_PID63                     PMC_PCDR1_PID63_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCDR1_PID63_Msk instead */
#define PMC_PCDR1_MASK                      _U_(0xFFFFFFFF)                                /**< \deprecated (PMC_PCDR1) Register MASK  (Use PMC_PCDR1_Msk instead)  */
#define PMC_PCDR1_Msk                       _U_(0xFFFFFFFF)                                /**< (PMC_PCDR1) Register Mask  */

#define PMC_PCDR1_PID_Pos                   0                                              /**< (PMC_PCDR1 Position) Peripheral Clock 63 Disable */
#define PMC_PCDR1_PID_Msk                   (_U_(0xFFFFFFFF) << PMC_PCDR1_PID_Pos)         /**< (PMC_PCDR1 Mask) PID */
#define PMC_PCDR1_PID(value)                (PMC_PCDR1_PID_Msk & ((value) << PMC_PCDR1_PID_Pos))  

/* -------- PMC_PCSR1 : (PMC Offset: 0x108) (R/ 32) Peripheral Clock Status Register 1 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PID32:1;                   /**< bit:      0  Peripheral Clock 32 Status               */
    uint32_t PID33:1;                   /**< bit:      1  Peripheral Clock 33 Status               */
    uint32_t PID34:1;                   /**< bit:      2  Peripheral Clock 34 Status               */
    uint32_t PID35:1;                   /**< bit:      3  Peripheral Clock 35 Status               */
    uint32_t PID36:1;                   /**< bit:      4  Peripheral Clock 36 Status               */
    uint32_t PID37:1;                   /**< bit:      5  Peripheral Clock 37 Status               */
    uint32_t PID38:1;                   /**< bit:      6  Peripheral Clock 38 Status               */
    uint32_t PID39:1;                   /**< bit:      7  Peripheral Clock 39 Status               */
    uint32_t PID40:1;                   /**< bit:      8  Peripheral Clock 40 Status               */
    uint32_t PID41:1;                   /**< bit:      9  Peripheral Clock 41 Status               */
    uint32_t PID42:1;                   /**< bit:     10  Peripheral Clock 42 Status               */
    uint32_t PID43:1;                   /**< bit:     11  Peripheral Clock 43 Status               */
    uint32_t PID44:1;                   /**< bit:     12  Peripheral Clock 44 Status               */
    uint32_t PID45:1;                   /**< bit:     13  Peripheral Clock 45 Status               */
    uint32_t PID46:1;                   /**< bit:     14  Peripheral Clock 46 Status               */
    uint32_t PID47:1;                   /**< bit:     15  Peripheral Clock 47 Status               */
    uint32_t PID48:1;                   /**< bit:     16  Peripheral Clock 48 Status               */
    uint32_t PID49:1;                   /**< bit:     17  Peripheral Clock 49 Status               */
    uint32_t PID50:1;                   /**< bit:     18  Peripheral Clock 50 Status               */
    uint32_t PID51:1;                   /**< bit:     19  Peripheral Clock 51 Status               */
    uint32_t PID52:1;                   /**< bit:     20  Peripheral Clock 52 Status               */
    uint32_t PID53:1;                   /**< bit:     21  Peripheral Clock 53 Status               */
    uint32_t PID54:1;                   /**< bit:     22  Peripheral Clock 54 Status               */
    uint32_t PID55:1;                   /**< bit:     23  Peripheral Clock 55 Status               */
    uint32_t PID56:1;                   /**< bit:     24  Peripheral Clock 56 Status               */
    uint32_t PID57:1;                   /**< bit:     25  Peripheral Clock 57 Status               */
    uint32_t PID58:1;                   /**< bit:     26  Peripheral Clock 58 Status               */
    uint32_t PID59:1;                   /**< bit:     27  Peripheral Clock 59 Status               */
    uint32_t PID60:1;                   /**< bit:     28  Peripheral Clock 60 Status               */
    uint32_t PID61:1;                   /**< bit:     29  Peripheral Clock 61 Status               */
    uint32_t PID62:1;                   /**< bit:     30  Peripheral Clock 62 Status               */
    uint32_t PID63:1;                   /**< bit:     31  Peripheral Clock 63 Status               */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t PID:32;                    /**< bit:  0..31  Peripheral Clock 63 Status               */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_PCSR1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_PCSR1_OFFSET                    (0x108)                                       /**<  (PMC_PCSR1) Peripheral Clock Status Register 1  Offset */

#define PMC_PCSR1_PID32_Pos                 0                                              /**< (PMC_PCSR1) Peripheral Clock 32 Status Position */
#define PMC_PCSR1_PID32_Msk                 (_U_(0x1) << PMC_PCSR1_PID32_Pos)              /**< (PMC_PCSR1) Peripheral Clock 32 Status Mask */
#define PMC_PCSR1_PID32                     PMC_PCSR1_PID32_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID32_Msk instead */
#define PMC_PCSR1_PID33_Pos                 1                                              /**< (PMC_PCSR1) Peripheral Clock 33 Status Position */
#define PMC_PCSR1_PID33_Msk                 (_U_(0x1) << PMC_PCSR1_PID33_Pos)              /**< (PMC_PCSR1) Peripheral Clock 33 Status Mask */
#define PMC_PCSR1_PID33                     PMC_PCSR1_PID33_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID33_Msk instead */
#define PMC_PCSR1_PID34_Pos                 2                                              /**< (PMC_PCSR1) Peripheral Clock 34 Status Position */
#define PMC_PCSR1_PID34_Msk                 (_U_(0x1) << PMC_PCSR1_PID34_Pos)              /**< (PMC_PCSR1) Peripheral Clock 34 Status Mask */
#define PMC_PCSR1_PID34                     PMC_PCSR1_PID34_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID34_Msk instead */
#define PMC_PCSR1_PID35_Pos                 3                                              /**< (PMC_PCSR1) Peripheral Clock 35 Status Position */
#define PMC_PCSR1_PID35_Msk                 (_U_(0x1) << PMC_PCSR1_PID35_Pos)              /**< (PMC_PCSR1) Peripheral Clock 35 Status Mask */
#define PMC_PCSR1_PID35                     PMC_PCSR1_PID35_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID35_Msk instead */
#define PMC_PCSR1_PID36_Pos                 4                                              /**< (PMC_PCSR1) Peripheral Clock 36 Status Position */
#define PMC_PCSR1_PID36_Msk                 (_U_(0x1) << PMC_PCSR1_PID36_Pos)              /**< (PMC_PCSR1) Peripheral Clock 36 Status Mask */
#define PMC_PCSR1_PID36                     PMC_PCSR1_PID36_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID36_Msk instead */
#define PMC_PCSR1_PID37_Pos                 5                                              /**< (PMC_PCSR1) Peripheral Clock 37 Status Position */
#define PMC_PCSR1_PID37_Msk                 (_U_(0x1) << PMC_PCSR1_PID37_Pos)              /**< (PMC_PCSR1) Peripheral Clock 37 Status Mask */
#define PMC_PCSR1_PID37                     PMC_PCSR1_PID37_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID37_Msk instead */
#define PMC_PCSR1_PID38_Pos                 6                                              /**< (PMC_PCSR1) Peripheral Clock 38 Status Position */
#define PMC_PCSR1_PID38_Msk                 (_U_(0x1) << PMC_PCSR1_PID38_Pos)              /**< (PMC_PCSR1) Peripheral Clock 38 Status Mask */
#define PMC_PCSR1_PID38                     PMC_PCSR1_PID38_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID38_Msk instead */
#define PMC_PCSR1_PID39_Pos                 7                                              /**< (PMC_PCSR1) Peripheral Clock 39 Status Position */
#define PMC_PCSR1_PID39_Msk                 (_U_(0x1) << PMC_PCSR1_PID39_Pos)              /**< (PMC_PCSR1) Peripheral Clock 39 Status Mask */
#define PMC_PCSR1_PID39                     PMC_PCSR1_PID39_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID39_Msk instead */
#define PMC_PCSR1_PID40_Pos                 8                                              /**< (PMC_PCSR1) Peripheral Clock 40 Status Position */
#define PMC_PCSR1_PID40_Msk                 (_U_(0x1) << PMC_PCSR1_PID40_Pos)              /**< (PMC_PCSR1) Peripheral Clock 40 Status Mask */
#define PMC_PCSR1_PID40                     PMC_PCSR1_PID40_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID40_Msk instead */
#define PMC_PCSR1_PID41_Pos                 9                                              /**< (PMC_PCSR1) Peripheral Clock 41 Status Position */
#define PMC_PCSR1_PID41_Msk                 (_U_(0x1) << PMC_PCSR1_PID41_Pos)              /**< (PMC_PCSR1) Peripheral Clock 41 Status Mask */
#define PMC_PCSR1_PID41                     PMC_PCSR1_PID41_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID41_Msk instead */
#define PMC_PCSR1_PID42_Pos                 10                                             /**< (PMC_PCSR1) Peripheral Clock 42 Status Position */
#define PMC_PCSR1_PID42_Msk                 (_U_(0x1) << PMC_PCSR1_PID42_Pos)              /**< (PMC_PCSR1) Peripheral Clock 42 Status Mask */
#define PMC_PCSR1_PID42                     PMC_PCSR1_PID42_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID42_Msk instead */
#define PMC_PCSR1_PID43_Pos                 11                                             /**< (PMC_PCSR1) Peripheral Clock 43 Status Position */
#define PMC_PCSR1_PID43_Msk                 (_U_(0x1) << PMC_PCSR1_PID43_Pos)              /**< (PMC_PCSR1) Peripheral Clock 43 Status Mask */
#define PMC_PCSR1_PID43                     PMC_PCSR1_PID43_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID43_Msk instead */
#define PMC_PCSR1_PID44_Pos                 12                                             /**< (PMC_PCSR1) Peripheral Clock 44 Status Position */
#define PMC_PCSR1_PID44_Msk                 (_U_(0x1) << PMC_PCSR1_PID44_Pos)              /**< (PMC_PCSR1) Peripheral Clock 44 Status Mask */
#define PMC_PCSR1_PID44                     PMC_PCSR1_PID44_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID44_Msk instead */
#define PMC_PCSR1_PID45_Pos                 13                                             /**< (PMC_PCSR1) Peripheral Clock 45 Status Position */
#define PMC_PCSR1_PID45_Msk                 (_U_(0x1) << PMC_PCSR1_PID45_Pos)              /**< (PMC_PCSR1) Peripheral Clock 45 Status Mask */
#define PMC_PCSR1_PID45                     PMC_PCSR1_PID45_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID45_Msk instead */
#define PMC_PCSR1_PID46_Pos                 14                                             /**< (PMC_PCSR1) Peripheral Clock 46 Status Position */
#define PMC_PCSR1_PID46_Msk                 (_U_(0x1) << PMC_PCSR1_PID46_Pos)              /**< (PMC_PCSR1) Peripheral Clock 46 Status Mask */
#define PMC_PCSR1_PID46                     PMC_PCSR1_PID46_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID46_Msk instead */
#define PMC_PCSR1_PID47_Pos                 15                                             /**< (PMC_PCSR1) Peripheral Clock 47 Status Position */
#define PMC_PCSR1_PID47_Msk                 (_U_(0x1) << PMC_PCSR1_PID47_Pos)              /**< (PMC_PCSR1) Peripheral Clock 47 Status Mask */
#define PMC_PCSR1_PID47                     PMC_PCSR1_PID47_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID47_Msk instead */
#define PMC_PCSR1_PID48_Pos                 16                                             /**< (PMC_PCSR1) Peripheral Clock 48 Status Position */
#define PMC_PCSR1_PID48_Msk                 (_U_(0x1) << PMC_PCSR1_PID48_Pos)              /**< (PMC_PCSR1) Peripheral Clock 48 Status Mask */
#define PMC_PCSR1_PID48                     PMC_PCSR1_PID48_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID48_Msk instead */
#define PMC_PCSR1_PID49_Pos                 17                                             /**< (PMC_PCSR1) Peripheral Clock 49 Status Position */
#define PMC_PCSR1_PID49_Msk                 (_U_(0x1) << PMC_PCSR1_PID49_Pos)              /**< (PMC_PCSR1) Peripheral Clock 49 Status Mask */
#define PMC_PCSR1_PID49                     PMC_PCSR1_PID49_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID49_Msk instead */
#define PMC_PCSR1_PID50_Pos                 18                                             /**< (PMC_PCSR1) Peripheral Clock 50 Status Position */
#define PMC_PCSR1_PID50_Msk                 (_U_(0x1) << PMC_PCSR1_PID50_Pos)              /**< (PMC_PCSR1) Peripheral Clock 50 Status Mask */
#define PMC_PCSR1_PID50                     PMC_PCSR1_PID50_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID50_Msk instead */
#define PMC_PCSR1_PID51_Pos                 19                                             /**< (PMC_PCSR1) Peripheral Clock 51 Status Position */
#define PMC_PCSR1_PID51_Msk                 (_U_(0x1) << PMC_PCSR1_PID51_Pos)              /**< (PMC_PCSR1) Peripheral Clock 51 Status Mask */
#define PMC_PCSR1_PID51                     PMC_PCSR1_PID51_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID51_Msk instead */
#define PMC_PCSR1_PID52_Pos                 20                                             /**< (PMC_PCSR1) Peripheral Clock 52 Status Position */
#define PMC_PCSR1_PID52_Msk                 (_U_(0x1) << PMC_PCSR1_PID52_Pos)              /**< (PMC_PCSR1) Peripheral Clock 52 Status Mask */
#define PMC_PCSR1_PID52                     PMC_PCSR1_PID52_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID52_Msk instead */
#define PMC_PCSR1_PID53_Pos                 21                                             /**< (PMC_PCSR1) Peripheral Clock 53 Status Position */
#define PMC_PCSR1_PID53_Msk                 (_U_(0x1) << PMC_PCSR1_PID53_Pos)              /**< (PMC_PCSR1) Peripheral Clock 53 Status Mask */
#define PMC_PCSR1_PID53                     PMC_PCSR1_PID53_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID53_Msk instead */
#define PMC_PCSR1_PID54_Pos                 22                                             /**< (PMC_PCSR1) Peripheral Clock 54 Status Position */
#define PMC_PCSR1_PID54_Msk                 (_U_(0x1) << PMC_PCSR1_PID54_Pos)              /**< (PMC_PCSR1) Peripheral Clock 54 Status Mask */
#define PMC_PCSR1_PID54                     PMC_PCSR1_PID54_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID54_Msk instead */
#define PMC_PCSR1_PID55_Pos                 23                                             /**< (PMC_PCSR1) Peripheral Clock 55 Status Position */
#define PMC_PCSR1_PID55_Msk                 (_U_(0x1) << PMC_PCSR1_PID55_Pos)              /**< (PMC_PCSR1) Peripheral Clock 55 Status Mask */
#define PMC_PCSR1_PID55                     PMC_PCSR1_PID55_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID55_Msk instead */
#define PMC_PCSR1_PID56_Pos                 24                                             /**< (PMC_PCSR1) Peripheral Clock 56 Status Position */
#define PMC_PCSR1_PID56_Msk                 (_U_(0x1) << PMC_PCSR1_PID56_Pos)              /**< (PMC_PCSR1) Peripheral Clock 56 Status Mask */
#define PMC_PCSR1_PID56                     PMC_PCSR1_PID56_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID56_Msk instead */
#define PMC_PCSR1_PID57_Pos                 25                                             /**< (PMC_PCSR1) Peripheral Clock 57 Status Position */
#define PMC_PCSR1_PID57_Msk                 (_U_(0x1) << PMC_PCSR1_PID57_Pos)              /**< (PMC_PCSR1) Peripheral Clock 57 Status Mask */
#define PMC_PCSR1_PID57                     PMC_PCSR1_PID57_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID57_Msk instead */
#define PMC_PCSR1_PID58_Pos                 26                                             /**< (PMC_PCSR1) Peripheral Clock 58 Status Position */
#define PMC_PCSR1_PID58_Msk                 (_U_(0x1) << PMC_PCSR1_PID58_Pos)              /**< (PMC_PCSR1) Peripheral Clock 58 Status Mask */
#define PMC_PCSR1_PID58                     PMC_PCSR1_PID58_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID58_Msk instead */
#define PMC_PCSR1_PID59_Pos                 27                                             /**< (PMC_PCSR1) Peripheral Clock 59 Status Position */
#define PMC_PCSR1_PID59_Msk                 (_U_(0x1) << PMC_PCSR1_PID59_Pos)              /**< (PMC_PCSR1) Peripheral Clock 59 Status Mask */
#define PMC_PCSR1_PID59                     PMC_PCSR1_PID59_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID59_Msk instead */
#define PMC_PCSR1_PID60_Pos                 28                                             /**< (PMC_PCSR1) Peripheral Clock 60 Status Position */
#define PMC_PCSR1_PID60_Msk                 (_U_(0x1) << PMC_PCSR1_PID60_Pos)              /**< (PMC_PCSR1) Peripheral Clock 60 Status Mask */
#define PMC_PCSR1_PID60                     PMC_PCSR1_PID60_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID60_Msk instead */
#define PMC_PCSR1_PID61_Pos                 29                                             /**< (PMC_PCSR1) Peripheral Clock 61 Status Position */
#define PMC_PCSR1_PID61_Msk                 (_U_(0x1) << PMC_PCSR1_PID61_Pos)              /**< (PMC_PCSR1) Peripheral Clock 61 Status Mask */
#define PMC_PCSR1_PID61                     PMC_PCSR1_PID61_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID61_Msk instead */
#define PMC_PCSR1_PID62_Pos                 30                                             /**< (PMC_PCSR1) Peripheral Clock 62 Status Position */
#define PMC_PCSR1_PID62_Msk                 (_U_(0x1) << PMC_PCSR1_PID62_Pos)              /**< (PMC_PCSR1) Peripheral Clock 62 Status Mask */
#define PMC_PCSR1_PID62                     PMC_PCSR1_PID62_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID62_Msk instead */
#define PMC_PCSR1_PID63_Pos                 31                                             /**< (PMC_PCSR1) Peripheral Clock 63 Status Position */
#define PMC_PCSR1_PID63_Msk                 (_U_(0x1) << PMC_PCSR1_PID63_Pos)              /**< (PMC_PCSR1) Peripheral Clock 63 Status Mask */
#define PMC_PCSR1_PID63                     PMC_PCSR1_PID63_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCSR1_PID63_Msk instead */
#define PMC_PCSR1_MASK                      _U_(0xFFFFFFFF)                                /**< \deprecated (PMC_PCSR1) Register MASK  (Use PMC_PCSR1_Msk instead)  */
#define PMC_PCSR1_Msk                       _U_(0xFFFFFFFF)                                /**< (PMC_PCSR1) Register Mask  */

#define PMC_PCSR1_PID_Pos                   0                                              /**< (PMC_PCSR1 Position) Peripheral Clock 63 Status */
#define PMC_PCSR1_PID_Msk                   (_U_(0xFFFFFFFF) << PMC_PCSR1_PID_Pos)         /**< (PMC_PCSR1 Mask) PID */
#define PMC_PCSR1_PID(value)                (PMC_PCSR1_PID_Msk & ((value) << PMC_PCSR1_PID_Pos))  

/* -------- PMC_PCR : (PMC Offset: 0x10c) (R/W 32) Peripheral Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PID:7;                     /**< bit:   0..6  Peripheral ID                            */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t GCKCSS:3;                  /**< bit:  8..10  Generic Clock Source Selection           */
    uint32_t :1;                        /**< bit:     11  Reserved */
    uint32_t CMD:1;                     /**< bit:     12  Command                                  */
    uint32_t :7;                        /**< bit: 13..19  Reserved */
    uint32_t GCKDIV:8;                  /**< bit: 20..27  Generic Clock Division Ratio             */
    uint32_t EN:1;                      /**< bit:     28  Enable                                   */
    uint32_t GCKEN:1;                   /**< bit:     29  Generic Clock Enable                     */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PMC_PCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_PCR_OFFSET                      (0x10C)                                       /**<  (PMC_PCR) Peripheral Control Register  Offset */

#define PMC_PCR_PID_Pos                     0                                              /**< (PMC_PCR) Peripheral ID Position */
#define PMC_PCR_PID_Msk                     (_U_(0x7F) << PMC_PCR_PID_Pos)                 /**< (PMC_PCR) Peripheral ID Mask */
#define PMC_PCR_PID(value)                  (PMC_PCR_PID_Msk & ((value) << PMC_PCR_PID_Pos))
#define PMC_PCR_GCKCSS_Pos                  8                                              /**< (PMC_PCR) Generic Clock Source Selection Position */
#define PMC_PCR_GCKCSS_Msk                  (_U_(0x7) << PMC_PCR_GCKCSS_Pos)               /**< (PMC_PCR) Generic Clock Source Selection Mask */
#define PMC_PCR_GCKCSS(value)               (PMC_PCR_GCKCSS_Msk & ((value) << PMC_PCR_GCKCSS_Pos))
#define   PMC_PCR_GCKCSS_SLOW_CLK_Val       _U_(0x0)                                       /**< (PMC_PCR) Slow clock is selected  */
#define   PMC_PCR_GCKCSS_MAIN_CLK_Val       _U_(0x1)                                       /**< (PMC_PCR) Main clock is selected  */
#define   PMC_PCR_GCKCSS_PLLA_CLK_Val       _U_(0x2)                                       /**< (PMC_PCR) PLLACK is selected  */
#define   PMC_PCR_GCKCSS_UPLL_CLK_Val       _U_(0x3)                                       /**< (PMC_PCR) UPLL Clock is selected  */
#define   PMC_PCR_GCKCSS_MCK_CLK_Val        _U_(0x4)                                       /**< (PMC_PCR) Master Clock is selected  */
#define   PMC_PCR_GCKCSS_AUDIO_CLK_Val      _U_(0x5)                                       /**< (PMC_PCR) Audio PLL clock is selected  */
#define PMC_PCR_GCKCSS_SLOW_CLK             (PMC_PCR_GCKCSS_SLOW_CLK_Val << PMC_PCR_GCKCSS_Pos)  /**< (PMC_PCR) Slow clock is selected Position  */
#define PMC_PCR_GCKCSS_MAIN_CLK             (PMC_PCR_GCKCSS_MAIN_CLK_Val << PMC_PCR_GCKCSS_Pos)  /**< (PMC_PCR) Main clock is selected Position  */
#define PMC_PCR_GCKCSS_PLLA_CLK             (PMC_PCR_GCKCSS_PLLA_CLK_Val << PMC_PCR_GCKCSS_Pos)  /**< (PMC_PCR) PLLACK is selected Position  */
#define PMC_PCR_GCKCSS_UPLL_CLK             (PMC_PCR_GCKCSS_UPLL_CLK_Val << PMC_PCR_GCKCSS_Pos)  /**< (PMC_PCR) UPLL Clock is selected Position  */
#define PMC_PCR_GCKCSS_MCK_CLK              (PMC_PCR_GCKCSS_MCK_CLK_Val << PMC_PCR_GCKCSS_Pos)  /**< (PMC_PCR) Master Clock is selected Position  */
#define PMC_PCR_GCKCSS_AUDIO_CLK            (PMC_PCR_GCKCSS_AUDIO_CLK_Val << PMC_PCR_GCKCSS_Pos)  /**< (PMC_PCR) Audio PLL clock is selected Position  */
#define PMC_PCR_CMD_Pos                     12                                             /**< (PMC_PCR) Command Position */
#define PMC_PCR_CMD_Msk                     (_U_(0x1) << PMC_PCR_CMD_Pos)                  /**< (PMC_PCR) Command Mask */
#define PMC_PCR_CMD                         PMC_PCR_CMD_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCR_CMD_Msk instead */
#define PMC_PCR_GCKDIV_Pos                  20                                             /**< (PMC_PCR) Generic Clock Division Ratio Position */
#define PMC_PCR_GCKDIV_Msk                  (_U_(0xFF) << PMC_PCR_GCKDIV_Pos)              /**< (PMC_PCR) Generic Clock Division Ratio Mask */
#define PMC_PCR_GCKDIV(value)               (PMC_PCR_GCKDIV_Msk & ((value) << PMC_PCR_GCKDIV_Pos))
#define PMC_PCR_EN_Pos                      28                                             /**< (PMC_PCR) Enable Position */
#define PMC_PCR_EN_Msk                      (_U_(0x1) << PMC_PCR_EN_Pos)                   /**< (PMC_PCR) Enable Mask */
#define PMC_PCR_EN                          PMC_PCR_EN_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCR_EN_Msk instead */
#define PMC_PCR_GCKEN_Pos                   29                                             /**< (PMC_PCR) Generic Clock Enable Position */
#define PMC_PCR_GCKEN_Msk                   (_U_(0x1) << PMC_PCR_GCKEN_Pos)                /**< (PMC_PCR) Generic Clock Enable Mask */
#define PMC_PCR_GCKEN                       PMC_PCR_GCKEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_PCR_GCKEN_Msk instead */
#define PMC_PCR_MASK                        _U_(0x3FF0177F)                                /**< \deprecated (PMC_PCR) Register MASK  (Use PMC_PCR_Msk instead)  */
#define PMC_PCR_Msk                         _U_(0x3FF0177F)                                /**< (PMC_PCR) Register Mask  */


/* -------- PMC_OCR : (PMC Offset: 0x110) (R/W 32) Oscillator Calibration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CAL:7;                     /**< bit:   0..6  12 MHz RC Oscillator Calibration Bits    */
    uint32_t SEL:1;                     /**< bit:      7  Selection of RC Oscillator Calibration Bits */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PMC_OCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_OCR_OFFSET                      (0x110)                                       /**<  (PMC_OCR) Oscillator Calibration Register  Offset */

#define PMC_OCR_CAL_Pos                     0                                              /**< (PMC_OCR) 12 MHz RC Oscillator Calibration Bits Position */
#define PMC_OCR_CAL_Msk                     (_U_(0x7F) << PMC_OCR_CAL_Pos)                 /**< (PMC_OCR) 12 MHz RC Oscillator Calibration Bits Mask */
#define PMC_OCR_CAL(value)                  (PMC_OCR_CAL_Msk & ((value) << PMC_OCR_CAL_Pos))
#define PMC_OCR_SEL_Pos                     7                                              /**< (PMC_OCR) Selection of RC Oscillator Calibration Bits Position */
#define PMC_OCR_SEL_Msk                     (_U_(0x1) << PMC_OCR_SEL_Pos)                  /**< (PMC_OCR) Selection of RC Oscillator Calibration Bits Mask */
#define PMC_OCR_SEL                         PMC_OCR_SEL_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_OCR_SEL_Msk instead */
#define PMC_OCR_MASK                        _U_(0xFF)                                      /**< \deprecated (PMC_OCR) Register MASK  (Use PMC_OCR_Msk instead)  */
#define PMC_OCR_Msk                         _U_(0xFF)                                      /**< (PMC_OCR) Register Mask  */


/* -------- PMC_SLPWK_ER0 : (PMC Offset: 0x114) (/W 32) SleepWalking Enable Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :19;                       /**< bit:  0..18  Reserved */
    uint32_t PID19:1;                   /**< bit:     19  Peripheral 19 SleepWalking Enable        */
    uint32_t PID20:1;                   /**< bit:     20  Peripheral 20 SleepWalking Enable        */
    uint32_t PID21:1;                   /**< bit:     21  Peripheral 21 SleepWalking Enable        */
    uint32_t PID22:1;                   /**< bit:     22  Peripheral 22 SleepWalking Enable        */
    uint32_t PID23:1;                   /**< bit:     23  Peripheral 23 SleepWalking Enable        */
    uint32_t PID24:1;                   /**< bit:     24  Peripheral 24 SleepWalking Enable        */
    uint32_t PID25:1;                   /**< bit:     25  Peripheral 25 SleepWalking Enable        */
    uint32_t PID26:1;                   /**< bit:     26  Peripheral 26 SleepWalking Enable        */
    uint32_t PID27:1;                   /**< bit:     27  Peripheral 27 SleepWalking Enable        */
    uint32_t PID28:1;                   /**< bit:     28  Peripheral 28 SleepWalking Enable        */
    uint32_t PID29:1;                   /**< bit:     29  Peripheral 29 SleepWalking Enable        */
    uint32_t PID30:1;                   /**< bit:     30  Peripheral 30 SleepWalking Enable        */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :19;                       /**< bit:  0..18  Reserved */
    uint32_t PID:12;                    /**< bit: 19..30  Peripheral 3x SleepWalking Enable        */
    uint32_t :1;                        /**< bit:     31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_SLPWK_ER0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_SLPWK_ER0_OFFSET                (0x114)                                       /**<  (PMC_SLPWK_ER0) SleepWalking Enable Register 0  Offset */

#define PMC_SLPWK_ER0_PID19_Pos             19                                             /**< (PMC_SLPWK_ER0) Peripheral 19 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID19_Msk             (_U_(0x1) << PMC_SLPWK_ER0_PID19_Pos)          /**< (PMC_SLPWK_ER0) Peripheral 19 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID19                 PMC_SLPWK_ER0_PID19_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ER0_PID19_Msk instead */
#define PMC_SLPWK_ER0_PID20_Pos             20                                             /**< (PMC_SLPWK_ER0) Peripheral 20 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID20_Msk             (_U_(0x1) << PMC_SLPWK_ER0_PID20_Pos)          /**< (PMC_SLPWK_ER0) Peripheral 20 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID20                 PMC_SLPWK_ER0_PID20_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ER0_PID20_Msk instead */
#define PMC_SLPWK_ER0_PID21_Pos             21                                             /**< (PMC_SLPWK_ER0) Peripheral 21 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID21_Msk             (_U_(0x1) << PMC_SLPWK_ER0_PID21_Pos)          /**< (PMC_SLPWK_ER0) Peripheral 21 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID21                 PMC_SLPWK_ER0_PID21_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ER0_PID21_Msk instead */
#define PMC_SLPWK_ER0_PID22_Pos             22                                             /**< (PMC_SLPWK_ER0) Peripheral 22 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID22_Msk             (_U_(0x1) << PMC_SLPWK_ER0_PID22_Pos)          /**< (PMC_SLPWK_ER0) Peripheral 22 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID22                 PMC_SLPWK_ER0_PID22_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ER0_PID22_Msk instead */
#define PMC_SLPWK_ER0_PID23_Pos             23                                             /**< (PMC_SLPWK_ER0) Peripheral 23 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID23_Msk             (_U_(0x1) << PMC_SLPWK_ER0_PID23_Pos)          /**< (PMC_SLPWK_ER0) Peripheral 23 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID23                 PMC_SLPWK_ER0_PID23_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ER0_PID23_Msk instead */
#define PMC_SLPWK_ER0_PID24_Pos             24                                             /**< (PMC_SLPWK_ER0) Peripheral 24 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID24_Msk             (_U_(0x1) << PMC_SLPWK_ER0_PID24_Pos)          /**< (PMC_SLPWK_ER0) Peripheral 24 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID24                 PMC_SLPWK_ER0_PID24_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ER0_PID24_Msk instead */
#define PMC_SLPWK_ER0_PID25_Pos             25                                             /**< (PMC_SLPWK_ER0) Peripheral 25 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID25_Msk             (_U_(0x1) << PMC_SLPWK_ER0_PID25_Pos)          /**< (PMC_SLPWK_ER0) Peripheral 25 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID25                 PMC_SLPWK_ER0_PID25_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ER0_PID25_Msk instead */
#define PMC_SLPWK_ER0_PID26_Pos             26                                             /**< (PMC_SLPWK_ER0) Peripheral 26 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID26_Msk             (_U_(0x1) << PMC_SLPWK_ER0_PID26_Pos)          /**< (PMC_SLPWK_ER0) Peripheral 26 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID26                 PMC_SLPWK_ER0_PID26_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ER0_PID26_Msk instead */
#define PMC_SLPWK_ER0_PID27_Pos             27                                             /**< (PMC_SLPWK_ER0) Peripheral 27 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID27_Msk             (_U_(0x1) << PMC_SLPWK_ER0_PID27_Pos)          /**< (PMC_SLPWK_ER0) Peripheral 27 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID27                 PMC_SLPWK_ER0_PID27_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ER0_PID27_Msk instead */
#define PMC_SLPWK_ER0_PID28_Pos             28                                             /**< (PMC_SLPWK_ER0) Peripheral 28 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID28_Msk             (_U_(0x1) << PMC_SLPWK_ER0_PID28_Pos)          /**< (PMC_SLPWK_ER0) Peripheral 28 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID28                 PMC_SLPWK_ER0_PID28_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ER0_PID28_Msk instead */
#define PMC_SLPWK_ER0_PID29_Pos             29                                             /**< (PMC_SLPWK_ER0) Peripheral 29 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID29_Msk             (_U_(0x1) << PMC_SLPWK_ER0_PID29_Pos)          /**< (PMC_SLPWK_ER0) Peripheral 29 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID29                 PMC_SLPWK_ER0_PID29_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ER0_PID29_Msk instead */
#define PMC_SLPWK_ER0_PID30_Pos             30                                             /**< (PMC_SLPWK_ER0) Peripheral 30 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID30_Msk             (_U_(0x1) << PMC_SLPWK_ER0_PID30_Pos)          /**< (PMC_SLPWK_ER0) Peripheral 30 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID30                 PMC_SLPWK_ER0_PID30_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ER0_PID30_Msk instead */
#define PMC_SLPWK_ER0_MASK                  _U_(0x7FF80000)                                /**< \deprecated (PMC_SLPWK_ER0) Register MASK  (Use PMC_SLPWK_ER0_Msk instead)  */
#define PMC_SLPWK_ER0_Msk                   _U_(0x7FF80000)                                /**< (PMC_SLPWK_ER0) Register Mask  */

#define PMC_SLPWK_ER0_PID_Pos               19                                             /**< (PMC_SLPWK_ER0 Position) Peripheral 3x SleepWalking Enable */
#define PMC_SLPWK_ER0_PID_Msk               (_U_(0xFFF) << PMC_SLPWK_ER0_PID_Pos)          /**< (PMC_SLPWK_ER0 Mask) PID */
#define PMC_SLPWK_ER0_PID(value)            (PMC_SLPWK_ER0_PID_Msk & ((value) << PMC_SLPWK_ER0_PID_Pos))  

/* -------- PMC_SLPWK_DR0 : (PMC Offset: 0x118) (/W 32) SleepWalking Disable Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :19;                       /**< bit:  0..18  Reserved */
    uint32_t PID19:1;                   /**< bit:     19  Peripheral 19 SleepWalking Disable       */
    uint32_t PID20:1;                   /**< bit:     20  Peripheral 20 SleepWalking Disable       */
    uint32_t PID21:1;                   /**< bit:     21  Peripheral 21 SleepWalking Disable       */
    uint32_t PID22:1;                   /**< bit:     22  Peripheral 22 SleepWalking Disable       */
    uint32_t PID23:1;                   /**< bit:     23  Peripheral 23 SleepWalking Disable       */
    uint32_t PID24:1;                   /**< bit:     24  Peripheral 24 SleepWalking Disable       */
    uint32_t PID25:1;                   /**< bit:     25  Peripheral 25 SleepWalking Disable       */
    uint32_t PID26:1;                   /**< bit:     26  Peripheral 26 SleepWalking Disable       */
    uint32_t PID27:1;                   /**< bit:     27  Peripheral 27 SleepWalking Disable       */
    uint32_t PID28:1;                   /**< bit:     28  Peripheral 28 SleepWalking Disable       */
    uint32_t PID29:1;                   /**< bit:     29  Peripheral 29 SleepWalking Disable       */
    uint32_t PID30:1;                   /**< bit:     30  Peripheral 30 SleepWalking Disable       */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :19;                       /**< bit:  0..18  Reserved */
    uint32_t PID:12;                    /**< bit: 19..30  Peripheral 3x SleepWalking Disable       */
    uint32_t :1;                        /**< bit:     31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_SLPWK_DR0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_SLPWK_DR0_OFFSET                (0x118)                                       /**<  (PMC_SLPWK_DR0) SleepWalking Disable Register 0  Offset */

#define PMC_SLPWK_DR0_PID19_Pos             19                                             /**< (PMC_SLPWK_DR0) Peripheral 19 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID19_Msk             (_U_(0x1) << PMC_SLPWK_DR0_PID19_Pos)          /**< (PMC_SLPWK_DR0) Peripheral 19 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID19                 PMC_SLPWK_DR0_PID19_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_DR0_PID19_Msk instead */
#define PMC_SLPWK_DR0_PID20_Pos             20                                             /**< (PMC_SLPWK_DR0) Peripheral 20 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID20_Msk             (_U_(0x1) << PMC_SLPWK_DR0_PID20_Pos)          /**< (PMC_SLPWK_DR0) Peripheral 20 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID20                 PMC_SLPWK_DR0_PID20_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_DR0_PID20_Msk instead */
#define PMC_SLPWK_DR0_PID21_Pos             21                                             /**< (PMC_SLPWK_DR0) Peripheral 21 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID21_Msk             (_U_(0x1) << PMC_SLPWK_DR0_PID21_Pos)          /**< (PMC_SLPWK_DR0) Peripheral 21 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID21                 PMC_SLPWK_DR0_PID21_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_DR0_PID21_Msk instead */
#define PMC_SLPWK_DR0_PID22_Pos             22                                             /**< (PMC_SLPWK_DR0) Peripheral 22 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID22_Msk             (_U_(0x1) << PMC_SLPWK_DR0_PID22_Pos)          /**< (PMC_SLPWK_DR0) Peripheral 22 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID22                 PMC_SLPWK_DR0_PID22_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_DR0_PID22_Msk instead */
#define PMC_SLPWK_DR0_PID23_Pos             23                                             /**< (PMC_SLPWK_DR0) Peripheral 23 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID23_Msk             (_U_(0x1) << PMC_SLPWK_DR0_PID23_Pos)          /**< (PMC_SLPWK_DR0) Peripheral 23 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID23                 PMC_SLPWK_DR0_PID23_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_DR0_PID23_Msk instead */
#define PMC_SLPWK_DR0_PID24_Pos             24                                             /**< (PMC_SLPWK_DR0) Peripheral 24 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID24_Msk             (_U_(0x1) << PMC_SLPWK_DR0_PID24_Pos)          /**< (PMC_SLPWK_DR0) Peripheral 24 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID24                 PMC_SLPWK_DR0_PID24_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_DR0_PID24_Msk instead */
#define PMC_SLPWK_DR0_PID25_Pos             25                                             /**< (PMC_SLPWK_DR0) Peripheral 25 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID25_Msk             (_U_(0x1) << PMC_SLPWK_DR0_PID25_Pos)          /**< (PMC_SLPWK_DR0) Peripheral 25 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID25                 PMC_SLPWK_DR0_PID25_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_DR0_PID25_Msk instead */
#define PMC_SLPWK_DR0_PID26_Pos             26                                             /**< (PMC_SLPWK_DR0) Peripheral 26 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID26_Msk             (_U_(0x1) << PMC_SLPWK_DR0_PID26_Pos)          /**< (PMC_SLPWK_DR0) Peripheral 26 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID26                 PMC_SLPWK_DR0_PID26_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_DR0_PID26_Msk instead */
#define PMC_SLPWK_DR0_PID27_Pos             27                                             /**< (PMC_SLPWK_DR0) Peripheral 27 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID27_Msk             (_U_(0x1) << PMC_SLPWK_DR0_PID27_Pos)          /**< (PMC_SLPWK_DR0) Peripheral 27 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID27                 PMC_SLPWK_DR0_PID27_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_DR0_PID27_Msk instead */
#define PMC_SLPWK_DR0_PID28_Pos             28                                             /**< (PMC_SLPWK_DR0) Peripheral 28 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID28_Msk             (_U_(0x1) << PMC_SLPWK_DR0_PID28_Pos)          /**< (PMC_SLPWK_DR0) Peripheral 28 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID28                 PMC_SLPWK_DR0_PID28_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_DR0_PID28_Msk instead */
#define PMC_SLPWK_DR0_PID29_Pos             29                                             /**< (PMC_SLPWK_DR0) Peripheral 29 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID29_Msk             (_U_(0x1) << PMC_SLPWK_DR0_PID29_Pos)          /**< (PMC_SLPWK_DR0) Peripheral 29 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID29                 PMC_SLPWK_DR0_PID29_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_DR0_PID29_Msk instead */
#define PMC_SLPWK_DR0_PID30_Pos             30                                             /**< (PMC_SLPWK_DR0) Peripheral 30 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID30_Msk             (_U_(0x1) << PMC_SLPWK_DR0_PID30_Pos)          /**< (PMC_SLPWK_DR0) Peripheral 30 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID30                 PMC_SLPWK_DR0_PID30_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_DR0_PID30_Msk instead */
#define PMC_SLPWK_DR0_MASK                  _U_(0x7FF80000)                                /**< \deprecated (PMC_SLPWK_DR0) Register MASK  (Use PMC_SLPWK_DR0_Msk instead)  */
#define PMC_SLPWK_DR0_Msk                   _U_(0x7FF80000)                                /**< (PMC_SLPWK_DR0) Register Mask  */

#define PMC_SLPWK_DR0_PID_Pos               19                                             /**< (PMC_SLPWK_DR0 Position) Peripheral 3x SleepWalking Disable */
#define PMC_SLPWK_DR0_PID_Msk               (_U_(0xFFF) << PMC_SLPWK_DR0_PID_Pos)          /**< (PMC_SLPWK_DR0 Mask) PID */
#define PMC_SLPWK_DR0_PID(value)            (PMC_SLPWK_DR0_PID_Msk & ((value) << PMC_SLPWK_DR0_PID_Pos))  

/* -------- PMC_SLPWK_SR0 : (PMC Offset: 0x11c) (R/ 32) SleepWalking Status Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :19;                       /**< bit:  0..18  Reserved */
    uint32_t PID19:1;                   /**< bit:     19  Peripheral 19 SleepWalking Status        */
    uint32_t PID20:1;                   /**< bit:     20  Peripheral 20 SleepWalking Status        */
    uint32_t PID21:1;                   /**< bit:     21  Peripheral 21 SleepWalking Status        */
    uint32_t PID22:1;                   /**< bit:     22  Peripheral 22 SleepWalking Status        */
    uint32_t PID23:1;                   /**< bit:     23  Peripheral 23 SleepWalking Status        */
    uint32_t PID24:1;                   /**< bit:     24  Peripheral 24 SleepWalking Status        */
    uint32_t PID25:1;                   /**< bit:     25  Peripheral 25 SleepWalking Status        */
    uint32_t PID26:1;                   /**< bit:     26  Peripheral 26 SleepWalking Status        */
    uint32_t PID27:1;                   /**< bit:     27  Peripheral 27 SleepWalking Status        */
    uint32_t PID28:1;                   /**< bit:     28  Peripheral 28 SleepWalking Status        */
    uint32_t PID29:1;                   /**< bit:     29  Peripheral 29 SleepWalking Status        */
    uint32_t PID30:1;                   /**< bit:     30  Peripheral 30 SleepWalking Status        */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :19;                       /**< bit:  0..18  Reserved */
    uint32_t PID:12;                    /**< bit: 19..30  Peripheral 3x SleepWalking Status        */
    uint32_t :1;                        /**< bit:     31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_SLPWK_SR0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_SLPWK_SR0_OFFSET                (0x11C)                                       /**<  (PMC_SLPWK_SR0) SleepWalking Status Register 0  Offset */

#define PMC_SLPWK_SR0_PID19_Pos             19                                             /**< (PMC_SLPWK_SR0) Peripheral 19 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID19_Msk             (_U_(0x1) << PMC_SLPWK_SR0_PID19_Pos)          /**< (PMC_SLPWK_SR0) Peripheral 19 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID19                 PMC_SLPWK_SR0_PID19_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_SR0_PID19_Msk instead */
#define PMC_SLPWK_SR0_PID20_Pos             20                                             /**< (PMC_SLPWK_SR0) Peripheral 20 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID20_Msk             (_U_(0x1) << PMC_SLPWK_SR0_PID20_Pos)          /**< (PMC_SLPWK_SR0) Peripheral 20 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID20                 PMC_SLPWK_SR0_PID20_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_SR0_PID20_Msk instead */
#define PMC_SLPWK_SR0_PID21_Pos             21                                             /**< (PMC_SLPWK_SR0) Peripheral 21 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID21_Msk             (_U_(0x1) << PMC_SLPWK_SR0_PID21_Pos)          /**< (PMC_SLPWK_SR0) Peripheral 21 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID21                 PMC_SLPWK_SR0_PID21_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_SR0_PID21_Msk instead */
#define PMC_SLPWK_SR0_PID22_Pos             22                                             /**< (PMC_SLPWK_SR0) Peripheral 22 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID22_Msk             (_U_(0x1) << PMC_SLPWK_SR0_PID22_Pos)          /**< (PMC_SLPWK_SR0) Peripheral 22 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID22                 PMC_SLPWK_SR0_PID22_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_SR0_PID22_Msk instead */
#define PMC_SLPWK_SR0_PID23_Pos             23                                             /**< (PMC_SLPWK_SR0) Peripheral 23 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID23_Msk             (_U_(0x1) << PMC_SLPWK_SR0_PID23_Pos)          /**< (PMC_SLPWK_SR0) Peripheral 23 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID23                 PMC_SLPWK_SR0_PID23_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_SR0_PID23_Msk instead */
#define PMC_SLPWK_SR0_PID24_Pos             24                                             /**< (PMC_SLPWK_SR0) Peripheral 24 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID24_Msk             (_U_(0x1) << PMC_SLPWK_SR0_PID24_Pos)          /**< (PMC_SLPWK_SR0) Peripheral 24 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID24                 PMC_SLPWK_SR0_PID24_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_SR0_PID24_Msk instead */
#define PMC_SLPWK_SR0_PID25_Pos             25                                             /**< (PMC_SLPWK_SR0) Peripheral 25 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID25_Msk             (_U_(0x1) << PMC_SLPWK_SR0_PID25_Pos)          /**< (PMC_SLPWK_SR0) Peripheral 25 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID25                 PMC_SLPWK_SR0_PID25_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_SR0_PID25_Msk instead */
#define PMC_SLPWK_SR0_PID26_Pos             26                                             /**< (PMC_SLPWK_SR0) Peripheral 26 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID26_Msk             (_U_(0x1) << PMC_SLPWK_SR0_PID26_Pos)          /**< (PMC_SLPWK_SR0) Peripheral 26 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID26                 PMC_SLPWK_SR0_PID26_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_SR0_PID26_Msk instead */
#define PMC_SLPWK_SR0_PID27_Pos             27                                             /**< (PMC_SLPWK_SR0) Peripheral 27 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID27_Msk             (_U_(0x1) << PMC_SLPWK_SR0_PID27_Pos)          /**< (PMC_SLPWK_SR0) Peripheral 27 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID27                 PMC_SLPWK_SR0_PID27_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_SR0_PID27_Msk instead */
#define PMC_SLPWK_SR0_PID28_Pos             28                                             /**< (PMC_SLPWK_SR0) Peripheral 28 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID28_Msk             (_U_(0x1) << PMC_SLPWK_SR0_PID28_Pos)          /**< (PMC_SLPWK_SR0) Peripheral 28 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID28                 PMC_SLPWK_SR0_PID28_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_SR0_PID28_Msk instead */
#define PMC_SLPWK_SR0_PID29_Pos             29                                             /**< (PMC_SLPWK_SR0) Peripheral 29 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID29_Msk             (_U_(0x1) << PMC_SLPWK_SR0_PID29_Pos)          /**< (PMC_SLPWK_SR0) Peripheral 29 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID29                 PMC_SLPWK_SR0_PID29_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_SR0_PID29_Msk instead */
#define PMC_SLPWK_SR0_PID30_Pos             30                                             /**< (PMC_SLPWK_SR0) Peripheral 30 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID30_Msk             (_U_(0x1) << PMC_SLPWK_SR0_PID30_Pos)          /**< (PMC_SLPWK_SR0) Peripheral 30 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID30                 PMC_SLPWK_SR0_PID30_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_SR0_PID30_Msk instead */
#define PMC_SLPWK_SR0_MASK                  _U_(0x7FF80000)                                /**< \deprecated (PMC_SLPWK_SR0) Register MASK  (Use PMC_SLPWK_SR0_Msk instead)  */
#define PMC_SLPWK_SR0_Msk                   _U_(0x7FF80000)                                /**< (PMC_SLPWK_SR0) Register Mask  */

#define PMC_SLPWK_SR0_PID_Pos               19                                             /**< (PMC_SLPWK_SR0 Position) Peripheral 3x SleepWalking Status */
#define PMC_SLPWK_SR0_PID_Msk               (_U_(0xFFF) << PMC_SLPWK_SR0_PID_Pos)          /**< (PMC_SLPWK_SR0 Mask) PID */
#define PMC_SLPWK_SR0_PID(value)            (PMC_SLPWK_SR0_PID_Msk & ((value) << PMC_SLPWK_SR0_PID_Pos))  

/* -------- PMC_SLPWK_ASR0 : (PMC Offset: 0x120) (R/ 32) SleepWalking Activity Status Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :19;                       /**< bit:  0..18  Reserved */
    uint32_t PID19:1;                   /**< bit:     19  Peripheral 19 Activity Status            */
    uint32_t PID20:1;                   /**< bit:     20  Peripheral 20 Activity Status            */
    uint32_t PID21:1;                   /**< bit:     21  Peripheral 21 Activity Status            */
    uint32_t PID22:1;                   /**< bit:     22  Peripheral 22 Activity Status            */
    uint32_t PID23:1;                   /**< bit:     23  Peripheral 23 Activity Status            */
    uint32_t PID24:1;                   /**< bit:     24  Peripheral 24 Activity Status            */
    uint32_t PID25:1;                   /**< bit:     25  Peripheral 25 Activity Status            */
    uint32_t PID26:1;                   /**< bit:     26  Peripheral 26 Activity Status            */
    uint32_t PID27:1;                   /**< bit:     27  Peripheral 27 Activity Status            */
    uint32_t PID28:1;                   /**< bit:     28  Peripheral 28 Activity Status            */
    uint32_t PID29:1;                   /**< bit:     29  Peripheral 29 Activity Status            */
    uint32_t PID30:1;                   /**< bit:     30  Peripheral 30 Activity Status            */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :19;                       /**< bit:  0..18  Reserved */
    uint32_t PID:12;                    /**< bit: 19..30  Peripheral 3x Activity Status            */
    uint32_t :1;                        /**< bit:     31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_SLPWK_ASR0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_SLPWK_ASR0_OFFSET               (0x120)                                       /**<  (PMC_SLPWK_ASR0) SleepWalking Activity Status Register 0  Offset */

#define PMC_SLPWK_ASR0_PID19_Pos            19                                             /**< (PMC_SLPWK_ASR0) Peripheral 19 Activity Status Position */
#define PMC_SLPWK_ASR0_PID19_Msk            (_U_(0x1) << PMC_SLPWK_ASR0_PID19_Pos)         /**< (PMC_SLPWK_ASR0) Peripheral 19 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID19                PMC_SLPWK_ASR0_PID19_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ASR0_PID19_Msk instead */
#define PMC_SLPWK_ASR0_PID20_Pos            20                                             /**< (PMC_SLPWK_ASR0) Peripheral 20 Activity Status Position */
#define PMC_SLPWK_ASR0_PID20_Msk            (_U_(0x1) << PMC_SLPWK_ASR0_PID20_Pos)         /**< (PMC_SLPWK_ASR0) Peripheral 20 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID20                PMC_SLPWK_ASR0_PID20_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ASR0_PID20_Msk instead */
#define PMC_SLPWK_ASR0_PID21_Pos            21                                             /**< (PMC_SLPWK_ASR0) Peripheral 21 Activity Status Position */
#define PMC_SLPWK_ASR0_PID21_Msk            (_U_(0x1) << PMC_SLPWK_ASR0_PID21_Pos)         /**< (PMC_SLPWK_ASR0) Peripheral 21 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID21                PMC_SLPWK_ASR0_PID21_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ASR0_PID21_Msk instead */
#define PMC_SLPWK_ASR0_PID22_Pos            22                                             /**< (PMC_SLPWK_ASR0) Peripheral 22 Activity Status Position */
#define PMC_SLPWK_ASR0_PID22_Msk            (_U_(0x1) << PMC_SLPWK_ASR0_PID22_Pos)         /**< (PMC_SLPWK_ASR0) Peripheral 22 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID22                PMC_SLPWK_ASR0_PID22_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ASR0_PID22_Msk instead */
#define PMC_SLPWK_ASR0_PID23_Pos            23                                             /**< (PMC_SLPWK_ASR0) Peripheral 23 Activity Status Position */
#define PMC_SLPWK_ASR0_PID23_Msk            (_U_(0x1) << PMC_SLPWK_ASR0_PID23_Pos)         /**< (PMC_SLPWK_ASR0) Peripheral 23 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID23                PMC_SLPWK_ASR0_PID23_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ASR0_PID23_Msk instead */
#define PMC_SLPWK_ASR0_PID24_Pos            24                                             /**< (PMC_SLPWK_ASR0) Peripheral 24 Activity Status Position */
#define PMC_SLPWK_ASR0_PID24_Msk            (_U_(0x1) << PMC_SLPWK_ASR0_PID24_Pos)         /**< (PMC_SLPWK_ASR0) Peripheral 24 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID24                PMC_SLPWK_ASR0_PID24_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ASR0_PID24_Msk instead */
#define PMC_SLPWK_ASR0_PID25_Pos            25                                             /**< (PMC_SLPWK_ASR0) Peripheral 25 Activity Status Position */
#define PMC_SLPWK_ASR0_PID25_Msk            (_U_(0x1) << PMC_SLPWK_ASR0_PID25_Pos)         /**< (PMC_SLPWK_ASR0) Peripheral 25 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID25                PMC_SLPWK_ASR0_PID25_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ASR0_PID25_Msk instead */
#define PMC_SLPWK_ASR0_PID26_Pos            26                                             /**< (PMC_SLPWK_ASR0) Peripheral 26 Activity Status Position */
#define PMC_SLPWK_ASR0_PID26_Msk            (_U_(0x1) << PMC_SLPWK_ASR0_PID26_Pos)         /**< (PMC_SLPWK_ASR0) Peripheral 26 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID26                PMC_SLPWK_ASR0_PID26_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ASR0_PID26_Msk instead */
#define PMC_SLPWK_ASR0_PID27_Pos            27                                             /**< (PMC_SLPWK_ASR0) Peripheral 27 Activity Status Position */
#define PMC_SLPWK_ASR0_PID27_Msk            (_U_(0x1) << PMC_SLPWK_ASR0_PID27_Pos)         /**< (PMC_SLPWK_ASR0) Peripheral 27 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID27                PMC_SLPWK_ASR0_PID27_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ASR0_PID27_Msk instead */
#define PMC_SLPWK_ASR0_PID28_Pos            28                                             /**< (PMC_SLPWK_ASR0) Peripheral 28 Activity Status Position */
#define PMC_SLPWK_ASR0_PID28_Msk            (_U_(0x1) << PMC_SLPWK_ASR0_PID28_Pos)         /**< (PMC_SLPWK_ASR0) Peripheral 28 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID28                PMC_SLPWK_ASR0_PID28_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ASR0_PID28_Msk instead */
#define PMC_SLPWK_ASR0_PID29_Pos            29                                             /**< (PMC_SLPWK_ASR0) Peripheral 29 Activity Status Position */
#define PMC_SLPWK_ASR0_PID29_Msk            (_U_(0x1) << PMC_SLPWK_ASR0_PID29_Pos)         /**< (PMC_SLPWK_ASR0) Peripheral 29 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID29                PMC_SLPWK_ASR0_PID29_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ASR0_PID29_Msk instead */
#define PMC_SLPWK_ASR0_PID30_Pos            30                                             /**< (PMC_SLPWK_ASR0) Peripheral 30 Activity Status Position */
#define PMC_SLPWK_ASR0_PID30_Msk            (_U_(0x1) << PMC_SLPWK_ASR0_PID30_Pos)         /**< (PMC_SLPWK_ASR0) Peripheral 30 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID30                PMC_SLPWK_ASR0_PID30_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ASR0_PID30_Msk instead */
#define PMC_SLPWK_ASR0_MASK                 _U_(0x7FF80000)                                /**< \deprecated (PMC_SLPWK_ASR0) Register MASK  (Use PMC_SLPWK_ASR0_Msk instead)  */
#define PMC_SLPWK_ASR0_Msk                  _U_(0x7FF80000)                                /**< (PMC_SLPWK_ASR0) Register Mask  */

#define PMC_SLPWK_ASR0_PID_Pos              19                                             /**< (PMC_SLPWK_ASR0 Position) Peripheral 3x Activity Status */
#define PMC_SLPWK_ASR0_PID_Msk              (_U_(0xFFF) << PMC_SLPWK_ASR0_PID_Pos)         /**< (PMC_SLPWK_ASR0 Mask) PID */
#define PMC_SLPWK_ASR0_PID(value)           (PMC_SLPWK_ASR0_PID_Msk & ((value) << PMC_SLPWK_ASR0_PID_Pos))  

/* -------- PMC_SLPWK_ER1 : (PMC Offset: 0x134) (/W 32) SleepWalking Enable Register 1 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :1;                        /**< bit:      0  Reserved */
    uint32_t PID33:1;                   /**< bit:      1  Peripheral 33 SleepWalking Enable        */
    uint32_t PID34:1;                   /**< bit:      2  Peripheral 34 SleepWalking Enable        */
    uint32_t :5;                        /**< bit:   3..7  Reserved */
    uint32_t PID40:1;                   /**< bit:      8  Peripheral 40 SleepWalking Enable        */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :1;                        /**< bit:      0  Reserved */
    uint32_t PID:3;                     /**< bit:   1..3  Peripheral 4x SleepWalking Enable        */
    uint32_t :28;                       /**< bit:  4..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_SLPWK_ER1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_SLPWK_ER1_OFFSET                (0x134)                                       /**<  (PMC_SLPWK_ER1) SleepWalking Enable Register 1  Offset */

#define PMC_SLPWK_ER1_PID33_Pos             1                                              /**< (PMC_SLPWK_ER1) Peripheral 33 SleepWalking Enable Position */
#define PMC_SLPWK_ER1_PID33_Msk             (_U_(0x1) << PMC_SLPWK_ER1_PID33_Pos)          /**< (PMC_SLPWK_ER1) Peripheral 33 SleepWalking Enable Mask */
#define PMC_SLPWK_ER1_PID33                 PMC_SLPWK_ER1_PID33_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ER1_PID33_Msk instead */
#define PMC_SLPWK_ER1_PID34_Pos             2                                              /**< (PMC_SLPWK_ER1) Peripheral 34 SleepWalking Enable Position */
#define PMC_SLPWK_ER1_PID34_Msk             (_U_(0x1) << PMC_SLPWK_ER1_PID34_Pos)          /**< (PMC_SLPWK_ER1) Peripheral 34 SleepWalking Enable Mask */
#define PMC_SLPWK_ER1_PID34                 PMC_SLPWK_ER1_PID34_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ER1_PID34_Msk instead */
#define PMC_SLPWK_ER1_PID40_Pos             8                                              /**< (PMC_SLPWK_ER1) Peripheral 40 SleepWalking Enable Position */
#define PMC_SLPWK_ER1_PID40_Msk             (_U_(0x1) << PMC_SLPWK_ER1_PID40_Pos)          /**< (PMC_SLPWK_ER1) Peripheral 40 SleepWalking Enable Mask */
#define PMC_SLPWK_ER1_PID40                 PMC_SLPWK_ER1_PID40_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ER1_PID40_Msk instead */
#define PMC_SLPWK_ER1_MASK                  _U_(0x106)                                     /**< \deprecated (PMC_SLPWK_ER1) Register MASK  (Use PMC_SLPWK_ER1_Msk instead)  */
#define PMC_SLPWK_ER1_Msk                   _U_(0x106)                                     /**< (PMC_SLPWK_ER1) Register Mask  */

#define PMC_SLPWK_ER1_PID_Pos               1                                              /**< (PMC_SLPWK_ER1 Position) Peripheral 4x SleepWalking Enable */
#define PMC_SLPWK_ER1_PID_Msk               (_U_(0x7) << PMC_SLPWK_ER1_PID_Pos)            /**< (PMC_SLPWK_ER1 Mask) PID */
#define PMC_SLPWK_ER1_PID(value)            (PMC_SLPWK_ER1_PID_Msk & ((value) << PMC_SLPWK_ER1_PID_Pos))  

/* -------- PMC_SLPWK_DR1 : (PMC Offset: 0x138) (/W 32) SleepWalking Disable Register 1 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :1;                        /**< bit:      0  Reserved */
    uint32_t PID33:1;                   /**< bit:      1  Peripheral 33 SleepWalking Disable       */
    uint32_t PID34:1;                   /**< bit:      2  Peripheral 34 SleepWalking Disable       */
    uint32_t :5;                        /**< bit:   3..7  Reserved */
    uint32_t PID40:1;                   /**< bit:      8  Peripheral 40 SleepWalking Disable       */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :1;                        /**< bit:      0  Reserved */
    uint32_t PID:3;                     /**< bit:   1..3  Peripheral 4x SleepWalking Disable       */
    uint32_t :28;                       /**< bit:  4..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_SLPWK_DR1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_SLPWK_DR1_OFFSET                (0x138)                                       /**<  (PMC_SLPWK_DR1) SleepWalking Disable Register 1  Offset */

#define PMC_SLPWK_DR1_PID33_Pos             1                                              /**< (PMC_SLPWK_DR1) Peripheral 33 SleepWalking Disable Position */
#define PMC_SLPWK_DR1_PID33_Msk             (_U_(0x1) << PMC_SLPWK_DR1_PID33_Pos)          /**< (PMC_SLPWK_DR1) Peripheral 33 SleepWalking Disable Mask */
#define PMC_SLPWK_DR1_PID33                 PMC_SLPWK_DR1_PID33_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_DR1_PID33_Msk instead */
#define PMC_SLPWK_DR1_PID34_Pos             2                                              /**< (PMC_SLPWK_DR1) Peripheral 34 SleepWalking Disable Position */
#define PMC_SLPWK_DR1_PID34_Msk             (_U_(0x1) << PMC_SLPWK_DR1_PID34_Pos)          /**< (PMC_SLPWK_DR1) Peripheral 34 SleepWalking Disable Mask */
#define PMC_SLPWK_DR1_PID34                 PMC_SLPWK_DR1_PID34_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_DR1_PID34_Msk instead */
#define PMC_SLPWK_DR1_PID40_Pos             8                                              /**< (PMC_SLPWK_DR1) Peripheral 40 SleepWalking Disable Position */
#define PMC_SLPWK_DR1_PID40_Msk             (_U_(0x1) << PMC_SLPWK_DR1_PID40_Pos)          /**< (PMC_SLPWK_DR1) Peripheral 40 SleepWalking Disable Mask */
#define PMC_SLPWK_DR1_PID40                 PMC_SLPWK_DR1_PID40_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_DR1_PID40_Msk instead */
#define PMC_SLPWK_DR1_MASK                  _U_(0x106)                                     /**< \deprecated (PMC_SLPWK_DR1) Register MASK  (Use PMC_SLPWK_DR1_Msk instead)  */
#define PMC_SLPWK_DR1_Msk                   _U_(0x106)                                     /**< (PMC_SLPWK_DR1) Register Mask  */

#define PMC_SLPWK_DR1_PID_Pos               1                                              /**< (PMC_SLPWK_DR1 Position) Peripheral 4x SleepWalking Disable */
#define PMC_SLPWK_DR1_PID_Msk               (_U_(0x7) << PMC_SLPWK_DR1_PID_Pos)            /**< (PMC_SLPWK_DR1 Mask) PID */
#define PMC_SLPWK_DR1_PID(value)            (PMC_SLPWK_DR1_PID_Msk & ((value) << PMC_SLPWK_DR1_PID_Pos))  

/* -------- PMC_SLPWK_SR1 : (PMC Offset: 0x13c) (R/ 32) SleepWalking Status Register 1 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :1;                        /**< bit:      0  Reserved */
    uint32_t PID33:1;                   /**< bit:      1  Peripheral 33 SleepWalking Status        */
    uint32_t PID34:1;                   /**< bit:      2  Peripheral 34 SleepWalking Status        */
    uint32_t :5;                        /**< bit:   3..7  Reserved */
    uint32_t PID40:1;                   /**< bit:      8  Peripheral 40 SleepWalking Status        */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :1;                        /**< bit:      0  Reserved */
    uint32_t PID:3;                     /**< bit:   1..3  Peripheral 4x SleepWalking Status        */
    uint32_t :28;                       /**< bit:  4..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_SLPWK_SR1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_SLPWK_SR1_OFFSET                (0x13C)                                       /**<  (PMC_SLPWK_SR1) SleepWalking Status Register 1  Offset */

#define PMC_SLPWK_SR1_PID33_Pos             1                                              /**< (PMC_SLPWK_SR1) Peripheral 33 SleepWalking Status Position */
#define PMC_SLPWK_SR1_PID33_Msk             (_U_(0x1) << PMC_SLPWK_SR1_PID33_Pos)          /**< (PMC_SLPWK_SR1) Peripheral 33 SleepWalking Status Mask */
#define PMC_SLPWK_SR1_PID33                 PMC_SLPWK_SR1_PID33_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_SR1_PID33_Msk instead */
#define PMC_SLPWK_SR1_PID34_Pos             2                                              /**< (PMC_SLPWK_SR1) Peripheral 34 SleepWalking Status Position */
#define PMC_SLPWK_SR1_PID34_Msk             (_U_(0x1) << PMC_SLPWK_SR1_PID34_Pos)          /**< (PMC_SLPWK_SR1) Peripheral 34 SleepWalking Status Mask */
#define PMC_SLPWK_SR1_PID34                 PMC_SLPWK_SR1_PID34_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_SR1_PID34_Msk instead */
#define PMC_SLPWK_SR1_PID40_Pos             8                                              /**< (PMC_SLPWK_SR1) Peripheral 40 SleepWalking Status Position */
#define PMC_SLPWK_SR1_PID40_Msk             (_U_(0x1) << PMC_SLPWK_SR1_PID40_Pos)          /**< (PMC_SLPWK_SR1) Peripheral 40 SleepWalking Status Mask */
#define PMC_SLPWK_SR1_PID40                 PMC_SLPWK_SR1_PID40_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_SR1_PID40_Msk instead */
#define PMC_SLPWK_SR1_MASK                  _U_(0x106)                                     /**< \deprecated (PMC_SLPWK_SR1) Register MASK  (Use PMC_SLPWK_SR1_Msk instead)  */
#define PMC_SLPWK_SR1_Msk                   _U_(0x106)                                     /**< (PMC_SLPWK_SR1) Register Mask  */

#define PMC_SLPWK_SR1_PID_Pos               1                                              /**< (PMC_SLPWK_SR1 Position) Peripheral 4x SleepWalking Status */
#define PMC_SLPWK_SR1_PID_Msk               (_U_(0x7) << PMC_SLPWK_SR1_PID_Pos)            /**< (PMC_SLPWK_SR1 Mask) PID */
#define PMC_SLPWK_SR1_PID(value)            (PMC_SLPWK_SR1_PID_Msk & ((value) << PMC_SLPWK_SR1_PID_Pos))  

/* -------- PMC_SLPWK_ASR1 : (PMC Offset: 0x140) (R/ 32) SleepWalking Activity Status Register 1 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :1;                        /**< bit:      0  Reserved */
    uint32_t PID33:1;                   /**< bit:      1  Peripheral 33 Activity Status            */
    uint32_t PID34:1;                   /**< bit:      2  Peripheral 34 Activity Status            */
    uint32_t :5;                        /**< bit:   3..7  Reserved */
    uint32_t PID40:1;                   /**< bit:      8  Peripheral 40 Activity Status            */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :1;                        /**< bit:      0  Reserved */
    uint32_t PID:3;                     /**< bit:   1..3  Peripheral 4x Activity Status            */
    uint32_t :28;                       /**< bit:  4..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PMC_SLPWK_ASR1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_SLPWK_ASR1_OFFSET               (0x140)                                       /**<  (PMC_SLPWK_ASR1) SleepWalking Activity Status Register 1  Offset */

#define PMC_SLPWK_ASR1_PID33_Pos            1                                              /**< (PMC_SLPWK_ASR1) Peripheral 33 Activity Status Position */
#define PMC_SLPWK_ASR1_PID33_Msk            (_U_(0x1) << PMC_SLPWK_ASR1_PID33_Pos)         /**< (PMC_SLPWK_ASR1) Peripheral 33 Activity Status Mask */
#define PMC_SLPWK_ASR1_PID33                PMC_SLPWK_ASR1_PID33_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ASR1_PID33_Msk instead */
#define PMC_SLPWK_ASR1_PID34_Pos            2                                              /**< (PMC_SLPWK_ASR1) Peripheral 34 Activity Status Position */
#define PMC_SLPWK_ASR1_PID34_Msk            (_U_(0x1) << PMC_SLPWK_ASR1_PID34_Pos)         /**< (PMC_SLPWK_ASR1) Peripheral 34 Activity Status Mask */
#define PMC_SLPWK_ASR1_PID34                PMC_SLPWK_ASR1_PID34_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ASR1_PID34_Msk instead */
#define PMC_SLPWK_ASR1_PID40_Pos            8                                              /**< (PMC_SLPWK_ASR1) Peripheral 40 Activity Status Position */
#define PMC_SLPWK_ASR1_PID40_Msk            (_U_(0x1) << PMC_SLPWK_ASR1_PID40_Pos)         /**< (PMC_SLPWK_ASR1) Peripheral 40 Activity Status Mask */
#define PMC_SLPWK_ASR1_PID40                PMC_SLPWK_ASR1_PID40_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_ASR1_PID40_Msk instead */
#define PMC_SLPWK_ASR1_MASK                 _U_(0x106)                                     /**< \deprecated (PMC_SLPWK_ASR1) Register MASK  (Use PMC_SLPWK_ASR1_Msk instead)  */
#define PMC_SLPWK_ASR1_Msk                  _U_(0x106)                                     /**< (PMC_SLPWK_ASR1) Register Mask  */

#define PMC_SLPWK_ASR1_PID_Pos              1                                              /**< (PMC_SLPWK_ASR1 Position) Peripheral 4x Activity Status */
#define PMC_SLPWK_ASR1_PID_Msk              (_U_(0x7) << PMC_SLPWK_ASR1_PID_Pos)           /**< (PMC_SLPWK_ASR1 Mask) PID */
#define PMC_SLPWK_ASR1_PID(value)           (PMC_SLPWK_ASR1_PID_Msk & ((value) << PMC_SLPWK_ASR1_PID_Pos))  

/* -------- PMC_SLPWK_AIPR : (PMC Offset: 0x144) (R/ 32) SleepWalking Activity In Progress Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t AIP:1;                     /**< bit:      0  Activity In Progress                     */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PMC_SLPWK_AIPR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_SLPWK_AIPR_OFFSET               (0x144)                                       /**<  (PMC_SLPWK_AIPR) SleepWalking Activity In Progress Register  Offset */

#define PMC_SLPWK_AIPR_AIP_Pos              0                                              /**< (PMC_SLPWK_AIPR) Activity In Progress Position */
#define PMC_SLPWK_AIPR_AIP_Msk              (_U_(0x1) << PMC_SLPWK_AIPR_AIP_Pos)           /**< (PMC_SLPWK_AIPR) Activity In Progress Mask */
#define PMC_SLPWK_AIPR_AIP                  PMC_SLPWK_AIPR_AIP_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWK_AIPR_AIP_Msk instead */
#define PMC_SLPWK_AIPR_MASK                 _U_(0x01)                                      /**< \deprecated (PMC_SLPWK_AIPR) Register MASK  (Use PMC_SLPWK_AIPR_Msk instead)  */
#define PMC_SLPWK_AIPR_Msk                  _U_(0x01)                                      /**< (PMC_SLPWK_AIPR) Register Mask  */


/* -------- PMC_SLPWKCR : (PMC Offset: 0x148) (R/W 32) SleepWalking Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PID:7;                     /**< bit:   0..6  Peripheral ID                            */
    uint32_t :5;                        /**< bit:  7..11  Reserved */
    uint32_t CMD:1;                     /**< bit:     12  Command                                  */
    uint32_t :3;                        /**< bit: 13..15  Reserved */
    uint32_t ASR:1;                     /**< bit:     16  Activity Status Register                 */
    uint32_t :11;                       /**< bit: 17..27  Reserved */
    uint32_t SLPWKSR:1;                 /**< bit:     28  SleepWalking Status Register             */
    uint32_t :3;                        /**< bit: 29..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PMC_SLPWKCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_SLPWKCR_OFFSET                  (0x148)                                       /**<  (PMC_SLPWKCR) SleepWalking Control Register  Offset */

#define PMC_SLPWKCR_PID_Pos                 0                                              /**< (PMC_SLPWKCR) Peripheral ID Position */
#define PMC_SLPWKCR_PID_Msk                 (_U_(0x7F) << PMC_SLPWKCR_PID_Pos)             /**< (PMC_SLPWKCR) Peripheral ID Mask */
#define PMC_SLPWKCR_PID(value)              (PMC_SLPWKCR_PID_Msk & ((value) << PMC_SLPWKCR_PID_Pos))
#define PMC_SLPWKCR_CMD_Pos                 12                                             /**< (PMC_SLPWKCR) Command Position */
#define PMC_SLPWKCR_CMD_Msk                 (_U_(0x1) << PMC_SLPWKCR_CMD_Pos)              /**< (PMC_SLPWKCR) Command Mask */
#define PMC_SLPWKCR_CMD                     PMC_SLPWKCR_CMD_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWKCR_CMD_Msk instead */
#define PMC_SLPWKCR_ASR_Pos                 16                                             /**< (PMC_SLPWKCR) Activity Status Register Position */
#define PMC_SLPWKCR_ASR_Msk                 (_U_(0x1) << PMC_SLPWKCR_ASR_Pos)              /**< (PMC_SLPWKCR) Activity Status Register Mask */
#define PMC_SLPWKCR_ASR                     PMC_SLPWKCR_ASR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWKCR_ASR_Msk instead */
#define PMC_SLPWKCR_SLPWKSR_Pos             28                                             /**< (PMC_SLPWKCR) SleepWalking Status Register Position */
#define PMC_SLPWKCR_SLPWKSR_Msk             (_U_(0x1) << PMC_SLPWKCR_SLPWKSR_Pos)          /**< (PMC_SLPWKCR) SleepWalking Status Register Mask */
#define PMC_SLPWKCR_SLPWKSR                 PMC_SLPWKCR_SLPWKSR_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_SLPWKCR_SLPWKSR_Msk instead */
#define PMC_SLPWKCR_MASK                    _U_(0x1001107F)                                /**< \deprecated (PMC_SLPWKCR) Register MASK  (Use PMC_SLPWKCR_Msk instead)  */
#define PMC_SLPWKCR_Msk                     _U_(0x1001107F)                                /**< (PMC_SLPWKCR) Register Mask  */


/* -------- PMC_AUDIO_PLL0 : (PMC Offset: 0x14c) (R/W 32) Audio PLL Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PLLEN:1;                   /**< bit:      0  PLL Enable                               */
    uint32_t PADEN:1;                   /**< bit:      1  Pad Clock Enable                         */
    uint32_t PMCEN:1;                   /**< bit:      2  PMC Clock Enable                         */
    uint32_t RESETN:1;                  /**< bit:      3  Audio PLL Reset                          */
    uint32_t PLLFLT:4;                  /**< bit:   4..7  PLL Loop Filter Selection                */
    uint32_t ND:7;                      /**< bit:  8..14  Loop Divider Ratio                       */
    uint32_t :1;                        /**< bit:     15  Reserved */
    uint32_t QDPMC:7;                   /**< bit: 16..22  Output Divider Ratio for PMC Clock       */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t DCO_FILTER:4;              /**< bit: 24..27  Digitally Controlled Oscillator Filter Selection */
    uint32_t DCO_GAIN:2;                /**< bit: 28..29  Digitally Controlled Oscillator Gain Selection */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PMC_AUDIO_PLL0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_AUDIO_PLL0_OFFSET               (0x14C)                                       /**<  (PMC_AUDIO_PLL0) Audio PLL Register 0  Offset */

#define PMC_AUDIO_PLL0_PLLEN_Pos            0                                              /**< (PMC_AUDIO_PLL0) PLL Enable Position */
#define PMC_AUDIO_PLL0_PLLEN_Msk            (_U_(0x1) << PMC_AUDIO_PLL0_PLLEN_Pos)         /**< (PMC_AUDIO_PLL0) PLL Enable Mask */
#define PMC_AUDIO_PLL0_PLLEN                PMC_AUDIO_PLL0_PLLEN_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_AUDIO_PLL0_PLLEN_Msk instead */
#define PMC_AUDIO_PLL0_PADEN_Pos            1                                              /**< (PMC_AUDIO_PLL0) Pad Clock Enable Position */
#define PMC_AUDIO_PLL0_PADEN_Msk            (_U_(0x1) << PMC_AUDIO_PLL0_PADEN_Pos)         /**< (PMC_AUDIO_PLL0) Pad Clock Enable Mask */
#define PMC_AUDIO_PLL0_PADEN                PMC_AUDIO_PLL0_PADEN_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_AUDIO_PLL0_PADEN_Msk instead */
#define PMC_AUDIO_PLL0_PMCEN_Pos            2                                              /**< (PMC_AUDIO_PLL0) PMC Clock Enable Position */
#define PMC_AUDIO_PLL0_PMCEN_Msk            (_U_(0x1) << PMC_AUDIO_PLL0_PMCEN_Pos)         /**< (PMC_AUDIO_PLL0) PMC Clock Enable Mask */
#define PMC_AUDIO_PLL0_PMCEN                PMC_AUDIO_PLL0_PMCEN_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_AUDIO_PLL0_PMCEN_Msk instead */
#define PMC_AUDIO_PLL0_RESETN_Pos           3                                              /**< (PMC_AUDIO_PLL0) Audio PLL Reset Position */
#define PMC_AUDIO_PLL0_RESETN_Msk           (_U_(0x1) << PMC_AUDIO_PLL0_RESETN_Pos)        /**< (PMC_AUDIO_PLL0) Audio PLL Reset Mask */
#define PMC_AUDIO_PLL0_RESETN               PMC_AUDIO_PLL0_RESETN_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use PMC_AUDIO_PLL0_RESETN_Msk instead */
#define PMC_AUDIO_PLL0_PLLFLT_Pos           4                                              /**< (PMC_AUDIO_PLL0) PLL Loop Filter Selection Position */
#define PMC_AUDIO_PLL0_PLLFLT_Msk           (_U_(0xF) << PMC_AUDIO_PLL0_PLLFLT_Pos)        /**< (PMC_AUDIO_PLL0) PLL Loop Filter Selection Mask */
#define PMC_AUDIO_PLL0_PLLFLT(value)        (PMC_AUDIO_PLL0_PLLFLT_Msk & ((value) << PMC_AUDIO_PLL0_PLLFLT_Pos))
#define PMC_AUDIO_PLL0_ND_Pos               8                                              /**< (PMC_AUDIO_PLL0) Loop Divider Ratio Position */
#define PMC_AUDIO_PLL0_ND_Msk               (_U_(0x7F) << PMC_AUDIO_PLL0_ND_Pos)           /**< (PMC_AUDIO_PLL0) Loop Divider Ratio Mask */
#define PMC_AUDIO_PLL0_ND(value)            (PMC_AUDIO_PLL0_ND_Msk & ((value) << PMC_AUDIO_PLL0_ND_Pos))
#define PMC_AUDIO_PLL0_QDPMC_Pos            16                                             /**< (PMC_AUDIO_PLL0) Output Divider Ratio for PMC Clock Position */
#define PMC_AUDIO_PLL0_QDPMC_Msk            (_U_(0x7F) << PMC_AUDIO_PLL0_QDPMC_Pos)        /**< (PMC_AUDIO_PLL0) Output Divider Ratio for PMC Clock Mask */
#define PMC_AUDIO_PLL0_QDPMC(value)         (PMC_AUDIO_PLL0_QDPMC_Msk & ((value) << PMC_AUDIO_PLL0_QDPMC_Pos))
#define PMC_AUDIO_PLL0_DCO_FILTER_Pos       24                                             /**< (PMC_AUDIO_PLL0) Digitally Controlled Oscillator Filter Selection Position */
#define PMC_AUDIO_PLL0_DCO_FILTER_Msk       (_U_(0xF) << PMC_AUDIO_PLL0_DCO_FILTER_Pos)    /**< (PMC_AUDIO_PLL0) Digitally Controlled Oscillator Filter Selection Mask */
#define PMC_AUDIO_PLL0_DCO_FILTER(value)    (PMC_AUDIO_PLL0_DCO_FILTER_Msk & ((value) << PMC_AUDIO_PLL0_DCO_FILTER_Pos))
#define PMC_AUDIO_PLL0_DCO_GAIN_Pos         28                                             /**< (PMC_AUDIO_PLL0) Digitally Controlled Oscillator Gain Selection Position */
#define PMC_AUDIO_PLL0_DCO_GAIN_Msk         (_U_(0x3) << PMC_AUDIO_PLL0_DCO_GAIN_Pos)      /**< (PMC_AUDIO_PLL0) Digitally Controlled Oscillator Gain Selection Mask */
#define PMC_AUDIO_PLL0_DCO_GAIN(value)      (PMC_AUDIO_PLL0_DCO_GAIN_Msk & ((value) << PMC_AUDIO_PLL0_DCO_GAIN_Pos))
#define PMC_AUDIO_PLL0_MASK                 _U_(0x3F7F7FFF)                                /**< \deprecated (PMC_AUDIO_PLL0) Register MASK  (Use PMC_AUDIO_PLL0_Msk instead)  */
#define PMC_AUDIO_PLL0_Msk                  _U_(0x3F7F7FFF)                                /**< (PMC_AUDIO_PLL0) Register Mask  */


/* -------- PMC_AUDIO_PLL1 : (PMC Offset: 0x150) (R/W 32) Audio PLL Register 1 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t FRACR:22;                  /**< bit:  0..21  Fractional Loop Divider Setting          */
    uint32_t :2;                        /**< bit: 22..23  Reserved */
    uint32_t DIV:2;                     /**< bit: 24..25  Divider Value                            */
    uint32_t QDAUDIO:5;                 /**< bit: 26..30  Output Divider Ratio for Pad Clock       */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PMC_AUDIO_PLL1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PMC_AUDIO_PLL1_OFFSET               (0x150)                                       /**<  (PMC_AUDIO_PLL1) Audio PLL Register 1  Offset */

#define PMC_AUDIO_PLL1_FRACR_Pos            0                                              /**< (PMC_AUDIO_PLL1) Fractional Loop Divider Setting Position */
#define PMC_AUDIO_PLL1_FRACR_Msk            (_U_(0x3FFFFF) << PMC_AUDIO_PLL1_FRACR_Pos)    /**< (PMC_AUDIO_PLL1) Fractional Loop Divider Setting Mask */
#define PMC_AUDIO_PLL1_FRACR(value)         (PMC_AUDIO_PLL1_FRACR_Msk & ((value) << PMC_AUDIO_PLL1_FRACR_Pos))
#define PMC_AUDIO_PLL1_DIV_Pos              24                                             /**< (PMC_AUDIO_PLL1) Divider Value Position */
#define PMC_AUDIO_PLL1_DIV_Msk              (_U_(0x3) << PMC_AUDIO_PLL1_DIV_Pos)           /**< (PMC_AUDIO_PLL1) Divider Value Mask */
#define PMC_AUDIO_PLL1_DIV(value)           (PMC_AUDIO_PLL1_DIV_Msk & ((value) << PMC_AUDIO_PLL1_DIV_Pos))
#define   PMC_AUDIO_PLL1_DIV_DIV2_Val       _U_(0x2)                                       /**< (PMC_AUDIO_PLL1) Divide by 2  */
#define   PMC_AUDIO_PLL1_DIV_DIV3_Val       _U_(0x3)                                       /**< (PMC_AUDIO_PLL1) Divide by 3  */
#define PMC_AUDIO_PLL1_DIV_DIV2             (PMC_AUDIO_PLL1_DIV_DIV2_Val << PMC_AUDIO_PLL1_DIV_Pos)  /**< (PMC_AUDIO_PLL1) Divide by 2 Position  */
#define PMC_AUDIO_PLL1_DIV_DIV3             (PMC_AUDIO_PLL1_DIV_DIV3_Val << PMC_AUDIO_PLL1_DIV_Pos)  /**< (PMC_AUDIO_PLL1) Divide by 3 Position  */
#define PMC_AUDIO_PLL1_QDAUDIO_Pos          26                                             /**< (PMC_AUDIO_PLL1) Output Divider Ratio for Pad Clock Position */
#define PMC_AUDIO_PLL1_QDAUDIO_Msk          (_U_(0x1F) << PMC_AUDIO_PLL1_QDAUDIO_Pos)      /**< (PMC_AUDIO_PLL1) Output Divider Ratio for Pad Clock Mask */
#define PMC_AUDIO_PLL1_QDAUDIO(value)       (PMC_AUDIO_PLL1_QDAUDIO_Msk & ((value) << PMC_AUDIO_PLL1_QDAUDIO_Pos))
#define PMC_AUDIO_PLL1_MASK                 _U_(0x7F3FFFFF)                                /**< \deprecated (PMC_AUDIO_PLL1) Register MASK  (Use PMC_AUDIO_PLL1_Msk instead)  */
#define PMC_AUDIO_PLL1_Msk                  _U_(0x7F3FFFFF)                                /**< (PMC_AUDIO_PLL1) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief PMC hardware registers */
typedef struct {  
  __O  uint32_t PMC_SCER;       /**< (PMC Offset: 0x00) System Clock Enable Register */
  __O  uint32_t PMC_SCDR;       /**< (PMC Offset: 0x04) System Clock Disable Register */
  __I  uint32_t PMC_SCSR;       /**< (PMC Offset: 0x08) System Clock Status Register */
  __I  uint8_t                        Reserved1[4];
  __O  uint32_t PMC_PCER0;      /**< (PMC Offset: 0x10) Peripheral Clock Enable Register 0 */
  __O  uint32_t PMC_PCDR0;      /**< (PMC Offset: 0x14) Peripheral Clock Disable Register 0 */
  __I  uint32_t PMC_PCSR0;      /**< (PMC Offset: 0x18) Peripheral Clock Status Register 0 */
  __IO uint32_t CKGR_UCKR;      /**< (PMC Offset: 0x1C) UTMI Clock Register */
  __IO uint32_t CKGR_MOR;       /**< (PMC Offset: 0x20) Main Oscillator Register */
  __IO uint32_t CKGR_MCFR;      /**< (PMC Offset: 0x24) Main Clock Frequency Register */
  __IO uint32_t CKGR_PLLAR;     /**< (PMC Offset: 0x28) PLLA Register */
  __I  uint8_t                        Reserved2[4];
  __IO uint32_t PMC_MCKR;       /**< (PMC Offset: 0x30) Master Clock Register */
  __I  uint8_t                        Reserved3[4];
  __IO uint32_t PMC_USB;        /**< (PMC Offset: 0x38) USB Clock Register */
  __I  uint8_t                        Reserved4[4];
  __IO uint32_t PMC_PCK[3];     /**< (PMC Offset: 0x40) Programmable Clock 0 Register */
  __I  uint8_t                        Reserved5[20];
  __O  uint32_t PMC_IER;        /**< (PMC Offset: 0x60) Interrupt Enable Register */
  __O  uint32_t PMC_IDR;        /**< (PMC Offset: 0x64) Interrupt Disable Register */
  __I  uint32_t PMC_SR;         /**< (PMC Offset: 0x68) Status Register */
  __I  uint32_t PMC_IMR;        /**< (PMC Offset: 0x6C) Interrupt Mask Register */
  __IO uint32_t PMC_FSMR;       /**< (PMC Offset: 0x70) Fast Startup Mode Register */
  __IO uint32_t PMC_FSPR;       /**< (PMC Offset: 0x74) Fast Startup Polarity Register */
  __O  uint32_t PMC_FOCR;       /**< (PMC Offset: 0x78) Fault Output Clear Register */
  __I  uint8_t                        Reserved6[4];
  __IO uint32_t PMC_PLLICPR;    /**< (PMC Offset: 0x80) PLL Charge Pump Current Register */
  __I  uint8_t                        Reserved7[96];
  __IO uint32_t PMC_WPMR;       /**< (PMC Offset: 0xE4) Write ProtectIon Mode Register */
  __I  uint32_t PMC_WPSR;       /**< (PMC Offset: 0xE8) Write Protection Status Register */
  __I  uint8_t                        Reserved8[20];
  __O  uint32_t PMC_PCER1;      /**< (PMC Offset: 0x100) Peripheral Clock Enable Register 1 */
  __O  uint32_t PMC_PCDR1;      /**< (PMC Offset: 0x104) Peripheral Clock Disable Register 1 */
  __I  uint32_t PMC_PCSR1;      /**< (PMC Offset: 0x108) Peripheral Clock Status Register 1 */
  __IO uint32_t PMC_PCR;        /**< (PMC Offset: 0x10C) Peripheral Control Register */
  __IO uint32_t PMC_OCR;        /**< (PMC Offset: 0x110) Oscillator Calibration Register */
  __O  uint32_t PMC_SLPWK_ER0;  /**< (PMC Offset: 0x114) SleepWalking Enable Register 0 */
  __O  uint32_t PMC_SLPWK_DR0;  /**< (PMC Offset: 0x118) SleepWalking Disable Register 0 */
  __I  uint32_t PMC_SLPWK_SR0;  /**< (PMC Offset: 0x11C) SleepWalking Status Register 0 */
  __I  uint32_t PMC_SLPWK_ASR0; /**< (PMC Offset: 0x120) SleepWalking Activity Status Register 0 */
  __I  uint8_t                        Reserved9[16];
  __O  uint32_t PMC_SLPWK_ER1;  /**< (PMC Offset: 0x134) SleepWalking Enable Register 1 */
  __O  uint32_t PMC_SLPWK_DR1;  /**< (PMC Offset: 0x138) SleepWalking Disable Register 1 */
  __I  uint32_t PMC_SLPWK_SR1;  /**< (PMC Offset: 0x13C) SleepWalking Status Register 1 */
  __I  uint32_t PMC_SLPWK_ASR1; /**< (PMC Offset: 0x140) SleepWalking Activity Status Register 1 */
  __I  uint32_t PMC_SLPWK_AIPR; /**< (PMC Offset: 0x144) SleepWalking Activity In Progress Register */
  __IO uint32_t PMC_SLPWKCR;    /**< (PMC Offset: 0x148) SleepWalking Control Register */
  __IO uint32_t PMC_AUDIO_PLL0; /**< (PMC Offset: 0x14C) Audio PLL Register 0 */
  __IO uint32_t PMC_AUDIO_PLL1; /**< (PMC Offset: 0x150) Audio PLL Register 1 */
} Pmc;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief PMC hardware registers */
typedef struct {  
  __O  PMC_SCER_Type                  PMC_SCER;       /**< Offset: 0x00 ( /W  32) System Clock Enable Register */
  __O  PMC_SCDR_Type                  PMC_SCDR;       /**< Offset: 0x04 ( /W  32) System Clock Disable Register */
  __I  PMC_SCSR_Type                  PMC_SCSR;       /**< Offset: 0x08 (R/   32) System Clock Status Register */
  __I  uint8_t                        Reserved1[4];
  __O  PMC_PCER0_Type                 PMC_PCER0;      /**< Offset: 0x10 ( /W  32) Peripheral Clock Enable Register 0 */
  __O  PMC_PCDR0_Type                 PMC_PCDR0;      /**< Offset: 0x14 ( /W  32) Peripheral Clock Disable Register 0 */
  __I  PMC_PCSR0_Type                 PMC_PCSR0;      /**< Offset: 0x18 (R/   32) Peripheral Clock Status Register 0 */
  __IO CKGR_UCKR_Type                 CKGR_UCKR;      /**< Offset: 0x1C (R/W  32) UTMI Clock Register */
  __IO CKGR_MOR_Type                  CKGR_MOR;       /**< Offset: 0x20 (R/W  32) Main Oscillator Register */
  __IO CKGR_MCFR_Type                 CKGR_MCFR;      /**< Offset: 0x24 (R/W  32) Main Clock Frequency Register */
  __IO CKGR_PLLAR_Type                CKGR_PLLAR;     /**< Offset: 0x28 (R/W  32) PLLA Register */
  __I  uint8_t                        Reserved2[4];
  __IO PMC_MCKR_Type                  PMC_MCKR;       /**< Offset: 0x30 (R/W  32) Master Clock Register */
  __I  uint8_t                        Reserved3[4];
  __IO PMC_USB_Type                   PMC_USB;        /**< Offset: 0x38 (R/W  32) USB Clock Register */
  __I  uint8_t                        Reserved4[4];
  __IO PMC_PCK_Type                   PMC_PCK[3];     /**< Offset: 0x40 (R/W  32) Programmable Clock 0 Register */
  __I  uint8_t                        Reserved5[20];
  __O  PMC_IER_Type                   PMC_IER;        /**< Offset: 0x60 ( /W  32) Interrupt Enable Register */
  __O  PMC_IDR_Type                   PMC_IDR;        /**< Offset: 0x64 ( /W  32) Interrupt Disable Register */
  __I  PMC_SR_Type                    PMC_SR;         /**< Offset: 0x68 (R/   32) Status Register */
  __I  PMC_IMR_Type                   PMC_IMR;        /**< Offset: 0x6C (R/   32) Interrupt Mask Register */
  __IO PMC_FSMR_Type                  PMC_FSMR;       /**< Offset: 0x70 (R/W  32) Fast Startup Mode Register */
  __IO PMC_FSPR_Type                  PMC_FSPR;       /**< Offset: 0x74 (R/W  32) Fast Startup Polarity Register */
  __O  PMC_FOCR_Type                  PMC_FOCR;       /**< Offset: 0x78 ( /W  32) Fault Output Clear Register */
  __I  uint8_t                        Reserved6[4];
  __IO PMC_PLLICPR_Type               PMC_PLLICPR;    /**< Offset: 0x80 (R/W  32) PLL Charge Pump Current Register */
  __I  uint8_t                        Reserved7[96];
  __IO PMC_WPMR_Type                  PMC_WPMR;       /**< Offset: 0xE4 (R/W  32) Write ProtectIon Mode Register */
  __I  PMC_WPSR_Type                  PMC_WPSR;       /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
  __I  uint8_t                        Reserved8[20];
  __O  PMC_PCER1_Type                 PMC_PCER1;      /**< Offset: 0x100 ( /W  32) Peripheral Clock Enable Register 1 */
  __O  PMC_PCDR1_Type                 PMC_PCDR1;      /**< Offset: 0x104 ( /W  32) Peripheral Clock Disable Register 1 */
  __I  PMC_PCSR1_Type                 PMC_PCSR1;      /**< Offset: 0x108 (R/   32) Peripheral Clock Status Register 1 */
  __IO PMC_PCR_Type                   PMC_PCR;        /**< Offset: 0x10C (R/W  32) Peripheral Control Register */
  __IO PMC_OCR_Type                   PMC_OCR;        /**< Offset: 0x110 (R/W  32) Oscillator Calibration Register */
  __O  PMC_SLPWK_ER0_Type             PMC_SLPWK_ER0;  /**< Offset: 0x114 ( /W  32) SleepWalking Enable Register 0 */
  __O  PMC_SLPWK_DR0_Type             PMC_SLPWK_DR0;  /**< Offset: 0x118 ( /W  32) SleepWalking Disable Register 0 */
  __I  PMC_SLPWK_SR0_Type             PMC_SLPWK_SR0;  /**< Offset: 0x11C (R/   32) SleepWalking Status Register 0 */
  __I  PMC_SLPWK_ASR0_Type            PMC_SLPWK_ASR0; /**< Offset: 0x120 (R/   32) SleepWalking Activity Status Register 0 */
  __I  uint8_t                        Reserved9[16];
  __O  PMC_SLPWK_ER1_Type             PMC_SLPWK_ER1;  /**< Offset: 0x134 ( /W  32) SleepWalking Enable Register 1 */
  __O  PMC_SLPWK_DR1_Type             PMC_SLPWK_DR1;  /**< Offset: 0x138 ( /W  32) SleepWalking Disable Register 1 */
  __I  PMC_SLPWK_SR1_Type             PMC_SLPWK_SR1;  /**< Offset: 0x13C (R/   32) SleepWalking Status Register 1 */
  __I  PMC_SLPWK_ASR1_Type            PMC_SLPWK_ASR1; /**< Offset: 0x140 (R/   32) SleepWalking Activity Status Register 1 */
  __I  PMC_SLPWK_AIPR_Type            PMC_SLPWK_AIPR; /**< Offset: 0x144 (R/   32) SleepWalking Activity In Progress Register */
  __IO PMC_SLPWKCR_Type               PMC_SLPWKCR;    /**< Offset: 0x148 (R/W  32) SleepWalking Control Register */
  __IO PMC_AUDIO_PLL0_Type            PMC_AUDIO_PLL0; /**< Offset: 0x14C (R/W  32) Audio PLL Register 0 */
  __IO PMC_AUDIO_PLL1_Type            PMC_AUDIO_PLL1; /**< Offset: 0x150 (R/W  32) Audio PLL Register 1 */
} Pmc;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Power Management Controller */

#endif /* _SAMA5D2_PMC_COMPONENT_H_ */
