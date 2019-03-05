/**
 * \file
 *
 * \brief Component description for MPDDRC
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
#ifndef _SAMA5D2_MPDDRC_COMPONENT_H_
#define _SAMA5D2_MPDDRC_COMPONENT_H_
#define _SAMA5D2_MPDDRC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 AHB Multiport DDR-SDRAM Controller
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR MPDDRC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define MPDDRC_11043                      /**< (MPDDRC) Module ID */
#define REV_MPDDRC ZA                     /**< (MPDDRC) Module revision */

/* -------- MPDDRC_MR : (MPDDRC Offset: 0x00) (R/W 32) Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MODE:3;                    /**< bit:   0..2  MPDDRC Command Mode                      */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t DAI:1;                     /**< bit:      4  Device Autoinitialization Status (read-only) */
    uint32_t :3;                        /**< bit:   5..7  Reserved */
    uint32_t MRS:8;                     /**< bit:  8..15  Mode Register Select LPDDR2/LPDDR3       */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_MR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_MR_OFFSET                    (0x00)                                        /**<  (MPDDRC_MR) Mode Register  Offset */

#define MPDDRC_MR_MODE_Pos                  0                                              /**< (MPDDRC_MR) MPDDRC Command Mode Position */
#define MPDDRC_MR_MODE_Msk                  (_U_(0x7) << MPDDRC_MR_MODE_Pos)               /**< (MPDDRC_MR) MPDDRC Command Mode Mask */
#define MPDDRC_MR_MODE(value)               (MPDDRC_MR_MODE_Msk & ((value) << MPDDRC_MR_MODE_Pos))
#define   MPDDRC_MR_MODE_NORMAL_CMD_Val     _U_(0x0)                                       /**< (MPDDRC_MR) Normal Mode. Any access to the MPDDRC is decoded normally. To activate this mode, the command must be followed by a write to the DDR-SDRAM.  */
#define   MPDDRC_MR_MODE_NOP_CMD_Val        _U_(0x1)                                       /**< (MPDDRC_MR) The MPDDRC issues a NOP command when the DDR-SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the DDR-SDRAM.  */
#define   MPDDRC_MR_MODE_PRCGALL_CMD_Val    _U_(0x2)                                       /**< (MPDDRC_MR) The MPDDRC issues the All Banks Precharge command when the DDR-SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the SDRAM.  */
#define   MPDDRC_MR_MODE_LMR_CMD_Val        _U_(0x3)                                       /**< (MPDDRC_MR) The MPDDRC issues a Load Mode Register command when the DDR-SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the DDR-SDRAM.  */
#define   MPDDRC_MR_MODE_RFSH_CMD_Val       _U_(0x4)                                       /**< (MPDDRC_MR) The MPDDRC issues an Autorefresh command when the DDR-SDRAM device is accessed regardless of the cycle. Previously, an All Banks Precharge command must be issued. To activate this mode, the command must be followed by a write to the DDR-SDRAM.  */
#define   MPDDRC_MR_MODE_EXT_LMR_CMD_Val    _U_(0x5)                                       /**< (MPDDRC_MR) The MPDDRC issues an Extended Load Mode Register command when the SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the DDR-SDRAM. The write in the DDR-SDRAM must be done in the appropriate bank.  */
#define   MPDDRC_MR_MODE_DEEP_CALIB_MD_Val  _U_(0x6)                                       /**< (MPDDRC_MR) Deep Power mode: Access to Deep Powerdown modeCalibration command: to calibrate RTT and RON values for the Process Voltage Temperature (PVT) (DDR3-SDRAM device)  */
#define   MPDDRC_MR_MODE_LPDDR2_LPDDR3_CMD_Val _U_(0x7)                                       /**< (MPDDRC_MR) The MPDDRC issues an LPDDR2/LPDDR3 Mode Register command when the device is accessed regardless of the cycle. To activate this mode, the Mode Register command must be followed by a write to the low-power DDR2-SDRAM or to the low-power DDR3-SDRAM.  */
#define MPDDRC_MR_MODE_NORMAL_CMD           (MPDDRC_MR_MODE_NORMAL_CMD_Val << MPDDRC_MR_MODE_Pos)  /**< (MPDDRC_MR) Normal Mode. Any access to the MPDDRC is decoded normally. To activate this mode, the command must be followed by a write to the DDR-SDRAM. Position  */
#define MPDDRC_MR_MODE_NOP_CMD              (MPDDRC_MR_MODE_NOP_CMD_Val << MPDDRC_MR_MODE_Pos)  /**< (MPDDRC_MR) The MPDDRC issues a NOP command when the DDR-SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the DDR-SDRAM. Position  */
#define MPDDRC_MR_MODE_PRCGALL_CMD          (MPDDRC_MR_MODE_PRCGALL_CMD_Val << MPDDRC_MR_MODE_Pos)  /**< (MPDDRC_MR) The MPDDRC issues the All Banks Precharge command when the DDR-SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the SDRAM. Position  */
#define MPDDRC_MR_MODE_LMR_CMD              (MPDDRC_MR_MODE_LMR_CMD_Val << MPDDRC_MR_MODE_Pos)  /**< (MPDDRC_MR) The MPDDRC issues a Load Mode Register command when the DDR-SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the DDR-SDRAM. Position  */
#define MPDDRC_MR_MODE_RFSH_CMD             (MPDDRC_MR_MODE_RFSH_CMD_Val << MPDDRC_MR_MODE_Pos)  /**< (MPDDRC_MR) The MPDDRC issues an Autorefresh command when the DDR-SDRAM device is accessed regardless of the cycle. Previously, an All Banks Precharge command must be issued. To activate this mode, the command must be followed by a write to the DDR-SDRAM. Position  */
#define MPDDRC_MR_MODE_EXT_LMR_CMD          (MPDDRC_MR_MODE_EXT_LMR_CMD_Val << MPDDRC_MR_MODE_Pos)  /**< (MPDDRC_MR) The MPDDRC issues an Extended Load Mode Register command when the SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the DDR-SDRAM. The write in the DDR-SDRAM must be done in the appropriate bank. Position  */
#define MPDDRC_MR_MODE_DEEP_CALIB_MD        (MPDDRC_MR_MODE_DEEP_CALIB_MD_Val << MPDDRC_MR_MODE_Pos)  /**< (MPDDRC_MR) Deep Power mode: Access to Deep Powerdown modeCalibration command: to calibrate RTT and RON values for the Process Voltage Temperature (PVT) (DDR3-SDRAM device) Position  */
#define MPDDRC_MR_MODE_LPDDR2_LPDDR3_CMD    (MPDDRC_MR_MODE_LPDDR2_LPDDR3_CMD_Val << MPDDRC_MR_MODE_Pos)  /**< (MPDDRC_MR) The MPDDRC issues an LPDDR2/LPDDR3 Mode Register command when the device is accessed regardless of the cycle. To activate this mode, the Mode Register command must be followed by a write to the low-power DDR2-SDRAM or to the low-power DDR3-SDRAM. Position  */
#define MPDDRC_MR_DAI_Pos                   4                                              /**< (MPDDRC_MR) Device Autoinitialization Status (read-only) Position */
#define MPDDRC_MR_DAI_Msk                   (_U_(0x1) << MPDDRC_MR_DAI_Pos)                /**< (MPDDRC_MR) Device Autoinitialization Status (read-only) Mask */
#define MPDDRC_MR_DAI                       MPDDRC_MR_DAI_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_MR_DAI_Msk instead */
#define   MPDDRC_MR_DAI_DAI_COMPLETE_Val    _U_(0x0)                                       /**< (MPDDRC_MR) DAI complete  */
#define   MPDDRC_MR_DAI_DAI_IN_PROGESSS_Val _U_(0x1)                                       /**< (MPDDRC_MR) DAI still in progress  */
#define MPDDRC_MR_DAI_DAI_COMPLETE          (MPDDRC_MR_DAI_DAI_COMPLETE_Val << MPDDRC_MR_DAI_Pos)  /**< (MPDDRC_MR) DAI complete Position  */
#define MPDDRC_MR_DAI_DAI_IN_PROGESSS       (MPDDRC_MR_DAI_DAI_IN_PROGESSS_Val << MPDDRC_MR_DAI_Pos)  /**< (MPDDRC_MR) DAI still in progress Position  */
#define MPDDRC_MR_MRS_Pos                   8                                              /**< (MPDDRC_MR) Mode Register Select LPDDR2/LPDDR3 Position */
#define MPDDRC_MR_MRS_Msk                   (_U_(0xFF) << MPDDRC_MR_MRS_Pos)               /**< (MPDDRC_MR) Mode Register Select LPDDR2/LPDDR3 Mask */
#define MPDDRC_MR_MRS(value)                (MPDDRC_MR_MRS_Msk & ((value) << MPDDRC_MR_MRS_Pos))
#define MPDDRC_MR_MASK                      _U_(0xFF17)                                    /**< \deprecated (MPDDRC_MR) Register MASK  (Use MPDDRC_MR_Msk instead)  */
#define MPDDRC_MR_Msk                       _U_(0xFF17)                                    /**< (MPDDRC_MR) Register Mask  */


/* -------- MPDDRC_RTR : (MPDDRC Offset: 0x04) (R/W 32) Refresh Timer Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t COUNT:12;                  /**< bit:  0..11  MPDDRC Refresh Timer Count               */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t ADJ_REF:1;                 /**< bit:     16  Adjust Refresh Rate                      */
    uint32_t REF_PB:1;                  /**< bit:     17  Refresh Per Bank                         */
    uint32_t :2;                        /**< bit: 18..19  Reserved */
    uint32_t MR4_VALUE:3;               /**< bit: 20..22  Content of MR4 Register (read-only)      */
    uint32_t :9;                        /**< bit: 23..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_RTR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_RTR_OFFSET                   (0x04)                                        /**<  (MPDDRC_RTR) Refresh Timer Register  Offset */

#define MPDDRC_RTR_COUNT_Pos                0                                              /**< (MPDDRC_RTR) MPDDRC Refresh Timer Count Position */
#define MPDDRC_RTR_COUNT_Msk                (_U_(0xFFF) << MPDDRC_RTR_COUNT_Pos)           /**< (MPDDRC_RTR) MPDDRC Refresh Timer Count Mask */
#define MPDDRC_RTR_COUNT(value)             (MPDDRC_RTR_COUNT_Msk & ((value) << MPDDRC_RTR_COUNT_Pos))
#define MPDDRC_RTR_ADJ_REF_Pos              16                                             /**< (MPDDRC_RTR) Adjust Refresh Rate Position */
#define MPDDRC_RTR_ADJ_REF_Msk              (_U_(0x1) << MPDDRC_RTR_ADJ_REF_Pos)           /**< (MPDDRC_RTR) Adjust Refresh Rate Mask */
#define MPDDRC_RTR_ADJ_REF                  MPDDRC_RTR_ADJ_REF_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_RTR_ADJ_REF_Msk instead */
#define MPDDRC_RTR_REF_PB_Pos               17                                             /**< (MPDDRC_RTR) Refresh Per Bank Position */
#define MPDDRC_RTR_REF_PB_Msk               (_U_(0x1) << MPDDRC_RTR_REF_PB_Pos)            /**< (MPDDRC_RTR) Refresh Per Bank Mask */
#define MPDDRC_RTR_REF_PB                   MPDDRC_RTR_REF_PB_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_RTR_REF_PB_Msk instead */
#define MPDDRC_RTR_MR4_VALUE_Pos            20                                             /**< (MPDDRC_RTR) Content of MR4 Register (read-only) Position */
#define MPDDRC_RTR_MR4_VALUE_Msk            (_U_(0x7) << MPDDRC_RTR_MR4_VALUE_Pos)         /**< (MPDDRC_RTR) Content of MR4 Register (read-only) Mask */
#define MPDDRC_RTR_MR4_VALUE(value)         (MPDDRC_RTR_MR4_VALUE_Msk & ((value) << MPDDRC_RTR_MR4_VALUE_Pos))
#define MPDDRC_RTR_MASK                     _U_(0x730FFF)                                  /**< \deprecated (MPDDRC_RTR) Register MASK  (Use MPDDRC_RTR_Msk instead)  */
#define MPDDRC_RTR_Msk                      _U_(0x730FFF)                                  /**< (MPDDRC_RTR) Register Mask  */


/* -------- MPDDRC_CR : (MPDDRC Offset: 0x08) (R/W 32) Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NC:2;                      /**< bit:   0..1  Number of Column Bits                    */
    uint32_t NR:2;                      /**< bit:   2..3  Number of Row Bits                       */
    uint32_t CAS:3;                     /**< bit:   4..6  CAS Latency                              */
    uint32_t DLL:1;                     /**< bit:      7  Reset DLL                                */
    uint32_t DIC_DS:1;                  /**< bit:      8  Output Driver Impedance Control (Drive Strength) */
    uint32_t DIS_DLL:1;                 /**< bit:      9  DISABLE DLL                              */
    uint32_t ZQ:2;                      /**< bit: 10..11  ZQ Calibration                           */
    uint32_t OCD:3;                     /**< bit: 12..14  Off-chip Driver                          */
    uint32_t :1;                        /**< bit:     15  Reserved */
    uint32_t DQMS:1;                    /**< bit:     16  Mask Data is Shared                      */
    uint32_t ENRDM:1;                   /**< bit:     17  Enable Read Measure                      */
    uint32_t :1;                        /**< bit:     18  Reserved */
    uint32_t LC_LPDDR1:1;               /**< bit:     19  Low-cost Low-power DDR1                  */
    uint32_t NB:1;                      /**< bit:     20  Number of Banks                          */
    uint32_t NDQS:1;                    /**< bit:     21  Not DQS                                  */
    uint32_t DECOD:1;                   /**< bit:     22  Type of Decoding                         */
    uint32_t UNAL:1;                    /**< bit:     23  Support Unaligned Access                 */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :19;                       /**< bit:  0..18  Reserved */
    uint32_t LC_LPDDR:1;                /**< bit:     19  Low-cost Low-power DDRx                  */
    uint32_t :12;                       /**< bit: 20..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_CR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_CR_OFFSET                    (0x08)                                        /**<  (MPDDRC_CR) Configuration Register  Offset */

#define MPDDRC_CR_NC_Pos                    0                                              /**< (MPDDRC_CR) Number of Column Bits Position */
#define MPDDRC_CR_NC_Msk                    (_U_(0x3) << MPDDRC_CR_NC_Pos)                 /**< (MPDDRC_CR) Number of Column Bits Mask */
#define MPDDRC_CR_NC(value)                 (MPDDRC_CR_NC_Msk & ((value) << MPDDRC_CR_NC_Pos))
#define   MPDDRC_CR_NC_DDR9_MDDR8_COL_BITS_Val _U_(0x0)                                       /**< (MPDDRC_CR) 9 bits to define the column number, up to 512 columns, for DDR2-SDRAM/DDR3-SDRAM/LPDDR2-SDRAM/LPDDR3-SDRAM 8 bits to define the column number, up to 256 columns, for LPDDR1-SDRAM  */
#define   MPDDRC_CR_NC_DDR10_MDDR9_COL_BITS_Val _U_(0x1)                                       /**< (MPDDRC_CR) 10 bits to define the column number, up to 1024 columns, for DDR2-SDRAM/DDR3-SDRAM/LPDDR2-SDRAM/LPDDR3-SDRAM 9 bits to define the column number, up to 512 columns, for LPDDR1-SDRAM  */
#define   MPDDRC_CR_NC_DDR11_MDDR10_COL_BITS_Val _U_(0x2)                                       /**< (MPDDRC_CR) 11 bits to define the column number, up to 2048 columns, for DDR2-SDRAM/DDR3-SDRAM/LPDDR2-SDRAM/LPDDR3-SDRAM 10 bits to define the column number, up to 1024 columns, for LPDDR1-SDRAM  */
#define   MPDDRC_CR_NC_DDR12_MDDR11_COL_BITS_Val _U_(0x3)                                       /**< (MPDDRC_CR) 12 bits to define the column number, up to 4096 columns, for DDR2-SDRAM/DDR3-SDRAM/LPDDR2-SDRAM/LPDDR3-SDRAM 11 bits to define the column number, up to 2048 columns, for LPDDR1-SDRAM  */
#define MPDDRC_CR_NC_DDR9_MDDR8_COL_BITS    (MPDDRC_CR_NC_DDR9_MDDR8_COL_BITS_Val << MPDDRC_CR_NC_Pos)  /**< (MPDDRC_CR) 9 bits to define the column number, up to 512 columns, for DDR2-SDRAM/DDR3-SDRAM/LPDDR2-SDRAM/LPDDR3-SDRAM 8 bits to define the column number, up to 256 columns, for LPDDR1-SDRAM Position  */
#define MPDDRC_CR_NC_DDR10_MDDR9_COL_BITS   (MPDDRC_CR_NC_DDR10_MDDR9_COL_BITS_Val << MPDDRC_CR_NC_Pos)  /**< (MPDDRC_CR) 10 bits to define the column number, up to 1024 columns, for DDR2-SDRAM/DDR3-SDRAM/LPDDR2-SDRAM/LPDDR3-SDRAM 9 bits to define the column number, up to 512 columns, for LPDDR1-SDRAM Position  */
#define MPDDRC_CR_NC_DDR11_MDDR10_COL_BITS  (MPDDRC_CR_NC_DDR11_MDDR10_COL_BITS_Val << MPDDRC_CR_NC_Pos)  /**< (MPDDRC_CR) 11 bits to define the column number, up to 2048 columns, for DDR2-SDRAM/DDR3-SDRAM/LPDDR2-SDRAM/LPDDR3-SDRAM 10 bits to define the column number, up to 1024 columns, for LPDDR1-SDRAM Position  */
#define MPDDRC_CR_NC_DDR12_MDDR11_COL_BITS  (MPDDRC_CR_NC_DDR12_MDDR11_COL_BITS_Val << MPDDRC_CR_NC_Pos)  /**< (MPDDRC_CR) 12 bits to define the column number, up to 4096 columns, for DDR2-SDRAM/DDR3-SDRAM/LPDDR2-SDRAM/LPDDR3-SDRAM 11 bits to define the column number, up to 2048 columns, for LPDDR1-SDRAM Position  */
#define MPDDRC_CR_NR_Pos                    2                                              /**< (MPDDRC_CR) Number of Row Bits Position */
#define MPDDRC_CR_NR_Msk                    (_U_(0x3) << MPDDRC_CR_NR_Pos)                 /**< (MPDDRC_CR) Number of Row Bits Mask */
#define MPDDRC_CR_NR(value)                 (MPDDRC_CR_NR_Msk & ((value) << MPDDRC_CR_NR_Pos))
#define   MPDDRC_CR_NR_11_ROW_BITS_Val      _U_(0x0)                                       /**< (MPDDRC_CR) 11 bits to define the row number, up to 2048 rows  */
#define   MPDDRC_CR_NR_12_ROW_BITS_Val      _U_(0x1)                                       /**< (MPDDRC_CR) 12 bits to define the row number, up to 4096 rows  */
#define   MPDDRC_CR_NR_13_ROW_BITS_Val      _U_(0x2)                                       /**< (MPDDRC_CR) 13 bits to define the row number, up to 8192 rows  */
#define   MPDDRC_CR_NR_14_ROW_BITS_Val      _U_(0x3)                                       /**< (MPDDRC_CR) 14 bits to define the row number, up to 16384 rows  */
#define MPDDRC_CR_NR_11_ROW_BITS            (MPDDRC_CR_NR_11_ROW_BITS_Val << MPDDRC_CR_NR_Pos)  /**< (MPDDRC_CR) 11 bits to define the row number, up to 2048 rows Position  */
#define MPDDRC_CR_NR_12_ROW_BITS            (MPDDRC_CR_NR_12_ROW_BITS_Val << MPDDRC_CR_NR_Pos)  /**< (MPDDRC_CR) 12 bits to define the row number, up to 4096 rows Position  */
#define MPDDRC_CR_NR_13_ROW_BITS            (MPDDRC_CR_NR_13_ROW_BITS_Val << MPDDRC_CR_NR_Pos)  /**< (MPDDRC_CR) 13 bits to define the row number, up to 8192 rows Position  */
#define MPDDRC_CR_NR_14_ROW_BITS            (MPDDRC_CR_NR_14_ROW_BITS_Val << MPDDRC_CR_NR_Pos)  /**< (MPDDRC_CR) 14 bits to define the row number, up to 16384 rows Position  */
#define MPDDRC_CR_CAS_Pos                   4                                              /**< (MPDDRC_CR) CAS Latency Position */
#define MPDDRC_CR_CAS_Msk                   (_U_(0x7) << MPDDRC_CR_CAS_Pos)                /**< (MPDDRC_CR) CAS Latency Mask */
#define MPDDRC_CR_CAS(value)                (MPDDRC_CR_CAS_Msk & ((value) << MPDDRC_CR_CAS_Pos))
#define   MPDDRC_CR_CAS_DDR_CAS2_Val        _U_(0x2)                                       /**< (MPDDRC_CR) LPDDR1 CAS Latency 2  */
#define   MPDDRC_CR_CAS_DDR_CAS3_Val        _U_(0x3)                                       /**< (MPDDRC_CR) LPDDR3/DDR2/LPDDR2/LPDDR1 CAS Latency 3  */
#define   MPDDRC_CR_CAS_DDR_CAS5_Val        _U_(0x5)                                       /**< (MPDDRC_CR) DDR3 CAS Latency 5  */
#define   MPDDRC_CR_CAS_DDR_CAS6_Val        _U_(0x6)                                       /**< (MPDDRC_CR) DDR3LPDDR3 CAS Latency 6  */
#define MPDDRC_CR_CAS_DDR_CAS2              (MPDDRC_CR_CAS_DDR_CAS2_Val << MPDDRC_CR_CAS_Pos)  /**< (MPDDRC_CR) LPDDR1 CAS Latency 2 Position  */
#define MPDDRC_CR_CAS_DDR_CAS3              (MPDDRC_CR_CAS_DDR_CAS3_Val << MPDDRC_CR_CAS_Pos)  /**< (MPDDRC_CR) LPDDR3/DDR2/LPDDR2/LPDDR1 CAS Latency 3 Position  */
#define MPDDRC_CR_CAS_DDR_CAS5              (MPDDRC_CR_CAS_DDR_CAS5_Val << MPDDRC_CR_CAS_Pos)  /**< (MPDDRC_CR) DDR3 CAS Latency 5 Position  */
#define MPDDRC_CR_CAS_DDR_CAS6              (MPDDRC_CR_CAS_DDR_CAS6_Val << MPDDRC_CR_CAS_Pos)  /**< (MPDDRC_CR) DDR3LPDDR3 CAS Latency 6 Position  */
#define MPDDRC_CR_DLL_Pos                   7                                              /**< (MPDDRC_CR) Reset DLL Position */
#define MPDDRC_CR_DLL_Msk                   (_U_(0x1) << MPDDRC_CR_DLL_Pos)                /**< (MPDDRC_CR) Reset DLL Mask */
#define MPDDRC_CR_DLL                       MPDDRC_CR_DLL_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CR_DLL_Msk instead */
#define   MPDDRC_CR_DLL_RESET_DISABLED_Val  _U_(0x0)                                       /**< (MPDDRC_CR) Disable DLL reset  */
#define   MPDDRC_CR_DLL_RESET_ENABLED_Val   _U_(0x1)                                       /**< (MPDDRC_CR) Enable DLL reset  */
#define MPDDRC_CR_DLL_RESET_DISABLED        (MPDDRC_CR_DLL_RESET_DISABLED_Val << MPDDRC_CR_DLL_Pos)  /**< (MPDDRC_CR) Disable DLL reset Position  */
#define MPDDRC_CR_DLL_RESET_ENABLED         (MPDDRC_CR_DLL_RESET_ENABLED_Val << MPDDRC_CR_DLL_Pos)  /**< (MPDDRC_CR) Enable DLL reset Position  */
#define MPDDRC_CR_DIC_DS_Pos                8                                              /**< (MPDDRC_CR) Output Driver Impedance Control (Drive Strength) Position */
#define MPDDRC_CR_DIC_DS_Msk                (_U_(0x1) << MPDDRC_CR_DIC_DS_Pos)             /**< (MPDDRC_CR) Output Driver Impedance Control (Drive Strength) Mask */
#define MPDDRC_CR_DIC_DS                    MPDDRC_CR_DIC_DS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CR_DIC_DS_Msk instead */
#define   MPDDRC_CR_DIC_DS_DDR2_NORMALSTRENGTH_DDR3_RZQ6_Val _U_(0x0)                                       /**< (MPDDRC_CR) Normal drive strength (DDR2) - RZQ/6 (40 [NOM], DDR3)  */
#define   MPDDRC_CR_DIC_DS_DDR2_WEAKSTRENGTH_DDR3_RZQ7_Val _U_(0x1)                                       /**< (MPDDRC_CR) Weak drive strength (DDR2) - RZQ/7 (34 [NOM], DDR3)  */
#define MPDDRC_CR_DIC_DS_DDR2_NORMALSTRENGTH_DDR3_RZQ6 (MPDDRC_CR_DIC_DS_DDR2_NORMALSTRENGTH_DDR3_RZQ6_Val << MPDDRC_CR_DIC_DS_Pos)  /**< (MPDDRC_CR) Normal drive strength (DDR2) - RZQ/6 (40 [NOM], DDR3) Position  */
#define MPDDRC_CR_DIC_DS_DDR2_WEAKSTRENGTH_DDR3_RZQ7 (MPDDRC_CR_DIC_DS_DDR2_WEAKSTRENGTH_DDR3_RZQ7_Val << MPDDRC_CR_DIC_DS_Pos)  /**< (MPDDRC_CR) Weak drive strength (DDR2) - RZQ/7 (34 [NOM], DDR3) Position  */
#define MPDDRC_CR_DIS_DLL_Pos               9                                              /**< (MPDDRC_CR) DISABLE DLL Position */
#define MPDDRC_CR_DIS_DLL_Msk               (_U_(0x1) << MPDDRC_CR_DIS_DLL_Pos)            /**< (MPDDRC_CR) DISABLE DLL Mask */
#define MPDDRC_CR_DIS_DLL                   MPDDRC_CR_DIS_DLL_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CR_DIS_DLL_Msk instead */
#define MPDDRC_CR_ZQ_Pos                    10                                             /**< (MPDDRC_CR) ZQ Calibration Position */
#define MPDDRC_CR_ZQ_Msk                    (_U_(0x3) << MPDDRC_CR_ZQ_Pos)                 /**< (MPDDRC_CR) ZQ Calibration Mask */
#define MPDDRC_CR_ZQ(value)                 (MPDDRC_CR_ZQ_Msk & ((value) << MPDDRC_CR_ZQ_Pos))
#define   MPDDRC_CR_ZQ_INIT_Val             _U_(0x0)                                       /**< (MPDDRC_CR) Calibration command after initialization  */
#define   MPDDRC_CR_ZQ_LONG_Val             _U_(0x1)                                       /**< (MPDDRC_CR) Long calibration  */
#define   MPDDRC_CR_ZQ_SHORT_Val            _U_(0x2)                                       /**< (MPDDRC_CR) Short calibration  */
#define   MPDDRC_CR_ZQ_RESET_Val            _U_(0x3)                                       /**< (MPDDRC_CR) ZQ Reset  */
#define MPDDRC_CR_ZQ_INIT                   (MPDDRC_CR_ZQ_INIT_Val << MPDDRC_CR_ZQ_Pos)    /**< (MPDDRC_CR) Calibration command after initialization Position  */
#define MPDDRC_CR_ZQ_LONG                   (MPDDRC_CR_ZQ_LONG_Val << MPDDRC_CR_ZQ_Pos)    /**< (MPDDRC_CR) Long calibration Position  */
#define MPDDRC_CR_ZQ_SHORT                  (MPDDRC_CR_ZQ_SHORT_Val << MPDDRC_CR_ZQ_Pos)   /**< (MPDDRC_CR) Short calibration Position  */
#define MPDDRC_CR_ZQ_RESET                  (MPDDRC_CR_ZQ_RESET_Val << MPDDRC_CR_ZQ_Pos)   /**< (MPDDRC_CR) ZQ Reset Position  */
#define MPDDRC_CR_OCD_Pos                   12                                             /**< (MPDDRC_CR) Off-chip Driver Position */
#define MPDDRC_CR_OCD_Msk                   (_U_(0x7) << MPDDRC_CR_OCD_Pos)                /**< (MPDDRC_CR) Off-chip Driver Mask */
#define MPDDRC_CR_OCD(value)                (MPDDRC_CR_OCD_Msk & ((value) << MPDDRC_CR_OCD_Pos))
#define   MPDDRC_CR_OCD_DDR2_EXITCALIB_Val  _U_(0x0)                                       /**< (MPDDRC_CR) Exit from OCD Calibration mode and maintain settings  */
#define   MPDDRC_CR_OCD_DDR2_DEFAULT_CALIB_Val _U_(0x7)                                       /**< (MPDDRC_CR) OCD calibration default  */
#define MPDDRC_CR_OCD_DDR2_EXITCALIB        (MPDDRC_CR_OCD_DDR2_EXITCALIB_Val << MPDDRC_CR_OCD_Pos)  /**< (MPDDRC_CR) Exit from OCD Calibration mode and maintain settings Position  */
#define MPDDRC_CR_OCD_DDR2_DEFAULT_CALIB    (MPDDRC_CR_OCD_DDR2_DEFAULT_CALIB_Val << MPDDRC_CR_OCD_Pos)  /**< (MPDDRC_CR) OCD calibration default Position  */
#define MPDDRC_CR_DQMS_Pos                  16                                             /**< (MPDDRC_CR) Mask Data is Shared Position */
#define MPDDRC_CR_DQMS_Msk                  (_U_(0x1) << MPDDRC_CR_DQMS_Pos)               /**< (MPDDRC_CR) Mask Data is Shared Mask */
#define MPDDRC_CR_DQMS                      MPDDRC_CR_DQMS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CR_DQMS_Msk instead */
#define   MPDDRC_CR_DQMS_NOT_SHARED_Val     _U_(0x0)                                       /**< (MPDDRC_CR) DQM is not shared with another controller  */
#define   MPDDRC_CR_DQMS_SHARED_Val         _U_(0x1)                                       /**< (MPDDRC_CR) DQM is shared with another controller  */
#define MPDDRC_CR_DQMS_NOT_SHARED           (MPDDRC_CR_DQMS_NOT_SHARED_Val << MPDDRC_CR_DQMS_Pos)  /**< (MPDDRC_CR) DQM is not shared with another controller Position  */
#define MPDDRC_CR_DQMS_SHARED               (MPDDRC_CR_DQMS_SHARED_Val << MPDDRC_CR_DQMS_Pos)  /**< (MPDDRC_CR) DQM is shared with another controller Position  */
#define MPDDRC_CR_ENRDM_Pos                 17                                             /**< (MPDDRC_CR) Enable Read Measure Position */
#define MPDDRC_CR_ENRDM_Msk                 (_U_(0x1) << MPDDRC_CR_ENRDM_Pos)              /**< (MPDDRC_CR) Enable Read Measure Mask */
#define MPDDRC_CR_ENRDM                     MPDDRC_CR_ENRDM_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CR_ENRDM_Msk instead */
#define   MPDDRC_CR_ENRDM_OFF_Val           _U_(0x0)                                       /**< (MPDDRC_CR) DQS/DDR_DATA phase error correction is disabled  */
#define   MPDDRC_CR_ENRDM_ON_Val            _U_(0x1)                                       /**< (MPDDRC_CR) DQS/DDR_DATA phase error correction is enabled  */
#define MPDDRC_CR_ENRDM_OFF                 (MPDDRC_CR_ENRDM_OFF_Val << MPDDRC_CR_ENRDM_Pos)  /**< (MPDDRC_CR) DQS/DDR_DATA phase error correction is disabled Position  */
#define MPDDRC_CR_ENRDM_ON                  (MPDDRC_CR_ENRDM_ON_Val << MPDDRC_CR_ENRDM_Pos)  /**< (MPDDRC_CR) DQS/DDR_DATA phase error correction is enabled Position  */
#define MPDDRC_CR_LC_LPDDR1_Pos             19                                             /**< (MPDDRC_CR) Low-cost Low-power DDR1 Position */
#define MPDDRC_CR_LC_LPDDR1_Msk             (_U_(0x1) << MPDDRC_CR_LC_LPDDR1_Pos)          /**< (MPDDRC_CR) Low-cost Low-power DDR1 Mask */
#define MPDDRC_CR_LC_LPDDR1                 MPDDRC_CR_LC_LPDDR1_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CR_LC_LPDDR1_Msk instead */
#define   MPDDRC_CR_LC_LPDDR1_NOT_2_BANKS_Val _U_(0x0)                                       /**< (MPDDRC_CR) Any type of memory devices except of low cost, low density Low Power DDR1.  */
#define   MPDDRC_CR_LC_LPDDR1_2_BANKS_LPDDR1_Val _U_(0x1)                                       /**< (MPDDRC_CR) Low-cost and low-density low-power DDR1. These devices have a density of 32 Mbits and are organized as two internal banks. To use this feature, the user has to define the type of memory and the data bus width (see Section 8.8 "MPDDRC Memory Device Register").The 16-bit memory device is organized as 2 banks, 9 columns and 11 rows.The 32-bit memory device is organized as 2 banks, 8 columns and 11 rows.It is impossible to use two 16-bit memory devices (2 x 32 Mbits) for creating one 32-bit memory device (64 Mbits). In this case, it is recommended to use one 32-bit memory device which embeds four internal banks.  */
#define MPDDRC_CR_LC_LPDDR1_NOT_2_BANKS     (MPDDRC_CR_LC_LPDDR1_NOT_2_BANKS_Val << MPDDRC_CR_LC_LPDDR1_Pos)  /**< (MPDDRC_CR) Any type of memory devices except of low cost, low density Low Power DDR1. Position  */
#define MPDDRC_CR_LC_LPDDR1_2_BANKS_LPDDR1  (MPDDRC_CR_LC_LPDDR1_2_BANKS_LPDDR1_Val << MPDDRC_CR_LC_LPDDR1_Pos)  /**< (MPDDRC_CR) Low-cost and low-density low-power DDR1. These devices have a density of 32 Mbits and are organized as two internal banks. To use this feature, the user has to define the type of memory and the data bus width (see Section 8.8 "MPDDRC Memory Device Register").The 16-bit memory device is organized as 2 banks, 9 columns and 11 rows.The 32-bit memory device is organized as 2 banks, 8 columns and 11 rows.It is impossible to use two 16-bit memory devices (2 x 32 Mbits) for creating one 32-bit memory device (64 Mbits). In this case, it is recommended to use one 32-bit memory device which embeds four internal banks. Position  */
#define MPDDRC_CR_NB_Pos                    20                                             /**< (MPDDRC_CR) Number of Banks Position */
#define MPDDRC_CR_NB_Msk                    (_U_(0x1) << MPDDRC_CR_NB_Pos)                 /**< (MPDDRC_CR) Number of Banks Mask */
#define MPDDRC_CR_NB                        MPDDRC_CR_NB_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CR_NB_Msk instead */
#define   MPDDRC_CR_NB_4_BANKS_Val          _U_(0x0)                                       /**< (MPDDRC_CR) 4-bank memory devices  */
#define   MPDDRC_CR_NB_8_BANKS_Val          _U_(0x1)                                       /**< (MPDDRC_CR) 8 banks. Only possible when using the DDR2-SDRAM and low-power DDR2-SDRAM and DDR3-SDRAM and low-power DDR3-SDRAM devices.  */
#define MPDDRC_CR_NB_4_BANKS                (MPDDRC_CR_NB_4_BANKS_Val << MPDDRC_CR_NB_Pos)  /**< (MPDDRC_CR) 4-bank memory devices Position  */
#define MPDDRC_CR_NB_8_BANKS                (MPDDRC_CR_NB_8_BANKS_Val << MPDDRC_CR_NB_Pos)  /**< (MPDDRC_CR) 8 banks. Only possible when using the DDR2-SDRAM and low-power DDR2-SDRAM and DDR3-SDRAM and low-power DDR3-SDRAM devices. Position  */
#define MPDDRC_CR_NDQS_Pos                  21                                             /**< (MPDDRC_CR) Not DQS Position */
#define MPDDRC_CR_NDQS_Msk                  (_U_(0x1) << MPDDRC_CR_NDQS_Pos)               /**< (MPDDRC_CR) Not DQS Mask */
#define MPDDRC_CR_NDQS                      MPDDRC_CR_NDQS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CR_NDQS_Msk instead */
#define   MPDDRC_CR_NDQS_ENABLED_Val        _U_(0x0)                                       /**< (MPDDRC_CR) Not DQS is enabled  */
#define   MPDDRC_CR_NDQS_DISABLED_Val       _U_(0x1)                                       /**< (MPDDRC_CR) Not DQS is disabled  */
#define MPDDRC_CR_NDQS_ENABLED              (MPDDRC_CR_NDQS_ENABLED_Val << MPDDRC_CR_NDQS_Pos)  /**< (MPDDRC_CR) Not DQS is enabled Position  */
#define MPDDRC_CR_NDQS_DISABLED             (MPDDRC_CR_NDQS_DISABLED_Val << MPDDRC_CR_NDQS_Pos)  /**< (MPDDRC_CR) Not DQS is disabled Position  */
#define MPDDRC_CR_DECOD_Pos                 22                                             /**< (MPDDRC_CR) Type of Decoding Position */
#define MPDDRC_CR_DECOD_Msk                 (_U_(0x1) << MPDDRC_CR_DECOD_Pos)              /**< (MPDDRC_CR) Type of Decoding Mask */
#define MPDDRC_CR_DECOD                     MPDDRC_CR_DECOD_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CR_DECOD_Msk instead */
#define   MPDDRC_CR_DECOD_SEQUENTIAL_Val    _U_(0x0)                                       /**< (MPDDRC_CR) Method for address mapping where banks alternate at each last DDR-SDRAM page of the current bank.  */
#define   MPDDRC_CR_DECOD_INTERLEAVED_Val   _U_(0x1)                                       /**< (MPDDRC_CR) Method for address mapping where banks alternate at each DDR-SDRAM end of page of the current bank.  */
#define MPDDRC_CR_DECOD_SEQUENTIAL          (MPDDRC_CR_DECOD_SEQUENTIAL_Val << MPDDRC_CR_DECOD_Pos)  /**< (MPDDRC_CR) Method for address mapping where banks alternate at each last DDR-SDRAM page of the current bank. Position  */
#define MPDDRC_CR_DECOD_INTERLEAVED         (MPDDRC_CR_DECOD_INTERLEAVED_Val << MPDDRC_CR_DECOD_Pos)  /**< (MPDDRC_CR) Method for address mapping where banks alternate at each DDR-SDRAM end of page of the current bank. Position  */
#define MPDDRC_CR_UNAL_Pos                  23                                             /**< (MPDDRC_CR) Support Unaligned Access Position */
#define MPDDRC_CR_UNAL_Msk                  (_U_(0x1) << MPDDRC_CR_UNAL_Pos)               /**< (MPDDRC_CR) Support Unaligned Access Mask */
#define MPDDRC_CR_UNAL                      MPDDRC_CR_UNAL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CR_UNAL_Msk instead */
#define   MPDDRC_CR_UNAL_UNSUPPORTED_Val    _U_(0x0)                                       /**< (MPDDRC_CR) Unaligned access is not supported.  */
#define   MPDDRC_CR_UNAL_SUPPORTED_Val      _U_(0x1)                                       /**< (MPDDRC_CR) Unaligned access is supported.  */
#define MPDDRC_CR_UNAL_UNSUPPORTED          (MPDDRC_CR_UNAL_UNSUPPORTED_Val << MPDDRC_CR_UNAL_Pos)  /**< (MPDDRC_CR) Unaligned access is not supported. Position  */
#define MPDDRC_CR_UNAL_SUPPORTED            (MPDDRC_CR_UNAL_SUPPORTED_Val << MPDDRC_CR_UNAL_Pos)  /**< (MPDDRC_CR) Unaligned access is supported. Position  */
#define MPDDRC_CR_MASK                      _U_(0xFB7FFF)                                  /**< \deprecated (MPDDRC_CR) Register MASK  (Use MPDDRC_CR_Msk instead)  */
#define MPDDRC_CR_Msk                       _U_(0xFB7FFF)                                  /**< (MPDDRC_CR) Register Mask  */

