/**
 * \file
 *
 * \brief Component description for SPI
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
#ifndef _SAMA5D2_SPI_COMPONENT_H_
#define _SAMA5D2_SPI_COMPONENT_H_
#define _SAMA5D2_SPI_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Serial Peripheral Interface
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SPI */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define SPI_6088                       /**< (SPI) Module ID */
#define REV_SPI ZR                     /**< (SPI) Module revision */

/* -------- SPI_CR : (SPI Offset: 0x00) (/W 32) Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SPIEN:1;                   /**< bit:      0  SPI Enable                               */
    uint32_t SPIDIS:1;                  /**< bit:      1  SPI Disable                              */
    uint32_t :5;                        /**< bit:   2..6  Reserved */
    uint32_t SWRST:1;                   /**< bit:      7  SPI Software Reset                       */
    uint32_t :4;                        /**< bit:  8..11  Reserved */
    uint32_t REQCLR:1;                  /**< bit:     12  Request to Clear the Comparison Trigger  */
    uint32_t :3;                        /**< bit: 13..15  Reserved */
    uint32_t TXFCLR:1;                  /**< bit:     16  Transmit FIFO Clear                      */
    uint32_t RXFCLR:1;                  /**< bit:     17  Receive FIFO Clear                       */
    uint32_t :6;                        /**< bit: 18..23  Reserved */
    uint32_t LASTXFER:1;                /**< bit:     24  Last Transfer                            */
    uint32_t :5;                        /**< bit: 25..29  Reserved */
    uint32_t FIFOEN:1;                  /**< bit:     30  FIFO Enable                              */
    uint32_t FIFODIS:1;                 /**< bit:     31  FIFO Disable                             */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SPI_CR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_CR_OFFSET                       (0x00)                                        /**<  (SPI_CR) Control Register  Offset */

#define SPI_CR_SPIEN_Pos                    0                                              /**< (SPI_CR) SPI Enable Position */
#define SPI_CR_SPIEN_Msk                    (_U_(0x1) << SPI_CR_SPIEN_Pos)                 /**< (SPI_CR) SPI Enable Mask */
#define SPI_CR_SPIEN                        SPI_CR_SPIEN_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_CR_SPIEN_Msk instead */
#define SPI_CR_SPIDIS_Pos                   1                                              /**< (SPI_CR) SPI Disable Position */
#define SPI_CR_SPIDIS_Msk                   (_U_(0x1) << SPI_CR_SPIDIS_Pos)                /**< (SPI_CR) SPI Disable Mask */
#define SPI_CR_SPIDIS                       SPI_CR_SPIDIS_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_CR_SPIDIS_Msk instead */
#define SPI_CR_SWRST_Pos                    7                                              /**< (SPI_CR) SPI Software Reset Position */
#define SPI_CR_SWRST_Msk                    (_U_(0x1) << SPI_CR_SWRST_Pos)                 /**< (SPI_CR) SPI Software Reset Mask */
#define SPI_CR_SWRST                        SPI_CR_SWRST_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_CR_SWRST_Msk instead */
#define SPI_CR_REQCLR_Pos                   12                                             /**< (SPI_CR) Request to Clear the Comparison Trigger Position */
#define SPI_CR_REQCLR_Msk                   (_U_(0x1) << SPI_CR_REQCLR_Pos)                /**< (SPI_CR) Request to Clear the Comparison Trigger Mask */
#define SPI_CR_REQCLR                       SPI_CR_REQCLR_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_CR_REQCLR_Msk instead */
#define SPI_CR_TXFCLR_Pos                   16                                             /**< (SPI_CR) Transmit FIFO Clear Position */
#define SPI_CR_TXFCLR_Msk                   (_U_(0x1) << SPI_CR_TXFCLR_Pos)                /**< (SPI_CR) Transmit FIFO Clear Mask */
#define SPI_CR_TXFCLR                       SPI_CR_TXFCLR_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_CR_TXFCLR_Msk instead */
#define SPI_CR_RXFCLR_Pos                   17                                             /**< (SPI_CR) Receive FIFO Clear Position */
#define SPI_CR_RXFCLR_Msk                   (_U_(0x1) << SPI_CR_RXFCLR_Pos)                /**< (SPI_CR) Receive FIFO Clear Mask */
#define SPI_CR_RXFCLR                       SPI_CR_RXFCLR_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_CR_RXFCLR_Msk instead */
#define SPI_CR_LASTXFER_Pos                 24                                             /**< (SPI_CR) Last Transfer Position */
#define SPI_CR_LASTXFER_Msk                 (_U_(0x1) << SPI_CR_LASTXFER_Pos)              /**< (SPI_CR) Last Transfer Mask */
#define SPI_CR_LASTXFER                     SPI_CR_LASTXFER_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_CR_LASTXFER_Msk instead */
#define SPI_CR_FIFOEN_Pos                   30                                             /**< (SPI_CR) FIFO Enable Position */
#define SPI_CR_FIFOEN_Msk                   (_U_(0x1) << SPI_CR_FIFOEN_Pos)                /**< (SPI_CR) FIFO Enable Mask */
#define SPI_CR_FIFOEN                       SPI_CR_FIFOEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_CR_FIFOEN_Msk instead */
#define SPI_CR_FIFODIS_Pos                  31                                             /**< (SPI_CR) FIFO Disable Position */
#define SPI_CR_FIFODIS_Msk                  (_U_(0x1) << SPI_CR_FIFODIS_Pos)               /**< (SPI_CR) FIFO Disable Mask */
#define SPI_CR_FIFODIS                      SPI_CR_FIFODIS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_CR_FIFODIS_Msk instead */
#define SPI_CR_MASK                         _U_(0xC1031083)                                /**< \deprecated (SPI_CR) Register MASK  (Use SPI_CR_Msk instead)  */
#define SPI_CR_Msk                          _U_(0xC1031083)                                /**< (SPI_CR) Register Mask  */


/* -------- SPI_MR : (SPI Offset: 0x04) (R/W 32) Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MSTR:1;                    /**< bit:      0  Master/Slave Mode                        */
    uint32_t PS:1;                      /**< bit:      1  Peripheral Select                        */
    uint32_t PCSDEC:1;                  /**< bit:      2  Chip Select Decode                       */
    uint32_t BRSRCCLK:1;                /**< bit:      3  Bit Rate Source Clock                    */
    uint32_t MODFDIS:1;                 /**< bit:      4  Mode Fault Detection                     */
    uint32_t WDRBT:1;                   /**< bit:      5  Wait Data Read Before Transfer           */
    uint32_t :1;                        /**< bit:      6  Reserved */
    uint32_t LLB:1;                     /**< bit:      7  Local Loopback Enable                    */
    uint32_t LSBHALF:1;                 /**< bit:      8  LSB Timing Selection                     */
    uint32_t :3;                        /**< bit:  9..11  Reserved */
    uint32_t CMPMODE:1;                 /**< bit:     12  Comparison Mode                          */
    uint32_t :3;                        /**< bit: 13..15  Reserved */
    uint32_t PCS:4;                     /**< bit: 16..19  Peripheral Chip Select                   */
    uint32_t :4;                        /**< bit: 20..23  Reserved */
    uint32_t DLYBCS:8;                  /**< bit: 24..31  Delay Between Chip Selects               */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SPI_MR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_MR_OFFSET                       (0x04)                                        /**<  (SPI_MR) Mode Register  Offset */

#define SPI_MR_MSTR_Pos                     0                                              /**< (SPI_MR) Master/Slave Mode Position */
#define SPI_MR_MSTR_Msk                     (_U_(0x1) << SPI_MR_MSTR_Pos)                  /**< (SPI_MR) Master/Slave Mode Mask */
#define SPI_MR_MSTR                         SPI_MR_MSTR_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_MR_MSTR_Msk instead */
#define   SPI_MR_MSTR_MASTER_Val            _U_(0x1)                                       /**< (SPI_MR) Master  */
#define   SPI_MR_MSTR_SLAVE_Val             _U_(0x0)                                       /**< (SPI_MR) Slave  */
#define SPI_MR_MSTR_MASTER                  (SPI_MR_MSTR_MASTER_Val << SPI_MR_MSTR_Pos)    /**< (SPI_MR) Master Position  */
#define SPI_MR_MSTR_SLAVE                   (SPI_MR_MSTR_SLAVE_Val << SPI_MR_MSTR_Pos)     /**< (SPI_MR) Slave Position  */
#define SPI_MR_PS_Pos                       1                                              /**< (SPI_MR) Peripheral Select Position */
#define SPI_MR_PS_Msk                       (_U_(0x1) << SPI_MR_PS_Pos)                    /**< (SPI_MR) Peripheral Select Mask */
#define SPI_MR_PS                           SPI_MR_PS_Msk                                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_MR_PS_Msk instead */
#define SPI_MR_PCSDEC_Pos                   2                                              /**< (SPI_MR) Chip Select Decode Position */
#define SPI_MR_PCSDEC_Msk                   (_U_(0x1) << SPI_MR_PCSDEC_Pos)                /**< (SPI_MR) Chip Select Decode Mask */
#define SPI_MR_PCSDEC                       SPI_MR_PCSDEC_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_MR_PCSDEC_Msk instead */
#define SPI_MR_BRSRCCLK_Pos                 3                                              /**< (SPI_MR) Bit Rate Source Clock Position */
#define SPI_MR_BRSRCCLK_Msk                 (_U_(0x1) << SPI_MR_BRSRCCLK_Pos)              /**< (SPI_MR) Bit Rate Source Clock Mask */
#define SPI_MR_BRSRCCLK                     SPI_MR_BRSRCCLK_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_MR_BRSRCCLK_Msk instead */
#define   SPI_MR_BRSRCCLK_PERIPH_CLK_Val    _U_(0x0)                                       /**< (SPI_MR) The peripheral clock is the source clock for the bit rate generation.  */
#define   SPI_MR_BRSRCCLK_GCLK_Val          _U_(0x1)                                       /**< (SPI_MR) PMC GCLK is the source clock for the bit rate generation, thus the bit rate can be independent of the core/peripheral clock.  */
#define SPI_MR_BRSRCCLK_PERIPH_CLK          (SPI_MR_BRSRCCLK_PERIPH_CLK_Val << SPI_MR_BRSRCCLK_Pos)  /**< (SPI_MR) The peripheral clock is the source clock for the bit rate generation. Position  */
#define SPI_MR_BRSRCCLK_GCLK                (SPI_MR_BRSRCCLK_GCLK_Val << SPI_MR_BRSRCCLK_Pos)  /**< (SPI_MR) PMC GCLK is the source clock for the bit rate generation, thus the bit rate can be independent of the core/peripheral clock. Position  */
#define SPI_MR_MODFDIS_Pos                  4                                              /**< (SPI_MR) Mode Fault Detection Position */
#define SPI_MR_MODFDIS_Msk                  (_U_(0x1) << SPI_MR_MODFDIS_Pos)               /**< (SPI_MR) Mode Fault Detection Mask */
#define SPI_MR_MODFDIS                      SPI_MR_MODFDIS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_MR_MODFDIS_Msk instead */
#define SPI_MR_WDRBT_Pos                    5                                              /**< (SPI_MR) Wait Data Read Before Transfer Position */
#define SPI_MR_WDRBT_Msk                    (_U_(0x1) << SPI_MR_WDRBT_Pos)                 /**< (SPI_MR) Wait Data Read Before Transfer Mask */
#define SPI_MR_WDRBT                        SPI_MR_WDRBT_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_MR_WDRBT_Msk instead */
#define SPI_MR_LLB_Pos                      7                                              /**< (SPI_MR) Local Loopback Enable Position */
#define SPI_MR_LLB_Msk                      (_U_(0x1) << SPI_MR_LLB_Pos)                   /**< (SPI_MR) Local Loopback Enable Mask */
#define SPI_MR_LLB                          SPI_MR_LLB_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_MR_LLB_Msk instead */
#define SPI_MR_LSBHALF_Pos                  8                                              /**< (SPI_MR) LSB Timing Selection Position */
#define SPI_MR_LSBHALF_Msk                  (_U_(0x1) << SPI_MR_LSBHALF_Pos)               /**< (SPI_MR) LSB Timing Selection Mask */
#define SPI_MR_LSBHALF                      SPI_MR_LSBHALF_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_MR_LSBHALF_Msk instead */
#define SPI_MR_CMPMODE_Pos                  12                                             /**< (SPI_MR) Comparison Mode Position */
#define SPI_MR_CMPMODE_Msk                  (_U_(0x1) << SPI_MR_CMPMODE_Pos)               /**< (SPI_MR) Comparison Mode Mask */
#define SPI_MR_CMPMODE                      SPI_MR_CMPMODE_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_MR_CMPMODE_Msk instead */
#define   SPI_MR_CMPMODE_FLAG_ONLY_Val      _U_(0x0)                                       /**< (SPI_MR) Any character is received and comparison function drives CMP flag.  */
#define   SPI_MR_CMPMODE_START_CONDITION_Val _U_(0x1)                                       /**< (SPI_MR) Comparison condition must be met to start reception of all incoming characters until REQCLR is set.  */
#define SPI_MR_CMPMODE_FLAG_ONLY            (SPI_MR_CMPMODE_FLAG_ONLY_Val << SPI_MR_CMPMODE_Pos)  /**< (SPI_MR) Any character is received and comparison function drives CMP flag. Position  */
#define SPI_MR_CMPMODE_START_CONDITION      (SPI_MR_CMPMODE_START_CONDITION_Val << SPI_MR_CMPMODE_Pos)  /**< (SPI_MR) Comparison condition must be met to start reception of all incoming characters until REQCLR is set. Position  */
#define SPI_MR_PCS_Pos                      16                                             /**< (SPI_MR) Peripheral Chip Select Position */
#define SPI_MR_PCS_Msk                      (_U_(0xF) << SPI_MR_PCS_Pos)                   /**< (SPI_MR) Peripheral Chip Select Mask */
#define SPI_MR_PCS(value)                   (SPI_MR_PCS_Msk & ((value) << SPI_MR_PCS_Pos))
#define   SPI_MR_PCS_NPCS0_Val              _U_(0xE)                                       /**< (SPI_MR) NPCS0 as Chip Select  */
#define   SPI_MR_PCS_NPCS1_Val              _U_(0xD)                                       /**< (SPI_MR) NPCS1 as Chip Select  */
#define   SPI_MR_PCS_NPCS2_Val              _U_(0xB)                                       /**< (SPI_MR) NPCS2 as Chip Select  */
#define   SPI_MR_PCS_NPCS3_Val              _U_(0x7)                                       /**< (SPI_MR) NPCS3 as Chip Select  */
#define SPI_MR_PCS_NPCS0                    (SPI_MR_PCS_NPCS0_Val << SPI_MR_PCS_Pos)       /**< (SPI_MR) NPCS0 as Chip Select Position  */
#define SPI_MR_PCS_NPCS1                    (SPI_MR_PCS_NPCS1_Val << SPI_MR_PCS_Pos)       /**< (SPI_MR) NPCS1 as Chip Select Position  */
#define SPI_MR_PCS_NPCS2                    (SPI_MR_PCS_NPCS2_Val << SPI_MR_PCS_Pos)       /**< (SPI_MR) NPCS2 as Chip Select Position  */
#define SPI_MR_PCS_NPCS3                    (SPI_MR_PCS_NPCS3_Val << SPI_MR_PCS_Pos)       /**< (SPI_MR) NPCS3 as Chip Select Position  */
#define SPI_MR_DLYBCS_Pos                   24                                             /**< (SPI_MR) Delay Between Chip Selects Position */
#define SPI_MR_DLYBCS_Msk                   (_U_(0xFF) << SPI_MR_DLYBCS_Pos)               /**< (SPI_MR) Delay Between Chip Selects Mask */
#define SPI_MR_DLYBCS(value)                (SPI_MR_DLYBCS_Msk & ((value) << SPI_MR_DLYBCS_Pos))
#define SPI_MR_MASK                         _U_(0xFF0F11BF)                                /**< \deprecated (SPI_MR) Register MASK  (Use SPI_MR_Msk instead)  */
#define SPI_MR_Msk                          _U_(0xFF0F11BF)                                /**< (SPI_MR) Register Mask  */


