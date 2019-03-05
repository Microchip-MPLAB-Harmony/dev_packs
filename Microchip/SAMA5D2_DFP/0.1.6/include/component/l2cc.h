/**
 * \file
 *
 * \brief Component description for L2CC
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
#ifndef _SAMA5D2_L2CC_COMPONENT_H_
#define _SAMA5D2_L2CC_COMPONENT_H_
#define _SAMA5D2_L2CC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 L2 Cache Controller
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR L2CC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define L2CC_11160                      /**< (L2CC) Module ID */
#define REV_L2CC D                      /**< (L2CC) Module revision */

/* -------- L2CC_IDR : (L2CC Offset: 0x00) (R/ 32) Cache ID Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ID:32;                     /**< bit:  0..31  Cache Controller ID                      */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_IDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_IDR_OFFSET                     (0x00)                                        /**<  (L2CC_IDR) Cache ID Register  Offset */

#define L2CC_IDR_ID_Pos                     0                                              /**< (L2CC_IDR) Cache Controller ID Position */
#define L2CC_IDR_ID_Msk                     (_U_(0xFFFFFFFF) << L2CC_IDR_ID_Pos)           /**< (L2CC_IDR) Cache Controller ID Mask */
#define L2CC_IDR_ID(value)                  (L2CC_IDR_ID_Msk & ((value) << L2CC_IDR_ID_Pos))
#define L2CC_IDR_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (L2CC_IDR) Register MASK  (Use L2CC_IDR_Msk instead)  */
#define L2CC_IDR_Msk                        _U_(0xFFFFFFFF)                                /**< (L2CC_IDR) Register Mask  */


/* -------- L2CC_TYPR : (L2CC Offset: 0x04) (R/ 32) Cache Type Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :6;                        /**< bit:   0..5  Reserved */
    uint32_t IL2ASS:1;                  /**< bit:      6  Instruction L2 Cache Associativity       */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t IL2WSIZE:3;                /**< bit:  8..10  Instruction L2 Cache Way Size            */
    uint32_t :7;                        /**< bit: 11..17  Reserved */
    uint32_t DL2ASS:1;                  /**< bit:     18  Data L2 Cache Associativity              */
    uint32_t :1;                        /**< bit:     19  Reserved */
    uint32_t DL2WSIZE:3;                /**< bit: 20..22  Data L2 Cache Way Size                   */
    uint32_t :9;                        /**< bit: 23..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_TYPR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_TYPR_OFFSET                    (0x04)                                        /**<  (L2CC_TYPR) Cache Type Register  Offset */

#define L2CC_TYPR_IL2ASS_Pos                6                                              /**< (L2CC_TYPR) Instruction L2 Cache Associativity Position */
#define L2CC_TYPR_IL2ASS_Msk                (_U_(0x1) << L2CC_TYPR_IL2ASS_Pos)             /**< (L2CC_TYPR) Instruction L2 Cache Associativity Mask */
#define L2CC_TYPR_IL2ASS                    L2CC_TYPR_IL2ASS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_TYPR_IL2ASS_Msk instead */
#define L2CC_TYPR_IL2WSIZE_Pos              8                                              /**< (L2CC_TYPR) Instruction L2 Cache Way Size Position */
#define L2CC_TYPR_IL2WSIZE_Msk              (_U_(0x7) << L2CC_TYPR_IL2WSIZE_Pos)           /**< (L2CC_TYPR) Instruction L2 Cache Way Size Mask */
#define L2CC_TYPR_IL2WSIZE(value)           (L2CC_TYPR_IL2WSIZE_Msk & ((value) << L2CC_TYPR_IL2WSIZE_Pos))
#define L2CC_TYPR_DL2ASS_Pos                18                                             /**< (L2CC_TYPR) Data L2 Cache Associativity Position */
#define L2CC_TYPR_DL2ASS_Msk                (_U_(0x1) << L2CC_TYPR_DL2ASS_Pos)             /**< (L2CC_TYPR) Data L2 Cache Associativity Mask */
#define L2CC_TYPR_DL2ASS                    L2CC_TYPR_DL2ASS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_TYPR_DL2ASS_Msk instead */
#define L2CC_TYPR_DL2WSIZE_Pos              20                                             /**< (L2CC_TYPR) Data L2 Cache Way Size Position */
#define L2CC_TYPR_DL2WSIZE_Msk              (_U_(0x7) << L2CC_TYPR_DL2WSIZE_Pos)           /**< (L2CC_TYPR) Data L2 Cache Way Size Mask */
#define L2CC_TYPR_DL2WSIZE(value)           (L2CC_TYPR_DL2WSIZE_Msk & ((value) << L2CC_TYPR_DL2WSIZE_Pos))
#define L2CC_TYPR_MASK                      _U_(0x740740)                                  /**< \deprecated (L2CC_TYPR) Register MASK  (Use L2CC_TYPR_Msk instead)  */
#define L2CC_TYPR_Msk                       _U_(0x740740)                                  /**< (L2CC_TYPR) Register Mask  */


/* -------- L2CC_CR : (L2CC Offset: 0x100) (R/W 32) Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t L2CEN:1;                   /**< bit:      0  L2 Cache Enable                          */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_CR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_CR_OFFSET                      (0x100)                                       /**<  (L2CC_CR) Control Register  Offset */

#define L2CC_CR_L2CEN_Pos                   0                                              /**< (L2CC_CR) L2 Cache Enable Position */
#define L2CC_CR_L2CEN_Msk                   (_U_(0x1) << L2CC_CR_L2CEN_Pos)                /**< (L2CC_CR) L2 Cache Enable Mask */
#define L2CC_CR_L2CEN                       L2CC_CR_L2CEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CR_L2CEN_Msk instead */
#define L2CC_CR_MASK                        _U_(0x01)                                      /**< \deprecated (L2CC_CR) Register MASK  (Use L2CC_CR_Msk instead)  */
#define L2CC_CR_Msk                         _U_(0x01)                                      /**< (L2CC_CR) Register Mask  */


/* -------- L2CC_ACR : (L2CC Offset: 0x104) (R/W 32) Auxiliary Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :10;                       /**< bit:   0..9  Reserved */
    uint32_t HPSO:1;                    /**< bit:     10  High Priority for SO and Dev Reads Enable */
    uint32_t SBDLE:1;                   /**< bit:     11  Store Buffer Device Limitation Enable    */
    uint32_t EXCC:1;                    /**< bit:     12  Exclusive Cache Configuration            */
    uint32_t SAIE:1;                    /**< bit:     13  Shared Attribute Invalidate Enable       */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t ASS:1;                     /**< bit:     16  Associativity                            */
    uint32_t WAYSIZE:3;                 /**< bit: 17..19  Way Size                                 */
    uint32_t EMBEN:1;                   /**< bit:     20  Event Monitor Bus Enable                 */
    uint32_t PEN:1;                     /**< bit:     21  Parity Enable                            */
    uint32_t SAOEN:1;                   /**< bit:     22  Shared Attribute Override Enable         */
    uint32_t FWA:2;                     /**< bit: 23..24  Force Write Allocate                     */
    uint32_t CRPOL:1;                   /**< bit:     25  Cache Replacement Policy                 */
    uint32_t NSLEN:1;                   /**< bit:     26  Non-Secure Lockdown Enable               */
    uint32_t NSIAC:1;                   /**< bit:     27  Non-Secure Interrupt Access Control      */
    uint32_t DPEN:1;                    /**< bit:     28  Data Prefetch Enable                     */
    uint32_t IPEN:1;                    /**< bit:     29  Instruction Prefetch Enable              */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_ACR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_ACR_OFFSET                     (0x104)                                       /**<  (L2CC_ACR) Auxiliary Control Register  Offset */

#define L2CC_ACR_HPSO_Pos                   10                                             /**< (L2CC_ACR) High Priority for SO and Dev Reads Enable Position */
#define L2CC_ACR_HPSO_Msk                   (_U_(0x1) << L2CC_ACR_HPSO_Pos)                /**< (L2CC_ACR) High Priority for SO and Dev Reads Enable Mask */
#define L2CC_ACR_HPSO                       L2CC_ACR_HPSO_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ACR_HPSO_Msk instead */
#define L2CC_ACR_SBDLE_Pos                  11                                             /**< (L2CC_ACR) Store Buffer Device Limitation Enable Position */
#define L2CC_ACR_SBDLE_Msk                  (_U_(0x1) << L2CC_ACR_SBDLE_Pos)               /**< (L2CC_ACR) Store Buffer Device Limitation Enable Mask */
#define L2CC_ACR_SBDLE                      L2CC_ACR_SBDLE_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ACR_SBDLE_Msk instead */
#define L2CC_ACR_EXCC_Pos                   12                                             /**< (L2CC_ACR) Exclusive Cache Configuration Position */
#define L2CC_ACR_EXCC_Msk                   (_U_(0x1) << L2CC_ACR_EXCC_Pos)                /**< (L2CC_ACR) Exclusive Cache Configuration Mask */
#define L2CC_ACR_EXCC                       L2CC_ACR_EXCC_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ACR_EXCC_Msk instead */
#define L2CC_ACR_SAIE_Pos                   13                                             /**< (L2CC_ACR) Shared Attribute Invalidate Enable Position */
#define L2CC_ACR_SAIE_Msk                   (_U_(0x1) << L2CC_ACR_SAIE_Pos)                /**< (L2CC_ACR) Shared Attribute Invalidate Enable Mask */
#define L2CC_ACR_SAIE                       L2CC_ACR_SAIE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ACR_SAIE_Msk instead */
#define L2CC_ACR_ASS_Pos                    16                                             /**< (L2CC_ACR) Associativity Position */
#define L2CC_ACR_ASS_Msk                    (_U_(0x1) << L2CC_ACR_ASS_Pos)                 /**< (L2CC_ACR) Associativity Mask */
#define L2CC_ACR_ASS                        L2CC_ACR_ASS_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ACR_ASS_Msk instead */
#define L2CC_ACR_WAYSIZE_Pos                17                                             /**< (L2CC_ACR) Way Size Position */
#define L2CC_ACR_WAYSIZE_Msk                (_U_(0x7) << L2CC_ACR_WAYSIZE_Pos)             /**< (L2CC_ACR) Way Size Mask */
#define L2CC_ACR_WAYSIZE(value)             (L2CC_ACR_WAYSIZE_Msk & ((value) << L2CC_ACR_WAYSIZE_Pos))
#define   L2CC_ACR_WAYSIZE_16KB_WAY_Val     _U_(0x1)                                       /**< (L2CC_ACR) 16-Kbyte way set associative  */
#define L2CC_ACR_WAYSIZE_16KB_WAY           (L2CC_ACR_WAYSIZE_16KB_WAY_Val << L2CC_ACR_WAYSIZE_Pos)  /**< (L2CC_ACR) 16-Kbyte way set associative Position  */
#define L2CC_ACR_EMBEN_Pos                  20                                             /**< (L2CC_ACR) Event Monitor Bus Enable Position */
#define L2CC_ACR_EMBEN_Msk                  (_U_(0x1) << L2CC_ACR_EMBEN_Pos)               /**< (L2CC_ACR) Event Monitor Bus Enable Mask */
#define L2CC_ACR_EMBEN                      L2CC_ACR_EMBEN_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ACR_EMBEN_Msk instead */
#define L2CC_ACR_PEN_Pos                    21                                             /**< (L2CC_ACR) Parity Enable Position */
#define L2CC_ACR_PEN_Msk                    (_U_(0x1) << L2CC_ACR_PEN_Pos)                 /**< (L2CC_ACR) Parity Enable Mask */
#define L2CC_ACR_PEN                        L2CC_ACR_PEN_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ACR_PEN_Msk instead */
#define L2CC_ACR_SAOEN_Pos                  22                                             /**< (L2CC_ACR) Shared Attribute Override Enable Position */
#define L2CC_ACR_SAOEN_Msk                  (_U_(0x1) << L2CC_ACR_SAOEN_Pos)               /**< (L2CC_ACR) Shared Attribute Override Enable Mask */
#define L2CC_ACR_SAOEN                      L2CC_ACR_SAOEN_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ACR_SAOEN_Msk instead */
#define L2CC_ACR_FWA_Pos                    23                                             /**< (L2CC_ACR) Force Write Allocate Position */
#define L2CC_ACR_FWA_Msk                    (_U_(0x3) << L2CC_ACR_FWA_Pos)                 /**< (L2CC_ACR) Force Write Allocate Mask */
#define L2CC_ACR_FWA(value)                 (L2CC_ACR_FWA_Msk & ((value) << L2CC_ACR_FWA_Pos))
#define L2CC_ACR_CRPOL_Pos                  25                                             /**< (L2CC_ACR) Cache Replacement Policy Position */
#define L2CC_ACR_CRPOL_Msk                  (_U_(0x1) << L2CC_ACR_CRPOL_Pos)               /**< (L2CC_ACR) Cache Replacement Policy Mask */
#define L2CC_ACR_CRPOL                      L2CC_ACR_CRPOL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ACR_CRPOL_Msk instead */
#define L2CC_ACR_NSLEN_Pos                  26                                             /**< (L2CC_ACR) Non-Secure Lockdown Enable Position */
#define L2CC_ACR_NSLEN_Msk                  (_U_(0x1) << L2CC_ACR_NSLEN_Pos)               /**< (L2CC_ACR) Non-Secure Lockdown Enable Mask */
#define L2CC_ACR_NSLEN                      L2CC_ACR_NSLEN_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ACR_NSLEN_Msk instead */
#define L2CC_ACR_NSIAC_Pos                  27                                             /**< (L2CC_ACR) Non-Secure Interrupt Access Control Position */
#define L2CC_ACR_NSIAC_Msk                  (_U_(0x1) << L2CC_ACR_NSIAC_Pos)               /**< (L2CC_ACR) Non-Secure Interrupt Access Control Mask */
#define L2CC_ACR_NSIAC                      L2CC_ACR_NSIAC_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ACR_NSIAC_Msk instead */
#define L2CC_ACR_DPEN_Pos                   28                                             /**< (L2CC_ACR) Data Prefetch Enable Position */
#define L2CC_ACR_DPEN_Msk                   (_U_(0x1) << L2CC_ACR_DPEN_Pos)                /**< (L2CC_ACR) Data Prefetch Enable Mask */
#define L2CC_ACR_DPEN                       L2CC_ACR_DPEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ACR_DPEN_Msk instead */
#define L2CC_ACR_IPEN_Pos                   29                                             /**< (L2CC_ACR) Instruction Prefetch Enable Position */
#define L2CC_ACR_IPEN_Msk                   (_U_(0x1) << L2CC_ACR_IPEN_Pos)                /**< (L2CC_ACR) Instruction Prefetch Enable Mask */
#define L2CC_ACR_IPEN                       L2CC_ACR_IPEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ACR_IPEN_Msk instead */
#define L2CC_ACR_MASK                       _U_(0x3FFF3C00)                                /**< \deprecated (L2CC_ACR) Register MASK  (Use L2CC_ACR_Msk instead)  */
#define L2CC_ACR_Msk                        _U_(0x3FFF3C00)                                /**< (L2CC_ACR) Register Mask  */


/* -------- L2CC_TRCR : (L2CC Offset: 0x108) (R/W 32) Tag RAM Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TSETLAT:3;                 /**< bit:   0..2  Setup Latency                            */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t TRDLAT:3;                  /**< bit:   4..6  Read Access Latency                      */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t TWRLAT:3;                  /**< bit:  8..10  Write Access Latency                     */
    uint32_t :21;                       /**< bit: 11..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_TRCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_TRCR_OFFSET                    (0x108)                                       /**<  (L2CC_TRCR) Tag RAM Control Register  Offset */

