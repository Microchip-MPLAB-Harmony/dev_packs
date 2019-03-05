/**
 * \file
 *
 * \brief Component description for ISC
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
#ifndef _SAMA5D2_ISC_COMPONENT_H_
#define _SAMA5D2_ISC_COMPONENT_H_
#define _SAMA5D2_ISC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Image Sensor Controller
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR ISC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define ISC_11290                      /**< (ISC) Module ID */
#define REV_ISC G                      /**< (ISC) Module revision */

/* -------- ISC_DAD : (ISC Offset: 0x00) (R/W 32) DMA Address 0 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t AD0:32;                    /**< bit:  0..31  Channel 0 Address                        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_DAD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_DAD_OFFSET                      (0x00)                                        /**<  (ISC_DAD) DMA Address 0 Register  Offset */

#define ISC_DAD_AD0_Pos                     0                                              /**< (ISC_DAD) Channel 0 Address Position */
#define ISC_DAD_AD0_Msk                     (_U_(0xFFFFFFFF) << ISC_DAD_AD0_Pos)           /**< (ISC_DAD) Channel 0 Address Mask */
#define ISC_DAD_AD0(value)                  (ISC_DAD_AD0_Msk & ((value) << ISC_DAD_AD0_Pos))
#define ISC_DAD_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (ISC_DAD) Register MASK  (Use ISC_DAD_Msk instead)  */
#define ISC_DAD_Msk                         _U_(0xFFFFFFFF)                                /**< (ISC_DAD) Register Mask  */


/* -------- ISC_DST : (ISC Offset: 0x04) (R/W 32) DMA Stride 0 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ST0:32;                    /**< bit:  0..31  Channel 0 Stride                         */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_DST_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_DST_OFFSET                      (0x04)                                        /**<  (ISC_DST) DMA Stride 0 Register  Offset */

#define ISC_DST_ST0_Pos                     0                                              /**< (ISC_DST) Channel 0 Stride Position */
#define ISC_DST_ST0_Msk                     (_U_(0xFFFFFFFF) << ISC_DST_ST0_Pos)           /**< (ISC_DST) Channel 0 Stride Mask */
#define ISC_DST_ST0(value)                  (ISC_DST_ST0_Msk & ((value) << ISC_DST_ST0_Pos))
#define ISC_DST_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (ISC_DST) Register MASK  (Use ISC_DST_Msk instead)  */
#define ISC_DST_Msk                         _U_(0xFFFFFFFF)                                /**< (ISC_DST) Register Mask  */


/* -------- ISC_CTRLEN : (ISC Offset: 0x00) (/W 32) Control Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CAPTURE:1;                 /**< bit:      0  Capture Input Stream Command             */
    uint32_t UPPRO:1;                   /**< bit:      1  Update Profile                           */
    uint32_t HISREQ:1;                  /**< bit:      2  Histogram Request                        */
    uint32_t HISCLR:1;                  /**< bit:      3  Histogram Clear                          */
    uint32_t :28;                       /**< bit:  4..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CTRLEN_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CTRLEN_OFFSET                   (0x00)                                        /**<  (ISC_CTRLEN) Control Enable Register  Offset */

#define ISC_CTRLEN_CAPTURE_Pos              0                                              /**< (ISC_CTRLEN) Capture Input Stream Command Position */
#define ISC_CTRLEN_CAPTURE_Msk              (_U_(0x1) << ISC_CTRLEN_CAPTURE_Pos)           /**< (ISC_CTRLEN) Capture Input Stream Command Mask */
#define ISC_CTRLEN_CAPTURE                  ISC_CTRLEN_CAPTURE_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CTRLEN_CAPTURE_Msk instead */
#define ISC_CTRLEN_UPPRO_Pos                1                                              /**< (ISC_CTRLEN) Update Profile Position */
#define ISC_CTRLEN_UPPRO_Msk                (_U_(0x1) << ISC_CTRLEN_UPPRO_Pos)             /**< (ISC_CTRLEN) Update Profile Mask */
#define ISC_CTRLEN_UPPRO                    ISC_CTRLEN_UPPRO_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CTRLEN_UPPRO_Msk instead */
#define ISC_CTRLEN_HISREQ_Pos               2                                              /**< (ISC_CTRLEN) Histogram Request Position */
#define ISC_CTRLEN_HISREQ_Msk               (_U_(0x1) << ISC_CTRLEN_HISREQ_Pos)            /**< (ISC_CTRLEN) Histogram Request Mask */
#define ISC_CTRLEN_HISREQ                   ISC_CTRLEN_HISREQ_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CTRLEN_HISREQ_Msk instead */
#define ISC_CTRLEN_HISCLR_Pos               3                                              /**< (ISC_CTRLEN) Histogram Clear Position */
#define ISC_CTRLEN_HISCLR_Msk               (_U_(0x1) << ISC_CTRLEN_HISCLR_Pos)            /**< (ISC_CTRLEN) Histogram Clear Mask */
#define ISC_CTRLEN_HISCLR                   ISC_CTRLEN_HISCLR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CTRLEN_HISCLR_Msk instead */
#define ISC_CTRLEN_MASK                     _U_(0x0F)                                      /**< \deprecated (ISC_CTRLEN) Register MASK  (Use ISC_CTRLEN_Msk instead)  */
#define ISC_CTRLEN_Msk                      _U_(0x0F)                                      /**< (ISC_CTRLEN) Register Mask  */


/* -------- ISC_CTRLDIS : (ISC Offset: 0x04) (/W 32) Control Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DISABLE:1;                 /**< bit:      0  Capture Disable                          */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t SWRST:1;                   /**< bit:      8  Software Reset                           */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CTRLDIS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CTRLDIS_OFFSET                  (0x04)                                        /**<  (ISC_CTRLDIS) Control Disable Register  Offset */

#define ISC_CTRLDIS_DISABLE_Pos             0                                              /**< (ISC_CTRLDIS) Capture Disable Position */
#define ISC_CTRLDIS_DISABLE_Msk             (_U_(0x1) << ISC_CTRLDIS_DISABLE_Pos)          /**< (ISC_CTRLDIS) Capture Disable Mask */
#define ISC_CTRLDIS_DISABLE                 ISC_CTRLDIS_DISABLE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CTRLDIS_DISABLE_Msk instead */
#define ISC_CTRLDIS_SWRST_Pos               8                                              /**< (ISC_CTRLDIS) Software Reset Position */
#define ISC_CTRLDIS_SWRST_Msk               (_U_(0x1) << ISC_CTRLDIS_SWRST_Pos)            /**< (ISC_CTRLDIS) Software Reset Mask */
#define ISC_CTRLDIS_SWRST                   ISC_CTRLDIS_SWRST_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CTRLDIS_SWRST_Msk instead */
#define ISC_CTRLDIS_MASK                    _U_(0x101)                                     /**< \deprecated (ISC_CTRLDIS) Register MASK  (Use ISC_CTRLDIS_Msk instead)  */
#define ISC_CTRLDIS_Msk                     _U_(0x101)                                     /**< (ISC_CTRLDIS) Register Mask  */


/* -------- ISC_CTRLSR : (ISC Offset: 0x08) (R/ 32) Control Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CAPTURE:1;                 /**< bit:      0  Capture pending                          */
    uint32_t UPPRO:1;                   /**< bit:      1  Profile Update Pending                   */
    uint32_t HISREQ:1;                  /**< bit:      2  Histogram Request Pending                */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t FIELD:1;                   /**< bit:      4  Field Status (only relevant when the video stream is interlaced) */
    uint32_t :26;                       /**< bit:  5..30  Reserved */
    uint32_t SIP:1;                     /**< bit:     31  Synchronization In Progress              */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CTRLSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CTRLSR_OFFSET                   (0x08)                                        /**<  (ISC_CTRLSR) Control Status Register  Offset */

#define ISC_CTRLSR_CAPTURE_Pos              0                                              /**< (ISC_CTRLSR) Capture pending Position */
#define ISC_CTRLSR_CAPTURE_Msk              (_U_(0x1) << ISC_CTRLSR_CAPTURE_Pos)           /**< (ISC_CTRLSR) Capture pending Mask */
#define ISC_CTRLSR_CAPTURE                  ISC_CTRLSR_CAPTURE_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CTRLSR_CAPTURE_Msk instead */
#define ISC_CTRLSR_UPPRO_Pos                1                                              /**< (ISC_CTRLSR) Profile Update Pending Position */
#define ISC_CTRLSR_UPPRO_Msk                (_U_(0x1) << ISC_CTRLSR_UPPRO_Pos)             /**< (ISC_CTRLSR) Profile Update Pending Mask */
#define ISC_CTRLSR_UPPRO                    ISC_CTRLSR_UPPRO_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CTRLSR_UPPRO_Msk instead */
#define ISC_CTRLSR_HISREQ_Pos               2                                              /**< (ISC_CTRLSR) Histogram Request Pending Position */
#define ISC_CTRLSR_HISREQ_Msk               (_U_(0x1) << ISC_CTRLSR_HISREQ_Pos)            /**< (ISC_CTRLSR) Histogram Request Pending Mask */
#define ISC_CTRLSR_HISREQ                   ISC_CTRLSR_HISREQ_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CTRLSR_HISREQ_Msk instead */
#define ISC_CTRLSR_FIELD_Pos                4                                              /**< (ISC_CTRLSR) Field Status (only relevant when the video stream is interlaced) Position */
#define ISC_CTRLSR_FIELD_Msk                (_U_(0x1) << ISC_CTRLSR_FIELD_Pos)             /**< (ISC_CTRLSR) Field Status (only relevant when the video stream is interlaced) Mask */
#define ISC_CTRLSR_FIELD                    ISC_CTRLSR_FIELD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CTRLSR_FIELD_Msk instead */
#define ISC_CTRLSR_SIP_Pos                  31                                             /**< (ISC_CTRLSR) Synchronization In Progress Position */
#define ISC_CTRLSR_SIP_Msk                  (_U_(0x1) << ISC_CTRLSR_SIP_Pos)               /**< (ISC_CTRLSR) Synchronization In Progress Mask */
#define ISC_CTRLSR_SIP                      ISC_CTRLSR_SIP_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CTRLSR_SIP_Msk instead */
#define ISC_CTRLSR_MASK                     _U_(0x80000017)                                /**< \deprecated (ISC_CTRLSR) Register MASK  (Use ISC_CTRLSR_Msk instead)  */
#define ISC_CTRLSR_Msk                      _U_(0x80000017)                                /**< (ISC_CTRLSR) Register Mask  */


/* -------- ISC_PFE_CFG0 : (ISC Offset: 0x0c) (R/W 32) Parallel Front End Configuration 0 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t HPOL:1;                    /**< bit:      0  Horizontal Synchronization Polarity      */
    uint32_t VPOL:1;                    /**< bit:      1  Vertical Synchronization Polarity        */
    uint32_t PPOL:1;                    /**< bit:      2  Pixel Clock Polarity                     */
    uint32_t FPOL:1;                    /**< bit:      3  Field Polarity                           */
    uint32_t MODE:3;                    /**< bit:   4..6  Parallel Front End Mode                  */
    uint32_t CONT:1;                    /**< bit:      7  Continuous Acquisition                   */
    uint32_t GATED:1;                   /**< bit:      8  Gated input clock                        */
    uint32_t CCIR656:1;                 /**< bit:      9  CCIR656 input mode                       */
    uint32_t CCIR_CRC:1;                /**< bit:     10  CCIR656 CRC Decoder                      */
    uint32_t CCIR10_8N:1;               /**< bit:     11  CCIR 10 bits or 8 bits                   */
    uint32_t COLEN:1;                   /**< bit:     12  Column Cropping Enable                   */
    uint32_t ROWEN:1;                   /**< bit:     13  Row Cropping Enable                      */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t SKIPCNT:8;                 /**< bit: 16..23  Frame Skipping Counter                   */
    uint32_t :3;                        /**< bit: 24..26  Reserved */
    uint32_t CCIR_REP:1;                /**< bit:     27  CCIR Replication                         */
    uint32_t BPS:3;                     /**< bit: 28..30  Bits Per Sample                          */
    uint32_t REP:1;                     /**< bit:     31  Up Multiply with Replication             */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :9;                        /**< bit:   0..8  Reserved */
    uint32_t CCIR:1;                    /**< bit:      9  CCIR656 input mode                       */
    uint32_t :22;                       /**< bit: 10..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} ISC_PFE_CFG0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_PFE_CFG0_OFFSET                 (0x0C)                                        /**<  (ISC_PFE_CFG0) Parallel Front End Configuration 0 Register  Offset */

#define ISC_PFE_CFG0_HPOL_Pos               0                                              /**< (ISC_PFE_CFG0) Horizontal Synchronization Polarity Position */
#define ISC_PFE_CFG0_HPOL_Msk               (_U_(0x1) << ISC_PFE_CFG0_HPOL_Pos)            /**< (ISC_PFE_CFG0) Horizontal Synchronization Polarity Mask */
#define ISC_PFE_CFG0_HPOL                   ISC_PFE_CFG0_HPOL_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_PFE_CFG0_HPOL_Msk instead */
#define ISC_PFE_CFG0_VPOL_Pos               1                                              /**< (ISC_PFE_CFG0) Vertical Synchronization Polarity Position */
#define ISC_PFE_CFG0_VPOL_Msk               (_U_(0x1) << ISC_PFE_CFG0_VPOL_Pos)            /**< (ISC_PFE_CFG0) Vertical Synchronization Polarity Mask */
#define ISC_PFE_CFG0_VPOL                   ISC_PFE_CFG0_VPOL_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_PFE_CFG0_VPOL_Msk instead */
#define ISC_PFE_CFG0_PPOL_Pos               2                                              /**< (ISC_PFE_CFG0) Pixel Clock Polarity Position */
#define ISC_PFE_CFG0_PPOL_Msk               (_U_(0x1) << ISC_PFE_CFG0_PPOL_Pos)            /**< (ISC_PFE_CFG0) Pixel Clock Polarity Mask */
#define ISC_PFE_CFG0_PPOL                   ISC_PFE_CFG0_PPOL_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_PFE_CFG0_PPOL_Msk instead */
#define ISC_PFE_CFG0_FPOL_Pos               3                                              /**< (ISC_PFE_CFG0) Field Polarity Position */
#define ISC_PFE_CFG0_FPOL_Msk               (_U_(0x1) << ISC_PFE_CFG0_FPOL_Pos)            /**< (ISC_PFE_CFG0) Field Polarity Mask */
#define ISC_PFE_CFG0_FPOL                   ISC_PFE_CFG0_FPOL_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_PFE_CFG0_FPOL_Msk instead */
#define ISC_PFE_CFG0_MODE_Pos               4                                              /**< (ISC_PFE_CFG0) Parallel Front End Mode Position */
#define ISC_PFE_CFG0_MODE_Msk               (_U_(0x7) << ISC_PFE_CFG0_MODE_Pos)            /**< (ISC_PFE_CFG0) Parallel Front End Mode Mask */
#define ISC_PFE_CFG0_MODE(value)            (ISC_PFE_CFG0_MODE_Msk & ((value) << ISC_PFE_CFG0_MODE_Pos))
#define   ISC_PFE_CFG0_MODE_PROGRESSIVE_Val _U_(0x0)                                       /**< (ISC_PFE_CFG0) Video source is progressive.  */
#define   ISC_PFE_CFG0_MODE_DF_TOP_Val      _U_(0x1)                                       /**< (ISC_PFE_CFG0) Video source is interlaced, two fields are captured starting with top field.  */
#define   ISC_PFE_CFG0_MODE_DF_BOTTOM_Val   _U_(0x2)                                       /**< (ISC_PFE_CFG0) Video source is interlaced, two fields are captured starting with bottom field.  */
#define   ISC_PFE_CFG0_MODE_DF_IMMEDIATE_Val _U_(0x3)                                       /**< (ISC_PFE_CFG0) Video source is interlaced, two fields are captured immediately.  */
#define   ISC_PFE_CFG0_MODE_SF_TOP_Val      _U_(0x4)                                       /**< (ISC_PFE_CFG0) Video source is interlaced, one field is captured starting with the top field.  */
#define   ISC_PFE_CFG0_MODE_SF_BOTTOM_Val   _U_(0x5)                                       /**< (ISC_PFE_CFG0) Video source is interlaced, one field is captured starting with the bottom field.  */
#define   ISC_PFE_CFG0_MODE_SF_IMMEDIATE_Val _U_(0x6)                                       /**< (ISC_PFE_CFG0) Video source is interlaced, one field is captured starting immediately.  */
#define ISC_PFE_CFG0_MODE_PROGRESSIVE       (ISC_PFE_CFG0_MODE_PROGRESSIVE_Val << ISC_PFE_CFG0_MODE_Pos)  /**< (ISC_PFE_CFG0) Video source is progressive. Position  */
#define ISC_PFE_CFG0_MODE_DF_TOP            (ISC_PFE_CFG0_MODE_DF_TOP_Val << ISC_PFE_CFG0_MODE_Pos)  /**< (ISC_PFE_CFG0) Video source is interlaced, two fields are captured starting with top field. Position  */
#define ISC_PFE_CFG0_MODE_DF_BOTTOM         (ISC_PFE_CFG0_MODE_DF_BOTTOM_Val << ISC_PFE_CFG0_MODE_Pos)  /**< (ISC_PFE_CFG0) Video source is interlaced, two fields are captured starting with bottom field. Position  */
#define ISC_PFE_CFG0_MODE_DF_IMMEDIATE      (ISC_PFE_CFG0_MODE_DF_IMMEDIATE_Val << ISC_PFE_CFG0_MODE_Pos)  /**< (ISC_PFE_CFG0) Video source is interlaced, two fields are captured immediately. Position  */
#define ISC_PFE_CFG0_MODE_SF_TOP            (ISC_PFE_CFG0_MODE_SF_TOP_Val << ISC_PFE_CFG0_MODE_Pos)  /**< (ISC_PFE_CFG0) Video source is interlaced, one field is captured starting with the top field. Position  */
#define ISC_PFE_CFG0_MODE_SF_BOTTOM         (ISC_PFE_CFG0_MODE_SF_BOTTOM_Val << ISC_PFE_CFG0_MODE_Pos)  /**< (ISC_PFE_CFG0) Video source is interlaced, one field is captured starting with the bottom field. Position  */
#define ISC_PFE_CFG0_MODE_SF_IMMEDIATE      (ISC_PFE_CFG0_MODE_SF_IMMEDIATE_Val << ISC_PFE_CFG0_MODE_Pos)  /**< (ISC_PFE_CFG0) Video source is interlaced, one field is captured starting immediately. Position  */
#define ISC_PFE_CFG0_CONT_Pos               7                                              /**< (ISC_PFE_CFG0) Continuous Acquisition Position */
#define ISC_PFE_CFG0_CONT_Msk               (_U_(0x1) << ISC_PFE_CFG0_CONT_Pos)            /**< (ISC_PFE_CFG0) Continuous Acquisition Mask */
#define ISC_PFE_CFG0_CONT                   ISC_PFE_CFG0_CONT_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_PFE_CFG0_CONT_Msk instead */
#define ISC_PFE_CFG0_GATED_Pos              8                                              /**< (ISC_PFE_CFG0) Gated input clock Position */
#define ISC_PFE_CFG0_GATED_Msk              (_U_(0x1) << ISC_PFE_CFG0_GATED_Pos)           /**< (ISC_PFE_CFG0) Gated input clock Mask */
#define ISC_PFE_CFG0_GATED                  ISC_PFE_CFG0_GATED_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_PFE_CFG0_GATED_Msk instead */
#define ISC_PFE_CFG0_CCIR656_Pos            9                                              /**< (ISC_PFE_CFG0) CCIR656 input mode Position */
#define ISC_PFE_CFG0_CCIR656_Msk            (_U_(0x1) << ISC_PFE_CFG0_CCIR656_Pos)         /**< (ISC_PFE_CFG0) CCIR656 input mode Mask */
#define ISC_PFE_CFG0_CCIR656                ISC_PFE_CFG0_CCIR656_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_PFE_CFG0_CCIR656_Msk instead */
#define ISC_PFE_CFG0_CCIR_CRC_Pos           10                                             /**< (ISC_PFE_CFG0) CCIR656 CRC Decoder Position */
#define ISC_PFE_CFG0_CCIR_CRC_Msk           (_U_(0x1) << ISC_PFE_CFG0_CCIR_CRC_Pos)        /**< (ISC_PFE_CFG0) CCIR656 CRC Decoder Mask */
#define ISC_PFE_CFG0_CCIR_CRC               ISC_PFE_CFG0_CCIR_CRC_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_PFE_CFG0_CCIR_CRC_Msk instead */
#define ISC_PFE_CFG0_CCIR10_8N_Pos          11                                             /**< (ISC_PFE_CFG0) CCIR 10 bits or 8 bits Position */
#define ISC_PFE_CFG0_CCIR10_8N_Msk          (_U_(0x1) << ISC_PFE_CFG0_CCIR10_8N_Pos)       /**< (ISC_PFE_CFG0) CCIR 10 bits or 8 bits Mask */
#define ISC_PFE_CFG0_CCIR10_8N              ISC_PFE_CFG0_CCIR10_8N_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_PFE_CFG0_CCIR10_8N_Msk instead */
#define ISC_PFE_CFG0_COLEN_Pos              12                                             /**< (ISC_PFE_CFG0) Column Cropping Enable Position */
#define ISC_PFE_CFG0_COLEN_Msk              (_U_(0x1) << ISC_PFE_CFG0_COLEN_Pos)           /**< (ISC_PFE_CFG0) Column Cropping Enable Mask */
#define ISC_PFE_CFG0_COLEN                  ISC_PFE_CFG0_COLEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_PFE_CFG0_COLEN_Msk instead */
#define ISC_PFE_CFG0_ROWEN_Pos              13                                             /**< (ISC_PFE_CFG0) Row Cropping Enable Position */
#define ISC_PFE_CFG0_ROWEN_Msk              (_U_(0x1) << ISC_PFE_CFG0_ROWEN_Pos)           /**< (ISC_PFE_CFG0) Row Cropping Enable Mask */
#define ISC_PFE_CFG0_ROWEN                  ISC_PFE_CFG0_ROWEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_PFE_CFG0_ROWEN_Msk instead */
#define ISC_PFE_CFG0_SKIPCNT_Pos            16                                             /**< (ISC_PFE_CFG0) Frame Skipping Counter Position */
#define ISC_PFE_CFG0_SKIPCNT_Msk            (_U_(0xFF) << ISC_PFE_CFG0_SKIPCNT_Pos)        /**< (ISC_PFE_CFG0) Frame Skipping Counter Mask */
#define ISC_PFE_CFG0_SKIPCNT(value)         (ISC_PFE_CFG0_SKIPCNT_Msk & ((value) << ISC_PFE_CFG0_SKIPCNT_Pos))
#define ISC_PFE_CFG0_CCIR_REP_Pos           27                                             /**< (ISC_PFE_CFG0) CCIR Replication Position */
#define ISC_PFE_CFG0_CCIR_REP_Msk           (_U_(0x1) << ISC_PFE_CFG0_CCIR_REP_Pos)        /**< (ISC_PFE_CFG0) CCIR Replication Mask */
#define ISC_PFE_CFG0_CCIR_REP               ISC_PFE_CFG0_CCIR_REP_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_PFE_CFG0_CCIR_REP_Msk instead */
#define ISC_PFE_CFG0_BPS_Pos                28                                             /**< (ISC_PFE_CFG0) Bits Per Sample Position */
#define ISC_PFE_CFG0_BPS_Msk                (_U_(0x7) << ISC_PFE_CFG0_BPS_Pos)             /**< (ISC_PFE_CFG0) Bits Per Sample Mask */
#define ISC_PFE_CFG0_BPS(value)             (ISC_PFE_CFG0_BPS_Msk & ((value) << ISC_PFE_CFG0_BPS_Pos))
#define   ISC_PFE_CFG0_BPS_TWELVE_Val       _U_(0x0)                                       /**< (ISC_PFE_CFG0) 12-bit input  */
#define   ISC_PFE_CFG0_BPS_ELEVEN_Val       _U_(0x1)                                       /**< (ISC_PFE_CFG0) 11-bit input  */
#define   ISC_PFE_CFG0_BPS_TEN_Val          _U_(0x2)                                       /**< (ISC_PFE_CFG0) 10-bit input  */
#define   ISC_PFE_CFG0_BPS_NINE_Val         _U_(0x3)                                       /**< (ISC_PFE_CFG0) 9-bit input  */
#define   ISC_PFE_CFG0_BPS_EIGHT_Val        _U_(0x4)                                       /**< (ISC_PFE_CFG0) 8-bit input  */
#define ISC_PFE_CFG0_BPS_TWELVE             (ISC_PFE_CFG0_BPS_TWELVE_Val << ISC_PFE_CFG0_BPS_Pos)  /**< (ISC_PFE_CFG0) 12-bit input Position  */
#define ISC_PFE_CFG0_BPS_ELEVEN             (ISC_PFE_CFG0_BPS_ELEVEN_Val << ISC_PFE_CFG0_BPS_Pos)  /**< (ISC_PFE_CFG0) 11-bit input Position  */
#define ISC_PFE_CFG0_BPS_TEN                (ISC_PFE_CFG0_BPS_TEN_Val << ISC_PFE_CFG0_BPS_Pos)  /**< (ISC_PFE_CFG0) 10-bit input Position  */
#define ISC_PFE_CFG0_BPS_NINE               (ISC_PFE_CFG0_BPS_NINE_Val << ISC_PFE_CFG0_BPS_Pos)  /**< (ISC_PFE_CFG0) 9-bit input Position  */
#define ISC_PFE_CFG0_BPS_EIGHT              (ISC_PFE_CFG0_BPS_EIGHT_Val << ISC_PFE_CFG0_BPS_Pos)  /**< (ISC_PFE_CFG0) 8-bit input Position  */
#define ISC_PFE_CFG0_REP_Pos                31                                             /**< (ISC_PFE_CFG0) Up Multiply with Replication Position */
#define ISC_PFE_CFG0_REP_Msk                (_U_(0x1) << ISC_PFE_CFG0_REP_Pos)             /**< (ISC_PFE_CFG0) Up Multiply with Replication Mask */
#define ISC_PFE_CFG0_REP                    ISC_PFE_CFG0_REP_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_PFE_CFG0_REP_Msk instead */
#define ISC_PFE_CFG0_MASK                   _U_(0xF8FF3FFF)                                /**< \deprecated (ISC_PFE_CFG0) Register MASK  (Use ISC_PFE_CFG0_Msk instead)  */
#define ISC_PFE_CFG0_Msk                    _U_(0xF8FF3FFF)                                /**< (ISC_PFE_CFG0) Register Mask  */