/* -------- SPI_RDR : (SPI Offset: 0x08) (R/ 32) Receive Data Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RD:16;                     /**< bit:  0..15  Receive Data                             */
    uint32_t PCS:4;                     /**< bit: 16..19  Peripheral Chip Select                   */
    uint32_t :12;                       /**< bit: 20..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct { // FIFO_MULTI_DATA_8 mode
    uint32_t RD8_0:8;                   /**< bit:   0..7  Receive Data                             */
    uint32_t RD8_1:8;                   /**< bit:  8..15  Receive Data                             */
    uint32_t RD8_2:8;                   /**< bit: 16..23  Receive Data                             */
    uint32_t RD8_3:8;                   /**< bit: 24..31  Receive Data                             */
  } FIFO_MULTI_DATA_8;                                /**< Structure used for FIFO_MULTI_DATA_8 mode access */
  struct { // FIFO_MULTI_DATA_16 mode
    uint32_t RD16_0:16;                 /**< bit:  0..15  Receive Data                             */
    uint32_t RD16_1:16;                 /**< bit: 16..31  Receive Data                             */
  } FIFO_MULTI_DATA_16;                                /**< Structure used for FIFO_MULTI_DATA_16 mode access */
  uint32_t reg;                         /**< Type used for register access */
} SPI_RDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_RDR_OFFSET                      (0x08)                                        /**<  (SPI_RDR) Receive Data Register  Offset */

#define SPI_RDR_RD_Pos                      0                                              /**< (SPI_RDR) Receive Data Position */
#define SPI_RDR_RD_Msk                      (_U_(0xFFFF) << SPI_RDR_RD_Pos)                /**< (SPI_RDR) Receive Data Mask */
#define SPI_RDR_RD(value)                   (SPI_RDR_RD_Msk & ((value) << SPI_RDR_RD_Pos))
#define SPI_RDR_PCS_Pos                     16                                             /**< (SPI_RDR) Peripheral Chip Select Position */
#define SPI_RDR_PCS_Msk                     (_U_(0xF) << SPI_RDR_PCS_Pos)                  /**< (SPI_RDR) Peripheral Chip Select Mask */
#define SPI_RDR_PCS(value)                  (SPI_RDR_PCS_Msk & ((value) << SPI_RDR_PCS_Pos))
#define SPI_RDR_MASK                        _U_(0xFFFFF)                                   /**< \deprecated (SPI_RDR) Register MASK  (Use SPI_RDR_Msk instead)  */
#define SPI_RDR_Msk                         _U_(0xFFFFF)                                   /**< (SPI_RDR) Register Mask  */

/* FIFO_MULTI_DATA_8 mode */
#define SPI_RDR_FIFO_MULTI_DATA_8_RD8_0_Pos 0                                              /**< (SPI_RDR) Receive Data Position */
#define SPI_RDR_FIFO_MULTI_DATA_8_RD8_0_Msk (_U_(0xFF) << SPI_RDR_FIFO_MULTI_DATA_8_RD8_0_Pos)  /**< (SPI_RDR) Receive Data Mask */
#define SPI_RDR_FIFO_MULTI_DATA_8_RD8_0(value) (SPI_RDR_FIFO_MULTI_DATA_8_RD8_0_Msk & ((value) << SPI_RDR_FIFO_MULTI_DATA_8_RD8_0_Pos))
#define SPI_RDR_FIFO_MULTI_DATA_8_RD8_1_Pos 8                                              /**< (SPI_RDR) Receive Data Position */
#define SPI_RDR_FIFO_MULTI_DATA_8_RD8_1_Msk (_U_(0xFF) << SPI_RDR_FIFO_MULTI_DATA_8_RD8_1_Pos)  /**< (SPI_RDR) Receive Data Mask */
#define SPI_RDR_FIFO_MULTI_DATA_8_RD8_1(value) (SPI_RDR_FIFO_MULTI_DATA_8_RD8_1_Msk & ((value) << SPI_RDR_FIFO_MULTI_DATA_8_RD8_1_Pos))
#define SPI_RDR_FIFO_MULTI_DATA_8_RD8_2_Pos 16                                             /**< (SPI_RDR) Receive Data Position */
#define SPI_RDR_FIFO_MULTI_DATA_8_RD8_2_Msk (_U_(0xFF) << SPI_RDR_FIFO_MULTI_DATA_8_RD8_2_Pos)  /**< (SPI_RDR) Receive Data Mask */
#define SPI_RDR_FIFO_MULTI_DATA_8_RD8_2(value) (SPI_RDR_FIFO_MULTI_DATA_8_RD8_2_Msk & ((value) << SPI_RDR_FIFO_MULTI_DATA_8_RD8_2_Pos))
#define SPI_RDR_FIFO_MULTI_DATA_8_RD8_3_Pos 24                                             /**< (SPI_RDR) Receive Data Position */
#define SPI_RDR_FIFO_MULTI_DATA_8_RD8_3_Msk (_U_(0xFF) << SPI_RDR_FIFO_MULTI_DATA_8_RD8_3_Pos)  /**< (SPI_RDR) Receive Data Mask */
#define SPI_RDR_FIFO_MULTI_DATA_8_RD8_3(value) (SPI_RDR_FIFO_MULTI_DATA_8_RD8_3_Msk & ((value) << SPI_RDR_FIFO_MULTI_DATA_8_RD8_3_Pos))
#define SPI_RDR_FIFO_MULTI_DATA_8_MASK      _U_(0xFFFFFFFF)                                /**< \deprecated (SPI_RDR_FIFO_MULTI_DATA_8) Register MASK  (Use SPI_RDR_FIFO_MULTI_DATA_8_Msk instead)  */
#define SPI_RDR_FIFO_MULTI_DATA_8_Msk       _U_(0xFFFFFFFF)                                /**< (SPI_RDR_FIFO_MULTI_DATA_8) Register Mask  */

/* FIFO_MULTI_DATA_16 mode */
#define SPI_RDR_FIFO_MULTI_DATA_16_RD16_0_Pos 0                                              /**< (SPI_RDR) Receive Data Position */
#define SPI_RDR_FIFO_MULTI_DATA_16_RD16_0_Msk (_U_(0xFFFF) << SPI_RDR_FIFO_MULTI_DATA_16_RD16_0_Pos)  /**< (SPI_RDR) Receive Data Mask */
#define SPI_RDR_FIFO_MULTI_DATA_16_RD16_0(value) (SPI_RDR_FIFO_MULTI_DATA_16_RD16_0_Msk & ((value) << SPI_RDR_FIFO_MULTI_DATA_16_RD16_0_Pos))
#define SPI_RDR_FIFO_MULTI_DATA_16_RD16_1_Pos 16                                             /**< (SPI_RDR) Receive Data Position */
#define SPI_RDR_FIFO_MULTI_DATA_16_RD16_1_Msk (_U_(0xFFFF) << SPI_RDR_FIFO_MULTI_DATA_16_RD16_1_Pos)  /**< (SPI_RDR) Receive Data Mask */
#define SPI_RDR_FIFO_MULTI_DATA_16_RD16_1(value) (SPI_RDR_FIFO_MULTI_DATA_16_RD16_1_Msk & ((value) << SPI_RDR_FIFO_MULTI_DATA_16_RD16_1_Pos))
#define SPI_RDR_FIFO_MULTI_DATA_16_MASK     _U_(0xFFFFFFFF)                                /**< \deprecated (SPI_RDR_FIFO_MULTI_DATA_16) Register MASK  (Use SPI_RDR_FIFO_MULTI_DATA_16_Msk instead)  */
#define SPI_RDR_FIFO_MULTI_DATA_16_Msk      _U_(0xFFFFFFFF)                                /**< (SPI_RDR_FIFO_MULTI_DATA_16) Register Mask  */


