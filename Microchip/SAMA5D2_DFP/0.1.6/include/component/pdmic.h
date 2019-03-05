/**
 * \file
 *
 * \brief Component description for PDMIC
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
#ifndef _SAMA5D2_PDMIC_COMPONENT_H_
#define _SAMA5D2_PDMIC_COMPONENT_H_
#define _SAMA5D2_PDMIC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Pulse Density Modulation Interface Controller
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PDMIC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define PDMIC_11237                      /**< (PDMIC) Module ID */
#define REV_PDMIC J                      /**< (PDMIC) Module revision */

/* -------- PDMIC_CR : (PDMIC Offset: 0x00) (R/W 32) Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset                           */
    uint32_t :3;                        /**< bit:   1..3  Reserved */
    uint32_t ENPDM:1;                   /**< bit:      4  Enable PDM                               */
    uint32_t :27;                       /**< bit:  5..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PDMIC_CR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDMIC_CR_OFFSET                     (0x00)                                        /**<  (PDMIC_CR) Control Register  Offset */

#define PDMIC_CR_SWRST_Pos                  0                                              /**< (PDMIC_CR) Software Reset Position */
#define PDMIC_CR_SWRST_Msk                  (_U_(0x1) << PDMIC_CR_SWRST_Pos)               /**< (PDMIC_CR) Software Reset Mask */
#define PDMIC_CR_SWRST                      PDMIC_CR_SWRST_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PDMIC_CR_SWRST_Msk instead */
#define PDMIC_CR_ENPDM_Pos                  4                                              /**< (PDMIC_CR) Enable PDM Position */
#define PDMIC_CR_ENPDM_Msk                  (_U_(0x1) << PDMIC_CR_ENPDM_Pos)               /**< (PDMIC_CR) Enable PDM Mask */
#define PDMIC_CR_ENPDM                      PDMIC_CR_ENPDM_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PDMIC_CR_ENPDM_Msk instead */
#define PDMIC_CR_MASK                       _U_(0x11)                                      /**< \deprecated (PDMIC_CR) Register MASK  (Use PDMIC_CR_Msk instead)  */
#define PDMIC_CR_Msk                        _U_(0x11)                                      /**< (PDMIC_CR) Register Mask  */


/* -------- PDMIC_MR : (PDMIC Offset: 0x04) (R/W 32) Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :4;                        /**< bit:   0..3  Reserved */
    uint32_t CLKS:1;                    /**< bit:      4  Clock Source Selection                   */
    uint32_t :3;                        /**< bit:   5..7  Reserved */
    uint32_t PRESCAL:7;                 /**< bit:  8..14  Prescaler Rate Selection                 */
    uint32_t :17;                       /**< bit: 15..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PDMIC_MR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDMIC_MR_OFFSET                     (0x04)                                        /**<  (PDMIC_MR) Mode Register  Offset */

#define PDMIC_MR_CLKS_Pos                   4                                              /**< (PDMIC_MR) Clock Source Selection Position */
#define PDMIC_MR_CLKS_Msk                   (_U_(0x1) << PDMIC_MR_CLKS_Pos)                /**< (PDMIC_MR) Clock Source Selection Mask */
#define PDMIC_MR_CLKS                       PDMIC_MR_CLKS_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PDMIC_MR_CLKS_Msk instead */
#define PDMIC_MR_PRESCAL_Pos                8                                              /**< (PDMIC_MR) Prescaler Rate Selection Position */
#define PDMIC_MR_PRESCAL_Msk                (_U_(0x7F) << PDMIC_MR_PRESCAL_Pos)            /**< (PDMIC_MR) Prescaler Rate Selection Mask */
#define PDMIC_MR_PRESCAL(value)             (PDMIC_MR_PRESCAL_Msk & ((value) << PDMIC_MR_PRESCAL_Pos))
#define PDMIC_MR_MASK                       _U_(0x7F10)                                    /**< \deprecated (PDMIC_MR) Register MASK  (Use PDMIC_MR_Msk instead)  */
#define PDMIC_MR_Msk                        _U_(0x7F10)                                    /**< (PDMIC_MR) Register Mask  */


