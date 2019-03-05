/**
 * \file
 *
 * \brief Component description for SMC
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
#ifndef _SAMA5D2_SMC_COMPONENT_H_
#define _SAMA5D2_SMC_COMPONENT_H_
#define _SAMA5D2_SMC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Static Memory Controller
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SMC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define SMC_11036                      /**< (SMC) Module ID */
#define REV_SMC T                      /**< (SMC) Module revision */

/* -------- SMC_HSMC_SETUP : (SMC Offset: 0x00) (R/W 32) Setup Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NWE_SETUP:6;               /**< bit:   0..5  NWE Setup Length                         */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t NCS_WR_SETUP:6;            /**< bit:  8..13  NCS Setup Length in Write Access         */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t NRD_SETUP:6;               /**< bit: 16..21  NRD Setup Length                         */
    uint32_t :2;                        /**< bit: 22..23  Reserved */
    uint32_t NCS_RD_SETUP:6;            /**< bit: 24..29  NCS Setup Length in Read Access          */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SETUP_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SETUP_OFFSET               (0x00)                                        /**<  (SMC_HSMC_SETUP) Setup Register  Offset */

#define SMC_HSMC_SETUP_NWE_SETUP_Pos        0                                              /**< (SMC_HSMC_SETUP) NWE Setup Length Position */
#define SMC_HSMC_SETUP_NWE_SETUP_Msk        (_U_(0x3F) << SMC_HSMC_SETUP_NWE_SETUP_Pos)    /**< (SMC_HSMC_SETUP) NWE Setup Length Mask */
#define SMC_HSMC_SETUP_NWE_SETUP(value)     (SMC_HSMC_SETUP_NWE_SETUP_Msk & ((value) << SMC_HSMC_SETUP_NWE_SETUP_Pos))
#define SMC_HSMC_SETUP_NCS_WR_SETUP_Pos     8                                              /**< (SMC_HSMC_SETUP) NCS Setup Length in Write Access Position */
#define SMC_HSMC_SETUP_NCS_WR_SETUP_Msk     (_U_(0x3F) << SMC_HSMC_SETUP_NCS_WR_SETUP_Pos)  /**< (SMC_HSMC_SETUP) NCS Setup Length in Write Access Mask */
#define SMC_HSMC_SETUP_NCS_WR_SETUP(value)  (SMC_HSMC_SETUP_NCS_WR_SETUP_Msk & ((value) << SMC_HSMC_SETUP_NCS_WR_SETUP_Pos))
#define SMC_HSMC_SETUP_NRD_SETUP_Pos        16                                             /**< (SMC_HSMC_SETUP) NRD Setup Length Position */
#define SMC_HSMC_SETUP_NRD_SETUP_Msk        (_U_(0x3F) << SMC_HSMC_SETUP_NRD_SETUP_Pos)    /**< (SMC_HSMC_SETUP) NRD Setup Length Mask */
#define SMC_HSMC_SETUP_NRD_SETUP(value)     (SMC_HSMC_SETUP_NRD_SETUP_Msk & ((value) << SMC_HSMC_SETUP_NRD_SETUP_Pos))
#define SMC_HSMC_SETUP_NCS_RD_SETUP_Pos     24                                             /**< (SMC_HSMC_SETUP) NCS Setup Length in Read Access Position */
#define SMC_HSMC_SETUP_NCS_RD_SETUP_Msk     (_U_(0x3F) << SMC_HSMC_SETUP_NCS_RD_SETUP_Pos)  /**< (SMC_HSMC_SETUP) NCS Setup Length in Read Access Mask */
#define SMC_HSMC_SETUP_NCS_RD_SETUP(value)  (SMC_HSMC_SETUP_NCS_RD_SETUP_Msk & ((value) << SMC_HSMC_SETUP_NCS_RD_SETUP_Pos))
#define SMC_HSMC_SETUP_MASK                 _U_(0x3F3F3F3F)                                /**< \deprecated (SMC_HSMC_SETUP) Register MASK  (Use SMC_HSMC_SETUP_Msk instead)  */
#define SMC_HSMC_SETUP_Msk                  _U_(0x3F3F3F3F)                                /**< (SMC_HSMC_SETUP) Register Mask  */


/* -------- SMC_HSMC_PULSE : (SMC Offset: 0x04) (R/W 32) Pulse Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NWE_PULSE:7;               /**< bit:   0..6  NWE Pulse Length                         */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t NCS_WR_PULSE:7;            /**< bit:  8..14  NCS Pulse Length in WRITE Access         */
    uint32_t :1;                        /**< bit:     15  Reserved */
    uint32_t NRD_PULSE:7;               /**< bit: 16..22  NRD Pulse Length                         */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t NCS_RD_PULSE:7;            /**< bit: 24..30  NCS Pulse Length in READ Access          */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_PULSE_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_PULSE_OFFSET               (0x04)                                        /**<  (SMC_HSMC_PULSE) Pulse Register  Offset */

#define SMC_HSMC_PULSE_NWE_PULSE_Pos        0                                              /**< (SMC_HSMC_PULSE) NWE Pulse Length Position */
#define SMC_HSMC_PULSE_NWE_PULSE_Msk        (_U_(0x7F) << SMC_HSMC_PULSE_NWE_PULSE_Pos)    /**< (SMC_HSMC_PULSE) NWE Pulse Length Mask */
#define SMC_HSMC_PULSE_NWE_PULSE(value)     (SMC_HSMC_PULSE_NWE_PULSE_Msk & ((value) << SMC_HSMC_PULSE_NWE_PULSE_Pos))
#define SMC_HSMC_PULSE_NCS_WR_PULSE_Pos     8                                              /**< (SMC_HSMC_PULSE) NCS Pulse Length in WRITE Access Position */
#define SMC_HSMC_PULSE_NCS_WR_PULSE_Msk     (_U_(0x7F) << SMC_HSMC_PULSE_NCS_WR_PULSE_Pos)  /**< (SMC_HSMC_PULSE) NCS Pulse Length in WRITE Access Mask */
#define SMC_HSMC_PULSE_NCS_WR_PULSE(value)  (SMC_HSMC_PULSE_NCS_WR_PULSE_Msk & ((value) << SMC_HSMC_PULSE_NCS_WR_PULSE_Pos))
#define SMC_HSMC_PULSE_NRD_PULSE_Pos        16                                             /**< (SMC_HSMC_PULSE) NRD Pulse Length Position */
#define SMC_HSMC_PULSE_NRD_PULSE_Msk        (_U_(0x7F) << SMC_HSMC_PULSE_NRD_PULSE_Pos)    /**< (SMC_HSMC_PULSE) NRD Pulse Length Mask */
#define SMC_HSMC_PULSE_NRD_PULSE(value)     (SMC_HSMC_PULSE_NRD_PULSE_Msk & ((value) << SMC_HSMC_PULSE_NRD_PULSE_Pos))
#define SMC_HSMC_PULSE_NCS_RD_PULSE_Pos     24                                             /**< (SMC_HSMC_PULSE) NCS Pulse Length in READ Access Position */
#define SMC_HSMC_PULSE_NCS_RD_PULSE_Msk     (_U_(0x7F) << SMC_HSMC_PULSE_NCS_RD_PULSE_Pos)  /**< (SMC_HSMC_PULSE) NCS Pulse Length in READ Access Mask */
#define SMC_HSMC_PULSE_NCS_RD_PULSE(value)  (SMC_HSMC_PULSE_NCS_RD_PULSE_Msk & ((value) << SMC_HSMC_PULSE_NCS_RD_PULSE_Pos))
#define SMC_HSMC_PULSE_MASK                 _U_(0x7F7F7F7F)                                /**< \deprecated (SMC_HSMC_PULSE) Register MASK  (Use SMC_HSMC_PULSE_Msk instead)  */
#define SMC_HSMC_PULSE_Msk                  _U_(0x7F7F7F7F)                                /**< (SMC_HSMC_PULSE) Register Mask  */


/* -------- SMC_HSMC_CYCLE : (SMC Offset: 0x08) (R/W 32) Cycle Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NWE_CYCLE:9;               /**< bit:   0..8  Total Write Cycle Length                 */
    uint32_t :7;                        /**< bit:  9..15  Reserved */
    uint32_t NRD_CYCLE:9;               /**< bit: 16..24  Total Read Cycle Length                  */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_CYCLE_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_CYCLE_OFFSET               (0x08)                                        /**<  (SMC_HSMC_CYCLE) Cycle Register  Offset */

#define SMC_HSMC_CYCLE_NWE_CYCLE_Pos        0                                              /**< (SMC_HSMC_CYCLE) Total Write Cycle Length Position */
#define SMC_HSMC_CYCLE_NWE_CYCLE_Msk        (_U_(0x1FF) << SMC_HSMC_CYCLE_NWE_CYCLE_Pos)   /**< (SMC_HSMC_CYCLE) Total Write Cycle Length Mask */
#define SMC_HSMC_CYCLE_NWE_CYCLE(value)     (SMC_HSMC_CYCLE_NWE_CYCLE_Msk & ((value) << SMC_HSMC_CYCLE_NWE_CYCLE_Pos))
#define SMC_HSMC_CYCLE_NRD_CYCLE_Pos        16                                             /**< (SMC_HSMC_CYCLE) Total Read Cycle Length Position */
#define SMC_HSMC_CYCLE_NRD_CYCLE_Msk        (_U_(0x1FF) << SMC_HSMC_CYCLE_NRD_CYCLE_Pos)   /**< (SMC_HSMC_CYCLE) Total Read Cycle Length Mask */
#define SMC_HSMC_CYCLE_NRD_CYCLE(value)     (SMC_HSMC_CYCLE_NRD_CYCLE_Msk & ((value) << SMC_HSMC_CYCLE_NRD_CYCLE_Pos))
#define SMC_HSMC_CYCLE_MASK                 _U_(0x1FF01FF)                                 /**< \deprecated (SMC_HSMC_CYCLE) Register MASK  (Use SMC_HSMC_CYCLE_Msk instead)  */
#define SMC_HSMC_CYCLE_Msk                  _U_(0x1FF01FF)                                 /**< (SMC_HSMC_CYCLE) Register Mask  */


/* -------- SMC_HSMC_TIMINGS : (SMC Offset: 0x0c) (R/W 32) Timings Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TCLR:4;                    /**< bit:   0..3  CLE to REN Low Delay                     */
    uint32_t TADL:4;                    /**< bit:   4..7  ALE to Data Start                        */
    uint32_t TAR:4;                     /**< bit:  8..11  ALE to REN Low Delay                     */
    uint32_t OCMS:1;                    /**< bit:     12  Off Chip Memory Scrambling Enable        */
    uint32_t :3;                        /**< bit: 13..15  Reserved */
    uint32_t TRR:4;                     /**< bit: 16..19  Ready to REN Low Delay                   */
    uint32_t :4;                        /**< bit: 20..23  Reserved */
    uint32_t TWB:4;                     /**< bit: 24..27  WEN High to REN to Busy                  */
    uint32_t :3;                        /**< bit: 28..30  Reserved */
    uint32_t NFSEL:1;                   /**< bit:     31  NAND Flash Selection                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_TIMINGS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_TIMINGS_OFFSET             (0x0C)                                        /**<  (SMC_HSMC_TIMINGS) Timings Register  Offset */

#define SMC_HSMC_TIMINGS_TCLR_Pos           0                                              /**< (SMC_HSMC_TIMINGS) CLE to REN Low Delay Position */
#define SMC_HSMC_TIMINGS_TCLR_Msk           (_U_(0xF) << SMC_HSMC_TIMINGS_TCLR_Pos)        /**< (SMC_HSMC_TIMINGS) CLE to REN Low Delay Mask */
#define SMC_HSMC_TIMINGS_TCLR(value)        (SMC_HSMC_TIMINGS_TCLR_Msk & ((value) << SMC_HSMC_TIMINGS_TCLR_Pos))
#define SMC_HSMC_TIMINGS_TADL_Pos           4                                              /**< (SMC_HSMC_TIMINGS) ALE to Data Start Position */
#define SMC_HSMC_TIMINGS_TADL_Msk           (_U_(0xF) << SMC_HSMC_TIMINGS_TADL_Pos)        /**< (SMC_HSMC_TIMINGS) ALE to Data Start Mask */
#define SMC_HSMC_TIMINGS_TADL(value)        (SMC_HSMC_TIMINGS_TADL_Msk & ((value) << SMC_HSMC_TIMINGS_TADL_Pos))
#define SMC_HSMC_TIMINGS_TAR_Pos            8                                              /**< (SMC_HSMC_TIMINGS) ALE to REN Low Delay Position */
#define SMC_HSMC_TIMINGS_TAR_Msk            (_U_(0xF) << SMC_HSMC_TIMINGS_TAR_Pos)         /**< (SMC_HSMC_TIMINGS) ALE to REN Low Delay Mask */
#define SMC_HSMC_TIMINGS_TAR(value)         (SMC_HSMC_TIMINGS_TAR_Msk & ((value) << SMC_HSMC_TIMINGS_TAR_Pos))
#define SMC_HSMC_TIMINGS_OCMS_Pos           12                                             /**< (SMC_HSMC_TIMINGS) Off Chip Memory Scrambling Enable Position */
#define SMC_HSMC_TIMINGS_OCMS_Msk           (_U_(0x1) << SMC_HSMC_TIMINGS_OCMS_Pos)        /**< (SMC_HSMC_TIMINGS) Off Chip Memory Scrambling Enable Mask */
#define SMC_HSMC_TIMINGS_OCMS               SMC_HSMC_TIMINGS_OCMS_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_TIMINGS_OCMS_Msk instead */
#define SMC_HSMC_TIMINGS_TRR_Pos            16                                             /**< (SMC_HSMC_TIMINGS) Ready to REN Low Delay Position */
#define SMC_HSMC_TIMINGS_TRR_Msk            (_U_(0xF) << SMC_HSMC_TIMINGS_TRR_Pos)         /**< (SMC_HSMC_TIMINGS) Ready to REN Low Delay Mask */
#define SMC_HSMC_TIMINGS_TRR(value)         (SMC_HSMC_TIMINGS_TRR_Msk & ((value) << SMC_HSMC_TIMINGS_TRR_Pos))
#define SMC_HSMC_TIMINGS_TWB_Pos            24                                             /**< (SMC_HSMC_TIMINGS) WEN High to REN to Busy Position */
#define SMC_HSMC_TIMINGS_TWB_Msk            (_U_(0xF) << SMC_HSMC_TIMINGS_TWB_Pos)         /**< (SMC_HSMC_TIMINGS) WEN High to REN to Busy Mask */
#define SMC_HSMC_TIMINGS_TWB(value)         (SMC_HSMC_TIMINGS_TWB_Msk & ((value) << SMC_HSMC_TIMINGS_TWB_Pos))
#define SMC_HSMC_TIMINGS_NFSEL_Pos          31                                             /**< (SMC_HSMC_TIMINGS) NAND Flash Selection Position */
#define SMC_HSMC_TIMINGS_NFSEL_Msk          (_U_(0x1) << SMC_HSMC_TIMINGS_NFSEL_Pos)       /**< (SMC_HSMC_TIMINGS) NAND Flash Selection Mask */
#define SMC_HSMC_TIMINGS_NFSEL              SMC_HSMC_TIMINGS_NFSEL_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_TIMINGS_NFSEL_Msk instead */
#define SMC_HSMC_TIMINGS_MASK               _U_(0x8F0F1FFF)                                /**< \deprecated (SMC_HSMC_TIMINGS) Register MASK  (Use SMC_HSMC_TIMINGS_Msk instead)  */
#define SMC_HSMC_TIMINGS_Msk                _U_(0x8F0F1FFF)                                /**< (SMC_HSMC_TIMINGS) Register Mask  */


/* -------- SMC_HSMC_MODE : (SMC Offset: 0x10) (R/W 32) Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t READ_MODE:1;               /**< bit:      0  Selection of the Control Signal for Read Operation */
    uint32_t WRITE_MODE:1;              /**< bit:      1  Selection of the Control Signal for Write Operation */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t EXNW_MODE:2;               /**< bit:   4..5  NWAIT Mode                               */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t BAT:1;                     /**< bit:      8  Byte Access Type                         */
    uint32_t :3;                        /**< bit:  9..11  Reserved */
    uint32_t DBW:1;                     /**< bit:     12  Data Bus Width                           */
    uint32_t :3;                        /**< bit: 13..15  Reserved */
    uint32_t TDF_CYCLES:4;              /**< bit: 16..19  Data Float Time                          */
    uint32_t TDF_MODE:1;                /**< bit:     20  TDF Optimization                         */
    uint32_t :11;                       /**< bit: 21..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_MODE_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_MODE_OFFSET                (0x10)                                        /**<  (SMC_HSMC_MODE) Mode Register  Offset */

#define SMC_HSMC_MODE_READ_MODE_Pos         0                                              /**< (SMC_HSMC_MODE) Selection of the Control Signal for Read Operation Position */
#define SMC_HSMC_MODE_READ_MODE_Msk         (_U_(0x1) << SMC_HSMC_MODE_READ_MODE_Pos)      /**< (SMC_HSMC_MODE) Selection of the Control Signal for Read Operation Mask */
#define SMC_HSMC_MODE_READ_MODE             SMC_HSMC_MODE_READ_MODE_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_MODE_READ_MODE_Msk instead */
#define   SMC_HSMC_MODE_READ_MODE_NCS_CTRL_Val _U_(0x0)                                       /**< (SMC_HSMC_MODE) The Read operation is controlled by the NCS signal.  */
#define   SMC_HSMC_MODE_READ_MODE_NRD_CTRL_Val _U_(0x1)                                       /**< (SMC_HSMC_MODE) The Read operation is controlled by the NRD signal.  */
#define SMC_HSMC_MODE_READ_MODE_NCS_CTRL    (SMC_HSMC_MODE_READ_MODE_NCS_CTRL_Val << SMC_HSMC_MODE_READ_MODE_Pos)  /**< (SMC_HSMC_MODE) The Read operation is controlled by the NCS signal. Position  */
#define SMC_HSMC_MODE_READ_MODE_NRD_CTRL    (SMC_HSMC_MODE_READ_MODE_NRD_CTRL_Val << SMC_HSMC_MODE_READ_MODE_Pos)  /**< (SMC_HSMC_MODE) The Read operation is controlled by the NRD signal. Position  */
#define SMC_HSMC_MODE_WRITE_MODE_Pos        1                                              /**< (SMC_HSMC_MODE) Selection of the Control Signal for Write Operation Position */
#define SMC_HSMC_MODE_WRITE_MODE_Msk        (_U_(0x1) << SMC_HSMC_MODE_WRITE_MODE_Pos)     /**< (SMC_HSMC_MODE) Selection of the Control Signal for Write Operation Mask */
#define SMC_HSMC_MODE_WRITE_MODE            SMC_HSMC_MODE_WRITE_MODE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_MODE_WRITE_MODE_Msk instead */
#define   SMC_HSMC_MODE_WRITE_MODE_NCS_CTRL_Val _U_(0x0)                                       /**< (SMC_HSMC_MODE) The Write operation is controller by the NCS signal.  */
#define   SMC_HSMC_MODE_WRITE_MODE_NWE_CTRL_Val _U_(0x1)                                       /**< (SMC_HSMC_MODE) The Write operation is controlled by the NWE signal  */
#define SMC_HSMC_MODE_WRITE_MODE_NCS_CTRL   (SMC_HSMC_MODE_WRITE_MODE_NCS_CTRL_Val << SMC_HSMC_MODE_WRITE_MODE_Pos)  /**< (SMC_HSMC_MODE) The Write operation is controller by the NCS signal. Position  */
#define SMC_HSMC_MODE_WRITE_MODE_NWE_CTRL   (SMC_HSMC_MODE_WRITE_MODE_NWE_CTRL_Val << SMC_HSMC_MODE_WRITE_MODE_Pos)  /**< (SMC_HSMC_MODE) The Write operation is controlled by the NWE signal Position  */
#define SMC_HSMC_MODE_EXNW_MODE_Pos         4                                              /**< (SMC_HSMC_MODE) NWAIT Mode Position */
#define SMC_HSMC_MODE_EXNW_MODE_Msk         (_U_(0x3) << SMC_HSMC_MODE_EXNW_MODE_Pos)      /**< (SMC_HSMC_MODE) NWAIT Mode Mask */
#define SMC_HSMC_MODE_EXNW_MODE(value)      (SMC_HSMC_MODE_EXNW_MODE_Msk & ((value) << SMC_HSMC_MODE_EXNW_MODE_Pos))
#define   SMC_HSMC_MODE_EXNW_MODE_DISABLED_Val _U_(0x0)                                       /**< (SMC_HSMC_MODE) Disabled-The NWAIT input signal is ignored on the corresponding Chip Select.  */
#define   SMC_HSMC_MODE_EXNW_MODE_FROZEN_Val _U_(0x2)                                       /**< (SMC_HSMC_MODE) Frozen Mode-If asserted, the NWAIT signal freezes the current read or write cycle. After deassertion, the read/write cycle is resumed from the point where it was stopped.  */
#define   SMC_HSMC_MODE_EXNW_MODE_READY_Val _U_(0x3)                                       /**< (SMC_HSMC_MODE) Ready Mode-The NWAIT signal indicates the availability of the external device at the end of the pulse of the controlling read or write signal, to complete the access. If high, the access normally completes. If low, the access is extended until NWAIT returns high.  */
#define SMC_HSMC_MODE_EXNW_MODE_DISABLED    (SMC_HSMC_MODE_EXNW_MODE_DISABLED_Val << SMC_HSMC_MODE_EXNW_MODE_Pos)  /**< (SMC_HSMC_MODE) Disabled-The NWAIT input signal is ignored on the corresponding Chip Select. Position  */
#define SMC_HSMC_MODE_EXNW_MODE_FROZEN      (SMC_HSMC_MODE_EXNW_MODE_FROZEN_Val << SMC_HSMC_MODE_EXNW_MODE_Pos)  /**< (SMC_HSMC_MODE) Frozen Mode-If asserted, the NWAIT signal freezes the current read or write cycle. After deassertion, the read/write cycle is resumed from the point where it was stopped. Position  */
#define SMC_HSMC_MODE_EXNW_MODE_READY       (SMC_HSMC_MODE_EXNW_MODE_READY_Val << SMC_HSMC_MODE_EXNW_MODE_Pos)  /**< (SMC_HSMC_MODE) Ready Mode-The NWAIT signal indicates the availability of the external device at the end of the pulse of the controlling read or write signal, to complete the access. If high, the access normally completes. If low, the access is extended until NWAIT returns high. Position  */
#define SMC_HSMC_MODE_BAT_Pos               8                                              /**< (SMC_HSMC_MODE) Byte Access Type Position */
#define SMC_HSMC_MODE_BAT_Msk               (_U_(0x1) << SMC_HSMC_MODE_BAT_Pos)            /**< (SMC_HSMC_MODE) Byte Access Type Mask */
#define SMC_HSMC_MODE_BAT                   SMC_HSMC_MODE_BAT_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_MODE_BAT_Msk instead */
#define   SMC_HSMC_MODE_BAT_BYTE_SELECT_Val _U_(0x0)                                       /**< (SMC_HSMC_MODE) Byte select access type:- Write operation is controlled using NCS, NWE, NBS0, NBS1.- Read operation is controlled using NCS, NRD, NBS0, NBS1.  */
#define   SMC_HSMC_MODE_BAT_BYTE_WRITE_Val  _U_(0x1)                                       /**< (SMC_HSMC_MODE) Byte write access type:- Write operation is controlled using NCS, NWR0, NWR1.- Read operation is controlled using NCS and NRD.  */
#define SMC_HSMC_MODE_BAT_BYTE_SELECT       (SMC_HSMC_MODE_BAT_BYTE_SELECT_Val << SMC_HSMC_MODE_BAT_Pos)  /**< (SMC_HSMC_MODE) Byte select access type:- Write operation is controlled using NCS, NWE, NBS0, NBS1.- Read operation is controlled using NCS, NRD, NBS0, NBS1. Position  */
#define SMC_HSMC_MODE_BAT_BYTE_WRITE        (SMC_HSMC_MODE_BAT_BYTE_WRITE_Val << SMC_HSMC_MODE_BAT_Pos)  /**< (SMC_HSMC_MODE) Byte write access type:- Write operation is controlled using NCS, NWR0, NWR1.- Read operation is controlled using NCS and NRD. Position  */
#define SMC_HSMC_MODE_DBW_Pos               12                                             /**< (SMC_HSMC_MODE) Data Bus Width Position */
#define SMC_HSMC_MODE_DBW_Msk               (_U_(0x1) << SMC_HSMC_MODE_DBW_Pos)            /**< (SMC_HSMC_MODE) Data Bus Width Mask */
#define SMC_HSMC_MODE_DBW                   SMC_HSMC_MODE_DBW_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_MODE_DBW_Msk instead */
#define   SMC_HSMC_MODE_DBW_BIT_8_Val       _U_(0x0)                                       /**< (SMC_HSMC_MODE) 8-bit bus  */
#define   SMC_HSMC_MODE_DBW_BIT_16_Val      _U_(0x1)                                       /**< (SMC_HSMC_MODE) 16-bit bus  */
#define SMC_HSMC_MODE_DBW_BIT_8             (SMC_HSMC_MODE_DBW_BIT_8_Val << SMC_HSMC_MODE_DBW_Pos)  /**< (SMC_HSMC_MODE) 8-bit bus Position  */
#define SMC_HSMC_MODE_DBW_BIT_16            (SMC_HSMC_MODE_DBW_BIT_16_Val << SMC_HSMC_MODE_DBW_Pos)  /**< (SMC_HSMC_MODE) 16-bit bus Position  */
#define SMC_HSMC_MODE_TDF_CYCLES_Pos        16                                             /**< (SMC_HSMC_MODE) Data Float Time Position */
#define SMC_HSMC_MODE_TDF_CYCLES_Msk        (_U_(0xF) << SMC_HSMC_MODE_TDF_CYCLES_Pos)     /**< (SMC_HSMC_MODE) Data Float Time Mask */
#define SMC_HSMC_MODE_TDF_CYCLES(value)     (SMC_HSMC_MODE_TDF_CYCLES_Msk & ((value) << SMC_HSMC_MODE_TDF_CYCLES_Pos))
#define SMC_HSMC_MODE_TDF_MODE_Pos          20                                             /**< (SMC_HSMC_MODE) TDF Optimization Position */
#define SMC_HSMC_MODE_TDF_MODE_Msk          (_U_(0x1) << SMC_HSMC_MODE_TDF_MODE_Pos)       /**< (SMC_HSMC_MODE) TDF Optimization Mask */
#define SMC_HSMC_MODE_TDF_MODE              SMC_HSMC_MODE_TDF_MODE_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_MODE_TDF_MODE_Msk instead */
#define SMC_HSMC_MODE_MASK                  _U_(0x1F1133)                                  /**< \deprecated (SMC_HSMC_MODE) Register MASK  (Use SMC_HSMC_MODE_Msk instead)  */
#define SMC_HSMC_MODE_Msk                   _U_(0x1F1133)                                  /**< (SMC_HSMC_MODE) Register Mask  */


/* -------- SMC_HSMC_PMECC : (SMC Offset: 0x00) (R/ 32) PMECC Redundancy 0 Register (sec_num = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ECC:32;                    /**< bit:  0..31  BCH Redundancy                           */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_PMECC_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_PMECC_OFFSET               (0x00)                                        /**<  (SMC_HSMC_PMECC) PMECC Redundancy 0 Register (sec_num = 0)  Offset */

#define SMC_HSMC_PMECC_ECC_Pos              0                                              /**< (SMC_HSMC_PMECC) BCH Redundancy Position */
#define SMC_HSMC_PMECC_ECC_Msk              (_U_(0xFFFFFFFF) << SMC_HSMC_PMECC_ECC_Pos)    /**< (SMC_HSMC_PMECC) BCH Redundancy Mask */
#define SMC_HSMC_PMECC_ECC(value)           (SMC_HSMC_PMECC_ECC_Msk & ((value) << SMC_HSMC_PMECC_ECC_Pos))
#define SMC_HSMC_PMECC_MASK                 _U_(0xFFFFFFFF)                                /**< \deprecated (SMC_HSMC_PMECC) Register MASK  (Use SMC_HSMC_PMECC_Msk instead)  */
#define SMC_HSMC_PMECC_Msk                  _U_(0xFFFFFFFF)                                /**< (SMC_HSMC_PMECC) Register Mask  */


