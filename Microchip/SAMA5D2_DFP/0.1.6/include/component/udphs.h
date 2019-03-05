/**
 * \file
 *
 * \brief Component description for UDPHS
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
#ifndef _SAMA5D2_UDPHS_COMPONENT_H_
#define _SAMA5D2_UDPHS_COMPONENT_H_
#define _SAMA5D2_UDPHS_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 USB High Speed Device Port
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR UDPHS */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define UDPHS_6227                       /**< (UDPHS) Module ID */
#define REV_UDPHS V                      /**< (UDPHS) Module revision */

/* -------- UDPHS_DMANXTDSC : (UDPHS Offset: 0x00) (R/W 32) UDPHS DMA Next Descriptor Address Register (channel = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NXT_DSC_ADD:32;            /**< bit:  0..31  Next Descriptor Address                  */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UDPHS_DMANXTDSC_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UDPHS_DMANXTDSC_OFFSET              (0x00)                                        /**<  (UDPHS_DMANXTDSC) UDPHS DMA Next Descriptor Address Register (channel = 0)  Offset */

#define UDPHS_DMANXTDSC_NXT_DSC_ADD_Pos     0                                              /**< (UDPHS_DMANXTDSC) Next Descriptor Address Position */
#define UDPHS_DMANXTDSC_NXT_DSC_ADD_Msk     (_U_(0xFFFFFFFF) << UDPHS_DMANXTDSC_NXT_DSC_ADD_Pos)  /**< (UDPHS_DMANXTDSC) Next Descriptor Address Mask */
#define UDPHS_DMANXTDSC_NXT_DSC_ADD(value)  (UDPHS_DMANXTDSC_NXT_DSC_ADD_Msk & ((value) << UDPHS_DMANXTDSC_NXT_DSC_ADD_Pos))
#define UDPHS_DMANXTDSC_MASK                _U_(0xFFFFFFFF)                                /**< \deprecated (UDPHS_DMANXTDSC) Register MASK  (Use UDPHS_DMANXTDSC_Msk instead)  */
#define UDPHS_DMANXTDSC_Msk                 _U_(0xFFFFFFFF)                                /**< (UDPHS_DMANXTDSC) Register Mask  */


/* -------- UDPHS_DMAADDRESS : (UDPHS Offset: 0x04) (R/W 32) UDPHS DMA Channel Address Register (channel = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BUFF_ADD:32;               /**< bit:  0..31  Buffer Address                           */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UDPHS_DMAADDRESS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UDPHS_DMAADDRESS_OFFSET             (0x04)                                        /**<  (UDPHS_DMAADDRESS) UDPHS DMA Channel Address Register (channel = 0)  Offset */

#define UDPHS_DMAADDRESS_BUFF_ADD_Pos       0                                              /**< (UDPHS_DMAADDRESS) Buffer Address Position */
#define UDPHS_DMAADDRESS_BUFF_ADD_Msk       (_U_(0xFFFFFFFF) << UDPHS_DMAADDRESS_BUFF_ADD_Pos)  /**< (UDPHS_DMAADDRESS) Buffer Address Mask */
#define UDPHS_DMAADDRESS_BUFF_ADD(value)    (UDPHS_DMAADDRESS_BUFF_ADD_Msk & ((value) << UDPHS_DMAADDRESS_BUFF_ADD_Pos))
#define UDPHS_DMAADDRESS_MASK               _U_(0xFFFFFFFF)                                /**< \deprecated (UDPHS_DMAADDRESS) Register MASK  (Use UDPHS_DMAADDRESS_Msk instead)  */
#define UDPHS_DMAADDRESS_Msk                _U_(0xFFFFFFFF)                                /**< (UDPHS_DMAADDRESS) Register Mask  */


/* -------- UDPHS_DMACONTROL : (UDPHS Offset: 0x08) (R/W 32) UDPHS DMA Channel Control Register (channel = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHANN_ENB:1;               /**< bit:      0  (Channel Enable Command)                 */
    uint32_t LDNXT_DSC:1;               /**< bit:      1  Load Next Channel Transfer Descriptor Enable (Command) */
    uint32_t END_TR_EN:1;               /**< bit:      2  End of Transfer Enable (Control)         */
    uint32_t END_B_EN:1;                /**< bit:      3  End of Buffer Enable (Control)           */
    uint32_t END_TR_IT:1;               /**< bit:      4  End of Transfer Interrupt Enable         */
    uint32_t END_BUFFIT:1;              /**< bit:      5  End of Buffer Interrupt Enable           */
    uint32_t DESC_LD_IT:1;              /**< bit:      6  Descriptor Loaded Interrupt Enable       */
    uint32_t BURST_LCK:1;               /**< bit:      7  Burst Lock Enable                        */
    uint32_t :8;                        /**< bit:  8..15  Reserved */
    uint32_t BUFF_LENGTH:16;            /**< bit: 16..31  Buffer Byte Length (Write-only)          */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UDPHS_DMACONTROL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UDPHS_DMACONTROL_OFFSET             (0x08)                                        /**<  (UDPHS_DMACONTROL) UDPHS DMA Channel Control Register (channel = 0)  Offset */

#define UDPHS_DMACONTROL_CHANN_ENB_Pos      0                                              /**< (UDPHS_DMACONTROL) (Channel Enable Command) Position */
#define UDPHS_DMACONTROL_CHANN_ENB_Msk      (_U_(0x1) << UDPHS_DMACONTROL_CHANN_ENB_Pos)   /**< (UDPHS_DMACONTROL) (Channel Enable Command) Mask */
#define UDPHS_DMACONTROL_CHANN_ENB          UDPHS_DMACONTROL_CHANN_ENB_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_DMACONTROL_CHANN_ENB_Msk instead */
#define UDPHS_DMACONTROL_LDNXT_DSC_Pos      1                                              /**< (UDPHS_DMACONTROL) Load Next Channel Transfer Descriptor Enable (Command) Position */
#define UDPHS_DMACONTROL_LDNXT_DSC_Msk      (_U_(0x1) << UDPHS_DMACONTROL_LDNXT_DSC_Pos)   /**< (UDPHS_DMACONTROL) Load Next Channel Transfer Descriptor Enable (Command) Mask */
#define UDPHS_DMACONTROL_LDNXT_DSC          UDPHS_DMACONTROL_LDNXT_DSC_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_DMACONTROL_LDNXT_DSC_Msk instead */
#define UDPHS_DMACONTROL_END_TR_EN_Pos      2                                              /**< (UDPHS_DMACONTROL) End of Transfer Enable (Control) Position */
#define UDPHS_DMACONTROL_END_TR_EN_Msk      (_U_(0x1) << UDPHS_DMACONTROL_END_TR_EN_Pos)   /**< (UDPHS_DMACONTROL) End of Transfer Enable (Control) Mask */
#define UDPHS_DMACONTROL_END_TR_EN          UDPHS_DMACONTROL_END_TR_EN_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_DMACONTROL_END_TR_EN_Msk instead */
#define UDPHS_DMACONTROL_END_B_EN_Pos       3                                              /**< (UDPHS_DMACONTROL) End of Buffer Enable (Control) Position */
#define UDPHS_DMACONTROL_END_B_EN_Msk       (_U_(0x1) << UDPHS_DMACONTROL_END_B_EN_Pos)    /**< (UDPHS_DMACONTROL) End of Buffer Enable (Control) Mask */
#define UDPHS_DMACONTROL_END_B_EN           UDPHS_DMACONTROL_END_B_EN_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_DMACONTROL_END_B_EN_Msk instead */
#define UDPHS_DMACONTROL_END_TR_IT_Pos      4                                              /**< (UDPHS_DMACONTROL) End of Transfer Interrupt Enable Position */
#define UDPHS_DMACONTROL_END_TR_IT_Msk      (_U_(0x1) << UDPHS_DMACONTROL_END_TR_IT_Pos)   /**< (UDPHS_DMACONTROL) End of Transfer Interrupt Enable Mask */
#define UDPHS_DMACONTROL_END_TR_IT          UDPHS_DMACONTROL_END_TR_IT_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_DMACONTROL_END_TR_IT_Msk instead */
#define UDPHS_DMACONTROL_END_BUFFIT_Pos     5                                              /**< (UDPHS_DMACONTROL) End of Buffer Interrupt Enable Position */
#define UDPHS_DMACONTROL_END_BUFFIT_Msk     (_U_(0x1) << UDPHS_DMACONTROL_END_BUFFIT_Pos)  /**< (UDPHS_DMACONTROL) End of Buffer Interrupt Enable Mask */
#define UDPHS_DMACONTROL_END_BUFFIT         UDPHS_DMACONTROL_END_BUFFIT_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_DMACONTROL_END_BUFFIT_Msk instead */
#define UDPHS_DMACONTROL_DESC_LD_IT_Pos     6                                              /**< (UDPHS_DMACONTROL) Descriptor Loaded Interrupt Enable Position */
#define UDPHS_DMACONTROL_DESC_LD_IT_Msk     (_U_(0x1) << UDPHS_DMACONTROL_DESC_LD_IT_Pos)  /**< (UDPHS_DMACONTROL) Descriptor Loaded Interrupt Enable Mask */
#define UDPHS_DMACONTROL_DESC_LD_IT         UDPHS_DMACONTROL_DESC_LD_IT_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_DMACONTROL_DESC_LD_IT_Msk instead */
#define UDPHS_DMACONTROL_BURST_LCK_Pos      7                                              /**< (UDPHS_DMACONTROL) Burst Lock Enable Position */
#define UDPHS_DMACONTROL_BURST_LCK_Msk      (_U_(0x1) << UDPHS_DMACONTROL_BURST_LCK_Pos)   /**< (UDPHS_DMACONTROL) Burst Lock Enable Mask */
#define UDPHS_DMACONTROL_BURST_LCK          UDPHS_DMACONTROL_BURST_LCK_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_DMACONTROL_BURST_LCK_Msk instead */
#define UDPHS_DMACONTROL_BUFF_LENGTH_Pos    16                                             /**< (UDPHS_DMACONTROL) Buffer Byte Length (Write-only) Position */
#define UDPHS_DMACONTROL_BUFF_LENGTH_Msk    (_U_(0xFFFF) << UDPHS_DMACONTROL_BUFF_LENGTH_Pos)  /**< (UDPHS_DMACONTROL) Buffer Byte Length (Write-only) Mask */
#define UDPHS_DMACONTROL_BUFF_LENGTH(value) (UDPHS_DMACONTROL_BUFF_LENGTH_Msk & ((value) << UDPHS_DMACONTROL_BUFF_LENGTH_Pos))
#define UDPHS_DMACONTROL_MASK               _U_(0xFFFF00FF)                                /**< \deprecated (UDPHS_DMACONTROL) Register MASK  (Use UDPHS_DMACONTROL_Msk instead)  */
#define UDPHS_DMACONTROL_Msk                _U_(0xFFFF00FF)                                /**< (UDPHS_DMACONTROL) Register Mask  */


/* -------- UDPHS_DMASTATUS : (UDPHS Offset: 0x0c) (R/W 32) UDPHS DMA Channel Status Register (channel = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHANN_ENB:1;               /**< bit:      0  Channel Enable Status                    */
    uint32_t CHANN_ACT:1;               /**< bit:      1  Channel Active Status                    */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t END_TR_ST:1;               /**< bit:      4  End of Channel Transfer Status           */
    uint32_t END_BF_ST:1;               /**< bit:      5  End of Channel Buffer Status             */
    uint32_t DESC_LDST:1;               /**< bit:      6  Descriptor Loaded Status                 */
    uint32_t :9;                        /**< bit:  7..15  Reserved */
    uint32_t BUFF_COUNT:16;             /**< bit: 16..31  Buffer Byte Count                        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UDPHS_DMASTATUS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UDPHS_DMASTATUS_OFFSET              (0x0C)                                        /**<  (UDPHS_DMASTATUS) UDPHS DMA Channel Status Register (channel = 0)  Offset */

#define UDPHS_DMASTATUS_CHANN_ENB_Pos       0                                              /**< (UDPHS_DMASTATUS) Channel Enable Status Position */
#define UDPHS_DMASTATUS_CHANN_ENB_Msk       (_U_(0x1) << UDPHS_DMASTATUS_CHANN_ENB_Pos)    /**< (UDPHS_DMASTATUS) Channel Enable Status Mask */
#define UDPHS_DMASTATUS_CHANN_ENB           UDPHS_DMASTATUS_CHANN_ENB_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_DMASTATUS_CHANN_ENB_Msk instead */
#define UDPHS_DMASTATUS_CHANN_ACT_Pos       1                                              /**< (UDPHS_DMASTATUS) Channel Active Status Position */
#define UDPHS_DMASTATUS_CHANN_ACT_Msk       (_U_(0x1) << UDPHS_DMASTATUS_CHANN_ACT_Pos)    /**< (UDPHS_DMASTATUS) Channel Active Status Mask */
#define UDPHS_DMASTATUS_CHANN_ACT           UDPHS_DMASTATUS_CHANN_ACT_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_DMASTATUS_CHANN_ACT_Msk instead */
#define UDPHS_DMASTATUS_END_TR_ST_Pos       4                                              /**< (UDPHS_DMASTATUS) End of Channel Transfer Status Position */
#define UDPHS_DMASTATUS_END_TR_ST_Msk       (_U_(0x1) << UDPHS_DMASTATUS_END_TR_ST_Pos)    /**< (UDPHS_DMASTATUS) End of Channel Transfer Status Mask */
#define UDPHS_DMASTATUS_END_TR_ST           UDPHS_DMASTATUS_END_TR_ST_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_DMASTATUS_END_TR_ST_Msk instead */
#define UDPHS_DMASTATUS_END_BF_ST_Pos       5                                              /**< (UDPHS_DMASTATUS) End of Channel Buffer Status Position */
#define UDPHS_DMASTATUS_END_BF_ST_Msk       (_U_(0x1) << UDPHS_DMASTATUS_END_BF_ST_Pos)    /**< (UDPHS_DMASTATUS) End of Channel Buffer Status Mask */
#define UDPHS_DMASTATUS_END_BF_ST           UDPHS_DMASTATUS_END_BF_ST_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_DMASTATUS_END_BF_ST_Msk instead */
#define UDPHS_DMASTATUS_DESC_LDST_Pos       6                                              /**< (UDPHS_DMASTATUS) Descriptor Loaded Status Position */
#define UDPHS_DMASTATUS_DESC_LDST_Msk       (_U_(0x1) << UDPHS_DMASTATUS_DESC_LDST_Pos)    /**< (UDPHS_DMASTATUS) Descriptor Loaded Status Mask */
#define UDPHS_DMASTATUS_DESC_LDST           UDPHS_DMASTATUS_DESC_LDST_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_DMASTATUS_DESC_LDST_Msk instead */
#define UDPHS_DMASTATUS_BUFF_COUNT_Pos      16                                             /**< (UDPHS_DMASTATUS) Buffer Byte Count Position */
#define UDPHS_DMASTATUS_BUFF_COUNT_Msk      (_U_(0xFFFF) << UDPHS_DMASTATUS_BUFF_COUNT_Pos)  /**< (UDPHS_DMASTATUS) Buffer Byte Count Mask */
#define UDPHS_DMASTATUS_BUFF_COUNT(value)   (UDPHS_DMASTATUS_BUFF_COUNT_Msk & ((value) << UDPHS_DMASTATUS_BUFF_COUNT_Pos))
#define UDPHS_DMASTATUS_MASK                _U_(0xFFFF0073)                                /**< \deprecated (UDPHS_DMASTATUS) Register MASK  (Use UDPHS_DMASTATUS_Msk instead)  */
#define UDPHS_DMASTATUS_Msk                 _U_(0xFFFF0073)                                /**< (UDPHS_DMASTATUS) Register Mask  */


/* -------- UDPHS_EPTCFG : (UDPHS Offset: 0x00) (R/W 32) UDPHS Endpoint Configuration Register (endpoint = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t EPT_SIZE:3;                /**< bit:   0..2  Endpoint Size (cleared upon USB reset)   */
    uint32_t EPT_DIR:1;                 /**< bit:      3  Endpoint Direction (cleared upon USB reset) */
    uint32_t EPT_TYPE:2;                /**< bit:   4..5  Endpoint Type (cleared upon USB reset)   */
    uint32_t BK_NUMBER:2;               /**< bit:   6..7  Number of Banks (cleared upon USB reset) */
    uint32_t NB_TRANS:2;                /**< bit:   8..9  Number Of Transaction per Microframe (cleared upon USB reset) */
    uint32_t :21;                       /**< bit: 10..30  Reserved */
    uint32_t EPT_MAPD:1;                /**< bit:     31  Endpoint Mapped (cleared upon USB reset) */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UDPHS_EPTCFG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UDPHS_EPTCFG_OFFSET                 (0x00)                                        /**<  (UDPHS_EPTCFG) UDPHS Endpoint Configuration Register (endpoint = 0)  Offset */

#define UDPHS_EPTCFG_EPT_SIZE_Pos           0                                              /**< (UDPHS_EPTCFG) Endpoint Size (cleared upon USB reset) Position */
#define UDPHS_EPTCFG_EPT_SIZE_Msk           (_U_(0x7) << UDPHS_EPTCFG_EPT_SIZE_Pos)        /**< (UDPHS_EPTCFG) Endpoint Size (cleared upon USB reset) Mask */
#define UDPHS_EPTCFG_EPT_SIZE(value)        (UDPHS_EPTCFG_EPT_SIZE_Msk & ((value) << UDPHS_EPTCFG_EPT_SIZE_Pos))
#define   UDPHS_EPTCFG_EPT_SIZE_8_Val       _U_(0x0)                                       /**< (UDPHS_EPTCFG) 8 bytes  */
#define   UDPHS_EPTCFG_EPT_SIZE_16_Val      _U_(0x1)                                       /**< (UDPHS_EPTCFG) 16 bytes  */
#define   UDPHS_EPTCFG_EPT_SIZE_32_Val      _U_(0x2)                                       /**< (UDPHS_EPTCFG) 32 bytes  */
#define   UDPHS_EPTCFG_EPT_SIZE_64_Val      _U_(0x3)                                       /**< (UDPHS_EPTCFG) 64 bytes  */
#define   UDPHS_EPTCFG_EPT_SIZE_128_Val     _U_(0x4)                                       /**< (UDPHS_EPTCFG) 128 bytes  */
#define   UDPHS_EPTCFG_EPT_SIZE_256_Val     _U_(0x5)                                       /**< (UDPHS_EPTCFG) 256 bytes  */
#define   UDPHS_EPTCFG_EPT_SIZE_512_Val     _U_(0x6)                                       /**< (UDPHS_EPTCFG) 512 bytes  */
#define   UDPHS_EPTCFG_EPT_SIZE_1024_Val    _U_(0x7)                                       /**< (UDPHS_EPTCFG) 1024 bytes  */
#define UDPHS_EPTCFG_EPT_SIZE_8             (UDPHS_EPTCFG_EPT_SIZE_8_Val << UDPHS_EPTCFG_EPT_SIZE_Pos)  /**< (UDPHS_EPTCFG) 8 bytes Position  */
#define UDPHS_EPTCFG_EPT_SIZE_16            (UDPHS_EPTCFG_EPT_SIZE_16_Val << UDPHS_EPTCFG_EPT_SIZE_Pos)  /**< (UDPHS_EPTCFG) 16 bytes Position  */
#define UDPHS_EPTCFG_EPT_SIZE_32            (UDPHS_EPTCFG_EPT_SIZE_32_Val << UDPHS_EPTCFG_EPT_SIZE_Pos)  /**< (UDPHS_EPTCFG) 32 bytes Position  */
#define UDPHS_EPTCFG_EPT_SIZE_64            (UDPHS_EPTCFG_EPT_SIZE_64_Val << UDPHS_EPTCFG_EPT_SIZE_Pos)  /**< (UDPHS_EPTCFG) 64 bytes Position  */
#define UDPHS_EPTCFG_EPT_SIZE_128           (UDPHS_EPTCFG_EPT_SIZE_128_Val << UDPHS_EPTCFG_EPT_SIZE_Pos)  /**< (UDPHS_EPTCFG) 128 bytes Position  */
#define UDPHS_EPTCFG_EPT_SIZE_256           (UDPHS_EPTCFG_EPT_SIZE_256_Val << UDPHS_EPTCFG_EPT_SIZE_Pos)  /**< (UDPHS_EPTCFG) 256 bytes Position  */
#define UDPHS_EPTCFG_EPT_SIZE_512           (UDPHS_EPTCFG_EPT_SIZE_512_Val << UDPHS_EPTCFG_EPT_SIZE_Pos)  /**< (UDPHS_EPTCFG) 512 bytes Position  */
#define UDPHS_EPTCFG_EPT_SIZE_1024          (UDPHS_EPTCFG_EPT_SIZE_1024_Val << UDPHS_EPTCFG_EPT_SIZE_Pos)  /**< (UDPHS_EPTCFG) 1024 bytes Position  */
#define UDPHS_EPTCFG_EPT_DIR_Pos            3                                              /**< (UDPHS_EPTCFG) Endpoint Direction (cleared upon USB reset) Position */
#define UDPHS_EPTCFG_EPT_DIR_Msk            (_U_(0x1) << UDPHS_EPTCFG_EPT_DIR_Pos)         /**< (UDPHS_EPTCFG) Endpoint Direction (cleared upon USB reset) Mask */
#define UDPHS_EPTCFG_EPT_DIR                UDPHS_EPTCFG_EPT_DIR_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCFG_EPT_DIR_Msk instead */
#define UDPHS_EPTCFG_EPT_TYPE_Pos           4                                              /**< (UDPHS_EPTCFG) Endpoint Type (cleared upon USB reset) Position */
#define UDPHS_EPTCFG_EPT_TYPE_Msk           (_U_(0x3) << UDPHS_EPTCFG_EPT_TYPE_Pos)        /**< (UDPHS_EPTCFG) Endpoint Type (cleared upon USB reset) Mask */
#define UDPHS_EPTCFG_EPT_TYPE(value)        (UDPHS_EPTCFG_EPT_TYPE_Msk & ((value) << UDPHS_EPTCFG_EPT_TYPE_Pos))
#define   UDPHS_EPTCFG_EPT_TYPE_CTRL8_Val   _U_(0x0)                                       /**< (UDPHS_EPTCFG) Control endpoint  */
#define   UDPHS_EPTCFG_EPT_TYPE_ISO_Val     _U_(0x1)                                       /**< (UDPHS_EPTCFG) Isochronous endpoint  */
#define   UDPHS_EPTCFG_EPT_TYPE_BULK_Val    _U_(0x2)                                       /**< (UDPHS_EPTCFG) Bulk endpoint  */
#define   UDPHS_EPTCFG_EPT_TYPE_INT_Val     _U_(0x3)                                       /**< (UDPHS_EPTCFG) Interrupt endpoint  */
#define UDPHS_EPTCFG_EPT_TYPE_CTRL8         (UDPHS_EPTCFG_EPT_TYPE_CTRL8_Val << UDPHS_EPTCFG_EPT_TYPE_Pos)  /**< (UDPHS_EPTCFG) Control endpoint Position  */
#define UDPHS_EPTCFG_EPT_TYPE_ISO           (UDPHS_EPTCFG_EPT_TYPE_ISO_Val << UDPHS_EPTCFG_EPT_TYPE_Pos)  /**< (UDPHS_EPTCFG) Isochronous endpoint Position  */
#define UDPHS_EPTCFG_EPT_TYPE_BULK          (UDPHS_EPTCFG_EPT_TYPE_BULK_Val << UDPHS_EPTCFG_EPT_TYPE_Pos)  /**< (UDPHS_EPTCFG) Bulk endpoint Position  */
#define UDPHS_EPTCFG_EPT_TYPE_INT           (UDPHS_EPTCFG_EPT_TYPE_INT_Val << UDPHS_EPTCFG_EPT_TYPE_Pos)  /**< (UDPHS_EPTCFG) Interrupt endpoint Position  */
#define UDPHS_EPTCFG_BK_NUMBER_Pos          6                                              /**< (UDPHS_EPTCFG) Number of Banks (cleared upon USB reset) Position */
#define UDPHS_EPTCFG_BK_NUMBER_Msk          (_U_(0x3) << UDPHS_EPTCFG_BK_NUMBER_Pos)       /**< (UDPHS_EPTCFG) Number of Banks (cleared upon USB reset) Mask */
#define UDPHS_EPTCFG_BK_NUMBER(value)       (UDPHS_EPTCFG_BK_NUMBER_Msk & ((value) << UDPHS_EPTCFG_BK_NUMBER_Pos))
#define   UDPHS_EPTCFG_BK_NUMBER_0_Val      _U_(0x0)                                       /**< (UDPHS_EPTCFG) Zero bank, the endpoint is not mapped in memory  */
#define   UDPHS_EPTCFG_BK_NUMBER_1_Val      _U_(0x1)                                       /**< (UDPHS_EPTCFG) One bank (bank 0)  */
#define   UDPHS_EPTCFG_BK_NUMBER_2_Val      _U_(0x2)                                       /**< (UDPHS_EPTCFG) Double bank (Ping-Pong: bank0/bank1)  */
#define   UDPHS_EPTCFG_BK_NUMBER_3_Val      _U_(0x3)                                       /**< (UDPHS_EPTCFG) Triple bank (bank0/bank1/bank2)  */
#define UDPHS_EPTCFG_BK_NUMBER_0            (UDPHS_EPTCFG_BK_NUMBER_0_Val << UDPHS_EPTCFG_BK_NUMBER_Pos)  /**< (UDPHS_EPTCFG) Zero bank, the endpoint is not mapped in memory Position  */
#define UDPHS_EPTCFG_BK_NUMBER_1            (UDPHS_EPTCFG_BK_NUMBER_1_Val << UDPHS_EPTCFG_BK_NUMBER_Pos)  /**< (UDPHS_EPTCFG) One bank (bank 0) Position  */
#define UDPHS_EPTCFG_BK_NUMBER_2            (UDPHS_EPTCFG_BK_NUMBER_2_Val << UDPHS_EPTCFG_BK_NUMBER_Pos)  /**< (UDPHS_EPTCFG) Double bank (Ping-Pong: bank0/bank1) Position  */
#define UDPHS_EPTCFG_BK_NUMBER_3            (UDPHS_EPTCFG_BK_NUMBER_3_Val << UDPHS_EPTCFG_BK_NUMBER_Pos)  /**< (UDPHS_EPTCFG) Triple bank (bank0/bank1/bank2) Position  */
#define UDPHS_EPTCFG_NB_TRANS_Pos           8                                              /**< (UDPHS_EPTCFG) Number Of Transaction per Microframe (cleared upon USB reset) Position */
#define UDPHS_EPTCFG_NB_TRANS_Msk           (_U_(0x3) << UDPHS_EPTCFG_NB_TRANS_Pos)        /**< (UDPHS_EPTCFG) Number Of Transaction per Microframe (cleared upon USB reset) Mask */
#define UDPHS_EPTCFG_NB_TRANS(value)        (UDPHS_EPTCFG_NB_TRANS_Msk & ((value) << UDPHS_EPTCFG_NB_TRANS_Pos))
#define UDPHS_EPTCFG_EPT_MAPD_Pos           31                                             /**< (UDPHS_EPTCFG) Endpoint Mapped (cleared upon USB reset) Position */
#define UDPHS_EPTCFG_EPT_MAPD_Msk           (_U_(0x1) << UDPHS_EPTCFG_EPT_MAPD_Pos)        /**< (UDPHS_EPTCFG) Endpoint Mapped (cleared upon USB reset) Mask */
#define UDPHS_EPTCFG_EPT_MAPD               UDPHS_EPTCFG_EPT_MAPD_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCFG_EPT_MAPD_Msk instead */
#define UDPHS_EPTCFG_MASK                   _U_(0x800003FF)                                /**< \deprecated (UDPHS_EPTCFG) Register MASK  (Use UDPHS_EPTCFG_Msk instead)  */
#define UDPHS_EPTCFG_Msk                    _U_(0x800003FF)                                /**< (UDPHS_EPTCFG) Register Mask  */


