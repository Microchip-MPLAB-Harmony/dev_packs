/**
 * \file
 *
 * \brief Component description for AIC
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
#ifndef _SAMA5D2_AIC_COMPONENT_H_
#define _SAMA5D2_AIC_COMPONENT_H_
#define _SAMA5D2_AIC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Advanced Interrupt Controller
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR AIC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define AIC_11051                      /**< (AIC) Module ID */
#define REV_AIC K                      /**< (AIC) Module revision */

/* -------- AIC_SSR : (AIC Offset: 0x00) (R/W 32) Source Select Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t INTSEL:7;                  /**< bit:   0..6  Interrupt Line Selection                 */
    uint32_t :25;                       /**< bit:  7..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AIC_SSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AIC_SSR_OFFSET                      (0x00)                                        /**<  (AIC_SSR) Source Select Register  Offset */

#define AIC_SSR_INTSEL_Pos                  0                                              /**< (AIC_SSR) Interrupt Line Selection Position */
#define AIC_SSR_INTSEL_Msk                  (_U_(0x7F) << AIC_SSR_INTSEL_Pos)              /**< (AIC_SSR) Interrupt Line Selection Mask */
#define AIC_SSR_INTSEL(value)               (AIC_SSR_INTSEL_Msk & ((value) << AIC_SSR_INTSEL_Pos))
#define AIC_SSR_MASK                        _U_(0x7F)                                      /**< \deprecated (AIC_SSR) Register MASK  (Use AIC_SSR_Msk instead)  */
#define AIC_SSR_Msk                         _U_(0x7F)                                      /**< (AIC_SSR) Register Mask  */


/* -------- AIC_SMR : (AIC Offset: 0x04) (R/W 32) Source Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PRIORITY:3;                /**< bit:   0..2  Priority Level                           */
    uint32_t :2;                        /**< bit:   3..4  Reserved */
    uint32_t SRCTYPE:2;                 /**< bit:   5..6  Interrupt Source Type                    */
    uint32_t :25;                       /**< bit:  7..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AIC_SMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AIC_SMR_OFFSET                      (0x04)                                        /**<  (AIC_SMR) Source Mode Register  Offset */

#define AIC_SMR_PRIORITY_Pos                0                                              /**< (AIC_SMR) Priority Level Position */
#define AIC_SMR_PRIORITY_Msk                (_U_(0x7) << AIC_SMR_PRIORITY_Pos)             /**< (AIC_SMR) Priority Level Mask */
#define AIC_SMR_PRIORITY(value)             (AIC_SMR_PRIORITY_Msk & ((value) << AIC_SMR_PRIORITY_Pos))
#define   AIC_SMR_PRIORITY_MINIMUM_Val      _U_(0x0)                                       /**< (AIC_SMR) Minimum priority  */
#define   AIC_SMR_PRIORITY_VERY_LOW_Val     _U_(0x1)                                       /**< (AIC_SMR) Very low priority  */
#define   AIC_SMR_PRIORITY_LOW_Val          _U_(0x2)                                       /**< (AIC_SMR) Low priority  */
#define   AIC_SMR_PRIORITY_MEDIUM_LOW_Val   _U_(0x3)                                       /**< (AIC_SMR) Medium priority  */
#define   AIC_SMR_PRIORITY_MEDIUM_HIGH_Val  _U_(0x4)                                       /**< (AIC_SMR) Medium-high priority  */
#define   AIC_SMR_PRIORITY_HIGH_Val         _U_(0x5)                                       /**< (AIC_SMR) High priority  */
#define   AIC_SMR_PRIORITY_VERY_HIGH_Val    _U_(0x6)                                       /**< (AIC_SMR) Very high priority  */
#define   AIC_SMR_PRIORITY_MAXIMUM_Val      _U_(0x7)                                       /**< (AIC_SMR) Maximum priority  */
#define AIC_SMR_PRIORITY_MINIMUM            (AIC_SMR_PRIORITY_MINIMUM_Val << AIC_SMR_PRIORITY_Pos)  /**< (AIC_SMR) Minimum priority Position  */
#define AIC_SMR_PRIORITY_VERY_LOW           (AIC_SMR_PRIORITY_VERY_LOW_Val << AIC_SMR_PRIORITY_Pos)  /**< (AIC_SMR) Very low priority Position  */
#define AIC_SMR_PRIORITY_LOW                (AIC_SMR_PRIORITY_LOW_Val << AIC_SMR_PRIORITY_Pos)  /**< (AIC_SMR) Low priority Position  */
#define AIC_SMR_PRIORITY_MEDIUM_LOW         (AIC_SMR_PRIORITY_MEDIUM_LOW_Val << AIC_SMR_PRIORITY_Pos)  /**< (AIC_SMR) Medium priority Position  */
#define AIC_SMR_PRIORITY_MEDIUM_HIGH        (AIC_SMR_PRIORITY_MEDIUM_HIGH_Val << AIC_SMR_PRIORITY_Pos)  /**< (AIC_SMR) Medium-high priority Position  */
#define AIC_SMR_PRIORITY_HIGH               (AIC_SMR_PRIORITY_HIGH_Val << AIC_SMR_PRIORITY_Pos)  /**< (AIC_SMR) High priority Position  */
#define AIC_SMR_PRIORITY_VERY_HIGH          (AIC_SMR_PRIORITY_VERY_HIGH_Val << AIC_SMR_PRIORITY_Pos)  /**< (AIC_SMR) Very high priority Position  */
#define AIC_SMR_PRIORITY_MAXIMUM            (AIC_SMR_PRIORITY_MAXIMUM_Val << AIC_SMR_PRIORITY_Pos)  /**< (AIC_SMR) Maximum priority Position  */
#define AIC_SMR_SRCTYPE_Pos                 5                                              /**< (AIC_SMR) Interrupt Source Type Position */
#define AIC_SMR_SRCTYPE_Msk                 (_U_(0x3) << AIC_SMR_SRCTYPE_Pos)              /**< (AIC_SMR) Interrupt Source Type Mask */
#define AIC_SMR_SRCTYPE(value)              (AIC_SMR_SRCTYPE_Msk & ((value) << AIC_SMR_SRCTYPE_Pos))
#define   AIC_SMR_SRCTYPE_INT_LEVEL_SENSITIVE_Val _U_(0x0)                                       /**< (AIC_SMR) High-level sensitive for internal source. Low-level sensitive for external source  */
#define   AIC_SMR_SRCTYPE_EXT_NEGATIVE_EDGE_Val _U_(0x1)                                       /**< (AIC_SMR) Negative-edge triggered for external source  */
#define   AIC_SMR_SRCTYPE_EXT_HIGH_LEVEL_Val _U_(0x2)                                       /**< (AIC_SMR) High-level sensitive for internal source. High-level sensitive for external source  */
#define   AIC_SMR_SRCTYPE_EXT_POSITIVE_EDGE_Val _U_(0x3)                                       /**< (AIC_SMR) Positive-edge triggered for external source  */
#define AIC_SMR_SRCTYPE_INT_LEVEL_SENSITIVE (AIC_SMR_SRCTYPE_INT_LEVEL_SENSITIVE_Val << AIC_SMR_SRCTYPE_Pos)  /**< (AIC_SMR) High-level sensitive for internal source. Low-level sensitive for external source Position  */
#define AIC_SMR_SRCTYPE_EXT_NEGATIVE_EDGE   (AIC_SMR_SRCTYPE_EXT_NEGATIVE_EDGE_Val << AIC_SMR_SRCTYPE_Pos)  /**< (AIC_SMR) Negative-edge triggered for external source Position  */
#define AIC_SMR_SRCTYPE_EXT_HIGH_LEVEL      (AIC_SMR_SRCTYPE_EXT_HIGH_LEVEL_Val << AIC_SMR_SRCTYPE_Pos)  /**< (AIC_SMR) High-level sensitive for internal source. High-level sensitive for external source Position  */
#define AIC_SMR_SRCTYPE_EXT_POSITIVE_EDGE   (AIC_SMR_SRCTYPE_EXT_POSITIVE_EDGE_Val << AIC_SMR_SRCTYPE_Pos)  /**< (AIC_SMR) Positive-edge triggered for external source Position  */
#define AIC_SMR_MASK                        _U_(0x67)                                      /**< \deprecated (AIC_SMR) Register MASK  (Use AIC_SMR_Msk instead)  */
#define AIC_SMR_Msk                         _U_(0x67)                                      /**< (AIC_SMR) Register Mask  */


/* -------- AIC_SVR : (AIC Offset: 0x08) (R/W 32) Source Vector Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t VECTOR:32;                 /**< bit:  0..31  Source Vector                            */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AIC_SVR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AIC_SVR_OFFSET                      (0x08)                                        /**<  (AIC_SVR) Source Vector Register  Offset */

#define AIC_SVR_VECTOR_Pos                  0                                              /**< (AIC_SVR) Source Vector Position */
#define AIC_SVR_VECTOR_Msk                  (_U_(0xFFFFFFFF) << AIC_SVR_VECTOR_Pos)        /**< (AIC_SVR) Source Vector Mask */
#define AIC_SVR_VECTOR(value)               (AIC_SVR_VECTOR_Msk & ((value) << AIC_SVR_VECTOR_Pos))
#define AIC_SVR_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (AIC_SVR) Register MASK  (Use AIC_SVR_Msk instead)  */
#define AIC_SVR_Msk                         _U_(0xFFFFFFFF)                                /**< (AIC_SVR) Register Mask  */


