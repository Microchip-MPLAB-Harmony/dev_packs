/**
 * \file
 *
 * \brief Component description for FLEXCOM
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
#ifndef _SAMA5D2_FLEXCOM_COMPONENT_H_
#define _SAMA5D2_FLEXCOM_COMPONENT_H_
#define _SAMA5D2_FLEXCOM_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Flexible Serial Communication
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR FLEXCOM */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define FLEXCOM_11268                      /**< (FLEXCOM) Module ID */
#define REV_FLEXCOM P                      /**< (FLEXCOM) Module revision */

/* -------- FLEXCOM_FLEX_MR : (FLEXCOM Offset: 0x00) (R/W 32) FLEXCOM Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t OPMODE:2;                  /**< bit:   0..1  FLEXCOM Operating Mode                   */
    uint32_t :30;                       /**< bit:  2..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_MR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_MR_OFFSET              (0x00)                                        /**<  (FLEXCOM_FLEX_MR) FLEXCOM Mode Register  Offset */

#define FLEXCOM_FLEX_MR_OPMODE_Pos          0                                              /**< (FLEXCOM_FLEX_MR) FLEXCOM Operating Mode Position */
#define FLEXCOM_FLEX_MR_OPMODE_Msk          (_U_(0x3) << FLEXCOM_FLEX_MR_OPMODE_Pos)       /**< (FLEXCOM_FLEX_MR) FLEXCOM Operating Mode Mask */
#define FLEXCOM_FLEX_MR_OPMODE(value)       (FLEXCOM_FLEX_MR_OPMODE_Msk & ((value) << FLEXCOM_FLEX_MR_OPMODE_Pos))
#define   FLEXCOM_FLEX_MR_OPMODE_NO_COM_Val _U_(0x0)                                       /**< (FLEXCOM_FLEX_MR) No communication  */
#define   FLEXCOM_FLEX_MR_OPMODE_USART_Val  _U_(0x1)                                       /**< (FLEXCOM_FLEX_MR) All UART related protocols are selected (RS232, RS485, IrDA, ISO7816, LIN,)SPI/TWI related registers are not accessible and have no impact on IOs.  */
#define   FLEXCOM_FLEX_MR_OPMODE_SPI_Val    _U_(0x2)                                       /**< (FLEXCOM_FLEX_MR) SPI operating mode is selected.USART/TWI related registers are not accessible and have no impact on IOs.  */
#define   FLEXCOM_FLEX_MR_OPMODE_TWI_Val    _U_(0x3)                                       /**< (FLEXCOM_FLEX_MR) All TWI related protocols are selected (TWI, SMBus).USART/SPI related registers are not accessible and have no impact on IOs.  */
#define FLEXCOM_FLEX_MR_OPMODE_NO_COM       (FLEXCOM_FLEX_MR_OPMODE_NO_COM_Val << FLEXCOM_FLEX_MR_OPMODE_Pos)  /**< (FLEXCOM_FLEX_MR) No communication Position  */
#define FLEXCOM_FLEX_MR_OPMODE_USART        (FLEXCOM_FLEX_MR_OPMODE_USART_Val << FLEXCOM_FLEX_MR_OPMODE_Pos)  /**< (FLEXCOM_FLEX_MR) All UART related protocols are selected (RS232, RS485, IrDA, ISO7816, LIN,)SPI/TWI related registers are not accessible and have no impact on IOs. Position  */
#define FLEXCOM_FLEX_MR_OPMODE_SPI          (FLEXCOM_FLEX_MR_OPMODE_SPI_Val << FLEXCOM_FLEX_MR_OPMODE_Pos)  /**< (FLEXCOM_FLEX_MR) SPI operating mode is selected.USART/TWI related registers are not accessible and have no impact on IOs. Position  */
#define FLEXCOM_FLEX_MR_OPMODE_TWI          (FLEXCOM_FLEX_MR_OPMODE_TWI_Val << FLEXCOM_FLEX_MR_OPMODE_Pos)  /**< (FLEXCOM_FLEX_MR) All TWI related protocols are selected (TWI, SMBus).USART/SPI related registers are not accessible and have no impact on IOs. Position  */
#define FLEXCOM_FLEX_MR_MASK                _U_(0x03)                                      /**< \deprecated (FLEXCOM_FLEX_MR) Register MASK  (Use FLEXCOM_FLEX_MR_Msk instead)  */
#define FLEXCOM_FLEX_MR_Msk                 _U_(0x03)                                      /**< (FLEXCOM_FLEX_MR) Register Mask  */


/* -------- FLEXCOM_FLEX_RHR : (FLEXCOM Offset: 0x10) (R/ 32) FLEXCOM Receive Holding Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RXDATA:16;                 /**< bit:  0..15  Receive Data                             */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_RHR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_RHR_OFFSET             (0x10)                                        /**<  (FLEXCOM_FLEX_RHR) FLEXCOM Receive Holding Register  Offset */

#define FLEXCOM_FLEX_RHR_RXDATA_Pos         0                                              /**< (FLEXCOM_FLEX_RHR) Receive Data Position */
#define FLEXCOM_FLEX_RHR_RXDATA_Msk         (_U_(0xFFFF) << FLEXCOM_FLEX_RHR_RXDATA_Pos)   /**< (FLEXCOM_FLEX_RHR) Receive Data Mask */
#define FLEXCOM_FLEX_RHR_RXDATA(value)      (FLEXCOM_FLEX_RHR_RXDATA_Msk & ((value) << FLEXCOM_FLEX_RHR_RXDATA_Pos))
#define FLEXCOM_FLEX_RHR_MASK               _U_(0xFFFF)                                    /**< \deprecated (FLEXCOM_FLEX_RHR) Register MASK  (Use FLEXCOM_FLEX_RHR_Msk instead)  */
#define FLEXCOM_FLEX_RHR_Msk                _U_(0xFFFF)                                    /**< (FLEXCOM_FLEX_RHR) Register Mask  */


/* -------- FLEXCOM_FLEX_THR : (FLEXCOM Offset: 0x20) (R/W 32) FLEXCOM Transmit Holding Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXDATA:16;                 /**< bit:  0..15  Transmit Data                            */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_THR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_THR_OFFSET             (0x20)                                        /**<  (FLEXCOM_FLEX_THR) FLEXCOM Transmit Holding Register  Offset */

#define FLEXCOM_FLEX_THR_TXDATA_Pos         0                                              /**< (FLEXCOM_FLEX_THR) Transmit Data Position */
#define FLEXCOM_FLEX_THR_TXDATA_Msk         (_U_(0xFFFF) << FLEXCOM_FLEX_THR_TXDATA_Pos)   /**< (FLEXCOM_FLEX_THR) Transmit Data Mask */
#define FLEXCOM_FLEX_THR_TXDATA(value)      (FLEXCOM_FLEX_THR_TXDATA_Msk & ((value) << FLEXCOM_FLEX_THR_TXDATA_Pos))
#define FLEXCOM_FLEX_THR_MASK               _U_(0xFFFF)                                    /**< \deprecated (FLEXCOM_FLEX_THR) Register MASK  (Use FLEXCOM_FLEX_THR_Msk instead)  */
#define FLEXCOM_FLEX_THR_Msk                _U_(0xFFFF)                                    /**< (FLEXCOM_FLEX_THR) Register Mask  */


/* -------- FLEXCOM_FLEX_US_CR : (FLEXCOM Offset: 0x200) (/W 32) USART Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t RSTRX:1;                   /**< bit:      2  Reset Receiver                           */
    uint32_t RSTTX:1;                   /**< bit:      3  Reset Transmitter                        */
    uint32_t RXEN:1;                    /**< bit:      4  Receiver Enable                          */
    uint32_t RXDIS:1;                   /**< bit:      5  Receiver Disable                         */
    uint32_t TXEN:1;                    /**< bit:      6  Transmitter Enable                       */
    uint32_t TXDIS:1;                   /**< bit:      7  Transmitter Disable                      */
    uint32_t RSTSTA:1;                  /**< bit:      8  Reset Status Bits                        */
    uint32_t STTBRK:1;                  /**< bit:      9  Start Break                              */
    uint32_t STPBRK:1;                  /**< bit:     10  Stop Break                               */
    uint32_t STTTO:1;                   /**< bit:     11  Clear TIMEOUT Flag and Start Timeout After Next Character Received */
    uint32_t SENDA:1;                   /**< bit:     12  Send Address                             */
    uint32_t RSTIT:1;                   /**< bit:     13  Reset Iterations                         */
    uint32_t RSTNACK:1;                 /**< bit:     14  Reset Non Acknowledge                    */
    uint32_t RETTO:1;                   /**< bit:     15  Start Timeout Immediately                */
    uint32_t :2;                        /**< bit: 16..17  Reserved */
    uint32_t RTSEN:1;                   /**< bit:     18  Request to Send Enable                   */
    uint32_t RTSDIS:1;                  /**< bit:     19  Request to Send Disable                  */
    uint32_t LINABT:1;                  /**< bit:     20  Abort LIN Transmission                   */
    uint32_t LINWKUP:1;                 /**< bit:     21  Send LIN Wakeup Signal                   */
    uint32_t :2;                        /**< bit: 22..23  Reserved */
    uint32_t TXFCLR:1;                  /**< bit:     24  Transmit FIFO Clear                      */
    uint32_t RXFCLR:1;                  /**< bit:     25  Receive FIFO Clear                       */
    uint32_t TXFLCLR:1;                 /**< bit:     26  Transmit FIFO Lock CLEAR                 */
    uint32_t :1;                        /**< bit:     27  Reserved */
    uint32_t REQCLR:1;                  /**< bit:     28  Request to Clear the Comparison Trigger  */
    uint32_t :1;                        /**< bit:     29  Reserved */
    uint32_t FIFOEN:1;                  /**< bit:     30  FIFO Enable                              */
    uint32_t FIFODIS:1;                 /**< bit:     31  FIFO Disable                             */
  } bit;                                /**< Structure used for bit  access */
  struct { // SPI mode
    uint32_t :32;                       /**< bit:  0..31  Reserved */
  } SPI;                                /**< Structure used for SPI mode access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_CR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_CR_OFFSET           (0x200)                                       /**<  (FLEXCOM_FLEX_US_CR) USART Control Register  Offset */

#define FLEXCOM_FLEX_US_CR_RSTRX_Pos        2                                              /**< (FLEXCOM_FLEX_US_CR) Reset Receiver Position */
#define FLEXCOM_FLEX_US_CR_RSTRX_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_CR_RSTRX_Pos)     /**< (FLEXCOM_FLEX_US_CR) Reset Receiver Mask */
#define FLEXCOM_FLEX_US_CR_RSTRX            FLEXCOM_FLEX_US_CR_RSTRX_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_RSTRX_Msk instead */
#define FLEXCOM_FLEX_US_CR_RSTTX_Pos        3                                              /**< (FLEXCOM_FLEX_US_CR) Reset Transmitter Position */
#define FLEXCOM_FLEX_US_CR_RSTTX_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_CR_RSTTX_Pos)     /**< (FLEXCOM_FLEX_US_CR) Reset Transmitter Mask */
#define FLEXCOM_FLEX_US_CR_RSTTX            FLEXCOM_FLEX_US_CR_RSTTX_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_RSTTX_Msk instead */
#define FLEXCOM_FLEX_US_CR_RXEN_Pos         4                                              /**< (FLEXCOM_FLEX_US_CR) Receiver Enable Position */
#define FLEXCOM_FLEX_US_CR_RXEN_Msk         (_U_(0x1) << FLEXCOM_FLEX_US_CR_RXEN_Pos)      /**< (FLEXCOM_FLEX_US_CR) Receiver Enable Mask */
#define FLEXCOM_FLEX_US_CR_RXEN             FLEXCOM_FLEX_US_CR_RXEN_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_RXEN_Msk instead */
#define FLEXCOM_FLEX_US_CR_RXDIS_Pos        5                                              /**< (FLEXCOM_FLEX_US_CR) Receiver Disable Position */
#define FLEXCOM_FLEX_US_CR_RXDIS_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_CR_RXDIS_Pos)     /**< (FLEXCOM_FLEX_US_CR) Receiver Disable Mask */
#define FLEXCOM_FLEX_US_CR_RXDIS            FLEXCOM_FLEX_US_CR_RXDIS_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_RXDIS_Msk instead */
#define FLEXCOM_FLEX_US_CR_TXEN_Pos         6                                              /**< (FLEXCOM_FLEX_US_CR) Transmitter Enable Position */
#define FLEXCOM_FLEX_US_CR_TXEN_Msk         (_U_(0x1) << FLEXCOM_FLEX_US_CR_TXEN_Pos)      /**< (FLEXCOM_FLEX_US_CR) Transmitter Enable Mask */
#define FLEXCOM_FLEX_US_CR_TXEN             FLEXCOM_FLEX_US_CR_TXEN_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_TXEN_Msk instead */
#define FLEXCOM_FLEX_US_CR_TXDIS_Pos        7                                              /**< (FLEXCOM_FLEX_US_CR) Transmitter Disable Position */
#define FLEXCOM_FLEX_US_CR_TXDIS_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_CR_TXDIS_Pos)     /**< (FLEXCOM_FLEX_US_CR) Transmitter Disable Mask */
#define FLEXCOM_FLEX_US_CR_TXDIS            FLEXCOM_FLEX_US_CR_TXDIS_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_TXDIS_Msk instead */
#define FLEXCOM_FLEX_US_CR_RSTSTA_Pos       8                                              /**< (FLEXCOM_FLEX_US_CR) Reset Status Bits Position */
#define FLEXCOM_FLEX_US_CR_RSTSTA_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_CR_RSTSTA_Pos)    /**< (FLEXCOM_FLEX_US_CR) Reset Status Bits Mask */
#define FLEXCOM_FLEX_US_CR_RSTSTA           FLEXCOM_FLEX_US_CR_RSTSTA_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_RSTSTA_Msk instead */
#define FLEXCOM_FLEX_US_CR_STTBRK_Pos       9                                              /**< (FLEXCOM_FLEX_US_CR) Start Break Position */
#define FLEXCOM_FLEX_US_CR_STTBRK_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_CR_STTBRK_Pos)    /**< (FLEXCOM_FLEX_US_CR) Start Break Mask */
#define FLEXCOM_FLEX_US_CR_STTBRK           FLEXCOM_FLEX_US_CR_STTBRK_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_STTBRK_Msk instead */
#define FLEXCOM_FLEX_US_CR_STPBRK_Pos       10                                             /**< (FLEXCOM_FLEX_US_CR) Stop Break Position */
#define FLEXCOM_FLEX_US_CR_STPBRK_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_CR_STPBRK_Pos)    /**< (FLEXCOM_FLEX_US_CR) Stop Break Mask */
#define FLEXCOM_FLEX_US_CR_STPBRK           FLEXCOM_FLEX_US_CR_STPBRK_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_STPBRK_Msk instead */
#define FLEXCOM_FLEX_US_CR_STTTO_Pos        11                                             /**< (FLEXCOM_FLEX_US_CR) Clear TIMEOUT Flag and Start Timeout After Next Character Received Position */
#define FLEXCOM_FLEX_US_CR_STTTO_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_CR_STTTO_Pos)     /**< (FLEXCOM_FLEX_US_CR) Clear TIMEOUT Flag and Start Timeout After Next Character Received Mask */
#define FLEXCOM_FLEX_US_CR_STTTO            FLEXCOM_FLEX_US_CR_STTTO_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_STTTO_Msk instead */
#define FLEXCOM_FLEX_US_CR_SENDA_Pos        12                                             /**< (FLEXCOM_FLEX_US_CR) Send Address Position */
#define FLEXCOM_FLEX_US_CR_SENDA_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_CR_SENDA_Pos)     /**< (FLEXCOM_FLEX_US_CR) Send Address Mask */
#define FLEXCOM_FLEX_US_CR_SENDA            FLEXCOM_FLEX_US_CR_SENDA_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_SENDA_Msk instead */
#define FLEXCOM_FLEX_US_CR_RSTIT_Pos        13                                             /**< (FLEXCOM_FLEX_US_CR) Reset Iterations Position */
#define FLEXCOM_FLEX_US_CR_RSTIT_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_CR_RSTIT_Pos)     /**< (FLEXCOM_FLEX_US_CR) Reset Iterations Mask */
#define FLEXCOM_FLEX_US_CR_RSTIT            FLEXCOM_FLEX_US_CR_RSTIT_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_RSTIT_Msk instead */
#define FLEXCOM_FLEX_US_CR_RSTNACK_Pos      14                                             /**< (FLEXCOM_FLEX_US_CR) Reset Non Acknowledge Position */
#define FLEXCOM_FLEX_US_CR_RSTNACK_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_CR_RSTNACK_Pos)   /**< (FLEXCOM_FLEX_US_CR) Reset Non Acknowledge Mask */
#define FLEXCOM_FLEX_US_CR_RSTNACK          FLEXCOM_FLEX_US_CR_RSTNACK_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_RSTNACK_Msk instead */
#define FLEXCOM_FLEX_US_CR_RETTO_Pos        15                                             /**< (FLEXCOM_FLEX_US_CR) Start Timeout Immediately Position */
#define FLEXCOM_FLEX_US_CR_RETTO_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_CR_RETTO_Pos)     /**< (FLEXCOM_FLEX_US_CR) Start Timeout Immediately Mask */
#define FLEXCOM_FLEX_US_CR_RETTO            FLEXCOM_FLEX_US_CR_RETTO_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_RETTO_Msk instead */
#define FLEXCOM_FLEX_US_CR_RTSEN_Pos        18                                             /**< (FLEXCOM_FLEX_US_CR) Request to Send Enable Position */
#define FLEXCOM_FLEX_US_CR_RTSEN_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_CR_RTSEN_Pos)     /**< (FLEXCOM_FLEX_US_CR) Request to Send Enable Mask */
#define FLEXCOM_FLEX_US_CR_RTSEN            FLEXCOM_FLEX_US_CR_RTSEN_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_RTSEN_Msk instead */
#define FLEXCOM_FLEX_US_CR_RTSDIS_Pos       19                                             /**< (FLEXCOM_FLEX_US_CR) Request to Send Disable Position */
#define FLEXCOM_FLEX_US_CR_RTSDIS_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_CR_RTSDIS_Pos)    /**< (FLEXCOM_FLEX_US_CR) Request to Send Disable Mask */
#define FLEXCOM_FLEX_US_CR_RTSDIS           FLEXCOM_FLEX_US_CR_RTSDIS_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_RTSDIS_Msk instead */
#define FLEXCOM_FLEX_US_CR_LINABT_Pos       20                                             /**< (FLEXCOM_FLEX_US_CR) Abort LIN Transmission Position */
#define FLEXCOM_FLEX_US_CR_LINABT_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_CR_LINABT_Pos)    /**< (FLEXCOM_FLEX_US_CR) Abort LIN Transmission Mask */
#define FLEXCOM_FLEX_US_CR_LINABT           FLEXCOM_FLEX_US_CR_LINABT_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_LINABT_Msk instead */
#define FLEXCOM_FLEX_US_CR_LINWKUP_Pos      21                                             /**< (FLEXCOM_FLEX_US_CR) Send LIN Wakeup Signal Position */
#define FLEXCOM_FLEX_US_CR_LINWKUP_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_CR_LINWKUP_Pos)   /**< (FLEXCOM_FLEX_US_CR) Send LIN Wakeup Signal Mask */
#define FLEXCOM_FLEX_US_CR_LINWKUP          FLEXCOM_FLEX_US_CR_LINWKUP_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_LINWKUP_Msk instead */
#define FLEXCOM_FLEX_US_CR_TXFCLR_Pos       24                                             /**< (FLEXCOM_FLEX_US_CR) Transmit FIFO Clear Position */
#define FLEXCOM_FLEX_US_CR_TXFCLR_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_CR_TXFCLR_Pos)    /**< (FLEXCOM_FLEX_US_CR) Transmit FIFO Clear Mask */
#define FLEXCOM_FLEX_US_CR_TXFCLR           FLEXCOM_FLEX_US_CR_TXFCLR_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_TXFCLR_Msk instead */
#define FLEXCOM_FLEX_US_CR_RXFCLR_Pos       25                                             /**< (FLEXCOM_FLEX_US_CR) Receive FIFO Clear Position */
#define FLEXCOM_FLEX_US_CR_RXFCLR_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_CR_RXFCLR_Pos)    /**< (FLEXCOM_FLEX_US_CR) Receive FIFO Clear Mask */
#define FLEXCOM_FLEX_US_CR_RXFCLR           FLEXCOM_FLEX_US_CR_RXFCLR_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_RXFCLR_Msk instead */
#define FLEXCOM_FLEX_US_CR_TXFLCLR_Pos      26                                             /**< (FLEXCOM_FLEX_US_CR) Transmit FIFO Lock CLEAR Position */
#define FLEXCOM_FLEX_US_CR_TXFLCLR_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_CR_TXFLCLR_Pos)   /**< (FLEXCOM_FLEX_US_CR) Transmit FIFO Lock CLEAR Mask */
#define FLEXCOM_FLEX_US_CR_TXFLCLR          FLEXCOM_FLEX_US_CR_TXFLCLR_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_TXFLCLR_Msk instead */
#define FLEXCOM_FLEX_US_CR_REQCLR_Pos       28                                             /**< (FLEXCOM_FLEX_US_CR) Request to Clear the Comparison Trigger Position */
#define FLEXCOM_FLEX_US_CR_REQCLR_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_CR_REQCLR_Pos)    /**< (FLEXCOM_FLEX_US_CR) Request to Clear the Comparison Trigger Mask */
#define FLEXCOM_FLEX_US_CR_REQCLR           FLEXCOM_FLEX_US_CR_REQCLR_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_REQCLR_Msk instead */
#define FLEXCOM_FLEX_US_CR_FIFOEN_Pos       30                                             /**< (FLEXCOM_FLEX_US_CR) FIFO Enable Position */
#define FLEXCOM_FLEX_US_CR_FIFOEN_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_CR_FIFOEN_Pos)    /**< (FLEXCOM_FLEX_US_CR) FIFO Enable Mask */
#define FLEXCOM_FLEX_US_CR_FIFOEN           FLEXCOM_FLEX_US_CR_FIFOEN_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_FIFOEN_Msk instead */
#define FLEXCOM_FLEX_US_CR_FIFODIS_Pos      31                                             /**< (FLEXCOM_FLEX_US_CR) FIFO Disable Position */
#define FLEXCOM_FLEX_US_CR_FIFODIS_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_CR_FIFODIS_Pos)   /**< (FLEXCOM_FLEX_US_CR) FIFO Disable Mask */
#define FLEXCOM_FLEX_US_CR_FIFODIS          FLEXCOM_FLEX_US_CR_FIFODIS_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CR_FIFODIS_Msk instead */
#define FLEXCOM_FLEX_US_CR_MASK             _U_(0xD73CFFFC)                                /**< \deprecated (FLEXCOM_FLEX_US_CR) Register MASK  (Use FLEXCOM_FLEX_US_CR_Msk instead)  */
#define FLEXCOM_FLEX_US_CR_Msk              _U_(0xD73CFFFC)                                /**< (FLEXCOM_FLEX_US_CR) Register Mask  */

/* SPI mode */
#define FLEXCOM_FLEX_US_CR_SPI_MASK         _U_(0x00)                                      /**< \deprecated (FLEXCOM_FLEX_US_CR_SPI) Register MASK  (Use FLEXCOM_FLEX_US_CR_SPI_Msk instead)  */
#define FLEXCOM_FLEX_US_CR_SPI_Msk          _U_(0x00)                                      /**< (FLEXCOM_FLEX_US_CR_SPI) Register Mask  */


/* -------- FLEXCOM_FLEX_US_MR : (FLEXCOM Offset: 0x204) (R/W 32) USART Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t USART_MODE:4;              /**< bit:   0..3  USART Mode of Operation                  */
    uint32_t USCLKS:2;                  /**< bit:   4..5  Clock Selection                          */
    uint32_t CHRL:2;                    /**< bit:   6..7  Character Length                         */
    uint32_t SYNC:1;                    /**< bit:      8  Synchronous Mode Select                  */
    uint32_t PAR:3;                     /**< bit:  9..11  Parity Type                              */
    uint32_t NBSTOP:2;                  /**< bit: 12..13  Number of Stop Bits                      */
    uint32_t CHMODE:2;                  /**< bit: 14..15  Channel Mode                             */
    uint32_t MSBF:1;                    /**< bit:     16  Bit Order                                */
    uint32_t MODE9:1;                   /**< bit:     17  9-bit Character Length                   */
    uint32_t CLKO:1;                    /**< bit:     18  Clock Output Select                      */
    uint32_t OVER:1;                    /**< bit:     19  Oversampling Mode                        */
    uint32_t INACK:1;                   /**< bit:     20  Inhibit Non Acknowledge                  */
    uint32_t DSNACK:1;                  /**< bit:     21  Disable Successive NACK                  */
    uint32_t VAR_SYNC:1;                /**< bit:     22  Variable Synchronization of Command/Data Sync Start Frame Delimiter */
    uint32_t INVDATA:1;                 /**< bit:     23  Inverted Data                            */
    uint32_t MAX_ITERATION:3;           /**< bit: 24..26  Maximum Number of Automatic Iteration    */
    uint32_t :1;                        /**< bit:     27  Reserved */
    uint32_t FILTER:1;                  /**< bit:     28  Receive Line Filter                      */
    uint32_t MAN:1;                     /**< bit:     29  Manchester Encoder/Decoder Enable        */
    uint32_t MODSYNC:1;                 /**< bit:     30  Manchester Synchronization Mode          */
    uint32_t ONEBIT:1;                  /**< bit:     31  Start Frame Delimiter Selector           */
  } bit;                                /**< Structure used for bit  access */
  struct { // SPI mode
    uint32_t :32;                       /**< bit:  0..31  Reserved */
  } SPI;                                /**< Structure used for SPI mode access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_MR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_MR_OFFSET           (0x204)                                       /**<  (FLEXCOM_FLEX_US_MR) USART Mode Register  Offset */

#define FLEXCOM_FLEX_US_MR_USART_MODE_Pos   0                                              /**< (FLEXCOM_FLEX_US_MR) USART Mode of Operation Position */
#define FLEXCOM_FLEX_US_MR_USART_MODE_Msk   (_U_(0xF) << FLEXCOM_FLEX_US_MR_USART_MODE_Pos)  /**< (FLEXCOM_FLEX_US_MR) USART Mode of Operation Mask */
#define FLEXCOM_FLEX_US_MR_USART_MODE(value) (FLEXCOM_FLEX_US_MR_USART_MODE_Msk & ((value) << FLEXCOM_FLEX_US_MR_USART_MODE_Pos))
#define   FLEXCOM_FLEX_US_MR_USART_MODE_NORMAL_Val _U_(0x0)                                       /**< (FLEXCOM_FLEX_US_MR) Normal mode  */
#define   FLEXCOM_FLEX_US_MR_USART_MODE_RS485_Val _U_(0x1)                                       /**< (FLEXCOM_FLEX_US_MR) RS485  */
#define   FLEXCOM_FLEX_US_MR_USART_MODE_HW_HANDSHAKING_Val _U_(0x2)                                       /**< (FLEXCOM_FLEX_US_MR) Hardware handshaking  */
#define   FLEXCOM_FLEX_US_MR_USART_MODE_IS07816_T_0_Val _U_(0x4)                                       /**< (FLEXCOM_FLEX_US_MR) IS07816 Protocol: T = 0  */
#define   FLEXCOM_FLEX_US_MR_USART_MODE_IS07816_T_1_Val _U_(0x6)                                       /**< (FLEXCOM_FLEX_US_MR) IS07816 Protocol: T = 1  */
#define   FLEXCOM_FLEX_US_MR_USART_MODE_IRDA_Val _U_(0x8)                                       /**< (FLEXCOM_FLEX_US_MR) IrDA  */
#define   FLEXCOM_FLEX_US_MR_USART_MODE_LIN_MASTER_Val _U_(0xA)                                       /**< (FLEXCOM_FLEX_US_MR) LIN Master mode  */
#define   FLEXCOM_FLEX_US_MR_USART_MODE_LIN_SLAVE_Val _U_(0xB)                                       /**< (FLEXCOM_FLEX_US_MR) LIN Slave mode  */
#define   FLEXCOM_FLEX_US_MR_USART_MODE_SPI_MASTER_Val _U_(0xE)                                       /**< (FLEXCOM_FLEX_US_MR) SPI Master mode (CLKO must be written to 1 and USCLKS = 0, 1 or 2)  */
#define   FLEXCOM_FLEX_US_MR_USART_MODE_SPI_SLAVE_Val _U_(0xF)                                       /**< (FLEXCOM_FLEX_US_MR) SPI Slave mode  */
#define FLEXCOM_FLEX_US_MR_USART_MODE_NORMAL (FLEXCOM_FLEX_US_MR_USART_MODE_NORMAL_Val << FLEXCOM_FLEX_US_MR_USART_MODE_Pos)  /**< (FLEXCOM_FLEX_US_MR) Normal mode Position  */
#define FLEXCOM_FLEX_US_MR_USART_MODE_RS485 (FLEXCOM_FLEX_US_MR_USART_MODE_RS485_Val << FLEXCOM_FLEX_US_MR_USART_MODE_Pos)  /**< (FLEXCOM_FLEX_US_MR) RS485 Position  */
#define FLEXCOM_FLEX_US_MR_USART_MODE_HW_HANDSHAKING (FLEXCOM_FLEX_US_MR_USART_MODE_HW_HANDSHAKING_Val << FLEXCOM_FLEX_US_MR_USART_MODE_Pos)  /**< (FLEXCOM_FLEX_US_MR) Hardware handshaking Position  */
#define FLEXCOM_FLEX_US_MR_USART_MODE_IS07816_T_0 (FLEXCOM_FLEX_US_MR_USART_MODE_IS07816_T_0_Val << FLEXCOM_FLEX_US_MR_USART_MODE_Pos)  /**< (FLEXCOM_FLEX_US_MR) IS07816 Protocol: T = 0 Position  */
#define FLEXCOM_FLEX_US_MR_USART_MODE_IS07816_T_1 (FLEXCOM_FLEX_US_MR_USART_MODE_IS07816_T_1_Val << FLEXCOM_FLEX_US_MR_USART_MODE_Pos)  /**< (FLEXCOM_FLEX_US_MR) IS07816 Protocol: T = 1 Position  */
#define FLEXCOM_FLEX_US_MR_USART_MODE_IRDA  (FLEXCOM_FLEX_US_MR_USART_MODE_IRDA_Val << FLEXCOM_FLEX_US_MR_USART_MODE_Pos)  /**< (FLEXCOM_FLEX_US_MR) IrDA Position  */
#define FLEXCOM_FLEX_US_MR_USART_MODE_LIN_MASTER (FLEXCOM_FLEX_US_MR_USART_MODE_LIN_MASTER_Val << FLEXCOM_FLEX_US_MR_USART_MODE_Pos)  /**< (FLEXCOM_FLEX_US_MR) LIN Master mode Position  */
#define FLEXCOM_FLEX_US_MR_USART_MODE_LIN_SLAVE (FLEXCOM_FLEX_US_MR_USART_MODE_LIN_SLAVE_Val << FLEXCOM_FLEX_US_MR_USART_MODE_Pos)  /**< (FLEXCOM_FLEX_US_MR) LIN Slave mode Position  */
#define FLEXCOM_FLEX_US_MR_USART_MODE_SPI_MASTER (FLEXCOM_FLEX_US_MR_USART_MODE_SPI_MASTER_Val << FLEXCOM_FLEX_US_MR_USART_MODE_Pos)  /**< (FLEXCOM_FLEX_US_MR) SPI Master mode (CLKO must be written to 1 and USCLKS = 0, 1 or 2) Position  */
#define FLEXCOM_FLEX_US_MR_USART_MODE_SPI_SLAVE (FLEXCOM_FLEX_US_MR_USART_MODE_SPI_SLAVE_Val << FLEXCOM_FLEX_US_MR_USART_MODE_Pos)  /**< (FLEXCOM_FLEX_US_MR) SPI Slave mode Position  */
#define FLEXCOM_FLEX_US_MR_USCLKS_Pos       4                                              /**< (FLEXCOM_FLEX_US_MR) Clock Selection Position */
#define FLEXCOM_FLEX_US_MR_USCLKS_Msk       (_U_(0x3) << FLEXCOM_FLEX_US_MR_USCLKS_Pos)    /**< (FLEXCOM_FLEX_US_MR) Clock Selection Mask */
#define FLEXCOM_FLEX_US_MR_USCLKS(value)    (FLEXCOM_FLEX_US_MR_USCLKS_Msk & ((value) << FLEXCOM_FLEX_US_MR_USCLKS_Pos))
#define   FLEXCOM_FLEX_US_MR_USCLKS_MCK_Val _U_(0x0)                                       /**< (FLEXCOM_FLEX_US_MR) Peripheral clock is selected  */
#define   FLEXCOM_FLEX_US_MR_USCLKS_DIV_Val _U_(0x1)                                       /**< (FLEXCOM_FLEX_US_MR) Peripheral clock divided (DIV = 8) is selected  */
#define   FLEXCOM_FLEX_US_MR_USCLKS_GCLK_Val _U_(0x2)                                       /**< (FLEXCOM_FLEX_US_MR) PMC generic clock is selected. If the SCK pin is driven (CLKO = 1), the CD field must be greater than 1.  */
#define   FLEXCOM_FLEX_US_MR_USCLKS_SCK_Val _U_(0x3)                                       /**< (FLEXCOM_FLEX_US_MR) External pin SCK is selected  */
#define FLEXCOM_FLEX_US_MR_USCLKS_MCK       (FLEXCOM_FLEX_US_MR_USCLKS_MCK_Val << FLEXCOM_FLEX_US_MR_USCLKS_Pos)  /**< (FLEXCOM_FLEX_US_MR) Peripheral clock is selected Position  */
#define FLEXCOM_FLEX_US_MR_USCLKS_DIV       (FLEXCOM_FLEX_US_MR_USCLKS_DIV_Val << FLEXCOM_FLEX_US_MR_USCLKS_Pos)  /**< (FLEXCOM_FLEX_US_MR) Peripheral clock divided (DIV = 8) is selected Position  */
#define FLEXCOM_FLEX_US_MR_USCLKS_GCLK      (FLEXCOM_FLEX_US_MR_USCLKS_GCLK_Val << FLEXCOM_FLEX_US_MR_USCLKS_Pos)  /**< (FLEXCOM_FLEX_US_MR) PMC generic clock is selected. If the SCK pin is driven (CLKO = 1), the CD field must be greater than 1. Position  */
#define FLEXCOM_FLEX_US_MR_USCLKS_SCK       (FLEXCOM_FLEX_US_MR_USCLKS_SCK_Val << FLEXCOM_FLEX_US_MR_USCLKS_Pos)  /**< (FLEXCOM_FLEX_US_MR) External pin SCK is selected Position  */
#define FLEXCOM_FLEX_US_MR_CHRL_Pos         6                                              /**< (FLEXCOM_FLEX_US_MR) Character Length Position */
#define FLEXCOM_FLEX_US_MR_CHRL_Msk         (_U_(0x3) << FLEXCOM_FLEX_US_MR_CHRL_Pos)      /**< (FLEXCOM_FLEX_US_MR) Character Length Mask */
#define FLEXCOM_FLEX_US_MR_CHRL(value)      (FLEXCOM_FLEX_US_MR_CHRL_Msk & ((value) << FLEXCOM_FLEX_US_MR_CHRL_Pos))
#define   FLEXCOM_FLEX_US_MR_CHRL_5_BIT_Val _U_(0x0)                                       /**< (FLEXCOM_FLEX_US_MR) Character length is 5 bits  */
#define   FLEXCOM_FLEX_US_MR_CHRL_6_BIT_Val _U_(0x1)                                       /**< (FLEXCOM_FLEX_US_MR) Character length is 6 bits  */
#define   FLEXCOM_FLEX_US_MR_CHRL_7_BIT_Val _U_(0x2)                                       /**< (FLEXCOM_FLEX_US_MR) Character length is 7 bits  */
#define   FLEXCOM_FLEX_US_MR_CHRL_8_BIT_Val _U_(0x3)                                       /**< (FLEXCOM_FLEX_US_MR) Character length is 8 bits  */
#define FLEXCOM_FLEX_US_MR_CHRL_5_BIT       (FLEXCOM_FLEX_US_MR_CHRL_5_BIT_Val << FLEXCOM_FLEX_US_MR_CHRL_Pos)  /**< (FLEXCOM_FLEX_US_MR) Character length is 5 bits Position  */
#define FLEXCOM_FLEX_US_MR_CHRL_6_BIT       (FLEXCOM_FLEX_US_MR_CHRL_6_BIT_Val << FLEXCOM_FLEX_US_MR_CHRL_Pos)  /**< (FLEXCOM_FLEX_US_MR) Character length is 6 bits Position  */
#define FLEXCOM_FLEX_US_MR_CHRL_7_BIT       (FLEXCOM_FLEX_US_MR_CHRL_7_BIT_Val << FLEXCOM_FLEX_US_MR_CHRL_Pos)  /**< (FLEXCOM_FLEX_US_MR) Character length is 7 bits Position  */
#define FLEXCOM_FLEX_US_MR_CHRL_8_BIT       (FLEXCOM_FLEX_US_MR_CHRL_8_BIT_Val << FLEXCOM_FLEX_US_MR_CHRL_Pos)  /**< (FLEXCOM_FLEX_US_MR) Character length is 8 bits Position  */
#define FLEXCOM_FLEX_US_MR_SYNC_Pos         8                                              /**< (FLEXCOM_FLEX_US_MR) Synchronous Mode Select Position */
#define FLEXCOM_FLEX_US_MR_SYNC_Msk         (_U_(0x1) << FLEXCOM_FLEX_US_MR_SYNC_Pos)      /**< (FLEXCOM_FLEX_US_MR) Synchronous Mode Select Mask */
#define FLEXCOM_FLEX_US_MR_SYNC             FLEXCOM_FLEX_US_MR_SYNC_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_MR_SYNC_Msk instead */
#define FLEXCOM_FLEX_US_MR_PAR_Pos          9                                              /**< (FLEXCOM_FLEX_US_MR) Parity Type Position */
#define FLEXCOM_FLEX_US_MR_PAR_Msk          (_U_(0x7) << FLEXCOM_FLEX_US_MR_PAR_Pos)       /**< (FLEXCOM_FLEX_US_MR) Parity Type Mask */
#define FLEXCOM_FLEX_US_MR_PAR(value)       (FLEXCOM_FLEX_US_MR_PAR_Msk & ((value) << FLEXCOM_FLEX_US_MR_PAR_Pos))
#define   FLEXCOM_FLEX_US_MR_PAR_EVEN_Val   _U_(0x0)                                       /**< (FLEXCOM_FLEX_US_MR) Even parity  */
#define   FLEXCOM_FLEX_US_MR_PAR_ODD_Val    _U_(0x1)                                       /**< (FLEXCOM_FLEX_US_MR) Odd parity  */
#define   FLEXCOM_FLEX_US_MR_PAR_SPACE_Val  _U_(0x2)                                       /**< (FLEXCOM_FLEX_US_MR) Parity forced to 0 (Space)  */
#define   FLEXCOM_FLEX_US_MR_PAR_MARK_Val   _U_(0x3)                                       /**< (FLEXCOM_FLEX_US_MR) Parity forced to 1 (Mark)  */
#define   FLEXCOM_FLEX_US_MR_PAR_NO_Val     _U_(0x4)                                       /**< (FLEXCOM_FLEX_US_MR) No parity  */
#define   FLEXCOM_FLEX_US_MR_PAR_MULTIDROP_Val _U_(0x6)                                       /**< (FLEXCOM_FLEX_US_MR) Multidrop mode  */
#define FLEXCOM_FLEX_US_MR_PAR_EVEN         (FLEXCOM_FLEX_US_MR_PAR_EVEN_Val << FLEXCOM_FLEX_US_MR_PAR_Pos)  /**< (FLEXCOM_FLEX_US_MR) Even parity Position  */
#define FLEXCOM_FLEX_US_MR_PAR_ODD          (FLEXCOM_FLEX_US_MR_PAR_ODD_Val << FLEXCOM_FLEX_US_MR_PAR_Pos)  /**< (FLEXCOM_FLEX_US_MR) Odd parity Position  */
#define FLEXCOM_FLEX_US_MR_PAR_SPACE        (FLEXCOM_FLEX_US_MR_PAR_SPACE_Val << FLEXCOM_FLEX_US_MR_PAR_Pos)  /**< (FLEXCOM_FLEX_US_MR) Parity forced to 0 (Space) Position  */
#define FLEXCOM_FLEX_US_MR_PAR_MARK         (FLEXCOM_FLEX_US_MR_PAR_MARK_Val << FLEXCOM_FLEX_US_MR_PAR_Pos)  /**< (FLEXCOM_FLEX_US_MR) Parity forced to 1 (Mark) Position  */
#define FLEXCOM_FLEX_US_MR_PAR_NO           (FLEXCOM_FLEX_US_MR_PAR_NO_Val << FLEXCOM_FLEX_US_MR_PAR_Pos)  /**< (FLEXCOM_FLEX_US_MR) No parity Position  */
#define FLEXCOM_FLEX_US_MR_PAR_MULTIDROP    (FLEXCOM_FLEX_US_MR_PAR_MULTIDROP_Val << FLEXCOM_FLEX_US_MR_PAR_Pos)  /**< (FLEXCOM_FLEX_US_MR) Multidrop mode Position  */
#define FLEXCOM_FLEX_US_MR_NBSTOP_Pos       12                                             /**< (FLEXCOM_FLEX_US_MR) Number of Stop Bits Position */
#define FLEXCOM_FLEX_US_MR_NBSTOP_Msk       (_U_(0x3) << FLEXCOM_FLEX_US_MR_NBSTOP_Pos)    /**< (FLEXCOM_FLEX_US_MR) Number of Stop Bits Mask */
#define FLEXCOM_FLEX_US_MR_NBSTOP(value)    (FLEXCOM_FLEX_US_MR_NBSTOP_Msk & ((value) << FLEXCOM_FLEX_US_MR_NBSTOP_Pos))
#define   FLEXCOM_FLEX_US_MR_NBSTOP_1_BIT_Val _U_(0x0)                                       /**< (FLEXCOM_FLEX_US_MR) 1 stop bit  */
#define   FLEXCOM_FLEX_US_MR_NBSTOP_1_5_BIT_Val _U_(0x1)                                       /**< (FLEXCOM_FLEX_US_MR) 1.5 stop bit (SYNC = 0) or reserved (SYNC = 1)  */
#define   FLEXCOM_FLEX_US_MR_NBSTOP_2_BIT_Val _U_(0x2)                                       /**< (FLEXCOM_FLEX_US_MR) 2 stop bits  */
#define FLEXCOM_FLEX_US_MR_NBSTOP_1_BIT     (FLEXCOM_FLEX_US_MR_NBSTOP_1_BIT_Val << FLEXCOM_FLEX_US_MR_NBSTOP_Pos)  /**< (FLEXCOM_FLEX_US_MR) 1 stop bit Position  */
#define FLEXCOM_FLEX_US_MR_NBSTOP_1_5_BIT   (FLEXCOM_FLEX_US_MR_NBSTOP_1_5_BIT_Val << FLEXCOM_FLEX_US_MR_NBSTOP_Pos)  /**< (FLEXCOM_FLEX_US_MR) 1.5 stop bit (SYNC = 0) or reserved (SYNC = 1) Position  */
#define FLEXCOM_FLEX_US_MR_NBSTOP_2_BIT     (FLEXCOM_FLEX_US_MR_NBSTOP_2_BIT_Val << FLEXCOM_FLEX_US_MR_NBSTOP_Pos)  /**< (FLEXCOM_FLEX_US_MR) 2 stop bits Position  */
#define FLEXCOM_FLEX_US_MR_CHMODE_Pos       14                                             /**< (FLEXCOM_FLEX_US_MR) Channel Mode Position */
#define FLEXCOM_FLEX_US_MR_CHMODE_Msk       (_U_(0x3) << FLEXCOM_FLEX_US_MR_CHMODE_Pos)    /**< (FLEXCOM_FLEX_US_MR) Channel Mode Mask */
#define FLEXCOM_FLEX_US_MR_CHMODE(value)    (FLEXCOM_FLEX_US_MR_CHMODE_Msk & ((value) << FLEXCOM_FLEX_US_MR_CHMODE_Pos))
#define   FLEXCOM_FLEX_US_MR_CHMODE_NORMAL_Val _U_(0x0)                                       /**< (FLEXCOM_FLEX_US_MR) Normal mode  */
#define   FLEXCOM_FLEX_US_MR_CHMODE_AUTOMATIC_Val _U_(0x1)                                       /**< (FLEXCOM_FLEX_US_MR) Automatic Echo. Receiver input is connected to the TXD pin.  */
#define   FLEXCOM_FLEX_US_MR_CHMODE_LOCAL_LOOPBACK_Val _U_(0x2)                                       /**< (FLEXCOM_FLEX_US_MR) Local Loopback. Transmitter output is connected to the Receiver Input.  */
#define   FLEXCOM_FLEX_US_MR_CHMODE_REMOTE_LOOPBACK_Val _U_(0x3)                                       /**< (FLEXCOM_FLEX_US_MR) Remote Loopback. RXD pin is internally connected to the TXD pin.  */
#define FLEXCOM_FLEX_US_MR_CHMODE_NORMAL    (FLEXCOM_FLEX_US_MR_CHMODE_NORMAL_Val << FLEXCOM_FLEX_US_MR_CHMODE_Pos)  /**< (FLEXCOM_FLEX_US_MR) Normal mode Position  */
#define FLEXCOM_FLEX_US_MR_CHMODE_AUTOMATIC (FLEXCOM_FLEX_US_MR_CHMODE_AUTOMATIC_Val << FLEXCOM_FLEX_US_MR_CHMODE_Pos)  /**< (FLEXCOM_FLEX_US_MR) Automatic Echo. Receiver input is connected to the TXD pin. Position  */
#define FLEXCOM_FLEX_US_MR_CHMODE_LOCAL_LOOPBACK (FLEXCOM_FLEX_US_MR_CHMODE_LOCAL_LOOPBACK_Val << FLEXCOM_FLEX_US_MR_CHMODE_Pos)  /**< (FLEXCOM_FLEX_US_MR) Local Loopback. Transmitter output is connected to the Receiver Input. Position  */
#define FLEXCOM_FLEX_US_MR_CHMODE_REMOTE_LOOPBACK (FLEXCOM_FLEX_US_MR_CHMODE_REMOTE_LOOPBACK_Val << FLEXCOM_FLEX_US_MR_CHMODE_Pos)  /**< (FLEXCOM_FLEX_US_MR) Remote Loopback. RXD pin is internally connected to the TXD pin. Position  */
#define FLEXCOM_FLEX_US_MR_MSBF_Pos         16                                             /**< (FLEXCOM_FLEX_US_MR) Bit Order Position */
#define FLEXCOM_FLEX_US_MR_MSBF_Msk         (_U_(0x1) << FLEXCOM_FLEX_US_MR_MSBF_Pos)      /**< (FLEXCOM_FLEX_US_MR) Bit Order Mask */
#define FLEXCOM_FLEX_US_MR_MSBF             FLEXCOM_FLEX_US_MR_MSBF_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_MR_MSBF_Msk instead */
#define FLEXCOM_FLEX_US_MR_MODE9_Pos        17                                             /**< (FLEXCOM_FLEX_US_MR) 9-bit Character Length Position */
#define FLEXCOM_FLEX_US_MR_MODE9_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_MR_MODE9_Pos)     /**< (FLEXCOM_FLEX_US_MR) 9-bit Character Length Mask */
#define FLEXCOM_FLEX_US_MR_MODE9            FLEXCOM_FLEX_US_MR_MODE9_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_MR_MODE9_Msk instead */
#define FLEXCOM_FLEX_US_MR_CLKO_Pos         18                                             /**< (FLEXCOM_FLEX_US_MR) Clock Output Select Position */
#define FLEXCOM_FLEX_US_MR_CLKO_Msk         (_U_(0x1) << FLEXCOM_FLEX_US_MR_CLKO_Pos)      /**< (FLEXCOM_FLEX_US_MR) Clock Output Select Mask */
#define FLEXCOM_FLEX_US_MR_CLKO             FLEXCOM_FLEX_US_MR_CLKO_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_MR_CLKO_Msk instead */
#define FLEXCOM_FLEX_US_MR_OVER_Pos         19                                             /**< (FLEXCOM_FLEX_US_MR) Oversampling Mode Position */
#define FLEXCOM_FLEX_US_MR_OVER_Msk         (_U_(0x1) << FLEXCOM_FLEX_US_MR_OVER_Pos)      /**< (FLEXCOM_FLEX_US_MR) Oversampling Mode Mask */
#define FLEXCOM_FLEX_US_MR_OVER             FLEXCOM_FLEX_US_MR_OVER_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_MR_OVER_Msk instead */
#define FLEXCOM_FLEX_US_MR_INACK_Pos        20                                             /**< (FLEXCOM_FLEX_US_MR) Inhibit Non Acknowledge Position */
#define FLEXCOM_FLEX_US_MR_INACK_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_MR_INACK_Pos)     /**< (FLEXCOM_FLEX_US_MR) Inhibit Non Acknowledge Mask */
#define FLEXCOM_FLEX_US_MR_INACK            FLEXCOM_FLEX_US_MR_INACK_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_MR_INACK_Msk instead */
#define FLEXCOM_FLEX_US_MR_DSNACK_Pos       21                                             /**< (FLEXCOM_FLEX_US_MR) Disable Successive NACK Position */
#define FLEXCOM_FLEX_US_MR_DSNACK_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_MR_DSNACK_Pos)    /**< (FLEXCOM_FLEX_US_MR) Disable Successive NACK Mask */
#define FLEXCOM_FLEX_US_MR_DSNACK           FLEXCOM_FLEX_US_MR_DSNACK_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_MR_DSNACK_Msk instead */
#define FLEXCOM_FLEX_US_MR_VAR_SYNC_Pos     22                                             /**< (FLEXCOM_FLEX_US_MR) Variable Synchronization of Command/Data Sync Start Frame Delimiter Position */
#define FLEXCOM_FLEX_US_MR_VAR_SYNC_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_MR_VAR_SYNC_Pos)  /**< (FLEXCOM_FLEX_US_MR) Variable Synchronization of Command/Data Sync Start Frame Delimiter Mask */
#define FLEXCOM_FLEX_US_MR_VAR_SYNC         FLEXCOM_FLEX_US_MR_VAR_SYNC_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_MR_VAR_SYNC_Msk instead */
#define FLEXCOM_FLEX_US_MR_INVDATA_Pos      23                                             /**< (FLEXCOM_FLEX_US_MR) Inverted Data Position */
#define FLEXCOM_FLEX_US_MR_INVDATA_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_MR_INVDATA_Pos)   /**< (FLEXCOM_FLEX_US_MR) Inverted Data Mask */
#define FLEXCOM_FLEX_US_MR_INVDATA          FLEXCOM_FLEX_US_MR_INVDATA_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_MR_INVDATA_Msk instead */
#define FLEXCOM_FLEX_US_MR_MAX_ITERATION_Pos 24                                             /**< (FLEXCOM_FLEX_US_MR) Maximum Number of Automatic Iteration Position */
#define FLEXCOM_FLEX_US_MR_MAX_ITERATION_Msk (_U_(0x7) << FLEXCOM_FLEX_US_MR_MAX_ITERATION_Pos)  /**< (FLEXCOM_FLEX_US_MR) Maximum Number of Automatic Iteration Mask */
#define FLEXCOM_FLEX_US_MR_MAX_ITERATION(value) (FLEXCOM_FLEX_US_MR_MAX_ITERATION_Msk & ((value) << FLEXCOM_FLEX_US_MR_MAX_ITERATION_Pos))
#define FLEXCOM_FLEX_US_MR_FILTER_Pos       28                                             /**< (FLEXCOM_FLEX_US_MR) Receive Line Filter Position */
#define FLEXCOM_FLEX_US_MR_FILTER_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_MR_FILTER_Pos)    /**< (FLEXCOM_FLEX_US_MR) Receive Line Filter Mask */
#define FLEXCOM_FLEX_US_MR_FILTER           FLEXCOM_FLEX_US_MR_FILTER_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_MR_FILTER_Msk instead */
#define FLEXCOM_FLEX_US_MR_MAN_Pos          29                                             /**< (FLEXCOM_FLEX_US_MR) Manchester Encoder/Decoder Enable Position */
#define FLEXCOM_FLEX_US_MR_MAN_Msk          (_U_(0x1) << FLEXCOM_FLEX_US_MR_MAN_Pos)       /**< (FLEXCOM_FLEX_US_MR) Manchester Encoder/Decoder Enable Mask */
#define FLEXCOM_FLEX_US_MR_MAN              FLEXCOM_FLEX_US_MR_MAN_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_MR_MAN_Msk instead */
#define FLEXCOM_FLEX_US_MR_MODSYNC_Pos      30                                             /**< (FLEXCOM_FLEX_US_MR) Manchester Synchronization Mode Position */
#define FLEXCOM_FLEX_US_MR_MODSYNC_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_MR_MODSYNC_Pos)   /**< (FLEXCOM_FLEX_US_MR) Manchester Synchronization Mode Mask */
#define FLEXCOM_FLEX_US_MR_MODSYNC          FLEXCOM_FLEX_US_MR_MODSYNC_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_MR_MODSYNC_Msk instead */
#define FLEXCOM_FLEX_US_MR_ONEBIT_Pos       31                                             /**< (FLEXCOM_FLEX_US_MR) Start Frame Delimiter Selector Position */
#define FLEXCOM_FLEX_US_MR_ONEBIT_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_MR_ONEBIT_Pos)    /**< (FLEXCOM_FLEX_US_MR) Start Frame Delimiter Selector Mask */
#define FLEXCOM_FLEX_US_MR_ONEBIT           FLEXCOM_FLEX_US_MR_ONEBIT_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_MR_ONEBIT_Msk instead */
#define FLEXCOM_FLEX_US_MR_MASK             _U_(0xF7FFFFFF)                                /**< \deprecated (FLEXCOM_FLEX_US_MR) Register MASK  (Use FLEXCOM_FLEX_US_MR_Msk instead)  */
#define FLEXCOM_FLEX_US_MR_Msk              _U_(0xF7FFFFFF)                                /**< (FLEXCOM_FLEX_US_MR) Register Mask  */

/* SPI mode */
#define FLEXCOM_FLEX_US_MR_SPI_MASK         _U_(0x00)                                      /**< \deprecated (FLEXCOM_FLEX_US_MR_SPI) Register MASK  (Use FLEXCOM_FLEX_US_MR_SPI_Msk instead)  */
#define FLEXCOM_FLEX_US_MR_SPI_Msk          _U_(0x00)                                      /**< (FLEXCOM_FLEX_US_MR_SPI) Register Mask  */


/* -------- FLEXCOM_FLEX_US_IER : (FLEXCOM Offset: 0x208) (/W 32) USART Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RXRDY:1;                   /**< bit:      0  RXRDY Interrupt Enable                   */
    uint32_t TXRDY:1;                   /**< bit:      1  TXRDY Interrupt Enable                   */
    uint32_t RXBRK:1;                   /**< bit:      2  Receiver Break Interrupt Enable          */
    uint32_t :2;                        /**< bit:   3..4  Reserved */
    uint32_t OVRE:1;                    /**< bit:      5  Overrun Error Interrupt Enable           */
    uint32_t FRAME:1;                   /**< bit:      6  Framing Error Interrupt Enable           */
    uint32_t PARE:1;                    /**< bit:      7  Parity Error Interrupt Enable            */
    uint32_t TIMEOUT:1;                 /**< bit:      8  Timeout Interrupt Enable                 */
    uint32_t TXEMPTY:1;                 /**< bit:      9  TXEMPTY Interrupt Enable                 */
    uint32_t ITER:1;                    /**< bit:     10  Max number of Repetitions Reached Interrupt Enable */
    uint32_t :2;                        /**< bit: 11..12  Reserved */
    uint32_t NACK:1;                    /**< bit:     13  Non Acknowledge Interrupt Enable         */
    uint32_t :5;                        /**< bit: 14..18  Reserved */
    uint32_t CTSIC:1;                   /**< bit:     19  Clear to Send Input Change Interrupt Enable */
    uint32_t :2;                        /**< bit: 20..21  Reserved */
    uint32_t CMP:1;                     /**< bit:     22  Comparison Interrupt Enable              */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t MANE:1;                    /**< bit:     24  Manchester Error Interrupt Enable        */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct { // SPI mode
    uint32_t :32;                       /**< bit:  0..31  Reserved */
  } SPI;                                /**< Structure used for SPI mode access */
  struct { // LIN mode
    uint32_t :32;                       /**< bit:  0..31  Reserved */
  } LIN;                                /**< Structure used for LIN mode access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_IER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_IER_OFFSET          (0x208)                                       /**<  (FLEXCOM_FLEX_US_IER) USART Interrupt Enable Register  Offset */

#define FLEXCOM_FLEX_US_IER_RXRDY_Pos       0                                              /**< (FLEXCOM_FLEX_US_IER) RXRDY Interrupt Enable Position */
#define FLEXCOM_FLEX_US_IER_RXRDY_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_IER_RXRDY_Pos)    /**< (FLEXCOM_FLEX_US_IER) RXRDY Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_IER_RXRDY           FLEXCOM_FLEX_US_IER_RXRDY_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IER_RXRDY_Msk instead */
#define FLEXCOM_FLEX_US_IER_TXRDY_Pos       1                                              /**< (FLEXCOM_FLEX_US_IER) TXRDY Interrupt Enable Position */
#define FLEXCOM_FLEX_US_IER_TXRDY_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_IER_TXRDY_Pos)    /**< (FLEXCOM_FLEX_US_IER) TXRDY Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_IER_TXRDY           FLEXCOM_FLEX_US_IER_TXRDY_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IER_TXRDY_Msk instead */
#define FLEXCOM_FLEX_US_IER_RXBRK_Pos       2                                              /**< (FLEXCOM_FLEX_US_IER) Receiver Break Interrupt Enable Position */
#define FLEXCOM_FLEX_US_IER_RXBRK_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_IER_RXBRK_Pos)    /**< (FLEXCOM_FLEX_US_IER) Receiver Break Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_IER_RXBRK           FLEXCOM_FLEX_US_IER_RXBRK_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IER_RXBRK_Msk instead */
#define FLEXCOM_FLEX_US_IER_OVRE_Pos        5                                              /**< (FLEXCOM_FLEX_US_IER) Overrun Error Interrupt Enable Position */
#define FLEXCOM_FLEX_US_IER_OVRE_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_IER_OVRE_Pos)     /**< (FLEXCOM_FLEX_US_IER) Overrun Error Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_IER_OVRE            FLEXCOM_FLEX_US_IER_OVRE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IER_OVRE_Msk instead */
#define FLEXCOM_FLEX_US_IER_FRAME_Pos       6                                              /**< (FLEXCOM_FLEX_US_IER) Framing Error Interrupt Enable Position */
#define FLEXCOM_FLEX_US_IER_FRAME_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_IER_FRAME_Pos)    /**< (FLEXCOM_FLEX_US_IER) Framing Error Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_IER_FRAME           FLEXCOM_FLEX_US_IER_FRAME_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IER_FRAME_Msk instead */
#define FLEXCOM_FLEX_US_IER_PARE_Pos        7                                              /**< (FLEXCOM_FLEX_US_IER) Parity Error Interrupt Enable Position */
#define FLEXCOM_FLEX_US_IER_PARE_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_IER_PARE_Pos)     /**< (FLEXCOM_FLEX_US_IER) Parity Error Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_IER_PARE            FLEXCOM_FLEX_US_IER_PARE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IER_PARE_Msk instead */
#define FLEXCOM_FLEX_US_IER_TIMEOUT_Pos     8                                              /**< (FLEXCOM_FLEX_US_IER) Timeout Interrupt Enable Position */
#define FLEXCOM_FLEX_US_IER_TIMEOUT_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_IER_TIMEOUT_Pos)  /**< (FLEXCOM_FLEX_US_IER) Timeout Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_IER_TIMEOUT         FLEXCOM_FLEX_US_IER_TIMEOUT_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IER_TIMEOUT_Msk instead */
#define FLEXCOM_FLEX_US_IER_TXEMPTY_Pos     9                                              /**< (FLEXCOM_FLEX_US_IER) TXEMPTY Interrupt Enable Position */
#define FLEXCOM_FLEX_US_IER_TXEMPTY_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_IER_TXEMPTY_Pos)  /**< (FLEXCOM_FLEX_US_IER) TXEMPTY Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_IER_TXEMPTY         FLEXCOM_FLEX_US_IER_TXEMPTY_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IER_TXEMPTY_Msk instead */
#define FLEXCOM_FLEX_US_IER_ITER_Pos        10                                             /**< (FLEXCOM_FLEX_US_IER) Max number of Repetitions Reached Interrupt Enable Position */
#define FLEXCOM_FLEX_US_IER_ITER_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_IER_ITER_Pos)     /**< (FLEXCOM_FLEX_US_IER) Max number of Repetitions Reached Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_IER_ITER            FLEXCOM_FLEX_US_IER_ITER_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IER_ITER_Msk instead */
#define FLEXCOM_FLEX_US_IER_NACK_Pos        13                                             /**< (FLEXCOM_FLEX_US_IER) Non Acknowledge Interrupt Enable Position */
#define FLEXCOM_FLEX_US_IER_NACK_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_IER_NACK_Pos)     /**< (FLEXCOM_FLEX_US_IER) Non Acknowledge Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_IER_NACK            FLEXCOM_FLEX_US_IER_NACK_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IER_NACK_Msk instead */
#define FLEXCOM_FLEX_US_IER_CTSIC_Pos       19                                             /**< (FLEXCOM_FLEX_US_IER) Clear to Send Input Change Interrupt Enable Position */
#define FLEXCOM_FLEX_US_IER_CTSIC_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_IER_CTSIC_Pos)    /**< (FLEXCOM_FLEX_US_IER) Clear to Send Input Change Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_IER_CTSIC           FLEXCOM_FLEX_US_IER_CTSIC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IER_CTSIC_Msk instead */
#define FLEXCOM_FLEX_US_IER_CMP_Pos         22                                             /**< (FLEXCOM_FLEX_US_IER) Comparison Interrupt Enable Position */
#define FLEXCOM_FLEX_US_IER_CMP_Msk         (_U_(0x1) << FLEXCOM_FLEX_US_IER_CMP_Pos)      /**< (FLEXCOM_FLEX_US_IER) Comparison Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_IER_CMP             FLEXCOM_FLEX_US_IER_CMP_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IER_CMP_Msk instead */
#define FLEXCOM_FLEX_US_IER_MANE_Pos        24                                             /**< (FLEXCOM_FLEX_US_IER) Manchester Error Interrupt Enable Position */
#define FLEXCOM_FLEX_US_IER_MANE_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_IER_MANE_Pos)     /**< (FLEXCOM_FLEX_US_IER) Manchester Error Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_IER_MANE            FLEXCOM_FLEX_US_IER_MANE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IER_MANE_Msk instead */
#define FLEXCOM_FLEX_US_IER_MASK            _U_(0x14827E7)                                 /**< \deprecated (FLEXCOM_FLEX_US_IER) Register MASK  (Use FLEXCOM_FLEX_US_IER_Msk instead)  */
#define FLEXCOM_FLEX_US_IER_Msk             _U_(0x14827E7)                                 /**< (FLEXCOM_FLEX_US_IER) Register Mask  */

/* SPI mode */
#define FLEXCOM_FLEX_US_IER_SPI_MASK        _U_(0x00)                                      /**< \deprecated (FLEXCOM_FLEX_US_IER_SPI) Register MASK  (Use FLEXCOM_FLEX_US_IER_SPI_Msk instead)  */
#define FLEXCOM_FLEX_US_IER_SPI_Msk         _U_(0x00)                                      /**< (FLEXCOM_FLEX_US_IER_SPI) Register Mask  */

/* LIN mode */
#define FLEXCOM_FLEX_US_IER_LIN_MASK        _U_(0x00)                                      /**< \deprecated (FLEXCOM_FLEX_US_IER_LIN) Register MASK  (Use FLEXCOM_FLEX_US_IER_LIN_Msk instead)  */
#define FLEXCOM_FLEX_US_IER_LIN_Msk         _U_(0x00)                                      /**< (FLEXCOM_FLEX_US_IER_LIN) Register Mask  */


/* -------- FLEXCOM_FLEX_US_IDR : (FLEXCOM Offset: 0x20c) (/W 32) USART Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RXRDY:1;                   /**< bit:      0  RXRDY Interrupt Disable                  */
    uint32_t TXRDY:1;                   /**< bit:      1  TXRDY Interrupt Disable                  */
    uint32_t RXBRK:1;                   /**< bit:      2  Receiver Break Interrupt Disable         */
    uint32_t :2;                        /**< bit:   3..4  Reserved */
    uint32_t OVRE:1;                    /**< bit:      5  Overrun Error Interrupt Enable           */
    uint32_t FRAME:1;                   /**< bit:      6  Framing Error Interrupt Disable          */
    uint32_t PARE:1;                    /**< bit:      7  Parity Error Interrupt Disable           */
    uint32_t TIMEOUT:1;                 /**< bit:      8  Timeout Interrupt Disable                */
    uint32_t TXEMPTY:1;                 /**< bit:      9  TXEMPTY Interrupt Disable                */
    uint32_t ITER:1;                    /**< bit:     10  Max Number of Repetitions Reached Interrupt Disable */
    uint32_t :2;                        /**< bit: 11..12  Reserved */
    uint32_t NACK:1;                    /**< bit:     13  Non Acknowledge Interrupt Disable        */
    uint32_t :5;                        /**< bit: 14..18  Reserved */
    uint32_t CTSIC:1;                   /**< bit:     19  Clear to Send Input Change Interrupt Disable */
    uint32_t :2;                        /**< bit: 20..21  Reserved */
    uint32_t CMP:1;                     /**< bit:     22  Comparison Interrupt Disable             */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t MANE:1;                    /**< bit:     24  Manchester Error Interrupt Disable       */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct { // SPI mode
    uint32_t :32;                       /**< bit:  0..31  Reserved */
  } SPI;                                /**< Structure used for SPI mode access */
  struct { // LIN mode
    uint32_t :32;                       /**< bit:  0..31  Reserved */
  } LIN;                                /**< Structure used for LIN mode access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_IDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_IDR_OFFSET          (0x20C)                                       /**<  (FLEXCOM_FLEX_US_IDR) USART Interrupt Disable Register  Offset */

#define FLEXCOM_FLEX_US_IDR_RXRDY_Pos       0                                              /**< (FLEXCOM_FLEX_US_IDR) RXRDY Interrupt Disable Position */
#define FLEXCOM_FLEX_US_IDR_RXRDY_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_IDR_RXRDY_Pos)    /**< (FLEXCOM_FLEX_US_IDR) RXRDY Interrupt Disable Mask */
#define FLEXCOM_FLEX_US_IDR_RXRDY           FLEXCOM_FLEX_US_IDR_RXRDY_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IDR_RXRDY_Msk instead */
#define FLEXCOM_FLEX_US_IDR_TXRDY_Pos       1                                              /**< (FLEXCOM_FLEX_US_IDR) TXRDY Interrupt Disable Position */
#define FLEXCOM_FLEX_US_IDR_TXRDY_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_IDR_TXRDY_Pos)    /**< (FLEXCOM_FLEX_US_IDR) TXRDY Interrupt Disable Mask */
#define FLEXCOM_FLEX_US_IDR_TXRDY           FLEXCOM_FLEX_US_IDR_TXRDY_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IDR_TXRDY_Msk instead */
#define FLEXCOM_FLEX_US_IDR_RXBRK_Pos       2                                              /**< (FLEXCOM_FLEX_US_IDR) Receiver Break Interrupt Disable Position */
#define FLEXCOM_FLEX_US_IDR_RXBRK_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_IDR_RXBRK_Pos)    /**< (FLEXCOM_FLEX_US_IDR) Receiver Break Interrupt Disable Mask */
#define FLEXCOM_FLEX_US_IDR_RXBRK           FLEXCOM_FLEX_US_IDR_RXBRK_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IDR_RXBRK_Msk instead */
#define FLEXCOM_FLEX_US_IDR_OVRE_Pos        5                                              /**< (FLEXCOM_FLEX_US_IDR) Overrun Error Interrupt Enable Position */
#define FLEXCOM_FLEX_US_IDR_OVRE_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_IDR_OVRE_Pos)     /**< (FLEXCOM_FLEX_US_IDR) Overrun Error Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_IDR_OVRE            FLEXCOM_FLEX_US_IDR_OVRE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IDR_OVRE_Msk instead */
#define FLEXCOM_FLEX_US_IDR_FRAME_Pos       6                                              /**< (FLEXCOM_FLEX_US_IDR) Framing Error Interrupt Disable Position */
#define FLEXCOM_FLEX_US_IDR_FRAME_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_IDR_FRAME_Pos)    /**< (FLEXCOM_FLEX_US_IDR) Framing Error Interrupt Disable Mask */
#define FLEXCOM_FLEX_US_IDR_FRAME           FLEXCOM_FLEX_US_IDR_FRAME_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IDR_FRAME_Msk instead */
#define FLEXCOM_FLEX_US_IDR_PARE_Pos        7                                              /**< (FLEXCOM_FLEX_US_IDR) Parity Error Interrupt Disable Position */
#define FLEXCOM_FLEX_US_IDR_PARE_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_IDR_PARE_Pos)     /**< (FLEXCOM_FLEX_US_IDR) Parity Error Interrupt Disable Mask */
#define FLEXCOM_FLEX_US_IDR_PARE            FLEXCOM_FLEX_US_IDR_PARE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IDR_PARE_Msk instead */
#define FLEXCOM_FLEX_US_IDR_TIMEOUT_Pos     8                                              /**< (FLEXCOM_FLEX_US_IDR) Timeout Interrupt Disable Position */
#define FLEXCOM_FLEX_US_IDR_TIMEOUT_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_IDR_TIMEOUT_Pos)  /**< (FLEXCOM_FLEX_US_IDR) Timeout Interrupt Disable Mask */
#define FLEXCOM_FLEX_US_IDR_TIMEOUT         FLEXCOM_FLEX_US_IDR_TIMEOUT_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IDR_TIMEOUT_Msk instead */
#define FLEXCOM_FLEX_US_IDR_TXEMPTY_Pos     9                                              /**< (FLEXCOM_FLEX_US_IDR) TXEMPTY Interrupt Disable Position */
#define FLEXCOM_FLEX_US_IDR_TXEMPTY_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_IDR_TXEMPTY_Pos)  /**< (FLEXCOM_FLEX_US_IDR) TXEMPTY Interrupt Disable Mask */
#define FLEXCOM_FLEX_US_IDR_TXEMPTY         FLEXCOM_FLEX_US_IDR_TXEMPTY_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IDR_TXEMPTY_Msk instead */
#define FLEXCOM_FLEX_US_IDR_ITER_Pos        10                                             /**< (FLEXCOM_FLEX_US_IDR) Max Number of Repetitions Reached Interrupt Disable Position */
#define FLEXCOM_FLEX_US_IDR_ITER_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_IDR_ITER_Pos)     /**< (FLEXCOM_FLEX_US_IDR) Max Number of Repetitions Reached Interrupt Disable Mask */
#define FLEXCOM_FLEX_US_IDR_ITER            FLEXCOM_FLEX_US_IDR_ITER_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IDR_ITER_Msk instead */
#define FLEXCOM_FLEX_US_IDR_NACK_Pos        13                                             /**< (FLEXCOM_FLEX_US_IDR) Non Acknowledge Interrupt Disable Position */
#define FLEXCOM_FLEX_US_IDR_NACK_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_IDR_NACK_Pos)     /**< (FLEXCOM_FLEX_US_IDR) Non Acknowledge Interrupt Disable Mask */
#define FLEXCOM_FLEX_US_IDR_NACK            FLEXCOM_FLEX_US_IDR_NACK_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IDR_NACK_Msk instead */
#define FLEXCOM_FLEX_US_IDR_CTSIC_Pos       19                                             /**< (FLEXCOM_FLEX_US_IDR) Clear to Send Input Change Interrupt Disable Position */
#define FLEXCOM_FLEX_US_IDR_CTSIC_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_IDR_CTSIC_Pos)    /**< (FLEXCOM_FLEX_US_IDR) Clear to Send Input Change Interrupt Disable Mask */
#define FLEXCOM_FLEX_US_IDR_CTSIC           FLEXCOM_FLEX_US_IDR_CTSIC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IDR_CTSIC_Msk instead */
#define FLEXCOM_FLEX_US_IDR_CMP_Pos         22                                             /**< (FLEXCOM_FLEX_US_IDR) Comparison Interrupt Disable Position */
#define FLEXCOM_FLEX_US_IDR_CMP_Msk         (_U_(0x1) << FLEXCOM_FLEX_US_IDR_CMP_Pos)      /**< (FLEXCOM_FLEX_US_IDR) Comparison Interrupt Disable Mask */
#define FLEXCOM_FLEX_US_IDR_CMP             FLEXCOM_FLEX_US_IDR_CMP_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IDR_CMP_Msk instead */
#define FLEXCOM_FLEX_US_IDR_MANE_Pos        24                                             /**< (FLEXCOM_FLEX_US_IDR) Manchester Error Interrupt Disable Position */
#define FLEXCOM_FLEX_US_IDR_MANE_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_IDR_MANE_Pos)     /**< (FLEXCOM_FLEX_US_IDR) Manchester Error Interrupt Disable Mask */
#define FLEXCOM_FLEX_US_IDR_MANE            FLEXCOM_FLEX_US_IDR_MANE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IDR_MANE_Msk instead */
#define FLEXCOM_FLEX_US_IDR_MASK            _U_(0x14827E7)                                 /**< \deprecated (FLEXCOM_FLEX_US_IDR) Register MASK  (Use FLEXCOM_FLEX_US_IDR_Msk instead)  */
#define FLEXCOM_FLEX_US_IDR_Msk             _U_(0x14827E7)                                 /**< (FLEXCOM_FLEX_US_IDR) Register Mask  */

/* SPI mode */
#define FLEXCOM_FLEX_US_IDR_SPI_MASK        _U_(0x00)                                      /**< \deprecated (FLEXCOM_FLEX_US_IDR_SPI) Register MASK  (Use FLEXCOM_FLEX_US_IDR_SPI_Msk instead)  */
#define FLEXCOM_FLEX_US_IDR_SPI_Msk         _U_(0x00)                                      /**< (FLEXCOM_FLEX_US_IDR_SPI) Register Mask  */

/* LIN mode */
#define FLEXCOM_FLEX_US_IDR_LIN_MASK        _U_(0x00)                                      /**< \deprecated (FLEXCOM_FLEX_US_IDR_LIN) Register MASK  (Use FLEXCOM_FLEX_US_IDR_LIN_Msk instead)  */
#define FLEXCOM_FLEX_US_IDR_LIN_Msk         _U_(0x00)                                      /**< (FLEXCOM_FLEX_US_IDR_LIN) Register Mask  */


/* -------- FLEXCOM_FLEX_US_IMR : (FLEXCOM Offset: 0x210) (R/ 32) USART Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RXRDY:1;                   /**< bit:      0  RXRDY Interrupt Mask                     */
    uint32_t TXRDY:1;                   /**< bit:      1  TXRDY Interrupt Mask                     */
    uint32_t RXBRK:1;                   /**< bit:      2  Receiver Break Interrupt Mask            */
    uint32_t :2;                        /**< bit:   3..4  Reserved */
    uint32_t OVRE:1;                    /**< bit:      5  Overrun Error Interrupt Mask             */
    uint32_t FRAME:1;                   /**< bit:      6  Framing Error Interrupt Mask             */
    uint32_t PARE:1;                    /**< bit:      7  Parity Error Interrupt Mask              */
    uint32_t TIMEOUT:1;                 /**< bit:      8  Timeout Interrupt Mask                   */
    uint32_t TXEMPTY:1;                 /**< bit:      9  TXEMPTY Interrupt Mask                   */
    uint32_t ITER:1;                    /**< bit:     10  Max Number of Repetitions Reached Interrupt Mask */
    uint32_t :2;                        /**< bit: 11..12  Reserved */
    uint32_t NACK:1;                    /**< bit:     13  Non Acknowledge Interrupt Mask           */
    uint32_t :5;                        /**< bit: 14..18  Reserved */
    uint32_t CTSIC:1;                   /**< bit:     19  Clear to Send Input Change Interrupt Mask */
    uint32_t :2;                        /**< bit: 20..21  Reserved */
    uint32_t CMP:1;                     /**< bit:     22  Comparison Interrupt Mask                */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t MANE:1;                    /**< bit:     24  Manchester Error Interrupt Mask          */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct { // SPI mode
    uint32_t :32;                       /**< bit:  0..31  Reserved */
  } SPI;                                /**< Structure used for SPI mode access */
  struct { // LIN mode
    uint32_t :32;                       /**< bit:  0..31  Reserved */
  } LIN;                                /**< Structure used for LIN mode access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_IMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_IMR_OFFSET          (0x210)                                       /**<  (FLEXCOM_FLEX_US_IMR) USART Interrupt Mask Register  Offset */

#define FLEXCOM_FLEX_US_IMR_RXRDY_Pos       0                                              /**< (FLEXCOM_FLEX_US_IMR) RXRDY Interrupt Mask Position */
#define FLEXCOM_FLEX_US_IMR_RXRDY_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_IMR_RXRDY_Pos)    /**< (FLEXCOM_FLEX_US_IMR) RXRDY Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_IMR_RXRDY           FLEXCOM_FLEX_US_IMR_RXRDY_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IMR_RXRDY_Msk instead */
#define FLEXCOM_FLEX_US_IMR_TXRDY_Pos       1                                              /**< (FLEXCOM_FLEX_US_IMR) TXRDY Interrupt Mask Position */
#define FLEXCOM_FLEX_US_IMR_TXRDY_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_IMR_TXRDY_Pos)    /**< (FLEXCOM_FLEX_US_IMR) TXRDY Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_IMR_TXRDY           FLEXCOM_FLEX_US_IMR_TXRDY_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IMR_TXRDY_Msk instead */
#define FLEXCOM_FLEX_US_IMR_RXBRK_Pos       2                                              /**< (FLEXCOM_FLEX_US_IMR) Receiver Break Interrupt Mask Position */
#define FLEXCOM_FLEX_US_IMR_RXBRK_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_IMR_RXBRK_Pos)    /**< (FLEXCOM_FLEX_US_IMR) Receiver Break Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_IMR_RXBRK           FLEXCOM_FLEX_US_IMR_RXBRK_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IMR_RXBRK_Msk instead */
#define FLEXCOM_FLEX_US_IMR_OVRE_Pos        5                                              /**< (FLEXCOM_FLEX_US_IMR) Overrun Error Interrupt Mask Position */
#define FLEXCOM_FLEX_US_IMR_OVRE_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_IMR_OVRE_Pos)     /**< (FLEXCOM_FLEX_US_IMR) Overrun Error Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_IMR_OVRE            FLEXCOM_FLEX_US_IMR_OVRE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IMR_OVRE_Msk instead */
#define FLEXCOM_FLEX_US_IMR_FRAME_Pos       6                                              /**< (FLEXCOM_FLEX_US_IMR) Framing Error Interrupt Mask Position */
#define FLEXCOM_FLEX_US_IMR_FRAME_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_IMR_FRAME_Pos)    /**< (FLEXCOM_FLEX_US_IMR) Framing Error Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_IMR_FRAME           FLEXCOM_FLEX_US_IMR_FRAME_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IMR_FRAME_Msk instead */
#define FLEXCOM_FLEX_US_IMR_PARE_Pos        7                                              /**< (FLEXCOM_FLEX_US_IMR) Parity Error Interrupt Mask Position */
#define FLEXCOM_FLEX_US_IMR_PARE_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_IMR_PARE_Pos)     /**< (FLEXCOM_FLEX_US_IMR) Parity Error Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_IMR_PARE            FLEXCOM_FLEX_US_IMR_PARE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IMR_PARE_Msk instead */
#define FLEXCOM_FLEX_US_IMR_TIMEOUT_Pos     8                                              /**< (FLEXCOM_FLEX_US_IMR) Timeout Interrupt Mask Position */
#define FLEXCOM_FLEX_US_IMR_TIMEOUT_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_IMR_TIMEOUT_Pos)  /**< (FLEXCOM_FLEX_US_IMR) Timeout Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_IMR_TIMEOUT         FLEXCOM_FLEX_US_IMR_TIMEOUT_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IMR_TIMEOUT_Msk instead */
#define FLEXCOM_FLEX_US_IMR_TXEMPTY_Pos     9                                              /**< (FLEXCOM_FLEX_US_IMR) TXEMPTY Interrupt Mask Position */
#define FLEXCOM_FLEX_US_IMR_TXEMPTY_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_IMR_TXEMPTY_Pos)  /**< (FLEXCOM_FLEX_US_IMR) TXEMPTY Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_IMR_TXEMPTY         FLEXCOM_FLEX_US_IMR_TXEMPTY_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IMR_TXEMPTY_Msk instead */
#define FLEXCOM_FLEX_US_IMR_ITER_Pos        10                                             /**< (FLEXCOM_FLEX_US_IMR) Max Number of Repetitions Reached Interrupt Mask Position */
#define FLEXCOM_FLEX_US_IMR_ITER_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_IMR_ITER_Pos)     /**< (FLEXCOM_FLEX_US_IMR) Max Number of Repetitions Reached Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_IMR_ITER            FLEXCOM_FLEX_US_IMR_ITER_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IMR_ITER_Msk instead */
#define FLEXCOM_FLEX_US_IMR_NACK_Pos        13                                             /**< (FLEXCOM_FLEX_US_IMR) Non Acknowledge Interrupt Mask Position */
#define FLEXCOM_FLEX_US_IMR_NACK_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_IMR_NACK_Pos)     /**< (FLEXCOM_FLEX_US_IMR) Non Acknowledge Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_IMR_NACK            FLEXCOM_FLEX_US_IMR_NACK_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IMR_NACK_Msk instead */
#define FLEXCOM_FLEX_US_IMR_CTSIC_Pos       19                                             /**< (FLEXCOM_FLEX_US_IMR) Clear to Send Input Change Interrupt Mask Position */
#define FLEXCOM_FLEX_US_IMR_CTSIC_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_IMR_CTSIC_Pos)    /**< (FLEXCOM_FLEX_US_IMR) Clear to Send Input Change Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_IMR_CTSIC           FLEXCOM_FLEX_US_IMR_CTSIC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IMR_CTSIC_Msk instead */
#define FLEXCOM_FLEX_US_IMR_CMP_Pos         22                                             /**< (FLEXCOM_FLEX_US_IMR) Comparison Interrupt Mask Position */
#define FLEXCOM_FLEX_US_IMR_CMP_Msk         (_U_(0x1) << FLEXCOM_FLEX_US_IMR_CMP_Pos)      /**< (FLEXCOM_FLEX_US_IMR) Comparison Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_IMR_CMP             FLEXCOM_FLEX_US_IMR_CMP_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IMR_CMP_Msk instead */
#define FLEXCOM_FLEX_US_IMR_MANE_Pos        24                                             /**< (FLEXCOM_FLEX_US_IMR) Manchester Error Interrupt Mask Position */
#define FLEXCOM_FLEX_US_IMR_MANE_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_IMR_MANE_Pos)     /**< (FLEXCOM_FLEX_US_IMR) Manchester Error Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_IMR_MANE            FLEXCOM_FLEX_US_IMR_MANE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_IMR_MANE_Msk instead */
#define FLEXCOM_FLEX_US_IMR_MASK            _U_(0x14827E7)                                 /**< \deprecated (FLEXCOM_FLEX_US_IMR) Register MASK  (Use FLEXCOM_FLEX_US_IMR_Msk instead)  */
#define FLEXCOM_FLEX_US_IMR_Msk             _U_(0x14827E7)                                 /**< (FLEXCOM_FLEX_US_IMR) Register Mask  */

/* SPI mode */
#define FLEXCOM_FLEX_US_IMR_SPI_MASK        _U_(0x00)                                      /**< \deprecated (FLEXCOM_FLEX_US_IMR_SPI) Register MASK  (Use FLEXCOM_FLEX_US_IMR_SPI_Msk instead)  */
#define FLEXCOM_FLEX_US_IMR_SPI_Msk         _U_(0x00)                                      /**< (FLEXCOM_FLEX_US_IMR_SPI) Register Mask  */

/* LIN mode */
#define FLEXCOM_FLEX_US_IMR_LIN_MASK        _U_(0x00)                                      /**< \deprecated (FLEXCOM_FLEX_US_IMR_LIN) Register MASK  (Use FLEXCOM_FLEX_US_IMR_LIN_Msk instead)  */
#define FLEXCOM_FLEX_US_IMR_LIN_Msk         _U_(0x00)                                      /**< (FLEXCOM_FLEX_US_IMR_LIN) Register Mask  */


/* -------- FLEXCOM_FLEX_US_CSR : (FLEXCOM Offset: 0x214) (R/ 32) USART Channel Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RXRDY:1;                   /**< bit:      0  Receiver Ready (cleared by reading FLEX_US_RHR) */
    uint32_t TXRDY:1;                   /**< bit:      1  Transmitter Ready (cleared by writing FLEX_US_THR) */
    uint32_t RXBRK:1;                   /**< bit:      2  Break Received/End of Break              */
    uint32_t :2;                        /**< bit:   3..4  Reserved */
    uint32_t OVRE:1;                    /**< bit:      5  Overrun Error                            */
    uint32_t FRAME:1;                   /**< bit:      6  Framing Error                            */
    uint32_t PARE:1;                    /**< bit:      7  Parity Error                             */
    uint32_t TIMEOUT:1;                 /**< bit:      8  Receiver Timeout                         */
    uint32_t TXEMPTY:1;                 /**< bit:      9  Transmitter Empty (cleared by writing FLEX_US_THR) */
    uint32_t ITER:1;                    /**< bit:     10  Max Number of Repetitions Reached        */
    uint32_t :2;                        /**< bit: 11..12  Reserved */
    uint32_t NACK:1;                    /**< bit:     13  Non Acknowledge Interrupt                */
    uint32_t :5;                        /**< bit: 14..18  Reserved */
    uint32_t CTSIC:1;                   /**< bit:     19  Clear to Send Input Change Flag          */
    uint32_t :2;                        /**< bit: 20..21  Reserved */
    uint32_t CMP:1;                     /**< bit:     22  Comparison Status                        */
    uint32_t CTS:1;                     /**< bit:     23  Image of CTS Input                       */
    uint32_t MANE:1;                    /**< bit:     24  Manchester Error                         */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct { // SPI mode
    uint32_t :32;                       /**< bit:  0..31  Reserved */
  } SPI;                                /**< Structure used for SPI mode access */
  struct { // LIN mode
    uint32_t :32;                       /**< bit:  0..31  Reserved */
  } LIN;                                /**< Structure used for LIN mode access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_CSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_CSR_OFFSET          (0x214)                                       /**<  (FLEXCOM_FLEX_US_CSR) USART Channel Status Register  Offset */

#define FLEXCOM_FLEX_US_CSR_RXRDY_Pos       0                                              /**< (FLEXCOM_FLEX_US_CSR) Receiver Ready (cleared by reading FLEX_US_RHR) Position */
#define FLEXCOM_FLEX_US_CSR_RXRDY_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_CSR_RXRDY_Pos)    /**< (FLEXCOM_FLEX_US_CSR) Receiver Ready (cleared by reading FLEX_US_RHR) Mask */
#define FLEXCOM_FLEX_US_CSR_RXRDY           FLEXCOM_FLEX_US_CSR_RXRDY_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CSR_RXRDY_Msk instead */
#define FLEXCOM_FLEX_US_CSR_TXRDY_Pos       1                                              /**< (FLEXCOM_FLEX_US_CSR) Transmitter Ready (cleared by writing FLEX_US_THR) Position */
#define FLEXCOM_FLEX_US_CSR_TXRDY_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_CSR_TXRDY_Pos)    /**< (FLEXCOM_FLEX_US_CSR) Transmitter Ready (cleared by writing FLEX_US_THR) Mask */
#define FLEXCOM_FLEX_US_CSR_TXRDY           FLEXCOM_FLEX_US_CSR_TXRDY_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CSR_TXRDY_Msk instead */
#define FLEXCOM_FLEX_US_CSR_RXBRK_Pos       2                                              /**< (FLEXCOM_FLEX_US_CSR) Break Received/End of Break Position */
#define FLEXCOM_FLEX_US_CSR_RXBRK_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_CSR_RXBRK_Pos)    /**< (FLEXCOM_FLEX_US_CSR) Break Received/End of Break Mask */
#define FLEXCOM_FLEX_US_CSR_RXBRK           FLEXCOM_FLEX_US_CSR_RXBRK_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CSR_RXBRK_Msk instead */
#define FLEXCOM_FLEX_US_CSR_OVRE_Pos        5                                              /**< (FLEXCOM_FLEX_US_CSR) Overrun Error Position */
#define FLEXCOM_FLEX_US_CSR_OVRE_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_CSR_OVRE_Pos)     /**< (FLEXCOM_FLEX_US_CSR) Overrun Error Mask */
#define FLEXCOM_FLEX_US_CSR_OVRE            FLEXCOM_FLEX_US_CSR_OVRE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CSR_OVRE_Msk instead */
#define FLEXCOM_FLEX_US_CSR_FRAME_Pos       6                                              /**< (FLEXCOM_FLEX_US_CSR) Framing Error Position */
#define FLEXCOM_FLEX_US_CSR_FRAME_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_CSR_FRAME_Pos)    /**< (FLEXCOM_FLEX_US_CSR) Framing Error Mask */
#define FLEXCOM_FLEX_US_CSR_FRAME           FLEXCOM_FLEX_US_CSR_FRAME_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CSR_FRAME_Msk instead */
#define FLEXCOM_FLEX_US_CSR_PARE_Pos        7                                              /**< (FLEXCOM_FLEX_US_CSR) Parity Error Position */
#define FLEXCOM_FLEX_US_CSR_PARE_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_CSR_PARE_Pos)     /**< (FLEXCOM_FLEX_US_CSR) Parity Error Mask */
#define FLEXCOM_FLEX_US_CSR_PARE            FLEXCOM_FLEX_US_CSR_PARE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CSR_PARE_Msk instead */
#define FLEXCOM_FLEX_US_CSR_TIMEOUT_Pos     8                                              /**< (FLEXCOM_FLEX_US_CSR) Receiver Timeout Position */
#define FLEXCOM_FLEX_US_CSR_TIMEOUT_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_CSR_TIMEOUT_Pos)  /**< (FLEXCOM_FLEX_US_CSR) Receiver Timeout Mask */
#define FLEXCOM_FLEX_US_CSR_TIMEOUT         FLEXCOM_FLEX_US_CSR_TIMEOUT_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CSR_TIMEOUT_Msk instead */
#define FLEXCOM_FLEX_US_CSR_TXEMPTY_Pos     9                                              /**< (FLEXCOM_FLEX_US_CSR) Transmitter Empty (cleared by writing FLEX_US_THR) Position */
#define FLEXCOM_FLEX_US_CSR_TXEMPTY_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_CSR_TXEMPTY_Pos)  /**< (FLEXCOM_FLEX_US_CSR) Transmitter Empty (cleared by writing FLEX_US_THR) Mask */
#define FLEXCOM_FLEX_US_CSR_TXEMPTY         FLEXCOM_FLEX_US_CSR_TXEMPTY_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CSR_TXEMPTY_Msk instead */
#define FLEXCOM_FLEX_US_CSR_ITER_Pos        10                                             /**< (FLEXCOM_FLEX_US_CSR) Max Number of Repetitions Reached Position */
#define FLEXCOM_FLEX_US_CSR_ITER_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_CSR_ITER_Pos)     /**< (FLEXCOM_FLEX_US_CSR) Max Number of Repetitions Reached Mask */
#define FLEXCOM_FLEX_US_CSR_ITER            FLEXCOM_FLEX_US_CSR_ITER_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CSR_ITER_Msk instead */
#define FLEXCOM_FLEX_US_CSR_NACK_Pos        13                                             /**< (FLEXCOM_FLEX_US_CSR) Non Acknowledge Interrupt Position */
#define FLEXCOM_FLEX_US_CSR_NACK_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_CSR_NACK_Pos)     /**< (FLEXCOM_FLEX_US_CSR) Non Acknowledge Interrupt Mask */
#define FLEXCOM_FLEX_US_CSR_NACK            FLEXCOM_FLEX_US_CSR_NACK_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CSR_NACK_Msk instead */
#define FLEXCOM_FLEX_US_CSR_CTSIC_Pos       19                                             /**< (FLEXCOM_FLEX_US_CSR) Clear to Send Input Change Flag Position */
#define FLEXCOM_FLEX_US_CSR_CTSIC_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_CSR_CTSIC_Pos)    /**< (FLEXCOM_FLEX_US_CSR) Clear to Send Input Change Flag Mask */
#define FLEXCOM_FLEX_US_CSR_CTSIC           FLEXCOM_FLEX_US_CSR_CTSIC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CSR_CTSIC_Msk instead */
#define FLEXCOM_FLEX_US_CSR_CMP_Pos         22                                             /**< (FLEXCOM_FLEX_US_CSR) Comparison Status Position */
#define FLEXCOM_FLEX_US_CSR_CMP_Msk         (_U_(0x1) << FLEXCOM_FLEX_US_CSR_CMP_Pos)      /**< (FLEXCOM_FLEX_US_CSR) Comparison Status Mask */
#define FLEXCOM_FLEX_US_CSR_CMP             FLEXCOM_FLEX_US_CSR_CMP_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CSR_CMP_Msk instead */
#define FLEXCOM_FLEX_US_CSR_CTS_Pos         23                                             /**< (FLEXCOM_FLEX_US_CSR) Image of CTS Input Position */
#define FLEXCOM_FLEX_US_CSR_CTS_Msk         (_U_(0x1) << FLEXCOM_FLEX_US_CSR_CTS_Pos)      /**< (FLEXCOM_FLEX_US_CSR) Image of CTS Input Mask */
#define FLEXCOM_FLEX_US_CSR_CTS             FLEXCOM_FLEX_US_CSR_CTS_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CSR_CTS_Msk instead */
#define FLEXCOM_FLEX_US_CSR_MANE_Pos        24                                             /**< (FLEXCOM_FLEX_US_CSR) Manchester Error Position */
#define FLEXCOM_FLEX_US_CSR_MANE_Msk        (_U_(0x1) << FLEXCOM_FLEX_US_CSR_MANE_Pos)     /**< (FLEXCOM_FLEX_US_CSR) Manchester Error Mask */
#define FLEXCOM_FLEX_US_CSR_MANE            FLEXCOM_FLEX_US_CSR_MANE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CSR_MANE_Msk instead */
#define FLEXCOM_FLEX_US_CSR_MASK            _U_(0x1C827E7)                                 /**< \deprecated (FLEXCOM_FLEX_US_CSR) Register MASK  (Use FLEXCOM_FLEX_US_CSR_Msk instead)  */
#define FLEXCOM_FLEX_US_CSR_Msk             _U_(0x1C827E7)                                 /**< (FLEXCOM_FLEX_US_CSR) Register Mask  */

/* SPI mode */
#define FLEXCOM_FLEX_US_CSR_SPI_MASK        _U_(0x00)                                      /**< \deprecated (FLEXCOM_FLEX_US_CSR_SPI) Register MASK  (Use FLEXCOM_FLEX_US_CSR_SPI_Msk instead)  */
#define FLEXCOM_FLEX_US_CSR_SPI_Msk         _U_(0x00)                                      /**< (FLEXCOM_FLEX_US_CSR_SPI) Register Mask  */

/* LIN mode */
#define FLEXCOM_FLEX_US_CSR_LIN_MASK        _U_(0x00)                                      /**< \deprecated (FLEXCOM_FLEX_US_CSR_LIN) Register MASK  (Use FLEXCOM_FLEX_US_CSR_LIN_Msk instead)  */
#define FLEXCOM_FLEX_US_CSR_LIN_Msk         _U_(0x00)                                      /**< (FLEXCOM_FLEX_US_CSR_LIN) Register Mask  */


/* -------- FLEXCOM_FLEX_US_RHR : (FLEXCOM Offset: 0x218) (R/ 32) USART Receive Holding Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RXCHR:9;                   /**< bit:   0..8  Received Character                       */
    uint32_t :6;                        /**< bit:  9..14  Reserved */
    uint32_t RXSYNH:1;                  /**< bit:     15  Received Sync                            */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct { // FIFO_MULTI_DATA mode
    uint32_t RXCHR0:8;                  /**< bit:   0..7  Received Character                       */
    uint32_t RXCHR1:8;                  /**< bit:  8..15  Received Character                       */
    uint32_t RXCHR2:8;                  /**< bit: 16..23  Received Character                       */
    uint32_t RXCHR3:8;                  /**< bit: 24..31  Received Character                       */
  } FIFO_MULTI_DATA;                                /**< Structure used for FIFO_MULTI_DATA mode access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_RHR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_RHR_OFFSET          (0x218)                                       /**<  (FLEXCOM_FLEX_US_RHR) USART Receive Holding Register  Offset */

#define FLEXCOM_FLEX_US_RHR_RXCHR_Pos       0                                              /**< (FLEXCOM_FLEX_US_RHR) Received Character Position */
#define FLEXCOM_FLEX_US_RHR_RXCHR_Msk       (_U_(0x1FF) << FLEXCOM_FLEX_US_RHR_RXCHR_Pos)  /**< (FLEXCOM_FLEX_US_RHR) Received Character Mask */
#define FLEXCOM_FLEX_US_RHR_RXCHR(value)    (FLEXCOM_FLEX_US_RHR_RXCHR_Msk & ((value) << FLEXCOM_FLEX_US_RHR_RXCHR_Pos))
#define FLEXCOM_FLEX_US_RHR_RXSYNH_Pos      15                                             /**< (FLEXCOM_FLEX_US_RHR) Received Sync Position */
#define FLEXCOM_FLEX_US_RHR_RXSYNH_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_RHR_RXSYNH_Pos)   /**< (FLEXCOM_FLEX_US_RHR) Received Sync Mask */
#define FLEXCOM_FLEX_US_RHR_RXSYNH          FLEXCOM_FLEX_US_RHR_RXSYNH_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_RHR_RXSYNH_Msk instead */
#define FLEXCOM_FLEX_US_RHR_MASK            _U_(0x81FF)                                    /**< \deprecated (FLEXCOM_FLEX_US_RHR) Register MASK  (Use FLEXCOM_FLEX_US_RHR_Msk instead)  */
#define FLEXCOM_FLEX_US_RHR_Msk             _U_(0x81FF)                                    /**< (FLEXCOM_FLEX_US_RHR) Register Mask  */

/* FIFO_MULTI_DATA mode */
#define FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR0_Pos 0                                              /**< (FLEXCOM_FLEX_US_RHR) Received Character Position */
#define FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR0_Msk (_U_(0xFF) << FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR0_Pos)  /**< (FLEXCOM_FLEX_US_RHR) Received Character Mask */
#define FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR0(value) (FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR0_Msk & ((value) << FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR0_Pos))
#define FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR1_Pos 8                                              /**< (FLEXCOM_FLEX_US_RHR) Received Character Position */
#define FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR1_Msk (_U_(0xFF) << FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR1_Pos)  /**< (FLEXCOM_FLEX_US_RHR) Received Character Mask */
#define FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR1(value) (FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR1_Msk & ((value) << FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR1_Pos))
#define FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR2_Pos 16                                             /**< (FLEXCOM_FLEX_US_RHR) Received Character Position */
#define FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR2_Msk (_U_(0xFF) << FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR2_Pos)  /**< (FLEXCOM_FLEX_US_RHR) Received Character Mask */
#define FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR2(value) (FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR2_Msk & ((value) << FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR2_Pos))
#define FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR3_Pos 24                                             /**< (FLEXCOM_FLEX_US_RHR) Received Character Position */
#define FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR3_Msk (_U_(0xFF) << FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR3_Pos)  /**< (FLEXCOM_FLEX_US_RHR) Received Character Mask */
#define FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR3(value) (FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR3_Msk & ((value) << FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR3_Pos))
#define FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_MASK _U_(0xFFFFFFFF)                                /**< \deprecated (FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA) Register MASK  (Use FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_Msk instead)  */
#define FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA_Msk _U_(0xFFFFFFFF)                                /**< (FLEXCOM_FLEX_US_RHR_FIFO_MULTI_DATA) Register Mask  */


/* -------- FLEXCOM_FLEX_US_THR : (FLEXCOM Offset: 0x21c) (/W 32) USART Transmit Holding Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXCHR:9;                   /**< bit:   0..8  Character to be Transmitted              */
    uint32_t :6;                        /**< bit:  9..14  Reserved */
    uint32_t TXSYNH:1;                  /**< bit:     15  Sync Field to be Transmitted             */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct { // FIFO_MULTI_DATA mode
    uint32_t TXCHR0:8;                  /**< bit:   0..7  Character to be Transmitted              */
    uint32_t TXCHR1:8;                  /**< bit:  8..15  Character to be Transmitted              */
    uint32_t TXCHR2:8;                  /**< bit: 16..23  Character to be Transmitted              */
    uint32_t TXCHR3:8;                  /**< bit: 24..31  Character to be Transmitted              */
  } FIFO_MULTI_DATA;                                /**< Structure used for FIFO_MULTI_DATA mode access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_THR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_THR_OFFSET          (0x21C)                                       /**<  (FLEXCOM_FLEX_US_THR) USART Transmit Holding Register  Offset */

#define FLEXCOM_FLEX_US_THR_TXCHR_Pos       0                                              /**< (FLEXCOM_FLEX_US_THR) Character to be Transmitted Position */
#define FLEXCOM_FLEX_US_THR_TXCHR_Msk       (_U_(0x1FF) << FLEXCOM_FLEX_US_THR_TXCHR_Pos)  /**< (FLEXCOM_FLEX_US_THR) Character to be Transmitted Mask */
#define FLEXCOM_FLEX_US_THR_TXCHR(value)    (FLEXCOM_FLEX_US_THR_TXCHR_Msk & ((value) << FLEXCOM_FLEX_US_THR_TXCHR_Pos))
#define FLEXCOM_FLEX_US_THR_TXSYNH_Pos      15                                             /**< (FLEXCOM_FLEX_US_THR) Sync Field to be Transmitted Position */
#define FLEXCOM_FLEX_US_THR_TXSYNH_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_THR_TXSYNH_Pos)   /**< (FLEXCOM_FLEX_US_THR) Sync Field to be Transmitted Mask */
#define FLEXCOM_FLEX_US_THR_TXSYNH          FLEXCOM_FLEX_US_THR_TXSYNH_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_THR_TXSYNH_Msk instead */
#define FLEXCOM_FLEX_US_THR_MASK            _U_(0x81FF)                                    /**< \deprecated (FLEXCOM_FLEX_US_THR) Register MASK  (Use FLEXCOM_FLEX_US_THR_Msk instead)  */
#define FLEXCOM_FLEX_US_THR_Msk             _U_(0x81FF)                                    /**< (FLEXCOM_FLEX_US_THR) Register Mask  */

/* FIFO_MULTI_DATA mode */
#define FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR0_Pos 0                                              /**< (FLEXCOM_FLEX_US_THR) Character to be Transmitted Position */
#define FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR0_Msk (_U_(0xFF) << FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR0_Pos)  /**< (FLEXCOM_FLEX_US_THR) Character to be Transmitted Mask */
#define FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR0(value) (FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR0_Msk & ((value) << FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR0_Pos))
#define FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR1_Pos 8                                              /**< (FLEXCOM_FLEX_US_THR) Character to be Transmitted Position */
#define FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR1_Msk (_U_(0xFF) << FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR1_Pos)  /**< (FLEXCOM_FLEX_US_THR) Character to be Transmitted Mask */
#define FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR1(value) (FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR1_Msk & ((value) << FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR1_Pos))
#define FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR2_Pos 16                                             /**< (FLEXCOM_FLEX_US_THR) Character to be Transmitted Position */
#define FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR2_Msk (_U_(0xFF) << FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR2_Pos)  /**< (FLEXCOM_FLEX_US_THR) Character to be Transmitted Mask */
#define FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR2(value) (FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR2_Msk & ((value) << FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR2_Pos))
#define FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR3_Pos 24                                             /**< (FLEXCOM_FLEX_US_THR) Character to be Transmitted Position */
#define FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR3_Msk (_U_(0xFF) << FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR3_Pos)  /**< (FLEXCOM_FLEX_US_THR) Character to be Transmitted Mask */
#define FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR3(value) (FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR3_Msk & ((value) << FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_TXCHR3_Pos))
#define FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_MASK _U_(0xFFFFFFFF)                                /**< \deprecated (FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA) Register MASK  (Use FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_Msk instead)  */
#define FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA_Msk _U_(0xFFFFFFFF)                                /**< (FLEXCOM_FLEX_US_THR_FIFO_MULTI_DATA) Register Mask  */


/* -------- FLEXCOM_FLEX_US_BRGR : (FLEXCOM Offset: 0x220) (R/W 32) USART Baud Rate Generator Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CD:16;                     /**< bit:  0..15  Clock Divider                            */
    uint32_t FP:3;                      /**< bit: 16..18  Fractional Part                          */
    uint32_t :13;                       /**< bit: 19..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_BRGR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_BRGR_OFFSET         (0x220)                                       /**<  (FLEXCOM_FLEX_US_BRGR) USART Baud Rate Generator Register  Offset */

#define FLEXCOM_FLEX_US_BRGR_CD_Pos         0                                              /**< (FLEXCOM_FLEX_US_BRGR) Clock Divider Position */
#define FLEXCOM_FLEX_US_BRGR_CD_Msk         (_U_(0xFFFF) << FLEXCOM_FLEX_US_BRGR_CD_Pos)   /**< (FLEXCOM_FLEX_US_BRGR) Clock Divider Mask */
#define FLEXCOM_FLEX_US_BRGR_CD(value)      (FLEXCOM_FLEX_US_BRGR_CD_Msk & ((value) << FLEXCOM_FLEX_US_BRGR_CD_Pos))
#define FLEXCOM_FLEX_US_BRGR_FP_Pos         16                                             /**< (FLEXCOM_FLEX_US_BRGR) Fractional Part Position */
#define FLEXCOM_FLEX_US_BRGR_FP_Msk         (_U_(0x7) << FLEXCOM_FLEX_US_BRGR_FP_Pos)      /**< (FLEXCOM_FLEX_US_BRGR) Fractional Part Mask */
#define FLEXCOM_FLEX_US_BRGR_FP(value)      (FLEXCOM_FLEX_US_BRGR_FP_Msk & ((value) << FLEXCOM_FLEX_US_BRGR_FP_Pos))
#define FLEXCOM_FLEX_US_BRGR_MASK           _U_(0x7FFFF)                                   /**< \deprecated (FLEXCOM_FLEX_US_BRGR) Register MASK  (Use FLEXCOM_FLEX_US_BRGR_Msk instead)  */
#define FLEXCOM_FLEX_US_BRGR_Msk            _U_(0x7FFFF)                                   /**< (FLEXCOM_FLEX_US_BRGR) Register Mask  */


/* -------- FLEXCOM_FLEX_US_RTOR : (FLEXCOM Offset: 0x224) (R/W 32) USART Receiver Timeout Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TO:17;                     /**< bit:  0..16  Timeout Value                            */
    uint32_t :15;                       /**< bit: 17..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_RTOR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_RTOR_OFFSET         (0x224)                                       /**<  (FLEXCOM_FLEX_US_RTOR) USART Receiver Timeout Register  Offset */

#define FLEXCOM_FLEX_US_RTOR_TO_Pos         0                                              /**< (FLEXCOM_FLEX_US_RTOR) Timeout Value Position */
#define FLEXCOM_FLEX_US_RTOR_TO_Msk         (_U_(0x1FFFF) << FLEXCOM_FLEX_US_RTOR_TO_Pos)  /**< (FLEXCOM_FLEX_US_RTOR) Timeout Value Mask */
#define FLEXCOM_FLEX_US_RTOR_TO(value)      (FLEXCOM_FLEX_US_RTOR_TO_Msk & ((value) << FLEXCOM_FLEX_US_RTOR_TO_Pos))
#define FLEXCOM_FLEX_US_RTOR_MASK           _U_(0x1FFFF)                                   /**< \deprecated (FLEXCOM_FLEX_US_RTOR) Register MASK  (Use FLEXCOM_FLEX_US_RTOR_Msk instead)  */
#define FLEXCOM_FLEX_US_RTOR_Msk            _U_(0x1FFFF)                                   /**< (FLEXCOM_FLEX_US_RTOR) Register Mask  */


/* -------- FLEXCOM_FLEX_US_TTGR : (FLEXCOM Offset: 0x228) (R/W 32) USART Transmitter Timeguard Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TG:8;                      /**< bit:   0..7  Timeguard Value                          */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_TTGR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_TTGR_OFFSET         (0x228)                                       /**<  (FLEXCOM_FLEX_US_TTGR) USART Transmitter Timeguard Register  Offset */

#define FLEXCOM_FLEX_US_TTGR_TG_Pos         0                                              /**< (FLEXCOM_FLEX_US_TTGR) Timeguard Value Position */
#define FLEXCOM_FLEX_US_TTGR_TG_Msk         (_U_(0xFF) << FLEXCOM_FLEX_US_TTGR_TG_Pos)     /**< (FLEXCOM_FLEX_US_TTGR) Timeguard Value Mask */
#define FLEXCOM_FLEX_US_TTGR_TG(value)      (FLEXCOM_FLEX_US_TTGR_TG_Msk & ((value) << FLEXCOM_FLEX_US_TTGR_TG_Pos))
#define FLEXCOM_FLEX_US_TTGR_MASK           _U_(0xFF)                                      /**< \deprecated (FLEXCOM_FLEX_US_TTGR) Register MASK  (Use FLEXCOM_FLEX_US_TTGR_Msk instead)  */
#define FLEXCOM_FLEX_US_TTGR_Msk            _U_(0xFF)                                      /**< (FLEXCOM_FLEX_US_TTGR) Register Mask  */


/* -------- FLEXCOM_FLEX_US_FIDI : (FLEXCOM Offset: 0x240) (R/W 32) USART FI DI Ratio Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t FI_DI_RATIO:16;            /**< bit:  0..15  FI Over DI Ratio Value                   */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_FIDI_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_FIDI_OFFSET         (0x240)                                       /**<  (FLEXCOM_FLEX_US_FIDI) USART FI DI Ratio Register  Offset */

#define FLEXCOM_FLEX_US_FIDI_FI_DI_RATIO_Pos 0                                              /**< (FLEXCOM_FLEX_US_FIDI) FI Over DI Ratio Value Position */
#define FLEXCOM_FLEX_US_FIDI_FI_DI_RATIO_Msk (_U_(0xFFFF) << FLEXCOM_FLEX_US_FIDI_FI_DI_RATIO_Pos)  /**< (FLEXCOM_FLEX_US_FIDI) FI Over DI Ratio Value Mask */
#define FLEXCOM_FLEX_US_FIDI_FI_DI_RATIO(value) (FLEXCOM_FLEX_US_FIDI_FI_DI_RATIO_Msk & ((value) << FLEXCOM_FLEX_US_FIDI_FI_DI_RATIO_Pos))
#define FLEXCOM_FLEX_US_FIDI_MASK           _U_(0xFFFF)                                    /**< \deprecated (FLEXCOM_FLEX_US_FIDI) Register MASK  (Use FLEXCOM_FLEX_US_FIDI_Msk instead)  */
#define FLEXCOM_FLEX_US_FIDI_Msk            _U_(0xFFFF)                                    /**< (FLEXCOM_FLEX_US_FIDI) Register Mask  */


/* -------- FLEXCOM_FLEX_US_NER : (FLEXCOM Offset: 0x244) (R/ 32) USART Number of Errors Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NB_ERRORS:8;               /**< bit:   0..7  Number of Errors                         */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_NER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_NER_OFFSET          (0x244)                                       /**<  (FLEXCOM_FLEX_US_NER) USART Number of Errors Register  Offset */

#define FLEXCOM_FLEX_US_NER_NB_ERRORS_Pos   0                                              /**< (FLEXCOM_FLEX_US_NER) Number of Errors Position */
#define FLEXCOM_FLEX_US_NER_NB_ERRORS_Msk   (_U_(0xFF) << FLEXCOM_FLEX_US_NER_NB_ERRORS_Pos)  /**< (FLEXCOM_FLEX_US_NER) Number of Errors Mask */
#define FLEXCOM_FLEX_US_NER_NB_ERRORS(value) (FLEXCOM_FLEX_US_NER_NB_ERRORS_Msk & ((value) << FLEXCOM_FLEX_US_NER_NB_ERRORS_Pos))
#define FLEXCOM_FLEX_US_NER_MASK            _U_(0xFF)                                      /**< \deprecated (FLEXCOM_FLEX_US_NER) Register MASK  (Use FLEXCOM_FLEX_US_NER_Msk instead)  */
#define FLEXCOM_FLEX_US_NER_Msk             _U_(0xFF)                                      /**< (FLEXCOM_FLEX_US_NER) Register Mask  */


/* -------- FLEXCOM_FLEX_US_IF : (FLEXCOM Offset: 0x24c) (R/W 32) USART IrDA Filter Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t IRDA_FILTER:8;             /**< bit:   0..7  IrDA Filter                              */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_IF_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_IF_OFFSET           (0x24C)                                       /**<  (FLEXCOM_FLEX_US_IF) USART IrDA Filter Register  Offset */

#define FLEXCOM_FLEX_US_IF_IRDA_FILTER_Pos  0                                              /**< (FLEXCOM_FLEX_US_IF) IrDA Filter Position */
#define FLEXCOM_FLEX_US_IF_IRDA_FILTER_Msk  (_U_(0xFF) << FLEXCOM_FLEX_US_IF_IRDA_FILTER_Pos)  /**< (FLEXCOM_FLEX_US_IF) IrDA Filter Mask */
#define FLEXCOM_FLEX_US_IF_IRDA_FILTER(value) (FLEXCOM_FLEX_US_IF_IRDA_FILTER_Msk & ((value) << FLEXCOM_FLEX_US_IF_IRDA_FILTER_Pos))
#define FLEXCOM_FLEX_US_IF_MASK             _U_(0xFF)                                      /**< \deprecated (FLEXCOM_FLEX_US_IF) Register MASK  (Use FLEXCOM_FLEX_US_IF_Msk instead)  */
#define FLEXCOM_FLEX_US_IF_Msk              _U_(0xFF)                                      /**< (FLEXCOM_FLEX_US_IF) Register Mask  */


/* -------- FLEXCOM_FLEX_US_MAN : (FLEXCOM Offset: 0x250) (R/W 32) USART Manchester Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TX_PL:4;                   /**< bit:   0..3  Transmitter Preamble Length              */
    uint32_t :4;                        /**< bit:   4..7  Reserved */
    uint32_t TX_PP:2;                   /**< bit:   8..9  Transmitter Preamble Pattern             */
    uint32_t :2;                        /**< bit: 10..11  Reserved */
    uint32_t TX_MPOL:1;                 /**< bit:     12  Transmitter Manchester Polarity          */
    uint32_t :3;                        /**< bit: 13..15  Reserved */
    uint32_t RX_PL:4;                   /**< bit: 16..19  Receiver Preamble Length                 */
    uint32_t :4;                        /**< bit: 20..23  Reserved */
    uint32_t RX_PP:2;                   /**< bit: 24..25  Receiver Preamble Pattern detected       */
    uint32_t :2;                        /**< bit: 26..27  Reserved */
    uint32_t RX_MPOL:1;                 /**< bit:     28  Receiver Manchester Polarity             */
    uint32_t ONE:1;                     /**< bit:     29  Must Be Set to 1                         */
    uint32_t DRIFT:1;                   /**< bit:     30  Drift Compensation                       */
    uint32_t RXIDLEV:1;                 /**< bit:     31  Receiver Idle Value                      */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_MAN_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_MAN_OFFSET          (0x250)                                       /**<  (FLEXCOM_FLEX_US_MAN) USART Manchester Configuration Register  Offset */

#define FLEXCOM_FLEX_US_MAN_TX_PL_Pos       0                                              /**< (FLEXCOM_FLEX_US_MAN) Transmitter Preamble Length Position */
#define FLEXCOM_FLEX_US_MAN_TX_PL_Msk       (_U_(0xF) << FLEXCOM_FLEX_US_MAN_TX_PL_Pos)    /**< (FLEXCOM_FLEX_US_MAN) Transmitter Preamble Length Mask */
#define FLEXCOM_FLEX_US_MAN_TX_PL(value)    (FLEXCOM_FLEX_US_MAN_TX_PL_Msk & ((value) << FLEXCOM_FLEX_US_MAN_TX_PL_Pos))
#define FLEXCOM_FLEX_US_MAN_TX_PP_Pos       8                                              /**< (FLEXCOM_FLEX_US_MAN) Transmitter Preamble Pattern Position */
#define FLEXCOM_FLEX_US_MAN_TX_PP_Msk       (_U_(0x3) << FLEXCOM_FLEX_US_MAN_TX_PP_Pos)    /**< (FLEXCOM_FLEX_US_MAN) Transmitter Preamble Pattern Mask */
#define FLEXCOM_FLEX_US_MAN_TX_PP(value)    (FLEXCOM_FLEX_US_MAN_TX_PP_Msk & ((value) << FLEXCOM_FLEX_US_MAN_TX_PP_Pos))
#define   FLEXCOM_FLEX_US_MAN_TX_PP_ALL_ONE_Val _U_(0x0)                                       /**< (FLEXCOM_FLEX_US_MAN) The preamble is composed of '1's  */
#define   FLEXCOM_FLEX_US_MAN_TX_PP_ALL_ZERO_Val _U_(0x1)                                       /**< (FLEXCOM_FLEX_US_MAN) The preamble is composed of '0's  */
#define   FLEXCOM_FLEX_US_MAN_TX_PP_ZERO_ONE_Val _U_(0x2)                                       /**< (FLEXCOM_FLEX_US_MAN) The preamble is composed of '01's  */
#define   FLEXCOM_FLEX_US_MAN_TX_PP_ONE_ZERO_Val _U_(0x3)                                       /**< (FLEXCOM_FLEX_US_MAN) The preamble is composed of '10's  */
#define FLEXCOM_FLEX_US_MAN_TX_PP_ALL_ONE   (FLEXCOM_FLEX_US_MAN_TX_PP_ALL_ONE_Val << FLEXCOM_FLEX_US_MAN_TX_PP_Pos)  /**< (FLEXCOM_FLEX_US_MAN) The preamble is composed of '1's Position  */
#define FLEXCOM_FLEX_US_MAN_TX_PP_ALL_ZERO  (FLEXCOM_FLEX_US_MAN_TX_PP_ALL_ZERO_Val << FLEXCOM_FLEX_US_MAN_TX_PP_Pos)  /**< (FLEXCOM_FLEX_US_MAN) The preamble is composed of '0's Position  */
#define FLEXCOM_FLEX_US_MAN_TX_PP_ZERO_ONE  (FLEXCOM_FLEX_US_MAN_TX_PP_ZERO_ONE_Val << FLEXCOM_FLEX_US_MAN_TX_PP_Pos)  /**< (FLEXCOM_FLEX_US_MAN) The preamble is composed of '01's Position  */
#define FLEXCOM_FLEX_US_MAN_TX_PP_ONE_ZERO  (FLEXCOM_FLEX_US_MAN_TX_PP_ONE_ZERO_Val << FLEXCOM_FLEX_US_MAN_TX_PP_Pos)  /**< (FLEXCOM_FLEX_US_MAN) The preamble is composed of '10's Position  */
#define FLEXCOM_FLEX_US_MAN_TX_MPOL_Pos     12                                             /**< (FLEXCOM_FLEX_US_MAN) Transmitter Manchester Polarity Position */
#define FLEXCOM_FLEX_US_MAN_TX_MPOL_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_MAN_TX_MPOL_Pos)  /**< (FLEXCOM_FLEX_US_MAN) Transmitter Manchester Polarity Mask */
#define FLEXCOM_FLEX_US_MAN_TX_MPOL         FLEXCOM_FLEX_US_MAN_TX_MPOL_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_MAN_TX_MPOL_Msk instead */
#define FLEXCOM_FLEX_US_MAN_RX_PL_Pos       16                                             /**< (FLEXCOM_FLEX_US_MAN) Receiver Preamble Length Position */
#define FLEXCOM_FLEX_US_MAN_RX_PL_Msk       (_U_(0xF) << FLEXCOM_FLEX_US_MAN_RX_PL_Pos)    /**< (FLEXCOM_FLEX_US_MAN) Receiver Preamble Length Mask */
#define FLEXCOM_FLEX_US_MAN_RX_PL(value)    (FLEXCOM_FLEX_US_MAN_RX_PL_Msk & ((value) << FLEXCOM_FLEX_US_MAN_RX_PL_Pos))
#define FLEXCOM_FLEX_US_MAN_RX_PP_Pos       24                                             /**< (FLEXCOM_FLEX_US_MAN) Receiver Preamble Pattern detected Position */
#define FLEXCOM_FLEX_US_MAN_RX_PP_Msk       (_U_(0x3) << FLEXCOM_FLEX_US_MAN_RX_PP_Pos)    /**< (FLEXCOM_FLEX_US_MAN) Receiver Preamble Pattern detected Mask */
#define FLEXCOM_FLEX_US_MAN_RX_PP(value)    (FLEXCOM_FLEX_US_MAN_RX_PP_Msk & ((value) << FLEXCOM_FLEX_US_MAN_RX_PP_Pos))
#define   FLEXCOM_FLEX_US_MAN_RX_PP_ALL_ONE_Val _U_(0x0)                                       /**< (FLEXCOM_FLEX_US_MAN) The preamble is composed of '1's  */
#define   FLEXCOM_FLEX_US_MAN_RX_PP_ALL_ZERO_Val _U_(0x1)                                       /**< (FLEXCOM_FLEX_US_MAN) The preamble is composed of '0's  */
#define   FLEXCOM_FLEX_US_MAN_RX_PP_ZERO_ONE_Val _U_(0x2)                                       /**< (FLEXCOM_FLEX_US_MAN) The preamble is composed of '01's  */
#define   FLEXCOM_FLEX_US_MAN_RX_PP_ONE_ZERO_Val _U_(0x3)                                       /**< (FLEXCOM_FLEX_US_MAN) The preamble is composed of '10's  */
#define FLEXCOM_FLEX_US_MAN_RX_PP_ALL_ONE   (FLEXCOM_FLEX_US_MAN_RX_PP_ALL_ONE_Val << FLEXCOM_FLEX_US_MAN_RX_PP_Pos)  /**< (FLEXCOM_FLEX_US_MAN) The preamble is composed of '1's Position  */
#define FLEXCOM_FLEX_US_MAN_RX_PP_ALL_ZERO  (FLEXCOM_FLEX_US_MAN_RX_PP_ALL_ZERO_Val << FLEXCOM_FLEX_US_MAN_RX_PP_Pos)  /**< (FLEXCOM_FLEX_US_MAN) The preamble is composed of '0's Position  */
#define FLEXCOM_FLEX_US_MAN_RX_PP_ZERO_ONE  (FLEXCOM_FLEX_US_MAN_RX_PP_ZERO_ONE_Val << FLEXCOM_FLEX_US_MAN_RX_PP_Pos)  /**< (FLEXCOM_FLEX_US_MAN) The preamble is composed of '01's Position  */
#define FLEXCOM_FLEX_US_MAN_RX_PP_ONE_ZERO  (FLEXCOM_FLEX_US_MAN_RX_PP_ONE_ZERO_Val << FLEXCOM_FLEX_US_MAN_RX_PP_Pos)  /**< (FLEXCOM_FLEX_US_MAN) The preamble is composed of '10's Position  */
#define FLEXCOM_FLEX_US_MAN_RX_MPOL_Pos     28                                             /**< (FLEXCOM_FLEX_US_MAN) Receiver Manchester Polarity Position */
#define FLEXCOM_FLEX_US_MAN_RX_MPOL_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_MAN_RX_MPOL_Pos)  /**< (FLEXCOM_FLEX_US_MAN) Receiver Manchester Polarity Mask */
#define FLEXCOM_FLEX_US_MAN_RX_MPOL         FLEXCOM_FLEX_US_MAN_RX_MPOL_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_MAN_RX_MPOL_Msk instead */
#define FLEXCOM_FLEX_US_MAN_ONE_Pos         29                                             /**< (FLEXCOM_FLEX_US_MAN) Must Be Set to 1 Position */
#define FLEXCOM_FLEX_US_MAN_ONE_Msk         (_U_(0x1) << FLEXCOM_FLEX_US_MAN_ONE_Pos)      /**< (FLEXCOM_FLEX_US_MAN) Must Be Set to 1 Mask */
#define FLEXCOM_FLEX_US_MAN_ONE             FLEXCOM_FLEX_US_MAN_ONE_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_MAN_ONE_Msk instead */
#define FLEXCOM_FLEX_US_MAN_DRIFT_Pos       30                                             /**< (FLEXCOM_FLEX_US_MAN) Drift Compensation Position */
#define FLEXCOM_FLEX_US_MAN_DRIFT_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_MAN_DRIFT_Pos)    /**< (FLEXCOM_FLEX_US_MAN) Drift Compensation Mask */
#define FLEXCOM_FLEX_US_MAN_DRIFT           FLEXCOM_FLEX_US_MAN_DRIFT_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_MAN_DRIFT_Msk instead */
#define FLEXCOM_FLEX_US_MAN_RXIDLEV_Pos     31                                             /**< (FLEXCOM_FLEX_US_MAN) Receiver Idle Value Position */
#define FLEXCOM_FLEX_US_MAN_RXIDLEV_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_MAN_RXIDLEV_Pos)  /**< (FLEXCOM_FLEX_US_MAN) Receiver Idle Value Mask */
#define FLEXCOM_FLEX_US_MAN_RXIDLEV         FLEXCOM_FLEX_US_MAN_RXIDLEV_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_MAN_RXIDLEV_Msk instead */
#define FLEXCOM_FLEX_US_MAN_MASK            _U_(0xF30F130F)                                /**< \deprecated (FLEXCOM_FLEX_US_MAN) Register MASK  (Use FLEXCOM_FLEX_US_MAN_Msk instead)  */
#define FLEXCOM_FLEX_US_MAN_Msk             _U_(0xF30F130F)                                /**< (FLEXCOM_FLEX_US_MAN) Register Mask  */


/* -------- FLEXCOM_FLEX_US_LINMR : (FLEXCOM Offset: 0x254) (R/W 32) USART LIN Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NACT:2;                    /**< bit:   0..1  LIN Node Action                          */
    uint32_t PARDIS:1;                  /**< bit:      2  Parity Disable                           */
    uint32_t CHKDIS:1;                  /**< bit:      3  Checksum Disable                         */
    uint32_t CHKTYP:1;                  /**< bit:      4  Checksum Type                            */
    uint32_t DLM:1;                     /**< bit:      5  Data Length Mode                         */
    uint32_t FSDIS:1;                   /**< bit:      6  Frame Slot Mode Disable                  */
    uint32_t WKUPTYP:1;                 /**< bit:      7  Wakeup Signal Type                       */
    uint32_t DLC:8;                     /**< bit:  8..15  Data Length Control                      */
    uint32_t PDCM:1;                    /**< bit:     16  DMAC Mode                                */
    uint32_t SYNCDIS:1;                 /**< bit:     17  Synchronization Disable                  */
    uint32_t :14;                       /**< bit: 18..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_LINMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_LINMR_OFFSET        (0x254)                                       /**<  (FLEXCOM_FLEX_US_LINMR) USART LIN Mode Register  Offset */

#define FLEXCOM_FLEX_US_LINMR_NACT_Pos      0                                              /**< (FLEXCOM_FLEX_US_LINMR) LIN Node Action Position */
#define FLEXCOM_FLEX_US_LINMR_NACT_Msk      (_U_(0x3) << FLEXCOM_FLEX_US_LINMR_NACT_Pos)   /**< (FLEXCOM_FLEX_US_LINMR) LIN Node Action Mask */
#define FLEXCOM_FLEX_US_LINMR_NACT(value)   (FLEXCOM_FLEX_US_LINMR_NACT_Msk & ((value) << FLEXCOM_FLEX_US_LINMR_NACT_Pos))
#define   FLEXCOM_FLEX_US_LINMR_NACT_PUBLISH_Val _U_(0x0)                                       /**< (FLEXCOM_FLEX_US_LINMR) The USART transmits the response.  */
#define   FLEXCOM_FLEX_US_LINMR_NACT_SUBSCRIBE_Val _U_(0x1)                                       /**< (FLEXCOM_FLEX_US_LINMR) The USART receives the response.  */
#define   FLEXCOM_FLEX_US_LINMR_NACT_IGNORE_Val _U_(0x2)                                       /**< (FLEXCOM_FLEX_US_LINMR) The USART does not transmit and does not receive the response.  */
#define FLEXCOM_FLEX_US_LINMR_NACT_PUBLISH  (FLEXCOM_FLEX_US_LINMR_NACT_PUBLISH_Val << FLEXCOM_FLEX_US_LINMR_NACT_Pos)  /**< (FLEXCOM_FLEX_US_LINMR) The USART transmits the response. Position  */
#define FLEXCOM_FLEX_US_LINMR_NACT_SUBSCRIBE (FLEXCOM_FLEX_US_LINMR_NACT_SUBSCRIBE_Val << FLEXCOM_FLEX_US_LINMR_NACT_Pos)  /**< (FLEXCOM_FLEX_US_LINMR) The USART receives the response. Position  */
#define FLEXCOM_FLEX_US_LINMR_NACT_IGNORE   (FLEXCOM_FLEX_US_LINMR_NACT_IGNORE_Val << FLEXCOM_FLEX_US_LINMR_NACT_Pos)  /**< (FLEXCOM_FLEX_US_LINMR) The USART does not transmit and does not receive the response. Position  */
#define FLEXCOM_FLEX_US_LINMR_PARDIS_Pos    2                                              /**< (FLEXCOM_FLEX_US_LINMR) Parity Disable Position */
#define FLEXCOM_FLEX_US_LINMR_PARDIS_Msk    (_U_(0x1) << FLEXCOM_FLEX_US_LINMR_PARDIS_Pos)  /**< (FLEXCOM_FLEX_US_LINMR) Parity Disable Mask */
#define FLEXCOM_FLEX_US_LINMR_PARDIS        FLEXCOM_FLEX_US_LINMR_PARDIS_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_LINMR_PARDIS_Msk instead */
#define FLEXCOM_FLEX_US_LINMR_CHKDIS_Pos    3                                              /**< (FLEXCOM_FLEX_US_LINMR) Checksum Disable Position */
#define FLEXCOM_FLEX_US_LINMR_CHKDIS_Msk    (_U_(0x1) << FLEXCOM_FLEX_US_LINMR_CHKDIS_Pos)  /**< (FLEXCOM_FLEX_US_LINMR) Checksum Disable Mask */
#define FLEXCOM_FLEX_US_LINMR_CHKDIS        FLEXCOM_FLEX_US_LINMR_CHKDIS_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_LINMR_CHKDIS_Msk instead */
#define FLEXCOM_FLEX_US_LINMR_CHKTYP_Pos    4                                              /**< (FLEXCOM_FLEX_US_LINMR) Checksum Type Position */
#define FLEXCOM_FLEX_US_LINMR_CHKTYP_Msk    (_U_(0x1) << FLEXCOM_FLEX_US_LINMR_CHKTYP_Pos)  /**< (FLEXCOM_FLEX_US_LINMR) Checksum Type Mask */
#define FLEXCOM_FLEX_US_LINMR_CHKTYP        FLEXCOM_FLEX_US_LINMR_CHKTYP_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_LINMR_CHKTYP_Msk instead */
#define FLEXCOM_FLEX_US_LINMR_DLM_Pos       5                                              /**< (FLEXCOM_FLEX_US_LINMR) Data Length Mode Position */
#define FLEXCOM_FLEX_US_LINMR_DLM_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_LINMR_DLM_Pos)    /**< (FLEXCOM_FLEX_US_LINMR) Data Length Mode Mask */
#define FLEXCOM_FLEX_US_LINMR_DLM           FLEXCOM_FLEX_US_LINMR_DLM_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_LINMR_DLM_Msk instead */
#define FLEXCOM_FLEX_US_LINMR_FSDIS_Pos     6                                              /**< (FLEXCOM_FLEX_US_LINMR) Frame Slot Mode Disable Position */
#define FLEXCOM_FLEX_US_LINMR_FSDIS_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_LINMR_FSDIS_Pos)  /**< (FLEXCOM_FLEX_US_LINMR) Frame Slot Mode Disable Mask */
#define FLEXCOM_FLEX_US_LINMR_FSDIS         FLEXCOM_FLEX_US_LINMR_FSDIS_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_LINMR_FSDIS_Msk instead */
#define FLEXCOM_FLEX_US_LINMR_WKUPTYP_Pos   7                                              /**< (FLEXCOM_FLEX_US_LINMR) Wakeup Signal Type Position */
#define FLEXCOM_FLEX_US_LINMR_WKUPTYP_Msk   (_U_(0x1) << FLEXCOM_FLEX_US_LINMR_WKUPTYP_Pos)  /**< (FLEXCOM_FLEX_US_LINMR) Wakeup Signal Type Mask */
#define FLEXCOM_FLEX_US_LINMR_WKUPTYP       FLEXCOM_FLEX_US_LINMR_WKUPTYP_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_LINMR_WKUPTYP_Msk instead */
#define FLEXCOM_FLEX_US_LINMR_DLC_Pos       8                                              /**< (FLEXCOM_FLEX_US_LINMR) Data Length Control Position */
#define FLEXCOM_FLEX_US_LINMR_DLC_Msk       (_U_(0xFF) << FLEXCOM_FLEX_US_LINMR_DLC_Pos)   /**< (FLEXCOM_FLEX_US_LINMR) Data Length Control Mask */
#define FLEXCOM_FLEX_US_LINMR_DLC(value)    (FLEXCOM_FLEX_US_LINMR_DLC_Msk & ((value) << FLEXCOM_FLEX_US_LINMR_DLC_Pos))
#define FLEXCOM_FLEX_US_LINMR_PDCM_Pos      16                                             /**< (FLEXCOM_FLEX_US_LINMR) DMAC Mode Position */
#define FLEXCOM_FLEX_US_LINMR_PDCM_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_LINMR_PDCM_Pos)   /**< (FLEXCOM_FLEX_US_LINMR) DMAC Mode Mask */
#define FLEXCOM_FLEX_US_LINMR_PDCM          FLEXCOM_FLEX_US_LINMR_PDCM_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_LINMR_PDCM_Msk instead */
#define FLEXCOM_FLEX_US_LINMR_SYNCDIS_Pos   17                                             /**< (FLEXCOM_FLEX_US_LINMR) Synchronization Disable Position */
#define FLEXCOM_FLEX_US_LINMR_SYNCDIS_Msk   (_U_(0x1) << FLEXCOM_FLEX_US_LINMR_SYNCDIS_Pos)  /**< (FLEXCOM_FLEX_US_LINMR) Synchronization Disable Mask */
#define FLEXCOM_FLEX_US_LINMR_SYNCDIS       FLEXCOM_FLEX_US_LINMR_SYNCDIS_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_LINMR_SYNCDIS_Msk instead */
#define FLEXCOM_FLEX_US_LINMR_MASK          _U_(0x3FFFF)                                   /**< \deprecated (FLEXCOM_FLEX_US_LINMR) Register MASK  (Use FLEXCOM_FLEX_US_LINMR_Msk instead)  */
#define FLEXCOM_FLEX_US_LINMR_Msk           _U_(0x3FFFF)                                   /**< (FLEXCOM_FLEX_US_LINMR) Register Mask  */


/* -------- FLEXCOM_FLEX_US_LINIR : (FLEXCOM Offset: 0x258) (R/W 32) USART LIN Identifier Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t IDCHR:8;                   /**< bit:   0..7  Identifier Character                     */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_LINIR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_LINIR_OFFSET        (0x258)                                       /**<  (FLEXCOM_FLEX_US_LINIR) USART LIN Identifier Register  Offset */

#define FLEXCOM_FLEX_US_LINIR_IDCHR_Pos     0                                              /**< (FLEXCOM_FLEX_US_LINIR) Identifier Character Position */
#define FLEXCOM_FLEX_US_LINIR_IDCHR_Msk     (_U_(0xFF) << FLEXCOM_FLEX_US_LINIR_IDCHR_Pos)  /**< (FLEXCOM_FLEX_US_LINIR) Identifier Character Mask */
#define FLEXCOM_FLEX_US_LINIR_IDCHR(value)  (FLEXCOM_FLEX_US_LINIR_IDCHR_Msk & ((value) << FLEXCOM_FLEX_US_LINIR_IDCHR_Pos))
#define FLEXCOM_FLEX_US_LINIR_MASK          _U_(0xFF)                                      /**< \deprecated (FLEXCOM_FLEX_US_LINIR) Register MASK  (Use FLEXCOM_FLEX_US_LINIR_Msk instead)  */
#define FLEXCOM_FLEX_US_LINIR_Msk           _U_(0xFF)                                      /**< (FLEXCOM_FLEX_US_LINIR) Register Mask  */


/* -------- FLEXCOM_FLEX_US_LINBRR : (FLEXCOM Offset: 0x25c) (R/ 32) USART LIN Baud Rate Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t LINCD:16;                  /**< bit:  0..15  Clock Divider after Synchronization      */
    uint32_t LINFP:3;                   /**< bit: 16..18  Fractional Part after Synchronization    */
    uint32_t :13;                       /**< bit: 19..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_LINBRR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_LINBRR_OFFSET       (0x25C)                                       /**<  (FLEXCOM_FLEX_US_LINBRR) USART LIN Baud Rate Register  Offset */

#define FLEXCOM_FLEX_US_LINBRR_LINCD_Pos    0                                              /**< (FLEXCOM_FLEX_US_LINBRR) Clock Divider after Synchronization Position */
#define FLEXCOM_FLEX_US_LINBRR_LINCD_Msk    (_U_(0xFFFF) << FLEXCOM_FLEX_US_LINBRR_LINCD_Pos)  /**< (FLEXCOM_FLEX_US_LINBRR) Clock Divider after Synchronization Mask */
#define FLEXCOM_FLEX_US_LINBRR_LINCD(value) (FLEXCOM_FLEX_US_LINBRR_LINCD_Msk & ((value) << FLEXCOM_FLEX_US_LINBRR_LINCD_Pos))
#define FLEXCOM_FLEX_US_LINBRR_LINFP_Pos    16                                             /**< (FLEXCOM_FLEX_US_LINBRR) Fractional Part after Synchronization Position */
#define FLEXCOM_FLEX_US_LINBRR_LINFP_Msk    (_U_(0x7) << FLEXCOM_FLEX_US_LINBRR_LINFP_Pos)  /**< (FLEXCOM_FLEX_US_LINBRR) Fractional Part after Synchronization Mask */
#define FLEXCOM_FLEX_US_LINBRR_LINFP(value) (FLEXCOM_FLEX_US_LINBRR_LINFP_Msk & ((value) << FLEXCOM_FLEX_US_LINBRR_LINFP_Pos))
#define FLEXCOM_FLEX_US_LINBRR_MASK         _U_(0x7FFFF)                                   /**< \deprecated (FLEXCOM_FLEX_US_LINBRR) Register MASK  (Use FLEXCOM_FLEX_US_LINBRR_Msk instead)  */
#define FLEXCOM_FLEX_US_LINBRR_Msk          _U_(0x7FFFF)                                   /**< (FLEXCOM_FLEX_US_LINBRR) Register Mask  */


/* -------- FLEXCOM_FLEX_US_CMPR : (FLEXCOM Offset: 0x290) (R/W 32) USART Comparison Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t VAL1:9;                    /**< bit:   0..8  First Comparison Value for Received Character */
    uint32_t :3;                        /**< bit:  9..11  Reserved */
    uint32_t CMPMODE:1;                 /**< bit:     12  Comparison Mode                          */
    uint32_t :1;                        /**< bit:     13  Reserved */
    uint32_t CMPPAR:1;                  /**< bit:     14  Compare Parity                           */
    uint32_t :1;                        /**< bit:     15  Reserved */
    uint32_t VAL2:9;                    /**< bit: 16..24  Second Comparison Value for Received Character */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_CMPR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_CMPR_OFFSET         (0x290)                                       /**<  (FLEXCOM_FLEX_US_CMPR) USART Comparison Register  Offset */

#define FLEXCOM_FLEX_US_CMPR_VAL1_Pos       0                                              /**< (FLEXCOM_FLEX_US_CMPR) First Comparison Value for Received Character Position */
#define FLEXCOM_FLEX_US_CMPR_VAL1_Msk       (_U_(0x1FF) << FLEXCOM_FLEX_US_CMPR_VAL1_Pos)  /**< (FLEXCOM_FLEX_US_CMPR) First Comparison Value for Received Character Mask */
#define FLEXCOM_FLEX_US_CMPR_VAL1(value)    (FLEXCOM_FLEX_US_CMPR_VAL1_Msk & ((value) << FLEXCOM_FLEX_US_CMPR_VAL1_Pos))
#define FLEXCOM_FLEX_US_CMPR_CMPMODE_Pos    12                                             /**< (FLEXCOM_FLEX_US_CMPR) Comparison Mode Position */
#define FLEXCOM_FLEX_US_CMPR_CMPMODE_Msk    (_U_(0x1) << FLEXCOM_FLEX_US_CMPR_CMPMODE_Pos)  /**< (FLEXCOM_FLEX_US_CMPR) Comparison Mode Mask */
#define FLEXCOM_FLEX_US_CMPR_CMPMODE        FLEXCOM_FLEX_US_CMPR_CMPMODE_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CMPR_CMPMODE_Msk instead */
#define   FLEXCOM_FLEX_US_CMPR_CMPMODE_FLAG_ONLY_Val _U_(0x0)                                       /**< (FLEXCOM_FLEX_US_CMPR) Any character is received and comparison function drives CMP flag.  */
#define   FLEXCOM_FLEX_US_CMPR_CMPMODE_START_CONDITION_Val _U_(0x1)                                       /**< (FLEXCOM_FLEX_US_CMPR) Comparison condition must be met to start reception.  */
#define FLEXCOM_FLEX_US_CMPR_CMPMODE_FLAG_ONLY (FLEXCOM_FLEX_US_CMPR_CMPMODE_FLAG_ONLY_Val << FLEXCOM_FLEX_US_CMPR_CMPMODE_Pos)  /**< (FLEXCOM_FLEX_US_CMPR) Any character is received and comparison function drives CMP flag. Position  */
#define FLEXCOM_FLEX_US_CMPR_CMPMODE_START_CONDITION (FLEXCOM_FLEX_US_CMPR_CMPMODE_START_CONDITION_Val << FLEXCOM_FLEX_US_CMPR_CMPMODE_Pos)  /**< (FLEXCOM_FLEX_US_CMPR) Comparison condition must be met to start reception. Position  */
#define FLEXCOM_FLEX_US_CMPR_CMPPAR_Pos     14                                             /**< (FLEXCOM_FLEX_US_CMPR) Compare Parity Position */
#define FLEXCOM_FLEX_US_CMPR_CMPPAR_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_CMPR_CMPPAR_Pos)  /**< (FLEXCOM_FLEX_US_CMPR) Compare Parity Mask */
#define FLEXCOM_FLEX_US_CMPR_CMPPAR         FLEXCOM_FLEX_US_CMPR_CMPPAR_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_CMPR_CMPPAR_Msk instead */
#define FLEXCOM_FLEX_US_CMPR_VAL2_Pos       16                                             /**< (FLEXCOM_FLEX_US_CMPR) Second Comparison Value for Received Character Position */
#define FLEXCOM_FLEX_US_CMPR_VAL2_Msk       (_U_(0x1FF) << FLEXCOM_FLEX_US_CMPR_VAL2_Pos)  /**< (FLEXCOM_FLEX_US_CMPR) Second Comparison Value for Received Character Mask */
#define FLEXCOM_FLEX_US_CMPR_VAL2(value)    (FLEXCOM_FLEX_US_CMPR_VAL2_Msk & ((value) << FLEXCOM_FLEX_US_CMPR_VAL2_Pos))
#define FLEXCOM_FLEX_US_CMPR_MASK           _U_(0x1FF51FF)                                 /**< \deprecated (FLEXCOM_FLEX_US_CMPR) Register MASK  (Use FLEXCOM_FLEX_US_CMPR_Msk instead)  */
#define FLEXCOM_FLEX_US_CMPR_Msk            _U_(0x1FF51FF)                                 /**< (FLEXCOM_FLEX_US_CMPR) Register Mask  */


/* -------- FLEXCOM_FLEX_US_FMR : (FLEXCOM Offset: 0x2a0) (R/W 32) USART FIFO Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXRDYM:2;                  /**< bit:   0..1  Transmitter Ready Mode                   */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t RXRDYM:2;                  /**< bit:   4..5  Receiver Ready Mode                      */
    uint32_t :1;                        /**< bit:      6  Reserved */
    uint32_t FRTSC:1;                   /**< bit:      7  FIFO RTS Pin Control enable (Hardware Handshaking mode only) */
    uint32_t TXFTHRES:6;                /**< bit:  8..13  Transmit FIFO Threshold                  */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t RXFTHRES:6;                /**< bit: 16..21  Receive FIFO Threshold                   */
    uint32_t :2;                        /**< bit: 22..23  Reserved */
    uint32_t RXFTHRES2:6;               /**< bit: 24..29  Receive FIFO Threshold 2                 */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_FMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_FMR_OFFSET          (0x2A0)                                       /**<  (FLEXCOM_FLEX_US_FMR) USART FIFO Mode Register  Offset */

#define FLEXCOM_FLEX_US_FMR_TXRDYM_Pos      0                                              /**< (FLEXCOM_FLEX_US_FMR) Transmitter Ready Mode Position */
#define FLEXCOM_FLEX_US_FMR_TXRDYM_Msk      (_U_(0x3) << FLEXCOM_FLEX_US_FMR_TXRDYM_Pos)   /**< (FLEXCOM_FLEX_US_FMR) Transmitter Ready Mode Mask */
#define FLEXCOM_FLEX_US_FMR_TXRDYM(value)   (FLEXCOM_FLEX_US_FMR_TXRDYM_Msk & ((value) << FLEXCOM_FLEX_US_FMR_TXRDYM_Pos))
#define   FLEXCOM_FLEX_US_FMR_TXRDYM_ONE_DATA_Val _U_(0x0)                                       /**< (FLEXCOM_FLEX_US_FMR) TXRDY will be at level '1' when at least one data can be written in the Transmit FIFO  */
#define   FLEXCOM_FLEX_US_FMR_TXRDYM_TWO_DATA_Val _U_(0x1)                                       /**< (FLEXCOM_FLEX_US_FMR) TXRDY will be at level '1' when at least two data can be written in the Transmit FIFO  */
#define   FLEXCOM_FLEX_US_FMR_TXRDYM_FOUR_DATA_Val _U_(0x2)                                       /**< (FLEXCOM_FLEX_US_FMR) TXRDY will be at level '1' when at least four data can be written in the Transmit FIFO  */
#define FLEXCOM_FLEX_US_FMR_TXRDYM_ONE_DATA (FLEXCOM_FLEX_US_FMR_TXRDYM_ONE_DATA_Val << FLEXCOM_FLEX_US_FMR_TXRDYM_Pos)  /**< (FLEXCOM_FLEX_US_FMR) TXRDY will be at level '1' when at least one data can be written in the Transmit FIFO Position  */
#define FLEXCOM_FLEX_US_FMR_TXRDYM_TWO_DATA (FLEXCOM_FLEX_US_FMR_TXRDYM_TWO_DATA_Val << FLEXCOM_FLEX_US_FMR_TXRDYM_Pos)  /**< (FLEXCOM_FLEX_US_FMR) TXRDY will be at level '1' when at least two data can be written in the Transmit FIFO Position  */
#define FLEXCOM_FLEX_US_FMR_TXRDYM_FOUR_DATA (FLEXCOM_FLEX_US_FMR_TXRDYM_FOUR_DATA_Val << FLEXCOM_FLEX_US_FMR_TXRDYM_Pos)  /**< (FLEXCOM_FLEX_US_FMR) TXRDY will be at level '1' when at least four data can be written in the Transmit FIFO Position  */
#define FLEXCOM_FLEX_US_FMR_RXRDYM_Pos      4                                              /**< (FLEXCOM_FLEX_US_FMR) Receiver Ready Mode Position */
#define FLEXCOM_FLEX_US_FMR_RXRDYM_Msk      (_U_(0x3) << FLEXCOM_FLEX_US_FMR_RXRDYM_Pos)   /**< (FLEXCOM_FLEX_US_FMR) Receiver Ready Mode Mask */
#define FLEXCOM_FLEX_US_FMR_RXRDYM(value)   (FLEXCOM_FLEX_US_FMR_RXRDYM_Msk & ((value) << FLEXCOM_FLEX_US_FMR_RXRDYM_Pos))
#define   FLEXCOM_FLEX_US_FMR_RXRDYM_ONE_DATA_Val _U_(0x0)                                       /**< (FLEXCOM_FLEX_US_FMR) RXRDY will be at level '1' when at least one unread data is in the Receive FIFO  */
#define   FLEXCOM_FLEX_US_FMR_RXRDYM_TWO_DATA_Val _U_(0x1)                                       /**< (FLEXCOM_FLEX_US_FMR) RXRDY will be at level '1' when at least two unread data are in the Receive FIFO  */
#define   FLEXCOM_FLEX_US_FMR_RXRDYM_FOUR_DATA_Val _U_(0x2)                                       /**< (FLEXCOM_FLEX_US_FMR) RXRDY will be at level '1' when at least four unread data are in the Receive FIFO  */
#define FLEXCOM_FLEX_US_FMR_RXRDYM_ONE_DATA (FLEXCOM_FLEX_US_FMR_RXRDYM_ONE_DATA_Val << FLEXCOM_FLEX_US_FMR_RXRDYM_Pos)  /**< (FLEXCOM_FLEX_US_FMR) RXRDY will be at level '1' when at least one unread data is in the Receive FIFO Position  */
#define FLEXCOM_FLEX_US_FMR_RXRDYM_TWO_DATA (FLEXCOM_FLEX_US_FMR_RXRDYM_TWO_DATA_Val << FLEXCOM_FLEX_US_FMR_RXRDYM_Pos)  /**< (FLEXCOM_FLEX_US_FMR) RXRDY will be at level '1' when at least two unread data are in the Receive FIFO Position  */
#define FLEXCOM_FLEX_US_FMR_RXRDYM_FOUR_DATA (FLEXCOM_FLEX_US_FMR_RXRDYM_FOUR_DATA_Val << FLEXCOM_FLEX_US_FMR_RXRDYM_Pos)  /**< (FLEXCOM_FLEX_US_FMR) RXRDY will be at level '1' when at least four unread data are in the Receive FIFO Position  */
#define FLEXCOM_FLEX_US_FMR_FRTSC_Pos       7                                              /**< (FLEXCOM_FLEX_US_FMR) FIFO RTS Pin Control enable (Hardware Handshaking mode only) Position */
#define FLEXCOM_FLEX_US_FMR_FRTSC_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_FMR_FRTSC_Pos)    /**< (FLEXCOM_FLEX_US_FMR) FIFO RTS Pin Control enable (Hardware Handshaking mode only) Mask */
#define FLEXCOM_FLEX_US_FMR_FRTSC           FLEXCOM_FLEX_US_FMR_FRTSC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FMR_FRTSC_Msk instead */
#define FLEXCOM_FLEX_US_FMR_TXFTHRES_Pos    8                                              /**< (FLEXCOM_FLEX_US_FMR) Transmit FIFO Threshold Position */
#define FLEXCOM_FLEX_US_FMR_TXFTHRES_Msk    (_U_(0x3F) << FLEXCOM_FLEX_US_FMR_TXFTHRES_Pos)  /**< (FLEXCOM_FLEX_US_FMR) Transmit FIFO Threshold Mask */
#define FLEXCOM_FLEX_US_FMR_TXFTHRES(value) (FLEXCOM_FLEX_US_FMR_TXFTHRES_Msk & ((value) << FLEXCOM_FLEX_US_FMR_TXFTHRES_Pos))
#define FLEXCOM_FLEX_US_FMR_RXFTHRES_Pos    16                                             /**< (FLEXCOM_FLEX_US_FMR) Receive FIFO Threshold Position */
#define FLEXCOM_FLEX_US_FMR_RXFTHRES_Msk    (_U_(0x3F) << FLEXCOM_FLEX_US_FMR_RXFTHRES_Pos)  /**< (FLEXCOM_FLEX_US_FMR) Receive FIFO Threshold Mask */
#define FLEXCOM_FLEX_US_FMR_RXFTHRES(value) (FLEXCOM_FLEX_US_FMR_RXFTHRES_Msk & ((value) << FLEXCOM_FLEX_US_FMR_RXFTHRES_Pos))
#define FLEXCOM_FLEX_US_FMR_RXFTHRES2_Pos   24                                             /**< (FLEXCOM_FLEX_US_FMR) Receive FIFO Threshold 2 Position */
#define FLEXCOM_FLEX_US_FMR_RXFTHRES2_Msk   (_U_(0x3F) << FLEXCOM_FLEX_US_FMR_RXFTHRES2_Pos)  /**< (FLEXCOM_FLEX_US_FMR) Receive FIFO Threshold 2 Mask */
#define FLEXCOM_FLEX_US_FMR_RXFTHRES2(value) (FLEXCOM_FLEX_US_FMR_RXFTHRES2_Msk & ((value) << FLEXCOM_FLEX_US_FMR_RXFTHRES2_Pos))
#define FLEXCOM_FLEX_US_FMR_MASK            _U_(0x3F3F3FB3)                                /**< \deprecated (FLEXCOM_FLEX_US_FMR) Register MASK  (Use FLEXCOM_FLEX_US_FMR_Msk instead)  */
#define FLEXCOM_FLEX_US_FMR_Msk             _U_(0x3F3F3FB3)                                /**< (FLEXCOM_FLEX_US_FMR) Register Mask  */


/* -------- FLEXCOM_FLEX_US_FLR : (FLEXCOM Offset: 0x2a4) (R/ 32) USART FIFO Level Register -------- */
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
} FLEXCOM_FLEX_US_FLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_FLR_OFFSET          (0x2A4)                                       /**<  (FLEXCOM_FLEX_US_FLR) USART FIFO Level Register  Offset */

#define FLEXCOM_FLEX_US_FLR_TXFL_Pos        0                                              /**< (FLEXCOM_FLEX_US_FLR) Transmit FIFO Level Position */
#define FLEXCOM_FLEX_US_FLR_TXFL_Msk        (_U_(0x3F) << FLEXCOM_FLEX_US_FLR_TXFL_Pos)    /**< (FLEXCOM_FLEX_US_FLR) Transmit FIFO Level Mask */
#define FLEXCOM_FLEX_US_FLR_TXFL(value)     (FLEXCOM_FLEX_US_FLR_TXFL_Msk & ((value) << FLEXCOM_FLEX_US_FLR_TXFL_Pos))
#define FLEXCOM_FLEX_US_FLR_RXFL_Pos        16                                             /**< (FLEXCOM_FLEX_US_FLR) Receive FIFO Level Position */
#define FLEXCOM_FLEX_US_FLR_RXFL_Msk        (_U_(0x3F) << FLEXCOM_FLEX_US_FLR_RXFL_Pos)    /**< (FLEXCOM_FLEX_US_FLR) Receive FIFO Level Mask */
#define FLEXCOM_FLEX_US_FLR_RXFL(value)     (FLEXCOM_FLEX_US_FLR_RXFL_Msk & ((value) << FLEXCOM_FLEX_US_FLR_RXFL_Pos))
#define FLEXCOM_FLEX_US_FLR_MASK            _U_(0x3F003F)                                  /**< \deprecated (FLEXCOM_FLEX_US_FLR) Register MASK  (Use FLEXCOM_FLEX_US_FLR_Msk instead)  */
#define FLEXCOM_FLEX_US_FLR_Msk             _U_(0x3F003F)                                  /**< (FLEXCOM_FLEX_US_FLR) Register Mask  */


/* -------- FLEXCOM_FLEX_US_FIER : (FLEXCOM Offset: 0x2a8) (/W 32) USART FIFO Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXFEF:1;                   /**< bit:      0  TXFEF Interrupt Enable                   */
    uint32_t TXFFF:1;                   /**< bit:      1  TXFFF Interrupt Enable                   */
    uint32_t TXFTHF:1;                  /**< bit:      2  TXFTHF Interrupt Enable                  */
    uint32_t RXFEF:1;                   /**< bit:      3  RXFEF Interrupt Enable                   */
    uint32_t RXFFF:1;                   /**< bit:      4  RXFFF Interrupt Enable                   */
    uint32_t RXFTHF:1;                  /**< bit:      5  RXFTHF Interrupt Enable                  */
    uint32_t TXFPTEF:1;                 /**< bit:      6  TXFPTEF Interrupt Enable                 */
    uint32_t RXFPTEF:1;                 /**< bit:      7  RXFPTEF Interrupt Enable                 */
    uint32_t :1;                        /**< bit:      8  Reserved */
    uint32_t RXFTHF2:1;                 /**< bit:      9  RXFTHF2 Interrupt Enable                 */
    uint32_t :22;                       /**< bit: 10..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :9;                        /**< bit:   0..8  Reserved */
    uint32_t RXFTHF:1;                  /**< bit:      9  RXFTHF2 Interrupt Enable                 */
    uint32_t :22;                       /**< bit: 10..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_FIER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_FIER_OFFSET         (0x2A8)                                       /**<  (FLEXCOM_FLEX_US_FIER) USART FIFO Interrupt Enable Register  Offset */

#define FLEXCOM_FLEX_US_FIER_TXFEF_Pos      0                                              /**< (FLEXCOM_FLEX_US_FIER) TXFEF Interrupt Enable Position */
#define FLEXCOM_FLEX_US_FIER_TXFEF_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_FIER_TXFEF_Pos)   /**< (FLEXCOM_FLEX_US_FIER) TXFEF Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_FIER_TXFEF          FLEXCOM_FLEX_US_FIER_TXFEF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIER_TXFEF_Msk instead */
#define FLEXCOM_FLEX_US_FIER_TXFFF_Pos      1                                              /**< (FLEXCOM_FLEX_US_FIER) TXFFF Interrupt Enable Position */
#define FLEXCOM_FLEX_US_FIER_TXFFF_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_FIER_TXFFF_Pos)   /**< (FLEXCOM_FLEX_US_FIER) TXFFF Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_FIER_TXFFF          FLEXCOM_FLEX_US_FIER_TXFFF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIER_TXFFF_Msk instead */
#define FLEXCOM_FLEX_US_FIER_TXFTHF_Pos     2                                              /**< (FLEXCOM_FLEX_US_FIER) TXFTHF Interrupt Enable Position */
#define FLEXCOM_FLEX_US_FIER_TXFTHF_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_FIER_TXFTHF_Pos)  /**< (FLEXCOM_FLEX_US_FIER) TXFTHF Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_FIER_TXFTHF         FLEXCOM_FLEX_US_FIER_TXFTHF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIER_TXFTHF_Msk instead */
#define FLEXCOM_FLEX_US_FIER_RXFEF_Pos      3                                              /**< (FLEXCOM_FLEX_US_FIER) RXFEF Interrupt Enable Position */
#define FLEXCOM_FLEX_US_FIER_RXFEF_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_FIER_RXFEF_Pos)   /**< (FLEXCOM_FLEX_US_FIER) RXFEF Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_FIER_RXFEF          FLEXCOM_FLEX_US_FIER_RXFEF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIER_RXFEF_Msk instead */
#define FLEXCOM_FLEX_US_FIER_RXFFF_Pos      4                                              /**< (FLEXCOM_FLEX_US_FIER) RXFFF Interrupt Enable Position */
#define FLEXCOM_FLEX_US_FIER_RXFFF_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_FIER_RXFFF_Pos)   /**< (FLEXCOM_FLEX_US_FIER) RXFFF Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_FIER_RXFFF          FLEXCOM_FLEX_US_FIER_RXFFF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIER_RXFFF_Msk instead */
#define FLEXCOM_FLEX_US_FIER_RXFTHF_Pos     5                                              /**< (FLEXCOM_FLEX_US_FIER) RXFTHF Interrupt Enable Position */
#define FLEXCOM_FLEX_US_FIER_RXFTHF_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_FIER_RXFTHF_Pos)  /**< (FLEXCOM_FLEX_US_FIER) RXFTHF Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_FIER_RXFTHF         FLEXCOM_FLEX_US_FIER_RXFTHF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIER_RXFTHF_Msk instead */
#define FLEXCOM_FLEX_US_FIER_TXFPTEF_Pos    6                                              /**< (FLEXCOM_FLEX_US_FIER) TXFPTEF Interrupt Enable Position */
#define FLEXCOM_FLEX_US_FIER_TXFPTEF_Msk    (_U_(0x1) << FLEXCOM_FLEX_US_FIER_TXFPTEF_Pos)  /**< (FLEXCOM_FLEX_US_FIER) TXFPTEF Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_FIER_TXFPTEF        FLEXCOM_FLEX_US_FIER_TXFPTEF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIER_TXFPTEF_Msk instead */
#define FLEXCOM_FLEX_US_FIER_RXFPTEF_Pos    7                                              /**< (FLEXCOM_FLEX_US_FIER) RXFPTEF Interrupt Enable Position */
#define FLEXCOM_FLEX_US_FIER_RXFPTEF_Msk    (_U_(0x1) << FLEXCOM_FLEX_US_FIER_RXFPTEF_Pos)  /**< (FLEXCOM_FLEX_US_FIER) RXFPTEF Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_FIER_RXFPTEF        FLEXCOM_FLEX_US_FIER_RXFPTEF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIER_RXFPTEF_Msk instead */
#define FLEXCOM_FLEX_US_FIER_RXFTHF2_Pos    9                                              /**< (FLEXCOM_FLEX_US_FIER) RXFTHF2 Interrupt Enable Position */
#define FLEXCOM_FLEX_US_FIER_RXFTHF2_Msk    (_U_(0x1) << FLEXCOM_FLEX_US_FIER_RXFTHF2_Pos)  /**< (FLEXCOM_FLEX_US_FIER) RXFTHF2 Interrupt Enable Mask */
#define FLEXCOM_FLEX_US_FIER_RXFTHF2        FLEXCOM_FLEX_US_FIER_RXFTHF2_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIER_RXFTHF2_Msk instead */
#define FLEXCOM_FLEX_US_FIER_MASK           _U_(0x2FF)                                     /**< \deprecated (FLEXCOM_FLEX_US_FIER) Register MASK  (Use FLEXCOM_FLEX_US_FIER_Msk instead)  */
#define FLEXCOM_FLEX_US_FIER_Msk            _U_(0x2FF)                                     /**< (FLEXCOM_FLEX_US_FIER) Register Mask  */

#define FLEXCOM_FLEX_US_FIER_RXFTHF_Pos     9                                              /**< (FLEXCOM_FLEX_US_FIER Position) RXFTHF2 Interrupt Enable */
#define FLEXCOM_FLEX_US_FIER_RXFTHF_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_FIER_RXFTHF_Pos)  /**< (FLEXCOM_FLEX_US_FIER Mask) RXFTHF */
#define FLEXCOM_FLEX_US_FIER_RXFTHF(value)  (FLEXCOM_FLEX_US_FIER_RXFTHF_Msk & ((value) << FLEXCOM_FLEX_US_FIER_RXFTHF_Pos))  

/* -------- FLEXCOM_FLEX_US_FIDR : (FLEXCOM Offset: 0x2ac) (/W 32) USART FIFO Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXFEF:1;                   /**< bit:      0  TXFEF Interrupt Disable                  */
    uint32_t TXFFF:1;                   /**< bit:      1  TXFFF Interrupt Disable                  */
    uint32_t TXFTHF:1;                  /**< bit:      2  TXFTHF Interrupt Disable                 */
    uint32_t RXFEF:1;                   /**< bit:      3  RXFEF Interrupt Disable                  */
    uint32_t RXFFF:1;                   /**< bit:      4  RXFFF Interrupt Disable                  */
    uint32_t RXFTHF:1;                  /**< bit:      5  RXFTHF Interrupt Disable                 */
    uint32_t TXFPTEF:1;                 /**< bit:      6  TXFPTEF Interrupt Disable                */
    uint32_t RXFPTEF:1;                 /**< bit:      7  RXFPTEF Interrupt Disable                */
    uint32_t :1;                        /**< bit:      8  Reserved */
    uint32_t RXFTHF2:1;                 /**< bit:      9  RXFTHF2 Interrupt Disable                */
    uint32_t :22;                       /**< bit: 10..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :9;                        /**< bit:   0..8  Reserved */
    uint32_t RXFTHF:1;                  /**< bit:      9  RXFTHF2 Interrupt Disable                */
    uint32_t :22;                       /**< bit: 10..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_FIDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_FIDR_OFFSET         (0x2AC)                                       /**<  (FLEXCOM_FLEX_US_FIDR) USART FIFO Interrupt Disable Register  Offset */

#define FLEXCOM_FLEX_US_FIDR_TXFEF_Pos      0                                              /**< (FLEXCOM_FLEX_US_FIDR) TXFEF Interrupt Disable Position */
#define FLEXCOM_FLEX_US_FIDR_TXFEF_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_FIDR_TXFEF_Pos)   /**< (FLEXCOM_FLEX_US_FIDR) TXFEF Interrupt Disable Mask */
#define FLEXCOM_FLEX_US_FIDR_TXFEF          FLEXCOM_FLEX_US_FIDR_TXFEF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIDR_TXFEF_Msk instead */
#define FLEXCOM_FLEX_US_FIDR_TXFFF_Pos      1                                              /**< (FLEXCOM_FLEX_US_FIDR) TXFFF Interrupt Disable Position */
#define FLEXCOM_FLEX_US_FIDR_TXFFF_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_FIDR_TXFFF_Pos)   /**< (FLEXCOM_FLEX_US_FIDR) TXFFF Interrupt Disable Mask */
#define FLEXCOM_FLEX_US_FIDR_TXFFF          FLEXCOM_FLEX_US_FIDR_TXFFF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIDR_TXFFF_Msk instead */
#define FLEXCOM_FLEX_US_FIDR_TXFTHF_Pos     2                                              /**< (FLEXCOM_FLEX_US_FIDR) TXFTHF Interrupt Disable Position */
#define FLEXCOM_FLEX_US_FIDR_TXFTHF_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_FIDR_TXFTHF_Pos)  /**< (FLEXCOM_FLEX_US_FIDR) TXFTHF Interrupt Disable Mask */
#define FLEXCOM_FLEX_US_FIDR_TXFTHF         FLEXCOM_FLEX_US_FIDR_TXFTHF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIDR_TXFTHF_Msk instead */
#define FLEXCOM_FLEX_US_FIDR_RXFEF_Pos      3                                              /**< (FLEXCOM_FLEX_US_FIDR) RXFEF Interrupt Disable Position */
#define FLEXCOM_FLEX_US_FIDR_RXFEF_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_FIDR_RXFEF_Pos)   /**< (FLEXCOM_FLEX_US_FIDR) RXFEF Interrupt Disable Mask */
#define FLEXCOM_FLEX_US_FIDR_RXFEF          FLEXCOM_FLEX_US_FIDR_RXFEF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIDR_RXFEF_Msk instead */
#define FLEXCOM_FLEX_US_FIDR_RXFFF_Pos      4                                              /**< (FLEXCOM_FLEX_US_FIDR) RXFFF Interrupt Disable Position */
#define FLEXCOM_FLEX_US_FIDR_RXFFF_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_FIDR_RXFFF_Pos)   /**< (FLEXCOM_FLEX_US_FIDR) RXFFF Interrupt Disable Mask */
#define FLEXCOM_FLEX_US_FIDR_RXFFF          FLEXCOM_FLEX_US_FIDR_RXFFF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIDR_RXFFF_Msk instead */
#define FLEXCOM_FLEX_US_FIDR_RXFTHF_Pos     5                                              /**< (FLEXCOM_FLEX_US_FIDR) RXFTHF Interrupt Disable Position */
#define FLEXCOM_FLEX_US_FIDR_RXFTHF_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_FIDR_RXFTHF_Pos)  /**< (FLEXCOM_FLEX_US_FIDR) RXFTHF Interrupt Disable Mask */
#define FLEXCOM_FLEX_US_FIDR_RXFTHF         FLEXCOM_FLEX_US_FIDR_RXFTHF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIDR_RXFTHF_Msk instead */
#define FLEXCOM_FLEX_US_FIDR_TXFPTEF_Pos    6                                              /**< (FLEXCOM_FLEX_US_FIDR) TXFPTEF Interrupt Disable Position */
#define FLEXCOM_FLEX_US_FIDR_TXFPTEF_Msk    (_U_(0x1) << FLEXCOM_FLEX_US_FIDR_TXFPTEF_Pos)  /**< (FLEXCOM_FLEX_US_FIDR) TXFPTEF Interrupt Disable Mask */
#define FLEXCOM_FLEX_US_FIDR_TXFPTEF        FLEXCOM_FLEX_US_FIDR_TXFPTEF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIDR_TXFPTEF_Msk instead */
#define FLEXCOM_FLEX_US_FIDR_RXFPTEF_Pos    7                                              /**< (FLEXCOM_FLEX_US_FIDR) RXFPTEF Interrupt Disable Position */
#define FLEXCOM_FLEX_US_FIDR_RXFPTEF_Msk    (_U_(0x1) << FLEXCOM_FLEX_US_FIDR_RXFPTEF_Pos)  /**< (FLEXCOM_FLEX_US_FIDR) RXFPTEF Interrupt Disable Mask */
#define FLEXCOM_FLEX_US_FIDR_RXFPTEF        FLEXCOM_FLEX_US_FIDR_RXFPTEF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIDR_RXFPTEF_Msk instead */
#define FLEXCOM_FLEX_US_FIDR_RXFTHF2_Pos    9                                              /**< (FLEXCOM_FLEX_US_FIDR) RXFTHF2 Interrupt Disable Position */
#define FLEXCOM_FLEX_US_FIDR_RXFTHF2_Msk    (_U_(0x1) << FLEXCOM_FLEX_US_FIDR_RXFTHF2_Pos)  /**< (FLEXCOM_FLEX_US_FIDR) RXFTHF2 Interrupt Disable Mask */
#define FLEXCOM_FLEX_US_FIDR_RXFTHF2        FLEXCOM_FLEX_US_FIDR_RXFTHF2_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIDR_RXFTHF2_Msk instead */
#define FLEXCOM_FLEX_US_FIDR_MASK           _U_(0x2FF)                                     /**< \deprecated (FLEXCOM_FLEX_US_FIDR) Register MASK  (Use FLEXCOM_FLEX_US_FIDR_Msk instead)  */
#define FLEXCOM_FLEX_US_FIDR_Msk            _U_(0x2FF)                                     /**< (FLEXCOM_FLEX_US_FIDR) Register Mask  */

#define FLEXCOM_FLEX_US_FIDR_RXFTHF_Pos     9                                              /**< (FLEXCOM_FLEX_US_FIDR Position) RXFTHF2 Interrupt Disable */
#define FLEXCOM_FLEX_US_FIDR_RXFTHF_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_FIDR_RXFTHF_Pos)  /**< (FLEXCOM_FLEX_US_FIDR Mask) RXFTHF */
#define FLEXCOM_FLEX_US_FIDR_RXFTHF(value)  (FLEXCOM_FLEX_US_FIDR_RXFTHF_Msk & ((value) << FLEXCOM_FLEX_US_FIDR_RXFTHF_Pos))  

/* -------- FLEXCOM_FLEX_US_FIMR : (FLEXCOM Offset: 0x2b0) (R/ 32) USART FIFO Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXFEF:1;                   /**< bit:      0  TXFEF Interrupt Mask                     */
    uint32_t TXFFF:1;                   /**< bit:      1  TXFFF Interrupt Mask                     */
    uint32_t TXFTHF:1;                  /**< bit:      2  TXFTHF Interrupt Mask                    */
    uint32_t RXFEF:1;                   /**< bit:      3  RXFEF Interrupt Mask                     */
    uint32_t RXFFF:1;                   /**< bit:      4  RXFFF Interrupt Mask                     */
    uint32_t RXFTHF:1;                  /**< bit:      5  RXFTHF Interrupt Mask                    */
    uint32_t TXFPTEF:1;                 /**< bit:      6  TXFPTEF Interrupt Mask                   */
    uint32_t RXFPTEF:1;                 /**< bit:      7  RXFPTEF Interrupt Mask                   */
    uint32_t :1;                        /**< bit:      8  Reserved */
    uint32_t RXFTHF2:1;                 /**< bit:      9  RXFTHF2 Interrupt Mask                   */
    uint32_t :22;                       /**< bit: 10..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :9;                        /**< bit:   0..8  Reserved */
    uint32_t RXFTHF:1;                  /**< bit:      9  RXFTHF2 Interrupt Mask                   */
    uint32_t :22;                       /**< bit: 10..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_FIMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_FIMR_OFFSET         (0x2B0)                                       /**<  (FLEXCOM_FLEX_US_FIMR) USART FIFO Interrupt Mask Register  Offset */

#define FLEXCOM_FLEX_US_FIMR_TXFEF_Pos      0                                              /**< (FLEXCOM_FLEX_US_FIMR) TXFEF Interrupt Mask Position */
#define FLEXCOM_FLEX_US_FIMR_TXFEF_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_FIMR_TXFEF_Pos)   /**< (FLEXCOM_FLEX_US_FIMR) TXFEF Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_FIMR_TXFEF          FLEXCOM_FLEX_US_FIMR_TXFEF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIMR_TXFEF_Msk instead */
#define FLEXCOM_FLEX_US_FIMR_TXFFF_Pos      1                                              /**< (FLEXCOM_FLEX_US_FIMR) TXFFF Interrupt Mask Position */
#define FLEXCOM_FLEX_US_FIMR_TXFFF_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_FIMR_TXFFF_Pos)   /**< (FLEXCOM_FLEX_US_FIMR) TXFFF Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_FIMR_TXFFF          FLEXCOM_FLEX_US_FIMR_TXFFF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIMR_TXFFF_Msk instead */
#define FLEXCOM_FLEX_US_FIMR_TXFTHF_Pos     2                                              /**< (FLEXCOM_FLEX_US_FIMR) TXFTHF Interrupt Mask Position */
#define FLEXCOM_FLEX_US_FIMR_TXFTHF_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_FIMR_TXFTHF_Pos)  /**< (FLEXCOM_FLEX_US_FIMR) TXFTHF Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_FIMR_TXFTHF         FLEXCOM_FLEX_US_FIMR_TXFTHF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIMR_TXFTHF_Msk instead */
#define FLEXCOM_FLEX_US_FIMR_RXFEF_Pos      3                                              /**< (FLEXCOM_FLEX_US_FIMR) RXFEF Interrupt Mask Position */
#define FLEXCOM_FLEX_US_FIMR_RXFEF_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_FIMR_RXFEF_Pos)   /**< (FLEXCOM_FLEX_US_FIMR) RXFEF Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_FIMR_RXFEF          FLEXCOM_FLEX_US_FIMR_RXFEF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIMR_RXFEF_Msk instead */
#define FLEXCOM_FLEX_US_FIMR_RXFFF_Pos      4                                              /**< (FLEXCOM_FLEX_US_FIMR) RXFFF Interrupt Mask Position */
#define FLEXCOM_FLEX_US_FIMR_RXFFF_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_FIMR_RXFFF_Pos)   /**< (FLEXCOM_FLEX_US_FIMR) RXFFF Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_FIMR_RXFFF          FLEXCOM_FLEX_US_FIMR_RXFFF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIMR_RXFFF_Msk instead */
#define FLEXCOM_FLEX_US_FIMR_RXFTHF_Pos     5                                              /**< (FLEXCOM_FLEX_US_FIMR) RXFTHF Interrupt Mask Position */
#define FLEXCOM_FLEX_US_FIMR_RXFTHF_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_FIMR_RXFTHF_Pos)  /**< (FLEXCOM_FLEX_US_FIMR) RXFTHF Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_FIMR_RXFTHF         FLEXCOM_FLEX_US_FIMR_RXFTHF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIMR_RXFTHF_Msk instead */
#define FLEXCOM_FLEX_US_FIMR_TXFPTEF_Pos    6                                              /**< (FLEXCOM_FLEX_US_FIMR) TXFPTEF Interrupt Mask Position */
#define FLEXCOM_FLEX_US_FIMR_TXFPTEF_Msk    (_U_(0x1) << FLEXCOM_FLEX_US_FIMR_TXFPTEF_Pos)  /**< (FLEXCOM_FLEX_US_FIMR) TXFPTEF Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_FIMR_TXFPTEF        FLEXCOM_FLEX_US_FIMR_TXFPTEF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIMR_TXFPTEF_Msk instead */
#define FLEXCOM_FLEX_US_FIMR_RXFPTEF_Pos    7                                              /**< (FLEXCOM_FLEX_US_FIMR) RXFPTEF Interrupt Mask Position */
#define FLEXCOM_FLEX_US_FIMR_RXFPTEF_Msk    (_U_(0x1) << FLEXCOM_FLEX_US_FIMR_RXFPTEF_Pos)  /**< (FLEXCOM_FLEX_US_FIMR) RXFPTEF Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_FIMR_RXFPTEF        FLEXCOM_FLEX_US_FIMR_RXFPTEF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIMR_RXFPTEF_Msk instead */
#define FLEXCOM_FLEX_US_FIMR_RXFTHF2_Pos    9                                              /**< (FLEXCOM_FLEX_US_FIMR) RXFTHF2 Interrupt Mask Position */
#define FLEXCOM_FLEX_US_FIMR_RXFTHF2_Msk    (_U_(0x1) << FLEXCOM_FLEX_US_FIMR_RXFTHF2_Pos)  /**< (FLEXCOM_FLEX_US_FIMR) RXFTHF2 Interrupt Mask Mask */
#define FLEXCOM_FLEX_US_FIMR_RXFTHF2        FLEXCOM_FLEX_US_FIMR_RXFTHF2_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FIMR_RXFTHF2_Msk instead */
#define FLEXCOM_FLEX_US_FIMR_MASK           _U_(0x2FF)                                     /**< \deprecated (FLEXCOM_FLEX_US_FIMR) Register MASK  (Use FLEXCOM_FLEX_US_FIMR_Msk instead)  */
#define FLEXCOM_FLEX_US_FIMR_Msk            _U_(0x2FF)                                     /**< (FLEXCOM_FLEX_US_FIMR) Register Mask  */

#define FLEXCOM_FLEX_US_FIMR_RXFTHF_Pos     9                                              /**< (FLEXCOM_FLEX_US_FIMR Position) RXFTHF2 Interrupt Mask */
#define FLEXCOM_FLEX_US_FIMR_RXFTHF_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_FIMR_RXFTHF_Pos)  /**< (FLEXCOM_FLEX_US_FIMR Mask) RXFTHF */
#define FLEXCOM_FLEX_US_FIMR_RXFTHF(value)  (FLEXCOM_FLEX_US_FIMR_RXFTHF_Msk & ((value) << FLEXCOM_FLEX_US_FIMR_RXFTHF_Pos))  

/* -------- FLEXCOM_FLEX_US_FESR : (FLEXCOM Offset: 0x2b4) (R/ 32) USART FIFO Event Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXFEF:1;                   /**< bit:      0  Transmit FIFO Empty Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) */
    uint32_t TXFFF:1;                   /**< bit:      1  Transmit FIFO Full Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) */
    uint32_t TXFTHF:1;                  /**< bit:      2  Transmit FIFO Threshold Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) */
    uint32_t RXFEF:1;                   /**< bit:      3  Receive FIFO Empty Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) */
    uint32_t RXFFF:1;                   /**< bit:      4  Receive FIFO Full Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) */
    uint32_t RXFTHF:1;                  /**< bit:      5  Receive FIFO Threshold Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) */
    uint32_t TXFPTEF:1;                 /**< bit:      6  Transmit FIFO Pointer Error Flag         */
    uint32_t RXFPTEF:1;                 /**< bit:      7  Receive FIFO Pointer Error Flag          */
    uint32_t TXFLOCK:1;                 /**< bit:      8  Transmit FIFO Lock                       */
    uint32_t RXFTHF2:1;                 /**< bit:      9  Receive FIFO Threshold Flag 2 (cleared by writing the FLEX_US_CR.RSTSTA bit) */
    uint32_t :22;                       /**< bit: 10..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :9;                        /**< bit:   0..8  Reserved */
    uint32_t RXFTHF:1;                  /**< bit:      9  Receive FIFO Threshold Flag 2 (cleared by writing the FLEX_US_CR.RSTSTA bit) */
    uint32_t :22;                       /**< bit: 10..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_FESR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_FESR_OFFSET         (0x2B4)                                       /**<  (FLEXCOM_FLEX_US_FESR) USART FIFO Event Status Register  Offset */

#define FLEXCOM_FLEX_US_FESR_TXFEF_Pos      0                                              /**< (FLEXCOM_FLEX_US_FESR) Transmit FIFO Empty Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Position */
#define FLEXCOM_FLEX_US_FESR_TXFEF_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_FESR_TXFEF_Pos)   /**< (FLEXCOM_FLEX_US_FESR) Transmit FIFO Empty Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Mask */
#define FLEXCOM_FLEX_US_FESR_TXFEF          FLEXCOM_FLEX_US_FESR_TXFEF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FESR_TXFEF_Msk instead */
#define FLEXCOM_FLEX_US_FESR_TXFFF_Pos      1                                              /**< (FLEXCOM_FLEX_US_FESR) Transmit FIFO Full Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Position */
#define FLEXCOM_FLEX_US_FESR_TXFFF_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_FESR_TXFFF_Pos)   /**< (FLEXCOM_FLEX_US_FESR) Transmit FIFO Full Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Mask */
#define FLEXCOM_FLEX_US_FESR_TXFFF          FLEXCOM_FLEX_US_FESR_TXFFF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FESR_TXFFF_Msk instead */
#define FLEXCOM_FLEX_US_FESR_TXFTHF_Pos     2                                              /**< (FLEXCOM_FLEX_US_FESR) Transmit FIFO Threshold Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Position */
#define FLEXCOM_FLEX_US_FESR_TXFTHF_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_FESR_TXFTHF_Pos)  /**< (FLEXCOM_FLEX_US_FESR) Transmit FIFO Threshold Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Mask */
#define FLEXCOM_FLEX_US_FESR_TXFTHF         FLEXCOM_FLEX_US_FESR_TXFTHF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FESR_TXFTHF_Msk instead */
#define FLEXCOM_FLEX_US_FESR_RXFEF_Pos      3                                              /**< (FLEXCOM_FLEX_US_FESR) Receive FIFO Empty Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Position */
#define FLEXCOM_FLEX_US_FESR_RXFEF_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_FESR_RXFEF_Pos)   /**< (FLEXCOM_FLEX_US_FESR) Receive FIFO Empty Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Mask */
#define FLEXCOM_FLEX_US_FESR_RXFEF          FLEXCOM_FLEX_US_FESR_RXFEF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FESR_RXFEF_Msk instead */
#define FLEXCOM_FLEX_US_FESR_RXFFF_Pos      4                                              /**< (FLEXCOM_FLEX_US_FESR) Receive FIFO Full Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Position */
#define FLEXCOM_FLEX_US_FESR_RXFFF_Msk      (_U_(0x1) << FLEXCOM_FLEX_US_FESR_RXFFF_Pos)   /**< (FLEXCOM_FLEX_US_FESR) Receive FIFO Full Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Mask */
#define FLEXCOM_FLEX_US_FESR_RXFFF          FLEXCOM_FLEX_US_FESR_RXFFF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FESR_RXFFF_Msk instead */
#define FLEXCOM_FLEX_US_FESR_RXFTHF_Pos     5                                              /**< (FLEXCOM_FLEX_US_FESR) Receive FIFO Threshold Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Position */
#define FLEXCOM_FLEX_US_FESR_RXFTHF_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_FESR_RXFTHF_Pos)  /**< (FLEXCOM_FLEX_US_FESR) Receive FIFO Threshold Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Mask */
#define FLEXCOM_FLEX_US_FESR_RXFTHF         FLEXCOM_FLEX_US_FESR_RXFTHF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FESR_RXFTHF_Msk instead */
#define FLEXCOM_FLEX_US_FESR_TXFPTEF_Pos    6                                              /**< (FLEXCOM_FLEX_US_FESR) Transmit FIFO Pointer Error Flag Position */
#define FLEXCOM_FLEX_US_FESR_TXFPTEF_Msk    (_U_(0x1) << FLEXCOM_FLEX_US_FESR_TXFPTEF_Pos)  /**< (FLEXCOM_FLEX_US_FESR) Transmit FIFO Pointer Error Flag Mask */
#define FLEXCOM_FLEX_US_FESR_TXFPTEF        FLEXCOM_FLEX_US_FESR_TXFPTEF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FESR_TXFPTEF_Msk instead */
#define FLEXCOM_FLEX_US_FESR_RXFPTEF_Pos    7                                              /**< (FLEXCOM_FLEX_US_FESR) Receive FIFO Pointer Error Flag Position */
#define FLEXCOM_FLEX_US_FESR_RXFPTEF_Msk    (_U_(0x1) << FLEXCOM_FLEX_US_FESR_RXFPTEF_Pos)  /**< (FLEXCOM_FLEX_US_FESR) Receive FIFO Pointer Error Flag Mask */
#define FLEXCOM_FLEX_US_FESR_RXFPTEF        FLEXCOM_FLEX_US_FESR_RXFPTEF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FESR_RXFPTEF_Msk instead */
#define FLEXCOM_FLEX_US_FESR_TXFLOCK_Pos    8                                              /**< (FLEXCOM_FLEX_US_FESR) Transmit FIFO Lock Position */
#define FLEXCOM_FLEX_US_FESR_TXFLOCK_Msk    (_U_(0x1) << FLEXCOM_FLEX_US_FESR_TXFLOCK_Pos)  /**< (FLEXCOM_FLEX_US_FESR) Transmit FIFO Lock Mask */
#define FLEXCOM_FLEX_US_FESR_TXFLOCK        FLEXCOM_FLEX_US_FESR_TXFLOCK_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FESR_TXFLOCK_Msk instead */
#define FLEXCOM_FLEX_US_FESR_RXFTHF2_Pos    9                                              /**< (FLEXCOM_FLEX_US_FESR) Receive FIFO Threshold Flag 2 (cleared by writing the FLEX_US_CR.RSTSTA bit) Position */
#define FLEXCOM_FLEX_US_FESR_RXFTHF2_Msk    (_U_(0x1) << FLEXCOM_FLEX_US_FESR_RXFTHF2_Pos)  /**< (FLEXCOM_FLEX_US_FESR) Receive FIFO Threshold Flag 2 (cleared by writing the FLEX_US_CR.RSTSTA bit) Mask */
#define FLEXCOM_FLEX_US_FESR_RXFTHF2        FLEXCOM_FLEX_US_FESR_RXFTHF2_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_FESR_RXFTHF2_Msk instead */
#define FLEXCOM_FLEX_US_FESR_MASK           _U_(0x3FF)                                     /**< \deprecated (FLEXCOM_FLEX_US_FESR) Register MASK  (Use FLEXCOM_FLEX_US_FESR_Msk instead)  */
#define FLEXCOM_FLEX_US_FESR_Msk            _U_(0x3FF)                                     /**< (FLEXCOM_FLEX_US_FESR) Register Mask  */

#define FLEXCOM_FLEX_US_FESR_RXFTHF_Pos     9                                              /**< (FLEXCOM_FLEX_US_FESR Position) Receive FIFO Threshold Flag 2 (cleared by writing the FLEX_US_CR.RSTSTA bit) */
#define FLEXCOM_FLEX_US_FESR_RXFTHF_Msk     (_U_(0x1) << FLEXCOM_FLEX_US_FESR_RXFTHF_Pos)  /**< (FLEXCOM_FLEX_US_FESR Mask) RXFTHF */
#define FLEXCOM_FLEX_US_FESR_RXFTHF(value)  (FLEXCOM_FLEX_US_FESR_RXFTHF_Msk & ((value) << FLEXCOM_FLEX_US_FESR_RXFTHF_Pos))  

/* -------- FLEXCOM_FLEX_US_WPMR : (FLEXCOM Offset: 0x2e4) (R/W 32) USART Write Protection Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPEN:1;                    /**< bit:      0  Write Protection Enable                  */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPKEY:24;                  /**< bit:  8..31  Write Protection Key                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_US_WPMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_WPMR_OFFSET         (0x2E4)                                       /**<  (FLEXCOM_FLEX_US_WPMR) USART Write Protection Mode Register  Offset */

#define FLEXCOM_FLEX_US_WPMR_WPEN_Pos       0                                              /**< (FLEXCOM_FLEX_US_WPMR) Write Protection Enable Position */
#define FLEXCOM_FLEX_US_WPMR_WPEN_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_WPMR_WPEN_Pos)    /**< (FLEXCOM_FLEX_US_WPMR) Write Protection Enable Mask */
#define FLEXCOM_FLEX_US_WPMR_WPEN           FLEXCOM_FLEX_US_WPMR_WPEN_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_WPMR_WPEN_Msk instead */
#define FLEXCOM_FLEX_US_WPMR_WPKEY_Pos      8                                              /**< (FLEXCOM_FLEX_US_WPMR) Write Protection Key Position */
#define FLEXCOM_FLEX_US_WPMR_WPKEY_Msk      (_U_(0xFFFFFF) << FLEXCOM_FLEX_US_WPMR_WPKEY_Pos)  /**< (FLEXCOM_FLEX_US_WPMR) Write Protection Key Mask */
#define FLEXCOM_FLEX_US_WPMR_WPKEY(value)   (FLEXCOM_FLEX_US_WPMR_WPKEY_Msk & ((value) << FLEXCOM_FLEX_US_WPMR_WPKEY_Pos))
#define   FLEXCOM_FLEX_US_WPMR_WPKEY_PASSWD_Val _U_(0x555341)                                  /**< (FLEXCOM_FLEX_US_WPMR) Writing any other value in this field aborts the write operation of bit WPEN. Always reads as 0.  */
#define FLEXCOM_FLEX_US_WPMR_WPKEY_PASSWD   (FLEXCOM_FLEX_US_WPMR_WPKEY_PASSWD_Val << FLEXCOM_FLEX_US_WPMR_WPKEY_Pos)  /**< (FLEXCOM_FLEX_US_WPMR) Writing any other value in this field aborts the write operation of bit WPEN. Always reads as 0. Position  */
#define FLEXCOM_FLEX_US_WPMR_MASK           _U_(0xFFFFFF01)                                /**< \deprecated (FLEXCOM_FLEX_US_WPMR) Register MASK  (Use FLEXCOM_FLEX_US_WPMR_Msk instead)  */
#define FLEXCOM_FLEX_US_WPMR_Msk            _U_(0xFFFFFF01)                                /**< (FLEXCOM_FLEX_US_WPMR) Register Mask  */


/* -------- FLEXCOM_FLEX_US_WPSR : (FLEXCOM Offset: 0x2e8) (R/ 32) USART Write Protection Status Register -------- */
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
} FLEXCOM_FLEX_US_WPSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_US_WPSR_OFFSET         (0x2E8)                                       /**<  (FLEXCOM_FLEX_US_WPSR) USART Write Protection Status Register  Offset */

#define FLEXCOM_FLEX_US_WPSR_WPVS_Pos       0                                              /**< (FLEXCOM_FLEX_US_WPSR) Write Protection Violation Status Position */
#define FLEXCOM_FLEX_US_WPSR_WPVS_Msk       (_U_(0x1) << FLEXCOM_FLEX_US_WPSR_WPVS_Pos)    /**< (FLEXCOM_FLEX_US_WPSR) Write Protection Violation Status Mask */
#define FLEXCOM_FLEX_US_WPSR_WPVS           FLEXCOM_FLEX_US_WPSR_WPVS_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_US_WPSR_WPVS_Msk instead */
#define FLEXCOM_FLEX_US_WPSR_WPVSRC_Pos     8                                              /**< (FLEXCOM_FLEX_US_WPSR) Write Protection Violation Source Position */
#define FLEXCOM_FLEX_US_WPSR_WPVSRC_Msk     (_U_(0xFFFF) << FLEXCOM_FLEX_US_WPSR_WPVSRC_Pos)  /**< (FLEXCOM_FLEX_US_WPSR) Write Protection Violation Source Mask */
#define FLEXCOM_FLEX_US_WPSR_WPVSRC(value)  (FLEXCOM_FLEX_US_WPSR_WPVSRC_Msk & ((value) << FLEXCOM_FLEX_US_WPSR_WPVSRC_Pos))
#define FLEXCOM_FLEX_US_WPSR_MASK           _U_(0xFFFF01)                                  /**< \deprecated (FLEXCOM_FLEX_US_WPSR) Register MASK  (Use FLEXCOM_FLEX_US_WPSR_Msk instead)  */
#define FLEXCOM_FLEX_US_WPSR_Msk            _U_(0xFFFF01)                                  /**< (FLEXCOM_FLEX_US_WPSR) Register Mask  */


/* -------- FLEXCOM_FLEX_SPI_CR : (FLEXCOM Offset: 0x400) (/W 32) SPI Control Register -------- */
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
} FLEXCOM_FLEX_SPI_CR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_SPI_CR_OFFSET          (0x400)                                       /**<  (FLEXCOM_FLEX_SPI_CR) SPI Control Register  Offset */

#define FLEXCOM_FLEX_SPI_CR_SPIEN_Pos       0                                              /**< (FLEXCOM_FLEX_SPI_CR) SPI Enable Position */
#define FLEXCOM_FLEX_SPI_CR_SPIEN_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_CR_SPIEN_Pos)    /**< (FLEXCOM_FLEX_SPI_CR) SPI Enable Mask */
#define FLEXCOM_FLEX_SPI_CR_SPIEN           FLEXCOM_FLEX_SPI_CR_SPIEN_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_CR_SPIEN_Msk instead */
#define FLEXCOM_FLEX_SPI_CR_SPIDIS_Pos      1                                              /**< (FLEXCOM_FLEX_SPI_CR) SPI Disable Position */
#define FLEXCOM_FLEX_SPI_CR_SPIDIS_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_CR_SPIDIS_Pos)   /**< (FLEXCOM_FLEX_SPI_CR) SPI Disable Mask */
#define FLEXCOM_FLEX_SPI_CR_SPIDIS          FLEXCOM_FLEX_SPI_CR_SPIDIS_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_CR_SPIDIS_Msk instead */
#define FLEXCOM_FLEX_SPI_CR_SWRST_Pos       7                                              /**< (FLEXCOM_FLEX_SPI_CR) SPI Software Reset Position */
#define FLEXCOM_FLEX_SPI_CR_SWRST_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_CR_SWRST_Pos)    /**< (FLEXCOM_FLEX_SPI_CR) SPI Software Reset Mask */
#define FLEXCOM_FLEX_SPI_CR_SWRST           FLEXCOM_FLEX_SPI_CR_SWRST_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_CR_SWRST_Msk instead */
#define FLEXCOM_FLEX_SPI_CR_REQCLR_Pos      12                                             /**< (FLEXCOM_FLEX_SPI_CR) Request to Clear the Comparison Trigger Position */
#define FLEXCOM_FLEX_SPI_CR_REQCLR_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_CR_REQCLR_Pos)   /**< (FLEXCOM_FLEX_SPI_CR) Request to Clear the Comparison Trigger Mask */
#define FLEXCOM_FLEX_SPI_CR_REQCLR          FLEXCOM_FLEX_SPI_CR_REQCLR_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_CR_REQCLR_Msk instead */
#define FLEXCOM_FLEX_SPI_CR_TXFCLR_Pos      16                                             /**< (FLEXCOM_FLEX_SPI_CR) Transmit FIFO Clear Position */
#define FLEXCOM_FLEX_SPI_CR_TXFCLR_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_CR_TXFCLR_Pos)   /**< (FLEXCOM_FLEX_SPI_CR) Transmit FIFO Clear Mask */
#define FLEXCOM_FLEX_SPI_CR_TXFCLR          FLEXCOM_FLEX_SPI_CR_TXFCLR_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_CR_TXFCLR_Msk instead */
#define FLEXCOM_FLEX_SPI_CR_RXFCLR_Pos      17                                             /**< (FLEXCOM_FLEX_SPI_CR) Receive FIFO Clear Position */
#define FLEXCOM_FLEX_SPI_CR_RXFCLR_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_CR_RXFCLR_Pos)   /**< (FLEXCOM_FLEX_SPI_CR) Receive FIFO Clear Mask */
#define FLEXCOM_FLEX_SPI_CR_RXFCLR          FLEXCOM_FLEX_SPI_CR_RXFCLR_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_CR_RXFCLR_Msk instead */
#define FLEXCOM_FLEX_SPI_CR_LASTXFER_Pos    24                                             /**< (FLEXCOM_FLEX_SPI_CR) Last Transfer Position */
#define FLEXCOM_FLEX_SPI_CR_LASTXFER_Msk    (_U_(0x1) << FLEXCOM_FLEX_SPI_CR_LASTXFER_Pos)  /**< (FLEXCOM_FLEX_SPI_CR) Last Transfer Mask */
#define FLEXCOM_FLEX_SPI_CR_LASTXFER        FLEXCOM_FLEX_SPI_CR_LASTXFER_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_CR_LASTXFER_Msk instead */
#define FLEXCOM_FLEX_SPI_CR_FIFOEN_Pos      30                                             /**< (FLEXCOM_FLEX_SPI_CR) FIFO Enable Position */
#define FLEXCOM_FLEX_SPI_CR_FIFOEN_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_CR_FIFOEN_Pos)   /**< (FLEXCOM_FLEX_SPI_CR) FIFO Enable Mask */
#define FLEXCOM_FLEX_SPI_CR_FIFOEN          FLEXCOM_FLEX_SPI_CR_FIFOEN_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_CR_FIFOEN_Msk instead */
#define FLEXCOM_FLEX_SPI_CR_FIFODIS_Pos     31                                             /**< (FLEXCOM_FLEX_SPI_CR) FIFO Disable Position */
#define FLEXCOM_FLEX_SPI_CR_FIFODIS_Msk     (_U_(0x1) << FLEXCOM_FLEX_SPI_CR_FIFODIS_Pos)  /**< (FLEXCOM_FLEX_SPI_CR) FIFO Disable Mask */
#define FLEXCOM_FLEX_SPI_CR_FIFODIS         FLEXCOM_FLEX_SPI_CR_FIFODIS_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_CR_FIFODIS_Msk instead */
#define FLEXCOM_FLEX_SPI_CR_MASK            _U_(0xC1031083)                                /**< \deprecated (FLEXCOM_FLEX_SPI_CR) Register MASK  (Use FLEXCOM_FLEX_SPI_CR_Msk instead)  */
#define FLEXCOM_FLEX_SPI_CR_Msk             _U_(0xC1031083)                                /**< (FLEXCOM_FLEX_SPI_CR) Register Mask  */


/* -------- FLEXCOM_FLEX_SPI_MR : (FLEXCOM Offset: 0x404) (R/W 32) SPI Mode Register -------- */
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
    uint32_t LBHPC:1;                   /**< bit:      8  Last Bit Half Period Compatibility       */
    uint32_t :3;                        /**< bit:  9..11  Reserved */
    uint32_t CMPMODE:1;                 /**< bit:     12  Comparison Mode                          */
    uint32_t :3;                        /**< bit: 13..15  Reserved */
    uint32_t PCS:2;                     /**< bit: 16..17  Peripheral Chip Select                   */
    uint32_t :6;                        /**< bit: 18..23  Reserved */
    uint32_t DLYBCS:8;                  /**< bit: 24..31  Delay Between Chip Selects               */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_SPI_MR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_SPI_MR_OFFSET          (0x404)                                       /**<  (FLEXCOM_FLEX_SPI_MR) SPI Mode Register  Offset */

#define FLEXCOM_FLEX_SPI_MR_MSTR_Pos        0                                              /**< (FLEXCOM_FLEX_SPI_MR) Master/Slave Mode Position */
#define FLEXCOM_FLEX_SPI_MR_MSTR_Msk        (_U_(0x1) << FLEXCOM_FLEX_SPI_MR_MSTR_Pos)     /**< (FLEXCOM_FLEX_SPI_MR) Master/Slave Mode Mask */
#define FLEXCOM_FLEX_SPI_MR_MSTR            FLEXCOM_FLEX_SPI_MR_MSTR_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_MR_MSTR_Msk instead */
#define FLEXCOM_FLEX_SPI_MR_PS_Pos          1                                              /**< (FLEXCOM_FLEX_SPI_MR) Peripheral Select Position */
#define FLEXCOM_FLEX_SPI_MR_PS_Msk          (_U_(0x1) << FLEXCOM_FLEX_SPI_MR_PS_Pos)       /**< (FLEXCOM_FLEX_SPI_MR) Peripheral Select Mask */
#define FLEXCOM_FLEX_SPI_MR_PS              FLEXCOM_FLEX_SPI_MR_PS_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_MR_PS_Msk instead */
#define FLEXCOM_FLEX_SPI_MR_PCSDEC_Pos      2                                              /**< (FLEXCOM_FLEX_SPI_MR) Chip Select Decode Position */
#define FLEXCOM_FLEX_SPI_MR_PCSDEC_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_MR_PCSDEC_Pos)   /**< (FLEXCOM_FLEX_SPI_MR) Chip Select Decode Mask */
#define FLEXCOM_FLEX_SPI_MR_PCSDEC          FLEXCOM_FLEX_SPI_MR_PCSDEC_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_MR_PCSDEC_Msk instead */
#define FLEXCOM_FLEX_SPI_MR_BRSRCCLK_Pos    3                                              /**< (FLEXCOM_FLEX_SPI_MR) Bit Rate Source Clock Position */
#define FLEXCOM_FLEX_SPI_MR_BRSRCCLK_Msk    (_U_(0x1) << FLEXCOM_FLEX_SPI_MR_BRSRCCLK_Pos)  /**< (FLEXCOM_FLEX_SPI_MR) Bit Rate Source Clock Mask */
#define FLEXCOM_FLEX_SPI_MR_BRSRCCLK        FLEXCOM_FLEX_SPI_MR_BRSRCCLK_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_MR_BRSRCCLK_Msk instead */
#define   FLEXCOM_FLEX_SPI_MR_BRSRCCLK_PERIPH_CLK_Val _U_(0x0)                                       /**< (FLEXCOM_FLEX_SPI_MR) The peripheral clock is the source clock for the bit rate generation.  */
#define   FLEXCOM_FLEX_SPI_MR_BRSRCCLK_GCLK_Val _U_(0x1)                                       /**< (FLEXCOM_FLEX_SPI_MR) GCLK is the source clock for the bit rate generation, thus the bit rate can be independent of the core/peripheral clock.  */
#define FLEXCOM_FLEX_SPI_MR_BRSRCCLK_PERIPH_CLK (FLEXCOM_FLEX_SPI_MR_BRSRCCLK_PERIPH_CLK_Val << FLEXCOM_FLEX_SPI_MR_BRSRCCLK_Pos)  /**< (FLEXCOM_FLEX_SPI_MR) The peripheral clock is the source clock for the bit rate generation. Position  */
#define FLEXCOM_FLEX_SPI_MR_BRSRCCLK_GCLK   (FLEXCOM_FLEX_SPI_MR_BRSRCCLK_GCLK_Val << FLEXCOM_FLEX_SPI_MR_BRSRCCLK_Pos)  /**< (FLEXCOM_FLEX_SPI_MR) GCLK is the source clock for the bit rate generation, thus the bit rate can be independent of the core/peripheral clock. Position  */
#define FLEXCOM_FLEX_SPI_MR_MODFDIS_Pos     4                                              /**< (FLEXCOM_FLEX_SPI_MR) Mode Fault Detection Position */
#define FLEXCOM_FLEX_SPI_MR_MODFDIS_Msk     (_U_(0x1) << FLEXCOM_FLEX_SPI_MR_MODFDIS_Pos)  /**< (FLEXCOM_FLEX_SPI_MR) Mode Fault Detection Mask */
#define FLEXCOM_FLEX_SPI_MR_MODFDIS         FLEXCOM_FLEX_SPI_MR_MODFDIS_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_MR_MODFDIS_Msk instead */
#define FLEXCOM_FLEX_SPI_MR_WDRBT_Pos       5                                              /**< (FLEXCOM_FLEX_SPI_MR) Wait Data Read Before Transfer Position */
#define FLEXCOM_FLEX_SPI_MR_WDRBT_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_MR_WDRBT_Pos)    /**< (FLEXCOM_FLEX_SPI_MR) Wait Data Read Before Transfer Mask */
#define FLEXCOM_FLEX_SPI_MR_WDRBT           FLEXCOM_FLEX_SPI_MR_WDRBT_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_MR_WDRBT_Msk instead */
#define FLEXCOM_FLEX_SPI_MR_LLB_Pos         7                                              /**< (FLEXCOM_FLEX_SPI_MR) Local Loopback Enable Position */
#define FLEXCOM_FLEX_SPI_MR_LLB_Msk         (_U_(0x1) << FLEXCOM_FLEX_SPI_MR_LLB_Pos)      /**< (FLEXCOM_FLEX_SPI_MR) Local Loopback Enable Mask */
#define FLEXCOM_FLEX_SPI_MR_LLB             FLEXCOM_FLEX_SPI_MR_LLB_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_MR_LLB_Msk instead */
#define FLEXCOM_FLEX_SPI_MR_LBHPC_Pos       8                                              /**< (FLEXCOM_FLEX_SPI_MR) Last Bit Half Period Compatibility Position */
#define FLEXCOM_FLEX_SPI_MR_LBHPC_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_MR_LBHPC_Pos)    /**< (FLEXCOM_FLEX_SPI_MR) Last Bit Half Period Compatibility Mask */
#define FLEXCOM_FLEX_SPI_MR_LBHPC           FLEXCOM_FLEX_SPI_MR_LBHPC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_MR_LBHPC_Msk instead */
#define FLEXCOM_FLEX_SPI_MR_CMPMODE_Pos     12                                             /**< (FLEXCOM_FLEX_SPI_MR) Comparison Mode Position */
#define FLEXCOM_FLEX_SPI_MR_CMPMODE_Msk     (_U_(0x1) << FLEXCOM_FLEX_SPI_MR_CMPMODE_Pos)  /**< (FLEXCOM_FLEX_SPI_MR) Comparison Mode Mask */
#define FLEXCOM_FLEX_SPI_MR_CMPMODE         FLEXCOM_FLEX_SPI_MR_CMPMODE_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_MR_CMPMODE_Msk instead */
#define   FLEXCOM_FLEX_SPI_MR_CMPMODE_FLAG_ONLY_Val _U_(0x0)                                       /**< (FLEXCOM_FLEX_SPI_MR) Any character is received and comparison function drives CMP flag.  */
#define   FLEXCOM_FLEX_SPI_MR_CMPMODE_START_CONDITION_Val _U_(0x1)                                       /**< (FLEXCOM_FLEX_SPI_MR) Comparison condition must be met to start reception of all incoming characters until REQCLR is set.  */
#define FLEXCOM_FLEX_SPI_MR_CMPMODE_FLAG_ONLY (FLEXCOM_FLEX_SPI_MR_CMPMODE_FLAG_ONLY_Val << FLEXCOM_FLEX_SPI_MR_CMPMODE_Pos)  /**< (FLEXCOM_FLEX_SPI_MR) Any character is received and comparison function drives CMP flag. Position  */
#define FLEXCOM_FLEX_SPI_MR_CMPMODE_START_CONDITION (FLEXCOM_FLEX_SPI_MR_CMPMODE_START_CONDITION_Val << FLEXCOM_FLEX_SPI_MR_CMPMODE_Pos)  /**< (FLEXCOM_FLEX_SPI_MR) Comparison condition must be met to start reception of all incoming characters until REQCLR is set. Position  */
#define FLEXCOM_FLEX_SPI_MR_PCS_Pos         16                                             /**< (FLEXCOM_FLEX_SPI_MR) Peripheral Chip Select Position */
#define FLEXCOM_FLEX_SPI_MR_PCS_Msk         (_U_(0x3) << FLEXCOM_FLEX_SPI_MR_PCS_Pos)      /**< (FLEXCOM_FLEX_SPI_MR) Peripheral Chip Select Mask */
#define FLEXCOM_FLEX_SPI_MR_PCS(value)      (FLEXCOM_FLEX_SPI_MR_PCS_Msk & ((value) << FLEXCOM_FLEX_SPI_MR_PCS_Pos))
#define FLEXCOM_FLEX_SPI_MR_DLYBCS_Pos      24                                             /**< (FLEXCOM_FLEX_SPI_MR) Delay Between Chip Selects Position */
#define FLEXCOM_FLEX_SPI_MR_DLYBCS_Msk      (_U_(0xFF) << FLEXCOM_FLEX_SPI_MR_DLYBCS_Pos)  /**< (FLEXCOM_FLEX_SPI_MR) Delay Between Chip Selects Mask */
#define FLEXCOM_FLEX_SPI_MR_DLYBCS(value)   (FLEXCOM_FLEX_SPI_MR_DLYBCS_Msk & ((value) << FLEXCOM_FLEX_SPI_MR_DLYBCS_Pos))
#define FLEXCOM_FLEX_SPI_MR_MASK            _U_(0xFF0311BF)                                /**< \deprecated (FLEXCOM_FLEX_SPI_MR) Register MASK  (Use FLEXCOM_FLEX_SPI_MR_Msk instead)  */
#define FLEXCOM_FLEX_SPI_MR_Msk             _U_(0xFF0311BF)                                /**< (FLEXCOM_FLEX_SPI_MR) Register Mask  */


/* -------- FLEXCOM_FLEX_SPI_RDR : (FLEXCOM Offset: 0x408) (R/ 32) SPI Receive Data Register -------- */
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
} FLEXCOM_FLEX_SPI_RDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_SPI_RDR_OFFSET         (0x408)                                       /**<  (FLEXCOM_FLEX_SPI_RDR) SPI Receive Data Register  Offset */

#define FLEXCOM_FLEX_SPI_RDR_RD_Pos         0                                              /**< (FLEXCOM_FLEX_SPI_RDR) Receive Data Position */
#define FLEXCOM_FLEX_SPI_RDR_RD_Msk         (_U_(0xFFFF) << FLEXCOM_FLEX_SPI_RDR_RD_Pos)   /**< (FLEXCOM_FLEX_SPI_RDR) Receive Data Mask */
#define FLEXCOM_FLEX_SPI_RDR_RD(value)      (FLEXCOM_FLEX_SPI_RDR_RD_Msk & ((value) << FLEXCOM_FLEX_SPI_RDR_RD_Pos))
#define FLEXCOM_FLEX_SPI_RDR_PCS_Pos        16                                             /**< (FLEXCOM_FLEX_SPI_RDR) Peripheral Chip Select Position */
#define FLEXCOM_FLEX_SPI_RDR_PCS_Msk        (_U_(0xF) << FLEXCOM_FLEX_SPI_RDR_PCS_Pos)     /**< (FLEXCOM_FLEX_SPI_RDR) Peripheral Chip Select Mask */
#define FLEXCOM_FLEX_SPI_RDR_PCS(value)     (FLEXCOM_FLEX_SPI_RDR_PCS_Msk & ((value) << FLEXCOM_FLEX_SPI_RDR_PCS_Pos))
#define FLEXCOM_FLEX_SPI_RDR_MASK           _U_(0xFFFFF)                                   /**< \deprecated (FLEXCOM_FLEX_SPI_RDR) Register MASK  (Use FLEXCOM_FLEX_SPI_RDR_Msk instead)  */
#define FLEXCOM_FLEX_SPI_RDR_Msk            _U_(0xFFFFF)                                   /**< (FLEXCOM_FLEX_SPI_RDR) Register Mask  */

/* FIFO_MULTI_DATA_8 mode */
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_0_Pos 0                                              /**< (FLEXCOM_FLEX_SPI_RDR) Receive Data Position */
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_0_Msk (_U_(0xFF) << FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_0_Pos)  /**< (FLEXCOM_FLEX_SPI_RDR) Receive Data Mask */
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_0(value) (FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_0_Msk & ((value) << FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_0_Pos))
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_1_Pos 8                                              /**< (FLEXCOM_FLEX_SPI_RDR) Receive Data Position */
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_1_Msk (_U_(0xFF) << FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_1_Pos)  /**< (FLEXCOM_FLEX_SPI_RDR) Receive Data Mask */
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_1(value) (FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_1_Msk & ((value) << FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_1_Pos))
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_2_Pos 16                                             /**< (FLEXCOM_FLEX_SPI_RDR) Receive Data Position */
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_2_Msk (_U_(0xFF) << FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_2_Pos)  /**< (FLEXCOM_FLEX_SPI_RDR) Receive Data Mask */
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_2(value) (FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_2_Msk & ((value) << FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_2_Pos))
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_3_Pos 24                                             /**< (FLEXCOM_FLEX_SPI_RDR) Receive Data Position */
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_3_Msk (_U_(0xFF) << FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_3_Pos)  /**< (FLEXCOM_FLEX_SPI_RDR) Receive Data Mask */
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_3(value) (FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_3_Msk & ((value) << FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD8_3_Pos))
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_MASK _U_(0xFFFFFFFF)                                /**< \deprecated (FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8) Register MASK  (Use FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_Msk instead)  */
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8_Msk _U_(0xFFFFFFFF)                                /**< (FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_8) Register Mask  */

/* FIFO_MULTI_DATA_16 mode */
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD16_0_Pos 0                                              /**< (FLEXCOM_FLEX_SPI_RDR) Receive Data Position */
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD16_0_Msk (_U_(0xFFFF) << FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD16_0_Pos)  /**< (FLEXCOM_FLEX_SPI_RDR) Receive Data Mask */
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD16_0(value) (FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD16_0_Msk & ((value) << FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD16_0_Pos))
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD16_1_Pos 16                                             /**< (FLEXCOM_FLEX_SPI_RDR) Receive Data Position */
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD16_1_Msk (_U_(0xFFFF) << FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD16_1_Pos)  /**< (FLEXCOM_FLEX_SPI_RDR) Receive Data Mask */
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD16_1(value) (FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD16_1_Msk & ((value) << FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD16_1_Pos))
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_16_MASK _U_(0xFFFFFFFF)                                /**< \deprecated (FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_16) Register MASK  (Use FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_16_Msk instead)  */
#define FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_16_Msk _U_(0xFFFFFFFF)                                /**< (FLEXCOM_FLEX_SPI_RDR_FIFO_MULTI_DATA_16) Register Mask  */


/* -------- FLEXCOM_FLEX_SPI_TDR : (FLEXCOM Offset: 0x40c) (/W 32) SPI Transmit Data Register -------- */
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
} FLEXCOM_FLEX_SPI_TDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_SPI_TDR_OFFSET         (0x40C)                                       /**<  (FLEXCOM_FLEX_SPI_TDR) SPI Transmit Data Register  Offset */

#define FLEXCOM_FLEX_SPI_TDR_TD_Pos         0                                              /**< (FLEXCOM_FLEX_SPI_TDR) Transmit Data Position */
#define FLEXCOM_FLEX_SPI_TDR_TD_Msk         (_U_(0xFFFF) << FLEXCOM_FLEX_SPI_TDR_TD_Pos)   /**< (FLEXCOM_FLEX_SPI_TDR) Transmit Data Mask */
#define FLEXCOM_FLEX_SPI_TDR_TD(value)      (FLEXCOM_FLEX_SPI_TDR_TD_Msk & ((value) << FLEXCOM_FLEX_SPI_TDR_TD_Pos))
#define FLEXCOM_FLEX_SPI_TDR_PCS_Pos        16                                             /**< (FLEXCOM_FLEX_SPI_TDR) Peripheral Chip Select Position */
#define FLEXCOM_FLEX_SPI_TDR_PCS_Msk        (_U_(0xF) << FLEXCOM_FLEX_SPI_TDR_PCS_Pos)     /**< (FLEXCOM_FLEX_SPI_TDR) Peripheral Chip Select Mask */
#define FLEXCOM_FLEX_SPI_TDR_PCS(value)     (FLEXCOM_FLEX_SPI_TDR_PCS_Msk & ((value) << FLEXCOM_FLEX_SPI_TDR_PCS_Pos))
#define FLEXCOM_FLEX_SPI_TDR_LASTXFER_Pos   24                                             /**< (FLEXCOM_FLEX_SPI_TDR) Last Transfer Position */
#define FLEXCOM_FLEX_SPI_TDR_LASTXFER_Msk   (_U_(0x1) << FLEXCOM_FLEX_SPI_TDR_LASTXFER_Pos)  /**< (FLEXCOM_FLEX_SPI_TDR) Last Transfer Mask */
#define FLEXCOM_FLEX_SPI_TDR_LASTXFER       FLEXCOM_FLEX_SPI_TDR_LASTXFER_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_TDR_LASTXFER_Msk instead */
#define FLEXCOM_FLEX_SPI_TDR_MASK           _U_(0x10FFFFF)                                 /**< \deprecated (FLEXCOM_FLEX_SPI_TDR) Register MASK  (Use FLEXCOM_FLEX_SPI_TDR_Msk instead)  */
#define FLEXCOM_FLEX_SPI_TDR_Msk            _U_(0x10FFFFF)                                 /**< (FLEXCOM_FLEX_SPI_TDR) Register Mask  */

/* FIFO_MULTI_DATA mode */
#define FLEXCOM_FLEX_SPI_TDR_FIFO_MULTI_DATA_TD0_Pos 0                                              /**< (FLEXCOM_FLEX_SPI_TDR) Transmit Data Position */
#define FLEXCOM_FLEX_SPI_TDR_FIFO_MULTI_DATA_TD0_Msk (_U_(0xFFFF) << FLEXCOM_FLEX_SPI_TDR_FIFO_MULTI_DATA_TD0_Pos)  /**< (FLEXCOM_FLEX_SPI_TDR) Transmit Data Mask */
#define FLEXCOM_FLEX_SPI_TDR_FIFO_MULTI_DATA_TD0(value) (FLEXCOM_FLEX_SPI_TDR_FIFO_MULTI_DATA_TD0_Msk & ((value) << FLEXCOM_FLEX_SPI_TDR_FIFO_MULTI_DATA_TD0_Pos))
#define FLEXCOM_FLEX_SPI_TDR_FIFO_MULTI_DATA_TD1_Pos 16                                             /**< (FLEXCOM_FLEX_SPI_TDR) Transmit Data Position */
#define FLEXCOM_FLEX_SPI_TDR_FIFO_MULTI_DATA_TD1_Msk (_U_(0xFFFF) << FLEXCOM_FLEX_SPI_TDR_FIFO_MULTI_DATA_TD1_Pos)  /**< (FLEXCOM_FLEX_SPI_TDR) Transmit Data Mask */
#define FLEXCOM_FLEX_SPI_TDR_FIFO_MULTI_DATA_TD1(value) (FLEXCOM_FLEX_SPI_TDR_FIFO_MULTI_DATA_TD1_Msk & ((value) << FLEXCOM_FLEX_SPI_TDR_FIFO_MULTI_DATA_TD1_Pos))
#define FLEXCOM_FLEX_SPI_TDR_FIFO_MULTI_DATA_MASK _U_(0xFFFFFFFF)                                /**< \deprecated (FLEXCOM_FLEX_SPI_TDR_FIFO_MULTI_DATA) Register MASK  (Use FLEXCOM_FLEX_SPI_TDR_FIFO_MULTI_DATA_Msk instead)  */
#define FLEXCOM_FLEX_SPI_TDR_FIFO_MULTI_DATA_Msk _U_(0xFFFFFFFF)                                /**< (FLEXCOM_FLEX_SPI_TDR_FIFO_MULTI_DATA) Register Mask  */


/* -------- FLEXCOM_FLEX_SPI_SR : (FLEXCOM Offset: 0x410) (R/ 32) SPI Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RDRF:1;                    /**< bit:      0  Receive Data Register Full (cleared by reading FLEX_SPI_RDR) */
    uint32_t TDRE:1;                    /**< bit:      1  Transmit Data Register Empty (cleared by writing FLEX_SPI_TDR) */
    uint32_t MODF:1;                    /**< bit:      2  Mode Fault Error (cleared on read)       */
    uint32_t OVRES:1;                   /**< bit:      3  Overrun Error Status (cleared on read)   */
    uint32_t :4;                        /**< bit:   4..7  Reserved */
    uint32_t NSSR:1;                    /**< bit:      8  NSS Rising (cleared on read)             */
    uint32_t TXEMPTY:1;                 /**< bit:      9  Transmission Registers Empty (cleared by writing FLEX_SPI_TDR) */
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
} FLEXCOM_FLEX_SPI_SR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_SPI_SR_OFFSET          (0x410)                                       /**<  (FLEXCOM_FLEX_SPI_SR) SPI Status Register  Offset */

#define FLEXCOM_FLEX_SPI_SR_RDRF_Pos        0                                              /**< (FLEXCOM_FLEX_SPI_SR) Receive Data Register Full (cleared by reading FLEX_SPI_RDR) Position */
#define FLEXCOM_FLEX_SPI_SR_RDRF_Msk        (_U_(0x1) << FLEXCOM_FLEX_SPI_SR_RDRF_Pos)     /**< (FLEXCOM_FLEX_SPI_SR) Receive Data Register Full (cleared by reading FLEX_SPI_RDR) Mask */
#define FLEXCOM_FLEX_SPI_SR_RDRF            FLEXCOM_FLEX_SPI_SR_RDRF_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_SR_RDRF_Msk instead */
#define FLEXCOM_FLEX_SPI_SR_TDRE_Pos        1                                              /**< (FLEXCOM_FLEX_SPI_SR) Transmit Data Register Empty (cleared by writing FLEX_SPI_TDR) Position */
#define FLEXCOM_FLEX_SPI_SR_TDRE_Msk        (_U_(0x1) << FLEXCOM_FLEX_SPI_SR_TDRE_Pos)     /**< (FLEXCOM_FLEX_SPI_SR) Transmit Data Register Empty (cleared by writing FLEX_SPI_TDR) Mask */
#define FLEXCOM_FLEX_SPI_SR_TDRE            FLEXCOM_FLEX_SPI_SR_TDRE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_SR_TDRE_Msk instead */
#define FLEXCOM_FLEX_SPI_SR_MODF_Pos        2                                              /**< (FLEXCOM_FLEX_SPI_SR) Mode Fault Error (cleared on read) Position */
#define FLEXCOM_FLEX_SPI_SR_MODF_Msk        (_U_(0x1) << FLEXCOM_FLEX_SPI_SR_MODF_Pos)     /**< (FLEXCOM_FLEX_SPI_SR) Mode Fault Error (cleared on read) Mask */
#define FLEXCOM_FLEX_SPI_SR_MODF            FLEXCOM_FLEX_SPI_SR_MODF_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_SR_MODF_Msk instead */
#define FLEXCOM_FLEX_SPI_SR_OVRES_Pos       3                                              /**< (FLEXCOM_FLEX_SPI_SR) Overrun Error Status (cleared on read) Position */
#define FLEXCOM_FLEX_SPI_SR_OVRES_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_SR_OVRES_Pos)    /**< (FLEXCOM_FLEX_SPI_SR) Overrun Error Status (cleared on read) Mask */
#define FLEXCOM_FLEX_SPI_SR_OVRES           FLEXCOM_FLEX_SPI_SR_OVRES_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_SR_OVRES_Msk instead */
#define FLEXCOM_FLEX_SPI_SR_NSSR_Pos        8                                              /**< (FLEXCOM_FLEX_SPI_SR) NSS Rising (cleared on read) Position */
#define FLEXCOM_FLEX_SPI_SR_NSSR_Msk        (_U_(0x1) << FLEXCOM_FLEX_SPI_SR_NSSR_Pos)     /**< (FLEXCOM_FLEX_SPI_SR) NSS Rising (cleared on read) Mask */
#define FLEXCOM_FLEX_SPI_SR_NSSR            FLEXCOM_FLEX_SPI_SR_NSSR_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_SR_NSSR_Msk instead */
#define FLEXCOM_FLEX_SPI_SR_TXEMPTY_Pos     9                                              /**< (FLEXCOM_FLEX_SPI_SR) Transmission Registers Empty (cleared by writing FLEX_SPI_TDR) Position */
#define FLEXCOM_FLEX_SPI_SR_TXEMPTY_Msk     (_U_(0x1) << FLEXCOM_FLEX_SPI_SR_TXEMPTY_Pos)  /**< (FLEXCOM_FLEX_SPI_SR) Transmission Registers Empty (cleared by writing FLEX_SPI_TDR) Mask */
#define FLEXCOM_FLEX_SPI_SR_TXEMPTY         FLEXCOM_FLEX_SPI_SR_TXEMPTY_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_SR_TXEMPTY_Msk instead */
#define FLEXCOM_FLEX_SPI_SR_UNDES_Pos       10                                             /**< (FLEXCOM_FLEX_SPI_SR) Underrun Error Status (Slave mode only) (cleared on read) Position */
#define FLEXCOM_FLEX_SPI_SR_UNDES_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_SR_UNDES_Pos)    /**< (FLEXCOM_FLEX_SPI_SR) Underrun Error Status (Slave mode only) (cleared on read) Mask */
#define FLEXCOM_FLEX_SPI_SR_UNDES           FLEXCOM_FLEX_SPI_SR_UNDES_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_SR_UNDES_Msk instead */
#define FLEXCOM_FLEX_SPI_SR_CMP_Pos         11                                             /**< (FLEXCOM_FLEX_SPI_SR) Comparison Status (cleared on read) Position */
#define FLEXCOM_FLEX_SPI_SR_CMP_Msk         (_U_(0x1) << FLEXCOM_FLEX_SPI_SR_CMP_Pos)      /**< (FLEXCOM_FLEX_SPI_SR) Comparison Status (cleared on read) Mask */
#define FLEXCOM_FLEX_SPI_SR_CMP             FLEXCOM_FLEX_SPI_SR_CMP_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_SR_CMP_Msk instead */
#define FLEXCOM_FLEX_SPI_SR_SPIENS_Pos      16                                             /**< (FLEXCOM_FLEX_SPI_SR) SPI Enable Status Position */
#define FLEXCOM_FLEX_SPI_SR_SPIENS_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_SR_SPIENS_Pos)   /**< (FLEXCOM_FLEX_SPI_SR) SPI Enable Status Mask */
#define FLEXCOM_FLEX_SPI_SR_SPIENS          FLEXCOM_FLEX_SPI_SR_SPIENS_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_SR_SPIENS_Msk instead */
#define FLEXCOM_FLEX_SPI_SR_TXFEF_Pos       24                                             /**< (FLEXCOM_FLEX_SPI_SR) Transmit FIFO Empty Flag (cleared on read) Position */
#define FLEXCOM_FLEX_SPI_SR_TXFEF_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_SR_TXFEF_Pos)    /**< (FLEXCOM_FLEX_SPI_SR) Transmit FIFO Empty Flag (cleared on read) Mask */
#define FLEXCOM_FLEX_SPI_SR_TXFEF           FLEXCOM_FLEX_SPI_SR_TXFEF_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_SR_TXFEF_Msk instead */
#define FLEXCOM_FLEX_SPI_SR_TXFFF_Pos       25                                             /**< (FLEXCOM_FLEX_SPI_SR) Transmit FIFO Full Flag (cleared on read) Position */
#define FLEXCOM_FLEX_SPI_SR_TXFFF_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_SR_TXFFF_Pos)    /**< (FLEXCOM_FLEX_SPI_SR) Transmit FIFO Full Flag (cleared on read) Mask */
#define FLEXCOM_FLEX_SPI_SR_TXFFF           FLEXCOM_FLEX_SPI_SR_TXFFF_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_SR_TXFFF_Msk instead */
#define FLEXCOM_FLEX_SPI_SR_TXFTHF_Pos      26                                             /**< (FLEXCOM_FLEX_SPI_SR) Transmit FIFO Threshold Flag (cleared on read) Position */
#define FLEXCOM_FLEX_SPI_SR_TXFTHF_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_SR_TXFTHF_Pos)   /**< (FLEXCOM_FLEX_SPI_SR) Transmit FIFO Threshold Flag (cleared on read) Mask */
#define FLEXCOM_FLEX_SPI_SR_TXFTHF          FLEXCOM_FLEX_SPI_SR_TXFTHF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_SR_TXFTHF_Msk instead */
#define FLEXCOM_FLEX_SPI_SR_RXFEF_Pos       27                                             /**< (FLEXCOM_FLEX_SPI_SR) Receive FIFO Empty Flag Position */
#define FLEXCOM_FLEX_SPI_SR_RXFEF_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_SR_RXFEF_Pos)    /**< (FLEXCOM_FLEX_SPI_SR) Receive FIFO Empty Flag Mask */
#define FLEXCOM_FLEX_SPI_SR_RXFEF           FLEXCOM_FLEX_SPI_SR_RXFEF_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_SR_RXFEF_Msk instead */
#define FLEXCOM_FLEX_SPI_SR_RXFFF_Pos       28                                             /**< (FLEXCOM_FLEX_SPI_SR) Receive FIFO Full Flag Position */
#define FLEXCOM_FLEX_SPI_SR_RXFFF_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_SR_RXFFF_Pos)    /**< (FLEXCOM_FLEX_SPI_SR) Receive FIFO Full Flag Mask */
#define FLEXCOM_FLEX_SPI_SR_RXFFF           FLEXCOM_FLEX_SPI_SR_RXFFF_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_SR_RXFFF_Msk instead */
#define FLEXCOM_FLEX_SPI_SR_RXFTHF_Pos      29                                             /**< (FLEXCOM_FLEX_SPI_SR) Receive FIFO Threshold Flag Position */
#define FLEXCOM_FLEX_SPI_SR_RXFTHF_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_SR_RXFTHF_Pos)   /**< (FLEXCOM_FLEX_SPI_SR) Receive FIFO Threshold Flag Mask */
#define FLEXCOM_FLEX_SPI_SR_RXFTHF          FLEXCOM_FLEX_SPI_SR_RXFTHF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_SR_RXFTHF_Msk instead */
#define FLEXCOM_FLEX_SPI_SR_TXFPTEF_Pos     30                                             /**< (FLEXCOM_FLEX_SPI_SR) Transmit FIFO Pointer Error Flag Position */
#define FLEXCOM_FLEX_SPI_SR_TXFPTEF_Msk     (_U_(0x1) << FLEXCOM_FLEX_SPI_SR_TXFPTEF_Pos)  /**< (FLEXCOM_FLEX_SPI_SR) Transmit FIFO Pointer Error Flag Mask */
#define FLEXCOM_FLEX_SPI_SR_TXFPTEF         FLEXCOM_FLEX_SPI_SR_TXFPTEF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_SR_TXFPTEF_Msk instead */
#define FLEXCOM_FLEX_SPI_SR_RXFPTEF_Pos     31                                             /**< (FLEXCOM_FLEX_SPI_SR) Receive FIFO Pointer Error Flag Position */
#define FLEXCOM_FLEX_SPI_SR_RXFPTEF_Msk     (_U_(0x1) << FLEXCOM_FLEX_SPI_SR_RXFPTEF_Pos)  /**< (FLEXCOM_FLEX_SPI_SR) Receive FIFO Pointer Error Flag Mask */
#define FLEXCOM_FLEX_SPI_SR_RXFPTEF         FLEXCOM_FLEX_SPI_SR_RXFPTEF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_SR_RXFPTEF_Msk instead */
#define FLEXCOM_FLEX_SPI_SR_MASK            _U_(0xFF010F0F)                                /**< \deprecated (FLEXCOM_FLEX_SPI_SR) Register MASK  (Use FLEXCOM_FLEX_SPI_SR_Msk instead)  */
#define FLEXCOM_FLEX_SPI_SR_Msk             _U_(0xFF010F0F)                                /**< (FLEXCOM_FLEX_SPI_SR) Register Mask  */


/* -------- FLEXCOM_FLEX_SPI_IER : (FLEXCOM Offset: 0x414) (/W 32) SPI Interrupt Enable Register -------- */
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
} FLEXCOM_FLEX_SPI_IER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_SPI_IER_OFFSET         (0x414)                                       /**<  (FLEXCOM_FLEX_SPI_IER) SPI Interrupt Enable Register  Offset */

#define FLEXCOM_FLEX_SPI_IER_RDRF_Pos       0                                              /**< (FLEXCOM_FLEX_SPI_IER) Receive Data Register Full Interrupt Enable Position */
#define FLEXCOM_FLEX_SPI_IER_RDRF_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_IER_RDRF_Pos)    /**< (FLEXCOM_FLEX_SPI_IER) Receive Data Register Full Interrupt Enable Mask */
#define FLEXCOM_FLEX_SPI_IER_RDRF           FLEXCOM_FLEX_SPI_IER_RDRF_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IER_RDRF_Msk instead */
#define FLEXCOM_FLEX_SPI_IER_TDRE_Pos       1                                              /**< (FLEXCOM_FLEX_SPI_IER) SPI Transmit Data Register Empty Interrupt Enable Position */
#define FLEXCOM_FLEX_SPI_IER_TDRE_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_IER_TDRE_Pos)    /**< (FLEXCOM_FLEX_SPI_IER) SPI Transmit Data Register Empty Interrupt Enable Mask */
#define FLEXCOM_FLEX_SPI_IER_TDRE           FLEXCOM_FLEX_SPI_IER_TDRE_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IER_TDRE_Msk instead */
#define FLEXCOM_FLEX_SPI_IER_MODF_Pos       2                                              /**< (FLEXCOM_FLEX_SPI_IER) Mode Fault Error Interrupt Enable Position */
#define FLEXCOM_FLEX_SPI_IER_MODF_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_IER_MODF_Pos)    /**< (FLEXCOM_FLEX_SPI_IER) Mode Fault Error Interrupt Enable Mask */
#define FLEXCOM_FLEX_SPI_IER_MODF           FLEXCOM_FLEX_SPI_IER_MODF_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IER_MODF_Msk instead */
#define FLEXCOM_FLEX_SPI_IER_OVRES_Pos      3                                              /**< (FLEXCOM_FLEX_SPI_IER) Overrun Error Interrupt Enable Position */
#define FLEXCOM_FLEX_SPI_IER_OVRES_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_IER_OVRES_Pos)   /**< (FLEXCOM_FLEX_SPI_IER) Overrun Error Interrupt Enable Mask */
#define FLEXCOM_FLEX_SPI_IER_OVRES          FLEXCOM_FLEX_SPI_IER_OVRES_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IER_OVRES_Msk instead */
#define FLEXCOM_FLEX_SPI_IER_NSSR_Pos       8                                              /**< (FLEXCOM_FLEX_SPI_IER) NSS Rising Interrupt Enable Position */
#define FLEXCOM_FLEX_SPI_IER_NSSR_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_IER_NSSR_Pos)    /**< (FLEXCOM_FLEX_SPI_IER) NSS Rising Interrupt Enable Mask */
#define FLEXCOM_FLEX_SPI_IER_NSSR           FLEXCOM_FLEX_SPI_IER_NSSR_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IER_NSSR_Msk instead */
#define FLEXCOM_FLEX_SPI_IER_TXEMPTY_Pos    9                                              /**< (FLEXCOM_FLEX_SPI_IER) Transmission Registers Empty Enable Position */
#define FLEXCOM_FLEX_SPI_IER_TXEMPTY_Msk    (_U_(0x1) << FLEXCOM_FLEX_SPI_IER_TXEMPTY_Pos)  /**< (FLEXCOM_FLEX_SPI_IER) Transmission Registers Empty Enable Mask */
#define FLEXCOM_FLEX_SPI_IER_TXEMPTY        FLEXCOM_FLEX_SPI_IER_TXEMPTY_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IER_TXEMPTY_Msk instead */
#define FLEXCOM_FLEX_SPI_IER_UNDES_Pos      10                                             /**< (FLEXCOM_FLEX_SPI_IER) Underrun Error Interrupt Enable Position */
#define FLEXCOM_FLEX_SPI_IER_UNDES_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_IER_UNDES_Pos)   /**< (FLEXCOM_FLEX_SPI_IER) Underrun Error Interrupt Enable Mask */
#define FLEXCOM_FLEX_SPI_IER_UNDES          FLEXCOM_FLEX_SPI_IER_UNDES_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IER_UNDES_Msk instead */
#define FLEXCOM_FLEX_SPI_IER_CMP_Pos        11                                             /**< (FLEXCOM_FLEX_SPI_IER) Comparison Interrupt Enable Position */
#define FLEXCOM_FLEX_SPI_IER_CMP_Msk        (_U_(0x1) << FLEXCOM_FLEX_SPI_IER_CMP_Pos)     /**< (FLEXCOM_FLEX_SPI_IER) Comparison Interrupt Enable Mask */
#define FLEXCOM_FLEX_SPI_IER_CMP            FLEXCOM_FLEX_SPI_IER_CMP_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IER_CMP_Msk instead */
#define FLEXCOM_FLEX_SPI_IER_TXFEF_Pos      24                                             /**< (FLEXCOM_FLEX_SPI_IER) TXFEF Interrupt Enable Position */
#define FLEXCOM_FLEX_SPI_IER_TXFEF_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_IER_TXFEF_Pos)   /**< (FLEXCOM_FLEX_SPI_IER) TXFEF Interrupt Enable Mask */
#define FLEXCOM_FLEX_SPI_IER_TXFEF          FLEXCOM_FLEX_SPI_IER_TXFEF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IER_TXFEF_Msk instead */
#define FLEXCOM_FLEX_SPI_IER_TXFFF_Pos      25                                             /**< (FLEXCOM_FLEX_SPI_IER) TXFFF Interrupt Enable Position */
#define FLEXCOM_FLEX_SPI_IER_TXFFF_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_IER_TXFFF_Pos)   /**< (FLEXCOM_FLEX_SPI_IER) TXFFF Interrupt Enable Mask */
#define FLEXCOM_FLEX_SPI_IER_TXFFF          FLEXCOM_FLEX_SPI_IER_TXFFF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IER_TXFFF_Msk instead */
#define FLEXCOM_FLEX_SPI_IER_TXFTHF_Pos     26                                             /**< (FLEXCOM_FLEX_SPI_IER) TXFTHF Interrupt Enable Position */
#define FLEXCOM_FLEX_SPI_IER_TXFTHF_Msk     (_U_(0x1) << FLEXCOM_FLEX_SPI_IER_TXFTHF_Pos)  /**< (FLEXCOM_FLEX_SPI_IER) TXFTHF Interrupt Enable Mask */
#define FLEXCOM_FLEX_SPI_IER_TXFTHF         FLEXCOM_FLEX_SPI_IER_TXFTHF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IER_TXFTHF_Msk instead */
#define FLEXCOM_FLEX_SPI_IER_RXFEF_Pos      27                                             /**< (FLEXCOM_FLEX_SPI_IER) RXFEF Interrupt Enable Position */
#define FLEXCOM_FLEX_SPI_IER_RXFEF_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_IER_RXFEF_Pos)   /**< (FLEXCOM_FLEX_SPI_IER) RXFEF Interrupt Enable Mask */
#define FLEXCOM_FLEX_SPI_IER_RXFEF          FLEXCOM_FLEX_SPI_IER_RXFEF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IER_RXFEF_Msk instead */
#define FLEXCOM_FLEX_SPI_IER_RXFFF_Pos      28                                             /**< (FLEXCOM_FLEX_SPI_IER) RXFFF Interrupt Enable Position */
#define FLEXCOM_FLEX_SPI_IER_RXFFF_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_IER_RXFFF_Pos)   /**< (FLEXCOM_FLEX_SPI_IER) RXFFF Interrupt Enable Mask */
#define FLEXCOM_FLEX_SPI_IER_RXFFF          FLEXCOM_FLEX_SPI_IER_RXFFF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IER_RXFFF_Msk instead */
#define FLEXCOM_FLEX_SPI_IER_RXFTHF_Pos     29                                             /**< (FLEXCOM_FLEX_SPI_IER) RXFTHF Interrupt Enable Position */
#define FLEXCOM_FLEX_SPI_IER_RXFTHF_Msk     (_U_(0x1) << FLEXCOM_FLEX_SPI_IER_RXFTHF_Pos)  /**< (FLEXCOM_FLEX_SPI_IER) RXFTHF Interrupt Enable Mask */
#define FLEXCOM_FLEX_SPI_IER_RXFTHF         FLEXCOM_FLEX_SPI_IER_RXFTHF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IER_RXFTHF_Msk instead */
#define FLEXCOM_FLEX_SPI_IER_TXFPTEF_Pos    30                                             /**< (FLEXCOM_FLEX_SPI_IER) TXFPTEF Interrupt Enable Position */
#define FLEXCOM_FLEX_SPI_IER_TXFPTEF_Msk    (_U_(0x1) << FLEXCOM_FLEX_SPI_IER_TXFPTEF_Pos)  /**< (FLEXCOM_FLEX_SPI_IER) TXFPTEF Interrupt Enable Mask */
#define FLEXCOM_FLEX_SPI_IER_TXFPTEF        FLEXCOM_FLEX_SPI_IER_TXFPTEF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IER_TXFPTEF_Msk instead */
#define FLEXCOM_FLEX_SPI_IER_RXFPTEF_Pos    31                                             /**< (FLEXCOM_FLEX_SPI_IER) RXFPTEF Interrupt Enable Position */
#define FLEXCOM_FLEX_SPI_IER_RXFPTEF_Msk    (_U_(0x1) << FLEXCOM_FLEX_SPI_IER_RXFPTEF_Pos)  /**< (FLEXCOM_FLEX_SPI_IER) RXFPTEF Interrupt Enable Mask */
#define FLEXCOM_FLEX_SPI_IER_RXFPTEF        FLEXCOM_FLEX_SPI_IER_RXFPTEF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IER_RXFPTEF_Msk instead */
#define FLEXCOM_FLEX_SPI_IER_MASK           _U_(0xFF000F0F)                                /**< \deprecated (FLEXCOM_FLEX_SPI_IER) Register MASK  (Use FLEXCOM_FLEX_SPI_IER_Msk instead)  */
#define FLEXCOM_FLEX_SPI_IER_Msk            _U_(0xFF000F0F)                                /**< (FLEXCOM_FLEX_SPI_IER) Register Mask  */


/* -------- FLEXCOM_FLEX_SPI_IDR : (FLEXCOM Offset: 0x418) (/W 32) SPI Interrupt Disable Register -------- */
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
} FLEXCOM_FLEX_SPI_IDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_SPI_IDR_OFFSET         (0x418)                                       /**<  (FLEXCOM_FLEX_SPI_IDR) SPI Interrupt Disable Register  Offset */

#define FLEXCOM_FLEX_SPI_IDR_RDRF_Pos       0                                              /**< (FLEXCOM_FLEX_SPI_IDR) Receive Data Register Full Interrupt Disable Position */
#define FLEXCOM_FLEX_SPI_IDR_RDRF_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_IDR_RDRF_Pos)    /**< (FLEXCOM_FLEX_SPI_IDR) Receive Data Register Full Interrupt Disable Mask */
#define FLEXCOM_FLEX_SPI_IDR_RDRF           FLEXCOM_FLEX_SPI_IDR_RDRF_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IDR_RDRF_Msk instead */
#define FLEXCOM_FLEX_SPI_IDR_TDRE_Pos       1                                              /**< (FLEXCOM_FLEX_SPI_IDR) SPI Transmit Data Register Empty Interrupt Disable Position */
#define FLEXCOM_FLEX_SPI_IDR_TDRE_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_IDR_TDRE_Pos)    /**< (FLEXCOM_FLEX_SPI_IDR) SPI Transmit Data Register Empty Interrupt Disable Mask */
#define FLEXCOM_FLEX_SPI_IDR_TDRE           FLEXCOM_FLEX_SPI_IDR_TDRE_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IDR_TDRE_Msk instead */
#define FLEXCOM_FLEX_SPI_IDR_MODF_Pos       2                                              /**< (FLEXCOM_FLEX_SPI_IDR) Mode Fault Error Interrupt Disable Position */
#define FLEXCOM_FLEX_SPI_IDR_MODF_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_IDR_MODF_Pos)    /**< (FLEXCOM_FLEX_SPI_IDR) Mode Fault Error Interrupt Disable Mask */
#define FLEXCOM_FLEX_SPI_IDR_MODF           FLEXCOM_FLEX_SPI_IDR_MODF_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IDR_MODF_Msk instead */
#define FLEXCOM_FLEX_SPI_IDR_OVRES_Pos      3                                              /**< (FLEXCOM_FLEX_SPI_IDR) Overrun Error Interrupt Disable Position */
#define FLEXCOM_FLEX_SPI_IDR_OVRES_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_IDR_OVRES_Pos)   /**< (FLEXCOM_FLEX_SPI_IDR) Overrun Error Interrupt Disable Mask */
#define FLEXCOM_FLEX_SPI_IDR_OVRES          FLEXCOM_FLEX_SPI_IDR_OVRES_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IDR_OVRES_Msk instead */
#define FLEXCOM_FLEX_SPI_IDR_NSSR_Pos       8                                              /**< (FLEXCOM_FLEX_SPI_IDR) NSS Rising Interrupt Disable Position */
#define FLEXCOM_FLEX_SPI_IDR_NSSR_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_IDR_NSSR_Pos)    /**< (FLEXCOM_FLEX_SPI_IDR) NSS Rising Interrupt Disable Mask */
#define FLEXCOM_FLEX_SPI_IDR_NSSR           FLEXCOM_FLEX_SPI_IDR_NSSR_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IDR_NSSR_Msk instead */
#define FLEXCOM_FLEX_SPI_IDR_TXEMPTY_Pos    9                                              /**< (FLEXCOM_FLEX_SPI_IDR) Transmission Registers Empty Disable Position */
#define FLEXCOM_FLEX_SPI_IDR_TXEMPTY_Msk    (_U_(0x1) << FLEXCOM_FLEX_SPI_IDR_TXEMPTY_Pos)  /**< (FLEXCOM_FLEX_SPI_IDR) Transmission Registers Empty Disable Mask */
#define FLEXCOM_FLEX_SPI_IDR_TXEMPTY        FLEXCOM_FLEX_SPI_IDR_TXEMPTY_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IDR_TXEMPTY_Msk instead */
#define FLEXCOM_FLEX_SPI_IDR_UNDES_Pos      10                                             /**< (FLEXCOM_FLEX_SPI_IDR) Underrun Error Interrupt Disable Position */
#define FLEXCOM_FLEX_SPI_IDR_UNDES_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_IDR_UNDES_Pos)   /**< (FLEXCOM_FLEX_SPI_IDR) Underrun Error Interrupt Disable Mask */
#define FLEXCOM_FLEX_SPI_IDR_UNDES          FLEXCOM_FLEX_SPI_IDR_UNDES_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IDR_UNDES_Msk instead */
#define FLEXCOM_FLEX_SPI_IDR_CMP_Pos        11                                             /**< (FLEXCOM_FLEX_SPI_IDR) Comparison Interrupt Disable Position */
#define FLEXCOM_FLEX_SPI_IDR_CMP_Msk        (_U_(0x1) << FLEXCOM_FLEX_SPI_IDR_CMP_Pos)     /**< (FLEXCOM_FLEX_SPI_IDR) Comparison Interrupt Disable Mask */
#define FLEXCOM_FLEX_SPI_IDR_CMP            FLEXCOM_FLEX_SPI_IDR_CMP_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IDR_CMP_Msk instead */
#define FLEXCOM_FLEX_SPI_IDR_TXFEF_Pos      24                                             /**< (FLEXCOM_FLEX_SPI_IDR) TXFEF Interrupt Disable Position */
#define FLEXCOM_FLEX_SPI_IDR_TXFEF_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_IDR_TXFEF_Pos)   /**< (FLEXCOM_FLEX_SPI_IDR) TXFEF Interrupt Disable Mask */
#define FLEXCOM_FLEX_SPI_IDR_TXFEF          FLEXCOM_FLEX_SPI_IDR_TXFEF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IDR_TXFEF_Msk instead */
#define FLEXCOM_FLEX_SPI_IDR_TXFFF_Pos      25                                             /**< (FLEXCOM_FLEX_SPI_IDR) TXFFF Interrupt Disable Position */
#define FLEXCOM_FLEX_SPI_IDR_TXFFF_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_IDR_TXFFF_Pos)   /**< (FLEXCOM_FLEX_SPI_IDR) TXFFF Interrupt Disable Mask */
#define FLEXCOM_FLEX_SPI_IDR_TXFFF          FLEXCOM_FLEX_SPI_IDR_TXFFF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IDR_TXFFF_Msk instead */
#define FLEXCOM_FLEX_SPI_IDR_TXFTHF_Pos     26                                             /**< (FLEXCOM_FLEX_SPI_IDR) TXFTHF Interrupt Disable Position */
#define FLEXCOM_FLEX_SPI_IDR_TXFTHF_Msk     (_U_(0x1) << FLEXCOM_FLEX_SPI_IDR_TXFTHF_Pos)  /**< (FLEXCOM_FLEX_SPI_IDR) TXFTHF Interrupt Disable Mask */
#define FLEXCOM_FLEX_SPI_IDR_TXFTHF         FLEXCOM_FLEX_SPI_IDR_TXFTHF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IDR_TXFTHF_Msk instead */
#define FLEXCOM_FLEX_SPI_IDR_RXFEF_Pos      27                                             /**< (FLEXCOM_FLEX_SPI_IDR) RXFEF Interrupt Disable Position */
#define FLEXCOM_FLEX_SPI_IDR_RXFEF_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_IDR_RXFEF_Pos)   /**< (FLEXCOM_FLEX_SPI_IDR) RXFEF Interrupt Disable Mask */
#define FLEXCOM_FLEX_SPI_IDR_RXFEF          FLEXCOM_FLEX_SPI_IDR_RXFEF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IDR_RXFEF_Msk instead */
#define FLEXCOM_FLEX_SPI_IDR_RXFFF_Pos      28                                             /**< (FLEXCOM_FLEX_SPI_IDR) RXFFF Interrupt Disable Position */
#define FLEXCOM_FLEX_SPI_IDR_RXFFF_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_IDR_RXFFF_Pos)   /**< (FLEXCOM_FLEX_SPI_IDR) RXFFF Interrupt Disable Mask */
#define FLEXCOM_FLEX_SPI_IDR_RXFFF          FLEXCOM_FLEX_SPI_IDR_RXFFF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IDR_RXFFF_Msk instead */
#define FLEXCOM_FLEX_SPI_IDR_RXFTHF_Pos     29                                             /**< (FLEXCOM_FLEX_SPI_IDR) RXFTHF Interrupt Disable Position */
#define FLEXCOM_FLEX_SPI_IDR_RXFTHF_Msk     (_U_(0x1) << FLEXCOM_FLEX_SPI_IDR_RXFTHF_Pos)  /**< (FLEXCOM_FLEX_SPI_IDR) RXFTHF Interrupt Disable Mask */
#define FLEXCOM_FLEX_SPI_IDR_RXFTHF         FLEXCOM_FLEX_SPI_IDR_RXFTHF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IDR_RXFTHF_Msk instead */
#define FLEXCOM_FLEX_SPI_IDR_TXFPTEF_Pos    30                                             /**< (FLEXCOM_FLEX_SPI_IDR) TXFPTEF Interrupt Disable Position */
#define FLEXCOM_FLEX_SPI_IDR_TXFPTEF_Msk    (_U_(0x1) << FLEXCOM_FLEX_SPI_IDR_TXFPTEF_Pos)  /**< (FLEXCOM_FLEX_SPI_IDR) TXFPTEF Interrupt Disable Mask */
#define FLEXCOM_FLEX_SPI_IDR_TXFPTEF        FLEXCOM_FLEX_SPI_IDR_TXFPTEF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IDR_TXFPTEF_Msk instead */
#define FLEXCOM_FLEX_SPI_IDR_RXFPTEF_Pos    31                                             /**< (FLEXCOM_FLEX_SPI_IDR) RXFPTEF Interrupt Disable Position */
#define FLEXCOM_FLEX_SPI_IDR_RXFPTEF_Msk    (_U_(0x1) << FLEXCOM_FLEX_SPI_IDR_RXFPTEF_Pos)  /**< (FLEXCOM_FLEX_SPI_IDR) RXFPTEF Interrupt Disable Mask */
#define FLEXCOM_FLEX_SPI_IDR_RXFPTEF        FLEXCOM_FLEX_SPI_IDR_RXFPTEF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IDR_RXFPTEF_Msk instead */
#define FLEXCOM_FLEX_SPI_IDR_MASK           _U_(0xFF000F0F)                                /**< \deprecated (FLEXCOM_FLEX_SPI_IDR) Register MASK  (Use FLEXCOM_FLEX_SPI_IDR_Msk instead)  */
#define FLEXCOM_FLEX_SPI_IDR_Msk            _U_(0xFF000F0F)                                /**< (FLEXCOM_FLEX_SPI_IDR) Register Mask  */


/* -------- FLEXCOM_FLEX_SPI_IMR : (FLEXCOM Offset: 0x41c) (R/ 32) SPI Interrupt Mask Register -------- */
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
} FLEXCOM_FLEX_SPI_IMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_SPI_IMR_OFFSET         (0x41C)                                       /**<  (FLEXCOM_FLEX_SPI_IMR) SPI Interrupt Mask Register  Offset */

#define FLEXCOM_FLEX_SPI_IMR_RDRF_Pos       0                                              /**< (FLEXCOM_FLEX_SPI_IMR) Receive Data Register Full Interrupt Mask Position */
#define FLEXCOM_FLEX_SPI_IMR_RDRF_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_IMR_RDRF_Pos)    /**< (FLEXCOM_FLEX_SPI_IMR) Receive Data Register Full Interrupt Mask Mask */
#define FLEXCOM_FLEX_SPI_IMR_RDRF           FLEXCOM_FLEX_SPI_IMR_RDRF_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IMR_RDRF_Msk instead */
#define FLEXCOM_FLEX_SPI_IMR_TDRE_Pos       1                                              /**< (FLEXCOM_FLEX_SPI_IMR) SPI Transmit Data Register Empty Interrupt Mask Position */
#define FLEXCOM_FLEX_SPI_IMR_TDRE_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_IMR_TDRE_Pos)    /**< (FLEXCOM_FLEX_SPI_IMR) SPI Transmit Data Register Empty Interrupt Mask Mask */
#define FLEXCOM_FLEX_SPI_IMR_TDRE           FLEXCOM_FLEX_SPI_IMR_TDRE_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IMR_TDRE_Msk instead */
#define FLEXCOM_FLEX_SPI_IMR_MODF_Pos       2                                              /**< (FLEXCOM_FLEX_SPI_IMR) Mode Fault Error Interrupt Mask Position */
#define FLEXCOM_FLEX_SPI_IMR_MODF_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_IMR_MODF_Pos)    /**< (FLEXCOM_FLEX_SPI_IMR) Mode Fault Error Interrupt Mask Mask */
#define FLEXCOM_FLEX_SPI_IMR_MODF           FLEXCOM_FLEX_SPI_IMR_MODF_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IMR_MODF_Msk instead */
#define FLEXCOM_FLEX_SPI_IMR_OVRES_Pos      3                                              /**< (FLEXCOM_FLEX_SPI_IMR) Overrun Error Interrupt Mask Position */
#define FLEXCOM_FLEX_SPI_IMR_OVRES_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_IMR_OVRES_Pos)   /**< (FLEXCOM_FLEX_SPI_IMR) Overrun Error Interrupt Mask Mask */
#define FLEXCOM_FLEX_SPI_IMR_OVRES          FLEXCOM_FLEX_SPI_IMR_OVRES_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IMR_OVRES_Msk instead */
#define FLEXCOM_FLEX_SPI_IMR_NSSR_Pos       8                                              /**< (FLEXCOM_FLEX_SPI_IMR) NSS Rising Interrupt Mask Position */
#define FLEXCOM_FLEX_SPI_IMR_NSSR_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_IMR_NSSR_Pos)    /**< (FLEXCOM_FLEX_SPI_IMR) NSS Rising Interrupt Mask Mask */
#define FLEXCOM_FLEX_SPI_IMR_NSSR           FLEXCOM_FLEX_SPI_IMR_NSSR_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IMR_NSSR_Msk instead */
#define FLEXCOM_FLEX_SPI_IMR_TXEMPTY_Pos    9                                              /**< (FLEXCOM_FLEX_SPI_IMR) Transmission Registers Empty Mask Position */
#define FLEXCOM_FLEX_SPI_IMR_TXEMPTY_Msk    (_U_(0x1) << FLEXCOM_FLEX_SPI_IMR_TXEMPTY_Pos)  /**< (FLEXCOM_FLEX_SPI_IMR) Transmission Registers Empty Mask Mask */
#define FLEXCOM_FLEX_SPI_IMR_TXEMPTY        FLEXCOM_FLEX_SPI_IMR_TXEMPTY_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IMR_TXEMPTY_Msk instead */
#define FLEXCOM_FLEX_SPI_IMR_UNDES_Pos      10                                             /**< (FLEXCOM_FLEX_SPI_IMR) Underrun Error Interrupt Mask Position */
#define FLEXCOM_FLEX_SPI_IMR_UNDES_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_IMR_UNDES_Pos)   /**< (FLEXCOM_FLEX_SPI_IMR) Underrun Error Interrupt Mask Mask */
#define FLEXCOM_FLEX_SPI_IMR_UNDES          FLEXCOM_FLEX_SPI_IMR_UNDES_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IMR_UNDES_Msk instead */
#define FLEXCOM_FLEX_SPI_IMR_CMP_Pos        11                                             /**< (FLEXCOM_FLEX_SPI_IMR) Comparison Interrupt Mask Position */
#define FLEXCOM_FLEX_SPI_IMR_CMP_Msk        (_U_(0x1) << FLEXCOM_FLEX_SPI_IMR_CMP_Pos)     /**< (FLEXCOM_FLEX_SPI_IMR) Comparison Interrupt Mask Mask */
#define FLEXCOM_FLEX_SPI_IMR_CMP            FLEXCOM_FLEX_SPI_IMR_CMP_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IMR_CMP_Msk instead */
#define FLEXCOM_FLEX_SPI_IMR_TXFEF_Pos      24                                             /**< (FLEXCOM_FLEX_SPI_IMR) TXFEF Interrupt Mask Position */
#define FLEXCOM_FLEX_SPI_IMR_TXFEF_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_IMR_TXFEF_Pos)   /**< (FLEXCOM_FLEX_SPI_IMR) TXFEF Interrupt Mask Mask */
#define FLEXCOM_FLEX_SPI_IMR_TXFEF          FLEXCOM_FLEX_SPI_IMR_TXFEF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IMR_TXFEF_Msk instead */
#define FLEXCOM_FLEX_SPI_IMR_TXFFF_Pos      25                                             /**< (FLEXCOM_FLEX_SPI_IMR) TXFFF Interrupt Mask Position */
#define FLEXCOM_FLEX_SPI_IMR_TXFFF_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_IMR_TXFFF_Pos)   /**< (FLEXCOM_FLEX_SPI_IMR) TXFFF Interrupt Mask Mask */
#define FLEXCOM_FLEX_SPI_IMR_TXFFF          FLEXCOM_FLEX_SPI_IMR_TXFFF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IMR_TXFFF_Msk instead */
#define FLEXCOM_FLEX_SPI_IMR_TXFTHF_Pos     26                                             /**< (FLEXCOM_FLEX_SPI_IMR) TXFTHF Interrupt Mask Position */
#define FLEXCOM_FLEX_SPI_IMR_TXFTHF_Msk     (_U_(0x1) << FLEXCOM_FLEX_SPI_IMR_TXFTHF_Pos)  /**< (FLEXCOM_FLEX_SPI_IMR) TXFTHF Interrupt Mask Mask */
#define FLEXCOM_FLEX_SPI_IMR_TXFTHF         FLEXCOM_FLEX_SPI_IMR_TXFTHF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IMR_TXFTHF_Msk instead */
#define FLEXCOM_FLEX_SPI_IMR_RXFEF_Pos      27                                             /**< (FLEXCOM_FLEX_SPI_IMR) RXFEF Interrupt Mask Position */
#define FLEXCOM_FLEX_SPI_IMR_RXFEF_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_IMR_RXFEF_Pos)   /**< (FLEXCOM_FLEX_SPI_IMR) RXFEF Interrupt Mask Mask */
#define FLEXCOM_FLEX_SPI_IMR_RXFEF          FLEXCOM_FLEX_SPI_IMR_RXFEF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IMR_RXFEF_Msk instead */
#define FLEXCOM_FLEX_SPI_IMR_RXFFF_Pos      28                                             /**< (FLEXCOM_FLEX_SPI_IMR) RXFFF Interrupt Mask Position */
#define FLEXCOM_FLEX_SPI_IMR_RXFFF_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_IMR_RXFFF_Pos)   /**< (FLEXCOM_FLEX_SPI_IMR) RXFFF Interrupt Mask Mask */
#define FLEXCOM_FLEX_SPI_IMR_RXFFF          FLEXCOM_FLEX_SPI_IMR_RXFFF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IMR_RXFFF_Msk instead */
#define FLEXCOM_FLEX_SPI_IMR_RXFTHF_Pos     29                                             /**< (FLEXCOM_FLEX_SPI_IMR) RXFTHF Interrupt Mask Position */
#define FLEXCOM_FLEX_SPI_IMR_RXFTHF_Msk     (_U_(0x1) << FLEXCOM_FLEX_SPI_IMR_RXFTHF_Pos)  /**< (FLEXCOM_FLEX_SPI_IMR) RXFTHF Interrupt Mask Mask */
#define FLEXCOM_FLEX_SPI_IMR_RXFTHF         FLEXCOM_FLEX_SPI_IMR_RXFTHF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IMR_RXFTHF_Msk instead */
#define FLEXCOM_FLEX_SPI_IMR_TXFPTEF_Pos    30                                             /**< (FLEXCOM_FLEX_SPI_IMR) TXFPTEF Interrupt Mask Position */
#define FLEXCOM_FLEX_SPI_IMR_TXFPTEF_Msk    (_U_(0x1) << FLEXCOM_FLEX_SPI_IMR_TXFPTEF_Pos)  /**< (FLEXCOM_FLEX_SPI_IMR) TXFPTEF Interrupt Mask Mask */
#define FLEXCOM_FLEX_SPI_IMR_TXFPTEF        FLEXCOM_FLEX_SPI_IMR_TXFPTEF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IMR_TXFPTEF_Msk instead */
#define FLEXCOM_FLEX_SPI_IMR_RXFPTEF_Pos    31                                             /**< (FLEXCOM_FLEX_SPI_IMR) RXFPTEF Interrupt Mask Position */
#define FLEXCOM_FLEX_SPI_IMR_RXFPTEF_Msk    (_U_(0x1) << FLEXCOM_FLEX_SPI_IMR_RXFPTEF_Pos)  /**< (FLEXCOM_FLEX_SPI_IMR) RXFPTEF Interrupt Mask Mask */
#define FLEXCOM_FLEX_SPI_IMR_RXFPTEF        FLEXCOM_FLEX_SPI_IMR_RXFPTEF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_IMR_RXFPTEF_Msk instead */
#define FLEXCOM_FLEX_SPI_IMR_MASK           _U_(0xFF000F0F)                                /**< \deprecated (FLEXCOM_FLEX_SPI_IMR) Register MASK  (Use FLEXCOM_FLEX_SPI_IMR_Msk instead)  */
#define FLEXCOM_FLEX_SPI_IMR_Msk            _U_(0xFF000F0F)                                /**< (FLEXCOM_FLEX_SPI_IMR) Register Mask  */


/* -------- FLEXCOM_FLEX_SPI_CSR : (FLEXCOM Offset: 0x430) (R/W 32) SPI Chip Select Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CPOL:1;                    /**< bit:      0  Clock Polarity                           */
    uint32_t NCPHA:1;                   /**< bit:      1  Clock Phase                              */
    uint32_t CSNAAT:1;                  /**< bit:      2  Chip Select Not Active After Transfer (Ignored if CSAAT = 1) */
    uint32_t CSAAT:1;                   /**< bit:      3  Chip Select Active After Transfer        */
    uint32_t BITS:4;                    /**< bit:   4..7  Bits Per Transfer                        */
    uint32_t SCBR:8;                    /**< bit:  8..15  Serial Clock Bit Rate                    */
    uint32_t DLYBS:8;                   /**< bit: 16..23  Delay Before SPCK                        */
    uint32_t DLYBCT:8;                  /**< bit: 24..31  Delay Between Consecutive Transfers      */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_SPI_CSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_SPI_CSR_OFFSET         (0x430)                                       /**<  (FLEXCOM_FLEX_SPI_CSR) SPI Chip Select Register  Offset */

#define FLEXCOM_FLEX_SPI_CSR_CPOL_Pos       0                                              /**< (FLEXCOM_FLEX_SPI_CSR) Clock Polarity Position */
#define FLEXCOM_FLEX_SPI_CSR_CPOL_Msk       (_U_(0x1) << FLEXCOM_FLEX_SPI_CSR_CPOL_Pos)    /**< (FLEXCOM_FLEX_SPI_CSR) Clock Polarity Mask */
#define FLEXCOM_FLEX_SPI_CSR_CPOL           FLEXCOM_FLEX_SPI_CSR_CPOL_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_CSR_CPOL_Msk instead */
#define FLEXCOM_FLEX_SPI_CSR_NCPHA_Pos      1                                              /**< (FLEXCOM_FLEX_SPI_CSR) Clock Phase Position */
#define FLEXCOM_FLEX_SPI_CSR_NCPHA_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_CSR_NCPHA_Pos)   /**< (FLEXCOM_FLEX_SPI_CSR) Clock Phase Mask */
#define FLEXCOM_FLEX_SPI_CSR_NCPHA          FLEXCOM_FLEX_SPI_CSR_NCPHA_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_CSR_NCPHA_Msk instead */
#define FLEXCOM_FLEX_SPI_CSR_CSNAAT_Pos     2                                              /**< (FLEXCOM_FLEX_SPI_CSR) Chip Select Not Active After Transfer (Ignored if CSAAT = 1) Position */
#define FLEXCOM_FLEX_SPI_CSR_CSNAAT_Msk     (_U_(0x1) << FLEXCOM_FLEX_SPI_CSR_CSNAAT_Pos)  /**< (FLEXCOM_FLEX_SPI_CSR) Chip Select Not Active After Transfer (Ignored if CSAAT = 1) Mask */
#define FLEXCOM_FLEX_SPI_CSR_CSNAAT         FLEXCOM_FLEX_SPI_CSR_CSNAAT_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_CSR_CSNAAT_Msk instead */
#define FLEXCOM_FLEX_SPI_CSR_CSAAT_Pos      3                                              /**< (FLEXCOM_FLEX_SPI_CSR) Chip Select Active After Transfer Position */
#define FLEXCOM_FLEX_SPI_CSR_CSAAT_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_CSR_CSAAT_Pos)   /**< (FLEXCOM_FLEX_SPI_CSR) Chip Select Active After Transfer Mask */
#define FLEXCOM_FLEX_SPI_CSR_CSAAT          FLEXCOM_FLEX_SPI_CSR_CSAAT_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_CSR_CSAAT_Msk instead */
#define FLEXCOM_FLEX_SPI_CSR_BITS_Pos       4                                              /**< (FLEXCOM_FLEX_SPI_CSR) Bits Per Transfer Position */
#define FLEXCOM_FLEX_SPI_CSR_BITS_Msk       (_U_(0xF) << FLEXCOM_FLEX_SPI_CSR_BITS_Pos)    /**< (FLEXCOM_FLEX_SPI_CSR) Bits Per Transfer Mask */
#define FLEXCOM_FLEX_SPI_CSR_BITS(value)    (FLEXCOM_FLEX_SPI_CSR_BITS_Msk & ((value) << FLEXCOM_FLEX_SPI_CSR_BITS_Pos))
#define   FLEXCOM_FLEX_SPI_CSR_BITS_8_BIT_Val _U_(0x0)                                       /**< (FLEXCOM_FLEX_SPI_CSR) 8 bits for transfer  */
#define   FLEXCOM_FLEX_SPI_CSR_BITS_9_BIT_Val _U_(0x1)                                       /**< (FLEXCOM_FLEX_SPI_CSR) 9 bits for transfer  */
#define   FLEXCOM_FLEX_SPI_CSR_BITS_10_BIT_Val _U_(0x2)                                       /**< (FLEXCOM_FLEX_SPI_CSR) 10 bits for transfer  */
#define   FLEXCOM_FLEX_SPI_CSR_BITS_11_BIT_Val _U_(0x3)                                       /**< (FLEXCOM_FLEX_SPI_CSR) 11 bits for transfer  */
#define   FLEXCOM_FLEX_SPI_CSR_BITS_12_BIT_Val _U_(0x4)                                       /**< (FLEXCOM_FLEX_SPI_CSR) 12 bits for transfer  */
#define   FLEXCOM_FLEX_SPI_CSR_BITS_13_BIT_Val _U_(0x5)                                       /**< (FLEXCOM_FLEX_SPI_CSR) 13 bits for transfer  */
#define   FLEXCOM_FLEX_SPI_CSR_BITS_14_BIT_Val _U_(0x6)                                       /**< (FLEXCOM_FLEX_SPI_CSR) 14 bits for transfer  */
#define   FLEXCOM_FLEX_SPI_CSR_BITS_15_BIT_Val _U_(0x7)                                       /**< (FLEXCOM_FLEX_SPI_CSR) 15 bits for transfer  */
#define   FLEXCOM_FLEX_SPI_CSR_BITS_16_BIT_Val _U_(0x8)                                       /**< (FLEXCOM_FLEX_SPI_CSR) 16 bits for transfer  */
#define FLEXCOM_FLEX_SPI_CSR_BITS_8_BIT     (FLEXCOM_FLEX_SPI_CSR_BITS_8_BIT_Val << FLEXCOM_FLEX_SPI_CSR_BITS_Pos)  /**< (FLEXCOM_FLEX_SPI_CSR) 8 bits for transfer Position  */
#define FLEXCOM_FLEX_SPI_CSR_BITS_9_BIT     (FLEXCOM_FLEX_SPI_CSR_BITS_9_BIT_Val << FLEXCOM_FLEX_SPI_CSR_BITS_Pos)  /**< (FLEXCOM_FLEX_SPI_CSR) 9 bits for transfer Position  */
#define FLEXCOM_FLEX_SPI_CSR_BITS_10_BIT    (FLEXCOM_FLEX_SPI_CSR_BITS_10_BIT_Val << FLEXCOM_FLEX_SPI_CSR_BITS_Pos)  /**< (FLEXCOM_FLEX_SPI_CSR) 10 bits for transfer Position  */
#define FLEXCOM_FLEX_SPI_CSR_BITS_11_BIT    (FLEXCOM_FLEX_SPI_CSR_BITS_11_BIT_Val << FLEXCOM_FLEX_SPI_CSR_BITS_Pos)  /**< (FLEXCOM_FLEX_SPI_CSR) 11 bits for transfer Position  */
#define FLEXCOM_FLEX_SPI_CSR_BITS_12_BIT    (FLEXCOM_FLEX_SPI_CSR_BITS_12_BIT_Val << FLEXCOM_FLEX_SPI_CSR_BITS_Pos)  /**< (FLEXCOM_FLEX_SPI_CSR) 12 bits for transfer Position  */
#define FLEXCOM_FLEX_SPI_CSR_BITS_13_BIT    (FLEXCOM_FLEX_SPI_CSR_BITS_13_BIT_Val << FLEXCOM_FLEX_SPI_CSR_BITS_Pos)  /**< (FLEXCOM_FLEX_SPI_CSR) 13 bits for transfer Position  */
#define FLEXCOM_FLEX_SPI_CSR_BITS_14_BIT    (FLEXCOM_FLEX_SPI_CSR_BITS_14_BIT_Val << FLEXCOM_FLEX_SPI_CSR_BITS_Pos)  /**< (FLEXCOM_FLEX_SPI_CSR) 14 bits for transfer Position  */
#define FLEXCOM_FLEX_SPI_CSR_BITS_15_BIT    (FLEXCOM_FLEX_SPI_CSR_BITS_15_BIT_Val << FLEXCOM_FLEX_SPI_CSR_BITS_Pos)  /**< (FLEXCOM_FLEX_SPI_CSR) 15 bits for transfer Position  */
#define FLEXCOM_FLEX_SPI_CSR_BITS_16_BIT    (FLEXCOM_FLEX_SPI_CSR_BITS_16_BIT_Val << FLEXCOM_FLEX_SPI_CSR_BITS_Pos)  /**< (FLEXCOM_FLEX_SPI_CSR) 16 bits for transfer Position  */
#define FLEXCOM_FLEX_SPI_CSR_SCBR_Pos       8                                              /**< (FLEXCOM_FLEX_SPI_CSR) Serial Clock Bit Rate Position */
#define FLEXCOM_FLEX_SPI_CSR_SCBR_Msk       (_U_(0xFF) << FLEXCOM_FLEX_SPI_CSR_SCBR_Pos)   /**< (FLEXCOM_FLEX_SPI_CSR) Serial Clock Bit Rate Mask */
#define FLEXCOM_FLEX_SPI_CSR_SCBR(value)    (FLEXCOM_FLEX_SPI_CSR_SCBR_Msk & ((value) << FLEXCOM_FLEX_SPI_CSR_SCBR_Pos))
#define FLEXCOM_FLEX_SPI_CSR_DLYBS_Pos      16                                             /**< (FLEXCOM_FLEX_SPI_CSR) Delay Before SPCK Position */
#define FLEXCOM_FLEX_SPI_CSR_DLYBS_Msk      (_U_(0xFF) << FLEXCOM_FLEX_SPI_CSR_DLYBS_Pos)  /**< (FLEXCOM_FLEX_SPI_CSR) Delay Before SPCK Mask */
#define FLEXCOM_FLEX_SPI_CSR_DLYBS(value)   (FLEXCOM_FLEX_SPI_CSR_DLYBS_Msk & ((value) << FLEXCOM_FLEX_SPI_CSR_DLYBS_Pos))
#define FLEXCOM_FLEX_SPI_CSR_DLYBCT_Pos     24                                             /**< (FLEXCOM_FLEX_SPI_CSR) Delay Between Consecutive Transfers Position */
#define FLEXCOM_FLEX_SPI_CSR_DLYBCT_Msk     (_U_(0xFF) << FLEXCOM_FLEX_SPI_CSR_DLYBCT_Pos)  /**< (FLEXCOM_FLEX_SPI_CSR) Delay Between Consecutive Transfers Mask */
#define FLEXCOM_FLEX_SPI_CSR_DLYBCT(value)  (FLEXCOM_FLEX_SPI_CSR_DLYBCT_Msk & ((value) << FLEXCOM_FLEX_SPI_CSR_DLYBCT_Pos))
#define FLEXCOM_FLEX_SPI_CSR_MASK           _U_(0xFFFFFFFF)                                /**< \deprecated (FLEXCOM_FLEX_SPI_CSR) Register MASK  (Use FLEXCOM_FLEX_SPI_CSR_Msk instead)  */
#define FLEXCOM_FLEX_SPI_CSR_Msk            _U_(0xFFFFFFFF)                                /**< (FLEXCOM_FLEX_SPI_CSR) Register Mask  */


/* -------- FLEXCOM_FLEX_SPI_FMR : (FLEXCOM Offset: 0x440) (R/W 32) SPI FIFO Mode Register -------- */
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
} FLEXCOM_FLEX_SPI_FMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_SPI_FMR_OFFSET         (0x440)                                       /**<  (FLEXCOM_FLEX_SPI_FMR) SPI FIFO Mode Register  Offset */

#define FLEXCOM_FLEX_SPI_FMR_TXRDYM_Pos     0                                              /**< (FLEXCOM_FLEX_SPI_FMR) Transmit Data Register Empty Mode Position */
#define FLEXCOM_FLEX_SPI_FMR_TXRDYM_Msk     (_U_(0x3) << FLEXCOM_FLEX_SPI_FMR_TXRDYM_Pos)  /**< (FLEXCOM_FLEX_SPI_FMR) Transmit Data Register Empty Mode Mask */
#define FLEXCOM_FLEX_SPI_FMR_TXRDYM(value)  (FLEXCOM_FLEX_SPI_FMR_TXRDYM_Msk & ((value) << FLEXCOM_FLEX_SPI_FMR_TXRDYM_Pos))
#define   FLEXCOM_FLEX_SPI_FMR_TXRDYM_ONE_DATA_Val _U_(0x0)                                       /**< (FLEXCOM_FLEX_SPI_FMR) TDRE will be at level '1' when at least one data can be written in the Transmit FIFO.  */
#define   FLEXCOM_FLEX_SPI_FMR_TXRDYM_TWO_DATA_Val _U_(0x1)                                       /**< (FLEXCOM_FLEX_SPI_FMR) TDRE will be at level '1' when at least two data can be written in the Transmit FIFO.Cannot be used if FLEX_SPI_MR.PS =1.  */
#define FLEXCOM_FLEX_SPI_FMR_TXRDYM_ONE_DATA (FLEXCOM_FLEX_SPI_FMR_TXRDYM_ONE_DATA_Val << FLEXCOM_FLEX_SPI_FMR_TXRDYM_Pos)  /**< (FLEXCOM_FLEX_SPI_FMR) TDRE will be at level '1' when at least one data can be written in the Transmit FIFO. Position  */
#define FLEXCOM_FLEX_SPI_FMR_TXRDYM_TWO_DATA (FLEXCOM_FLEX_SPI_FMR_TXRDYM_TWO_DATA_Val << FLEXCOM_FLEX_SPI_FMR_TXRDYM_Pos)  /**< (FLEXCOM_FLEX_SPI_FMR) TDRE will be at level '1' when at least two data can be written in the Transmit FIFO.Cannot be used if FLEX_SPI_MR.PS =1. Position  */
#define FLEXCOM_FLEX_SPI_FMR_RXRDYM_Pos     4                                              /**< (FLEXCOM_FLEX_SPI_FMR) Receive Data Register Full Mode Position */
#define FLEXCOM_FLEX_SPI_FMR_RXRDYM_Msk     (_U_(0x3) << FLEXCOM_FLEX_SPI_FMR_RXRDYM_Pos)  /**< (FLEXCOM_FLEX_SPI_FMR) Receive Data Register Full Mode Mask */
#define FLEXCOM_FLEX_SPI_FMR_RXRDYM(value)  (FLEXCOM_FLEX_SPI_FMR_RXRDYM_Msk & ((value) << FLEXCOM_FLEX_SPI_FMR_RXRDYM_Pos))
#define   FLEXCOM_FLEX_SPI_FMR_RXRDYM_ONE_DATA_Val _U_(0x0)                                       /**< (FLEXCOM_FLEX_SPI_FMR) RDRF will be at level '1' when at least one unread data is in the Receive FIFO.  */
#define   FLEXCOM_FLEX_SPI_FMR_RXRDYM_TWO_DATA_Val _U_(0x1)                                       /**< (FLEXCOM_FLEX_SPI_FMR) RDRF will be at level '1' when at least two unread data are in the Receive FIFO.Cannot be used if FLEX_SPI_MR.PS =1.  */
#define   FLEXCOM_FLEX_SPI_FMR_RXRDYM_FOUR_DATA_Val _U_(0x2)                                       /**< (FLEXCOM_FLEX_SPI_FMR) RDRF will be at level '1' when at least four unread data are in the Receive FIFO.Cannot be used when FLEX_SPI_CSRx.BITS is greater than 0, or if FLEX_SPI_MR.MSTR =1, or if FLEX_SPI_MR.PS =1.  */
#define FLEXCOM_FLEX_SPI_FMR_RXRDYM_ONE_DATA (FLEXCOM_FLEX_SPI_FMR_RXRDYM_ONE_DATA_Val << FLEXCOM_FLEX_SPI_FMR_RXRDYM_Pos)  /**< (FLEXCOM_FLEX_SPI_FMR) RDRF will be at level '1' when at least one unread data is in the Receive FIFO. Position  */
#define FLEXCOM_FLEX_SPI_FMR_RXRDYM_TWO_DATA (FLEXCOM_FLEX_SPI_FMR_RXRDYM_TWO_DATA_Val << FLEXCOM_FLEX_SPI_FMR_RXRDYM_Pos)  /**< (FLEXCOM_FLEX_SPI_FMR) RDRF will be at level '1' when at least two unread data are in the Receive FIFO.Cannot be used if FLEX_SPI_MR.PS =1. Position  */
#define FLEXCOM_FLEX_SPI_FMR_RXRDYM_FOUR_DATA (FLEXCOM_FLEX_SPI_FMR_RXRDYM_FOUR_DATA_Val << FLEXCOM_FLEX_SPI_FMR_RXRDYM_Pos)  /**< (FLEXCOM_FLEX_SPI_FMR) RDRF will be at level '1' when at least four unread data are in the Receive FIFO.Cannot be used when FLEX_SPI_CSRx.BITS is greater than 0, or if FLEX_SPI_MR.MSTR =1, or if FLEX_SPI_MR.PS =1. Position  */
#define FLEXCOM_FLEX_SPI_FMR_TXFTHRES_Pos   16                                             /**< (FLEXCOM_FLEX_SPI_FMR) Transmit FIFO Threshold Position */
#define FLEXCOM_FLEX_SPI_FMR_TXFTHRES_Msk   (_U_(0x3F) << FLEXCOM_FLEX_SPI_FMR_TXFTHRES_Pos)  /**< (FLEXCOM_FLEX_SPI_FMR) Transmit FIFO Threshold Mask */
#define FLEXCOM_FLEX_SPI_FMR_TXFTHRES(value) (FLEXCOM_FLEX_SPI_FMR_TXFTHRES_Msk & ((value) << FLEXCOM_FLEX_SPI_FMR_TXFTHRES_Pos))
#define FLEXCOM_FLEX_SPI_FMR_RXFTHRES_Pos   24                                             /**< (FLEXCOM_FLEX_SPI_FMR) Receive FIFO Threshold Position */
#define FLEXCOM_FLEX_SPI_FMR_RXFTHRES_Msk   (_U_(0x3F) << FLEXCOM_FLEX_SPI_FMR_RXFTHRES_Pos)  /**< (FLEXCOM_FLEX_SPI_FMR) Receive FIFO Threshold Mask */
#define FLEXCOM_FLEX_SPI_FMR_RXFTHRES(value) (FLEXCOM_FLEX_SPI_FMR_RXFTHRES_Msk & ((value) << FLEXCOM_FLEX_SPI_FMR_RXFTHRES_Pos))
#define FLEXCOM_FLEX_SPI_FMR_MASK           _U_(0x3F3F0033)                                /**< \deprecated (FLEXCOM_FLEX_SPI_FMR) Register MASK  (Use FLEXCOM_FLEX_SPI_FMR_Msk instead)  */
#define FLEXCOM_FLEX_SPI_FMR_Msk            _U_(0x3F3F0033)                                /**< (FLEXCOM_FLEX_SPI_FMR) Register Mask  */


/* -------- FLEXCOM_FLEX_SPI_FLR : (FLEXCOM Offset: 0x444) (R/ 32) SPI FIFO Level Register -------- */
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
} FLEXCOM_FLEX_SPI_FLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_SPI_FLR_OFFSET         (0x444)                                       /**<  (FLEXCOM_FLEX_SPI_FLR) SPI FIFO Level Register  Offset */

#define FLEXCOM_FLEX_SPI_FLR_TXFL_Pos       0                                              /**< (FLEXCOM_FLEX_SPI_FLR) Transmit FIFO Level Position */
#define FLEXCOM_FLEX_SPI_FLR_TXFL_Msk       (_U_(0x3F) << FLEXCOM_FLEX_SPI_FLR_TXFL_Pos)   /**< (FLEXCOM_FLEX_SPI_FLR) Transmit FIFO Level Mask */
#define FLEXCOM_FLEX_SPI_FLR_TXFL(value)    (FLEXCOM_FLEX_SPI_FLR_TXFL_Msk & ((value) << FLEXCOM_FLEX_SPI_FLR_TXFL_Pos))
#define FLEXCOM_FLEX_SPI_FLR_RXFL_Pos       16                                             /**< (FLEXCOM_FLEX_SPI_FLR) Receive FIFO Level Position */
#define FLEXCOM_FLEX_SPI_FLR_RXFL_Msk       (_U_(0x3F) << FLEXCOM_FLEX_SPI_FLR_RXFL_Pos)   /**< (FLEXCOM_FLEX_SPI_FLR) Receive FIFO Level Mask */
#define FLEXCOM_FLEX_SPI_FLR_RXFL(value)    (FLEXCOM_FLEX_SPI_FLR_RXFL_Msk & ((value) << FLEXCOM_FLEX_SPI_FLR_RXFL_Pos))
#define FLEXCOM_FLEX_SPI_FLR_MASK           _U_(0x3F003F)                                  /**< \deprecated (FLEXCOM_FLEX_SPI_FLR) Register MASK  (Use FLEXCOM_FLEX_SPI_FLR_Msk instead)  */
#define FLEXCOM_FLEX_SPI_FLR_Msk            _U_(0x3F003F)                                  /**< (FLEXCOM_FLEX_SPI_FLR) Register Mask  */


/* -------- FLEXCOM_FLEX_SPI_CMPR : (FLEXCOM Offset: 0x448) (R/W 32) SPI Comparison Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t VAL1:16;                   /**< bit:  0..15  First Comparison Value for Received Character */
    uint32_t VAL2:16;                   /**< bit: 16..31  Second Comparison Value for Received Character */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_SPI_CMPR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_SPI_CMPR_OFFSET        (0x448)                                       /**<  (FLEXCOM_FLEX_SPI_CMPR) SPI Comparison Register  Offset */

#define FLEXCOM_FLEX_SPI_CMPR_VAL1_Pos      0                                              /**< (FLEXCOM_FLEX_SPI_CMPR) First Comparison Value for Received Character Position */
#define FLEXCOM_FLEX_SPI_CMPR_VAL1_Msk      (_U_(0xFFFF) << FLEXCOM_FLEX_SPI_CMPR_VAL1_Pos)  /**< (FLEXCOM_FLEX_SPI_CMPR) First Comparison Value for Received Character Mask */
#define FLEXCOM_FLEX_SPI_CMPR_VAL1(value)   (FLEXCOM_FLEX_SPI_CMPR_VAL1_Msk & ((value) << FLEXCOM_FLEX_SPI_CMPR_VAL1_Pos))
#define FLEXCOM_FLEX_SPI_CMPR_VAL2_Pos      16                                             /**< (FLEXCOM_FLEX_SPI_CMPR) Second Comparison Value for Received Character Position */
#define FLEXCOM_FLEX_SPI_CMPR_VAL2_Msk      (_U_(0xFFFF) << FLEXCOM_FLEX_SPI_CMPR_VAL2_Pos)  /**< (FLEXCOM_FLEX_SPI_CMPR) Second Comparison Value for Received Character Mask */
#define FLEXCOM_FLEX_SPI_CMPR_VAL2(value)   (FLEXCOM_FLEX_SPI_CMPR_VAL2_Msk & ((value) << FLEXCOM_FLEX_SPI_CMPR_VAL2_Pos))
#define FLEXCOM_FLEX_SPI_CMPR_MASK          _U_(0xFFFFFFFF)                                /**< \deprecated (FLEXCOM_FLEX_SPI_CMPR) Register MASK  (Use FLEXCOM_FLEX_SPI_CMPR_Msk instead)  */
#define FLEXCOM_FLEX_SPI_CMPR_Msk           _U_(0xFFFFFFFF)                                /**< (FLEXCOM_FLEX_SPI_CMPR) Register Mask  */


/* -------- FLEXCOM_FLEX_SPI_WPMR : (FLEXCOM Offset: 0x4e4) (R/W 32) SPI Write Protection Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPEN:1;                    /**< bit:      0  Write Protection Enable                  */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPKEY:24;                  /**< bit:  8..31  Write Protection Key                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_SPI_WPMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_SPI_WPMR_OFFSET        (0x4E4)                                       /**<  (FLEXCOM_FLEX_SPI_WPMR) SPI Write Protection Mode Register  Offset */

#define FLEXCOM_FLEX_SPI_WPMR_WPEN_Pos      0                                              /**< (FLEXCOM_FLEX_SPI_WPMR) Write Protection Enable Position */
#define FLEXCOM_FLEX_SPI_WPMR_WPEN_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_WPMR_WPEN_Pos)   /**< (FLEXCOM_FLEX_SPI_WPMR) Write Protection Enable Mask */
#define FLEXCOM_FLEX_SPI_WPMR_WPEN          FLEXCOM_FLEX_SPI_WPMR_WPEN_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_WPMR_WPEN_Msk instead */
#define FLEXCOM_FLEX_SPI_WPMR_WPKEY_Pos     8                                              /**< (FLEXCOM_FLEX_SPI_WPMR) Write Protection Key Position */
#define FLEXCOM_FLEX_SPI_WPMR_WPKEY_Msk     (_U_(0xFFFFFF) << FLEXCOM_FLEX_SPI_WPMR_WPKEY_Pos)  /**< (FLEXCOM_FLEX_SPI_WPMR) Write Protection Key Mask */
#define FLEXCOM_FLEX_SPI_WPMR_WPKEY(value)  (FLEXCOM_FLEX_SPI_WPMR_WPKEY_Msk & ((value) << FLEXCOM_FLEX_SPI_WPMR_WPKEY_Pos))
#define   FLEXCOM_FLEX_SPI_WPMR_WPKEY_PASSWD_Val _U_(0x535049)                                  /**< (FLEXCOM_FLEX_SPI_WPMR) Writing any other value in this field aborts the write operation of bit WPEN.Always reads as 0  */
#define FLEXCOM_FLEX_SPI_WPMR_WPKEY_PASSWD  (FLEXCOM_FLEX_SPI_WPMR_WPKEY_PASSWD_Val << FLEXCOM_FLEX_SPI_WPMR_WPKEY_Pos)  /**< (FLEXCOM_FLEX_SPI_WPMR) Writing any other value in this field aborts the write operation of bit WPEN.Always reads as 0 Position  */
#define FLEXCOM_FLEX_SPI_WPMR_MASK          _U_(0xFFFFFF01)                                /**< \deprecated (FLEXCOM_FLEX_SPI_WPMR) Register MASK  (Use FLEXCOM_FLEX_SPI_WPMR_Msk instead)  */
#define FLEXCOM_FLEX_SPI_WPMR_Msk           _U_(0xFFFFFF01)                                /**< (FLEXCOM_FLEX_SPI_WPMR) Register Mask  */


/* -------- FLEXCOM_FLEX_SPI_WPSR : (FLEXCOM Offset: 0x4e8) (R/ 32) SPI Write Protection Status Register -------- */
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
} FLEXCOM_FLEX_SPI_WPSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_SPI_WPSR_OFFSET        (0x4E8)                                       /**<  (FLEXCOM_FLEX_SPI_WPSR) SPI Write Protection Status Register  Offset */

#define FLEXCOM_FLEX_SPI_WPSR_WPVS_Pos      0                                              /**< (FLEXCOM_FLEX_SPI_WPSR) Write Protection Violation Status Position */
#define FLEXCOM_FLEX_SPI_WPSR_WPVS_Msk      (_U_(0x1) << FLEXCOM_FLEX_SPI_WPSR_WPVS_Pos)   /**< (FLEXCOM_FLEX_SPI_WPSR) Write Protection Violation Status Mask */
#define FLEXCOM_FLEX_SPI_WPSR_WPVS          FLEXCOM_FLEX_SPI_WPSR_WPVS_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_SPI_WPSR_WPVS_Msk instead */
#define FLEXCOM_FLEX_SPI_WPSR_WPVSRC_Pos    8                                              /**< (FLEXCOM_FLEX_SPI_WPSR) Write Protection Violation Source Position */
#define FLEXCOM_FLEX_SPI_WPSR_WPVSRC_Msk    (_U_(0xFF) << FLEXCOM_FLEX_SPI_WPSR_WPVSRC_Pos)  /**< (FLEXCOM_FLEX_SPI_WPSR) Write Protection Violation Source Mask */
#define FLEXCOM_FLEX_SPI_WPSR_WPVSRC(value) (FLEXCOM_FLEX_SPI_WPSR_WPVSRC_Msk & ((value) << FLEXCOM_FLEX_SPI_WPSR_WPVSRC_Pos))
#define FLEXCOM_FLEX_SPI_WPSR_MASK          _U_(0xFF01)                                    /**< \deprecated (FLEXCOM_FLEX_SPI_WPSR) Register MASK  (Use FLEXCOM_FLEX_SPI_WPSR_Msk instead)  */
#define FLEXCOM_FLEX_SPI_WPSR_Msk           _U_(0xFF01)                                    /**< (FLEXCOM_FLEX_SPI_WPSR) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_CR : (FLEXCOM Offset: 0x600) (/W 32) TWI Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t START:1;                   /**< bit:      0  Send a START Condition                   */
    uint32_t STOP:1;                    /**< bit:      1  Send a STOP Condition                    */
    uint32_t MSEN:1;                    /**< bit:      2  TWI Master Mode Enabled                  */
    uint32_t MSDIS:1;                   /**< bit:      3  TWI Master Mode Disabled                 */
    uint32_t SVEN:1;                    /**< bit:      4  TWI Slave Mode Enabled                   */
    uint32_t SVDIS:1;                   /**< bit:      5  TWI Slave Mode Disabled                  */
    uint32_t QUICK:1;                   /**< bit:      6  SMBus Quick Command                      */
    uint32_t SWRST:1;                   /**< bit:      7  Software Reset                           */
    uint32_t HSEN:1;                    /**< bit:      8  TWI High-Speed Mode Enabled              */
    uint32_t HSDIS:1;                   /**< bit:      9  TWI High-Speed Mode Disabled             */
    uint32_t SMBEN:1;                   /**< bit:     10  SMBus Mode Enabled                       */
    uint32_t SMBDIS:1;                  /**< bit:     11  SMBus Mode Disabled                      */
    uint32_t PECEN:1;                   /**< bit:     12  Packet Error Checking Enable             */
    uint32_t PECDIS:1;                  /**< bit:     13  Packet Error Checking Disable            */
    uint32_t PECRQ:1;                   /**< bit:     14  PEC Request                              */
    uint32_t CLEAR:1;                   /**< bit:     15  Bus CLEAR Command                        */
    uint32_t ACMEN:1;                   /**< bit:     16  Alternative Command Mode Enable          */
    uint32_t ACMDIS:1;                  /**< bit:     17  Alternative Command Mode Disable         */
    uint32_t :6;                        /**< bit: 18..23  Reserved */
    uint32_t THRCLR:1;                  /**< bit:     24  Transmit Holding Register Clear          */
    uint32_t :1;                        /**< bit:     25  Reserved */
    uint32_t LOCKCLR:1;                 /**< bit:     26  Lock Clear                               */
    uint32_t :1;                        /**< bit:     27  Reserved */
    uint32_t FIFOEN:1;                  /**< bit:     28  FIFO Enable                              */
    uint32_t FIFODIS:1;                 /**< bit:     29  FIFO Disable                             */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct { // FIFO_ENABLED mode
    uint32_t START:1;                   /**< bit:      0  Send a START Condition                   */
    uint32_t STOP:1;                    /**< bit:      1  Send a STOP Condition                    */
    uint32_t MSEN:1;                    /**< bit:      2  TWI Master Mode Enabled                  */
    uint32_t MSDIS:1;                   /**< bit:      3  TWI Master Mode Disabled                 */
    uint32_t SVEN:1;                    /**< bit:      4  TWI Slave Mode Enabled                   */
    uint32_t SVDIS:1;                   /**< bit:      5  TWI Slave Mode Disabled                  */
    uint32_t QUICK:1;                   /**< bit:      6  SMBus Quick Command                      */
    uint32_t SWRST:1;                   /**< bit:      7  Software Reset                           */
    uint32_t HSEN:1;                    /**< bit:      8  TWI High-Speed Mode Enabled              */
    uint32_t HSDIS:1;                   /**< bit:      9  TWI High-Speed Mode Disabled             */
    uint32_t SMBEN:1;                   /**< bit:     10  SMBus Mode Enabled                       */
    uint32_t SMBDIS:1;                  /**< bit:     11  SMBus Mode Disabled                      */
    uint32_t PECEN:1;                   /**< bit:     12  Packet Error Checking Enable             */
    uint32_t PECDIS:1;                  /**< bit:     13  Packet Error Checking Disable            */
    uint32_t PECRQ:1;                   /**< bit:     14  PEC Request                              */
    uint32_t CLEAR:1;                   /**< bit:     15  Bus CLEAR Command                        */
    uint32_t ACMEN:1;                   /**< bit:     16  Alternative Command Mode Enable          */
    uint32_t ACMDIS:1;                  /**< bit:     17  Alternative Command Mode Disable         */
    uint32_t :6;                        /**< bit: 18..23  Reserved */
    uint32_t TXFCLR:1;                  /**< bit:     24  Transmit FIFO Clear                      */
    uint32_t RXFCLR:1;                  /**< bit:     25  Receive FIFO Clear                       */
    uint32_t TXFLCLR:1;                 /**< bit:     26  Transmit FIFO Lock CLEAR                 */
    uint32_t :1;                        /**< bit:     27  Reserved */
    uint32_t FIFOEN:1;                  /**< bit:     28  FIFO Enable                              */
    uint32_t FIFODIS:1;                 /**< bit:     29  FIFO Disable                             */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } FIFO_ENABLED;                                /**< Structure used for FIFO_ENABLED mode access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_CR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_CR_OFFSET          (0x600)                                       /**<  (FLEXCOM_FLEX_TWI_CR) TWI Control Register  Offset */

#define FLEXCOM_FLEX_TWI_CR_START_Pos       0                                              /**< (FLEXCOM_FLEX_TWI_CR) Send a START Condition Position */
#define FLEXCOM_FLEX_TWI_CR_START_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_START_Pos)    /**< (FLEXCOM_FLEX_TWI_CR) Send a START Condition Mask */
#define FLEXCOM_FLEX_TWI_CR_START           FLEXCOM_FLEX_TWI_CR_START_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_START_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_STOP_Pos        1                                              /**< (FLEXCOM_FLEX_TWI_CR) Send a STOP Condition Position */
#define FLEXCOM_FLEX_TWI_CR_STOP_Msk        (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_STOP_Pos)     /**< (FLEXCOM_FLEX_TWI_CR) Send a STOP Condition Mask */
#define FLEXCOM_FLEX_TWI_CR_STOP            FLEXCOM_FLEX_TWI_CR_STOP_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_STOP_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_MSEN_Pos        2                                              /**< (FLEXCOM_FLEX_TWI_CR) TWI Master Mode Enabled Position */
#define FLEXCOM_FLEX_TWI_CR_MSEN_Msk        (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_MSEN_Pos)     /**< (FLEXCOM_FLEX_TWI_CR) TWI Master Mode Enabled Mask */
#define FLEXCOM_FLEX_TWI_CR_MSEN            FLEXCOM_FLEX_TWI_CR_MSEN_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_MSEN_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_MSDIS_Pos       3                                              /**< (FLEXCOM_FLEX_TWI_CR) TWI Master Mode Disabled Position */
#define FLEXCOM_FLEX_TWI_CR_MSDIS_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_MSDIS_Pos)    /**< (FLEXCOM_FLEX_TWI_CR) TWI Master Mode Disabled Mask */
#define FLEXCOM_FLEX_TWI_CR_MSDIS           FLEXCOM_FLEX_TWI_CR_MSDIS_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_MSDIS_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_SVEN_Pos        4                                              /**< (FLEXCOM_FLEX_TWI_CR) TWI Slave Mode Enabled Position */
#define FLEXCOM_FLEX_TWI_CR_SVEN_Msk        (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_SVEN_Pos)     /**< (FLEXCOM_FLEX_TWI_CR) TWI Slave Mode Enabled Mask */
#define FLEXCOM_FLEX_TWI_CR_SVEN            FLEXCOM_FLEX_TWI_CR_SVEN_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_SVEN_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_SVDIS_Pos       5                                              /**< (FLEXCOM_FLEX_TWI_CR) TWI Slave Mode Disabled Position */
#define FLEXCOM_FLEX_TWI_CR_SVDIS_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_SVDIS_Pos)    /**< (FLEXCOM_FLEX_TWI_CR) TWI Slave Mode Disabled Mask */
#define FLEXCOM_FLEX_TWI_CR_SVDIS           FLEXCOM_FLEX_TWI_CR_SVDIS_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_SVDIS_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_QUICK_Pos       6                                              /**< (FLEXCOM_FLEX_TWI_CR) SMBus Quick Command Position */
#define FLEXCOM_FLEX_TWI_CR_QUICK_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_QUICK_Pos)    /**< (FLEXCOM_FLEX_TWI_CR) SMBus Quick Command Mask */
#define FLEXCOM_FLEX_TWI_CR_QUICK           FLEXCOM_FLEX_TWI_CR_QUICK_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_QUICK_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_SWRST_Pos       7                                              /**< (FLEXCOM_FLEX_TWI_CR) Software Reset Position */
#define FLEXCOM_FLEX_TWI_CR_SWRST_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_SWRST_Pos)    /**< (FLEXCOM_FLEX_TWI_CR) Software Reset Mask */
#define FLEXCOM_FLEX_TWI_CR_SWRST           FLEXCOM_FLEX_TWI_CR_SWRST_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_SWRST_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_HSEN_Pos        8                                              /**< (FLEXCOM_FLEX_TWI_CR) TWI High-Speed Mode Enabled Position */
#define FLEXCOM_FLEX_TWI_CR_HSEN_Msk        (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_HSEN_Pos)     /**< (FLEXCOM_FLEX_TWI_CR) TWI High-Speed Mode Enabled Mask */
#define FLEXCOM_FLEX_TWI_CR_HSEN            FLEXCOM_FLEX_TWI_CR_HSEN_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_HSEN_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_HSDIS_Pos       9                                              /**< (FLEXCOM_FLEX_TWI_CR) TWI High-Speed Mode Disabled Position */
#define FLEXCOM_FLEX_TWI_CR_HSDIS_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_HSDIS_Pos)    /**< (FLEXCOM_FLEX_TWI_CR) TWI High-Speed Mode Disabled Mask */
#define FLEXCOM_FLEX_TWI_CR_HSDIS           FLEXCOM_FLEX_TWI_CR_HSDIS_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_HSDIS_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_SMBEN_Pos       10                                             /**< (FLEXCOM_FLEX_TWI_CR) SMBus Mode Enabled Position */
#define FLEXCOM_FLEX_TWI_CR_SMBEN_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_SMBEN_Pos)    /**< (FLEXCOM_FLEX_TWI_CR) SMBus Mode Enabled Mask */
#define FLEXCOM_FLEX_TWI_CR_SMBEN           FLEXCOM_FLEX_TWI_CR_SMBEN_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_SMBEN_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_SMBDIS_Pos      11                                             /**< (FLEXCOM_FLEX_TWI_CR) SMBus Mode Disabled Position */
#define FLEXCOM_FLEX_TWI_CR_SMBDIS_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_SMBDIS_Pos)   /**< (FLEXCOM_FLEX_TWI_CR) SMBus Mode Disabled Mask */
#define FLEXCOM_FLEX_TWI_CR_SMBDIS          FLEXCOM_FLEX_TWI_CR_SMBDIS_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_SMBDIS_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_PECEN_Pos       12                                             /**< (FLEXCOM_FLEX_TWI_CR) Packet Error Checking Enable Position */
#define FLEXCOM_FLEX_TWI_CR_PECEN_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_PECEN_Pos)    /**< (FLEXCOM_FLEX_TWI_CR) Packet Error Checking Enable Mask */
#define FLEXCOM_FLEX_TWI_CR_PECEN           FLEXCOM_FLEX_TWI_CR_PECEN_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_PECEN_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_PECDIS_Pos      13                                             /**< (FLEXCOM_FLEX_TWI_CR) Packet Error Checking Disable Position */
#define FLEXCOM_FLEX_TWI_CR_PECDIS_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_PECDIS_Pos)   /**< (FLEXCOM_FLEX_TWI_CR) Packet Error Checking Disable Mask */
#define FLEXCOM_FLEX_TWI_CR_PECDIS          FLEXCOM_FLEX_TWI_CR_PECDIS_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_PECDIS_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_PECRQ_Pos       14                                             /**< (FLEXCOM_FLEX_TWI_CR) PEC Request Position */
#define FLEXCOM_FLEX_TWI_CR_PECRQ_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_PECRQ_Pos)    /**< (FLEXCOM_FLEX_TWI_CR) PEC Request Mask */
#define FLEXCOM_FLEX_TWI_CR_PECRQ           FLEXCOM_FLEX_TWI_CR_PECRQ_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_PECRQ_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_CLEAR_Pos       15                                             /**< (FLEXCOM_FLEX_TWI_CR) Bus CLEAR Command Position */
#define FLEXCOM_FLEX_TWI_CR_CLEAR_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_CLEAR_Pos)    /**< (FLEXCOM_FLEX_TWI_CR) Bus CLEAR Command Mask */
#define FLEXCOM_FLEX_TWI_CR_CLEAR           FLEXCOM_FLEX_TWI_CR_CLEAR_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_CLEAR_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_ACMEN_Pos       16                                             /**< (FLEXCOM_FLEX_TWI_CR) Alternative Command Mode Enable Position */
#define FLEXCOM_FLEX_TWI_CR_ACMEN_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_ACMEN_Pos)    /**< (FLEXCOM_FLEX_TWI_CR) Alternative Command Mode Enable Mask */
#define FLEXCOM_FLEX_TWI_CR_ACMEN           FLEXCOM_FLEX_TWI_CR_ACMEN_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_ACMEN_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_ACMDIS_Pos      17                                             /**< (FLEXCOM_FLEX_TWI_CR) Alternative Command Mode Disable Position */
#define FLEXCOM_FLEX_TWI_CR_ACMDIS_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_ACMDIS_Pos)   /**< (FLEXCOM_FLEX_TWI_CR) Alternative Command Mode Disable Mask */
#define FLEXCOM_FLEX_TWI_CR_ACMDIS          FLEXCOM_FLEX_TWI_CR_ACMDIS_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_ACMDIS_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_THRCLR_Pos      24                                             /**< (FLEXCOM_FLEX_TWI_CR) Transmit Holding Register Clear Position */
#define FLEXCOM_FLEX_TWI_CR_THRCLR_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_THRCLR_Pos)   /**< (FLEXCOM_FLEX_TWI_CR) Transmit Holding Register Clear Mask */
#define FLEXCOM_FLEX_TWI_CR_THRCLR          FLEXCOM_FLEX_TWI_CR_THRCLR_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_THRCLR_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_LOCKCLR_Pos     26                                             /**< (FLEXCOM_FLEX_TWI_CR) Lock Clear Position */
#define FLEXCOM_FLEX_TWI_CR_LOCKCLR_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_LOCKCLR_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) Lock Clear Mask */
#define FLEXCOM_FLEX_TWI_CR_LOCKCLR         FLEXCOM_FLEX_TWI_CR_LOCKCLR_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_LOCKCLR_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFOEN_Pos      28                                             /**< (FLEXCOM_FLEX_TWI_CR) FIFO Enable Position */
#define FLEXCOM_FLEX_TWI_CR_FIFOEN_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFOEN_Pos)   /**< (FLEXCOM_FLEX_TWI_CR) FIFO Enable Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFOEN          FLEXCOM_FLEX_TWI_CR_FIFOEN_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFOEN_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFODIS_Pos     29                                             /**< (FLEXCOM_FLEX_TWI_CR) FIFO Disable Position */
#define FLEXCOM_FLEX_TWI_CR_FIFODIS_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFODIS_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) FIFO Disable Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFODIS         FLEXCOM_FLEX_TWI_CR_FIFODIS_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFODIS_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_MASK            _U_(0x3503FFFF)                                /**< \deprecated (FLEXCOM_FLEX_TWI_CR) Register MASK  (Use FLEXCOM_FLEX_TWI_CR_Msk instead)  */
#define FLEXCOM_FLEX_TWI_CR_Msk             _U_(0x3503FFFF)                                /**< (FLEXCOM_FLEX_TWI_CR) Register Mask  */

/* FIFO_ENABLED mode */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_START_Pos 0                                              /**< (FLEXCOM_FLEX_TWI_CR) Send a START Condition Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_START_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_START_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) Send a START Condition Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_START FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_START_Msk     /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_START_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_STOP_Pos 1                                              /**< (FLEXCOM_FLEX_TWI_CR) Send a STOP Condition Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_STOP_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_STOP_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) Send a STOP Condition Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_STOP FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_STOP_Msk      /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_STOP_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_MSEN_Pos 2                                              /**< (FLEXCOM_FLEX_TWI_CR) TWI Master Mode Enabled Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_MSEN_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_MSEN_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) TWI Master Mode Enabled Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_MSEN FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_MSEN_Msk      /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_MSEN_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_MSDIS_Pos 3                                              /**< (FLEXCOM_FLEX_TWI_CR) TWI Master Mode Disabled Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_MSDIS_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_MSDIS_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) TWI Master Mode Disabled Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_MSDIS FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_MSDIS_Msk     /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_MSDIS_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SVEN_Pos 4                                              /**< (FLEXCOM_FLEX_TWI_CR) TWI Slave Mode Enabled Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SVEN_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SVEN_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) TWI Slave Mode Enabled Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SVEN FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SVEN_Msk      /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SVEN_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SVDIS_Pos 5                                              /**< (FLEXCOM_FLEX_TWI_CR) TWI Slave Mode Disabled Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SVDIS_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SVDIS_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) TWI Slave Mode Disabled Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SVDIS FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SVDIS_Msk     /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SVDIS_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_QUICK_Pos 6                                              /**< (FLEXCOM_FLEX_TWI_CR) SMBus Quick Command Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_QUICK_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_QUICK_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) SMBus Quick Command Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_QUICK FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_QUICK_Msk     /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_QUICK_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SWRST_Pos 7                                              /**< (FLEXCOM_FLEX_TWI_CR) Software Reset Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SWRST_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SWRST_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) Software Reset Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SWRST FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SWRST_Msk     /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SWRST_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_HSEN_Pos 8                                              /**< (FLEXCOM_FLEX_TWI_CR) TWI High-Speed Mode Enabled Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_HSEN_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_HSEN_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) TWI High-Speed Mode Enabled Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_HSEN FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_HSEN_Msk      /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_HSEN_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_HSDIS_Pos 9                                              /**< (FLEXCOM_FLEX_TWI_CR) TWI High-Speed Mode Disabled Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_HSDIS_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_HSDIS_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) TWI High-Speed Mode Disabled Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_HSDIS FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_HSDIS_Msk     /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_HSDIS_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SMBEN_Pos 10                                             /**< (FLEXCOM_FLEX_TWI_CR) SMBus Mode Enabled Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SMBEN_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SMBEN_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) SMBus Mode Enabled Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SMBEN FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SMBEN_Msk     /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SMBEN_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SMBDIS_Pos 11                                             /**< (FLEXCOM_FLEX_TWI_CR) SMBus Mode Disabled Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SMBDIS_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SMBDIS_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) SMBus Mode Disabled Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SMBDIS FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SMBDIS_Msk    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_SMBDIS_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_PECEN_Pos 12                                             /**< (FLEXCOM_FLEX_TWI_CR) Packet Error Checking Enable Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_PECEN_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_PECEN_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) Packet Error Checking Enable Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_PECEN FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_PECEN_Msk     /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_PECEN_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_PECDIS_Pos 13                                             /**< (FLEXCOM_FLEX_TWI_CR) Packet Error Checking Disable Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_PECDIS_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_PECDIS_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) Packet Error Checking Disable Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_PECDIS FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_PECDIS_Msk    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_PECDIS_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_PECRQ_Pos 14                                             /**< (FLEXCOM_FLEX_TWI_CR) PEC Request Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_PECRQ_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_PECRQ_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) PEC Request Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_PECRQ FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_PECRQ_Msk     /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_PECRQ_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_CLEAR_Pos 15                                             /**< (FLEXCOM_FLEX_TWI_CR) Bus CLEAR Command Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_CLEAR_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_CLEAR_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) Bus CLEAR Command Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_CLEAR FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_CLEAR_Msk     /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_CLEAR_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_ACMEN_Pos 16                                             /**< (FLEXCOM_FLEX_TWI_CR) Alternative Command Mode Enable Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_ACMEN_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_ACMEN_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) Alternative Command Mode Enable Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_ACMEN FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_ACMEN_Msk     /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_ACMEN_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_ACMDIS_Pos 17                                             /**< (FLEXCOM_FLEX_TWI_CR) Alternative Command Mode Disable Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_ACMDIS_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_ACMDIS_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) Alternative Command Mode Disable Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_ACMDIS FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_ACMDIS_Msk    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_ACMDIS_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_TXFCLR_Pos 24                                             /**< (FLEXCOM_FLEX_TWI_CR) Transmit FIFO Clear Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_TXFCLR_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_TXFCLR_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) Transmit FIFO Clear Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_TXFCLR FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_TXFCLR_Msk    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_TXFCLR_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_RXFCLR_Pos 25                                             /**< (FLEXCOM_FLEX_TWI_CR) Receive FIFO Clear Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_RXFCLR_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_RXFCLR_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) Receive FIFO Clear Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_RXFCLR FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_RXFCLR_Msk    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_RXFCLR_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_TXFLCLR_Pos 26                                             /**< (FLEXCOM_FLEX_TWI_CR) Transmit FIFO Lock CLEAR Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_TXFLCLR_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_TXFLCLR_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) Transmit FIFO Lock CLEAR Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_TXFLCLR FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_TXFLCLR_Msk   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_TXFLCLR_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_FIFOEN_Pos 28                                             /**< (FLEXCOM_FLEX_TWI_CR) FIFO Enable Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_FIFOEN_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_FIFOEN_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) FIFO Enable Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_FIFOEN FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_FIFOEN_Msk    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_FIFOEN_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_FIFODIS_Pos 29                                             /**< (FLEXCOM_FLEX_TWI_CR) FIFO Disable Position */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_FIFODIS_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_FIFODIS_Pos)  /**< (FLEXCOM_FLEX_TWI_CR) FIFO Disable Mask */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_FIFODIS FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_FIFODIS_Msk   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_FIFODIS_Msk instead */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_MASK _U_(0x3703FFFF)                                /**< \deprecated (FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED) Register MASK  (Use FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_Msk instead)  */
#define FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED_Msk _U_(0x3703FFFF)                                /**< (FLEXCOM_FLEX_TWI_CR_FIFO_ENABLED) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_MMR : (FLEXCOM Offset: 0x604) (R/W 32) TWI Master Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t IADRSZ:2;                  /**< bit:   8..9  Internal Device Address Size             */
    uint32_t :2;                        /**< bit: 10..11  Reserved */
    uint32_t MREAD:1;                   /**< bit:     12  Master Read Direction                    */
    uint32_t :3;                        /**< bit: 13..15  Reserved */
    uint32_t DADR:7;                    /**< bit: 16..22  Device Address                           */
    uint32_t :9;                        /**< bit: 23..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_MMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_MMR_OFFSET         (0x604)                                       /**<  (FLEXCOM_FLEX_TWI_MMR) TWI Master Mode Register  Offset */

#define FLEXCOM_FLEX_TWI_MMR_IADRSZ_Pos     8                                              /**< (FLEXCOM_FLEX_TWI_MMR) Internal Device Address Size Position */
#define FLEXCOM_FLEX_TWI_MMR_IADRSZ_Msk     (_U_(0x3) << FLEXCOM_FLEX_TWI_MMR_IADRSZ_Pos)  /**< (FLEXCOM_FLEX_TWI_MMR) Internal Device Address Size Mask */
#define FLEXCOM_FLEX_TWI_MMR_IADRSZ(value)  (FLEXCOM_FLEX_TWI_MMR_IADRSZ_Msk & ((value) << FLEXCOM_FLEX_TWI_MMR_IADRSZ_Pos))
#define   FLEXCOM_FLEX_TWI_MMR_IADRSZ_NONE_Val _U_(0x0)                                       /**< (FLEXCOM_FLEX_TWI_MMR) No internal device address  */
#define   FLEXCOM_FLEX_TWI_MMR_IADRSZ_1_BYTE_Val _U_(0x1)                                       /**< (FLEXCOM_FLEX_TWI_MMR) One-byte internal device address  */
#define   FLEXCOM_FLEX_TWI_MMR_IADRSZ_2_BYTE_Val _U_(0x2)                                       /**< (FLEXCOM_FLEX_TWI_MMR) Two-byte internal device address  */
#define   FLEXCOM_FLEX_TWI_MMR_IADRSZ_3_BYTE_Val _U_(0x3)                                       /**< (FLEXCOM_FLEX_TWI_MMR) Three-byte internal device address  */
#define FLEXCOM_FLEX_TWI_MMR_IADRSZ_NONE    (FLEXCOM_FLEX_TWI_MMR_IADRSZ_NONE_Val << FLEXCOM_FLEX_TWI_MMR_IADRSZ_Pos)  /**< (FLEXCOM_FLEX_TWI_MMR) No internal device address Position  */
#define FLEXCOM_FLEX_TWI_MMR_IADRSZ_1_BYTE  (FLEXCOM_FLEX_TWI_MMR_IADRSZ_1_BYTE_Val << FLEXCOM_FLEX_TWI_MMR_IADRSZ_Pos)  /**< (FLEXCOM_FLEX_TWI_MMR) One-byte internal device address Position  */
#define FLEXCOM_FLEX_TWI_MMR_IADRSZ_2_BYTE  (FLEXCOM_FLEX_TWI_MMR_IADRSZ_2_BYTE_Val << FLEXCOM_FLEX_TWI_MMR_IADRSZ_Pos)  /**< (FLEXCOM_FLEX_TWI_MMR) Two-byte internal device address Position  */
#define FLEXCOM_FLEX_TWI_MMR_IADRSZ_3_BYTE  (FLEXCOM_FLEX_TWI_MMR_IADRSZ_3_BYTE_Val << FLEXCOM_FLEX_TWI_MMR_IADRSZ_Pos)  /**< (FLEXCOM_FLEX_TWI_MMR) Three-byte internal device address Position  */
#define FLEXCOM_FLEX_TWI_MMR_MREAD_Pos      12                                             /**< (FLEXCOM_FLEX_TWI_MMR) Master Read Direction Position */
#define FLEXCOM_FLEX_TWI_MMR_MREAD_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_MMR_MREAD_Pos)   /**< (FLEXCOM_FLEX_TWI_MMR) Master Read Direction Mask */
#define FLEXCOM_FLEX_TWI_MMR_MREAD          FLEXCOM_FLEX_TWI_MMR_MREAD_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_MMR_MREAD_Msk instead */
#define FLEXCOM_FLEX_TWI_MMR_DADR_Pos       16                                             /**< (FLEXCOM_FLEX_TWI_MMR) Device Address Position */
#define FLEXCOM_FLEX_TWI_MMR_DADR_Msk       (_U_(0x7F) << FLEXCOM_FLEX_TWI_MMR_DADR_Pos)   /**< (FLEXCOM_FLEX_TWI_MMR) Device Address Mask */
#define FLEXCOM_FLEX_TWI_MMR_DADR(value)    (FLEXCOM_FLEX_TWI_MMR_DADR_Msk & ((value) << FLEXCOM_FLEX_TWI_MMR_DADR_Pos))
#define FLEXCOM_FLEX_TWI_MMR_MASK           _U_(0x7F1300)                                  /**< \deprecated (FLEXCOM_FLEX_TWI_MMR) Register MASK  (Use FLEXCOM_FLEX_TWI_MMR_Msk instead)  */
#define FLEXCOM_FLEX_TWI_MMR_Msk            _U_(0x7F1300)                                  /**< (FLEXCOM_FLEX_TWI_MMR) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_SMR : (FLEXCOM Offset: 0x608) (R/W 32) TWI Slave Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NACKEN:1;                  /**< bit:      0  Slave Receiver Data Phase NACK Enable    */
    uint32_t :1;                        /**< bit:      1  Reserved */
    uint32_t SMDA:1;                    /**< bit:      2  SMBus Default Address                    */
    uint32_t SMHH:1;                    /**< bit:      3  SMBus Host Header                        */
    uint32_t :2;                        /**< bit:   4..5  Reserved */
    uint32_t SCLWSDIS:1;                /**< bit:      6  Clock Wait State Disable                 */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t MASK:7;                    /**< bit:  8..14  Slave Address Mask                       */
    uint32_t :1;                        /**< bit:     15  Reserved */
    uint32_t SADR:7;                    /**< bit: 16..22  Slave Address                            */
    uint32_t :5;                        /**< bit: 23..27  Reserved */
    uint32_t SADR1EN:1;                 /**< bit:     28  Slave Address 1 Enable                   */
    uint32_t SADR2EN:1;                 /**< bit:     29  Slave Address 2 Enable                   */
    uint32_t SADR3EN:1;                 /**< bit:     30  Slave Address 3 Enable                   */
    uint32_t DATAMEN:1;                 /**< bit:     31  Data Matching Enable                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_SMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_SMR_OFFSET         (0x608)                                       /**<  (FLEXCOM_FLEX_TWI_SMR) TWI Slave Mode Register  Offset */

#define FLEXCOM_FLEX_TWI_SMR_NACKEN_Pos     0                                              /**< (FLEXCOM_FLEX_TWI_SMR) Slave Receiver Data Phase NACK Enable Position */
#define FLEXCOM_FLEX_TWI_SMR_NACKEN_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_SMR_NACKEN_Pos)  /**< (FLEXCOM_FLEX_TWI_SMR) Slave Receiver Data Phase NACK Enable Mask */
#define FLEXCOM_FLEX_TWI_SMR_NACKEN         FLEXCOM_FLEX_TWI_SMR_NACKEN_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SMR_NACKEN_Msk instead */
#define FLEXCOM_FLEX_TWI_SMR_SMDA_Pos       2                                              /**< (FLEXCOM_FLEX_TWI_SMR) SMBus Default Address Position */
#define FLEXCOM_FLEX_TWI_SMR_SMDA_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_SMR_SMDA_Pos)    /**< (FLEXCOM_FLEX_TWI_SMR) SMBus Default Address Mask */
#define FLEXCOM_FLEX_TWI_SMR_SMDA           FLEXCOM_FLEX_TWI_SMR_SMDA_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SMR_SMDA_Msk instead */
#define FLEXCOM_FLEX_TWI_SMR_SMHH_Pos       3                                              /**< (FLEXCOM_FLEX_TWI_SMR) SMBus Host Header Position */
#define FLEXCOM_FLEX_TWI_SMR_SMHH_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_SMR_SMHH_Pos)    /**< (FLEXCOM_FLEX_TWI_SMR) SMBus Host Header Mask */
#define FLEXCOM_FLEX_TWI_SMR_SMHH           FLEXCOM_FLEX_TWI_SMR_SMHH_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SMR_SMHH_Msk instead */
#define FLEXCOM_FLEX_TWI_SMR_SCLWSDIS_Pos   6                                              /**< (FLEXCOM_FLEX_TWI_SMR) Clock Wait State Disable Position */
#define FLEXCOM_FLEX_TWI_SMR_SCLWSDIS_Msk   (_U_(0x1) << FLEXCOM_FLEX_TWI_SMR_SCLWSDIS_Pos)  /**< (FLEXCOM_FLEX_TWI_SMR) Clock Wait State Disable Mask */
#define FLEXCOM_FLEX_TWI_SMR_SCLWSDIS       FLEXCOM_FLEX_TWI_SMR_SCLWSDIS_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SMR_SCLWSDIS_Msk instead */
#define FLEXCOM_FLEX_TWI_SMR_MASK_Pos       8                                              /**< (FLEXCOM_FLEX_TWI_SMR) Slave Address Mask Position */
#define FLEXCOM_FLEX_TWI_SMR_MASK_Msk       (_U_(0x7F) << FLEXCOM_FLEX_TWI_SMR_MASK_Pos)   /**< (FLEXCOM_FLEX_TWI_SMR) Slave Address Mask Mask */
#define FLEXCOM_FLEX_TWI_SMR_MASK(value)    (FLEXCOM_FLEX_TWI_SMR_MASK_Msk & ((value) << FLEXCOM_FLEX_TWI_SMR_MASK_Pos))
#define FLEXCOM_FLEX_TWI_SMR_SADR_Pos       16                                             /**< (FLEXCOM_FLEX_TWI_SMR) Slave Address Position */
#define FLEXCOM_FLEX_TWI_SMR_SADR_Msk       (_U_(0x7F) << FLEXCOM_FLEX_TWI_SMR_SADR_Pos)   /**< (FLEXCOM_FLEX_TWI_SMR) Slave Address Mask */
#define FLEXCOM_FLEX_TWI_SMR_SADR(value)    (FLEXCOM_FLEX_TWI_SMR_SADR_Msk & ((value) << FLEXCOM_FLEX_TWI_SMR_SADR_Pos))
#define FLEXCOM_FLEX_TWI_SMR_SADR1EN_Pos    28                                             /**< (FLEXCOM_FLEX_TWI_SMR) Slave Address 1 Enable Position */
#define FLEXCOM_FLEX_TWI_SMR_SADR1EN_Msk    (_U_(0x1) << FLEXCOM_FLEX_TWI_SMR_SADR1EN_Pos)  /**< (FLEXCOM_FLEX_TWI_SMR) Slave Address 1 Enable Mask */
#define FLEXCOM_FLEX_TWI_SMR_SADR1EN        FLEXCOM_FLEX_TWI_SMR_SADR1EN_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SMR_SADR1EN_Msk instead */
#define FLEXCOM_FLEX_TWI_SMR_SADR2EN_Pos    29                                             /**< (FLEXCOM_FLEX_TWI_SMR) Slave Address 2 Enable Position */
#define FLEXCOM_FLEX_TWI_SMR_SADR2EN_Msk    (_U_(0x1) << FLEXCOM_FLEX_TWI_SMR_SADR2EN_Pos)  /**< (FLEXCOM_FLEX_TWI_SMR) Slave Address 2 Enable Mask */
#define FLEXCOM_FLEX_TWI_SMR_SADR2EN        FLEXCOM_FLEX_TWI_SMR_SADR2EN_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SMR_SADR2EN_Msk instead */
#define FLEXCOM_FLEX_TWI_SMR_SADR3EN_Pos    30                                             /**< (FLEXCOM_FLEX_TWI_SMR) Slave Address 3 Enable Position */
#define FLEXCOM_FLEX_TWI_SMR_SADR3EN_Msk    (_U_(0x1) << FLEXCOM_FLEX_TWI_SMR_SADR3EN_Pos)  /**< (FLEXCOM_FLEX_TWI_SMR) Slave Address 3 Enable Mask */
#define FLEXCOM_FLEX_TWI_SMR_SADR3EN        FLEXCOM_FLEX_TWI_SMR_SADR3EN_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SMR_SADR3EN_Msk instead */
#define FLEXCOM_FLEX_TWI_SMR_DATAMEN_Pos    31                                             /**< (FLEXCOM_FLEX_TWI_SMR) Data Matching Enable Position */
#define FLEXCOM_FLEX_TWI_SMR_DATAMEN_Msk    (_U_(0x1) << FLEXCOM_FLEX_TWI_SMR_DATAMEN_Pos)  /**< (FLEXCOM_FLEX_TWI_SMR) Data Matching Enable Mask */
#define FLEXCOM_FLEX_TWI_SMR_DATAMEN        FLEXCOM_FLEX_TWI_SMR_DATAMEN_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SMR_DATAMEN_Msk instead */
#define FLEXCOM_FLEX_TWI_SMR_Msk            _U_(0xF07F7F4D)                                /**< (FLEXCOM_FLEX_TWI_SMR) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_IADR : (FLEXCOM Offset: 0x60c) (R/W 32) TWI Internal Address Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t IADR:24;                   /**< bit:  0..23  Internal Address                         */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_IADR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_IADR_OFFSET        (0x60C)                                       /**<  (FLEXCOM_FLEX_TWI_IADR) TWI Internal Address Register  Offset */

#define FLEXCOM_FLEX_TWI_IADR_IADR_Pos      0                                              /**< (FLEXCOM_FLEX_TWI_IADR) Internal Address Position */
#define FLEXCOM_FLEX_TWI_IADR_IADR_Msk      (_U_(0xFFFFFF) << FLEXCOM_FLEX_TWI_IADR_IADR_Pos)  /**< (FLEXCOM_FLEX_TWI_IADR) Internal Address Mask */
#define FLEXCOM_FLEX_TWI_IADR_IADR(value)   (FLEXCOM_FLEX_TWI_IADR_IADR_Msk & ((value) << FLEXCOM_FLEX_TWI_IADR_IADR_Pos))
#define FLEXCOM_FLEX_TWI_IADR_MASK          _U_(0xFFFFFF)                                  /**< \deprecated (FLEXCOM_FLEX_TWI_IADR) Register MASK  (Use FLEXCOM_FLEX_TWI_IADR_Msk instead)  */
#define FLEXCOM_FLEX_TWI_IADR_Msk           _U_(0xFFFFFF)                                  /**< (FLEXCOM_FLEX_TWI_IADR) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_CWGR : (FLEXCOM Offset: 0x610) (R/W 32) TWI Clock Waveform Generator Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CLDIV:8;                   /**< bit:   0..7  Clock Low Divider                        */
    uint32_t CHDIV:8;                   /**< bit:  8..15  Clock High Divider                       */
    uint32_t CKDIV:3;                   /**< bit: 16..18  Clock Divider                            */
    uint32_t :1;                        /**< bit:     19  Reserved */
    uint32_t BRSRCCLK:1;                /**< bit:     20  Bit Rate Source Clock                    */
    uint32_t :3;                        /**< bit: 21..23  Reserved */
    uint32_t HOLD:5;                    /**< bit: 24..28  TWD Hold Time Versus TWCK Falling        */
    uint32_t :3;                        /**< bit: 29..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_CWGR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_CWGR_OFFSET        (0x610)                                       /**<  (FLEXCOM_FLEX_TWI_CWGR) TWI Clock Waveform Generator Register  Offset */

#define FLEXCOM_FLEX_TWI_CWGR_CLDIV_Pos     0                                              /**< (FLEXCOM_FLEX_TWI_CWGR) Clock Low Divider Position */
#define FLEXCOM_FLEX_TWI_CWGR_CLDIV_Msk     (_U_(0xFF) << FLEXCOM_FLEX_TWI_CWGR_CLDIV_Pos)  /**< (FLEXCOM_FLEX_TWI_CWGR) Clock Low Divider Mask */
#define FLEXCOM_FLEX_TWI_CWGR_CLDIV(value)  (FLEXCOM_FLEX_TWI_CWGR_CLDIV_Msk & ((value) << FLEXCOM_FLEX_TWI_CWGR_CLDIV_Pos))
#define FLEXCOM_FLEX_TWI_CWGR_CHDIV_Pos     8                                              /**< (FLEXCOM_FLEX_TWI_CWGR) Clock High Divider Position */
#define FLEXCOM_FLEX_TWI_CWGR_CHDIV_Msk     (_U_(0xFF) << FLEXCOM_FLEX_TWI_CWGR_CHDIV_Pos)  /**< (FLEXCOM_FLEX_TWI_CWGR) Clock High Divider Mask */
#define FLEXCOM_FLEX_TWI_CWGR_CHDIV(value)  (FLEXCOM_FLEX_TWI_CWGR_CHDIV_Msk & ((value) << FLEXCOM_FLEX_TWI_CWGR_CHDIV_Pos))
#define FLEXCOM_FLEX_TWI_CWGR_CKDIV_Pos     16                                             /**< (FLEXCOM_FLEX_TWI_CWGR) Clock Divider Position */
#define FLEXCOM_FLEX_TWI_CWGR_CKDIV_Msk     (_U_(0x7) << FLEXCOM_FLEX_TWI_CWGR_CKDIV_Pos)  /**< (FLEXCOM_FLEX_TWI_CWGR) Clock Divider Mask */
#define FLEXCOM_FLEX_TWI_CWGR_CKDIV(value)  (FLEXCOM_FLEX_TWI_CWGR_CKDIV_Msk & ((value) << FLEXCOM_FLEX_TWI_CWGR_CKDIV_Pos))
#define FLEXCOM_FLEX_TWI_CWGR_BRSRCCLK_Pos  20                                             /**< (FLEXCOM_FLEX_TWI_CWGR) Bit Rate Source Clock Position */
#define FLEXCOM_FLEX_TWI_CWGR_BRSRCCLK_Msk  (_U_(0x1) << FLEXCOM_FLEX_TWI_CWGR_BRSRCCLK_Pos)  /**< (FLEXCOM_FLEX_TWI_CWGR) Bit Rate Source Clock Mask */
#define FLEXCOM_FLEX_TWI_CWGR_BRSRCCLK      FLEXCOM_FLEX_TWI_CWGR_BRSRCCLK_Msk             /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_CWGR_BRSRCCLK_Msk instead */
#define   FLEXCOM_FLEX_TWI_CWGR_BRSRCCLK_PERIPH_CLK_Val _U_(0x0)                                       /**< (FLEXCOM_FLEX_TWI_CWGR) The peripheral clock is the source clock for the bit rate generation.  */
#define   FLEXCOM_FLEX_TWI_CWGR_BRSRCCLK_GCLK_Val _U_(0x1)                                       /**< (FLEXCOM_FLEX_TWI_CWGR) GCLK is the source clock for the bit rate generation, thus the bit rate can be independent of the core/peripheral clock.  */
#define FLEXCOM_FLEX_TWI_CWGR_BRSRCCLK_PERIPH_CLK (FLEXCOM_FLEX_TWI_CWGR_BRSRCCLK_PERIPH_CLK_Val << FLEXCOM_FLEX_TWI_CWGR_BRSRCCLK_Pos)  /**< (FLEXCOM_FLEX_TWI_CWGR) The peripheral clock is the source clock for the bit rate generation. Position  */
#define FLEXCOM_FLEX_TWI_CWGR_BRSRCCLK_GCLK (FLEXCOM_FLEX_TWI_CWGR_BRSRCCLK_GCLK_Val << FLEXCOM_FLEX_TWI_CWGR_BRSRCCLK_Pos)  /**< (FLEXCOM_FLEX_TWI_CWGR) GCLK is the source clock for the bit rate generation, thus the bit rate can be independent of the core/peripheral clock. Position  */
#define FLEXCOM_FLEX_TWI_CWGR_HOLD_Pos      24                                             /**< (FLEXCOM_FLEX_TWI_CWGR) TWD Hold Time Versus TWCK Falling Position */
#define FLEXCOM_FLEX_TWI_CWGR_HOLD_Msk      (_U_(0x1F) << FLEXCOM_FLEX_TWI_CWGR_HOLD_Pos)  /**< (FLEXCOM_FLEX_TWI_CWGR) TWD Hold Time Versus TWCK Falling Mask */
#define FLEXCOM_FLEX_TWI_CWGR_HOLD(value)   (FLEXCOM_FLEX_TWI_CWGR_HOLD_Msk & ((value) << FLEXCOM_FLEX_TWI_CWGR_HOLD_Pos))
#define FLEXCOM_FLEX_TWI_CWGR_MASK          _U_(0x1F17FFFF)                                /**< \deprecated (FLEXCOM_FLEX_TWI_CWGR) Register MASK  (Use FLEXCOM_FLEX_TWI_CWGR_Msk instead)  */
#define FLEXCOM_FLEX_TWI_CWGR_Msk           _U_(0x1F17FFFF)                                /**< (FLEXCOM_FLEX_TWI_CWGR) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_SR : (FLEXCOM Offset: 0x620) (R/ 32) TWI Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXCOMP:1;                  /**< bit:      0  Transmission Completed (cleared by writing FLEX_TWI_THR) */
    uint32_t RXRDY:1;                   /**< bit:      1  Receive Holding Register Ready (cleared when reading FLEX_TWI_RHR) */
    uint32_t TXRDY:1;                   /**< bit:      2  Transmit Holding Register Ready (cleared by writing FLEX_TWI_THR) */
    uint32_t SVREAD:1;                  /**< bit:      3  Slave Read                               */
    uint32_t SVACC:1;                   /**< bit:      4  Slave Access                             */
    uint32_t GACC:1;                    /**< bit:      5  General Call Access (cleared on read)    */
    uint32_t OVRE:1;                    /**< bit:      6  Overrun Error (cleared on read)          */
    uint32_t UNRE:1;                    /**< bit:      7  Underrun Error (cleared on read)         */
    uint32_t NACK:1;                    /**< bit:      8  Not Acknowledged (cleared on read)       */
    uint32_t ARBLST:1;                  /**< bit:      9  Arbitration Lost (cleared on read)       */
    uint32_t SCLWS:1;                   /**< bit:     10  Clock Wait State                         */
    uint32_t EOSACC:1;                  /**< bit:     11  End Of Slave Access (cleared on read)    */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t MCACK:1;                   /**< bit:     16  Master Code Acknowledge (cleared on read) */
    uint32_t :1;                        /**< bit:     17  Reserved */
    uint32_t TOUT:1;                    /**< bit:     18  Timeout Error (cleared on read)          */
    uint32_t PECERR:1;                  /**< bit:     19  PEC Error (cleared on read)              */
    uint32_t SMBDAM:1;                  /**< bit:     20  SMBus Default Address Match (cleared on read) */
    uint32_t SMBHHM:1;                  /**< bit:     21  SMBus Host Header Address Match (cleared on read) */
    uint32_t :1;                        /**< bit:     22  Reserved */
    uint32_t LOCK:1;                    /**< bit:     23  TWI Lock Due to Frame Errors             */
    uint32_t SCL:1;                     /**< bit:     24  SCL Line Value                           */
    uint32_t SDA:1;                     /**< bit:     25  SDA Line Value                           */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct { // FIFO_ENABLED mode
    uint32_t TXCOMP:1;                  /**< bit:      0  Transmission Completed (cleared by writing FLEX_TWI_THR) */
    uint32_t RXRDY:1;                   /**< bit:      1  Receive Holding Register Ready (cleared when reading FLEX_TWI_RHR) */
    uint32_t TXRDY:1;                   /**< bit:      2  Transmit Holding Register Ready (cleared by writing FLEX_TWI_THR) */
    uint32_t SVREAD:1;                  /**< bit:      3  Slave Read                               */
    uint32_t SVACC:1;                   /**< bit:      4  Slave Access                             */
    uint32_t GACC:1;                    /**< bit:      5  General Call Access (cleared on read)    */
    uint32_t OVRE:1;                    /**< bit:      6  Overrun Error (cleared on read)          */
    uint32_t UNRE:1;                    /**< bit:      7  Underrun Error (cleared on read)         */
    uint32_t NACK:1;                    /**< bit:      8  Not Acknowledged (cleared on read)       */
    uint32_t ARBLST:1;                  /**< bit:      9  Arbitration Lost (cleared on read)       */
    uint32_t SCLWS:1;                   /**< bit:     10  Clock Wait State                         */
    uint32_t EOSACC:1;                  /**< bit:     11  End Of Slave Access (cleared on read)    */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t MCACK:1;                   /**< bit:     16  Master Code Acknowledge (cleared on read) */
    uint32_t :1;                        /**< bit:     17  Reserved */
    uint32_t TOUT:1;                    /**< bit:     18  Timeout Error (cleared on read)          */
    uint32_t PECERR:1;                  /**< bit:     19  PEC Error (cleared on read)              */
    uint32_t SMBDAM:1;                  /**< bit:     20  SMBus Default Address Match (cleared on read) */
    uint32_t SMBHHM:1;                  /**< bit:     21  SMBus Host Header Address Match (cleared on read) */
    uint32_t :1;                        /**< bit:     22  Reserved */
    uint32_t TXFLOCK:1;                 /**< bit:     23  Transmit FIFO Lock                       */
    uint32_t SCL:1;                     /**< bit:     24  SCL Line Value                           */
    uint32_t SDA:1;                     /**< bit:     25  SDA Line Value                           */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } FIFO_ENABLED;                                /**< Structure used for FIFO_ENABLED mode access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_SR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_SR_OFFSET          (0x620)                                       /**<  (FLEXCOM_FLEX_TWI_SR) TWI Status Register  Offset */

#define FLEXCOM_FLEX_TWI_SR_TXCOMP_Pos      0                                              /**< (FLEXCOM_FLEX_TWI_SR) Transmission Completed (cleared by writing FLEX_TWI_THR) Position */
#define FLEXCOM_FLEX_TWI_SR_TXCOMP_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_TXCOMP_Pos)   /**< (FLEXCOM_FLEX_TWI_SR) Transmission Completed (cleared by writing FLEX_TWI_THR) Mask */
#define FLEXCOM_FLEX_TWI_SR_TXCOMP          FLEXCOM_FLEX_TWI_SR_TXCOMP_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_TXCOMP_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_RXRDY_Pos       1                                              /**< (FLEXCOM_FLEX_TWI_SR) Receive Holding Register Ready (cleared when reading FLEX_TWI_RHR) Position */
#define FLEXCOM_FLEX_TWI_SR_RXRDY_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_RXRDY_Pos)    /**< (FLEXCOM_FLEX_TWI_SR) Receive Holding Register Ready (cleared when reading FLEX_TWI_RHR) Mask */
#define FLEXCOM_FLEX_TWI_SR_RXRDY           FLEXCOM_FLEX_TWI_SR_RXRDY_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_RXRDY_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_TXRDY_Pos       2                                              /**< (FLEXCOM_FLEX_TWI_SR) Transmit Holding Register Ready (cleared by writing FLEX_TWI_THR) Position */
#define FLEXCOM_FLEX_TWI_SR_TXRDY_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_TXRDY_Pos)    /**< (FLEXCOM_FLEX_TWI_SR) Transmit Holding Register Ready (cleared by writing FLEX_TWI_THR) Mask */
#define FLEXCOM_FLEX_TWI_SR_TXRDY           FLEXCOM_FLEX_TWI_SR_TXRDY_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_TXRDY_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_SVREAD_Pos      3                                              /**< (FLEXCOM_FLEX_TWI_SR) Slave Read Position */
#define FLEXCOM_FLEX_TWI_SR_SVREAD_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_SVREAD_Pos)   /**< (FLEXCOM_FLEX_TWI_SR) Slave Read Mask */
#define FLEXCOM_FLEX_TWI_SR_SVREAD          FLEXCOM_FLEX_TWI_SR_SVREAD_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_SVREAD_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_SVACC_Pos       4                                              /**< (FLEXCOM_FLEX_TWI_SR) Slave Access Position */
#define FLEXCOM_FLEX_TWI_SR_SVACC_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_SVACC_Pos)    /**< (FLEXCOM_FLEX_TWI_SR) Slave Access Mask */
#define FLEXCOM_FLEX_TWI_SR_SVACC           FLEXCOM_FLEX_TWI_SR_SVACC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_SVACC_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_GACC_Pos        5                                              /**< (FLEXCOM_FLEX_TWI_SR) General Call Access (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_GACC_Msk        (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_GACC_Pos)     /**< (FLEXCOM_FLEX_TWI_SR) General Call Access (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_GACC            FLEXCOM_FLEX_TWI_SR_GACC_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_GACC_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_OVRE_Pos        6                                              /**< (FLEXCOM_FLEX_TWI_SR) Overrun Error (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_OVRE_Msk        (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_OVRE_Pos)     /**< (FLEXCOM_FLEX_TWI_SR) Overrun Error (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_OVRE            FLEXCOM_FLEX_TWI_SR_OVRE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_OVRE_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_UNRE_Pos        7                                              /**< (FLEXCOM_FLEX_TWI_SR) Underrun Error (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_UNRE_Msk        (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_UNRE_Pos)     /**< (FLEXCOM_FLEX_TWI_SR) Underrun Error (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_UNRE            FLEXCOM_FLEX_TWI_SR_UNRE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_UNRE_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_NACK_Pos        8                                              /**< (FLEXCOM_FLEX_TWI_SR) Not Acknowledged (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_NACK_Msk        (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_NACK_Pos)     /**< (FLEXCOM_FLEX_TWI_SR) Not Acknowledged (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_NACK            FLEXCOM_FLEX_TWI_SR_NACK_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_NACK_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_ARBLST_Pos      9                                              /**< (FLEXCOM_FLEX_TWI_SR) Arbitration Lost (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_ARBLST_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_ARBLST_Pos)   /**< (FLEXCOM_FLEX_TWI_SR) Arbitration Lost (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_ARBLST          FLEXCOM_FLEX_TWI_SR_ARBLST_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_ARBLST_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_SCLWS_Pos       10                                             /**< (FLEXCOM_FLEX_TWI_SR) Clock Wait State Position */
#define FLEXCOM_FLEX_TWI_SR_SCLWS_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_SCLWS_Pos)    /**< (FLEXCOM_FLEX_TWI_SR) Clock Wait State Mask */
#define FLEXCOM_FLEX_TWI_SR_SCLWS           FLEXCOM_FLEX_TWI_SR_SCLWS_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_SCLWS_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_EOSACC_Pos      11                                             /**< (FLEXCOM_FLEX_TWI_SR) End Of Slave Access (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_EOSACC_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_EOSACC_Pos)   /**< (FLEXCOM_FLEX_TWI_SR) End Of Slave Access (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_EOSACC          FLEXCOM_FLEX_TWI_SR_EOSACC_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_EOSACC_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_MCACK_Pos       16                                             /**< (FLEXCOM_FLEX_TWI_SR) Master Code Acknowledge (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_MCACK_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_MCACK_Pos)    /**< (FLEXCOM_FLEX_TWI_SR) Master Code Acknowledge (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_MCACK           FLEXCOM_FLEX_TWI_SR_MCACK_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_MCACK_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_TOUT_Pos        18                                             /**< (FLEXCOM_FLEX_TWI_SR) Timeout Error (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_TOUT_Msk        (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_TOUT_Pos)     /**< (FLEXCOM_FLEX_TWI_SR) Timeout Error (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_TOUT            FLEXCOM_FLEX_TWI_SR_TOUT_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_TOUT_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_PECERR_Pos      19                                             /**< (FLEXCOM_FLEX_TWI_SR) PEC Error (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_PECERR_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_PECERR_Pos)   /**< (FLEXCOM_FLEX_TWI_SR) PEC Error (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_PECERR          FLEXCOM_FLEX_TWI_SR_PECERR_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_PECERR_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_SMBDAM_Pos      20                                             /**< (FLEXCOM_FLEX_TWI_SR) SMBus Default Address Match (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_SMBDAM_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_SMBDAM_Pos)   /**< (FLEXCOM_FLEX_TWI_SR) SMBus Default Address Match (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_SMBDAM          FLEXCOM_FLEX_TWI_SR_SMBDAM_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_SMBDAM_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_SMBHHM_Pos      21                                             /**< (FLEXCOM_FLEX_TWI_SR) SMBus Host Header Address Match (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_SMBHHM_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_SMBHHM_Pos)   /**< (FLEXCOM_FLEX_TWI_SR) SMBus Host Header Address Match (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_SMBHHM          FLEXCOM_FLEX_TWI_SR_SMBHHM_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_SMBHHM_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_LOCK_Pos        23                                             /**< (FLEXCOM_FLEX_TWI_SR) TWI Lock Due to Frame Errors Position */
#define FLEXCOM_FLEX_TWI_SR_LOCK_Msk        (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_LOCK_Pos)     /**< (FLEXCOM_FLEX_TWI_SR) TWI Lock Due to Frame Errors Mask */
#define FLEXCOM_FLEX_TWI_SR_LOCK            FLEXCOM_FLEX_TWI_SR_LOCK_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_LOCK_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_SCL_Pos         24                                             /**< (FLEXCOM_FLEX_TWI_SR) SCL Line Value Position */
#define FLEXCOM_FLEX_TWI_SR_SCL_Msk         (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_SCL_Pos)      /**< (FLEXCOM_FLEX_TWI_SR) SCL Line Value Mask */
#define FLEXCOM_FLEX_TWI_SR_SCL             FLEXCOM_FLEX_TWI_SR_SCL_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_SCL_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_SDA_Pos         25                                             /**< (FLEXCOM_FLEX_TWI_SR) SDA Line Value Position */
#define FLEXCOM_FLEX_TWI_SR_SDA_Msk         (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_SDA_Pos)      /**< (FLEXCOM_FLEX_TWI_SR) SDA Line Value Mask */
#define FLEXCOM_FLEX_TWI_SR_SDA             FLEXCOM_FLEX_TWI_SR_SDA_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_SDA_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_MASK            _U_(0x3BD0FFF)                                 /**< \deprecated (FLEXCOM_FLEX_TWI_SR) Register MASK  (Use FLEXCOM_FLEX_TWI_SR_Msk instead)  */
#define FLEXCOM_FLEX_TWI_SR_Msk             _U_(0x3BD0FFF)                                 /**< (FLEXCOM_FLEX_TWI_SR) Register Mask  */

/* FIFO_ENABLED mode */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TXCOMP_Pos 0                                              /**< (FLEXCOM_FLEX_TWI_SR) Transmission Completed (cleared by writing FLEX_TWI_THR) Position */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TXCOMP_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TXCOMP_Pos)  /**< (FLEXCOM_FLEX_TWI_SR) Transmission Completed (cleared by writing FLEX_TWI_THR) Mask */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TXCOMP FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TXCOMP_Msk    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TXCOMP_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_RXRDY_Pos 1                                              /**< (FLEXCOM_FLEX_TWI_SR) Receive Holding Register Ready (cleared when reading FLEX_TWI_RHR) Position */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_RXRDY_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_RXRDY_Pos)  /**< (FLEXCOM_FLEX_TWI_SR) Receive Holding Register Ready (cleared when reading FLEX_TWI_RHR) Mask */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_RXRDY FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_RXRDY_Msk     /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_RXRDY_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TXRDY_Pos 2                                              /**< (FLEXCOM_FLEX_TWI_SR) Transmit Holding Register Ready (cleared by writing FLEX_TWI_THR) Position */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TXRDY_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TXRDY_Pos)  /**< (FLEXCOM_FLEX_TWI_SR) Transmit Holding Register Ready (cleared by writing FLEX_TWI_THR) Mask */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TXRDY FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TXRDY_Msk     /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TXRDY_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SVREAD_Pos 3                                              /**< (FLEXCOM_FLEX_TWI_SR) Slave Read Position */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SVREAD_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SVREAD_Pos)  /**< (FLEXCOM_FLEX_TWI_SR) Slave Read Mask */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SVREAD FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SVREAD_Msk    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SVREAD_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SVACC_Pos 4                                              /**< (FLEXCOM_FLEX_TWI_SR) Slave Access Position */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SVACC_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SVACC_Pos)  /**< (FLEXCOM_FLEX_TWI_SR) Slave Access Mask */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SVACC FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SVACC_Msk     /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SVACC_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_GACC_Pos 5                                              /**< (FLEXCOM_FLEX_TWI_SR) General Call Access (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_GACC_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_GACC_Pos)  /**< (FLEXCOM_FLEX_TWI_SR) General Call Access (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_GACC FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_GACC_Msk      /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_GACC_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_OVRE_Pos 6                                              /**< (FLEXCOM_FLEX_TWI_SR) Overrun Error (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_OVRE_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_OVRE_Pos)  /**< (FLEXCOM_FLEX_TWI_SR) Overrun Error (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_OVRE FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_OVRE_Msk      /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_OVRE_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_UNRE_Pos 7                                              /**< (FLEXCOM_FLEX_TWI_SR) Underrun Error (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_UNRE_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_UNRE_Pos)  /**< (FLEXCOM_FLEX_TWI_SR) Underrun Error (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_UNRE FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_UNRE_Msk      /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_UNRE_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_NACK_Pos 8                                              /**< (FLEXCOM_FLEX_TWI_SR) Not Acknowledged (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_NACK_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_NACK_Pos)  /**< (FLEXCOM_FLEX_TWI_SR) Not Acknowledged (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_NACK FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_NACK_Msk      /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_NACK_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_ARBLST_Pos 9                                              /**< (FLEXCOM_FLEX_TWI_SR) Arbitration Lost (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_ARBLST_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_ARBLST_Pos)  /**< (FLEXCOM_FLEX_TWI_SR) Arbitration Lost (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_ARBLST FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_ARBLST_Msk    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_ARBLST_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SCLWS_Pos 10                                             /**< (FLEXCOM_FLEX_TWI_SR) Clock Wait State Position */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SCLWS_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SCLWS_Pos)  /**< (FLEXCOM_FLEX_TWI_SR) Clock Wait State Mask */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SCLWS FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SCLWS_Msk     /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SCLWS_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_EOSACC_Pos 11                                             /**< (FLEXCOM_FLEX_TWI_SR) End Of Slave Access (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_EOSACC_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_EOSACC_Pos)  /**< (FLEXCOM_FLEX_TWI_SR) End Of Slave Access (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_EOSACC FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_EOSACC_Msk    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_EOSACC_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_MCACK_Pos 16                                             /**< (FLEXCOM_FLEX_TWI_SR) Master Code Acknowledge (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_MCACK_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_MCACK_Pos)  /**< (FLEXCOM_FLEX_TWI_SR) Master Code Acknowledge (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_MCACK FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_MCACK_Msk     /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_MCACK_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TOUT_Pos 18                                             /**< (FLEXCOM_FLEX_TWI_SR) Timeout Error (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TOUT_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TOUT_Pos)  /**< (FLEXCOM_FLEX_TWI_SR) Timeout Error (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TOUT FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TOUT_Msk      /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TOUT_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_PECERR_Pos 19                                             /**< (FLEXCOM_FLEX_TWI_SR) PEC Error (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_PECERR_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_PECERR_Pos)  /**< (FLEXCOM_FLEX_TWI_SR) PEC Error (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_PECERR FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_PECERR_Msk    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_PECERR_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SMBDAM_Pos 20                                             /**< (FLEXCOM_FLEX_TWI_SR) SMBus Default Address Match (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SMBDAM_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SMBDAM_Pos)  /**< (FLEXCOM_FLEX_TWI_SR) SMBus Default Address Match (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SMBDAM FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SMBDAM_Msk    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SMBDAM_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SMBHHM_Pos 21                                             /**< (FLEXCOM_FLEX_TWI_SR) SMBus Host Header Address Match (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SMBHHM_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SMBHHM_Pos)  /**< (FLEXCOM_FLEX_TWI_SR) SMBus Host Header Address Match (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SMBHHM FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SMBHHM_Msk    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SMBHHM_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TXFLOCK_Pos 23                                             /**< (FLEXCOM_FLEX_TWI_SR) Transmit FIFO Lock Position */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TXFLOCK_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TXFLOCK_Pos)  /**< (FLEXCOM_FLEX_TWI_SR) Transmit FIFO Lock Mask */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TXFLOCK FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TXFLOCK_Msk   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_TXFLOCK_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SCL_Pos 24                                             /**< (FLEXCOM_FLEX_TWI_SR) SCL Line Value Position */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SCL_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SCL_Pos)  /**< (FLEXCOM_FLEX_TWI_SR) SCL Line Value Mask */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SCL FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SCL_Msk       /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SCL_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SDA_Pos 25                                             /**< (FLEXCOM_FLEX_TWI_SR) SDA Line Value Position */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SDA_Msk (_U_(0x1) << FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SDA_Pos)  /**< (FLEXCOM_FLEX_TWI_SR) SDA Line Value Mask */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SDA FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SDA_Msk       /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_SDA_Msk instead */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_MASK _U_(0x3BD0FFF)                                 /**< \deprecated (FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED) Register MASK  (Use FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_Msk instead)  */
#define FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED_Msk _U_(0x3BD0FFF)                                 /**< (FLEXCOM_FLEX_TWI_SR_FIFO_ENABLED) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_IER : (FLEXCOM Offset: 0x624) (/W 32) TWI Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXCOMP:1;                  /**< bit:      0  Transmission Completed Interrupt Enable  */
    uint32_t RXRDY:1;                   /**< bit:      1  Receive Holding Register Ready Interrupt Enable */
    uint32_t TXRDY:1;                   /**< bit:      2  Transmit Holding Register Ready Interrupt Enable */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t SVACC:1;                   /**< bit:      4  Slave Access Interrupt Enable            */
    uint32_t GACC:1;                    /**< bit:      5  General Call Access Interrupt Enable     */
    uint32_t OVRE:1;                    /**< bit:      6  Overrun Error Interrupt Enable           */
    uint32_t UNRE:1;                    /**< bit:      7  Underrun Error Interrupt Enable          */
    uint32_t NACK:1;                    /**< bit:      8  Not Acknowledge Interrupt Enable         */
    uint32_t ARBLST:1;                  /**< bit:      9  Arbitration Lost Interrupt Enable        */
    uint32_t SCL_WS:1;                  /**< bit:     10  Clock Wait State Interrupt Enable        */
    uint32_t EOSACC:1;                  /**< bit:     11  End Of Slave Access Interrupt Enable     */
    uint32_t ENDRX:1;                   /**< bit:     12  End of Receive Buffer Interrupt Enable   */
    uint32_t ENDTX:1;                   /**< bit:     13  End of Transmit Buffer Interrupt Enable  */
    uint32_t RXBUFF:1;                  /**< bit:     14  Receive Buffer Full Interrupt Enable     */
    uint32_t TXBUFE:1;                  /**< bit:     15  Transmit Buffer Empty Interrupt Enable   */
    uint32_t MCACK:1;                   /**< bit:     16  Master Code Acknowledge Interrupt Enable */
    uint32_t :1;                        /**< bit:     17  Reserved */
    uint32_t TOUT:1;                    /**< bit:     18  Timeout Error Interrupt Enable           */
    uint32_t PECERR:1;                  /**< bit:     19  PEC Error Interrupt Enable               */
    uint32_t SMBDAM:1;                  /**< bit:     20  SMBus Default Address Match Interrupt Enable */
    uint32_t SMBHHM:1;                  /**< bit:     21  SMBus Host Header Address Match Interrupt Enable */
    uint32_t :10;                       /**< bit: 22..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_IER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_IER_OFFSET         (0x624)                                       /**<  (FLEXCOM_FLEX_TWI_IER) TWI Interrupt Enable Register  Offset */

#define FLEXCOM_FLEX_TWI_IER_TXCOMP_Pos     0                                              /**< (FLEXCOM_FLEX_TWI_IER) Transmission Completed Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_IER_TXCOMP_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IER_TXCOMP_Pos)  /**< (FLEXCOM_FLEX_TWI_IER) Transmission Completed Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_IER_TXCOMP         FLEXCOM_FLEX_TWI_IER_TXCOMP_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IER_TXCOMP_Msk instead */
#define FLEXCOM_FLEX_TWI_IER_RXRDY_Pos      1                                              /**< (FLEXCOM_FLEX_TWI_IER) Receive Holding Register Ready Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_IER_RXRDY_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_IER_RXRDY_Pos)   /**< (FLEXCOM_FLEX_TWI_IER) Receive Holding Register Ready Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_IER_RXRDY          FLEXCOM_FLEX_TWI_IER_RXRDY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IER_RXRDY_Msk instead */
#define FLEXCOM_FLEX_TWI_IER_TXRDY_Pos      2                                              /**< (FLEXCOM_FLEX_TWI_IER) Transmit Holding Register Ready Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_IER_TXRDY_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_IER_TXRDY_Pos)   /**< (FLEXCOM_FLEX_TWI_IER) Transmit Holding Register Ready Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_IER_TXRDY          FLEXCOM_FLEX_TWI_IER_TXRDY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IER_TXRDY_Msk instead */
#define FLEXCOM_FLEX_TWI_IER_SVACC_Pos      4                                              /**< (FLEXCOM_FLEX_TWI_IER) Slave Access Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_IER_SVACC_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_IER_SVACC_Pos)   /**< (FLEXCOM_FLEX_TWI_IER) Slave Access Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_IER_SVACC          FLEXCOM_FLEX_TWI_IER_SVACC_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IER_SVACC_Msk instead */
#define FLEXCOM_FLEX_TWI_IER_GACC_Pos       5                                              /**< (FLEXCOM_FLEX_TWI_IER) General Call Access Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_IER_GACC_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_IER_GACC_Pos)    /**< (FLEXCOM_FLEX_TWI_IER) General Call Access Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_IER_GACC           FLEXCOM_FLEX_TWI_IER_GACC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IER_GACC_Msk instead */
#define FLEXCOM_FLEX_TWI_IER_OVRE_Pos       6                                              /**< (FLEXCOM_FLEX_TWI_IER) Overrun Error Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_IER_OVRE_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_IER_OVRE_Pos)    /**< (FLEXCOM_FLEX_TWI_IER) Overrun Error Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_IER_OVRE           FLEXCOM_FLEX_TWI_IER_OVRE_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IER_OVRE_Msk instead */
#define FLEXCOM_FLEX_TWI_IER_UNRE_Pos       7                                              /**< (FLEXCOM_FLEX_TWI_IER) Underrun Error Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_IER_UNRE_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_IER_UNRE_Pos)    /**< (FLEXCOM_FLEX_TWI_IER) Underrun Error Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_IER_UNRE           FLEXCOM_FLEX_TWI_IER_UNRE_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IER_UNRE_Msk instead */
#define FLEXCOM_FLEX_TWI_IER_NACK_Pos       8                                              /**< (FLEXCOM_FLEX_TWI_IER) Not Acknowledge Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_IER_NACK_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_IER_NACK_Pos)    /**< (FLEXCOM_FLEX_TWI_IER) Not Acknowledge Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_IER_NACK           FLEXCOM_FLEX_TWI_IER_NACK_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IER_NACK_Msk instead */
#define FLEXCOM_FLEX_TWI_IER_ARBLST_Pos     9                                              /**< (FLEXCOM_FLEX_TWI_IER) Arbitration Lost Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_IER_ARBLST_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IER_ARBLST_Pos)  /**< (FLEXCOM_FLEX_TWI_IER) Arbitration Lost Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_IER_ARBLST         FLEXCOM_FLEX_TWI_IER_ARBLST_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IER_ARBLST_Msk instead */
#define FLEXCOM_FLEX_TWI_IER_SCL_WS_Pos     10                                             /**< (FLEXCOM_FLEX_TWI_IER) Clock Wait State Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_IER_SCL_WS_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IER_SCL_WS_Pos)  /**< (FLEXCOM_FLEX_TWI_IER) Clock Wait State Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_IER_SCL_WS         FLEXCOM_FLEX_TWI_IER_SCL_WS_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IER_SCL_WS_Msk instead */
#define FLEXCOM_FLEX_TWI_IER_EOSACC_Pos     11                                             /**< (FLEXCOM_FLEX_TWI_IER) End Of Slave Access Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_IER_EOSACC_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IER_EOSACC_Pos)  /**< (FLEXCOM_FLEX_TWI_IER) End Of Slave Access Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_IER_EOSACC         FLEXCOM_FLEX_TWI_IER_EOSACC_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IER_EOSACC_Msk instead */
#define FLEXCOM_FLEX_TWI_IER_ENDRX_Pos      12                                             /**< (FLEXCOM_FLEX_TWI_IER) End of Receive Buffer Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_IER_ENDRX_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_IER_ENDRX_Pos)   /**< (FLEXCOM_FLEX_TWI_IER) End of Receive Buffer Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_IER_ENDRX          FLEXCOM_FLEX_TWI_IER_ENDRX_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IER_ENDRX_Msk instead */
#define FLEXCOM_FLEX_TWI_IER_ENDTX_Pos      13                                             /**< (FLEXCOM_FLEX_TWI_IER) End of Transmit Buffer Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_IER_ENDTX_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_IER_ENDTX_Pos)   /**< (FLEXCOM_FLEX_TWI_IER) End of Transmit Buffer Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_IER_ENDTX          FLEXCOM_FLEX_TWI_IER_ENDTX_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IER_ENDTX_Msk instead */
#define FLEXCOM_FLEX_TWI_IER_RXBUFF_Pos     14                                             /**< (FLEXCOM_FLEX_TWI_IER) Receive Buffer Full Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_IER_RXBUFF_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IER_RXBUFF_Pos)  /**< (FLEXCOM_FLEX_TWI_IER) Receive Buffer Full Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_IER_RXBUFF         FLEXCOM_FLEX_TWI_IER_RXBUFF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IER_RXBUFF_Msk instead */
#define FLEXCOM_FLEX_TWI_IER_TXBUFE_Pos     15                                             /**< (FLEXCOM_FLEX_TWI_IER) Transmit Buffer Empty Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_IER_TXBUFE_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IER_TXBUFE_Pos)  /**< (FLEXCOM_FLEX_TWI_IER) Transmit Buffer Empty Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_IER_TXBUFE         FLEXCOM_FLEX_TWI_IER_TXBUFE_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IER_TXBUFE_Msk instead */
#define FLEXCOM_FLEX_TWI_IER_MCACK_Pos      16                                             /**< (FLEXCOM_FLEX_TWI_IER) Master Code Acknowledge Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_IER_MCACK_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_IER_MCACK_Pos)   /**< (FLEXCOM_FLEX_TWI_IER) Master Code Acknowledge Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_IER_MCACK          FLEXCOM_FLEX_TWI_IER_MCACK_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IER_MCACK_Msk instead */
#define FLEXCOM_FLEX_TWI_IER_TOUT_Pos       18                                             /**< (FLEXCOM_FLEX_TWI_IER) Timeout Error Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_IER_TOUT_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_IER_TOUT_Pos)    /**< (FLEXCOM_FLEX_TWI_IER) Timeout Error Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_IER_TOUT           FLEXCOM_FLEX_TWI_IER_TOUT_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IER_TOUT_Msk instead */
#define FLEXCOM_FLEX_TWI_IER_PECERR_Pos     19                                             /**< (FLEXCOM_FLEX_TWI_IER) PEC Error Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_IER_PECERR_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IER_PECERR_Pos)  /**< (FLEXCOM_FLEX_TWI_IER) PEC Error Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_IER_PECERR         FLEXCOM_FLEX_TWI_IER_PECERR_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IER_PECERR_Msk instead */
#define FLEXCOM_FLEX_TWI_IER_SMBDAM_Pos     20                                             /**< (FLEXCOM_FLEX_TWI_IER) SMBus Default Address Match Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_IER_SMBDAM_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IER_SMBDAM_Pos)  /**< (FLEXCOM_FLEX_TWI_IER) SMBus Default Address Match Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_IER_SMBDAM         FLEXCOM_FLEX_TWI_IER_SMBDAM_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IER_SMBDAM_Msk instead */
#define FLEXCOM_FLEX_TWI_IER_SMBHHM_Pos     21                                             /**< (FLEXCOM_FLEX_TWI_IER) SMBus Host Header Address Match Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_IER_SMBHHM_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IER_SMBHHM_Pos)  /**< (FLEXCOM_FLEX_TWI_IER) SMBus Host Header Address Match Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_IER_SMBHHM         FLEXCOM_FLEX_TWI_IER_SMBHHM_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IER_SMBHHM_Msk instead */
#define FLEXCOM_FLEX_TWI_IER_MASK           _U_(0x3DFFF7)                                  /**< \deprecated (FLEXCOM_FLEX_TWI_IER) Register MASK  (Use FLEXCOM_FLEX_TWI_IER_Msk instead)  */
#define FLEXCOM_FLEX_TWI_IER_Msk            _U_(0x3DFFF7)                                  /**< (FLEXCOM_FLEX_TWI_IER) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_IDR : (FLEXCOM Offset: 0x628) (/W 32) TWI Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXCOMP:1;                  /**< bit:      0  Transmission Completed Interrupt Disable */
    uint32_t RXRDY:1;                   /**< bit:      1  Receive Holding Register Ready Interrupt Disable */
    uint32_t TXRDY:1;                   /**< bit:      2  Transmit Holding Register Ready Interrupt Disable */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t SVACC:1;                   /**< bit:      4  Slave Access Interrupt Disable           */
    uint32_t GACC:1;                    /**< bit:      5  General Call Access Interrupt Disable    */
    uint32_t OVRE:1;                    /**< bit:      6  Overrun Error Interrupt Disable          */
    uint32_t UNRE:1;                    /**< bit:      7  Underrun Error Interrupt Disable         */
    uint32_t NACK:1;                    /**< bit:      8  Not Acknowledge Interrupt Disable        */
    uint32_t ARBLST:1;                  /**< bit:      9  Arbitration Lost Interrupt Disable       */
    uint32_t SCL_WS:1;                  /**< bit:     10  Clock Wait State Interrupt Disable       */
    uint32_t EOSACC:1;                  /**< bit:     11  End Of Slave Access Interrupt Disable    */
    uint32_t ENDRX:1;                   /**< bit:     12  End of Receive Buffer Interrupt Disable  */
    uint32_t ENDTX:1;                   /**< bit:     13  End of Transmit Buffer Interrupt Disable */
    uint32_t RXBUFF:1;                  /**< bit:     14  Receive Buffer Full Interrupt Disable    */
    uint32_t TXBUFE:1;                  /**< bit:     15  Transmit Buffer Empty Interrupt Disable  */
    uint32_t MCACK:1;                   /**< bit:     16  Master Code Acknowledge Interrupt Disable */
    uint32_t :1;                        /**< bit:     17  Reserved */
    uint32_t TOUT:1;                    /**< bit:     18  Timeout Error Interrupt Disable          */
    uint32_t PECERR:1;                  /**< bit:     19  PEC Error Interrupt Disable              */
    uint32_t SMBDAM:1;                  /**< bit:     20  SMBus Default Address Match Interrupt Disable */
    uint32_t SMBHHM:1;                  /**< bit:     21  SMBus Host Header Address Match Interrupt Disable */
    uint32_t :10;                       /**< bit: 22..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_IDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_IDR_OFFSET         (0x628)                                       /**<  (FLEXCOM_FLEX_TWI_IDR) TWI Interrupt Disable Register  Offset */

#define FLEXCOM_FLEX_TWI_IDR_TXCOMP_Pos     0                                              /**< (FLEXCOM_FLEX_TWI_IDR) Transmission Completed Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_IDR_TXCOMP_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IDR_TXCOMP_Pos)  /**< (FLEXCOM_FLEX_TWI_IDR) Transmission Completed Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_IDR_TXCOMP         FLEXCOM_FLEX_TWI_IDR_TXCOMP_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IDR_TXCOMP_Msk instead */
#define FLEXCOM_FLEX_TWI_IDR_RXRDY_Pos      1                                              /**< (FLEXCOM_FLEX_TWI_IDR) Receive Holding Register Ready Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_IDR_RXRDY_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_IDR_RXRDY_Pos)   /**< (FLEXCOM_FLEX_TWI_IDR) Receive Holding Register Ready Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_IDR_RXRDY          FLEXCOM_FLEX_TWI_IDR_RXRDY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IDR_RXRDY_Msk instead */
#define FLEXCOM_FLEX_TWI_IDR_TXRDY_Pos      2                                              /**< (FLEXCOM_FLEX_TWI_IDR) Transmit Holding Register Ready Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_IDR_TXRDY_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_IDR_TXRDY_Pos)   /**< (FLEXCOM_FLEX_TWI_IDR) Transmit Holding Register Ready Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_IDR_TXRDY          FLEXCOM_FLEX_TWI_IDR_TXRDY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IDR_TXRDY_Msk instead */
#define FLEXCOM_FLEX_TWI_IDR_SVACC_Pos      4                                              /**< (FLEXCOM_FLEX_TWI_IDR) Slave Access Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_IDR_SVACC_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_IDR_SVACC_Pos)   /**< (FLEXCOM_FLEX_TWI_IDR) Slave Access Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_IDR_SVACC          FLEXCOM_FLEX_TWI_IDR_SVACC_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IDR_SVACC_Msk instead */
#define FLEXCOM_FLEX_TWI_IDR_GACC_Pos       5                                              /**< (FLEXCOM_FLEX_TWI_IDR) General Call Access Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_IDR_GACC_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_IDR_GACC_Pos)    /**< (FLEXCOM_FLEX_TWI_IDR) General Call Access Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_IDR_GACC           FLEXCOM_FLEX_TWI_IDR_GACC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IDR_GACC_Msk instead */
#define FLEXCOM_FLEX_TWI_IDR_OVRE_Pos       6                                              /**< (FLEXCOM_FLEX_TWI_IDR) Overrun Error Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_IDR_OVRE_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_IDR_OVRE_Pos)    /**< (FLEXCOM_FLEX_TWI_IDR) Overrun Error Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_IDR_OVRE           FLEXCOM_FLEX_TWI_IDR_OVRE_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IDR_OVRE_Msk instead */
#define FLEXCOM_FLEX_TWI_IDR_UNRE_Pos       7                                              /**< (FLEXCOM_FLEX_TWI_IDR) Underrun Error Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_IDR_UNRE_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_IDR_UNRE_Pos)    /**< (FLEXCOM_FLEX_TWI_IDR) Underrun Error Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_IDR_UNRE           FLEXCOM_FLEX_TWI_IDR_UNRE_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IDR_UNRE_Msk instead */
#define FLEXCOM_FLEX_TWI_IDR_NACK_Pos       8                                              /**< (FLEXCOM_FLEX_TWI_IDR) Not Acknowledge Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_IDR_NACK_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_IDR_NACK_Pos)    /**< (FLEXCOM_FLEX_TWI_IDR) Not Acknowledge Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_IDR_NACK           FLEXCOM_FLEX_TWI_IDR_NACK_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IDR_NACK_Msk instead */
#define FLEXCOM_FLEX_TWI_IDR_ARBLST_Pos     9                                              /**< (FLEXCOM_FLEX_TWI_IDR) Arbitration Lost Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_IDR_ARBLST_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IDR_ARBLST_Pos)  /**< (FLEXCOM_FLEX_TWI_IDR) Arbitration Lost Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_IDR_ARBLST         FLEXCOM_FLEX_TWI_IDR_ARBLST_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IDR_ARBLST_Msk instead */
#define FLEXCOM_FLEX_TWI_IDR_SCL_WS_Pos     10                                             /**< (FLEXCOM_FLEX_TWI_IDR) Clock Wait State Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_IDR_SCL_WS_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IDR_SCL_WS_Pos)  /**< (FLEXCOM_FLEX_TWI_IDR) Clock Wait State Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_IDR_SCL_WS         FLEXCOM_FLEX_TWI_IDR_SCL_WS_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IDR_SCL_WS_Msk instead */
#define FLEXCOM_FLEX_TWI_IDR_EOSACC_Pos     11                                             /**< (FLEXCOM_FLEX_TWI_IDR) End Of Slave Access Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_IDR_EOSACC_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IDR_EOSACC_Pos)  /**< (FLEXCOM_FLEX_TWI_IDR) End Of Slave Access Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_IDR_EOSACC         FLEXCOM_FLEX_TWI_IDR_EOSACC_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IDR_EOSACC_Msk instead */
#define FLEXCOM_FLEX_TWI_IDR_ENDRX_Pos      12                                             /**< (FLEXCOM_FLEX_TWI_IDR) End of Receive Buffer Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_IDR_ENDRX_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_IDR_ENDRX_Pos)   /**< (FLEXCOM_FLEX_TWI_IDR) End of Receive Buffer Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_IDR_ENDRX          FLEXCOM_FLEX_TWI_IDR_ENDRX_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IDR_ENDRX_Msk instead */
#define FLEXCOM_FLEX_TWI_IDR_ENDTX_Pos      13                                             /**< (FLEXCOM_FLEX_TWI_IDR) End of Transmit Buffer Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_IDR_ENDTX_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_IDR_ENDTX_Pos)   /**< (FLEXCOM_FLEX_TWI_IDR) End of Transmit Buffer Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_IDR_ENDTX          FLEXCOM_FLEX_TWI_IDR_ENDTX_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IDR_ENDTX_Msk instead */
#define FLEXCOM_FLEX_TWI_IDR_RXBUFF_Pos     14                                             /**< (FLEXCOM_FLEX_TWI_IDR) Receive Buffer Full Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_IDR_RXBUFF_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IDR_RXBUFF_Pos)  /**< (FLEXCOM_FLEX_TWI_IDR) Receive Buffer Full Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_IDR_RXBUFF         FLEXCOM_FLEX_TWI_IDR_RXBUFF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IDR_RXBUFF_Msk instead */
#define FLEXCOM_FLEX_TWI_IDR_TXBUFE_Pos     15                                             /**< (FLEXCOM_FLEX_TWI_IDR) Transmit Buffer Empty Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_IDR_TXBUFE_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IDR_TXBUFE_Pos)  /**< (FLEXCOM_FLEX_TWI_IDR) Transmit Buffer Empty Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_IDR_TXBUFE         FLEXCOM_FLEX_TWI_IDR_TXBUFE_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IDR_TXBUFE_Msk instead */
#define FLEXCOM_FLEX_TWI_IDR_MCACK_Pos      16                                             /**< (FLEXCOM_FLEX_TWI_IDR) Master Code Acknowledge Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_IDR_MCACK_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_IDR_MCACK_Pos)   /**< (FLEXCOM_FLEX_TWI_IDR) Master Code Acknowledge Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_IDR_MCACK          FLEXCOM_FLEX_TWI_IDR_MCACK_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IDR_MCACK_Msk instead */
#define FLEXCOM_FLEX_TWI_IDR_TOUT_Pos       18                                             /**< (FLEXCOM_FLEX_TWI_IDR) Timeout Error Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_IDR_TOUT_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_IDR_TOUT_Pos)    /**< (FLEXCOM_FLEX_TWI_IDR) Timeout Error Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_IDR_TOUT           FLEXCOM_FLEX_TWI_IDR_TOUT_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IDR_TOUT_Msk instead */
#define FLEXCOM_FLEX_TWI_IDR_PECERR_Pos     19                                             /**< (FLEXCOM_FLEX_TWI_IDR) PEC Error Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_IDR_PECERR_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IDR_PECERR_Pos)  /**< (FLEXCOM_FLEX_TWI_IDR) PEC Error Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_IDR_PECERR         FLEXCOM_FLEX_TWI_IDR_PECERR_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IDR_PECERR_Msk instead */
#define FLEXCOM_FLEX_TWI_IDR_SMBDAM_Pos     20                                             /**< (FLEXCOM_FLEX_TWI_IDR) SMBus Default Address Match Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_IDR_SMBDAM_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IDR_SMBDAM_Pos)  /**< (FLEXCOM_FLEX_TWI_IDR) SMBus Default Address Match Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_IDR_SMBDAM         FLEXCOM_FLEX_TWI_IDR_SMBDAM_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IDR_SMBDAM_Msk instead */
#define FLEXCOM_FLEX_TWI_IDR_SMBHHM_Pos     21                                             /**< (FLEXCOM_FLEX_TWI_IDR) SMBus Host Header Address Match Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_IDR_SMBHHM_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IDR_SMBHHM_Pos)  /**< (FLEXCOM_FLEX_TWI_IDR) SMBus Host Header Address Match Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_IDR_SMBHHM         FLEXCOM_FLEX_TWI_IDR_SMBHHM_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IDR_SMBHHM_Msk instead */
#define FLEXCOM_FLEX_TWI_IDR_MASK           _U_(0x3DFFF7)                                  /**< \deprecated (FLEXCOM_FLEX_TWI_IDR) Register MASK  (Use FLEXCOM_FLEX_TWI_IDR_Msk instead)  */
#define FLEXCOM_FLEX_TWI_IDR_Msk            _U_(0x3DFFF7)                                  /**< (FLEXCOM_FLEX_TWI_IDR) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_IMR : (FLEXCOM Offset: 0x62c) (R/ 32) TWI Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXCOMP:1;                  /**< bit:      0  Transmission Completed Interrupt Mask    */
    uint32_t RXRDY:1;                   /**< bit:      1  Receive Holding Register Ready Interrupt Mask */
    uint32_t TXRDY:1;                   /**< bit:      2  Transmit Holding Register Ready Interrupt Mask */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t SVACC:1;                   /**< bit:      4  Slave Access Interrupt Mask              */
    uint32_t GACC:1;                    /**< bit:      5  General Call Access Interrupt Mask       */
    uint32_t OVRE:1;                    /**< bit:      6  Overrun Error Interrupt Mask             */
    uint32_t UNRE:1;                    /**< bit:      7  Underrun Error Interrupt Mask            */
    uint32_t NACK:1;                    /**< bit:      8  Not Acknowledge Interrupt Mask           */
    uint32_t ARBLST:1;                  /**< bit:      9  Arbitration Lost Interrupt Mask          */
    uint32_t SCL_WS:1;                  /**< bit:     10  Clock Wait State Interrupt Mask          */
    uint32_t EOSACC:1;                  /**< bit:     11  End Of Slave Access Interrupt Mask       */
    uint32_t ENDRX:1;                   /**< bit:     12  End of Receive Buffer Interrupt Mask     */
    uint32_t ENDTX:1;                   /**< bit:     13  End of Transmit Buffer Interrupt Mask    */
    uint32_t RXBUFF:1;                  /**< bit:     14  Receive Buffer Full Interrupt Mask       */
    uint32_t TXBUFE:1;                  /**< bit:     15  Transmit Buffer Empty Interrupt Mask     */
    uint32_t MCACK:1;                   /**< bit:     16  Master Code Acknowledge Interrupt Mask   */
    uint32_t :1;                        /**< bit:     17  Reserved */
    uint32_t TOUT:1;                    /**< bit:     18  Timeout Error Interrupt Mask             */
    uint32_t PECERR:1;                  /**< bit:     19  PEC Error Interrupt Mask                 */
    uint32_t SMBDAM:1;                  /**< bit:     20  SMBus Default Address Match Interrupt Mask */
    uint32_t SMBHHM:1;                  /**< bit:     21  SMBus Host Header Address Match Interrupt Mask */
    uint32_t :10;                       /**< bit: 22..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_IMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_IMR_OFFSET         (0x62C)                                       /**<  (FLEXCOM_FLEX_TWI_IMR) TWI Interrupt Mask Register  Offset */

#define FLEXCOM_FLEX_TWI_IMR_TXCOMP_Pos     0                                              /**< (FLEXCOM_FLEX_TWI_IMR) Transmission Completed Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_IMR_TXCOMP_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IMR_TXCOMP_Pos)  /**< (FLEXCOM_FLEX_TWI_IMR) Transmission Completed Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_IMR_TXCOMP         FLEXCOM_FLEX_TWI_IMR_TXCOMP_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IMR_TXCOMP_Msk instead */
#define FLEXCOM_FLEX_TWI_IMR_RXRDY_Pos      1                                              /**< (FLEXCOM_FLEX_TWI_IMR) Receive Holding Register Ready Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_IMR_RXRDY_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_IMR_RXRDY_Pos)   /**< (FLEXCOM_FLEX_TWI_IMR) Receive Holding Register Ready Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_IMR_RXRDY          FLEXCOM_FLEX_TWI_IMR_RXRDY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IMR_RXRDY_Msk instead */
#define FLEXCOM_FLEX_TWI_IMR_TXRDY_Pos      2                                              /**< (FLEXCOM_FLEX_TWI_IMR) Transmit Holding Register Ready Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_IMR_TXRDY_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_IMR_TXRDY_Pos)   /**< (FLEXCOM_FLEX_TWI_IMR) Transmit Holding Register Ready Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_IMR_TXRDY          FLEXCOM_FLEX_TWI_IMR_TXRDY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IMR_TXRDY_Msk instead */
#define FLEXCOM_FLEX_TWI_IMR_SVACC_Pos      4                                              /**< (FLEXCOM_FLEX_TWI_IMR) Slave Access Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_IMR_SVACC_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_IMR_SVACC_Pos)   /**< (FLEXCOM_FLEX_TWI_IMR) Slave Access Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_IMR_SVACC          FLEXCOM_FLEX_TWI_IMR_SVACC_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IMR_SVACC_Msk instead */
#define FLEXCOM_FLEX_TWI_IMR_GACC_Pos       5                                              /**< (FLEXCOM_FLEX_TWI_IMR) General Call Access Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_IMR_GACC_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_IMR_GACC_Pos)    /**< (FLEXCOM_FLEX_TWI_IMR) General Call Access Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_IMR_GACC           FLEXCOM_FLEX_TWI_IMR_GACC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IMR_GACC_Msk instead */
#define FLEXCOM_FLEX_TWI_IMR_OVRE_Pos       6                                              /**< (FLEXCOM_FLEX_TWI_IMR) Overrun Error Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_IMR_OVRE_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_IMR_OVRE_Pos)    /**< (FLEXCOM_FLEX_TWI_IMR) Overrun Error Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_IMR_OVRE           FLEXCOM_FLEX_TWI_IMR_OVRE_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IMR_OVRE_Msk instead */
#define FLEXCOM_FLEX_TWI_IMR_UNRE_Pos       7                                              /**< (FLEXCOM_FLEX_TWI_IMR) Underrun Error Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_IMR_UNRE_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_IMR_UNRE_Pos)    /**< (FLEXCOM_FLEX_TWI_IMR) Underrun Error Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_IMR_UNRE           FLEXCOM_FLEX_TWI_IMR_UNRE_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IMR_UNRE_Msk instead */
#define FLEXCOM_FLEX_TWI_IMR_NACK_Pos       8                                              /**< (FLEXCOM_FLEX_TWI_IMR) Not Acknowledge Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_IMR_NACK_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_IMR_NACK_Pos)    /**< (FLEXCOM_FLEX_TWI_IMR) Not Acknowledge Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_IMR_NACK           FLEXCOM_FLEX_TWI_IMR_NACK_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IMR_NACK_Msk instead */
#define FLEXCOM_FLEX_TWI_IMR_ARBLST_Pos     9                                              /**< (FLEXCOM_FLEX_TWI_IMR) Arbitration Lost Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_IMR_ARBLST_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IMR_ARBLST_Pos)  /**< (FLEXCOM_FLEX_TWI_IMR) Arbitration Lost Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_IMR_ARBLST         FLEXCOM_FLEX_TWI_IMR_ARBLST_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IMR_ARBLST_Msk instead */
#define FLEXCOM_FLEX_TWI_IMR_SCL_WS_Pos     10                                             /**< (FLEXCOM_FLEX_TWI_IMR) Clock Wait State Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_IMR_SCL_WS_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IMR_SCL_WS_Pos)  /**< (FLEXCOM_FLEX_TWI_IMR) Clock Wait State Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_IMR_SCL_WS         FLEXCOM_FLEX_TWI_IMR_SCL_WS_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IMR_SCL_WS_Msk instead */
#define FLEXCOM_FLEX_TWI_IMR_EOSACC_Pos     11                                             /**< (FLEXCOM_FLEX_TWI_IMR) End Of Slave Access Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_IMR_EOSACC_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IMR_EOSACC_Pos)  /**< (FLEXCOM_FLEX_TWI_IMR) End Of Slave Access Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_IMR_EOSACC         FLEXCOM_FLEX_TWI_IMR_EOSACC_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IMR_EOSACC_Msk instead */
#define FLEXCOM_FLEX_TWI_IMR_ENDRX_Pos      12                                             /**< (FLEXCOM_FLEX_TWI_IMR) End of Receive Buffer Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_IMR_ENDRX_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_IMR_ENDRX_Pos)   /**< (FLEXCOM_FLEX_TWI_IMR) End of Receive Buffer Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_IMR_ENDRX          FLEXCOM_FLEX_TWI_IMR_ENDRX_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IMR_ENDRX_Msk instead */
#define FLEXCOM_FLEX_TWI_IMR_ENDTX_Pos      13                                             /**< (FLEXCOM_FLEX_TWI_IMR) End of Transmit Buffer Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_IMR_ENDTX_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_IMR_ENDTX_Pos)   /**< (FLEXCOM_FLEX_TWI_IMR) End of Transmit Buffer Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_IMR_ENDTX          FLEXCOM_FLEX_TWI_IMR_ENDTX_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IMR_ENDTX_Msk instead */
#define FLEXCOM_FLEX_TWI_IMR_RXBUFF_Pos     14                                             /**< (FLEXCOM_FLEX_TWI_IMR) Receive Buffer Full Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_IMR_RXBUFF_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IMR_RXBUFF_Pos)  /**< (FLEXCOM_FLEX_TWI_IMR) Receive Buffer Full Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_IMR_RXBUFF         FLEXCOM_FLEX_TWI_IMR_RXBUFF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IMR_RXBUFF_Msk instead */
#define FLEXCOM_FLEX_TWI_IMR_TXBUFE_Pos     15                                             /**< (FLEXCOM_FLEX_TWI_IMR) Transmit Buffer Empty Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_IMR_TXBUFE_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IMR_TXBUFE_Pos)  /**< (FLEXCOM_FLEX_TWI_IMR) Transmit Buffer Empty Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_IMR_TXBUFE         FLEXCOM_FLEX_TWI_IMR_TXBUFE_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IMR_TXBUFE_Msk instead */
#define FLEXCOM_FLEX_TWI_IMR_MCACK_Pos      16                                             /**< (FLEXCOM_FLEX_TWI_IMR) Master Code Acknowledge Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_IMR_MCACK_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_IMR_MCACK_Pos)   /**< (FLEXCOM_FLEX_TWI_IMR) Master Code Acknowledge Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_IMR_MCACK          FLEXCOM_FLEX_TWI_IMR_MCACK_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IMR_MCACK_Msk instead */
#define FLEXCOM_FLEX_TWI_IMR_TOUT_Pos       18                                             /**< (FLEXCOM_FLEX_TWI_IMR) Timeout Error Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_IMR_TOUT_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_IMR_TOUT_Pos)    /**< (FLEXCOM_FLEX_TWI_IMR) Timeout Error Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_IMR_TOUT           FLEXCOM_FLEX_TWI_IMR_TOUT_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IMR_TOUT_Msk instead */
#define FLEXCOM_FLEX_TWI_IMR_PECERR_Pos     19                                             /**< (FLEXCOM_FLEX_TWI_IMR) PEC Error Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_IMR_PECERR_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IMR_PECERR_Pos)  /**< (FLEXCOM_FLEX_TWI_IMR) PEC Error Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_IMR_PECERR         FLEXCOM_FLEX_TWI_IMR_PECERR_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IMR_PECERR_Msk instead */
#define FLEXCOM_FLEX_TWI_IMR_SMBDAM_Pos     20                                             /**< (FLEXCOM_FLEX_TWI_IMR) SMBus Default Address Match Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_IMR_SMBDAM_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IMR_SMBDAM_Pos)  /**< (FLEXCOM_FLEX_TWI_IMR) SMBus Default Address Match Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_IMR_SMBDAM         FLEXCOM_FLEX_TWI_IMR_SMBDAM_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IMR_SMBDAM_Msk instead */
#define FLEXCOM_FLEX_TWI_IMR_SMBHHM_Pos     21                                             /**< (FLEXCOM_FLEX_TWI_IMR) SMBus Host Header Address Match Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_IMR_SMBHHM_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_IMR_SMBHHM_Pos)  /**< (FLEXCOM_FLEX_TWI_IMR) SMBus Host Header Address Match Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_IMR_SMBHHM         FLEXCOM_FLEX_TWI_IMR_SMBHHM_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_IMR_SMBHHM_Msk instead */
#define FLEXCOM_FLEX_TWI_IMR_MASK           _U_(0x3DFFF7)                                  /**< \deprecated (FLEXCOM_FLEX_TWI_IMR) Register MASK  (Use FLEXCOM_FLEX_TWI_IMR_Msk instead)  */
#define FLEXCOM_FLEX_TWI_IMR_Msk            _U_(0x3DFFF7)                                  /**< (FLEXCOM_FLEX_TWI_IMR) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_RHR : (FLEXCOM Offset: 0x630) (R/ 32) TWI Receive Holding Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RXDATA:8;                  /**< bit:   0..7  Master or Slave Receive Holding Data     */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct { // FIFO_ENABLED mode
    uint32_t RXDATA0:8;                 /**< bit:   0..7  Master or Slave Receive Holding Data 0   */
    uint32_t RXDATA1:8;                 /**< bit:  8..15  Master or Slave Receive Holding Data 1   */
    uint32_t RXDATA2:8;                 /**< bit: 16..23  Master or Slave Receive Holding Data 2   */
    uint32_t RXDATA3:8;                 /**< bit: 24..31  Master or Slave Receive Holding Data 3   */
  } FIFO_ENABLED;                                /**< Structure used for FIFO_ENABLED mode access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_RHR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_RHR_OFFSET         (0x630)                                       /**<  (FLEXCOM_FLEX_TWI_RHR) TWI Receive Holding Register  Offset */

#define FLEXCOM_FLEX_TWI_RHR_RXDATA_Pos     0                                              /**< (FLEXCOM_FLEX_TWI_RHR) Master or Slave Receive Holding Data Position */
#define FLEXCOM_FLEX_TWI_RHR_RXDATA_Msk     (_U_(0xFF) << FLEXCOM_FLEX_TWI_RHR_RXDATA_Pos)  /**< (FLEXCOM_FLEX_TWI_RHR) Master or Slave Receive Holding Data Mask */
#define FLEXCOM_FLEX_TWI_RHR_RXDATA(value)  (FLEXCOM_FLEX_TWI_RHR_RXDATA_Msk & ((value) << FLEXCOM_FLEX_TWI_RHR_RXDATA_Pos))
#define FLEXCOM_FLEX_TWI_RHR_MASK           _U_(0xFF)                                      /**< \deprecated (FLEXCOM_FLEX_TWI_RHR) Register MASK  (Use FLEXCOM_FLEX_TWI_RHR_Msk instead)  */
#define FLEXCOM_FLEX_TWI_RHR_Msk            _U_(0xFF)                                      /**< (FLEXCOM_FLEX_TWI_RHR) Register Mask  */

/* FIFO_ENABLED mode */
#define FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA0_Pos 0                                              /**< (FLEXCOM_FLEX_TWI_RHR) Master or Slave Receive Holding Data 0 Position */
#define FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA0_Msk (_U_(0xFF) << FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA0_Pos)  /**< (FLEXCOM_FLEX_TWI_RHR) Master or Slave Receive Holding Data 0 Mask */
#define FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA0(value) (FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA0_Msk & ((value) << FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA0_Pos))
#define FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA1_Pos 8                                              /**< (FLEXCOM_FLEX_TWI_RHR) Master or Slave Receive Holding Data 1 Position */
#define FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA1_Msk (_U_(0xFF) << FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA1_Pos)  /**< (FLEXCOM_FLEX_TWI_RHR) Master or Slave Receive Holding Data 1 Mask */
#define FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA1(value) (FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA1_Msk & ((value) << FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA1_Pos))
#define FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA2_Pos 16                                             /**< (FLEXCOM_FLEX_TWI_RHR) Master or Slave Receive Holding Data 2 Position */
#define FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA2_Msk (_U_(0xFF) << FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA2_Pos)  /**< (FLEXCOM_FLEX_TWI_RHR) Master or Slave Receive Holding Data 2 Mask */
#define FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA2(value) (FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA2_Msk & ((value) << FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA2_Pos))
#define FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA3_Pos 24                                             /**< (FLEXCOM_FLEX_TWI_RHR) Master or Slave Receive Holding Data 3 Position */
#define FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA3_Msk (_U_(0xFF) << FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA3_Pos)  /**< (FLEXCOM_FLEX_TWI_RHR) Master or Slave Receive Holding Data 3 Mask */
#define FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA3(value) (FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA3_Msk & ((value) << FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_RXDATA3_Pos))
#define FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_MASK _U_(0xFFFFFFFF)                                /**< \deprecated (FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED) Register MASK  (Use FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_Msk instead)  */
#define FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED_Msk _U_(0xFFFFFFFF)                                /**< (FLEXCOM_FLEX_TWI_RHR_FIFO_ENABLED) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_THR : (FLEXCOM Offset: 0x634) (/W 32) TWI Transmit Holding Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXDATA:8;                  /**< bit:   0..7  Master or Slave Transmit Holding Data    */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct { // FIFO_ENABLED mode
    uint32_t TXDATA0:8;                 /**< bit:   0..7  Master or Slave Transmit Holding Data 0  */
    uint32_t TXDATA1:8;                 /**< bit:  8..15  Master or Slave Transmit Holding Data 1  */
    uint32_t TXDATA2:8;                 /**< bit: 16..23  Master or Slave Transmit Holding Data 2  */
    uint32_t TXDATA3:8;                 /**< bit: 24..31  Master or Slave Transmit Holding Data 3  */
  } FIFO_ENABLED;                                /**< Structure used for FIFO_ENABLED mode access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_THR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_THR_OFFSET         (0x634)                                       /**<  (FLEXCOM_FLEX_TWI_THR) TWI Transmit Holding Register  Offset */

#define FLEXCOM_FLEX_TWI_THR_TXDATA_Pos     0                                              /**< (FLEXCOM_FLEX_TWI_THR) Master or Slave Transmit Holding Data Position */
#define FLEXCOM_FLEX_TWI_THR_TXDATA_Msk     (_U_(0xFF) << FLEXCOM_FLEX_TWI_THR_TXDATA_Pos)  /**< (FLEXCOM_FLEX_TWI_THR) Master or Slave Transmit Holding Data Mask */
#define FLEXCOM_FLEX_TWI_THR_TXDATA(value)  (FLEXCOM_FLEX_TWI_THR_TXDATA_Msk & ((value) << FLEXCOM_FLEX_TWI_THR_TXDATA_Pos))
#define FLEXCOM_FLEX_TWI_THR_MASK           _U_(0xFF)                                      /**< \deprecated (FLEXCOM_FLEX_TWI_THR) Register MASK  (Use FLEXCOM_FLEX_TWI_THR_Msk instead)  */
#define FLEXCOM_FLEX_TWI_THR_Msk            _U_(0xFF)                                      /**< (FLEXCOM_FLEX_TWI_THR) Register Mask  */

/* FIFO_ENABLED mode */
#define FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA0_Pos 0                                              /**< (FLEXCOM_FLEX_TWI_THR) Master or Slave Transmit Holding Data 0 Position */
#define FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA0_Msk (_U_(0xFF) << FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA0_Pos)  /**< (FLEXCOM_FLEX_TWI_THR) Master or Slave Transmit Holding Data 0 Mask */
#define FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA0(value) (FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA0_Msk & ((value) << FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA0_Pos))
#define FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA1_Pos 8                                              /**< (FLEXCOM_FLEX_TWI_THR) Master or Slave Transmit Holding Data 1 Position */
#define FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA1_Msk (_U_(0xFF) << FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA1_Pos)  /**< (FLEXCOM_FLEX_TWI_THR) Master or Slave Transmit Holding Data 1 Mask */
#define FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA1(value) (FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA1_Msk & ((value) << FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA1_Pos))
#define FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA2_Pos 16                                             /**< (FLEXCOM_FLEX_TWI_THR) Master or Slave Transmit Holding Data 2 Position */
#define FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA2_Msk (_U_(0xFF) << FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA2_Pos)  /**< (FLEXCOM_FLEX_TWI_THR) Master or Slave Transmit Holding Data 2 Mask */
#define FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA2(value) (FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA2_Msk & ((value) << FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA2_Pos))
#define FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA3_Pos 24                                             /**< (FLEXCOM_FLEX_TWI_THR) Master or Slave Transmit Holding Data 3 Position */
#define FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA3_Msk (_U_(0xFF) << FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA3_Pos)  /**< (FLEXCOM_FLEX_TWI_THR) Master or Slave Transmit Holding Data 3 Mask */
#define FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA3(value) (FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA3_Msk & ((value) << FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_TXDATA3_Pos))
#define FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_MASK _U_(0xFFFFFFFF)                                /**< \deprecated (FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED) Register MASK  (Use FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_Msk instead)  */
#define FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED_Msk _U_(0xFFFFFFFF)                                /**< (FLEXCOM_FLEX_TWI_THR_FIFO_ENABLED) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_SMBTR : (FLEXCOM Offset: 0x638) (R/W 32) TWI SMBus Timing Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PRESC:4;                   /**< bit:   0..3  SMBus Clock Prescaler                    */
    uint32_t :4;                        /**< bit:   4..7  Reserved */
    uint32_t TLOWS:8;                   /**< bit:  8..15  Slave Clock Stretch Maximum Cycles       */
    uint32_t TLOWM:8;                   /**< bit: 16..23  Master Clock Stretch Maximum Cycles      */
    uint32_t THMAX:8;                   /**< bit: 24..31  Clock High Maximum Cycles                */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_SMBTR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_SMBTR_OFFSET       (0x638)                                       /**<  (FLEXCOM_FLEX_TWI_SMBTR) TWI SMBus Timing Register  Offset */

#define FLEXCOM_FLEX_TWI_SMBTR_PRESC_Pos    0                                              /**< (FLEXCOM_FLEX_TWI_SMBTR) SMBus Clock Prescaler Position */
#define FLEXCOM_FLEX_TWI_SMBTR_PRESC_Msk    (_U_(0xF) << FLEXCOM_FLEX_TWI_SMBTR_PRESC_Pos)  /**< (FLEXCOM_FLEX_TWI_SMBTR) SMBus Clock Prescaler Mask */
#define FLEXCOM_FLEX_TWI_SMBTR_PRESC(value) (FLEXCOM_FLEX_TWI_SMBTR_PRESC_Msk & ((value) << FLEXCOM_FLEX_TWI_SMBTR_PRESC_Pos))
#define FLEXCOM_FLEX_TWI_SMBTR_TLOWS_Pos    8                                              /**< (FLEXCOM_FLEX_TWI_SMBTR) Slave Clock Stretch Maximum Cycles Position */
#define FLEXCOM_FLEX_TWI_SMBTR_TLOWS_Msk    (_U_(0xFF) << FLEXCOM_FLEX_TWI_SMBTR_TLOWS_Pos)  /**< (FLEXCOM_FLEX_TWI_SMBTR) Slave Clock Stretch Maximum Cycles Mask */
#define FLEXCOM_FLEX_TWI_SMBTR_TLOWS(value) (FLEXCOM_FLEX_TWI_SMBTR_TLOWS_Msk & ((value) << FLEXCOM_FLEX_TWI_SMBTR_TLOWS_Pos))
#define FLEXCOM_FLEX_TWI_SMBTR_TLOWM_Pos    16                                             /**< (FLEXCOM_FLEX_TWI_SMBTR) Master Clock Stretch Maximum Cycles Position */
#define FLEXCOM_FLEX_TWI_SMBTR_TLOWM_Msk    (_U_(0xFF) << FLEXCOM_FLEX_TWI_SMBTR_TLOWM_Pos)  /**< (FLEXCOM_FLEX_TWI_SMBTR) Master Clock Stretch Maximum Cycles Mask */
#define FLEXCOM_FLEX_TWI_SMBTR_TLOWM(value) (FLEXCOM_FLEX_TWI_SMBTR_TLOWM_Msk & ((value) << FLEXCOM_FLEX_TWI_SMBTR_TLOWM_Pos))
#define FLEXCOM_FLEX_TWI_SMBTR_THMAX_Pos    24                                             /**< (FLEXCOM_FLEX_TWI_SMBTR) Clock High Maximum Cycles Position */
#define FLEXCOM_FLEX_TWI_SMBTR_THMAX_Msk    (_U_(0xFF) << FLEXCOM_FLEX_TWI_SMBTR_THMAX_Pos)  /**< (FLEXCOM_FLEX_TWI_SMBTR) Clock High Maximum Cycles Mask */
#define FLEXCOM_FLEX_TWI_SMBTR_THMAX(value) (FLEXCOM_FLEX_TWI_SMBTR_THMAX_Msk & ((value) << FLEXCOM_FLEX_TWI_SMBTR_THMAX_Pos))
#define FLEXCOM_FLEX_TWI_SMBTR_MASK         _U_(0xFFFFFF0F)                                /**< \deprecated (FLEXCOM_FLEX_TWI_SMBTR) Register MASK  (Use FLEXCOM_FLEX_TWI_SMBTR_Msk instead)  */
#define FLEXCOM_FLEX_TWI_SMBTR_Msk          _U_(0xFFFFFF0F)                                /**< (FLEXCOM_FLEX_TWI_SMBTR) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_ACR : (FLEXCOM Offset: 0x640) (R/W 32) TWI Alternative Command Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DATAL:8;                   /**< bit:   0..7  Data Length                              */
    uint32_t DIR:1;                     /**< bit:      8  Transfer Direction                       */
    uint32_t PEC:1;                     /**< bit:      9  PEC Request (SMBus Mode only)            */
    uint32_t :6;                        /**< bit: 10..15  Reserved */
    uint32_t NDATAL:8;                  /**< bit: 16..23  Next Data Length                         */
    uint32_t NDIR:1;                    /**< bit:     24  Next Transfer Direction                  */
    uint32_t NPEC:1;                    /**< bit:     25  Next PEC Request (SMBus Mode only)       */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_ACR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_ACR_OFFSET         (0x640)                                       /**<  (FLEXCOM_FLEX_TWI_ACR) TWI Alternative Command Register  Offset */

#define FLEXCOM_FLEX_TWI_ACR_DATAL_Pos      0                                              /**< (FLEXCOM_FLEX_TWI_ACR) Data Length Position */
#define FLEXCOM_FLEX_TWI_ACR_DATAL_Msk      (_U_(0xFF) << FLEXCOM_FLEX_TWI_ACR_DATAL_Pos)  /**< (FLEXCOM_FLEX_TWI_ACR) Data Length Mask */
#define FLEXCOM_FLEX_TWI_ACR_DATAL(value)   (FLEXCOM_FLEX_TWI_ACR_DATAL_Msk & ((value) << FLEXCOM_FLEX_TWI_ACR_DATAL_Pos))
#define FLEXCOM_FLEX_TWI_ACR_DIR_Pos        8                                              /**< (FLEXCOM_FLEX_TWI_ACR) Transfer Direction Position */
#define FLEXCOM_FLEX_TWI_ACR_DIR_Msk        (_U_(0x1) << FLEXCOM_FLEX_TWI_ACR_DIR_Pos)     /**< (FLEXCOM_FLEX_TWI_ACR) Transfer Direction Mask */
#define FLEXCOM_FLEX_TWI_ACR_DIR            FLEXCOM_FLEX_TWI_ACR_DIR_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_ACR_DIR_Msk instead */
#define FLEXCOM_FLEX_TWI_ACR_PEC_Pos        9                                              /**< (FLEXCOM_FLEX_TWI_ACR) PEC Request (SMBus Mode only) Position */
#define FLEXCOM_FLEX_TWI_ACR_PEC_Msk        (_U_(0x1) << FLEXCOM_FLEX_TWI_ACR_PEC_Pos)     /**< (FLEXCOM_FLEX_TWI_ACR) PEC Request (SMBus Mode only) Mask */
#define FLEXCOM_FLEX_TWI_ACR_PEC            FLEXCOM_FLEX_TWI_ACR_PEC_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_ACR_PEC_Msk instead */
#define FLEXCOM_FLEX_TWI_ACR_NDATAL_Pos     16                                             /**< (FLEXCOM_FLEX_TWI_ACR) Next Data Length Position */
#define FLEXCOM_FLEX_TWI_ACR_NDATAL_Msk     (_U_(0xFF) << FLEXCOM_FLEX_TWI_ACR_NDATAL_Pos)  /**< (FLEXCOM_FLEX_TWI_ACR) Next Data Length Mask */
#define FLEXCOM_FLEX_TWI_ACR_NDATAL(value)  (FLEXCOM_FLEX_TWI_ACR_NDATAL_Msk & ((value) << FLEXCOM_FLEX_TWI_ACR_NDATAL_Pos))
#define FLEXCOM_FLEX_TWI_ACR_NDIR_Pos       24                                             /**< (FLEXCOM_FLEX_TWI_ACR) Next Transfer Direction Position */
#define FLEXCOM_FLEX_TWI_ACR_NDIR_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_ACR_NDIR_Pos)    /**< (FLEXCOM_FLEX_TWI_ACR) Next Transfer Direction Mask */
#define FLEXCOM_FLEX_TWI_ACR_NDIR           FLEXCOM_FLEX_TWI_ACR_NDIR_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_ACR_NDIR_Msk instead */
#define FLEXCOM_FLEX_TWI_ACR_NPEC_Pos       25                                             /**< (FLEXCOM_FLEX_TWI_ACR) Next PEC Request (SMBus Mode only) Position */
#define FLEXCOM_FLEX_TWI_ACR_NPEC_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_ACR_NPEC_Pos)    /**< (FLEXCOM_FLEX_TWI_ACR) Next PEC Request (SMBus Mode only) Mask */
#define FLEXCOM_FLEX_TWI_ACR_NPEC           FLEXCOM_FLEX_TWI_ACR_NPEC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_ACR_NPEC_Msk instead */
#define FLEXCOM_FLEX_TWI_ACR_MASK           _U_(0x3FF03FF)                                 /**< \deprecated (FLEXCOM_FLEX_TWI_ACR) Register MASK  (Use FLEXCOM_FLEX_TWI_ACR_Msk instead)  */
#define FLEXCOM_FLEX_TWI_ACR_Msk            _U_(0x3FF03FF)                                 /**< (FLEXCOM_FLEX_TWI_ACR) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_FILTR : (FLEXCOM Offset: 0x644) (R/W 32) TWI Filter Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t FILT:1;                    /**< bit:      0  RX Digital Filter                        */
    uint32_t PADFEN:1;                  /**< bit:      1  PAD Filter Enable                        */
    uint32_t PADFCFG:1;                 /**< bit:      2  PAD Filter Config                        */
    uint32_t :5;                        /**< bit:   3..7  Reserved */
    uint32_t THRES:3;                   /**< bit:  8..10  Digital Filter Threshold                 */
    uint32_t :21;                       /**< bit: 11..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_FILTR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_FILTR_OFFSET       (0x644)                                       /**<  (FLEXCOM_FLEX_TWI_FILTR) TWI Filter Register  Offset */

#define FLEXCOM_FLEX_TWI_FILTR_FILT_Pos     0                                              /**< (FLEXCOM_FLEX_TWI_FILTR) RX Digital Filter Position */
#define FLEXCOM_FLEX_TWI_FILTR_FILT_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_FILTR_FILT_Pos)  /**< (FLEXCOM_FLEX_TWI_FILTR) RX Digital Filter Mask */
#define FLEXCOM_FLEX_TWI_FILTR_FILT         FLEXCOM_FLEX_TWI_FILTR_FILT_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FILTR_FILT_Msk instead */
#define FLEXCOM_FLEX_TWI_FILTR_PADFEN_Pos   1                                              /**< (FLEXCOM_FLEX_TWI_FILTR) PAD Filter Enable Position */
#define FLEXCOM_FLEX_TWI_FILTR_PADFEN_Msk   (_U_(0x1) << FLEXCOM_FLEX_TWI_FILTR_PADFEN_Pos)  /**< (FLEXCOM_FLEX_TWI_FILTR) PAD Filter Enable Mask */
#define FLEXCOM_FLEX_TWI_FILTR_PADFEN       FLEXCOM_FLEX_TWI_FILTR_PADFEN_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FILTR_PADFEN_Msk instead */
#define FLEXCOM_FLEX_TWI_FILTR_PADFCFG_Pos  2                                              /**< (FLEXCOM_FLEX_TWI_FILTR) PAD Filter Config Position */
#define FLEXCOM_FLEX_TWI_FILTR_PADFCFG_Msk  (_U_(0x1) << FLEXCOM_FLEX_TWI_FILTR_PADFCFG_Pos)  /**< (FLEXCOM_FLEX_TWI_FILTR) PAD Filter Config Mask */
#define FLEXCOM_FLEX_TWI_FILTR_PADFCFG      FLEXCOM_FLEX_TWI_FILTR_PADFCFG_Msk             /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FILTR_PADFCFG_Msk instead */
#define FLEXCOM_FLEX_TWI_FILTR_THRES_Pos    8                                              /**< (FLEXCOM_FLEX_TWI_FILTR) Digital Filter Threshold Position */
#define FLEXCOM_FLEX_TWI_FILTR_THRES_Msk    (_U_(0x7) << FLEXCOM_FLEX_TWI_FILTR_THRES_Pos)  /**< (FLEXCOM_FLEX_TWI_FILTR) Digital Filter Threshold Mask */
#define FLEXCOM_FLEX_TWI_FILTR_THRES(value) (FLEXCOM_FLEX_TWI_FILTR_THRES_Msk & ((value) << FLEXCOM_FLEX_TWI_FILTR_THRES_Pos))
#define FLEXCOM_FLEX_TWI_FILTR_MASK         _U_(0x707)                                     /**< \deprecated (FLEXCOM_FLEX_TWI_FILTR) Register MASK  (Use FLEXCOM_FLEX_TWI_FILTR_Msk instead)  */
#define FLEXCOM_FLEX_TWI_FILTR_Msk          _U_(0x707)                                     /**< (FLEXCOM_FLEX_TWI_FILTR) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_SWMR : (FLEXCOM Offset: 0x64c) (R/W 32) TWI SleepWalking Matching Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SADR1:7;                   /**< bit:   0..6  Slave Address 1                          */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t SADR2:7;                   /**< bit:  8..14  Slave Address 2                          */
    uint32_t :1;                        /**< bit:     15  Reserved */
    uint32_t SADR3:7;                   /**< bit: 16..22  Slave Address 3                          */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t DATAM:8;                   /**< bit: 24..31  Data Match                               */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_SWMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_SWMR_OFFSET        (0x64C)                                       /**<  (FLEXCOM_FLEX_TWI_SWMR) TWI SleepWalking Matching Register  Offset */

#define FLEXCOM_FLEX_TWI_SWMR_SADR1_Pos     0                                              /**< (FLEXCOM_FLEX_TWI_SWMR) Slave Address 1 Position */
#define FLEXCOM_FLEX_TWI_SWMR_SADR1_Msk     (_U_(0x7F) << FLEXCOM_FLEX_TWI_SWMR_SADR1_Pos)  /**< (FLEXCOM_FLEX_TWI_SWMR) Slave Address 1 Mask */
#define FLEXCOM_FLEX_TWI_SWMR_SADR1(value)  (FLEXCOM_FLEX_TWI_SWMR_SADR1_Msk & ((value) << FLEXCOM_FLEX_TWI_SWMR_SADR1_Pos))
#define FLEXCOM_FLEX_TWI_SWMR_SADR2_Pos     8                                              /**< (FLEXCOM_FLEX_TWI_SWMR) Slave Address 2 Position */
#define FLEXCOM_FLEX_TWI_SWMR_SADR2_Msk     (_U_(0x7F) << FLEXCOM_FLEX_TWI_SWMR_SADR2_Pos)  /**< (FLEXCOM_FLEX_TWI_SWMR) Slave Address 2 Mask */
#define FLEXCOM_FLEX_TWI_SWMR_SADR2(value)  (FLEXCOM_FLEX_TWI_SWMR_SADR2_Msk & ((value) << FLEXCOM_FLEX_TWI_SWMR_SADR2_Pos))
#define FLEXCOM_FLEX_TWI_SWMR_SADR3_Pos     16                                             /**< (FLEXCOM_FLEX_TWI_SWMR) Slave Address 3 Position */
#define FLEXCOM_FLEX_TWI_SWMR_SADR3_Msk     (_U_(0x7F) << FLEXCOM_FLEX_TWI_SWMR_SADR3_Pos)  /**< (FLEXCOM_FLEX_TWI_SWMR) Slave Address 3 Mask */
#define FLEXCOM_FLEX_TWI_SWMR_SADR3(value)  (FLEXCOM_FLEX_TWI_SWMR_SADR3_Msk & ((value) << FLEXCOM_FLEX_TWI_SWMR_SADR3_Pos))
#define FLEXCOM_FLEX_TWI_SWMR_DATAM_Pos     24                                             /**< (FLEXCOM_FLEX_TWI_SWMR) Data Match Position */
#define FLEXCOM_FLEX_TWI_SWMR_DATAM_Msk     (_U_(0xFF) << FLEXCOM_FLEX_TWI_SWMR_DATAM_Pos)  /**< (FLEXCOM_FLEX_TWI_SWMR) Data Match Mask */
#define FLEXCOM_FLEX_TWI_SWMR_DATAM(value)  (FLEXCOM_FLEX_TWI_SWMR_DATAM_Msk & ((value) << FLEXCOM_FLEX_TWI_SWMR_DATAM_Pos))
#define FLEXCOM_FLEX_TWI_SWMR_MASK          _U_(0xFF7F7F7F)                                /**< \deprecated (FLEXCOM_FLEX_TWI_SWMR) Register MASK  (Use FLEXCOM_FLEX_TWI_SWMR_Msk instead)  */
#define FLEXCOM_FLEX_TWI_SWMR_Msk           _U_(0xFF7F7F7F)                                /**< (FLEXCOM_FLEX_TWI_SWMR) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_FMR : (FLEXCOM Offset: 0x650) (R/W 32) TWI FIFO Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXRDYM:2;                  /**< bit:   0..1  Transmitter Ready Mode                   */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t RXRDYM:2;                  /**< bit:   4..5  Receiver Ready Mode                      */
    uint32_t :10;                       /**< bit:  6..15  Reserved */
    uint32_t TXFTHRES:6;                /**< bit: 16..21  Transmit FIFO Threshold                  */
    uint32_t :2;                        /**< bit: 22..23  Reserved */
    uint32_t RXFTHRES:6;                /**< bit: 24..29  Receive FIFO Threshold                   */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_FMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_FMR_OFFSET         (0x650)                                       /**<  (FLEXCOM_FLEX_TWI_FMR) TWI FIFO Mode Register  Offset */

#define FLEXCOM_FLEX_TWI_FMR_TXRDYM_Pos     0                                              /**< (FLEXCOM_FLEX_TWI_FMR) Transmitter Ready Mode Position */
#define FLEXCOM_FLEX_TWI_FMR_TXRDYM_Msk     (_U_(0x3) << FLEXCOM_FLEX_TWI_FMR_TXRDYM_Pos)  /**< (FLEXCOM_FLEX_TWI_FMR) Transmitter Ready Mode Mask */
#define FLEXCOM_FLEX_TWI_FMR_TXRDYM(value)  (FLEXCOM_FLEX_TWI_FMR_TXRDYM_Msk & ((value) << FLEXCOM_FLEX_TWI_FMR_TXRDYM_Pos))
#define   FLEXCOM_FLEX_TWI_FMR_TXRDYM_ONE_DATA_Val _U_(0x0)                                       /**< (FLEXCOM_FLEX_TWI_FMR) TXRDY will be at level '1' when at least one data can be written in the Transmit FIFO  */
#define   FLEXCOM_FLEX_TWI_FMR_TXRDYM_TWO_DATA_Val _U_(0x1)                                       /**< (FLEXCOM_FLEX_TWI_FMR) TXRDY will be at level '1' when at least two data can be written in the Transmit FIFO  */
#define   FLEXCOM_FLEX_TWI_FMR_TXRDYM_FOUR_DATA_Val _U_(0x2)                                       /**< (FLEXCOM_FLEX_TWI_FMR) TXRDY will be at level '1' when at least four data can be written in the Transmit FIFO  */
#define FLEXCOM_FLEX_TWI_FMR_TXRDYM_ONE_DATA (FLEXCOM_FLEX_TWI_FMR_TXRDYM_ONE_DATA_Val << FLEXCOM_FLEX_TWI_FMR_TXRDYM_Pos)  /**< (FLEXCOM_FLEX_TWI_FMR) TXRDY will be at level '1' when at least one data can be written in the Transmit FIFO Position  */
#define FLEXCOM_FLEX_TWI_FMR_TXRDYM_TWO_DATA (FLEXCOM_FLEX_TWI_FMR_TXRDYM_TWO_DATA_Val << FLEXCOM_FLEX_TWI_FMR_TXRDYM_Pos)  /**< (FLEXCOM_FLEX_TWI_FMR) TXRDY will be at level '1' when at least two data can be written in the Transmit FIFO Position  */
#define FLEXCOM_FLEX_TWI_FMR_TXRDYM_FOUR_DATA (FLEXCOM_FLEX_TWI_FMR_TXRDYM_FOUR_DATA_Val << FLEXCOM_FLEX_TWI_FMR_TXRDYM_Pos)  /**< (FLEXCOM_FLEX_TWI_FMR) TXRDY will be at level '1' when at least four data can be written in the Transmit FIFO Position  */
#define FLEXCOM_FLEX_TWI_FMR_RXRDYM_Pos     4                                              /**< (FLEXCOM_FLEX_TWI_FMR) Receiver Ready Mode Position */
#define FLEXCOM_FLEX_TWI_FMR_RXRDYM_Msk     (_U_(0x3) << FLEXCOM_FLEX_TWI_FMR_RXRDYM_Pos)  /**< (FLEXCOM_FLEX_TWI_FMR) Receiver Ready Mode Mask */
#define FLEXCOM_FLEX_TWI_FMR_RXRDYM(value)  (FLEXCOM_FLEX_TWI_FMR_RXRDYM_Msk & ((value) << FLEXCOM_FLEX_TWI_FMR_RXRDYM_Pos))
#define   FLEXCOM_FLEX_TWI_FMR_RXRDYM_ONE_DATA_Val _U_(0x0)                                       /**< (FLEXCOM_FLEX_TWI_FMR) RXRDY will be at level '1' when at least one unread data is in the Receive FIFO  */
#define   FLEXCOM_FLEX_TWI_FMR_RXRDYM_TWO_DATA_Val _U_(0x1)                                       /**< (FLEXCOM_FLEX_TWI_FMR) RXRDY will be at level '1' when at least two unread data are in the Receive FIFO  */
#define   FLEXCOM_FLEX_TWI_FMR_RXRDYM_FOUR_DATA_Val _U_(0x2)                                       /**< (FLEXCOM_FLEX_TWI_FMR) RXRDY will be at level '1' when at least four unread data are in the Receive FIFO  */
#define FLEXCOM_FLEX_TWI_FMR_RXRDYM_ONE_DATA (FLEXCOM_FLEX_TWI_FMR_RXRDYM_ONE_DATA_Val << FLEXCOM_FLEX_TWI_FMR_RXRDYM_Pos)  /**< (FLEXCOM_FLEX_TWI_FMR) RXRDY will be at level '1' when at least one unread data is in the Receive FIFO Position  */
#define FLEXCOM_FLEX_TWI_FMR_RXRDYM_TWO_DATA (FLEXCOM_FLEX_TWI_FMR_RXRDYM_TWO_DATA_Val << FLEXCOM_FLEX_TWI_FMR_RXRDYM_Pos)  /**< (FLEXCOM_FLEX_TWI_FMR) RXRDY will be at level '1' when at least two unread data are in the Receive FIFO Position  */
#define FLEXCOM_FLEX_TWI_FMR_RXRDYM_FOUR_DATA (FLEXCOM_FLEX_TWI_FMR_RXRDYM_FOUR_DATA_Val << FLEXCOM_FLEX_TWI_FMR_RXRDYM_Pos)  /**< (FLEXCOM_FLEX_TWI_FMR) RXRDY will be at level '1' when at least four unread data are in the Receive FIFO Position  */
#define FLEXCOM_FLEX_TWI_FMR_TXFTHRES_Pos   16                                             /**< (FLEXCOM_FLEX_TWI_FMR) Transmit FIFO Threshold Position */
#define FLEXCOM_FLEX_TWI_FMR_TXFTHRES_Msk   (_U_(0x3F) << FLEXCOM_FLEX_TWI_FMR_TXFTHRES_Pos)  /**< (FLEXCOM_FLEX_TWI_FMR) Transmit FIFO Threshold Mask */
#define FLEXCOM_FLEX_TWI_FMR_TXFTHRES(value) (FLEXCOM_FLEX_TWI_FMR_TXFTHRES_Msk & ((value) << FLEXCOM_FLEX_TWI_FMR_TXFTHRES_Pos))
#define FLEXCOM_FLEX_TWI_FMR_RXFTHRES_Pos   24                                             /**< (FLEXCOM_FLEX_TWI_FMR) Receive FIFO Threshold Position */
#define FLEXCOM_FLEX_TWI_FMR_RXFTHRES_Msk   (_U_(0x3F) << FLEXCOM_FLEX_TWI_FMR_RXFTHRES_Pos)  /**< (FLEXCOM_FLEX_TWI_FMR) Receive FIFO Threshold Mask */
#define FLEXCOM_FLEX_TWI_FMR_RXFTHRES(value) (FLEXCOM_FLEX_TWI_FMR_RXFTHRES_Msk & ((value) << FLEXCOM_FLEX_TWI_FMR_RXFTHRES_Pos))
#define FLEXCOM_FLEX_TWI_FMR_MASK           _U_(0x3F3F0033)                                /**< \deprecated (FLEXCOM_FLEX_TWI_FMR) Register MASK  (Use FLEXCOM_FLEX_TWI_FMR_Msk instead)  */
#define FLEXCOM_FLEX_TWI_FMR_Msk            _U_(0x3F3F0033)                                /**< (FLEXCOM_FLEX_TWI_FMR) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_FLR : (FLEXCOM Offset: 0x654) (R/ 32) TWI FIFO Level Register -------- */
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
} FLEXCOM_FLEX_TWI_FLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_FLR_OFFSET         (0x654)                                       /**<  (FLEXCOM_FLEX_TWI_FLR) TWI FIFO Level Register  Offset */

#define FLEXCOM_FLEX_TWI_FLR_TXFL_Pos       0                                              /**< (FLEXCOM_FLEX_TWI_FLR) Transmit FIFO Level Position */
#define FLEXCOM_FLEX_TWI_FLR_TXFL_Msk       (_U_(0x3F) << FLEXCOM_FLEX_TWI_FLR_TXFL_Pos)   /**< (FLEXCOM_FLEX_TWI_FLR) Transmit FIFO Level Mask */
#define FLEXCOM_FLEX_TWI_FLR_TXFL(value)    (FLEXCOM_FLEX_TWI_FLR_TXFL_Msk & ((value) << FLEXCOM_FLEX_TWI_FLR_TXFL_Pos))
#define FLEXCOM_FLEX_TWI_FLR_RXFL_Pos       16                                             /**< (FLEXCOM_FLEX_TWI_FLR) Receive FIFO Level Position */
#define FLEXCOM_FLEX_TWI_FLR_RXFL_Msk       (_U_(0x3F) << FLEXCOM_FLEX_TWI_FLR_RXFL_Pos)   /**< (FLEXCOM_FLEX_TWI_FLR) Receive FIFO Level Mask */
#define FLEXCOM_FLEX_TWI_FLR_RXFL(value)    (FLEXCOM_FLEX_TWI_FLR_RXFL_Msk & ((value) << FLEXCOM_FLEX_TWI_FLR_RXFL_Pos))
#define FLEXCOM_FLEX_TWI_FLR_MASK           _U_(0x3F003F)                                  /**< \deprecated (FLEXCOM_FLEX_TWI_FLR) Register MASK  (Use FLEXCOM_FLEX_TWI_FLR_Msk instead)  */
#define FLEXCOM_FLEX_TWI_FLR_Msk            _U_(0x3F003F)                                  /**< (FLEXCOM_FLEX_TWI_FLR) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_FSR : (FLEXCOM Offset: 0x660) (R/ 32) TWI FIFO Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXFEF:1;                   /**< bit:      0  Transmit FIFO Empty Flag (cleared on read) */
    uint32_t TXFFF:1;                   /**< bit:      1  Transmit FIFO Full Flag (cleared on read) */
    uint32_t TXFTHF:1;                  /**< bit:      2  Transmit FIFO Threshold Flag (cleared on read) */
    uint32_t RXFEF:1;                   /**< bit:      3  Receive FIFO Empty Flag                  */
    uint32_t RXFFF:1;                   /**< bit:      4  Receive FIFO Full Flag                   */
    uint32_t RXFTHF:1;                  /**< bit:      5  Receive FIFO Threshold Flag              */
    uint32_t TXFPTEF:1;                 /**< bit:      6  Transmit FIFO Pointer Error Flag         */
    uint32_t RXFPTEF:1;                 /**< bit:      7  Receive FIFO Pointer Error Flag          */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_FSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_FSR_OFFSET         (0x660)                                       /**<  (FLEXCOM_FLEX_TWI_FSR) TWI FIFO Status Register  Offset */

#define FLEXCOM_FLEX_TWI_FSR_TXFEF_Pos      0                                              /**< (FLEXCOM_FLEX_TWI_FSR) Transmit FIFO Empty Flag (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_FSR_TXFEF_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_FSR_TXFEF_Pos)   /**< (FLEXCOM_FLEX_TWI_FSR) Transmit FIFO Empty Flag (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_FSR_TXFEF          FLEXCOM_FLEX_TWI_FSR_TXFEF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FSR_TXFEF_Msk instead */
#define FLEXCOM_FLEX_TWI_FSR_TXFFF_Pos      1                                              /**< (FLEXCOM_FLEX_TWI_FSR) Transmit FIFO Full Flag (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_FSR_TXFFF_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_FSR_TXFFF_Pos)   /**< (FLEXCOM_FLEX_TWI_FSR) Transmit FIFO Full Flag (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_FSR_TXFFF          FLEXCOM_FLEX_TWI_FSR_TXFFF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FSR_TXFFF_Msk instead */
#define FLEXCOM_FLEX_TWI_FSR_TXFTHF_Pos     2                                              /**< (FLEXCOM_FLEX_TWI_FSR) Transmit FIFO Threshold Flag (cleared on read) Position */
#define FLEXCOM_FLEX_TWI_FSR_TXFTHF_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_FSR_TXFTHF_Pos)  /**< (FLEXCOM_FLEX_TWI_FSR) Transmit FIFO Threshold Flag (cleared on read) Mask */
#define FLEXCOM_FLEX_TWI_FSR_TXFTHF         FLEXCOM_FLEX_TWI_FSR_TXFTHF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FSR_TXFTHF_Msk instead */
#define FLEXCOM_FLEX_TWI_FSR_RXFEF_Pos      3                                              /**< (FLEXCOM_FLEX_TWI_FSR) Receive FIFO Empty Flag Position */
#define FLEXCOM_FLEX_TWI_FSR_RXFEF_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_FSR_RXFEF_Pos)   /**< (FLEXCOM_FLEX_TWI_FSR) Receive FIFO Empty Flag Mask */
#define FLEXCOM_FLEX_TWI_FSR_RXFEF          FLEXCOM_FLEX_TWI_FSR_RXFEF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FSR_RXFEF_Msk instead */
#define FLEXCOM_FLEX_TWI_FSR_RXFFF_Pos      4                                              /**< (FLEXCOM_FLEX_TWI_FSR) Receive FIFO Full Flag Position */
#define FLEXCOM_FLEX_TWI_FSR_RXFFF_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_FSR_RXFFF_Pos)   /**< (FLEXCOM_FLEX_TWI_FSR) Receive FIFO Full Flag Mask */
#define FLEXCOM_FLEX_TWI_FSR_RXFFF          FLEXCOM_FLEX_TWI_FSR_RXFFF_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FSR_RXFFF_Msk instead */
#define FLEXCOM_FLEX_TWI_FSR_RXFTHF_Pos     5                                              /**< (FLEXCOM_FLEX_TWI_FSR) Receive FIFO Threshold Flag Position */
#define FLEXCOM_FLEX_TWI_FSR_RXFTHF_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_FSR_RXFTHF_Pos)  /**< (FLEXCOM_FLEX_TWI_FSR) Receive FIFO Threshold Flag Mask */
#define FLEXCOM_FLEX_TWI_FSR_RXFTHF         FLEXCOM_FLEX_TWI_FSR_RXFTHF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FSR_RXFTHF_Msk instead */
#define FLEXCOM_FLEX_TWI_FSR_TXFPTEF_Pos    6                                              /**< (FLEXCOM_FLEX_TWI_FSR) Transmit FIFO Pointer Error Flag Position */
#define FLEXCOM_FLEX_TWI_FSR_TXFPTEF_Msk    (_U_(0x1) << FLEXCOM_FLEX_TWI_FSR_TXFPTEF_Pos)  /**< (FLEXCOM_FLEX_TWI_FSR) Transmit FIFO Pointer Error Flag Mask */
#define FLEXCOM_FLEX_TWI_FSR_TXFPTEF        FLEXCOM_FLEX_TWI_FSR_TXFPTEF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FSR_TXFPTEF_Msk instead */
#define FLEXCOM_FLEX_TWI_FSR_RXFPTEF_Pos    7                                              /**< (FLEXCOM_FLEX_TWI_FSR) Receive FIFO Pointer Error Flag Position */
#define FLEXCOM_FLEX_TWI_FSR_RXFPTEF_Msk    (_U_(0x1) << FLEXCOM_FLEX_TWI_FSR_RXFPTEF_Pos)  /**< (FLEXCOM_FLEX_TWI_FSR) Receive FIFO Pointer Error Flag Mask */
#define FLEXCOM_FLEX_TWI_FSR_RXFPTEF        FLEXCOM_FLEX_TWI_FSR_RXFPTEF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FSR_RXFPTEF_Msk instead */
#define FLEXCOM_FLEX_TWI_FSR_MASK           _U_(0xFF)                                      /**< \deprecated (FLEXCOM_FLEX_TWI_FSR) Register MASK  (Use FLEXCOM_FLEX_TWI_FSR_Msk instead)  */
#define FLEXCOM_FLEX_TWI_FSR_Msk            _U_(0xFF)                                      /**< (FLEXCOM_FLEX_TWI_FSR) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_FIER : (FLEXCOM Offset: 0x664) (/W 32) TWI FIFO Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXFEF:1;                   /**< bit:      0  TXFEF Interrupt Enable                   */
    uint32_t TXFFF:1;                   /**< bit:      1  TXFFF Interrupt Enable                   */
    uint32_t TXFTHF:1;                  /**< bit:      2  TXFTHF Interrupt Enable                  */
    uint32_t RXFEF:1;                   /**< bit:      3  RXFEF Interrupt Enable                   */
    uint32_t RXFFF:1;                   /**< bit:      4  RXFFF Interrupt Enable                   */
    uint32_t RXFTHF:1;                  /**< bit:      5  RXFTHF Interrupt Enable                  */
    uint32_t TXFPTEF:1;                 /**< bit:      6  TXFPTEF Interrupt Enable                 */
    uint32_t RXFPTEF:1;                 /**< bit:      7  RXFPTEF Interrupt Enable                 */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_FIER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_FIER_OFFSET        (0x664)                                       /**<  (FLEXCOM_FLEX_TWI_FIER) TWI FIFO Interrupt Enable Register  Offset */

#define FLEXCOM_FLEX_TWI_FIER_TXFEF_Pos     0                                              /**< (FLEXCOM_FLEX_TWI_FIER) TXFEF Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_FIER_TXFEF_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_FIER_TXFEF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIER) TXFEF Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_FIER_TXFEF         FLEXCOM_FLEX_TWI_FIER_TXFEF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIER_TXFEF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIER_TXFFF_Pos     1                                              /**< (FLEXCOM_FLEX_TWI_FIER) TXFFF Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_FIER_TXFFF_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_FIER_TXFFF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIER) TXFFF Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_FIER_TXFFF         FLEXCOM_FLEX_TWI_FIER_TXFFF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIER_TXFFF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIER_TXFTHF_Pos    2                                              /**< (FLEXCOM_FLEX_TWI_FIER) TXFTHF Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_FIER_TXFTHF_Msk    (_U_(0x1) << FLEXCOM_FLEX_TWI_FIER_TXFTHF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIER) TXFTHF Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_FIER_TXFTHF        FLEXCOM_FLEX_TWI_FIER_TXFTHF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIER_TXFTHF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIER_RXFEF_Pos     3                                              /**< (FLEXCOM_FLEX_TWI_FIER) RXFEF Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_FIER_RXFEF_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_FIER_RXFEF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIER) RXFEF Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_FIER_RXFEF         FLEXCOM_FLEX_TWI_FIER_RXFEF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIER_RXFEF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIER_RXFFF_Pos     4                                              /**< (FLEXCOM_FLEX_TWI_FIER) RXFFF Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_FIER_RXFFF_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_FIER_RXFFF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIER) RXFFF Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_FIER_RXFFF         FLEXCOM_FLEX_TWI_FIER_RXFFF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIER_RXFFF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIER_RXFTHF_Pos    5                                              /**< (FLEXCOM_FLEX_TWI_FIER) RXFTHF Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_FIER_RXFTHF_Msk    (_U_(0x1) << FLEXCOM_FLEX_TWI_FIER_RXFTHF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIER) RXFTHF Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_FIER_RXFTHF        FLEXCOM_FLEX_TWI_FIER_RXFTHF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIER_RXFTHF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIER_TXFPTEF_Pos   6                                              /**< (FLEXCOM_FLEX_TWI_FIER) TXFPTEF Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_FIER_TXFPTEF_Msk   (_U_(0x1) << FLEXCOM_FLEX_TWI_FIER_TXFPTEF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIER) TXFPTEF Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_FIER_TXFPTEF       FLEXCOM_FLEX_TWI_FIER_TXFPTEF_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIER_TXFPTEF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIER_RXFPTEF_Pos   7                                              /**< (FLEXCOM_FLEX_TWI_FIER) RXFPTEF Interrupt Enable Position */
#define FLEXCOM_FLEX_TWI_FIER_RXFPTEF_Msk   (_U_(0x1) << FLEXCOM_FLEX_TWI_FIER_RXFPTEF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIER) RXFPTEF Interrupt Enable Mask */
#define FLEXCOM_FLEX_TWI_FIER_RXFPTEF       FLEXCOM_FLEX_TWI_FIER_RXFPTEF_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIER_RXFPTEF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIER_MASK          _U_(0xFF)                                      /**< \deprecated (FLEXCOM_FLEX_TWI_FIER) Register MASK  (Use FLEXCOM_FLEX_TWI_FIER_Msk instead)  */
#define FLEXCOM_FLEX_TWI_FIER_Msk           _U_(0xFF)                                      /**< (FLEXCOM_FLEX_TWI_FIER) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_FIDR : (FLEXCOM Offset: 0x668) (/W 32) TWI FIFO Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXFEF:1;                   /**< bit:      0  TXFEF Interrupt Disable                  */
    uint32_t TXFFF:1;                   /**< bit:      1  TXFFF Interrupt Disable                  */
    uint32_t TXFTHF:1;                  /**< bit:      2  TXFTHF Interrupt Disable                 */
    uint32_t RXFEF:1;                   /**< bit:      3  RXFEF Interrupt Disable                  */
    uint32_t RXFFF:1;                   /**< bit:      4  RXFFF Interrupt Disable                  */
    uint32_t RXFTHF:1;                  /**< bit:      5  RXFTHF Interrupt Disable                 */
    uint32_t TXFPTEF:1;                 /**< bit:      6  TXFPTEF Interrupt Disable                */
    uint32_t RXFPTEF:1;                 /**< bit:      7  RXFPTEF Interrupt Disable                */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_FIDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_FIDR_OFFSET        (0x668)                                       /**<  (FLEXCOM_FLEX_TWI_FIDR) TWI FIFO Interrupt Disable Register  Offset */

#define FLEXCOM_FLEX_TWI_FIDR_TXFEF_Pos     0                                              /**< (FLEXCOM_FLEX_TWI_FIDR) TXFEF Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_FIDR_TXFEF_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_FIDR_TXFEF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIDR) TXFEF Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_FIDR_TXFEF         FLEXCOM_FLEX_TWI_FIDR_TXFEF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIDR_TXFEF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIDR_TXFFF_Pos     1                                              /**< (FLEXCOM_FLEX_TWI_FIDR) TXFFF Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_FIDR_TXFFF_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_FIDR_TXFFF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIDR) TXFFF Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_FIDR_TXFFF         FLEXCOM_FLEX_TWI_FIDR_TXFFF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIDR_TXFFF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIDR_TXFTHF_Pos    2                                              /**< (FLEXCOM_FLEX_TWI_FIDR) TXFTHF Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_FIDR_TXFTHF_Msk    (_U_(0x1) << FLEXCOM_FLEX_TWI_FIDR_TXFTHF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIDR) TXFTHF Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_FIDR_TXFTHF        FLEXCOM_FLEX_TWI_FIDR_TXFTHF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIDR_TXFTHF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIDR_RXFEF_Pos     3                                              /**< (FLEXCOM_FLEX_TWI_FIDR) RXFEF Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_FIDR_RXFEF_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_FIDR_RXFEF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIDR) RXFEF Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_FIDR_RXFEF         FLEXCOM_FLEX_TWI_FIDR_RXFEF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIDR_RXFEF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIDR_RXFFF_Pos     4                                              /**< (FLEXCOM_FLEX_TWI_FIDR) RXFFF Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_FIDR_RXFFF_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_FIDR_RXFFF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIDR) RXFFF Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_FIDR_RXFFF         FLEXCOM_FLEX_TWI_FIDR_RXFFF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIDR_RXFFF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIDR_RXFTHF_Pos    5                                              /**< (FLEXCOM_FLEX_TWI_FIDR) RXFTHF Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_FIDR_RXFTHF_Msk    (_U_(0x1) << FLEXCOM_FLEX_TWI_FIDR_RXFTHF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIDR) RXFTHF Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_FIDR_RXFTHF        FLEXCOM_FLEX_TWI_FIDR_RXFTHF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIDR_RXFTHF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIDR_TXFPTEF_Pos   6                                              /**< (FLEXCOM_FLEX_TWI_FIDR) TXFPTEF Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_FIDR_TXFPTEF_Msk   (_U_(0x1) << FLEXCOM_FLEX_TWI_FIDR_TXFPTEF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIDR) TXFPTEF Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_FIDR_TXFPTEF       FLEXCOM_FLEX_TWI_FIDR_TXFPTEF_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIDR_TXFPTEF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIDR_RXFPTEF_Pos   7                                              /**< (FLEXCOM_FLEX_TWI_FIDR) RXFPTEF Interrupt Disable Position */
#define FLEXCOM_FLEX_TWI_FIDR_RXFPTEF_Msk   (_U_(0x1) << FLEXCOM_FLEX_TWI_FIDR_RXFPTEF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIDR) RXFPTEF Interrupt Disable Mask */
#define FLEXCOM_FLEX_TWI_FIDR_RXFPTEF       FLEXCOM_FLEX_TWI_FIDR_RXFPTEF_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIDR_RXFPTEF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIDR_MASK          _U_(0xFF)                                      /**< \deprecated (FLEXCOM_FLEX_TWI_FIDR) Register MASK  (Use FLEXCOM_FLEX_TWI_FIDR_Msk instead)  */
#define FLEXCOM_FLEX_TWI_FIDR_Msk           _U_(0xFF)                                      /**< (FLEXCOM_FLEX_TWI_FIDR) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_FIMR : (FLEXCOM Offset: 0x66c) (R/ 32) TWI FIFO Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXFEF:1;                   /**< bit:      0  TXFEF Interrupt Mask                     */
    uint32_t TXFFF:1;                   /**< bit:      1  TXFFF Interrupt Mask                     */
    uint32_t TXFTHF:1;                  /**< bit:      2  TXFTHF Interrupt Mask                    */
    uint32_t RXFEF:1;                   /**< bit:      3  RXFEF Interrupt Mask                     */
    uint32_t RXFFF:1;                   /**< bit:      4  RXFFF Interrupt Mask                     */
    uint32_t RXFTHF:1;                  /**< bit:      5  RXFTHF Interrupt Mask                    */
    uint32_t TXFPTEF:1;                 /**< bit:      6  TXFPTEF Interrupt Mask                   */
    uint32_t RXFPTEF:1;                 /**< bit:      7  RXFPTEF Interrupt Mask                   */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_FIMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_FIMR_OFFSET        (0x66C)                                       /**<  (FLEXCOM_FLEX_TWI_FIMR) TWI FIFO Interrupt Mask Register  Offset */

#define FLEXCOM_FLEX_TWI_FIMR_TXFEF_Pos     0                                              /**< (FLEXCOM_FLEX_TWI_FIMR) TXFEF Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_FIMR_TXFEF_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_FIMR_TXFEF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIMR) TXFEF Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_FIMR_TXFEF         FLEXCOM_FLEX_TWI_FIMR_TXFEF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIMR_TXFEF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIMR_TXFFF_Pos     1                                              /**< (FLEXCOM_FLEX_TWI_FIMR) TXFFF Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_FIMR_TXFFF_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_FIMR_TXFFF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIMR) TXFFF Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_FIMR_TXFFF         FLEXCOM_FLEX_TWI_FIMR_TXFFF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIMR_TXFFF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIMR_TXFTHF_Pos    2                                              /**< (FLEXCOM_FLEX_TWI_FIMR) TXFTHF Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_FIMR_TXFTHF_Msk    (_U_(0x1) << FLEXCOM_FLEX_TWI_FIMR_TXFTHF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIMR) TXFTHF Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_FIMR_TXFTHF        FLEXCOM_FLEX_TWI_FIMR_TXFTHF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIMR_TXFTHF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIMR_RXFEF_Pos     3                                              /**< (FLEXCOM_FLEX_TWI_FIMR) RXFEF Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_FIMR_RXFEF_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_FIMR_RXFEF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIMR) RXFEF Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_FIMR_RXFEF         FLEXCOM_FLEX_TWI_FIMR_RXFEF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIMR_RXFEF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIMR_RXFFF_Pos     4                                              /**< (FLEXCOM_FLEX_TWI_FIMR) RXFFF Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_FIMR_RXFFF_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_FIMR_RXFFF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIMR) RXFFF Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_FIMR_RXFFF         FLEXCOM_FLEX_TWI_FIMR_RXFFF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIMR_RXFFF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIMR_RXFTHF_Pos    5                                              /**< (FLEXCOM_FLEX_TWI_FIMR) RXFTHF Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_FIMR_RXFTHF_Msk    (_U_(0x1) << FLEXCOM_FLEX_TWI_FIMR_RXFTHF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIMR) RXFTHF Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_FIMR_RXFTHF        FLEXCOM_FLEX_TWI_FIMR_RXFTHF_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIMR_RXFTHF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIMR_TXFPTEF_Pos   6                                              /**< (FLEXCOM_FLEX_TWI_FIMR) TXFPTEF Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_FIMR_TXFPTEF_Msk   (_U_(0x1) << FLEXCOM_FLEX_TWI_FIMR_TXFPTEF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIMR) TXFPTEF Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_FIMR_TXFPTEF       FLEXCOM_FLEX_TWI_FIMR_TXFPTEF_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIMR_TXFPTEF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIMR_RXFPTEF_Pos   7                                              /**< (FLEXCOM_FLEX_TWI_FIMR) RXFPTEF Interrupt Mask Position */
#define FLEXCOM_FLEX_TWI_FIMR_RXFPTEF_Msk   (_U_(0x1) << FLEXCOM_FLEX_TWI_FIMR_RXFPTEF_Pos)  /**< (FLEXCOM_FLEX_TWI_FIMR) RXFPTEF Interrupt Mask Mask */
#define FLEXCOM_FLEX_TWI_FIMR_RXFPTEF       FLEXCOM_FLEX_TWI_FIMR_RXFPTEF_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_FIMR_RXFPTEF_Msk instead */
#define FLEXCOM_FLEX_TWI_FIMR_MASK          _U_(0xFF)                                      /**< \deprecated (FLEXCOM_FLEX_TWI_FIMR) Register MASK  (Use FLEXCOM_FLEX_TWI_FIMR_Msk instead)  */
#define FLEXCOM_FLEX_TWI_FIMR_Msk           _U_(0xFF)                                      /**< (FLEXCOM_FLEX_TWI_FIMR) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_DR : (FLEXCOM Offset: 0x6d0) (R/ 32) TWI Debug Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWEN:1;                    /**< bit:      0  SleepWalking Enable                      */
    uint32_t CLKRQ:1;                   /**< bit:      1  Clock Request                            */
    uint32_t SWMATCH:1;                 /**< bit:      2  SleepWalking Match                       */
    uint32_t TRP:1;                     /**< bit:      3  Transfer Pending                         */
    uint32_t :28;                       /**< bit:  4..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_DR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_DR_OFFSET          (0x6D0)                                       /**<  (FLEXCOM_FLEX_TWI_DR) TWI Debug Register  Offset */

#define FLEXCOM_FLEX_TWI_DR_SWEN_Pos        0                                              /**< (FLEXCOM_FLEX_TWI_DR) SleepWalking Enable Position */
#define FLEXCOM_FLEX_TWI_DR_SWEN_Msk        (_U_(0x1) << FLEXCOM_FLEX_TWI_DR_SWEN_Pos)     /**< (FLEXCOM_FLEX_TWI_DR) SleepWalking Enable Mask */
#define FLEXCOM_FLEX_TWI_DR_SWEN            FLEXCOM_FLEX_TWI_DR_SWEN_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_DR_SWEN_Msk instead */
#define FLEXCOM_FLEX_TWI_DR_CLKRQ_Pos       1                                              /**< (FLEXCOM_FLEX_TWI_DR) Clock Request Position */
#define FLEXCOM_FLEX_TWI_DR_CLKRQ_Msk       (_U_(0x1) << FLEXCOM_FLEX_TWI_DR_CLKRQ_Pos)    /**< (FLEXCOM_FLEX_TWI_DR) Clock Request Mask */
#define FLEXCOM_FLEX_TWI_DR_CLKRQ           FLEXCOM_FLEX_TWI_DR_CLKRQ_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_DR_CLKRQ_Msk instead */
#define FLEXCOM_FLEX_TWI_DR_SWMATCH_Pos     2                                              /**< (FLEXCOM_FLEX_TWI_DR) SleepWalking Match Position */
#define FLEXCOM_FLEX_TWI_DR_SWMATCH_Msk     (_U_(0x1) << FLEXCOM_FLEX_TWI_DR_SWMATCH_Pos)  /**< (FLEXCOM_FLEX_TWI_DR) SleepWalking Match Mask */
#define FLEXCOM_FLEX_TWI_DR_SWMATCH         FLEXCOM_FLEX_TWI_DR_SWMATCH_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_DR_SWMATCH_Msk instead */
#define FLEXCOM_FLEX_TWI_DR_TRP_Pos         3                                              /**< (FLEXCOM_FLEX_TWI_DR) Transfer Pending Position */
#define FLEXCOM_FLEX_TWI_DR_TRP_Msk         (_U_(0x1) << FLEXCOM_FLEX_TWI_DR_TRP_Pos)      /**< (FLEXCOM_FLEX_TWI_DR) Transfer Pending Mask */
#define FLEXCOM_FLEX_TWI_DR_TRP             FLEXCOM_FLEX_TWI_DR_TRP_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_DR_TRP_Msk instead */
#define FLEXCOM_FLEX_TWI_DR_MASK            _U_(0x0F)                                      /**< \deprecated (FLEXCOM_FLEX_TWI_DR) Register MASK  (Use FLEXCOM_FLEX_TWI_DR_Msk instead)  */
#define FLEXCOM_FLEX_TWI_DR_Msk             _U_(0x0F)                                      /**< (FLEXCOM_FLEX_TWI_DR) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_WPMR : (FLEXCOM Offset: 0x6e4) (R/W 32) TWI Write Protection Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPEN:1;                    /**< bit:      0  Write Protection Enable                  */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPKEY:24;                  /**< bit:  8..31  Write Protection Key                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_WPMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_WPMR_OFFSET        (0x6E4)                                       /**<  (FLEXCOM_FLEX_TWI_WPMR) TWI Write Protection Mode Register  Offset */

#define FLEXCOM_FLEX_TWI_WPMR_WPEN_Pos      0                                              /**< (FLEXCOM_FLEX_TWI_WPMR) Write Protection Enable Position */
#define FLEXCOM_FLEX_TWI_WPMR_WPEN_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_WPMR_WPEN_Pos)   /**< (FLEXCOM_FLEX_TWI_WPMR) Write Protection Enable Mask */
#define FLEXCOM_FLEX_TWI_WPMR_WPEN          FLEXCOM_FLEX_TWI_WPMR_WPEN_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_WPMR_WPEN_Msk instead */
#define FLEXCOM_FLEX_TWI_WPMR_WPKEY_Pos     8                                              /**< (FLEXCOM_FLEX_TWI_WPMR) Write Protection Key Position */
#define FLEXCOM_FLEX_TWI_WPMR_WPKEY_Msk     (_U_(0xFFFFFF) << FLEXCOM_FLEX_TWI_WPMR_WPKEY_Pos)  /**< (FLEXCOM_FLEX_TWI_WPMR) Write Protection Key Mask */
#define FLEXCOM_FLEX_TWI_WPMR_WPKEY(value)  (FLEXCOM_FLEX_TWI_WPMR_WPKEY_Msk & ((value) << FLEXCOM_FLEX_TWI_WPMR_WPKEY_Pos))
#define   FLEXCOM_FLEX_TWI_WPMR_WPKEY_PASSWD_Val _U_(0x545749)                                  /**< (FLEXCOM_FLEX_TWI_WPMR) Writing any other value in this field aborts the write operation of bit WPEN.Always reads as 0  */
#define FLEXCOM_FLEX_TWI_WPMR_WPKEY_PASSWD  (FLEXCOM_FLEX_TWI_WPMR_WPKEY_PASSWD_Val << FLEXCOM_FLEX_TWI_WPMR_WPKEY_Pos)  /**< (FLEXCOM_FLEX_TWI_WPMR) Writing any other value in this field aborts the write operation of bit WPEN.Always reads as 0 Position  */
#define FLEXCOM_FLEX_TWI_WPMR_MASK          _U_(0xFFFFFF01)                                /**< \deprecated (FLEXCOM_FLEX_TWI_WPMR) Register MASK  (Use FLEXCOM_FLEX_TWI_WPMR_Msk instead)  */
#define FLEXCOM_FLEX_TWI_WPMR_Msk           _U_(0xFFFFFF01)                                /**< (FLEXCOM_FLEX_TWI_WPMR) Register Mask  */


/* -------- FLEXCOM_FLEX_TWI_WPSR : (FLEXCOM Offset: 0x6e8) (R/ 32) TWI Write Protection Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPVS:1;                    /**< bit:      0  Write Protect Violation Status           */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPVSRC:24;                 /**< bit:  8..31  Write Protection Violation Source        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} FLEXCOM_FLEX_TWI_WPSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLEXCOM_FLEX_TWI_WPSR_OFFSET        (0x6E8)                                       /**<  (FLEXCOM_FLEX_TWI_WPSR) TWI Write Protection Status Register  Offset */

#define FLEXCOM_FLEX_TWI_WPSR_WPVS_Pos      0                                              /**< (FLEXCOM_FLEX_TWI_WPSR) Write Protect Violation Status Position */
#define FLEXCOM_FLEX_TWI_WPSR_WPVS_Msk      (_U_(0x1) << FLEXCOM_FLEX_TWI_WPSR_WPVS_Pos)   /**< (FLEXCOM_FLEX_TWI_WPSR) Write Protect Violation Status Mask */
#define FLEXCOM_FLEX_TWI_WPSR_WPVS          FLEXCOM_FLEX_TWI_WPSR_WPVS_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use FLEXCOM_FLEX_TWI_WPSR_WPVS_Msk instead */
#define FLEXCOM_FLEX_TWI_WPSR_WPVSRC_Pos    8                                              /**< (FLEXCOM_FLEX_TWI_WPSR) Write Protection Violation Source Position */
#define FLEXCOM_FLEX_TWI_WPSR_WPVSRC_Msk    (_U_(0xFFFFFF) << FLEXCOM_FLEX_TWI_WPSR_WPVSRC_Pos)  /**< (FLEXCOM_FLEX_TWI_WPSR) Write Protection Violation Source Mask */
#define FLEXCOM_FLEX_TWI_WPSR_WPVSRC(value) (FLEXCOM_FLEX_TWI_WPSR_WPVSRC_Msk & ((value) << FLEXCOM_FLEX_TWI_WPSR_WPVSRC_Pos))
#define FLEXCOM_FLEX_TWI_WPSR_MASK          _U_(0xFFFFFF01)                                /**< \deprecated (FLEXCOM_FLEX_TWI_WPSR) Register MASK  (Use FLEXCOM_FLEX_TWI_WPSR_Msk instead)  */
#define FLEXCOM_FLEX_TWI_WPSR_Msk           _U_(0xFFFFFF01)                                /**< (FLEXCOM_FLEX_TWI_WPSR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief FLEXCOM hardware registers */
typedef struct {  
  __IO uint32_t FLEX_MR;        /**< (FLEXCOM Offset: 0x00) FLEXCOM Mode Register */
  __I  uint8_t                        Reserved1[12];
  __I  uint32_t FLEX_RHR;       /**< (FLEXCOM Offset: 0x10) FLEXCOM Receive Holding Register */
  __I  uint8_t                        Reserved2[12];
  __IO uint32_t FLEX_THR;       /**< (FLEXCOM Offset: 0x20) FLEXCOM Transmit Holding Register */
  __I  uint8_t                        Reserved3[476];
  __O  uint32_t FLEX_US_CR;     /**< (FLEXCOM Offset: 0x200) USART Control Register */
  __IO uint32_t FLEX_US_MR;     /**< (FLEXCOM Offset: 0x204) USART Mode Register */
  __O  uint32_t FLEX_US_IER;    /**< (FLEXCOM Offset: 0x208) USART Interrupt Enable Register */
  __O  uint32_t FLEX_US_IDR;    /**< (FLEXCOM Offset: 0x20C) USART Interrupt Disable Register */
  __I  uint32_t FLEX_US_IMR;    /**< (FLEXCOM Offset: 0x210) USART Interrupt Mask Register */
  __I  uint32_t FLEX_US_CSR;    /**< (FLEXCOM Offset: 0x214) USART Channel Status Register */
  __I  uint32_t FLEX_US_RHR;    /**< (FLEXCOM Offset: 0x218) USART Receive Holding Register */
  __O  uint32_t FLEX_US_THR;    /**< (FLEXCOM Offset: 0x21C) USART Transmit Holding Register */
  __IO uint32_t FLEX_US_BRGR;   /**< (FLEXCOM Offset: 0x220) USART Baud Rate Generator Register */
  __IO uint32_t FLEX_US_RTOR;   /**< (FLEXCOM Offset: 0x224) USART Receiver Timeout Register */
  __IO uint32_t FLEX_US_TTGR;   /**< (FLEXCOM Offset: 0x228) USART Transmitter Timeguard Register */
  __I  uint8_t                        Reserved4[20];
  __IO uint32_t FLEX_US_FIDI;   /**< (FLEXCOM Offset: 0x240) USART FI DI Ratio Register */
  __I  uint32_t FLEX_US_NER;    /**< (FLEXCOM Offset: 0x244) USART Number of Errors Register */
  __I  uint8_t                        Reserved5[4];
  __IO uint32_t FLEX_US_IF;     /**< (FLEXCOM Offset: 0x24C) USART IrDA Filter Register */
  __IO uint32_t FLEX_US_MAN;    /**< (FLEXCOM Offset: 0x250) USART Manchester Configuration Register */
  __IO uint32_t FLEX_US_LINMR;  /**< (FLEXCOM Offset: 0x254) USART LIN Mode Register */
  __IO uint32_t FLEX_US_LINIR;  /**< (FLEXCOM Offset: 0x258) USART LIN Identifier Register */
  __I  uint32_t FLEX_US_LINBRR; /**< (FLEXCOM Offset: 0x25C) USART LIN Baud Rate Register */
  __I  uint8_t                        Reserved6[48];
  __IO uint32_t FLEX_US_CMPR;   /**< (FLEXCOM Offset: 0x290) USART Comparison Register */
  __I  uint8_t                        Reserved7[12];
  __IO uint32_t FLEX_US_FMR;    /**< (FLEXCOM Offset: 0x2A0) USART FIFO Mode Register */
  __I  uint32_t FLEX_US_FLR;    /**< (FLEXCOM Offset: 0x2A4) USART FIFO Level Register */
  __O  uint32_t FLEX_US_FIER;   /**< (FLEXCOM Offset: 0x2A8) USART FIFO Interrupt Enable Register */
  __O  uint32_t FLEX_US_FIDR;   /**< (FLEXCOM Offset: 0x2AC) USART FIFO Interrupt Disable Register */
  __I  uint32_t FLEX_US_FIMR;   /**< (FLEXCOM Offset: 0x2B0) USART FIFO Interrupt Mask Register */
  __I  uint32_t FLEX_US_FESR;   /**< (FLEXCOM Offset: 0x2B4) USART FIFO Event Status Register */
  __I  uint8_t                        Reserved8[44];
  __IO uint32_t FLEX_US_WPMR;   /**< (FLEXCOM Offset: 0x2E4) USART Write Protection Mode Register */
  __I  uint32_t FLEX_US_WPSR;   /**< (FLEXCOM Offset: 0x2E8) USART Write Protection Status Register */
  __I  uint8_t                        Reserved9[276];
  __O  uint32_t FLEX_SPI_CR;    /**< (FLEXCOM Offset: 0x400) SPI Control Register */
  __IO uint32_t FLEX_SPI_MR;    /**< (FLEXCOM Offset: 0x404) SPI Mode Register */
  __I  uint32_t FLEX_SPI_RDR;   /**< (FLEXCOM Offset: 0x408) SPI Receive Data Register */
  __O  uint32_t FLEX_SPI_TDR;   /**< (FLEXCOM Offset: 0x40C) SPI Transmit Data Register */
  __I  uint32_t FLEX_SPI_SR;    /**< (FLEXCOM Offset: 0x410) SPI Status Register */
  __O  uint32_t FLEX_SPI_IER;   /**< (FLEXCOM Offset: 0x414) SPI Interrupt Enable Register */
  __O  uint32_t FLEX_SPI_IDR;   /**< (FLEXCOM Offset: 0x418) SPI Interrupt Disable Register */
  __I  uint32_t FLEX_SPI_IMR;   /**< (FLEXCOM Offset: 0x41C) SPI Interrupt Mask Register */
  __I  uint8_t                        Reserved10[16];
  __IO uint32_t FLEX_SPI_CSR[2]; /**< (FLEXCOM Offset: 0x430) SPI Chip Select Register */
  __I  uint8_t                        Reserved11[8];
  __IO uint32_t FLEX_SPI_FMR;   /**< (FLEXCOM Offset: 0x440) SPI FIFO Mode Register */
  __I  uint32_t FLEX_SPI_FLR;   /**< (FLEXCOM Offset: 0x444) SPI FIFO Level Register */
  __IO uint32_t FLEX_SPI_CMPR;  /**< (FLEXCOM Offset: 0x448) SPI Comparison Register */
  __I  uint8_t                        Reserved12[152];
  __IO uint32_t FLEX_SPI_WPMR;  /**< (FLEXCOM Offset: 0x4E4) SPI Write Protection Mode Register */
  __I  uint32_t FLEX_SPI_WPSR;  /**< (FLEXCOM Offset: 0x4E8) SPI Write Protection Status Register */
  __I  uint8_t                        Reserved13[276];
  __O  uint32_t FLEX_TWI_CR;    /**< (FLEXCOM Offset: 0x600) TWI Control Register */
  __IO uint32_t FLEX_TWI_MMR;   /**< (FLEXCOM Offset: 0x604) TWI Master Mode Register */
  __IO uint32_t FLEX_TWI_SMR;   /**< (FLEXCOM Offset: 0x608) TWI Slave Mode Register */
  __IO uint32_t FLEX_TWI_IADR;  /**< (FLEXCOM Offset: 0x60C) TWI Internal Address Register */
  __IO uint32_t FLEX_TWI_CWGR;  /**< (FLEXCOM Offset: 0x610) TWI Clock Waveform Generator Register */
  __I  uint8_t                        Reserved14[12];
  __I  uint32_t FLEX_TWI_SR;    /**< (FLEXCOM Offset: 0x620) TWI Status Register */
  __O  uint32_t FLEX_TWI_IER;   /**< (FLEXCOM Offset: 0x624) TWI Interrupt Enable Register */
  __O  uint32_t FLEX_TWI_IDR;   /**< (FLEXCOM Offset: 0x628) TWI Interrupt Disable Register */
  __I  uint32_t FLEX_TWI_IMR;   /**< (FLEXCOM Offset: 0x62C) TWI Interrupt Mask Register */
  __I  uint32_t FLEX_TWI_RHR;   /**< (FLEXCOM Offset: 0x630) TWI Receive Holding Register */
  __O  uint32_t FLEX_TWI_THR;   /**< (FLEXCOM Offset: 0x634) TWI Transmit Holding Register */
  __IO uint32_t FLEX_TWI_SMBTR; /**< (FLEXCOM Offset: 0x638) TWI SMBus Timing Register */
  __I  uint8_t                        Reserved15[4];
  __IO uint32_t FLEX_TWI_ACR;   /**< (FLEXCOM Offset: 0x640) TWI Alternative Command Register */
  __IO uint32_t FLEX_TWI_FILTR; /**< (FLEXCOM Offset: 0x644) TWI Filter Register */
  __I  uint8_t                        Reserved16[4];
  __IO uint32_t FLEX_TWI_SWMR;  /**< (FLEXCOM Offset: 0x64C) TWI SleepWalking Matching Register */
  __IO uint32_t FLEX_TWI_FMR;   /**< (FLEXCOM Offset: 0x650) TWI FIFO Mode Register */
  __I  uint32_t FLEX_TWI_FLR;   /**< (FLEXCOM Offset: 0x654) TWI FIFO Level Register */
  __I  uint8_t                        Reserved17[8];
  __I  uint32_t FLEX_TWI_FSR;   /**< (FLEXCOM Offset: 0x660) TWI FIFO Status Register */
  __O  uint32_t FLEX_TWI_FIER;  /**< (FLEXCOM Offset: 0x664) TWI FIFO Interrupt Enable Register */
  __O  uint32_t FLEX_TWI_FIDR;  /**< (FLEXCOM Offset: 0x668) TWI FIFO Interrupt Disable Register */
  __I  uint32_t FLEX_TWI_FIMR;  /**< (FLEXCOM Offset: 0x66C) TWI FIFO Interrupt Mask Register */
  __I  uint8_t                        Reserved18[96];
  __I  uint32_t FLEX_TWI_DR;    /**< (FLEXCOM Offset: 0x6D0) TWI Debug Register */
  __I  uint8_t                        Reserved19[16];
  __IO uint32_t FLEX_TWI_WPMR;  /**< (FLEXCOM Offset: 0x6E4) TWI Write Protection Mode Register */
  __I  uint32_t FLEX_TWI_WPSR;  /**< (FLEXCOM Offset: 0x6E8) TWI Write Protection Status Register */
} Flexcom;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief FLEXCOM hardware registers */
typedef struct {  
  __IO FLEXCOM_FLEX_MR_Type           FLEX_MR;        /**< Offset: 0x00 (R/W  32) FLEXCOM Mode Register */
  __I  uint8_t                        Reserved1[12];
  __I  FLEXCOM_FLEX_RHR_Type          FLEX_RHR;       /**< Offset: 0x10 (R/   32) FLEXCOM Receive Holding Register */
  __I  uint8_t                        Reserved2[12];
  __IO FLEXCOM_FLEX_THR_Type          FLEX_THR;       /**< Offset: 0x20 (R/W  32) FLEXCOM Transmit Holding Register */
  __I  uint8_t                        Reserved3[476];
  __O  FLEXCOM_FLEX_US_CR_Type        FLEX_US_CR;     /**< Offset: 0x200 ( /W  32) USART Control Register */
  __IO FLEXCOM_FLEX_US_MR_Type        FLEX_US_MR;     /**< Offset: 0x204 (R/W  32) USART Mode Register */
  __O  FLEXCOM_FLEX_US_IER_Type       FLEX_US_IER;    /**< Offset: 0x208 ( /W  32) USART Interrupt Enable Register */
  __O  FLEXCOM_FLEX_US_IDR_Type       FLEX_US_IDR;    /**< Offset: 0x20C ( /W  32) USART Interrupt Disable Register */
  __I  FLEXCOM_FLEX_US_IMR_Type       FLEX_US_IMR;    /**< Offset: 0x210 (R/   32) USART Interrupt Mask Register */
  __I  FLEXCOM_FLEX_US_CSR_Type       FLEX_US_CSR;    /**< Offset: 0x214 (R/   32) USART Channel Status Register */
  __I  FLEXCOM_FLEX_US_RHR_Type       FLEX_US_RHR;    /**< Offset: 0x218 (R/   32) USART Receive Holding Register */
  __O  FLEXCOM_FLEX_US_THR_Type       FLEX_US_THR;    /**< Offset: 0x21C ( /W  32) USART Transmit Holding Register */
  __IO FLEXCOM_FLEX_US_BRGR_Type      FLEX_US_BRGR;   /**< Offset: 0x220 (R/W  32) USART Baud Rate Generator Register */
  __IO FLEXCOM_FLEX_US_RTOR_Type      FLEX_US_RTOR;   /**< Offset: 0x224 (R/W  32) USART Receiver Timeout Register */
  __IO FLEXCOM_FLEX_US_TTGR_Type      FLEX_US_TTGR;   /**< Offset: 0x228 (R/W  32) USART Transmitter Timeguard Register */
  __I  uint8_t                        Reserved4[20];
  __IO FLEXCOM_FLEX_US_FIDI_Type      FLEX_US_FIDI;   /**< Offset: 0x240 (R/W  32) USART FI DI Ratio Register */
  __I  FLEXCOM_FLEX_US_NER_Type       FLEX_US_NER;    /**< Offset: 0x244 (R/   32) USART Number of Errors Register */
  __I  uint8_t                        Reserved5[4];
  __IO FLEXCOM_FLEX_US_IF_Type        FLEX_US_IF;     /**< Offset: 0x24C (R/W  32) USART IrDA Filter Register */
  __IO FLEXCOM_FLEX_US_MAN_Type       FLEX_US_MAN;    /**< Offset: 0x250 (R/W  32) USART Manchester Configuration Register */
  __IO FLEXCOM_FLEX_US_LINMR_Type     FLEX_US_LINMR;  /**< Offset: 0x254 (R/W  32) USART LIN Mode Register */
  __IO FLEXCOM_FLEX_US_LINIR_Type     FLEX_US_LINIR;  /**< Offset: 0x258 (R/W  32) USART LIN Identifier Register */
  __I  FLEXCOM_FLEX_US_LINBRR_Type    FLEX_US_LINBRR; /**< Offset: 0x25C (R/   32) USART LIN Baud Rate Register */
  __I  uint8_t                        Reserved6[48];
  __IO FLEXCOM_FLEX_US_CMPR_Type      FLEX_US_CMPR;   /**< Offset: 0x290 (R/W  32) USART Comparison Register */
  __I  uint8_t                        Reserved7[12];
  __IO FLEXCOM_FLEX_US_FMR_Type       FLEX_US_FMR;    /**< Offset: 0x2A0 (R/W  32) USART FIFO Mode Register */
  __I  FLEXCOM_FLEX_US_FLR_Type       FLEX_US_FLR;    /**< Offset: 0x2A4 (R/   32) USART FIFO Level Register */
  __O  FLEXCOM_FLEX_US_FIER_Type      FLEX_US_FIER;   /**< Offset: 0x2A8 ( /W  32) USART FIFO Interrupt Enable Register */
  __O  FLEXCOM_FLEX_US_FIDR_Type      FLEX_US_FIDR;   /**< Offset: 0x2AC ( /W  32) USART FIFO Interrupt Disable Register */
  __I  FLEXCOM_FLEX_US_FIMR_Type      FLEX_US_FIMR;   /**< Offset: 0x2B0 (R/   32) USART FIFO Interrupt Mask Register */
  __I  FLEXCOM_FLEX_US_FESR_Type      FLEX_US_FESR;   /**< Offset: 0x2B4 (R/   32) USART FIFO Event Status Register */
  __I  uint8_t                        Reserved8[44];
  __IO FLEXCOM_FLEX_US_WPMR_Type      FLEX_US_WPMR;   /**< Offset: 0x2E4 (R/W  32) USART Write Protection Mode Register */
  __I  FLEXCOM_FLEX_US_WPSR_Type      FLEX_US_WPSR;   /**< Offset: 0x2E8 (R/   32) USART Write Protection Status Register */
  __I  uint8_t                        Reserved9[276];
  __O  FLEXCOM_FLEX_SPI_CR_Type       FLEX_SPI_CR;    /**< Offset: 0x400 ( /W  32) SPI Control Register */
  __IO FLEXCOM_FLEX_SPI_MR_Type       FLEX_SPI_MR;    /**< Offset: 0x404 (R/W  32) SPI Mode Register */
  __I  FLEXCOM_FLEX_SPI_RDR_Type      FLEX_SPI_RDR;   /**< Offset: 0x408 (R/   32) SPI Receive Data Register */
  __O  FLEXCOM_FLEX_SPI_TDR_Type      FLEX_SPI_TDR;   /**< Offset: 0x40C ( /W  32) SPI Transmit Data Register */
  __I  FLEXCOM_FLEX_SPI_SR_Type       FLEX_SPI_SR;    /**< Offset: 0x410 (R/   32) SPI Status Register */
  __O  FLEXCOM_FLEX_SPI_IER_Type      FLEX_SPI_IER;   /**< Offset: 0x414 ( /W  32) SPI Interrupt Enable Register */
  __O  FLEXCOM_FLEX_SPI_IDR_Type      FLEX_SPI_IDR;   /**< Offset: 0x418 ( /W  32) SPI Interrupt Disable Register */
  __I  FLEXCOM_FLEX_SPI_IMR_Type      FLEX_SPI_IMR;   /**< Offset: 0x41C (R/   32) SPI Interrupt Mask Register */
  __I  uint8_t                        Reserved10[16];
  __IO FLEXCOM_FLEX_SPI_CSR_Type      FLEX_SPI_CSR[2]; /**< Offset: 0x430 (R/W  32) SPI Chip Select Register */
  __I  uint8_t                        Reserved11[8];
  __IO FLEXCOM_FLEX_SPI_FMR_Type      FLEX_SPI_FMR;   /**< Offset: 0x440 (R/W  32) SPI FIFO Mode Register */
  __I  FLEXCOM_FLEX_SPI_FLR_Type      FLEX_SPI_FLR;   /**< Offset: 0x444 (R/   32) SPI FIFO Level Register */
  __IO FLEXCOM_FLEX_SPI_CMPR_Type     FLEX_SPI_CMPR;  /**< Offset: 0x448 (R/W  32) SPI Comparison Register */
  __I  uint8_t                        Reserved12[152];
  __IO FLEXCOM_FLEX_SPI_WPMR_Type     FLEX_SPI_WPMR;  /**< Offset: 0x4E4 (R/W  32) SPI Write Protection Mode Register */
  __I  FLEXCOM_FLEX_SPI_WPSR_Type     FLEX_SPI_WPSR;  /**< Offset: 0x4E8 (R/   32) SPI Write Protection Status Register */
  __I  uint8_t                        Reserved13[276];
  __O  FLEXCOM_FLEX_TWI_CR_Type       FLEX_TWI_CR;    /**< Offset: 0x600 ( /W  32) TWI Control Register */
  __IO FLEXCOM_FLEX_TWI_MMR_Type      FLEX_TWI_MMR;   /**< Offset: 0x604 (R/W  32) TWI Master Mode Register */
  __IO FLEXCOM_FLEX_TWI_SMR_Type      FLEX_TWI_SMR;   /**< Offset: 0x608 (R/W  32) TWI Slave Mode Register */
  __IO FLEXCOM_FLEX_TWI_IADR_Type     FLEX_TWI_IADR;  /**< Offset: 0x60C (R/W  32) TWI Internal Address Register */
  __IO FLEXCOM_FLEX_TWI_CWGR_Type     FLEX_TWI_CWGR;  /**< Offset: 0x610 (R/W  32) TWI Clock Waveform Generator Register */
  __I  uint8_t                        Reserved14[12];
  __I  FLEXCOM_FLEX_TWI_SR_Type       FLEX_TWI_SR;    /**< Offset: 0x620 (R/   32) TWI Status Register */
  __O  FLEXCOM_FLEX_TWI_IER_Type      FLEX_TWI_IER;   /**< Offset: 0x624 ( /W  32) TWI Interrupt Enable Register */
  __O  FLEXCOM_FLEX_TWI_IDR_Type      FLEX_TWI_IDR;   /**< Offset: 0x628 ( /W  32) TWI Interrupt Disable Register */
  __I  FLEXCOM_FLEX_TWI_IMR_Type      FLEX_TWI_IMR;   /**< Offset: 0x62C (R/   32) TWI Interrupt Mask Register */
  __I  FLEXCOM_FLEX_TWI_RHR_Type      FLEX_TWI_RHR;   /**< Offset: 0x630 (R/   32) TWI Receive Holding Register */
  __O  FLEXCOM_FLEX_TWI_THR_Type      FLEX_TWI_THR;   /**< Offset: 0x634 ( /W  32) TWI Transmit Holding Register */
  __IO FLEXCOM_FLEX_TWI_SMBTR_Type    FLEX_TWI_SMBTR; /**< Offset: 0x638 (R/W  32) TWI SMBus Timing Register */
  __I  uint8_t                        Reserved15[4];
  __IO FLEXCOM_FLEX_TWI_ACR_Type      FLEX_TWI_ACR;   /**< Offset: 0x640 (R/W  32) TWI Alternative Command Register */
  __IO FLEXCOM_FLEX_TWI_FILTR_Type    FLEX_TWI_FILTR; /**< Offset: 0x644 (R/W  32) TWI Filter Register */
  __I  uint8_t                        Reserved16[4];
  __IO FLEXCOM_FLEX_TWI_SWMR_Type     FLEX_TWI_SWMR;  /**< Offset: 0x64C (R/W  32) TWI SleepWalking Matching Register */
  __IO FLEXCOM_FLEX_TWI_FMR_Type      FLEX_TWI_FMR;   /**< Offset: 0x650 (R/W  32) TWI FIFO Mode Register */
  __I  FLEXCOM_FLEX_TWI_FLR_Type      FLEX_TWI_FLR;   /**< Offset: 0x654 (R/   32) TWI FIFO Level Register */
  __I  uint8_t                        Reserved17[8];
  __I  FLEXCOM_FLEX_TWI_FSR_Type      FLEX_TWI_FSR;   /**< Offset: 0x660 (R/   32) TWI FIFO Status Register */
  __O  FLEXCOM_FLEX_TWI_FIER_Type     FLEX_TWI_FIER;  /**< Offset: 0x664 ( /W  32) TWI FIFO Interrupt Enable Register */
  __O  FLEXCOM_FLEX_TWI_FIDR_Type     FLEX_TWI_FIDR;  /**< Offset: 0x668 ( /W  32) TWI FIFO Interrupt Disable Register */
  __I  FLEXCOM_FLEX_TWI_FIMR_Type     FLEX_TWI_FIMR;  /**< Offset: 0x66C (R/   32) TWI FIFO Interrupt Mask Register */
  __I  uint8_t                        Reserved18[96];
  __I  FLEXCOM_FLEX_TWI_DR_Type       FLEX_TWI_DR;    /**< Offset: 0x6D0 (R/   32) TWI Debug Register */
  __I  uint8_t                        Reserved19[16];
  __IO FLEXCOM_FLEX_TWI_WPMR_Type     FLEX_TWI_WPMR;  /**< Offset: 0x6E4 (R/W  32) TWI Write Protection Mode Register */
  __I  FLEXCOM_FLEX_TWI_WPSR_Type     FLEX_TWI_WPSR;  /**< Offset: 0x6E8 (R/   32) TWI Write Protection Status Register */
} Flexcom;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Flexible Serial Communication */

#endif /* _SAMA5D2_FLEXCOM_COMPONENT_H_ */