#define MPDDRC_CR_LC_LPDDR_Pos              19                                             /**< (MPDDRC_CR Position) Low-cost Low-power DDRx */
#define MPDDRC_CR_LC_LPDDR_Msk              (_U_(0x1) << MPDDRC_CR_LC_LPDDR_Pos)           /**< (MPDDRC_CR Mask) LC_LPDDR */
#define MPDDRC_CR_LC_LPDDR(value)           (MPDDRC_CR_LC_LPDDR_Msk & ((value) << MPDDRC_CR_LC_LPDDR_Pos))  

/* -------- MPDDRC_TPR0 : (MPDDRC Offset: 0x0c) (R/W 32) Timing Parameter 0 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TRAS:4;                    /**< bit:   0..3  Active to Precharge Delay                */
    uint32_t TRCD:4;                    /**< bit:   4..7  Row to Column Delay                      */
    uint32_t TWR:4;                     /**< bit:  8..11  Write Recovery Delay                     */
    uint32_t TRC:4;                     /**< bit: 12..15  Row Cycle Delay                          */
    uint32_t TRP:4;                     /**< bit: 16..19  Row Precharge Delay                      */
    uint32_t TRRD:4;                    /**< bit: 20..23  Active BankA to Active BankB             */
    uint32_t TWTR:4;                    /**< bit: 24..27  Internal Write to Read Delay             */
    uint32_t TMRD:4;                    /**< bit: 28..31  Load Mode Register Command to Activate or Refresh Command */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_TPR0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_TPR0_OFFSET                  (0x0C)                                        /**<  (MPDDRC_TPR0) Timing Parameter 0 Register  Offset */

#define MPDDRC_TPR0_TRAS_Pos                0                                              /**< (MPDDRC_TPR0) Active to Precharge Delay Position */
#define MPDDRC_TPR0_TRAS_Msk                (_U_(0xF) << MPDDRC_TPR0_TRAS_Pos)             /**< (MPDDRC_TPR0) Active to Precharge Delay Mask */
#define MPDDRC_TPR0_TRAS(value)             (MPDDRC_TPR0_TRAS_Msk & ((value) << MPDDRC_TPR0_TRAS_Pos))
#define MPDDRC_TPR0_TRCD_Pos                4                                              /**< (MPDDRC_TPR0) Row to Column Delay Position */
#define MPDDRC_TPR0_TRCD_Msk                (_U_(0xF) << MPDDRC_TPR0_TRCD_Pos)             /**< (MPDDRC_TPR0) Row to Column Delay Mask */
#define MPDDRC_TPR0_TRCD(value)             (MPDDRC_TPR0_TRCD_Msk & ((value) << MPDDRC_TPR0_TRCD_Pos))
#define MPDDRC_TPR0_TWR_Pos                 8                                              /**< (MPDDRC_TPR0) Write Recovery Delay Position */
#define MPDDRC_TPR0_TWR_Msk                 (_U_(0xF) << MPDDRC_TPR0_TWR_Pos)              /**< (MPDDRC_TPR0) Write Recovery Delay Mask */
#define MPDDRC_TPR0_TWR(value)              (MPDDRC_TPR0_TWR_Msk & ((value) << MPDDRC_TPR0_TWR_Pos))
#define MPDDRC_TPR0_TRC_Pos                 12                                             /**< (MPDDRC_TPR0) Row Cycle Delay Position */
#define MPDDRC_TPR0_TRC_Msk                 (_U_(0xF) << MPDDRC_TPR0_TRC_Pos)              /**< (MPDDRC_TPR0) Row Cycle Delay Mask */
#define MPDDRC_TPR0_TRC(value)              (MPDDRC_TPR0_TRC_Msk & ((value) << MPDDRC_TPR0_TRC_Pos))
#define MPDDRC_TPR0_TRP_Pos                 16                                             /**< (MPDDRC_TPR0) Row Precharge Delay Position */
#define MPDDRC_TPR0_TRP_Msk                 (_U_(0xF) << MPDDRC_TPR0_TRP_Pos)              /**< (MPDDRC_TPR0) Row Precharge Delay Mask */
#define MPDDRC_TPR0_TRP(value)              (MPDDRC_TPR0_TRP_Msk & ((value) << MPDDRC_TPR0_TRP_Pos))
#define MPDDRC_TPR0_TRRD_Pos                20                                             /**< (MPDDRC_TPR0) Active BankA to Active BankB Position */
#define MPDDRC_TPR0_TRRD_Msk                (_U_(0xF) << MPDDRC_TPR0_TRRD_Pos)             /**< (MPDDRC_TPR0) Active BankA to Active BankB Mask */
#define MPDDRC_TPR0_TRRD(value)             (MPDDRC_TPR0_TRRD_Msk & ((value) << MPDDRC_TPR0_TRRD_Pos))
#define MPDDRC_TPR0_TWTR_Pos                24                                             /**< (MPDDRC_TPR0) Internal Write to Read Delay Position */
#define MPDDRC_TPR0_TWTR_Msk                (_U_(0xF) << MPDDRC_TPR0_TWTR_Pos)             /**< (MPDDRC_TPR0) Internal Write to Read Delay Mask */
#define MPDDRC_TPR0_TWTR(value)             (MPDDRC_TPR0_TWTR_Msk & ((value) << MPDDRC_TPR0_TWTR_Pos))
#define MPDDRC_TPR0_TMRD_Pos                28                                             /**< (MPDDRC_TPR0) Load Mode Register Command to Activate or Refresh Command Position */
#define MPDDRC_TPR0_TMRD_Msk                (_U_(0xF) << MPDDRC_TPR0_TMRD_Pos)             /**< (MPDDRC_TPR0) Load Mode Register Command to Activate or Refresh Command Mask */
#define MPDDRC_TPR0_TMRD(value)             (MPDDRC_TPR0_TMRD_Msk & ((value) << MPDDRC_TPR0_TMRD_Pos))
#define MPDDRC_TPR0_MASK                    _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_TPR0) Register MASK  (Use MPDDRC_TPR0_Msk instead)  */
#define MPDDRC_TPR0_Msk                     _U_(0xFFFFFFFF)                                /**< (MPDDRC_TPR0) Register Mask  */


/* -------- MPDDRC_TPR1 : (MPDDRC Offset: 0x10) (R/W 32) Timing Parameter 1 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TRFC:7;                    /**< bit:   0..6  Row Cycle Delay                          */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t TXSNR:8;                   /**< bit:  8..15  Exit Self-refresh Delay to Non-Read Command */
    uint32_t TXSRD:8;                   /**< bit: 16..23  Exit Self-refresh Delay to Read Command  */
    uint32_t TXP:4;                     /**< bit: 24..27  Exit Powerdown Delay to First Command    */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_TPR1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_TPR1_OFFSET                  (0x10)                                        /**<  (MPDDRC_TPR1) Timing Parameter 1 Register  Offset */

#define MPDDRC_TPR1_TRFC_Pos                0                                              /**< (MPDDRC_TPR1) Row Cycle Delay Position */
#define MPDDRC_TPR1_TRFC_Msk                (_U_(0x7F) << MPDDRC_TPR1_TRFC_Pos)            /**< (MPDDRC_TPR1) Row Cycle Delay Mask */
#define MPDDRC_TPR1_TRFC(value)             (MPDDRC_TPR1_TRFC_Msk & ((value) << MPDDRC_TPR1_TRFC_Pos))
#define MPDDRC_TPR1_TXSNR_Pos               8                                              /**< (MPDDRC_TPR1) Exit Self-refresh Delay to Non-Read Command Position */
#define MPDDRC_TPR1_TXSNR_Msk               (_U_(0xFF) << MPDDRC_TPR1_TXSNR_Pos)           /**< (MPDDRC_TPR1) Exit Self-refresh Delay to Non-Read Command Mask */
#define MPDDRC_TPR1_TXSNR(value)            (MPDDRC_TPR1_TXSNR_Msk & ((value) << MPDDRC_TPR1_TXSNR_Pos))
#define MPDDRC_TPR1_TXSRD_Pos               16                                             /**< (MPDDRC_TPR1) Exit Self-refresh Delay to Read Command Position */
#define MPDDRC_TPR1_TXSRD_Msk               (_U_(0xFF) << MPDDRC_TPR1_TXSRD_Pos)           /**< (MPDDRC_TPR1) Exit Self-refresh Delay to Read Command Mask */
#define MPDDRC_TPR1_TXSRD(value)            (MPDDRC_TPR1_TXSRD_Msk & ((value) << MPDDRC_TPR1_TXSRD_Pos))
#define MPDDRC_TPR1_TXP_Pos                 24                                             /**< (MPDDRC_TPR1) Exit Powerdown Delay to First Command Position */
#define MPDDRC_TPR1_TXP_Msk                 (_U_(0xF) << MPDDRC_TPR1_TXP_Pos)              /**< (MPDDRC_TPR1) Exit Powerdown Delay to First Command Mask */
#define MPDDRC_TPR1_TXP(value)              (MPDDRC_TPR1_TXP_Msk & ((value) << MPDDRC_TPR1_TXP_Pos))
#define MPDDRC_TPR1_MASK                    _U_(0xFFFFF7F)                                 /**< \deprecated (MPDDRC_TPR1) Register MASK  (Use MPDDRC_TPR1_Msk instead)  */
#define MPDDRC_TPR1_Msk                     _U_(0xFFFFF7F)                                 /**< (MPDDRC_TPR1) Register Mask  */


/* -------- MPDDRC_TPR2 : (MPDDRC Offset: 0x14) (R/W 32) Timing Parameter 2 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TXARD:4;                   /**< bit:   0..3  Exit Active Power Down Delay to Read Command in Mode "Fast Exit" */
    uint32_t TXARDS:4;                  /**< bit:   4..7  Exit Active Power Down Delay to Read Command in Mode "Slow Exit" */
    uint32_t TRPA:4;                    /**< bit:  8..11  Row Precharge All Delay                  */
    uint32_t TRTP:3;                    /**< bit: 12..14  Read to Precharge                        */
    uint32_t :1;                        /**< bit:     15  Reserved */
    uint32_t TFAW:4;                    /**< bit: 16..19  Four Active Windows                      */
    uint32_t :12;                       /**< bit: 20..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_TPR2_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_TPR2_OFFSET                  (0x14)                                        /**<  (MPDDRC_TPR2) Timing Parameter 2 Register  Offset */

#define MPDDRC_TPR2_TXARD_Pos               0                                              /**< (MPDDRC_TPR2) Exit Active Power Down Delay to Read Command in Mode "Fast Exit" Position */
#define MPDDRC_TPR2_TXARD_Msk               (_U_(0xF) << MPDDRC_TPR2_TXARD_Pos)            /**< (MPDDRC_TPR2) Exit Active Power Down Delay to Read Command in Mode "Fast Exit" Mask */
#define MPDDRC_TPR2_TXARD(value)            (MPDDRC_TPR2_TXARD_Msk & ((value) << MPDDRC_TPR2_TXARD_Pos))
#define MPDDRC_TPR2_TXARDS_Pos              4                                              /**< (MPDDRC_TPR2) Exit Active Power Down Delay to Read Command in Mode "Slow Exit" Position */
#define MPDDRC_TPR2_TXARDS_Msk              (_U_(0xF) << MPDDRC_TPR2_TXARDS_Pos)           /**< (MPDDRC_TPR2) Exit Active Power Down Delay to Read Command in Mode "Slow Exit" Mask */
#define MPDDRC_TPR2_TXARDS(value)           (MPDDRC_TPR2_TXARDS_Msk & ((value) << MPDDRC_TPR2_TXARDS_Pos))
#define MPDDRC_TPR2_TRPA_Pos                8                                              /**< (MPDDRC_TPR2) Row Precharge All Delay Position */
#define MPDDRC_TPR2_TRPA_Msk                (_U_(0xF) << MPDDRC_TPR2_TRPA_Pos)             /**< (MPDDRC_TPR2) Row Precharge All Delay Mask */
#define MPDDRC_TPR2_TRPA(value)             (MPDDRC_TPR2_TRPA_Msk & ((value) << MPDDRC_TPR2_TRPA_Pos))
#define MPDDRC_TPR2_TRTP_Pos                12                                             /**< (MPDDRC_TPR2) Read to Precharge Position */
#define MPDDRC_TPR2_TRTP_Msk                (_U_(0x7) << MPDDRC_TPR2_TRTP_Pos)             /**< (MPDDRC_TPR2) Read to Precharge Mask */
#define MPDDRC_TPR2_TRTP(value)             (MPDDRC_TPR2_TRTP_Msk & ((value) << MPDDRC_TPR2_TRTP_Pos))
#define MPDDRC_TPR2_TFAW_Pos                16                                             /**< (MPDDRC_TPR2) Four Active Windows Position */
#define MPDDRC_TPR2_TFAW_Msk                (_U_(0xF) << MPDDRC_TPR2_TFAW_Pos)             /**< (MPDDRC_TPR2) Four Active Windows Mask */
#define MPDDRC_TPR2_TFAW(value)             (MPDDRC_TPR2_TFAW_Msk & ((value) << MPDDRC_TPR2_TFAW_Pos))
#define MPDDRC_TPR2_MASK                    _U_(0xF7FFF)                                   /**< \deprecated (MPDDRC_TPR2) Register MASK  (Use MPDDRC_TPR2_Msk instead)  */
#define MPDDRC_TPR2_Msk                     _U_(0xF7FFF)                                   /**< (MPDDRC_TPR2) Register Mask  */


/* -------- MPDDRC_LPR : (MPDDRC Offset: 0x1c) (R/W 32) Low-Power Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t LPCB:2;                    /**< bit:   0..1  Low-power Command Bit                    */
    uint32_t CLK_FR:1;                  /**< bit:      2  Clock Frozen Command Bit                 */
    uint32_t LPDDR2_LPDDR3_PWOFF:1;     /**< bit:      3  LPDDR2 - LPDDR3 Power Off Bit            */
    uint32_t PASR:3;                    /**< bit:   4..6  Partial Array Self-refresh               */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t DS:3;                      /**< bit:  8..10  Drive Strength                           */
    uint32_t :1;                        /**< bit:     11  Reserved */
    uint32_t TIMEOUT:2;                 /**< bit: 12..13  Time Between Last Transfer and Low-Power Mode */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t APDE:1;                    /**< bit:     16  Active Power Down Exit Time              */
    uint32_t :3;                        /**< bit: 17..19  Reserved */
    uint32_t UPD_MR:2;                  /**< bit: 20..21  Update Load Mode Register and Extended Mode Register */
    uint32_t :2;                        /**< bit: 22..23  Reserved */
    uint32_t CHG_FRQ:1;                 /**< bit:     24  Change Clock Frequency During Self-refresh Mode */
    uint32_t SELF_DONE:1;               /**< bit:     25  Self-refresh is done (read-only)         */
    uint32_t :6;                        /**< bit: 26..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_LPR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_LPR_OFFSET                   (0x1C)                                        /**<  (MPDDRC_LPR) Low-Power Register  Offset */

#define MPDDRC_LPR_LPCB_Pos                 0                                              /**< (MPDDRC_LPR) Low-power Command Bit Position */
#define MPDDRC_LPR_LPCB_Msk                 (_U_(0x3) << MPDDRC_LPR_LPCB_Pos)              /**< (MPDDRC_LPR) Low-power Command Bit Mask */
#define MPDDRC_LPR_LPCB(value)              (MPDDRC_LPR_LPCB_Msk & ((value) << MPDDRC_LPR_LPCB_Pos))
#define   MPDDRC_LPR_LPCB_NOLOWPOWER_Val    _U_(0x0)                                       /**< (MPDDRC_LPR) Low-power feature is inhibited. No Powerdown, Self-refresh and Deep power modes are issued to the DDR-SDRAM device.  */
#define   MPDDRC_LPR_LPCB_SELFREFRESH_Val   _U_(0x1)                                       /**< (MPDDRC_LPR) The MPDDRC issues a self-refresh command to the DDR-SDRAM device, the clock(s) is/are deactivated and the CKE signal is set low. The DDR-SDRAM device leaves the Self-refresh mode when accessed and reenters it after the access.  */
#define   MPDDRC_LPR_LPCB_POWERDOWN_Val     _U_(0x2)                                       /**< (MPDDRC_LPR) The MPDDRC issues a Powerdown command to the DDR-SDRAM device after each access, the CKE signal is set low. The DDR-SDRAM device leaves the Powerdown mode when accessed and reenters it after the access.  */
#define   MPDDRC_LPR_LPCB_DEEPPOWERDOWN_Val _U_(0x3)                                       /**< (MPDDRC_LPR) The MPDDRC issues a Deep Powerdown command to the low-power DDR-SDRAM device.  */
#define MPDDRC_LPR_LPCB_NOLOWPOWER          (MPDDRC_LPR_LPCB_NOLOWPOWER_Val << MPDDRC_LPR_LPCB_Pos)  /**< (MPDDRC_LPR) Low-power feature is inhibited. No Powerdown, Self-refresh and Deep power modes are issued to the DDR-SDRAM device. Position  */
#define MPDDRC_LPR_LPCB_SELFREFRESH         (MPDDRC_LPR_LPCB_SELFREFRESH_Val << MPDDRC_LPR_LPCB_Pos)  /**< (MPDDRC_LPR) The MPDDRC issues a self-refresh command to the DDR-SDRAM device, the clock(s) is/are deactivated and the CKE signal is set low. The DDR-SDRAM device leaves the Self-refresh mode when accessed and reenters it after the access. Position  */
#define MPDDRC_LPR_LPCB_POWERDOWN           (MPDDRC_LPR_LPCB_POWERDOWN_Val << MPDDRC_LPR_LPCB_Pos)  /**< (MPDDRC_LPR) The MPDDRC issues a Powerdown command to the DDR-SDRAM device after each access, the CKE signal is set low. The DDR-SDRAM device leaves the Powerdown mode when accessed and reenters it after the access. Position  */
#define MPDDRC_LPR_LPCB_DEEPPOWERDOWN       (MPDDRC_LPR_LPCB_DEEPPOWERDOWN_Val << MPDDRC_LPR_LPCB_Pos)  /**< (MPDDRC_LPR) The MPDDRC issues a Deep Powerdown command to the low-power DDR-SDRAM device. Position  */
#define MPDDRC_LPR_CLK_FR_Pos               2                                              /**< (MPDDRC_LPR) Clock Frozen Command Bit Position */
#define MPDDRC_LPR_CLK_FR_Msk               (_U_(0x1) << MPDDRC_LPR_CLK_FR_Pos)            /**< (MPDDRC_LPR) Clock Frozen Command Bit Mask */
#define MPDDRC_LPR_CLK_FR                   MPDDRC_LPR_CLK_FR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_LPR_CLK_FR_Msk instead */
#define   MPDDRC_LPR_CLK_FR_DISABLED_Val    _U_(0x0)                                       /**< (MPDDRC_LPR) Clock(s) is/are not frozen.  */
#define   MPDDRC_LPR_CLK_FR_ENABLED_Val     _U_(0x1)                                       /**< (MPDDRC_LPR) Clock(s) is/are frozen.  */
#define MPDDRC_LPR_CLK_FR_DISABLED          (MPDDRC_LPR_CLK_FR_DISABLED_Val << MPDDRC_LPR_CLK_FR_Pos)  /**< (MPDDRC_LPR) Clock(s) is/are not frozen. Position  */
#define MPDDRC_LPR_CLK_FR_ENABLED           (MPDDRC_LPR_CLK_FR_ENABLED_Val << MPDDRC_LPR_CLK_FR_Pos)  /**< (MPDDRC_LPR) Clock(s) is/are frozen. Position  */
#define MPDDRC_LPR_LPDDR2_LPDDR3_PWOFF_Pos  3                                              /**< (MPDDRC_LPR) LPDDR2 - LPDDR3 Power Off Bit Position */
#define MPDDRC_LPR_LPDDR2_LPDDR3_PWOFF_Msk  (_U_(0x1) << MPDDRC_LPR_LPDDR2_LPDDR3_PWOFF_Pos)  /**< (MPDDRC_LPR) LPDDR2 - LPDDR3 Power Off Bit Mask */
#define MPDDRC_LPR_LPDDR2_LPDDR3_PWOFF      MPDDRC_LPR_LPDDR2_LPDDR3_PWOFF_Msk             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_LPR_LPDDR2_LPDDR3_PWOFF_Msk instead */
#define   MPDDRC_LPR_LPDDR2_LPDDR3_PWOFF_DISABLED_Val _U_(0x0)                                       /**< (MPDDRC_LPR) No power-off sequence applied to LPDDR2/LPDDR3.  */
#define   MPDDRC_LPR_LPDDR2_LPDDR3_PWOFF_ENABLED_Val _U_(0x1)                                       /**< (MPDDRC_LPR) A power-off sequence is applied to the LPDDR2/LPDDR3 device. CKE is forced low.  */
#define MPDDRC_LPR_LPDDR2_LPDDR3_PWOFF_DISABLED (MPDDRC_LPR_LPDDR2_LPDDR3_PWOFF_DISABLED_Val << MPDDRC_LPR_LPDDR2_LPDDR3_PWOFF_Pos)  /**< (MPDDRC_LPR) No power-off sequence applied to LPDDR2/LPDDR3. Position  */
#define MPDDRC_LPR_LPDDR2_LPDDR3_PWOFF_ENABLED (MPDDRC_LPR_LPDDR2_LPDDR3_PWOFF_ENABLED_Val << MPDDRC_LPR_LPDDR2_LPDDR3_PWOFF_Pos)  /**< (MPDDRC_LPR) A power-off sequence is applied to the LPDDR2/LPDDR3 device. CKE is forced low. Position  */
#define MPDDRC_LPR_PASR_Pos                 4                                              /**< (MPDDRC_LPR) Partial Array Self-refresh Position */
#define MPDDRC_LPR_PASR_Msk                 (_U_(0x7) << MPDDRC_LPR_PASR_Pos)              /**< (MPDDRC_LPR) Partial Array Self-refresh Mask */
#define MPDDRC_LPR_PASR(value)              (MPDDRC_LPR_PASR_Msk & ((value) << MPDDRC_LPR_PASR_Pos))
#define MPDDRC_LPR_DS_Pos                   8                                              /**< (MPDDRC_LPR) Drive Strength Position */
#define MPDDRC_LPR_DS_Msk                   (_U_(0x7) << MPDDRC_LPR_DS_Pos)                /**< (MPDDRC_LPR) Drive Strength Mask */
#define MPDDRC_LPR_DS(value)                (MPDDRC_LPR_DS_Msk & ((value) << MPDDRC_LPR_DS_Pos))
#define   MPDDRC_LPR_DS_DS_FULL_Val         _U_(0x0)                                       /**< (MPDDRC_LPR) Full drive strength  */
#define   MPDDRC_LPR_DS_DS_HALF_Val         _U_(0x1)                                       /**< (MPDDRC_LPR) Half drive strength  */
#define   MPDDRC_LPR_DS_DS_QUARTER_Val      _U_(0x2)                                       /**< (MPDDRC_LPR) Quarter drive strength  */
#define   MPDDRC_LPR_DS_DS_OCTANT_Val       _U_(0x3)                                       /**< (MPDDRC_LPR) Octant drive strength  */
#define MPDDRC_LPR_DS_DS_FULL               (MPDDRC_LPR_DS_DS_FULL_Val << MPDDRC_LPR_DS_Pos)  /**< (MPDDRC_LPR) Full drive strength Position  */
#define MPDDRC_LPR_DS_DS_HALF               (MPDDRC_LPR_DS_DS_HALF_Val << MPDDRC_LPR_DS_Pos)  /**< (MPDDRC_LPR) Half drive strength Position  */
#define MPDDRC_LPR_DS_DS_QUARTER            (MPDDRC_LPR_DS_DS_QUARTER_Val << MPDDRC_LPR_DS_Pos)  /**< (MPDDRC_LPR) Quarter drive strength Position  */
#define MPDDRC_LPR_DS_DS_OCTANT             (MPDDRC_LPR_DS_DS_OCTANT_Val << MPDDRC_LPR_DS_Pos)  /**< (MPDDRC_LPR) Octant drive strength Position  */
#define MPDDRC_LPR_TIMEOUT_Pos              12                                             /**< (MPDDRC_LPR) Time Between Last Transfer and Low-Power Mode Position */
#define MPDDRC_LPR_TIMEOUT_Msk              (_U_(0x3) << MPDDRC_LPR_TIMEOUT_Pos)           /**< (MPDDRC_LPR) Time Between Last Transfer and Low-Power Mode Mask */
#define MPDDRC_LPR_TIMEOUT(value)           (MPDDRC_LPR_TIMEOUT_Msk & ((value) << MPDDRC_LPR_TIMEOUT_Pos))
#define   MPDDRC_LPR_TIMEOUT_NONE_Val       _U_(0x0)                                       /**< (MPDDRC_LPR) SDRAM Low-power mode is activated immediately after the end of the last transfer.  */
#define   MPDDRC_LPR_TIMEOUT_DELAY_64_CLK_Val _U_(0x1)                                       /**< (MPDDRC_LPR) SDRAM Low-power mode is activated 64 clock cycles after the end of the last transfer.  */
#define   MPDDRC_LPR_TIMEOUT_DELAY_128_CLK_Val _U_(0x2)                                       /**< (MPDDRC_LPR) SDRAM Low-power mode is activated 128 clock cycles after the end of the last transfer.  */
#define MPDDRC_LPR_TIMEOUT_NONE             (MPDDRC_LPR_TIMEOUT_NONE_Val << MPDDRC_LPR_TIMEOUT_Pos)  /**< (MPDDRC_LPR) SDRAM Low-power mode is activated immediately after the end of the last transfer. Position  */
#define MPDDRC_LPR_TIMEOUT_DELAY_64_CLK     (MPDDRC_LPR_TIMEOUT_DELAY_64_CLK_Val << MPDDRC_LPR_TIMEOUT_Pos)  /**< (MPDDRC_LPR) SDRAM Low-power mode is activated 64 clock cycles after the end of the last transfer. Position  */
#define MPDDRC_LPR_TIMEOUT_DELAY_128_CLK    (MPDDRC_LPR_TIMEOUT_DELAY_128_CLK_Val << MPDDRC_LPR_TIMEOUT_Pos)  /**< (MPDDRC_LPR) SDRAM Low-power mode is activated 128 clock cycles after the end of the last transfer. Position  */
#define MPDDRC_LPR_APDE_Pos                 16                                             /**< (MPDDRC_LPR) Active Power Down Exit Time Position */
#define MPDDRC_LPR_APDE_Msk                 (_U_(0x1) << MPDDRC_LPR_APDE_Pos)              /**< (MPDDRC_LPR) Active Power Down Exit Time Mask */
#define MPDDRC_LPR_APDE                     MPDDRC_LPR_APDE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_LPR_APDE_Msk instead */
#define   MPDDRC_LPR_APDE_DDR2_FAST_EXIT_Val _U_(0x0)                                       /**< (MPDDRC_LPR) Fast Exit from Power Down. DDR2-SDRAM and DDR3-SDRAM devices only.  */
#define   MPDDRC_LPR_APDE_DDR2_SLOW_EXIT_Val _U_(0x1)                                       /**< (MPDDRC_LPR) Slow Exit from Power Down. DDR2-SDRAM and DDR3-SDRAM devices only.  */
#define MPDDRC_LPR_APDE_DDR2_FAST_EXIT      (MPDDRC_LPR_APDE_DDR2_FAST_EXIT_Val << MPDDRC_LPR_APDE_Pos)  /**< (MPDDRC_LPR) Fast Exit from Power Down. DDR2-SDRAM and DDR3-SDRAM devices only. Position  */
#define MPDDRC_LPR_APDE_DDR2_SLOW_EXIT      (MPDDRC_LPR_APDE_DDR2_SLOW_EXIT_Val << MPDDRC_LPR_APDE_Pos)  /**< (MPDDRC_LPR) Slow Exit from Power Down. DDR2-SDRAM and DDR3-SDRAM devices only. Position  */
#define MPDDRC_LPR_UPD_MR_Pos               20                                             /**< (MPDDRC_LPR) Update Load Mode Register and Extended Mode Register Position */
#define MPDDRC_LPR_UPD_MR_Msk               (_U_(0x3) << MPDDRC_LPR_UPD_MR_Pos)            /**< (MPDDRC_LPR) Update Load Mode Register and Extended Mode Register Mask */
#define MPDDRC_LPR_UPD_MR(value)            (MPDDRC_LPR_UPD_MR_Msk & ((value) << MPDDRC_LPR_UPD_MR_Pos))
#define   MPDDRC_LPR_UPD_MR_NO_UPDATE_Val   _U_(0x0)                                       /**< (MPDDRC_LPR) Update of Load Mode and Extended Mode registers is disabled.  */
#define   MPDDRC_LPR_UPD_MR_UPDATE_SHAREDBUS_Val _U_(0x1)                                       /**< (MPDDRC_LPR) MPDDRC shares an external bus. Automatic update is done during a refresh command and a pending read or write access in the SDRAM device.  */
#define   MPDDRC_LPR_UPD_MR_UPDATE_NOSHAREDBUS_Val _U_(0x2)                                       /**< (MPDDRC_LPR) MPDDRC does not share an external bus. Automatic update is done before entering Self-refresh mode.  */
#define MPDDRC_LPR_UPD_MR_NO_UPDATE         (MPDDRC_LPR_UPD_MR_NO_UPDATE_Val << MPDDRC_LPR_UPD_MR_Pos)  /**< (MPDDRC_LPR) Update of Load Mode and Extended Mode registers is disabled. Position  */
#define MPDDRC_LPR_UPD_MR_UPDATE_SHAREDBUS  (MPDDRC_LPR_UPD_MR_UPDATE_SHAREDBUS_Val << MPDDRC_LPR_UPD_MR_Pos)  /**< (MPDDRC_LPR) MPDDRC shares an external bus. Automatic update is done during a refresh command and a pending read or write access in the SDRAM device. Position  */
#define MPDDRC_LPR_UPD_MR_UPDATE_NOSHAREDBUS (MPDDRC_LPR_UPD_MR_UPDATE_NOSHAREDBUS_Val << MPDDRC_LPR_UPD_MR_Pos)  /**< (MPDDRC_LPR) MPDDRC does not share an external bus. Automatic update is done before entering Self-refresh mode. Position  */
#define MPDDRC_LPR_CHG_FRQ_Pos              24                                             /**< (MPDDRC_LPR) Change Clock Frequency During Self-refresh Mode Position */
#define MPDDRC_LPR_CHG_FRQ_Msk              (_U_(0x1) << MPDDRC_LPR_CHG_FRQ_Pos)           /**< (MPDDRC_LPR) Change Clock Frequency During Self-refresh Mode Mask */
#define MPDDRC_LPR_CHG_FRQ                  MPDDRC_LPR_CHG_FRQ_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_LPR_CHG_FRQ_Msk instead */
#define MPDDRC_LPR_SELF_DONE_Pos            25                                             /**< (MPDDRC_LPR) Self-refresh is done (read-only) Position */
#define MPDDRC_LPR_SELF_DONE_Msk            (_U_(0x1) << MPDDRC_LPR_SELF_DONE_Pos)         /**< (MPDDRC_LPR) Self-refresh is done (read-only) Mask */
#define MPDDRC_LPR_SELF_DONE                MPDDRC_LPR_SELF_DONE_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_LPR_SELF_DONE_Msk instead */
#define MPDDRC_LPR_MASK                     _U_(0x331377F)                                 /**< \deprecated (MPDDRC_LPR) Register MASK  (Use MPDDRC_LPR_Msk instead)  */
#define MPDDRC_LPR_Msk                      _U_(0x331377F)                                 /**< (MPDDRC_LPR) Register Mask  */


/* -------- MPDDRC_MD : (MPDDRC Offset: 0x20) (R/W 32) Memory Device Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MD:3;                      /**< bit:   0..2  Memory Device                            */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t DBW:1;                     /**< bit:      4  Data Bus Width                           */
    uint32_t :1;                        /**< bit:      5  Reserved */
    uint32_t WL:1;                      /**< bit:      6  Write Latency (read-only)                */
    uint32_t RL3:1;                     /**< bit:      7  Read Latency 3 Option Support (read-only) */
    uint32_t MANU_ID:8;                 /**< bit:  8..15  Manufacturer Identification (read-only)  */
    uint32_t REV_ID:8;                  /**< bit: 16..23  Revision Identification (read-only)      */
    uint32_t TYPE:2;                    /**< bit: 24..25  DRAM Architecture (read-only)            */
    uint32_t DENSITY:4;                 /**< bit: 26..29  Density of Memory (read-only)            */
    uint32_t IO_WIDTH:2;                /**< bit: 30..31  Width of Memory (read-only)              */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :7;                        /**< bit:   0..6  Reserved */
    uint32_t RL:1;                      /**< bit:      7  Read Latency 3 Option Support (read-only) */
    uint32_t :24;                       /**< bit:  8..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_MD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_MD_OFFSET                    (0x20)                                        /**<  (MPDDRC_MD) Memory Device Register  Offset */

