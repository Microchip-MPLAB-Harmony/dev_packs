/**
 * \file
 *
 * \brief Component description for SFR
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
#ifndef _SAMA5D2_SFR_COMPONENT_H_
#define _SAMA5D2_SFR_COMPONENT_H_
#define _SAMA5D2_SFR_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Special Function Registers
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SFR */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define SFR_11066                      /**< (SFR) Module ID */
#define REV_SFR S                      /**< (SFR) Module revision */

/* -------- SFR_DDRCFG : (SFR Offset: 0x04) (R/W 32) DDR Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t FDQIEN:1;                  /**< bit:     16  Force DDR_DQ Input Buffer Always On      */
    uint32_t FDQSIEN:1;                 /**< bit:     17  Force DDR_DQS Input Buffer Always On     */
    uint32_t :14;                       /**< bit: 18..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFR_DDRCFG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFR_DDRCFG_OFFSET                   (0x04)                                        /**<  (SFR_DDRCFG) DDR Configuration Register  Offset */

#define SFR_DDRCFG_FDQIEN_Pos               16                                             /**< (SFR_DDRCFG) Force DDR_DQ Input Buffer Always On Position */
#define SFR_DDRCFG_FDQIEN_Msk               (_U_(0x1) << SFR_DDRCFG_FDQIEN_Pos)            /**< (SFR_DDRCFG) Force DDR_DQ Input Buffer Always On Mask */
#define SFR_DDRCFG_FDQIEN                   SFR_DDRCFG_FDQIEN_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_DDRCFG_FDQIEN_Msk instead */
#define SFR_DDRCFG_FDQSIEN_Pos              17                                             /**< (SFR_DDRCFG) Force DDR_DQS Input Buffer Always On Position */
#define SFR_DDRCFG_FDQSIEN_Msk              (_U_(0x1) << SFR_DDRCFG_FDQSIEN_Pos)           /**< (SFR_DDRCFG) Force DDR_DQS Input Buffer Always On Mask */
#define SFR_DDRCFG_FDQSIEN                  SFR_DDRCFG_FDQSIEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_DDRCFG_FDQSIEN_Msk instead */
#define SFR_DDRCFG_MASK                     _U_(0x30000)                                   /**< \deprecated (SFR_DDRCFG) Register MASK  (Use SFR_DDRCFG_Msk instead)  */
#define SFR_DDRCFG_Msk                      _U_(0x30000)                                   /**< (SFR_DDRCFG) Register Mask  */


/* -------- SFR_OHCIICR : (SFR Offset: 0x10) (R/W 32) OHCI Interrupt Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RES0:1;                    /**< bit:      0  USB PORTx RESET                          */
    uint32_t RES1:1;                    /**< bit:      1  USB PORTx RESET                          */
    uint32_t RES2:1;                    /**< bit:      2  USB PORTx RESET                          */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t ARIE:1;                    /**< bit:      4  OHCI Asynchronous Resume Interrupt Enable */
    uint32_t APPSTART:1;                /**< bit:      5  Reserved                                 */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t SUSPEND_A:1;               /**< bit:      8  USB PORT A                               */
    uint32_t SUSPEND_B:1;               /**< bit:      9  USB PORT B                               */
    uint32_t SUSPEND_C:1;               /**< bit:     10  USB PORT C                               */
    uint32_t :12;                       /**< bit: 11..22  Reserved */
    uint32_t UDPPUDIS:1;                /**< bit:     23  USB DEVICE PULLUP DISABLE                */
    uint32_t :3;                        /**< bit: 24..26  Reserved */
    uint32_t HSIC_SEL:1;                /**< bit:     27  Reserved                                 */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t RES:3;                     /**< bit:   0..2  USB PORTx RESET                          */
    uint32_t :29;                       /**< bit:  3..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} SFR_OHCIICR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFR_OHCIICR_OFFSET                  (0x10)                                        /**<  (SFR_OHCIICR) OHCI Interrupt Configuration Register  Offset */