/* -------- SPI_TDR : (SPI Offset: 0x0c) (/W 32) Transmit Data Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TD:16;                     /**< bit:  0..15  Transmit Data                            */
    uint32_t PCS:4;                     /**< bit: 16..19  Peripheral Chip Select                   */
    uint32_t :4;                        /**< bit: 20..23  Reserved */
    uint32_t LASTXFER:1;                /**< bit:     24  Last Transfer                            */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct { // FIFO_MULTI_DATA mode
    uint32_t TD0:16;                    /**< bit:  0..15  Transmit Data                            */
    uint32_t TD1:16;                    /**< bit: 16..31  Transmit Data                            */
  } FIFO_MULTI_DATA;                                /**< Structure used for FIFO_MULTI_DATA mode access */
  uint32_t reg;                         /**< Type used for register access */
} SPI_TDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_TDR_OFFSET                      (0x0C)                                        /**<  (SPI_TDR) Transmit Data Register  Offset */

#define SPI_TDR_TD_Pos                      0                                              /**< (SPI_TDR) Transmit Data Position */
#define SPI_TDR_TD_Msk                      (_U_(0xFFFF) << SPI_TDR_TD_Pos)                /**< (SPI_TDR) Transmit Data Mask */
#define SPI_TDR_TD(value)                   (SPI_TDR_TD_Msk & ((value) << SPI_TDR_TD_Pos))
#define SPI_TDR_PCS_Pos                     16                                             /**< (SPI_TDR) Peripheral Chip Select Position */
#define SPI_TDR_PCS_Msk                     (_U_(0xF) << SPI_TDR_PCS_Pos)                  /**< (SPI_TDR) Peripheral Chip Select Mask */
#define SPI_TDR_PCS(value)                  (SPI_TDR_PCS_Msk & ((value) << SPI_TDR_PCS_Pos))
#define   SPI_TDR_PCS_NPCS0_Val             _U_(0xE)                                       /**< (SPI_TDR) NPCS0 as Chip Select  */
#define   SPI_TDR_PCS_NPCS1_Val             _U_(0xD)                                       /**< (SPI_TDR) NPCS1 as Chip Select  */
#define   SPI_TDR_PCS_NPCS2_Val             _U_(0xB)                                       /**< (SPI_TDR) NPCS2 as Chip Select  */
#define   SPI_TDR_PCS_NPCS3_Val             _U_(0x7)                                       /**< (SPI_TDR) NPCS3 as Chip Select  */
#define SPI_TDR_PCS_NPCS0                   (SPI_TDR_PCS_NPCS0_Val << SPI_TDR_PCS_Pos)     /**< (SPI_TDR) NPCS0 as Chip Select Position  */
#define SPI_TDR_PCS_NPCS1                   (SPI_TDR_PCS_NPCS1_Val << SPI_TDR_PCS_Pos)     /**< (SPI_TDR) NPCS1 as Chip Select Position  */
#define SPI_TDR_PCS_NPCS2                   (SPI_TDR_PCS_NPCS2_Val << SPI_TDR_PCS_Pos)     /**< (SPI_TDR) NPCS2 as Chip Select Position  */
#define SPI_TDR_PCS_NPCS3                   (SPI_TDR_PCS_NPCS3_Val << SPI_TDR_PCS_Pos)     /**< (SPI_TDR) NPCS3 as Chip Select Position  */
#define SPI_TDR_LASTXFER_Pos                24                                             /**< (SPI_TDR) Last Transfer Position */
#define SPI_TDR_LASTXFER_Msk                (_U_(0x1) << SPI_TDR_LASTXFER_Pos)             /**< (SPI_TDR) Last Transfer Mask */
#define SPI_TDR_LASTXFER                    SPI_TDR_LASTXFER_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_TDR_LASTXFER_Msk instead */
#define SPI_TDR_MASK                        _U_(0x10FFFFF)                                 /**< \deprecated (SPI_TDR) Register MASK  (Use SPI_TDR_Msk instead)  */
#define SPI_TDR_Msk                         _U_(0x10FFFFF)                                 /**< (SPI_TDR) Register Mask  */

/* FIFO_MULTI_DATA mode */
#define SPI_TDR_FIFO_MULTI_DATA_TD0_Pos     0                                              /**< (SPI_TDR) Transmit Data Position */
#define SPI_TDR_FIFO_MULTI_DATA_TD0_Msk     (_U_(0xFFFF) << SPI_TDR_FIFO_MULTI_DATA_TD0_Pos)  /**< (SPI_TDR) Transmit Data Mask */
#define SPI_TDR_FIFO_MULTI_DATA_TD0(value)  (SPI_TDR_FIFO_MULTI_DATA_TD0_Msk & ((value) << SPI_TDR_FIFO_MULTI_DATA_TD0_Pos))
#define SPI_TDR_FIFO_MULTI_DATA_TD1_Pos     16                                             /**< (SPI_TDR) Transmit Data Position */
#define SPI_TDR_FIFO_MULTI_DATA_TD1_Msk     (_U_(0xFFFF) << SPI_TDR_FIFO_MULTI_DATA_TD1_Pos)  /**< (SPI_TDR) Transmit Data Mask */
#define SPI_TDR_FIFO_MULTI_DATA_TD1(value)  (SPI_TDR_FIFO_MULTI_DATA_TD1_Msk & ((value) << SPI_TDR_FIFO_MULTI_DATA_TD1_Pos))
#define SPI_TDR_FIFO_MULTI_DATA_MASK        _U_(0xFFFFFFFF)                                /**< \deprecated (SPI_TDR_FIFO_MULTI_DATA) Register MASK  (Use SPI_TDR_FIFO_MULTI_DATA_Msk instead)  */
#define SPI_TDR_FIFO_MULTI_DATA_Msk         _U_(0xFFFFFFFF)                                /**< (SPI_TDR_FIFO_MULTI_DATA) Register Mask  */


/* -------- SPI_SR : (SPI Offset: 0x10) (R/ 32) Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RDRF:1;                    /**< bit:      0  Receive Data Register Full (cleared by reading SPI_RDR) */
    uint32_t TDRE:1;                    /**< bit:      1  Transmit Data Register Empty (cleared by writing SPI_TDR) */
    uint32_t MODF:1;                    /**< bit:      2  Mode Fault Error (cleared on read)       */
    uint32_t OVRES:1;                   /**< bit:      3  Overrun Error Status (cleared on read)   */
    uint32_t :4;                        /**< bit:   4..7  Reserved */
    uint32_t NSSR:1;                    /**< bit:      8  NSS Rising (cleared on read)             */
    uint32_t TXEMPTY:1;                 /**< bit:      9  Transmission Registers Empty (cleared by writing SPI_TDR) */
    uint32_t UNDES:1;                   /**< bit:     10  Underrun Error Status (Slave mode only) (cleared on read) */
    uint32_t CMP:1;                     /**< bit:     11  Comparison Status (cleared on read)      */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t SPIENS:1;                  /**< bit:     16  SPI Enable Status                        */
    uint32_t :7;                        /**< bit: 17..23  Reserved */
    uint32_t TXFEF:1;                   /**< bit:     24  Transmit FIFO Empty Flag (cleared on read) */
    uint32_t TXFFF:1;                   /**< bit:     25  Transmit FIFO Full Flag (cleared on read) */
    uint32_t TXFTHF:1;                  /**< bit:     26  Transmit FIFO Threshold Flag (cleared on read) */
    uint32_t RXFEF:1;                   /**< bit:     27  Receive FIFO Empty Flag                  */
    uint32_t RXFFF:1;                   /**< bit:     28  Receive FIFO Full Flag                   */
    uint32_t RXFTHF:1;                  /**< bit:     29  Receive FIFO Threshold Flag              */
    uint32_t TXFPTEF:1;                 /**< bit:     30  Transmit FIFO Pointer Error Flag         */
    uint32_t RXFPTEF:1;                 /**< bit:     31  Receive FIFO Pointer Error Flag          */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SPI_SR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_SR_OFFSET                       (0x10)                                        /**<  (SPI_SR) Status Register  Offset */

