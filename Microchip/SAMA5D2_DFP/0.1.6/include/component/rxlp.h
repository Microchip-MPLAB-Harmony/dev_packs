/**
 * \file
 *
 * \brief Component description for RXLP
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
#ifndef _SAMA5D2_RXLP_COMPONENT_H_
#define _SAMA5D2_RXLP_COMPONENT_H_
#define _SAMA5D2_RXLP_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Low Power Asynchronous Receiver
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR RXLP */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define RXLP_11285                      /**< (RXLP) Module ID */
#define REV_RXLP D                      /**< (RXLP) Module revision */

/* -------- RXLP_CR : (RXLP Offset: 0x00) (/W 32) Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t RSTRX:1;                   /**< bit:      2  Reset Receiver                           */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t RXEN:1;                    /**< bit:      4  Receiver Enable                          */
    uint32_t RXDIS:1;                   /**< bit:      5  Receiver Disable                         */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} RXLP_CR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RXLP_CR_OFFSET                      (0x00)                                        /**<  (RXLP_CR) Control Register  Offset */

#define RXLP_CR_RSTRX_Pos                   2                                              /**< (RXLP_CR) Reset Receiver Position */
#define RXLP_CR_RSTRX_Msk                   (_U_(0x1) << RXLP_CR_RSTRX_Pos)                /**< (RXLP_CR) Reset Receiver Mask */
#define RXLP_CR_RSTRX                       RXLP_CR_RSTRX_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use RXLP_CR_RSTRX_Msk instead */
#define RXLP_CR_RXEN_Pos                    4                                              /**< (RXLP_CR) Receiver Enable Position */
#define RXLP_CR_RXEN_Msk                    (_U_(0x1) << RXLP_CR_RXEN_Pos)                 /**< (RXLP_CR) Receiver Enable Mask */
#define RXLP_CR_RXEN                        RXLP_CR_RXEN_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use RXLP_CR_RXEN_Msk instead */
#define RXLP_CR_RXDIS_Pos                   5                                              /**< (RXLP_CR) Receiver Disable Position */
#define RXLP_CR_RXDIS_Msk                   (_U_(0x1) << RXLP_CR_RXDIS_Pos)                /**< (RXLP_CR) Receiver Disable Mask */
#define RXLP_CR_RXDIS                       RXLP_CR_RXDIS_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use RXLP_CR_RXDIS_Msk instead */
#define RXLP_CR_MASK                        _U_(0x34)                                      /**< \deprecated (RXLP_CR) Register MASK  (Use RXLP_CR_Msk instead)  */
#define RXLP_CR_Msk                         _U_(0x34)                                      /**< (RXLP_CR) Register Mask  */


/* -------- RXLP_MR : (RXLP Offset: 0x04) (R/W 32) Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :4;                        /**< bit:   0..3  Reserved */
    uint32_t FILTER:1;                  /**< bit:      4  Receiver Digital Filter                  */
    uint32_t :4;                        /**< bit:   5..8  Reserved */
    uint32_t PAR:3;                     /**< bit:  9..11  Parity Type                              */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} RXLP_MR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RXLP_MR_OFFSET                      (0x04)                                        /**<  (RXLP_MR) Mode Register  Offset */

#define RXLP_MR_FILTER_Pos                  4                                              /**< (RXLP_MR) Receiver Digital Filter Position */
#define RXLP_MR_FILTER_Msk                  (_U_(0x1) << RXLP_MR_FILTER_Pos)               /**< (RXLP_MR) Receiver Digital Filter Mask */
#define RXLP_MR_FILTER                      RXLP_MR_FILTER_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use RXLP_MR_FILTER_Msk instead */
#define   RXLP_MR_FILTER_DISABLED_Val       _U_(0x0)                                       /**< (RXLP_MR) RXLP does not filter the receive line.  */
#define   RXLP_MR_FILTER_ENABLED_Val        _U_(0x1)                                       /**< (RXLP_MR) RXLP filters the receive line using a three-sample filter (16x-bit clock) (2 over 3 majority).  */
#define RXLP_MR_FILTER_DISABLED             (RXLP_MR_FILTER_DISABLED_Val << RXLP_MR_FILTER_Pos)  /**< (RXLP_MR) RXLP does not filter the receive line. Position  */
#define RXLP_MR_FILTER_ENABLED              (RXLP_MR_FILTER_ENABLED_Val << RXLP_MR_FILTER_Pos)  /**< (RXLP_MR) RXLP filters the receive line using a three-sample filter (16x-bit clock) (2 over 3 majority). Position  */
#define RXLP_MR_PAR_Pos                     9                                              /**< (RXLP_MR) Parity Type Position */
#define RXLP_MR_PAR_Msk                     (_U_(0x7) << RXLP_MR_PAR_Pos)                  /**< (RXLP_MR) Parity Type Mask */
#define RXLP_MR_PAR(value)                  (RXLP_MR_PAR_Msk & ((value) << RXLP_MR_PAR_Pos))
#define   RXLP_MR_PAR_EVEN_Val              _U_(0x0)                                       /**< (RXLP_MR) Even Parity  */
#define   RXLP_MR_PAR_ODD_Val               _U_(0x1)                                       /**< (RXLP_MR) Odd Parity  */
#define   RXLP_MR_PAR_SPACE_Val             _U_(0x2)                                       /**< (RXLP_MR) Parity forced to 0  */
#define   RXLP_MR_PAR_MARK_Val              _U_(0x3)                                       /**< (RXLP_MR) Parity forced to 1  */
#define   RXLP_MR_PAR_NO_Val                _U_(0x4)                                       /**< (RXLP_MR) No parity  */
#define RXLP_MR_PAR_EVEN                    (RXLP_MR_PAR_EVEN_Val << RXLP_MR_PAR_Pos)      /**< (RXLP_MR) Even Parity Position  */
#define RXLP_MR_PAR_ODD                     (RXLP_MR_PAR_ODD_Val << RXLP_MR_PAR_Pos)       /**< (RXLP_MR) Odd Parity Position  */
#define RXLP_MR_PAR_SPACE                   (RXLP_MR_PAR_SPACE_Val << RXLP_MR_PAR_Pos)     /**< (RXLP_MR) Parity forced to 0 Position  */
#define RXLP_MR_PAR_MARK                    (RXLP_MR_PAR_MARK_Val << RXLP_MR_PAR_Pos)      /**< (RXLP_MR) Parity forced to 1 Position  */
#define RXLP_MR_PAR_NO                      (RXLP_MR_PAR_NO_Val << RXLP_MR_PAR_Pos)        /**< (RXLP_MR) No parity Position  */
#define RXLP_MR_MASK                        _U_(0xE10)                                     /**< \deprecated (RXLP_MR) Register MASK  (Use RXLP_MR_Msk instead)  */
#define RXLP_MR_Msk                         _U_(0xE10)                                     /**< (RXLP_MR) Register Mask  */