/* -------- PDMIC_CDR : (PDMIC Offset: 0x14) (R/ 32) Converted Data Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DATA:32;                   /**< bit:  0..31  Data Converted                           */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PDMIC_CDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDMIC_CDR_OFFSET                    (0x14)                                        /**<  (PDMIC_CDR) Converted Data Register  Offset */

#define PDMIC_CDR_DATA_Pos                  0                                              /**< (PDMIC_CDR) Data Converted Position */
#define PDMIC_CDR_DATA_Msk                  (_U_(0xFFFFFFFF) << PDMIC_CDR_DATA_Pos)        /**< (PDMIC_CDR) Data Converted Mask */
#define PDMIC_CDR_DATA(value)               (PDMIC_CDR_DATA_Msk & ((value) << PDMIC_CDR_DATA_Pos))
#define PDMIC_CDR_MASK                      _U_(0xFFFFFFFF)                                /**< \deprecated (PDMIC_CDR) Register MASK  (Use PDMIC_CDR_Msk instead)  */
#define PDMIC_CDR_Msk                       _U_(0xFFFFFFFF)                                /**< (PDMIC_CDR) Register Mask  */


/* -------- PDMIC_IER : (PDMIC Offset: 0x18) (/W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :24;                       /**< bit:  0..23  Reserved */
    uint32_t DRDY:1;                    /**< bit:     24  Data Ready Interrupt Enable              */
    uint32_t OVRE:1;                    /**< bit:     25  Overrun Error Interrupt Enable           */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PDMIC_IER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDMIC_IER_OFFSET                    (0x18)                                        /**<  (PDMIC_IER) Interrupt Enable Register  Offset */

#define PDMIC_IER_DRDY_Pos                  24                                             /**< (PDMIC_IER) Data Ready Interrupt Enable Position */
#define PDMIC_IER_DRDY_Msk                  (_U_(0x1) << PDMIC_IER_DRDY_Pos)               /**< (PDMIC_IER) Data Ready Interrupt Enable Mask */
#define PDMIC_IER_DRDY                      PDMIC_IER_DRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PDMIC_IER_DRDY_Msk instead */
#define PDMIC_IER_OVRE_Pos                  25                                             /**< (PDMIC_IER) Overrun Error Interrupt Enable Position */
#define PDMIC_IER_OVRE_Msk                  (_U_(0x1) << PDMIC_IER_OVRE_Pos)               /**< (PDMIC_IER) Overrun Error Interrupt Enable Mask */
#define PDMIC_IER_OVRE                      PDMIC_IER_OVRE_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PDMIC_IER_OVRE_Msk instead */
#define PDMIC_IER_MASK                      _U_(0x3000000)                                 /**< \deprecated (PDMIC_IER) Register MASK  (Use PDMIC_IER_Msk instead)  */
#define PDMIC_IER_Msk                       _U_(0x3000000)                                 /**< (PDMIC_IER) Register Mask  */


/* -------- PDMIC_IDR : (PDMIC Offset: 0x1c) (/W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :24;                       /**< bit:  0..23  Reserved */
    uint32_t DRDY:1;                    /**< bit:     24  Data Ready Interrupt Disable             */
    uint32_t OVRE:1;                    /**< bit:     25  General Overrun Error Interrupt Disable  */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PDMIC_IDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDMIC_IDR_OFFSET                    (0x1C)                                        /**<  (PDMIC_IDR) Interrupt Disable Register  Offset */