/* -------- SMC_HSMC_REM0_ : (SMC Offset: 0x00) (R/ 32) PMECC Remainder 0 Register (sec_num = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t REM2NP1:14;                /**< bit:  0..13  BCH Remainder 2 * N + 1                  */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t REM2NP3:14;                /**< bit: 16..29  BCH Remainder 2 * N + 3                  */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_REM0__Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_REM0__OFFSET               (0x00)                                        /**<  (SMC_HSMC_REM0_) PMECC Remainder 0 Register (sec_num = 0)  Offset */

#define SMC_HSMC_REM0__REM2NP1_Pos          0                                              /**< (SMC_HSMC_REM0_) BCH Remainder 2 * N + 1 Position */
#define SMC_HSMC_REM0__REM2NP1_Msk          (_U_(0x3FFF) << SMC_HSMC_REM0__REM2NP1_Pos)    /**< (SMC_HSMC_REM0_) BCH Remainder 2 * N + 1 Mask */
#define SMC_HSMC_REM0__REM2NP1(value)       (SMC_HSMC_REM0__REM2NP1_Msk & ((value) << SMC_HSMC_REM0__REM2NP1_Pos))
#define SMC_HSMC_REM0__REM2NP3_Pos          16                                             /**< (SMC_HSMC_REM0_) BCH Remainder 2 * N + 3 Position */
#define SMC_HSMC_REM0__REM2NP3_Msk          (_U_(0x3FFF) << SMC_HSMC_REM0__REM2NP3_Pos)    /**< (SMC_HSMC_REM0_) BCH Remainder 2 * N + 3 Mask */
#define SMC_HSMC_REM0__REM2NP3(value)       (SMC_HSMC_REM0__REM2NP3_Msk & ((value) << SMC_HSMC_REM0__REM2NP3_Pos))
#define SMC_HSMC_REM0__MASK                 _U_(0x3FFF3FFF)                                /**< \deprecated (SMC_HSMC_REM0_) Register MASK  (Use SMC_HSMC_REM0__Msk instead)  */
#define SMC_HSMC_REM0__Msk                  _U_(0x3FFF3FFF)                                /**< (SMC_HSMC_REM0_) Register Mask  */


/* -------- SMC_HSMC_REM1_ : (SMC Offset: 0x04) (R/ 32) PMECC Remainder 1 Register (sec_num = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t REM2NP1:14;                /**< bit:  0..13  BCH Remainder 2 * N + 1                  */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t REM2NP3:14;                /**< bit: 16..29  BCH Remainder 2 * N + 3                  */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_REM1__Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_REM1__OFFSET               (0x04)                                        /**<  (SMC_HSMC_REM1_) PMECC Remainder 1 Register (sec_num = 0)  Offset */

#define SMC_HSMC_REM1__REM2NP1_Pos          0                                              /**< (SMC_HSMC_REM1_) BCH Remainder 2 * N + 1 Position */
#define SMC_HSMC_REM1__REM2NP1_Msk          (_U_(0x3FFF) << SMC_HSMC_REM1__REM2NP1_Pos)    /**< (SMC_HSMC_REM1_) BCH Remainder 2 * N + 1 Mask */
#define SMC_HSMC_REM1__REM2NP1(value)       (SMC_HSMC_REM1__REM2NP1_Msk & ((value) << SMC_HSMC_REM1__REM2NP1_Pos))
#define SMC_HSMC_REM1__REM2NP3_Pos          16                                             /**< (SMC_HSMC_REM1_) BCH Remainder 2 * N + 3 Position */
#define SMC_HSMC_REM1__REM2NP3_Msk          (_U_(0x3FFF) << SMC_HSMC_REM1__REM2NP3_Pos)    /**< (SMC_HSMC_REM1_) BCH Remainder 2 * N + 3 Mask */
#define SMC_HSMC_REM1__REM2NP3(value)       (SMC_HSMC_REM1__REM2NP3_Msk & ((value) << SMC_HSMC_REM1__REM2NP3_Pos))
#define SMC_HSMC_REM1__MASK                 _U_(0x3FFF3FFF)                                /**< \deprecated (SMC_HSMC_REM1_) Register MASK  (Use SMC_HSMC_REM1__Msk instead)  */
#define SMC_HSMC_REM1__Msk                  _U_(0x3FFF3FFF)                                /**< (SMC_HSMC_REM1_) Register Mask  */


/* -------- SMC_HSMC_REM2_ : (SMC Offset: 0x08) (R/ 32) PMECC Remainder 2 Register (sec_num = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t REM2NP1:14;                /**< bit:  0..13  BCH Remainder 2 * N + 1                  */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t REM2NP3:14;                /**< bit: 16..29  BCH Remainder 2 * N + 3                  */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_REM2__Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_REM2__OFFSET               (0x08)                                        /**<  (SMC_HSMC_REM2_) PMECC Remainder 2 Register (sec_num = 0)  Offset */

#define SMC_HSMC_REM2__REM2NP1_Pos          0                                              /**< (SMC_HSMC_REM2_) BCH Remainder 2 * N + 1 Position */
#define SMC_HSMC_REM2__REM2NP1_Msk          (_U_(0x3FFF) << SMC_HSMC_REM2__REM2NP1_Pos)    /**< (SMC_HSMC_REM2_) BCH Remainder 2 * N + 1 Mask */
#define SMC_HSMC_REM2__REM2NP1(value)       (SMC_HSMC_REM2__REM2NP1_Msk & ((value) << SMC_HSMC_REM2__REM2NP1_Pos))
#define SMC_HSMC_REM2__REM2NP3_Pos          16                                             /**< (SMC_HSMC_REM2_) BCH Remainder 2 * N + 3 Position */
#define SMC_HSMC_REM2__REM2NP3_Msk          (_U_(0x3FFF) << SMC_HSMC_REM2__REM2NP3_Pos)    /**< (SMC_HSMC_REM2_) BCH Remainder 2 * N + 3 Mask */
#define SMC_HSMC_REM2__REM2NP3(value)       (SMC_HSMC_REM2__REM2NP3_Msk & ((value) << SMC_HSMC_REM2__REM2NP3_Pos))
#define SMC_HSMC_REM2__MASK                 _U_(0x3FFF3FFF)                                /**< \deprecated (SMC_HSMC_REM2_) Register MASK  (Use SMC_HSMC_REM2__Msk instead)  */
#define SMC_HSMC_REM2__Msk                  _U_(0x3FFF3FFF)                                /**< (SMC_HSMC_REM2_) Register Mask  */


/* -------- SMC_HSMC_REM3_ : (SMC Offset: 0x0c) (R/ 32) PMECC Remainder 3 Register (sec_num = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t REM2NP1:14;                /**< bit:  0..13  BCH Remainder 2 * N + 1                  */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t REM2NP3:14;                /**< bit: 16..29  BCH Remainder 2 * N + 3                  */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_REM3__Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_REM3__OFFSET               (0x0C)                                        /**<  (SMC_HSMC_REM3_) PMECC Remainder 3 Register (sec_num = 0)  Offset */

#define SMC_HSMC_REM3__REM2NP1_Pos          0                                              /**< (SMC_HSMC_REM3_) BCH Remainder 2 * N + 1 Position */
#define SMC_HSMC_REM3__REM2NP1_Msk          (_U_(0x3FFF) << SMC_HSMC_REM3__REM2NP1_Pos)    /**< (SMC_HSMC_REM3_) BCH Remainder 2 * N + 1 Mask */
#define SMC_HSMC_REM3__REM2NP1(value)       (SMC_HSMC_REM3__REM2NP1_Msk & ((value) << SMC_HSMC_REM3__REM2NP1_Pos))
#define SMC_HSMC_REM3__REM2NP3_Pos          16                                             /**< (SMC_HSMC_REM3_) BCH Remainder 2 * N + 3 Position */
#define SMC_HSMC_REM3__REM2NP3_Msk          (_U_(0x3FFF) << SMC_HSMC_REM3__REM2NP3_Pos)    /**< (SMC_HSMC_REM3_) BCH Remainder 2 * N + 3 Mask */
#define SMC_HSMC_REM3__REM2NP3(value)       (SMC_HSMC_REM3__REM2NP3_Msk & ((value) << SMC_HSMC_REM3__REM2NP3_Pos))
#define SMC_HSMC_REM3__MASK                 _U_(0x3FFF3FFF)                                /**< \deprecated (SMC_HSMC_REM3_) Register MASK  (Use SMC_HSMC_REM3__Msk instead)  */
#define SMC_HSMC_REM3__Msk                  _U_(0x3FFF3FFF)                                /**< (SMC_HSMC_REM3_) Register Mask  */


/* -------- SMC_HSMC_REM4_ : (SMC Offset: 0x10) (R/ 32) PMECC Remainder 4 Register (sec_num = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t REM2NP1:14;                /**< bit:  0..13  BCH Remainder 2 * N + 1                  */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t REM2NP3:14;                /**< bit: 16..29  BCH Remainder 2 * N + 3                  */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_REM4__Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_REM4__OFFSET               (0x10)                                        /**<  (SMC_HSMC_REM4_) PMECC Remainder 4 Register (sec_num = 0)  Offset */

#define SMC_HSMC_REM4__REM2NP1_Pos          0                                              /**< (SMC_HSMC_REM4_) BCH Remainder 2 * N + 1 Position */
#define SMC_HSMC_REM4__REM2NP1_Msk          (_U_(0x3FFF) << SMC_HSMC_REM4__REM2NP1_Pos)    /**< (SMC_HSMC_REM4_) BCH Remainder 2 * N + 1 Mask */
#define SMC_HSMC_REM4__REM2NP1(value)       (SMC_HSMC_REM4__REM2NP1_Msk & ((value) << SMC_HSMC_REM4__REM2NP1_Pos))
#define SMC_HSMC_REM4__REM2NP3_Pos          16                                             /**< (SMC_HSMC_REM4_) BCH Remainder 2 * N + 3 Position */
#define SMC_HSMC_REM4__REM2NP3_Msk          (_U_(0x3FFF) << SMC_HSMC_REM4__REM2NP3_Pos)    /**< (SMC_HSMC_REM4_) BCH Remainder 2 * N + 3 Mask */
#define SMC_HSMC_REM4__REM2NP3(value)       (SMC_HSMC_REM4__REM2NP3_Msk & ((value) << SMC_HSMC_REM4__REM2NP3_Pos))
#define SMC_HSMC_REM4__MASK                 _U_(0x3FFF3FFF)                                /**< \deprecated (SMC_HSMC_REM4_) Register MASK  (Use SMC_HSMC_REM4__Msk instead)  */
#define SMC_HSMC_REM4__Msk                  _U_(0x3FFF3FFF)                                /**< (SMC_HSMC_REM4_) Register Mask  */


/* -------- SMC_HSMC_REM5_ : (SMC Offset: 0x14) (R/ 32) PMECC Remainder 5 Register (sec_num = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t REM2NP1:14;                /**< bit:  0..13  BCH Remainder 2 * N + 1                  */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t REM2NP3:14;                /**< bit: 16..29  BCH Remainder 2 * N + 3                  */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_REM5__Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_REM5__OFFSET               (0x14)                                        /**<  (SMC_HSMC_REM5_) PMECC Remainder 5 Register (sec_num = 0)  Offset */

#define SMC_HSMC_REM5__REM2NP1_Pos          0                                              /**< (SMC_HSMC_REM5_) BCH Remainder 2 * N + 1 Position */
#define SMC_HSMC_REM5__REM2NP1_Msk          (_U_(0x3FFF) << SMC_HSMC_REM5__REM2NP1_Pos)    /**< (SMC_HSMC_REM5_) BCH Remainder 2 * N + 1 Mask */
#define SMC_HSMC_REM5__REM2NP1(value)       (SMC_HSMC_REM5__REM2NP1_Msk & ((value) << SMC_HSMC_REM5__REM2NP1_Pos))
#define SMC_HSMC_REM5__REM2NP3_Pos          16                                             /**< (SMC_HSMC_REM5_) BCH Remainder 2 * N + 3 Position */
#define SMC_HSMC_REM5__REM2NP3_Msk          (_U_(0x3FFF) << SMC_HSMC_REM5__REM2NP3_Pos)    /**< (SMC_HSMC_REM5_) BCH Remainder 2 * N + 3 Mask */
#define SMC_HSMC_REM5__REM2NP3(value)       (SMC_HSMC_REM5__REM2NP3_Msk & ((value) << SMC_HSMC_REM5__REM2NP3_Pos))
#define SMC_HSMC_REM5__MASK                 _U_(0x3FFF3FFF)                                /**< \deprecated (SMC_HSMC_REM5_) Register MASK  (Use SMC_HSMC_REM5__Msk instead)  */
#define SMC_HSMC_REM5__Msk                  _U_(0x3FFF3FFF)                                /**< (SMC_HSMC_REM5_) Register Mask  */


/* -------- SMC_HSMC_REM6_ : (SMC Offset: 0x18) (R/ 32) PMECC Remainder 6 Register (sec_num = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t REM2NP1:14;                /**< bit:  0..13  BCH Remainder 2 * N + 1                  */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t REM2NP3:14;                /**< bit: 16..29  BCH Remainder 2 * N + 3                  */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_REM6__Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_REM6__OFFSET               (0x18)                                        /**<  (SMC_HSMC_REM6_) PMECC Remainder 6 Register (sec_num = 0)  Offset */

#define SMC_HSMC_REM6__REM2NP1_Pos          0                                              /**< (SMC_HSMC_REM6_) BCH Remainder 2 * N + 1 Position */
#define SMC_HSMC_REM6__REM2NP1_Msk          (_U_(0x3FFF) << SMC_HSMC_REM6__REM2NP1_Pos)    /**< (SMC_HSMC_REM6_) BCH Remainder 2 * N + 1 Mask */
#define SMC_HSMC_REM6__REM2NP1(value)       (SMC_HSMC_REM6__REM2NP1_Msk & ((value) << SMC_HSMC_REM6__REM2NP1_Pos))
#define SMC_HSMC_REM6__REM2NP3_Pos          16                                             /**< (SMC_HSMC_REM6_) BCH Remainder 2 * N + 3 Position */
#define SMC_HSMC_REM6__REM2NP3_Msk          (_U_(0x3FFF) << SMC_HSMC_REM6__REM2NP3_Pos)    /**< (SMC_HSMC_REM6_) BCH Remainder 2 * N + 3 Mask */
#define SMC_HSMC_REM6__REM2NP3(value)       (SMC_HSMC_REM6__REM2NP3_Msk & ((value) << SMC_HSMC_REM6__REM2NP3_Pos))
#define SMC_HSMC_REM6__MASK                 _U_(0x3FFF3FFF)                                /**< \deprecated (SMC_HSMC_REM6_) Register MASK  (Use SMC_HSMC_REM6__Msk instead)  */
#define SMC_HSMC_REM6__Msk                  _U_(0x3FFF3FFF)                                /**< (SMC_HSMC_REM6_) Register Mask  */


/* -------- SMC_HSMC_REM7_ : (SMC Offset: 0x1c) (R/ 32) PMECC Remainder 7 Register (sec_num = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t REM2NP1:14;                /**< bit:  0..13  BCH Remainder 2 * N + 1                  */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t REM2NP3:14;                /**< bit: 16..29  BCH Remainder 2 * N + 3                  */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_REM7__Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_REM7__OFFSET               (0x1C)                                        /**<  (SMC_HSMC_REM7_) PMECC Remainder 7 Register (sec_num = 0)  Offset */

#define SMC_HSMC_REM7__REM2NP1_Pos          0                                              /**< (SMC_HSMC_REM7_) BCH Remainder 2 * N + 1 Position */
#define SMC_HSMC_REM7__REM2NP1_Msk          (_U_(0x3FFF) << SMC_HSMC_REM7__REM2NP1_Pos)    /**< (SMC_HSMC_REM7_) BCH Remainder 2 * N + 1 Mask */
#define SMC_HSMC_REM7__REM2NP1(value)       (SMC_HSMC_REM7__REM2NP1_Msk & ((value) << SMC_HSMC_REM7__REM2NP1_Pos))
#define SMC_HSMC_REM7__REM2NP3_Pos          16                                             /**< (SMC_HSMC_REM7_) BCH Remainder 2 * N + 3 Position */
#define SMC_HSMC_REM7__REM2NP3_Msk          (_U_(0x3FFF) << SMC_HSMC_REM7__REM2NP3_Pos)    /**< (SMC_HSMC_REM7_) BCH Remainder 2 * N + 3 Mask */
#define SMC_HSMC_REM7__REM2NP3(value)       (SMC_HSMC_REM7__REM2NP3_Msk & ((value) << SMC_HSMC_REM7__REM2NP3_Pos))
#define SMC_HSMC_REM7__MASK                 _U_(0x3FFF3FFF)                                /**< \deprecated (SMC_HSMC_REM7_) Register MASK  (Use SMC_HSMC_REM7__Msk instead)  */
#define SMC_HSMC_REM7__Msk                  _U_(0x3FFF3FFF)                                /**< (SMC_HSMC_REM7_) Register Mask  */


/* -------- SMC_HSMC_REM8_ : (SMC Offset: 0x20) (R/ 32) PMECC Remainder 8 Register (sec_num = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t REM2NP1:14;                /**< bit:  0..13  BCH Remainder 2 * N + 1                  */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t REM2NP3:14;                /**< bit: 16..29  BCH Remainder 2 * N + 3                  */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_REM8__Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_REM8__OFFSET               (0x20)                                        /**<  (SMC_HSMC_REM8_) PMECC Remainder 8 Register (sec_num = 0)  Offset */

#define SMC_HSMC_REM8__REM2NP1_Pos          0                                              /**< (SMC_HSMC_REM8_) BCH Remainder 2 * N + 1 Position */
#define SMC_HSMC_REM8__REM2NP1_Msk          (_U_(0x3FFF) << SMC_HSMC_REM8__REM2NP1_Pos)    /**< (SMC_HSMC_REM8_) BCH Remainder 2 * N + 1 Mask */
#define SMC_HSMC_REM8__REM2NP1(value)       (SMC_HSMC_REM8__REM2NP1_Msk & ((value) << SMC_HSMC_REM8__REM2NP1_Pos))
#define SMC_HSMC_REM8__REM2NP3_Pos          16                                             /**< (SMC_HSMC_REM8_) BCH Remainder 2 * N + 3 Position */
#define SMC_HSMC_REM8__REM2NP3_Msk          (_U_(0x3FFF) << SMC_HSMC_REM8__REM2NP3_Pos)    /**< (SMC_HSMC_REM8_) BCH Remainder 2 * N + 3 Mask */
#define SMC_HSMC_REM8__REM2NP3(value)       (SMC_HSMC_REM8__REM2NP3_Msk & ((value) << SMC_HSMC_REM8__REM2NP3_Pos))
#define SMC_HSMC_REM8__MASK                 _U_(0x3FFF3FFF)                                /**< \deprecated (SMC_HSMC_REM8_) Register MASK  (Use SMC_HSMC_REM8__Msk instead)  */
#define SMC_HSMC_REM8__Msk                  _U_(0x3FFF3FFF)                                /**< (SMC_HSMC_REM8_) Register Mask  */


/* -------- SMC_HSMC_REM9_ : (SMC Offset: 0x24) (R/ 32) PMECC Remainder 9 Register (sec_num = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t REM2NP1:14;                /**< bit:  0..13  BCH Remainder 2 * N + 1                  */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t REM2NP3:14;                /**< bit: 16..29  BCH Remainder 2 * N + 3                  */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_REM9__Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_REM9__OFFSET               (0x24)                                        /**<  (SMC_HSMC_REM9_) PMECC Remainder 9 Register (sec_num = 0)  Offset */

#define SMC_HSMC_REM9__REM2NP1_Pos          0                                              /**< (SMC_HSMC_REM9_) BCH Remainder 2 * N + 1 Position */
#define SMC_HSMC_REM9__REM2NP1_Msk          (_U_(0x3FFF) << SMC_HSMC_REM9__REM2NP1_Pos)    /**< (SMC_HSMC_REM9_) BCH Remainder 2 * N + 1 Mask */
#define SMC_HSMC_REM9__REM2NP1(value)       (SMC_HSMC_REM9__REM2NP1_Msk & ((value) << SMC_HSMC_REM9__REM2NP1_Pos))
#define SMC_HSMC_REM9__REM2NP3_Pos          16                                             /**< (SMC_HSMC_REM9_) BCH Remainder 2 * N + 3 Position */
#define SMC_HSMC_REM9__REM2NP3_Msk          (_U_(0x3FFF) << SMC_HSMC_REM9__REM2NP3_Pos)    /**< (SMC_HSMC_REM9_) BCH Remainder 2 * N + 3 Mask */
#define SMC_HSMC_REM9__REM2NP3(value)       (SMC_HSMC_REM9__REM2NP3_Msk & ((value) << SMC_HSMC_REM9__REM2NP3_Pos))
#define SMC_HSMC_REM9__MASK                 _U_(0x3FFF3FFF)                                /**< \deprecated (SMC_HSMC_REM9_) Register MASK  (Use SMC_HSMC_REM9__Msk instead)  */
#define SMC_HSMC_REM9__Msk                  _U_(0x3FFF3FFF)                                /**< (SMC_HSMC_REM9_) Register Mask  */


/* -------- SMC_HSMC_REM10_ : (SMC Offset: 0x28) (R/ 32) PMECC Remainder 10 Register (sec_num = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t REM2NP1:14;                /**< bit:  0..13  BCH Remainder 2 * N + 1                  */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t REM2NP3:14;                /**< bit: 16..29  BCH Remainder 2 * N + 3                  */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_REM10__Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_REM10__OFFSET              (0x28)                                        /**<  (SMC_HSMC_REM10_) PMECC Remainder 10 Register (sec_num = 0)  Offset */

#define SMC_HSMC_REM10__REM2NP1_Pos         0                                              /**< (SMC_HSMC_REM10_) BCH Remainder 2 * N + 1 Position */
#define SMC_HSMC_REM10__REM2NP1_Msk         (_U_(0x3FFF) << SMC_HSMC_REM10__REM2NP1_Pos)   /**< (SMC_HSMC_REM10_) BCH Remainder 2 * N + 1 Mask */
#define SMC_HSMC_REM10__REM2NP1(value)      (SMC_HSMC_REM10__REM2NP1_Msk & ((value) << SMC_HSMC_REM10__REM2NP1_Pos))
#define SMC_HSMC_REM10__REM2NP3_Pos         16                                             /**< (SMC_HSMC_REM10_) BCH Remainder 2 * N + 3 Position */
#define SMC_HSMC_REM10__REM2NP3_Msk         (_U_(0x3FFF) << SMC_HSMC_REM10__REM2NP3_Pos)   /**< (SMC_HSMC_REM10_) BCH Remainder 2 * N + 3 Mask */
#define SMC_HSMC_REM10__REM2NP3(value)      (SMC_HSMC_REM10__REM2NP3_Msk & ((value) << SMC_HSMC_REM10__REM2NP3_Pos))
#define SMC_HSMC_REM10__MASK                _U_(0x3FFF3FFF)                                /**< \deprecated (SMC_HSMC_REM10_) Register MASK  (Use SMC_HSMC_REM10__Msk instead)  */
#define SMC_HSMC_REM10__Msk                 _U_(0x3FFF3FFF)                                /**< (SMC_HSMC_REM10_) Register Mask  */


/* -------- SMC_HSMC_REM11_ : (SMC Offset: 0x2c) (R/ 32) PMECC Remainder 11 Register (sec_num = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t REM2NP1:14;                /**< bit:  0..13  BCH Remainder 2 * N + 1                  */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t REM2NP3:14;                /**< bit: 16..29  BCH Remainder 2 * N + 3                  */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_REM11__Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_REM11__OFFSET              (0x2C)                                        /**<  (SMC_HSMC_REM11_) PMECC Remainder 11 Register (sec_num = 0)  Offset */

#define SMC_HSMC_REM11__REM2NP1_Pos         0                                              /**< (SMC_HSMC_REM11_) BCH Remainder 2 * N + 1 Position */
#define SMC_HSMC_REM11__REM2NP1_Msk         (_U_(0x3FFF) << SMC_HSMC_REM11__REM2NP1_Pos)   /**< (SMC_HSMC_REM11_) BCH Remainder 2 * N + 1 Mask */
#define SMC_HSMC_REM11__REM2NP1(value)      (SMC_HSMC_REM11__REM2NP1_Msk & ((value) << SMC_HSMC_REM11__REM2NP1_Pos))
#define SMC_HSMC_REM11__REM2NP3_Pos         16                                             /**< (SMC_HSMC_REM11_) BCH Remainder 2 * N + 3 Position */
#define SMC_HSMC_REM11__REM2NP3_Msk         (_U_(0x3FFF) << SMC_HSMC_REM11__REM2NP3_Pos)   /**< (SMC_HSMC_REM11_) BCH Remainder 2 * N + 3 Mask */
#define SMC_HSMC_REM11__REM2NP3(value)      (SMC_HSMC_REM11__REM2NP3_Msk & ((value) << SMC_HSMC_REM11__REM2NP3_Pos))
#define SMC_HSMC_REM11__MASK                _U_(0x3FFF3FFF)                                /**< \deprecated (SMC_HSMC_REM11_) Register MASK  (Use SMC_HSMC_REM11__Msk instead)  */
#define SMC_HSMC_REM11__Msk                 _U_(0x3FFF3FFF)                                /**< (SMC_HSMC_REM11_) Register Mask  */


/* -------- SMC_HSMC_REM12_ : (SMC Offset: 0x30) (R/ 32) PMECC Remainder 12 Register (sec_num = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t REM2NP1:14;                /**< bit:  0..13  BCH Remainder 2 * N + 1                  */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t REM2NP3:14;                /**< bit: 16..29  BCH Remainder 2 * N + 3                  */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_REM12__Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_REM12__OFFSET              (0x30)                                        /**<  (SMC_HSMC_REM12_) PMECC Remainder 12 Register (sec_num = 0)  Offset */

#define SMC_HSMC_REM12__REM2NP1_Pos         0                                              /**< (SMC_HSMC_REM12_) BCH Remainder 2 * N + 1 Position */
#define SMC_HSMC_REM12__REM2NP1_Msk         (_U_(0x3FFF) << SMC_HSMC_REM12__REM2NP1_Pos)   /**< (SMC_HSMC_REM12_) BCH Remainder 2 * N + 1 Mask */
#define SMC_HSMC_REM12__REM2NP1(value)      (SMC_HSMC_REM12__REM2NP1_Msk & ((value) << SMC_HSMC_REM12__REM2NP1_Pos))
#define SMC_HSMC_REM12__REM2NP3_Pos         16                                             /**< (SMC_HSMC_REM12_) BCH Remainder 2 * N + 3 Position */
#define SMC_HSMC_REM12__REM2NP3_Msk         (_U_(0x3FFF) << SMC_HSMC_REM12__REM2NP3_Pos)   /**< (SMC_HSMC_REM12_) BCH Remainder 2 * N + 3 Mask */
#define SMC_HSMC_REM12__REM2NP3(value)      (SMC_HSMC_REM12__REM2NP3_Msk & ((value) << SMC_HSMC_REM12__REM2NP3_Pos))
#define SMC_HSMC_REM12__MASK                _U_(0x3FFF3FFF)                                /**< \deprecated (SMC_HSMC_REM12_) Register MASK  (Use SMC_HSMC_REM12__Msk instead)  */
#define SMC_HSMC_REM12__Msk                 _U_(0x3FFF3FFF)                                /**< (SMC_HSMC_REM12_) Register Mask  */


/* -------- SMC_HSMC_REM13_ : (SMC Offset: 0x34) (R/ 32) PMECC Remainder 13 Register (sec_num = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t REM2NP1:14;                /**< bit:  0..13  BCH Remainder 2 * N + 1                  */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t REM2NP3:14;                /**< bit: 16..29  BCH Remainder 2 * N + 3                  */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_REM13__Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_REM13__OFFSET              (0x34)                                        /**<  (SMC_HSMC_REM13_) PMECC Remainder 13 Register (sec_num = 0)  Offset */