#define ISC_PFE_CFG0_CCIR_Pos               9                                              /**< (ISC_PFE_CFG0 Position) CCIR656 input mode */
#define ISC_PFE_CFG0_CCIR_Msk               (_U_(0x1) << ISC_PFE_CFG0_CCIR_Pos)            /**< (ISC_PFE_CFG0 Mask) CCIR */
#define ISC_PFE_CFG0_CCIR(value)            (ISC_PFE_CFG0_CCIR_Msk & ((value) << ISC_PFE_CFG0_CCIR_Pos))  

/* -------- ISC_PFE_CFG1 : (ISC Offset: 0x10) (R/W 32) Parallel Front End Configuration 1 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t COLMIN:16;                 /**< bit:  0..15  Column Minimum Limit                     */
    uint32_t COLMAX:16;                 /**< bit: 16..31  Column Maximum Limit                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_PFE_CFG1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_PFE_CFG1_OFFSET                 (0x10)                                        /**<  (ISC_PFE_CFG1) Parallel Front End Configuration 1 Register  Offset */

#define ISC_PFE_CFG1_COLMIN_Pos             0                                              /**< (ISC_PFE_CFG1) Column Minimum Limit Position */
#define ISC_PFE_CFG1_COLMIN_Msk             (_U_(0xFFFF) << ISC_PFE_CFG1_COLMIN_Pos)       /**< (ISC_PFE_CFG1) Column Minimum Limit Mask */
#define ISC_PFE_CFG1_COLMIN(value)          (ISC_PFE_CFG1_COLMIN_Msk & ((value) << ISC_PFE_CFG1_COLMIN_Pos))
#define ISC_PFE_CFG1_COLMAX_Pos             16                                             /**< (ISC_PFE_CFG1) Column Maximum Limit Position */
#define ISC_PFE_CFG1_COLMAX_Msk             (_U_(0xFFFF) << ISC_PFE_CFG1_COLMAX_Pos)       /**< (ISC_PFE_CFG1) Column Maximum Limit Mask */
#define ISC_PFE_CFG1_COLMAX(value)          (ISC_PFE_CFG1_COLMAX_Msk & ((value) << ISC_PFE_CFG1_COLMAX_Pos))
#define ISC_PFE_CFG1_MASK                   _U_(0xFFFFFFFF)                                /**< \deprecated (ISC_PFE_CFG1) Register MASK  (Use ISC_PFE_CFG1_Msk instead)  */
#define ISC_PFE_CFG1_Msk                    _U_(0xFFFFFFFF)                                /**< (ISC_PFE_CFG1) Register Mask  */


/* -------- ISC_PFE_CFG2 : (ISC Offset: 0x14) (R/W 32) Parallel Front End Configuration 2 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ROWMIN:16;                 /**< bit:  0..15  Row Minimum Limit                        */
    uint32_t ROWMAX:16;                 /**< bit: 16..31  Row Maximum Limit                        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_PFE_CFG2_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_PFE_CFG2_OFFSET                 (0x14)                                        /**<  (ISC_PFE_CFG2) Parallel Front End Configuration 2 Register  Offset */

#define ISC_PFE_CFG2_ROWMIN_Pos             0                                              /**< (ISC_PFE_CFG2) Row Minimum Limit Position */
#define ISC_PFE_CFG2_ROWMIN_Msk             (_U_(0xFFFF) << ISC_PFE_CFG2_ROWMIN_Pos)       /**< (ISC_PFE_CFG2) Row Minimum Limit Mask */
#define ISC_PFE_CFG2_ROWMIN(value)          (ISC_PFE_CFG2_ROWMIN_Msk & ((value) << ISC_PFE_CFG2_ROWMIN_Pos))
#define ISC_PFE_CFG2_ROWMAX_Pos             16                                             /**< (ISC_PFE_CFG2) Row Maximum Limit Position */
#define ISC_PFE_CFG2_ROWMAX_Msk             (_U_(0xFFFF) << ISC_PFE_CFG2_ROWMAX_Pos)       /**< (ISC_PFE_CFG2) Row Maximum Limit Mask */
#define ISC_PFE_CFG2_ROWMAX(value)          (ISC_PFE_CFG2_ROWMAX_Msk & ((value) << ISC_PFE_CFG2_ROWMAX_Pos))
#define ISC_PFE_CFG2_MASK                   _U_(0xFFFFFFFF)                                /**< \deprecated (ISC_PFE_CFG2) Register MASK  (Use ISC_PFE_CFG2_Msk instead)  */
#define ISC_PFE_CFG2_Msk                    _U_(0xFFFFFFFF)                                /**< (ISC_PFE_CFG2) Register Mask  */


/* -------- ISC_CLKEN : (ISC Offset: 0x18) (/W 32) Clock Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ICEN:1;                    /**< bit:      0  ISP Clock Enable                         */
    uint32_t MCEN:1;                    /**< bit:      1  Master Clock Enable                      */
    uint32_t :30;                       /**< bit:  2..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CLKEN_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CLKEN_OFFSET                    (0x18)                                        /**<  (ISC_CLKEN) Clock Enable Register  Offset */

#define ISC_CLKEN_ICEN_Pos                  0                                              /**< (ISC_CLKEN) ISP Clock Enable Position */
#define ISC_CLKEN_ICEN_Msk                  (_U_(0x1) << ISC_CLKEN_ICEN_Pos)               /**< (ISC_CLKEN) ISP Clock Enable Mask */
#define ISC_CLKEN_ICEN                      ISC_CLKEN_ICEN_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CLKEN_ICEN_Msk instead */
#define ISC_CLKEN_MCEN_Pos                  1                                              /**< (ISC_CLKEN) Master Clock Enable Position */
#define ISC_CLKEN_MCEN_Msk                  (_U_(0x1) << ISC_CLKEN_MCEN_Pos)               /**< (ISC_CLKEN) Master Clock Enable Mask */
#define ISC_CLKEN_MCEN                      ISC_CLKEN_MCEN_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CLKEN_MCEN_Msk instead */
#define ISC_CLKEN_MASK                      _U_(0x03)                                      /**< \deprecated (ISC_CLKEN) Register MASK  (Use ISC_CLKEN_Msk instead)  */
#define ISC_CLKEN_Msk                       _U_(0x03)                                      /**< (ISC_CLKEN) Register Mask  */


/* -------- ISC_CLKDIS : (ISC Offset: 0x1c) (/W 32) Clock Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ICDIS:1;                   /**< bit:      0  ISP Clock Disable                        */
    uint32_t MCDIS:1;                   /**< bit:      1  Master Clock Disable                     */
    uint32_t :6;                        /**< bit:   2..7  Reserved */
    uint32_t ICSWRST:1;                 /**< bit:      8  ISP Clock Software Reset                 */
    uint32_t MCSWRST:1;                 /**< bit:      9  Master Clock Software Reset              */
    uint32_t :22;                       /**< bit: 10..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CLKDIS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CLKDIS_OFFSET                   (0x1C)                                        /**<  (ISC_CLKDIS) Clock Disable Register  Offset */

#define ISC_CLKDIS_ICDIS_Pos                0                                              /**< (ISC_CLKDIS) ISP Clock Disable Position */
#define ISC_CLKDIS_ICDIS_Msk                (_U_(0x1) << ISC_CLKDIS_ICDIS_Pos)             /**< (ISC_CLKDIS) ISP Clock Disable Mask */
#define ISC_CLKDIS_ICDIS                    ISC_CLKDIS_ICDIS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CLKDIS_ICDIS_Msk instead */
#define ISC_CLKDIS_MCDIS_Pos                1                                              /**< (ISC_CLKDIS) Master Clock Disable Position */
#define ISC_CLKDIS_MCDIS_Msk                (_U_(0x1) << ISC_CLKDIS_MCDIS_Pos)             /**< (ISC_CLKDIS) Master Clock Disable Mask */
#define ISC_CLKDIS_MCDIS                    ISC_CLKDIS_MCDIS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CLKDIS_MCDIS_Msk instead */
#define ISC_CLKDIS_ICSWRST_Pos              8                                              /**< (ISC_CLKDIS) ISP Clock Software Reset Position */
#define ISC_CLKDIS_ICSWRST_Msk              (_U_(0x1) << ISC_CLKDIS_ICSWRST_Pos)           /**< (ISC_CLKDIS) ISP Clock Software Reset Mask */
#define ISC_CLKDIS_ICSWRST                  ISC_CLKDIS_ICSWRST_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CLKDIS_ICSWRST_Msk instead */
#define ISC_CLKDIS_MCSWRST_Pos              9                                              /**< (ISC_CLKDIS) Master Clock Software Reset Position */
#define ISC_CLKDIS_MCSWRST_Msk              (_U_(0x1) << ISC_CLKDIS_MCSWRST_Pos)           /**< (ISC_CLKDIS) Master Clock Software Reset Mask */
#define ISC_CLKDIS_MCSWRST                  ISC_CLKDIS_MCSWRST_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CLKDIS_MCSWRST_Msk instead */
#define ISC_CLKDIS_MASK                     _U_(0x303)                                     /**< \deprecated (ISC_CLKDIS) Register MASK  (Use ISC_CLKDIS_Msk instead)  */
#define ISC_CLKDIS_Msk                      _U_(0x303)                                     /**< (ISC_CLKDIS) Register Mask  */


/* -------- ISC_CLKSR : (ISC Offset: 0x20) (R/ 32) Clock Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ICSR:1;                    /**< bit:      0  ISP Clock Status Register                */
    uint32_t MCSR:1;                    /**< bit:      1  Master Clock Status Register             */
    uint32_t :29;                       /**< bit:  2..30  Reserved */
    uint32_t SIP:1;                     /**< bit:     31  Synchronization In Progress              */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CLKSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CLKSR_OFFSET                    (0x20)                                        /**<  (ISC_CLKSR) Clock Status Register  Offset */

#define ISC_CLKSR_ICSR_Pos                  0                                              /**< (ISC_CLKSR) ISP Clock Status Register Position */
#define ISC_CLKSR_ICSR_Msk                  (_U_(0x1) << ISC_CLKSR_ICSR_Pos)               /**< (ISC_CLKSR) ISP Clock Status Register Mask */
#define ISC_CLKSR_ICSR                      ISC_CLKSR_ICSR_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CLKSR_ICSR_Msk instead */
#define ISC_CLKSR_MCSR_Pos                  1                                              /**< (ISC_CLKSR) Master Clock Status Register Position */
#define ISC_CLKSR_MCSR_Msk                  (_U_(0x1) << ISC_CLKSR_MCSR_Pos)               /**< (ISC_CLKSR) Master Clock Status Register Mask */
#define ISC_CLKSR_MCSR                      ISC_CLKSR_MCSR_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CLKSR_MCSR_Msk instead */
#define ISC_CLKSR_SIP_Pos                   31                                             /**< (ISC_CLKSR) Synchronization In Progress Position */
#define ISC_CLKSR_SIP_Msk                   (_U_(0x1) << ISC_CLKSR_SIP_Pos)                /**< (ISC_CLKSR) Synchronization In Progress Mask */
#define ISC_CLKSR_SIP                       ISC_CLKSR_SIP_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CLKSR_SIP_Msk instead */
#define ISC_CLKSR_MASK                      _U_(0x80000003)                                /**< \deprecated (ISC_CLKSR) Register MASK  (Use ISC_CLKSR_Msk instead)  */
#define ISC_CLKSR_Msk                       _U_(0x80000003)                                /**< (ISC_CLKSR) Register Mask  */


/* -------- ISC_CLKCFG : (ISC Offset: 0x24) (R/W 32) Clock Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ICDIV:8;                   /**< bit:   0..7  ISP Clock Divider                        */
    uint32_t ICSEL:1;                   /**< bit:      8  ISP Clock Selection                      */
    uint32_t :7;                        /**< bit:  9..15  Reserved */
    uint32_t MCDIV:8;                   /**< bit: 16..23  Master Clock Divider                     */
    uint32_t MCSEL:2;                   /**< bit: 24..25  Master Clock Reference Clock Selection   */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CLKCFG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CLKCFG_OFFSET                   (0x24)                                        /**<  (ISC_CLKCFG) Clock Configuration Register  Offset */

#define ISC_CLKCFG_ICDIV_Pos                0                                              /**< (ISC_CLKCFG) ISP Clock Divider Position */
#define ISC_CLKCFG_ICDIV_Msk                (_U_(0xFF) << ISC_CLKCFG_ICDIV_Pos)            /**< (ISC_CLKCFG) ISP Clock Divider Mask */
#define ISC_CLKCFG_ICDIV(value)             (ISC_CLKCFG_ICDIV_Msk & ((value) << ISC_CLKCFG_ICDIV_Pos))
#define ISC_CLKCFG_ICSEL_Pos                8                                              /**< (ISC_CLKCFG) ISP Clock Selection Position */
#define ISC_CLKCFG_ICSEL_Msk                (_U_(0x1) << ISC_CLKCFG_ICSEL_Pos)             /**< (ISC_CLKCFG) ISP Clock Selection Mask */
#define ISC_CLKCFG_ICSEL                    ISC_CLKCFG_ICSEL_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CLKCFG_ICSEL_Msk instead */
#define ISC_CLKCFG_MCDIV_Pos                16                                             /**< (ISC_CLKCFG) Master Clock Divider Position */
#define ISC_CLKCFG_MCDIV_Msk                (_U_(0xFF) << ISC_CLKCFG_MCDIV_Pos)            /**< (ISC_CLKCFG) Master Clock Divider Mask */
#define ISC_CLKCFG_MCDIV(value)             (ISC_CLKCFG_MCDIV_Msk & ((value) << ISC_CLKCFG_MCDIV_Pos))
#define ISC_CLKCFG_MCSEL_Pos                24                                             /**< (ISC_CLKCFG) Master Clock Reference Clock Selection Position */
#define ISC_CLKCFG_MCSEL_Msk                (_U_(0x3) << ISC_CLKCFG_MCSEL_Pos)             /**< (ISC_CLKCFG) Master Clock Reference Clock Selection Mask */
#define ISC_CLKCFG_MCSEL(value)             (ISC_CLKCFG_MCSEL_Msk & ((value) << ISC_CLKCFG_MCSEL_Pos))
#define ISC_CLKCFG_MASK                     _U_(0x3FF01FF)                                 /**< \deprecated (ISC_CLKCFG) Register MASK  (Use ISC_CLKCFG_Msk instead)  */
#define ISC_CLKCFG_Msk                      _U_(0x3FF01FF)                                 /**< (ISC_CLKCFG) Register Mask  */


/* -------- ISC_INTEN : (ISC Offset: 0x28) (/W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t VD:1;                      /**< bit:      0  Vertical Synchronization Detection Interrupt Enable */
    uint32_t HD:1;                      /**< bit:      1  Horizontal Synchronization Detection Interrupt Enable */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t SWRST:1;                   /**< bit:      4  Software Reset Completed Interrupt Enable */
    uint32_t DIS:1;                     /**< bit:      5  Disable Completed Interrupt Enable       */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t DDONE:1;                   /**< bit:      8  DMA Done Interrupt Enable                */
    uint32_t LDONE:1;                   /**< bit:      9  DMA List Done Interrupt Enable           */
    uint32_t :2;                        /**< bit: 10..11  Reserved */
    uint32_t HISDONE:1;                 /**< bit:     12  Histogram Completed Interrupt Enable     */
    uint32_t HISCLR:1;                  /**< bit:     13  Histogram Clear Interrupt Enable         */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t WERR:1;                    /**< bit:     16  Write Channel Error Interrupt Enable     */
    uint32_t :3;                        /**< bit: 17..19  Reserved */
    uint32_t RERR:1;                    /**< bit:     20  Read Channel Error Interrupt Enable      */
    uint32_t :3;                        /**< bit: 21..23  Reserved */
    uint32_t VFPOV:1;                   /**< bit:     24  Vertical Front Porch Overflow Interrupt Enable */
    uint32_t DAOV:1;                    /**< bit:     25  Data Overflow Interrupt Enable           */
    uint32_t VDTO:1;                    /**< bit:     26  Vertical Synchronization Timeout Interrupt Enable */
    uint32_t HDTO:1;                    /**< bit:     27  Horizontal Synchronization Timeout Interrupt Enable */
    uint32_t CCIRERR:1;                 /**< bit:     28  CCIR Decoder Error Interrupt Enable      */
    uint32_t :3;                        /**< bit: 29..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_INTEN_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_INTEN_OFFSET                    (0x28)                                        /**<  (ISC_INTEN) Interrupt Enable Register  Offset */

#define ISC_INTEN_VD_Pos                    0                                              /**< (ISC_INTEN) Vertical Synchronization Detection Interrupt Enable Position */
#define ISC_INTEN_VD_Msk                    (_U_(0x1) << ISC_INTEN_VD_Pos)                 /**< (ISC_INTEN) Vertical Synchronization Detection Interrupt Enable Mask */
#define ISC_INTEN_VD                        ISC_INTEN_VD_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTEN_VD_Msk instead */
#define ISC_INTEN_HD_Pos                    1                                              /**< (ISC_INTEN) Horizontal Synchronization Detection Interrupt Enable Position */
#define ISC_INTEN_HD_Msk                    (_U_(0x1) << ISC_INTEN_HD_Pos)                 /**< (ISC_INTEN) Horizontal Synchronization Detection Interrupt Enable Mask */
#define ISC_INTEN_HD                        ISC_INTEN_HD_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTEN_HD_Msk instead */
#define ISC_INTEN_SWRST_Pos                 4                                              /**< (ISC_INTEN) Software Reset Completed Interrupt Enable Position */
#define ISC_INTEN_SWRST_Msk                 (_U_(0x1) << ISC_INTEN_SWRST_Pos)              /**< (ISC_INTEN) Software Reset Completed Interrupt Enable Mask */
#define ISC_INTEN_SWRST                     ISC_INTEN_SWRST_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTEN_SWRST_Msk instead */
#define ISC_INTEN_DIS_Pos                   5                                              /**< (ISC_INTEN) Disable Completed Interrupt Enable Position */
#define ISC_INTEN_DIS_Msk                   (_U_(0x1) << ISC_INTEN_DIS_Pos)                /**< (ISC_INTEN) Disable Completed Interrupt Enable Mask */
#define ISC_INTEN_DIS                       ISC_INTEN_DIS_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTEN_DIS_Msk instead */
#define ISC_INTEN_DDONE_Pos                 8                                              /**< (ISC_INTEN) DMA Done Interrupt Enable Position */
#define ISC_INTEN_DDONE_Msk                 (_U_(0x1) << ISC_INTEN_DDONE_Pos)              /**< (ISC_INTEN) DMA Done Interrupt Enable Mask */
#define ISC_INTEN_DDONE                     ISC_INTEN_DDONE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTEN_DDONE_Msk instead */
#define ISC_INTEN_LDONE_Pos                 9                                              /**< (ISC_INTEN) DMA List Done Interrupt Enable Position */
#define ISC_INTEN_LDONE_Msk                 (_U_(0x1) << ISC_INTEN_LDONE_Pos)              /**< (ISC_INTEN) DMA List Done Interrupt Enable Mask */
#define ISC_INTEN_LDONE                     ISC_INTEN_LDONE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTEN_LDONE_Msk instead */
#define ISC_INTEN_HISDONE_Pos               12                                             /**< (ISC_INTEN) Histogram Completed Interrupt Enable Position */
#define ISC_INTEN_HISDONE_Msk               (_U_(0x1) << ISC_INTEN_HISDONE_Pos)            /**< (ISC_INTEN) Histogram Completed Interrupt Enable Mask */
#define ISC_INTEN_HISDONE                   ISC_INTEN_HISDONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTEN_HISDONE_Msk instead */
#define ISC_INTEN_HISCLR_Pos                13                                             /**< (ISC_INTEN) Histogram Clear Interrupt Enable Position */
#define ISC_INTEN_HISCLR_Msk                (_U_(0x1) << ISC_INTEN_HISCLR_Pos)             /**< (ISC_INTEN) Histogram Clear Interrupt Enable Mask */
#define ISC_INTEN_HISCLR                    ISC_INTEN_HISCLR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTEN_HISCLR_Msk instead */
#define ISC_INTEN_WERR_Pos                  16                                             /**< (ISC_INTEN) Write Channel Error Interrupt Enable Position */
#define ISC_INTEN_WERR_Msk                  (_U_(0x1) << ISC_INTEN_WERR_Pos)               /**< (ISC_INTEN) Write Channel Error Interrupt Enable Mask */
#define ISC_INTEN_WERR                      ISC_INTEN_WERR_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTEN_WERR_Msk instead */
#define ISC_INTEN_RERR_Pos                  20                                             /**< (ISC_INTEN) Read Channel Error Interrupt Enable Position */
#define ISC_INTEN_RERR_Msk                  (_U_(0x1) << ISC_INTEN_RERR_Pos)               /**< (ISC_INTEN) Read Channel Error Interrupt Enable Mask */
#define ISC_INTEN_RERR                      ISC_INTEN_RERR_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTEN_RERR_Msk instead */
#define ISC_INTEN_VFPOV_Pos                 24                                             /**< (ISC_INTEN) Vertical Front Porch Overflow Interrupt Enable Position */
#define ISC_INTEN_VFPOV_Msk                 (_U_(0x1) << ISC_INTEN_VFPOV_Pos)              /**< (ISC_INTEN) Vertical Front Porch Overflow Interrupt Enable Mask */
#define ISC_INTEN_VFPOV                     ISC_INTEN_VFPOV_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTEN_VFPOV_Msk instead */
#define ISC_INTEN_DAOV_Pos                  25                                             /**< (ISC_INTEN) Data Overflow Interrupt Enable Position */
#define ISC_INTEN_DAOV_Msk                  (_U_(0x1) << ISC_INTEN_DAOV_Pos)               /**< (ISC_INTEN) Data Overflow Interrupt Enable Mask */
#define ISC_INTEN_DAOV                      ISC_INTEN_DAOV_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTEN_DAOV_Msk instead */
#define ISC_INTEN_VDTO_Pos                  26                                             /**< (ISC_INTEN) Vertical Synchronization Timeout Interrupt Enable Position */
#define ISC_INTEN_VDTO_Msk                  (_U_(0x1) << ISC_INTEN_VDTO_Pos)               /**< (ISC_INTEN) Vertical Synchronization Timeout Interrupt Enable Mask */
#define ISC_INTEN_VDTO                      ISC_INTEN_VDTO_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTEN_VDTO_Msk instead */
#define ISC_INTEN_HDTO_Pos                  27                                             /**< (ISC_INTEN) Horizontal Synchronization Timeout Interrupt Enable Position */
#define ISC_INTEN_HDTO_Msk                  (_U_(0x1) << ISC_INTEN_HDTO_Pos)               /**< (ISC_INTEN) Horizontal Synchronization Timeout Interrupt Enable Mask */
#define ISC_INTEN_HDTO                      ISC_INTEN_HDTO_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTEN_HDTO_Msk instead */
#define ISC_INTEN_CCIRERR_Pos               28                                             /**< (ISC_INTEN) CCIR Decoder Error Interrupt Enable Position */
#define ISC_INTEN_CCIRERR_Msk               (_U_(0x1) << ISC_INTEN_CCIRERR_Pos)            /**< (ISC_INTEN) CCIR Decoder Error Interrupt Enable Mask */
#define ISC_INTEN_CCIRERR                   ISC_INTEN_CCIRERR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTEN_CCIRERR_Msk instead */
#define ISC_INTEN_MASK                      _U_(0x1F113333)                                /**< \deprecated (ISC_INTEN) Register MASK  (Use ISC_INTEN_Msk instead)  */
#define ISC_INTEN_Msk                       _U_(0x1F113333)                                /**< (ISC_INTEN) Register Mask  */


/* -------- ISC_INTDIS : (ISC Offset: 0x2c) (/W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t VD:1;                      /**< bit:      0  Vertical Synchronization Detection Interrupt Disable */
    uint32_t HD:1;                      /**< bit:      1  Horizontal Synchronization Detection Interrupt Disable */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t SWRST:1;                   /**< bit:      4  Software Reset Completed Interrupt Disable */
    uint32_t DIS:1;                     /**< bit:      5  Disable Completed Interrupt Disable      */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t DDONE:1;                   /**< bit:      8  DMA Done Interrupt Disable               */
    uint32_t LDONE:1;                   /**< bit:      9  DMA List Done Interrupt Disable          */
    uint32_t :2;                        /**< bit: 10..11  Reserved */
    uint32_t HISDONE:1;                 /**< bit:     12  Histogram Completed Interrupt Disable    */
    uint32_t HISCLR:1;                  /**< bit:     13  Histogram Clear Interrupt Disable        */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t WERR:1;                    /**< bit:     16  Write Channel Error Interrupt Disable    */
    uint32_t :3;                        /**< bit: 17..19  Reserved */
    uint32_t RERR:1;                    /**< bit:     20  Read Channel Error Interrupt Disable     */
    uint32_t :3;                        /**< bit: 21..23  Reserved */
    uint32_t VFPOV:1;                   /**< bit:     24  Vertical Front Porch Overflow Interrupt Disable */
    uint32_t DAOV:1;                    /**< bit:     25  Data Overflow Interrupt Disable          */
    uint32_t VDTO:1;                    /**< bit:     26  Vertical Synchronization Timeout Interrupt Disable */
    uint32_t HDTO:1;                    /**< bit:     27  Horizontal Synchronization Timeout Interrupt Disable */
    uint32_t CCIRERR:1;                 /**< bit:     28  CCIR Decoder Error Interrupt Disable     */
    uint32_t :3;                        /**< bit: 29..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_INTDIS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_INTDIS_OFFSET                   (0x2C)                                        /**<  (ISC_INTDIS) Interrupt Disable Register  Offset */

