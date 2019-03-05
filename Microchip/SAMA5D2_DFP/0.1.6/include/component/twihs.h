/**
 * \file
 *
 * \brief Component description for TWIHS
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
#ifndef _SAMA5D2_TWIHS_COMPONENT_H_
#define _SAMA5D2_TWIHS_COMPONENT_H_
#define _SAMA5D2_TWIHS_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Two-wire Interface High Speed
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR TWIHS */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define TWIHS_11210                      /**< (TWIHS) Module ID */
#define REV_TWIHS ZB                     /**< (TWIHS) Module revision */

/* -------- TWIHS_CR : (TWIHS Offset: 0x00) (/W 32) Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t START:1;                   /**< bit:      0  Send a START Condition                   */
    uint32_t STOP:1;                    /**< bit:      1  Send a STOP Condition                    */
    uint32_t MSEN:1;                    /**< bit:      2  TWIHS Master Mode Enabled                */
    uint32_t MSDIS:1;                   /**< bit:      3  TWIHS Master Mode Disabled               */
    uint32_t SVEN:1;                    /**< bit:      4  TWIHS Slave Mode Enabled                 */
    uint32_t SVDIS:1;                   /**< bit:      5  TWIHS Slave Mode Disabled                */
    uint32_t QUICK:1;                   /**< bit:      6  SMBus Quick Command                      */
    uint32_t SWRST:1;                   /**< bit:      7  Software Reset                           */
    uint32_t HSEN:1;                    /**< bit:      8  TWIHS High-Speed Mode Enabled            */
    uint32_t HSDIS:1;                   /**< bit:      9  TWIHS High-Speed Mode Disabled           */
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
    uint32_t MSEN:1;                    /**< bit:      2  TWIHS Master Mode Enabled                */
    uint32_t MSDIS:1;                   /**< bit:      3  TWIHS Master Mode Disabled               */
    uint32_t SVEN:1;                    /**< bit:      4  TWIHS Slave Mode Enabled                 */
    uint32_t SVDIS:1;                   /**< bit:      5  TWIHS Slave Mode Disabled                */
    uint32_t QUICK:1;                   /**< bit:      6  SMBus Quick Command                      */
    uint32_t SWRST:1;                   /**< bit:      7  Software Reset                           */
    uint32_t HSEN:1;                    /**< bit:      8  TWIHS High-Speed Mode Enabled            */
    uint32_t HSDIS:1;                   /**< bit:      9  TWIHS High-Speed Mode Disabled           */
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
} TWIHS_CR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_CR_OFFSET                     (0x00)                                        /**<  (TWIHS_CR) Control Register  Offset */

#define TWIHS_CR_START_Pos                  0                                              /**< (TWIHS_CR) Send a START Condition Position */
#define TWIHS_CR_START_Msk                  (_U_(0x1) << TWIHS_CR_START_Pos)               /**< (TWIHS_CR) Send a START Condition Mask */
#define TWIHS_CR_START                      TWIHS_CR_START_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_START_Msk instead */
#define TWIHS_CR_STOP_Pos                   1                                              /**< (TWIHS_CR) Send a STOP Condition Position */
#define TWIHS_CR_STOP_Msk                   (_U_(0x1) << TWIHS_CR_STOP_Pos)                /**< (TWIHS_CR) Send a STOP Condition Mask */
#define TWIHS_CR_STOP                       TWIHS_CR_STOP_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_STOP_Msk instead */
#define TWIHS_CR_MSEN_Pos                   2                                              /**< (TWIHS_CR) TWIHS Master Mode Enabled Position */
#define TWIHS_CR_MSEN_Msk                   (_U_(0x1) << TWIHS_CR_MSEN_Pos)                /**< (TWIHS_CR) TWIHS Master Mode Enabled Mask */
#define TWIHS_CR_MSEN                       TWIHS_CR_MSEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_MSEN_Msk instead */
#define TWIHS_CR_MSDIS_Pos                  3                                              /**< (TWIHS_CR) TWIHS Master Mode Disabled Position */
#define TWIHS_CR_MSDIS_Msk                  (_U_(0x1) << TWIHS_CR_MSDIS_Pos)               /**< (TWIHS_CR) TWIHS Master Mode Disabled Mask */
#define TWIHS_CR_MSDIS                      TWIHS_CR_MSDIS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_MSDIS_Msk instead */
#define TWIHS_CR_SVEN_Pos                   4                                              /**< (TWIHS_CR) TWIHS Slave Mode Enabled Position */
#define TWIHS_CR_SVEN_Msk                   (_U_(0x1) << TWIHS_CR_SVEN_Pos)                /**< (TWIHS_CR) TWIHS Slave Mode Enabled Mask */
#define TWIHS_CR_SVEN                       TWIHS_CR_SVEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_SVEN_Msk instead */
#define TWIHS_CR_SVDIS_Pos                  5                                              /**< (TWIHS_CR) TWIHS Slave Mode Disabled Position */
#define TWIHS_CR_SVDIS_Msk                  (_U_(0x1) << TWIHS_CR_SVDIS_Pos)               /**< (TWIHS_CR) TWIHS Slave Mode Disabled Mask */
#define TWIHS_CR_SVDIS                      TWIHS_CR_SVDIS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_SVDIS_Msk instead */
#define TWIHS_CR_QUICK_Pos                  6                                              /**< (TWIHS_CR) SMBus Quick Command Position */
#define TWIHS_CR_QUICK_Msk                  (_U_(0x1) << TWIHS_CR_QUICK_Pos)               /**< (TWIHS_CR) SMBus Quick Command Mask */
#define TWIHS_CR_QUICK                      TWIHS_CR_QUICK_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_QUICK_Msk instead */
#define TWIHS_CR_SWRST_Pos                  7                                              /**< (TWIHS_CR) Software Reset Position */
#define TWIHS_CR_SWRST_Msk                  (_U_(0x1) << TWIHS_CR_SWRST_Pos)               /**< (TWIHS_CR) Software Reset Mask */
#define TWIHS_CR_SWRST                      TWIHS_CR_SWRST_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_SWRST_Msk instead */
#define TWIHS_CR_HSEN_Pos                   8                                              /**< (TWIHS_CR) TWIHS High-Speed Mode Enabled Position */
#define TWIHS_CR_HSEN_Msk                   (_U_(0x1) << TWIHS_CR_HSEN_Pos)                /**< (TWIHS_CR) TWIHS High-Speed Mode Enabled Mask */
#define TWIHS_CR_HSEN                       TWIHS_CR_HSEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_HSEN_Msk instead */
#define TWIHS_CR_HSDIS_Pos                  9                                              /**< (TWIHS_CR) TWIHS High-Speed Mode Disabled Position */
#define TWIHS_CR_HSDIS_Msk                  (_U_(0x1) << TWIHS_CR_HSDIS_Pos)               /**< (TWIHS_CR) TWIHS High-Speed Mode Disabled Mask */
#define TWIHS_CR_HSDIS                      TWIHS_CR_HSDIS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_HSDIS_Msk instead */
#define TWIHS_CR_SMBEN_Pos                  10                                             /**< (TWIHS_CR) SMBus Mode Enabled Position */
#define TWIHS_CR_SMBEN_Msk                  (_U_(0x1) << TWIHS_CR_SMBEN_Pos)               /**< (TWIHS_CR) SMBus Mode Enabled Mask */
#define TWIHS_CR_SMBEN                      TWIHS_CR_SMBEN_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_SMBEN_Msk instead */
#define TWIHS_CR_SMBDIS_Pos                 11                                             /**< (TWIHS_CR) SMBus Mode Disabled Position */
#define TWIHS_CR_SMBDIS_Msk                 (_U_(0x1) << TWIHS_CR_SMBDIS_Pos)              /**< (TWIHS_CR) SMBus Mode Disabled Mask */
#define TWIHS_CR_SMBDIS                     TWIHS_CR_SMBDIS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_SMBDIS_Msk instead */
#define TWIHS_CR_PECEN_Pos                  12                                             /**< (TWIHS_CR) Packet Error Checking Enable Position */
#define TWIHS_CR_PECEN_Msk                  (_U_(0x1) << TWIHS_CR_PECEN_Pos)               /**< (TWIHS_CR) Packet Error Checking Enable Mask */
#define TWIHS_CR_PECEN                      TWIHS_CR_PECEN_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_PECEN_Msk instead */
#define TWIHS_CR_PECDIS_Pos                 13                                             /**< (TWIHS_CR) Packet Error Checking Disable Position */
#define TWIHS_CR_PECDIS_Msk                 (_U_(0x1) << TWIHS_CR_PECDIS_Pos)              /**< (TWIHS_CR) Packet Error Checking Disable Mask */
#define TWIHS_CR_PECDIS                     TWIHS_CR_PECDIS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_PECDIS_Msk instead */
#define TWIHS_CR_PECRQ_Pos                  14                                             /**< (TWIHS_CR) PEC Request Position */
#define TWIHS_CR_PECRQ_Msk                  (_U_(0x1) << TWIHS_CR_PECRQ_Pos)               /**< (TWIHS_CR) PEC Request Mask */
#define TWIHS_CR_PECRQ                      TWIHS_CR_PECRQ_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_PECRQ_Msk instead */
#define TWIHS_CR_CLEAR_Pos                  15                                             /**< (TWIHS_CR) Bus CLEAR Command Position */
#define TWIHS_CR_CLEAR_Msk                  (_U_(0x1) << TWIHS_CR_CLEAR_Pos)               /**< (TWIHS_CR) Bus CLEAR Command Mask */
#define TWIHS_CR_CLEAR                      TWIHS_CR_CLEAR_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_CLEAR_Msk instead */
#define TWIHS_CR_ACMEN_Pos                  16                                             /**< (TWIHS_CR) Alternative Command Mode Enable Position */
#define TWIHS_CR_ACMEN_Msk                  (_U_(0x1) << TWIHS_CR_ACMEN_Pos)               /**< (TWIHS_CR) Alternative Command Mode Enable Mask */
#define TWIHS_CR_ACMEN                      TWIHS_CR_ACMEN_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_ACMEN_Msk instead */
#define TWIHS_CR_ACMDIS_Pos                 17                                             /**< (TWIHS_CR) Alternative Command Mode Disable Position */
#define TWIHS_CR_ACMDIS_Msk                 (_U_(0x1) << TWIHS_CR_ACMDIS_Pos)              /**< (TWIHS_CR) Alternative Command Mode Disable Mask */
#define TWIHS_CR_ACMDIS                     TWIHS_CR_ACMDIS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_ACMDIS_Msk instead */
#define TWIHS_CR_THRCLR_Pos                 24                                             /**< (TWIHS_CR) Transmit Holding Register Clear Position */
#define TWIHS_CR_THRCLR_Msk                 (_U_(0x1) << TWIHS_CR_THRCLR_Pos)              /**< (TWIHS_CR) Transmit Holding Register Clear Mask */
#define TWIHS_CR_THRCLR                     TWIHS_CR_THRCLR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_THRCLR_Msk instead */
#define TWIHS_CR_LOCKCLR_Pos                26                                             /**< (TWIHS_CR) Lock Clear Position */
#define TWIHS_CR_LOCKCLR_Msk                (_U_(0x1) << TWIHS_CR_LOCKCLR_Pos)             /**< (TWIHS_CR) Lock Clear Mask */
#define TWIHS_CR_LOCKCLR                    TWIHS_CR_LOCKCLR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_LOCKCLR_Msk instead */
#define TWIHS_CR_FIFOEN_Pos                 28                                             /**< (TWIHS_CR) FIFO Enable Position */
#define TWIHS_CR_FIFOEN_Msk                 (_U_(0x1) << TWIHS_CR_FIFOEN_Pos)              /**< (TWIHS_CR) FIFO Enable Mask */
#define TWIHS_CR_FIFOEN                     TWIHS_CR_FIFOEN_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFOEN_Msk instead */
#define TWIHS_CR_FIFODIS_Pos                29                                             /**< (TWIHS_CR) FIFO Disable Position */
#define TWIHS_CR_FIFODIS_Msk                (_U_(0x1) << TWIHS_CR_FIFODIS_Pos)             /**< (TWIHS_CR) FIFO Disable Mask */
#define TWIHS_CR_FIFODIS                    TWIHS_CR_FIFODIS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFODIS_Msk instead */
#define TWIHS_CR_MASK                       _U_(0x3503FFFF)                                /**< \deprecated (TWIHS_CR) Register MASK  (Use TWIHS_CR_Msk instead)  */
#define TWIHS_CR_Msk                        _U_(0x3503FFFF)                                /**< (TWIHS_CR) Register Mask  */

/* FIFO_ENABLED mode */
#define TWIHS_CR_FIFO_ENABLED_START_Pos     0                                              /**< (TWIHS_CR) Send a START Condition Position */
#define TWIHS_CR_FIFO_ENABLED_START_Msk     (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_START_Pos)  /**< (TWIHS_CR) Send a START Condition Mask */
#define TWIHS_CR_FIFO_ENABLED_START         TWIHS_CR_FIFO_ENABLED_START_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_START_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_STOP_Pos      1                                              /**< (TWIHS_CR) Send a STOP Condition Position */
#define TWIHS_CR_FIFO_ENABLED_STOP_Msk      (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_STOP_Pos)   /**< (TWIHS_CR) Send a STOP Condition Mask */
#define TWIHS_CR_FIFO_ENABLED_STOP          TWIHS_CR_FIFO_ENABLED_STOP_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_STOP_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_MSEN_Pos      2                                              /**< (TWIHS_CR) TWIHS Master Mode Enabled Position */
#define TWIHS_CR_FIFO_ENABLED_MSEN_Msk      (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_MSEN_Pos)   /**< (TWIHS_CR) TWIHS Master Mode Enabled Mask */
#define TWIHS_CR_FIFO_ENABLED_MSEN          TWIHS_CR_FIFO_ENABLED_MSEN_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_MSEN_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_MSDIS_Pos     3                                              /**< (TWIHS_CR) TWIHS Master Mode Disabled Position */
#define TWIHS_CR_FIFO_ENABLED_MSDIS_Msk     (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_MSDIS_Pos)  /**< (TWIHS_CR) TWIHS Master Mode Disabled Mask */
#define TWIHS_CR_FIFO_ENABLED_MSDIS         TWIHS_CR_FIFO_ENABLED_MSDIS_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_MSDIS_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_SVEN_Pos      4                                              /**< (TWIHS_CR) TWIHS Slave Mode Enabled Position */
#define TWIHS_CR_FIFO_ENABLED_SVEN_Msk      (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_SVEN_Pos)   /**< (TWIHS_CR) TWIHS Slave Mode Enabled Mask */
#define TWIHS_CR_FIFO_ENABLED_SVEN          TWIHS_CR_FIFO_ENABLED_SVEN_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_SVEN_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_SVDIS_Pos     5                                              /**< (TWIHS_CR) TWIHS Slave Mode Disabled Position */
#define TWIHS_CR_FIFO_ENABLED_SVDIS_Msk     (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_SVDIS_Pos)  /**< (TWIHS_CR) TWIHS Slave Mode Disabled Mask */
#define TWIHS_CR_FIFO_ENABLED_SVDIS         TWIHS_CR_FIFO_ENABLED_SVDIS_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_SVDIS_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_QUICK_Pos     6                                              /**< (TWIHS_CR) SMBus Quick Command Position */
#define TWIHS_CR_FIFO_ENABLED_QUICK_Msk     (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_QUICK_Pos)  /**< (TWIHS_CR) SMBus Quick Command Mask */
#define TWIHS_CR_FIFO_ENABLED_QUICK         TWIHS_CR_FIFO_ENABLED_QUICK_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_QUICK_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_SWRST_Pos     7                                              /**< (TWIHS_CR) Software Reset Position */
#define TWIHS_CR_FIFO_ENABLED_SWRST_Msk     (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_SWRST_Pos)  /**< (TWIHS_CR) Software Reset Mask */
#define TWIHS_CR_FIFO_ENABLED_SWRST         TWIHS_CR_FIFO_ENABLED_SWRST_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_SWRST_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_HSEN_Pos      8                                              /**< (TWIHS_CR) TWIHS High-Speed Mode Enabled Position */
#define TWIHS_CR_FIFO_ENABLED_HSEN_Msk      (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_HSEN_Pos)   /**< (TWIHS_CR) TWIHS High-Speed Mode Enabled Mask */
#define TWIHS_CR_FIFO_ENABLED_HSEN          TWIHS_CR_FIFO_ENABLED_HSEN_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_HSEN_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_HSDIS_Pos     9                                              /**< (TWIHS_CR) TWIHS High-Speed Mode Disabled Position */
#define TWIHS_CR_FIFO_ENABLED_HSDIS_Msk     (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_HSDIS_Pos)  /**< (TWIHS_CR) TWIHS High-Speed Mode Disabled Mask */
#define TWIHS_CR_FIFO_ENABLED_HSDIS         TWIHS_CR_FIFO_ENABLED_HSDIS_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_HSDIS_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_SMBEN_Pos     10                                             /**< (TWIHS_CR) SMBus Mode Enabled Position */
#define TWIHS_CR_FIFO_ENABLED_SMBEN_Msk     (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_SMBEN_Pos)  /**< (TWIHS_CR) SMBus Mode Enabled Mask */
#define TWIHS_CR_FIFO_ENABLED_SMBEN         TWIHS_CR_FIFO_ENABLED_SMBEN_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_SMBEN_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_SMBDIS_Pos    11                                             /**< (TWIHS_CR) SMBus Mode Disabled Position */
#define TWIHS_CR_FIFO_ENABLED_SMBDIS_Msk    (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_SMBDIS_Pos)  /**< (TWIHS_CR) SMBus Mode Disabled Mask */
#define TWIHS_CR_FIFO_ENABLED_SMBDIS        TWIHS_CR_FIFO_ENABLED_SMBDIS_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_SMBDIS_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_PECEN_Pos     12                                             /**< (TWIHS_CR) Packet Error Checking Enable Position */
#define TWIHS_CR_FIFO_ENABLED_PECEN_Msk     (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_PECEN_Pos)  /**< (TWIHS_CR) Packet Error Checking Enable Mask */
#define TWIHS_CR_FIFO_ENABLED_PECEN         TWIHS_CR_FIFO_ENABLED_PECEN_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_PECEN_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_PECDIS_Pos    13                                             /**< (TWIHS_CR) Packet Error Checking Disable Position */
#define TWIHS_CR_FIFO_ENABLED_PECDIS_Msk    (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_PECDIS_Pos)  /**< (TWIHS_CR) Packet Error Checking Disable Mask */
#define TWIHS_CR_FIFO_ENABLED_PECDIS        TWIHS_CR_FIFO_ENABLED_PECDIS_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_PECDIS_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_PECRQ_Pos     14                                             /**< (TWIHS_CR) PEC Request Position */
#define TWIHS_CR_FIFO_ENABLED_PECRQ_Msk     (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_PECRQ_Pos)  /**< (TWIHS_CR) PEC Request Mask */
#define TWIHS_CR_FIFO_ENABLED_PECRQ         TWIHS_CR_FIFO_ENABLED_PECRQ_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_PECRQ_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_CLEAR_Pos     15                                             /**< (TWIHS_CR) Bus CLEAR Command Position */
#define TWIHS_CR_FIFO_ENABLED_CLEAR_Msk     (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_CLEAR_Pos)  /**< (TWIHS_CR) Bus CLEAR Command Mask */
#define TWIHS_CR_FIFO_ENABLED_CLEAR         TWIHS_CR_FIFO_ENABLED_CLEAR_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_CLEAR_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_ACMEN_Pos     16                                             /**< (TWIHS_CR) Alternative Command Mode Enable Position */
#define TWIHS_CR_FIFO_ENABLED_ACMEN_Msk     (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_ACMEN_Pos)  /**< (TWIHS_CR) Alternative Command Mode Enable Mask */
#define TWIHS_CR_FIFO_ENABLED_ACMEN         TWIHS_CR_FIFO_ENABLED_ACMEN_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_ACMEN_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_ACMDIS_Pos    17                                             /**< (TWIHS_CR) Alternative Command Mode Disable Position */
#define TWIHS_CR_FIFO_ENABLED_ACMDIS_Msk    (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_ACMDIS_Pos)  /**< (TWIHS_CR) Alternative Command Mode Disable Mask */
#define TWIHS_CR_FIFO_ENABLED_ACMDIS        TWIHS_CR_FIFO_ENABLED_ACMDIS_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_ACMDIS_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_TXFCLR_Pos    24                                             /**< (TWIHS_CR) Transmit FIFO Clear Position */
#define TWIHS_CR_FIFO_ENABLED_TXFCLR_Msk    (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_TXFCLR_Pos)  /**< (TWIHS_CR) Transmit FIFO Clear Mask */
#define TWIHS_CR_FIFO_ENABLED_TXFCLR        TWIHS_CR_FIFO_ENABLED_TXFCLR_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_TXFCLR_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_RXFCLR_Pos    25                                             /**< (TWIHS_CR) Receive FIFO Clear Position */
#define TWIHS_CR_FIFO_ENABLED_RXFCLR_Msk    (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_RXFCLR_Pos)  /**< (TWIHS_CR) Receive FIFO Clear Mask */
#define TWIHS_CR_FIFO_ENABLED_RXFCLR        TWIHS_CR_FIFO_ENABLED_RXFCLR_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_RXFCLR_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_TXFLCLR_Pos   26                                             /**< (TWIHS_CR) Transmit FIFO Lock CLEAR Position */
#define TWIHS_CR_FIFO_ENABLED_TXFLCLR_Msk   (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_TXFLCLR_Pos)  /**< (TWIHS_CR) Transmit FIFO Lock CLEAR Mask */
#define TWIHS_CR_FIFO_ENABLED_TXFLCLR       TWIHS_CR_FIFO_ENABLED_TXFLCLR_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_TXFLCLR_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_FIFOEN_Pos    28                                             /**< (TWIHS_CR) FIFO Enable Position */
#define TWIHS_CR_FIFO_ENABLED_FIFOEN_Msk    (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_FIFOEN_Pos)  /**< (TWIHS_CR) FIFO Enable Mask */
#define TWIHS_CR_FIFO_ENABLED_FIFOEN        TWIHS_CR_FIFO_ENABLED_FIFOEN_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_FIFOEN_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_FIFODIS_Pos   29                                             /**< (TWIHS_CR) FIFO Disable Position */
#define TWIHS_CR_FIFO_ENABLED_FIFODIS_Msk   (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_FIFODIS_Pos)  /**< (TWIHS_CR) FIFO Disable Mask */
#define TWIHS_CR_FIFO_ENABLED_FIFODIS       TWIHS_CR_FIFO_ENABLED_FIFODIS_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CR_FIFO_ENABLED_FIFODIS_Msk instead */
#define TWIHS_CR_FIFO_ENABLED_MASK          _U_(0x3703FFFF)                                /**< \deprecated (TWIHS_CR_FIFO_ENABLED) Register MASK  (Use TWIHS_CR_FIFO_ENABLED_Msk instead)  */
#define TWIHS_CR_FIFO_ENABLED_Msk           _U_(0x3703FFFF)                                /**< (TWIHS_CR_FIFO_ENABLED) Register Mask  */