#define SMC_HSMC_REM13__REM2NP1_Pos         0                                              /**< (SMC_HSMC_REM13_) BCH Remainder 2 * N + 1 Position */
#define SMC_HSMC_REM13__REM2NP1_Msk         (_U_(0x3FFF) << SMC_HSMC_REM13__REM2NP1_Pos)   /**< (SMC_HSMC_REM13_) BCH Remainder 2 * N + 1 Mask */
#define SMC_HSMC_REM13__REM2NP1(value)      (SMC_HSMC_REM13__REM2NP1_Msk & ((value) << SMC_HSMC_REM13__REM2NP1_Pos))
#define SMC_HSMC_REM13__REM2NP3_Pos         16                                             /**< (SMC_HSMC_REM13_) BCH Remainder 2 * N + 3 Position */
#define SMC_HSMC_REM13__REM2NP3_Msk         (_U_(0x3FFF) << SMC_HSMC_REM13__REM2NP3_Pos)   /**< (SMC_HSMC_REM13_) BCH Remainder 2 * N + 3 Mask */
#define SMC_HSMC_REM13__REM2NP3(value)      (SMC_HSMC_REM13__REM2NP3_Msk & ((value) << SMC_HSMC_REM13__REM2NP3_Pos))
#define SMC_HSMC_REM13__MASK                _U_(0x3FFF3FFF)                                /**< \deprecated (SMC_HSMC_REM13_) Register MASK  (Use SMC_HSMC_REM13__Msk instead)  */
#define SMC_HSMC_REM13__Msk                 _U_(0x3FFF3FFF)                                /**< (SMC_HSMC_REM13_) Register Mask  */


/* -------- SMC_HSMC_REM14_ : (SMC Offset: 0x38) (R/ 32) PMECC Remainder 14 Register (sec_num = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t REM2NP1:14;                /**< bit:  0..13  BCH Remainder 2 * N + 1                  */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t REM2NP3:14;                /**< bit: 16..29  BCH Remainder 2 * N + 3                  */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_REM14__Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_REM14__OFFSET              (0x38)                                        /**<  (SMC_HSMC_REM14_) PMECC Remainder 14 Register (sec_num = 0)  Offset */

#define SMC_HSMC_REM14__REM2NP1_Pos         0                                              /**< (SMC_HSMC_REM14_) BCH Remainder 2 * N + 1 Position */
#define SMC_HSMC_REM14__REM2NP1_Msk         (_U_(0x3FFF) << SMC_HSMC_REM14__REM2NP1_Pos)   /**< (SMC_HSMC_REM14_) BCH Remainder 2 * N + 1 Mask */
#define SMC_HSMC_REM14__REM2NP1(value)      (SMC_HSMC_REM14__REM2NP1_Msk & ((value) << SMC_HSMC_REM14__REM2NP1_Pos))
#define SMC_HSMC_REM14__REM2NP3_Pos         16                                             /**< (SMC_HSMC_REM14_) BCH Remainder 2 * N + 3 Position */
#define SMC_HSMC_REM14__REM2NP3_Msk         (_U_(0x3FFF) << SMC_HSMC_REM14__REM2NP3_Pos)   /**< (SMC_HSMC_REM14_) BCH Remainder 2 * N + 3 Mask */
#define SMC_HSMC_REM14__REM2NP3(value)      (SMC_HSMC_REM14__REM2NP3_Msk & ((value) << SMC_HSMC_REM14__REM2NP3_Pos))
#define SMC_HSMC_REM14__MASK                _U_(0x3FFF3FFF)                                /**< \deprecated (SMC_HSMC_REM14_) Register MASK  (Use SMC_HSMC_REM14__Msk instead)  */
#define SMC_HSMC_REM14__Msk                 _U_(0x3FFF3FFF)                                /**< (SMC_HSMC_REM14_) Register Mask  */


/* -------- SMC_HSMC_REM15_ : (SMC Offset: 0x3c) (R/ 32) PMECC Remainder 15 Register (sec_num = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t REM2NP1:14;                /**< bit:  0..13  BCH Remainder 2 * N + 1                  */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t REM2NP3:14;                /**< bit: 16..29  BCH Remainder 2 * N + 3                  */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_REM15__Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_REM15__OFFSET              (0x3C)                                        /**<  (SMC_HSMC_REM15_) PMECC Remainder 15 Register (sec_num = 0)  Offset */

#define SMC_HSMC_REM15__REM2NP1_Pos         0                                              /**< (SMC_HSMC_REM15_) BCH Remainder 2 * N + 1 Position */
#define SMC_HSMC_REM15__REM2NP1_Msk         (_U_(0x3FFF) << SMC_HSMC_REM15__REM2NP1_Pos)   /**< (SMC_HSMC_REM15_) BCH Remainder 2 * N + 1 Mask */
#define SMC_HSMC_REM15__REM2NP1(value)      (SMC_HSMC_REM15__REM2NP1_Msk & ((value) << SMC_HSMC_REM15__REM2NP1_Pos))
#define SMC_HSMC_REM15__REM2NP3_Pos         16                                             /**< (SMC_HSMC_REM15_) BCH Remainder 2 * N + 3 Position */
#define SMC_HSMC_REM15__REM2NP3_Msk         (_U_(0x3FFF) << SMC_HSMC_REM15__REM2NP3_Pos)   /**< (SMC_HSMC_REM15_) BCH Remainder 2 * N + 3 Mask */
#define SMC_HSMC_REM15__REM2NP3(value)      (SMC_HSMC_REM15__REM2NP3_Msk & ((value) << SMC_HSMC_REM15__REM2NP3_Pos))
#define SMC_HSMC_REM15__MASK                _U_(0x3FFF3FFF)                                /**< \deprecated (SMC_HSMC_REM15_) Register MASK  (Use SMC_HSMC_REM15__Msk instead)  */
#define SMC_HSMC_REM15__Msk                 _U_(0x3FFF3FFF)                                /**< (SMC_HSMC_REM15_) Register Mask  */


/* -------- SMC_HSMC_CFG : (SMC Offset: 0x00) (R/W 32) NFC Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PAGESIZE:3;                /**< bit:   0..2  Page Size of the NAND Flash Device       */
    uint32_t :5;                        /**< bit:   3..7  Reserved */
    uint32_t WSPARE:1;                  /**< bit:      8  Write Spare Area                         */
    uint32_t RSPARE:1;                  /**< bit:      9  Read Spare Area                          */
    uint32_t :2;                        /**< bit: 10..11  Reserved */
    uint32_t EDGECTRL:1;                /**< bit:     12  Rising/Falling Edge Detection Control    */
    uint32_t RBEDGE:1;                  /**< bit:     13  Ready/Busy Signal Edge Detection         */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t DTOCYC:4;                  /**< bit: 16..19  Data Timeout Cycle Number                */
    uint32_t DTOMUL:3;                  /**< bit: 20..22  Data Timeout Multiplier                  */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t NFCSPARESIZE:7;            /**< bit: 24..30  NAND Flash Spare Area Size Retrieved by the Host Controller */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_CFG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_CFG_OFFSET                 (0x00)                                        /**<  (SMC_HSMC_CFG) NFC Configuration Register  Offset */

#define SMC_HSMC_CFG_PAGESIZE_Pos           0                                              /**< (SMC_HSMC_CFG) Page Size of the NAND Flash Device Position */
#define SMC_HSMC_CFG_PAGESIZE_Msk           (_U_(0x7) << SMC_HSMC_CFG_PAGESIZE_Pos)        /**< (SMC_HSMC_CFG) Page Size of the NAND Flash Device Mask */
#define SMC_HSMC_CFG_PAGESIZE(value)        (SMC_HSMC_CFG_PAGESIZE_Msk & ((value) << SMC_HSMC_CFG_PAGESIZE_Pos))
#define   SMC_HSMC_CFG_PAGESIZE_PS512_Val   _U_(0x0)                                       /**< (SMC_HSMC_CFG) Main area 512 bytes  */
#define   SMC_HSMC_CFG_PAGESIZE_PS1024_Val  _U_(0x1)                                       /**< (SMC_HSMC_CFG) Main area 1024 bytes  */
#define   SMC_HSMC_CFG_PAGESIZE_PS2048_Val  _U_(0x2)                                       /**< (SMC_HSMC_CFG) Main area 2048 bytes  */
#define   SMC_HSMC_CFG_PAGESIZE_PS4096_Val  _U_(0x3)                                       /**< (SMC_HSMC_CFG) Main area 4096 bytes  */
#define   SMC_HSMC_CFG_PAGESIZE_PS8192_Val  _U_(0x4)                                       /**< (SMC_HSMC_CFG) Main area 8192 bytes  */
#define SMC_HSMC_CFG_PAGESIZE_PS512         (SMC_HSMC_CFG_PAGESIZE_PS512_Val << SMC_HSMC_CFG_PAGESIZE_Pos)  /**< (SMC_HSMC_CFG) Main area 512 bytes Position  */
#define SMC_HSMC_CFG_PAGESIZE_PS1024        (SMC_HSMC_CFG_PAGESIZE_PS1024_Val << SMC_HSMC_CFG_PAGESIZE_Pos)  /**< (SMC_HSMC_CFG) Main area 1024 bytes Position  */
#define SMC_HSMC_CFG_PAGESIZE_PS2048        (SMC_HSMC_CFG_PAGESIZE_PS2048_Val << SMC_HSMC_CFG_PAGESIZE_Pos)  /**< (SMC_HSMC_CFG) Main area 2048 bytes Position  */
#define SMC_HSMC_CFG_PAGESIZE_PS4096        (SMC_HSMC_CFG_PAGESIZE_PS4096_Val << SMC_HSMC_CFG_PAGESIZE_Pos)  /**< (SMC_HSMC_CFG) Main area 4096 bytes Position  */
#define SMC_HSMC_CFG_PAGESIZE_PS8192        (SMC_HSMC_CFG_PAGESIZE_PS8192_Val << SMC_HSMC_CFG_PAGESIZE_Pos)  /**< (SMC_HSMC_CFG) Main area 8192 bytes Position  */
#define SMC_HSMC_CFG_WSPARE_Pos             8                                              /**< (SMC_HSMC_CFG) Write Spare Area Position */
#define SMC_HSMC_CFG_WSPARE_Msk             (_U_(0x1) << SMC_HSMC_CFG_WSPARE_Pos)          /**< (SMC_HSMC_CFG) Write Spare Area Mask */
#define SMC_HSMC_CFG_WSPARE                 SMC_HSMC_CFG_WSPARE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_CFG_WSPARE_Msk instead */
#define SMC_HSMC_CFG_RSPARE_Pos             9                                              /**< (SMC_HSMC_CFG) Read Spare Area Position */
#define SMC_HSMC_CFG_RSPARE_Msk             (_U_(0x1) << SMC_HSMC_CFG_RSPARE_Pos)          /**< (SMC_HSMC_CFG) Read Spare Area Mask */
#define SMC_HSMC_CFG_RSPARE                 SMC_HSMC_CFG_RSPARE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_CFG_RSPARE_Msk instead */
#define SMC_HSMC_CFG_EDGECTRL_Pos           12                                             /**< (SMC_HSMC_CFG) Rising/Falling Edge Detection Control Position */
#define SMC_HSMC_CFG_EDGECTRL_Msk           (_U_(0x1) << SMC_HSMC_CFG_EDGECTRL_Pos)        /**< (SMC_HSMC_CFG) Rising/Falling Edge Detection Control Mask */
#define SMC_HSMC_CFG_EDGECTRL               SMC_HSMC_CFG_EDGECTRL_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_CFG_EDGECTRL_Msk instead */
#define SMC_HSMC_CFG_RBEDGE_Pos             13                                             /**< (SMC_HSMC_CFG) Ready/Busy Signal Edge Detection Position */
#define SMC_HSMC_CFG_RBEDGE_Msk             (_U_(0x1) << SMC_HSMC_CFG_RBEDGE_Pos)          /**< (SMC_HSMC_CFG) Ready/Busy Signal Edge Detection Mask */
#define SMC_HSMC_CFG_RBEDGE                 SMC_HSMC_CFG_RBEDGE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_CFG_RBEDGE_Msk instead */
#define SMC_HSMC_CFG_DTOCYC_Pos             16                                             /**< (SMC_HSMC_CFG) Data Timeout Cycle Number Position */
#define SMC_HSMC_CFG_DTOCYC_Msk             (_U_(0xF) << SMC_HSMC_CFG_DTOCYC_Pos)          /**< (SMC_HSMC_CFG) Data Timeout Cycle Number Mask */
#define SMC_HSMC_CFG_DTOCYC(value)          (SMC_HSMC_CFG_DTOCYC_Msk & ((value) << SMC_HSMC_CFG_DTOCYC_Pos))
#define SMC_HSMC_CFG_DTOMUL_Pos             20                                             /**< (SMC_HSMC_CFG) Data Timeout Multiplier Position */
#define SMC_HSMC_CFG_DTOMUL_Msk             (_U_(0x7) << SMC_HSMC_CFG_DTOMUL_Pos)          /**< (SMC_HSMC_CFG) Data Timeout Multiplier Mask */
#define SMC_HSMC_CFG_DTOMUL(value)          (SMC_HSMC_CFG_DTOMUL_Msk & ((value) << SMC_HSMC_CFG_DTOMUL_Pos))
#define   SMC_HSMC_CFG_DTOMUL_X1_Val        _U_(0x0)                                       /**< (SMC_HSMC_CFG) DTOCYC  */
#define   SMC_HSMC_CFG_DTOMUL_X16_Val       _U_(0x1)                                       /**< (SMC_HSMC_CFG) DTOCYC x 16  */
#define   SMC_HSMC_CFG_DTOMUL_X128_Val      _U_(0x2)                                       /**< (SMC_HSMC_CFG) DTOCYC x 128  */
#define   SMC_HSMC_CFG_DTOMUL_X256_Val      _U_(0x3)                                       /**< (SMC_HSMC_CFG) DTOCYC x 256  */
#define   SMC_HSMC_CFG_DTOMUL_X1024_Val     _U_(0x4)                                       /**< (SMC_HSMC_CFG) DTOCYC x 1024  */
#define   SMC_HSMC_CFG_DTOMUL_X4096_Val     _U_(0x5)                                       /**< (SMC_HSMC_CFG) DTOCYC x 4096  */
#define   SMC_HSMC_CFG_DTOMUL_X65536_Val    _U_(0x6)                                       /**< (SMC_HSMC_CFG) DTOCYC x 65536  */
#define   SMC_HSMC_CFG_DTOMUL_X1048576_Val  _U_(0x7)                                       /**< (SMC_HSMC_CFG) DTOCYC x 1048576  */
#define SMC_HSMC_CFG_DTOMUL_X1              (SMC_HSMC_CFG_DTOMUL_X1_Val << SMC_HSMC_CFG_DTOMUL_Pos)  /**< (SMC_HSMC_CFG) DTOCYC Position  */
#define SMC_HSMC_CFG_DTOMUL_X16             (SMC_HSMC_CFG_DTOMUL_X16_Val << SMC_HSMC_CFG_DTOMUL_Pos)  /**< (SMC_HSMC_CFG) DTOCYC x 16 Position  */
#define SMC_HSMC_CFG_DTOMUL_X128            (SMC_HSMC_CFG_DTOMUL_X128_Val << SMC_HSMC_CFG_DTOMUL_Pos)  /**< (SMC_HSMC_CFG) DTOCYC x 128 Position  */
#define SMC_HSMC_CFG_DTOMUL_X256            (SMC_HSMC_CFG_DTOMUL_X256_Val << SMC_HSMC_CFG_DTOMUL_Pos)  /**< (SMC_HSMC_CFG) DTOCYC x 256 Position  */
#define SMC_HSMC_CFG_DTOMUL_X1024           (SMC_HSMC_CFG_DTOMUL_X1024_Val << SMC_HSMC_CFG_DTOMUL_Pos)  /**< (SMC_HSMC_CFG) DTOCYC x 1024 Position  */
#define SMC_HSMC_CFG_DTOMUL_X4096           (SMC_HSMC_CFG_DTOMUL_X4096_Val << SMC_HSMC_CFG_DTOMUL_Pos)  /**< (SMC_HSMC_CFG) DTOCYC x 4096 Position  */
#define SMC_HSMC_CFG_DTOMUL_X65536          (SMC_HSMC_CFG_DTOMUL_X65536_Val << SMC_HSMC_CFG_DTOMUL_Pos)  /**< (SMC_HSMC_CFG) DTOCYC x 65536 Position  */
#define SMC_HSMC_CFG_DTOMUL_X1048576        (SMC_HSMC_CFG_DTOMUL_X1048576_Val << SMC_HSMC_CFG_DTOMUL_Pos)  /**< (SMC_HSMC_CFG) DTOCYC x 1048576 Position  */
#define SMC_HSMC_CFG_NFCSPARESIZE_Pos       24                                             /**< (SMC_HSMC_CFG) NAND Flash Spare Area Size Retrieved by the Host Controller Position */
#define SMC_HSMC_CFG_NFCSPARESIZE_Msk       (_U_(0x7F) << SMC_HSMC_CFG_NFCSPARESIZE_Pos)   /**< (SMC_HSMC_CFG) NAND Flash Spare Area Size Retrieved by the Host Controller Mask */
#define SMC_HSMC_CFG_NFCSPARESIZE(value)    (SMC_HSMC_CFG_NFCSPARESIZE_Msk & ((value) << SMC_HSMC_CFG_NFCSPARESIZE_Pos))
#define SMC_HSMC_CFG_MASK                   _U_(0x7F7F3307)                                /**< \deprecated (SMC_HSMC_CFG) Register MASK  (Use SMC_HSMC_CFG_Msk instead)  */
#define SMC_HSMC_CFG_Msk                    _U_(0x7F7F3307)                                /**< (SMC_HSMC_CFG) Register Mask  */


/* -------- SMC_HSMC_CTRL : (SMC Offset: 0x04) (/W 32) NFC Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NFCEN:1;                   /**< bit:      0  NAND Flash Controller Enable             */
    uint32_t NFCDIS:1;                  /**< bit:      1  NAND Flash Controller Disable            */
    uint32_t :30;                       /**< bit:  2..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_CTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_CTRL_OFFSET                (0x04)                                        /**<  (SMC_HSMC_CTRL) NFC Control Register  Offset */

#define SMC_HSMC_CTRL_NFCEN_Pos             0                                              /**< (SMC_HSMC_CTRL) NAND Flash Controller Enable Position */
#define SMC_HSMC_CTRL_NFCEN_Msk             (_U_(0x1) << SMC_HSMC_CTRL_NFCEN_Pos)          /**< (SMC_HSMC_CTRL) NAND Flash Controller Enable Mask */
#define SMC_HSMC_CTRL_NFCEN                 SMC_HSMC_CTRL_NFCEN_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_CTRL_NFCEN_Msk instead */
#define SMC_HSMC_CTRL_NFCDIS_Pos            1                                              /**< (SMC_HSMC_CTRL) NAND Flash Controller Disable Position */
#define SMC_HSMC_CTRL_NFCDIS_Msk            (_U_(0x1) << SMC_HSMC_CTRL_NFCDIS_Pos)         /**< (SMC_HSMC_CTRL) NAND Flash Controller Disable Mask */
#define SMC_HSMC_CTRL_NFCDIS                SMC_HSMC_CTRL_NFCDIS_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_CTRL_NFCDIS_Msk instead */
#define SMC_HSMC_CTRL_MASK                  _U_(0x03)                                      /**< \deprecated (SMC_HSMC_CTRL) Register MASK  (Use SMC_HSMC_CTRL_Msk instead)  */
#define SMC_HSMC_CTRL_Msk                   _U_(0x03)                                      /**< (SMC_HSMC_CTRL) Register Mask  */


/* -------- SMC_HSMC_SR : (SMC Offset: 0x08) (R/ 32) NFC Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SMCSTS:1;                  /**< bit:      0  NAND Flash Controller Status (this field cannot be reset) */
    uint32_t :3;                        /**< bit:   1..3  Reserved */
    uint32_t RB_RISE:1;                 /**< bit:      4  Selected Ready Busy Rising Edge Detected */
    uint32_t RB_FALL:1;                 /**< bit:      5  Selected Ready Busy Falling Edge Detected */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t NFCBUSY:1;                 /**< bit:      8  NFC Busy (this field cannot be reset)    */
    uint32_t :2;                        /**< bit:  9..10  Reserved */
    uint32_t NFCWR:1;                   /**< bit:     11  NFC Write/Read Operation (this field cannot be reset) */
    uint32_t NFCSID:3;                  /**< bit: 12..14  NFC Chip Select ID (this field cannot be reset) */
    uint32_t :1;                        /**< bit:     15  Reserved */
    uint32_t XFRDONE:1;                 /**< bit:     16  NFC Data Transfer Terminated             */
    uint32_t CMDDONE:1;                 /**< bit:     17  Command Done                             */
    uint32_t :2;                        /**< bit: 18..19  Reserved */
    uint32_t DTOE:1;                    /**< bit:     20  Data Timeout Error                       */
    uint32_t UNDEF:1;                   /**< bit:     21  Undefined Area Error                     */
    uint32_t AWB:1;                     /**< bit:     22  Accessing While Busy                     */
    uint32_t NFCASE:1;                  /**< bit:     23  NFC Access Size Error                    */
    uint32_t RB_EDGE0:1;                /**< bit:     24  Ready/Busy Line 0 Edge Detected          */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :24;                       /**< bit:  0..23  Reserved */
    uint32_t RB_EDGE:1;                 /**< bit:     24  Ready/Busy Line x Edge Detected          */
    uint32_t :7;                        /**< bit: 25..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SR_OFFSET                  (0x08)                                        /**<  (SMC_HSMC_SR) NFC Status Register  Offset */

#define SMC_HSMC_SR_SMCSTS_Pos              0                                              /**< (SMC_HSMC_SR) NAND Flash Controller Status (this field cannot be reset) Position */
#define SMC_HSMC_SR_SMCSTS_Msk              (_U_(0x1) << SMC_HSMC_SR_SMCSTS_Pos)           /**< (SMC_HSMC_SR) NAND Flash Controller Status (this field cannot be reset) Mask */
#define SMC_HSMC_SR_SMCSTS                  SMC_HSMC_SR_SMCSTS_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_SR_SMCSTS_Msk instead */
#define SMC_HSMC_SR_RB_RISE_Pos             4                                              /**< (SMC_HSMC_SR) Selected Ready Busy Rising Edge Detected Position */
#define SMC_HSMC_SR_RB_RISE_Msk             (_U_(0x1) << SMC_HSMC_SR_RB_RISE_Pos)          /**< (SMC_HSMC_SR) Selected Ready Busy Rising Edge Detected Mask */
#define SMC_HSMC_SR_RB_RISE                 SMC_HSMC_SR_RB_RISE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_SR_RB_RISE_Msk instead */
#define SMC_HSMC_SR_RB_FALL_Pos             5                                              /**< (SMC_HSMC_SR) Selected Ready Busy Falling Edge Detected Position */
#define SMC_HSMC_SR_RB_FALL_Msk             (_U_(0x1) << SMC_HSMC_SR_RB_FALL_Pos)          /**< (SMC_HSMC_SR) Selected Ready Busy Falling Edge Detected Mask */
#define SMC_HSMC_SR_RB_FALL                 SMC_HSMC_SR_RB_FALL_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_SR_RB_FALL_Msk instead */
#define SMC_HSMC_SR_NFCBUSY_Pos             8                                              /**< (SMC_HSMC_SR) NFC Busy (this field cannot be reset) Position */
#define SMC_HSMC_SR_NFCBUSY_Msk             (_U_(0x1) << SMC_HSMC_SR_NFCBUSY_Pos)          /**< (SMC_HSMC_SR) NFC Busy (this field cannot be reset) Mask */
#define SMC_HSMC_SR_NFCBUSY                 SMC_HSMC_SR_NFCBUSY_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_SR_NFCBUSY_Msk instead */
#define SMC_HSMC_SR_NFCWR_Pos               11                                             /**< (SMC_HSMC_SR) NFC Write/Read Operation (this field cannot be reset) Position */
#define SMC_HSMC_SR_NFCWR_Msk               (_U_(0x1) << SMC_HSMC_SR_NFCWR_Pos)            /**< (SMC_HSMC_SR) NFC Write/Read Operation (this field cannot be reset) Mask */
#define SMC_HSMC_SR_NFCWR                   SMC_HSMC_SR_NFCWR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_SR_NFCWR_Msk instead */
#define SMC_HSMC_SR_NFCSID_Pos              12                                             /**< (SMC_HSMC_SR) NFC Chip Select ID (this field cannot be reset) Position */
#define SMC_HSMC_SR_NFCSID_Msk              (_U_(0x7) << SMC_HSMC_SR_NFCSID_Pos)           /**< (SMC_HSMC_SR) NFC Chip Select ID (this field cannot be reset) Mask */
#define SMC_HSMC_SR_NFCSID(value)           (SMC_HSMC_SR_NFCSID_Msk & ((value) << SMC_HSMC_SR_NFCSID_Pos))
#define SMC_HSMC_SR_XFRDONE_Pos             16                                             /**< (SMC_HSMC_SR) NFC Data Transfer Terminated Position */
#define SMC_HSMC_SR_XFRDONE_Msk             (_U_(0x1) << SMC_HSMC_SR_XFRDONE_Pos)          /**< (SMC_HSMC_SR) NFC Data Transfer Terminated Mask */
#define SMC_HSMC_SR_XFRDONE                 SMC_HSMC_SR_XFRDONE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_SR_XFRDONE_Msk instead */
#define SMC_HSMC_SR_CMDDONE_Pos             17                                             /**< (SMC_HSMC_SR) Command Done Position */
#define SMC_HSMC_SR_CMDDONE_Msk             (_U_(0x1) << SMC_HSMC_SR_CMDDONE_Pos)          /**< (SMC_HSMC_SR) Command Done Mask */
#define SMC_HSMC_SR_CMDDONE                 SMC_HSMC_SR_CMDDONE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_SR_CMDDONE_Msk instead */
#define SMC_HSMC_SR_DTOE_Pos                20                                             /**< (SMC_HSMC_SR) Data Timeout Error Position */
#define SMC_HSMC_SR_DTOE_Msk                (_U_(0x1) << SMC_HSMC_SR_DTOE_Pos)             /**< (SMC_HSMC_SR) Data Timeout Error Mask */
#define SMC_HSMC_SR_DTOE                    SMC_HSMC_SR_DTOE_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_SR_DTOE_Msk instead */
#define SMC_HSMC_SR_UNDEF_Pos               21                                             /**< (SMC_HSMC_SR) Undefined Area Error Position */
#define SMC_HSMC_SR_UNDEF_Msk               (_U_(0x1) << SMC_HSMC_SR_UNDEF_Pos)            /**< (SMC_HSMC_SR) Undefined Area Error Mask */
#define SMC_HSMC_SR_UNDEF                   SMC_HSMC_SR_UNDEF_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_SR_UNDEF_Msk instead */
#define SMC_HSMC_SR_AWB_Pos                 22                                             /**< (SMC_HSMC_SR) Accessing While Busy Position */
#define SMC_HSMC_SR_AWB_Msk                 (_U_(0x1) << SMC_HSMC_SR_AWB_Pos)              /**< (SMC_HSMC_SR) Accessing While Busy Mask */
#define SMC_HSMC_SR_AWB                     SMC_HSMC_SR_AWB_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_SR_AWB_Msk instead */
#define SMC_HSMC_SR_NFCASE_Pos              23                                             /**< (SMC_HSMC_SR) NFC Access Size Error Position */
#define SMC_HSMC_SR_NFCASE_Msk              (_U_(0x1) << SMC_HSMC_SR_NFCASE_Pos)           /**< (SMC_HSMC_SR) NFC Access Size Error Mask */
#define SMC_HSMC_SR_NFCASE                  SMC_HSMC_SR_NFCASE_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_SR_NFCASE_Msk instead */
#define SMC_HSMC_SR_RB_EDGE0_Pos            24                                             /**< (SMC_HSMC_SR) Ready/Busy Line 0 Edge Detected Position */
#define SMC_HSMC_SR_RB_EDGE0_Msk            (_U_(0x1) << SMC_HSMC_SR_RB_EDGE0_Pos)         /**< (SMC_HSMC_SR) Ready/Busy Line 0 Edge Detected Mask */
#define SMC_HSMC_SR_RB_EDGE0                SMC_HSMC_SR_RB_EDGE0_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_SR_RB_EDGE0_Msk instead */
#define SMC_HSMC_SR_MASK                    _U_(0x1F37931)                                 /**< \deprecated (SMC_HSMC_SR) Register MASK  (Use SMC_HSMC_SR_Msk instead)  */
#define SMC_HSMC_SR_Msk                     _U_(0x1F37931)                                 /**< (SMC_HSMC_SR) Register Mask  */