#define ISC_INTDIS_VD_Pos                   0                                              /**< (ISC_INTDIS) Vertical Synchronization Detection Interrupt Disable Position */
#define ISC_INTDIS_VD_Msk                   (_U_(0x1) << ISC_INTDIS_VD_Pos)                /**< (ISC_INTDIS) Vertical Synchronization Detection Interrupt Disable Mask */
#define ISC_INTDIS_VD                       ISC_INTDIS_VD_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTDIS_VD_Msk instead */
#define ISC_INTDIS_HD_Pos                   1                                              /**< (ISC_INTDIS) Horizontal Synchronization Detection Interrupt Disable Position */
#define ISC_INTDIS_HD_Msk                   (_U_(0x1) << ISC_INTDIS_HD_Pos)                /**< (ISC_INTDIS) Horizontal Synchronization Detection Interrupt Disable Mask */
#define ISC_INTDIS_HD                       ISC_INTDIS_HD_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTDIS_HD_Msk instead */
#define ISC_INTDIS_SWRST_Pos                4                                              /**< (ISC_INTDIS) Software Reset Completed Interrupt Disable Position */
#define ISC_INTDIS_SWRST_Msk                (_U_(0x1) << ISC_INTDIS_SWRST_Pos)             /**< (ISC_INTDIS) Software Reset Completed Interrupt Disable Mask */
#define ISC_INTDIS_SWRST                    ISC_INTDIS_SWRST_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTDIS_SWRST_Msk instead */
#define ISC_INTDIS_DIS_Pos                  5                                              /**< (ISC_INTDIS) Disable Completed Interrupt Disable Position */
#define ISC_INTDIS_DIS_Msk                  (_U_(0x1) << ISC_INTDIS_DIS_Pos)               /**< (ISC_INTDIS) Disable Completed Interrupt Disable Mask */
#define ISC_INTDIS_DIS                      ISC_INTDIS_DIS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTDIS_DIS_Msk instead */
#define ISC_INTDIS_DDONE_Pos                8                                              /**< (ISC_INTDIS) DMA Done Interrupt Disable Position */
#define ISC_INTDIS_DDONE_Msk                (_U_(0x1) << ISC_INTDIS_DDONE_Pos)             /**< (ISC_INTDIS) DMA Done Interrupt Disable Mask */
#define ISC_INTDIS_DDONE                    ISC_INTDIS_DDONE_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTDIS_DDONE_Msk instead */
#define ISC_INTDIS_LDONE_Pos                9                                              /**< (ISC_INTDIS) DMA List Done Interrupt Disable Position */
#define ISC_INTDIS_LDONE_Msk                (_U_(0x1) << ISC_INTDIS_LDONE_Pos)             /**< (ISC_INTDIS) DMA List Done Interrupt Disable Mask */
#define ISC_INTDIS_LDONE                    ISC_INTDIS_LDONE_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTDIS_LDONE_Msk instead */
#define ISC_INTDIS_HISDONE_Pos              12                                             /**< (ISC_INTDIS) Histogram Completed Interrupt Disable Position */
#define ISC_INTDIS_HISDONE_Msk              (_U_(0x1) << ISC_INTDIS_HISDONE_Pos)           /**< (ISC_INTDIS) Histogram Completed Interrupt Disable Mask */
#define ISC_INTDIS_HISDONE                  ISC_INTDIS_HISDONE_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTDIS_HISDONE_Msk instead */
#define ISC_INTDIS_HISCLR_Pos               13                                             /**< (ISC_INTDIS) Histogram Clear Interrupt Disable Position */
#define ISC_INTDIS_HISCLR_Msk               (_U_(0x1) << ISC_INTDIS_HISCLR_Pos)            /**< (ISC_INTDIS) Histogram Clear Interrupt Disable Mask */
#define ISC_INTDIS_HISCLR                   ISC_INTDIS_HISCLR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTDIS_HISCLR_Msk instead */
#define ISC_INTDIS_WERR_Pos                 16                                             /**< (ISC_INTDIS) Write Channel Error Interrupt Disable Position */
#define ISC_INTDIS_WERR_Msk                 (_U_(0x1) << ISC_INTDIS_WERR_Pos)              /**< (ISC_INTDIS) Write Channel Error Interrupt Disable Mask */
#define ISC_INTDIS_WERR                     ISC_INTDIS_WERR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTDIS_WERR_Msk instead */
#define ISC_INTDIS_RERR_Pos                 20                                             /**< (ISC_INTDIS) Read Channel Error Interrupt Disable Position */
#define ISC_INTDIS_RERR_Msk                 (_U_(0x1) << ISC_INTDIS_RERR_Pos)              /**< (ISC_INTDIS) Read Channel Error Interrupt Disable Mask */
#define ISC_INTDIS_RERR                     ISC_INTDIS_RERR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTDIS_RERR_Msk instead */
#define ISC_INTDIS_VFPOV_Pos                24                                             /**< (ISC_INTDIS) Vertical Front Porch Overflow Interrupt Disable Position */
#define ISC_INTDIS_VFPOV_Msk                (_U_(0x1) << ISC_INTDIS_VFPOV_Pos)             /**< (ISC_INTDIS) Vertical Front Porch Overflow Interrupt Disable Mask */
#define ISC_INTDIS_VFPOV                    ISC_INTDIS_VFPOV_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTDIS_VFPOV_Msk instead */
#define ISC_INTDIS_DAOV_Pos                 25                                             /**< (ISC_INTDIS) Data Overflow Interrupt Disable Position */
#define ISC_INTDIS_DAOV_Msk                 (_U_(0x1) << ISC_INTDIS_DAOV_Pos)              /**< (ISC_INTDIS) Data Overflow Interrupt Disable Mask */
#define ISC_INTDIS_DAOV                     ISC_INTDIS_DAOV_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTDIS_DAOV_Msk instead */
#define ISC_INTDIS_VDTO_Pos                 26                                             /**< (ISC_INTDIS) Vertical Synchronization Timeout Interrupt Disable Position */
#define ISC_INTDIS_VDTO_Msk                 (_U_(0x1) << ISC_INTDIS_VDTO_Pos)              /**< (ISC_INTDIS) Vertical Synchronization Timeout Interrupt Disable Mask */
#define ISC_INTDIS_VDTO                     ISC_INTDIS_VDTO_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTDIS_VDTO_Msk instead */
#define ISC_INTDIS_HDTO_Pos                 27                                             /**< (ISC_INTDIS) Horizontal Synchronization Timeout Interrupt Disable Position */
#define ISC_INTDIS_HDTO_Msk                 (_U_(0x1) << ISC_INTDIS_HDTO_Pos)              /**< (ISC_INTDIS) Horizontal Synchronization Timeout Interrupt Disable Mask */
#define ISC_INTDIS_HDTO                     ISC_INTDIS_HDTO_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTDIS_HDTO_Msk instead */
#define ISC_INTDIS_CCIRERR_Pos              28                                             /**< (ISC_INTDIS) CCIR Decoder Error Interrupt Disable Position */
#define ISC_INTDIS_CCIRERR_Msk              (_U_(0x1) << ISC_INTDIS_CCIRERR_Pos)           /**< (ISC_INTDIS) CCIR Decoder Error Interrupt Disable Mask */
#define ISC_INTDIS_CCIRERR                  ISC_INTDIS_CCIRERR_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTDIS_CCIRERR_Msk instead */
#define ISC_INTDIS_MASK                     _U_(0x1F113333)                                /**< \deprecated (ISC_INTDIS) Register MASK  (Use ISC_INTDIS_Msk instead)  */
#define ISC_INTDIS_Msk                      _U_(0x1F113333)                                /**< (ISC_INTDIS) Register Mask  */


/* -------- ISC_INTMASK : (ISC Offset: 0x30) (R/ 32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t VD:1;                      /**< bit:      0  Vertical Synchronization Detection Interrupt Mask */
    uint32_t HD:1;                      /**< bit:      1  Horizontal Synchronization Detection Interrupt Mask */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t SWRST:1;                   /**< bit:      4  Software Reset Completed Interrupt Mask  */
    uint32_t DIS:1;                     /**< bit:      5  Disable Completed Interrupt Mask         */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t DDONE:1;                   /**< bit:      8  DMA Done Interrupt Mask                  */
    uint32_t LDONE:1;                   /**< bit:      9  DMA List Done Interrupt Mask             */
    uint32_t :2;                        /**< bit: 10..11  Reserved */
    uint32_t HISDONE:1;                 /**< bit:     12  Histogram Completed Interrupt Mask       */
    uint32_t HISCLR:1;                  /**< bit:     13  Histogram Clear Interrupt Mask           */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t WERR:1;                    /**< bit:     16  Write Channel Error Interrupt Mask       */
    uint32_t :3;                        /**< bit: 17..19  Reserved */
    uint32_t RERR:1;                    /**< bit:     20  Read Channel Error Interrupt Mask        */
    uint32_t :3;                        /**< bit: 21..23  Reserved */
    uint32_t VFPOV:1;                   /**< bit:     24  Vertical Front Porch Overflow Interrupt Mask */
    uint32_t DAOV:1;                    /**< bit:     25  Data Overflow Interrupt Mask             */
    uint32_t VDTO:1;                    /**< bit:     26  Vertical Synchronization Timeout Interrupt Mask */
    uint32_t HDTO:1;                    /**< bit:     27  Horizontal Synchronization Timeout Interrupt Mask */
    uint32_t CCIRERR:1;                 /**< bit:     28  CCIR Decoder Error Interrupt Mask        */
    uint32_t :3;                        /**< bit: 29..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_INTMASK_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_INTMASK_OFFSET                  (0x30)                                        /**<  (ISC_INTMASK) Interrupt Mask Register  Offset */

#define ISC_INTMASK_VD_Pos                  0                                              /**< (ISC_INTMASK) Vertical Synchronization Detection Interrupt Mask Position */
#define ISC_INTMASK_VD_Msk                  (_U_(0x1) << ISC_INTMASK_VD_Pos)               /**< (ISC_INTMASK) Vertical Synchronization Detection Interrupt Mask Mask */
#define ISC_INTMASK_VD                      ISC_INTMASK_VD_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTMASK_VD_Msk instead */
#define ISC_INTMASK_HD_Pos                  1                                              /**< (ISC_INTMASK) Horizontal Synchronization Detection Interrupt Mask Position */
#define ISC_INTMASK_HD_Msk                  (_U_(0x1) << ISC_INTMASK_HD_Pos)               /**< (ISC_INTMASK) Horizontal Synchronization Detection Interrupt Mask Mask */
#define ISC_INTMASK_HD                      ISC_INTMASK_HD_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTMASK_HD_Msk instead */
#define ISC_INTMASK_SWRST_Pos               4                                              /**< (ISC_INTMASK) Software Reset Completed Interrupt Mask Position */
#define ISC_INTMASK_SWRST_Msk               (_U_(0x1) << ISC_INTMASK_SWRST_Pos)            /**< (ISC_INTMASK) Software Reset Completed Interrupt Mask Mask */
#define ISC_INTMASK_SWRST                   ISC_INTMASK_SWRST_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTMASK_SWRST_Msk instead */
#define ISC_INTMASK_DIS_Pos                 5                                              /**< (ISC_INTMASK) Disable Completed Interrupt Mask Position */
#define ISC_INTMASK_DIS_Msk                 (_U_(0x1) << ISC_INTMASK_DIS_Pos)              /**< (ISC_INTMASK) Disable Completed Interrupt Mask Mask */
#define ISC_INTMASK_DIS                     ISC_INTMASK_DIS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTMASK_DIS_Msk instead */
#define ISC_INTMASK_DDONE_Pos               8                                              /**< (ISC_INTMASK) DMA Done Interrupt Mask Position */
#define ISC_INTMASK_DDONE_Msk               (_U_(0x1) << ISC_INTMASK_DDONE_Pos)            /**< (ISC_INTMASK) DMA Done Interrupt Mask Mask */
#define ISC_INTMASK_DDONE                   ISC_INTMASK_DDONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTMASK_DDONE_Msk instead */
#define ISC_INTMASK_LDONE_Pos               9                                              /**< (ISC_INTMASK) DMA List Done Interrupt Mask Position */
#define ISC_INTMASK_LDONE_Msk               (_U_(0x1) << ISC_INTMASK_LDONE_Pos)            /**< (ISC_INTMASK) DMA List Done Interrupt Mask Mask */
#define ISC_INTMASK_LDONE                   ISC_INTMASK_LDONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTMASK_LDONE_Msk instead */
#define ISC_INTMASK_HISDONE_Pos             12                                             /**< (ISC_INTMASK) Histogram Completed Interrupt Mask Position */
#define ISC_INTMASK_HISDONE_Msk             (_U_(0x1) << ISC_INTMASK_HISDONE_Pos)          /**< (ISC_INTMASK) Histogram Completed Interrupt Mask Mask */
#define ISC_INTMASK_HISDONE                 ISC_INTMASK_HISDONE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTMASK_HISDONE_Msk instead */
#define ISC_INTMASK_HISCLR_Pos              13                                             /**< (ISC_INTMASK) Histogram Clear Interrupt Mask Position */
#define ISC_INTMASK_HISCLR_Msk              (_U_(0x1) << ISC_INTMASK_HISCLR_Pos)           /**< (ISC_INTMASK) Histogram Clear Interrupt Mask Mask */
#define ISC_INTMASK_HISCLR                  ISC_INTMASK_HISCLR_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTMASK_HISCLR_Msk instead */
#define ISC_INTMASK_WERR_Pos                16                                             /**< (ISC_INTMASK) Write Channel Error Interrupt Mask Position */
#define ISC_INTMASK_WERR_Msk                (_U_(0x1) << ISC_INTMASK_WERR_Pos)             /**< (ISC_INTMASK) Write Channel Error Interrupt Mask Mask */
#define ISC_INTMASK_WERR                    ISC_INTMASK_WERR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTMASK_WERR_Msk instead */
#define ISC_INTMASK_RERR_Pos                20                                             /**< (ISC_INTMASK) Read Channel Error Interrupt Mask Position */
#define ISC_INTMASK_RERR_Msk                (_U_(0x1) << ISC_INTMASK_RERR_Pos)             /**< (ISC_INTMASK) Read Channel Error Interrupt Mask Mask */
#define ISC_INTMASK_RERR                    ISC_INTMASK_RERR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTMASK_RERR_Msk instead */
#define ISC_INTMASK_VFPOV_Pos               24                                             /**< (ISC_INTMASK) Vertical Front Porch Overflow Interrupt Mask Position */
#define ISC_INTMASK_VFPOV_Msk               (_U_(0x1) << ISC_INTMASK_VFPOV_Pos)            /**< (ISC_INTMASK) Vertical Front Porch Overflow Interrupt Mask Mask */
#define ISC_INTMASK_VFPOV                   ISC_INTMASK_VFPOV_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTMASK_VFPOV_Msk instead */
#define ISC_INTMASK_DAOV_Pos                25                                             /**< (ISC_INTMASK) Data Overflow Interrupt Mask Position */
#define ISC_INTMASK_DAOV_Msk                (_U_(0x1) << ISC_INTMASK_DAOV_Pos)             /**< (ISC_INTMASK) Data Overflow Interrupt Mask Mask */
#define ISC_INTMASK_DAOV                    ISC_INTMASK_DAOV_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTMASK_DAOV_Msk instead */
#define ISC_INTMASK_VDTO_Pos                26                                             /**< (ISC_INTMASK) Vertical Synchronization Timeout Interrupt Mask Position */
#define ISC_INTMASK_VDTO_Msk                (_U_(0x1) << ISC_INTMASK_VDTO_Pos)             /**< (ISC_INTMASK) Vertical Synchronization Timeout Interrupt Mask Mask */
#define ISC_INTMASK_VDTO                    ISC_INTMASK_VDTO_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTMASK_VDTO_Msk instead */
#define ISC_INTMASK_HDTO_Pos                27                                             /**< (ISC_INTMASK) Horizontal Synchronization Timeout Interrupt Mask Position */
#define ISC_INTMASK_HDTO_Msk                (_U_(0x1) << ISC_INTMASK_HDTO_Pos)             /**< (ISC_INTMASK) Horizontal Synchronization Timeout Interrupt Mask Mask */
#define ISC_INTMASK_HDTO                    ISC_INTMASK_HDTO_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTMASK_HDTO_Msk instead */
#define ISC_INTMASK_CCIRERR_Pos             28                                             /**< (ISC_INTMASK) CCIR Decoder Error Interrupt Mask Position */
#define ISC_INTMASK_CCIRERR_Msk             (_U_(0x1) << ISC_INTMASK_CCIRERR_Pos)          /**< (ISC_INTMASK) CCIR Decoder Error Interrupt Mask Mask */
#define ISC_INTMASK_CCIRERR                 ISC_INTMASK_CCIRERR_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTMASK_CCIRERR_Msk instead */
#define ISC_INTMASK_MASK                    _U_(0x1F113333)                                /**< \deprecated (ISC_INTMASK) Register MASK  (Use ISC_INTMASK_Msk instead)  */
#define ISC_INTMASK_Msk                     _U_(0x1F113333)                                /**< (ISC_INTMASK) Register Mask  */


/* -------- ISC_INTSR : (ISC Offset: 0x34) (R/ 32) Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t VD:1;                      /**< bit:      0  Vertical Synchronization Detected Interrupt */
    uint32_t HD:1;                      /**< bit:      1  Horizontal Synchronization Detected Interrupt */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t SWRST:1;                   /**< bit:      4  Software Reset Completed Interrupt       */
    uint32_t DIS:1;                     /**< bit:      5  Disable Completed Interrupt              */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t DDONE:1;                   /**< bit:      8  DMA Done Interrupt                       */
    uint32_t LDONE:1;                   /**< bit:      9  DMA List Done Interrupt                  */
    uint32_t :2;                        /**< bit: 10..11  Reserved */
    uint32_t HISDONE:1;                 /**< bit:     12  Histogram Completed Interrupt            */
    uint32_t HISCLR:1;                  /**< bit:     13  Histogram Clear Interrupt                */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t WERR:1;                    /**< bit:     16  Write Channel Error Interrupt            */
    uint32_t WERRID:2;                  /**< bit: 17..18  Write Channel Error Identifier           */
    uint32_t :1;                        /**< bit:     19  Reserved */
    uint32_t RERR:1;                    /**< bit:     20  Read Channel Error Interrupt             */
    uint32_t :3;                        /**< bit: 21..23  Reserved */
    uint32_t VFPOV:1;                   /**< bit:     24  Vertical Front Porch Overflow Interrupt  */
    uint32_t DAOV:1;                    /**< bit:     25  Data Overflow Interrupt                  */
    uint32_t VDTO:1;                    /**< bit:     26  Vertical Synchronization Timeout Interrupt */
    uint32_t HDTO:1;                    /**< bit:     27  Horizontal Synchronization Timeout Interrupt */
    uint32_t CCIRERR:1;                 /**< bit:     28  CCIR Decoder Error Interrupt             */
    uint32_t :3;                        /**< bit: 29..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_INTSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_INTSR_OFFSET                    (0x34)                                        /**<  (ISC_INTSR) Interrupt Status Register  Offset */

#define ISC_INTSR_VD_Pos                    0                                              /**< (ISC_INTSR) Vertical Synchronization Detected Interrupt Position */
#define ISC_INTSR_VD_Msk                    (_U_(0x1) << ISC_INTSR_VD_Pos)                 /**< (ISC_INTSR) Vertical Synchronization Detected Interrupt Mask */
#define ISC_INTSR_VD                        ISC_INTSR_VD_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTSR_VD_Msk instead */
#define ISC_INTSR_HD_Pos                    1                                              /**< (ISC_INTSR) Horizontal Synchronization Detected Interrupt Position */
#define ISC_INTSR_HD_Msk                    (_U_(0x1) << ISC_INTSR_HD_Pos)                 /**< (ISC_INTSR) Horizontal Synchronization Detected Interrupt Mask */
#define ISC_INTSR_HD                        ISC_INTSR_HD_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTSR_HD_Msk instead */
#define ISC_INTSR_SWRST_Pos                 4                                              /**< (ISC_INTSR) Software Reset Completed Interrupt Position */
#define ISC_INTSR_SWRST_Msk                 (_U_(0x1) << ISC_INTSR_SWRST_Pos)              /**< (ISC_INTSR) Software Reset Completed Interrupt Mask */
#define ISC_INTSR_SWRST                     ISC_INTSR_SWRST_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTSR_SWRST_Msk instead */
#define ISC_INTSR_DIS_Pos                   5                                              /**< (ISC_INTSR) Disable Completed Interrupt Position */
#define ISC_INTSR_DIS_Msk                   (_U_(0x1) << ISC_INTSR_DIS_Pos)                /**< (ISC_INTSR) Disable Completed Interrupt Mask */
#define ISC_INTSR_DIS                       ISC_INTSR_DIS_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTSR_DIS_Msk instead */
#define ISC_INTSR_DDONE_Pos                 8                                              /**< (ISC_INTSR) DMA Done Interrupt Position */
#define ISC_INTSR_DDONE_Msk                 (_U_(0x1) << ISC_INTSR_DDONE_Pos)              /**< (ISC_INTSR) DMA Done Interrupt Mask */
#define ISC_INTSR_DDONE                     ISC_INTSR_DDONE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTSR_DDONE_Msk instead */
#define ISC_INTSR_LDONE_Pos                 9                                              /**< (ISC_INTSR) DMA List Done Interrupt Position */
#define ISC_INTSR_LDONE_Msk                 (_U_(0x1) << ISC_INTSR_LDONE_Pos)              /**< (ISC_INTSR) DMA List Done Interrupt Mask */
#define ISC_INTSR_LDONE                     ISC_INTSR_LDONE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTSR_LDONE_Msk instead */
#define ISC_INTSR_HISDONE_Pos               12                                             /**< (ISC_INTSR) Histogram Completed Interrupt Position */
#define ISC_INTSR_HISDONE_Msk               (_U_(0x1) << ISC_INTSR_HISDONE_Pos)            /**< (ISC_INTSR) Histogram Completed Interrupt Mask */
#define ISC_INTSR_HISDONE                   ISC_INTSR_HISDONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTSR_HISDONE_Msk instead */
#define ISC_INTSR_HISCLR_Pos                13                                             /**< (ISC_INTSR) Histogram Clear Interrupt Position */
#define ISC_INTSR_HISCLR_Msk                (_U_(0x1) << ISC_INTSR_HISCLR_Pos)             /**< (ISC_INTSR) Histogram Clear Interrupt Mask */
#define ISC_INTSR_HISCLR                    ISC_INTSR_HISCLR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTSR_HISCLR_Msk instead */
#define ISC_INTSR_WERR_Pos                  16                                             /**< (ISC_INTSR) Write Channel Error Interrupt Position */
#define ISC_INTSR_WERR_Msk                  (_U_(0x1) << ISC_INTSR_WERR_Pos)               /**< (ISC_INTSR) Write Channel Error Interrupt Mask */
#define ISC_INTSR_WERR                      ISC_INTSR_WERR_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTSR_WERR_Msk instead */
#define ISC_INTSR_WERRID_Pos                17                                             /**< (ISC_INTSR) Write Channel Error Identifier Position */
#define ISC_INTSR_WERRID_Msk                (_U_(0x3) << ISC_INTSR_WERRID_Pos)             /**< (ISC_INTSR) Write Channel Error Identifier Mask */
#define ISC_INTSR_WERRID(value)             (ISC_INTSR_WERRID_Msk & ((value) << ISC_INTSR_WERRID_Pos))
#define   ISC_INTSR_WERRID_CH0_Val          _U_(0x0)                                       /**< (ISC_INTSR) An error occurred for Channel 0 (RAW/RGB/Y)  */
#define   ISC_INTSR_WERRID_CH1_Val          _U_(0x1)                                       /**< (ISC_INTSR) An error occurred for Channel 1 (CbCr/Cb)  */
#define   ISC_INTSR_WERRID_CH2_Val          _U_(0x2)                                       /**< (ISC_INTSR) An error occurred for Channel 2 (Cr)  */
#define   ISC_INTSR_WERRID_WB_Val           _U_(0x3)                                       /**< (ISC_INTSR) Write back channel error  */
#define ISC_INTSR_WERRID_CH0                (ISC_INTSR_WERRID_CH0_Val << ISC_INTSR_WERRID_Pos)  /**< (ISC_INTSR) An error occurred for Channel 0 (RAW/RGB/Y) Position  */
#define ISC_INTSR_WERRID_CH1                (ISC_INTSR_WERRID_CH1_Val << ISC_INTSR_WERRID_Pos)  /**< (ISC_INTSR) An error occurred for Channel 1 (CbCr/Cb) Position  */
#define ISC_INTSR_WERRID_CH2                (ISC_INTSR_WERRID_CH2_Val << ISC_INTSR_WERRID_Pos)  /**< (ISC_INTSR) An error occurred for Channel 2 (Cr) Position  */
#define ISC_INTSR_WERRID_WB                 (ISC_INTSR_WERRID_WB_Val << ISC_INTSR_WERRID_Pos)  /**< (ISC_INTSR) Write back channel error Position  */
#define ISC_INTSR_RERR_Pos                  20                                             /**< (ISC_INTSR) Read Channel Error Interrupt Position */
#define ISC_INTSR_RERR_Msk                  (_U_(0x1) << ISC_INTSR_RERR_Pos)               /**< (ISC_INTSR) Read Channel Error Interrupt Mask */
#define ISC_INTSR_RERR                      ISC_INTSR_RERR_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTSR_RERR_Msk instead */
#define ISC_INTSR_VFPOV_Pos                 24                                             /**< (ISC_INTSR) Vertical Front Porch Overflow Interrupt Position */
#define ISC_INTSR_VFPOV_Msk                 (_U_(0x1) << ISC_INTSR_VFPOV_Pos)              /**< (ISC_INTSR) Vertical Front Porch Overflow Interrupt Mask */
#define ISC_INTSR_VFPOV                     ISC_INTSR_VFPOV_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTSR_VFPOV_Msk instead */
#define ISC_INTSR_DAOV_Pos                  25                                             /**< (ISC_INTSR) Data Overflow Interrupt Position */
#define ISC_INTSR_DAOV_Msk                  (_U_(0x1) << ISC_INTSR_DAOV_Pos)               /**< (ISC_INTSR) Data Overflow Interrupt Mask */
#define ISC_INTSR_DAOV                      ISC_INTSR_DAOV_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTSR_DAOV_Msk instead */
#define ISC_INTSR_VDTO_Pos                  26                                             /**< (ISC_INTSR) Vertical Synchronization Timeout Interrupt Position */
#define ISC_INTSR_VDTO_Msk                  (_U_(0x1) << ISC_INTSR_VDTO_Pos)               /**< (ISC_INTSR) Vertical Synchronization Timeout Interrupt Mask */
#define ISC_INTSR_VDTO                      ISC_INTSR_VDTO_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTSR_VDTO_Msk instead */
#define ISC_INTSR_HDTO_Pos                  27                                             /**< (ISC_INTSR) Horizontal Synchronization Timeout Interrupt Position */
#define ISC_INTSR_HDTO_Msk                  (_U_(0x1) << ISC_INTSR_HDTO_Pos)               /**< (ISC_INTSR) Horizontal Synchronization Timeout Interrupt Mask */
#define ISC_INTSR_HDTO                      ISC_INTSR_HDTO_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTSR_HDTO_Msk instead */
#define ISC_INTSR_CCIRERR_Pos               28                                             /**< (ISC_INTSR) CCIR Decoder Error Interrupt Position */
#define ISC_INTSR_CCIRERR_Msk               (_U_(0x1) << ISC_INTSR_CCIRERR_Pos)            /**< (ISC_INTSR) CCIR Decoder Error Interrupt Mask */
#define ISC_INTSR_CCIRERR                   ISC_INTSR_CCIRERR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_INTSR_CCIRERR_Msk instead */
#define ISC_INTSR_MASK                      _U_(0x1F173333)                                /**< \deprecated (ISC_INTSR) Register MASK  (Use ISC_INTSR_Msk instead)  */
#define ISC_INTSR_Msk                       _U_(0x1F173333)                                /**< (ISC_INTSR) Register Mask  */