#define L2CC_TRCR_TSETLAT_Pos               0                                              /**< (L2CC_TRCR) Setup Latency Position */
#define L2CC_TRCR_TSETLAT_Msk               (_U_(0x7) << L2CC_TRCR_TSETLAT_Pos)            /**< (L2CC_TRCR) Setup Latency Mask */
#define L2CC_TRCR_TSETLAT(value)            (L2CC_TRCR_TSETLAT_Msk & ((value) << L2CC_TRCR_TSETLAT_Pos))
#define L2CC_TRCR_TRDLAT_Pos                4                                              /**< (L2CC_TRCR) Read Access Latency Position */
#define L2CC_TRCR_TRDLAT_Msk                (_U_(0x7) << L2CC_TRCR_TRDLAT_Pos)             /**< (L2CC_TRCR) Read Access Latency Mask */
#define L2CC_TRCR_TRDLAT(value)             (L2CC_TRCR_TRDLAT_Msk & ((value) << L2CC_TRCR_TRDLAT_Pos))
#define L2CC_TRCR_TWRLAT_Pos                8                                              /**< (L2CC_TRCR) Write Access Latency Position */
#define L2CC_TRCR_TWRLAT_Msk                (_U_(0x7) << L2CC_TRCR_TWRLAT_Pos)             /**< (L2CC_TRCR) Write Access Latency Mask */
#define L2CC_TRCR_TWRLAT(value)             (L2CC_TRCR_TWRLAT_Msk & ((value) << L2CC_TRCR_TWRLAT_Pos))
#define L2CC_TRCR_MASK                      _U_(0x777)                                     /**< \deprecated (L2CC_TRCR) Register MASK  (Use L2CC_TRCR_Msk instead)  */
#define L2CC_TRCR_Msk                       _U_(0x777)                                     /**< (L2CC_TRCR) Register Mask  */


/* -------- L2CC_DRCR : (L2CC Offset: 0x10c) (R/W 32) Data RAM Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DSETLAT:3;                 /**< bit:   0..2  Setup Latency                            */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t DRDLAT:3;                  /**< bit:   4..6  Read Access Latency                      */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t DWRLAT:3;                  /**< bit:  8..10  Write Access Latency                     */
    uint32_t :21;                       /**< bit: 11..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_DRCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_DRCR_OFFSET                    (0x10C)                                       /**<  (L2CC_DRCR) Data RAM Control Register  Offset */

#define L2CC_DRCR_DSETLAT_Pos               0                                              /**< (L2CC_DRCR) Setup Latency Position */
#define L2CC_DRCR_DSETLAT_Msk               (_U_(0x7) << L2CC_DRCR_DSETLAT_Pos)            /**< (L2CC_DRCR) Setup Latency Mask */
#define L2CC_DRCR_DSETLAT(value)            (L2CC_DRCR_DSETLAT_Msk & ((value) << L2CC_DRCR_DSETLAT_Pos))
#define L2CC_DRCR_DRDLAT_Pos                4                                              /**< (L2CC_DRCR) Read Access Latency Position */
#define L2CC_DRCR_DRDLAT_Msk                (_U_(0x7) << L2CC_DRCR_DRDLAT_Pos)             /**< (L2CC_DRCR) Read Access Latency Mask */
#define L2CC_DRCR_DRDLAT(value)             (L2CC_DRCR_DRDLAT_Msk & ((value) << L2CC_DRCR_DRDLAT_Pos))
#define L2CC_DRCR_DWRLAT_Pos                8                                              /**< (L2CC_DRCR) Write Access Latency Position */
#define L2CC_DRCR_DWRLAT_Msk                (_U_(0x7) << L2CC_DRCR_DWRLAT_Pos)             /**< (L2CC_DRCR) Write Access Latency Mask */
#define L2CC_DRCR_DWRLAT(value)             (L2CC_DRCR_DWRLAT_Msk & ((value) << L2CC_DRCR_DWRLAT_Pos))
#define L2CC_DRCR_MASK                      _U_(0x777)                                     /**< \deprecated (L2CC_DRCR) Register MASK  (Use L2CC_DRCR_Msk instead)  */
#define L2CC_DRCR_Msk                       _U_(0x777)                                     /**< (L2CC_DRCR) Register Mask  */


/* -------- L2CC_ECR : (L2CC Offset: 0x200) (R/W 32) Event Counter Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t EVCEN:1;                   /**< bit:      0  Event Counter Enable                     */
    uint32_t EVC0RST:1;                 /**< bit:      1  Event Counter 0 Reset                    */
    uint32_t EVC1RST:1;                 /**< bit:      2  Event Counter 1 Reset                    */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_ECR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_ECR_OFFSET                     (0x200)                                       /**<  (L2CC_ECR) Event Counter Control Register  Offset */

#define L2CC_ECR_EVCEN_Pos                  0                                              /**< (L2CC_ECR) Event Counter Enable Position */
#define L2CC_ECR_EVCEN_Msk                  (_U_(0x1) << L2CC_ECR_EVCEN_Pos)               /**< (L2CC_ECR) Event Counter Enable Mask */
#define L2CC_ECR_EVCEN                      L2CC_ECR_EVCEN_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ECR_EVCEN_Msk instead */
#define L2CC_ECR_EVC0RST_Pos                1                                              /**< (L2CC_ECR) Event Counter 0 Reset Position */
#define L2CC_ECR_EVC0RST_Msk                (_U_(0x1) << L2CC_ECR_EVC0RST_Pos)             /**< (L2CC_ECR) Event Counter 0 Reset Mask */
#define L2CC_ECR_EVC0RST                    L2CC_ECR_EVC0RST_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ECR_EVC0RST_Msk instead */
#define L2CC_ECR_EVC1RST_Pos                2                                              /**< (L2CC_ECR) Event Counter 1 Reset Position */
#define L2CC_ECR_EVC1RST_Msk                (_U_(0x1) << L2CC_ECR_EVC1RST_Pos)             /**< (L2CC_ECR) Event Counter 1 Reset Mask */
#define L2CC_ECR_EVC1RST                    L2CC_ECR_EVC1RST_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ECR_EVC1RST_Msk instead */
#define L2CC_ECR_MASK                       _U_(0x07)                                      /**< \deprecated (L2CC_ECR) Register MASK  (Use L2CC_ECR_Msk instead)  */
#define L2CC_ECR_Msk                        _U_(0x07)                                      /**< (L2CC_ECR) Register Mask  */


/* -------- L2CC_ECFGR1 : (L2CC Offset: 0x204) (R/W 32) Event Counter 1 Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t EIGEN:2;                   /**< bit:   0..1  Event Counter Interrupt Generation       */
    uint32_t ESRC:4;                    /**< bit:   2..5  Event Counter Source                     */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_ECFGR1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_ECFGR1_OFFSET                  (0x204)                                       /**<  (L2CC_ECFGR1) Event Counter 1 Configuration Register  Offset */

#define L2CC_ECFGR1_EIGEN_Pos               0                                              /**< (L2CC_ECFGR1) Event Counter Interrupt Generation Position */
#define L2CC_ECFGR1_EIGEN_Msk               (_U_(0x3) << L2CC_ECFGR1_EIGEN_Pos)            /**< (L2CC_ECFGR1) Event Counter Interrupt Generation Mask */
#define L2CC_ECFGR1_EIGEN(value)            (L2CC_ECFGR1_EIGEN_Msk & ((value) << L2CC_ECFGR1_EIGEN_Pos))
#define   L2CC_ECFGR1_EIGEN_INT_DIS_Val     _U_(0x0)                                       /**< (L2CC_ECFGR1) Disables (default)  */
#define   L2CC_ECFGR1_EIGEN_INT_EN_INCR_Val _U_(0x1)                                       /**< (L2CC_ECFGR1) Enables with Increment condition  */
#define   L2CC_ECFGR1_EIGEN_INT_EN_OVER_Val _U_(0x2)                                       /**< (L2CC_ECFGR1) Enables with Overflow condition  */
#define   L2CC_ECFGR1_EIGEN_INT_GEN_DIS_Val _U_(0x3)                                       /**< (L2CC_ECFGR1) Disables Interrupt generation  */
#define L2CC_ECFGR1_EIGEN_INT_DIS           (L2CC_ECFGR1_EIGEN_INT_DIS_Val << L2CC_ECFGR1_EIGEN_Pos)  /**< (L2CC_ECFGR1) Disables (default) Position  */
#define L2CC_ECFGR1_EIGEN_INT_EN_INCR       (L2CC_ECFGR1_EIGEN_INT_EN_INCR_Val << L2CC_ECFGR1_EIGEN_Pos)  /**< (L2CC_ECFGR1) Enables with Increment condition Position  */
#define L2CC_ECFGR1_EIGEN_INT_EN_OVER       (L2CC_ECFGR1_EIGEN_INT_EN_OVER_Val << L2CC_ECFGR1_EIGEN_Pos)  /**< (L2CC_ECFGR1) Enables with Overflow condition Position  */
#define L2CC_ECFGR1_EIGEN_INT_GEN_DIS       (L2CC_ECFGR1_EIGEN_INT_GEN_DIS_Val << L2CC_ECFGR1_EIGEN_Pos)  /**< (L2CC_ECFGR1) Disables Interrupt generation Position  */
#define L2CC_ECFGR1_ESRC_Pos                2                                              /**< (L2CC_ECFGR1) Event Counter Source Position */
#define L2CC_ECFGR1_ESRC_Msk                (_U_(0xF) << L2CC_ECFGR1_ESRC_Pos)             /**< (L2CC_ECFGR1) Event Counter Source Mask */
#define L2CC_ECFGR1_ESRC(value)             (L2CC_ECFGR1_ESRC_Msk & ((value) << L2CC_ECFGR1_ESRC_Pos))
#define   L2CC_ECFGR1_ESRC_CNT_DIS_Val      _U_(0x0)                                       /**< (L2CC_ECFGR1) Counter Disabled  */
#define   L2CC_ECFGR1_ESRC_SRC_CO_Val       _U_(0x1)                                       /**< (L2CC_ECFGR1) Source is CO  */
#define   L2CC_ECFGR1_ESRC_SRC_DRHIT_Val    _U_(0x2)                                       /**< (L2CC_ECFGR1) Source is DRHIT  */
#define   L2CC_ECFGR1_ESRC_SRC_DRREQ_Val    _U_(0x3)                                       /**< (L2CC_ECFGR1) Source is DRREQ  */
#define   L2CC_ECFGR1_ESRC_SRC_DWHIT_Val    _U_(0x4)                                       /**< (L2CC_ECFGR1) Source is DWHIT  */
#define   L2CC_ECFGR1_ESRC_SRC_DWREQ_Val    _U_(0x5)                                       /**< (L2CC_ECFGR1) Source is DWREQ  */
#define   L2CC_ECFGR1_ESRC_SRC_DWTREQ_Val   _U_(0x6)                                       /**< (L2CC_ECFGR1) Source is DWTREQ  */
#define   L2CC_ECFGR1_ESRC_SRC_IRHIT_Val    _U_(0x7)                                       /**< (L2CC_ECFGR1) Source is IRHIT  */
#define   L2CC_ECFGR1_ESRC_SRC_IRREQ_Val    _U_(0x8)                                       /**< (L2CC_ECFGR1) Source is IRREQ  */
#define   L2CC_ECFGR1_ESRC_SRC_WA_Val       _U_(0x9)                                       /**< (L2CC_ECFGR1) Source is WA  */
#define   L2CC_ECFGR1_ESRC_SRC_IPFALLOC_Val _U_(0xA)                                       /**< (L2CC_ECFGR1) Source is IPFALLOC  */
#define   L2CC_ECFGR1_ESRC_SRC_EPFHIT_Val   _U_(0xB)                                       /**< (L2CC_ECFGR1) Source is EPFHIT  */
#define   L2CC_ECFGR1_ESRC_SRC_EPFALLOC_Val _U_(0xC)                                       /**< (L2CC_ECFGR1) Source is EPFALLOC  */
#define   L2CC_ECFGR1_ESRC_SRC_SRRCVD_Val   _U_(0xD)                                       /**< (L2CC_ECFGR1) Source is SRRCVD  */
#define   L2CC_ECFGR1_ESRC_SRC_SRCONF_Val   _U_(0xE)                                       /**< (L2CC_ECFGR1) Source is SRCONF  */
#define   L2CC_ECFGR1_ESRC_SRC_EPFRCVD_Val  _U_(0xF)                                       /**< (L2CC_ECFGR1) Source is EPFRCVD  */
#define L2CC_ECFGR1_ESRC_CNT_DIS            (L2CC_ECFGR1_ESRC_CNT_DIS_Val << L2CC_ECFGR1_ESRC_Pos)  /**< (L2CC_ECFGR1) Counter Disabled Position  */
#define L2CC_ECFGR1_ESRC_SRC_CO             (L2CC_ECFGR1_ESRC_SRC_CO_Val << L2CC_ECFGR1_ESRC_Pos)  /**< (L2CC_ECFGR1) Source is CO Position  */
#define L2CC_ECFGR1_ESRC_SRC_DRHIT          (L2CC_ECFGR1_ESRC_SRC_DRHIT_Val << L2CC_ECFGR1_ESRC_Pos)  /**< (L2CC_ECFGR1) Source is DRHIT Position  */
#define L2CC_ECFGR1_ESRC_SRC_DRREQ          (L2CC_ECFGR1_ESRC_SRC_DRREQ_Val << L2CC_ECFGR1_ESRC_Pos)  /**< (L2CC_ECFGR1) Source is DRREQ Position  */
#define L2CC_ECFGR1_ESRC_SRC_DWHIT          (L2CC_ECFGR1_ESRC_SRC_DWHIT_Val << L2CC_ECFGR1_ESRC_Pos)  /**< (L2CC_ECFGR1) Source is DWHIT Position  */
#define L2CC_ECFGR1_ESRC_SRC_DWREQ          (L2CC_ECFGR1_ESRC_SRC_DWREQ_Val << L2CC_ECFGR1_ESRC_Pos)  /**< (L2CC_ECFGR1) Source is DWREQ Position  */
#define L2CC_ECFGR1_ESRC_SRC_DWTREQ         (L2CC_ECFGR1_ESRC_SRC_DWTREQ_Val << L2CC_ECFGR1_ESRC_Pos)  /**< (L2CC_ECFGR1) Source is DWTREQ Position  */
#define L2CC_ECFGR1_ESRC_SRC_IRHIT          (L2CC_ECFGR1_ESRC_SRC_IRHIT_Val << L2CC_ECFGR1_ESRC_Pos)  /**< (L2CC_ECFGR1) Source is IRHIT Position  */
#define L2CC_ECFGR1_ESRC_SRC_IRREQ          (L2CC_ECFGR1_ESRC_SRC_IRREQ_Val << L2CC_ECFGR1_ESRC_Pos)  /**< (L2CC_ECFGR1) Source is IRREQ Position  */
#define L2CC_ECFGR1_ESRC_SRC_WA             (L2CC_ECFGR1_ESRC_SRC_WA_Val << L2CC_ECFGR1_ESRC_Pos)  /**< (L2CC_ECFGR1) Source is WA Position  */
#define L2CC_ECFGR1_ESRC_SRC_IPFALLOC       (L2CC_ECFGR1_ESRC_SRC_IPFALLOC_Val << L2CC_ECFGR1_ESRC_Pos)  /**< (L2CC_ECFGR1) Source is IPFALLOC Position  */
#define L2CC_ECFGR1_ESRC_SRC_EPFHIT         (L2CC_ECFGR1_ESRC_SRC_EPFHIT_Val << L2CC_ECFGR1_ESRC_Pos)  /**< (L2CC_ECFGR1) Source is EPFHIT Position  */
#define L2CC_ECFGR1_ESRC_SRC_EPFALLOC       (L2CC_ECFGR1_ESRC_SRC_EPFALLOC_Val << L2CC_ECFGR1_ESRC_Pos)  /**< (L2CC_ECFGR1) Source is EPFALLOC Position  */
#define L2CC_ECFGR1_ESRC_SRC_SRRCVD         (L2CC_ECFGR1_ESRC_SRC_SRRCVD_Val << L2CC_ECFGR1_ESRC_Pos)  /**< (L2CC_ECFGR1) Source is SRRCVD Position  */
#define L2CC_ECFGR1_ESRC_SRC_SRCONF         (L2CC_ECFGR1_ESRC_SRC_SRCONF_Val << L2CC_ECFGR1_ESRC_Pos)  /**< (L2CC_ECFGR1) Source is SRCONF Position  */
#define L2CC_ECFGR1_ESRC_SRC_EPFRCVD        (L2CC_ECFGR1_ESRC_SRC_EPFRCVD_Val << L2CC_ECFGR1_ESRC_Pos)  /**< (L2CC_ECFGR1) Source is EPFRCVD Position  */
#define L2CC_ECFGR1_MASK                    _U_(0x3F)                                      /**< \deprecated (L2CC_ECFGR1) Register MASK  (Use L2CC_ECFGR1_Msk instead)  */
#define L2CC_ECFGR1_Msk                     _U_(0x3F)                                      /**< (L2CC_ECFGR1) Register Mask  */