#define SMC_HSMC_SR_RB_EDGE_Pos             24                                             /**< (SMC_HSMC_SR Position) Ready/Busy Line x Edge Detected */
#define SMC_HSMC_SR_RB_EDGE_Msk             (_U_(0x1) << SMC_HSMC_SR_RB_EDGE_Pos)          /**< (SMC_HSMC_SR Mask) RB_EDGE */
#define SMC_HSMC_SR_RB_EDGE(value)          (SMC_HSMC_SR_RB_EDGE_Msk & ((value) << SMC_HSMC_SR_RB_EDGE_Pos))  

/* -------- SMC_HSMC_IER : (SMC Offset: 0x0c) (/W 32) NFC Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :4;                        /**< bit:   0..3  Reserved */
    uint32_t RB_RISE:1;                 /**< bit:      4  Ready Busy Rising Edge Detection Interrupt Enable */
    uint32_t RB_FALL:1;                 /**< bit:      5  Ready Busy Falling Edge Detection Interrupt Enable */
    uint32_t :10;                       /**< bit:  6..15  Reserved */
    uint32_t XFRDONE:1;                 /**< bit:     16  Transfer Done Interrupt Enable           */
    uint32_t CMDDONE:1;                 /**< bit:     17  Command Done Interrupt Enable            */
    uint32_t :2;                        /**< bit: 18..19  Reserved */
    uint32_t DTOE:1;                    /**< bit:     20  Data Timeout Error Interrupt Enable      */
    uint32_t UNDEF:1;                   /**< bit:     21  Undefined Area Access Interrupt Enable   */
    uint32_t AWB:1;                     /**< bit:     22  Accessing While Busy Interrupt Enable    */
    uint32_t NFCASE:1;                  /**< bit:     23  NFC Access Size Error Interrupt Enable   */
    uint32_t RB_EDGE0:1;                /**< bit:     24  Ready/Busy Line 0 Interrupt Enable       */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :24;                       /**< bit:  0..23  Reserved */
    uint32_t RB_EDGE:1;                 /**< bit:     24  Ready/Busy Line x Interrupt Enable       */
    uint32_t :7;                        /**< bit: 25..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_IER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_IER_OFFSET                 (0x0C)                                        /**<  (SMC_HSMC_IER) NFC Interrupt Enable Register  Offset */

#define SMC_HSMC_IER_RB_RISE_Pos            4                                              /**< (SMC_HSMC_IER) Ready Busy Rising Edge Detection Interrupt Enable Position */
#define SMC_HSMC_IER_RB_RISE_Msk            (_U_(0x1) << SMC_HSMC_IER_RB_RISE_Pos)         /**< (SMC_HSMC_IER) Ready Busy Rising Edge Detection Interrupt Enable Mask */
#define SMC_HSMC_IER_RB_RISE                SMC_HSMC_IER_RB_RISE_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IER_RB_RISE_Msk instead */
#define SMC_HSMC_IER_RB_FALL_Pos            5                                              /**< (SMC_HSMC_IER) Ready Busy Falling Edge Detection Interrupt Enable Position */
#define SMC_HSMC_IER_RB_FALL_Msk            (_U_(0x1) << SMC_HSMC_IER_RB_FALL_Pos)         /**< (SMC_HSMC_IER) Ready Busy Falling Edge Detection Interrupt Enable Mask */
#define SMC_HSMC_IER_RB_FALL                SMC_HSMC_IER_RB_FALL_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IER_RB_FALL_Msk instead */
#define SMC_HSMC_IER_XFRDONE_Pos            16                                             /**< (SMC_HSMC_IER) Transfer Done Interrupt Enable Position */
#define SMC_HSMC_IER_XFRDONE_Msk            (_U_(0x1) << SMC_HSMC_IER_XFRDONE_Pos)         /**< (SMC_HSMC_IER) Transfer Done Interrupt Enable Mask */
#define SMC_HSMC_IER_XFRDONE                SMC_HSMC_IER_XFRDONE_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IER_XFRDONE_Msk instead */
#define SMC_HSMC_IER_CMDDONE_Pos            17                                             /**< (SMC_HSMC_IER) Command Done Interrupt Enable Position */
#define SMC_HSMC_IER_CMDDONE_Msk            (_U_(0x1) << SMC_HSMC_IER_CMDDONE_Pos)         /**< (SMC_HSMC_IER) Command Done Interrupt Enable Mask */
#define SMC_HSMC_IER_CMDDONE                SMC_HSMC_IER_CMDDONE_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IER_CMDDONE_Msk instead */
#define SMC_HSMC_IER_DTOE_Pos               20                                             /**< (SMC_HSMC_IER) Data Timeout Error Interrupt Enable Position */
#define SMC_HSMC_IER_DTOE_Msk               (_U_(0x1) << SMC_HSMC_IER_DTOE_Pos)            /**< (SMC_HSMC_IER) Data Timeout Error Interrupt Enable Mask */
#define SMC_HSMC_IER_DTOE                   SMC_HSMC_IER_DTOE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IER_DTOE_Msk instead */
#define SMC_HSMC_IER_UNDEF_Pos              21                                             /**< (SMC_HSMC_IER) Undefined Area Access Interrupt Enable Position */
#define SMC_HSMC_IER_UNDEF_Msk              (_U_(0x1) << SMC_HSMC_IER_UNDEF_Pos)           /**< (SMC_HSMC_IER) Undefined Area Access Interrupt Enable Mask */
#define SMC_HSMC_IER_UNDEF                  SMC_HSMC_IER_UNDEF_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IER_UNDEF_Msk instead */
#define SMC_HSMC_IER_AWB_Pos                22                                             /**< (SMC_HSMC_IER) Accessing While Busy Interrupt Enable Position */
#define SMC_HSMC_IER_AWB_Msk                (_U_(0x1) << SMC_HSMC_IER_AWB_Pos)             /**< (SMC_HSMC_IER) Accessing While Busy Interrupt Enable Mask */
#define SMC_HSMC_IER_AWB                    SMC_HSMC_IER_AWB_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IER_AWB_Msk instead */
#define SMC_HSMC_IER_NFCASE_Pos             23                                             /**< (SMC_HSMC_IER) NFC Access Size Error Interrupt Enable Position */
#define SMC_HSMC_IER_NFCASE_Msk             (_U_(0x1) << SMC_HSMC_IER_NFCASE_Pos)          /**< (SMC_HSMC_IER) NFC Access Size Error Interrupt Enable Mask */
#define SMC_HSMC_IER_NFCASE                 SMC_HSMC_IER_NFCASE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IER_NFCASE_Msk instead */
#define SMC_HSMC_IER_RB_EDGE0_Pos           24                                             /**< (SMC_HSMC_IER) Ready/Busy Line 0 Interrupt Enable Position */
#define SMC_HSMC_IER_RB_EDGE0_Msk           (_U_(0x1) << SMC_HSMC_IER_RB_EDGE0_Pos)        /**< (SMC_HSMC_IER) Ready/Busy Line 0 Interrupt Enable Mask */
#define SMC_HSMC_IER_RB_EDGE0               SMC_HSMC_IER_RB_EDGE0_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IER_RB_EDGE0_Msk instead */
#define SMC_HSMC_IER_MASK                   _U_(0x1F30030)                                 /**< \deprecated (SMC_HSMC_IER) Register MASK  (Use SMC_HSMC_IER_Msk instead)  */
#define SMC_HSMC_IER_Msk                    _U_(0x1F30030)                                 /**< (SMC_HSMC_IER) Register Mask  */

#define SMC_HSMC_IER_RB_EDGE_Pos            24                                             /**< (SMC_HSMC_IER Position) Ready/Busy Line x Interrupt Enable */
#define SMC_HSMC_IER_RB_EDGE_Msk            (_U_(0x1) << SMC_HSMC_IER_RB_EDGE_Pos)         /**< (SMC_HSMC_IER Mask) RB_EDGE */
#define SMC_HSMC_IER_RB_EDGE(value)         (SMC_HSMC_IER_RB_EDGE_Msk & ((value) << SMC_HSMC_IER_RB_EDGE_Pos))  

/* -------- SMC_HSMC_IDR : (SMC Offset: 0x10) (/W 32) NFC Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :4;                        /**< bit:   0..3  Reserved */
    uint32_t RB_RISE:1;                 /**< bit:      4  Ready Busy Rising Edge Detection Interrupt Disable */
    uint32_t RB_FALL:1;                 /**< bit:      5  Ready Busy Falling Edge Detection Interrupt Disable */
    uint32_t :10;                       /**< bit:  6..15  Reserved */
    uint32_t XFRDONE:1;                 /**< bit:     16  Transfer Done Interrupt Disable          */
    uint32_t CMDDONE:1;                 /**< bit:     17  Command Done Interrupt Disable           */
    uint32_t :2;                        /**< bit: 18..19  Reserved */
    uint32_t DTOE:1;                    /**< bit:     20  Data Timeout Error Interrupt Disable     */
    uint32_t UNDEF:1;                   /**< bit:     21  Undefined Area Access Interrupt Disable  */
    uint32_t AWB:1;                     /**< bit:     22  Accessing While Busy Interrupt Disable   */
    uint32_t NFCASE:1;                  /**< bit:     23  NFC Access Size Error Interrupt Disable  */
    uint32_t RB_EDGE0:1;                /**< bit:     24  Ready/Busy Line 0 Interrupt Disable      */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :24;                       /**< bit:  0..23  Reserved */
    uint32_t RB_EDGE:1;                 /**< bit:     24  Ready/Busy Line x Interrupt Disable      */
    uint32_t :7;                        /**< bit: 25..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_IDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_IDR_OFFSET                 (0x10)                                        /**<  (SMC_HSMC_IDR) NFC Interrupt Disable Register  Offset */

#define SMC_HSMC_IDR_RB_RISE_Pos            4                                              /**< (SMC_HSMC_IDR) Ready Busy Rising Edge Detection Interrupt Disable Position */
#define SMC_HSMC_IDR_RB_RISE_Msk            (_U_(0x1) << SMC_HSMC_IDR_RB_RISE_Pos)         /**< (SMC_HSMC_IDR) Ready Busy Rising Edge Detection Interrupt Disable Mask */
#define SMC_HSMC_IDR_RB_RISE                SMC_HSMC_IDR_RB_RISE_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IDR_RB_RISE_Msk instead */
#define SMC_HSMC_IDR_RB_FALL_Pos            5                                              /**< (SMC_HSMC_IDR) Ready Busy Falling Edge Detection Interrupt Disable Position */
#define SMC_HSMC_IDR_RB_FALL_Msk            (_U_(0x1) << SMC_HSMC_IDR_RB_FALL_Pos)         /**< (SMC_HSMC_IDR) Ready Busy Falling Edge Detection Interrupt Disable Mask */
#define SMC_HSMC_IDR_RB_FALL                SMC_HSMC_IDR_RB_FALL_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IDR_RB_FALL_Msk instead */
#define SMC_HSMC_IDR_XFRDONE_Pos            16                                             /**< (SMC_HSMC_IDR) Transfer Done Interrupt Disable Position */
#define SMC_HSMC_IDR_XFRDONE_Msk            (_U_(0x1) << SMC_HSMC_IDR_XFRDONE_Pos)         /**< (SMC_HSMC_IDR) Transfer Done Interrupt Disable Mask */
#define SMC_HSMC_IDR_XFRDONE                SMC_HSMC_IDR_XFRDONE_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IDR_XFRDONE_Msk instead */
#define SMC_HSMC_IDR_CMDDONE_Pos            17                                             /**< (SMC_HSMC_IDR) Command Done Interrupt Disable Position */
#define SMC_HSMC_IDR_CMDDONE_Msk            (_U_(0x1) << SMC_HSMC_IDR_CMDDONE_Pos)         /**< (SMC_HSMC_IDR) Command Done Interrupt Disable Mask */
#define SMC_HSMC_IDR_CMDDONE                SMC_HSMC_IDR_CMDDONE_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IDR_CMDDONE_Msk instead */
#define SMC_HSMC_IDR_DTOE_Pos               20                                             /**< (SMC_HSMC_IDR) Data Timeout Error Interrupt Disable Position */
#define SMC_HSMC_IDR_DTOE_Msk               (_U_(0x1) << SMC_HSMC_IDR_DTOE_Pos)            /**< (SMC_HSMC_IDR) Data Timeout Error Interrupt Disable Mask */
#define SMC_HSMC_IDR_DTOE                   SMC_HSMC_IDR_DTOE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IDR_DTOE_Msk instead */
#define SMC_HSMC_IDR_UNDEF_Pos              21                                             /**< (SMC_HSMC_IDR) Undefined Area Access Interrupt Disable Position */
#define SMC_HSMC_IDR_UNDEF_Msk              (_U_(0x1) << SMC_HSMC_IDR_UNDEF_Pos)           /**< (SMC_HSMC_IDR) Undefined Area Access Interrupt Disable Mask */
#define SMC_HSMC_IDR_UNDEF                  SMC_HSMC_IDR_UNDEF_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IDR_UNDEF_Msk instead */
#define SMC_HSMC_IDR_AWB_Pos                22                                             /**< (SMC_HSMC_IDR) Accessing While Busy Interrupt Disable Position */
#define SMC_HSMC_IDR_AWB_Msk                (_U_(0x1) << SMC_HSMC_IDR_AWB_Pos)             /**< (SMC_HSMC_IDR) Accessing While Busy Interrupt Disable Mask */
#define SMC_HSMC_IDR_AWB                    SMC_HSMC_IDR_AWB_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IDR_AWB_Msk instead */
#define SMC_HSMC_IDR_NFCASE_Pos             23                                             /**< (SMC_HSMC_IDR) NFC Access Size Error Interrupt Disable Position */
#define SMC_HSMC_IDR_NFCASE_Msk             (_U_(0x1) << SMC_HSMC_IDR_NFCASE_Pos)          /**< (SMC_HSMC_IDR) NFC Access Size Error Interrupt Disable Mask */
#define SMC_HSMC_IDR_NFCASE                 SMC_HSMC_IDR_NFCASE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IDR_NFCASE_Msk instead */
#define SMC_HSMC_IDR_RB_EDGE0_Pos           24                                             /**< (SMC_HSMC_IDR) Ready/Busy Line 0 Interrupt Disable Position */
#define SMC_HSMC_IDR_RB_EDGE0_Msk           (_U_(0x1) << SMC_HSMC_IDR_RB_EDGE0_Pos)        /**< (SMC_HSMC_IDR) Ready/Busy Line 0 Interrupt Disable Mask */
#define SMC_HSMC_IDR_RB_EDGE0               SMC_HSMC_IDR_RB_EDGE0_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IDR_RB_EDGE0_Msk instead */
#define SMC_HSMC_IDR_MASK                   _U_(0x1F30030)                                 /**< \deprecated (SMC_HSMC_IDR) Register MASK  (Use SMC_HSMC_IDR_Msk instead)  */
#define SMC_HSMC_IDR_Msk                    _U_(0x1F30030)                                 /**< (SMC_HSMC_IDR) Register Mask  */

#define SMC_HSMC_IDR_RB_EDGE_Pos            24                                             /**< (SMC_HSMC_IDR Position) Ready/Busy Line x Interrupt Disable */
#define SMC_HSMC_IDR_RB_EDGE_Msk            (_U_(0x1) << SMC_HSMC_IDR_RB_EDGE_Pos)         /**< (SMC_HSMC_IDR Mask) RB_EDGE */
#define SMC_HSMC_IDR_RB_EDGE(value)         (SMC_HSMC_IDR_RB_EDGE_Msk & ((value) << SMC_HSMC_IDR_RB_EDGE_Pos))  

/* -------- SMC_HSMC_IMR : (SMC Offset: 0x14) (R/ 32) NFC Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :4;                        /**< bit:   0..3  Reserved */
    uint32_t RB_RISE:1;                 /**< bit:      4  Ready Busy Rising Edge Detection Interrupt Mask */
    uint32_t RB_FALL:1;                 /**< bit:      5  Ready Busy Falling Edge Detection Interrupt Mask */
    uint32_t :10;                       /**< bit:  6..15  Reserved */
    uint32_t XFRDONE:1;                 /**< bit:     16  Transfer Done Interrupt Mask             */
    uint32_t CMDDONE:1;                 /**< bit:     17  Command Done Interrupt Mask              */
    uint32_t :2;                        /**< bit: 18..19  Reserved */
    uint32_t DTOE:1;                    /**< bit:     20  Data Timeout Error Interrupt Mask        */
    uint32_t UNDEF:1;                   /**< bit:     21  Undefined Area Access Interrupt Mask5    */
    uint32_t AWB:1;                     /**< bit:     22  Accessing While Busy Interrupt Mask      */
    uint32_t NFCASE:1;                  /**< bit:     23  NFC Access Size Error Interrupt Mask     */
    uint32_t RB_EDGE0:1;                /**< bit:     24  Ready/Busy Line 0 Interrupt Mask         */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :24;                       /**< bit:  0..23  Reserved */
    uint32_t RB_EDGE:1;                 /**< bit:     24  Ready/Busy Line x Interrupt Mask         */
    uint32_t :7;                        /**< bit: 25..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_IMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_IMR_OFFSET                 (0x14)                                        /**<  (SMC_HSMC_IMR) NFC Interrupt Mask Register  Offset */

#define SMC_HSMC_IMR_RB_RISE_Pos            4                                              /**< (SMC_HSMC_IMR) Ready Busy Rising Edge Detection Interrupt Mask Position */
#define SMC_HSMC_IMR_RB_RISE_Msk            (_U_(0x1) << SMC_HSMC_IMR_RB_RISE_Pos)         /**< (SMC_HSMC_IMR) Ready Busy Rising Edge Detection Interrupt Mask Mask */
#define SMC_HSMC_IMR_RB_RISE                SMC_HSMC_IMR_RB_RISE_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IMR_RB_RISE_Msk instead */
#define SMC_HSMC_IMR_RB_FALL_Pos            5                                              /**< (SMC_HSMC_IMR) Ready Busy Falling Edge Detection Interrupt Mask Position */
#define SMC_HSMC_IMR_RB_FALL_Msk            (_U_(0x1) << SMC_HSMC_IMR_RB_FALL_Pos)         /**< (SMC_HSMC_IMR) Ready Busy Falling Edge Detection Interrupt Mask Mask */
#define SMC_HSMC_IMR_RB_FALL                SMC_HSMC_IMR_RB_FALL_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IMR_RB_FALL_Msk instead */
#define SMC_HSMC_IMR_XFRDONE_Pos            16                                             /**< (SMC_HSMC_IMR) Transfer Done Interrupt Mask Position */
#define SMC_HSMC_IMR_XFRDONE_Msk            (_U_(0x1) << SMC_HSMC_IMR_XFRDONE_Pos)         /**< (SMC_HSMC_IMR) Transfer Done Interrupt Mask Mask */
#define SMC_HSMC_IMR_XFRDONE                SMC_HSMC_IMR_XFRDONE_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IMR_XFRDONE_Msk instead */
#define SMC_HSMC_IMR_CMDDONE_Pos            17                                             /**< (SMC_HSMC_IMR) Command Done Interrupt Mask Position */
#define SMC_HSMC_IMR_CMDDONE_Msk            (_U_(0x1) << SMC_HSMC_IMR_CMDDONE_Pos)         /**< (SMC_HSMC_IMR) Command Done Interrupt Mask Mask */
#define SMC_HSMC_IMR_CMDDONE                SMC_HSMC_IMR_CMDDONE_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IMR_CMDDONE_Msk instead */
#define SMC_HSMC_IMR_DTOE_Pos               20                                             /**< (SMC_HSMC_IMR) Data Timeout Error Interrupt Mask Position */
#define SMC_HSMC_IMR_DTOE_Msk               (_U_(0x1) << SMC_HSMC_IMR_DTOE_Pos)            /**< (SMC_HSMC_IMR) Data Timeout Error Interrupt Mask Mask */
#define SMC_HSMC_IMR_DTOE                   SMC_HSMC_IMR_DTOE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IMR_DTOE_Msk instead */
#define SMC_HSMC_IMR_UNDEF_Pos              21                                             /**< (SMC_HSMC_IMR) Undefined Area Access Interrupt Mask5 Position */
#define SMC_HSMC_IMR_UNDEF_Msk              (_U_(0x1) << SMC_HSMC_IMR_UNDEF_Pos)           /**< (SMC_HSMC_IMR) Undefined Area Access Interrupt Mask5 Mask */
#define SMC_HSMC_IMR_UNDEF                  SMC_HSMC_IMR_UNDEF_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IMR_UNDEF_Msk instead */
#define SMC_HSMC_IMR_AWB_Pos                22                                             /**< (SMC_HSMC_IMR) Accessing While Busy Interrupt Mask Position */
#define SMC_HSMC_IMR_AWB_Msk                (_U_(0x1) << SMC_HSMC_IMR_AWB_Pos)             /**< (SMC_HSMC_IMR) Accessing While Busy Interrupt Mask Mask */
#define SMC_HSMC_IMR_AWB                    SMC_HSMC_IMR_AWB_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IMR_AWB_Msk instead */
#define SMC_HSMC_IMR_NFCASE_Pos             23                                             /**< (SMC_HSMC_IMR) NFC Access Size Error Interrupt Mask Position */
#define SMC_HSMC_IMR_NFCASE_Msk             (_U_(0x1) << SMC_HSMC_IMR_NFCASE_Pos)          /**< (SMC_HSMC_IMR) NFC Access Size Error Interrupt Mask Mask */
#define SMC_HSMC_IMR_NFCASE                 SMC_HSMC_IMR_NFCASE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IMR_NFCASE_Msk instead */
#define SMC_HSMC_IMR_RB_EDGE0_Pos           24                                             /**< (SMC_HSMC_IMR) Ready/Busy Line 0 Interrupt Mask Position */
#define SMC_HSMC_IMR_RB_EDGE0_Msk           (_U_(0x1) << SMC_HSMC_IMR_RB_EDGE0_Pos)        /**< (SMC_HSMC_IMR) Ready/Busy Line 0 Interrupt Mask Mask */
#define SMC_HSMC_IMR_RB_EDGE0               SMC_HSMC_IMR_RB_EDGE0_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_IMR_RB_EDGE0_Msk instead */
#define SMC_HSMC_IMR_MASK                   _U_(0x1F30030)                                 /**< \deprecated (SMC_HSMC_IMR) Register MASK  (Use SMC_HSMC_IMR_Msk instead)  */
#define SMC_HSMC_IMR_Msk                    _U_(0x1F30030)                                 /**< (SMC_HSMC_IMR) Register Mask  */

#define SMC_HSMC_IMR_RB_EDGE_Pos            24                                             /**< (SMC_HSMC_IMR Position) Ready/Busy Line x Interrupt Mask */
#define SMC_HSMC_IMR_RB_EDGE_Msk            (_U_(0x1) << SMC_HSMC_IMR_RB_EDGE_Pos)         /**< (SMC_HSMC_IMR Mask) RB_EDGE */
#define SMC_HSMC_IMR_RB_EDGE(value)         (SMC_HSMC_IMR_RB_EDGE_Msk & ((value) << SMC_HSMC_IMR_RB_EDGE_Pos))  

/* -------- SMC_HSMC_ADDR : (SMC Offset: 0x18) (R/W 32) NFC Address Cycle Zero Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR_CYCLE0:8;             /**< bit:   0..7  NAND Flash Array Address Cycle 0         */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_ADDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_ADDR_OFFSET                (0x18)                                        /**<  (SMC_HSMC_ADDR) NFC Address Cycle Zero Register  Offset */

#define SMC_HSMC_ADDR_ADDR_CYCLE0_Pos       0                                              /**< (SMC_HSMC_ADDR) NAND Flash Array Address Cycle 0 Position */
#define SMC_HSMC_ADDR_ADDR_CYCLE0_Msk       (_U_(0xFF) << SMC_HSMC_ADDR_ADDR_CYCLE0_Pos)   /**< (SMC_HSMC_ADDR) NAND Flash Array Address Cycle 0 Mask */
#define SMC_HSMC_ADDR_ADDR_CYCLE0(value)    (SMC_HSMC_ADDR_ADDR_CYCLE0_Msk & ((value) << SMC_HSMC_ADDR_ADDR_CYCLE0_Pos))
#define SMC_HSMC_ADDR_MASK                  _U_(0xFF)                                      /**< \deprecated (SMC_HSMC_ADDR) Register MASK  (Use SMC_HSMC_ADDR_Msk instead)  */
#define SMC_HSMC_ADDR_Msk                   _U_(0xFF)                                      /**< (SMC_HSMC_ADDR) Register Mask  */


/* -------- SMC_HSMC_BANK : (SMC Offset: 0x1c) (R/W 32) Bank Address Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BANK:1;                    /**< bit:      0  Bank Identifier                          */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_BANK_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_BANK_OFFSET                (0x1C)                                        /**<  (SMC_HSMC_BANK) Bank Address Register  Offset */

#define SMC_HSMC_BANK_BANK_Pos              0                                              /**< (SMC_HSMC_BANK) Bank Identifier Position */
#define SMC_HSMC_BANK_BANK_Msk              (_U_(0x1) << SMC_HSMC_BANK_BANK_Pos)           /**< (SMC_HSMC_BANK) Bank Identifier Mask */
#define SMC_HSMC_BANK_BANK                  SMC_HSMC_BANK_BANK_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_BANK_BANK_Msk instead */
#define SMC_HSMC_BANK_MASK                  _U_(0x01)                                      /**< \deprecated (SMC_HSMC_BANK) Register MASK  (Use SMC_HSMC_BANK_Msk instead)  */
#define SMC_HSMC_BANK_Msk                   _U_(0x01)                                      /**< (SMC_HSMC_BANK) Register Mask  */


/* -------- SMC_HSMC_PMECCFG : (SMC Offset: 0x70) (R/W 32) PMECC Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BCH_ERR:3;                 /**< bit:   0..2  Error Correcting Capability              */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t SECTORSZ:1;                /**< bit:      4  Sector Size                              */
    uint32_t :3;                        /**< bit:   5..7  Reserved */
    uint32_t PAGESIZE:2;                /**< bit:   8..9  Number of Sectors in the Page            */
    uint32_t :2;                        /**< bit: 10..11  Reserved */
    uint32_t NANDWR:1;                  /**< bit:     12  NAND Write Access                        */
    uint32_t :3;                        /**< bit: 13..15  Reserved */
    uint32_t SPAREEN:1;                 /**< bit:     16  Spare Enable                             */
    uint32_t :3;                        /**< bit: 17..19  Reserved */
    uint32_t AUTO:1;                    /**< bit:     20  Automatic Mode Enable                    */
    uint32_t :11;                       /**< bit: 21..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_PMECCFG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_PMECCFG_OFFSET             (0x70)                                        /**<  (SMC_HSMC_PMECCFG) PMECC Configuration Register  Offset */