/* -------- ISC_WB_CTRL : (ISC Offset: 0x58) (R/W 32) White Balance Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ENABLE:1;                  /**< bit:      0  White Balance Enable                     */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_WB_CTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_WB_CTRL_OFFSET                  (0x58)                                        /**<  (ISC_WB_CTRL) White Balance Control Register  Offset */

#define ISC_WB_CTRL_ENABLE_Pos              0                                              /**< (ISC_WB_CTRL) White Balance Enable Position */
#define ISC_WB_CTRL_ENABLE_Msk              (_U_(0x1) << ISC_WB_CTRL_ENABLE_Pos)           /**< (ISC_WB_CTRL) White Balance Enable Mask */
#define ISC_WB_CTRL_ENABLE                  ISC_WB_CTRL_ENABLE_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_WB_CTRL_ENABLE_Msk instead */
#define ISC_WB_CTRL_MASK                    _U_(0x01)                                      /**< \deprecated (ISC_WB_CTRL) Register MASK  (Use ISC_WB_CTRL_Msk instead)  */
#define ISC_WB_CTRL_Msk                     _U_(0x01)                                      /**< (ISC_WB_CTRL) Register Mask  */


/* -------- ISC_WB_CFG : (ISC Offset: 0x5c) (R/W 32) White Balance Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BAYCFG:2;                  /**< bit:   0..1  White Balance Bayer Configuration (Pixel Color Pattern) */
    uint32_t :30;                       /**< bit:  2..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_WB_CFG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_WB_CFG_OFFSET                   (0x5C)                                        /**<  (ISC_WB_CFG) White Balance Configuration Register  Offset */

#define ISC_WB_CFG_BAYCFG_Pos               0                                              /**< (ISC_WB_CFG) White Balance Bayer Configuration (Pixel Color Pattern) Position */
#define ISC_WB_CFG_BAYCFG_Msk               (_U_(0x3) << ISC_WB_CFG_BAYCFG_Pos)            /**< (ISC_WB_CFG) White Balance Bayer Configuration (Pixel Color Pattern) Mask */
#define ISC_WB_CFG_BAYCFG(value)            (ISC_WB_CFG_BAYCFG_Msk & ((value) << ISC_WB_CFG_BAYCFG_Pos))
#define   ISC_WB_CFG_BAYCFG_GRGR_Val        _U_(0x0)                                       /**< (ISC_WB_CFG) Starting Row configuration is G R G R (Red Row)  */
#define   ISC_WB_CFG_BAYCFG_RGRG_Val        _U_(0x1)                                       /**< (ISC_WB_CFG) Starting Row configuration is R G R G (Red Row)  */
#define   ISC_WB_CFG_BAYCFG_GBGB_Val        _U_(0x2)                                       /**< (ISC_WB_CFG) Starting Row configuration is G B G B (Blue Row)  */
#define   ISC_WB_CFG_BAYCFG_BGBG_Val        _U_(0x3)                                       /**< (ISC_WB_CFG) Starting Row configuration is B G B G (Blue Row)  */
#define ISC_WB_CFG_BAYCFG_GRGR              (ISC_WB_CFG_BAYCFG_GRGR_Val << ISC_WB_CFG_BAYCFG_Pos)  /**< (ISC_WB_CFG) Starting Row configuration is G R G R (Red Row) Position  */
#define ISC_WB_CFG_BAYCFG_RGRG              (ISC_WB_CFG_BAYCFG_RGRG_Val << ISC_WB_CFG_BAYCFG_Pos)  /**< (ISC_WB_CFG) Starting Row configuration is R G R G (Red Row) Position  */
#define ISC_WB_CFG_BAYCFG_GBGB              (ISC_WB_CFG_BAYCFG_GBGB_Val << ISC_WB_CFG_BAYCFG_Pos)  /**< (ISC_WB_CFG) Starting Row configuration is G B G B (Blue Row) Position  */
#define ISC_WB_CFG_BAYCFG_BGBG              (ISC_WB_CFG_BAYCFG_BGBG_Val << ISC_WB_CFG_BAYCFG_Pos)  /**< (ISC_WB_CFG) Starting Row configuration is B G B G (Blue Row) Position  */
#define ISC_WB_CFG_MASK                     _U_(0x03)                                      /**< \deprecated (ISC_WB_CFG) Register MASK  (Use ISC_WB_CFG_Msk instead)  */
#define ISC_WB_CFG_Msk                      _U_(0x03)                                      /**< (ISC_WB_CFG) Register Mask  */


/* -------- ISC_WB_O_RGR : (ISC Offset: 0x60) (R/W 32) White Balance Offset for R, GR Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ROFST:13;                  /**< bit:  0..12  Offset Red Component (signed 13 bits 1:12:0) */
    uint32_t :3;                        /**< bit: 13..15  Reserved */
    uint32_t GROFST:13;                 /**< bit: 16..28  Offset Green Component for Red Row (signed 13 bits 1:12:0) */
    uint32_t :3;                        /**< bit: 29..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_WB_O_RGR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_WB_O_RGR_OFFSET                 (0x60)                                        /**<  (ISC_WB_O_RGR) White Balance Offset for R, GR Register  Offset */

#define ISC_WB_O_RGR_ROFST_Pos              0                                              /**< (ISC_WB_O_RGR) Offset Red Component (signed 13 bits 1:12:0) Position */
#define ISC_WB_O_RGR_ROFST_Msk              (_U_(0x1FFF) << ISC_WB_O_RGR_ROFST_Pos)        /**< (ISC_WB_O_RGR) Offset Red Component (signed 13 bits 1:12:0) Mask */
#define ISC_WB_O_RGR_ROFST(value)           (ISC_WB_O_RGR_ROFST_Msk & ((value) << ISC_WB_O_RGR_ROFST_Pos))
#define ISC_WB_O_RGR_GROFST_Pos             16                                             /**< (ISC_WB_O_RGR) Offset Green Component for Red Row (signed 13 bits 1:12:0) Position */
#define ISC_WB_O_RGR_GROFST_Msk             (_U_(0x1FFF) << ISC_WB_O_RGR_GROFST_Pos)       /**< (ISC_WB_O_RGR) Offset Green Component for Red Row (signed 13 bits 1:12:0) Mask */
#define ISC_WB_O_RGR_GROFST(value)          (ISC_WB_O_RGR_GROFST_Msk & ((value) << ISC_WB_O_RGR_GROFST_Pos))
#define ISC_WB_O_RGR_MASK                   _U_(0x1FFF1FFF)                                /**< \deprecated (ISC_WB_O_RGR) Register MASK  (Use ISC_WB_O_RGR_Msk instead)  */
#define ISC_WB_O_RGR_Msk                    _U_(0x1FFF1FFF)                                /**< (ISC_WB_O_RGR) Register Mask  */


/* -------- ISC_WB_O_BGB : (ISC Offset: 0x64) (R/W 32) White Balance Offset for B, GB Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BOFST:13;                  /**< bit:  0..12  Offset Blue Component (signed 13 bits, 1:12:0) */
    uint32_t :3;                        /**< bit: 13..15  Reserved */
    uint32_t GBOFST:13;                 /**< bit: 16..28  Offset Green Component for Blue Row (signed 13 bits, 1:12:0) */
    uint32_t :3;                        /**< bit: 29..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_WB_O_BGB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_WB_O_BGB_OFFSET                 (0x64)                                        /**<  (ISC_WB_O_BGB) White Balance Offset for B, GB Register  Offset */

#define ISC_WB_O_BGB_BOFST_Pos              0                                              /**< (ISC_WB_O_BGB) Offset Blue Component (signed 13 bits, 1:12:0) Position */
#define ISC_WB_O_BGB_BOFST_Msk              (_U_(0x1FFF) << ISC_WB_O_BGB_BOFST_Pos)        /**< (ISC_WB_O_BGB) Offset Blue Component (signed 13 bits, 1:12:0) Mask */
#define ISC_WB_O_BGB_BOFST(value)           (ISC_WB_O_BGB_BOFST_Msk & ((value) << ISC_WB_O_BGB_BOFST_Pos))
#define ISC_WB_O_BGB_GBOFST_Pos             16                                             /**< (ISC_WB_O_BGB) Offset Green Component for Blue Row (signed 13 bits, 1:12:0) Position */
#define ISC_WB_O_BGB_GBOFST_Msk             (_U_(0x1FFF) << ISC_WB_O_BGB_GBOFST_Pos)       /**< (ISC_WB_O_BGB) Offset Green Component for Blue Row (signed 13 bits, 1:12:0) Mask */
#define ISC_WB_O_BGB_GBOFST(value)          (ISC_WB_O_BGB_GBOFST_Msk & ((value) << ISC_WB_O_BGB_GBOFST_Pos))
#define ISC_WB_O_BGB_MASK                   _U_(0x1FFF1FFF)                                /**< \deprecated (ISC_WB_O_BGB) Register MASK  (Use ISC_WB_O_BGB_Msk instead)  */
#define ISC_WB_O_BGB_Msk                    _U_(0x1FFF1FFF)                                /**< (ISC_WB_O_BGB) Register Mask  */


/* -------- ISC_WB_G_RGR : (ISC Offset: 0x68) (R/W 32) White Balance Gain for R, GR Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RGAIN:13;                  /**< bit:  0..12  Red Component Gain (unsigned 13 bits, 0:4:9) */
    uint32_t :3;                        /**< bit: 13..15  Reserved */
    uint32_t GRGAIN:13;                 /**< bit: 16..28  Green Component (Red row) Gain (unsigned 13 bits, 0:4:9) */
    uint32_t :3;                        /**< bit: 29..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_WB_G_RGR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_WB_G_RGR_OFFSET                 (0x68)                                        /**<  (ISC_WB_G_RGR) White Balance Gain for R, GR Register  Offset */

#define ISC_WB_G_RGR_RGAIN_Pos              0                                              /**< (ISC_WB_G_RGR) Red Component Gain (unsigned 13 bits, 0:4:9) Position */
#define ISC_WB_G_RGR_RGAIN_Msk              (_U_(0x1FFF) << ISC_WB_G_RGR_RGAIN_Pos)        /**< (ISC_WB_G_RGR) Red Component Gain (unsigned 13 bits, 0:4:9) Mask */
#define ISC_WB_G_RGR_RGAIN(value)           (ISC_WB_G_RGR_RGAIN_Msk & ((value) << ISC_WB_G_RGR_RGAIN_Pos))
#define ISC_WB_G_RGR_GRGAIN_Pos             16                                             /**< (ISC_WB_G_RGR) Green Component (Red row) Gain (unsigned 13 bits, 0:4:9) Position */
#define ISC_WB_G_RGR_GRGAIN_Msk             (_U_(0x1FFF) << ISC_WB_G_RGR_GRGAIN_Pos)       /**< (ISC_WB_G_RGR) Green Component (Red row) Gain (unsigned 13 bits, 0:4:9) Mask */
#define ISC_WB_G_RGR_GRGAIN(value)          (ISC_WB_G_RGR_GRGAIN_Msk & ((value) << ISC_WB_G_RGR_GRGAIN_Pos))
#define ISC_WB_G_RGR_MASK                   _U_(0x1FFF1FFF)                                /**< \deprecated (ISC_WB_G_RGR) Register MASK  (Use ISC_WB_G_RGR_Msk instead)  */
#define ISC_WB_G_RGR_Msk                    _U_(0x1FFF1FFF)                                /**< (ISC_WB_G_RGR) Register Mask  */


/* -------- ISC_WB_G_BGB : (ISC Offset: 0x6c) (R/W 32) White Balance Gain for B, GB Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BGAIN:13;                  /**< bit:  0..12  Blue Component Gain (unsigned 13 bits, 0:4:9) */
    uint32_t :3;                        /**< bit: 13..15  Reserved */
    uint32_t GBGAIN:13;                 /**< bit: 16..28  Green Component (Blue row) Gain (unsigned 13 bits, 0:4:9) */
    uint32_t :3;                        /**< bit: 29..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_WB_G_BGB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_WB_G_BGB_OFFSET                 (0x6C)                                        /**<  (ISC_WB_G_BGB) White Balance Gain for B, GB Register  Offset */

#define ISC_WB_G_BGB_BGAIN_Pos              0                                              /**< (ISC_WB_G_BGB) Blue Component Gain (unsigned 13 bits, 0:4:9) Position */
#define ISC_WB_G_BGB_BGAIN_Msk              (_U_(0x1FFF) << ISC_WB_G_BGB_BGAIN_Pos)        /**< (ISC_WB_G_BGB) Blue Component Gain (unsigned 13 bits, 0:4:9) Mask */
#define ISC_WB_G_BGB_BGAIN(value)           (ISC_WB_G_BGB_BGAIN_Msk & ((value) << ISC_WB_G_BGB_BGAIN_Pos))
#define ISC_WB_G_BGB_GBGAIN_Pos             16                                             /**< (ISC_WB_G_BGB) Green Component (Blue row) Gain (unsigned 13 bits, 0:4:9) Position */
#define ISC_WB_G_BGB_GBGAIN_Msk             (_U_(0x1FFF) << ISC_WB_G_BGB_GBGAIN_Pos)       /**< (ISC_WB_G_BGB) Green Component (Blue row) Gain (unsigned 13 bits, 0:4:9) Mask */
#define ISC_WB_G_BGB_GBGAIN(value)          (ISC_WB_G_BGB_GBGAIN_Msk & ((value) << ISC_WB_G_BGB_GBGAIN_Pos))
#define ISC_WB_G_BGB_MASK                   _U_(0x1FFF1FFF)                                /**< \deprecated (ISC_WB_G_BGB) Register MASK  (Use ISC_WB_G_BGB_Msk instead)  */
#define ISC_WB_G_BGB_Msk                    _U_(0x1FFF1FFF)                                /**< (ISC_WB_G_BGB) Register Mask  */


/* -------- ISC_CFA_CTRL : (ISC Offset: 0x70) (R/W 32) Color Filter Array Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ENABLE:1;                  /**< bit:      0  Color Filter Array Interpolation Enable  */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CFA_CTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CFA_CTRL_OFFSET                 (0x70)                                        /**<  (ISC_CFA_CTRL) Color Filter Array Control Register  Offset */

#define ISC_CFA_CTRL_ENABLE_Pos             0                                              /**< (ISC_CFA_CTRL) Color Filter Array Interpolation Enable Position */
#define ISC_CFA_CTRL_ENABLE_Msk             (_U_(0x1) << ISC_CFA_CTRL_ENABLE_Pos)          /**< (ISC_CFA_CTRL) Color Filter Array Interpolation Enable Mask */
#define ISC_CFA_CTRL_ENABLE                 ISC_CFA_CTRL_ENABLE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CFA_CTRL_ENABLE_Msk instead */
#define ISC_CFA_CTRL_MASK                   _U_(0x01)                                      /**< \deprecated (ISC_CFA_CTRL) Register MASK  (Use ISC_CFA_CTRL_Msk instead)  */
#define ISC_CFA_CTRL_Msk                    _U_(0x01)                                      /**< (ISC_CFA_CTRL) Register Mask  */


/* -------- ISC_CFA_CFG : (ISC Offset: 0x74) (R/W 32) Color Filter Array Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BAYCFG:2;                  /**< bit:   0..1  Color Filter Array Pattern               */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t EITPOL:1;                  /**< bit:      4  Edge Interpolation                       */
    uint32_t :27;                       /**< bit:  5..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CFA_CFG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CFA_CFG_OFFSET                  (0x74)                                        /**<  (ISC_CFA_CFG) Color Filter Array Configuration Register  Offset */

#define ISC_CFA_CFG_BAYCFG_Pos              0                                              /**< (ISC_CFA_CFG) Color Filter Array Pattern Position */
#define ISC_CFA_CFG_BAYCFG_Msk              (_U_(0x3) << ISC_CFA_CFG_BAYCFG_Pos)           /**< (ISC_CFA_CFG) Color Filter Array Pattern Mask */
#define ISC_CFA_CFG_BAYCFG(value)           (ISC_CFA_CFG_BAYCFG_Msk & ((value) << ISC_CFA_CFG_BAYCFG_Pos))
#define   ISC_CFA_CFG_BAYCFG_GRGR_Val       _U_(0x0)                                       /**< (ISC_CFA_CFG) Starting row configuration is G R G R (red row)  */
#define   ISC_CFA_CFG_BAYCFG_RGRG_Val       _U_(0x1)                                       /**< (ISC_CFA_CFG) Starting row configuration is R G R G (red row  */
#define   ISC_CFA_CFG_BAYCFG_GBGB_Val       _U_(0x2)                                       /**< (ISC_CFA_CFG) Starting row configuration is G B G B (blue row)  */
#define   ISC_CFA_CFG_BAYCFG_BGBG_Val       _U_(0x3)                                       /**< (ISC_CFA_CFG) Starting row configuration is B G B G (blue row)  */
#define ISC_CFA_CFG_BAYCFG_GRGR             (ISC_CFA_CFG_BAYCFG_GRGR_Val << ISC_CFA_CFG_BAYCFG_Pos)  /**< (ISC_CFA_CFG) Starting row configuration is G R G R (red row) Position  */
#define ISC_CFA_CFG_BAYCFG_RGRG             (ISC_CFA_CFG_BAYCFG_RGRG_Val << ISC_CFA_CFG_BAYCFG_Pos)  /**< (ISC_CFA_CFG) Starting row configuration is R G R G (red row Position  */
#define ISC_CFA_CFG_BAYCFG_GBGB             (ISC_CFA_CFG_BAYCFG_GBGB_Val << ISC_CFA_CFG_BAYCFG_Pos)  /**< (ISC_CFA_CFG) Starting row configuration is G B G B (blue row) Position  */
#define ISC_CFA_CFG_BAYCFG_BGBG             (ISC_CFA_CFG_BAYCFG_BGBG_Val << ISC_CFA_CFG_BAYCFG_Pos)  /**< (ISC_CFA_CFG) Starting row configuration is B G B G (blue row) Position  */
#define ISC_CFA_CFG_EITPOL_Pos              4                                              /**< (ISC_CFA_CFG) Edge Interpolation Position */
#define ISC_CFA_CFG_EITPOL_Msk              (_U_(0x1) << ISC_CFA_CFG_EITPOL_Pos)           /**< (ISC_CFA_CFG) Edge Interpolation Mask */
#define ISC_CFA_CFG_EITPOL                  ISC_CFA_CFG_EITPOL_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CFA_CFG_EITPOL_Msk instead */
#define ISC_CFA_CFG_MASK                    _U_(0x13)                                      /**< \deprecated (ISC_CFA_CFG) Register MASK  (Use ISC_CFA_CFG_Msk instead)  */
#define ISC_CFA_CFG_Msk                     _U_(0x13)                                      /**< (ISC_CFA_CFG) Register Mask  */


/* -------- ISC_CC_CTRL : (ISC Offset: 0x78) (R/W 32) Color Correction Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ENABLE:1;                  /**< bit:      0  Color Correction Enable                  */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CC_CTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CC_CTRL_OFFSET                  (0x78)                                        /**<  (ISC_CC_CTRL) Color Correction Control Register  Offset */

#define ISC_CC_CTRL_ENABLE_Pos              0                                              /**< (ISC_CC_CTRL) Color Correction Enable Position */
#define ISC_CC_CTRL_ENABLE_Msk              (_U_(0x1) << ISC_CC_CTRL_ENABLE_Pos)           /**< (ISC_CC_CTRL) Color Correction Enable Mask */
#define ISC_CC_CTRL_ENABLE                  ISC_CC_CTRL_ENABLE_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CC_CTRL_ENABLE_Msk instead */
#define ISC_CC_CTRL_MASK                    _U_(0x01)                                      /**< \deprecated (ISC_CC_CTRL) Register MASK  (Use ISC_CC_CTRL_Msk instead)  */
#define ISC_CC_CTRL_Msk                     _U_(0x01)                                      /**< (ISC_CC_CTRL) Register Mask  */


/* -------- ISC_CC_RR_RG : (ISC Offset: 0x7c) (R/W 32) Color Correction RR RG Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RRGAIN:12;                 /**< bit:  0..11  Red Gain for Red Component (signed 12 bits, 1:3:8) */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t RGGAIN:12;                 /**< bit: 16..27  Green Gain for Red Component (signed 12 bits, 1:3:8) */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CC_RR_RG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CC_RR_RG_OFFSET                 (0x7C)                                        /**<  (ISC_CC_RR_RG) Color Correction RR RG Register  Offset */

#define ISC_CC_RR_RG_RRGAIN_Pos             0                                              /**< (ISC_CC_RR_RG) Red Gain for Red Component (signed 12 bits, 1:3:8) Position */
#define ISC_CC_RR_RG_RRGAIN_Msk             (_U_(0xFFF) << ISC_CC_RR_RG_RRGAIN_Pos)        /**< (ISC_CC_RR_RG) Red Gain for Red Component (signed 12 bits, 1:3:8) Mask */
#define ISC_CC_RR_RG_RRGAIN(value)          (ISC_CC_RR_RG_RRGAIN_Msk & ((value) << ISC_CC_RR_RG_RRGAIN_Pos))
#define ISC_CC_RR_RG_RGGAIN_Pos             16                                             /**< (ISC_CC_RR_RG) Green Gain for Red Component (signed 12 bits, 1:3:8) Position */
#define ISC_CC_RR_RG_RGGAIN_Msk             (_U_(0xFFF) << ISC_CC_RR_RG_RGGAIN_Pos)        /**< (ISC_CC_RR_RG) Green Gain for Red Component (signed 12 bits, 1:3:8) Mask */
#define ISC_CC_RR_RG_RGGAIN(value)          (ISC_CC_RR_RG_RGGAIN_Msk & ((value) << ISC_CC_RR_RG_RGGAIN_Pos))
#define ISC_CC_RR_RG_MASK                   _U_(0xFFF0FFF)                                 /**< \deprecated (ISC_CC_RR_RG) Register MASK  (Use ISC_CC_RR_RG_Msk instead)  */
#define ISC_CC_RR_RG_Msk                    _U_(0xFFF0FFF)                                 /**< (ISC_CC_RR_RG) Register Mask  */


/* -------- ISC_CC_RB_OR : (ISC Offset: 0x80) (R/W 32) Color Correction RB OR Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RBGAIN:12;                 /**< bit:  0..11  Blue Gain for Red Component (signed 12 bits, 1:3:8) */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t ROFST:13;                  /**< bit: 16..28  Red Component Offset (signed 13 bits, 1:12:0) */
    uint32_t :3;                        /**< bit: 29..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CC_RB_OR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CC_RB_OR_OFFSET                 (0x80)                                        /**<  (ISC_CC_RB_OR) Color Correction RB OR Register  Offset */