#define SPI_SR_RDRF_Pos                     0                                              /**< (SPI_SR) Receive Data Register Full (cleared by reading SPI_RDR) Position */
#define SPI_SR_RDRF_Msk                     (_U_(0x1) << SPI_SR_RDRF_Pos)                  /**< (SPI_SR) Receive Data Register Full (cleared by reading SPI_RDR) Mask */
#define SPI_SR_RDRF                         SPI_SR_RDRF_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_SR_RDRF_Msk instead */
#define SPI_SR_TDRE_Pos                     1                                              /**< (SPI_SR) Transmit Data Register Empty (cleared by writing SPI_TDR) Position */
#define SPI_SR_TDRE_Msk                     (_U_(0x1) << SPI_SR_TDRE_Pos)                  /**< (SPI_SR) Transmit Data Register Empty (cleared by writing SPI_TDR) Mask */
#define SPI_SR_TDRE                         SPI_SR_TDRE_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_SR_TDRE_Msk instead */
#define SPI_SR_MODF_Pos                     2                                              /**< (SPI_SR) Mode Fault Error (cleared on read) Position */
#define SPI_SR_MODF_Msk                     (_U_(0x1) << SPI_SR_MODF_Pos)                  /**< (SPI_SR) Mode Fault Error (cleared on read) Mask */
#define SPI_SR_MODF                         SPI_SR_MODF_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_SR_MODF_Msk instead */
#define SPI_SR_OVRES_Pos                    3                                              /**< (SPI_SR) Overrun Error Status (cleared on read) Position */
#define SPI_SR_OVRES_Msk                    (_U_(0x1) << SPI_SR_OVRES_Pos)                 /**< (SPI_SR) Overrun Error Status (cleared on read) Mask */
#define SPI_SR_OVRES                        SPI_SR_OVRES_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_SR_OVRES_Msk instead */
#define SPI_SR_NSSR_Pos                     8                                              /**< (SPI_SR) NSS Rising (cleared on read) Position */
#define SPI_SR_NSSR_Msk                     (_U_(0x1) << SPI_SR_NSSR_Pos)                  /**< (SPI_SR) NSS Rising (cleared on read) Mask */
#define SPI_SR_NSSR                         SPI_SR_NSSR_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_SR_NSSR_Msk instead */
#define SPI_SR_TXEMPTY_Pos                  9                                              /**< (SPI_SR) Transmission Registers Empty (cleared by writing SPI_TDR) Position */
#define SPI_SR_TXEMPTY_Msk                  (_U_(0x1) << SPI_SR_TXEMPTY_Pos)               /**< (SPI_SR) Transmission Registers Empty (cleared by writing SPI_TDR) Mask */
#define SPI_SR_TXEMPTY                      SPI_SR_TXEMPTY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_SR_TXEMPTY_Msk instead */
#define SPI_SR_UNDES_Pos                    10                                             /**< (SPI_SR) Underrun Error Status (Slave mode only) (cleared on read) Position */
#define SPI_SR_UNDES_Msk                    (_U_(0x1) << SPI_SR_UNDES_Pos)                 /**< (SPI_SR) Underrun Error Status (Slave mode only) (cleared on read) Mask */
#define SPI_SR_UNDES                        SPI_SR_UNDES_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_SR_UNDES_Msk instead */
#define SPI_SR_CMP_Pos                      11                                             /**< (SPI_SR) Comparison Status (cleared on read) Position */
#define SPI_SR_CMP_Msk                      (_U_(0x1) << SPI_SR_CMP_Pos)                   /**< (SPI_SR) Comparison Status (cleared on read) Mask */
#define SPI_SR_CMP                          SPI_SR_CMP_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_SR_CMP_Msk instead */
#define SPI_SR_SPIENS_Pos                   16                                             /**< (SPI_SR) SPI Enable Status Position */
#define SPI_SR_SPIENS_Msk                   (_U_(0x1) << SPI_SR_SPIENS_Pos)                /**< (SPI_SR) SPI Enable Status Mask */
#define SPI_SR_SPIENS                       SPI_SR_SPIENS_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_SR_SPIENS_Msk instead */
#define SPI_SR_TXFEF_Pos                    24                                             /**< (SPI_SR) Transmit FIFO Empty Flag (cleared on read) Position */
#define SPI_SR_TXFEF_Msk                    (_U_(0x1) << SPI_SR_TXFEF_Pos)                 /**< (SPI_SR) Transmit FIFO Empty Flag (cleared on read) Mask */
#define SPI_SR_TXFEF                        SPI_SR_TXFEF_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_SR_TXFEF_Msk instead */
#define SPI_SR_TXFFF_Pos                    25                                             /**< (SPI_SR) Transmit FIFO Full Flag (cleared on read) Position */
#define SPI_SR_TXFFF_Msk                    (_U_(0x1) << SPI_SR_TXFFF_Pos)                 /**< (SPI_SR) Transmit FIFO Full Flag (cleared on read) Mask */
#define SPI_SR_TXFFF                        SPI_SR_TXFFF_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_SR_TXFFF_Msk instead */
#define SPI_SR_TXFTHF_Pos                   26                                             /**< (SPI_SR) Transmit FIFO Threshold Flag (cleared on read) Position */
#define SPI_SR_TXFTHF_Msk                   (_U_(0x1) << SPI_SR_TXFTHF_Pos)                /**< (SPI_SR) Transmit FIFO Threshold Flag (cleared on read) Mask */
#define SPI_SR_TXFTHF                       SPI_SR_TXFTHF_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_SR_TXFTHF_Msk instead */
#define SPI_SR_RXFEF_Pos                    27                                             /**< (SPI_SR) Receive FIFO Empty Flag Position */
#define SPI_SR_RXFEF_Msk                    (_U_(0x1) << SPI_SR_RXFEF_Pos)                 /**< (SPI_SR) Receive FIFO Empty Flag Mask */
#define SPI_SR_RXFEF                        SPI_SR_RXFEF_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_SR_RXFEF_Msk instead */
#define SPI_SR_RXFFF_Pos                    28                                             /**< (SPI_SR) Receive FIFO Full Flag Position */
#define SPI_SR_RXFFF_Msk                    (_U_(0x1) << SPI_SR_RXFFF_Pos)                 /**< (SPI_SR) Receive FIFO Full Flag Mask */
#define SPI_SR_RXFFF                        SPI_SR_RXFFF_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_SR_RXFFF_Msk instead */
#define SPI_SR_RXFTHF_Pos                   29                                             /**< (SPI_SR) Receive FIFO Threshold Flag Position */
#define SPI_SR_RXFTHF_Msk                   (_U_(0x1) << SPI_SR_RXFTHF_Pos)                /**< (SPI_SR) Receive FIFO Threshold Flag Mask */
#define SPI_SR_RXFTHF                       SPI_SR_RXFTHF_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_SR_RXFTHF_Msk instead */
#define SPI_SR_TXFPTEF_Pos                  30                                             /**< (SPI_SR) Transmit FIFO Pointer Error Flag Position */
#define SPI_SR_TXFPTEF_Msk                  (_U_(0x1) << SPI_SR_TXFPTEF_Pos)               /**< (SPI_SR) Transmit FIFO Pointer Error Flag Mask */
#define SPI_SR_TXFPTEF                      SPI_SR_TXFPTEF_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_SR_TXFPTEF_Msk instead */
#define SPI_SR_RXFPTEF_Pos                  31                                             /**< (SPI_SR) Receive FIFO Pointer Error Flag Position */
#define SPI_SR_RXFPTEF_Msk                  (_U_(0x1) << SPI_SR_RXFPTEF_Pos)               /**< (SPI_SR) Receive FIFO Pointer Error Flag Mask */
#define SPI_SR_RXFPTEF                      SPI_SR_RXFPTEF_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_SR_RXFPTEF_Msk instead */
#define SPI_SR_MASK                         _U_(0xFF010F0F)                                /**< \deprecated (SPI_SR) Register MASK  (Use SPI_SR_Msk instead)  */
#define SPI_SR_Msk                          _U_(0xFF010F0F)                                /**< (SPI_SR) Register Mask  */


/* -------- SPI_IER : (SPI Offset: 0x14) (/W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RDRF:1;                    /**< bit:      0  Receive Data Register Full Interrupt Enable */
    uint32_t TDRE:1;                    /**< bit:      1  SPI Transmit Data Register Empty Interrupt Enable */
    uint32_t MODF:1;                    /**< bit:      2  Mode Fault Error Interrupt Enable        */
    uint32_t OVRES:1;                   /**< bit:      3  Overrun Error Interrupt Enable           */
    uint32_t :4;                        /**< bit:   4..7  Reserved */
    uint32_t NSSR:1;                    /**< bit:      8  NSS Rising Interrupt Enable              */
    uint32_t TXEMPTY:1;                 /**< bit:      9  Transmission Registers Empty Enable      */
    uint32_t UNDES:1;                   /**< bit:     10  Underrun Error Interrupt Enable          */
    uint32_t CMP:1;                     /**< bit:     11  Comparison Interrupt Enable              */
    uint32_t :12;                       /**< bit: 12..23  Reserved */
    uint32_t TXFEF:1;                   /**< bit:     24  TXFEF Interrupt Enable                   */
    uint32_t TXFFF:1;                   /**< bit:     25  TXFFF Interrupt Enable                   */
    uint32_t TXFTHF:1;                  /**< bit:     26  TXFTHF Interrupt Enable                  */
    uint32_t RXFEF:1;                   /**< bit:     27  RXFEF Interrupt Enable                   */
    uint32_t RXFFF:1;                   /**< bit:     28  RXFFF Interrupt Enable                   */
    uint32_t RXFTHF:1;                  /**< bit:     29  RXFTHF Interrupt Enable                  */
    uint32_t TXFPTEF:1;                 /**< bit:     30  TXFPTEF Interrupt Enable                 */
    uint32_t RXFPTEF:1;                 /**< bit:     31  RXFPTEF Interrupt Enable                 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SPI_IER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_IER_OFFSET                      (0x14)                                        /**<  (SPI_IER) Interrupt Enable Register  Offset */

#define SPI_IER_RDRF_Pos                    0                                              /**< (SPI_IER) Receive Data Register Full Interrupt Enable Position */
#define SPI_IER_RDRF_Msk                    (_U_(0x1) << SPI_IER_RDRF_Pos)                 /**< (SPI_IER) Receive Data Register Full Interrupt Enable Mask */
#define SPI_IER_RDRF                        SPI_IER_RDRF_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IER_RDRF_Msk instead */
#define SPI_IER_TDRE_Pos                    1                                              /**< (SPI_IER) SPI Transmit Data Register Empty Interrupt Enable Position */
#define SPI_IER_TDRE_Msk                    (_U_(0x1) << SPI_IER_TDRE_Pos)                 /**< (SPI_IER) SPI Transmit Data Register Empty Interrupt Enable Mask */
#define SPI_IER_TDRE                        SPI_IER_TDRE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IER_TDRE_Msk instead */
#define SPI_IER_MODF_Pos                    2                                              /**< (SPI_IER) Mode Fault Error Interrupt Enable Position */
#define SPI_IER_MODF_Msk                    (_U_(0x1) << SPI_IER_MODF_Pos)                 /**< (SPI_IER) Mode Fault Error Interrupt Enable Mask */
#define SPI_IER_MODF                        SPI_IER_MODF_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IER_MODF_Msk instead */
#define SPI_IER_OVRES_Pos                   3                                              /**< (SPI_IER) Overrun Error Interrupt Enable Position */
#define SPI_IER_OVRES_Msk                   (_U_(0x1) << SPI_IER_OVRES_Pos)                /**< (SPI_IER) Overrun Error Interrupt Enable Mask */
#define SPI_IER_OVRES                       SPI_IER_OVRES_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IER_OVRES_Msk instead */
#define SPI_IER_NSSR_Pos                    8                                              /**< (SPI_IER) NSS Rising Interrupt Enable Position */
#define SPI_IER_NSSR_Msk                    (_U_(0x1) << SPI_IER_NSSR_Pos)                 /**< (SPI_IER) NSS Rising Interrupt Enable Mask */
#define SPI_IER_NSSR                        SPI_IER_NSSR_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IER_NSSR_Msk instead */
#define SPI_IER_TXEMPTY_Pos                 9                                              /**< (SPI_IER) Transmission Registers Empty Enable Position */
#define SPI_IER_TXEMPTY_Msk                 (_U_(0x1) << SPI_IER_TXEMPTY_Pos)              /**< (SPI_IER) Transmission Registers Empty Enable Mask */
#define SPI_IER_TXEMPTY                     SPI_IER_TXEMPTY_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IER_TXEMPTY_Msk instead */
#define SPI_IER_UNDES_Pos                   10                                             /**< (SPI_IER) Underrun Error Interrupt Enable Position */
#define SPI_IER_UNDES_Msk                   (_U_(0x1) << SPI_IER_UNDES_Pos)                /**< (SPI_IER) Underrun Error Interrupt Enable Mask */
#define SPI_IER_UNDES                       SPI_IER_UNDES_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IER_UNDES_Msk instead */
#define SPI_IER_CMP_Pos                     11                                             /**< (SPI_IER) Comparison Interrupt Enable Position */
#define SPI_IER_CMP_Msk                     (_U_(0x1) << SPI_IER_CMP_Pos)                  /**< (SPI_IER) Comparison Interrupt Enable Mask */
#define SPI_IER_CMP                         SPI_IER_CMP_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IER_CMP_Msk instead */
#define SPI_IER_TXFEF_Pos                   24                                             /**< (SPI_IER) TXFEF Interrupt Enable Position */
#define SPI_IER_TXFEF_Msk                   (_U_(0x1) << SPI_IER_TXFEF_Pos)                /**< (SPI_IER) TXFEF Interrupt Enable Mask */
#define SPI_IER_TXFEF                       SPI_IER_TXFEF_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IER_TXFEF_Msk instead */
#define SPI_IER_TXFFF_Pos                   25                                             /**< (SPI_IER) TXFFF Interrupt Enable Position */
#define SPI_IER_TXFFF_Msk                   (_U_(0x1) << SPI_IER_TXFFF_Pos)                /**< (SPI_IER) TXFFF Interrupt Enable Mask */
#define SPI_IER_TXFFF                       SPI_IER_TXFFF_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IER_TXFFF_Msk instead */
#define SPI_IER_TXFTHF_Pos                  26                                             /**< (SPI_IER) TXFTHF Interrupt Enable Position */
#define SPI_IER_TXFTHF_Msk                  (_U_(0x1) << SPI_IER_TXFTHF_Pos)               /**< (SPI_IER) TXFTHF Interrupt Enable Mask */
#define SPI_IER_TXFTHF                      SPI_IER_TXFTHF_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IER_TXFTHF_Msk instead */
#define SPI_IER_RXFEF_Pos                   27                                             /**< (SPI_IER) RXFEF Interrupt Enable Position */
#define SPI_IER_RXFEF_Msk                   (_U_(0x1) << SPI_IER_RXFEF_Pos)                /**< (SPI_IER) RXFEF Interrupt Enable Mask */
#define SPI_IER_RXFEF                       SPI_IER_RXFEF_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IER_RXFEF_Msk instead */
#define SPI_IER_RXFFF_Pos                   28                                             /**< (SPI_IER) RXFFF Interrupt Enable Position */
#define SPI_IER_RXFFF_Msk                   (_U_(0x1) << SPI_IER_RXFFF_Pos)                /**< (SPI_IER) RXFFF Interrupt Enable Mask */
#define SPI_IER_RXFFF                       SPI_IER_RXFFF_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IER_RXFFF_Msk instead */
#define SPI_IER_RXFTHF_Pos                  29                                             /**< (SPI_IER) RXFTHF Interrupt Enable Position */
#define SPI_IER_RXFTHF_Msk                  (_U_(0x1) << SPI_IER_RXFTHF_Pos)               /**< (SPI_IER) RXFTHF Interrupt Enable Mask */
#define SPI_IER_RXFTHF                      SPI_IER_RXFTHF_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IER_RXFTHF_Msk instead */
#define SPI_IER_TXFPTEF_Pos                 30                                             /**< (SPI_IER) TXFPTEF Interrupt Enable Position */
#define SPI_IER_TXFPTEF_Msk                 (_U_(0x1) << SPI_IER_TXFPTEF_Pos)              /**< (SPI_IER) TXFPTEF Interrupt Enable Mask */
#define SPI_IER_TXFPTEF                     SPI_IER_TXFPTEF_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IER_TXFPTEF_Msk instead */
#define SPI_IER_RXFPTEF_Pos                 31                                             /**< (SPI_IER) RXFPTEF Interrupt Enable Position */
#define SPI_IER_RXFPTEF_Msk                 (_U_(0x1) << SPI_IER_RXFPTEF_Pos)              /**< (SPI_IER) RXFPTEF Interrupt Enable Mask */
#define SPI_IER_RXFPTEF                     SPI_IER_RXFPTEF_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IER_RXFPTEF_Msk instead */
#define SPI_IER_MASK                        _U_(0xFF000F0F)                                /**< \deprecated (SPI_IER) Register MASK  (Use SPI_IER_Msk instead)  */
#define SPI_IER_Msk                         _U_(0xFF000F0F)                                /**< (SPI_IER) Register Mask  */