#define SMC_HSMC_PMECCFG_BCH_ERR_Pos        0                                              /**< (SMC_HSMC_PMECCFG) Error Correcting Capability Position */
#define SMC_HSMC_PMECCFG_BCH_ERR_Msk        (_U_(0x7) << SMC_HSMC_PMECCFG_BCH_ERR_Pos)     /**< (SMC_HSMC_PMECCFG) Error Correcting Capability Mask */
#define SMC_HSMC_PMECCFG_BCH_ERR(value)     (SMC_HSMC_PMECCFG_BCH_ERR_Msk & ((value) << SMC_HSMC_PMECCFG_BCH_ERR_Pos))
#define   SMC_HSMC_PMECCFG_BCH_ERR_BCH_ERR2_Val _U_(0x0)                                       /**< (SMC_HSMC_PMECCFG) 2 errors  */
#define   SMC_HSMC_PMECCFG_BCH_ERR_BCH_ERR4_Val _U_(0x1)                                       /**< (SMC_HSMC_PMECCFG) 4 errors  */
#define   SMC_HSMC_PMECCFG_BCH_ERR_BCH_ERR8_Val _U_(0x2)                                       /**< (SMC_HSMC_PMECCFG) 8 errors  */
#define   SMC_HSMC_PMECCFG_BCH_ERR_BCH_ERR12_Val _U_(0x3)                                       /**< (SMC_HSMC_PMECCFG) 12 errors  */
#define   SMC_HSMC_PMECCFG_BCH_ERR_BCH_ERR24_Val _U_(0x4)                                       /**< (SMC_HSMC_PMECCFG) 24 errors  */
#define   SMC_HSMC_PMECCFG_BCH_ERR_BCH_ERR32_Val _U_(0x5)                                       /**< (SMC_HSMC_PMECCFG) 32 errors  */
#define SMC_HSMC_PMECCFG_BCH_ERR_BCH_ERR2   (SMC_HSMC_PMECCFG_BCH_ERR_BCH_ERR2_Val << SMC_HSMC_PMECCFG_BCH_ERR_Pos)  /**< (SMC_HSMC_PMECCFG) 2 errors Position  */
#define SMC_HSMC_PMECCFG_BCH_ERR_BCH_ERR4   (SMC_HSMC_PMECCFG_BCH_ERR_BCH_ERR4_Val << SMC_HSMC_PMECCFG_BCH_ERR_Pos)  /**< (SMC_HSMC_PMECCFG) 4 errors Position  */
#define SMC_HSMC_PMECCFG_BCH_ERR_BCH_ERR8   (SMC_HSMC_PMECCFG_BCH_ERR_BCH_ERR8_Val << SMC_HSMC_PMECCFG_BCH_ERR_Pos)  /**< (SMC_HSMC_PMECCFG) 8 errors Position  */
#define SMC_HSMC_PMECCFG_BCH_ERR_BCH_ERR12  (SMC_HSMC_PMECCFG_BCH_ERR_BCH_ERR12_Val << SMC_HSMC_PMECCFG_BCH_ERR_Pos)  /**< (SMC_HSMC_PMECCFG) 12 errors Position  */
#define SMC_HSMC_PMECCFG_BCH_ERR_BCH_ERR24  (SMC_HSMC_PMECCFG_BCH_ERR_BCH_ERR24_Val << SMC_HSMC_PMECCFG_BCH_ERR_Pos)  /**< (SMC_HSMC_PMECCFG) 24 errors Position  */
#define SMC_HSMC_PMECCFG_BCH_ERR_BCH_ERR32  (SMC_HSMC_PMECCFG_BCH_ERR_BCH_ERR32_Val << SMC_HSMC_PMECCFG_BCH_ERR_Pos)  /**< (SMC_HSMC_PMECCFG) 32 errors Position  */
#define SMC_HSMC_PMECCFG_SECTORSZ_Pos       4                                              /**< (SMC_HSMC_PMECCFG) Sector Size Position */
#define SMC_HSMC_PMECCFG_SECTORSZ_Msk       (_U_(0x1) << SMC_HSMC_PMECCFG_SECTORSZ_Pos)    /**< (SMC_HSMC_PMECCFG) Sector Size Mask */
#define SMC_HSMC_PMECCFG_SECTORSZ           SMC_HSMC_PMECCFG_SECTORSZ_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_PMECCFG_SECTORSZ_Msk instead */
#define   SMC_HSMC_PMECCFG_SECTORSZ_SECTORSZ0_Val _U_(0x0)                                       /**< (SMC_HSMC_PMECCFG) Use  512 Byte Sector in ECC Computation  */
#define   SMC_HSMC_PMECCFG_SECTORSZ_SECTORSZ1_Val _U_(0x1)                                       /**< (SMC_HSMC_PMECCFG) Use 1024 Byte Sector in ECC Computation  */
#define SMC_HSMC_PMECCFG_SECTORSZ_SECTORSZ0 (SMC_HSMC_PMECCFG_SECTORSZ_SECTORSZ0_Val << SMC_HSMC_PMECCFG_SECTORSZ_Pos)  /**< (SMC_HSMC_PMECCFG) Use  512 Byte Sector in ECC Computation Position  */
#define SMC_HSMC_PMECCFG_SECTORSZ_SECTORSZ1 (SMC_HSMC_PMECCFG_SECTORSZ_SECTORSZ1_Val << SMC_HSMC_PMECCFG_SECTORSZ_Pos)  /**< (SMC_HSMC_PMECCFG) Use 1024 Byte Sector in ECC Computation Position  */
#define SMC_HSMC_PMECCFG_PAGESIZE_Pos       8                                              /**< (SMC_HSMC_PMECCFG) Number of Sectors in the Page Position */
#define SMC_HSMC_PMECCFG_PAGESIZE_Msk       (_U_(0x3) << SMC_HSMC_PMECCFG_PAGESIZE_Pos)    /**< (SMC_HSMC_PMECCFG) Number of Sectors in the Page Mask */
#define SMC_HSMC_PMECCFG_PAGESIZE(value)    (SMC_HSMC_PMECCFG_PAGESIZE_Msk & ((value) << SMC_HSMC_PMECCFG_PAGESIZE_Pos))
#define   SMC_HSMC_PMECCFG_PAGESIZE_PAGESIZE_1SEC_Val _U_(0x0)                                       /**< (SMC_HSMC_PMECCFG) 1 sector for main area (512 or 1024 bytes)  */
#define   SMC_HSMC_PMECCFG_PAGESIZE_PAGESIZE_2SEC_Val _U_(0x1)                                       /**< (SMC_HSMC_PMECCFG) 2 sectors for main area (1024 or 2048 bytes)  */
#define   SMC_HSMC_PMECCFG_PAGESIZE_PAGESIZE_4SEC_Val _U_(0x2)                                       /**< (SMC_HSMC_PMECCFG) 4 sectors for main area (2048 or 4096 bytes)  */
#define   SMC_HSMC_PMECCFG_PAGESIZE_PAGESIZE_8SEC_Val _U_(0x3)                                       /**< (SMC_HSMC_PMECCFG) 8 sectors for main area (4096 or 8192 bytes)  */
#define SMC_HSMC_PMECCFG_PAGESIZE_PAGESIZE_1SEC (SMC_HSMC_PMECCFG_PAGESIZE_PAGESIZE_1SEC_Val << SMC_HSMC_PMECCFG_PAGESIZE_Pos)  /**< (SMC_HSMC_PMECCFG) 1 sector for main area (512 or 1024 bytes) Position  */
#define SMC_HSMC_PMECCFG_PAGESIZE_PAGESIZE_2SEC (SMC_HSMC_PMECCFG_PAGESIZE_PAGESIZE_2SEC_Val << SMC_HSMC_PMECCFG_PAGESIZE_Pos)  /**< (SMC_HSMC_PMECCFG) 2 sectors for main area (1024 or 2048 bytes) Position  */
#define SMC_HSMC_PMECCFG_PAGESIZE_PAGESIZE_4SEC (SMC_HSMC_PMECCFG_PAGESIZE_PAGESIZE_4SEC_Val << SMC_HSMC_PMECCFG_PAGESIZE_Pos)  /**< (SMC_HSMC_PMECCFG) 4 sectors for main area (2048 or 4096 bytes) Position  */
#define SMC_HSMC_PMECCFG_PAGESIZE_PAGESIZE_8SEC (SMC_HSMC_PMECCFG_PAGESIZE_PAGESIZE_8SEC_Val << SMC_HSMC_PMECCFG_PAGESIZE_Pos)  /**< (SMC_HSMC_PMECCFG) 8 sectors for main area (4096 or 8192 bytes) Position  */
#define SMC_HSMC_PMECCFG_NANDWR_Pos         12                                             /**< (SMC_HSMC_PMECCFG) NAND Write Access Position */
#define SMC_HSMC_PMECCFG_NANDWR_Msk         (_U_(0x1) << SMC_HSMC_PMECCFG_NANDWR_Pos)      /**< (SMC_HSMC_PMECCFG) NAND Write Access Mask */
#define SMC_HSMC_PMECCFG_NANDWR             SMC_HSMC_PMECCFG_NANDWR_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_PMECCFG_NANDWR_Msk instead */
#define SMC_HSMC_PMECCFG_SPAREEN_Pos        16                                             /**< (SMC_HSMC_PMECCFG) Spare Enable Position */
#define SMC_HSMC_PMECCFG_SPAREEN_Msk        (_U_(0x1) << SMC_HSMC_PMECCFG_SPAREEN_Pos)     /**< (SMC_HSMC_PMECCFG) Spare Enable Mask */
#define SMC_HSMC_PMECCFG_SPAREEN            SMC_HSMC_PMECCFG_SPAREEN_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_PMECCFG_SPAREEN_Msk instead */
#define SMC_HSMC_PMECCFG_AUTO_Pos           20                                             /**< (SMC_HSMC_PMECCFG) Automatic Mode Enable Position */
#define SMC_HSMC_PMECCFG_AUTO_Msk           (_U_(0x1) << SMC_HSMC_PMECCFG_AUTO_Pos)        /**< (SMC_HSMC_PMECCFG) Automatic Mode Enable Mask */
#define SMC_HSMC_PMECCFG_AUTO               SMC_HSMC_PMECCFG_AUTO_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_PMECCFG_AUTO_Msk instead */
#define SMC_HSMC_PMECCFG_MASK               _U_(0x111317)                                  /**< \deprecated (SMC_HSMC_PMECCFG) Register MASK  (Use SMC_HSMC_PMECCFG_Msk instead)  */
#define SMC_HSMC_PMECCFG_Msk                _U_(0x111317)                                  /**< (SMC_HSMC_PMECCFG) Register Mask  */


/* -------- SMC_HSMC_PMECCSAREA : (SMC Offset: 0x74) (R/W 32) PMECC Spare Area Size Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SPARESIZE:9;               /**< bit:   0..8  Spare Area Size                          */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_PMECCSAREA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_PMECCSAREA_OFFSET          (0x74)                                        /**<  (SMC_HSMC_PMECCSAREA) PMECC Spare Area Size Register  Offset */

#define SMC_HSMC_PMECCSAREA_SPARESIZE_Pos   0                                              /**< (SMC_HSMC_PMECCSAREA) Spare Area Size Position */
#define SMC_HSMC_PMECCSAREA_SPARESIZE_Msk   (_U_(0x1FF) << SMC_HSMC_PMECCSAREA_SPARESIZE_Pos)  /**< (SMC_HSMC_PMECCSAREA) Spare Area Size Mask */
#define SMC_HSMC_PMECCSAREA_SPARESIZE(value) (SMC_HSMC_PMECCSAREA_SPARESIZE_Msk & ((value) << SMC_HSMC_PMECCSAREA_SPARESIZE_Pos))
#define SMC_HSMC_PMECCSAREA_MASK            _U_(0x1FF)                                     /**< \deprecated (SMC_HSMC_PMECCSAREA) Register MASK  (Use SMC_HSMC_PMECCSAREA_Msk instead)  */
#define SMC_HSMC_PMECCSAREA_Msk             _U_(0x1FF)                                     /**< (SMC_HSMC_PMECCSAREA) Register Mask  */


/* -------- SMC_HSMC_PMECCSADDR : (SMC Offset: 0x78) (R/W 32) PMECC Start Address Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t STARTADDR:9;               /**< bit:   0..8  ECC Area Start Address                   */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_PMECCSADDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_PMECCSADDR_OFFSET          (0x78)                                        /**<  (SMC_HSMC_PMECCSADDR) PMECC Start Address Register  Offset */

#define SMC_HSMC_PMECCSADDR_STARTADDR_Pos   0                                              /**< (SMC_HSMC_PMECCSADDR) ECC Area Start Address Position */
#define SMC_HSMC_PMECCSADDR_STARTADDR_Msk   (_U_(0x1FF) << SMC_HSMC_PMECCSADDR_STARTADDR_Pos)  /**< (SMC_HSMC_PMECCSADDR) ECC Area Start Address Mask */
#define SMC_HSMC_PMECCSADDR_STARTADDR(value) (SMC_HSMC_PMECCSADDR_STARTADDR_Msk & ((value) << SMC_HSMC_PMECCSADDR_STARTADDR_Pos))
#define SMC_HSMC_PMECCSADDR_MASK            _U_(0x1FF)                                     /**< \deprecated (SMC_HSMC_PMECCSADDR) Register MASK  (Use SMC_HSMC_PMECCSADDR_Msk instead)  */
#define SMC_HSMC_PMECCSADDR_Msk             _U_(0x1FF)                                     /**< (SMC_HSMC_PMECCSADDR) Register Mask  */


/* -------- SMC_HSMC_PMECCEADDR : (SMC Offset: 0x7c) (R/W 32) PMECC End Address Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ENDADDR:9;                 /**< bit:   0..8  ECC Area End Address                     */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_PMECCEADDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_PMECCEADDR_OFFSET          (0x7C)                                        /**<  (SMC_HSMC_PMECCEADDR) PMECC End Address Register  Offset */

#define SMC_HSMC_PMECCEADDR_ENDADDR_Pos     0                                              /**< (SMC_HSMC_PMECCEADDR) ECC Area End Address Position */
#define SMC_HSMC_PMECCEADDR_ENDADDR_Msk     (_U_(0x1FF) << SMC_HSMC_PMECCEADDR_ENDADDR_Pos)  /**< (SMC_HSMC_PMECCEADDR) ECC Area End Address Mask */
#define SMC_HSMC_PMECCEADDR_ENDADDR(value)  (SMC_HSMC_PMECCEADDR_ENDADDR_Msk & ((value) << SMC_HSMC_PMECCEADDR_ENDADDR_Pos))
#define SMC_HSMC_PMECCEADDR_MASK            _U_(0x1FF)                                     /**< \deprecated (SMC_HSMC_PMECCEADDR) Register MASK  (Use SMC_HSMC_PMECCEADDR_Msk instead)  */
#define SMC_HSMC_PMECCEADDR_Msk             _U_(0x1FF)                                     /**< (SMC_HSMC_PMECCEADDR) Register Mask  */


/* -------- SMC_HSMC_PMECCTRL : (SMC Offset: 0x84) (/W 32) PMECC Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RST:1;                     /**< bit:      0  Reset the PMECC Module                   */
    uint32_t DATA:1;                    /**< bit:      1  Start a Data Phase                       */
    uint32_t USER:1;                    /**< bit:      2  Start a User Mode Phase                  */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t ENABLE:1;                  /**< bit:      4  PMECC Enable                             */
    uint32_t DISABLE:1;                 /**< bit:      5  PMECC Enable                             */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_PMECCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_PMECCTRL_OFFSET            (0x84)                                        /**<  (SMC_HSMC_PMECCTRL) PMECC Control Register  Offset */

#define SMC_HSMC_PMECCTRL_RST_Pos           0                                              /**< (SMC_HSMC_PMECCTRL) Reset the PMECC Module Position */
#define SMC_HSMC_PMECCTRL_RST_Msk           (_U_(0x1) << SMC_HSMC_PMECCTRL_RST_Pos)        /**< (SMC_HSMC_PMECCTRL) Reset the PMECC Module Mask */
#define SMC_HSMC_PMECCTRL_RST               SMC_HSMC_PMECCTRL_RST_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_PMECCTRL_RST_Msk instead */
#define SMC_HSMC_PMECCTRL_DATA_Pos          1                                              /**< (SMC_HSMC_PMECCTRL) Start a Data Phase Position */
#define SMC_HSMC_PMECCTRL_DATA_Msk          (_U_(0x1) << SMC_HSMC_PMECCTRL_DATA_Pos)       /**< (SMC_HSMC_PMECCTRL) Start a Data Phase Mask */
#define SMC_HSMC_PMECCTRL_DATA              SMC_HSMC_PMECCTRL_DATA_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_PMECCTRL_DATA_Msk instead */
#define SMC_HSMC_PMECCTRL_USER_Pos          2                                              /**< (SMC_HSMC_PMECCTRL) Start a User Mode Phase Position */
#define SMC_HSMC_PMECCTRL_USER_Msk          (_U_(0x1) << SMC_HSMC_PMECCTRL_USER_Pos)       /**< (SMC_HSMC_PMECCTRL) Start a User Mode Phase Mask */
#define SMC_HSMC_PMECCTRL_USER              SMC_HSMC_PMECCTRL_USER_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_PMECCTRL_USER_Msk instead */
#define SMC_HSMC_PMECCTRL_ENABLE_Pos        4                                              /**< (SMC_HSMC_PMECCTRL) PMECC Enable Position */
#define SMC_HSMC_PMECCTRL_ENABLE_Msk        (_U_(0x1) << SMC_HSMC_PMECCTRL_ENABLE_Pos)     /**< (SMC_HSMC_PMECCTRL) PMECC Enable Mask */
#define SMC_HSMC_PMECCTRL_ENABLE            SMC_HSMC_PMECCTRL_ENABLE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_PMECCTRL_ENABLE_Msk instead */
#define SMC_HSMC_PMECCTRL_DISABLE_Pos       5                                              /**< (SMC_HSMC_PMECCTRL) PMECC Enable Position */
#define SMC_HSMC_PMECCTRL_DISABLE_Msk       (_U_(0x1) << SMC_HSMC_PMECCTRL_DISABLE_Pos)    /**< (SMC_HSMC_PMECCTRL) PMECC Enable Mask */
#define SMC_HSMC_PMECCTRL_DISABLE           SMC_HSMC_PMECCTRL_DISABLE_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_PMECCTRL_DISABLE_Msk instead */
#define SMC_HSMC_PMECCTRL_MASK              _U_(0x37)                                      /**< \deprecated (SMC_HSMC_PMECCTRL) Register MASK  (Use SMC_HSMC_PMECCTRL_Msk instead)  */
#define SMC_HSMC_PMECCTRL_Msk               _U_(0x37)                                      /**< (SMC_HSMC_PMECCTRL) Register Mask  */


/* -------- SMC_HSMC_PMECCSR : (SMC Offset: 0x88) (R/ 32) PMECC Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BUSY:1;                    /**< bit:      0  The kernel of the PMECC is busy          */
    uint32_t :3;                        /**< bit:   1..3  Reserved */
    uint32_t ENABLE:1;                  /**< bit:      4  PMECC Enable bit                         */
    uint32_t :27;                       /**< bit:  5..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_PMECCSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_PMECCSR_OFFSET             (0x88)                                        /**<  (SMC_HSMC_PMECCSR) PMECC Status Register  Offset */

#define SMC_HSMC_PMECCSR_BUSY_Pos           0                                              /**< (SMC_HSMC_PMECCSR) The kernel of the PMECC is busy Position */
#define SMC_HSMC_PMECCSR_BUSY_Msk           (_U_(0x1) << SMC_HSMC_PMECCSR_BUSY_Pos)        /**< (SMC_HSMC_PMECCSR) The kernel of the PMECC is busy Mask */
#define SMC_HSMC_PMECCSR_BUSY               SMC_HSMC_PMECCSR_BUSY_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_PMECCSR_BUSY_Msk instead */
#define SMC_HSMC_PMECCSR_ENABLE_Pos         4                                              /**< (SMC_HSMC_PMECCSR) PMECC Enable bit Position */
#define SMC_HSMC_PMECCSR_ENABLE_Msk         (_U_(0x1) << SMC_HSMC_PMECCSR_ENABLE_Pos)      /**< (SMC_HSMC_PMECCSR) PMECC Enable bit Mask */
#define SMC_HSMC_PMECCSR_ENABLE             SMC_HSMC_PMECCSR_ENABLE_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_PMECCSR_ENABLE_Msk instead */
#define SMC_HSMC_PMECCSR_MASK               _U_(0x11)                                      /**< \deprecated (SMC_HSMC_PMECCSR) Register MASK  (Use SMC_HSMC_PMECCSR_Msk instead)  */
#define SMC_HSMC_PMECCSR_Msk                _U_(0x11)                                      /**< (SMC_HSMC_PMECCSR) Register Mask  */


/* -------- SMC_HSMC_PMECCIER : (SMC Offset: 0x8c) (/W 32) PMECC Interrupt Enable register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ERRIE:1;                   /**< bit:      0  Error Interrupt Enable                   */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_PMECCIER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_PMECCIER_OFFSET            (0x8C)                                        /**<  (SMC_HSMC_PMECCIER) PMECC Interrupt Enable register  Offset */

#define SMC_HSMC_PMECCIER_ERRIE_Pos         0                                              /**< (SMC_HSMC_PMECCIER) Error Interrupt Enable Position */
#define SMC_HSMC_PMECCIER_ERRIE_Msk         (_U_(0x1) << SMC_HSMC_PMECCIER_ERRIE_Pos)      /**< (SMC_HSMC_PMECCIER) Error Interrupt Enable Mask */
#define SMC_HSMC_PMECCIER_ERRIE             SMC_HSMC_PMECCIER_ERRIE_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_PMECCIER_ERRIE_Msk instead */
#define SMC_HSMC_PMECCIER_MASK              _U_(0x01)                                      /**< \deprecated (SMC_HSMC_PMECCIER) Register MASK  (Use SMC_HSMC_PMECCIER_Msk instead)  */
#define SMC_HSMC_PMECCIER_Msk               _U_(0x01)                                      /**< (SMC_HSMC_PMECCIER) Register Mask  */


/* -------- SMC_HSMC_PMECCIDR : (SMC Offset: 0x90) (/W 32) PMECC Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ERRID:1;                   /**< bit:      0  Error Interrupt Disable                  */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_PMECCIDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_PMECCIDR_OFFSET            (0x90)                                        /**<  (SMC_HSMC_PMECCIDR) PMECC Interrupt Disable Register  Offset */

#define SMC_HSMC_PMECCIDR_ERRID_Pos         0                                              /**< (SMC_HSMC_PMECCIDR) Error Interrupt Disable Position */
#define SMC_HSMC_PMECCIDR_ERRID_Msk         (_U_(0x1) << SMC_HSMC_PMECCIDR_ERRID_Pos)      /**< (SMC_HSMC_PMECCIDR) Error Interrupt Disable Mask */
#define SMC_HSMC_PMECCIDR_ERRID             SMC_HSMC_PMECCIDR_ERRID_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_PMECCIDR_ERRID_Msk instead */
#define SMC_HSMC_PMECCIDR_MASK              _U_(0x01)                                      /**< \deprecated (SMC_HSMC_PMECCIDR) Register MASK  (Use SMC_HSMC_PMECCIDR_Msk instead)  */
#define SMC_HSMC_PMECCIDR_Msk               _U_(0x01)                                      /**< (SMC_HSMC_PMECCIDR) Register Mask  */


/* -------- SMC_HSMC_PMECCIMR : (SMC Offset: 0x94) (R/ 32) PMECC Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ERRIM:1;                   /**< bit:      0  Error Interrupt Mask                     */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_PMECCIMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_PMECCIMR_OFFSET            (0x94)                                        /**<  (SMC_HSMC_PMECCIMR) PMECC Interrupt Mask Register  Offset */

#define SMC_HSMC_PMECCIMR_ERRIM_Pos         0                                              /**< (SMC_HSMC_PMECCIMR) Error Interrupt Mask Position */
#define SMC_HSMC_PMECCIMR_ERRIM_Msk         (_U_(0x1) << SMC_HSMC_PMECCIMR_ERRIM_Pos)      /**< (SMC_HSMC_PMECCIMR) Error Interrupt Mask Mask */
#define SMC_HSMC_PMECCIMR_ERRIM             SMC_HSMC_PMECCIMR_ERRIM_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_PMECCIMR_ERRIM_Msk instead */
#define SMC_HSMC_PMECCIMR_MASK              _U_(0x01)                                      /**< \deprecated (SMC_HSMC_PMECCIMR) Register MASK  (Use SMC_HSMC_PMECCIMR_Msk instead)  */
#define SMC_HSMC_PMECCIMR_Msk               _U_(0x01)                                      /**< (SMC_HSMC_PMECCIMR) Register Mask  */


/* -------- SMC_HSMC_PMECCISR : (SMC Offset: 0x98) (R/ 32) PMECC Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ERRIS:8;                   /**< bit:   0..7  Error Interrupt Status Register          */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_PMECCISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_PMECCISR_OFFSET            (0x98)                                        /**<  (SMC_HSMC_PMECCISR) PMECC Interrupt Status Register  Offset */

#define SMC_HSMC_PMECCISR_ERRIS_Pos         0                                              /**< (SMC_HSMC_PMECCISR) Error Interrupt Status Register Position */
#define SMC_HSMC_PMECCISR_ERRIS_Msk         (_U_(0xFF) << SMC_HSMC_PMECCISR_ERRIS_Pos)     /**< (SMC_HSMC_PMECCISR) Error Interrupt Status Register Mask */
#define SMC_HSMC_PMECCISR_ERRIS(value)      (SMC_HSMC_PMECCISR_ERRIS_Msk & ((value) << SMC_HSMC_PMECCISR_ERRIS_Pos))
#define SMC_HSMC_PMECCISR_MASK              _U_(0xFF)                                      /**< \deprecated (SMC_HSMC_PMECCISR) Register MASK  (Use SMC_HSMC_PMECCISR_Msk instead)  */
#define SMC_HSMC_PMECCISR_Msk               _U_(0xFF)                                      /**< (SMC_HSMC_PMECCISR) Register Mask  */


/* -------- SMC_HSMC_ELCFG : (SMC Offset: 0x500) (R/W 32) PMECC Error Location Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SECTORSZ:1;                /**< bit:      0  Sector Size                              */
    uint32_t :15;                       /**< bit:  1..15  Reserved */
    uint32_t ERRNUM:5;                  /**< bit: 16..20  Number of Errors                         */
    uint32_t :11;                       /**< bit: 21..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_ELCFG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_ELCFG_OFFSET               (0x500)                                       /**<  (SMC_HSMC_ELCFG) PMECC Error Location Configuration Register  Offset */

#define SMC_HSMC_ELCFG_SECTORSZ_Pos         0                                              /**< (SMC_HSMC_ELCFG) Sector Size Position */
#define SMC_HSMC_ELCFG_SECTORSZ_Msk         (_U_(0x1) << SMC_HSMC_ELCFG_SECTORSZ_Pos)      /**< (SMC_HSMC_ELCFG) Sector Size Mask */
#define SMC_HSMC_ELCFG_SECTORSZ             SMC_HSMC_ELCFG_SECTORSZ_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_ELCFG_SECTORSZ_Msk instead */
#define   SMC_HSMC_ELCFG_SECTORSZ_SECTORSZ0_Val _U_(0x0)                                       /**< (SMC_HSMC_ELCFG) Use  512 Byte Sector in Location Computation  */
#define   SMC_HSMC_ELCFG_SECTORSZ_SECTORSZ1_Val _U_(0x1)                                       /**< (SMC_HSMC_ELCFG) Use 1024 Byte Sector in Location Computation  */
#define SMC_HSMC_ELCFG_SECTORSZ_SECTORSZ0   (SMC_HSMC_ELCFG_SECTORSZ_SECTORSZ0_Val << SMC_HSMC_ELCFG_SECTORSZ_Pos)  /**< (SMC_HSMC_ELCFG) Use  512 Byte Sector in Location Computation Position  */
#define SMC_HSMC_ELCFG_SECTORSZ_SECTORSZ1   (SMC_HSMC_ELCFG_SECTORSZ_SECTORSZ1_Val << SMC_HSMC_ELCFG_SECTORSZ_Pos)  /**< (SMC_HSMC_ELCFG) Use 1024 Byte Sector in Location Computation Position  */
#define SMC_HSMC_ELCFG_ERRNUM_Pos           16                                             /**< (SMC_HSMC_ELCFG) Number of Errors Position */
#define SMC_HSMC_ELCFG_ERRNUM_Msk           (_U_(0x1F) << SMC_HSMC_ELCFG_ERRNUM_Pos)       /**< (SMC_HSMC_ELCFG) Number of Errors Mask */
#define SMC_HSMC_ELCFG_ERRNUM(value)        (SMC_HSMC_ELCFG_ERRNUM_Msk & ((value) << SMC_HSMC_ELCFG_ERRNUM_Pos))
#define SMC_HSMC_ELCFG_MASK                 _U_(0x1F0001)                                  /**< \deprecated (SMC_HSMC_ELCFG) Register MASK  (Use SMC_HSMC_ELCFG_Msk instead)  */
#define SMC_HSMC_ELCFG_Msk                  _U_(0x1F0001)                                  /**< (SMC_HSMC_ELCFG) Register Mask  */