#define SFR_OHCIICR_RES0_Pos                0                                              /**< (SFR_OHCIICR) USB PORTx RESET Position */
#define SFR_OHCIICR_RES0_Msk                (_U_(0x1) << SFR_OHCIICR_RES0_Pos)             /**< (SFR_OHCIICR) USB PORTx RESET Mask */
#define SFR_OHCIICR_RES0                    SFR_OHCIICR_RES0_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_OHCIICR_RES0_Msk instead */
#define SFR_OHCIICR_RES1_Pos                1                                              /**< (SFR_OHCIICR) USB PORTx RESET Position */
#define SFR_OHCIICR_RES1_Msk                (_U_(0x1) << SFR_OHCIICR_RES1_Pos)             /**< (SFR_OHCIICR) USB PORTx RESET Mask */
#define SFR_OHCIICR_RES1                    SFR_OHCIICR_RES1_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_OHCIICR_RES1_Msk instead */
#define SFR_OHCIICR_RES2_Pos                2                                              /**< (SFR_OHCIICR) USB PORTx RESET Position */
#define SFR_OHCIICR_RES2_Msk                (_U_(0x1) << SFR_OHCIICR_RES2_Pos)             /**< (SFR_OHCIICR) USB PORTx RESET Mask */
#define SFR_OHCIICR_RES2                    SFR_OHCIICR_RES2_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_OHCIICR_RES2_Msk instead */
#define SFR_OHCIICR_ARIE_Pos                4                                              /**< (SFR_OHCIICR) OHCI Asynchronous Resume Interrupt Enable Position */
#define SFR_OHCIICR_ARIE_Msk                (_U_(0x1) << SFR_OHCIICR_ARIE_Pos)             /**< (SFR_OHCIICR) OHCI Asynchronous Resume Interrupt Enable Mask */
#define SFR_OHCIICR_ARIE                    SFR_OHCIICR_ARIE_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_OHCIICR_ARIE_Msk instead */
#define SFR_OHCIICR_APPSTART_Pos            5                                              /**< (SFR_OHCIICR) Reserved Position */
#define SFR_OHCIICR_APPSTART_Msk            (_U_(0x1) << SFR_OHCIICR_APPSTART_Pos)         /**< (SFR_OHCIICR) Reserved Mask */
#define SFR_OHCIICR_APPSTART                SFR_OHCIICR_APPSTART_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_OHCIICR_APPSTART_Msk instead */
#define SFR_OHCIICR_SUSPEND_A_Pos           8                                              /**< (SFR_OHCIICR) USB PORT A Position */
#define SFR_OHCIICR_SUSPEND_A_Msk           (_U_(0x1) << SFR_OHCIICR_SUSPEND_A_Pos)        /**< (SFR_OHCIICR) USB PORT A Mask */
#define SFR_OHCIICR_SUSPEND_A               SFR_OHCIICR_SUSPEND_A_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_OHCIICR_SUSPEND_A_Msk instead */
#define SFR_OHCIICR_SUSPEND_B_Pos           9                                              /**< (SFR_OHCIICR) USB PORT B Position */
#define SFR_OHCIICR_SUSPEND_B_Msk           (_U_(0x1) << SFR_OHCIICR_SUSPEND_B_Pos)        /**< (SFR_OHCIICR) USB PORT B Mask */
#define SFR_OHCIICR_SUSPEND_B               SFR_OHCIICR_SUSPEND_B_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_OHCIICR_SUSPEND_B_Msk instead */
#define SFR_OHCIICR_SUSPEND_C_Pos           10                                             /**< (SFR_OHCIICR) USB PORT C Position */
#define SFR_OHCIICR_SUSPEND_C_Msk           (_U_(0x1) << SFR_OHCIICR_SUSPEND_C_Pos)        /**< (SFR_OHCIICR) USB PORT C Mask */
#define SFR_OHCIICR_SUSPEND_C               SFR_OHCIICR_SUSPEND_C_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_OHCIICR_SUSPEND_C_Msk instead */
#define SFR_OHCIICR_UDPPUDIS_Pos            23                                             /**< (SFR_OHCIICR) USB DEVICE PULLUP DISABLE Position */
#define SFR_OHCIICR_UDPPUDIS_Msk            (_U_(0x1) << SFR_OHCIICR_UDPPUDIS_Pos)         /**< (SFR_OHCIICR) USB DEVICE PULLUP DISABLE Mask */
#define SFR_OHCIICR_UDPPUDIS                SFR_OHCIICR_UDPPUDIS_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_OHCIICR_UDPPUDIS_Msk instead */
#define SFR_OHCIICR_HSIC_SEL_Pos            27                                             /**< (SFR_OHCIICR) Reserved Position */
#define SFR_OHCIICR_HSIC_SEL_Msk            (_U_(0x1) << SFR_OHCIICR_HSIC_SEL_Pos)         /**< (SFR_OHCIICR) Reserved Mask */
#define SFR_OHCIICR_HSIC_SEL                SFR_OHCIICR_HSIC_SEL_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_OHCIICR_HSIC_SEL_Msk instead */
#define SFR_OHCIICR_MASK                    _U_(0x8800737)                                 /**< \deprecated (SFR_OHCIICR) Register MASK  (Use SFR_OHCIICR_Msk instead)  */
#define SFR_OHCIICR_Msk                     _U_(0x8800737)                                 /**< (SFR_OHCIICR) Register Mask  */

#define SFR_OHCIICR_RES_Pos                 0                                              /**< (SFR_OHCIICR Position) USB PORTx RESET */
#define SFR_OHCIICR_RES_Msk                 (_U_(0x7) << SFR_OHCIICR_RES_Pos)              /**< (SFR_OHCIICR Mask) RES */
#define SFR_OHCIICR_RES(value)              (SFR_OHCIICR_RES_Msk & ((value) << SFR_OHCIICR_RES_Pos))  

/* -------- SFR_OHCIISR : (SFR Offset: 0x14) (R/ 32) OHCI Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RIS0:1;                    /**< bit:      0  OHCI Resume Interrupt Status Port 0      */
    uint32_t RIS1:1;                    /**< bit:      1  OHCI Resume Interrupt Status Port 1      */
    uint32_t RIS2:1;                    /**< bit:      2  OHCI Resume Interrupt Status Port 2      */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t RIS:3;                     /**< bit:   0..2  OHCI Resume Interrupt Status Port 2      */
    uint32_t :29;                       /**< bit:  3..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} SFR_OHCIISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFR_OHCIISR_OFFSET                  (0x14)                                        /**<  (SFR_OHCIISR) OHCI Interrupt Status Register  Offset */

#define SFR_OHCIISR_RIS0_Pos                0                                              /**< (SFR_OHCIISR) OHCI Resume Interrupt Status Port 0 Position */
#define SFR_OHCIISR_RIS0_Msk                (_U_(0x1) << SFR_OHCIISR_RIS0_Pos)             /**< (SFR_OHCIISR) OHCI Resume Interrupt Status Port 0 Mask */
#define SFR_OHCIISR_RIS0                    SFR_OHCIISR_RIS0_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_OHCIISR_RIS0_Msk instead */
#define SFR_OHCIISR_RIS1_Pos                1                                              /**< (SFR_OHCIISR) OHCI Resume Interrupt Status Port 1 Position */
#define SFR_OHCIISR_RIS1_Msk                (_U_(0x1) << SFR_OHCIISR_RIS1_Pos)             /**< (SFR_OHCIISR) OHCI Resume Interrupt Status Port 1 Mask */
#define SFR_OHCIISR_RIS1                    SFR_OHCIISR_RIS1_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_OHCIISR_RIS1_Msk instead */
#define SFR_OHCIISR_RIS2_Pos                2                                              /**< (SFR_OHCIISR) OHCI Resume Interrupt Status Port 2 Position */
#define SFR_OHCIISR_RIS2_Msk                (_U_(0x1) << SFR_OHCIISR_RIS2_Pos)             /**< (SFR_OHCIISR) OHCI Resume Interrupt Status Port 2 Mask */
#define SFR_OHCIISR_RIS2                    SFR_OHCIISR_RIS2_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_OHCIISR_RIS2_Msk instead */
#define SFR_OHCIISR_MASK                    _U_(0x07)                                      /**< \deprecated (SFR_OHCIISR) Register MASK  (Use SFR_OHCIISR_Msk instead)  */
#define SFR_OHCIISR_Msk                     _U_(0x07)                                      /**< (SFR_OHCIISR) Register Mask  */