#define ISC_CC_RB_OR_RBGAIN_Pos             0                                              /**< (ISC_CC_RB_OR) Blue Gain for Red Component (signed 12 bits, 1:3:8) Position */
#define ISC_CC_RB_OR_RBGAIN_Msk             (_U_(0xFFF) << ISC_CC_RB_OR_RBGAIN_Pos)        /**< (ISC_CC_RB_OR) Blue Gain for Red Component (signed 12 bits, 1:3:8) Mask */
#define ISC_CC_RB_OR_RBGAIN(value)          (ISC_CC_RB_OR_RBGAIN_Msk & ((value) << ISC_CC_RB_OR_RBGAIN_Pos))
#define ISC_CC_RB_OR_ROFST_Pos              16                                             /**< (ISC_CC_RB_OR) Red Component Offset (signed 13 bits, 1:12:0) Position */
#define ISC_CC_RB_OR_ROFST_Msk              (_U_(0x1FFF) << ISC_CC_RB_OR_ROFST_Pos)        /**< (ISC_CC_RB_OR) Red Component Offset (signed 13 bits, 1:12:0) Mask */
#define ISC_CC_RB_OR_ROFST(value)           (ISC_CC_RB_OR_ROFST_Msk & ((value) << ISC_CC_RB_OR_ROFST_Pos))
#define ISC_CC_RB_OR_MASK                   _U_(0x1FFF0FFF)                                /**< \deprecated (ISC_CC_RB_OR) Register MASK  (Use ISC_CC_RB_OR_Msk instead)  */
#define ISC_CC_RB_OR_Msk                    _U_(0x1FFF0FFF)                                /**< (ISC_CC_RB_OR) Register Mask  */


/* -------- ISC_CC_GR_GG : (ISC Offset: 0x84) (R/W 32) Color Correction GR GG Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t GRGAIN:12;                 /**< bit:  0..11  Red Gain for Green Component (signed 12 bits, 1:3:8) */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t GGGAIN:12;                 /**< bit: 16..27  Green Gain for Green Component (signed 12 bits, 1:3:8) */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CC_GR_GG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CC_GR_GG_OFFSET                 (0x84)                                        /**<  (ISC_CC_GR_GG) Color Correction GR GG Register  Offset */

#define ISC_CC_GR_GG_GRGAIN_Pos             0                                              /**< (ISC_CC_GR_GG) Red Gain for Green Component (signed 12 bits, 1:3:8) Position */
#define ISC_CC_GR_GG_GRGAIN_Msk             (_U_(0xFFF) << ISC_CC_GR_GG_GRGAIN_Pos)        /**< (ISC_CC_GR_GG) Red Gain for Green Component (signed 12 bits, 1:3:8) Mask */
#define ISC_CC_GR_GG_GRGAIN(value)          (ISC_CC_GR_GG_GRGAIN_Msk & ((value) << ISC_CC_GR_GG_GRGAIN_Pos))
#define ISC_CC_GR_GG_GGGAIN_Pos             16                                             /**< (ISC_CC_GR_GG) Green Gain for Green Component (signed 12 bits, 1:3:8) Position */
#define ISC_CC_GR_GG_GGGAIN_Msk             (_U_(0xFFF) << ISC_CC_GR_GG_GGGAIN_Pos)        /**< (ISC_CC_GR_GG) Green Gain for Green Component (signed 12 bits, 1:3:8) Mask */
#define ISC_CC_GR_GG_GGGAIN(value)          (ISC_CC_GR_GG_GGGAIN_Msk & ((value) << ISC_CC_GR_GG_GGGAIN_Pos))
#define ISC_CC_GR_GG_MASK                   _U_(0xFFF0FFF)                                 /**< \deprecated (ISC_CC_GR_GG) Register MASK  (Use ISC_CC_GR_GG_Msk instead)  */
#define ISC_CC_GR_GG_Msk                    _U_(0xFFF0FFF)                                 /**< (ISC_CC_GR_GG) Register Mask  */


/* -------- ISC_CC_GB_OG : (ISC Offset: 0x88) (R/W 32) Color Correction GB OG Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t GBGAIN:12;                 /**< bit:  0..11  Blue Gain for Green Component (signed 12 bits, 1:3:8) */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t ROFST:13;                  /**< bit: 16..28  Green Component Offset (signed 13 bits, 1:12:0) */
    uint32_t :3;                        /**< bit: 29..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CC_GB_OG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CC_GB_OG_OFFSET                 (0x88)                                        /**<  (ISC_CC_GB_OG) Color Correction GB OG Register  Offset */

#define ISC_CC_GB_OG_GBGAIN_Pos             0                                              /**< (ISC_CC_GB_OG) Blue Gain for Green Component (signed 12 bits, 1:3:8) Position */
#define ISC_CC_GB_OG_GBGAIN_Msk             (_U_(0xFFF) << ISC_CC_GB_OG_GBGAIN_Pos)        /**< (ISC_CC_GB_OG) Blue Gain for Green Component (signed 12 bits, 1:3:8) Mask */
#define ISC_CC_GB_OG_GBGAIN(value)          (ISC_CC_GB_OG_GBGAIN_Msk & ((value) << ISC_CC_GB_OG_GBGAIN_Pos))
#define ISC_CC_GB_OG_ROFST_Pos              16                                             /**< (ISC_CC_GB_OG) Green Component Offset (signed 13 bits, 1:12:0) Position */
#define ISC_CC_GB_OG_ROFST_Msk              (_U_(0x1FFF) << ISC_CC_GB_OG_ROFST_Pos)        /**< (ISC_CC_GB_OG) Green Component Offset (signed 13 bits, 1:12:0) Mask */
#define ISC_CC_GB_OG_ROFST(value)           (ISC_CC_GB_OG_ROFST_Msk & ((value) << ISC_CC_GB_OG_ROFST_Pos))
#define ISC_CC_GB_OG_MASK                   _U_(0x1FFF0FFF)                                /**< \deprecated (ISC_CC_GB_OG) Register MASK  (Use ISC_CC_GB_OG_Msk instead)  */
#define ISC_CC_GB_OG_Msk                    _U_(0x1FFF0FFF)                                /**< (ISC_CC_GB_OG) Register Mask  */


/* -------- ISC_CC_BR_BG : (ISC Offset: 0x8c) (R/W 32) Color Correction BR BG Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BRGAIN:12;                 /**< bit:  0..11  Red Gain for Blue Component (signed 12 bits, 1:3:8) */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t BGGAIN:12;                 /**< bit: 16..27  Green Gain for Blue Component (signed 12 bits, 1:3:8) */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CC_BR_BG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CC_BR_BG_OFFSET                 (0x8C)                                        /**<  (ISC_CC_BR_BG) Color Correction BR BG Register  Offset */

#define ISC_CC_BR_BG_BRGAIN_Pos             0                                              /**< (ISC_CC_BR_BG) Red Gain for Blue Component (signed 12 bits, 1:3:8) Position */
#define ISC_CC_BR_BG_BRGAIN_Msk             (_U_(0xFFF) << ISC_CC_BR_BG_BRGAIN_Pos)        /**< (ISC_CC_BR_BG) Red Gain for Blue Component (signed 12 bits, 1:3:8) Mask */
#define ISC_CC_BR_BG_BRGAIN(value)          (ISC_CC_BR_BG_BRGAIN_Msk & ((value) << ISC_CC_BR_BG_BRGAIN_Pos))
#define ISC_CC_BR_BG_BGGAIN_Pos             16                                             /**< (ISC_CC_BR_BG) Green Gain for Blue Component (signed 12 bits, 1:3:8) Position */
#define ISC_CC_BR_BG_BGGAIN_Msk             (_U_(0xFFF) << ISC_CC_BR_BG_BGGAIN_Pos)        /**< (ISC_CC_BR_BG) Green Gain for Blue Component (signed 12 bits, 1:3:8) Mask */
#define ISC_CC_BR_BG_BGGAIN(value)          (ISC_CC_BR_BG_BGGAIN_Msk & ((value) << ISC_CC_BR_BG_BGGAIN_Pos))
#define ISC_CC_BR_BG_MASK                   _U_(0xFFF0FFF)                                 /**< \deprecated (ISC_CC_BR_BG) Register MASK  (Use ISC_CC_BR_BG_Msk instead)  */
#define ISC_CC_BR_BG_Msk                    _U_(0xFFF0FFF)                                 /**< (ISC_CC_BR_BG) Register Mask  */


/* -------- ISC_CC_BB_OB : (ISC Offset: 0x90) (R/W 32) Color Correction BB OB Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BBGAIN:12;                 /**< bit:  0..11  Blue Gain for Blue Component (signed 12 bits, 1:3:8) */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t BOFST:13;                  /**< bit: 16..28  Blue Component Offset (signed 13 bits, 1:12:0) */
    uint32_t :3;                        /**< bit: 29..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CC_BB_OB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CC_BB_OB_OFFSET                 (0x90)                                        /**<  (ISC_CC_BB_OB) Color Correction BB OB Register  Offset */

#define ISC_CC_BB_OB_BBGAIN_Pos             0                                              /**< (ISC_CC_BB_OB) Blue Gain for Blue Component (signed 12 bits, 1:3:8) Position */
#define ISC_CC_BB_OB_BBGAIN_Msk             (_U_(0xFFF) << ISC_CC_BB_OB_BBGAIN_Pos)        /**< (ISC_CC_BB_OB) Blue Gain for Blue Component (signed 12 bits, 1:3:8) Mask */
#define ISC_CC_BB_OB_BBGAIN(value)          (ISC_CC_BB_OB_BBGAIN_Msk & ((value) << ISC_CC_BB_OB_BBGAIN_Pos))
#define ISC_CC_BB_OB_BOFST_Pos              16                                             /**< (ISC_CC_BB_OB) Blue Component Offset (signed 13 bits, 1:12:0) Position */
#define ISC_CC_BB_OB_BOFST_Msk              (_U_(0x1FFF) << ISC_CC_BB_OB_BOFST_Pos)        /**< (ISC_CC_BB_OB) Blue Component Offset (signed 13 bits, 1:12:0) Mask */
#define ISC_CC_BB_OB_BOFST(value)           (ISC_CC_BB_OB_BOFST_Msk & ((value) << ISC_CC_BB_OB_BOFST_Pos))
#define ISC_CC_BB_OB_MASK                   _U_(0x1FFF0FFF)                                /**< \deprecated (ISC_CC_BB_OB) Register MASK  (Use ISC_CC_BB_OB_Msk instead)  */
#define ISC_CC_BB_OB_Msk                    _U_(0x1FFF0FFF)                                /**< (ISC_CC_BB_OB) Register Mask  */


/* -------- ISC_GAM_CTRL : (ISC Offset: 0x94) (R/W 32) Gamma Correction Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ENABLE:1;                  /**< bit:      0  Gamma Correction Enable                  */
    uint32_t BENABLE:1;                 /**< bit:      1  Gamma Correction Enable for B Channel    */
    uint32_t GENABLE:1;                 /**< bit:      2  Gamma Correction Enable for G Channel    */
    uint32_t RENABLE:1;                 /**< bit:      3  Gamma Correction Enable for R Channel    */
    uint32_t :28;                       /**< bit:  4..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_GAM_CTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_GAM_CTRL_OFFSET                 (0x94)                                        /**<  (ISC_GAM_CTRL) Gamma Correction Control Register  Offset */

#define ISC_GAM_CTRL_ENABLE_Pos             0                                              /**< (ISC_GAM_CTRL) Gamma Correction Enable Position */
#define ISC_GAM_CTRL_ENABLE_Msk             (_U_(0x1) << ISC_GAM_CTRL_ENABLE_Pos)          /**< (ISC_GAM_CTRL) Gamma Correction Enable Mask */
#define ISC_GAM_CTRL_ENABLE                 ISC_GAM_CTRL_ENABLE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_GAM_CTRL_ENABLE_Msk instead */
#define ISC_GAM_CTRL_BENABLE_Pos            1                                              /**< (ISC_GAM_CTRL) Gamma Correction Enable for B Channel Position */
#define ISC_GAM_CTRL_BENABLE_Msk            (_U_(0x1) << ISC_GAM_CTRL_BENABLE_Pos)         /**< (ISC_GAM_CTRL) Gamma Correction Enable for B Channel Mask */
#define ISC_GAM_CTRL_BENABLE                ISC_GAM_CTRL_BENABLE_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_GAM_CTRL_BENABLE_Msk instead */
#define ISC_GAM_CTRL_GENABLE_Pos            2                                              /**< (ISC_GAM_CTRL) Gamma Correction Enable for G Channel Position */
#define ISC_GAM_CTRL_GENABLE_Msk            (_U_(0x1) << ISC_GAM_CTRL_GENABLE_Pos)         /**< (ISC_GAM_CTRL) Gamma Correction Enable for G Channel Mask */
#define ISC_GAM_CTRL_GENABLE                ISC_GAM_CTRL_GENABLE_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_GAM_CTRL_GENABLE_Msk instead */
#define ISC_GAM_CTRL_RENABLE_Pos            3                                              /**< (ISC_GAM_CTRL) Gamma Correction Enable for R Channel Position */
#define ISC_GAM_CTRL_RENABLE_Msk            (_U_(0x1) << ISC_GAM_CTRL_RENABLE_Pos)         /**< (ISC_GAM_CTRL) Gamma Correction Enable for R Channel Mask */
#define ISC_GAM_CTRL_RENABLE                ISC_GAM_CTRL_RENABLE_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_GAM_CTRL_RENABLE_Msk instead */
#define ISC_GAM_CTRL_MASK                   _U_(0x0F)                                      /**< \deprecated (ISC_GAM_CTRL) Register MASK  (Use ISC_GAM_CTRL_Msk instead)  */
#define ISC_GAM_CTRL_Msk                    _U_(0x0F)                                      /**< (ISC_GAM_CTRL) Register Mask  */


/* -------- ISC_GAM_BENTRY : (ISC Offset: 0x98) (R/W 32) Gamma Correction Blue Entry -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BSLOPE:10;                 /**< bit:   0..9  Blue Color Slope for Piecewise Interpolation (signed 10 bits 1:3:6) */
    uint32_t :6;                        /**< bit: 10..15  Reserved */
    uint32_t BCONSTANT:10;              /**< bit: 16..25  Blue Color Constant for Piecewise Interpolation (unsigned 10 bits 0:10:0) */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_GAM_BENTRY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_GAM_BENTRY_OFFSET               (0x98)                                        /**<  (ISC_GAM_BENTRY) Gamma Correction Blue Entry  Offset */

#define ISC_GAM_BENTRY_BSLOPE_Pos           0                                              /**< (ISC_GAM_BENTRY) Blue Color Slope for Piecewise Interpolation (signed 10 bits 1:3:6) Position */
#define ISC_GAM_BENTRY_BSLOPE_Msk           (_U_(0x3FF) << ISC_GAM_BENTRY_BSLOPE_Pos)      /**< (ISC_GAM_BENTRY) Blue Color Slope for Piecewise Interpolation (signed 10 bits 1:3:6) Mask */
#define ISC_GAM_BENTRY_BSLOPE(value)        (ISC_GAM_BENTRY_BSLOPE_Msk & ((value) << ISC_GAM_BENTRY_BSLOPE_Pos))
#define ISC_GAM_BENTRY_BCONSTANT_Pos        16                                             /**< (ISC_GAM_BENTRY) Blue Color Constant for Piecewise Interpolation (unsigned 10 bits 0:10:0) Position */
#define ISC_GAM_BENTRY_BCONSTANT_Msk        (_U_(0x3FF) << ISC_GAM_BENTRY_BCONSTANT_Pos)   /**< (ISC_GAM_BENTRY) Blue Color Constant for Piecewise Interpolation (unsigned 10 bits 0:10:0) Mask */
#define ISC_GAM_BENTRY_BCONSTANT(value)     (ISC_GAM_BENTRY_BCONSTANT_Msk & ((value) << ISC_GAM_BENTRY_BCONSTANT_Pos))
#define ISC_GAM_BENTRY_MASK                 _U_(0x3FF03FF)                                 /**< \deprecated (ISC_GAM_BENTRY) Register MASK  (Use ISC_GAM_BENTRY_Msk instead)  */
#define ISC_GAM_BENTRY_Msk                  _U_(0x3FF03FF)                                 /**< (ISC_GAM_BENTRY) Register Mask  */


/* -------- ISC_GAM_GENTRY : (ISC Offset: 0x198) (R/W 32) Gamma Correction Green Entry -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t GSLOPE:10;                 /**< bit:   0..9  Green Color Slope for Piecewise Interpolation (signed 10 bits 1:3:6) */
    uint32_t :6;                        /**< bit: 10..15  Reserved */
    uint32_t GCONSTANT:10;              /**< bit: 16..25  Green Color Constant for Piecewise Interpolation (unsigned 10 bits 0:10:0) */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_GAM_GENTRY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_GAM_GENTRY_OFFSET               (0x198)                                       /**<  (ISC_GAM_GENTRY) Gamma Correction Green Entry  Offset */

#define ISC_GAM_GENTRY_GSLOPE_Pos           0                                              /**< (ISC_GAM_GENTRY) Green Color Slope for Piecewise Interpolation (signed 10 bits 1:3:6) Position */
#define ISC_GAM_GENTRY_GSLOPE_Msk           (_U_(0x3FF) << ISC_GAM_GENTRY_GSLOPE_Pos)      /**< (ISC_GAM_GENTRY) Green Color Slope for Piecewise Interpolation (signed 10 bits 1:3:6) Mask */
#define ISC_GAM_GENTRY_GSLOPE(value)        (ISC_GAM_GENTRY_GSLOPE_Msk & ((value) << ISC_GAM_GENTRY_GSLOPE_Pos))
#define ISC_GAM_GENTRY_GCONSTANT_Pos        16                                             /**< (ISC_GAM_GENTRY) Green Color Constant for Piecewise Interpolation (unsigned 10 bits 0:10:0) Position */
#define ISC_GAM_GENTRY_GCONSTANT_Msk        (_U_(0x3FF) << ISC_GAM_GENTRY_GCONSTANT_Pos)   /**< (ISC_GAM_GENTRY) Green Color Constant for Piecewise Interpolation (unsigned 10 bits 0:10:0) Mask */
#define ISC_GAM_GENTRY_GCONSTANT(value)     (ISC_GAM_GENTRY_GCONSTANT_Msk & ((value) << ISC_GAM_GENTRY_GCONSTANT_Pos))
#define ISC_GAM_GENTRY_MASK                 _U_(0x3FF03FF)                                 /**< \deprecated (ISC_GAM_GENTRY) Register MASK  (Use ISC_GAM_GENTRY_Msk instead)  */
#define ISC_GAM_GENTRY_Msk                  _U_(0x3FF03FF)                                 /**< (ISC_GAM_GENTRY) Register Mask  */


/* -------- ISC_GAM_RENTRY : (ISC Offset: 0x298) (R/W 32) Gamma Correction Red Entry -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RSLOPE:10;                 /**< bit:   0..9  Red Color Slope for Piecewise Interpolation (signed 10 bits 1:3:6) */
    uint32_t :6;                        /**< bit: 10..15  Reserved */
    uint32_t RCONSTANT:10;              /**< bit: 16..25  Red Color Constant for Piecewise Interpolation (unsigned 10 bits 0:10:0) */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_GAM_RENTRY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_GAM_RENTRY_OFFSET               (0x298)                                       /**<  (ISC_GAM_RENTRY) Gamma Correction Red Entry  Offset */

#define ISC_GAM_RENTRY_RSLOPE_Pos           0                                              /**< (ISC_GAM_RENTRY) Red Color Slope for Piecewise Interpolation (signed 10 bits 1:3:6) Position */
#define ISC_GAM_RENTRY_RSLOPE_Msk           (_U_(0x3FF) << ISC_GAM_RENTRY_RSLOPE_Pos)      /**< (ISC_GAM_RENTRY) Red Color Slope for Piecewise Interpolation (signed 10 bits 1:3:6) Mask */
#define ISC_GAM_RENTRY_RSLOPE(value)        (ISC_GAM_RENTRY_RSLOPE_Msk & ((value) << ISC_GAM_RENTRY_RSLOPE_Pos))
#define ISC_GAM_RENTRY_RCONSTANT_Pos        16                                             /**< (ISC_GAM_RENTRY) Red Color Constant for Piecewise Interpolation (unsigned 10 bits 0:10:0) Position */
#define ISC_GAM_RENTRY_RCONSTANT_Msk        (_U_(0x3FF) << ISC_GAM_RENTRY_RCONSTANT_Pos)   /**< (ISC_GAM_RENTRY) Red Color Constant for Piecewise Interpolation (unsigned 10 bits 0:10:0) Mask */
#define ISC_GAM_RENTRY_RCONSTANT(value)     (ISC_GAM_RENTRY_RCONSTANT_Msk & ((value) << ISC_GAM_RENTRY_RCONSTANT_Pos))
#define ISC_GAM_RENTRY_MASK                 _U_(0x3FF03FF)                                 /**< \deprecated (ISC_GAM_RENTRY) Register MASK  (Use ISC_GAM_RENTRY_Msk instead)  */
#define ISC_GAM_RENTRY_Msk                  _U_(0x3FF03FF)                                 /**< (ISC_GAM_RENTRY) Register Mask  */


/* -------- ISC_CSC_CTRL : (ISC Offset: 0x398) (R/W 32) Color Space Conversion Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ENABLE:1;                  /**< bit:      0  RGB to YCbCr Color Space Conversion Enable */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CSC_CTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CSC_CTRL_OFFSET                 (0x398)                                       /**<  (ISC_CSC_CTRL) Color Space Conversion Control Register  Offset */

#define ISC_CSC_CTRL_ENABLE_Pos             0                                              /**< (ISC_CSC_CTRL) RGB to YCbCr Color Space Conversion Enable Position */
#define ISC_CSC_CTRL_ENABLE_Msk             (_U_(0x1) << ISC_CSC_CTRL_ENABLE_Pos)          /**< (ISC_CSC_CTRL) RGB to YCbCr Color Space Conversion Enable Mask */
#define ISC_CSC_CTRL_ENABLE                 ISC_CSC_CTRL_ENABLE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CSC_CTRL_ENABLE_Msk instead */
#define ISC_CSC_CTRL_MASK                   _U_(0x01)                                      /**< \deprecated (ISC_CSC_CTRL) Register MASK  (Use ISC_CSC_CTRL_Msk instead)  */
#define ISC_CSC_CTRL_Msk                    _U_(0x01)                                      /**< (ISC_CSC_CTRL) Register Mask  */


/* -------- ISC_CSC_YR_YG : (ISC Offset: 0x39c) (R/W 32) Color Space Conversion YR, YG Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t YRGAIN:12;                 /**< bit:  0..11  Reg Gain for Luminance (signed 12 bits 1:3:8) */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t YGGAIN:12;                 /**< bit: 16..27  Green Gain for Luminance (signed 12 bits 1:3:8) */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CSC_YR_YG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CSC_YR_YG_OFFSET                (0x39C)                                       /**<  (ISC_CSC_YR_YG) Color Space Conversion YR, YG Register  Offset */

#define ISC_CSC_YR_YG_YRGAIN_Pos            0                                              /**< (ISC_CSC_YR_YG) Reg Gain for Luminance (signed 12 bits 1:3:8) Position */
#define ISC_CSC_YR_YG_YRGAIN_Msk            (_U_(0xFFF) << ISC_CSC_YR_YG_YRGAIN_Pos)       /**< (ISC_CSC_YR_YG) Reg Gain for Luminance (signed 12 bits 1:3:8) Mask */
#define ISC_CSC_YR_YG_YRGAIN(value)         (ISC_CSC_YR_YG_YRGAIN_Msk & ((value) << ISC_CSC_YR_YG_YRGAIN_Pos))
#define ISC_CSC_YR_YG_YGGAIN_Pos            16                                             /**< (ISC_CSC_YR_YG) Green Gain for Luminance (signed 12 bits 1:3:8) Position */
#define ISC_CSC_YR_YG_YGGAIN_Msk            (_U_(0xFFF) << ISC_CSC_YR_YG_YGGAIN_Pos)       /**< (ISC_CSC_YR_YG) Green Gain for Luminance (signed 12 bits 1:3:8) Mask */
#define ISC_CSC_YR_YG_YGGAIN(value)         (ISC_CSC_YR_YG_YGGAIN_Msk & ((value) << ISC_CSC_YR_YG_YGGAIN_Pos))
#define ISC_CSC_YR_YG_MASK                  _U_(0xFFF0FFF)                                 /**< \deprecated (ISC_CSC_YR_YG) Register MASK  (Use ISC_CSC_YR_YG_Msk instead)  */
#define ISC_CSC_YR_YG_Msk                   _U_(0xFFF0FFF)                                 /**< (ISC_CSC_YR_YG) Register Mask  */


/* -------- ISC_CSC_YB_OY : (ISC Offset: 0x3a0) (R/W 32) Color Space Conversion YB, OY Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t YBGAIN:12;                 /**< bit:  0..11  Blue Gain for Luminance Component (12 bits signed 1:3:8) */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t YOFST:11;                  /**< bit: 16..26  Luminance Offset (11 bits signed 1:10:0) */
    uint32_t :5;                        /**< bit: 27..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CSC_YB_OY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CSC_YB_OY_OFFSET                (0x3A0)                                       /**<  (ISC_CSC_YB_OY) Color Space Conversion YB, OY Register  Offset */

#define ISC_CSC_YB_OY_YBGAIN_Pos            0                                              /**< (ISC_CSC_YB_OY) Blue Gain for Luminance Component (12 bits signed 1:3:8) Position */
#define ISC_CSC_YB_OY_YBGAIN_Msk            (_U_(0xFFF) << ISC_CSC_YB_OY_YBGAIN_Pos)       /**< (ISC_CSC_YB_OY) Blue Gain for Luminance Component (12 bits signed 1:3:8) Mask */
#define ISC_CSC_YB_OY_YBGAIN(value)         (ISC_CSC_YB_OY_YBGAIN_Msk & ((value) << ISC_CSC_YB_OY_YBGAIN_Pos))
#define ISC_CSC_YB_OY_YOFST_Pos             16                                             /**< (ISC_CSC_YB_OY) Luminance Offset (11 bits signed 1:10:0) Position */
#define ISC_CSC_YB_OY_YOFST_Msk             (_U_(0x7FF) << ISC_CSC_YB_OY_YOFST_Pos)        /**< (ISC_CSC_YB_OY) Luminance Offset (11 bits signed 1:10:0) Mask */
#define ISC_CSC_YB_OY_YOFST(value)          (ISC_CSC_YB_OY_YOFST_Msk & ((value) << ISC_CSC_YB_OY_YOFST_Pos))
#define ISC_CSC_YB_OY_MASK                  _U_(0x7FF0FFF)                                 /**< \deprecated (ISC_CSC_YB_OY) Register MASK  (Use ISC_CSC_YB_OY_Msk instead)  */
#define ISC_CSC_YB_OY_Msk                   _U_(0x7FF0FFF)                                 /**< (ISC_CSC_YB_OY) Register Mask  */