/* -------- SMC_HSMC_ELPRIM : (SMC Offset: 0x504) (R/ 32) PMECC Error Location Primitive Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PRIMITIV:16;               /**< bit:  0..15  Primitive Polynomial                     */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_ELPRIM_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_ELPRIM_OFFSET              (0x504)                                       /**<  (SMC_HSMC_ELPRIM) PMECC Error Location Primitive Register  Offset */

#define SMC_HSMC_ELPRIM_PRIMITIV_Pos        0                                              /**< (SMC_HSMC_ELPRIM) Primitive Polynomial Position */
#define SMC_HSMC_ELPRIM_PRIMITIV_Msk        (_U_(0xFFFF) << SMC_HSMC_ELPRIM_PRIMITIV_Pos)  /**< (SMC_HSMC_ELPRIM) Primitive Polynomial Mask */
#define SMC_HSMC_ELPRIM_PRIMITIV(value)     (SMC_HSMC_ELPRIM_PRIMITIV_Msk & ((value) << SMC_HSMC_ELPRIM_PRIMITIV_Pos))
#define SMC_HSMC_ELPRIM_MASK                _U_(0xFFFF)                                    /**< \deprecated (SMC_HSMC_ELPRIM) Register MASK  (Use SMC_HSMC_ELPRIM_Msk instead)  */
#define SMC_HSMC_ELPRIM_Msk                 _U_(0xFFFF)                                    /**< (SMC_HSMC_ELPRIM) Register Mask  */


/* -------- SMC_HSMC_ELEN : (SMC Offset: 0x508) (/W 32) PMECC Error Location Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ENINIT:14;                 /**< bit:  0..13  Error Location Enable                    */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_ELEN_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_ELEN_OFFSET                (0x508)                                       /**<  (SMC_HSMC_ELEN) PMECC Error Location Enable Register  Offset */

#define SMC_HSMC_ELEN_ENINIT_Pos            0                                              /**< (SMC_HSMC_ELEN) Error Location Enable Position */
#define SMC_HSMC_ELEN_ENINIT_Msk            (_U_(0x3FFF) << SMC_HSMC_ELEN_ENINIT_Pos)      /**< (SMC_HSMC_ELEN) Error Location Enable Mask */
#define SMC_HSMC_ELEN_ENINIT(value)         (SMC_HSMC_ELEN_ENINIT_Msk & ((value) << SMC_HSMC_ELEN_ENINIT_Pos))
#define SMC_HSMC_ELEN_MASK                  _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_ELEN) Register MASK  (Use SMC_HSMC_ELEN_Msk instead)  */
#define SMC_HSMC_ELEN_Msk                   _U_(0x3FFF)                                    /**< (SMC_HSMC_ELEN) Register Mask  */


/* -------- SMC_HSMC_ELDIS : (SMC Offset: 0x50c) (/W 32) PMECC Error Location Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DIS:1;                     /**< bit:      0  Disable Error Location Engine            */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_ELDIS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_ELDIS_OFFSET               (0x50C)                                       /**<  (SMC_HSMC_ELDIS) PMECC Error Location Disable Register  Offset */

#define SMC_HSMC_ELDIS_DIS_Pos              0                                              /**< (SMC_HSMC_ELDIS) Disable Error Location Engine Position */
#define SMC_HSMC_ELDIS_DIS_Msk              (_U_(0x1) << SMC_HSMC_ELDIS_DIS_Pos)           /**< (SMC_HSMC_ELDIS) Disable Error Location Engine Mask */
#define SMC_HSMC_ELDIS_DIS                  SMC_HSMC_ELDIS_DIS_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_ELDIS_DIS_Msk instead */
#define SMC_HSMC_ELDIS_MASK                 _U_(0x01)                                      /**< \deprecated (SMC_HSMC_ELDIS) Register MASK  (Use SMC_HSMC_ELDIS_Msk instead)  */
#define SMC_HSMC_ELDIS_Msk                  _U_(0x01)                                      /**< (SMC_HSMC_ELDIS) Register Mask  */


/* -------- SMC_HSMC_ELSR : (SMC Offset: 0x510) (R/ 32) PMECC Error Location Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BUSY:1;                    /**< bit:      0  Error Location Engine Busy               */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_ELSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_ELSR_OFFSET                (0x510)                                       /**<  (SMC_HSMC_ELSR) PMECC Error Location Status Register  Offset */

#define SMC_HSMC_ELSR_BUSY_Pos              0                                              /**< (SMC_HSMC_ELSR) Error Location Engine Busy Position */
#define SMC_HSMC_ELSR_BUSY_Msk              (_U_(0x1) << SMC_HSMC_ELSR_BUSY_Pos)           /**< (SMC_HSMC_ELSR) Error Location Engine Busy Mask */
#define SMC_HSMC_ELSR_BUSY                  SMC_HSMC_ELSR_BUSY_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_ELSR_BUSY_Msk instead */
#define SMC_HSMC_ELSR_MASK                  _U_(0x01)                                      /**< \deprecated (SMC_HSMC_ELSR) Register MASK  (Use SMC_HSMC_ELSR_Msk instead)  */
#define SMC_HSMC_ELSR_Msk                   _U_(0x01)                                      /**< (SMC_HSMC_ELSR) Register Mask  */


/* -------- SMC_HSMC_ELIER : (SMC Offset: 0x514) (/W 32) PMECC Error Location Interrupt Enable register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DONE:1;                    /**< bit:      0  Computation Terminated Interrupt Enable  */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_ELIER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_ELIER_OFFSET               (0x514)                                       /**<  (SMC_HSMC_ELIER) PMECC Error Location Interrupt Enable register  Offset */

#define SMC_HSMC_ELIER_DONE_Pos             0                                              /**< (SMC_HSMC_ELIER) Computation Terminated Interrupt Enable Position */
#define SMC_HSMC_ELIER_DONE_Msk             (_U_(0x1) << SMC_HSMC_ELIER_DONE_Pos)          /**< (SMC_HSMC_ELIER) Computation Terminated Interrupt Enable Mask */
#define SMC_HSMC_ELIER_DONE                 SMC_HSMC_ELIER_DONE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_ELIER_DONE_Msk instead */
#define SMC_HSMC_ELIER_MASK                 _U_(0x01)                                      /**< \deprecated (SMC_HSMC_ELIER) Register MASK  (Use SMC_HSMC_ELIER_Msk instead)  */
#define SMC_HSMC_ELIER_Msk                  _U_(0x01)                                      /**< (SMC_HSMC_ELIER) Register Mask  */


/* -------- SMC_HSMC_ELIDR : (SMC Offset: 0x518) (/W 32) PMECC Error Location Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DONE:1;                    /**< bit:      0  Computation Terminated Interrupt Disable */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_ELIDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_ELIDR_OFFSET               (0x518)                                       /**<  (SMC_HSMC_ELIDR) PMECC Error Location Interrupt Disable Register  Offset */

#define SMC_HSMC_ELIDR_DONE_Pos             0                                              /**< (SMC_HSMC_ELIDR) Computation Terminated Interrupt Disable Position */
#define SMC_HSMC_ELIDR_DONE_Msk             (_U_(0x1) << SMC_HSMC_ELIDR_DONE_Pos)          /**< (SMC_HSMC_ELIDR) Computation Terminated Interrupt Disable Mask */
#define SMC_HSMC_ELIDR_DONE                 SMC_HSMC_ELIDR_DONE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_ELIDR_DONE_Msk instead */
#define SMC_HSMC_ELIDR_MASK                 _U_(0x01)                                      /**< \deprecated (SMC_HSMC_ELIDR) Register MASK  (Use SMC_HSMC_ELIDR_Msk instead)  */
#define SMC_HSMC_ELIDR_Msk                  _U_(0x01)                                      /**< (SMC_HSMC_ELIDR) Register Mask  */


/* -------- SMC_HSMC_ELIMR : (SMC Offset: 0x51c) (R/ 32) PMECC Error Location Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DONE:1;                    /**< bit:      0  Computation Terminated Interrupt Mask    */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_ELIMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_ELIMR_OFFSET               (0x51C)                                       /**<  (SMC_HSMC_ELIMR) PMECC Error Location Interrupt Mask Register  Offset */

#define SMC_HSMC_ELIMR_DONE_Pos             0                                              /**< (SMC_HSMC_ELIMR) Computation Terminated Interrupt Mask Position */
#define SMC_HSMC_ELIMR_DONE_Msk             (_U_(0x1) << SMC_HSMC_ELIMR_DONE_Pos)          /**< (SMC_HSMC_ELIMR) Computation Terminated Interrupt Mask Mask */
#define SMC_HSMC_ELIMR_DONE                 SMC_HSMC_ELIMR_DONE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_ELIMR_DONE_Msk instead */
#define SMC_HSMC_ELIMR_MASK                 _U_(0x01)                                      /**< \deprecated (SMC_HSMC_ELIMR) Register MASK  (Use SMC_HSMC_ELIMR_Msk instead)  */
#define SMC_HSMC_ELIMR_Msk                  _U_(0x01)                                      /**< (SMC_HSMC_ELIMR) Register Mask  */


/* -------- SMC_HSMC_ELISR : (SMC Offset: 0x520) (R/ 32) PMECC Error Location Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DONE:1;                    /**< bit:      0  Computation Terminated Interrupt Status  */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t ERR_CNT:6;                 /**< bit:  8..13  Error Counter value                      */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_ELISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_ELISR_OFFSET               (0x520)                                       /**<  (SMC_HSMC_ELISR) PMECC Error Location Interrupt Status Register  Offset */

#define SMC_HSMC_ELISR_DONE_Pos             0                                              /**< (SMC_HSMC_ELISR) Computation Terminated Interrupt Status Position */
#define SMC_HSMC_ELISR_DONE_Msk             (_U_(0x1) << SMC_HSMC_ELISR_DONE_Pos)          /**< (SMC_HSMC_ELISR) Computation Terminated Interrupt Status Mask */
#define SMC_HSMC_ELISR_DONE                 SMC_HSMC_ELISR_DONE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_ELISR_DONE_Msk instead */
#define SMC_HSMC_ELISR_ERR_CNT_Pos          8                                              /**< (SMC_HSMC_ELISR) Error Counter value Position */
#define SMC_HSMC_ELISR_ERR_CNT_Msk          (_U_(0x3F) << SMC_HSMC_ELISR_ERR_CNT_Pos)      /**< (SMC_HSMC_ELISR) Error Counter value Mask */
#define SMC_HSMC_ELISR_ERR_CNT(value)       (SMC_HSMC_ELISR_ERR_CNT_Msk & ((value) << SMC_HSMC_ELISR_ERR_CNT_Pos))
#define SMC_HSMC_ELISR_MASK                 _U_(0x3F01)                                    /**< \deprecated (SMC_HSMC_ELISR) Register MASK  (Use SMC_HSMC_ELISR_Msk instead)  */
#define SMC_HSMC_ELISR_Msk                  _U_(0x3F01)                                    /**< (SMC_HSMC_ELISR) Register Mask  */


/* -------- SMC_HSMC_SIGMA0 : (SMC Offset: 0x528) (R/ 32) PMECC Error Location SIGMA 0 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA0:14;                 /**< bit:  0..13  Coefficient of degree 0 in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA0_OFFSET              (0x528)                                       /**<  (SMC_HSMC_SIGMA0) PMECC Error Location SIGMA 0 Register  Offset */

#define SMC_HSMC_SIGMA0_SIGMA0_Pos          0                                              /**< (SMC_HSMC_SIGMA0) Coefficient of degree 0 in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA0_SIGMA0_Msk          (_U_(0x3FFF) << SMC_HSMC_SIGMA0_SIGMA0_Pos)    /**< (SMC_HSMC_SIGMA0) Coefficient of degree 0 in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA0_SIGMA0(value)       (SMC_HSMC_SIGMA0_SIGMA0_Msk & ((value) << SMC_HSMC_SIGMA0_SIGMA0_Pos))
#define SMC_HSMC_SIGMA0_MASK                _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA0) Register MASK  (Use SMC_HSMC_SIGMA0_Msk instead)  */
#define SMC_HSMC_SIGMA0_Msk                 _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA0) Register Mask  */


/* -------- SMC_HSMC_SIGMA1 : (SMC Offset: 0x52c) (R/W 32) PMECC Error Location SIGMA 1 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA1:14;                 /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA1_OFFSET              (0x52C)                                       /**<  (SMC_HSMC_SIGMA1) PMECC Error Location SIGMA 1 Register  Offset */

#define SMC_HSMC_SIGMA1_SIGMA1_Pos          0                                              /**< (SMC_HSMC_SIGMA1) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA1_SIGMA1_Msk          (_U_(0x3FFF) << SMC_HSMC_SIGMA1_SIGMA1_Pos)    /**< (SMC_HSMC_SIGMA1) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA1_SIGMA1(value)       (SMC_HSMC_SIGMA1_SIGMA1_Msk & ((value) << SMC_HSMC_SIGMA1_SIGMA1_Pos))
#define SMC_HSMC_SIGMA1_MASK                _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA1) Register MASK  (Use SMC_HSMC_SIGMA1_Msk instead)  */
#define SMC_HSMC_SIGMA1_Msk                 _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA1) Register Mask  */


/* -------- SMC_HSMC_SIGMA2 : (SMC Offset: 0x530) (R/W 32) PMECC Error Location SIGMA 2 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA2:14;                 /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA2_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA2_OFFSET              (0x530)                                       /**<  (SMC_HSMC_SIGMA2) PMECC Error Location SIGMA 2 Register  Offset */

#define SMC_HSMC_SIGMA2_SIGMA2_Pos          0                                              /**< (SMC_HSMC_SIGMA2) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA2_SIGMA2_Msk          (_U_(0x3FFF) << SMC_HSMC_SIGMA2_SIGMA2_Pos)    /**< (SMC_HSMC_SIGMA2) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA2_SIGMA2(value)       (SMC_HSMC_SIGMA2_SIGMA2_Msk & ((value) << SMC_HSMC_SIGMA2_SIGMA2_Pos))
#define SMC_HSMC_SIGMA2_MASK                _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA2) Register MASK  (Use SMC_HSMC_SIGMA2_Msk instead)  */
#define SMC_HSMC_SIGMA2_Msk                 _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA2) Register Mask  */


/* -------- SMC_HSMC_SIGMA3 : (SMC Offset: 0x534) (R/W 32) PMECC Error Location SIGMA 3 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA3:14;                 /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA3_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA3_OFFSET              (0x534)                                       /**<  (SMC_HSMC_SIGMA3) PMECC Error Location SIGMA 3 Register  Offset */

#define SMC_HSMC_SIGMA3_SIGMA3_Pos          0                                              /**< (SMC_HSMC_SIGMA3) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA3_SIGMA3_Msk          (_U_(0x3FFF) << SMC_HSMC_SIGMA3_SIGMA3_Pos)    /**< (SMC_HSMC_SIGMA3) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA3_SIGMA3(value)       (SMC_HSMC_SIGMA3_SIGMA3_Msk & ((value) << SMC_HSMC_SIGMA3_SIGMA3_Pos))
#define SMC_HSMC_SIGMA3_MASK                _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA3) Register MASK  (Use SMC_HSMC_SIGMA3_Msk instead)  */
#define SMC_HSMC_SIGMA3_Msk                 _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA3) Register Mask  */


/* -------- SMC_HSMC_SIGMA4 : (SMC Offset: 0x538) (R/W 32) PMECC Error Location SIGMA 4 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA4:14;                 /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA4_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA4_OFFSET              (0x538)                                       /**<  (SMC_HSMC_SIGMA4) PMECC Error Location SIGMA 4 Register  Offset */

#define SMC_HSMC_SIGMA4_SIGMA4_Pos          0                                              /**< (SMC_HSMC_SIGMA4) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA4_SIGMA4_Msk          (_U_(0x3FFF) << SMC_HSMC_SIGMA4_SIGMA4_Pos)    /**< (SMC_HSMC_SIGMA4) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA4_SIGMA4(value)       (SMC_HSMC_SIGMA4_SIGMA4_Msk & ((value) << SMC_HSMC_SIGMA4_SIGMA4_Pos))
#define SMC_HSMC_SIGMA4_MASK                _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA4) Register MASK  (Use SMC_HSMC_SIGMA4_Msk instead)  */
#define SMC_HSMC_SIGMA4_Msk                 _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA4) Register Mask  */


/* -------- SMC_HSMC_SIGMA5 : (SMC Offset: 0x53c) (R/W 32) PMECC Error Location SIGMA 5 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA5:14;                 /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA5_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA5_OFFSET              (0x53C)                                       /**<  (SMC_HSMC_SIGMA5) PMECC Error Location SIGMA 5 Register  Offset */

#define SMC_HSMC_SIGMA5_SIGMA5_Pos          0                                              /**< (SMC_HSMC_SIGMA5) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA5_SIGMA5_Msk          (_U_(0x3FFF) << SMC_HSMC_SIGMA5_SIGMA5_Pos)    /**< (SMC_HSMC_SIGMA5) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA5_SIGMA5(value)       (SMC_HSMC_SIGMA5_SIGMA5_Msk & ((value) << SMC_HSMC_SIGMA5_SIGMA5_Pos))
#define SMC_HSMC_SIGMA5_MASK                _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA5) Register MASK  (Use SMC_HSMC_SIGMA5_Msk instead)  */
#define SMC_HSMC_SIGMA5_Msk                 _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA5) Register Mask  */


/* -------- SMC_HSMC_SIGMA6 : (SMC Offset: 0x540) (R/W 32) PMECC Error Location SIGMA 6 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA6:14;                 /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA6_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA6_OFFSET              (0x540)                                       /**<  (SMC_HSMC_SIGMA6) PMECC Error Location SIGMA 6 Register  Offset */

#define SMC_HSMC_SIGMA6_SIGMA6_Pos          0                                              /**< (SMC_HSMC_SIGMA6) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA6_SIGMA6_Msk          (_U_(0x3FFF) << SMC_HSMC_SIGMA6_SIGMA6_Pos)    /**< (SMC_HSMC_SIGMA6) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA6_SIGMA6(value)       (SMC_HSMC_SIGMA6_SIGMA6_Msk & ((value) << SMC_HSMC_SIGMA6_SIGMA6_Pos))
#define SMC_HSMC_SIGMA6_MASK                _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA6) Register MASK  (Use SMC_HSMC_SIGMA6_Msk instead)  */
#define SMC_HSMC_SIGMA6_Msk                 _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA6) Register Mask  */


/* -------- SMC_HSMC_SIGMA7 : (SMC Offset: 0x544) (R/W 32) PMECC Error Location SIGMA 7 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA7:14;                 /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA7_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA7_OFFSET              (0x544)                                       /**<  (SMC_HSMC_SIGMA7) PMECC Error Location SIGMA 7 Register  Offset */

#define SMC_HSMC_SIGMA7_SIGMA7_Pos          0                                              /**< (SMC_HSMC_SIGMA7) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA7_SIGMA7_Msk          (_U_(0x3FFF) << SMC_HSMC_SIGMA7_SIGMA7_Pos)    /**< (SMC_HSMC_SIGMA7) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA7_SIGMA7(value)       (SMC_HSMC_SIGMA7_SIGMA7_Msk & ((value) << SMC_HSMC_SIGMA7_SIGMA7_Pos))
#define SMC_HSMC_SIGMA7_MASK                _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA7) Register MASK  (Use SMC_HSMC_SIGMA7_Msk instead)  */
#define SMC_HSMC_SIGMA7_Msk                 _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA7) Register Mask  */


/* -------- SMC_HSMC_SIGMA8 : (SMC Offset: 0x548) (R/W 32) PMECC Error Location SIGMA 8 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA8:14;                 /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA8_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA8_OFFSET              (0x548)                                       /**<  (SMC_HSMC_SIGMA8) PMECC Error Location SIGMA 8 Register  Offset */

#define SMC_HSMC_SIGMA8_SIGMA8_Pos          0                                              /**< (SMC_HSMC_SIGMA8) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA8_SIGMA8_Msk          (_U_(0x3FFF) << SMC_HSMC_SIGMA8_SIGMA8_Pos)    /**< (SMC_HSMC_SIGMA8) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA8_SIGMA8(value)       (SMC_HSMC_SIGMA8_SIGMA8_Msk & ((value) << SMC_HSMC_SIGMA8_SIGMA8_Pos))
#define SMC_HSMC_SIGMA8_MASK                _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA8) Register MASK  (Use SMC_HSMC_SIGMA8_Msk instead)  */
#define SMC_HSMC_SIGMA8_Msk                 _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA8) Register Mask  */


/* -------- SMC_HSMC_SIGMA9 : (SMC Offset: 0x54c) (R/W 32) PMECC Error Location SIGMA 9 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA9:14;                 /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA9_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA9_OFFSET              (0x54C)                                       /**<  (SMC_HSMC_SIGMA9) PMECC Error Location SIGMA 9 Register  Offset */

#define SMC_HSMC_SIGMA9_SIGMA9_Pos          0                                              /**< (SMC_HSMC_SIGMA9) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA9_SIGMA9_Msk          (_U_(0x3FFF) << SMC_HSMC_SIGMA9_SIGMA9_Pos)    /**< (SMC_HSMC_SIGMA9) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA9_SIGMA9(value)       (SMC_HSMC_SIGMA9_SIGMA9_Msk & ((value) << SMC_HSMC_SIGMA9_SIGMA9_Pos))
#define SMC_HSMC_SIGMA9_MASK                _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA9) Register MASK  (Use SMC_HSMC_SIGMA9_Msk instead)  */
#define SMC_HSMC_SIGMA9_Msk                 _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA9) Register Mask  */


/* -------- SMC_HSMC_SIGMA10 : (SMC Offset: 0x550) (R/W 32) PMECC Error Location SIGMA 10 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA10:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA10_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA10_OFFSET             (0x550)                                       /**<  (SMC_HSMC_SIGMA10) PMECC Error Location SIGMA 10 Register  Offset */

#define SMC_HSMC_SIGMA10_SIGMA10_Pos        0                                              /**< (SMC_HSMC_SIGMA10) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA10_SIGMA10_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA10_SIGMA10_Pos)  /**< (SMC_HSMC_SIGMA10) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA10_SIGMA10(value)     (SMC_HSMC_SIGMA10_SIGMA10_Msk & ((value) << SMC_HSMC_SIGMA10_SIGMA10_Pos))
#define SMC_HSMC_SIGMA10_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA10) Register MASK  (Use SMC_HSMC_SIGMA10_Msk instead)  */
#define SMC_HSMC_SIGMA10_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA10) Register Mask  */


/* -------- SMC_HSMC_SIGMA11 : (SMC Offset: 0x554) (R/W 32) PMECC Error Location SIGMA 11 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA11:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA11_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA11_OFFSET             (0x554)                                       /**<  (SMC_HSMC_SIGMA11) PMECC Error Location SIGMA 11 Register  Offset */

#define SMC_HSMC_SIGMA11_SIGMA11_Pos        0                                              /**< (SMC_HSMC_SIGMA11) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA11_SIGMA11_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA11_SIGMA11_Pos)  /**< (SMC_HSMC_SIGMA11) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA11_SIGMA11(value)     (SMC_HSMC_SIGMA11_SIGMA11_Msk & ((value) << SMC_HSMC_SIGMA11_SIGMA11_Pos))
#define SMC_HSMC_SIGMA11_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA11) Register MASK  (Use SMC_HSMC_SIGMA11_Msk instead)  */
#define SMC_HSMC_SIGMA11_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA11) Register Mask  */


/* -------- SMC_HSMC_SIGMA12 : (SMC Offset: 0x558) (R/W 32) PMECC Error Location SIGMA 12 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA12:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA12_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA12_OFFSET             (0x558)                                       /**<  (SMC_HSMC_SIGMA12) PMECC Error Location SIGMA 12 Register  Offset */

#define SMC_HSMC_SIGMA12_SIGMA12_Pos        0                                              /**< (SMC_HSMC_SIGMA12) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA12_SIGMA12_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA12_SIGMA12_Pos)  /**< (SMC_HSMC_SIGMA12) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA12_SIGMA12(value)     (SMC_HSMC_SIGMA12_SIGMA12_Msk & ((value) << SMC_HSMC_SIGMA12_SIGMA12_Pos))
#define SMC_HSMC_SIGMA12_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA12) Register MASK  (Use SMC_HSMC_SIGMA12_Msk instead)  */
#define SMC_HSMC_SIGMA12_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA12) Register Mask  */


/* -------- SMC_HSMC_SIGMA13 : (SMC Offset: 0x55c) (R/W 32) PMECC Error Location SIGMA 13 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA13:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA13_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA13_OFFSET             (0x55C)                                       /**<  (SMC_HSMC_SIGMA13) PMECC Error Location SIGMA 13 Register  Offset */

#define SMC_HSMC_SIGMA13_SIGMA13_Pos        0                                              /**< (SMC_HSMC_SIGMA13) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA13_SIGMA13_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA13_SIGMA13_Pos)  /**< (SMC_HSMC_SIGMA13) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA13_SIGMA13(value)     (SMC_HSMC_SIGMA13_SIGMA13_Msk & ((value) << SMC_HSMC_SIGMA13_SIGMA13_Pos))
#define SMC_HSMC_SIGMA13_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA13) Register MASK  (Use SMC_HSMC_SIGMA13_Msk instead)  */
#define SMC_HSMC_SIGMA13_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA13) Register Mask  */


/* -------- SMC_HSMC_SIGMA14 : (SMC Offset: 0x560) (R/W 32) PMECC Error Location SIGMA 14 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA14:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA14_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA14_OFFSET             (0x560)                                       /**<  (SMC_HSMC_SIGMA14) PMECC Error Location SIGMA 14 Register  Offset */

#define SMC_HSMC_SIGMA14_SIGMA14_Pos        0                                              /**< (SMC_HSMC_SIGMA14) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA14_SIGMA14_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA14_SIGMA14_Pos)  /**< (SMC_HSMC_SIGMA14) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA14_SIGMA14(value)     (SMC_HSMC_SIGMA14_SIGMA14_Msk & ((value) << SMC_HSMC_SIGMA14_SIGMA14_Pos))
#define SMC_HSMC_SIGMA14_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA14) Register MASK  (Use SMC_HSMC_SIGMA14_Msk instead)  */
#define SMC_HSMC_SIGMA14_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA14) Register Mask  */


/* -------- SMC_HSMC_SIGMA15 : (SMC Offset: 0x564) (R/W 32) PMECC Error Location SIGMA 15 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA15:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA15_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA15_OFFSET             (0x564)                                       /**<  (SMC_HSMC_SIGMA15) PMECC Error Location SIGMA 15 Register  Offset */

#define SMC_HSMC_SIGMA15_SIGMA15_Pos        0                                              /**< (SMC_HSMC_SIGMA15) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA15_SIGMA15_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA15_SIGMA15_Pos)  /**< (SMC_HSMC_SIGMA15) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA15_SIGMA15(value)     (SMC_HSMC_SIGMA15_SIGMA15_Msk & ((value) << SMC_HSMC_SIGMA15_SIGMA15_Pos))
#define SMC_HSMC_SIGMA15_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA15) Register MASK  (Use SMC_HSMC_SIGMA15_Msk instead)  */
#define SMC_HSMC_SIGMA15_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA15) Register Mask  */


/* -------- SMC_HSMC_SIGMA16 : (SMC Offset: 0x568) (R/W 32) PMECC Error Location SIGMA 16 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA16:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA16_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA16_OFFSET             (0x568)                                       /**<  (SMC_HSMC_SIGMA16) PMECC Error Location SIGMA 16 Register  Offset */