/* -------- UDPHS_EPTCTLENB : (UDPHS Offset: 0x04) (/W 32) UDPHS Endpoint Control Enable Register (endpoint = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t EPT_ENABL:1;               /**< bit:      0  Endpoint Enable                          */
    uint32_t AUTO_VALID:1;              /**< bit:      1  Packet Auto-Valid Enable                 */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t INTDIS_DMA:1;              /**< bit:      3  Interrupts Disable DMA                   */
    uint32_t NYET_DIS:1;                /**< bit:      4  NYET Disable (Only for High Speed Bulk OUT endpoints) */
    uint32_t :3;                        /**< bit:   5..7  Reserved */
    uint32_t ERR_OVFLW:1;               /**< bit:      8  Overflow Error Interrupt Enable          */
    uint32_t RXRDY_TXKL:1;              /**< bit:      9  Received OUT Data Interrupt Enable       */
    uint32_t TX_COMPLT:1;               /**< bit:     10  Transmitted IN Data Complete Interrupt Enable */
    uint32_t TXRDY:1;                   /**< bit:     11  TX Packet Ready Interrupt Enable         */
    uint32_t RX_SETUP:1;                /**< bit:     12  Received SETUP                           */
    uint32_t STALL_SNT:1;               /**< bit:     13  Stall Sent Interrupt Enable              */
    uint32_t NAK_IN:1;                  /**< bit:     14  NAKIN Interrupt Enable                   */
    uint32_t NAK_OUT:1;                 /**< bit:     15  NAKOUT Interrupt Enable                  */
    uint32_t :2;                        /**< bit: 16..17  Reserved */
    uint32_t BUSY_BANK:1;               /**< bit:     18  Busy Bank Interrupt Enable               */
    uint32_t :12;                       /**< bit: 19..30  Reserved */
    uint32_t SHRT_PCKT:1;               /**< bit:     31  Short Packet Send/Short Packet Interrupt Enable */
  } bit;                                /**< Structure used for bit  access */
  struct { // ISOENDPT mode
    uint32_t EPT_ENABL:1;               /**< bit:      0  Endpoint Enable                          */
    uint32_t AUTO_VALID:1;              /**< bit:      1  Packet Auto-Valid Enable                 */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t INTDIS_DMA:1;              /**< bit:      3  Interrupts Disable DMA                   */
    uint32_t :2;                        /**< bit:   4..5  Reserved */
    uint32_t DATAX_RX:1;                /**< bit:      6  DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints) */
    uint32_t MDATA_RX:1;                /**< bit:      7  MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints) */
    uint32_t ERR_OVFLW:1;               /**< bit:      8  Overflow Error Interrupt Enable          */
    uint32_t RXRDY_TXKL:1;              /**< bit:      9  Received OUT Data Interrupt Enable       */
    uint32_t TX_COMPLT:1;               /**< bit:     10  Transmitted IN Data Complete Interrupt Enable */
    uint32_t TXRDY_TRER:1;              /**< bit:     11  TX Packet Ready/Transaction Error Interrupt Enable */
    uint32_t ERR_FL_ISO:1;              /**< bit:     12  Error Flow Interrupt Enable              */
    uint32_t ERR_CRC_NTR:1;             /**< bit:     13  ISO CRC Error/Number of Transaction Error Interrupt Enable */
    uint32_t ERR_FLUSH:1;               /**< bit:     14  Bank Flush Error Interrupt Enable        */
    uint32_t :3;                        /**< bit: 15..17  Reserved */
    uint32_t BUSY_BANK:1;               /**< bit:     18  Busy Bank Interrupt Enable               */
    uint32_t :12;                       /**< bit: 19..30  Reserved */
    uint32_t SHRT_PCKT:1;               /**< bit:     31  Short Packet Send/Short Packet Interrupt Enable */
  } ISOENDPT;                                /**< Structure used for ISOENDPT mode access */
  uint32_t reg;                         /**< Type used for register access */
} UDPHS_EPTCTLENB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UDPHS_EPTCTLENB_OFFSET              (0x04)                                        /**<  (UDPHS_EPTCTLENB) UDPHS Endpoint Control Enable Register (endpoint = 0)  Offset */

#define UDPHS_EPTCTLENB_EPT_ENABL_Pos       0                                              /**< (UDPHS_EPTCTLENB) Endpoint Enable Position */
#define UDPHS_EPTCTLENB_EPT_ENABL_Msk       (_U_(0x1) << UDPHS_EPTCTLENB_EPT_ENABL_Pos)    /**< (UDPHS_EPTCTLENB) Endpoint Enable Mask */
#define UDPHS_EPTCTLENB_EPT_ENABL           UDPHS_EPTCTLENB_EPT_ENABL_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_EPT_ENABL_Msk instead */
#define UDPHS_EPTCTLENB_AUTO_VALID_Pos      1                                              /**< (UDPHS_EPTCTLENB) Packet Auto-Valid Enable Position */
#define UDPHS_EPTCTLENB_AUTO_VALID_Msk      (_U_(0x1) << UDPHS_EPTCTLENB_AUTO_VALID_Pos)   /**< (UDPHS_EPTCTLENB) Packet Auto-Valid Enable Mask */
#define UDPHS_EPTCTLENB_AUTO_VALID          UDPHS_EPTCTLENB_AUTO_VALID_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_AUTO_VALID_Msk instead */
#define UDPHS_EPTCTLENB_INTDIS_DMA_Pos      3                                              /**< (UDPHS_EPTCTLENB) Interrupts Disable DMA Position */
#define UDPHS_EPTCTLENB_INTDIS_DMA_Msk      (_U_(0x1) << UDPHS_EPTCTLENB_INTDIS_DMA_Pos)   /**< (UDPHS_EPTCTLENB) Interrupts Disable DMA Mask */
#define UDPHS_EPTCTLENB_INTDIS_DMA          UDPHS_EPTCTLENB_INTDIS_DMA_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_INTDIS_DMA_Msk instead */
#define UDPHS_EPTCTLENB_NYET_DIS_Pos        4                                              /**< (UDPHS_EPTCTLENB) NYET Disable (Only for High Speed Bulk OUT endpoints) Position */
#define UDPHS_EPTCTLENB_NYET_DIS_Msk        (_U_(0x1) << UDPHS_EPTCTLENB_NYET_DIS_Pos)     /**< (UDPHS_EPTCTLENB) NYET Disable (Only for High Speed Bulk OUT endpoints) Mask */
#define UDPHS_EPTCTLENB_NYET_DIS            UDPHS_EPTCTLENB_NYET_DIS_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_NYET_DIS_Msk instead */
#define UDPHS_EPTCTLENB_ERR_OVFLW_Pos       8                                              /**< (UDPHS_EPTCTLENB) Overflow Error Interrupt Enable Position */
#define UDPHS_EPTCTLENB_ERR_OVFLW_Msk       (_U_(0x1) << UDPHS_EPTCTLENB_ERR_OVFLW_Pos)    /**< (UDPHS_EPTCTLENB) Overflow Error Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_ERR_OVFLW           UDPHS_EPTCTLENB_ERR_OVFLW_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_ERR_OVFLW_Msk instead */
#define UDPHS_EPTCTLENB_RXRDY_TXKL_Pos      9                                              /**< (UDPHS_EPTCTLENB) Received OUT Data Interrupt Enable Position */
#define UDPHS_EPTCTLENB_RXRDY_TXKL_Msk      (_U_(0x1) << UDPHS_EPTCTLENB_RXRDY_TXKL_Pos)   /**< (UDPHS_EPTCTLENB) Received OUT Data Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_RXRDY_TXKL          UDPHS_EPTCTLENB_RXRDY_TXKL_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_RXRDY_TXKL_Msk instead */
#define UDPHS_EPTCTLENB_TX_COMPLT_Pos       10                                             /**< (UDPHS_EPTCTLENB) Transmitted IN Data Complete Interrupt Enable Position */
#define UDPHS_EPTCTLENB_TX_COMPLT_Msk       (_U_(0x1) << UDPHS_EPTCTLENB_TX_COMPLT_Pos)    /**< (UDPHS_EPTCTLENB) Transmitted IN Data Complete Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_TX_COMPLT           UDPHS_EPTCTLENB_TX_COMPLT_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_TX_COMPLT_Msk instead */
#define UDPHS_EPTCTLENB_TXRDY_Pos           11                                             /**< (UDPHS_EPTCTLENB) TX Packet Ready Interrupt Enable Position */
#define UDPHS_EPTCTLENB_TXRDY_Msk           (_U_(0x1) << UDPHS_EPTCTLENB_TXRDY_Pos)        /**< (UDPHS_EPTCTLENB) TX Packet Ready Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_TXRDY               UDPHS_EPTCTLENB_TXRDY_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_TXRDY_Msk instead */
#define UDPHS_EPTCTLENB_RX_SETUP_Pos        12                                             /**< (UDPHS_EPTCTLENB) Received SETUP Position */
#define UDPHS_EPTCTLENB_RX_SETUP_Msk        (_U_(0x1) << UDPHS_EPTCTLENB_RX_SETUP_Pos)     /**< (UDPHS_EPTCTLENB) Received SETUP Mask */
#define UDPHS_EPTCTLENB_RX_SETUP            UDPHS_EPTCTLENB_RX_SETUP_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_RX_SETUP_Msk instead */
#define UDPHS_EPTCTLENB_STALL_SNT_Pos       13                                             /**< (UDPHS_EPTCTLENB) Stall Sent Interrupt Enable Position */
#define UDPHS_EPTCTLENB_STALL_SNT_Msk       (_U_(0x1) << UDPHS_EPTCTLENB_STALL_SNT_Pos)    /**< (UDPHS_EPTCTLENB) Stall Sent Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_STALL_SNT           UDPHS_EPTCTLENB_STALL_SNT_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_STALL_SNT_Msk instead */
#define UDPHS_EPTCTLENB_NAK_IN_Pos          14                                             /**< (UDPHS_EPTCTLENB) NAKIN Interrupt Enable Position */
#define UDPHS_EPTCTLENB_NAK_IN_Msk          (_U_(0x1) << UDPHS_EPTCTLENB_NAK_IN_Pos)       /**< (UDPHS_EPTCTLENB) NAKIN Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_NAK_IN              UDPHS_EPTCTLENB_NAK_IN_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_NAK_IN_Msk instead */
#define UDPHS_EPTCTLENB_NAK_OUT_Pos         15                                             /**< (UDPHS_EPTCTLENB) NAKOUT Interrupt Enable Position */
#define UDPHS_EPTCTLENB_NAK_OUT_Msk         (_U_(0x1) << UDPHS_EPTCTLENB_NAK_OUT_Pos)      /**< (UDPHS_EPTCTLENB) NAKOUT Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_NAK_OUT             UDPHS_EPTCTLENB_NAK_OUT_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_NAK_OUT_Msk instead */
#define UDPHS_EPTCTLENB_BUSY_BANK_Pos       18                                             /**< (UDPHS_EPTCTLENB) Busy Bank Interrupt Enable Position */
#define UDPHS_EPTCTLENB_BUSY_BANK_Msk       (_U_(0x1) << UDPHS_EPTCTLENB_BUSY_BANK_Pos)    /**< (UDPHS_EPTCTLENB) Busy Bank Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_BUSY_BANK           UDPHS_EPTCTLENB_BUSY_BANK_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_BUSY_BANK_Msk instead */
#define UDPHS_EPTCTLENB_SHRT_PCKT_Pos       31                                             /**< (UDPHS_EPTCTLENB) Short Packet Send/Short Packet Interrupt Enable Position */
#define UDPHS_EPTCTLENB_SHRT_PCKT_Msk       (_U_(0x1) << UDPHS_EPTCTLENB_SHRT_PCKT_Pos)    /**< (UDPHS_EPTCTLENB) Short Packet Send/Short Packet Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_SHRT_PCKT           UDPHS_EPTCTLENB_SHRT_PCKT_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_SHRT_PCKT_Msk instead */
#define UDPHS_EPTCTLENB_MASK                _U_(0x8004FF1B)                                /**< \deprecated (UDPHS_EPTCTLENB) Register MASK  (Use UDPHS_EPTCTLENB_Msk instead)  */
#define UDPHS_EPTCTLENB_Msk                 _U_(0x8004FF1B)                                /**< (UDPHS_EPTCTLENB) Register Mask  */

/* ISOENDPT mode */
#define UDPHS_EPTCTLENB_ISOENDPT_EPT_ENABL_Pos 0                                              /**< (UDPHS_EPTCTLENB) Endpoint Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_EPT_ENABL_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_EPT_ENABL_Pos)  /**< (UDPHS_EPTCTLENB) Endpoint Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_EPT_ENABL  UDPHS_EPTCTLENB_ISOENDPT_EPT_ENABL_Msk         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_ISOENDPT_EPT_ENABL_Msk instead */
#define UDPHS_EPTCTLENB_ISOENDPT_AUTO_VALID_Pos 1                                              /**< (UDPHS_EPTCTLENB) Packet Auto-Valid Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_AUTO_VALID_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_AUTO_VALID_Pos)  /**< (UDPHS_EPTCTLENB) Packet Auto-Valid Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_AUTO_VALID UDPHS_EPTCTLENB_ISOENDPT_AUTO_VALID_Msk        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_ISOENDPT_AUTO_VALID_Msk instead */
#define UDPHS_EPTCTLENB_ISOENDPT_INTDIS_DMA_Pos 3                                              /**< (UDPHS_EPTCTLENB) Interrupts Disable DMA Position */
#define UDPHS_EPTCTLENB_ISOENDPT_INTDIS_DMA_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_INTDIS_DMA_Pos)  /**< (UDPHS_EPTCTLENB) Interrupts Disable DMA Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_INTDIS_DMA UDPHS_EPTCTLENB_ISOENDPT_INTDIS_DMA_Msk        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_ISOENDPT_INTDIS_DMA_Msk instead */
#define UDPHS_EPTCTLENB_ISOENDPT_DATAX_RX_Pos 6                                              /**< (UDPHS_EPTCTLENB) DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints) Position */
#define UDPHS_EPTCTLENB_ISOENDPT_DATAX_RX_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_DATAX_RX_Pos)  /**< (UDPHS_EPTCTLENB) DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints) Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_DATAX_RX   UDPHS_EPTCTLENB_ISOENDPT_DATAX_RX_Msk          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_ISOENDPT_DATAX_RX_Msk instead */
#define UDPHS_EPTCTLENB_ISOENDPT_MDATA_RX_Pos 7                                              /**< (UDPHS_EPTCTLENB) MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints) Position */
#define UDPHS_EPTCTLENB_ISOENDPT_MDATA_RX_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_MDATA_RX_Pos)  /**< (UDPHS_EPTCTLENB) MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints) Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_MDATA_RX   UDPHS_EPTCTLENB_ISOENDPT_MDATA_RX_Msk          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_ISOENDPT_MDATA_RX_Msk instead */
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_OVFLW_Pos 8                                              /**< (UDPHS_EPTCTLENB) Overflow Error Interrupt Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_OVFLW_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_ERR_OVFLW_Pos)  /**< (UDPHS_EPTCTLENB) Overflow Error Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_OVFLW  UDPHS_EPTCTLENB_ISOENDPT_ERR_OVFLW_Msk         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_ISOENDPT_ERR_OVFLW_Msk instead */
#define UDPHS_EPTCTLENB_ISOENDPT_RXRDY_TXKL_Pos 9                                              /**< (UDPHS_EPTCTLENB) Received OUT Data Interrupt Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_RXRDY_TXKL_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_RXRDY_TXKL_Pos)  /**< (UDPHS_EPTCTLENB) Received OUT Data Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_RXRDY_TXKL UDPHS_EPTCTLENB_ISOENDPT_RXRDY_TXKL_Msk        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_ISOENDPT_RXRDY_TXKL_Msk instead */
#define UDPHS_EPTCTLENB_ISOENDPT_TX_COMPLT_Pos 10                                             /**< (UDPHS_EPTCTLENB) Transmitted IN Data Complete Interrupt Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_TX_COMPLT_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_TX_COMPLT_Pos)  /**< (UDPHS_EPTCTLENB) Transmitted IN Data Complete Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_TX_COMPLT  UDPHS_EPTCTLENB_ISOENDPT_TX_COMPLT_Msk         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_ISOENDPT_TX_COMPLT_Msk instead */
#define UDPHS_EPTCTLENB_ISOENDPT_TXRDY_TRER_Pos 11                                             /**< (UDPHS_EPTCTLENB) TX Packet Ready/Transaction Error Interrupt Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_TXRDY_TRER_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_TXRDY_TRER_Pos)  /**< (UDPHS_EPTCTLENB) TX Packet Ready/Transaction Error Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_TXRDY_TRER UDPHS_EPTCTLENB_ISOENDPT_TXRDY_TRER_Msk        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_ISOENDPT_TXRDY_TRER_Msk instead */
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_FL_ISO_Pos 12                                             /**< (UDPHS_EPTCTLENB) Error Flow Interrupt Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_FL_ISO_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_ERR_FL_ISO_Pos)  /**< (UDPHS_EPTCTLENB) Error Flow Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_FL_ISO UDPHS_EPTCTLENB_ISOENDPT_ERR_FL_ISO_Msk        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_ISOENDPT_ERR_FL_ISO_Msk instead */
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_CRC_NTR_Pos 13                                             /**< (UDPHS_EPTCTLENB) ISO CRC Error/Number of Transaction Error Interrupt Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_CRC_NTR_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_ERR_CRC_NTR_Pos)  /**< (UDPHS_EPTCTLENB) ISO CRC Error/Number of Transaction Error Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_CRC_NTR UDPHS_EPTCTLENB_ISOENDPT_ERR_CRC_NTR_Msk       /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_ISOENDPT_ERR_CRC_NTR_Msk instead */
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_FLUSH_Pos 14                                             /**< (UDPHS_EPTCTLENB) Bank Flush Error Interrupt Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_FLUSH_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_ERR_FLUSH_Pos)  /**< (UDPHS_EPTCTLENB) Bank Flush Error Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_FLUSH  UDPHS_EPTCTLENB_ISOENDPT_ERR_FLUSH_Msk         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_ISOENDPT_ERR_FLUSH_Msk instead */
#define UDPHS_EPTCTLENB_ISOENDPT_BUSY_BANK_Pos 18                                             /**< (UDPHS_EPTCTLENB) Busy Bank Interrupt Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_BUSY_BANK_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_BUSY_BANK_Pos)  /**< (UDPHS_EPTCTLENB) Busy Bank Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_BUSY_BANK  UDPHS_EPTCTLENB_ISOENDPT_BUSY_BANK_Msk         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_ISOENDPT_BUSY_BANK_Msk instead */
#define UDPHS_EPTCTLENB_ISOENDPT_SHRT_PCKT_Pos 31                                             /**< (UDPHS_EPTCTLENB) Short Packet Send/Short Packet Interrupt Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_SHRT_PCKT_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_SHRT_PCKT_Pos)  /**< (UDPHS_EPTCTLENB) Short Packet Send/Short Packet Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_SHRT_PCKT  UDPHS_EPTCTLENB_ISOENDPT_SHRT_PCKT_Msk         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLENB_ISOENDPT_SHRT_PCKT_Msk instead */
#define UDPHS_EPTCTLENB_ISOENDPT_MASK       _U_(0x80047FCB)                                /**< \deprecated (UDPHS_EPTCTLENB_ISOENDPT) Register MASK  (Use UDPHS_EPTCTLENB_ISOENDPT_Msk instead)  */
#define UDPHS_EPTCTLENB_ISOENDPT_Msk        _U_(0x80047FCB)                                /**< (UDPHS_EPTCTLENB_ISOENDPT) Register Mask  */


/* -------- UDPHS_EPTCTLDIS : (UDPHS Offset: 0x08) (/W 32) UDPHS Endpoint Control Disable Register (endpoint = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t EPT_DISABL:1;              /**< bit:      0  Endpoint Disable                         */
    uint32_t AUTO_VALID:1;              /**< bit:      1  Packet Auto-Valid Disable                */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t INTDIS_DMA:1;              /**< bit:      3  Interrupts Disable DMA                   */
    uint32_t NYET_DIS:1;                /**< bit:      4  NYET Enable (Only for High Speed Bulk OUT endpoints) */
    uint32_t :3;                        /**< bit:   5..7  Reserved */
    uint32_t ERR_OVFLW:1;               /**< bit:      8  Overflow Error Interrupt Disable         */
    uint32_t RXRDY_TXKL:1;              /**< bit:      9  Received OUT Data Interrupt Disable      */
    uint32_t TX_COMPLT:1;               /**< bit:     10  Transmitted IN Data Complete Interrupt Disable */
    uint32_t TXRDY:1;                   /**< bit:     11  TX Packet Ready Interrupt Disable        */
    uint32_t RX_SETUP:1;                /**< bit:     12  Received SETUP Interrupt Disable         */
    uint32_t STALL_SNT:1;               /**< bit:     13  Stall Sent Interrupt Disable             */
    uint32_t NAK_IN:1;                  /**< bit:     14  NAKIN Interrupt Disable                  */
    uint32_t NAK_OUT:1;                 /**< bit:     15  NAKOUT Interrupt Disable                 */
    uint32_t :2;                        /**< bit: 16..17  Reserved */
    uint32_t BUSY_BANK:1;               /**< bit:     18  Busy Bank Interrupt Disable              */
    uint32_t :12;                       /**< bit: 19..30  Reserved */
    uint32_t SHRT_PCKT:1;               /**< bit:     31  Short Packet Interrupt Disable           */
  } bit;                                /**< Structure used for bit  access */
  struct { // ISOENDPT mode
    uint32_t EPT_DISABL:1;              /**< bit:      0  Endpoint Disable                         */
    uint32_t AUTO_VALID:1;              /**< bit:      1  Packet Auto-Valid Disable                */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t INTDIS_DMA:1;              /**< bit:      3  Interrupts Disable DMA                   */
    uint32_t :2;                        /**< bit:   4..5  Reserved */
    uint32_t DATAX_RX:1;                /**< bit:      6  DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints) */
    uint32_t MDATA_RX:1;                /**< bit:      7  MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints) */
    uint32_t ERR_OVFLW:1;               /**< bit:      8  Overflow Error Interrupt Disable         */
    uint32_t RXRDY_TXKL:1;              /**< bit:      9  Received OUT Data Interrupt Disable      */
    uint32_t TX_COMPLT:1;               /**< bit:     10  Transmitted IN Data Complete Interrupt Disable */
    uint32_t TXRDY_TRER:1;              /**< bit:     11  TX Packet Ready/Transaction Error Interrupt Disable */
    uint32_t ERR_FL_ISO:1;              /**< bit:     12  Error Flow Interrupt Disable             */
    uint32_t ERR_CRC_NTR:1;             /**< bit:     13  ISO CRC Error/Number of Transaction Error Interrupt Disable */
    uint32_t ERR_FLUSH:1;               /**< bit:     14  bank flush error Interrupt Disable       */
    uint32_t :3;                        /**< bit: 15..17  Reserved */
    uint32_t BUSY_BANK:1;               /**< bit:     18  Busy Bank Interrupt Disable              */
    uint32_t :12;                       /**< bit: 19..30  Reserved */
    uint32_t SHRT_PCKT:1;               /**< bit:     31  Short Packet Interrupt Disable           */
  } ISOENDPT;                                /**< Structure used for ISOENDPT mode access */
  uint32_t reg;                         /**< Type used for register access */
} UDPHS_EPTCTLDIS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UDPHS_EPTCTLDIS_OFFSET              (0x08)                                        /**<  (UDPHS_EPTCTLDIS) UDPHS Endpoint Control Disable Register (endpoint = 0)  Offset */