#define PDMIC_IDR_DRDY_Pos                  24                                             /**< (PDMIC_IDR) Data Ready Interrupt Disable Position */
#define PDMIC_IDR_DRDY_Msk                  (_U_(0x1) << PDMIC_IDR_DRDY_Pos)               /**< (PDMIC_IDR) Data Ready Interrupt Disable Mask */
#define PDMIC_IDR_DRDY                      PDMIC_IDR_DRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PDMIC_IDR_DRDY_Msk instead */
#define PDMIC_IDR_OVRE_Pos                  25                                             /**< (PDMIC_IDR) General Overrun Error Interrupt Disable Position */
#define PDMIC_IDR_OVRE_Msk                  (_U_(0x1) << PDMIC_IDR_OVRE_Pos)               /**< (PDMIC_IDR) General Overrun Error Interrupt Disable Mask */
#define PDMIC_IDR_OVRE                      PDMIC_IDR_OVRE_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PDMIC_IDR_OVRE_Msk instead */
#define PDMIC_IDR_MASK                      _U_(0x3000000)                                 /**< \deprecated (PDMIC_IDR) Register MASK  (Use PDMIC_IDR_Msk instead)  */
#define PDMIC_IDR_Msk                       _U_(0x3000000)                                 /**< (PDMIC_IDR) Register Mask  */


/* -------- PDMIC_IMR : (PDMIC Offset: 0x20) (R/ 32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :24;                       /**< bit:  0..23  Reserved */
    uint32_t DRDY:1;                    /**< bit:     24  Data Ready Interrupt Mask                */
    uint32_t OVRE:1;                    /**< bit:     25  General Overrun Error Interrupt Mask     */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PDMIC_IMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDMIC_IMR_OFFSET                    (0x20)                                        /**<  (PDMIC_IMR) Interrupt Mask Register  Offset */

#define PDMIC_IMR_DRDY_Pos                  24                                             /**< (PDMIC_IMR) Data Ready Interrupt Mask Position */
#define PDMIC_IMR_DRDY_Msk                  (_U_(0x1) << PDMIC_IMR_DRDY_Pos)               /**< (PDMIC_IMR) Data Ready Interrupt Mask Mask */
#define PDMIC_IMR_DRDY                      PDMIC_IMR_DRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PDMIC_IMR_DRDY_Msk instead */
#define PDMIC_IMR_OVRE_Pos                  25                                             /**< (PDMIC_IMR) General Overrun Error Interrupt Mask Position */
#define PDMIC_IMR_OVRE_Msk                  (_U_(0x1) << PDMIC_IMR_OVRE_Pos)               /**< (PDMIC_IMR) General Overrun Error Interrupt Mask Mask */
#define PDMIC_IMR_OVRE                      PDMIC_IMR_OVRE_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PDMIC_IMR_OVRE_Msk instead */
#define PDMIC_IMR_MASK                      _U_(0x3000000)                                 /**< \deprecated (PDMIC_IMR) Register MASK  (Use PDMIC_IMR_Msk instead)  */
#define PDMIC_IMR_Msk                       _U_(0x3000000)                                 /**< (PDMIC_IMR) Register Mask  */


/* -------- PDMIC_ISR : (PDMIC Offset: 0x24) (R/ 32) Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t FIFOCNT:8;                 /**< bit: 16..23  FIFO Count                               */
    uint32_t DRDY:1;                    /**< bit:     24  Data Ready (cleared by reading PDMIC_CDR) */
    uint32_t OVRE:1;                    /**< bit:     25  Overrun Error (cleared on read)          */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PDMIC_ISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDMIC_ISR_OFFSET                    (0x24)                                        /**<  (PDMIC_ISR) Interrupt Status Register  Offset */