/* -------- SPI_IDR : (SPI Offset: 0x18) (/W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RDRF:1;                    /**< bit:      0  Receive Data Register Full Interrupt Disable */
    uint32_t TDRE:1;                    /**< bit:      1  SPI Transmit Data Register Empty Interrupt Disable */
    uint32_t MODF:1;                    /**< bit:      2  Mode Fault Error Interrupt Disable       */
    uint32_t OVRES:1;                   /**< bit:      3  Overrun Error Interrupt Disable          */
    uint32_t :4;                        /**< bit:   4..7  Reserved */
    uint32_t NSSR:1;                    /**< bit:      8  NSS Rising Interrupt Disable             */
    uint32_t TXEMPTY:1;                 /**< bit:      9  Transmission Registers Empty Disable     */
    uint32_t UNDES:1;                   /**< bit:     10  Underrun Error Interrupt Disable         */
    uint32_t CMP:1;                     /**< bit:     11  Comparison Interrupt Disable             */
    uint32_t :12;                       /**< bit: 12..23  Reserved */
    uint32_t TXFEF:1;                   /**< bit:     24  TXFEF Interrupt Disable                  */
    uint32_t TXFFF:1;                   /**< bit:     25  TXFFF Interrupt Disable                  */
    uint32_t TXFTHF:1;                  /**< bit:     26  TXFTHF Interrupt Disable                 */
    uint32_t RXFEF:1;                   /**< bit:     27  RXFEF Interrupt Disable                  */
    uint32_t RXFFF:1;                   /**< bit:     28  RXFFF Interrupt Disable                  */
    uint32_t RXFTHF:1;                  /**< bit:     29  RXFTHF Interrupt Disable                 */
    uint32_t TXFPTEF:1;                 /**< bit:     30  TXFPTEF Interrupt Disable                */
    uint32_t RXFPTEF:1;                 /**< bit:     31  RXFPTEF Interrupt Disable                */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SPI_IDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_IDR_OFFSET                      (0x18)                                        /**<  (SPI_IDR) Interrupt Disable Register  Offset */

#define SPI_IDR_RDRF_Pos                    0                                              /**< (SPI_IDR) Receive Data Register Full Interrupt Disable Position */
#define SPI_IDR_RDRF_Msk                    (_U_(0x1) << SPI_IDR_RDRF_Pos)                 /**< (SPI_IDR) Receive Data Register Full Interrupt Disable Mask */
#define SPI_IDR_RDRF                        SPI_IDR_RDRF_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IDR_RDRF_Msk instead */
#define SPI_IDR_TDRE_Pos                    1                                              /**< (SPI_IDR) SPI Transmit Data Register Empty Interrupt Disable Position */
#define SPI_IDR_TDRE_Msk                    (_U_(0x1) << SPI_IDR_TDRE_Pos)                 /**< (SPI_IDR) SPI Transmit Data Register Empty Interrupt Disable Mask */
#define SPI_IDR_TDRE                        SPI_IDR_TDRE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IDR_TDRE_Msk instead */
#define SPI_IDR_MODF_Pos                    2                                              /**< (SPI_IDR) Mode Fault Error Interrupt Disable Position */
#define SPI_IDR_MODF_Msk                    (_U_(0x1) << SPI_IDR_MODF_Pos)                 /**< (SPI_IDR) Mode Fault Error Interrupt Disable Mask */
#define SPI_IDR_MODF                        SPI_IDR_MODF_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IDR_MODF_Msk instead */
#define SPI_IDR_OVRES_Pos                   3                                              /**< (SPI_IDR) Overrun Error Interrupt Disable Position */
#define SPI_IDR_OVRES_Msk                   (_U_(0x1) << SPI_IDR_OVRES_Pos)                /**< (SPI_IDR) Overrun Error Interrupt Disable Mask */
#define SPI_IDR_OVRES                       SPI_IDR_OVRES_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IDR_OVRES_Msk instead */
#define SPI_IDR_NSSR_Pos                    8                                              /**< (SPI_IDR) NSS Rising Interrupt Disable Position */
#define SPI_IDR_NSSR_Msk                    (_U_(0x1) << SPI_IDR_NSSR_Pos)                 /**< (SPI_IDR) NSS Rising Interrupt Disable Mask */
#define SPI_IDR_NSSR                        SPI_IDR_NSSR_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IDR_NSSR_Msk instead */
#define SPI_IDR_TXEMPTY_Pos                 9                                              /**< (SPI_IDR) Transmission Registers Empty Disable Position */
#define SPI_IDR_TXEMPTY_Msk                 (_U_(0x1) << SPI_IDR_TXEMPTY_Pos)              /**< (SPI_IDR) Transmission Registers Empty Disable Mask */
#define SPI_IDR_TXEMPTY                     SPI_IDR_TXEMPTY_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IDR_TXEMPTY_Msk instead */
#define SPI_IDR_UNDES_Pos                   10                                             /**< (SPI_IDR) Underrun Error Interrupt Disable Position */
#define SPI_IDR_UNDES_Msk                   (_U_(0x1) << SPI_IDR_UNDES_Pos)                /**< (SPI_IDR) Underrun Error Interrupt Disable Mask */
#define SPI_IDR_UNDES                       SPI_IDR_UNDES_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IDR_UNDES_Msk instead */
#define SPI_IDR_CMP_Pos                     11                                             /**< (SPI_IDR) Comparison Interrupt Disable Position */
#define SPI_IDR_CMP_Msk                     (_U_(0x1) << SPI_IDR_CMP_Pos)                  /**< (SPI_IDR) Comparison Interrupt Disable Mask */
#define SPI_IDR_CMP                         SPI_IDR_CMP_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IDR_CMP_Msk instead */
#define SPI_IDR_TXFEF_Pos                   24                                             /**< (SPI_IDR) TXFEF Interrupt Disable Position */
#define SPI_IDR_TXFEF_Msk                   (_U_(0x1) << SPI_IDR_TXFEF_Pos)                /**< (SPI_IDR) TXFEF Interrupt Disable Mask */
#define SPI_IDR_TXFEF                       SPI_IDR_TXFEF_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IDR_TXFEF_Msk instead */
#define SPI_IDR_TXFFF_Pos                   25                                             /**< (SPI_IDR) TXFFF Interrupt Disable Position */
#define SPI_IDR_TXFFF_Msk                   (_U_(0x1) << SPI_IDR_TXFFF_Pos)                /**< (SPI_IDR) TXFFF Interrupt Disable Mask */
#define SPI_IDR_TXFFF                       SPI_IDR_TXFFF_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IDR_TXFFF_Msk instead */
#define SPI_IDR_TXFTHF_Pos                  26                                             /**< (SPI_IDR) TXFTHF Interrupt Disable Position */
#define SPI_IDR_TXFTHF_Msk                  (_U_(0x1) << SPI_IDR_TXFTHF_Pos)               /**< (SPI_IDR) TXFTHF Interrupt Disable Mask */
#define SPI_IDR_TXFTHF                      SPI_IDR_TXFTHF_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IDR_TXFTHF_Msk instead */
#define SPI_IDR_RXFEF_Pos                   27                                             /**< (SPI_IDR) RXFEF Interrupt Disable Position */
#define SPI_IDR_RXFEF_Msk                   (_U_(0x1) << SPI_IDR_RXFEF_Pos)                /**< (SPI_IDR) RXFEF Interrupt Disable Mask */
#define SPI_IDR_RXFEF                       SPI_IDR_RXFEF_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IDR_RXFEF_Msk instead */
#define SPI_IDR_RXFFF_Pos                   28                                             /**< (SPI_IDR) RXFFF Interrupt Disable Position */
#define SPI_IDR_RXFFF_Msk                   (_U_(0x1) << SPI_IDR_RXFFF_Pos)                /**< (SPI_IDR) RXFFF Interrupt Disable Mask */
#define SPI_IDR_RXFFF                       SPI_IDR_RXFFF_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IDR_RXFFF_Msk instead */
#define SPI_IDR_RXFTHF_Pos                  29                                             /**< (SPI_IDR) RXFTHF Interrupt Disable Position */
#define SPI_IDR_RXFTHF_Msk                  (_U_(0x1) << SPI_IDR_RXFTHF_Pos)               /**< (SPI_IDR) RXFTHF Interrupt Disable Mask */
#define SPI_IDR_RXFTHF                      SPI_IDR_RXFTHF_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IDR_RXFTHF_Msk instead */
#define SPI_IDR_TXFPTEF_Pos                 30                                             /**< (SPI_IDR) TXFPTEF Interrupt Disable Position */
#define SPI_IDR_TXFPTEF_Msk                 (_U_(0x1) << SPI_IDR_TXFPTEF_Pos)              /**< (SPI_IDR) TXFPTEF Interrupt Disable Mask */
#define SPI_IDR_TXFPTEF                     SPI_IDR_TXFPTEF_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IDR_TXFPTEF_Msk instead */
#define SPI_IDR_RXFPTEF_Pos                 31                                             /**< (SPI_IDR) RXFPTEF Interrupt Disable Position */
#define SPI_IDR_RXFPTEF_Msk                 (_U_(0x1) << SPI_IDR_RXFPTEF_Pos)              /**< (SPI_IDR) RXFPTEF Interrupt Disable Mask */
#define SPI_IDR_RXFPTEF                     SPI_IDR_RXFPTEF_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IDR_RXFPTEF_Msk instead */
#define SPI_IDR_MASK                        _U_(0xFF000F0F)                                /**< \deprecated (SPI_IDR) Register MASK  (Use SPI_IDR_Msk instead)  */
#define SPI_IDR_Msk                         _U_(0xFF000F0F)                                /**< (SPI_IDR) Register Mask  */