/* -------- TWIHS_MMR : (TWIHS Offset: 0x04) (R/W 32) Master Mode Register -------- */
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
} TWIHS_MMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_MMR_OFFSET                    (0x04)                                        /**<  (TWIHS_MMR) Master Mode Register  Offset */

#define TWIHS_MMR_IADRSZ_Pos                8                                              /**< (TWIHS_MMR) Internal Device Address Size Position */
#define TWIHS_MMR_IADRSZ_Msk                (_U_(0x3) << TWIHS_MMR_IADRSZ_Pos)             /**< (TWIHS_MMR) Internal Device Address Size Mask */
#define TWIHS_MMR_IADRSZ(value)             (TWIHS_MMR_IADRSZ_Msk & ((value) << TWIHS_MMR_IADRSZ_Pos))
#define   TWIHS_MMR_IADRSZ_NONE_Val         _U_(0x0)                                       /**< (TWIHS_MMR) No internal device address  */
#define   TWIHS_MMR_IADRSZ_1_BYTE_Val       _U_(0x1)                                       /**< (TWIHS_MMR) One-byte internal device address  */
#define   TWIHS_MMR_IADRSZ_2_BYTE_Val       _U_(0x2)                                       /**< (TWIHS_MMR) Two-byte internal device address  */
#define   TWIHS_MMR_IADRSZ_3_BYTE_Val       _U_(0x3)                                       /**< (TWIHS_MMR) Three-byte internal device address  */
#define TWIHS_MMR_IADRSZ_NONE               (TWIHS_MMR_IADRSZ_NONE_Val << TWIHS_MMR_IADRSZ_Pos)  /**< (TWIHS_MMR) No internal device address Position  */
#define TWIHS_MMR_IADRSZ_1_BYTE             (TWIHS_MMR_IADRSZ_1_BYTE_Val << TWIHS_MMR_IADRSZ_Pos)  /**< (TWIHS_MMR) One-byte internal device address Position  */
#define TWIHS_MMR_IADRSZ_2_BYTE             (TWIHS_MMR_IADRSZ_2_BYTE_Val << TWIHS_MMR_IADRSZ_Pos)  /**< (TWIHS_MMR) Two-byte internal device address Position  */
#define TWIHS_MMR_IADRSZ_3_BYTE             (TWIHS_MMR_IADRSZ_3_BYTE_Val << TWIHS_MMR_IADRSZ_Pos)  /**< (TWIHS_MMR) Three-byte internal device address Position  */
#define TWIHS_MMR_MREAD_Pos                 12                                             /**< (TWIHS_MMR) Master Read Direction Position */
#define TWIHS_MMR_MREAD_Msk                 (_U_(0x1) << TWIHS_MMR_MREAD_Pos)              /**< (TWIHS_MMR) Master Read Direction Mask */
#define TWIHS_MMR_MREAD                     TWIHS_MMR_MREAD_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_MMR_MREAD_Msk instead */
#define TWIHS_MMR_DADR_Pos                  16                                             /**< (TWIHS_MMR) Device Address Position */
#define TWIHS_MMR_DADR_Msk                  (_U_(0x7F) << TWIHS_MMR_DADR_Pos)              /**< (TWIHS_MMR) Device Address Mask */
#define TWIHS_MMR_DADR(value)               (TWIHS_MMR_DADR_Msk & ((value) << TWIHS_MMR_DADR_Pos))
#define TWIHS_MMR_MASK                      _U_(0x7F1300)                                  /**< \deprecated (TWIHS_MMR) Register MASK  (Use TWIHS_MMR_Msk instead)  */
#define TWIHS_MMR_Msk                       _U_(0x7F1300)                                  /**< (TWIHS_MMR) Register Mask  */


/* -------- TWIHS_SMR : (TWIHS Offset: 0x08) (R/W 32) Slave Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NACKEN:1;                  /**< bit:      0  Slave Receiver Data Phase NACK enable    */
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
} TWIHS_SMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_SMR_OFFSET                    (0x08)                                        /**<  (TWIHS_SMR) Slave Mode Register  Offset */

#define TWIHS_SMR_NACKEN_Pos                0                                              /**< (TWIHS_SMR) Slave Receiver Data Phase NACK enable Position */
#define TWIHS_SMR_NACKEN_Msk                (_U_(0x1) << TWIHS_SMR_NACKEN_Pos)             /**< (TWIHS_SMR) Slave Receiver Data Phase NACK enable Mask */
#define TWIHS_SMR_NACKEN                    TWIHS_SMR_NACKEN_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SMR_NACKEN_Msk instead */
#define TWIHS_SMR_SMDA_Pos                  2                                              /**< (TWIHS_SMR) SMBus Default Address Position */
#define TWIHS_SMR_SMDA_Msk                  (_U_(0x1) << TWIHS_SMR_SMDA_Pos)               /**< (TWIHS_SMR) SMBus Default Address Mask */
#define TWIHS_SMR_SMDA                      TWIHS_SMR_SMDA_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SMR_SMDA_Msk instead */
#define TWIHS_SMR_SMHH_Pos                  3                                              /**< (TWIHS_SMR) SMBus Host Header Position */
#define TWIHS_SMR_SMHH_Msk                  (_U_(0x1) << TWIHS_SMR_SMHH_Pos)               /**< (TWIHS_SMR) SMBus Host Header Mask */
#define TWIHS_SMR_SMHH                      TWIHS_SMR_SMHH_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SMR_SMHH_Msk instead */
#define TWIHS_SMR_SCLWSDIS_Pos              6                                              /**< (TWIHS_SMR) Clock Wait State Disable Position */
#define TWIHS_SMR_SCLWSDIS_Msk              (_U_(0x1) << TWIHS_SMR_SCLWSDIS_Pos)           /**< (TWIHS_SMR) Clock Wait State Disable Mask */
#define TWIHS_SMR_SCLWSDIS                  TWIHS_SMR_SCLWSDIS_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SMR_SCLWSDIS_Msk instead */
#define TWIHS_SMR_MASK_Pos                  8                                              /**< (TWIHS_SMR) Slave Address Mask Position */
#define TWIHS_SMR_MASK_Msk                  (_U_(0x7F) << TWIHS_SMR_MASK_Pos)              /**< (TWIHS_SMR) Slave Address Mask Mask */
#define TWIHS_SMR_MASK(value)               (TWIHS_SMR_MASK_Msk & ((value) << TWIHS_SMR_MASK_Pos))
#define TWIHS_SMR_SADR_Pos                  16                                             /**< (TWIHS_SMR) Slave Address Position */
#define TWIHS_SMR_SADR_Msk                  (_U_(0x7F) << TWIHS_SMR_SADR_Pos)              /**< (TWIHS_SMR) Slave Address Mask */
#define TWIHS_SMR_SADR(value)               (TWIHS_SMR_SADR_Msk & ((value) << TWIHS_SMR_SADR_Pos))
#define TWIHS_SMR_SADR1EN_Pos               28                                             /**< (TWIHS_SMR) Slave Address 1 Enable Position */
#define TWIHS_SMR_SADR1EN_Msk               (_U_(0x1) << TWIHS_SMR_SADR1EN_Pos)            /**< (TWIHS_SMR) Slave Address 1 Enable Mask */
#define TWIHS_SMR_SADR1EN                   TWIHS_SMR_SADR1EN_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SMR_SADR1EN_Msk instead */
#define TWIHS_SMR_SADR2EN_Pos               29                                             /**< (TWIHS_SMR) Slave Address 2 Enable Position */
#define TWIHS_SMR_SADR2EN_Msk               (_U_(0x1) << TWIHS_SMR_SADR2EN_Pos)            /**< (TWIHS_SMR) Slave Address 2 Enable Mask */
#define TWIHS_SMR_SADR2EN                   TWIHS_SMR_SADR2EN_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SMR_SADR2EN_Msk instead */
#define TWIHS_SMR_SADR3EN_Pos               30                                             /**< (TWIHS_SMR) Slave Address 3 Enable Position */
#define TWIHS_SMR_SADR3EN_Msk               (_U_(0x1) << TWIHS_SMR_SADR3EN_Pos)            /**< (TWIHS_SMR) Slave Address 3 Enable Mask */
#define TWIHS_SMR_SADR3EN                   TWIHS_SMR_SADR3EN_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SMR_SADR3EN_Msk instead */
#define TWIHS_SMR_DATAMEN_Pos               31                                             /**< (TWIHS_SMR) Data Matching Enable Position */
#define TWIHS_SMR_DATAMEN_Msk               (_U_(0x1) << TWIHS_SMR_DATAMEN_Pos)            /**< (TWIHS_SMR) Data Matching Enable Mask */
#define TWIHS_SMR_DATAMEN                   TWIHS_SMR_DATAMEN_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SMR_DATAMEN_Msk instead */
#define TWIHS_SMR_Msk                       _U_(0xF07F7F4D)                                /**< (TWIHS_SMR) Register Mask  */


/* -------- TWIHS_IADR : (TWIHS Offset: 0x0c) (R/W 32) Internal Address Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t IADR:24;                   /**< bit:  0..23  Internal Address                         */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWIHS_IADR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_IADR_OFFSET                   (0x0C)                                        /**<  (TWIHS_IADR) Internal Address Register  Offset */

#define TWIHS_IADR_IADR_Pos                 0                                              /**< (TWIHS_IADR) Internal Address Position */
#define TWIHS_IADR_IADR_Msk                 (_U_(0xFFFFFF) << TWIHS_IADR_IADR_Pos)         /**< (TWIHS_IADR) Internal Address Mask */
#define TWIHS_IADR_IADR(value)              (TWIHS_IADR_IADR_Msk & ((value) << TWIHS_IADR_IADR_Pos))
#define TWIHS_IADR_MASK                     _U_(0xFFFFFF)                                  /**< \deprecated (TWIHS_IADR) Register MASK  (Use TWIHS_IADR_Msk instead)  */
#define TWIHS_IADR_Msk                      _U_(0xFFFFFF)                                  /**< (TWIHS_IADR) Register Mask  */


/* -------- TWIHS_CWGR : (TWIHS Offset: 0x10) (R/W 32) Clock Waveform Generator Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CLDIV:8;                   /**< bit:   0..7  Clock Low Divider                        */
    uint32_t CHDIV:8;                   /**< bit:  8..15  Clock High Divider                       */
    uint32_t CKDIV:3;                   /**< bit: 16..18  Clock Divider                            */
    uint32_t :1;                        /**< bit:     19  Reserved */
    uint32_t CKSRC:1;                   /**< bit:     20  Transfer Rate Clock Source               */
    uint32_t :3;                        /**< bit: 21..23  Reserved */
    uint32_t HOLD:5;                    /**< bit: 24..28  TWD Hold Time Versus TWCK Falling        */
    uint32_t :3;                        /**< bit: 29..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWIHS_CWGR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_CWGR_OFFSET                   (0x10)                                        /**<  (TWIHS_CWGR) Clock Waveform Generator Register  Offset */

#define TWIHS_CWGR_CLDIV_Pos                0                                              /**< (TWIHS_CWGR) Clock Low Divider Position */
#define TWIHS_CWGR_CLDIV_Msk                (_U_(0xFF) << TWIHS_CWGR_CLDIV_Pos)            /**< (TWIHS_CWGR) Clock Low Divider Mask */
#define TWIHS_CWGR_CLDIV(value)             (TWIHS_CWGR_CLDIV_Msk & ((value) << TWIHS_CWGR_CLDIV_Pos))
#define TWIHS_CWGR_CHDIV_Pos                8                                              /**< (TWIHS_CWGR) Clock High Divider Position */
#define TWIHS_CWGR_CHDIV_Msk                (_U_(0xFF) << TWIHS_CWGR_CHDIV_Pos)            /**< (TWIHS_CWGR) Clock High Divider Mask */
#define TWIHS_CWGR_CHDIV(value)             (TWIHS_CWGR_CHDIV_Msk & ((value) << TWIHS_CWGR_CHDIV_Pos))
#define TWIHS_CWGR_CKDIV_Pos                16                                             /**< (TWIHS_CWGR) Clock Divider Position */
#define TWIHS_CWGR_CKDIV_Msk                (_U_(0x7) << TWIHS_CWGR_CKDIV_Pos)             /**< (TWIHS_CWGR) Clock Divider Mask */
#define TWIHS_CWGR_CKDIV(value)             (TWIHS_CWGR_CKDIV_Msk & ((value) << TWIHS_CWGR_CKDIV_Pos))
#define TWIHS_CWGR_CKSRC_Pos                20                                             /**< (TWIHS_CWGR) Transfer Rate Clock Source Position */
#define TWIHS_CWGR_CKSRC_Msk                (_U_(0x1) << TWIHS_CWGR_CKSRC_Pos)             /**< (TWIHS_CWGR) Transfer Rate Clock Source Mask */
#define TWIHS_CWGR_CKSRC                    TWIHS_CWGR_CKSRC_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_CWGR_CKSRC_Msk instead */
#define   TWIHS_CWGR_CKSRC_PERIPH_CK_Val    _U_(0x0)                                       /**< (TWIHS_CWGR) Peripheral clock is used to generate the TWIHS baud rate.  */
#define   TWIHS_CWGR_CKSRC_GCLK_Val         _U_(0x1)                                       /**< (TWIHS_CWGR) GCLK is used to generate the TWIHS baud rate.  */
#define TWIHS_CWGR_CKSRC_PERIPH_CK          (TWIHS_CWGR_CKSRC_PERIPH_CK_Val << TWIHS_CWGR_CKSRC_Pos)  /**< (TWIHS_CWGR) Peripheral clock is used to generate the TWIHS baud rate. Position  */
#define TWIHS_CWGR_CKSRC_GCLK               (TWIHS_CWGR_CKSRC_GCLK_Val << TWIHS_CWGR_CKSRC_Pos)  /**< (TWIHS_CWGR) GCLK is used to generate the TWIHS baud rate. Position  */
#define TWIHS_CWGR_HOLD_Pos                 24                                             /**< (TWIHS_CWGR) TWD Hold Time Versus TWCK Falling Position */
#define TWIHS_CWGR_HOLD_Msk                 (_U_(0x1F) << TWIHS_CWGR_HOLD_Pos)             /**< (TWIHS_CWGR) TWD Hold Time Versus TWCK Falling Mask */
#define TWIHS_CWGR_HOLD(value)              (TWIHS_CWGR_HOLD_Msk & ((value) << TWIHS_CWGR_HOLD_Pos))
#define TWIHS_CWGR_MASK                     _U_(0x1F17FFFF)                                /**< \deprecated (TWIHS_CWGR) Register MASK  (Use TWIHS_CWGR_Msk instead)  */
#define TWIHS_CWGR_Msk                      _U_(0x1F17FFFF)                                /**< (TWIHS_CWGR) Register Mask  */