/* -------- L2CC_ECFGR0 : (L2CC Offset: 0x208) (R/W 32) Event Counter 0 Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t EIGEN:2;                   /**< bit:   0..1  Event Counter Interrupt Generation       */
    uint32_t ESRC:4;                    /**< bit:   2..5  Event Counter Source                     */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_ECFGR0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_ECFGR0_OFFSET                  (0x208)                                       /**<  (L2CC_ECFGR0) Event Counter 0 Configuration Register  Offset */

#define L2CC_ECFGR0_EIGEN_Pos               0                                              /**< (L2CC_ECFGR0) Event Counter Interrupt Generation Position */
#define L2CC_ECFGR0_EIGEN_Msk               (_U_(0x3) << L2CC_ECFGR0_EIGEN_Pos)            /**< (L2CC_ECFGR0) Event Counter Interrupt Generation Mask */
#define L2CC_ECFGR0_EIGEN(value)            (L2CC_ECFGR0_EIGEN_Msk & ((value) << L2CC_ECFGR0_EIGEN_Pos))
#define   L2CC_ECFGR0_EIGEN_INT_DIS_Val     _U_(0x0)                                       /**< (L2CC_ECFGR0) Disables (default)  */
#define   L2CC_ECFGR0_EIGEN_INT_EN_INCR_Val _U_(0x1)                                       /**< (L2CC_ECFGR0) Enables with Increment condition  */
#define   L2CC_ECFGR0_EIGEN_INT_EN_OVER_Val _U_(0x2)                                       /**< (L2CC_ECFGR0) Enables with Overflow condition  */
#define   L2CC_ECFGR0_EIGEN_INT_GEN_DIS_Val _U_(0x3)                                       /**< (L2CC_ECFGR0) Disables Interrupt generation  */
#define L2CC_ECFGR0_EIGEN_INT_DIS           (L2CC_ECFGR0_EIGEN_INT_DIS_Val << L2CC_ECFGR0_EIGEN_Pos)  /**< (L2CC_ECFGR0) Disables (default) Position  */
#define L2CC_ECFGR0_EIGEN_INT_EN_INCR       (L2CC_ECFGR0_EIGEN_INT_EN_INCR_Val << L2CC_ECFGR0_EIGEN_Pos)  /**< (L2CC_ECFGR0) Enables with Increment condition Position  */
#define L2CC_ECFGR0_EIGEN_INT_EN_OVER       (L2CC_ECFGR0_EIGEN_INT_EN_OVER_Val << L2CC_ECFGR0_EIGEN_Pos)  /**< (L2CC_ECFGR0) Enables with Overflow condition Position  */
#define L2CC_ECFGR0_EIGEN_INT_GEN_DIS       (L2CC_ECFGR0_EIGEN_INT_GEN_DIS_Val << L2CC_ECFGR0_EIGEN_Pos)  /**< (L2CC_ECFGR0) Disables Interrupt generation Position  */
#define L2CC_ECFGR0_ESRC_Pos                2                                              /**< (L2CC_ECFGR0) Event Counter Source Position */
#define L2CC_ECFGR0_ESRC_Msk                (_U_(0xF) << L2CC_ECFGR0_ESRC_Pos)             /**< (L2CC_ECFGR0) Event Counter Source Mask */
#define L2CC_ECFGR0_ESRC(value)             (L2CC_ECFGR0_ESRC_Msk & ((value) << L2CC_ECFGR0_ESRC_Pos))
#define   L2CC_ECFGR0_ESRC_CNT_DIS_Val      _U_(0x0)                                       /**< (L2CC_ECFGR0) Counter Disabled  */
#define   L2CC_ECFGR0_ESRC_SRC_CO_Val       _U_(0x1)                                       /**< (L2CC_ECFGR0) Source is CO  */
#define   L2CC_ECFGR0_ESRC_SRC_DRHIT_Val    _U_(0x2)                                       /**< (L2CC_ECFGR0) Source is DRHIT  */
#define   L2CC_ECFGR0_ESRC_SRC_DRREQ_Val    _U_(0x3)                                       /**< (L2CC_ECFGR0) Source is DRREQ  */
#define   L2CC_ECFGR0_ESRC_SRC_DWHIT_Val    _U_(0x4)                                       /**< (L2CC_ECFGR0) Source is DWHIT  */
#define   L2CC_ECFGR0_ESRC_SRC_DWREQ_Val    _U_(0x5)                                       /**< (L2CC_ECFGR0) Source is DWREQ  */
#define   L2CC_ECFGR0_ESRC_SRC_DWTREQ_Val   _U_(0x6)                                       /**< (L2CC_ECFGR0) Source is DWTREQ  */
#define   L2CC_ECFGR0_ESRC_SRC_IRHIT_Val    _U_(0x7)                                       /**< (L2CC_ECFGR0) Source is IRHIT  */
#define   L2CC_ECFGR0_ESRC_SRC_IRREQ_Val    _U_(0x8)                                       /**< (L2CC_ECFGR0) Source is IRREQ  */
#define   L2CC_ECFGR0_ESRC_SRC_WA_Val       _U_(0x9)                                       /**< (L2CC_ECFGR0) Source is WA  */
#define   L2CC_ECFGR0_ESRC_SRC_IPFALLOC_Val _U_(0xA)                                       /**< (L2CC_ECFGR0) Source is IPFALLOC  */
#define   L2CC_ECFGR0_ESRC_SRC_EPFHIT_Val   _U_(0xB)                                       /**< (L2CC_ECFGR0) Source is EPFHIT  */
#define   L2CC_ECFGR0_ESRC_SRC_EPFALLOC_Val _U_(0xC)                                       /**< (L2CC_ECFGR0) Source is EPFALLOC  */
#define   L2CC_ECFGR0_ESRC_SRC_SRRCVD_Val   _U_(0xD)                                       /**< (L2CC_ECFGR0) Source is SRRCVD  */
#define   L2CC_ECFGR0_ESRC_SRC_SRCONF_Val   _U_(0xE)                                       /**< (L2CC_ECFGR0) Source is SRCONF  */
#define   L2CC_ECFGR0_ESRC_SRC_EPFRCVD_Val  _U_(0xF)                                       /**< (L2CC_ECFGR0) Source is EPFRCVD  */
#define L2CC_ECFGR0_ESRC_CNT_DIS            (L2CC_ECFGR0_ESRC_CNT_DIS_Val << L2CC_ECFGR0_ESRC_Pos)  /**< (L2CC_ECFGR0) Counter Disabled Position  */
#define L2CC_ECFGR0_ESRC_SRC_CO             (L2CC_ECFGR0_ESRC_SRC_CO_Val << L2CC_ECFGR0_ESRC_Pos)  /**< (L2CC_ECFGR0) Source is CO Position  */
#define L2CC_ECFGR0_ESRC_SRC_DRHIT          (L2CC_ECFGR0_ESRC_SRC_DRHIT_Val << L2CC_ECFGR0_ESRC_Pos)  /**< (L2CC_ECFGR0) Source is DRHIT Position  */
#define L2CC_ECFGR0_ESRC_SRC_DRREQ          (L2CC_ECFGR0_ESRC_SRC_DRREQ_Val << L2CC_ECFGR0_ESRC_Pos)  /**< (L2CC_ECFGR0) Source is DRREQ Position  */
#define L2CC_ECFGR0_ESRC_SRC_DWHIT          (L2CC_ECFGR0_ESRC_SRC_DWHIT_Val << L2CC_ECFGR0_ESRC_Pos)  /**< (L2CC_ECFGR0) Source is DWHIT Position  */
#define L2CC_ECFGR0_ESRC_SRC_DWREQ          (L2CC_ECFGR0_ESRC_SRC_DWREQ_Val << L2CC_ECFGR0_ESRC_Pos)  /**< (L2CC_ECFGR0) Source is DWREQ Position  */
#define L2CC_ECFGR0_ESRC_SRC_DWTREQ         (L2CC_ECFGR0_ESRC_SRC_DWTREQ_Val << L2CC_ECFGR0_ESRC_Pos)  /**< (L2CC_ECFGR0) Source is DWTREQ Position  */
#define L2CC_ECFGR0_ESRC_SRC_IRHIT          (L2CC_ECFGR0_ESRC_SRC_IRHIT_Val << L2CC_ECFGR0_ESRC_Pos)  /**< (L2CC_ECFGR0) Source is IRHIT Position  */
#define L2CC_ECFGR0_ESRC_SRC_IRREQ          (L2CC_ECFGR0_ESRC_SRC_IRREQ_Val << L2CC_ECFGR0_ESRC_Pos)  /**< (L2CC_ECFGR0) Source is IRREQ Position  */
#define L2CC_ECFGR0_ESRC_SRC_WA             (L2CC_ECFGR0_ESRC_SRC_WA_Val << L2CC_ECFGR0_ESRC_Pos)  /**< (L2CC_ECFGR0) Source is WA Position  */
#define L2CC_ECFGR0_ESRC_SRC_IPFALLOC       (L2CC_ECFGR0_ESRC_SRC_IPFALLOC_Val << L2CC_ECFGR0_ESRC_Pos)  /**< (L2CC_ECFGR0) Source is IPFALLOC Position  */
#define L2CC_ECFGR0_ESRC_SRC_EPFHIT         (L2CC_ECFGR0_ESRC_SRC_EPFHIT_Val << L2CC_ECFGR0_ESRC_Pos)  /**< (L2CC_ECFGR0) Source is EPFHIT Position  */
#define L2CC_ECFGR0_ESRC_SRC_EPFALLOC       (L2CC_ECFGR0_ESRC_SRC_EPFALLOC_Val << L2CC_ECFGR0_ESRC_Pos)  /**< (L2CC_ECFGR0) Source is EPFALLOC Position  */
#define L2CC_ECFGR0_ESRC_SRC_SRRCVD         (L2CC_ECFGR0_ESRC_SRC_SRRCVD_Val << L2CC_ECFGR0_ESRC_Pos)  /**< (L2CC_ECFGR0) Source is SRRCVD Position  */
#define L2CC_ECFGR0_ESRC_SRC_SRCONF         (L2CC_ECFGR0_ESRC_SRC_SRCONF_Val << L2CC_ECFGR0_ESRC_Pos)  /**< (L2CC_ECFGR0) Source is SRCONF Position  */
#define L2CC_ECFGR0_ESRC_SRC_EPFRCVD        (L2CC_ECFGR0_ESRC_SRC_EPFRCVD_Val << L2CC_ECFGR0_ESRC_Pos)  /**< (L2CC_ECFGR0) Source is EPFRCVD Position  */
#define L2CC_ECFGR0_MASK                    _U_(0x3F)                                      /**< \deprecated (L2CC_ECFGR0) Register MASK  (Use L2CC_ECFGR0_Msk instead)  */
#define L2CC_ECFGR0_Msk                     _U_(0x3F)                                      /**< (L2CC_ECFGR0) Register Mask  */


/* -------- L2CC_EVR1 : (L2CC Offset: 0x20c) (R/W 32) Event Counter 1 Value Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t VALUE:32;                  /**< bit:  0..31  Event Counter Value                      */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_EVR1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_EVR1_OFFSET                    (0x20C)                                       /**<  (L2CC_EVR1) Event Counter 1 Value Register  Offset */

#define L2CC_EVR1_VALUE_Pos                 0                                              /**< (L2CC_EVR1) Event Counter Value Position */
#define L2CC_EVR1_VALUE_Msk                 (_U_(0xFFFFFFFF) << L2CC_EVR1_VALUE_Pos)       /**< (L2CC_EVR1) Event Counter Value Mask */
#define L2CC_EVR1_VALUE(value)              (L2CC_EVR1_VALUE_Msk & ((value) << L2CC_EVR1_VALUE_Pos))
#define L2CC_EVR1_MASK                      _U_(0xFFFFFFFF)                                /**< \deprecated (L2CC_EVR1) Register MASK  (Use L2CC_EVR1_Msk instead)  */
#define L2CC_EVR1_Msk                       _U_(0xFFFFFFFF)                                /**< (L2CC_EVR1) Register Mask  */


/* -------- L2CC_EVR0 : (L2CC Offset: 0x210) (R/W 32) Event Counter 0 Value Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t VALUE:32;                  /**< bit:  0..31  Event Counter Value                      */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_EVR0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_EVR0_OFFSET                    (0x210)                                       /**<  (L2CC_EVR0) Event Counter 0 Value Register  Offset */

#define L2CC_EVR0_VALUE_Pos                 0                                              /**< (L2CC_EVR0) Event Counter Value Position */
#define L2CC_EVR0_VALUE_Msk                 (_U_(0xFFFFFFFF) << L2CC_EVR0_VALUE_Pos)       /**< (L2CC_EVR0) Event Counter Value Mask */
#define L2CC_EVR0_VALUE(value)              (L2CC_EVR0_VALUE_Msk & ((value) << L2CC_EVR0_VALUE_Pos))
#define L2CC_EVR0_MASK                      _U_(0xFFFFFFFF)                                /**< \deprecated (L2CC_EVR0) Register MASK  (Use L2CC_EVR0_Msk instead)  */
#define L2CC_EVR0_Msk                       _U_(0xFFFFFFFF)                                /**< (L2CC_EVR0) Register Mask  */


/* -------- L2CC_IMR : (L2CC Offset: 0x214) (R/W 32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ECNTR:1;                   /**< bit:      0  Event Counter 1/0 Overflow Increment     */
    uint32_t PARRT:1;                   /**< bit:      1  Parity Error on L2 Tag RAM, Read         */
    uint32_t PARRD:1;                   /**< bit:      2  Parity Error on L2 Data RAM, Read        */
    uint32_t ERRWT:1;                   /**< bit:      3  Error on L2 Tag RAM, Write               */
    uint32_t ERRWD:1;                   /**< bit:      4  Error on L2 Data RAM, Write              */
    uint32_t ERRRT:1;                   /**< bit:      5  Error on L2 Tag RAM, Read                */
    uint32_t ERRRD:1;                   /**< bit:      6  Error on L2 Data RAM, Read               */
    uint32_t SLVERR:1;                  /**< bit:      7  SLVERR from L3 Memory                    */
    uint32_t DECERR:1;                  /**< bit:      8  DECERR from L3 Memory                    */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_IMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_IMR_OFFSET                     (0x214)                                       /**<  (L2CC_IMR) Interrupt Mask Register  Offset */