/* -------- ISC_CSC_CBR_CBG : (ISC Offset: 0x3a4) (R/W 32) Color Space Conversion CBR CBG Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CBRGAIN:12;                /**< bit:  0..11  Red Gain for Blue Chrominance (signed 12 bits, 1:3:8) */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t CBGGAIN:12;                /**< bit: 16..27  Green Gain for Blue Chrominance (signed 12 bits 1:3:8) */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CSC_CBR_CBG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CSC_CBR_CBG_OFFSET              (0x3A4)                                       /**<  (ISC_CSC_CBR_CBG) Color Space Conversion CBR CBG Register  Offset */

#define ISC_CSC_CBR_CBG_CBRGAIN_Pos         0                                              /**< (ISC_CSC_CBR_CBG) Red Gain for Blue Chrominance (signed 12 bits, 1:3:8) Position */
#define ISC_CSC_CBR_CBG_CBRGAIN_Msk         (_U_(0xFFF) << ISC_CSC_CBR_CBG_CBRGAIN_Pos)    /**< (ISC_CSC_CBR_CBG) Red Gain for Blue Chrominance (signed 12 bits, 1:3:8) Mask */
#define ISC_CSC_CBR_CBG_CBRGAIN(value)      (ISC_CSC_CBR_CBG_CBRGAIN_Msk & ((value) << ISC_CSC_CBR_CBG_CBRGAIN_Pos))
#define ISC_CSC_CBR_CBG_CBGGAIN_Pos         16                                             /**< (ISC_CSC_CBR_CBG) Green Gain for Blue Chrominance (signed 12 bits 1:3:8) Position */
#define ISC_CSC_CBR_CBG_CBGGAIN_Msk         (_U_(0xFFF) << ISC_CSC_CBR_CBG_CBGGAIN_Pos)    /**< (ISC_CSC_CBR_CBG) Green Gain for Blue Chrominance (signed 12 bits 1:3:8) Mask */
#define ISC_CSC_CBR_CBG_CBGGAIN(value)      (ISC_CSC_CBR_CBG_CBGGAIN_Msk & ((value) << ISC_CSC_CBR_CBG_CBGGAIN_Pos))
#define ISC_CSC_CBR_CBG_MASK                _U_(0xFFF0FFF)                                 /**< \deprecated (ISC_CSC_CBR_CBG) Register MASK  (Use ISC_CSC_CBR_CBG_Msk instead)  */
#define ISC_CSC_CBR_CBG_Msk                 _U_(0xFFF0FFF)                                 /**< (ISC_CSC_CBR_CBG) Register Mask  */


/* -------- ISC_CSC_CBB_OCB : (ISC Offset: 0x3a8) (R/W 32) Color Space Conversion CBB OCB Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CBBGAIN:12;                /**< bit:  0..11  Blue Gain for Blue Chrominance (signed 12 bits 1:3:8) */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t CBOFST:11;                 /**< bit: 16..26  Blue Chrominance Offset (signed 11 bits 1:10:0) */
    uint32_t :5;                        /**< bit: 27..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CSC_CBB_OCB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CSC_CBB_OCB_OFFSET              (0x3A8)                                       /**<  (ISC_CSC_CBB_OCB) Color Space Conversion CBB OCB Register  Offset */

#define ISC_CSC_CBB_OCB_CBBGAIN_Pos         0                                              /**< (ISC_CSC_CBB_OCB) Blue Gain for Blue Chrominance (signed 12 bits 1:3:8) Position */
#define ISC_CSC_CBB_OCB_CBBGAIN_Msk         (_U_(0xFFF) << ISC_CSC_CBB_OCB_CBBGAIN_Pos)    /**< (ISC_CSC_CBB_OCB) Blue Gain for Blue Chrominance (signed 12 bits 1:3:8) Mask */
#define ISC_CSC_CBB_OCB_CBBGAIN(value)      (ISC_CSC_CBB_OCB_CBBGAIN_Msk & ((value) << ISC_CSC_CBB_OCB_CBBGAIN_Pos))
#define ISC_CSC_CBB_OCB_CBOFST_Pos          16                                             /**< (ISC_CSC_CBB_OCB) Blue Chrominance Offset (signed 11 bits 1:10:0) Position */
#define ISC_CSC_CBB_OCB_CBOFST_Msk          (_U_(0x7FF) << ISC_CSC_CBB_OCB_CBOFST_Pos)     /**< (ISC_CSC_CBB_OCB) Blue Chrominance Offset (signed 11 bits 1:10:0) Mask */
#define ISC_CSC_CBB_OCB_CBOFST(value)       (ISC_CSC_CBB_OCB_CBOFST_Msk & ((value) << ISC_CSC_CBB_OCB_CBOFST_Pos))
#define ISC_CSC_CBB_OCB_MASK                _U_(0x7FF0FFF)                                 /**< \deprecated (ISC_CSC_CBB_OCB) Register MASK  (Use ISC_CSC_CBB_OCB_Msk instead)  */
#define ISC_CSC_CBB_OCB_Msk                 _U_(0x7FF0FFF)                                 /**< (ISC_CSC_CBB_OCB) Register Mask  */


/* -------- ISC_CSC_CRR_CRG : (ISC Offset: 0x3ac) (R/W 32) Color Space Conversion CRR CRG Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CRRGAIN:12;                /**< bit:  0..11  Red Gain for Red Chrominance (signed 12 bits 1:3:8) */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t CRGGAIN:12;                /**< bit: 16..27  Green Gain for Red Chrominance (signed 12 bits 1:3:8) */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CSC_CRR_CRG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CSC_CRR_CRG_OFFSET              (0x3AC)                                       /**<  (ISC_CSC_CRR_CRG) Color Space Conversion CRR CRG Register  Offset */

#define ISC_CSC_CRR_CRG_CRRGAIN_Pos         0                                              /**< (ISC_CSC_CRR_CRG) Red Gain for Red Chrominance (signed 12 bits 1:3:8) Position */
#define ISC_CSC_CRR_CRG_CRRGAIN_Msk         (_U_(0xFFF) << ISC_CSC_CRR_CRG_CRRGAIN_Pos)    /**< (ISC_CSC_CRR_CRG) Red Gain for Red Chrominance (signed 12 bits 1:3:8) Mask */
#define ISC_CSC_CRR_CRG_CRRGAIN(value)      (ISC_CSC_CRR_CRG_CRRGAIN_Msk & ((value) << ISC_CSC_CRR_CRG_CRRGAIN_Pos))
#define ISC_CSC_CRR_CRG_CRGGAIN_Pos         16                                             /**< (ISC_CSC_CRR_CRG) Green Gain for Red Chrominance (signed 12 bits 1:3:8) Position */
#define ISC_CSC_CRR_CRG_CRGGAIN_Msk         (_U_(0xFFF) << ISC_CSC_CRR_CRG_CRGGAIN_Pos)    /**< (ISC_CSC_CRR_CRG) Green Gain for Red Chrominance (signed 12 bits 1:3:8) Mask */
#define ISC_CSC_CRR_CRG_CRGGAIN(value)      (ISC_CSC_CRR_CRG_CRGGAIN_Msk & ((value) << ISC_CSC_CRR_CRG_CRGGAIN_Pos))
#define ISC_CSC_CRR_CRG_MASK                _U_(0xFFF0FFF)                                 /**< \deprecated (ISC_CSC_CRR_CRG) Register MASK  (Use ISC_CSC_CRR_CRG_Msk instead)  */
#define ISC_CSC_CRR_CRG_Msk                 _U_(0xFFF0FFF)                                 /**< (ISC_CSC_CRR_CRG) Register Mask  */


/* -------- ISC_CSC_CRB_OCR : (ISC Offset: 0x3b0) (R/W 32) Color Space Conversion CRB OCR Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CRBGAIN:12;                /**< bit:  0..11  Blue Gain for Red Chrominance (signed 12 bits 1:3:8) */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t CROFST:11;                 /**< bit: 16..26  Red Chrominance Offset (signed 11 bits 1:10:0) */
    uint32_t :5;                        /**< bit: 27..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CSC_CRB_OCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CSC_CRB_OCR_OFFSET              (0x3B0)                                       /**<  (ISC_CSC_CRB_OCR) Color Space Conversion CRB OCR Register  Offset */

#define ISC_CSC_CRB_OCR_CRBGAIN_Pos         0                                              /**< (ISC_CSC_CRB_OCR) Blue Gain for Red Chrominance (signed 12 bits 1:3:8) Position */
#define ISC_CSC_CRB_OCR_CRBGAIN_Msk         (_U_(0xFFF) << ISC_CSC_CRB_OCR_CRBGAIN_Pos)    /**< (ISC_CSC_CRB_OCR) Blue Gain for Red Chrominance (signed 12 bits 1:3:8) Mask */
#define ISC_CSC_CRB_OCR_CRBGAIN(value)      (ISC_CSC_CRB_OCR_CRBGAIN_Msk & ((value) << ISC_CSC_CRB_OCR_CRBGAIN_Pos))
#define ISC_CSC_CRB_OCR_CROFST_Pos          16                                             /**< (ISC_CSC_CRB_OCR) Red Chrominance Offset (signed 11 bits 1:10:0) Position */
#define ISC_CSC_CRB_OCR_CROFST_Msk          (_U_(0x7FF) << ISC_CSC_CRB_OCR_CROFST_Pos)     /**< (ISC_CSC_CRB_OCR) Red Chrominance Offset (signed 11 bits 1:10:0) Mask */
#define ISC_CSC_CRB_OCR_CROFST(value)       (ISC_CSC_CRB_OCR_CROFST_Msk & ((value) << ISC_CSC_CRB_OCR_CROFST_Pos))
#define ISC_CSC_CRB_OCR_MASK                _U_(0x7FF0FFF)                                 /**< \deprecated (ISC_CSC_CRB_OCR) Register MASK  (Use ISC_CSC_CRB_OCR_Msk instead)  */
#define ISC_CSC_CRB_OCR_Msk                 _U_(0x7FF0FFF)                                 /**< (ISC_CSC_CRB_OCR) Register Mask  */


/* -------- ISC_CBC_CTRL : (ISC Offset: 0x3b4) (R/W 32) Contrast and Brightness Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ENABLE:1;                  /**< bit:      0  Contrast and Brightness Control Enable   */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CBC_CTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CBC_CTRL_OFFSET                 (0x3B4)                                       /**<  (ISC_CBC_CTRL) Contrast and Brightness Control Register  Offset */

#define ISC_CBC_CTRL_ENABLE_Pos             0                                              /**< (ISC_CBC_CTRL) Contrast and Brightness Control Enable Position */
#define ISC_CBC_CTRL_ENABLE_Msk             (_U_(0x1) << ISC_CBC_CTRL_ENABLE_Pos)          /**< (ISC_CBC_CTRL) Contrast and Brightness Control Enable Mask */
#define ISC_CBC_CTRL_ENABLE                 ISC_CBC_CTRL_ENABLE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CBC_CTRL_ENABLE_Msk instead */
#define ISC_CBC_CTRL_MASK                   _U_(0x01)                                      /**< \deprecated (ISC_CBC_CTRL) Register MASK  (Use ISC_CBC_CTRL_Msk instead)  */
#define ISC_CBC_CTRL_Msk                    _U_(0x01)                                      /**< (ISC_CBC_CTRL) Register Mask  */


/* -------- ISC_CBC_CFG : (ISC Offset: 0x3b8) (R/W 32) Contrast and Brightness Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CCIR:1;                    /**< bit:      0  CCIR656 Stream Enable                    */
    uint32_t CCIRMODE:2;                /**< bit:   1..2  CCIR656 Byte Ordering                    */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CBC_CFG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CBC_CFG_OFFSET                  (0x3B8)                                       /**<  (ISC_CBC_CFG) Contrast and Brightness Configuration Register  Offset */

#define ISC_CBC_CFG_CCIR_Pos                0                                              /**< (ISC_CBC_CFG) CCIR656 Stream Enable Position */
#define ISC_CBC_CFG_CCIR_Msk                (_U_(0x1) << ISC_CBC_CFG_CCIR_Pos)             /**< (ISC_CBC_CFG) CCIR656 Stream Enable Mask */
#define ISC_CBC_CFG_CCIR                    ISC_CBC_CFG_CCIR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_CBC_CFG_CCIR_Msk instead */
#define ISC_CBC_CFG_CCIRMODE_Pos            1                                              /**< (ISC_CBC_CFG) CCIR656 Byte Ordering Position */
#define ISC_CBC_CFG_CCIRMODE_Msk            (_U_(0x3) << ISC_CBC_CFG_CCIRMODE_Pos)         /**< (ISC_CBC_CFG) CCIR656 Byte Ordering Mask */
#define ISC_CBC_CFG_CCIRMODE(value)         (ISC_CBC_CFG_CCIRMODE_Msk & ((value) << ISC_CBC_CFG_CCIRMODE_Pos))
#define   ISC_CBC_CFG_CCIRMODE_CBY_Val      _U_(0x0)                                       /**< (ISC_CBC_CFG) Byte ordering Cb0, Y0, Cr0, Y1  */
#define   ISC_CBC_CFG_CCIRMODE_CRY_Val      _U_(0x1)                                       /**< (ISC_CBC_CFG) Byte ordering Cr0, Y0, Cb0, Y1  */
#define   ISC_CBC_CFG_CCIRMODE_YCB_Val      _U_(0x2)                                       /**< (ISC_CBC_CFG) Byte ordering Y0, Cb0, Y1, Cr0  */
#define   ISC_CBC_CFG_CCIRMODE_YCR_Val      _U_(0x3)                                       /**< (ISC_CBC_CFG) Byte ordering Y0, Cr0, Y1, Cb0  */
#define ISC_CBC_CFG_CCIRMODE_CBY            (ISC_CBC_CFG_CCIRMODE_CBY_Val << ISC_CBC_CFG_CCIRMODE_Pos)  /**< (ISC_CBC_CFG) Byte ordering Cb0, Y0, Cr0, Y1 Position  */
#define ISC_CBC_CFG_CCIRMODE_CRY            (ISC_CBC_CFG_CCIRMODE_CRY_Val << ISC_CBC_CFG_CCIRMODE_Pos)  /**< (ISC_CBC_CFG) Byte ordering Cr0, Y0, Cb0, Y1 Position  */
#define ISC_CBC_CFG_CCIRMODE_YCB            (ISC_CBC_CFG_CCIRMODE_YCB_Val << ISC_CBC_CFG_CCIRMODE_Pos)  /**< (ISC_CBC_CFG) Byte ordering Y0, Cb0, Y1, Cr0 Position  */
#define ISC_CBC_CFG_CCIRMODE_YCR            (ISC_CBC_CFG_CCIRMODE_YCR_Val << ISC_CBC_CFG_CCIRMODE_Pos)  /**< (ISC_CBC_CFG) Byte ordering Y0, Cr0, Y1, Cb0 Position  */
#define ISC_CBC_CFG_MASK                    _U_(0x07)                                      /**< \deprecated (ISC_CBC_CFG) Register MASK  (Use ISC_CBC_CFG_Msk instead)  */
#define ISC_CBC_CFG_Msk                     _U_(0x07)                                      /**< (ISC_CBC_CFG) Register Mask  */


/* -------- ISC_CBC_BRIGHT : (ISC Offset: 0x3bc) (R/W 32) Contrast and Brightness, Brightness Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BRIGHT:11;                 /**< bit:  0..10  Brightness Control (signed 11 bits 1:10:0) */
    uint32_t :21;                       /**< bit: 11..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CBC_BRIGHT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CBC_BRIGHT_OFFSET               (0x3BC)                                       /**<  (ISC_CBC_BRIGHT) Contrast and Brightness, Brightness Register  Offset */

#define ISC_CBC_BRIGHT_BRIGHT_Pos           0                                              /**< (ISC_CBC_BRIGHT) Brightness Control (signed 11 bits 1:10:0) Position */
#define ISC_CBC_BRIGHT_BRIGHT_Msk           (_U_(0x7FF) << ISC_CBC_BRIGHT_BRIGHT_Pos)      /**< (ISC_CBC_BRIGHT) Brightness Control (signed 11 bits 1:10:0) Mask */
#define ISC_CBC_BRIGHT_BRIGHT(value)        (ISC_CBC_BRIGHT_BRIGHT_Msk & ((value) << ISC_CBC_BRIGHT_BRIGHT_Pos))
#define ISC_CBC_BRIGHT_MASK                 _U_(0x7FF)                                     /**< \deprecated (ISC_CBC_BRIGHT) Register MASK  (Use ISC_CBC_BRIGHT_Msk instead)  */
#define ISC_CBC_BRIGHT_Msk                  _U_(0x7FF)                                     /**< (ISC_CBC_BRIGHT) Register Mask  */


/* -------- ISC_CBC_CONTRAST : (ISC Offset: 0x3c0) (R/W 32) Contrast and Brightness, Contrast Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CONTRAST:12;               /**< bit:  0..11  Contrast (unsigned 12 bits 0:4:8)        */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_CBC_CONTRAST_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_CBC_CONTRAST_OFFSET             (0x3C0)                                       /**<  (ISC_CBC_CONTRAST) Contrast and Brightness, Contrast Register  Offset */

#define ISC_CBC_CONTRAST_CONTRAST_Pos       0                                              /**< (ISC_CBC_CONTRAST) Contrast (unsigned 12 bits 0:4:8) Position */
#define ISC_CBC_CONTRAST_CONTRAST_Msk       (_U_(0xFFF) << ISC_CBC_CONTRAST_CONTRAST_Pos)  /**< (ISC_CBC_CONTRAST) Contrast (unsigned 12 bits 0:4:8) Mask */
#define ISC_CBC_CONTRAST_CONTRAST(value)    (ISC_CBC_CONTRAST_CONTRAST_Msk & ((value) << ISC_CBC_CONTRAST_CONTRAST_Pos))
#define ISC_CBC_CONTRAST_MASK               _U_(0xFFF)                                     /**< \deprecated (ISC_CBC_CONTRAST) Register MASK  (Use ISC_CBC_CONTRAST_Msk instead)  */
#define ISC_CBC_CONTRAST_Msk                _U_(0xFFF)                                     /**< (ISC_CBC_CONTRAST) Register Mask  */


/* -------- ISC_SUB422_CTRL : (ISC Offset: 0x3c4) (R/W 32) Subsampling 4:4:4 to 4:2:2 Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ENABLE:1;                  /**< bit:      0  4:4:4 to 4:2:2 Chrominance Horizontal Subsampling Filter Enable */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_SUB422_CTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_SUB422_CTRL_OFFSET              (0x3C4)                                       /**<  (ISC_SUB422_CTRL) Subsampling 4:4:4 to 4:2:2 Control Register  Offset */

#define ISC_SUB422_CTRL_ENABLE_Pos          0                                              /**< (ISC_SUB422_CTRL) 4:4:4 to 4:2:2 Chrominance Horizontal Subsampling Filter Enable Position */
#define ISC_SUB422_CTRL_ENABLE_Msk          (_U_(0x1) << ISC_SUB422_CTRL_ENABLE_Pos)       /**< (ISC_SUB422_CTRL) 4:4:4 to 4:2:2 Chrominance Horizontal Subsampling Filter Enable Mask */
#define ISC_SUB422_CTRL_ENABLE              ISC_SUB422_CTRL_ENABLE_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_SUB422_CTRL_ENABLE_Msk instead */
#define ISC_SUB422_CTRL_MASK                _U_(0x01)                                      /**< \deprecated (ISC_SUB422_CTRL) Register MASK  (Use ISC_SUB422_CTRL_Msk instead)  */
#define ISC_SUB422_CTRL_Msk                 _U_(0x01)                                      /**< (ISC_SUB422_CTRL) Register Mask  */


/* -------- ISC_SUB422_CFG : (ISC Offset: 0x3c8) (R/W 32) Subsampling 4:4:4 to 4:2:2 Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CCIR:1;                    /**< bit:      0  CCIR656 Input Stream                     */
    uint32_t CCIRMODE:2;                /**< bit:   1..2  CCIR656 Byte Ordering                    */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t FILTER:2;                  /**< bit:   4..5  Low Pass Filter Selection                */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_SUB422_CFG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_SUB422_CFG_OFFSET               (0x3C8)                                       /**<  (ISC_SUB422_CFG) Subsampling 4:4:4 to 4:2:2 Configuration Register  Offset */

#define ISC_SUB422_CFG_CCIR_Pos             0                                              /**< (ISC_SUB422_CFG) CCIR656 Input Stream Position */
#define ISC_SUB422_CFG_CCIR_Msk             (_U_(0x1) << ISC_SUB422_CFG_CCIR_Pos)          /**< (ISC_SUB422_CFG) CCIR656 Input Stream Mask */
#define ISC_SUB422_CFG_CCIR                 ISC_SUB422_CFG_CCIR_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_SUB422_CFG_CCIR_Msk instead */
#define ISC_SUB422_CFG_CCIRMODE_Pos         1                                              /**< (ISC_SUB422_CFG) CCIR656 Byte Ordering Position */
#define ISC_SUB422_CFG_CCIRMODE_Msk         (_U_(0x3) << ISC_SUB422_CFG_CCIRMODE_Pos)      /**< (ISC_SUB422_CFG) CCIR656 Byte Ordering Mask */
#define ISC_SUB422_CFG_CCIRMODE(value)      (ISC_SUB422_CFG_CCIRMODE_Msk & ((value) << ISC_SUB422_CFG_CCIRMODE_Pos))
#define   ISC_SUB422_CFG_CCIRMODE_CBY_Val   _U_(0x0)                                       /**< (ISC_SUB422_CFG) Byte ordering Cb0, Y0, Cr0, Y1  */
#define   ISC_SUB422_CFG_CCIRMODE_CRY_Val   _U_(0x1)                                       /**< (ISC_SUB422_CFG) Byte ordering Cr0, Y0, Cb0, Y1  */
#define   ISC_SUB422_CFG_CCIRMODE_YCB_Val   _U_(0x2)                                       /**< (ISC_SUB422_CFG) Byte ordering Y0, Cb0, Y1, Cr0  */
#define   ISC_SUB422_CFG_CCIRMODE_YCR_Val   _U_(0x3)                                       /**< (ISC_SUB422_CFG) Byte ordering Y0, Cr0, Y1, Cb0  */
#define ISC_SUB422_CFG_CCIRMODE_CBY         (ISC_SUB422_CFG_CCIRMODE_CBY_Val << ISC_SUB422_CFG_CCIRMODE_Pos)  /**< (ISC_SUB422_CFG) Byte ordering Cb0, Y0, Cr0, Y1 Position  */
#define ISC_SUB422_CFG_CCIRMODE_CRY         (ISC_SUB422_CFG_CCIRMODE_CRY_Val << ISC_SUB422_CFG_CCIRMODE_Pos)  /**< (ISC_SUB422_CFG) Byte ordering Cr0, Y0, Cb0, Y1 Position  */
#define ISC_SUB422_CFG_CCIRMODE_YCB         (ISC_SUB422_CFG_CCIRMODE_YCB_Val << ISC_SUB422_CFG_CCIRMODE_Pos)  /**< (ISC_SUB422_CFG) Byte ordering Y0, Cb0, Y1, Cr0 Position  */
#define ISC_SUB422_CFG_CCIRMODE_YCR         (ISC_SUB422_CFG_CCIRMODE_YCR_Val << ISC_SUB422_CFG_CCIRMODE_Pos)  /**< (ISC_SUB422_CFG) Byte ordering Y0, Cr0, Y1, Cb0 Position  */
#define ISC_SUB422_CFG_FILTER_Pos           4                                              /**< (ISC_SUB422_CFG) Low Pass Filter Selection Position */
#define ISC_SUB422_CFG_FILTER_Msk           (_U_(0x3) << ISC_SUB422_CFG_FILTER_Pos)        /**< (ISC_SUB422_CFG) Low Pass Filter Selection Mask */
#define ISC_SUB422_CFG_FILTER(value)        (ISC_SUB422_CFG_FILTER_Msk & ((value) << ISC_SUB422_CFG_FILTER_Pos))
#define   ISC_SUB422_CFG_FILTER_FILT0CO_Val _U_(0x0)                                       /**< (ISC_SUB422_CFG) Cosited, {1}  */
#define   ISC_SUB422_CFG_FILTER_FILT1CE_Val _U_(0x1)                                       /**< (ISC_SUB422_CFG) Centered {1, 1}  */
#define   ISC_SUB422_CFG_FILTER_FILT2CO_Val _U_(0x2)                                       /**< (ISC_SUB422_CFG) Cosited {1,2,1}  */
#define   ISC_SUB422_CFG_FILTER_FILT3CE_Val _U_(0x3)                                       /**< (ISC_SUB422_CFG) Centered {1, 3, 3, 1}  */
#define ISC_SUB422_CFG_FILTER_FILT0CO       (ISC_SUB422_CFG_FILTER_FILT0CO_Val << ISC_SUB422_CFG_FILTER_Pos)  /**< (ISC_SUB422_CFG) Cosited, {1} Position  */
#define ISC_SUB422_CFG_FILTER_FILT1CE       (ISC_SUB422_CFG_FILTER_FILT1CE_Val << ISC_SUB422_CFG_FILTER_Pos)  /**< (ISC_SUB422_CFG) Centered {1, 1} Position  */
#define ISC_SUB422_CFG_FILTER_FILT2CO       (ISC_SUB422_CFG_FILTER_FILT2CO_Val << ISC_SUB422_CFG_FILTER_Pos)  /**< (ISC_SUB422_CFG) Cosited {1,2,1} Position  */
#define ISC_SUB422_CFG_FILTER_FILT3CE       (ISC_SUB422_CFG_FILTER_FILT3CE_Val << ISC_SUB422_CFG_FILTER_Pos)  /**< (ISC_SUB422_CFG) Centered {1, 3, 3, 1} Position  */
#define ISC_SUB422_CFG_MASK                 _U_(0x37)                                      /**< \deprecated (ISC_SUB422_CFG) Register MASK  (Use ISC_SUB422_CFG_Msk instead)  */
#define ISC_SUB422_CFG_Msk                  _U_(0x37)                                      /**< (ISC_SUB422_CFG) Register Mask  */