#define MPDDRC_MD_MD_Pos                    0                                              /**< (MPDDRC_MD) Memory Device Position */
#define MPDDRC_MD_MD_Msk                    (_U_(0x7) << MPDDRC_MD_MD_Pos)                 /**< (MPDDRC_MD) Memory Device Mask */
#define MPDDRC_MD_MD(value)                 (MPDDRC_MD_MD_Msk & ((value) << MPDDRC_MD_MD_Pos))
#define   MPDDRC_MD_MD_LPDDR_SDRAM_Val      _U_(0x3)                                       /**< (MPDDRC_MD) Low-power DDR1-SDRAM  */
#define   MPDDRC_MD_MD_DDR3_SDRAM_Val       _U_(0x4)                                       /**< (MPDDRC_MD) DDR3-SDRAM  */
#define   MPDDRC_MD_MD_LPDDR3_SDRAM_Val     _U_(0x5)                                       /**< (MPDDRC_MD) Low-power DDR3-SDRAM  */
#define   MPDDRC_MD_MD_DDR2_SDRAM_Val       _U_(0x6)                                       /**< (MPDDRC_MD) DDR2-SDRAM  */
#define   MPDDRC_MD_MD_LPDDR2_SDRAM_Val     _U_(0x7)                                       /**< (MPDDRC_MD) Low-power DDR2-SDRAM  */
#define MPDDRC_MD_MD_LPDDR_SDRAM            (MPDDRC_MD_MD_LPDDR_SDRAM_Val << MPDDRC_MD_MD_Pos)  /**< (MPDDRC_MD) Low-power DDR1-SDRAM Position  */
#define MPDDRC_MD_MD_DDR3_SDRAM             (MPDDRC_MD_MD_DDR3_SDRAM_Val << MPDDRC_MD_MD_Pos)  /**< (MPDDRC_MD) DDR3-SDRAM Position  */
#define MPDDRC_MD_MD_LPDDR3_SDRAM           (MPDDRC_MD_MD_LPDDR3_SDRAM_Val << MPDDRC_MD_MD_Pos)  /**< (MPDDRC_MD) Low-power DDR3-SDRAM Position  */
#define MPDDRC_MD_MD_DDR2_SDRAM             (MPDDRC_MD_MD_DDR2_SDRAM_Val << MPDDRC_MD_MD_Pos)  /**< (MPDDRC_MD) DDR2-SDRAM Position  */
#define MPDDRC_MD_MD_LPDDR2_SDRAM           (MPDDRC_MD_MD_LPDDR2_SDRAM_Val << MPDDRC_MD_MD_Pos)  /**< (MPDDRC_MD) Low-power DDR2-SDRAM Position  */
#define MPDDRC_MD_DBW_Pos                   4                                              /**< (MPDDRC_MD) Data Bus Width Position */
#define MPDDRC_MD_DBW_Msk                   (_U_(0x1) << MPDDRC_MD_DBW_Pos)                /**< (MPDDRC_MD) Data Bus Width Mask */
#define MPDDRC_MD_DBW                       MPDDRC_MD_DBW_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_MD_DBW_Msk instead */
#define   MPDDRC_MD_DBW_DBW_32_BITS_Val     _U_(0x0)                                       /**< (MPDDRC_MD) Data bus width is 32 bits  */
#define   MPDDRC_MD_DBW_DBW_16_BITS_Val     _U_(0x1)                                       /**< (MPDDRC_MD) Data bus width is 16 bits.  */
#define MPDDRC_MD_DBW_DBW_32_BITS           (MPDDRC_MD_DBW_DBW_32_BITS_Val << MPDDRC_MD_DBW_Pos)  /**< (MPDDRC_MD) Data bus width is 32 bits Position  */
#define MPDDRC_MD_DBW_DBW_16_BITS           (MPDDRC_MD_DBW_DBW_16_BITS_Val << MPDDRC_MD_DBW_Pos)  /**< (MPDDRC_MD) Data bus width is 16 bits. Position  */
#define MPDDRC_MD_WL_Pos                    6                                              /**< (MPDDRC_MD) Write Latency (read-only) Position */
#define MPDDRC_MD_WL_Msk                    (_U_(0x1) << MPDDRC_MD_WL_Pos)                 /**< (MPDDRC_MD) Write Latency (read-only) Mask */
#define MPDDRC_MD_WL                        MPDDRC_MD_WL_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_MD_WL_Msk instead */
#define   MPDDRC_MD_WL_WL_SETA_Val          _U_(0x0)                                       /**< (MPDDRC_MD) Write Latency Set A  */
#define   MPDDRC_MD_WL_WL_SETB_Val          _U_(0x1)                                       /**< (MPDDRC_MD) Write Latency Set B  */
#define MPDDRC_MD_WL_WL_SETA                (MPDDRC_MD_WL_WL_SETA_Val << MPDDRC_MD_WL_Pos)  /**< (MPDDRC_MD) Write Latency Set A Position  */
#define MPDDRC_MD_WL_WL_SETB                (MPDDRC_MD_WL_WL_SETB_Val << MPDDRC_MD_WL_Pos)  /**< (MPDDRC_MD) Write Latency Set B Position  */
#define MPDDRC_MD_RL3_Pos                   7                                              /**< (MPDDRC_MD) Read Latency 3 Option Support (read-only) Position */
#define MPDDRC_MD_RL3_Msk                   (_U_(0x1) << MPDDRC_MD_RL3_Pos)                /**< (MPDDRC_MD) Read Latency 3 Option Support (read-only) Mask */
#define MPDDRC_MD_RL3                       MPDDRC_MD_RL3_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_MD_RL3_Msk instead */
#define   MPDDRC_MD_RL3_RL3_SUPPORT_Val     _U_(0x0)                                       /**< (MPDDRC_MD) Read latency of 3 is supported  */
#define   MPDDRC_MD_RL3_RL3_NOT_SUPPORTED_Val _U_(0x1)                                       /**< (MPDDRC_MD) Read latency 0f 3 is not supported  */
#define MPDDRC_MD_RL3_RL3_SUPPORT           (MPDDRC_MD_RL3_RL3_SUPPORT_Val << MPDDRC_MD_RL3_Pos)  /**< (MPDDRC_MD) Read latency of 3 is supported Position  */
#define MPDDRC_MD_RL3_RL3_NOT_SUPPORTED     (MPDDRC_MD_RL3_RL3_NOT_SUPPORTED_Val << MPDDRC_MD_RL3_Pos)  /**< (MPDDRC_MD) Read latency 0f 3 is not supported Position  */
#define MPDDRC_MD_MANU_ID_Pos               8                                              /**< (MPDDRC_MD) Manufacturer Identification (read-only) Position */
#define MPDDRC_MD_MANU_ID_Msk               (_U_(0xFF) << MPDDRC_MD_MANU_ID_Pos)           /**< (MPDDRC_MD) Manufacturer Identification (read-only) Mask */
#define MPDDRC_MD_MANU_ID(value)            (MPDDRC_MD_MANU_ID_Msk & ((value) << MPDDRC_MD_MANU_ID_Pos))
#define MPDDRC_MD_REV_ID_Pos                16                                             /**< (MPDDRC_MD) Revision Identification (read-only) Position */
#define MPDDRC_MD_REV_ID_Msk                (_U_(0xFF) << MPDDRC_MD_REV_ID_Pos)            /**< (MPDDRC_MD) Revision Identification (read-only) Mask */
#define MPDDRC_MD_REV_ID(value)             (MPDDRC_MD_REV_ID_Msk & ((value) << MPDDRC_MD_REV_ID_Pos))
#define MPDDRC_MD_TYPE_Pos                  24                                             /**< (MPDDRC_MD) DRAM Architecture (read-only) Position */
#define MPDDRC_MD_TYPE_Msk                  (_U_(0x3) << MPDDRC_MD_TYPE_Pos)               /**< (MPDDRC_MD) DRAM Architecture (read-only) Mask */
#define MPDDRC_MD_TYPE(value)               (MPDDRC_MD_TYPE_Msk & ((value) << MPDDRC_MD_TYPE_Pos))
#define   MPDDRC_MD_TYPE_S4_SDRAM_Val       _U_(0x0)                                       /**< (MPDDRC_MD) 4n prefetch architecture  */
#define   MPDDRC_MD_TYPE_S2_SDRAM_Val       _U_(0x1)                                       /**< (MPDDRC_MD) 2n prefetch architecture  */
#define   MPDDRC_MD_TYPE_NVM_Val            _U_(0x2)                                       /**< (MPDDRC_MD) Non-volatile device  */
#define   MPDDRC_MD_TYPE_S8_SDRAM_Val       _U_(0x3)                                       /**< (MPDDRC_MD) 8n prefetch architecture  */
#define MPDDRC_MD_TYPE_S4_SDRAM             (MPDDRC_MD_TYPE_S4_SDRAM_Val << MPDDRC_MD_TYPE_Pos)  /**< (MPDDRC_MD) 4n prefetch architecture Position  */
#define MPDDRC_MD_TYPE_S2_SDRAM             (MPDDRC_MD_TYPE_S2_SDRAM_Val << MPDDRC_MD_TYPE_Pos)  /**< (MPDDRC_MD) 2n prefetch architecture Position  */
#define MPDDRC_MD_TYPE_NVM                  (MPDDRC_MD_TYPE_NVM_Val << MPDDRC_MD_TYPE_Pos)  /**< (MPDDRC_MD) Non-volatile device Position  */
#define MPDDRC_MD_TYPE_S8_SDRAM             (MPDDRC_MD_TYPE_S8_SDRAM_Val << MPDDRC_MD_TYPE_Pos)  /**< (MPDDRC_MD) 8n prefetch architecture Position  */
#define MPDDRC_MD_DENSITY_Pos               26                                             /**< (MPDDRC_MD) Density of Memory (read-only) Position */
#define MPDDRC_MD_DENSITY_Msk               (_U_(0xF) << MPDDRC_MD_DENSITY_Pos)            /**< (MPDDRC_MD) Density of Memory (read-only) Mask */
#define MPDDRC_MD_DENSITY(value)            (MPDDRC_MD_DENSITY_Msk & ((value) << MPDDRC_MD_DENSITY_Pos))
#define   MPDDRC_MD_DENSITY_DENSITY_64MBITS_Val _U_(0x0)                                       /**< (MPDDRC_MD) The device density is 64 Mbits.  */
#define   MPDDRC_MD_DENSITY_DENSITY_128MBITS_Val _U_(0x1)                                       /**< (MPDDRC_MD) The device density is 128 Mbits.  */
#define   MPDDRC_MD_DENSITY_DENSITY_256MBITS_Val _U_(0x2)                                       /**< (MPDDRC_MD) The device density is 256 Mbits.  */
#define   MPDDRC_MD_DENSITY_DENSITY_512MBITS_Val _U_(0x3)                                       /**< (MPDDRC_MD) The device density is 512 Mbits.  */
#define   MPDDRC_MD_DENSITY_DENSITY_1GBITS_Val _U_(0x4)                                       /**< (MPDDRC_MD) The device density is 1 Gbit.  */
#define   MPDDRC_MD_DENSITY_DENSITY_2GBITS_Val _U_(0x5)                                       /**< (MPDDRC_MD) The device density is 2 Gbits.  */
#define   MPDDRC_MD_DENSITY_DENSITY_4GBITS_Val _U_(0x6)                                       /**< (MPDDRC_MD) The device density is 4 Gbits.  */
#define   MPDDRC_MD_DENSITY_DENSITY_8GBITS_Val _U_(0x7)                                       /**< (MPDDRC_MD) The device density is 8 Gbits.  */
#define   MPDDRC_MD_DENSITY_DENSITY_16GBITS_Val _U_(0x8)                                       /**< (MPDDRC_MD) The device density is 16 Gbits.  */
#define   MPDDRC_MD_DENSITY_DENSITY_32GBITS_Val _U_(0x9)                                       /**< (MPDDRC_MD) The device density is 32 Gbits.  */
#define MPDDRC_MD_DENSITY_DENSITY_64MBITS   (MPDDRC_MD_DENSITY_DENSITY_64MBITS_Val << MPDDRC_MD_DENSITY_Pos)  /**< (MPDDRC_MD) The device density is 64 Mbits. Position  */
#define MPDDRC_MD_DENSITY_DENSITY_128MBITS  (MPDDRC_MD_DENSITY_DENSITY_128MBITS_Val << MPDDRC_MD_DENSITY_Pos)  /**< (MPDDRC_MD) The device density is 128 Mbits. Position  */
#define MPDDRC_MD_DENSITY_DENSITY_256MBITS  (MPDDRC_MD_DENSITY_DENSITY_256MBITS_Val << MPDDRC_MD_DENSITY_Pos)  /**< (MPDDRC_MD) The device density is 256 Mbits. Position  */
#define MPDDRC_MD_DENSITY_DENSITY_512MBITS  (MPDDRC_MD_DENSITY_DENSITY_512MBITS_Val << MPDDRC_MD_DENSITY_Pos)  /**< (MPDDRC_MD) The device density is 512 Mbits. Position  */
#define MPDDRC_MD_DENSITY_DENSITY_1GBITS    (MPDDRC_MD_DENSITY_DENSITY_1GBITS_Val << MPDDRC_MD_DENSITY_Pos)  /**< (MPDDRC_MD) The device density is 1 Gbit. Position  */
#define MPDDRC_MD_DENSITY_DENSITY_2GBITS    (MPDDRC_MD_DENSITY_DENSITY_2GBITS_Val << MPDDRC_MD_DENSITY_Pos)  /**< (MPDDRC_MD) The device density is 2 Gbits. Position  */
#define MPDDRC_MD_DENSITY_DENSITY_4GBITS    (MPDDRC_MD_DENSITY_DENSITY_4GBITS_Val << MPDDRC_MD_DENSITY_Pos)  /**< (MPDDRC_MD) The device density is 4 Gbits. Position  */
#define MPDDRC_MD_DENSITY_DENSITY_8GBITS    (MPDDRC_MD_DENSITY_DENSITY_8GBITS_Val << MPDDRC_MD_DENSITY_Pos)  /**< (MPDDRC_MD) The device density is 8 Gbits. Position  */
#define MPDDRC_MD_DENSITY_DENSITY_16GBITS   (MPDDRC_MD_DENSITY_DENSITY_16GBITS_Val << MPDDRC_MD_DENSITY_Pos)  /**< (MPDDRC_MD) The device density is 16 Gbits. Position  */
#define MPDDRC_MD_DENSITY_DENSITY_32GBITS   (MPDDRC_MD_DENSITY_DENSITY_32GBITS_Val << MPDDRC_MD_DENSITY_Pos)  /**< (MPDDRC_MD) The device density is 32 Gbits. Position  */
#define MPDDRC_MD_IO_WIDTH_Pos              30                                             /**< (MPDDRC_MD) Width of Memory (read-only) Position */
#define MPDDRC_MD_IO_WIDTH_Msk              (_U_(0x3) << MPDDRC_MD_IO_WIDTH_Pos)           /**< (MPDDRC_MD) Width of Memory (read-only) Mask */
#define MPDDRC_MD_IO_WIDTH(value)           (MPDDRC_MD_IO_WIDTH_Msk & ((value) << MPDDRC_MD_IO_WIDTH_Pos))
#define   MPDDRC_MD_IO_WIDTH_WIDTH_32_Val   _U_(0x0)                                       /**< (MPDDRC_MD) The data bus width is 32 bits.  */
#define   MPDDRC_MD_IO_WIDTH_WIDTH_16_Val   _U_(0x1)                                       /**< (MPDDRC_MD) The data bus width is 16 bits.  */
#define   MPDDRC_MD_IO_WIDTH_WIDTH_8_Val    _U_(0x2)                                       /**< (MPDDRC_MD) The data bus width is 8 bits.  */
#define   MPDDRC_MD_IO_WIDTH_NOT_USED_Val   _U_(0x3)                                       /**< (MPDDRC_MD) -  */
#define MPDDRC_MD_IO_WIDTH_WIDTH_32         (MPDDRC_MD_IO_WIDTH_WIDTH_32_Val << MPDDRC_MD_IO_WIDTH_Pos)  /**< (MPDDRC_MD) The data bus width is 32 bits. Position  */
#define MPDDRC_MD_IO_WIDTH_WIDTH_16         (MPDDRC_MD_IO_WIDTH_WIDTH_16_Val << MPDDRC_MD_IO_WIDTH_Pos)  /**< (MPDDRC_MD) The data bus width is 16 bits. Position  */
#define MPDDRC_MD_IO_WIDTH_WIDTH_8          (MPDDRC_MD_IO_WIDTH_WIDTH_8_Val << MPDDRC_MD_IO_WIDTH_Pos)  /**< (MPDDRC_MD) The data bus width is 8 bits. Position  */
#define MPDDRC_MD_IO_WIDTH_NOT_USED         (MPDDRC_MD_IO_WIDTH_NOT_USED_Val << MPDDRC_MD_IO_WIDTH_Pos)  /**< (MPDDRC_MD) - Position  */
#define MPDDRC_MD_MASK                      _U_(0xFFFFFFD7)                                /**< \deprecated (MPDDRC_MD) Register MASK  (Use MPDDRC_MD_Msk instead)  */
#define MPDDRC_MD_Msk                       _U_(0xFFFFFFD7)                                /**< (MPDDRC_MD) Register Mask  */

#define MPDDRC_MD_RL_Pos                    7                                              /**< (MPDDRC_MD Position) Read Latency 3 Option Support (read-only) */
#define MPDDRC_MD_RL_Msk                    (_U_(0x1) << MPDDRC_MD_RL_Pos)                 /**< (MPDDRC_MD Mask) RL */
#define MPDDRC_MD_RL(value)                 (MPDDRC_MD_RL_Msk & ((value) << MPDDRC_MD_RL_Pos))  

/* -------- MPDDRC_LPDDR23_LPR : (MPDDRC Offset: 0x28) (R/W 32) Low-power DDR2 Low-power DDR3 Low-power Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BK_MASK_PASR:8;            /**< bit:   0..7  Bank Mask Bit/PASR                       */
    uint32_t SEG_MASK:16;               /**< bit:  8..23  Segment Mask Bit                         */
    uint32_t DS:4;                      /**< bit: 24..27  Drive Strength                           */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_LPDDR23_LPR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_LPDDR23_LPR_OFFSET           (0x28)                                        /**<  (MPDDRC_LPDDR23_LPR) Low-power DDR2 Low-power DDR3 Low-power Register  Offset */

#define MPDDRC_LPDDR23_LPR_BK_MASK_PASR_Pos 0                                              /**< (MPDDRC_LPDDR23_LPR) Bank Mask Bit/PASR Position */
#define MPDDRC_LPDDR23_LPR_BK_MASK_PASR_Msk (_U_(0xFF) << MPDDRC_LPDDR23_LPR_BK_MASK_PASR_Pos)  /**< (MPDDRC_LPDDR23_LPR) Bank Mask Bit/PASR Mask */
#define MPDDRC_LPDDR23_LPR_BK_MASK_PASR(value) (MPDDRC_LPDDR23_LPR_BK_MASK_PASR_Msk & ((value) << MPDDRC_LPDDR23_LPR_BK_MASK_PASR_Pos))
#define MPDDRC_LPDDR23_LPR_SEG_MASK_Pos     8                                              /**< (MPDDRC_LPDDR23_LPR) Segment Mask Bit Position */
#define MPDDRC_LPDDR23_LPR_SEG_MASK_Msk     (_U_(0xFFFF) << MPDDRC_LPDDR23_LPR_SEG_MASK_Pos)  /**< (MPDDRC_LPDDR23_LPR) Segment Mask Bit Mask */
#define MPDDRC_LPDDR23_LPR_SEG_MASK(value)  (MPDDRC_LPDDR23_LPR_SEG_MASK_Msk & ((value) << MPDDRC_LPDDR23_LPR_SEG_MASK_Pos))
#define MPDDRC_LPDDR23_LPR_DS_Pos           24                                             /**< (MPDDRC_LPDDR23_LPR) Drive Strength Position */
#define MPDDRC_LPDDR23_LPR_DS_Msk           (_U_(0xF) << MPDDRC_LPDDR23_LPR_DS_Pos)        /**< (MPDDRC_LPDDR23_LPR) Drive Strength Mask */
#define MPDDRC_LPDDR23_LPR_DS(value)        (MPDDRC_LPDDR23_LPR_DS_Msk & ((value) << MPDDRC_LPDDR23_LPR_DS_Pos))
#define   MPDDRC_LPDDR23_LPR_DS_DS_34_3_Val _U_(0x1)                                       /**< (MPDDRC_LPDDR23_LPR) 34.3 ohm typical  */
#define   MPDDRC_LPDDR23_LPR_DS_DS_40_Val   _U_(0x2)                                       /**< (MPDDRC_LPDDR23_LPR) 40 ohm typical (default)  */
#define   MPDDRC_LPDDR23_LPR_DS_DS_48_Val   _U_(0x3)                                       /**< (MPDDRC_LPDDR23_LPR) 48 ohm typical  */
#define   MPDDRC_LPDDR23_LPR_DS_DS_60_Val   _U_(0x4)                                       /**< (MPDDRC_LPDDR23_LPR) 60 ohm typical  */
#define   MPDDRC_LPDDR23_LPR_DS_DS_80_Val   _U_(0x6)                                       /**< (MPDDRC_LPDDR23_LPR) 80 ohm typical  */
#define   MPDDRC_LPDDR23_LPR_DS_DS_120_Val  _U_(0x7)                                       /**< (MPDDRC_LPDDR23_LPR) 120 ohm typical  */
#define MPDDRC_LPDDR23_LPR_DS_DS_34_3       (MPDDRC_LPDDR23_LPR_DS_DS_34_3_Val << MPDDRC_LPDDR23_LPR_DS_Pos)  /**< (MPDDRC_LPDDR23_LPR) 34.3 ohm typical Position  */
#define MPDDRC_LPDDR23_LPR_DS_DS_40         (MPDDRC_LPDDR23_LPR_DS_DS_40_Val << MPDDRC_LPDDR23_LPR_DS_Pos)  /**< (MPDDRC_LPDDR23_LPR) 40 ohm typical (default) Position  */
#define MPDDRC_LPDDR23_LPR_DS_DS_48         (MPDDRC_LPDDR23_LPR_DS_DS_48_Val << MPDDRC_LPDDR23_LPR_DS_Pos)  /**< (MPDDRC_LPDDR23_LPR) 48 ohm typical Position  */
#define MPDDRC_LPDDR23_LPR_DS_DS_60         (MPDDRC_LPDDR23_LPR_DS_DS_60_Val << MPDDRC_LPDDR23_LPR_DS_Pos)  /**< (MPDDRC_LPDDR23_LPR) 60 ohm typical Position  */
#define MPDDRC_LPDDR23_LPR_DS_DS_80         (MPDDRC_LPDDR23_LPR_DS_DS_80_Val << MPDDRC_LPDDR23_LPR_DS_Pos)  /**< (MPDDRC_LPDDR23_LPR) 80 ohm typical Position  */
#define MPDDRC_LPDDR23_LPR_DS_DS_120        (MPDDRC_LPDDR23_LPR_DS_DS_120_Val << MPDDRC_LPDDR23_LPR_DS_Pos)  /**< (MPDDRC_LPDDR23_LPR) 120 ohm typical Position  */
#define MPDDRC_LPDDR23_LPR_Msk              _U_(0xFFFFFFF)                                 /**< (MPDDRC_LPDDR23_LPR) Register Mask  */


/* -------- MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4 : (MPDDRC Offset: 0x2c) (R/W 32) Low-power DDR2 Low-power DDR3 and DDR3 Calibration and MR4 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t COUNT_CAL:16;              /**< bit:  0..15  LPDDR2 LPDDR3 and DDR3 Calibration Timer Count */
    uint32_t MR4_READ:16;               /**< bit: 16..31  Mode Register 4 Read Interval            */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4_OFFSET (0x2C)                                        /**<  (MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4) Low-power DDR2 Low-power DDR3 and DDR3 Calibration and MR4 Register  Offset */

#define MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4_COUNT_CAL_Pos 0                                              /**< (MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4) LPDDR2 LPDDR3 and DDR3 Calibration Timer Count Position */
#define MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4_COUNT_CAL_Msk (_U_(0xFFFF) << MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4_COUNT_CAL_Pos)  /**< (MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4) LPDDR2 LPDDR3 and DDR3 Calibration Timer Count Mask */
#define MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4_COUNT_CAL(value) (MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4_COUNT_CAL_Msk & ((value) << MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4_COUNT_CAL_Pos))
#define MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4_MR4_READ_Pos 16                                             /**< (MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4) Mode Register 4 Read Interval Position */
#define MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4_MR4_READ_Msk (_U_(0xFFFF) << MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4_MR4_READ_Pos)  /**< (MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4) Mode Register 4 Read Interval Mask */
#define MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4_MR4_READ(value) (MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4_MR4_READ_Msk & ((value) << MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4_MR4_READ_Pos))
#define MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4_MASK _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4) Register MASK  (Use MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4_Msk instead)  */
#define MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4_Msk _U_(0xFFFFFFFF)                                /**< (MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4) Register Mask  */


/* -------- MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL : (MPDDRC Offset: 0x30) (R/W 32) Low-power DDR2 Low-power DDR3 and DDR3 Timing Calibration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ZQCS:8;                    /**< bit:   0..7  ZQ Calibration Short                     */
    uint32_t :8;                        /**< bit:  8..15  Reserved */
    uint32_t RZQI:2;                    /**< bit: 16..17  Built-in Self-Test for RZQ Information (read-only) */
    uint32_t :14;                       /**< bit: 18..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_OFFSET (0x30)                                        /**<  (MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL) Low-power DDR2 Low-power DDR3 and DDR3 Timing Calibration Register  Offset */

#define MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_ZQCS_Pos 0                                              /**< (MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL) ZQ Calibration Short Position */
#define MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_ZQCS_Msk (_U_(0xFF) << MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_ZQCS_Pos)  /**< (MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL) ZQ Calibration Short Mask */
#define MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_ZQCS(value) (MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_ZQCS_Msk & ((value) << MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_ZQCS_Pos))
#define MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI_Pos 16                                             /**< (MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL) Built-in Self-Test for RZQ Information (read-only) Position */
#define MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI_Msk (_U_(0x3) << MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI_Pos)  /**< (MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL) Built-in Self-Test for RZQ Information (read-only) Mask */
#define MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI(value) (MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI_Msk & ((value) << MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI_Pos))
#define   MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI_RZQ_NOT_SUPPORTED_Val _U_(0x0)                                       /**< (MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL) RZQ self test not supported  */
#define   MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI_ZQ_VDDCA_FLOAT_Val _U_(0x1)                                       /**< (MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL) The ZQ pin can be connected to VDDCA or left floating.  */
#define   MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI_ZQ_SHORTED_GROUND_Val _U_(0x2)                                       /**< (MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL) The ZQ pin can be shorted to ground.  */
#define   MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI_ZQ_SELF_TEST_OK_Val _U_(0x3)                                       /**< (MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL) ZQ pin self test complete; no error condition detected  */
#define MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI_RZQ_NOT_SUPPORTED (MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI_RZQ_NOT_SUPPORTED_Val << MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI_Pos)  /**< (MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL) RZQ self test not supported Position  */
#define MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI_ZQ_VDDCA_FLOAT (MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI_ZQ_VDDCA_FLOAT_Val << MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI_Pos)  /**< (MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL) The ZQ pin can be connected to VDDCA or left floating. Position  */
#define MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI_ZQ_SHORTED_GROUND (MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI_ZQ_SHORTED_GROUND_Val << MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI_Pos)  /**< (MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL) The ZQ pin can be shorted to ground. Position  */
#define MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI_ZQ_SELF_TEST_OK (MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI_ZQ_SELF_TEST_OK_Val << MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_RZQI_Pos)  /**< (MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL) ZQ pin self test complete; no error condition detected Position  */
#define MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_MASK _U_(0x300FF)                                   /**< \deprecated (MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL) Register MASK  (Use MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_Msk instead)  */
#define MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_Msk _U_(0x300FF)                                   /**< (MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL) Register Mask  */


/* -------- MPDDRC_IO_CALIBR : (MPDDRC Offset: 0x34) (R/W 32) I/O Calibration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RDIV:3;                    /**< bit:   0..2  Resistor Divider, Output Driver Impedance */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t EN_CALIB:1;                /**< bit:      4  Enable Calibration                       */
    uint32_t :3;                        /**< bit:   5..7  Reserved */
    uint32_t TZQIO:7;                   /**< bit:  8..14  IO Calibration                           */
    uint32_t :1;                        /**< bit:     15  Reserved */
    uint32_t CALCODEP:4;                /**< bit: 16..19  Number of Transistor P (read-only)       */
    uint32_t CALCODEN:4;                /**< bit: 20..23  Number of Transistor N (read-only)       */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_IO_CALIBR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_IO_CALIBR_OFFSET             (0x34)                                        /**<  (MPDDRC_IO_CALIBR) I/O Calibration Register  Offset */

#define MPDDRC_IO_CALIBR_RDIV_Pos           0                                              /**< (MPDDRC_IO_CALIBR) Resistor Divider, Output Driver Impedance Position */
#define MPDDRC_IO_CALIBR_RDIV_Msk           (_U_(0x7) << MPDDRC_IO_CALIBR_RDIV_Pos)        /**< (MPDDRC_IO_CALIBR) Resistor Divider, Output Driver Impedance Mask */
#define MPDDRC_IO_CALIBR_RDIV(value)        (MPDDRC_IO_CALIBR_RDIV_Msk & ((value) << MPDDRC_IO_CALIBR_RDIV_Pos))
#define   MPDDRC_IO_CALIBR_RDIV_RZQ_34_Val  _U_(0x1)                                       /**< (MPDDRC_IO_CALIBR) LPDDR2 serial impedance line = 34.3 ohms,DDR2/LPDDR1 serial impedance line: Not applicable  */
#define   MPDDRC_IO_CALIBR_RDIV_RZQ_40_RZQ_38_RZQ_37_RZQ_35_Val _U_(0x2)                                       /**< (MPDDRC_IO_CALIBR) LPDDR2 serial impedance line = 40 ohms,LPDDR3 serial impedance line = 38 ohms,DDR3 serial impedance line = 37 ohms,DDR2/LPDDR1 serial impedance line = 35 ohms  */
#define   MPDDRC_IO_CALIBR_RDIV_RZQ_48_RZQ_46_RZQ_44_RZQ_43_Val _U_(0x3)                                       /**< (MPDDRC_IO_CALIBR) LPDDR2 serial impedance line = 48 ohms,LPDDR3 serial impedance line = 46 ohms,DDR3 serial impedance line = 44 ohms,DDR2/LPDDR1 serial impedance line = 43 ohms  */
#define   MPDDRC_IO_CALIBR_RDIV_RZQ_60_RZQ_57_RZQ_55_RZQ_52_Val _U_(0x4)                                       /**< (MPDDRC_IO_CALIBR) LPDDR2 serial impedance line = 60 ohms,LPDDR3 serial impedance line = 57 ohms,DDR3 serial impedance line = 55 ohms,DDR2/LPDDR1 serial impedance line = 52 ohms  */
#define   MPDDRC_IO_CALIBR_RDIV_RZQ_80_RZQ_77_RZQ_73_RZQ_70_Val _U_(0x6)                                       /**< (MPDDRC_IO_CALIBR) LPDDR2 serial impedance line = 80 ohms,LPDDR3 serial impedance line = 77 ohms,DDR3 serial impedance line = 73 ohms,DDR2/LPDDR1 serial impedance line = 70 ohms  */
#define   MPDDRC_IO_CALIBR_RDIV_RZQ_120_RZQ_115_RZQ_110_RZQ_105_Val _U_(0x7)                                       /**< (MPDDRC_IO_CALIBR) LPDDR2 serial impedance line = 120 ohms,LPDDR3 serial impedance line = 115 ohms,DDR3 serial impedance line = 110 ohms,DDR2/LPDDR1 serial impedance line = 105 ohms  */
#define MPDDRC_IO_CALIBR_RDIV_RZQ_34        (MPDDRC_IO_CALIBR_RDIV_RZQ_34_Val << MPDDRC_IO_CALIBR_RDIV_Pos)  /**< (MPDDRC_IO_CALIBR) LPDDR2 serial impedance line = 34.3 ohms,DDR2/LPDDR1 serial impedance line: Not applicable Position  */
#define MPDDRC_IO_CALIBR_RDIV_RZQ_40_RZQ_38_RZQ_37_RZQ_35 (MPDDRC_IO_CALIBR_RDIV_RZQ_40_RZQ_38_RZQ_37_RZQ_35_Val << MPDDRC_IO_CALIBR_RDIV_Pos)  /**< (MPDDRC_IO_CALIBR) LPDDR2 serial impedance line = 40 ohms,LPDDR3 serial impedance line = 38 ohms,DDR3 serial impedance line = 37 ohms,DDR2/LPDDR1 serial impedance line = 35 ohms Position  */
#define MPDDRC_IO_CALIBR_RDIV_RZQ_48_RZQ_46_RZQ_44_RZQ_43 (MPDDRC_IO_CALIBR_RDIV_RZQ_48_RZQ_46_RZQ_44_RZQ_43_Val << MPDDRC_IO_CALIBR_RDIV_Pos)  /**< (MPDDRC_IO_CALIBR) LPDDR2 serial impedance line = 48 ohms,LPDDR3 serial impedance line = 46 ohms,DDR3 serial impedance line = 44 ohms,DDR2/LPDDR1 serial impedance line = 43 ohms Position  */
#define MPDDRC_IO_CALIBR_RDIV_RZQ_60_RZQ_57_RZQ_55_RZQ_52 (MPDDRC_IO_CALIBR_RDIV_RZQ_60_RZQ_57_RZQ_55_RZQ_52_Val << MPDDRC_IO_CALIBR_RDIV_Pos)  /**< (MPDDRC_IO_CALIBR) LPDDR2 serial impedance line = 60 ohms,LPDDR3 serial impedance line = 57 ohms,DDR3 serial impedance line = 55 ohms,DDR2/LPDDR1 serial impedance line = 52 ohms Position  */
#define MPDDRC_IO_CALIBR_RDIV_RZQ_80_RZQ_77_RZQ_73_RZQ_70 (MPDDRC_IO_CALIBR_RDIV_RZQ_80_RZQ_77_RZQ_73_RZQ_70_Val << MPDDRC_IO_CALIBR_RDIV_Pos)  /**< (MPDDRC_IO_CALIBR) LPDDR2 serial impedance line = 80 ohms,LPDDR3 serial impedance line = 77 ohms,DDR3 serial impedance line = 73 ohms,DDR2/LPDDR1 serial impedance line = 70 ohms Position  */
#define MPDDRC_IO_CALIBR_RDIV_RZQ_120_RZQ_115_RZQ_110_RZQ_105 (MPDDRC_IO_CALIBR_RDIV_RZQ_120_RZQ_115_RZQ_110_RZQ_105_Val << MPDDRC_IO_CALIBR_RDIV_Pos)  /**< (MPDDRC_IO_CALIBR) LPDDR2 serial impedance line = 120 ohms,LPDDR3 serial impedance line = 115 ohms,DDR3 serial impedance line = 110 ohms,DDR2/LPDDR1 serial impedance line = 105 ohms Position  */
#define MPDDRC_IO_CALIBR_EN_CALIB_Pos       4                                              /**< (MPDDRC_IO_CALIBR) Enable Calibration Position */
#define MPDDRC_IO_CALIBR_EN_CALIB_Msk       (_U_(0x1) << MPDDRC_IO_CALIBR_EN_CALIB_Pos)    /**< (MPDDRC_IO_CALIBR) Enable Calibration Mask */
#define MPDDRC_IO_CALIBR_EN_CALIB           MPDDRC_IO_CALIBR_EN_CALIB_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_IO_CALIBR_EN_CALIB_Msk instead */
#define   MPDDRC_IO_CALIBR_EN_CALIB_DISABLE_CALIBRATION_Val _U_(0x0)                                       /**< (MPDDRC_IO_CALIBR) Calibration is disabled.  */
#define   MPDDRC_IO_CALIBR_EN_CALIB_ENABLE_CALIBRATION_Val _U_(0x1)                                       /**< (MPDDRC_IO_CALIBR) Calibration is enabled.  */
#define MPDDRC_IO_CALIBR_EN_CALIB_DISABLE_CALIBRATION (MPDDRC_IO_CALIBR_EN_CALIB_DISABLE_CALIBRATION_Val << MPDDRC_IO_CALIBR_EN_CALIB_Pos)  /**< (MPDDRC_IO_CALIBR) Calibration is disabled. Position  */
#define MPDDRC_IO_CALIBR_EN_CALIB_ENABLE_CALIBRATION (MPDDRC_IO_CALIBR_EN_CALIB_ENABLE_CALIBRATION_Val << MPDDRC_IO_CALIBR_EN_CALIB_Pos)  /**< (MPDDRC_IO_CALIBR) Calibration is enabled. Position  */
#define MPDDRC_IO_CALIBR_TZQIO_Pos          8                                              /**< (MPDDRC_IO_CALIBR) IO Calibration Position */
#define MPDDRC_IO_CALIBR_TZQIO_Msk          (_U_(0x7F) << MPDDRC_IO_CALIBR_TZQIO_Pos)      /**< (MPDDRC_IO_CALIBR) IO Calibration Mask */
#define MPDDRC_IO_CALIBR_TZQIO(value)       (MPDDRC_IO_CALIBR_TZQIO_Msk & ((value) << MPDDRC_IO_CALIBR_TZQIO_Pos))
#define MPDDRC_IO_CALIBR_CALCODEP_Pos       16                                             /**< (MPDDRC_IO_CALIBR) Number of Transistor P (read-only) Position */
#define MPDDRC_IO_CALIBR_CALCODEP_Msk       (_U_(0xF) << MPDDRC_IO_CALIBR_CALCODEP_Pos)    /**< (MPDDRC_IO_CALIBR) Number of Transistor P (read-only) Mask */
#define MPDDRC_IO_CALIBR_CALCODEP(value)    (MPDDRC_IO_CALIBR_CALCODEP_Msk & ((value) << MPDDRC_IO_CALIBR_CALCODEP_Pos))
#define MPDDRC_IO_CALIBR_CALCODEN_Pos       20                                             /**< (MPDDRC_IO_CALIBR) Number of Transistor N (read-only) Position */
#define MPDDRC_IO_CALIBR_CALCODEN_Msk       (_U_(0xF) << MPDDRC_IO_CALIBR_CALCODEN_Pos)    /**< (MPDDRC_IO_CALIBR) Number of Transistor N (read-only) Mask */
#define MPDDRC_IO_CALIBR_CALCODEN(value)    (MPDDRC_IO_CALIBR_CALCODEN_Msk & ((value) << MPDDRC_IO_CALIBR_CALCODEN_Pos))
#define MPDDRC_IO_CALIBR_MASK               _U_(0xFF7F17)                                  /**< \deprecated (MPDDRC_IO_CALIBR) Register MASK  (Use MPDDRC_IO_CALIBR_Msk instead)  */
#define MPDDRC_IO_CALIBR_Msk                _U_(0xFF7F17)                                  /**< (MPDDRC_IO_CALIBR) Register Mask  */