#define PDMIC_ISR_FIFOCNT_Pos               16                                             /**< (PDMIC_ISR) FIFO Count Position */
#define PDMIC_ISR_FIFOCNT_Msk               (_U_(0xFF) << PDMIC_ISR_FIFOCNT_Pos)           /**< (PDMIC_ISR) FIFO Count Mask */
#define PDMIC_ISR_FIFOCNT(value)            (PDMIC_ISR_FIFOCNT_Msk & ((value) << PDMIC_ISR_FIFOCNT_Pos))
#define PDMIC_ISR_DRDY_Pos                  24                                             /**< (PDMIC_ISR) Data Ready (cleared by reading PDMIC_CDR) Position */
#define PDMIC_ISR_DRDY_Msk                  (_U_(0x1) << PDMIC_ISR_DRDY_Pos)               /**< (PDMIC_ISR) Data Ready (cleared by reading PDMIC_CDR) Mask */
#define PDMIC_ISR_DRDY                      PDMIC_ISR_DRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PDMIC_ISR_DRDY_Msk instead */
#define PDMIC_ISR_OVRE_Pos                  25                                             /**< (PDMIC_ISR) Overrun Error (cleared on read) Position */
#define PDMIC_ISR_OVRE_Msk                  (_U_(0x1) << PDMIC_ISR_OVRE_Pos)               /**< (PDMIC_ISR) Overrun Error (cleared on read) Mask */
#define PDMIC_ISR_OVRE                      PDMIC_ISR_OVRE_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PDMIC_ISR_OVRE_Msk instead */
#define PDMIC_ISR_MASK                      _U_(0x3FF0000)                                 /**< \deprecated (PDMIC_ISR) Register MASK  (Use PDMIC_ISR_Msk instead)  */
#define PDMIC_ISR_Msk                       _U_(0x3FF0000)                                 /**< (PDMIC_ISR) Register Mask  */


/* -------- PDMIC_DSPR0 : (PDMIC Offset: 0x58) (R/W 32) DSP Configuration Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :1;                        /**< bit:      0  Reserved */
    uint32_t HPFBYP:1;                  /**< bit:      1  High-Pass Filter Bypass                  */
    uint32_t SINBYP:1;                  /**< bit:      2  SINCC Filter Bypass                      */
    uint32_t SIZE:1;                    /**< bit:      3  Data Size                                */
    uint32_t OSR:3;                     /**< bit:   4..6  Global Oversampling Ratio                */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t SCALE:4;                   /**< bit:  8..11  Data Scale                               */
    uint32_t SHIFT:4;                   /**< bit: 12..15  Data Shift                               */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PDMIC_DSPR0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDMIC_DSPR0_OFFSET                  (0x58)                                        /**<  (PDMIC_DSPR0) DSP Configuration Register 0  Offset */