/* -------- SPI_IMR : (SPI Offset: 0x1c) (R/ 32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RDRF:1;                    /**< bit:      0  Receive Data Register Full Interrupt Mask */
    uint32_t TDRE:1;                    /**< bit:      1  SPI Transmit Data Register Empty Interrupt Mask */
    uint32_t MODF:1;                    /**< bit:      2  Mode Fault Error Interrupt Mask          */
    uint32_t OVRES:1;                   /**< bit:      3  Overrun Error Interrupt Mask             */
    uint32_t :4;                        /**< bit:   4..7  Reserved */
    uint32_t NSSR:1;                    /**< bit:      8  NSS Rising Interrupt Mask                */
    uint32_t TXEMPTY:1;                 /**< bit:      9  Transmission Registers Empty Mask        */
    uint32_t UNDES:1;                   /**< bit:     10  Underrun Error Interrupt Mask            */
    uint32_t CMP:1;                     /**< bit:     11  Comparison Interrupt Mask                */
    uint32_t :12;                       /**< bit: 12..23  Reserved */
    uint32_t TXFEF:1;                   /**< bit:     24  TXFEF Interrupt Mask                     */
    uint32_t TXFFF:1;                   /**< bit:     25  TXFFF Interrupt Mask                     */
    uint32_t TXFTHF:1;                  /**< bit:     26  TXFTHF Interrupt Mask                    */
    uint32_t RXFEF:1;                   /**< bit:     27  RXFEF Interrupt Mask                     */
    uint32_t RXFFF:1;                   /**< bit:     28  RXFFF Interrupt Mask                     */
    uint32_t RXFTHF:1;                  /**< bit:     29  RXFTHF Interrupt Mask                    */
    uint32_t TXFPTEF:1;                 /**< bit:     30  TXFPTEF Interrupt Mask                   */
    uint32_t RXFPTEF:1;                 /**< bit:     31  RXFPTEF Interrupt Mask                   */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SPI_IMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_IMR_OFFSET                      (0x1C)                                        /**<  (SPI_IMR) Interrupt Mask Register  Offset */

#define SPI_IMR_RDRF_Pos                    0                                              /**< (SPI_IMR) Receive Data Register Full Interrupt Mask Position */
#define SPI_IMR_RDRF_Msk                    (_U_(0x1) << SPI_IMR_RDRF_Pos)                 /**< (SPI_IMR) Receive Data Register Full Interrupt Mask Mask */
#define SPI_IMR_RDRF                        SPI_IMR_RDRF_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IMR_RDRF_Msk instead */
#define SPI_IMR_TDRE_Pos                    1                                              /**< (SPI_IMR) SPI Transmit Data Register Empty Interrupt Mask Position */
#define SPI_IMR_TDRE_Msk                    (_U_(0x1) << SPI_IMR_TDRE_Pos)                 /**< (SPI_IMR) SPI Transmit Data Register Empty Interrupt Mask Mask */
#define SPI_IMR_TDRE                        SPI_IMR_TDRE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IMR_TDRE_Msk instead */
#define SPI_IMR_MODF_Pos                    2                                              /**< (SPI_IMR) Mode Fault Error Interrupt Mask Position */
#define SPI_IMR_MODF_Msk                    (_U_(0x1) << SPI_IMR_MODF_Pos)                 /**< (SPI_IMR) Mode Fault Error Interrupt Mask Mask */
#define SPI_IMR_MODF                        SPI_IMR_MODF_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IMR_MODF_Msk instead */
#define SPI_IMR_OVRES_Pos                   3                                              /**< (SPI_IMR) Overrun Error Interrupt Mask Position */
#define SPI_IMR_OVRES_Msk                   (_U_(0x1) << SPI_IMR_OVRES_Pos)                /**< (SPI_IMR) Overrun Error Interrupt Mask Mask */
#define SPI_IMR_OVRES                       SPI_IMR_OVRES_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IMR_OVRES_Msk instead */
#define SPI_IMR_NSSR_Pos                    8                                              /**< (SPI_IMR) NSS Rising Interrupt Mask Position */
#define SPI_IMR_NSSR_Msk                    (_U_(0x1) << SPI_IMR_NSSR_Pos)                 /**< (SPI_IMR) NSS Rising Interrupt Mask Mask */
#define SPI_IMR_NSSR                        SPI_IMR_NSSR_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IMR_NSSR_Msk instead */
#define SPI_IMR_TXEMPTY_Pos                 9                                              /**< (SPI_IMR) Transmission Registers Empty Mask Position */
#define SPI_IMR_TXEMPTY_Msk                 (_U_(0x1) << SPI_IMR_TXEMPTY_Pos)              /**< (SPI_IMR) Transmission Registers Empty Mask Mask */
#define SPI_IMR_TXEMPTY                     SPI_IMR_TXEMPTY_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IMR_TXEMPTY_Msk instead */
#define SPI_IMR_UNDES_Pos                   10                                             /**< (SPI_IMR) Underrun Error Interrupt Mask Position */
#define SPI_IMR_UNDES_Msk                   (_U_(0x1) << SPI_IMR_UNDES_Pos)                /**< (SPI_IMR) Underrun Error Interrupt Mask Mask */
#define SPI_IMR_UNDES                       SPI_IMR_UNDES_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IMR_UNDES_Msk instead */
#define SPI_IMR_CMP_Pos                     11                                             /**< (SPI_IMR) Comparison Interrupt Mask Position */
#define SPI_IMR_CMP_Msk                     (_U_(0x1) << SPI_IMR_CMP_Pos)                  /**< (SPI_IMR) Comparison Interrupt Mask Mask */
#define SPI_IMR_CMP                         SPI_IMR_CMP_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IMR_CMP_Msk instead */
#define SPI_IMR_TXFEF_Pos                   24                                             /**< (SPI_IMR) TXFEF Interrupt Mask Position */
#define SPI_IMR_TXFEF_Msk                   (_U_(0x1) << SPI_IMR_TXFEF_Pos)                /**< (SPI_IMR) TXFEF Interrupt Mask Mask */
#define SPI_IMR_TXFEF                       SPI_IMR_TXFEF_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IMR_TXFEF_Msk instead */
#define SPI_IMR_TXFFF_Pos                   25                                             /**< (SPI_IMR) TXFFF Interrupt Mask Position */
#define SPI_IMR_TXFFF_Msk                   (_U_(0x1) << SPI_IMR_TXFFF_Pos)                /**< (SPI_IMR) TXFFF Interrupt Mask Mask */
#define SPI_IMR_TXFFF                       SPI_IMR_TXFFF_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IMR_TXFFF_Msk instead */
#define SPI_IMR_TXFTHF_Pos                  26                                             /**< (SPI_IMR) TXFTHF Interrupt Mask Position */
#define SPI_IMR_TXFTHF_Msk                  (_U_(0x1) << SPI_IMR_TXFTHF_Pos)               /**< (SPI_IMR) TXFTHF Interrupt Mask Mask */
#define SPI_IMR_TXFTHF                      SPI_IMR_TXFTHF_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IMR_TXFTHF_Msk instead */
#define SPI_IMR_RXFEF_Pos                   27                                             /**< (SPI_IMR) RXFEF Interrupt Mask Position */
#define SPI_IMR_RXFEF_Msk                   (_U_(0x1) << SPI_IMR_RXFEF_Pos)                /**< (SPI_IMR) RXFEF Interrupt Mask Mask */
#define SPI_IMR_RXFEF                       SPI_IMR_RXFEF_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IMR_RXFEF_Msk instead */
#define SPI_IMR_RXFFF_Pos                   28                                             /**< (SPI_IMR) RXFFF Interrupt Mask Position */
#define SPI_IMR_RXFFF_Msk                   (_U_(0x1) << SPI_IMR_RXFFF_Pos)                /**< (SPI_IMR) RXFFF Interrupt Mask Mask */
#define SPI_IMR_RXFFF                       SPI_IMR_RXFFF_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IMR_RXFFF_Msk instead */
#define SPI_IMR_RXFTHF_Pos                  29                                             /**< (SPI_IMR) RXFTHF Interrupt Mask Position */
#define SPI_IMR_RXFTHF_Msk                  (_U_(0x1) << SPI_IMR_RXFTHF_Pos)               /**< (SPI_IMR) RXFTHF Interrupt Mask Mask */
#define SPI_IMR_RXFTHF                      SPI_IMR_RXFTHF_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IMR_RXFTHF_Msk instead */
#define SPI_IMR_TXFPTEF_Pos                 30                                             /**< (SPI_IMR) TXFPTEF Interrupt Mask Position */
#define SPI_IMR_TXFPTEF_Msk                 (_U_(0x1) << SPI_IMR_TXFPTEF_Pos)              /**< (SPI_IMR) TXFPTEF Interrupt Mask Mask */
#define SPI_IMR_TXFPTEF                     SPI_IMR_TXFPTEF_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IMR_TXFPTEF_Msk instead */
#define SPI_IMR_RXFPTEF_Pos                 31                                             /**< (SPI_IMR) RXFPTEF Interrupt Mask Position */
#define SPI_IMR_RXFPTEF_Msk                 (_U_(0x1) << SPI_IMR_RXFPTEF_Pos)              /**< (SPI_IMR) RXFPTEF Interrupt Mask Mask */
#define SPI_IMR_RXFPTEF                     SPI_IMR_RXFPTEF_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_IMR_RXFPTEF_Msk instead */
#define SPI_IMR_MASK                        _U_(0xFF000F0F)                                /**< \deprecated (SPI_IMR) Register MASK  (Use SPI_IMR_Msk instead)  */
#define SPI_IMR_Msk                         _U_(0xFF000F0F)                                /**< (SPI_IMR) Register Mask  */


/* -------- SPI_CSR : (SPI Offset: 0x30) (R/W 32) Chip Select Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CPOL:1;                    /**< bit:      0  Clock Polarity                           */
    uint32_t NCPHA:1;                   /**< bit:      1  Clock Phase                              */
    uint32_t CSNAAT:1;                  /**< bit:      2  Chip Select Not Active After Transfer (ignored if CSAAT = 1) */
    uint32_t CSAAT:1;                   /**< bit:      3  Chip Select Active After Transfer        */
    uint32_t BITS:4;                    /**< bit:   4..7  Bits Per Transfer                        */
    uint32_t SCBR:8;                    /**< bit:  8..15  Serial Clock Bit Rate                    */
    uint32_t DLYBS:8;                   /**< bit: 16..23  Delay Before SPCK                        */
    uint32_t DLYBCT:8;                  /**< bit: 24..31  Delay Between Consecutive Transfers      */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SPI_CSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_CSR_OFFSET                      (0x30)                                        /**<  (SPI_CSR) Chip Select Register  Offset */