/* -------- AIC_IVR : (AIC Offset: 0x10) (R/ 32) Interrupt Vector Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t IRQV:32;                   /**< bit:  0..31  Interrupt Vector Register                */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AIC_IVR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AIC_IVR_OFFSET                      (0x10)                                        /**<  (AIC_IVR) Interrupt Vector Register  Offset */

#define AIC_IVR_IRQV_Pos                    0                                              /**< (AIC_IVR) Interrupt Vector Register Position */
#define AIC_IVR_IRQV_Msk                    (_U_(0xFFFFFFFF) << AIC_IVR_IRQV_Pos)          /**< (AIC_IVR) Interrupt Vector Register Mask */
#define AIC_IVR_IRQV(value)                 (AIC_IVR_IRQV_Msk & ((value) << AIC_IVR_IRQV_Pos))
#define AIC_IVR_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (AIC_IVR) Register MASK  (Use AIC_IVR_Msk instead)  */
#define AIC_IVR_Msk                         _U_(0xFFFFFFFF)                                /**< (AIC_IVR) Register Mask  */


/* -------- AIC_FVR : (AIC Offset: 0x14) (R/ 32) FIQ Vector Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t FIQV:32;                   /**< bit:  0..31  FIQ Vector Register                      */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AIC_FVR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AIC_FVR_OFFSET                      (0x14)                                        /**<  (AIC_FVR) FIQ Vector Register  Offset */

#define AIC_FVR_FIQV_Pos                    0                                              /**< (AIC_FVR) FIQ Vector Register Position */
#define AIC_FVR_FIQV_Msk                    (_U_(0xFFFFFFFF) << AIC_FVR_FIQV_Pos)          /**< (AIC_FVR) FIQ Vector Register Mask */
#define AIC_FVR_FIQV(value)                 (AIC_FVR_FIQV_Msk & ((value) << AIC_FVR_FIQV_Pos))
#define AIC_FVR_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (AIC_FVR) Register MASK  (Use AIC_FVR_Msk instead)  */
#define AIC_FVR_Msk                         _U_(0xFFFFFFFF)                                /**< (AIC_FVR) Register Mask  */


/* -------- AIC_ISR : (AIC Offset: 0x18) (R/ 32) Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t IRQID:7;                   /**< bit:   0..6  Current Interrupt Identifier             */
    uint32_t :25;                       /**< bit:  7..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AIC_ISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AIC_ISR_OFFSET                      (0x18)                                        /**<  (AIC_ISR) Interrupt Status Register  Offset */

#define AIC_ISR_IRQID_Pos                   0                                              /**< (AIC_ISR) Current Interrupt Identifier Position */
#define AIC_ISR_IRQID_Msk                   (_U_(0x7F) << AIC_ISR_IRQID_Pos)               /**< (AIC_ISR) Current Interrupt Identifier Mask */
#define AIC_ISR_IRQID(value)                (AIC_ISR_IRQID_Msk & ((value) << AIC_ISR_IRQID_Pos))
#define AIC_ISR_MASK                        _U_(0x7F)                                      /**< \deprecated (AIC_ISR) Register MASK  (Use AIC_ISR_Msk instead)  */
#define AIC_ISR_Msk                         _U_(0x7F)                                      /**< (AIC_ISR) Register Mask  */


/* -------- AIC_IPR0 : (AIC Offset: 0x20) (R/ 32) Interrupt Pending Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t FIQ:1;                     /**< bit:      0  Interrupt Pending                        */
    uint32_t PID1:1;                    /**< bit:      1  Interrupt Pending                        */
    uint32_t PID2:1;                    /**< bit:      2  Interrupt Pending                        */
    uint32_t PID3:1;                    /**< bit:      3  Interrupt Pending                        */
    uint32_t PID4:1;                    /**< bit:      4  Interrupt Pending                        */
    uint32_t PID5:1;                    /**< bit:      5  Interrupt Pending                        */
    uint32_t PID6:1;                    /**< bit:      6  Interrupt Pending                        */
    uint32_t PID7:1;                    /**< bit:      7  Interrupt Pending                        */
    uint32_t PID8:1;                    /**< bit:      8  Interrupt Pending                        */
    uint32_t PID9:1;                    /**< bit:      9  Interrupt Pending                        */
    uint32_t PID10:1;                   /**< bit:     10  Interrupt Pending                        */
    uint32_t PID11:1;                   /**< bit:     11  Interrupt Pending                        */
    uint32_t PID12:1;                   /**< bit:     12  Interrupt Pending                        */
    uint32_t PID13:1;                   /**< bit:     13  Interrupt Pending                        */
    uint32_t PID14:1;                   /**< bit:     14  Interrupt Pending                        */
    uint32_t PID15:1;                   /**< bit:     15  Interrupt Pending                        */
    uint32_t PID16:1;                   /**< bit:     16  Interrupt Pending                        */
    uint32_t PID17:1;                   /**< bit:     17  Interrupt Pending                        */
    uint32_t PID18:1;                   /**< bit:     18  Interrupt Pending                        */
    uint32_t PID19:1;                   /**< bit:     19  Interrupt Pending                        */
    uint32_t PID20:1;                   /**< bit:     20  Interrupt Pending                        */
    uint32_t PID21:1;                   /**< bit:     21  Interrupt Pending                        */
    uint32_t PID22:1;                   /**< bit:     22  Interrupt Pending                        */
    uint32_t PID23:1;                   /**< bit:     23  Interrupt Pending                        */
    uint32_t PID24:1;                   /**< bit:     24  Interrupt Pending                        */
    uint32_t PID25:1;                   /**< bit:     25  Interrupt Pending                        */
    uint32_t PID26:1;                   /**< bit:     26  Interrupt Pending                        */
    uint32_t PID27:1;                   /**< bit:     27  Interrupt Pending                        */
    uint32_t PID28:1;                   /**< bit:     28  Interrupt Pending                        */
    uint32_t PID29:1;                   /**< bit:     29  Interrupt Pending                        */
    uint32_t PID30:1;                   /**< bit:     30  Interrupt Pending                        */
    uint32_t PID31:1;                   /**< bit:     31  Interrupt Pending                        */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :1;                        /**< bit:      0  Reserved */
    uint32_t PID:31;                    /**< bit:  1..31  Interrupt Pending                        */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} AIC_IPR0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AIC_IPR0_OFFSET                     (0x20)                                        /**<  (AIC_IPR0) Interrupt Pending Register 0  Offset */