#define PDMIC_DSPR0_HPFBYP_Pos              1                                              /**< (PDMIC_DSPR0) High-Pass Filter Bypass Position */
#define PDMIC_DSPR0_HPFBYP_Msk              (_U_(0x1) << PDMIC_DSPR0_HPFBYP_Pos)           /**< (PDMIC_DSPR0) High-Pass Filter Bypass Mask */
#define PDMIC_DSPR0_HPFBYP                  PDMIC_DSPR0_HPFBYP_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use PDMIC_DSPR0_HPFBYP_Msk instead */
#define PDMIC_DSPR0_SINBYP_Pos              2                                              /**< (PDMIC_DSPR0) SINCC Filter Bypass Position */
#define PDMIC_DSPR0_SINBYP_Msk              (_U_(0x1) << PDMIC_DSPR0_SINBYP_Pos)           /**< (PDMIC_DSPR0) SINCC Filter Bypass Mask */
#define PDMIC_DSPR0_SINBYP                  PDMIC_DSPR0_SINBYP_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use PDMIC_DSPR0_SINBYP_Msk instead */
#define PDMIC_DSPR0_SIZE_Pos                3                                              /**< (PDMIC_DSPR0) Data Size Position */
#define PDMIC_DSPR0_SIZE_Msk                (_U_(0x1) << PDMIC_DSPR0_SIZE_Pos)             /**< (PDMIC_DSPR0) Data Size Mask */
#define PDMIC_DSPR0_SIZE                    PDMIC_DSPR0_SIZE_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PDMIC_DSPR0_SIZE_Msk instead */
#define PDMIC_DSPR0_OSR_Pos                 4                                              /**< (PDMIC_DSPR0) Global Oversampling Ratio Position */
#define PDMIC_DSPR0_OSR_Msk                 (_U_(0x7) << PDMIC_DSPR0_OSR_Pos)              /**< (PDMIC_DSPR0) Global Oversampling Ratio Mask */
#define PDMIC_DSPR0_OSR(value)              (PDMIC_DSPR0_OSR_Msk & ((value) << PDMIC_DSPR0_OSR_Pos))
#define   PDMIC_DSPR0_OSR_128_Val           _U_(0x0)                                       /**< (PDMIC_DSPR0) Global Oversampling ratio is 128 (SINC filter oversampling ratio is 64)  */
#define   PDMIC_DSPR0_OSR_64_Val            _U_(0x1)                                       /**< (PDMIC_DSPR0) Global Oversampling ratio is 64 (SINC filter oversampling ratio is 32)  */
#define PDMIC_DSPR0_OSR_128                 (PDMIC_DSPR0_OSR_128_Val << PDMIC_DSPR0_OSR_Pos)  /**< (PDMIC_DSPR0) Global Oversampling ratio is 128 (SINC filter oversampling ratio is 64) Position  */
#define PDMIC_DSPR0_OSR_64                  (PDMIC_DSPR0_OSR_64_Val << PDMIC_DSPR0_OSR_Pos)  /**< (PDMIC_DSPR0) Global Oversampling ratio is 64 (SINC filter oversampling ratio is 32) Position  */
#define PDMIC_DSPR0_SCALE_Pos               8                                              /**< (PDMIC_DSPR0) Data Scale Position */
#define PDMIC_DSPR0_SCALE_Msk               (_U_(0xF) << PDMIC_DSPR0_SCALE_Pos)            /**< (PDMIC_DSPR0) Data Scale Mask */
#define PDMIC_DSPR0_SCALE(value)            (PDMIC_DSPR0_SCALE_Msk & ((value) << PDMIC_DSPR0_SCALE_Pos))
#define PDMIC_DSPR0_SHIFT_Pos               12                                             /**< (PDMIC_DSPR0) Data Shift Position */
#define PDMIC_DSPR0_SHIFT_Msk               (_U_(0xF) << PDMIC_DSPR0_SHIFT_Pos)            /**< (PDMIC_DSPR0) Data Shift Mask */
#define PDMIC_DSPR0_SHIFT(value)            (PDMIC_DSPR0_SHIFT_Msk & ((value) << PDMIC_DSPR0_SHIFT_Pos))
#define PDMIC_DSPR0_MASK                    _U_(0xFF7E)                                    /**< \deprecated (PDMIC_DSPR0) Register MASK  (Use PDMIC_DSPR0_Msk instead)  */
#define PDMIC_DSPR0_Msk                     _U_(0xFF7E)                                    /**< (PDMIC_DSPR0) Register Mask  */


/* -------- PDMIC_DSPR1 : (PDMIC Offset: 0x5c) (R/W 32) DSP Configuration Register 1 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DGAIN:15;                  /**< bit:  0..14  Gain Correction                          */
    uint32_t :1;                        /**< bit:     15  Reserved */
    uint32_t OFFSET:16;                 /**< bit: 16..31  Offset Correction                        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PDMIC_DSPR1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDMIC_DSPR1_OFFSET                  (0x5C)                                        /**<  (PDMIC_DSPR1) DSP Configuration Register 1  Offset */

#define PDMIC_DSPR1_DGAIN_Pos               0                                              /**< (PDMIC_DSPR1) Gain Correction Position */
#define PDMIC_DSPR1_DGAIN_Msk               (_U_(0x7FFF) << PDMIC_DSPR1_DGAIN_Pos)         /**< (PDMIC_DSPR1) Gain Correction Mask */
#define PDMIC_DSPR1_DGAIN(value)            (PDMIC_DSPR1_DGAIN_Msk & ((value) << PDMIC_DSPR1_DGAIN_Pos))
#define PDMIC_DSPR1_OFFSET_Pos              16                                             /**< (PDMIC_DSPR1) Offset Correction Position */
#define PDMIC_DSPR1_OFFSET_Msk              (_U_(0xFFFF) << PDMIC_DSPR1_OFFSET_Pos)        /**< (PDMIC_DSPR1) Offset Correction Mask */
#define PDMIC_DSPR1_OFFSET(value)           (PDMIC_DSPR1_OFFSET_Msk & ((value) << PDMIC_DSPR1_OFFSET_Pos))
#define PDMIC_DSPR1_MASK                    _U_(0xFFFF7FFF)                                /**< \deprecated (PDMIC_DSPR1) Register MASK  (Use PDMIC_DSPR1_Msk instead)  */
#define PDMIC_DSPR1_Msk                     _U_(0xFFFF7FFF)                                /**< (PDMIC_DSPR1) Register Mask  */