#define SPI_CSR_CPOL_Pos                    0                                              /**< (SPI_CSR) Clock Polarity Position */
#define SPI_CSR_CPOL_Msk                    (_U_(0x1) << SPI_CSR_CPOL_Pos)                 /**< (SPI_CSR) Clock Polarity Mask */
#define SPI_CSR_CPOL                        SPI_CSR_CPOL_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_CSR_CPOL_Msk instead */
#define   SPI_CSR_CPOL_IDLE_LOW_Val         _U_(0x0)                                       /**< (SPI_CSR) Clock is low when inactive (CPOL=0)  */
#define   SPI_CSR_CPOL_IDLE_HIGH_Val        _U_(0x1)                                       /**< (SPI_CSR) Clock is high when inactive (CPOL=1)  */
#define SPI_CSR_CPOL_IDLE_LOW               (SPI_CSR_CPOL_IDLE_LOW_Val << SPI_CSR_CPOL_Pos)  /**< (SPI_CSR) Clock is low when inactive (CPOL=0) Position  */
#define SPI_CSR_CPOL_IDLE_HIGH              (SPI_CSR_CPOL_IDLE_HIGH_Val << SPI_CSR_CPOL_Pos)  /**< (SPI_CSR) Clock is high when inactive (CPOL=1) Position  */
#define SPI_CSR_NCPHA_Pos                   1                                              /**< (SPI_CSR) Clock Phase Position */
#define SPI_CSR_NCPHA_Msk                   (_U_(0x1) << SPI_CSR_NCPHA_Pos)                /**< (SPI_CSR) Clock Phase Mask */
#define SPI_CSR_NCPHA                       SPI_CSR_NCPHA_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_CSR_NCPHA_Msk instead */
#define   SPI_CSR_NCPHA_VALID_LEADING_EDGE_Val _U_(0x1)                                       /**< (SPI_CSR) Data is valid on clock leading edge (CPHA=0)  */
#define   SPI_CSR_NCPHA_VALID_TRAILING_EDGE_Val _U_(0x0)                                       /**< (SPI_CSR) Data is valid on clock trailing edge (CPHA=1)  */
#define SPI_CSR_NCPHA_VALID_LEADING_EDGE    (SPI_CSR_NCPHA_VALID_LEADING_EDGE_Val << SPI_CSR_NCPHA_Pos)  /**< (SPI_CSR) Data is valid on clock leading edge (CPHA=0) Position  */
#define SPI_CSR_NCPHA_VALID_TRAILING_EDGE   (SPI_CSR_NCPHA_VALID_TRAILING_EDGE_Val << SPI_CSR_NCPHA_Pos)  /**< (SPI_CSR) Data is valid on clock trailing edge (CPHA=1) Position  */
#define SPI_CSR_CSNAAT_Pos                  2                                              /**< (SPI_CSR) Chip Select Not Active After Transfer (ignored if CSAAT = 1) Position */
#define SPI_CSR_CSNAAT_Msk                  (_U_(0x1) << SPI_CSR_CSNAAT_Pos)               /**< (SPI_CSR) Chip Select Not Active After Transfer (ignored if CSAAT = 1) Mask */
#define SPI_CSR_CSNAAT                      SPI_CSR_CSNAAT_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_CSR_CSNAAT_Msk instead */
#define SPI_CSR_CSAAT_Pos                   3                                              /**< (SPI_CSR) Chip Select Active After Transfer Position */
#define SPI_CSR_CSAAT_Msk                   (_U_(0x1) << SPI_CSR_CSAAT_Pos)                /**< (SPI_CSR) Chip Select Active After Transfer Mask */
#define SPI_CSR_CSAAT                       SPI_CSR_CSAAT_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_CSR_CSAAT_Msk instead */
#define SPI_CSR_BITS_Pos                    4                                              /**< (SPI_CSR) Bits Per Transfer Position */
#define SPI_CSR_BITS_Msk                    (_U_(0xF) << SPI_CSR_BITS_Pos)                 /**< (SPI_CSR) Bits Per Transfer Mask */
#define SPI_CSR_BITS(value)                 (SPI_CSR_BITS_Msk & ((value) << SPI_CSR_BITS_Pos))
#define   SPI_CSR_BITS_8_BIT_Val            _U_(0x0)                                       /**< (SPI_CSR) 8 bits for transfer  */
#define   SPI_CSR_BITS_9_BIT_Val            _U_(0x1)                                       /**< (SPI_CSR) 9 bits for transfer  */
#define   SPI_CSR_BITS_10_BIT_Val           _U_(0x2)                                       /**< (SPI_CSR) 10 bits for transfer  */
#define   SPI_CSR_BITS_11_BIT_Val           _U_(0x3)                                       /**< (SPI_CSR) 11 bits for transfer  */
#define   SPI_CSR_BITS_12_BIT_Val           _U_(0x4)                                       /**< (SPI_CSR) 12 bits for transfer  */
#define   SPI_CSR_BITS_13_BIT_Val           _U_(0x5)                                       /**< (SPI_CSR) 13 bits for transfer  */
#define   SPI_CSR_BITS_14_BIT_Val           _U_(0x6)                                       /**< (SPI_CSR) 14 bits for transfer  */
#define   SPI_CSR_BITS_15_BIT_Val           _U_(0x7)                                       /**< (SPI_CSR) 15 bits for transfer  */
#define   SPI_CSR_BITS_16_BIT_Val           _U_(0x8)                                       /**< (SPI_CSR) 16 bits for transfer  */
#define SPI_CSR_BITS_8_BIT                  (SPI_CSR_BITS_8_BIT_Val << SPI_CSR_BITS_Pos)   /**< (SPI_CSR) 8 bits for transfer Position  */
#define SPI_CSR_BITS_9_BIT                  (SPI_CSR_BITS_9_BIT_Val << SPI_CSR_BITS_Pos)   /**< (SPI_CSR) 9 bits for transfer Position  */
#define SPI_CSR_BITS_10_BIT                 (SPI_CSR_BITS_10_BIT_Val << SPI_CSR_BITS_Pos)  /**< (SPI_CSR) 10 bits for transfer Position  */
#define SPI_CSR_BITS_11_BIT                 (SPI_CSR_BITS_11_BIT_Val << SPI_CSR_BITS_Pos)  /**< (SPI_CSR) 11 bits for transfer Position  */
#define SPI_CSR_BITS_12_BIT                 (SPI_CSR_BITS_12_BIT_Val << SPI_CSR_BITS_Pos)  /**< (SPI_CSR) 12 bits for transfer Position  */
#define SPI_CSR_BITS_13_BIT                 (SPI_CSR_BITS_13_BIT_Val << SPI_CSR_BITS_Pos)  /**< (SPI_CSR) 13 bits for transfer Position  */
#define SPI_CSR_BITS_14_BIT                 (SPI_CSR_BITS_14_BIT_Val << SPI_CSR_BITS_Pos)  /**< (SPI_CSR) 14 bits for transfer Position  */
#define SPI_CSR_BITS_15_BIT                 (SPI_CSR_BITS_15_BIT_Val << SPI_CSR_BITS_Pos)  /**< (SPI_CSR) 15 bits for transfer Position  */
#define SPI_CSR_BITS_16_BIT                 (SPI_CSR_BITS_16_BIT_Val << SPI_CSR_BITS_Pos)  /**< (SPI_CSR) 16 bits for transfer Position  */
#define SPI_CSR_SCBR_Pos                    8                                              /**< (SPI_CSR) Serial Clock Bit Rate Position */
#define SPI_CSR_SCBR_Msk                    (_U_(0xFF) << SPI_CSR_SCBR_Pos)                /**< (SPI_CSR) Serial Clock Bit Rate Mask */
#define SPI_CSR_SCBR(value)                 (SPI_CSR_SCBR_Msk & ((value) << SPI_CSR_SCBR_Pos))
#define SPI_CSR_DLYBS_Pos                   16                                             /**< (SPI_CSR) Delay Before SPCK Position */
#define SPI_CSR_DLYBS_Msk                   (_U_(0xFF) << SPI_CSR_DLYBS_Pos)               /**< (SPI_CSR) Delay Before SPCK Mask */
#define SPI_CSR_DLYBS(value)                (SPI_CSR_DLYBS_Msk & ((value) << SPI_CSR_DLYBS_Pos))
#define SPI_CSR_DLYBCT_Pos                  24                                             /**< (SPI_CSR) Delay Between Consecutive Transfers Position */
#define SPI_CSR_DLYBCT_Msk                  (_U_(0xFF) << SPI_CSR_DLYBCT_Pos)              /**< (SPI_CSR) Delay Between Consecutive Transfers Mask */
#define SPI_CSR_DLYBCT(value)               (SPI_CSR_DLYBCT_Msk & ((value) << SPI_CSR_DLYBCT_Pos))
#define SPI_CSR_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (SPI_CSR) Register MASK  (Use SPI_CSR_Msk instead)  */
#define SPI_CSR_Msk                         _U_(0xFFFFFFFF)                                /**< (SPI_CSR) Register Mask  */


/* -------- SPI_FMR : (SPI Offset: 0x40) (R/W 32) FIFO Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXRDYM:2;                  /**< bit:   0..1  Transmit Data Register Empty Mode        */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t RXRDYM:2;                  /**< bit:   4..5  Receive Data Register Full Mode          */
    uint32_t :10;                       /**< bit:  6..15  Reserved */
    uint32_t TXFTHRES:6;                /**< bit: 16..21  Transmit FIFO Threshold                  */
    uint32_t :2;                        /**< bit: 22..23  Reserved */
    uint32_t RXFTHRES:6;                /**< bit: 24..29  Receive FIFO Threshold                   */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SPI_FMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_FMR_OFFSET                      (0x40)                                        /**<  (SPI_FMR) FIFO Mode Register  Offset */

#define SPI_FMR_TXRDYM_Pos                  0                                              /**< (SPI_FMR) Transmit Data Register Empty Mode Position */
#define SPI_FMR_TXRDYM_Msk                  (_U_(0x3) << SPI_FMR_TXRDYM_Pos)               /**< (SPI_FMR) Transmit Data Register Empty Mode Mask */
#define SPI_FMR_TXRDYM(value)               (SPI_FMR_TXRDYM_Msk & ((value) << SPI_FMR_TXRDYM_Pos))
#define   SPI_FMR_TXRDYM_ONE_DATA_Val       _U_(0x0)                                       /**< (SPI_FMR) TDRE will be at level '1' when at least one data can be written in the Transmit FIFO.  */
#define   SPI_FMR_TXRDYM_TWO_DATA_Val       _U_(0x1)                                       /**< (SPI_FMR) TDRE will be at level '1' when at least two data can be written in the Transmit FIFO. Cannot be used if SPI_MR.PS =1.  */
#define SPI_FMR_TXRDYM_ONE_DATA             (SPI_FMR_TXRDYM_ONE_DATA_Val << SPI_FMR_TXRDYM_Pos)  /**< (SPI_FMR) TDRE will be at level '1' when at least one data can be written in the Transmit FIFO. Position  */
#define SPI_FMR_TXRDYM_TWO_DATA             (SPI_FMR_TXRDYM_TWO_DATA_Val << SPI_FMR_TXRDYM_Pos)  /**< (SPI_FMR) TDRE will be at level '1' when at least two data can be written in the Transmit FIFO. Cannot be used if SPI_MR.PS =1. Position  */
#define SPI_FMR_RXRDYM_Pos                  4                                              /**< (SPI_FMR) Receive Data Register Full Mode Position */
#define SPI_FMR_RXRDYM_Msk                  (_U_(0x3) << SPI_FMR_RXRDYM_Pos)               /**< (SPI_FMR) Receive Data Register Full Mode Mask */
#define SPI_FMR_RXRDYM(value)               (SPI_FMR_RXRDYM_Msk & ((value) << SPI_FMR_RXRDYM_Pos))
#define   SPI_FMR_RXRDYM_ONE_DATA_Val       _U_(0x0)                                       /**< (SPI_FMR) RDRF will be at level '1' when at least one unread data is in the Receive FIFO.  */
#define   SPI_FMR_RXRDYM_TWO_DATA_Val       _U_(0x1)                                       /**< (SPI_FMR) RDRF will be at level '1' when at least two unread data are in the Receive FIFO. Cannot be used if SPI_MR.PS =1.  */
#define   SPI_FMR_RXRDYM_FOUR_DATA_Val      _U_(0x2)                                       /**< (SPI_FMR) RDRF will be at level '1' when at least four unread data are in the Receive FIFO. Cannot be used when SPI_CSRx.BITS is greater than 0, or if SPI_MR.MSTR =1, or if SPI_MR.PS =1.  */
#define SPI_FMR_RXRDYM_ONE_DATA             (SPI_FMR_RXRDYM_ONE_DATA_Val << SPI_FMR_RXRDYM_Pos)  /**< (SPI_FMR) RDRF will be at level '1' when at least one unread data is in the Receive FIFO. Position  */
#define SPI_FMR_RXRDYM_TWO_DATA             (SPI_FMR_RXRDYM_TWO_DATA_Val << SPI_FMR_RXRDYM_Pos)  /**< (SPI_FMR) RDRF will be at level '1' when at least two unread data are in the Receive FIFO. Cannot be used if SPI_MR.PS =1. Position  */
#define SPI_FMR_RXRDYM_FOUR_DATA            (SPI_FMR_RXRDYM_FOUR_DATA_Val << SPI_FMR_RXRDYM_Pos)  /**< (SPI_FMR) RDRF will be at level '1' when at least four unread data are in the Receive FIFO. Cannot be used when SPI_CSRx.BITS is greater than 0, or if SPI_MR.MSTR =1, or if SPI_MR.PS =1. Position  */
#define SPI_FMR_TXFTHRES_Pos                16                                             /**< (SPI_FMR) Transmit FIFO Threshold Position */
#define SPI_FMR_TXFTHRES_Msk                (_U_(0x3F) << SPI_FMR_TXFTHRES_Pos)            /**< (SPI_FMR) Transmit FIFO Threshold Mask */
#define SPI_FMR_TXFTHRES(value)             (SPI_FMR_TXFTHRES_Msk & ((value) << SPI_FMR_TXFTHRES_Pos))
#define SPI_FMR_RXFTHRES_Pos                24                                             /**< (SPI_FMR) Receive FIFO Threshold Position */
#define SPI_FMR_RXFTHRES_Msk                (_U_(0x3F) << SPI_FMR_RXFTHRES_Pos)            /**< (SPI_FMR) Receive FIFO Threshold Mask */
#define SPI_FMR_RXFTHRES(value)             (SPI_FMR_RXFTHRES_Msk & ((value) << SPI_FMR_RXFTHRES_Pos))
#define SPI_FMR_MASK                        _U_(0x3F3F0033)                                /**< \deprecated (SPI_FMR) Register MASK  (Use SPI_FMR_Msk instead)  */
#define SPI_FMR_Msk                         _U_(0x3F3F0033)                                /**< (SPI_FMR) Register Mask  */