/* -------- TWIHS_SR : (TWIHS Offset: 0x20) (R/ 32) Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXCOMP:1;                  /**< bit:      0  Transmission Completed (cleared by writing TWIHS_THR) */
    uint32_t RXRDY:1;                   /**< bit:      1  Receive Holding Register Ready (cleared by reading TWIHS_RHR) */
    uint32_t TXRDY:1;                   /**< bit:      2  Transmit Holding Register Ready (cleared by writing TWIHS_THR) */
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
    uint32_t LOCK:1;                    /**< bit:     23  TWIHS Lock due to Frame Errors (cleared by writing a one to bit LOCKCLR in TWIHS_CR) */
    uint32_t SCL:1;                     /**< bit:     24  SCL Line Value                           */
    uint32_t SDA:1;                     /**< bit:     25  SDA Line Value                           */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct { // FIFO_ENABLED mode
    uint32_t TXCOMP:1;                  /**< bit:      0  Transmission Completed (cleared by writing TWIHS_THR) */
    uint32_t RXRDY:1;                   /**< bit:      1  Receive Holding Register Ready (cleared by reading TWIHS_RHR) */
    uint32_t TXRDY:1;                   /**< bit:      2  Transmit Holding Register Ready (cleared by writing TWIHS_THR) */
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
} TWIHS_SR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_SR_OFFSET                     (0x20)                                        /**<  (TWIHS_SR) Status Register  Offset */

#define TWIHS_SR_TXCOMP_Pos                 0                                              /**< (TWIHS_SR) Transmission Completed (cleared by writing TWIHS_THR) Position */
#define TWIHS_SR_TXCOMP_Msk                 (_U_(0x1) << TWIHS_SR_TXCOMP_Pos)              /**< (TWIHS_SR) Transmission Completed (cleared by writing TWIHS_THR) Mask */
#define TWIHS_SR_TXCOMP                     TWIHS_SR_TXCOMP_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_TXCOMP_Msk instead */
#define TWIHS_SR_RXRDY_Pos                  1                                              /**< (TWIHS_SR) Receive Holding Register Ready (cleared by reading TWIHS_RHR) Position */
#define TWIHS_SR_RXRDY_Msk                  (_U_(0x1) << TWIHS_SR_RXRDY_Pos)               /**< (TWIHS_SR) Receive Holding Register Ready (cleared by reading TWIHS_RHR) Mask */
#define TWIHS_SR_RXRDY                      TWIHS_SR_RXRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_RXRDY_Msk instead */
#define TWIHS_SR_TXRDY_Pos                  2                                              /**< (TWIHS_SR) Transmit Holding Register Ready (cleared by writing TWIHS_THR) Position */
#define TWIHS_SR_TXRDY_Msk                  (_U_(0x1) << TWIHS_SR_TXRDY_Pos)               /**< (TWIHS_SR) Transmit Holding Register Ready (cleared by writing TWIHS_THR) Mask */
#define TWIHS_SR_TXRDY                      TWIHS_SR_TXRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_TXRDY_Msk instead */
#define TWIHS_SR_SVREAD_Pos                 3                                              /**< (TWIHS_SR) Slave Read Position */
#define TWIHS_SR_SVREAD_Msk                 (_U_(0x1) << TWIHS_SR_SVREAD_Pos)              /**< (TWIHS_SR) Slave Read Mask */
#define TWIHS_SR_SVREAD                     TWIHS_SR_SVREAD_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_SVREAD_Msk instead */
#define TWIHS_SR_SVACC_Pos                  4                                              /**< (TWIHS_SR) Slave Access Position */
#define TWIHS_SR_SVACC_Msk                  (_U_(0x1) << TWIHS_SR_SVACC_Pos)               /**< (TWIHS_SR) Slave Access Mask */
#define TWIHS_SR_SVACC                      TWIHS_SR_SVACC_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_SVACC_Msk instead */
#define TWIHS_SR_GACC_Pos                   5                                              /**< (TWIHS_SR) General Call Access (cleared on read) Position */
#define TWIHS_SR_GACC_Msk                   (_U_(0x1) << TWIHS_SR_GACC_Pos)                /**< (TWIHS_SR) General Call Access (cleared on read) Mask */
#define TWIHS_SR_GACC                       TWIHS_SR_GACC_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_GACC_Msk instead */
#define TWIHS_SR_OVRE_Pos                   6                                              /**< (TWIHS_SR) Overrun Error (cleared on read) Position */
#define TWIHS_SR_OVRE_Msk                   (_U_(0x1) << TWIHS_SR_OVRE_Pos)                /**< (TWIHS_SR) Overrun Error (cleared on read) Mask */
#define TWIHS_SR_OVRE                       TWIHS_SR_OVRE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_OVRE_Msk instead */
#define TWIHS_SR_UNRE_Pos                   7                                              /**< (TWIHS_SR) Underrun Error (cleared on read) Position */
#define TWIHS_SR_UNRE_Msk                   (_U_(0x1) << TWIHS_SR_UNRE_Pos)                /**< (TWIHS_SR) Underrun Error (cleared on read) Mask */
#define TWIHS_SR_UNRE                       TWIHS_SR_UNRE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_UNRE_Msk instead */
#define TWIHS_SR_NACK_Pos                   8                                              /**< (TWIHS_SR) Not Acknowledged (cleared on read) Position */
#define TWIHS_SR_NACK_Msk                   (_U_(0x1) << TWIHS_SR_NACK_Pos)                /**< (TWIHS_SR) Not Acknowledged (cleared on read) Mask */
#define TWIHS_SR_NACK                       TWIHS_SR_NACK_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_NACK_Msk instead */
#define TWIHS_SR_ARBLST_Pos                 9                                              /**< (TWIHS_SR) Arbitration Lost (cleared on read) Position */
#define TWIHS_SR_ARBLST_Msk                 (_U_(0x1) << TWIHS_SR_ARBLST_Pos)              /**< (TWIHS_SR) Arbitration Lost (cleared on read) Mask */
#define TWIHS_SR_ARBLST                     TWIHS_SR_ARBLST_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_ARBLST_Msk instead */
#define TWIHS_SR_SCLWS_Pos                  10                                             /**< (TWIHS_SR) Clock Wait State Position */
#define TWIHS_SR_SCLWS_Msk                  (_U_(0x1) << TWIHS_SR_SCLWS_Pos)               /**< (TWIHS_SR) Clock Wait State Mask */
#define TWIHS_SR_SCLWS                      TWIHS_SR_SCLWS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_SCLWS_Msk instead */
#define TWIHS_SR_EOSACC_Pos                 11                                             /**< (TWIHS_SR) End Of Slave Access (cleared on read) Position */
#define TWIHS_SR_EOSACC_Msk                 (_U_(0x1) << TWIHS_SR_EOSACC_Pos)              /**< (TWIHS_SR) End Of Slave Access (cleared on read) Mask */
#define TWIHS_SR_EOSACC                     TWIHS_SR_EOSACC_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_EOSACC_Msk instead */
#define TWIHS_SR_MCACK_Pos                  16                                             /**< (TWIHS_SR) Master Code Acknowledge (cleared on read) Position */
#define TWIHS_SR_MCACK_Msk                  (_U_(0x1) << TWIHS_SR_MCACK_Pos)               /**< (TWIHS_SR) Master Code Acknowledge (cleared on read) Mask */
#define TWIHS_SR_MCACK                      TWIHS_SR_MCACK_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_MCACK_Msk instead */
#define TWIHS_SR_TOUT_Pos                   18                                             /**< (TWIHS_SR) Timeout Error (cleared on read) Position */
#define TWIHS_SR_TOUT_Msk                   (_U_(0x1) << TWIHS_SR_TOUT_Pos)                /**< (TWIHS_SR) Timeout Error (cleared on read) Mask */
#define TWIHS_SR_TOUT                       TWIHS_SR_TOUT_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_TOUT_Msk instead */
#define TWIHS_SR_PECERR_Pos                 19                                             /**< (TWIHS_SR) PEC Error (cleared on read) Position */
#define TWIHS_SR_PECERR_Msk                 (_U_(0x1) << TWIHS_SR_PECERR_Pos)              /**< (TWIHS_SR) PEC Error (cleared on read) Mask */
#define TWIHS_SR_PECERR                     TWIHS_SR_PECERR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_PECERR_Msk instead */
#define TWIHS_SR_SMBDAM_Pos                 20                                             /**< (TWIHS_SR) SMBus Default Address Match (cleared on read) Position */
#define TWIHS_SR_SMBDAM_Msk                 (_U_(0x1) << TWIHS_SR_SMBDAM_Pos)              /**< (TWIHS_SR) SMBus Default Address Match (cleared on read) Mask */
#define TWIHS_SR_SMBDAM                     TWIHS_SR_SMBDAM_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_SMBDAM_Msk instead */
#define TWIHS_SR_SMBHHM_Pos                 21                                             /**< (TWIHS_SR) SMBus Host Header Address Match (cleared on read) Position */
#define TWIHS_SR_SMBHHM_Msk                 (_U_(0x1) << TWIHS_SR_SMBHHM_Pos)              /**< (TWIHS_SR) SMBus Host Header Address Match (cleared on read) Mask */
#define TWIHS_SR_SMBHHM                     TWIHS_SR_SMBHHM_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_SMBHHM_Msk instead */
#define TWIHS_SR_LOCK_Pos                   23                                             /**< (TWIHS_SR) TWIHS Lock due to Frame Errors (cleared by writing a one to bit LOCKCLR in TWIHS_CR) Position */
#define TWIHS_SR_LOCK_Msk                   (_U_(0x1) << TWIHS_SR_LOCK_Pos)                /**< (TWIHS_SR) TWIHS Lock due to Frame Errors (cleared by writing a one to bit LOCKCLR in TWIHS_CR) Mask */
#define TWIHS_SR_LOCK                       TWIHS_SR_LOCK_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_LOCK_Msk instead */
#define TWIHS_SR_SCL_Pos                    24                                             /**< (TWIHS_SR) SCL Line Value Position */
#define TWIHS_SR_SCL_Msk                    (_U_(0x1) << TWIHS_SR_SCL_Pos)                 /**< (TWIHS_SR) SCL Line Value Mask */
#define TWIHS_SR_SCL                        TWIHS_SR_SCL_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_SCL_Msk instead */
#define TWIHS_SR_SDA_Pos                    25                                             /**< (TWIHS_SR) SDA Line Value Position */
#define TWIHS_SR_SDA_Msk                    (_U_(0x1) << TWIHS_SR_SDA_Pos)                 /**< (TWIHS_SR) SDA Line Value Mask */
#define TWIHS_SR_SDA                        TWIHS_SR_SDA_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_SDA_Msk instead */
#define TWIHS_SR_MASK                       _U_(0x3BD0FFF)                                 /**< \deprecated (TWIHS_SR) Register MASK  (Use TWIHS_SR_Msk instead)  */
#define TWIHS_SR_Msk                        _U_(0x3BD0FFF)                                 /**< (TWIHS_SR) Register Mask  */

/* FIFO_ENABLED mode */
#define TWIHS_SR_FIFO_ENABLED_TXCOMP_Pos    0                                              /**< (TWIHS_SR) Transmission Completed (cleared by writing TWIHS_THR) Position */
#define TWIHS_SR_FIFO_ENABLED_TXCOMP_Msk    (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_TXCOMP_Pos)  /**< (TWIHS_SR) Transmission Completed (cleared by writing TWIHS_THR) Mask */
#define TWIHS_SR_FIFO_ENABLED_TXCOMP        TWIHS_SR_FIFO_ENABLED_TXCOMP_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_FIFO_ENABLED_TXCOMP_Msk instead */
#define TWIHS_SR_FIFO_ENABLED_RXRDY_Pos     1                                              /**< (TWIHS_SR) Receive Holding Register Ready (cleared by reading TWIHS_RHR) Position */
#define TWIHS_SR_FIFO_ENABLED_RXRDY_Msk     (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_RXRDY_Pos)  /**< (TWIHS_SR) Receive Holding Register Ready (cleared by reading TWIHS_RHR) Mask */
#define TWIHS_SR_FIFO_ENABLED_RXRDY         TWIHS_SR_FIFO_ENABLED_RXRDY_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_FIFO_ENABLED_RXRDY_Msk instead */
#define TWIHS_SR_FIFO_ENABLED_TXRDY_Pos     2                                              /**< (TWIHS_SR) Transmit Holding Register Ready (cleared by writing TWIHS_THR) Position */
#define TWIHS_SR_FIFO_ENABLED_TXRDY_Msk     (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_TXRDY_Pos)  /**< (TWIHS_SR) Transmit Holding Register Ready (cleared by writing TWIHS_THR) Mask */
#define TWIHS_SR_FIFO_ENABLED_TXRDY         TWIHS_SR_FIFO_ENABLED_TXRDY_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_FIFO_ENABLED_TXRDY_Msk instead */
#define TWIHS_SR_FIFO_ENABLED_SVREAD_Pos    3                                              /**< (TWIHS_SR) Slave Read Position */
#define TWIHS_SR_FIFO_ENABLED_SVREAD_Msk    (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_SVREAD_Pos)  /**< (TWIHS_SR) Slave Read Mask */
#define TWIHS_SR_FIFO_ENABLED_SVREAD        TWIHS_SR_FIFO_ENABLED_SVREAD_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_FIFO_ENABLED_SVREAD_Msk instead */
#define TWIHS_SR_FIFO_ENABLED_SVACC_Pos     4                                              /**< (TWIHS_SR) Slave Access Position */
#define TWIHS_SR_FIFO_ENABLED_SVACC_Msk     (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_SVACC_Pos)  /**< (TWIHS_SR) Slave Access Mask */
#define TWIHS_SR_FIFO_ENABLED_SVACC         TWIHS_SR_FIFO_ENABLED_SVACC_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_FIFO_ENABLED_SVACC_Msk instead */
#define TWIHS_SR_FIFO_ENABLED_GACC_Pos      5                                              /**< (TWIHS_SR) General Call Access (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_GACC_Msk      (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_GACC_Pos)   /**< (TWIHS_SR) General Call Access (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_GACC          TWIHS_SR_FIFO_ENABLED_GACC_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_FIFO_ENABLED_GACC_Msk instead */
#define TWIHS_SR_FIFO_ENABLED_OVRE_Pos      6                                              /**< (TWIHS_SR) Overrun Error (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_OVRE_Msk      (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_OVRE_Pos)   /**< (TWIHS_SR) Overrun Error (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_OVRE          TWIHS_SR_FIFO_ENABLED_OVRE_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_FIFO_ENABLED_OVRE_Msk instead */
#define TWIHS_SR_FIFO_ENABLED_UNRE_Pos      7                                              /**< (TWIHS_SR) Underrun Error (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_UNRE_Msk      (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_UNRE_Pos)   /**< (TWIHS_SR) Underrun Error (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_UNRE          TWIHS_SR_FIFO_ENABLED_UNRE_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_FIFO_ENABLED_UNRE_Msk instead */
#define TWIHS_SR_FIFO_ENABLED_NACK_Pos      8                                              /**< (TWIHS_SR) Not Acknowledged (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_NACK_Msk      (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_NACK_Pos)   /**< (TWIHS_SR) Not Acknowledged (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_NACK          TWIHS_SR_FIFO_ENABLED_NACK_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_FIFO_ENABLED_NACK_Msk instead */
#define TWIHS_SR_FIFO_ENABLED_ARBLST_Pos    9                                              /**< (TWIHS_SR) Arbitration Lost (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_ARBLST_Msk    (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_ARBLST_Pos)  /**< (TWIHS_SR) Arbitration Lost (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_ARBLST        TWIHS_SR_FIFO_ENABLED_ARBLST_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_FIFO_ENABLED_ARBLST_Msk instead */
#define TWIHS_SR_FIFO_ENABLED_SCLWS_Pos     10                                             /**< (TWIHS_SR) Clock Wait State Position */
#define TWIHS_SR_FIFO_ENABLED_SCLWS_Msk     (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_SCLWS_Pos)  /**< (TWIHS_SR) Clock Wait State Mask */
#define TWIHS_SR_FIFO_ENABLED_SCLWS         TWIHS_SR_FIFO_ENABLED_SCLWS_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_FIFO_ENABLED_SCLWS_Msk instead */
#define TWIHS_SR_FIFO_ENABLED_EOSACC_Pos    11                                             /**< (TWIHS_SR) End Of Slave Access (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_EOSACC_Msk    (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_EOSACC_Pos)  /**< (TWIHS_SR) End Of Slave Access (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_EOSACC        TWIHS_SR_FIFO_ENABLED_EOSACC_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_FIFO_ENABLED_EOSACC_Msk instead */
#define TWIHS_SR_FIFO_ENABLED_MCACK_Pos     16                                             /**< (TWIHS_SR) Master Code Acknowledge (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_MCACK_Msk     (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_MCACK_Pos)  /**< (TWIHS_SR) Master Code Acknowledge (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_MCACK         TWIHS_SR_FIFO_ENABLED_MCACK_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_FIFO_ENABLED_MCACK_Msk instead */
#define TWIHS_SR_FIFO_ENABLED_TOUT_Pos      18                                             /**< (TWIHS_SR) Timeout Error (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_TOUT_Msk      (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_TOUT_Pos)   /**< (TWIHS_SR) Timeout Error (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_TOUT          TWIHS_SR_FIFO_ENABLED_TOUT_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_FIFO_ENABLED_TOUT_Msk instead */
#define TWIHS_SR_FIFO_ENABLED_PECERR_Pos    19                                             /**< (TWIHS_SR) PEC Error (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_PECERR_Msk    (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_PECERR_Pos)  /**< (TWIHS_SR) PEC Error (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_PECERR        TWIHS_SR_FIFO_ENABLED_PECERR_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_FIFO_ENABLED_PECERR_Msk instead */
#define TWIHS_SR_FIFO_ENABLED_SMBDAM_Pos    20                                             /**< (TWIHS_SR) SMBus Default Address Match (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_SMBDAM_Msk    (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_SMBDAM_Pos)  /**< (TWIHS_SR) SMBus Default Address Match (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_SMBDAM        TWIHS_SR_FIFO_ENABLED_SMBDAM_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_FIFO_ENABLED_SMBDAM_Msk instead */
#define TWIHS_SR_FIFO_ENABLED_SMBHHM_Pos    21                                             /**< (TWIHS_SR) SMBus Host Header Address Match (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_SMBHHM_Msk    (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_SMBHHM_Pos)  /**< (TWIHS_SR) SMBus Host Header Address Match (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_SMBHHM        TWIHS_SR_FIFO_ENABLED_SMBHHM_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_FIFO_ENABLED_SMBHHM_Msk instead */
#define TWIHS_SR_FIFO_ENABLED_TXFLOCK_Pos   23                                             /**< (TWIHS_SR) Transmit FIFO Lock Position */
#define TWIHS_SR_FIFO_ENABLED_TXFLOCK_Msk   (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_TXFLOCK_Pos)  /**< (TWIHS_SR) Transmit FIFO Lock Mask */
#define TWIHS_SR_FIFO_ENABLED_TXFLOCK       TWIHS_SR_FIFO_ENABLED_TXFLOCK_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_FIFO_ENABLED_TXFLOCK_Msk instead */
#define TWIHS_SR_FIFO_ENABLED_SCL_Pos       24                                             /**< (TWIHS_SR) SCL Line Value Position */
#define TWIHS_SR_FIFO_ENABLED_SCL_Msk       (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_SCL_Pos)    /**< (TWIHS_SR) SCL Line Value Mask */
#define TWIHS_SR_FIFO_ENABLED_SCL           TWIHS_SR_FIFO_ENABLED_SCL_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_FIFO_ENABLED_SCL_Msk instead */
#define TWIHS_SR_FIFO_ENABLED_SDA_Pos       25                                             /**< (TWIHS_SR) SDA Line Value Position */
#define TWIHS_SR_FIFO_ENABLED_SDA_Msk       (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_SDA_Pos)    /**< (TWIHS_SR) SDA Line Value Mask */
#define TWIHS_SR_FIFO_ENABLED_SDA           TWIHS_SR_FIFO_ENABLED_SDA_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_SR_FIFO_ENABLED_SDA_Msk instead */
#define TWIHS_SR_FIFO_ENABLED_MASK          _U_(0x3BD0FFF)                                 /**< \deprecated (TWIHS_SR_FIFO_ENABLED) Register MASK  (Use TWIHS_SR_FIFO_ENABLED_Msk instead)  */
#define TWIHS_SR_FIFO_ENABLED_Msk           _U_(0x3BD0FFF)                                 /**< (TWIHS_SR_FIFO_ENABLED) Register Mask  */