#define UDPHS_EPTCTLDIS_EPT_DISABL_Pos      0                                              /**< (UDPHS_EPTCTLDIS) Endpoint Disable Position */
#define UDPHS_EPTCTLDIS_EPT_DISABL_Msk      (_U_(0x1) << UDPHS_EPTCTLDIS_EPT_DISABL_Pos)   /**< (UDPHS_EPTCTLDIS) Endpoint Disable Mask */
#define UDPHS_EPTCTLDIS_EPT_DISABL          UDPHS_EPTCTLDIS_EPT_DISABL_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_EPT_DISABL_Msk instead */
#define UDPHS_EPTCTLDIS_AUTO_VALID_Pos      1                                              /**< (UDPHS_EPTCTLDIS) Packet Auto-Valid Disable Position */
#define UDPHS_EPTCTLDIS_AUTO_VALID_Msk      (_U_(0x1) << UDPHS_EPTCTLDIS_AUTO_VALID_Pos)   /**< (UDPHS_EPTCTLDIS) Packet Auto-Valid Disable Mask */
#define UDPHS_EPTCTLDIS_AUTO_VALID          UDPHS_EPTCTLDIS_AUTO_VALID_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_AUTO_VALID_Msk instead */
#define UDPHS_EPTCTLDIS_INTDIS_DMA_Pos      3                                              /**< (UDPHS_EPTCTLDIS) Interrupts Disable DMA Position */
#define UDPHS_EPTCTLDIS_INTDIS_DMA_Msk      (_U_(0x1) << UDPHS_EPTCTLDIS_INTDIS_DMA_Pos)   /**< (UDPHS_EPTCTLDIS) Interrupts Disable DMA Mask */
#define UDPHS_EPTCTLDIS_INTDIS_DMA          UDPHS_EPTCTLDIS_INTDIS_DMA_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_INTDIS_DMA_Msk instead */
#define UDPHS_EPTCTLDIS_NYET_DIS_Pos        4                                              /**< (UDPHS_EPTCTLDIS) NYET Enable (Only for High Speed Bulk OUT endpoints) Position */
#define UDPHS_EPTCTLDIS_NYET_DIS_Msk        (_U_(0x1) << UDPHS_EPTCTLDIS_NYET_DIS_Pos)     /**< (UDPHS_EPTCTLDIS) NYET Enable (Only for High Speed Bulk OUT endpoints) Mask */
#define UDPHS_EPTCTLDIS_NYET_DIS            UDPHS_EPTCTLDIS_NYET_DIS_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_NYET_DIS_Msk instead */
#define UDPHS_EPTCTLDIS_ERR_OVFLW_Pos       8                                              /**< (UDPHS_EPTCTLDIS) Overflow Error Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_ERR_OVFLW_Msk       (_U_(0x1) << UDPHS_EPTCTLDIS_ERR_OVFLW_Pos)    /**< (UDPHS_EPTCTLDIS) Overflow Error Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_ERR_OVFLW           UDPHS_EPTCTLDIS_ERR_OVFLW_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_ERR_OVFLW_Msk instead */
#define UDPHS_EPTCTLDIS_RXRDY_TXKL_Pos      9                                              /**< (UDPHS_EPTCTLDIS) Received OUT Data Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_RXRDY_TXKL_Msk      (_U_(0x1) << UDPHS_EPTCTLDIS_RXRDY_TXKL_Pos)   /**< (UDPHS_EPTCTLDIS) Received OUT Data Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_RXRDY_TXKL          UDPHS_EPTCTLDIS_RXRDY_TXKL_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_RXRDY_TXKL_Msk instead */
#define UDPHS_EPTCTLDIS_TX_COMPLT_Pos       10                                             /**< (UDPHS_EPTCTLDIS) Transmitted IN Data Complete Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_TX_COMPLT_Msk       (_U_(0x1) << UDPHS_EPTCTLDIS_TX_COMPLT_Pos)    /**< (UDPHS_EPTCTLDIS) Transmitted IN Data Complete Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_TX_COMPLT           UDPHS_EPTCTLDIS_TX_COMPLT_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_TX_COMPLT_Msk instead */
#define UDPHS_EPTCTLDIS_TXRDY_Pos           11                                             /**< (UDPHS_EPTCTLDIS) TX Packet Ready Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_TXRDY_Msk           (_U_(0x1) << UDPHS_EPTCTLDIS_TXRDY_Pos)        /**< (UDPHS_EPTCTLDIS) TX Packet Ready Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_TXRDY               UDPHS_EPTCTLDIS_TXRDY_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_TXRDY_Msk instead */
#define UDPHS_EPTCTLDIS_RX_SETUP_Pos        12                                             /**< (UDPHS_EPTCTLDIS) Received SETUP Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_RX_SETUP_Msk        (_U_(0x1) << UDPHS_EPTCTLDIS_RX_SETUP_Pos)     /**< (UDPHS_EPTCTLDIS) Received SETUP Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_RX_SETUP            UDPHS_EPTCTLDIS_RX_SETUP_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_RX_SETUP_Msk instead */
#define UDPHS_EPTCTLDIS_STALL_SNT_Pos       13                                             /**< (UDPHS_EPTCTLDIS) Stall Sent Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_STALL_SNT_Msk       (_U_(0x1) << UDPHS_EPTCTLDIS_STALL_SNT_Pos)    /**< (UDPHS_EPTCTLDIS) Stall Sent Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_STALL_SNT           UDPHS_EPTCTLDIS_STALL_SNT_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_STALL_SNT_Msk instead */
#define UDPHS_EPTCTLDIS_NAK_IN_Pos          14                                             /**< (UDPHS_EPTCTLDIS) NAKIN Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_NAK_IN_Msk          (_U_(0x1) << UDPHS_EPTCTLDIS_NAK_IN_Pos)       /**< (UDPHS_EPTCTLDIS) NAKIN Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_NAK_IN              UDPHS_EPTCTLDIS_NAK_IN_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_NAK_IN_Msk instead */
#define UDPHS_EPTCTLDIS_NAK_OUT_Pos         15                                             /**< (UDPHS_EPTCTLDIS) NAKOUT Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_NAK_OUT_Msk         (_U_(0x1) << UDPHS_EPTCTLDIS_NAK_OUT_Pos)      /**< (UDPHS_EPTCTLDIS) NAKOUT Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_NAK_OUT             UDPHS_EPTCTLDIS_NAK_OUT_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_NAK_OUT_Msk instead */
#define UDPHS_EPTCTLDIS_BUSY_BANK_Pos       18                                             /**< (UDPHS_EPTCTLDIS) Busy Bank Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_BUSY_BANK_Msk       (_U_(0x1) << UDPHS_EPTCTLDIS_BUSY_BANK_Pos)    /**< (UDPHS_EPTCTLDIS) Busy Bank Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_BUSY_BANK           UDPHS_EPTCTLDIS_BUSY_BANK_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_BUSY_BANK_Msk instead */
#define UDPHS_EPTCTLDIS_SHRT_PCKT_Pos       31                                             /**< (UDPHS_EPTCTLDIS) Short Packet Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_SHRT_PCKT_Msk       (_U_(0x1) << UDPHS_EPTCTLDIS_SHRT_PCKT_Pos)    /**< (UDPHS_EPTCTLDIS) Short Packet Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_SHRT_PCKT           UDPHS_EPTCTLDIS_SHRT_PCKT_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_SHRT_PCKT_Msk instead */
#define UDPHS_EPTCTLDIS_MASK                _U_(0x8004FF1B)                                /**< \deprecated (UDPHS_EPTCTLDIS) Register MASK  (Use UDPHS_EPTCTLDIS_Msk instead)  */
#define UDPHS_EPTCTLDIS_Msk                 _U_(0x8004FF1B)                                /**< (UDPHS_EPTCTLDIS) Register Mask  */

/* ISOENDPT mode */
#define UDPHS_EPTCTLDIS_ISOENDPT_EPT_DISABL_Pos 0                                              /**< (UDPHS_EPTCTLDIS) Endpoint Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_EPT_DISABL_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_EPT_DISABL_Pos)  /**< (UDPHS_EPTCTLDIS) Endpoint Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_EPT_DISABL UDPHS_EPTCTLDIS_ISOENDPT_EPT_DISABL_Msk        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_ISOENDPT_EPT_DISABL_Msk instead */
#define UDPHS_EPTCTLDIS_ISOENDPT_AUTO_VALID_Pos 1                                              /**< (UDPHS_EPTCTLDIS) Packet Auto-Valid Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_AUTO_VALID_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_AUTO_VALID_Pos)  /**< (UDPHS_EPTCTLDIS) Packet Auto-Valid Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_AUTO_VALID UDPHS_EPTCTLDIS_ISOENDPT_AUTO_VALID_Msk        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_ISOENDPT_AUTO_VALID_Msk instead */
#define UDPHS_EPTCTLDIS_ISOENDPT_INTDIS_DMA_Pos 3                                              /**< (UDPHS_EPTCTLDIS) Interrupts Disable DMA Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_INTDIS_DMA_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_INTDIS_DMA_Pos)  /**< (UDPHS_EPTCTLDIS) Interrupts Disable DMA Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_INTDIS_DMA UDPHS_EPTCTLDIS_ISOENDPT_INTDIS_DMA_Msk        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_ISOENDPT_INTDIS_DMA_Msk instead */
#define UDPHS_EPTCTLDIS_ISOENDPT_DATAX_RX_Pos 6                                              /**< (UDPHS_EPTCTLDIS) DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints) Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_DATAX_RX_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_DATAX_RX_Pos)  /**< (UDPHS_EPTCTLDIS) DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints) Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_DATAX_RX   UDPHS_EPTCTLDIS_ISOENDPT_DATAX_RX_Msk          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_ISOENDPT_DATAX_RX_Msk instead */
#define UDPHS_EPTCTLDIS_ISOENDPT_MDATA_RX_Pos 7                                              /**< (UDPHS_EPTCTLDIS) MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints) Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_MDATA_RX_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_MDATA_RX_Pos)  /**< (UDPHS_EPTCTLDIS) MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints) Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_MDATA_RX   UDPHS_EPTCTLDIS_ISOENDPT_MDATA_RX_Msk          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_ISOENDPT_MDATA_RX_Msk instead */
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_OVFLW_Pos 8                                              /**< (UDPHS_EPTCTLDIS) Overflow Error Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_OVFLW_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_ERR_OVFLW_Pos)  /**< (UDPHS_EPTCTLDIS) Overflow Error Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_OVFLW  UDPHS_EPTCTLDIS_ISOENDPT_ERR_OVFLW_Msk         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_ISOENDPT_ERR_OVFLW_Msk instead */
#define UDPHS_EPTCTLDIS_ISOENDPT_RXRDY_TXKL_Pos 9                                              /**< (UDPHS_EPTCTLDIS) Received OUT Data Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_RXRDY_TXKL_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_RXRDY_TXKL_Pos)  /**< (UDPHS_EPTCTLDIS) Received OUT Data Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_RXRDY_TXKL UDPHS_EPTCTLDIS_ISOENDPT_RXRDY_TXKL_Msk        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_ISOENDPT_RXRDY_TXKL_Msk instead */
#define UDPHS_EPTCTLDIS_ISOENDPT_TX_COMPLT_Pos 10                                             /**< (UDPHS_EPTCTLDIS) Transmitted IN Data Complete Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_TX_COMPLT_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_TX_COMPLT_Pos)  /**< (UDPHS_EPTCTLDIS) Transmitted IN Data Complete Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_TX_COMPLT  UDPHS_EPTCTLDIS_ISOENDPT_TX_COMPLT_Msk         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_ISOENDPT_TX_COMPLT_Msk instead */
#define UDPHS_EPTCTLDIS_ISOENDPT_TXRDY_TRER_Pos 11                                             /**< (UDPHS_EPTCTLDIS) TX Packet Ready/Transaction Error Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_TXRDY_TRER_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_TXRDY_TRER_Pos)  /**< (UDPHS_EPTCTLDIS) TX Packet Ready/Transaction Error Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_TXRDY_TRER UDPHS_EPTCTLDIS_ISOENDPT_TXRDY_TRER_Msk        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_ISOENDPT_TXRDY_TRER_Msk instead */
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_FL_ISO_Pos 12                                             /**< (UDPHS_EPTCTLDIS) Error Flow Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_FL_ISO_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_ERR_FL_ISO_Pos)  /**< (UDPHS_EPTCTLDIS) Error Flow Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_FL_ISO UDPHS_EPTCTLDIS_ISOENDPT_ERR_FL_ISO_Msk        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_ISOENDPT_ERR_FL_ISO_Msk instead */
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_CRC_NTR_Pos 13                                             /**< (UDPHS_EPTCTLDIS) ISO CRC Error/Number of Transaction Error Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_CRC_NTR_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_ERR_CRC_NTR_Pos)  /**< (UDPHS_EPTCTLDIS) ISO CRC Error/Number of Transaction Error Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_CRC_NTR UDPHS_EPTCTLDIS_ISOENDPT_ERR_CRC_NTR_Msk       /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_ISOENDPT_ERR_CRC_NTR_Msk instead */
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_FLUSH_Pos 14                                             /**< (UDPHS_EPTCTLDIS) bank flush error Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_FLUSH_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_ERR_FLUSH_Pos)  /**< (UDPHS_EPTCTLDIS) bank flush error Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_FLUSH  UDPHS_EPTCTLDIS_ISOENDPT_ERR_FLUSH_Msk         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_ISOENDPT_ERR_FLUSH_Msk instead */
#define UDPHS_EPTCTLDIS_ISOENDPT_BUSY_BANK_Pos 18                                             /**< (UDPHS_EPTCTLDIS) Busy Bank Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_BUSY_BANK_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_BUSY_BANK_Pos)  /**< (UDPHS_EPTCTLDIS) Busy Bank Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_BUSY_BANK  UDPHS_EPTCTLDIS_ISOENDPT_BUSY_BANK_Msk         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_ISOENDPT_BUSY_BANK_Msk instead */
#define UDPHS_EPTCTLDIS_ISOENDPT_SHRT_PCKT_Pos 31                                             /**< (UDPHS_EPTCTLDIS) Short Packet Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_SHRT_PCKT_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_SHRT_PCKT_Pos)  /**< (UDPHS_EPTCTLDIS) Short Packet Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_SHRT_PCKT  UDPHS_EPTCTLDIS_ISOENDPT_SHRT_PCKT_Msk         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTLDIS_ISOENDPT_SHRT_PCKT_Msk instead */
#define UDPHS_EPTCTLDIS_ISOENDPT_MASK       _U_(0x80047FCB)                                /**< \deprecated (UDPHS_EPTCTLDIS_ISOENDPT) Register MASK  (Use UDPHS_EPTCTLDIS_ISOENDPT_Msk instead)  */
#define UDPHS_EPTCTLDIS_ISOENDPT_Msk        _U_(0x80047FCB)                                /**< (UDPHS_EPTCTLDIS_ISOENDPT) Register Mask  */


/* -------- UDPHS_EPTCTL : (UDPHS Offset: 0x0c) (R/ 32) UDPHS Endpoint Control Register (endpoint = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t EPT_ENABL:1;               /**< bit:      0  Endpoint Enable (cleared upon USB reset) */
    uint32_t AUTO_VALID:1;              /**< bit:      1  Packet Auto-Valid Enabled (Not for CONTROL Endpoints) (cleared upon USB reset) */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t INTDIS_DMA:1;              /**< bit:      3  Interrupt Disables DMA (cleared upon USB reset) */
    uint32_t NYET_DIS:1;                /**< bit:      4  NYET Disable (Only for High Speed Bulk OUT Endpoints) (cleared upon USB reset) */
    uint32_t :3;                        /**< bit:   5..7  Reserved */
    uint32_t ERR_OVFLW:1;               /**< bit:      8  Overflow Error Interrupt Enabled (cleared upon USB reset) */
    uint32_t RXRDY_TXKL:1;              /**< bit:      9  Received OUT Data Interrupt Enabled (cleared upon USB reset) */
    uint32_t TX_COMPLT:1;               /**< bit:     10  Transmitted IN Data Complete Interrupt Enabled (cleared upon USB reset) */
    uint32_t TXRDY:1;                   /**< bit:     11  TX Packet Ready Interrupt Enabled (cleared upon USB reset) */
    uint32_t RX_SETUP:1;                /**< bit:     12  Received SETUP Interrupt Enabled (cleared upon USB reset) */
    uint32_t STALL_SNT:1;               /**< bit:     13  Stall Sent Interrupt Enabled (cleared upon USB reset) */
    uint32_t NAK_IN:1;                  /**< bit:     14  NAKIN Interrupt Enabled (cleared upon USB reset) */
    uint32_t NAK_OUT:1;                 /**< bit:     15  NAKOUT Interrupt Enabled (cleared upon USB reset) */
    uint32_t :2;                        /**< bit: 16..17  Reserved */
    uint32_t BUSY_BANK:1;               /**< bit:     18  Busy Bank Interrupt Enabled (cleared upon USB reset) */
    uint32_t :12;                       /**< bit: 19..30  Reserved */
    uint32_t SHRT_PCKT:1;               /**< bit:     31  Short Packet Interrupt Enabled (cleared upon USB reset) */
  } bit;                                /**< Structure used for bit  access */
  struct { // ISOENDPT mode
    uint32_t EPT_ENABL:1;               /**< bit:      0  Endpoint Enable (cleared upon USB reset) */
    uint32_t AUTO_VALID:1;              /**< bit:      1  Packet Auto-Valid Enabled (cleared upon USB reset) */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t INTDIS_DMA:1;              /**< bit:      3  Interrupt Disables DMA (cleared upon USB reset) */
    uint32_t :2;                        /**< bit:   4..5  Reserved */
    uint32_t DATAX_RX:1;                /**< bit:      6  DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints) (cleared upon USB reset) */
    uint32_t MDATA_RX:1;                /**< bit:      7  MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints) (cleared upon USB reset) */
    uint32_t ERR_OVFLW:1;               /**< bit:      8  Overflow Error Interrupt Enabled (cleared upon USB reset) */
    uint32_t RXRDY_TXKL:1;              /**< bit:      9  Received OUT Data Interrupt Enabled (cleared upon USB reset) */
    uint32_t TX_COMPLT:1;               /**< bit:     10  Transmitted IN Data Complete Interrupt Enabled (cleared upon USB reset) */
    uint32_t TXRDY_TRER:1;              /**< bit:     11  TX Packet Ready/Transaction Error Interrupt Enabled (cleared upon USB reset) */
    uint32_t ERR_FL_ISO:1;              /**< bit:     12  Error Flow Interrupt Enabled (cleared upon USB reset) */
    uint32_t ERR_CRC_NTR:1;             /**< bit:     13  ISO CRC Error/Number of Transaction Error Interrupt Enabled (cleared upon USB reset) */
    uint32_t ERR_FLUSH:1;               /**< bit:     14  Bank Flush Error Interrupt Enabled (cleared upon USB reset) */
    uint32_t :3;                        /**< bit: 15..17  Reserved */
    uint32_t BUSY_BANK:1;               /**< bit:     18  Busy Bank Interrupt Enabled (cleared upon USB reset) */
    uint32_t :12;                       /**< bit: 19..30  Reserved */
    uint32_t SHRT_PCKT:1;               /**< bit:     31  Short Packet Interrupt Enabled (cleared upon USB reset) */
  } ISOENDPT;                                /**< Structure used for ISOENDPT mode access */
  uint32_t reg;                         /**< Type used for register access */
} UDPHS_EPTCTL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UDPHS_EPTCTL_OFFSET                 (0x0C)                                        /**<  (UDPHS_EPTCTL) UDPHS Endpoint Control Register (endpoint = 0)  Offset */

#define UDPHS_EPTCTL_EPT_ENABL_Pos          0                                              /**< (UDPHS_EPTCTL) Endpoint Enable (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_EPT_ENABL_Msk          (_U_(0x1) << UDPHS_EPTCTL_EPT_ENABL_Pos)       /**< (UDPHS_EPTCTL) Endpoint Enable (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_EPT_ENABL              UDPHS_EPTCTL_EPT_ENABL_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_EPT_ENABL_Msk instead */
#define UDPHS_EPTCTL_AUTO_VALID_Pos         1                                              /**< (UDPHS_EPTCTL) Packet Auto-Valid Enabled (Not for CONTROL Endpoints) (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_AUTO_VALID_Msk         (_U_(0x1) << UDPHS_EPTCTL_AUTO_VALID_Pos)      /**< (UDPHS_EPTCTL) Packet Auto-Valid Enabled (Not for CONTROL Endpoints) (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_AUTO_VALID             UDPHS_EPTCTL_AUTO_VALID_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_AUTO_VALID_Msk instead */
#define UDPHS_EPTCTL_INTDIS_DMA_Pos         3                                              /**< (UDPHS_EPTCTL) Interrupt Disables DMA (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_INTDIS_DMA_Msk         (_U_(0x1) << UDPHS_EPTCTL_INTDIS_DMA_Pos)      /**< (UDPHS_EPTCTL) Interrupt Disables DMA (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_INTDIS_DMA             UDPHS_EPTCTL_INTDIS_DMA_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_INTDIS_DMA_Msk instead */
#define UDPHS_EPTCTL_NYET_DIS_Pos           4                                              /**< (UDPHS_EPTCTL) NYET Disable (Only for High Speed Bulk OUT Endpoints) (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_NYET_DIS_Msk           (_U_(0x1) << UDPHS_EPTCTL_NYET_DIS_Pos)        /**< (UDPHS_EPTCTL) NYET Disable (Only for High Speed Bulk OUT Endpoints) (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_NYET_DIS               UDPHS_EPTCTL_NYET_DIS_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_NYET_DIS_Msk instead */
#define UDPHS_EPTCTL_ERR_OVFLW_Pos          8                                              /**< (UDPHS_EPTCTL) Overflow Error Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ERR_OVFLW_Msk          (_U_(0x1) << UDPHS_EPTCTL_ERR_OVFLW_Pos)       /**< (UDPHS_EPTCTL) Overflow Error Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ERR_OVFLW              UDPHS_EPTCTL_ERR_OVFLW_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_ERR_OVFLW_Msk instead */
#define UDPHS_EPTCTL_RXRDY_TXKL_Pos         9                                              /**< (UDPHS_EPTCTL) Received OUT Data Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_RXRDY_TXKL_Msk         (_U_(0x1) << UDPHS_EPTCTL_RXRDY_TXKL_Pos)      /**< (UDPHS_EPTCTL) Received OUT Data Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_RXRDY_TXKL             UDPHS_EPTCTL_RXRDY_TXKL_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_RXRDY_TXKL_Msk instead */
#define UDPHS_EPTCTL_TX_COMPLT_Pos          10                                             /**< (UDPHS_EPTCTL) Transmitted IN Data Complete Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_TX_COMPLT_Msk          (_U_(0x1) << UDPHS_EPTCTL_TX_COMPLT_Pos)       /**< (UDPHS_EPTCTL) Transmitted IN Data Complete Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_TX_COMPLT              UDPHS_EPTCTL_TX_COMPLT_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_TX_COMPLT_Msk instead */
#define UDPHS_EPTCTL_TXRDY_Pos              11                                             /**< (UDPHS_EPTCTL) TX Packet Ready Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_TXRDY_Msk              (_U_(0x1) << UDPHS_EPTCTL_TXRDY_Pos)           /**< (UDPHS_EPTCTL) TX Packet Ready Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_TXRDY                  UDPHS_EPTCTL_TXRDY_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_TXRDY_Msk instead */
#define UDPHS_EPTCTL_RX_SETUP_Pos           12                                             /**< (UDPHS_EPTCTL) Received SETUP Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_RX_SETUP_Msk           (_U_(0x1) << UDPHS_EPTCTL_RX_SETUP_Pos)        /**< (UDPHS_EPTCTL) Received SETUP Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_RX_SETUP               UDPHS_EPTCTL_RX_SETUP_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_RX_SETUP_Msk instead */
#define UDPHS_EPTCTL_STALL_SNT_Pos          13                                             /**< (UDPHS_EPTCTL) Stall Sent Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_STALL_SNT_Msk          (_U_(0x1) << UDPHS_EPTCTL_STALL_SNT_Pos)       /**< (UDPHS_EPTCTL) Stall Sent Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_STALL_SNT              UDPHS_EPTCTL_STALL_SNT_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_STALL_SNT_Msk instead */
#define UDPHS_EPTCTL_NAK_IN_Pos             14                                             /**< (UDPHS_EPTCTL) NAKIN Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_NAK_IN_Msk             (_U_(0x1) << UDPHS_EPTCTL_NAK_IN_Pos)          /**< (UDPHS_EPTCTL) NAKIN Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_NAK_IN                 UDPHS_EPTCTL_NAK_IN_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_NAK_IN_Msk instead */
#define UDPHS_EPTCTL_NAK_OUT_Pos            15                                             /**< (UDPHS_EPTCTL) NAKOUT Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_NAK_OUT_Msk            (_U_(0x1) << UDPHS_EPTCTL_NAK_OUT_Pos)         /**< (UDPHS_EPTCTL) NAKOUT Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_NAK_OUT                UDPHS_EPTCTL_NAK_OUT_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_NAK_OUT_Msk instead */
#define UDPHS_EPTCTL_BUSY_BANK_Pos          18                                             /**< (UDPHS_EPTCTL) Busy Bank Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_BUSY_BANK_Msk          (_U_(0x1) << UDPHS_EPTCTL_BUSY_BANK_Pos)       /**< (UDPHS_EPTCTL) Busy Bank Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_BUSY_BANK              UDPHS_EPTCTL_BUSY_BANK_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_BUSY_BANK_Msk instead */
#define UDPHS_EPTCTL_SHRT_PCKT_Pos          31                                             /**< (UDPHS_EPTCTL) Short Packet Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_SHRT_PCKT_Msk          (_U_(0x1) << UDPHS_EPTCTL_SHRT_PCKT_Pos)       /**< (UDPHS_EPTCTL) Short Packet Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_SHRT_PCKT              UDPHS_EPTCTL_SHRT_PCKT_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_SHRT_PCKT_Msk instead */
#define UDPHS_EPTCTL_MASK                   _U_(0x8004FF1B)                                /**< \deprecated (UDPHS_EPTCTL) Register MASK  (Use UDPHS_EPTCTL_Msk instead)  */
#define UDPHS_EPTCTL_Msk                    _U_(0x8004FF1B)                                /**< (UDPHS_EPTCTL) Register Mask  */