#define SFR_OHCIISR_RIS_Pos                 0                                              /**< (SFR_OHCIISR Position) OHCI Resume Interrupt Status Port 2 */
#define SFR_OHCIISR_RIS_Msk                 (_U_(0x7) << SFR_OHCIISR_RIS_Pos)              /**< (SFR_OHCIISR Mask) RIS */
#define SFR_OHCIISR_RIS(value)              (SFR_OHCIISR_RIS_Msk & ((value) << SFR_OHCIISR_RIS_Pos))  

/* -------- SFR_SECURE : (SFR Offset: 0x28) (R/W 32) Security Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ROM:1;                     /**< bit:      0  Disable Access to ROM Code               */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t FUSE:1;                    /**< bit:      8  Disable Access to Fuse Controller        */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFR_SECURE_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFR_SECURE_OFFSET                   (0x28)                                        /**<  (SFR_SECURE) Security Configuration Register  Offset */

#define SFR_SECURE_ROM_Pos                  0                                              /**< (SFR_SECURE) Disable Access to ROM Code Position */
#define SFR_SECURE_ROM_Msk                  (_U_(0x1) << SFR_SECURE_ROM_Pos)               /**< (SFR_SECURE) Disable Access to ROM Code Mask */
#define SFR_SECURE_ROM                      SFR_SECURE_ROM_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_SECURE_ROM_Msk instead */
#define SFR_SECURE_FUSE_Pos                 8                                              /**< (SFR_SECURE) Disable Access to Fuse Controller Position */
#define SFR_SECURE_FUSE_Msk                 (_U_(0x1) << SFR_SECURE_FUSE_Pos)              /**< (SFR_SECURE) Disable Access to Fuse Controller Mask */
#define SFR_SECURE_FUSE                     SFR_SECURE_FUSE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_SECURE_FUSE_Msk instead */
#define SFR_SECURE_MASK                     _U_(0x101)                                     /**< \deprecated (SFR_SECURE) Register MASK  (Use SFR_SECURE_Msk instead)  */
#define SFR_SECURE_Msk                      _U_(0x101)                                     /**< (SFR_SECURE) Register Mask  */


/* -------- SFR_UTMICKTRIM : (SFR Offset: 0x30) (R/W 32) UTMI Clock Trimming Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t FREQ:2;                    /**< bit:   0..1  UTMI Reference Clock Frequency           */
    uint32_t :14;                       /**< bit:  2..15  Reserved */
    uint32_t VBG:2;                     /**< bit: 16..17  UTMI Band Gap Voltage Trimming           */
    uint32_t :14;                       /**< bit: 18..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFR_UTMICKTRIM_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFR_UTMICKTRIM_OFFSET               (0x30)                                        /**<  (SFR_UTMICKTRIM) UTMI Clock Trimming Register  Offset */

#define SFR_UTMICKTRIM_FREQ_Pos             0                                              /**< (SFR_UTMICKTRIM) UTMI Reference Clock Frequency Position */
#define SFR_UTMICKTRIM_FREQ_Msk             (_U_(0x3) << SFR_UTMICKTRIM_FREQ_Pos)          /**< (SFR_UTMICKTRIM) UTMI Reference Clock Frequency Mask */
#define SFR_UTMICKTRIM_FREQ(value)          (SFR_UTMICKTRIM_FREQ_Msk & ((value) << SFR_UTMICKTRIM_FREQ_Pos))
#define   SFR_UTMICKTRIM_FREQ_12_Val        _U_(0x0)                                       /**< (SFR_UTMICKTRIM) 12 MHz reference clock  */
#define   SFR_UTMICKTRIM_FREQ_16_Val        _U_(0x1)                                       /**< (SFR_UTMICKTRIM) 16 MHz reference clock  */
#define   SFR_UTMICKTRIM_FREQ_24_Val        _U_(0x2)                                       /**< (SFR_UTMICKTRIM) 24 MHz reference clock  */
#define SFR_UTMICKTRIM_FREQ_12              (SFR_UTMICKTRIM_FREQ_12_Val << SFR_UTMICKTRIM_FREQ_Pos)  /**< (SFR_UTMICKTRIM) 12 MHz reference clock Position  */
#define SFR_UTMICKTRIM_FREQ_16              (SFR_UTMICKTRIM_FREQ_16_Val << SFR_UTMICKTRIM_FREQ_Pos)  /**< (SFR_UTMICKTRIM) 16 MHz reference clock Position  */
#define SFR_UTMICKTRIM_FREQ_24              (SFR_UTMICKTRIM_FREQ_24_Val << SFR_UTMICKTRIM_FREQ_Pos)  /**< (SFR_UTMICKTRIM) 24 MHz reference clock Position  */
#define SFR_UTMICKTRIM_VBG_Pos              16                                             /**< (SFR_UTMICKTRIM) UTMI Band Gap Voltage Trimming Position */
#define SFR_UTMICKTRIM_VBG_Msk              (_U_(0x3) << SFR_UTMICKTRIM_VBG_Pos)           /**< (SFR_UTMICKTRIM) UTMI Band Gap Voltage Trimming Mask */
#define SFR_UTMICKTRIM_VBG(value)           (SFR_UTMICKTRIM_VBG_Msk & ((value) << SFR_UTMICKTRIM_VBG_Pos))
#define SFR_UTMICKTRIM_MASK                 _U_(0x30003)                                   /**< \deprecated (SFR_UTMICKTRIM) Register MASK  (Use SFR_UTMICKTRIM_Msk instead)  */
#define SFR_UTMICKTRIM_Msk                  _U_(0x30003)                                   /**< (SFR_UTMICKTRIM) Register Mask  */


/* -------- SFR_UTMIHSTRIM : (SFR Offset: 0x34) (R/W 32) UTMI High-Speed Trimming Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SQUELCH:3;                 /**< bit:   0..2  UTMI HS SQUELCH Voltage Trimming         */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t DISC:3;                    /**< bit:   4..6  UTMI Disconnect Voltage Trimming         */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t SLOPE0:3;                  /**< bit:  8..10  UTMI HS PORTx Transceiver Slope Trimming */
    uint32_t :1;                        /**< bit:     11  Reserved */
    uint32_t SLOPE1:3;                  /**< bit: 12..14  UTMI HS PORTx Transceiver Slope Trimming */
    uint32_t :1;                        /**< bit:     15  Reserved */
    uint32_t SLOPE2:3;                  /**< bit: 16..18  UTMI HS PORTx Transceiver Slope Trimming */
    uint32_t :13;                       /**< bit: 19..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFR_UTMIHSTRIM_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFR_UTMIHSTRIM_OFFSET               (0x34)                                        /**<  (SFR_UTMIHSTRIM) UTMI High-Speed Trimming Register  Offset */