#define L2CC_IMR_ECNTR_Pos                  0                                              /**< (L2CC_IMR) Event Counter 1/0 Overflow Increment Position */
#define L2CC_IMR_ECNTR_Msk                  (_U_(0x1) << L2CC_IMR_ECNTR_Pos)               /**< (L2CC_IMR) Event Counter 1/0 Overflow Increment Mask */
#define L2CC_IMR_ECNTR                      L2CC_IMR_ECNTR_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_IMR_ECNTR_Msk instead */
#define L2CC_IMR_PARRT_Pos                  1                                              /**< (L2CC_IMR) Parity Error on L2 Tag RAM, Read Position */
#define L2CC_IMR_PARRT_Msk                  (_U_(0x1) << L2CC_IMR_PARRT_Pos)               /**< (L2CC_IMR) Parity Error on L2 Tag RAM, Read Mask */
#define L2CC_IMR_PARRT                      L2CC_IMR_PARRT_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_IMR_PARRT_Msk instead */
#define L2CC_IMR_PARRD_Pos                  2                                              /**< (L2CC_IMR) Parity Error on L2 Data RAM, Read Position */
#define L2CC_IMR_PARRD_Msk                  (_U_(0x1) << L2CC_IMR_PARRD_Pos)               /**< (L2CC_IMR) Parity Error on L2 Data RAM, Read Mask */
#define L2CC_IMR_PARRD                      L2CC_IMR_PARRD_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_IMR_PARRD_Msk instead */
#define L2CC_IMR_ERRWT_Pos                  3                                              /**< (L2CC_IMR) Error on L2 Tag RAM, Write Position */
#define L2CC_IMR_ERRWT_Msk                  (_U_(0x1) << L2CC_IMR_ERRWT_Pos)               /**< (L2CC_IMR) Error on L2 Tag RAM, Write Mask */
#define L2CC_IMR_ERRWT                      L2CC_IMR_ERRWT_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_IMR_ERRWT_Msk instead */
#define L2CC_IMR_ERRWD_Pos                  4                                              /**< (L2CC_IMR) Error on L2 Data RAM, Write Position */
#define L2CC_IMR_ERRWD_Msk                  (_U_(0x1) << L2CC_IMR_ERRWD_Pos)               /**< (L2CC_IMR) Error on L2 Data RAM, Write Mask */
#define L2CC_IMR_ERRWD                      L2CC_IMR_ERRWD_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_IMR_ERRWD_Msk instead */
#define L2CC_IMR_ERRRT_Pos                  5                                              /**< (L2CC_IMR) Error on L2 Tag RAM, Read Position */
#define L2CC_IMR_ERRRT_Msk                  (_U_(0x1) << L2CC_IMR_ERRRT_Pos)               /**< (L2CC_IMR) Error on L2 Tag RAM, Read Mask */
#define L2CC_IMR_ERRRT                      L2CC_IMR_ERRRT_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_IMR_ERRRT_Msk instead */
#define L2CC_IMR_ERRRD_Pos                  6                                              /**< (L2CC_IMR) Error on L2 Data RAM, Read Position */
#define L2CC_IMR_ERRRD_Msk                  (_U_(0x1) << L2CC_IMR_ERRRD_Pos)               /**< (L2CC_IMR) Error on L2 Data RAM, Read Mask */
#define L2CC_IMR_ERRRD                      L2CC_IMR_ERRRD_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_IMR_ERRRD_Msk instead */
#define L2CC_IMR_SLVERR_Pos                 7                                              /**< (L2CC_IMR) SLVERR from L3 Memory Position */
#define L2CC_IMR_SLVERR_Msk                 (_U_(0x1) << L2CC_IMR_SLVERR_Pos)              /**< (L2CC_IMR) SLVERR from L3 Memory Mask */
#define L2CC_IMR_SLVERR                     L2CC_IMR_SLVERR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_IMR_SLVERR_Msk instead */
#define L2CC_IMR_DECERR_Pos                 8                                              /**< (L2CC_IMR) DECERR from L3 Memory Position */
#define L2CC_IMR_DECERR_Msk                 (_U_(0x1) << L2CC_IMR_DECERR_Pos)              /**< (L2CC_IMR) DECERR from L3 Memory Mask */
#define L2CC_IMR_DECERR                     L2CC_IMR_DECERR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_IMR_DECERR_Msk instead */
#define L2CC_IMR_MASK                       _U_(0x1FF)                                     /**< \deprecated (L2CC_IMR) Register MASK  (Use L2CC_IMR_Msk instead)  */
#define L2CC_IMR_Msk                        _U_(0x1FF)                                     /**< (L2CC_IMR) Register Mask  */


/* -------- L2CC_MISR : (L2CC Offset: 0x218) (R/ 32) Masked Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ECNTR:1;                   /**< bit:      0  Event Counter 1/0 Overflow Increment     */
    uint32_t PARRT:1;                   /**< bit:      1  Parity Error on L2 Tag RAM, Read         */
    uint32_t PARRD:1;                   /**< bit:      2  Parity Error on L2 Data RAM, Read        */
    uint32_t ERRWT:1;                   /**< bit:      3  Error on L2 Tag RAM, Write               */
    uint32_t ERRWD:1;                   /**< bit:      4  Error on L2 Data RAM, Write              */
    uint32_t ERRRT:1;                   /**< bit:      5  Error on L2 Tag RAM, Read                */
    uint32_t ERRRD:1;                   /**< bit:      6  Error on L2 Data RAM, Read               */
    uint32_t SLVERR:1;                  /**< bit:      7  SLVERR from L3 memory                    */
    uint32_t DECERR:1;                  /**< bit:      8  DECERR from L3 memory                    */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_MISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_MISR_OFFSET                    (0x218)                                       /**<  (L2CC_MISR) Masked Interrupt Status Register  Offset */

#define L2CC_MISR_ECNTR_Pos                 0                                              /**< (L2CC_MISR) Event Counter 1/0 Overflow Increment Position */
#define L2CC_MISR_ECNTR_Msk                 (_U_(0x1) << L2CC_MISR_ECNTR_Pos)              /**< (L2CC_MISR) Event Counter 1/0 Overflow Increment Mask */
#define L2CC_MISR_ECNTR                     L2CC_MISR_ECNTR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_MISR_ECNTR_Msk instead */
#define L2CC_MISR_PARRT_Pos                 1                                              /**< (L2CC_MISR) Parity Error on L2 Tag RAM, Read Position */
#define L2CC_MISR_PARRT_Msk                 (_U_(0x1) << L2CC_MISR_PARRT_Pos)              /**< (L2CC_MISR) Parity Error on L2 Tag RAM, Read Mask */
#define L2CC_MISR_PARRT                     L2CC_MISR_PARRT_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_MISR_PARRT_Msk instead */
#define L2CC_MISR_PARRD_Pos                 2                                              /**< (L2CC_MISR) Parity Error on L2 Data RAM, Read Position */
#define L2CC_MISR_PARRD_Msk                 (_U_(0x1) << L2CC_MISR_PARRD_Pos)              /**< (L2CC_MISR) Parity Error on L2 Data RAM, Read Mask */
#define L2CC_MISR_PARRD                     L2CC_MISR_PARRD_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_MISR_PARRD_Msk instead */
#define L2CC_MISR_ERRWT_Pos                 3                                              /**< (L2CC_MISR) Error on L2 Tag RAM, Write Position */
#define L2CC_MISR_ERRWT_Msk                 (_U_(0x1) << L2CC_MISR_ERRWT_Pos)              /**< (L2CC_MISR) Error on L2 Tag RAM, Write Mask */
#define L2CC_MISR_ERRWT                     L2CC_MISR_ERRWT_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_MISR_ERRWT_Msk instead */
#define L2CC_MISR_ERRWD_Pos                 4                                              /**< (L2CC_MISR) Error on L2 Data RAM, Write Position */
#define L2CC_MISR_ERRWD_Msk                 (_U_(0x1) << L2CC_MISR_ERRWD_Pos)              /**< (L2CC_MISR) Error on L2 Data RAM, Write Mask */
#define L2CC_MISR_ERRWD                     L2CC_MISR_ERRWD_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_MISR_ERRWD_Msk instead */
#define L2CC_MISR_ERRRT_Pos                 5                                              /**< (L2CC_MISR) Error on L2 Tag RAM, Read Position */
#define L2CC_MISR_ERRRT_Msk                 (_U_(0x1) << L2CC_MISR_ERRRT_Pos)              /**< (L2CC_MISR) Error on L2 Tag RAM, Read Mask */
#define L2CC_MISR_ERRRT                     L2CC_MISR_ERRRT_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_MISR_ERRRT_Msk instead */
#define L2CC_MISR_ERRRD_Pos                 6                                              /**< (L2CC_MISR) Error on L2 Data RAM, Read Position */
#define L2CC_MISR_ERRRD_Msk                 (_U_(0x1) << L2CC_MISR_ERRRD_Pos)              /**< (L2CC_MISR) Error on L2 Data RAM, Read Mask */
#define L2CC_MISR_ERRRD                     L2CC_MISR_ERRRD_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_MISR_ERRRD_Msk instead */
#define L2CC_MISR_SLVERR_Pos                7                                              /**< (L2CC_MISR) SLVERR from L3 memory Position */
#define L2CC_MISR_SLVERR_Msk                (_U_(0x1) << L2CC_MISR_SLVERR_Pos)             /**< (L2CC_MISR) SLVERR from L3 memory Mask */
#define L2CC_MISR_SLVERR                    L2CC_MISR_SLVERR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_MISR_SLVERR_Msk instead */
#define L2CC_MISR_DECERR_Pos                8                                              /**< (L2CC_MISR) DECERR from L3 memory Position */
#define L2CC_MISR_DECERR_Msk                (_U_(0x1) << L2CC_MISR_DECERR_Pos)             /**< (L2CC_MISR) DECERR from L3 memory Mask */
#define L2CC_MISR_DECERR                    L2CC_MISR_DECERR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_MISR_DECERR_Msk instead */
#define L2CC_MISR_MASK                      _U_(0x1FF)                                     /**< \deprecated (L2CC_MISR) Register MASK  (Use L2CC_MISR_Msk instead)  */
#define L2CC_MISR_Msk                       _U_(0x1FF)                                     /**< (L2CC_MISR) Register Mask  */


/* -------- L2CC_RISR : (L2CC Offset: 0x21c) (R/ 32) Raw Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ECNTR:1;                   /**< bit:      0  Event Counter 1/0 Overflow Increment     */
    uint32_t PARRT:1;                   /**< bit:      1  Parity Error on L2 Tag RAM, Read         */
    uint32_t PARRD:1;                   /**< bit:      2  Parity Error on L2 Data RAM, Read        */
    uint32_t ERRWT:1;                   /**< bit:      3  Error on L2 Tag RAM, Write               */
    uint32_t ERRWD:1;                   /**< bit:      4  Error on L2 Data RAM, Write              */
    uint32_t ERRRT:1;                   /**< bit:      5  Error on L2 Tag RAM, Read                */
    uint32_t ERRRD:1;                   /**< bit:      6  Error on L2 Data RAM, Read               */
    uint32_t SLVERR:1;                  /**< bit:      7  SLVERR from L3 memory                    */
    uint32_t DECERR:1;                  /**< bit:      8  DECERR from L3 memory                    */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_RISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_RISR_OFFSET                    (0x21C)                                       /**<  (L2CC_RISR) Raw Interrupt Status Register  Offset */

#define L2CC_RISR_ECNTR_Pos                 0                                              /**< (L2CC_RISR) Event Counter 1/0 Overflow Increment Position */
#define L2CC_RISR_ECNTR_Msk                 (_U_(0x1) << L2CC_RISR_ECNTR_Pos)              /**< (L2CC_RISR) Event Counter 1/0 Overflow Increment Mask */
#define L2CC_RISR_ECNTR                     L2CC_RISR_ECNTR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_RISR_ECNTR_Msk instead */
#define L2CC_RISR_PARRT_Pos                 1                                              /**< (L2CC_RISR) Parity Error on L2 Tag RAM, Read Position */
#define L2CC_RISR_PARRT_Msk                 (_U_(0x1) << L2CC_RISR_PARRT_Pos)              /**< (L2CC_RISR) Parity Error on L2 Tag RAM, Read Mask */
#define L2CC_RISR_PARRT                     L2CC_RISR_PARRT_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_RISR_PARRT_Msk instead */
#define L2CC_RISR_PARRD_Pos                 2                                              /**< (L2CC_RISR) Parity Error on L2 Data RAM, Read Position */
#define L2CC_RISR_PARRD_Msk                 (_U_(0x1) << L2CC_RISR_PARRD_Pos)              /**< (L2CC_RISR) Parity Error on L2 Data RAM, Read Mask */
#define L2CC_RISR_PARRD                     L2CC_RISR_PARRD_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_RISR_PARRD_Msk instead */
#define L2CC_RISR_ERRWT_Pos                 3                                              /**< (L2CC_RISR) Error on L2 Tag RAM, Write Position */
#define L2CC_RISR_ERRWT_Msk                 (_U_(0x1) << L2CC_RISR_ERRWT_Pos)              /**< (L2CC_RISR) Error on L2 Tag RAM, Write Mask */
#define L2CC_RISR_ERRWT                     L2CC_RISR_ERRWT_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_RISR_ERRWT_Msk instead */
#define L2CC_RISR_ERRWD_Pos                 4                                              /**< (L2CC_RISR) Error on L2 Data RAM, Write Position */
#define L2CC_RISR_ERRWD_Msk                 (_U_(0x1) << L2CC_RISR_ERRWD_Pos)              /**< (L2CC_RISR) Error on L2 Data RAM, Write Mask */
#define L2CC_RISR_ERRWD                     L2CC_RISR_ERRWD_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_RISR_ERRWD_Msk instead */
#define L2CC_RISR_ERRRT_Pos                 5                                              /**< (L2CC_RISR) Error on L2 Tag RAM, Read Position */
#define L2CC_RISR_ERRRT_Msk                 (_U_(0x1) << L2CC_RISR_ERRRT_Pos)              /**< (L2CC_RISR) Error on L2 Tag RAM, Read Mask */
#define L2CC_RISR_ERRRT                     L2CC_RISR_ERRRT_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_RISR_ERRRT_Msk instead */
#define L2CC_RISR_ERRRD_Pos                 6                                              /**< (L2CC_RISR) Error on L2 Data RAM, Read Position */
#define L2CC_RISR_ERRRD_Msk                 (_U_(0x1) << L2CC_RISR_ERRRD_Pos)              /**< (L2CC_RISR) Error on L2 Data RAM, Read Mask */
#define L2CC_RISR_ERRRD                     L2CC_RISR_ERRRD_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_RISR_ERRRD_Msk instead */
#define L2CC_RISR_SLVERR_Pos                7                                              /**< (L2CC_RISR) SLVERR from L3 memory Position */
#define L2CC_RISR_SLVERR_Msk                (_U_(0x1) << L2CC_RISR_SLVERR_Pos)             /**< (L2CC_RISR) SLVERR from L3 memory Mask */
#define L2CC_RISR_SLVERR                    L2CC_RISR_SLVERR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_RISR_SLVERR_Msk instead */
#define L2CC_RISR_DECERR_Pos                8                                              /**< (L2CC_RISR) DECERR from L3 memory Position */
#define L2CC_RISR_DECERR_Msk                (_U_(0x1) << L2CC_RISR_DECERR_Pos)             /**< (L2CC_RISR) DECERR from L3 memory Mask */
#define L2CC_RISR_DECERR                    L2CC_RISR_DECERR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_RISR_DECERR_Msk instead */
#define L2CC_RISR_MASK                      _U_(0x1FF)                                     /**< \deprecated (L2CC_RISR) Register MASK  (Use L2CC_RISR_Msk instead)  */
#define L2CC_RISR_Msk                       _U_(0x1FF)                                     /**< (L2CC_RISR) Register Mask  */


/* -------- L2CC_ICR : (L2CC Offset: 0x220) (R/W 32) Interrupt Clear Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ECNTR:1;                   /**< bit:      0  Event Counter 1/0 Overflow Increment     */
    uint32_t PARRT:1;                   /**< bit:      1  Parity Error on L2 Tag RAM, Read         */
    uint32_t PARRD:1;                   /**< bit:      2  Parity Error on L2 Data RAM, Read        */
    uint32_t ERRWT:1;                   /**< bit:      3  Error on L2 Tag RAM, Write               */
    uint32_t ERRWD:1;                   /**< bit:      4  Error on L2 Data RAM, Write              */
    uint32_t ERRRT:1;                   /**< bit:      5  Error on L2 Tag RAM, Read                */
    uint32_t ERRRD:1;                   /**< bit:      6  Error on L2 Data RAM, Read               */
    uint32_t SLVERR:1;                  /**< bit:      7  SLVERR from L3 memory                    */
    uint32_t DECERR:1;                  /**< bit:      8  DECERR from L3 memory                    */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_ICR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_ICR_OFFSET                     (0x220)                                       /**<  (L2CC_ICR) Interrupt Clear Register  Offset */