/* ISOENDPT mode */
#define UDPHS_EPTCTL_ISOENDPT_EPT_ENABL_Pos 0                                              /**< (UDPHS_EPTCTL) Endpoint Enable (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_EPT_ENABL_Msk (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_EPT_ENABL_Pos)  /**< (UDPHS_EPTCTL) Endpoint Enable (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_EPT_ENABL     UDPHS_EPTCTL_ISOENDPT_EPT_ENABL_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_ISOENDPT_EPT_ENABL_Msk instead */
#define UDPHS_EPTCTL_ISOENDPT_AUTO_VALID_Pos 1                                              /**< (UDPHS_EPTCTL) Packet Auto-Valid Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_AUTO_VALID_Msk (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_AUTO_VALID_Pos)  /**< (UDPHS_EPTCTL) Packet Auto-Valid Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_AUTO_VALID    UDPHS_EPTCTL_ISOENDPT_AUTO_VALID_Msk           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_ISOENDPT_AUTO_VALID_Msk instead */
#define UDPHS_EPTCTL_ISOENDPT_INTDIS_DMA_Pos 3                                              /**< (UDPHS_EPTCTL) Interrupt Disables DMA (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_INTDIS_DMA_Msk (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_INTDIS_DMA_Pos)  /**< (UDPHS_EPTCTL) Interrupt Disables DMA (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_INTDIS_DMA    UDPHS_EPTCTL_ISOENDPT_INTDIS_DMA_Msk           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_ISOENDPT_INTDIS_DMA_Msk instead */
#define UDPHS_EPTCTL_ISOENDPT_DATAX_RX_Pos  6                                              /**< (UDPHS_EPTCTL) DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints) (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_DATAX_RX_Msk  (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_DATAX_RX_Pos)  /**< (UDPHS_EPTCTL) DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints) (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_DATAX_RX      UDPHS_EPTCTL_ISOENDPT_DATAX_RX_Msk             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_ISOENDPT_DATAX_RX_Msk instead */
#define UDPHS_EPTCTL_ISOENDPT_MDATA_RX_Pos  7                                              /**< (UDPHS_EPTCTL) MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints) (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_MDATA_RX_Msk  (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_MDATA_RX_Pos)  /**< (UDPHS_EPTCTL) MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints) (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_MDATA_RX      UDPHS_EPTCTL_ISOENDPT_MDATA_RX_Msk             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_ISOENDPT_MDATA_RX_Msk instead */
#define UDPHS_EPTCTL_ISOENDPT_ERR_OVFLW_Pos 8                                              /**< (UDPHS_EPTCTL) Overflow Error Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_ERR_OVFLW_Msk (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_ERR_OVFLW_Pos)  /**< (UDPHS_EPTCTL) Overflow Error Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_ERR_OVFLW     UDPHS_EPTCTL_ISOENDPT_ERR_OVFLW_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_ISOENDPT_ERR_OVFLW_Msk instead */
#define UDPHS_EPTCTL_ISOENDPT_RXRDY_TXKL_Pos 9                                              /**< (UDPHS_EPTCTL) Received OUT Data Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_RXRDY_TXKL_Msk (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_RXRDY_TXKL_Pos)  /**< (UDPHS_EPTCTL) Received OUT Data Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_RXRDY_TXKL    UDPHS_EPTCTL_ISOENDPT_RXRDY_TXKL_Msk           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_ISOENDPT_RXRDY_TXKL_Msk instead */
#define UDPHS_EPTCTL_ISOENDPT_TX_COMPLT_Pos 10                                             /**< (UDPHS_EPTCTL) Transmitted IN Data Complete Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_TX_COMPLT_Msk (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_TX_COMPLT_Pos)  /**< (UDPHS_EPTCTL) Transmitted IN Data Complete Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_TX_COMPLT     UDPHS_EPTCTL_ISOENDPT_TX_COMPLT_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_ISOENDPT_TX_COMPLT_Msk instead */
#define UDPHS_EPTCTL_ISOENDPT_TXRDY_TRER_Pos 11                                             /**< (UDPHS_EPTCTL) TX Packet Ready/Transaction Error Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_TXRDY_TRER_Msk (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_TXRDY_TRER_Pos)  /**< (UDPHS_EPTCTL) TX Packet Ready/Transaction Error Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_TXRDY_TRER    UDPHS_EPTCTL_ISOENDPT_TXRDY_TRER_Msk           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_ISOENDPT_TXRDY_TRER_Msk instead */
#define UDPHS_EPTCTL_ISOENDPT_ERR_FL_ISO_Pos 12                                             /**< (UDPHS_EPTCTL) Error Flow Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_ERR_FL_ISO_Msk (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_ERR_FL_ISO_Pos)  /**< (UDPHS_EPTCTL) Error Flow Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_ERR_FL_ISO    UDPHS_EPTCTL_ISOENDPT_ERR_FL_ISO_Msk           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_ISOENDPT_ERR_FL_ISO_Msk instead */
#define UDPHS_EPTCTL_ISOENDPT_ERR_CRC_NTR_Pos 13                                             /**< (UDPHS_EPTCTL) ISO CRC Error/Number of Transaction Error Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_ERR_CRC_NTR_Msk (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_ERR_CRC_NTR_Pos)  /**< (UDPHS_EPTCTL) ISO CRC Error/Number of Transaction Error Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_ERR_CRC_NTR   UDPHS_EPTCTL_ISOENDPT_ERR_CRC_NTR_Msk          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_ISOENDPT_ERR_CRC_NTR_Msk instead */
#define UDPHS_EPTCTL_ISOENDPT_ERR_FLUSH_Pos 14                                             /**< (UDPHS_EPTCTL) Bank Flush Error Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_ERR_FLUSH_Msk (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_ERR_FLUSH_Pos)  /**< (UDPHS_EPTCTL) Bank Flush Error Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_ERR_FLUSH     UDPHS_EPTCTL_ISOENDPT_ERR_FLUSH_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_ISOENDPT_ERR_FLUSH_Msk instead */
#define UDPHS_EPTCTL_ISOENDPT_BUSY_BANK_Pos 18                                             /**< (UDPHS_EPTCTL) Busy Bank Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_BUSY_BANK_Msk (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_BUSY_BANK_Pos)  /**< (UDPHS_EPTCTL) Busy Bank Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_BUSY_BANK     UDPHS_EPTCTL_ISOENDPT_BUSY_BANK_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_ISOENDPT_BUSY_BANK_Msk instead */
#define UDPHS_EPTCTL_ISOENDPT_SHRT_PCKT_Pos 31                                             /**< (UDPHS_EPTCTL) Short Packet Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_SHRT_PCKT_Msk (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_SHRT_PCKT_Pos)  /**< (UDPHS_EPTCTL) Short Packet Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_SHRT_PCKT     UDPHS_EPTCTL_ISOENDPT_SHRT_PCKT_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCTL_ISOENDPT_SHRT_PCKT_Msk instead */
#define UDPHS_EPTCTL_ISOENDPT_MASK          _U_(0x80047FCB)                                /**< \deprecated (UDPHS_EPTCTL_ISOENDPT) Register MASK  (Use UDPHS_EPTCTL_ISOENDPT_Msk instead)  */
#define UDPHS_EPTCTL_ISOENDPT_Msk           _U_(0x80047FCB)                                /**< (UDPHS_EPTCTL_ISOENDPT) Register Mask  */


/* -------- UDPHS_EPTSETSTA : (UDPHS Offset: 0x14) (/W 32) UDPHS Endpoint Set Status Register (endpoint = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :5;                        /**< bit:   0..4  Reserved */
    uint32_t FRCESTALL:1;               /**< bit:      5  Stall Handshake Request Set              */
    uint32_t :3;                        /**< bit:   6..8  Reserved */
    uint32_t RXRDY_TXKL:1;              /**< bit:      9  KILL Bank Set (for IN Endpoint)          */
    uint32_t :1;                        /**< bit:     10  Reserved */
    uint32_t TXRDY:1;                   /**< bit:     11  TX Packet Ready Set                      */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct { // ISOENDPT mode
    uint32_t :9;                        /**< bit:   0..8  Reserved */
    uint32_t RXRDY_TXKL:1;              /**< bit:      9  KILL Bank Set (for IN Endpoint)          */
    uint32_t :1;                        /**< bit:     10  Reserved */
    uint32_t TXRDY_TRER:1;              /**< bit:     11  TX Packet Ready Set                      */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } ISOENDPT;                                /**< Structure used for ISOENDPT mode access */
  uint32_t reg;                         /**< Type used for register access */
} UDPHS_EPTSETSTA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UDPHS_EPTSETSTA_OFFSET              (0x14)                                        /**<  (UDPHS_EPTSETSTA) UDPHS Endpoint Set Status Register (endpoint = 0)  Offset */

#define UDPHS_EPTSETSTA_FRCESTALL_Pos       5                                              /**< (UDPHS_EPTSETSTA) Stall Handshake Request Set Position */
#define UDPHS_EPTSETSTA_FRCESTALL_Msk       (_U_(0x1) << UDPHS_EPTSETSTA_FRCESTALL_Pos)    /**< (UDPHS_EPTSETSTA) Stall Handshake Request Set Mask */
#define UDPHS_EPTSETSTA_FRCESTALL           UDPHS_EPTSETSTA_FRCESTALL_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSETSTA_FRCESTALL_Msk instead */
#define UDPHS_EPTSETSTA_RXRDY_TXKL_Pos      9                                              /**< (UDPHS_EPTSETSTA) KILL Bank Set (for IN Endpoint) Position */
#define UDPHS_EPTSETSTA_RXRDY_TXKL_Msk      (_U_(0x1) << UDPHS_EPTSETSTA_RXRDY_TXKL_Pos)   /**< (UDPHS_EPTSETSTA) KILL Bank Set (for IN Endpoint) Mask */
#define UDPHS_EPTSETSTA_RXRDY_TXKL          UDPHS_EPTSETSTA_RXRDY_TXKL_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSETSTA_RXRDY_TXKL_Msk instead */
#define UDPHS_EPTSETSTA_TXRDY_Pos           11                                             /**< (UDPHS_EPTSETSTA) TX Packet Ready Set Position */
#define UDPHS_EPTSETSTA_TXRDY_Msk           (_U_(0x1) << UDPHS_EPTSETSTA_TXRDY_Pos)        /**< (UDPHS_EPTSETSTA) TX Packet Ready Set Mask */
#define UDPHS_EPTSETSTA_TXRDY               UDPHS_EPTSETSTA_TXRDY_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSETSTA_TXRDY_Msk instead */
#define UDPHS_EPTSETSTA_MASK                _U_(0xA20)                                     /**< \deprecated (UDPHS_EPTSETSTA) Register MASK  (Use UDPHS_EPTSETSTA_Msk instead)  */
#define UDPHS_EPTSETSTA_Msk                 _U_(0xA20)                                     /**< (UDPHS_EPTSETSTA) Register Mask  */

/* ISOENDPT mode */
#define UDPHS_EPTSETSTA_ISOENDPT_RXRDY_TXKL_Pos 9                                              /**< (UDPHS_EPTSETSTA) KILL Bank Set (for IN Endpoint) Position */
#define UDPHS_EPTSETSTA_ISOENDPT_RXRDY_TXKL_Msk (_U_(0x1) << UDPHS_EPTSETSTA_ISOENDPT_RXRDY_TXKL_Pos)  /**< (UDPHS_EPTSETSTA) KILL Bank Set (for IN Endpoint) Mask */
#define UDPHS_EPTSETSTA_ISOENDPT_RXRDY_TXKL UDPHS_EPTSETSTA_ISOENDPT_RXRDY_TXKL_Msk        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSETSTA_ISOENDPT_RXRDY_TXKL_Msk instead */
#define UDPHS_EPTSETSTA_ISOENDPT_TXRDY_TRER_Pos 11                                             /**< (UDPHS_EPTSETSTA) TX Packet Ready Set Position */
#define UDPHS_EPTSETSTA_ISOENDPT_TXRDY_TRER_Msk (_U_(0x1) << UDPHS_EPTSETSTA_ISOENDPT_TXRDY_TRER_Pos)  /**< (UDPHS_EPTSETSTA) TX Packet Ready Set Mask */
#define UDPHS_EPTSETSTA_ISOENDPT_TXRDY_TRER UDPHS_EPTSETSTA_ISOENDPT_TXRDY_TRER_Msk        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSETSTA_ISOENDPT_TXRDY_TRER_Msk instead */
#define UDPHS_EPTSETSTA_ISOENDPT_MASK       _U_(0xA00)                                     /**< \deprecated (UDPHS_EPTSETSTA_ISOENDPT) Register MASK  (Use UDPHS_EPTSETSTA_ISOENDPT_Msk instead)  */
#define UDPHS_EPTSETSTA_ISOENDPT_Msk        _U_(0xA00)                                     /**< (UDPHS_EPTSETSTA_ISOENDPT) Register Mask  */


/* -------- UDPHS_EPTCLRSTA : (UDPHS Offset: 0x18) (/W 32) UDPHS Endpoint Clear Status Register (endpoint = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :5;                        /**< bit:   0..4  Reserved */
    uint32_t FRCESTALL:1;               /**< bit:      5  Stall Handshake Request Clear            */
    uint32_t TOGGLESQ:1;                /**< bit:      6  Data Toggle Clear                        */
    uint32_t :2;                        /**< bit:   7..8  Reserved */
    uint32_t RXRDY_TXKL:1;              /**< bit:      9  Received OUT Data Clear                  */
    uint32_t TX_COMPLT:1;               /**< bit:     10  Transmitted IN Data Complete Clear       */
    uint32_t :1;                        /**< bit:     11  Reserved */
    uint32_t RX_SETUP:1;                /**< bit:     12  Received SETUP Clear                     */
    uint32_t STALL_SNT:1;               /**< bit:     13  Stall Sent Clear                         */
    uint32_t NAK_IN:1;                  /**< bit:     14  NAKIN Clear                              */
    uint32_t NAK_OUT:1;                 /**< bit:     15  NAKOUT Clear                             */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct { // ISOENDPT mode
    uint32_t :6;                        /**< bit:   0..5  Reserved */
    uint32_t TOGGLESQ:1;                /**< bit:      6  Data Toggle Clear                        */
    uint32_t :2;                        /**< bit:   7..8  Reserved */
    uint32_t RXRDY_TXKL:1;              /**< bit:      9  Received OUT Data Clear                  */
    uint32_t TX_COMPLT:1;               /**< bit:     10  Transmitted IN Data Complete Clear       */
    uint32_t :1;                        /**< bit:     11  Reserved */
    uint32_t ERR_FL_ISO:1;              /**< bit:     12  Error Flow Clear                         */
    uint32_t ERR_CRC_NTR:1;             /**< bit:     13  Number of Transaction Error Clear        */
    uint32_t ERR_FLUSH:1;               /**< bit:     14  Bank Flush Error Clear                   */
    uint32_t :17;                       /**< bit: 15..31  Reserved */
  } ISOENDPT;                                /**< Structure used for ISOENDPT mode access */
  uint32_t reg;                         /**< Type used for register access */
} UDPHS_EPTCLRSTA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UDPHS_EPTCLRSTA_OFFSET              (0x18)                                        /**<  (UDPHS_EPTCLRSTA) UDPHS Endpoint Clear Status Register (endpoint = 0)  Offset */

#define UDPHS_EPTCLRSTA_FRCESTALL_Pos       5                                              /**< (UDPHS_EPTCLRSTA) Stall Handshake Request Clear Position */
#define UDPHS_EPTCLRSTA_FRCESTALL_Msk       (_U_(0x1) << UDPHS_EPTCLRSTA_FRCESTALL_Pos)    /**< (UDPHS_EPTCLRSTA) Stall Handshake Request Clear Mask */
#define UDPHS_EPTCLRSTA_FRCESTALL           UDPHS_EPTCLRSTA_FRCESTALL_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCLRSTA_FRCESTALL_Msk instead */
#define UDPHS_EPTCLRSTA_TOGGLESQ_Pos        6                                              /**< (UDPHS_EPTCLRSTA) Data Toggle Clear Position */
#define UDPHS_EPTCLRSTA_TOGGLESQ_Msk        (_U_(0x1) << UDPHS_EPTCLRSTA_TOGGLESQ_Pos)     /**< (UDPHS_EPTCLRSTA) Data Toggle Clear Mask */
#define UDPHS_EPTCLRSTA_TOGGLESQ            UDPHS_EPTCLRSTA_TOGGLESQ_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCLRSTA_TOGGLESQ_Msk instead */
#define UDPHS_EPTCLRSTA_RXRDY_TXKL_Pos      9                                              /**< (UDPHS_EPTCLRSTA) Received OUT Data Clear Position */
#define UDPHS_EPTCLRSTA_RXRDY_TXKL_Msk      (_U_(0x1) << UDPHS_EPTCLRSTA_RXRDY_TXKL_Pos)   /**< (UDPHS_EPTCLRSTA) Received OUT Data Clear Mask */
#define UDPHS_EPTCLRSTA_RXRDY_TXKL          UDPHS_EPTCLRSTA_RXRDY_TXKL_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCLRSTA_RXRDY_TXKL_Msk instead */
#define UDPHS_EPTCLRSTA_TX_COMPLT_Pos       10                                             /**< (UDPHS_EPTCLRSTA) Transmitted IN Data Complete Clear Position */
#define UDPHS_EPTCLRSTA_TX_COMPLT_Msk       (_U_(0x1) << UDPHS_EPTCLRSTA_TX_COMPLT_Pos)    /**< (UDPHS_EPTCLRSTA) Transmitted IN Data Complete Clear Mask */
#define UDPHS_EPTCLRSTA_TX_COMPLT           UDPHS_EPTCLRSTA_TX_COMPLT_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCLRSTA_TX_COMPLT_Msk instead */
#define UDPHS_EPTCLRSTA_RX_SETUP_Pos        12                                             /**< (UDPHS_EPTCLRSTA) Received SETUP Clear Position */
#define UDPHS_EPTCLRSTA_RX_SETUP_Msk        (_U_(0x1) << UDPHS_EPTCLRSTA_RX_SETUP_Pos)     /**< (UDPHS_EPTCLRSTA) Received SETUP Clear Mask */
#define UDPHS_EPTCLRSTA_RX_SETUP            UDPHS_EPTCLRSTA_RX_SETUP_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCLRSTA_RX_SETUP_Msk instead */
#define UDPHS_EPTCLRSTA_STALL_SNT_Pos       13                                             /**< (UDPHS_EPTCLRSTA) Stall Sent Clear Position */
#define UDPHS_EPTCLRSTA_STALL_SNT_Msk       (_U_(0x1) << UDPHS_EPTCLRSTA_STALL_SNT_Pos)    /**< (UDPHS_EPTCLRSTA) Stall Sent Clear Mask */
#define UDPHS_EPTCLRSTA_STALL_SNT           UDPHS_EPTCLRSTA_STALL_SNT_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCLRSTA_STALL_SNT_Msk instead */
#define UDPHS_EPTCLRSTA_NAK_IN_Pos          14                                             /**< (UDPHS_EPTCLRSTA) NAKIN Clear Position */
#define UDPHS_EPTCLRSTA_NAK_IN_Msk          (_U_(0x1) << UDPHS_EPTCLRSTA_NAK_IN_Pos)       /**< (UDPHS_EPTCLRSTA) NAKIN Clear Mask */
#define UDPHS_EPTCLRSTA_NAK_IN              UDPHS_EPTCLRSTA_NAK_IN_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCLRSTA_NAK_IN_Msk instead */
#define UDPHS_EPTCLRSTA_NAK_OUT_Pos         15                                             /**< (UDPHS_EPTCLRSTA) NAKOUT Clear Position */
#define UDPHS_EPTCLRSTA_NAK_OUT_Msk         (_U_(0x1) << UDPHS_EPTCLRSTA_NAK_OUT_Pos)      /**< (UDPHS_EPTCLRSTA) NAKOUT Clear Mask */
#define UDPHS_EPTCLRSTA_NAK_OUT             UDPHS_EPTCLRSTA_NAK_OUT_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCLRSTA_NAK_OUT_Msk instead */
#define UDPHS_EPTCLRSTA_MASK                _U_(0xF660)                                    /**< \deprecated (UDPHS_EPTCLRSTA) Register MASK  (Use UDPHS_EPTCLRSTA_Msk instead)  */
#define UDPHS_EPTCLRSTA_Msk                 _U_(0xF660)                                    /**< (UDPHS_EPTCLRSTA) Register Mask  */

/* ISOENDPT mode */
#define UDPHS_EPTCLRSTA_ISOENDPT_TOGGLESQ_Pos 6                                              /**< (UDPHS_EPTCLRSTA) Data Toggle Clear Position */
#define UDPHS_EPTCLRSTA_ISOENDPT_TOGGLESQ_Msk (_U_(0x1) << UDPHS_EPTCLRSTA_ISOENDPT_TOGGLESQ_Pos)  /**< (UDPHS_EPTCLRSTA) Data Toggle Clear Mask */
#define UDPHS_EPTCLRSTA_ISOENDPT_TOGGLESQ   UDPHS_EPTCLRSTA_ISOENDPT_TOGGLESQ_Msk          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCLRSTA_ISOENDPT_TOGGLESQ_Msk instead */
#define UDPHS_EPTCLRSTA_ISOENDPT_RXRDY_TXKL_Pos 9                                              /**< (UDPHS_EPTCLRSTA) Received OUT Data Clear Position */
#define UDPHS_EPTCLRSTA_ISOENDPT_RXRDY_TXKL_Msk (_U_(0x1) << UDPHS_EPTCLRSTA_ISOENDPT_RXRDY_TXKL_Pos)  /**< (UDPHS_EPTCLRSTA) Received OUT Data Clear Mask */
#define UDPHS_EPTCLRSTA_ISOENDPT_RXRDY_TXKL UDPHS_EPTCLRSTA_ISOENDPT_RXRDY_TXKL_Msk        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCLRSTA_ISOENDPT_RXRDY_TXKL_Msk instead */
#define UDPHS_EPTCLRSTA_ISOENDPT_TX_COMPLT_Pos 10                                             /**< (UDPHS_EPTCLRSTA) Transmitted IN Data Complete Clear Position */
#define UDPHS_EPTCLRSTA_ISOENDPT_TX_COMPLT_Msk (_U_(0x1) << UDPHS_EPTCLRSTA_ISOENDPT_TX_COMPLT_Pos)  /**< (UDPHS_EPTCLRSTA) Transmitted IN Data Complete Clear Mask */
#define UDPHS_EPTCLRSTA_ISOENDPT_TX_COMPLT  UDPHS_EPTCLRSTA_ISOENDPT_TX_COMPLT_Msk         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCLRSTA_ISOENDPT_TX_COMPLT_Msk instead */
#define UDPHS_EPTCLRSTA_ISOENDPT_ERR_FL_ISO_Pos 12                                             /**< (UDPHS_EPTCLRSTA) Error Flow Clear Position */
#define UDPHS_EPTCLRSTA_ISOENDPT_ERR_FL_ISO_Msk (_U_(0x1) << UDPHS_EPTCLRSTA_ISOENDPT_ERR_FL_ISO_Pos)  /**< (UDPHS_EPTCLRSTA) Error Flow Clear Mask */
#define UDPHS_EPTCLRSTA_ISOENDPT_ERR_FL_ISO UDPHS_EPTCLRSTA_ISOENDPT_ERR_FL_ISO_Msk        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCLRSTA_ISOENDPT_ERR_FL_ISO_Msk instead */
#define UDPHS_EPTCLRSTA_ISOENDPT_ERR_CRC_NTR_Pos 13                                             /**< (UDPHS_EPTCLRSTA) Number of Transaction Error Clear Position */
#define UDPHS_EPTCLRSTA_ISOENDPT_ERR_CRC_NTR_Msk (_U_(0x1) << UDPHS_EPTCLRSTA_ISOENDPT_ERR_CRC_NTR_Pos)  /**< (UDPHS_EPTCLRSTA) Number of Transaction Error Clear Mask */
#define UDPHS_EPTCLRSTA_ISOENDPT_ERR_CRC_NTR UDPHS_EPTCLRSTA_ISOENDPT_ERR_CRC_NTR_Msk       /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCLRSTA_ISOENDPT_ERR_CRC_NTR_Msk instead */
#define UDPHS_EPTCLRSTA_ISOENDPT_ERR_FLUSH_Pos 14                                             /**< (UDPHS_EPTCLRSTA) Bank Flush Error Clear Position */
#define UDPHS_EPTCLRSTA_ISOENDPT_ERR_FLUSH_Msk (_U_(0x1) << UDPHS_EPTCLRSTA_ISOENDPT_ERR_FLUSH_Pos)  /**< (UDPHS_EPTCLRSTA) Bank Flush Error Clear Mask */
#define UDPHS_EPTCLRSTA_ISOENDPT_ERR_FLUSH  UDPHS_EPTCLRSTA_ISOENDPT_ERR_FLUSH_Msk         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTCLRSTA_ISOENDPT_ERR_FLUSH_Msk instead */
#define UDPHS_EPTCLRSTA_ISOENDPT_MASK       _U_(0x7640)                                    /**< \deprecated (UDPHS_EPTCLRSTA_ISOENDPT) Register MASK  (Use UDPHS_EPTCLRSTA_ISOENDPT_Msk instead)  */
#define UDPHS_EPTCLRSTA_ISOENDPT_Msk        _U_(0x7640)                                    /**< (UDPHS_EPTCLRSTA_ISOENDPT) Register Mask  */