#define AIC_IPR0_FIQ_Pos                    0                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_FIQ_Msk                    (_U_(0x1) << AIC_IPR0_FIQ_Pos)                 /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_FIQ                        AIC_IPR0_FIQ_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_FIQ_Msk instead */
#define AIC_IPR0_PID1_Pos                   1                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID1_Msk                   (_U_(0x1) << AIC_IPR0_PID1_Pos)                /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID1                       AIC_IPR0_PID1_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID1_Msk instead */
#define AIC_IPR0_PID2_Pos                   2                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID2_Msk                   (_U_(0x1) << AIC_IPR0_PID2_Pos)                /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID2                       AIC_IPR0_PID2_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID2_Msk instead */
#define AIC_IPR0_PID3_Pos                   3                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID3_Msk                   (_U_(0x1) << AIC_IPR0_PID3_Pos)                /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID3                       AIC_IPR0_PID3_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID3_Msk instead */
#define AIC_IPR0_PID4_Pos                   4                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID4_Msk                   (_U_(0x1) << AIC_IPR0_PID4_Pos)                /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID4                       AIC_IPR0_PID4_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID4_Msk instead */
#define AIC_IPR0_PID5_Pos                   5                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID5_Msk                   (_U_(0x1) << AIC_IPR0_PID5_Pos)                /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID5                       AIC_IPR0_PID5_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID5_Msk instead */
#define AIC_IPR0_PID6_Pos                   6                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID6_Msk                   (_U_(0x1) << AIC_IPR0_PID6_Pos)                /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID6                       AIC_IPR0_PID6_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID6_Msk instead */
#define AIC_IPR0_PID7_Pos                   7                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID7_Msk                   (_U_(0x1) << AIC_IPR0_PID7_Pos)                /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID7                       AIC_IPR0_PID7_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID7_Msk instead */
#define AIC_IPR0_PID8_Pos                   8                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID8_Msk                   (_U_(0x1) << AIC_IPR0_PID8_Pos)                /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID8                       AIC_IPR0_PID8_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID8_Msk instead */
#define AIC_IPR0_PID9_Pos                   9                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID9_Msk                   (_U_(0x1) << AIC_IPR0_PID9_Pos)                /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID9                       AIC_IPR0_PID9_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID9_Msk instead */
#define AIC_IPR0_PID10_Pos                  10                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID10_Msk                  (_U_(0x1) << AIC_IPR0_PID10_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID10                      AIC_IPR0_PID10_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID10_Msk instead */
#define AIC_IPR0_PID11_Pos                  11                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID11_Msk                  (_U_(0x1) << AIC_IPR0_PID11_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID11                      AIC_IPR0_PID11_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID11_Msk instead */
#define AIC_IPR0_PID12_Pos                  12                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID12_Msk                  (_U_(0x1) << AIC_IPR0_PID12_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID12                      AIC_IPR0_PID12_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID12_Msk instead */
#define AIC_IPR0_PID13_Pos                  13                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID13_Msk                  (_U_(0x1) << AIC_IPR0_PID13_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID13                      AIC_IPR0_PID13_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID13_Msk instead */
#define AIC_IPR0_PID14_Pos                  14                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID14_Msk                  (_U_(0x1) << AIC_IPR0_PID14_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID14                      AIC_IPR0_PID14_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID14_Msk instead */
#define AIC_IPR0_PID15_Pos                  15                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID15_Msk                  (_U_(0x1) << AIC_IPR0_PID15_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID15                      AIC_IPR0_PID15_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID15_Msk instead */
#define AIC_IPR0_PID16_Pos                  16                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID16_Msk                  (_U_(0x1) << AIC_IPR0_PID16_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID16                      AIC_IPR0_PID16_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID16_Msk instead */
#define AIC_IPR0_PID17_Pos                  17                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID17_Msk                  (_U_(0x1) << AIC_IPR0_PID17_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID17                      AIC_IPR0_PID17_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID17_Msk instead */
#define AIC_IPR0_PID18_Pos                  18                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID18_Msk                  (_U_(0x1) << AIC_IPR0_PID18_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID18                      AIC_IPR0_PID18_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID18_Msk instead */
#define AIC_IPR0_PID19_Pos                  19                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID19_Msk                  (_U_(0x1) << AIC_IPR0_PID19_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID19                      AIC_IPR0_PID19_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID19_Msk instead */
#define AIC_IPR0_PID20_Pos                  20                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID20_Msk                  (_U_(0x1) << AIC_IPR0_PID20_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID20                      AIC_IPR0_PID20_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID20_Msk instead */
#define AIC_IPR0_PID21_Pos                  21                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID21_Msk                  (_U_(0x1) << AIC_IPR0_PID21_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID21                      AIC_IPR0_PID21_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID21_Msk instead */
#define AIC_IPR0_PID22_Pos                  22                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID22_Msk                  (_U_(0x1) << AIC_IPR0_PID22_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID22                      AIC_IPR0_PID22_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID22_Msk instead */
#define AIC_IPR0_PID23_Pos                  23                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID23_Msk                  (_U_(0x1) << AIC_IPR0_PID23_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID23                      AIC_IPR0_PID23_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID23_Msk instead */
#define AIC_IPR0_PID24_Pos                  24                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID24_Msk                  (_U_(0x1) << AIC_IPR0_PID24_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID24                      AIC_IPR0_PID24_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID24_Msk instead */
#define AIC_IPR0_PID25_Pos                  25                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID25_Msk                  (_U_(0x1) << AIC_IPR0_PID25_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID25                      AIC_IPR0_PID25_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID25_Msk instead */
#define AIC_IPR0_PID26_Pos                  26                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID26_Msk                  (_U_(0x1) << AIC_IPR0_PID26_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID26                      AIC_IPR0_PID26_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID26_Msk instead */
#define AIC_IPR0_PID27_Pos                  27                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID27_Msk                  (_U_(0x1) << AIC_IPR0_PID27_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID27                      AIC_IPR0_PID27_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID27_Msk instead */
#define AIC_IPR0_PID28_Pos                  28                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID28_Msk                  (_U_(0x1) << AIC_IPR0_PID28_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID28                      AIC_IPR0_PID28_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID28_Msk instead */
#define AIC_IPR0_PID29_Pos                  29                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID29_Msk                  (_U_(0x1) << AIC_IPR0_PID29_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID29                      AIC_IPR0_PID29_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID29_Msk instead */
#define AIC_IPR0_PID30_Pos                  30                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID30_Msk                  (_U_(0x1) << AIC_IPR0_PID30_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID30                      AIC_IPR0_PID30_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID30_Msk instead */
#define AIC_IPR0_PID31_Pos                  31                                             /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID31_Msk                  (_U_(0x1) << AIC_IPR0_PID31_Pos)               /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID31                      AIC_IPR0_PID31_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR0_PID31_Msk instead */
#define AIC_IPR0_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (AIC_IPR0) Register MASK  (Use AIC_IPR0_Msk instead)  */
#define AIC_IPR0_Msk                        _U_(0xFFFFFFFF)                                /**< (AIC_IPR0) Register Mask  */

#define AIC_IPR0_PID_Pos                    1                                              /**< (AIC_IPR0 Position) Interrupt Pending */
#define AIC_IPR0_PID_Msk                    (_U_(0x7FFFFFFF) << AIC_IPR0_PID_Pos)          /**< (AIC_IPR0 Mask) PID */
#define AIC_IPR0_PID(value)                 (AIC_IPR0_PID_Msk & ((value) << AIC_IPR0_PID_Pos))  

/* -------- AIC_IPR1 : (AIC Offset: 0x24) (R/ 32) Interrupt Pending Register 1 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PID32:1;                   /**< bit:      0  Interrupt Pending                        */
    uint32_t PID33:1;                   /**< bit:      1  Interrupt Pending                        */
    uint32_t PID34:1;                   /**< bit:      2  Interrupt Pending                        */
    uint32_t PID35:1;                   /**< bit:      3  Interrupt Pending                        */
    uint32_t PID36:1;                   /**< bit:      4  Interrupt Pending                        */
    uint32_t PID37:1;                   /**< bit:      5  Interrupt Pending                        */
    uint32_t PID38:1;                   /**< bit:      6  Interrupt Pending                        */
    uint32_t PID39:1;                   /**< bit:      7  Interrupt Pending                        */
    uint32_t PID40:1;                   /**< bit:      8  Interrupt Pending                        */
    uint32_t PID41:1;                   /**< bit:      9  Interrupt Pending                        */
    uint32_t PID42:1;                   /**< bit:     10  Interrupt Pending                        */
    uint32_t PID43:1;                   /**< bit:     11  Interrupt Pending                        */
    uint32_t PID44:1;                   /**< bit:     12  Interrupt Pending                        */
    uint32_t PID45:1;                   /**< bit:     13  Interrupt Pending                        */
    uint32_t PID46:1;                   /**< bit:     14  Interrupt Pending                        */
    uint32_t PID47:1;                   /**< bit:     15  Interrupt Pending                        */
    uint32_t PID48:1;                   /**< bit:     16  Interrupt Pending                        */
    uint32_t PID49:1;                   /**< bit:     17  Interrupt Pending                        */
    uint32_t PID50:1;                   /**< bit:     18  Interrupt Pending                        */
    uint32_t PID51:1;                   /**< bit:     19  Interrupt Pending                        */
    uint32_t PID52:1;                   /**< bit:     20  Interrupt Pending                        */
    uint32_t PID53:1;                   /**< bit:     21  Interrupt Pending                        */
    uint32_t PID54:1;                   /**< bit:     22  Interrupt Pending                        */
    uint32_t PID55:1;                   /**< bit:     23  Interrupt Pending                        */
    uint32_t PID56:1;                   /**< bit:     24  Interrupt Pending                        */
    uint32_t PID57:1;                   /**< bit:     25  Interrupt Pending                        */
    uint32_t PID58:1;                   /**< bit:     26  Interrupt Pending                        */
    uint32_t PID59:1;                   /**< bit:     27  Interrupt Pending                        */
    uint32_t PID60:1;                   /**< bit:     28  Interrupt Pending                        */
    uint32_t PID61:1;                   /**< bit:     29  Interrupt Pending                        */
    uint32_t PID62:1;                   /**< bit:     30  Interrupt Pending                        */
    uint32_t PID63:1;                   /**< bit:     31  Interrupt Pending                        */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t PID:32;                    /**< bit:  0..31  Interrupt Pending                        */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} AIC_IPR1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AIC_IPR1_OFFSET                     (0x24)                                        /**<  (AIC_IPR1) Interrupt Pending Register 1  Offset */