#define L2CC_ICR_ECNTR_Pos                  0                                              /**< (L2CC_ICR) Event Counter 1/0 Overflow Increment Position */
#define L2CC_ICR_ECNTR_Msk                  (_U_(0x1) << L2CC_ICR_ECNTR_Pos)               /**< (L2CC_ICR) Event Counter 1/0 Overflow Increment Mask */
#define L2CC_ICR_ECNTR                      L2CC_ICR_ECNTR_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ICR_ECNTR_Msk instead */
#define L2CC_ICR_PARRT_Pos                  1                                              /**< (L2CC_ICR) Parity Error on L2 Tag RAM, Read Position */
#define L2CC_ICR_PARRT_Msk                  (_U_(0x1) << L2CC_ICR_PARRT_Pos)               /**< (L2CC_ICR) Parity Error on L2 Tag RAM, Read Mask */
#define L2CC_ICR_PARRT                      L2CC_ICR_PARRT_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ICR_PARRT_Msk instead */
#define L2CC_ICR_PARRD_Pos                  2                                              /**< (L2CC_ICR) Parity Error on L2 Data RAM, Read Position */
#define L2CC_ICR_PARRD_Msk                  (_U_(0x1) << L2CC_ICR_PARRD_Pos)               /**< (L2CC_ICR) Parity Error on L2 Data RAM, Read Mask */
#define L2CC_ICR_PARRD                      L2CC_ICR_PARRD_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ICR_PARRD_Msk instead */
#define L2CC_ICR_ERRWT_Pos                  3                                              /**< (L2CC_ICR) Error on L2 Tag RAM, Write Position */
#define L2CC_ICR_ERRWT_Msk                  (_U_(0x1) << L2CC_ICR_ERRWT_Pos)               /**< (L2CC_ICR) Error on L2 Tag RAM, Write Mask */
#define L2CC_ICR_ERRWT                      L2CC_ICR_ERRWT_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ICR_ERRWT_Msk instead */
#define L2CC_ICR_ERRWD_Pos                  4                                              /**< (L2CC_ICR) Error on L2 Data RAM, Write Position */
#define L2CC_ICR_ERRWD_Msk                  (_U_(0x1) << L2CC_ICR_ERRWD_Pos)               /**< (L2CC_ICR) Error on L2 Data RAM, Write Mask */
#define L2CC_ICR_ERRWD                      L2CC_ICR_ERRWD_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ICR_ERRWD_Msk instead */
#define L2CC_ICR_ERRRT_Pos                  5                                              /**< (L2CC_ICR) Error on L2 Tag RAM, Read Position */
#define L2CC_ICR_ERRRT_Msk                  (_U_(0x1) << L2CC_ICR_ERRRT_Pos)               /**< (L2CC_ICR) Error on L2 Tag RAM, Read Mask */
#define L2CC_ICR_ERRRT                      L2CC_ICR_ERRRT_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ICR_ERRRT_Msk instead */
#define L2CC_ICR_ERRRD_Pos                  6                                              /**< (L2CC_ICR) Error on L2 Data RAM, Read Position */
#define L2CC_ICR_ERRRD_Msk                  (_U_(0x1) << L2CC_ICR_ERRRD_Pos)               /**< (L2CC_ICR) Error on L2 Data RAM, Read Mask */
#define L2CC_ICR_ERRRD                      L2CC_ICR_ERRRD_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ICR_ERRRD_Msk instead */
#define L2CC_ICR_SLVERR_Pos                 7                                              /**< (L2CC_ICR) SLVERR from L3 memory Position */
#define L2CC_ICR_SLVERR_Msk                 (_U_(0x1) << L2CC_ICR_SLVERR_Pos)              /**< (L2CC_ICR) SLVERR from L3 memory Mask */
#define L2CC_ICR_SLVERR                     L2CC_ICR_SLVERR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ICR_SLVERR_Msk instead */
#define L2CC_ICR_DECERR_Pos                 8                                              /**< (L2CC_ICR) DECERR from L3 memory Position */
#define L2CC_ICR_DECERR_Msk                 (_U_(0x1) << L2CC_ICR_DECERR_Pos)              /**< (L2CC_ICR) DECERR from L3 memory Mask */
#define L2CC_ICR_DECERR                     L2CC_ICR_DECERR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ICR_DECERR_Msk instead */
#define L2CC_ICR_MASK                       _U_(0x1FF)                                     /**< \deprecated (L2CC_ICR) Register MASK  (Use L2CC_ICR_Msk instead)  */
#define L2CC_ICR_Msk                        _U_(0x1FF)                                     /**< (L2CC_ICR) Register Mask  */


/* -------- L2CC_CSR : (L2CC Offset: 0x730) (R/W 32) Cache Synchronization Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t C:1;                       /**< bit:      0  Cache Synchronization Status             */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_CSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_CSR_OFFSET                     (0x730)                                       /**<  (L2CC_CSR) Cache Synchronization Register  Offset */

#define L2CC_CSR_C_Pos                      0                                              /**< (L2CC_CSR) Cache Synchronization Status Position */
#define L2CC_CSR_C_Msk                      (_U_(0x1) << L2CC_CSR_C_Pos)                   /**< (L2CC_CSR) Cache Synchronization Status Mask */
#define L2CC_CSR_C                          L2CC_CSR_C_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CSR_C_Msk instead */
#define L2CC_CSR_MASK                       _U_(0x01)                                      /**< \deprecated (L2CC_CSR) Register MASK  (Use L2CC_CSR_Msk instead)  */
#define L2CC_CSR_Msk                        _U_(0x01)                                      /**< (L2CC_CSR) Register Mask  */


/* -------- L2CC_IPALR : (L2CC Offset: 0x770) (R/W 32) Invalidate Physical Address Line Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t C:1;                       /**< bit:      0  Cache Synchronization Status             */
    uint32_t :4;                        /**< bit:   1..4  Reserved */
    uint32_t IDX:9;                     /**< bit:  5..13  Index Number                             */
    uint32_t TAG:18;                    /**< bit: 14..31  Tag Number                               */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_IPALR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_IPALR_OFFSET                   (0x770)                                       /**<  (L2CC_IPALR) Invalidate Physical Address Line Register  Offset */

#define L2CC_IPALR_C_Pos                    0                                              /**< (L2CC_IPALR) Cache Synchronization Status Position */
#define L2CC_IPALR_C_Msk                    (_U_(0x1) << L2CC_IPALR_C_Pos)                 /**< (L2CC_IPALR) Cache Synchronization Status Mask */
#define L2CC_IPALR_C                        L2CC_IPALR_C_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_IPALR_C_Msk instead */
#define L2CC_IPALR_IDX_Pos                  5                                              /**< (L2CC_IPALR) Index Number Position */
#define L2CC_IPALR_IDX_Msk                  (_U_(0x1FF) << L2CC_IPALR_IDX_Pos)             /**< (L2CC_IPALR) Index Number Mask */
#define L2CC_IPALR_IDX(value)               (L2CC_IPALR_IDX_Msk & ((value) << L2CC_IPALR_IDX_Pos))
#define L2CC_IPALR_TAG_Pos                  14                                             /**< (L2CC_IPALR) Tag Number Position */
#define L2CC_IPALR_TAG_Msk                  (_U_(0x3FFFF) << L2CC_IPALR_TAG_Pos)           /**< (L2CC_IPALR) Tag Number Mask */
#define L2CC_IPALR_TAG(value)               (L2CC_IPALR_TAG_Msk & ((value) << L2CC_IPALR_TAG_Pos))
#define L2CC_IPALR_MASK                     _U_(0xFFFFFFE1)                                /**< \deprecated (L2CC_IPALR) Register MASK  (Use L2CC_IPALR_Msk instead)  */
#define L2CC_IPALR_Msk                      _U_(0xFFFFFFE1)                                /**< (L2CC_IPALR) Register Mask  */


/* -------- L2CC_IWR : (L2CC Offset: 0x77c) (R/W 32) Invalidate Way Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WAY0:1;                    /**< bit:      0  Invalidate Way Number 0                  */
    uint32_t WAY1:1;                    /**< bit:      1  Invalidate Way Number 1                  */
    uint32_t WAY2:1;                    /**< bit:      2  Invalidate Way Number 2                  */
    uint32_t WAY3:1;                    /**< bit:      3  Invalidate Way Number 3                  */
    uint32_t WAY4:1;                    /**< bit:      4  Invalidate Way Number 4                  */
    uint32_t WAY5:1;                    /**< bit:      5  Invalidate Way Number 5                  */
    uint32_t WAY6:1;                    /**< bit:      6  Invalidate Way Number 6                  */
    uint32_t WAY7:1;                    /**< bit:      7  Invalidate Way Number 7                  */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t WAY:8;                     /**< bit:   0..7  Invalidate Way Number 7                  */
    uint32_t :24;                       /**< bit:  8..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_IWR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_IWR_OFFSET                     (0x77C)                                       /**<  (L2CC_IWR) Invalidate Way Register  Offset */

#define L2CC_IWR_WAY0_Pos                   0                                              /**< (L2CC_IWR) Invalidate Way Number 0 Position */
#define L2CC_IWR_WAY0_Msk                   (_U_(0x1) << L2CC_IWR_WAY0_Pos)                /**< (L2CC_IWR) Invalidate Way Number 0 Mask */
#define L2CC_IWR_WAY0                       L2CC_IWR_WAY0_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_IWR_WAY0_Msk instead */
#define L2CC_IWR_WAY1_Pos                   1                                              /**< (L2CC_IWR) Invalidate Way Number 1 Position */
#define L2CC_IWR_WAY1_Msk                   (_U_(0x1) << L2CC_IWR_WAY1_Pos)                /**< (L2CC_IWR) Invalidate Way Number 1 Mask */
#define L2CC_IWR_WAY1                       L2CC_IWR_WAY1_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_IWR_WAY1_Msk instead */
#define L2CC_IWR_WAY2_Pos                   2                                              /**< (L2CC_IWR) Invalidate Way Number 2 Position */
#define L2CC_IWR_WAY2_Msk                   (_U_(0x1) << L2CC_IWR_WAY2_Pos)                /**< (L2CC_IWR) Invalidate Way Number 2 Mask */
#define L2CC_IWR_WAY2                       L2CC_IWR_WAY2_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_IWR_WAY2_Msk instead */
#define L2CC_IWR_WAY3_Pos                   3                                              /**< (L2CC_IWR) Invalidate Way Number 3 Position */
#define L2CC_IWR_WAY3_Msk                   (_U_(0x1) << L2CC_IWR_WAY3_Pos)                /**< (L2CC_IWR) Invalidate Way Number 3 Mask */
#define L2CC_IWR_WAY3                       L2CC_IWR_WAY3_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_IWR_WAY3_Msk instead */
#define L2CC_IWR_WAY4_Pos                   4                                              /**< (L2CC_IWR) Invalidate Way Number 4 Position */
#define L2CC_IWR_WAY4_Msk                   (_U_(0x1) << L2CC_IWR_WAY4_Pos)                /**< (L2CC_IWR) Invalidate Way Number 4 Mask */
#define L2CC_IWR_WAY4                       L2CC_IWR_WAY4_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_IWR_WAY4_Msk instead */
#define L2CC_IWR_WAY5_Pos                   5                                              /**< (L2CC_IWR) Invalidate Way Number 5 Position */
#define L2CC_IWR_WAY5_Msk                   (_U_(0x1) << L2CC_IWR_WAY5_Pos)                /**< (L2CC_IWR) Invalidate Way Number 5 Mask */
#define L2CC_IWR_WAY5                       L2CC_IWR_WAY5_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_IWR_WAY5_Msk instead */
#define L2CC_IWR_WAY6_Pos                   6                                              /**< (L2CC_IWR) Invalidate Way Number 6 Position */
#define L2CC_IWR_WAY6_Msk                   (_U_(0x1) << L2CC_IWR_WAY6_Pos)                /**< (L2CC_IWR) Invalidate Way Number 6 Mask */
#define L2CC_IWR_WAY6                       L2CC_IWR_WAY6_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_IWR_WAY6_Msk instead */
#define L2CC_IWR_WAY7_Pos                   7                                              /**< (L2CC_IWR) Invalidate Way Number 7 Position */
#define L2CC_IWR_WAY7_Msk                   (_U_(0x1) << L2CC_IWR_WAY7_Pos)                /**< (L2CC_IWR) Invalidate Way Number 7 Mask */
#define L2CC_IWR_WAY7                       L2CC_IWR_WAY7_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_IWR_WAY7_Msk instead */
#define L2CC_IWR_MASK                       _U_(0xFF)                                      /**< \deprecated (L2CC_IWR) Register MASK  (Use L2CC_IWR_Msk instead)  */
#define L2CC_IWR_Msk                        _U_(0xFF)                                      /**< (L2CC_IWR) Register Mask  */

#define L2CC_IWR_WAY_Pos                    0                                              /**< (L2CC_IWR Position) Invalidate Way Number 7 */
#define L2CC_IWR_WAY_Msk                    (_U_(0xFF) << L2CC_IWR_WAY_Pos)                /**< (L2CC_IWR Mask) WAY */
#define L2CC_IWR_WAY(value)                 (L2CC_IWR_WAY_Msk & ((value) << L2CC_IWR_WAY_Pos))  

/* -------- L2CC_CPALR : (L2CC Offset: 0x7b0) (R/W 32) Clean Physical Address Line Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t C:1;                       /**< bit:      0  Cache Synchronization Status             */
    uint32_t :4;                        /**< bit:   1..4  Reserved */
    uint32_t IDX:9;                     /**< bit:  5..13  Index number                             */
    uint32_t TAG:18;                    /**< bit: 14..31  Tag number                               */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_CPALR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_CPALR_OFFSET                   (0x7B0)                                       /**<  (L2CC_CPALR) Clean Physical Address Line Register  Offset */

#define L2CC_CPALR_C_Pos                    0                                              /**< (L2CC_CPALR) Cache Synchronization Status Position */
#define L2CC_CPALR_C_Msk                    (_U_(0x1) << L2CC_CPALR_C_Pos)                 /**< (L2CC_CPALR) Cache Synchronization Status Mask */
#define L2CC_CPALR_C                        L2CC_CPALR_C_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CPALR_C_Msk instead */
#define L2CC_CPALR_IDX_Pos                  5                                              /**< (L2CC_CPALR) Index number Position */
#define L2CC_CPALR_IDX_Msk                  (_U_(0x1FF) << L2CC_CPALR_IDX_Pos)             /**< (L2CC_CPALR) Index number Mask */
#define L2CC_CPALR_IDX(value)               (L2CC_CPALR_IDX_Msk & ((value) << L2CC_CPALR_IDX_Pos))
#define L2CC_CPALR_TAG_Pos                  14                                             /**< (L2CC_CPALR) Tag number Position */
#define L2CC_CPALR_TAG_Msk                  (_U_(0x3FFFF) << L2CC_CPALR_TAG_Pos)           /**< (L2CC_CPALR) Tag number Mask */
#define L2CC_CPALR_TAG(value)               (L2CC_CPALR_TAG_Msk & ((value) << L2CC_CPALR_TAG_Pos))
#define L2CC_CPALR_MASK                     _U_(0xFFFFFFE1)                                /**< \deprecated (L2CC_CPALR) Register MASK  (Use L2CC_CPALR_Msk instead)  */
#define L2CC_CPALR_Msk                      _U_(0xFFFFFFE1)                                /**< (L2CC_CPALR) Register Mask  */