/* -------- UDPHS_EPTSTA : (UDPHS Offset: 0x1c) (R/ 32) UDPHS Endpoint Status Register (endpoint = 0) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :5;                        /**< bit:   0..4  Reserved */
    uint32_t FRCESTALL:1;               /**< bit:      5  Stall Handshake Request (cleared upon USB reset) */
    uint32_t TOGGLESQ_STA:2;            /**< bit:   6..7  Toggle Sequencing (cleared upon USB reset) */
    uint32_t ERR_OVFLW:1;               /**< bit:      8  Overflow Error (cleared upon USB reset)  */
    uint32_t RXRDY_TXKL:1;              /**< bit:      9  Received OUT Data/KILL Bank (cleared upon USB reset) */
    uint32_t TX_COMPLT:1;               /**< bit:     10  Transmitted IN Data Complete (cleared upon USB reset) */
    uint32_t TXRDY:1;                   /**< bit:     11  TX Packet Ready (cleared upon USB reset) */
    uint32_t RX_SETUP:1;                /**< bit:     12  Received SETUP (cleared upon USB reset)  */
    uint32_t STALL_SNT:1;               /**< bit:     13  Stall Sent (cleared upon USB reset)      */
    uint32_t NAK_IN:1;                  /**< bit:     14  NAK IN (cleared upon USB reset)          */
    uint32_t NAK_OUT:1;                 /**< bit:     15  NAK OUT (cleared upon USB reset)         */
    uint32_t CURBK_CTLDIR:2;            /**< bit: 16..17  Current Bank/Control Direction (cleared upon USB reset) */
    uint32_t BUSY_BANK_STA:2;           /**< bit: 18..19  Busy Bank Number (cleared upon USB reset) */
    uint32_t BYTE_COUNT:11;             /**< bit: 20..30  UDPHS Byte Count (cleared upon USB reset) */
    uint32_t SHRT_PCKT:1;               /**< bit:     31  Short Packet (cleared upon USB reset)    */
  } bit;                                /**< Structure used for bit  access */
  struct { // ISOENDPT mode
    uint32_t :6;                        /**< bit:   0..5  Reserved */
    uint32_t TOGGLESQ_STA:2;            /**< bit:   6..7  Toggle Sequencing (cleared upon USB reset) */
    uint32_t ERR_OVFLW:1;               /**< bit:      8  Overflow Error (cleared upon USB reset)  */
    uint32_t RXRDY_TXKL:1;              /**< bit:      9  Received OUT Data/KILL Bank (cleared upon USB reset) */
    uint32_t TX_COMPLT:1;               /**< bit:     10  Transmitted IN Data Complete (cleared upon USB reset) */
    uint32_t TXRDY_TRER:1;              /**< bit:     11  TX Packet Ready/Transaction Error (cleared upon USB reset) */
    uint32_t ERR_FL_ISO:1;              /**< bit:     12  Error Flow (cleared upon USB reset)      */
    uint32_t ERR_CRC_NTR:1;             /**< bit:     13  CRC ISO Error/Number of Transaction Error (cleared upon USB reset) */
    uint32_t ERR_FLUSH:1;               /**< bit:     14  Bank Flush Error (cleared upon USB reset) */
    uint32_t :1;                        /**< bit:     15  Reserved */
    uint32_t CURBK:2;                   /**< bit: 16..17  Current Bank (cleared upon USB reset)    */
    uint32_t BUSY_BANK_STA:2;           /**< bit: 18..19  Busy Bank Number (cleared upon USB reset) */
    uint32_t BYTE_COUNT:11;             /**< bit: 20..30  UDPHS Byte Count (cleared upon USB reset) */
    uint32_t SHRT_PCKT:1;               /**< bit:     31  Short Packet (cleared upon USB reset)    */
  } ISOENDPT;                                /**< Structure used for ISOENDPT mode access */
  uint32_t reg;                         /**< Type used for register access */
} UDPHS_EPTSTA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UDPHS_EPTSTA_OFFSET                 (0x1C)                                        /**<  (UDPHS_EPTSTA) UDPHS Endpoint Status Register (endpoint = 0)  Offset */

#define UDPHS_EPTSTA_FRCESTALL_Pos          5                                              /**< (UDPHS_EPTSTA) Stall Handshake Request (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_FRCESTALL_Msk          (_U_(0x1) << UDPHS_EPTSTA_FRCESTALL_Pos)       /**< (UDPHS_EPTSTA) Stall Handshake Request (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_FRCESTALL              UDPHS_EPTSTA_FRCESTALL_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSTA_FRCESTALL_Msk instead */
#define UDPHS_EPTSTA_TOGGLESQ_STA_Pos       6                                              /**< (UDPHS_EPTSTA) Toggle Sequencing (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_TOGGLESQ_STA_Msk       (_U_(0x3) << UDPHS_EPTSTA_TOGGLESQ_STA_Pos)    /**< (UDPHS_EPTSTA) Toggle Sequencing (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_TOGGLESQ_STA(value)    (UDPHS_EPTSTA_TOGGLESQ_STA_Msk & ((value) << UDPHS_EPTSTA_TOGGLESQ_STA_Pos))
#define   UDPHS_EPTSTA_TOGGLESQ_STA_DATA0_Val _U_(0x0)                                       /**< (UDPHS_EPTSTA) DATA0  */
#define   UDPHS_EPTSTA_TOGGLESQ_STA_DATA1_Val _U_(0x1)                                       /**< (UDPHS_EPTSTA) DATA1  */
#define   UDPHS_EPTSTA_TOGGLESQ_STA_DATA2_Val _U_(0x2)                                       /**< (UDPHS_EPTSTA) Reserved for High Bandwidth Isochronous Endpoint  */
#define   UDPHS_EPTSTA_TOGGLESQ_STA_MDATA_Val _U_(0x3)                                       /**< (UDPHS_EPTSTA) Reserved for High Bandwidth Isochronous Endpoint  */
#define UDPHS_EPTSTA_TOGGLESQ_STA_DATA0     (UDPHS_EPTSTA_TOGGLESQ_STA_DATA0_Val << UDPHS_EPTSTA_TOGGLESQ_STA_Pos)  /**< (UDPHS_EPTSTA) DATA0 Position  */
#define UDPHS_EPTSTA_TOGGLESQ_STA_DATA1     (UDPHS_EPTSTA_TOGGLESQ_STA_DATA1_Val << UDPHS_EPTSTA_TOGGLESQ_STA_Pos)  /**< (UDPHS_EPTSTA) DATA1 Position  */
#define UDPHS_EPTSTA_TOGGLESQ_STA_DATA2     (UDPHS_EPTSTA_TOGGLESQ_STA_DATA2_Val << UDPHS_EPTSTA_TOGGLESQ_STA_Pos)  /**< (UDPHS_EPTSTA) Reserved for High Bandwidth Isochronous Endpoint Position  */
#define UDPHS_EPTSTA_TOGGLESQ_STA_MDATA     (UDPHS_EPTSTA_TOGGLESQ_STA_MDATA_Val << UDPHS_EPTSTA_TOGGLESQ_STA_Pos)  /**< (UDPHS_EPTSTA) Reserved for High Bandwidth Isochronous Endpoint Position  */
#define UDPHS_EPTSTA_ERR_OVFLW_Pos          8                                              /**< (UDPHS_EPTSTA) Overflow Error (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ERR_OVFLW_Msk          (_U_(0x1) << UDPHS_EPTSTA_ERR_OVFLW_Pos)       /**< (UDPHS_EPTSTA) Overflow Error (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ERR_OVFLW              UDPHS_EPTSTA_ERR_OVFLW_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSTA_ERR_OVFLW_Msk instead */
#define UDPHS_EPTSTA_RXRDY_TXKL_Pos         9                                              /**< (UDPHS_EPTSTA) Received OUT Data/KILL Bank (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_RXRDY_TXKL_Msk         (_U_(0x1) << UDPHS_EPTSTA_RXRDY_TXKL_Pos)      /**< (UDPHS_EPTSTA) Received OUT Data/KILL Bank (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_RXRDY_TXKL             UDPHS_EPTSTA_RXRDY_TXKL_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSTA_RXRDY_TXKL_Msk instead */
#define UDPHS_EPTSTA_TX_COMPLT_Pos          10                                             /**< (UDPHS_EPTSTA) Transmitted IN Data Complete (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_TX_COMPLT_Msk          (_U_(0x1) << UDPHS_EPTSTA_TX_COMPLT_Pos)       /**< (UDPHS_EPTSTA) Transmitted IN Data Complete (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_TX_COMPLT              UDPHS_EPTSTA_TX_COMPLT_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSTA_TX_COMPLT_Msk instead */
#define UDPHS_EPTSTA_TXRDY_Pos              11                                             /**< (UDPHS_EPTSTA) TX Packet Ready (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_TXRDY_Msk              (_U_(0x1) << UDPHS_EPTSTA_TXRDY_Pos)           /**< (UDPHS_EPTSTA) TX Packet Ready (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_TXRDY                  UDPHS_EPTSTA_TXRDY_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSTA_TXRDY_Msk instead */
#define UDPHS_EPTSTA_RX_SETUP_Pos           12                                             /**< (UDPHS_EPTSTA) Received SETUP (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_RX_SETUP_Msk           (_U_(0x1) << UDPHS_EPTSTA_RX_SETUP_Pos)        /**< (UDPHS_EPTSTA) Received SETUP (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_RX_SETUP               UDPHS_EPTSTA_RX_SETUP_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSTA_RX_SETUP_Msk instead */
#define UDPHS_EPTSTA_STALL_SNT_Pos          13                                             /**< (UDPHS_EPTSTA) Stall Sent (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_STALL_SNT_Msk          (_U_(0x1) << UDPHS_EPTSTA_STALL_SNT_Pos)       /**< (UDPHS_EPTSTA) Stall Sent (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_STALL_SNT              UDPHS_EPTSTA_STALL_SNT_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSTA_STALL_SNT_Msk instead */
#define UDPHS_EPTSTA_NAK_IN_Pos             14                                             /**< (UDPHS_EPTSTA) NAK IN (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_NAK_IN_Msk             (_U_(0x1) << UDPHS_EPTSTA_NAK_IN_Pos)          /**< (UDPHS_EPTSTA) NAK IN (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_NAK_IN                 UDPHS_EPTSTA_NAK_IN_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSTA_NAK_IN_Msk instead */
#define UDPHS_EPTSTA_NAK_OUT_Pos            15                                             /**< (UDPHS_EPTSTA) NAK OUT (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_NAK_OUT_Msk            (_U_(0x1) << UDPHS_EPTSTA_NAK_OUT_Pos)         /**< (UDPHS_EPTSTA) NAK OUT (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_NAK_OUT                UDPHS_EPTSTA_NAK_OUT_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSTA_NAK_OUT_Msk instead */
#define UDPHS_EPTSTA_CURBK_CTLDIR_Pos       16                                             /**< (UDPHS_EPTSTA) Current Bank/Control Direction (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_CURBK_CTLDIR_Msk       (_U_(0x3) << UDPHS_EPTSTA_CURBK_CTLDIR_Pos)    /**< (UDPHS_EPTSTA) Current Bank/Control Direction (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_CURBK_CTLDIR(value)    (UDPHS_EPTSTA_CURBK_CTLDIR_Msk & ((value) << UDPHS_EPTSTA_CURBK_CTLDIR_Pos))
#define UDPHS_EPTSTA_BUSY_BANK_STA_Pos      18                                             /**< (UDPHS_EPTSTA) Busy Bank Number (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_BUSY_BANK_STA_Msk      (_U_(0x3) << UDPHS_EPTSTA_BUSY_BANK_STA_Pos)   /**< (UDPHS_EPTSTA) Busy Bank Number (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_BUSY_BANK_STA(value)   (UDPHS_EPTSTA_BUSY_BANK_STA_Msk & ((value) << UDPHS_EPTSTA_BUSY_BANK_STA_Pos))
#define   UDPHS_EPTSTA_BUSY_BANK_STA_0BUSYBANK_Val _U_(0x0)                                       /**< (UDPHS_EPTSTA) All banks are free  */
#define   UDPHS_EPTSTA_BUSY_BANK_STA_1BUSYBANK_Val _U_(0x1)                                       /**< (UDPHS_EPTSTA) 1 busy bank  */
#define   UDPHS_EPTSTA_BUSY_BANK_STA_2BUSYBANKS_Val _U_(0x2)                                       /**< (UDPHS_EPTSTA) 2 busy banks  */
#define   UDPHS_EPTSTA_BUSY_BANK_STA_3BUSYBANKS_Val _U_(0x3)                                       /**< (UDPHS_EPTSTA) 3 busy banks  */
#define UDPHS_EPTSTA_BUSY_BANK_STA_0BUSYBANK (UDPHS_EPTSTA_BUSY_BANK_STA_0BUSYBANK_Val << UDPHS_EPTSTA_BUSY_BANK_STA_Pos)  /**< (UDPHS_EPTSTA) All banks are free Position  */
#define UDPHS_EPTSTA_BUSY_BANK_STA_1BUSYBANK (UDPHS_EPTSTA_BUSY_BANK_STA_1BUSYBANK_Val << UDPHS_EPTSTA_BUSY_BANK_STA_Pos)  /**< (UDPHS_EPTSTA) 1 busy bank Position  */
#define UDPHS_EPTSTA_BUSY_BANK_STA_2BUSYBANKS (UDPHS_EPTSTA_BUSY_BANK_STA_2BUSYBANKS_Val << UDPHS_EPTSTA_BUSY_BANK_STA_Pos)  /**< (UDPHS_EPTSTA) 2 busy banks Position  */
#define UDPHS_EPTSTA_BUSY_BANK_STA_3BUSYBANKS (UDPHS_EPTSTA_BUSY_BANK_STA_3BUSYBANKS_Val << UDPHS_EPTSTA_BUSY_BANK_STA_Pos)  /**< (UDPHS_EPTSTA) 3 busy banks Position  */
#define UDPHS_EPTSTA_BYTE_COUNT_Pos         20                                             /**< (UDPHS_EPTSTA) UDPHS Byte Count (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_BYTE_COUNT_Msk         (_U_(0x7FF) << UDPHS_EPTSTA_BYTE_COUNT_Pos)    /**< (UDPHS_EPTSTA) UDPHS Byte Count (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_BYTE_COUNT(value)      (UDPHS_EPTSTA_BYTE_COUNT_Msk & ((value) << UDPHS_EPTSTA_BYTE_COUNT_Pos))
#define UDPHS_EPTSTA_SHRT_PCKT_Pos          31                                             /**< (UDPHS_EPTSTA) Short Packet (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_SHRT_PCKT_Msk          (_U_(0x1) << UDPHS_EPTSTA_SHRT_PCKT_Pos)       /**< (UDPHS_EPTSTA) Short Packet (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_SHRT_PCKT              UDPHS_EPTSTA_SHRT_PCKT_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSTA_SHRT_PCKT_Msk instead */
#define UDPHS_EPTSTA_MASK                   _U_(0xFFFFFFE0)                                /**< \deprecated (UDPHS_EPTSTA) Register MASK  (Use UDPHS_EPTSTA_Msk instead)  */
#define UDPHS_EPTSTA_Msk                    _U_(0xFFFFFFE0)                                /**< (UDPHS_EPTSTA) Register Mask  */

/* ISOENDPT mode */
#define UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_Pos 6                                              /**< (UDPHS_EPTSTA) Toggle Sequencing (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_Msk (_U_(0x3) << UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_Pos)  /**< (UDPHS_EPTSTA) Toggle Sequencing (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA(value) (UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_Msk & ((value) << UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_Pos))
#define   UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_DATA0_Val _U_(0x0)                                       /**< (UDPHS_EPTSTA) ISOENDPT DATA0  */
#define   UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_DATA1_Val _U_(0x1)                                       /**< (UDPHS_EPTSTA) ISOENDPT DATA1  */
#define   UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_DATA2_Val _U_(0x2)                                       /**< (UDPHS_EPTSTA) ISOENDPT Data2 (only for High Bandwidth Isochronous Endpoint)  */
#define   UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_MDATA_Val _U_(0x3)                                       /**< (UDPHS_EPTSTA) ISOENDPT MData (only for High Bandwidth Isochronous Endpoint)  */
#define UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_DATA0 (UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_DATA0_Val << UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_Pos)  /**< (UDPHS_EPTSTA) DATA0 Position  */
#define UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_DATA1 (UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_DATA1_Val << UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_Pos)  /**< (UDPHS_EPTSTA) DATA1 Position  */
#define UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_DATA2 (UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_DATA2_Val << UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_Pos)  /**< (UDPHS_EPTSTA) Data2 (only for High Bandwidth Isochronous Endpoint) Position  */
#define UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_MDATA (UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_MDATA_Val << UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_Pos)  /**< (UDPHS_EPTSTA) MData (only for High Bandwidth Isochronous Endpoint) Position  */
#define UDPHS_EPTSTA_ISOENDPT_ERR_OVFLW_Pos 8                                              /**< (UDPHS_EPTSTA) Overflow Error (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_ERR_OVFLW_Msk (_U_(0x1) << UDPHS_EPTSTA_ISOENDPT_ERR_OVFLW_Pos)  /**< (UDPHS_EPTSTA) Overflow Error (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_ERR_OVFLW     UDPHS_EPTSTA_ISOENDPT_ERR_OVFLW_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSTA_ISOENDPT_ERR_OVFLW_Msk instead */
#define UDPHS_EPTSTA_ISOENDPT_RXRDY_TXKL_Pos 9                                              /**< (UDPHS_EPTSTA) Received OUT Data/KILL Bank (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_RXRDY_TXKL_Msk (_U_(0x1) << UDPHS_EPTSTA_ISOENDPT_RXRDY_TXKL_Pos)  /**< (UDPHS_EPTSTA) Received OUT Data/KILL Bank (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_RXRDY_TXKL    UDPHS_EPTSTA_ISOENDPT_RXRDY_TXKL_Msk           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSTA_ISOENDPT_RXRDY_TXKL_Msk instead */
#define UDPHS_EPTSTA_ISOENDPT_TX_COMPLT_Pos 10                                             /**< (UDPHS_EPTSTA) Transmitted IN Data Complete (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_TX_COMPLT_Msk (_U_(0x1) << UDPHS_EPTSTA_ISOENDPT_TX_COMPLT_Pos)  /**< (UDPHS_EPTSTA) Transmitted IN Data Complete (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_TX_COMPLT     UDPHS_EPTSTA_ISOENDPT_TX_COMPLT_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSTA_ISOENDPT_TX_COMPLT_Msk instead */
#define UDPHS_EPTSTA_ISOENDPT_TXRDY_TRER_Pos 11                                             /**< (UDPHS_EPTSTA) TX Packet Ready/Transaction Error (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_TXRDY_TRER_Msk (_U_(0x1) << UDPHS_EPTSTA_ISOENDPT_TXRDY_TRER_Pos)  /**< (UDPHS_EPTSTA) TX Packet Ready/Transaction Error (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_TXRDY_TRER    UDPHS_EPTSTA_ISOENDPT_TXRDY_TRER_Msk           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSTA_ISOENDPT_TXRDY_TRER_Msk instead */
#define UDPHS_EPTSTA_ISOENDPT_ERR_FL_ISO_Pos 12                                             /**< (UDPHS_EPTSTA) Error Flow (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_ERR_FL_ISO_Msk (_U_(0x1) << UDPHS_EPTSTA_ISOENDPT_ERR_FL_ISO_Pos)  /**< (UDPHS_EPTSTA) Error Flow (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_ERR_FL_ISO    UDPHS_EPTSTA_ISOENDPT_ERR_FL_ISO_Msk           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSTA_ISOENDPT_ERR_FL_ISO_Msk instead */
#define UDPHS_EPTSTA_ISOENDPT_ERR_CRC_NTR_Pos 13                                             /**< (UDPHS_EPTSTA) CRC ISO Error/Number of Transaction Error (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_ERR_CRC_NTR_Msk (_U_(0x1) << UDPHS_EPTSTA_ISOENDPT_ERR_CRC_NTR_Pos)  /**< (UDPHS_EPTSTA) CRC ISO Error/Number of Transaction Error (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_ERR_CRC_NTR   UDPHS_EPTSTA_ISOENDPT_ERR_CRC_NTR_Msk          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSTA_ISOENDPT_ERR_CRC_NTR_Msk instead */
#define UDPHS_EPTSTA_ISOENDPT_ERR_FLUSH_Pos 14                                             /**< (UDPHS_EPTSTA) Bank Flush Error (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_ERR_FLUSH_Msk (_U_(0x1) << UDPHS_EPTSTA_ISOENDPT_ERR_FLUSH_Pos)  /**< (UDPHS_EPTSTA) Bank Flush Error (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_ERR_FLUSH     UDPHS_EPTSTA_ISOENDPT_ERR_FLUSH_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSTA_ISOENDPT_ERR_FLUSH_Msk instead */
#define UDPHS_EPTSTA_ISOENDPT_CURBK_Pos     16                                             /**< (UDPHS_EPTSTA) Current Bank (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_CURBK_Msk     (_U_(0x3) << UDPHS_EPTSTA_ISOENDPT_CURBK_Pos)  /**< (UDPHS_EPTSTA) Current Bank (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_CURBK(value)  (UDPHS_EPTSTA_ISOENDPT_CURBK_Msk & ((value) << UDPHS_EPTSTA_ISOENDPT_CURBK_Pos))
#define   UDPHS_EPTSTA_ISOENDPT_CURBK_BANK0_Val _U_(0x0)                                       /**< (UDPHS_EPTSTA) ISOENDPT Bank 0 (or single bank)  */
#define   UDPHS_EPTSTA_ISOENDPT_CURBK_BANK1_Val _U_(0x1)                                       /**< (UDPHS_EPTSTA) ISOENDPT Bank 1  */
#define   UDPHS_EPTSTA_ISOENDPT_CURBK_BANK2_Val _U_(0x2)                                       /**< (UDPHS_EPTSTA) ISOENDPT Bank 2  */
#define UDPHS_EPTSTA_ISOENDPT_CURBK_BANK0   (UDPHS_EPTSTA_ISOENDPT_CURBK_BANK0_Val << UDPHS_EPTSTA_ISOENDPT_CURBK_Pos)  /**< (UDPHS_EPTSTA) Bank 0 (or single bank) Position  */
#define UDPHS_EPTSTA_ISOENDPT_CURBK_BANK1   (UDPHS_EPTSTA_ISOENDPT_CURBK_BANK1_Val << UDPHS_EPTSTA_ISOENDPT_CURBK_Pos)  /**< (UDPHS_EPTSTA) Bank 1 Position  */
#define UDPHS_EPTSTA_ISOENDPT_CURBK_BANK2   (UDPHS_EPTSTA_ISOENDPT_CURBK_BANK2_Val << UDPHS_EPTSTA_ISOENDPT_CURBK_Pos)  /**< (UDPHS_EPTSTA) Bank 2 Position  */
#define UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_Pos 18                                             /**< (UDPHS_EPTSTA) Busy Bank Number (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_Msk (_U_(0x3) << UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_Pos)  /**< (UDPHS_EPTSTA) Busy Bank Number (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA(value) (UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_Msk & ((value) << UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_Pos))
#define   UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_0BUSYBANK_Val _U_(0x0)                                       /**< (UDPHS_EPTSTA) ISOENDPT All banks are free  */
#define   UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_1BUSYBANK_Val _U_(0x1)                                       /**< (UDPHS_EPTSTA) ISOENDPT 1 busy bank  */
#define   UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_2BUSYBANKS_Val _U_(0x2)                                       /**< (UDPHS_EPTSTA) ISOENDPT 2 busy banks  */
#define   UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_3BUSYBANKS_Val _U_(0x3)                                       /**< (UDPHS_EPTSTA) ISOENDPT 3 busy banks  */
#define UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_0BUSYBANK (UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_0BUSYBANK_Val << UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_Pos)  /**< (UDPHS_EPTSTA) All banks are free Position  */
#define UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_1BUSYBANK (UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_1BUSYBANK_Val << UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_Pos)  /**< (UDPHS_EPTSTA) 1 busy bank Position  */
#define UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_2BUSYBANKS (UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_2BUSYBANKS_Val << UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_Pos)  /**< (UDPHS_EPTSTA) 2 busy banks Position  */
#define UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_3BUSYBANKS (UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_3BUSYBANKS_Val << UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_Pos)  /**< (UDPHS_EPTSTA) 3 busy banks Position  */
#define UDPHS_EPTSTA_ISOENDPT_BYTE_COUNT_Pos 20                                             /**< (UDPHS_EPTSTA) UDPHS Byte Count (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_BYTE_COUNT_Msk (_U_(0x7FF) << UDPHS_EPTSTA_ISOENDPT_BYTE_COUNT_Pos)  /**< (UDPHS_EPTSTA) UDPHS Byte Count (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_BYTE_COUNT(value) (UDPHS_EPTSTA_ISOENDPT_BYTE_COUNT_Msk & ((value) << UDPHS_EPTSTA_ISOENDPT_BYTE_COUNT_Pos))
#define UDPHS_EPTSTA_ISOENDPT_SHRT_PCKT_Pos 31                                             /**< (UDPHS_EPTSTA) Short Packet (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_SHRT_PCKT_Msk (_U_(0x1) << UDPHS_EPTSTA_ISOENDPT_SHRT_PCKT_Pos)  /**< (UDPHS_EPTSTA) Short Packet (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_SHRT_PCKT     UDPHS_EPTSTA_ISOENDPT_SHRT_PCKT_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTSTA_ISOENDPT_SHRT_PCKT_Msk instead */
#define UDPHS_EPTSTA_ISOENDPT_MASK          _U_(0xFFFF7FC0)                                /**< \deprecated (UDPHS_EPTSTA_ISOENDPT) Register MASK  (Use UDPHS_EPTSTA_ISOENDPT_Msk instead)  */
#define UDPHS_EPTSTA_ISOENDPT_Msk           _U_(0xFFFF7FC0)                                /**< (UDPHS_EPTSTA_ISOENDPT) Register Mask  */