/* -------- TWIHS_IER : (TWIHS Offset: 0x24) (/W 32) Interrupt Enable Register -------- */
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
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t MCACK:1;                   /**< bit:     16  Master Code Acknowledge Interrupt Enable */
    uint32_t :1;                        /**< bit:     17  Reserved */
    uint32_t TOUT:1;                    /**< bit:     18  Timeout Error Interrupt Enable           */
    uint32_t PECERR:1;                  /**< bit:     19  PEC Error Interrupt Enable               */
    uint32_t SMBDAM:1;                  /**< bit:     20  SMBus Default Address Match Interrupt Enable */
    uint32_t SMBHHM:1;                  /**< bit:     21  SMBus Host Header Address Match Interrupt Enable */
    uint32_t :10;                       /**< bit: 22..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWIHS_IER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_IER_OFFSET                    (0x24)                                        /**<  (TWIHS_IER) Interrupt Enable Register  Offset */

#define TWIHS_IER_TXCOMP_Pos                0                                              /**< (TWIHS_IER) Transmission Completed Interrupt Enable Position */
#define TWIHS_IER_TXCOMP_Msk                (_U_(0x1) << TWIHS_IER_TXCOMP_Pos)             /**< (TWIHS_IER) Transmission Completed Interrupt Enable Mask */
#define TWIHS_IER_TXCOMP                    TWIHS_IER_TXCOMP_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IER_TXCOMP_Msk instead */
#define TWIHS_IER_RXRDY_Pos                 1                                              /**< (TWIHS_IER) Receive Holding Register Ready Interrupt Enable Position */
#define TWIHS_IER_RXRDY_Msk                 (_U_(0x1) << TWIHS_IER_RXRDY_Pos)              /**< (TWIHS_IER) Receive Holding Register Ready Interrupt Enable Mask */
#define TWIHS_IER_RXRDY                     TWIHS_IER_RXRDY_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IER_RXRDY_Msk instead */
#define TWIHS_IER_TXRDY_Pos                 2                                              /**< (TWIHS_IER) Transmit Holding Register Ready Interrupt Enable Position */
#define TWIHS_IER_TXRDY_Msk                 (_U_(0x1) << TWIHS_IER_TXRDY_Pos)              /**< (TWIHS_IER) Transmit Holding Register Ready Interrupt Enable Mask */
#define TWIHS_IER_TXRDY                     TWIHS_IER_TXRDY_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IER_TXRDY_Msk instead */
#define TWIHS_IER_SVACC_Pos                 4                                              /**< (TWIHS_IER) Slave Access Interrupt Enable Position */
#define TWIHS_IER_SVACC_Msk                 (_U_(0x1) << TWIHS_IER_SVACC_Pos)              /**< (TWIHS_IER) Slave Access Interrupt Enable Mask */
#define TWIHS_IER_SVACC                     TWIHS_IER_SVACC_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IER_SVACC_Msk instead */
#define TWIHS_IER_GACC_Pos                  5                                              /**< (TWIHS_IER) General Call Access Interrupt Enable Position */
#define TWIHS_IER_GACC_Msk                  (_U_(0x1) << TWIHS_IER_GACC_Pos)               /**< (TWIHS_IER) General Call Access Interrupt Enable Mask */
#define TWIHS_IER_GACC                      TWIHS_IER_GACC_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IER_GACC_Msk instead */
#define TWIHS_IER_OVRE_Pos                  6                                              /**< (TWIHS_IER) Overrun Error Interrupt Enable Position */
#define TWIHS_IER_OVRE_Msk                  (_U_(0x1) << TWIHS_IER_OVRE_Pos)               /**< (TWIHS_IER) Overrun Error Interrupt Enable Mask */
#define TWIHS_IER_OVRE                      TWIHS_IER_OVRE_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IER_OVRE_Msk instead */
#define TWIHS_IER_UNRE_Pos                  7                                              /**< (TWIHS_IER) Underrun Error Interrupt Enable Position */
#define TWIHS_IER_UNRE_Msk                  (_U_(0x1) << TWIHS_IER_UNRE_Pos)               /**< (TWIHS_IER) Underrun Error Interrupt Enable Mask */
#define TWIHS_IER_UNRE                      TWIHS_IER_UNRE_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IER_UNRE_Msk instead */
#define TWIHS_IER_NACK_Pos                  8                                              /**< (TWIHS_IER) Not Acknowledge Interrupt Enable Position */
#define TWIHS_IER_NACK_Msk                  (_U_(0x1) << TWIHS_IER_NACK_Pos)               /**< (TWIHS_IER) Not Acknowledge Interrupt Enable Mask */
#define TWIHS_IER_NACK                      TWIHS_IER_NACK_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IER_NACK_Msk instead */
#define TWIHS_IER_ARBLST_Pos                9                                              /**< (TWIHS_IER) Arbitration Lost Interrupt Enable Position */
#define TWIHS_IER_ARBLST_Msk                (_U_(0x1) << TWIHS_IER_ARBLST_Pos)             /**< (TWIHS_IER) Arbitration Lost Interrupt Enable Mask */
#define TWIHS_IER_ARBLST                    TWIHS_IER_ARBLST_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IER_ARBLST_Msk instead */
#define TWIHS_IER_SCL_WS_Pos                10                                             /**< (TWIHS_IER) Clock Wait State Interrupt Enable Position */
#define TWIHS_IER_SCL_WS_Msk                (_U_(0x1) << TWIHS_IER_SCL_WS_Pos)             /**< (TWIHS_IER) Clock Wait State Interrupt Enable Mask */
#define TWIHS_IER_SCL_WS                    TWIHS_IER_SCL_WS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IER_SCL_WS_Msk instead */
#define TWIHS_IER_EOSACC_Pos                11                                             /**< (TWIHS_IER) End Of Slave Access Interrupt Enable Position */
#define TWIHS_IER_EOSACC_Msk                (_U_(0x1) << TWIHS_IER_EOSACC_Pos)             /**< (TWIHS_IER) End Of Slave Access Interrupt Enable Mask */
#define TWIHS_IER_EOSACC                    TWIHS_IER_EOSACC_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IER_EOSACC_Msk instead */
#define TWIHS_IER_MCACK_Pos                 16                                             /**< (TWIHS_IER) Master Code Acknowledge Interrupt Enable Position */
#define TWIHS_IER_MCACK_Msk                 (_U_(0x1) << TWIHS_IER_MCACK_Pos)              /**< (TWIHS_IER) Master Code Acknowledge Interrupt Enable Mask */
#define TWIHS_IER_MCACK                     TWIHS_IER_MCACK_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IER_MCACK_Msk instead */
#define TWIHS_IER_TOUT_Pos                  18                                             /**< (TWIHS_IER) Timeout Error Interrupt Enable Position */
#define TWIHS_IER_TOUT_Msk                  (_U_(0x1) << TWIHS_IER_TOUT_Pos)               /**< (TWIHS_IER) Timeout Error Interrupt Enable Mask */
#define TWIHS_IER_TOUT                      TWIHS_IER_TOUT_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IER_TOUT_Msk instead */
#define TWIHS_IER_PECERR_Pos                19                                             /**< (TWIHS_IER) PEC Error Interrupt Enable Position */
#define TWIHS_IER_PECERR_Msk                (_U_(0x1) << TWIHS_IER_PECERR_Pos)             /**< (TWIHS_IER) PEC Error Interrupt Enable Mask */
#define TWIHS_IER_PECERR                    TWIHS_IER_PECERR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IER_PECERR_Msk instead */
#define TWIHS_IER_SMBDAM_Pos                20                                             /**< (TWIHS_IER) SMBus Default Address Match Interrupt Enable Position */
#define TWIHS_IER_SMBDAM_Msk                (_U_(0x1) << TWIHS_IER_SMBDAM_Pos)             /**< (TWIHS_IER) SMBus Default Address Match Interrupt Enable Mask */
#define TWIHS_IER_SMBDAM                    TWIHS_IER_SMBDAM_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IER_SMBDAM_Msk instead */
#define TWIHS_IER_SMBHHM_Pos                21                                             /**< (TWIHS_IER) SMBus Host Header Address Match Interrupt Enable Position */
#define TWIHS_IER_SMBHHM_Msk                (_U_(0x1) << TWIHS_IER_SMBHHM_Pos)             /**< (TWIHS_IER) SMBus Host Header Address Match Interrupt Enable Mask */
#define TWIHS_IER_SMBHHM                    TWIHS_IER_SMBHHM_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IER_SMBHHM_Msk instead */
#define TWIHS_IER_MASK                      _U_(0x3D0FF7)                                  /**< \deprecated (TWIHS_IER) Register MASK  (Use TWIHS_IER_Msk instead)  */
#define TWIHS_IER_Msk                       _U_(0x3D0FF7)                                  /**< (TWIHS_IER) Register Mask  */


/* -------- TWIHS_IDR : (TWIHS Offset: 0x28) (/W 32) Interrupt Disable Register -------- */
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
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t MCACK:1;                   /**< bit:     16  Master Code Acknowledge Interrupt Disable */
    uint32_t :1;                        /**< bit:     17  Reserved */
    uint32_t TOUT:1;                    /**< bit:     18  Timeout Error Interrupt Disable          */
    uint32_t PECERR:1;                  /**< bit:     19  PEC Error Interrupt Disable              */
    uint32_t SMBDAM:1;                  /**< bit:     20  SMBus Default Address Match Interrupt Disable */
    uint32_t SMBHHM:1;                  /**< bit:     21  SMBus Host Header Address Match Interrupt Disable */
    uint32_t :10;                       /**< bit: 22..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWIHS_IDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_IDR_OFFSET                    (0x28)                                        /**<  (TWIHS_IDR) Interrupt Disable Register  Offset */

#define TWIHS_IDR_TXCOMP_Pos                0                                              /**< (TWIHS_IDR) Transmission Completed Interrupt Disable Position */
#define TWIHS_IDR_TXCOMP_Msk                (_U_(0x1) << TWIHS_IDR_TXCOMP_Pos)             /**< (TWIHS_IDR) Transmission Completed Interrupt Disable Mask */
#define TWIHS_IDR_TXCOMP                    TWIHS_IDR_TXCOMP_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IDR_TXCOMP_Msk instead */
#define TWIHS_IDR_RXRDY_Pos                 1                                              /**< (TWIHS_IDR) Receive Holding Register Ready Interrupt Disable Position */
#define TWIHS_IDR_RXRDY_Msk                 (_U_(0x1) << TWIHS_IDR_RXRDY_Pos)              /**< (TWIHS_IDR) Receive Holding Register Ready Interrupt Disable Mask */
#define TWIHS_IDR_RXRDY                     TWIHS_IDR_RXRDY_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IDR_RXRDY_Msk instead */
#define TWIHS_IDR_TXRDY_Pos                 2                                              /**< (TWIHS_IDR) Transmit Holding Register Ready Interrupt Disable Position */
#define TWIHS_IDR_TXRDY_Msk                 (_U_(0x1) << TWIHS_IDR_TXRDY_Pos)              /**< (TWIHS_IDR) Transmit Holding Register Ready Interrupt Disable Mask */
#define TWIHS_IDR_TXRDY                     TWIHS_IDR_TXRDY_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IDR_TXRDY_Msk instead */
#define TWIHS_IDR_SVACC_Pos                 4                                              /**< (TWIHS_IDR) Slave Access Interrupt Disable Position */
#define TWIHS_IDR_SVACC_Msk                 (_U_(0x1) << TWIHS_IDR_SVACC_Pos)              /**< (TWIHS_IDR) Slave Access Interrupt Disable Mask */
#define TWIHS_IDR_SVACC                     TWIHS_IDR_SVACC_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IDR_SVACC_Msk instead */
#define TWIHS_IDR_GACC_Pos                  5                                              /**< (TWIHS_IDR) General Call Access Interrupt Disable Position */
#define TWIHS_IDR_GACC_Msk                  (_U_(0x1) << TWIHS_IDR_GACC_Pos)               /**< (TWIHS_IDR) General Call Access Interrupt Disable Mask */
#define TWIHS_IDR_GACC                      TWIHS_IDR_GACC_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IDR_GACC_Msk instead */
#define TWIHS_IDR_OVRE_Pos                  6                                              /**< (TWIHS_IDR) Overrun Error Interrupt Disable Position */
#define TWIHS_IDR_OVRE_Msk                  (_U_(0x1) << TWIHS_IDR_OVRE_Pos)               /**< (TWIHS_IDR) Overrun Error Interrupt Disable Mask */
#define TWIHS_IDR_OVRE                      TWIHS_IDR_OVRE_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IDR_OVRE_Msk instead */
#define TWIHS_IDR_UNRE_Pos                  7                                              /**< (TWIHS_IDR) Underrun Error Interrupt Disable Position */
#define TWIHS_IDR_UNRE_Msk                  (_U_(0x1) << TWIHS_IDR_UNRE_Pos)               /**< (TWIHS_IDR) Underrun Error Interrupt Disable Mask */
#define TWIHS_IDR_UNRE                      TWIHS_IDR_UNRE_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IDR_UNRE_Msk instead */
#define TWIHS_IDR_NACK_Pos                  8                                              /**< (TWIHS_IDR) Not Acknowledge Interrupt Disable Position */
#define TWIHS_IDR_NACK_Msk                  (_U_(0x1) << TWIHS_IDR_NACK_Pos)               /**< (TWIHS_IDR) Not Acknowledge Interrupt Disable Mask */
#define TWIHS_IDR_NACK                      TWIHS_IDR_NACK_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IDR_NACK_Msk instead */
#define TWIHS_IDR_ARBLST_Pos                9                                              /**< (TWIHS_IDR) Arbitration Lost Interrupt Disable Position */
#define TWIHS_IDR_ARBLST_Msk                (_U_(0x1) << TWIHS_IDR_ARBLST_Pos)             /**< (TWIHS_IDR) Arbitration Lost Interrupt Disable Mask */
#define TWIHS_IDR_ARBLST                    TWIHS_IDR_ARBLST_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IDR_ARBLST_Msk instead */
#define TWIHS_IDR_SCL_WS_Pos                10                                             /**< (TWIHS_IDR) Clock Wait State Interrupt Disable Position */
#define TWIHS_IDR_SCL_WS_Msk                (_U_(0x1) << TWIHS_IDR_SCL_WS_Pos)             /**< (TWIHS_IDR) Clock Wait State Interrupt Disable Mask */
#define TWIHS_IDR_SCL_WS                    TWIHS_IDR_SCL_WS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IDR_SCL_WS_Msk instead */
#define TWIHS_IDR_EOSACC_Pos                11                                             /**< (TWIHS_IDR) End Of Slave Access Interrupt Disable Position */
#define TWIHS_IDR_EOSACC_Msk                (_U_(0x1) << TWIHS_IDR_EOSACC_Pos)             /**< (TWIHS_IDR) End Of Slave Access Interrupt Disable Mask */
#define TWIHS_IDR_EOSACC                    TWIHS_IDR_EOSACC_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IDR_EOSACC_Msk instead */
#define TWIHS_IDR_MCACK_Pos                 16                                             /**< (TWIHS_IDR) Master Code Acknowledge Interrupt Disable Position */
#define TWIHS_IDR_MCACK_Msk                 (_U_(0x1) << TWIHS_IDR_MCACK_Pos)              /**< (TWIHS_IDR) Master Code Acknowledge Interrupt Disable Mask */
#define TWIHS_IDR_MCACK                     TWIHS_IDR_MCACK_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IDR_MCACK_Msk instead */
#define TWIHS_IDR_TOUT_Pos                  18                                             /**< (TWIHS_IDR) Timeout Error Interrupt Disable Position */
#define TWIHS_IDR_TOUT_Msk                  (_U_(0x1) << TWIHS_IDR_TOUT_Pos)               /**< (TWIHS_IDR) Timeout Error Interrupt Disable Mask */
#define TWIHS_IDR_TOUT                      TWIHS_IDR_TOUT_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IDR_TOUT_Msk instead */
#define TWIHS_IDR_PECERR_Pos                19                                             /**< (TWIHS_IDR) PEC Error Interrupt Disable Position */
#define TWIHS_IDR_PECERR_Msk                (_U_(0x1) << TWIHS_IDR_PECERR_Pos)             /**< (TWIHS_IDR) PEC Error Interrupt Disable Mask */
#define TWIHS_IDR_PECERR                    TWIHS_IDR_PECERR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IDR_PECERR_Msk instead */
#define TWIHS_IDR_SMBDAM_Pos                20                                             /**< (TWIHS_IDR) SMBus Default Address Match Interrupt Disable Position */
#define TWIHS_IDR_SMBDAM_Msk                (_U_(0x1) << TWIHS_IDR_SMBDAM_Pos)             /**< (TWIHS_IDR) SMBus Default Address Match Interrupt Disable Mask */
#define TWIHS_IDR_SMBDAM                    TWIHS_IDR_SMBDAM_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IDR_SMBDAM_Msk instead */
#define TWIHS_IDR_SMBHHM_Pos                21                                             /**< (TWIHS_IDR) SMBus Host Header Address Match Interrupt Disable Position */
#define TWIHS_IDR_SMBHHM_Msk                (_U_(0x1) << TWIHS_IDR_SMBHHM_Pos)             /**< (TWIHS_IDR) SMBus Host Header Address Match Interrupt Disable Mask */
#define TWIHS_IDR_SMBHHM                    TWIHS_IDR_SMBHHM_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IDR_SMBHHM_Msk instead */
#define TWIHS_IDR_MASK                      _U_(0x3D0FF7)                                  /**< \deprecated (TWIHS_IDR) Register MASK  (Use TWIHS_IDR_Msk instead)  */
#define TWIHS_IDR_Msk                       _U_(0x3D0FF7)                                  /**< (TWIHS_IDR) Register Mask  */