/* -------- MPDDRC_OCMS : (MPDDRC Offset: 0x38) (R/W 32) OCMS Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SCR_EN:1;                  /**< bit:      0  Scrambling Enable                        */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_OCMS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_OCMS_OFFSET                  (0x38)                                        /**<  (MPDDRC_OCMS) OCMS Register  Offset */

#define MPDDRC_OCMS_SCR_EN_Pos              0                                              /**< (MPDDRC_OCMS) Scrambling Enable Position */
#define MPDDRC_OCMS_SCR_EN_Msk              (_U_(0x1) << MPDDRC_OCMS_SCR_EN_Pos)           /**< (MPDDRC_OCMS) Scrambling Enable Mask */
#define MPDDRC_OCMS_SCR_EN                  MPDDRC_OCMS_SCR_EN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_OCMS_SCR_EN_Msk instead */
#define MPDDRC_OCMS_MASK                    _U_(0x01)                                      /**< \deprecated (MPDDRC_OCMS) Register MASK  (Use MPDDRC_OCMS_Msk instead)  */
#define MPDDRC_OCMS_Msk                     _U_(0x01)                                      /**< (MPDDRC_OCMS) Register Mask  */


/* -------- MPDDRC_OCMS_KEY1 : (MPDDRC Offset: 0x3c) (/W 32) OCMS KEY1 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t KEY1:32;                   /**< bit:  0..31  Off-chip Memory Scrambling (OCMS) Key Part 1 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_OCMS_KEY1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_OCMS_KEY1_OFFSET             (0x3C)                                        /**<  (MPDDRC_OCMS_KEY1) OCMS KEY1 Register  Offset */

#define MPDDRC_OCMS_KEY1_KEY1_Pos           0                                              /**< (MPDDRC_OCMS_KEY1) Off-chip Memory Scrambling (OCMS) Key Part 1 Position */
#define MPDDRC_OCMS_KEY1_KEY1_Msk           (_U_(0xFFFFFFFF) << MPDDRC_OCMS_KEY1_KEY1_Pos)  /**< (MPDDRC_OCMS_KEY1) Off-chip Memory Scrambling (OCMS) Key Part 1 Mask */
#define MPDDRC_OCMS_KEY1_KEY1(value)        (MPDDRC_OCMS_KEY1_KEY1_Msk & ((value) << MPDDRC_OCMS_KEY1_KEY1_Pos))
#define MPDDRC_OCMS_KEY1_MASK               _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_OCMS_KEY1) Register MASK  (Use MPDDRC_OCMS_KEY1_Msk instead)  */
#define MPDDRC_OCMS_KEY1_Msk                _U_(0xFFFFFFFF)                                /**< (MPDDRC_OCMS_KEY1) Register Mask  */


/* -------- MPDDRC_OCMS_KEY2 : (MPDDRC Offset: 0x40) (/W 32) OCMS KEY2 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t KEY2:32;                   /**< bit:  0..31  Off-chip Memory Scrambling (OCMS) Key Part 2 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_OCMS_KEY2_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_OCMS_KEY2_OFFSET             (0x40)                                        /**<  (MPDDRC_OCMS_KEY2) OCMS KEY2 Register  Offset */

#define MPDDRC_OCMS_KEY2_KEY2_Pos           0                                              /**< (MPDDRC_OCMS_KEY2) Off-chip Memory Scrambling (OCMS) Key Part 2 Position */
#define MPDDRC_OCMS_KEY2_KEY2_Msk           (_U_(0xFFFFFFFF) << MPDDRC_OCMS_KEY2_KEY2_Pos)  /**< (MPDDRC_OCMS_KEY2) Off-chip Memory Scrambling (OCMS) Key Part 2 Mask */
#define MPDDRC_OCMS_KEY2_KEY2(value)        (MPDDRC_OCMS_KEY2_KEY2_Msk & ((value) << MPDDRC_OCMS_KEY2_KEY2_Pos))
#define MPDDRC_OCMS_KEY2_MASK               _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_OCMS_KEY2) Register MASK  (Use MPDDRC_OCMS_KEY2_Msk instead)  */
#define MPDDRC_OCMS_KEY2_Msk                _U_(0xFFFFFFFF)                                /**< (MPDDRC_OCMS_KEY2) Register Mask  */


/* -------- MPDDRC_CONF_ARBITER : (MPDDRC Offset: 0x44) (R/W 32) Configuration Arbiter Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ARB:2;                     /**< bit:   0..1  Type of Arbitration                      */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t BDW_MAX_CUR:1;             /**< bit:      3  Bandwidth Max or Current                 */
    uint32_t :4;                        /**< bit:   4..7  Reserved */
    uint32_t RQ_WD_P0:1;                /**< bit:      8  Request or Word from Port X              */
    uint32_t RQ_WD_P1:1;                /**< bit:      9  Request or Word from Port X              */
    uint32_t RQ_WD_P2:1;                /**< bit:     10  Request or Word from Port X              */
    uint32_t RQ_WD_P3:1;                /**< bit:     11  Request or Word from Port X              */
    uint32_t RQ_WD_P4:1;                /**< bit:     12  Request or Word from Port X              */
    uint32_t RQ_WD_P5:1;                /**< bit:     13  Request or Word from Port X              */
    uint32_t RQ_WD_P6:1;                /**< bit:     14  Request or Word from Port X              */
    uint32_t RQ_WD_P7:1;                /**< bit:     15  Request or Word from Port X              */
    uint32_t MA_PR_P0:1;                /**< bit:     16  Master or Software Provide Information   */
    uint32_t MA_PR_P1:1;                /**< bit:     17  Master or Software Provide Information   */
    uint32_t MA_PR_P2:1;                /**< bit:     18  Master or Software Provide Information   */
    uint32_t MA_PR_P3:1;                /**< bit:     19  Master or Software Provide Information   */
    uint32_t MA_PR_P4:1;                /**< bit:     20  Master or Software Provide Information   */
    uint32_t MA_PR_P5:1;                /**< bit:     21  Master or Software Provide Information   */
    uint32_t MA_PR_P6:1;                /**< bit:     22  Master or Software Provide Information   */
    uint32_t MA_PR_P7:1;                /**< bit:     23  Master or Software Provide Information   */
    uint32_t BDW_BURST_P0:1;            /**< bit:     24  Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X */
    uint32_t BDW_BURST_P1:1;            /**< bit:     25  Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X */
    uint32_t BDW_BURST_P2:1;            /**< bit:     26  Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X */
    uint32_t BDW_BURST_P3:1;            /**< bit:     27  Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X */
    uint32_t BDW_BURST_P4:1;            /**< bit:     28  Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X */
    uint32_t BDW_BURST_P5:1;            /**< bit:     29  Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X */
    uint32_t BDW_BURST_P6:1;            /**< bit:     30  Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X */
    uint32_t BDW_BURST_P7:1;            /**< bit:     31  Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t RQ_WD_P:8;                 /**< bit:  8..15  Request or Word from Port X              */
    uint32_t MA_PR_P:8;                 /**< bit: 16..23  Master or Software Provide Information   */
    uint32_t BDW_BURST_P:8;             /**< bit: 24..31  Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_CONF_ARBITER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_CONF_ARBITER_OFFSET          (0x44)                                        /**<  (MPDDRC_CONF_ARBITER) Configuration Arbiter Register  Offset */

#define MPDDRC_CONF_ARBITER_ARB_Pos         0                                              /**< (MPDDRC_CONF_ARBITER) Type of Arbitration Position */
#define MPDDRC_CONF_ARBITER_ARB_Msk         (_U_(0x3) << MPDDRC_CONF_ARBITER_ARB_Pos)      /**< (MPDDRC_CONF_ARBITER) Type of Arbitration Mask */
#define MPDDRC_CONF_ARBITER_ARB(value)      (MPDDRC_CONF_ARBITER_ARB_Msk & ((value) << MPDDRC_CONF_ARBITER_ARB_Pos))
#define   MPDDRC_CONF_ARBITER_ARB_ROUND_Val _U_(0x0)                                       /**< (MPDDRC_CONF_ARBITER) Round Robin  */
#define   MPDDRC_CONF_ARBITER_ARB_NB_REQUEST_Val _U_(0x1)                                       /**< (MPDDRC_CONF_ARBITER) Request Policy  */
#define   MPDDRC_CONF_ARBITER_ARB_BANDWIDTH_Val _U_(0x2)                                       /**< (MPDDRC_CONF_ARBITER) Bandwidth Policy  */
#define MPDDRC_CONF_ARBITER_ARB_ROUND       (MPDDRC_CONF_ARBITER_ARB_ROUND_Val << MPDDRC_CONF_ARBITER_ARB_Pos)  /**< (MPDDRC_CONF_ARBITER) Round Robin Position  */
#define MPDDRC_CONF_ARBITER_ARB_NB_REQUEST  (MPDDRC_CONF_ARBITER_ARB_NB_REQUEST_Val << MPDDRC_CONF_ARBITER_ARB_Pos)  /**< (MPDDRC_CONF_ARBITER) Request Policy Position  */
#define MPDDRC_CONF_ARBITER_ARB_BANDWIDTH   (MPDDRC_CONF_ARBITER_ARB_BANDWIDTH_Val << MPDDRC_CONF_ARBITER_ARB_Pos)  /**< (MPDDRC_CONF_ARBITER) Bandwidth Policy Position  */
#define MPDDRC_CONF_ARBITER_BDW_MAX_CUR_Pos 3                                              /**< (MPDDRC_CONF_ARBITER) Bandwidth Max or Current Position */
#define MPDDRC_CONF_ARBITER_BDW_MAX_CUR_Msk (_U_(0x1) << MPDDRC_CONF_ARBITER_BDW_MAX_CUR_Pos)  /**< (MPDDRC_CONF_ARBITER) Bandwidth Max or Current Mask */
#define MPDDRC_CONF_ARBITER_BDW_MAX_CUR     MPDDRC_CONF_ARBITER_BDW_MAX_CUR_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_BDW_MAX_CUR_Msk instead */
#define MPDDRC_CONF_ARBITER_RQ_WD_P0_Pos    8                                              /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P0_Msk    (_U_(0x1) << MPDDRC_CONF_ARBITER_RQ_WD_P0_Pos)  /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Mask */
#define MPDDRC_CONF_ARBITER_RQ_WD_P0        MPDDRC_CONF_ARBITER_RQ_WD_P0_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_RQ_WD_P0_Msk instead */
#define MPDDRC_CONF_ARBITER_RQ_WD_P1_Pos    9                                              /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P1_Msk    (_U_(0x1) << MPDDRC_CONF_ARBITER_RQ_WD_P1_Pos)  /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Mask */
#define MPDDRC_CONF_ARBITER_RQ_WD_P1        MPDDRC_CONF_ARBITER_RQ_WD_P1_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_RQ_WD_P1_Msk instead */
#define MPDDRC_CONF_ARBITER_RQ_WD_P2_Pos    10                                             /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P2_Msk    (_U_(0x1) << MPDDRC_CONF_ARBITER_RQ_WD_P2_Pos)  /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Mask */
#define MPDDRC_CONF_ARBITER_RQ_WD_P2        MPDDRC_CONF_ARBITER_RQ_WD_P2_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_RQ_WD_P2_Msk instead */
#define MPDDRC_CONF_ARBITER_RQ_WD_P3_Pos    11                                             /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P3_Msk    (_U_(0x1) << MPDDRC_CONF_ARBITER_RQ_WD_P3_Pos)  /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Mask */
#define MPDDRC_CONF_ARBITER_RQ_WD_P3        MPDDRC_CONF_ARBITER_RQ_WD_P3_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_RQ_WD_P3_Msk instead */
#define MPDDRC_CONF_ARBITER_RQ_WD_P4_Pos    12                                             /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P4_Msk    (_U_(0x1) << MPDDRC_CONF_ARBITER_RQ_WD_P4_Pos)  /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Mask */
#define MPDDRC_CONF_ARBITER_RQ_WD_P4        MPDDRC_CONF_ARBITER_RQ_WD_P4_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_RQ_WD_P4_Msk instead */
#define MPDDRC_CONF_ARBITER_RQ_WD_P5_Pos    13                                             /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P5_Msk    (_U_(0x1) << MPDDRC_CONF_ARBITER_RQ_WD_P5_Pos)  /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Mask */
#define MPDDRC_CONF_ARBITER_RQ_WD_P5        MPDDRC_CONF_ARBITER_RQ_WD_P5_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_RQ_WD_P5_Msk instead */
#define MPDDRC_CONF_ARBITER_RQ_WD_P6_Pos    14                                             /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P6_Msk    (_U_(0x1) << MPDDRC_CONF_ARBITER_RQ_WD_P6_Pos)  /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Mask */
#define MPDDRC_CONF_ARBITER_RQ_WD_P6        MPDDRC_CONF_ARBITER_RQ_WD_P6_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_RQ_WD_P6_Msk instead */
#define MPDDRC_CONF_ARBITER_RQ_WD_P7_Pos    15                                             /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P7_Msk    (_U_(0x1) << MPDDRC_CONF_ARBITER_RQ_WD_P7_Pos)  /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Mask */
#define MPDDRC_CONF_ARBITER_RQ_WD_P7        MPDDRC_CONF_ARBITER_RQ_WD_P7_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_RQ_WD_P7_Msk instead */
#define MPDDRC_CONF_ARBITER_MA_PR_P0_Pos    16                                             /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P0_Msk    (_U_(0x1) << MPDDRC_CONF_ARBITER_MA_PR_P0_Pos)  /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Mask */
#define MPDDRC_CONF_ARBITER_MA_PR_P0        MPDDRC_CONF_ARBITER_MA_PR_P0_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_MA_PR_P0_Msk instead */
#define MPDDRC_CONF_ARBITER_MA_PR_P1_Pos    17                                             /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P1_Msk    (_U_(0x1) << MPDDRC_CONF_ARBITER_MA_PR_P1_Pos)  /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Mask */
#define MPDDRC_CONF_ARBITER_MA_PR_P1        MPDDRC_CONF_ARBITER_MA_PR_P1_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_MA_PR_P1_Msk instead */
#define MPDDRC_CONF_ARBITER_MA_PR_P2_Pos    18                                             /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P2_Msk    (_U_(0x1) << MPDDRC_CONF_ARBITER_MA_PR_P2_Pos)  /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Mask */
#define MPDDRC_CONF_ARBITER_MA_PR_P2        MPDDRC_CONF_ARBITER_MA_PR_P2_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_MA_PR_P2_Msk instead */
#define MPDDRC_CONF_ARBITER_MA_PR_P3_Pos    19                                             /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P3_Msk    (_U_(0x1) << MPDDRC_CONF_ARBITER_MA_PR_P3_Pos)  /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Mask */
#define MPDDRC_CONF_ARBITER_MA_PR_P3        MPDDRC_CONF_ARBITER_MA_PR_P3_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_MA_PR_P3_Msk instead */
#define MPDDRC_CONF_ARBITER_MA_PR_P4_Pos    20                                             /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P4_Msk    (_U_(0x1) << MPDDRC_CONF_ARBITER_MA_PR_P4_Pos)  /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Mask */
#define MPDDRC_CONF_ARBITER_MA_PR_P4        MPDDRC_CONF_ARBITER_MA_PR_P4_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_MA_PR_P4_Msk instead */
#define MPDDRC_CONF_ARBITER_MA_PR_P5_Pos    21                                             /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P5_Msk    (_U_(0x1) << MPDDRC_CONF_ARBITER_MA_PR_P5_Pos)  /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Mask */
#define MPDDRC_CONF_ARBITER_MA_PR_P5        MPDDRC_CONF_ARBITER_MA_PR_P5_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_MA_PR_P5_Msk instead */
#define MPDDRC_CONF_ARBITER_MA_PR_P6_Pos    22                                             /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P6_Msk    (_U_(0x1) << MPDDRC_CONF_ARBITER_MA_PR_P6_Pos)  /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Mask */
#define MPDDRC_CONF_ARBITER_MA_PR_P6        MPDDRC_CONF_ARBITER_MA_PR_P6_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_MA_PR_P6_Msk instead */
#define MPDDRC_CONF_ARBITER_MA_PR_P7_Pos    23                                             /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P7_Msk    (_U_(0x1) << MPDDRC_CONF_ARBITER_MA_PR_P7_Pos)  /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Mask */
#define MPDDRC_CONF_ARBITER_MA_PR_P7        MPDDRC_CONF_ARBITER_MA_PR_P7_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_MA_PR_P7_Msk instead */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P0_Pos 24                                             /**< (MPDDRC_CONF_ARBITER) Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P0_Msk (_U_(0x1) << MPDDRC_CONF_ARBITER_BDW_BURST_P0_Pos)  /**< (MPDDRC_CONF_ARBITER) Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X Mask */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P0    MPDDRC_CONF_ARBITER_BDW_BURST_P0_Msk           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_BDW_BURST_P0_Msk instead */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P1_Pos 25                                             /**< (MPDDRC_CONF_ARBITER) Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P1_Msk (_U_(0x1) << MPDDRC_CONF_ARBITER_BDW_BURST_P1_Pos)  /**< (MPDDRC_CONF_ARBITER) Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X Mask */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P1    MPDDRC_CONF_ARBITER_BDW_BURST_P1_Msk           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_BDW_BURST_P1_Msk instead */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P2_Pos 26                                             /**< (MPDDRC_CONF_ARBITER) Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P2_Msk (_U_(0x1) << MPDDRC_CONF_ARBITER_BDW_BURST_P2_Pos)  /**< (MPDDRC_CONF_ARBITER) Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X Mask */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P2    MPDDRC_CONF_ARBITER_BDW_BURST_P2_Msk           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_BDW_BURST_P2_Msk instead */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P3_Pos 27                                             /**< (MPDDRC_CONF_ARBITER) Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P3_Msk (_U_(0x1) << MPDDRC_CONF_ARBITER_BDW_BURST_P3_Pos)  /**< (MPDDRC_CONF_ARBITER) Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X Mask */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P3    MPDDRC_CONF_ARBITER_BDW_BURST_P3_Msk           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_BDW_BURST_P3_Msk instead */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P4_Pos 28                                             /**< (MPDDRC_CONF_ARBITER) Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P4_Msk (_U_(0x1) << MPDDRC_CONF_ARBITER_BDW_BURST_P4_Pos)  /**< (MPDDRC_CONF_ARBITER) Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X Mask */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P4    MPDDRC_CONF_ARBITER_BDW_BURST_P4_Msk           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_BDW_BURST_P4_Msk instead */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P5_Pos 29                                             /**< (MPDDRC_CONF_ARBITER) Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P5_Msk (_U_(0x1) << MPDDRC_CONF_ARBITER_BDW_BURST_P5_Pos)  /**< (MPDDRC_CONF_ARBITER) Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X Mask */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P5    MPDDRC_CONF_ARBITER_BDW_BURST_P5_Msk           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_BDW_BURST_P5_Msk instead */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P6_Pos 30                                             /**< (MPDDRC_CONF_ARBITER) Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P6_Msk (_U_(0x1) << MPDDRC_CONF_ARBITER_BDW_BURST_P6_Pos)  /**< (MPDDRC_CONF_ARBITER) Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X Mask */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P6    MPDDRC_CONF_ARBITER_BDW_BURST_P6_Msk           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_BDW_BURST_P6_Msk instead */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P7_Pos 31                                             /**< (MPDDRC_CONF_ARBITER) Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P7_Msk (_U_(0x1) << MPDDRC_CONF_ARBITER_BDW_BURST_P7_Pos)  /**< (MPDDRC_CONF_ARBITER) Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X Mask */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P7    MPDDRC_CONF_ARBITER_BDW_BURST_P7_Msk           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_CONF_ARBITER_BDW_BURST_P7_Msk instead */
#define MPDDRC_CONF_ARBITER_MASK            _U_(0xFFFFFF0B)                                /**< \deprecated (MPDDRC_CONF_ARBITER) Register MASK  (Use MPDDRC_CONF_ARBITER_Msk instead)  */
#define MPDDRC_CONF_ARBITER_Msk             _U_(0xFFFFFF0B)                                /**< (MPDDRC_CONF_ARBITER) Register Mask  */

#define MPDDRC_CONF_ARBITER_RQ_WD_P_Pos     8                                              /**< (MPDDRC_CONF_ARBITER Position) Request or Word from Port X */
#define MPDDRC_CONF_ARBITER_RQ_WD_P_Msk     (_U_(0xFF) << MPDDRC_CONF_ARBITER_RQ_WD_P_Pos)  /**< (MPDDRC_CONF_ARBITER Mask) RQ_WD_P */
#define MPDDRC_CONF_ARBITER_RQ_WD_P(value)  (MPDDRC_CONF_ARBITER_RQ_WD_P_Msk & ((value) << MPDDRC_CONF_ARBITER_RQ_WD_P_Pos))  
#define MPDDRC_CONF_ARBITER_MA_PR_P_Pos     16                                             /**< (MPDDRC_CONF_ARBITER Position) Master or Software Provide Information */
#define MPDDRC_CONF_ARBITER_MA_PR_P_Msk     (_U_(0xFF) << MPDDRC_CONF_ARBITER_MA_PR_P_Pos)  /**< (MPDDRC_CONF_ARBITER Mask) MA_PR_P */
#define MPDDRC_CONF_ARBITER_MA_PR_P(value)  (MPDDRC_CONF_ARBITER_MA_PR_P_Msk & ((value) << MPDDRC_CONF_ARBITER_MA_PR_P_Pos))  
#define MPDDRC_CONF_ARBITER_BDW_BURST_P_Pos 24                                             /**< (MPDDRC_CONF_ARBITER Position) Bandwidth is Reached or Bandwidth and Current Burst Access is Ended on port X */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P_Msk (_U_(0xFF) << MPDDRC_CONF_ARBITER_BDW_BURST_P_Pos)  /**< (MPDDRC_CONF_ARBITER Mask) BDW_BURST_P */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P(value) (MPDDRC_CONF_ARBITER_BDW_BURST_P_Msk & ((value) << MPDDRC_CONF_ARBITER_BDW_BURST_P_Pos))  

/* -------- MPDDRC_TIMEOUT : (MPDDRC Offset: 0x48) (R/W 32) Timeout Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TIMEOUT_P0:4;              /**< bit:   0..3  Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 */
    uint32_t TIMEOUT_P1:4;              /**< bit:   4..7  Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 */
    uint32_t TIMEOUT_P2:4;              /**< bit:  8..11  Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 */
    uint32_t TIMEOUT_P3:4;              /**< bit: 12..15  Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 */
    uint32_t TIMEOUT_P4:4;              /**< bit: 16..19  Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 */
    uint32_t TIMEOUT_P5:4;              /**< bit: 20..23  Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 */
    uint32_t TIMEOUT_P6:4;              /**< bit: 24..27  Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 */
    uint32_t TIMEOUT_P7:4;              /**< bit: 28..31  Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_TIMEOUT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_TIMEOUT_OFFSET               (0x48)                                        /**<  (MPDDRC_TIMEOUT) Timeout Register  Offset */

#define MPDDRC_TIMEOUT_TIMEOUT_P0_Pos       0                                              /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 Position */
#define MPDDRC_TIMEOUT_TIMEOUT_P0_Msk       (_U_(0xF) << MPDDRC_TIMEOUT_TIMEOUT_P0_Pos)    /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 Mask */
#define MPDDRC_TIMEOUT_TIMEOUT_P0(value)    (MPDDRC_TIMEOUT_TIMEOUT_P0_Msk & ((value) << MPDDRC_TIMEOUT_TIMEOUT_P0_Pos))
#define MPDDRC_TIMEOUT_TIMEOUT_P1_Pos       4                                              /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 Position */
#define MPDDRC_TIMEOUT_TIMEOUT_P1_Msk       (_U_(0xF) << MPDDRC_TIMEOUT_TIMEOUT_P1_Pos)    /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 Mask */
#define MPDDRC_TIMEOUT_TIMEOUT_P1(value)    (MPDDRC_TIMEOUT_TIMEOUT_P1_Msk & ((value) << MPDDRC_TIMEOUT_TIMEOUT_P1_Pos))
#define MPDDRC_TIMEOUT_TIMEOUT_P2_Pos       8                                              /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 Position */
#define MPDDRC_TIMEOUT_TIMEOUT_P2_Msk       (_U_(0xF) << MPDDRC_TIMEOUT_TIMEOUT_P2_Pos)    /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 Mask */
#define MPDDRC_TIMEOUT_TIMEOUT_P2(value)    (MPDDRC_TIMEOUT_TIMEOUT_P2_Msk & ((value) << MPDDRC_TIMEOUT_TIMEOUT_P2_Pos))
#define MPDDRC_TIMEOUT_TIMEOUT_P3_Pos       12                                             /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 Position */
#define MPDDRC_TIMEOUT_TIMEOUT_P3_Msk       (_U_(0xF) << MPDDRC_TIMEOUT_TIMEOUT_P3_Pos)    /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 Mask */
#define MPDDRC_TIMEOUT_TIMEOUT_P3(value)    (MPDDRC_TIMEOUT_TIMEOUT_P3_Msk & ((value) << MPDDRC_TIMEOUT_TIMEOUT_P3_Pos))
#define MPDDRC_TIMEOUT_TIMEOUT_P4_Pos       16                                             /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 Position */
#define MPDDRC_TIMEOUT_TIMEOUT_P4_Msk       (_U_(0xF) << MPDDRC_TIMEOUT_TIMEOUT_P4_Pos)    /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 Mask */
#define MPDDRC_TIMEOUT_TIMEOUT_P4(value)    (MPDDRC_TIMEOUT_TIMEOUT_P4_Msk & ((value) << MPDDRC_TIMEOUT_TIMEOUT_P4_Pos))
#define MPDDRC_TIMEOUT_TIMEOUT_P5_Pos       20                                             /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 Position */
#define MPDDRC_TIMEOUT_TIMEOUT_P5_Msk       (_U_(0xF) << MPDDRC_TIMEOUT_TIMEOUT_P5_Pos)    /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 Mask */
#define MPDDRC_TIMEOUT_TIMEOUT_P5(value)    (MPDDRC_TIMEOUT_TIMEOUT_P5_Msk & ((value) << MPDDRC_TIMEOUT_TIMEOUT_P5_Pos))
#define MPDDRC_TIMEOUT_TIMEOUT_P6_Pos       24                                             /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 Position */
#define MPDDRC_TIMEOUT_TIMEOUT_P6_Msk       (_U_(0xF) << MPDDRC_TIMEOUT_TIMEOUT_P6_Pos)    /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 Mask */
#define MPDDRC_TIMEOUT_TIMEOUT_P6(value)    (MPDDRC_TIMEOUT_TIMEOUT_P6_Msk & ((value) << MPDDRC_TIMEOUT_TIMEOUT_P6_Pos))
#define MPDDRC_TIMEOUT_TIMEOUT_P7_Pos       28                                             /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 Position */
#define MPDDRC_TIMEOUT_TIMEOUT_P7_Msk       (_U_(0xF) << MPDDRC_TIMEOUT_TIMEOUT_P7_Pos)    /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 and 7 Mask */
#define MPDDRC_TIMEOUT_TIMEOUT_P7(value)    (MPDDRC_TIMEOUT_TIMEOUT_P7_Msk & ((value) << MPDDRC_TIMEOUT_TIMEOUT_P7_Pos))
#define MPDDRC_TIMEOUT_MASK                 _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_TIMEOUT) Register MASK  (Use MPDDRC_TIMEOUT_Msk instead)  */
#define MPDDRC_TIMEOUT_Msk                  _U_(0xFFFFFFFF)                                /**< (MPDDRC_TIMEOUT) Register Mask  */


/* -------- MPDDRC_REQ_PORT_0123 : (MPDDRC Offset: 0x4c) (R/W 32) Request Port 0-1-2-3 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NRQ_NWD_BDW_P0:8;          /**< bit:   0..7  Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 */
    uint32_t NRQ_NWD_BDW_P1:8;          /**< bit:  8..15  Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 */
    uint32_t NRQ_NWD_BDW_P2:8;          /**< bit: 16..23  Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 */
    uint32_t NRQ_NWD_BDW_P3:8;          /**< bit: 24..31  Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_REQ_PORT_0123_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_REQ_PORT_0123_OFFSET         (0x4C)                                        /**<  (MPDDRC_REQ_PORT_0123) Request Port 0-1-2-3 Register  Offset */

#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P0_Pos 0                                              /**< (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Position */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P0_Msk (_U_(0xFF) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P0_Pos)  /**< (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Mask */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P0(value) (MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P0_Msk & ((value) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P0_Pos))
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P1_Pos 8                                              /**< (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Position */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P1_Msk (_U_(0xFF) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P1_Pos)  /**< (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Mask */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P1(value) (MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P1_Msk & ((value) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P1_Pos))
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P2_Pos 16                                             /**< (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Position */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P2_Msk (_U_(0xFF) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P2_Pos)  /**< (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Mask */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P2(value) (MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P2_Msk & ((value) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P2_Pos))
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P3_Pos 24                                             /**< (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Position */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P3_Msk (_U_(0xFF) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P3_Pos)  /**< (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Mask */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P3(value) (MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P3_Msk & ((value) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P3_Pos))
#define MPDDRC_REQ_PORT_0123_MASK           _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_REQ_PORT_0123) Register MASK  (Use MPDDRC_REQ_PORT_0123_Msk instead)  */
#define MPDDRC_REQ_PORT_0123_Msk            _U_(0xFFFFFFFF)                                /**< (MPDDRC_REQ_PORT_0123) Register Mask  */


/* -------- MPDDRC_REQ_PORT_4567 : (MPDDRC Offset: 0x50) (R/W 32) Request Port 4-5-6-7 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NRQ_NWD_BDW_P4:8;          /**< bit:   0..7  Number of Requests, Number of Words or Bandwidth allocation from port 4-5-6-7 */
    uint32_t NRQ_NWD_BDW_P5:8;          /**< bit:  8..15  Number of Requests, Number of Words or Bandwidth allocation from port 4-5-6-7 */
    uint32_t NRQ_NWD_BDW_P6:8;          /**< bit: 16..23  Number of Requests, Number of Words or Bandwidth allocation from port 4-5-6-7 */
    uint32_t NRQ_NWD_BDW_P7:8;          /**< bit: 24..31  Number of Requests, Number of Words or Bandwidth allocation from port 4-5-6-7 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_REQ_PORT_4567_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_REQ_PORT_4567_OFFSET         (0x50)                                        /**<  (MPDDRC_REQ_PORT_4567) Request Port 4-5-6-7 Register  Offset */

#define MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P4_Pos 0                                              /**< (MPDDRC_REQ_PORT_4567) Number of Requests, Number of Words or Bandwidth allocation from port 4-5-6-7 Position */
#define MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P4_Msk (_U_(0xFF) << MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P4_Pos)  /**< (MPDDRC_REQ_PORT_4567) Number of Requests, Number of Words or Bandwidth allocation from port 4-5-6-7 Mask */
#define MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P4(value) (MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P4_Msk & ((value) << MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P4_Pos))
#define MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P5_Pos 8                                              /**< (MPDDRC_REQ_PORT_4567) Number of Requests, Number of Words or Bandwidth allocation from port 4-5-6-7 Position */
#define MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P5_Msk (_U_(0xFF) << MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P5_Pos)  /**< (MPDDRC_REQ_PORT_4567) Number of Requests, Number of Words or Bandwidth allocation from port 4-5-6-7 Mask */
#define MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P5(value) (MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P5_Msk & ((value) << MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P5_Pos))
#define MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P6_Pos 16                                             /**< (MPDDRC_REQ_PORT_4567) Number of Requests, Number of Words or Bandwidth allocation from port 4-5-6-7 Position */
#define MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P6_Msk (_U_(0xFF) << MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P6_Pos)  /**< (MPDDRC_REQ_PORT_4567) Number of Requests, Number of Words or Bandwidth allocation from port 4-5-6-7 Mask */
#define MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P6(value) (MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P6_Msk & ((value) << MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P6_Pos))
#define MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P7_Pos 24                                             /**< (MPDDRC_REQ_PORT_4567) Number of Requests, Number of Words or Bandwidth allocation from port 4-5-6-7 Position */
#define MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P7_Msk (_U_(0xFF) << MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P7_Pos)  /**< (MPDDRC_REQ_PORT_4567) Number of Requests, Number of Words or Bandwidth allocation from port 4-5-6-7 Mask */
#define MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P7(value) (MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P7_Msk & ((value) << MPDDRC_REQ_PORT_4567_NRQ_NWD_BDW_P7_Pos))
#define MPDDRC_REQ_PORT_4567_MASK           _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_REQ_PORT_4567) Register MASK  (Use MPDDRC_REQ_PORT_4567_Msk instead)  */
#define MPDDRC_REQ_PORT_4567_Msk            _U_(0xFFFFFFFF)                                /**< (MPDDRC_REQ_PORT_4567) Register Mask  */