/* -------- UDPHS_CTRL : (UDPHS Offset: 0x00) (R/W 32) UDPHS Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DEV_ADDR:7;                /**< bit:   0..6  UDPHS Address (cleared upon USB reset)   */
    uint32_t FADDR_EN:1;                /**< bit:      7  Function Address Enable (cleared upon USB reset) */
    uint32_t EN_UDPHS:1;                /**< bit:      8  UDPHS Enable                             */
    uint32_t DETACH:1;                  /**< bit:      9  Detach Command                           */
    uint32_t REWAKEUP:1;                /**< bit:     10  Send Remote Wakeup (cleared upon USB reset) */
    uint32_t PULLD_DIS:1;               /**< bit:     11  Pulldown Disable (cleared upon USB reset) */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UDPHS_CTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UDPHS_CTRL_OFFSET                   (0x00)                                        /**<  (UDPHS_CTRL) UDPHS Control Register  Offset */

#define UDPHS_CTRL_DEV_ADDR_Pos             0                                              /**< (UDPHS_CTRL) UDPHS Address (cleared upon USB reset) Position */
#define UDPHS_CTRL_DEV_ADDR_Msk             (_U_(0x7F) << UDPHS_CTRL_DEV_ADDR_Pos)         /**< (UDPHS_CTRL) UDPHS Address (cleared upon USB reset) Mask */
#define UDPHS_CTRL_DEV_ADDR(value)          (UDPHS_CTRL_DEV_ADDR_Msk & ((value) << UDPHS_CTRL_DEV_ADDR_Pos))
#define UDPHS_CTRL_FADDR_EN_Pos             7                                              /**< (UDPHS_CTRL) Function Address Enable (cleared upon USB reset) Position */
#define UDPHS_CTRL_FADDR_EN_Msk             (_U_(0x1) << UDPHS_CTRL_FADDR_EN_Pos)          /**< (UDPHS_CTRL) Function Address Enable (cleared upon USB reset) Mask */
#define UDPHS_CTRL_FADDR_EN                 UDPHS_CTRL_FADDR_EN_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_CTRL_FADDR_EN_Msk instead */
#define UDPHS_CTRL_EN_UDPHS_Pos             8                                              /**< (UDPHS_CTRL) UDPHS Enable Position */
#define UDPHS_CTRL_EN_UDPHS_Msk             (_U_(0x1) << UDPHS_CTRL_EN_UDPHS_Pos)          /**< (UDPHS_CTRL) UDPHS Enable Mask */
#define UDPHS_CTRL_EN_UDPHS                 UDPHS_CTRL_EN_UDPHS_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_CTRL_EN_UDPHS_Msk instead */
#define UDPHS_CTRL_DETACH_Pos               9                                              /**< (UDPHS_CTRL) Detach Command Position */
#define UDPHS_CTRL_DETACH_Msk               (_U_(0x1) << UDPHS_CTRL_DETACH_Pos)            /**< (UDPHS_CTRL) Detach Command Mask */
#define UDPHS_CTRL_DETACH                   UDPHS_CTRL_DETACH_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_CTRL_DETACH_Msk instead */
#define UDPHS_CTRL_REWAKEUP_Pos             10                                             /**< (UDPHS_CTRL) Send Remote Wakeup (cleared upon USB reset) Position */
#define UDPHS_CTRL_REWAKEUP_Msk             (_U_(0x1) << UDPHS_CTRL_REWAKEUP_Pos)          /**< (UDPHS_CTRL) Send Remote Wakeup (cleared upon USB reset) Mask */
#define UDPHS_CTRL_REWAKEUP                 UDPHS_CTRL_REWAKEUP_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_CTRL_REWAKEUP_Msk instead */
#define UDPHS_CTRL_PULLD_DIS_Pos            11                                             /**< (UDPHS_CTRL) Pulldown Disable (cleared upon USB reset) Position */
#define UDPHS_CTRL_PULLD_DIS_Msk            (_U_(0x1) << UDPHS_CTRL_PULLD_DIS_Pos)         /**< (UDPHS_CTRL) Pulldown Disable (cleared upon USB reset) Mask */
#define UDPHS_CTRL_PULLD_DIS                UDPHS_CTRL_PULLD_DIS_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_CTRL_PULLD_DIS_Msk instead */
#define UDPHS_CTRL_MASK                     _U_(0xFFF)                                     /**< \deprecated (UDPHS_CTRL) Register MASK  (Use UDPHS_CTRL_Msk instead)  */
#define UDPHS_CTRL_Msk                      _U_(0xFFF)                                     /**< (UDPHS_CTRL) Register Mask  */


/* -------- UDPHS_FNUM : (UDPHS Offset: 0x04) (R/ 32) UDPHS Frame Number Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MICRO_FRAME_NUM:3;         /**< bit:   0..2  Microframe Number (cleared upon USB reset) */
    uint32_t FRAME_NUMBER:11;           /**< bit:  3..13  Frame Number as defined in the Packet Field Formats (cleared upon USB reset) */
    uint32_t :17;                       /**< bit: 14..30  Reserved */
    uint32_t FNUM_ERR:1;                /**< bit:     31  Frame Number CRC Error (cleared upon USB reset) */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UDPHS_FNUM_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UDPHS_FNUM_OFFSET                   (0x04)                                        /**<  (UDPHS_FNUM) UDPHS Frame Number Register  Offset */

#define UDPHS_FNUM_MICRO_FRAME_NUM_Pos      0                                              /**< (UDPHS_FNUM) Microframe Number (cleared upon USB reset) Position */
#define UDPHS_FNUM_MICRO_FRAME_NUM_Msk      (_U_(0x7) << UDPHS_FNUM_MICRO_FRAME_NUM_Pos)   /**< (UDPHS_FNUM) Microframe Number (cleared upon USB reset) Mask */
#define UDPHS_FNUM_MICRO_FRAME_NUM(value)   (UDPHS_FNUM_MICRO_FRAME_NUM_Msk & ((value) << UDPHS_FNUM_MICRO_FRAME_NUM_Pos))
#define UDPHS_FNUM_FRAME_NUMBER_Pos         3                                              /**< (UDPHS_FNUM) Frame Number as defined in the Packet Field Formats (cleared upon USB reset) Position */
#define UDPHS_FNUM_FRAME_NUMBER_Msk         (_U_(0x7FF) << UDPHS_FNUM_FRAME_NUMBER_Pos)    /**< (UDPHS_FNUM) Frame Number as defined in the Packet Field Formats (cleared upon USB reset) Mask */
#define UDPHS_FNUM_FRAME_NUMBER(value)      (UDPHS_FNUM_FRAME_NUMBER_Msk & ((value) << UDPHS_FNUM_FRAME_NUMBER_Pos))
#define UDPHS_FNUM_FNUM_ERR_Pos             31                                             /**< (UDPHS_FNUM) Frame Number CRC Error (cleared upon USB reset) Position */
#define UDPHS_FNUM_FNUM_ERR_Msk             (_U_(0x1) << UDPHS_FNUM_FNUM_ERR_Pos)          /**< (UDPHS_FNUM) Frame Number CRC Error (cleared upon USB reset) Mask */
#define UDPHS_FNUM_FNUM_ERR                 UDPHS_FNUM_FNUM_ERR_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_FNUM_FNUM_ERR_Msk instead */
#define UDPHS_FNUM_MASK                     _U_(0x80003FFF)                                /**< \deprecated (UDPHS_FNUM) Register MASK  (Use UDPHS_FNUM_Msk instead)  */
#define UDPHS_FNUM_Msk                      _U_(0x80003FFF)                                /**< (UDPHS_FNUM) Register Mask  */


/* -------- UDPHS_IEN : (UDPHS Offset: 0x10) (R/W 32) UDPHS Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :1;                        /**< bit:      0  Reserved */
    uint32_t DET_SUSPD:1;               /**< bit:      1  Suspend Interrupt Enable (cleared upon USB reset) */
    uint32_t MICRO_SOF:1;               /**< bit:      2  Micro-SOF Interrupt Enable (cleared upon USB reset) */
    uint32_t INT_SOF:1;                 /**< bit:      3  SOF Interrupt Enable (cleared upon USB reset) */
    uint32_t ENDRESET:1;                /**< bit:      4  End Of Reset Interrupt Enable (cleared upon USB reset) */
    uint32_t WAKE_UP:1;                 /**< bit:      5  Wake Up CPU Interrupt Enable (cleared upon USB reset) */
    uint32_t ENDOFRSM:1;                /**< bit:      6  End Of Resume Interrupt Enable (cleared upon USB reset) */
    uint32_t UPSTR_RES:1;               /**< bit:      7  Upstream Resume Interrupt Enable (cleared upon USB reset) */
    uint32_t EPT_0:1;                   /**< bit:      8  Endpoint 0 Interrupt Enable (cleared upon USB reset) */
    uint32_t EPT_1:1;                   /**< bit:      9  Endpoint 1 Interrupt Enable (cleared upon USB reset) */
    uint32_t EPT_2:1;                   /**< bit:     10  Endpoint 2 Interrupt Enable (cleared upon USB reset) */
    uint32_t EPT_3:1;                   /**< bit:     11  Endpoint 3 Interrupt Enable (cleared upon USB reset) */
    uint32_t EPT_4:1;                   /**< bit:     12  Endpoint 4 Interrupt Enable (cleared upon USB reset) */
    uint32_t EPT_5:1;                   /**< bit:     13  Endpoint 5 Interrupt Enable (cleared upon USB reset) */
    uint32_t EPT_6:1;                   /**< bit:     14  Endpoint 6 Interrupt Enable (cleared upon USB reset) */
    uint32_t EPT_7:1;                   /**< bit:     15  Endpoint 7 Interrupt Enable (cleared upon USB reset) */
    uint32_t EPT_8:1;                   /**< bit:     16  Endpoint 8 Interrupt Enable (cleared upon USB reset) */
    uint32_t EPT_9:1;                   /**< bit:     17  Endpoint 9 Interrupt Enable (cleared upon USB reset) */
    uint32_t EPT_10:1;                  /**< bit:     18  Endpoint 10 Interrupt Enable (cleared upon USB reset) */
    uint32_t EPT_11:1;                  /**< bit:     19  Endpoint 11 Interrupt Enable (cleared upon USB reset) */
    uint32_t EPT_12:1;                  /**< bit:     20  Endpoint 12 Interrupt Enable (cleared upon USB reset) */
    uint32_t EPT_13:1;                  /**< bit:     21  Endpoint 13 Interrupt Enable (cleared upon USB reset) */
    uint32_t EPT_14:1;                  /**< bit:     22  Endpoint 14 Interrupt Enable (cleared upon USB reset) */
    uint32_t EPT_15:1;                  /**< bit:     23  Endpoint 15 Interrupt Enable (cleared upon USB reset) */
    uint32_t :1;                        /**< bit:     24  Reserved */
    uint32_t DMA_1:1;                   /**< bit:     25  DMA Channel 1 Interrupt Enable (cleared upon USB reset) */
    uint32_t DMA_2:1;                   /**< bit:     26  DMA Channel 2 Interrupt Enable (cleared upon USB reset) */
    uint32_t DMA_3:1;                   /**< bit:     27  DMA Channel 3 Interrupt Enable (cleared upon USB reset) */
    uint32_t DMA_4:1;                   /**< bit:     28  DMA Channel 4 Interrupt Enable (cleared upon USB reset) */
    uint32_t DMA_5:1;                   /**< bit:     29  DMA Channel 5 Interrupt Enable (cleared upon USB reset) */
    uint32_t DMA_6:1;                   /**< bit:     30  DMA Channel 6 Interrupt Enable (cleared upon USB reset) */
    uint32_t DMA_7:1;                   /**< bit:     31  DMA Channel 7 Interrupt Enable (cleared upon USB reset) */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t EPT_:16;                   /**< bit:  8..23  Endpoint x Interrupt Enable (cleared upon USB reset) */
    uint32_t :1;                        /**< bit:     24  Reserved */
    uint32_t DMA_:7;                    /**< bit: 25..31  DMA Channel 7 Interrupt Enable (cleared upon USB reset) */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} UDPHS_IEN_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UDPHS_IEN_OFFSET                    (0x10)                                        /**<  (UDPHS_IEN) UDPHS Interrupt Enable Register  Offset */

#define UDPHS_IEN_DET_SUSPD_Pos             1                                              /**< (UDPHS_IEN) Suspend Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_DET_SUSPD_Msk             (_U_(0x1) << UDPHS_IEN_DET_SUSPD_Pos)          /**< (UDPHS_IEN) Suspend Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_DET_SUSPD                 UDPHS_IEN_DET_SUSPD_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_DET_SUSPD_Msk instead */
#define UDPHS_IEN_MICRO_SOF_Pos             2                                              /**< (UDPHS_IEN) Micro-SOF Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_MICRO_SOF_Msk             (_U_(0x1) << UDPHS_IEN_MICRO_SOF_Pos)          /**< (UDPHS_IEN) Micro-SOF Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_MICRO_SOF                 UDPHS_IEN_MICRO_SOF_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_MICRO_SOF_Msk instead */
#define UDPHS_IEN_INT_SOF_Pos               3                                              /**< (UDPHS_IEN) SOF Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_INT_SOF_Msk               (_U_(0x1) << UDPHS_IEN_INT_SOF_Pos)            /**< (UDPHS_IEN) SOF Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_INT_SOF                   UDPHS_IEN_INT_SOF_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_INT_SOF_Msk instead */
#define UDPHS_IEN_ENDRESET_Pos              4                                              /**< (UDPHS_IEN) End Of Reset Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_ENDRESET_Msk              (_U_(0x1) << UDPHS_IEN_ENDRESET_Pos)           /**< (UDPHS_IEN) End Of Reset Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_ENDRESET                  UDPHS_IEN_ENDRESET_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_ENDRESET_Msk instead */
#define UDPHS_IEN_WAKE_UP_Pos               5                                              /**< (UDPHS_IEN) Wake Up CPU Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_WAKE_UP_Msk               (_U_(0x1) << UDPHS_IEN_WAKE_UP_Pos)            /**< (UDPHS_IEN) Wake Up CPU Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_WAKE_UP                   UDPHS_IEN_WAKE_UP_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_WAKE_UP_Msk instead */
#define UDPHS_IEN_ENDOFRSM_Pos              6                                              /**< (UDPHS_IEN) End Of Resume Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_ENDOFRSM_Msk              (_U_(0x1) << UDPHS_IEN_ENDOFRSM_Pos)           /**< (UDPHS_IEN) End Of Resume Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_ENDOFRSM                  UDPHS_IEN_ENDOFRSM_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_ENDOFRSM_Msk instead */
#define UDPHS_IEN_UPSTR_RES_Pos             7                                              /**< (UDPHS_IEN) Upstream Resume Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_UPSTR_RES_Msk             (_U_(0x1) << UDPHS_IEN_UPSTR_RES_Pos)          /**< (UDPHS_IEN) Upstream Resume Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_UPSTR_RES                 UDPHS_IEN_UPSTR_RES_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_UPSTR_RES_Msk instead */
#define UDPHS_IEN_EPT_0_Pos                 8                                              /**< (UDPHS_IEN) Endpoint 0 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_0_Msk                 (_U_(0x1) << UDPHS_IEN_EPT_0_Pos)              /**< (UDPHS_IEN) Endpoint 0 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_0                     UDPHS_IEN_EPT_0_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_EPT_0_Msk instead */
#define UDPHS_IEN_EPT_1_Pos                 9                                              /**< (UDPHS_IEN) Endpoint 1 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_1_Msk                 (_U_(0x1) << UDPHS_IEN_EPT_1_Pos)              /**< (UDPHS_IEN) Endpoint 1 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_1                     UDPHS_IEN_EPT_1_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_EPT_1_Msk instead */
#define UDPHS_IEN_EPT_2_Pos                 10                                             /**< (UDPHS_IEN) Endpoint 2 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_2_Msk                 (_U_(0x1) << UDPHS_IEN_EPT_2_Pos)              /**< (UDPHS_IEN) Endpoint 2 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_2                     UDPHS_IEN_EPT_2_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_EPT_2_Msk instead */
#define UDPHS_IEN_EPT_3_Pos                 11                                             /**< (UDPHS_IEN) Endpoint 3 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_3_Msk                 (_U_(0x1) << UDPHS_IEN_EPT_3_Pos)              /**< (UDPHS_IEN) Endpoint 3 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_3                     UDPHS_IEN_EPT_3_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_EPT_3_Msk instead */
#define UDPHS_IEN_EPT_4_Pos                 12                                             /**< (UDPHS_IEN) Endpoint 4 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_4_Msk                 (_U_(0x1) << UDPHS_IEN_EPT_4_Pos)              /**< (UDPHS_IEN) Endpoint 4 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_4                     UDPHS_IEN_EPT_4_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_EPT_4_Msk instead */
#define UDPHS_IEN_EPT_5_Pos                 13                                             /**< (UDPHS_IEN) Endpoint 5 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_5_Msk                 (_U_(0x1) << UDPHS_IEN_EPT_5_Pos)              /**< (UDPHS_IEN) Endpoint 5 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_5                     UDPHS_IEN_EPT_5_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_EPT_5_Msk instead */
#define UDPHS_IEN_EPT_6_Pos                 14                                             /**< (UDPHS_IEN) Endpoint 6 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_6_Msk                 (_U_(0x1) << UDPHS_IEN_EPT_6_Pos)              /**< (UDPHS_IEN) Endpoint 6 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_6                     UDPHS_IEN_EPT_6_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_EPT_6_Msk instead */
#define UDPHS_IEN_EPT_7_Pos                 15                                             /**< (UDPHS_IEN) Endpoint 7 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_7_Msk                 (_U_(0x1) << UDPHS_IEN_EPT_7_Pos)              /**< (UDPHS_IEN) Endpoint 7 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_7                     UDPHS_IEN_EPT_7_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_EPT_7_Msk instead */
#define UDPHS_IEN_EPT_8_Pos                 16                                             /**< (UDPHS_IEN) Endpoint 8 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_8_Msk                 (_U_(0x1) << UDPHS_IEN_EPT_8_Pos)              /**< (UDPHS_IEN) Endpoint 8 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_8                     UDPHS_IEN_EPT_8_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_EPT_8_Msk instead */
#define UDPHS_IEN_EPT_9_Pos                 17                                             /**< (UDPHS_IEN) Endpoint 9 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_9_Msk                 (_U_(0x1) << UDPHS_IEN_EPT_9_Pos)              /**< (UDPHS_IEN) Endpoint 9 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_9                     UDPHS_IEN_EPT_9_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_EPT_9_Msk instead */
#define UDPHS_IEN_EPT_10_Pos                18                                             /**< (UDPHS_IEN) Endpoint 10 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_10_Msk                (_U_(0x1) << UDPHS_IEN_EPT_10_Pos)             /**< (UDPHS_IEN) Endpoint 10 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_10                    UDPHS_IEN_EPT_10_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_EPT_10_Msk instead */
#define UDPHS_IEN_EPT_11_Pos                19                                             /**< (UDPHS_IEN) Endpoint 11 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_11_Msk                (_U_(0x1) << UDPHS_IEN_EPT_11_Pos)             /**< (UDPHS_IEN) Endpoint 11 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_11                    UDPHS_IEN_EPT_11_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_EPT_11_Msk instead */
#define UDPHS_IEN_EPT_12_Pos                20                                             /**< (UDPHS_IEN) Endpoint 12 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_12_Msk                (_U_(0x1) << UDPHS_IEN_EPT_12_Pos)             /**< (UDPHS_IEN) Endpoint 12 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_12                    UDPHS_IEN_EPT_12_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_EPT_12_Msk instead */
#define UDPHS_IEN_EPT_13_Pos                21                                             /**< (UDPHS_IEN) Endpoint 13 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_13_Msk                (_U_(0x1) << UDPHS_IEN_EPT_13_Pos)             /**< (UDPHS_IEN) Endpoint 13 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_13                    UDPHS_IEN_EPT_13_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_EPT_13_Msk instead */
#define UDPHS_IEN_EPT_14_Pos                22                                             /**< (UDPHS_IEN) Endpoint 14 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_14_Msk                (_U_(0x1) << UDPHS_IEN_EPT_14_Pos)             /**< (UDPHS_IEN) Endpoint 14 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_14                    UDPHS_IEN_EPT_14_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_EPT_14_Msk instead */
#define UDPHS_IEN_EPT_15_Pos                23                                             /**< (UDPHS_IEN) Endpoint 15 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_15_Msk                (_U_(0x1) << UDPHS_IEN_EPT_15_Pos)             /**< (UDPHS_IEN) Endpoint 15 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_15                    UDPHS_IEN_EPT_15_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_EPT_15_Msk instead */
#define UDPHS_IEN_DMA_1_Pos                 25                                             /**< (UDPHS_IEN) DMA Channel 1 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_DMA_1_Msk                 (_U_(0x1) << UDPHS_IEN_DMA_1_Pos)              /**< (UDPHS_IEN) DMA Channel 1 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_DMA_1                     UDPHS_IEN_DMA_1_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_DMA_1_Msk instead */
#define UDPHS_IEN_DMA_2_Pos                 26                                             /**< (UDPHS_IEN) DMA Channel 2 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_DMA_2_Msk                 (_U_(0x1) << UDPHS_IEN_DMA_2_Pos)              /**< (UDPHS_IEN) DMA Channel 2 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_DMA_2                     UDPHS_IEN_DMA_2_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_DMA_2_Msk instead */
#define UDPHS_IEN_DMA_3_Pos                 27                                             /**< (UDPHS_IEN) DMA Channel 3 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_DMA_3_Msk                 (_U_(0x1) << UDPHS_IEN_DMA_3_Pos)              /**< (UDPHS_IEN) DMA Channel 3 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_DMA_3                     UDPHS_IEN_DMA_3_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_DMA_3_Msk instead */
#define UDPHS_IEN_DMA_4_Pos                 28                                             /**< (UDPHS_IEN) DMA Channel 4 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_DMA_4_Msk                 (_U_(0x1) << UDPHS_IEN_DMA_4_Pos)              /**< (UDPHS_IEN) DMA Channel 4 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_DMA_4                     UDPHS_IEN_DMA_4_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_DMA_4_Msk instead */
#define UDPHS_IEN_DMA_5_Pos                 29                                             /**< (UDPHS_IEN) DMA Channel 5 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_DMA_5_Msk                 (_U_(0x1) << UDPHS_IEN_DMA_5_Pos)              /**< (UDPHS_IEN) DMA Channel 5 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_DMA_5                     UDPHS_IEN_DMA_5_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_DMA_5_Msk instead */
#define UDPHS_IEN_DMA_6_Pos                 30                                             /**< (UDPHS_IEN) DMA Channel 6 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_DMA_6_Msk                 (_U_(0x1) << UDPHS_IEN_DMA_6_Pos)              /**< (UDPHS_IEN) DMA Channel 6 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_DMA_6                     UDPHS_IEN_DMA_6_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_DMA_6_Msk instead */
#define UDPHS_IEN_DMA_7_Pos                 31                                             /**< (UDPHS_IEN) DMA Channel 7 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_DMA_7_Msk                 (_U_(0x1) << UDPHS_IEN_DMA_7_Pos)              /**< (UDPHS_IEN) DMA Channel 7 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_DMA_7                     UDPHS_IEN_DMA_7_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_IEN_DMA_7_Msk instead */
#define UDPHS_IEN_MASK                      _U_(0xFEFFFFFE)                                /**< \deprecated (UDPHS_IEN) Register MASK  (Use UDPHS_IEN_Msk instead)  */
#define UDPHS_IEN_Msk                       _U_(0xFEFFFFFE)                                /**< (UDPHS_IEN) Register Mask  */

#define UDPHS_IEN_EPT__Pos                  8                                              /**< (UDPHS_IEN Position) Endpoint x Interrupt Enable (cleared upon USB reset) */
#define UDPHS_IEN_EPT__Msk                  (_U_(0xFFFF) << UDPHS_IEN_EPT__Pos)            /**< (UDPHS_IEN Mask) EPT_ */
#define UDPHS_IEN_EPT_(value)               (UDPHS_IEN_EPT__Msk & ((value) << UDPHS_IEN_EPT__Pos))  
#define UDPHS_IEN_DMA__Pos                  25                                             /**< (UDPHS_IEN Position) DMA Channel 7 Interrupt Enable (cleared upon USB reset) */
#define UDPHS_IEN_DMA__Msk                  (_U_(0x7F) << UDPHS_IEN_DMA__Pos)              /**< (UDPHS_IEN Mask) DMA_ */
#define UDPHS_IEN_DMA_(value)               (UDPHS_IEN_DMA__Msk & ((value) << UDPHS_IEN_DMA__Pos))  