/* -------- TWIHS_IMR : (TWIHS Offset: 0x2c) (R/ 32) Interrupt Mask Register -------- */
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
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t MCACK:1;                   /**< bit:     16  Master Code Acknowledge Interrupt Mask   */
    uint32_t :1;                        /**< bit:     17  Reserved */
    uint32_t TOUT:1;                    /**< bit:     18  Timeout Error Interrupt Mask             */
    uint32_t PECERR:1;                  /**< bit:     19  PEC Error Interrupt Mask                 */
    uint32_t SMBDAM:1;                  /**< bit:     20  SMBus Default Address Match Interrupt Mask */
    uint32_t SMBHHM:1;                  /**< bit:     21  SMBus Host Header Address Match Interrupt Mask */
    uint32_t :10;                       /**< bit: 22..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWIHS_IMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_IMR_OFFSET                    (0x2C)                                        /**<  (TWIHS_IMR) Interrupt Mask Register  Offset */

#define TWIHS_IMR_TXCOMP_Pos                0                                              /**< (TWIHS_IMR) Transmission Completed Interrupt Mask Position */
#define TWIHS_IMR_TXCOMP_Msk                (_U_(0x1) << TWIHS_IMR_TXCOMP_Pos)             /**< (TWIHS_IMR) Transmission Completed Interrupt Mask Mask */
#define TWIHS_IMR_TXCOMP                    TWIHS_IMR_TXCOMP_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IMR_TXCOMP_Msk instead */
#define TWIHS_IMR_RXRDY_Pos                 1                                              /**< (TWIHS_IMR) Receive Holding Register Ready Interrupt Mask Position */
#define TWIHS_IMR_RXRDY_Msk                 (_U_(0x1) << TWIHS_IMR_RXRDY_Pos)              /**< (TWIHS_IMR) Receive Holding Register Ready Interrupt Mask Mask */
#define TWIHS_IMR_RXRDY                     TWIHS_IMR_RXRDY_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IMR_RXRDY_Msk instead */
#define TWIHS_IMR_TXRDY_Pos                 2                                              /**< (TWIHS_IMR) Transmit Holding Register Ready Interrupt Mask Position */
#define TWIHS_IMR_TXRDY_Msk                 (_U_(0x1) << TWIHS_IMR_TXRDY_Pos)              /**< (TWIHS_IMR) Transmit Holding Register Ready Interrupt Mask Mask */
#define TWIHS_IMR_TXRDY                     TWIHS_IMR_TXRDY_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IMR_TXRDY_Msk instead */
#define TWIHS_IMR_SVACC_Pos                 4                                              /**< (TWIHS_IMR) Slave Access Interrupt Mask Position */
#define TWIHS_IMR_SVACC_Msk                 (_U_(0x1) << TWIHS_IMR_SVACC_Pos)              /**< (TWIHS_IMR) Slave Access Interrupt Mask Mask */
#define TWIHS_IMR_SVACC                     TWIHS_IMR_SVACC_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IMR_SVACC_Msk instead */
#define TWIHS_IMR_GACC_Pos                  5                                              /**< (TWIHS_IMR) General Call Access Interrupt Mask Position */
#define TWIHS_IMR_GACC_Msk                  (_U_(0x1) << TWIHS_IMR_GACC_Pos)               /**< (TWIHS_IMR) General Call Access Interrupt Mask Mask */
#define TWIHS_IMR_GACC                      TWIHS_IMR_GACC_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IMR_GACC_Msk instead */
#define TWIHS_IMR_OVRE_Pos                  6                                              /**< (TWIHS_IMR) Overrun Error Interrupt Mask Position */
#define TWIHS_IMR_OVRE_Msk                  (_U_(0x1) << TWIHS_IMR_OVRE_Pos)               /**< (TWIHS_IMR) Overrun Error Interrupt Mask Mask */
#define TWIHS_IMR_OVRE                      TWIHS_IMR_OVRE_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IMR_OVRE_Msk instead */
#define TWIHS_IMR_UNRE_Pos                  7                                              /**< (TWIHS_IMR) Underrun Error Interrupt Mask Position */
#define TWIHS_IMR_UNRE_Msk                  (_U_(0x1) << TWIHS_IMR_UNRE_Pos)               /**< (TWIHS_IMR) Underrun Error Interrupt Mask Mask */
#define TWIHS_IMR_UNRE                      TWIHS_IMR_UNRE_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IMR_UNRE_Msk instead */
#define TWIHS_IMR_NACK_Pos                  8                                              /**< (TWIHS_IMR) Not Acknowledge Interrupt Mask Position */
#define TWIHS_IMR_NACK_Msk                  (_U_(0x1) << TWIHS_IMR_NACK_Pos)               /**< (TWIHS_IMR) Not Acknowledge Interrupt Mask Mask */
#define TWIHS_IMR_NACK                      TWIHS_IMR_NACK_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IMR_NACK_Msk instead */
#define TWIHS_IMR_ARBLST_Pos                9                                              /**< (TWIHS_IMR) Arbitration Lost Interrupt Mask Position */
#define TWIHS_IMR_ARBLST_Msk                (_U_(0x1) << TWIHS_IMR_ARBLST_Pos)             /**< (TWIHS_IMR) Arbitration Lost Interrupt Mask Mask */
#define TWIHS_IMR_ARBLST                    TWIHS_IMR_ARBLST_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IMR_ARBLST_Msk instead */
#define TWIHS_IMR_SCL_WS_Pos                10                                             /**< (TWIHS_IMR) Clock Wait State Interrupt Mask Position */
#define TWIHS_IMR_SCL_WS_Msk                (_U_(0x1) << TWIHS_IMR_SCL_WS_Pos)             /**< (TWIHS_IMR) Clock Wait State Interrupt Mask Mask */
#define TWIHS_IMR_SCL_WS                    TWIHS_IMR_SCL_WS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IMR_SCL_WS_Msk instead */
#define TWIHS_IMR_EOSACC_Pos                11                                             /**< (TWIHS_IMR) End Of Slave Access Interrupt Mask Position */
#define TWIHS_IMR_EOSACC_Msk                (_U_(0x1) << TWIHS_IMR_EOSACC_Pos)             /**< (TWIHS_IMR) End Of Slave Access Interrupt Mask Mask */
#define TWIHS_IMR_EOSACC                    TWIHS_IMR_EOSACC_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IMR_EOSACC_Msk instead */
#define TWIHS_IMR_MCACK_Pos                 16                                             /**< (TWIHS_IMR) Master Code Acknowledge Interrupt Mask Position */
#define TWIHS_IMR_MCACK_Msk                 (_U_(0x1) << TWIHS_IMR_MCACK_Pos)              /**< (TWIHS_IMR) Master Code Acknowledge Interrupt Mask Mask */
#define TWIHS_IMR_MCACK                     TWIHS_IMR_MCACK_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IMR_MCACK_Msk instead */
#define TWIHS_IMR_TOUT_Pos                  18                                             /**< (TWIHS_IMR) Timeout Error Interrupt Mask Position */
#define TWIHS_IMR_TOUT_Msk                  (_U_(0x1) << TWIHS_IMR_TOUT_Pos)               /**< (TWIHS_IMR) Timeout Error Interrupt Mask Mask */
#define TWIHS_IMR_TOUT                      TWIHS_IMR_TOUT_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IMR_TOUT_Msk instead */
#define TWIHS_IMR_PECERR_Pos                19                                             /**< (TWIHS_IMR) PEC Error Interrupt Mask Position */
#define TWIHS_IMR_PECERR_Msk                (_U_(0x1) << TWIHS_IMR_PECERR_Pos)             /**< (TWIHS_IMR) PEC Error Interrupt Mask Mask */
#define TWIHS_IMR_PECERR                    TWIHS_IMR_PECERR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IMR_PECERR_Msk instead */
#define TWIHS_IMR_SMBDAM_Pos                20                                             /**< (TWIHS_IMR) SMBus Default Address Match Interrupt Mask Position */
#define TWIHS_IMR_SMBDAM_Msk                (_U_(0x1) << TWIHS_IMR_SMBDAM_Pos)             /**< (TWIHS_IMR) SMBus Default Address Match Interrupt Mask Mask */
#define TWIHS_IMR_SMBDAM                    TWIHS_IMR_SMBDAM_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IMR_SMBDAM_Msk instead */
#define TWIHS_IMR_SMBHHM_Pos                21                                             /**< (TWIHS_IMR) SMBus Host Header Address Match Interrupt Mask Position */
#define TWIHS_IMR_SMBHHM_Msk                (_U_(0x1) << TWIHS_IMR_SMBHHM_Pos)             /**< (TWIHS_IMR) SMBus Host Header Address Match Interrupt Mask Mask */
#define TWIHS_IMR_SMBHHM                    TWIHS_IMR_SMBHHM_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_IMR_SMBHHM_Msk instead */
#define TWIHS_IMR_MASK                      _U_(0x3D0FF7)                                  /**< \deprecated (TWIHS_IMR) Register MASK  (Use TWIHS_IMR_Msk instead)  */
#define TWIHS_IMR_Msk                       _U_(0x3D0FF7)                                  /**< (TWIHS_IMR) Register Mask  */


/* -------- TWIHS_RHR : (TWIHS Offset: 0x30) (R/ 32) Receive Holding Register -------- */
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
} TWIHS_RHR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_RHR_OFFSET                    (0x30)                                        /**<  (TWIHS_RHR) Receive Holding Register  Offset */

#define TWIHS_RHR_RXDATA_Pos                0                                              /**< (TWIHS_RHR) Master or Slave Receive Holding Data Position */
#define TWIHS_RHR_RXDATA_Msk                (_U_(0xFF) << TWIHS_RHR_RXDATA_Pos)            /**< (TWIHS_RHR) Master or Slave Receive Holding Data Mask */
#define TWIHS_RHR_RXDATA(value)             (TWIHS_RHR_RXDATA_Msk & ((value) << TWIHS_RHR_RXDATA_Pos))
#define TWIHS_RHR_MASK                      _U_(0xFF)                                      /**< \deprecated (TWIHS_RHR) Register MASK  (Use TWIHS_RHR_Msk instead)  */
#define TWIHS_RHR_Msk                       _U_(0xFF)                                      /**< (TWIHS_RHR) Register Mask  */

/* FIFO_ENABLED mode */
#define TWIHS_RHR_FIFO_ENABLED_RXDATA0_Pos  0                                              /**< (TWIHS_RHR) Master or Slave Receive Holding Data 0 Position */
#define TWIHS_RHR_FIFO_ENABLED_RXDATA0_Msk  (_U_(0xFF) << TWIHS_RHR_FIFO_ENABLED_RXDATA0_Pos)  /**< (TWIHS_RHR) Master or Slave Receive Holding Data 0 Mask */
#define TWIHS_RHR_FIFO_ENABLED_RXDATA0(value) (TWIHS_RHR_FIFO_ENABLED_RXDATA0_Msk & ((value) << TWIHS_RHR_FIFO_ENABLED_RXDATA0_Pos))
#define TWIHS_RHR_FIFO_ENABLED_RXDATA1_Pos  8                                              /**< (TWIHS_RHR) Master or Slave Receive Holding Data 1 Position */
#define TWIHS_RHR_FIFO_ENABLED_RXDATA1_Msk  (_U_(0xFF) << TWIHS_RHR_FIFO_ENABLED_RXDATA1_Pos)  /**< (TWIHS_RHR) Master or Slave Receive Holding Data 1 Mask */
#define TWIHS_RHR_FIFO_ENABLED_RXDATA1(value) (TWIHS_RHR_FIFO_ENABLED_RXDATA1_Msk & ((value) << TWIHS_RHR_FIFO_ENABLED_RXDATA1_Pos))
#define TWIHS_RHR_FIFO_ENABLED_RXDATA2_Pos  16                                             /**< (TWIHS_RHR) Master or Slave Receive Holding Data 2 Position */
#define TWIHS_RHR_FIFO_ENABLED_RXDATA2_Msk  (_U_(0xFF) << TWIHS_RHR_FIFO_ENABLED_RXDATA2_Pos)  /**< (TWIHS_RHR) Master or Slave Receive Holding Data 2 Mask */
#define TWIHS_RHR_FIFO_ENABLED_RXDATA2(value) (TWIHS_RHR_FIFO_ENABLED_RXDATA2_Msk & ((value) << TWIHS_RHR_FIFO_ENABLED_RXDATA2_Pos))
#define TWIHS_RHR_FIFO_ENABLED_RXDATA3_Pos  24                                             /**< (TWIHS_RHR) Master or Slave Receive Holding Data 3 Position */
#define TWIHS_RHR_FIFO_ENABLED_RXDATA3_Msk  (_U_(0xFF) << TWIHS_RHR_FIFO_ENABLED_RXDATA3_Pos)  /**< (TWIHS_RHR) Master or Slave Receive Holding Data 3 Mask */
#define TWIHS_RHR_FIFO_ENABLED_RXDATA3(value) (TWIHS_RHR_FIFO_ENABLED_RXDATA3_Msk & ((value) << TWIHS_RHR_FIFO_ENABLED_RXDATA3_Pos))
#define TWIHS_RHR_FIFO_ENABLED_MASK         _U_(0xFFFFFFFF)                                /**< \deprecated (TWIHS_RHR_FIFO_ENABLED) Register MASK  (Use TWIHS_RHR_FIFO_ENABLED_Msk instead)  */
#define TWIHS_RHR_FIFO_ENABLED_Msk          _U_(0xFFFFFFFF)                                /**< (TWIHS_RHR_FIFO_ENABLED) Register Mask  */


/* -------- TWIHS_THR : (TWIHS Offset: 0x34) (/W 32) Transmit Holding Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXDATA:8;                  /**< bit:   0..7  Master or Slave Transmit Holding Data    */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct { // FIFO_ENABLED mode
    uint32_t TXDATA0:8;                 /**< bit:   0..7  Master or Slave Transmit Holding Data 02 */
    uint32_t TXDATA1:8;                 /**< bit:  8..15  Master or Slave Transmit Holding Data 1  */
    uint32_t TXDATA2:8;                 /**< bit: 16..23  Master or Slave Transmit Holding Data 2  */
    uint32_t TXDATA3:8;                 /**< bit: 24..31  Master or Slave Transmit Holding Data 3  */
  } FIFO_ENABLED;                                /**< Structure used for FIFO_ENABLED mode access */
  uint32_t reg;                         /**< Type used for register access */
} TWIHS_THR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_THR_OFFSET                    (0x34)                                        /**<  (TWIHS_THR) Transmit Holding Register  Offset */