/* -------- RXLP_RHR : (RXLP Offset: 0x18) (R/ 32) Receive Holding Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RXCHR:8;                   /**< bit:   0..7  Received Character                       */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} RXLP_RHR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RXLP_RHR_OFFSET                     (0x18)                                        /**<  (RXLP_RHR) Receive Holding Register  Offset */

#define RXLP_RHR_RXCHR_Pos                  0                                              /**< (RXLP_RHR) Received Character Position */
#define RXLP_RHR_RXCHR_Msk                  (_U_(0xFF) << RXLP_RHR_RXCHR_Pos)              /**< (RXLP_RHR) Received Character Mask */
#define RXLP_RHR_RXCHR(value)               (RXLP_RHR_RXCHR_Msk & ((value) << RXLP_RHR_RXCHR_Pos))
#define RXLP_RHR_MASK                       _U_(0xFF)                                      /**< \deprecated (RXLP_RHR) Register MASK  (Use RXLP_RHR_Msk instead)  */
#define RXLP_RHR_Msk                        _U_(0xFF)                                      /**< (RXLP_RHR) Register Mask  */


/* -------- RXLP_BRGR : (RXLP Offset: 0x20) (R/W 32) Baud Rate Generator Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CD:2;                      /**< bit:   0..1  Clock Divisor                            */
    uint32_t :30;                       /**< bit:  2..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} RXLP_BRGR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RXLP_BRGR_OFFSET                    (0x20)                                        /**<  (RXLP_BRGR) Baud Rate Generator Register  Offset */

#define RXLP_BRGR_CD_Pos                    0                                              /**< (RXLP_BRGR) Clock Divisor Position */
#define RXLP_BRGR_CD_Msk                    (_U_(0x3) << RXLP_BRGR_CD_Pos)                 /**< (RXLP_BRGR) Clock Divisor Mask */
#define RXLP_BRGR_CD(value)                 (RXLP_BRGR_CD_Msk & ((value) << RXLP_BRGR_CD_Pos))
#define RXLP_BRGR_MASK                      _U_(0x03)                                      /**< \deprecated (RXLP_BRGR) Register MASK  (Use RXLP_BRGR_Msk instead)  */
#define RXLP_BRGR_Msk                       _U_(0x03)                                      /**< (RXLP_BRGR) Register Mask  */


/* -------- RXLP_CMPR : (RXLP Offset: 0x24) (R/W 32) Comparison Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t VAL1:8;                    /**< bit:   0..7  First Comparison Value for Received Character */
    uint32_t :8;                        /**< bit:  8..15  Reserved */
    uint32_t VAL2:8;                    /**< bit: 16..23  Second Comparison Value for Received Character */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} RXLP_CMPR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RXLP_CMPR_OFFSET                    (0x24)                                        /**<  (RXLP_CMPR) Comparison Register  Offset */