#define AIC_IPR1_PID32_Pos                  0                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID32_Msk                  (_U_(0x1) << AIC_IPR1_PID32_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID32                      AIC_IPR1_PID32_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID32_Msk instead */
#define AIC_IPR1_PID33_Pos                  1                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID33_Msk                  (_U_(0x1) << AIC_IPR1_PID33_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID33                      AIC_IPR1_PID33_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID33_Msk instead */
#define AIC_IPR1_PID34_Pos                  2                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID34_Msk                  (_U_(0x1) << AIC_IPR1_PID34_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID34                      AIC_IPR1_PID34_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID34_Msk instead */
#define AIC_IPR1_PID35_Pos                  3                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID35_Msk                  (_U_(0x1) << AIC_IPR1_PID35_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID35                      AIC_IPR1_PID35_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID35_Msk instead */
#define AIC_IPR1_PID36_Pos                  4                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID36_Msk                  (_U_(0x1) << AIC_IPR1_PID36_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID36                      AIC_IPR1_PID36_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID36_Msk instead */
#define AIC_IPR1_PID37_Pos                  5                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID37_Msk                  (_U_(0x1) << AIC_IPR1_PID37_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID37                      AIC_IPR1_PID37_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID37_Msk instead */
#define AIC_IPR1_PID38_Pos                  6                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID38_Msk                  (_U_(0x1) << AIC_IPR1_PID38_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID38                      AIC_IPR1_PID38_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID38_Msk instead */
#define AIC_IPR1_PID39_Pos                  7                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID39_Msk                  (_U_(0x1) << AIC_IPR1_PID39_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID39                      AIC_IPR1_PID39_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID39_Msk instead */
#define AIC_IPR1_PID40_Pos                  8                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID40_Msk                  (_U_(0x1) << AIC_IPR1_PID40_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID40                      AIC_IPR1_PID40_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID40_Msk instead */
#define AIC_IPR1_PID41_Pos                  9                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID41_Msk                  (_U_(0x1) << AIC_IPR1_PID41_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID41                      AIC_IPR1_PID41_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID41_Msk instead */
#define AIC_IPR1_PID42_Pos                  10                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID42_Msk                  (_U_(0x1) << AIC_IPR1_PID42_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID42                      AIC_IPR1_PID42_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID42_Msk instead */
#define AIC_IPR1_PID43_Pos                  11                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID43_Msk                  (_U_(0x1) << AIC_IPR1_PID43_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID43                      AIC_IPR1_PID43_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID43_Msk instead */
#define AIC_IPR1_PID44_Pos                  12                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID44_Msk                  (_U_(0x1) << AIC_IPR1_PID44_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID44                      AIC_IPR1_PID44_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID44_Msk instead */
#define AIC_IPR1_PID45_Pos                  13                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID45_Msk                  (_U_(0x1) << AIC_IPR1_PID45_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID45                      AIC_IPR1_PID45_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID45_Msk instead */
#define AIC_IPR1_PID46_Pos                  14                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID46_Msk                  (_U_(0x1) << AIC_IPR1_PID46_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID46                      AIC_IPR1_PID46_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID46_Msk instead */
#define AIC_IPR1_PID47_Pos                  15                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID47_Msk                  (_U_(0x1) << AIC_IPR1_PID47_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID47                      AIC_IPR1_PID47_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID47_Msk instead */
#define AIC_IPR1_PID48_Pos                  16                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID48_Msk                  (_U_(0x1) << AIC_IPR1_PID48_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID48                      AIC_IPR1_PID48_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID48_Msk instead */
#define AIC_IPR1_PID49_Pos                  17                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID49_Msk                  (_U_(0x1) << AIC_IPR1_PID49_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID49                      AIC_IPR1_PID49_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID49_Msk instead */
#define AIC_IPR1_PID50_Pos                  18                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID50_Msk                  (_U_(0x1) << AIC_IPR1_PID50_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID50                      AIC_IPR1_PID50_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID50_Msk instead */
#define AIC_IPR1_PID51_Pos                  19                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID51_Msk                  (_U_(0x1) << AIC_IPR1_PID51_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID51                      AIC_IPR1_PID51_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID51_Msk instead */
#define AIC_IPR1_PID52_Pos                  20                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID52_Msk                  (_U_(0x1) << AIC_IPR1_PID52_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID52                      AIC_IPR1_PID52_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID52_Msk instead */
#define AIC_IPR1_PID53_Pos                  21                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID53_Msk                  (_U_(0x1) << AIC_IPR1_PID53_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID53                      AIC_IPR1_PID53_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID53_Msk instead */
#define AIC_IPR1_PID54_Pos                  22                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID54_Msk                  (_U_(0x1) << AIC_IPR1_PID54_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID54                      AIC_IPR1_PID54_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID54_Msk instead */
#define AIC_IPR1_PID55_Pos                  23                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID55_Msk                  (_U_(0x1) << AIC_IPR1_PID55_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID55                      AIC_IPR1_PID55_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID55_Msk instead */
#define AIC_IPR1_PID56_Pos                  24                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID56_Msk                  (_U_(0x1) << AIC_IPR1_PID56_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID56                      AIC_IPR1_PID56_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID56_Msk instead */
#define AIC_IPR1_PID57_Pos                  25                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID57_Msk                  (_U_(0x1) << AIC_IPR1_PID57_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID57                      AIC_IPR1_PID57_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID57_Msk instead */
#define AIC_IPR1_PID58_Pos                  26                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID58_Msk                  (_U_(0x1) << AIC_IPR1_PID58_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID58                      AIC_IPR1_PID58_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID58_Msk instead */
#define AIC_IPR1_PID59_Pos                  27                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID59_Msk                  (_U_(0x1) << AIC_IPR1_PID59_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID59                      AIC_IPR1_PID59_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID59_Msk instead */
#define AIC_IPR1_PID60_Pos                  28                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID60_Msk                  (_U_(0x1) << AIC_IPR1_PID60_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID60                      AIC_IPR1_PID60_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID60_Msk instead */
#define AIC_IPR1_PID61_Pos                  29                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID61_Msk                  (_U_(0x1) << AIC_IPR1_PID61_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID61                      AIC_IPR1_PID61_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID61_Msk instead */
#define AIC_IPR1_PID62_Pos                  30                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID62_Msk                  (_U_(0x1) << AIC_IPR1_PID62_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID62                      AIC_IPR1_PID62_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID62_Msk instead */
#define AIC_IPR1_PID63_Pos                  31                                             /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID63_Msk                  (_U_(0x1) << AIC_IPR1_PID63_Pos)               /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID63                      AIC_IPR1_PID63_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR1_PID63_Msk instead */
#define AIC_IPR1_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (AIC_IPR1) Register MASK  (Use AIC_IPR1_Msk instead)  */
#define AIC_IPR1_Msk                        _U_(0xFFFFFFFF)                                /**< (AIC_IPR1) Register Mask  */

#define AIC_IPR1_PID_Pos                    0                                              /**< (AIC_IPR1 Position) Interrupt Pending */
#define AIC_IPR1_PID_Msk                    (_U_(0xFFFFFFFF) << AIC_IPR1_PID_Pos)          /**< (AIC_IPR1 Mask) PID */
#define AIC_IPR1_PID(value)                 (AIC_IPR1_PID_Msk & ((value) << AIC_IPR1_PID_Pos))  

/* -------- AIC_IPR2 : (AIC Offset: 0x28) (R/ 32) Interrupt Pending Register 2 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PID64:1;                   /**< bit:      0  Interrupt Pending                        */
    uint32_t PID65:1;                   /**< bit:      1  Interrupt Pending                        */
    uint32_t PID66:1;                   /**< bit:      2  Interrupt Pending                        */
    uint32_t PID67:1;                   /**< bit:      3  Interrupt Pending                        */
    uint32_t PID68:1;                   /**< bit:      4  Interrupt Pending                        */
    uint32_t PID69:1;                   /**< bit:      5  Interrupt Pending                        */
    uint32_t PID70:1;                   /**< bit:      6  Interrupt Pending                        */
    uint32_t PID71:1;                   /**< bit:      7  Interrupt Pending                        */
    uint32_t PID72:1;                   /**< bit:      8  Interrupt Pending                        */
    uint32_t PID73:1;                   /**< bit:      9  Interrupt Pending                        */
    uint32_t SYS:1;                     /**< bit:     10  Interrupt Pending                        */
    uint32_t PID75:1;                   /**< bit:     11  Interrupt Pending                        */
    uint32_t PID76:1;                   /**< bit:     12  Interrupt Pending                        */
    uint32_t PID77:1;                   /**< bit:     13  Interrupt Pending                        */
    uint32_t PID78:1;                   /**< bit:     14  Interrupt Pending                        */
    uint32_t PID79:1;                   /**< bit:     15  Interrupt Pending                        */
    uint32_t PID80:1;                   /**< bit:     16  Interrupt Pending                        */
    uint32_t PID81:1;                   /**< bit:     17  Interrupt Pending                        */
    uint32_t PID82:1;                   /**< bit:     18  Interrupt Pending                        */
    uint32_t PID83:1;                   /**< bit:     19  Interrupt Pending                        */
    uint32_t PID84:1;                   /**< bit:     20  Interrupt Pending                        */
    uint32_t PID85:1;                   /**< bit:     21  Interrupt Pending                        */
    uint32_t PID86:1;                   /**< bit:     22  Interrupt Pending                        */
    uint32_t PID87:1;                   /**< bit:     23  Interrupt Pending                        */
    uint32_t PID88:1;                   /**< bit:     24  Interrupt Pending                        */
    uint32_t PID89:1;                   /**< bit:     25  Interrupt Pending                        */
    uint32_t PID90:1;                   /**< bit:     26  Interrupt Pending                        */
    uint32_t PID91:1;                   /**< bit:     27  Interrupt Pending                        */
    uint32_t PID92:1;                   /**< bit:     28  Interrupt Pending                        */
    uint32_t PID93:1;                   /**< bit:     29  Interrupt Pending                        */
    uint32_t PID94:1;                   /**< bit:     30  Interrupt Pending                        */
    uint32_t PID95:1;                   /**< bit:     31  Interrupt Pending                        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AIC_IPR2_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AIC_IPR2_OFFSET                     (0x28)                                        /**<  (AIC_IPR2) Interrupt Pending Register 2  Offset */