#define SFR_UTMIHSTRIM_SQUELCH_Pos          0                                              /**< (SFR_UTMIHSTRIM) UTMI HS SQUELCH Voltage Trimming Position */
#define SFR_UTMIHSTRIM_SQUELCH_Msk          (_U_(0x7) << SFR_UTMIHSTRIM_SQUELCH_Pos)       /**< (SFR_UTMIHSTRIM) UTMI HS SQUELCH Voltage Trimming Mask */
#define SFR_UTMIHSTRIM_SQUELCH(value)       (SFR_UTMIHSTRIM_SQUELCH_Msk & ((value) << SFR_UTMIHSTRIM_SQUELCH_Pos))
#define SFR_UTMIHSTRIM_DISC_Pos             4                                              /**< (SFR_UTMIHSTRIM) UTMI Disconnect Voltage Trimming Position */
#define SFR_UTMIHSTRIM_DISC_Msk             (_U_(0x7) << SFR_UTMIHSTRIM_DISC_Pos)          /**< (SFR_UTMIHSTRIM) UTMI Disconnect Voltage Trimming Mask */
#define SFR_UTMIHSTRIM_DISC(value)          (SFR_UTMIHSTRIM_DISC_Msk & ((value) << SFR_UTMIHSTRIM_DISC_Pos))
#define SFR_UTMIHSTRIM_SLOPE0_Pos           8                                              /**< (SFR_UTMIHSTRIM) UTMI HS PORTx Transceiver Slope Trimming Position */
#define SFR_UTMIHSTRIM_SLOPE0_Msk           (_U_(0x7) << SFR_UTMIHSTRIM_SLOPE0_Pos)        /**< (SFR_UTMIHSTRIM) UTMI HS PORTx Transceiver Slope Trimming Mask */
#define SFR_UTMIHSTRIM_SLOPE0(value)        (SFR_UTMIHSTRIM_SLOPE0_Msk & ((value) << SFR_UTMIHSTRIM_SLOPE0_Pos))
#define SFR_UTMIHSTRIM_SLOPE1_Pos           12                                             /**< (SFR_UTMIHSTRIM) UTMI HS PORTx Transceiver Slope Trimming Position */
#define SFR_UTMIHSTRIM_SLOPE1_Msk           (_U_(0x7) << SFR_UTMIHSTRIM_SLOPE1_Pos)        /**< (SFR_UTMIHSTRIM) UTMI HS PORTx Transceiver Slope Trimming Mask */
#define SFR_UTMIHSTRIM_SLOPE1(value)        (SFR_UTMIHSTRIM_SLOPE1_Msk & ((value) << SFR_UTMIHSTRIM_SLOPE1_Pos))
#define SFR_UTMIHSTRIM_SLOPE2_Pos           16                                             /**< (SFR_UTMIHSTRIM) UTMI HS PORTx Transceiver Slope Trimming Position */
#define SFR_UTMIHSTRIM_SLOPE2_Msk           (_U_(0x7) << SFR_UTMIHSTRIM_SLOPE2_Pos)        /**< (SFR_UTMIHSTRIM) UTMI HS PORTx Transceiver Slope Trimming Mask */
#define SFR_UTMIHSTRIM_SLOPE2(value)        (SFR_UTMIHSTRIM_SLOPE2_Msk & ((value) << SFR_UTMIHSTRIM_SLOPE2_Pos))
#define SFR_UTMIHSTRIM_MASK                 _U_(0x77777)                                   /**< \deprecated (SFR_UTMIHSTRIM) Register MASK  (Use SFR_UTMIHSTRIM_Msk instead)  */
#define SFR_UTMIHSTRIM_Msk                  _U_(0x77777)                                   /**< (SFR_UTMIHSTRIM) Register Mask  */


/* -------- SFR_UTMIFSTRIM : (SFR Offset: 0x38) (R/W 32) UTMI Full-Speed Trimming Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RISE:3;                    /**< bit:   0..2  FS Transceiver Output Rising Slope Trimming */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t FALL:3;                    /**< bit:   4..6  FS Transceiver Output Falling Slope Trimming */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t XCVR:2;                    /**< bit:   8..9  FS Transceiver Crossover Voltage Trimming */
    uint32_t :6;                        /**< bit: 10..15  Reserved */
    uint32_t ZN:3;                      /**< bit: 16..18  FS Transceiver NMOS Impedance Trimming   */
    uint32_t :1;                        /**< bit:     19  Reserved */
    uint32_t ZP:3;                      /**< bit: 20..22  FS Transceiver PMOS Impedance Trimming   */
    uint32_t :9;                        /**< bit: 23..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFR_UTMIFSTRIM_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFR_UTMIFSTRIM_OFFSET               (0x38)                                        /**<  (SFR_UTMIFSTRIM) UTMI Full-Speed Trimming Register  Offset */