/* -------- L2CC_CIR : (L2CC Offset: 0x7b8) (R/W 32) Clean Index Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t C:1;                       /**< bit:      0  Cache Synchronization Status             */
    uint32_t :4;                        /**< bit:   1..4  Reserved */
    uint32_t IDX:9;                     /**< bit:  5..13  Index number                             */
    uint32_t :14;                       /**< bit: 14..27  Reserved */
    uint32_t WAY:3;                     /**< bit: 28..30  Way number                               */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_CIR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_CIR_OFFSET                     (0x7B8)                                       /**<  (L2CC_CIR) Clean Index Register  Offset */

#define L2CC_CIR_C_Pos                      0                                              /**< (L2CC_CIR) Cache Synchronization Status Position */
#define L2CC_CIR_C_Msk                      (_U_(0x1) << L2CC_CIR_C_Pos)                   /**< (L2CC_CIR) Cache Synchronization Status Mask */
#define L2CC_CIR_C                          L2CC_CIR_C_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CIR_C_Msk instead */
#define L2CC_CIR_IDX_Pos                    5                                              /**< (L2CC_CIR) Index number Position */
#define L2CC_CIR_IDX_Msk                    (_U_(0x1FF) << L2CC_CIR_IDX_Pos)               /**< (L2CC_CIR) Index number Mask */
#define L2CC_CIR_IDX(value)                 (L2CC_CIR_IDX_Msk & ((value) << L2CC_CIR_IDX_Pos))
#define L2CC_CIR_WAY_Pos                    28                                             /**< (L2CC_CIR) Way number Position */
#define L2CC_CIR_WAY_Msk                    (_U_(0x7) << L2CC_CIR_WAY_Pos)                 /**< (L2CC_CIR) Way number Mask */
#define L2CC_CIR_WAY(value)                 (L2CC_CIR_WAY_Msk & ((value) << L2CC_CIR_WAY_Pos))
#define L2CC_CIR_MASK                       _U_(0x70003FE1)                                /**< \deprecated (L2CC_CIR) Register MASK  (Use L2CC_CIR_Msk instead)  */
#define L2CC_CIR_Msk                        _U_(0x70003FE1)                                /**< (L2CC_CIR) Register Mask  */


/* -------- L2CC_CWR : (L2CC Offset: 0x7bc) (R/W 32) Clean Way Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WAY0:1;                    /**< bit:      0  Clean Way Number 0                       */
    uint32_t WAY1:1;                    /**< bit:      1  Clean Way Number 1                       */
    uint32_t WAY2:1;                    /**< bit:      2  Clean Way Number 2                       */
    uint32_t WAY3:1;                    /**< bit:      3  Clean Way Number 3                       */
    uint32_t WAY4:1;                    /**< bit:      4  Clean Way Number 4                       */
    uint32_t WAY5:1;                    /**< bit:      5  Clean Way Number 5                       */
    uint32_t WAY6:1;                    /**< bit:      6  Clean Way Number 6                       */
    uint32_t WAY7:1;                    /**< bit:      7  Clean Way Number 7                       */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t WAY:8;                     /**< bit:   0..7  Clean Way Number 7                       */
    uint32_t :24;                       /**< bit:  8..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_CWR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_CWR_OFFSET                     (0x7BC)                                       /**<  (L2CC_CWR) Clean Way Register  Offset */

#define L2CC_CWR_WAY0_Pos                   0                                              /**< (L2CC_CWR) Clean Way Number 0 Position */
#define L2CC_CWR_WAY0_Msk                   (_U_(0x1) << L2CC_CWR_WAY0_Pos)                /**< (L2CC_CWR) Clean Way Number 0 Mask */
#define L2CC_CWR_WAY0                       L2CC_CWR_WAY0_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CWR_WAY0_Msk instead */
#define L2CC_CWR_WAY1_Pos                   1                                              /**< (L2CC_CWR) Clean Way Number 1 Position */
#define L2CC_CWR_WAY1_Msk                   (_U_(0x1) << L2CC_CWR_WAY1_Pos)                /**< (L2CC_CWR) Clean Way Number 1 Mask */
#define L2CC_CWR_WAY1                       L2CC_CWR_WAY1_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CWR_WAY1_Msk instead */
#define L2CC_CWR_WAY2_Pos                   2                                              /**< (L2CC_CWR) Clean Way Number 2 Position */
#define L2CC_CWR_WAY2_Msk                   (_U_(0x1) << L2CC_CWR_WAY2_Pos)                /**< (L2CC_CWR) Clean Way Number 2 Mask */
#define L2CC_CWR_WAY2                       L2CC_CWR_WAY2_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CWR_WAY2_Msk instead */
#define L2CC_CWR_WAY3_Pos                   3                                              /**< (L2CC_CWR) Clean Way Number 3 Position */
#define L2CC_CWR_WAY3_Msk                   (_U_(0x1) << L2CC_CWR_WAY3_Pos)                /**< (L2CC_CWR) Clean Way Number 3 Mask */
#define L2CC_CWR_WAY3                       L2CC_CWR_WAY3_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CWR_WAY3_Msk instead */
#define L2CC_CWR_WAY4_Pos                   4                                              /**< (L2CC_CWR) Clean Way Number 4 Position */
#define L2CC_CWR_WAY4_Msk                   (_U_(0x1) << L2CC_CWR_WAY4_Pos)                /**< (L2CC_CWR) Clean Way Number 4 Mask */
#define L2CC_CWR_WAY4                       L2CC_CWR_WAY4_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CWR_WAY4_Msk instead */
#define L2CC_CWR_WAY5_Pos                   5                                              /**< (L2CC_CWR) Clean Way Number 5 Position */
#define L2CC_CWR_WAY5_Msk                   (_U_(0x1) << L2CC_CWR_WAY5_Pos)                /**< (L2CC_CWR) Clean Way Number 5 Mask */
#define L2CC_CWR_WAY5                       L2CC_CWR_WAY5_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CWR_WAY5_Msk instead */
#define L2CC_CWR_WAY6_Pos                   6                                              /**< (L2CC_CWR) Clean Way Number 6 Position */
#define L2CC_CWR_WAY6_Msk                   (_U_(0x1) << L2CC_CWR_WAY6_Pos)                /**< (L2CC_CWR) Clean Way Number 6 Mask */
#define L2CC_CWR_WAY6                       L2CC_CWR_WAY6_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CWR_WAY6_Msk instead */
#define L2CC_CWR_WAY7_Pos                   7                                              /**< (L2CC_CWR) Clean Way Number 7 Position */
#define L2CC_CWR_WAY7_Msk                   (_U_(0x1) << L2CC_CWR_WAY7_Pos)                /**< (L2CC_CWR) Clean Way Number 7 Mask */
#define L2CC_CWR_WAY7                       L2CC_CWR_WAY7_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CWR_WAY7_Msk instead */
#define L2CC_CWR_MASK                       _U_(0xFF)                                      /**< \deprecated (L2CC_CWR) Register MASK  (Use L2CC_CWR_Msk instead)  */
#define L2CC_CWR_Msk                        _U_(0xFF)                                      /**< (L2CC_CWR) Register Mask  */

#define L2CC_CWR_WAY_Pos                    0                                              /**< (L2CC_CWR Position) Clean Way Number 7 */
#define L2CC_CWR_WAY_Msk                    (_U_(0xFF) << L2CC_CWR_WAY_Pos)                /**< (L2CC_CWR Mask) WAY */
#define L2CC_CWR_WAY(value)                 (L2CC_CWR_WAY_Msk & ((value) << L2CC_CWR_WAY_Pos))  

/* -------- L2CC_CIPALR : (L2CC Offset: 0x7f0) (R/W 32) Clean Invalidate Physical Address Line Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t C:1;                       /**< bit:      0  Cache Synchronization Status             */
    uint32_t :4;                        /**< bit:   1..4  Reserved */
    uint32_t IDX:9;                     /**< bit:  5..13  Index Number                             */
    uint32_t TAG:18;                    /**< bit: 14..31  Tag Number                               */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_CIPALR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_CIPALR_OFFSET                  (0x7F0)                                       /**<  (L2CC_CIPALR) Clean Invalidate Physical Address Line Register  Offset */

#define L2CC_CIPALR_C_Pos                   0                                              /**< (L2CC_CIPALR) Cache Synchronization Status Position */
#define L2CC_CIPALR_C_Msk                   (_U_(0x1) << L2CC_CIPALR_C_Pos)                /**< (L2CC_CIPALR) Cache Synchronization Status Mask */
#define L2CC_CIPALR_C                       L2CC_CIPALR_C_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CIPALR_C_Msk instead */
#define L2CC_CIPALR_IDX_Pos                 5                                              /**< (L2CC_CIPALR) Index Number Position */
#define L2CC_CIPALR_IDX_Msk                 (_U_(0x1FF) << L2CC_CIPALR_IDX_Pos)            /**< (L2CC_CIPALR) Index Number Mask */
#define L2CC_CIPALR_IDX(value)              (L2CC_CIPALR_IDX_Msk & ((value) << L2CC_CIPALR_IDX_Pos))
#define L2CC_CIPALR_TAG_Pos                 14                                             /**< (L2CC_CIPALR) Tag Number Position */
#define L2CC_CIPALR_TAG_Msk                 (_U_(0x3FFFF) << L2CC_CIPALR_TAG_Pos)          /**< (L2CC_CIPALR) Tag Number Mask */
#define L2CC_CIPALR_TAG(value)              (L2CC_CIPALR_TAG_Msk & ((value) << L2CC_CIPALR_TAG_Pos))
#define L2CC_CIPALR_MASK                    _U_(0xFFFFFFE1)                                /**< \deprecated (L2CC_CIPALR) Register MASK  (Use L2CC_CIPALR_Msk instead)  */
#define L2CC_CIPALR_Msk                     _U_(0xFFFFFFE1)                                /**< (L2CC_CIPALR) Register Mask  */


/* -------- L2CC_CIIR : (L2CC Offset: 0x7f8) (R/W 32) Clean Invalidate Index Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t C:1;                       /**< bit:      0  Cache Synchronization Status             */
    uint32_t :4;                        /**< bit:   1..4  Reserved */
    uint32_t IDX:9;                     /**< bit:  5..13  Index Number                             */
    uint32_t :14;                       /**< bit: 14..27  Reserved */
    uint32_t WAY:3;                     /**< bit: 28..30  Way Number                               */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_CIIR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_CIIR_OFFSET                    (0x7F8)                                       /**<  (L2CC_CIIR) Clean Invalidate Index Register  Offset */

#define L2CC_CIIR_C_Pos                     0                                              /**< (L2CC_CIIR) Cache Synchronization Status Position */
#define L2CC_CIIR_C_Msk                     (_U_(0x1) << L2CC_CIIR_C_Pos)                  /**< (L2CC_CIIR) Cache Synchronization Status Mask */
#define L2CC_CIIR_C                         L2CC_CIIR_C_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CIIR_C_Msk instead */
#define L2CC_CIIR_IDX_Pos                   5                                              /**< (L2CC_CIIR) Index Number Position */
#define L2CC_CIIR_IDX_Msk                   (_U_(0x1FF) << L2CC_CIIR_IDX_Pos)              /**< (L2CC_CIIR) Index Number Mask */
#define L2CC_CIIR_IDX(value)                (L2CC_CIIR_IDX_Msk & ((value) << L2CC_CIIR_IDX_Pos))
#define L2CC_CIIR_WAY_Pos                   28                                             /**< (L2CC_CIIR) Way Number Position */
#define L2CC_CIIR_WAY_Msk                   (_U_(0x7) << L2CC_CIIR_WAY_Pos)                /**< (L2CC_CIIR) Way Number Mask */
#define L2CC_CIIR_WAY(value)                (L2CC_CIIR_WAY_Msk & ((value) << L2CC_CIIR_WAY_Pos))
#define L2CC_CIIR_MASK                      _U_(0x70003FE1)                                /**< \deprecated (L2CC_CIIR) Register MASK  (Use L2CC_CIIR_Msk instead)  */
#define L2CC_CIIR_Msk                       _U_(0x70003FE1)                                /**< (L2CC_CIIR) Register Mask  */


/* -------- L2CC_CIWR : (L2CC Offset: 0x7fc) (R/W 32) Clean Invalidate Way Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WAY0:1;                    /**< bit:      0  Clean Invalidate Way Number 0            */
    uint32_t WAY1:1;                    /**< bit:      1  Clean Invalidate Way Number 1            */
    uint32_t WAY2:1;                    /**< bit:      2  Clean Invalidate Way Number 2            */
    uint32_t WAY3:1;                    /**< bit:      3  Clean Invalidate Way Number 3            */
    uint32_t WAY4:1;                    /**< bit:      4  Clean Invalidate Way Number 4            */
    uint32_t WAY5:1;                    /**< bit:      5  Clean Invalidate Way Number 5            */
    uint32_t WAY6:1;                    /**< bit:      6  Clean Invalidate Way Number 6            */
    uint32_t WAY7:1;                    /**< bit:      7  Clean Invalidate Way Number 7            */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t WAY:8;                     /**< bit:   0..7  Clean Invalidate Way Number 7            */
    uint32_t :24;                       /**< bit:  8..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_CIWR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_CIWR_OFFSET                    (0x7FC)                                       /**<  (L2CC_CIWR) Clean Invalidate Way Register  Offset */

#define L2CC_CIWR_WAY0_Pos                  0                                              /**< (L2CC_CIWR) Clean Invalidate Way Number 0 Position */
#define L2CC_CIWR_WAY0_Msk                  (_U_(0x1) << L2CC_CIWR_WAY0_Pos)               /**< (L2CC_CIWR) Clean Invalidate Way Number 0 Mask */
#define L2CC_CIWR_WAY0                      L2CC_CIWR_WAY0_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CIWR_WAY0_Msk instead */
#define L2CC_CIWR_WAY1_Pos                  1                                              /**< (L2CC_CIWR) Clean Invalidate Way Number 1 Position */
#define L2CC_CIWR_WAY1_Msk                  (_U_(0x1) << L2CC_CIWR_WAY1_Pos)               /**< (L2CC_CIWR) Clean Invalidate Way Number 1 Mask */
#define L2CC_CIWR_WAY1                      L2CC_CIWR_WAY1_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CIWR_WAY1_Msk instead */
#define L2CC_CIWR_WAY2_Pos                  2                                              /**< (L2CC_CIWR) Clean Invalidate Way Number 2 Position */
#define L2CC_CIWR_WAY2_Msk                  (_U_(0x1) << L2CC_CIWR_WAY2_Pos)               /**< (L2CC_CIWR) Clean Invalidate Way Number 2 Mask */
#define L2CC_CIWR_WAY2                      L2CC_CIWR_WAY2_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CIWR_WAY2_Msk instead */
#define L2CC_CIWR_WAY3_Pos                  3                                              /**< (L2CC_CIWR) Clean Invalidate Way Number 3 Position */
#define L2CC_CIWR_WAY3_Msk                  (_U_(0x1) << L2CC_CIWR_WAY3_Pos)               /**< (L2CC_CIWR) Clean Invalidate Way Number 3 Mask */
#define L2CC_CIWR_WAY3                      L2CC_CIWR_WAY3_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CIWR_WAY3_Msk instead */
#define L2CC_CIWR_WAY4_Pos                  4                                              /**< (L2CC_CIWR) Clean Invalidate Way Number 4 Position */
#define L2CC_CIWR_WAY4_Msk                  (_U_(0x1) << L2CC_CIWR_WAY4_Pos)               /**< (L2CC_CIWR) Clean Invalidate Way Number 4 Mask */
#define L2CC_CIWR_WAY4                      L2CC_CIWR_WAY4_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CIWR_WAY4_Msk instead */
#define L2CC_CIWR_WAY5_Pos                  5                                              /**< (L2CC_CIWR) Clean Invalidate Way Number 5 Position */
#define L2CC_CIWR_WAY5_Msk                  (_U_(0x1) << L2CC_CIWR_WAY5_Pos)               /**< (L2CC_CIWR) Clean Invalidate Way Number 5 Mask */
#define L2CC_CIWR_WAY5                      L2CC_CIWR_WAY5_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CIWR_WAY5_Msk instead */
#define L2CC_CIWR_WAY6_Pos                  6                                              /**< (L2CC_CIWR) Clean Invalidate Way Number 6 Position */
#define L2CC_CIWR_WAY6_Msk                  (_U_(0x1) << L2CC_CIWR_WAY6_Pos)               /**< (L2CC_CIWR) Clean Invalidate Way Number 6 Mask */
#define L2CC_CIWR_WAY6                      L2CC_CIWR_WAY6_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CIWR_WAY6_Msk instead */
#define L2CC_CIWR_WAY7_Pos                  7                                              /**< (L2CC_CIWR) Clean Invalidate Way Number 7 Position */
#define L2CC_CIWR_WAY7_Msk                  (_U_(0x1) << L2CC_CIWR_WAY7_Pos)               /**< (L2CC_CIWR) Clean Invalidate Way Number 7 Mask */
#define L2CC_CIWR_WAY7                      L2CC_CIWR_WAY7_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_CIWR_WAY7_Msk instead */
#define L2CC_CIWR_MASK                      _U_(0xFF)                                      /**< \deprecated (L2CC_CIWR) Register MASK  (Use L2CC_CIWR_Msk instead)  */
#define L2CC_CIWR_Msk                       _U_(0xFF)                                      /**< (L2CC_CIWR) Register Mask  */