#define AIC_IPR2_PID64_Pos                  0                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID64_Msk                  (_U_(0x1) << AIC_IPR2_PID64_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID64                      AIC_IPR2_PID64_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID64_Msk instead */
#define AIC_IPR2_PID65_Pos                  1                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID65_Msk                  (_U_(0x1) << AIC_IPR2_PID65_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID65                      AIC_IPR2_PID65_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID65_Msk instead */
#define AIC_IPR2_PID66_Pos                  2                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID66_Msk                  (_U_(0x1) << AIC_IPR2_PID66_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID66                      AIC_IPR2_PID66_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID66_Msk instead */
#define AIC_IPR2_PID67_Pos                  3                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID67_Msk                  (_U_(0x1) << AIC_IPR2_PID67_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID67                      AIC_IPR2_PID67_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID67_Msk instead */
#define AIC_IPR2_PID68_Pos                  4                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID68_Msk                  (_U_(0x1) << AIC_IPR2_PID68_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID68                      AIC_IPR2_PID68_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID68_Msk instead */
#define AIC_IPR2_PID69_Pos                  5                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID69_Msk                  (_U_(0x1) << AIC_IPR2_PID69_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID69                      AIC_IPR2_PID69_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID69_Msk instead */
#define AIC_IPR2_PID70_Pos                  6                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID70_Msk                  (_U_(0x1) << AIC_IPR2_PID70_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID70                      AIC_IPR2_PID70_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID70_Msk instead */
#define AIC_IPR2_PID71_Pos                  7                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID71_Msk                  (_U_(0x1) << AIC_IPR2_PID71_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID71                      AIC_IPR2_PID71_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID71_Msk instead */
#define AIC_IPR2_PID72_Pos                  8                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID72_Msk                  (_U_(0x1) << AIC_IPR2_PID72_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID72                      AIC_IPR2_PID72_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID72_Msk instead */
#define AIC_IPR2_PID73_Pos                  9                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID73_Msk                  (_U_(0x1) << AIC_IPR2_PID73_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID73                      AIC_IPR2_PID73_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID73_Msk instead */
#define AIC_IPR2_SYS_Pos                    10                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_SYS_Msk                    (_U_(0x1) << AIC_IPR2_SYS_Pos)                 /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_SYS                        AIC_IPR2_SYS_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_SYS_Msk instead */
#define AIC_IPR2_PID75_Pos                  11                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID75_Msk                  (_U_(0x1) << AIC_IPR2_PID75_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID75                      AIC_IPR2_PID75_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID75_Msk instead */
#define AIC_IPR2_PID76_Pos                  12                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID76_Msk                  (_U_(0x1) << AIC_IPR2_PID76_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID76                      AIC_IPR2_PID76_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID76_Msk instead */
#define AIC_IPR2_PID77_Pos                  13                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID77_Msk                  (_U_(0x1) << AIC_IPR2_PID77_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID77                      AIC_IPR2_PID77_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID77_Msk instead */
#define AIC_IPR2_PID78_Pos                  14                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID78_Msk                  (_U_(0x1) << AIC_IPR2_PID78_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID78                      AIC_IPR2_PID78_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID78_Msk instead */
#define AIC_IPR2_PID79_Pos                  15                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID79_Msk                  (_U_(0x1) << AIC_IPR2_PID79_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID79                      AIC_IPR2_PID79_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID79_Msk instead */
#define AIC_IPR2_PID80_Pos                  16                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID80_Msk                  (_U_(0x1) << AIC_IPR2_PID80_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID80                      AIC_IPR2_PID80_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID80_Msk instead */
#define AIC_IPR2_PID81_Pos                  17                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID81_Msk                  (_U_(0x1) << AIC_IPR2_PID81_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID81                      AIC_IPR2_PID81_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID81_Msk instead */
#define AIC_IPR2_PID82_Pos                  18                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID82_Msk                  (_U_(0x1) << AIC_IPR2_PID82_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID82                      AIC_IPR2_PID82_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID82_Msk instead */
#define AIC_IPR2_PID83_Pos                  19                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID83_Msk                  (_U_(0x1) << AIC_IPR2_PID83_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID83                      AIC_IPR2_PID83_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID83_Msk instead */
#define AIC_IPR2_PID84_Pos                  20                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID84_Msk                  (_U_(0x1) << AIC_IPR2_PID84_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID84                      AIC_IPR2_PID84_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID84_Msk instead */
#define AIC_IPR2_PID85_Pos                  21                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID85_Msk                  (_U_(0x1) << AIC_IPR2_PID85_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID85                      AIC_IPR2_PID85_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID85_Msk instead */
#define AIC_IPR2_PID86_Pos                  22                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID86_Msk                  (_U_(0x1) << AIC_IPR2_PID86_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID86                      AIC_IPR2_PID86_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID86_Msk instead */
#define AIC_IPR2_PID87_Pos                  23                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID87_Msk                  (_U_(0x1) << AIC_IPR2_PID87_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID87                      AIC_IPR2_PID87_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID87_Msk instead */
#define AIC_IPR2_PID88_Pos                  24                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID88_Msk                  (_U_(0x1) << AIC_IPR2_PID88_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID88                      AIC_IPR2_PID88_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID88_Msk instead */
#define AIC_IPR2_PID89_Pos                  25                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID89_Msk                  (_U_(0x1) << AIC_IPR2_PID89_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID89                      AIC_IPR2_PID89_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID89_Msk instead */
#define AIC_IPR2_PID90_Pos                  26                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID90_Msk                  (_U_(0x1) << AIC_IPR2_PID90_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID90                      AIC_IPR2_PID90_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID90_Msk instead */
#define AIC_IPR2_PID91_Pos                  27                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID91_Msk                  (_U_(0x1) << AIC_IPR2_PID91_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID91                      AIC_IPR2_PID91_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID91_Msk instead */
#define AIC_IPR2_PID92_Pos                  28                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID92_Msk                  (_U_(0x1) << AIC_IPR2_PID92_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID92                      AIC_IPR2_PID92_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID92_Msk instead */
#define AIC_IPR2_PID93_Pos                  29                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID93_Msk                  (_U_(0x1) << AIC_IPR2_PID93_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID93                      AIC_IPR2_PID93_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID93_Msk instead */
#define AIC_IPR2_PID94_Pos                  30                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID94_Msk                  (_U_(0x1) << AIC_IPR2_PID94_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID94                      AIC_IPR2_PID94_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID94_Msk instead */
#define AIC_IPR2_PID95_Pos                  31                                             /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID95_Msk                  (_U_(0x1) << AIC_IPR2_PID95_Pos)               /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID95                      AIC_IPR2_PID95_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR2_PID95_Msk instead */
#define AIC_IPR2_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (AIC_IPR2) Register MASK  (Use AIC_IPR2_Msk instead)  */
#define AIC_IPR2_Msk                        _U_(0xFFFFFFFF)                                /**< (AIC_IPR2) Register Mask  */


/* -------- AIC_IPR3 : (AIC Offset: 0x2c) (R/ 32) Interrupt Pending Register 3 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PID96:1;                   /**< bit:      0  Interrupt Pending                        */
    uint32_t PID97:1;                   /**< bit:      1  Interrupt Pending                        */
    uint32_t PID98:1;                   /**< bit:      2  Interrupt Pending                        */
    uint32_t PID99:1;                   /**< bit:      3  Interrupt Pending                        */
    uint32_t PID100:1;                  /**< bit:      4  Interrupt Pending                        */
    uint32_t PID101:1;                  /**< bit:      5  Interrupt Pending                        */
    uint32_t PID102:1;                  /**< bit:      6  Interrupt Pending                        */
    uint32_t PID103:1;                  /**< bit:      7  Interrupt Pending                        */
    uint32_t PID104:1;                  /**< bit:      8  Interrupt Pending                        */
    uint32_t PID105:1;                  /**< bit:      9  Interrupt Pending                        */
    uint32_t PID106:1;                  /**< bit:     10  Interrupt Pending                        */
    uint32_t PID107:1;                  /**< bit:     11  Interrupt Pending                        */
    uint32_t PID108:1;                  /**< bit:     12  Interrupt Pending                        */
    uint32_t PID109:1;                  /**< bit:     13  Interrupt Pending                        */
    uint32_t PID110:1;                  /**< bit:     14  Interrupt Pending                        */
    uint32_t PID111:1;                  /**< bit:     15  Interrupt Pending                        */
    uint32_t PID112:1;                  /**< bit:     16  Interrupt Pending                        */
    uint32_t PID113:1;                  /**< bit:     17  Interrupt Pending                        */
    uint32_t PID114:1;                  /**< bit:     18  Interrupt Pending                        */
    uint32_t PID115:1;                  /**< bit:     19  Interrupt Pending                        */
    uint32_t PID116:1;                  /**< bit:     20  Interrupt Pending                        */
    uint32_t PID117:1;                  /**< bit:     21  Interrupt Pending                        */
    uint32_t PID118:1;                  /**< bit:     22  Interrupt Pending                        */
    uint32_t PID119:1;                  /**< bit:     23  Interrupt Pending                        */
    uint32_t PID120:1;                  /**< bit:     24  Interrupt Pending                        */
    uint32_t PID121:1;                  /**< bit:     25  Interrupt Pending                        */
    uint32_t PID122:1;                  /**< bit:     26  Interrupt Pending                        */
    uint32_t PID123:1;                  /**< bit:     27  Interrupt Pending                        */
    uint32_t PID124:1;                  /**< bit:     28  Interrupt Pending                        */
    uint32_t PID125:1;                  /**< bit:     29  Interrupt Pending                        */
    uint32_t PID126:1;                  /**< bit:     30  Interrupt Pending                        */
    uint32_t PID127:1;                  /**< bit:     31  Interrupt Pending                        */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t PID:32;                    /**< bit:  0..31  Interrupt Pending                        */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} AIC_IPR3_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AIC_IPR3_OFFSET                     (0x2C)                                        /**<  (AIC_IPR3) Interrupt Pending Register 3  Offset */