/* -------- MPDDRC_BDW_PORT_0123 : (MPDDRC Offset: 0x54) (R/ 32) Current/Maximum Bandwidth Port 0-1-2-3 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BDW_P0:7;                  /**< bit:   0..6  Current/Maximum Bandwidth from Port 0-1-2-3 */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t BDW_P1:7;                  /**< bit:  8..14  Current/Maximum Bandwidth from Port 0-1-2-3 */
    uint32_t :1;                        /**< bit:     15  Reserved */
    uint32_t BDW_P2:7;                  /**< bit: 16..22  Current/Maximum Bandwidth from Port 0-1-2-3 */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t BDW_P3:7;                  /**< bit: 24..30  Current/Maximum Bandwidth from Port 0-1-2-3 */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_BDW_PORT_0123_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_BDW_PORT_0123_OFFSET         (0x54)                                        /**<  (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth Port 0-1-2-3 Register  Offset */

#define MPDDRC_BDW_PORT_0123_BDW_P0_Pos     0                                              /**< (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Position */
#define MPDDRC_BDW_PORT_0123_BDW_P0_Msk     (_U_(0x7F) << MPDDRC_BDW_PORT_0123_BDW_P0_Pos)  /**< (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Mask */
#define MPDDRC_BDW_PORT_0123_BDW_P0(value)  (MPDDRC_BDW_PORT_0123_BDW_P0_Msk & ((value) << MPDDRC_BDW_PORT_0123_BDW_P0_Pos))
#define MPDDRC_BDW_PORT_0123_BDW_P1_Pos     8                                              /**< (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Position */
#define MPDDRC_BDW_PORT_0123_BDW_P1_Msk     (_U_(0x7F) << MPDDRC_BDW_PORT_0123_BDW_P1_Pos)  /**< (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Mask */
#define MPDDRC_BDW_PORT_0123_BDW_P1(value)  (MPDDRC_BDW_PORT_0123_BDW_P1_Msk & ((value) << MPDDRC_BDW_PORT_0123_BDW_P1_Pos))
#define MPDDRC_BDW_PORT_0123_BDW_P2_Pos     16                                             /**< (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Position */
#define MPDDRC_BDW_PORT_0123_BDW_P2_Msk     (_U_(0x7F) << MPDDRC_BDW_PORT_0123_BDW_P2_Pos)  /**< (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Mask */
#define MPDDRC_BDW_PORT_0123_BDW_P2(value)  (MPDDRC_BDW_PORT_0123_BDW_P2_Msk & ((value) << MPDDRC_BDW_PORT_0123_BDW_P2_Pos))
#define MPDDRC_BDW_PORT_0123_BDW_P3_Pos     24                                             /**< (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Position */
#define MPDDRC_BDW_PORT_0123_BDW_P3_Msk     (_U_(0x7F) << MPDDRC_BDW_PORT_0123_BDW_P3_Pos)  /**< (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Mask */
#define MPDDRC_BDW_PORT_0123_BDW_P3(value)  (MPDDRC_BDW_PORT_0123_BDW_P3_Msk & ((value) << MPDDRC_BDW_PORT_0123_BDW_P3_Pos))
#define MPDDRC_BDW_PORT_0123_MASK           _U_(0x7F7F7F7F)                                /**< \deprecated (MPDDRC_BDW_PORT_0123) Register MASK  (Use MPDDRC_BDW_PORT_0123_Msk instead)  */
#define MPDDRC_BDW_PORT_0123_Msk            _U_(0x7F7F7F7F)                                /**< (MPDDRC_BDW_PORT_0123) Register Mask  */


/* -------- MPDDRC_BDW_PORT_4567 : (MPDDRC Offset: 0x58) (R/ 32) Current/Maximum Bandwidth Port 4-5-6-7 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BDW_P4:7;                  /**< bit:   0..6  Current/Maximum Bandwidth from Port 4-5-6-7 */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t BDW_P5:7;                  /**< bit:  8..14  Current/Maximum Bandwidth from Port 4-5-6-7 */
    uint32_t :1;                        /**< bit:     15  Reserved */
    uint32_t BDW_P6:7;                  /**< bit: 16..22  Current/Maximum Bandwidth from Port 4-5-6-7 */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t BDW_P7:7;                  /**< bit: 24..30  Current/Maximum Bandwidth from Port 4-5-6-7 */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_BDW_PORT_4567_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_BDW_PORT_4567_OFFSET         (0x58)                                        /**<  (MPDDRC_BDW_PORT_4567) Current/Maximum Bandwidth Port 4-5-6-7 Register  Offset */

#define MPDDRC_BDW_PORT_4567_BDW_P4_Pos     0                                              /**< (MPDDRC_BDW_PORT_4567) Current/Maximum Bandwidth from Port 4-5-6-7 Position */
#define MPDDRC_BDW_PORT_4567_BDW_P4_Msk     (_U_(0x7F) << MPDDRC_BDW_PORT_4567_BDW_P4_Pos)  /**< (MPDDRC_BDW_PORT_4567) Current/Maximum Bandwidth from Port 4-5-6-7 Mask */
#define MPDDRC_BDW_PORT_4567_BDW_P4(value)  (MPDDRC_BDW_PORT_4567_BDW_P4_Msk & ((value) << MPDDRC_BDW_PORT_4567_BDW_P4_Pos))
#define MPDDRC_BDW_PORT_4567_BDW_P5_Pos     8                                              /**< (MPDDRC_BDW_PORT_4567) Current/Maximum Bandwidth from Port 4-5-6-7 Position */
#define MPDDRC_BDW_PORT_4567_BDW_P5_Msk     (_U_(0x7F) << MPDDRC_BDW_PORT_4567_BDW_P5_Pos)  /**< (MPDDRC_BDW_PORT_4567) Current/Maximum Bandwidth from Port 4-5-6-7 Mask */
#define MPDDRC_BDW_PORT_4567_BDW_P5(value)  (MPDDRC_BDW_PORT_4567_BDW_P5_Msk & ((value) << MPDDRC_BDW_PORT_4567_BDW_P5_Pos))
#define MPDDRC_BDW_PORT_4567_BDW_P6_Pos     16                                             /**< (MPDDRC_BDW_PORT_4567) Current/Maximum Bandwidth from Port 4-5-6-7 Position */
#define MPDDRC_BDW_PORT_4567_BDW_P6_Msk     (_U_(0x7F) << MPDDRC_BDW_PORT_4567_BDW_P6_Pos)  /**< (MPDDRC_BDW_PORT_4567) Current/Maximum Bandwidth from Port 4-5-6-7 Mask */
#define MPDDRC_BDW_PORT_4567_BDW_P6(value)  (MPDDRC_BDW_PORT_4567_BDW_P6_Msk & ((value) << MPDDRC_BDW_PORT_4567_BDW_P6_Pos))
#define MPDDRC_BDW_PORT_4567_BDW_P7_Pos     24                                             /**< (MPDDRC_BDW_PORT_4567) Current/Maximum Bandwidth from Port 4-5-6-7 Position */
#define MPDDRC_BDW_PORT_4567_BDW_P7_Msk     (_U_(0x7F) << MPDDRC_BDW_PORT_4567_BDW_P7_Pos)  /**< (MPDDRC_BDW_PORT_4567) Current/Maximum Bandwidth from Port 4-5-6-7 Mask */
#define MPDDRC_BDW_PORT_4567_BDW_P7(value)  (MPDDRC_BDW_PORT_4567_BDW_P7_Msk & ((value) << MPDDRC_BDW_PORT_4567_BDW_P7_Pos))
#define MPDDRC_BDW_PORT_4567_MASK           _U_(0x7F7F7F7F)                                /**< \deprecated (MPDDRC_BDW_PORT_4567) Register MASK  (Use MPDDRC_BDW_PORT_4567_Msk instead)  */
#define MPDDRC_BDW_PORT_4567_Msk            _U_(0x7F7F7F7F)                                /**< (MPDDRC_BDW_PORT_4567) Register Mask  */


/* -------- MPDDRC_RD_DATA_PATH : (MPDDRC Offset: 0x5c) (R/W 32) Read Data Path Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SHIFT_SAMPLING:2;          /**< bit:   0..1  Shift Sampling Point of Data             */
    uint32_t :30;                       /**< bit:  2..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_RD_DATA_PATH_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_RD_DATA_PATH_OFFSET          (0x5C)                                        /**<  (MPDDRC_RD_DATA_PATH) Read Data Path Register  Offset */

#define MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Pos 0                                              /**< (MPDDRC_RD_DATA_PATH) Shift Sampling Point of Data Position */
#define MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Msk (_U_(0x3) << MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Pos)  /**< (MPDDRC_RD_DATA_PATH) Shift Sampling Point of Data Mask */
#define MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING(value) (MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Msk & ((value) << MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Pos))
#define   MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_NO_SHIFT_Val _U_(0x0)                                       /**< (MPDDRC_RD_DATA_PATH) Initial sampling point.  */
#define   MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_ONE_CYCLE_Val _U_(0x1)                                       /**< (MPDDRC_RD_DATA_PATH) Sampling point is shifted by one cycle.  */
#define   MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_TWO_CYCLES_Val _U_(0x2)                                       /**< (MPDDRC_RD_DATA_PATH) Sampling point is shifted by two cycles.  */
#define   MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_THREE_CYCLES_Val _U_(0x3)                                       /**< (MPDDRC_RD_DATA_PATH) Sampling point is shifted by three cycles, unique for LPDDR2 and DDR3 and LPDDR3.Not applicable for DDR2 and LPDDR1 devices.  */
#define MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_NO_SHIFT (MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_NO_SHIFT_Val << MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Pos)  /**< (MPDDRC_RD_DATA_PATH) Initial sampling point. Position  */
#define MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_ONE_CYCLE (MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_ONE_CYCLE_Val << MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Pos)  /**< (MPDDRC_RD_DATA_PATH) Sampling point is shifted by one cycle. Position  */
#define MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_TWO_CYCLES (MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_TWO_CYCLES_Val << MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Pos)  /**< (MPDDRC_RD_DATA_PATH) Sampling point is shifted by two cycles. Position  */
#define MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_THREE_CYCLES (MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_THREE_CYCLES_Val << MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Pos)  /**< (MPDDRC_RD_DATA_PATH) Sampling point is shifted by three cycles, unique for LPDDR2 and DDR3 and LPDDR3.Not applicable for DDR2 and LPDDR1 devices. Position  */
#define MPDDRC_RD_DATA_PATH_MASK            _U_(0x03)                                      /**< \deprecated (MPDDRC_RD_DATA_PATH) Register MASK  (Use MPDDRC_RD_DATA_PATH_Msk instead)  */
#define MPDDRC_RD_DATA_PATH_Msk             _U_(0x03)                                      /**< (MPDDRC_RD_DATA_PATH) Register Mask  */


/* -------- MPDDRC_MCFGR : (MPDDRC Offset: 0x60) (R/W 32) Monitor Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t EN_MONI:1;                 /**< bit:      0  Enable Monitor                           */
    uint32_t SOFT_RESET:1;              /**< bit:      1  Soft Reset                               */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t RUN:1;                     /**< bit:      4  Control Monitor                          */
    uint32_t :3;                        /**< bit:   5..7  Reserved */
    uint32_t READ_WRITE:2;              /**< bit:   8..9  Read/Write Access                        */
    uint32_t REFR_CALIB:1;              /**< bit:     10  Refresh Calibration                      */
    uint32_t INFO:2;                    /**< bit: 11..12  Information Type                         */
    uint32_t :19;                       /**< bit: 13..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_MCFGR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_MCFGR_OFFSET                 (0x60)                                        /**<  (MPDDRC_MCFGR) Monitor Configuration Register  Offset */

#define MPDDRC_MCFGR_EN_MONI_Pos            0                                              /**< (MPDDRC_MCFGR) Enable Monitor Position */
#define MPDDRC_MCFGR_EN_MONI_Msk            (_U_(0x1) << MPDDRC_MCFGR_EN_MONI_Pos)         /**< (MPDDRC_MCFGR) Enable Monitor Mask */
#define MPDDRC_MCFGR_EN_MONI                MPDDRC_MCFGR_EN_MONI_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_MCFGR_EN_MONI_Msk instead */
#define MPDDRC_MCFGR_SOFT_RESET_Pos         1                                              /**< (MPDDRC_MCFGR) Soft Reset Position */
#define MPDDRC_MCFGR_SOFT_RESET_Msk         (_U_(0x1) << MPDDRC_MCFGR_SOFT_RESET_Pos)      /**< (MPDDRC_MCFGR) Soft Reset Mask */
#define MPDDRC_MCFGR_SOFT_RESET             MPDDRC_MCFGR_SOFT_RESET_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_MCFGR_SOFT_RESET_Msk instead */
#define MPDDRC_MCFGR_RUN_Pos                4                                              /**< (MPDDRC_MCFGR) Control Monitor Position */
#define MPDDRC_MCFGR_RUN_Msk                (_U_(0x1) << MPDDRC_MCFGR_RUN_Pos)             /**< (MPDDRC_MCFGR) Control Monitor Mask */
#define MPDDRC_MCFGR_RUN                    MPDDRC_MCFGR_RUN_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_MCFGR_RUN_Msk instead */
#define MPDDRC_MCFGR_READ_WRITE_Pos         8                                              /**< (MPDDRC_MCFGR) Read/Write Access Position */
#define MPDDRC_MCFGR_READ_WRITE_Msk         (_U_(0x3) << MPDDRC_MCFGR_READ_WRITE_Pos)      /**< (MPDDRC_MCFGR) Read/Write Access Mask */
#define MPDDRC_MCFGR_READ_WRITE(value)      (MPDDRC_MCFGR_READ_WRITE_Msk & ((value) << MPDDRC_MCFGR_READ_WRITE_Pos))
#define   MPDDRC_MCFGR_READ_WRITE_TRIG_RD_WR_Val _U_(0x0)                                       /**< (MPDDRC_MCFGR) Read and Write accesses are triggered.  */
#define   MPDDRC_MCFGR_READ_WRITE_TRIG_WR_Val _U_(0x1)                                       /**< (MPDDRC_MCFGR) Only Write accesses are triggered.  */
#define   MPDDRC_MCFGR_READ_WRITE_TRIG_RD_Val _U_(0x2)                                       /**< (MPDDRC_MCFGR) Only Read accesses are triggered.  */
#define MPDDRC_MCFGR_READ_WRITE_TRIG_RD_WR  (MPDDRC_MCFGR_READ_WRITE_TRIG_RD_WR_Val << MPDDRC_MCFGR_READ_WRITE_Pos)  /**< (MPDDRC_MCFGR) Read and Write accesses are triggered. Position  */
#define MPDDRC_MCFGR_READ_WRITE_TRIG_WR     (MPDDRC_MCFGR_READ_WRITE_TRIG_WR_Val << MPDDRC_MCFGR_READ_WRITE_Pos)  /**< (MPDDRC_MCFGR) Only Write accesses are triggered. Position  */
#define MPDDRC_MCFGR_READ_WRITE_TRIG_RD     (MPDDRC_MCFGR_READ_WRITE_TRIG_RD_Val << MPDDRC_MCFGR_READ_WRITE_Pos)  /**< (MPDDRC_MCFGR) Only Read accesses are triggered. Position  */
#define MPDDRC_MCFGR_REFR_CALIB_Pos         10                                             /**< (MPDDRC_MCFGR) Refresh Calibration Position */
#define MPDDRC_MCFGR_REFR_CALIB_Msk         (_U_(0x1) << MPDDRC_MCFGR_REFR_CALIB_Pos)      /**< (MPDDRC_MCFGR) Refresh Calibration Mask */
#define MPDDRC_MCFGR_REFR_CALIB             MPDDRC_MCFGR_REFR_CALIB_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_MCFGR_REFR_CALIB_Msk instead */
#define MPDDRC_MCFGR_INFO_Pos               11                                             /**< (MPDDRC_MCFGR) Information Type Position */
#define MPDDRC_MCFGR_INFO_Msk               (_U_(0x3) << MPDDRC_MCFGR_INFO_Pos)            /**< (MPDDRC_MCFGR) Information Type Mask */
#define MPDDRC_MCFGR_INFO(value)            (MPDDRC_MCFGR_INFO_Msk & ((value) << MPDDRC_MCFGR_INFO_Pos))
#define   MPDDRC_MCFGR_INFO_MAX_WAIT_Val    _U_(0x0)                                       /**< (MPDDRC_MCFGR) Information concerning the transfer with the longest waiting time  */
#define   MPDDRC_MCFGR_INFO_NB_TRANSFERS_Val _U_(0x1)                                       /**< (MPDDRC_MCFGR) Number of transfers on the port  */
#define   MPDDRC_MCFGR_INFO_TOTAL_LATENCY_Val _U_(0x2)                                       /**< (MPDDRC_MCFGR) Total latency on the port  */
#define MPDDRC_MCFGR_INFO_MAX_WAIT          (MPDDRC_MCFGR_INFO_MAX_WAIT_Val << MPDDRC_MCFGR_INFO_Pos)  /**< (MPDDRC_MCFGR) Information concerning the transfer with the longest waiting time Position  */
#define MPDDRC_MCFGR_INFO_NB_TRANSFERS      (MPDDRC_MCFGR_INFO_NB_TRANSFERS_Val << MPDDRC_MCFGR_INFO_Pos)  /**< (MPDDRC_MCFGR) Number of transfers on the port Position  */
#define MPDDRC_MCFGR_INFO_TOTAL_LATENCY     (MPDDRC_MCFGR_INFO_TOTAL_LATENCY_Val << MPDDRC_MCFGR_INFO_Pos)  /**< (MPDDRC_MCFGR) Total latency on the port Position  */
#define MPDDRC_MCFGR_MASK                   _U_(0x1F13)                                    /**< \deprecated (MPDDRC_MCFGR) Register MASK  (Use MPDDRC_MCFGR_Msk instead)  */
#define MPDDRC_MCFGR_Msk                    _U_(0x1F13)                                    /**< (MPDDRC_MCFGR) Register Mask  */


/* -------- MPDDRC_MADDR0 : (MPDDRC Offset: 0x64) (R/W 32) Monitor Address High/Low Port 0 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR_LOW_PORT0:16;         /**< bit:  0..15  Address Low on Port x [x = 0..7]         */
    uint32_t ADDR_HIGH_PORT0:16;        /**< bit: 16..31  Address High on Port x [x = 0..7]        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_MADDR0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_MADDR0_OFFSET                (0x64)                                        /**<  (MPDDRC_MADDR0) Monitor Address High/Low Port 0 Register  Offset */

#define MPDDRC_MADDR0_ADDR_LOW_PORT0_Pos    0                                              /**< (MPDDRC_MADDR0) Address Low on Port x [x = 0..7] Position */
#define MPDDRC_MADDR0_ADDR_LOW_PORT0_Msk    (_U_(0xFFFF) << MPDDRC_MADDR0_ADDR_LOW_PORT0_Pos)  /**< (MPDDRC_MADDR0) Address Low on Port x [x = 0..7] Mask */
#define MPDDRC_MADDR0_ADDR_LOW_PORT0(value) (MPDDRC_MADDR0_ADDR_LOW_PORT0_Msk & ((value) << MPDDRC_MADDR0_ADDR_LOW_PORT0_Pos))
#define MPDDRC_MADDR0_ADDR_HIGH_PORT0_Pos   16                                             /**< (MPDDRC_MADDR0) Address High on Port x [x = 0..7] Position */
#define MPDDRC_MADDR0_ADDR_HIGH_PORT0_Msk   (_U_(0xFFFF) << MPDDRC_MADDR0_ADDR_HIGH_PORT0_Pos)  /**< (MPDDRC_MADDR0) Address High on Port x [x = 0..7] Mask */
#define MPDDRC_MADDR0_ADDR_HIGH_PORT0(value) (MPDDRC_MADDR0_ADDR_HIGH_PORT0_Msk & ((value) << MPDDRC_MADDR0_ADDR_HIGH_PORT0_Pos))
#define MPDDRC_MADDR0_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MADDR0) Register MASK  (Use MPDDRC_MADDR0_Msk instead)  */
#define MPDDRC_MADDR0_Msk                   _U_(0xFFFFFFFF)                                /**< (MPDDRC_MADDR0) Register Mask  */


/* -------- MPDDRC_MADDR1 : (MPDDRC Offset: 0x68) (R/W 32) Monitor Address High/Low Port 1 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR_LOW_PORT1:16;         /**< bit:  0..15  Address Low on Port x [x = 0..7]         */
    uint32_t ADDR_HIGH_PORT1:16;        /**< bit: 16..31  Address High on Port x [x = 0..7]        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_MADDR1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_MADDR1_OFFSET                (0x68)                                        /**<  (MPDDRC_MADDR1) Monitor Address High/Low Port 1 Register  Offset */

#define MPDDRC_MADDR1_ADDR_LOW_PORT1_Pos    0                                              /**< (MPDDRC_MADDR1) Address Low on Port x [x = 0..7] Position */
#define MPDDRC_MADDR1_ADDR_LOW_PORT1_Msk    (_U_(0xFFFF) << MPDDRC_MADDR1_ADDR_LOW_PORT1_Pos)  /**< (MPDDRC_MADDR1) Address Low on Port x [x = 0..7] Mask */
#define MPDDRC_MADDR1_ADDR_LOW_PORT1(value) (MPDDRC_MADDR1_ADDR_LOW_PORT1_Msk & ((value) << MPDDRC_MADDR1_ADDR_LOW_PORT1_Pos))
#define MPDDRC_MADDR1_ADDR_HIGH_PORT1_Pos   16                                             /**< (MPDDRC_MADDR1) Address High on Port x [x = 0..7] Position */
#define MPDDRC_MADDR1_ADDR_HIGH_PORT1_Msk   (_U_(0xFFFF) << MPDDRC_MADDR1_ADDR_HIGH_PORT1_Pos)  /**< (MPDDRC_MADDR1) Address High on Port x [x = 0..7] Mask */
#define MPDDRC_MADDR1_ADDR_HIGH_PORT1(value) (MPDDRC_MADDR1_ADDR_HIGH_PORT1_Msk & ((value) << MPDDRC_MADDR1_ADDR_HIGH_PORT1_Pos))
#define MPDDRC_MADDR1_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MADDR1) Register MASK  (Use MPDDRC_MADDR1_Msk instead)  */
#define MPDDRC_MADDR1_Msk                   _U_(0xFFFFFFFF)                                /**< (MPDDRC_MADDR1) Register Mask  */


/* -------- MPDDRC_MADDR2 : (MPDDRC Offset: 0x6c) (R/W 32) Monitor Address High/Low Port 2 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR_LOW_PORT2:16;         /**< bit:  0..15  Address Low on Port x [x = 0..7]         */
    uint32_t ADDR_HIGH_PORT2:16;        /**< bit: 16..31  Address High on Port x [x = 0..7]        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_MADDR2_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_MADDR2_OFFSET                (0x6C)                                        /**<  (MPDDRC_MADDR2) Monitor Address High/Low Port 2 Register  Offset */

#define MPDDRC_MADDR2_ADDR_LOW_PORT2_Pos    0                                              /**< (MPDDRC_MADDR2) Address Low on Port x [x = 0..7] Position */
#define MPDDRC_MADDR2_ADDR_LOW_PORT2_Msk    (_U_(0xFFFF) << MPDDRC_MADDR2_ADDR_LOW_PORT2_Pos)  /**< (MPDDRC_MADDR2) Address Low on Port x [x = 0..7] Mask */
#define MPDDRC_MADDR2_ADDR_LOW_PORT2(value) (MPDDRC_MADDR2_ADDR_LOW_PORT2_Msk & ((value) << MPDDRC_MADDR2_ADDR_LOW_PORT2_Pos))
#define MPDDRC_MADDR2_ADDR_HIGH_PORT2_Pos   16                                             /**< (MPDDRC_MADDR2) Address High on Port x [x = 0..7] Position */
#define MPDDRC_MADDR2_ADDR_HIGH_PORT2_Msk   (_U_(0xFFFF) << MPDDRC_MADDR2_ADDR_HIGH_PORT2_Pos)  /**< (MPDDRC_MADDR2) Address High on Port x [x = 0..7] Mask */
#define MPDDRC_MADDR2_ADDR_HIGH_PORT2(value) (MPDDRC_MADDR2_ADDR_HIGH_PORT2_Msk & ((value) << MPDDRC_MADDR2_ADDR_HIGH_PORT2_Pos))
#define MPDDRC_MADDR2_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MADDR2) Register MASK  (Use MPDDRC_MADDR2_Msk instead)  */
#define MPDDRC_MADDR2_Msk                   _U_(0xFFFFFFFF)                                /**< (MPDDRC_MADDR2) Register Mask  */


/* -------- MPDDRC_MADDR3 : (MPDDRC Offset: 0x70) (R/W 32) Monitor Address High/Low Port 3 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR_LOW_PORT3:16;         /**< bit:  0..15  Address Low on Port x [x = 0..7]         */
    uint32_t ADDR_HIGH_PORT3:16;        /**< bit: 16..31  Address High on Port x [x = 0..7]        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_MADDR3_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_MADDR3_OFFSET                (0x70)                                        /**<  (MPDDRC_MADDR3) Monitor Address High/Low Port 3 Register  Offset */

#define MPDDRC_MADDR3_ADDR_LOW_PORT3_Pos    0                                              /**< (MPDDRC_MADDR3) Address Low on Port x [x = 0..7] Position */
#define MPDDRC_MADDR3_ADDR_LOW_PORT3_Msk    (_U_(0xFFFF) << MPDDRC_MADDR3_ADDR_LOW_PORT3_Pos)  /**< (MPDDRC_MADDR3) Address Low on Port x [x = 0..7] Mask */
#define MPDDRC_MADDR3_ADDR_LOW_PORT3(value) (MPDDRC_MADDR3_ADDR_LOW_PORT3_Msk & ((value) << MPDDRC_MADDR3_ADDR_LOW_PORT3_Pos))
#define MPDDRC_MADDR3_ADDR_HIGH_PORT3_Pos   16                                             /**< (MPDDRC_MADDR3) Address High on Port x [x = 0..7] Position */
#define MPDDRC_MADDR3_ADDR_HIGH_PORT3_Msk   (_U_(0xFFFF) << MPDDRC_MADDR3_ADDR_HIGH_PORT3_Pos)  /**< (MPDDRC_MADDR3) Address High on Port x [x = 0..7] Mask */
#define MPDDRC_MADDR3_ADDR_HIGH_PORT3(value) (MPDDRC_MADDR3_ADDR_HIGH_PORT3_Msk & ((value) << MPDDRC_MADDR3_ADDR_HIGH_PORT3_Pos))
#define MPDDRC_MADDR3_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MADDR3) Register MASK  (Use MPDDRC_MADDR3_Msk instead)  */
#define MPDDRC_MADDR3_Msk                   _U_(0xFFFFFFFF)                                /**< (MPDDRC_MADDR3) Register Mask  */


/* -------- MPDDRC_MADDR4 : (MPDDRC Offset: 0x74) (R/W 32) Monitor Address High/Low Port 4 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR_LOW_PORT4:16;         /**< bit:  0..15  Address Low on Port x [x = 0..7]         */
    uint32_t ADDR_HIGH_PORT4:16;        /**< bit: 16..31  Address High on Port x [x = 0..7]        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_MADDR4_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_MADDR4_OFFSET                (0x74)                                        /**<  (MPDDRC_MADDR4) Monitor Address High/Low Port 4 Register  Offset */

#define MPDDRC_MADDR4_ADDR_LOW_PORT4_Pos    0                                              /**< (MPDDRC_MADDR4) Address Low on Port x [x = 0..7] Position */
#define MPDDRC_MADDR4_ADDR_LOW_PORT4_Msk    (_U_(0xFFFF) << MPDDRC_MADDR4_ADDR_LOW_PORT4_Pos)  /**< (MPDDRC_MADDR4) Address Low on Port x [x = 0..7] Mask */
#define MPDDRC_MADDR4_ADDR_LOW_PORT4(value) (MPDDRC_MADDR4_ADDR_LOW_PORT4_Msk & ((value) << MPDDRC_MADDR4_ADDR_LOW_PORT4_Pos))
#define MPDDRC_MADDR4_ADDR_HIGH_PORT4_Pos   16                                             /**< (MPDDRC_MADDR4) Address High on Port x [x = 0..7] Position */
#define MPDDRC_MADDR4_ADDR_HIGH_PORT4_Msk   (_U_(0xFFFF) << MPDDRC_MADDR4_ADDR_HIGH_PORT4_Pos)  /**< (MPDDRC_MADDR4) Address High on Port x [x = 0..7] Mask */
#define MPDDRC_MADDR4_ADDR_HIGH_PORT4(value) (MPDDRC_MADDR4_ADDR_HIGH_PORT4_Msk & ((value) << MPDDRC_MADDR4_ADDR_HIGH_PORT4_Pos))
#define MPDDRC_MADDR4_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MADDR4) Register MASK  (Use MPDDRC_MADDR4_Msk instead)  */
#define MPDDRC_MADDR4_Msk                   _U_(0xFFFFFFFF)                                /**< (MPDDRC_MADDR4) Register Mask  */


/* -------- MPDDRC_MADDR5 : (MPDDRC Offset: 0x78) (R/W 32) Monitor Address High/Low Port 5 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR_LOW_PORT5:16;         /**< bit:  0..15  Address Low on Port x [x = 0..7]         */
    uint32_t ADDR_HIGH_PORT5:16;        /**< bit: 16..31  Address High on Port x [x = 0..7]        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_MADDR5_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_MADDR5_OFFSET                (0x78)                                        /**<  (MPDDRC_MADDR5) Monitor Address High/Low Port 5 Register  Offset */

#define MPDDRC_MADDR5_ADDR_LOW_PORT5_Pos    0                                              /**< (MPDDRC_MADDR5) Address Low on Port x [x = 0..7] Position */
#define MPDDRC_MADDR5_ADDR_LOW_PORT5_Msk    (_U_(0xFFFF) << MPDDRC_MADDR5_ADDR_LOW_PORT5_Pos)  /**< (MPDDRC_MADDR5) Address Low on Port x [x = 0..7] Mask */
#define MPDDRC_MADDR5_ADDR_LOW_PORT5(value) (MPDDRC_MADDR5_ADDR_LOW_PORT5_Msk & ((value) << MPDDRC_MADDR5_ADDR_LOW_PORT5_Pos))
#define MPDDRC_MADDR5_ADDR_HIGH_PORT5_Pos   16                                             /**< (MPDDRC_MADDR5) Address High on Port x [x = 0..7] Position */
#define MPDDRC_MADDR5_ADDR_HIGH_PORT5_Msk   (_U_(0xFFFF) << MPDDRC_MADDR5_ADDR_HIGH_PORT5_Pos)  /**< (MPDDRC_MADDR5) Address High on Port x [x = 0..7] Mask */
#define MPDDRC_MADDR5_ADDR_HIGH_PORT5(value) (MPDDRC_MADDR5_ADDR_HIGH_PORT5_Msk & ((value) << MPDDRC_MADDR5_ADDR_HIGH_PORT5_Pos))
#define MPDDRC_MADDR5_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MADDR5) Register MASK  (Use MPDDRC_MADDR5_Msk instead)  */
#define MPDDRC_MADDR5_Msk                   _U_(0xFFFFFFFF)                                /**< (MPDDRC_MADDR5) Register Mask  */


/* -------- MPDDRC_MADDR6 : (MPDDRC Offset: 0x7c) (R/W 32) Monitor Address High/Low Port 6 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR_LOW_PORT6:16;         /**< bit:  0..15  Address Low on Port x [x = 0..7]         */
    uint32_t ADDR_HIGH_PORT6:16;        /**< bit: 16..31  Address High on Port x [x = 0..7]        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_MADDR6_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_MADDR6_OFFSET                (0x7C)                                        /**<  (MPDDRC_MADDR6) Monitor Address High/Low Port 6 Register  Offset */

#define MPDDRC_MADDR6_ADDR_LOW_PORT6_Pos    0                                              /**< (MPDDRC_MADDR6) Address Low on Port x [x = 0..7] Position */
#define MPDDRC_MADDR6_ADDR_LOW_PORT6_Msk    (_U_(0xFFFF) << MPDDRC_MADDR6_ADDR_LOW_PORT6_Pos)  /**< (MPDDRC_MADDR6) Address Low on Port x [x = 0..7] Mask */
#define MPDDRC_MADDR6_ADDR_LOW_PORT6(value) (MPDDRC_MADDR6_ADDR_LOW_PORT6_Msk & ((value) << MPDDRC_MADDR6_ADDR_LOW_PORT6_Pos))
#define MPDDRC_MADDR6_ADDR_HIGH_PORT6_Pos   16                                             /**< (MPDDRC_MADDR6) Address High on Port x [x = 0..7] Position */
#define MPDDRC_MADDR6_ADDR_HIGH_PORT6_Msk   (_U_(0xFFFF) << MPDDRC_MADDR6_ADDR_HIGH_PORT6_Pos)  /**< (MPDDRC_MADDR6) Address High on Port x [x = 0..7] Mask */
#define MPDDRC_MADDR6_ADDR_HIGH_PORT6(value) (MPDDRC_MADDR6_ADDR_HIGH_PORT6_Msk & ((value) << MPDDRC_MADDR6_ADDR_HIGH_PORT6_Pos))
#define MPDDRC_MADDR6_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MADDR6) Register MASK  (Use MPDDRC_MADDR6_Msk instead)  */
#define MPDDRC_MADDR6_Msk                   _U_(0xFFFFFFFF)                                /**< (MPDDRC_MADDR6) Register Mask  */


/* -------- MPDDRC_MADDR7 : (MPDDRC Offset: 0x80) (R/W 32) Monitor Address High/Low Port 7 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR_LOW_PORT7:16;         /**< bit:  0..15  Address Low on Port x [x = 0..7]         */
    uint32_t ADDR_HIGH_PORT7:16;        /**< bit: 16..31  Address High on Port x [x = 0..7]        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_MADDR7_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_MADDR7_OFFSET                (0x80)                                        /**<  (MPDDRC_MADDR7) Monitor Address High/Low Port 7 Register  Offset */

#define MPDDRC_MADDR7_ADDR_LOW_PORT7_Pos    0                                              /**< (MPDDRC_MADDR7) Address Low on Port x [x = 0..7] Position */
#define MPDDRC_MADDR7_ADDR_LOW_PORT7_Msk    (_U_(0xFFFF) << MPDDRC_MADDR7_ADDR_LOW_PORT7_Pos)  /**< (MPDDRC_MADDR7) Address Low on Port x [x = 0..7] Mask */
#define MPDDRC_MADDR7_ADDR_LOW_PORT7(value) (MPDDRC_MADDR7_ADDR_LOW_PORT7_Msk & ((value) << MPDDRC_MADDR7_ADDR_LOW_PORT7_Pos))
#define MPDDRC_MADDR7_ADDR_HIGH_PORT7_Pos   16                                             /**< (MPDDRC_MADDR7) Address High on Port x [x = 0..7] Position */
#define MPDDRC_MADDR7_ADDR_HIGH_PORT7_Msk   (_U_(0xFFFF) << MPDDRC_MADDR7_ADDR_HIGH_PORT7_Pos)  /**< (MPDDRC_MADDR7) Address High on Port x [x = 0..7] Mask */
#define MPDDRC_MADDR7_ADDR_HIGH_PORT7(value) (MPDDRC_MADDR7_ADDR_HIGH_PORT7_Msk & ((value) << MPDDRC_MADDR7_ADDR_HIGH_PORT7_Pos))
#define MPDDRC_MADDR7_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MADDR7) Register MASK  (Use MPDDRC_MADDR7_Msk instead)  */
#define MPDDRC_MADDR7_Msk                   _U_(0xFFFFFFFF)                                /**< (MPDDRC_MADDR7) Register Mask  */


/* -------- MPDDRC_MINFO0 : (MPDDRC Offset: 0x84) (R/ 32) Monitor Information Port 0 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct { // MAX_WAIT mode
    uint32_t MAX_PORT0_WAITING:16;      /**< bit:  0..15  Address High on Port x [x = 0..7]        */
    uint32_t BURST:3;                   /**< bit: 16..18  Type of Burst on Port x [x = 0..7]       */
    uint32_t :1;                        /**< bit:     19  Reserved */
    uint32_t SIZE:3;                    /**< bit: 20..22  Transfer Size on Port x [x = 0..7]       */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t READ_WRITE:1;              /**< bit:     24  Read or Write Access on Port x [x = 0..7] */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } MAX_WAIT;                                /**< Structure used for MAX_WAIT mode access */
  struct { // NB_TRANSFERS mode
    uint32_t P0_NB_TRANSFERS:32;        /**< bit:  0..31  Number of Transfers on Port x [x = 0..7] */
  } NB_TRANSFERS;                                /**< Structure used for NB_TRANSFERS mode access */
  struct { // TOTAL_LATENCY mode
    uint32_t P0_TOTAL_LATENCY:32;       /**< bit:  0..31  Total Latency on Port x [x = 0..7]       */
  } TOTAL_LATENCY;                                /**< Structure used for TOTAL_LATENCY mode access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_MINFO0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_MINFO0_OFFSET                (0x84)                                        /**<  (MPDDRC_MINFO0) Monitor Information Port 0 Register  Offset */