#define TWIHS_THR_TXDATA_Pos                0                                              /**< (TWIHS_THR) Master or Slave Transmit Holding Data Position */
#define TWIHS_THR_TXDATA_Msk                (_U_(0xFF) << TWIHS_THR_TXDATA_Pos)            /**< (TWIHS_THR) Master or Slave Transmit Holding Data Mask */
#define TWIHS_THR_TXDATA(value)             (TWIHS_THR_TXDATA_Msk & ((value) << TWIHS_THR_TXDATA_Pos))
#define TWIHS_THR_MASK                      _U_(0xFF)                                      /**< \deprecated (TWIHS_THR) Register MASK  (Use TWIHS_THR_Msk instead)  */
#define TWIHS_THR_Msk                       _U_(0xFF)                                      /**< (TWIHS_THR) Register Mask  */

/* FIFO_ENABLED mode */
#define TWIHS_THR_FIFO_ENABLED_TXDATA0_Pos  0                                              /**< (TWIHS_THR) Master or Slave Transmit Holding Data 02 Position */
#define TWIHS_THR_FIFO_ENABLED_TXDATA0_Msk  (_U_(0xFF) << TWIHS_THR_FIFO_ENABLED_TXDATA0_Pos)  /**< (TWIHS_THR) Master or Slave Transmit Holding Data 02 Mask */
#define TWIHS_THR_FIFO_ENABLED_TXDATA0(value) (TWIHS_THR_FIFO_ENABLED_TXDATA0_Msk & ((value) << TWIHS_THR_FIFO_ENABLED_TXDATA0_Pos))
#define TWIHS_THR_FIFO_ENABLED_TXDATA1_Pos  8                                              /**< (TWIHS_THR) Master or Slave Transmit Holding Data 1 Position */
#define TWIHS_THR_FIFO_ENABLED_TXDATA1_Msk  (_U_(0xFF) << TWIHS_THR_FIFO_ENABLED_TXDATA1_Pos)  /**< (TWIHS_THR) Master or Slave Transmit Holding Data 1 Mask */
#define TWIHS_THR_FIFO_ENABLED_TXDATA1(value) (TWIHS_THR_FIFO_ENABLED_TXDATA1_Msk & ((value) << TWIHS_THR_FIFO_ENABLED_TXDATA1_Pos))
#define TWIHS_THR_FIFO_ENABLED_TXDATA2_Pos  16                                             /**< (TWIHS_THR) Master or Slave Transmit Holding Data 2 Position */
#define TWIHS_THR_FIFO_ENABLED_TXDATA2_Msk  (_U_(0xFF) << TWIHS_THR_FIFO_ENABLED_TXDATA2_Pos)  /**< (TWIHS_THR) Master or Slave Transmit Holding Data 2 Mask */
#define TWIHS_THR_FIFO_ENABLED_TXDATA2(value) (TWIHS_THR_FIFO_ENABLED_TXDATA2_Msk & ((value) << TWIHS_THR_FIFO_ENABLED_TXDATA2_Pos))
#define TWIHS_THR_FIFO_ENABLED_TXDATA3_Pos  24                                             /**< (TWIHS_THR) Master or Slave Transmit Holding Data 3 Position */
#define TWIHS_THR_FIFO_ENABLED_TXDATA3_Msk  (_U_(0xFF) << TWIHS_THR_FIFO_ENABLED_TXDATA3_Pos)  /**< (TWIHS_THR) Master or Slave Transmit Holding Data 3 Mask */
#define TWIHS_THR_FIFO_ENABLED_TXDATA3(value) (TWIHS_THR_FIFO_ENABLED_TXDATA3_Msk & ((value) << TWIHS_THR_FIFO_ENABLED_TXDATA3_Pos))
#define TWIHS_THR_FIFO_ENABLED_MASK         _U_(0xFFFFFFFF)                                /**< \deprecated (TWIHS_THR_FIFO_ENABLED) Register MASK  (Use TWIHS_THR_FIFO_ENABLED_Msk instead)  */
#define TWIHS_THR_FIFO_ENABLED_Msk          _U_(0xFFFFFFFF)                                /**< (TWIHS_THR_FIFO_ENABLED) Register Mask  */


/* -------- TWIHS_SMBTR : (TWIHS Offset: 0x38) (R/W 32) SMBus Timing Register -------- */
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
} TWIHS_SMBTR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_SMBTR_OFFSET                  (0x38)                                        /**<  (TWIHS_SMBTR) SMBus Timing Register  Offset */

#define TWIHS_SMBTR_PRESC_Pos               0                                              /**< (TWIHS_SMBTR) SMBus Clock Prescaler Position */
#define TWIHS_SMBTR_PRESC_Msk               (_U_(0xF) << TWIHS_SMBTR_PRESC_Pos)            /**< (TWIHS_SMBTR) SMBus Clock Prescaler Mask */
#define TWIHS_SMBTR_PRESC(value)            (TWIHS_SMBTR_PRESC_Msk & ((value) << TWIHS_SMBTR_PRESC_Pos))
#define TWIHS_SMBTR_TLOWS_Pos               8                                              /**< (TWIHS_SMBTR) Slave Clock Stretch Maximum Cycles Position */
#define TWIHS_SMBTR_TLOWS_Msk               (_U_(0xFF) << TWIHS_SMBTR_TLOWS_Pos)           /**< (TWIHS_SMBTR) Slave Clock Stretch Maximum Cycles Mask */
#define TWIHS_SMBTR_TLOWS(value)            (TWIHS_SMBTR_TLOWS_Msk & ((value) << TWIHS_SMBTR_TLOWS_Pos))
#define TWIHS_SMBTR_TLOWM_Pos               16                                             /**< (TWIHS_SMBTR) Master Clock Stretch Maximum Cycles Position */
#define TWIHS_SMBTR_TLOWM_Msk               (_U_(0xFF) << TWIHS_SMBTR_TLOWM_Pos)           /**< (TWIHS_SMBTR) Master Clock Stretch Maximum Cycles Mask */
#define TWIHS_SMBTR_TLOWM(value)            (TWIHS_SMBTR_TLOWM_Msk & ((value) << TWIHS_SMBTR_TLOWM_Pos))
#define TWIHS_SMBTR_THMAX_Pos               24                                             /**< (TWIHS_SMBTR) Clock High Maximum Cycles Position */
#define TWIHS_SMBTR_THMAX_Msk               (_U_(0xFF) << TWIHS_SMBTR_THMAX_Pos)           /**< (TWIHS_SMBTR) Clock High Maximum Cycles Mask */
#define TWIHS_SMBTR_THMAX(value)            (TWIHS_SMBTR_THMAX_Msk & ((value) << TWIHS_SMBTR_THMAX_Pos))
#define TWIHS_SMBTR_MASK                    _U_(0xFFFFFF0F)                                /**< \deprecated (TWIHS_SMBTR) Register MASK  (Use TWIHS_SMBTR_Msk instead)  */
#define TWIHS_SMBTR_Msk                     _U_(0xFFFFFF0F)                                /**< (TWIHS_SMBTR) Register Mask  */


/* -------- TWIHS_ACR : (TWIHS Offset: 0x40) (R/W 32) Alternative Command Register -------- */
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
} TWIHS_ACR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_ACR_OFFSET                    (0x40)                                        /**<  (TWIHS_ACR) Alternative Command Register  Offset */

#define TWIHS_ACR_DATAL_Pos                 0                                              /**< (TWIHS_ACR) Data Length Position */
#define TWIHS_ACR_DATAL_Msk                 (_U_(0xFF) << TWIHS_ACR_DATAL_Pos)             /**< (TWIHS_ACR) Data Length Mask */
#define TWIHS_ACR_DATAL(value)              (TWIHS_ACR_DATAL_Msk & ((value) << TWIHS_ACR_DATAL_Pos))
#define TWIHS_ACR_DIR_Pos                   8                                              /**< (TWIHS_ACR) Transfer Direction Position */
#define TWIHS_ACR_DIR_Msk                   (_U_(0x1) << TWIHS_ACR_DIR_Pos)                /**< (TWIHS_ACR) Transfer Direction Mask */
#define TWIHS_ACR_DIR                       TWIHS_ACR_DIR_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_ACR_DIR_Msk instead */
#define TWIHS_ACR_PEC_Pos                   9                                              /**< (TWIHS_ACR) PEC Request (SMBus Mode only) Position */
#define TWIHS_ACR_PEC_Msk                   (_U_(0x1) << TWIHS_ACR_PEC_Pos)                /**< (TWIHS_ACR) PEC Request (SMBus Mode only) Mask */
#define TWIHS_ACR_PEC                       TWIHS_ACR_PEC_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_ACR_PEC_Msk instead */
#define TWIHS_ACR_NDATAL_Pos                16                                             /**< (TWIHS_ACR) Next Data Length Position */
#define TWIHS_ACR_NDATAL_Msk                (_U_(0xFF) << TWIHS_ACR_NDATAL_Pos)            /**< (TWIHS_ACR) Next Data Length Mask */
#define TWIHS_ACR_NDATAL(value)             (TWIHS_ACR_NDATAL_Msk & ((value) << TWIHS_ACR_NDATAL_Pos))
#define TWIHS_ACR_NDIR_Pos                  24                                             /**< (TWIHS_ACR) Next Transfer Direction Position */
#define TWIHS_ACR_NDIR_Msk                  (_U_(0x1) << TWIHS_ACR_NDIR_Pos)               /**< (TWIHS_ACR) Next Transfer Direction Mask */
#define TWIHS_ACR_NDIR                      TWIHS_ACR_NDIR_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_ACR_NDIR_Msk instead */
#define TWIHS_ACR_NPEC_Pos                  25                                             /**< (TWIHS_ACR) Next PEC Request (SMBus Mode only) Position */
#define TWIHS_ACR_NPEC_Msk                  (_U_(0x1) << TWIHS_ACR_NPEC_Pos)               /**< (TWIHS_ACR) Next PEC Request (SMBus Mode only) Mask */
#define TWIHS_ACR_NPEC                      TWIHS_ACR_NPEC_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_ACR_NPEC_Msk instead */
#define TWIHS_ACR_MASK                      _U_(0x3FF03FF)                                 /**< \deprecated (TWIHS_ACR) Register MASK  (Use TWIHS_ACR_Msk instead)  */
#define TWIHS_ACR_Msk                       _U_(0x3FF03FF)                                 /**< (TWIHS_ACR) Register Mask  */


/* -------- TWIHS_FILTR : (TWIHS Offset: 0x44) (R/W 32) Filter Register -------- */
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
} TWIHS_FILTR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_FILTR_OFFSET                  (0x44)                                        /**<  (TWIHS_FILTR) Filter Register  Offset */

#define TWIHS_FILTR_FILT_Pos                0                                              /**< (TWIHS_FILTR) RX Digital Filter Position */
#define TWIHS_FILTR_FILT_Msk                (_U_(0x1) << TWIHS_FILTR_FILT_Pos)             /**< (TWIHS_FILTR) RX Digital Filter Mask */
#define TWIHS_FILTR_FILT                    TWIHS_FILTR_FILT_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FILTR_FILT_Msk instead */
#define TWIHS_FILTR_PADFEN_Pos              1                                              /**< (TWIHS_FILTR) PAD Filter Enable Position */
#define TWIHS_FILTR_PADFEN_Msk              (_U_(0x1) << TWIHS_FILTR_PADFEN_Pos)           /**< (TWIHS_FILTR) PAD Filter Enable Mask */
#define TWIHS_FILTR_PADFEN                  TWIHS_FILTR_PADFEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FILTR_PADFEN_Msk instead */
#define TWIHS_FILTR_PADFCFG_Pos             2                                              /**< (TWIHS_FILTR) PAD Filter Config Position */
#define TWIHS_FILTR_PADFCFG_Msk             (_U_(0x1) << TWIHS_FILTR_PADFCFG_Pos)          /**< (TWIHS_FILTR) PAD Filter Config Mask */
#define TWIHS_FILTR_PADFCFG                 TWIHS_FILTR_PADFCFG_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FILTR_PADFCFG_Msk instead */
#define TWIHS_FILTR_THRES_Pos               8                                              /**< (TWIHS_FILTR) Digital Filter Threshold Position */
#define TWIHS_FILTR_THRES_Msk               (_U_(0x7) << TWIHS_FILTR_THRES_Pos)            /**< (TWIHS_FILTR) Digital Filter Threshold Mask */
#define TWIHS_FILTR_THRES(value)            (TWIHS_FILTR_THRES_Msk & ((value) << TWIHS_FILTR_THRES_Pos))
#define TWIHS_FILTR_MASK                    _U_(0x707)                                     /**< \deprecated (TWIHS_FILTR) Register MASK  (Use TWIHS_FILTR_Msk instead)  */
#define TWIHS_FILTR_Msk                     _U_(0x707)                                     /**< (TWIHS_FILTR) Register Mask  */


/* -------- TWIHS_SWMR : (TWIHS Offset: 0x4c) (R/W 32) SleepWalking Matching Register -------- */
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
} TWIHS_SWMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_SWMR_OFFSET                   (0x4C)                                        /**<  (TWIHS_SWMR) SleepWalking Matching Register  Offset */

#define TWIHS_SWMR_SADR1_Pos                0                                              /**< (TWIHS_SWMR) Slave Address 1 Position */
#define TWIHS_SWMR_SADR1_Msk                (_U_(0x7F) << TWIHS_SWMR_SADR1_Pos)            /**< (TWIHS_SWMR) Slave Address 1 Mask */
#define TWIHS_SWMR_SADR1(value)             (TWIHS_SWMR_SADR1_Msk & ((value) << TWIHS_SWMR_SADR1_Pos))
#define TWIHS_SWMR_SADR2_Pos                8                                              /**< (TWIHS_SWMR) Slave Address 2 Position */
#define TWIHS_SWMR_SADR2_Msk                (_U_(0x7F) << TWIHS_SWMR_SADR2_Pos)            /**< (TWIHS_SWMR) Slave Address 2 Mask */
#define TWIHS_SWMR_SADR2(value)             (TWIHS_SWMR_SADR2_Msk & ((value) << TWIHS_SWMR_SADR2_Pos))
#define TWIHS_SWMR_SADR3_Pos                16                                             /**< (TWIHS_SWMR) Slave Address 3 Position */
#define TWIHS_SWMR_SADR3_Msk                (_U_(0x7F) << TWIHS_SWMR_SADR3_Pos)            /**< (TWIHS_SWMR) Slave Address 3 Mask */
#define TWIHS_SWMR_SADR3(value)             (TWIHS_SWMR_SADR3_Msk & ((value) << TWIHS_SWMR_SADR3_Pos))
#define TWIHS_SWMR_DATAM_Pos                24                                             /**< (TWIHS_SWMR) Data Match Position */
#define TWIHS_SWMR_DATAM_Msk                (_U_(0xFF) << TWIHS_SWMR_DATAM_Pos)            /**< (TWIHS_SWMR) Data Match Mask */
#define TWIHS_SWMR_DATAM(value)             (TWIHS_SWMR_DATAM_Msk & ((value) << TWIHS_SWMR_DATAM_Pos))
#define TWIHS_SWMR_MASK                     _U_(0xFF7F7F7F)                                /**< \deprecated (TWIHS_SWMR) Register MASK  (Use TWIHS_SWMR_Msk instead)  */
#define TWIHS_SWMR_Msk                      _U_(0xFF7F7F7F)                                /**< (TWIHS_SWMR) Register Mask  */


/* -------- TWIHS_FMR : (TWIHS Offset: 0x50) (R/W 32) FIFO Mode Register -------- */
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
} TWIHS_FMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_FMR_OFFSET                    (0x50)                                        /**<  (TWIHS_FMR) FIFO Mode Register  Offset */