/* -------- ISC_SUB420_CTRL : (ISC Offset: 0x3cc) (R/W 32) Subsampling 4:2:2 to 4:2:0 Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ENABLE:1;                  /**< bit:      0  4:2:2 to 4:2:0 Vertical Subsampling Filter Enable (Center Aligned) */
    uint32_t :3;                        /**< bit:   1..3  Reserved */
    uint32_t FILTER:1;                  /**< bit:      4  Interlaced or Progressive Chrominance Filter */
    uint32_t :27;                       /**< bit:  5..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_SUB420_CTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_SUB420_CTRL_OFFSET              (0x3CC)                                       /**<  (ISC_SUB420_CTRL) Subsampling 4:2:2 to 4:2:0 Control Register  Offset */

#define ISC_SUB420_CTRL_ENABLE_Pos          0                                              /**< (ISC_SUB420_CTRL) 4:2:2 to 4:2:0 Vertical Subsampling Filter Enable (Center Aligned) Position */
#define ISC_SUB420_CTRL_ENABLE_Msk          (_U_(0x1) << ISC_SUB420_CTRL_ENABLE_Pos)       /**< (ISC_SUB420_CTRL) 4:2:2 to 4:2:0 Vertical Subsampling Filter Enable (Center Aligned) Mask */
#define ISC_SUB420_CTRL_ENABLE              ISC_SUB420_CTRL_ENABLE_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_SUB420_CTRL_ENABLE_Msk instead */
#define ISC_SUB420_CTRL_FILTER_Pos          4                                              /**< (ISC_SUB420_CTRL) Interlaced or Progressive Chrominance Filter Position */
#define ISC_SUB420_CTRL_FILTER_Msk          (_U_(0x1) << ISC_SUB420_CTRL_FILTER_Pos)       /**< (ISC_SUB420_CTRL) Interlaced or Progressive Chrominance Filter Mask */
#define ISC_SUB420_CTRL_FILTER              ISC_SUB420_CTRL_FILTER_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_SUB420_CTRL_FILTER_Msk instead */
#define ISC_SUB420_CTRL_MASK                _U_(0x11)                                      /**< \deprecated (ISC_SUB420_CTRL) Register MASK  (Use ISC_SUB420_CTRL_Msk instead)  */
#define ISC_SUB420_CTRL_Msk                 _U_(0x11)                                      /**< (ISC_SUB420_CTRL) Register Mask  */


/* -------- ISC_RLP_CFG : (ISC Offset: 0x3d0) (R/W 32) Rounding, Limiting and Packing Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MODE:4;                    /**< bit:   0..3  Rounding, Limiting and Packing Mode      */
    uint32_t :4;                        /**< bit:   4..7  Reserved */
    uint32_t ALPHA:8;                   /**< bit:  8..15  Alpha Value for Alpha-enabled RGB Mode   */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_RLP_CFG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_RLP_CFG_OFFSET                  (0x3D0)                                       /**<  (ISC_RLP_CFG) Rounding, Limiting and Packing Configuration Register  Offset */

#define ISC_RLP_CFG_MODE_Pos                0                                              /**< (ISC_RLP_CFG) Rounding, Limiting and Packing Mode Position */
#define ISC_RLP_CFG_MODE_Msk                (_U_(0xF) << ISC_RLP_CFG_MODE_Pos)             /**< (ISC_RLP_CFG) Rounding, Limiting and Packing Mode Mask */
#define ISC_RLP_CFG_MODE(value)             (ISC_RLP_CFG_MODE_Msk & ((value) << ISC_RLP_CFG_MODE_Pos))
#define   ISC_RLP_CFG_MODE_DAT8_Val         _U_(0x0)                                       /**< (ISC_RLP_CFG) 8-bit data  */
#define   ISC_RLP_CFG_MODE_DAT9_Val         _U_(0x1)                                       /**< (ISC_RLP_CFG) 9-bit data  */
#define   ISC_RLP_CFG_MODE_DAT10_Val        _U_(0x2)                                       /**< (ISC_RLP_CFG) 10-bit data  */
#define   ISC_RLP_CFG_MODE_DAT11_Val        _U_(0x3)                                       /**< (ISC_RLP_CFG) 11-bit data  */
#define   ISC_RLP_CFG_MODE_DAT12_Val        _U_(0x4)                                       /**< (ISC_RLP_CFG) 12-bit data  */
#define   ISC_RLP_CFG_MODE_DATY8_Val        _U_(0x5)                                       /**< (ISC_RLP_CFG) 8-bit luminance only  */
#define   ISC_RLP_CFG_MODE_DATY10_Val       _U_(0x6)                                       /**< (ISC_RLP_CFG) 10-bit luminance only  */
#define   ISC_RLP_CFG_MODE_ARGB444_Val      _U_(0x7)                                       /**< (ISC_RLP_CFG) 12-bit RGB+4-bit Alpha (MSB)  */
#define   ISC_RLP_CFG_MODE_ARGB555_Val      _U_(0x8)                                       /**< (ISC_RLP_CFG) 15-bit RGB+1-bit Alpha (MSB)  */
#define   ISC_RLP_CFG_MODE_RGB565_Val       _U_(0x9)                                       /**< (ISC_RLP_CFG) 16-bit RGB  */
#define   ISC_RLP_CFG_MODE_ARGB32_Val       _U_(0xA)                                       /**< (ISC_RLP_CFG) 24-bits RGB mode+8-bit Alpha  */
#define   ISC_RLP_CFG_MODE_YYCC_Val         _U_(0xB)                                       /**< (ISC_RLP_CFG) YCbCr mode (full range, [0-255])  */
#define   ISC_RLP_CFG_MODE_YYCC_LIMITED_Val _U_(0xC)                                       /**< (ISC_RLP_CFG) YCbCr mode (limited range)  */
#define ISC_RLP_CFG_MODE_DAT8               (ISC_RLP_CFG_MODE_DAT8_Val << ISC_RLP_CFG_MODE_Pos)  /**< (ISC_RLP_CFG) 8-bit data Position  */
#define ISC_RLP_CFG_MODE_DAT9               (ISC_RLP_CFG_MODE_DAT9_Val << ISC_RLP_CFG_MODE_Pos)  /**< (ISC_RLP_CFG) 9-bit data Position  */
#define ISC_RLP_CFG_MODE_DAT10              (ISC_RLP_CFG_MODE_DAT10_Val << ISC_RLP_CFG_MODE_Pos)  /**< (ISC_RLP_CFG) 10-bit data Position  */
#define ISC_RLP_CFG_MODE_DAT11              (ISC_RLP_CFG_MODE_DAT11_Val << ISC_RLP_CFG_MODE_Pos)  /**< (ISC_RLP_CFG) 11-bit data Position  */
#define ISC_RLP_CFG_MODE_DAT12              (ISC_RLP_CFG_MODE_DAT12_Val << ISC_RLP_CFG_MODE_Pos)  /**< (ISC_RLP_CFG) 12-bit data Position  */
#define ISC_RLP_CFG_MODE_DATY8              (ISC_RLP_CFG_MODE_DATY8_Val << ISC_RLP_CFG_MODE_Pos)  /**< (ISC_RLP_CFG) 8-bit luminance only Position  */
#define ISC_RLP_CFG_MODE_DATY10             (ISC_RLP_CFG_MODE_DATY10_Val << ISC_RLP_CFG_MODE_Pos)  /**< (ISC_RLP_CFG) 10-bit luminance only Position  */
#define ISC_RLP_CFG_MODE_ARGB444            (ISC_RLP_CFG_MODE_ARGB444_Val << ISC_RLP_CFG_MODE_Pos)  /**< (ISC_RLP_CFG) 12-bit RGB+4-bit Alpha (MSB) Position  */
#define ISC_RLP_CFG_MODE_ARGB555            (ISC_RLP_CFG_MODE_ARGB555_Val << ISC_RLP_CFG_MODE_Pos)  /**< (ISC_RLP_CFG) 15-bit RGB+1-bit Alpha (MSB) Position  */
#define ISC_RLP_CFG_MODE_RGB565             (ISC_RLP_CFG_MODE_RGB565_Val << ISC_RLP_CFG_MODE_Pos)  /**< (ISC_RLP_CFG) 16-bit RGB Position  */
#define ISC_RLP_CFG_MODE_ARGB32             (ISC_RLP_CFG_MODE_ARGB32_Val << ISC_RLP_CFG_MODE_Pos)  /**< (ISC_RLP_CFG) 24-bits RGB mode+8-bit Alpha Position  */
#define ISC_RLP_CFG_MODE_YYCC               (ISC_RLP_CFG_MODE_YYCC_Val << ISC_RLP_CFG_MODE_Pos)  /**< (ISC_RLP_CFG) YCbCr mode (full range, [0-255]) Position  */
#define ISC_RLP_CFG_MODE_YYCC_LIMITED       (ISC_RLP_CFG_MODE_YYCC_LIMITED_Val << ISC_RLP_CFG_MODE_Pos)  /**< (ISC_RLP_CFG) YCbCr mode (limited range) Position  */
#define ISC_RLP_CFG_ALPHA_Pos               8                                              /**< (ISC_RLP_CFG) Alpha Value for Alpha-enabled RGB Mode Position */
#define ISC_RLP_CFG_ALPHA_Msk               (_U_(0xFF) << ISC_RLP_CFG_ALPHA_Pos)           /**< (ISC_RLP_CFG) Alpha Value for Alpha-enabled RGB Mode Mask */
#define ISC_RLP_CFG_ALPHA(value)            (ISC_RLP_CFG_ALPHA_Msk & ((value) << ISC_RLP_CFG_ALPHA_Pos))
#define ISC_RLP_CFG_MASK                    _U_(0xFF0F)                                    /**< \deprecated (ISC_RLP_CFG) Register MASK  (Use ISC_RLP_CFG_Msk instead)  */
#define ISC_RLP_CFG_Msk                     _U_(0xFF0F)                                    /**< (ISC_RLP_CFG) Register Mask  */


/* -------- ISC_HIS_CTRL : (ISC Offset: 0x3d4) (R/W 32) Histogram Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ENABLE:1;                  /**< bit:      0  Histogram Sub Module Enable              */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_HIS_CTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_HIS_CTRL_OFFSET                 (0x3D4)                                       /**<  (ISC_HIS_CTRL) Histogram Control Register  Offset */

#define ISC_HIS_CTRL_ENABLE_Pos             0                                              /**< (ISC_HIS_CTRL) Histogram Sub Module Enable Position */
#define ISC_HIS_CTRL_ENABLE_Msk             (_U_(0x1) << ISC_HIS_CTRL_ENABLE_Pos)          /**< (ISC_HIS_CTRL) Histogram Sub Module Enable Mask */
#define ISC_HIS_CTRL_ENABLE                 ISC_HIS_CTRL_ENABLE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_HIS_CTRL_ENABLE_Msk instead */
#define ISC_HIS_CTRL_MASK                   _U_(0x01)                                      /**< \deprecated (ISC_HIS_CTRL) Register MASK  (Use ISC_HIS_CTRL_Msk instead)  */
#define ISC_HIS_CTRL_Msk                    _U_(0x01)                                      /**< (ISC_HIS_CTRL) Register Mask  */


/* -------- ISC_HIS_CFG : (ISC Offset: 0x3d8) (R/W 32) Histogram Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MODE:3;                    /**< bit:   0..2  Histogram Operating Mode                 */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t BAYSEL:2;                  /**< bit:   4..5  Bayer Color Component Selection          */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t RAR:1;                     /**< bit:      8  Histogram Reset After Read               */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_HIS_CFG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_HIS_CFG_OFFSET                  (0x3D8)                                       /**<  (ISC_HIS_CFG) Histogram Configuration Register  Offset */

#define ISC_HIS_CFG_MODE_Pos                0                                              /**< (ISC_HIS_CFG) Histogram Operating Mode Position */
#define ISC_HIS_CFG_MODE_Msk                (_U_(0x7) << ISC_HIS_CFG_MODE_Pos)             /**< (ISC_HIS_CFG) Histogram Operating Mode Mask */
#define ISC_HIS_CFG_MODE(value)             (ISC_HIS_CFG_MODE_Msk & ((value) << ISC_HIS_CFG_MODE_Pos))
#define   ISC_HIS_CFG_MODE_Gr_Val           _U_(0x0)                                       /**< (ISC_HIS_CFG) Gr sampling  */
#define   ISC_HIS_CFG_MODE_R_Val            _U_(0x1)                                       /**< (ISC_HIS_CFG) R sampling  */
#define   ISC_HIS_CFG_MODE_Gb_Val           _U_(0x2)                                       /**< (ISC_HIS_CFG) Gb sampling  */
#define   ISC_HIS_CFG_MODE_B_Val            _U_(0x3)                                       /**< (ISC_HIS_CFG) B sampling  */
#define   ISC_HIS_CFG_MODE_Y_Val            _U_(0x4)                                       /**< (ISC_HIS_CFG) Luminance-only mode  */
#define   ISC_HIS_CFG_MODE_RAW_Val          _U_(0x5)                                       /**< (ISC_HIS_CFG) Raw sampling  */
#define   ISC_HIS_CFG_MODE_YCCIR656_Val     _U_(0x6)                                       /**< (ISC_HIS_CFG) Luminance only with CCIR656 10-bit or 8-bit mode  */
#define ISC_HIS_CFG_MODE_Gr                 (ISC_HIS_CFG_MODE_Gr_Val << ISC_HIS_CFG_MODE_Pos)  /**< (ISC_HIS_CFG) Gr sampling Position  */
#define ISC_HIS_CFG_MODE_R                  (ISC_HIS_CFG_MODE_R_Val << ISC_HIS_CFG_MODE_Pos)  /**< (ISC_HIS_CFG) R sampling Position  */
#define ISC_HIS_CFG_MODE_Gb                 (ISC_HIS_CFG_MODE_Gb_Val << ISC_HIS_CFG_MODE_Pos)  /**< (ISC_HIS_CFG) Gb sampling Position  */
#define ISC_HIS_CFG_MODE_B                  (ISC_HIS_CFG_MODE_B_Val << ISC_HIS_CFG_MODE_Pos)  /**< (ISC_HIS_CFG) B sampling Position  */
#define ISC_HIS_CFG_MODE_Y                  (ISC_HIS_CFG_MODE_Y_Val << ISC_HIS_CFG_MODE_Pos)  /**< (ISC_HIS_CFG) Luminance-only mode Position  */
#define ISC_HIS_CFG_MODE_RAW                (ISC_HIS_CFG_MODE_RAW_Val << ISC_HIS_CFG_MODE_Pos)  /**< (ISC_HIS_CFG) Raw sampling Position  */
#define ISC_HIS_CFG_MODE_YCCIR656           (ISC_HIS_CFG_MODE_YCCIR656_Val << ISC_HIS_CFG_MODE_Pos)  /**< (ISC_HIS_CFG) Luminance only with CCIR656 10-bit or 8-bit mode Position  */
#define ISC_HIS_CFG_BAYSEL_Pos              4                                              /**< (ISC_HIS_CFG) Bayer Color Component Selection Position */
#define ISC_HIS_CFG_BAYSEL_Msk              (_U_(0x3) << ISC_HIS_CFG_BAYSEL_Pos)           /**< (ISC_HIS_CFG) Bayer Color Component Selection Mask */
#define ISC_HIS_CFG_BAYSEL(value)           (ISC_HIS_CFG_BAYSEL_Msk & ((value) << ISC_HIS_CFG_BAYSEL_Pos))
#define   ISC_HIS_CFG_BAYSEL_GRGR_Val       _U_(0x0)                                       /**< (ISC_HIS_CFG) Starting row configuration is G R G R (red row)  */
#define   ISC_HIS_CFG_BAYSEL_RGRG_Val       _U_(0x1)                                       /**< (ISC_HIS_CFG) Starting row configuration is R G R G (red row)  */
#define   ISC_HIS_CFG_BAYSEL_GBGB_Val       _U_(0x2)                                       /**< (ISC_HIS_CFG) Starting row configuration is G B G B (blue row  */
#define   ISC_HIS_CFG_BAYSEL_BGBG_Val       _U_(0x3)                                       /**< (ISC_HIS_CFG) Starting row configuration is B G B G (blue row)  */
#define ISC_HIS_CFG_BAYSEL_GRGR             (ISC_HIS_CFG_BAYSEL_GRGR_Val << ISC_HIS_CFG_BAYSEL_Pos)  /**< (ISC_HIS_CFG) Starting row configuration is G R G R (red row) Position  */
#define ISC_HIS_CFG_BAYSEL_RGRG             (ISC_HIS_CFG_BAYSEL_RGRG_Val << ISC_HIS_CFG_BAYSEL_Pos)  /**< (ISC_HIS_CFG) Starting row configuration is R G R G (red row) Position  */
#define ISC_HIS_CFG_BAYSEL_GBGB             (ISC_HIS_CFG_BAYSEL_GBGB_Val << ISC_HIS_CFG_BAYSEL_Pos)  /**< (ISC_HIS_CFG) Starting row configuration is G B G B (blue row Position  */
#define ISC_HIS_CFG_BAYSEL_BGBG             (ISC_HIS_CFG_BAYSEL_BGBG_Val << ISC_HIS_CFG_BAYSEL_Pos)  /**< (ISC_HIS_CFG) Starting row configuration is B G B G (blue row) Position  */
#define ISC_HIS_CFG_RAR_Pos                 8                                              /**< (ISC_HIS_CFG) Histogram Reset After Read Position */
#define ISC_HIS_CFG_RAR_Msk                 (_U_(0x1) << ISC_HIS_CFG_RAR_Pos)              /**< (ISC_HIS_CFG) Histogram Reset After Read Mask */
#define ISC_HIS_CFG_RAR                     ISC_HIS_CFG_RAR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_HIS_CFG_RAR_Msk instead */
#define ISC_HIS_CFG_MASK                    _U_(0x137)                                     /**< \deprecated (ISC_HIS_CFG) Register MASK  (Use ISC_HIS_CFG_Msk instead)  */
#define ISC_HIS_CFG_Msk                     _U_(0x137)                                     /**< (ISC_HIS_CFG) Register Mask  */


/* -------- ISC_DCFG : (ISC Offset: 0x3e0) (R/W 32) DMA Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t IMODE:3;                   /**< bit:   0..2  DMA Input Mode Selection                 */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t YMBSIZE:2;                 /**< bit:   4..5  DMA Memory Burst Size Y channel          */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t CMBSIZE:2;                 /**< bit:   8..9  DMA Memory Burst Size C channel          */
    uint32_t :22;                       /**< bit: 10..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_DCFG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_DCFG_OFFSET                     (0x3E0)                                       /**<  (ISC_DCFG) DMA Configuration Register  Offset */

#define ISC_DCFG_IMODE_Pos                  0                                              /**< (ISC_DCFG) DMA Input Mode Selection Position */
#define ISC_DCFG_IMODE_Msk                  (_U_(0x7) << ISC_DCFG_IMODE_Pos)               /**< (ISC_DCFG) DMA Input Mode Selection Mask */
#define ISC_DCFG_IMODE(value)               (ISC_DCFG_IMODE_Msk & ((value) << ISC_DCFG_IMODE_Pos))
#define   ISC_DCFG_IMODE_PACKED8_Val        _U_(0x0)                                       /**< (ISC_DCFG) 8 bits, single channel packed  */
#define   ISC_DCFG_IMODE_PACKED16_Val       _U_(0x1)                                       /**< (ISC_DCFG) 16 bits, single channel packed  */
#define   ISC_DCFG_IMODE_PACKED32_Val       _U_(0x2)                                       /**< (ISC_DCFG) 32 bits, single channel packed  */
#define   ISC_DCFG_IMODE_YC422SP_Val        _U_(0x3)                                       /**< (ISC_DCFG) 32 bits, dual channel  */
#define   ISC_DCFG_IMODE_YC422P_Val         _U_(0x4)                                       /**< (ISC_DCFG) 32 bits, triple channel  */
#define   ISC_DCFG_IMODE_YC420SP_Val        _U_(0x5)                                       /**< (ISC_DCFG) 32 bits, dual channel  */
#define   ISC_DCFG_IMODE_YC420P_Val         _U_(0x6)                                       /**< (ISC_DCFG) 32 bits, triple channel  */
#define ISC_DCFG_IMODE_PACKED8              (ISC_DCFG_IMODE_PACKED8_Val << ISC_DCFG_IMODE_Pos)  /**< (ISC_DCFG) 8 bits, single channel packed Position  */
#define ISC_DCFG_IMODE_PACKED16             (ISC_DCFG_IMODE_PACKED16_Val << ISC_DCFG_IMODE_Pos)  /**< (ISC_DCFG) 16 bits, single channel packed Position  */
#define ISC_DCFG_IMODE_PACKED32             (ISC_DCFG_IMODE_PACKED32_Val << ISC_DCFG_IMODE_Pos)  /**< (ISC_DCFG) 32 bits, single channel packed Position  */
#define ISC_DCFG_IMODE_YC422SP              (ISC_DCFG_IMODE_YC422SP_Val << ISC_DCFG_IMODE_Pos)  /**< (ISC_DCFG) 32 bits, dual channel Position  */
#define ISC_DCFG_IMODE_YC422P               (ISC_DCFG_IMODE_YC422P_Val << ISC_DCFG_IMODE_Pos)  /**< (ISC_DCFG) 32 bits, triple channel Position  */
#define ISC_DCFG_IMODE_YC420SP              (ISC_DCFG_IMODE_YC420SP_Val << ISC_DCFG_IMODE_Pos)  /**< (ISC_DCFG) 32 bits, dual channel Position  */
#define ISC_DCFG_IMODE_YC420P               (ISC_DCFG_IMODE_YC420P_Val << ISC_DCFG_IMODE_Pos)  /**< (ISC_DCFG) 32 bits, triple channel Position  */
#define ISC_DCFG_YMBSIZE_Pos                4                                              /**< (ISC_DCFG) DMA Memory Burst Size Y channel Position */
#define ISC_DCFG_YMBSIZE_Msk                (_U_(0x3) << ISC_DCFG_YMBSIZE_Pos)             /**< (ISC_DCFG) DMA Memory Burst Size Y channel Mask */
#define ISC_DCFG_YMBSIZE(value)             (ISC_DCFG_YMBSIZE_Msk & ((value) << ISC_DCFG_YMBSIZE_Pos))
#define   ISC_DCFG_YMBSIZE_SINGLE_Val       _U_(0x0)                                       /**< (ISC_DCFG) DMA single access  */
#define   ISC_DCFG_YMBSIZE_BEATS4_Val       _U_(0x1)                                       /**< (ISC_DCFG) 4-beat burst access  */
#define   ISC_DCFG_YMBSIZE_BEATS8_Val       _U_(0x2)                                       /**< (ISC_DCFG) 8-beat burst access  */
#define   ISC_DCFG_YMBSIZE_BEATS16_Val      _U_(0x3)                                       /**< (ISC_DCFG) 16-beat burst access  */
#define ISC_DCFG_YMBSIZE_SINGLE             (ISC_DCFG_YMBSIZE_SINGLE_Val << ISC_DCFG_YMBSIZE_Pos)  /**< (ISC_DCFG) DMA single access Position  */
#define ISC_DCFG_YMBSIZE_BEATS4             (ISC_DCFG_YMBSIZE_BEATS4_Val << ISC_DCFG_YMBSIZE_Pos)  /**< (ISC_DCFG) 4-beat burst access Position  */
#define ISC_DCFG_YMBSIZE_BEATS8             (ISC_DCFG_YMBSIZE_BEATS8_Val << ISC_DCFG_YMBSIZE_Pos)  /**< (ISC_DCFG) 8-beat burst access Position  */
#define ISC_DCFG_YMBSIZE_BEATS16            (ISC_DCFG_YMBSIZE_BEATS16_Val << ISC_DCFG_YMBSIZE_Pos)  /**< (ISC_DCFG) 16-beat burst access Position  */
#define ISC_DCFG_CMBSIZE_Pos                8                                              /**< (ISC_DCFG) DMA Memory Burst Size C channel Position */
#define ISC_DCFG_CMBSIZE_Msk                (_U_(0x3) << ISC_DCFG_CMBSIZE_Pos)             /**< (ISC_DCFG) DMA Memory Burst Size C channel Mask */
#define ISC_DCFG_CMBSIZE(value)             (ISC_DCFG_CMBSIZE_Msk & ((value) << ISC_DCFG_CMBSIZE_Pos))
#define   ISC_DCFG_CMBSIZE_SINGLE_Val       _U_(0x0)                                       /**< (ISC_DCFG) DMA single access  */
#define   ISC_DCFG_CMBSIZE_BEATS4_Val       _U_(0x1)                                       /**< (ISC_DCFG) 4-beat burst access  */
#define   ISC_DCFG_CMBSIZE_BEATS8_Val       _U_(0x2)                                       /**< (ISC_DCFG) 8-beat burst access  */
#define   ISC_DCFG_CMBSIZE_BEATS16_Val      _U_(0x3)                                       /**< (ISC_DCFG) 16-beat burst access  */
#define ISC_DCFG_CMBSIZE_SINGLE             (ISC_DCFG_CMBSIZE_SINGLE_Val << ISC_DCFG_CMBSIZE_Pos)  /**< (ISC_DCFG) DMA single access Position  */
#define ISC_DCFG_CMBSIZE_BEATS4             (ISC_DCFG_CMBSIZE_BEATS4_Val << ISC_DCFG_CMBSIZE_Pos)  /**< (ISC_DCFG) 4-beat burst access Position  */
#define ISC_DCFG_CMBSIZE_BEATS8             (ISC_DCFG_CMBSIZE_BEATS8_Val << ISC_DCFG_CMBSIZE_Pos)  /**< (ISC_DCFG) 8-beat burst access Position  */
#define ISC_DCFG_CMBSIZE_BEATS16            (ISC_DCFG_CMBSIZE_BEATS16_Val << ISC_DCFG_CMBSIZE_Pos)  /**< (ISC_DCFG) 16-beat burst access Position  */
#define ISC_DCFG_MASK                       _U_(0x337)                                     /**< \deprecated (ISC_DCFG) Register MASK  (Use ISC_DCFG_Msk instead)  */
#define ISC_DCFG_Msk                        _U_(0x337)                                     /**< (ISC_DCFG) Register Mask  */