#define MPDDRC_MINFO0_MASK                  _U_(0x00)                                      /**< \deprecated (MPDDRC_MINFO0) Register MASK  (Use MPDDRC_MINFO0_Msk instead)  */
#define MPDDRC_MINFO0_Msk                   _U_(0x00)                                      /**< (MPDDRC_MINFO0) Register Mask  */

/* MAX_WAIT mode */
#define MPDDRC_MINFO0_MAX_WAIT_MAX_PORT0_WAITING_Pos 0                                              /**< (MPDDRC_MINFO0) Address High on Port x [x = 0..7] Position */
#define MPDDRC_MINFO0_MAX_WAIT_MAX_PORT0_WAITING_Msk (_U_(0xFFFF) << MPDDRC_MINFO0_MAX_WAIT_MAX_PORT0_WAITING_Pos)  /**< (MPDDRC_MINFO0) Address High on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO0_MAX_WAIT_MAX_PORT0_WAITING(value) (MPDDRC_MINFO0_MAX_WAIT_MAX_PORT0_WAITING_Msk & ((value) << MPDDRC_MINFO0_MAX_WAIT_MAX_PORT0_WAITING_Pos))
#define MPDDRC_MINFO0_MAX_WAIT_BURST_Pos    16                                             /**< (MPDDRC_MINFO0) Type of Burst on Port x [x = 0..7] Position */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_Msk    (_U_(0x7) << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO0) Type of Burst on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO0_MAX_WAIT_BURST(value) (MPDDRC_MINFO0_MAX_WAIT_BURST_Msk & ((value) << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos))
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_SINGLE_Val _U_(0x0)                                       /**< (MPDDRC_MINFO0) MAX_WAIT Single transfer  */
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_INCR_Val _U_(0x1)                                       /**< (MPDDRC_MINFO0) MAX_WAIT Incrementing burst of unspecified length  */
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP4_Val _U_(0x2)                                       /**< (MPDDRC_MINFO0) MAX_WAIT 4-beat wrapping burst  */
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_INCR4_Val _U_(0x3)                                       /**< (MPDDRC_MINFO0) MAX_WAIT 4-beat incrementing burst  */
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP8_Val _U_(0x4)                                       /**< (MPDDRC_MINFO0) MAX_WAIT 8-beat wrapping burst  */
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_INCR8_Val _U_(0x5)                                       /**< (MPDDRC_MINFO0) MAX_WAIT 8-beat incrementing burst  */
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP16_Val _U_(0x6)                                       /**< (MPDDRC_MINFO0) MAX_WAIT 16-beat wrapping burst  */
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_INCR16_Val _U_(0x7)                                       /**< (MPDDRC_MINFO0) MAX_WAIT 16-beat incrementing burst  */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_SINGLE (MPDDRC_MINFO0_MAX_WAIT_BURST_SINGLE_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO0) Single transfer Position  */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_INCR   (MPDDRC_MINFO0_MAX_WAIT_BURST_INCR_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO0) Incrementing burst of unspecified length Position  */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP4  (MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP4_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO0) 4-beat wrapping burst Position  */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_INCR4  (MPDDRC_MINFO0_MAX_WAIT_BURST_INCR4_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO0) 4-beat incrementing burst Position  */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP8  (MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP8_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO0) 8-beat wrapping burst Position  */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_INCR8  (MPDDRC_MINFO0_MAX_WAIT_BURST_INCR8_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO0) 8-beat incrementing burst Position  */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP16 (MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP16_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO0) 16-beat wrapping burst Position  */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_INCR16 (MPDDRC_MINFO0_MAX_WAIT_BURST_INCR16_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO0) 16-beat incrementing burst Position  */
#define MPDDRC_MINFO0_MAX_WAIT_SIZE_Pos     20                                             /**< (MPDDRC_MINFO0) Transfer Size on Port x [x = 0..7] Position */
#define MPDDRC_MINFO0_MAX_WAIT_SIZE_Msk     (_U_(0x7) << MPDDRC_MINFO0_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO0) Transfer Size on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO0_MAX_WAIT_SIZE(value)  (MPDDRC_MINFO0_MAX_WAIT_SIZE_Msk & ((value) << MPDDRC_MINFO0_MAX_WAIT_SIZE_Pos))
#define   MPDDRC_MINFO0_MAX_WAIT_SIZE_8BITS_Val _U_(0x0)                                       /**< (MPDDRC_MINFO0) MAX_WAIT Byte transfer  */
#define   MPDDRC_MINFO0_MAX_WAIT_SIZE_16BITS_Val _U_(0x1)                                       /**< (MPDDRC_MINFO0) MAX_WAIT Halfword transfer  */
#define   MPDDRC_MINFO0_MAX_WAIT_SIZE_32BITS_Val _U_(0x2)                                       /**< (MPDDRC_MINFO0) MAX_WAIT Word transfer  */
#define   MPDDRC_MINFO0_MAX_WAIT_SIZE_64BITS_Val _U_(0x3)                                       /**< (MPDDRC_MINFO0) MAX_WAIT Dword transfer  */
#define MPDDRC_MINFO0_MAX_WAIT_SIZE_8BITS   (MPDDRC_MINFO0_MAX_WAIT_SIZE_8BITS_Val << MPDDRC_MINFO0_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO0) Byte transfer Position  */
#define MPDDRC_MINFO0_MAX_WAIT_SIZE_16BITS  (MPDDRC_MINFO0_MAX_WAIT_SIZE_16BITS_Val << MPDDRC_MINFO0_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO0) Halfword transfer Position  */
#define MPDDRC_MINFO0_MAX_WAIT_SIZE_32BITS  (MPDDRC_MINFO0_MAX_WAIT_SIZE_32BITS_Val << MPDDRC_MINFO0_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO0) Word transfer Position  */
#define MPDDRC_MINFO0_MAX_WAIT_SIZE_64BITS  (MPDDRC_MINFO0_MAX_WAIT_SIZE_64BITS_Val << MPDDRC_MINFO0_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO0) Dword transfer Position  */
#define MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_Pos 24                                             /**< (MPDDRC_MINFO0) Read or Write Access on Port x [x = 0..7] Position */
#define MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_Msk (_U_(0x1) << MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_Pos)  /**< (MPDDRC_MINFO0) Read or Write Access on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO0_MAX_WAIT_READ_WRITE   MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_Msk          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_Msk instead */
#define MPDDRC_MINFO0_MAX_WAIT_MASK         _U_(0x177FFFF)                                 /**< \deprecated (MPDDRC_MINFO0_MAX_WAIT) Register MASK  (Use MPDDRC_MINFO0_MAX_WAIT_Msk instead)  */
#define MPDDRC_MINFO0_MAX_WAIT_Msk          _U_(0x177FFFF)                                 /**< (MPDDRC_MINFO0_MAX_WAIT) Register Mask  */

/* NB_TRANSFERS mode */
#define MPDDRC_MINFO0_NB_TRANSFERS_P0_NB_TRANSFERS_Pos 0                                              /**< (MPDDRC_MINFO0) Number of Transfers on Port x [x = 0..7] Position */
#define MPDDRC_MINFO0_NB_TRANSFERS_P0_NB_TRANSFERS_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO0_NB_TRANSFERS_P0_NB_TRANSFERS_Pos)  /**< (MPDDRC_MINFO0) Number of Transfers on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO0_NB_TRANSFERS_P0_NB_TRANSFERS(value) (MPDDRC_MINFO0_NB_TRANSFERS_P0_NB_TRANSFERS_Msk & ((value) << MPDDRC_MINFO0_NB_TRANSFERS_P0_NB_TRANSFERS_Pos))
#define MPDDRC_MINFO0_NB_TRANSFERS_MASK     _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MINFO0_NB_TRANSFERS) Register MASK  (Use MPDDRC_MINFO0_NB_TRANSFERS_Msk instead)  */
#define MPDDRC_MINFO0_NB_TRANSFERS_Msk      _U_(0xFFFFFFFF)                                /**< (MPDDRC_MINFO0_NB_TRANSFERS) Register Mask  */

/* TOTAL_LATENCY mode */
#define MPDDRC_MINFO0_TOTAL_LATENCY_P0_TOTAL_LATENCY_Pos 0                                              /**< (MPDDRC_MINFO0) Total Latency on Port x [x = 0..7] Position */
#define MPDDRC_MINFO0_TOTAL_LATENCY_P0_TOTAL_LATENCY_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO0_TOTAL_LATENCY_P0_TOTAL_LATENCY_Pos)  /**< (MPDDRC_MINFO0) Total Latency on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO0_TOTAL_LATENCY_P0_TOTAL_LATENCY(value) (MPDDRC_MINFO0_TOTAL_LATENCY_P0_TOTAL_LATENCY_Msk & ((value) << MPDDRC_MINFO0_TOTAL_LATENCY_P0_TOTAL_LATENCY_Pos))
#define MPDDRC_MINFO0_TOTAL_LATENCY_MASK    _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MINFO0_TOTAL_LATENCY) Register MASK  (Use MPDDRC_MINFO0_TOTAL_LATENCY_Msk instead)  */
#define MPDDRC_MINFO0_TOTAL_LATENCY_Msk     _U_(0xFFFFFFFF)                                /**< (MPDDRC_MINFO0_TOTAL_LATENCY) Register Mask  */


/* -------- MPDDRC_MINFO1 : (MPDDRC Offset: 0x88) (R/ 32) Monitor Information Port 1 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct { // MAX_WAIT mode
    uint32_t MAX_PORT1_WAITING:16;      /**< bit:  0..15  Address High on Port x [x = 0..7]        */
    uint32_t BURST:3;                   /**< bit: 16..18  Type of Burst on Port x [x = 0..7]       */
    uint32_t :1;                        /**< bit:     19  Reserved */
    uint32_t SIZE:3;                    /**< bit: 20..22  Transfer Size on Port x [x = 0..7]       */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t READ_WRITE:1;              /**< bit:     24  Read or Write Access on Port x [x = 0..7] */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } MAX_WAIT;                                /**< Structure used for MAX_WAIT mode access */
  struct { // NB_TRANSFERS mode
    uint32_t P1_NB_TRANSFERS:32;        /**< bit:  0..31  Number of Transfers on Port x [x = 0..7] */
  } NB_TRANSFERS;                                /**< Structure used for NB_TRANSFERS mode access */
  struct { // TOTAL_LATENCY mode
    uint32_t P1_TOTAL_LATENCY:32;       /**< bit:  0..31  Total Latency on Port x [x = 0..7]       */
  } TOTAL_LATENCY;                                /**< Structure used for TOTAL_LATENCY mode access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_MINFO1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_MINFO1_OFFSET                (0x88)                                        /**<  (MPDDRC_MINFO1) Monitor Information Port 1 Register  Offset */

#define MPDDRC_MINFO1_MASK                  _U_(0x00)                                      /**< \deprecated (MPDDRC_MINFO1) Register MASK  (Use MPDDRC_MINFO1_Msk instead)  */
#define MPDDRC_MINFO1_Msk                   _U_(0x00)                                      /**< (MPDDRC_MINFO1) Register Mask  */

/* MAX_WAIT mode */
#define MPDDRC_MINFO1_MAX_WAIT_MAX_PORT1_WAITING_Pos 0                                              /**< (MPDDRC_MINFO1) Address High on Port x [x = 0..7] Position */
#define MPDDRC_MINFO1_MAX_WAIT_MAX_PORT1_WAITING_Msk (_U_(0xFFFF) << MPDDRC_MINFO1_MAX_WAIT_MAX_PORT1_WAITING_Pos)  /**< (MPDDRC_MINFO1) Address High on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO1_MAX_WAIT_MAX_PORT1_WAITING(value) (MPDDRC_MINFO1_MAX_WAIT_MAX_PORT1_WAITING_Msk & ((value) << MPDDRC_MINFO1_MAX_WAIT_MAX_PORT1_WAITING_Pos))
#define MPDDRC_MINFO1_MAX_WAIT_BURST_Pos    16                                             /**< (MPDDRC_MINFO1) Type of Burst on Port x [x = 0..7] Position */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_Msk    (_U_(0x7) << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO1) Type of Burst on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO1_MAX_WAIT_BURST(value) (MPDDRC_MINFO1_MAX_WAIT_BURST_Msk & ((value) << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos))
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_SINGLE_Val _U_(0x0)                                       /**< (MPDDRC_MINFO1) MAX_WAIT Single transfer  */
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_INCR_Val _U_(0x1)                                       /**< (MPDDRC_MINFO1) MAX_WAIT Incrementing burst of unspecified length  */
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP4_Val _U_(0x2)                                       /**< (MPDDRC_MINFO1) MAX_WAIT 4-beat wrapping burst  */
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_INCR4_Val _U_(0x3)                                       /**< (MPDDRC_MINFO1) MAX_WAIT 4-beat incrementing burst  */
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP8_Val _U_(0x4)                                       /**< (MPDDRC_MINFO1) MAX_WAIT 8-beat wrapping burst  */
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_INCR8_Val _U_(0x5)                                       /**< (MPDDRC_MINFO1) MAX_WAIT 8-beat incrementing burst  */
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP16_Val _U_(0x6)                                       /**< (MPDDRC_MINFO1) MAX_WAIT 16-beat wrapping burst  */
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_INCR16_Val _U_(0x7)                                       /**< (MPDDRC_MINFO1) MAX_WAIT 16-beat incrementing burst  */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_SINGLE (MPDDRC_MINFO1_MAX_WAIT_BURST_SINGLE_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO1) Single transfer Position  */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_INCR   (MPDDRC_MINFO1_MAX_WAIT_BURST_INCR_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO1) Incrementing burst of unspecified length Position  */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP4  (MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP4_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO1) 4-beat wrapping burst Position  */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_INCR4  (MPDDRC_MINFO1_MAX_WAIT_BURST_INCR4_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO1) 4-beat incrementing burst Position  */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP8  (MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP8_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO1) 8-beat wrapping burst Position  */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_INCR8  (MPDDRC_MINFO1_MAX_WAIT_BURST_INCR8_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO1) 8-beat incrementing burst Position  */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP16 (MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP16_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO1) 16-beat wrapping burst Position  */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_INCR16 (MPDDRC_MINFO1_MAX_WAIT_BURST_INCR16_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO1) 16-beat incrementing burst Position  */
#define MPDDRC_MINFO1_MAX_WAIT_SIZE_Pos     20                                             /**< (MPDDRC_MINFO1) Transfer Size on Port x [x = 0..7] Position */
#define MPDDRC_MINFO1_MAX_WAIT_SIZE_Msk     (_U_(0x7) << MPDDRC_MINFO1_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO1) Transfer Size on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO1_MAX_WAIT_SIZE(value)  (MPDDRC_MINFO1_MAX_WAIT_SIZE_Msk & ((value) << MPDDRC_MINFO1_MAX_WAIT_SIZE_Pos))
#define   MPDDRC_MINFO1_MAX_WAIT_SIZE_8BITS_Val _U_(0x0)                                       /**< (MPDDRC_MINFO1) MAX_WAIT Byte transfer  */
#define   MPDDRC_MINFO1_MAX_WAIT_SIZE_16BITS_Val _U_(0x1)                                       /**< (MPDDRC_MINFO1) MAX_WAIT Halfword transfer  */
#define   MPDDRC_MINFO1_MAX_WAIT_SIZE_32BITS_Val _U_(0x2)                                       /**< (MPDDRC_MINFO1) MAX_WAIT Word transfer  */
#define   MPDDRC_MINFO1_MAX_WAIT_SIZE_64BITS_Val _U_(0x3)                                       /**< (MPDDRC_MINFO1) MAX_WAIT Dword transfer  */
#define MPDDRC_MINFO1_MAX_WAIT_SIZE_8BITS   (MPDDRC_MINFO1_MAX_WAIT_SIZE_8BITS_Val << MPDDRC_MINFO1_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO1) Byte transfer Position  */
#define MPDDRC_MINFO1_MAX_WAIT_SIZE_16BITS  (MPDDRC_MINFO1_MAX_WAIT_SIZE_16BITS_Val << MPDDRC_MINFO1_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO1) Halfword transfer Position  */
#define MPDDRC_MINFO1_MAX_WAIT_SIZE_32BITS  (MPDDRC_MINFO1_MAX_WAIT_SIZE_32BITS_Val << MPDDRC_MINFO1_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO1) Word transfer Position  */
#define MPDDRC_MINFO1_MAX_WAIT_SIZE_64BITS  (MPDDRC_MINFO1_MAX_WAIT_SIZE_64BITS_Val << MPDDRC_MINFO1_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO1) Dword transfer Position  */
#define MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_Pos 24                                             /**< (MPDDRC_MINFO1) Read or Write Access on Port x [x = 0..7] Position */
#define MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_Msk (_U_(0x1) << MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_Pos)  /**< (MPDDRC_MINFO1) Read or Write Access on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO1_MAX_WAIT_READ_WRITE   MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_Msk          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_Msk instead */
#define MPDDRC_MINFO1_MAX_WAIT_MASK         _U_(0x177FFFF)                                 /**< \deprecated (MPDDRC_MINFO1_MAX_WAIT) Register MASK  (Use MPDDRC_MINFO1_MAX_WAIT_Msk instead)  */
#define MPDDRC_MINFO1_MAX_WAIT_Msk          _U_(0x177FFFF)                                 /**< (MPDDRC_MINFO1_MAX_WAIT) Register Mask  */

/* NB_TRANSFERS mode */
#define MPDDRC_MINFO1_NB_TRANSFERS_P1_NB_TRANSFERS_Pos 0                                              /**< (MPDDRC_MINFO1) Number of Transfers on Port x [x = 0..7] Position */
#define MPDDRC_MINFO1_NB_TRANSFERS_P1_NB_TRANSFERS_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO1_NB_TRANSFERS_P1_NB_TRANSFERS_Pos)  /**< (MPDDRC_MINFO1) Number of Transfers on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO1_NB_TRANSFERS_P1_NB_TRANSFERS(value) (MPDDRC_MINFO1_NB_TRANSFERS_P1_NB_TRANSFERS_Msk & ((value) << MPDDRC_MINFO1_NB_TRANSFERS_P1_NB_TRANSFERS_Pos))
#define MPDDRC_MINFO1_NB_TRANSFERS_MASK     _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MINFO1_NB_TRANSFERS) Register MASK  (Use MPDDRC_MINFO1_NB_TRANSFERS_Msk instead)  */
#define MPDDRC_MINFO1_NB_TRANSFERS_Msk      _U_(0xFFFFFFFF)                                /**< (MPDDRC_MINFO1_NB_TRANSFERS) Register Mask  */

/* TOTAL_LATENCY mode */
#define MPDDRC_MINFO1_TOTAL_LATENCY_P1_TOTAL_LATENCY_Pos 0                                              /**< (MPDDRC_MINFO1) Total Latency on Port x [x = 0..7] Position */
#define MPDDRC_MINFO1_TOTAL_LATENCY_P1_TOTAL_LATENCY_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO1_TOTAL_LATENCY_P1_TOTAL_LATENCY_Pos)  /**< (MPDDRC_MINFO1) Total Latency on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO1_TOTAL_LATENCY_P1_TOTAL_LATENCY(value) (MPDDRC_MINFO1_TOTAL_LATENCY_P1_TOTAL_LATENCY_Msk & ((value) << MPDDRC_MINFO1_TOTAL_LATENCY_P1_TOTAL_LATENCY_Pos))
#define MPDDRC_MINFO1_TOTAL_LATENCY_MASK    _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MINFO1_TOTAL_LATENCY) Register MASK  (Use MPDDRC_MINFO1_TOTAL_LATENCY_Msk instead)  */
#define MPDDRC_MINFO1_TOTAL_LATENCY_Msk     _U_(0xFFFFFFFF)                                /**< (MPDDRC_MINFO1_TOTAL_LATENCY) Register Mask  */


/* -------- MPDDRC_MINFO2 : (MPDDRC Offset: 0x8c) (R/ 32) Monitor Information Port 2 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct { // MAX_WAIT mode
    uint32_t MAX_PORT2_WAITING:16;      /**< bit:  0..15  Address High on Port x [x = 0..7]        */
    uint32_t BURST:3;                   /**< bit: 16..18  Type of Burst on Port x [x = 0..7]       */
    uint32_t :1;                        /**< bit:     19  Reserved */
    uint32_t SIZE:3;                    /**< bit: 20..22  Transfer Size on Port x [x = 0..7]       */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t READ_WRITE:1;              /**< bit:     24  Read or Write Access on Port x [x = 0..7] */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } MAX_WAIT;                                /**< Structure used for MAX_WAIT mode access */
  struct { // NB_TRANSFERS mode
    uint32_t P2_NB_TRANSFERS:32;        /**< bit:  0..31  Number of Transfers on Port x [x = 0..7] */
  } NB_TRANSFERS;                                /**< Structure used for NB_TRANSFERS mode access */
  struct { // TOTAL_LATENCY mode
    uint32_t P2_TOTAL_LATENCY:32;       /**< bit:  0..31  Total Latency on Port x [x = 0..7]       */
  } TOTAL_LATENCY;                                /**< Structure used for TOTAL_LATENCY mode access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_MINFO2_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_MINFO2_OFFSET                (0x8C)                                        /**<  (MPDDRC_MINFO2) Monitor Information Port 2 Register  Offset */

#define MPDDRC_MINFO2_MASK                  _U_(0x00)                                      /**< \deprecated (MPDDRC_MINFO2) Register MASK  (Use MPDDRC_MINFO2_Msk instead)  */
#define MPDDRC_MINFO2_Msk                   _U_(0x00)                                      /**< (MPDDRC_MINFO2) Register Mask  */

/* MAX_WAIT mode */
#define MPDDRC_MINFO2_MAX_WAIT_MAX_PORT2_WAITING_Pos 0                                              /**< (MPDDRC_MINFO2) Address High on Port x [x = 0..7] Position */
#define MPDDRC_MINFO2_MAX_WAIT_MAX_PORT2_WAITING_Msk (_U_(0xFFFF) << MPDDRC_MINFO2_MAX_WAIT_MAX_PORT2_WAITING_Pos)  /**< (MPDDRC_MINFO2) Address High on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO2_MAX_WAIT_MAX_PORT2_WAITING(value) (MPDDRC_MINFO2_MAX_WAIT_MAX_PORT2_WAITING_Msk & ((value) << MPDDRC_MINFO2_MAX_WAIT_MAX_PORT2_WAITING_Pos))
#define MPDDRC_MINFO2_MAX_WAIT_BURST_Pos    16                                             /**< (MPDDRC_MINFO2) Type of Burst on Port x [x = 0..7] Position */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_Msk    (_U_(0x7) << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO2) Type of Burst on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO2_MAX_WAIT_BURST(value) (MPDDRC_MINFO2_MAX_WAIT_BURST_Msk & ((value) << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos))
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_SINGLE_Val _U_(0x0)                                       /**< (MPDDRC_MINFO2) MAX_WAIT Single transfer  */
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_INCR_Val _U_(0x1)                                       /**< (MPDDRC_MINFO2) MAX_WAIT Incrementing burst of unspecified length  */
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP4_Val _U_(0x2)                                       /**< (MPDDRC_MINFO2) MAX_WAIT 4-beat wrapping burst  */
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_INCR4_Val _U_(0x3)                                       /**< (MPDDRC_MINFO2) MAX_WAIT 4-beat incrementing burst  */
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP8_Val _U_(0x4)                                       /**< (MPDDRC_MINFO2) MAX_WAIT 8-beat wrapping burst  */
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_INCR8_Val _U_(0x5)                                       /**< (MPDDRC_MINFO2) MAX_WAIT 8-beat incrementing burst  */
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP16_Val _U_(0x6)                                       /**< (MPDDRC_MINFO2) MAX_WAIT 16-beat wrapping burst  */
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_INCR16_Val _U_(0x7)                                       /**< (MPDDRC_MINFO2) MAX_WAIT 16-beat incrementing burst  */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_SINGLE (MPDDRC_MINFO2_MAX_WAIT_BURST_SINGLE_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO2) Single transfer Position  */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_INCR   (MPDDRC_MINFO2_MAX_WAIT_BURST_INCR_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO2) Incrementing burst of unspecified length Position  */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP4  (MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP4_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO2) 4-beat wrapping burst Position  */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_INCR4  (MPDDRC_MINFO2_MAX_WAIT_BURST_INCR4_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO2) 4-beat incrementing burst Position  */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP8  (MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP8_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO2) 8-beat wrapping burst Position  */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_INCR8  (MPDDRC_MINFO2_MAX_WAIT_BURST_INCR8_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO2) 8-beat incrementing burst Position  */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP16 (MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP16_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO2) 16-beat wrapping burst Position  */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_INCR16 (MPDDRC_MINFO2_MAX_WAIT_BURST_INCR16_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO2) 16-beat incrementing burst Position  */
#define MPDDRC_MINFO2_MAX_WAIT_SIZE_Pos     20                                             /**< (MPDDRC_MINFO2) Transfer Size on Port x [x = 0..7] Position */
#define MPDDRC_MINFO2_MAX_WAIT_SIZE_Msk     (_U_(0x7) << MPDDRC_MINFO2_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO2) Transfer Size on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO2_MAX_WAIT_SIZE(value)  (MPDDRC_MINFO2_MAX_WAIT_SIZE_Msk & ((value) << MPDDRC_MINFO2_MAX_WAIT_SIZE_Pos))
#define   MPDDRC_MINFO2_MAX_WAIT_SIZE_8BITS_Val _U_(0x0)                                       /**< (MPDDRC_MINFO2) MAX_WAIT Byte transfer  */
#define   MPDDRC_MINFO2_MAX_WAIT_SIZE_16BITS_Val _U_(0x1)                                       /**< (MPDDRC_MINFO2) MAX_WAIT Halfword transfer  */
#define   MPDDRC_MINFO2_MAX_WAIT_SIZE_32BITS_Val _U_(0x2)                                       /**< (MPDDRC_MINFO2) MAX_WAIT Word transfer  */
#define   MPDDRC_MINFO2_MAX_WAIT_SIZE_64BITS_Val _U_(0x3)                                       /**< (MPDDRC_MINFO2) MAX_WAIT Dword transfer  */
#define MPDDRC_MINFO2_MAX_WAIT_SIZE_8BITS   (MPDDRC_MINFO2_MAX_WAIT_SIZE_8BITS_Val << MPDDRC_MINFO2_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO2) Byte transfer Position  */
#define MPDDRC_MINFO2_MAX_WAIT_SIZE_16BITS  (MPDDRC_MINFO2_MAX_WAIT_SIZE_16BITS_Val << MPDDRC_MINFO2_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO2) Halfword transfer Position  */
#define MPDDRC_MINFO2_MAX_WAIT_SIZE_32BITS  (MPDDRC_MINFO2_MAX_WAIT_SIZE_32BITS_Val << MPDDRC_MINFO2_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO2) Word transfer Position  */
#define MPDDRC_MINFO2_MAX_WAIT_SIZE_64BITS  (MPDDRC_MINFO2_MAX_WAIT_SIZE_64BITS_Val << MPDDRC_MINFO2_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO2) Dword transfer Position  */
#define MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_Pos 24                                             /**< (MPDDRC_MINFO2) Read or Write Access on Port x [x = 0..7] Position */
#define MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_Msk (_U_(0x1) << MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_Pos)  /**< (MPDDRC_MINFO2) Read or Write Access on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO2_MAX_WAIT_READ_WRITE   MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_Msk          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_Msk instead */
#define MPDDRC_MINFO2_MAX_WAIT_MASK         _U_(0x177FFFF)                                 /**< \deprecated (MPDDRC_MINFO2_MAX_WAIT) Register MASK  (Use MPDDRC_MINFO2_MAX_WAIT_Msk instead)  */
#define MPDDRC_MINFO2_MAX_WAIT_Msk          _U_(0x177FFFF)                                 /**< (MPDDRC_MINFO2_MAX_WAIT) Register Mask  */

/* NB_TRANSFERS mode */
#define MPDDRC_MINFO2_NB_TRANSFERS_P2_NB_TRANSFERS_Pos 0                                              /**< (MPDDRC_MINFO2) Number of Transfers on Port x [x = 0..7] Position */
#define MPDDRC_MINFO2_NB_TRANSFERS_P2_NB_TRANSFERS_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO2_NB_TRANSFERS_P2_NB_TRANSFERS_Pos)  /**< (MPDDRC_MINFO2) Number of Transfers on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO2_NB_TRANSFERS_P2_NB_TRANSFERS(value) (MPDDRC_MINFO2_NB_TRANSFERS_P2_NB_TRANSFERS_Msk & ((value) << MPDDRC_MINFO2_NB_TRANSFERS_P2_NB_TRANSFERS_Pos))
#define MPDDRC_MINFO2_NB_TRANSFERS_MASK     _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MINFO2_NB_TRANSFERS) Register MASK  (Use MPDDRC_MINFO2_NB_TRANSFERS_Msk instead)  */
#define MPDDRC_MINFO2_NB_TRANSFERS_Msk      _U_(0xFFFFFFFF)                                /**< (MPDDRC_MINFO2_NB_TRANSFERS) Register Mask  */

/* TOTAL_LATENCY mode */
#define MPDDRC_MINFO2_TOTAL_LATENCY_P2_TOTAL_LATENCY_Pos 0                                              /**< (MPDDRC_MINFO2) Total Latency on Port x [x = 0..7] Position */
#define MPDDRC_MINFO2_TOTAL_LATENCY_P2_TOTAL_LATENCY_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO2_TOTAL_LATENCY_P2_TOTAL_LATENCY_Pos)  /**< (MPDDRC_MINFO2) Total Latency on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO2_TOTAL_LATENCY_P2_TOTAL_LATENCY(value) (MPDDRC_MINFO2_TOTAL_LATENCY_P2_TOTAL_LATENCY_Msk & ((value) << MPDDRC_MINFO2_TOTAL_LATENCY_P2_TOTAL_LATENCY_Pos))
#define MPDDRC_MINFO2_TOTAL_LATENCY_MASK    _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MINFO2_TOTAL_LATENCY) Register MASK  (Use MPDDRC_MINFO2_TOTAL_LATENCY_Msk instead)  */
#define MPDDRC_MINFO2_TOTAL_LATENCY_Msk     _U_(0xFFFFFFFF)                                /**< (MPDDRC_MINFO2_TOTAL_LATENCY) Register Mask  */


/* -------- MPDDRC_MINFO3 : (MPDDRC Offset: 0x90) (R/ 32) Monitor Information Port 3 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct { // MAX_WAIT mode
    uint32_t MAX_PORT3_WAITING:16;      /**< bit:  0..15  Address High on Port x [x = 0..7]        */
    uint32_t BURST:3;                   /**< bit: 16..18  Type of Burst on Port x [x = 0..7]       */
    uint32_t :1;                        /**< bit:     19  Reserved */
    uint32_t SIZE:3;                    /**< bit: 20..22  Transfer Size on Port x [x = 0..7]       */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t READ_WRITE:1;              /**< bit:     24  Read or Write Access on Port x [x = 0..7] */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } MAX_WAIT;                                /**< Structure used for MAX_WAIT mode access */
  struct { // NB_TRANSFERS mode
    uint32_t P3_NB_TRANSFERS:32;        /**< bit:  0..31  Number of Transfers on Port x [x = 0..7] */
  } NB_TRANSFERS;                                /**< Structure used for NB_TRANSFERS mode access */
  struct { // TOTAL_LATENCY mode
    uint32_t P3_TOTAL_LATENCY:32;       /**< bit:  0..31  Total Latency on Port x [x = 0..7]       */
  } TOTAL_LATENCY;                                /**< Structure used for TOTAL_LATENCY mode access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_MINFO3_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_MINFO3_OFFSET                (0x90)                                        /**<  (MPDDRC_MINFO3) Monitor Information Port 3 Register  Offset */

#define MPDDRC_MINFO3_MASK                  _U_(0x00)                                      /**< \deprecated (MPDDRC_MINFO3) Register MASK  (Use MPDDRC_MINFO3_Msk instead)  */
#define MPDDRC_MINFO3_Msk                   _U_(0x00)                                      /**< (MPDDRC_MINFO3) Register Mask  */

/* MAX_WAIT mode */
#define MPDDRC_MINFO3_MAX_WAIT_MAX_PORT3_WAITING_Pos 0                                              /**< (MPDDRC_MINFO3) Address High on Port x [x = 0..7] Position */
#define MPDDRC_MINFO3_MAX_WAIT_MAX_PORT3_WAITING_Msk (_U_(0xFFFF) << MPDDRC_MINFO3_MAX_WAIT_MAX_PORT3_WAITING_Pos)  /**< (MPDDRC_MINFO3) Address High on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO3_MAX_WAIT_MAX_PORT3_WAITING(value) (MPDDRC_MINFO3_MAX_WAIT_MAX_PORT3_WAITING_Msk & ((value) << MPDDRC_MINFO3_MAX_WAIT_MAX_PORT3_WAITING_Pos))
#define MPDDRC_MINFO3_MAX_WAIT_BURST_Pos    16                                             /**< (MPDDRC_MINFO3) Type of Burst on Port x [x = 0..7] Position */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_Msk    (_U_(0x7) << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO3) Type of Burst on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO3_MAX_WAIT_BURST(value) (MPDDRC_MINFO3_MAX_WAIT_BURST_Msk & ((value) << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos))
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_SINGLE_Val _U_(0x0)                                       /**< (MPDDRC_MINFO3) MAX_WAIT Single transfer  */
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_INCR_Val _U_(0x1)                                       /**< (MPDDRC_MINFO3) MAX_WAIT Incrementing burst of unspecified length  */
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP4_Val _U_(0x2)                                       /**< (MPDDRC_MINFO3) MAX_WAIT 4-beat wrapping burst  */
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_INCR4_Val _U_(0x3)                                       /**< (MPDDRC_MINFO3) MAX_WAIT 4-beat incrementing burst  */
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP8_Val _U_(0x4)                                       /**< (MPDDRC_MINFO3) MAX_WAIT 8-beat wrapping burst  */
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_INCR8_Val _U_(0x5)                                       /**< (MPDDRC_MINFO3) MAX_WAIT 8-beat incrementing burst  */
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP16_Val _U_(0x6)                                       /**< (MPDDRC_MINFO3) MAX_WAIT 16-beat wrapping burst  */
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_INCR16_Val _U_(0x7)                                       /**< (MPDDRC_MINFO3) MAX_WAIT 16-beat incrementing burst  */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_SINGLE (MPDDRC_MINFO3_MAX_WAIT_BURST_SINGLE_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO3) Single transfer Position  */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_INCR   (MPDDRC_MINFO3_MAX_WAIT_BURST_INCR_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO3) Incrementing burst of unspecified length Position  */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP4  (MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP4_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO3) 4-beat wrapping burst Position  */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_INCR4  (MPDDRC_MINFO3_MAX_WAIT_BURST_INCR4_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO3) 4-beat incrementing burst Position  */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP8  (MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP8_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO3) 8-beat wrapping burst Position  */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_INCR8  (MPDDRC_MINFO3_MAX_WAIT_BURST_INCR8_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO3) 8-beat incrementing burst Position  */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP16 (MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP16_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO3) 16-beat wrapping burst Position  */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_INCR16 (MPDDRC_MINFO3_MAX_WAIT_BURST_INCR16_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO3) 16-beat incrementing burst Position  */
#define MPDDRC_MINFO3_MAX_WAIT_SIZE_Pos     20                                             /**< (MPDDRC_MINFO3) Transfer Size on Port x [x = 0..7] Position */
#define MPDDRC_MINFO3_MAX_WAIT_SIZE_Msk     (_U_(0x7) << MPDDRC_MINFO3_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO3) Transfer Size on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO3_MAX_WAIT_SIZE(value)  (MPDDRC_MINFO3_MAX_WAIT_SIZE_Msk & ((value) << MPDDRC_MINFO3_MAX_WAIT_SIZE_Pos))
#define   MPDDRC_MINFO3_MAX_WAIT_SIZE_8BITS_Val _U_(0x0)                                       /**< (MPDDRC_MINFO3) MAX_WAIT Byte transfer  */
#define   MPDDRC_MINFO3_MAX_WAIT_SIZE_16BITS_Val _U_(0x1)                                       /**< (MPDDRC_MINFO3) MAX_WAIT Halfword transfer  */
#define   MPDDRC_MINFO3_MAX_WAIT_SIZE_32BITS_Val _U_(0x2)                                       /**< (MPDDRC_MINFO3) MAX_WAIT Word transfer  */
#define   MPDDRC_MINFO3_MAX_WAIT_SIZE_64BITS_Val _U_(0x3)                                       /**< (MPDDRC_MINFO3) MAX_WAIT Dword transfer  */
#define MPDDRC_MINFO3_MAX_WAIT_SIZE_8BITS   (MPDDRC_MINFO3_MAX_WAIT_SIZE_8BITS_Val << MPDDRC_MINFO3_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO3) Byte transfer Position  */
#define MPDDRC_MINFO3_MAX_WAIT_SIZE_16BITS  (MPDDRC_MINFO3_MAX_WAIT_SIZE_16BITS_Val << MPDDRC_MINFO3_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO3) Halfword transfer Position  */
#define MPDDRC_MINFO3_MAX_WAIT_SIZE_32BITS  (MPDDRC_MINFO3_MAX_WAIT_SIZE_32BITS_Val << MPDDRC_MINFO3_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO3) Word transfer Position  */
#define MPDDRC_MINFO3_MAX_WAIT_SIZE_64BITS  (MPDDRC_MINFO3_MAX_WAIT_SIZE_64BITS_Val << MPDDRC_MINFO3_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO3) Dword transfer Position  */
#define MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_Pos 24                                             /**< (MPDDRC_MINFO3) Read or Write Access on Port x [x = 0..7] Position */
#define MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_Msk (_U_(0x1) << MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_Pos)  /**< (MPDDRC_MINFO3) Read or Write Access on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO3_MAX_WAIT_READ_WRITE   MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_Msk          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_Msk instead */
#define MPDDRC_MINFO3_MAX_WAIT_MASK         _U_(0x177FFFF)                                 /**< \deprecated (MPDDRC_MINFO3_MAX_WAIT) Register MASK  (Use MPDDRC_MINFO3_MAX_WAIT_Msk instead)  */
#define MPDDRC_MINFO3_MAX_WAIT_Msk          _U_(0x177FFFF)                                 /**< (MPDDRC_MINFO3_MAX_WAIT) Register Mask  */