#define AIC_IPR3_PID96_Pos                  0                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID96_Msk                  (_U_(0x1) << AIC_IPR3_PID96_Pos)               /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID96                      AIC_IPR3_PID96_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID96_Msk instead */
#define AIC_IPR3_PID97_Pos                  1                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID97_Msk                  (_U_(0x1) << AIC_IPR3_PID97_Pos)               /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID97                      AIC_IPR3_PID97_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID97_Msk instead */
#define AIC_IPR3_PID98_Pos                  2                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID98_Msk                  (_U_(0x1) << AIC_IPR3_PID98_Pos)               /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID98                      AIC_IPR3_PID98_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID98_Msk instead */
#define AIC_IPR3_PID99_Pos                  3                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID99_Msk                  (_U_(0x1) << AIC_IPR3_PID99_Pos)               /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID99                      AIC_IPR3_PID99_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID99_Msk instead */
#define AIC_IPR3_PID100_Pos                 4                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID100_Msk                 (_U_(0x1) << AIC_IPR3_PID100_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID100                     AIC_IPR3_PID100_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID100_Msk instead */
#define AIC_IPR3_PID101_Pos                 5                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID101_Msk                 (_U_(0x1) << AIC_IPR3_PID101_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID101                     AIC_IPR3_PID101_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID101_Msk instead */
#define AIC_IPR3_PID102_Pos                 6                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID102_Msk                 (_U_(0x1) << AIC_IPR3_PID102_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID102                     AIC_IPR3_PID102_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID102_Msk instead */
#define AIC_IPR3_PID103_Pos                 7                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID103_Msk                 (_U_(0x1) << AIC_IPR3_PID103_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID103                     AIC_IPR3_PID103_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID103_Msk instead */
#define AIC_IPR3_PID104_Pos                 8                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID104_Msk                 (_U_(0x1) << AIC_IPR3_PID104_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID104                     AIC_IPR3_PID104_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID104_Msk instead */
#define AIC_IPR3_PID105_Pos                 9                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID105_Msk                 (_U_(0x1) << AIC_IPR3_PID105_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID105                     AIC_IPR3_PID105_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID105_Msk instead */
#define AIC_IPR3_PID106_Pos                 10                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID106_Msk                 (_U_(0x1) << AIC_IPR3_PID106_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID106                     AIC_IPR3_PID106_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID106_Msk instead */
#define AIC_IPR3_PID107_Pos                 11                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID107_Msk                 (_U_(0x1) << AIC_IPR3_PID107_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID107                     AIC_IPR3_PID107_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID107_Msk instead */
#define AIC_IPR3_PID108_Pos                 12                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID108_Msk                 (_U_(0x1) << AIC_IPR3_PID108_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID108                     AIC_IPR3_PID108_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID108_Msk instead */
#define AIC_IPR3_PID109_Pos                 13                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID109_Msk                 (_U_(0x1) << AIC_IPR3_PID109_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID109                     AIC_IPR3_PID109_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID109_Msk instead */
#define AIC_IPR3_PID110_Pos                 14                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID110_Msk                 (_U_(0x1) << AIC_IPR3_PID110_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID110                     AIC_IPR3_PID110_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID110_Msk instead */
#define AIC_IPR3_PID111_Pos                 15                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID111_Msk                 (_U_(0x1) << AIC_IPR3_PID111_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID111                     AIC_IPR3_PID111_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID111_Msk instead */
#define AIC_IPR3_PID112_Pos                 16                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID112_Msk                 (_U_(0x1) << AIC_IPR3_PID112_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID112                     AIC_IPR3_PID112_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID112_Msk instead */
#define AIC_IPR3_PID113_Pos                 17                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID113_Msk                 (_U_(0x1) << AIC_IPR3_PID113_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID113                     AIC_IPR3_PID113_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID113_Msk instead */
#define AIC_IPR3_PID114_Pos                 18                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID114_Msk                 (_U_(0x1) << AIC_IPR3_PID114_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID114                     AIC_IPR3_PID114_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID114_Msk instead */
#define AIC_IPR3_PID115_Pos                 19                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID115_Msk                 (_U_(0x1) << AIC_IPR3_PID115_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID115                     AIC_IPR3_PID115_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID115_Msk instead */
#define AIC_IPR3_PID116_Pos                 20                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID116_Msk                 (_U_(0x1) << AIC_IPR3_PID116_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID116                     AIC_IPR3_PID116_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID116_Msk instead */
#define AIC_IPR3_PID117_Pos                 21                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID117_Msk                 (_U_(0x1) << AIC_IPR3_PID117_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID117                     AIC_IPR3_PID117_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID117_Msk instead */
#define AIC_IPR3_PID118_Pos                 22                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID118_Msk                 (_U_(0x1) << AIC_IPR3_PID118_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID118                     AIC_IPR3_PID118_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID118_Msk instead */
#define AIC_IPR3_PID119_Pos                 23                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID119_Msk                 (_U_(0x1) << AIC_IPR3_PID119_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID119                     AIC_IPR3_PID119_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID119_Msk instead */
#define AIC_IPR3_PID120_Pos                 24                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID120_Msk                 (_U_(0x1) << AIC_IPR3_PID120_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID120                     AIC_IPR3_PID120_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID120_Msk instead */
#define AIC_IPR3_PID121_Pos                 25                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID121_Msk                 (_U_(0x1) << AIC_IPR3_PID121_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID121                     AIC_IPR3_PID121_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID121_Msk instead */
#define AIC_IPR3_PID122_Pos                 26                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID122_Msk                 (_U_(0x1) << AIC_IPR3_PID122_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID122                     AIC_IPR3_PID122_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID122_Msk instead */
#define AIC_IPR3_PID123_Pos                 27                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID123_Msk                 (_U_(0x1) << AIC_IPR3_PID123_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID123                     AIC_IPR3_PID123_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID123_Msk instead */
#define AIC_IPR3_PID124_Pos                 28                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID124_Msk                 (_U_(0x1) << AIC_IPR3_PID124_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID124                     AIC_IPR3_PID124_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID124_Msk instead */
#define AIC_IPR3_PID125_Pos                 29                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID125_Msk                 (_U_(0x1) << AIC_IPR3_PID125_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID125                     AIC_IPR3_PID125_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID125_Msk instead */
#define AIC_IPR3_PID126_Pos                 30                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID126_Msk                 (_U_(0x1) << AIC_IPR3_PID126_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID126                     AIC_IPR3_PID126_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID126_Msk instead */
#define AIC_IPR3_PID127_Pos                 31                                             /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID127_Msk                 (_U_(0x1) << AIC_IPR3_PID127_Pos)              /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID127                     AIC_IPR3_PID127_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IPR3_PID127_Msk instead */
#define AIC_IPR3_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (AIC_IPR3) Register MASK  (Use AIC_IPR3_Msk instead)  */
#define AIC_IPR3_Msk                        _U_(0xFFFFFFFF)                                /**< (AIC_IPR3) Register Mask  */

#define AIC_IPR3_PID_Pos                    0                                              /**< (AIC_IPR3 Position) Interrupt Pending */
#define AIC_IPR3_PID_Msk                    (_U_(0xFFFFFFFF) << AIC_IPR3_PID_Pos)          /**< (AIC_IPR3 Mask) PID */
#define AIC_IPR3_PID(value)                 (AIC_IPR3_PID_Msk & ((value) << AIC_IPR3_PID_Pos))  

/* -------- AIC_IMR : (AIC Offset: 0x30) (R/ 32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t INTM:1;                    /**< bit:      0  Interrupt Mask                           */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AIC_IMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AIC_IMR_OFFSET                      (0x30)                                        /**<  (AIC_IMR) Interrupt Mask Register  Offset */

#define AIC_IMR_INTM_Pos                    0                                              /**< (AIC_IMR) Interrupt Mask Position */
#define AIC_IMR_INTM_Msk                    (_U_(0x1) << AIC_IMR_INTM_Pos)                 /**< (AIC_IMR) Interrupt Mask Mask */
#define AIC_IMR_INTM                        AIC_IMR_INTM_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IMR_INTM_Msk instead */
#define AIC_IMR_MASK                        _U_(0x01)                                      /**< \deprecated (AIC_IMR) Register MASK  (Use AIC_IMR_Msk instead)  */
#define AIC_IMR_Msk                         _U_(0x01)                                      /**< (AIC_IMR) Register Mask  */


/* -------- AIC_CISR : (AIC Offset: 0x34) (R/ 32) Core Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NFIQ:1;                    /**< bit:      0  NFIQ Status                              */
    uint32_t NIRQ:1;                    /**< bit:      1  NIRQ Status                              */
    uint32_t :30;                       /**< bit:  2..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AIC_CISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AIC_CISR_OFFSET                     (0x34)                                        /**<  (AIC_CISR) Core Interrupt Status Register  Offset */