#define SMC_HSMC_SIGMA16_SIGMA16_Pos        0                                              /**< (SMC_HSMC_SIGMA16) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA16_SIGMA16_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA16_SIGMA16_Pos)  /**< (SMC_HSMC_SIGMA16) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA16_SIGMA16(value)     (SMC_HSMC_SIGMA16_SIGMA16_Msk & ((value) << SMC_HSMC_SIGMA16_SIGMA16_Pos))
#define SMC_HSMC_SIGMA16_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA16) Register MASK  (Use SMC_HSMC_SIGMA16_Msk instead)  */
#define SMC_HSMC_SIGMA16_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA16) Register Mask  */


/* -------- SMC_HSMC_SIGMA17 : (SMC Offset: 0x56c) (R/W 32) PMECC Error Location SIGMA 17 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA17:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA17_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA17_OFFSET             (0x56C)                                       /**<  (SMC_HSMC_SIGMA17) PMECC Error Location SIGMA 17 Register  Offset */

#define SMC_HSMC_SIGMA17_SIGMA17_Pos        0                                              /**< (SMC_HSMC_SIGMA17) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA17_SIGMA17_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA17_SIGMA17_Pos)  /**< (SMC_HSMC_SIGMA17) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA17_SIGMA17(value)     (SMC_HSMC_SIGMA17_SIGMA17_Msk & ((value) << SMC_HSMC_SIGMA17_SIGMA17_Pos))
#define SMC_HSMC_SIGMA17_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA17) Register MASK  (Use SMC_HSMC_SIGMA17_Msk instead)  */
#define SMC_HSMC_SIGMA17_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA17) Register Mask  */


/* -------- SMC_HSMC_SIGMA18 : (SMC Offset: 0x570) (R/W 32) PMECC Error Location SIGMA 18 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA18:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA18_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA18_OFFSET             (0x570)                                       /**<  (SMC_HSMC_SIGMA18) PMECC Error Location SIGMA 18 Register  Offset */

#define SMC_HSMC_SIGMA18_SIGMA18_Pos        0                                              /**< (SMC_HSMC_SIGMA18) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA18_SIGMA18_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA18_SIGMA18_Pos)  /**< (SMC_HSMC_SIGMA18) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA18_SIGMA18(value)     (SMC_HSMC_SIGMA18_SIGMA18_Msk & ((value) << SMC_HSMC_SIGMA18_SIGMA18_Pos))
#define SMC_HSMC_SIGMA18_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA18) Register MASK  (Use SMC_HSMC_SIGMA18_Msk instead)  */
#define SMC_HSMC_SIGMA18_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA18) Register Mask  */


/* -------- SMC_HSMC_SIGMA19 : (SMC Offset: 0x574) (R/W 32) PMECC Error Location SIGMA 19 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA19:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA19_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA19_OFFSET             (0x574)                                       /**<  (SMC_HSMC_SIGMA19) PMECC Error Location SIGMA 19 Register  Offset */

#define SMC_HSMC_SIGMA19_SIGMA19_Pos        0                                              /**< (SMC_HSMC_SIGMA19) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA19_SIGMA19_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA19_SIGMA19_Pos)  /**< (SMC_HSMC_SIGMA19) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA19_SIGMA19(value)     (SMC_HSMC_SIGMA19_SIGMA19_Msk & ((value) << SMC_HSMC_SIGMA19_SIGMA19_Pos))
#define SMC_HSMC_SIGMA19_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA19) Register MASK  (Use SMC_HSMC_SIGMA19_Msk instead)  */
#define SMC_HSMC_SIGMA19_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA19) Register Mask  */


/* -------- SMC_HSMC_SIGMA20 : (SMC Offset: 0x578) (R/W 32) PMECC Error Location SIGMA 20 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA20:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA20_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA20_OFFSET             (0x578)                                       /**<  (SMC_HSMC_SIGMA20) PMECC Error Location SIGMA 20 Register  Offset */

#define SMC_HSMC_SIGMA20_SIGMA20_Pos        0                                              /**< (SMC_HSMC_SIGMA20) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA20_SIGMA20_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA20_SIGMA20_Pos)  /**< (SMC_HSMC_SIGMA20) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA20_SIGMA20(value)     (SMC_HSMC_SIGMA20_SIGMA20_Msk & ((value) << SMC_HSMC_SIGMA20_SIGMA20_Pos))
#define SMC_HSMC_SIGMA20_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA20) Register MASK  (Use SMC_HSMC_SIGMA20_Msk instead)  */
#define SMC_HSMC_SIGMA20_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA20) Register Mask  */


/* -------- SMC_HSMC_SIGMA21 : (SMC Offset: 0x57c) (R/W 32) PMECC Error Location SIGMA 21 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA21:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA21_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA21_OFFSET             (0x57C)                                       /**<  (SMC_HSMC_SIGMA21) PMECC Error Location SIGMA 21 Register  Offset */

#define SMC_HSMC_SIGMA21_SIGMA21_Pos        0                                              /**< (SMC_HSMC_SIGMA21) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA21_SIGMA21_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA21_SIGMA21_Pos)  /**< (SMC_HSMC_SIGMA21) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA21_SIGMA21(value)     (SMC_HSMC_SIGMA21_SIGMA21_Msk & ((value) << SMC_HSMC_SIGMA21_SIGMA21_Pos))
#define SMC_HSMC_SIGMA21_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA21) Register MASK  (Use SMC_HSMC_SIGMA21_Msk instead)  */
#define SMC_HSMC_SIGMA21_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA21) Register Mask  */


/* -------- SMC_HSMC_SIGMA22 : (SMC Offset: 0x580) (R/W 32) PMECC Error Location SIGMA 22 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA22:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA22_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA22_OFFSET             (0x580)                                       /**<  (SMC_HSMC_SIGMA22) PMECC Error Location SIGMA 22 Register  Offset */

#define SMC_HSMC_SIGMA22_SIGMA22_Pos        0                                              /**< (SMC_HSMC_SIGMA22) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA22_SIGMA22_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA22_SIGMA22_Pos)  /**< (SMC_HSMC_SIGMA22) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA22_SIGMA22(value)     (SMC_HSMC_SIGMA22_SIGMA22_Msk & ((value) << SMC_HSMC_SIGMA22_SIGMA22_Pos))
#define SMC_HSMC_SIGMA22_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA22) Register MASK  (Use SMC_HSMC_SIGMA22_Msk instead)  */
#define SMC_HSMC_SIGMA22_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA22) Register Mask  */


/* -------- SMC_HSMC_SIGMA23 : (SMC Offset: 0x584) (R/W 32) PMECC Error Location SIGMA 23 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA23:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA23_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA23_OFFSET             (0x584)                                       /**<  (SMC_HSMC_SIGMA23) PMECC Error Location SIGMA 23 Register  Offset */

#define SMC_HSMC_SIGMA23_SIGMA23_Pos        0                                              /**< (SMC_HSMC_SIGMA23) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA23_SIGMA23_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA23_SIGMA23_Pos)  /**< (SMC_HSMC_SIGMA23) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA23_SIGMA23(value)     (SMC_HSMC_SIGMA23_SIGMA23_Msk & ((value) << SMC_HSMC_SIGMA23_SIGMA23_Pos))
#define SMC_HSMC_SIGMA23_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA23) Register MASK  (Use SMC_HSMC_SIGMA23_Msk instead)  */
#define SMC_HSMC_SIGMA23_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA23) Register Mask  */


/* -------- SMC_HSMC_SIGMA24 : (SMC Offset: 0x588) (R/W 32) PMECC Error Location SIGMA 24 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA24:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA24_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA24_OFFSET             (0x588)                                       /**<  (SMC_HSMC_SIGMA24) PMECC Error Location SIGMA 24 Register  Offset */

#define SMC_HSMC_SIGMA24_SIGMA24_Pos        0                                              /**< (SMC_HSMC_SIGMA24) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA24_SIGMA24_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA24_SIGMA24_Pos)  /**< (SMC_HSMC_SIGMA24) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA24_SIGMA24(value)     (SMC_HSMC_SIGMA24_SIGMA24_Msk & ((value) << SMC_HSMC_SIGMA24_SIGMA24_Pos))
#define SMC_HSMC_SIGMA24_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA24) Register MASK  (Use SMC_HSMC_SIGMA24_Msk instead)  */
#define SMC_HSMC_SIGMA24_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA24) Register Mask  */


/* -------- SMC_HSMC_SIGMA25 : (SMC Offset: 0x58c) (R/W 32) PMECC Error Location SIGMA 25 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA25:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA25_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA25_OFFSET             (0x58C)                                       /**<  (SMC_HSMC_SIGMA25) PMECC Error Location SIGMA 25 Register  Offset */

#define SMC_HSMC_SIGMA25_SIGMA25_Pos        0                                              /**< (SMC_HSMC_SIGMA25) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA25_SIGMA25_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA25_SIGMA25_Pos)  /**< (SMC_HSMC_SIGMA25) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA25_SIGMA25(value)     (SMC_HSMC_SIGMA25_SIGMA25_Msk & ((value) << SMC_HSMC_SIGMA25_SIGMA25_Pos))
#define SMC_HSMC_SIGMA25_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA25) Register MASK  (Use SMC_HSMC_SIGMA25_Msk instead)  */
#define SMC_HSMC_SIGMA25_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA25) Register Mask  */


/* -------- SMC_HSMC_SIGMA26 : (SMC Offset: 0x590) (R/W 32) PMECC Error Location SIGMA 26 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA26:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA26_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA26_OFFSET             (0x590)                                       /**<  (SMC_HSMC_SIGMA26) PMECC Error Location SIGMA 26 Register  Offset */

#define SMC_HSMC_SIGMA26_SIGMA26_Pos        0                                              /**< (SMC_HSMC_SIGMA26) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA26_SIGMA26_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA26_SIGMA26_Pos)  /**< (SMC_HSMC_SIGMA26) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA26_SIGMA26(value)     (SMC_HSMC_SIGMA26_SIGMA26_Msk & ((value) << SMC_HSMC_SIGMA26_SIGMA26_Pos))
#define SMC_HSMC_SIGMA26_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA26) Register MASK  (Use SMC_HSMC_SIGMA26_Msk instead)  */
#define SMC_HSMC_SIGMA26_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA26) Register Mask  */


/* -------- SMC_HSMC_SIGMA27 : (SMC Offset: 0x594) (R/W 32) PMECC Error Location SIGMA 27 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA27:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA27_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA27_OFFSET             (0x594)                                       /**<  (SMC_HSMC_SIGMA27) PMECC Error Location SIGMA 27 Register  Offset */

#define SMC_HSMC_SIGMA27_SIGMA27_Pos        0                                              /**< (SMC_HSMC_SIGMA27) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA27_SIGMA27_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA27_SIGMA27_Pos)  /**< (SMC_HSMC_SIGMA27) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA27_SIGMA27(value)     (SMC_HSMC_SIGMA27_SIGMA27_Msk & ((value) << SMC_HSMC_SIGMA27_SIGMA27_Pos))
#define SMC_HSMC_SIGMA27_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA27) Register MASK  (Use SMC_HSMC_SIGMA27_Msk instead)  */
#define SMC_HSMC_SIGMA27_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA27) Register Mask  */


/* -------- SMC_HSMC_SIGMA28 : (SMC Offset: 0x598) (R/W 32) PMECC Error Location SIGMA 28 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA28:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA28_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA28_OFFSET             (0x598)                                       /**<  (SMC_HSMC_SIGMA28) PMECC Error Location SIGMA 28 Register  Offset */

#define SMC_HSMC_SIGMA28_SIGMA28_Pos        0                                              /**< (SMC_HSMC_SIGMA28) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA28_SIGMA28_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA28_SIGMA28_Pos)  /**< (SMC_HSMC_SIGMA28) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA28_SIGMA28(value)     (SMC_HSMC_SIGMA28_SIGMA28_Msk & ((value) << SMC_HSMC_SIGMA28_SIGMA28_Pos))
#define SMC_HSMC_SIGMA28_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA28) Register MASK  (Use SMC_HSMC_SIGMA28_Msk instead)  */
#define SMC_HSMC_SIGMA28_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA28) Register Mask  */


/* -------- SMC_HSMC_SIGMA29 : (SMC Offset: 0x59c) (R/W 32) PMECC Error Location SIGMA 29 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA29:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA29_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA29_OFFSET             (0x59C)                                       /**<  (SMC_HSMC_SIGMA29) PMECC Error Location SIGMA 29 Register  Offset */

#define SMC_HSMC_SIGMA29_SIGMA29_Pos        0                                              /**< (SMC_HSMC_SIGMA29) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA29_SIGMA29_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA29_SIGMA29_Pos)  /**< (SMC_HSMC_SIGMA29) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA29_SIGMA29(value)     (SMC_HSMC_SIGMA29_SIGMA29_Msk & ((value) << SMC_HSMC_SIGMA29_SIGMA29_Pos))
#define SMC_HSMC_SIGMA29_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA29) Register MASK  (Use SMC_HSMC_SIGMA29_Msk instead)  */
#define SMC_HSMC_SIGMA29_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA29) Register Mask  */


/* -------- SMC_HSMC_SIGMA30 : (SMC Offset: 0x5a0) (R/W 32) PMECC Error Location SIGMA 30 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA30:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA30_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA30_OFFSET             (0x5A0)                                       /**<  (SMC_HSMC_SIGMA30) PMECC Error Location SIGMA 30 Register  Offset */

#define SMC_HSMC_SIGMA30_SIGMA30_Pos        0                                              /**< (SMC_HSMC_SIGMA30) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA30_SIGMA30_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA30_SIGMA30_Pos)  /**< (SMC_HSMC_SIGMA30) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA30_SIGMA30(value)     (SMC_HSMC_SIGMA30_SIGMA30_Msk & ((value) << SMC_HSMC_SIGMA30_SIGMA30_Pos))
#define SMC_HSMC_SIGMA30_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA30) Register MASK  (Use SMC_HSMC_SIGMA30_Msk instead)  */
#define SMC_HSMC_SIGMA30_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA30) Register Mask  */


/* -------- SMC_HSMC_SIGMA31 : (SMC Offset: 0x5a4) (R/W 32) PMECC Error Location SIGMA 31 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA31:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA31_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA31_OFFSET             (0x5A4)                                       /**<  (SMC_HSMC_SIGMA31) PMECC Error Location SIGMA 31 Register  Offset */

#define SMC_HSMC_SIGMA31_SIGMA31_Pos        0                                              /**< (SMC_HSMC_SIGMA31) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA31_SIGMA31_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA31_SIGMA31_Pos)  /**< (SMC_HSMC_SIGMA31) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA31_SIGMA31(value)     (SMC_HSMC_SIGMA31_SIGMA31_Msk & ((value) << SMC_HSMC_SIGMA31_SIGMA31_Pos))
#define SMC_HSMC_SIGMA31_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA31) Register MASK  (Use SMC_HSMC_SIGMA31_Msk instead)  */
#define SMC_HSMC_SIGMA31_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA31) Register Mask  */


/* -------- SMC_HSMC_SIGMA32 : (SMC Offset: 0x5a8) (R/W 32) PMECC Error Location SIGMA 32 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIGMA32:14;                /**< bit:  0..13  Coefficient of degree x in the SIGMA polynomial */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_SIGMA32_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_SIGMA32_OFFSET             (0x5A8)                                       /**<  (SMC_HSMC_SIGMA32) PMECC Error Location SIGMA 32 Register  Offset */

#define SMC_HSMC_SIGMA32_SIGMA32_Pos        0                                              /**< (SMC_HSMC_SIGMA32) Coefficient of degree x in the SIGMA polynomial Position */
#define SMC_HSMC_SIGMA32_SIGMA32_Msk        (_U_(0x3FFF) << SMC_HSMC_SIGMA32_SIGMA32_Pos)  /**< (SMC_HSMC_SIGMA32) Coefficient of degree x in the SIGMA polynomial Mask */
#define SMC_HSMC_SIGMA32_SIGMA32(value)     (SMC_HSMC_SIGMA32_SIGMA32_Msk & ((value) << SMC_HSMC_SIGMA32_SIGMA32_Pos))
#define SMC_HSMC_SIGMA32_MASK               _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_SIGMA32) Register MASK  (Use SMC_HSMC_SIGMA32_Msk instead)  */
#define SMC_HSMC_SIGMA32_Msk                _U_(0x3FFF)                                    /**< (SMC_HSMC_SIGMA32) Register Mask  */


/* -------- SMC_HSMC_ERRLOC : (SMC Offset: 0x5ac) (R/ 32) PMECC Error Location 0 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ERRLOCN:14;                /**< bit:  0..13  Error Position within the Set {sector area, spare area} */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_ERRLOC_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_ERRLOC_OFFSET              (0x5AC)                                       /**<  (SMC_HSMC_ERRLOC) PMECC Error Location 0 Register  Offset */

#define SMC_HSMC_ERRLOC_ERRLOCN_Pos         0                                              /**< (SMC_HSMC_ERRLOC) Error Position within the Set {sector area, spare area} Position */
#define SMC_HSMC_ERRLOC_ERRLOCN_Msk         (_U_(0x3FFF) << SMC_HSMC_ERRLOC_ERRLOCN_Pos)   /**< (SMC_HSMC_ERRLOC) Error Position within the Set {sector area, spare area} Mask */
#define SMC_HSMC_ERRLOC_ERRLOCN(value)      (SMC_HSMC_ERRLOC_ERRLOCN_Msk & ((value) << SMC_HSMC_ERRLOC_ERRLOCN_Pos))
#define SMC_HSMC_ERRLOC_MASK                _U_(0x3FFF)                                    /**< \deprecated (SMC_HSMC_ERRLOC) Register MASK  (Use SMC_HSMC_ERRLOC_Msk instead)  */
#define SMC_HSMC_ERRLOC_Msk                 _U_(0x3FFF)                                    /**< (SMC_HSMC_ERRLOC) Register Mask  */


/* -------- SMC_HSMC_OCMS : (SMC Offset: 0x7a0) (R/W 32) Off Chip Memory Scrambling Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SMSE:1;                    /**< bit:      0  Static Memory Controller Scrambling Enable */
    uint32_t SRSE:1;                    /**< bit:      1  NFC Internal SRAM Scrambling Enable      */
    uint32_t :30;                       /**< bit:  2..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_OCMS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_OCMS_OFFSET                (0x7A0)                                       /**<  (SMC_HSMC_OCMS) Off Chip Memory Scrambling Register  Offset */

#define SMC_HSMC_OCMS_SMSE_Pos              0                                              /**< (SMC_HSMC_OCMS) Static Memory Controller Scrambling Enable Position */
#define SMC_HSMC_OCMS_SMSE_Msk              (_U_(0x1) << SMC_HSMC_OCMS_SMSE_Pos)           /**< (SMC_HSMC_OCMS) Static Memory Controller Scrambling Enable Mask */
#define SMC_HSMC_OCMS_SMSE                  SMC_HSMC_OCMS_SMSE_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_OCMS_SMSE_Msk instead */
#define SMC_HSMC_OCMS_SRSE_Pos              1                                              /**< (SMC_HSMC_OCMS) NFC Internal SRAM Scrambling Enable Position */
#define SMC_HSMC_OCMS_SRSE_Msk              (_U_(0x1) << SMC_HSMC_OCMS_SRSE_Pos)           /**< (SMC_HSMC_OCMS) NFC Internal SRAM Scrambling Enable Mask */
#define SMC_HSMC_OCMS_SRSE                  SMC_HSMC_OCMS_SRSE_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_OCMS_SRSE_Msk instead */
#define SMC_HSMC_OCMS_MASK                  _U_(0x03)                                      /**< \deprecated (SMC_HSMC_OCMS) Register MASK  (Use SMC_HSMC_OCMS_Msk instead)  */
#define SMC_HSMC_OCMS_Msk                   _U_(0x03)                                      /**< (SMC_HSMC_OCMS) Register Mask  */


/* -------- SMC_HSMC_KEY1 : (SMC Offset: 0x7a4) (/W 32) Off Chip Memory Scrambling KEY1 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t KEY1:32;                   /**< bit:  0..31  Off Chip Memory Scrambling (OCMS) Key Part 1 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_KEY1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_KEY1_OFFSET                (0x7A4)                                       /**<  (SMC_HSMC_KEY1) Off Chip Memory Scrambling KEY1 Register  Offset */

#define SMC_HSMC_KEY1_KEY1_Pos              0                                              /**< (SMC_HSMC_KEY1) Off Chip Memory Scrambling (OCMS) Key Part 1 Position */
#define SMC_HSMC_KEY1_KEY1_Msk              (_U_(0xFFFFFFFF) << SMC_HSMC_KEY1_KEY1_Pos)    /**< (SMC_HSMC_KEY1) Off Chip Memory Scrambling (OCMS) Key Part 1 Mask */
#define SMC_HSMC_KEY1_KEY1(value)           (SMC_HSMC_KEY1_KEY1_Msk & ((value) << SMC_HSMC_KEY1_KEY1_Pos))
#define SMC_HSMC_KEY1_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (SMC_HSMC_KEY1) Register MASK  (Use SMC_HSMC_KEY1_Msk instead)  */
#define SMC_HSMC_KEY1_Msk                   _U_(0xFFFFFFFF)                                /**< (SMC_HSMC_KEY1) Register Mask  */


/* -------- SMC_HSMC_KEY2 : (SMC Offset: 0x7a8) (/W 32) Off Chip Memory Scrambling KEY2 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t KEY2:32;                   /**< bit:  0..31  Off Chip Memory Scrambling (OCMS) Key Part 2 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_KEY2_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_KEY2_OFFSET                (0x7A8)                                       /**<  (SMC_HSMC_KEY2) Off Chip Memory Scrambling KEY2 Register  Offset */

#define SMC_HSMC_KEY2_KEY2_Pos              0                                              /**< (SMC_HSMC_KEY2) Off Chip Memory Scrambling (OCMS) Key Part 2 Position */
#define SMC_HSMC_KEY2_KEY2_Msk              (_U_(0xFFFFFFFF) << SMC_HSMC_KEY2_KEY2_Pos)    /**< (SMC_HSMC_KEY2) Off Chip Memory Scrambling (OCMS) Key Part 2 Mask */
#define SMC_HSMC_KEY2_KEY2(value)           (SMC_HSMC_KEY2_KEY2_Msk & ((value) << SMC_HSMC_KEY2_KEY2_Pos))
#define SMC_HSMC_KEY2_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (SMC_HSMC_KEY2) Register MASK  (Use SMC_HSMC_KEY2_Msk instead)  */
#define SMC_HSMC_KEY2_Msk                   _U_(0xFFFFFFFF)                                /**< (SMC_HSMC_KEY2) Register Mask  */


/* -------- SMC_HSMC_WPMR : (SMC Offset: 0x7e4) (R/W 32) Write Protection Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPEN:1;                    /**< bit:      0  Write Protection Enable                  */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPKEY:24;                  /**< bit:  8..31  Write Protection Key                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SMC_HSMC_WPMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_WPMR_OFFSET                (0x7E4)                                       /**<  (SMC_HSMC_WPMR) Write Protection Mode Register  Offset */

#define SMC_HSMC_WPMR_WPEN_Pos              0                                              /**< (SMC_HSMC_WPMR) Write Protection Enable Position */
#define SMC_HSMC_WPMR_WPEN_Msk              (_U_(0x1) << SMC_HSMC_WPMR_WPEN_Pos)           /**< (SMC_HSMC_WPMR) Write Protection Enable Mask */
#define SMC_HSMC_WPMR_WPEN                  SMC_HSMC_WPMR_WPEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_WPMR_WPEN_Msk instead */
#define SMC_HSMC_WPMR_WPKEY_Pos             8                                              /**< (SMC_HSMC_WPMR) Write Protection Key Position */
#define SMC_HSMC_WPMR_WPKEY_Msk             (_U_(0xFFFFFF) << SMC_HSMC_WPMR_WPKEY_Pos)     /**< (SMC_HSMC_WPMR) Write Protection Key Mask */
#define SMC_HSMC_WPMR_WPKEY(value)          (SMC_HSMC_WPMR_WPKEY_Msk & ((value) << SMC_HSMC_WPMR_WPKEY_Pos))
#define   SMC_HSMC_WPMR_WPKEY_PASSWD_Val    _U_(0x534D43)                                  /**< (SMC_HSMC_WPMR) Writing any other value in this field aborts the write operation of bit WPEN.Always reads as 0.  */
#define SMC_HSMC_WPMR_WPKEY_PASSWD          (SMC_HSMC_WPMR_WPKEY_PASSWD_Val << SMC_HSMC_WPMR_WPKEY_Pos)  /**< (SMC_HSMC_WPMR) Writing any other value in this field aborts the write operation of bit WPEN.Always reads as 0. Position  */
#define SMC_HSMC_WPMR_MASK                  _U_(0xFFFFFF01)                                /**< \deprecated (SMC_HSMC_WPMR) Register MASK  (Use SMC_HSMC_WPMR_Msk instead)  */
#define SMC_HSMC_WPMR_Msk                   _U_(0xFFFFFF01)                                /**< (SMC_HSMC_WPMR) Register Mask  */


/* -------- SMC_HSMC_WPSR : (SMC Offset: 0x7e8) (R/ 32) Write Protection Status Register -------- */
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
} SMC_HSMC_WPSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMC_HSMC_WPSR_OFFSET                (0x7E8)                                       /**<  (SMC_HSMC_WPSR) Write Protection Status Register  Offset */

#define SMC_HSMC_WPSR_WPVS_Pos              0                                              /**< (SMC_HSMC_WPSR) Write Protection Violation Status Position */
#define SMC_HSMC_WPSR_WPVS_Msk              (_U_(0x1) << SMC_HSMC_WPSR_WPVS_Pos)           /**< (SMC_HSMC_WPSR) Write Protection Violation Status Mask */
#define SMC_HSMC_WPSR_WPVS                  SMC_HSMC_WPSR_WPVS_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SMC_HSMC_WPSR_WPVS_Msk instead */
#define SMC_HSMC_WPSR_WPVSRC_Pos            8                                              /**< (SMC_HSMC_WPSR) Write Protection Violation Source Position */
#define SMC_HSMC_WPSR_WPVSRC_Msk            (_U_(0xFFFF) << SMC_HSMC_WPSR_WPVSRC_Pos)      /**< (SMC_HSMC_WPSR) Write Protection Violation Source Mask */
#define SMC_HSMC_WPSR_WPVSRC(value)         (SMC_HSMC_WPSR_WPVSRC_Msk & ((value) << SMC_HSMC_WPSR_WPVSRC_Pos))
#define SMC_HSMC_WPSR_MASK                  _U_(0xFFFF01)                                  /**< \deprecated (SMC_HSMC_WPSR) Register MASK  (Use SMC_HSMC_WPSR_Msk instead)  */
#define SMC_HSMC_WPSR_Msk                   _U_(0xFFFF01)                                  /**< (SMC_HSMC_WPSR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief SMC_CS_NUMBER hardware registers */
typedef struct {  
  __IO uint32_t HSMC_SETUP;     /**< (SMC_CS_NUMBER Offset: 0x00) Setup Register */
  __IO uint32_t HSMC_PULSE;     /**< (SMC_CS_NUMBER Offset: 0x04) Pulse Register */
  __IO uint32_t HSMC_CYCLE;     /**< (SMC_CS_NUMBER Offset: 0x08) Cycle Register */
  __IO uint32_t HSMC_TIMINGS;   /**< (SMC_CS_NUMBER Offset: 0x0C) Timings Register */
  __IO uint32_t HSMC_MODE;      /**< (SMC_CS_NUMBER Offset: 0x10) Mode Register */
} SmcCsNumber;

/** \brief SMC_PMECC hardware registers */
typedef struct {  
  __I  uint32_t HSMC_PMECC[14]; /**< (SMC_PMECC Offset: 0x00) PMECC Redundancy 0 Register (sec_num = 0) */
  __I  uint8_t                        Reserved1[8];
} SmcPmecc;