/* -------- PDMIC_WPMR : (PDMIC Offset: 0xe4) (R/W 32) Write Protection Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPEN:1;                    /**< bit:      0  Write Protection Enable                  */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPKEY:24;                  /**< bit:  8..31  Write Protection Key                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PDMIC_WPMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDMIC_WPMR_OFFSET                   (0xE4)                                        /**<  (PDMIC_WPMR) Write Protection Mode Register  Offset */

#define PDMIC_WPMR_WPEN_Pos                 0                                              /**< (PDMIC_WPMR) Write Protection Enable Position */
#define PDMIC_WPMR_WPEN_Msk                 (_U_(0x1) << PDMIC_WPMR_WPEN_Pos)              /**< (PDMIC_WPMR) Write Protection Enable Mask */
#define PDMIC_WPMR_WPEN                     PDMIC_WPMR_WPEN_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PDMIC_WPMR_WPEN_Msk instead */
#define PDMIC_WPMR_WPKEY_Pos                8                                              /**< (PDMIC_WPMR) Write Protection Key Position */
#define PDMIC_WPMR_WPKEY_Msk                (_U_(0xFFFFFF) << PDMIC_WPMR_WPKEY_Pos)        /**< (PDMIC_WPMR) Write Protection Key Mask */
#define PDMIC_WPMR_WPKEY(value)             (PDMIC_WPMR_WPKEY_Msk & ((value) << PDMIC_WPMR_WPKEY_Pos))
#define   PDMIC_WPMR_WPKEY_PASSWD_Val       _U_(0x414443)                                  /**< (PDMIC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0.  */
#define PDMIC_WPMR_WPKEY_PASSWD             (PDMIC_WPMR_WPKEY_PASSWD_Val << PDMIC_WPMR_WPKEY_Pos)  /**< (PDMIC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0. Position  */
#define PDMIC_WPMR_MASK                     _U_(0xFFFFFF01)                                /**< \deprecated (PDMIC_WPMR) Register MASK  (Use PDMIC_WPMR_Msk instead)  */
#define PDMIC_WPMR_Msk                      _U_(0xFFFFFF01)                                /**< (PDMIC_WPMR) Register Mask  */


/* -------- PDMIC_WPSR : (PDMIC Offset: 0xe8) (R/ 32) Write Protection Status Register -------- */
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
} PDMIC_WPSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDMIC_WPSR_OFFSET                   (0xE8)                                        /**<  (PDMIC_WPSR) Write Protection Status Register  Offset */