#define SFR_UTMIFSTRIM_RISE_Pos             0                                              /**< (SFR_UTMIFSTRIM) FS Transceiver Output Rising Slope Trimming Position */
#define SFR_UTMIFSTRIM_RISE_Msk             (_U_(0x7) << SFR_UTMIFSTRIM_RISE_Pos)          /**< (SFR_UTMIFSTRIM) FS Transceiver Output Rising Slope Trimming Mask */
#define SFR_UTMIFSTRIM_RISE(value)          (SFR_UTMIFSTRIM_RISE_Msk & ((value) << SFR_UTMIFSTRIM_RISE_Pos))
#define SFR_UTMIFSTRIM_FALL_Pos             4                                              /**< (SFR_UTMIFSTRIM) FS Transceiver Output Falling Slope Trimming Position */
#define SFR_UTMIFSTRIM_FALL_Msk             (_U_(0x7) << SFR_UTMIFSTRIM_FALL_Pos)          /**< (SFR_UTMIFSTRIM) FS Transceiver Output Falling Slope Trimming Mask */
#define SFR_UTMIFSTRIM_FALL(value)          (SFR_UTMIFSTRIM_FALL_Msk & ((value) << SFR_UTMIFSTRIM_FALL_Pos))
#define SFR_UTMIFSTRIM_XCVR_Pos             8                                              /**< (SFR_UTMIFSTRIM) FS Transceiver Crossover Voltage Trimming Position */
#define SFR_UTMIFSTRIM_XCVR_Msk             (_U_(0x3) << SFR_UTMIFSTRIM_XCVR_Pos)          /**< (SFR_UTMIFSTRIM) FS Transceiver Crossover Voltage Trimming Mask */
#define SFR_UTMIFSTRIM_XCVR(value)          (SFR_UTMIFSTRIM_XCVR_Msk & ((value) << SFR_UTMIFSTRIM_XCVR_Pos))
#define SFR_UTMIFSTRIM_ZN_Pos               16                                             /**< (SFR_UTMIFSTRIM) FS Transceiver NMOS Impedance Trimming Position */
#define SFR_UTMIFSTRIM_ZN_Msk               (_U_(0x7) << SFR_UTMIFSTRIM_ZN_Pos)            /**< (SFR_UTMIFSTRIM) FS Transceiver NMOS Impedance Trimming Mask */
#define SFR_UTMIFSTRIM_ZN(value)            (SFR_UTMIFSTRIM_ZN_Msk & ((value) << SFR_UTMIFSTRIM_ZN_Pos))
#define SFR_UTMIFSTRIM_ZP_Pos               20                                             /**< (SFR_UTMIFSTRIM) FS Transceiver PMOS Impedance Trimming Position */
#define SFR_UTMIFSTRIM_ZP_Msk               (_U_(0x7) << SFR_UTMIFSTRIM_ZP_Pos)            /**< (SFR_UTMIFSTRIM) FS Transceiver PMOS Impedance Trimming Mask */
#define SFR_UTMIFSTRIM_ZP(value)            (SFR_UTMIFSTRIM_ZP_Msk & ((value) << SFR_UTMIFSTRIM_ZP_Pos))
#define SFR_UTMIFSTRIM_MASK                 _U_(0x770377)                                  /**< \deprecated (SFR_UTMIFSTRIM) Register MASK  (Use SFR_UTMIFSTRIM_Msk instead)  */
#define SFR_UTMIFSTRIM_Msk                  _U_(0x770377)                                  /**< (SFR_UTMIFSTRIM) Register Mask  */


/* -------- SFR_UTMISWAP : (SFR Offset: 0x3c) (R/W 32) UTMI DP/DM Pin Swapping Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PORT0:1;                   /**< bit:      0  PORT 0 DP/DM Pin Swapping                */
    uint32_t PORT1:1;                   /**< bit:      1  PORT 1 DP/DM Pin Swapping                */
    uint32_t PORT2:1;                   /**< bit:      2  PORT 2 DP/DM Pin Swapping                */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t PORT:3;                    /**< bit:   0..2  PORT 2 DP/DM Pin Swapping                */
    uint32_t :29;                       /**< bit:  3..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} SFR_UTMISWAP_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFR_UTMISWAP_OFFSET                 (0x3C)                                        /**<  (SFR_UTMISWAP) UTMI DP/DM Pin Swapping Register  Offset */

#define SFR_UTMISWAP_PORT0_Pos              0                                              /**< (SFR_UTMISWAP) PORT 0 DP/DM Pin Swapping Position */
#define SFR_UTMISWAP_PORT0_Msk              (_U_(0x1) << SFR_UTMISWAP_PORT0_Pos)           /**< (SFR_UTMISWAP) PORT 0 DP/DM Pin Swapping Mask */
#define SFR_UTMISWAP_PORT0                  SFR_UTMISWAP_PORT0_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_UTMISWAP_PORT0_Msk instead */
#define   SFR_UTMISWAP_PORT0_NORMAL_Val     _U_(0x0)                                       /**< (SFR_UTMISWAP) DP/DM normal pinout.  */
#define   SFR_UTMISWAP_PORT0_SWAPPED_Val    _U_(0x1)                                       /**< (SFR_UTMISWAP) DP/DM swapped pinout.  */
#define SFR_UTMISWAP_PORT0_NORMAL           (SFR_UTMISWAP_PORT0_NORMAL_Val << SFR_UTMISWAP_PORT0_Pos)  /**< (SFR_UTMISWAP) DP/DM normal pinout. Position  */
#define SFR_UTMISWAP_PORT0_SWAPPED          (SFR_UTMISWAP_PORT0_SWAPPED_Val << SFR_UTMISWAP_PORT0_Pos)  /**< (SFR_UTMISWAP) DP/DM swapped pinout. Position  */
#define SFR_UTMISWAP_PORT1_Pos              1                                              /**< (SFR_UTMISWAP) PORT 1 DP/DM Pin Swapping Position */
#define SFR_UTMISWAP_PORT1_Msk              (_U_(0x1) << SFR_UTMISWAP_PORT1_Pos)           /**< (SFR_UTMISWAP) PORT 1 DP/DM Pin Swapping Mask */
#define SFR_UTMISWAP_PORT1                  SFR_UTMISWAP_PORT1_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_UTMISWAP_PORT1_Msk instead */
#define   SFR_UTMISWAP_PORT1_NORMAL_Val     _U_(0x0)                                       /**< (SFR_UTMISWAP) DP/DM normal pinout.  */
#define   SFR_UTMISWAP_PORT1_SWAPPED_Val    _U_(0x1)                                       /**< (SFR_UTMISWAP) DP/DM swapped pinout.  */
#define SFR_UTMISWAP_PORT1_NORMAL           (SFR_UTMISWAP_PORT1_NORMAL_Val << SFR_UTMISWAP_PORT1_Pos)  /**< (SFR_UTMISWAP) DP/DM normal pinout. Position  */
#define SFR_UTMISWAP_PORT1_SWAPPED          (SFR_UTMISWAP_PORT1_SWAPPED_Val << SFR_UTMISWAP_PORT1_Pos)  /**< (SFR_UTMISWAP) DP/DM swapped pinout. Position  */
#define SFR_UTMISWAP_PORT2_Pos              2                                              /**< (SFR_UTMISWAP) PORT 2 DP/DM Pin Swapping Position */
#define SFR_UTMISWAP_PORT2_Msk              (_U_(0x1) << SFR_UTMISWAP_PORT2_Pos)           /**< (SFR_UTMISWAP) PORT 2 DP/DM Pin Swapping Mask */
#define SFR_UTMISWAP_PORT2                  SFR_UTMISWAP_PORT2_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_UTMISWAP_PORT2_Msk instead */
#define   SFR_UTMISWAP_PORT2_NORMAL_Val     _U_(0x0)                                       /**< (SFR_UTMISWAP) DP/DM normal pinout.  */
#define   SFR_UTMISWAP_PORT2_SWAPPED_Val    _U_(0x1)                                       /**< (SFR_UTMISWAP) DP/DM swapped pinout.  */
#define SFR_UTMISWAP_PORT2_NORMAL           (SFR_UTMISWAP_PORT2_NORMAL_Val << SFR_UTMISWAP_PORT2_Pos)  /**< (SFR_UTMISWAP) DP/DM normal pinout. Position  */
#define SFR_UTMISWAP_PORT2_SWAPPED          (SFR_UTMISWAP_PORT2_SWAPPED_Val << SFR_UTMISWAP_PORT2_Pos)  /**< (SFR_UTMISWAP) DP/DM swapped pinout. Position  */
#define SFR_UTMISWAP_MASK                   _U_(0x07)                                      /**< \deprecated (SFR_UTMISWAP) Register MASK  (Use SFR_UTMISWAP_Msk instead)  */
#define SFR_UTMISWAP_Msk                    _U_(0x07)                                      /**< (SFR_UTMISWAP) Register Mask  */