#define L2CC_CIWR_WAY_Pos                   0                                              /**< (L2CC_CIWR Position) Clean Invalidate Way Number 7 */
#define L2CC_CIWR_WAY_Msk                   (_U_(0xFF) << L2CC_CIWR_WAY_Pos)               /**< (L2CC_CIWR Mask) WAY */
#define L2CC_CIWR_WAY(value)                (L2CC_CIWR_WAY_Msk & ((value) << L2CC_CIWR_WAY_Pos))  

/* -------- L2CC_DLKR : (L2CC Offset: 0x900) (R/W 32) Data Lockdown Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DLK0:1;                    /**< bit:      0  Data Lockdown in Way Number 0            */
    uint32_t DLK1:1;                    /**< bit:      1  Data Lockdown in Way Number 1            */
    uint32_t DLK2:1;                    /**< bit:      2  Data Lockdown in Way Number 2            */
    uint32_t DLK3:1;                    /**< bit:      3  Data Lockdown in Way Number 3            */
    uint32_t DLK4:1;                    /**< bit:      4  Data Lockdown in Way Number 4            */
    uint32_t DLK5:1;                    /**< bit:      5  Data Lockdown in Way Number 5            */
    uint32_t DLK6:1;                    /**< bit:      6  Data Lockdown in Way Number 6            */
    uint32_t DLK7:1;                    /**< bit:      7  Data Lockdown in Way Number 7            */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t DLK:8;                     /**< bit:   0..7  Data Lockdown in Way Number 7            */
    uint32_t :24;                       /**< bit:  8..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_DLKR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_DLKR_OFFSET                    (0x900)                                       /**<  (L2CC_DLKR) Data Lockdown Register  Offset */

#define L2CC_DLKR_DLK0_Pos                  0                                              /**< (L2CC_DLKR) Data Lockdown in Way Number 0 Position */
#define L2CC_DLKR_DLK0_Msk                  (_U_(0x1) << L2CC_DLKR_DLK0_Pos)               /**< (L2CC_DLKR) Data Lockdown in Way Number 0 Mask */
#define L2CC_DLKR_DLK0                      L2CC_DLKR_DLK0_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_DLKR_DLK0_Msk instead */
#define L2CC_DLKR_DLK1_Pos                  1                                              /**< (L2CC_DLKR) Data Lockdown in Way Number 1 Position */
#define L2CC_DLKR_DLK1_Msk                  (_U_(0x1) << L2CC_DLKR_DLK1_Pos)               /**< (L2CC_DLKR) Data Lockdown in Way Number 1 Mask */
#define L2CC_DLKR_DLK1                      L2CC_DLKR_DLK1_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_DLKR_DLK1_Msk instead */
#define L2CC_DLKR_DLK2_Pos                  2                                              /**< (L2CC_DLKR) Data Lockdown in Way Number 2 Position */
#define L2CC_DLKR_DLK2_Msk                  (_U_(0x1) << L2CC_DLKR_DLK2_Pos)               /**< (L2CC_DLKR) Data Lockdown in Way Number 2 Mask */
#define L2CC_DLKR_DLK2                      L2CC_DLKR_DLK2_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_DLKR_DLK2_Msk instead */
#define L2CC_DLKR_DLK3_Pos                  3                                              /**< (L2CC_DLKR) Data Lockdown in Way Number 3 Position */
#define L2CC_DLKR_DLK3_Msk                  (_U_(0x1) << L2CC_DLKR_DLK3_Pos)               /**< (L2CC_DLKR) Data Lockdown in Way Number 3 Mask */
#define L2CC_DLKR_DLK3                      L2CC_DLKR_DLK3_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_DLKR_DLK3_Msk instead */
#define L2CC_DLKR_DLK4_Pos                  4                                              /**< (L2CC_DLKR) Data Lockdown in Way Number 4 Position */
#define L2CC_DLKR_DLK4_Msk                  (_U_(0x1) << L2CC_DLKR_DLK4_Pos)               /**< (L2CC_DLKR) Data Lockdown in Way Number 4 Mask */
#define L2CC_DLKR_DLK4                      L2CC_DLKR_DLK4_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_DLKR_DLK4_Msk instead */
#define L2CC_DLKR_DLK5_Pos                  5                                              /**< (L2CC_DLKR) Data Lockdown in Way Number 5 Position */
#define L2CC_DLKR_DLK5_Msk                  (_U_(0x1) << L2CC_DLKR_DLK5_Pos)               /**< (L2CC_DLKR) Data Lockdown in Way Number 5 Mask */
#define L2CC_DLKR_DLK5                      L2CC_DLKR_DLK5_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_DLKR_DLK5_Msk instead */
#define L2CC_DLKR_DLK6_Pos                  6                                              /**< (L2CC_DLKR) Data Lockdown in Way Number 6 Position */
#define L2CC_DLKR_DLK6_Msk                  (_U_(0x1) << L2CC_DLKR_DLK6_Pos)               /**< (L2CC_DLKR) Data Lockdown in Way Number 6 Mask */
#define L2CC_DLKR_DLK6                      L2CC_DLKR_DLK6_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_DLKR_DLK6_Msk instead */
#define L2CC_DLKR_DLK7_Pos                  7                                              /**< (L2CC_DLKR) Data Lockdown in Way Number 7 Position */
#define L2CC_DLKR_DLK7_Msk                  (_U_(0x1) << L2CC_DLKR_DLK7_Pos)               /**< (L2CC_DLKR) Data Lockdown in Way Number 7 Mask */
#define L2CC_DLKR_DLK7                      L2CC_DLKR_DLK7_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_DLKR_DLK7_Msk instead */
#define L2CC_DLKR_MASK                      _U_(0xFF)                                      /**< \deprecated (L2CC_DLKR) Register MASK  (Use L2CC_DLKR_Msk instead)  */
#define L2CC_DLKR_Msk                       _U_(0xFF)                                      /**< (L2CC_DLKR) Register Mask  */

#define L2CC_DLKR_DLK_Pos                   0                                              /**< (L2CC_DLKR Position) Data Lockdown in Way Number 7 */
#define L2CC_DLKR_DLK_Msk                   (_U_(0xFF) << L2CC_DLKR_DLK_Pos)               /**< (L2CC_DLKR Mask) DLK */
#define L2CC_DLKR_DLK(value)                (L2CC_DLKR_DLK_Msk & ((value) << L2CC_DLKR_DLK_Pos))  

/* -------- L2CC_ILKR : (L2CC Offset: 0x904) (R/W 32) Instruction Lockdown Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ILK0:1;                    /**< bit:      0  Instruction Lockdown in Way Number 0     */
    uint32_t ILK1:1;                    /**< bit:      1  Instruction Lockdown in Way Number 1     */
    uint32_t ILK2:1;                    /**< bit:      2  Instruction Lockdown in Way Number 2     */
    uint32_t ILK3:1;                    /**< bit:      3  Instruction Lockdown in Way Number 3     */
    uint32_t ILK4:1;                    /**< bit:      4  Instruction Lockdown in Way Number 4     */
    uint32_t ILK5:1;                    /**< bit:      5  Instruction Lockdown in Way Number 5     */
    uint32_t ILK6:1;                    /**< bit:      6  Instruction Lockdown in Way Number 6     */
    uint32_t ILK7:1;                    /**< bit:      7  Instruction Lockdown in Way Number 7     */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t ILK:8;                     /**< bit:   0..7  Instruction Lockdown in Way Number 7     */
    uint32_t :24;                       /**< bit:  8..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_ILKR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_ILKR_OFFSET                    (0x904)                                       /**<  (L2CC_ILKR) Instruction Lockdown Register  Offset */

#define L2CC_ILKR_ILK0_Pos                  0                                              /**< (L2CC_ILKR) Instruction Lockdown in Way Number 0 Position */
#define L2CC_ILKR_ILK0_Msk                  (_U_(0x1) << L2CC_ILKR_ILK0_Pos)               /**< (L2CC_ILKR) Instruction Lockdown in Way Number 0 Mask */
#define L2CC_ILKR_ILK0                      L2CC_ILKR_ILK0_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ILKR_ILK0_Msk instead */
#define L2CC_ILKR_ILK1_Pos                  1                                              /**< (L2CC_ILKR) Instruction Lockdown in Way Number 1 Position */
#define L2CC_ILKR_ILK1_Msk                  (_U_(0x1) << L2CC_ILKR_ILK1_Pos)               /**< (L2CC_ILKR) Instruction Lockdown in Way Number 1 Mask */
#define L2CC_ILKR_ILK1                      L2CC_ILKR_ILK1_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ILKR_ILK1_Msk instead */
#define L2CC_ILKR_ILK2_Pos                  2                                              /**< (L2CC_ILKR) Instruction Lockdown in Way Number 2 Position */
#define L2CC_ILKR_ILK2_Msk                  (_U_(0x1) << L2CC_ILKR_ILK2_Pos)               /**< (L2CC_ILKR) Instruction Lockdown in Way Number 2 Mask */
#define L2CC_ILKR_ILK2                      L2CC_ILKR_ILK2_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ILKR_ILK2_Msk instead */
#define L2CC_ILKR_ILK3_Pos                  3                                              /**< (L2CC_ILKR) Instruction Lockdown in Way Number 3 Position */
#define L2CC_ILKR_ILK3_Msk                  (_U_(0x1) << L2CC_ILKR_ILK3_Pos)               /**< (L2CC_ILKR) Instruction Lockdown in Way Number 3 Mask */
#define L2CC_ILKR_ILK3                      L2CC_ILKR_ILK3_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ILKR_ILK3_Msk instead */
#define L2CC_ILKR_ILK4_Pos                  4                                              /**< (L2CC_ILKR) Instruction Lockdown in Way Number 4 Position */
#define L2CC_ILKR_ILK4_Msk                  (_U_(0x1) << L2CC_ILKR_ILK4_Pos)               /**< (L2CC_ILKR) Instruction Lockdown in Way Number 4 Mask */
#define L2CC_ILKR_ILK4                      L2CC_ILKR_ILK4_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ILKR_ILK4_Msk instead */
#define L2CC_ILKR_ILK5_Pos                  5                                              /**< (L2CC_ILKR) Instruction Lockdown in Way Number 5 Position */
#define L2CC_ILKR_ILK5_Msk                  (_U_(0x1) << L2CC_ILKR_ILK5_Pos)               /**< (L2CC_ILKR) Instruction Lockdown in Way Number 5 Mask */
#define L2CC_ILKR_ILK5                      L2CC_ILKR_ILK5_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ILKR_ILK5_Msk instead */
#define L2CC_ILKR_ILK6_Pos                  6                                              /**< (L2CC_ILKR) Instruction Lockdown in Way Number 6 Position */
#define L2CC_ILKR_ILK6_Msk                  (_U_(0x1) << L2CC_ILKR_ILK6_Pos)               /**< (L2CC_ILKR) Instruction Lockdown in Way Number 6 Mask */
#define L2CC_ILKR_ILK6                      L2CC_ILKR_ILK6_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ILKR_ILK6_Msk instead */
#define L2CC_ILKR_ILK7_Pos                  7                                              /**< (L2CC_ILKR) Instruction Lockdown in Way Number 7 Position */
#define L2CC_ILKR_ILK7_Msk                  (_U_(0x1) << L2CC_ILKR_ILK7_Pos)               /**< (L2CC_ILKR) Instruction Lockdown in Way Number 7 Mask */
#define L2CC_ILKR_ILK7                      L2CC_ILKR_ILK7_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_ILKR_ILK7_Msk instead */
#define L2CC_ILKR_MASK                      _U_(0xFF)                                      /**< \deprecated (L2CC_ILKR) Register MASK  (Use L2CC_ILKR_Msk instead)  */
#define L2CC_ILKR_Msk                       _U_(0xFF)                                      /**< (L2CC_ILKR) Register Mask  */

#define L2CC_ILKR_ILK_Pos                   0                                              /**< (L2CC_ILKR Position) Instruction Lockdown in Way Number 7 */
#define L2CC_ILKR_ILK_Msk                   (_U_(0xFF) << L2CC_ILKR_ILK_Pos)               /**< (L2CC_ILKR Mask) ILK */
#define L2CC_ILKR_ILK(value)                (L2CC_ILKR_ILK_Msk & ((value) << L2CC_ILKR_ILK_Pos))  

/* -------- L2CC_DCR : (L2CC Offset: 0xf40) (R/W 32) Debug Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DCL:1;                     /**< bit:      0  Disable Cache Linefill                   */
    uint32_t DWB:1;                     /**< bit:      1  Disable Write-back, Force Write-through  */
    uint32_t SPNIDEN:1;                 /**< bit:      2  SPNIDEN Value                            */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_DCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_DCR_OFFSET                     (0xF40)                                       /**<  (L2CC_DCR) Debug Control Register  Offset */

#define L2CC_DCR_DCL_Pos                    0                                              /**< (L2CC_DCR) Disable Cache Linefill Position */
#define L2CC_DCR_DCL_Msk                    (_U_(0x1) << L2CC_DCR_DCL_Pos)                 /**< (L2CC_DCR) Disable Cache Linefill Mask */
#define L2CC_DCR_DCL                        L2CC_DCR_DCL_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_DCR_DCL_Msk instead */
#define L2CC_DCR_DWB_Pos                    1                                              /**< (L2CC_DCR) Disable Write-back, Force Write-through Position */
#define L2CC_DCR_DWB_Msk                    (_U_(0x1) << L2CC_DCR_DWB_Pos)                 /**< (L2CC_DCR) Disable Write-back, Force Write-through Mask */
#define L2CC_DCR_DWB                        L2CC_DCR_DWB_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_DCR_DWB_Msk instead */
#define L2CC_DCR_SPNIDEN_Pos                2                                              /**< (L2CC_DCR) SPNIDEN Value Position */
#define L2CC_DCR_SPNIDEN_Msk                (_U_(0x1) << L2CC_DCR_SPNIDEN_Pos)             /**< (L2CC_DCR) SPNIDEN Value Mask */
#define L2CC_DCR_SPNIDEN                    L2CC_DCR_SPNIDEN_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_DCR_SPNIDEN_Msk instead */
#define L2CC_DCR_MASK                       _U_(0x07)                                      /**< \deprecated (L2CC_DCR) Register MASK  (Use L2CC_DCR_Msk instead)  */
#define L2CC_DCR_Msk                        _U_(0x07)                                      /**< (L2CC_DCR) Register Mask  */