#define AIC_CISR_NFIQ_Pos                   0                                              /**< (AIC_CISR) NFIQ Status Position */
#define AIC_CISR_NFIQ_Msk                   (_U_(0x1) << AIC_CISR_NFIQ_Pos)                /**< (AIC_CISR) NFIQ Status Mask */
#define AIC_CISR_NFIQ                       AIC_CISR_NFIQ_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_CISR_NFIQ_Msk instead */
#define AIC_CISR_NIRQ_Pos                   1                                              /**< (AIC_CISR) NIRQ Status Position */
#define AIC_CISR_NIRQ_Msk                   (_U_(0x1) << AIC_CISR_NIRQ_Pos)                /**< (AIC_CISR) NIRQ Status Mask */
#define AIC_CISR_NIRQ                       AIC_CISR_NIRQ_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_CISR_NIRQ_Msk instead */
#define AIC_CISR_MASK                       _U_(0x03)                                      /**< \deprecated (AIC_CISR) Register MASK  (Use AIC_CISR_Msk instead)  */
#define AIC_CISR_Msk                        _U_(0x03)                                      /**< (AIC_CISR) Register Mask  */


/* -------- AIC_EOICR : (AIC Offset: 0x38) (/W 32) End of Interrupt Command Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ENDIT:1;                   /**< bit:      0  Interrupt Processing Complete Command    */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AIC_EOICR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AIC_EOICR_OFFSET                    (0x38)                                        /**<  (AIC_EOICR) End of Interrupt Command Register  Offset */

#define AIC_EOICR_ENDIT_Pos                 0                                              /**< (AIC_EOICR) Interrupt Processing Complete Command Position */
#define AIC_EOICR_ENDIT_Msk                 (_U_(0x1) << AIC_EOICR_ENDIT_Pos)              /**< (AIC_EOICR) Interrupt Processing Complete Command Mask */
#define AIC_EOICR_ENDIT                     AIC_EOICR_ENDIT_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_EOICR_ENDIT_Msk instead */
#define AIC_EOICR_MASK                      _U_(0x01)                                      /**< \deprecated (AIC_EOICR) Register MASK  (Use AIC_EOICR_Msk instead)  */
#define AIC_EOICR_Msk                       _U_(0x01)                                      /**< (AIC_EOICR) Register Mask  */


/* -------- AIC_SPU : (AIC Offset: 0x3c) (R/W 32) Spurious Interrupt Vector Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SIVR:32;                   /**< bit:  0..31  Spurious Interrupt Vector Register       */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AIC_SPU_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AIC_SPU_OFFSET                      (0x3C)                                        /**<  (AIC_SPU) Spurious Interrupt Vector Register  Offset */

#define AIC_SPU_SIVR_Pos                    0                                              /**< (AIC_SPU) Spurious Interrupt Vector Register Position */
#define AIC_SPU_SIVR_Msk                    (_U_(0xFFFFFFFF) << AIC_SPU_SIVR_Pos)          /**< (AIC_SPU) Spurious Interrupt Vector Register Mask */
#define AIC_SPU_SIVR(value)                 (AIC_SPU_SIVR_Msk & ((value) << AIC_SPU_SIVR_Pos))
#define AIC_SPU_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (AIC_SPU) Register MASK  (Use AIC_SPU_Msk instead)  */
#define AIC_SPU_Msk                         _U_(0xFFFFFFFF)                                /**< (AIC_SPU) Register Mask  */


/* -------- AIC_IECR : (AIC Offset: 0x40) (/W 32) Interrupt Enable Command Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t INTEN:1;                   /**< bit:      0  Interrupt Enable                         */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AIC_IECR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AIC_IECR_OFFSET                     (0x40)                                        /**<  (AIC_IECR) Interrupt Enable Command Register  Offset */

#define AIC_IECR_INTEN_Pos                  0                                              /**< (AIC_IECR) Interrupt Enable Position */
#define AIC_IECR_INTEN_Msk                  (_U_(0x1) << AIC_IECR_INTEN_Pos)               /**< (AIC_IECR) Interrupt Enable Mask */
#define AIC_IECR_INTEN                      AIC_IECR_INTEN_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IECR_INTEN_Msk instead */
#define AIC_IECR_MASK                       _U_(0x01)                                      /**< \deprecated (AIC_IECR) Register MASK  (Use AIC_IECR_Msk instead)  */
#define AIC_IECR_Msk                        _U_(0x01)                                      /**< (AIC_IECR) Register Mask  */


/* -------- AIC_IDCR : (AIC Offset: 0x44) (/W 32) Interrupt Disable Command Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t INTD:1;                    /**< bit:      0  Interrupt Disable                        */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AIC_IDCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AIC_IDCR_OFFSET                     (0x44)                                        /**<  (AIC_IDCR) Interrupt Disable Command Register  Offset */

#define AIC_IDCR_INTD_Pos                   0                                              /**< (AIC_IDCR) Interrupt Disable Position */
#define AIC_IDCR_INTD_Msk                   (_U_(0x1) << AIC_IDCR_INTD_Pos)                /**< (AIC_IDCR) Interrupt Disable Mask */
#define AIC_IDCR_INTD                       AIC_IDCR_INTD_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_IDCR_INTD_Msk instead */
#define AIC_IDCR_MASK                       _U_(0x01)                                      /**< \deprecated (AIC_IDCR) Register MASK  (Use AIC_IDCR_Msk instead)  */
#define AIC_IDCR_Msk                        _U_(0x01)                                      /**< (AIC_IDCR) Register Mask  */


/* -------- AIC_ICCR : (AIC Offset: 0x48) (/W 32) Interrupt Clear Command Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t INTCLR:1;                  /**< bit:      0  Interrupt Clear                          */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AIC_ICCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AIC_ICCR_OFFSET                     (0x48)                                        /**<  (AIC_ICCR) Interrupt Clear Command Register  Offset */

#define AIC_ICCR_INTCLR_Pos                 0                                              /**< (AIC_ICCR) Interrupt Clear Position */
#define AIC_ICCR_INTCLR_Msk                 (_U_(0x1) << AIC_ICCR_INTCLR_Pos)              /**< (AIC_ICCR) Interrupt Clear Mask */
#define AIC_ICCR_INTCLR                     AIC_ICCR_INTCLR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_ICCR_INTCLR_Msk instead */
#define AIC_ICCR_MASK                       _U_(0x01)                                      /**< \deprecated (AIC_ICCR) Register MASK  (Use AIC_ICCR_Msk instead)  */
#define AIC_ICCR_Msk                        _U_(0x01)                                      /**< (AIC_ICCR) Register Mask  */


/* -------- AIC_ISCR : (AIC Offset: 0x4c) (/W 32) Interrupt Set Command Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t INTSET:1;                  /**< bit:      0  Interrupt Set                            */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AIC_ISCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AIC_ISCR_OFFSET                     (0x4C)                                        /**<  (AIC_ISCR) Interrupt Set Command Register  Offset */

#define AIC_ISCR_INTSET_Pos                 0                                              /**< (AIC_ISCR) Interrupt Set Position */
#define AIC_ISCR_INTSET_Msk                 (_U_(0x1) << AIC_ISCR_INTSET_Pos)              /**< (AIC_ISCR) Interrupt Set Mask */
#define AIC_ISCR_INTSET                     AIC_ISCR_INTSET_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_ISCR_INTSET_Msk instead */
#define AIC_ISCR_MASK                       _U_(0x01)                                      /**< \deprecated (AIC_ISCR) Register MASK  (Use AIC_ISCR_Msk instead)  */
#define AIC_ISCR_Msk                        _U_(0x01)                                      /**< (AIC_ISCR) Register Mask  */


/* -------- AIC_DCR : (AIC Offset: 0x6c) (R/W 32) Debug Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PROT:1;                    /**< bit:      0  Protection Mode                          */
    uint32_t GMSK:1;                    /**< bit:      1  General Interrupt Mask                   */
    uint32_t :30;                       /**< bit:  2..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AIC_DCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AIC_DCR_OFFSET                      (0x6C)                                        /**<  (AIC_DCR) Debug Control Register  Offset */

#define AIC_DCR_PROT_Pos                    0                                              /**< (AIC_DCR) Protection Mode Position */
#define AIC_DCR_PROT_Msk                    (_U_(0x1) << AIC_DCR_PROT_Pos)                 /**< (AIC_DCR) Protection Mode Mask */
#define AIC_DCR_PROT                        AIC_DCR_PROT_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_DCR_PROT_Msk instead */
#define AIC_DCR_GMSK_Pos                    1                                              /**< (AIC_DCR) General Interrupt Mask Position */
#define AIC_DCR_GMSK_Msk                    (_U_(0x1) << AIC_DCR_GMSK_Pos)                 /**< (AIC_DCR) General Interrupt Mask Mask */
#define AIC_DCR_GMSK                        AIC_DCR_GMSK_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_DCR_GMSK_Msk instead */
#define AIC_DCR_MASK                        _U_(0x03)                                      /**< \deprecated (AIC_DCR) Register MASK  (Use AIC_DCR_Msk instead)  */
#define AIC_DCR_Msk                         _U_(0x03)                                      /**< (AIC_DCR) Register Mask  */


