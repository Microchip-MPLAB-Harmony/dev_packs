/**
 * \file
 *
 * \brief Component description for LCDC
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
#ifndef _SAMA5D2_LCDC_COMPONENT_H_
#define _SAMA5D2_LCDC_COMPONENT_H_
#define _SAMA5D2_LCDC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 LCD Controller
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR LCDC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define LCDC_11062                      /**< (LCDC) Module ID */
#define REV_LCDC P                      /**< (LCDC) Module revision */

/* -------- LCDC_LCDCFG0 : (LCDC Offset: 0x00) (R/W 32) LCD Controller Configuration Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CLKPOL:1;                  /**< bit:      0  LCD Controller Clock Polarity            */
    uint32_t :1;                        /**< bit:      1  Reserved */
    uint32_t CLKSEL:1;                  /**< bit:      2  LCD Controller Clock Source Selection    */
    uint32_t CLKPWMSEL:1;               /**< bit:      3  LCD Controller PWM Clock Source Selection */
    uint32_t :4;                        /**< bit:   4..7  Reserved */
    uint32_t CGDISBASE:1;               /**< bit:      8  Clock Gating Disable Control for the Base Layer */
    uint32_t CGDISOVR1:1;               /**< bit:      9  Clock Gating Disable Control for the Overlay 1 Layer */
    uint32_t CGDISOVR2:1;               /**< bit:     10  Clock Gating Disable Control for the Overlay 2 Layer */
    uint32_t CGDISHEO:1;                /**< bit:     11  Clock Gating Disable Control for the High-End Overlay */
    uint32_t :1;                        /**< bit:     12  Reserved */
    uint32_t CGDISPP:1;                 /**< bit:     13  Clock Gating Disable Control for the Post Processing Layer */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t CLKDIV:8;                  /**< bit: 16..23  LCD Controller Clock Divider             */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :9;                        /**< bit:   0..8  Reserved */
    uint32_t CGDISOVR:2;                /**< bit:  9..10  Clock Gating Disable Control for the Overlay x Layer */
    uint32_t :21;                       /**< bit: 11..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_LCDCFG0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_LCDCFG0_OFFSET                 (0x00)                                        /**<  (LCDC_LCDCFG0) LCD Controller Configuration Register 0  Offset */

#define LCDC_LCDCFG0_CLKPOL_Pos             0                                              /**< (LCDC_LCDCFG0) LCD Controller Clock Polarity Position */
#define LCDC_LCDCFG0_CLKPOL_Msk             (_U_(0x1) << LCDC_LCDCFG0_CLKPOL_Pos)          /**< (LCDC_LCDCFG0) LCD Controller Clock Polarity Mask */
#define LCDC_LCDCFG0_CLKPOL                 LCDC_LCDCFG0_CLKPOL_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDCFG0_CLKPOL_Msk instead */
#define LCDC_LCDCFG0_CLKSEL_Pos             2                                              /**< (LCDC_LCDCFG0) LCD Controller Clock Source Selection Position */
#define LCDC_LCDCFG0_CLKSEL_Msk             (_U_(0x1) << LCDC_LCDCFG0_CLKSEL_Pos)          /**< (LCDC_LCDCFG0) LCD Controller Clock Source Selection Mask */
#define LCDC_LCDCFG0_CLKSEL                 LCDC_LCDCFG0_CLKSEL_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDCFG0_CLKSEL_Msk instead */
#define LCDC_LCDCFG0_CLKPWMSEL_Pos          3                                              /**< (LCDC_LCDCFG0) LCD Controller PWM Clock Source Selection Position */
#define LCDC_LCDCFG0_CLKPWMSEL_Msk          (_U_(0x1) << LCDC_LCDCFG0_CLKPWMSEL_Pos)       /**< (LCDC_LCDCFG0) LCD Controller PWM Clock Source Selection Mask */
#define LCDC_LCDCFG0_CLKPWMSEL              LCDC_LCDCFG0_CLKPWMSEL_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDCFG0_CLKPWMSEL_Msk instead */
#define LCDC_LCDCFG0_CGDISBASE_Pos          8                                              /**< (LCDC_LCDCFG0) Clock Gating Disable Control for the Base Layer Position */
#define LCDC_LCDCFG0_CGDISBASE_Msk          (_U_(0x1) << LCDC_LCDCFG0_CGDISBASE_Pos)       /**< (LCDC_LCDCFG0) Clock Gating Disable Control for the Base Layer Mask */
#define LCDC_LCDCFG0_CGDISBASE              LCDC_LCDCFG0_CGDISBASE_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDCFG0_CGDISBASE_Msk instead */
#define LCDC_LCDCFG0_CGDISOVR1_Pos          9                                              /**< (LCDC_LCDCFG0) Clock Gating Disable Control for the Overlay 1 Layer Position */
#define LCDC_LCDCFG0_CGDISOVR1_Msk          (_U_(0x1) << LCDC_LCDCFG0_CGDISOVR1_Pos)       /**< (LCDC_LCDCFG0) Clock Gating Disable Control for the Overlay 1 Layer Mask */
#define LCDC_LCDCFG0_CGDISOVR1              LCDC_LCDCFG0_CGDISOVR1_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDCFG0_CGDISOVR1_Msk instead */
#define LCDC_LCDCFG0_CGDISOVR2_Pos          10                                             /**< (LCDC_LCDCFG0) Clock Gating Disable Control for the Overlay 2 Layer Position */
#define LCDC_LCDCFG0_CGDISOVR2_Msk          (_U_(0x1) << LCDC_LCDCFG0_CGDISOVR2_Pos)       /**< (LCDC_LCDCFG0) Clock Gating Disable Control for the Overlay 2 Layer Mask */
#define LCDC_LCDCFG0_CGDISOVR2              LCDC_LCDCFG0_CGDISOVR2_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDCFG0_CGDISOVR2_Msk instead */
#define LCDC_LCDCFG0_CGDISHEO_Pos           11                                             /**< (LCDC_LCDCFG0) Clock Gating Disable Control for the High-End Overlay Position */
#define LCDC_LCDCFG0_CGDISHEO_Msk           (_U_(0x1) << LCDC_LCDCFG0_CGDISHEO_Pos)        /**< (LCDC_LCDCFG0) Clock Gating Disable Control for the High-End Overlay Mask */
#define LCDC_LCDCFG0_CGDISHEO               LCDC_LCDCFG0_CGDISHEO_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDCFG0_CGDISHEO_Msk instead */
#define LCDC_LCDCFG0_CGDISPP_Pos            13                                             /**< (LCDC_LCDCFG0) Clock Gating Disable Control for the Post Processing Layer Position */
#define LCDC_LCDCFG0_CGDISPP_Msk            (_U_(0x1) << LCDC_LCDCFG0_CGDISPP_Pos)         /**< (LCDC_LCDCFG0) Clock Gating Disable Control for the Post Processing Layer Mask */
#define LCDC_LCDCFG0_CGDISPP                LCDC_LCDCFG0_CGDISPP_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDCFG0_CGDISPP_Msk instead */
#define LCDC_LCDCFG0_CLKDIV_Pos             16                                             /**< (LCDC_LCDCFG0) LCD Controller Clock Divider Position */
#define LCDC_LCDCFG0_CLKDIV_Msk             (_U_(0xFF) << LCDC_LCDCFG0_CLKDIV_Pos)         /**< (LCDC_LCDCFG0) LCD Controller Clock Divider Mask */
#define LCDC_LCDCFG0_CLKDIV(value)          (LCDC_LCDCFG0_CLKDIV_Msk & ((value) << LCDC_LCDCFG0_CLKDIV_Pos))
#define LCDC_LCDCFG0_MASK                   _U_(0xFF2F0D)                                  /**< \deprecated (LCDC_LCDCFG0) Register MASK  (Use LCDC_LCDCFG0_Msk instead)  */
#define LCDC_LCDCFG0_Msk                    _U_(0xFF2F0D)                                  /**< (LCDC_LCDCFG0) Register Mask  */

#define LCDC_LCDCFG0_CGDISOVR_Pos           9                                              /**< (LCDC_LCDCFG0 Position) Clock Gating Disable Control for the Overlay x Layer */
#define LCDC_LCDCFG0_CGDISOVR_Msk           (_U_(0x3) << LCDC_LCDCFG0_CGDISOVR_Pos)        /**< (LCDC_LCDCFG0 Mask) CGDISOVR */
#define LCDC_LCDCFG0_CGDISOVR(value)        (LCDC_LCDCFG0_CGDISOVR_Msk & ((value) << LCDC_LCDCFG0_CGDISOVR_Pos))  

/* -------- LCDC_LCDCFG1 : (LCDC Offset: 0x04) (R/W 32) LCD Controller Configuration Register 1 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t HSPW:10;                   /**< bit:   0..9  Horizontal Synchronization Pulse Width   */
    uint32_t :6;                        /**< bit: 10..15  Reserved */
    uint32_t VSPW:10;                   /**< bit: 16..25  Vertical Synchronization Pulse Width     */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_LCDCFG1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_LCDCFG1_OFFSET                 (0x04)                                        /**<  (LCDC_LCDCFG1) LCD Controller Configuration Register 1  Offset */

#define LCDC_LCDCFG1_HSPW_Pos               0                                              /**< (LCDC_LCDCFG1) Horizontal Synchronization Pulse Width Position */
#define LCDC_LCDCFG1_HSPW_Msk               (_U_(0x3FF) << LCDC_LCDCFG1_HSPW_Pos)          /**< (LCDC_LCDCFG1) Horizontal Synchronization Pulse Width Mask */
#define LCDC_LCDCFG1_HSPW(value)            (LCDC_LCDCFG1_HSPW_Msk & ((value) << LCDC_LCDCFG1_HSPW_Pos))
#define LCDC_LCDCFG1_VSPW_Pos               16                                             /**< (LCDC_LCDCFG1) Vertical Synchronization Pulse Width Position */
#define LCDC_LCDCFG1_VSPW_Msk               (_U_(0x3FF) << LCDC_LCDCFG1_VSPW_Pos)          /**< (LCDC_LCDCFG1) Vertical Synchronization Pulse Width Mask */
#define LCDC_LCDCFG1_VSPW(value)            (LCDC_LCDCFG1_VSPW_Msk & ((value) << LCDC_LCDCFG1_VSPW_Pos))
#define LCDC_LCDCFG1_MASK                   _U_(0x3FF03FF)                                 /**< \deprecated (LCDC_LCDCFG1) Register MASK  (Use LCDC_LCDCFG1_Msk instead)  */
#define LCDC_LCDCFG1_Msk                    _U_(0x3FF03FF)                                 /**< (LCDC_LCDCFG1) Register Mask  */


/* -------- LCDC_LCDCFG2 : (LCDC Offset: 0x08) (R/W 32) LCD Controller Configuration Register 2 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t VFPW:10;                   /**< bit:   0..9  Vertical Front Porch Width               */
    uint32_t :6;                        /**< bit: 10..15  Reserved */
    uint32_t VBPW:10;                   /**< bit: 16..25  Vertical Back Porch Width                */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_LCDCFG2_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_LCDCFG2_OFFSET                 (0x08)                                        /**<  (LCDC_LCDCFG2) LCD Controller Configuration Register 2  Offset */

#define LCDC_LCDCFG2_VFPW_Pos               0                                              /**< (LCDC_LCDCFG2) Vertical Front Porch Width Position */
#define LCDC_LCDCFG2_VFPW_Msk               (_U_(0x3FF) << LCDC_LCDCFG2_VFPW_Pos)          /**< (LCDC_LCDCFG2) Vertical Front Porch Width Mask */
#define LCDC_LCDCFG2_VFPW(value)            (LCDC_LCDCFG2_VFPW_Msk & ((value) << LCDC_LCDCFG2_VFPW_Pos))
#define LCDC_LCDCFG2_VBPW_Pos               16                                             /**< (LCDC_LCDCFG2) Vertical Back Porch Width Position */
#define LCDC_LCDCFG2_VBPW_Msk               (_U_(0x3FF) << LCDC_LCDCFG2_VBPW_Pos)          /**< (LCDC_LCDCFG2) Vertical Back Porch Width Mask */
#define LCDC_LCDCFG2_VBPW(value)            (LCDC_LCDCFG2_VBPW_Msk & ((value) << LCDC_LCDCFG2_VBPW_Pos))
#define LCDC_LCDCFG2_MASK                   _U_(0x3FF03FF)                                 /**< \deprecated (LCDC_LCDCFG2) Register MASK  (Use LCDC_LCDCFG2_Msk instead)  */
#define LCDC_LCDCFG2_Msk                    _U_(0x3FF03FF)                                 /**< (LCDC_LCDCFG2) Register Mask  */


/* -------- LCDC_LCDCFG3 : (LCDC Offset: 0x0c) (R/W 32) LCD Controller Configuration Register 3 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t HFPW:10;                   /**< bit:   0..9  Horizontal Front Porch Width             */
    uint32_t :6;                        /**< bit: 10..15  Reserved */
    uint32_t HBPW:10;                   /**< bit: 16..25  Horizontal Back Porch Width              */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_LCDCFG3_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_LCDCFG3_OFFSET                 (0x0C)                                        /**<  (LCDC_LCDCFG3) LCD Controller Configuration Register 3  Offset */

#define LCDC_LCDCFG3_HFPW_Pos               0                                              /**< (LCDC_LCDCFG3) Horizontal Front Porch Width Position */
#define LCDC_LCDCFG3_HFPW_Msk               (_U_(0x3FF) << LCDC_LCDCFG3_HFPW_Pos)          /**< (LCDC_LCDCFG3) Horizontal Front Porch Width Mask */
#define LCDC_LCDCFG3_HFPW(value)            (LCDC_LCDCFG3_HFPW_Msk & ((value) << LCDC_LCDCFG3_HFPW_Pos))
#define LCDC_LCDCFG3_HBPW_Pos               16                                             /**< (LCDC_LCDCFG3) Horizontal Back Porch Width Position */
#define LCDC_LCDCFG3_HBPW_Msk               (_U_(0x3FF) << LCDC_LCDCFG3_HBPW_Pos)          /**< (LCDC_LCDCFG3) Horizontal Back Porch Width Mask */
#define LCDC_LCDCFG3_HBPW(value)            (LCDC_LCDCFG3_HBPW_Msk & ((value) << LCDC_LCDCFG3_HBPW_Pos))
#define LCDC_LCDCFG3_MASK                   _U_(0x3FF03FF)                                 /**< \deprecated (LCDC_LCDCFG3) Register MASK  (Use LCDC_LCDCFG3_Msk instead)  */
#define LCDC_LCDCFG3_Msk                    _U_(0x3FF03FF)                                 /**< (LCDC_LCDCFG3) Register Mask  */


/* -------- LCDC_LCDCFG4 : (LCDC Offset: 0x10) (R/W 32) LCD Controller Configuration Register 4 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PPL:11;                    /**< bit:  0..10  Number of Pixels Per Line                */
    uint32_t :5;                        /**< bit: 11..15  Reserved */
    uint32_t RPF:11;                    /**< bit: 16..26  Number of Active Row Per Frame           */
    uint32_t :5;                        /**< bit: 27..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_LCDCFG4_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_LCDCFG4_OFFSET                 (0x10)                                        /**<  (LCDC_LCDCFG4) LCD Controller Configuration Register 4  Offset */

#define LCDC_LCDCFG4_PPL_Pos                0                                              /**< (LCDC_LCDCFG4) Number of Pixels Per Line Position */
#define LCDC_LCDCFG4_PPL_Msk                (_U_(0x7FF) << LCDC_LCDCFG4_PPL_Pos)           /**< (LCDC_LCDCFG4) Number of Pixels Per Line Mask */
#define LCDC_LCDCFG4_PPL(value)             (LCDC_LCDCFG4_PPL_Msk & ((value) << LCDC_LCDCFG4_PPL_Pos))
#define LCDC_LCDCFG4_RPF_Pos                16                                             /**< (LCDC_LCDCFG4) Number of Active Row Per Frame Position */
#define LCDC_LCDCFG4_RPF_Msk                (_U_(0x7FF) << LCDC_LCDCFG4_RPF_Pos)           /**< (LCDC_LCDCFG4) Number of Active Row Per Frame Mask */
#define LCDC_LCDCFG4_RPF(value)             (LCDC_LCDCFG4_RPF_Msk & ((value) << LCDC_LCDCFG4_RPF_Pos))
#define LCDC_LCDCFG4_MASK                   _U_(0x7FF07FF)                                 /**< \deprecated (LCDC_LCDCFG4) Register MASK  (Use LCDC_LCDCFG4_Msk instead)  */
#define LCDC_LCDCFG4_Msk                    _U_(0x7FF07FF)                                 /**< (LCDC_LCDCFG4) Register Mask  */


/* -------- LCDC_LCDCFG5 : (LCDC Offset: 0x14) (R/W 32) LCD Controller Configuration Register 5 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t HSPOL:1;                   /**< bit:      0  Horizontal Synchronization Pulse Polarity */
    uint32_t VSPOL:1;                   /**< bit:      1  Vertical Synchronization Pulse Polarity  */
    uint32_t VSPDLYS:1;                 /**< bit:      2  Vertical Synchronization Pulse Start     */
    uint32_t VSPDLYE:1;                 /**< bit:      3  Vertical Synchronization Pulse End       */
    uint32_t DISPPOL:1;                 /**< bit:      4  Display Signal Polarity                  */
    uint32_t :1;                        /**< bit:      5  Reserved */
    uint32_t DITHER:1;                  /**< bit:      6  LCD Controller Dithering                 */
    uint32_t DISPDLY:1;                 /**< bit:      7  LCD Controller Display Power Signal Synchronization */
    uint32_t MODE:2;                    /**< bit:   8..9  LCD Controller Output Mode               */
    uint32_t PP:1;                      /**< bit:     10  Post Processing Enable                   */
    uint32_t :1;                        /**< bit:     11  Reserved */
    uint32_t VSPSU:1;                   /**< bit:     12  LCD Controller Vertical synchronization Pulse Setup Configuration */
    uint32_t VSPHO:1;                   /**< bit:     13  LCD Controller Vertical synchronization Pulse Hold Configuration */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t GUARDTIME:8;               /**< bit: 16..23  LCD DISPLAY Guard Time                   */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_LCDCFG5_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_LCDCFG5_OFFSET                 (0x14)                                        /**<  (LCDC_LCDCFG5) LCD Controller Configuration Register 5  Offset */

#define LCDC_LCDCFG5_HSPOL_Pos              0                                              /**< (LCDC_LCDCFG5) Horizontal Synchronization Pulse Polarity Position */
#define LCDC_LCDCFG5_HSPOL_Msk              (_U_(0x1) << LCDC_LCDCFG5_HSPOL_Pos)           /**< (LCDC_LCDCFG5) Horizontal Synchronization Pulse Polarity Mask */
#define LCDC_LCDCFG5_HSPOL                  LCDC_LCDCFG5_HSPOL_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDCFG5_HSPOL_Msk instead */
#define LCDC_LCDCFG5_VSPOL_Pos              1                                              /**< (LCDC_LCDCFG5) Vertical Synchronization Pulse Polarity Position */
#define LCDC_LCDCFG5_VSPOL_Msk              (_U_(0x1) << LCDC_LCDCFG5_VSPOL_Pos)           /**< (LCDC_LCDCFG5) Vertical Synchronization Pulse Polarity Mask */
#define LCDC_LCDCFG5_VSPOL                  LCDC_LCDCFG5_VSPOL_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDCFG5_VSPOL_Msk instead */
#define LCDC_LCDCFG5_VSPDLYS_Pos            2                                              /**< (LCDC_LCDCFG5) Vertical Synchronization Pulse Start Position */
#define LCDC_LCDCFG5_VSPDLYS_Msk            (_U_(0x1) << LCDC_LCDCFG5_VSPDLYS_Pos)         /**< (LCDC_LCDCFG5) Vertical Synchronization Pulse Start Mask */
#define LCDC_LCDCFG5_VSPDLYS                LCDC_LCDCFG5_VSPDLYS_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDCFG5_VSPDLYS_Msk instead */
#define LCDC_LCDCFG5_VSPDLYE_Pos            3                                              /**< (LCDC_LCDCFG5) Vertical Synchronization Pulse End Position */
#define LCDC_LCDCFG5_VSPDLYE_Msk            (_U_(0x1) << LCDC_LCDCFG5_VSPDLYE_Pos)         /**< (LCDC_LCDCFG5) Vertical Synchronization Pulse End Mask */
#define LCDC_LCDCFG5_VSPDLYE                LCDC_LCDCFG5_VSPDLYE_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDCFG5_VSPDLYE_Msk instead */
#define LCDC_LCDCFG5_DISPPOL_Pos            4                                              /**< (LCDC_LCDCFG5) Display Signal Polarity Position */
#define LCDC_LCDCFG5_DISPPOL_Msk            (_U_(0x1) << LCDC_LCDCFG5_DISPPOL_Pos)         /**< (LCDC_LCDCFG5) Display Signal Polarity Mask */
#define LCDC_LCDCFG5_DISPPOL                LCDC_LCDCFG5_DISPPOL_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDCFG5_DISPPOL_Msk instead */
#define LCDC_LCDCFG5_DITHER_Pos             6                                              /**< (LCDC_LCDCFG5) LCD Controller Dithering Position */
#define LCDC_LCDCFG5_DITHER_Msk             (_U_(0x1) << LCDC_LCDCFG5_DITHER_Pos)          /**< (LCDC_LCDCFG5) LCD Controller Dithering Mask */
#define LCDC_LCDCFG5_DITHER                 LCDC_LCDCFG5_DITHER_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDCFG5_DITHER_Msk instead */
#define LCDC_LCDCFG5_DISPDLY_Pos            7                                              /**< (LCDC_LCDCFG5) LCD Controller Display Power Signal Synchronization Position */
#define LCDC_LCDCFG5_DISPDLY_Msk            (_U_(0x1) << LCDC_LCDCFG5_DISPDLY_Pos)         /**< (LCDC_LCDCFG5) LCD Controller Display Power Signal Synchronization Mask */
#define LCDC_LCDCFG5_DISPDLY                LCDC_LCDCFG5_DISPDLY_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDCFG5_DISPDLY_Msk instead */
#define LCDC_LCDCFG5_MODE_Pos               8                                              /**< (LCDC_LCDCFG5) LCD Controller Output Mode Position */
#define LCDC_LCDCFG5_MODE_Msk               (_U_(0x3) << LCDC_LCDCFG5_MODE_Pos)            /**< (LCDC_LCDCFG5) LCD Controller Output Mode Mask */
#define LCDC_LCDCFG5_MODE(value)            (LCDC_LCDCFG5_MODE_Msk & ((value) << LCDC_LCDCFG5_MODE_Pos))
#define   LCDC_LCDCFG5_MODE_OUTPUT_12BPP_Val _U_(0x0)                                       /**< (LCDC_LCDCFG5) LCD Output mode is set to 12 bits per pixel  */
#define   LCDC_LCDCFG5_MODE_OUTPUT_16BPP_Val _U_(0x1)                                       /**< (LCDC_LCDCFG5) LCD Output mode is set to 16 bits per pixel  */
#define   LCDC_LCDCFG5_MODE_OUTPUT_18BPP_Val _U_(0x2)                                       /**< (LCDC_LCDCFG5) LCD Output mode is set to 18 bits per pixel  */
#define   LCDC_LCDCFG5_MODE_OUTPUT_24BPP_Val _U_(0x3)                                       /**< (LCDC_LCDCFG5) LCD Output mode is set to 24 bits per pixel  */
#define LCDC_LCDCFG5_MODE_OUTPUT_12BPP      (LCDC_LCDCFG5_MODE_OUTPUT_12BPP_Val << LCDC_LCDCFG5_MODE_Pos)  /**< (LCDC_LCDCFG5) LCD Output mode is set to 12 bits per pixel Position  */
#define LCDC_LCDCFG5_MODE_OUTPUT_16BPP      (LCDC_LCDCFG5_MODE_OUTPUT_16BPP_Val << LCDC_LCDCFG5_MODE_Pos)  /**< (LCDC_LCDCFG5) LCD Output mode is set to 16 bits per pixel Position  */
#define LCDC_LCDCFG5_MODE_OUTPUT_18BPP      (LCDC_LCDCFG5_MODE_OUTPUT_18BPP_Val << LCDC_LCDCFG5_MODE_Pos)  /**< (LCDC_LCDCFG5) LCD Output mode is set to 18 bits per pixel Position  */
#define LCDC_LCDCFG5_MODE_OUTPUT_24BPP      (LCDC_LCDCFG5_MODE_OUTPUT_24BPP_Val << LCDC_LCDCFG5_MODE_Pos)  /**< (LCDC_LCDCFG5) LCD Output mode is set to 24 bits per pixel Position  */
#define LCDC_LCDCFG5_PP_Pos                 10                                             /**< (LCDC_LCDCFG5) Post Processing Enable Position */
#define LCDC_LCDCFG5_PP_Msk                 (_U_(0x1) << LCDC_LCDCFG5_PP_Pos)              /**< (LCDC_LCDCFG5) Post Processing Enable Mask */
#define LCDC_LCDCFG5_PP                     LCDC_LCDCFG5_PP_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDCFG5_PP_Msk instead */
#define LCDC_LCDCFG5_VSPSU_Pos              12                                             /**< (LCDC_LCDCFG5) LCD Controller Vertical synchronization Pulse Setup Configuration Position */
#define LCDC_LCDCFG5_VSPSU_Msk              (_U_(0x1) << LCDC_LCDCFG5_VSPSU_Pos)           /**< (LCDC_LCDCFG5) LCD Controller Vertical synchronization Pulse Setup Configuration Mask */
#define LCDC_LCDCFG5_VSPSU                  LCDC_LCDCFG5_VSPSU_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDCFG5_VSPSU_Msk instead */
#define LCDC_LCDCFG5_VSPHO_Pos              13                                             /**< (LCDC_LCDCFG5) LCD Controller Vertical synchronization Pulse Hold Configuration Position */
#define LCDC_LCDCFG5_VSPHO_Msk              (_U_(0x1) << LCDC_LCDCFG5_VSPHO_Pos)           /**< (LCDC_LCDCFG5) LCD Controller Vertical synchronization Pulse Hold Configuration Mask */
#define LCDC_LCDCFG5_VSPHO                  LCDC_LCDCFG5_VSPHO_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDCFG5_VSPHO_Msk instead */
#define LCDC_LCDCFG5_GUARDTIME_Pos          16                                             /**< (LCDC_LCDCFG5) LCD DISPLAY Guard Time Position */
#define LCDC_LCDCFG5_GUARDTIME_Msk          (_U_(0xFF) << LCDC_LCDCFG5_GUARDTIME_Pos)      /**< (LCDC_LCDCFG5) LCD DISPLAY Guard Time Mask */
#define LCDC_LCDCFG5_GUARDTIME(value)       (LCDC_LCDCFG5_GUARDTIME_Msk & ((value) << LCDC_LCDCFG5_GUARDTIME_Pos))
#define LCDC_LCDCFG5_MASK                   _U_(0xFF37DF)                                  /**< \deprecated (LCDC_LCDCFG5) Register MASK  (Use LCDC_LCDCFG5_Msk instead)  */
#define LCDC_LCDCFG5_Msk                    _U_(0xFF37DF)                                  /**< (LCDC_LCDCFG5) Register Mask  */


/* -------- LCDC_LCDCFG6 : (LCDC Offset: 0x18) (R/W 32) LCD Controller Configuration Register 6 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PWMPS:3;                   /**< bit:   0..2  PWM Clock Prescaler                      */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t PWMPOL:1;                  /**< bit:      4  LCD Controller PWM Signal Polarity       */
    uint32_t :3;                        /**< bit:   5..7  Reserved */
    uint32_t PWMCVAL:8;                 /**< bit:  8..15  LCD Controller PWM Compare Value         */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_LCDCFG6_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_LCDCFG6_OFFSET                 (0x18)                                        /**<  (LCDC_LCDCFG6) LCD Controller Configuration Register 6  Offset */

#define LCDC_LCDCFG6_PWMPS_Pos              0                                              /**< (LCDC_LCDCFG6) PWM Clock Prescaler Position */
#define LCDC_LCDCFG6_PWMPS_Msk              (_U_(0x7) << LCDC_LCDCFG6_PWMPS_Pos)           /**< (LCDC_LCDCFG6) PWM Clock Prescaler Mask */
#define LCDC_LCDCFG6_PWMPS(value)           (LCDC_LCDCFG6_PWMPS_Msk & ((value) << LCDC_LCDCFG6_PWMPS_Pos))
#define   LCDC_LCDCFG6_PWMPS_DIV_1_Val      _U_(0x0)                                       /**< (LCDC_LCDCFG6) The counter advances at a rate of fCOUNTER = fPWM_SELECTED_CLOCK  */
#define   LCDC_LCDCFG6_PWMPS_DIV_2_Val      _U_(0x1)                                       /**< (LCDC_LCDCFG6) The counter advances at a rate of fCOUNTER = fPWM_SELECTED_CLOCK/2  */
#define   LCDC_LCDCFG6_PWMPS_DIV_4_Val      _U_(0x2)                                       /**< (LCDC_LCDCFG6) The counter advances at a rate of fCOUNTER = fPWM_SELECTED_CLOCK/4  */
#define   LCDC_LCDCFG6_PWMPS_DIV_8_Val      _U_(0x3)                                       /**< (LCDC_LCDCFG6) The counter advances at a rate of fCOUNTER = fPWM_SELECTED_CLOCK/8  */
#define   LCDC_LCDCFG6_PWMPS_DIV_16_Val     _U_(0x4)                                       /**< (LCDC_LCDCFG6) The counter advances at a rate of fCOUNTER = fPWM_SELECTED_CLOCK/16  */
#define   LCDC_LCDCFG6_PWMPS_DIV_32_Val     _U_(0x5)                                       /**< (LCDC_LCDCFG6) The counter advances at a of rate fCOUNTER = fPWM_SELECTED_CLOCK/32  */
#define   LCDC_LCDCFG6_PWMPS_DIV_64_Val     _U_(0x6)                                       /**< (LCDC_LCDCFG6) The counter advances at a of rate fCOUNTER = fPWM_SELECTED_CLOCK/64  */
#define LCDC_LCDCFG6_PWMPS_DIV_1            (LCDC_LCDCFG6_PWMPS_DIV_1_Val << LCDC_LCDCFG6_PWMPS_Pos)  /**< (LCDC_LCDCFG6) The counter advances at a rate of fCOUNTER = fPWM_SELECTED_CLOCK Position  */
#define LCDC_LCDCFG6_PWMPS_DIV_2            (LCDC_LCDCFG6_PWMPS_DIV_2_Val << LCDC_LCDCFG6_PWMPS_Pos)  /**< (LCDC_LCDCFG6) The counter advances at a rate of fCOUNTER = fPWM_SELECTED_CLOCK/2 Position  */
#define LCDC_LCDCFG6_PWMPS_DIV_4            (LCDC_LCDCFG6_PWMPS_DIV_4_Val << LCDC_LCDCFG6_PWMPS_Pos)  /**< (LCDC_LCDCFG6) The counter advances at a rate of fCOUNTER = fPWM_SELECTED_CLOCK/4 Position  */
#define LCDC_LCDCFG6_PWMPS_DIV_8            (LCDC_LCDCFG6_PWMPS_DIV_8_Val << LCDC_LCDCFG6_PWMPS_Pos)  /**< (LCDC_LCDCFG6) The counter advances at a rate of fCOUNTER = fPWM_SELECTED_CLOCK/8 Position  */
#define LCDC_LCDCFG6_PWMPS_DIV_16           (LCDC_LCDCFG6_PWMPS_DIV_16_Val << LCDC_LCDCFG6_PWMPS_Pos)  /**< (LCDC_LCDCFG6) The counter advances at a rate of fCOUNTER = fPWM_SELECTED_CLOCK/16 Position  */
#define LCDC_LCDCFG6_PWMPS_DIV_32           (LCDC_LCDCFG6_PWMPS_DIV_32_Val << LCDC_LCDCFG6_PWMPS_Pos)  /**< (LCDC_LCDCFG6) The counter advances at a of rate fCOUNTER = fPWM_SELECTED_CLOCK/32 Position  */
#define LCDC_LCDCFG6_PWMPS_DIV_64           (LCDC_LCDCFG6_PWMPS_DIV_64_Val << LCDC_LCDCFG6_PWMPS_Pos)  /**< (LCDC_LCDCFG6) The counter advances at a of rate fCOUNTER = fPWM_SELECTED_CLOCK/64 Position  */
#define LCDC_LCDCFG6_PWMPOL_Pos             4                                              /**< (LCDC_LCDCFG6) LCD Controller PWM Signal Polarity Position */
#define LCDC_LCDCFG6_PWMPOL_Msk             (_U_(0x1) << LCDC_LCDCFG6_PWMPOL_Pos)          /**< (LCDC_LCDCFG6) LCD Controller PWM Signal Polarity Mask */
#define LCDC_LCDCFG6_PWMPOL                 LCDC_LCDCFG6_PWMPOL_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDCFG6_PWMPOL_Msk instead */
#define LCDC_LCDCFG6_PWMCVAL_Pos            8                                              /**< (LCDC_LCDCFG6) LCD Controller PWM Compare Value Position */
#define LCDC_LCDCFG6_PWMCVAL_Msk            (_U_(0xFF) << LCDC_LCDCFG6_PWMCVAL_Pos)        /**< (LCDC_LCDCFG6) LCD Controller PWM Compare Value Mask */
#define LCDC_LCDCFG6_PWMCVAL(value)         (LCDC_LCDCFG6_PWMCVAL_Msk & ((value) << LCDC_LCDCFG6_PWMCVAL_Pos))
#define LCDC_LCDCFG6_MASK                   _U_(0xFF17)                                    /**< \deprecated (LCDC_LCDCFG6) Register MASK  (Use LCDC_LCDCFG6_Msk instead)  */
#define LCDC_LCDCFG6_Msk                    _U_(0xFF17)                                    /**< (LCDC_LCDCFG6) Register Mask  */


/* -------- LCDC_LCDEN : (LCDC Offset: 0x20) (/W 32) LCD Controller Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CLKEN:1;                   /**< bit:      0  LCD Controller Pixel Clock Enable        */
    uint32_t SYNCEN:1;                  /**< bit:      1  LCD Controller Horizontal and Vertical Synchronization Enable */
    uint32_t DISPEN:1;                  /**< bit:      2  LCD Controller DISP Signal Enable        */
    uint32_t PWMEN:1;                   /**< bit:      3  LCD Controller Pulse Width Modulation Enable */
    uint32_t :28;                       /**< bit:  4..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_LCDEN_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_LCDEN_OFFSET                   (0x20)                                        /**<  (LCDC_LCDEN) LCD Controller Enable Register  Offset */

#define LCDC_LCDEN_CLKEN_Pos                0                                              /**< (LCDC_LCDEN) LCD Controller Pixel Clock Enable Position */
#define LCDC_LCDEN_CLKEN_Msk                (_U_(0x1) << LCDC_LCDEN_CLKEN_Pos)             /**< (LCDC_LCDEN) LCD Controller Pixel Clock Enable Mask */
#define LCDC_LCDEN_CLKEN                    LCDC_LCDEN_CLKEN_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDEN_CLKEN_Msk instead */
#define LCDC_LCDEN_SYNCEN_Pos               1                                              /**< (LCDC_LCDEN) LCD Controller Horizontal and Vertical Synchronization Enable Position */
#define LCDC_LCDEN_SYNCEN_Msk               (_U_(0x1) << LCDC_LCDEN_SYNCEN_Pos)            /**< (LCDC_LCDEN) LCD Controller Horizontal and Vertical Synchronization Enable Mask */
#define LCDC_LCDEN_SYNCEN                   LCDC_LCDEN_SYNCEN_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDEN_SYNCEN_Msk instead */
#define LCDC_LCDEN_DISPEN_Pos               2                                              /**< (LCDC_LCDEN) LCD Controller DISP Signal Enable Position */
#define LCDC_LCDEN_DISPEN_Msk               (_U_(0x1) << LCDC_LCDEN_DISPEN_Pos)            /**< (LCDC_LCDEN) LCD Controller DISP Signal Enable Mask */
#define LCDC_LCDEN_DISPEN                   LCDC_LCDEN_DISPEN_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDEN_DISPEN_Msk instead */
#define LCDC_LCDEN_PWMEN_Pos                3                                              /**< (LCDC_LCDEN) LCD Controller Pulse Width Modulation Enable Position */
#define LCDC_LCDEN_PWMEN_Msk                (_U_(0x1) << LCDC_LCDEN_PWMEN_Pos)             /**< (LCDC_LCDEN) LCD Controller Pulse Width Modulation Enable Mask */
#define LCDC_LCDEN_PWMEN                    LCDC_LCDEN_PWMEN_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDEN_PWMEN_Msk instead */
#define LCDC_LCDEN_MASK                     _U_(0x0F)                                      /**< \deprecated (LCDC_LCDEN) Register MASK  (Use LCDC_LCDEN_Msk instead)  */
#define LCDC_LCDEN_Msk                      _U_(0x0F)                                      /**< (LCDC_LCDEN) Register Mask  */


/* -------- LCDC_LCDDIS : (LCDC Offset: 0x24) (/W 32) LCD Controller Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CLKDIS:1;                  /**< bit:      0  LCD Controller Pixel Clock Disable       */
    uint32_t SYNCDIS:1;                 /**< bit:      1  LCD Controller Horizontal and Vertical Synchronization Disable */
    uint32_t DISPDIS:1;                 /**< bit:      2  LCD Controller DISP Signal Disable       */
    uint32_t PWMDIS:1;                  /**< bit:      3  LCD Controller Pulse Width Modulation Disable */
    uint32_t :4;                        /**< bit:   4..7  Reserved */
    uint32_t CLKRST:1;                  /**< bit:      8  LCD Controller Clock Reset               */
    uint32_t SYNCRST:1;                 /**< bit:      9  LCD Controller Horizontal and Vertical Synchronization Reset */
    uint32_t DISPRST:1;                 /**< bit:     10  LCD Controller DISP Signal Reset         */
    uint32_t PWMRST:1;                  /**< bit:     11  LCD Controller PWM Reset                 */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_LCDDIS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_LCDDIS_OFFSET                  (0x24)                                        /**<  (LCDC_LCDDIS) LCD Controller Disable Register  Offset */

#define LCDC_LCDDIS_CLKDIS_Pos              0                                              /**< (LCDC_LCDDIS) LCD Controller Pixel Clock Disable Position */
#define LCDC_LCDDIS_CLKDIS_Msk              (_U_(0x1) << LCDC_LCDDIS_CLKDIS_Pos)           /**< (LCDC_LCDDIS) LCD Controller Pixel Clock Disable Mask */
#define LCDC_LCDDIS_CLKDIS                  LCDC_LCDDIS_CLKDIS_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDDIS_CLKDIS_Msk instead */
#define LCDC_LCDDIS_SYNCDIS_Pos             1                                              /**< (LCDC_LCDDIS) LCD Controller Horizontal and Vertical Synchronization Disable Position */
#define LCDC_LCDDIS_SYNCDIS_Msk             (_U_(0x1) << LCDC_LCDDIS_SYNCDIS_Pos)          /**< (LCDC_LCDDIS) LCD Controller Horizontal and Vertical Synchronization Disable Mask */
#define LCDC_LCDDIS_SYNCDIS                 LCDC_LCDDIS_SYNCDIS_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDDIS_SYNCDIS_Msk instead */
#define LCDC_LCDDIS_DISPDIS_Pos             2                                              /**< (LCDC_LCDDIS) LCD Controller DISP Signal Disable Position */
#define LCDC_LCDDIS_DISPDIS_Msk             (_U_(0x1) << LCDC_LCDDIS_DISPDIS_Pos)          /**< (LCDC_LCDDIS) LCD Controller DISP Signal Disable Mask */
#define LCDC_LCDDIS_DISPDIS                 LCDC_LCDDIS_DISPDIS_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDDIS_DISPDIS_Msk instead */
#define LCDC_LCDDIS_PWMDIS_Pos              3                                              /**< (LCDC_LCDDIS) LCD Controller Pulse Width Modulation Disable Position */
#define LCDC_LCDDIS_PWMDIS_Msk              (_U_(0x1) << LCDC_LCDDIS_PWMDIS_Pos)           /**< (LCDC_LCDDIS) LCD Controller Pulse Width Modulation Disable Mask */
#define LCDC_LCDDIS_PWMDIS                  LCDC_LCDDIS_PWMDIS_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDDIS_PWMDIS_Msk instead */
#define LCDC_LCDDIS_CLKRST_Pos              8                                              /**< (LCDC_LCDDIS) LCD Controller Clock Reset Position */
#define LCDC_LCDDIS_CLKRST_Msk              (_U_(0x1) << LCDC_LCDDIS_CLKRST_Pos)           /**< (LCDC_LCDDIS) LCD Controller Clock Reset Mask */
#define LCDC_LCDDIS_CLKRST                  LCDC_LCDDIS_CLKRST_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDDIS_CLKRST_Msk instead */
#define LCDC_LCDDIS_SYNCRST_Pos             9                                              /**< (LCDC_LCDDIS) LCD Controller Horizontal and Vertical Synchronization Reset Position */
#define LCDC_LCDDIS_SYNCRST_Msk             (_U_(0x1) << LCDC_LCDDIS_SYNCRST_Pos)          /**< (LCDC_LCDDIS) LCD Controller Horizontal and Vertical Synchronization Reset Mask */
#define LCDC_LCDDIS_SYNCRST                 LCDC_LCDDIS_SYNCRST_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDDIS_SYNCRST_Msk instead */
#define LCDC_LCDDIS_DISPRST_Pos             10                                             /**< (LCDC_LCDDIS) LCD Controller DISP Signal Reset Position */
#define LCDC_LCDDIS_DISPRST_Msk             (_U_(0x1) << LCDC_LCDDIS_DISPRST_Pos)          /**< (LCDC_LCDDIS) LCD Controller DISP Signal Reset Mask */
#define LCDC_LCDDIS_DISPRST                 LCDC_LCDDIS_DISPRST_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDDIS_DISPRST_Msk instead */
#define LCDC_LCDDIS_PWMRST_Pos              11                                             /**< (LCDC_LCDDIS) LCD Controller PWM Reset Position */
#define LCDC_LCDDIS_PWMRST_Msk              (_U_(0x1) << LCDC_LCDDIS_PWMRST_Pos)           /**< (LCDC_LCDDIS) LCD Controller PWM Reset Mask */
#define LCDC_LCDDIS_PWMRST                  LCDC_LCDDIS_PWMRST_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDDIS_PWMRST_Msk instead */
#define LCDC_LCDDIS_MASK                    _U_(0xF0F)                                     /**< \deprecated (LCDC_LCDDIS) Register MASK  (Use LCDC_LCDDIS_Msk instead)  */
#define LCDC_LCDDIS_Msk                     _U_(0xF0F)                                     /**< (LCDC_LCDDIS) Register Mask  */


/* -------- LCDC_LCDSR : (LCDC Offset: 0x28) (R/ 32) LCD Controller Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CLKSTS:1;                  /**< bit:      0  Clock Status                             */
    uint32_t LCDSTS:1;                  /**< bit:      1  LCD Controller Synchronization status    */
    uint32_t DISPSTS:1;                 /**< bit:      2  LCD Controller DISP Signal Status        */
    uint32_t PWMSTS:1;                  /**< bit:      3  LCD Controller PWM Signal Status         */
    uint32_t SIPSTS:1;                  /**< bit:      4  Synchronization In Progress              */
    uint32_t :27;                       /**< bit:  5..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_LCDSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_LCDSR_OFFSET                   (0x28)                                        /**<  (LCDC_LCDSR) LCD Controller Status Register  Offset */

#define LCDC_LCDSR_CLKSTS_Pos               0                                              /**< (LCDC_LCDSR) Clock Status Position */
#define LCDC_LCDSR_CLKSTS_Msk               (_U_(0x1) << LCDC_LCDSR_CLKSTS_Pos)            /**< (LCDC_LCDSR) Clock Status Mask */
#define LCDC_LCDSR_CLKSTS                   LCDC_LCDSR_CLKSTS_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDSR_CLKSTS_Msk instead */
#define LCDC_LCDSR_LCDSTS_Pos               1                                              /**< (LCDC_LCDSR) LCD Controller Synchronization status Position */
#define LCDC_LCDSR_LCDSTS_Msk               (_U_(0x1) << LCDC_LCDSR_LCDSTS_Pos)            /**< (LCDC_LCDSR) LCD Controller Synchronization status Mask */
#define LCDC_LCDSR_LCDSTS                   LCDC_LCDSR_LCDSTS_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDSR_LCDSTS_Msk instead */
#define LCDC_LCDSR_DISPSTS_Pos              2                                              /**< (LCDC_LCDSR) LCD Controller DISP Signal Status Position */
#define LCDC_LCDSR_DISPSTS_Msk              (_U_(0x1) << LCDC_LCDSR_DISPSTS_Pos)           /**< (LCDC_LCDSR) LCD Controller DISP Signal Status Mask */
#define LCDC_LCDSR_DISPSTS                  LCDC_LCDSR_DISPSTS_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDSR_DISPSTS_Msk instead */
#define LCDC_LCDSR_PWMSTS_Pos               3                                              /**< (LCDC_LCDSR) LCD Controller PWM Signal Status Position */
#define LCDC_LCDSR_PWMSTS_Msk               (_U_(0x1) << LCDC_LCDSR_PWMSTS_Pos)            /**< (LCDC_LCDSR) LCD Controller PWM Signal Status Mask */
#define LCDC_LCDSR_PWMSTS                   LCDC_LCDSR_PWMSTS_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDSR_PWMSTS_Msk instead */
#define LCDC_LCDSR_SIPSTS_Pos               4                                              /**< (LCDC_LCDSR) Synchronization In Progress Position */
#define LCDC_LCDSR_SIPSTS_Msk               (_U_(0x1) << LCDC_LCDSR_SIPSTS_Pos)            /**< (LCDC_LCDSR) Synchronization In Progress Mask */
#define LCDC_LCDSR_SIPSTS                   LCDC_LCDSR_SIPSTS_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDSR_SIPSTS_Msk instead */
#define LCDC_LCDSR_MASK                     _U_(0x1F)                                      /**< \deprecated (LCDC_LCDSR) Register MASK  (Use LCDC_LCDSR_Msk instead)  */
#define LCDC_LCDSR_Msk                      _U_(0x1F)                                      /**< (LCDC_LCDSR) Register Mask  */


/* -------- LCDC_LCDIER : (LCDC Offset: 0x2c) (/W 32) LCD Controller Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SOFIE:1;                   /**< bit:      0  Start of Frame Interrupt Enable          */
    uint32_t DISIE:1;                   /**< bit:      1  LCD Disable Interrupt Enable             */
    uint32_t DISPIE:1;                  /**< bit:      2  Powerup/Powerdown Sequence Terminated Interrupt Enable */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t FIFOERRIE:1;               /**< bit:      4  Output FIFO Error Interrupt Enable       */
    uint32_t :3;                        /**< bit:   5..7  Reserved */
    uint32_t BASEIE:1;                  /**< bit:      8  Base Layer Interrupt Enable              */
    uint32_t OVR1IE:1;                  /**< bit:      9  Overlay 1 Interrupt Enable               */
    uint32_t OVR2IE:1;                  /**< bit:     10  Overlay 2 Interrupt Enable               */
    uint32_t HEOIE:1;                   /**< bit:     11  High-End Overlay Interrupt Enable        */
    uint32_t :1;                        /**< bit:     12  Reserved */
    uint32_t PPIE:1;                    /**< bit:     13  Post Processing Interrupt Enable         */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_LCDIER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_LCDIER_OFFSET                  (0x2C)                                        /**<  (LCDC_LCDIER) LCD Controller Interrupt Enable Register  Offset */

#define LCDC_LCDIER_SOFIE_Pos               0                                              /**< (LCDC_LCDIER) Start of Frame Interrupt Enable Position */
#define LCDC_LCDIER_SOFIE_Msk               (_U_(0x1) << LCDC_LCDIER_SOFIE_Pos)            /**< (LCDC_LCDIER) Start of Frame Interrupt Enable Mask */
#define LCDC_LCDIER_SOFIE                   LCDC_LCDIER_SOFIE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIER_SOFIE_Msk instead */
#define LCDC_LCDIER_DISIE_Pos               1                                              /**< (LCDC_LCDIER) LCD Disable Interrupt Enable Position */
#define LCDC_LCDIER_DISIE_Msk               (_U_(0x1) << LCDC_LCDIER_DISIE_Pos)            /**< (LCDC_LCDIER) LCD Disable Interrupt Enable Mask */
#define LCDC_LCDIER_DISIE                   LCDC_LCDIER_DISIE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIER_DISIE_Msk instead */
#define LCDC_LCDIER_DISPIE_Pos              2                                              /**< (LCDC_LCDIER) Powerup/Powerdown Sequence Terminated Interrupt Enable Position */
#define LCDC_LCDIER_DISPIE_Msk              (_U_(0x1) << LCDC_LCDIER_DISPIE_Pos)           /**< (LCDC_LCDIER) Powerup/Powerdown Sequence Terminated Interrupt Enable Mask */
#define LCDC_LCDIER_DISPIE                  LCDC_LCDIER_DISPIE_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIER_DISPIE_Msk instead */
#define LCDC_LCDIER_FIFOERRIE_Pos           4                                              /**< (LCDC_LCDIER) Output FIFO Error Interrupt Enable Position */
#define LCDC_LCDIER_FIFOERRIE_Msk           (_U_(0x1) << LCDC_LCDIER_FIFOERRIE_Pos)        /**< (LCDC_LCDIER) Output FIFO Error Interrupt Enable Mask */
#define LCDC_LCDIER_FIFOERRIE               LCDC_LCDIER_FIFOERRIE_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIER_FIFOERRIE_Msk instead */
#define LCDC_LCDIER_BASEIE_Pos              8                                              /**< (LCDC_LCDIER) Base Layer Interrupt Enable Position */
#define LCDC_LCDIER_BASEIE_Msk              (_U_(0x1) << LCDC_LCDIER_BASEIE_Pos)           /**< (LCDC_LCDIER) Base Layer Interrupt Enable Mask */
#define LCDC_LCDIER_BASEIE                  LCDC_LCDIER_BASEIE_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIER_BASEIE_Msk instead */
#define LCDC_LCDIER_OVR1IE_Pos              9                                              /**< (LCDC_LCDIER) Overlay 1 Interrupt Enable Position */
#define LCDC_LCDIER_OVR1IE_Msk              (_U_(0x1) << LCDC_LCDIER_OVR1IE_Pos)           /**< (LCDC_LCDIER) Overlay 1 Interrupt Enable Mask */
#define LCDC_LCDIER_OVR1IE                  LCDC_LCDIER_OVR1IE_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIER_OVR1IE_Msk instead */
#define LCDC_LCDIER_OVR2IE_Pos              10                                             /**< (LCDC_LCDIER) Overlay 2 Interrupt Enable Position */
#define LCDC_LCDIER_OVR2IE_Msk              (_U_(0x1) << LCDC_LCDIER_OVR2IE_Pos)           /**< (LCDC_LCDIER) Overlay 2 Interrupt Enable Mask */
#define LCDC_LCDIER_OVR2IE                  LCDC_LCDIER_OVR2IE_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIER_OVR2IE_Msk instead */
#define LCDC_LCDIER_HEOIE_Pos               11                                             /**< (LCDC_LCDIER) High-End Overlay Interrupt Enable Position */
#define LCDC_LCDIER_HEOIE_Msk               (_U_(0x1) << LCDC_LCDIER_HEOIE_Pos)            /**< (LCDC_LCDIER) High-End Overlay Interrupt Enable Mask */
#define LCDC_LCDIER_HEOIE                   LCDC_LCDIER_HEOIE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIER_HEOIE_Msk instead */
#define LCDC_LCDIER_PPIE_Pos                13                                             /**< (LCDC_LCDIER) Post Processing Interrupt Enable Position */
#define LCDC_LCDIER_PPIE_Msk                (_U_(0x1) << LCDC_LCDIER_PPIE_Pos)             /**< (LCDC_LCDIER) Post Processing Interrupt Enable Mask */
#define LCDC_LCDIER_PPIE                    LCDC_LCDIER_PPIE_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIER_PPIE_Msk instead */
#define LCDC_LCDIER_MASK                    _U_(0x2F17)                                    /**< \deprecated (LCDC_LCDIER) Register MASK  (Use LCDC_LCDIER_Msk instead)  */
#define LCDC_LCDIER_Msk                     _U_(0x2F17)                                    /**< (LCDC_LCDIER) Register Mask  */


/* -------- LCDC_LCDIDR : (LCDC Offset: 0x30) (/W 32) LCD Controller Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SOFID:1;                   /**< bit:      0  Start of Frame Interrupt Disable         */
    uint32_t DISID:1;                   /**< bit:      1  LCD Disable Interrupt Disable            */
    uint32_t DISPID:1;                  /**< bit:      2  Powerup/Powerdown Sequence Terminated Interrupt Disable */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t FIFOERRID:1;               /**< bit:      4  Output FIFO Error Interrupt Disable      */
    uint32_t :3;                        /**< bit:   5..7  Reserved */
    uint32_t BASEID:1;                  /**< bit:      8  Base Layer Interrupt Disable             */
    uint32_t OVR1ID:1;                  /**< bit:      9  Overlay 1 Interrupt Disable              */
    uint32_t OVR2ID:1;                  /**< bit:     10  Overlay 2 Interrupt Disable              */
    uint32_t HEOID:1;                   /**< bit:     11  High-End Overlay Interrupt Disable       */
    uint32_t :1;                        /**< bit:     12  Reserved */
    uint32_t PPID:1;                    /**< bit:     13  Post Processing Interrupt Disable        */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_LCDIDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_LCDIDR_OFFSET                  (0x30)                                        /**<  (LCDC_LCDIDR) LCD Controller Interrupt Disable Register  Offset */

#define LCDC_LCDIDR_SOFID_Pos               0                                              /**< (LCDC_LCDIDR) Start of Frame Interrupt Disable Position */
#define LCDC_LCDIDR_SOFID_Msk               (_U_(0x1) << LCDC_LCDIDR_SOFID_Pos)            /**< (LCDC_LCDIDR) Start of Frame Interrupt Disable Mask */
#define LCDC_LCDIDR_SOFID                   LCDC_LCDIDR_SOFID_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIDR_SOFID_Msk instead */
#define LCDC_LCDIDR_DISID_Pos               1                                              /**< (LCDC_LCDIDR) LCD Disable Interrupt Disable Position */
#define LCDC_LCDIDR_DISID_Msk               (_U_(0x1) << LCDC_LCDIDR_DISID_Pos)            /**< (LCDC_LCDIDR) LCD Disable Interrupt Disable Mask */
#define LCDC_LCDIDR_DISID                   LCDC_LCDIDR_DISID_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIDR_DISID_Msk instead */
#define LCDC_LCDIDR_DISPID_Pos              2                                              /**< (LCDC_LCDIDR) Powerup/Powerdown Sequence Terminated Interrupt Disable Position */
#define LCDC_LCDIDR_DISPID_Msk              (_U_(0x1) << LCDC_LCDIDR_DISPID_Pos)           /**< (LCDC_LCDIDR) Powerup/Powerdown Sequence Terminated Interrupt Disable Mask */
#define LCDC_LCDIDR_DISPID                  LCDC_LCDIDR_DISPID_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIDR_DISPID_Msk instead */
#define LCDC_LCDIDR_FIFOERRID_Pos           4                                              /**< (LCDC_LCDIDR) Output FIFO Error Interrupt Disable Position */
#define LCDC_LCDIDR_FIFOERRID_Msk           (_U_(0x1) << LCDC_LCDIDR_FIFOERRID_Pos)        /**< (LCDC_LCDIDR) Output FIFO Error Interrupt Disable Mask */
#define LCDC_LCDIDR_FIFOERRID               LCDC_LCDIDR_FIFOERRID_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIDR_FIFOERRID_Msk instead */
#define LCDC_LCDIDR_BASEID_Pos              8                                              /**< (LCDC_LCDIDR) Base Layer Interrupt Disable Position */
#define LCDC_LCDIDR_BASEID_Msk              (_U_(0x1) << LCDC_LCDIDR_BASEID_Pos)           /**< (LCDC_LCDIDR) Base Layer Interrupt Disable Mask */
#define LCDC_LCDIDR_BASEID                  LCDC_LCDIDR_BASEID_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIDR_BASEID_Msk instead */
#define LCDC_LCDIDR_OVR1ID_Pos              9                                              /**< (LCDC_LCDIDR) Overlay 1 Interrupt Disable Position */
#define LCDC_LCDIDR_OVR1ID_Msk              (_U_(0x1) << LCDC_LCDIDR_OVR1ID_Pos)           /**< (LCDC_LCDIDR) Overlay 1 Interrupt Disable Mask */
#define LCDC_LCDIDR_OVR1ID                  LCDC_LCDIDR_OVR1ID_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIDR_OVR1ID_Msk instead */
#define LCDC_LCDIDR_OVR2ID_Pos              10                                             /**< (LCDC_LCDIDR) Overlay 2 Interrupt Disable Position */
#define LCDC_LCDIDR_OVR2ID_Msk              (_U_(0x1) << LCDC_LCDIDR_OVR2ID_Pos)           /**< (LCDC_LCDIDR) Overlay 2 Interrupt Disable Mask */
#define LCDC_LCDIDR_OVR2ID                  LCDC_LCDIDR_OVR2ID_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIDR_OVR2ID_Msk instead */
#define LCDC_LCDIDR_HEOID_Pos               11                                             /**< (LCDC_LCDIDR) High-End Overlay Interrupt Disable Position */
#define LCDC_LCDIDR_HEOID_Msk               (_U_(0x1) << LCDC_LCDIDR_HEOID_Pos)            /**< (LCDC_LCDIDR) High-End Overlay Interrupt Disable Mask */
#define LCDC_LCDIDR_HEOID                   LCDC_LCDIDR_HEOID_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIDR_HEOID_Msk instead */
#define LCDC_LCDIDR_PPID_Pos                13                                             /**< (LCDC_LCDIDR) Post Processing Interrupt Disable Position */
#define LCDC_LCDIDR_PPID_Msk                (_U_(0x1) << LCDC_LCDIDR_PPID_Pos)             /**< (LCDC_LCDIDR) Post Processing Interrupt Disable Mask */
#define LCDC_LCDIDR_PPID                    LCDC_LCDIDR_PPID_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIDR_PPID_Msk instead */
#define LCDC_LCDIDR_MASK                    _U_(0x2F17)                                    /**< \deprecated (LCDC_LCDIDR) Register MASK  (Use LCDC_LCDIDR_Msk instead)  */
#define LCDC_LCDIDR_Msk                     _U_(0x2F17)                                    /**< (LCDC_LCDIDR) Register Mask  */


/* -------- LCDC_LCDIMR : (LCDC Offset: 0x34) (R/ 32) LCD Controller Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SOFIM:1;                   /**< bit:      0  Start of Frame Interrupt Mask            */
    uint32_t DISIM:1;                   /**< bit:      1  LCD Disable Interrupt Mask               */
    uint32_t DISPIM:1;                  /**< bit:      2  Powerup/Powerdown Sequence Terminated Interrupt Mask */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t FIFOERRIM:1;               /**< bit:      4  Output FIFO Error Interrupt Mask         */
    uint32_t :3;                        /**< bit:   5..7  Reserved */
    uint32_t BASEIM:1;                  /**< bit:      8  Base Layer Interrupt Mask                */
    uint32_t OVR1IM:1;                  /**< bit:      9  Overlay 1 Interrupt Mask                 */
    uint32_t OVR2IM:1;                  /**< bit:     10  Overlay 2 Interrupt Mask                 */
    uint32_t HEOIM:1;                   /**< bit:     11  High-End Overlay Interrupt Mask          */
    uint32_t :1;                        /**< bit:     12  Reserved */
    uint32_t PPIM:1;                    /**< bit:     13  Post Processing Interrupt Mask           */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_LCDIMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_LCDIMR_OFFSET                  (0x34)                                        /**<  (LCDC_LCDIMR) LCD Controller Interrupt Mask Register  Offset */

#define LCDC_LCDIMR_SOFIM_Pos               0                                              /**< (LCDC_LCDIMR) Start of Frame Interrupt Mask Position */
#define LCDC_LCDIMR_SOFIM_Msk               (_U_(0x1) << LCDC_LCDIMR_SOFIM_Pos)            /**< (LCDC_LCDIMR) Start of Frame Interrupt Mask Mask */
#define LCDC_LCDIMR_SOFIM                   LCDC_LCDIMR_SOFIM_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIMR_SOFIM_Msk instead */
#define LCDC_LCDIMR_DISIM_Pos               1                                              /**< (LCDC_LCDIMR) LCD Disable Interrupt Mask Position */
#define LCDC_LCDIMR_DISIM_Msk               (_U_(0x1) << LCDC_LCDIMR_DISIM_Pos)            /**< (LCDC_LCDIMR) LCD Disable Interrupt Mask Mask */
#define LCDC_LCDIMR_DISIM                   LCDC_LCDIMR_DISIM_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIMR_DISIM_Msk instead */
#define LCDC_LCDIMR_DISPIM_Pos              2                                              /**< (LCDC_LCDIMR) Powerup/Powerdown Sequence Terminated Interrupt Mask Position */
#define LCDC_LCDIMR_DISPIM_Msk              (_U_(0x1) << LCDC_LCDIMR_DISPIM_Pos)           /**< (LCDC_LCDIMR) Powerup/Powerdown Sequence Terminated Interrupt Mask Mask */
#define LCDC_LCDIMR_DISPIM                  LCDC_LCDIMR_DISPIM_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIMR_DISPIM_Msk instead */
#define LCDC_LCDIMR_FIFOERRIM_Pos           4                                              /**< (LCDC_LCDIMR) Output FIFO Error Interrupt Mask Position */
#define LCDC_LCDIMR_FIFOERRIM_Msk           (_U_(0x1) << LCDC_LCDIMR_FIFOERRIM_Pos)        /**< (LCDC_LCDIMR) Output FIFO Error Interrupt Mask Mask */
#define LCDC_LCDIMR_FIFOERRIM               LCDC_LCDIMR_FIFOERRIM_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIMR_FIFOERRIM_Msk instead */
#define LCDC_LCDIMR_BASEIM_Pos              8                                              /**< (LCDC_LCDIMR) Base Layer Interrupt Mask Position */
#define LCDC_LCDIMR_BASEIM_Msk              (_U_(0x1) << LCDC_LCDIMR_BASEIM_Pos)           /**< (LCDC_LCDIMR) Base Layer Interrupt Mask Mask */
#define LCDC_LCDIMR_BASEIM                  LCDC_LCDIMR_BASEIM_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIMR_BASEIM_Msk instead */
#define LCDC_LCDIMR_OVR1IM_Pos              9                                              /**< (LCDC_LCDIMR) Overlay 1 Interrupt Mask Position */
#define LCDC_LCDIMR_OVR1IM_Msk              (_U_(0x1) << LCDC_LCDIMR_OVR1IM_Pos)           /**< (LCDC_LCDIMR) Overlay 1 Interrupt Mask Mask */
#define LCDC_LCDIMR_OVR1IM                  LCDC_LCDIMR_OVR1IM_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIMR_OVR1IM_Msk instead */
#define LCDC_LCDIMR_OVR2IM_Pos              10                                             /**< (LCDC_LCDIMR) Overlay 2 Interrupt Mask Position */
#define LCDC_LCDIMR_OVR2IM_Msk              (_U_(0x1) << LCDC_LCDIMR_OVR2IM_Pos)           /**< (LCDC_LCDIMR) Overlay 2 Interrupt Mask Mask */
#define LCDC_LCDIMR_OVR2IM                  LCDC_LCDIMR_OVR2IM_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIMR_OVR2IM_Msk instead */
#define LCDC_LCDIMR_HEOIM_Pos               11                                             /**< (LCDC_LCDIMR) High-End Overlay Interrupt Mask Position */
#define LCDC_LCDIMR_HEOIM_Msk               (_U_(0x1) << LCDC_LCDIMR_HEOIM_Pos)            /**< (LCDC_LCDIMR) High-End Overlay Interrupt Mask Mask */
#define LCDC_LCDIMR_HEOIM                   LCDC_LCDIMR_HEOIM_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIMR_HEOIM_Msk instead */
#define LCDC_LCDIMR_PPIM_Pos                13                                             /**< (LCDC_LCDIMR) Post Processing Interrupt Mask Position */
#define LCDC_LCDIMR_PPIM_Msk                (_U_(0x1) << LCDC_LCDIMR_PPIM_Pos)             /**< (LCDC_LCDIMR) Post Processing Interrupt Mask Mask */
#define LCDC_LCDIMR_PPIM                    LCDC_LCDIMR_PPIM_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDIMR_PPIM_Msk instead */
#define LCDC_LCDIMR_MASK                    _U_(0x2F17)                                    /**< \deprecated (LCDC_LCDIMR) Register MASK  (Use LCDC_LCDIMR_Msk instead)  */
#define LCDC_LCDIMR_Msk                     _U_(0x2F17)                                    /**< (LCDC_LCDIMR) Register Mask  */


/* -------- LCDC_LCDISR : (LCDC Offset: 0x38) (R/ 32) LCD Controller Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SOF:1;                     /**< bit:      0  Start of Frame Interrupt Status          */
    uint32_t DIS:1;                     /**< bit:      1  LCD Disable Interrupt Status             */
    uint32_t DISP:1;                    /**< bit:      2  Powerup/Powerdown Sequence Terminated Interrupt Status */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t FIFOERR:1;                 /**< bit:      4  Output FIFO Error                        */
    uint32_t :3;                        /**< bit:   5..7  Reserved */
    uint32_t BASE:1;                    /**< bit:      8  Base Layer Raw Interrupt Status          */
    uint32_t OVR1:1;                    /**< bit:      9  Overlay 1 Raw Interrupt Status           */
    uint32_t OVR2:1;                    /**< bit:     10  Overlay 2 Raw Interrupt Status           */
    uint32_t HEO:1;                     /**< bit:     11  High-End Overlay Raw Interrupt Status    */
    uint32_t :1;                        /**< bit:     12  Reserved */
    uint32_t PP:1;                      /**< bit:     13  Post Processing Raw Interrupt Status     */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :9;                        /**< bit:   0..8  Reserved */
    uint32_t OVR:2;                     /**< bit:  9..10  Overlay x Raw Interrupt Status           */
    uint32_t :21;                       /**< bit: 11..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_LCDISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_LCDISR_OFFSET                  (0x38)                                        /**<  (LCDC_LCDISR) LCD Controller Interrupt Status Register  Offset */

#define LCDC_LCDISR_SOF_Pos                 0                                              /**< (LCDC_LCDISR) Start of Frame Interrupt Status Position */
#define LCDC_LCDISR_SOF_Msk                 (_U_(0x1) << LCDC_LCDISR_SOF_Pos)              /**< (LCDC_LCDISR) Start of Frame Interrupt Status Mask */
#define LCDC_LCDISR_SOF                     LCDC_LCDISR_SOF_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDISR_SOF_Msk instead */
#define LCDC_LCDISR_DIS_Pos                 1                                              /**< (LCDC_LCDISR) LCD Disable Interrupt Status Position */
#define LCDC_LCDISR_DIS_Msk                 (_U_(0x1) << LCDC_LCDISR_DIS_Pos)              /**< (LCDC_LCDISR) LCD Disable Interrupt Status Mask */
#define LCDC_LCDISR_DIS                     LCDC_LCDISR_DIS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDISR_DIS_Msk instead */
#define LCDC_LCDISR_DISP_Pos                2                                              /**< (LCDC_LCDISR) Powerup/Powerdown Sequence Terminated Interrupt Status Position */
#define LCDC_LCDISR_DISP_Msk                (_U_(0x1) << LCDC_LCDISR_DISP_Pos)             /**< (LCDC_LCDISR) Powerup/Powerdown Sequence Terminated Interrupt Status Mask */
#define LCDC_LCDISR_DISP                    LCDC_LCDISR_DISP_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDISR_DISP_Msk instead */
#define LCDC_LCDISR_FIFOERR_Pos             4                                              /**< (LCDC_LCDISR) Output FIFO Error Position */
#define LCDC_LCDISR_FIFOERR_Msk             (_U_(0x1) << LCDC_LCDISR_FIFOERR_Pos)          /**< (LCDC_LCDISR) Output FIFO Error Mask */
#define LCDC_LCDISR_FIFOERR                 LCDC_LCDISR_FIFOERR_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDISR_FIFOERR_Msk instead */
#define LCDC_LCDISR_BASE_Pos                8                                              /**< (LCDC_LCDISR) Base Layer Raw Interrupt Status Position */
#define LCDC_LCDISR_BASE_Msk                (_U_(0x1) << LCDC_LCDISR_BASE_Pos)             /**< (LCDC_LCDISR) Base Layer Raw Interrupt Status Mask */
#define LCDC_LCDISR_BASE                    LCDC_LCDISR_BASE_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDISR_BASE_Msk instead */
#define LCDC_LCDISR_OVR1_Pos                9                                              /**< (LCDC_LCDISR) Overlay 1 Raw Interrupt Status Position */
#define LCDC_LCDISR_OVR1_Msk                (_U_(0x1) << LCDC_LCDISR_OVR1_Pos)             /**< (LCDC_LCDISR) Overlay 1 Raw Interrupt Status Mask */
#define LCDC_LCDISR_OVR1                    LCDC_LCDISR_OVR1_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDISR_OVR1_Msk instead */
#define LCDC_LCDISR_OVR2_Pos                10                                             /**< (LCDC_LCDISR) Overlay 2 Raw Interrupt Status Position */
#define LCDC_LCDISR_OVR2_Msk                (_U_(0x1) << LCDC_LCDISR_OVR2_Pos)             /**< (LCDC_LCDISR) Overlay 2 Raw Interrupt Status Mask */
#define LCDC_LCDISR_OVR2                    LCDC_LCDISR_OVR2_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDISR_OVR2_Msk instead */
#define LCDC_LCDISR_HEO_Pos                 11                                             /**< (LCDC_LCDISR) High-End Overlay Raw Interrupt Status Position */
#define LCDC_LCDISR_HEO_Msk                 (_U_(0x1) << LCDC_LCDISR_HEO_Pos)              /**< (LCDC_LCDISR) High-End Overlay Raw Interrupt Status Mask */
#define LCDC_LCDISR_HEO                     LCDC_LCDISR_HEO_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDISR_HEO_Msk instead */
#define LCDC_LCDISR_PP_Pos                  13                                             /**< (LCDC_LCDISR) Post Processing Raw Interrupt Status Position */
#define LCDC_LCDISR_PP_Msk                  (_U_(0x1) << LCDC_LCDISR_PP_Pos)               /**< (LCDC_LCDISR) Post Processing Raw Interrupt Status Mask */
#define LCDC_LCDISR_PP                      LCDC_LCDISR_PP_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_LCDISR_PP_Msk instead */
#define LCDC_LCDISR_MASK                    _U_(0x2F17)                                    /**< \deprecated (LCDC_LCDISR) Register MASK  (Use LCDC_LCDISR_Msk instead)  */
#define LCDC_LCDISR_Msk                     _U_(0x2F17)                                    /**< (LCDC_LCDISR) Register Mask  */

#define LCDC_LCDISR_OVR_Pos                 9                                              /**< (LCDC_LCDISR Position) Overlay x Raw Interrupt Status */
#define LCDC_LCDISR_OVR_Msk                 (_U_(0x3) << LCDC_LCDISR_OVR_Pos)              /**< (LCDC_LCDISR Mask) OVR */
#define LCDC_LCDISR_OVR(value)              (LCDC_LCDISR_OVR_Msk & ((value) << LCDC_LCDISR_OVR_Pos))  

/* -------- LCDC_ATTR : (LCDC Offset: 0x3c) (/W 32) LCD Controller Attribute Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BASE:1;                    /**< bit:      0  Base Layer Update Attribute              */
    uint32_t OVR1:1;                    /**< bit:      1  Overlay 1 Update Attribute               */
    uint32_t OVR2:1;                    /**< bit:      2  Overlay 2 Update Attribute               */
    uint32_t HEO:1;                     /**< bit:      3  High-End Overlay Update Attribute        */
    uint32_t :1;                        /**< bit:      4  Reserved */
    uint32_t PP:1;                      /**< bit:      5  Post-Processing Update Attribute         */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t BASEA2Q:1;                 /**< bit:      8  Base Layer Update Add To Queue           */
    uint32_t OVR1A2Q:1;                 /**< bit:      9  Overlay 1 Update Add To Queue            */
    uint32_t OVR2A2Q:1;                 /**< bit:     10  Overlay 2 Update Add to Queue            */
    uint32_t HEOA2Q:1;                  /**< bit:     11  High-End Overlay Update Add To Queue     */
    uint32_t :1;                        /**< bit:     12  Reserved */
    uint32_t PPA2Q:1;                   /**< bit:     13  Post-Processing Update Add To Queue      */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :1;                        /**< bit:      0  Reserved */
    uint32_t OVR:2;                     /**< bit:   1..2  Overlay x Update Attribute               */
    uint32_t :29;                       /**< bit:  3..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_ATTR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_ATTR_OFFSET                    (0x3C)                                        /**<  (LCDC_ATTR) LCD Controller Attribute Register  Offset */

#define LCDC_ATTR_BASE_Pos                  0                                              /**< (LCDC_ATTR) Base Layer Update Attribute Position */
#define LCDC_ATTR_BASE_Msk                  (_U_(0x1) << LCDC_ATTR_BASE_Pos)               /**< (LCDC_ATTR) Base Layer Update Attribute Mask */
#define LCDC_ATTR_BASE                      LCDC_ATTR_BASE_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_ATTR_BASE_Msk instead */
#define LCDC_ATTR_OVR1_Pos                  1                                              /**< (LCDC_ATTR) Overlay 1 Update Attribute Position */
#define LCDC_ATTR_OVR1_Msk                  (_U_(0x1) << LCDC_ATTR_OVR1_Pos)               /**< (LCDC_ATTR) Overlay 1 Update Attribute Mask */
#define LCDC_ATTR_OVR1                      LCDC_ATTR_OVR1_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_ATTR_OVR1_Msk instead */
#define LCDC_ATTR_OVR2_Pos                  2                                              /**< (LCDC_ATTR) Overlay 2 Update Attribute Position */
#define LCDC_ATTR_OVR2_Msk                  (_U_(0x1) << LCDC_ATTR_OVR2_Pos)               /**< (LCDC_ATTR) Overlay 2 Update Attribute Mask */
#define LCDC_ATTR_OVR2                      LCDC_ATTR_OVR2_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_ATTR_OVR2_Msk instead */
#define LCDC_ATTR_HEO_Pos                   3                                              /**< (LCDC_ATTR) High-End Overlay Update Attribute Position */
#define LCDC_ATTR_HEO_Msk                   (_U_(0x1) << LCDC_ATTR_HEO_Pos)                /**< (LCDC_ATTR) High-End Overlay Update Attribute Mask */
#define LCDC_ATTR_HEO                       LCDC_ATTR_HEO_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_ATTR_HEO_Msk instead */
#define LCDC_ATTR_PP_Pos                    5                                              /**< (LCDC_ATTR) Post-Processing Update Attribute Position */
#define LCDC_ATTR_PP_Msk                    (_U_(0x1) << LCDC_ATTR_PP_Pos)                 /**< (LCDC_ATTR) Post-Processing Update Attribute Mask */
#define LCDC_ATTR_PP                        LCDC_ATTR_PP_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_ATTR_PP_Msk instead */
#define LCDC_ATTR_BASEA2Q_Pos               8                                              /**< (LCDC_ATTR) Base Layer Update Add To Queue Position */
#define LCDC_ATTR_BASEA2Q_Msk               (_U_(0x1) << LCDC_ATTR_BASEA2Q_Pos)            /**< (LCDC_ATTR) Base Layer Update Add To Queue Mask */
#define LCDC_ATTR_BASEA2Q                   LCDC_ATTR_BASEA2Q_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_ATTR_BASEA2Q_Msk instead */
#define LCDC_ATTR_OVR1A2Q_Pos               9                                              /**< (LCDC_ATTR) Overlay 1 Update Add To Queue Position */
#define LCDC_ATTR_OVR1A2Q_Msk               (_U_(0x1) << LCDC_ATTR_OVR1A2Q_Pos)            /**< (LCDC_ATTR) Overlay 1 Update Add To Queue Mask */
#define LCDC_ATTR_OVR1A2Q                   LCDC_ATTR_OVR1A2Q_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_ATTR_OVR1A2Q_Msk instead */
#define LCDC_ATTR_OVR2A2Q_Pos               10                                             /**< (LCDC_ATTR) Overlay 2 Update Add to Queue Position */
#define LCDC_ATTR_OVR2A2Q_Msk               (_U_(0x1) << LCDC_ATTR_OVR2A2Q_Pos)            /**< (LCDC_ATTR) Overlay 2 Update Add to Queue Mask */
#define LCDC_ATTR_OVR2A2Q                   LCDC_ATTR_OVR2A2Q_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_ATTR_OVR2A2Q_Msk instead */
#define LCDC_ATTR_HEOA2Q_Pos                11                                             /**< (LCDC_ATTR) High-End Overlay Update Add To Queue Position */
#define LCDC_ATTR_HEOA2Q_Msk                (_U_(0x1) << LCDC_ATTR_HEOA2Q_Pos)             /**< (LCDC_ATTR) High-End Overlay Update Add To Queue Mask */
#define LCDC_ATTR_HEOA2Q                    LCDC_ATTR_HEOA2Q_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_ATTR_HEOA2Q_Msk instead */
#define LCDC_ATTR_PPA2Q_Pos                 13                                             /**< (LCDC_ATTR) Post-Processing Update Add To Queue Position */
#define LCDC_ATTR_PPA2Q_Msk                 (_U_(0x1) << LCDC_ATTR_PPA2Q_Pos)              /**< (LCDC_ATTR) Post-Processing Update Add To Queue Mask */
#define LCDC_ATTR_PPA2Q                     LCDC_ATTR_PPA2Q_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_ATTR_PPA2Q_Msk instead */
#define LCDC_ATTR_MASK                      _U_(0x2F2F)                                    /**< \deprecated (LCDC_ATTR) Register MASK  (Use LCDC_ATTR_Msk instead)  */
#define LCDC_ATTR_Msk                       _U_(0x2F2F)                                    /**< (LCDC_ATTR) Register Mask  */

#define LCDC_ATTR_OVR_Pos                   1                                              /**< (LCDC_ATTR Position) Overlay x Update Attribute */
#define LCDC_ATTR_OVR_Msk                   (_U_(0x3) << LCDC_ATTR_OVR_Pos)                /**< (LCDC_ATTR Mask) OVR */
#define LCDC_ATTR_OVR(value)                (LCDC_ATTR_OVR_Msk & ((value) << LCDC_ATTR_OVR_Pos))  

/* -------- LCDC_BASECHER : (LCDC Offset: 0x40) (/W 32) Base Layer Channel Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHEN:1;                    /**< bit:      0  Channel Enable                           */
    uint32_t UPDATEEN:1;                /**< bit:      1  Update Overlay Attributes Enable         */
    uint32_t A2QEN:1;                   /**< bit:      2  Add To Queue Enable                      */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_BASECHER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_BASECHER_OFFSET                (0x40)                                        /**<  (LCDC_BASECHER) Base Layer Channel Enable Register  Offset */

#define LCDC_BASECHER_CHEN_Pos              0                                              /**< (LCDC_BASECHER) Channel Enable Position */
#define LCDC_BASECHER_CHEN_Msk              (_U_(0x1) << LCDC_BASECHER_CHEN_Pos)           /**< (LCDC_BASECHER) Channel Enable Mask */
#define LCDC_BASECHER_CHEN                  LCDC_BASECHER_CHEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASECHER_CHEN_Msk instead */
#define LCDC_BASECHER_UPDATEEN_Pos          1                                              /**< (LCDC_BASECHER) Update Overlay Attributes Enable Position */
#define LCDC_BASECHER_UPDATEEN_Msk          (_U_(0x1) << LCDC_BASECHER_UPDATEEN_Pos)       /**< (LCDC_BASECHER) Update Overlay Attributes Enable Mask */
#define LCDC_BASECHER_UPDATEEN              LCDC_BASECHER_UPDATEEN_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASECHER_UPDATEEN_Msk instead */
#define LCDC_BASECHER_A2QEN_Pos             2                                              /**< (LCDC_BASECHER) Add To Queue Enable Position */
#define LCDC_BASECHER_A2QEN_Msk             (_U_(0x1) << LCDC_BASECHER_A2QEN_Pos)          /**< (LCDC_BASECHER) Add To Queue Enable Mask */
#define LCDC_BASECHER_A2QEN                 LCDC_BASECHER_A2QEN_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASECHER_A2QEN_Msk instead */
#define LCDC_BASECHER_MASK                  _U_(0x07)                                      /**< \deprecated (LCDC_BASECHER) Register MASK  (Use LCDC_BASECHER_Msk instead)  */
#define LCDC_BASECHER_Msk                   _U_(0x07)                                      /**< (LCDC_BASECHER) Register Mask  */


/* -------- LCDC_BASECHDR : (LCDC Offset: 0x44) (/W 32) Base Layer Channel Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHDIS:1;                   /**< bit:      0  Channel Disable                          */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t CHRST:1;                   /**< bit:      8  Channel Reset                            */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_BASECHDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_BASECHDR_OFFSET                (0x44)                                        /**<  (LCDC_BASECHDR) Base Layer Channel Disable Register  Offset */

#define LCDC_BASECHDR_CHDIS_Pos             0                                              /**< (LCDC_BASECHDR) Channel Disable Position */
#define LCDC_BASECHDR_CHDIS_Msk             (_U_(0x1) << LCDC_BASECHDR_CHDIS_Pos)          /**< (LCDC_BASECHDR) Channel Disable Mask */
#define LCDC_BASECHDR_CHDIS                 LCDC_BASECHDR_CHDIS_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASECHDR_CHDIS_Msk instead */
#define LCDC_BASECHDR_CHRST_Pos             8                                              /**< (LCDC_BASECHDR) Channel Reset Position */
#define LCDC_BASECHDR_CHRST_Msk             (_U_(0x1) << LCDC_BASECHDR_CHRST_Pos)          /**< (LCDC_BASECHDR) Channel Reset Mask */
#define LCDC_BASECHDR_CHRST                 LCDC_BASECHDR_CHRST_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASECHDR_CHRST_Msk instead */
#define LCDC_BASECHDR_MASK                  _U_(0x101)                                     /**< \deprecated (LCDC_BASECHDR) Register MASK  (Use LCDC_BASECHDR_Msk instead)  */
#define LCDC_BASECHDR_Msk                   _U_(0x101)                                     /**< (LCDC_BASECHDR) Register Mask  */


/* -------- LCDC_BASECHSR : (LCDC Offset: 0x48) (R/ 32) Base Layer Channel Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHSR:1;                    /**< bit:      0  Channel Status                           */
    uint32_t UPDATESR:1;                /**< bit:      1  Update Overlay Attributes In Progress Status */
    uint32_t A2QSR:1;                   /**< bit:      2  Add To Queue Status                      */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_BASECHSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_BASECHSR_OFFSET                (0x48)                                        /**<  (LCDC_BASECHSR) Base Layer Channel Status Register  Offset */

#define LCDC_BASECHSR_CHSR_Pos              0                                              /**< (LCDC_BASECHSR) Channel Status Position */
#define LCDC_BASECHSR_CHSR_Msk              (_U_(0x1) << LCDC_BASECHSR_CHSR_Pos)           /**< (LCDC_BASECHSR) Channel Status Mask */
#define LCDC_BASECHSR_CHSR                  LCDC_BASECHSR_CHSR_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASECHSR_CHSR_Msk instead */
#define LCDC_BASECHSR_UPDATESR_Pos          1                                              /**< (LCDC_BASECHSR) Update Overlay Attributes In Progress Status Position */
#define LCDC_BASECHSR_UPDATESR_Msk          (_U_(0x1) << LCDC_BASECHSR_UPDATESR_Pos)       /**< (LCDC_BASECHSR) Update Overlay Attributes In Progress Status Mask */
#define LCDC_BASECHSR_UPDATESR              LCDC_BASECHSR_UPDATESR_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASECHSR_UPDATESR_Msk instead */
#define LCDC_BASECHSR_A2QSR_Pos             2                                              /**< (LCDC_BASECHSR) Add To Queue Status Position */
#define LCDC_BASECHSR_A2QSR_Msk             (_U_(0x1) << LCDC_BASECHSR_A2QSR_Pos)          /**< (LCDC_BASECHSR) Add To Queue Status Mask */
#define LCDC_BASECHSR_A2QSR                 LCDC_BASECHSR_A2QSR_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASECHSR_A2QSR_Msk instead */
#define LCDC_BASECHSR_MASK                  _U_(0x07)                                      /**< \deprecated (LCDC_BASECHSR) Register MASK  (Use LCDC_BASECHSR_Msk instead)  */
#define LCDC_BASECHSR_Msk                   _U_(0x07)                                      /**< (LCDC_BASECHSR) Register Mask  */


/* -------- LCDC_BASEIER : (LCDC Offset: 0x4c) (/W 32) Base Layer Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DMA:1;                     /**< bit:      2  End of DMA Transfer Interrupt Enable     */
    uint32_t DSCR:1;                    /**< bit:      3  Descriptor Loaded Interrupt Enable       */
    uint32_t ADD:1;                     /**< bit:      4  Head Descriptor Loaded Interrupt Enable  */
    uint32_t DONE:1;                    /**< bit:      5  End of List Interrupt Enable             */
    uint32_t OVR:1;                     /**< bit:      6  Overflow Interrupt Enable                */
    uint32_t :25;                       /**< bit:  7..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_BASEIER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_BASEIER_OFFSET                 (0x4C)                                        /**<  (LCDC_BASEIER) Base Layer Interrupt Enable Register  Offset */

#define LCDC_BASEIER_DMA_Pos                2                                              /**< (LCDC_BASEIER) End of DMA Transfer Interrupt Enable Position */
#define LCDC_BASEIER_DMA_Msk                (_U_(0x1) << LCDC_BASEIER_DMA_Pos)             /**< (LCDC_BASEIER) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_BASEIER_DMA                    LCDC_BASEIER_DMA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASEIER_DMA_Msk instead */
#define LCDC_BASEIER_DSCR_Pos               3                                              /**< (LCDC_BASEIER) Descriptor Loaded Interrupt Enable Position */
#define LCDC_BASEIER_DSCR_Msk               (_U_(0x1) << LCDC_BASEIER_DSCR_Pos)            /**< (LCDC_BASEIER) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_BASEIER_DSCR                   LCDC_BASEIER_DSCR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASEIER_DSCR_Msk instead */
#define LCDC_BASEIER_ADD_Pos                4                                              /**< (LCDC_BASEIER) Head Descriptor Loaded Interrupt Enable Position */
#define LCDC_BASEIER_ADD_Msk                (_U_(0x1) << LCDC_BASEIER_ADD_Pos)             /**< (LCDC_BASEIER) Head Descriptor Loaded Interrupt Enable Mask */
#define LCDC_BASEIER_ADD                    LCDC_BASEIER_ADD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASEIER_ADD_Msk instead */
#define LCDC_BASEIER_DONE_Pos               5                                              /**< (LCDC_BASEIER) End of List Interrupt Enable Position */
#define LCDC_BASEIER_DONE_Msk               (_U_(0x1) << LCDC_BASEIER_DONE_Pos)            /**< (LCDC_BASEIER) End of List Interrupt Enable Mask */
#define LCDC_BASEIER_DONE                   LCDC_BASEIER_DONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASEIER_DONE_Msk instead */
#define LCDC_BASEIER_OVR_Pos                6                                              /**< (LCDC_BASEIER) Overflow Interrupt Enable Position */
#define LCDC_BASEIER_OVR_Msk                (_U_(0x1) << LCDC_BASEIER_OVR_Pos)             /**< (LCDC_BASEIER) Overflow Interrupt Enable Mask */
#define LCDC_BASEIER_OVR                    LCDC_BASEIER_OVR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASEIER_OVR_Msk instead */
#define LCDC_BASEIER_MASK                   _U_(0x7C)                                      /**< \deprecated (LCDC_BASEIER) Register MASK  (Use LCDC_BASEIER_Msk instead)  */
#define LCDC_BASEIER_Msk                    _U_(0x7C)                                      /**< (LCDC_BASEIER) Register Mask  */


/* -------- LCDC_BASEIDR : (LCDC Offset: 0x50) (/W 32) Base Layer Interrupt Disabled Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DMA:1;                     /**< bit:      2  End of DMA Transfer Interrupt Disable    */
    uint32_t DSCR:1;                    /**< bit:      3  Descriptor Loaded Interrupt Disable      */
    uint32_t ADD:1;                     /**< bit:      4  Head Descriptor Loaded Interrupt Disable */
    uint32_t DONE:1;                    /**< bit:      5  End of List Interrupt Disable            */
    uint32_t OVR:1;                     /**< bit:      6  Overflow Interrupt Disable               */
    uint32_t :25;                       /**< bit:  7..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_BASEIDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_BASEIDR_OFFSET                 (0x50)                                        /**<  (LCDC_BASEIDR) Base Layer Interrupt Disabled Register  Offset */

#define LCDC_BASEIDR_DMA_Pos                2                                              /**< (LCDC_BASEIDR) End of DMA Transfer Interrupt Disable Position */
#define LCDC_BASEIDR_DMA_Msk                (_U_(0x1) << LCDC_BASEIDR_DMA_Pos)             /**< (LCDC_BASEIDR) End of DMA Transfer Interrupt Disable Mask */
#define LCDC_BASEIDR_DMA                    LCDC_BASEIDR_DMA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASEIDR_DMA_Msk instead */
#define LCDC_BASEIDR_DSCR_Pos               3                                              /**< (LCDC_BASEIDR) Descriptor Loaded Interrupt Disable Position */
#define LCDC_BASEIDR_DSCR_Msk               (_U_(0x1) << LCDC_BASEIDR_DSCR_Pos)            /**< (LCDC_BASEIDR) Descriptor Loaded Interrupt Disable Mask */
#define LCDC_BASEIDR_DSCR                   LCDC_BASEIDR_DSCR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASEIDR_DSCR_Msk instead */
#define LCDC_BASEIDR_ADD_Pos                4                                              /**< (LCDC_BASEIDR) Head Descriptor Loaded Interrupt Disable Position */
#define LCDC_BASEIDR_ADD_Msk                (_U_(0x1) << LCDC_BASEIDR_ADD_Pos)             /**< (LCDC_BASEIDR) Head Descriptor Loaded Interrupt Disable Mask */
#define LCDC_BASEIDR_ADD                    LCDC_BASEIDR_ADD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASEIDR_ADD_Msk instead */
#define LCDC_BASEIDR_DONE_Pos               5                                              /**< (LCDC_BASEIDR) End of List Interrupt Disable Position */
#define LCDC_BASEIDR_DONE_Msk               (_U_(0x1) << LCDC_BASEIDR_DONE_Pos)            /**< (LCDC_BASEIDR) End of List Interrupt Disable Mask */
#define LCDC_BASEIDR_DONE                   LCDC_BASEIDR_DONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASEIDR_DONE_Msk instead */
#define LCDC_BASEIDR_OVR_Pos                6                                              /**< (LCDC_BASEIDR) Overflow Interrupt Disable Position */
#define LCDC_BASEIDR_OVR_Msk                (_U_(0x1) << LCDC_BASEIDR_OVR_Pos)             /**< (LCDC_BASEIDR) Overflow Interrupt Disable Mask */
#define LCDC_BASEIDR_OVR                    LCDC_BASEIDR_OVR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASEIDR_OVR_Msk instead */
#define LCDC_BASEIDR_MASK                   _U_(0x7C)                                      /**< \deprecated (LCDC_BASEIDR) Register MASK  (Use LCDC_BASEIDR_Msk instead)  */
#define LCDC_BASEIDR_Msk                    _U_(0x7C)                                      /**< (LCDC_BASEIDR) Register Mask  */


/* -------- LCDC_BASEIMR : (LCDC Offset: 0x54) (R/ 32) Base Layer Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DMA:1;                     /**< bit:      2  End of DMA Transfer Interrupt Mask       */
    uint32_t DSCR:1;                    /**< bit:      3  Descriptor Loaded Interrupt Mask         */
    uint32_t ADD:1;                     /**< bit:      4  Head Descriptor Loaded Interrupt Mask    */
    uint32_t DONE:1;                    /**< bit:      5  End of List Interrupt Mask               */
    uint32_t OVR:1;                     /**< bit:      6  Overflow Interrupt Mask                  */
    uint32_t :25;                       /**< bit:  7..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_BASEIMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_BASEIMR_OFFSET                 (0x54)                                        /**<  (LCDC_BASEIMR) Base Layer Interrupt Mask Register  Offset */

#define LCDC_BASEIMR_DMA_Pos                2                                              /**< (LCDC_BASEIMR) End of DMA Transfer Interrupt Mask Position */
#define LCDC_BASEIMR_DMA_Msk                (_U_(0x1) << LCDC_BASEIMR_DMA_Pos)             /**< (LCDC_BASEIMR) End of DMA Transfer Interrupt Mask Mask */
#define LCDC_BASEIMR_DMA                    LCDC_BASEIMR_DMA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASEIMR_DMA_Msk instead */
#define LCDC_BASEIMR_DSCR_Pos               3                                              /**< (LCDC_BASEIMR) Descriptor Loaded Interrupt Mask Position */
#define LCDC_BASEIMR_DSCR_Msk               (_U_(0x1) << LCDC_BASEIMR_DSCR_Pos)            /**< (LCDC_BASEIMR) Descriptor Loaded Interrupt Mask Mask */
#define LCDC_BASEIMR_DSCR                   LCDC_BASEIMR_DSCR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASEIMR_DSCR_Msk instead */
#define LCDC_BASEIMR_ADD_Pos                4                                              /**< (LCDC_BASEIMR) Head Descriptor Loaded Interrupt Mask Position */
#define LCDC_BASEIMR_ADD_Msk                (_U_(0x1) << LCDC_BASEIMR_ADD_Pos)             /**< (LCDC_BASEIMR) Head Descriptor Loaded Interrupt Mask Mask */
#define LCDC_BASEIMR_ADD                    LCDC_BASEIMR_ADD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASEIMR_ADD_Msk instead */
#define LCDC_BASEIMR_DONE_Pos               5                                              /**< (LCDC_BASEIMR) End of List Interrupt Mask Position */
#define LCDC_BASEIMR_DONE_Msk               (_U_(0x1) << LCDC_BASEIMR_DONE_Pos)            /**< (LCDC_BASEIMR) End of List Interrupt Mask Mask */
#define LCDC_BASEIMR_DONE                   LCDC_BASEIMR_DONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASEIMR_DONE_Msk instead */
#define LCDC_BASEIMR_OVR_Pos                6                                              /**< (LCDC_BASEIMR) Overflow Interrupt Mask Position */
#define LCDC_BASEIMR_OVR_Msk                (_U_(0x1) << LCDC_BASEIMR_OVR_Pos)             /**< (LCDC_BASEIMR) Overflow Interrupt Mask Mask */
#define LCDC_BASEIMR_OVR                    LCDC_BASEIMR_OVR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASEIMR_OVR_Msk instead */
#define LCDC_BASEIMR_MASK                   _U_(0x7C)                                      /**< \deprecated (LCDC_BASEIMR) Register MASK  (Use LCDC_BASEIMR_Msk instead)  */
#define LCDC_BASEIMR_Msk                    _U_(0x7C)                                      /**< (LCDC_BASEIMR) Register Mask  */


/* -------- LCDC_BASEISR : (LCDC Offset: 0x58) (R/ 32) Base Layer Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DMA:1;                     /**< bit:      2  End of DMA Transfer                      */
    uint32_t DSCR:1;                    /**< bit:      3  DMA Descriptor Loaded                    */
    uint32_t ADD:1;                     /**< bit:      4  Head Descriptor Loaded                   */
    uint32_t DONE:1;                    /**< bit:      5  End of List Detected                     */
    uint32_t OVR:1;                     /**< bit:      6  Overflow Detected                        */
    uint32_t :25;                       /**< bit:  7..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_BASEISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_BASEISR_OFFSET                 (0x58)                                        /**<  (LCDC_BASEISR) Base Layer Interrupt Status Register  Offset */

#define LCDC_BASEISR_DMA_Pos                2                                              /**< (LCDC_BASEISR) End of DMA Transfer Position */
#define LCDC_BASEISR_DMA_Msk                (_U_(0x1) << LCDC_BASEISR_DMA_Pos)             /**< (LCDC_BASEISR) End of DMA Transfer Mask */
#define LCDC_BASEISR_DMA                    LCDC_BASEISR_DMA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASEISR_DMA_Msk instead */
#define LCDC_BASEISR_DSCR_Pos               3                                              /**< (LCDC_BASEISR) DMA Descriptor Loaded Position */
#define LCDC_BASEISR_DSCR_Msk               (_U_(0x1) << LCDC_BASEISR_DSCR_Pos)            /**< (LCDC_BASEISR) DMA Descriptor Loaded Mask */
#define LCDC_BASEISR_DSCR                   LCDC_BASEISR_DSCR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASEISR_DSCR_Msk instead */
#define LCDC_BASEISR_ADD_Pos                4                                              /**< (LCDC_BASEISR) Head Descriptor Loaded Position */
#define LCDC_BASEISR_ADD_Msk                (_U_(0x1) << LCDC_BASEISR_ADD_Pos)             /**< (LCDC_BASEISR) Head Descriptor Loaded Mask */
#define LCDC_BASEISR_ADD                    LCDC_BASEISR_ADD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASEISR_ADD_Msk instead */
#define LCDC_BASEISR_DONE_Pos               5                                              /**< (LCDC_BASEISR) End of List Detected Position */
#define LCDC_BASEISR_DONE_Msk               (_U_(0x1) << LCDC_BASEISR_DONE_Pos)            /**< (LCDC_BASEISR) End of List Detected Mask */
#define LCDC_BASEISR_DONE                   LCDC_BASEISR_DONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASEISR_DONE_Msk instead */
#define LCDC_BASEISR_OVR_Pos                6                                              /**< (LCDC_BASEISR) Overflow Detected Position */
#define LCDC_BASEISR_OVR_Msk                (_U_(0x1) << LCDC_BASEISR_OVR_Pos)             /**< (LCDC_BASEISR) Overflow Detected Mask */
#define LCDC_BASEISR_OVR                    LCDC_BASEISR_OVR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASEISR_OVR_Msk instead */
#define LCDC_BASEISR_MASK                   _U_(0x7C)                                      /**< \deprecated (LCDC_BASEISR) Register MASK  (Use LCDC_BASEISR_Msk instead)  */
#define LCDC_BASEISR_Msk                    _U_(0x7C)                                      /**< (LCDC_BASEISR) Register Mask  */


/* -------- LCDC_BASEHEAD : (LCDC Offset: 0x5c) (R/W 32) Base DMA Head Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t HEAD:30;                   /**< bit:  2..31  DMA Head Pointer                         */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_BASEHEAD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_BASEHEAD_OFFSET                (0x5C)                                        /**<  (LCDC_BASEHEAD) Base DMA Head Register  Offset */

#define LCDC_BASEHEAD_HEAD_Pos              2                                              /**< (LCDC_BASEHEAD) DMA Head Pointer Position */
#define LCDC_BASEHEAD_HEAD_Msk              (_U_(0x3FFFFFFF) << LCDC_BASEHEAD_HEAD_Pos)    /**< (LCDC_BASEHEAD) DMA Head Pointer Mask */
#define LCDC_BASEHEAD_HEAD(value)           (LCDC_BASEHEAD_HEAD_Msk & ((value) << LCDC_BASEHEAD_HEAD_Pos))
#define LCDC_BASEHEAD_MASK                  _U_(0xFFFFFFFC)                                /**< \deprecated (LCDC_BASEHEAD) Register MASK  (Use LCDC_BASEHEAD_Msk instead)  */
#define LCDC_BASEHEAD_Msk                   _U_(0xFFFFFFFC)                                /**< (LCDC_BASEHEAD) Register Mask  */


/* -------- LCDC_BASEADDR : (LCDC Offset: 0x60) (R/W 32) Base DMA Address Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR:32;                   /**< bit:  0..31  DMA Transfer Start Address               */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_BASEADDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_BASEADDR_OFFSET                (0x60)                                        /**<  (LCDC_BASEADDR) Base DMA Address Register  Offset */

#define LCDC_BASEADDR_ADDR_Pos              0                                              /**< (LCDC_BASEADDR) DMA Transfer Start Address Position */
#define LCDC_BASEADDR_ADDR_Msk              (_U_(0xFFFFFFFF) << LCDC_BASEADDR_ADDR_Pos)    /**< (LCDC_BASEADDR) DMA Transfer Start Address Mask */
#define LCDC_BASEADDR_ADDR(value)           (LCDC_BASEADDR_ADDR_Msk & ((value) << LCDC_BASEADDR_ADDR_Pos))
#define LCDC_BASEADDR_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_BASEADDR) Register MASK  (Use LCDC_BASEADDR_Msk instead)  */
#define LCDC_BASEADDR_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_BASEADDR) Register Mask  */


/* -------- LCDC_BASECTRL : (LCDC Offset: 0x64) (R/W 32) Base DMA Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DFETCH:1;                  /**< bit:      0  Transfer Descriptor Fetch Enable         */
    uint32_t LFETCH:1;                  /**< bit:      1  Lookup Table Fetch Enable                */
    uint32_t DMAIEN:1;                  /**< bit:      2  End of DMA Transfer Interrupt Enable     */
    uint32_t DSCRIEN:1;                 /**< bit:      3  Descriptor Loaded Interrupt Enable       */
    uint32_t ADDIEN:1;                  /**< bit:      4  Add Head Descriptor to Queue Interrupt Enable */
    uint32_t DONEIEN:1;                 /**< bit:      5  End of List Interrupt Enable             */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_BASECTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_BASECTRL_OFFSET                (0x64)                                        /**<  (LCDC_BASECTRL) Base DMA Control Register  Offset */

#define LCDC_BASECTRL_DFETCH_Pos            0                                              /**< (LCDC_BASECTRL) Transfer Descriptor Fetch Enable Position */
#define LCDC_BASECTRL_DFETCH_Msk            (_U_(0x1) << LCDC_BASECTRL_DFETCH_Pos)         /**< (LCDC_BASECTRL) Transfer Descriptor Fetch Enable Mask */
#define LCDC_BASECTRL_DFETCH                LCDC_BASECTRL_DFETCH_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASECTRL_DFETCH_Msk instead */
#define LCDC_BASECTRL_LFETCH_Pos            1                                              /**< (LCDC_BASECTRL) Lookup Table Fetch Enable Position */
#define LCDC_BASECTRL_LFETCH_Msk            (_U_(0x1) << LCDC_BASECTRL_LFETCH_Pos)         /**< (LCDC_BASECTRL) Lookup Table Fetch Enable Mask */
#define LCDC_BASECTRL_LFETCH                LCDC_BASECTRL_LFETCH_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASECTRL_LFETCH_Msk instead */
#define LCDC_BASECTRL_DMAIEN_Pos            2                                              /**< (LCDC_BASECTRL) End of DMA Transfer Interrupt Enable Position */
#define LCDC_BASECTRL_DMAIEN_Msk            (_U_(0x1) << LCDC_BASECTRL_DMAIEN_Pos)         /**< (LCDC_BASECTRL) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_BASECTRL_DMAIEN                LCDC_BASECTRL_DMAIEN_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASECTRL_DMAIEN_Msk instead */
#define LCDC_BASECTRL_DSCRIEN_Pos           3                                              /**< (LCDC_BASECTRL) Descriptor Loaded Interrupt Enable Position */
#define LCDC_BASECTRL_DSCRIEN_Msk           (_U_(0x1) << LCDC_BASECTRL_DSCRIEN_Pos)        /**< (LCDC_BASECTRL) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_BASECTRL_DSCRIEN               LCDC_BASECTRL_DSCRIEN_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASECTRL_DSCRIEN_Msk instead */
#define LCDC_BASECTRL_ADDIEN_Pos            4                                              /**< (LCDC_BASECTRL) Add Head Descriptor to Queue Interrupt Enable Position */
#define LCDC_BASECTRL_ADDIEN_Msk            (_U_(0x1) << LCDC_BASECTRL_ADDIEN_Pos)         /**< (LCDC_BASECTRL) Add Head Descriptor to Queue Interrupt Enable Mask */
#define LCDC_BASECTRL_ADDIEN                LCDC_BASECTRL_ADDIEN_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASECTRL_ADDIEN_Msk instead */
#define LCDC_BASECTRL_DONEIEN_Pos           5                                              /**< (LCDC_BASECTRL) End of List Interrupt Enable Position */
#define LCDC_BASECTRL_DONEIEN_Msk           (_U_(0x1) << LCDC_BASECTRL_DONEIEN_Pos)        /**< (LCDC_BASECTRL) End of List Interrupt Enable Mask */
#define LCDC_BASECTRL_DONEIEN               LCDC_BASECTRL_DONEIEN_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASECTRL_DONEIEN_Msk instead */
#define LCDC_BASECTRL_MASK                  _U_(0x3F)                                      /**< \deprecated (LCDC_BASECTRL) Register MASK  (Use LCDC_BASECTRL_Msk instead)  */
#define LCDC_BASECTRL_Msk                   _U_(0x3F)                                      /**< (LCDC_BASECTRL) Register Mask  */


/* -------- LCDC_BASENEXT : (LCDC Offset: 0x68) (R/W 32) Base DMA Next Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NEXT:32;                   /**< bit:  0..31  DMA Descriptor Next Address              */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_BASENEXT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_BASENEXT_OFFSET                (0x68)                                        /**<  (LCDC_BASENEXT) Base DMA Next Register  Offset */

#define LCDC_BASENEXT_NEXT_Pos              0                                              /**< (LCDC_BASENEXT) DMA Descriptor Next Address Position */
#define LCDC_BASENEXT_NEXT_Msk              (_U_(0xFFFFFFFF) << LCDC_BASENEXT_NEXT_Pos)    /**< (LCDC_BASENEXT) DMA Descriptor Next Address Mask */
#define LCDC_BASENEXT_NEXT(value)           (LCDC_BASENEXT_NEXT_Msk & ((value) << LCDC_BASENEXT_NEXT_Pos))
#define LCDC_BASENEXT_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_BASENEXT) Register MASK  (Use LCDC_BASENEXT_Msk instead)  */
#define LCDC_BASENEXT_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_BASENEXT) Register Mask  */


/* -------- LCDC_BASECFG0 : (LCDC Offset: 0x6c) (R/W 32) Base Layer Configuration Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIF:1;                     /**< bit:      0  Source Interface                         */
    uint32_t :3;                        /**< bit:   1..3  Reserved */
    uint32_t BLEN:2;                    /**< bit:   4..5  AHB Burst Length                         */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t DLBO:1;                    /**< bit:      8  Defined Length Burst Only For Channel Bus Transaction */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_BASECFG0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_BASECFG0_OFFSET                (0x6C)                                        /**<  (LCDC_BASECFG0) Base Layer Configuration Register 0  Offset */

#define LCDC_BASECFG0_SIF_Pos               0                                              /**< (LCDC_BASECFG0) Source Interface Position */
#define LCDC_BASECFG0_SIF_Msk               (_U_(0x1) << LCDC_BASECFG0_SIF_Pos)            /**< (LCDC_BASECFG0) Source Interface Mask */
#define LCDC_BASECFG0_SIF                   LCDC_BASECFG0_SIF_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASECFG0_SIF_Msk instead */
#define LCDC_BASECFG0_BLEN_Pos              4                                              /**< (LCDC_BASECFG0) AHB Burst Length Position */
#define LCDC_BASECFG0_BLEN_Msk              (_U_(0x3) << LCDC_BASECFG0_BLEN_Pos)           /**< (LCDC_BASECFG0) AHB Burst Length Mask */
#define LCDC_BASECFG0_BLEN(value)           (LCDC_BASECFG0_BLEN_Msk & ((value) << LCDC_BASECFG0_BLEN_Pos))
#define   LCDC_BASECFG0_BLEN_AHB_SINGLE_Val _U_(0x0)                                       /**< (LCDC_BASECFG0) AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_BASECFG0_BLEN_AHB_INCR4_Val  _U_(0x1)                                       /**< (LCDC_BASECFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 4 data. An AHB INCR4 Burst is used. SINGLE, INCR and INCR4 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_BASECFG0_BLEN_AHB_INCR8_Val  _U_(0x2)                                       /**< (LCDC_BASECFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 8 data. An AHB INCR8 Burst is used. SINGLE, INCR, INCR4 and INCR8 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_BASECFG0_BLEN_AHB_INCR16_Val _U_(0x3)                                       /**< (LCDC_BASECFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 16 data. An AHB INCR16 Burst is used. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define LCDC_BASECFG0_BLEN_AHB_SINGLE       (LCDC_BASECFG0_BLEN_AHB_SINGLE_Val << LCDC_BASECFG0_BLEN_Pos)  /**< (LCDC_BASECFG0) AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_BASECFG0_BLEN_AHB_INCR4        (LCDC_BASECFG0_BLEN_AHB_INCR4_Val << LCDC_BASECFG0_BLEN_Pos)  /**< (LCDC_BASECFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 4 data. An AHB INCR4 Burst is used. SINGLE, INCR and INCR4 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_BASECFG0_BLEN_AHB_INCR8        (LCDC_BASECFG0_BLEN_AHB_INCR8_Val << LCDC_BASECFG0_BLEN_Pos)  /**< (LCDC_BASECFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 8 data. An AHB INCR8 Burst is used. SINGLE, INCR, INCR4 and INCR8 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_BASECFG0_BLEN_AHB_INCR16       (LCDC_BASECFG0_BLEN_AHB_INCR16_Val << LCDC_BASECFG0_BLEN_Pos)  /**< (LCDC_BASECFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 16 data. An AHB INCR16 Burst is used. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_BASECFG0_DLBO_Pos              8                                              /**< (LCDC_BASECFG0) Defined Length Burst Only For Channel Bus Transaction Position */
#define LCDC_BASECFG0_DLBO_Msk              (_U_(0x1) << LCDC_BASECFG0_DLBO_Pos)           /**< (LCDC_BASECFG0) Defined Length Burst Only For Channel Bus Transaction Mask */
#define LCDC_BASECFG0_DLBO                  LCDC_BASECFG0_DLBO_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASECFG0_DLBO_Msk instead */
#define LCDC_BASECFG0_MASK                  _U_(0x131)                                     /**< \deprecated (LCDC_BASECFG0) Register MASK  (Use LCDC_BASECFG0_Msk instead)  */
#define LCDC_BASECFG0_Msk                   _U_(0x131)                                     /**< (LCDC_BASECFG0) Register Mask  */


/* -------- LCDC_BASECFG1 : (LCDC Offset: 0x70) (R/W 32) Base Layer Configuration Register 1 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CLUTEN:1;                  /**< bit:      0  Color Lookup Table Mode Enable           */
    uint32_t :3;                        /**< bit:   1..3  Reserved */
    uint32_t RGBMODE:4;                 /**< bit:   4..7  RGB Mode Input Selection                 */
    uint32_t CLUTMODE:2;                /**< bit:   8..9  Color Lookup Table Mode Input Selection  */
    uint32_t :22;                       /**< bit: 10..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_BASECFG1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_BASECFG1_OFFSET                (0x70)                                        /**<  (LCDC_BASECFG1) Base Layer Configuration Register 1  Offset */

#define LCDC_BASECFG1_CLUTEN_Pos            0                                              /**< (LCDC_BASECFG1) Color Lookup Table Mode Enable Position */
#define LCDC_BASECFG1_CLUTEN_Msk            (_U_(0x1) << LCDC_BASECFG1_CLUTEN_Pos)         /**< (LCDC_BASECFG1) Color Lookup Table Mode Enable Mask */
#define LCDC_BASECFG1_CLUTEN                LCDC_BASECFG1_CLUTEN_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASECFG1_CLUTEN_Msk instead */
#define LCDC_BASECFG1_RGBMODE_Pos           4                                              /**< (LCDC_BASECFG1) RGB Mode Input Selection Position */
#define LCDC_BASECFG1_RGBMODE_Msk           (_U_(0xF) << LCDC_BASECFG1_RGBMODE_Pos)        /**< (LCDC_BASECFG1) RGB Mode Input Selection Mask */
#define LCDC_BASECFG1_RGBMODE(value)        (LCDC_BASECFG1_RGBMODE_Msk & ((value) << LCDC_BASECFG1_RGBMODE_Pos))
#define   LCDC_BASECFG1_RGBMODE_12BPP_RGB_444_Val _U_(0x0)                                       /**< (LCDC_BASECFG1) 12 bpp RGB 444  */
#define   LCDC_BASECFG1_RGBMODE_16BPP_ARGB_4444_Val _U_(0x1)                                       /**< (LCDC_BASECFG1) 16 bpp ARGB 4444  */
#define   LCDC_BASECFG1_RGBMODE_16BPP_RGBA_4444_Val _U_(0x2)                                       /**< (LCDC_BASECFG1) 16 bpp RGBA 4444  */
#define   LCDC_BASECFG1_RGBMODE_16BPP_RGB_565_Val _U_(0x3)                                       /**< (LCDC_BASECFG1) 16 bpp RGB 565  */
#define   LCDC_BASECFG1_RGBMODE_16BPP_TRGB_1555_Val _U_(0x4)                                       /**< (LCDC_BASECFG1) 16 bpp TRGB 1555  */
#define   LCDC_BASECFG1_RGBMODE_18BPP_RGB_666_Val _U_(0x5)                                       /**< (LCDC_BASECFG1) 18 bpp RGB 666  */
#define   LCDC_BASECFG1_RGBMODE_18BPP_RGB_666PACKED_Val _U_(0x6)                                       /**< (LCDC_BASECFG1) 18 bpp RGB 666 PACKED  */
#define   LCDC_BASECFG1_RGBMODE_19BPP_TRGB_1666_Val _U_(0x7)                                       /**< (LCDC_BASECFG1) 19 bpp TRGB 1666  */
#define   LCDC_BASECFG1_RGBMODE_19BPP_TRGB_PACKED_Val _U_(0x8)                                       /**< (LCDC_BASECFG1) 19 bpp TRGB 1666 PACKED  */
#define   LCDC_BASECFG1_RGBMODE_24BPP_RGB_888_Val _U_(0x9)                                       /**< (LCDC_BASECFG1) 24 bpp RGB 888  */
#define   LCDC_BASECFG1_RGBMODE_24BPP_RGB_888_PACKED_Val _U_(0xA)                                       /**< (LCDC_BASECFG1) 24 bpp RGB 888 PACKED  */
#define   LCDC_BASECFG1_RGBMODE_25BPP_TRGB_1888_Val _U_(0xB)                                       /**< (LCDC_BASECFG1) 25 bpp TRGB 1888  */
#define   LCDC_BASECFG1_RGBMODE_32BPP_ARGB_8888_Val _U_(0xC)                                       /**< (LCDC_BASECFG1) 32 bpp ARGB 8888  */
#define   LCDC_BASECFG1_RGBMODE_32BPP_RGBA_8888_Val _U_(0xD)                                       /**< (LCDC_BASECFG1) 32 bpp RGBA 8888  */
#define LCDC_BASECFG1_RGBMODE_12BPP_RGB_444 (LCDC_BASECFG1_RGBMODE_12BPP_RGB_444_Val << LCDC_BASECFG1_RGBMODE_Pos)  /**< (LCDC_BASECFG1) 12 bpp RGB 444 Position  */
#define LCDC_BASECFG1_RGBMODE_16BPP_ARGB_4444 (LCDC_BASECFG1_RGBMODE_16BPP_ARGB_4444_Val << LCDC_BASECFG1_RGBMODE_Pos)  /**< (LCDC_BASECFG1) 16 bpp ARGB 4444 Position  */
#define LCDC_BASECFG1_RGBMODE_16BPP_RGBA_4444 (LCDC_BASECFG1_RGBMODE_16BPP_RGBA_4444_Val << LCDC_BASECFG1_RGBMODE_Pos)  /**< (LCDC_BASECFG1) 16 bpp RGBA 4444 Position  */
#define LCDC_BASECFG1_RGBMODE_16BPP_RGB_565 (LCDC_BASECFG1_RGBMODE_16BPP_RGB_565_Val << LCDC_BASECFG1_RGBMODE_Pos)  /**< (LCDC_BASECFG1) 16 bpp RGB 565 Position  */
#define LCDC_BASECFG1_RGBMODE_16BPP_TRGB_1555 (LCDC_BASECFG1_RGBMODE_16BPP_TRGB_1555_Val << LCDC_BASECFG1_RGBMODE_Pos)  /**< (LCDC_BASECFG1) 16 bpp TRGB 1555 Position  */
#define LCDC_BASECFG1_RGBMODE_18BPP_RGB_666 (LCDC_BASECFG1_RGBMODE_18BPP_RGB_666_Val << LCDC_BASECFG1_RGBMODE_Pos)  /**< (LCDC_BASECFG1) 18 bpp RGB 666 Position  */
#define LCDC_BASECFG1_RGBMODE_18BPP_RGB_666PACKED (LCDC_BASECFG1_RGBMODE_18BPP_RGB_666PACKED_Val << LCDC_BASECFG1_RGBMODE_Pos)  /**< (LCDC_BASECFG1) 18 bpp RGB 666 PACKED Position  */
#define LCDC_BASECFG1_RGBMODE_19BPP_TRGB_1666 (LCDC_BASECFG1_RGBMODE_19BPP_TRGB_1666_Val << LCDC_BASECFG1_RGBMODE_Pos)  /**< (LCDC_BASECFG1) 19 bpp TRGB 1666 Position  */
#define LCDC_BASECFG1_RGBMODE_19BPP_TRGB_PACKED (LCDC_BASECFG1_RGBMODE_19BPP_TRGB_PACKED_Val << LCDC_BASECFG1_RGBMODE_Pos)  /**< (LCDC_BASECFG1) 19 bpp TRGB 1666 PACKED Position  */
#define LCDC_BASECFG1_RGBMODE_24BPP_RGB_888 (LCDC_BASECFG1_RGBMODE_24BPP_RGB_888_Val << LCDC_BASECFG1_RGBMODE_Pos)  /**< (LCDC_BASECFG1) 24 bpp RGB 888 Position  */
#define LCDC_BASECFG1_RGBMODE_24BPP_RGB_888_PACKED (LCDC_BASECFG1_RGBMODE_24BPP_RGB_888_PACKED_Val << LCDC_BASECFG1_RGBMODE_Pos)  /**< (LCDC_BASECFG1) 24 bpp RGB 888 PACKED Position  */
#define LCDC_BASECFG1_RGBMODE_25BPP_TRGB_1888 (LCDC_BASECFG1_RGBMODE_25BPP_TRGB_1888_Val << LCDC_BASECFG1_RGBMODE_Pos)  /**< (LCDC_BASECFG1) 25 bpp TRGB 1888 Position  */
#define LCDC_BASECFG1_RGBMODE_32BPP_ARGB_8888 (LCDC_BASECFG1_RGBMODE_32BPP_ARGB_8888_Val << LCDC_BASECFG1_RGBMODE_Pos)  /**< (LCDC_BASECFG1) 32 bpp ARGB 8888 Position  */
#define LCDC_BASECFG1_RGBMODE_32BPP_RGBA_8888 (LCDC_BASECFG1_RGBMODE_32BPP_RGBA_8888_Val << LCDC_BASECFG1_RGBMODE_Pos)  /**< (LCDC_BASECFG1) 32 bpp RGBA 8888 Position  */
#define LCDC_BASECFG1_CLUTMODE_Pos          8                                              /**< (LCDC_BASECFG1) Color Lookup Table Mode Input Selection Position */
#define LCDC_BASECFG1_CLUTMODE_Msk          (_U_(0x3) << LCDC_BASECFG1_CLUTMODE_Pos)       /**< (LCDC_BASECFG1) Color Lookup Table Mode Input Selection Mask */
#define LCDC_BASECFG1_CLUTMODE(value)       (LCDC_BASECFG1_CLUTMODE_Msk & ((value) << LCDC_BASECFG1_CLUTMODE_Pos))
#define   LCDC_BASECFG1_CLUTMODE_CLUT_1BPP_Val _U_(0x0)                                       /**< (LCDC_BASECFG1) Color Lookup Table mode set to 1 bit per pixel  */
#define   LCDC_BASECFG1_CLUTMODE_CLUT_2BPP_Val _U_(0x1)                                       /**< (LCDC_BASECFG1) Color Lookup Table mode set to 2 bits per pixel  */
#define   LCDC_BASECFG1_CLUTMODE_CLUT_4BPP_Val _U_(0x2)                                       /**< (LCDC_BASECFG1) Color Lookup Table mode set to 4 bits per pixel  */
#define   LCDC_BASECFG1_CLUTMODE_CLUT_8BPP_Val _U_(0x3)                                       /**< (LCDC_BASECFG1) Color Lookup Table mode set to 8 bits per pixel  */
#define LCDC_BASECFG1_CLUTMODE_CLUT_1BPP    (LCDC_BASECFG1_CLUTMODE_CLUT_1BPP_Val << LCDC_BASECFG1_CLUTMODE_Pos)  /**< (LCDC_BASECFG1) Color Lookup Table mode set to 1 bit per pixel Position  */
#define LCDC_BASECFG1_CLUTMODE_CLUT_2BPP    (LCDC_BASECFG1_CLUTMODE_CLUT_2BPP_Val << LCDC_BASECFG1_CLUTMODE_Pos)  /**< (LCDC_BASECFG1) Color Lookup Table mode set to 2 bits per pixel Position  */
#define LCDC_BASECFG1_CLUTMODE_CLUT_4BPP    (LCDC_BASECFG1_CLUTMODE_CLUT_4BPP_Val << LCDC_BASECFG1_CLUTMODE_Pos)  /**< (LCDC_BASECFG1) Color Lookup Table mode set to 4 bits per pixel Position  */
#define LCDC_BASECFG1_CLUTMODE_CLUT_8BPP    (LCDC_BASECFG1_CLUTMODE_CLUT_8BPP_Val << LCDC_BASECFG1_CLUTMODE_Pos)  /**< (LCDC_BASECFG1) Color Lookup Table mode set to 8 bits per pixel Position  */
#define LCDC_BASECFG1_MASK                  _U_(0x3F1)                                     /**< \deprecated (LCDC_BASECFG1) Register MASK  (Use LCDC_BASECFG1_Msk instead)  */
#define LCDC_BASECFG1_Msk                   _U_(0x3F1)                                     /**< (LCDC_BASECFG1) Register Mask  */


/* -------- LCDC_BASECFG2 : (LCDC Offset: 0x74) (R/W 32) Base Layer Configuration Register 2 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XSTRIDE:32;                /**< bit:  0..31  Horizontal Stride                        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_BASECFG2_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_BASECFG2_OFFSET                (0x74)                                        /**<  (LCDC_BASECFG2) Base Layer Configuration Register 2  Offset */

#define LCDC_BASECFG2_XSTRIDE_Pos           0                                              /**< (LCDC_BASECFG2) Horizontal Stride Position */
#define LCDC_BASECFG2_XSTRIDE_Msk           (_U_(0xFFFFFFFF) << LCDC_BASECFG2_XSTRIDE_Pos)  /**< (LCDC_BASECFG2) Horizontal Stride Mask */
#define LCDC_BASECFG2_XSTRIDE(value)        (LCDC_BASECFG2_XSTRIDE_Msk & ((value) << LCDC_BASECFG2_XSTRIDE_Pos))
#define LCDC_BASECFG2_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_BASECFG2) Register MASK  (Use LCDC_BASECFG2_Msk instead)  */
#define LCDC_BASECFG2_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_BASECFG2) Register Mask  */


/* -------- LCDC_BASECFG3 : (LCDC Offset: 0x78) (R/W 32) Base Layer Configuration Register 3 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BDEF:8;                    /**< bit:   0..7  Blue Default                             */
    uint32_t GDEF:8;                    /**< bit:  8..15  Green Default                            */
    uint32_t RDEF:8;                    /**< bit: 16..23  Red Default                              */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_BASECFG3_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_BASECFG3_OFFSET                (0x78)                                        /**<  (LCDC_BASECFG3) Base Layer Configuration Register 3  Offset */

#define LCDC_BASECFG3_BDEF_Pos              0                                              /**< (LCDC_BASECFG3) Blue Default Position */
#define LCDC_BASECFG3_BDEF_Msk              (_U_(0xFF) << LCDC_BASECFG3_BDEF_Pos)          /**< (LCDC_BASECFG3) Blue Default Mask */
#define LCDC_BASECFG3_BDEF(value)           (LCDC_BASECFG3_BDEF_Msk & ((value) << LCDC_BASECFG3_BDEF_Pos))
#define LCDC_BASECFG3_GDEF_Pos              8                                              /**< (LCDC_BASECFG3) Green Default Position */
#define LCDC_BASECFG3_GDEF_Msk              (_U_(0xFF) << LCDC_BASECFG3_GDEF_Pos)          /**< (LCDC_BASECFG3) Green Default Mask */
#define LCDC_BASECFG3_GDEF(value)           (LCDC_BASECFG3_GDEF_Msk & ((value) << LCDC_BASECFG3_GDEF_Pos))
#define LCDC_BASECFG3_RDEF_Pos              16                                             /**< (LCDC_BASECFG3) Red Default Position */
#define LCDC_BASECFG3_RDEF_Msk              (_U_(0xFF) << LCDC_BASECFG3_RDEF_Pos)          /**< (LCDC_BASECFG3) Red Default Mask */
#define LCDC_BASECFG3_RDEF(value)           (LCDC_BASECFG3_RDEF_Msk & ((value) << LCDC_BASECFG3_RDEF_Pos))
#define LCDC_BASECFG3_MASK                  _U_(0xFFFFFF)                                  /**< \deprecated (LCDC_BASECFG3) Register MASK  (Use LCDC_BASECFG3_Msk instead)  */
#define LCDC_BASECFG3_Msk                   _U_(0xFFFFFF)                                  /**< (LCDC_BASECFG3) Register Mask  */


/* -------- LCDC_BASECFG4 : (LCDC Offset: 0x7c) (R/W 32) Base Layer Configuration Register 4 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t DMA:1;                     /**< bit:      8  Use DMA Data Path                        */
    uint32_t REP:1;                     /**< bit:      9  Use Replication logic to expand RGB color to 24 bits */
    uint32_t :1;                        /**< bit:     10  Reserved */
    uint32_t DISCEN:1;                  /**< bit:     11  Discard Area Enable                      */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_BASECFG4_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_BASECFG4_OFFSET                (0x7C)                                        /**<  (LCDC_BASECFG4) Base Layer Configuration Register 4  Offset */

#define LCDC_BASECFG4_DMA_Pos               8                                              /**< (LCDC_BASECFG4) Use DMA Data Path Position */
#define LCDC_BASECFG4_DMA_Msk               (_U_(0x1) << LCDC_BASECFG4_DMA_Pos)            /**< (LCDC_BASECFG4) Use DMA Data Path Mask */
#define LCDC_BASECFG4_DMA                   LCDC_BASECFG4_DMA_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASECFG4_DMA_Msk instead */
#define LCDC_BASECFG4_REP_Pos               9                                              /**< (LCDC_BASECFG4) Use Replication logic to expand RGB color to 24 bits Position */
#define LCDC_BASECFG4_REP_Msk               (_U_(0x1) << LCDC_BASECFG4_REP_Pos)            /**< (LCDC_BASECFG4) Use Replication logic to expand RGB color to 24 bits Mask */
#define LCDC_BASECFG4_REP                   LCDC_BASECFG4_REP_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASECFG4_REP_Msk instead */
#define LCDC_BASECFG4_DISCEN_Pos            11                                             /**< (LCDC_BASECFG4) Discard Area Enable Position */
#define LCDC_BASECFG4_DISCEN_Msk            (_U_(0x1) << LCDC_BASECFG4_DISCEN_Pos)         /**< (LCDC_BASECFG4) Discard Area Enable Mask */
#define LCDC_BASECFG4_DISCEN                LCDC_BASECFG4_DISCEN_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_BASECFG4_DISCEN_Msk instead */
#define LCDC_BASECFG4_MASK                  _U_(0xB00)                                     /**< \deprecated (LCDC_BASECFG4) Register MASK  (Use LCDC_BASECFG4_Msk instead)  */
#define LCDC_BASECFG4_Msk                   _U_(0xB00)                                     /**< (LCDC_BASECFG4) Register Mask  */


/* -------- LCDC_BASECFG5 : (LCDC Offset: 0x80) (R/W 32) Base Layer Configuration Register 5 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DISCXPOS:11;               /**< bit:  0..10  Discard Area Horizontal Coordinate       */
    uint32_t :5;                        /**< bit: 11..15  Reserved */
    uint32_t DISCYPOS:11;               /**< bit: 16..26  Discard Area Vertical Coordinate         */
    uint32_t :5;                        /**< bit: 27..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_BASECFG5_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_BASECFG5_OFFSET                (0x80)                                        /**<  (LCDC_BASECFG5) Base Layer Configuration Register 5  Offset */

#define LCDC_BASECFG5_DISCXPOS_Pos          0                                              /**< (LCDC_BASECFG5) Discard Area Horizontal Coordinate Position */
#define LCDC_BASECFG5_DISCXPOS_Msk          (_U_(0x7FF) << LCDC_BASECFG5_DISCXPOS_Pos)     /**< (LCDC_BASECFG5) Discard Area Horizontal Coordinate Mask */
#define LCDC_BASECFG5_DISCXPOS(value)       (LCDC_BASECFG5_DISCXPOS_Msk & ((value) << LCDC_BASECFG5_DISCXPOS_Pos))
#define LCDC_BASECFG5_DISCYPOS_Pos          16                                             /**< (LCDC_BASECFG5) Discard Area Vertical Coordinate Position */
#define LCDC_BASECFG5_DISCYPOS_Msk          (_U_(0x7FF) << LCDC_BASECFG5_DISCYPOS_Pos)     /**< (LCDC_BASECFG5) Discard Area Vertical Coordinate Mask */
#define LCDC_BASECFG5_DISCYPOS(value)       (LCDC_BASECFG5_DISCYPOS_Msk & ((value) << LCDC_BASECFG5_DISCYPOS_Pos))
#define LCDC_BASECFG5_MASK                  _U_(0x7FF07FF)                                 /**< \deprecated (LCDC_BASECFG5) Register MASK  (Use LCDC_BASECFG5_Msk instead)  */
#define LCDC_BASECFG5_Msk                   _U_(0x7FF07FF)                                 /**< (LCDC_BASECFG5) Register Mask  */


/* -------- LCDC_BASECFG6 : (LCDC Offset: 0x84) (R/W 32) Base Layer Configuration Register 6 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DISCXSIZE:11;              /**< bit:  0..10  Discard Area Horizontal Size             */
    uint32_t :5;                        /**< bit: 11..15  Reserved */
    uint32_t DISCYSIZE:11;              /**< bit: 16..26  Discard Area Vertical Size               */
    uint32_t :5;                        /**< bit: 27..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_BASECFG6_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_BASECFG6_OFFSET                (0x84)                                        /**<  (LCDC_BASECFG6) Base Layer Configuration Register 6  Offset */

#define LCDC_BASECFG6_DISCXSIZE_Pos         0                                              /**< (LCDC_BASECFG6) Discard Area Horizontal Size Position */
#define LCDC_BASECFG6_DISCXSIZE_Msk         (_U_(0x7FF) << LCDC_BASECFG6_DISCXSIZE_Pos)    /**< (LCDC_BASECFG6) Discard Area Horizontal Size Mask */
#define LCDC_BASECFG6_DISCXSIZE(value)      (LCDC_BASECFG6_DISCXSIZE_Msk & ((value) << LCDC_BASECFG6_DISCXSIZE_Pos))
#define LCDC_BASECFG6_DISCYSIZE_Pos         16                                             /**< (LCDC_BASECFG6) Discard Area Vertical Size Position */
#define LCDC_BASECFG6_DISCYSIZE_Msk         (_U_(0x7FF) << LCDC_BASECFG6_DISCYSIZE_Pos)    /**< (LCDC_BASECFG6) Discard Area Vertical Size Mask */
#define LCDC_BASECFG6_DISCYSIZE(value)      (LCDC_BASECFG6_DISCYSIZE_Msk & ((value) << LCDC_BASECFG6_DISCYSIZE_Pos))
#define LCDC_BASECFG6_MASK                  _U_(0x7FF07FF)                                 /**< \deprecated (LCDC_BASECFG6) Register MASK  (Use LCDC_BASECFG6_Msk instead)  */
#define LCDC_BASECFG6_Msk                   _U_(0x7FF07FF)                                 /**< (LCDC_BASECFG6) Register Mask  */


/* -------- LCDC_OVR1CHER : (LCDC Offset: 0x140) (/W 32) Overlay 1 Channel Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHEN:1;                    /**< bit:      0  Channel Enable                           */
    uint32_t UPDATEEN:1;                /**< bit:      1  Update Overlay Attributes Enable         */
    uint32_t A2QEN:1;                   /**< bit:      2  Add To Queue Enable                      */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1CHER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1CHER_OFFSET                (0x140)                                       /**<  (LCDC_OVR1CHER) Overlay 1 Channel Enable Register  Offset */

#define LCDC_OVR1CHER_CHEN_Pos              0                                              /**< (LCDC_OVR1CHER) Channel Enable Position */
#define LCDC_OVR1CHER_CHEN_Msk              (_U_(0x1) << LCDC_OVR1CHER_CHEN_Pos)           /**< (LCDC_OVR1CHER) Channel Enable Mask */
#define LCDC_OVR1CHER_CHEN                  LCDC_OVR1CHER_CHEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CHER_CHEN_Msk instead */
#define LCDC_OVR1CHER_UPDATEEN_Pos          1                                              /**< (LCDC_OVR1CHER) Update Overlay Attributes Enable Position */
#define LCDC_OVR1CHER_UPDATEEN_Msk          (_U_(0x1) << LCDC_OVR1CHER_UPDATEEN_Pos)       /**< (LCDC_OVR1CHER) Update Overlay Attributes Enable Mask */
#define LCDC_OVR1CHER_UPDATEEN              LCDC_OVR1CHER_UPDATEEN_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CHER_UPDATEEN_Msk instead */
#define LCDC_OVR1CHER_A2QEN_Pos             2                                              /**< (LCDC_OVR1CHER) Add To Queue Enable Position */
#define LCDC_OVR1CHER_A2QEN_Msk             (_U_(0x1) << LCDC_OVR1CHER_A2QEN_Pos)          /**< (LCDC_OVR1CHER) Add To Queue Enable Mask */
#define LCDC_OVR1CHER_A2QEN                 LCDC_OVR1CHER_A2QEN_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CHER_A2QEN_Msk instead */
#define LCDC_OVR1CHER_MASK                  _U_(0x07)                                      /**< \deprecated (LCDC_OVR1CHER) Register MASK  (Use LCDC_OVR1CHER_Msk instead)  */
#define LCDC_OVR1CHER_Msk                   _U_(0x07)                                      /**< (LCDC_OVR1CHER) Register Mask  */


/* -------- LCDC_OVR1CHDR : (LCDC Offset: 0x144) (/W 32) Overlay 1 Channel Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHDIS:1;                   /**< bit:      0  Channel Disable                          */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t CHRST:1;                   /**< bit:      8  Channel Reset                            */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1CHDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1CHDR_OFFSET                (0x144)                                       /**<  (LCDC_OVR1CHDR) Overlay 1 Channel Disable Register  Offset */

#define LCDC_OVR1CHDR_CHDIS_Pos             0                                              /**< (LCDC_OVR1CHDR) Channel Disable Position */
#define LCDC_OVR1CHDR_CHDIS_Msk             (_U_(0x1) << LCDC_OVR1CHDR_CHDIS_Pos)          /**< (LCDC_OVR1CHDR) Channel Disable Mask */
#define LCDC_OVR1CHDR_CHDIS                 LCDC_OVR1CHDR_CHDIS_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CHDR_CHDIS_Msk instead */
#define LCDC_OVR1CHDR_CHRST_Pos             8                                              /**< (LCDC_OVR1CHDR) Channel Reset Position */
#define LCDC_OVR1CHDR_CHRST_Msk             (_U_(0x1) << LCDC_OVR1CHDR_CHRST_Pos)          /**< (LCDC_OVR1CHDR) Channel Reset Mask */
#define LCDC_OVR1CHDR_CHRST                 LCDC_OVR1CHDR_CHRST_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CHDR_CHRST_Msk instead */
#define LCDC_OVR1CHDR_MASK                  _U_(0x101)                                     /**< \deprecated (LCDC_OVR1CHDR) Register MASK  (Use LCDC_OVR1CHDR_Msk instead)  */
#define LCDC_OVR1CHDR_Msk                   _U_(0x101)                                     /**< (LCDC_OVR1CHDR) Register Mask  */


/* -------- LCDC_OVR1CHSR : (LCDC Offset: 0x148) (R/ 32) Overlay 1 Channel Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHSR:1;                    /**< bit:      0  Channel Status                           */
    uint32_t UPDATESR:1;                /**< bit:      1  Update Overlay Attributes In Progress Status */
    uint32_t A2QSR:1;                   /**< bit:      2  Add To Queue Status                      */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1CHSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1CHSR_OFFSET                (0x148)                                       /**<  (LCDC_OVR1CHSR) Overlay 1 Channel Status Register  Offset */

#define LCDC_OVR1CHSR_CHSR_Pos              0                                              /**< (LCDC_OVR1CHSR) Channel Status Position */
#define LCDC_OVR1CHSR_CHSR_Msk              (_U_(0x1) << LCDC_OVR1CHSR_CHSR_Pos)           /**< (LCDC_OVR1CHSR) Channel Status Mask */
#define LCDC_OVR1CHSR_CHSR                  LCDC_OVR1CHSR_CHSR_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CHSR_CHSR_Msk instead */
#define LCDC_OVR1CHSR_UPDATESR_Pos          1                                              /**< (LCDC_OVR1CHSR) Update Overlay Attributes In Progress Status Position */
#define LCDC_OVR1CHSR_UPDATESR_Msk          (_U_(0x1) << LCDC_OVR1CHSR_UPDATESR_Pos)       /**< (LCDC_OVR1CHSR) Update Overlay Attributes In Progress Status Mask */
#define LCDC_OVR1CHSR_UPDATESR              LCDC_OVR1CHSR_UPDATESR_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CHSR_UPDATESR_Msk instead */
#define LCDC_OVR1CHSR_A2QSR_Pos             2                                              /**< (LCDC_OVR1CHSR) Add To Queue Status Position */
#define LCDC_OVR1CHSR_A2QSR_Msk             (_U_(0x1) << LCDC_OVR1CHSR_A2QSR_Pos)          /**< (LCDC_OVR1CHSR) Add To Queue Status Mask */
#define LCDC_OVR1CHSR_A2QSR                 LCDC_OVR1CHSR_A2QSR_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CHSR_A2QSR_Msk instead */
#define LCDC_OVR1CHSR_MASK                  _U_(0x07)                                      /**< \deprecated (LCDC_OVR1CHSR) Register MASK  (Use LCDC_OVR1CHSR_Msk instead)  */
#define LCDC_OVR1CHSR_Msk                   _U_(0x07)                                      /**< (LCDC_OVR1CHSR) Register Mask  */


/* -------- LCDC_OVR1IER : (LCDC Offset: 0x14c) (/W 32) Overlay 1 Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DMA:1;                     /**< bit:      2  End of DMA Transfer Interrupt Enable     */
    uint32_t DSCR:1;                    /**< bit:      3  Descriptor Loaded Interrupt Enable       */
    uint32_t ADD:1;                     /**< bit:      4  Head Descriptor Loaded Interrupt Enable  */
    uint32_t DONE:1;                    /**< bit:      5  End of List Interrupt Enable             */
    uint32_t OVR:1;                     /**< bit:      6  Overflow Interrupt Enable                */
    uint32_t :25;                       /**< bit:  7..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1IER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1IER_OFFSET                 (0x14C)                                       /**<  (LCDC_OVR1IER) Overlay 1 Interrupt Enable Register  Offset */

#define LCDC_OVR1IER_DMA_Pos                2                                              /**< (LCDC_OVR1IER) End of DMA Transfer Interrupt Enable Position */
#define LCDC_OVR1IER_DMA_Msk                (_U_(0x1) << LCDC_OVR1IER_DMA_Pos)             /**< (LCDC_OVR1IER) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_OVR1IER_DMA                    LCDC_OVR1IER_DMA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1IER_DMA_Msk instead */
#define LCDC_OVR1IER_DSCR_Pos               3                                              /**< (LCDC_OVR1IER) Descriptor Loaded Interrupt Enable Position */
#define LCDC_OVR1IER_DSCR_Msk               (_U_(0x1) << LCDC_OVR1IER_DSCR_Pos)            /**< (LCDC_OVR1IER) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_OVR1IER_DSCR                   LCDC_OVR1IER_DSCR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1IER_DSCR_Msk instead */
#define LCDC_OVR1IER_ADD_Pos                4                                              /**< (LCDC_OVR1IER) Head Descriptor Loaded Interrupt Enable Position */
#define LCDC_OVR1IER_ADD_Msk                (_U_(0x1) << LCDC_OVR1IER_ADD_Pos)             /**< (LCDC_OVR1IER) Head Descriptor Loaded Interrupt Enable Mask */
#define LCDC_OVR1IER_ADD                    LCDC_OVR1IER_ADD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1IER_ADD_Msk instead */
#define LCDC_OVR1IER_DONE_Pos               5                                              /**< (LCDC_OVR1IER) End of List Interrupt Enable Position */
#define LCDC_OVR1IER_DONE_Msk               (_U_(0x1) << LCDC_OVR1IER_DONE_Pos)            /**< (LCDC_OVR1IER) End of List Interrupt Enable Mask */
#define LCDC_OVR1IER_DONE                   LCDC_OVR1IER_DONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1IER_DONE_Msk instead */
#define LCDC_OVR1IER_OVR_Pos                6                                              /**< (LCDC_OVR1IER) Overflow Interrupt Enable Position */
#define LCDC_OVR1IER_OVR_Msk                (_U_(0x1) << LCDC_OVR1IER_OVR_Pos)             /**< (LCDC_OVR1IER) Overflow Interrupt Enable Mask */
#define LCDC_OVR1IER_OVR                    LCDC_OVR1IER_OVR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1IER_OVR_Msk instead */
#define LCDC_OVR1IER_MASK                   _U_(0x7C)                                      /**< \deprecated (LCDC_OVR1IER) Register MASK  (Use LCDC_OVR1IER_Msk instead)  */
#define LCDC_OVR1IER_Msk                    _U_(0x7C)                                      /**< (LCDC_OVR1IER) Register Mask  */


/* -------- LCDC_OVR1IDR : (LCDC Offset: 0x150) (/W 32) Overlay 1 Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DMA:1;                     /**< bit:      2  End of DMA Transfer Interrupt Disable    */
    uint32_t DSCR:1;                    /**< bit:      3  Descriptor Loaded Interrupt Disable      */
    uint32_t ADD:1;                     /**< bit:      4  Head Descriptor Loaded Interrupt Disable */
    uint32_t DONE:1;                    /**< bit:      5  End of List Interrupt Disable            */
    uint32_t OVR:1;                     /**< bit:      6  Overflow Interrupt Disable               */
    uint32_t :25;                       /**< bit:  7..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1IDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1IDR_OFFSET                 (0x150)                                       /**<  (LCDC_OVR1IDR) Overlay 1 Interrupt Disable Register  Offset */

#define LCDC_OVR1IDR_DMA_Pos                2                                              /**< (LCDC_OVR1IDR) End of DMA Transfer Interrupt Disable Position */
#define LCDC_OVR1IDR_DMA_Msk                (_U_(0x1) << LCDC_OVR1IDR_DMA_Pos)             /**< (LCDC_OVR1IDR) End of DMA Transfer Interrupt Disable Mask */
#define LCDC_OVR1IDR_DMA                    LCDC_OVR1IDR_DMA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1IDR_DMA_Msk instead */
#define LCDC_OVR1IDR_DSCR_Pos               3                                              /**< (LCDC_OVR1IDR) Descriptor Loaded Interrupt Disable Position */
#define LCDC_OVR1IDR_DSCR_Msk               (_U_(0x1) << LCDC_OVR1IDR_DSCR_Pos)            /**< (LCDC_OVR1IDR) Descriptor Loaded Interrupt Disable Mask */
#define LCDC_OVR1IDR_DSCR                   LCDC_OVR1IDR_DSCR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1IDR_DSCR_Msk instead */
#define LCDC_OVR1IDR_ADD_Pos                4                                              /**< (LCDC_OVR1IDR) Head Descriptor Loaded Interrupt Disable Position */
#define LCDC_OVR1IDR_ADD_Msk                (_U_(0x1) << LCDC_OVR1IDR_ADD_Pos)             /**< (LCDC_OVR1IDR) Head Descriptor Loaded Interrupt Disable Mask */
#define LCDC_OVR1IDR_ADD                    LCDC_OVR1IDR_ADD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1IDR_ADD_Msk instead */
#define LCDC_OVR1IDR_DONE_Pos               5                                              /**< (LCDC_OVR1IDR) End of List Interrupt Disable Position */
#define LCDC_OVR1IDR_DONE_Msk               (_U_(0x1) << LCDC_OVR1IDR_DONE_Pos)            /**< (LCDC_OVR1IDR) End of List Interrupt Disable Mask */
#define LCDC_OVR1IDR_DONE                   LCDC_OVR1IDR_DONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1IDR_DONE_Msk instead */
#define LCDC_OVR1IDR_OVR_Pos                6                                              /**< (LCDC_OVR1IDR) Overflow Interrupt Disable Position */
#define LCDC_OVR1IDR_OVR_Msk                (_U_(0x1) << LCDC_OVR1IDR_OVR_Pos)             /**< (LCDC_OVR1IDR) Overflow Interrupt Disable Mask */
#define LCDC_OVR1IDR_OVR                    LCDC_OVR1IDR_OVR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1IDR_OVR_Msk instead */
#define LCDC_OVR1IDR_MASK                   _U_(0x7C)                                      /**< \deprecated (LCDC_OVR1IDR) Register MASK  (Use LCDC_OVR1IDR_Msk instead)  */
#define LCDC_OVR1IDR_Msk                    _U_(0x7C)                                      /**< (LCDC_OVR1IDR) Register Mask  */


/* -------- LCDC_OVR1IMR : (LCDC Offset: 0x154) (R/ 32) Overlay 1 Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DMA:1;                     /**< bit:      2  End of DMA Transfer Interrupt Mask       */
    uint32_t DSCR:1;                    /**< bit:      3  Descriptor Loaded Interrupt Mask         */
    uint32_t ADD:1;                     /**< bit:      4  Head Descriptor Loaded Interrupt Mask    */
    uint32_t DONE:1;                    /**< bit:      5  End of List Interrupt Mask               */
    uint32_t OVR:1;                     /**< bit:      6  Overflow Interrupt Mask                  */
    uint32_t :25;                       /**< bit:  7..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1IMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1IMR_OFFSET                 (0x154)                                       /**<  (LCDC_OVR1IMR) Overlay 1 Interrupt Mask Register  Offset */

#define LCDC_OVR1IMR_DMA_Pos                2                                              /**< (LCDC_OVR1IMR) End of DMA Transfer Interrupt Mask Position */
#define LCDC_OVR1IMR_DMA_Msk                (_U_(0x1) << LCDC_OVR1IMR_DMA_Pos)             /**< (LCDC_OVR1IMR) End of DMA Transfer Interrupt Mask Mask */
#define LCDC_OVR1IMR_DMA                    LCDC_OVR1IMR_DMA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1IMR_DMA_Msk instead */
#define LCDC_OVR1IMR_DSCR_Pos               3                                              /**< (LCDC_OVR1IMR) Descriptor Loaded Interrupt Mask Position */
#define LCDC_OVR1IMR_DSCR_Msk               (_U_(0x1) << LCDC_OVR1IMR_DSCR_Pos)            /**< (LCDC_OVR1IMR) Descriptor Loaded Interrupt Mask Mask */
#define LCDC_OVR1IMR_DSCR                   LCDC_OVR1IMR_DSCR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1IMR_DSCR_Msk instead */
#define LCDC_OVR1IMR_ADD_Pos                4                                              /**< (LCDC_OVR1IMR) Head Descriptor Loaded Interrupt Mask Position */
#define LCDC_OVR1IMR_ADD_Msk                (_U_(0x1) << LCDC_OVR1IMR_ADD_Pos)             /**< (LCDC_OVR1IMR) Head Descriptor Loaded Interrupt Mask Mask */
#define LCDC_OVR1IMR_ADD                    LCDC_OVR1IMR_ADD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1IMR_ADD_Msk instead */
#define LCDC_OVR1IMR_DONE_Pos               5                                              /**< (LCDC_OVR1IMR) End of List Interrupt Mask Position */
#define LCDC_OVR1IMR_DONE_Msk               (_U_(0x1) << LCDC_OVR1IMR_DONE_Pos)            /**< (LCDC_OVR1IMR) End of List Interrupt Mask Mask */
#define LCDC_OVR1IMR_DONE                   LCDC_OVR1IMR_DONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1IMR_DONE_Msk instead */
#define LCDC_OVR1IMR_OVR_Pos                6                                              /**< (LCDC_OVR1IMR) Overflow Interrupt Mask Position */
#define LCDC_OVR1IMR_OVR_Msk                (_U_(0x1) << LCDC_OVR1IMR_OVR_Pos)             /**< (LCDC_OVR1IMR) Overflow Interrupt Mask Mask */
#define LCDC_OVR1IMR_OVR                    LCDC_OVR1IMR_OVR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1IMR_OVR_Msk instead */
#define LCDC_OVR1IMR_MASK                   _U_(0x7C)                                      /**< \deprecated (LCDC_OVR1IMR) Register MASK  (Use LCDC_OVR1IMR_Msk instead)  */
#define LCDC_OVR1IMR_Msk                    _U_(0x7C)                                      /**< (LCDC_OVR1IMR) Register Mask  */


/* -------- LCDC_OVR1ISR : (LCDC Offset: 0x158) (R/ 32) Overlay 1 Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DMA:1;                     /**< bit:      2  End of DMA Transfer                      */
    uint32_t DSCR:1;                    /**< bit:      3  DMA Descriptor Loaded                    */
    uint32_t ADD:1;                     /**< bit:      4  Head Descriptor Loaded                   */
    uint32_t DONE:1;                    /**< bit:      5  End of List Detected                     */
    uint32_t OVR:1;                     /**< bit:      6  Overflow Detected                        */
    uint32_t :25;                       /**< bit:  7..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1ISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1ISR_OFFSET                 (0x158)                                       /**<  (LCDC_OVR1ISR) Overlay 1 Interrupt Status Register  Offset */

#define LCDC_OVR1ISR_DMA_Pos                2                                              /**< (LCDC_OVR1ISR) End of DMA Transfer Position */
#define LCDC_OVR1ISR_DMA_Msk                (_U_(0x1) << LCDC_OVR1ISR_DMA_Pos)             /**< (LCDC_OVR1ISR) End of DMA Transfer Mask */
#define LCDC_OVR1ISR_DMA                    LCDC_OVR1ISR_DMA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1ISR_DMA_Msk instead */
#define LCDC_OVR1ISR_DSCR_Pos               3                                              /**< (LCDC_OVR1ISR) DMA Descriptor Loaded Position */
#define LCDC_OVR1ISR_DSCR_Msk               (_U_(0x1) << LCDC_OVR1ISR_DSCR_Pos)            /**< (LCDC_OVR1ISR) DMA Descriptor Loaded Mask */
#define LCDC_OVR1ISR_DSCR                   LCDC_OVR1ISR_DSCR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1ISR_DSCR_Msk instead */
#define LCDC_OVR1ISR_ADD_Pos                4                                              /**< (LCDC_OVR1ISR) Head Descriptor Loaded Position */
#define LCDC_OVR1ISR_ADD_Msk                (_U_(0x1) << LCDC_OVR1ISR_ADD_Pos)             /**< (LCDC_OVR1ISR) Head Descriptor Loaded Mask */
#define LCDC_OVR1ISR_ADD                    LCDC_OVR1ISR_ADD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1ISR_ADD_Msk instead */
#define LCDC_OVR1ISR_DONE_Pos               5                                              /**< (LCDC_OVR1ISR) End of List Detected Position */
#define LCDC_OVR1ISR_DONE_Msk               (_U_(0x1) << LCDC_OVR1ISR_DONE_Pos)            /**< (LCDC_OVR1ISR) End of List Detected Mask */
#define LCDC_OVR1ISR_DONE                   LCDC_OVR1ISR_DONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1ISR_DONE_Msk instead */
#define LCDC_OVR1ISR_OVR_Pos                6                                              /**< (LCDC_OVR1ISR) Overflow Detected Position */
#define LCDC_OVR1ISR_OVR_Msk                (_U_(0x1) << LCDC_OVR1ISR_OVR_Pos)             /**< (LCDC_OVR1ISR) Overflow Detected Mask */
#define LCDC_OVR1ISR_OVR                    LCDC_OVR1ISR_OVR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1ISR_OVR_Msk instead */
#define LCDC_OVR1ISR_MASK                   _U_(0x7C)                                      /**< \deprecated (LCDC_OVR1ISR) Register MASK  (Use LCDC_OVR1ISR_Msk instead)  */
#define LCDC_OVR1ISR_Msk                    _U_(0x7C)                                      /**< (LCDC_OVR1ISR) Register Mask  */


/* -------- LCDC_OVR1HEAD : (LCDC Offset: 0x15c) (R/W 32) Overlay 1 DMA Head Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t HEAD:30;                   /**< bit:  2..31  DMA Head Pointer                         */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1HEAD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1HEAD_OFFSET                (0x15C)                                       /**<  (LCDC_OVR1HEAD) Overlay 1 DMA Head Register  Offset */

#define LCDC_OVR1HEAD_HEAD_Pos              2                                              /**< (LCDC_OVR1HEAD) DMA Head Pointer Position */
#define LCDC_OVR1HEAD_HEAD_Msk              (_U_(0x3FFFFFFF) << LCDC_OVR1HEAD_HEAD_Pos)    /**< (LCDC_OVR1HEAD) DMA Head Pointer Mask */
#define LCDC_OVR1HEAD_HEAD(value)           (LCDC_OVR1HEAD_HEAD_Msk & ((value) << LCDC_OVR1HEAD_HEAD_Pos))
#define LCDC_OVR1HEAD_MASK                  _U_(0xFFFFFFFC)                                /**< \deprecated (LCDC_OVR1HEAD) Register MASK  (Use LCDC_OVR1HEAD_Msk instead)  */
#define LCDC_OVR1HEAD_Msk                   _U_(0xFFFFFFFC)                                /**< (LCDC_OVR1HEAD) Register Mask  */


/* -------- LCDC_OVR1ADDR : (LCDC Offset: 0x160) (R/W 32) Overlay 1 DMA Address Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR:32;                   /**< bit:  0..31  DMA Transfer Overlay 1 Address           */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1ADDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1ADDR_OFFSET                (0x160)                                       /**<  (LCDC_OVR1ADDR) Overlay 1 DMA Address Register  Offset */

#define LCDC_OVR1ADDR_ADDR_Pos              0                                              /**< (LCDC_OVR1ADDR) DMA Transfer Overlay 1 Address Position */
#define LCDC_OVR1ADDR_ADDR_Msk              (_U_(0xFFFFFFFF) << LCDC_OVR1ADDR_ADDR_Pos)    /**< (LCDC_OVR1ADDR) DMA Transfer Overlay 1 Address Mask */
#define LCDC_OVR1ADDR_ADDR(value)           (LCDC_OVR1ADDR_ADDR_Msk & ((value) << LCDC_OVR1ADDR_ADDR_Pos))
#define LCDC_OVR1ADDR_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_OVR1ADDR) Register MASK  (Use LCDC_OVR1ADDR_Msk instead)  */
#define LCDC_OVR1ADDR_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_OVR1ADDR) Register Mask  */


/* -------- LCDC_OVR1CTRL : (LCDC Offset: 0x164) (R/W 32) Overlay 1 DMA Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DFETCH:1;                  /**< bit:      0  Transfer Descriptor Fetch Enable         */
    uint32_t LFETCH:1;                  /**< bit:      1  Lookup Table Fetch Enable                */
    uint32_t DMAIEN:1;                  /**< bit:      2  End of DMA Transfer Interrupt Enable     */
    uint32_t DSCRIEN:1;                 /**< bit:      3  Descriptor Loaded Interrupt Enable       */
    uint32_t ADDIEN:1;                  /**< bit:      4  Add Head Descriptor to Queue Interrupt Enable */
    uint32_t DONEIEN:1;                 /**< bit:      5  End of List Interrupt Enable             */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1CTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1CTRL_OFFSET                (0x164)                                       /**<  (LCDC_OVR1CTRL) Overlay 1 DMA Control Register  Offset */

#define LCDC_OVR1CTRL_DFETCH_Pos            0                                              /**< (LCDC_OVR1CTRL) Transfer Descriptor Fetch Enable Position */
#define LCDC_OVR1CTRL_DFETCH_Msk            (_U_(0x1) << LCDC_OVR1CTRL_DFETCH_Pos)         /**< (LCDC_OVR1CTRL) Transfer Descriptor Fetch Enable Mask */
#define LCDC_OVR1CTRL_DFETCH                LCDC_OVR1CTRL_DFETCH_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CTRL_DFETCH_Msk instead */
#define LCDC_OVR1CTRL_LFETCH_Pos            1                                              /**< (LCDC_OVR1CTRL) Lookup Table Fetch Enable Position */
#define LCDC_OVR1CTRL_LFETCH_Msk            (_U_(0x1) << LCDC_OVR1CTRL_LFETCH_Pos)         /**< (LCDC_OVR1CTRL) Lookup Table Fetch Enable Mask */
#define LCDC_OVR1CTRL_LFETCH                LCDC_OVR1CTRL_LFETCH_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CTRL_LFETCH_Msk instead */
#define LCDC_OVR1CTRL_DMAIEN_Pos            2                                              /**< (LCDC_OVR1CTRL) End of DMA Transfer Interrupt Enable Position */
#define LCDC_OVR1CTRL_DMAIEN_Msk            (_U_(0x1) << LCDC_OVR1CTRL_DMAIEN_Pos)         /**< (LCDC_OVR1CTRL) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_OVR1CTRL_DMAIEN                LCDC_OVR1CTRL_DMAIEN_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CTRL_DMAIEN_Msk instead */
#define LCDC_OVR1CTRL_DSCRIEN_Pos           3                                              /**< (LCDC_OVR1CTRL) Descriptor Loaded Interrupt Enable Position */
#define LCDC_OVR1CTRL_DSCRIEN_Msk           (_U_(0x1) << LCDC_OVR1CTRL_DSCRIEN_Pos)        /**< (LCDC_OVR1CTRL) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_OVR1CTRL_DSCRIEN               LCDC_OVR1CTRL_DSCRIEN_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CTRL_DSCRIEN_Msk instead */
#define LCDC_OVR1CTRL_ADDIEN_Pos            4                                              /**< (LCDC_OVR1CTRL) Add Head Descriptor to Queue Interrupt Enable Position */
#define LCDC_OVR1CTRL_ADDIEN_Msk            (_U_(0x1) << LCDC_OVR1CTRL_ADDIEN_Pos)         /**< (LCDC_OVR1CTRL) Add Head Descriptor to Queue Interrupt Enable Mask */
#define LCDC_OVR1CTRL_ADDIEN                LCDC_OVR1CTRL_ADDIEN_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CTRL_ADDIEN_Msk instead */
#define LCDC_OVR1CTRL_DONEIEN_Pos           5                                              /**< (LCDC_OVR1CTRL) End of List Interrupt Enable Position */
#define LCDC_OVR1CTRL_DONEIEN_Msk           (_U_(0x1) << LCDC_OVR1CTRL_DONEIEN_Pos)        /**< (LCDC_OVR1CTRL) End of List Interrupt Enable Mask */
#define LCDC_OVR1CTRL_DONEIEN               LCDC_OVR1CTRL_DONEIEN_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CTRL_DONEIEN_Msk instead */
#define LCDC_OVR1CTRL_MASK                  _U_(0x3F)                                      /**< \deprecated (LCDC_OVR1CTRL) Register MASK  (Use LCDC_OVR1CTRL_Msk instead)  */
#define LCDC_OVR1CTRL_Msk                   _U_(0x3F)                                      /**< (LCDC_OVR1CTRL) Register Mask  */


/* -------- LCDC_OVR1NEXT : (LCDC Offset: 0x168) (R/W 32) Overlay 1 DMA Next Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NEXT:32;                   /**< bit:  0..31  DMA Descriptor Next Address              */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1NEXT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1NEXT_OFFSET                (0x168)                                       /**<  (LCDC_OVR1NEXT) Overlay 1 DMA Next Register  Offset */

#define LCDC_OVR1NEXT_NEXT_Pos              0                                              /**< (LCDC_OVR1NEXT) DMA Descriptor Next Address Position */
#define LCDC_OVR1NEXT_NEXT_Msk              (_U_(0xFFFFFFFF) << LCDC_OVR1NEXT_NEXT_Pos)    /**< (LCDC_OVR1NEXT) DMA Descriptor Next Address Mask */
#define LCDC_OVR1NEXT_NEXT(value)           (LCDC_OVR1NEXT_NEXT_Msk & ((value) << LCDC_OVR1NEXT_NEXT_Pos))
#define LCDC_OVR1NEXT_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_OVR1NEXT) Register MASK  (Use LCDC_OVR1NEXT_Msk instead)  */
#define LCDC_OVR1NEXT_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_OVR1NEXT) Register Mask  */


/* -------- LCDC_OVR1CFG0 : (LCDC Offset: 0x16c) (R/W 32) Overlay 1 Configuration Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIF:1;                     /**< bit:      0  Source Interface                         */
    uint32_t :3;                        /**< bit:   1..3  Reserved */
    uint32_t BLEN:2;                    /**< bit:   4..5  AHB Burst Length                         */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t DLBO:1;                    /**< bit:      8  Defined Length Burst Only for Channel Bus Transaction */
    uint32_t :3;                        /**< bit:  9..11  Reserved */
    uint32_t ROTDIS:1;                  /**< bit:     12  Hardware Rotation Optimization Disable   */
    uint32_t LOCKDIS:1;                 /**< bit:     13  Hardware Rotation Lock Disable           */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1CFG0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1CFG0_OFFSET                (0x16C)                                       /**<  (LCDC_OVR1CFG0) Overlay 1 Configuration Register 0  Offset */

#define LCDC_OVR1CFG0_SIF_Pos               0                                              /**< (LCDC_OVR1CFG0) Source Interface Position */
#define LCDC_OVR1CFG0_SIF_Msk               (_U_(0x1) << LCDC_OVR1CFG0_SIF_Pos)            /**< (LCDC_OVR1CFG0) Source Interface Mask */
#define LCDC_OVR1CFG0_SIF                   LCDC_OVR1CFG0_SIF_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CFG0_SIF_Msk instead */
#define LCDC_OVR1CFG0_BLEN_Pos              4                                              /**< (LCDC_OVR1CFG0) AHB Burst Length Position */
#define LCDC_OVR1CFG0_BLEN_Msk              (_U_(0x3) << LCDC_OVR1CFG0_BLEN_Pos)           /**< (LCDC_OVR1CFG0) AHB Burst Length Mask */
#define LCDC_OVR1CFG0_BLEN(value)           (LCDC_OVR1CFG0_BLEN_Msk & ((value) << LCDC_OVR1CFG0_BLEN_Pos))
#define   LCDC_OVR1CFG0_BLEN_AHB_BLEN_SINGLE_Val _U_(0x0)                                       /**< (LCDC_OVR1CFG0) AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_OVR1CFG0_BLEN_AHB_BLEN_INCR4_Val _U_(0x1)                                       /**< (LCDC_OVR1CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 4 data. An AHB INCR4 Burst is used. SINGLE, INCR and INCR4 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_OVR1CFG0_BLEN_AHB_BLEN_INCR8_Val _U_(0x2)                                       /**< (LCDC_OVR1CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 8 data. An AHB INCR8 Burst is used. SINGLE, INCR, INCR4 and INCR8 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_OVR1CFG0_BLEN_AHB_BLEN_INCR16_Val _U_(0x3)                                       /**< (LCDC_OVR1CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 16 data. An AHB INCR16 Burst is used. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define LCDC_OVR1CFG0_BLEN_AHB_BLEN_SINGLE  (LCDC_OVR1CFG0_BLEN_AHB_BLEN_SINGLE_Val << LCDC_OVR1CFG0_BLEN_Pos)  /**< (LCDC_OVR1CFG0) AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_OVR1CFG0_BLEN_AHB_BLEN_INCR4   (LCDC_OVR1CFG0_BLEN_AHB_BLEN_INCR4_Val << LCDC_OVR1CFG0_BLEN_Pos)  /**< (LCDC_OVR1CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 4 data. An AHB INCR4 Burst is used. SINGLE, INCR and INCR4 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_OVR1CFG0_BLEN_AHB_BLEN_INCR8   (LCDC_OVR1CFG0_BLEN_AHB_BLEN_INCR8_Val << LCDC_OVR1CFG0_BLEN_Pos)  /**< (LCDC_OVR1CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 8 data. An AHB INCR8 Burst is used. SINGLE, INCR, INCR4 and INCR8 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_OVR1CFG0_BLEN_AHB_BLEN_INCR16  (LCDC_OVR1CFG0_BLEN_AHB_BLEN_INCR16_Val << LCDC_OVR1CFG0_BLEN_Pos)  /**< (LCDC_OVR1CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 16 data. An AHB INCR16 Burst is used. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_OVR1CFG0_DLBO_Pos              8                                              /**< (LCDC_OVR1CFG0) Defined Length Burst Only for Channel Bus Transaction Position */
#define LCDC_OVR1CFG0_DLBO_Msk              (_U_(0x1) << LCDC_OVR1CFG0_DLBO_Pos)           /**< (LCDC_OVR1CFG0) Defined Length Burst Only for Channel Bus Transaction Mask */
#define LCDC_OVR1CFG0_DLBO                  LCDC_OVR1CFG0_DLBO_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CFG0_DLBO_Msk instead */
#define LCDC_OVR1CFG0_ROTDIS_Pos            12                                             /**< (LCDC_OVR1CFG0) Hardware Rotation Optimization Disable Position */
#define LCDC_OVR1CFG0_ROTDIS_Msk            (_U_(0x1) << LCDC_OVR1CFG0_ROTDIS_Pos)         /**< (LCDC_OVR1CFG0) Hardware Rotation Optimization Disable Mask */
#define LCDC_OVR1CFG0_ROTDIS                LCDC_OVR1CFG0_ROTDIS_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CFG0_ROTDIS_Msk instead */
#define LCDC_OVR1CFG0_LOCKDIS_Pos           13                                             /**< (LCDC_OVR1CFG0) Hardware Rotation Lock Disable Position */
#define LCDC_OVR1CFG0_LOCKDIS_Msk           (_U_(0x1) << LCDC_OVR1CFG0_LOCKDIS_Pos)        /**< (LCDC_OVR1CFG0) Hardware Rotation Lock Disable Mask */
#define LCDC_OVR1CFG0_LOCKDIS               LCDC_OVR1CFG0_LOCKDIS_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CFG0_LOCKDIS_Msk instead */
#define LCDC_OVR1CFG0_MASK                  _U_(0x3131)                                    /**< \deprecated (LCDC_OVR1CFG0) Register MASK  (Use LCDC_OVR1CFG0_Msk instead)  */
#define LCDC_OVR1CFG0_Msk                   _U_(0x3131)                                    /**< (LCDC_OVR1CFG0) Register Mask  */


/* -------- LCDC_OVR1CFG1 : (LCDC Offset: 0x170) (R/W 32) Overlay 1 Configuration Register 1 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CLUTEN:1;                  /**< bit:      0  Color Lookup Table Mode Enable           */
    uint32_t :3;                        /**< bit:   1..3  Reserved */
    uint32_t RGBMODE:4;                 /**< bit:   4..7  RGB Mode Input Selection                 */
    uint32_t CLUTMODE:2;                /**< bit:   8..9  Color Lookup Table Mode Input Selection  */
    uint32_t :22;                       /**< bit: 10..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1CFG1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1CFG1_OFFSET                (0x170)                                       /**<  (LCDC_OVR1CFG1) Overlay 1 Configuration Register 1  Offset */

#define LCDC_OVR1CFG1_CLUTEN_Pos            0                                              /**< (LCDC_OVR1CFG1) Color Lookup Table Mode Enable Position */
#define LCDC_OVR1CFG1_CLUTEN_Msk            (_U_(0x1) << LCDC_OVR1CFG1_CLUTEN_Pos)         /**< (LCDC_OVR1CFG1) Color Lookup Table Mode Enable Mask */
#define LCDC_OVR1CFG1_CLUTEN                LCDC_OVR1CFG1_CLUTEN_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CFG1_CLUTEN_Msk instead */
#define LCDC_OVR1CFG1_RGBMODE_Pos           4                                              /**< (LCDC_OVR1CFG1) RGB Mode Input Selection Position */
#define LCDC_OVR1CFG1_RGBMODE_Msk           (_U_(0xF) << LCDC_OVR1CFG1_RGBMODE_Pos)        /**< (LCDC_OVR1CFG1) RGB Mode Input Selection Mask */
#define LCDC_OVR1CFG1_RGBMODE(value)        (LCDC_OVR1CFG1_RGBMODE_Msk & ((value) << LCDC_OVR1CFG1_RGBMODE_Pos))
#define   LCDC_OVR1CFG1_RGBMODE_12BPP_RGB_444_Val _U_(0x0)                                       /**< (LCDC_OVR1CFG1) 12 bpp RGB 444  */
#define   LCDC_OVR1CFG1_RGBMODE_16BPP_ARGB_4444_Val _U_(0x1)                                       /**< (LCDC_OVR1CFG1) 16 bpp ARGB 4444  */
#define   LCDC_OVR1CFG1_RGBMODE_16BPP_RGBA_4444_Val _U_(0x2)                                       /**< (LCDC_OVR1CFG1) 16 bpp RGBA 4444  */
#define   LCDC_OVR1CFG1_RGBMODE_16BPP_RGB_565_Val _U_(0x3)                                       /**< (LCDC_OVR1CFG1) 16 bpp RGB 565  */
#define   LCDC_OVR1CFG1_RGBMODE_16BPP_TRGB_1555_Val _U_(0x4)                                       /**< (LCDC_OVR1CFG1) 16 bpp TRGB 1555  */
#define   LCDC_OVR1CFG1_RGBMODE_18BPP_RGB_666_Val _U_(0x5)                                       /**< (LCDC_OVR1CFG1) 18 bpp RGB 666  */
#define   LCDC_OVR1CFG1_RGBMODE_18BPP_RGB_666PACKED_Val _U_(0x6)                                       /**< (LCDC_OVR1CFG1) 18 bpp RGB 666 PACKED  */
#define   LCDC_OVR1CFG1_RGBMODE_19BPP_TRGB_1666_Val _U_(0x7)                                       /**< (LCDC_OVR1CFG1) 19 bpp TRGB 1666  */
#define   LCDC_OVR1CFG1_RGBMODE_19BPP_TRGB_PACKED_Val _U_(0x8)                                       /**< (LCDC_OVR1CFG1) 19 bpp TRGB 1666 PACKED  */
#define   LCDC_OVR1CFG1_RGBMODE_24BPP_RGB_888_Val _U_(0x9)                                       /**< (LCDC_OVR1CFG1) 24 bpp RGB 888  */
#define   LCDC_OVR1CFG1_RGBMODE_24BPP_RGB_888_PACKED_Val _U_(0xA)                                       /**< (LCDC_OVR1CFG1) 24 bpp RGB 888 PACKED  */
#define   LCDC_OVR1CFG1_RGBMODE_25BPP_TRGB_1888_Val _U_(0xB)                                       /**< (LCDC_OVR1CFG1) 25 bpp TRGB 1888  */
#define   LCDC_OVR1CFG1_RGBMODE_32BPP_ARGB_8888_Val _U_(0xC)                                       /**< (LCDC_OVR1CFG1) 32 bpp ARGB 8888  */
#define   LCDC_OVR1CFG1_RGBMODE_32BPP_RGBA_8888_Val _U_(0xD)                                       /**< (LCDC_OVR1CFG1) 32 bpp RGBA 8888  */
#define LCDC_OVR1CFG1_RGBMODE_12BPP_RGB_444 (LCDC_OVR1CFG1_RGBMODE_12BPP_RGB_444_Val << LCDC_OVR1CFG1_RGBMODE_Pos)  /**< (LCDC_OVR1CFG1) 12 bpp RGB 444 Position  */
#define LCDC_OVR1CFG1_RGBMODE_16BPP_ARGB_4444 (LCDC_OVR1CFG1_RGBMODE_16BPP_ARGB_4444_Val << LCDC_OVR1CFG1_RGBMODE_Pos)  /**< (LCDC_OVR1CFG1) 16 bpp ARGB 4444 Position  */
#define LCDC_OVR1CFG1_RGBMODE_16BPP_RGBA_4444 (LCDC_OVR1CFG1_RGBMODE_16BPP_RGBA_4444_Val << LCDC_OVR1CFG1_RGBMODE_Pos)  /**< (LCDC_OVR1CFG1) 16 bpp RGBA 4444 Position  */
#define LCDC_OVR1CFG1_RGBMODE_16BPP_RGB_565 (LCDC_OVR1CFG1_RGBMODE_16BPP_RGB_565_Val << LCDC_OVR1CFG1_RGBMODE_Pos)  /**< (LCDC_OVR1CFG1) 16 bpp RGB 565 Position  */
#define LCDC_OVR1CFG1_RGBMODE_16BPP_TRGB_1555 (LCDC_OVR1CFG1_RGBMODE_16BPP_TRGB_1555_Val << LCDC_OVR1CFG1_RGBMODE_Pos)  /**< (LCDC_OVR1CFG1) 16 bpp TRGB 1555 Position  */
#define LCDC_OVR1CFG1_RGBMODE_18BPP_RGB_666 (LCDC_OVR1CFG1_RGBMODE_18BPP_RGB_666_Val << LCDC_OVR1CFG1_RGBMODE_Pos)  /**< (LCDC_OVR1CFG1) 18 bpp RGB 666 Position  */
#define LCDC_OVR1CFG1_RGBMODE_18BPP_RGB_666PACKED (LCDC_OVR1CFG1_RGBMODE_18BPP_RGB_666PACKED_Val << LCDC_OVR1CFG1_RGBMODE_Pos)  /**< (LCDC_OVR1CFG1) 18 bpp RGB 666 PACKED Position  */
#define LCDC_OVR1CFG1_RGBMODE_19BPP_TRGB_1666 (LCDC_OVR1CFG1_RGBMODE_19BPP_TRGB_1666_Val << LCDC_OVR1CFG1_RGBMODE_Pos)  /**< (LCDC_OVR1CFG1) 19 bpp TRGB 1666 Position  */
#define LCDC_OVR1CFG1_RGBMODE_19BPP_TRGB_PACKED (LCDC_OVR1CFG1_RGBMODE_19BPP_TRGB_PACKED_Val << LCDC_OVR1CFG1_RGBMODE_Pos)  /**< (LCDC_OVR1CFG1) 19 bpp TRGB 1666 PACKED Position  */
#define LCDC_OVR1CFG1_RGBMODE_24BPP_RGB_888 (LCDC_OVR1CFG1_RGBMODE_24BPP_RGB_888_Val << LCDC_OVR1CFG1_RGBMODE_Pos)  /**< (LCDC_OVR1CFG1) 24 bpp RGB 888 Position  */
#define LCDC_OVR1CFG1_RGBMODE_24BPP_RGB_888_PACKED (LCDC_OVR1CFG1_RGBMODE_24BPP_RGB_888_PACKED_Val << LCDC_OVR1CFG1_RGBMODE_Pos)  /**< (LCDC_OVR1CFG1) 24 bpp RGB 888 PACKED Position  */
#define LCDC_OVR1CFG1_RGBMODE_25BPP_TRGB_1888 (LCDC_OVR1CFG1_RGBMODE_25BPP_TRGB_1888_Val << LCDC_OVR1CFG1_RGBMODE_Pos)  /**< (LCDC_OVR1CFG1) 25 bpp TRGB 1888 Position  */
#define LCDC_OVR1CFG1_RGBMODE_32BPP_ARGB_8888 (LCDC_OVR1CFG1_RGBMODE_32BPP_ARGB_8888_Val << LCDC_OVR1CFG1_RGBMODE_Pos)  /**< (LCDC_OVR1CFG1) 32 bpp ARGB 8888 Position  */
#define LCDC_OVR1CFG1_RGBMODE_32BPP_RGBA_8888 (LCDC_OVR1CFG1_RGBMODE_32BPP_RGBA_8888_Val << LCDC_OVR1CFG1_RGBMODE_Pos)  /**< (LCDC_OVR1CFG1) 32 bpp RGBA 8888 Position  */
#define LCDC_OVR1CFG1_CLUTMODE_Pos          8                                              /**< (LCDC_OVR1CFG1) Color Lookup Table Mode Input Selection Position */
#define LCDC_OVR1CFG1_CLUTMODE_Msk          (_U_(0x3) << LCDC_OVR1CFG1_CLUTMODE_Pos)       /**< (LCDC_OVR1CFG1) Color Lookup Table Mode Input Selection Mask */
#define LCDC_OVR1CFG1_CLUTMODE(value)       (LCDC_OVR1CFG1_CLUTMODE_Msk & ((value) << LCDC_OVR1CFG1_CLUTMODE_Pos))
#define   LCDC_OVR1CFG1_CLUTMODE_CLUT_1BPP_Val _U_(0x0)                                       /**< (LCDC_OVR1CFG1) Color Lookup Table mode set to 1 bit per pixel  */
#define   LCDC_OVR1CFG1_CLUTMODE_CLUT_2BPP_Val _U_(0x1)                                       /**< (LCDC_OVR1CFG1) Color Lookup Table mode set to 2 bits per pixel  */
#define   LCDC_OVR1CFG1_CLUTMODE_CLUT_4BPP_Val _U_(0x2)                                       /**< (LCDC_OVR1CFG1) Color Lookup Table mode set to 4 bits per pixel  */
#define   LCDC_OVR1CFG1_CLUTMODE_CLUT_8BPP_Val _U_(0x3)                                       /**< (LCDC_OVR1CFG1) Color Lookup Table mode set to 8 bits per pixel  */
#define LCDC_OVR1CFG1_CLUTMODE_CLUT_1BPP    (LCDC_OVR1CFG1_CLUTMODE_CLUT_1BPP_Val << LCDC_OVR1CFG1_CLUTMODE_Pos)  /**< (LCDC_OVR1CFG1) Color Lookup Table mode set to 1 bit per pixel Position  */
#define LCDC_OVR1CFG1_CLUTMODE_CLUT_2BPP    (LCDC_OVR1CFG1_CLUTMODE_CLUT_2BPP_Val << LCDC_OVR1CFG1_CLUTMODE_Pos)  /**< (LCDC_OVR1CFG1) Color Lookup Table mode set to 2 bits per pixel Position  */
#define LCDC_OVR1CFG1_CLUTMODE_CLUT_4BPP    (LCDC_OVR1CFG1_CLUTMODE_CLUT_4BPP_Val << LCDC_OVR1CFG1_CLUTMODE_Pos)  /**< (LCDC_OVR1CFG1) Color Lookup Table mode set to 4 bits per pixel Position  */
#define LCDC_OVR1CFG1_CLUTMODE_CLUT_8BPP    (LCDC_OVR1CFG1_CLUTMODE_CLUT_8BPP_Val << LCDC_OVR1CFG1_CLUTMODE_Pos)  /**< (LCDC_OVR1CFG1) Color Lookup Table mode set to 8 bits per pixel Position  */
#define LCDC_OVR1CFG1_MASK                  _U_(0x3F1)                                     /**< \deprecated (LCDC_OVR1CFG1) Register MASK  (Use LCDC_OVR1CFG1_Msk instead)  */
#define LCDC_OVR1CFG1_Msk                   _U_(0x3F1)                                     /**< (LCDC_OVR1CFG1) Register Mask  */


/* -------- LCDC_OVR1CFG2 : (LCDC Offset: 0x174) (R/W 32) Overlay 1 Configuration Register 2 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XPOS:11;                   /**< bit:  0..10  Horizontal Window Position               */
    uint32_t :5;                        /**< bit: 11..15  Reserved */
    uint32_t YPOS:11;                   /**< bit: 16..26  Vertical Window Position                 */
    uint32_t :5;                        /**< bit: 27..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1CFG2_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1CFG2_OFFSET                (0x174)                                       /**<  (LCDC_OVR1CFG2) Overlay 1 Configuration Register 2  Offset */

#define LCDC_OVR1CFG2_XPOS_Pos              0                                              /**< (LCDC_OVR1CFG2) Horizontal Window Position Position */
#define LCDC_OVR1CFG2_XPOS_Msk              (_U_(0x7FF) << LCDC_OVR1CFG2_XPOS_Pos)         /**< (LCDC_OVR1CFG2) Horizontal Window Position Mask */
#define LCDC_OVR1CFG2_XPOS(value)           (LCDC_OVR1CFG2_XPOS_Msk & ((value) << LCDC_OVR1CFG2_XPOS_Pos))
#define LCDC_OVR1CFG2_YPOS_Pos              16                                             /**< (LCDC_OVR1CFG2) Vertical Window Position Position */
#define LCDC_OVR1CFG2_YPOS_Msk              (_U_(0x7FF) << LCDC_OVR1CFG2_YPOS_Pos)         /**< (LCDC_OVR1CFG2) Vertical Window Position Mask */
#define LCDC_OVR1CFG2_YPOS(value)           (LCDC_OVR1CFG2_YPOS_Msk & ((value) << LCDC_OVR1CFG2_YPOS_Pos))
#define LCDC_OVR1CFG2_MASK                  _U_(0x7FF07FF)                                 /**< \deprecated (LCDC_OVR1CFG2) Register MASK  (Use LCDC_OVR1CFG2_Msk instead)  */
#define LCDC_OVR1CFG2_Msk                   _U_(0x7FF07FF)                                 /**< (LCDC_OVR1CFG2) Register Mask  */


/* -------- LCDC_OVR1CFG3 : (LCDC Offset: 0x178) (R/W 32) Overlay 1 Configuration Register 3 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XSIZE:11;                  /**< bit:  0..10  Horizontal Window Size                   */
    uint32_t :5;                        /**< bit: 11..15  Reserved */
    uint32_t YSIZE:11;                  /**< bit: 16..26  Vertical Window Size                     */
    uint32_t :5;                        /**< bit: 27..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1CFG3_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1CFG3_OFFSET                (0x178)                                       /**<  (LCDC_OVR1CFG3) Overlay 1 Configuration Register 3  Offset */

#define LCDC_OVR1CFG3_XSIZE_Pos             0                                              /**< (LCDC_OVR1CFG3) Horizontal Window Size Position */
#define LCDC_OVR1CFG3_XSIZE_Msk             (_U_(0x7FF) << LCDC_OVR1CFG3_XSIZE_Pos)        /**< (LCDC_OVR1CFG3) Horizontal Window Size Mask */
#define LCDC_OVR1CFG3_XSIZE(value)          (LCDC_OVR1CFG3_XSIZE_Msk & ((value) << LCDC_OVR1CFG3_XSIZE_Pos))
#define LCDC_OVR1CFG3_YSIZE_Pos             16                                             /**< (LCDC_OVR1CFG3) Vertical Window Size Position */
#define LCDC_OVR1CFG3_YSIZE_Msk             (_U_(0x7FF) << LCDC_OVR1CFG3_YSIZE_Pos)        /**< (LCDC_OVR1CFG3) Vertical Window Size Mask */
#define LCDC_OVR1CFG3_YSIZE(value)          (LCDC_OVR1CFG3_YSIZE_Msk & ((value) << LCDC_OVR1CFG3_YSIZE_Pos))
#define LCDC_OVR1CFG3_MASK                  _U_(0x7FF07FF)                                 /**< \deprecated (LCDC_OVR1CFG3) Register MASK  (Use LCDC_OVR1CFG3_Msk instead)  */
#define LCDC_OVR1CFG3_Msk                   _U_(0x7FF07FF)                                 /**< (LCDC_OVR1CFG3) Register Mask  */


/* -------- LCDC_OVR1CFG4 : (LCDC Offset: 0x17c) (R/W 32) Overlay 1 Configuration Register 4 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XSTRIDE:32;                /**< bit:  0..31  Horizontal Stride                        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1CFG4_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1CFG4_OFFSET                (0x17C)                                       /**<  (LCDC_OVR1CFG4) Overlay 1 Configuration Register 4  Offset */

#define LCDC_OVR1CFG4_XSTRIDE_Pos           0                                              /**< (LCDC_OVR1CFG4) Horizontal Stride Position */
#define LCDC_OVR1CFG4_XSTRIDE_Msk           (_U_(0xFFFFFFFF) << LCDC_OVR1CFG4_XSTRIDE_Pos)  /**< (LCDC_OVR1CFG4) Horizontal Stride Mask */
#define LCDC_OVR1CFG4_XSTRIDE(value)        (LCDC_OVR1CFG4_XSTRIDE_Msk & ((value) << LCDC_OVR1CFG4_XSTRIDE_Pos))
#define LCDC_OVR1CFG4_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_OVR1CFG4) Register MASK  (Use LCDC_OVR1CFG4_Msk instead)  */
#define LCDC_OVR1CFG4_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_OVR1CFG4) Register Mask  */


/* -------- LCDC_OVR1CFG5 : (LCDC Offset: 0x180) (R/W 32) Overlay 1 Configuration Register 5 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PSTRIDE:32;                /**< bit:  0..31  Pixel Stride                             */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1CFG5_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1CFG5_OFFSET                (0x180)                                       /**<  (LCDC_OVR1CFG5) Overlay 1 Configuration Register 5  Offset */

#define LCDC_OVR1CFG5_PSTRIDE_Pos           0                                              /**< (LCDC_OVR1CFG5) Pixel Stride Position */
#define LCDC_OVR1CFG5_PSTRIDE_Msk           (_U_(0xFFFFFFFF) << LCDC_OVR1CFG5_PSTRIDE_Pos)  /**< (LCDC_OVR1CFG5) Pixel Stride Mask */
#define LCDC_OVR1CFG5_PSTRIDE(value)        (LCDC_OVR1CFG5_PSTRIDE_Msk & ((value) << LCDC_OVR1CFG5_PSTRIDE_Pos))
#define LCDC_OVR1CFG5_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_OVR1CFG5) Register MASK  (Use LCDC_OVR1CFG5_Msk instead)  */
#define LCDC_OVR1CFG5_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_OVR1CFG5) Register Mask  */


/* -------- LCDC_OVR1CFG6 : (LCDC Offset: 0x184) (R/W 32) Overlay 1 Configuration Register 6 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BDEF:8;                    /**< bit:   0..7  Blue Default                             */
    uint32_t GDEF:8;                    /**< bit:  8..15  Green Default                            */
    uint32_t RDEF:8;                    /**< bit: 16..23  Red Default                              */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1CFG6_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1CFG6_OFFSET                (0x184)                                       /**<  (LCDC_OVR1CFG6) Overlay 1 Configuration Register 6  Offset */

#define LCDC_OVR1CFG6_BDEF_Pos              0                                              /**< (LCDC_OVR1CFG6) Blue Default Position */
#define LCDC_OVR1CFG6_BDEF_Msk              (_U_(0xFF) << LCDC_OVR1CFG6_BDEF_Pos)          /**< (LCDC_OVR1CFG6) Blue Default Mask */
#define LCDC_OVR1CFG6_BDEF(value)           (LCDC_OVR1CFG6_BDEF_Msk & ((value) << LCDC_OVR1CFG6_BDEF_Pos))
#define LCDC_OVR1CFG6_GDEF_Pos              8                                              /**< (LCDC_OVR1CFG6) Green Default Position */
#define LCDC_OVR1CFG6_GDEF_Msk              (_U_(0xFF) << LCDC_OVR1CFG6_GDEF_Pos)          /**< (LCDC_OVR1CFG6) Green Default Mask */
#define LCDC_OVR1CFG6_GDEF(value)           (LCDC_OVR1CFG6_GDEF_Msk & ((value) << LCDC_OVR1CFG6_GDEF_Pos))
#define LCDC_OVR1CFG6_RDEF_Pos              16                                             /**< (LCDC_OVR1CFG6) Red Default Position */
#define LCDC_OVR1CFG6_RDEF_Msk              (_U_(0xFF) << LCDC_OVR1CFG6_RDEF_Pos)          /**< (LCDC_OVR1CFG6) Red Default Mask */
#define LCDC_OVR1CFG6_RDEF(value)           (LCDC_OVR1CFG6_RDEF_Msk & ((value) << LCDC_OVR1CFG6_RDEF_Pos))
#define LCDC_OVR1CFG6_MASK                  _U_(0xFFFFFF)                                  /**< \deprecated (LCDC_OVR1CFG6) Register MASK  (Use LCDC_OVR1CFG6_Msk instead)  */
#define LCDC_OVR1CFG6_Msk                   _U_(0xFFFFFF)                                  /**< (LCDC_OVR1CFG6) Register Mask  */


/* -------- LCDC_OVR1CFG7 : (LCDC Offset: 0x188) (R/W 32) Overlay 1 Configuration Register 7 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BKEY:8;                    /**< bit:   0..7  Blue Color Component Chroma Key          */
    uint32_t GKEY:8;                    /**< bit:  8..15  Green Color Component Chroma Key         */
    uint32_t RKEY:8;                    /**< bit: 16..23  Red Color Component Chroma Key           */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1CFG7_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1CFG7_OFFSET                (0x188)                                       /**<  (LCDC_OVR1CFG7) Overlay 1 Configuration Register 7  Offset */

#define LCDC_OVR1CFG7_BKEY_Pos              0                                              /**< (LCDC_OVR1CFG7) Blue Color Component Chroma Key Position */
#define LCDC_OVR1CFG7_BKEY_Msk              (_U_(0xFF) << LCDC_OVR1CFG7_BKEY_Pos)          /**< (LCDC_OVR1CFG7) Blue Color Component Chroma Key Mask */
#define LCDC_OVR1CFG7_BKEY(value)           (LCDC_OVR1CFG7_BKEY_Msk & ((value) << LCDC_OVR1CFG7_BKEY_Pos))
#define LCDC_OVR1CFG7_GKEY_Pos              8                                              /**< (LCDC_OVR1CFG7) Green Color Component Chroma Key Position */
#define LCDC_OVR1CFG7_GKEY_Msk              (_U_(0xFF) << LCDC_OVR1CFG7_GKEY_Pos)          /**< (LCDC_OVR1CFG7) Green Color Component Chroma Key Mask */
#define LCDC_OVR1CFG7_GKEY(value)           (LCDC_OVR1CFG7_GKEY_Msk & ((value) << LCDC_OVR1CFG7_GKEY_Pos))
#define LCDC_OVR1CFG7_RKEY_Pos              16                                             /**< (LCDC_OVR1CFG7) Red Color Component Chroma Key Position */
#define LCDC_OVR1CFG7_RKEY_Msk              (_U_(0xFF) << LCDC_OVR1CFG7_RKEY_Pos)          /**< (LCDC_OVR1CFG7) Red Color Component Chroma Key Mask */
#define LCDC_OVR1CFG7_RKEY(value)           (LCDC_OVR1CFG7_RKEY_Msk & ((value) << LCDC_OVR1CFG7_RKEY_Pos))
#define LCDC_OVR1CFG7_MASK                  _U_(0xFFFFFF)                                  /**< \deprecated (LCDC_OVR1CFG7) Register MASK  (Use LCDC_OVR1CFG7_Msk instead)  */
#define LCDC_OVR1CFG7_Msk                   _U_(0xFFFFFF)                                  /**< (LCDC_OVR1CFG7) Register Mask  */


/* -------- LCDC_OVR1CFG8 : (LCDC Offset: 0x18c) (R/W 32) Overlay 1 Configuration Register 8 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BMASK:8;                   /**< bit:   0..7  Blue Color Component Chroma Key Mask     */
    uint32_t GMASK:8;                   /**< bit:  8..15  Green Color Component Chroma Key Mask    */
    uint32_t RMASK:8;                   /**< bit: 16..23  Red Color Component Chroma Key Mask      */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1CFG8_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1CFG8_OFFSET                (0x18C)                                       /**<  (LCDC_OVR1CFG8) Overlay 1 Configuration Register 8  Offset */

#define LCDC_OVR1CFG8_BMASK_Pos             0                                              /**< (LCDC_OVR1CFG8) Blue Color Component Chroma Key Mask Position */
#define LCDC_OVR1CFG8_BMASK_Msk             (_U_(0xFF) << LCDC_OVR1CFG8_BMASK_Pos)         /**< (LCDC_OVR1CFG8) Blue Color Component Chroma Key Mask Mask */
#define LCDC_OVR1CFG8_BMASK(value)          (LCDC_OVR1CFG8_BMASK_Msk & ((value) << LCDC_OVR1CFG8_BMASK_Pos))
#define LCDC_OVR1CFG8_GMASK_Pos             8                                              /**< (LCDC_OVR1CFG8) Green Color Component Chroma Key Mask Position */
#define LCDC_OVR1CFG8_GMASK_Msk             (_U_(0xFF) << LCDC_OVR1CFG8_GMASK_Pos)         /**< (LCDC_OVR1CFG8) Green Color Component Chroma Key Mask Mask */
#define LCDC_OVR1CFG8_GMASK(value)          (LCDC_OVR1CFG8_GMASK_Msk & ((value) << LCDC_OVR1CFG8_GMASK_Pos))
#define LCDC_OVR1CFG8_RMASK_Pos             16                                             /**< (LCDC_OVR1CFG8) Red Color Component Chroma Key Mask Position */
#define LCDC_OVR1CFG8_RMASK_Msk             (_U_(0xFF) << LCDC_OVR1CFG8_RMASK_Pos)         /**< (LCDC_OVR1CFG8) Red Color Component Chroma Key Mask Mask */
#define LCDC_OVR1CFG8_RMASK(value)          (LCDC_OVR1CFG8_RMASK_Msk & ((value) << LCDC_OVR1CFG8_RMASK_Pos))
#define LCDC_OVR1CFG8_Msk                   _U_(0xFFFFFF)                                  /**< (LCDC_OVR1CFG8) Register Mask  */


/* -------- LCDC_OVR1CFG9 : (LCDC Offset: 0x190) (R/W 32) Overlay 1 Configuration Register 9 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CRKEY:1;                   /**< bit:      0  Blender Chroma Key Enable                */
    uint32_t INV:1;                     /**< bit:      1  Blender Inverted Blender Output Enable   */
    uint32_t ITER2BL:1;                 /**< bit:      2  Blender Iterated Color Enable            */
    uint32_t ITER:1;                    /**< bit:      3  Blender Use Iterated Color               */
    uint32_t REVALPHA:1;                /**< bit:      4  Blender Reverse Alpha                    */
    uint32_t GAEN:1;                    /**< bit:      5  Blender Global Alpha Enable              */
    uint32_t LAEN:1;                    /**< bit:      6  Blender Local Alpha Enable               */
    uint32_t OVR:1;                     /**< bit:      7  Blender Overlay Layer Enable             */
    uint32_t DMA:1;                     /**< bit:      8  Blender DMA Layer Enable                 */
    uint32_t REP:1;                     /**< bit:      9  Use Replication logic to expand RGB color to 24 bits */
    uint32_t DSTKEY:1;                  /**< bit:     10  Destination Chroma Keying                */
    uint32_t :5;                        /**< bit: 11..15  Reserved */
    uint32_t GA:8;                      /**< bit: 16..23  Blender Global Alpha                     */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1CFG9_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1CFG9_OFFSET                (0x190)                                       /**<  (LCDC_OVR1CFG9) Overlay 1 Configuration Register 9  Offset */

#define LCDC_OVR1CFG9_CRKEY_Pos             0                                              /**< (LCDC_OVR1CFG9) Blender Chroma Key Enable Position */
#define LCDC_OVR1CFG9_CRKEY_Msk             (_U_(0x1) << LCDC_OVR1CFG9_CRKEY_Pos)          /**< (LCDC_OVR1CFG9) Blender Chroma Key Enable Mask */
#define LCDC_OVR1CFG9_CRKEY                 LCDC_OVR1CFG9_CRKEY_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CFG9_CRKEY_Msk instead */
#define LCDC_OVR1CFG9_INV_Pos               1                                              /**< (LCDC_OVR1CFG9) Blender Inverted Blender Output Enable Position */
#define LCDC_OVR1CFG9_INV_Msk               (_U_(0x1) << LCDC_OVR1CFG9_INV_Pos)            /**< (LCDC_OVR1CFG9) Blender Inverted Blender Output Enable Mask */
#define LCDC_OVR1CFG9_INV                   LCDC_OVR1CFG9_INV_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CFG9_INV_Msk instead */
#define LCDC_OVR1CFG9_ITER2BL_Pos           2                                              /**< (LCDC_OVR1CFG9) Blender Iterated Color Enable Position */
#define LCDC_OVR1CFG9_ITER2BL_Msk           (_U_(0x1) << LCDC_OVR1CFG9_ITER2BL_Pos)        /**< (LCDC_OVR1CFG9) Blender Iterated Color Enable Mask */
#define LCDC_OVR1CFG9_ITER2BL               LCDC_OVR1CFG9_ITER2BL_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CFG9_ITER2BL_Msk instead */
#define LCDC_OVR1CFG9_ITER_Pos              3                                              /**< (LCDC_OVR1CFG9) Blender Use Iterated Color Position */
#define LCDC_OVR1CFG9_ITER_Msk              (_U_(0x1) << LCDC_OVR1CFG9_ITER_Pos)           /**< (LCDC_OVR1CFG9) Blender Use Iterated Color Mask */
#define LCDC_OVR1CFG9_ITER                  LCDC_OVR1CFG9_ITER_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CFG9_ITER_Msk instead */
#define LCDC_OVR1CFG9_REVALPHA_Pos          4                                              /**< (LCDC_OVR1CFG9) Blender Reverse Alpha Position */
#define LCDC_OVR1CFG9_REVALPHA_Msk          (_U_(0x1) << LCDC_OVR1CFG9_REVALPHA_Pos)       /**< (LCDC_OVR1CFG9) Blender Reverse Alpha Mask */
#define LCDC_OVR1CFG9_REVALPHA              LCDC_OVR1CFG9_REVALPHA_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CFG9_REVALPHA_Msk instead */
#define LCDC_OVR1CFG9_GAEN_Pos              5                                              /**< (LCDC_OVR1CFG9) Blender Global Alpha Enable Position */
#define LCDC_OVR1CFG9_GAEN_Msk              (_U_(0x1) << LCDC_OVR1CFG9_GAEN_Pos)           /**< (LCDC_OVR1CFG9) Blender Global Alpha Enable Mask */
#define LCDC_OVR1CFG9_GAEN                  LCDC_OVR1CFG9_GAEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CFG9_GAEN_Msk instead */
#define LCDC_OVR1CFG9_LAEN_Pos              6                                              /**< (LCDC_OVR1CFG9) Blender Local Alpha Enable Position */
#define LCDC_OVR1CFG9_LAEN_Msk              (_U_(0x1) << LCDC_OVR1CFG9_LAEN_Pos)           /**< (LCDC_OVR1CFG9) Blender Local Alpha Enable Mask */
#define LCDC_OVR1CFG9_LAEN                  LCDC_OVR1CFG9_LAEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CFG9_LAEN_Msk instead */
#define LCDC_OVR1CFG9_OVR_Pos               7                                              /**< (LCDC_OVR1CFG9) Blender Overlay Layer Enable Position */
#define LCDC_OVR1CFG9_OVR_Msk               (_U_(0x1) << LCDC_OVR1CFG9_OVR_Pos)            /**< (LCDC_OVR1CFG9) Blender Overlay Layer Enable Mask */
#define LCDC_OVR1CFG9_OVR                   LCDC_OVR1CFG9_OVR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CFG9_OVR_Msk instead */
#define LCDC_OVR1CFG9_DMA_Pos               8                                              /**< (LCDC_OVR1CFG9) Blender DMA Layer Enable Position */
#define LCDC_OVR1CFG9_DMA_Msk               (_U_(0x1) << LCDC_OVR1CFG9_DMA_Pos)            /**< (LCDC_OVR1CFG9) Blender DMA Layer Enable Mask */
#define LCDC_OVR1CFG9_DMA                   LCDC_OVR1CFG9_DMA_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CFG9_DMA_Msk instead */
#define LCDC_OVR1CFG9_REP_Pos               9                                              /**< (LCDC_OVR1CFG9) Use Replication logic to expand RGB color to 24 bits Position */
#define LCDC_OVR1CFG9_REP_Msk               (_U_(0x1) << LCDC_OVR1CFG9_REP_Pos)            /**< (LCDC_OVR1CFG9) Use Replication logic to expand RGB color to 24 bits Mask */
#define LCDC_OVR1CFG9_REP                   LCDC_OVR1CFG9_REP_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CFG9_REP_Msk instead */
#define LCDC_OVR1CFG9_DSTKEY_Pos            10                                             /**< (LCDC_OVR1CFG9) Destination Chroma Keying Position */
#define LCDC_OVR1CFG9_DSTKEY_Msk            (_U_(0x1) << LCDC_OVR1CFG9_DSTKEY_Pos)         /**< (LCDC_OVR1CFG9) Destination Chroma Keying Mask */
#define LCDC_OVR1CFG9_DSTKEY                LCDC_OVR1CFG9_DSTKEY_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR1CFG9_DSTKEY_Msk instead */
#define LCDC_OVR1CFG9_GA_Pos                16                                             /**< (LCDC_OVR1CFG9) Blender Global Alpha Position */
#define LCDC_OVR1CFG9_GA_Msk                (_U_(0xFF) << LCDC_OVR1CFG9_GA_Pos)            /**< (LCDC_OVR1CFG9) Blender Global Alpha Mask */
#define LCDC_OVR1CFG9_GA(value)             (LCDC_OVR1CFG9_GA_Msk & ((value) << LCDC_OVR1CFG9_GA_Pos))
#define LCDC_OVR1CFG9_MASK                  _U_(0xFF07FF)                                  /**< \deprecated (LCDC_OVR1CFG9) Register MASK  (Use LCDC_OVR1CFG9_Msk instead)  */
#define LCDC_OVR1CFG9_Msk                   _U_(0xFF07FF)                                  /**< (LCDC_OVR1CFG9) Register Mask  */


/* -------- LCDC_OVR2CHER : (LCDC Offset: 0x240) (/W 32) Overlay 2 Channel Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHEN:1;                    /**< bit:      0  Channel Enable                           */
    uint32_t UPDATEEN:1;                /**< bit:      1  Update Overlay Attributes Enable         */
    uint32_t A2QEN:1;                   /**< bit:      2  Add To Queue Enable                      */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2CHER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2CHER_OFFSET                (0x240)                                       /**<  (LCDC_OVR2CHER) Overlay 2 Channel Enable Register  Offset */

#define LCDC_OVR2CHER_CHEN_Pos              0                                              /**< (LCDC_OVR2CHER) Channel Enable Position */
#define LCDC_OVR2CHER_CHEN_Msk              (_U_(0x1) << LCDC_OVR2CHER_CHEN_Pos)           /**< (LCDC_OVR2CHER) Channel Enable Mask */
#define LCDC_OVR2CHER_CHEN                  LCDC_OVR2CHER_CHEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CHER_CHEN_Msk instead */
#define LCDC_OVR2CHER_UPDATEEN_Pos          1                                              /**< (LCDC_OVR2CHER) Update Overlay Attributes Enable Position */
#define LCDC_OVR2CHER_UPDATEEN_Msk          (_U_(0x1) << LCDC_OVR2CHER_UPDATEEN_Pos)       /**< (LCDC_OVR2CHER) Update Overlay Attributes Enable Mask */
#define LCDC_OVR2CHER_UPDATEEN              LCDC_OVR2CHER_UPDATEEN_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CHER_UPDATEEN_Msk instead */
#define LCDC_OVR2CHER_A2QEN_Pos             2                                              /**< (LCDC_OVR2CHER) Add To Queue Enable Position */
#define LCDC_OVR2CHER_A2QEN_Msk             (_U_(0x1) << LCDC_OVR2CHER_A2QEN_Pos)          /**< (LCDC_OVR2CHER) Add To Queue Enable Mask */
#define LCDC_OVR2CHER_A2QEN                 LCDC_OVR2CHER_A2QEN_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CHER_A2QEN_Msk instead */
#define LCDC_OVR2CHER_MASK                  _U_(0x07)                                      /**< \deprecated (LCDC_OVR2CHER) Register MASK  (Use LCDC_OVR2CHER_Msk instead)  */
#define LCDC_OVR2CHER_Msk                   _U_(0x07)                                      /**< (LCDC_OVR2CHER) Register Mask  */


/* -------- LCDC_OVR2CHDR : (LCDC Offset: 0x244) (/W 32) Overlay 2 Channel Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHDIS:1;                   /**< bit:      0  Channel Disable                          */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t CHRST:1;                   /**< bit:      8  Channel Reset                            */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2CHDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2CHDR_OFFSET                (0x244)                                       /**<  (LCDC_OVR2CHDR) Overlay 2 Channel Disable Register  Offset */

#define LCDC_OVR2CHDR_CHDIS_Pos             0                                              /**< (LCDC_OVR2CHDR) Channel Disable Position */
#define LCDC_OVR2CHDR_CHDIS_Msk             (_U_(0x1) << LCDC_OVR2CHDR_CHDIS_Pos)          /**< (LCDC_OVR2CHDR) Channel Disable Mask */
#define LCDC_OVR2CHDR_CHDIS                 LCDC_OVR2CHDR_CHDIS_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CHDR_CHDIS_Msk instead */
#define LCDC_OVR2CHDR_CHRST_Pos             8                                              /**< (LCDC_OVR2CHDR) Channel Reset Position */
#define LCDC_OVR2CHDR_CHRST_Msk             (_U_(0x1) << LCDC_OVR2CHDR_CHRST_Pos)          /**< (LCDC_OVR2CHDR) Channel Reset Mask */
#define LCDC_OVR2CHDR_CHRST                 LCDC_OVR2CHDR_CHRST_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CHDR_CHRST_Msk instead */
#define LCDC_OVR2CHDR_MASK                  _U_(0x101)                                     /**< \deprecated (LCDC_OVR2CHDR) Register MASK  (Use LCDC_OVR2CHDR_Msk instead)  */
#define LCDC_OVR2CHDR_Msk                   _U_(0x101)                                     /**< (LCDC_OVR2CHDR) Register Mask  */


/* -------- LCDC_OVR2CHSR : (LCDC Offset: 0x248) (R/ 32) Overlay 2 Channel Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHSR:1;                    /**< bit:      0  Channel Status                           */
    uint32_t UPDATESR:1;                /**< bit:      1  Update Overlay Attributes In Progress Status */
    uint32_t A2QSR:1;                   /**< bit:      2  Add To Queue Status                      */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2CHSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2CHSR_OFFSET                (0x248)                                       /**<  (LCDC_OVR2CHSR) Overlay 2 Channel Status Register  Offset */

#define LCDC_OVR2CHSR_CHSR_Pos              0                                              /**< (LCDC_OVR2CHSR) Channel Status Position */
#define LCDC_OVR2CHSR_CHSR_Msk              (_U_(0x1) << LCDC_OVR2CHSR_CHSR_Pos)           /**< (LCDC_OVR2CHSR) Channel Status Mask */
#define LCDC_OVR2CHSR_CHSR                  LCDC_OVR2CHSR_CHSR_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CHSR_CHSR_Msk instead */
#define LCDC_OVR2CHSR_UPDATESR_Pos          1                                              /**< (LCDC_OVR2CHSR) Update Overlay Attributes In Progress Status Position */
#define LCDC_OVR2CHSR_UPDATESR_Msk          (_U_(0x1) << LCDC_OVR2CHSR_UPDATESR_Pos)       /**< (LCDC_OVR2CHSR) Update Overlay Attributes In Progress Status Mask */
#define LCDC_OVR2CHSR_UPDATESR              LCDC_OVR2CHSR_UPDATESR_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CHSR_UPDATESR_Msk instead */
#define LCDC_OVR2CHSR_A2QSR_Pos             2                                              /**< (LCDC_OVR2CHSR) Add To Queue Status Position */
#define LCDC_OVR2CHSR_A2QSR_Msk             (_U_(0x1) << LCDC_OVR2CHSR_A2QSR_Pos)          /**< (LCDC_OVR2CHSR) Add To Queue Status Mask */
#define LCDC_OVR2CHSR_A2QSR                 LCDC_OVR2CHSR_A2QSR_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CHSR_A2QSR_Msk instead */
#define LCDC_OVR2CHSR_MASK                  _U_(0x07)                                      /**< \deprecated (LCDC_OVR2CHSR) Register MASK  (Use LCDC_OVR2CHSR_Msk instead)  */
#define LCDC_OVR2CHSR_Msk                   _U_(0x07)                                      /**< (LCDC_OVR2CHSR) Register Mask  */


/* -------- LCDC_OVR2IER : (LCDC Offset: 0x24c) (/W 32) Overlay 2 Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DMA:1;                     /**< bit:      2  End of DMA Transfer Interrupt Enable     */
    uint32_t DSCR:1;                    /**< bit:      3  Descriptor Loaded Interrupt Enable       */
    uint32_t ADD:1;                     /**< bit:      4  Head Descriptor Loaded Interrupt Enable  */
    uint32_t DONE:1;                    /**< bit:      5  End of List Interrupt Enable             */
    uint32_t OVR:1;                     /**< bit:      6  Overflow Interrupt Enable                */
    uint32_t :25;                       /**< bit:  7..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2IER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2IER_OFFSET                 (0x24C)                                       /**<  (LCDC_OVR2IER) Overlay 2 Interrupt Enable Register  Offset */

#define LCDC_OVR2IER_DMA_Pos                2                                              /**< (LCDC_OVR2IER) End of DMA Transfer Interrupt Enable Position */
#define LCDC_OVR2IER_DMA_Msk                (_U_(0x1) << LCDC_OVR2IER_DMA_Pos)             /**< (LCDC_OVR2IER) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_OVR2IER_DMA                    LCDC_OVR2IER_DMA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2IER_DMA_Msk instead */
#define LCDC_OVR2IER_DSCR_Pos               3                                              /**< (LCDC_OVR2IER) Descriptor Loaded Interrupt Enable Position */
#define LCDC_OVR2IER_DSCR_Msk               (_U_(0x1) << LCDC_OVR2IER_DSCR_Pos)            /**< (LCDC_OVR2IER) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_OVR2IER_DSCR                   LCDC_OVR2IER_DSCR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2IER_DSCR_Msk instead */
#define LCDC_OVR2IER_ADD_Pos                4                                              /**< (LCDC_OVR2IER) Head Descriptor Loaded Interrupt Enable Position */
#define LCDC_OVR2IER_ADD_Msk                (_U_(0x1) << LCDC_OVR2IER_ADD_Pos)             /**< (LCDC_OVR2IER) Head Descriptor Loaded Interrupt Enable Mask */
#define LCDC_OVR2IER_ADD                    LCDC_OVR2IER_ADD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2IER_ADD_Msk instead */
#define LCDC_OVR2IER_DONE_Pos               5                                              /**< (LCDC_OVR2IER) End of List Interrupt Enable Position */
#define LCDC_OVR2IER_DONE_Msk               (_U_(0x1) << LCDC_OVR2IER_DONE_Pos)            /**< (LCDC_OVR2IER) End of List Interrupt Enable Mask */
#define LCDC_OVR2IER_DONE                   LCDC_OVR2IER_DONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2IER_DONE_Msk instead */
#define LCDC_OVR2IER_OVR_Pos                6                                              /**< (LCDC_OVR2IER) Overflow Interrupt Enable Position */
#define LCDC_OVR2IER_OVR_Msk                (_U_(0x1) << LCDC_OVR2IER_OVR_Pos)             /**< (LCDC_OVR2IER) Overflow Interrupt Enable Mask */
#define LCDC_OVR2IER_OVR                    LCDC_OVR2IER_OVR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2IER_OVR_Msk instead */
#define LCDC_OVR2IER_MASK                   _U_(0x7C)                                      /**< \deprecated (LCDC_OVR2IER) Register MASK  (Use LCDC_OVR2IER_Msk instead)  */
#define LCDC_OVR2IER_Msk                    _U_(0x7C)                                      /**< (LCDC_OVR2IER) Register Mask  */


/* -------- LCDC_OVR2IDR : (LCDC Offset: 0x250) (/W 32) Overlay 2 Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DMA:1;                     /**< bit:      2  End of DMA Transfer Interrupt Disable    */
    uint32_t DSCR:1;                    /**< bit:      3  Descriptor Loaded Interrupt Disable      */
    uint32_t ADD:1;                     /**< bit:      4  Head Descriptor Loaded Interrupt Disable */
    uint32_t DONE:1;                    /**< bit:      5  End of List Interrupt Disable            */
    uint32_t OVR:1;                     /**< bit:      6  Overflow Interrupt Disable               */
    uint32_t :25;                       /**< bit:  7..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2IDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2IDR_OFFSET                 (0x250)                                       /**<  (LCDC_OVR2IDR) Overlay 2 Interrupt Disable Register  Offset */

#define LCDC_OVR2IDR_DMA_Pos                2                                              /**< (LCDC_OVR2IDR) End of DMA Transfer Interrupt Disable Position */
#define LCDC_OVR2IDR_DMA_Msk                (_U_(0x1) << LCDC_OVR2IDR_DMA_Pos)             /**< (LCDC_OVR2IDR) End of DMA Transfer Interrupt Disable Mask */
#define LCDC_OVR2IDR_DMA                    LCDC_OVR2IDR_DMA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2IDR_DMA_Msk instead */
#define LCDC_OVR2IDR_DSCR_Pos               3                                              /**< (LCDC_OVR2IDR) Descriptor Loaded Interrupt Disable Position */
#define LCDC_OVR2IDR_DSCR_Msk               (_U_(0x1) << LCDC_OVR2IDR_DSCR_Pos)            /**< (LCDC_OVR2IDR) Descriptor Loaded Interrupt Disable Mask */
#define LCDC_OVR2IDR_DSCR                   LCDC_OVR2IDR_DSCR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2IDR_DSCR_Msk instead */
#define LCDC_OVR2IDR_ADD_Pos                4                                              /**< (LCDC_OVR2IDR) Head Descriptor Loaded Interrupt Disable Position */
#define LCDC_OVR2IDR_ADD_Msk                (_U_(0x1) << LCDC_OVR2IDR_ADD_Pos)             /**< (LCDC_OVR2IDR) Head Descriptor Loaded Interrupt Disable Mask */
#define LCDC_OVR2IDR_ADD                    LCDC_OVR2IDR_ADD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2IDR_ADD_Msk instead */
#define LCDC_OVR2IDR_DONE_Pos               5                                              /**< (LCDC_OVR2IDR) End of List Interrupt Disable Position */
#define LCDC_OVR2IDR_DONE_Msk               (_U_(0x1) << LCDC_OVR2IDR_DONE_Pos)            /**< (LCDC_OVR2IDR) End of List Interrupt Disable Mask */
#define LCDC_OVR2IDR_DONE                   LCDC_OVR2IDR_DONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2IDR_DONE_Msk instead */
#define LCDC_OVR2IDR_OVR_Pos                6                                              /**< (LCDC_OVR2IDR) Overflow Interrupt Disable Position */
#define LCDC_OVR2IDR_OVR_Msk                (_U_(0x1) << LCDC_OVR2IDR_OVR_Pos)             /**< (LCDC_OVR2IDR) Overflow Interrupt Disable Mask */
#define LCDC_OVR2IDR_OVR                    LCDC_OVR2IDR_OVR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2IDR_OVR_Msk instead */
#define LCDC_OVR2IDR_MASK                   _U_(0x7C)                                      /**< \deprecated (LCDC_OVR2IDR) Register MASK  (Use LCDC_OVR2IDR_Msk instead)  */
#define LCDC_OVR2IDR_Msk                    _U_(0x7C)                                      /**< (LCDC_OVR2IDR) Register Mask  */


/* -------- LCDC_OVR2IMR : (LCDC Offset: 0x254) (R/ 32) Overlay 2 Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DMA:1;                     /**< bit:      2  End of DMA Transfer Interrupt Mask       */
    uint32_t DSCR:1;                    /**< bit:      3  Descriptor Loaded Interrupt Mask         */
    uint32_t ADD:1;                     /**< bit:      4  Head Descriptor Loaded Interrupt Mask    */
    uint32_t DONE:1;                    /**< bit:      5  End of List Interrupt Mask               */
    uint32_t OVR:1;                     /**< bit:      6  Overflow Interrupt Mask                  */
    uint32_t :25;                       /**< bit:  7..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2IMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2IMR_OFFSET                 (0x254)                                       /**<  (LCDC_OVR2IMR) Overlay 2 Interrupt Mask Register  Offset */

#define LCDC_OVR2IMR_DMA_Pos                2                                              /**< (LCDC_OVR2IMR) End of DMA Transfer Interrupt Mask Position */
#define LCDC_OVR2IMR_DMA_Msk                (_U_(0x1) << LCDC_OVR2IMR_DMA_Pos)             /**< (LCDC_OVR2IMR) End of DMA Transfer Interrupt Mask Mask */
#define LCDC_OVR2IMR_DMA                    LCDC_OVR2IMR_DMA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2IMR_DMA_Msk instead */
#define LCDC_OVR2IMR_DSCR_Pos               3                                              /**< (LCDC_OVR2IMR) Descriptor Loaded Interrupt Mask Position */
#define LCDC_OVR2IMR_DSCR_Msk               (_U_(0x1) << LCDC_OVR2IMR_DSCR_Pos)            /**< (LCDC_OVR2IMR) Descriptor Loaded Interrupt Mask Mask */
#define LCDC_OVR2IMR_DSCR                   LCDC_OVR2IMR_DSCR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2IMR_DSCR_Msk instead */
#define LCDC_OVR2IMR_ADD_Pos                4                                              /**< (LCDC_OVR2IMR) Head Descriptor Loaded Interrupt Mask Position */
#define LCDC_OVR2IMR_ADD_Msk                (_U_(0x1) << LCDC_OVR2IMR_ADD_Pos)             /**< (LCDC_OVR2IMR) Head Descriptor Loaded Interrupt Mask Mask */
#define LCDC_OVR2IMR_ADD                    LCDC_OVR2IMR_ADD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2IMR_ADD_Msk instead */
#define LCDC_OVR2IMR_DONE_Pos               5                                              /**< (LCDC_OVR2IMR) End of List Interrupt Mask Position */
#define LCDC_OVR2IMR_DONE_Msk               (_U_(0x1) << LCDC_OVR2IMR_DONE_Pos)            /**< (LCDC_OVR2IMR) End of List Interrupt Mask Mask */
#define LCDC_OVR2IMR_DONE                   LCDC_OVR2IMR_DONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2IMR_DONE_Msk instead */
#define LCDC_OVR2IMR_OVR_Pos                6                                              /**< (LCDC_OVR2IMR) Overflow Interrupt Mask Position */
#define LCDC_OVR2IMR_OVR_Msk                (_U_(0x1) << LCDC_OVR2IMR_OVR_Pos)             /**< (LCDC_OVR2IMR) Overflow Interrupt Mask Mask */
#define LCDC_OVR2IMR_OVR                    LCDC_OVR2IMR_OVR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2IMR_OVR_Msk instead */
#define LCDC_OVR2IMR_MASK                   _U_(0x7C)                                      /**< \deprecated (LCDC_OVR2IMR) Register MASK  (Use LCDC_OVR2IMR_Msk instead)  */
#define LCDC_OVR2IMR_Msk                    _U_(0x7C)                                      /**< (LCDC_OVR2IMR) Register Mask  */


/* -------- LCDC_OVR2ISR : (LCDC Offset: 0x258) (R/ 32) Overlay 2 Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DMA:1;                     /**< bit:      2  End of DMA Transfer                      */
    uint32_t DSCR:1;                    /**< bit:      3  DMA Descriptor Loaded                    */
    uint32_t ADD:1;                     /**< bit:      4  Head Descriptor Loaded                   */
    uint32_t DONE:1;                    /**< bit:      5  End of List Detected                     */
    uint32_t OVR:1;                     /**< bit:      6  Overflow Detected                        */
    uint32_t :25;                       /**< bit:  7..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2ISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2ISR_OFFSET                 (0x258)                                       /**<  (LCDC_OVR2ISR) Overlay 2 Interrupt Status Register  Offset */

#define LCDC_OVR2ISR_DMA_Pos                2                                              /**< (LCDC_OVR2ISR) End of DMA Transfer Position */
#define LCDC_OVR2ISR_DMA_Msk                (_U_(0x1) << LCDC_OVR2ISR_DMA_Pos)             /**< (LCDC_OVR2ISR) End of DMA Transfer Mask */
#define LCDC_OVR2ISR_DMA                    LCDC_OVR2ISR_DMA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2ISR_DMA_Msk instead */
#define LCDC_OVR2ISR_DSCR_Pos               3                                              /**< (LCDC_OVR2ISR) DMA Descriptor Loaded Position */
#define LCDC_OVR2ISR_DSCR_Msk               (_U_(0x1) << LCDC_OVR2ISR_DSCR_Pos)            /**< (LCDC_OVR2ISR) DMA Descriptor Loaded Mask */
#define LCDC_OVR2ISR_DSCR                   LCDC_OVR2ISR_DSCR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2ISR_DSCR_Msk instead */
#define LCDC_OVR2ISR_ADD_Pos                4                                              /**< (LCDC_OVR2ISR) Head Descriptor Loaded Position */
#define LCDC_OVR2ISR_ADD_Msk                (_U_(0x1) << LCDC_OVR2ISR_ADD_Pos)             /**< (LCDC_OVR2ISR) Head Descriptor Loaded Mask */
#define LCDC_OVR2ISR_ADD                    LCDC_OVR2ISR_ADD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2ISR_ADD_Msk instead */
#define LCDC_OVR2ISR_DONE_Pos               5                                              /**< (LCDC_OVR2ISR) End of List Detected Position */
#define LCDC_OVR2ISR_DONE_Msk               (_U_(0x1) << LCDC_OVR2ISR_DONE_Pos)            /**< (LCDC_OVR2ISR) End of List Detected Mask */
#define LCDC_OVR2ISR_DONE                   LCDC_OVR2ISR_DONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2ISR_DONE_Msk instead */
#define LCDC_OVR2ISR_OVR_Pos                6                                              /**< (LCDC_OVR2ISR) Overflow Detected Position */
#define LCDC_OVR2ISR_OVR_Msk                (_U_(0x1) << LCDC_OVR2ISR_OVR_Pos)             /**< (LCDC_OVR2ISR) Overflow Detected Mask */
#define LCDC_OVR2ISR_OVR                    LCDC_OVR2ISR_OVR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2ISR_OVR_Msk instead */
#define LCDC_OVR2ISR_MASK                   _U_(0x7C)                                      /**< \deprecated (LCDC_OVR2ISR) Register MASK  (Use LCDC_OVR2ISR_Msk instead)  */
#define LCDC_OVR2ISR_Msk                    _U_(0x7C)                                      /**< (LCDC_OVR2ISR) Register Mask  */


/* -------- LCDC_OVR2HEAD : (LCDC Offset: 0x25c) (R/W 32) Overlay 2 DMA Head Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t HEAD:30;                   /**< bit:  2..31  DMA Head Pointer                         */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2HEAD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2HEAD_OFFSET                (0x25C)                                       /**<  (LCDC_OVR2HEAD) Overlay 2 DMA Head Register  Offset */

#define LCDC_OVR2HEAD_HEAD_Pos              2                                              /**< (LCDC_OVR2HEAD) DMA Head Pointer Position */
#define LCDC_OVR2HEAD_HEAD_Msk              (_U_(0x3FFFFFFF) << LCDC_OVR2HEAD_HEAD_Pos)    /**< (LCDC_OVR2HEAD) DMA Head Pointer Mask */
#define LCDC_OVR2HEAD_HEAD(value)           (LCDC_OVR2HEAD_HEAD_Msk & ((value) << LCDC_OVR2HEAD_HEAD_Pos))
#define LCDC_OVR2HEAD_MASK                  _U_(0xFFFFFFFC)                                /**< \deprecated (LCDC_OVR2HEAD) Register MASK  (Use LCDC_OVR2HEAD_Msk instead)  */
#define LCDC_OVR2HEAD_Msk                   _U_(0xFFFFFFFC)                                /**< (LCDC_OVR2HEAD) Register Mask  */


/* -------- LCDC_OVR2ADDR : (LCDC Offset: 0x260) (R/W 32) Overlay 2 DMA Address Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR:32;                   /**< bit:  0..31  DMA Transfer Overlay 2 Address           */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2ADDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2ADDR_OFFSET                (0x260)                                       /**<  (LCDC_OVR2ADDR) Overlay 2 DMA Address Register  Offset */

#define LCDC_OVR2ADDR_ADDR_Pos              0                                              /**< (LCDC_OVR2ADDR) DMA Transfer Overlay 2 Address Position */
#define LCDC_OVR2ADDR_ADDR_Msk              (_U_(0xFFFFFFFF) << LCDC_OVR2ADDR_ADDR_Pos)    /**< (LCDC_OVR2ADDR) DMA Transfer Overlay 2 Address Mask */
#define LCDC_OVR2ADDR_ADDR(value)           (LCDC_OVR2ADDR_ADDR_Msk & ((value) << LCDC_OVR2ADDR_ADDR_Pos))
#define LCDC_OVR2ADDR_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_OVR2ADDR) Register MASK  (Use LCDC_OVR2ADDR_Msk instead)  */
#define LCDC_OVR2ADDR_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_OVR2ADDR) Register Mask  */


/* -------- LCDC_OVR2CTRL : (LCDC Offset: 0x264) (R/W 32) Overlay 2 DMA Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DFETCH:1;                  /**< bit:      0  Transfer Descriptor Fetch Enable         */
    uint32_t LFETCH:1;                  /**< bit:      1  Lookup Table Fetch Enable                */
    uint32_t DMAIEN:1;                  /**< bit:      2  End of DMA Transfer Interrupt Enable     */
    uint32_t DSCRIEN:1;                 /**< bit:      3  Descriptor Loaded Interrupt Enable       */
    uint32_t ADDIEN:1;                  /**< bit:      4  Add Head Descriptor to Queue Interrupt Enable */
    uint32_t DONEIEN:1;                 /**< bit:      5  End of List Interrupt Enable             */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2CTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2CTRL_OFFSET                (0x264)                                       /**<  (LCDC_OVR2CTRL) Overlay 2 DMA Control Register  Offset */

#define LCDC_OVR2CTRL_DFETCH_Pos            0                                              /**< (LCDC_OVR2CTRL) Transfer Descriptor Fetch Enable Position */
#define LCDC_OVR2CTRL_DFETCH_Msk            (_U_(0x1) << LCDC_OVR2CTRL_DFETCH_Pos)         /**< (LCDC_OVR2CTRL) Transfer Descriptor Fetch Enable Mask */
#define LCDC_OVR2CTRL_DFETCH                LCDC_OVR2CTRL_DFETCH_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CTRL_DFETCH_Msk instead */
#define LCDC_OVR2CTRL_LFETCH_Pos            1                                              /**< (LCDC_OVR2CTRL) Lookup Table Fetch Enable Position */
#define LCDC_OVR2CTRL_LFETCH_Msk            (_U_(0x1) << LCDC_OVR2CTRL_LFETCH_Pos)         /**< (LCDC_OVR2CTRL) Lookup Table Fetch Enable Mask */
#define LCDC_OVR2CTRL_LFETCH                LCDC_OVR2CTRL_LFETCH_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CTRL_LFETCH_Msk instead */
#define LCDC_OVR2CTRL_DMAIEN_Pos            2                                              /**< (LCDC_OVR2CTRL) End of DMA Transfer Interrupt Enable Position */
#define LCDC_OVR2CTRL_DMAIEN_Msk            (_U_(0x1) << LCDC_OVR2CTRL_DMAIEN_Pos)         /**< (LCDC_OVR2CTRL) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_OVR2CTRL_DMAIEN                LCDC_OVR2CTRL_DMAIEN_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CTRL_DMAIEN_Msk instead */
#define LCDC_OVR2CTRL_DSCRIEN_Pos           3                                              /**< (LCDC_OVR2CTRL) Descriptor Loaded Interrupt Enable Position */
#define LCDC_OVR2CTRL_DSCRIEN_Msk           (_U_(0x1) << LCDC_OVR2CTRL_DSCRIEN_Pos)        /**< (LCDC_OVR2CTRL) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_OVR2CTRL_DSCRIEN               LCDC_OVR2CTRL_DSCRIEN_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CTRL_DSCRIEN_Msk instead */
#define LCDC_OVR2CTRL_ADDIEN_Pos            4                                              /**< (LCDC_OVR2CTRL) Add Head Descriptor to Queue Interrupt Enable Position */
#define LCDC_OVR2CTRL_ADDIEN_Msk            (_U_(0x1) << LCDC_OVR2CTRL_ADDIEN_Pos)         /**< (LCDC_OVR2CTRL) Add Head Descriptor to Queue Interrupt Enable Mask */
#define LCDC_OVR2CTRL_ADDIEN                LCDC_OVR2CTRL_ADDIEN_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CTRL_ADDIEN_Msk instead */
#define LCDC_OVR2CTRL_DONEIEN_Pos           5                                              /**< (LCDC_OVR2CTRL) End of List Interrupt Enable Position */
#define LCDC_OVR2CTRL_DONEIEN_Msk           (_U_(0x1) << LCDC_OVR2CTRL_DONEIEN_Pos)        /**< (LCDC_OVR2CTRL) End of List Interrupt Enable Mask */
#define LCDC_OVR2CTRL_DONEIEN               LCDC_OVR2CTRL_DONEIEN_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CTRL_DONEIEN_Msk instead */
#define LCDC_OVR2CTRL_MASK                  _U_(0x3F)                                      /**< \deprecated (LCDC_OVR2CTRL) Register MASK  (Use LCDC_OVR2CTRL_Msk instead)  */
#define LCDC_OVR2CTRL_Msk                   _U_(0x3F)                                      /**< (LCDC_OVR2CTRL) Register Mask  */


/* -------- LCDC_OVR2NEXT : (LCDC Offset: 0x268) (R/W 32) Overlay 2 DMA Next Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NEXT:32;                   /**< bit:  0..31  DMA Descriptor Next Address              */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2NEXT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2NEXT_OFFSET                (0x268)                                       /**<  (LCDC_OVR2NEXT) Overlay 2 DMA Next Register  Offset */

#define LCDC_OVR2NEXT_NEXT_Pos              0                                              /**< (LCDC_OVR2NEXT) DMA Descriptor Next Address Position */
#define LCDC_OVR2NEXT_NEXT_Msk              (_U_(0xFFFFFFFF) << LCDC_OVR2NEXT_NEXT_Pos)    /**< (LCDC_OVR2NEXT) DMA Descriptor Next Address Mask */
#define LCDC_OVR2NEXT_NEXT(value)           (LCDC_OVR2NEXT_NEXT_Msk & ((value) << LCDC_OVR2NEXT_NEXT_Pos))
#define LCDC_OVR2NEXT_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_OVR2NEXT) Register MASK  (Use LCDC_OVR2NEXT_Msk instead)  */
#define LCDC_OVR2NEXT_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_OVR2NEXT) Register Mask  */


/* -------- LCDC_OVR2CFG0 : (LCDC Offset: 0x26c) (R/W 32) Overlay 2 Configuration Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :4;                        /**< bit:   0..3  Reserved */
    uint32_t BLEN:2;                    /**< bit:   4..5  AHB Burst Length                         */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t DLBO:1;                    /**< bit:      8  Defined Length Burst Only For Channel Bus Transaction */
    uint32_t :3;                        /**< bit:  9..11  Reserved */
    uint32_t ROTDIS:1;                  /**< bit:     12  Hardware Rotation Optimization Disable   */
    uint32_t LOCKDIS:1;                 /**< bit:     13  Hardware Rotation Lock Disable           */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2CFG0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2CFG0_OFFSET                (0x26C)                                       /**<  (LCDC_OVR2CFG0) Overlay 2 Configuration Register 0  Offset */

#define LCDC_OVR2CFG0_BLEN_Pos              4                                              /**< (LCDC_OVR2CFG0) AHB Burst Length Position */
#define LCDC_OVR2CFG0_BLEN_Msk              (_U_(0x3) << LCDC_OVR2CFG0_BLEN_Pos)           /**< (LCDC_OVR2CFG0) AHB Burst Length Mask */
#define LCDC_OVR2CFG0_BLEN(value)           (LCDC_OVR2CFG0_BLEN_Msk & ((value) << LCDC_OVR2CFG0_BLEN_Pos))
#define   LCDC_OVR2CFG0_BLEN_AHB_SINGLE_Val _U_(0x0)                                       /**< (LCDC_OVR2CFG0) AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_OVR2CFG0_BLEN_AHB_INCR4_Val  _U_(0x1)                                       /**< (LCDC_OVR2CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 4 data. An AHB INCR4 Burst is used. SINGLE, INCR and INCR4 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_OVR2CFG0_BLEN_AHB_INCR8_Val  _U_(0x2)                                       /**< (LCDC_OVR2CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 8 data. An AHB INCR8 Burst is used. SINGLE, INCR, INCR4 and INCR8 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_OVR2CFG0_BLEN_AHB_INCR16_Val _U_(0x3)                                       /**< (LCDC_OVR2CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 16 data. An AHB INCR16 Burst is used. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define LCDC_OVR2CFG0_BLEN_AHB_SINGLE       (LCDC_OVR2CFG0_BLEN_AHB_SINGLE_Val << LCDC_OVR2CFG0_BLEN_Pos)  /**< (LCDC_OVR2CFG0) AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_OVR2CFG0_BLEN_AHB_INCR4        (LCDC_OVR2CFG0_BLEN_AHB_INCR4_Val << LCDC_OVR2CFG0_BLEN_Pos)  /**< (LCDC_OVR2CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 4 data. An AHB INCR4 Burst is used. SINGLE, INCR and INCR4 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_OVR2CFG0_BLEN_AHB_INCR8        (LCDC_OVR2CFG0_BLEN_AHB_INCR8_Val << LCDC_OVR2CFG0_BLEN_Pos)  /**< (LCDC_OVR2CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 8 data. An AHB INCR8 Burst is used. SINGLE, INCR, INCR4 and INCR8 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_OVR2CFG0_BLEN_AHB_INCR16       (LCDC_OVR2CFG0_BLEN_AHB_INCR16_Val << LCDC_OVR2CFG0_BLEN_Pos)  /**< (LCDC_OVR2CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 16 data. An AHB INCR16 Burst is used. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_OVR2CFG0_DLBO_Pos              8                                              /**< (LCDC_OVR2CFG0) Defined Length Burst Only For Channel Bus Transaction Position */
#define LCDC_OVR2CFG0_DLBO_Msk              (_U_(0x1) << LCDC_OVR2CFG0_DLBO_Pos)           /**< (LCDC_OVR2CFG0) Defined Length Burst Only For Channel Bus Transaction Mask */
#define LCDC_OVR2CFG0_DLBO                  LCDC_OVR2CFG0_DLBO_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CFG0_DLBO_Msk instead */
#define LCDC_OVR2CFG0_ROTDIS_Pos            12                                             /**< (LCDC_OVR2CFG0) Hardware Rotation Optimization Disable Position */
#define LCDC_OVR2CFG0_ROTDIS_Msk            (_U_(0x1) << LCDC_OVR2CFG0_ROTDIS_Pos)         /**< (LCDC_OVR2CFG0) Hardware Rotation Optimization Disable Mask */
#define LCDC_OVR2CFG0_ROTDIS                LCDC_OVR2CFG0_ROTDIS_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CFG0_ROTDIS_Msk instead */
#define LCDC_OVR2CFG0_LOCKDIS_Pos           13                                             /**< (LCDC_OVR2CFG0) Hardware Rotation Lock Disable Position */
#define LCDC_OVR2CFG0_LOCKDIS_Msk           (_U_(0x1) << LCDC_OVR2CFG0_LOCKDIS_Pos)        /**< (LCDC_OVR2CFG0) Hardware Rotation Lock Disable Mask */
#define LCDC_OVR2CFG0_LOCKDIS               LCDC_OVR2CFG0_LOCKDIS_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CFG0_LOCKDIS_Msk instead */
#define LCDC_OVR2CFG0_MASK                  _U_(0x3130)                                    /**< \deprecated (LCDC_OVR2CFG0) Register MASK  (Use LCDC_OVR2CFG0_Msk instead)  */
#define LCDC_OVR2CFG0_Msk                   _U_(0x3130)                                    /**< (LCDC_OVR2CFG0) Register Mask  */


/* -------- LCDC_OVR2CFG1 : (LCDC Offset: 0x270) (R/W 32) Overlay 2 Configuration Register 1 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CLUTEN:1;                  /**< bit:      0  Color Lookup Table Mode Enable           */
    uint32_t :3;                        /**< bit:   1..3  Reserved */
    uint32_t RGBMODE:4;                 /**< bit:   4..7  RGB Mode Input Selection                 */
    uint32_t CLUTMODE:2;                /**< bit:   8..9  Color Lookup Table Mode Input Selection  */
    uint32_t :22;                       /**< bit: 10..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2CFG1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2CFG1_OFFSET                (0x270)                                       /**<  (LCDC_OVR2CFG1) Overlay 2 Configuration Register 1  Offset */

#define LCDC_OVR2CFG1_CLUTEN_Pos            0                                              /**< (LCDC_OVR2CFG1) Color Lookup Table Mode Enable Position */
#define LCDC_OVR2CFG1_CLUTEN_Msk            (_U_(0x1) << LCDC_OVR2CFG1_CLUTEN_Pos)         /**< (LCDC_OVR2CFG1) Color Lookup Table Mode Enable Mask */
#define LCDC_OVR2CFG1_CLUTEN                LCDC_OVR2CFG1_CLUTEN_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CFG1_CLUTEN_Msk instead */
#define LCDC_OVR2CFG1_RGBMODE_Pos           4                                              /**< (LCDC_OVR2CFG1) RGB Mode Input Selection Position */
#define LCDC_OVR2CFG1_RGBMODE_Msk           (_U_(0xF) << LCDC_OVR2CFG1_RGBMODE_Pos)        /**< (LCDC_OVR2CFG1) RGB Mode Input Selection Mask */
#define LCDC_OVR2CFG1_RGBMODE(value)        (LCDC_OVR2CFG1_RGBMODE_Msk & ((value) << LCDC_OVR2CFG1_RGBMODE_Pos))
#define   LCDC_OVR2CFG1_RGBMODE_12BPP_RGB_444_Val _U_(0x0)                                       /**< (LCDC_OVR2CFG1) 12 bpp RGB 444  */
#define   LCDC_OVR2CFG1_RGBMODE_16BPP_ARGB_4444_Val _U_(0x1)                                       /**< (LCDC_OVR2CFG1) 16 bpp ARGB 4444  */
#define   LCDC_OVR2CFG1_RGBMODE_16BPP_RGBA_4444_Val _U_(0x2)                                       /**< (LCDC_OVR2CFG1) 16 bpp RGBA 4444  */
#define   LCDC_OVR2CFG1_RGBMODE_16BPP_RGB_565_Val _U_(0x3)                                       /**< (LCDC_OVR2CFG1) 16 bpp RGB 565  */
#define   LCDC_OVR2CFG1_RGBMODE_16BPP_TRGB_1555_Val _U_(0x4)                                       /**< (LCDC_OVR2CFG1) 16 bpp TRGB 1555  */
#define   LCDC_OVR2CFG1_RGBMODE_18BPP_RGB_666_Val _U_(0x5)                                       /**< (LCDC_OVR2CFG1) 18 bpp RGB 666  */
#define   LCDC_OVR2CFG1_RGBMODE_18BPP_RGB_666PACKED_Val _U_(0x6)                                       /**< (LCDC_OVR2CFG1) 18 bpp RGB 666 PACKED  */
#define   LCDC_OVR2CFG1_RGBMODE_19BPP_TRGB_1666_Val _U_(0x7)                                       /**< (LCDC_OVR2CFG1) 19 bpp TRGB 1666  */
#define   LCDC_OVR2CFG1_RGBMODE_19BPP_TRGB_PACKED_Val _U_(0x8)                                       /**< (LCDC_OVR2CFG1) 19 bpp TRGB 1666 PACKED  */
#define   LCDC_OVR2CFG1_RGBMODE_24BPP_RGB_888_Val _U_(0x9)                                       /**< (LCDC_OVR2CFG1) 24 bpp RGB 888  */
#define   LCDC_OVR2CFG1_RGBMODE_24BPP_RGB_888_PACKED_Val _U_(0xA)                                       /**< (LCDC_OVR2CFG1) 24 bpp RGB 888 PACKED  */
#define   LCDC_OVR2CFG1_RGBMODE_25BPP_TRGB_1888_Val _U_(0xB)                                       /**< (LCDC_OVR2CFG1) 25 bpp TRGB 1888  */
#define   LCDC_OVR2CFG1_RGBMODE_32BPP_ARGB_8888_Val _U_(0xC)                                       /**< (LCDC_OVR2CFG1) 32 bpp ARGB 8888  */
#define   LCDC_OVR2CFG1_RGBMODE_32BPP_RGBA_8888_Val _U_(0xD)                                       /**< (LCDC_OVR2CFG1) 32 bpp RGBA 8888  */
#define LCDC_OVR2CFG1_RGBMODE_12BPP_RGB_444 (LCDC_OVR2CFG1_RGBMODE_12BPP_RGB_444_Val << LCDC_OVR2CFG1_RGBMODE_Pos)  /**< (LCDC_OVR2CFG1) 12 bpp RGB 444 Position  */
#define LCDC_OVR2CFG1_RGBMODE_16BPP_ARGB_4444 (LCDC_OVR2CFG1_RGBMODE_16BPP_ARGB_4444_Val << LCDC_OVR2CFG1_RGBMODE_Pos)  /**< (LCDC_OVR2CFG1) 16 bpp ARGB 4444 Position  */
#define LCDC_OVR2CFG1_RGBMODE_16BPP_RGBA_4444 (LCDC_OVR2CFG1_RGBMODE_16BPP_RGBA_4444_Val << LCDC_OVR2CFG1_RGBMODE_Pos)  /**< (LCDC_OVR2CFG1) 16 bpp RGBA 4444 Position  */
#define LCDC_OVR2CFG1_RGBMODE_16BPP_RGB_565 (LCDC_OVR2CFG1_RGBMODE_16BPP_RGB_565_Val << LCDC_OVR2CFG1_RGBMODE_Pos)  /**< (LCDC_OVR2CFG1) 16 bpp RGB 565 Position  */
#define LCDC_OVR2CFG1_RGBMODE_16BPP_TRGB_1555 (LCDC_OVR2CFG1_RGBMODE_16BPP_TRGB_1555_Val << LCDC_OVR2CFG1_RGBMODE_Pos)  /**< (LCDC_OVR2CFG1) 16 bpp TRGB 1555 Position  */
#define LCDC_OVR2CFG1_RGBMODE_18BPP_RGB_666 (LCDC_OVR2CFG1_RGBMODE_18BPP_RGB_666_Val << LCDC_OVR2CFG1_RGBMODE_Pos)  /**< (LCDC_OVR2CFG1) 18 bpp RGB 666 Position  */
#define LCDC_OVR2CFG1_RGBMODE_18BPP_RGB_666PACKED (LCDC_OVR2CFG1_RGBMODE_18BPP_RGB_666PACKED_Val << LCDC_OVR2CFG1_RGBMODE_Pos)  /**< (LCDC_OVR2CFG1) 18 bpp RGB 666 PACKED Position  */
#define LCDC_OVR2CFG1_RGBMODE_19BPP_TRGB_1666 (LCDC_OVR2CFG1_RGBMODE_19BPP_TRGB_1666_Val << LCDC_OVR2CFG1_RGBMODE_Pos)  /**< (LCDC_OVR2CFG1) 19 bpp TRGB 1666 Position  */
#define LCDC_OVR2CFG1_RGBMODE_19BPP_TRGB_PACKED (LCDC_OVR2CFG1_RGBMODE_19BPP_TRGB_PACKED_Val << LCDC_OVR2CFG1_RGBMODE_Pos)  /**< (LCDC_OVR2CFG1) 19 bpp TRGB 1666 PACKED Position  */
#define LCDC_OVR2CFG1_RGBMODE_24BPP_RGB_888 (LCDC_OVR2CFG1_RGBMODE_24BPP_RGB_888_Val << LCDC_OVR2CFG1_RGBMODE_Pos)  /**< (LCDC_OVR2CFG1) 24 bpp RGB 888 Position  */
#define LCDC_OVR2CFG1_RGBMODE_24BPP_RGB_888_PACKED (LCDC_OVR2CFG1_RGBMODE_24BPP_RGB_888_PACKED_Val << LCDC_OVR2CFG1_RGBMODE_Pos)  /**< (LCDC_OVR2CFG1) 24 bpp RGB 888 PACKED Position  */
#define LCDC_OVR2CFG1_RGBMODE_25BPP_TRGB_1888 (LCDC_OVR2CFG1_RGBMODE_25BPP_TRGB_1888_Val << LCDC_OVR2CFG1_RGBMODE_Pos)  /**< (LCDC_OVR2CFG1) 25 bpp TRGB 1888 Position  */
#define LCDC_OVR2CFG1_RGBMODE_32BPP_ARGB_8888 (LCDC_OVR2CFG1_RGBMODE_32BPP_ARGB_8888_Val << LCDC_OVR2CFG1_RGBMODE_Pos)  /**< (LCDC_OVR2CFG1) 32 bpp ARGB 8888 Position  */
#define LCDC_OVR2CFG1_RGBMODE_32BPP_RGBA_8888 (LCDC_OVR2CFG1_RGBMODE_32BPP_RGBA_8888_Val << LCDC_OVR2CFG1_RGBMODE_Pos)  /**< (LCDC_OVR2CFG1) 32 bpp RGBA 8888 Position  */
#define LCDC_OVR2CFG1_CLUTMODE_Pos          8                                              /**< (LCDC_OVR2CFG1) Color Lookup Table Mode Input Selection Position */
#define LCDC_OVR2CFG1_CLUTMODE_Msk          (_U_(0x3) << LCDC_OVR2CFG1_CLUTMODE_Pos)       /**< (LCDC_OVR2CFG1) Color Lookup Table Mode Input Selection Mask */
#define LCDC_OVR2CFG1_CLUTMODE(value)       (LCDC_OVR2CFG1_CLUTMODE_Msk & ((value) << LCDC_OVR2CFG1_CLUTMODE_Pos))
#define   LCDC_OVR2CFG1_CLUTMODE_CLUT_1BPP_Val _U_(0x0)                                       /**< (LCDC_OVR2CFG1) Color Lookup Table mode set to 1 bit per pixel  */
#define   LCDC_OVR2CFG1_CLUTMODE_CLUT_2BPP_Val _U_(0x1)                                       /**< (LCDC_OVR2CFG1) Color Lookup Table mode set to 2 bits per pixel  */
#define   LCDC_OVR2CFG1_CLUTMODE_CLUT_4BPP_Val _U_(0x2)                                       /**< (LCDC_OVR2CFG1) Color Lookup Table mode set to 4 bits per pixel  */
#define   LCDC_OVR2CFG1_CLUTMODE_CLUT_8BPP_Val _U_(0x3)                                       /**< (LCDC_OVR2CFG1) Color Lookup Table mode set to 8 bits per pixel  */
#define LCDC_OVR2CFG1_CLUTMODE_CLUT_1BPP    (LCDC_OVR2CFG1_CLUTMODE_CLUT_1BPP_Val << LCDC_OVR2CFG1_CLUTMODE_Pos)  /**< (LCDC_OVR2CFG1) Color Lookup Table mode set to 1 bit per pixel Position  */
#define LCDC_OVR2CFG1_CLUTMODE_CLUT_2BPP    (LCDC_OVR2CFG1_CLUTMODE_CLUT_2BPP_Val << LCDC_OVR2CFG1_CLUTMODE_Pos)  /**< (LCDC_OVR2CFG1) Color Lookup Table mode set to 2 bits per pixel Position  */
#define LCDC_OVR2CFG1_CLUTMODE_CLUT_4BPP    (LCDC_OVR2CFG1_CLUTMODE_CLUT_4BPP_Val << LCDC_OVR2CFG1_CLUTMODE_Pos)  /**< (LCDC_OVR2CFG1) Color Lookup Table mode set to 4 bits per pixel Position  */
#define LCDC_OVR2CFG1_CLUTMODE_CLUT_8BPP    (LCDC_OVR2CFG1_CLUTMODE_CLUT_8BPP_Val << LCDC_OVR2CFG1_CLUTMODE_Pos)  /**< (LCDC_OVR2CFG1) Color Lookup Table mode set to 8 bits per pixel Position  */
#define LCDC_OVR2CFG1_MASK                  _U_(0x3F1)                                     /**< \deprecated (LCDC_OVR2CFG1) Register MASK  (Use LCDC_OVR2CFG1_Msk instead)  */
#define LCDC_OVR2CFG1_Msk                   _U_(0x3F1)                                     /**< (LCDC_OVR2CFG1) Register Mask  */


/* -------- LCDC_OVR2CFG2 : (LCDC Offset: 0x274) (R/W 32) Overlay 2 Configuration Register 2 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XPOS:11;                   /**< bit:  0..10  Horizontal Window Position               */
    uint32_t :5;                        /**< bit: 11..15  Reserved */
    uint32_t YPOS:11;                   /**< bit: 16..26  Vertical Window Position                 */
    uint32_t :5;                        /**< bit: 27..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2CFG2_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2CFG2_OFFSET                (0x274)                                       /**<  (LCDC_OVR2CFG2) Overlay 2 Configuration Register 2  Offset */

#define LCDC_OVR2CFG2_XPOS_Pos              0                                              /**< (LCDC_OVR2CFG2) Horizontal Window Position Position */
#define LCDC_OVR2CFG2_XPOS_Msk              (_U_(0x7FF) << LCDC_OVR2CFG2_XPOS_Pos)         /**< (LCDC_OVR2CFG2) Horizontal Window Position Mask */
#define LCDC_OVR2CFG2_XPOS(value)           (LCDC_OVR2CFG2_XPOS_Msk & ((value) << LCDC_OVR2CFG2_XPOS_Pos))
#define LCDC_OVR2CFG2_YPOS_Pos              16                                             /**< (LCDC_OVR2CFG2) Vertical Window Position Position */
#define LCDC_OVR2CFG2_YPOS_Msk              (_U_(0x7FF) << LCDC_OVR2CFG2_YPOS_Pos)         /**< (LCDC_OVR2CFG2) Vertical Window Position Mask */
#define LCDC_OVR2CFG2_YPOS(value)           (LCDC_OVR2CFG2_YPOS_Msk & ((value) << LCDC_OVR2CFG2_YPOS_Pos))
#define LCDC_OVR2CFG2_MASK                  _U_(0x7FF07FF)                                 /**< \deprecated (LCDC_OVR2CFG2) Register MASK  (Use LCDC_OVR2CFG2_Msk instead)  */
#define LCDC_OVR2CFG2_Msk                   _U_(0x7FF07FF)                                 /**< (LCDC_OVR2CFG2) Register Mask  */


/* -------- LCDC_OVR2CFG3 : (LCDC Offset: 0x278) (R/W 32) Overlay 2 Configuration Register 3 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XSIZE:11;                  /**< bit:  0..10  Horizontal Window Size                   */
    uint32_t :5;                        /**< bit: 11..15  Reserved */
    uint32_t YSIZE:11;                  /**< bit: 16..26  Vertical Window Size                     */
    uint32_t :5;                        /**< bit: 27..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2CFG3_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2CFG3_OFFSET                (0x278)                                       /**<  (LCDC_OVR2CFG3) Overlay 2 Configuration Register 3  Offset */

#define LCDC_OVR2CFG3_XSIZE_Pos             0                                              /**< (LCDC_OVR2CFG3) Horizontal Window Size Position */
#define LCDC_OVR2CFG3_XSIZE_Msk             (_U_(0x7FF) << LCDC_OVR2CFG3_XSIZE_Pos)        /**< (LCDC_OVR2CFG3) Horizontal Window Size Mask */
#define LCDC_OVR2CFG3_XSIZE(value)          (LCDC_OVR2CFG3_XSIZE_Msk & ((value) << LCDC_OVR2CFG3_XSIZE_Pos))
#define LCDC_OVR2CFG3_YSIZE_Pos             16                                             /**< (LCDC_OVR2CFG3) Vertical Window Size Position */
#define LCDC_OVR2CFG3_YSIZE_Msk             (_U_(0x7FF) << LCDC_OVR2CFG3_YSIZE_Pos)        /**< (LCDC_OVR2CFG3) Vertical Window Size Mask */
#define LCDC_OVR2CFG3_YSIZE(value)          (LCDC_OVR2CFG3_YSIZE_Msk & ((value) << LCDC_OVR2CFG3_YSIZE_Pos))
#define LCDC_OVR2CFG3_MASK                  _U_(0x7FF07FF)                                 /**< \deprecated (LCDC_OVR2CFG3) Register MASK  (Use LCDC_OVR2CFG3_Msk instead)  */
#define LCDC_OVR2CFG3_Msk                   _U_(0x7FF07FF)                                 /**< (LCDC_OVR2CFG3) Register Mask  */


/* -------- LCDC_OVR2CFG4 : (LCDC Offset: 0x27c) (R/W 32) Overlay 2 Configuration Register 4 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XSTRIDE:32;                /**< bit:  0..31  Horizontal Stride                        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2CFG4_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2CFG4_OFFSET                (0x27C)                                       /**<  (LCDC_OVR2CFG4) Overlay 2 Configuration Register 4  Offset */

#define LCDC_OVR2CFG4_XSTRIDE_Pos           0                                              /**< (LCDC_OVR2CFG4) Horizontal Stride Position */
#define LCDC_OVR2CFG4_XSTRIDE_Msk           (_U_(0xFFFFFFFF) << LCDC_OVR2CFG4_XSTRIDE_Pos)  /**< (LCDC_OVR2CFG4) Horizontal Stride Mask */
#define LCDC_OVR2CFG4_XSTRIDE(value)        (LCDC_OVR2CFG4_XSTRIDE_Msk & ((value) << LCDC_OVR2CFG4_XSTRIDE_Pos))
#define LCDC_OVR2CFG4_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_OVR2CFG4) Register MASK  (Use LCDC_OVR2CFG4_Msk instead)  */
#define LCDC_OVR2CFG4_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_OVR2CFG4) Register Mask  */


/* -------- LCDC_OVR2CFG5 : (LCDC Offset: 0x280) (R/W 32) Overlay 2 Configuration Register 5 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PSTRIDE:32;                /**< bit:  0..31  Pixel Stride                             */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2CFG5_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2CFG5_OFFSET                (0x280)                                       /**<  (LCDC_OVR2CFG5) Overlay 2 Configuration Register 5  Offset */

#define LCDC_OVR2CFG5_PSTRIDE_Pos           0                                              /**< (LCDC_OVR2CFG5) Pixel Stride Position */
#define LCDC_OVR2CFG5_PSTRIDE_Msk           (_U_(0xFFFFFFFF) << LCDC_OVR2CFG5_PSTRIDE_Pos)  /**< (LCDC_OVR2CFG5) Pixel Stride Mask */
#define LCDC_OVR2CFG5_PSTRIDE(value)        (LCDC_OVR2CFG5_PSTRIDE_Msk & ((value) << LCDC_OVR2CFG5_PSTRIDE_Pos))
#define LCDC_OVR2CFG5_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_OVR2CFG5) Register MASK  (Use LCDC_OVR2CFG5_Msk instead)  */
#define LCDC_OVR2CFG5_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_OVR2CFG5) Register Mask  */


/* -------- LCDC_OVR2CFG6 : (LCDC Offset: 0x284) (R/W 32) Overlay 2 Configuration Register 6 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BDEF:8;                    /**< bit:   0..7  Blue Default                             */
    uint32_t GDEF:8;                    /**< bit:  8..15  Green Default                            */
    uint32_t RDEF:8;                    /**< bit: 16..23  Red Default                              */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2CFG6_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2CFG6_OFFSET                (0x284)                                       /**<  (LCDC_OVR2CFG6) Overlay 2 Configuration Register 6  Offset */

#define LCDC_OVR2CFG6_BDEF_Pos              0                                              /**< (LCDC_OVR2CFG6) Blue Default Position */
#define LCDC_OVR2CFG6_BDEF_Msk              (_U_(0xFF) << LCDC_OVR2CFG6_BDEF_Pos)          /**< (LCDC_OVR2CFG6) Blue Default Mask */
#define LCDC_OVR2CFG6_BDEF(value)           (LCDC_OVR2CFG6_BDEF_Msk & ((value) << LCDC_OVR2CFG6_BDEF_Pos))
#define LCDC_OVR2CFG6_GDEF_Pos              8                                              /**< (LCDC_OVR2CFG6) Green Default Position */
#define LCDC_OVR2CFG6_GDEF_Msk              (_U_(0xFF) << LCDC_OVR2CFG6_GDEF_Pos)          /**< (LCDC_OVR2CFG6) Green Default Mask */
#define LCDC_OVR2CFG6_GDEF(value)           (LCDC_OVR2CFG6_GDEF_Msk & ((value) << LCDC_OVR2CFG6_GDEF_Pos))
#define LCDC_OVR2CFG6_RDEF_Pos              16                                             /**< (LCDC_OVR2CFG6) Red Default Position */
#define LCDC_OVR2CFG6_RDEF_Msk              (_U_(0xFF) << LCDC_OVR2CFG6_RDEF_Pos)          /**< (LCDC_OVR2CFG6) Red Default Mask */
#define LCDC_OVR2CFG6_RDEF(value)           (LCDC_OVR2CFG6_RDEF_Msk & ((value) << LCDC_OVR2CFG6_RDEF_Pos))
#define LCDC_OVR2CFG6_MASK                  _U_(0xFFFFFF)                                  /**< \deprecated (LCDC_OVR2CFG6) Register MASK  (Use LCDC_OVR2CFG6_Msk instead)  */
#define LCDC_OVR2CFG6_Msk                   _U_(0xFFFFFF)                                  /**< (LCDC_OVR2CFG6) Register Mask  */


/* -------- LCDC_OVR2CFG7 : (LCDC Offset: 0x288) (R/W 32) Overlay 2 Configuration Register 7 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BKEY:8;                    /**< bit:   0..7  Blue Color Component Chroma Key          */
    uint32_t GKEY:8;                    /**< bit:  8..15  Green Color Component Chroma Key         */
    uint32_t RKEY:8;                    /**< bit: 16..23  Red Color Component Chroma Key           */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2CFG7_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2CFG7_OFFSET                (0x288)                                       /**<  (LCDC_OVR2CFG7) Overlay 2 Configuration Register 7  Offset */

#define LCDC_OVR2CFG7_BKEY_Pos              0                                              /**< (LCDC_OVR2CFG7) Blue Color Component Chroma Key Position */
#define LCDC_OVR2CFG7_BKEY_Msk              (_U_(0xFF) << LCDC_OVR2CFG7_BKEY_Pos)          /**< (LCDC_OVR2CFG7) Blue Color Component Chroma Key Mask */
#define LCDC_OVR2CFG7_BKEY(value)           (LCDC_OVR2CFG7_BKEY_Msk & ((value) << LCDC_OVR2CFG7_BKEY_Pos))
#define LCDC_OVR2CFG7_GKEY_Pos              8                                              /**< (LCDC_OVR2CFG7) Green Color Component Chroma Key Position */
#define LCDC_OVR2CFG7_GKEY_Msk              (_U_(0xFF) << LCDC_OVR2CFG7_GKEY_Pos)          /**< (LCDC_OVR2CFG7) Green Color Component Chroma Key Mask */
#define LCDC_OVR2CFG7_GKEY(value)           (LCDC_OVR2CFG7_GKEY_Msk & ((value) << LCDC_OVR2CFG7_GKEY_Pos))
#define LCDC_OVR2CFG7_RKEY_Pos              16                                             /**< (LCDC_OVR2CFG7) Red Color Component Chroma Key Position */
#define LCDC_OVR2CFG7_RKEY_Msk              (_U_(0xFF) << LCDC_OVR2CFG7_RKEY_Pos)          /**< (LCDC_OVR2CFG7) Red Color Component Chroma Key Mask */
#define LCDC_OVR2CFG7_RKEY(value)           (LCDC_OVR2CFG7_RKEY_Msk & ((value) << LCDC_OVR2CFG7_RKEY_Pos))
#define LCDC_OVR2CFG7_MASK                  _U_(0xFFFFFF)                                  /**< \deprecated (LCDC_OVR2CFG7) Register MASK  (Use LCDC_OVR2CFG7_Msk instead)  */
#define LCDC_OVR2CFG7_Msk                   _U_(0xFFFFFF)                                  /**< (LCDC_OVR2CFG7) Register Mask  */


/* -------- LCDC_OVR2CFG8 : (LCDC Offset: 0x28c) (R/W 32) Overlay 2 Configuration Register 8 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BMASK:8;                   /**< bit:   0..7  Blue Color Component Chroma Key Mask     */
    uint32_t GMASK:8;                   /**< bit:  8..15  Green Color Component Chroma Key Mask    */
    uint32_t RMASK:8;                   /**< bit: 16..23  Red Color Component Chroma Key Mask      */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2CFG8_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2CFG8_OFFSET                (0x28C)                                       /**<  (LCDC_OVR2CFG8) Overlay 2 Configuration Register 8  Offset */

#define LCDC_OVR2CFG8_BMASK_Pos             0                                              /**< (LCDC_OVR2CFG8) Blue Color Component Chroma Key Mask Position */
#define LCDC_OVR2CFG8_BMASK_Msk             (_U_(0xFF) << LCDC_OVR2CFG8_BMASK_Pos)         /**< (LCDC_OVR2CFG8) Blue Color Component Chroma Key Mask Mask */
#define LCDC_OVR2CFG8_BMASK(value)          (LCDC_OVR2CFG8_BMASK_Msk & ((value) << LCDC_OVR2CFG8_BMASK_Pos))
#define LCDC_OVR2CFG8_GMASK_Pos             8                                              /**< (LCDC_OVR2CFG8) Green Color Component Chroma Key Mask Position */
#define LCDC_OVR2CFG8_GMASK_Msk             (_U_(0xFF) << LCDC_OVR2CFG8_GMASK_Pos)         /**< (LCDC_OVR2CFG8) Green Color Component Chroma Key Mask Mask */
#define LCDC_OVR2CFG8_GMASK(value)          (LCDC_OVR2CFG8_GMASK_Msk & ((value) << LCDC_OVR2CFG8_GMASK_Pos))
#define LCDC_OVR2CFG8_RMASK_Pos             16                                             /**< (LCDC_OVR2CFG8) Red Color Component Chroma Key Mask Position */
#define LCDC_OVR2CFG8_RMASK_Msk             (_U_(0xFF) << LCDC_OVR2CFG8_RMASK_Pos)         /**< (LCDC_OVR2CFG8) Red Color Component Chroma Key Mask Mask */
#define LCDC_OVR2CFG8_RMASK(value)          (LCDC_OVR2CFG8_RMASK_Msk & ((value) << LCDC_OVR2CFG8_RMASK_Pos))
#define LCDC_OVR2CFG8_Msk                   _U_(0xFFFFFF)                                  /**< (LCDC_OVR2CFG8) Register Mask  */


/* -------- LCDC_OVR2CFG9 : (LCDC Offset: 0x290) (R/W 32) Overlay 2 Configuration Register 9 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CRKEY:1;                   /**< bit:      0  Blender Chroma Key Enable                */
    uint32_t INV:1;                     /**< bit:      1  Blender Inverted Blender Output Enable   */
    uint32_t ITER2BL:1;                 /**< bit:      2  Blender Iterated Color Enable            */
    uint32_t ITER:1;                    /**< bit:      3  Blender Use Iterated Color               */
    uint32_t REVALPHA:1;                /**< bit:      4  Blender Reverse Alpha                    */
    uint32_t GAEN:1;                    /**< bit:      5  Blender Global Alpha Enable              */
    uint32_t LAEN:1;                    /**< bit:      6  Blender Local Alpha Enable               */
    uint32_t OVR:1;                     /**< bit:      7  Blender Overlay Layer Enable             */
    uint32_t DMA:1;                     /**< bit:      8  Blender DMA Layer Enable                 */
    uint32_t REP:1;                     /**< bit:      9  Use Replication logic to expand RGB color to 24 bits */
    uint32_t DSTKEY:1;                  /**< bit:     10  Destination Chroma Keying                */
    uint32_t :5;                        /**< bit: 11..15  Reserved */
    uint32_t GA:8;                      /**< bit: 16..23  Blender Global Alpha                     */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2CFG9_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2CFG9_OFFSET                (0x290)                                       /**<  (LCDC_OVR2CFG9) Overlay 2 Configuration Register 9  Offset */

#define LCDC_OVR2CFG9_CRKEY_Pos             0                                              /**< (LCDC_OVR2CFG9) Blender Chroma Key Enable Position */
#define LCDC_OVR2CFG9_CRKEY_Msk             (_U_(0x1) << LCDC_OVR2CFG9_CRKEY_Pos)          /**< (LCDC_OVR2CFG9) Blender Chroma Key Enable Mask */
#define LCDC_OVR2CFG9_CRKEY                 LCDC_OVR2CFG9_CRKEY_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CFG9_CRKEY_Msk instead */
#define LCDC_OVR2CFG9_INV_Pos               1                                              /**< (LCDC_OVR2CFG9) Blender Inverted Blender Output Enable Position */
#define LCDC_OVR2CFG9_INV_Msk               (_U_(0x1) << LCDC_OVR2CFG9_INV_Pos)            /**< (LCDC_OVR2CFG9) Blender Inverted Blender Output Enable Mask */
#define LCDC_OVR2CFG9_INV                   LCDC_OVR2CFG9_INV_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CFG9_INV_Msk instead */
#define LCDC_OVR2CFG9_ITER2BL_Pos           2                                              /**< (LCDC_OVR2CFG9) Blender Iterated Color Enable Position */
#define LCDC_OVR2CFG9_ITER2BL_Msk           (_U_(0x1) << LCDC_OVR2CFG9_ITER2BL_Pos)        /**< (LCDC_OVR2CFG9) Blender Iterated Color Enable Mask */
#define LCDC_OVR2CFG9_ITER2BL               LCDC_OVR2CFG9_ITER2BL_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CFG9_ITER2BL_Msk instead */
#define LCDC_OVR2CFG9_ITER_Pos              3                                              /**< (LCDC_OVR2CFG9) Blender Use Iterated Color Position */
#define LCDC_OVR2CFG9_ITER_Msk              (_U_(0x1) << LCDC_OVR2CFG9_ITER_Pos)           /**< (LCDC_OVR2CFG9) Blender Use Iterated Color Mask */
#define LCDC_OVR2CFG9_ITER                  LCDC_OVR2CFG9_ITER_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CFG9_ITER_Msk instead */
#define LCDC_OVR2CFG9_REVALPHA_Pos          4                                              /**< (LCDC_OVR2CFG9) Blender Reverse Alpha Position */
#define LCDC_OVR2CFG9_REVALPHA_Msk          (_U_(0x1) << LCDC_OVR2CFG9_REVALPHA_Pos)       /**< (LCDC_OVR2CFG9) Blender Reverse Alpha Mask */
#define LCDC_OVR2CFG9_REVALPHA              LCDC_OVR2CFG9_REVALPHA_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CFG9_REVALPHA_Msk instead */
#define LCDC_OVR2CFG9_GAEN_Pos              5                                              /**< (LCDC_OVR2CFG9) Blender Global Alpha Enable Position */
#define LCDC_OVR2CFG9_GAEN_Msk              (_U_(0x1) << LCDC_OVR2CFG9_GAEN_Pos)           /**< (LCDC_OVR2CFG9) Blender Global Alpha Enable Mask */
#define LCDC_OVR2CFG9_GAEN                  LCDC_OVR2CFG9_GAEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CFG9_GAEN_Msk instead */
#define LCDC_OVR2CFG9_LAEN_Pos              6                                              /**< (LCDC_OVR2CFG9) Blender Local Alpha Enable Position */
#define LCDC_OVR2CFG9_LAEN_Msk              (_U_(0x1) << LCDC_OVR2CFG9_LAEN_Pos)           /**< (LCDC_OVR2CFG9) Blender Local Alpha Enable Mask */
#define LCDC_OVR2CFG9_LAEN                  LCDC_OVR2CFG9_LAEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CFG9_LAEN_Msk instead */
#define LCDC_OVR2CFG9_OVR_Pos               7                                              /**< (LCDC_OVR2CFG9) Blender Overlay Layer Enable Position */
#define LCDC_OVR2CFG9_OVR_Msk               (_U_(0x1) << LCDC_OVR2CFG9_OVR_Pos)            /**< (LCDC_OVR2CFG9) Blender Overlay Layer Enable Mask */
#define LCDC_OVR2CFG9_OVR                   LCDC_OVR2CFG9_OVR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CFG9_OVR_Msk instead */
#define LCDC_OVR2CFG9_DMA_Pos               8                                              /**< (LCDC_OVR2CFG9) Blender DMA Layer Enable Position */
#define LCDC_OVR2CFG9_DMA_Msk               (_U_(0x1) << LCDC_OVR2CFG9_DMA_Pos)            /**< (LCDC_OVR2CFG9) Blender DMA Layer Enable Mask */
#define LCDC_OVR2CFG9_DMA                   LCDC_OVR2CFG9_DMA_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CFG9_DMA_Msk instead */
#define LCDC_OVR2CFG9_REP_Pos               9                                              /**< (LCDC_OVR2CFG9) Use Replication logic to expand RGB color to 24 bits Position */
#define LCDC_OVR2CFG9_REP_Msk               (_U_(0x1) << LCDC_OVR2CFG9_REP_Pos)            /**< (LCDC_OVR2CFG9) Use Replication logic to expand RGB color to 24 bits Mask */
#define LCDC_OVR2CFG9_REP                   LCDC_OVR2CFG9_REP_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CFG9_REP_Msk instead */
#define LCDC_OVR2CFG9_DSTKEY_Pos            10                                             /**< (LCDC_OVR2CFG9) Destination Chroma Keying Position */
#define LCDC_OVR2CFG9_DSTKEY_Msk            (_U_(0x1) << LCDC_OVR2CFG9_DSTKEY_Pos)         /**< (LCDC_OVR2CFG9) Destination Chroma Keying Mask */
#define LCDC_OVR2CFG9_DSTKEY                LCDC_OVR2CFG9_DSTKEY_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_OVR2CFG9_DSTKEY_Msk instead */
#define LCDC_OVR2CFG9_GA_Pos                16                                             /**< (LCDC_OVR2CFG9) Blender Global Alpha Position */
#define LCDC_OVR2CFG9_GA_Msk                (_U_(0xFF) << LCDC_OVR2CFG9_GA_Pos)            /**< (LCDC_OVR2CFG9) Blender Global Alpha Mask */
#define LCDC_OVR2CFG9_GA(value)             (LCDC_OVR2CFG9_GA_Msk & ((value) << LCDC_OVR2CFG9_GA_Pos))
#define LCDC_OVR2CFG9_MASK                  _U_(0xFF07FF)                                  /**< \deprecated (LCDC_OVR2CFG9) Register MASK  (Use LCDC_OVR2CFG9_Msk instead)  */
#define LCDC_OVR2CFG9_Msk                   _U_(0xFF07FF)                                  /**< (LCDC_OVR2CFG9) Register Mask  */


/* -------- LCDC_HEOCHER : (LCDC Offset: 0x340) (/W 32) High-End Overlay Channel Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHEN:1;                    /**< bit:      0  Channel Enable                           */
    uint32_t UPDATEEN:1;                /**< bit:      1  Update Overlay Attributes Enable         */
    uint32_t A2QEN:1;                   /**< bit:      2  Add To Queue Enable                      */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCHER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCHER_OFFSET                 (0x340)                                       /**<  (LCDC_HEOCHER) High-End Overlay Channel Enable Register  Offset */

#define LCDC_HEOCHER_CHEN_Pos               0                                              /**< (LCDC_HEOCHER) Channel Enable Position */
#define LCDC_HEOCHER_CHEN_Msk               (_U_(0x1) << LCDC_HEOCHER_CHEN_Pos)            /**< (LCDC_HEOCHER) Channel Enable Mask */
#define LCDC_HEOCHER_CHEN                   LCDC_HEOCHER_CHEN_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCHER_CHEN_Msk instead */
#define LCDC_HEOCHER_UPDATEEN_Pos           1                                              /**< (LCDC_HEOCHER) Update Overlay Attributes Enable Position */
#define LCDC_HEOCHER_UPDATEEN_Msk           (_U_(0x1) << LCDC_HEOCHER_UPDATEEN_Pos)        /**< (LCDC_HEOCHER) Update Overlay Attributes Enable Mask */
#define LCDC_HEOCHER_UPDATEEN               LCDC_HEOCHER_UPDATEEN_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCHER_UPDATEEN_Msk instead */
#define LCDC_HEOCHER_A2QEN_Pos              2                                              /**< (LCDC_HEOCHER) Add To Queue Enable Position */
#define LCDC_HEOCHER_A2QEN_Msk              (_U_(0x1) << LCDC_HEOCHER_A2QEN_Pos)           /**< (LCDC_HEOCHER) Add To Queue Enable Mask */
#define LCDC_HEOCHER_A2QEN                  LCDC_HEOCHER_A2QEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCHER_A2QEN_Msk instead */
#define LCDC_HEOCHER_MASK                   _U_(0x07)                                      /**< \deprecated (LCDC_HEOCHER) Register MASK  (Use LCDC_HEOCHER_Msk instead)  */
#define LCDC_HEOCHER_Msk                    _U_(0x07)                                      /**< (LCDC_HEOCHER) Register Mask  */


/* -------- LCDC_HEOCHDR : (LCDC Offset: 0x344) (/W 32) High-End Overlay Channel Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHDIS:1;                   /**< bit:      0  Channel Disable                          */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t CHRST:1;                   /**< bit:      8  Channel Reset                            */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCHDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCHDR_OFFSET                 (0x344)                                       /**<  (LCDC_HEOCHDR) High-End Overlay Channel Disable Register  Offset */

#define LCDC_HEOCHDR_CHDIS_Pos              0                                              /**< (LCDC_HEOCHDR) Channel Disable Position */
#define LCDC_HEOCHDR_CHDIS_Msk              (_U_(0x1) << LCDC_HEOCHDR_CHDIS_Pos)           /**< (LCDC_HEOCHDR) Channel Disable Mask */
#define LCDC_HEOCHDR_CHDIS                  LCDC_HEOCHDR_CHDIS_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCHDR_CHDIS_Msk instead */
#define LCDC_HEOCHDR_CHRST_Pos              8                                              /**< (LCDC_HEOCHDR) Channel Reset Position */
#define LCDC_HEOCHDR_CHRST_Msk              (_U_(0x1) << LCDC_HEOCHDR_CHRST_Pos)           /**< (LCDC_HEOCHDR) Channel Reset Mask */
#define LCDC_HEOCHDR_CHRST                  LCDC_HEOCHDR_CHRST_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCHDR_CHRST_Msk instead */
#define LCDC_HEOCHDR_MASK                   _U_(0x101)                                     /**< \deprecated (LCDC_HEOCHDR) Register MASK  (Use LCDC_HEOCHDR_Msk instead)  */
#define LCDC_HEOCHDR_Msk                    _U_(0x101)                                     /**< (LCDC_HEOCHDR) Register Mask  */


/* -------- LCDC_HEOCHSR : (LCDC Offset: 0x348) (R/ 32) High-End Overlay Channel Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHSR:1;                    /**< bit:      0  Channel Status                           */
    uint32_t UPDATESR:1;                /**< bit:      1  Update Overlay Attributes In Progress Status */
    uint32_t A2QSR:1;                   /**< bit:      2  Add To Queue Status                      */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCHSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCHSR_OFFSET                 (0x348)                                       /**<  (LCDC_HEOCHSR) High-End Overlay Channel Status Register  Offset */

#define LCDC_HEOCHSR_CHSR_Pos               0                                              /**< (LCDC_HEOCHSR) Channel Status Position */
#define LCDC_HEOCHSR_CHSR_Msk               (_U_(0x1) << LCDC_HEOCHSR_CHSR_Pos)            /**< (LCDC_HEOCHSR) Channel Status Mask */
#define LCDC_HEOCHSR_CHSR                   LCDC_HEOCHSR_CHSR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCHSR_CHSR_Msk instead */
#define LCDC_HEOCHSR_UPDATESR_Pos           1                                              /**< (LCDC_HEOCHSR) Update Overlay Attributes In Progress Status Position */
#define LCDC_HEOCHSR_UPDATESR_Msk           (_U_(0x1) << LCDC_HEOCHSR_UPDATESR_Pos)        /**< (LCDC_HEOCHSR) Update Overlay Attributes In Progress Status Mask */
#define LCDC_HEOCHSR_UPDATESR               LCDC_HEOCHSR_UPDATESR_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCHSR_UPDATESR_Msk instead */
#define LCDC_HEOCHSR_A2QSR_Pos              2                                              /**< (LCDC_HEOCHSR) Add To Queue Status Position */
#define LCDC_HEOCHSR_A2QSR_Msk              (_U_(0x1) << LCDC_HEOCHSR_A2QSR_Pos)           /**< (LCDC_HEOCHSR) Add To Queue Status Mask */
#define LCDC_HEOCHSR_A2QSR                  LCDC_HEOCHSR_A2QSR_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCHSR_A2QSR_Msk instead */
#define LCDC_HEOCHSR_MASK                   _U_(0x07)                                      /**< \deprecated (LCDC_HEOCHSR) Register MASK  (Use LCDC_HEOCHSR_Msk instead)  */
#define LCDC_HEOCHSR_Msk                    _U_(0x07)                                      /**< (LCDC_HEOCHSR) Register Mask  */


/* -------- LCDC_HEOIER : (LCDC Offset: 0x34c) (/W 32) High-End Overlay Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DMA:1;                     /**< bit:      2  End of DMA Transfer Interrupt Enable     */
    uint32_t DSCR:1;                    /**< bit:      3  Descriptor Loaded Interrupt Enable       */
    uint32_t ADD:1;                     /**< bit:      4  Head Descriptor Loaded Interrupt Enable  */
    uint32_t DONE:1;                    /**< bit:      5  End of List Interrupt Enable             */
    uint32_t OVR:1;                     /**< bit:      6  Overflow Interrupt Enable                */
    uint32_t :3;                        /**< bit:   7..9  Reserved */
    uint32_t UDMA:1;                    /**< bit:     10  End of DMA Transfer for U or UV Chrominance Interrupt Enable */
    uint32_t UDSCR:1;                   /**< bit:     11  Descriptor Loaded for U or UV Chrominance Interrupt Enable */
    uint32_t UADD:1;                    /**< bit:     12  Head Descriptor Loaded for U or UV Chrominance Interrupt Enable */
    uint32_t UDONE:1;                   /**< bit:     13  End of List for U or UV Chrominance Interrupt Enable */
    uint32_t UOVR:1;                    /**< bit:     14  Overflow for U or UV Chrominance Interrupt Enable */
    uint32_t :3;                        /**< bit: 15..17  Reserved */
    uint32_t VDMA:1;                    /**< bit:     18  End of DMA for V Chrominance Transfer Interrupt Enable */
    uint32_t VDSCR:1;                   /**< bit:     19  Descriptor Loaded for V Chrominance Interrupt Enable */
    uint32_t VADD:1;                    /**< bit:     20  Head Descriptor Loaded for V Chrominance Interrupt Enable */
    uint32_t VDONE:1;                   /**< bit:     21  End of List for V Chrominance Interrupt Enable */
    uint32_t VOVR:1;                    /**< bit:     22  Overflow for V Chrominance Interrupt Enable */
    uint32_t :9;                        /**< bit: 23..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOIER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOIER_OFFSET                  (0x34C)                                       /**<  (LCDC_HEOIER) High-End Overlay Interrupt Enable Register  Offset */

#define LCDC_HEOIER_DMA_Pos                 2                                              /**< (LCDC_HEOIER) End of DMA Transfer Interrupt Enable Position */
#define LCDC_HEOIER_DMA_Msk                 (_U_(0x1) << LCDC_HEOIER_DMA_Pos)              /**< (LCDC_HEOIER) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_HEOIER_DMA                     LCDC_HEOIER_DMA_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIER_DMA_Msk instead */
#define LCDC_HEOIER_DSCR_Pos                3                                              /**< (LCDC_HEOIER) Descriptor Loaded Interrupt Enable Position */
#define LCDC_HEOIER_DSCR_Msk                (_U_(0x1) << LCDC_HEOIER_DSCR_Pos)             /**< (LCDC_HEOIER) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_HEOIER_DSCR                    LCDC_HEOIER_DSCR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIER_DSCR_Msk instead */
#define LCDC_HEOIER_ADD_Pos                 4                                              /**< (LCDC_HEOIER) Head Descriptor Loaded Interrupt Enable Position */
#define LCDC_HEOIER_ADD_Msk                 (_U_(0x1) << LCDC_HEOIER_ADD_Pos)              /**< (LCDC_HEOIER) Head Descriptor Loaded Interrupt Enable Mask */
#define LCDC_HEOIER_ADD                     LCDC_HEOIER_ADD_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIER_ADD_Msk instead */
#define LCDC_HEOIER_DONE_Pos                5                                              /**< (LCDC_HEOIER) End of List Interrupt Enable Position */
#define LCDC_HEOIER_DONE_Msk                (_U_(0x1) << LCDC_HEOIER_DONE_Pos)             /**< (LCDC_HEOIER) End of List Interrupt Enable Mask */
#define LCDC_HEOIER_DONE                    LCDC_HEOIER_DONE_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIER_DONE_Msk instead */
#define LCDC_HEOIER_OVR_Pos                 6                                              /**< (LCDC_HEOIER) Overflow Interrupt Enable Position */
#define LCDC_HEOIER_OVR_Msk                 (_U_(0x1) << LCDC_HEOIER_OVR_Pos)              /**< (LCDC_HEOIER) Overflow Interrupt Enable Mask */
#define LCDC_HEOIER_OVR                     LCDC_HEOIER_OVR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIER_OVR_Msk instead */
#define LCDC_HEOIER_UDMA_Pos                10                                             /**< (LCDC_HEOIER) End of DMA Transfer for U or UV Chrominance Interrupt Enable Position */
#define LCDC_HEOIER_UDMA_Msk                (_U_(0x1) << LCDC_HEOIER_UDMA_Pos)             /**< (LCDC_HEOIER) End of DMA Transfer for U or UV Chrominance Interrupt Enable Mask */
#define LCDC_HEOIER_UDMA                    LCDC_HEOIER_UDMA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIER_UDMA_Msk instead */
#define LCDC_HEOIER_UDSCR_Pos               11                                             /**< (LCDC_HEOIER) Descriptor Loaded for U or UV Chrominance Interrupt Enable Position */
#define LCDC_HEOIER_UDSCR_Msk               (_U_(0x1) << LCDC_HEOIER_UDSCR_Pos)            /**< (LCDC_HEOIER) Descriptor Loaded for U or UV Chrominance Interrupt Enable Mask */
#define LCDC_HEOIER_UDSCR                   LCDC_HEOIER_UDSCR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIER_UDSCR_Msk instead */
#define LCDC_HEOIER_UADD_Pos                12                                             /**< (LCDC_HEOIER) Head Descriptor Loaded for U or UV Chrominance Interrupt Enable Position */
#define LCDC_HEOIER_UADD_Msk                (_U_(0x1) << LCDC_HEOIER_UADD_Pos)             /**< (LCDC_HEOIER) Head Descriptor Loaded for U or UV Chrominance Interrupt Enable Mask */
#define LCDC_HEOIER_UADD                    LCDC_HEOIER_UADD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIER_UADD_Msk instead */
#define LCDC_HEOIER_UDONE_Pos               13                                             /**< (LCDC_HEOIER) End of List for U or UV Chrominance Interrupt Enable Position */
#define LCDC_HEOIER_UDONE_Msk               (_U_(0x1) << LCDC_HEOIER_UDONE_Pos)            /**< (LCDC_HEOIER) End of List for U or UV Chrominance Interrupt Enable Mask */
#define LCDC_HEOIER_UDONE                   LCDC_HEOIER_UDONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIER_UDONE_Msk instead */
#define LCDC_HEOIER_UOVR_Pos                14                                             /**< (LCDC_HEOIER) Overflow for U or UV Chrominance Interrupt Enable Position */
#define LCDC_HEOIER_UOVR_Msk                (_U_(0x1) << LCDC_HEOIER_UOVR_Pos)             /**< (LCDC_HEOIER) Overflow for U or UV Chrominance Interrupt Enable Mask */
#define LCDC_HEOIER_UOVR                    LCDC_HEOIER_UOVR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIER_UOVR_Msk instead */
#define LCDC_HEOIER_VDMA_Pos                18                                             /**< (LCDC_HEOIER) End of DMA for V Chrominance Transfer Interrupt Enable Position */
#define LCDC_HEOIER_VDMA_Msk                (_U_(0x1) << LCDC_HEOIER_VDMA_Pos)             /**< (LCDC_HEOIER) End of DMA for V Chrominance Transfer Interrupt Enable Mask */
#define LCDC_HEOIER_VDMA                    LCDC_HEOIER_VDMA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIER_VDMA_Msk instead */
#define LCDC_HEOIER_VDSCR_Pos               19                                             /**< (LCDC_HEOIER) Descriptor Loaded for V Chrominance Interrupt Enable Position */
#define LCDC_HEOIER_VDSCR_Msk               (_U_(0x1) << LCDC_HEOIER_VDSCR_Pos)            /**< (LCDC_HEOIER) Descriptor Loaded for V Chrominance Interrupt Enable Mask */
#define LCDC_HEOIER_VDSCR                   LCDC_HEOIER_VDSCR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIER_VDSCR_Msk instead */
#define LCDC_HEOIER_VADD_Pos                20                                             /**< (LCDC_HEOIER) Head Descriptor Loaded for V Chrominance Interrupt Enable Position */
#define LCDC_HEOIER_VADD_Msk                (_U_(0x1) << LCDC_HEOIER_VADD_Pos)             /**< (LCDC_HEOIER) Head Descriptor Loaded for V Chrominance Interrupt Enable Mask */
#define LCDC_HEOIER_VADD                    LCDC_HEOIER_VADD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIER_VADD_Msk instead */
#define LCDC_HEOIER_VDONE_Pos               21                                             /**< (LCDC_HEOIER) End of List for V Chrominance Interrupt Enable Position */
#define LCDC_HEOIER_VDONE_Msk               (_U_(0x1) << LCDC_HEOIER_VDONE_Pos)            /**< (LCDC_HEOIER) End of List for V Chrominance Interrupt Enable Mask */
#define LCDC_HEOIER_VDONE                   LCDC_HEOIER_VDONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIER_VDONE_Msk instead */
#define LCDC_HEOIER_VOVR_Pos                22                                             /**< (LCDC_HEOIER) Overflow for V Chrominance Interrupt Enable Position */
#define LCDC_HEOIER_VOVR_Msk                (_U_(0x1) << LCDC_HEOIER_VOVR_Pos)             /**< (LCDC_HEOIER) Overflow for V Chrominance Interrupt Enable Mask */
#define LCDC_HEOIER_VOVR                    LCDC_HEOIER_VOVR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIER_VOVR_Msk instead */
#define LCDC_HEOIER_MASK                    _U_(0x7C7C7C)                                  /**< \deprecated (LCDC_HEOIER) Register MASK  (Use LCDC_HEOIER_Msk instead)  */
#define LCDC_HEOIER_Msk                     _U_(0x7C7C7C)                                  /**< (LCDC_HEOIER) Register Mask  */


/* -------- LCDC_HEOIDR : (LCDC Offset: 0x350) (/W 32) High-End Overlay Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DMA:1;                     /**< bit:      2  End of DMA Transfer Interrupt Disable    */
    uint32_t DSCR:1;                    /**< bit:      3  Descriptor Loaded Interrupt Disable      */
    uint32_t ADD:1;                     /**< bit:      4  Head Descriptor Loaded Interrupt Disable */
    uint32_t DONE:1;                    /**< bit:      5  End of List Interrupt Disable            */
    uint32_t OVR:1;                     /**< bit:      6  Overflow Interrupt Disable               */
    uint32_t :3;                        /**< bit:   7..9  Reserved */
    uint32_t UDMA:1;                    /**< bit:     10  End of DMA Transfer for U or UV Chrominance Component Interrupt Disable */
    uint32_t UDSCR:1;                   /**< bit:     11  Descriptor Loaded for U or UV Chrominance Component Interrupt Disable */
    uint32_t UADD:1;                    /**< bit:     12  Head Descriptor Loaded for U or UV Chrominance Component Interrupt Disable */
    uint32_t UDONE:1;                   /**< bit:     13  End of List Interrupt for U or UV Chrominance Component Disable */
    uint32_t UOVR:1;                    /**< bit:     14  Overflow Interrupt for U or UV Chrominance Component Disable */
    uint32_t :3;                        /**< bit: 15..17  Reserved */
    uint32_t VDMA:1;                    /**< bit:     18  End of DMA Transfer for V Chrominance Component Interrupt Disable */
    uint32_t VDSCR:1;                   /**< bit:     19  Descriptor Loaded for V Chrominance Component Interrupt Disable */
    uint32_t VADD:1;                    /**< bit:     20  Head Descriptor Loaded for V Chrominance Component Interrupt Disable */
    uint32_t VDONE:1;                   /**< bit:     21  End of List for V Chrominance Component Interrupt Disable */
    uint32_t VOVR:1;                    /**< bit:     22  Overflow for V Chrominance Component Interrupt Disable */
    uint32_t :9;                        /**< bit: 23..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOIDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOIDR_OFFSET                  (0x350)                                       /**<  (LCDC_HEOIDR) High-End Overlay Interrupt Disable Register  Offset */

#define LCDC_HEOIDR_DMA_Pos                 2                                              /**< (LCDC_HEOIDR) End of DMA Transfer Interrupt Disable Position */
#define LCDC_HEOIDR_DMA_Msk                 (_U_(0x1) << LCDC_HEOIDR_DMA_Pos)              /**< (LCDC_HEOIDR) End of DMA Transfer Interrupt Disable Mask */
#define LCDC_HEOIDR_DMA                     LCDC_HEOIDR_DMA_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIDR_DMA_Msk instead */
#define LCDC_HEOIDR_DSCR_Pos                3                                              /**< (LCDC_HEOIDR) Descriptor Loaded Interrupt Disable Position */
#define LCDC_HEOIDR_DSCR_Msk                (_U_(0x1) << LCDC_HEOIDR_DSCR_Pos)             /**< (LCDC_HEOIDR) Descriptor Loaded Interrupt Disable Mask */
#define LCDC_HEOIDR_DSCR                    LCDC_HEOIDR_DSCR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIDR_DSCR_Msk instead */
#define LCDC_HEOIDR_ADD_Pos                 4                                              /**< (LCDC_HEOIDR) Head Descriptor Loaded Interrupt Disable Position */
#define LCDC_HEOIDR_ADD_Msk                 (_U_(0x1) << LCDC_HEOIDR_ADD_Pos)              /**< (LCDC_HEOIDR) Head Descriptor Loaded Interrupt Disable Mask */
#define LCDC_HEOIDR_ADD                     LCDC_HEOIDR_ADD_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIDR_ADD_Msk instead */
#define LCDC_HEOIDR_DONE_Pos                5                                              /**< (LCDC_HEOIDR) End of List Interrupt Disable Position */
#define LCDC_HEOIDR_DONE_Msk                (_U_(0x1) << LCDC_HEOIDR_DONE_Pos)             /**< (LCDC_HEOIDR) End of List Interrupt Disable Mask */
#define LCDC_HEOIDR_DONE                    LCDC_HEOIDR_DONE_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIDR_DONE_Msk instead */
#define LCDC_HEOIDR_OVR_Pos                 6                                              /**< (LCDC_HEOIDR) Overflow Interrupt Disable Position */
#define LCDC_HEOIDR_OVR_Msk                 (_U_(0x1) << LCDC_HEOIDR_OVR_Pos)              /**< (LCDC_HEOIDR) Overflow Interrupt Disable Mask */
#define LCDC_HEOIDR_OVR                     LCDC_HEOIDR_OVR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIDR_OVR_Msk instead */
#define LCDC_HEOIDR_UDMA_Pos                10                                             /**< (LCDC_HEOIDR) End of DMA Transfer for U or UV Chrominance Component Interrupt Disable Position */
#define LCDC_HEOIDR_UDMA_Msk                (_U_(0x1) << LCDC_HEOIDR_UDMA_Pos)             /**< (LCDC_HEOIDR) End of DMA Transfer for U or UV Chrominance Component Interrupt Disable Mask */
#define LCDC_HEOIDR_UDMA                    LCDC_HEOIDR_UDMA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIDR_UDMA_Msk instead */
#define LCDC_HEOIDR_UDSCR_Pos               11                                             /**< (LCDC_HEOIDR) Descriptor Loaded for U or UV Chrominance Component Interrupt Disable Position */
#define LCDC_HEOIDR_UDSCR_Msk               (_U_(0x1) << LCDC_HEOIDR_UDSCR_Pos)            /**< (LCDC_HEOIDR) Descriptor Loaded for U or UV Chrominance Component Interrupt Disable Mask */
#define LCDC_HEOIDR_UDSCR                   LCDC_HEOIDR_UDSCR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIDR_UDSCR_Msk instead */
#define LCDC_HEOIDR_UADD_Pos                12                                             /**< (LCDC_HEOIDR) Head Descriptor Loaded for U or UV Chrominance Component Interrupt Disable Position */
#define LCDC_HEOIDR_UADD_Msk                (_U_(0x1) << LCDC_HEOIDR_UADD_Pos)             /**< (LCDC_HEOIDR) Head Descriptor Loaded for U or UV Chrominance Component Interrupt Disable Mask */
#define LCDC_HEOIDR_UADD                    LCDC_HEOIDR_UADD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIDR_UADD_Msk instead */
#define LCDC_HEOIDR_UDONE_Pos               13                                             /**< (LCDC_HEOIDR) End of List Interrupt for U or UV Chrominance Component Disable Position */
#define LCDC_HEOIDR_UDONE_Msk               (_U_(0x1) << LCDC_HEOIDR_UDONE_Pos)            /**< (LCDC_HEOIDR) End of List Interrupt for U or UV Chrominance Component Disable Mask */
#define LCDC_HEOIDR_UDONE                   LCDC_HEOIDR_UDONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIDR_UDONE_Msk instead */
#define LCDC_HEOIDR_UOVR_Pos                14                                             /**< (LCDC_HEOIDR) Overflow Interrupt for U or UV Chrominance Component Disable Position */
#define LCDC_HEOIDR_UOVR_Msk                (_U_(0x1) << LCDC_HEOIDR_UOVR_Pos)             /**< (LCDC_HEOIDR) Overflow Interrupt for U or UV Chrominance Component Disable Mask */
#define LCDC_HEOIDR_UOVR                    LCDC_HEOIDR_UOVR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIDR_UOVR_Msk instead */
#define LCDC_HEOIDR_VDMA_Pos                18                                             /**< (LCDC_HEOIDR) End of DMA Transfer for V Chrominance Component Interrupt Disable Position */
#define LCDC_HEOIDR_VDMA_Msk                (_U_(0x1) << LCDC_HEOIDR_VDMA_Pos)             /**< (LCDC_HEOIDR) End of DMA Transfer for V Chrominance Component Interrupt Disable Mask */
#define LCDC_HEOIDR_VDMA                    LCDC_HEOIDR_VDMA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIDR_VDMA_Msk instead */
#define LCDC_HEOIDR_VDSCR_Pos               19                                             /**< (LCDC_HEOIDR) Descriptor Loaded for V Chrominance Component Interrupt Disable Position */
#define LCDC_HEOIDR_VDSCR_Msk               (_U_(0x1) << LCDC_HEOIDR_VDSCR_Pos)            /**< (LCDC_HEOIDR) Descriptor Loaded for V Chrominance Component Interrupt Disable Mask */
#define LCDC_HEOIDR_VDSCR                   LCDC_HEOIDR_VDSCR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIDR_VDSCR_Msk instead */
#define LCDC_HEOIDR_VADD_Pos                20                                             /**< (LCDC_HEOIDR) Head Descriptor Loaded for V Chrominance Component Interrupt Disable Position */
#define LCDC_HEOIDR_VADD_Msk                (_U_(0x1) << LCDC_HEOIDR_VADD_Pos)             /**< (LCDC_HEOIDR) Head Descriptor Loaded for V Chrominance Component Interrupt Disable Mask */
#define LCDC_HEOIDR_VADD                    LCDC_HEOIDR_VADD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIDR_VADD_Msk instead */
#define LCDC_HEOIDR_VDONE_Pos               21                                             /**< (LCDC_HEOIDR) End of List for V Chrominance Component Interrupt Disable Position */
#define LCDC_HEOIDR_VDONE_Msk               (_U_(0x1) << LCDC_HEOIDR_VDONE_Pos)            /**< (LCDC_HEOIDR) End of List for V Chrominance Component Interrupt Disable Mask */
#define LCDC_HEOIDR_VDONE                   LCDC_HEOIDR_VDONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIDR_VDONE_Msk instead */
#define LCDC_HEOIDR_VOVR_Pos                22                                             /**< (LCDC_HEOIDR) Overflow for V Chrominance Component Interrupt Disable Position */
#define LCDC_HEOIDR_VOVR_Msk                (_U_(0x1) << LCDC_HEOIDR_VOVR_Pos)             /**< (LCDC_HEOIDR) Overflow for V Chrominance Component Interrupt Disable Mask */
#define LCDC_HEOIDR_VOVR                    LCDC_HEOIDR_VOVR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIDR_VOVR_Msk instead */
#define LCDC_HEOIDR_MASK                    _U_(0x7C7C7C)                                  /**< \deprecated (LCDC_HEOIDR) Register MASK  (Use LCDC_HEOIDR_Msk instead)  */
#define LCDC_HEOIDR_Msk                     _U_(0x7C7C7C)                                  /**< (LCDC_HEOIDR) Register Mask  */


/* -------- LCDC_HEOIMR : (LCDC Offset: 0x354) (R/ 32) High-End Overlay Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DMA:1;                     /**< bit:      2  End of DMA Transfer Interrupt Mask       */
    uint32_t DSCR:1;                    /**< bit:      3  Descriptor Loaded Interrupt Mask         */
    uint32_t ADD:1;                     /**< bit:      4  Head Descriptor Loaded Interrupt Mask    */
    uint32_t DONE:1;                    /**< bit:      5  End of List Interrupt Mask               */
    uint32_t OVR:1;                     /**< bit:      6  Overflow Interrupt Mask                  */
    uint32_t :3;                        /**< bit:   7..9  Reserved */
    uint32_t UDMA:1;                    /**< bit:     10  End of DMA Transfer for U or UV Chrominance Component Interrupt Mask */
    uint32_t UDSCR:1;                   /**< bit:     11  Descriptor Loaded for U or UV Chrominance Component Interrupt Mask */
    uint32_t UADD:1;                    /**< bit:     12  Head Descriptor Loaded for U or UV Chrominance Component Mask */
    uint32_t UDONE:1;                   /**< bit:     13  End of List for U or UV Chrominance Component Mask */
    uint32_t UOVR:1;                    /**< bit:     14  Overflow for U Chrominance Interrupt Mask */
    uint32_t :3;                        /**< bit: 15..17  Reserved */
    uint32_t VDMA:1;                    /**< bit:     18  End of DMA Transfer for V Chrominance Component Interrupt Mask */
    uint32_t VDSCR:1;                   /**< bit:     19  Descriptor Loaded for V Chrominance Component Interrupt Mask */
    uint32_t VADD:1;                    /**< bit:     20  Head Descriptor Loaded for V Chrominance Component Mask */
    uint32_t VDONE:1;                   /**< bit:     21  End of List for V Chrominance Component Mask */
    uint32_t VOVR:1;                    /**< bit:     22  Overflow for V Chrominance Interrupt Mask */
    uint32_t :9;                        /**< bit: 23..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOIMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOIMR_OFFSET                  (0x354)                                       /**<  (LCDC_HEOIMR) High-End Overlay Interrupt Mask Register  Offset */

#define LCDC_HEOIMR_DMA_Pos                 2                                              /**< (LCDC_HEOIMR) End of DMA Transfer Interrupt Mask Position */
#define LCDC_HEOIMR_DMA_Msk                 (_U_(0x1) << LCDC_HEOIMR_DMA_Pos)              /**< (LCDC_HEOIMR) End of DMA Transfer Interrupt Mask Mask */
#define LCDC_HEOIMR_DMA                     LCDC_HEOIMR_DMA_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIMR_DMA_Msk instead */
#define LCDC_HEOIMR_DSCR_Pos                3                                              /**< (LCDC_HEOIMR) Descriptor Loaded Interrupt Mask Position */
#define LCDC_HEOIMR_DSCR_Msk                (_U_(0x1) << LCDC_HEOIMR_DSCR_Pos)             /**< (LCDC_HEOIMR) Descriptor Loaded Interrupt Mask Mask */
#define LCDC_HEOIMR_DSCR                    LCDC_HEOIMR_DSCR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIMR_DSCR_Msk instead */
#define LCDC_HEOIMR_ADD_Pos                 4                                              /**< (LCDC_HEOIMR) Head Descriptor Loaded Interrupt Mask Position */
#define LCDC_HEOIMR_ADD_Msk                 (_U_(0x1) << LCDC_HEOIMR_ADD_Pos)              /**< (LCDC_HEOIMR) Head Descriptor Loaded Interrupt Mask Mask */
#define LCDC_HEOIMR_ADD                     LCDC_HEOIMR_ADD_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIMR_ADD_Msk instead */
#define LCDC_HEOIMR_DONE_Pos                5                                              /**< (LCDC_HEOIMR) End of List Interrupt Mask Position */
#define LCDC_HEOIMR_DONE_Msk                (_U_(0x1) << LCDC_HEOIMR_DONE_Pos)             /**< (LCDC_HEOIMR) End of List Interrupt Mask Mask */
#define LCDC_HEOIMR_DONE                    LCDC_HEOIMR_DONE_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIMR_DONE_Msk instead */
#define LCDC_HEOIMR_OVR_Pos                 6                                              /**< (LCDC_HEOIMR) Overflow Interrupt Mask Position */
#define LCDC_HEOIMR_OVR_Msk                 (_U_(0x1) << LCDC_HEOIMR_OVR_Pos)              /**< (LCDC_HEOIMR) Overflow Interrupt Mask Mask */
#define LCDC_HEOIMR_OVR                     LCDC_HEOIMR_OVR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIMR_OVR_Msk instead */
#define LCDC_HEOIMR_UDMA_Pos                10                                             /**< (LCDC_HEOIMR) End of DMA Transfer for U or UV Chrominance Component Interrupt Mask Position */
#define LCDC_HEOIMR_UDMA_Msk                (_U_(0x1) << LCDC_HEOIMR_UDMA_Pos)             /**< (LCDC_HEOIMR) End of DMA Transfer for U or UV Chrominance Component Interrupt Mask Mask */
#define LCDC_HEOIMR_UDMA                    LCDC_HEOIMR_UDMA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIMR_UDMA_Msk instead */
#define LCDC_HEOIMR_UDSCR_Pos               11                                             /**< (LCDC_HEOIMR) Descriptor Loaded for U or UV Chrominance Component Interrupt Mask Position */
#define LCDC_HEOIMR_UDSCR_Msk               (_U_(0x1) << LCDC_HEOIMR_UDSCR_Pos)            /**< (LCDC_HEOIMR) Descriptor Loaded for U or UV Chrominance Component Interrupt Mask Mask */
#define LCDC_HEOIMR_UDSCR                   LCDC_HEOIMR_UDSCR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIMR_UDSCR_Msk instead */
#define LCDC_HEOIMR_UADD_Pos                12                                             /**< (LCDC_HEOIMR) Head Descriptor Loaded for U or UV Chrominance Component Mask Position */
#define LCDC_HEOIMR_UADD_Msk                (_U_(0x1) << LCDC_HEOIMR_UADD_Pos)             /**< (LCDC_HEOIMR) Head Descriptor Loaded for U or UV Chrominance Component Mask Mask */
#define LCDC_HEOIMR_UADD                    LCDC_HEOIMR_UADD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIMR_UADD_Msk instead */
#define LCDC_HEOIMR_UDONE_Pos               13                                             /**< (LCDC_HEOIMR) End of List for U or UV Chrominance Component Mask Position */
#define LCDC_HEOIMR_UDONE_Msk               (_U_(0x1) << LCDC_HEOIMR_UDONE_Pos)            /**< (LCDC_HEOIMR) End of List for U or UV Chrominance Component Mask Mask */
#define LCDC_HEOIMR_UDONE                   LCDC_HEOIMR_UDONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIMR_UDONE_Msk instead */
#define LCDC_HEOIMR_UOVR_Pos                14                                             /**< (LCDC_HEOIMR) Overflow for U Chrominance Interrupt Mask Position */
#define LCDC_HEOIMR_UOVR_Msk                (_U_(0x1) << LCDC_HEOIMR_UOVR_Pos)             /**< (LCDC_HEOIMR) Overflow for U Chrominance Interrupt Mask Mask */
#define LCDC_HEOIMR_UOVR                    LCDC_HEOIMR_UOVR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIMR_UOVR_Msk instead */
#define LCDC_HEOIMR_VDMA_Pos                18                                             /**< (LCDC_HEOIMR) End of DMA Transfer for V Chrominance Component Interrupt Mask Position */
#define LCDC_HEOIMR_VDMA_Msk                (_U_(0x1) << LCDC_HEOIMR_VDMA_Pos)             /**< (LCDC_HEOIMR) End of DMA Transfer for V Chrominance Component Interrupt Mask Mask */
#define LCDC_HEOIMR_VDMA                    LCDC_HEOIMR_VDMA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIMR_VDMA_Msk instead */
#define LCDC_HEOIMR_VDSCR_Pos               19                                             /**< (LCDC_HEOIMR) Descriptor Loaded for V Chrominance Component Interrupt Mask Position */
#define LCDC_HEOIMR_VDSCR_Msk               (_U_(0x1) << LCDC_HEOIMR_VDSCR_Pos)            /**< (LCDC_HEOIMR) Descriptor Loaded for V Chrominance Component Interrupt Mask Mask */
#define LCDC_HEOIMR_VDSCR                   LCDC_HEOIMR_VDSCR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIMR_VDSCR_Msk instead */
#define LCDC_HEOIMR_VADD_Pos                20                                             /**< (LCDC_HEOIMR) Head Descriptor Loaded for V Chrominance Component Mask Position */
#define LCDC_HEOIMR_VADD_Msk                (_U_(0x1) << LCDC_HEOIMR_VADD_Pos)             /**< (LCDC_HEOIMR) Head Descriptor Loaded for V Chrominance Component Mask Mask */
#define LCDC_HEOIMR_VADD                    LCDC_HEOIMR_VADD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIMR_VADD_Msk instead */
#define LCDC_HEOIMR_VDONE_Pos               21                                             /**< (LCDC_HEOIMR) End of List for V Chrominance Component Mask Position */
#define LCDC_HEOIMR_VDONE_Msk               (_U_(0x1) << LCDC_HEOIMR_VDONE_Pos)            /**< (LCDC_HEOIMR) End of List for V Chrominance Component Mask Mask */
#define LCDC_HEOIMR_VDONE                   LCDC_HEOIMR_VDONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIMR_VDONE_Msk instead */
#define LCDC_HEOIMR_VOVR_Pos                22                                             /**< (LCDC_HEOIMR) Overflow for V Chrominance Interrupt Mask Position */
#define LCDC_HEOIMR_VOVR_Msk                (_U_(0x1) << LCDC_HEOIMR_VOVR_Pos)             /**< (LCDC_HEOIMR) Overflow for V Chrominance Interrupt Mask Mask */
#define LCDC_HEOIMR_VOVR                    LCDC_HEOIMR_VOVR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOIMR_VOVR_Msk instead */
#define LCDC_HEOIMR_MASK                    _U_(0x7C7C7C)                                  /**< \deprecated (LCDC_HEOIMR) Register MASK  (Use LCDC_HEOIMR_Msk instead)  */
#define LCDC_HEOIMR_Msk                     _U_(0x7C7C7C)                                  /**< (LCDC_HEOIMR) Register Mask  */


/* -------- LCDC_HEOISR : (LCDC Offset: 0x358) (R/ 32) High-End Overlay Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DMA:1;                     /**< bit:      2  End of DMA Transfer                      */
    uint32_t DSCR:1;                    /**< bit:      3  DMA Descriptor Loaded                    */
    uint32_t ADD:1;                     /**< bit:      4  Head Descriptor Loaded                   */
    uint32_t DONE:1;                    /**< bit:      5  End of List Detected                     */
    uint32_t OVR:1;                     /**< bit:      6  Overflow Detected                        */
    uint32_t :3;                        /**< bit:   7..9  Reserved */
    uint32_t UDMA:1;                    /**< bit:     10  End of DMA Transfer for U Component      */
    uint32_t UDSCR:1;                   /**< bit:     11  DMA Descriptor Loaded for U Component    */
    uint32_t UADD:1;                    /**< bit:     12  Head Descriptor Loaded for U Component   */
    uint32_t UDONE:1;                   /**< bit:     13  End of List Detected for U Component     */
    uint32_t UOVR:1;                    /**< bit:     14  Overflow Detected for U Component        */
    uint32_t :3;                        /**< bit: 15..17  Reserved */
    uint32_t VDMA:1;                    /**< bit:     18  End of DMA Transfer for V Component      */
    uint32_t VDSCR:1;                   /**< bit:     19  DMA Descriptor Loaded for V Component    */
    uint32_t VADD:1;                    /**< bit:     20  Head Descriptor Loaded for V Component   */
    uint32_t VDONE:1;                   /**< bit:     21  End of List Detected for V Component     */
    uint32_t VOVR:1;                    /**< bit:     22  Overflow Detected for V Component        */
    uint32_t :9;                        /**< bit: 23..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOISR_OFFSET                  (0x358)                                       /**<  (LCDC_HEOISR) High-End Overlay Interrupt Status Register  Offset */

#define LCDC_HEOISR_DMA_Pos                 2                                              /**< (LCDC_HEOISR) End of DMA Transfer Position */
#define LCDC_HEOISR_DMA_Msk                 (_U_(0x1) << LCDC_HEOISR_DMA_Pos)              /**< (LCDC_HEOISR) End of DMA Transfer Mask */
#define LCDC_HEOISR_DMA                     LCDC_HEOISR_DMA_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOISR_DMA_Msk instead */
#define LCDC_HEOISR_DSCR_Pos                3                                              /**< (LCDC_HEOISR) DMA Descriptor Loaded Position */
#define LCDC_HEOISR_DSCR_Msk                (_U_(0x1) << LCDC_HEOISR_DSCR_Pos)             /**< (LCDC_HEOISR) DMA Descriptor Loaded Mask */
#define LCDC_HEOISR_DSCR                    LCDC_HEOISR_DSCR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOISR_DSCR_Msk instead */
#define LCDC_HEOISR_ADD_Pos                 4                                              /**< (LCDC_HEOISR) Head Descriptor Loaded Position */
#define LCDC_HEOISR_ADD_Msk                 (_U_(0x1) << LCDC_HEOISR_ADD_Pos)              /**< (LCDC_HEOISR) Head Descriptor Loaded Mask */
#define LCDC_HEOISR_ADD                     LCDC_HEOISR_ADD_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOISR_ADD_Msk instead */
#define LCDC_HEOISR_DONE_Pos                5                                              /**< (LCDC_HEOISR) End of List Detected Position */
#define LCDC_HEOISR_DONE_Msk                (_U_(0x1) << LCDC_HEOISR_DONE_Pos)             /**< (LCDC_HEOISR) End of List Detected Mask */
#define LCDC_HEOISR_DONE                    LCDC_HEOISR_DONE_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOISR_DONE_Msk instead */
#define LCDC_HEOISR_OVR_Pos                 6                                              /**< (LCDC_HEOISR) Overflow Detected Position */
#define LCDC_HEOISR_OVR_Msk                 (_U_(0x1) << LCDC_HEOISR_OVR_Pos)              /**< (LCDC_HEOISR) Overflow Detected Mask */
#define LCDC_HEOISR_OVR                     LCDC_HEOISR_OVR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOISR_OVR_Msk instead */
#define LCDC_HEOISR_UDMA_Pos                10                                             /**< (LCDC_HEOISR) End of DMA Transfer for U Component Position */
#define LCDC_HEOISR_UDMA_Msk                (_U_(0x1) << LCDC_HEOISR_UDMA_Pos)             /**< (LCDC_HEOISR) End of DMA Transfer for U Component Mask */
#define LCDC_HEOISR_UDMA                    LCDC_HEOISR_UDMA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOISR_UDMA_Msk instead */
#define LCDC_HEOISR_UDSCR_Pos               11                                             /**< (LCDC_HEOISR) DMA Descriptor Loaded for U Component Position */
#define LCDC_HEOISR_UDSCR_Msk               (_U_(0x1) << LCDC_HEOISR_UDSCR_Pos)            /**< (LCDC_HEOISR) DMA Descriptor Loaded for U Component Mask */
#define LCDC_HEOISR_UDSCR                   LCDC_HEOISR_UDSCR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOISR_UDSCR_Msk instead */
#define LCDC_HEOISR_UADD_Pos                12                                             /**< (LCDC_HEOISR) Head Descriptor Loaded for U Component Position */
#define LCDC_HEOISR_UADD_Msk                (_U_(0x1) << LCDC_HEOISR_UADD_Pos)             /**< (LCDC_HEOISR) Head Descriptor Loaded for U Component Mask */
#define LCDC_HEOISR_UADD                    LCDC_HEOISR_UADD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOISR_UADD_Msk instead */
#define LCDC_HEOISR_UDONE_Pos               13                                             /**< (LCDC_HEOISR) End of List Detected for U Component Position */
#define LCDC_HEOISR_UDONE_Msk               (_U_(0x1) << LCDC_HEOISR_UDONE_Pos)            /**< (LCDC_HEOISR) End of List Detected for U Component Mask */
#define LCDC_HEOISR_UDONE                   LCDC_HEOISR_UDONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOISR_UDONE_Msk instead */
#define LCDC_HEOISR_UOVR_Pos                14                                             /**< (LCDC_HEOISR) Overflow Detected for U Component Position */
#define LCDC_HEOISR_UOVR_Msk                (_U_(0x1) << LCDC_HEOISR_UOVR_Pos)             /**< (LCDC_HEOISR) Overflow Detected for U Component Mask */
#define LCDC_HEOISR_UOVR                    LCDC_HEOISR_UOVR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOISR_UOVR_Msk instead */
#define LCDC_HEOISR_VDMA_Pos                18                                             /**< (LCDC_HEOISR) End of DMA Transfer for V Component Position */
#define LCDC_HEOISR_VDMA_Msk                (_U_(0x1) << LCDC_HEOISR_VDMA_Pos)             /**< (LCDC_HEOISR) End of DMA Transfer for V Component Mask */
#define LCDC_HEOISR_VDMA                    LCDC_HEOISR_VDMA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOISR_VDMA_Msk instead */
#define LCDC_HEOISR_VDSCR_Pos               19                                             /**< (LCDC_HEOISR) DMA Descriptor Loaded for V Component Position */
#define LCDC_HEOISR_VDSCR_Msk               (_U_(0x1) << LCDC_HEOISR_VDSCR_Pos)            /**< (LCDC_HEOISR) DMA Descriptor Loaded for V Component Mask */
#define LCDC_HEOISR_VDSCR                   LCDC_HEOISR_VDSCR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOISR_VDSCR_Msk instead */
#define LCDC_HEOISR_VADD_Pos                20                                             /**< (LCDC_HEOISR) Head Descriptor Loaded for V Component Position */
#define LCDC_HEOISR_VADD_Msk                (_U_(0x1) << LCDC_HEOISR_VADD_Pos)             /**< (LCDC_HEOISR) Head Descriptor Loaded for V Component Mask */
#define LCDC_HEOISR_VADD                    LCDC_HEOISR_VADD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOISR_VADD_Msk instead */
#define LCDC_HEOISR_VDONE_Pos               21                                             /**< (LCDC_HEOISR) End of List Detected for V Component Position */
#define LCDC_HEOISR_VDONE_Msk               (_U_(0x1) << LCDC_HEOISR_VDONE_Pos)            /**< (LCDC_HEOISR) End of List Detected for V Component Mask */
#define LCDC_HEOISR_VDONE                   LCDC_HEOISR_VDONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOISR_VDONE_Msk instead */
#define LCDC_HEOISR_VOVR_Pos                22                                             /**< (LCDC_HEOISR) Overflow Detected for V Component Position */
#define LCDC_HEOISR_VOVR_Msk                (_U_(0x1) << LCDC_HEOISR_VOVR_Pos)             /**< (LCDC_HEOISR) Overflow Detected for V Component Mask */
#define LCDC_HEOISR_VOVR                    LCDC_HEOISR_VOVR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOISR_VOVR_Msk instead */
#define LCDC_HEOISR_MASK                    _U_(0x7C7C7C)                                  /**< \deprecated (LCDC_HEOISR) Register MASK  (Use LCDC_HEOISR_Msk instead)  */
#define LCDC_HEOISR_Msk                     _U_(0x7C7C7C)                                  /**< (LCDC_HEOISR) Register Mask  */


/* -------- LCDC_HEOHEAD : (LCDC Offset: 0x35c) (R/W 32) High-End Overlay DMA Head Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t HEAD:30;                   /**< bit:  2..31  DMA Head Pointer                         */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOHEAD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOHEAD_OFFSET                 (0x35C)                                       /**<  (LCDC_HEOHEAD) High-End Overlay DMA Head Register  Offset */

#define LCDC_HEOHEAD_HEAD_Pos               2                                              /**< (LCDC_HEOHEAD) DMA Head Pointer Position */
#define LCDC_HEOHEAD_HEAD_Msk               (_U_(0x3FFFFFFF) << LCDC_HEOHEAD_HEAD_Pos)     /**< (LCDC_HEOHEAD) DMA Head Pointer Mask */
#define LCDC_HEOHEAD_HEAD(value)            (LCDC_HEOHEAD_HEAD_Msk & ((value) << LCDC_HEOHEAD_HEAD_Pos))
#define LCDC_HEOHEAD_MASK                   _U_(0xFFFFFFFC)                                /**< \deprecated (LCDC_HEOHEAD) Register MASK  (Use LCDC_HEOHEAD_Msk instead)  */
#define LCDC_HEOHEAD_Msk                    _U_(0xFFFFFFFC)                                /**< (LCDC_HEOHEAD) Register Mask  */


/* -------- LCDC_HEOADDR : (LCDC Offset: 0x360) (R/W 32) High-End Overlay DMA Address Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR:32;                   /**< bit:  0..31  DMA Transfer Start Address               */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOADDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOADDR_OFFSET                 (0x360)                                       /**<  (LCDC_HEOADDR) High-End Overlay DMA Address Register  Offset */

#define LCDC_HEOADDR_ADDR_Pos               0                                              /**< (LCDC_HEOADDR) DMA Transfer Start Address Position */
#define LCDC_HEOADDR_ADDR_Msk               (_U_(0xFFFFFFFF) << LCDC_HEOADDR_ADDR_Pos)     /**< (LCDC_HEOADDR) DMA Transfer Start Address Mask */
#define LCDC_HEOADDR_ADDR(value)            (LCDC_HEOADDR_ADDR_Msk & ((value) << LCDC_HEOADDR_ADDR_Pos))
#define LCDC_HEOADDR_MASK                   _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_HEOADDR) Register MASK  (Use LCDC_HEOADDR_Msk instead)  */
#define LCDC_HEOADDR_Msk                    _U_(0xFFFFFFFF)                                /**< (LCDC_HEOADDR) Register Mask  */


/* -------- LCDC_HEOCTRL : (LCDC Offset: 0x364) (R/W 32) High-End Overlay DMA Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DFETCH:1;                  /**< bit:      0  Transfer Descriptor Fetch Enable         */
    uint32_t LFETCH:1;                  /**< bit:      1  Lookup Table Fetch Enable                */
    uint32_t DMAIEN:1;                  /**< bit:      2  End of DMA Transfer Interrupt Enable     */
    uint32_t DSCRIEN:1;                 /**< bit:      3  Descriptor Loaded Interrupt Enable       */
    uint32_t ADDIEN:1;                  /**< bit:      4  Add Head Descriptor to Queue Interrupt Enable */
    uint32_t DONEIEN:1;                 /**< bit:      5  End of List Interrupt Enable             */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCTRL_OFFSET                 (0x364)                                       /**<  (LCDC_HEOCTRL) High-End Overlay DMA Control Register  Offset */

#define LCDC_HEOCTRL_DFETCH_Pos             0                                              /**< (LCDC_HEOCTRL) Transfer Descriptor Fetch Enable Position */
#define LCDC_HEOCTRL_DFETCH_Msk             (_U_(0x1) << LCDC_HEOCTRL_DFETCH_Pos)          /**< (LCDC_HEOCTRL) Transfer Descriptor Fetch Enable Mask */
#define LCDC_HEOCTRL_DFETCH                 LCDC_HEOCTRL_DFETCH_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCTRL_DFETCH_Msk instead */
#define LCDC_HEOCTRL_LFETCH_Pos             1                                              /**< (LCDC_HEOCTRL) Lookup Table Fetch Enable Position */
#define LCDC_HEOCTRL_LFETCH_Msk             (_U_(0x1) << LCDC_HEOCTRL_LFETCH_Pos)          /**< (LCDC_HEOCTRL) Lookup Table Fetch Enable Mask */
#define LCDC_HEOCTRL_LFETCH                 LCDC_HEOCTRL_LFETCH_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCTRL_LFETCH_Msk instead */
#define LCDC_HEOCTRL_DMAIEN_Pos             2                                              /**< (LCDC_HEOCTRL) End of DMA Transfer Interrupt Enable Position */
#define LCDC_HEOCTRL_DMAIEN_Msk             (_U_(0x1) << LCDC_HEOCTRL_DMAIEN_Pos)          /**< (LCDC_HEOCTRL) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_HEOCTRL_DMAIEN                 LCDC_HEOCTRL_DMAIEN_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCTRL_DMAIEN_Msk instead */
#define LCDC_HEOCTRL_DSCRIEN_Pos            3                                              /**< (LCDC_HEOCTRL) Descriptor Loaded Interrupt Enable Position */
#define LCDC_HEOCTRL_DSCRIEN_Msk            (_U_(0x1) << LCDC_HEOCTRL_DSCRIEN_Pos)         /**< (LCDC_HEOCTRL) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_HEOCTRL_DSCRIEN                LCDC_HEOCTRL_DSCRIEN_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCTRL_DSCRIEN_Msk instead */
#define LCDC_HEOCTRL_ADDIEN_Pos             4                                              /**< (LCDC_HEOCTRL) Add Head Descriptor to Queue Interrupt Enable Position */
#define LCDC_HEOCTRL_ADDIEN_Msk             (_U_(0x1) << LCDC_HEOCTRL_ADDIEN_Pos)          /**< (LCDC_HEOCTRL) Add Head Descriptor to Queue Interrupt Enable Mask */
#define LCDC_HEOCTRL_ADDIEN                 LCDC_HEOCTRL_ADDIEN_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCTRL_ADDIEN_Msk instead */
#define LCDC_HEOCTRL_DONEIEN_Pos            5                                              /**< (LCDC_HEOCTRL) End of List Interrupt Enable Position */
#define LCDC_HEOCTRL_DONEIEN_Msk            (_U_(0x1) << LCDC_HEOCTRL_DONEIEN_Pos)         /**< (LCDC_HEOCTRL) End of List Interrupt Enable Mask */
#define LCDC_HEOCTRL_DONEIEN                LCDC_HEOCTRL_DONEIEN_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCTRL_DONEIEN_Msk instead */
#define LCDC_HEOCTRL_MASK                   _U_(0x3F)                                      /**< \deprecated (LCDC_HEOCTRL) Register MASK  (Use LCDC_HEOCTRL_Msk instead)  */
#define LCDC_HEOCTRL_Msk                    _U_(0x3F)                                      /**< (LCDC_HEOCTRL) Register Mask  */


/* -------- LCDC_HEONEXT : (LCDC Offset: 0x368) (R/W 32) High-End Overlay DMA Next Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NEXT:32;                   /**< bit:  0..31  DMA Descriptor Next Address              */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEONEXT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEONEXT_OFFSET                 (0x368)                                       /**<  (LCDC_HEONEXT) High-End Overlay DMA Next Register  Offset */

#define LCDC_HEONEXT_NEXT_Pos               0                                              /**< (LCDC_HEONEXT) DMA Descriptor Next Address Position */
#define LCDC_HEONEXT_NEXT_Msk               (_U_(0xFFFFFFFF) << LCDC_HEONEXT_NEXT_Pos)     /**< (LCDC_HEONEXT) DMA Descriptor Next Address Mask */
#define LCDC_HEONEXT_NEXT(value)            (LCDC_HEONEXT_NEXT_Msk & ((value) << LCDC_HEONEXT_NEXT_Pos))
#define LCDC_HEONEXT_MASK                   _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_HEONEXT) Register MASK  (Use LCDC_HEONEXT_Msk instead)  */
#define LCDC_HEONEXT_Msk                    _U_(0xFFFFFFFF)                                /**< (LCDC_HEONEXT) Register Mask  */


/* -------- LCDC_HEOUHEAD : (LCDC Offset: 0x36c) (R/W 32) High-End Overlay U-UV DMA Head Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t UHEAD:32;                  /**< bit:  0..31  DMA Head Pointer                         */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOUHEAD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOUHEAD_OFFSET                (0x36C)                                       /**<  (LCDC_HEOUHEAD) High-End Overlay U-UV DMA Head Register  Offset */

#define LCDC_HEOUHEAD_UHEAD_Pos             0                                              /**< (LCDC_HEOUHEAD) DMA Head Pointer Position */
#define LCDC_HEOUHEAD_UHEAD_Msk             (_U_(0xFFFFFFFF) << LCDC_HEOUHEAD_UHEAD_Pos)   /**< (LCDC_HEOUHEAD) DMA Head Pointer Mask */
#define LCDC_HEOUHEAD_UHEAD(value)          (LCDC_HEOUHEAD_UHEAD_Msk & ((value) << LCDC_HEOUHEAD_UHEAD_Pos))
#define LCDC_HEOUHEAD_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_HEOUHEAD) Register MASK  (Use LCDC_HEOUHEAD_Msk instead)  */
#define LCDC_HEOUHEAD_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_HEOUHEAD) Register Mask  */


/* -------- LCDC_HEOUADDR : (LCDC Offset: 0x370) (R/W 32) High-End Overlay U-UV DMA Address Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t UADDR:32;                  /**< bit:  0..31  DMA Transfer Start Address for U or UV Chrominance */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOUADDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOUADDR_OFFSET                (0x370)                                       /**<  (LCDC_HEOUADDR) High-End Overlay U-UV DMA Address Register  Offset */

#define LCDC_HEOUADDR_UADDR_Pos             0                                              /**< (LCDC_HEOUADDR) DMA Transfer Start Address for U or UV Chrominance Position */
#define LCDC_HEOUADDR_UADDR_Msk             (_U_(0xFFFFFFFF) << LCDC_HEOUADDR_UADDR_Pos)   /**< (LCDC_HEOUADDR) DMA Transfer Start Address for U or UV Chrominance Mask */
#define LCDC_HEOUADDR_UADDR(value)          (LCDC_HEOUADDR_UADDR_Msk & ((value) << LCDC_HEOUADDR_UADDR_Pos))
#define LCDC_HEOUADDR_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_HEOUADDR) Register MASK  (Use LCDC_HEOUADDR_Msk instead)  */
#define LCDC_HEOUADDR_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_HEOUADDR) Register Mask  */


/* -------- LCDC_HEOUCTRL : (LCDC Offset: 0x374) (R/W 32) High-End Overlay U-UV DMA Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t UDFETCH:1;                 /**< bit:      0  Transfer Descriptor Fetch Enable         */
    uint32_t :1;                        /**< bit:      1  Reserved */
    uint32_t UDMAIEN:1;                 /**< bit:      2  End of DMA Transfer Interrupt Enable     */
    uint32_t UDSCRIEN:1;                /**< bit:      3  Descriptor Loaded Interrupt Enable       */
    uint32_t UADDIEN:1;                 /**< bit:      4  Add Head Descriptor to Queue Interrupt Enable */
    uint32_t UDONEIEN:1;                /**< bit:      5  End of List Interrupt Enable             */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOUCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOUCTRL_OFFSET                (0x374)                                       /**<  (LCDC_HEOUCTRL) High-End Overlay U-UV DMA Control Register  Offset */

#define LCDC_HEOUCTRL_UDFETCH_Pos           0                                              /**< (LCDC_HEOUCTRL) Transfer Descriptor Fetch Enable Position */
#define LCDC_HEOUCTRL_UDFETCH_Msk           (_U_(0x1) << LCDC_HEOUCTRL_UDFETCH_Pos)        /**< (LCDC_HEOUCTRL) Transfer Descriptor Fetch Enable Mask */
#define LCDC_HEOUCTRL_UDFETCH               LCDC_HEOUCTRL_UDFETCH_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOUCTRL_UDFETCH_Msk instead */
#define LCDC_HEOUCTRL_UDMAIEN_Pos           2                                              /**< (LCDC_HEOUCTRL) End of DMA Transfer Interrupt Enable Position */
#define LCDC_HEOUCTRL_UDMAIEN_Msk           (_U_(0x1) << LCDC_HEOUCTRL_UDMAIEN_Pos)        /**< (LCDC_HEOUCTRL) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_HEOUCTRL_UDMAIEN               LCDC_HEOUCTRL_UDMAIEN_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOUCTRL_UDMAIEN_Msk instead */
#define LCDC_HEOUCTRL_UDSCRIEN_Pos          3                                              /**< (LCDC_HEOUCTRL) Descriptor Loaded Interrupt Enable Position */
#define LCDC_HEOUCTRL_UDSCRIEN_Msk          (_U_(0x1) << LCDC_HEOUCTRL_UDSCRIEN_Pos)       /**< (LCDC_HEOUCTRL) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_HEOUCTRL_UDSCRIEN              LCDC_HEOUCTRL_UDSCRIEN_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOUCTRL_UDSCRIEN_Msk instead */
#define LCDC_HEOUCTRL_UADDIEN_Pos           4                                              /**< (LCDC_HEOUCTRL) Add Head Descriptor to Queue Interrupt Enable Position */
#define LCDC_HEOUCTRL_UADDIEN_Msk           (_U_(0x1) << LCDC_HEOUCTRL_UADDIEN_Pos)        /**< (LCDC_HEOUCTRL) Add Head Descriptor to Queue Interrupt Enable Mask */
#define LCDC_HEOUCTRL_UADDIEN               LCDC_HEOUCTRL_UADDIEN_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOUCTRL_UADDIEN_Msk instead */
#define LCDC_HEOUCTRL_UDONEIEN_Pos          5                                              /**< (LCDC_HEOUCTRL) End of List Interrupt Enable Position */
#define LCDC_HEOUCTRL_UDONEIEN_Msk          (_U_(0x1) << LCDC_HEOUCTRL_UDONEIEN_Pos)       /**< (LCDC_HEOUCTRL) End of List Interrupt Enable Mask */
#define LCDC_HEOUCTRL_UDONEIEN              LCDC_HEOUCTRL_UDONEIEN_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOUCTRL_UDONEIEN_Msk instead */
#define LCDC_HEOUCTRL_MASK                  _U_(0x3D)                                      /**< \deprecated (LCDC_HEOUCTRL) Register MASK  (Use LCDC_HEOUCTRL_Msk instead)  */
#define LCDC_HEOUCTRL_Msk                   _U_(0x3D)                                      /**< (LCDC_HEOUCTRL) Register Mask  */


/* -------- LCDC_HEOUNEXT : (LCDC Offset: 0x378) (R/W 32) High-End Overlay U-UV DMA Next Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t UNEXT:32;                  /**< bit:  0..31  DMA Descriptor Next Address              */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOUNEXT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOUNEXT_OFFSET                (0x378)                                       /**<  (LCDC_HEOUNEXT) High-End Overlay U-UV DMA Next Register  Offset */

#define LCDC_HEOUNEXT_UNEXT_Pos             0                                              /**< (LCDC_HEOUNEXT) DMA Descriptor Next Address Position */
#define LCDC_HEOUNEXT_UNEXT_Msk             (_U_(0xFFFFFFFF) << LCDC_HEOUNEXT_UNEXT_Pos)   /**< (LCDC_HEOUNEXT) DMA Descriptor Next Address Mask */
#define LCDC_HEOUNEXT_UNEXT(value)          (LCDC_HEOUNEXT_UNEXT_Msk & ((value) << LCDC_HEOUNEXT_UNEXT_Pos))
#define LCDC_HEOUNEXT_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_HEOUNEXT) Register MASK  (Use LCDC_HEOUNEXT_Msk instead)  */
#define LCDC_HEOUNEXT_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_HEOUNEXT) Register Mask  */


/* -------- LCDC_HEOVHEAD : (LCDC Offset: 0x37c) (R/W 32) High-End Overlay V DMA Head Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t VHEAD:32;                  /**< bit:  0..31  DMA Head Pointer                         */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOVHEAD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOVHEAD_OFFSET                (0x37C)                                       /**<  (LCDC_HEOVHEAD) High-End Overlay V DMA Head Register  Offset */

#define LCDC_HEOVHEAD_VHEAD_Pos             0                                              /**< (LCDC_HEOVHEAD) DMA Head Pointer Position */
#define LCDC_HEOVHEAD_VHEAD_Msk             (_U_(0xFFFFFFFF) << LCDC_HEOVHEAD_VHEAD_Pos)   /**< (LCDC_HEOVHEAD) DMA Head Pointer Mask */
#define LCDC_HEOVHEAD_VHEAD(value)          (LCDC_HEOVHEAD_VHEAD_Msk & ((value) << LCDC_HEOVHEAD_VHEAD_Pos))
#define LCDC_HEOVHEAD_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_HEOVHEAD) Register MASK  (Use LCDC_HEOVHEAD_Msk instead)  */
#define LCDC_HEOVHEAD_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_HEOVHEAD) Register Mask  */


/* -------- LCDC_HEOVADDR : (LCDC Offset: 0x380) (R/W 32) High-End Overlay V DMA Address Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t VADDR:32;                  /**< bit:  0..31  DMA Transfer Start Address for V Chrominance */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOVADDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOVADDR_OFFSET                (0x380)                                       /**<  (LCDC_HEOVADDR) High-End Overlay V DMA Address Register  Offset */

#define LCDC_HEOVADDR_VADDR_Pos             0                                              /**< (LCDC_HEOVADDR) DMA Transfer Start Address for V Chrominance Position */
#define LCDC_HEOVADDR_VADDR_Msk             (_U_(0xFFFFFFFF) << LCDC_HEOVADDR_VADDR_Pos)   /**< (LCDC_HEOVADDR) DMA Transfer Start Address for V Chrominance Mask */
#define LCDC_HEOVADDR_VADDR(value)          (LCDC_HEOVADDR_VADDR_Msk & ((value) << LCDC_HEOVADDR_VADDR_Pos))
#define LCDC_HEOVADDR_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_HEOVADDR) Register MASK  (Use LCDC_HEOVADDR_Msk instead)  */
#define LCDC_HEOVADDR_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_HEOVADDR) Register Mask  */


/* -------- LCDC_HEOVCTRL : (LCDC Offset: 0x384) (R/W 32) High-End Overlay V DMA Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t VDFETCH:1;                 /**< bit:      0  Transfer Descriptor Fetch Enable         */
    uint32_t :1;                        /**< bit:      1  Reserved */
    uint32_t VDMAIEN:1;                 /**< bit:      2  End of DMA Transfer Interrupt Enable     */
    uint32_t VDSCRIEN:1;                /**< bit:      3  Descriptor Loaded Interrupt Enable       */
    uint32_t VADDIEN:1;                 /**< bit:      4  Add Head Descriptor to Queue Interrupt Enable */
    uint32_t VDONEIEN:1;                /**< bit:      5  End of List Interrupt Enable             */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOVCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOVCTRL_OFFSET                (0x384)                                       /**<  (LCDC_HEOVCTRL) High-End Overlay V DMA Control Register  Offset */

#define LCDC_HEOVCTRL_VDFETCH_Pos           0                                              /**< (LCDC_HEOVCTRL) Transfer Descriptor Fetch Enable Position */
#define LCDC_HEOVCTRL_VDFETCH_Msk           (_U_(0x1) << LCDC_HEOVCTRL_VDFETCH_Pos)        /**< (LCDC_HEOVCTRL) Transfer Descriptor Fetch Enable Mask */
#define LCDC_HEOVCTRL_VDFETCH               LCDC_HEOVCTRL_VDFETCH_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOVCTRL_VDFETCH_Msk instead */
#define LCDC_HEOVCTRL_VDMAIEN_Pos           2                                              /**< (LCDC_HEOVCTRL) End of DMA Transfer Interrupt Enable Position */
#define LCDC_HEOVCTRL_VDMAIEN_Msk           (_U_(0x1) << LCDC_HEOVCTRL_VDMAIEN_Pos)        /**< (LCDC_HEOVCTRL) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_HEOVCTRL_VDMAIEN               LCDC_HEOVCTRL_VDMAIEN_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOVCTRL_VDMAIEN_Msk instead */
#define LCDC_HEOVCTRL_VDSCRIEN_Pos          3                                              /**< (LCDC_HEOVCTRL) Descriptor Loaded Interrupt Enable Position */
#define LCDC_HEOVCTRL_VDSCRIEN_Msk          (_U_(0x1) << LCDC_HEOVCTRL_VDSCRIEN_Pos)       /**< (LCDC_HEOVCTRL) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_HEOVCTRL_VDSCRIEN              LCDC_HEOVCTRL_VDSCRIEN_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOVCTRL_VDSCRIEN_Msk instead */
#define LCDC_HEOVCTRL_VADDIEN_Pos           4                                              /**< (LCDC_HEOVCTRL) Add Head Descriptor to Queue Interrupt Enable Position */
#define LCDC_HEOVCTRL_VADDIEN_Msk           (_U_(0x1) << LCDC_HEOVCTRL_VADDIEN_Pos)        /**< (LCDC_HEOVCTRL) Add Head Descriptor to Queue Interrupt Enable Mask */
#define LCDC_HEOVCTRL_VADDIEN               LCDC_HEOVCTRL_VADDIEN_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOVCTRL_VADDIEN_Msk instead */
#define LCDC_HEOVCTRL_VDONEIEN_Pos          5                                              /**< (LCDC_HEOVCTRL) End of List Interrupt Enable Position */
#define LCDC_HEOVCTRL_VDONEIEN_Msk          (_U_(0x1) << LCDC_HEOVCTRL_VDONEIEN_Pos)       /**< (LCDC_HEOVCTRL) End of List Interrupt Enable Mask */
#define LCDC_HEOVCTRL_VDONEIEN              LCDC_HEOVCTRL_VDONEIEN_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOVCTRL_VDONEIEN_Msk instead */
#define LCDC_HEOVCTRL_MASK                  _U_(0x3D)                                      /**< \deprecated (LCDC_HEOVCTRL) Register MASK  (Use LCDC_HEOVCTRL_Msk instead)  */
#define LCDC_HEOVCTRL_Msk                   _U_(0x3D)                                      /**< (LCDC_HEOVCTRL) Register Mask  */


/* -------- LCDC_HEOVNEXT : (LCDC Offset: 0x388) (R/W 32) High-End Overlay V DMA Next Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t VNEXT:32;                  /**< bit:  0..31  DMA Descriptor Next Address              */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOVNEXT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOVNEXT_OFFSET                (0x388)                                       /**<  (LCDC_HEOVNEXT) High-End Overlay V DMA Next Register  Offset */

#define LCDC_HEOVNEXT_VNEXT_Pos             0                                              /**< (LCDC_HEOVNEXT) DMA Descriptor Next Address Position */
#define LCDC_HEOVNEXT_VNEXT_Msk             (_U_(0xFFFFFFFF) << LCDC_HEOVNEXT_VNEXT_Pos)   /**< (LCDC_HEOVNEXT) DMA Descriptor Next Address Mask */
#define LCDC_HEOVNEXT_VNEXT(value)          (LCDC_HEOVNEXT_VNEXT_Msk & ((value) << LCDC_HEOVNEXT_VNEXT_Pos))
#define LCDC_HEOVNEXT_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_HEOVNEXT) Register MASK  (Use LCDC_HEOVNEXT_Msk instead)  */
#define LCDC_HEOVNEXT_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_HEOVNEXT) Register Mask  */


/* -------- LCDC_HEOCFG0 : (LCDC Offset: 0x38c) (R/W 32) High-End Overlay Configuration Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIF:1;                     /**< bit:      0  Source Interface                         */
    uint32_t :3;                        /**< bit:   1..3  Reserved */
    uint32_t BLEN:2;                    /**< bit:   4..5  AHB Burst Length                         */
    uint32_t BLENUV:2;                  /**< bit:   6..7  AHB Burst Length for U-V Channel         */
    uint32_t DLBO:1;                    /**< bit:      8  Defined Length Burst Only For Channel Bus Transaction */
    uint32_t :3;                        /**< bit:  9..11  Reserved */
    uint32_t ROTDIS:1;                  /**< bit:     12  Hardware Rotation Optimization Disable   */
    uint32_t LOCKDIS:1;                 /**< bit:     13  Hardware Rotation Lock Disable           */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG0_OFFSET                 (0x38C)                                       /**<  (LCDC_HEOCFG0) High-End Overlay Configuration Register 0  Offset */

#define LCDC_HEOCFG0_SIF_Pos                0                                              /**< (LCDC_HEOCFG0) Source Interface Position */
#define LCDC_HEOCFG0_SIF_Msk                (_U_(0x1) << LCDC_HEOCFG0_SIF_Pos)             /**< (LCDC_HEOCFG0) Source Interface Mask */
#define LCDC_HEOCFG0_SIF                    LCDC_HEOCFG0_SIF_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG0_SIF_Msk instead */
#define LCDC_HEOCFG0_BLEN_Pos               4                                              /**< (LCDC_HEOCFG0) AHB Burst Length Position */
#define LCDC_HEOCFG0_BLEN_Msk               (_U_(0x3) << LCDC_HEOCFG0_BLEN_Pos)            /**< (LCDC_HEOCFG0) AHB Burst Length Mask */
#define LCDC_HEOCFG0_BLEN(value)            (LCDC_HEOCFG0_BLEN_Msk & ((value) << LCDC_HEOCFG0_BLEN_Pos))
#define   LCDC_HEOCFG0_BLEN_AHB_BLEN_SINGLE_Val _U_(0x0)                                       /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_HEOCFG0_BLEN_AHB_BLEN_INCR4_Val _U_(0x1)                                       /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 4 data. An AHB INCR4 Burst is used. SINGLE, INCR and INCR4 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_HEOCFG0_BLEN_AHB_BLEN_INCR8_Val _U_(0x2)                                       /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 8 data. An AHB INCR8 Burst is used. SINGLE, INCR, INCR4 and INCR8 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_HEOCFG0_BLEN_AHB_BLEN_INCR16_Val _U_(0x3)                                       /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 16 data. An AHB INCR16 Burst is used. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define LCDC_HEOCFG0_BLEN_AHB_BLEN_SINGLE   (LCDC_HEOCFG0_BLEN_AHB_BLEN_SINGLE_Val << LCDC_HEOCFG0_BLEN_Pos)  /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_HEOCFG0_BLEN_AHB_BLEN_INCR4    (LCDC_HEOCFG0_BLEN_AHB_BLEN_INCR4_Val << LCDC_HEOCFG0_BLEN_Pos)  /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 4 data. An AHB INCR4 Burst is used. SINGLE, INCR and INCR4 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_HEOCFG0_BLEN_AHB_BLEN_INCR8    (LCDC_HEOCFG0_BLEN_AHB_BLEN_INCR8_Val << LCDC_HEOCFG0_BLEN_Pos)  /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 8 data. An AHB INCR8 Burst is used. SINGLE, INCR, INCR4 and INCR8 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_HEOCFG0_BLEN_AHB_BLEN_INCR16   (LCDC_HEOCFG0_BLEN_AHB_BLEN_INCR16_Val << LCDC_HEOCFG0_BLEN_Pos)  /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 16 data. An AHB INCR16 Burst is used. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_HEOCFG0_BLENUV_Pos             6                                              /**< (LCDC_HEOCFG0) AHB Burst Length for U-V Channel Position */
#define LCDC_HEOCFG0_BLENUV_Msk             (_U_(0x3) << LCDC_HEOCFG0_BLENUV_Pos)          /**< (LCDC_HEOCFG0) AHB Burst Length for U-V Channel Mask */
#define LCDC_HEOCFG0_BLENUV(value)          (LCDC_HEOCFG0_BLENUV_Msk & ((value) << LCDC_HEOCFG0_BLENUV_Pos))
#define   LCDC_HEOCFG0_BLENUV_AHB_SINGLE_Val _U_(0x0)                                       /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_HEOCFG0_BLENUV_AHB_INCR4_Val _U_(0x1)                                       /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 4 data. An AHB INCR4 Burst is used. SINGLE, INCR and INCR4 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_HEOCFG0_BLENUV_AHB_INCR8_Val _U_(0x2)                                       /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 8 data. An AHB INCR8 Burst is used. SINGLE, INCR, INCR4 and INCR8 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_HEOCFG0_BLENUV_AHB_INCR16_Val _U_(0x3)                                       /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 16 data. An AHB INCR16 Burst is used. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define LCDC_HEOCFG0_BLENUV_AHB_SINGLE      (LCDC_HEOCFG0_BLENUV_AHB_SINGLE_Val << LCDC_HEOCFG0_BLENUV_Pos)  /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_HEOCFG0_BLENUV_AHB_INCR4       (LCDC_HEOCFG0_BLENUV_AHB_INCR4_Val << LCDC_HEOCFG0_BLENUV_Pos)  /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 4 data. An AHB INCR4 Burst is used. SINGLE, INCR and INCR4 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_HEOCFG0_BLENUV_AHB_INCR8       (LCDC_HEOCFG0_BLENUV_AHB_INCR8_Val << LCDC_HEOCFG0_BLENUV_Pos)  /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 8 data. An AHB INCR8 Burst is used. SINGLE, INCR, INCR4 and INCR8 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_HEOCFG0_BLENUV_AHB_INCR16      (LCDC_HEOCFG0_BLENUV_AHB_INCR16_Val << LCDC_HEOCFG0_BLENUV_Pos)  /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 16 data. An AHB INCR16 Burst is used. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_HEOCFG0_DLBO_Pos               8                                              /**< (LCDC_HEOCFG0) Defined Length Burst Only For Channel Bus Transaction Position */
#define LCDC_HEOCFG0_DLBO_Msk               (_U_(0x1) << LCDC_HEOCFG0_DLBO_Pos)            /**< (LCDC_HEOCFG0) Defined Length Burst Only For Channel Bus Transaction Mask */
#define LCDC_HEOCFG0_DLBO                   LCDC_HEOCFG0_DLBO_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG0_DLBO_Msk instead */
#define LCDC_HEOCFG0_ROTDIS_Pos             12                                             /**< (LCDC_HEOCFG0) Hardware Rotation Optimization Disable Position */
#define LCDC_HEOCFG0_ROTDIS_Msk             (_U_(0x1) << LCDC_HEOCFG0_ROTDIS_Pos)          /**< (LCDC_HEOCFG0) Hardware Rotation Optimization Disable Mask */
#define LCDC_HEOCFG0_ROTDIS                 LCDC_HEOCFG0_ROTDIS_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG0_ROTDIS_Msk instead */
#define LCDC_HEOCFG0_LOCKDIS_Pos            13                                             /**< (LCDC_HEOCFG0) Hardware Rotation Lock Disable Position */
#define LCDC_HEOCFG0_LOCKDIS_Msk            (_U_(0x1) << LCDC_HEOCFG0_LOCKDIS_Pos)         /**< (LCDC_HEOCFG0) Hardware Rotation Lock Disable Mask */
#define LCDC_HEOCFG0_LOCKDIS                LCDC_HEOCFG0_LOCKDIS_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG0_LOCKDIS_Msk instead */
#define LCDC_HEOCFG0_MASK                   _U_(0x31F1)                                    /**< \deprecated (LCDC_HEOCFG0) Register MASK  (Use LCDC_HEOCFG0_Msk instead)  */
#define LCDC_HEOCFG0_Msk                    _U_(0x31F1)                                    /**< (LCDC_HEOCFG0) Register Mask  */


/* -------- LCDC_HEOCFG1 : (LCDC Offset: 0x390) (R/W 32) High-End Overlay Configuration Register 1 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CLUTEN:1;                  /**< bit:      0  Color Lookup Table Mode Enable           */
    uint32_t YUVEN:1;                   /**< bit:      1  YUV Color Space Enable                   */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t RGBMODE:4;                 /**< bit:   4..7  RGB Mode Input Selection                 */
    uint32_t CLUTMODE:2;                /**< bit:   8..9  Color Lookup Table Mode Input Selection  */
    uint32_t :2;                        /**< bit: 10..11  Reserved */
    uint32_t YUVMODE:4;                 /**< bit: 12..15  YUV Mode Input Selection                 */
    uint32_t YUV422ROT:1;               /**< bit:     16  YUV 4:2:2 Rotation                       */
    uint32_t YUV422SWP:1;               /**< bit:     17  YUV 4:2:2 Swap                           */
    uint32_t :2;                        /**< bit: 18..19  Reserved */
    uint32_t DSCALEOPT:1;               /**< bit:     20  Down Scaling Bandwidth Optimization      */
    uint32_t :11;                       /**< bit: 21..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG1_OFFSET                 (0x390)                                       /**<  (LCDC_HEOCFG1) High-End Overlay Configuration Register 1  Offset */

#define LCDC_HEOCFG1_CLUTEN_Pos             0                                              /**< (LCDC_HEOCFG1) Color Lookup Table Mode Enable Position */
#define LCDC_HEOCFG1_CLUTEN_Msk             (_U_(0x1) << LCDC_HEOCFG1_CLUTEN_Pos)          /**< (LCDC_HEOCFG1) Color Lookup Table Mode Enable Mask */
#define LCDC_HEOCFG1_CLUTEN                 LCDC_HEOCFG1_CLUTEN_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG1_CLUTEN_Msk instead */
#define LCDC_HEOCFG1_YUVEN_Pos              1                                              /**< (LCDC_HEOCFG1) YUV Color Space Enable Position */
#define LCDC_HEOCFG1_YUVEN_Msk              (_U_(0x1) << LCDC_HEOCFG1_YUVEN_Pos)           /**< (LCDC_HEOCFG1) YUV Color Space Enable Mask */
#define LCDC_HEOCFG1_YUVEN                  LCDC_HEOCFG1_YUVEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG1_YUVEN_Msk instead */
#define LCDC_HEOCFG1_RGBMODE_Pos            4                                              /**< (LCDC_HEOCFG1) RGB Mode Input Selection Position */
#define LCDC_HEOCFG1_RGBMODE_Msk            (_U_(0xF) << LCDC_HEOCFG1_RGBMODE_Pos)         /**< (LCDC_HEOCFG1) RGB Mode Input Selection Mask */
#define LCDC_HEOCFG1_RGBMODE(value)         (LCDC_HEOCFG1_RGBMODE_Msk & ((value) << LCDC_HEOCFG1_RGBMODE_Pos))
#define   LCDC_HEOCFG1_RGBMODE_12BPP_RGB_444_Val _U_(0x0)                                       /**< (LCDC_HEOCFG1) 12 bpp RGB 444  */
#define   LCDC_HEOCFG1_RGBMODE_16BPP_ARGB_4444_Val _U_(0x1)                                       /**< (LCDC_HEOCFG1) 16 bpp ARGB 4444  */
#define   LCDC_HEOCFG1_RGBMODE_16BPP_RGBA_4444_Val _U_(0x2)                                       /**< (LCDC_HEOCFG1) 16 bpp RGBA 4444  */
#define   LCDC_HEOCFG1_RGBMODE_16BPP_RGB_565_Val _U_(0x3)                                       /**< (LCDC_HEOCFG1) 16 bpp RGB 565  */
#define   LCDC_HEOCFG1_RGBMODE_16BPP_TRGB_1555_Val _U_(0x4)                                       /**< (LCDC_HEOCFG1) 16 bpp TRGB 1555  */
#define   LCDC_HEOCFG1_RGBMODE_18BPP_RGB_666_Val _U_(0x5)                                       /**< (LCDC_HEOCFG1) 18 bpp RGB 666  */
#define   LCDC_HEOCFG1_RGBMODE_18BPP_RGB_666PACKED_Val _U_(0x6)                                       /**< (LCDC_HEOCFG1) 18 bpp RGB 666 PACKED  */
#define   LCDC_HEOCFG1_RGBMODE_19BPP_TRGB_1666_Val _U_(0x7)                                       /**< (LCDC_HEOCFG1) 19 bpp TRGB 1666  */
#define   LCDC_HEOCFG1_RGBMODE_19BPP_TRGB_PACKED_Val _U_(0x8)                                       /**< (LCDC_HEOCFG1) 19 bpp TRGB 1666 PACKED  */
#define   LCDC_HEOCFG1_RGBMODE_24BPP_RGB_888_Val _U_(0x9)                                       /**< (LCDC_HEOCFG1) 24 bpp RGB 888  */
#define   LCDC_HEOCFG1_RGBMODE_24BPP_RGB_888_PACKED_Val _U_(0xA)                                       /**< (LCDC_HEOCFG1) 24 bpp RGB 888 PACKED  */
#define   LCDC_HEOCFG1_RGBMODE_25BPP_TRGB_1888_Val _U_(0xB)                                       /**< (LCDC_HEOCFG1) 25 bpp TRGB 1888  */
#define   LCDC_HEOCFG1_RGBMODE_32BPP_ARGB_8888_Val _U_(0xC)                                       /**< (LCDC_HEOCFG1) 32 bpp ARGB 8888  */
#define   LCDC_HEOCFG1_RGBMODE_32BPP_RGBA_8888_Val _U_(0xD)                                       /**< (LCDC_HEOCFG1) 32 bpp RGBA 8888  */
#define LCDC_HEOCFG1_RGBMODE_12BPP_RGB_444  (LCDC_HEOCFG1_RGBMODE_12BPP_RGB_444_Val << LCDC_HEOCFG1_RGBMODE_Pos)  /**< (LCDC_HEOCFG1) 12 bpp RGB 444 Position  */
#define LCDC_HEOCFG1_RGBMODE_16BPP_ARGB_4444 (LCDC_HEOCFG1_RGBMODE_16BPP_ARGB_4444_Val << LCDC_HEOCFG1_RGBMODE_Pos)  /**< (LCDC_HEOCFG1) 16 bpp ARGB 4444 Position  */
#define LCDC_HEOCFG1_RGBMODE_16BPP_RGBA_4444 (LCDC_HEOCFG1_RGBMODE_16BPP_RGBA_4444_Val << LCDC_HEOCFG1_RGBMODE_Pos)  /**< (LCDC_HEOCFG1) 16 bpp RGBA 4444 Position  */
#define LCDC_HEOCFG1_RGBMODE_16BPP_RGB_565  (LCDC_HEOCFG1_RGBMODE_16BPP_RGB_565_Val << LCDC_HEOCFG1_RGBMODE_Pos)  /**< (LCDC_HEOCFG1) 16 bpp RGB 565 Position  */
#define LCDC_HEOCFG1_RGBMODE_16BPP_TRGB_1555 (LCDC_HEOCFG1_RGBMODE_16BPP_TRGB_1555_Val << LCDC_HEOCFG1_RGBMODE_Pos)  /**< (LCDC_HEOCFG1) 16 bpp TRGB 1555 Position  */
#define LCDC_HEOCFG1_RGBMODE_18BPP_RGB_666  (LCDC_HEOCFG1_RGBMODE_18BPP_RGB_666_Val << LCDC_HEOCFG1_RGBMODE_Pos)  /**< (LCDC_HEOCFG1) 18 bpp RGB 666 Position  */
#define LCDC_HEOCFG1_RGBMODE_18BPP_RGB_666PACKED (LCDC_HEOCFG1_RGBMODE_18BPP_RGB_666PACKED_Val << LCDC_HEOCFG1_RGBMODE_Pos)  /**< (LCDC_HEOCFG1) 18 bpp RGB 666 PACKED Position  */
#define LCDC_HEOCFG1_RGBMODE_19BPP_TRGB_1666 (LCDC_HEOCFG1_RGBMODE_19BPP_TRGB_1666_Val << LCDC_HEOCFG1_RGBMODE_Pos)  /**< (LCDC_HEOCFG1) 19 bpp TRGB 1666 Position  */
#define LCDC_HEOCFG1_RGBMODE_19BPP_TRGB_PACKED (LCDC_HEOCFG1_RGBMODE_19BPP_TRGB_PACKED_Val << LCDC_HEOCFG1_RGBMODE_Pos)  /**< (LCDC_HEOCFG1) 19 bpp TRGB 1666 PACKED Position  */
#define LCDC_HEOCFG1_RGBMODE_24BPP_RGB_888  (LCDC_HEOCFG1_RGBMODE_24BPP_RGB_888_Val << LCDC_HEOCFG1_RGBMODE_Pos)  /**< (LCDC_HEOCFG1) 24 bpp RGB 888 Position  */
#define LCDC_HEOCFG1_RGBMODE_24BPP_RGB_888_PACKED (LCDC_HEOCFG1_RGBMODE_24BPP_RGB_888_PACKED_Val << LCDC_HEOCFG1_RGBMODE_Pos)  /**< (LCDC_HEOCFG1) 24 bpp RGB 888 PACKED Position  */
#define LCDC_HEOCFG1_RGBMODE_25BPP_TRGB_1888 (LCDC_HEOCFG1_RGBMODE_25BPP_TRGB_1888_Val << LCDC_HEOCFG1_RGBMODE_Pos)  /**< (LCDC_HEOCFG1) 25 bpp TRGB 1888 Position  */
#define LCDC_HEOCFG1_RGBMODE_32BPP_ARGB_8888 (LCDC_HEOCFG1_RGBMODE_32BPP_ARGB_8888_Val << LCDC_HEOCFG1_RGBMODE_Pos)  /**< (LCDC_HEOCFG1) 32 bpp ARGB 8888 Position  */
#define LCDC_HEOCFG1_RGBMODE_32BPP_RGBA_8888 (LCDC_HEOCFG1_RGBMODE_32BPP_RGBA_8888_Val << LCDC_HEOCFG1_RGBMODE_Pos)  /**< (LCDC_HEOCFG1) 32 bpp RGBA 8888 Position  */
#define LCDC_HEOCFG1_CLUTMODE_Pos           8                                              /**< (LCDC_HEOCFG1) Color Lookup Table Mode Input Selection Position */
#define LCDC_HEOCFG1_CLUTMODE_Msk           (_U_(0x3) << LCDC_HEOCFG1_CLUTMODE_Pos)        /**< (LCDC_HEOCFG1) Color Lookup Table Mode Input Selection Mask */
#define LCDC_HEOCFG1_CLUTMODE(value)        (LCDC_HEOCFG1_CLUTMODE_Msk & ((value) << LCDC_HEOCFG1_CLUTMODE_Pos))
#define   LCDC_HEOCFG1_CLUTMODE_CLUT_1BPP_Val _U_(0x0)                                       /**< (LCDC_HEOCFG1) Color Lookup Table mode set to 1 bit per pixel  */
#define   LCDC_HEOCFG1_CLUTMODE_CLUT_2BPP_Val _U_(0x1)                                       /**< (LCDC_HEOCFG1) Color Lookup Table mode set to 2 bits per pixel  */
#define   LCDC_HEOCFG1_CLUTMODE_CLUT_4BPP_Val _U_(0x2)                                       /**< (LCDC_HEOCFG1) Color Lookup Table mode set to 4 bits per pixel  */
#define   LCDC_HEOCFG1_CLUTMODE_CLUT_8BPP_Val _U_(0x3)                                       /**< (LCDC_HEOCFG1) Color Lookup Table mode set to 8 bits per pixel  */
#define LCDC_HEOCFG1_CLUTMODE_CLUT_1BPP     (LCDC_HEOCFG1_CLUTMODE_CLUT_1BPP_Val << LCDC_HEOCFG1_CLUTMODE_Pos)  /**< (LCDC_HEOCFG1) Color Lookup Table mode set to 1 bit per pixel Position  */
#define LCDC_HEOCFG1_CLUTMODE_CLUT_2BPP     (LCDC_HEOCFG1_CLUTMODE_CLUT_2BPP_Val << LCDC_HEOCFG1_CLUTMODE_Pos)  /**< (LCDC_HEOCFG1) Color Lookup Table mode set to 2 bits per pixel Position  */
#define LCDC_HEOCFG1_CLUTMODE_CLUT_4BPP     (LCDC_HEOCFG1_CLUTMODE_CLUT_4BPP_Val << LCDC_HEOCFG1_CLUTMODE_Pos)  /**< (LCDC_HEOCFG1) Color Lookup Table mode set to 4 bits per pixel Position  */
#define LCDC_HEOCFG1_CLUTMODE_CLUT_8BPP     (LCDC_HEOCFG1_CLUTMODE_CLUT_8BPP_Val << LCDC_HEOCFG1_CLUTMODE_Pos)  /**< (LCDC_HEOCFG1) Color Lookup Table mode set to 8 bits per pixel Position  */
#define LCDC_HEOCFG1_YUVMODE_Pos            12                                             /**< (LCDC_HEOCFG1) YUV Mode Input Selection Position */
#define LCDC_HEOCFG1_YUVMODE_Msk            (_U_(0xF) << LCDC_HEOCFG1_YUVMODE_Pos)         /**< (LCDC_HEOCFG1) YUV Mode Input Selection Mask */
#define LCDC_HEOCFG1_YUVMODE(value)         (LCDC_HEOCFG1_YUVMODE_Msk & ((value) << LCDC_HEOCFG1_YUVMODE_Pos))
#define LCDC_HEOCFG1_YUV422ROT_Pos          16                                             /**< (LCDC_HEOCFG1) YUV 4:2:2 Rotation Position */
#define LCDC_HEOCFG1_YUV422ROT_Msk          (_U_(0x1) << LCDC_HEOCFG1_YUV422ROT_Pos)       /**< (LCDC_HEOCFG1) YUV 4:2:2 Rotation Mask */
#define LCDC_HEOCFG1_YUV422ROT              LCDC_HEOCFG1_YUV422ROT_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG1_YUV422ROT_Msk instead */
#define LCDC_HEOCFG1_YUV422SWP_Pos          17                                             /**< (LCDC_HEOCFG1) YUV 4:2:2 Swap Position */
#define LCDC_HEOCFG1_YUV422SWP_Msk          (_U_(0x1) << LCDC_HEOCFG1_YUV422SWP_Pos)       /**< (LCDC_HEOCFG1) YUV 4:2:2 Swap Mask */
#define LCDC_HEOCFG1_YUV422SWP              LCDC_HEOCFG1_YUV422SWP_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG1_YUV422SWP_Msk instead */
#define LCDC_HEOCFG1_DSCALEOPT_Pos          20                                             /**< (LCDC_HEOCFG1) Down Scaling Bandwidth Optimization Position */
#define LCDC_HEOCFG1_DSCALEOPT_Msk          (_U_(0x1) << LCDC_HEOCFG1_DSCALEOPT_Pos)       /**< (LCDC_HEOCFG1) Down Scaling Bandwidth Optimization Mask */
#define LCDC_HEOCFG1_DSCALEOPT              LCDC_HEOCFG1_DSCALEOPT_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG1_DSCALEOPT_Msk instead */
#define LCDC_HEOCFG1_MASK                   _U_(0x13F3F3)                                  /**< \deprecated (LCDC_HEOCFG1) Register MASK  (Use LCDC_HEOCFG1_Msk instead)  */
#define LCDC_HEOCFG1_Msk                    _U_(0x13F3F3)                                  /**< (LCDC_HEOCFG1) Register Mask  */


/* -------- LCDC_HEOCFG2 : (LCDC Offset: 0x394) (R/W 32) High-End Overlay Configuration Register 2 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XPOS:11;                   /**< bit:  0..10  Horizontal Window Position               */
    uint32_t :5;                        /**< bit: 11..15  Reserved */
    uint32_t YPOS:11;                   /**< bit: 16..26  Vertical Window Position                 */
    uint32_t :5;                        /**< bit: 27..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG2_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG2_OFFSET                 (0x394)                                       /**<  (LCDC_HEOCFG2) High-End Overlay Configuration Register 2  Offset */

#define LCDC_HEOCFG2_XPOS_Pos               0                                              /**< (LCDC_HEOCFG2) Horizontal Window Position Position */
#define LCDC_HEOCFG2_XPOS_Msk               (_U_(0x7FF) << LCDC_HEOCFG2_XPOS_Pos)          /**< (LCDC_HEOCFG2) Horizontal Window Position Mask */
#define LCDC_HEOCFG2_XPOS(value)            (LCDC_HEOCFG2_XPOS_Msk & ((value) << LCDC_HEOCFG2_XPOS_Pos))
#define LCDC_HEOCFG2_YPOS_Pos               16                                             /**< (LCDC_HEOCFG2) Vertical Window Position Position */
#define LCDC_HEOCFG2_YPOS_Msk               (_U_(0x7FF) << LCDC_HEOCFG2_YPOS_Pos)          /**< (LCDC_HEOCFG2) Vertical Window Position Mask */
#define LCDC_HEOCFG2_YPOS(value)            (LCDC_HEOCFG2_YPOS_Msk & ((value) << LCDC_HEOCFG2_YPOS_Pos))
#define LCDC_HEOCFG2_MASK                   _U_(0x7FF07FF)                                 /**< \deprecated (LCDC_HEOCFG2) Register MASK  (Use LCDC_HEOCFG2_Msk instead)  */
#define LCDC_HEOCFG2_Msk                    _U_(0x7FF07FF)                                 /**< (LCDC_HEOCFG2) Register Mask  */


/* -------- LCDC_HEOCFG3 : (LCDC Offset: 0x398) (R/W 32) High-End Overlay Configuration Register 3 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XSIZE:11;                  /**< bit:  0..10  Horizontal Window Size                   */
    uint32_t :5;                        /**< bit: 11..15  Reserved */
    uint32_t YSIZE:11;                  /**< bit: 16..26  Vertical Window Size                     */
    uint32_t :5;                        /**< bit: 27..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG3_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG3_OFFSET                 (0x398)                                       /**<  (LCDC_HEOCFG3) High-End Overlay Configuration Register 3  Offset */

#define LCDC_HEOCFG3_XSIZE_Pos              0                                              /**< (LCDC_HEOCFG3) Horizontal Window Size Position */
#define LCDC_HEOCFG3_XSIZE_Msk              (_U_(0x7FF) << LCDC_HEOCFG3_XSIZE_Pos)         /**< (LCDC_HEOCFG3) Horizontal Window Size Mask */
#define LCDC_HEOCFG3_XSIZE(value)           (LCDC_HEOCFG3_XSIZE_Msk & ((value) << LCDC_HEOCFG3_XSIZE_Pos))
#define LCDC_HEOCFG3_YSIZE_Pos              16                                             /**< (LCDC_HEOCFG3) Vertical Window Size Position */
#define LCDC_HEOCFG3_YSIZE_Msk              (_U_(0x7FF) << LCDC_HEOCFG3_YSIZE_Pos)         /**< (LCDC_HEOCFG3) Vertical Window Size Mask */
#define LCDC_HEOCFG3_YSIZE(value)           (LCDC_HEOCFG3_YSIZE_Msk & ((value) << LCDC_HEOCFG3_YSIZE_Pos))
#define LCDC_HEOCFG3_MASK                   _U_(0x7FF07FF)                                 /**< \deprecated (LCDC_HEOCFG3) Register MASK  (Use LCDC_HEOCFG3_Msk instead)  */
#define LCDC_HEOCFG3_Msk                    _U_(0x7FF07FF)                                 /**< (LCDC_HEOCFG3) Register Mask  */


/* -------- LCDC_HEOCFG4 : (LCDC Offset: 0x39c) (R/W 32) High-End Overlay Configuration Register 4 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XMEMSIZE:11;               /**< bit:  0..10  Horizontal image Size in Memory          */
    uint32_t :5;                        /**< bit: 11..15  Reserved */
    uint32_t YMEMSIZE:11;               /**< bit: 16..26  Vertical image Size in Memory            */
    uint32_t :5;                        /**< bit: 27..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG4_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG4_OFFSET                 (0x39C)                                       /**<  (LCDC_HEOCFG4) High-End Overlay Configuration Register 4  Offset */

#define LCDC_HEOCFG4_XMEMSIZE_Pos           0                                              /**< (LCDC_HEOCFG4) Horizontal image Size in Memory Position */
#define LCDC_HEOCFG4_XMEMSIZE_Msk           (_U_(0x7FF) << LCDC_HEOCFG4_XMEMSIZE_Pos)      /**< (LCDC_HEOCFG4) Horizontal image Size in Memory Mask */
#define LCDC_HEOCFG4_XMEMSIZE(value)        (LCDC_HEOCFG4_XMEMSIZE_Msk & ((value) << LCDC_HEOCFG4_XMEMSIZE_Pos))
#define LCDC_HEOCFG4_YMEMSIZE_Pos           16                                             /**< (LCDC_HEOCFG4) Vertical image Size in Memory Position */
#define LCDC_HEOCFG4_YMEMSIZE_Msk           (_U_(0x7FF) << LCDC_HEOCFG4_YMEMSIZE_Pos)      /**< (LCDC_HEOCFG4) Vertical image Size in Memory Mask */
#define LCDC_HEOCFG4_YMEMSIZE(value)        (LCDC_HEOCFG4_YMEMSIZE_Msk & ((value) << LCDC_HEOCFG4_YMEMSIZE_Pos))
#define LCDC_HEOCFG4_MASK                   _U_(0x7FF07FF)                                 /**< \deprecated (LCDC_HEOCFG4) Register MASK  (Use LCDC_HEOCFG4_Msk instead)  */
#define LCDC_HEOCFG4_Msk                    _U_(0x7FF07FF)                                 /**< (LCDC_HEOCFG4) Register Mask  */


/* -------- LCDC_HEOCFG5 : (LCDC Offset: 0x3a0) (R/W 32) High-End Overlay Configuration Register 5 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XSTRIDE:32;                /**< bit:  0..31  Horizontal Stride                        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG5_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG5_OFFSET                 (0x3A0)                                       /**<  (LCDC_HEOCFG5) High-End Overlay Configuration Register 5  Offset */

#define LCDC_HEOCFG5_XSTRIDE_Pos            0                                              /**< (LCDC_HEOCFG5) Horizontal Stride Position */
#define LCDC_HEOCFG5_XSTRIDE_Msk            (_U_(0xFFFFFFFF) << LCDC_HEOCFG5_XSTRIDE_Pos)  /**< (LCDC_HEOCFG5) Horizontal Stride Mask */
#define LCDC_HEOCFG5_XSTRIDE(value)         (LCDC_HEOCFG5_XSTRIDE_Msk & ((value) << LCDC_HEOCFG5_XSTRIDE_Pos))
#define LCDC_HEOCFG5_MASK                   _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_HEOCFG5) Register MASK  (Use LCDC_HEOCFG5_Msk instead)  */
#define LCDC_HEOCFG5_Msk                    _U_(0xFFFFFFFF)                                /**< (LCDC_HEOCFG5) Register Mask  */


/* -------- LCDC_HEOCFG6 : (LCDC Offset: 0x3a4) (R/W 32) High-End Overlay Configuration Register 6 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PSTRIDE:32;                /**< bit:  0..31  Pixel Stride                             */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG6_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG6_OFFSET                 (0x3A4)                                       /**<  (LCDC_HEOCFG6) High-End Overlay Configuration Register 6  Offset */

#define LCDC_HEOCFG6_PSTRIDE_Pos            0                                              /**< (LCDC_HEOCFG6) Pixel Stride Position */
#define LCDC_HEOCFG6_PSTRIDE_Msk            (_U_(0xFFFFFFFF) << LCDC_HEOCFG6_PSTRIDE_Pos)  /**< (LCDC_HEOCFG6) Pixel Stride Mask */
#define LCDC_HEOCFG6_PSTRIDE(value)         (LCDC_HEOCFG6_PSTRIDE_Msk & ((value) << LCDC_HEOCFG6_PSTRIDE_Pos))
#define LCDC_HEOCFG6_MASK                   _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_HEOCFG6) Register MASK  (Use LCDC_HEOCFG6_Msk instead)  */
#define LCDC_HEOCFG6_Msk                    _U_(0xFFFFFFFF)                                /**< (LCDC_HEOCFG6) Register Mask  */


/* -------- LCDC_HEOCFG7 : (LCDC Offset: 0x3a8) (R/W 32) High-End Overlay Configuration Register 7 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t UVXSTRIDE:32;              /**< bit:  0..31  UV Horizontal Stride                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG7_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG7_OFFSET                 (0x3A8)                                       /**<  (LCDC_HEOCFG7) High-End Overlay Configuration Register 7  Offset */

#define LCDC_HEOCFG7_UVXSTRIDE_Pos          0                                              /**< (LCDC_HEOCFG7) UV Horizontal Stride Position */
#define LCDC_HEOCFG7_UVXSTRIDE_Msk          (_U_(0xFFFFFFFF) << LCDC_HEOCFG7_UVXSTRIDE_Pos)  /**< (LCDC_HEOCFG7) UV Horizontal Stride Mask */
#define LCDC_HEOCFG7_UVXSTRIDE(value)       (LCDC_HEOCFG7_UVXSTRIDE_Msk & ((value) << LCDC_HEOCFG7_UVXSTRIDE_Pos))
#define LCDC_HEOCFG7_MASK                   _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_HEOCFG7) Register MASK  (Use LCDC_HEOCFG7_Msk instead)  */
#define LCDC_HEOCFG7_Msk                    _U_(0xFFFFFFFF)                                /**< (LCDC_HEOCFG7) Register Mask  */


/* -------- LCDC_HEOCFG8 : (LCDC Offset: 0x3ac) (R/W 32) High-End Overlay Configuration Register 8 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t UVPSTRIDE:32;              /**< bit:  0..31  UV Pixel Stride                          */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG8_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG8_OFFSET                 (0x3AC)                                       /**<  (LCDC_HEOCFG8) High-End Overlay Configuration Register 8  Offset */

#define LCDC_HEOCFG8_UVPSTRIDE_Pos          0                                              /**< (LCDC_HEOCFG8) UV Pixel Stride Position */
#define LCDC_HEOCFG8_UVPSTRIDE_Msk          (_U_(0xFFFFFFFF) << LCDC_HEOCFG8_UVPSTRIDE_Pos)  /**< (LCDC_HEOCFG8) UV Pixel Stride Mask */
#define LCDC_HEOCFG8_UVPSTRIDE(value)       (LCDC_HEOCFG8_UVPSTRIDE_Msk & ((value) << LCDC_HEOCFG8_UVPSTRIDE_Pos))
#define LCDC_HEOCFG8_MASK                   _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_HEOCFG8) Register MASK  (Use LCDC_HEOCFG8_Msk instead)  */
#define LCDC_HEOCFG8_Msk                    _U_(0xFFFFFFFF)                                /**< (LCDC_HEOCFG8) Register Mask  */


/* -------- LCDC_HEOCFG9 : (LCDC Offset: 0x3b0) (R/W 32) High-End Overlay Configuration Register 9 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BDEF:8;                    /**< bit:   0..7  Blue Default                             */
    uint32_t GDEF:8;                    /**< bit:  8..15  Green Default                            */
    uint32_t RDEF:8;                    /**< bit: 16..23  Red Default                              */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG9_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG9_OFFSET                 (0x3B0)                                       /**<  (LCDC_HEOCFG9) High-End Overlay Configuration Register 9  Offset */

#define LCDC_HEOCFG9_BDEF_Pos               0                                              /**< (LCDC_HEOCFG9) Blue Default Position */
#define LCDC_HEOCFG9_BDEF_Msk               (_U_(0xFF) << LCDC_HEOCFG9_BDEF_Pos)           /**< (LCDC_HEOCFG9) Blue Default Mask */
#define LCDC_HEOCFG9_BDEF(value)            (LCDC_HEOCFG9_BDEF_Msk & ((value) << LCDC_HEOCFG9_BDEF_Pos))
#define LCDC_HEOCFG9_GDEF_Pos               8                                              /**< (LCDC_HEOCFG9) Green Default Position */
#define LCDC_HEOCFG9_GDEF_Msk               (_U_(0xFF) << LCDC_HEOCFG9_GDEF_Pos)           /**< (LCDC_HEOCFG9) Green Default Mask */
#define LCDC_HEOCFG9_GDEF(value)            (LCDC_HEOCFG9_GDEF_Msk & ((value) << LCDC_HEOCFG9_GDEF_Pos))
#define LCDC_HEOCFG9_RDEF_Pos               16                                             /**< (LCDC_HEOCFG9) Red Default Position */
#define LCDC_HEOCFG9_RDEF_Msk               (_U_(0xFF) << LCDC_HEOCFG9_RDEF_Pos)           /**< (LCDC_HEOCFG9) Red Default Mask */
#define LCDC_HEOCFG9_RDEF(value)            (LCDC_HEOCFG9_RDEF_Msk & ((value) << LCDC_HEOCFG9_RDEF_Pos))
#define LCDC_HEOCFG9_MASK                   _U_(0xFFFFFF)                                  /**< \deprecated (LCDC_HEOCFG9) Register MASK  (Use LCDC_HEOCFG9_Msk instead)  */
#define LCDC_HEOCFG9_Msk                    _U_(0xFFFFFF)                                  /**< (LCDC_HEOCFG9) Register Mask  */


/* -------- LCDC_HEOCFG10 : (LCDC Offset: 0x3b4) (R/W 32) High-End Overlay Configuration Register 10 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BKEY:8;                    /**< bit:   0..7  Blue Color Component Chroma Key          */
    uint32_t GKEY:8;                    /**< bit:  8..15  Green Color Component Chroma Key         */
    uint32_t RKEY:8;                    /**< bit: 16..23  Red Color Component Chroma Key           */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG10_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG10_OFFSET                (0x3B4)                                       /**<  (LCDC_HEOCFG10) High-End Overlay Configuration Register 10  Offset */

#define LCDC_HEOCFG10_BKEY_Pos              0                                              /**< (LCDC_HEOCFG10) Blue Color Component Chroma Key Position */
#define LCDC_HEOCFG10_BKEY_Msk              (_U_(0xFF) << LCDC_HEOCFG10_BKEY_Pos)          /**< (LCDC_HEOCFG10) Blue Color Component Chroma Key Mask */
#define LCDC_HEOCFG10_BKEY(value)           (LCDC_HEOCFG10_BKEY_Msk & ((value) << LCDC_HEOCFG10_BKEY_Pos))
#define LCDC_HEOCFG10_GKEY_Pos              8                                              /**< (LCDC_HEOCFG10) Green Color Component Chroma Key Position */
#define LCDC_HEOCFG10_GKEY_Msk              (_U_(0xFF) << LCDC_HEOCFG10_GKEY_Pos)          /**< (LCDC_HEOCFG10) Green Color Component Chroma Key Mask */
#define LCDC_HEOCFG10_GKEY(value)           (LCDC_HEOCFG10_GKEY_Msk & ((value) << LCDC_HEOCFG10_GKEY_Pos))
#define LCDC_HEOCFG10_RKEY_Pos              16                                             /**< (LCDC_HEOCFG10) Red Color Component Chroma Key Position */
#define LCDC_HEOCFG10_RKEY_Msk              (_U_(0xFF) << LCDC_HEOCFG10_RKEY_Pos)          /**< (LCDC_HEOCFG10) Red Color Component Chroma Key Mask */
#define LCDC_HEOCFG10_RKEY(value)           (LCDC_HEOCFG10_RKEY_Msk & ((value) << LCDC_HEOCFG10_RKEY_Pos))
#define LCDC_HEOCFG10_MASK                  _U_(0xFFFFFF)                                  /**< \deprecated (LCDC_HEOCFG10) Register MASK  (Use LCDC_HEOCFG10_Msk instead)  */
#define LCDC_HEOCFG10_Msk                   _U_(0xFFFFFF)                                  /**< (LCDC_HEOCFG10) Register Mask  */


/* -------- LCDC_HEOCFG11 : (LCDC Offset: 0x3b8) (R/W 32) High-End Overlay Configuration Register 11 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BMASK:8;                   /**< bit:   0..7  Blue Color Component Chroma Key Mask     */
    uint32_t GMASK:8;                   /**< bit:  8..15  Green Color Component Chroma Key Mask    */
    uint32_t RMASK:8;                   /**< bit: 16..23  Red Color Component Chroma Key Mask      */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG11_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG11_OFFSET                (0x3B8)                                       /**<  (LCDC_HEOCFG11) High-End Overlay Configuration Register 11  Offset */

#define LCDC_HEOCFG11_BMASK_Pos             0                                              /**< (LCDC_HEOCFG11) Blue Color Component Chroma Key Mask Position */
#define LCDC_HEOCFG11_BMASK_Msk             (_U_(0xFF) << LCDC_HEOCFG11_BMASK_Pos)         /**< (LCDC_HEOCFG11) Blue Color Component Chroma Key Mask Mask */
#define LCDC_HEOCFG11_BMASK(value)          (LCDC_HEOCFG11_BMASK_Msk & ((value) << LCDC_HEOCFG11_BMASK_Pos))
#define LCDC_HEOCFG11_GMASK_Pos             8                                              /**< (LCDC_HEOCFG11) Green Color Component Chroma Key Mask Position */
#define LCDC_HEOCFG11_GMASK_Msk             (_U_(0xFF) << LCDC_HEOCFG11_GMASK_Pos)         /**< (LCDC_HEOCFG11) Green Color Component Chroma Key Mask Mask */
#define LCDC_HEOCFG11_GMASK(value)          (LCDC_HEOCFG11_GMASK_Msk & ((value) << LCDC_HEOCFG11_GMASK_Pos))
#define LCDC_HEOCFG11_RMASK_Pos             16                                             /**< (LCDC_HEOCFG11) Red Color Component Chroma Key Mask Position */
#define LCDC_HEOCFG11_RMASK_Msk             (_U_(0xFF) << LCDC_HEOCFG11_RMASK_Pos)         /**< (LCDC_HEOCFG11) Red Color Component Chroma Key Mask Mask */
#define LCDC_HEOCFG11_RMASK(value)          (LCDC_HEOCFG11_RMASK_Msk & ((value) << LCDC_HEOCFG11_RMASK_Pos))
#define LCDC_HEOCFG11_Msk                   _U_(0xFFFFFF)                                  /**< (LCDC_HEOCFG11) Register Mask  */


/* -------- LCDC_HEOCFG12 : (LCDC Offset: 0x3bc) (R/W 32) High-End Overlay Configuration Register 12 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CRKEY:1;                   /**< bit:      0  Blender Chroma Key Enable                */
    uint32_t INV:1;                     /**< bit:      1  Blender Inverted Blender Output Enable   */
    uint32_t ITER2BL:1;                 /**< bit:      2  Blender Iterated Color Enable            */
    uint32_t ITER:1;                    /**< bit:      3  Blender Use Iterated Color               */
    uint32_t REVALPHA:1;                /**< bit:      4  Blender Reverse Alpha                    */
    uint32_t GAEN:1;                    /**< bit:      5  Blender Global Alpha Enable              */
    uint32_t LAEN:1;                    /**< bit:      6  Blender Local Alpha Enable               */
    uint32_t OVR:1;                     /**< bit:      7  Blender Overlay Layer Enable             */
    uint32_t DMA:1;                     /**< bit:      8  Blender DMA Layer Enable                 */
    uint32_t REP:1;                     /**< bit:      9  Use Replication logic to expand RGB color to 24 bits */
    uint32_t DSTKEY:1;                  /**< bit:     10  Destination Chroma Keying                */
    uint32_t :1;                        /**< bit:     11  Reserved */
    uint32_t VIDPRI:1;                  /**< bit:     12  Video Priority                           */
    uint32_t :3;                        /**< bit: 13..15  Reserved */
    uint32_t GA:8;                      /**< bit: 16..23  Blender Global Alpha                     */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG12_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG12_OFFSET                (0x3BC)                                       /**<  (LCDC_HEOCFG12) High-End Overlay Configuration Register 12  Offset */

#define LCDC_HEOCFG12_CRKEY_Pos             0                                              /**< (LCDC_HEOCFG12) Blender Chroma Key Enable Position */
#define LCDC_HEOCFG12_CRKEY_Msk             (_U_(0x1) << LCDC_HEOCFG12_CRKEY_Pos)          /**< (LCDC_HEOCFG12) Blender Chroma Key Enable Mask */
#define LCDC_HEOCFG12_CRKEY                 LCDC_HEOCFG12_CRKEY_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG12_CRKEY_Msk instead */
#define LCDC_HEOCFG12_INV_Pos               1                                              /**< (LCDC_HEOCFG12) Blender Inverted Blender Output Enable Position */
#define LCDC_HEOCFG12_INV_Msk               (_U_(0x1) << LCDC_HEOCFG12_INV_Pos)            /**< (LCDC_HEOCFG12) Blender Inverted Blender Output Enable Mask */
#define LCDC_HEOCFG12_INV                   LCDC_HEOCFG12_INV_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG12_INV_Msk instead */
#define LCDC_HEOCFG12_ITER2BL_Pos           2                                              /**< (LCDC_HEOCFG12) Blender Iterated Color Enable Position */
#define LCDC_HEOCFG12_ITER2BL_Msk           (_U_(0x1) << LCDC_HEOCFG12_ITER2BL_Pos)        /**< (LCDC_HEOCFG12) Blender Iterated Color Enable Mask */
#define LCDC_HEOCFG12_ITER2BL               LCDC_HEOCFG12_ITER2BL_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG12_ITER2BL_Msk instead */
#define LCDC_HEOCFG12_ITER_Pos              3                                              /**< (LCDC_HEOCFG12) Blender Use Iterated Color Position */
#define LCDC_HEOCFG12_ITER_Msk              (_U_(0x1) << LCDC_HEOCFG12_ITER_Pos)           /**< (LCDC_HEOCFG12) Blender Use Iterated Color Mask */
#define LCDC_HEOCFG12_ITER                  LCDC_HEOCFG12_ITER_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG12_ITER_Msk instead */
#define LCDC_HEOCFG12_REVALPHA_Pos          4                                              /**< (LCDC_HEOCFG12) Blender Reverse Alpha Position */
#define LCDC_HEOCFG12_REVALPHA_Msk          (_U_(0x1) << LCDC_HEOCFG12_REVALPHA_Pos)       /**< (LCDC_HEOCFG12) Blender Reverse Alpha Mask */
#define LCDC_HEOCFG12_REVALPHA              LCDC_HEOCFG12_REVALPHA_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG12_REVALPHA_Msk instead */
#define LCDC_HEOCFG12_GAEN_Pos              5                                              /**< (LCDC_HEOCFG12) Blender Global Alpha Enable Position */
#define LCDC_HEOCFG12_GAEN_Msk              (_U_(0x1) << LCDC_HEOCFG12_GAEN_Pos)           /**< (LCDC_HEOCFG12) Blender Global Alpha Enable Mask */
#define LCDC_HEOCFG12_GAEN                  LCDC_HEOCFG12_GAEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG12_GAEN_Msk instead */
#define LCDC_HEOCFG12_LAEN_Pos              6                                              /**< (LCDC_HEOCFG12) Blender Local Alpha Enable Position */
#define LCDC_HEOCFG12_LAEN_Msk              (_U_(0x1) << LCDC_HEOCFG12_LAEN_Pos)           /**< (LCDC_HEOCFG12) Blender Local Alpha Enable Mask */
#define LCDC_HEOCFG12_LAEN                  LCDC_HEOCFG12_LAEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG12_LAEN_Msk instead */
#define LCDC_HEOCFG12_OVR_Pos               7                                              /**< (LCDC_HEOCFG12) Blender Overlay Layer Enable Position */
#define LCDC_HEOCFG12_OVR_Msk               (_U_(0x1) << LCDC_HEOCFG12_OVR_Pos)            /**< (LCDC_HEOCFG12) Blender Overlay Layer Enable Mask */
#define LCDC_HEOCFG12_OVR                   LCDC_HEOCFG12_OVR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG12_OVR_Msk instead */
#define LCDC_HEOCFG12_DMA_Pos               8                                              /**< (LCDC_HEOCFG12) Blender DMA Layer Enable Position */
#define LCDC_HEOCFG12_DMA_Msk               (_U_(0x1) << LCDC_HEOCFG12_DMA_Pos)            /**< (LCDC_HEOCFG12) Blender DMA Layer Enable Mask */
#define LCDC_HEOCFG12_DMA                   LCDC_HEOCFG12_DMA_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG12_DMA_Msk instead */
#define LCDC_HEOCFG12_REP_Pos               9                                              /**< (LCDC_HEOCFG12) Use Replication logic to expand RGB color to 24 bits Position */
#define LCDC_HEOCFG12_REP_Msk               (_U_(0x1) << LCDC_HEOCFG12_REP_Pos)            /**< (LCDC_HEOCFG12) Use Replication logic to expand RGB color to 24 bits Mask */
#define LCDC_HEOCFG12_REP                   LCDC_HEOCFG12_REP_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG12_REP_Msk instead */
#define LCDC_HEOCFG12_DSTKEY_Pos            10                                             /**< (LCDC_HEOCFG12) Destination Chroma Keying Position */
#define LCDC_HEOCFG12_DSTKEY_Msk            (_U_(0x1) << LCDC_HEOCFG12_DSTKEY_Pos)         /**< (LCDC_HEOCFG12) Destination Chroma Keying Mask */
#define LCDC_HEOCFG12_DSTKEY                LCDC_HEOCFG12_DSTKEY_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG12_DSTKEY_Msk instead */
#define LCDC_HEOCFG12_VIDPRI_Pos            12                                             /**< (LCDC_HEOCFG12) Video Priority Position */
#define LCDC_HEOCFG12_VIDPRI_Msk            (_U_(0x1) << LCDC_HEOCFG12_VIDPRI_Pos)         /**< (LCDC_HEOCFG12) Video Priority Mask */
#define LCDC_HEOCFG12_VIDPRI                LCDC_HEOCFG12_VIDPRI_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG12_VIDPRI_Msk instead */
#define LCDC_HEOCFG12_GA_Pos                16                                             /**< (LCDC_HEOCFG12) Blender Global Alpha Position */
#define LCDC_HEOCFG12_GA_Msk                (_U_(0xFF) << LCDC_HEOCFG12_GA_Pos)            /**< (LCDC_HEOCFG12) Blender Global Alpha Mask */
#define LCDC_HEOCFG12_GA(value)             (LCDC_HEOCFG12_GA_Msk & ((value) << LCDC_HEOCFG12_GA_Pos))
#define LCDC_HEOCFG12_MASK                  _U_(0xFF17FF)                                  /**< \deprecated (LCDC_HEOCFG12) Register MASK  (Use LCDC_HEOCFG12_Msk instead)  */
#define LCDC_HEOCFG12_Msk                   _U_(0xFF17FF)                                  /**< (LCDC_HEOCFG12) Register Mask  */


/* -------- LCDC_HEOCFG13 : (LCDC Offset: 0x3c0) (R/W 32) High-End Overlay Configuration Register 13 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XFACTOR:14;                /**< bit:  0..13  Horizontal Scaling Factor                */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t YFACTOR:14;                /**< bit: 16..29  Vertical Scaling Factor                  */
    uint32_t :1;                        /**< bit:     30  Reserved */
    uint32_t SCALEN:1;                  /**< bit:     31  Hardware Scaler Enable                   */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG13_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG13_OFFSET                (0x3C0)                                       /**<  (LCDC_HEOCFG13) High-End Overlay Configuration Register 13  Offset */

#define LCDC_HEOCFG13_XFACTOR_Pos           0                                              /**< (LCDC_HEOCFG13) Horizontal Scaling Factor Position */
#define LCDC_HEOCFG13_XFACTOR_Msk           (_U_(0x3FFF) << LCDC_HEOCFG13_XFACTOR_Pos)     /**< (LCDC_HEOCFG13) Horizontal Scaling Factor Mask */
#define LCDC_HEOCFG13_XFACTOR(value)        (LCDC_HEOCFG13_XFACTOR_Msk & ((value) << LCDC_HEOCFG13_XFACTOR_Pos))
#define LCDC_HEOCFG13_YFACTOR_Pos           16                                             /**< (LCDC_HEOCFG13) Vertical Scaling Factor Position */
#define LCDC_HEOCFG13_YFACTOR_Msk           (_U_(0x3FFF) << LCDC_HEOCFG13_YFACTOR_Pos)     /**< (LCDC_HEOCFG13) Vertical Scaling Factor Mask */
#define LCDC_HEOCFG13_YFACTOR(value)        (LCDC_HEOCFG13_YFACTOR_Msk & ((value) << LCDC_HEOCFG13_YFACTOR_Pos))
#define LCDC_HEOCFG13_SCALEN_Pos            31                                             /**< (LCDC_HEOCFG13) Hardware Scaler Enable Position */
#define LCDC_HEOCFG13_SCALEN_Msk            (_U_(0x1) << LCDC_HEOCFG13_SCALEN_Pos)         /**< (LCDC_HEOCFG13) Hardware Scaler Enable Mask */
#define LCDC_HEOCFG13_SCALEN                LCDC_HEOCFG13_SCALEN_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG13_SCALEN_Msk instead */
#define LCDC_HEOCFG13_MASK                  _U_(0xBFFF3FFF)                                /**< \deprecated (LCDC_HEOCFG13) Register MASK  (Use LCDC_HEOCFG13_Msk instead)  */
#define LCDC_HEOCFG13_Msk                   _U_(0xBFFF3FFF)                                /**< (LCDC_HEOCFG13) Register Mask  */


/* -------- LCDC_HEOCFG14 : (LCDC Offset: 0x3c4) (R/W 32) High-End Overlay Configuration Register 14 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CSCRY:10;                  /**< bit:   0..9  Color Space Conversion Y coefficient for Red Component 1:2:7 format */
    uint32_t CSCRU:10;                  /**< bit: 10..19  Color Space Conversion U coefficient for Red Component 1:2:7 format */
    uint32_t CSCRV:10;                  /**< bit: 20..29  Color Space Conversion V coefficient for Red Component 1:2:7 format */
    uint32_t CSCYOFF:1;                 /**< bit:     30  Color Space Conversion Offset            */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG14_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG14_OFFSET                (0x3C4)                                       /**<  (LCDC_HEOCFG14) High-End Overlay Configuration Register 14  Offset */

#define LCDC_HEOCFG14_CSCRY_Pos             0                                              /**< (LCDC_HEOCFG14) Color Space Conversion Y coefficient for Red Component 1:2:7 format Position */
#define LCDC_HEOCFG14_CSCRY_Msk             (_U_(0x3FF) << LCDC_HEOCFG14_CSCRY_Pos)        /**< (LCDC_HEOCFG14) Color Space Conversion Y coefficient for Red Component 1:2:7 format Mask */
#define LCDC_HEOCFG14_CSCRY(value)          (LCDC_HEOCFG14_CSCRY_Msk & ((value) << LCDC_HEOCFG14_CSCRY_Pos))
#define LCDC_HEOCFG14_CSCRU_Pos             10                                             /**< (LCDC_HEOCFG14) Color Space Conversion U coefficient for Red Component 1:2:7 format Position */
#define LCDC_HEOCFG14_CSCRU_Msk             (_U_(0x3FF) << LCDC_HEOCFG14_CSCRU_Pos)        /**< (LCDC_HEOCFG14) Color Space Conversion U coefficient for Red Component 1:2:7 format Mask */
#define LCDC_HEOCFG14_CSCRU(value)          (LCDC_HEOCFG14_CSCRU_Msk & ((value) << LCDC_HEOCFG14_CSCRU_Pos))
#define LCDC_HEOCFG14_CSCRV_Pos             20                                             /**< (LCDC_HEOCFG14) Color Space Conversion V coefficient for Red Component 1:2:7 format Position */
#define LCDC_HEOCFG14_CSCRV_Msk             (_U_(0x3FF) << LCDC_HEOCFG14_CSCRV_Pos)        /**< (LCDC_HEOCFG14) Color Space Conversion V coefficient for Red Component 1:2:7 format Mask */
#define LCDC_HEOCFG14_CSCRV(value)          (LCDC_HEOCFG14_CSCRV_Msk & ((value) << LCDC_HEOCFG14_CSCRV_Pos))
#define LCDC_HEOCFG14_CSCYOFF_Pos           30                                             /**< (LCDC_HEOCFG14) Color Space Conversion Offset Position */
#define LCDC_HEOCFG14_CSCYOFF_Msk           (_U_(0x1) << LCDC_HEOCFG14_CSCYOFF_Pos)        /**< (LCDC_HEOCFG14) Color Space Conversion Offset Mask */
#define LCDC_HEOCFG14_CSCYOFF               LCDC_HEOCFG14_CSCYOFF_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG14_CSCYOFF_Msk instead */
#define LCDC_HEOCFG14_MASK                  _U_(0x7FFFFFFF)                                /**< \deprecated (LCDC_HEOCFG14) Register MASK  (Use LCDC_HEOCFG14_Msk instead)  */
#define LCDC_HEOCFG14_Msk                   _U_(0x7FFFFFFF)                                /**< (LCDC_HEOCFG14) Register Mask  */


/* -------- LCDC_HEOCFG15 : (LCDC Offset: 0x3c8) (R/W 32) High-End Overlay Configuration Register 15 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CSCGY:10;                  /**< bit:   0..9  Color Space Conversion Y coefficient for Green Component 1:2:7 format */
    uint32_t CSCGU:10;                  /**< bit: 10..19  Color Space Conversion U coefficient for Green Component 1:2:7 format */
    uint32_t CSCGV:10;                  /**< bit: 20..29  Color Space Conversion V coefficient for Green Component 1:2:7 format */
    uint32_t CSCUOFF:1;                 /**< bit:     30  Color Space Conversion Offset            */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG15_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG15_OFFSET                (0x3C8)                                       /**<  (LCDC_HEOCFG15) High-End Overlay Configuration Register 15  Offset */

#define LCDC_HEOCFG15_CSCGY_Pos             0                                              /**< (LCDC_HEOCFG15) Color Space Conversion Y coefficient for Green Component 1:2:7 format Position */
#define LCDC_HEOCFG15_CSCGY_Msk             (_U_(0x3FF) << LCDC_HEOCFG15_CSCGY_Pos)        /**< (LCDC_HEOCFG15) Color Space Conversion Y coefficient for Green Component 1:2:7 format Mask */
#define LCDC_HEOCFG15_CSCGY(value)          (LCDC_HEOCFG15_CSCGY_Msk & ((value) << LCDC_HEOCFG15_CSCGY_Pos))
#define LCDC_HEOCFG15_CSCGU_Pos             10                                             /**< (LCDC_HEOCFG15) Color Space Conversion U coefficient for Green Component 1:2:7 format Position */
#define LCDC_HEOCFG15_CSCGU_Msk             (_U_(0x3FF) << LCDC_HEOCFG15_CSCGU_Pos)        /**< (LCDC_HEOCFG15) Color Space Conversion U coefficient for Green Component 1:2:7 format Mask */
#define LCDC_HEOCFG15_CSCGU(value)          (LCDC_HEOCFG15_CSCGU_Msk & ((value) << LCDC_HEOCFG15_CSCGU_Pos))
#define LCDC_HEOCFG15_CSCGV_Pos             20                                             /**< (LCDC_HEOCFG15) Color Space Conversion V coefficient for Green Component 1:2:7 format Position */
#define LCDC_HEOCFG15_CSCGV_Msk             (_U_(0x3FF) << LCDC_HEOCFG15_CSCGV_Pos)        /**< (LCDC_HEOCFG15) Color Space Conversion V coefficient for Green Component 1:2:7 format Mask */
#define LCDC_HEOCFG15_CSCGV(value)          (LCDC_HEOCFG15_CSCGV_Msk & ((value) << LCDC_HEOCFG15_CSCGV_Pos))
#define LCDC_HEOCFG15_CSCUOFF_Pos           30                                             /**< (LCDC_HEOCFG15) Color Space Conversion Offset Position */
#define LCDC_HEOCFG15_CSCUOFF_Msk           (_U_(0x1) << LCDC_HEOCFG15_CSCUOFF_Pos)        /**< (LCDC_HEOCFG15) Color Space Conversion Offset Mask */
#define LCDC_HEOCFG15_CSCUOFF               LCDC_HEOCFG15_CSCUOFF_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG15_CSCUOFF_Msk instead */
#define LCDC_HEOCFG15_MASK                  _U_(0x7FFFFFFF)                                /**< \deprecated (LCDC_HEOCFG15) Register MASK  (Use LCDC_HEOCFG15_Msk instead)  */
#define LCDC_HEOCFG15_Msk                   _U_(0x7FFFFFFF)                                /**< (LCDC_HEOCFG15) Register Mask  */


/* -------- LCDC_HEOCFG16 : (LCDC Offset: 0x3cc) (R/W 32) High-End Overlay Configuration Register 16 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CSCBY:10;                  /**< bit:   0..9  Color Space Conversion Y coefficient for Blue Component 1:2:7 format */
    uint32_t CSCBU:10;                  /**< bit: 10..19  Color Space Conversion U coefficient for Blue Component 1:2:7 format */
    uint32_t CSCBV:10;                  /**< bit: 20..29  Color Space Conversion V coefficient for Blue Component 1:2:7 format */
    uint32_t CSCVOFF:1;                 /**< bit:     30  Color Space Conversion Offset            */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG16_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG16_OFFSET                (0x3CC)                                       /**<  (LCDC_HEOCFG16) High-End Overlay Configuration Register 16  Offset */

#define LCDC_HEOCFG16_CSCBY_Pos             0                                              /**< (LCDC_HEOCFG16) Color Space Conversion Y coefficient for Blue Component 1:2:7 format Position */
#define LCDC_HEOCFG16_CSCBY_Msk             (_U_(0x3FF) << LCDC_HEOCFG16_CSCBY_Pos)        /**< (LCDC_HEOCFG16) Color Space Conversion Y coefficient for Blue Component 1:2:7 format Mask */
#define LCDC_HEOCFG16_CSCBY(value)          (LCDC_HEOCFG16_CSCBY_Msk & ((value) << LCDC_HEOCFG16_CSCBY_Pos))
#define LCDC_HEOCFG16_CSCBU_Pos             10                                             /**< (LCDC_HEOCFG16) Color Space Conversion U coefficient for Blue Component 1:2:7 format Position */
#define LCDC_HEOCFG16_CSCBU_Msk             (_U_(0x3FF) << LCDC_HEOCFG16_CSCBU_Pos)        /**< (LCDC_HEOCFG16) Color Space Conversion U coefficient for Blue Component 1:2:7 format Mask */
#define LCDC_HEOCFG16_CSCBU(value)          (LCDC_HEOCFG16_CSCBU_Msk & ((value) << LCDC_HEOCFG16_CSCBU_Pos))
#define LCDC_HEOCFG16_CSCBV_Pos             20                                             /**< (LCDC_HEOCFG16) Color Space Conversion V coefficient for Blue Component 1:2:7 format Position */
#define LCDC_HEOCFG16_CSCBV_Msk             (_U_(0x3FF) << LCDC_HEOCFG16_CSCBV_Pos)        /**< (LCDC_HEOCFG16) Color Space Conversion V coefficient for Blue Component 1:2:7 format Mask */
#define LCDC_HEOCFG16_CSCBV(value)          (LCDC_HEOCFG16_CSCBV_Msk & ((value) << LCDC_HEOCFG16_CSCBV_Pos))
#define LCDC_HEOCFG16_CSCVOFF_Pos           30                                             /**< (LCDC_HEOCFG16) Color Space Conversion Offset Position */
#define LCDC_HEOCFG16_CSCVOFF_Msk           (_U_(0x1) << LCDC_HEOCFG16_CSCVOFF_Pos)        /**< (LCDC_HEOCFG16) Color Space Conversion Offset Mask */
#define LCDC_HEOCFG16_CSCVOFF               LCDC_HEOCFG16_CSCVOFF_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_HEOCFG16_CSCVOFF_Msk instead */
#define LCDC_HEOCFG16_MASK                  _U_(0x7FFFFFFF)                                /**< \deprecated (LCDC_HEOCFG16) Register MASK  (Use LCDC_HEOCFG16_Msk instead)  */
#define LCDC_HEOCFG16_Msk                   _U_(0x7FFFFFFF)                                /**< (LCDC_HEOCFG16) Register Mask  */


/* -------- LCDC_HEOCFG17 : (LCDC Offset: 0x3d0) (R/W 32) High-End Overlay Configuration Register 17 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XPHI0COEFF0:8;             /**< bit:   0..7  Horizontal Coefficient for phase 0 tap 0 */
    uint32_t XPHI0COEFF1:8;             /**< bit:  8..15  Horizontal Coefficient for phase 0 tap 1 */
    uint32_t XPHI0COEFF2:8;             /**< bit: 16..23  Horizontal Coefficient for phase 0 tap 2 */
    uint32_t XPHI0COEFF3:8;             /**< bit: 24..31  Horizontal Coefficient for phase 0 tap 3 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG17_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG17_OFFSET                (0x3D0)                                       /**<  (LCDC_HEOCFG17) High-End Overlay Configuration Register 17  Offset */

#define LCDC_HEOCFG17_XPHI0COEFF0_Pos       0                                              /**< (LCDC_HEOCFG17) Horizontal Coefficient for phase 0 tap 0 Position */
#define LCDC_HEOCFG17_XPHI0COEFF0_Msk       (_U_(0xFF) << LCDC_HEOCFG17_XPHI0COEFF0_Pos)   /**< (LCDC_HEOCFG17) Horizontal Coefficient for phase 0 tap 0 Mask */
#define LCDC_HEOCFG17_XPHI0COEFF0(value)    (LCDC_HEOCFG17_XPHI0COEFF0_Msk & ((value) << LCDC_HEOCFG17_XPHI0COEFF0_Pos))
#define LCDC_HEOCFG17_XPHI0COEFF1_Pos       8                                              /**< (LCDC_HEOCFG17) Horizontal Coefficient for phase 0 tap 1 Position */
#define LCDC_HEOCFG17_XPHI0COEFF1_Msk       (_U_(0xFF) << LCDC_HEOCFG17_XPHI0COEFF1_Pos)   /**< (LCDC_HEOCFG17) Horizontal Coefficient for phase 0 tap 1 Mask */
#define LCDC_HEOCFG17_XPHI0COEFF1(value)    (LCDC_HEOCFG17_XPHI0COEFF1_Msk & ((value) << LCDC_HEOCFG17_XPHI0COEFF1_Pos))
#define LCDC_HEOCFG17_XPHI0COEFF2_Pos       16                                             /**< (LCDC_HEOCFG17) Horizontal Coefficient for phase 0 tap 2 Position */
#define LCDC_HEOCFG17_XPHI0COEFF2_Msk       (_U_(0xFF) << LCDC_HEOCFG17_XPHI0COEFF2_Pos)   /**< (LCDC_HEOCFG17) Horizontal Coefficient for phase 0 tap 2 Mask */
#define LCDC_HEOCFG17_XPHI0COEFF2(value)    (LCDC_HEOCFG17_XPHI0COEFF2_Msk & ((value) << LCDC_HEOCFG17_XPHI0COEFF2_Pos))
#define LCDC_HEOCFG17_XPHI0COEFF3_Pos       24                                             /**< (LCDC_HEOCFG17) Horizontal Coefficient for phase 0 tap 3 Position */
#define LCDC_HEOCFG17_XPHI0COEFF3_Msk       (_U_(0xFF) << LCDC_HEOCFG17_XPHI0COEFF3_Pos)   /**< (LCDC_HEOCFG17) Horizontal Coefficient for phase 0 tap 3 Mask */
#define LCDC_HEOCFG17_XPHI0COEFF3(value)    (LCDC_HEOCFG17_XPHI0COEFF3_Msk & ((value) << LCDC_HEOCFG17_XPHI0COEFF3_Pos))
#define LCDC_HEOCFG17_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_HEOCFG17) Register MASK  (Use LCDC_HEOCFG17_Msk instead)  */
#define LCDC_HEOCFG17_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_HEOCFG17) Register Mask  */


/* -------- LCDC_HEOCFG18 : (LCDC Offset: 0x3d4) (R/W 32) High-End Overlay Configuration Register 18 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XPHI0COEFF4:8;             /**< bit:   0..7  Horizontal Coefficient for phase 0 tap 4 */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG18_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG18_OFFSET                (0x3D4)                                       /**<  (LCDC_HEOCFG18) High-End Overlay Configuration Register 18  Offset */

#define LCDC_HEOCFG18_XPHI0COEFF4_Pos       0                                              /**< (LCDC_HEOCFG18) Horizontal Coefficient for phase 0 tap 4 Position */
#define LCDC_HEOCFG18_XPHI0COEFF4_Msk       (_U_(0xFF) << LCDC_HEOCFG18_XPHI0COEFF4_Pos)   /**< (LCDC_HEOCFG18) Horizontal Coefficient for phase 0 tap 4 Mask */
#define LCDC_HEOCFG18_XPHI0COEFF4(value)    (LCDC_HEOCFG18_XPHI0COEFF4_Msk & ((value) << LCDC_HEOCFG18_XPHI0COEFF4_Pos))
#define LCDC_HEOCFG18_MASK                  _U_(0xFF)                                      /**< \deprecated (LCDC_HEOCFG18) Register MASK  (Use LCDC_HEOCFG18_Msk instead)  */
#define LCDC_HEOCFG18_Msk                   _U_(0xFF)                                      /**< (LCDC_HEOCFG18) Register Mask  */


/* -------- LCDC_HEOCFG19 : (LCDC Offset: 0x3d8) (R/W 32) High-End Overlay Configuration Register 19 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XPHI1COEFF0:8;             /**< bit:   0..7  Horizontal Coefficient for phase 1 tap 0 */
    uint32_t XPHI1COEFF1:8;             /**< bit:  8..15  Horizontal Coefficient for phase 1 tap 1 */
    uint32_t XPHI1COEFF2:8;             /**< bit: 16..23  Horizontal Coefficient for phase 1 tap 2 */
    uint32_t XPHI1COEFF3:8;             /**< bit: 24..31  Horizontal Coefficient for phase 1 tap 3 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG19_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG19_OFFSET                (0x3D8)                                       /**<  (LCDC_HEOCFG19) High-End Overlay Configuration Register 19  Offset */

#define LCDC_HEOCFG19_XPHI1COEFF0_Pos       0                                              /**< (LCDC_HEOCFG19) Horizontal Coefficient for phase 1 tap 0 Position */
#define LCDC_HEOCFG19_XPHI1COEFF0_Msk       (_U_(0xFF) << LCDC_HEOCFG19_XPHI1COEFF0_Pos)   /**< (LCDC_HEOCFG19) Horizontal Coefficient for phase 1 tap 0 Mask */
#define LCDC_HEOCFG19_XPHI1COEFF0(value)    (LCDC_HEOCFG19_XPHI1COEFF0_Msk & ((value) << LCDC_HEOCFG19_XPHI1COEFF0_Pos))
#define LCDC_HEOCFG19_XPHI1COEFF1_Pos       8                                              /**< (LCDC_HEOCFG19) Horizontal Coefficient for phase 1 tap 1 Position */
#define LCDC_HEOCFG19_XPHI1COEFF1_Msk       (_U_(0xFF) << LCDC_HEOCFG19_XPHI1COEFF1_Pos)   /**< (LCDC_HEOCFG19) Horizontal Coefficient for phase 1 tap 1 Mask */
#define LCDC_HEOCFG19_XPHI1COEFF1(value)    (LCDC_HEOCFG19_XPHI1COEFF1_Msk & ((value) << LCDC_HEOCFG19_XPHI1COEFF1_Pos))
#define LCDC_HEOCFG19_XPHI1COEFF2_Pos       16                                             /**< (LCDC_HEOCFG19) Horizontal Coefficient for phase 1 tap 2 Position */
#define LCDC_HEOCFG19_XPHI1COEFF2_Msk       (_U_(0xFF) << LCDC_HEOCFG19_XPHI1COEFF2_Pos)   /**< (LCDC_HEOCFG19) Horizontal Coefficient for phase 1 tap 2 Mask */
#define LCDC_HEOCFG19_XPHI1COEFF2(value)    (LCDC_HEOCFG19_XPHI1COEFF2_Msk & ((value) << LCDC_HEOCFG19_XPHI1COEFF2_Pos))
#define LCDC_HEOCFG19_XPHI1COEFF3_Pos       24                                             /**< (LCDC_HEOCFG19) Horizontal Coefficient for phase 1 tap 3 Position */
#define LCDC_HEOCFG19_XPHI1COEFF3_Msk       (_U_(0xFF) << LCDC_HEOCFG19_XPHI1COEFF3_Pos)   /**< (LCDC_HEOCFG19) Horizontal Coefficient for phase 1 tap 3 Mask */
#define LCDC_HEOCFG19_XPHI1COEFF3(value)    (LCDC_HEOCFG19_XPHI1COEFF3_Msk & ((value) << LCDC_HEOCFG19_XPHI1COEFF3_Pos))
#define LCDC_HEOCFG19_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_HEOCFG19) Register MASK  (Use LCDC_HEOCFG19_Msk instead)  */
#define LCDC_HEOCFG19_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_HEOCFG19) Register Mask  */


/* -------- LCDC_HEOCFG20 : (LCDC Offset: 0x3dc) (R/W 32) High-End Overlay Configuration Register 20 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XPHI1COEFF4:8;             /**< bit:   0..7  Horizontal Coefficient for phase 1 tap 4 */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG20_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG20_OFFSET                (0x3DC)                                       /**<  (LCDC_HEOCFG20) High-End Overlay Configuration Register 20  Offset */

#define LCDC_HEOCFG20_XPHI1COEFF4_Pos       0                                              /**< (LCDC_HEOCFG20) Horizontal Coefficient for phase 1 tap 4 Position */
#define LCDC_HEOCFG20_XPHI1COEFF4_Msk       (_U_(0xFF) << LCDC_HEOCFG20_XPHI1COEFF4_Pos)   /**< (LCDC_HEOCFG20) Horizontal Coefficient for phase 1 tap 4 Mask */
#define LCDC_HEOCFG20_XPHI1COEFF4(value)    (LCDC_HEOCFG20_XPHI1COEFF4_Msk & ((value) << LCDC_HEOCFG20_XPHI1COEFF4_Pos))
#define LCDC_HEOCFG20_MASK                  _U_(0xFF)                                      /**< \deprecated (LCDC_HEOCFG20) Register MASK  (Use LCDC_HEOCFG20_Msk instead)  */
#define LCDC_HEOCFG20_Msk                   _U_(0xFF)                                      /**< (LCDC_HEOCFG20) Register Mask  */


/* -------- LCDC_HEOCFG21 : (LCDC Offset: 0x3e0) (R/W 32) High-End Overlay Configuration Register 21 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XPHI2COEFF0:8;             /**< bit:   0..7  Horizontal Coefficient for phase 2 tap 0 */
    uint32_t XPHI2COEFF1:8;             /**< bit:  8..15  Horizontal Coefficient for phase 2 tap 1 */
    uint32_t XPHI2COEFF2:8;             /**< bit: 16..23  Horizontal Coefficient for phase 2 tap 2 */
    uint32_t XPHI2COEFF3:8;             /**< bit: 24..31  Horizontal Coefficient for phase 2 tap 3 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG21_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG21_OFFSET                (0x3E0)                                       /**<  (LCDC_HEOCFG21) High-End Overlay Configuration Register 21  Offset */

#define LCDC_HEOCFG21_XPHI2COEFF0_Pos       0                                              /**< (LCDC_HEOCFG21) Horizontal Coefficient for phase 2 tap 0 Position */
#define LCDC_HEOCFG21_XPHI2COEFF0_Msk       (_U_(0xFF) << LCDC_HEOCFG21_XPHI2COEFF0_Pos)   /**< (LCDC_HEOCFG21) Horizontal Coefficient for phase 2 tap 0 Mask */
#define LCDC_HEOCFG21_XPHI2COEFF0(value)    (LCDC_HEOCFG21_XPHI2COEFF0_Msk & ((value) << LCDC_HEOCFG21_XPHI2COEFF0_Pos))
#define LCDC_HEOCFG21_XPHI2COEFF1_Pos       8                                              /**< (LCDC_HEOCFG21) Horizontal Coefficient for phase 2 tap 1 Position */
#define LCDC_HEOCFG21_XPHI2COEFF1_Msk       (_U_(0xFF) << LCDC_HEOCFG21_XPHI2COEFF1_Pos)   /**< (LCDC_HEOCFG21) Horizontal Coefficient for phase 2 tap 1 Mask */
#define LCDC_HEOCFG21_XPHI2COEFF1(value)    (LCDC_HEOCFG21_XPHI2COEFF1_Msk & ((value) << LCDC_HEOCFG21_XPHI2COEFF1_Pos))
#define LCDC_HEOCFG21_XPHI2COEFF2_Pos       16                                             /**< (LCDC_HEOCFG21) Horizontal Coefficient for phase 2 tap 2 Position */
#define LCDC_HEOCFG21_XPHI2COEFF2_Msk       (_U_(0xFF) << LCDC_HEOCFG21_XPHI2COEFF2_Pos)   /**< (LCDC_HEOCFG21) Horizontal Coefficient for phase 2 tap 2 Mask */
#define LCDC_HEOCFG21_XPHI2COEFF2(value)    (LCDC_HEOCFG21_XPHI2COEFF2_Msk & ((value) << LCDC_HEOCFG21_XPHI2COEFF2_Pos))
#define LCDC_HEOCFG21_XPHI2COEFF3_Pos       24                                             /**< (LCDC_HEOCFG21) Horizontal Coefficient for phase 2 tap 3 Position */
#define LCDC_HEOCFG21_XPHI2COEFF3_Msk       (_U_(0xFF) << LCDC_HEOCFG21_XPHI2COEFF3_Pos)   /**< (LCDC_HEOCFG21) Horizontal Coefficient for phase 2 tap 3 Mask */
#define LCDC_HEOCFG21_XPHI2COEFF3(value)    (LCDC_HEOCFG21_XPHI2COEFF3_Msk & ((value) << LCDC_HEOCFG21_XPHI2COEFF3_Pos))
#define LCDC_HEOCFG21_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_HEOCFG21) Register MASK  (Use LCDC_HEOCFG21_Msk instead)  */
#define LCDC_HEOCFG21_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_HEOCFG21) Register Mask  */


/* -------- LCDC_HEOCFG22 : (LCDC Offset: 0x3e4) (R/W 32) High-End Overlay Configuration Register 22 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XPHI2COEFF4:8;             /**< bit:   0..7  Horizontal Coefficient for phase 2 tap 4 */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG22_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG22_OFFSET                (0x3E4)                                       /**<  (LCDC_HEOCFG22) High-End Overlay Configuration Register 22  Offset */

#define LCDC_HEOCFG22_XPHI2COEFF4_Pos       0                                              /**< (LCDC_HEOCFG22) Horizontal Coefficient for phase 2 tap 4 Position */
#define LCDC_HEOCFG22_XPHI2COEFF4_Msk       (_U_(0xFF) << LCDC_HEOCFG22_XPHI2COEFF4_Pos)   /**< (LCDC_HEOCFG22) Horizontal Coefficient for phase 2 tap 4 Mask */
#define LCDC_HEOCFG22_XPHI2COEFF4(value)    (LCDC_HEOCFG22_XPHI2COEFF4_Msk & ((value) << LCDC_HEOCFG22_XPHI2COEFF4_Pos))
#define LCDC_HEOCFG22_MASK                  _U_(0xFF)                                      /**< \deprecated (LCDC_HEOCFG22) Register MASK  (Use LCDC_HEOCFG22_Msk instead)  */
#define LCDC_HEOCFG22_Msk                   _U_(0xFF)                                      /**< (LCDC_HEOCFG22) Register Mask  */


/* -------- LCDC_HEOCFG23 : (LCDC Offset: 0x3e8) (R/W 32) High-End Overlay Configuration Register 23 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XPHI3COEFF0:8;             /**< bit:   0..7  Horizontal Coefficient for phase 3 tap 0 */
    uint32_t XPHI3COEFF1:8;             /**< bit:  8..15  Horizontal Coefficient for phase 3 tap 1 */
    uint32_t XPHI3COEFF2:8;             /**< bit: 16..23  Horizontal Coefficient for phase 3 tap 2 */
    uint32_t XPHI3COEFF3:8;             /**< bit: 24..31  Horizontal Coefficient for phase 3 tap 3 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG23_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG23_OFFSET                (0x3E8)                                       /**<  (LCDC_HEOCFG23) High-End Overlay Configuration Register 23  Offset */

#define LCDC_HEOCFG23_XPHI3COEFF0_Pos       0                                              /**< (LCDC_HEOCFG23) Horizontal Coefficient for phase 3 tap 0 Position */
#define LCDC_HEOCFG23_XPHI3COEFF0_Msk       (_U_(0xFF) << LCDC_HEOCFG23_XPHI3COEFF0_Pos)   /**< (LCDC_HEOCFG23) Horizontal Coefficient for phase 3 tap 0 Mask */
#define LCDC_HEOCFG23_XPHI3COEFF0(value)    (LCDC_HEOCFG23_XPHI3COEFF0_Msk & ((value) << LCDC_HEOCFG23_XPHI3COEFF0_Pos))
#define LCDC_HEOCFG23_XPHI3COEFF1_Pos       8                                              /**< (LCDC_HEOCFG23) Horizontal Coefficient for phase 3 tap 1 Position */
#define LCDC_HEOCFG23_XPHI3COEFF1_Msk       (_U_(0xFF) << LCDC_HEOCFG23_XPHI3COEFF1_Pos)   /**< (LCDC_HEOCFG23) Horizontal Coefficient for phase 3 tap 1 Mask */
#define LCDC_HEOCFG23_XPHI3COEFF1(value)    (LCDC_HEOCFG23_XPHI3COEFF1_Msk & ((value) << LCDC_HEOCFG23_XPHI3COEFF1_Pos))
#define LCDC_HEOCFG23_XPHI3COEFF2_Pos       16                                             /**< (LCDC_HEOCFG23) Horizontal Coefficient for phase 3 tap 2 Position */
#define LCDC_HEOCFG23_XPHI3COEFF2_Msk       (_U_(0xFF) << LCDC_HEOCFG23_XPHI3COEFF2_Pos)   /**< (LCDC_HEOCFG23) Horizontal Coefficient for phase 3 tap 2 Mask */
#define LCDC_HEOCFG23_XPHI3COEFF2(value)    (LCDC_HEOCFG23_XPHI3COEFF2_Msk & ((value) << LCDC_HEOCFG23_XPHI3COEFF2_Pos))
#define LCDC_HEOCFG23_XPHI3COEFF3_Pos       24                                             /**< (LCDC_HEOCFG23) Horizontal Coefficient for phase 3 tap 3 Position */
#define LCDC_HEOCFG23_XPHI3COEFF3_Msk       (_U_(0xFF) << LCDC_HEOCFG23_XPHI3COEFF3_Pos)   /**< (LCDC_HEOCFG23) Horizontal Coefficient for phase 3 tap 3 Mask */
#define LCDC_HEOCFG23_XPHI3COEFF3(value)    (LCDC_HEOCFG23_XPHI3COEFF3_Msk & ((value) << LCDC_HEOCFG23_XPHI3COEFF3_Pos))
#define LCDC_HEOCFG23_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_HEOCFG23) Register MASK  (Use LCDC_HEOCFG23_Msk instead)  */
#define LCDC_HEOCFG23_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_HEOCFG23) Register Mask  */


/* -------- LCDC_HEOCFG24 : (LCDC Offset: 0x3ec) (R/W 32) High-End Overlay Configuration Register 24 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XPHI3COEFF4:8;             /**< bit:   0..7  Horizontal Coefficient for phase 3 tap 4 */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG24_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG24_OFFSET                (0x3EC)                                       /**<  (LCDC_HEOCFG24) High-End Overlay Configuration Register 24  Offset */

#define LCDC_HEOCFG24_XPHI3COEFF4_Pos       0                                              /**< (LCDC_HEOCFG24) Horizontal Coefficient for phase 3 tap 4 Position */
#define LCDC_HEOCFG24_XPHI3COEFF4_Msk       (_U_(0xFF) << LCDC_HEOCFG24_XPHI3COEFF4_Pos)   /**< (LCDC_HEOCFG24) Horizontal Coefficient for phase 3 tap 4 Mask */
#define LCDC_HEOCFG24_XPHI3COEFF4(value)    (LCDC_HEOCFG24_XPHI3COEFF4_Msk & ((value) << LCDC_HEOCFG24_XPHI3COEFF4_Pos))
#define LCDC_HEOCFG24_MASK                  _U_(0xFF)                                      /**< \deprecated (LCDC_HEOCFG24) Register MASK  (Use LCDC_HEOCFG24_Msk instead)  */
#define LCDC_HEOCFG24_Msk                   _U_(0xFF)                                      /**< (LCDC_HEOCFG24) Register Mask  */


/* -------- LCDC_HEOCFG25 : (LCDC Offset: 0x3f0) (R/W 32) High-End Overlay Configuration Register 25 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XPHI4COEFF0:8;             /**< bit:   0..7  Horizontal Coefficient for phase 4 tap 0 */
    uint32_t XPHI4COEFF1:8;             /**< bit:  8..15  Horizontal Coefficient for phase 4 tap 1 */
    uint32_t XPHI4COEFF2:8;             /**< bit: 16..23  Horizontal Coefficient for phase 4 tap 2 */
    uint32_t XPHI4COEFF3:8;             /**< bit: 24..31  Horizontal Coefficient for phase 4 tap 3 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG25_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG25_OFFSET                (0x3F0)                                       /**<  (LCDC_HEOCFG25) High-End Overlay Configuration Register 25  Offset */

#define LCDC_HEOCFG25_XPHI4COEFF0_Pos       0                                              /**< (LCDC_HEOCFG25) Horizontal Coefficient for phase 4 tap 0 Position */
#define LCDC_HEOCFG25_XPHI4COEFF0_Msk       (_U_(0xFF) << LCDC_HEOCFG25_XPHI4COEFF0_Pos)   /**< (LCDC_HEOCFG25) Horizontal Coefficient for phase 4 tap 0 Mask */
#define LCDC_HEOCFG25_XPHI4COEFF0(value)    (LCDC_HEOCFG25_XPHI4COEFF0_Msk & ((value) << LCDC_HEOCFG25_XPHI4COEFF0_Pos))
#define LCDC_HEOCFG25_XPHI4COEFF1_Pos       8                                              /**< (LCDC_HEOCFG25) Horizontal Coefficient for phase 4 tap 1 Position */
#define LCDC_HEOCFG25_XPHI4COEFF1_Msk       (_U_(0xFF) << LCDC_HEOCFG25_XPHI4COEFF1_Pos)   /**< (LCDC_HEOCFG25) Horizontal Coefficient for phase 4 tap 1 Mask */
#define LCDC_HEOCFG25_XPHI4COEFF1(value)    (LCDC_HEOCFG25_XPHI4COEFF1_Msk & ((value) << LCDC_HEOCFG25_XPHI4COEFF1_Pos))
#define LCDC_HEOCFG25_XPHI4COEFF2_Pos       16                                             /**< (LCDC_HEOCFG25) Horizontal Coefficient for phase 4 tap 2 Position */
#define LCDC_HEOCFG25_XPHI4COEFF2_Msk       (_U_(0xFF) << LCDC_HEOCFG25_XPHI4COEFF2_Pos)   /**< (LCDC_HEOCFG25) Horizontal Coefficient for phase 4 tap 2 Mask */
#define LCDC_HEOCFG25_XPHI4COEFF2(value)    (LCDC_HEOCFG25_XPHI4COEFF2_Msk & ((value) << LCDC_HEOCFG25_XPHI4COEFF2_Pos))
#define LCDC_HEOCFG25_XPHI4COEFF3_Pos       24                                             /**< (LCDC_HEOCFG25) Horizontal Coefficient for phase 4 tap 3 Position */
#define LCDC_HEOCFG25_XPHI4COEFF3_Msk       (_U_(0xFF) << LCDC_HEOCFG25_XPHI4COEFF3_Pos)   /**< (LCDC_HEOCFG25) Horizontal Coefficient for phase 4 tap 3 Mask */
#define LCDC_HEOCFG25_XPHI4COEFF3(value)    (LCDC_HEOCFG25_XPHI4COEFF3_Msk & ((value) << LCDC_HEOCFG25_XPHI4COEFF3_Pos))
#define LCDC_HEOCFG25_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_HEOCFG25) Register MASK  (Use LCDC_HEOCFG25_Msk instead)  */
#define LCDC_HEOCFG25_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_HEOCFG25) Register Mask  */


/* -------- LCDC_HEOCFG26 : (LCDC Offset: 0x3f4) (R/W 32) High-End Overlay Configuration Register 26 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XPHI4COEFF4:8;             /**< bit:   0..7  Horizontal Coefficient for phase 4 tap 4 */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG26_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG26_OFFSET                (0x3F4)                                       /**<  (LCDC_HEOCFG26) High-End Overlay Configuration Register 26  Offset */

#define LCDC_HEOCFG26_XPHI4COEFF4_Pos       0                                              /**< (LCDC_HEOCFG26) Horizontal Coefficient for phase 4 tap 4 Position */
#define LCDC_HEOCFG26_XPHI4COEFF4_Msk       (_U_(0xFF) << LCDC_HEOCFG26_XPHI4COEFF4_Pos)   /**< (LCDC_HEOCFG26) Horizontal Coefficient for phase 4 tap 4 Mask */
#define LCDC_HEOCFG26_XPHI4COEFF4(value)    (LCDC_HEOCFG26_XPHI4COEFF4_Msk & ((value) << LCDC_HEOCFG26_XPHI4COEFF4_Pos))
#define LCDC_HEOCFG26_MASK                  _U_(0xFF)                                      /**< \deprecated (LCDC_HEOCFG26) Register MASK  (Use LCDC_HEOCFG26_Msk instead)  */
#define LCDC_HEOCFG26_Msk                   _U_(0xFF)                                      /**< (LCDC_HEOCFG26) Register Mask  */


/* -------- LCDC_HEOCFG27 : (LCDC Offset: 0x3f8) (R/W 32) High-End Overlay Configuration Register 27 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XPHI5COEFF0:8;             /**< bit:   0..7  Horizontal Coefficient for phase 5 tap 0 */
    uint32_t XPHI5COEFF1:8;             /**< bit:  8..15  Horizontal Coefficient for phase 5 tap 1 */
    uint32_t XPHI5COEFF2:8;             /**< bit: 16..23  Horizontal Coefficient for phase 5 tap 2 */
    uint32_t XPHI5COEFF3:8;             /**< bit: 24..31  Horizontal Coefficient for phase 5 tap 3 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG27_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG27_OFFSET                (0x3F8)                                       /**<  (LCDC_HEOCFG27) High-End Overlay Configuration Register 27  Offset */

#define LCDC_HEOCFG27_XPHI5COEFF0_Pos       0                                              /**< (LCDC_HEOCFG27) Horizontal Coefficient for phase 5 tap 0 Position */
#define LCDC_HEOCFG27_XPHI5COEFF0_Msk       (_U_(0xFF) << LCDC_HEOCFG27_XPHI5COEFF0_Pos)   /**< (LCDC_HEOCFG27) Horizontal Coefficient for phase 5 tap 0 Mask */
#define LCDC_HEOCFG27_XPHI5COEFF0(value)    (LCDC_HEOCFG27_XPHI5COEFF0_Msk & ((value) << LCDC_HEOCFG27_XPHI5COEFF0_Pos))
#define LCDC_HEOCFG27_XPHI5COEFF1_Pos       8                                              /**< (LCDC_HEOCFG27) Horizontal Coefficient for phase 5 tap 1 Position */
#define LCDC_HEOCFG27_XPHI5COEFF1_Msk       (_U_(0xFF) << LCDC_HEOCFG27_XPHI5COEFF1_Pos)   /**< (LCDC_HEOCFG27) Horizontal Coefficient for phase 5 tap 1 Mask */
#define LCDC_HEOCFG27_XPHI5COEFF1(value)    (LCDC_HEOCFG27_XPHI5COEFF1_Msk & ((value) << LCDC_HEOCFG27_XPHI5COEFF1_Pos))
#define LCDC_HEOCFG27_XPHI5COEFF2_Pos       16                                             /**< (LCDC_HEOCFG27) Horizontal Coefficient for phase 5 tap 2 Position */
#define LCDC_HEOCFG27_XPHI5COEFF2_Msk       (_U_(0xFF) << LCDC_HEOCFG27_XPHI5COEFF2_Pos)   /**< (LCDC_HEOCFG27) Horizontal Coefficient for phase 5 tap 2 Mask */
#define LCDC_HEOCFG27_XPHI5COEFF2(value)    (LCDC_HEOCFG27_XPHI5COEFF2_Msk & ((value) << LCDC_HEOCFG27_XPHI5COEFF2_Pos))
#define LCDC_HEOCFG27_XPHI5COEFF3_Pos       24                                             /**< (LCDC_HEOCFG27) Horizontal Coefficient for phase 5 tap 3 Position */
#define LCDC_HEOCFG27_XPHI5COEFF3_Msk       (_U_(0xFF) << LCDC_HEOCFG27_XPHI5COEFF3_Pos)   /**< (LCDC_HEOCFG27) Horizontal Coefficient for phase 5 tap 3 Mask */
#define LCDC_HEOCFG27_XPHI5COEFF3(value)    (LCDC_HEOCFG27_XPHI5COEFF3_Msk & ((value) << LCDC_HEOCFG27_XPHI5COEFF3_Pos))
#define LCDC_HEOCFG27_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_HEOCFG27) Register MASK  (Use LCDC_HEOCFG27_Msk instead)  */
#define LCDC_HEOCFG27_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_HEOCFG27) Register Mask  */


/* -------- LCDC_HEOCFG28 : (LCDC Offset: 0x3fc) (R/W 32) High-End Overlay Configuration Register 28 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XPHI5COEFF4:8;             /**< bit:   0..7  Horizontal Coefficient for phase 5 tap 4 */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG28_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG28_OFFSET                (0x3FC)                                       /**<  (LCDC_HEOCFG28) High-End Overlay Configuration Register 28  Offset */

#define LCDC_HEOCFG28_XPHI5COEFF4_Pos       0                                              /**< (LCDC_HEOCFG28) Horizontal Coefficient for phase 5 tap 4 Position */
#define LCDC_HEOCFG28_XPHI5COEFF4_Msk       (_U_(0xFF) << LCDC_HEOCFG28_XPHI5COEFF4_Pos)   /**< (LCDC_HEOCFG28) Horizontal Coefficient for phase 5 tap 4 Mask */
#define LCDC_HEOCFG28_XPHI5COEFF4(value)    (LCDC_HEOCFG28_XPHI5COEFF4_Msk & ((value) << LCDC_HEOCFG28_XPHI5COEFF4_Pos))
#define LCDC_HEOCFG28_MASK                  _U_(0xFF)                                      /**< \deprecated (LCDC_HEOCFG28) Register MASK  (Use LCDC_HEOCFG28_Msk instead)  */
#define LCDC_HEOCFG28_Msk                   _U_(0xFF)                                      /**< (LCDC_HEOCFG28) Register Mask  */


/* -------- LCDC_HEOCFG29 : (LCDC Offset: 0x400) (R/W 32) High-End Overlay Configuration Register 29 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XPHI6COEFF0:8;             /**< bit:   0..7  Horizontal Coefficient for phase 6 tap 0 */
    uint32_t XPHI6COEFF1:8;             /**< bit:  8..15  Horizontal Coefficient for phase 6 tap 1 */
    uint32_t XPHI6COEFF2:8;             /**< bit: 16..23  Horizontal Coefficient for phase 6 tap 2 */
    uint32_t XPHI6COEFF3:8;             /**< bit: 24..31  Horizontal Coefficient for phase 6 tap 3 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG29_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG29_OFFSET                (0x400)                                       /**<  (LCDC_HEOCFG29) High-End Overlay Configuration Register 29  Offset */

#define LCDC_HEOCFG29_XPHI6COEFF0_Pos       0                                              /**< (LCDC_HEOCFG29) Horizontal Coefficient for phase 6 tap 0 Position */
#define LCDC_HEOCFG29_XPHI6COEFF0_Msk       (_U_(0xFF) << LCDC_HEOCFG29_XPHI6COEFF0_Pos)   /**< (LCDC_HEOCFG29) Horizontal Coefficient for phase 6 tap 0 Mask */
#define LCDC_HEOCFG29_XPHI6COEFF0(value)    (LCDC_HEOCFG29_XPHI6COEFF0_Msk & ((value) << LCDC_HEOCFG29_XPHI6COEFF0_Pos))
#define LCDC_HEOCFG29_XPHI6COEFF1_Pos       8                                              /**< (LCDC_HEOCFG29) Horizontal Coefficient for phase 6 tap 1 Position */
#define LCDC_HEOCFG29_XPHI6COEFF1_Msk       (_U_(0xFF) << LCDC_HEOCFG29_XPHI6COEFF1_Pos)   /**< (LCDC_HEOCFG29) Horizontal Coefficient for phase 6 tap 1 Mask */
#define LCDC_HEOCFG29_XPHI6COEFF1(value)    (LCDC_HEOCFG29_XPHI6COEFF1_Msk & ((value) << LCDC_HEOCFG29_XPHI6COEFF1_Pos))
#define LCDC_HEOCFG29_XPHI6COEFF2_Pos       16                                             /**< (LCDC_HEOCFG29) Horizontal Coefficient for phase 6 tap 2 Position */
#define LCDC_HEOCFG29_XPHI6COEFF2_Msk       (_U_(0xFF) << LCDC_HEOCFG29_XPHI6COEFF2_Pos)   /**< (LCDC_HEOCFG29) Horizontal Coefficient for phase 6 tap 2 Mask */
#define LCDC_HEOCFG29_XPHI6COEFF2(value)    (LCDC_HEOCFG29_XPHI6COEFF2_Msk & ((value) << LCDC_HEOCFG29_XPHI6COEFF2_Pos))
#define LCDC_HEOCFG29_XPHI6COEFF3_Pos       24                                             /**< (LCDC_HEOCFG29) Horizontal Coefficient for phase 6 tap 3 Position */
#define LCDC_HEOCFG29_XPHI6COEFF3_Msk       (_U_(0xFF) << LCDC_HEOCFG29_XPHI6COEFF3_Pos)   /**< (LCDC_HEOCFG29) Horizontal Coefficient for phase 6 tap 3 Mask */
#define LCDC_HEOCFG29_XPHI6COEFF3(value)    (LCDC_HEOCFG29_XPHI6COEFF3_Msk & ((value) << LCDC_HEOCFG29_XPHI6COEFF3_Pos))
#define LCDC_HEOCFG29_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_HEOCFG29) Register MASK  (Use LCDC_HEOCFG29_Msk instead)  */
#define LCDC_HEOCFG29_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_HEOCFG29) Register Mask  */


/* -------- LCDC_HEOCFG30 : (LCDC Offset: 0x404) (R/W 32) High-End Overlay Configuration Register 30 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XPHI6COEFF4:8;             /**< bit:   0..7  Horizontal Coefficient for phase 6 tap 4 */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG30_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG30_OFFSET                (0x404)                                       /**<  (LCDC_HEOCFG30) High-End Overlay Configuration Register 30  Offset */

#define LCDC_HEOCFG30_XPHI6COEFF4_Pos       0                                              /**< (LCDC_HEOCFG30) Horizontal Coefficient for phase 6 tap 4 Position */
#define LCDC_HEOCFG30_XPHI6COEFF4_Msk       (_U_(0xFF) << LCDC_HEOCFG30_XPHI6COEFF4_Pos)   /**< (LCDC_HEOCFG30) Horizontal Coefficient for phase 6 tap 4 Mask */
#define LCDC_HEOCFG30_XPHI6COEFF4(value)    (LCDC_HEOCFG30_XPHI6COEFF4_Msk & ((value) << LCDC_HEOCFG30_XPHI6COEFF4_Pos))
#define LCDC_HEOCFG30_MASK                  _U_(0xFF)                                      /**< \deprecated (LCDC_HEOCFG30) Register MASK  (Use LCDC_HEOCFG30_Msk instead)  */
#define LCDC_HEOCFG30_Msk                   _U_(0xFF)                                      /**< (LCDC_HEOCFG30) Register Mask  */


/* -------- LCDC_HEOCFG31 : (LCDC Offset: 0x408) (R/W 32) High-End Overlay Configuration Register 31 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XPHI7COEFF0:8;             /**< bit:   0..7  Horizontal Coefficient for phase 7 tap 0 */
    uint32_t XPHI7COEFF1:8;             /**< bit:  8..15  Horizontal Coefficient for phase 7 tap 1 */
    uint32_t XPHI7COEFF2:8;             /**< bit: 16..23  Horizontal Coefficient for phase 7 tap 2 */
    uint32_t XPHI7COEFF3:8;             /**< bit: 24..31  Horizontal Coefficient for phase 7 tap 3 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG31_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG31_OFFSET                (0x408)                                       /**<  (LCDC_HEOCFG31) High-End Overlay Configuration Register 31  Offset */

#define LCDC_HEOCFG31_XPHI7COEFF0_Pos       0                                              /**< (LCDC_HEOCFG31) Horizontal Coefficient for phase 7 tap 0 Position */
#define LCDC_HEOCFG31_XPHI7COEFF0_Msk       (_U_(0xFF) << LCDC_HEOCFG31_XPHI7COEFF0_Pos)   /**< (LCDC_HEOCFG31) Horizontal Coefficient for phase 7 tap 0 Mask */
#define LCDC_HEOCFG31_XPHI7COEFF0(value)    (LCDC_HEOCFG31_XPHI7COEFF0_Msk & ((value) << LCDC_HEOCFG31_XPHI7COEFF0_Pos))
#define LCDC_HEOCFG31_XPHI7COEFF1_Pos       8                                              /**< (LCDC_HEOCFG31) Horizontal Coefficient for phase 7 tap 1 Position */
#define LCDC_HEOCFG31_XPHI7COEFF1_Msk       (_U_(0xFF) << LCDC_HEOCFG31_XPHI7COEFF1_Pos)   /**< (LCDC_HEOCFG31) Horizontal Coefficient for phase 7 tap 1 Mask */
#define LCDC_HEOCFG31_XPHI7COEFF1(value)    (LCDC_HEOCFG31_XPHI7COEFF1_Msk & ((value) << LCDC_HEOCFG31_XPHI7COEFF1_Pos))
#define LCDC_HEOCFG31_XPHI7COEFF2_Pos       16                                             /**< (LCDC_HEOCFG31) Horizontal Coefficient for phase 7 tap 2 Position */
#define LCDC_HEOCFG31_XPHI7COEFF2_Msk       (_U_(0xFF) << LCDC_HEOCFG31_XPHI7COEFF2_Pos)   /**< (LCDC_HEOCFG31) Horizontal Coefficient for phase 7 tap 2 Mask */
#define LCDC_HEOCFG31_XPHI7COEFF2(value)    (LCDC_HEOCFG31_XPHI7COEFF2_Msk & ((value) << LCDC_HEOCFG31_XPHI7COEFF2_Pos))
#define LCDC_HEOCFG31_XPHI7COEFF3_Pos       24                                             /**< (LCDC_HEOCFG31) Horizontal Coefficient for phase 7 tap 3 Position */
#define LCDC_HEOCFG31_XPHI7COEFF3_Msk       (_U_(0xFF) << LCDC_HEOCFG31_XPHI7COEFF3_Pos)   /**< (LCDC_HEOCFG31) Horizontal Coefficient for phase 7 tap 3 Mask */
#define LCDC_HEOCFG31_XPHI7COEFF3(value)    (LCDC_HEOCFG31_XPHI7COEFF3_Msk & ((value) << LCDC_HEOCFG31_XPHI7COEFF3_Pos))
#define LCDC_HEOCFG31_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_HEOCFG31) Register MASK  (Use LCDC_HEOCFG31_Msk instead)  */
#define LCDC_HEOCFG31_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_HEOCFG31) Register Mask  */


/* -------- LCDC_HEOCFG32 : (LCDC Offset: 0x40c) (R/W 32) High-End Overlay Configuration Register 32 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XPHI7COEFF4:8;             /**< bit:   0..7  Horizontal Coefficient for phase 7 tap 4 */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG32_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG32_OFFSET                (0x40C)                                       /**<  (LCDC_HEOCFG32) High-End Overlay Configuration Register 32  Offset */

#define LCDC_HEOCFG32_XPHI7COEFF4_Pos       0                                              /**< (LCDC_HEOCFG32) Horizontal Coefficient for phase 7 tap 4 Position */
#define LCDC_HEOCFG32_XPHI7COEFF4_Msk       (_U_(0xFF) << LCDC_HEOCFG32_XPHI7COEFF4_Pos)   /**< (LCDC_HEOCFG32) Horizontal Coefficient for phase 7 tap 4 Mask */
#define LCDC_HEOCFG32_XPHI7COEFF4(value)    (LCDC_HEOCFG32_XPHI7COEFF4_Msk & ((value) << LCDC_HEOCFG32_XPHI7COEFF4_Pos))
#define LCDC_HEOCFG32_MASK                  _U_(0xFF)                                      /**< \deprecated (LCDC_HEOCFG32) Register MASK  (Use LCDC_HEOCFG32_Msk instead)  */
#define LCDC_HEOCFG32_Msk                   _U_(0xFF)                                      /**< (LCDC_HEOCFG32) Register Mask  */


/* -------- LCDC_HEOCFG33 : (LCDC Offset: 0x410) (R/W 32) High-End Overlay Configuration Register 33 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t YPHI0COEFF0:8;             /**< bit:   0..7  Vertical Coefficient for phase 0 tap 0   */
    uint32_t YPHI0COEFF1:8;             /**< bit:  8..15  Vertical Coefficient for phase 0 tap 1   */
    uint32_t YPHI0COEFF2:8;             /**< bit: 16..23  Vertical Coefficient for phase 0 tap 2   */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG33_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG33_OFFSET                (0x410)                                       /**<  (LCDC_HEOCFG33) High-End Overlay Configuration Register 33  Offset */

#define LCDC_HEOCFG33_YPHI0COEFF0_Pos       0                                              /**< (LCDC_HEOCFG33) Vertical Coefficient for phase 0 tap 0 Position */
#define LCDC_HEOCFG33_YPHI0COEFF0_Msk       (_U_(0xFF) << LCDC_HEOCFG33_YPHI0COEFF0_Pos)   /**< (LCDC_HEOCFG33) Vertical Coefficient for phase 0 tap 0 Mask */
#define LCDC_HEOCFG33_YPHI0COEFF0(value)    (LCDC_HEOCFG33_YPHI0COEFF0_Msk & ((value) << LCDC_HEOCFG33_YPHI0COEFF0_Pos))
#define LCDC_HEOCFG33_YPHI0COEFF1_Pos       8                                              /**< (LCDC_HEOCFG33) Vertical Coefficient for phase 0 tap 1 Position */
#define LCDC_HEOCFG33_YPHI0COEFF1_Msk       (_U_(0xFF) << LCDC_HEOCFG33_YPHI0COEFF1_Pos)   /**< (LCDC_HEOCFG33) Vertical Coefficient for phase 0 tap 1 Mask */
#define LCDC_HEOCFG33_YPHI0COEFF1(value)    (LCDC_HEOCFG33_YPHI0COEFF1_Msk & ((value) << LCDC_HEOCFG33_YPHI0COEFF1_Pos))
#define LCDC_HEOCFG33_YPHI0COEFF2_Pos       16                                             /**< (LCDC_HEOCFG33) Vertical Coefficient for phase 0 tap 2 Position */
#define LCDC_HEOCFG33_YPHI0COEFF2_Msk       (_U_(0xFF) << LCDC_HEOCFG33_YPHI0COEFF2_Pos)   /**< (LCDC_HEOCFG33) Vertical Coefficient for phase 0 tap 2 Mask */
#define LCDC_HEOCFG33_YPHI0COEFF2(value)    (LCDC_HEOCFG33_YPHI0COEFF2_Msk & ((value) << LCDC_HEOCFG33_YPHI0COEFF2_Pos))
#define LCDC_HEOCFG33_MASK                  _U_(0xFFFFFF)                                  /**< \deprecated (LCDC_HEOCFG33) Register MASK  (Use LCDC_HEOCFG33_Msk instead)  */
#define LCDC_HEOCFG33_Msk                   _U_(0xFFFFFF)                                  /**< (LCDC_HEOCFG33) Register Mask  */


/* -------- LCDC_HEOCFG34 : (LCDC Offset: 0x414) (R/W 32) High-End Overlay Configuration Register 34 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t YPHI1COEFF0:8;             /**< bit:   0..7  Vertical Coefficient for phase 1 tap 0   */
    uint32_t YPHI1COEFF1:8;             /**< bit:  8..15  Vertical Coefficient for phase 1 tap 1   */
    uint32_t YPHI1COEFF2:8;             /**< bit: 16..23  Vertical Coefficient for phase 1 tap 2   */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG34_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG34_OFFSET                (0x414)                                       /**<  (LCDC_HEOCFG34) High-End Overlay Configuration Register 34  Offset */

#define LCDC_HEOCFG34_YPHI1COEFF0_Pos       0                                              /**< (LCDC_HEOCFG34) Vertical Coefficient for phase 1 tap 0 Position */
#define LCDC_HEOCFG34_YPHI1COEFF0_Msk       (_U_(0xFF) << LCDC_HEOCFG34_YPHI1COEFF0_Pos)   /**< (LCDC_HEOCFG34) Vertical Coefficient for phase 1 tap 0 Mask */
#define LCDC_HEOCFG34_YPHI1COEFF0(value)    (LCDC_HEOCFG34_YPHI1COEFF0_Msk & ((value) << LCDC_HEOCFG34_YPHI1COEFF0_Pos))
#define LCDC_HEOCFG34_YPHI1COEFF1_Pos       8                                              /**< (LCDC_HEOCFG34) Vertical Coefficient for phase 1 tap 1 Position */
#define LCDC_HEOCFG34_YPHI1COEFF1_Msk       (_U_(0xFF) << LCDC_HEOCFG34_YPHI1COEFF1_Pos)   /**< (LCDC_HEOCFG34) Vertical Coefficient for phase 1 tap 1 Mask */
#define LCDC_HEOCFG34_YPHI1COEFF1(value)    (LCDC_HEOCFG34_YPHI1COEFF1_Msk & ((value) << LCDC_HEOCFG34_YPHI1COEFF1_Pos))
#define LCDC_HEOCFG34_YPHI1COEFF2_Pos       16                                             /**< (LCDC_HEOCFG34) Vertical Coefficient for phase 1 tap 2 Position */
#define LCDC_HEOCFG34_YPHI1COEFF2_Msk       (_U_(0xFF) << LCDC_HEOCFG34_YPHI1COEFF2_Pos)   /**< (LCDC_HEOCFG34) Vertical Coefficient for phase 1 tap 2 Mask */
#define LCDC_HEOCFG34_YPHI1COEFF2(value)    (LCDC_HEOCFG34_YPHI1COEFF2_Msk & ((value) << LCDC_HEOCFG34_YPHI1COEFF2_Pos))
#define LCDC_HEOCFG34_MASK                  _U_(0xFFFFFF)                                  /**< \deprecated (LCDC_HEOCFG34) Register MASK  (Use LCDC_HEOCFG34_Msk instead)  */
#define LCDC_HEOCFG34_Msk                   _U_(0xFFFFFF)                                  /**< (LCDC_HEOCFG34) Register Mask  */


/* -------- LCDC_HEOCFG35 : (LCDC Offset: 0x418) (R/W 32) High-End Overlay Configuration Register 35 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t YPHI2COEFF0:8;             /**< bit:   0..7  Vertical Coefficient for phase 2 tap 0   */
    uint32_t YPHI2COEFF1:8;             /**< bit:  8..15  Vertical Coefficient for phase 2 tap 1   */
    uint32_t YPHI2COEFF2:8;             /**< bit: 16..23  Vertical Coefficient for phase 2 tap 2   */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG35_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG35_OFFSET                (0x418)                                       /**<  (LCDC_HEOCFG35) High-End Overlay Configuration Register 35  Offset */

#define LCDC_HEOCFG35_YPHI2COEFF0_Pos       0                                              /**< (LCDC_HEOCFG35) Vertical Coefficient for phase 2 tap 0 Position */
#define LCDC_HEOCFG35_YPHI2COEFF0_Msk       (_U_(0xFF) << LCDC_HEOCFG35_YPHI2COEFF0_Pos)   /**< (LCDC_HEOCFG35) Vertical Coefficient for phase 2 tap 0 Mask */
#define LCDC_HEOCFG35_YPHI2COEFF0(value)    (LCDC_HEOCFG35_YPHI2COEFF0_Msk & ((value) << LCDC_HEOCFG35_YPHI2COEFF0_Pos))
#define LCDC_HEOCFG35_YPHI2COEFF1_Pos       8                                              /**< (LCDC_HEOCFG35) Vertical Coefficient for phase 2 tap 1 Position */
#define LCDC_HEOCFG35_YPHI2COEFF1_Msk       (_U_(0xFF) << LCDC_HEOCFG35_YPHI2COEFF1_Pos)   /**< (LCDC_HEOCFG35) Vertical Coefficient for phase 2 tap 1 Mask */
#define LCDC_HEOCFG35_YPHI2COEFF1(value)    (LCDC_HEOCFG35_YPHI2COEFF1_Msk & ((value) << LCDC_HEOCFG35_YPHI2COEFF1_Pos))
#define LCDC_HEOCFG35_YPHI2COEFF2_Pos       16                                             /**< (LCDC_HEOCFG35) Vertical Coefficient for phase 2 tap 2 Position */
#define LCDC_HEOCFG35_YPHI2COEFF2_Msk       (_U_(0xFF) << LCDC_HEOCFG35_YPHI2COEFF2_Pos)   /**< (LCDC_HEOCFG35) Vertical Coefficient for phase 2 tap 2 Mask */
#define LCDC_HEOCFG35_YPHI2COEFF2(value)    (LCDC_HEOCFG35_YPHI2COEFF2_Msk & ((value) << LCDC_HEOCFG35_YPHI2COEFF2_Pos))
#define LCDC_HEOCFG35_MASK                  _U_(0xFFFFFF)                                  /**< \deprecated (LCDC_HEOCFG35) Register MASK  (Use LCDC_HEOCFG35_Msk instead)  */
#define LCDC_HEOCFG35_Msk                   _U_(0xFFFFFF)                                  /**< (LCDC_HEOCFG35) Register Mask  */


/* -------- LCDC_HEOCFG36 : (LCDC Offset: 0x41c) (R/W 32) High-End Overlay Configuration Register 36 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t YPHI3COEFF0:8;             /**< bit:   0..7  Vertical Coefficient for phase 3 tap 0   */
    uint32_t YPHI3COEFF1:8;             /**< bit:  8..15  Vertical Coefficient for phase 3 tap 1   */
    uint32_t YPHI3COEFF2:8;             /**< bit: 16..23  Vertical Coefficient for phase 3 tap 2   */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG36_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG36_OFFSET                (0x41C)                                       /**<  (LCDC_HEOCFG36) High-End Overlay Configuration Register 36  Offset */

#define LCDC_HEOCFG36_YPHI3COEFF0_Pos       0                                              /**< (LCDC_HEOCFG36) Vertical Coefficient for phase 3 tap 0 Position */
#define LCDC_HEOCFG36_YPHI3COEFF0_Msk       (_U_(0xFF) << LCDC_HEOCFG36_YPHI3COEFF0_Pos)   /**< (LCDC_HEOCFG36) Vertical Coefficient for phase 3 tap 0 Mask */
#define LCDC_HEOCFG36_YPHI3COEFF0(value)    (LCDC_HEOCFG36_YPHI3COEFF0_Msk & ((value) << LCDC_HEOCFG36_YPHI3COEFF0_Pos))
#define LCDC_HEOCFG36_YPHI3COEFF1_Pos       8                                              /**< (LCDC_HEOCFG36) Vertical Coefficient for phase 3 tap 1 Position */
#define LCDC_HEOCFG36_YPHI3COEFF1_Msk       (_U_(0xFF) << LCDC_HEOCFG36_YPHI3COEFF1_Pos)   /**< (LCDC_HEOCFG36) Vertical Coefficient for phase 3 tap 1 Mask */
#define LCDC_HEOCFG36_YPHI3COEFF1(value)    (LCDC_HEOCFG36_YPHI3COEFF1_Msk & ((value) << LCDC_HEOCFG36_YPHI3COEFF1_Pos))
#define LCDC_HEOCFG36_YPHI3COEFF2_Pos       16                                             /**< (LCDC_HEOCFG36) Vertical Coefficient for phase 3 tap 2 Position */
#define LCDC_HEOCFG36_YPHI3COEFF2_Msk       (_U_(0xFF) << LCDC_HEOCFG36_YPHI3COEFF2_Pos)   /**< (LCDC_HEOCFG36) Vertical Coefficient for phase 3 tap 2 Mask */
#define LCDC_HEOCFG36_YPHI3COEFF2(value)    (LCDC_HEOCFG36_YPHI3COEFF2_Msk & ((value) << LCDC_HEOCFG36_YPHI3COEFF2_Pos))
#define LCDC_HEOCFG36_MASK                  _U_(0xFFFFFF)                                  /**< \deprecated (LCDC_HEOCFG36) Register MASK  (Use LCDC_HEOCFG36_Msk instead)  */
#define LCDC_HEOCFG36_Msk                   _U_(0xFFFFFF)                                  /**< (LCDC_HEOCFG36) Register Mask  */


/* -------- LCDC_HEOCFG37 : (LCDC Offset: 0x420) (R/W 32) High-End Overlay Configuration Register 37 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t YPHI4COEFF0:8;             /**< bit:   0..7  Vertical Coefficient for phase 4 tap 0   */
    uint32_t YPHI4COEFF1:8;             /**< bit:  8..15  Vertical Coefficient for phase 4 tap 1   */
    uint32_t YPHI4COEFF2:8;             /**< bit: 16..23  Vertical Coefficient for phase 4 tap 2   */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG37_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG37_OFFSET                (0x420)                                       /**<  (LCDC_HEOCFG37) High-End Overlay Configuration Register 37  Offset */

#define LCDC_HEOCFG37_YPHI4COEFF0_Pos       0                                              /**< (LCDC_HEOCFG37) Vertical Coefficient for phase 4 tap 0 Position */
#define LCDC_HEOCFG37_YPHI4COEFF0_Msk       (_U_(0xFF) << LCDC_HEOCFG37_YPHI4COEFF0_Pos)   /**< (LCDC_HEOCFG37) Vertical Coefficient for phase 4 tap 0 Mask */
#define LCDC_HEOCFG37_YPHI4COEFF0(value)    (LCDC_HEOCFG37_YPHI4COEFF0_Msk & ((value) << LCDC_HEOCFG37_YPHI4COEFF0_Pos))
#define LCDC_HEOCFG37_YPHI4COEFF1_Pos       8                                              /**< (LCDC_HEOCFG37) Vertical Coefficient for phase 4 tap 1 Position */
#define LCDC_HEOCFG37_YPHI4COEFF1_Msk       (_U_(0xFF) << LCDC_HEOCFG37_YPHI4COEFF1_Pos)   /**< (LCDC_HEOCFG37) Vertical Coefficient for phase 4 tap 1 Mask */
#define LCDC_HEOCFG37_YPHI4COEFF1(value)    (LCDC_HEOCFG37_YPHI4COEFF1_Msk & ((value) << LCDC_HEOCFG37_YPHI4COEFF1_Pos))
#define LCDC_HEOCFG37_YPHI4COEFF2_Pos       16                                             /**< (LCDC_HEOCFG37) Vertical Coefficient for phase 4 tap 2 Position */
#define LCDC_HEOCFG37_YPHI4COEFF2_Msk       (_U_(0xFF) << LCDC_HEOCFG37_YPHI4COEFF2_Pos)   /**< (LCDC_HEOCFG37) Vertical Coefficient for phase 4 tap 2 Mask */
#define LCDC_HEOCFG37_YPHI4COEFF2(value)    (LCDC_HEOCFG37_YPHI4COEFF2_Msk & ((value) << LCDC_HEOCFG37_YPHI4COEFF2_Pos))
#define LCDC_HEOCFG37_MASK                  _U_(0xFFFFFF)                                  /**< \deprecated (LCDC_HEOCFG37) Register MASK  (Use LCDC_HEOCFG37_Msk instead)  */
#define LCDC_HEOCFG37_Msk                   _U_(0xFFFFFF)                                  /**< (LCDC_HEOCFG37) Register Mask  */


/* -------- LCDC_HEOCFG38 : (LCDC Offset: 0x424) (R/W 32) High-End Overlay Configuration Register 38 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t YPHI5COEFF0:8;             /**< bit:   0..7  Vertical Coefficient for phase 5 tap 0   */
    uint32_t YPHI5COEFF1:8;             /**< bit:  8..15  Vertical Coefficient for phase 5 tap 1   */
    uint32_t YPHI5COEFF2:8;             /**< bit: 16..23  Vertical Coefficient for phase 5 tap 2   */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG38_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG38_OFFSET                (0x424)                                       /**<  (LCDC_HEOCFG38) High-End Overlay Configuration Register 38  Offset */

#define LCDC_HEOCFG38_YPHI5COEFF0_Pos       0                                              /**< (LCDC_HEOCFG38) Vertical Coefficient for phase 5 tap 0 Position */
#define LCDC_HEOCFG38_YPHI5COEFF0_Msk       (_U_(0xFF) << LCDC_HEOCFG38_YPHI5COEFF0_Pos)   /**< (LCDC_HEOCFG38) Vertical Coefficient for phase 5 tap 0 Mask */
#define LCDC_HEOCFG38_YPHI5COEFF0(value)    (LCDC_HEOCFG38_YPHI5COEFF0_Msk & ((value) << LCDC_HEOCFG38_YPHI5COEFF0_Pos))
#define LCDC_HEOCFG38_YPHI5COEFF1_Pos       8                                              /**< (LCDC_HEOCFG38) Vertical Coefficient for phase 5 tap 1 Position */
#define LCDC_HEOCFG38_YPHI5COEFF1_Msk       (_U_(0xFF) << LCDC_HEOCFG38_YPHI5COEFF1_Pos)   /**< (LCDC_HEOCFG38) Vertical Coefficient for phase 5 tap 1 Mask */
#define LCDC_HEOCFG38_YPHI5COEFF1(value)    (LCDC_HEOCFG38_YPHI5COEFF1_Msk & ((value) << LCDC_HEOCFG38_YPHI5COEFF1_Pos))
#define LCDC_HEOCFG38_YPHI5COEFF2_Pos       16                                             /**< (LCDC_HEOCFG38) Vertical Coefficient for phase 5 tap 2 Position */
#define LCDC_HEOCFG38_YPHI5COEFF2_Msk       (_U_(0xFF) << LCDC_HEOCFG38_YPHI5COEFF2_Pos)   /**< (LCDC_HEOCFG38) Vertical Coefficient for phase 5 tap 2 Mask */
#define LCDC_HEOCFG38_YPHI5COEFF2(value)    (LCDC_HEOCFG38_YPHI5COEFF2_Msk & ((value) << LCDC_HEOCFG38_YPHI5COEFF2_Pos))
#define LCDC_HEOCFG38_MASK                  _U_(0xFFFFFF)                                  /**< \deprecated (LCDC_HEOCFG38) Register MASK  (Use LCDC_HEOCFG38_Msk instead)  */
#define LCDC_HEOCFG38_Msk                   _U_(0xFFFFFF)                                  /**< (LCDC_HEOCFG38) Register Mask  */


/* -------- LCDC_HEOCFG39 : (LCDC Offset: 0x428) (R/W 32) High-End Overlay Configuration Register 39 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t YPHI6COEFF0:8;             /**< bit:   0..7  Vertical Coefficient for phase 6 tap 0   */
    uint32_t YPHI6COEFF1:8;             /**< bit:  8..15  Vertical Coefficient for phase 6 tap 1   */
    uint32_t YPHI6COEFF2:8;             /**< bit: 16..23  Vertical Coefficient for phase 6 tap 2   */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG39_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG39_OFFSET                (0x428)                                       /**<  (LCDC_HEOCFG39) High-End Overlay Configuration Register 39  Offset */

#define LCDC_HEOCFG39_YPHI6COEFF0_Pos       0                                              /**< (LCDC_HEOCFG39) Vertical Coefficient for phase 6 tap 0 Position */
#define LCDC_HEOCFG39_YPHI6COEFF0_Msk       (_U_(0xFF) << LCDC_HEOCFG39_YPHI6COEFF0_Pos)   /**< (LCDC_HEOCFG39) Vertical Coefficient for phase 6 tap 0 Mask */
#define LCDC_HEOCFG39_YPHI6COEFF0(value)    (LCDC_HEOCFG39_YPHI6COEFF0_Msk & ((value) << LCDC_HEOCFG39_YPHI6COEFF0_Pos))
#define LCDC_HEOCFG39_YPHI6COEFF1_Pos       8                                              /**< (LCDC_HEOCFG39) Vertical Coefficient for phase 6 tap 1 Position */
#define LCDC_HEOCFG39_YPHI6COEFF1_Msk       (_U_(0xFF) << LCDC_HEOCFG39_YPHI6COEFF1_Pos)   /**< (LCDC_HEOCFG39) Vertical Coefficient for phase 6 tap 1 Mask */
#define LCDC_HEOCFG39_YPHI6COEFF1(value)    (LCDC_HEOCFG39_YPHI6COEFF1_Msk & ((value) << LCDC_HEOCFG39_YPHI6COEFF1_Pos))
#define LCDC_HEOCFG39_YPHI6COEFF2_Pos       16                                             /**< (LCDC_HEOCFG39) Vertical Coefficient for phase 6 tap 2 Position */
#define LCDC_HEOCFG39_YPHI6COEFF2_Msk       (_U_(0xFF) << LCDC_HEOCFG39_YPHI6COEFF2_Pos)   /**< (LCDC_HEOCFG39) Vertical Coefficient for phase 6 tap 2 Mask */
#define LCDC_HEOCFG39_YPHI6COEFF2(value)    (LCDC_HEOCFG39_YPHI6COEFF2_Msk & ((value) << LCDC_HEOCFG39_YPHI6COEFF2_Pos))
#define LCDC_HEOCFG39_MASK                  _U_(0xFFFFFF)                                  /**< \deprecated (LCDC_HEOCFG39) Register MASK  (Use LCDC_HEOCFG39_Msk instead)  */
#define LCDC_HEOCFG39_Msk                   _U_(0xFFFFFF)                                  /**< (LCDC_HEOCFG39) Register Mask  */


/* -------- LCDC_HEOCFG40 : (LCDC Offset: 0x42c) (R/W 32) High-End Overlay Configuration Register 40 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t YPHI7COEFF0:8;             /**< bit:   0..7  Vertical Coefficient for phase 7 tap 0   */
    uint32_t YPHI7COEFF1:8;             /**< bit:  8..15  Vertical Coefficient for phase 7 tap 1   */
    uint32_t YPHI7COEFF2:8;             /**< bit: 16..23  Vertical Coefficient for phase 7 tap 2   */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG40_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG40_OFFSET                (0x42C)                                       /**<  (LCDC_HEOCFG40) High-End Overlay Configuration Register 40  Offset */

#define LCDC_HEOCFG40_YPHI7COEFF0_Pos       0                                              /**< (LCDC_HEOCFG40) Vertical Coefficient for phase 7 tap 0 Position */
#define LCDC_HEOCFG40_YPHI7COEFF0_Msk       (_U_(0xFF) << LCDC_HEOCFG40_YPHI7COEFF0_Pos)   /**< (LCDC_HEOCFG40) Vertical Coefficient for phase 7 tap 0 Mask */
#define LCDC_HEOCFG40_YPHI7COEFF0(value)    (LCDC_HEOCFG40_YPHI7COEFF0_Msk & ((value) << LCDC_HEOCFG40_YPHI7COEFF0_Pos))
#define LCDC_HEOCFG40_YPHI7COEFF1_Pos       8                                              /**< (LCDC_HEOCFG40) Vertical Coefficient for phase 7 tap 1 Position */
#define LCDC_HEOCFG40_YPHI7COEFF1_Msk       (_U_(0xFF) << LCDC_HEOCFG40_YPHI7COEFF1_Pos)   /**< (LCDC_HEOCFG40) Vertical Coefficient for phase 7 tap 1 Mask */
#define LCDC_HEOCFG40_YPHI7COEFF1(value)    (LCDC_HEOCFG40_YPHI7COEFF1_Msk & ((value) << LCDC_HEOCFG40_YPHI7COEFF1_Pos))
#define LCDC_HEOCFG40_YPHI7COEFF2_Pos       16                                             /**< (LCDC_HEOCFG40) Vertical Coefficient for phase 7 tap 2 Position */
#define LCDC_HEOCFG40_YPHI7COEFF2_Msk       (_U_(0xFF) << LCDC_HEOCFG40_YPHI7COEFF2_Pos)   /**< (LCDC_HEOCFG40) Vertical Coefficient for phase 7 tap 2 Mask */
#define LCDC_HEOCFG40_YPHI7COEFF2(value)    (LCDC_HEOCFG40_YPHI7COEFF2_Msk & ((value) << LCDC_HEOCFG40_YPHI7COEFF2_Pos))
#define LCDC_HEOCFG40_MASK                  _U_(0xFFFFFF)                                  /**< \deprecated (LCDC_HEOCFG40) Register MASK  (Use LCDC_HEOCFG40_Msk instead)  */
#define LCDC_HEOCFG40_Msk                   _U_(0xFFFFFF)                                  /**< (LCDC_HEOCFG40) Register Mask  */


/* -------- LCDC_HEOCFG41 : (LCDC Offset: 0x430) (R/W 32) High-End Overlay Configuration Register 41 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XPHIDEF:3;                 /**< bit:   0..2  Horizontal Filter Phase Offset           */
    uint32_t :13;                       /**< bit:  3..15  Reserved */
    uint32_t YPHIDEF:3;                 /**< bit: 16..18  Vertical Filter Phase Offset             */
    uint32_t :13;                       /**< bit: 19..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCFG41_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCFG41_OFFSET                (0x430)                                       /**<  (LCDC_HEOCFG41) High-End Overlay Configuration Register 41  Offset */

#define LCDC_HEOCFG41_XPHIDEF_Pos           0                                              /**< (LCDC_HEOCFG41) Horizontal Filter Phase Offset Position */
#define LCDC_HEOCFG41_XPHIDEF_Msk           (_U_(0x7) << LCDC_HEOCFG41_XPHIDEF_Pos)        /**< (LCDC_HEOCFG41) Horizontal Filter Phase Offset Mask */
#define LCDC_HEOCFG41_XPHIDEF(value)        (LCDC_HEOCFG41_XPHIDEF_Msk & ((value) << LCDC_HEOCFG41_XPHIDEF_Pos))
#define LCDC_HEOCFG41_YPHIDEF_Pos           16                                             /**< (LCDC_HEOCFG41) Vertical Filter Phase Offset Position */
#define LCDC_HEOCFG41_YPHIDEF_Msk           (_U_(0x7) << LCDC_HEOCFG41_YPHIDEF_Pos)        /**< (LCDC_HEOCFG41) Vertical Filter Phase Offset Mask */
#define LCDC_HEOCFG41_YPHIDEF(value)        (LCDC_HEOCFG41_YPHIDEF_Msk & ((value) << LCDC_HEOCFG41_YPHIDEF_Pos))
#define LCDC_HEOCFG41_MASK                  _U_(0x70007)                                   /**< \deprecated (LCDC_HEOCFG41) Register MASK  (Use LCDC_HEOCFG41_Msk instead)  */
#define LCDC_HEOCFG41_Msk                   _U_(0x70007)                                   /**< (LCDC_HEOCFG41) Register Mask  */


/* -------- LCDC_PPCHER : (LCDC Offset: 0x540) (/W 32) Post Processing Channel Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHEN:1;                    /**< bit:      0  Channel Enable                           */
    uint32_t UPDATEEN:1;                /**< bit:      1  Update Overlay Attributes Enable         */
    uint32_t A2QEN:1;                   /**< bit:      2  Add To Queue Enable                      */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_PPCHER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_PPCHER_OFFSET                  (0x540)                                       /**<  (LCDC_PPCHER) Post Processing Channel Enable Register  Offset */

#define LCDC_PPCHER_CHEN_Pos                0                                              /**< (LCDC_PPCHER) Channel Enable Position */
#define LCDC_PPCHER_CHEN_Msk                (_U_(0x1) << LCDC_PPCHER_CHEN_Pos)             /**< (LCDC_PPCHER) Channel Enable Mask */
#define LCDC_PPCHER_CHEN                    LCDC_PPCHER_CHEN_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPCHER_CHEN_Msk instead */
#define LCDC_PPCHER_UPDATEEN_Pos            1                                              /**< (LCDC_PPCHER) Update Overlay Attributes Enable Position */
#define LCDC_PPCHER_UPDATEEN_Msk            (_U_(0x1) << LCDC_PPCHER_UPDATEEN_Pos)         /**< (LCDC_PPCHER) Update Overlay Attributes Enable Mask */
#define LCDC_PPCHER_UPDATEEN                LCDC_PPCHER_UPDATEEN_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPCHER_UPDATEEN_Msk instead */
#define LCDC_PPCHER_A2QEN_Pos               2                                              /**< (LCDC_PPCHER) Add To Queue Enable Position */
#define LCDC_PPCHER_A2QEN_Msk               (_U_(0x1) << LCDC_PPCHER_A2QEN_Pos)            /**< (LCDC_PPCHER) Add To Queue Enable Mask */
#define LCDC_PPCHER_A2QEN                   LCDC_PPCHER_A2QEN_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPCHER_A2QEN_Msk instead */
#define LCDC_PPCHER_MASK                    _U_(0x07)                                      /**< \deprecated (LCDC_PPCHER) Register MASK  (Use LCDC_PPCHER_Msk instead)  */
#define LCDC_PPCHER_Msk                     _U_(0x07)                                      /**< (LCDC_PPCHER) Register Mask  */


/* -------- LCDC_PPCHDR : (LCDC Offset: 0x544) (/W 32) Post Processing Channel Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHDIS:1;                   /**< bit:      0  Channel Disable                          */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t CHRST:1;                   /**< bit:      8  Channel Reset                            */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_PPCHDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_PPCHDR_OFFSET                  (0x544)                                       /**<  (LCDC_PPCHDR) Post Processing Channel Disable Register  Offset */

#define LCDC_PPCHDR_CHDIS_Pos               0                                              /**< (LCDC_PPCHDR) Channel Disable Position */
#define LCDC_PPCHDR_CHDIS_Msk               (_U_(0x1) << LCDC_PPCHDR_CHDIS_Pos)            /**< (LCDC_PPCHDR) Channel Disable Mask */
#define LCDC_PPCHDR_CHDIS                   LCDC_PPCHDR_CHDIS_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPCHDR_CHDIS_Msk instead */
#define LCDC_PPCHDR_CHRST_Pos               8                                              /**< (LCDC_PPCHDR) Channel Reset Position */
#define LCDC_PPCHDR_CHRST_Msk               (_U_(0x1) << LCDC_PPCHDR_CHRST_Pos)            /**< (LCDC_PPCHDR) Channel Reset Mask */
#define LCDC_PPCHDR_CHRST                   LCDC_PPCHDR_CHRST_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPCHDR_CHRST_Msk instead */
#define LCDC_PPCHDR_MASK                    _U_(0x101)                                     /**< \deprecated (LCDC_PPCHDR) Register MASK  (Use LCDC_PPCHDR_Msk instead)  */
#define LCDC_PPCHDR_Msk                     _U_(0x101)                                     /**< (LCDC_PPCHDR) Register Mask  */


/* -------- LCDC_PPCHSR : (LCDC Offset: 0x548) (R/ 32) Post Processing Channel Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHSR:1;                    /**< bit:      0  Channel Status                           */
    uint32_t UPDATESR:1;                /**< bit:      1  Update Overlay Attributes In Progress Status */
    uint32_t A2QSR:1;                   /**< bit:      2  Add To Queue Status                      */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_PPCHSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_PPCHSR_OFFSET                  (0x548)                                       /**<  (LCDC_PPCHSR) Post Processing Channel Status Register  Offset */

#define LCDC_PPCHSR_CHSR_Pos                0                                              /**< (LCDC_PPCHSR) Channel Status Position */
#define LCDC_PPCHSR_CHSR_Msk                (_U_(0x1) << LCDC_PPCHSR_CHSR_Pos)             /**< (LCDC_PPCHSR) Channel Status Mask */
#define LCDC_PPCHSR_CHSR                    LCDC_PPCHSR_CHSR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPCHSR_CHSR_Msk instead */
#define LCDC_PPCHSR_UPDATESR_Pos            1                                              /**< (LCDC_PPCHSR) Update Overlay Attributes In Progress Status Position */
#define LCDC_PPCHSR_UPDATESR_Msk            (_U_(0x1) << LCDC_PPCHSR_UPDATESR_Pos)         /**< (LCDC_PPCHSR) Update Overlay Attributes In Progress Status Mask */
#define LCDC_PPCHSR_UPDATESR                LCDC_PPCHSR_UPDATESR_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPCHSR_UPDATESR_Msk instead */
#define LCDC_PPCHSR_A2QSR_Pos               2                                              /**< (LCDC_PPCHSR) Add To Queue Status Position */
#define LCDC_PPCHSR_A2QSR_Msk               (_U_(0x1) << LCDC_PPCHSR_A2QSR_Pos)            /**< (LCDC_PPCHSR) Add To Queue Status Mask */
#define LCDC_PPCHSR_A2QSR                   LCDC_PPCHSR_A2QSR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPCHSR_A2QSR_Msk instead */
#define LCDC_PPCHSR_MASK                    _U_(0x07)                                      /**< \deprecated (LCDC_PPCHSR) Register MASK  (Use LCDC_PPCHSR_Msk instead)  */
#define LCDC_PPCHSR_Msk                     _U_(0x07)                                      /**< (LCDC_PPCHSR) Register Mask  */


/* -------- LCDC_PPIER : (LCDC Offset: 0x54c) (/W 32) Post Processing Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DMA:1;                     /**< bit:      2  End of DMA Transfer Interrupt Enable     */
    uint32_t DSCR:1;                    /**< bit:      3  Descriptor Loaded Interrupt Enable       */
    uint32_t ADD:1;                     /**< bit:      4  Head Descriptor Loaded Interrupt Enable  */
    uint32_t DONE:1;                    /**< bit:      5  End of List Interrupt Enable             */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_PPIER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_PPIER_OFFSET                   (0x54C)                                       /**<  (LCDC_PPIER) Post Processing Interrupt Enable Register  Offset */

#define LCDC_PPIER_DMA_Pos                  2                                              /**< (LCDC_PPIER) End of DMA Transfer Interrupt Enable Position */
#define LCDC_PPIER_DMA_Msk                  (_U_(0x1) << LCDC_PPIER_DMA_Pos)               /**< (LCDC_PPIER) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_PPIER_DMA                      LCDC_PPIER_DMA_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPIER_DMA_Msk instead */
#define LCDC_PPIER_DSCR_Pos                 3                                              /**< (LCDC_PPIER) Descriptor Loaded Interrupt Enable Position */
#define LCDC_PPIER_DSCR_Msk                 (_U_(0x1) << LCDC_PPIER_DSCR_Pos)              /**< (LCDC_PPIER) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_PPIER_DSCR                     LCDC_PPIER_DSCR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPIER_DSCR_Msk instead */
#define LCDC_PPIER_ADD_Pos                  4                                              /**< (LCDC_PPIER) Head Descriptor Loaded Interrupt Enable Position */
#define LCDC_PPIER_ADD_Msk                  (_U_(0x1) << LCDC_PPIER_ADD_Pos)               /**< (LCDC_PPIER) Head Descriptor Loaded Interrupt Enable Mask */
#define LCDC_PPIER_ADD                      LCDC_PPIER_ADD_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPIER_ADD_Msk instead */
#define LCDC_PPIER_DONE_Pos                 5                                              /**< (LCDC_PPIER) End of List Interrupt Enable Position */
#define LCDC_PPIER_DONE_Msk                 (_U_(0x1) << LCDC_PPIER_DONE_Pos)              /**< (LCDC_PPIER) End of List Interrupt Enable Mask */
#define LCDC_PPIER_DONE                     LCDC_PPIER_DONE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPIER_DONE_Msk instead */
#define LCDC_PPIER_MASK                     _U_(0x3C)                                      /**< \deprecated (LCDC_PPIER) Register MASK  (Use LCDC_PPIER_Msk instead)  */
#define LCDC_PPIER_Msk                      _U_(0x3C)                                      /**< (LCDC_PPIER) Register Mask  */


/* -------- LCDC_PPIDR : (LCDC Offset: 0x550) (/W 32) Post Processing Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DMA:1;                     /**< bit:      2  End of DMA Transfer Interrupt Disable    */
    uint32_t DSCR:1;                    /**< bit:      3  Descriptor Loaded Interrupt Disable      */
    uint32_t ADD:1;                     /**< bit:      4  Head Descriptor Loaded Interrupt Disable */
    uint32_t DONE:1;                    /**< bit:      5  End of List Interrupt Disable            */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_PPIDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_PPIDR_OFFSET                   (0x550)                                       /**<  (LCDC_PPIDR) Post Processing Interrupt Disable Register  Offset */

#define LCDC_PPIDR_DMA_Pos                  2                                              /**< (LCDC_PPIDR) End of DMA Transfer Interrupt Disable Position */
#define LCDC_PPIDR_DMA_Msk                  (_U_(0x1) << LCDC_PPIDR_DMA_Pos)               /**< (LCDC_PPIDR) End of DMA Transfer Interrupt Disable Mask */
#define LCDC_PPIDR_DMA                      LCDC_PPIDR_DMA_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPIDR_DMA_Msk instead */
#define LCDC_PPIDR_DSCR_Pos                 3                                              /**< (LCDC_PPIDR) Descriptor Loaded Interrupt Disable Position */
#define LCDC_PPIDR_DSCR_Msk                 (_U_(0x1) << LCDC_PPIDR_DSCR_Pos)              /**< (LCDC_PPIDR) Descriptor Loaded Interrupt Disable Mask */
#define LCDC_PPIDR_DSCR                     LCDC_PPIDR_DSCR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPIDR_DSCR_Msk instead */
#define LCDC_PPIDR_ADD_Pos                  4                                              /**< (LCDC_PPIDR) Head Descriptor Loaded Interrupt Disable Position */
#define LCDC_PPIDR_ADD_Msk                  (_U_(0x1) << LCDC_PPIDR_ADD_Pos)               /**< (LCDC_PPIDR) Head Descriptor Loaded Interrupt Disable Mask */
#define LCDC_PPIDR_ADD                      LCDC_PPIDR_ADD_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPIDR_ADD_Msk instead */
#define LCDC_PPIDR_DONE_Pos                 5                                              /**< (LCDC_PPIDR) End of List Interrupt Disable Position */
#define LCDC_PPIDR_DONE_Msk                 (_U_(0x1) << LCDC_PPIDR_DONE_Pos)              /**< (LCDC_PPIDR) End of List Interrupt Disable Mask */
#define LCDC_PPIDR_DONE                     LCDC_PPIDR_DONE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPIDR_DONE_Msk instead */
#define LCDC_PPIDR_MASK                     _U_(0x3C)                                      /**< \deprecated (LCDC_PPIDR) Register MASK  (Use LCDC_PPIDR_Msk instead)  */
#define LCDC_PPIDR_Msk                      _U_(0x3C)                                      /**< (LCDC_PPIDR) Register Mask  */


/* -------- LCDC_PPIMR : (LCDC Offset: 0x554) (R/ 32) Post Processing Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DMA:1;                     /**< bit:      2  End of DMA Transfer Interrupt Mask       */
    uint32_t DSCR:1;                    /**< bit:      3  Descriptor Loaded Interrupt Mask         */
    uint32_t ADD:1;                     /**< bit:      4  Head Descriptor Loaded Interrupt Mask    */
    uint32_t DONE:1;                    /**< bit:      5  End of List Interrupt Mask               */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_PPIMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_PPIMR_OFFSET                   (0x554)                                       /**<  (LCDC_PPIMR) Post Processing Interrupt Mask Register  Offset */

#define LCDC_PPIMR_DMA_Pos                  2                                              /**< (LCDC_PPIMR) End of DMA Transfer Interrupt Mask Position */
#define LCDC_PPIMR_DMA_Msk                  (_U_(0x1) << LCDC_PPIMR_DMA_Pos)               /**< (LCDC_PPIMR) End of DMA Transfer Interrupt Mask Mask */
#define LCDC_PPIMR_DMA                      LCDC_PPIMR_DMA_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPIMR_DMA_Msk instead */
#define LCDC_PPIMR_DSCR_Pos                 3                                              /**< (LCDC_PPIMR) Descriptor Loaded Interrupt Mask Position */
#define LCDC_PPIMR_DSCR_Msk                 (_U_(0x1) << LCDC_PPIMR_DSCR_Pos)              /**< (LCDC_PPIMR) Descriptor Loaded Interrupt Mask Mask */
#define LCDC_PPIMR_DSCR                     LCDC_PPIMR_DSCR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPIMR_DSCR_Msk instead */
#define LCDC_PPIMR_ADD_Pos                  4                                              /**< (LCDC_PPIMR) Head Descriptor Loaded Interrupt Mask Position */
#define LCDC_PPIMR_ADD_Msk                  (_U_(0x1) << LCDC_PPIMR_ADD_Pos)               /**< (LCDC_PPIMR) Head Descriptor Loaded Interrupt Mask Mask */
#define LCDC_PPIMR_ADD                      LCDC_PPIMR_ADD_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPIMR_ADD_Msk instead */
#define LCDC_PPIMR_DONE_Pos                 5                                              /**< (LCDC_PPIMR) End of List Interrupt Mask Position */
#define LCDC_PPIMR_DONE_Msk                 (_U_(0x1) << LCDC_PPIMR_DONE_Pos)              /**< (LCDC_PPIMR) End of List Interrupt Mask Mask */
#define LCDC_PPIMR_DONE                     LCDC_PPIMR_DONE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPIMR_DONE_Msk instead */
#define LCDC_PPIMR_MASK                     _U_(0x3C)                                      /**< \deprecated (LCDC_PPIMR) Register MASK  (Use LCDC_PPIMR_Msk instead)  */
#define LCDC_PPIMR_Msk                      _U_(0x3C)                                      /**< (LCDC_PPIMR) Register Mask  */


/* -------- LCDC_PPISR : (LCDC Offset: 0x558) (R/ 32) Post Processing Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DMA:1;                     /**< bit:      2  End of DMA Transfer                      */
    uint32_t DSCR:1;                    /**< bit:      3  DMA Descriptor Loaded                    */
    uint32_t ADD:1;                     /**< bit:      4  Head Descriptor Loaded                   */
    uint32_t DONE:1;                    /**< bit:      5  End of List Detected                     */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_PPISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_PPISR_OFFSET                   (0x558)                                       /**<  (LCDC_PPISR) Post Processing Interrupt Status Register  Offset */

#define LCDC_PPISR_DMA_Pos                  2                                              /**< (LCDC_PPISR) End of DMA Transfer Position */
#define LCDC_PPISR_DMA_Msk                  (_U_(0x1) << LCDC_PPISR_DMA_Pos)               /**< (LCDC_PPISR) End of DMA Transfer Mask */
#define LCDC_PPISR_DMA                      LCDC_PPISR_DMA_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPISR_DMA_Msk instead */
#define LCDC_PPISR_DSCR_Pos                 3                                              /**< (LCDC_PPISR) DMA Descriptor Loaded Position */
#define LCDC_PPISR_DSCR_Msk                 (_U_(0x1) << LCDC_PPISR_DSCR_Pos)              /**< (LCDC_PPISR) DMA Descriptor Loaded Mask */
#define LCDC_PPISR_DSCR                     LCDC_PPISR_DSCR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPISR_DSCR_Msk instead */
#define LCDC_PPISR_ADD_Pos                  4                                              /**< (LCDC_PPISR) Head Descriptor Loaded Position */
#define LCDC_PPISR_ADD_Msk                  (_U_(0x1) << LCDC_PPISR_ADD_Pos)               /**< (LCDC_PPISR) Head Descriptor Loaded Mask */
#define LCDC_PPISR_ADD                      LCDC_PPISR_ADD_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPISR_ADD_Msk instead */
#define LCDC_PPISR_DONE_Pos                 5                                              /**< (LCDC_PPISR) End of List Detected Position */
#define LCDC_PPISR_DONE_Msk                 (_U_(0x1) << LCDC_PPISR_DONE_Pos)              /**< (LCDC_PPISR) End of List Detected Mask */
#define LCDC_PPISR_DONE                     LCDC_PPISR_DONE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPISR_DONE_Msk instead */
#define LCDC_PPISR_MASK                     _U_(0x3C)                                      /**< \deprecated (LCDC_PPISR) Register MASK  (Use LCDC_PPISR_Msk instead)  */
#define LCDC_PPISR_Msk                      _U_(0x3C)                                      /**< (LCDC_PPISR) Register Mask  */


/* -------- LCDC_PPHEAD : (LCDC Offset: 0x55c) (R/W 32) Post Processing Head Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t HEAD:30;                   /**< bit:  2..31  DMA Head Pointer                         */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_PPHEAD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_PPHEAD_OFFSET                  (0x55C)                                       /**<  (LCDC_PPHEAD) Post Processing Head Register  Offset */

#define LCDC_PPHEAD_HEAD_Pos                2                                              /**< (LCDC_PPHEAD) DMA Head Pointer Position */
#define LCDC_PPHEAD_HEAD_Msk                (_U_(0x3FFFFFFF) << LCDC_PPHEAD_HEAD_Pos)      /**< (LCDC_PPHEAD) DMA Head Pointer Mask */
#define LCDC_PPHEAD_HEAD(value)             (LCDC_PPHEAD_HEAD_Msk & ((value) << LCDC_PPHEAD_HEAD_Pos))
#define LCDC_PPHEAD_MASK                    _U_(0xFFFFFFFC)                                /**< \deprecated (LCDC_PPHEAD) Register MASK  (Use LCDC_PPHEAD_Msk instead)  */
#define LCDC_PPHEAD_Msk                     _U_(0xFFFFFFFC)                                /**< (LCDC_PPHEAD) Register Mask  */


/* -------- LCDC_PPADDR : (LCDC Offset: 0x560) (R/W 32) Post Processing Address Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR:32;                   /**< bit:  0..31  DMA Transfer Start Address               */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_PPADDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_PPADDR_OFFSET                  (0x560)                                       /**<  (LCDC_PPADDR) Post Processing Address Register  Offset */

#define LCDC_PPADDR_ADDR_Pos                0                                              /**< (LCDC_PPADDR) DMA Transfer Start Address Position */
#define LCDC_PPADDR_ADDR_Msk                (_U_(0xFFFFFFFF) << LCDC_PPADDR_ADDR_Pos)      /**< (LCDC_PPADDR) DMA Transfer Start Address Mask */
#define LCDC_PPADDR_ADDR(value)             (LCDC_PPADDR_ADDR_Msk & ((value) << LCDC_PPADDR_ADDR_Pos))
#define LCDC_PPADDR_MASK                    _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_PPADDR) Register MASK  (Use LCDC_PPADDR_Msk instead)  */
#define LCDC_PPADDR_Msk                     _U_(0xFFFFFFFF)                                /**< (LCDC_PPADDR) Register Mask  */


/* -------- LCDC_PPCTRL : (LCDC Offset: 0x564) (R/W 32) Post Processing Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DFETCH:1;                  /**< bit:      0  Transfer Descriptor Fetch Enable         */
    uint32_t :1;                        /**< bit:      1  Reserved */
    uint32_t DMAIEN:1;                  /**< bit:      2  End of DMA Transfer Interrupt Enable     */
    uint32_t DSCRIEN:1;                 /**< bit:      3  Descriptor Loaded Interrupt Enable       */
    uint32_t ADDIEN:1;                  /**< bit:      4  Add Head Descriptor to Queue Interrupt Enable */
    uint32_t DONEIEN:1;                 /**< bit:      5  End of List Interrupt Enable             */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_PPCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_PPCTRL_OFFSET                  (0x564)                                       /**<  (LCDC_PPCTRL) Post Processing Control Register  Offset */

#define LCDC_PPCTRL_DFETCH_Pos              0                                              /**< (LCDC_PPCTRL) Transfer Descriptor Fetch Enable Position */
#define LCDC_PPCTRL_DFETCH_Msk              (_U_(0x1) << LCDC_PPCTRL_DFETCH_Pos)           /**< (LCDC_PPCTRL) Transfer Descriptor Fetch Enable Mask */
#define LCDC_PPCTRL_DFETCH                  LCDC_PPCTRL_DFETCH_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPCTRL_DFETCH_Msk instead */
#define LCDC_PPCTRL_DMAIEN_Pos              2                                              /**< (LCDC_PPCTRL) End of DMA Transfer Interrupt Enable Position */
#define LCDC_PPCTRL_DMAIEN_Msk              (_U_(0x1) << LCDC_PPCTRL_DMAIEN_Pos)           /**< (LCDC_PPCTRL) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_PPCTRL_DMAIEN                  LCDC_PPCTRL_DMAIEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPCTRL_DMAIEN_Msk instead */
#define LCDC_PPCTRL_DSCRIEN_Pos             3                                              /**< (LCDC_PPCTRL) Descriptor Loaded Interrupt Enable Position */
#define LCDC_PPCTRL_DSCRIEN_Msk             (_U_(0x1) << LCDC_PPCTRL_DSCRIEN_Pos)          /**< (LCDC_PPCTRL) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_PPCTRL_DSCRIEN                 LCDC_PPCTRL_DSCRIEN_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPCTRL_DSCRIEN_Msk instead */
#define LCDC_PPCTRL_ADDIEN_Pos              4                                              /**< (LCDC_PPCTRL) Add Head Descriptor to Queue Interrupt Enable Position */
#define LCDC_PPCTRL_ADDIEN_Msk              (_U_(0x1) << LCDC_PPCTRL_ADDIEN_Pos)           /**< (LCDC_PPCTRL) Add Head Descriptor to Queue Interrupt Enable Mask */
#define LCDC_PPCTRL_ADDIEN                  LCDC_PPCTRL_ADDIEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPCTRL_ADDIEN_Msk instead */
#define LCDC_PPCTRL_DONEIEN_Pos             5                                              /**< (LCDC_PPCTRL) End of List Interrupt Enable Position */
#define LCDC_PPCTRL_DONEIEN_Msk             (_U_(0x1) << LCDC_PPCTRL_DONEIEN_Pos)          /**< (LCDC_PPCTRL) End of List Interrupt Enable Mask */
#define LCDC_PPCTRL_DONEIEN                 LCDC_PPCTRL_DONEIEN_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPCTRL_DONEIEN_Msk instead */
#define LCDC_PPCTRL_MASK                    _U_(0x3D)                                      /**< \deprecated (LCDC_PPCTRL) Register MASK  (Use LCDC_PPCTRL_Msk instead)  */
#define LCDC_PPCTRL_Msk                     _U_(0x3D)                                      /**< (LCDC_PPCTRL) Register Mask  */


/* -------- LCDC_PPNEXT : (LCDC Offset: 0x568) (R/W 32) Post Processing Next Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NEXT:32;                   /**< bit:  0..31  DMA Descriptor Next Address              */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_PPNEXT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_PPNEXT_OFFSET                  (0x568)                                       /**<  (LCDC_PPNEXT) Post Processing Next Register  Offset */

#define LCDC_PPNEXT_NEXT_Pos                0                                              /**< (LCDC_PPNEXT) DMA Descriptor Next Address Position */
#define LCDC_PPNEXT_NEXT_Msk                (_U_(0xFFFFFFFF) << LCDC_PPNEXT_NEXT_Pos)      /**< (LCDC_PPNEXT) DMA Descriptor Next Address Mask */
#define LCDC_PPNEXT_NEXT(value)             (LCDC_PPNEXT_NEXT_Msk & ((value) << LCDC_PPNEXT_NEXT_Pos))
#define LCDC_PPNEXT_MASK                    _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_PPNEXT) Register MASK  (Use LCDC_PPNEXT_Msk instead)  */
#define LCDC_PPNEXT_Msk                     _U_(0xFFFFFFFF)                                /**< (LCDC_PPNEXT) Register Mask  */


/* -------- LCDC_PPCFG0 : (LCDC Offset: 0x56c) (R/W 32) Post Processing Configuration Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIF:1;                     /**< bit:      0  Source Interface                         */
    uint32_t :3;                        /**< bit:   1..3  Reserved */
    uint32_t BLEN:2;                    /**< bit:   4..5  AHB Burst Length                         */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t DLBO:1;                    /**< bit:      8  Defined Length Burst Only For Channel Bus Transaction */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_PPCFG0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_PPCFG0_OFFSET                  (0x56C)                                       /**<  (LCDC_PPCFG0) Post Processing Configuration Register 0  Offset */

#define LCDC_PPCFG0_SIF_Pos                 0                                              /**< (LCDC_PPCFG0) Source Interface Position */
#define LCDC_PPCFG0_SIF_Msk                 (_U_(0x1) << LCDC_PPCFG0_SIF_Pos)              /**< (LCDC_PPCFG0) Source Interface Mask */
#define LCDC_PPCFG0_SIF                     LCDC_PPCFG0_SIF_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPCFG0_SIF_Msk instead */
#define LCDC_PPCFG0_BLEN_Pos                4                                              /**< (LCDC_PPCFG0) AHB Burst Length Position */
#define LCDC_PPCFG0_BLEN_Msk                (_U_(0x3) << LCDC_PPCFG0_BLEN_Pos)             /**< (LCDC_PPCFG0) AHB Burst Length Mask */
#define LCDC_PPCFG0_BLEN(value)             (LCDC_PPCFG0_BLEN_Msk & ((value) << LCDC_PPCFG0_BLEN_Pos))
#define LCDC_PPCFG0_DLBO_Pos                8                                              /**< (LCDC_PPCFG0) Defined Length Burst Only For Channel Bus Transaction Position */
#define LCDC_PPCFG0_DLBO_Msk                (_U_(0x1) << LCDC_PPCFG0_DLBO_Pos)             /**< (LCDC_PPCFG0) Defined Length Burst Only For Channel Bus Transaction Mask */
#define LCDC_PPCFG0_DLBO                    LCDC_PPCFG0_DLBO_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPCFG0_DLBO_Msk instead */
#define LCDC_PPCFG0_MASK                    _U_(0x131)                                     /**< \deprecated (LCDC_PPCFG0) Register MASK  (Use LCDC_PPCFG0_Msk instead)  */
#define LCDC_PPCFG0_Msk                     _U_(0x131)                                     /**< (LCDC_PPCFG0) Register Mask  */


/* -------- LCDC_PPCFG1 : (LCDC Offset: 0x570) (R/W 32) Post Processing Configuration Register 1 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PPMODE:3;                  /**< bit:   0..2  Post Processing Output Format Selection  */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t ITUBT601:1;                /**< bit:      4  Color Space Conversion Luminance         */
    uint32_t :27;                       /**< bit:  5..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :4;                        /**< bit:   0..3  Reserved */
    uint32_t ITUBT:1;                   /**< bit:      4  Color Space Conversion Luminance         */
    uint32_t :27;                       /**< bit:  5..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_PPCFG1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_PPCFG1_OFFSET                  (0x570)                                       /**<  (LCDC_PPCFG1) Post Processing Configuration Register 1  Offset */

#define LCDC_PPCFG1_PPMODE_Pos              0                                              /**< (LCDC_PPCFG1) Post Processing Output Format Selection Position */
#define LCDC_PPCFG1_PPMODE_Msk              (_U_(0x7) << LCDC_PPCFG1_PPMODE_Pos)           /**< (LCDC_PPCFG1) Post Processing Output Format Selection Mask */
#define LCDC_PPCFG1_PPMODE(value)           (LCDC_PPCFG1_PPMODE_Msk & ((value) << LCDC_PPCFG1_PPMODE_Pos))
#define   LCDC_PPCFG1_PPMODE_PPMODE_RGB_16BPP_Val _U_(0x0)                                       /**< (LCDC_PPCFG1) RGB 16 bpp  */
#define   LCDC_PPCFG1_PPMODE_PPMODE_RGB_24BPP_PACKED_Val _U_(0x1)                                       /**< (LCDC_PPCFG1) RGB 24 bpp PACKED  */
#define   LCDC_PPCFG1_PPMODE_PPMODE_RGB_24BPP_UNPACKED_Val _U_(0x2)                                       /**< (LCDC_PPCFG1) RGB 24 bpp UNPACKED  */
#define   LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE0_Val _U_(0x3)                                       /**< (LCDC_PPCFG1) YCbCr 422 16 bpp (Mode 0)  */
#define   LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE1_Val _U_(0x4)                                       /**< (LCDC_PPCFG1) YCbCr 422 16 bpp (Mode 1)  */
#define   LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE2_Val _U_(0x5)                                       /**< (LCDC_PPCFG1) YCbCr 422 16 bpp (Mode 2)  */
#define   LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE3_Val _U_(0x6)                                       /**< (LCDC_PPCFG1) YCbCr 422 16 bpp (Mode 3)  */
#define LCDC_PPCFG1_PPMODE_PPMODE_RGB_16BPP (LCDC_PPCFG1_PPMODE_PPMODE_RGB_16BPP_Val << LCDC_PPCFG1_PPMODE_Pos)  /**< (LCDC_PPCFG1) RGB 16 bpp Position  */
#define LCDC_PPCFG1_PPMODE_PPMODE_RGB_24BPP_PACKED (LCDC_PPCFG1_PPMODE_PPMODE_RGB_24BPP_PACKED_Val << LCDC_PPCFG1_PPMODE_Pos)  /**< (LCDC_PPCFG1) RGB 24 bpp PACKED Position  */
#define LCDC_PPCFG1_PPMODE_PPMODE_RGB_24BPP_UNPACKED (LCDC_PPCFG1_PPMODE_PPMODE_RGB_24BPP_UNPACKED_Val << LCDC_PPCFG1_PPMODE_Pos)  /**< (LCDC_PPCFG1) RGB 24 bpp UNPACKED Position  */
#define LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE0 (LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE0_Val << LCDC_PPCFG1_PPMODE_Pos)  /**< (LCDC_PPCFG1) YCbCr 422 16 bpp (Mode 0) Position  */
#define LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE1 (LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE1_Val << LCDC_PPCFG1_PPMODE_Pos)  /**< (LCDC_PPCFG1) YCbCr 422 16 bpp (Mode 1) Position  */
#define LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE2 (LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE2_Val << LCDC_PPCFG1_PPMODE_Pos)  /**< (LCDC_PPCFG1) YCbCr 422 16 bpp (Mode 2) Position  */
#define LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE3 (LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE3_Val << LCDC_PPCFG1_PPMODE_Pos)  /**< (LCDC_PPCFG1) YCbCr 422 16 bpp (Mode 3) Position  */
#define LCDC_PPCFG1_ITUBT601_Pos            4                                              /**< (LCDC_PPCFG1) Color Space Conversion Luminance Position */
#define LCDC_PPCFG1_ITUBT601_Msk            (_U_(0x1) << LCDC_PPCFG1_ITUBT601_Pos)         /**< (LCDC_PPCFG1) Color Space Conversion Luminance Mask */
#define LCDC_PPCFG1_ITUBT601                LCDC_PPCFG1_ITUBT601_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPCFG1_ITUBT601_Msk instead */
#define LCDC_PPCFG1_MASK                    _U_(0x17)                                      /**< \deprecated (LCDC_PPCFG1) Register MASK  (Use LCDC_PPCFG1_Msk instead)  */
#define LCDC_PPCFG1_Msk                     _U_(0x17)                                      /**< (LCDC_PPCFG1) Register Mask  */

#define LCDC_PPCFG1_ITUBT_Pos               4                                              /**< (LCDC_PPCFG1 Position) Color Space Conversion Luminance */
#define LCDC_PPCFG1_ITUBT_Msk               (_U_(0x1) << LCDC_PPCFG1_ITUBT_Pos)            /**< (LCDC_PPCFG1 Mask) ITUBT */
#define LCDC_PPCFG1_ITUBT(value)            (LCDC_PPCFG1_ITUBT_Msk & ((value) << LCDC_PPCFG1_ITUBT_Pos))  

/* -------- LCDC_PPCFG2 : (LCDC Offset: 0x574) (R/W 32) Post Processing Configuration Register 2 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XSTRIDE:32;                /**< bit:  0..31  Horizontal Stride                        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_PPCFG2_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_PPCFG2_OFFSET                  (0x574)                                       /**<  (LCDC_PPCFG2) Post Processing Configuration Register 2  Offset */

#define LCDC_PPCFG2_XSTRIDE_Pos             0                                              /**< (LCDC_PPCFG2) Horizontal Stride Position */
#define LCDC_PPCFG2_XSTRIDE_Msk             (_U_(0xFFFFFFFF) << LCDC_PPCFG2_XSTRIDE_Pos)   /**< (LCDC_PPCFG2) Horizontal Stride Mask */
#define LCDC_PPCFG2_XSTRIDE(value)          (LCDC_PPCFG2_XSTRIDE_Msk & ((value) << LCDC_PPCFG2_XSTRIDE_Pos))
#define LCDC_PPCFG2_MASK                    _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_PPCFG2) Register MASK  (Use LCDC_PPCFG2_Msk instead)  */
#define LCDC_PPCFG2_Msk                     _U_(0xFFFFFFFF)                                /**< (LCDC_PPCFG2) Register Mask  */


/* -------- LCDC_PPCFG3 : (LCDC Offset: 0x578) (R/W 32) Post Processing Configuration Register 3 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CSCYR:10;                  /**< bit:   0..9  Color Space Conversion R coefficient for Luminance component, signed format, step set to 1/1024 */
    uint32_t CSCYG:10;                  /**< bit: 10..19  Color Space Conversion G coefficient for Luminance component, signed format, step set to 1/512 */
    uint32_t CSCYB:10;                  /**< bit: 20..29  Color Space Conversion B coefficient for Luminance component, signed format, step set to 1/1024 */
    uint32_t CSCYOFF:1;                 /**< bit:     30  Color Space Conversion Luminance Offset  */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_PPCFG3_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_PPCFG3_OFFSET                  (0x578)                                       /**<  (LCDC_PPCFG3) Post Processing Configuration Register 3  Offset */

#define LCDC_PPCFG3_CSCYR_Pos               0                                              /**< (LCDC_PPCFG3) Color Space Conversion R coefficient for Luminance component, signed format, step set to 1/1024 Position */
#define LCDC_PPCFG3_CSCYR_Msk               (_U_(0x3FF) << LCDC_PPCFG3_CSCYR_Pos)          /**< (LCDC_PPCFG3) Color Space Conversion R coefficient for Luminance component, signed format, step set to 1/1024 Mask */
#define LCDC_PPCFG3_CSCYR(value)            (LCDC_PPCFG3_CSCYR_Msk & ((value) << LCDC_PPCFG3_CSCYR_Pos))
#define LCDC_PPCFG3_CSCYG_Pos               10                                             /**< (LCDC_PPCFG3) Color Space Conversion G coefficient for Luminance component, signed format, step set to 1/512 Position */
#define LCDC_PPCFG3_CSCYG_Msk               (_U_(0x3FF) << LCDC_PPCFG3_CSCYG_Pos)          /**< (LCDC_PPCFG3) Color Space Conversion G coefficient for Luminance component, signed format, step set to 1/512 Mask */
#define LCDC_PPCFG3_CSCYG(value)            (LCDC_PPCFG3_CSCYG_Msk & ((value) << LCDC_PPCFG3_CSCYG_Pos))
#define LCDC_PPCFG3_CSCYB_Pos               20                                             /**< (LCDC_PPCFG3) Color Space Conversion B coefficient for Luminance component, signed format, step set to 1/1024 Position */
#define LCDC_PPCFG3_CSCYB_Msk               (_U_(0x3FF) << LCDC_PPCFG3_CSCYB_Pos)          /**< (LCDC_PPCFG3) Color Space Conversion B coefficient for Luminance component, signed format, step set to 1/1024 Mask */
#define LCDC_PPCFG3_CSCYB(value)            (LCDC_PPCFG3_CSCYB_Msk & ((value) << LCDC_PPCFG3_CSCYB_Pos))
#define LCDC_PPCFG3_CSCYOFF_Pos             30                                             /**< (LCDC_PPCFG3) Color Space Conversion Luminance Offset Position */
#define LCDC_PPCFG3_CSCYOFF_Msk             (_U_(0x1) << LCDC_PPCFG3_CSCYOFF_Pos)          /**< (LCDC_PPCFG3) Color Space Conversion Luminance Offset Mask */
#define LCDC_PPCFG3_CSCYOFF                 LCDC_PPCFG3_CSCYOFF_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPCFG3_CSCYOFF_Msk instead */
#define LCDC_PPCFG3_MASK                    _U_(0x7FFFFFFF)                                /**< \deprecated (LCDC_PPCFG3) Register MASK  (Use LCDC_PPCFG3_Msk instead)  */
#define LCDC_PPCFG3_Msk                     _U_(0x7FFFFFFF)                                /**< (LCDC_PPCFG3) Register Mask  */


/* -------- LCDC_PPCFG4 : (LCDC Offset: 0x57c) (R/W 32) Post Processing Configuration Register 4 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CSCUR:10;                  /**< bit:   0..9  Color Space Conversion R coefficient for Chrominance B component, signed format. (step 1/1024) */
    uint32_t CSCUG:10;                  /**< bit: 10..19  Color Space Conversion G coefficient for Chrominance B component, signed format. (step 1/512) */
    uint32_t CSCUB:10;                  /**< bit: 20..29  Color Space Conversion B coefficient for Chrominance B component, signed format. (step 1/512) */
    uint32_t CSCUOFF:1;                 /**< bit:     30  Color Space Conversion Chrominance B Offset */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_PPCFG4_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_PPCFG4_OFFSET                  (0x57C)                                       /**<  (LCDC_PPCFG4) Post Processing Configuration Register 4  Offset */

#define LCDC_PPCFG4_CSCUR_Pos               0                                              /**< (LCDC_PPCFG4) Color Space Conversion R coefficient for Chrominance B component, signed format. (step 1/1024) Position */
#define LCDC_PPCFG4_CSCUR_Msk               (_U_(0x3FF) << LCDC_PPCFG4_CSCUR_Pos)          /**< (LCDC_PPCFG4) Color Space Conversion R coefficient for Chrominance B component, signed format. (step 1/1024) Mask */
#define LCDC_PPCFG4_CSCUR(value)            (LCDC_PPCFG4_CSCUR_Msk & ((value) << LCDC_PPCFG4_CSCUR_Pos))
#define LCDC_PPCFG4_CSCUG_Pos               10                                             /**< (LCDC_PPCFG4) Color Space Conversion G coefficient for Chrominance B component, signed format. (step 1/512) Position */
#define LCDC_PPCFG4_CSCUG_Msk               (_U_(0x3FF) << LCDC_PPCFG4_CSCUG_Pos)          /**< (LCDC_PPCFG4) Color Space Conversion G coefficient for Chrominance B component, signed format. (step 1/512) Mask */
#define LCDC_PPCFG4_CSCUG(value)            (LCDC_PPCFG4_CSCUG_Msk & ((value) << LCDC_PPCFG4_CSCUG_Pos))
#define LCDC_PPCFG4_CSCUB_Pos               20                                             /**< (LCDC_PPCFG4) Color Space Conversion B coefficient for Chrominance B component, signed format. (step 1/512) Position */
#define LCDC_PPCFG4_CSCUB_Msk               (_U_(0x3FF) << LCDC_PPCFG4_CSCUB_Pos)          /**< (LCDC_PPCFG4) Color Space Conversion B coefficient for Chrominance B component, signed format. (step 1/512) Mask */
#define LCDC_PPCFG4_CSCUB(value)            (LCDC_PPCFG4_CSCUB_Msk & ((value) << LCDC_PPCFG4_CSCUB_Pos))
#define LCDC_PPCFG4_CSCUOFF_Pos             30                                             /**< (LCDC_PPCFG4) Color Space Conversion Chrominance B Offset Position */
#define LCDC_PPCFG4_CSCUOFF_Msk             (_U_(0x1) << LCDC_PPCFG4_CSCUOFF_Pos)          /**< (LCDC_PPCFG4) Color Space Conversion Chrominance B Offset Mask */
#define LCDC_PPCFG4_CSCUOFF                 LCDC_PPCFG4_CSCUOFF_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPCFG4_CSCUOFF_Msk instead */
#define LCDC_PPCFG4_MASK                    _U_(0x7FFFFFFF)                                /**< \deprecated (LCDC_PPCFG4) Register MASK  (Use LCDC_PPCFG4_Msk instead)  */
#define LCDC_PPCFG4_Msk                     _U_(0x7FFFFFFF)                                /**< (LCDC_PPCFG4) Register Mask  */


/* -------- LCDC_PPCFG5 : (LCDC Offset: 0x580) (R/W 32) Post Processing Configuration Register 5 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CSCVR:10;                  /**< bit:   0..9  Color Space Conversion R coefficient for Chrominance R component, signed format. (step 1/1024) */
    uint32_t CSCVG:10;                  /**< bit: 10..19  Color Space Conversion G coefficient for Chrominance R component, signed format. (step 1/512) */
    uint32_t CSCVB:10;                  /**< bit: 20..29  Color Space Conversion B coefficient for Chrominance R component, signed format. (step 1/1024) */
    uint32_t CSCVOFF:1;                 /**< bit:     30  Color Space Conversion Chrominance R Offset */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_PPCFG5_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_PPCFG5_OFFSET                  (0x580)                                       /**<  (LCDC_PPCFG5) Post Processing Configuration Register 5  Offset */

#define LCDC_PPCFG5_CSCVR_Pos               0                                              /**< (LCDC_PPCFG5) Color Space Conversion R coefficient for Chrominance R component, signed format. (step 1/1024) Position */
#define LCDC_PPCFG5_CSCVR_Msk               (_U_(0x3FF) << LCDC_PPCFG5_CSCVR_Pos)          /**< (LCDC_PPCFG5) Color Space Conversion R coefficient for Chrominance R component, signed format. (step 1/1024) Mask */
#define LCDC_PPCFG5_CSCVR(value)            (LCDC_PPCFG5_CSCVR_Msk & ((value) << LCDC_PPCFG5_CSCVR_Pos))
#define LCDC_PPCFG5_CSCVG_Pos               10                                             /**< (LCDC_PPCFG5) Color Space Conversion G coefficient for Chrominance R component, signed format. (step 1/512) Position */
#define LCDC_PPCFG5_CSCVG_Msk               (_U_(0x3FF) << LCDC_PPCFG5_CSCVG_Pos)          /**< (LCDC_PPCFG5) Color Space Conversion G coefficient for Chrominance R component, signed format. (step 1/512) Mask */
#define LCDC_PPCFG5_CSCVG(value)            (LCDC_PPCFG5_CSCVG_Msk & ((value) << LCDC_PPCFG5_CSCVG_Pos))
#define LCDC_PPCFG5_CSCVB_Pos               20                                             /**< (LCDC_PPCFG5) Color Space Conversion B coefficient for Chrominance R component, signed format. (step 1/1024) Position */
#define LCDC_PPCFG5_CSCVB_Msk               (_U_(0x3FF) << LCDC_PPCFG5_CSCVB_Pos)          /**< (LCDC_PPCFG5) Color Space Conversion B coefficient for Chrominance R component, signed format. (step 1/1024) Mask */
#define LCDC_PPCFG5_CSCVB(value)            (LCDC_PPCFG5_CSCVB_Msk & ((value) << LCDC_PPCFG5_CSCVB_Pos))
#define LCDC_PPCFG5_CSCVOFF_Pos             30                                             /**< (LCDC_PPCFG5) Color Space Conversion Chrominance R Offset Position */
#define LCDC_PPCFG5_CSCVOFF_Msk             (_U_(0x1) << LCDC_PPCFG5_CSCVOFF_Pos)          /**< (LCDC_PPCFG5) Color Space Conversion Chrominance R Offset Mask */
#define LCDC_PPCFG5_CSCVOFF                 LCDC_PPCFG5_CSCVOFF_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use LCDC_PPCFG5_CSCVOFF_Msk instead */
#define LCDC_PPCFG5_MASK                    _U_(0x7FFFFFFF)                                /**< \deprecated (LCDC_PPCFG5) Register MASK  (Use LCDC_PPCFG5_Msk instead)  */
#define LCDC_PPCFG5_Msk                     _U_(0x7FFFFFFF)                                /**< (LCDC_PPCFG5) Register Mask  */


/* -------- LCDC_BASECLUT : (LCDC Offset: 0x600) (R/W 32) Base CLUT Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BCLUT:8;                   /**< bit:   0..7  Blue Color Entry                         */
    uint32_t GCLUT:8;                   /**< bit:  8..15  Green Color Entry                        */
    uint32_t RCLUT:8;                   /**< bit: 16..23  Red Color Entry                          */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_BASECLUT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_BASECLUT_OFFSET                (0x600)                                       /**<  (LCDC_BASECLUT) Base CLUT Register  Offset */

#define LCDC_BASECLUT_BCLUT_Pos             0                                              /**< (LCDC_BASECLUT) Blue Color Entry Position */
#define LCDC_BASECLUT_BCLUT_Msk             (_U_(0xFF) << LCDC_BASECLUT_BCLUT_Pos)         /**< (LCDC_BASECLUT) Blue Color Entry Mask */
#define LCDC_BASECLUT_BCLUT(value)          (LCDC_BASECLUT_BCLUT_Msk & ((value) << LCDC_BASECLUT_BCLUT_Pos))
#define LCDC_BASECLUT_GCLUT_Pos             8                                              /**< (LCDC_BASECLUT) Green Color Entry Position */
#define LCDC_BASECLUT_GCLUT_Msk             (_U_(0xFF) << LCDC_BASECLUT_GCLUT_Pos)         /**< (LCDC_BASECLUT) Green Color Entry Mask */
#define LCDC_BASECLUT_GCLUT(value)          (LCDC_BASECLUT_GCLUT_Msk & ((value) << LCDC_BASECLUT_GCLUT_Pos))
#define LCDC_BASECLUT_RCLUT_Pos             16                                             /**< (LCDC_BASECLUT) Red Color Entry Position */
#define LCDC_BASECLUT_RCLUT_Msk             (_U_(0xFF) << LCDC_BASECLUT_RCLUT_Pos)         /**< (LCDC_BASECLUT) Red Color Entry Mask */
#define LCDC_BASECLUT_RCLUT(value)          (LCDC_BASECLUT_RCLUT_Msk & ((value) << LCDC_BASECLUT_RCLUT_Pos))
#define LCDC_BASECLUT_MASK                  _U_(0xFFFFFF)                                  /**< \deprecated (LCDC_BASECLUT) Register MASK  (Use LCDC_BASECLUT_Msk instead)  */
#define LCDC_BASECLUT_Msk                   _U_(0xFFFFFF)                                  /**< (LCDC_BASECLUT) Register Mask  */


/* -------- LCDC_OVR1CLUT : (LCDC Offset: 0xa00) (R/W 32) Overlay 1 CLUT Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BCLUT:8;                   /**< bit:   0..7  Blue Color Entry                         */
    uint32_t GCLUT:8;                   /**< bit:  8..15  Green Color Entry                        */
    uint32_t RCLUT:8;                   /**< bit: 16..23  Red Color Entry                          */
    uint32_t ACLUT:8;                   /**< bit: 24..31  Alpha Color Entry                        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR1CLUT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR1CLUT_OFFSET                (0xA00)                                       /**<  (LCDC_OVR1CLUT) Overlay 1 CLUT Register  Offset */

#define LCDC_OVR1CLUT_BCLUT_Pos             0                                              /**< (LCDC_OVR1CLUT) Blue Color Entry Position */
#define LCDC_OVR1CLUT_BCLUT_Msk             (_U_(0xFF) << LCDC_OVR1CLUT_BCLUT_Pos)         /**< (LCDC_OVR1CLUT) Blue Color Entry Mask */
#define LCDC_OVR1CLUT_BCLUT(value)          (LCDC_OVR1CLUT_BCLUT_Msk & ((value) << LCDC_OVR1CLUT_BCLUT_Pos))
#define LCDC_OVR1CLUT_GCLUT_Pos             8                                              /**< (LCDC_OVR1CLUT) Green Color Entry Position */
#define LCDC_OVR1CLUT_GCLUT_Msk             (_U_(0xFF) << LCDC_OVR1CLUT_GCLUT_Pos)         /**< (LCDC_OVR1CLUT) Green Color Entry Mask */
#define LCDC_OVR1CLUT_GCLUT(value)          (LCDC_OVR1CLUT_GCLUT_Msk & ((value) << LCDC_OVR1CLUT_GCLUT_Pos))
#define LCDC_OVR1CLUT_RCLUT_Pos             16                                             /**< (LCDC_OVR1CLUT) Red Color Entry Position */
#define LCDC_OVR1CLUT_RCLUT_Msk             (_U_(0xFF) << LCDC_OVR1CLUT_RCLUT_Pos)         /**< (LCDC_OVR1CLUT) Red Color Entry Mask */
#define LCDC_OVR1CLUT_RCLUT(value)          (LCDC_OVR1CLUT_RCLUT_Msk & ((value) << LCDC_OVR1CLUT_RCLUT_Pos))
#define LCDC_OVR1CLUT_ACLUT_Pos             24                                             /**< (LCDC_OVR1CLUT) Alpha Color Entry Position */
#define LCDC_OVR1CLUT_ACLUT_Msk             (_U_(0xFF) << LCDC_OVR1CLUT_ACLUT_Pos)         /**< (LCDC_OVR1CLUT) Alpha Color Entry Mask */
#define LCDC_OVR1CLUT_ACLUT(value)          (LCDC_OVR1CLUT_ACLUT_Msk & ((value) << LCDC_OVR1CLUT_ACLUT_Pos))
#define LCDC_OVR1CLUT_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_OVR1CLUT) Register MASK  (Use LCDC_OVR1CLUT_Msk instead)  */
#define LCDC_OVR1CLUT_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_OVR1CLUT) Register Mask  */


/* -------- LCDC_OVR2CLUT : (LCDC Offset: 0xe00) (R/W 32) Overlay 2 CLUT Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BCLUT:8;                   /**< bit:   0..7  Blue Color Entry                         */
    uint32_t GCLUT:8;                   /**< bit:  8..15  Green Color Entry                        */
    uint32_t RCLUT:8;                   /**< bit: 16..23  Red Color Entry                          */
    uint32_t ACLUT:8;                   /**< bit: 24..31  Alpha Color Entry                        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_OVR2CLUT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_OVR2CLUT_OFFSET                (0xE00)                                       /**<  (LCDC_OVR2CLUT) Overlay 2 CLUT Register  Offset */

#define LCDC_OVR2CLUT_BCLUT_Pos             0                                              /**< (LCDC_OVR2CLUT) Blue Color Entry Position */
#define LCDC_OVR2CLUT_BCLUT_Msk             (_U_(0xFF) << LCDC_OVR2CLUT_BCLUT_Pos)         /**< (LCDC_OVR2CLUT) Blue Color Entry Mask */
#define LCDC_OVR2CLUT_BCLUT(value)          (LCDC_OVR2CLUT_BCLUT_Msk & ((value) << LCDC_OVR2CLUT_BCLUT_Pos))
#define LCDC_OVR2CLUT_GCLUT_Pos             8                                              /**< (LCDC_OVR2CLUT) Green Color Entry Position */
#define LCDC_OVR2CLUT_GCLUT_Msk             (_U_(0xFF) << LCDC_OVR2CLUT_GCLUT_Pos)         /**< (LCDC_OVR2CLUT) Green Color Entry Mask */
#define LCDC_OVR2CLUT_GCLUT(value)          (LCDC_OVR2CLUT_GCLUT_Msk & ((value) << LCDC_OVR2CLUT_GCLUT_Pos))
#define LCDC_OVR2CLUT_RCLUT_Pos             16                                             /**< (LCDC_OVR2CLUT) Red Color Entry Position */
#define LCDC_OVR2CLUT_RCLUT_Msk             (_U_(0xFF) << LCDC_OVR2CLUT_RCLUT_Pos)         /**< (LCDC_OVR2CLUT) Red Color Entry Mask */
#define LCDC_OVR2CLUT_RCLUT(value)          (LCDC_OVR2CLUT_RCLUT_Msk & ((value) << LCDC_OVR2CLUT_RCLUT_Pos))
#define LCDC_OVR2CLUT_ACLUT_Pos             24                                             /**< (LCDC_OVR2CLUT) Alpha Color Entry Position */
#define LCDC_OVR2CLUT_ACLUT_Msk             (_U_(0xFF) << LCDC_OVR2CLUT_ACLUT_Pos)         /**< (LCDC_OVR2CLUT) Alpha Color Entry Mask */
#define LCDC_OVR2CLUT_ACLUT(value)          (LCDC_OVR2CLUT_ACLUT_Msk & ((value) << LCDC_OVR2CLUT_ACLUT_Pos))
#define LCDC_OVR2CLUT_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_OVR2CLUT) Register MASK  (Use LCDC_OVR2CLUT_Msk instead)  */
#define LCDC_OVR2CLUT_Msk                   _U_(0xFFFFFFFF)                                /**< (LCDC_OVR2CLUT) Register Mask  */


/* -------- LCDC_HEOCLUT : (LCDC Offset: 0x1200) (R/W 32) High-End Overlay CLUT Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BCLUT:8;                   /**< bit:   0..7  Blue Color Entry                         */
    uint32_t GCLUT:8;                   /**< bit:  8..15  Green Color Entry                        */
    uint32_t RCLUT:8;                   /**< bit: 16..23  Red Color Entry                          */
    uint32_t ACLUT:8;                   /**< bit: 24..31  Alpha Color Entry                        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} LCDC_HEOCLUT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDC_HEOCLUT_OFFSET                 (0x1200)                                      /**<  (LCDC_HEOCLUT) High-End Overlay CLUT Register  Offset */

#define LCDC_HEOCLUT_BCLUT_Pos              0                                              /**< (LCDC_HEOCLUT) Blue Color Entry Position */
#define LCDC_HEOCLUT_BCLUT_Msk              (_U_(0xFF) << LCDC_HEOCLUT_BCLUT_Pos)          /**< (LCDC_HEOCLUT) Blue Color Entry Mask */
#define LCDC_HEOCLUT_BCLUT(value)           (LCDC_HEOCLUT_BCLUT_Msk & ((value) << LCDC_HEOCLUT_BCLUT_Pos))
#define LCDC_HEOCLUT_GCLUT_Pos              8                                              /**< (LCDC_HEOCLUT) Green Color Entry Position */
#define LCDC_HEOCLUT_GCLUT_Msk              (_U_(0xFF) << LCDC_HEOCLUT_GCLUT_Pos)          /**< (LCDC_HEOCLUT) Green Color Entry Mask */
#define LCDC_HEOCLUT_GCLUT(value)           (LCDC_HEOCLUT_GCLUT_Msk & ((value) << LCDC_HEOCLUT_GCLUT_Pos))
#define LCDC_HEOCLUT_RCLUT_Pos              16                                             /**< (LCDC_HEOCLUT) Red Color Entry Position */
#define LCDC_HEOCLUT_RCLUT_Msk              (_U_(0xFF) << LCDC_HEOCLUT_RCLUT_Pos)          /**< (LCDC_HEOCLUT) Red Color Entry Mask */
#define LCDC_HEOCLUT_RCLUT(value)           (LCDC_HEOCLUT_RCLUT_Msk & ((value) << LCDC_HEOCLUT_RCLUT_Pos))
#define LCDC_HEOCLUT_ACLUT_Pos              24                                             /**< (LCDC_HEOCLUT) Alpha Color Entry Position */
#define LCDC_HEOCLUT_ACLUT_Msk              (_U_(0xFF) << LCDC_HEOCLUT_ACLUT_Pos)          /**< (LCDC_HEOCLUT) Alpha Color Entry Mask */
#define LCDC_HEOCLUT_ACLUT(value)           (LCDC_HEOCLUT_ACLUT_Msk & ((value) << LCDC_HEOCLUT_ACLUT_Pos))
#define LCDC_HEOCLUT_MASK                   _U_(0xFFFFFFFF)                                /**< \deprecated (LCDC_HEOCLUT) Register MASK  (Use LCDC_HEOCLUT_Msk instead)  */
#define LCDC_HEOCLUT_Msk                    _U_(0xFFFFFFFF)                                /**< (LCDC_HEOCLUT) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief LCDC hardware registers */
typedef struct {  
  __IO uint32_t LCDC_LCDCFG0;   /**< (LCDC Offset: 0x00) LCD Controller Configuration Register 0 */
  __IO uint32_t LCDC_LCDCFG1;   /**< (LCDC Offset: 0x04) LCD Controller Configuration Register 1 */
  __IO uint32_t LCDC_LCDCFG2;   /**< (LCDC Offset: 0x08) LCD Controller Configuration Register 2 */
  __IO uint32_t LCDC_LCDCFG3;   /**< (LCDC Offset: 0x0C) LCD Controller Configuration Register 3 */
  __IO uint32_t LCDC_LCDCFG4;   /**< (LCDC Offset: 0x10) LCD Controller Configuration Register 4 */
  __IO uint32_t LCDC_LCDCFG5;   /**< (LCDC Offset: 0x14) LCD Controller Configuration Register 5 */
  __IO uint32_t LCDC_LCDCFG6;   /**< (LCDC Offset: 0x18) LCD Controller Configuration Register 6 */
  __I  uint8_t                        Reserved1[4];
  __O  uint32_t LCDC_LCDEN;     /**< (LCDC Offset: 0x20) LCD Controller Enable Register */
  __O  uint32_t LCDC_LCDDIS;    /**< (LCDC Offset: 0x24) LCD Controller Disable Register */
  __I  uint32_t LCDC_LCDSR;     /**< (LCDC Offset: 0x28) LCD Controller Status Register */
  __O  uint32_t LCDC_LCDIER;    /**< (LCDC Offset: 0x2C) LCD Controller Interrupt Enable Register */
  __O  uint32_t LCDC_LCDIDR;    /**< (LCDC Offset: 0x30) LCD Controller Interrupt Disable Register */
  __I  uint32_t LCDC_LCDIMR;    /**< (LCDC Offset: 0x34) LCD Controller Interrupt Mask Register */
  __I  uint32_t LCDC_LCDISR;    /**< (LCDC Offset: 0x38) LCD Controller Interrupt Status Register */
  __O  uint32_t LCDC_ATTR;      /**< (LCDC Offset: 0x3C) LCD Controller Attribute Register */
  __O  uint32_t LCDC_BASECHER;  /**< (LCDC Offset: 0x40) Base Layer Channel Enable Register */
  __O  uint32_t LCDC_BASECHDR;  /**< (LCDC Offset: 0x44) Base Layer Channel Disable Register */
  __I  uint32_t LCDC_BASECHSR;  /**< (LCDC Offset: 0x48) Base Layer Channel Status Register */
  __O  uint32_t LCDC_BASEIER;   /**< (LCDC Offset: 0x4C) Base Layer Interrupt Enable Register */
  __O  uint32_t LCDC_BASEIDR;   /**< (LCDC Offset: 0x50) Base Layer Interrupt Disabled Register */
  __I  uint32_t LCDC_BASEIMR;   /**< (LCDC Offset: 0x54) Base Layer Interrupt Mask Register */
  __I  uint32_t LCDC_BASEISR;   /**< (LCDC Offset: 0x58) Base Layer Interrupt Status Register */
  __IO uint32_t LCDC_BASEHEAD;  /**< (LCDC Offset: 0x5C) Base DMA Head Register */
  __IO uint32_t LCDC_BASEADDR;  /**< (LCDC Offset: 0x60) Base DMA Address Register */
  __IO uint32_t LCDC_BASECTRL;  /**< (LCDC Offset: 0x64) Base DMA Control Register */
  __IO uint32_t LCDC_BASENEXT;  /**< (LCDC Offset: 0x68) Base DMA Next Register */
  __IO uint32_t LCDC_BASECFG0;  /**< (LCDC Offset: 0x6C) Base Layer Configuration Register 0 */
  __IO uint32_t LCDC_BASECFG1;  /**< (LCDC Offset: 0x70) Base Layer Configuration Register 1 */
  __IO uint32_t LCDC_BASECFG2;  /**< (LCDC Offset: 0x74) Base Layer Configuration Register 2 */
  __IO uint32_t LCDC_BASECFG3;  /**< (LCDC Offset: 0x78) Base Layer Configuration Register 3 */
  __IO uint32_t LCDC_BASECFG4;  /**< (LCDC Offset: 0x7C) Base Layer Configuration Register 4 */
  __IO uint32_t LCDC_BASECFG5;  /**< (LCDC Offset: 0x80) Base Layer Configuration Register 5 */
  __IO uint32_t LCDC_BASECFG6;  /**< (LCDC Offset: 0x84) Base Layer Configuration Register 6 */
  __I  uint8_t                        Reserved2[184];
  __O  uint32_t LCDC_OVR1CHER;  /**< (LCDC Offset: 0x140) Overlay 1 Channel Enable Register */
  __O  uint32_t LCDC_OVR1CHDR;  /**< (LCDC Offset: 0x144) Overlay 1 Channel Disable Register */
  __I  uint32_t LCDC_OVR1CHSR;  /**< (LCDC Offset: 0x148) Overlay 1 Channel Status Register */
  __O  uint32_t LCDC_OVR1IER;   /**< (LCDC Offset: 0x14C) Overlay 1 Interrupt Enable Register */
  __O  uint32_t LCDC_OVR1IDR;   /**< (LCDC Offset: 0x150) Overlay 1 Interrupt Disable Register */
  __I  uint32_t LCDC_OVR1IMR;   /**< (LCDC Offset: 0x154) Overlay 1 Interrupt Mask Register */
  __I  uint32_t LCDC_OVR1ISR;   /**< (LCDC Offset: 0x158) Overlay 1 Interrupt Status Register */
  __IO uint32_t LCDC_OVR1HEAD;  /**< (LCDC Offset: 0x15C) Overlay 1 DMA Head Register */
  __IO uint32_t LCDC_OVR1ADDR;  /**< (LCDC Offset: 0x160) Overlay 1 DMA Address Register */
  __IO uint32_t LCDC_OVR1CTRL;  /**< (LCDC Offset: 0x164) Overlay 1 DMA Control Register */
  __IO uint32_t LCDC_OVR1NEXT;  /**< (LCDC Offset: 0x168) Overlay 1 DMA Next Register */
  __IO uint32_t LCDC_OVR1CFG0;  /**< (LCDC Offset: 0x16C) Overlay 1 Configuration Register 0 */
  __IO uint32_t LCDC_OVR1CFG1;  /**< (LCDC Offset: 0x170) Overlay 1 Configuration Register 1 */
  __IO uint32_t LCDC_OVR1CFG2;  /**< (LCDC Offset: 0x174) Overlay 1 Configuration Register 2 */
  __IO uint32_t LCDC_OVR1CFG3;  /**< (LCDC Offset: 0x178) Overlay 1 Configuration Register 3 */
  __IO uint32_t LCDC_OVR1CFG4;  /**< (LCDC Offset: 0x17C) Overlay 1 Configuration Register 4 */
  __IO uint32_t LCDC_OVR1CFG5;  /**< (LCDC Offset: 0x180) Overlay 1 Configuration Register 5 */
  __IO uint32_t LCDC_OVR1CFG6;  /**< (LCDC Offset: 0x184) Overlay 1 Configuration Register 6 */
  __IO uint32_t LCDC_OVR1CFG7;  /**< (LCDC Offset: 0x188) Overlay 1 Configuration Register 7 */
  __IO uint32_t LCDC_OVR1CFG8;  /**< (LCDC Offset: 0x18C) Overlay 1 Configuration Register 8 */
  __IO uint32_t LCDC_OVR1CFG9;  /**< (LCDC Offset: 0x190) Overlay 1 Configuration Register 9 */
  __I  uint8_t                        Reserved3[172];
  __O  uint32_t LCDC_OVR2CHER;  /**< (LCDC Offset: 0x240) Overlay 2 Channel Enable Register */
  __O  uint32_t LCDC_OVR2CHDR;  /**< (LCDC Offset: 0x244) Overlay 2 Channel Disable Register */
  __I  uint32_t LCDC_OVR2CHSR;  /**< (LCDC Offset: 0x248) Overlay 2 Channel Status Register */
  __O  uint32_t LCDC_OVR2IER;   /**< (LCDC Offset: 0x24C) Overlay 2 Interrupt Enable Register */
  __O  uint32_t LCDC_OVR2IDR;   /**< (LCDC Offset: 0x250) Overlay 2 Interrupt Disable Register */
  __I  uint32_t LCDC_OVR2IMR;   /**< (LCDC Offset: 0x254) Overlay 2 Interrupt Mask Register */
  __I  uint32_t LCDC_OVR2ISR;   /**< (LCDC Offset: 0x258) Overlay 2 Interrupt Status Register */
  __IO uint32_t LCDC_OVR2HEAD;  /**< (LCDC Offset: 0x25C) Overlay 2 DMA Head Register */
  __IO uint32_t LCDC_OVR2ADDR;  /**< (LCDC Offset: 0x260) Overlay 2 DMA Address Register */
  __IO uint32_t LCDC_OVR2CTRL;  /**< (LCDC Offset: 0x264) Overlay 2 DMA Control Register */
  __IO uint32_t LCDC_OVR2NEXT;  /**< (LCDC Offset: 0x268) Overlay 2 DMA Next Register */
  __IO uint32_t LCDC_OVR2CFG0;  /**< (LCDC Offset: 0x26C) Overlay 2 Configuration Register 0 */
  __IO uint32_t LCDC_OVR2CFG1;  /**< (LCDC Offset: 0x270) Overlay 2 Configuration Register 1 */
  __IO uint32_t LCDC_OVR2CFG2;  /**< (LCDC Offset: 0x274) Overlay 2 Configuration Register 2 */
  __IO uint32_t LCDC_OVR2CFG3;  /**< (LCDC Offset: 0x278) Overlay 2 Configuration Register 3 */
  __IO uint32_t LCDC_OVR2CFG4;  /**< (LCDC Offset: 0x27C) Overlay 2 Configuration Register 4 */
  __IO uint32_t LCDC_OVR2CFG5;  /**< (LCDC Offset: 0x280) Overlay 2 Configuration Register 5 */
  __IO uint32_t LCDC_OVR2CFG6;  /**< (LCDC Offset: 0x284) Overlay 2 Configuration Register 6 */
  __IO uint32_t LCDC_OVR2CFG7;  /**< (LCDC Offset: 0x288) Overlay 2 Configuration Register 7 */
  __IO uint32_t LCDC_OVR2CFG8;  /**< (LCDC Offset: 0x28C) Overlay 2 Configuration Register 8 */
  __IO uint32_t LCDC_OVR2CFG9;  /**< (LCDC Offset: 0x290) Overlay 2 Configuration Register 9 */
  __I  uint8_t                        Reserved4[172];
  __O  uint32_t LCDC_HEOCHER;   /**< (LCDC Offset: 0x340) High-End Overlay Channel Enable Register */
  __O  uint32_t LCDC_HEOCHDR;   /**< (LCDC Offset: 0x344) High-End Overlay Channel Disable Register */
  __I  uint32_t LCDC_HEOCHSR;   /**< (LCDC Offset: 0x348) High-End Overlay Channel Status Register */
  __O  uint32_t LCDC_HEOIER;    /**< (LCDC Offset: 0x34C) High-End Overlay Interrupt Enable Register */
  __O  uint32_t LCDC_HEOIDR;    /**< (LCDC Offset: 0x350) High-End Overlay Interrupt Disable Register */
  __I  uint32_t LCDC_HEOIMR;    /**< (LCDC Offset: 0x354) High-End Overlay Interrupt Mask Register */
  __I  uint32_t LCDC_HEOISR;    /**< (LCDC Offset: 0x358) High-End Overlay Interrupt Status Register */
  __IO uint32_t LCDC_HEOHEAD;   /**< (LCDC Offset: 0x35C) High-End Overlay DMA Head Register */
  __IO uint32_t LCDC_HEOADDR;   /**< (LCDC Offset: 0x360) High-End Overlay DMA Address Register */
  __IO uint32_t LCDC_HEOCTRL;   /**< (LCDC Offset: 0x364) High-End Overlay DMA Control Register */
  __IO uint32_t LCDC_HEONEXT;   /**< (LCDC Offset: 0x368) High-End Overlay DMA Next Register */
  __IO uint32_t LCDC_HEOUHEAD;  /**< (LCDC Offset: 0x36C) High-End Overlay U-UV DMA Head Register */
  __IO uint32_t LCDC_HEOUADDR;  /**< (LCDC Offset: 0x370) High-End Overlay U-UV DMA Address Register */
  __IO uint32_t LCDC_HEOUCTRL;  /**< (LCDC Offset: 0x374) High-End Overlay U-UV DMA Control Register */
  __IO uint32_t LCDC_HEOUNEXT;  /**< (LCDC Offset: 0x378) High-End Overlay U-UV DMA Next Register */
  __IO uint32_t LCDC_HEOVHEAD;  /**< (LCDC Offset: 0x37C) High-End Overlay V DMA Head Register */
  __IO uint32_t LCDC_HEOVADDR;  /**< (LCDC Offset: 0x380) High-End Overlay V DMA Address Register */
  __IO uint32_t LCDC_HEOVCTRL;  /**< (LCDC Offset: 0x384) High-End Overlay V DMA Control Register */
  __IO uint32_t LCDC_HEOVNEXT;  /**< (LCDC Offset: 0x388) High-End Overlay V DMA Next Register */
  __IO uint32_t LCDC_HEOCFG0;   /**< (LCDC Offset: 0x38C) High-End Overlay Configuration Register 0 */
  __IO uint32_t LCDC_HEOCFG1;   /**< (LCDC Offset: 0x390) High-End Overlay Configuration Register 1 */
  __IO uint32_t LCDC_HEOCFG2;   /**< (LCDC Offset: 0x394) High-End Overlay Configuration Register 2 */
  __IO uint32_t LCDC_HEOCFG3;   /**< (LCDC Offset: 0x398) High-End Overlay Configuration Register 3 */
  __IO uint32_t LCDC_HEOCFG4;   /**< (LCDC Offset: 0x39C) High-End Overlay Configuration Register 4 */
  __IO uint32_t LCDC_HEOCFG5;   /**< (LCDC Offset: 0x3A0) High-End Overlay Configuration Register 5 */
  __IO uint32_t LCDC_HEOCFG6;   /**< (LCDC Offset: 0x3A4) High-End Overlay Configuration Register 6 */
  __IO uint32_t LCDC_HEOCFG7;   /**< (LCDC Offset: 0x3A8) High-End Overlay Configuration Register 7 */
  __IO uint32_t LCDC_HEOCFG8;   /**< (LCDC Offset: 0x3AC) High-End Overlay Configuration Register 8 */
  __IO uint32_t LCDC_HEOCFG9;   /**< (LCDC Offset: 0x3B0) High-End Overlay Configuration Register 9 */
  __IO uint32_t LCDC_HEOCFG10;  /**< (LCDC Offset: 0x3B4) High-End Overlay Configuration Register 10 */
  __IO uint32_t LCDC_HEOCFG11;  /**< (LCDC Offset: 0x3B8) High-End Overlay Configuration Register 11 */
  __IO uint32_t LCDC_HEOCFG12;  /**< (LCDC Offset: 0x3BC) High-End Overlay Configuration Register 12 */
  __IO uint32_t LCDC_HEOCFG13;  /**< (LCDC Offset: 0x3C0) High-End Overlay Configuration Register 13 */
  __IO uint32_t LCDC_HEOCFG14;  /**< (LCDC Offset: 0x3C4) High-End Overlay Configuration Register 14 */
  __IO uint32_t LCDC_HEOCFG15;  /**< (LCDC Offset: 0x3C8) High-End Overlay Configuration Register 15 */
  __IO uint32_t LCDC_HEOCFG16;  /**< (LCDC Offset: 0x3CC) High-End Overlay Configuration Register 16 */
  __IO uint32_t LCDC_HEOCFG17;  /**< (LCDC Offset: 0x3D0) High-End Overlay Configuration Register 17 */
  __IO uint32_t LCDC_HEOCFG18;  /**< (LCDC Offset: 0x3D4) High-End Overlay Configuration Register 18 */
  __IO uint32_t LCDC_HEOCFG19;  /**< (LCDC Offset: 0x3D8) High-End Overlay Configuration Register 19 */
  __IO uint32_t LCDC_HEOCFG20;  /**< (LCDC Offset: 0x3DC) High-End Overlay Configuration Register 20 */
  __IO uint32_t LCDC_HEOCFG21;  /**< (LCDC Offset: 0x3E0) High-End Overlay Configuration Register 21 */
  __IO uint32_t LCDC_HEOCFG22;  /**< (LCDC Offset: 0x3E4) High-End Overlay Configuration Register 22 */
  __IO uint32_t LCDC_HEOCFG23;  /**< (LCDC Offset: 0x3E8) High-End Overlay Configuration Register 23 */
  __IO uint32_t LCDC_HEOCFG24;  /**< (LCDC Offset: 0x3EC) High-End Overlay Configuration Register 24 */
  __IO uint32_t LCDC_HEOCFG25;  /**< (LCDC Offset: 0x3F0) High-End Overlay Configuration Register 25 */
  __IO uint32_t LCDC_HEOCFG26;  /**< (LCDC Offset: 0x3F4) High-End Overlay Configuration Register 26 */
  __IO uint32_t LCDC_HEOCFG27;  /**< (LCDC Offset: 0x3F8) High-End Overlay Configuration Register 27 */
  __IO uint32_t LCDC_HEOCFG28;  /**< (LCDC Offset: 0x3FC) High-End Overlay Configuration Register 28 */
  __IO uint32_t LCDC_HEOCFG29;  /**< (LCDC Offset: 0x400) High-End Overlay Configuration Register 29 */
  __IO uint32_t LCDC_HEOCFG30;  /**< (LCDC Offset: 0x404) High-End Overlay Configuration Register 30 */
  __IO uint32_t LCDC_HEOCFG31;  /**< (LCDC Offset: 0x408) High-End Overlay Configuration Register 31 */
  __IO uint32_t LCDC_HEOCFG32;  /**< (LCDC Offset: 0x40C) High-End Overlay Configuration Register 32 */
  __IO uint32_t LCDC_HEOCFG33;  /**< (LCDC Offset: 0x410) High-End Overlay Configuration Register 33 */
  __IO uint32_t LCDC_HEOCFG34;  /**< (LCDC Offset: 0x414) High-End Overlay Configuration Register 34 */
  __IO uint32_t LCDC_HEOCFG35;  /**< (LCDC Offset: 0x418) High-End Overlay Configuration Register 35 */
  __IO uint32_t LCDC_HEOCFG36;  /**< (LCDC Offset: 0x41C) High-End Overlay Configuration Register 36 */
  __IO uint32_t LCDC_HEOCFG37;  /**< (LCDC Offset: 0x420) High-End Overlay Configuration Register 37 */
  __IO uint32_t LCDC_HEOCFG38;  /**< (LCDC Offset: 0x424) High-End Overlay Configuration Register 38 */
  __IO uint32_t LCDC_HEOCFG39;  /**< (LCDC Offset: 0x428) High-End Overlay Configuration Register 39 */
  __IO uint32_t LCDC_HEOCFG40;  /**< (LCDC Offset: 0x42C) High-End Overlay Configuration Register 40 */
  __IO uint32_t LCDC_HEOCFG41;  /**< (LCDC Offset: 0x430) High-End Overlay Configuration Register 41 */
  __I  uint8_t                        Reserved5[268];
  __O  uint32_t LCDC_PPCHER;    /**< (LCDC Offset: 0x540) Post Processing Channel Enable Register */
  __O  uint32_t LCDC_PPCHDR;    /**< (LCDC Offset: 0x544) Post Processing Channel Disable Register */
  __I  uint32_t LCDC_PPCHSR;    /**< (LCDC Offset: 0x548) Post Processing Channel Status Register */
  __O  uint32_t LCDC_PPIER;     /**< (LCDC Offset: 0x54C) Post Processing Interrupt Enable Register */
  __O  uint32_t LCDC_PPIDR;     /**< (LCDC Offset: 0x550) Post Processing Interrupt Disable Register */
  __I  uint32_t LCDC_PPIMR;     /**< (LCDC Offset: 0x554) Post Processing Interrupt Mask Register */
  __I  uint32_t LCDC_PPISR;     /**< (LCDC Offset: 0x558) Post Processing Interrupt Status Register */
  __IO uint32_t LCDC_PPHEAD;    /**< (LCDC Offset: 0x55C) Post Processing Head Register */
  __IO uint32_t LCDC_PPADDR;    /**< (LCDC Offset: 0x560) Post Processing Address Register */
  __IO uint32_t LCDC_PPCTRL;    /**< (LCDC Offset: 0x564) Post Processing Control Register */
  __IO uint32_t LCDC_PPNEXT;    /**< (LCDC Offset: 0x568) Post Processing Next Register */
  __IO uint32_t LCDC_PPCFG0;    /**< (LCDC Offset: 0x56C) Post Processing Configuration Register 0 */
  __IO uint32_t LCDC_PPCFG1;    /**< (LCDC Offset: 0x570) Post Processing Configuration Register 1 */
  __IO uint32_t LCDC_PPCFG2;    /**< (LCDC Offset: 0x574) Post Processing Configuration Register 2 */
  __IO uint32_t LCDC_PPCFG3;    /**< (LCDC Offset: 0x578) Post Processing Configuration Register 3 */
  __IO uint32_t LCDC_PPCFG4;    /**< (LCDC Offset: 0x57C) Post Processing Configuration Register 4 */
  __IO uint32_t LCDC_PPCFG5;    /**< (LCDC Offset: 0x580) Post Processing Configuration Register 5 */
  __I  uint8_t                        Reserved6[124];
  __IO uint32_t LCDC_BASECLUT[256]; /**< (LCDC Offset: 0x600) Base CLUT Register */
  __IO uint32_t LCDC_OVR1CLUT[256]; /**< (LCDC Offset: 0xA00) Overlay 1 CLUT Register */
  __IO uint32_t LCDC_OVR2CLUT[256]; /**< (LCDC Offset: 0xE00) Overlay 2 CLUT Register */
  __IO uint32_t LCDC_HEOCLUT[256]; /**< (LCDC Offset: 0x1200) High-End Overlay CLUT Register */
} Lcdc;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief LCDC hardware registers */
typedef struct {  
  __IO LCDC_LCDCFG0_Type              LCDC_LCDCFG0;   /**< Offset: 0x00 (R/W  32) LCD Controller Configuration Register 0 */
  __IO LCDC_LCDCFG1_Type              LCDC_LCDCFG1;   /**< Offset: 0x04 (R/W  32) LCD Controller Configuration Register 1 */
  __IO LCDC_LCDCFG2_Type              LCDC_LCDCFG2;   /**< Offset: 0x08 (R/W  32) LCD Controller Configuration Register 2 */
  __IO LCDC_LCDCFG3_Type              LCDC_LCDCFG3;   /**< Offset: 0x0C (R/W  32) LCD Controller Configuration Register 3 */
  __IO LCDC_LCDCFG4_Type              LCDC_LCDCFG4;   /**< Offset: 0x10 (R/W  32) LCD Controller Configuration Register 4 */
  __IO LCDC_LCDCFG5_Type              LCDC_LCDCFG5;   /**< Offset: 0x14 (R/W  32) LCD Controller Configuration Register 5 */
  __IO LCDC_LCDCFG6_Type              LCDC_LCDCFG6;   /**< Offset: 0x18 (R/W  32) LCD Controller Configuration Register 6 */
  __I  uint8_t                        Reserved1[4];
  __O  LCDC_LCDEN_Type                LCDC_LCDEN;     /**< Offset: 0x20 ( /W  32) LCD Controller Enable Register */
  __O  LCDC_LCDDIS_Type               LCDC_LCDDIS;    /**< Offset: 0x24 ( /W  32) LCD Controller Disable Register */
  __I  LCDC_LCDSR_Type                LCDC_LCDSR;     /**< Offset: 0x28 (R/   32) LCD Controller Status Register */
  __O  LCDC_LCDIER_Type               LCDC_LCDIER;    /**< Offset: 0x2C ( /W  32) LCD Controller Interrupt Enable Register */
  __O  LCDC_LCDIDR_Type               LCDC_LCDIDR;    /**< Offset: 0x30 ( /W  32) LCD Controller Interrupt Disable Register */
  __I  LCDC_LCDIMR_Type               LCDC_LCDIMR;    /**< Offset: 0x34 (R/   32) LCD Controller Interrupt Mask Register */
  __I  LCDC_LCDISR_Type               LCDC_LCDISR;    /**< Offset: 0x38 (R/   32) LCD Controller Interrupt Status Register */
  __O  LCDC_ATTR_Type                 LCDC_ATTR;      /**< Offset: 0x3C ( /W  32) LCD Controller Attribute Register */
  __O  LCDC_BASECHER_Type             LCDC_BASECHER;  /**< Offset: 0x40 ( /W  32) Base Layer Channel Enable Register */
  __O  LCDC_BASECHDR_Type             LCDC_BASECHDR;  /**< Offset: 0x44 ( /W  32) Base Layer Channel Disable Register */
  __I  LCDC_BASECHSR_Type             LCDC_BASECHSR;  /**< Offset: 0x48 (R/   32) Base Layer Channel Status Register */
  __O  LCDC_BASEIER_Type              LCDC_BASEIER;   /**< Offset: 0x4C ( /W  32) Base Layer Interrupt Enable Register */
  __O  LCDC_BASEIDR_Type              LCDC_BASEIDR;   /**< Offset: 0x50 ( /W  32) Base Layer Interrupt Disabled Register */
  __I  LCDC_BASEIMR_Type              LCDC_BASEIMR;   /**< Offset: 0x54 (R/   32) Base Layer Interrupt Mask Register */
  __I  LCDC_BASEISR_Type              LCDC_BASEISR;   /**< Offset: 0x58 (R/   32) Base Layer Interrupt Status Register */
  __IO LCDC_BASEHEAD_Type             LCDC_BASEHEAD;  /**< Offset: 0x5C (R/W  32) Base DMA Head Register */
  __IO LCDC_BASEADDR_Type             LCDC_BASEADDR;  /**< Offset: 0x60 (R/W  32) Base DMA Address Register */
  __IO LCDC_BASECTRL_Type             LCDC_BASECTRL;  /**< Offset: 0x64 (R/W  32) Base DMA Control Register */
  __IO LCDC_BASENEXT_Type             LCDC_BASENEXT;  /**< Offset: 0x68 (R/W  32) Base DMA Next Register */
  __IO LCDC_BASECFG0_Type             LCDC_BASECFG0;  /**< Offset: 0x6C (R/W  32) Base Layer Configuration Register 0 */
  __IO LCDC_BASECFG1_Type             LCDC_BASECFG1;  /**< Offset: 0x70 (R/W  32) Base Layer Configuration Register 1 */
  __IO LCDC_BASECFG2_Type             LCDC_BASECFG2;  /**< Offset: 0x74 (R/W  32) Base Layer Configuration Register 2 */
  __IO LCDC_BASECFG3_Type             LCDC_BASECFG3;  /**< Offset: 0x78 (R/W  32) Base Layer Configuration Register 3 */
  __IO LCDC_BASECFG4_Type             LCDC_BASECFG4;  /**< Offset: 0x7C (R/W  32) Base Layer Configuration Register 4 */
  __IO LCDC_BASECFG5_Type             LCDC_BASECFG5;  /**< Offset: 0x80 (R/W  32) Base Layer Configuration Register 5 */
  __IO LCDC_BASECFG6_Type             LCDC_BASECFG6;  /**< Offset: 0x84 (R/W  32) Base Layer Configuration Register 6 */
  __I  uint8_t                        Reserved2[184];
  __O  LCDC_OVR1CHER_Type             LCDC_OVR1CHER;  /**< Offset: 0x140 ( /W  32) Overlay 1 Channel Enable Register */
  __O  LCDC_OVR1CHDR_Type             LCDC_OVR1CHDR;  /**< Offset: 0x144 ( /W  32) Overlay 1 Channel Disable Register */
  __I  LCDC_OVR1CHSR_Type             LCDC_OVR1CHSR;  /**< Offset: 0x148 (R/   32) Overlay 1 Channel Status Register */
  __O  LCDC_OVR1IER_Type              LCDC_OVR1IER;   /**< Offset: 0x14C ( /W  32) Overlay 1 Interrupt Enable Register */
  __O  LCDC_OVR1IDR_Type              LCDC_OVR1IDR;   /**< Offset: 0x150 ( /W  32) Overlay 1 Interrupt Disable Register */
  __I  LCDC_OVR1IMR_Type              LCDC_OVR1IMR;   /**< Offset: 0x154 (R/   32) Overlay 1 Interrupt Mask Register */
  __I  LCDC_OVR1ISR_Type              LCDC_OVR1ISR;   /**< Offset: 0x158 (R/   32) Overlay 1 Interrupt Status Register */
  __IO LCDC_OVR1HEAD_Type             LCDC_OVR1HEAD;  /**< Offset: 0x15C (R/W  32) Overlay 1 DMA Head Register */
  __IO LCDC_OVR1ADDR_Type             LCDC_OVR1ADDR;  /**< Offset: 0x160 (R/W  32) Overlay 1 DMA Address Register */
  __IO LCDC_OVR1CTRL_Type             LCDC_OVR1CTRL;  /**< Offset: 0x164 (R/W  32) Overlay 1 DMA Control Register */
  __IO LCDC_OVR1NEXT_Type             LCDC_OVR1NEXT;  /**< Offset: 0x168 (R/W  32) Overlay 1 DMA Next Register */
  __IO LCDC_OVR1CFG0_Type             LCDC_OVR1CFG0;  /**< Offset: 0x16C (R/W  32) Overlay 1 Configuration Register 0 */
  __IO LCDC_OVR1CFG1_Type             LCDC_OVR1CFG1;  /**< Offset: 0x170 (R/W  32) Overlay 1 Configuration Register 1 */
  __IO LCDC_OVR1CFG2_Type             LCDC_OVR1CFG2;  /**< Offset: 0x174 (R/W  32) Overlay 1 Configuration Register 2 */
  __IO LCDC_OVR1CFG3_Type             LCDC_OVR1CFG3;  /**< Offset: 0x178 (R/W  32) Overlay 1 Configuration Register 3 */
  __IO LCDC_OVR1CFG4_Type             LCDC_OVR1CFG4;  /**< Offset: 0x17C (R/W  32) Overlay 1 Configuration Register 4 */
  __IO LCDC_OVR1CFG5_Type             LCDC_OVR1CFG5;  /**< Offset: 0x180 (R/W  32) Overlay 1 Configuration Register 5 */
  __IO LCDC_OVR1CFG6_Type             LCDC_OVR1CFG6;  /**< Offset: 0x184 (R/W  32) Overlay 1 Configuration Register 6 */
  __IO LCDC_OVR1CFG7_Type             LCDC_OVR1CFG7;  /**< Offset: 0x188 (R/W  32) Overlay 1 Configuration Register 7 */
  __IO LCDC_OVR1CFG8_Type             LCDC_OVR1CFG8;  /**< Offset: 0x18C (R/W  32) Overlay 1 Configuration Register 8 */
  __IO LCDC_OVR1CFG9_Type             LCDC_OVR1CFG9;  /**< Offset: 0x190 (R/W  32) Overlay 1 Configuration Register 9 */
  __I  uint8_t                        Reserved3[172];
  __O  LCDC_OVR2CHER_Type             LCDC_OVR2CHER;  /**< Offset: 0x240 ( /W  32) Overlay 2 Channel Enable Register */
  __O  LCDC_OVR2CHDR_Type             LCDC_OVR2CHDR;  /**< Offset: 0x244 ( /W  32) Overlay 2 Channel Disable Register */
  __I  LCDC_OVR2CHSR_Type             LCDC_OVR2CHSR;  /**< Offset: 0x248 (R/   32) Overlay 2 Channel Status Register */
  __O  LCDC_OVR2IER_Type              LCDC_OVR2IER;   /**< Offset: 0x24C ( /W  32) Overlay 2 Interrupt Enable Register */
  __O  LCDC_OVR2IDR_Type              LCDC_OVR2IDR;   /**< Offset: 0x250 ( /W  32) Overlay 2 Interrupt Disable Register */
  __I  LCDC_OVR2IMR_Type              LCDC_OVR2IMR;   /**< Offset: 0x254 (R/   32) Overlay 2 Interrupt Mask Register */
  __I  LCDC_OVR2ISR_Type              LCDC_OVR2ISR;   /**< Offset: 0x258 (R/   32) Overlay 2 Interrupt Status Register */
  __IO LCDC_OVR2HEAD_Type             LCDC_OVR2HEAD;  /**< Offset: 0x25C (R/W  32) Overlay 2 DMA Head Register */
  __IO LCDC_OVR2ADDR_Type             LCDC_OVR2ADDR;  /**< Offset: 0x260 (R/W  32) Overlay 2 DMA Address Register */
  __IO LCDC_OVR2CTRL_Type             LCDC_OVR2CTRL;  /**< Offset: 0x264 (R/W  32) Overlay 2 DMA Control Register */
  __IO LCDC_OVR2NEXT_Type             LCDC_OVR2NEXT;  /**< Offset: 0x268 (R/W  32) Overlay 2 DMA Next Register */
  __IO LCDC_OVR2CFG0_Type             LCDC_OVR2CFG0;  /**< Offset: 0x26C (R/W  32) Overlay 2 Configuration Register 0 */
  __IO LCDC_OVR2CFG1_Type             LCDC_OVR2CFG1;  /**< Offset: 0x270 (R/W  32) Overlay 2 Configuration Register 1 */
  __IO LCDC_OVR2CFG2_Type             LCDC_OVR2CFG2;  /**< Offset: 0x274 (R/W  32) Overlay 2 Configuration Register 2 */
  __IO LCDC_OVR2CFG3_Type             LCDC_OVR2CFG3;  /**< Offset: 0x278 (R/W  32) Overlay 2 Configuration Register 3 */
  __IO LCDC_OVR2CFG4_Type             LCDC_OVR2CFG4;  /**< Offset: 0x27C (R/W  32) Overlay 2 Configuration Register 4 */
  __IO LCDC_OVR2CFG5_Type             LCDC_OVR2CFG5;  /**< Offset: 0x280 (R/W  32) Overlay 2 Configuration Register 5 */
  __IO LCDC_OVR2CFG6_Type             LCDC_OVR2CFG6;  /**< Offset: 0x284 (R/W  32) Overlay 2 Configuration Register 6 */
  __IO LCDC_OVR2CFG7_Type             LCDC_OVR2CFG7;  /**< Offset: 0x288 (R/W  32) Overlay 2 Configuration Register 7 */
  __IO LCDC_OVR2CFG8_Type             LCDC_OVR2CFG8;  /**< Offset: 0x28C (R/W  32) Overlay 2 Configuration Register 8 */
  __IO LCDC_OVR2CFG9_Type             LCDC_OVR2CFG9;  /**< Offset: 0x290 (R/W  32) Overlay 2 Configuration Register 9 */
  __I  uint8_t                        Reserved4[172];
  __O  LCDC_HEOCHER_Type              LCDC_HEOCHER;   /**< Offset: 0x340 ( /W  32) High-End Overlay Channel Enable Register */
  __O  LCDC_HEOCHDR_Type              LCDC_HEOCHDR;   /**< Offset: 0x344 ( /W  32) High-End Overlay Channel Disable Register */
  __I  LCDC_HEOCHSR_Type              LCDC_HEOCHSR;   /**< Offset: 0x348 (R/   32) High-End Overlay Channel Status Register */
  __O  LCDC_HEOIER_Type               LCDC_HEOIER;    /**< Offset: 0x34C ( /W  32) High-End Overlay Interrupt Enable Register */
  __O  LCDC_HEOIDR_Type               LCDC_HEOIDR;    /**< Offset: 0x350 ( /W  32) High-End Overlay Interrupt Disable Register */
  __I  LCDC_HEOIMR_Type               LCDC_HEOIMR;    /**< Offset: 0x354 (R/   32) High-End Overlay Interrupt Mask Register */
  __I  LCDC_HEOISR_Type               LCDC_HEOISR;    /**< Offset: 0x358 (R/   32) High-End Overlay Interrupt Status Register */
  __IO LCDC_HEOHEAD_Type              LCDC_HEOHEAD;   /**< Offset: 0x35C (R/W  32) High-End Overlay DMA Head Register */
  __IO LCDC_HEOADDR_Type              LCDC_HEOADDR;   /**< Offset: 0x360 (R/W  32) High-End Overlay DMA Address Register */
  __IO LCDC_HEOCTRL_Type              LCDC_HEOCTRL;   /**< Offset: 0x364 (R/W  32) High-End Overlay DMA Control Register */
  __IO LCDC_HEONEXT_Type              LCDC_HEONEXT;   /**< Offset: 0x368 (R/W  32) High-End Overlay DMA Next Register */
  __IO LCDC_HEOUHEAD_Type             LCDC_HEOUHEAD;  /**< Offset: 0x36C (R/W  32) High-End Overlay U-UV DMA Head Register */
  __IO LCDC_HEOUADDR_Type             LCDC_HEOUADDR;  /**< Offset: 0x370 (R/W  32) High-End Overlay U-UV DMA Address Register */
  __IO LCDC_HEOUCTRL_Type             LCDC_HEOUCTRL;  /**< Offset: 0x374 (R/W  32) High-End Overlay U-UV DMA Control Register */
  __IO LCDC_HEOUNEXT_Type             LCDC_HEOUNEXT;  /**< Offset: 0x378 (R/W  32) High-End Overlay U-UV DMA Next Register */
  __IO LCDC_HEOVHEAD_Type             LCDC_HEOVHEAD;  /**< Offset: 0x37C (R/W  32) High-End Overlay V DMA Head Register */
  __IO LCDC_HEOVADDR_Type             LCDC_HEOVADDR;  /**< Offset: 0x380 (R/W  32) High-End Overlay V DMA Address Register */
  __IO LCDC_HEOVCTRL_Type             LCDC_HEOVCTRL;  /**< Offset: 0x384 (R/W  32) High-End Overlay V DMA Control Register */
  __IO LCDC_HEOVNEXT_Type             LCDC_HEOVNEXT;  /**< Offset: 0x388 (R/W  32) High-End Overlay V DMA Next Register */
  __IO LCDC_HEOCFG0_Type              LCDC_HEOCFG0;   /**< Offset: 0x38C (R/W  32) High-End Overlay Configuration Register 0 */
  __IO LCDC_HEOCFG1_Type              LCDC_HEOCFG1;   /**< Offset: 0x390 (R/W  32) High-End Overlay Configuration Register 1 */
  __IO LCDC_HEOCFG2_Type              LCDC_HEOCFG2;   /**< Offset: 0x394 (R/W  32) High-End Overlay Configuration Register 2 */
  __IO LCDC_HEOCFG3_Type              LCDC_HEOCFG3;   /**< Offset: 0x398 (R/W  32) High-End Overlay Configuration Register 3 */
  __IO LCDC_HEOCFG4_Type              LCDC_HEOCFG4;   /**< Offset: 0x39C (R/W  32) High-End Overlay Configuration Register 4 */
  __IO LCDC_HEOCFG5_Type              LCDC_HEOCFG5;   /**< Offset: 0x3A0 (R/W  32) High-End Overlay Configuration Register 5 */
  __IO LCDC_HEOCFG6_Type              LCDC_HEOCFG6;   /**< Offset: 0x3A4 (R/W  32) High-End Overlay Configuration Register 6 */
  __IO LCDC_HEOCFG7_Type              LCDC_HEOCFG7;   /**< Offset: 0x3A8 (R/W  32) High-End Overlay Configuration Register 7 */
  __IO LCDC_HEOCFG8_Type              LCDC_HEOCFG8;   /**< Offset: 0x3AC (R/W  32) High-End Overlay Configuration Register 8 */
  __IO LCDC_HEOCFG9_Type              LCDC_HEOCFG9;   /**< Offset: 0x3B0 (R/W  32) High-End Overlay Configuration Register 9 */
  __IO LCDC_HEOCFG10_Type             LCDC_HEOCFG10;  /**< Offset: 0x3B4 (R/W  32) High-End Overlay Configuration Register 10 */
  __IO LCDC_HEOCFG11_Type             LCDC_HEOCFG11;  /**< Offset: 0x3B8 (R/W  32) High-End Overlay Configuration Register 11 */
  __IO LCDC_HEOCFG12_Type             LCDC_HEOCFG12;  /**< Offset: 0x3BC (R/W  32) High-End Overlay Configuration Register 12 */
  __IO LCDC_HEOCFG13_Type             LCDC_HEOCFG13;  /**< Offset: 0x3C0 (R/W  32) High-End Overlay Configuration Register 13 */
  __IO LCDC_HEOCFG14_Type             LCDC_HEOCFG14;  /**< Offset: 0x3C4 (R/W  32) High-End Overlay Configuration Register 14 */
  __IO LCDC_HEOCFG15_Type             LCDC_HEOCFG15;  /**< Offset: 0x3C8 (R/W  32) High-End Overlay Configuration Register 15 */
  __IO LCDC_HEOCFG16_Type             LCDC_HEOCFG16;  /**< Offset: 0x3CC (R/W  32) High-End Overlay Configuration Register 16 */
  __IO LCDC_HEOCFG17_Type             LCDC_HEOCFG17;  /**< Offset: 0x3D0 (R/W  32) High-End Overlay Configuration Register 17 */
  __IO LCDC_HEOCFG18_Type             LCDC_HEOCFG18;  /**< Offset: 0x3D4 (R/W  32) High-End Overlay Configuration Register 18 */
  __IO LCDC_HEOCFG19_Type             LCDC_HEOCFG19;  /**< Offset: 0x3D8 (R/W  32) High-End Overlay Configuration Register 19 */
  __IO LCDC_HEOCFG20_Type             LCDC_HEOCFG20;  /**< Offset: 0x3DC (R/W  32) High-End Overlay Configuration Register 20 */
  __IO LCDC_HEOCFG21_Type             LCDC_HEOCFG21;  /**< Offset: 0x3E0 (R/W  32) High-End Overlay Configuration Register 21 */
  __IO LCDC_HEOCFG22_Type             LCDC_HEOCFG22;  /**< Offset: 0x3E4 (R/W  32) High-End Overlay Configuration Register 22 */
  __IO LCDC_HEOCFG23_Type             LCDC_HEOCFG23;  /**< Offset: 0x3E8 (R/W  32) High-End Overlay Configuration Register 23 */
  __IO LCDC_HEOCFG24_Type             LCDC_HEOCFG24;  /**< Offset: 0x3EC (R/W  32) High-End Overlay Configuration Register 24 */
  __IO LCDC_HEOCFG25_Type             LCDC_HEOCFG25;  /**< Offset: 0x3F0 (R/W  32) High-End Overlay Configuration Register 25 */
  __IO LCDC_HEOCFG26_Type             LCDC_HEOCFG26;  /**< Offset: 0x3F4 (R/W  32) High-End Overlay Configuration Register 26 */
  __IO LCDC_HEOCFG27_Type             LCDC_HEOCFG27;  /**< Offset: 0x3F8 (R/W  32) High-End Overlay Configuration Register 27 */
  __IO LCDC_HEOCFG28_Type             LCDC_HEOCFG28;  /**< Offset: 0x3FC (R/W  32) High-End Overlay Configuration Register 28 */
  __IO LCDC_HEOCFG29_Type             LCDC_HEOCFG29;  /**< Offset: 0x400 (R/W  32) High-End Overlay Configuration Register 29 */
  __IO LCDC_HEOCFG30_Type             LCDC_HEOCFG30;  /**< Offset: 0x404 (R/W  32) High-End Overlay Configuration Register 30 */
  __IO LCDC_HEOCFG31_Type             LCDC_HEOCFG31;  /**< Offset: 0x408 (R/W  32) High-End Overlay Configuration Register 31 */
  __IO LCDC_HEOCFG32_Type             LCDC_HEOCFG32;  /**< Offset: 0x40C (R/W  32) High-End Overlay Configuration Register 32 */
  __IO LCDC_HEOCFG33_Type             LCDC_HEOCFG33;  /**< Offset: 0x410 (R/W  32) High-End Overlay Configuration Register 33 */
  __IO LCDC_HEOCFG34_Type             LCDC_HEOCFG34;  /**< Offset: 0x414 (R/W  32) High-End Overlay Configuration Register 34 */
  __IO LCDC_HEOCFG35_Type             LCDC_HEOCFG35;  /**< Offset: 0x418 (R/W  32) High-End Overlay Configuration Register 35 */
  __IO LCDC_HEOCFG36_Type             LCDC_HEOCFG36;  /**< Offset: 0x41C (R/W  32) High-End Overlay Configuration Register 36 */
  __IO LCDC_HEOCFG37_Type             LCDC_HEOCFG37;  /**< Offset: 0x420 (R/W  32) High-End Overlay Configuration Register 37 */
  __IO LCDC_HEOCFG38_Type             LCDC_HEOCFG38;  /**< Offset: 0x424 (R/W  32) High-End Overlay Configuration Register 38 */
  __IO LCDC_HEOCFG39_Type             LCDC_HEOCFG39;  /**< Offset: 0x428 (R/W  32) High-End Overlay Configuration Register 39 */
  __IO LCDC_HEOCFG40_Type             LCDC_HEOCFG40;  /**< Offset: 0x42C (R/W  32) High-End Overlay Configuration Register 40 */
  __IO LCDC_HEOCFG41_Type             LCDC_HEOCFG41;  /**< Offset: 0x430 (R/W  32) High-End Overlay Configuration Register 41 */
  __I  uint8_t                        Reserved5[268];
  __O  LCDC_PPCHER_Type               LCDC_PPCHER;    /**< Offset: 0x540 ( /W  32) Post Processing Channel Enable Register */
  __O  LCDC_PPCHDR_Type               LCDC_PPCHDR;    /**< Offset: 0x544 ( /W  32) Post Processing Channel Disable Register */
  __I  LCDC_PPCHSR_Type               LCDC_PPCHSR;    /**< Offset: 0x548 (R/   32) Post Processing Channel Status Register */
  __O  LCDC_PPIER_Type                LCDC_PPIER;     /**< Offset: 0x54C ( /W  32) Post Processing Interrupt Enable Register */
  __O  LCDC_PPIDR_Type                LCDC_PPIDR;     /**< Offset: 0x550 ( /W  32) Post Processing Interrupt Disable Register */
  __I  LCDC_PPIMR_Type                LCDC_PPIMR;     /**< Offset: 0x554 (R/   32) Post Processing Interrupt Mask Register */
  __I  LCDC_PPISR_Type                LCDC_PPISR;     /**< Offset: 0x558 (R/   32) Post Processing Interrupt Status Register */
  __IO LCDC_PPHEAD_Type               LCDC_PPHEAD;    /**< Offset: 0x55C (R/W  32) Post Processing Head Register */
  __IO LCDC_PPADDR_Type               LCDC_PPADDR;    /**< Offset: 0x560 (R/W  32) Post Processing Address Register */
  __IO LCDC_PPCTRL_Type               LCDC_PPCTRL;    /**< Offset: 0x564 (R/W  32) Post Processing Control Register */
  __IO LCDC_PPNEXT_Type               LCDC_PPNEXT;    /**< Offset: 0x568 (R/W  32) Post Processing Next Register */
  __IO LCDC_PPCFG0_Type               LCDC_PPCFG0;    /**< Offset: 0x56C (R/W  32) Post Processing Configuration Register 0 */
  __IO LCDC_PPCFG1_Type               LCDC_PPCFG1;    /**< Offset: 0x570 (R/W  32) Post Processing Configuration Register 1 */
  __IO LCDC_PPCFG2_Type               LCDC_PPCFG2;    /**< Offset: 0x574 (R/W  32) Post Processing Configuration Register 2 */
  __IO LCDC_PPCFG3_Type               LCDC_PPCFG3;    /**< Offset: 0x578 (R/W  32) Post Processing Configuration Register 3 */
  __IO LCDC_PPCFG4_Type               LCDC_PPCFG4;    /**< Offset: 0x57C (R/W  32) Post Processing Configuration Register 4 */
  __IO LCDC_PPCFG5_Type               LCDC_PPCFG5;    /**< Offset: 0x580 (R/W  32) Post Processing Configuration Register 5 */
  __I  uint8_t                        Reserved6[124];
  __IO LCDC_BASECLUT_Type             LCDC_BASECLUT[256]; /**< Offset: 0x600 (R/W  32) Base CLUT Register */
  __IO LCDC_OVR1CLUT_Type             LCDC_OVR1CLUT[256]; /**< Offset: 0xA00 (R/W  32) Overlay 1 CLUT Register */
  __IO LCDC_OVR2CLUT_Type             LCDC_OVR2CLUT[256]; /**< Offset: 0xE00 (R/W  32) Overlay 2 CLUT Register */
  __IO LCDC_HEOCLUT_Type              LCDC_HEOCLUT[256]; /**< Offset: 0x1200 (R/W  32) High-End Overlay CLUT Register */
} Lcdc;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of LCD Controller */

#endif /* _SAMA5D2_LCDC_COMPONENT_H_ */