/** \brief SMC_REM hardware registers */
typedef struct {  
  __I  uint32_t HSMC_REM0_;     /**< (SMC_REM Offset: 0x00) PMECC Remainder 0 Register (sec_num = 0) */
  __I  uint32_t HSMC_REM1_;     /**< (SMC_REM Offset: 0x04) PMECC Remainder 1 Register (sec_num = 0) */
  __I  uint32_t HSMC_REM2_;     /**< (SMC_REM Offset: 0x08) PMECC Remainder 2 Register (sec_num = 0) */
  __I  uint32_t HSMC_REM3_;     /**< (SMC_REM Offset: 0x0C) PMECC Remainder 3 Register (sec_num = 0) */
  __I  uint32_t HSMC_REM4_;     /**< (SMC_REM Offset: 0x10) PMECC Remainder 4 Register (sec_num = 0) */
  __I  uint32_t HSMC_REM5_;     /**< (SMC_REM Offset: 0x14) PMECC Remainder 5 Register (sec_num = 0) */
  __I  uint32_t HSMC_REM6_;     /**< (SMC_REM Offset: 0x18) PMECC Remainder 6 Register (sec_num = 0) */
  __I  uint32_t HSMC_REM7_;     /**< (SMC_REM Offset: 0x1C) PMECC Remainder 7 Register (sec_num = 0) */
  __I  uint32_t HSMC_REM8_;     /**< (SMC_REM Offset: 0x20) PMECC Remainder 8 Register (sec_num = 0) */
  __I  uint32_t HSMC_REM9_;     /**< (SMC_REM Offset: 0x24) PMECC Remainder 9 Register (sec_num = 0) */
  __I  uint32_t HSMC_REM10_;    /**< (SMC_REM Offset: 0x28) PMECC Remainder 10 Register (sec_num = 0) */
  __I  uint32_t HSMC_REM11_;    /**< (SMC_REM Offset: 0x2C) PMECC Remainder 11 Register (sec_num = 0) */
  __I  uint32_t HSMC_REM12_;    /**< (SMC_REM Offset: 0x30) PMECC Remainder 12 Register (sec_num = 0) */
  __I  uint32_t HSMC_REM13_;    /**< (SMC_REM Offset: 0x34) PMECC Remainder 13 Register (sec_num = 0) */
  __I  uint32_t HSMC_REM14_;    /**< (SMC_REM Offset: 0x38) PMECC Remainder 14 Register (sec_num = 0) */
  __I  uint32_t HSMC_REM15_;    /**< (SMC_REM Offset: 0x3C) PMECC Remainder 15 Register (sec_num = 0) */
} SmcRem;

#define SMCPMECC_NUMBER 8
#define SMCREM_NUMBER 8
#define SMCCSNUMBER_NUMBER 4
/** \brief SMC hardware registers */
typedef struct {  
  __IO uint32_t HSMC_CFG;       /**< (SMC Offset: 0x00) NFC Configuration Register */
  __O  uint32_t HSMC_CTRL;      /**< (SMC Offset: 0x04) NFC Control Register */
  __I  uint32_t HSMC_SR;        /**< (SMC Offset: 0x08) NFC Status Register */
  __O  uint32_t HSMC_IER;       /**< (SMC Offset: 0x0C) NFC Interrupt Enable Register */
  __O  uint32_t HSMC_IDR;       /**< (SMC Offset: 0x10) NFC Interrupt Disable Register */
  __I  uint32_t HSMC_IMR;       /**< (SMC Offset: 0x14) NFC Interrupt Mask Register */
  __IO uint32_t HSMC_ADDR;      /**< (SMC Offset: 0x18) NFC Address Cycle Zero Register */
  __IO uint32_t HSMC_BANK;      /**< (SMC Offset: 0x1C) Bank Address Register */
  __I  uint8_t                        Reserved1[80];
  __IO uint32_t HSMC_PMECCFG;   /**< (SMC Offset: 0x70) PMECC Configuration Register */
  __IO uint32_t HSMC_PMECCSAREA; /**< (SMC Offset: 0x74) PMECC Spare Area Size Register */
  __IO uint32_t HSMC_PMECCSADDR; /**< (SMC Offset: 0x78) PMECC Start Address Register */
  __IO uint32_t HSMC_PMECCEADDR; /**< (SMC Offset: 0x7C) PMECC End Address Register */
  __I  uint8_t                        Reserved2[4];
  __O  uint32_t HSMC_PMECCTRL;  /**< (SMC Offset: 0x84) PMECC Control Register */
  __I  uint32_t HSMC_PMECCSR;   /**< (SMC Offset: 0x88) PMECC Status Register */
  __O  uint32_t HSMC_PMECCIER;  /**< (SMC Offset: 0x8C) PMECC Interrupt Enable register */
  __O  uint32_t HSMC_PMECCIDR;  /**< (SMC Offset: 0x90) PMECC Interrupt Disable Register */
  __I  uint32_t HSMC_PMECCIMR;  /**< (SMC Offset: 0x94) PMECC Interrupt Mask Register */
  __I  uint32_t HSMC_PMECCISR;  /**< (SMC Offset: 0x98) PMECC Interrupt Status Register */
  __I  uint8_t                        Reserved3[20];
       SmcPmecc SmcPmecc[SMCPMECC_NUMBER]; /**< Offset: 0xB0  */
       SmcRem   SmcRem[SMCREM_NUMBER]; /**< Offset: 0x2B0  */
  __I  uint8_t                        Reserved4[80];
  __IO uint32_t HSMC_ELCFG;     /**< (SMC Offset: 0x500) PMECC Error Location Configuration Register */
  __I  uint32_t HSMC_ELPRIM;    /**< (SMC Offset: 0x504) PMECC Error Location Primitive Register */
  __O  uint32_t HSMC_ELEN;      /**< (SMC Offset: 0x508) PMECC Error Location Enable Register */
  __O  uint32_t HSMC_ELDIS;     /**< (SMC Offset: 0x50C) PMECC Error Location Disable Register */
  __I  uint32_t HSMC_ELSR;      /**< (SMC Offset: 0x510) PMECC Error Location Status Register */
  __O  uint32_t HSMC_ELIER;     /**< (SMC Offset: 0x514) PMECC Error Location Interrupt Enable register */
  __O  uint32_t HSMC_ELIDR;     /**< (SMC Offset: 0x518) PMECC Error Location Interrupt Disable Register */
  __I  uint32_t HSMC_ELIMR;     /**< (SMC Offset: 0x51C) PMECC Error Location Interrupt Mask Register */
  __I  uint32_t HSMC_ELISR;     /**< (SMC Offset: 0x520) PMECC Error Location Interrupt Status Register */
  __I  uint8_t                        Reserved5[4];
  __I  uint32_t HSMC_SIGMA0;    /**< (SMC Offset: 0x528) PMECC Error Location SIGMA 0 Register */
  __IO uint32_t HSMC_SIGMA1;    /**< (SMC Offset: 0x52C) PMECC Error Location SIGMA 1 Register */
  __IO uint32_t HSMC_SIGMA2;    /**< (SMC Offset: 0x530) PMECC Error Location SIGMA 2 Register */
  __IO uint32_t HSMC_SIGMA3;    /**< (SMC Offset: 0x534) PMECC Error Location SIGMA 3 Register */
  __IO uint32_t HSMC_SIGMA4;    /**< (SMC Offset: 0x538) PMECC Error Location SIGMA 4 Register */
  __IO uint32_t HSMC_SIGMA5;    /**< (SMC Offset: 0x53C) PMECC Error Location SIGMA 5 Register */
  __IO uint32_t HSMC_SIGMA6;    /**< (SMC Offset: 0x540) PMECC Error Location SIGMA 6 Register */
  __IO uint32_t HSMC_SIGMA7;    /**< (SMC Offset: 0x544) PMECC Error Location SIGMA 7 Register */
  __IO uint32_t HSMC_SIGMA8;    /**< (SMC Offset: 0x548) PMECC Error Location SIGMA 8 Register */
  __IO uint32_t HSMC_SIGMA9;    /**< (SMC Offset: 0x54C) PMECC Error Location SIGMA 9 Register */
  __IO uint32_t HSMC_SIGMA10;   /**< (SMC Offset: 0x550) PMECC Error Location SIGMA 10 Register */
  __IO uint32_t HSMC_SIGMA11;   /**< (SMC Offset: 0x554) PMECC Error Location SIGMA 11 Register */
  __IO uint32_t HSMC_SIGMA12;   /**< (SMC Offset: 0x558) PMECC Error Location SIGMA 12 Register */
  __IO uint32_t HSMC_SIGMA13;   /**< (SMC Offset: 0x55C) PMECC Error Location SIGMA 13 Register */
  __IO uint32_t HSMC_SIGMA14;   /**< (SMC Offset: 0x560) PMECC Error Location SIGMA 14 Register */
  __IO uint32_t HSMC_SIGMA15;   /**< (SMC Offset: 0x564) PMECC Error Location SIGMA 15 Register */
  __IO uint32_t HSMC_SIGMA16;   /**< (SMC Offset: 0x568) PMECC Error Location SIGMA 16 Register */
  __IO uint32_t HSMC_SIGMA17;   /**< (SMC Offset: 0x56C) PMECC Error Location SIGMA 17 Register */
  __IO uint32_t HSMC_SIGMA18;   /**< (SMC Offset: 0x570) PMECC Error Location SIGMA 18 Register */
  __IO uint32_t HSMC_SIGMA19;   /**< (SMC Offset: 0x574) PMECC Error Location SIGMA 19 Register */
  __IO uint32_t HSMC_SIGMA20;   /**< (SMC Offset: 0x578) PMECC Error Location SIGMA 20 Register */
  __IO uint32_t HSMC_SIGMA21;   /**< (SMC Offset: 0x57C) PMECC Error Location SIGMA 21 Register */
  __IO uint32_t HSMC_SIGMA22;   /**< (SMC Offset: 0x580) PMECC Error Location SIGMA 22 Register */
  __IO uint32_t HSMC_SIGMA23;   /**< (SMC Offset: 0x584) PMECC Error Location SIGMA 23 Register */
  __IO uint32_t HSMC_SIGMA24;   /**< (SMC Offset: 0x588) PMECC Error Location SIGMA 24 Register */
  __IO uint32_t HSMC_SIGMA25;   /**< (SMC Offset: 0x58C) PMECC Error Location SIGMA 25 Register */
  __IO uint32_t HSMC_SIGMA26;   /**< (SMC Offset: 0x590) PMECC Error Location SIGMA 26 Register */
  __IO uint32_t HSMC_SIGMA27;   /**< (SMC Offset: 0x594) PMECC Error Location SIGMA 27 Register */
  __IO uint32_t HSMC_SIGMA28;   /**< (SMC Offset: 0x598) PMECC Error Location SIGMA 28 Register */
  __IO uint32_t HSMC_SIGMA29;   /**< (SMC Offset: 0x59C) PMECC Error Location SIGMA 29 Register */
  __IO uint32_t HSMC_SIGMA30;   /**< (SMC Offset: 0x5A0) PMECC Error Location SIGMA 30 Register */
  __IO uint32_t HSMC_SIGMA31;   /**< (SMC Offset: 0x5A4) PMECC Error Location SIGMA 31 Register */
  __IO uint32_t HSMC_SIGMA32;   /**< (SMC Offset: 0x5A8) PMECC Error Location SIGMA 32 Register */
  __I  uint32_t HSMC_ERRLOC[32]; /**< (SMC Offset: 0x5AC) PMECC Error Location 0 Register */
  __I  uint8_t                        Reserved6[212];
       SmcCsNumber SmcCsNumber[SMCCSNUMBER_NUMBER]; /**< Offset: 0x700  */
  __I  uint8_t                        Reserved7[80];
  __IO uint32_t HSMC_OCMS;      /**< (SMC Offset: 0x7A0) Off Chip Memory Scrambling Register */
  __O  uint32_t HSMC_KEY1;      /**< (SMC Offset: 0x7A4) Off Chip Memory Scrambling KEY1 Register */
  __O  uint32_t HSMC_KEY2;      /**< (SMC Offset: 0x7A8) Off Chip Memory Scrambling KEY2 Register */
  __I  uint8_t                        Reserved8[56];
  __IO uint32_t HSMC_WPMR;      /**< (SMC Offset: 0x7E4) Write Protection Mode Register */
  __I  uint32_t HSMC_WPSR;      /**< (SMC Offset: 0x7E8) Write Protection Status Register */
} Smc;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief SMC_CS_NUMBER hardware registers */
typedef struct {  
  __IO SMC_HSMC_SETUP_Type            HSMC_SETUP;     /**< Offset: 0x00 (R/W  32) Setup Register */
  __IO SMC_HSMC_PULSE_Type            HSMC_PULSE;     /**< Offset: 0x04 (R/W  32) Pulse Register */
  __IO SMC_HSMC_CYCLE_Type            HSMC_CYCLE;     /**< Offset: 0x08 (R/W  32) Cycle Register */
  __IO SMC_HSMC_TIMINGS_Type          HSMC_TIMINGS;   /**< Offset: 0x0C (R/W  32) Timings Register */
  __IO SMC_HSMC_MODE_Type             HSMC_MODE;      /**< Offset: 0x10 (R/W  32) Mode Register */
} SmcCsNumber;

/** \brief SMC_PMECC hardware registers */
typedef struct {  
  __I  SMC_HSMC_PMECC_Type            HSMC_PMECC[14]; /**< Offset: 0x00 (R/   32) PMECC Redundancy 0 Register (sec_num = 0) */
  __I  uint8_t                        Reserved1[8];
} SmcPmecc;

/** \brief SMC_REM hardware registers */
typedef struct {  
  __I  SMC_HSMC_REM0__Type            HSMC_REM0_;     /**< Offset: 0x00 (R/   32) PMECC Remainder 0 Register (sec_num = 0) */
  __I  SMC_HSMC_REM1__Type            HSMC_REM1_;     /**< Offset: 0x04 (R/   32) PMECC Remainder 1 Register (sec_num = 0) */
  __I  SMC_HSMC_REM2__Type            HSMC_REM2_;     /**< Offset: 0x08 (R/   32) PMECC Remainder 2 Register (sec_num = 0) */
  __I  SMC_HSMC_REM3__Type            HSMC_REM3_;     /**< Offset: 0x0C (R/   32) PMECC Remainder 3 Register (sec_num = 0) */
  __I  SMC_HSMC_REM4__Type            HSMC_REM4_;     /**< Offset: 0x10 (R/   32) PMECC Remainder 4 Register (sec_num = 0) */
  __I  SMC_HSMC_REM5__Type            HSMC_REM5_;     /**< Offset: 0x14 (R/   32) PMECC Remainder 5 Register (sec_num = 0) */
  __I  SMC_HSMC_REM6__Type            HSMC_REM6_;     /**< Offset: 0x18 (R/   32) PMECC Remainder 6 Register (sec_num = 0) */
  __I  SMC_HSMC_REM7__Type            HSMC_REM7_;     /**< Offset: 0x1C (R/   32) PMECC Remainder 7 Register (sec_num = 0) */
  __I  SMC_HSMC_REM8__Type            HSMC_REM8_;     /**< Offset: 0x20 (R/   32) PMECC Remainder 8 Register (sec_num = 0) */
  __I  SMC_HSMC_REM9__Type            HSMC_REM9_;     /**< Offset: 0x24 (R/   32) PMECC Remainder 9 Register (sec_num = 0) */
  __I  SMC_HSMC_REM10__Type           HSMC_REM10_;    /**< Offset: 0x28 (R/   32) PMECC Remainder 10 Register (sec_num = 0) */
  __I  SMC_HSMC_REM11__Type           HSMC_REM11_;    /**< Offset: 0x2C (R/   32) PMECC Remainder 11 Register (sec_num = 0) */
  __I  SMC_HSMC_REM12__Type           HSMC_REM12_;    /**< Offset: 0x30 (R/   32) PMECC Remainder 12 Register (sec_num = 0) */
  __I  SMC_HSMC_REM13__Type           HSMC_REM13_;    /**< Offset: 0x34 (R/   32) PMECC Remainder 13 Register (sec_num = 0) */
  __I  SMC_HSMC_REM14__Type           HSMC_REM14_;    /**< Offset: 0x38 (R/   32) PMECC Remainder 14 Register (sec_num = 0) */
  __I  SMC_HSMC_REM15__Type           HSMC_REM15_;    /**< Offset: 0x3C (R/   32) PMECC Remainder 15 Register (sec_num = 0) */
} SmcRem;

/** \brief SMC hardware registers */
typedef struct {  
  __IO SMC_HSMC_CFG_Type              HSMC_CFG;       /**< Offset: 0x00 (R/W  32) NFC Configuration Register */
  __O  SMC_HSMC_CTRL_Type             HSMC_CTRL;      /**< Offset: 0x04 ( /W  32) NFC Control Register */
  __I  SMC_HSMC_SR_Type               HSMC_SR;        /**< Offset: 0x08 (R/   32) NFC Status Register */
  __O  SMC_HSMC_IER_Type              HSMC_IER;       /**< Offset: 0x0C ( /W  32) NFC Interrupt Enable Register */
  __O  SMC_HSMC_IDR_Type              HSMC_IDR;       /**< Offset: 0x10 ( /W  32) NFC Interrupt Disable Register */
  __I  SMC_HSMC_IMR_Type              HSMC_IMR;       /**< Offset: 0x14 (R/   32) NFC Interrupt Mask Register */
  __IO SMC_HSMC_ADDR_Type             HSMC_ADDR;      /**< Offset: 0x18 (R/W  32) NFC Address Cycle Zero Register */
  __IO SMC_HSMC_BANK_Type             HSMC_BANK;      /**< Offset: 0x1C (R/W  32) Bank Address Register */
  __I  uint8_t                        Reserved1[80];
  __IO SMC_HSMC_PMECCFG_Type          HSMC_PMECCFG;   /**< Offset: 0x70 (R/W  32) PMECC Configuration Register */
  __IO SMC_HSMC_PMECCSAREA_Type       HSMC_PMECCSAREA; /**< Offset: 0x74 (R/W  32) PMECC Spare Area Size Register */
  __IO SMC_HSMC_PMECCSADDR_Type       HSMC_PMECCSADDR; /**< Offset: 0x78 (R/W  32) PMECC Start Address Register */
  __IO SMC_HSMC_PMECCEADDR_Type       HSMC_PMECCEADDR; /**< Offset: 0x7C (R/W  32) PMECC End Address Register */
  __I  uint8_t                        Reserved2[4];
  __O  SMC_HSMC_PMECCTRL_Type         HSMC_PMECCTRL;  /**< Offset: 0x84 ( /W  32) PMECC Control Register */
  __I  SMC_HSMC_PMECCSR_Type          HSMC_PMECCSR;   /**< Offset: 0x88 (R/   32) PMECC Status Register */
  __O  SMC_HSMC_PMECCIER_Type         HSMC_PMECCIER;  /**< Offset: 0x8C ( /W  32) PMECC Interrupt Enable register */
  __O  SMC_HSMC_PMECCIDR_Type         HSMC_PMECCIDR;  /**< Offset: 0x90 ( /W  32) PMECC Interrupt Disable Register */
  __I  SMC_HSMC_PMECCIMR_Type         HSMC_PMECCIMR;  /**< Offset: 0x94 (R/   32) PMECC Interrupt Mask Register */
  __I  SMC_HSMC_PMECCISR_Type         HSMC_PMECCISR;  /**< Offset: 0x98 (R/   32) PMECC Interrupt Status Register */
  __I  uint8_t                        Reserved3[20];
       SmcPmecc                       SmcPmecc[8];    /**< Offset: 0xB0  */
       SmcRem                         SmcRem[8];      /**< Offset: 0x2B0  */
  __I  uint8_t                        Reserved4[80];
  __IO SMC_HSMC_ELCFG_Type            HSMC_ELCFG;     /**< Offset: 0x500 (R/W  32) PMECC Error Location Configuration Register */
  __I  SMC_HSMC_ELPRIM_Type           HSMC_ELPRIM;    /**< Offset: 0x504 (R/   32) PMECC Error Location Primitive Register */
  __O  SMC_HSMC_ELEN_Type             HSMC_ELEN;      /**< Offset: 0x508 ( /W  32) PMECC Error Location Enable Register */
  __O  SMC_HSMC_ELDIS_Type            HSMC_ELDIS;     /**< Offset: 0x50C ( /W  32) PMECC Error Location Disable Register */
  __I  SMC_HSMC_ELSR_Type             HSMC_ELSR;      /**< Offset: 0x510 (R/   32) PMECC Error Location Status Register */
  __O  SMC_HSMC_ELIER_Type            HSMC_ELIER;     /**< Offset: 0x514 ( /W  32) PMECC Error Location Interrupt Enable register */
  __O  SMC_HSMC_ELIDR_Type            HSMC_ELIDR;     /**< Offset: 0x518 ( /W  32) PMECC Error Location Interrupt Disable Register */
  __I  SMC_HSMC_ELIMR_Type            HSMC_ELIMR;     /**< Offset: 0x51C (R/   32) PMECC Error Location Interrupt Mask Register */
  __I  SMC_HSMC_ELISR_Type            HSMC_ELISR;     /**< Offset: 0x520 (R/   32) PMECC Error Location Interrupt Status Register */
  __I  uint8_t                        Reserved5[4];
  __I  SMC_HSMC_SIGMA0_Type           HSMC_SIGMA0;    /**< Offset: 0x528 (R/   32) PMECC Error Location SIGMA 0 Register */
  __IO SMC_HSMC_SIGMA1_Type           HSMC_SIGMA1;    /**< Offset: 0x52C (R/W  32) PMECC Error Location SIGMA 1 Register */
  __IO SMC_HSMC_SIGMA2_Type           HSMC_SIGMA2;    /**< Offset: 0x530 (R/W  32) PMECC Error Location SIGMA 2 Register */
  __IO SMC_HSMC_SIGMA3_Type           HSMC_SIGMA3;    /**< Offset: 0x534 (R/W  32) PMECC Error Location SIGMA 3 Register */
  __IO SMC_HSMC_SIGMA4_Type           HSMC_SIGMA4;    /**< Offset: 0x538 (R/W  32) PMECC Error Location SIGMA 4 Register */
  __IO SMC_HSMC_SIGMA5_Type           HSMC_SIGMA5;    /**< Offset: 0x53C (R/W  32) PMECC Error Location SIGMA 5 Register */
  __IO SMC_HSMC_SIGMA6_Type           HSMC_SIGMA6;    /**< Offset: 0x540 (R/W  32) PMECC Error Location SIGMA 6 Register */
  __IO SMC_HSMC_SIGMA7_Type           HSMC_SIGMA7;    /**< Offset: 0x544 (R/W  32) PMECC Error Location SIGMA 7 Register */
  __IO SMC_HSMC_SIGMA8_Type           HSMC_SIGMA8;    /**< Offset: 0x548 (R/W  32) PMECC Error Location SIGMA 8 Register */
  __IO SMC_HSMC_SIGMA9_Type           HSMC_SIGMA9;    /**< Offset: 0x54C (R/W  32) PMECC Error Location SIGMA 9 Register */
  __IO SMC_HSMC_SIGMA10_Type          HSMC_SIGMA10;   /**< Offset: 0x550 (R/W  32) PMECC Error Location SIGMA 10 Register */
  __IO SMC_HSMC_SIGMA11_Type          HSMC_SIGMA11;   /**< Offset: 0x554 (R/W  32) PMECC Error Location SIGMA 11 Register */
  __IO SMC_HSMC_SIGMA12_Type          HSMC_SIGMA12;   /**< Offset: 0x558 (R/W  32) PMECC Error Location SIGMA 12 Register */
  __IO SMC_HSMC_SIGMA13_Type          HSMC_SIGMA13;   /**< Offset: 0x55C (R/W  32) PMECC Error Location SIGMA 13 Register */
  __IO SMC_HSMC_SIGMA14_Type          HSMC_SIGMA14;   /**< Offset: 0x560 (R/W  32) PMECC Error Location SIGMA 14 Register */
  __IO SMC_HSMC_SIGMA15_Type          HSMC_SIGMA15;   /**< Offset: 0x564 (R/W  32) PMECC Error Location SIGMA 15 Register */
  __IO SMC_HSMC_SIGMA16_Type          HSMC_SIGMA16;   /**< Offset: 0x568 (R/W  32) PMECC Error Location SIGMA 16 Register */
  __IO SMC_HSMC_SIGMA17_Type          HSMC_SIGMA17;   /**< Offset: 0x56C (R/W  32) PMECC Error Location SIGMA 17 Register */
  __IO SMC_HSMC_SIGMA18_Type          HSMC_SIGMA18;   /**< Offset: 0x570 (R/W  32) PMECC Error Location SIGMA 18 Register */
  __IO SMC_HSMC_SIGMA19_Type          HSMC_SIGMA19;   /**< Offset: 0x574 (R/W  32) PMECC Error Location SIGMA 19 Register */
  __IO SMC_HSMC_SIGMA20_Type          HSMC_SIGMA20;   /**< Offset: 0x578 (R/W  32) PMECC Error Location SIGMA 20 Register */
  __IO SMC_HSMC_SIGMA21_Type          HSMC_SIGMA21;   /**< Offset: 0x57C (R/W  32) PMECC Error Location SIGMA 21 Register */
  __IO SMC_HSMC_SIGMA22_Type          HSMC_SIGMA22;   /**< Offset: 0x580 (R/W  32) PMECC Error Location SIGMA 22 Register */
  __IO SMC_HSMC_SIGMA23_Type          HSMC_SIGMA23;   /**< Offset: 0x584 (R/W  32) PMECC Error Location SIGMA 23 Register */
  __IO SMC_HSMC_SIGMA24_Type          HSMC_SIGMA24;   /**< Offset: 0x588 (R/W  32) PMECC Error Location SIGMA 24 Register */
  __IO SMC_HSMC_SIGMA25_Type          HSMC_SIGMA25;   /**< Offset: 0x58C (R/W  32) PMECC Error Location SIGMA 25 Register */
  __IO SMC_HSMC_SIGMA26_Type          HSMC_SIGMA26;   /**< Offset: 0x590 (R/W  32) PMECC Error Location SIGMA 26 Register */
  __IO SMC_HSMC_SIGMA27_Type          HSMC_SIGMA27;   /**< Offset: 0x594 (R/W  32) PMECC Error Location SIGMA 27 Register */
  __IO SMC_HSMC_SIGMA28_Type          HSMC_SIGMA28;   /**< Offset: 0x598 (R/W  32) PMECC Error Location SIGMA 28 Register */
  __IO SMC_HSMC_SIGMA29_Type          HSMC_SIGMA29;   /**< Offset: 0x59C (R/W  32) PMECC Error Location SIGMA 29 Register */
  __IO SMC_HSMC_SIGMA30_Type          HSMC_SIGMA30;   /**< Offset: 0x5A0 (R/W  32) PMECC Error Location SIGMA 30 Register */
  __IO SMC_HSMC_SIGMA31_Type          HSMC_SIGMA31;   /**< Offset: 0x5A4 (R/W  32) PMECC Error Location SIGMA 31 Register */
  __IO SMC_HSMC_SIGMA32_Type          HSMC_SIGMA32;   /**< Offset: 0x5A8 (R/W  32) PMECC Error Location SIGMA 32 Register */
  __I  SMC_HSMC_ERRLOC_Type           HSMC_ERRLOC[32]; /**< Offset: 0x5AC (R/   32) PMECC Error Location 0 Register */
  __I  uint8_t                        Reserved6[212];
       SmcCsNumber                    SmcCsNumber[4]; /**< Offset: 0x700  */
  __I  uint8_t                        Reserved7[80];
  __IO SMC_HSMC_OCMS_Type             HSMC_OCMS;      /**< Offset: 0x7A0 (R/W  32) Off Chip Memory Scrambling Register */
  __O  SMC_HSMC_KEY1_Type             HSMC_KEY1;      /**< Offset: 0x7A4 ( /W  32) Off Chip Memory Scrambling KEY1 Register */
  __O  SMC_HSMC_KEY2_Type             HSMC_KEY2;      /**< Offset: 0x7A8 ( /W  32) Off Chip Memory Scrambling KEY2 Register */
  __I  uint8_t                        Reserved8[56];
  __IO SMC_HSMC_WPMR_Type             HSMC_WPMR;      /**< Offset: 0x7E4 (R/W  32) Write Protection Mode Register */
  __I  SMC_HSMC_WPSR_Type             HSMC_WPSR;      /**< Offset: 0x7E8 (R/   32) Write Protection Status Register */
} Smc;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Static Memory Controller */

#endif /* _SAMA5D2_SMC_COMPONENT_H_ */