#define SFR_UTMISWAP_PORT_Pos               0                                              /**< (SFR_UTMISWAP Position) PORT 2 DP/DM Pin Swapping */
#define SFR_UTMISWAP_PORT_Msk               (_U_(0x7) << SFR_UTMISWAP_PORT_Pos)            /**< (SFR_UTMISWAP Mask) PORT */
#define SFR_UTMISWAP_PORT(value)            (SFR_UTMISWAP_PORT_Msk & ((value) << SFR_UTMISWAP_PORT_Pos))  

/* -------- SFR_CAN : (SFR Offset: 0x48) (R/W 32) CAN Memories Address-based Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t EXT_MEM_CAN0_ADDR:16;      /**< bit:  0..15  MSB CAN0 DMA Base Address                */
    uint32_t EXT_MEM_CAN1_ADDR:16;      /**< bit: 16..31  MSB CAN1 DMA Base Address                */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFR_CAN_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFR_CAN_OFFSET                      (0x48)                                        /**<  (SFR_CAN) CAN Memories Address-based Register  Offset */

#define SFR_CAN_EXT_MEM_CAN0_ADDR_Pos       0                                              /**< (SFR_CAN) MSB CAN0 DMA Base Address Position */
#define SFR_CAN_EXT_MEM_CAN0_ADDR_Msk       (_U_(0xFFFF) << SFR_CAN_EXT_MEM_CAN0_ADDR_Pos)  /**< (SFR_CAN) MSB CAN0 DMA Base Address Mask */
#define SFR_CAN_EXT_MEM_CAN0_ADDR(value)    (SFR_CAN_EXT_MEM_CAN0_ADDR_Msk & ((value) << SFR_CAN_EXT_MEM_CAN0_ADDR_Pos))
#define SFR_CAN_EXT_MEM_CAN1_ADDR_Pos       16                                             /**< (SFR_CAN) MSB CAN1 DMA Base Address Position */
#define SFR_CAN_EXT_MEM_CAN1_ADDR_Msk       (_U_(0xFFFF) << SFR_CAN_EXT_MEM_CAN1_ADDR_Pos)  /**< (SFR_CAN) MSB CAN1 DMA Base Address Mask */
#define SFR_CAN_EXT_MEM_CAN1_ADDR(value)    (SFR_CAN_EXT_MEM_CAN1_ADDR_Msk & ((value) << SFR_CAN_EXT_MEM_CAN1_ADDR_Pos))
#define SFR_CAN_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (SFR_CAN) Register MASK  (Use SFR_CAN_Msk instead)  */
#define SFR_CAN_Msk                         _U_(0xFFFFFFFF)                                /**< (SFR_CAN) Register Mask  */


/* -------- SFR_SN0 : (SFR Offset: 0x4c) (R/ 32) Serial Number 0 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SN0:32;                    /**< bit:  0..31  Serial Number 0                          */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFR_SN0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFR_SN0_OFFSET                      (0x4C)                                        /**<  (SFR_SN0) Serial Number 0 Register  Offset */

#define SFR_SN0_SN0_Pos                     0                                              /**< (SFR_SN0) Serial Number 0 Position */
#define SFR_SN0_SN0_Msk                     (_U_(0xFFFFFFFF) << SFR_SN0_SN0_Pos)           /**< (SFR_SN0) Serial Number 0 Mask */
#define SFR_SN0_SN0(value)                  (SFR_SN0_SN0_Msk & ((value) << SFR_SN0_SN0_Pos))
#define SFR_SN0_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (SFR_SN0) Register MASK  (Use SFR_SN0_Msk instead)  */
#define SFR_SN0_Msk                         _U_(0xFFFFFFFF)                                /**< (SFR_SN0) Register Mask  */


/* -------- SFR_SN1 : (SFR Offset: 0x50) (R/ 32) Serial Number 1 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SN1:32;                    /**< bit:  0..31  Serial Number 1                          */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFR_SN1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFR_SN1_OFFSET                      (0x50)                                        /**<  (SFR_SN1) Serial Number 1 Register  Offset */

#define SFR_SN1_SN1_Pos                     0                                              /**< (SFR_SN1) Serial Number 1 Position */
#define SFR_SN1_SN1_Msk                     (_U_(0xFFFFFFFF) << SFR_SN1_SN1_Pos)           /**< (SFR_SN1) Serial Number 1 Mask */
#define SFR_SN1_SN1(value)                  (SFR_SN1_SN1_Msk & ((value) << SFR_SN1_SN1_Pos))
#define SFR_SN1_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (SFR_SN1) Register MASK  (Use SFR_SN1_Msk instead)  */
#define SFR_SN1_Msk                         _U_(0xFFFFFFFF)                                /**< (SFR_SN1) Register Mask  */