#define TWIHS_FMR_TXRDYM_Pos                0                                              /**< (TWIHS_FMR) Transmitter Ready Mode Position */
#define TWIHS_FMR_TXRDYM_Msk                (_U_(0x3) << TWIHS_FMR_TXRDYM_Pos)             /**< (TWIHS_FMR) Transmitter Ready Mode Mask */
#define TWIHS_FMR_TXRDYM(value)             (TWIHS_FMR_TXRDYM_Msk & ((value) << TWIHS_FMR_TXRDYM_Pos))
#define   TWIHS_FMR_TXRDYM_ONE_DATA_Val     _U_(0x0)                                       /**< (TWIHS_FMR) TXRDY will be at level '1' when at least one data can be written in the Transmit FIFO  */
#define   TWIHS_FMR_TXRDYM_TWO_DATA_Val     _U_(0x1)                                       /**< (TWIHS_FMR) TXRDY will be at level '1' when at least two data can be written in the Transmit FIFO  */
#define   TWIHS_FMR_TXRDYM_FOUR_DATA_Val    _U_(0x2)                                       /**< (TWIHS_FMR) TXRDY will be at level '1' when at least four data can be written in the Transmit FIFO  */
#define TWIHS_FMR_TXRDYM_ONE_DATA           (TWIHS_FMR_TXRDYM_ONE_DATA_Val << TWIHS_FMR_TXRDYM_Pos)  /**< (TWIHS_FMR) TXRDY will be at level '1' when at least one data can be written in the Transmit FIFO Position  */
#define TWIHS_FMR_TXRDYM_TWO_DATA           (TWIHS_FMR_TXRDYM_TWO_DATA_Val << TWIHS_FMR_TXRDYM_Pos)  /**< (TWIHS_FMR) TXRDY will be at level '1' when at least two data can be written in the Transmit FIFO Position  */
#define TWIHS_FMR_TXRDYM_FOUR_DATA          (TWIHS_FMR_TXRDYM_FOUR_DATA_Val << TWIHS_FMR_TXRDYM_Pos)  /**< (TWIHS_FMR) TXRDY will be at level '1' when at least four data can be written in the Transmit FIFO Position  */
#define TWIHS_FMR_RXRDYM_Pos                4                                              /**< (TWIHS_FMR) Receiver Ready Mode Position */
#define TWIHS_FMR_RXRDYM_Msk                (_U_(0x3) << TWIHS_FMR_RXRDYM_Pos)             /**< (TWIHS_FMR) Receiver Ready Mode Mask */
#define TWIHS_FMR_RXRDYM(value)             (TWIHS_FMR_RXRDYM_Msk & ((value) << TWIHS_FMR_RXRDYM_Pos))
#define   TWIHS_FMR_RXRDYM_ONE_DATA_Val     _U_(0x0)                                       /**< (TWIHS_FMR) RXRDY will be at level '1' when at least one unread data is in the Receive FIFO  */
#define   TWIHS_FMR_RXRDYM_TWO_DATA_Val     _U_(0x1)                                       /**< (TWIHS_FMR) RXRDY will be at level '1' when at least two unread data are in the Receive FIFO  */
#define   TWIHS_FMR_RXRDYM_FOUR_DATA_Val    _U_(0x2)                                       /**< (TWIHS_FMR) RXRDY will be at level '1' when at least four unread data are in the Receive FIFO  */
#define TWIHS_FMR_RXRDYM_ONE_DATA           (TWIHS_FMR_RXRDYM_ONE_DATA_Val << TWIHS_FMR_RXRDYM_Pos)  /**< (TWIHS_FMR) RXRDY will be at level '1' when at least one unread data is in the Receive FIFO Position  */
#define TWIHS_FMR_RXRDYM_TWO_DATA           (TWIHS_FMR_RXRDYM_TWO_DATA_Val << TWIHS_FMR_RXRDYM_Pos)  /**< (TWIHS_FMR) RXRDY will be at level '1' when at least two unread data are in the Receive FIFO Position  */
#define TWIHS_FMR_RXRDYM_FOUR_DATA          (TWIHS_FMR_RXRDYM_FOUR_DATA_Val << TWIHS_FMR_RXRDYM_Pos)  /**< (TWIHS_FMR) RXRDY will be at level '1' when at least four unread data are in the Receive FIFO Position  */
#define TWIHS_FMR_TXFTHRES_Pos              16                                             /**< (TWIHS_FMR) Transmit FIFO Threshold Position */
#define TWIHS_FMR_TXFTHRES_Msk              (_U_(0x3F) << TWIHS_FMR_TXFTHRES_Pos)          /**< (TWIHS_FMR) Transmit FIFO Threshold Mask */
#define TWIHS_FMR_TXFTHRES(value)           (TWIHS_FMR_TXFTHRES_Msk & ((value) << TWIHS_FMR_TXFTHRES_Pos))
#define TWIHS_FMR_RXFTHRES_Pos              24                                             /**< (TWIHS_FMR) Receive FIFO Threshold Position */
#define TWIHS_FMR_RXFTHRES_Msk              (_U_(0x3F) << TWIHS_FMR_RXFTHRES_Pos)          /**< (TWIHS_FMR) Receive FIFO Threshold Mask */
#define TWIHS_FMR_RXFTHRES(value)           (TWIHS_FMR_RXFTHRES_Msk & ((value) << TWIHS_FMR_RXFTHRES_Pos))
#define TWIHS_FMR_MASK                      _U_(0x3F3F0033)                                /**< \deprecated (TWIHS_FMR) Register MASK  (Use TWIHS_FMR_Msk instead)  */
#define TWIHS_FMR_Msk                       _U_(0x3F3F0033)                                /**< (TWIHS_FMR) Register Mask  */


/* -------- TWIHS_FLR : (TWIHS Offset: 0x54) (R/ 32) FIFO Level Register -------- */
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
} TWIHS_FLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_FLR_OFFSET                    (0x54)                                        /**<  (TWIHS_FLR) FIFO Level Register  Offset */

#define TWIHS_FLR_TXFL_Pos                  0                                              /**< (TWIHS_FLR) Transmit FIFO Level Position */
#define TWIHS_FLR_TXFL_Msk                  (_U_(0x3F) << TWIHS_FLR_TXFL_Pos)              /**< (TWIHS_FLR) Transmit FIFO Level Mask */
#define TWIHS_FLR_TXFL(value)               (TWIHS_FLR_TXFL_Msk & ((value) << TWIHS_FLR_TXFL_Pos))
#define TWIHS_FLR_RXFL_Pos                  16                                             /**< (TWIHS_FLR) Receive FIFO Level Position */
#define TWIHS_FLR_RXFL_Msk                  (_U_(0x3F) << TWIHS_FLR_RXFL_Pos)              /**< (TWIHS_FLR) Receive FIFO Level Mask */
#define TWIHS_FLR_RXFL(value)               (TWIHS_FLR_RXFL_Msk & ((value) << TWIHS_FLR_RXFL_Pos))
#define TWIHS_FLR_MASK                      _U_(0x3F003F)                                  /**< \deprecated (TWIHS_FLR) Register MASK  (Use TWIHS_FLR_Msk instead)  */
#define TWIHS_FLR_Msk                       _U_(0x3F003F)                                  /**< (TWIHS_FLR) Register Mask  */


/* -------- TWIHS_FSR : (TWIHS Offset: 0x60) (R/ 32) FIFO Status Register -------- */
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
} TWIHS_FSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_FSR_OFFSET                    (0x60)                                        /**<  (TWIHS_FSR) FIFO Status Register  Offset */

#define TWIHS_FSR_TXFEF_Pos                 0                                              /**< (TWIHS_FSR) Transmit FIFO Empty Flag (cleared on read) Position */
#define TWIHS_FSR_TXFEF_Msk                 (_U_(0x1) << TWIHS_FSR_TXFEF_Pos)              /**< (TWIHS_FSR) Transmit FIFO Empty Flag (cleared on read) Mask */
#define TWIHS_FSR_TXFEF                     TWIHS_FSR_TXFEF_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FSR_TXFEF_Msk instead */
#define TWIHS_FSR_TXFFF_Pos                 1                                              /**< (TWIHS_FSR) Transmit FIFO Full Flag (cleared on read) Position */
#define TWIHS_FSR_TXFFF_Msk                 (_U_(0x1) << TWIHS_FSR_TXFFF_Pos)              /**< (TWIHS_FSR) Transmit FIFO Full Flag (cleared on read) Mask */
#define TWIHS_FSR_TXFFF                     TWIHS_FSR_TXFFF_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FSR_TXFFF_Msk instead */
#define TWIHS_FSR_TXFTHF_Pos                2                                              /**< (TWIHS_FSR) Transmit FIFO Threshold Flag (cleared on read) Position */
#define TWIHS_FSR_TXFTHF_Msk                (_U_(0x1) << TWIHS_FSR_TXFTHF_Pos)             /**< (TWIHS_FSR) Transmit FIFO Threshold Flag (cleared on read) Mask */
#define TWIHS_FSR_TXFTHF                    TWIHS_FSR_TXFTHF_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FSR_TXFTHF_Msk instead */
#define TWIHS_FSR_RXFEF_Pos                 3                                              /**< (TWIHS_FSR) Receive FIFO Empty Flag Position */
#define TWIHS_FSR_RXFEF_Msk                 (_U_(0x1) << TWIHS_FSR_RXFEF_Pos)              /**< (TWIHS_FSR) Receive FIFO Empty Flag Mask */
#define TWIHS_FSR_RXFEF                     TWIHS_FSR_RXFEF_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FSR_RXFEF_Msk instead */
#define TWIHS_FSR_RXFFF_Pos                 4                                              /**< (TWIHS_FSR) Receive FIFO Full Flag Position */
#define TWIHS_FSR_RXFFF_Msk                 (_U_(0x1) << TWIHS_FSR_RXFFF_Pos)              /**< (TWIHS_FSR) Receive FIFO Full Flag Mask */
#define TWIHS_FSR_RXFFF                     TWIHS_FSR_RXFFF_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FSR_RXFFF_Msk instead */
#define TWIHS_FSR_RXFTHF_Pos                5                                              /**< (TWIHS_FSR) Receive FIFO Threshold Flag Position */
#define TWIHS_FSR_RXFTHF_Msk                (_U_(0x1) << TWIHS_FSR_RXFTHF_Pos)             /**< (TWIHS_FSR) Receive FIFO Threshold Flag Mask */
#define TWIHS_FSR_RXFTHF                    TWIHS_FSR_RXFTHF_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FSR_RXFTHF_Msk instead */
#define TWIHS_FSR_TXFPTEF_Pos               6                                              /**< (TWIHS_FSR) Transmit FIFO Pointer Error Flag Position */
#define TWIHS_FSR_TXFPTEF_Msk               (_U_(0x1) << TWIHS_FSR_TXFPTEF_Pos)            /**< (TWIHS_FSR) Transmit FIFO Pointer Error Flag Mask */
#define TWIHS_FSR_TXFPTEF                   TWIHS_FSR_TXFPTEF_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FSR_TXFPTEF_Msk instead */
#define TWIHS_FSR_RXFPTEF_Pos               7                                              /**< (TWIHS_FSR) Receive FIFO Pointer Error Flag Position */
#define TWIHS_FSR_RXFPTEF_Msk               (_U_(0x1) << TWIHS_FSR_RXFPTEF_Pos)            /**< (TWIHS_FSR) Receive FIFO Pointer Error Flag Mask */
#define TWIHS_FSR_RXFPTEF                   TWIHS_FSR_RXFPTEF_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FSR_RXFPTEF_Msk instead */
#define TWIHS_FSR_MASK                      _U_(0xFF)                                      /**< \deprecated (TWIHS_FSR) Register MASK  (Use TWIHS_FSR_Msk instead)  */
#define TWIHS_FSR_Msk                       _U_(0xFF)                                      /**< (TWIHS_FSR) Register Mask  */


/* -------- TWIHS_FIER : (TWIHS Offset: 0x64) (/W 32) FIFO Interrupt Enable Register -------- */
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
} TWIHS_FIER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_FIER_OFFSET                   (0x64)                                        /**<  (TWIHS_FIER) FIFO Interrupt Enable Register  Offset */

#define TWIHS_FIER_TXFEF_Pos                0                                              /**< (TWIHS_FIER) TXFEF Interrupt Enable Position */
#define TWIHS_FIER_TXFEF_Msk                (_U_(0x1) << TWIHS_FIER_TXFEF_Pos)             /**< (TWIHS_FIER) TXFEF Interrupt Enable Mask */
#define TWIHS_FIER_TXFEF                    TWIHS_FIER_TXFEF_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIER_TXFEF_Msk instead */
#define TWIHS_FIER_TXFFF_Pos                1                                              /**< (TWIHS_FIER) TXFFF Interrupt Enable Position */
#define TWIHS_FIER_TXFFF_Msk                (_U_(0x1) << TWIHS_FIER_TXFFF_Pos)             /**< (TWIHS_FIER) TXFFF Interrupt Enable Mask */
#define TWIHS_FIER_TXFFF                    TWIHS_FIER_TXFFF_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIER_TXFFF_Msk instead */
#define TWIHS_FIER_TXFTHF_Pos               2                                              /**< (TWIHS_FIER) TXFTHF Interrupt Enable Position */
#define TWIHS_FIER_TXFTHF_Msk               (_U_(0x1) << TWIHS_FIER_TXFTHF_Pos)            /**< (TWIHS_FIER) TXFTHF Interrupt Enable Mask */
#define TWIHS_FIER_TXFTHF                   TWIHS_FIER_TXFTHF_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIER_TXFTHF_Msk instead */
#define TWIHS_FIER_RXFEF_Pos                3                                              /**< (TWIHS_FIER) RXFEF Interrupt Enable Position */
#define TWIHS_FIER_RXFEF_Msk                (_U_(0x1) << TWIHS_FIER_RXFEF_Pos)             /**< (TWIHS_FIER) RXFEF Interrupt Enable Mask */
#define TWIHS_FIER_RXFEF                    TWIHS_FIER_RXFEF_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIER_RXFEF_Msk instead */
#define TWIHS_FIER_RXFFF_Pos                4                                              /**< (TWIHS_FIER) RXFFF Interrupt Enable Position */
#define TWIHS_FIER_RXFFF_Msk                (_U_(0x1) << TWIHS_FIER_RXFFF_Pos)             /**< (TWIHS_FIER) RXFFF Interrupt Enable Mask */
#define TWIHS_FIER_RXFFF                    TWIHS_FIER_RXFFF_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIER_RXFFF_Msk instead */
#define TWIHS_FIER_RXFTHF_Pos               5                                              /**< (TWIHS_FIER) RXFTHF Interrupt Enable Position */
#define TWIHS_FIER_RXFTHF_Msk               (_U_(0x1) << TWIHS_FIER_RXFTHF_Pos)            /**< (TWIHS_FIER) RXFTHF Interrupt Enable Mask */
#define TWIHS_FIER_RXFTHF                   TWIHS_FIER_RXFTHF_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIER_RXFTHF_Msk instead */
#define TWIHS_FIER_TXFPTEF_Pos              6                                              /**< (TWIHS_FIER) TXFPTEF Interrupt Enable Position */
#define TWIHS_FIER_TXFPTEF_Msk              (_U_(0x1) << TWIHS_FIER_TXFPTEF_Pos)           /**< (TWIHS_FIER) TXFPTEF Interrupt Enable Mask */
#define TWIHS_FIER_TXFPTEF                  TWIHS_FIER_TXFPTEF_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIER_TXFPTEF_Msk instead */
#define TWIHS_FIER_RXFPTEF_Pos              7                                              /**< (TWIHS_FIER) RXFPTEF Interrupt Enable Position */
#define TWIHS_FIER_RXFPTEF_Msk              (_U_(0x1) << TWIHS_FIER_RXFPTEF_Pos)           /**< (TWIHS_FIER) RXFPTEF Interrupt Enable Mask */
#define TWIHS_FIER_RXFPTEF                  TWIHS_FIER_RXFPTEF_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIER_RXFPTEF_Msk instead */
#define TWIHS_FIER_MASK                     _U_(0xFF)                                      /**< \deprecated (TWIHS_FIER) Register MASK  (Use TWIHS_FIER_Msk instead)  */
#define TWIHS_FIER_Msk                      _U_(0xFF)                                      /**< (TWIHS_FIER) Register Mask  */


/* -------- TWIHS_FIDR : (TWIHS Offset: 0x68) (/W 32) FIFO Interrupt Disable Register -------- */
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
} TWIHS_FIDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_FIDR_OFFSET                   (0x68)                                        /**<  (TWIHS_FIDR) FIFO Interrupt Disable Register  Offset */

#define TWIHS_FIDR_TXFEF_Pos                0                                              /**< (TWIHS_FIDR) TXFEF Interrupt Disable Position */
#define TWIHS_FIDR_TXFEF_Msk                (_U_(0x1) << TWIHS_FIDR_TXFEF_Pos)             /**< (TWIHS_FIDR) TXFEF Interrupt Disable Mask */
#define TWIHS_FIDR_TXFEF                    TWIHS_FIDR_TXFEF_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIDR_TXFEF_Msk instead */
#define TWIHS_FIDR_TXFFF_Pos                1                                              /**< (TWIHS_FIDR) TXFFF Interrupt Disable Position */
#define TWIHS_FIDR_TXFFF_Msk                (_U_(0x1) << TWIHS_FIDR_TXFFF_Pos)             /**< (TWIHS_FIDR) TXFFF Interrupt Disable Mask */
#define TWIHS_FIDR_TXFFF                    TWIHS_FIDR_TXFFF_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIDR_TXFFF_Msk instead */
#define TWIHS_FIDR_TXFTHF_Pos               2                                              /**< (TWIHS_FIDR) TXFTHF Interrupt Disable Position */
#define TWIHS_FIDR_TXFTHF_Msk               (_U_(0x1) << TWIHS_FIDR_TXFTHF_Pos)            /**< (TWIHS_FIDR) TXFTHF Interrupt Disable Mask */
#define TWIHS_FIDR_TXFTHF                   TWIHS_FIDR_TXFTHF_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIDR_TXFTHF_Msk instead */
#define TWIHS_FIDR_RXFEF_Pos                3                                              /**< (TWIHS_FIDR) RXFEF Interrupt Disable Position */
#define TWIHS_FIDR_RXFEF_Msk                (_U_(0x1) << TWIHS_FIDR_RXFEF_Pos)             /**< (TWIHS_FIDR) RXFEF Interrupt Disable Mask */
#define TWIHS_FIDR_RXFEF                    TWIHS_FIDR_RXFEF_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIDR_RXFEF_Msk instead */
#define TWIHS_FIDR_RXFFF_Pos                4                                              /**< (TWIHS_FIDR) RXFFF Interrupt Disable Position */
#define TWIHS_FIDR_RXFFF_Msk                (_U_(0x1) << TWIHS_FIDR_RXFFF_Pos)             /**< (TWIHS_FIDR) RXFFF Interrupt Disable Mask */
#define TWIHS_FIDR_RXFFF                    TWIHS_FIDR_RXFFF_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIDR_RXFFF_Msk instead */
#define TWIHS_FIDR_RXFTHF_Pos               5                                              /**< (TWIHS_FIDR) RXFTHF Interrupt Disable Position */
#define TWIHS_FIDR_RXFTHF_Msk               (_U_(0x1) << TWIHS_FIDR_RXFTHF_Pos)            /**< (TWIHS_FIDR) RXFTHF Interrupt Disable Mask */
#define TWIHS_FIDR_RXFTHF                   TWIHS_FIDR_RXFTHF_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIDR_RXFTHF_Msk instead */
#define TWIHS_FIDR_TXFPTEF_Pos              6                                              /**< (TWIHS_FIDR) TXFPTEF Interrupt Disable Position */
#define TWIHS_FIDR_TXFPTEF_Msk              (_U_(0x1) << TWIHS_FIDR_TXFPTEF_Pos)           /**< (TWIHS_FIDR) TXFPTEF Interrupt Disable Mask */
#define TWIHS_FIDR_TXFPTEF                  TWIHS_FIDR_TXFPTEF_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIDR_TXFPTEF_Msk instead */
#define TWIHS_FIDR_RXFPTEF_Pos              7                                              /**< (TWIHS_FIDR) RXFPTEF Interrupt Disable Position */
#define TWIHS_FIDR_RXFPTEF_Msk              (_U_(0x1) << TWIHS_FIDR_RXFPTEF_Pos)           /**< (TWIHS_FIDR) RXFPTEF Interrupt Disable Mask */
#define TWIHS_FIDR_RXFPTEF                  TWIHS_FIDR_RXFPTEF_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIDR_RXFPTEF_Msk instead */
#define TWIHS_FIDR_MASK                     _U_(0xFF)                                      /**< \deprecated (TWIHS_FIDR) Register MASK  (Use TWIHS_FIDR_Msk instead)  */
#define TWIHS_FIDR_Msk                      _U_(0xFF)                                      /**< (TWIHS_FIDR) Register Mask  */