/* -------- UDPHS_INTSTA : (UDPHS Offset: 0x14) (R/ 32) UDPHS Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SPEED:1;                   /**< bit:      0  Speed Status                             */
    uint32_t DET_SUSPD:1;               /**< bit:      1  Suspend Interrupt                        */
    uint32_t MICRO_SOF:1;               /**< bit:      2  Micro Start Of Frame Interrupt           */
    uint32_t INT_SOF:1;                 /**< bit:      3  Start Of Frame Interrupt                 */
    uint32_t ENDRESET:1;                /**< bit:      4  End Of Reset Interrupt                   */
    uint32_t WAKE_UP:1;                 /**< bit:      5  Wake Up CPU Interrupt                    */
    uint32_t ENDOFRSM:1;                /**< bit:      6  End Of Resume Interrupt                  */
    uint32_t UPSTR_RES:1;               /**< bit:      7  Upstream Resume Interrupt                */
    uint32_t EPT_0:1;                   /**< bit:      8  Endpoint 0 Interrupt (cleared upon USB reset) */
    uint32_t EPT_1:1;                   /**< bit:      9  Endpoint 1 Interrupt (cleared upon USB reset) */
    uint32_t EPT_2:1;                   /**< bit:     10  Endpoint 2 Interrupt (cleared upon USB reset) */
    uint32_t EPT_3:1;                   /**< bit:     11  Endpoint 3 Interrupt (cleared upon USB reset) */
    uint32_t EPT_4:1;                   /**< bit:     12  Endpoint 4 Interrupt (cleared upon USB reset) */
    uint32_t EPT_5:1;                   /**< bit:     13  Endpoint 5 Interrupt (cleared upon USB reset) */
    uint32_t EPT_6:1;                   /**< bit:     14  Endpoint 6 Interrupt (cleared upon USB reset) */
    uint32_t EPT_7:1;                   /**< bit:     15  Endpoint 7 Interrupt (cleared upon USB reset) */
    uint32_t EPT_8:1;                   /**< bit:     16  Endpoint 8 Interrupt (cleared upon USB reset) */
    uint32_t EPT_9:1;                   /**< bit:     17  Endpoint 9 Interrupt (cleared upon USB reset) */
    uint32_t EPT_10:1;                  /**< bit:     18  Endpoint 10 Interrupt (cleared upon USB reset) */
    uint32_t EPT_11:1;                  /**< bit:     19  Endpoint 11 Interrupt (cleared upon USB reset) */
    uint32_t EPT_12:1;                  /**< bit:     20  Endpoint 12 Interrupt (cleared upon USB reset) */
    uint32_t EPT_13:1;                  /**< bit:     21  Endpoint 13 Interrupt (cleared upon USB reset) */
    uint32_t EPT_14:1;                  /**< bit:     22  Endpoint 14 Interrupt (cleared upon USB reset) */
    uint32_t EPT_15:1;                  /**< bit:     23  Endpoint 15 Interrupt (cleared upon USB reset) */
    uint32_t :1;                        /**< bit:     24  Reserved */
    uint32_t DMA_1:1;                   /**< bit:     25  DMA Channel 1 Interrupt                  */
    uint32_t DMA_2:1;                   /**< bit:     26  DMA Channel 2 Interrupt                  */
    uint32_t DMA_3:1;                   /**< bit:     27  DMA Channel 3 Interrupt                  */
    uint32_t DMA_4:1;                   /**< bit:     28  DMA Channel 4 Interrupt                  */
    uint32_t DMA_5:1;                   /**< bit:     29  DMA Channel 5 Interrupt                  */
    uint32_t DMA_6:1;                   /**< bit:     30  DMA Channel 6 Interrupt                  */
    uint32_t DMA_7:1;                   /**< bit:     31  DMA Channel 7 Interrupt                  */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t EPT_:16;                   /**< bit:  8..23  Endpoint x Interrupt (cleared upon USB reset) */
    uint32_t :1;                        /**< bit:     24  Reserved */
    uint32_t DMA_:7;                    /**< bit: 25..31  DMA Channel 7 Interrupt                  */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} UDPHS_INTSTA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UDPHS_INTSTA_OFFSET                 (0x14)                                        /**<  (UDPHS_INTSTA) UDPHS Interrupt Status Register  Offset */

#define UDPHS_INTSTA_SPEED_Pos              0                                              /**< (UDPHS_INTSTA) Speed Status Position */
#define UDPHS_INTSTA_SPEED_Msk              (_U_(0x1) << UDPHS_INTSTA_SPEED_Pos)           /**< (UDPHS_INTSTA) Speed Status Mask */
#define UDPHS_INTSTA_SPEED                  UDPHS_INTSTA_SPEED_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_SPEED_Msk instead */
#define UDPHS_INTSTA_DET_SUSPD_Pos          1                                              /**< (UDPHS_INTSTA) Suspend Interrupt Position */
#define UDPHS_INTSTA_DET_SUSPD_Msk          (_U_(0x1) << UDPHS_INTSTA_DET_SUSPD_Pos)       /**< (UDPHS_INTSTA) Suspend Interrupt Mask */
#define UDPHS_INTSTA_DET_SUSPD              UDPHS_INTSTA_DET_SUSPD_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_DET_SUSPD_Msk instead */
#define UDPHS_INTSTA_MICRO_SOF_Pos          2                                              /**< (UDPHS_INTSTA) Micro Start Of Frame Interrupt Position */
#define UDPHS_INTSTA_MICRO_SOF_Msk          (_U_(0x1) << UDPHS_INTSTA_MICRO_SOF_Pos)       /**< (UDPHS_INTSTA) Micro Start Of Frame Interrupt Mask */
#define UDPHS_INTSTA_MICRO_SOF              UDPHS_INTSTA_MICRO_SOF_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_MICRO_SOF_Msk instead */
#define UDPHS_INTSTA_INT_SOF_Pos            3                                              /**< (UDPHS_INTSTA) Start Of Frame Interrupt Position */
#define UDPHS_INTSTA_INT_SOF_Msk            (_U_(0x1) << UDPHS_INTSTA_INT_SOF_Pos)         /**< (UDPHS_INTSTA) Start Of Frame Interrupt Mask */
#define UDPHS_INTSTA_INT_SOF                UDPHS_INTSTA_INT_SOF_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_INT_SOF_Msk instead */
#define UDPHS_INTSTA_ENDRESET_Pos           4                                              /**< (UDPHS_INTSTA) End Of Reset Interrupt Position */
#define UDPHS_INTSTA_ENDRESET_Msk           (_U_(0x1) << UDPHS_INTSTA_ENDRESET_Pos)        /**< (UDPHS_INTSTA) End Of Reset Interrupt Mask */
#define UDPHS_INTSTA_ENDRESET               UDPHS_INTSTA_ENDRESET_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_ENDRESET_Msk instead */
#define UDPHS_INTSTA_WAKE_UP_Pos            5                                              /**< (UDPHS_INTSTA) Wake Up CPU Interrupt Position */
#define UDPHS_INTSTA_WAKE_UP_Msk            (_U_(0x1) << UDPHS_INTSTA_WAKE_UP_Pos)         /**< (UDPHS_INTSTA) Wake Up CPU Interrupt Mask */
#define UDPHS_INTSTA_WAKE_UP                UDPHS_INTSTA_WAKE_UP_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_WAKE_UP_Msk instead */
#define UDPHS_INTSTA_ENDOFRSM_Pos           6                                              /**< (UDPHS_INTSTA) End Of Resume Interrupt Position */
#define UDPHS_INTSTA_ENDOFRSM_Msk           (_U_(0x1) << UDPHS_INTSTA_ENDOFRSM_Pos)        /**< (UDPHS_INTSTA) End Of Resume Interrupt Mask */
#define UDPHS_INTSTA_ENDOFRSM               UDPHS_INTSTA_ENDOFRSM_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_ENDOFRSM_Msk instead */
#define UDPHS_INTSTA_UPSTR_RES_Pos          7                                              /**< (UDPHS_INTSTA) Upstream Resume Interrupt Position */
#define UDPHS_INTSTA_UPSTR_RES_Msk          (_U_(0x1) << UDPHS_INTSTA_UPSTR_RES_Pos)       /**< (UDPHS_INTSTA) Upstream Resume Interrupt Mask */
#define UDPHS_INTSTA_UPSTR_RES              UDPHS_INTSTA_UPSTR_RES_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_UPSTR_RES_Msk instead */
#define UDPHS_INTSTA_EPT_0_Pos              8                                              /**< (UDPHS_INTSTA) Endpoint 0 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_0_Msk              (_U_(0x1) << UDPHS_INTSTA_EPT_0_Pos)           /**< (UDPHS_INTSTA) Endpoint 0 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_0                  UDPHS_INTSTA_EPT_0_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_EPT_0_Msk instead */
#define UDPHS_INTSTA_EPT_1_Pos              9                                              /**< (UDPHS_INTSTA) Endpoint 1 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_1_Msk              (_U_(0x1) << UDPHS_INTSTA_EPT_1_Pos)           /**< (UDPHS_INTSTA) Endpoint 1 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_1                  UDPHS_INTSTA_EPT_1_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_EPT_1_Msk instead */
#define UDPHS_INTSTA_EPT_2_Pos              10                                             /**< (UDPHS_INTSTA) Endpoint 2 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_2_Msk              (_U_(0x1) << UDPHS_INTSTA_EPT_2_Pos)           /**< (UDPHS_INTSTA) Endpoint 2 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_2                  UDPHS_INTSTA_EPT_2_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_EPT_2_Msk instead */
#define UDPHS_INTSTA_EPT_3_Pos              11                                             /**< (UDPHS_INTSTA) Endpoint 3 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_3_Msk              (_U_(0x1) << UDPHS_INTSTA_EPT_3_Pos)           /**< (UDPHS_INTSTA) Endpoint 3 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_3                  UDPHS_INTSTA_EPT_3_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_EPT_3_Msk instead */
#define UDPHS_INTSTA_EPT_4_Pos              12                                             /**< (UDPHS_INTSTA) Endpoint 4 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_4_Msk              (_U_(0x1) << UDPHS_INTSTA_EPT_4_Pos)           /**< (UDPHS_INTSTA) Endpoint 4 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_4                  UDPHS_INTSTA_EPT_4_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_EPT_4_Msk instead */
#define UDPHS_INTSTA_EPT_5_Pos              13                                             /**< (UDPHS_INTSTA) Endpoint 5 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_5_Msk              (_U_(0x1) << UDPHS_INTSTA_EPT_5_Pos)           /**< (UDPHS_INTSTA) Endpoint 5 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_5                  UDPHS_INTSTA_EPT_5_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_EPT_5_Msk instead */
#define UDPHS_INTSTA_EPT_6_Pos              14                                             /**< (UDPHS_INTSTA) Endpoint 6 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_6_Msk              (_U_(0x1) << UDPHS_INTSTA_EPT_6_Pos)           /**< (UDPHS_INTSTA) Endpoint 6 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_6                  UDPHS_INTSTA_EPT_6_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_EPT_6_Msk instead */
#define UDPHS_INTSTA_EPT_7_Pos              15                                             /**< (UDPHS_INTSTA) Endpoint 7 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_7_Msk              (_U_(0x1) << UDPHS_INTSTA_EPT_7_Pos)           /**< (UDPHS_INTSTA) Endpoint 7 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_7                  UDPHS_INTSTA_EPT_7_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_EPT_7_Msk instead */
#define UDPHS_INTSTA_EPT_8_Pos              16                                             /**< (UDPHS_INTSTA) Endpoint 8 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_8_Msk              (_U_(0x1) << UDPHS_INTSTA_EPT_8_Pos)           /**< (UDPHS_INTSTA) Endpoint 8 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_8                  UDPHS_INTSTA_EPT_8_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_EPT_8_Msk instead */
#define UDPHS_INTSTA_EPT_9_Pos              17                                             /**< (UDPHS_INTSTA) Endpoint 9 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_9_Msk              (_U_(0x1) << UDPHS_INTSTA_EPT_9_Pos)           /**< (UDPHS_INTSTA) Endpoint 9 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_9                  UDPHS_INTSTA_EPT_9_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_EPT_9_Msk instead */
#define UDPHS_INTSTA_EPT_10_Pos             18                                             /**< (UDPHS_INTSTA) Endpoint 10 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_10_Msk             (_U_(0x1) << UDPHS_INTSTA_EPT_10_Pos)          /**< (UDPHS_INTSTA) Endpoint 10 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_10                 UDPHS_INTSTA_EPT_10_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_EPT_10_Msk instead */
#define UDPHS_INTSTA_EPT_11_Pos             19                                             /**< (UDPHS_INTSTA) Endpoint 11 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_11_Msk             (_U_(0x1) << UDPHS_INTSTA_EPT_11_Pos)          /**< (UDPHS_INTSTA) Endpoint 11 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_11                 UDPHS_INTSTA_EPT_11_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_EPT_11_Msk instead */
#define UDPHS_INTSTA_EPT_12_Pos             20                                             /**< (UDPHS_INTSTA) Endpoint 12 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_12_Msk             (_U_(0x1) << UDPHS_INTSTA_EPT_12_Pos)          /**< (UDPHS_INTSTA) Endpoint 12 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_12                 UDPHS_INTSTA_EPT_12_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_EPT_12_Msk instead */
#define UDPHS_INTSTA_EPT_13_Pos             21                                             /**< (UDPHS_INTSTA) Endpoint 13 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_13_Msk             (_U_(0x1) << UDPHS_INTSTA_EPT_13_Pos)          /**< (UDPHS_INTSTA) Endpoint 13 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_13                 UDPHS_INTSTA_EPT_13_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_EPT_13_Msk instead */
#define UDPHS_INTSTA_EPT_14_Pos             22                                             /**< (UDPHS_INTSTA) Endpoint 14 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_14_Msk             (_U_(0x1) << UDPHS_INTSTA_EPT_14_Pos)          /**< (UDPHS_INTSTA) Endpoint 14 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_14                 UDPHS_INTSTA_EPT_14_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_EPT_14_Msk instead */
#define UDPHS_INTSTA_EPT_15_Pos             23                                             /**< (UDPHS_INTSTA) Endpoint 15 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_15_Msk             (_U_(0x1) << UDPHS_INTSTA_EPT_15_Pos)          /**< (UDPHS_INTSTA) Endpoint 15 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_15                 UDPHS_INTSTA_EPT_15_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_EPT_15_Msk instead */
#define UDPHS_INTSTA_DMA_1_Pos              25                                             /**< (UDPHS_INTSTA) DMA Channel 1 Interrupt Position */
#define UDPHS_INTSTA_DMA_1_Msk              (_U_(0x1) << UDPHS_INTSTA_DMA_1_Pos)           /**< (UDPHS_INTSTA) DMA Channel 1 Interrupt Mask */
#define UDPHS_INTSTA_DMA_1                  UDPHS_INTSTA_DMA_1_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_DMA_1_Msk instead */
#define UDPHS_INTSTA_DMA_2_Pos              26                                             /**< (UDPHS_INTSTA) DMA Channel 2 Interrupt Position */
#define UDPHS_INTSTA_DMA_2_Msk              (_U_(0x1) << UDPHS_INTSTA_DMA_2_Pos)           /**< (UDPHS_INTSTA) DMA Channel 2 Interrupt Mask */
#define UDPHS_INTSTA_DMA_2                  UDPHS_INTSTA_DMA_2_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_DMA_2_Msk instead */
#define UDPHS_INTSTA_DMA_3_Pos              27                                             /**< (UDPHS_INTSTA) DMA Channel 3 Interrupt Position */
#define UDPHS_INTSTA_DMA_3_Msk              (_U_(0x1) << UDPHS_INTSTA_DMA_3_Pos)           /**< (UDPHS_INTSTA) DMA Channel 3 Interrupt Mask */
#define UDPHS_INTSTA_DMA_3                  UDPHS_INTSTA_DMA_3_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_DMA_3_Msk instead */
#define UDPHS_INTSTA_DMA_4_Pos              28                                             /**< (UDPHS_INTSTA) DMA Channel 4 Interrupt Position */
#define UDPHS_INTSTA_DMA_4_Msk              (_U_(0x1) << UDPHS_INTSTA_DMA_4_Pos)           /**< (UDPHS_INTSTA) DMA Channel 4 Interrupt Mask */
#define UDPHS_INTSTA_DMA_4                  UDPHS_INTSTA_DMA_4_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_DMA_4_Msk instead */
#define UDPHS_INTSTA_DMA_5_Pos              29                                             /**< (UDPHS_INTSTA) DMA Channel 5 Interrupt Position */
#define UDPHS_INTSTA_DMA_5_Msk              (_U_(0x1) << UDPHS_INTSTA_DMA_5_Pos)           /**< (UDPHS_INTSTA) DMA Channel 5 Interrupt Mask */
#define UDPHS_INTSTA_DMA_5                  UDPHS_INTSTA_DMA_5_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_DMA_5_Msk instead */
#define UDPHS_INTSTA_DMA_6_Pos              30                                             /**< (UDPHS_INTSTA) DMA Channel 6 Interrupt Position */
#define UDPHS_INTSTA_DMA_6_Msk              (_U_(0x1) << UDPHS_INTSTA_DMA_6_Pos)           /**< (UDPHS_INTSTA) DMA Channel 6 Interrupt Mask */
#define UDPHS_INTSTA_DMA_6                  UDPHS_INTSTA_DMA_6_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_DMA_6_Msk instead */
#define UDPHS_INTSTA_DMA_7_Pos              31                                             /**< (UDPHS_INTSTA) DMA Channel 7 Interrupt Position */
#define UDPHS_INTSTA_DMA_7_Msk              (_U_(0x1) << UDPHS_INTSTA_DMA_7_Pos)           /**< (UDPHS_INTSTA) DMA Channel 7 Interrupt Mask */
#define UDPHS_INTSTA_DMA_7                  UDPHS_INTSTA_DMA_7_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_INTSTA_DMA_7_Msk instead */
#define UDPHS_INTSTA_MASK                   _U_(0xFEFFFFFF)                                /**< \deprecated (UDPHS_INTSTA) Register MASK  (Use UDPHS_INTSTA_Msk instead)  */
#define UDPHS_INTSTA_Msk                    _U_(0xFEFFFFFF)                                /**< (UDPHS_INTSTA) Register Mask  */

#define UDPHS_INTSTA_EPT__Pos               8                                              /**< (UDPHS_INTSTA Position) Endpoint x Interrupt (cleared upon USB reset) */
#define UDPHS_INTSTA_EPT__Msk               (_U_(0xFFFF) << UDPHS_INTSTA_EPT__Pos)         /**< (UDPHS_INTSTA Mask) EPT_ */
#define UDPHS_INTSTA_EPT_(value)            (UDPHS_INTSTA_EPT__Msk & ((value) << UDPHS_INTSTA_EPT__Pos))  
#define UDPHS_INTSTA_DMA__Pos               25                                             /**< (UDPHS_INTSTA Position) DMA Channel 7 Interrupt */
#define UDPHS_INTSTA_DMA__Msk               (_U_(0x7F) << UDPHS_INTSTA_DMA__Pos)           /**< (UDPHS_INTSTA Mask) DMA_ */
#define UDPHS_INTSTA_DMA_(value)            (UDPHS_INTSTA_DMA__Msk & ((value) << UDPHS_INTSTA_DMA__Pos))  

/* -------- UDPHS_CLRINT : (UDPHS Offset: 0x18) (/W 32) UDPHS Clear Interrupt Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :1;                        /**< bit:      0  Reserved */
    uint32_t DET_SUSPD:1;               /**< bit:      1  Suspend Interrupt Clear                  */
    uint32_t MICRO_SOF:1;               /**< bit:      2  Micro Start Of Frame Interrupt Clear     */
    uint32_t INT_SOF:1;                 /**< bit:      3  Start Of Frame Interrupt Clear           */
    uint32_t ENDRESET:1;                /**< bit:      4  End Of Reset Interrupt Clear             */
    uint32_t WAKE_UP:1;                 /**< bit:      5  Wake Up CPU Interrupt Clear              */
    uint32_t ENDOFRSM:1;                /**< bit:      6  End Of Resume Interrupt Clear            */
    uint32_t UPSTR_RES:1;               /**< bit:      7  Upstream Resume Interrupt Clear          */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UDPHS_CLRINT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UDPHS_CLRINT_OFFSET                 (0x18)                                        /**<  (UDPHS_CLRINT) UDPHS Clear Interrupt Register  Offset */

#define UDPHS_CLRINT_DET_SUSPD_Pos          1                                              /**< (UDPHS_CLRINT) Suspend Interrupt Clear Position */
#define UDPHS_CLRINT_DET_SUSPD_Msk          (_U_(0x1) << UDPHS_CLRINT_DET_SUSPD_Pos)       /**< (UDPHS_CLRINT) Suspend Interrupt Clear Mask */
#define UDPHS_CLRINT_DET_SUSPD              UDPHS_CLRINT_DET_SUSPD_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_CLRINT_DET_SUSPD_Msk instead */
#define UDPHS_CLRINT_MICRO_SOF_Pos          2                                              /**< (UDPHS_CLRINT) Micro Start Of Frame Interrupt Clear Position */
#define UDPHS_CLRINT_MICRO_SOF_Msk          (_U_(0x1) << UDPHS_CLRINT_MICRO_SOF_Pos)       /**< (UDPHS_CLRINT) Micro Start Of Frame Interrupt Clear Mask */
#define UDPHS_CLRINT_MICRO_SOF              UDPHS_CLRINT_MICRO_SOF_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_CLRINT_MICRO_SOF_Msk instead */
#define UDPHS_CLRINT_INT_SOF_Pos            3                                              /**< (UDPHS_CLRINT) Start Of Frame Interrupt Clear Position */
#define UDPHS_CLRINT_INT_SOF_Msk            (_U_(0x1) << UDPHS_CLRINT_INT_SOF_Pos)         /**< (UDPHS_CLRINT) Start Of Frame Interrupt Clear Mask */
#define UDPHS_CLRINT_INT_SOF                UDPHS_CLRINT_INT_SOF_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_CLRINT_INT_SOF_Msk instead */
#define UDPHS_CLRINT_ENDRESET_Pos           4                                              /**< (UDPHS_CLRINT) End Of Reset Interrupt Clear Position */
#define UDPHS_CLRINT_ENDRESET_Msk           (_U_(0x1) << UDPHS_CLRINT_ENDRESET_Pos)        /**< (UDPHS_CLRINT) End Of Reset Interrupt Clear Mask */
#define UDPHS_CLRINT_ENDRESET               UDPHS_CLRINT_ENDRESET_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_CLRINT_ENDRESET_Msk instead */
#define UDPHS_CLRINT_WAKE_UP_Pos            5                                              /**< (UDPHS_CLRINT) Wake Up CPU Interrupt Clear Position */
#define UDPHS_CLRINT_WAKE_UP_Msk            (_U_(0x1) << UDPHS_CLRINT_WAKE_UP_Pos)         /**< (UDPHS_CLRINT) Wake Up CPU Interrupt Clear Mask */
#define UDPHS_CLRINT_WAKE_UP                UDPHS_CLRINT_WAKE_UP_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_CLRINT_WAKE_UP_Msk instead */
#define UDPHS_CLRINT_ENDOFRSM_Pos           6                                              /**< (UDPHS_CLRINT) End Of Resume Interrupt Clear Position */
#define UDPHS_CLRINT_ENDOFRSM_Msk           (_U_(0x1) << UDPHS_CLRINT_ENDOFRSM_Pos)        /**< (UDPHS_CLRINT) End Of Resume Interrupt Clear Mask */
#define UDPHS_CLRINT_ENDOFRSM               UDPHS_CLRINT_ENDOFRSM_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_CLRINT_ENDOFRSM_Msk instead */
#define UDPHS_CLRINT_UPSTR_RES_Pos          7                                              /**< (UDPHS_CLRINT) Upstream Resume Interrupt Clear Position */
#define UDPHS_CLRINT_UPSTR_RES_Msk          (_U_(0x1) << UDPHS_CLRINT_UPSTR_RES_Pos)       /**< (UDPHS_CLRINT) Upstream Resume Interrupt Clear Mask */
#define UDPHS_CLRINT_UPSTR_RES              UDPHS_CLRINT_UPSTR_RES_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_CLRINT_UPSTR_RES_Msk instead */
#define UDPHS_CLRINT_MASK                   _U_(0xFE)                                      /**< \deprecated (UDPHS_CLRINT) Register MASK  (Use UDPHS_CLRINT_Msk instead)  */
#define UDPHS_CLRINT_Msk                    _U_(0xFE)                                      /**< (UDPHS_CLRINT) Register Mask  */


/* -------- UDPHS_EPTRST : (UDPHS Offset: 0x1c) (/W 32) UDPHS Endpoints Reset Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t EPT_0:1;                   /**< bit:      0  Endpoint 0 Reset                         */
    uint32_t EPT_1:1;                   /**< bit:      1  Endpoint 1 Reset                         */
    uint32_t EPT_2:1;                   /**< bit:      2  Endpoint 2 Reset                         */
    uint32_t EPT_3:1;                   /**< bit:      3  Endpoint 3 Reset                         */
    uint32_t EPT_4:1;                   /**< bit:      4  Endpoint 4 Reset                         */
    uint32_t EPT_5:1;                   /**< bit:      5  Endpoint 5 Reset                         */
    uint32_t EPT_6:1;                   /**< bit:      6  Endpoint 6 Reset                         */
    uint32_t EPT_7:1;                   /**< bit:      7  Endpoint 7 Reset                         */
    uint32_t EPT_8:1;                   /**< bit:      8  Endpoint 8 Reset                         */
    uint32_t EPT_9:1;                   /**< bit:      9  Endpoint 9 Reset                         */
    uint32_t EPT_10:1;                  /**< bit:     10  Endpoint 10 Reset                        */
    uint32_t EPT_11:1;                  /**< bit:     11  Endpoint 11 Reset                        */
    uint32_t EPT_12:1;                  /**< bit:     12  Endpoint 12 Reset                        */
    uint32_t EPT_13:1;                  /**< bit:     13  Endpoint 13 Reset                        */
    uint32_t EPT_14:1;                  /**< bit:     14  Endpoint 14 Reset                        */
    uint32_t EPT_15:1;                  /**< bit:     15  Endpoint 15 Reset                        */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t EPT_:16;                   /**< bit:  0..15  Endpoint x5 Reset                        */
    uint32_t :16;                       /**< bit: 16..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} UDPHS_EPTRST_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UDPHS_EPTRST_OFFSET                 (0x1C)                                        /**<  (UDPHS_EPTRST) UDPHS Endpoints Reset Register  Offset */