/* -------- L2CC_PCR : (L2CC Offset: 0xf60) (R/W 32) Prefetch Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t OFFSET:5;                  /**< bit:   0..4  Prefetch Offset                          */
    uint32_t :16;                       /**< bit:  5..20  Reserved */
    uint32_t NSIDEN:1;                  /**< bit:     21  Not Same ID on Exclusive Sequence Enable */
    uint32_t :1;                        /**< bit:     22  Reserved */
    uint32_t IDLEN:1;                   /**< bit:     23  INCR Double Linefill Enable              */
    uint32_t PDEN:1;                    /**< bit:     24  Prefetch Drop Enable                     */
    uint32_t :2;                        /**< bit: 25..26  Reserved */
    uint32_t DLFWRDIS:1;                /**< bit:     27  Double Linefill on WRAP Read Disable     */
    uint32_t DATPEN:1;                  /**< bit:     28  Data Prefetch Enable                     */
    uint32_t INSPEN:1;                  /**< bit:     29  Instruction Prefetch Enable              */
    uint32_t DLEN:1;                    /**< bit:     30  Double Linefill Enable                   */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_PCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_PCR_OFFSET                     (0xF60)                                       /**<  (L2CC_PCR) Prefetch Control Register  Offset */

#define L2CC_PCR_OFFSET_Pos                 0                                              /**< (L2CC_PCR) Prefetch Offset Position */
#define L2CC_PCR_OFFSET_Msk                 (_U_(0x1F) << L2CC_PCR_OFFSET_Pos)             /**< (L2CC_PCR) Prefetch Offset Mask */
#define L2CC_PCR_OFFSET(value)              (L2CC_PCR_OFFSET_Msk & ((value) << L2CC_PCR_OFFSET_Pos))
#define L2CC_PCR_NSIDEN_Pos                 21                                             /**< (L2CC_PCR) Not Same ID on Exclusive Sequence Enable Position */
#define L2CC_PCR_NSIDEN_Msk                 (_U_(0x1) << L2CC_PCR_NSIDEN_Pos)              /**< (L2CC_PCR) Not Same ID on Exclusive Sequence Enable Mask */
#define L2CC_PCR_NSIDEN                     L2CC_PCR_NSIDEN_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_PCR_NSIDEN_Msk instead */
#define L2CC_PCR_IDLEN_Pos                  23                                             /**< (L2CC_PCR) INCR Double Linefill Enable Position */
#define L2CC_PCR_IDLEN_Msk                  (_U_(0x1) << L2CC_PCR_IDLEN_Pos)               /**< (L2CC_PCR) INCR Double Linefill Enable Mask */
#define L2CC_PCR_IDLEN                      L2CC_PCR_IDLEN_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_PCR_IDLEN_Msk instead */
#define L2CC_PCR_PDEN_Pos                   24                                             /**< (L2CC_PCR) Prefetch Drop Enable Position */
#define L2CC_PCR_PDEN_Msk                   (_U_(0x1) << L2CC_PCR_PDEN_Pos)                /**< (L2CC_PCR) Prefetch Drop Enable Mask */
#define L2CC_PCR_PDEN                       L2CC_PCR_PDEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_PCR_PDEN_Msk instead */
#define L2CC_PCR_DLFWRDIS_Pos               27                                             /**< (L2CC_PCR) Double Linefill on WRAP Read Disable Position */
#define L2CC_PCR_DLFWRDIS_Msk               (_U_(0x1) << L2CC_PCR_DLFWRDIS_Pos)            /**< (L2CC_PCR) Double Linefill on WRAP Read Disable Mask */
#define L2CC_PCR_DLFWRDIS                   L2CC_PCR_DLFWRDIS_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_PCR_DLFWRDIS_Msk instead */
#define L2CC_PCR_DATPEN_Pos                 28                                             /**< (L2CC_PCR) Data Prefetch Enable Position */
#define L2CC_PCR_DATPEN_Msk                 (_U_(0x1) << L2CC_PCR_DATPEN_Pos)              /**< (L2CC_PCR) Data Prefetch Enable Mask */
#define L2CC_PCR_DATPEN                     L2CC_PCR_DATPEN_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_PCR_DATPEN_Msk instead */
#define L2CC_PCR_INSPEN_Pos                 29                                             /**< (L2CC_PCR) Instruction Prefetch Enable Position */
#define L2CC_PCR_INSPEN_Msk                 (_U_(0x1) << L2CC_PCR_INSPEN_Pos)              /**< (L2CC_PCR) Instruction Prefetch Enable Mask */
#define L2CC_PCR_INSPEN                     L2CC_PCR_INSPEN_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_PCR_INSPEN_Msk instead */
#define L2CC_PCR_DLEN_Pos                   30                                             /**< (L2CC_PCR) Double Linefill Enable Position */
#define L2CC_PCR_DLEN_Msk                   (_U_(0x1) << L2CC_PCR_DLEN_Pos)                /**< (L2CC_PCR) Double Linefill Enable Mask */
#define L2CC_PCR_DLEN                       L2CC_PCR_DLEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_PCR_DLEN_Msk instead */
#define L2CC_PCR_MASK                       _U_(0x79A0001F)                                /**< \deprecated (L2CC_PCR) Register MASK  (Use L2CC_PCR_Msk instead)  */
#define L2CC_PCR_Msk                        _U_(0x79A0001F)                                /**< (L2CC_PCR) Register Mask  */


/* -------- L2CC_POWCR : (L2CC Offset: 0xf80) (R/W 32) Power Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t STBYEN:1;                  /**< bit:      0  Standby Mode Enable                      */
    uint32_t DCKGATEN:1;                /**< bit:      1  Dynamic Clock Gating Enable              */
    uint32_t :30;                       /**< bit:  2..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} L2CC_POWCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define L2CC_POWCR_OFFSET                   (0xF80)                                       /**<  (L2CC_POWCR) Power Control Register  Offset */

#define L2CC_POWCR_STBYEN_Pos               0                                              /**< (L2CC_POWCR) Standby Mode Enable Position */
#define L2CC_POWCR_STBYEN_Msk               (_U_(0x1) << L2CC_POWCR_STBYEN_Pos)            /**< (L2CC_POWCR) Standby Mode Enable Mask */
#define L2CC_POWCR_STBYEN                   L2CC_POWCR_STBYEN_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_POWCR_STBYEN_Msk instead */
#define L2CC_POWCR_DCKGATEN_Pos             1                                              /**< (L2CC_POWCR) Dynamic Clock Gating Enable Position */
#define L2CC_POWCR_DCKGATEN_Msk             (_U_(0x1) << L2CC_POWCR_DCKGATEN_Pos)          /**< (L2CC_POWCR) Dynamic Clock Gating Enable Mask */
#define L2CC_POWCR_DCKGATEN                 L2CC_POWCR_DCKGATEN_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use L2CC_POWCR_DCKGATEN_Msk instead */
#define L2CC_POWCR_MASK                     _U_(0x03)                                      /**< \deprecated (L2CC_POWCR) Register MASK  (Use L2CC_POWCR_Msk instead)  */
#define L2CC_POWCR_Msk                      _U_(0x03)                                      /**< (L2CC_POWCR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief L2CC hardware registers */
typedef struct {  
  __I  uint32_t L2CC_IDR;       /**< (L2CC Offset: 0x00) Cache ID Register */
  __I  uint32_t L2CC_TYPR;      /**< (L2CC Offset: 0x04) Cache Type Register */
  __I  uint8_t                        Reserved1[248];
  __IO uint32_t L2CC_CR;        /**< (L2CC Offset: 0x100) Control Register */
  __IO uint32_t L2CC_ACR;       /**< (L2CC Offset: 0x104) Auxiliary Control Register */
  __IO uint32_t L2CC_TRCR;      /**< (L2CC Offset: 0x108) Tag RAM Control Register */
  __IO uint32_t L2CC_DRCR;      /**< (L2CC Offset: 0x10C) Data RAM Control Register */
  __I  uint8_t                        Reserved2[240];
  __IO uint32_t L2CC_ECR;       /**< (L2CC Offset: 0x200) Event Counter Control Register */
  __IO uint32_t L2CC_ECFGR1;    /**< (L2CC Offset: 0x204) Event Counter 1 Configuration Register */
  __IO uint32_t L2CC_ECFGR0;    /**< (L2CC Offset: 0x208) Event Counter 0 Configuration Register */
  __IO uint32_t L2CC_EVR1;      /**< (L2CC Offset: 0x20C) Event Counter 1 Value Register */
  __IO uint32_t L2CC_EVR0;      /**< (L2CC Offset: 0x210) Event Counter 0 Value Register */
  __IO uint32_t L2CC_IMR;       /**< (L2CC Offset: 0x214) Interrupt Mask Register */
  __I  uint32_t L2CC_MISR;      /**< (L2CC Offset: 0x218) Masked Interrupt Status Register */
  __I  uint32_t L2CC_RISR;      /**< (L2CC Offset: 0x21C) Raw Interrupt Status Register */
  __IO uint32_t L2CC_ICR;       /**< (L2CC Offset: 0x220) Interrupt Clear Register */
  __I  uint8_t                        Reserved3[1292];
  __IO uint32_t L2CC_CSR;       /**< (L2CC Offset: 0x730) Cache Synchronization Register */
  __I  uint8_t                        Reserved4[60];
  __IO uint32_t L2CC_IPALR;     /**< (L2CC Offset: 0x770) Invalidate Physical Address Line Register */
  __I  uint8_t                        Reserved5[8];
  __IO uint32_t L2CC_IWR;       /**< (L2CC Offset: 0x77C) Invalidate Way Register */
  __I  uint8_t                        Reserved6[48];
  __IO uint32_t L2CC_CPALR;     /**< (L2CC Offset: 0x7B0) Clean Physical Address Line Register */
  __I  uint8_t                        Reserved7[4];
  __IO uint32_t L2CC_CIR;       /**< (L2CC Offset: 0x7B8) Clean Index Register */
  __IO uint32_t L2CC_CWR;       /**< (L2CC Offset: 0x7BC) Clean Way Register */
  __I  uint8_t                        Reserved8[48];
  __IO uint32_t L2CC_CIPALR;    /**< (L2CC Offset: 0x7F0) Clean Invalidate Physical Address Line Register */
  __I  uint8_t                        Reserved9[4];
  __IO uint32_t L2CC_CIIR;      /**< (L2CC Offset: 0x7F8) Clean Invalidate Index Register */
  __IO uint32_t L2CC_CIWR;      /**< (L2CC Offset: 0x7FC) Clean Invalidate Way Register */
  __I  uint8_t                        Reserved10[256];
  __IO uint32_t L2CC_DLKR;      /**< (L2CC Offset: 0x900) Data Lockdown Register */
  __IO uint32_t L2CC_ILKR;      /**< (L2CC Offset: 0x904) Instruction Lockdown Register */
  __I  uint8_t                        Reserved11[1592];
  __IO uint32_t L2CC_DCR;       /**< (L2CC Offset: 0xF40) Debug Control Register */
  __I  uint8_t                        Reserved12[28];
  __IO uint32_t L2CC_PCR;       /**< (L2CC Offset: 0xF60) Prefetch Control Register */
  __I  uint8_t                        Reserved13[28];
  __IO uint32_t L2CC_POWCR;     /**< (L2CC Offset: 0xF80) Power Control Register */
} L2cc;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief L2CC hardware registers */
typedef struct {  
  __I  L2CC_IDR_Type                  L2CC_IDR;       /**< Offset: 0x00 (R/   32) Cache ID Register */
  __I  L2CC_TYPR_Type                 L2CC_TYPR;      /**< Offset: 0x04 (R/   32) Cache Type Register */
  __I  uint8_t                        Reserved1[248];
  __IO L2CC_CR_Type                   L2CC_CR;        /**< Offset: 0x100 (R/W  32) Control Register */
  __IO L2CC_ACR_Type                  L2CC_ACR;       /**< Offset: 0x104 (R/W  32) Auxiliary Control Register */
  __IO L2CC_TRCR_Type                 L2CC_TRCR;      /**< Offset: 0x108 (R/W  32) Tag RAM Control Register */
  __IO L2CC_DRCR_Type                 L2CC_DRCR;      /**< Offset: 0x10C (R/W  32) Data RAM Control Register */
  __I  uint8_t                        Reserved2[240];
  __IO L2CC_ECR_Type                  L2CC_ECR;       /**< Offset: 0x200 (R/W  32) Event Counter Control Register */
  __IO L2CC_ECFGR1_Type               L2CC_ECFGR1;    /**< Offset: 0x204 (R/W  32) Event Counter 1 Configuration Register */
  __IO L2CC_ECFGR0_Type               L2CC_ECFGR0;    /**< Offset: 0x208 (R/W  32) Event Counter 0 Configuration Register */
  __IO L2CC_EVR1_Type                 L2CC_EVR1;      /**< Offset: 0x20C (R/W  32) Event Counter 1 Value Register */
  __IO L2CC_EVR0_Type                 L2CC_EVR0;      /**< Offset: 0x210 (R/W  32) Event Counter 0 Value Register */
  __IO L2CC_IMR_Type                  L2CC_IMR;       /**< Offset: 0x214 (R/W  32) Interrupt Mask Register */
  __I  L2CC_MISR_Type                 L2CC_MISR;      /**< Offset: 0x218 (R/   32) Masked Interrupt Status Register */
  __I  L2CC_RISR_Type                 L2CC_RISR;      /**< Offset: 0x21C (R/   32) Raw Interrupt Status Register */
  __IO L2CC_ICR_Type                  L2CC_ICR;       /**< Offset: 0x220 (R/W  32) Interrupt Clear Register */
  __I  uint8_t                        Reserved3[1292];
  __IO L2CC_CSR_Type                  L2CC_CSR;       /**< Offset: 0x730 (R/W  32) Cache Synchronization Register */
  __I  uint8_t                        Reserved4[60];
  __IO L2CC_IPALR_Type                L2CC_IPALR;     /**< Offset: 0x770 (R/W  32) Invalidate Physical Address Line Register */
  __I  uint8_t                        Reserved5[8];
  __IO L2CC_IWR_Type                  L2CC_IWR;       /**< Offset: 0x77C (R/W  32) Invalidate Way Register */
  __I  uint8_t                        Reserved6[48];
  __IO L2CC_CPALR_Type                L2CC_CPALR;     /**< Offset: 0x7B0 (R/W  32) Clean Physical Address Line Register */
  __I  uint8_t                        Reserved7[4];
  __IO L2CC_CIR_Type                  L2CC_CIR;       /**< Offset: 0x7B8 (R/W  32) Clean Index Register */
  __IO L2CC_CWR_Type                  L2CC_CWR;       /**< Offset: 0x7BC (R/W  32) Clean Way Register */
  __I  uint8_t                        Reserved8[48];
  __IO L2CC_CIPALR_Type               L2CC_CIPALR;    /**< Offset: 0x7F0 (R/W  32) Clean Invalidate Physical Address Line Register */
  __I  uint8_t                        Reserved9[4];
  __IO L2CC_CIIR_Type                 L2CC_CIIR;      /**< Offset: 0x7F8 (R/W  32) Clean Invalidate Index Register */
  __IO L2CC_CIWR_Type                 L2CC_CIWR;      /**< Offset: 0x7FC (R/W  32) Clean Invalidate Way Register */
  __I  uint8_t                        Reserved10[256];
  __IO L2CC_DLKR_Type                 L2CC_DLKR;      /**< Offset: 0x900 (R/W  32) Data Lockdown Register */
  __IO L2CC_ILKR_Type                 L2CC_ILKR;      /**< Offset: 0x904 (R/W  32) Instruction Lockdown Register */
  __I  uint8_t                        Reserved11[1592];
  __IO L2CC_DCR_Type                  L2CC_DCR;       /**< Offset: 0xF40 (R/W  32) Debug Control Register */
  __I  uint8_t                        Reserved12[28];
  __IO L2CC_PCR_Type                  L2CC_PCR;       /**< Offset: 0xF60 (R/W  32) Prefetch Control Register */
  __I  uint8_t                        Reserved13[28];
  __IO L2CC_POWCR_Type                L2CC_POWCR;     /**< Offset: 0xF80 (R/W  32) Power Control Register */
} L2cc;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of L2 Cache Controller */

#endif /* _SAMA5D2_L2CC_COMPONENT_H_ */