#define RXLP_CMPR_VAL1_Pos                  0                                              /**< (RXLP_CMPR) First Comparison Value for Received Character Position */
#define RXLP_CMPR_VAL1_Msk                  (_U_(0xFF) << RXLP_CMPR_VAL1_Pos)              /**< (RXLP_CMPR) First Comparison Value for Received Character Mask */
#define RXLP_CMPR_VAL1(value)               (RXLP_CMPR_VAL1_Msk & ((value) << RXLP_CMPR_VAL1_Pos))
#define RXLP_CMPR_VAL2_Pos                  16                                             /**< (RXLP_CMPR) Second Comparison Value for Received Character Position */
#define RXLP_CMPR_VAL2_Msk                  (_U_(0xFF) << RXLP_CMPR_VAL2_Pos)              /**< (RXLP_CMPR) Second Comparison Value for Received Character Mask */
#define RXLP_CMPR_VAL2(value)               (RXLP_CMPR_VAL2_Msk & ((value) << RXLP_CMPR_VAL2_Pos))
#define RXLP_CMPR_MASK                      _U_(0xFF00FF)                                  /**< \deprecated (RXLP_CMPR) Register MASK  (Use RXLP_CMPR_Msk instead)  */
#define RXLP_CMPR_Msk                       _U_(0xFF00FF)                                  /**< (RXLP_CMPR) Register Mask  */


/* -------- RXLP_WPMR : (RXLP Offset: 0xe4) (R/W 32) Write Protection Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPEN:1;                    /**< bit:      0  Write Protection Enable                  */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPKEY:24;                  /**< bit:  8..31  Write Protection Key                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} RXLP_WPMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RXLP_WPMR_OFFSET                    (0xE4)                                        /**<  (RXLP_WPMR) Write Protection Mode Register  Offset */

#define RXLP_WPMR_WPEN_Pos                  0                                              /**< (RXLP_WPMR) Write Protection Enable Position */
#define RXLP_WPMR_WPEN_Msk                  (_U_(0x1) << RXLP_WPMR_WPEN_Pos)               /**< (RXLP_WPMR) Write Protection Enable Mask */
#define RXLP_WPMR_WPEN                      RXLP_WPMR_WPEN_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use RXLP_WPMR_WPEN_Msk instead */
#define RXLP_WPMR_WPKEY_Pos                 8                                              /**< (RXLP_WPMR) Write Protection Key Position */
#define RXLP_WPMR_WPKEY_Msk                 (_U_(0xFFFFFF) << RXLP_WPMR_WPKEY_Pos)         /**< (RXLP_WPMR) Write Protection Key Mask */
#define RXLP_WPMR_WPKEY(value)              (RXLP_WPMR_WPKEY_Msk & ((value) << RXLP_WPMR_WPKEY_Pos))
#define   RXLP_WPMR_WPKEY_PASSWD_Val        _U_(0x52584C)                                  /**< (RXLP_WPMR) Writing any other value in this field aborts the write operation.Always reads as 0.  */
#define RXLP_WPMR_WPKEY_PASSWD              (RXLP_WPMR_WPKEY_PASSWD_Val << RXLP_WPMR_WPKEY_Pos)  /**< (RXLP_WPMR) Writing any other value in this field aborts the write operation.Always reads as 0. Position  */
#define RXLP_WPMR_MASK                      _U_(0xFFFFFF01)                                /**< \deprecated (RXLP_WPMR) Register MASK  (Use RXLP_WPMR_Msk instead)  */
#define RXLP_WPMR_Msk                       _U_(0xFFFFFF01)                                /**< (RXLP_WPMR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief RXLP hardware registers */
typedef struct {  
  __O  uint32_t RXLP_CR;        /**< (RXLP Offset: 0x00) Control Register */
  __IO uint32_t RXLP_MR;        /**< (RXLP Offset: 0x04) Mode Register */
  __I  uint8_t                        Reserved1[16];
  __I  uint32_t RXLP_RHR;       /**< (RXLP Offset: 0x18) Receive Holding Register */
  __I  uint8_t                        Reserved2[4];
  __IO uint32_t RXLP_BRGR;      /**< (RXLP Offset: 0x20) Baud Rate Generator Register */
  __IO uint32_t RXLP_CMPR;      /**< (RXLP Offset: 0x24) Comparison Register */
  __I  uint8_t                        Reserved3[188];
  __IO uint32_t RXLP_WPMR;      /**< (RXLP Offset: 0xE4) Write Protection Mode Register */
} Rxlp;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief RXLP hardware registers */
typedef struct {  
  __O  RXLP_CR_Type                   RXLP_CR;        /**< Offset: 0x00 ( /W  32) Control Register */
  __IO RXLP_MR_Type                   RXLP_MR;        /**< Offset: 0x04 (R/W  32) Mode Register */
  __I  uint8_t                        Reserved1[16];
  __I  RXLP_RHR_Type                  RXLP_RHR;       /**< Offset: 0x18 (R/   32) Receive Holding Register */
  __I  uint8_t                        Reserved2[4];
  __IO RXLP_BRGR_Type                 RXLP_BRGR;      /**< Offset: 0x20 (R/W  32) Baud Rate Generator Register */
  __IO RXLP_CMPR_Type                 RXLP_CMPR;      /**< Offset: 0x24 (R/W  32) Comparison Register */
  __I  uint8_t                        Reserved3[188];
  __IO RXLP_WPMR_Type                 RXLP_WPMR;      /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
} Rxlp;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Low Power Asynchronous Receiver */

#endif /* _SAMA5D2_RXLP_COMPONENT_H_ */