/* -------- ISC_DCTRL : (ISC Offset: 0x3e4) (R/W 32) DMA Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DE:1;                      /**< bit:      0  Descriptor Enable                        */
    uint32_t DVIEW:2;                   /**< bit:   1..2  Descriptor View                          */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t IE:1;                      /**< bit:      4  Interrupt Enable                         */
    uint32_t WB:1;                      /**< bit:      5  Write Back Operation Enable              */
    uint32_t FIELD:1;                   /**< bit:      6  Value of Captured Frame Field Signal(1)(2) */
    uint32_t DONE:1;                    /**< bit:      7  Descriptor Processing Status(2)          */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_DCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_DCTRL_OFFSET                    (0x3E4)                                       /**<  (ISC_DCTRL) DMA Control Register  Offset */

#define ISC_DCTRL_DE_Pos                    0                                              /**< (ISC_DCTRL) Descriptor Enable Position */
#define ISC_DCTRL_DE_Msk                    (_U_(0x1) << ISC_DCTRL_DE_Pos)                 /**< (ISC_DCTRL) Descriptor Enable Mask */
#define ISC_DCTRL_DE                        ISC_DCTRL_DE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_DCTRL_DE_Msk instead */
#define ISC_DCTRL_DVIEW_Pos                 1                                              /**< (ISC_DCTRL) Descriptor View Position */
#define ISC_DCTRL_DVIEW_Msk                 (_U_(0x3) << ISC_DCTRL_DVIEW_Pos)              /**< (ISC_DCTRL) Descriptor View Mask */
#define ISC_DCTRL_DVIEW(value)              (ISC_DCTRL_DVIEW_Msk & ((value) << ISC_DCTRL_DVIEW_Pos))
#define   ISC_DCTRL_DVIEW_PACKED_Val        _U_(0x0)                                       /**< (ISC_DCTRL) Address {0} Stride {0} are updated  */
#define   ISC_DCTRL_DVIEW_SEMIPLANAR_Val    _U_(0x1)                                       /**< (ISC_DCTRL) Address {0,1} Stride {0,1} are updated  */
#define   ISC_DCTRL_DVIEW_PLANAR_Val        _U_(0x2)                                       /**< (ISC_DCTRL) Address {0,1,2} Stride {0,1,2} are updated  */
#define ISC_DCTRL_DVIEW_PACKED              (ISC_DCTRL_DVIEW_PACKED_Val << ISC_DCTRL_DVIEW_Pos)  /**< (ISC_DCTRL) Address {0} Stride {0} are updated Position  */
#define ISC_DCTRL_DVIEW_SEMIPLANAR          (ISC_DCTRL_DVIEW_SEMIPLANAR_Val << ISC_DCTRL_DVIEW_Pos)  /**< (ISC_DCTRL) Address {0,1} Stride {0,1} are updated Position  */
#define ISC_DCTRL_DVIEW_PLANAR              (ISC_DCTRL_DVIEW_PLANAR_Val << ISC_DCTRL_DVIEW_Pos)  /**< (ISC_DCTRL) Address {0,1,2} Stride {0,1,2} are updated Position  */
#define ISC_DCTRL_IE_Pos                    4                                              /**< (ISC_DCTRL) Interrupt Enable Position */
#define ISC_DCTRL_IE_Msk                    (_U_(0x1) << ISC_DCTRL_IE_Pos)                 /**< (ISC_DCTRL) Interrupt Enable Mask */
#define ISC_DCTRL_IE                        ISC_DCTRL_IE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_DCTRL_IE_Msk instead */
#define ISC_DCTRL_WB_Pos                    5                                              /**< (ISC_DCTRL) Write Back Operation Enable Position */
#define ISC_DCTRL_WB_Msk                    (_U_(0x1) << ISC_DCTRL_WB_Pos)                 /**< (ISC_DCTRL) Write Back Operation Enable Mask */
#define ISC_DCTRL_WB                        ISC_DCTRL_WB_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_DCTRL_WB_Msk instead */
#define ISC_DCTRL_FIELD_Pos                 6                                              /**< (ISC_DCTRL) Value of Captured Frame Field Signal(1)(2) Position */
#define ISC_DCTRL_FIELD_Msk                 (_U_(0x1) << ISC_DCTRL_FIELD_Pos)              /**< (ISC_DCTRL) Value of Captured Frame Field Signal(1)(2) Mask */
#define ISC_DCTRL_FIELD                     ISC_DCTRL_FIELD_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_DCTRL_FIELD_Msk instead */
#define ISC_DCTRL_DONE_Pos                  7                                              /**< (ISC_DCTRL) Descriptor Processing Status(2) Position */
#define ISC_DCTRL_DONE_Msk                  (_U_(0x1) << ISC_DCTRL_DONE_Pos)               /**< (ISC_DCTRL) Descriptor Processing Status(2) Mask */
#define ISC_DCTRL_DONE                      ISC_DCTRL_DONE_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ISC_DCTRL_DONE_Msk instead */
#define ISC_DCTRL_MASK                      _U_(0xF7)                                      /**< \deprecated (ISC_DCTRL) Register MASK  (Use ISC_DCTRL_Msk instead)  */
#define ISC_DCTRL_Msk                       _U_(0xF7)                                      /**< (ISC_DCTRL) Register Mask  */


/* -------- ISC_DNDA : (ISC Offset: 0x3e8) (R/W 32) DMA Descriptor Address Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t NDA:30;                    /**< bit:  2..31  Next Descriptor Address Register         */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_DNDA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_DNDA_OFFSET                     (0x3E8)                                       /**<  (ISC_DNDA) DMA Descriptor Address Register  Offset */

#define ISC_DNDA_NDA_Pos                    2                                              /**< (ISC_DNDA) Next Descriptor Address Register Position */
#define ISC_DNDA_NDA_Msk                    (_U_(0x3FFFFFFF) << ISC_DNDA_NDA_Pos)          /**< (ISC_DNDA) Next Descriptor Address Register Mask */
#define ISC_DNDA_NDA(value)                 (ISC_DNDA_NDA_Msk & ((value) << ISC_DNDA_NDA_Pos))
#define ISC_DNDA_MASK                       _U_(0xFFFFFFFC)                                /**< \deprecated (ISC_DNDA) Register MASK  (Use ISC_DNDA_Msk instead)  */
#define ISC_DNDA_Msk                        _U_(0xFFFFFFFC)                                /**< (ISC_DNDA) Register Mask  */


/* -------- ISC_HIS_ENTRY : (ISC Offset: 0x410) (R/ 32) Histogram Entry -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t COUNT:20;                  /**< bit:  0..19  Entry Counter                            */
    uint32_t :12;                       /**< bit: 20..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ISC_HIS_ENTRY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ISC_HIS_ENTRY_OFFSET                (0x410)                                       /**<  (ISC_HIS_ENTRY) Histogram Entry  Offset */

#define ISC_HIS_ENTRY_COUNT_Pos             0                                              /**< (ISC_HIS_ENTRY) Entry Counter Position */
#define ISC_HIS_ENTRY_COUNT_Msk             (_U_(0xFFFFF) << ISC_HIS_ENTRY_COUNT_Pos)      /**< (ISC_HIS_ENTRY) Entry Counter Mask */
#define ISC_HIS_ENTRY_COUNT(value)          (ISC_HIS_ENTRY_COUNT_Msk & ((value) << ISC_HIS_ENTRY_COUNT_Pos))
#define ISC_HIS_ENTRY_MASK                  _U_(0xFFFFF)                                   /**< \deprecated (ISC_HIS_ENTRY) Register MASK  (Use ISC_HIS_ENTRY_Msk instead)  */
#define ISC_HIS_ENTRY_Msk                   _U_(0xFFFFF)                                   /**< (ISC_HIS_ENTRY) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief ISC_SUB0 hardware registers */
typedef struct {  
  __IO uint32_t ISC_DAD;        /**< (ISC_SUB0 Offset: 0x00) DMA Address 0 Register */
  __IO uint32_t ISC_DST;        /**< (ISC_SUB0 Offset: 0x04) DMA Stride 0 Register */
} IscSub0;

#define ISCSUB0_NUMBER 3
/** \brief ISC hardware registers */
typedef struct {  
  __O  uint32_t ISC_CTRLEN;     /**< (ISC Offset: 0x00) Control Enable Register */
  __O  uint32_t ISC_CTRLDIS;    /**< (ISC Offset: 0x04) Control Disable Register */
  __I  uint32_t ISC_CTRLSR;     /**< (ISC Offset: 0x08) Control Status Register */
  __IO uint32_t ISC_PFE_CFG0;   /**< (ISC Offset: 0x0C) Parallel Front End Configuration 0 Register */
  __IO uint32_t ISC_PFE_CFG1;   /**< (ISC Offset: 0x10) Parallel Front End Configuration 1 Register */
  __IO uint32_t ISC_PFE_CFG2;   /**< (ISC Offset: 0x14) Parallel Front End Configuration 2 Register */
  __O  uint32_t ISC_CLKEN;      /**< (ISC Offset: 0x18) Clock Enable Register */
  __O  uint32_t ISC_CLKDIS;     /**< (ISC Offset: 0x1C) Clock Disable Register */
  __I  uint32_t ISC_CLKSR;      /**< (ISC Offset: 0x20) Clock Status Register */
  __IO uint32_t ISC_CLKCFG;     /**< (ISC Offset: 0x24) Clock Configuration Register */
  __O  uint32_t ISC_INTEN;      /**< (ISC Offset: 0x28) Interrupt Enable Register */
  __O  uint32_t ISC_INTDIS;     /**< (ISC Offset: 0x2C) Interrupt Disable Register */
  __I  uint32_t ISC_INTMASK;    /**< (ISC Offset: 0x30) Interrupt Mask Register */
  __I  uint32_t ISC_INTSR;      /**< (ISC Offset: 0x34) Interrupt Status Register */
  __I  uint8_t                        Reserved1[32];
  __IO uint32_t ISC_WB_CTRL;    /**< (ISC Offset: 0x58) White Balance Control Register */
  __IO uint32_t ISC_WB_CFG;     /**< (ISC Offset: 0x5C) White Balance Configuration Register */
  __IO uint32_t ISC_WB_O_RGR;   /**< (ISC Offset: 0x60) White Balance Offset for R, GR Register */
  __IO uint32_t ISC_WB_O_BGB;   /**< (ISC Offset: 0x64) White Balance Offset for B, GB Register */
  __IO uint32_t ISC_WB_G_RGR;   /**< (ISC Offset: 0x68) White Balance Gain for R, GR Register */
  __IO uint32_t ISC_WB_G_BGB;   /**< (ISC Offset: 0x6C) White Balance Gain for B, GB Register */
  __IO uint32_t ISC_CFA_CTRL;   /**< (ISC Offset: 0x70) Color Filter Array Control Register */
  __IO uint32_t ISC_CFA_CFG;    /**< (ISC Offset: 0x74) Color Filter Array Configuration Register */
  __IO uint32_t ISC_CC_CTRL;    /**< (ISC Offset: 0x78) Color Correction Control Register */
  __IO uint32_t ISC_CC_RR_RG;   /**< (ISC Offset: 0x7C) Color Correction RR RG Register */
  __IO uint32_t ISC_CC_RB_OR;   /**< (ISC Offset: 0x80) Color Correction RB OR Register */
  __IO uint32_t ISC_CC_GR_GG;   /**< (ISC Offset: 0x84) Color Correction GR GG Register */
  __IO uint32_t ISC_CC_GB_OG;   /**< (ISC Offset: 0x88) Color Correction GB OG Register */
  __IO uint32_t ISC_CC_BR_BG;   /**< (ISC Offset: 0x8C) Color Correction BR BG Register */
  __IO uint32_t ISC_CC_BB_OB;   /**< (ISC Offset: 0x90) Color Correction BB OB Register */
  __IO uint32_t ISC_GAM_CTRL;   /**< (ISC Offset: 0x94) Gamma Correction Control Register */
  __IO uint32_t ISC_GAM_BENTRY[64]; /**< (ISC Offset: 0x98) Gamma Correction Blue Entry */
  __IO uint32_t ISC_GAM_GENTRY[64]; /**< (ISC Offset: 0x198) Gamma Correction Green Entry */
  __IO uint32_t ISC_GAM_RENTRY[64]; /**< (ISC Offset: 0x298) Gamma Correction Red Entry */
  __IO uint32_t ISC_CSC_CTRL;   /**< (ISC Offset: 0x398) Color Space Conversion Control Register */
  __IO uint32_t ISC_CSC_YR_YG;  /**< (ISC Offset: 0x39C) Color Space Conversion YR, YG Register */
  __IO uint32_t ISC_CSC_YB_OY;  /**< (ISC Offset: 0x3A0) Color Space Conversion YB, OY Register */
  __IO uint32_t ISC_CSC_CBR_CBG; /**< (ISC Offset: 0x3A4) Color Space Conversion CBR CBG Register */
  __IO uint32_t ISC_CSC_CBB_OCB; /**< (ISC Offset: 0x3A8) Color Space Conversion CBB OCB Register */
  __IO uint32_t ISC_CSC_CRR_CRG; /**< (ISC Offset: 0x3AC) Color Space Conversion CRR CRG Register */
  __IO uint32_t ISC_CSC_CRB_OCR; /**< (ISC Offset: 0x3B0) Color Space Conversion CRB OCR Register */
  __IO uint32_t ISC_CBC_CTRL;   /**< (ISC Offset: 0x3B4) Contrast and Brightness Control Register */
  __IO uint32_t ISC_CBC_CFG;    /**< (ISC Offset: 0x3B8) Contrast and Brightness Configuration Register */
  __IO uint32_t ISC_CBC_BRIGHT; /**< (ISC Offset: 0x3BC) Contrast and Brightness, Brightness Register */
  __IO uint32_t ISC_CBC_CONTRAST; /**< (ISC Offset: 0x3C0) Contrast and Brightness, Contrast Register */
  __IO uint32_t ISC_SUB422_CTRL; /**< (ISC Offset: 0x3C4) Subsampling 4:4:4 to 4:2:2 Control Register */
  __IO uint32_t ISC_SUB422_CFG; /**< (ISC Offset: 0x3C8) Subsampling 4:4:4 to 4:2:2 Configuration Register */
  __IO uint32_t ISC_SUB420_CTRL; /**< (ISC Offset: 0x3CC) Subsampling 4:2:2 to 4:2:0 Control Register */
  __IO uint32_t ISC_RLP_CFG;    /**< (ISC Offset: 0x3D0) Rounding, Limiting and Packing Configuration Register */
  __IO uint32_t ISC_HIS_CTRL;   /**< (ISC Offset: 0x3D4) Histogram Control Register */
  __IO uint32_t ISC_HIS_CFG;    /**< (ISC Offset: 0x3D8) Histogram Configuration Register */
  __I  uint8_t                        Reserved2[4];
  __IO uint32_t ISC_DCFG;       /**< (ISC Offset: 0x3E0) DMA Configuration Register */
  __IO uint32_t ISC_DCTRL;      /**< (ISC Offset: 0x3E4) DMA Control Register */
  __IO uint32_t ISC_DNDA;       /**< (ISC Offset: 0x3E8) DMA Descriptor Address Register */
       IscSub0  IscSub0[ISCSUB0_NUMBER]; /**< Offset: 0x3EC  */
  __I  uint8_t                        Reserved3[12];
  __I  uint32_t ISC_HIS_ENTRY[512]; /**< (ISC Offset: 0x410) Histogram Entry */
} Isc;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief ISC_SUB0 hardware registers */
typedef struct {  
  __IO ISC_DAD_Type                   ISC_DAD;        /**< Offset: 0x00 (R/W  32) DMA Address 0 Register */
  __IO ISC_DST_Type                   ISC_DST;        /**< Offset: 0x04 (R/W  32) DMA Stride 0 Register */
} IscSub0;

/** \brief ISC hardware registers */
typedef struct {  
  __O  ISC_CTRLEN_Type                ISC_CTRLEN;     /**< Offset: 0x00 ( /W  32) Control Enable Register */
  __O  ISC_CTRLDIS_Type               ISC_CTRLDIS;    /**< Offset: 0x04 ( /W  32) Control Disable Register */
  __I  ISC_CTRLSR_Type                ISC_CTRLSR;     /**< Offset: 0x08 (R/   32) Control Status Register */
  __IO ISC_PFE_CFG0_Type              ISC_PFE_CFG0;   /**< Offset: 0x0C (R/W  32) Parallel Front End Configuration 0 Register */
  __IO ISC_PFE_CFG1_Type              ISC_PFE_CFG1;   /**< Offset: 0x10 (R/W  32) Parallel Front End Configuration 1 Register */
  __IO ISC_PFE_CFG2_Type              ISC_PFE_CFG2;   /**< Offset: 0x14 (R/W  32) Parallel Front End Configuration 2 Register */
  __O  ISC_CLKEN_Type                 ISC_CLKEN;      /**< Offset: 0x18 ( /W  32) Clock Enable Register */
  __O  ISC_CLKDIS_Type                ISC_CLKDIS;     /**< Offset: 0x1C ( /W  32) Clock Disable Register */
  __I  ISC_CLKSR_Type                 ISC_CLKSR;      /**< Offset: 0x20 (R/   32) Clock Status Register */
  __IO ISC_CLKCFG_Type                ISC_CLKCFG;     /**< Offset: 0x24 (R/W  32) Clock Configuration Register */
  __O  ISC_INTEN_Type                 ISC_INTEN;      /**< Offset: 0x28 ( /W  32) Interrupt Enable Register */
  __O  ISC_INTDIS_Type                ISC_INTDIS;     /**< Offset: 0x2C ( /W  32) Interrupt Disable Register */
  __I  ISC_INTMASK_Type               ISC_INTMASK;    /**< Offset: 0x30 (R/   32) Interrupt Mask Register */
  __I  ISC_INTSR_Type                 ISC_INTSR;      /**< Offset: 0x34 (R/   32) Interrupt Status Register */
  __I  uint8_t                        Reserved1[32];
  __IO ISC_WB_CTRL_Type               ISC_WB_CTRL;    /**< Offset: 0x58 (R/W  32) White Balance Control Register */
  __IO ISC_WB_CFG_Type                ISC_WB_CFG;     /**< Offset: 0x5C (R/W  32) White Balance Configuration Register */
  __IO ISC_WB_O_RGR_Type              ISC_WB_O_RGR;   /**< Offset: 0x60 (R/W  32) White Balance Offset for R, GR Register */
  __IO ISC_WB_O_BGB_Type              ISC_WB_O_BGB;   /**< Offset: 0x64 (R/W  32) White Balance Offset for B, GB Register */
  __IO ISC_WB_G_RGR_Type              ISC_WB_G_RGR;   /**< Offset: 0x68 (R/W  32) White Balance Gain for R, GR Register */
  __IO ISC_WB_G_BGB_Type              ISC_WB_G_BGB;   /**< Offset: 0x6C (R/W  32) White Balance Gain for B, GB Register */
  __IO ISC_CFA_CTRL_Type              ISC_CFA_CTRL;   /**< Offset: 0x70 (R/W  32) Color Filter Array Control Register */
  __IO ISC_CFA_CFG_Type               ISC_CFA_CFG;    /**< Offset: 0x74 (R/W  32) Color Filter Array Configuration Register */
  __IO ISC_CC_CTRL_Type               ISC_CC_CTRL;    /**< Offset: 0x78 (R/W  32) Color Correction Control Register */
  __IO ISC_CC_RR_RG_Type              ISC_CC_RR_RG;   /**< Offset: 0x7C (R/W  32) Color Correction RR RG Register */
  __IO ISC_CC_RB_OR_Type              ISC_CC_RB_OR;   /**< Offset: 0x80 (R/W  32) Color Correction RB OR Register */
  __IO ISC_CC_GR_GG_Type              ISC_CC_GR_GG;   /**< Offset: 0x84 (R/W  32) Color Correction GR GG Register */
  __IO ISC_CC_GB_OG_Type              ISC_CC_GB_OG;   /**< Offset: 0x88 (R/W  32) Color Correction GB OG Register */
  __IO ISC_CC_BR_BG_Type              ISC_CC_BR_BG;   /**< Offset: 0x8C (R/W  32) Color Correction BR BG Register */
  __IO ISC_CC_BB_OB_Type              ISC_CC_BB_OB;   /**< Offset: 0x90 (R/W  32) Color Correction BB OB Register */
  __IO ISC_GAM_CTRL_Type              ISC_GAM_CTRL;   /**< Offset: 0x94 (R/W  32) Gamma Correction Control Register */
  __IO ISC_GAM_BENTRY_Type            ISC_GAM_BENTRY[64]; /**< Offset: 0x98 (R/W  32) Gamma Correction Blue Entry */
  __IO ISC_GAM_GENTRY_Type            ISC_GAM_GENTRY[64]; /**< Offset: 0x198 (R/W  32) Gamma Correction Green Entry */
  __IO ISC_GAM_RENTRY_Type            ISC_GAM_RENTRY[64]; /**< Offset: 0x298 (R/W  32) Gamma Correction Red Entry */
  __IO ISC_CSC_CTRL_Type              ISC_CSC_CTRL;   /**< Offset: 0x398 (R/W  32) Color Space Conversion Control Register */
  __IO ISC_CSC_YR_YG_Type             ISC_CSC_YR_YG;  /**< Offset: 0x39C (R/W  32) Color Space Conversion YR, YG Register */
  __IO ISC_CSC_YB_OY_Type             ISC_CSC_YB_OY;  /**< Offset: 0x3A0 (R/W  32) Color Space Conversion YB, OY Register */
  __IO ISC_CSC_CBR_CBG_Type           ISC_CSC_CBR_CBG; /**< Offset: 0x3A4 (R/W  32) Color Space Conversion CBR CBG Register */
  __IO ISC_CSC_CBB_OCB_Type           ISC_CSC_CBB_OCB; /**< Offset: 0x3A8 (R/W  32) Color Space Conversion CBB OCB Register */
  __IO ISC_CSC_CRR_CRG_Type           ISC_CSC_CRR_CRG; /**< Offset: 0x3AC (R/W  32) Color Space Conversion CRR CRG Register */
  __IO ISC_CSC_CRB_OCR_Type           ISC_CSC_CRB_OCR; /**< Offset: 0x3B0 (R/W  32) Color Space Conversion CRB OCR Register */
  __IO ISC_CBC_CTRL_Type              ISC_CBC_CTRL;   /**< Offset: 0x3B4 (R/W  32) Contrast and Brightness Control Register */
  __IO ISC_CBC_CFG_Type               ISC_CBC_CFG;    /**< Offset: 0x3B8 (R/W  32) Contrast and Brightness Configuration Register */
  __IO ISC_CBC_BRIGHT_Type            ISC_CBC_BRIGHT; /**< Offset: 0x3BC (R/W  32) Contrast and Brightness, Brightness Register */
  __IO ISC_CBC_CONTRAST_Type          ISC_CBC_CONTRAST; /**< Offset: 0x3C0 (R/W  32) Contrast and Brightness, Contrast Register */
  __IO ISC_SUB422_CTRL_Type           ISC_SUB422_CTRL; /**< Offset: 0x3C4 (R/W  32) Subsampling 4:4:4 to 4:2:2 Control Register */
  __IO ISC_SUB422_CFG_Type            ISC_SUB422_CFG; /**< Offset: 0x3C8 (R/W  32) Subsampling 4:4:4 to 4:2:2 Configuration Register */
  __IO ISC_SUB420_CTRL_Type           ISC_SUB420_CTRL; /**< Offset: 0x3CC (R/W  32) Subsampling 4:2:2 to 4:2:0 Control Register */
  __IO ISC_RLP_CFG_Type               ISC_RLP_CFG;    /**< Offset: 0x3D0 (R/W  32) Rounding, Limiting and Packing Configuration Register */
  __IO ISC_HIS_CTRL_Type              ISC_HIS_CTRL;   /**< Offset: 0x3D4 (R/W  32) Histogram Control Register */
  __IO ISC_HIS_CFG_Type               ISC_HIS_CFG;    /**< Offset: 0x3D8 (R/W  32) Histogram Configuration Register */
  __I  uint8_t                        Reserved2[4];
  __IO ISC_DCFG_Type                  ISC_DCFG;       /**< Offset: 0x3E0 (R/W  32) DMA Configuration Register */
  __IO ISC_DCTRL_Type                 ISC_DCTRL;      /**< Offset: 0x3E4 (R/W  32) DMA Control Register */
  __IO ISC_DNDA_Type                  ISC_DNDA;       /**< Offset: 0x3E8 (R/W  32) DMA Descriptor Address Register */
       IscSub0                        IscSub0[3];     /**< Offset: 0x3EC  */
  __I  uint8_t                        Reserved3[12];
  __I  ISC_HIS_ENTRY_Type             ISC_HIS_ENTRY[512]; /**< Offset: 0x410 (R/   32) Histogram Entry */
} Isc;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Image Sensor Controller */

#endif /* _SAMA5D2_ISC_COMPONENT_H_ */