/* -------- TWIHS_FIMR : (TWIHS Offset: 0x6c) (R/ 32) FIFO Interrupt Mask Register -------- */
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
} TWIHS_FIMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_FIMR_OFFSET                   (0x6C)                                        /**<  (TWIHS_FIMR) FIFO Interrupt Mask Register  Offset */

#define TWIHS_FIMR_TXFEF_Pos                0                                              /**< (TWIHS_FIMR) TXFEF Interrupt Mask Position */
#define TWIHS_FIMR_TXFEF_Msk                (_U_(0x1) << TWIHS_FIMR_TXFEF_Pos)             /**< (TWIHS_FIMR) TXFEF Interrupt Mask Mask */
#define TWIHS_FIMR_TXFEF                    TWIHS_FIMR_TXFEF_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIMR_TXFEF_Msk instead */
#define TWIHS_FIMR_TXFFF_Pos                1                                              /**< (TWIHS_FIMR) TXFFF Interrupt Mask Position */
#define TWIHS_FIMR_TXFFF_Msk                (_U_(0x1) << TWIHS_FIMR_TXFFF_Pos)             /**< (TWIHS_FIMR) TXFFF Interrupt Mask Mask */
#define TWIHS_FIMR_TXFFF                    TWIHS_FIMR_TXFFF_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIMR_TXFFF_Msk instead */
#define TWIHS_FIMR_TXFTHF_Pos               2                                              /**< (TWIHS_FIMR) TXFTHF Interrupt Mask Position */
#define TWIHS_FIMR_TXFTHF_Msk               (_U_(0x1) << TWIHS_FIMR_TXFTHF_Pos)            /**< (TWIHS_FIMR) TXFTHF Interrupt Mask Mask */
#define TWIHS_FIMR_TXFTHF                   TWIHS_FIMR_TXFTHF_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIMR_TXFTHF_Msk instead */
#define TWIHS_FIMR_RXFEF_Pos                3                                              /**< (TWIHS_FIMR) RXFEF Interrupt Mask Position */
#define TWIHS_FIMR_RXFEF_Msk                (_U_(0x1) << TWIHS_FIMR_RXFEF_Pos)             /**< (TWIHS_FIMR) RXFEF Interrupt Mask Mask */
#define TWIHS_FIMR_RXFEF                    TWIHS_FIMR_RXFEF_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIMR_RXFEF_Msk instead */
#define TWIHS_FIMR_RXFFF_Pos                4                                              /**< (TWIHS_FIMR) RXFFF Interrupt Mask Position */
#define TWIHS_FIMR_RXFFF_Msk                (_U_(0x1) << TWIHS_FIMR_RXFFF_Pos)             /**< (TWIHS_FIMR) RXFFF Interrupt Mask Mask */
#define TWIHS_FIMR_RXFFF                    TWIHS_FIMR_RXFFF_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIMR_RXFFF_Msk instead */
#define TWIHS_FIMR_RXFTHF_Pos               5                                              /**< (TWIHS_FIMR) RXFTHF Interrupt Mask Position */
#define TWIHS_FIMR_RXFTHF_Msk               (_U_(0x1) << TWIHS_FIMR_RXFTHF_Pos)            /**< (TWIHS_FIMR) RXFTHF Interrupt Mask Mask */
#define TWIHS_FIMR_RXFTHF                   TWIHS_FIMR_RXFTHF_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIMR_RXFTHF_Msk instead */
#define TWIHS_FIMR_TXFPTEF_Pos              6                                              /**< (TWIHS_FIMR) TXFPTEF Interrupt Mask Position */
#define TWIHS_FIMR_TXFPTEF_Msk              (_U_(0x1) << TWIHS_FIMR_TXFPTEF_Pos)           /**< (TWIHS_FIMR) TXFPTEF Interrupt Mask Mask */
#define TWIHS_FIMR_TXFPTEF                  TWIHS_FIMR_TXFPTEF_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIMR_TXFPTEF_Msk instead */
#define TWIHS_FIMR_RXFPTEF_Pos              7                                              /**< (TWIHS_FIMR) RXFPTEF Interrupt Mask Position */
#define TWIHS_FIMR_RXFPTEF_Msk              (_U_(0x1) << TWIHS_FIMR_RXFPTEF_Pos)           /**< (TWIHS_FIMR) RXFPTEF Interrupt Mask Mask */
#define TWIHS_FIMR_RXFPTEF                  TWIHS_FIMR_RXFPTEF_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_FIMR_RXFPTEF_Msk instead */
#define TWIHS_FIMR_MASK                     _U_(0xFF)                                      /**< \deprecated (TWIHS_FIMR) Register MASK  (Use TWIHS_FIMR_Msk instead)  */
#define TWIHS_FIMR_Msk                      _U_(0xFF)                                      /**< (TWIHS_FIMR) Register Mask  */


/* -------- TWIHS_DR : (TWIHS Offset: 0xd0) (R/ 32) Debug Register -------- */
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
} TWIHS_DR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_DR_OFFSET                     (0xD0)                                        /**<  (TWIHS_DR) Debug Register  Offset */

#define TWIHS_DR_SWEN_Pos                   0                                              /**< (TWIHS_DR) SleepWalking Enable Position */
#define TWIHS_DR_SWEN_Msk                   (_U_(0x1) << TWIHS_DR_SWEN_Pos)                /**< (TWIHS_DR) SleepWalking Enable Mask */
#define TWIHS_DR_SWEN                       TWIHS_DR_SWEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_DR_SWEN_Msk instead */
#define TWIHS_DR_CLKRQ_Pos                  1                                              /**< (TWIHS_DR) Clock Request Position */
#define TWIHS_DR_CLKRQ_Msk                  (_U_(0x1) << TWIHS_DR_CLKRQ_Pos)               /**< (TWIHS_DR) Clock Request Mask */
#define TWIHS_DR_CLKRQ                      TWIHS_DR_CLKRQ_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_DR_CLKRQ_Msk instead */
#define TWIHS_DR_SWMATCH_Pos                2                                              /**< (TWIHS_DR) SleepWalking Match Position */
#define TWIHS_DR_SWMATCH_Msk                (_U_(0x1) << TWIHS_DR_SWMATCH_Pos)             /**< (TWIHS_DR) SleepWalking Match Mask */
#define TWIHS_DR_SWMATCH                    TWIHS_DR_SWMATCH_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_DR_SWMATCH_Msk instead */
#define TWIHS_DR_TRP_Pos                    3                                              /**< (TWIHS_DR) Transfer Pending Position */
#define TWIHS_DR_TRP_Msk                    (_U_(0x1) << TWIHS_DR_TRP_Pos)                 /**< (TWIHS_DR) Transfer Pending Mask */
#define TWIHS_DR_TRP                        TWIHS_DR_TRP_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_DR_TRP_Msk instead */
#define TWIHS_DR_MASK                       _U_(0x0F)                                      /**< \deprecated (TWIHS_DR) Register MASK  (Use TWIHS_DR_Msk instead)  */
#define TWIHS_DR_Msk                        _U_(0x0F)                                      /**< (TWIHS_DR) Register Mask  */


/* -------- TWIHS_WPMR : (TWIHS Offset: 0xe4) (R/W 32) Write Protection Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPEN:1;                    /**< bit:      0  Write Protection Enable                  */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPKEY:24;                  /**< bit:  8..31  Write Protection Key                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWIHS_WPMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_WPMR_OFFSET                   (0xE4)                                        /**<  (TWIHS_WPMR) Write Protection Mode Register  Offset */

#define TWIHS_WPMR_WPEN_Pos                 0                                              /**< (TWIHS_WPMR) Write Protection Enable Position */
#define TWIHS_WPMR_WPEN_Msk                 (_U_(0x1) << TWIHS_WPMR_WPEN_Pos)              /**< (TWIHS_WPMR) Write Protection Enable Mask */
#define TWIHS_WPMR_WPEN                     TWIHS_WPMR_WPEN_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_WPMR_WPEN_Msk instead */
#define TWIHS_WPMR_WPKEY_Pos                8                                              /**< (TWIHS_WPMR) Write Protection Key Position */
#define TWIHS_WPMR_WPKEY_Msk                (_U_(0xFFFFFF) << TWIHS_WPMR_WPKEY_Pos)        /**< (TWIHS_WPMR) Write Protection Key Mask */
#define TWIHS_WPMR_WPKEY(value)             (TWIHS_WPMR_WPKEY_Msk & ((value) << TWIHS_WPMR_WPKEY_Pos))
#define   TWIHS_WPMR_WPKEY_PASSWD_Val       _U_(0x545749)                                  /**< (TWIHS_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0  */
#define TWIHS_WPMR_WPKEY_PASSWD             (TWIHS_WPMR_WPKEY_PASSWD_Val << TWIHS_WPMR_WPKEY_Pos)  /**< (TWIHS_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0 Position  */
#define TWIHS_WPMR_MASK                     _U_(0xFFFFFF01)                                /**< \deprecated (TWIHS_WPMR) Register MASK  (Use TWIHS_WPMR_Msk instead)  */
#define TWIHS_WPMR_Msk                      _U_(0xFFFFFF01)                                /**< (TWIHS_WPMR) Register Mask  */


/* -------- TWIHS_WPSR : (TWIHS Offset: 0xe8) (R/ 32) Write Protection Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPVS:1;                    /**< bit:      0  Write Protection Violation Status        */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPVSRC:24;                 /**< bit:  8..31  Write Protection Violation Source        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWIHS_WPSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIHS_WPSR_OFFSET                   (0xE8)                                        /**<  (TWIHS_WPSR) Write Protection Status Register  Offset */

#define TWIHS_WPSR_WPVS_Pos                 0                                              /**< (TWIHS_WPSR) Write Protection Violation Status Position */
#define TWIHS_WPSR_WPVS_Msk                 (_U_(0x1) << TWIHS_WPSR_WPVS_Pos)              /**< (TWIHS_WPSR) Write Protection Violation Status Mask */
#define TWIHS_WPSR_WPVS                     TWIHS_WPSR_WPVS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWIHS_WPSR_WPVS_Msk instead */
#define TWIHS_WPSR_WPVSRC_Pos               8                                              /**< (TWIHS_WPSR) Write Protection Violation Source Position */
#define TWIHS_WPSR_WPVSRC_Msk               (_U_(0xFFFFFF) << TWIHS_WPSR_WPVSRC_Pos)       /**< (TWIHS_WPSR) Write Protection Violation Source Mask */
#define TWIHS_WPSR_WPVSRC(value)            (TWIHS_WPSR_WPVSRC_Msk & ((value) << TWIHS_WPSR_WPVSRC_Pos))
#define TWIHS_WPSR_MASK                     _U_(0xFFFFFF01)                                /**< \deprecated (TWIHS_WPSR) Register MASK  (Use TWIHS_WPSR_Msk instead)  */
#define TWIHS_WPSR_Msk                      _U_(0xFFFFFF01)                                /**< (TWIHS_WPSR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief TWIHS hardware registers */
typedef struct {  
  __O  uint32_t TWIHS_CR;       /**< (TWIHS Offset: 0x00) Control Register */
  __IO uint32_t TWIHS_MMR;      /**< (TWIHS Offset: 0x04) Master Mode Register */
  __IO uint32_t TWIHS_SMR;      /**< (TWIHS Offset: 0x08) Slave Mode Register */
  __IO uint32_t TWIHS_IADR;     /**< (TWIHS Offset: 0x0C) Internal Address Register */
  __IO uint32_t TWIHS_CWGR;     /**< (TWIHS Offset: 0x10) Clock Waveform Generator Register */
  __I  uint8_t                        Reserved1[12];
  __I  uint32_t TWIHS_SR;       /**< (TWIHS Offset: 0x20) Status Register */
  __O  uint32_t TWIHS_IER;      /**< (TWIHS Offset: 0x24) Interrupt Enable Register */
  __O  uint32_t TWIHS_IDR;      /**< (TWIHS Offset: 0x28) Interrupt Disable Register */
  __I  uint32_t TWIHS_IMR;      /**< (TWIHS Offset: 0x2C) Interrupt Mask Register */
  __I  uint32_t TWIHS_RHR;      /**< (TWIHS Offset: 0x30) Receive Holding Register */
  __O  uint32_t TWIHS_THR;      /**< (TWIHS Offset: 0x34) Transmit Holding Register */
  __IO uint32_t TWIHS_SMBTR;    /**< (TWIHS Offset: 0x38) SMBus Timing Register */
  __I  uint8_t                        Reserved2[4];
  __IO uint32_t TWIHS_ACR;      /**< (TWIHS Offset: 0x40) Alternative Command Register */
  __IO uint32_t TWIHS_FILTR;    /**< (TWIHS Offset: 0x44) Filter Register */
  __I  uint8_t                        Reserved3[4];
  __IO uint32_t TWIHS_SWMR;     /**< (TWIHS Offset: 0x4C) SleepWalking Matching Register */
  __IO uint32_t TWIHS_FMR;      /**< (TWIHS Offset: 0x50) FIFO Mode Register */
  __I  uint32_t TWIHS_FLR;      /**< (TWIHS Offset: 0x54) FIFO Level Register */
  __I  uint8_t                        Reserved4[8];
  __I  uint32_t TWIHS_FSR;      /**< (TWIHS Offset: 0x60) FIFO Status Register */
  __O  uint32_t TWIHS_FIER;     /**< (TWIHS Offset: 0x64) FIFO Interrupt Enable Register */
  __O  uint32_t TWIHS_FIDR;     /**< (TWIHS Offset: 0x68) FIFO Interrupt Disable Register */
  __I  uint32_t TWIHS_FIMR;     /**< (TWIHS Offset: 0x6C) FIFO Interrupt Mask Register */
  __I  uint8_t                        Reserved5[96];
  __I  uint32_t TWIHS_DR;       /**< (TWIHS Offset: 0xD0) Debug Register */
  __I  uint8_t                        Reserved6[16];
  __IO uint32_t TWIHS_WPMR;     /**< (TWIHS Offset: 0xE4) Write Protection Mode Register */
  __I  uint32_t TWIHS_WPSR;     /**< (TWIHS Offset: 0xE8) Write Protection Status Register */
} Twihs;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief TWIHS hardware registers */
typedef struct {  
  __O  TWIHS_CR_Type                  TWIHS_CR;       /**< Offset: 0x00 ( /W  32) Control Register */
  __IO TWIHS_MMR_Type                 TWIHS_MMR;      /**< Offset: 0x04 (R/W  32) Master Mode Register */
  __IO TWIHS_SMR_Type                 TWIHS_SMR;      /**< Offset: 0x08 (R/W  32) Slave Mode Register */
  __IO TWIHS_IADR_Type                TWIHS_IADR;     /**< Offset: 0x0C (R/W  32) Internal Address Register */
  __IO TWIHS_CWGR_Type                TWIHS_CWGR;     /**< Offset: 0x10 (R/W  32) Clock Waveform Generator Register */
  __I  uint8_t                        Reserved1[12];
  __I  TWIHS_SR_Type                  TWIHS_SR;       /**< Offset: 0x20 (R/   32) Status Register */
  __O  TWIHS_IER_Type                 TWIHS_IER;      /**< Offset: 0x24 ( /W  32) Interrupt Enable Register */
  __O  TWIHS_IDR_Type                 TWIHS_IDR;      /**< Offset: 0x28 ( /W  32) Interrupt Disable Register */
  __I  TWIHS_IMR_Type                 TWIHS_IMR;      /**< Offset: 0x2C (R/   32) Interrupt Mask Register */
  __I  TWIHS_RHR_Type                 TWIHS_RHR;      /**< Offset: 0x30 (R/   32) Receive Holding Register */
  __O  TWIHS_THR_Type                 TWIHS_THR;      /**< Offset: 0x34 ( /W  32) Transmit Holding Register */
  __IO TWIHS_SMBTR_Type               TWIHS_SMBTR;    /**< Offset: 0x38 (R/W  32) SMBus Timing Register */
  __I  uint8_t                        Reserved2[4];
  __IO TWIHS_ACR_Type                 TWIHS_ACR;      /**< Offset: 0x40 (R/W  32) Alternative Command Register */
  __IO TWIHS_FILTR_Type               TWIHS_FILTR;    /**< Offset: 0x44 (R/W  32) Filter Register */
  __I  uint8_t                        Reserved3[4];
  __IO TWIHS_SWMR_Type                TWIHS_SWMR;     /**< Offset: 0x4C (R/W  32) SleepWalking Matching Register */
  __IO TWIHS_FMR_Type                 TWIHS_FMR;      /**< Offset: 0x50 (R/W  32) FIFO Mode Register */
  __I  TWIHS_FLR_Type                 TWIHS_FLR;      /**< Offset: 0x54 (R/   32) FIFO Level Register */
  __I  uint8_t                        Reserved4[8];
  __I  TWIHS_FSR_Type                 TWIHS_FSR;      /**< Offset: 0x60 (R/   32) FIFO Status Register */
  __O  TWIHS_FIER_Type                TWIHS_FIER;     /**< Offset: 0x64 ( /W  32) FIFO Interrupt Enable Register */
  __O  TWIHS_FIDR_Type                TWIHS_FIDR;     /**< Offset: 0x68 ( /W  32) FIFO Interrupt Disable Register */
  __I  TWIHS_FIMR_Type                TWIHS_FIMR;     /**< Offset: 0x6C (R/   32) FIFO Interrupt Mask Register */
  __I  uint8_t                        Reserved5[96];
  __I  TWIHS_DR_Type                  TWIHS_DR;       /**< Offset: 0xD0 (R/   32) Debug Register */
  __I  uint8_t                        Reserved6[16];
  __IO TWIHS_WPMR_Type                TWIHS_WPMR;     /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I  TWIHS_WPSR_Type                TWIHS_WPSR;     /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
} Twihs;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Two-wire Interface High Speed */

#endif /* _SAMA5D2_TWIHS_COMPONENT_H_ */