/* -------- AIC_WPMR : (AIC Offset: 0xe4) (R/W 32) Write Protection Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPEN:1;                    /**< bit:      0  Write Protection Enable                  */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPKEY:24;                  /**< bit:  8..31  Write Protection Key                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} AIC_WPMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AIC_WPMR_OFFSET                     (0xE4)                                        /**<  (AIC_WPMR) Write Protection Mode Register  Offset */

#define AIC_WPMR_WPEN_Pos                   0                                              /**< (AIC_WPMR) Write Protection Enable Position */
#define AIC_WPMR_WPEN_Msk                   (_U_(0x1) << AIC_WPMR_WPEN_Pos)                /**< (AIC_WPMR) Write Protection Enable Mask */
#define AIC_WPMR_WPEN                       AIC_WPMR_WPEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_WPMR_WPEN_Msk instead */
#define AIC_WPMR_WPKEY_Pos                  8                                              /**< (AIC_WPMR) Write Protection Key Position */
#define AIC_WPMR_WPKEY_Msk                  (_U_(0xFFFFFF) << AIC_WPMR_WPKEY_Pos)          /**< (AIC_WPMR) Write Protection Key Mask */
#define AIC_WPMR_WPKEY(value)               (AIC_WPMR_WPKEY_Msk & ((value) << AIC_WPMR_WPKEY_Pos))
#define   AIC_WPMR_WPKEY_PASSWD_Val         _U_(0x414943)                                  /**< (AIC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0.  */
#define AIC_WPMR_WPKEY_PASSWD               (AIC_WPMR_WPKEY_PASSWD_Val << AIC_WPMR_WPKEY_Pos)  /**< (AIC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0. Position  */
#define AIC_WPMR_MASK                       _U_(0xFFFFFF01)                                /**< \deprecated (AIC_WPMR) Register MASK  (Use AIC_WPMR_Msk instead)  */
#define AIC_WPMR_Msk                        _U_(0xFFFFFF01)                                /**< (AIC_WPMR) Register Mask  */


/* -------- AIC_WPSR : (AIC Offset: 0xe8) (R/ 32) Write Protection Status Register -------- */
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
} AIC_WPSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AIC_WPSR_OFFSET                     (0xE8)                                        /**<  (AIC_WPSR) Write Protection Status Register  Offset */

#define AIC_WPSR_WPVS_Pos                   0                                              /**< (AIC_WPSR) Write Protection Violation Status Position */
#define AIC_WPSR_WPVS_Msk                   (_U_(0x1) << AIC_WPSR_WPVS_Pos)                /**< (AIC_WPSR) Write Protection Violation Status Mask */
#define AIC_WPSR_WPVS                       AIC_WPSR_WPVS_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use AIC_WPSR_WPVS_Msk instead */
#define AIC_WPSR_WPVSRC_Pos                 8                                              /**< (AIC_WPSR) Write Protection Violation Source Position */
#define AIC_WPSR_WPVSRC_Msk                 (_U_(0xFFFF) << AIC_WPSR_WPVSRC_Pos)           /**< (AIC_WPSR) Write Protection Violation Source Mask */
#define AIC_WPSR_WPVSRC(value)              (AIC_WPSR_WPVSRC_Msk & ((value) << AIC_WPSR_WPVSRC_Pos))
#define AIC_WPSR_MASK                       _U_(0xFFFF01)                                  /**< \deprecated (AIC_WPSR) Register MASK  (Use AIC_WPSR_Msk instead)  */
#define AIC_WPSR_Msk                        _U_(0xFFFF01)                                  /**< (AIC_WPSR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief AIC hardware registers */
typedef struct {  
  __IO uint32_t AIC_SSR;        /**< (AIC Offset: 0x00) Source Select Register */
  __IO uint32_t AIC_SMR;        /**< (AIC Offset: 0x04) Source Mode Register */
  __IO uint32_t AIC_SVR;        /**< (AIC Offset: 0x08) Source Vector Register */
  __I  uint8_t                        Reserved1[4];
  __I  uint32_t AIC_IVR;        /**< (AIC Offset: 0x10) Interrupt Vector Register */
  __I  uint32_t AIC_FVR;        /**< (AIC Offset: 0x14) FIQ Vector Register */
  __I  uint32_t AIC_ISR;        /**< (AIC Offset: 0x18) Interrupt Status Register */
  __I  uint8_t                        Reserved2[4];
  __I  uint32_t AIC_IPR0;       /**< (AIC Offset: 0x20) Interrupt Pending Register 0 */
  __I  uint32_t AIC_IPR1;       /**< (AIC Offset: 0x24) Interrupt Pending Register 1 */
  __I  uint32_t AIC_IPR2;       /**< (AIC Offset: 0x28) Interrupt Pending Register 2 */
  __I  uint32_t AIC_IPR3;       /**< (AIC Offset: 0x2C) Interrupt Pending Register 3 */
  __I  uint32_t AIC_IMR;        /**< (AIC Offset: 0x30) Interrupt Mask Register */
  __I  uint32_t AIC_CISR;       /**< (AIC Offset: 0x34) Core Interrupt Status Register */
  __O  uint32_t AIC_EOICR;      /**< (AIC Offset: 0x38) End of Interrupt Command Register */
  __IO uint32_t AIC_SPU;        /**< (AIC Offset: 0x3C) Spurious Interrupt Vector Register */
  __O  uint32_t AIC_IECR;       /**< (AIC Offset: 0x40) Interrupt Enable Command Register */
  __O  uint32_t AIC_IDCR;       /**< (AIC Offset: 0x44) Interrupt Disable Command Register */
  __O  uint32_t AIC_ICCR;       /**< (AIC Offset: 0x48) Interrupt Clear Command Register */
  __O  uint32_t AIC_ISCR;       /**< (AIC Offset: 0x4C) Interrupt Set Command Register */
  __I  uint8_t                        Reserved3[28];
  __IO uint32_t AIC_DCR;        /**< (AIC Offset: 0x6C) Debug Control Register */
  __I  uint8_t                        Reserved4[116];
  __IO uint32_t AIC_WPMR;       /**< (AIC Offset: 0xE4) Write Protection Mode Register */
  __I  uint32_t AIC_WPSR;       /**< (AIC Offset: 0xE8) Write Protection Status Register */
} Aic;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief AIC hardware registers */
typedef struct {  
  __IO AIC_SSR_Type                   AIC_SSR;        /**< Offset: 0x00 (R/W  32) Source Select Register */
  __IO AIC_SMR_Type                   AIC_SMR;        /**< Offset: 0x04 (R/W  32) Source Mode Register */
  __IO AIC_SVR_Type                   AIC_SVR;        /**< Offset: 0x08 (R/W  32) Source Vector Register */
  __I  uint8_t                        Reserved1[4];
  __I  AIC_IVR_Type                   AIC_IVR;        /**< Offset: 0x10 (R/   32) Interrupt Vector Register */
  __I  AIC_FVR_Type                   AIC_FVR;        /**< Offset: 0x14 (R/   32) FIQ Vector Register */
  __I  AIC_ISR_Type                   AIC_ISR;        /**< Offset: 0x18 (R/   32) Interrupt Status Register */
  __I  uint8_t                        Reserved2[4];
  __I  AIC_IPR0_Type                  AIC_IPR0;       /**< Offset: 0x20 (R/   32) Interrupt Pending Register 0 */
  __I  AIC_IPR1_Type                  AIC_IPR1;       /**< Offset: 0x24 (R/   32) Interrupt Pending Register 1 */
  __I  AIC_IPR2_Type                  AIC_IPR2;       /**< Offset: 0x28 (R/   32) Interrupt Pending Register 2 */
  __I  AIC_IPR3_Type                  AIC_IPR3;       /**< Offset: 0x2C (R/   32) Interrupt Pending Register 3 */
  __I  AIC_IMR_Type                   AIC_IMR;        /**< Offset: 0x30 (R/   32) Interrupt Mask Register */
  __I  AIC_CISR_Type                  AIC_CISR;       /**< Offset: 0x34 (R/   32) Core Interrupt Status Register */
  __O  AIC_EOICR_Type                 AIC_EOICR;      /**< Offset: 0x38 ( /W  32) End of Interrupt Command Register */
  __IO AIC_SPU_Type                   AIC_SPU;        /**< Offset: 0x3C (R/W  32) Spurious Interrupt Vector Register */
  __O  AIC_IECR_Type                  AIC_IECR;       /**< Offset: 0x40 ( /W  32) Interrupt Enable Command Register */
  __O  AIC_IDCR_Type                  AIC_IDCR;       /**< Offset: 0x44 ( /W  32) Interrupt Disable Command Register */
  __O  AIC_ICCR_Type                  AIC_ICCR;       /**< Offset: 0x48 ( /W  32) Interrupt Clear Command Register */
  __O  AIC_ISCR_Type                  AIC_ISCR;       /**< Offset: 0x4C ( /W  32) Interrupt Set Command Register */
  __I  uint8_t                        Reserved3[28];
  __IO AIC_DCR_Type                   AIC_DCR;        /**< Offset: 0x6C (R/W  32) Debug Control Register */
  __I  uint8_t                        Reserved4[116];
  __IO AIC_WPMR_Type                  AIC_WPMR;       /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I  AIC_WPSR_Type                  AIC_WPSR;       /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
} Aic;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Advanced Interrupt Controller */

#endif /* _SAMA5D2_AIC_COMPONENT_H_ */