/* NB_TRANSFERS mode */
#define MPDDRC_MINFO3_NB_TRANSFERS_P3_NB_TRANSFERS_Pos 0                                              /**< (MPDDRC_MINFO3) Number of Transfers on Port x [x = 0..7] Position */
#define MPDDRC_MINFO3_NB_TRANSFERS_P3_NB_TRANSFERS_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO3_NB_TRANSFERS_P3_NB_TRANSFERS_Pos)  /**< (MPDDRC_MINFO3) Number of Transfers on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO3_NB_TRANSFERS_P3_NB_TRANSFERS(value) (MPDDRC_MINFO3_NB_TRANSFERS_P3_NB_TRANSFERS_Msk & ((value) << MPDDRC_MINFO3_NB_TRANSFERS_P3_NB_TRANSFERS_Pos))
#define MPDDRC_MINFO3_NB_TRANSFERS_MASK     _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MINFO3_NB_TRANSFERS) Register MASK  (Use MPDDRC_MINFO3_NB_TRANSFERS_Msk instead)  */
#define MPDDRC_MINFO3_NB_TRANSFERS_Msk      _U_(0xFFFFFFFF)                                /**< (MPDDRC_MINFO3_NB_TRANSFERS) Register Mask  */

/* TOTAL_LATENCY mode */
#define MPDDRC_MINFO3_TOTAL_LATENCY_P3_TOTAL_LATENCY_Pos 0                                              /**< (MPDDRC_MINFO3) Total Latency on Port x [x = 0..7] Position */
#define MPDDRC_MINFO3_TOTAL_LATENCY_P3_TOTAL_LATENCY_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO3_TOTAL_LATENCY_P3_TOTAL_LATENCY_Pos)  /**< (MPDDRC_MINFO3) Total Latency on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO3_TOTAL_LATENCY_P3_TOTAL_LATENCY(value) (MPDDRC_MINFO3_TOTAL_LATENCY_P3_TOTAL_LATENCY_Msk & ((value) << MPDDRC_MINFO3_TOTAL_LATENCY_P3_TOTAL_LATENCY_Pos))
#define MPDDRC_MINFO3_TOTAL_LATENCY_MASK    _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MINFO3_TOTAL_LATENCY) Register MASK  (Use MPDDRC_MINFO3_TOTAL_LATENCY_Msk instead)  */
#define MPDDRC_MINFO3_TOTAL_LATENCY_Msk     _U_(0xFFFFFFFF)                                /**< (MPDDRC_MINFO3_TOTAL_LATENCY) Register Mask  */


/* -------- MPDDRC_MINFO4 : (MPDDRC Offset: 0x94) (R/ 32) Monitor Information Port 4 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct { // MAX_WAIT mode
    uint32_t MAX_PORT4_WAITING:16;      /**< bit:  0..15  Address High on Port x [x = 0..7]        */
    uint32_t BURST:3;                   /**< bit: 16..18  Type of Burst on Port x [x = 0..7]       */
    uint32_t :1;                        /**< bit:     19  Reserved */
    uint32_t SIZE:3;                    /**< bit: 20..22  Transfer Size on Port x [x = 0..7]       */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t READ_WRITE:1;              /**< bit:     24  Read or Write Access on Port x [x = 0..7] */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } MAX_WAIT;                                /**< Structure used for MAX_WAIT mode access */
  struct { // NB_TRANSFERS mode
    uint32_t P4_NB_TRANSFERS:32;        /**< bit:  0..31  Number of Transfers on Port x [x = 0..7] */
  } NB_TRANSFERS;                                /**< Structure used for NB_TRANSFERS mode access */
  struct { // TOTAL_LATENCY mode
    uint32_t P4_TOTAL_LATENCY:32;       /**< bit:  0..31  Total Latency on Port x [x = 0..7]       */
  } TOTAL_LATENCY;                                /**< Structure used for TOTAL_LATENCY mode access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_MINFO4_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_MINFO4_OFFSET                (0x94)                                        /**<  (MPDDRC_MINFO4) Monitor Information Port 4 Register  Offset */

#define MPDDRC_MINFO4_MASK                  _U_(0x00)                                      /**< \deprecated (MPDDRC_MINFO4) Register MASK  (Use MPDDRC_MINFO4_Msk instead)  */
#define MPDDRC_MINFO4_Msk                   _U_(0x00)                                      /**< (MPDDRC_MINFO4) Register Mask  */

/* MAX_WAIT mode */
#define MPDDRC_MINFO4_MAX_WAIT_MAX_PORT4_WAITING_Pos 0                                              /**< (MPDDRC_MINFO4) Address High on Port x [x = 0..7] Position */
#define MPDDRC_MINFO4_MAX_WAIT_MAX_PORT4_WAITING_Msk (_U_(0xFFFF) << MPDDRC_MINFO4_MAX_WAIT_MAX_PORT4_WAITING_Pos)  /**< (MPDDRC_MINFO4) Address High on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO4_MAX_WAIT_MAX_PORT4_WAITING(value) (MPDDRC_MINFO4_MAX_WAIT_MAX_PORT4_WAITING_Msk & ((value) << MPDDRC_MINFO4_MAX_WAIT_MAX_PORT4_WAITING_Pos))
#define MPDDRC_MINFO4_MAX_WAIT_BURST_Pos    16                                             /**< (MPDDRC_MINFO4) Type of Burst on Port x [x = 0..7] Position */
#define MPDDRC_MINFO4_MAX_WAIT_BURST_Msk    (_U_(0x7) << MPDDRC_MINFO4_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO4) Type of Burst on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO4_MAX_WAIT_BURST(value) (MPDDRC_MINFO4_MAX_WAIT_BURST_Msk & ((value) << MPDDRC_MINFO4_MAX_WAIT_BURST_Pos))
#define   MPDDRC_MINFO4_MAX_WAIT_BURST_SINGLE_Val _U_(0x0)                                       /**< (MPDDRC_MINFO4) MAX_WAIT Single transfer  */
#define   MPDDRC_MINFO4_MAX_WAIT_BURST_INCR_Val _U_(0x1)                                       /**< (MPDDRC_MINFO4) MAX_WAIT Incrementing burst of unspecified length  */
#define   MPDDRC_MINFO4_MAX_WAIT_BURST_WRAP4_Val _U_(0x2)                                       /**< (MPDDRC_MINFO4) MAX_WAIT 4-beat wrapping burst  */
#define   MPDDRC_MINFO4_MAX_WAIT_BURST_INCR4_Val _U_(0x3)                                       /**< (MPDDRC_MINFO4) MAX_WAIT 4-beat incrementing burst  */
#define   MPDDRC_MINFO4_MAX_WAIT_BURST_WRAP8_Val _U_(0x4)                                       /**< (MPDDRC_MINFO4) MAX_WAIT 8-beat wrapping burst  */
#define   MPDDRC_MINFO4_MAX_WAIT_BURST_INCR8_Val _U_(0x5)                                       /**< (MPDDRC_MINFO4) MAX_WAIT 8-beat incrementing burst  */
#define   MPDDRC_MINFO4_MAX_WAIT_BURST_WRAP16_Val _U_(0x6)                                       /**< (MPDDRC_MINFO4) MAX_WAIT 16-beat wrapping burst  */
#define   MPDDRC_MINFO4_MAX_WAIT_BURST_INCR16_Val _U_(0x7)                                       /**< (MPDDRC_MINFO4) MAX_WAIT 16-beat incrementing burst  */
#define MPDDRC_MINFO4_MAX_WAIT_BURST_SINGLE (MPDDRC_MINFO4_MAX_WAIT_BURST_SINGLE_Val << MPDDRC_MINFO4_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO4) Single transfer Position  */
#define MPDDRC_MINFO4_MAX_WAIT_BURST_INCR   (MPDDRC_MINFO4_MAX_WAIT_BURST_INCR_Val << MPDDRC_MINFO4_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO4) Incrementing burst of unspecified length Position  */
#define MPDDRC_MINFO4_MAX_WAIT_BURST_WRAP4  (MPDDRC_MINFO4_MAX_WAIT_BURST_WRAP4_Val << MPDDRC_MINFO4_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO4) 4-beat wrapping burst Position  */
#define MPDDRC_MINFO4_MAX_WAIT_BURST_INCR4  (MPDDRC_MINFO4_MAX_WAIT_BURST_INCR4_Val << MPDDRC_MINFO4_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO4) 4-beat incrementing burst Position  */
#define MPDDRC_MINFO4_MAX_WAIT_BURST_WRAP8  (MPDDRC_MINFO4_MAX_WAIT_BURST_WRAP8_Val << MPDDRC_MINFO4_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO4) 8-beat wrapping burst Position  */
#define MPDDRC_MINFO4_MAX_WAIT_BURST_INCR8  (MPDDRC_MINFO4_MAX_WAIT_BURST_INCR8_Val << MPDDRC_MINFO4_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO4) 8-beat incrementing burst Position  */
#define MPDDRC_MINFO4_MAX_WAIT_BURST_WRAP16 (MPDDRC_MINFO4_MAX_WAIT_BURST_WRAP16_Val << MPDDRC_MINFO4_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO4) 16-beat wrapping burst Position  */
#define MPDDRC_MINFO4_MAX_WAIT_BURST_INCR16 (MPDDRC_MINFO4_MAX_WAIT_BURST_INCR16_Val << MPDDRC_MINFO4_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO4) 16-beat incrementing burst Position  */
#define MPDDRC_MINFO4_MAX_WAIT_SIZE_Pos     20                                             /**< (MPDDRC_MINFO4) Transfer Size on Port x [x = 0..7] Position */
#define MPDDRC_MINFO4_MAX_WAIT_SIZE_Msk     (_U_(0x7) << MPDDRC_MINFO4_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO4) Transfer Size on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO4_MAX_WAIT_SIZE(value)  (MPDDRC_MINFO4_MAX_WAIT_SIZE_Msk & ((value) << MPDDRC_MINFO4_MAX_WAIT_SIZE_Pos))
#define   MPDDRC_MINFO4_MAX_WAIT_SIZE_8BITS_Val _U_(0x0)                                       /**< (MPDDRC_MINFO4) MAX_WAIT Byte transfer  */
#define   MPDDRC_MINFO4_MAX_WAIT_SIZE_16BITS_Val _U_(0x1)                                       /**< (MPDDRC_MINFO4) MAX_WAIT Halfword transfer  */
#define   MPDDRC_MINFO4_MAX_WAIT_SIZE_32BITS_Val _U_(0x2)                                       /**< (MPDDRC_MINFO4) MAX_WAIT Word transfer  */
#define   MPDDRC_MINFO4_MAX_WAIT_SIZE_64BITS_Val _U_(0x3)                                       /**< (MPDDRC_MINFO4) MAX_WAIT Dword transfer  */
#define MPDDRC_MINFO4_MAX_WAIT_SIZE_8BITS   (MPDDRC_MINFO4_MAX_WAIT_SIZE_8BITS_Val << MPDDRC_MINFO4_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO4) Byte transfer Position  */
#define MPDDRC_MINFO4_MAX_WAIT_SIZE_16BITS  (MPDDRC_MINFO4_MAX_WAIT_SIZE_16BITS_Val << MPDDRC_MINFO4_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO4) Halfword transfer Position  */
#define MPDDRC_MINFO4_MAX_WAIT_SIZE_32BITS  (MPDDRC_MINFO4_MAX_WAIT_SIZE_32BITS_Val << MPDDRC_MINFO4_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO4) Word transfer Position  */
#define MPDDRC_MINFO4_MAX_WAIT_SIZE_64BITS  (MPDDRC_MINFO4_MAX_WAIT_SIZE_64BITS_Val << MPDDRC_MINFO4_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO4) Dword transfer Position  */
#define MPDDRC_MINFO4_MAX_WAIT_READ_WRITE_Pos 24                                             /**< (MPDDRC_MINFO4) Read or Write Access on Port x [x = 0..7] Position */
#define MPDDRC_MINFO4_MAX_WAIT_READ_WRITE_Msk (_U_(0x1) << MPDDRC_MINFO4_MAX_WAIT_READ_WRITE_Pos)  /**< (MPDDRC_MINFO4) Read or Write Access on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO4_MAX_WAIT_READ_WRITE   MPDDRC_MINFO4_MAX_WAIT_READ_WRITE_Msk          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_MINFO4_MAX_WAIT_READ_WRITE_Msk instead */
#define MPDDRC_MINFO4_MAX_WAIT_MASK         _U_(0x177FFFF)                                 /**< \deprecated (MPDDRC_MINFO4_MAX_WAIT) Register MASK  (Use MPDDRC_MINFO4_MAX_WAIT_Msk instead)  */
#define MPDDRC_MINFO4_MAX_WAIT_Msk          _U_(0x177FFFF)                                 /**< (MPDDRC_MINFO4_MAX_WAIT) Register Mask  */

/* NB_TRANSFERS mode */
#define MPDDRC_MINFO4_NB_TRANSFERS_P4_NB_TRANSFERS_Pos 0                                              /**< (MPDDRC_MINFO4) Number of Transfers on Port x [x = 0..7] Position */
#define MPDDRC_MINFO4_NB_TRANSFERS_P4_NB_TRANSFERS_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO4_NB_TRANSFERS_P4_NB_TRANSFERS_Pos)  /**< (MPDDRC_MINFO4) Number of Transfers on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO4_NB_TRANSFERS_P4_NB_TRANSFERS(value) (MPDDRC_MINFO4_NB_TRANSFERS_P4_NB_TRANSFERS_Msk & ((value) << MPDDRC_MINFO4_NB_TRANSFERS_P4_NB_TRANSFERS_Pos))
#define MPDDRC_MINFO4_NB_TRANSFERS_MASK     _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MINFO4_NB_TRANSFERS) Register MASK  (Use MPDDRC_MINFO4_NB_TRANSFERS_Msk instead)  */
#define MPDDRC_MINFO4_NB_TRANSFERS_Msk      _U_(0xFFFFFFFF)                                /**< (MPDDRC_MINFO4_NB_TRANSFERS) Register Mask  */

/* TOTAL_LATENCY mode */
#define MPDDRC_MINFO4_TOTAL_LATENCY_P4_TOTAL_LATENCY_Pos 0                                              /**< (MPDDRC_MINFO4) Total Latency on Port x [x = 0..7] Position */
#define MPDDRC_MINFO4_TOTAL_LATENCY_P4_TOTAL_LATENCY_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO4_TOTAL_LATENCY_P4_TOTAL_LATENCY_Pos)  /**< (MPDDRC_MINFO4) Total Latency on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO4_TOTAL_LATENCY_P4_TOTAL_LATENCY(value) (MPDDRC_MINFO4_TOTAL_LATENCY_P4_TOTAL_LATENCY_Msk & ((value) << MPDDRC_MINFO4_TOTAL_LATENCY_P4_TOTAL_LATENCY_Pos))
#define MPDDRC_MINFO4_TOTAL_LATENCY_MASK    _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MINFO4_TOTAL_LATENCY) Register MASK  (Use MPDDRC_MINFO4_TOTAL_LATENCY_Msk instead)  */
#define MPDDRC_MINFO4_TOTAL_LATENCY_Msk     _U_(0xFFFFFFFF)                                /**< (MPDDRC_MINFO4_TOTAL_LATENCY) Register Mask  */


/* -------- MPDDRC_MINFO5 : (MPDDRC Offset: 0x98) (R/ 32) Monitor Information Port 5 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct { // MAX_WAIT mode
    uint32_t MAX_PORT5_WAITING:16;      /**< bit:  0..15  Address High on Port x [x = 0..7]        */
    uint32_t BURST:3;                   /**< bit: 16..18  Type of Burst on Port x [x = 0..7]       */
    uint32_t :1;                        /**< bit:     19  Reserved */
    uint32_t SIZE:3;                    /**< bit: 20..22  Transfer Size on Port x [x = 0..7]       */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t READ_WRITE:1;              /**< bit:     24  Read or Write Access on Port x [x = 0..7] */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } MAX_WAIT;                                /**< Structure used for MAX_WAIT mode access */
  struct { // NB_TRANSFERS mode
    uint32_t P5_NB_TRANSFERS:32;        /**< bit:  0..31  Number of Transfers on Port x [x = 0..7] */
  } NB_TRANSFERS;                                /**< Structure used for NB_TRANSFERS mode access */
  struct { // TOTAL_LATENCY mode
    uint32_t P5_TOTAL_LATENCY:32;       /**< bit:  0..31  Total Latency on Port x [x = 0..7]       */
  } TOTAL_LATENCY;                                /**< Structure used for TOTAL_LATENCY mode access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_MINFO5_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_MINFO5_OFFSET                (0x98)                                        /**<  (MPDDRC_MINFO5) Monitor Information Port 5 Register  Offset */

#define MPDDRC_MINFO5_MASK                  _U_(0x00)                                      /**< \deprecated (MPDDRC_MINFO5) Register MASK  (Use MPDDRC_MINFO5_Msk instead)  */
#define MPDDRC_MINFO5_Msk                   _U_(0x00)                                      /**< (MPDDRC_MINFO5) Register Mask  */

/* MAX_WAIT mode */
#define MPDDRC_MINFO5_MAX_WAIT_MAX_PORT5_WAITING_Pos 0                                              /**< (MPDDRC_MINFO5) Address High on Port x [x = 0..7] Position */
#define MPDDRC_MINFO5_MAX_WAIT_MAX_PORT5_WAITING_Msk (_U_(0xFFFF) << MPDDRC_MINFO5_MAX_WAIT_MAX_PORT5_WAITING_Pos)  /**< (MPDDRC_MINFO5) Address High on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO5_MAX_WAIT_MAX_PORT5_WAITING(value) (MPDDRC_MINFO5_MAX_WAIT_MAX_PORT5_WAITING_Msk & ((value) << MPDDRC_MINFO5_MAX_WAIT_MAX_PORT5_WAITING_Pos))
#define MPDDRC_MINFO5_MAX_WAIT_BURST_Pos    16                                             /**< (MPDDRC_MINFO5) Type of Burst on Port x [x = 0..7] Position */
#define MPDDRC_MINFO5_MAX_WAIT_BURST_Msk    (_U_(0x7) << MPDDRC_MINFO5_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO5) Type of Burst on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO5_MAX_WAIT_BURST(value) (MPDDRC_MINFO5_MAX_WAIT_BURST_Msk & ((value) << MPDDRC_MINFO5_MAX_WAIT_BURST_Pos))
#define   MPDDRC_MINFO5_MAX_WAIT_BURST_SINGLE_Val _U_(0x0)                                       /**< (MPDDRC_MINFO5) MAX_WAIT Single transfer  */
#define   MPDDRC_MINFO5_MAX_WAIT_BURST_INCR_Val _U_(0x1)                                       /**< (MPDDRC_MINFO5) MAX_WAIT Incrementing burst of unspecified length  */
#define   MPDDRC_MINFO5_MAX_WAIT_BURST_WRAP4_Val _U_(0x2)                                       /**< (MPDDRC_MINFO5) MAX_WAIT 4-beat wrapping burst  */
#define   MPDDRC_MINFO5_MAX_WAIT_BURST_INCR4_Val _U_(0x3)                                       /**< (MPDDRC_MINFO5) MAX_WAIT 4-beat incrementing burst  */
#define   MPDDRC_MINFO5_MAX_WAIT_BURST_WRAP8_Val _U_(0x4)                                       /**< (MPDDRC_MINFO5) MAX_WAIT 8-beat wrapping burst  */
#define   MPDDRC_MINFO5_MAX_WAIT_BURST_INCR8_Val _U_(0x5)                                       /**< (MPDDRC_MINFO5) MAX_WAIT 8-beat incrementing burst  */
#define   MPDDRC_MINFO5_MAX_WAIT_BURST_WRAP16_Val _U_(0x6)                                       /**< (MPDDRC_MINFO5) MAX_WAIT 16-beat wrapping burst  */
#define   MPDDRC_MINFO5_MAX_WAIT_BURST_INCR16_Val _U_(0x7)                                       /**< (MPDDRC_MINFO5) MAX_WAIT 16-beat incrementing burst  */
#define MPDDRC_MINFO5_MAX_WAIT_BURST_SINGLE (MPDDRC_MINFO5_MAX_WAIT_BURST_SINGLE_Val << MPDDRC_MINFO5_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO5) Single transfer Position  */
#define MPDDRC_MINFO5_MAX_WAIT_BURST_INCR   (MPDDRC_MINFO5_MAX_WAIT_BURST_INCR_Val << MPDDRC_MINFO5_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO5) Incrementing burst of unspecified length Position  */
#define MPDDRC_MINFO5_MAX_WAIT_BURST_WRAP4  (MPDDRC_MINFO5_MAX_WAIT_BURST_WRAP4_Val << MPDDRC_MINFO5_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO5) 4-beat wrapping burst Position  */
#define MPDDRC_MINFO5_MAX_WAIT_BURST_INCR4  (MPDDRC_MINFO5_MAX_WAIT_BURST_INCR4_Val << MPDDRC_MINFO5_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO5) 4-beat incrementing burst Position  */
#define MPDDRC_MINFO5_MAX_WAIT_BURST_WRAP8  (MPDDRC_MINFO5_MAX_WAIT_BURST_WRAP8_Val << MPDDRC_MINFO5_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO5) 8-beat wrapping burst Position  */
#define MPDDRC_MINFO5_MAX_WAIT_BURST_INCR8  (MPDDRC_MINFO5_MAX_WAIT_BURST_INCR8_Val << MPDDRC_MINFO5_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO5) 8-beat incrementing burst Position  */
#define MPDDRC_MINFO5_MAX_WAIT_BURST_WRAP16 (MPDDRC_MINFO5_MAX_WAIT_BURST_WRAP16_Val << MPDDRC_MINFO5_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO5) 16-beat wrapping burst Position  */
#define MPDDRC_MINFO5_MAX_WAIT_BURST_INCR16 (MPDDRC_MINFO5_MAX_WAIT_BURST_INCR16_Val << MPDDRC_MINFO5_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO5) 16-beat incrementing burst Position  */
#define MPDDRC_MINFO5_MAX_WAIT_SIZE_Pos     20                                             /**< (MPDDRC_MINFO5) Transfer Size on Port x [x = 0..7] Position */
#define MPDDRC_MINFO5_MAX_WAIT_SIZE_Msk     (_U_(0x7) << MPDDRC_MINFO5_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO5) Transfer Size on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO5_MAX_WAIT_SIZE(value)  (MPDDRC_MINFO5_MAX_WAIT_SIZE_Msk & ((value) << MPDDRC_MINFO5_MAX_WAIT_SIZE_Pos))
#define   MPDDRC_MINFO5_MAX_WAIT_SIZE_8BITS_Val _U_(0x0)                                       /**< (MPDDRC_MINFO5) MAX_WAIT Byte transfer  */
#define   MPDDRC_MINFO5_MAX_WAIT_SIZE_16BITS_Val _U_(0x1)                                       /**< (MPDDRC_MINFO5) MAX_WAIT Halfword transfer  */
#define   MPDDRC_MINFO5_MAX_WAIT_SIZE_32BITS_Val _U_(0x2)                                       /**< (MPDDRC_MINFO5) MAX_WAIT Word transfer  */
#define   MPDDRC_MINFO5_MAX_WAIT_SIZE_64BITS_Val _U_(0x3)                                       /**< (MPDDRC_MINFO5) MAX_WAIT Dword transfer  */
#define MPDDRC_MINFO5_MAX_WAIT_SIZE_8BITS   (MPDDRC_MINFO5_MAX_WAIT_SIZE_8BITS_Val << MPDDRC_MINFO5_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO5) Byte transfer Position  */
#define MPDDRC_MINFO5_MAX_WAIT_SIZE_16BITS  (MPDDRC_MINFO5_MAX_WAIT_SIZE_16BITS_Val << MPDDRC_MINFO5_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO5) Halfword transfer Position  */
#define MPDDRC_MINFO5_MAX_WAIT_SIZE_32BITS  (MPDDRC_MINFO5_MAX_WAIT_SIZE_32BITS_Val << MPDDRC_MINFO5_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO5) Word transfer Position  */
#define MPDDRC_MINFO5_MAX_WAIT_SIZE_64BITS  (MPDDRC_MINFO5_MAX_WAIT_SIZE_64BITS_Val << MPDDRC_MINFO5_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO5) Dword transfer Position  */
#define MPDDRC_MINFO5_MAX_WAIT_READ_WRITE_Pos 24                                             /**< (MPDDRC_MINFO5) Read or Write Access on Port x [x = 0..7] Position */
#define MPDDRC_MINFO5_MAX_WAIT_READ_WRITE_Msk (_U_(0x1) << MPDDRC_MINFO5_MAX_WAIT_READ_WRITE_Pos)  /**< (MPDDRC_MINFO5) Read or Write Access on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO5_MAX_WAIT_READ_WRITE   MPDDRC_MINFO5_MAX_WAIT_READ_WRITE_Msk          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_MINFO5_MAX_WAIT_READ_WRITE_Msk instead */
#define MPDDRC_MINFO5_MAX_WAIT_MASK         _U_(0x177FFFF)                                 /**< \deprecated (MPDDRC_MINFO5_MAX_WAIT) Register MASK  (Use MPDDRC_MINFO5_MAX_WAIT_Msk instead)  */
#define MPDDRC_MINFO5_MAX_WAIT_Msk          _U_(0x177FFFF)                                 /**< (MPDDRC_MINFO5_MAX_WAIT) Register Mask  */

/* NB_TRANSFERS mode */
#define MPDDRC_MINFO5_NB_TRANSFERS_P5_NB_TRANSFERS_Pos 0                                              /**< (MPDDRC_MINFO5) Number of Transfers on Port x [x = 0..7] Position */
#define MPDDRC_MINFO5_NB_TRANSFERS_P5_NB_TRANSFERS_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO5_NB_TRANSFERS_P5_NB_TRANSFERS_Pos)  /**< (MPDDRC_MINFO5) Number of Transfers on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO5_NB_TRANSFERS_P5_NB_TRANSFERS(value) (MPDDRC_MINFO5_NB_TRANSFERS_P5_NB_TRANSFERS_Msk & ((value) << MPDDRC_MINFO5_NB_TRANSFERS_P5_NB_TRANSFERS_Pos))
#define MPDDRC_MINFO5_NB_TRANSFERS_MASK     _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MINFO5_NB_TRANSFERS) Register MASK  (Use MPDDRC_MINFO5_NB_TRANSFERS_Msk instead)  */
#define MPDDRC_MINFO5_NB_TRANSFERS_Msk      _U_(0xFFFFFFFF)                                /**< (MPDDRC_MINFO5_NB_TRANSFERS) Register Mask  */

/* TOTAL_LATENCY mode */
#define MPDDRC_MINFO5_TOTAL_LATENCY_P5_TOTAL_LATENCY_Pos 0                                              /**< (MPDDRC_MINFO5) Total Latency on Port x [x = 0..7] Position */
#define MPDDRC_MINFO5_TOTAL_LATENCY_P5_TOTAL_LATENCY_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO5_TOTAL_LATENCY_P5_TOTAL_LATENCY_Pos)  /**< (MPDDRC_MINFO5) Total Latency on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO5_TOTAL_LATENCY_P5_TOTAL_LATENCY(value) (MPDDRC_MINFO5_TOTAL_LATENCY_P5_TOTAL_LATENCY_Msk & ((value) << MPDDRC_MINFO5_TOTAL_LATENCY_P5_TOTAL_LATENCY_Pos))
#define MPDDRC_MINFO5_TOTAL_LATENCY_MASK    _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MINFO5_TOTAL_LATENCY) Register MASK  (Use MPDDRC_MINFO5_TOTAL_LATENCY_Msk instead)  */
#define MPDDRC_MINFO5_TOTAL_LATENCY_Msk     _U_(0xFFFFFFFF)                                /**< (MPDDRC_MINFO5_TOTAL_LATENCY) Register Mask  */


/* -------- MPDDRC_MINFO6 : (MPDDRC Offset: 0x9c) (R/ 32) Monitor Information Port 6 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct { // MAX_WAIT mode
    uint32_t MAX_PORT6_WAITING:16;      /**< bit:  0..15  Address High on Port x [x = 0..7]        */
    uint32_t BURST:3;                   /**< bit: 16..18  Type of Burst on Port x [x = 0..7]       */
    uint32_t :1;                        /**< bit:     19  Reserved */
    uint32_t SIZE:3;                    /**< bit: 20..22  Transfer Size on Port x [x = 0..7]       */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t READ_WRITE:1;              /**< bit:     24  Read or Write Access on Port x [x = 0..7] */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } MAX_WAIT;                                /**< Structure used for MAX_WAIT mode access */
  struct { // NB_TRANSFERS mode
    uint32_t P6_NB_TRANSFERS:32;        /**< bit:  0..31  Number of Transfers on Port x [x = 0..7] */
  } NB_TRANSFERS;                                /**< Structure used for NB_TRANSFERS mode access */
  struct { // TOTAL_LATENCY mode
    uint32_t P6_TOTAL_LATENCY:32;       /**< bit:  0..31  Total Latency on Port x [x = 0..7]       */
  } TOTAL_LATENCY;                                /**< Structure used for TOTAL_LATENCY mode access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_MINFO6_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_MINFO6_OFFSET                (0x9C)                                        /**<  (MPDDRC_MINFO6) Monitor Information Port 6 Register  Offset */

#define MPDDRC_MINFO6_MASK                  _U_(0x00)                                      /**< \deprecated (MPDDRC_MINFO6) Register MASK  (Use MPDDRC_MINFO6_Msk instead)  */
#define MPDDRC_MINFO6_Msk                   _U_(0x00)                                      /**< (MPDDRC_MINFO6) Register Mask  */

/* MAX_WAIT mode */
#define MPDDRC_MINFO6_MAX_WAIT_MAX_PORT6_WAITING_Pos 0                                              /**< (MPDDRC_MINFO6) Address High on Port x [x = 0..7] Position */
#define MPDDRC_MINFO6_MAX_WAIT_MAX_PORT6_WAITING_Msk (_U_(0xFFFF) << MPDDRC_MINFO6_MAX_WAIT_MAX_PORT6_WAITING_Pos)  /**< (MPDDRC_MINFO6) Address High on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO6_MAX_WAIT_MAX_PORT6_WAITING(value) (MPDDRC_MINFO6_MAX_WAIT_MAX_PORT6_WAITING_Msk & ((value) << MPDDRC_MINFO6_MAX_WAIT_MAX_PORT6_WAITING_Pos))
#define MPDDRC_MINFO6_MAX_WAIT_BURST_Pos    16                                             /**< (MPDDRC_MINFO6) Type of Burst on Port x [x = 0..7] Position */
#define MPDDRC_MINFO6_MAX_WAIT_BURST_Msk    (_U_(0x7) << MPDDRC_MINFO6_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO6) Type of Burst on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO6_MAX_WAIT_BURST(value) (MPDDRC_MINFO6_MAX_WAIT_BURST_Msk & ((value) << MPDDRC_MINFO6_MAX_WAIT_BURST_Pos))
#define   MPDDRC_MINFO6_MAX_WAIT_BURST_SINGLE_Val _U_(0x0)                                       /**< (MPDDRC_MINFO6) MAX_WAIT Single transfer  */
#define   MPDDRC_MINFO6_MAX_WAIT_BURST_INCR_Val _U_(0x1)                                       /**< (MPDDRC_MINFO6) MAX_WAIT Incrementing burst of unspecified length  */
#define   MPDDRC_MINFO6_MAX_WAIT_BURST_WRAP4_Val _U_(0x2)                                       /**< (MPDDRC_MINFO6) MAX_WAIT 4-beat wrapping burst  */
#define   MPDDRC_MINFO6_MAX_WAIT_BURST_INCR4_Val _U_(0x3)                                       /**< (MPDDRC_MINFO6) MAX_WAIT 4-beat incrementing burst  */
#define   MPDDRC_MINFO6_MAX_WAIT_BURST_WRAP8_Val _U_(0x4)                                       /**< (MPDDRC_MINFO6) MAX_WAIT 8-beat wrapping burst  */
#define   MPDDRC_MINFO6_MAX_WAIT_BURST_INCR8_Val _U_(0x5)                                       /**< (MPDDRC_MINFO6) MAX_WAIT 8-beat incrementing burst  */
#define   MPDDRC_MINFO6_MAX_WAIT_BURST_WRAP16_Val _U_(0x6)                                       /**< (MPDDRC_MINFO6) MAX_WAIT 16-beat wrapping burst  */
#define   MPDDRC_MINFO6_MAX_WAIT_BURST_INCR16_Val _U_(0x7)                                       /**< (MPDDRC_MINFO6) MAX_WAIT 16-beat incrementing burst  */
#define MPDDRC_MINFO6_MAX_WAIT_BURST_SINGLE (MPDDRC_MINFO6_MAX_WAIT_BURST_SINGLE_Val << MPDDRC_MINFO6_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO6) Single transfer Position  */
#define MPDDRC_MINFO6_MAX_WAIT_BURST_INCR   (MPDDRC_MINFO6_MAX_WAIT_BURST_INCR_Val << MPDDRC_MINFO6_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO6) Incrementing burst of unspecified length Position  */
#define MPDDRC_MINFO6_MAX_WAIT_BURST_WRAP4  (MPDDRC_MINFO6_MAX_WAIT_BURST_WRAP4_Val << MPDDRC_MINFO6_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO6) 4-beat wrapping burst Position  */
#define MPDDRC_MINFO6_MAX_WAIT_BURST_INCR4  (MPDDRC_MINFO6_MAX_WAIT_BURST_INCR4_Val << MPDDRC_MINFO6_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO6) 4-beat incrementing burst Position  */
#define MPDDRC_MINFO6_MAX_WAIT_BURST_WRAP8  (MPDDRC_MINFO6_MAX_WAIT_BURST_WRAP8_Val << MPDDRC_MINFO6_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO6) 8-beat wrapping burst Position  */
#define MPDDRC_MINFO6_MAX_WAIT_BURST_INCR8  (MPDDRC_MINFO6_MAX_WAIT_BURST_INCR8_Val << MPDDRC_MINFO6_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO6) 8-beat incrementing burst Position  */
#define MPDDRC_MINFO6_MAX_WAIT_BURST_WRAP16 (MPDDRC_MINFO6_MAX_WAIT_BURST_WRAP16_Val << MPDDRC_MINFO6_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO6) 16-beat wrapping burst Position  */
#define MPDDRC_MINFO6_MAX_WAIT_BURST_INCR16 (MPDDRC_MINFO6_MAX_WAIT_BURST_INCR16_Val << MPDDRC_MINFO6_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO6) 16-beat incrementing burst Position  */
#define MPDDRC_MINFO6_MAX_WAIT_SIZE_Pos     20                                             /**< (MPDDRC_MINFO6) Transfer Size on Port x [x = 0..7] Position */
#define MPDDRC_MINFO6_MAX_WAIT_SIZE_Msk     (_U_(0x7) << MPDDRC_MINFO6_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO6) Transfer Size on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO6_MAX_WAIT_SIZE(value)  (MPDDRC_MINFO6_MAX_WAIT_SIZE_Msk & ((value) << MPDDRC_MINFO6_MAX_WAIT_SIZE_Pos))
#define   MPDDRC_MINFO6_MAX_WAIT_SIZE_8BITS_Val _U_(0x0)                                       /**< (MPDDRC_MINFO6) MAX_WAIT Byte transfer  */
#define   MPDDRC_MINFO6_MAX_WAIT_SIZE_16BITS_Val _U_(0x1)                                       /**< (MPDDRC_MINFO6) MAX_WAIT Halfword transfer  */
#define   MPDDRC_MINFO6_MAX_WAIT_SIZE_32BITS_Val _U_(0x2)                                       /**< (MPDDRC_MINFO6) MAX_WAIT Word transfer  */
#define   MPDDRC_MINFO6_MAX_WAIT_SIZE_64BITS_Val _U_(0x3)                                       /**< (MPDDRC_MINFO6) MAX_WAIT Dword transfer  */
#define MPDDRC_MINFO6_MAX_WAIT_SIZE_8BITS   (MPDDRC_MINFO6_MAX_WAIT_SIZE_8BITS_Val << MPDDRC_MINFO6_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO6) Byte transfer Position  */
#define MPDDRC_MINFO6_MAX_WAIT_SIZE_16BITS  (MPDDRC_MINFO6_MAX_WAIT_SIZE_16BITS_Val << MPDDRC_MINFO6_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO6) Halfword transfer Position  */
#define MPDDRC_MINFO6_MAX_WAIT_SIZE_32BITS  (MPDDRC_MINFO6_MAX_WAIT_SIZE_32BITS_Val << MPDDRC_MINFO6_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO6) Word transfer Position  */
#define MPDDRC_MINFO6_MAX_WAIT_SIZE_64BITS  (MPDDRC_MINFO6_MAX_WAIT_SIZE_64BITS_Val << MPDDRC_MINFO6_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO6) Dword transfer Position  */
#define MPDDRC_MINFO6_MAX_WAIT_READ_WRITE_Pos 24                                             /**< (MPDDRC_MINFO6) Read or Write Access on Port x [x = 0..7] Position */
#define MPDDRC_MINFO6_MAX_WAIT_READ_WRITE_Msk (_U_(0x1) << MPDDRC_MINFO6_MAX_WAIT_READ_WRITE_Pos)  /**< (MPDDRC_MINFO6) Read or Write Access on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO6_MAX_WAIT_READ_WRITE   MPDDRC_MINFO6_MAX_WAIT_READ_WRITE_Msk          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_MINFO6_MAX_WAIT_READ_WRITE_Msk instead */
#define MPDDRC_MINFO6_MAX_WAIT_MASK         _U_(0x177FFFF)                                 /**< \deprecated (MPDDRC_MINFO6_MAX_WAIT) Register MASK  (Use MPDDRC_MINFO6_MAX_WAIT_Msk instead)  */
#define MPDDRC_MINFO6_MAX_WAIT_Msk          _U_(0x177FFFF)                                 /**< (MPDDRC_MINFO6_MAX_WAIT) Register Mask  */