/* -------- SPI_FLR : (SPI Offset: 0x44) (R/ 32) FIFO Level Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXFL:6;                    /**< bit:   0..5  Transmit FIFO Level                      */
    uint32_t :10;                       /**< bit:  6..15  Reserved */
    uint32_t RXFL:6;                    /**< bit: 16..21  Receive FIFO Level                       */
    uint32_t :10;                       /**< bit: 22..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SPI_FLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_FLR_OFFSET                      (0x44)                                        /**<  (SPI_FLR) FIFO Level Register  Offset */

#define SPI_FLR_TXFL_Pos                    0                                              /**< (SPI_FLR) Transmit FIFO Level Position */
#define SPI_FLR_TXFL_Msk                    (_U_(0x3F) << SPI_FLR_TXFL_Pos)                /**< (SPI_FLR) Transmit FIFO Level Mask */
#define SPI_FLR_TXFL(value)                 (SPI_FLR_TXFL_Msk & ((value) << SPI_FLR_TXFL_Pos))
#define SPI_FLR_RXFL_Pos                    16                                             /**< (SPI_FLR) Receive FIFO Level Position */
#define SPI_FLR_RXFL_Msk                    (_U_(0x3F) << SPI_FLR_RXFL_Pos)                /**< (SPI_FLR) Receive FIFO Level Mask */
#define SPI_FLR_RXFL(value)                 (SPI_FLR_RXFL_Msk & ((value) << SPI_FLR_RXFL_Pos))
#define SPI_FLR_MASK                        _U_(0x3F003F)                                  /**< \deprecated (SPI_FLR) Register MASK  (Use SPI_FLR_Msk instead)  */
#define SPI_FLR_Msk                         _U_(0x3F003F)                                  /**< (SPI_FLR) Register Mask  */


/* -------- SPI_CMPR : (SPI Offset: 0x48) (R/ 32) Comparison Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t VAL1:16;                   /**< bit:  0..15  First Comparison Value for Received Character */
    uint32_t VAL2:16;                   /**< bit: 16..31  Second Comparison Value for Received Character */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SPI_CMPR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_CMPR_OFFSET                     (0x48)                                        /**<  (SPI_CMPR) Comparison Register  Offset */

#define SPI_CMPR_VAL1_Pos                   0                                              /**< (SPI_CMPR) First Comparison Value for Received Character Position */
#define SPI_CMPR_VAL1_Msk                   (_U_(0xFFFF) << SPI_CMPR_VAL1_Pos)             /**< (SPI_CMPR) First Comparison Value for Received Character Mask */
#define SPI_CMPR_VAL1(value)                (SPI_CMPR_VAL1_Msk & ((value) << SPI_CMPR_VAL1_Pos))
#define SPI_CMPR_VAL2_Pos                   16                                             /**< (SPI_CMPR) Second Comparison Value for Received Character Position */
#define SPI_CMPR_VAL2_Msk                   (_U_(0xFFFF) << SPI_CMPR_VAL2_Pos)             /**< (SPI_CMPR) Second Comparison Value for Received Character Mask */
#define SPI_CMPR_VAL2(value)                (SPI_CMPR_VAL2_Msk & ((value) << SPI_CMPR_VAL2_Pos))
#define SPI_CMPR_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (SPI_CMPR) Register MASK  (Use SPI_CMPR_Msk instead)  */
#define SPI_CMPR_Msk                        _U_(0xFFFFFFFF)                                /**< (SPI_CMPR) Register Mask  */


/* -------- SPI_WPMR : (SPI Offset: 0xe4) (R/W 32) Write Protection Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPEN:1;                    /**< bit:      0  Write Protection Enable                  */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPKEY:24;                  /**< bit:  8..31  Write Protection Key                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SPI_WPMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_WPMR_OFFSET                     (0xE4)                                        /**<  (SPI_WPMR) Write Protection Mode Register  Offset */

#define SPI_WPMR_WPEN_Pos                   0                                              /**< (SPI_WPMR) Write Protection Enable Position */
#define SPI_WPMR_WPEN_Msk                   (_U_(0x1) << SPI_WPMR_WPEN_Pos)                /**< (SPI_WPMR) Write Protection Enable Mask */
#define SPI_WPMR_WPEN                       SPI_WPMR_WPEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_WPMR_WPEN_Msk instead */
#define SPI_WPMR_WPKEY_Pos                  8                                              /**< (SPI_WPMR) Write Protection Key Position */
#define SPI_WPMR_WPKEY_Msk                  (_U_(0xFFFFFF) << SPI_WPMR_WPKEY_Pos)          /**< (SPI_WPMR) Write Protection Key Mask */
#define SPI_WPMR_WPKEY(value)               (SPI_WPMR_WPKEY_Msk & ((value) << SPI_WPMR_WPKEY_Pos))
#define   SPI_WPMR_WPKEY_PASSWD_Val         _U_(0x535049)                                  /**< (SPI_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0.  */
#define SPI_WPMR_WPKEY_PASSWD               (SPI_WPMR_WPKEY_PASSWD_Val << SPI_WPMR_WPKEY_Pos)  /**< (SPI_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0. Position  */
#define SPI_WPMR_MASK                       _U_(0xFFFFFF01)                                /**< \deprecated (SPI_WPMR) Register MASK  (Use SPI_WPMR_Msk instead)  */
#define SPI_WPMR_Msk                        _U_(0xFFFFFF01)                                /**< (SPI_WPMR) Register Mask  */


/* -------- SPI_WPSR : (SPI Offset: 0xe8) (R/ 32) Write Protection Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPVS:1;                    /**< bit:      0  Write Protection Violation Status        */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPVSRC:8;                  /**< bit:  8..15  Write Protection Violation Source        */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SPI_WPSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_WPSR_OFFSET                     (0xE8)                                        /**<  (SPI_WPSR) Write Protection Status Register  Offset */

#define SPI_WPSR_WPVS_Pos                   0                                              /**< (SPI_WPSR) Write Protection Violation Status Position */
#define SPI_WPSR_WPVS_Msk                   (_U_(0x1) << SPI_WPSR_WPVS_Pos)                /**< (SPI_WPSR) Write Protection Violation Status Mask */
#define SPI_WPSR_WPVS                       SPI_WPSR_WPVS_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SPI_WPSR_WPVS_Msk instead */
#define SPI_WPSR_WPVSRC_Pos                 8                                              /**< (SPI_WPSR) Write Protection Violation Source Position */
#define SPI_WPSR_WPVSRC_Msk                 (_U_(0xFF) << SPI_WPSR_WPVSRC_Pos)             /**< (SPI_WPSR) Write Protection Violation Source Mask */
#define SPI_WPSR_WPVSRC(value)              (SPI_WPSR_WPVSRC_Msk & ((value) << SPI_WPSR_WPVSRC_Pos))
#define SPI_WPSR_MASK                       _U_(0xFF01)                                    /**< \deprecated (SPI_WPSR) Register MASK  (Use SPI_WPSR_Msk instead)  */
#define SPI_WPSR_Msk                        _U_(0xFF01)                                    /**< (SPI_WPSR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief SPI hardware registers */
typedef struct {  
  __O  uint32_t SPI_CR;         /**< (SPI Offset: 0x00) Control Register */
  __IO uint32_t SPI_MR;         /**< (SPI Offset: 0x04) Mode Register */
  __I  uint32_t SPI_RDR;        /**< (SPI Offset: 0x08) Receive Data Register */
  __O  uint32_t SPI_TDR;        /**< (SPI Offset: 0x0C) Transmit Data Register */
  __I  uint32_t SPI_SR;         /**< (SPI Offset: 0x10) Status Register */
  __O  uint32_t SPI_IER;        /**< (SPI Offset: 0x14) Interrupt Enable Register */
  __O  uint32_t SPI_IDR;        /**< (SPI Offset: 0x18) Interrupt Disable Register */
  __I  uint32_t SPI_IMR;        /**< (SPI Offset: 0x1C) Interrupt Mask Register */
  __I  uint8_t                        Reserved1[16];
  __IO uint32_t SPI_CSR[4];     /**< (SPI Offset: 0x30) Chip Select Register */
  __IO uint32_t SPI_FMR;        /**< (SPI Offset: 0x40) FIFO Mode Register */
  __I  uint32_t SPI_FLR;        /**< (SPI Offset: 0x44) FIFO Level Register */
  __I  uint32_t SPI_CMPR;       /**< (SPI Offset: 0x48) Comparison Register */
  __I  uint8_t                        Reserved2[152];
  __IO uint32_t SPI_WPMR;       /**< (SPI Offset: 0xE4) Write Protection Mode Register */
  __I  uint32_t SPI_WPSR;       /**< (SPI Offset: 0xE8) Write Protection Status Register */
} Spi;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief SPI hardware registers */
typedef struct {  
  __O  SPI_CR_Type                    SPI_CR;         /**< Offset: 0x00 ( /W  32) Control Register */
  __IO SPI_MR_Type                    SPI_MR;         /**< Offset: 0x04 (R/W  32) Mode Register */
  __I  SPI_RDR_Type                   SPI_RDR;        /**< Offset: 0x08 (R/   32) Receive Data Register */
  __O  SPI_TDR_Type                   SPI_TDR;        /**< Offset: 0x0C ( /W  32) Transmit Data Register */
  __I  SPI_SR_Type                    SPI_SR;         /**< Offset: 0x10 (R/   32) Status Register */
  __O  SPI_IER_Type                   SPI_IER;        /**< Offset: 0x14 ( /W  32) Interrupt Enable Register */
  __O  SPI_IDR_Type                   SPI_IDR;        /**< Offset: 0x18 ( /W  32) Interrupt Disable Register */
  __I  SPI_IMR_Type                   SPI_IMR;        /**< Offset: 0x1C (R/   32) Interrupt Mask Register */
  __I  uint8_t                        Reserved1[16];
  __IO SPI_CSR_Type                   SPI_CSR[4];     /**< Offset: 0x30 (R/W  32) Chip Select Register */
  __IO SPI_FMR_Type                   SPI_FMR;        /**< Offset: 0x40 (R/W  32) FIFO Mode Register */
  __I  SPI_FLR_Type                   SPI_FLR;        /**< Offset: 0x44 (R/   32) FIFO Level Register */
  __I  SPI_CMPR_Type                  SPI_CMPR;       /**< Offset: 0x48 (R/   32) Comparison Register */
  __I  uint8_t                        Reserved2[152];
  __IO SPI_WPMR_Type                  SPI_WPMR;       /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I  SPI_WPSR_Type                  SPI_WPSR;       /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
} Spi;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Serial Peripheral Interface */

#endif /* _SAMA5D2_SPI_COMPONENT_H_ */