#define PDMIC_WPSR_WPVS_Pos                 0                                              /**< (PDMIC_WPSR) Write Protection Violation Status Position */
#define PDMIC_WPSR_WPVS_Msk                 (_U_(0x1) << PDMIC_WPSR_WPVS_Pos)              /**< (PDMIC_WPSR) Write Protection Violation Status Mask */
#define PDMIC_WPSR_WPVS                     PDMIC_WPSR_WPVS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PDMIC_WPSR_WPVS_Msk instead */
#define PDMIC_WPSR_WPVSRC_Pos               8                                              /**< (PDMIC_WPSR) Write Protection Violation Source Position */
#define PDMIC_WPSR_WPVSRC_Msk               (_U_(0xFFFF) << PDMIC_WPSR_WPVSRC_Pos)         /**< (PDMIC_WPSR) Write Protection Violation Source Mask */
#define PDMIC_WPSR_WPVSRC(value)            (PDMIC_WPSR_WPVSRC_Msk & ((value) << PDMIC_WPSR_WPVSRC_Pos))
#define PDMIC_WPSR_MASK                     _U_(0xFFFF01)                                  /**< \deprecated (PDMIC_WPSR) Register MASK  (Use PDMIC_WPSR_Msk instead)  */
#define PDMIC_WPSR_Msk                      _U_(0xFFFF01)                                  /**< (PDMIC_WPSR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief PDMIC hardware registers */
typedef struct {  
  __IO uint32_t PDMIC_CR;       /**< (PDMIC Offset: 0x00) Control Register */
  __IO uint32_t PDMIC_MR;       /**< (PDMIC Offset: 0x04) Mode Register */
  __I  uint8_t                        Reserved1[12];
  __I  uint32_t PDMIC_CDR;      /**< (PDMIC Offset: 0x14) Converted Data Register */
  __O  uint32_t PDMIC_IER;      /**< (PDMIC Offset: 0x18) Interrupt Enable Register */
  __O  uint32_t PDMIC_IDR;      /**< (PDMIC Offset: 0x1C) Interrupt Disable Register */
  __I  uint32_t PDMIC_IMR;      /**< (PDMIC Offset: 0x20) Interrupt Mask Register */
  __I  uint32_t PDMIC_ISR;      /**< (PDMIC Offset: 0x24) Interrupt Status Register */
  __I  uint8_t                        Reserved2[48];
  __IO uint32_t PDMIC_DSPR0;    /**< (PDMIC Offset: 0x58) DSP Configuration Register 0 */
  __IO uint32_t PDMIC_DSPR1;    /**< (PDMIC Offset: 0x5C) DSP Configuration Register 1 */
  __I  uint8_t                        Reserved3[132];
  __IO uint32_t PDMIC_WPMR;     /**< (PDMIC Offset: 0xE4) Write Protection Mode Register */
  __I  uint32_t PDMIC_WPSR;     /**< (PDMIC Offset: 0xE8) Write Protection Status Register */
} Pdmic;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief PDMIC hardware registers */
typedef struct {  
  __IO PDMIC_CR_Type                  PDMIC_CR;       /**< Offset: 0x00 (R/W  32) Control Register */
  __IO PDMIC_MR_Type                  PDMIC_MR;       /**< Offset: 0x04 (R/W  32) Mode Register */
  __I  uint8_t                        Reserved1[12];
  __I  PDMIC_CDR_Type                 PDMIC_CDR;      /**< Offset: 0x14 (R/   32) Converted Data Register */
  __O  PDMIC_IER_Type                 PDMIC_IER;      /**< Offset: 0x18 ( /W  32) Interrupt Enable Register */
  __O  PDMIC_IDR_Type                 PDMIC_IDR;      /**< Offset: 0x1C ( /W  32) Interrupt Disable Register */
  __I  PDMIC_IMR_Type                 PDMIC_IMR;      /**< Offset: 0x20 (R/   32) Interrupt Mask Register */
  __I  PDMIC_ISR_Type                 PDMIC_ISR;      /**< Offset: 0x24 (R/   32) Interrupt Status Register */
  __I  uint8_t                        Reserved2[48];
  __IO PDMIC_DSPR0_Type               PDMIC_DSPR0;    /**< Offset: 0x58 (R/W  32) DSP Configuration Register 0 */
  __IO PDMIC_DSPR1_Type               PDMIC_DSPR1;    /**< Offset: 0x5C (R/W  32) DSP Configuration Register 1 */
  __I  uint8_t                        Reserved3[132];
  __IO PDMIC_WPMR_Type                PDMIC_WPMR;     /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I  PDMIC_WPSR_Type                PDMIC_WPSR;     /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
} Pdmic;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Pulse Density Modulation Interface Controller */

#endif /* _SAMA5D2_PDMIC_COMPONENT_H_ */