/* NB_TRANSFERS mode */
#define MPDDRC_MINFO6_NB_TRANSFERS_P6_NB_TRANSFERS_Pos 0                                              /**< (MPDDRC_MINFO6) Number of Transfers on Port x [x = 0..7] Position */
#define MPDDRC_MINFO6_NB_TRANSFERS_P6_NB_TRANSFERS_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO6_NB_TRANSFERS_P6_NB_TRANSFERS_Pos)  /**< (MPDDRC_MINFO6) Number of Transfers on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO6_NB_TRANSFERS_P6_NB_TRANSFERS(value) (MPDDRC_MINFO6_NB_TRANSFERS_P6_NB_TRANSFERS_Msk & ((value) << MPDDRC_MINFO6_NB_TRANSFERS_P6_NB_TRANSFERS_Pos))
#define MPDDRC_MINFO6_NB_TRANSFERS_MASK     _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MINFO6_NB_TRANSFERS) Register MASK  (Use MPDDRC_MINFO6_NB_TRANSFERS_Msk instead)  */
#define MPDDRC_MINFO6_NB_TRANSFERS_Msk      _U_(0xFFFFFFFF)                                /**< (MPDDRC_MINFO6_NB_TRANSFERS) Register Mask  */

/* TOTAL_LATENCY mode */
#define MPDDRC_MINFO6_TOTAL_LATENCY_P6_TOTAL_LATENCY_Pos 0                                              /**< (MPDDRC_MINFO6) Total Latency on Port x [x = 0..7] Position */
#define MPDDRC_MINFO6_TOTAL_LATENCY_P6_TOTAL_LATENCY_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO6_TOTAL_LATENCY_P6_TOTAL_LATENCY_Pos)  /**< (MPDDRC_MINFO6) Total Latency on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO6_TOTAL_LATENCY_P6_TOTAL_LATENCY(value) (MPDDRC_MINFO6_TOTAL_LATENCY_P6_TOTAL_LATENCY_Msk & ((value) << MPDDRC_MINFO6_TOTAL_LATENCY_P6_TOTAL_LATENCY_Pos))
#define MPDDRC_MINFO6_TOTAL_LATENCY_MASK    _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MINFO6_TOTAL_LATENCY) Register MASK  (Use MPDDRC_MINFO6_TOTAL_LATENCY_Msk instead)  */
#define MPDDRC_MINFO6_TOTAL_LATENCY_Msk     _U_(0xFFFFFFFF)                                /**< (MPDDRC_MINFO6_TOTAL_LATENCY) Register Mask  */


/* -------- MPDDRC_MINFO7 : (MPDDRC Offset: 0xa0) (R/ 32) Monitor Information Port 7 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct { // MAX_WAIT mode
    uint32_t MAX_PORT7_WAITING:16;      /**< bit:  0..15  Address High on Port x [x = 0..7]        */
    uint32_t BURST:3;                   /**< bit: 16..18  Type of Burst on Port x [x = 0..7]       */
    uint32_t :1;                        /**< bit:     19  Reserved */
    uint32_t SIZE:3;                    /**< bit: 20..22  Transfer Size on Port x [x = 0..7]       */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t READ_WRITE:1;              /**< bit:     24  Read or Write Access on Port x [x = 0..7] */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } MAX_WAIT;                                /**< Structure used for MAX_WAIT mode access */
  struct { // NB_TRANSFERS mode
    uint32_t P7_NB_TRANSFERS:32;        /**< bit:  0..31  Number of Transfers on Port x [x = 0..7] */
  } NB_TRANSFERS;                                /**< Structure used for NB_TRANSFERS mode access */
  struct { // TOTAL_LATENCY mode
    uint32_t P7_TOTAL_LATENCY:32;       /**< bit:  0..31  Total Latency on Port x [x = 0..7]       */
  } TOTAL_LATENCY;                                /**< Structure used for TOTAL_LATENCY mode access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_MINFO7_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_MINFO7_OFFSET                (0xA0)                                        /**<  (MPDDRC_MINFO7) Monitor Information Port 7 Register  Offset */

#define MPDDRC_MINFO7_MASK                  _U_(0x00)                                      /**< \deprecated (MPDDRC_MINFO7) Register MASK  (Use MPDDRC_MINFO7_Msk instead)  */
#define MPDDRC_MINFO7_Msk                   _U_(0x00)                                      /**< (MPDDRC_MINFO7) Register Mask  */

/* MAX_WAIT mode */
#define MPDDRC_MINFO7_MAX_WAIT_MAX_PORT7_WAITING_Pos 0                                              /**< (MPDDRC_MINFO7) Address High on Port x [x = 0..7] Position */
#define MPDDRC_MINFO7_MAX_WAIT_MAX_PORT7_WAITING_Msk (_U_(0xFFFF) << MPDDRC_MINFO7_MAX_WAIT_MAX_PORT7_WAITING_Pos)  /**< (MPDDRC_MINFO7) Address High on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO7_MAX_WAIT_MAX_PORT7_WAITING(value) (MPDDRC_MINFO7_MAX_WAIT_MAX_PORT7_WAITING_Msk & ((value) << MPDDRC_MINFO7_MAX_WAIT_MAX_PORT7_WAITING_Pos))
#define MPDDRC_MINFO7_MAX_WAIT_BURST_Pos    16                                             /**< (MPDDRC_MINFO7) Type of Burst on Port x [x = 0..7] Position */
#define MPDDRC_MINFO7_MAX_WAIT_BURST_Msk    (_U_(0x7) << MPDDRC_MINFO7_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO7) Type of Burst on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO7_MAX_WAIT_BURST(value) (MPDDRC_MINFO7_MAX_WAIT_BURST_Msk & ((value) << MPDDRC_MINFO7_MAX_WAIT_BURST_Pos))
#define   MPDDRC_MINFO7_MAX_WAIT_BURST_SINGLE_Val _U_(0x0)                                       /**< (MPDDRC_MINFO7) MAX_WAIT Single transfer  */
#define   MPDDRC_MINFO7_MAX_WAIT_BURST_INCR_Val _U_(0x1)                                       /**< (MPDDRC_MINFO7) MAX_WAIT Incrementing burst of unspecified length  */
#define   MPDDRC_MINFO7_MAX_WAIT_BURST_WRAP4_Val _U_(0x2)                                       /**< (MPDDRC_MINFO7) MAX_WAIT 4-beat wrapping burst  */
#define   MPDDRC_MINFO7_MAX_WAIT_BURST_INCR4_Val _U_(0x3)                                       /**< (MPDDRC_MINFO7) MAX_WAIT 4-beat incrementing burst  */
#define   MPDDRC_MINFO7_MAX_WAIT_BURST_WRAP8_Val _U_(0x4)                                       /**< (MPDDRC_MINFO7) MAX_WAIT 8-beat wrapping burst  */
#define   MPDDRC_MINFO7_MAX_WAIT_BURST_INCR8_Val _U_(0x5)                                       /**< (MPDDRC_MINFO7) MAX_WAIT 8-beat incrementing burst  */
#define   MPDDRC_MINFO7_MAX_WAIT_BURST_WRAP16_Val _U_(0x6)                                       /**< (MPDDRC_MINFO7) MAX_WAIT 16-beat wrapping burst  */
#define   MPDDRC_MINFO7_MAX_WAIT_BURST_INCR16_Val _U_(0x7)                                       /**< (MPDDRC_MINFO7) MAX_WAIT 16-beat incrementing burst  */
#define MPDDRC_MINFO7_MAX_WAIT_BURST_SINGLE (MPDDRC_MINFO7_MAX_WAIT_BURST_SINGLE_Val << MPDDRC_MINFO7_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO7) Single transfer Position  */
#define MPDDRC_MINFO7_MAX_WAIT_BURST_INCR   (MPDDRC_MINFO7_MAX_WAIT_BURST_INCR_Val << MPDDRC_MINFO7_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO7) Incrementing burst of unspecified length Position  */
#define MPDDRC_MINFO7_MAX_WAIT_BURST_WRAP4  (MPDDRC_MINFO7_MAX_WAIT_BURST_WRAP4_Val << MPDDRC_MINFO7_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO7) 4-beat wrapping burst Position  */
#define MPDDRC_MINFO7_MAX_WAIT_BURST_INCR4  (MPDDRC_MINFO7_MAX_WAIT_BURST_INCR4_Val << MPDDRC_MINFO7_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO7) 4-beat incrementing burst Position  */
#define MPDDRC_MINFO7_MAX_WAIT_BURST_WRAP8  (MPDDRC_MINFO7_MAX_WAIT_BURST_WRAP8_Val << MPDDRC_MINFO7_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO7) 8-beat wrapping burst Position  */
#define MPDDRC_MINFO7_MAX_WAIT_BURST_INCR8  (MPDDRC_MINFO7_MAX_WAIT_BURST_INCR8_Val << MPDDRC_MINFO7_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO7) 8-beat incrementing burst Position  */
#define MPDDRC_MINFO7_MAX_WAIT_BURST_WRAP16 (MPDDRC_MINFO7_MAX_WAIT_BURST_WRAP16_Val << MPDDRC_MINFO7_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO7) 16-beat wrapping burst Position  */
#define MPDDRC_MINFO7_MAX_WAIT_BURST_INCR16 (MPDDRC_MINFO7_MAX_WAIT_BURST_INCR16_Val << MPDDRC_MINFO7_MAX_WAIT_BURST_Pos)  /**< (MPDDRC_MINFO7) 16-beat incrementing burst Position  */
#define MPDDRC_MINFO7_MAX_WAIT_SIZE_Pos     20                                             /**< (MPDDRC_MINFO7) Transfer Size on Port x [x = 0..7] Position */
#define MPDDRC_MINFO7_MAX_WAIT_SIZE_Msk     (_U_(0x7) << MPDDRC_MINFO7_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO7) Transfer Size on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO7_MAX_WAIT_SIZE(value)  (MPDDRC_MINFO7_MAX_WAIT_SIZE_Msk & ((value) << MPDDRC_MINFO7_MAX_WAIT_SIZE_Pos))
#define   MPDDRC_MINFO7_MAX_WAIT_SIZE_8BITS_Val _U_(0x0)                                       /**< (MPDDRC_MINFO7) MAX_WAIT Byte transfer  */
#define   MPDDRC_MINFO7_MAX_WAIT_SIZE_16BITS_Val _U_(0x1)                                       /**< (MPDDRC_MINFO7) MAX_WAIT Halfword transfer  */
#define   MPDDRC_MINFO7_MAX_WAIT_SIZE_32BITS_Val _U_(0x2)                                       /**< (MPDDRC_MINFO7) MAX_WAIT Word transfer  */
#define   MPDDRC_MINFO7_MAX_WAIT_SIZE_64BITS_Val _U_(0x3)                                       /**< (MPDDRC_MINFO7) MAX_WAIT Dword transfer  */
#define MPDDRC_MINFO7_MAX_WAIT_SIZE_8BITS   (MPDDRC_MINFO7_MAX_WAIT_SIZE_8BITS_Val << MPDDRC_MINFO7_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO7) Byte transfer Position  */
#define MPDDRC_MINFO7_MAX_WAIT_SIZE_16BITS  (MPDDRC_MINFO7_MAX_WAIT_SIZE_16BITS_Val << MPDDRC_MINFO7_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO7) Halfword transfer Position  */
#define MPDDRC_MINFO7_MAX_WAIT_SIZE_32BITS  (MPDDRC_MINFO7_MAX_WAIT_SIZE_32BITS_Val << MPDDRC_MINFO7_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO7) Word transfer Position  */
#define MPDDRC_MINFO7_MAX_WAIT_SIZE_64BITS  (MPDDRC_MINFO7_MAX_WAIT_SIZE_64BITS_Val << MPDDRC_MINFO7_MAX_WAIT_SIZE_Pos)  /**< (MPDDRC_MINFO7) Dword transfer Position  */
#define MPDDRC_MINFO7_MAX_WAIT_READ_WRITE_Pos 24                                             /**< (MPDDRC_MINFO7) Read or Write Access on Port x [x = 0..7] Position */
#define MPDDRC_MINFO7_MAX_WAIT_READ_WRITE_Msk (_U_(0x1) << MPDDRC_MINFO7_MAX_WAIT_READ_WRITE_Pos)  /**< (MPDDRC_MINFO7) Read or Write Access on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO7_MAX_WAIT_READ_WRITE   MPDDRC_MINFO7_MAX_WAIT_READ_WRITE_Msk          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_MINFO7_MAX_WAIT_READ_WRITE_Msk instead */
#define MPDDRC_MINFO7_MAX_WAIT_MASK         _U_(0x177FFFF)                                 /**< \deprecated (MPDDRC_MINFO7_MAX_WAIT) Register MASK  (Use MPDDRC_MINFO7_MAX_WAIT_Msk instead)  */
#define MPDDRC_MINFO7_MAX_WAIT_Msk          _U_(0x177FFFF)                                 /**< (MPDDRC_MINFO7_MAX_WAIT) Register Mask  */

/* NB_TRANSFERS mode */
#define MPDDRC_MINFO7_NB_TRANSFERS_P7_NB_TRANSFERS_Pos 0                                              /**< (MPDDRC_MINFO7) Number of Transfers on Port x [x = 0..7] Position */
#define MPDDRC_MINFO7_NB_TRANSFERS_P7_NB_TRANSFERS_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO7_NB_TRANSFERS_P7_NB_TRANSFERS_Pos)  /**< (MPDDRC_MINFO7) Number of Transfers on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO7_NB_TRANSFERS_P7_NB_TRANSFERS(value) (MPDDRC_MINFO7_NB_TRANSFERS_P7_NB_TRANSFERS_Msk & ((value) << MPDDRC_MINFO7_NB_TRANSFERS_P7_NB_TRANSFERS_Pos))
#define MPDDRC_MINFO7_NB_TRANSFERS_MASK     _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MINFO7_NB_TRANSFERS) Register MASK  (Use MPDDRC_MINFO7_NB_TRANSFERS_Msk instead)  */
#define MPDDRC_MINFO7_NB_TRANSFERS_Msk      _U_(0xFFFFFFFF)                                /**< (MPDDRC_MINFO7_NB_TRANSFERS) Register Mask  */

/* TOTAL_LATENCY mode */
#define MPDDRC_MINFO7_TOTAL_LATENCY_P7_TOTAL_LATENCY_Pos 0                                              /**< (MPDDRC_MINFO7) Total Latency on Port x [x = 0..7] Position */
#define MPDDRC_MINFO7_TOTAL_LATENCY_P7_TOTAL_LATENCY_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO7_TOTAL_LATENCY_P7_TOTAL_LATENCY_Pos)  /**< (MPDDRC_MINFO7) Total Latency on Port x [x = 0..7] Mask */
#define MPDDRC_MINFO7_TOTAL_LATENCY_P7_TOTAL_LATENCY(value) (MPDDRC_MINFO7_TOTAL_LATENCY_P7_TOTAL_LATENCY_Msk & ((value) << MPDDRC_MINFO7_TOTAL_LATENCY_P7_TOTAL_LATENCY_Pos))
#define MPDDRC_MINFO7_TOTAL_LATENCY_MASK    _U_(0xFFFFFFFF)                                /**< \deprecated (MPDDRC_MINFO7_TOTAL_LATENCY) Register MASK  (Use MPDDRC_MINFO7_TOTAL_LATENCY_Msk instead)  */
#define MPDDRC_MINFO7_TOTAL_LATENCY_Msk     _U_(0xFFFFFFFF)                                /**< (MPDDRC_MINFO7_TOTAL_LATENCY) Register Mask  */


/* -------- MPDDRC_WPMR : (MPDDRC Offset: 0xe4) (R/W 32) Write Protection Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPEN:1;                    /**< bit:      0  Write Protection Enable                  */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPKEY:24;                  /**< bit:  8..31  Write Protection Key                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_WPMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_WPMR_OFFSET                  (0xE4)                                        /**<  (MPDDRC_WPMR) Write Protection Mode Register  Offset */

#define MPDDRC_WPMR_WPEN_Pos                0                                              /**< (MPDDRC_WPMR) Write Protection Enable Position */
#define MPDDRC_WPMR_WPEN_Msk                (_U_(0x1) << MPDDRC_WPMR_WPEN_Pos)             /**< (MPDDRC_WPMR) Write Protection Enable Mask */
#define MPDDRC_WPMR_WPEN                    MPDDRC_WPMR_WPEN_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_WPMR_WPEN_Msk instead */
#define MPDDRC_WPMR_WPKEY_Pos               8                                              /**< (MPDDRC_WPMR) Write Protection Key Position */
#define MPDDRC_WPMR_WPKEY_Msk               (_U_(0xFFFFFF) << MPDDRC_WPMR_WPKEY_Pos)       /**< (MPDDRC_WPMR) Write Protection Key Mask */
#define MPDDRC_WPMR_WPKEY(value)            (MPDDRC_WPMR_WPKEY_Msk & ((value) << MPDDRC_WPMR_WPKEY_Pos))
#define   MPDDRC_WPMR_WPKEY_PASSWD_Val      _U_(0x444452)                                  /**< (MPDDRC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0.  */
#define MPDDRC_WPMR_WPKEY_PASSWD            (MPDDRC_WPMR_WPKEY_PASSWD_Val << MPDDRC_WPMR_WPKEY_Pos)  /**< (MPDDRC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0. Position  */
#define MPDDRC_WPMR_MASK                    _U_(0xFFFFFF01)                                /**< \deprecated (MPDDRC_WPMR) Register MASK  (Use MPDDRC_WPMR_Msk instead)  */
#define MPDDRC_WPMR_Msk                     _U_(0xFFFFFF01)                                /**< (MPDDRC_WPMR) Register Mask  */


/* -------- MPDDRC_WPSR : (MPDDRC Offset: 0xe8) (R/ 32) Write Protection Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPVS:1;                    /**< bit:      0  Write Protection Enable                  */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPVSRC:16;                 /**< bit:  8..23  Write Protection Violation Source        */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MPDDRC_WPSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MPDDRC_WPSR_OFFSET                  (0xE8)                                        /**<  (MPDDRC_WPSR) Write Protection Status Register  Offset */

#define MPDDRC_WPSR_WPVS_Pos                0                                              /**< (MPDDRC_WPSR) Write Protection Enable Position */
#define MPDDRC_WPSR_WPVS_Msk                (_U_(0x1) << MPDDRC_WPSR_WPVS_Pos)             /**< (MPDDRC_WPSR) Write Protection Enable Mask */
#define MPDDRC_WPSR_WPVS                    MPDDRC_WPSR_WPVS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MPDDRC_WPSR_WPVS_Msk instead */
#define MPDDRC_WPSR_WPVSRC_Pos              8                                              /**< (MPDDRC_WPSR) Write Protection Violation Source Position */
#define MPDDRC_WPSR_WPVSRC_Msk              (_U_(0xFFFF) << MPDDRC_WPSR_WPVSRC_Pos)        /**< (MPDDRC_WPSR) Write Protection Violation Source Mask */
#define MPDDRC_WPSR_WPVSRC(value)           (MPDDRC_WPSR_WPVSRC_Msk & ((value) << MPDDRC_WPSR_WPVSRC_Pos))
#define MPDDRC_WPSR_MASK                    _U_(0xFFFF01)                                  /**< \deprecated (MPDDRC_WPSR) Register MASK  (Use MPDDRC_WPSR_Msk instead)  */
#define MPDDRC_WPSR_Msk                     _U_(0xFFFF01)                                  /**< (MPDDRC_WPSR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief MPDDRC hardware registers */
typedef struct {  
  __IO uint32_t MPDDRC_MR;      /**< (MPDDRC Offset: 0x00) Mode Register */
  __IO uint32_t MPDDRC_RTR;     /**< (MPDDRC Offset: 0x04) Refresh Timer Register */
  __IO uint32_t MPDDRC_CR;      /**< (MPDDRC Offset: 0x08) Configuration Register */
  __IO uint32_t MPDDRC_TPR0;    /**< (MPDDRC Offset: 0x0C) Timing Parameter 0 Register */
  __IO uint32_t MPDDRC_TPR1;    /**< (MPDDRC Offset: 0x10) Timing Parameter 1 Register */
  __IO uint32_t MPDDRC_TPR2;    /**< (MPDDRC Offset: 0x14) Timing Parameter 2 Register */
  __I  uint8_t                        Reserved1[4];
  __IO uint32_t MPDDRC_LPR;     /**< (MPDDRC Offset: 0x1C) Low-Power Register */
  __IO uint32_t MPDDRC_MD;      /**< (MPDDRC Offset: 0x20) Memory Device Register */
  __I  uint8_t                        Reserved2[4];
  __IO uint32_t MPDDRC_LPDDR23_LPR; /**< (MPDDRC Offset: 0x28) Low-power DDR2 Low-power DDR3 Low-power Register */
  __IO uint32_t MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4; /**< (MPDDRC Offset: 0x2C) Low-power DDR2 Low-power DDR3 and DDR3 Calibration and MR4 Register */
  __IO uint32_t MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL; /**< (MPDDRC Offset: 0x30) Low-power DDR2 Low-power DDR3 and DDR3 Timing Calibration Register */
  __IO uint32_t MPDDRC_IO_CALIBR; /**< (MPDDRC Offset: 0x34) I/O Calibration Register */
  __IO uint32_t MPDDRC_OCMS;    /**< (MPDDRC Offset: 0x38) OCMS Register */
  __O  uint32_t MPDDRC_OCMS_KEY1; /**< (MPDDRC Offset: 0x3C) OCMS KEY1 Register */
  __O  uint32_t MPDDRC_OCMS_KEY2; /**< (MPDDRC Offset: 0x40) OCMS KEY2 Register */
  __IO uint32_t MPDDRC_CONF_ARBITER; /**< (MPDDRC Offset: 0x44) Configuration Arbiter Register */
  __IO uint32_t MPDDRC_TIMEOUT; /**< (MPDDRC Offset: 0x48) Timeout Register */
  __IO uint32_t MPDDRC_REQ_PORT_0123; /**< (MPDDRC Offset: 0x4C) Request Port 0-1-2-3 Register */
  __IO uint32_t MPDDRC_REQ_PORT_4567; /**< (MPDDRC Offset: 0x50) Request Port 4-5-6-7 Register */
  __I  uint32_t MPDDRC_BDW_PORT_0123; /**< (MPDDRC Offset: 0x54) Current/Maximum Bandwidth Port 0-1-2-3 Register */
  __I  uint32_t MPDDRC_BDW_PORT_4567; /**< (MPDDRC Offset: 0x58) Current/Maximum Bandwidth Port 4-5-6-7 Register */
  __IO uint32_t MPDDRC_RD_DATA_PATH; /**< (MPDDRC Offset: 0x5C) Read Data Path Register */
  __IO uint32_t MPDDRC_MCFGR;   /**< (MPDDRC Offset: 0x60) Monitor Configuration Register */
  __IO uint32_t MPDDRC_MADDR0;  /**< (MPDDRC Offset: 0x64) Monitor Address High/Low Port 0 Register */
  __IO uint32_t MPDDRC_MADDR1;  /**< (MPDDRC Offset: 0x68) Monitor Address High/Low Port 1 Register */
  __IO uint32_t MPDDRC_MADDR2;  /**< (MPDDRC Offset: 0x6C) Monitor Address High/Low Port 2 Register */
  __IO uint32_t MPDDRC_MADDR3;  /**< (MPDDRC Offset: 0x70) Monitor Address High/Low Port 3 Register */
  __IO uint32_t MPDDRC_MADDR4;  /**< (MPDDRC Offset: 0x74) Monitor Address High/Low Port 4 Register */
  __IO uint32_t MPDDRC_MADDR5;  /**< (MPDDRC Offset: 0x78) Monitor Address High/Low Port 5 Register */
  __IO uint32_t MPDDRC_MADDR6;  /**< (MPDDRC Offset: 0x7C) Monitor Address High/Low Port 6 Register */
  __IO uint32_t MPDDRC_MADDR7;  /**< (MPDDRC Offset: 0x80) Monitor Address High/Low Port 7 Register */
  __I  uint32_t MPDDRC_MINFO0;  /**< (MPDDRC Offset: 0x84) Monitor Information Port 0 Register */
  __I  uint32_t MPDDRC_MINFO1;  /**< (MPDDRC Offset: 0x88) Monitor Information Port 1 Register */
  __I  uint32_t MPDDRC_MINFO2;  /**< (MPDDRC Offset: 0x8C) Monitor Information Port 2 Register */
  __I  uint32_t MPDDRC_MINFO3;  /**< (MPDDRC Offset: 0x90) Monitor Information Port 3 Register */
  __I  uint32_t MPDDRC_MINFO4;  /**< (MPDDRC Offset: 0x94) Monitor Information Port 4 Register */
  __I  uint32_t MPDDRC_MINFO5;  /**< (MPDDRC Offset: 0x98) Monitor Information Port 5 Register */
  __I  uint32_t MPDDRC_MINFO6;  /**< (MPDDRC Offset: 0x9C) Monitor Information Port 6 Register */
  __I  uint32_t MPDDRC_MINFO7;  /**< (MPDDRC Offset: 0xA0) Monitor Information Port 7 Register */
  __I  uint8_t                        Reserved3[64];
  __IO uint32_t MPDDRC_WPMR;    /**< (MPDDRC Offset: 0xE4) Write Protection Mode Register */
  __I  uint32_t MPDDRC_WPSR;    /**< (MPDDRC Offset: 0xE8) Write Protection Status Register */
} Mpddrc;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief MPDDRC hardware registers */
typedef struct {  
  __IO MPDDRC_MR_Type                 MPDDRC_MR;      /**< Offset: 0x00 (R/W  32) Mode Register */
  __IO MPDDRC_RTR_Type                MPDDRC_RTR;     /**< Offset: 0x04 (R/W  32) Refresh Timer Register */
  __IO MPDDRC_CR_Type                 MPDDRC_CR;      /**< Offset: 0x08 (R/W  32) Configuration Register */
  __IO MPDDRC_TPR0_Type               MPDDRC_TPR0;    /**< Offset: 0x0C (R/W  32) Timing Parameter 0 Register */
  __IO MPDDRC_TPR1_Type               MPDDRC_TPR1;    /**< Offset: 0x10 (R/W  32) Timing Parameter 1 Register */
  __IO MPDDRC_TPR2_Type               MPDDRC_TPR2;    /**< Offset: 0x14 (R/W  32) Timing Parameter 2 Register */
  __I  uint8_t                        Reserved1[4];
  __IO MPDDRC_LPR_Type                MPDDRC_LPR;     /**< Offset: 0x1C (R/W  32) Low-Power Register */
  __IO MPDDRC_MD_Type                 MPDDRC_MD;      /**< Offset: 0x20 (R/W  32) Memory Device Register */
  __I  uint8_t                        Reserved2[4];
  __IO MPDDRC_LPDDR23_LPR_Type        MPDDRC_LPDDR23_LPR; /**< Offset: 0x28 (R/W  32) Low-power DDR2 Low-power DDR3 Low-power Register */
  __IO MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4_Type MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4; /**< Offset: 0x2C (R/W  32) Low-power DDR2 Low-power DDR3 and DDR3 Calibration and MR4 Register */
  __IO MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL_Type MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL; /**< Offset: 0x30 (R/W  32) Low-power DDR2 Low-power DDR3 and DDR3 Timing Calibration Register */
  __IO MPDDRC_IO_CALIBR_Type          MPDDRC_IO_CALIBR; /**< Offset: 0x34 (R/W  32) I/O Calibration Register */
  __IO MPDDRC_OCMS_Type               MPDDRC_OCMS;    /**< Offset: 0x38 (R/W  32) OCMS Register */
  __O  MPDDRC_OCMS_KEY1_Type          MPDDRC_OCMS_KEY1; /**< Offset: 0x3C ( /W  32) OCMS KEY1 Register */
  __O  MPDDRC_OCMS_KEY2_Type          MPDDRC_OCMS_KEY2; /**< Offset: 0x40 ( /W  32) OCMS KEY2 Register */
  __IO MPDDRC_CONF_ARBITER_Type       MPDDRC_CONF_ARBITER; /**< Offset: 0x44 (R/W  32) Configuration Arbiter Register */
  __IO MPDDRC_TIMEOUT_Type            MPDDRC_TIMEOUT; /**< Offset: 0x48 (R/W  32) Timeout Register */
  __IO MPDDRC_REQ_PORT_0123_Type      MPDDRC_REQ_PORT_0123; /**< Offset: 0x4C (R/W  32) Request Port 0-1-2-3 Register */
  __IO MPDDRC_REQ_PORT_4567_Type      MPDDRC_REQ_PORT_4567; /**< Offset: 0x50 (R/W  32) Request Port 4-5-6-7 Register */
  __I  MPDDRC_BDW_PORT_0123_Type      MPDDRC_BDW_PORT_0123; /**< Offset: 0x54 (R/   32) Current/Maximum Bandwidth Port 0-1-2-3 Register */
  __I  MPDDRC_BDW_PORT_4567_Type      MPDDRC_BDW_PORT_4567; /**< Offset: 0x58 (R/   32) Current/Maximum Bandwidth Port 4-5-6-7 Register */
  __IO MPDDRC_RD_DATA_PATH_Type       MPDDRC_RD_DATA_PATH; /**< Offset: 0x5C (R/W  32) Read Data Path Register */
  __IO MPDDRC_MCFGR_Type              MPDDRC_MCFGR;   /**< Offset: 0x60 (R/W  32) Monitor Configuration Register */
  __IO MPDDRC_MADDR0_Type             MPDDRC_MADDR0;  /**< Offset: 0x64 (R/W  32) Monitor Address High/Low Port 0 Register */
  __IO MPDDRC_MADDR1_Type             MPDDRC_MADDR1;  /**< Offset: 0x68 (R/W  32) Monitor Address High/Low Port 1 Register */
  __IO MPDDRC_MADDR2_Type             MPDDRC_MADDR2;  /**< Offset: 0x6C (R/W  32) Monitor Address High/Low Port 2 Register */
  __IO MPDDRC_MADDR3_Type             MPDDRC_MADDR3;  /**< Offset: 0x70 (R/W  32) Monitor Address High/Low Port 3 Register */
  __IO MPDDRC_MADDR4_Type             MPDDRC_MADDR4;  /**< Offset: 0x74 (R/W  32) Monitor Address High/Low Port 4 Register */
  __IO MPDDRC_MADDR5_Type             MPDDRC_MADDR5;  /**< Offset: 0x78 (R/W  32) Monitor Address High/Low Port 5 Register */
  __IO MPDDRC_MADDR6_Type             MPDDRC_MADDR6;  /**< Offset: 0x7C (R/W  32) Monitor Address High/Low Port 6 Register */
  __IO MPDDRC_MADDR7_Type             MPDDRC_MADDR7;  /**< Offset: 0x80 (R/W  32) Monitor Address High/Low Port 7 Register */
  __I  MPDDRC_MINFO0_Type             MPDDRC_MINFO0;  /**< Offset: 0x84 (R/   32) Monitor Information Port 0 Register */
  __I  MPDDRC_MINFO1_Type             MPDDRC_MINFO1;  /**< Offset: 0x88 (R/   32) Monitor Information Port 1 Register */
  __I  MPDDRC_MINFO2_Type             MPDDRC_MINFO2;  /**< Offset: 0x8C (R/   32) Monitor Information Port 2 Register */
  __I  MPDDRC_MINFO3_Type             MPDDRC_MINFO3;  /**< Offset: 0x90 (R/   32) Monitor Information Port 3 Register */
  __I  MPDDRC_MINFO4_Type             MPDDRC_MINFO4;  /**< Offset: 0x94 (R/   32) Monitor Information Port 4 Register */
  __I  MPDDRC_MINFO5_Type             MPDDRC_MINFO5;  /**< Offset: 0x98 (R/   32) Monitor Information Port 5 Register */
  __I  MPDDRC_MINFO6_Type             MPDDRC_MINFO6;  /**< Offset: 0x9C (R/   32) Monitor Information Port 6 Register */
  __I  MPDDRC_MINFO7_Type             MPDDRC_MINFO7;  /**< Offset: 0xA0 (R/   32) Monitor Information Port 7 Register */
  __I  uint8_t                        Reserved3[64];
  __IO MPDDRC_WPMR_Type               MPDDRC_WPMR;    /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I  MPDDRC_WPSR_Type               MPDDRC_WPSR;    /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
} Mpddrc;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of AHB Multiport DDR-SDRAM Controller */

#endif /* _SAMA5D2_MPDDRC_COMPONENT_H_ */