#define UDPHS_EPTRST_EPT_0_Pos              0                                              /**< (UDPHS_EPTRST) Endpoint 0 Reset Position */
#define UDPHS_EPTRST_EPT_0_Msk              (_U_(0x1) << UDPHS_EPTRST_EPT_0_Pos)           /**< (UDPHS_EPTRST) Endpoint 0 Reset Mask */
#define UDPHS_EPTRST_EPT_0                  UDPHS_EPTRST_EPT_0_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTRST_EPT_0_Msk instead */
#define UDPHS_EPTRST_EPT_1_Pos              1                                              /**< (UDPHS_EPTRST) Endpoint 1 Reset Position */
#define UDPHS_EPTRST_EPT_1_Msk              (_U_(0x1) << UDPHS_EPTRST_EPT_1_Pos)           /**< (UDPHS_EPTRST) Endpoint 1 Reset Mask */
#define UDPHS_EPTRST_EPT_1                  UDPHS_EPTRST_EPT_1_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTRST_EPT_1_Msk instead */
#define UDPHS_EPTRST_EPT_2_Pos              2                                              /**< (UDPHS_EPTRST) Endpoint 2 Reset Position */
#define UDPHS_EPTRST_EPT_2_Msk              (_U_(0x1) << UDPHS_EPTRST_EPT_2_Pos)           /**< (UDPHS_EPTRST) Endpoint 2 Reset Mask */
#define UDPHS_EPTRST_EPT_2                  UDPHS_EPTRST_EPT_2_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTRST_EPT_2_Msk instead */
#define UDPHS_EPTRST_EPT_3_Pos              3                                              /**< (UDPHS_EPTRST) Endpoint 3 Reset Position */
#define UDPHS_EPTRST_EPT_3_Msk              (_U_(0x1) << UDPHS_EPTRST_EPT_3_Pos)           /**< (UDPHS_EPTRST) Endpoint 3 Reset Mask */
#define UDPHS_EPTRST_EPT_3                  UDPHS_EPTRST_EPT_3_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTRST_EPT_3_Msk instead */
#define UDPHS_EPTRST_EPT_4_Pos              4                                              /**< (UDPHS_EPTRST) Endpoint 4 Reset Position */
#define UDPHS_EPTRST_EPT_4_Msk              (_U_(0x1) << UDPHS_EPTRST_EPT_4_Pos)           /**< (UDPHS_EPTRST) Endpoint 4 Reset Mask */
#define UDPHS_EPTRST_EPT_4                  UDPHS_EPTRST_EPT_4_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTRST_EPT_4_Msk instead */
#define UDPHS_EPTRST_EPT_5_Pos              5                                              /**< (UDPHS_EPTRST) Endpoint 5 Reset Position */
#define UDPHS_EPTRST_EPT_5_Msk              (_U_(0x1) << UDPHS_EPTRST_EPT_5_Pos)           /**< (UDPHS_EPTRST) Endpoint 5 Reset Mask */
#define UDPHS_EPTRST_EPT_5                  UDPHS_EPTRST_EPT_5_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTRST_EPT_5_Msk instead */
#define UDPHS_EPTRST_EPT_6_Pos              6                                              /**< (UDPHS_EPTRST) Endpoint 6 Reset Position */
#define UDPHS_EPTRST_EPT_6_Msk              (_U_(0x1) << UDPHS_EPTRST_EPT_6_Pos)           /**< (UDPHS_EPTRST) Endpoint 6 Reset Mask */
#define UDPHS_EPTRST_EPT_6                  UDPHS_EPTRST_EPT_6_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTRST_EPT_6_Msk instead */
#define UDPHS_EPTRST_EPT_7_Pos              7                                              /**< (UDPHS_EPTRST) Endpoint 7 Reset Position */
#define UDPHS_EPTRST_EPT_7_Msk              (_U_(0x1) << UDPHS_EPTRST_EPT_7_Pos)           /**< (UDPHS_EPTRST) Endpoint 7 Reset Mask */
#define UDPHS_EPTRST_EPT_7                  UDPHS_EPTRST_EPT_7_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTRST_EPT_7_Msk instead */
#define UDPHS_EPTRST_EPT_8_Pos              8                                              /**< (UDPHS_EPTRST) Endpoint 8 Reset Position */
#define UDPHS_EPTRST_EPT_8_Msk              (_U_(0x1) << UDPHS_EPTRST_EPT_8_Pos)           /**< (UDPHS_EPTRST) Endpoint 8 Reset Mask */
#define UDPHS_EPTRST_EPT_8                  UDPHS_EPTRST_EPT_8_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTRST_EPT_8_Msk instead */
#define UDPHS_EPTRST_EPT_9_Pos              9                                              /**< (UDPHS_EPTRST) Endpoint 9 Reset Position */
#define UDPHS_EPTRST_EPT_9_Msk              (_U_(0x1) << UDPHS_EPTRST_EPT_9_Pos)           /**< (UDPHS_EPTRST) Endpoint 9 Reset Mask */
#define UDPHS_EPTRST_EPT_9                  UDPHS_EPTRST_EPT_9_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTRST_EPT_9_Msk instead */
#define UDPHS_EPTRST_EPT_10_Pos             10                                             /**< (UDPHS_EPTRST) Endpoint 10 Reset Position */
#define UDPHS_EPTRST_EPT_10_Msk             (_U_(0x1) << UDPHS_EPTRST_EPT_10_Pos)          /**< (UDPHS_EPTRST) Endpoint 10 Reset Mask */
#define UDPHS_EPTRST_EPT_10                 UDPHS_EPTRST_EPT_10_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTRST_EPT_10_Msk instead */
#define UDPHS_EPTRST_EPT_11_Pos             11                                             /**< (UDPHS_EPTRST) Endpoint 11 Reset Position */
#define UDPHS_EPTRST_EPT_11_Msk             (_U_(0x1) << UDPHS_EPTRST_EPT_11_Pos)          /**< (UDPHS_EPTRST) Endpoint 11 Reset Mask */
#define UDPHS_EPTRST_EPT_11                 UDPHS_EPTRST_EPT_11_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTRST_EPT_11_Msk instead */
#define UDPHS_EPTRST_EPT_12_Pos             12                                             /**< (UDPHS_EPTRST) Endpoint 12 Reset Position */
#define UDPHS_EPTRST_EPT_12_Msk             (_U_(0x1) << UDPHS_EPTRST_EPT_12_Pos)          /**< (UDPHS_EPTRST) Endpoint 12 Reset Mask */
#define UDPHS_EPTRST_EPT_12                 UDPHS_EPTRST_EPT_12_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTRST_EPT_12_Msk instead */
#define UDPHS_EPTRST_EPT_13_Pos             13                                             /**< (UDPHS_EPTRST) Endpoint 13 Reset Position */
#define UDPHS_EPTRST_EPT_13_Msk             (_U_(0x1) << UDPHS_EPTRST_EPT_13_Pos)          /**< (UDPHS_EPTRST) Endpoint 13 Reset Mask */
#define UDPHS_EPTRST_EPT_13                 UDPHS_EPTRST_EPT_13_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTRST_EPT_13_Msk instead */
#define UDPHS_EPTRST_EPT_14_Pos             14                                             /**< (UDPHS_EPTRST) Endpoint 14 Reset Position */
#define UDPHS_EPTRST_EPT_14_Msk             (_U_(0x1) << UDPHS_EPTRST_EPT_14_Pos)          /**< (UDPHS_EPTRST) Endpoint 14 Reset Mask */
#define UDPHS_EPTRST_EPT_14                 UDPHS_EPTRST_EPT_14_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTRST_EPT_14_Msk instead */
#define UDPHS_EPTRST_EPT_15_Pos             15                                             /**< (UDPHS_EPTRST) Endpoint 15 Reset Position */
#define UDPHS_EPTRST_EPT_15_Msk             (_U_(0x1) << UDPHS_EPTRST_EPT_15_Pos)          /**< (UDPHS_EPTRST) Endpoint 15 Reset Mask */
#define UDPHS_EPTRST_EPT_15                 UDPHS_EPTRST_EPT_15_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_EPTRST_EPT_15_Msk instead */
#define UDPHS_EPTRST_MASK                   _U_(0xFFFF)                                    /**< \deprecated (UDPHS_EPTRST) Register MASK  (Use UDPHS_EPTRST_Msk instead)  */
#define UDPHS_EPTRST_Msk                    _U_(0xFFFF)                                    /**< (UDPHS_EPTRST) Register Mask  */

#define UDPHS_EPTRST_EPT__Pos               0                                              /**< (UDPHS_EPTRST Position) Endpoint x5 Reset */
#define UDPHS_EPTRST_EPT__Msk               (_U_(0xFFFF) << UDPHS_EPTRST_EPT__Pos)         /**< (UDPHS_EPTRST Mask) EPT_ */
#define UDPHS_EPTRST_EPT_(value)            (UDPHS_EPTRST_EPT__Msk & ((value) << UDPHS_EPTRST_EPT__Pos))  

/* -------- UDPHS_TST : (UDPHS Offset: 0xe0) (R/W 32) UDPHS Test Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SPEED_CFG:2;               /**< bit:   0..1  Speed Configuration                      */
    uint32_t TST_J:1;                   /**< bit:      2  Test J Mode                              */
    uint32_t TST_K:1;                   /**< bit:      3  Test K Mode                              */
    uint32_t TST_PKT:1;                 /**< bit:      4  Test Packet Mode                         */
    uint32_t OPMODE2:1;                 /**< bit:      5  OpMode2                                  */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :5;                        /**< bit:   0..4  Reserved */
    uint32_t OPMODE:1;                  /**< bit:      5  OpMode2                                  */
    uint32_t :26;                       /**< bit:  6..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} UDPHS_TST_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UDPHS_TST_OFFSET                    (0xE0)                                        /**<  (UDPHS_TST) UDPHS Test Register  Offset */

#define UDPHS_TST_SPEED_CFG_Pos             0                                              /**< (UDPHS_TST) Speed Configuration Position */
#define UDPHS_TST_SPEED_CFG_Msk             (_U_(0x3) << UDPHS_TST_SPEED_CFG_Pos)          /**< (UDPHS_TST) Speed Configuration Mask */
#define UDPHS_TST_SPEED_CFG(value)          (UDPHS_TST_SPEED_CFG_Msk & ((value) << UDPHS_TST_SPEED_CFG_Pos))
#define   UDPHS_TST_SPEED_CFG_NORMAL_Val    _U_(0x0)                                       /**< (UDPHS_TST) Normal mode: The macro is in Full Speed mode, ready to make a High Speed identification, if the host supports it and then to automatically switch to High Speed mode.  */
#define   UDPHS_TST_SPEED_CFG_HIGH_SPEED_Val _U_(0x2)                                       /**< (UDPHS_TST) Force High Speed: Set this value to force the hardware to work in High Speed mode. Only for debug or test purpose.  */
#define   UDPHS_TST_SPEED_CFG_FULL_SPEED_Val _U_(0x3)                                       /**< (UDPHS_TST) Force Full Speed: Set this value to force the hardware to work only in Full Speed mode. In this configuration, the macro will not respond to a High Speed reset handshake.  */
#define UDPHS_TST_SPEED_CFG_NORMAL          (UDPHS_TST_SPEED_CFG_NORMAL_Val << UDPHS_TST_SPEED_CFG_Pos)  /**< (UDPHS_TST) Normal mode: The macro is in Full Speed mode, ready to make a High Speed identification, if the host supports it and then to automatically switch to High Speed mode. Position  */
#define UDPHS_TST_SPEED_CFG_HIGH_SPEED      (UDPHS_TST_SPEED_CFG_HIGH_SPEED_Val << UDPHS_TST_SPEED_CFG_Pos)  /**< (UDPHS_TST) Force High Speed: Set this value to force the hardware to work in High Speed mode. Only for debug or test purpose. Position  */
#define UDPHS_TST_SPEED_CFG_FULL_SPEED      (UDPHS_TST_SPEED_CFG_FULL_SPEED_Val << UDPHS_TST_SPEED_CFG_Pos)  /**< (UDPHS_TST) Force Full Speed: Set this value to force the hardware to work only in Full Speed mode. In this configuration, the macro will not respond to a High Speed reset handshake. Position  */
#define UDPHS_TST_TST_J_Pos                 2                                              /**< (UDPHS_TST) Test J Mode Position */
#define UDPHS_TST_TST_J_Msk                 (_U_(0x1) << UDPHS_TST_TST_J_Pos)              /**< (UDPHS_TST) Test J Mode Mask */
#define UDPHS_TST_TST_J                     UDPHS_TST_TST_J_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_TST_TST_J_Msk instead */
#define UDPHS_TST_TST_K_Pos                 3                                              /**< (UDPHS_TST) Test K Mode Position */
#define UDPHS_TST_TST_K_Msk                 (_U_(0x1) << UDPHS_TST_TST_K_Pos)              /**< (UDPHS_TST) Test K Mode Mask */
#define UDPHS_TST_TST_K                     UDPHS_TST_TST_K_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_TST_TST_K_Msk instead */
#define UDPHS_TST_TST_PKT_Pos               4                                              /**< (UDPHS_TST) Test Packet Mode Position */
#define UDPHS_TST_TST_PKT_Msk               (_U_(0x1) << UDPHS_TST_TST_PKT_Pos)            /**< (UDPHS_TST) Test Packet Mode Mask */
#define UDPHS_TST_TST_PKT                   UDPHS_TST_TST_PKT_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_TST_TST_PKT_Msk instead */
#define UDPHS_TST_OPMODE2_Pos               5                                              /**< (UDPHS_TST) OpMode2 Position */
#define UDPHS_TST_OPMODE2_Msk               (_U_(0x1) << UDPHS_TST_OPMODE2_Pos)            /**< (UDPHS_TST) OpMode2 Mask */
#define UDPHS_TST_OPMODE2                   UDPHS_TST_OPMODE2_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UDPHS_TST_OPMODE2_Msk instead */
#define UDPHS_TST_MASK                      _U_(0x3F)                                      /**< \deprecated (UDPHS_TST) Register MASK  (Use UDPHS_TST_Msk instead)  */
#define UDPHS_TST_Msk                       _U_(0x3F)                                      /**< (UDPHS_TST) Register Mask  */

#define UDPHS_TST_OPMODE_Pos                5                                              /**< (UDPHS_TST Position) OpMode2 */
#define UDPHS_TST_OPMODE_Msk                (_U_(0x1) << UDPHS_TST_OPMODE_Pos)             /**< (UDPHS_TST Mask) OPMODE */
#define UDPHS_TST_OPMODE(value)             (UDPHS_TST_OPMODE_Msk & ((value) << UDPHS_TST_OPMODE_Pos))  

/* -------- UDPHS_ADDRSIZE : (UDPHS Offset: 0xec) (R/ 32) UDPHS IP Address Size Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDRSIZE:32;               /**< bit:  0..31  Peripheral Bus Address Size              */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UDPHS_ADDRSIZE_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UDPHS_ADDRSIZE_OFFSET               (0xEC)                                        /**<  (UDPHS_ADDRSIZE) UDPHS IP Address Size Register  Offset */

#define UDPHS_ADDRSIZE_ADDRSIZE_Pos         0                                              /**< (UDPHS_ADDRSIZE) Peripheral Bus Address Size Position */
#define UDPHS_ADDRSIZE_ADDRSIZE_Msk         (_U_(0xFFFFFFFF) << UDPHS_ADDRSIZE_ADDRSIZE_Pos)  /**< (UDPHS_ADDRSIZE) Peripheral Bus Address Size Mask */
#define UDPHS_ADDRSIZE_ADDRSIZE(value)      (UDPHS_ADDRSIZE_ADDRSIZE_Msk & ((value) << UDPHS_ADDRSIZE_ADDRSIZE_Pos))
#define UDPHS_ADDRSIZE_MASK                 _U_(0xFFFFFFFF)                                /**< \deprecated (UDPHS_ADDRSIZE) Register MASK  (Use UDPHS_ADDRSIZE_Msk instead)  */
#define UDPHS_ADDRSIZE_Msk                  _U_(0xFFFFFFFF)                                /**< (UDPHS_ADDRSIZE) Register Mask  */


/* -------- UDPHS_IPNAME : (UDPHS Offset: 0xf0) (R/ 32) UDPHS IP Name1 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t IPNAME:32;                 /**< bit:  0..31  IP Name in ASCII Format                  */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UDPHS_IPNAME_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UDPHS_IPNAME_OFFSET                 (0xF0)                                        /**<  (UDPHS_IPNAME) UDPHS IP Name1 Register  Offset */

#define UDPHS_IPNAME_IPNAME_Pos             0                                              /**< (UDPHS_IPNAME) IP Name in ASCII Format Position */
#define UDPHS_IPNAME_IPNAME_Msk             (_U_(0xFFFFFFFF) << UDPHS_IPNAME_IPNAME_Pos)   /**< (UDPHS_IPNAME) IP Name in ASCII Format Mask */
#define UDPHS_IPNAME_IPNAME(value)          (UDPHS_IPNAME_IPNAME_Msk & ((value) << UDPHS_IPNAME_IPNAME_Pos))
#define UDPHS_IPNAME_MASK                   _U_(0xFFFFFFFF)                                /**< \deprecated (UDPHS_IPNAME) Register MASK  (Use UDPHS_IPNAME_Msk instead)  */
#define UDPHS_IPNAME_Msk                    _U_(0xFFFFFFFF)                                /**< (UDPHS_IPNAME) Register Mask  */


/* -------- UDPHS_FEATURES : (UDPHS Offset: 0xf8) (R/ 32) UDPHS Features Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} UDPHS_FEATURES_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UDPHS_FEATURES_OFFSET               (0xF8)                                        /**<  (UDPHS_FEATURES) UDPHS Features Register  Offset */

#define UDPHS_FEATURES_MASK                 _U_(0x00)                                      /**< \deprecated (UDPHS_FEATURES) Register MASK  (Use UDPHS_FEATURES_Msk instead)  */
#define UDPHS_FEATURES_Msk                  _U_(0x00)                                      /**< (UDPHS_FEATURES) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief UDPHS_DMA hardware registers */
typedef struct {  
  __IO uint32_t UDPHS_DMANXTDSC; /**< (UDPHS_DMA Offset: 0x00) UDPHS DMA Next Descriptor Address Register (channel = 0) */
  __IO uint32_t UDPHS_DMAADDRESS; /**< (UDPHS_DMA Offset: 0x04) UDPHS DMA Channel Address Register (channel = 0) */
  __IO uint32_t UDPHS_DMACONTROL; /**< (UDPHS_DMA Offset: 0x08) UDPHS DMA Channel Control Register (channel = 0) */
  __IO uint32_t UDPHS_DMASTATUS; /**< (UDPHS_DMA Offset: 0x0C) UDPHS DMA Channel Status Register (channel = 0) */
} UdphsDma;

/** \brief UDPHS_EPT hardware registers */
typedef struct {  
  __IO uint32_t UDPHS_EPTCFG;   /**< (UDPHS_EPT Offset: 0x00) UDPHS Endpoint Configuration Register (endpoint = 0) */
  __O  uint32_t UDPHS_EPTCTLENB; /**< (UDPHS_EPT Offset: 0x04) UDPHS Endpoint Control Enable Register (endpoint = 0) */
  __O  uint32_t UDPHS_EPTCTLDIS; /**< (UDPHS_EPT Offset: 0x08) UDPHS Endpoint Control Disable Register (endpoint = 0) */
  __I  uint32_t UDPHS_EPTCTL;   /**< (UDPHS_EPT Offset: 0x0C) UDPHS Endpoint Control Register (endpoint = 0) */
  __I  uint8_t                        Reserved1[4];
  __O  uint32_t UDPHS_EPTSETSTA; /**< (UDPHS_EPT Offset: 0x14) UDPHS Endpoint Set Status Register (endpoint = 0) */
  __O  uint32_t UDPHS_EPTCLRSTA; /**< (UDPHS_EPT Offset: 0x18) UDPHS Endpoint Clear Status Register (endpoint = 0) */
  __I  uint32_t UDPHS_EPTSTA;   /**< (UDPHS_EPT Offset: 0x1C) UDPHS Endpoint Status Register (endpoint = 0) */
} UdphsEpt;

#define UDPHSEPT_NUMBER 16
#define UDPHSDMA_NUMBER 7
/** \brief UDPHS hardware registers */
typedef struct {  
  __IO uint32_t UDPHS_CTRL;     /**< (UDPHS Offset: 0x00) UDPHS Control Register */
  __I  uint32_t UDPHS_FNUM;     /**< (UDPHS Offset: 0x04) UDPHS Frame Number Register */
  __I  uint8_t                        Reserved1[8];
  __IO uint32_t UDPHS_IEN;      /**< (UDPHS Offset: 0x10) UDPHS Interrupt Enable Register */
  __I  uint32_t UDPHS_INTSTA;   /**< (UDPHS Offset: 0x14) UDPHS Interrupt Status Register */
  __O  uint32_t UDPHS_CLRINT;   /**< (UDPHS Offset: 0x18) UDPHS Clear Interrupt Register */
  __O  uint32_t UDPHS_EPTRST;   /**< (UDPHS Offset: 0x1C) UDPHS Endpoints Reset Register */
  __I  uint8_t                        Reserved2[192];
  __IO uint32_t UDPHS_TST;      /**< (UDPHS Offset: 0xE0) UDPHS Test Register */
  __I  uint8_t                        Reserved3[8];
  __I  uint32_t UDPHS_ADDRSIZE; /**< (UDPHS Offset: 0xEC) UDPHS IP Address Size Register */
  __I  uint32_t UDPHS_IPNAME[2]; /**< (UDPHS Offset: 0xF0) UDPHS IP Name1 Register */
  __I  uint32_t UDPHS_FEATURES; /**< (UDPHS Offset: 0xF8) UDPHS Features Register */
  __I  uint8_t                        Reserved4[4];
       UdphsEpt UdphsEpt[UDPHSEPT_NUMBER]; /**< Offset: 0x100  */
       UdphsDma UdphsDma[UDPHSDMA_NUMBER]; /**< Offset: 0x300  */
} Udphs;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief UDPHS_DMA hardware registers */
typedef struct {  
  __IO UDPHS_DMANXTDSC_Type           UDPHS_DMANXTDSC; /**< Offset: 0x00 (R/W  32) UDPHS DMA Next Descriptor Address Register (channel = 0) */
  __IO UDPHS_DMAADDRESS_Type          UDPHS_DMAADDRESS; /**< Offset: 0x04 (R/W  32) UDPHS DMA Channel Address Register (channel = 0) */
  __IO UDPHS_DMACONTROL_Type          UDPHS_DMACONTROL; /**< Offset: 0x08 (R/W  32) UDPHS DMA Channel Control Register (channel = 0) */
  __IO UDPHS_DMASTATUS_Type           UDPHS_DMASTATUS; /**< Offset: 0x0C (R/W  32) UDPHS DMA Channel Status Register (channel = 0) */
} UdphsDma;

/** \brief UDPHS_EPT hardware registers */
typedef struct {  
  __IO UDPHS_EPTCFG_Type              UDPHS_EPTCFG;   /**< Offset: 0x00 (R/W  32) UDPHS Endpoint Configuration Register (endpoint = 0) */
  __O  UDPHS_EPTCTLENB_Type           UDPHS_EPTCTLENB; /**< Offset: 0x04 ( /W  32) UDPHS Endpoint Control Enable Register (endpoint = 0) */
  __O  UDPHS_EPTCTLDIS_Type           UDPHS_EPTCTLDIS; /**< Offset: 0x08 ( /W  32) UDPHS Endpoint Control Disable Register (endpoint = 0) */
  __I  UDPHS_EPTCTL_Type              UDPHS_EPTCTL;   /**< Offset: 0x0C (R/   32) UDPHS Endpoint Control Register (endpoint = 0) */
  __I  uint8_t                        Reserved1[4];
  __O  UDPHS_EPTSETSTA_Type           UDPHS_EPTSETSTA; /**< Offset: 0x14 ( /W  32) UDPHS Endpoint Set Status Register (endpoint = 0) */
  __O  UDPHS_EPTCLRSTA_Type           UDPHS_EPTCLRSTA; /**< Offset: 0x18 ( /W  32) UDPHS Endpoint Clear Status Register (endpoint = 0) */
  __I  UDPHS_EPTSTA_Type              UDPHS_EPTSTA;   /**< Offset: 0x1C (R/   32) UDPHS Endpoint Status Register (endpoint = 0) */
} UdphsEpt;

/** \brief UDPHS hardware registers */
typedef struct {  
  __IO UDPHS_CTRL_Type                UDPHS_CTRL;     /**< Offset: 0x00 (R/W  32) UDPHS Control Register */
  __I  UDPHS_FNUM_Type                UDPHS_FNUM;     /**< Offset: 0x04 (R/   32) UDPHS Frame Number Register */
  __I  uint8_t                        Reserved1[8];
  __IO UDPHS_IEN_Type                 UDPHS_IEN;      /**< Offset: 0x10 (R/W  32) UDPHS Interrupt Enable Register */
  __I  UDPHS_INTSTA_Type              UDPHS_INTSTA;   /**< Offset: 0x14 (R/   32) UDPHS Interrupt Status Register */
  __O  UDPHS_CLRINT_Type              UDPHS_CLRINT;   /**< Offset: 0x18 ( /W  32) UDPHS Clear Interrupt Register */
  __O  UDPHS_EPTRST_Type              UDPHS_EPTRST;   /**< Offset: 0x1C ( /W  32) UDPHS Endpoints Reset Register */
  __I  uint8_t                        Reserved2[192];
  __IO UDPHS_TST_Type                 UDPHS_TST;      /**< Offset: 0xE0 (R/W  32) UDPHS Test Register */
  __I  uint8_t                        Reserved3[8];
  __I  UDPHS_ADDRSIZE_Type            UDPHS_ADDRSIZE; /**< Offset: 0xEC (R/   32) UDPHS IP Address Size Register */
  __I  UDPHS_IPNAME_Type              UDPHS_IPNAME[2]; /**< Offset: 0xF0 (R/   32) UDPHS IP Name1 Register */
  __I  UDPHS_FEATURES_Type            UDPHS_FEATURES; /**< Offset: 0xF8 (R/   32) UDPHS Features Register */
  __I  uint8_t                        Reserved4[4];
       UdphsEpt                       UdphsEpt[16];   /**< Offset: 0x100  */
       UdphsDma                       UdphsDma[7];    /**< Offset: 0x300  */
} Udphs;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of USB High Speed Device Port */

#endif /* _SAMA5D2_UDPHS_COMPONENT_H_ */