/* -------- SFR_AICREDIR : (SFR Offset: 0x54) (R/W 32) AIC Interrupt Redirection Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NSAIC:1;                   /**< bit:      0  Interrupt Redirection to Non-Secure AIC  */
    uint32_t AICREDIRKEY:31;            /**< bit:  1..31  Unlock Key                               */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFR_AICREDIR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFR_AICREDIR_OFFSET                 (0x54)                                        /**<  (SFR_AICREDIR) AIC Interrupt Redirection Register  Offset */

#define SFR_AICREDIR_NSAIC_Pos              0                                              /**< (SFR_AICREDIR) Interrupt Redirection to Non-Secure AIC Position */
#define SFR_AICREDIR_NSAIC_Msk              (_U_(0x1) << SFR_AICREDIR_NSAIC_Pos)           /**< (SFR_AICREDIR) Interrupt Redirection to Non-Secure AIC Mask */
#define SFR_AICREDIR_NSAIC                  SFR_AICREDIR_NSAIC_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_AICREDIR_NSAIC_Msk instead */
#define SFR_AICREDIR_AICREDIRKEY_Pos        1                                              /**< (SFR_AICREDIR) Unlock Key Position */
#define SFR_AICREDIR_AICREDIRKEY_Msk        (_U_(0x7FFFFFFF) << SFR_AICREDIR_AICREDIRKEY_Pos)  /**< (SFR_AICREDIR) Unlock Key Mask */
#define SFR_AICREDIR_AICREDIRKEY(value)     (SFR_AICREDIR_AICREDIRKEY_Msk & ((value) << SFR_AICREDIR_AICREDIRKEY_Pos))
#define SFR_AICREDIR_MASK                   _U_(0xFFFFFFFF)                                /**< \deprecated (SFR_AICREDIR) Register MASK  (Use SFR_AICREDIR_Msk instead)  */
#define SFR_AICREDIR_Msk                    _U_(0xFFFFFFFF)                                /**< (SFR_AICREDIR) Register Mask  */


/* -------- SFR_L2CC_HRAMC : (SFR Offset: 0x58) (R/W 32) L2CC_HRAMC1 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SRAM_SEL:1;                /**< bit:      0  SRAM Selector                            */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFR_L2CC_HRAMC_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFR_L2CC_HRAMC_OFFSET               (0x58)                                        /**<  (SFR_L2CC_HRAMC) L2CC_HRAMC1  Offset */

#define SFR_L2CC_HRAMC_SRAM_SEL_Pos         0                                              /**< (SFR_L2CC_HRAMC) SRAM Selector Position */
#define SFR_L2CC_HRAMC_SRAM_SEL_Msk         (_U_(0x1) << SFR_L2CC_HRAMC_SRAM_SEL_Pos)      /**< (SFR_L2CC_HRAMC) SRAM Selector Mask */
#define SFR_L2CC_HRAMC_SRAM_SEL             SFR_L2CC_HRAMC_SRAM_SEL_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_L2CC_HRAMC_SRAM_SEL_Msk instead */
#define SFR_L2CC_HRAMC_MASK                 _U_(0x01)                                      /**< \deprecated (SFR_L2CC_HRAMC) Register MASK  (Use SFR_L2CC_HRAMC_Msk instead)  */
#define SFR_L2CC_HRAMC_Msk                  _U_(0x01)                                      /**< (SFR_L2CC_HRAMC) Register Mask  */


/* -------- SFR_I2SCLKSEL : (SFR Offset: 0x90) (R/W 32) I2SC Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CLKSEL0:1;                 /**< bit:      0  Clock Selection 0                        */
    uint32_t CLKSEL1:1;                 /**< bit:      1  Clock Selection 1                        */
    uint32_t :30;                       /**< bit:  2..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t CLKSEL:2;                  /**< bit:   0..1  Clock Selection x                        */
    uint32_t :30;                       /**< bit:  2..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} SFR_I2SCLKSEL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFR_I2SCLKSEL_OFFSET                (0x90)                                        /**<  (SFR_I2SCLKSEL) I2SC Register  Offset */

#define SFR_I2SCLKSEL_CLKSEL0_Pos           0                                              /**< (SFR_I2SCLKSEL) Clock Selection 0 Position */
#define SFR_I2SCLKSEL_CLKSEL0_Msk           (_U_(0x1) << SFR_I2SCLKSEL_CLKSEL0_Pos)        /**< (SFR_I2SCLKSEL) Clock Selection 0 Mask */
#define SFR_I2SCLKSEL_CLKSEL0               SFR_I2SCLKSEL_CLKSEL0_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_I2SCLKSEL_CLKSEL0_Msk instead */
#define SFR_I2SCLKSEL_CLKSEL1_Pos           1                                              /**< (SFR_I2SCLKSEL) Clock Selection 1 Position */
#define SFR_I2SCLKSEL_CLKSEL1_Msk           (_U_(0x1) << SFR_I2SCLKSEL_CLKSEL1_Pos)        /**< (SFR_I2SCLKSEL) Clock Selection 1 Mask */
#define SFR_I2SCLKSEL_CLKSEL1               SFR_I2SCLKSEL_CLKSEL1_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_I2SCLKSEL_CLKSEL1_Msk instead */
#define SFR_I2SCLKSEL_MASK                  _U_(0x03)                                      /**< \deprecated (SFR_I2SCLKSEL) Register MASK  (Use SFR_I2SCLKSEL_Msk instead)  */
#define SFR_I2SCLKSEL_Msk                   _U_(0x03)                                      /**< (SFR_I2SCLKSEL) Register Mask  */

#define SFR_I2SCLKSEL_CLKSEL_Pos            0                                              /**< (SFR_I2SCLKSEL Position) Clock Selection x */
#define SFR_I2SCLKSEL_CLKSEL_Msk            (_U_(0x3) << SFR_I2SCLKSEL_CLKSEL_Pos)         /**< (SFR_I2SCLKSEL Mask) CLKSEL */
#define SFR_I2SCLKSEL_CLKSEL(value)         (SFR_I2SCLKSEL_CLKSEL_Msk & ((value) << SFR_I2SCLKSEL_CLKSEL_Pos))  

/* -------- SFR_QSPICLK_REG : (SFR Offset: 0x94) (R/W 32) QSPI Clock Pad Supply Select Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SUP_SEL:1;                 /**< bit:      0  Supply Selection                         */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFR_QSPICLK_REG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFR_QSPICLK_REG_OFFSET              (0x94)                                        /**<  (SFR_QSPICLK_REG) QSPI Clock Pad Supply Select Register  Offset */

#define SFR_QSPICLK_REG_SUP_SEL_Pos         0                                              /**< (SFR_QSPICLK_REG) Supply Selection Position */
#define SFR_QSPICLK_REG_SUP_SEL_Msk         (_U_(0x1) << SFR_QSPICLK_REG_SUP_SEL_Pos)      /**< (SFR_QSPICLK_REG) Supply Selection Mask */
#define SFR_QSPICLK_REG_SUP_SEL             SFR_QSPICLK_REG_SUP_SEL_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFR_QSPICLK_REG_SUP_SEL_Msk instead */
#define SFR_QSPICLK_REG_MASK                _U_(0x01)                                      /**< \deprecated (SFR_QSPICLK_REG) Register MASK  (Use SFR_QSPICLK_REG_Msk instead)  */
#define SFR_QSPICLK_REG_Msk                 _U_(0x01)                                      /**< (SFR_QSPICLK_REG) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief SFR hardware registers */
typedef struct {  
  __I  uint8_t                        Reserved1[4];
  __IO uint32_t SFR_DDRCFG;     /**< (SFR Offset: 0x04) DDR Configuration Register */
  __I  uint8_t                        Reserved2[8];
  __IO uint32_t SFR_OHCIICR;    /**< (SFR Offset: 0x10) OHCI Interrupt Configuration Register */
  __I  uint32_t SFR_OHCIISR;    /**< (SFR Offset: 0x14) OHCI Interrupt Status Register */
  __I  uint8_t                        Reserved3[16];
  __IO uint32_t SFR_SECURE;     /**< (SFR Offset: 0x28) Security Configuration Register */
  __I  uint8_t                        Reserved4[4];
  __IO uint32_t SFR_UTMICKTRIM; /**< (SFR Offset: 0x30) UTMI Clock Trimming Register */
  __IO uint32_t SFR_UTMIHSTRIM; /**< (SFR Offset: 0x34) UTMI High-Speed Trimming Register */
  __IO uint32_t SFR_UTMIFSTRIM; /**< (SFR Offset: 0x38) UTMI Full-Speed Trimming Register */
  __IO uint32_t SFR_UTMISWAP;   /**< (SFR Offset: 0x3C) UTMI DP/DM Pin Swapping Register */
  __I  uint8_t                        Reserved5[8];
  __IO uint32_t SFR_CAN;        /**< (SFR Offset: 0x48) CAN Memories Address-based Register */
  __I  uint32_t SFR_SN0;        /**< (SFR Offset: 0x4C) Serial Number 0 Register */
  __I  uint32_t SFR_SN1;        /**< (SFR Offset: 0x50) Serial Number 1 Register */
  __IO uint32_t SFR_AICREDIR;   /**< (SFR Offset: 0x54) AIC Interrupt Redirection Register */
  __IO uint32_t SFR_L2CC_HRAMC; /**< (SFR Offset: 0x58) L2CC_HRAMC1 */
  __I  uint8_t                        Reserved6[52];
  __IO uint32_t SFR_I2SCLKSEL;  /**< (SFR Offset: 0x90) I2SC Register */
  __IO uint32_t QSPICLK_REG;    /**< (SFR Offset: 0x94) QSPI Clock Pad Supply Select Register */
} Sfr;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief SFR hardware registers */
typedef struct {  
  __I  uint8_t                        Reserved1[4];
  __IO SFR_DDRCFG_Type                SFR_DDRCFG;     /**< Offset: 0x04 (R/W  32) DDR Configuration Register */
  __I  uint8_t                        Reserved2[8];
  __IO SFR_OHCIICR_Type               SFR_OHCIICR;    /**< Offset: 0x10 (R/W  32) OHCI Interrupt Configuration Register */
  __I  SFR_OHCIISR_Type               SFR_OHCIISR;    /**< Offset: 0x14 (R/   32) OHCI Interrupt Status Register */
  __I  uint8_t                        Reserved3[16];
  __IO SFR_SECURE_Type                SFR_SECURE;     /**< Offset: 0x28 (R/W  32) Security Configuration Register */
  __I  uint8_t                        Reserved4[4];
  __IO SFR_UTMICKTRIM_Type            SFR_UTMICKTRIM; /**< Offset: 0x30 (R/W  32) UTMI Clock Trimming Register */
  __IO SFR_UTMIHSTRIM_Type            SFR_UTMIHSTRIM; /**< Offset: 0x34 (R/W  32) UTMI High-Speed Trimming Register */
  __IO SFR_UTMIFSTRIM_Type            SFR_UTMIFSTRIM; /**< Offset: 0x38 (R/W  32) UTMI Full-Speed Trimming Register */
  __IO SFR_UTMISWAP_Type              SFR_UTMISWAP;   /**< Offset: 0x3C (R/W  32) UTMI DP/DM Pin Swapping Register */
  __I  uint8_t                        Reserved5[8];
  __IO SFR_CAN_Type                   SFR_CAN;        /**< Offset: 0x48 (R/W  32) CAN Memories Address-based Register */
  __I  SFR_SN0_Type                   SFR_SN0;        /**< Offset: 0x4C (R/   32) Serial Number 0 Register */
  __I  SFR_SN1_Type                   SFR_SN1;        /**< Offset: 0x50 (R/   32) Serial Number 1 Register */
  __IO SFR_AICREDIR_Type              SFR_AICREDIR;   /**< Offset: 0x54 (R/W  32) AIC Interrupt Redirection Register */
  __IO SFR_L2CC_HRAMC_Type            SFR_L2CC_HRAMC; /**< Offset: 0x58 (R/W  32) L2CC_HRAMC1 */
  __I  uint8_t                        Reserved6[52];
  __IO SFR_I2SCLKSEL_Type             SFR_I2SCLKSEL;  /**< Offset: 0x90 (R/W  32) I2SC Register */
  __IO SFR_QSPICLK_REG_Type           QSPICLK_REG;    /**< Offset: 0x94 (R/W  32) QSPI Clock Pad Supply Select Register */
} Sfr;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Special Function Registers */

#endif /* _SAMA5D2_SFR_COMPONENT_H_ */
