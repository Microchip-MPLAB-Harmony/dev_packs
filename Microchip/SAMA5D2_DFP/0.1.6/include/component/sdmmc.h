/**
 * \file
 *
 * \brief Component description for SDMMC
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
#ifndef _SAMA5D2_SDMMC_COMPONENT_H_
#define _SAMA5D2_SDMMC_COMPONENT_H_
#define _SAMA5D2_SDMMC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Secure Digital MultiMedia Card Controller
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SDMMC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define SDMMC_44002                      /**< (SDMMC) Module ID */
#define REV_SDMMC H                      /**< (SDMMC) Module revision */

/* -------- SDMMC_SSAR : (SDMMC Offset: 0x00) (R/W 32) SDMA System Address / Argument 2 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR:32;                   /**< bit:  0..31  SDMA System Address                      */
    uint32_t :-32;                      /**< bit: 32..-1  Reserved */
    uint32_t ARG2:32;                   /**< bit:  0..31  Argument 2                               */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SDMMC_SSAR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_SSAR_OFFSET                   (0x00)                                        /**<  (SDMMC_SSAR) SDMA System Address / Argument 2 Register  Offset */

#define SDMMC_SSAR_ADDR_Pos                 0                                              /**< (SDMMC_SSAR) SDMA System Address Position */
#define SDMMC_SSAR_ADDR_Msk                 (_U_(0xFFFFFFFF) << SDMMC_SSAR_ADDR_Pos)       /**< (SDMMC_SSAR) SDMA System Address Mask */
#define SDMMC_SSAR_ADDR(value)              (SDMMC_SSAR_ADDR_Msk & ((value) << SDMMC_SSAR_ADDR_Pos))
#define SDMMC_SSAR_ARG2_Pos                 0                                              /**< (SDMMC_SSAR) Argument 2 Position */
#define SDMMC_SSAR_ARG2_Msk                 (_U_(0xFFFFFFFF) << SDMMC_SSAR_ARG2_Pos)       /**< (SDMMC_SSAR) Argument 2 Mask */
#define SDMMC_SSAR_ARG2(value)              (SDMMC_SSAR_ARG2_Msk & ((value) << SDMMC_SSAR_ARG2_Pos))
#define SDMMC_SSAR_MASK                     _U_(0xFFFFFFFF)                                /**< \deprecated (SDMMC_SSAR) Register MASK  (Use SDMMC_SSAR_Msk instead)  */
#define SDMMC_SSAR_Msk                      _U_(0xFFFFFFFF)                                /**< (SDMMC_SSAR) Register Mask  */


/* -------- SDMMC_BSR : (SDMMC Offset: 0x04) (R/W 16) Block Size Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t BLKSIZE:10;                /**< bit:   0..9  Transfer Block Size                      */
    uint16_t :2;                        /**< bit: 10..11  Reserved */
    uint16_t BOUNDARY:3;                /**< bit: 12..14  SDMA Buffer Boundary                     */
    uint16_t :1;                        /**< bit:     15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} SDMMC_BSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_BSR_OFFSET                    (0x04)                                        /**<  (SDMMC_BSR) Block Size Register  Offset */

#define SDMMC_BSR_BLKSIZE_Pos               0                                              /**< (SDMMC_BSR) Transfer Block Size Position */
#define SDMMC_BSR_BLKSIZE_Msk               (_U_(0x3FF) << SDMMC_BSR_BLKSIZE_Pos)          /**< (SDMMC_BSR) Transfer Block Size Mask */
#define SDMMC_BSR_BLKSIZE(value)            (SDMMC_BSR_BLKSIZE_Msk & ((value) << SDMMC_BSR_BLKSIZE_Pos))
#define SDMMC_BSR_BOUNDARY_Pos              12                                             /**< (SDMMC_BSR) SDMA Buffer Boundary Position */
#define SDMMC_BSR_BOUNDARY_Msk              (_U_(0x7) << SDMMC_BSR_BOUNDARY_Pos)           /**< (SDMMC_BSR) SDMA Buffer Boundary Mask */
#define SDMMC_BSR_BOUNDARY(value)           (SDMMC_BSR_BOUNDARY_Msk & ((value) << SDMMC_BSR_BOUNDARY_Pos))
#define   SDMMC_BSR_BOUNDARY_4K_Val         _U_(0x0)                                       /**< (SDMMC_BSR) 4-Kbyte boundary  */
#define   SDMMC_BSR_BOUNDARY_8K_Val         _U_(0x1)                                       /**< (SDMMC_BSR) 8-Kbyte boundary  */
#define   SDMMC_BSR_BOUNDARY_16K_Val        _U_(0x2)                                       /**< (SDMMC_BSR) 16-Kbyte boundary  */
#define   SDMMC_BSR_BOUNDARY_32K_Val        _U_(0x3)                                       /**< (SDMMC_BSR) 32-Kbyte boundary  */
#define   SDMMC_BSR_BOUNDARY_64K_Val        _U_(0x4)                                       /**< (SDMMC_BSR) 64-Kbyte boundary  */
#define   SDMMC_BSR_BOUNDARY_128K_Val       _U_(0x5)                                       /**< (SDMMC_BSR) 128-Kbyte boundary  */
#define   SDMMC_BSR_BOUNDARY_256k_Val       _U_(0x6)                                       /**< (SDMMC_BSR) 256-Kbyte boundary  */
#define   SDMMC_BSR_BOUNDARY_512K_Val       _U_(0x7)                                       /**< (SDMMC_BSR) 512-Kbyte boundary  */
#define SDMMC_BSR_BOUNDARY_4K               (SDMMC_BSR_BOUNDARY_4K_Val << SDMMC_BSR_BOUNDARY_Pos)  /**< (SDMMC_BSR) 4-Kbyte boundary Position  */
#define SDMMC_BSR_BOUNDARY_8K               (SDMMC_BSR_BOUNDARY_8K_Val << SDMMC_BSR_BOUNDARY_Pos)  /**< (SDMMC_BSR) 8-Kbyte boundary Position  */
#define SDMMC_BSR_BOUNDARY_16K              (SDMMC_BSR_BOUNDARY_16K_Val << SDMMC_BSR_BOUNDARY_Pos)  /**< (SDMMC_BSR) 16-Kbyte boundary Position  */
#define SDMMC_BSR_BOUNDARY_32K              (SDMMC_BSR_BOUNDARY_32K_Val << SDMMC_BSR_BOUNDARY_Pos)  /**< (SDMMC_BSR) 32-Kbyte boundary Position  */
#define SDMMC_BSR_BOUNDARY_64K              (SDMMC_BSR_BOUNDARY_64K_Val << SDMMC_BSR_BOUNDARY_Pos)  /**< (SDMMC_BSR) 64-Kbyte boundary Position  */
#define SDMMC_BSR_BOUNDARY_128K             (SDMMC_BSR_BOUNDARY_128K_Val << SDMMC_BSR_BOUNDARY_Pos)  /**< (SDMMC_BSR) 128-Kbyte boundary Position  */
#define SDMMC_BSR_BOUNDARY_256k             (SDMMC_BSR_BOUNDARY_256k_Val << SDMMC_BSR_BOUNDARY_Pos)  /**< (SDMMC_BSR) 256-Kbyte boundary Position  */
#define SDMMC_BSR_BOUNDARY_512K             (SDMMC_BSR_BOUNDARY_512K_Val << SDMMC_BSR_BOUNDARY_Pos)  /**< (SDMMC_BSR) 512-Kbyte boundary Position  */
#define SDMMC_BSR_MASK                      _U_(0x73FF)                                    /**< \deprecated (SDMMC_BSR) Register MASK  (Use SDMMC_BSR_Msk instead)  */
#define SDMMC_BSR_Msk                       _U_(0x73FF)                                    /**< (SDMMC_BSR) Register Mask  */


/* -------- SDMMC_BCR : (SDMMC Offset: 0x06) (R/W 16) Block Count Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t BLKCNT:16;                 /**< bit:  0..15  Block Count for Current Transfer         */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} SDMMC_BCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_BCR_OFFSET                    (0x06)                                        /**<  (SDMMC_BCR) Block Count Register  Offset */

#define SDMMC_BCR_BLKCNT_Pos                0                                              /**< (SDMMC_BCR) Block Count for Current Transfer Position */
#define SDMMC_BCR_BLKCNT_Msk                (_U_(0xFFFF) << SDMMC_BCR_BLKCNT_Pos)          /**< (SDMMC_BCR) Block Count for Current Transfer Mask */
#define SDMMC_BCR_BLKCNT(value)             (SDMMC_BCR_BLKCNT_Msk & ((value) << SDMMC_BCR_BLKCNT_Pos))
#define SDMMC_BCR_MASK                      _U_(0xFFFF)                                    /**< \deprecated (SDMMC_BCR) Register MASK  (Use SDMMC_BCR_Msk instead)  */
#define SDMMC_BCR_Msk                       _U_(0xFFFF)                                    /**< (SDMMC_BCR) Register Mask  */


/* -------- SDMMC_ARG1R : (SDMMC Offset: 0x08) (R/W 32) Argument 1 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ARG1:32;                   /**< bit:  0..31  Argument 1                               */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SDMMC_ARG1R_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_ARG1R_OFFSET                  (0x08)                                        /**<  (SDMMC_ARG1R) Argument 1 Register  Offset */

#define SDMMC_ARG1R_ARG1_Pos                0                                              /**< (SDMMC_ARG1R) Argument 1 Position */
#define SDMMC_ARG1R_ARG1_Msk                (_U_(0xFFFFFFFF) << SDMMC_ARG1R_ARG1_Pos)      /**< (SDMMC_ARG1R) Argument 1 Mask */
#define SDMMC_ARG1R_ARG1(value)             (SDMMC_ARG1R_ARG1_Msk & ((value) << SDMMC_ARG1R_ARG1_Pos))
#define SDMMC_ARG1R_MASK                    _U_(0xFFFFFFFF)                                /**< \deprecated (SDMMC_ARG1R) Register MASK  (Use SDMMC_ARG1R_Msk instead)  */
#define SDMMC_ARG1R_Msk                     _U_(0xFFFFFFFF)                                /**< (SDMMC_ARG1R) Register Mask  */


/* -------- SDMMC_TMR : (SDMMC Offset: 0x0c) (R/W 16) Transfer Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t DMAEN:1;                   /**< bit:      0  DMA Enable                               */
    uint16_t BCEN:1;                    /**< bit:      1  Block Count Enable                       */
    uint16_t ACMDEN:2;                  /**< bit:   2..3  Auto Command Enable                      */
    uint16_t DTDSEL:1;                  /**< bit:      4  Data Transfer Direction Selection        */
    uint16_t MSBSEL:1;                  /**< bit:      5  Multi/Single Block Selection             */
    uint16_t :10;                       /**< bit:  6..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} SDMMC_TMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_TMR_OFFSET                    (0x0C)                                        /**<  (SDMMC_TMR) Transfer Mode Register  Offset */

#define SDMMC_TMR_DMAEN_Pos                 0                                              /**< (SDMMC_TMR) DMA Enable Position */
#define SDMMC_TMR_DMAEN_Msk                 (_U_(0x1) << SDMMC_TMR_DMAEN_Pos)              /**< (SDMMC_TMR) DMA Enable Mask */
#define SDMMC_TMR_DMAEN                     SDMMC_TMR_DMAEN_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_TMR_DMAEN_Msk instead */
#define   SDMMC_TMR_DMAEN_DISABLED_Val      _U_(0x0)                                       /**< (SDMMC_TMR) DMA functionality is disabled.  */
#define   SDMMC_TMR_DMAEN_ENABLED_Val       _U_(0x1)                                       /**< (SDMMC_TMR) DMA functionality is enabled.  */
#define SDMMC_TMR_DMAEN_DISABLED            (SDMMC_TMR_DMAEN_DISABLED_Val << SDMMC_TMR_DMAEN_Pos)  /**< (SDMMC_TMR) DMA functionality is disabled. Position  */
#define SDMMC_TMR_DMAEN_ENABLED             (SDMMC_TMR_DMAEN_ENABLED_Val << SDMMC_TMR_DMAEN_Pos)  /**< (SDMMC_TMR) DMA functionality is enabled. Position  */
#define SDMMC_TMR_BCEN_Pos                  1                                              /**< (SDMMC_TMR) Block Count Enable Position */
#define SDMMC_TMR_BCEN_Msk                  (_U_(0x1) << SDMMC_TMR_BCEN_Pos)               /**< (SDMMC_TMR) Block Count Enable Mask */
#define SDMMC_TMR_BCEN                      SDMMC_TMR_BCEN_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_TMR_BCEN_Msk instead */
#define   SDMMC_TMR_BCEN_DISABLED_Val       _U_(0x0)                                       /**< (SDMMC_TMR) Block count is disabled.  */
#define   SDMMC_TMR_BCEN_ENABLED_Val        _U_(0x1)                                       /**< (SDMMC_TMR) Block count is enabled.  */
#define SDMMC_TMR_BCEN_DISABLED             (SDMMC_TMR_BCEN_DISABLED_Val << SDMMC_TMR_BCEN_Pos)  /**< (SDMMC_TMR) Block count is disabled. Position  */
#define SDMMC_TMR_BCEN_ENABLED              (SDMMC_TMR_BCEN_ENABLED_Val << SDMMC_TMR_BCEN_Pos)  /**< (SDMMC_TMR) Block count is enabled. Position  */
#define SDMMC_TMR_ACMDEN_Pos                2                                              /**< (SDMMC_TMR) Auto Command Enable Position */
#define SDMMC_TMR_ACMDEN_Msk                (_U_(0x3) << SDMMC_TMR_ACMDEN_Pos)             /**< (SDMMC_TMR) Auto Command Enable Mask */
#define SDMMC_TMR_ACMDEN(value)             (SDMMC_TMR_ACMDEN_Msk & ((value) << SDMMC_TMR_ACMDEN_Pos))
#define   SDMMC_TMR_ACMDEN_DISABLED_Val     _U_(0x0)                                       /**< (SDMMC_TMR) Auto Command Disabled  */
#define   SDMMC_TMR_ACMDEN_CMD12_Val        _U_(0x1)                                       /**< (SDMMC_TMR) Auto CMD12 Enabled  */
#define   SDMMC_TMR_ACMDEN_CMD23_Val        _U_(0x2)                                       /**< (SDMMC_TMR) Auto CMD23 Enabled  */
#define SDMMC_TMR_ACMDEN_DISABLED           (SDMMC_TMR_ACMDEN_DISABLED_Val << SDMMC_TMR_ACMDEN_Pos)  /**< (SDMMC_TMR) Auto Command Disabled Position  */
#define SDMMC_TMR_ACMDEN_CMD12              (SDMMC_TMR_ACMDEN_CMD12_Val << SDMMC_TMR_ACMDEN_Pos)  /**< (SDMMC_TMR) Auto CMD12 Enabled Position  */
#define SDMMC_TMR_ACMDEN_CMD23              (SDMMC_TMR_ACMDEN_CMD23_Val << SDMMC_TMR_ACMDEN_Pos)  /**< (SDMMC_TMR) Auto CMD23 Enabled Position  */
#define SDMMC_TMR_DTDSEL_Pos                4                                              /**< (SDMMC_TMR) Data Transfer Direction Selection Position */
#define SDMMC_TMR_DTDSEL_Msk                (_U_(0x1) << SDMMC_TMR_DTDSEL_Pos)             /**< (SDMMC_TMR) Data Transfer Direction Selection Mask */
#define SDMMC_TMR_DTDSEL                    SDMMC_TMR_DTDSEL_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_TMR_DTDSEL_Msk instead */
#define   SDMMC_TMR_DTDSEL_WRITE_Val        _U_(0x0)                                       /**< (SDMMC_TMR) Writes data from the SDMMC to the device.  */
#define   SDMMC_TMR_DTDSEL_READ_Val         _U_(0x1)                                       /**< (SDMMC_TMR) Reads data from the device to the SDMMC.  */
#define SDMMC_TMR_DTDSEL_WRITE              (SDMMC_TMR_DTDSEL_WRITE_Val << SDMMC_TMR_DTDSEL_Pos)  /**< (SDMMC_TMR) Writes data from the SDMMC to the device. Position  */
#define SDMMC_TMR_DTDSEL_READ               (SDMMC_TMR_DTDSEL_READ_Val << SDMMC_TMR_DTDSEL_Pos)  /**< (SDMMC_TMR) Reads data from the device to the SDMMC. Position  */
#define SDMMC_TMR_MSBSEL_Pos                5                                              /**< (SDMMC_TMR) Multi/Single Block Selection Position */
#define SDMMC_TMR_MSBSEL_Msk                (_U_(0x1) << SDMMC_TMR_MSBSEL_Pos)             /**< (SDMMC_TMR) Multi/Single Block Selection Mask */
#define SDMMC_TMR_MSBSEL                    SDMMC_TMR_MSBSEL_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_TMR_MSBSEL_Msk instead */
#define SDMMC_TMR_MASK                      _U_(0x3F)                                      /**< \deprecated (SDMMC_TMR) Register MASK  (Use SDMMC_TMR_Msk instead)  */
#define SDMMC_TMR_Msk                       _U_(0x3F)                                      /**< (SDMMC_TMR) Register Mask  */


/* -------- SDMMC_CR : (SDMMC Offset: 0x0e) (R/W 16) Command Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t RESPTYP:2;                 /**< bit:   0..1  Response Type                            */
    uint16_t :1;                        /**< bit:      2  Reserved */
    uint16_t CMDCCEN:1;                 /**< bit:      3  Command CRC Check Enable                 */
    uint16_t CMDICEN:1;                 /**< bit:      4  Command Index Check Enable               */
    uint16_t DPSEL:1;                   /**< bit:      5  Data Present Select                      */
    uint16_t CMDTYP:2;                  /**< bit:   6..7  Command Type                             */
    uint16_t CMDIDX:6;                  /**< bit:  8..13  Command Index                            */
    uint16_t :2;                        /**< bit: 14..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} SDMMC_CR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_CR_OFFSET                     (0x0E)                                        /**<  (SDMMC_CR) Command Register  Offset */

#define SDMMC_CR_RESPTYP_Pos                0                                              /**< (SDMMC_CR) Response Type Position */
#define SDMMC_CR_RESPTYP_Msk                (_U_(0x3) << SDMMC_CR_RESPTYP_Pos)             /**< (SDMMC_CR) Response Type Mask */
#define SDMMC_CR_RESPTYP(value)             (SDMMC_CR_RESPTYP_Msk & ((value) << SDMMC_CR_RESPTYP_Pos))
#define   SDMMC_CR_RESPTYP_NORESP_Val       _U_(0x0)                                       /**< (SDMMC_CR) No Response  */
#define   SDMMC_CR_RESPTYP_RL136_Val        _U_(0x1)                                       /**< (SDMMC_CR) Response Length 136  */
#define   SDMMC_CR_RESPTYP_RL48_Val         _U_(0x2)                                       /**< (SDMMC_CR) Response Length 48  */
#define   SDMMC_CR_RESPTYP_RL48BUSY_Val     _U_(0x3)                                       /**< (SDMMC_CR) Response Length 48 with Busy  */
#define SDMMC_CR_RESPTYP_NORESP             (SDMMC_CR_RESPTYP_NORESP_Val << SDMMC_CR_RESPTYP_Pos)  /**< (SDMMC_CR) No Response Position  */
#define SDMMC_CR_RESPTYP_RL136              (SDMMC_CR_RESPTYP_RL136_Val << SDMMC_CR_RESPTYP_Pos)  /**< (SDMMC_CR) Response Length 136 Position  */
#define SDMMC_CR_RESPTYP_RL48               (SDMMC_CR_RESPTYP_RL48_Val << SDMMC_CR_RESPTYP_Pos)  /**< (SDMMC_CR) Response Length 48 Position  */
#define SDMMC_CR_RESPTYP_RL48BUSY           (SDMMC_CR_RESPTYP_RL48BUSY_Val << SDMMC_CR_RESPTYP_Pos)  /**< (SDMMC_CR) Response Length 48 with Busy Position  */
#define SDMMC_CR_CMDCCEN_Pos                3                                              /**< (SDMMC_CR) Command CRC Check Enable Position */
#define SDMMC_CR_CMDCCEN_Msk                (_U_(0x1) << SDMMC_CR_CMDCCEN_Pos)             /**< (SDMMC_CR) Command CRC Check Enable Mask */
#define SDMMC_CR_CMDCCEN                    SDMMC_CR_CMDCCEN_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CR_CMDCCEN_Msk instead */
#define   SDMMC_CR_CMDCCEN_DISABLED_Val     _U_(0x0)                                       /**< (SDMMC_CR) The Command CRC Check is disabled.  */
#define   SDMMC_CR_CMDCCEN_ENABLED_Val      _U_(0x1)                                       /**< (SDMMC_CR) The Command CRC Check is enabled.  */
#define SDMMC_CR_CMDCCEN_DISABLED           (SDMMC_CR_CMDCCEN_DISABLED_Val << SDMMC_CR_CMDCCEN_Pos)  /**< (SDMMC_CR) The Command CRC Check is disabled. Position  */
#define SDMMC_CR_CMDCCEN_ENABLED            (SDMMC_CR_CMDCCEN_ENABLED_Val << SDMMC_CR_CMDCCEN_Pos)  /**< (SDMMC_CR) The Command CRC Check is enabled. Position  */
#define SDMMC_CR_CMDICEN_Pos                4                                              /**< (SDMMC_CR) Command Index Check Enable Position */
#define SDMMC_CR_CMDICEN_Msk                (_U_(0x1) << SDMMC_CR_CMDICEN_Pos)             /**< (SDMMC_CR) Command Index Check Enable Mask */
#define SDMMC_CR_CMDICEN                    SDMMC_CR_CMDICEN_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CR_CMDICEN_Msk instead */
#define   SDMMC_CR_CMDICEN_DISABLED_Val     _U_(0x0)                                       /**< (SDMMC_CR) The Command Index Check is disabled.  */
#define   SDMMC_CR_CMDICEN_ENABLED_Val      _U_(0x1)                                       /**< (SDMMC_CR) The Command Index Check is enabled.  */
#define SDMMC_CR_CMDICEN_DISABLED           (SDMMC_CR_CMDICEN_DISABLED_Val << SDMMC_CR_CMDICEN_Pos)  /**< (SDMMC_CR) The Command Index Check is disabled. Position  */
#define SDMMC_CR_CMDICEN_ENABLED            (SDMMC_CR_CMDICEN_ENABLED_Val << SDMMC_CR_CMDICEN_Pos)  /**< (SDMMC_CR) The Command Index Check is enabled. Position  */
#define SDMMC_CR_DPSEL_Pos                  5                                              /**< (SDMMC_CR) Data Present Select Position */
#define SDMMC_CR_DPSEL_Msk                  (_U_(0x1) << SDMMC_CR_DPSEL_Pos)               /**< (SDMMC_CR) Data Present Select Mask */
#define SDMMC_CR_DPSEL                      SDMMC_CR_DPSEL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CR_DPSEL_Msk instead */
#define SDMMC_CR_CMDTYP_Pos                 6                                              /**< (SDMMC_CR) Command Type Position */
#define SDMMC_CR_CMDTYP_Msk                 (_U_(0x3) << SDMMC_CR_CMDTYP_Pos)              /**< (SDMMC_CR) Command Type Mask */
#define SDMMC_CR_CMDTYP(value)              (SDMMC_CR_CMDTYP_Msk & ((value) << SDMMC_CR_CMDTYP_Pos))
#define   SDMMC_CR_CMDTYP_NORMAL_Val        _U_(0x0)                                       /**< (SDMMC_CR) Other commands  */
#define   SDMMC_CR_CMDTYP_SUSPEND_Val       _U_(0x1)                                       /**< (SDMMC_CR) CMD52 to write "Bus Suspend" in the Card Common Control Registers (CCCR) (for SDIO only)  */
#define   SDMMC_CR_CMDTYP_RESUME_Val        _U_(0x2)                                       /**< (SDMMC_CR) CMD52 to write "Function Select" in the Card Common Control Registers (CCCR) (for SDIO only)  */
#define   SDMMC_CR_CMDTYP_ABORT_Val         _U_(0x3)                                       /**< (SDMMC_CR) CMD12, CMD52 to write "I/O Abort" in the Card Common Control Registers (CCCR) (for SDIO only)  */
#define SDMMC_CR_CMDTYP_NORMAL              (SDMMC_CR_CMDTYP_NORMAL_Val << SDMMC_CR_CMDTYP_Pos)  /**< (SDMMC_CR) Other commands Position  */
#define SDMMC_CR_CMDTYP_SUSPEND             (SDMMC_CR_CMDTYP_SUSPEND_Val << SDMMC_CR_CMDTYP_Pos)  /**< (SDMMC_CR) CMD52 to write "Bus Suspend" in the Card Common Control Registers (CCCR) (for SDIO only) Position  */
#define SDMMC_CR_CMDTYP_RESUME              (SDMMC_CR_CMDTYP_RESUME_Val << SDMMC_CR_CMDTYP_Pos)  /**< (SDMMC_CR) CMD52 to write "Function Select" in the Card Common Control Registers (CCCR) (for SDIO only) Position  */
#define SDMMC_CR_CMDTYP_ABORT               (SDMMC_CR_CMDTYP_ABORT_Val << SDMMC_CR_CMDTYP_Pos)  /**< (SDMMC_CR) CMD12, CMD52 to write "I/O Abort" in the Card Common Control Registers (CCCR) (for SDIO only) Position  */
#define SDMMC_CR_CMDIDX_Pos                 8                                              /**< (SDMMC_CR) Command Index Position */
#define SDMMC_CR_CMDIDX_Msk                 (_U_(0x3F) << SDMMC_CR_CMDIDX_Pos)             /**< (SDMMC_CR) Command Index Mask */
#define SDMMC_CR_CMDIDX(value)              (SDMMC_CR_CMDIDX_Msk & ((value) << SDMMC_CR_CMDIDX_Pos))
#define SDMMC_CR_MASK                       _U_(0x3FFB)                                    /**< \deprecated (SDMMC_CR) Register MASK  (Use SDMMC_CR_Msk instead)  */
#define SDMMC_CR_Msk                        _U_(0x3FFB)                                    /**< (SDMMC_CR) Register Mask  */


/* -------- SDMMC_RR : (SDMMC Offset: 0x10) (R/ 32) Response Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CMDRESP:32;                /**< bit:  0..31  Command Response                         */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SDMMC_RR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_RR_OFFSET                     (0x10)                                        /**<  (SDMMC_RR) Response Register  Offset */

#define SDMMC_RR_CMDRESP_Pos                0                                              /**< (SDMMC_RR) Command Response Position */
#define SDMMC_RR_CMDRESP_Msk                (_U_(0xFFFFFFFF) << SDMMC_RR_CMDRESP_Pos)      /**< (SDMMC_RR) Command Response Mask */
#define SDMMC_RR_CMDRESP(value)             (SDMMC_RR_CMDRESP_Msk & ((value) << SDMMC_RR_CMDRESP_Pos))
#define SDMMC_RR_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (SDMMC_RR) Register MASK  (Use SDMMC_RR_Msk instead)  */
#define SDMMC_RR_Msk                        _U_(0xFFFFFFFF)                                /**< (SDMMC_RR) Register Mask  */


/* -------- SDMMC_BDPR : (SDMMC Offset: 0x20) (R/W 32) Buffer Data Port Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BUFDATA:32;                /**< bit:  0..31  Buffer Data                              */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SDMMC_BDPR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_BDPR_OFFSET                   (0x20)                                        /**<  (SDMMC_BDPR) Buffer Data Port Register  Offset */

#define SDMMC_BDPR_BUFDATA_Pos              0                                              /**< (SDMMC_BDPR) Buffer Data Position */
#define SDMMC_BDPR_BUFDATA_Msk              (_U_(0xFFFFFFFF) << SDMMC_BDPR_BUFDATA_Pos)    /**< (SDMMC_BDPR) Buffer Data Mask */
#define SDMMC_BDPR_BUFDATA(value)           (SDMMC_BDPR_BUFDATA_Msk & ((value) << SDMMC_BDPR_BUFDATA_Pos))
#define SDMMC_BDPR_MASK                     _U_(0xFFFFFFFF)                                /**< \deprecated (SDMMC_BDPR) Register MASK  (Use SDMMC_BDPR_Msk instead)  */
#define SDMMC_BDPR_Msk                      _U_(0xFFFFFFFF)                                /**< (SDMMC_BDPR) Register Mask  */


/* -------- SDMMC_PSR : (SDMMC Offset: 0x24) (R/ 32) Present State Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CMDINHC:1;                 /**< bit:      0  Command Inhibit (CMD)                    */
    uint32_t CMDINHD:1;                 /**< bit:      1  Command Inhibit (DAT)                    */
    uint32_t DLACT:1;                   /**< bit:      2  DAT Line Active                          */
    uint32_t :5;                        /**< bit:   3..7  Reserved */
    uint32_t WTACT:1;                   /**< bit:      8  Write Transfer Active                    */
    uint32_t RTACT:1;                   /**< bit:      9  Read Transfer Active                     */
    uint32_t BUFWREN:1;                 /**< bit:     10  Buffer Write Enable                      */
    uint32_t BUFRDEN:1;                 /**< bit:     11  Buffer Read Enable                       */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t CARDINS:1;                 /**< bit:     16  Card Inserted                            */
    uint32_t CARDSS:1;                  /**< bit:     17  Card State Stable                        */
    uint32_t CARDDPL:1;                 /**< bit:     18  Card Detect Pin Level                    */
    uint32_t WRPPL:1;                   /**< bit:     19  Write Protect Pin Level                  */
    uint32_t DATLL:4;                   /**< bit: 20..23  DAT[3:0] Line Level                      */
    uint32_t CMDLL:1;                   /**< bit:     24  CMD Line Level                           */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SDMMC_PSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_PSR_OFFSET                    (0x24)                                        /**<  (SDMMC_PSR) Present State Register  Offset */

#define SDMMC_PSR_CMDINHC_Pos               0                                              /**< (SDMMC_PSR) Command Inhibit (CMD) Position */
#define SDMMC_PSR_CMDINHC_Msk               (_U_(0x1) << SDMMC_PSR_CMDINHC_Pos)            /**< (SDMMC_PSR) Command Inhibit (CMD) Mask */
#define SDMMC_PSR_CMDINHC                   SDMMC_PSR_CMDINHC_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_PSR_CMDINHC_Msk instead */
#define SDMMC_PSR_CMDINHD_Pos               1                                              /**< (SDMMC_PSR) Command Inhibit (DAT) Position */
#define SDMMC_PSR_CMDINHD_Msk               (_U_(0x1) << SDMMC_PSR_CMDINHD_Pos)            /**< (SDMMC_PSR) Command Inhibit (DAT) Mask */
#define SDMMC_PSR_CMDINHD                   SDMMC_PSR_CMDINHD_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_PSR_CMDINHD_Msk instead */
#define SDMMC_PSR_DLACT_Pos                 2                                              /**< (SDMMC_PSR) DAT Line Active Position */
#define SDMMC_PSR_DLACT_Msk                 (_U_(0x1) << SDMMC_PSR_DLACT_Pos)              /**< (SDMMC_PSR) DAT Line Active Mask */
#define SDMMC_PSR_DLACT                     SDMMC_PSR_DLACT_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_PSR_DLACT_Msk instead */
#define SDMMC_PSR_WTACT_Pos                 8                                              /**< (SDMMC_PSR) Write Transfer Active Position */
#define SDMMC_PSR_WTACT_Msk                 (_U_(0x1) << SDMMC_PSR_WTACT_Pos)              /**< (SDMMC_PSR) Write Transfer Active Mask */
#define SDMMC_PSR_WTACT                     SDMMC_PSR_WTACT_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_PSR_WTACT_Msk instead */
#define SDMMC_PSR_RTACT_Pos                 9                                              /**< (SDMMC_PSR) Read Transfer Active Position */
#define SDMMC_PSR_RTACT_Msk                 (_U_(0x1) << SDMMC_PSR_RTACT_Pos)              /**< (SDMMC_PSR) Read Transfer Active Mask */
#define SDMMC_PSR_RTACT                     SDMMC_PSR_RTACT_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_PSR_RTACT_Msk instead */
#define SDMMC_PSR_BUFWREN_Pos               10                                             /**< (SDMMC_PSR) Buffer Write Enable Position */
#define SDMMC_PSR_BUFWREN_Msk               (_U_(0x1) << SDMMC_PSR_BUFWREN_Pos)            /**< (SDMMC_PSR) Buffer Write Enable Mask */
#define SDMMC_PSR_BUFWREN                   SDMMC_PSR_BUFWREN_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_PSR_BUFWREN_Msk instead */
#define SDMMC_PSR_BUFRDEN_Pos               11                                             /**< (SDMMC_PSR) Buffer Read Enable Position */
#define SDMMC_PSR_BUFRDEN_Msk               (_U_(0x1) << SDMMC_PSR_BUFRDEN_Pos)            /**< (SDMMC_PSR) Buffer Read Enable Mask */
#define SDMMC_PSR_BUFRDEN                   SDMMC_PSR_BUFRDEN_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_PSR_BUFRDEN_Msk instead */
#define SDMMC_PSR_CARDINS_Pos               16                                             /**< (SDMMC_PSR) Card Inserted Position */
#define SDMMC_PSR_CARDINS_Msk               (_U_(0x1) << SDMMC_PSR_CARDINS_Pos)            /**< (SDMMC_PSR) Card Inserted Mask */
#define SDMMC_PSR_CARDINS                   SDMMC_PSR_CARDINS_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_PSR_CARDINS_Msk instead */
#define SDMMC_PSR_CARDSS_Pos                17                                             /**< (SDMMC_PSR) Card State Stable Position */
#define SDMMC_PSR_CARDSS_Msk                (_U_(0x1) << SDMMC_PSR_CARDSS_Pos)             /**< (SDMMC_PSR) Card State Stable Mask */
#define SDMMC_PSR_CARDSS                    SDMMC_PSR_CARDSS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_PSR_CARDSS_Msk instead */
#define SDMMC_PSR_CARDDPL_Pos               18                                             /**< (SDMMC_PSR) Card Detect Pin Level Position */
#define SDMMC_PSR_CARDDPL_Msk               (_U_(0x1) << SDMMC_PSR_CARDDPL_Pos)            /**< (SDMMC_PSR) Card Detect Pin Level Mask */
#define SDMMC_PSR_CARDDPL                   SDMMC_PSR_CARDDPL_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_PSR_CARDDPL_Msk instead */
#define SDMMC_PSR_WRPPL_Pos                 19                                             /**< (SDMMC_PSR) Write Protect Pin Level Position */
#define SDMMC_PSR_WRPPL_Msk                 (_U_(0x1) << SDMMC_PSR_WRPPL_Pos)              /**< (SDMMC_PSR) Write Protect Pin Level Mask */
#define SDMMC_PSR_WRPPL                     SDMMC_PSR_WRPPL_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_PSR_WRPPL_Msk instead */
#define SDMMC_PSR_DATLL_Pos                 20                                             /**< (SDMMC_PSR) DAT[3:0] Line Level Position */
#define SDMMC_PSR_DATLL_Msk                 (_U_(0xF) << SDMMC_PSR_DATLL_Pos)              /**< (SDMMC_PSR) DAT[3:0] Line Level Mask */
#define SDMMC_PSR_DATLL(value)              (SDMMC_PSR_DATLL_Msk & ((value) << SDMMC_PSR_DATLL_Pos))
#define SDMMC_PSR_CMDLL_Pos                 24                                             /**< (SDMMC_PSR) CMD Line Level Position */
#define SDMMC_PSR_CMDLL_Msk                 (_U_(0x1) << SDMMC_PSR_CMDLL_Pos)              /**< (SDMMC_PSR) CMD Line Level Mask */
#define SDMMC_PSR_CMDLL                     SDMMC_PSR_CMDLL_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_PSR_CMDLL_Msk instead */
#define SDMMC_PSR_MASK                      _U_(0x1FF0F07)                                 /**< \deprecated (SDMMC_PSR) Register MASK  (Use SDMMC_PSR_Msk instead)  */
#define SDMMC_PSR_Msk                       _U_(0x1FF0F07)                                 /**< (SDMMC_PSR) Register Mask  */


/* -------- SDMMC_HC1R : (SDMMC Offset: 0x28) (R/W 8) Host Control 1 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct { // SD_SDIO mode
    uint8_t  LEDCTRL:1;                 /**< bit:      0  LED Control                              */
    uint8_t  DW:1;                      /**< bit:      1  Data Width                               */
    uint8_t  HSEN:1;                    /**< bit:      2  High Speed Enable                        */
    uint8_t  DMASEL:2;                  /**< bit:   3..4  DMA Select                               */
    uint8_t  :1;                        /**< bit:      5  Reserved */
    uint8_t  CARDDTL:1;                 /**< bit:      6  Card Detect Test Level                   */
    uint8_t  CARDDSEL:1;                /**< bit:      7  Card Detect Signal Selection             */
  } SD_SDIO;                                /**< Structure used for SD_SDIO mode access */
  struct { // E_MMC mode
    uint8_t  :1;                        /**< bit:      0  Reserved */
    uint8_t  DW:1;                      /**< bit:      1  Data Width                               */
    uint8_t  HSEN:1;                    /**< bit:      2  High Speed Enable                        */
    uint8_t  DMASEL:2;                  /**< bit:   3..4  DMA Select                               */
    uint8_t  EXTDW:1;                   /**< bit:      5  Extended Data Width                      */
    uint8_t  :2;                        /**< bit:   6..7  Reserved */
  } E_MMC;                                /**< Structure used for E_MMC mode access */
  uint8_t  reg;                         /**< Type used for register access */
} SDMMC_HC1R_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_HC1R_OFFSET                   (0x28)                                        /**<  (SDMMC_HC1R) Host Control 1 Register  Offset */

#define SDMMC_HC1R_MASK                     _U_(0x00)                                      /**< \deprecated (SDMMC_HC1R) Register MASK  (Use SDMMC_HC1R_Msk instead)  */
#define SDMMC_HC1R_Msk                      _U_(0x00)                                      /**< (SDMMC_HC1R) Register Mask  */

/* SD_SDIO mode */
#define SDMMC_HC1R_SD_SDIO_LEDCTRL_Pos      0                                              /**< (SDMMC_HC1R) LED Control Position */
#define SDMMC_HC1R_SD_SDIO_LEDCTRL_Msk      (_U_(0x1) << SDMMC_HC1R_SD_SDIO_LEDCTRL_Pos)   /**< (SDMMC_HC1R) LED Control Mask */
#define SDMMC_HC1R_SD_SDIO_LEDCTRL          SDMMC_HC1R_SD_SDIO_LEDCTRL_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_HC1R_SD_SDIO_LEDCTRL_Msk instead */
#define   SDMMC_HC1R_SD_SDIO_LEDCTRL_OFF_Val _U_(0x0)                                       /**< (SDMMC_HC1R) SD_SDIO LED off.  */
#define   SDMMC_HC1R_SD_SDIO_LEDCTRL_ON_Val _U_(0x1)                                       /**< (SDMMC_HC1R) SD_SDIO LED on.  */
#define SDMMC_HC1R_SD_SDIO_LEDCTRL_OFF      (SDMMC_HC1R_SD_SDIO_LEDCTRL_OFF_Val << SDMMC_HC1R_SD_SDIO_LEDCTRL_Pos)  /**< (SDMMC_HC1R) LED off. Position  */
#define SDMMC_HC1R_SD_SDIO_LEDCTRL_ON       (SDMMC_HC1R_SD_SDIO_LEDCTRL_ON_Val << SDMMC_HC1R_SD_SDIO_LEDCTRL_Pos)  /**< (SDMMC_HC1R) LED on. Position  */
#define SDMMC_HC1R_SD_SDIO_DW_Pos           1                                              /**< (SDMMC_HC1R) Data Width Position */
#define SDMMC_HC1R_SD_SDIO_DW_Msk           (_U_(0x1) << SDMMC_HC1R_SD_SDIO_DW_Pos)        /**< (SDMMC_HC1R) Data Width Mask */
#define SDMMC_HC1R_SD_SDIO_DW               SDMMC_HC1R_SD_SDIO_DW_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_HC1R_SD_SDIO_DW_Msk instead */
#define   SDMMC_HC1R_SD_SDIO_DW_1_BIT_Val   _U_(0x0)                                       /**< (SDMMC_HC1R) SD_SDIO 1-bit mode.  */
#define   SDMMC_HC1R_SD_SDIO_DW_4_BIT_Val   _U_(0x1)                                       /**< (SDMMC_HC1R) SD_SDIO 4-bit mode.  */
#define SDMMC_HC1R_SD_SDIO_DW_1_BIT         (SDMMC_HC1R_SD_SDIO_DW_1_BIT_Val << SDMMC_HC1R_SD_SDIO_DW_Pos)  /**< (SDMMC_HC1R) 1-bit mode. Position  */
#define SDMMC_HC1R_SD_SDIO_DW_4_BIT         (SDMMC_HC1R_SD_SDIO_DW_4_BIT_Val << SDMMC_HC1R_SD_SDIO_DW_Pos)  /**< (SDMMC_HC1R) 4-bit mode. Position  */
#define SDMMC_HC1R_SD_SDIO_HSEN_Pos         2                                              /**< (SDMMC_HC1R) High Speed Enable Position */
#define SDMMC_HC1R_SD_SDIO_HSEN_Msk         (_U_(0x1) << SDMMC_HC1R_SD_SDIO_HSEN_Pos)      /**< (SDMMC_HC1R) High Speed Enable Mask */
#define SDMMC_HC1R_SD_SDIO_HSEN             SDMMC_HC1R_SD_SDIO_HSEN_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_HC1R_SD_SDIO_HSEN_Msk instead */
#define SDMMC_HC1R_SD_SDIO_DMASEL_Pos       3                                              /**< (SDMMC_HC1R) DMA Select Position */
#define SDMMC_HC1R_SD_SDIO_DMASEL_Msk       (_U_(0x3) << SDMMC_HC1R_SD_SDIO_DMASEL_Pos)    /**< (SDMMC_HC1R) DMA Select Mask */
#define SDMMC_HC1R_SD_SDIO_DMASEL(value)    (SDMMC_HC1R_SD_SDIO_DMASEL_Msk & ((value) << SDMMC_HC1R_SD_SDIO_DMASEL_Pos))
#define   SDMMC_HC1R_SD_SDIO_DMASEL_SDMA_Val _U_(0x0)                                       /**< (SDMMC_HC1R) SD_SDIO SDMA is selected  */
#define   SDMMC_HC1R_SD_SDIO_DMASEL_ADMA32_Val _U_(0x2)                                       /**< (SDMMC_HC1R) SD_SDIO 32-bit Address ADMA2 is selected  */
#define SDMMC_HC1R_SD_SDIO_DMASEL_SDMA      (SDMMC_HC1R_SD_SDIO_DMASEL_SDMA_Val << SDMMC_HC1R_SD_SDIO_DMASEL_Pos)  /**< (SDMMC_HC1R) SDMA is selected Position  */
#define SDMMC_HC1R_SD_SDIO_DMASEL_ADMA32    (SDMMC_HC1R_SD_SDIO_DMASEL_ADMA32_Val << SDMMC_HC1R_SD_SDIO_DMASEL_Pos)  /**< (SDMMC_HC1R) 32-bit Address ADMA2 is selected Position  */
#define SDMMC_HC1R_SD_SDIO_CARDDTL_Pos      6                                              /**< (SDMMC_HC1R) Card Detect Test Level Position */
#define SDMMC_HC1R_SD_SDIO_CARDDTL_Msk      (_U_(0x1) << SDMMC_HC1R_SD_SDIO_CARDDTL_Pos)   /**< (SDMMC_HC1R) Card Detect Test Level Mask */
#define SDMMC_HC1R_SD_SDIO_CARDDTL          SDMMC_HC1R_SD_SDIO_CARDDTL_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_HC1R_SD_SDIO_CARDDTL_Msk instead */
#define SDMMC_HC1R_SD_SDIO_CARDDSEL_Pos     7                                              /**< (SDMMC_HC1R) Card Detect Signal Selection Position */
#define SDMMC_HC1R_SD_SDIO_CARDDSEL_Msk     (_U_(0x1) << SDMMC_HC1R_SD_SDIO_CARDDSEL_Pos)  /**< (SDMMC_HC1R) Card Detect Signal Selection Mask */
#define SDMMC_HC1R_SD_SDIO_CARDDSEL         SDMMC_HC1R_SD_SDIO_CARDDSEL_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_HC1R_SD_SDIO_CARDDSEL_Msk instead */
#define SDMMC_HC1R_SD_SDIO_MASK             _U_(0xDF)                                      /**< \deprecated (SDMMC_HC1R_SD_SDIO) Register MASK  (Use SDMMC_HC1R_SD_SDIO_Msk instead)  */
#define SDMMC_HC1R_SD_SDIO_Msk              _U_(0xDF)                                      /**< (SDMMC_HC1R_SD_SDIO) Register Mask  */

/* E_MMC mode */
#define SDMMC_HC1R_E_MMC_DW_Pos             1                                              /**< (SDMMC_HC1R) Data Width Position */
#define SDMMC_HC1R_E_MMC_DW_Msk             (_U_(0x1) << SDMMC_HC1R_E_MMC_DW_Pos)          /**< (SDMMC_HC1R) Data Width Mask */
#define SDMMC_HC1R_E_MMC_DW                 SDMMC_HC1R_E_MMC_DW_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_HC1R_E_MMC_DW_Msk instead */
#define   SDMMC_HC1R_E_MMC_DW_1_BIT_Val     _U_(0x0)                                       /**< (SDMMC_HC1R) E_MMC 1-bit mode.  */
#define   SDMMC_HC1R_E_MMC_DW_4_BIT_Val     _U_(0x1)                                       /**< (SDMMC_HC1R) E_MMC 4-bit mode.  */
#define SDMMC_HC1R_E_MMC_DW_1_BIT           (SDMMC_HC1R_E_MMC_DW_1_BIT_Val << SDMMC_HC1R_E_MMC_DW_Pos)  /**< (SDMMC_HC1R) 1-bit mode. Position  */
#define SDMMC_HC1R_E_MMC_DW_4_BIT           (SDMMC_HC1R_E_MMC_DW_4_BIT_Val << SDMMC_HC1R_E_MMC_DW_Pos)  /**< (SDMMC_HC1R) 4-bit mode. Position  */
#define SDMMC_HC1R_E_MMC_HSEN_Pos           2                                              /**< (SDMMC_HC1R) High Speed Enable Position */
#define SDMMC_HC1R_E_MMC_HSEN_Msk           (_U_(0x1) << SDMMC_HC1R_E_MMC_HSEN_Pos)        /**< (SDMMC_HC1R) High Speed Enable Mask */
#define SDMMC_HC1R_E_MMC_HSEN               SDMMC_HC1R_E_MMC_HSEN_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_HC1R_E_MMC_HSEN_Msk instead */
#define SDMMC_HC1R_E_MMC_DMASEL_Pos         3                                              /**< (SDMMC_HC1R) DMA Select Position */
#define SDMMC_HC1R_E_MMC_DMASEL_Msk         (_U_(0x3) << SDMMC_HC1R_E_MMC_DMASEL_Pos)      /**< (SDMMC_HC1R) DMA Select Mask */
#define SDMMC_HC1R_E_MMC_DMASEL(value)      (SDMMC_HC1R_E_MMC_DMASEL_Msk & ((value) << SDMMC_HC1R_E_MMC_DMASEL_Pos))
#define   SDMMC_HC1R_E_MMC_DMASEL_SDMA_Val  _U_(0x0)                                       /**< (SDMMC_HC1R) E_MMC SDMA is selected  */
#define   SDMMC_HC1R_E_MMC_DMASEL_ADMA32_Val _U_(0x2)                                       /**< (SDMMC_HC1R) E_MMC 32-bit Address ADMA2 is selected  */
#define SDMMC_HC1R_E_MMC_DMASEL_SDMA        (SDMMC_HC1R_E_MMC_DMASEL_SDMA_Val << SDMMC_HC1R_E_MMC_DMASEL_Pos)  /**< (SDMMC_HC1R) SDMA is selected Position  */
#define SDMMC_HC1R_E_MMC_DMASEL_ADMA32      (SDMMC_HC1R_E_MMC_DMASEL_ADMA32_Val << SDMMC_HC1R_E_MMC_DMASEL_Pos)  /**< (SDMMC_HC1R) 32-bit Address ADMA2 is selected Position  */
#define SDMMC_HC1R_E_MMC_EXTDW_Pos          5                                              /**< (SDMMC_HC1R) Extended Data Width Position */
#define SDMMC_HC1R_E_MMC_EXTDW_Msk          (_U_(0x1) << SDMMC_HC1R_E_MMC_EXTDW_Pos)       /**< (SDMMC_HC1R) Extended Data Width Mask */
#define SDMMC_HC1R_E_MMC_EXTDW              SDMMC_HC1R_E_MMC_EXTDW_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_HC1R_E_MMC_EXTDW_Msk instead */
#define SDMMC_HC1R_E_MMC_MASK               _U_(0x3E)                                      /**< \deprecated (SDMMC_HC1R_E_MMC) Register MASK  (Use SDMMC_HC1R_E_MMC_Msk instead)  */
#define SDMMC_HC1R_E_MMC_Msk                _U_(0x3E)                                      /**< (SDMMC_HC1R_E_MMC) Register Mask  */


/* -------- SDMMC_PCR : (SDMMC Offset: 0x29) (R/W 8) Power Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  SDBPWR:1;                  /**< bit:      0  SD Bus Power                             */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SDMMC_PCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_PCR_OFFSET                    (0x29)                                        /**<  (SDMMC_PCR) Power Control Register  Offset */

#define SDMMC_PCR_SDBPWR_Pos                0                                              /**< (SDMMC_PCR) SD Bus Power Position */
#define SDMMC_PCR_SDBPWR_Msk                (_U_(0x1) << SDMMC_PCR_SDBPWR_Pos)             /**< (SDMMC_PCR) SD Bus Power Mask */
#define SDMMC_PCR_SDBPWR                    SDMMC_PCR_SDBPWR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_PCR_SDBPWR_Msk instead */
#define SDMMC_PCR_MASK                      _U_(0x01)                                      /**< \deprecated (SDMMC_PCR) Register MASK  (Use SDMMC_PCR_Msk instead)  */
#define SDMMC_PCR_Msk                       _U_(0x01)                                      /**< (SDMMC_PCR) Register Mask  */


/* -------- SDMMC_BGCR : (SDMMC Offset: 0x2a) (R/W 8) Block Gap Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct { // SD_SDIO mode
    uint8_t  STPBGR:1;                  /**< bit:      0  Stop At Block Gap Request                */
    uint8_t  CONTR:1;                   /**< bit:      1  Continue Request                         */
    uint8_t  RWCTRL:1;                  /**< bit:      2  Read Wait Control                        */
    uint8_t  INTBG:1;                   /**< bit:      3  Interrupt at Block Gap                   */
    uint8_t  :4;                        /**< bit:   4..7  Reserved */
  } SD_SDIO;                                /**< Structure used for SD_SDIO mode access */
  struct { // E_MMC mode
    uint8_t  STPBGR:1;                  /**< bit:      0  Stop At Block Gap Request                */
    uint8_t  CONTR:1;                   /**< bit:      1  Continue Request                         */
    uint8_t  :6;                        /**< bit:   2..7  Reserved */
  } E_MMC;                                /**< Structure used for E_MMC mode access */
  uint8_t  reg;                         /**< Type used for register access */
} SDMMC_BGCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_BGCR_OFFSET                   (0x2A)                                        /**<  (SDMMC_BGCR) Block Gap Control Register  Offset */

#define SDMMC_BGCR_MASK                     _U_(0x00)                                      /**< \deprecated (SDMMC_BGCR) Register MASK  (Use SDMMC_BGCR_Msk instead)  */
#define SDMMC_BGCR_Msk                      _U_(0x00)                                      /**< (SDMMC_BGCR) Register Mask  */

/* SD_SDIO mode */
#define SDMMC_BGCR_SD_SDIO_STPBGR_Pos       0                                              /**< (SDMMC_BGCR) Stop At Block Gap Request Position */
#define SDMMC_BGCR_SD_SDIO_STPBGR_Msk       (_U_(0x1) << SDMMC_BGCR_SD_SDIO_STPBGR_Pos)    /**< (SDMMC_BGCR) Stop At Block Gap Request Mask */
#define SDMMC_BGCR_SD_SDIO_STPBGR           SDMMC_BGCR_SD_SDIO_STPBGR_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_BGCR_SD_SDIO_STPBGR_Msk instead */
#define SDMMC_BGCR_SD_SDIO_CONTR_Pos        1                                              /**< (SDMMC_BGCR) Continue Request Position */
#define SDMMC_BGCR_SD_SDIO_CONTR_Msk        (_U_(0x1) << SDMMC_BGCR_SD_SDIO_CONTR_Pos)     /**< (SDMMC_BGCR) Continue Request Mask */
#define SDMMC_BGCR_SD_SDIO_CONTR            SDMMC_BGCR_SD_SDIO_CONTR_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_BGCR_SD_SDIO_CONTR_Msk instead */
#define SDMMC_BGCR_SD_SDIO_RWCTRL_Pos       2                                              /**< (SDMMC_BGCR) Read Wait Control Position */
#define SDMMC_BGCR_SD_SDIO_RWCTRL_Msk       (_U_(0x1) << SDMMC_BGCR_SD_SDIO_RWCTRL_Pos)    /**< (SDMMC_BGCR) Read Wait Control Mask */
#define SDMMC_BGCR_SD_SDIO_RWCTRL           SDMMC_BGCR_SD_SDIO_RWCTRL_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_BGCR_SD_SDIO_RWCTRL_Msk instead */
#define SDMMC_BGCR_SD_SDIO_INTBG_Pos        3                                              /**< (SDMMC_BGCR) Interrupt at Block Gap Position */
#define SDMMC_BGCR_SD_SDIO_INTBG_Msk        (_U_(0x1) << SDMMC_BGCR_SD_SDIO_INTBG_Pos)     /**< (SDMMC_BGCR) Interrupt at Block Gap Mask */
#define SDMMC_BGCR_SD_SDIO_INTBG            SDMMC_BGCR_SD_SDIO_INTBG_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_BGCR_SD_SDIO_INTBG_Msk instead */
#define   SDMMC_BGCR_SD_SDIO_INTBG_DISABLED_Val _U_(0x0)                                       /**< (SDMMC_BGCR) SD_SDIO Interrupt detection disabled.  */
#define   SDMMC_BGCR_SD_SDIO_INTBG_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_BGCR) SD_SDIO Interrupt detection enabled.  */
#define SDMMC_BGCR_SD_SDIO_INTBG_DISABLED   (SDMMC_BGCR_SD_SDIO_INTBG_DISABLED_Val << SDMMC_BGCR_SD_SDIO_INTBG_Pos)  /**< (SDMMC_BGCR) Interrupt detection disabled. Position  */
#define SDMMC_BGCR_SD_SDIO_INTBG_ENABLED    (SDMMC_BGCR_SD_SDIO_INTBG_ENABLED_Val << SDMMC_BGCR_SD_SDIO_INTBG_Pos)  /**< (SDMMC_BGCR) Interrupt detection enabled. Position  */
#define SDMMC_BGCR_SD_SDIO_MASK             _U_(0x0F)                                      /**< \deprecated (SDMMC_BGCR_SD_SDIO) Register MASK  (Use SDMMC_BGCR_SD_SDIO_Msk instead)  */
#define SDMMC_BGCR_SD_SDIO_Msk              _U_(0x0F)                                      /**< (SDMMC_BGCR_SD_SDIO) Register Mask  */

/* E_MMC mode */
#define SDMMC_BGCR_E_MMC_STPBGR_Pos         0                                              /**< (SDMMC_BGCR) Stop At Block Gap Request Position */
#define SDMMC_BGCR_E_MMC_STPBGR_Msk         (_U_(0x1) << SDMMC_BGCR_E_MMC_STPBGR_Pos)      /**< (SDMMC_BGCR) Stop At Block Gap Request Mask */
#define SDMMC_BGCR_E_MMC_STPBGR             SDMMC_BGCR_E_MMC_STPBGR_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_BGCR_E_MMC_STPBGR_Msk instead */
#define SDMMC_BGCR_E_MMC_CONTR_Pos          1                                              /**< (SDMMC_BGCR) Continue Request Position */
#define SDMMC_BGCR_E_MMC_CONTR_Msk          (_U_(0x1) << SDMMC_BGCR_E_MMC_CONTR_Pos)       /**< (SDMMC_BGCR) Continue Request Mask */
#define SDMMC_BGCR_E_MMC_CONTR              SDMMC_BGCR_E_MMC_CONTR_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_BGCR_E_MMC_CONTR_Msk instead */
#define SDMMC_BGCR_E_MMC_MASK               _U_(0x03)                                      /**< \deprecated (SDMMC_BGCR_E_MMC) Register MASK  (Use SDMMC_BGCR_E_MMC_Msk instead)  */
#define SDMMC_BGCR_E_MMC_Msk                _U_(0x03)                                      /**< (SDMMC_BGCR_E_MMC) Register Mask  */


/* -------- SDMMC_WCR : (SDMMC Offset: 0x2b) (R/W 8) Wakeup Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  WKENCINT:1;                /**< bit:      0  Wakeup Event Enable on Card Interrupt    */
    uint8_t  WKENCINS:1;                /**< bit:      1  Wakeup Event Enable on Card Insertion    */
    uint8_t  WKENCREM:1;                /**< bit:      2  Wakeup Event Enable on Card Removal      */
    uint8_t  :5;                        /**< bit:   3..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SDMMC_WCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_WCR_OFFSET                    (0x2B)                                        /**<  (SDMMC_WCR) Wakeup Control Register  Offset */

#define SDMMC_WCR_WKENCINT_Pos              0                                              /**< (SDMMC_WCR) Wakeup Event Enable on Card Interrupt Position */
#define SDMMC_WCR_WKENCINT_Msk              (_U_(0x1) << SDMMC_WCR_WKENCINT_Pos)           /**< (SDMMC_WCR) Wakeup Event Enable on Card Interrupt Mask */
#define SDMMC_WCR_WKENCINT                  SDMMC_WCR_WKENCINT_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_WCR_WKENCINT_Msk instead */
#define   SDMMC_WCR_WKENCINT_DISABLED_Val   _U_(0x0)                                       /**< (SDMMC_WCR) Wakeup Event disabled.  */
#define   SDMMC_WCR_WKENCINT_ENABLED_Val    _U_(0x1)                                       /**< (SDMMC_WCR) Wakeup Event enabled.  */
#define SDMMC_WCR_WKENCINT_DISABLED         (SDMMC_WCR_WKENCINT_DISABLED_Val << SDMMC_WCR_WKENCINT_Pos)  /**< (SDMMC_WCR) Wakeup Event disabled. Position  */
#define SDMMC_WCR_WKENCINT_ENABLED          (SDMMC_WCR_WKENCINT_ENABLED_Val << SDMMC_WCR_WKENCINT_Pos)  /**< (SDMMC_WCR) Wakeup Event enabled. Position  */
#define SDMMC_WCR_WKENCINS_Pos              1                                              /**< (SDMMC_WCR) Wakeup Event Enable on Card Insertion Position */
#define SDMMC_WCR_WKENCINS_Msk              (_U_(0x1) << SDMMC_WCR_WKENCINS_Pos)           /**< (SDMMC_WCR) Wakeup Event Enable on Card Insertion Mask */
#define SDMMC_WCR_WKENCINS                  SDMMC_WCR_WKENCINS_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_WCR_WKENCINS_Msk instead */
#define   SDMMC_WCR_WKENCINS_DISABLED_Val   _U_(0x0)                                       /**< (SDMMC_WCR) Wakeup Event disabled.  */
#define   SDMMC_WCR_WKENCINS_ENABLED_Val    _U_(0x1)                                       /**< (SDMMC_WCR) Wakeup Event enabled.  */
#define SDMMC_WCR_WKENCINS_DISABLED         (SDMMC_WCR_WKENCINS_DISABLED_Val << SDMMC_WCR_WKENCINS_Pos)  /**< (SDMMC_WCR) Wakeup Event disabled. Position  */
#define SDMMC_WCR_WKENCINS_ENABLED          (SDMMC_WCR_WKENCINS_ENABLED_Val << SDMMC_WCR_WKENCINS_Pos)  /**< (SDMMC_WCR) Wakeup Event enabled. Position  */
#define SDMMC_WCR_WKENCREM_Pos              2                                              /**< (SDMMC_WCR) Wakeup Event Enable on Card Removal Position */
#define SDMMC_WCR_WKENCREM_Msk              (_U_(0x1) << SDMMC_WCR_WKENCREM_Pos)           /**< (SDMMC_WCR) Wakeup Event Enable on Card Removal Mask */
#define SDMMC_WCR_WKENCREM                  SDMMC_WCR_WKENCREM_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_WCR_WKENCREM_Msk instead */
#define   SDMMC_WCR_WKENCREM_DISABLED_Val   _U_(0x0)                                       /**< (SDMMC_WCR) Wakeup Event disabled.  */
#define   SDMMC_WCR_WKENCREM_ENABLED_Val    _U_(0x1)                                       /**< (SDMMC_WCR) Wakeup Event enabled.  */
#define SDMMC_WCR_WKENCREM_DISABLED         (SDMMC_WCR_WKENCREM_DISABLED_Val << SDMMC_WCR_WKENCREM_Pos)  /**< (SDMMC_WCR) Wakeup Event disabled. Position  */
#define SDMMC_WCR_WKENCREM_ENABLED          (SDMMC_WCR_WKENCREM_ENABLED_Val << SDMMC_WCR_WKENCREM_Pos)  /**< (SDMMC_WCR) Wakeup Event enabled. Position  */
#define SDMMC_WCR_MASK                      _U_(0x07)                                      /**< \deprecated (SDMMC_WCR) Register MASK  (Use SDMMC_WCR_Msk instead)  */
#define SDMMC_WCR_Msk                       _U_(0x07)                                      /**< (SDMMC_WCR) Register Mask  */


/* -------- SDMMC_CCR : (SDMMC Offset: 0x2c) (R/W 16) Clock Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t INTCLKEN:1;                /**< bit:      0  Internal Clock Enable                    */
    uint16_t INTCLKS:1;                 /**< bit:      1  Internal Clock Stable                    */
    uint16_t SDCLKEN:1;                 /**< bit:      2  SD Clock Enable                          */
    uint16_t :2;                        /**< bit:   3..4  Reserved */
    uint16_t CLKGSEL:1;                 /**< bit:      5  Clock Generator Select                   */
    uint16_t USDCLKFSEL:2;              /**< bit:   6..7  Upper Bits of SDCLK Frequency Select     */
    uint16_t SDCLKFSEL:8;               /**< bit:  8..15  SDCLK Frequency Select                   */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} SDMMC_CCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_CCR_OFFSET                    (0x2C)                                        /**<  (SDMMC_CCR) Clock Control Register  Offset */

#define SDMMC_CCR_INTCLKEN_Pos              0                                              /**< (SDMMC_CCR) Internal Clock Enable Position */
#define SDMMC_CCR_INTCLKEN_Msk              (_U_(0x1) << SDMMC_CCR_INTCLKEN_Pos)           /**< (SDMMC_CCR) Internal Clock Enable Mask */
#define SDMMC_CCR_INTCLKEN                  SDMMC_CCR_INTCLKEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CCR_INTCLKEN_Msk instead */
#define SDMMC_CCR_INTCLKS_Pos               1                                              /**< (SDMMC_CCR) Internal Clock Stable Position */
#define SDMMC_CCR_INTCLKS_Msk               (_U_(0x1) << SDMMC_CCR_INTCLKS_Pos)            /**< (SDMMC_CCR) Internal Clock Stable Mask */
#define SDMMC_CCR_INTCLKS                   SDMMC_CCR_INTCLKS_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CCR_INTCLKS_Msk instead */
#define SDMMC_CCR_SDCLKEN_Pos               2                                              /**< (SDMMC_CCR) SD Clock Enable Position */
#define SDMMC_CCR_SDCLKEN_Msk               (_U_(0x1) << SDMMC_CCR_SDCLKEN_Pos)            /**< (SDMMC_CCR) SD Clock Enable Mask */
#define SDMMC_CCR_SDCLKEN                   SDMMC_CCR_SDCLKEN_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CCR_SDCLKEN_Msk instead */
#define SDMMC_CCR_CLKGSEL_Pos               5                                              /**< (SDMMC_CCR) Clock Generator Select Position */
#define SDMMC_CCR_CLKGSEL_Msk               (_U_(0x1) << SDMMC_CCR_CLKGSEL_Pos)            /**< (SDMMC_CCR) Clock Generator Select Mask */
#define SDMMC_CCR_CLKGSEL                   SDMMC_CCR_CLKGSEL_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CCR_CLKGSEL_Msk instead */
#define SDMMC_CCR_USDCLKFSEL_Pos            6                                              /**< (SDMMC_CCR) Upper Bits of SDCLK Frequency Select Position */
#define SDMMC_CCR_USDCLKFSEL_Msk            (_U_(0x3) << SDMMC_CCR_USDCLKFSEL_Pos)         /**< (SDMMC_CCR) Upper Bits of SDCLK Frequency Select Mask */
#define SDMMC_CCR_USDCLKFSEL(value)         (SDMMC_CCR_USDCLKFSEL_Msk & ((value) << SDMMC_CCR_USDCLKFSEL_Pos))
#define SDMMC_CCR_SDCLKFSEL_Pos             8                                              /**< (SDMMC_CCR) SDCLK Frequency Select Position */
#define SDMMC_CCR_SDCLKFSEL_Msk             (_U_(0xFF) << SDMMC_CCR_SDCLKFSEL_Pos)         /**< (SDMMC_CCR) SDCLK Frequency Select Mask */
#define SDMMC_CCR_SDCLKFSEL(value)          (SDMMC_CCR_SDCLKFSEL_Msk & ((value) << SDMMC_CCR_SDCLKFSEL_Pos))
#define SDMMC_CCR_MASK                      _U_(0xFFE7)                                    /**< \deprecated (SDMMC_CCR) Register MASK  (Use SDMMC_CCR_Msk instead)  */
#define SDMMC_CCR_Msk                       _U_(0xFFE7)                                    /**< (SDMMC_CCR) Register Mask  */


/* -------- SDMMC_TCR : (SDMMC Offset: 0x2e) (R/W 8) Timeout Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DTCVAL:4;                  /**< bit:   0..3  Data Timeout Counter Value               */
    uint8_t  :4;                        /**< bit:   4..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SDMMC_TCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_TCR_OFFSET                    (0x2E)                                        /**<  (SDMMC_TCR) Timeout Control Register  Offset */

#define SDMMC_TCR_DTCVAL_Pos                0                                              /**< (SDMMC_TCR) Data Timeout Counter Value Position */
#define SDMMC_TCR_DTCVAL_Msk                (_U_(0xF) << SDMMC_TCR_DTCVAL_Pos)             /**< (SDMMC_TCR) Data Timeout Counter Value Mask */
#define SDMMC_TCR_DTCVAL(value)             (SDMMC_TCR_DTCVAL_Msk & ((value) << SDMMC_TCR_DTCVAL_Pos))
#define SDMMC_TCR_MASK                      _U_(0x0F)                                      /**< \deprecated (SDMMC_TCR) Register MASK  (Use SDMMC_TCR_Msk instead)  */
#define SDMMC_TCR_Msk                       _U_(0x0F)                                      /**< (SDMMC_TCR) Register Mask  */


/* -------- SDMMC_SRR : (SDMMC Offset: 0x2f) (R/W 8) Software Reset Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  SWRSTALL:1;                /**< bit:      0  Software reset for All                   */
    uint8_t  SWRSTCMD:1;                /**< bit:      1  Software reset for CMD line              */
    uint8_t  SWRSTDAT:1;                /**< bit:      2  Software reset for DAT line              */
    uint8_t  :5;                        /**< bit:   3..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SDMMC_SRR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_SRR_OFFSET                    (0x2F)                                        /**<  (SDMMC_SRR) Software Reset Register  Offset */

#define SDMMC_SRR_SWRSTALL_Pos              0                                              /**< (SDMMC_SRR) Software reset for All Position */
#define SDMMC_SRR_SWRSTALL_Msk              (_U_(0x1) << SDMMC_SRR_SWRSTALL_Pos)           /**< (SDMMC_SRR) Software reset for All Mask */
#define SDMMC_SRR_SWRSTALL                  SDMMC_SRR_SWRSTALL_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_SRR_SWRSTALL_Msk instead */
#define SDMMC_SRR_SWRSTCMD_Pos              1                                              /**< (SDMMC_SRR) Software reset for CMD line Position */
#define SDMMC_SRR_SWRSTCMD_Msk              (_U_(0x1) << SDMMC_SRR_SWRSTCMD_Pos)           /**< (SDMMC_SRR) Software reset for CMD line Mask */
#define SDMMC_SRR_SWRSTCMD                  SDMMC_SRR_SWRSTCMD_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_SRR_SWRSTCMD_Msk instead */
#define SDMMC_SRR_SWRSTDAT_Pos              2                                              /**< (SDMMC_SRR) Software reset for DAT line Position */
#define SDMMC_SRR_SWRSTDAT_Msk              (_U_(0x1) << SDMMC_SRR_SWRSTDAT_Pos)           /**< (SDMMC_SRR) Software reset for DAT line Mask */
#define SDMMC_SRR_SWRSTDAT                  SDMMC_SRR_SWRSTDAT_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_SRR_SWRSTDAT_Msk instead */
#define SDMMC_SRR_MASK                      _U_(0x07)                                      /**< \deprecated (SDMMC_SRR) Register MASK  (Use SDMMC_SRR_Msk instead)  */
#define SDMMC_SRR_Msk                       _U_(0x07)                                      /**< (SDMMC_SRR) Register Mask  */


/* -------- SDMMC_NISTR : (SDMMC Offset: 0x30) (R/W 16) Normal Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct { // SD_SDIO mode
    uint16_t CMDC:1;                    /**< bit:      0  Command Complete                         */
    uint16_t TRFC:1;                    /**< bit:      1  Transfer Complete                        */
    uint16_t BLKGE:1;                   /**< bit:      2  Block Gap Event                          */
    uint16_t DMAINT:1;                  /**< bit:      3  DMA Interrupt                            */
    uint16_t BWRRDY:1;                  /**< bit:      4  Buffer Write Ready                       */
    uint16_t BRDRDY:1;                  /**< bit:      5  Buffer Read Ready                        */
    uint16_t CINS:1;                    /**< bit:      6  Card Insertion                           */
    uint16_t CREM:1;                    /**< bit:      7  Card Removal                             */
    uint16_t CINT:1;                    /**< bit:      8  Card Interrupt                           */
    uint16_t :6;                        /**< bit:  9..14  Reserved */
    uint16_t ERRINT:1;                  /**< bit:     15  Error Interrupt                          */
  } SD_SDIO;                                /**< Structure used for SD_SDIO mode access */
  struct { // E_MMC mode
    uint16_t CMDC:1;                    /**< bit:      0  Command Complete                         */
    uint16_t TRFC:1;                    /**< bit:      1  Transfer Complete                        */
    uint16_t BLKGE:1;                   /**< bit:      2  Block Gap Event                          */
    uint16_t DMAINT:1;                  /**< bit:      3  DMA Interrupt                            */
    uint16_t BWRRDY:1;                  /**< bit:      4  Buffer Write Ready                       */
    uint16_t BRDRDY:1;                  /**< bit:      5  Buffer Read Ready                        */
    uint16_t :8;                        /**< bit:  6..13  Reserved */
    uint16_t BOOTAR:1;                  /**< bit:     14  Boot Acknowledge Received                */
    uint16_t ERRINT:1;                  /**< bit:     15  Error Interrupt                          */
  } E_MMC;                                /**< Structure used for E_MMC mode access */
  uint16_t reg;                         /**< Type used for register access */
} SDMMC_NISTR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_NISTR_OFFSET                  (0x30)                                        /**<  (SDMMC_NISTR) Normal Interrupt Status Register  Offset */

#define SDMMC_NISTR_MASK                    _U_(0x00)                                      /**< \deprecated (SDMMC_NISTR) Register MASK  (Use SDMMC_NISTR_Msk instead)  */
#define SDMMC_NISTR_Msk                     _U_(0x00)                                      /**< (SDMMC_NISTR) Register Mask  */

/* SD_SDIO mode */
#define SDMMC_NISTR_SD_SDIO_CMDC_Pos        0                                              /**< (SDMMC_NISTR) Command Complete Position */
#define SDMMC_NISTR_SD_SDIO_CMDC_Msk        (_U_(0x1) << SDMMC_NISTR_SD_SDIO_CMDC_Pos)     /**< (SDMMC_NISTR) Command Complete Mask */
#define SDMMC_NISTR_SD_SDIO_CMDC            SDMMC_NISTR_SD_SDIO_CMDC_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTR_SD_SDIO_CMDC_Msk instead */
#define SDMMC_NISTR_SD_SDIO_TRFC_Pos        1                                              /**< (SDMMC_NISTR) Transfer Complete Position */
#define SDMMC_NISTR_SD_SDIO_TRFC_Msk        (_U_(0x1) << SDMMC_NISTR_SD_SDIO_TRFC_Pos)     /**< (SDMMC_NISTR) Transfer Complete Mask */
#define SDMMC_NISTR_SD_SDIO_TRFC            SDMMC_NISTR_SD_SDIO_TRFC_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTR_SD_SDIO_TRFC_Msk instead */
#define SDMMC_NISTR_SD_SDIO_BLKGE_Pos       2                                              /**< (SDMMC_NISTR) Block Gap Event Position */
#define SDMMC_NISTR_SD_SDIO_BLKGE_Msk       (_U_(0x1) << SDMMC_NISTR_SD_SDIO_BLKGE_Pos)    /**< (SDMMC_NISTR) Block Gap Event Mask */
#define SDMMC_NISTR_SD_SDIO_BLKGE           SDMMC_NISTR_SD_SDIO_BLKGE_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTR_SD_SDIO_BLKGE_Msk instead */
#define SDMMC_NISTR_SD_SDIO_DMAINT_Pos      3                                              /**< (SDMMC_NISTR) DMA Interrupt Position */
#define SDMMC_NISTR_SD_SDIO_DMAINT_Msk      (_U_(0x1) << SDMMC_NISTR_SD_SDIO_DMAINT_Pos)   /**< (SDMMC_NISTR) DMA Interrupt Mask */
#define SDMMC_NISTR_SD_SDIO_DMAINT          SDMMC_NISTR_SD_SDIO_DMAINT_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTR_SD_SDIO_DMAINT_Msk instead */
#define SDMMC_NISTR_SD_SDIO_BWRRDY_Pos      4                                              /**< (SDMMC_NISTR) Buffer Write Ready Position */
#define SDMMC_NISTR_SD_SDIO_BWRRDY_Msk      (_U_(0x1) << SDMMC_NISTR_SD_SDIO_BWRRDY_Pos)   /**< (SDMMC_NISTR) Buffer Write Ready Mask */
#define SDMMC_NISTR_SD_SDIO_BWRRDY          SDMMC_NISTR_SD_SDIO_BWRRDY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTR_SD_SDIO_BWRRDY_Msk instead */
#define SDMMC_NISTR_SD_SDIO_BRDRDY_Pos      5                                              /**< (SDMMC_NISTR) Buffer Read Ready Position */
#define SDMMC_NISTR_SD_SDIO_BRDRDY_Msk      (_U_(0x1) << SDMMC_NISTR_SD_SDIO_BRDRDY_Pos)   /**< (SDMMC_NISTR) Buffer Read Ready Mask */
#define SDMMC_NISTR_SD_SDIO_BRDRDY          SDMMC_NISTR_SD_SDIO_BRDRDY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTR_SD_SDIO_BRDRDY_Msk instead */
#define SDMMC_NISTR_SD_SDIO_CINS_Pos        6                                              /**< (SDMMC_NISTR) Card Insertion Position */
#define SDMMC_NISTR_SD_SDIO_CINS_Msk        (_U_(0x1) << SDMMC_NISTR_SD_SDIO_CINS_Pos)     /**< (SDMMC_NISTR) Card Insertion Mask */
#define SDMMC_NISTR_SD_SDIO_CINS            SDMMC_NISTR_SD_SDIO_CINS_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTR_SD_SDIO_CINS_Msk instead */
#define SDMMC_NISTR_SD_SDIO_CREM_Pos        7                                              /**< (SDMMC_NISTR) Card Removal Position */
#define SDMMC_NISTR_SD_SDIO_CREM_Msk        (_U_(0x1) << SDMMC_NISTR_SD_SDIO_CREM_Pos)     /**< (SDMMC_NISTR) Card Removal Mask */
#define SDMMC_NISTR_SD_SDIO_CREM            SDMMC_NISTR_SD_SDIO_CREM_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTR_SD_SDIO_CREM_Msk instead */
#define SDMMC_NISTR_SD_SDIO_CINT_Pos        8                                              /**< (SDMMC_NISTR) Card Interrupt Position */
#define SDMMC_NISTR_SD_SDIO_CINT_Msk        (_U_(0x1) << SDMMC_NISTR_SD_SDIO_CINT_Pos)     /**< (SDMMC_NISTR) Card Interrupt Mask */
#define SDMMC_NISTR_SD_SDIO_CINT            SDMMC_NISTR_SD_SDIO_CINT_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTR_SD_SDIO_CINT_Msk instead */
#define SDMMC_NISTR_SD_SDIO_ERRINT_Pos      15                                             /**< (SDMMC_NISTR) Error Interrupt Position */
#define SDMMC_NISTR_SD_SDIO_ERRINT_Msk      (_U_(0x1) << SDMMC_NISTR_SD_SDIO_ERRINT_Pos)   /**< (SDMMC_NISTR) Error Interrupt Mask */
#define SDMMC_NISTR_SD_SDIO_ERRINT          SDMMC_NISTR_SD_SDIO_ERRINT_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTR_SD_SDIO_ERRINT_Msk instead */
#define SDMMC_NISTR_SD_SDIO_MASK            _U_(0x81FF)                                    /**< \deprecated (SDMMC_NISTR_SD_SDIO) Register MASK  (Use SDMMC_NISTR_SD_SDIO_Msk instead)  */
#define SDMMC_NISTR_SD_SDIO_Msk             _U_(0x81FF)                                    /**< (SDMMC_NISTR_SD_SDIO) Register Mask  */

/* E_MMC mode */
#define SDMMC_NISTR_E_MMC_CMDC_Pos          0                                              /**< (SDMMC_NISTR) Command Complete Position */
#define SDMMC_NISTR_E_MMC_CMDC_Msk          (_U_(0x1) << SDMMC_NISTR_E_MMC_CMDC_Pos)       /**< (SDMMC_NISTR) Command Complete Mask */
#define SDMMC_NISTR_E_MMC_CMDC              SDMMC_NISTR_E_MMC_CMDC_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTR_E_MMC_CMDC_Msk instead */
#define SDMMC_NISTR_E_MMC_TRFC_Pos          1                                              /**< (SDMMC_NISTR) Transfer Complete Position */
#define SDMMC_NISTR_E_MMC_TRFC_Msk          (_U_(0x1) << SDMMC_NISTR_E_MMC_TRFC_Pos)       /**< (SDMMC_NISTR) Transfer Complete Mask */
#define SDMMC_NISTR_E_MMC_TRFC              SDMMC_NISTR_E_MMC_TRFC_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTR_E_MMC_TRFC_Msk instead */
#define SDMMC_NISTR_E_MMC_BLKGE_Pos         2                                              /**< (SDMMC_NISTR) Block Gap Event Position */
#define SDMMC_NISTR_E_MMC_BLKGE_Msk         (_U_(0x1) << SDMMC_NISTR_E_MMC_BLKGE_Pos)      /**< (SDMMC_NISTR) Block Gap Event Mask */
#define SDMMC_NISTR_E_MMC_BLKGE             SDMMC_NISTR_E_MMC_BLKGE_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTR_E_MMC_BLKGE_Msk instead */
#define SDMMC_NISTR_E_MMC_DMAINT_Pos        3                                              /**< (SDMMC_NISTR) DMA Interrupt Position */
#define SDMMC_NISTR_E_MMC_DMAINT_Msk        (_U_(0x1) << SDMMC_NISTR_E_MMC_DMAINT_Pos)     /**< (SDMMC_NISTR) DMA Interrupt Mask */
#define SDMMC_NISTR_E_MMC_DMAINT            SDMMC_NISTR_E_MMC_DMAINT_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTR_E_MMC_DMAINT_Msk instead */
#define SDMMC_NISTR_E_MMC_BWRRDY_Pos        4                                              /**< (SDMMC_NISTR) Buffer Write Ready Position */
#define SDMMC_NISTR_E_MMC_BWRRDY_Msk        (_U_(0x1) << SDMMC_NISTR_E_MMC_BWRRDY_Pos)     /**< (SDMMC_NISTR) Buffer Write Ready Mask */
#define SDMMC_NISTR_E_MMC_BWRRDY            SDMMC_NISTR_E_MMC_BWRRDY_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTR_E_MMC_BWRRDY_Msk instead */
#define SDMMC_NISTR_E_MMC_BRDRDY_Pos        5                                              /**< (SDMMC_NISTR) Buffer Read Ready Position */
#define SDMMC_NISTR_E_MMC_BRDRDY_Msk        (_U_(0x1) << SDMMC_NISTR_E_MMC_BRDRDY_Pos)     /**< (SDMMC_NISTR) Buffer Read Ready Mask */
#define SDMMC_NISTR_E_MMC_BRDRDY            SDMMC_NISTR_E_MMC_BRDRDY_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTR_E_MMC_BRDRDY_Msk instead */
#define SDMMC_NISTR_E_MMC_BOOTAR_Pos        14                                             /**< (SDMMC_NISTR) Boot Acknowledge Received Position */
#define SDMMC_NISTR_E_MMC_BOOTAR_Msk        (_U_(0x1) << SDMMC_NISTR_E_MMC_BOOTAR_Pos)     /**< (SDMMC_NISTR) Boot Acknowledge Received Mask */
#define SDMMC_NISTR_E_MMC_BOOTAR            SDMMC_NISTR_E_MMC_BOOTAR_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTR_E_MMC_BOOTAR_Msk instead */
#define SDMMC_NISTR_E_MMC_ERRINT_Pos        15                                             /**< (SDMMC_NISTR) Error Interrupt Position */
#define SDMMC_NISTR_E_MMC_ERRINT_Msk        (_U_(0x1) << SDMMC_NISTR_E_MMC_ERRINT_Pos)     /**< (SDMMC_NISTR) Error Interrupt Mask */
#define SDMMC_NISTR_E_MMC_ERRINT            SDMMC_NISTR_E_MMC_ERRINT_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTR_E_MMC_ERRINT_Msk instead */
#define SDMMC_NISTR_E_MMC_MASK              _U_(0xC03F)                                    /**< \deprecated (SDMMC_NISTR_E_MMC) Register MASK  (Use SDMMC_NISTR_E_MMC_Msk instead)  */
#define SDMMC_NISTR_E_MMC_Msk               _U_(0xC03F)                                    /**< (SDMMC_NISTR_E_MMC) Register Mask  */


/* -------- SDMMC_EISTR : (SDMMC Offset: 0x32) (R/W 16) Error Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct { // SD_SDIO mode
    uint16_t CMDTEO:1;                  /**< bit:      0  Command Timeout Error                    */
    uint16_t CMDCRC:1;                  /**< bit:      1  Command CRC Error                        */
    uint16_t CMDEND:1;                  /**< bit:      2  Command End Bit Error                    */
    uint16_t CMDIDX:1;                  /**< bit:      3  Command Index Error                      */
    uint16_t DATTEO:1;                  /**< bit:      4  Data Timeout Error                       */
    uint16_t DATCRC:1;                  /**< bit:      5  Data CRC error                           */
    uint16_t DATEND:1;                  /**< bit:      6  Data End Bit Error                       */
    uint16_t CURLIM:1;                  /**< bit:      7  Current Limit Error                      */
    uint16_t ACMD:1;                    /**< bit:      8  Auto CMD Error                           */
    uint16_t ADMA:1;                    /**< bit:      9  ADMA Error                               */
    uint16_t :6;                        /**< bit: 10..15  Reserved */
  } SD_SDIO;                                /**< Structure used for SD_SDIO mode access */
  struct { // E_MMC mode
    uint16_t CMDTEO:1;                  /**< bit:      0  Command Timeout Error                    */
    uint16_t CMDCRC:1;                  /**< bit:      1  Command CRC Error                        */
    uint16_t CMDEND:1;                  /**< bit:      2  Command End Bit Error                    */
    uint16_t CMDIDX:1;                  /**< bit:      3  Command Index Error                      */
    uint16_t DATTEO:1;                  /**< bit:      4  Data Timeout error                       */
    uint16_t DATCRC:1;                  /**< bit:      5  Data CRC Error                           */
    uint16_t DATEND:1;                  /**< bit:      6  Data End Bit Error                       */
    uint16_t CURLIM:1;                  /**< bit:      7  Current Limit Error                      */
    uint16_t ACMD:1;                    /**< bit:      8  Auto CMD Error                           */
    uint16_t ADMA:1;                    /**< bit:      9  ADMA Error                               */
    uint16_t :2;                        /**< bit: 10..11  Reserved */
    uint16_t BOOTAE:1;                  /**< bit:     12  Boot Acknowledge Error                   */
    uint16_t :3;                        /**< bit: 13..15  Reserved */
  } E_MMC;                                /**< Structure used for E_MMC mode access */
  uint16_t reg;                         /**< Type used for register access */
} SDMMC_EISTR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_EISTR_OFFSET                  (0x32)                                        /**<  (SDMMC_EISTR) Error Interrupt Status Register  Offset */

#define SDMMC_EISTR_MASK                    _U_(0x00)                                      /**< \deprecated (SDMMC_EISTR) Register MASK  (Use SDMMC_EISTR_Msk instead)  */
#define SDMMC_EISTR_Msk                     _U_(0x00)                                      /**< (SDMMC_EISTR) Register Mask  */

/* SD_SDIO mode */
#define SDMMC_EISTR_SD_SDIO_CMDTEO_Pos      0                                              /**< (SDMMC_EISTR) Command Timeout Error Position */
#define SDMMC_EISTR_SD_SDIO_CMDTEO_Msk      (_U_(0x1) << SDMMC_EISTR_SD_SDIO_CMDTEO_Pos)   /**< (SDMMC_EISTR) Command Timeout Error Mask */
#define SDMMC_EISTR_SD_SDIO_CMDTEO          SDMMC_EISTR_SD_SDIO_CMDTEO_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTR_SD_SDIO_CMDTEO_Msk instead */
#define SDMMC_EISTR_SD_SDIO_CMDCRC_Pos      1                                              /**< (SDMMC_EISTR) Command CRC Error Position */
#define SDMMC_EISTR_SD_SDIO_CMDCRC_Msk      (_U_(0x1) << SDMMC_EISTR_SD_SDIO_CMDCRC_Pos)   /**< (SDMMC_EISTR) Command CRC Error Mask */
#define SDMMC_EISTR_SD_SDIO_CMDCRC          SDMMC_EISTR_SD_SDIO_CMDCRC_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTR_SD_SDIO_CMDCRC_Msk instead */
#define SDMMC_EISTR_SD_SDIO_CMDEND_Pos      2                                              /**< (SDMMC_EISTR) Command End Bit Error Position */
#define SDMMC_EISTR_SD_SDIO_CMDEND_Msk      (_U_(0x1) << SDMMC_EISTR_SD_SDIO_CMDEND_Pos)   /**< (SDMMC_EISTR) Command End Bit Error Mask */
#define SDMMC_EISTR_SD_SDIO_CMDEND          SDMMC_EISTR_SD_SDIO_CMDEND_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTR_SD_SDIO_CMDEND_Msk instead */
#define SDMMC_EISTR_SD_SDIO_CMDIDX_Pos      3                                              /**< (SDMMC_EISTR) Command Index Error Position */
#define SDMMC_EISTR_SD_SDIO_CMDIDX_Msk      (_U_(0x1) << SDMMC_EISTR_SD_SDIO_CMDIDX_Pos)   /**< (SDMMC_EISTR) Command Index Error Mask */
#define SDMMC_EISTR_SD_SDIO_CMDIDX          SDMMC_EISTR_SD_SDIO_CMDIDX_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTR_SD_SDIO_CMDIDX_Msk instead */
#define SDMMC_EISTR_SD_SDIO_DATTEO_Pos      4                                              /**< (SDMMC_EISTR) Data Timeout Error Position */
#define SDMMC_EISTR_SD_SDIO_DATTEO_Msk      (_U_(0x1) << SDMMC_EISTR_SD_SDIO_DATTEO_Pos)   /**< (SDMMC_EISTR) Data Timeout Error Mask */
#define SDMMC_EISTR_SD_SDIO_DATTEO          SDMMC_EISTR_SD_SDIO_DATTEO_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTR_SD_SDIO_DATTEO_Msk instead */
#define SDMMC_EISTR_SD_SDIO_DATCRC_Pos      5                                              /**< (SDMMC_EISTR) Data CRC error Position */
#define SDMMC_EISTR_SD_SDIO_DATCRC_Msk      (_U_(0x1) << SDMMC_EISTR_SD_SDIO_DATCRC_Pos)   /**< (SDMMC_EISTR) Data CRC error Mask */
#define SDMMC_EISTR_SD_SDIO_DATCRC          SDMMC_EISTR_SD_SDIO_DATCRC_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTR_SD_SDIO_DATCRC_Msk instead */
#define SDMMC_EISTR_SD_SDIO_DATEND_Pos      6                                              /**< (SDMMC_EISTR) Data End Bit Error Position */
#define SDMMC_EISTR_SD_SDIO_DATEND_Msk      (_U_(0x1) << SDMMC_EISTR_SD_SDIO_DATEND_Pos)   /**< (SDMMC_EISTR) Data End Bit Error Mask */
#define SDMMC_EISTR_SD_SDIO_DATEND          SDMMC_EISTR_SD_SDIO_DATEND_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTR_SD_SDIO_DATEND_Msk instead */
#define SDMMC_EISTR_SD_SDIO_CURLIM_Pos      7                                              /**< (SDMMC_EISTR) Current Limit Error Position */
#define SDMMC_EISTR_SD_SDIO_CURLIM_Msk      (_U_(0x1) << SDMMC_EISTR_SD_SDIO_CURLIM_Pos)   /**< (SDMMC_EISTR) Current Limit Error Mask */
#define SDMMC_EISTR_SD_SDIO_CURLIM          SDMMC_EISTR_SD_SDIO_CURLIM_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTR_SD_SDIO_CURLIM_Msk instead */
#define SDMMC_EISTR_SD_SDIO_ACMD_Pos        8                                              /**< (SDMMC_EISTR) Auto CMD Error Position */
#define SDMMC_EISTR_SD_SDIO_ACMD_Msk        (_U_(0x1) << SDMMC_EISTR_SD_SDIO_ACMD_Pos)     /**< (SDMMC_EISTR) Auto CMD Error Mask */
#define SDMMC_EISTR_SD_SDIO_ACMD            SDMMC_EISTR_SD_SDIO_ACMD_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTR_SD_SDIO_ACMD_Msk instead */
#define SDMMC_EISTR_SD_SDIO_ADMA_Pos        9                                              /**< (SDMMC_EISTR) ADMA Error Position */
#define SDMMC_EISTR_SD_SDIO_ADMA_Msk        (_U_(0x1) << SDMMC_EISTR_SD_SDIO_ADMA_Pos)     /**< (SDMMC_EISTR) ADMA Error Mask */
#define SDMMC_EISTR_SD_SDIO_ADMA            SDMMC_EISTR_SD_SDIO_ADMA_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTR_SD_SDIO_ADMA_Msk instead */
#define SDMMC_EISTR_SD_SDIO_MASK            _U_(0x3FF)                                     /**< \deprecated (SDMMC_EISTR_SD_SDIO) Register MASK  (Use SDMMC_EISTR_SD_SDIO_Msk instead)  */
#define SDMMC_EISTR_SD_SDIO_Msk             _U_(0x3FF)                                     /**< (SDMMC_EISTR_SD_SDIO) Register Mask  */

/* E_MMC mode */
#define SDMMC_EISTR_E_MMC_CMDTEO_Pos        0                                              /**< (SDMMC_EISTR) Command Timeout Error Position */
#define SDMMC_EISTR_E_MMC_CMDTEO_Msk        (_U_(0x1) << SDMMC_EISTR_E_MMC_CMDTEO_Pos)     /**< (SDMMC_EISTR) Command Timeout Error Mask */
#define SDMMC_EISTR_E_MMC_CMDTEO            SDMMC_EISTR_E_MMC_CMDTEO_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTR_E_MMC_CMDTEO_Msk instead */
#define SDMMC_EISTR_E_MMC_CMDCRC_Pos        1                                              /**< (SDMMC_EISTR) Command CRC Error Position */
#define SDMMC_EISTR_E_MMC_CMDCRC_Msk        (_U_(0x1) << SDMMC_EISTR_E_MMC_CMDCRC_Pos)     /**< (SDMMC_EISTR) Command CRC Error Mask */
#define SDMMC_EISTR_E_MMC_CMDCRC            SDMMC_EISTR_E_MMC_CMDCRC_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTR_E_MMC_CMDCRC_Msk instead */
#define SDMMC_EISTR_E_MMC_CMDEND_Pos        2                                              /**< (SDMMC_EISTR) Command End Bit Error Position */
#define SDMMC_EISTR_E_MMC_CMDEND_Msk        (_U_(0x1) << SDMMC_EISTR_E_MMC_CMDEND_Pos)     /**< (SDMMC_EISTR) Command End Bit Error Mask */
#define SDMMC_EISTR_E_MMC_CMDEND            SDMMC_EISTR_E_MMC_CMDEND_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTR_E_MMC_CMDEND_Msk instead */
#define SDMMC_EISTR_E_MMC_CMDIDX_Pos        3                                              /**< (SDMMC_EISTR) Command Index Error Position */
#define SDMMC_EISTR_E_MMC_CMDIDX_Msk        (_U_(0x1) << SDMMC_EISTR_E_MMC_CMDIDX_Pos)     /**< (SDMMC_EISTR) Command Index Error Mask */
#define SDMMC_EISTR_E_MMC_CMDIDX            SDMMC_EISTR_E_MMC_CMDIDX_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTR_E_MMC_CMDIDX_Msk instead */
#define SDMMC_EISTR_E_MMC_DATTEO_Pos        4                                              /**< (SDMMC_EISTR) Data Timeout error Position */
#define SDMMC_EISTR_E_MMC_DATTEO_Msk        (_U_(0x1) << SDMMC_EISTR_E_MMC_DATTEO_Pos)     /**< (SDMMC_EISTR) Data Timeout error Mask */
#define SDMMC_EISTR_E_MMC_DATTEO            SDMMC_EISTR_E_MMC_DATTEO_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTR_E_MMC_DATTEO_Msk instead */
#define SDMMC_EISTR_E_MMC_DATCRC_Pos        5                                              /**< (SDMMC_EISTR) Data CRC Error Position */
#define SDMMC_EISTR_E_MMC_DATCRC_Msk        (_U_(0x1) << SDMMC_EISTR_E_MMC_DATCRC_Pos)     /**< (SDMMC_EISTR) Data CRC Error Mask */
#define SDMMC_EISTR_E_MMC_DATCRC            SDMMC_EISTR_E_MMC_DATCRC_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTR_E_MMC_DATCRC_Msk instead */
#define SDMMC_EISTR_E_MMC_DATEND_Pos        6                                              /**< (SDMMC_EISTR) Data End Bit Error Position */
#define SDMMC_EISTR_E_MMC_DATEND_Msk        (_U_(0x1) << SDMMC_EISTR_E_MMC_DATEND_Pos)     /**< (SDMMC_EISTR) Data End Bit Error Mask */
#define SDMMC_EISTR_E_MMC_DATEND            SDMMC_EISTR_E_MMC_DATEND_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTR_E_MMC_DATEND_Msk instead */
#define SDMMC_EISTR_E_MMC_CURLIM_Pos        7                                              /**< (SDMMC_EISTR) Current Limit Error Position */
#define SDMMC_EISTR_E_MMC_CURLIM_Msk        (_U_(0x1) << SDMMC_EISTR_E_MMC_CURLIM_Pos)     /**< (SDMMC_EISTR) Current Limit Error Mask */
#define SDMMC_EISTR_E_MMC_CURLIM            SDMMC_EISTR_E_MMC_CURLIM_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTR_E_MMC_CURLIM_Msk instead */
#define SDMMC_EISTR_E_MMC_ACMD_Pos          8                                              /**< (SDMMC_EISTR) Auto CMD Error Position */
#define SDMMC_EISTR_E_MMC_ACMD_Msk          (_U_(0x1) << SDMMC_EISTR_E_MMC_ACMD_Pos)       /**< (SDMMC_EISTR) Auto CMD Error Mask */
#define SDMMC_EISTR_E_MMC_ACMD              SDMMC_EISTR_E_MMC_ACMD_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTR_E_MMC_ACMD_Msk instead */
#define SDMMC_EISTR_E_MMC_ADMA_Pos          9                                              /**< (SDMMC_EISTR) ADMA Error Position */
#define SDMMC_EISTR_E_MMC_ADMA_Msk          (_U_(0x1) << SDMMC_EISTR_E_MMC_ADMA_Pos)       /**< (SDMMC_EISTR) ADMA Error Mask */
#define SDMMC_EISTR_E_MMC_ADMA              SDMMC_EISTR_E_MMC_ADMA_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTR_E_MMC_ADMA_Msk instead */
#define SDMMC_EISTR_E_MMC_BOOTAE_Pos        12                                             /**< (SDMMC_EISTR) Boot Acknowledge Error Position */
#define SDMMC_EISTR_E_MMC_BOOTAE_Msk        (_U_(0x1) << SDMMC_EISTR_E_MMC_BOOTAE_Pos)     /**< (SDMMC_EISTR) Boot Acknowledge Error Mask */
#define SDMMC_EISTR_E_MMC_BOOTAE            SDMMC_EISTR_E_MMC_BOOTAE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTR_E_MMC_BOOTAE_Msk instead */
#define SDMMC_EISTR_E_MMC_MASK              _U_(0x13FF)                                    /**< \deprecated (SDMMC_EISTR_E_MMC) Register MASK  (Use SDMMC_EISTR_E_MMC_Msk instead)  */
#define SDMMC_EISTR_E_MMC_Msk               _U_(0x13FF)                                    /**< (SDMMC_EISTR_E_MMC) Register Mask  */


/* -------- SDMMC_NISTER : (SDMMC Offset: 0x34) (R/W 16) Normal Interrupt Status Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct { // SD_SDIO mode
    uint16_t CMDC:1;                    /**< bit:      0  Command Complete Status Enable           */
    uint16_t TRFC:1;                    /**< bit:      1  Transfer Complete Status Enable          */
    uint16_t BLKGE:1;                   /**< bit:      2  Block Gap Event Status Enable            */
    uint16_t DMAINT:1;                  /**< bit:      3  DMA Interrupt Status Enable              */
    uint16_t BWRRDY:1;                  /**< bit:      4  Buffer Write Ready Status Enable         */
    uint16_t BRDRDY:1;                  /**< bit:      5  Buffer Read Ready Status Enable          */
    uint16_t CINS:1;                    /**< bit:      6  Card Insertion Status Enable             */
    uint16_t CREM:1;                    /**< bit:      7  Card Removal Status Enable               */
    uint16_t CINT:1;                    /**< bit:      8  Card Interrupt Status Enable             */
    uint16_t :7;                        /**< bit:  9..15  Reserved */
  } SD_SDIO;                                /**< Structure used for SD_SDIO mode access */
  struct { // E_MMC mode
    uint16_t CMDC:1;                    /**< bit:      0  Command Complete Status Enable           */
    uint16_t TRFC:1;                    /**< bit:      1  Transfer Complete Status Enable          */
    uint16_t BLKGE:1;                   /**< bit:      2  Block Gap Event Status Enable            */
    uint16_t DMAINT:1;                  /**< bit:      3  DMA Interrupt Status Enable              */
    uint16_t BWRRDY:1;                  /**< bit:      4  Buffer Write Ready Status Enable         */
    uint16_t BRDRDY:1;                  /**< bit:      5  Buffer Read Ready Status Enable          */
    uint16_t :8;                        /**< bit:  6..13  Reserved */
    uint16_t BOOTAR:1;                  /**< bit:     14  Boot Acknowledge Received Status Enable  */
    uint16_t :1;                        /**< bit:     15  Reserved */
  } E_MMC;                                /**< Structure used for E_MMC mode access */
  uint16_t reg;                         /**< Type used for register access */
} SDMMC_NISTER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_NISTER_OFFSET                 (0x34)                                        /**<  (SDMMC_NISTER) Normal Interrupt Status Enable Register  Offset */

#define SDMMC_NISTER_MASK                   _U_(0x00)                                      /**< \deprecated (SDMMC_NISTER) Register MASK  (Use SDMMC_NISTER_Msk instead)  */
#define SDMMC_NISTER_Msk                    _U_(0x00)                                      /**< (SDMMC_NISTER) Register Mask  */

/* SD_SDIO mode */
#define SDMMC_NISTER_SD_SDIO_CMDC_Pos       0                                              /**< (SDMMC_NISTER) Command Complete Status Enable Position */
#define SDMMC_NISTER_SD_SDIO_CMDC_Msk       (_U_(0x1) << SDMMC_NISTER_SD_SDIO_CMDC_Pos)    /**< (SDMMC_NISTER) Command Complete Status Enable Mask */
#define SDMMC_NISTER_SD_SDIO_CMDC           SDMMC_NISTER_SD_SDIO_CMDC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTER_SD_SDIO_CMDC_Msk instead */
#define   SDMMC_NISTER_SD_SDIO_CMDC_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISTER) SD_SDIO The CMDC status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_SD_SDIO_CMDC_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISTER) SD_SDIO The CMDC status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_SD_SDIO_CMDC_MASKED    (SDMMC_NISTER_SD_SDIO_CMDC_MASKED_Val << SDMMC_NISTER_SD_SDIO_CMDC_Pos)  /**< (SDMMC_NISTER) The CMDC status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_SD_SDIO_CMDC_ENABLED   (SDMMC_NISTER_SD_SDIO_CMDC_ENABLED_Val << SDMMC_NISTER_SD_SDIO_CMDC_Pos)  /**< (SDMMC_NISTER) The CMDC status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_SD_SDIO_TRFC_Pos       1                                              /**< (SDMMC_NISTER) Transfer Complete Status Enable Position */
#define SDMMC_NISTER_SD_SDIO_TRFC_Msk       (_U_(0x1) << SDMMC_NISTER_SD_SDIO_TRFC_Pos)    /**< (SDMMC_NISTER) Transfer Complete Status Enable Mask */
#define SDMMC_NISTER_SD_SDIO_TRFC           SDMMC_NISTER_SD_SDIO_TRFC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTER_SD_SDIO_TRFC_Msk instead */
#define   SDMMC_NISTER_SD_SDIO_TRFC_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISTER) SD_SDIO The TRFC status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_SD_SDIO_TRFC_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISTER) SD_SDIO The TRFC status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_SD_SDIO_TRFC_MASKED    (SDMMC_NISTER_SD_SDIO_TRFC_MASKED_Val << SDMMC_NISTER_SD_SDIO_TRFC_Pos)  /**< (SDMMC_NISTER) The TRFC status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_SD_SDIO_TRFC_ENABLED   (SDMMC_NISTER_SD_SDIO_TRFC_ENABLED_Val << SDMMC_NISTER_SD_SDIO_TRFC_Pos)  /**< (SDMMC_NISTER) The TRFC status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_SD_SDIO_BLKGE_Pos      2                                              /**< (SDMMC_NISTER) Block Gap Event Status Enable Position */
#define SDMMC_NISTER_SD_SDIO_BLKGE_Msk      (_U_(0x1) << SDMMC_NISTER_SD_SDIO_BLKGE_Pos)   /**< (SDMMC_NISTER) Block Gap Event Status Enable Mask */
#define SDMMC_NISTER_SD_SDIO_BLKGE          SDMMC_NISTER_SD_SDIO_BLKGE_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTER_SD_SDIO_BLKGE_Msk instead */
#define   SDMMC_NISTER_SD_SDIO_BLKGE_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISTER) SD_SDIO The BLKGE status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_SD_SDIO_BLKGE_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISTER) SD_SDIO The BLKGE status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_SD_SDIO_BLKGE_MASKED   (SDMMC_NISTER_SD_SDIO_BLKGE_MASKED_Val << SDMMC_NISTER_SD_SDIO_BLKGE_Pos)  /**< (SDMMC_NISTER) The BLKGE status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_SD_SDIO_BLKGE_ENABLED  (SDMMC_NISTER_SD_SDIO_BLKGE_ENABLED_Val << SDMMC_NISTER_SD_SDIO_BLKGE_Pos)  /**< (SDMMC_NISTER) The BLKGE status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_SD_SDIO_DMAINT_Pos     3                                              /**< (SDMMC_NISTER) DMA Interrupt Status Enable Position */
#define SDMMC_NISTER_SD_SDIO_DMAINT_Msk     (_U_(0x1) << SDMMC_NISTER_SD_SDIO_DMAINT_Pos)  /**< (SDMMC_NISTER) DMA Interrupt Status Enable Mask */
#define SDMMC_NISTER_SD_SDIO_DMAINT         SDMMC_NISTER_SD_SDIO_DMAINT_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTER_SD_SDIO_DMAINT_Msk instead */
#define   SDMMC_NISTER_SD_SDIO_DMAINT_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISTER) SD_SDIO The DMAINT status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_SD_SDIO_DMAINT_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISTER) SD_SDIO The DMAINT status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_SD_SDIO_DMAINT_MASKED  (SDMMC_NISTER_SD_SDIO_DMAINT_MASKED_Val << SDMMC_NISTER_SD_SDIO_DMAINT_Pos)  /**< (SDMMC_NISTER) The DMAINT status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_SD_SDIO_DMAINT_ENABLED (SDMMC_NISTER_SD_SDIO_DMAINT_ENABLED_Val << SDMMC_NISTER_SD_SDIO_DMAINT_Pos)  /**< (SDMMC_NISTER) The DMAINT status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_SD_SDIO_BWRRDY_Pos     4                                              /**< (SDMMC_NISTER) Buffer Write Ready Status Enable Position */
#define SDMMC_NISTER_SD_SDIO_BWRRDY_Msk     (_U_(0x1) << SDMMC_NISTER_SD_SDIO_BWRRDY_Pos)  /**< (SDMMC_NISTER) Buffer Write Ready Status Enable Mask */
#define SDMMC_NISTER_SD_SDIO_BWRRDY         SDMMC_NISTER_SD_SDIO_BWRRDY_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTER_SD_SDIO_BWRRDY_Msk instead */
#define   SDMMC_NISTER_SD_SDIO_BWRRDY_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISTER) SD_SDIO The BWRRDY status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_SD_SDIO_BWRRDY_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISTER) SD_SDIO The BWRRDY status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_SD_SDIO_BWRRDY_MASKED  (SDMMC_NISTER_SD_SDIO_BWRRDY_MASKED_Val << SDMMC_NISTER_SD_SDIO_BWRRDY_Pos)  /**< (SDMMC_NISTER) The BWRRDY status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_SD_SDIO_BWRRDY_ENABLED (SDMMC_NISTER_SD_SDIO_BWRRDY_ENABLED_Val << SDMMC_NISTER_SD_SDIO_BWRRDY_Pos)  /**< (SDMMC_NISTER) The BWRRDY status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_SD_SDIO_BRDRDY_Pos     5                                              /**< (SDMMC_NISTER) Buffer Read Ready Status Enable Position */
#define SDMMC_NISTER_SD_SDIO_BRDRDY_Msk     (_U_(0x1) << SDMMC_NISTER_SD_SDIO_BRDRDY_Pos)  /**< (SDMMC_NISTER) Buffer Read Ready Status Enable Mask */
#define SDMMC_NISTER_SD_SDIO_BRDRDY         SDMMC_NISTER_SD_SDIO_BRDRDY_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTER_SD_SDIO_BRDRDY_Msk instead */
#define   SDMMC_NISTER_SD_SDIO_BRDRDY_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISTER) SD_SDIO The BRDRDY status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_SD_SDIO_BRDRDY_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISTER) SD_SDIO The BRDRDY status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_SD_SDIO_BRDRDY_MASKED  (SDMMC_NISTER_SD_SDIO_BRDRDY_MASKED_Val << SDMMC_NISTER_SD_SDIO_BRDRDY_Pos)  /**< (SDMMC_NISTER) The BRDRDY status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_SD_SDIO_BRDRDY_ENABLED (SDMMC_NISTER_SD_SDIO_BRDRDY_ENABLED_Val << SDMMC_NISTER_SD_SDIO_BRDRDY_Pos)  /**< (SDMMC_NISTER) The BRDRDY status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_SD_SDIO_CINS_Pos       6                                              /**< (SDMMC_NISTER) Card Insertion Status Enable Position */
#define SDMMC_NISTER_SD_SDIO_CINS_Msk       (_U_(0x1) << SDMMC_NISTER_SD_SDIO_CINS_Pos)    /**< (SDMMC_NISTER) Card Insertion Status Enable Mask */
#define SDMMC_NISTER_SD_SDIO_CINS           SDMMC_NISTER_SD_SDIO_CINS_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTER_SD_SDIO_CINS_Msk instead */
#define   SDMMC_NISTER_SD_SDIO_CINS_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISTER) SD_SDIO The CINS status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_SD_SDIO_CINS_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISTER) SD_SDIO The CINS status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_SD_SDIO_CINS_MASKED    (SDMMC_NISTER_SD_SDIO_CINS_MASKED_Val << SDMMC_NISTER_SD_SDIO_CINS_Pos)  /**< (SDMMC_NISTER) The CINS status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_SD_SDIO_CINS_ENABLED   (SDMMC_NISTER_SD_SDIO_CINS_ENABLED_Val << SDMMC_NISTER_SD_SDIO_CINS_Pos)  /**< (SDMMC_NISTER) The CINS status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_SD_SDIO_CREM_Pos       7                                              /**< (SDMMC_NISTER) Card Removal Status Enable Position */
#define SDMMC_NISTER_SD_SDIO_CREM_Msk       (_U_(0x1) << SDMMC_NISTER_SD_SDIO_CREM_Pos)    /**< (SDMMC_NISTER) Card Removal Status Enable Mask */
#define SDMMC_NISTER_SD_SDIO_CREM           SDMMC_NISTER_SD_SDIO_CREM_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTER_SD_SDIO_CREM_Msk instead */
#define   SDMMC_NISTER_SD_SDIO_CREM_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISTER) SD_SDIO The CREM status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_SD_SDIO_CREM_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISTER) SD_SDIO The CREM status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_SD_SDIO_CREM_MASKED    (SDMMC_NISTER_SD_SDIO_CREM_MASKED_Val << SDMMC_NISTER_SD_SDIO_CREM_Pos)  /**< (SDMMC_NISTER) The CREM status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_SD_SDIO_CREM_ENABLED   (SDMMC_NISTER_SD_SDIO_CREM_ENABLED_Val << SDMMC_NISTER_SD_SDIO_CREM_Pos)  /**< (SDMMC_NISTER) The CREM status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_SD_SDIO_CINT_Pos       8                                              /**< (SDMMC_NISTER) Card Interrupt Status Enable Position */
#define SDMMC_NISTER_SD_SDIO_CINT_Msk       (_U_(0x1) << SDMMC_NISTER_SD_SDIO_CINT_Pos)    /**< (SDMMC_NISTER) Card Interrupt Status Enable Mask */
#define SDMMC_NISTER_SD_SDIO_CINT           SDMMC_NISTER_SD_SDIO_CINT_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTER_SD_SDIO_CINT_Msk instead */
#define   SDMMC_NISTER_SD_SDIO_CINT_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISTER) SD_SDIO The CINT status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_SD_SDIO_CINT_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISTER) SD_SDIO The CINT status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_SD_SDIO_CINT_MASKED    (SDMMC_NISTER_SD_SDIO_CINT_MASKED_Val << SDMMC_NISTER_SD_SDIO_CINT_Pos)  /**< (SDMMC_NISTER) The CINT status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_SD_SDIO_CINT_ENABLED   (SDMMC_NISTER_SD_SDIO_CINT_ENABLED_Val << SDMMC_NISTER_SD_SDIO_CINT_Pos)  /**< (SDMMC_NISTER) The CINT status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_SD_SDIO_MASK           _U_(0x1FF)                                     /**< \deprecated (SDMMC_NISTER_SD_SDIO) Register MASK  (Use SDMMC_NISTER_SD_SDIO_Msk instead)  */
#define SDMMC_NISTER_SD_SDIO_Msk            _U_(0x1FF)                                     /**< (SDMMC_NISTER_SD_SDIO) Register Mask  */

/* E_MMC mode */
#define SDMMC_NISTER_E_MMC_CMDC_Pos         0                                              /**< (SDMMC_NISTER) Command Complete Status Enable Position */
#define SDMMC_NISTER_E_MMC_CMDC_Msk         (_U_(0x1) << SDMMC_NISTER_E_MMC_CMDC_Pos)      /**< (SDMMC_NISTER) Command Complete Status Enable Mask */
#define SDMMC_NISTER_E_MMC_CMDC             SDMMC_NISTER_E_MMC_CMDC_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTER_E_MMC_CMDC_Msk instead */
#define   SDMMC_NISTER_E_MMC_CMDC_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISTER) E_MMC The CMDC status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_E_MMC_CMDC_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISTER) E_MMC The CMDC status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_E_MMC_CMDC_MASKED      (SDMMC_NISTER_E_MMC_CMDC_MASKED_Val << SDMMC_NISTER_E_MMC_CMDC_Pos)  /**< (SDMMC_NISTER) The CMDC status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_E_MMC_CMDC_ENABLED     (SDMMC_NISTER_E_MMC_CMDC_ENABLED_Val << SDMMC_NISTER_E_MMC_CMDC_Pos)  /**< (SDMMC_NISTER) The CMDC status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_E_MMC_TRFC_Pos         1                                              /**< (SDMMC_NISTER) Transfer Complete Status Enable Position */
#define SDMMC_NISTER_E_MMC_TRFC_Msk         (_U_(0x1) << SDMMC_NISTER_E_MMC_TRFC_Pos)      /**< (SDMMC_NISTER) Transfer Complete Status Enable Mask */
#define SDMMC_NISTER_E_MMC_TRFC             SDMMC_NISTER_E_MMC_TRFC_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTER_E_MMC_TRFC_Msk instead */
#define   SDMMC_NISTER_E_MMC_TRFC_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISTER) E_MMC The TRFC status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_E_MMC_TRFC_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISTER) E_MMC The TRFC status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_E_MMC_TRFC_MASKED      (SDMMC_NISTER_E_MMC_TRFC_MASKED_Val << SDMMC_NISTER_E_MMC_TRFC_Pos)  /**< (SDMMC_NISTER) The TRFC status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_E_MMC_TRFC_ENABLED     (SDMMC_NISTER_E_MMC_TRFC_ENABLED_Val << SDMMC_NISTER_E_MMC_TRFC_Pos)  /**< (SDMMC_NISTER) The TRFC status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_E_MMC_BLKGE_Pos        2                                              /**< (SDMMC_NISTER) Block Gap Event Status Enable Position */
#define SDMMC_NISTER_E_MMC_BLKGE_Msk        (_U_(0x1) << SDMMC_NISTER_E_MMC_BLKGE_Pos)     /**< (SDMMC_NISTER) Block Gap Event Status Enable Mask */
#define SDMMC_NISTER_E_MMC_BLKGE            SDMMC_NISTER_E_MMC_BLKGE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTER_E_MMC_BLKGE_Msk instead */
#define   SDMMC_NISTER_E_MMC_BLKGE_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISTER) E_MMC The BLKGE status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_E_MMC_BLKGE_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISTER) E_MMC The BLKGE status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_E_MMC_BLKGE_MASKED     (SDMMC_NISTER_E_MMC_BLKGE_MASKED_Val << SDMMC_NISTER_E_MMC_BLKGE_Pos)  /**< (SDMMC_NISTER) The BLKGE status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_E_MMC_BLKGE_ENABLED    (SDMMC_NISTER_E_MMC_BLKGE_ENABLED_Val << SDMMC_NISTER_E_MMC_BLKGE_Pos)  /**< (SDMMC_NISTER) The BLKGE status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_E_MMC_DMAINT_Pos       3                                              /**< (SDMMC_NISTER) DMA Interrupt Status Enable Position */
#define SDMMC_NISTER_E_MMC_DMAINT_Msk       (_U_(0x1) << SDMMC_NISTER_E_MMC_DMAINT_Pos)    /**< (SDMMC_NISTER) DMA Interrupt Status Enable Mask */
#define SDMMC_NISTER_E_MMC_DMAINT           SDMMC_NISTER_E_MMC_DMAINT_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTER_E_MMC_DMAINT_Msk instead */
#define   SDMMC_NISTER_E_MMC_DMAINT_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISTER) E_MMC The DMAINT status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_E_MMC_DMAINT_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISTER) E_MMC The DMAINT status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_E_MMC_DMAINT_MASKED    (SDMMC_NISTER_E_MMC_DMAINT_MASKED_Val << SDMMC_NISTER_E_MMC_DMAINT_Pos)  /**< (SDMMC_NISTER) The DMAINT status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_E_MMC_DMAINT_ENABLED   (SDMMC_NISTER_E_MMC_DMAINT_ENABLED_Val << SDMMC_NISTER_E_MMC_DMAINT_Pos)  /**< (SDMMC_NISTER) The DMAINT status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_E_MMC_BWRRDY_Pos       4                                              /**< (SDMMC_NISTER) Buffer Write Ready Status Enable Position */
#define SDMMC_NISTER_E_MMC_BWRRDY_Msk       (_U_(0x1) << SDMMC_NISTER_E_MMC_BWRRDY_Pos)    /**< (SDMMC_NISTER) Buffer Write Ready Status Enable Mask */
#define SDMMC_NISTER_E_MMC_BWRRDY           SDMMC_NISTER_E_MMC_BWRRDY_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTER_E_MMC_BWRRDY_Msk instead */
#define   SDMMC_NISTER_E_MMC_BWRRDY_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISTER) E_MMC The BWRRDY status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_E_MMC_BWRRDY_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISTER) E_MMC The BWRRDY status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_E_MMC_BWRRDY_MASKED    (SDMMC_NISTER_E_MMC_BWRRDY_MASKED_Val << SDMMC_NISTER_E_MMC_BWRRDY_Pos)  /**< (SDMMC_NISTER) The BWRRDY status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_E_MMC_BWRRDY_ENABLED   (SDMMC_NISTER_E_MMC_BWRRDY_ENABLED_Val << SDMMC_NISTER_E_MMC_BWRRDY_Pos)  /**< (SDMMC_NISTER) The BWRRDY status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_E_MMC_BRDRDY_Pos       5                                              /**< (SDMMC_NISTER) Buffer Read Ready Status Enable Position */
#define SDMMC_NISTER_E_MMC_BRDRDY_Msk       (_U_(0x1) << SDMMC_NISTER_E_MMC_BRDRDY_Pos)    /**< (SDMMC_NISTER) Buffer Read Ready Status Enable Mask */
#define SDMMC_NISTER_E_MMC_BRDRDY           SDMMC_NISTER_E_MMC_BRDRDY_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTER_E_MMC_BRDRDY_Msk instead */
#define   SDMMC_NISTER_E_MMC_BRDRDY_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISTER) E_MMC The BRDRDY status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_E_MMC_BRDRDY_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISTER) E_MMC The BRDRDY status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_E_MMC_BRDRDY_MASKED    (SDMMC_NISTER_E_MMC_BRDRDY_MASKED_Val << SDMMC_NISTER_E_MMC_BRDRDY_Pos)  /**< (SDMMC_NISTER) The BRDRDY status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_E_MMC_BRDRDY_ENABLED   (SDMMC_NISTER_E_MMC_BRDRDY_ENABLED_Val << SDMMC_NISTER_E_MMC_BRDRDY_Pos)  /**< (SDMMC_NISTER) The BRDRDY status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_E_MMC_BOOTAR_Pos       14                                             /**< (SDMMC_NISTER) Boot Acknowledge Received Status Enable Position */
#define SDMMC_NISTER_E_MMC_BOOTAR_Msk       (_U_(0x1) << SDMMC_NISTER_E_MMC_BOOTAR_Pos)    /**< (SDMMC_NISTER) Boot Acknowledge Received Status Enable Mask */
#define SDMMC_NISTER_E_MMC_BOOTAR           SDMMC_NISTER_E_MMC_BOOTAR_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISTER_E_MMC_BOOTAR_Msk instead */
#define   SDMMC_NISTER_E_MMC_BOOTAR_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISTER) E_MMC The BOOTAR status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_E_MMC_BOOTAR_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISTER) E_MMC The BOOTAR status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_E_MMC_BOOTAR_MASKED    (SDMMC_NISTER_E_MMC_BOOTAR_MASKED_Val << SDMMC_NISTER_E_MMC_BOOTAR_Pos)  /**< (SDMMC_NISTER) The BOOTAR status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_E_MMC_BOOTAR_ENABLED   (SDMMC_NISTER_E_MMC_BOOTAR_ENABLED_Val << SDMMC_NISTER_E_MMC_BOOTAR_Pos)  /**< (SDMMC_NISTER) The BOOTAR status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_E_MMC_MASK             _U_(0x403F)                                    /**< \deprecated (SDMMC_NISTER_E_MMC) Register MASK  (Use SDMMC_NISTER_E_MMC_Msk instead)  */
#define SDMMC_NISTER_E_MMC_Msk              _U_(0x403F)                                    /**< (SDMMC_NISTER_E_MMC) Register Mask  */


/* -------- SDMMC_EISTER : (SDMMC Offset: 0x36) (R/W 16) Error Interrupt Status Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct { // SD_SDIO mode
    uint16_t CMDTEO:1;                  /**< bit:      0  Command Timeout Error Status Enable      */
    uint16_t CMDCRC:1;                  /**< bit:      1  Command CRC Error Status Enable          */
    uint16_t CMDEND:1;                  /**< bit:      2  Command End Bit Error Status Enable      */
    uint16_t CMDIDX:1;                  /**< bit:      3  Command Index Error Status Enable        */
    uint16_t DATTEO:1;                  /**< bit:      4  Data Timeout Error Status Enable         */
    uint16_t DATCRC:1;                  /**< bit:      5  Data CRC Error Status Enable             */
    uint16_t DATEND:1;                  /**< bit:      6  Data End Bit Error Status Enable         */
    uint16_t CURLIM:1;                  /**< bit:      7  Current Limit Error Status Enable        */
    uint16_t ACMD:1;                    /**< bit:      8  Auto CMD Error Status Enable             */
    uint16_t ADMA:1;                    /**< bit:      9  ADMA Error Status Enable                 */
    uint16_t :6;                        /**< bit: 10..15  Reserved */
  } SD_SDIO;                                /**< Structure used for SD_SDIO mode access */
  struct { // E_MMC mode
    uint16_t CMDTEO:1;                  /**< bit:      0  Command Timeout Error Status Enable      */
    uint16_t CMDCRC:1;                  /**< bit:      1  Command CRC Error Status Enable          */
    uint16_t CMDEND:1;                  /**< bit:      2  Command End Bit Error Status Enable      */
    uint16_t CMDIDX:1;                  /**< bit:      3  Command Index Error Status Enable        */
    uint16_t DATTEO:1;                  /**< bit:      4  Data Timeout Error Status Enable         */
    uint16_t DATCRC:1;                  /**< bit:      5  Data CRC Error Status Enable             */
    uint16_t DATEND:1;                  /**< bit:      6  Data End Bit Error Status Enable         */
    uint16_t CURLIM:1;                  /**< bit:      7  Current Limit Error Status Enable        */
    uint16_t ACMD:1;                    /**< bit:      8  Auto CMD Error Status Enable             */
    uint16_t ADMA:1;                    /**< bit:      9  ADMA Error Status Enable                 */
    uint16_t :2;                        /**< bit: 10..11  Reserved */
    uint16_t BOOTAE:1;                  /**< bit:     12  Boot Acknowledge Error Status Enable     */
    uint16_t :3;                        /**< bit: 13..15  Reserved */
  } E_MMC;                                /**< Structure used for E_MMC mode access */
  uint16_t reg;                         /**< Type used for register access */
} SDMMC_EISTER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_EISTER_OFFSET                 (0x36)                                        /**<  (SDMMC_EISTER) Error Interrupt Status Enable Register  Offset */

#define SDMMC_EISTER_MASK                   _U_(0x00)                                      /**< \deprecated (SDMMC_EISTER) Register MASK  (Use SDMMC_EISTER_Msk instead)  */
#define SDMMC_EISTER_Msk                    _U_(0x00)                                      /**< (SDMMC_EISTER) Register Mask  */

/* SD_SDIO mode */
#define SDMMC_EISTER_SD_SDIO_CMDTEO_Pos     0                                              /**< (SDMMC_EISTER) Command Timeout Error Status Enable Position */
#define SDMMC_EISTER_SD_SDIO_CMDTEO_Msk     (_U_(0x1) << SDMMC_EISTER_SD_SDIO_CMDTEO_Pos)  /**< (SDMMC_EISTER) Command Timeout Error Status Enable Mask */
#define SDMMC_EISTER_SD_SDIO_CMDTEO         SDMMC_EISTER_SD_SDIO_CMDTEO_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTER_SD_SDIO_CMDTEO_Msk instead */
#define   SDMMC_EISTER_SD_SDIO_CMDTEO_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISTER) SD_SDIO The CMDTEO status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_SD_SDIO_CMDTEO_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISTER) SD_SDIO The CMDTEO status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_SD_SDIO_CMDTEO_MASKED  (SDMMC_EISTER_SD_SDIO_CMDTEO_MASKED_Val << SDMMC_EISTER_SD_SDIO_CMDTEO_Pos)  /**< (SDMMC_EISTER) The CMDTEO status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_SD_SDIO_CMDTEO_ENABLED (SDMMC_EISTER_SD_SDIO_CMDTEO_ENABLED_Val << SDMMC_EISTER_SD_SDIO_CMDTEO_Pos)  /**< (SDMMC_EISTER) The CMDTEO status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_SD_SDIO_CMDCRC_Pos     1                                              /**< (SDMMC_EISTER) Command CRC Error Status Enable Position */
#define SDMMC_EISTER_SD_SDIO_CMDCRC_Msk     (_U_(0x1) << SDMMC_EISTER_SD_SDIO_CMDCRC_Pos)  /**< (SDMMC_EISTER) Command CRC Error Status Enable Mask */
#define SDMMC_EISTER_SD_SDIO_CMDCRC         SDMMC_EISTER_SD_SDIO_CMDCRC_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTER_SD_SDIO_CMDCRC_Msk instead */
#define   SDMMC_EISTER_SD_SDIO_CMDCRC_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISTER) SD_SDIO The CMDCRC status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_SD_SDIO_CMDCRC_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISTER) SD_SDIO The CMDCRC status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_SD_SDIO_CMDCRC_MASKED  (SDMMC_EISTER_SD_SDIO_CMDCRC_MASKED_Val << SDMMC_EISTER_SD_SDIO_CMDCRC_Pos)  /**< (SDMMC_EISTER) The CMDCRC status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_SD_SDIO_CMDCRC_ENABLED (SDMMC_EISTER_SD_SDIO_CMDCRC_ENABLED_Val << SDMMC_EISTER_SD_SDIO_CMDCRC_Pos)  /**< (SDMMC_EISTER) The CMDCRC status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_SD_SDIO_CMDEND_Pos     2                                              /**< (SDMMC_EISTER) Command End Bit Error Status Enable Position */
#define SDMMC_EISTER_SD_SDIO_CMDEND_Msk     (_U_(0x1) << SDMMC_EISTER_SD_SDIO_CMDEND_Pos)  /**< (SDMMC_EISTER) Command End Bit Error Status Enable Mask */
#define SDMMC_EISTER_SD_SDIO_CMDEND         SDMMC_EISTER_SD_SDIO_CMDEND_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTER_SD_SDIO_CMDEND_Msk instead */
#define   SDMMC_EISTER_SD_SDIO_CMDEND_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISTER) SD_SDIO The CMDEND status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_SD_SDIO_CMDEND_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISTER) SD_SDIO The CMDEND status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_SD_SDIO_CMDEND_MASKED  (SDMMC_EISTER_SD_SDIO_CMDEND_MASKED_Val << SDMMC_EISTER_SD_SDIO_CMDEND_Pos)  /**< (SDMMC_EISTER) The CMDEND status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_SD_SDIO_CMDEND_ENABLED (SDMMC_EISTER_SD_SDIO_CMDEND_ENABLED_Val << SDMMC_EISTER_SD_SDIO_CMDEND_Pos)  /**< (SDMMC_EISTER) The CMDEND status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_SD_SDIO_CMDIDX_Pos     3                                              /**< (SDMMC_EISTER) Command Index Error Status Enable Position */
#define SDMMC_EISTER_SD_SDIO_CMDIDX_Msk     (_U_(0x1) << SDMMC_EISTER_SD_SDIO_CMDIDX_Pos)  /**< (SDMMC_EISTER) Command Index Error Status Enable Mask */
#define SDMMC_EISTER_SD_SDIO_CMDIDX         SDMMC_EISTER_SD_SDIO_CMDIDX_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTER_SD_SDIO_CMDIDX_Msk instead */
#define   SDMMC_EISTER_SD_SDIO_CMDIDX_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISTER) SD_SDIO The CMDIDX status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_SD_SDIO_CMDIDX_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISTER) SD_SDIO The CMDIDX status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_SD_SDIO_CMDIDX_MASKED  (SDMMC_EISTER_SD_SDIO_CMDIDX_MASKED_Val << SDMMC_EISTER_SD_SDIO_CMDIDX_Pos)  /**< (SDMMC_EISTER) The CMDIDX status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_SD_SDIO_CMDIDX_ENABLED (SDMMC_EISTER_SD_SDIO_CMDIDX_ENABLED_Val << SDMMC_EISTER_SD_SDIO_CMDIDX_Pos)  /**< (SDMMC_EISTER) The CMDIDX status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_SD_SDIO_DATTEO_Pos     4                                              /**< (SDMMC_EISTER) Data Timeout Error Status Enable Position */
#define SDMMC_EISTER_SD_SDIO_DATTEO_Msk     (_U_(0x1) << SDMMC_EISTER_SD_SDIO_DATTEO_Pos)  /**< (SDMMC_EISTER) Data Timeout Error Status Enable Mask */
#define SDMMC_EISTER_SD_SDIO_DATTEO         SDMMC_EISTER_SD_SDIO_DATTEO_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTER_SD_SDIO_DATTEO_Msk instead */
#define   SDMMC_EISTER_SD_SDIO_DATTEO_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISTER) SD_SDIO The DATTEO status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_SD_SDIO_DATTEO_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISTER) SD_SDIO The DATTEO status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_SD_SDIO_DATTEO_MASKED  (SDMMC_EISTER_SD_SDIO_DATTEO_MASKED_Val << SDMMC_EISTER_SD_SDIO_DATTEO_Pos)  /**< (SDMMC_EISTER) The DATTEO status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_SD_SDIO_DATTEO_ENABLED (SDMMC_EISTER_SD_SDIO_DATTEO_ENABLED_Val << SDMMC_EISTER_SD_SDIO_DATTEO_Pos)  /**< (SDMMC_EISTER) The DATTEO status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_SD_SDIO_DATCRC_Pos     5                                              /**< (SDMMC_EISTER) Data CRC Error Status Enable Position */
#define SDMMC_EISTER_SD_SDIO_DATCRC_Msk     (_U_(0x1) << SDMMC_EISTER_SD_SDIO_DATCRC_Pos)  /**< (SDMMC_EISTER) Data CRC Error Status Enable Mask */
#define SDMMC_EISTER_SD_SDIO_DATCRC         SDMMC_EISTER_SD_SDIO_DATCRC_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTER_SD_SDIO_DATCRC_Msk instead */
#define   SDMMC_EISTER_SD_SDIO_DATCRC_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISTER) SD_SDIO The DATCRC status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_SD_SDIO_DATCRC_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISTER) SD_SDIO The DATCRC status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_SD_SDIO_DATCRC_MASKED  (SDMMC_EISTER_SD_SDIO_DATCRC_MASKED_Val << SDMMC_EISTER_SD_SDIO_DATCRC_Pos)  /**< (SDMMC_EISTER) The DATCRC status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_SD_SDIO_DATCRC_ENABLED (SDMMC_EISTER_SD_SDIO_DATCRC_ENABLED_Val << SDMMC_EISTER_SD_SDIO_DATCRC_Pos)  /**< (SDMMC_EISTER) The DATCRC status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_SD_SDIO_DATEND_Pos     6                                              /**< (SDMMC_EISTER) Data End Bit Error Status Enable Position */
#define SDMMC_EISTER_SD_SDIO_DATEND_Msk     (_U_(0x1) << SDMMC_EISTER_SD_SDIO_DATEND_Pos)  /**< (SDMMC_EISTER) Data End Bit Error Status Enable Mask */
#define SDMMC_EISTER_SD_SDIO_DATEND         SDMMC_EISTER_SD_SDIO_DATEND_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTER_SD_SDIO_DATEND_Msk instead */
#define   SDMMC_EISTER_SD_SDIO_DATEND_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISTER) SD_SDIO The DATEND status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_SD_SDIO_DATEND_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISTER) SD_SDIO The DATEND status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_SD_SDIO_DATEND_MASKED  (SDMMC_EISTER_SD_SDIO_DATEND_MASKED_Val << SDMMC_EISTER_SD_SDIO_DATEND_Pos)  /**< (SDMMC_EISTER) The DATEND status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_SD_SDIO_DATEND_ENABLED (SDMMC_EISTER_SD_SDIO_DATEND_ENABLED_Val << SDMMC_EISTER_SD_SDIO_DATEND_Pos)  /**< (SDMMC_EISTER) The DATEND status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_SD_SDIO_CURLIM_Pos     7                                              /**< (SDMMC_EISTER) Current Limit Error Status Enable Position */
#define SDMMC_EISTER_SD_SDIO_CURLIM_Msk     (_U_(0x1) << SDMMC_EISTER_SD_SDIO_CURLIM_Pos)  /**< (SDMMC_EISTER) Current Limit Error Status Enable Mask */
#define SDMMC_EISTER_SD_SDIO_CURLIM         SDMMC_EISTER_SD_SDIO_CURLIM_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTER_SD_SDIO_CURLIM_Msk instead */
#define   SDMMC_EISTER_SD_SDIO_CURLIM_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISTER) SD_SDIO The CURLIM status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_SD_SDIO_CURLIM_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISTER) SD_SDIO The CURLIM status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_SD_SDIO_CURLIM_MASKED  (SDMMC_EISTER_SD_SDIO_CURLIM_MASKED_Val << SDMMC_EISTER_SD_SDIO_CURLIM_Pos)  /**< (SDMMC_EISTER) The CURLIM status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_SD_SDIO_CURLIM_ENABLED (SDMMC_EISTER_SD_SDIO_CURLIM_ENABLED_Val << SDMMC_EISTER_SD_SDIO_CURLIM_Pos)  /**< (SDMMC_EISTER) The CURLIM status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_SD_SDIO_ACMD_Pos       8                                              /**< (SDMMC_EISTER) Auto CMD Error Status Enable Position */
#define SDMMC_EISTER_SD_SDIO_ACMD_Msk       (_U_(0x1) << SDMMC_EISTER_SD_SDIO_ACMD_Pos)    /**< (SDMMC_EISTER) Auto CMD Error Status Enable Mask */
#define SDMMC_EISTER_SD_SDIO_ACMD           SDMMC_EISTER_SD_SDIO_ACMD_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTER_SD_SDIO_ACMD_Msk instead */
#define   SDMMC_EISTER_SD_SDIO_ACMD_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISTER) SD_SDIO The ACMD status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_SD_SDIO_ACMD_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISTER) SD_SDIO The ACMD status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_SD_SDIO_ACMD_MASKED    (SDMMC_EISTER_SD_SDIO_ACMD_MASKED_Val << SDMMC_EISTER_SD_SDIO_ACMD_Pos)  /**< (SDMMC_EISTER) The ACMD status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_SD_SDIO_ACMD_ENABLED   (SDMMC_EISTER_SD_SDIO_ACMD_ENABLED_Val << SDMMC_EISTER_SD_SDIO_ACMD_Pos)  /**< (SDMMC_EISTER) The ACMD status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_SD_SDIO_ADMA_Pos       9                                              /**< (SDMMC_EISTER) ADMA Error Status Enable Position */
#define SDMMC_EISTER_SD_SDIO_ADMA_Msk       (_U_(0x1) << SDMMC_EISTER_SD_SDIO_ADMA_Pos)    /**< (SDMMC_EISTER) ADMA Error Status Enable Mask */
#define SDMMC_EISTER_SD_SDIO_ADMA           SDMMC_EISTER_SD_SDIO_ADMA_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTER_SD_SDIO_ADMA_Msk instead */
#define   SDMMC_EISTER_SD_SDIO_ADMA_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISTER) SD_SDIO The ADMA status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_SD_SDIO_ADMA_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISTER) SD_SDIO The ADMA status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_SD_SDIO_ADMA_MASKED    (SDMMC_EISTER_SD_SDIO_ADMA_MASKED_Val << SDMMC_EISTER_SD_SDIO_ADMA_Pos)  /**< (SDMMC_EISTER) The ADMA status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_SD_SDIO_ADMA_ENABLED   (SDMMC_EISTER_SD_SDIO_ADMA_ENABLED_Val << SDMMC_EISTER_SD_SDIO_ADMA_Pos)  /**< (SDMMC_EISTER) The ADMA status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_SD_SDIO_MASK           _U_(0x3FF)                                     /**< \deprecated (SDMMC_EISTER_SD_SDIO) Register MASK  (Use SDMMC_EISTER_SD_SDIO_Msk instead)  */
#define SDMMC_EISTER_SD_SDIO_Msk            _U_(0x3FF)                                     /**< (SDMMC_EISTER_SD_SDIO) Register Mask  */

/* E_MMC mode */
#define SDMMC_EISTER_E_MMC_CMDTEO_Pos       0                                              /**< (SDMMC_EISTER) Command Timeout Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_CMDTEO_Msk       (_U_(0x1) << SDMMC_EISTER_E_MMC_CMDTEO_Pos)    /**< (SDMMC_EISTER) Command Timeout Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_CMDTEO           SDMMC_EISTER_E_MMC_CMDTEO_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTER_E_MMC_CMDTEO_Msk instead */
#define   SDMMC_EISTER_E_MMC_CMDTEO_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISTER) E_MMC The CMDTEO status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_CMDTEO_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISTER) E_MMC The CMDTEO status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_CMDTEO_MASKED    (SDMMC_EISTER_E_MMC_CMDTEO_MASKED_Val << SDMMC_EISTER_E_MMC_CMDTEO_Pos)  /**< (SDMMC_EISTER) The CMDTEO status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_CMDTEO_ENABLED   (SDMMC_EISTER_E_MMC_CMDTEO_ENABLED_Val << SDMMC_EISTER_E_MMC_CMDTEO_Pos)  /**< (SDMMC_EISTER) The CMDTEO status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_CMDCRC_Pos       1                                              /**< (SDMMC_EISTER) Command CRC Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_CMDCRC_Msk       (_U_(0x1) << SDMMC_EISTER_E_MMC_CMDCRC_Pos)    /**< (SDMMC_EISTER) Command CRC Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_CMDCRC           SDMMC_EISTER_E_MMC_CMDCRC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTER_E_MMC_CMDCRC_Msk instead */
#define   SDMMC_EISTER_E_MMC_CMDCRC_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISTER) E_MMC The CMDCRC status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_CMDCRC_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISTER) E_MMC The CMDCRC status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_CMDCRC_MASKED    (SDMMC_EISTER_E_MMC_CMDCRC_MASKED_Val << SDMMC_EISTER_E_MMC_CMDCRC_Pos)  /**< (SDMMC_EISTER) The CMDCRC status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_CMDCRC_ENABLED   (SDMMC_EISTER_E_MMC_CMDCRC_ENABLED_Val << SDMMC_EISTER_E_MMC_CMDCRC_Pos)  /**< (SDMMC_EISTER) The CMDCRC status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_CMDEND_Pos       2                                              /**< (SDMMC_EISTER) Command End Bit Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_CMDEND_Msk       (_U_(0x1) << SDMMC_EISTER_E_MMC_CMDEND_Pos)    /**< (SDMMC_EISTER) Command End Bit Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_CMDEND           SDMMC_EISTER_E_MMC_CMDEND_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTER_E_MMC_CMDEND_Msk instead */
#define   SDMMC_EISTER_E_MMC_CMDEND_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISTER) E_MMC The CMDEND status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_CMDEND_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISTER) E_MMC The CMDEND status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_CMDEND_MASKED    (SDMMC_EISTER_E_MMC_CMDEND_MASKED_Val << SDMMC_EISTER_E_MMC_CMDEND_Pos)  /**< (SDMMC_EISTER) The CMDEND status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_CMDEND_ENABLED   (SDMMC_EISTER_E_MMC_CMDEND_ENABLED_Val << SDMMC_EISTER_E_MMC_CMDEND_Pos)  /**< (SDMMC_EISTER) The CMDEND status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_CMDIDX_Pos       3                                              /**< (SDMMC_EISTER) Command Index Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_CMDIDX_Msk       (_U_(0x1) << SDMMC_EISTER_E_MMC_CMDIDX_Pos)    /**< (SDMMC_EISTER) Command Index Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_CMDIDX           SDMMC_EISTER_E_MMC_CMDIDX_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTER_E_MMC_CMDIDX_Msk instead */
#define   SDMMC_EISTER_E_MMC_CMDIDX_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISTER) E_MMC The CMDIDX status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_CMDIDX_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISTER) E_MMC The CMDIDX status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_CMDIDX_MASKED    (SDMMC_EISTER_E_MMC_CMDIDX_MASKED_Val << SDMMC_EISTER_E_MMC_CMDIDX_Pos)  /**< (SDMMC_EISTER) The CMDIDX status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_CMDIDX_ENABLED   (SDMMC_EISTER_E_MMC_CMDIDX_ENABLED_Val << SDMMC_EISTER_E_MMC_CMDIDX_Pos)  /**< (SDMMC_EISTER) The CMDIDX status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_DATTEO_Pos       4                                              /**< (SDMMC_EISTER) Data Timeout Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_DATTEO_Msk       (_U_(0x1) << SDMMC_EISTER_E_MMC_DATTEO_Pos)    /**< (SDMMC_EISTER) Data Timeout Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_DATTEO           SDMMC_EISTER_E_MMC_DATTEO_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTER_E_MMC_DATTEO_Msk instead */
#define   SDMMC_EISTER_E_MMC_DATTEO_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISTER) E_MMC The DATTEO status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_DATTEO_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISTER) E_MMC The DATTEO status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_DATTEO_MASKED    (SDMMC_EISTER_E_MMC_DATTEO_MASKED_Val << SDMMC_EISTER_E_MMC_DATTEO_Pos)  /**< (SDMMC_EISTER) The DATTEO status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_DATTEO_ENABLED   (SDMMC_EISTER_E_MMC_DATTEO_ENABLED_Val << SDMMC_EISTER_E_MMC_DATTEO_Pos)  /**< (SDMMC_EISTER) The DATTEO status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_DATCRC_Pos       5                                              /**< (SDMMC_EISTER) Data CRC Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_DATCRC_Msk       (_U_(0x1) << SDMMC_EISTER_E_MMC_DATCRC_Pos)    /**< (SDMMC_EISTER) Data CRC Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_DATCRC           SDMMC_EISTER_E_MMC_DATCRC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTER_E_MMC_DATCRC_Msk instead */
#define   SDMMC_EISTER_E_MMC_DATCRC_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISTER) E_MMC The DATCRC status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_DATCRC_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISTER) E_MMC The DATCRC status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_DATCRC_MASKED    (SDMMC_EISTER_E_MMC_DATCRC_MASKED_Val << SDMMC_EISTER_E_MMC_DATCRC_Pos)  /**< (SDMMC_EISTER) The DATCRC status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_DATCRC_ENABLED   (SDMMC_EISTER_E_MMC_DATCRC_ENABLED_Val << SDMMC_EISTER_E_MMC_DATCRC_Pos)  /**< (SDMMC_EISTER) The DATCRC status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_DATEND_Pos       6                                              /**< (SDMMC_EISTER) Data End Bit Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_DATEND_Msk       (_U_(0x1) << SDMMC_EISTER_E_MMC_DATEND_Pos)    /**< (SDMMC_EISTER) Data End Bit Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_DATEND           SDMMC_EISTER_E_MMC_DATEND_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTER_E_MMC_DATEND_Msk instead */
#define   SDMMC_EISTER_E_MMC_DATEND_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISTER) E_MMC The DATEND status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_DATEND_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISTER) E_MMC The DATEND status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_DATEND_MASKED    (SDMMC_EISTER_E_MMC_DATEND_MASKED_Val << SDMMC_EISTER_E_MMC_DATEND_Pos)  /**< (SDMMC_EISTER) The DATEND status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_DATEND_ENABLED   (SDMMC_EISTER_E_MMC_DATEND_ENABLED_Val << SDMMC_EISTER_E_MMC_DATEND_Pos)  /**< (SDMMC_EISTER) The DATEND status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_CURLIM_Pos       7                                              /**< (SDMMC_EISTER) Current Limit Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_CURLIM_Msk       (_U_(0x1) << SDMMC_EISTER_E_MMC_CURLIM_Pos)    /**< (SDMMC_EISTER) Current Limit Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_CURLIM           SDMMC_EISTER_E_MMC_CURLIM_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTER_E_MMC_CURLIM_Msk instead */
#define   SDMMC_EISTER_E_MMC_CURLIM_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISTER) E_MMC The CURLIM status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_CURLIM_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISTER) E_MMC The CURLIM status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_CURLIM_MASKED    (SDMMC_EISTER_E_MMC_CURLIM_MASKED_Val << SDMMC_EISTER_E_MMC_CURLIM_Pos)  /**< (SDMMC_EISTER) The CURLIM status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_CURLIM_ENABLED   (SDMMC_EISTER_E_MMC_CURLIM_ENABLED_Val << SDMMC_EISTER_E_MMC_CURLIM_Pos)  /**< (SDMMC_EISTER) The CURLIM status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_ACMD_Pos         8                                              /**< (SDMMC_EISTER) Auto CMD Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_ACMD_Msk         (_U_(0x1) << SDMMC_EISTER_E_MMC_ACMD_Pos)      /**< (SDMMC_EISTER) Auto CMD Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_ACMD             SDMMC_EISTER_E_MMC_ACMD_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTER_E_MMC_ACMD_Msk instead */
#define   SDMMC_EISTER_E_MMC_ACMD_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISTER) E_MMC The ACMD status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_ACMD_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISTER) E_MMC The ACMD status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_ACMD_MASKED      (SDMMC_EISTER_E_MMC_ACMD_MASKED_Val << SDMMC_EISTER_E_MMC_ACMD_Pos)  /**< (SDMMC_EISTER) The ACMD status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_ACMD_ENABLED     (SDMMC_EISTER_E_MMC_ACMD_ENABLED_Val << SDMMC_EISTER_E_MMC_ACMD_Pos)  /**< (SDMMC_EISTER) The ACMD status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_ADMA_Pos         9                                              /**< (SDMMC_EISTER) ADMA Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_ADMA_Msk         (_U_(0x1) << SDMMC_EISTER_E_MMC_ADMA_Pos)      /**< (SDMMC_EISTER) ADMA Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_ADMA             SDMMC_EISTER_E_MMC_ADMA_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTER_E_MMC_ADMA_Msk instead */
#define   SDMMC_EISTER_E_MMC_ADMA_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISTER) E_MMC The ADMA status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_ADMA_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISTER) E_MMC The ADMA status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_ADMA_MASKED      (SDMMC_EISTER_E_MMC_ADMA_MASKED_Val << SDMMC_EISTER_E_MMC_ADMA_Pos)  /**< (SDMMC_EISTER) The ADMA status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_ADMA_ENABLED     (SDMMC_EISTER_E_MMC_ADMA_ENABLED_Val << SDMMC_EISTER_E_MMC_ADMA_Pos)  /**< (SDMMC_EISTER) The ADMA status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_BOOTAE_Pos       12                                             /**< (SDMMC_EISTER) Boot Acknowledge Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_BOOTAE_Msk       (_U_(0x1) << SDMMC_EISTER_E_MMC_BOOTAE_Pos)    /**< (SDMMC_EISTER) Boot Acknowledge Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_BOOTAE           SDMMC_EISTER_E_MMC_BOOTAE_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISTER_E_MMC_BOOTAE_Msk instead */
#define   SDMMC_EISTER_E_MMC_BOOTAE_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISTER) E_MMC The BOOTAE status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_BOOTAE_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISTER) E_MMC The BOOTAE status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_BOOTAE_MASKED    (SDMMC_EISTER_E_MMC_BOOTAE_MASKED_Val << SDMMC_EISTER_E_MMC_BOOTAE_Pos)  /**< (SDMMC_EISTER) The BOOTAE status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_BOOTAE_ENABLED   (SDMMC_EISTER_E_MMC_BOOTAE_ENABLED_Val << SDMMC_EISTER_E_MMC_BOOTAE_Pos)  /**< (SDMMC_EISTER) The BOOTAE status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_MASK             _U_(0x13FF)                                    /**< \deprecated (SDMMC_EISTER_E_MMC) Register MASK  (Use SDMMC_EISTER_E_MMC_Msk instead)  */
#define SDMMC_EISTER_E_MMC_Msk              _U_(0x13FF)                                    /**< (SDMMC_EISTER_E_MMC) Register Mask  */


/* -------- SDMMC_NISIER : (SDMMC Offset: 0x38) (R/W 16) Normal Interrupt Signal Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct { // SD_SDIO mode
    uint16_t CMDC:1;                    /**< bit:      0  Command Complete Signal Enable           */
    uint16_t TRFC:1;                    /**< bit:      1  Transfer Complete Signal Enable          */
    uint16_t BLKGE:1;                   /**< bit:      2  Block Gap Event Signal Enable            */
    uint16_t DMAINT:1;                  /**< bit:      3  DMA Interrupt Signal Enable              */
    uint16_t BWRRDY:1;                  /**< bit:      4  Buffer Write Ready Signal Enable         */
    uint16_t BRDRDY:1;                  /**< bit:      5  Buffer Read Ready Signal Enable          */
    uint16_t CINS:1;                    /**< bit:      6  Card Insertion Signal Enable             */
    uint16_t CREM:1;                    /**< bit:      7  Card Removal Signal Enable               */
    uint16_t CINT:1;                    /**< bit:      8  Card Interrupt Signal Enable             */
    uint16_t :7;                        /**< bit:  9..15  Reserved */
  } SD_SDIO;                                /**< Structure used for SD_SDIO mode access */
  struct { // E_MMC mode
    uint16_t CMDC:1;                    /**< bit:      0  Command Complete Signal Enable           */
    uint16_t TRFC:1;                    /**< bit:      1  Transfer Complete Signal Enable          */
    uint16_t BLKGE:1;                   /**< bit:      2  Block Gap Event Signal Enable            */
    uint16_t DMAINT:1;                  /**< bit:      3  DMA Interrupt Signal Enable              */
    uint16_t BWRRDY:1;                  /**< bit:      4  Buffer Write Ready Signal Enable         */
    uint16_t BRDRDY:1;                  /**< bit:      5  Buffer Read Ready Signal Enable          */
    uint16_t :8;                        /**< bit:  6..13  Reserved */
    uint16_t BOOTAR:1;                  /**< bit:     14  Boot Acknowledge Received Signal Enable  */
    uint16_t :1;                        /**< bit:     15  Reserved */
  } E_MMC;                                /**< Structure used for E_MMC mode access */
  uint16_t reg;                         /**< Type used for register access */
} SDMMC_NISIER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_NISIER_OFFSET                 (0x38)                                        /**<  (SDMMC_NISIER) Normal Interrupt Signal Enable Register  Offset */

#define SDMMC_NISIER_MASK                   _U_(0x00)                                      /**< \deprecated (SDMMC_NISIER) Register MASK  (Use SDMMC_NISIER_Msk instead)  */
#define SDMMC_NISIER_Msk                    _U_(0x00)                                      /**< (SDMMC_NISIER) Register Mask  */

/* SD_SDIO mode */
#define SDMMC_NISIER_SD_SDIO_CMDC_Pos       0                                              /**< (SDMMC_NISIER) Command Complete Signal Enable Position */
#define SDMMC_NISIER_SD_SDIO_CMDC_Msk       (_U_(0x1) << SDMMC_NISIER_SD_SDIO_CMDC_Pos)    /**< (SDMMC_NISIER) Command Complete Signal Enable Mask */
#define SDMMC_NISIER_SD_SDIO_CMDC           SDMMC_NISIER_SD_SDIO_CMDC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISIER_SD_SDIO_CMDC_Msk instead */
#define   SDMMC_NISIER_SD_SDIO_CMDC_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISIER) SD_SDIO No interrupt is generated when the CMDC status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_SD_SDIO_CMDC_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISIER) SD_SDIO An interrupt is generated when the CMDC status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_SD_SDIO_CMDC_MASKED    (SDMMC_NISIER_SD_SDIO_CMDC_MASKED_Val << SDMMC_NISIER_SD_SDIO_CMDC_Pos)  /**< (SDMMC_NISIER) No interrupt is generated when the CMDC status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_CMDC_ENABLED   (SDMMC_NISIER_SD_SDIO_CMDC_ENABLED_Val << SDMMC_NISIER_SD_SDIO_CMDC_Pos)  /**< (SDMMC_NISIER) An interrupt is generated when the CMDC status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_TRFC_Pos       1                                              /**< (SDMMC_NISIER) Transfer Complete Signal Enable Position */
#define SDMMC_NISIER_SD_SDIO_TRFC_Msk       (_U_(0x1) << SDMMC_NISIER_SD_SDIO_TRFC_Pos)    /**< (SDMMC_NISIER) Transfer Complete Signal Enable Mask */
#define SDMMC_NISIER_SD_SDIO_TRFC           SDMMC_NISIER_SD_SDIO_TRFC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISIER_SD_SDIO_TRFC_Msk instead */
#define   SDMMC_NISIER_SD_SDIO_TRFC_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISIER) SD_SDIO No interrupt is generated when the TRFC status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_SD_SDIO_TRFC_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISIER) SD_SDIO An interrupt is generated when the TRFC status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_SD_SDIO_TRFC_MASKED    (SDMMC_NISIER_SD_SDIO_TRFC_MASKED_Val << SDMMC_NISIER_SD_SDIO_TRFC_Pos)  /**< (SDMMC_NISIER) No interrupt is generated when the TRFC status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_TRFC_ENABLED   (SDMMC_NISIER_SD_SDIO_TRFC_ENABLED_Val << SDMMC_NISIER_SD_SDIO_TRFC_Pos)  /**< (SDMMC_NISIER) An interrupt is generated when the TRFC status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_BLKGE_Pos      2                                              /**< (SDMMC_NISIER) Block Gap Event Signal Enable Position */
#define SDMMC_NISIER_SD_SDIO_BLKGE_Msk      (_U_(0x1) << SDMMC_NISIER_SD_SDIO_BLKGE_Pos)   /**< (SDMMC_NISIER) Block Gap Event Signal Enable Mask */
#define SDMMC_NISIER_SD_SDIO_BLKGE          SDMMC_NISIER_SD_SDIO_BLKGE_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISIER_SD_SDIO_BLKGE_Msk instead */
#define   SDMMC_NISIER_SD_SDIO_BLKGE_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISIER) SD_SDIO No interrupt is generated when the BLKGE status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_SD_SDIO_BLKGE_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISIER) SD_SDIO An interrupt is generated when the BLKGE status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_SD_SDIO_BLKGE_MASKED   (SDMMC_NISIER_SD_SDIO_BLKGE_MASKED_Val << SDMMC_NISIER_SD_SDIO_BLKGE_Pos)  /**< (SDMMC_NISIER) No interrupt is generated when the BLKGE status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_BLKGE_ENABLED  (SDMMC_NISIER_SD_SDIO_BLKGE_ENABLED_Val << SDMMC_NISIER_SD_SDIO_BLKGE_Pos)  /**< (SDMMC_NISIER) An interrupt is generated when the BLKGE status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_DMAINT_Pos     3                                              /**< (SDMMC_NISIER) DMA Interrupt Signal Enable Position */
#define SDMMC_NISIER_SD_SDIO_DMAINT_Msk     (_U_(0x1) << SDMMC_NISIER_SD_SDIO_DMAINT_Pos)  /**< (SDMMC_NISIER) DMA Interrupt Signal Enable Mask */
#define SDMMC_NISIER_SD_SDIO_DMAINT         SDMMC_NISIER_SD_SDIO_DMAINT_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISIER_SD_SDIO_DMAINT_Msk instead */
#define   SDMMC_NISIER_SD_SDIO_DMAINT_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISIER) SD_SDIO No interrupt is generated when the DMAINT status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_SD_SDIO_DMAINT_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISIER) SD_SDIO An interrupt is generated when the DMAINT status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_SD_SDIO_DMAINT_MASKED  (SDMMC_NISIER_SD_SDIO_DMAINT_MASKED_Val << SDMMC_NISIER_SD_SDIO_DMAINT_Pos)  /**< (SDMMC_NISIER) No interrupt is generated when the DMAINT status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_DMAINT_ENABLED (SDMMC_NISIER_SD_SDIO_DMAINT_ENABLED_Val << SDMMC_NISIER_SD_SDIO_DMAINT_Pos)  /**< (SDMMC_NISIER) An interrupt is generated when the DMAINT status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_BWRRDY_Pos     4                                              /**< (SDMMC_NISIER) Buffer Write Ready Signal Enable Position */
#define SDMMC_NISIER_SD_SDIO_BWRRDY_Msk     (_U_(0x1) << SDMMC_NISIER_SD_SDIO_BWRRDY_Pos)  /**< (SDMMC_NISIER) Buffer Write Ready Signal Enable Mask */
#define SDMMC_NISIER_SD_SDIO_BWRRDY         SDMMC_NISIER_SD_SDIO_BWRRDY_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISIER_SD_SDIO_BWRRDY_Msk instead */
#define   SDMMC_NISIER_SD_SDIO_BWRRDY_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISIER) SD_SDIO No interrupt is generated when the BWRRDY status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_SD_SDIO_BWRRDY_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISIER) SD_SDIO An interrupt is generated when the BWRRDY status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_SD_SDIO_BWRRDY_MASKED  (SDMMC_NISIER_SD_SDIO_BWRRDY_MASKED_Val << SDMMC_NISIER_SD_SDIO_BWRRDY_Pos)  /**< (SDMMC_NISIER) No interrupt is generated when the BWRRDY status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_BWRRDY_ENABLED (SDMMC_NISIER_SD_SDIO_BWRRDY_ENABLED_Val << SDMMC_NISIER_SD_SDIO_BWRRDY_Pos)  /**< (SDMMC_NISIER) An interrupt is generated when the BWRRDY status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_BRDRDY_Pos     5                                              /**< (SDMMC_NISIER) Buffer Read Ready Signal Enable Position */
#define SDMMC_NISIER_SD_SDIO_BRDRDY_Msk     (_U_(0x1) << SDMMC_NISIER_SD_SDIO_BRDRDY_Pos)  /**< (SDMMC_NISIER) Buffer Read Ready Signal Enable Mask */
#define SDMMC_NISIER_SD_SDIO_BRDRDY         SDMMC_NISIER_SD_SDIO_BRDRDY_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISIER_SD_SDIO_BRDRDY_Msk instead */
#define   SDMMC_NISIER_SD_SDIO_BRDRDY_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISIER) SD_SDIO No interrupt is generated when the BRDRDY status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_SD_SDIO_BRDRDY_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISIER) SD_SDIO An interrupt is generated when the BRDRDY status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_SD_SDIO_BRDRDY_MASKED  (SDMMC_NISIER_SD_SDIO_BRDRDY_MASKED_Val << SDMMC_NISIER_SD_SDIO_BRDRDY_Pos)  /**< (SDMMC_NISIER) No interrupt is generated when the BRDRDY status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_BRDRDY_ENABLED (SDMMC_NISIER_SD_SDIO_BRDRDY_ENABLED_Val << SDMMC_NISIER_SD_SDIO_BRDRDY_Pos)  /**< (SDMMC_NISIER) An interrupt is generated when the BRDRDY status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_CINS_Pos       6                                              /**< (SDMMC_NISIER) Card Insertion Signal Enable Position */
#define SDMMC_NISIER_SD_SDIO_CINS_Msk       (_U_(0x1) << SDMMC_NISIER_SD_SDIO_CINS_Pos)    /**< (SDMMC_NISIER) Card Insertion Signal Enable Mask */
#define SDMMC_NISIER_SD_SDIO_CINS           SDMMC_NISIER_SD_SDIO_CINS_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISIER_SD_SDIO_CINS_Msk instead */
#define   SDMMC_NISIER_SD_SDIO_CINS_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISIER) SD_SDIO No interrupt is generated when the CINS status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_SD_SDIO_CINS_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISIER) SD_SDIO An interrupt is generated when the CINS status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_SD_SDIO_CINS_MASKED    (SDMMC_NISIER_SD_SDIO_CINS_MASKED_Val << SDMMC_NISIER_SD_SDIO_CINS_Pos)  /**< (SDMMC_NISIER) No interrupt is generated when the CINS status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_CINS_ENABLED   (SDMMC_NISIER_SD_SDIO_CINS_ENABLED_Val << SDMMC_NISIER_SD_SDIO_CINS_Pos)  /**< (SDMMC_NISIER) An interrupt is generated when the CINS status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_CREM_Pos       7                                              /**< (SDMMC_NISIER) Card Removal Signal Enable Position */
#define SDMMC_NISIER_SD_SDIO_CREM_Msk       (_U_(0x1) << SDMMC_NISIER_SD_SDIO_CREM_Pos)    /**< (SDMMC_NISIER) Card Removal Signal Enable Mask */
#define SDMMC_NISIER_SD_SDIO_CREM           SDMMC_NISIER_SD_SDIO_CREM_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISIER_SD_SDIO_CREM_Msk instead */
#define   SDMMC_NISIER_SD_SDIO_CREM_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISIER) SD_SDIO No interrupt is generated when the CREM status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_SD_SDIO_CREM_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISIER) SD_SDIO An interrupt is generated when the CREM status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_SD_SDIO_CREM_MASKED    (SDMMC_NISIER_SD_SDIO_CREM_MASKED_Val << SDMMC_NISIER_SD_SDIO_CREM_Pos)  /**< (SDMMC_NISIER) No interrupt is generated when the CREM status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_CREM_ENABLED   (SDMMC_NISIER_SD_SDIO_CREM_ENABLED_Val << SDMMC_NISIER_SD_SDIO_CREM_Pos)  /**< (SDMMC_NISIER) An interrupt is generated when the CREM status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_CINT_Pos       8                                              /**< (SDMMC_NISIER) Card Interrupt Signal Enable Position */
#define SDMMC_NISIER_SD_SDIO_CINT_Msk       (_U_(0x1) << SDMMC_NISIER_SD_SDIO_CINT_Pos)    /**< (SDMMC_NISIER) Card Interrupt Signal Enable Mask */
#define SDMMC_NISIER_SD_SDIO_CINT           SDMMC_NISIER_SD_SDIO_CINT_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISIER_SD_SDIO_CINT_Msk instead */
#define   SDMMC_NISIER_SD_SDIO_CINT_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISIER) SD_SDIO No interrupt is generated when the CINT status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_SD_SDIO_CINT_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISIER) SD_SDIO An interrupt is generated when the CINT status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_SD_SDIO_CINT_MASKED    (SDMMC_NISIER_SD_SDIO_CINT_MASKED_Val << SDMMC_NISIER_SD_SDIO_CINT_Pos)  /**< (SDMMC_NISIER) No interrupt is generated when the CINT status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_CINT_ENABLED   (SDMMC_NISIER_SD_SDIO_CINT_ENABLED_Val << SDMMC_NISIER_SD_SDIO_CINT_Pos)  /**< (SDMMC_NISIER) An interrupt is generated when the CINT status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_MASK           _U_(0x1FF)                                     /**< \deprecated (SDMMC_NISIER_SD_SDIO) Register MASK  (Use SDMMC_NISIER_SD_SDIO_Msk instead)  */
#define SDMMC_NISIER_SD_SDIO_Msk            _U_(0x1FF)                                     /**< (SDMMC_NISIER_SD_SDIO) Register Mask  */

/* E_MMC mode */
#define SDMMC_NISIER_E_MMC_CMDC_Pos         0                                              /**< (SDMMC_NISIER) Command Complete Signal Enable Position */
#define SDMMC_NISIER_E_MMC_CMDC_Msk         (_U_(0x1) << SDMMC_NISIER_E_MMC_CMDC_Pos)      /**< (SDMMC_NISIER) Command Complete Signal Enable Mask */
#define SDMMC_NISIER_E_MMC_CMDC             SDMMC_NISIER_E_MMC_CMDC_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISIER_E_MMC_CMDC_Msk instead */
#define   SDMMC_NISIER_E_MMC_CMDC_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISIER) E_MMC No interrupt is generated when the CMDC status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_E_MMC_CMDC_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISIER) E_MMC An interrupt is generated when the CMDC status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_E_MMC_CMDC_MASKED      (SDMMC_NISIER_E_MMC_CMDC_MASKED_Val << SDMMC_NISIER_E_MMC_CMDC_Pos)  /**< (SDMMC_NISIER) No interrupt is generated when the CMDC status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_CMDC_ENABLED     (SDMMC_NISIER_E_MMC_CMDC_ENABLED_Val << SDMMC_NISIER_E_MMC_CMDC_Pos)  /**< (SDMMC_NISIER) An interrupt is generated when the CMDC status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_TRFC_Pos         1                                              /**< (SDMMC_NISIER) Transfer Complete Signal Enable Position */
#define SDMMC_NISIER_E_MMC_TRFC_Msk         (_U_(0x1) << SDMMC_NISIER_E_MMC_TRFC_Pos)      /**< (SDMMC_NISIER) Transfer Complete Signal Enable Mask */
#define SDMMC_NISIER_E_MMC_TRFC             SDMMC_NISIER_E_MMC_TRFC_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISIER_E_MMC_TRFC_Msk instead */
#define   SDMMC_NISIER_E_MMC_TRFC_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISIER) E_MMC No interrupt is generated when the TRFC status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_E_MMC_TRFC_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISIER) E_MMC An interrupt is generated when the TRFC status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_E_MMC_TRFC_MASKED      (SDMMC_NISIER_E_MMC_TRFC_MASKED_Val << SDMMC_NISIER_E_MMC_TRFC_Pos)  /**< (SDMMC_NISIER) No interrupt is generated when the TRFC status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_TRFC_ENABLED     (SDMMC_NISIER_E_MMC_TRFC_ENABLED_Val << SDMMC_NISIER_E_MMC_TRFC_Pos)  /**< (SDMMC_NISIER) An interrupt is generated when the TRFC status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_BLKGE_Pos        2                                              /**< (SDMMC_NISIER) Block Gap Event Signal Enable Position */
#define SDMMC_NISIER_E_MMC_BLKGE_Msk        (_U_(0x1) << SDMMC_NISIER_E_MMC_BLKGE_Pos)     /**< (SDMMC_NISIER) Block Gap Event Signal Enable Mask */
#define SDMMC_NISIER_E_MMC_BLKGE            SDMMC_NISIER_E_MMC_BLKGE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISIER_E_MMC_BLKGE_Msk instead */
#define   SDMMC_NISIER_E_MMC_BLKGE_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISIER) E_MMC No interrupt is generated when the BLKGE status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_E_MMC_BLKGE_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISIER) E_MMC An interrupt is generated when the BLKGE status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_E_MMC_BLKGE_MASKED     (SDMMC_NISIER_E_MMC_BLKGE_MASKED_Val << SDMMC_NISIER_E_MMC_BLKGE_Pos)  /**< (SDMMC_NISIER) No interrupt is generated when the BLKGE status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_BLKGE_ENABLED    (SDMMC_NISIER_E_MMC_BLKGE_ENABLED_Val << SDMMC_NISIER_E_MMC_BLKGE_Pos)  /**< (SDMMC_NISIER) An interrupt is generated when the BLKGE status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_DMAINT_Pos       3                                              /**< (SDMMC_NISIER) DMA Interrupt Signal Enable Position */
#define SDMMC_NISIER_E_MMC_DMAINT_Msk       (_U_(0x1) << SDMMC_NISIER_E_MMC_DMAINT_Pos)    /**< (SDMMC_NISIER) DMA Interrupt Signal Enable Mask */
#define SDMMC_NISIER_E_MMC_DMAINT           SDMMC_NISIER_E_MMC_DMAINT_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISIER_E_MMC_DMAINT_Msk instead */
#define   SDMMC_NISIER_E_MMC_DMAINT_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISIER) E_MMC No interrupt is generated when the DMAINT status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_E_MMC_DMAINT_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISIER) E_MMC An interrupt is generated when the DMAINT status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_E_MMC_DMAINT_MASKED    (SDMMC_NISIER_E_MMC_DMAINT_MASKED_Val << SDMMC_NISIER_E_MMC_DMAINT_Pos)  /**< (SDMMC_NISIER) No interrupt is generated when the DMAINT status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_DMAINT_ENABLED   (SDMMC_NISIER_E_MMC_DMAINT_ENABLED_Val << SDMMC_NISIER_E_MMC_DMAINT_Pos)  /**< (SDMMC_NISIER) An interrupt is generated when the DMAINT status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_BWRRDY_Pos       4                                              /**< (SDMMC_NISIER) Buffer Write Ready Signal Enable Position */
#define SDMMC_NISIER_E_MMC_BWRRDY_Msk       (_U_(0x1) << SDMMC_NISIER_E_MMC_BWRRDY_Pos)    /**< (SDMMC_NISIER) Buffer Write Ready Signal Enable Mask */
#define SDMMC_NISIER_E_MMC_BWRRDY           SDMMC_NISIER_E_MMC_BWRRDY_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISIER_E_MMC_BWRRDY_Msk instead */
#define   SDMMC_NISIER_E_MMC_BWRRDY_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISIER) E_MMC No interrupt is generated when the BWRRDY status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_E_MMC_BWRRDY_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISIER) E_MMC An interrupt is generated when the BWRRDY status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_E_MMC_BWRRDY_MASKED    (SDMMC_NISIER_E_MMC_BWRRDY_MASKED_Val << SDMMC_NISIER_E_MMC_BWRRDY_Pos)  /**< (SDMMC_NISIER) No interrupt is generated when the BWRRDY status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_BWRRDY_ENABLED   (SDMMC_NISIER_E_MMC_BWRRDY_ENABLED_Val << SDMMC_NISIER_E_MMC_BWRRDY_Pos)  /**< (SDMMC_NISIER) An interrupt is generated when the BWRRDY status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_BRDRDY_Pos       5                                              /**< (SDMMC_NISIER) Buffer Read Ready Signal Enable Position */
#define SDMMC_NISIER_E_MMC_BRDRDY_Msk       (_U_(0x1) << SDMMC_NISIER_E_MMC_BRDRDY_Pos)    /**< (SDMMC_NISIER) Buffer Read Ready Signal Enable Mask */
#define SDMMC_NISIER_E_MMC_BRDRDY           SDMMC_NISIER_E_MMC_BRDRDY_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISIER_E_MMC_BRDRDY_Msk instead */
#define   SDMMC_NISIER_E_MMC_BRDRDY_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISIER) E_MMC No interrupt is generated when the BRDRDY status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_E_MMC_BRDRDY_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISIER) E_MMC An interrupt is generated when the BRDRDY status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_E_MMC_BRDRDY_MASKED    (SDMMC_NISIER_E_MMC_BRDRDY_MASKED_Val << SDMMC_NISIER_E_MMC_BRDRDY_Pos)  /**< (SDMMC_NISIER) No interrupt is generated when the BRDRDY status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_BRDRDY_ENABLED   (SDMMC_NISIER_E_MMC_BRDRDY_ENABLED_Val << SDMMC_NISIER_E_MMC_BRDRDY_Pos)  /**< (SDMMC_NISIER) An interrupt is generated when the BRDRDY status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_BOOTAR_Pos       14                                             /**< (SDMMC_NISIER) Boot Acknowledge Received Signal Enable Position */
#define SDMMC_NISIER_E_MMC_BOOTAR_Msk       (_U_(0x1) << SDMMC_NISIER_E_MMC_BOOTAR_Pos)    /**< (SDMMC_NISIER) Boot Acknowledge Received Signal Enable Mask */
#define SDMMC_NISIER_E_MMC_BOOTAR           SDMMC_NISIER_E_MMC_BOOTAR_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_NISIER_E_MMC_BOOTAR_Msk instead */
#define   SDMMC_NISIER_E_MMC_BOOTAR_MASKED_Val _U_(0x0)                                       /**< (SDMMC_NISIER) E_MMC No interrupt is generated when the BOOTAR status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_E_MMC_BOOTAR_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_NISIER) E_MMC An interrupt is generated when the BOOTAR status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_E_MMC_BOOTAR_MASKED    (SDMMC_NISIER_E_MMC_BOOTAR_MASKED_Val << SDMMC_NISIER_E_MMC_BOOTAR_Pos)  /**< (SDMMC_NISIER) No interrupt is generated when the BOOTAR status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_BOOTAR_ENABLED   (SDMMC_NISIER_E_MMC_BOOTAR_ENABLED_Val << SDMMC_NISIER_E_MMC_BOOTAR_Pos)  /**< (SDMMC_NISIER) An interrupt is generated when the BOOTAR status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_MASK             _U_(0x403F)                                    /**< \deprecated (SDMMC_NISIER_E_MMC) Register MASK  (Use SDMMC_NISIER_E_MMC_Msk instead)  */
#define SDMMC_NISIER_E_MMC_Msk              _U_(0x403F)                                    /**< (SDMMC_NISIER_E_MMC) Register Mask  */


/* -------- SDMMC_EISIER : (SDMMC Offset: 0x3a) (R/W 16) Error Interrupt Signal Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct { // SD_SDIO mode
    uint16_t CMDTEO:1;                  /**< bit:      0  Command Timeout Error Signal Enable      */
    uint16_t CMDCRC:1;                  /**< bit:      1  Command CRC Error Signal Enable          */
    uint16_t CMDEND:1;                  /**< bit:      2  Command End Bit Error Signal Enable      */
    uint16_t CMDIDX:1;                  /**< bit:      3  Command Index Error Signal Enable        */
    uint16_t DATTEO:1;                  /**< bit:      4  Data Timeout Error Signal Enable         */
    uint16_t DATCRC:1;                  /**< bit:      5  Data CRC Error Signal Enable             */
    uint16_t DATEND:1;                  /**< bit:      6  Data End Bit Error Signal Enable         */
    uint16_t CURLIM:1;                  /**< bit:      7  Current Limit Error Signal Enable        */
    uint16_t ACMD:1;                    /**< bit:      8  Auto CMD Error Signal Enable             */
    uint16_t ADMA:1;                    /**< bit:      9  ADMA Error Signal Enable                 */
    uint16_t :6;                        /**< bit: 10..15  Reserved */
  } SD_SDIO;                                /**< Structure used for SD_SDIO mode access */
  struct { // E_MMC mode
    uint16_t CMDTEO:1;                  /**< bit:      0  Command Timeout Error Signal Enable      */
    uint16_t CMDCRC:1;                  /**< bit:      1  Command CRC Error Signal Enable          */
    uint16_t CMDEND:1;                  /**< bit:      2  Command End Bit Error Signal Enable      */
    uint16_t CMDIDX:1;                  /**< bit:      3  Command Index Error Signal Enable        */
    uint16_t DATTEO:1;                  /**< bit:      4  Data Timeout Error Signal Enable         */
    uint16_t DATCRC:1;                  /**< bit:      5  Data CRC Error Signal Enable             */
    uint16_t DATEND:1;                  /**< bit:      6  Data End Bit Error Signal Enable         */
    uint16_t CURLIM:1;                  /**< bit:      7  Current Limit Error Signal Enable        */
    uint16_t ACMD:1;                    /**< bit:      8  Auto CMD Error Signal Enable             */
    uint16_t ADMA:1;                    /**< bit:      9  ADMA Error Signal Enable                 */
    uint16_t :2;                        /**< bit: 10..11  Reserved */
    uint16_t BOOTAE:1;                  /**< bit:     12  Boot Acknowledge Error Signal Enable     */
    uint16_t :3;                        /**< bit: 13..15  Reserved */
  } E_MMC;                                /**< Structure used for E_MMC mode access */
  uint16_t reg;                         /**< Type used for register access */
} SDMMC_EISIER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_EISIER_OFFSET                 (0x3A)                                        /**<  (SDMMC_EISIER) Error Interrupt Signal Enable Register  Offset */

#define SDMMC_EISIER_MASK                   _U_(0x00)                                      /**< \deprecated (SDMMC_EISIER) Register MASK  (Use SDMMC_EISIER_Msk instead)  */
#define SDMMC_EISIER_Msk                    _U_(0x00)                                      /**< (SDMMC_EISIER) Register Mask  */

/* SD_SDIO mode */
#define SDMMC_EISIER_SD_SDIO_CMDTEO_Pos     0                                              /**< (SDMMC_EISIER) Command Timeout Error Signal Enable Position */
#define SDMMC_EISIER_SD_SDIO_CMDTEO_Msk     (_U_(0x1) << SDMMC_EISIER_SD_SDIO_CMDTEO_Pos)  /**< (SDMMC_EISIER) Command Timeout Error Signal Enable Mask */
#define SDMMC_EISIER_SD_SDIO_CMDTEO         SDMMC_EISIER_SD_SDIO_CMDTEO_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISIER_SD_SDIO_CMDTEO_Msk instead */
#define   SDMMC_EISIER_SD_SDIO_CMDTEO_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISIER) SD_SDIO No interrupt is generated when the CMDTEO status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_SD_SDIO_CMDTEO_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISIER) SD_SDIO An interrupt is generated when the CMDTEO status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_SD_SDIO_CMDTEO_MASKED  (SDMMC_EISIER_SD_SDIO_CMDTEO_MASKED_Val << SDMMC_EISIER_SD_SDIO_CMDTEO_Pos)  /**< (SDMMC_EISIER) No interrupt is generated when the CMDTEO status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_CMDTEO_ENABLED (SDMMC_EISIER_SD_SDIO_CMDTEO_ENABLED_Val << SDMMC_EISIER_SD_SDIO_CMDTEO_Pos)  /**< (SDMMC_EISIER) An interrupt is generated when the CMDTEO status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_CMDCRC_Pos     1                                              /**< (SDMMC_EISIER) Command CRC Error Signal Enable Position */
#define SDMMC_EISIER_SD_SDIO_CMDCRC_Msk     (_U_(0x1) << SDMMC_EISIER_SD_SDIO_CMDCRC_Pos)  /**< (SDMMC_EISIER) Command CRC Error Signal Enable Mask */
#define SDMMC_EISIER_SD_SDIO_CMDCRC         SDMMC_EISIER_SD_SDIO_CMDCRC_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISIER_SD_SDIO_CMDCRC_Msk instead */
#define   SDMMC_EISIER_SD_SDIO_CMDCRC_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISIER) SD_SDIO No interrupt is generated when the CDMCRC status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_SD_SDIO_CMDCRC_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISIER) SD_SDIO An interrupt is generated when the CMDCRC status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_SD_SDIO_CMDCRC_MASKED  (SDMMC_EISIER_SD_SDIO_CMDCRC_MASKED_Val << SDMMC_EISIER_SD_SDIO_CMDCRC_Pos)  /**< (SDMMC_EISIER) No interrupt is generated when the CDMCRC status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_CMDCRC_ENABLED (SDMMC_EISIER_SD_SDIO_CMDCRC_ENABLED_Val << SDMMC_EISIER_SD_SDIO_CMDCRC_Pos)  /**< (SDMMC_EISIER) An interrupt is generated when the CMDCRC status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_CMDEND_Pos     2                                              /**< (SDMMC_EISIER) Command End Bit Error Signal Enable Position */
#define SDMMC_EISIER_SD_SDIO_CMDEND_Msk     (_U_(0x1) << SDMMC_EISIER_SD_SDIO_CMDEND_Pos)  /**< (SDMMC_EISIER) Command End Bit Error Signal Enable Mask */
#define SDMMC_EISIER_SD_SDIO_CMDEND         SDMMC_EISIER_SD_SDIO_CMDEND_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISIER_SD_SDIO_CMDEND_Msk instead */
#define   SDMMC_EISIER_SD_SDIO_CMDEND_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISIER) SD_SDIO No interrupt is generated when the CMDEND status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_SD_SDIO_CMDEND_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISIER) SD_SDIO An interrupt is generated when the CMDEND status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_SD_SDIO_CMDEND_MASKED  (SDMMC_EISIER_SD_SDIO_CMDEND_MASKED_Val << SDMMC_EISIER_SD_SDIO_CMDEND_Pos)  /**< (SDMMC_EISIER) No interrupt is generated when the CMDEND status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_CMDEND_ENABLED (SDMMC_EISIER_SD_SDIO_CMDEND_ENABLED_Val << SDMMC_EISIER_SD_SDIO_CMDEND_Pos)  /**< (SDMMC_EISIER) An interrupt is generated when the CMDEND status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_CMDIDX_Pos     3                                              /**< (SDMMC_EISIER) Command Index Error Signal Enable Position */
#define SDMMC_EISIER_SD_SDIO_CMDIDX_Msk     (_U_(0x1) << SDMMC_EISIER_SD_SDIO_CMDIDX_Pos)  /**< (SDMMC_EISIER) Command Index Error Signal Enable Mask */
#define SDMMC_EISIER_SD_SDIO_CMDIDX         SDMMC_EISIER_SD_SDIO_CMDIDX_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISIER_SD_SDIO_CMDIDX_Msk instead */
#define   SDMMC_EISIER_SD_SDIO_CMDIDX_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISIER) SD_SDIO No interrupt is generated when the CMDIDX status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_SD_SDIO_CMDIDX_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISIER) SD_SDIO An interrupt is generated when the CMDIDX status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_SD_SDIO_CMDIDX_MASKED  (SDMMC_EISIER_SD_SDIO_CMDIDX_MASKED_Val << SDMMC_EISIER_SD_SDIO_CMDIDX_Pos)  /**< (SDMMC_EISIER) No interrupt is generated when the CMDIDX status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_CMDIDX_ENABLED (SDMMC_EISIER_SD_SDIO_CMDIDX_ENABLED_Val << SDMMC_EISIER_SD_SDIO_CMDIDX_Pos)  /**< (SDMMC_EISIER) An interrupt is generated when the CMDIDX status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_DATTEO_Pos     4                                              /**< (SDMMC_EISIER) Data Timeout Error Signal Enable Position */
#define SDMMC_EISIER_SD_SDIO_DATTEO_Msk     (_U_(0x1) << SDMMC_EISIER_SD_SDIO_DATTEO_Pos)  /**< (SDMMC_EISIER) Data Timeout Error Signal Enable Mask */
#define SDMMC_EISIER_SD_SDIO_DATTEO         SDMMC_EISIER_SD_SDIO_DATTEO_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISIER_SD_SDIO_DATTEO_Msk instead */
#define   SDMMC_EISIER_SD_SDIO_DATTEO_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISIER) SD_SDIO No interrupt is generated when the DATTEO status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_SD_SDIO_DATTEO_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISIER) SD_SDIO An interrupt is generated when the DATTEO status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_SD_SDIO_DATTEO_MASKED  (SDMMC_EISIER_SD_SDIO_DATTEO_MASKED_Val << SDMMC_EISIER_SD_SDIO_DATTEO_Pos)  /**< (SDMMC_EISIER) No interrupt is generated when the DATTEO status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_DATTEO_ENABLED (SDMMC_EISIER_SD_SDIO_DATTEO_ENABLED_Val << SDMMC_EISIER_SD_SDIO_DATTEO_Pos)  /**< (SDMMC_EISIER) An interrupt is generated when the DATTEO status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_DATCRC_Pos     5                                              /**< (SDMMC_EISIER) Data CRC Error Signal Enable Position */
#define SDMMC_EISIER_SD_SDIO_DATCRC_Msk     (_U_(0x1) << SDMMC_EISIER_SD_SDIO_DATCRC_Pos)  /**< (SDMMC_EISIER) Data CRC Error Signal Enable Mask */
#define SDMMC_EISIER_SD_SDIO_DATCRC         SDMMC_EISIER_SD_SDIO_DATCRC_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISIER_SD_SDIO_DATCRC_Msk instead */
#define   SDMMC_EISIER_SD_SDIO_DATCRC_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISIER) SD_SDIO No interrupt is generated when the DATCRC status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_SD_SDIO_DATCRC_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISIER) SD_SDIO An interrupt is generated when the DATCRC status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_SD_SDIO_DATCRC_MASKED  (SDMMC_EISIER_SD_SDIO_DATCRC_MASKED_Val << SDMMC_EISIER_SD_SDIO_DATCRC_Pos)  /**< (SDMMC_EISIER) No interrupt is generated when the DATCRC status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_DATCRC_ENABLED (SDMMC_EISIER_SD_SDIO_DATCRC_ENABLED_Val << SDMMC_EISIER_SD_SDIO_DATCRC_Pos)  /**< (SDMMC_EISIER) An interrupt is generated when the DATCRC status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_DATEND_Pos     6                                              /**< (SDMMC_EISIER) Data End Bit Error Signal Enable Position */
#define SDMMC_EISIER_SD_SDIO_DATEND_Msk     (_U_(0x1) << SDMMC_EISIER_SD_SDIO_DATEND_Pos)  /**< (SDMMC_EISIER) Data End Bit Error Signal Enable Mask */
#define SDMMC_EISIER_SD_SDIO_DATEND         SDMMC_EISIER_SD_SDIO_DATEND_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISIER_SD_SDIO_DATEND_Msk instead */
#define   SDMMC_EISIER_SD_SDIO_DATEND_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISIER) SD_SDIO No interrupt is generated when the DATEND status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_SD_SDIO_DATEND_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISIER) SD_SDIO An interrupt is generated when the DATEND status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_SD_SDIO_DATEND_MASKED  (SDMMC_EISIER_SD_SDIO_DATEND_MASKED_Val << SDMMC_EISIER_SD_SDIO_DATEND_Pos)  /**< (SDMMC_EISIER) No interrupt is generated when the DATEND status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_DATEND_ENABLED (SDMMC_EISIER_SD_SDIO_DATEND_ENABLED_Val << SDMMC_EISIER_SD_SDIO_DATEND_Pos)  /**< (SDMMC_EISIER) An interrupt is generated when the DATEND status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_CURLIM_Pos     7                                              /**< (SDMMC_EISIER) Current Limit Error Signal Enable Position */
#define SDMMC_EISIER_SD_SDIO_CURLIM_Msk     (_U_(0x1) << SDMMC_EISIER_SD_SDIO_CURLIM_Pos)  /**< (SDMMC_EISIER) Current Limit Error Signal Enable Mask */
#define SDMMC_EISIER_SD_SDIO_CURLIM         SDMMC_EISIER_SD_SDIO_CURLIM_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISIER_SD_SDIO_CURLIM_Msk instead */
#define   SDMMC_EISIER_SD_SDIO_CURLIM_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISIER) SD_SDIO No interrupt is generated when the CURLIM status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_SD_SDIO_CURLIM_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISIER) SD_SDIO An interrupt is generated when the CURLIM status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_SD_SDIO_CURLIM_MASKED  (SDMMC_EISIER_SD_SDIO_CURLIM_MASKED_Val << SDMMC_EISIER_SD_SDIO_CURLIM_Pos)  /**< (SDMMC_EISIER) No interrupt is generated when the CURLIM status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_CURLIM_ENABLED (SDMMC_EISIER_SD_SDIO_CURLIM_ENABLED_Val << SDMMC_EISIER_SD_SDIO_CURLIM_Pos)  /**< (SDMMC_EISIER) An interrupt is generated when the CURLIM status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_ACMD_Pos       8                                              /**< (SDMMC_EISIER) Auto CMD Error Signal Enable Position */
#define SDMMC_EISIER_SD_SDIO_ACMD_Msk       (_U_(0x1) << SDMMC_EISIER_SD_SDIO_ACMD_Pos)    /**< (SDMMC_EISIER) Auto CMD Error Signal Enable Mask */
#define SDMMC_EISIER_SD_SDIO_ACMD           SDMMC_EISIER_SD_SDIO_ACMD_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISIER_SD_SDIO_ACMD_Msk instead */
#define   SDMMC_EISIER_SD_SDIO_ACMD_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISIER) SD_SDIO No interrupt is generated when the ACMD status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_SD_SDIO_ACMD_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISIER) SD_SDIO An interrupt is generated when the ACMD status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_SD_SDIO_ACMD_MASKED    (SDMMC_EISIER_SD_SDIO_ACMD_MASKED_Val << SDMMC_EISIER_SD_SDIO_ACMD_Pos)  /**< (SDMMC_EISIER) No interrupt is generated when the ACMD status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_ACMD_ENABLED   (SDMMC_EISIER_SD_SDIO_ACMD_ENABLED_Val << SDMMC_EISIER_SD_SDIO_ACMD_Pos)  /**< (SDMMC_EISIER) An interrupt is generated when the ACMD status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_ADMA_Pos       9                                              /**< (SDMMC_EISIER) ADMA Error Signal Enable Position */
#define SDMMC_EISIER_SD_SDIO_ADMA_Msk       (_U_(0x1) << SDMMC_EISIER_SD_SDIO_ADMA_Pos)    /**< (SDMMC_EISIER) ADMA Error Signal Enable Mask */
#define SDMMC_EISIER_SD_SDIO_ADMA           SDMMC_EISIER_SD_SDIO_ADMA_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISIER_SD_SDIO_ADMA_Msk instead */
#define   SDMMC_EISIER_SD_SDIO_ADMA_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISIER) SD_SDIO No interrupt is generated when the ADMA status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_SD_SDIO_ADMA_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISIER) SD_SDIO An interrupt is generated when the ADMA status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_SD_SDIO_ADMA_MASKED    (SDMMC_EISIER_SD_SDIO_ADMA_MASKED_Val << SDMMC_EISIER_SD_SDIO_ADMA_Pos)  /**< (SDMMC_EISIER) No interrupt is generated when the ADMA status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_ADMA_ENABLED   (SDMMC_EISIER_SD_SDIO_ADMA_ENABLED_Val << SDMMC_EISIER_SD_SDIO_ADMA_Pos)  /**< (SDMMC_EISIER) An interrupt is generated when the ADMA status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_MASK           _U_(0x3FF)                                     /**< \deprecated (SDMMC_EISIER_SD_SDIO) Register MASK  (Use SDMMC_EISIER_SD_SDIO_Msk instead)  */
#define SDMMC_EISIER_SD_SDIO_Msk            _U_(0x3FF)                                     /**< (SDMMC_EISIER_SD_SDIO) Register Mask  */

/* E_MMC mode */
#define SDMMC_EISIER_E_MMC_CMDTEO_Pos       0                                              /**< (SDMMC_EISIER) Command Timeout Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_CMDTEO_Msk       (_U_(0x1) << SDMMC_EISIER_E_MMC_CMDTEO_Pos)    /**< (SDMMC_EISIER) Command Timeout Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_CMDTEO           SDMMC_EISIER_E_MMC_CMDTEO_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISIER_E_MMC_CMDTEO_Msk instead */
#define   SDMMC_EISIER_E_MMC_CMDTEO_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISIER) E_MMC No interrupt is generated when the CMDTEO status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_CMDTEO_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISIER) E_MMC An interrupt is generated when the CMDTEO status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_CMDTEO_MASKED    (SDMMC_EISIER_E_MMC_CMDTEO_MASKED_Val << SDMMC_EISIER_E_MMC_CMDTEO_Pos)  /**< (SDMMC_EISIER) No interrupt is generated when the CMDTEO status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_CMDTEO_ENABLED   (SDMMC_EISIER_E_MMC_CMDTEO_ENABLED_Val << SDMMC_EISIER_E_MMC_CMDTEO_Pos)  /**< (SDMMC_EISIER) An interrupt is generated when the CMDTEO status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_CMDCRC_Pos       1                                              /**< (SDMMC_EISIER) Command CRC Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_CMDCRC_Msk       (_U_(0x1) << SDMMC_EISIER_E_MMC_CMDCRC_Pos)    /**< (SDMMC_EISIER) Command CRC Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_CMDCRC           SDMMC_EISIER_E_MMC_CMDCRC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISIER_E_MMC_CMDCRC_Msk instead */
#define   SDMMC_EISIER_E_MMC_CMDCRC_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISIER) E_MMC No interrupt is generated when the CDMCRC status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_CMDCRC_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISIER) E_MMC An interrupt is generated when the CMDCRC status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_CMDCRC_MASKED    (SDMMC_EISIER_E_MMC_CMDCRC_MASKED_Val << SDMMC_EISIER_E_MMC_CMDCRC_Pos)  /**< (SDMMC_EISIER) No interrupt is generated when the CDMCRC status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_CMDCRC_ENABLED   (SDMMC_EISIER_E_MMC_CMDCRC_ENABLED_Val << SDMMC_EISIER_E_MMC_CMDCRC_Pos)  /**< (SDMMC_EISIER) An interrupt is generated when the CMDCRC status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_CMDEND_Pos       2                                              /**< (SDMMC_EISIER) Command End Bit Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_CMDEND_Msk       (_U_(0x1) << SDMMC_EISIER_E_MMC_CMDEND_Pos)    /**< (SDMMC_EISIER) Command End Bit Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_CMDEND           SDMMC_EISIER_E_MMC_CMDEND_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISIER_E_MMC_CMDEND_Msk instead */
#define   SDMMC_EISIER_E_MMC_CMDEND_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISIER) E_MMC No interrupt is generated when the CMDEND status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_CMDEND_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISIER) E_MMC An interrupt is generated when the CMDEND status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_CMDEND_MASKED    (SDMMC_EISIER_E_MMC_CMDEND_MASKED_Val << SDMMC_EISIER_E_MMC_CMDEND_Pos)  /**< (SDMMC_EISIER) No interrupt is generated when the CMDEND status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_CMDEND_ENABLED   (SDMMC_EISIER_E_MMC_CMDEND_ENABLED_Val << SDMMC_EISIER_E_MMC_CMDEND_Pos)  /**< (SDMMC_EISIER) An interrupt is generated when the CMDEND status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_CMDIDX_Pos       3                                              /**< (SDMMC_EISIER) Command Index Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_CMDIDX_Msk       (_U_(0x1) << SDMMC_EISIER_E_MMC_CMDIDX_Pos)    /**< (SDMMC_EISIER) Command Index Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_CMDIDX           SDMMC_EISIER_E_MMC_CMDIDX_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISIER_E_MMC_CMDIDX_Msk instead */
#define   SDMMC_EISIER_E_MMC_CMDIDX_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISIER) E_MMC No interrupt is generated when the CMDIDX status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_CMDIDX_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISIER) E_MMC An interrupt is generated when the CMDIDX status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_CMDIDX_MASKED    (SDMMC_EISIER_E_MMC_CMDIDX_MASKED_Val << SDMMC_EISIER_E_MMC_CMDIDX_Pos)  /**< (SDMMC_EISIER) No interrupt is generated when the CMDIDX status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_CMDIDX_ENABLED   (SDMMC_EISIER_E_MMC_CMDIDX_ENABLED_Val << SDMMC_EISIER_E_MMC_CMDIDX_Pos)  /**< (SDMMC_EISIER) An interrupt is generated when the CMDIDX status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_DATTEO_Pos       4                                              /**< (SDMMC_EISIER) Data Timeout Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_DATTEO_Msk       (_U_(0x1) << SDMMC_EISIER_E_MMC_DATTEO_Pos)    /**< (SDMMC_EISIER) Data Timeout Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_DATTEO           SDMMC_EISIER_E_MMC_DATTEO_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISIER_E_MMC_DATTEO_Msk instead */
#define   SDMMC_EISIER_E_MMC_DATTEO_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISIER) E_MMC No interrupt is generated when the DATTEO status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_DATTEO_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISIER) E_MMC An interrupt is generated when the DATTEO status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_DATTEO_MASKED    (SDMMC_EISIER_E_MMC_DATTEO_MASKED_Val << SDMMC_EISIER_E_MMC_DATTEO_Pos)  /**< (SDMMC_EISIER) No interrupt is generated when the DATTEO status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_DATTEO_ENABLED   (SDMMC_EISIER_E_MMC_DATTEO_ENABLED_Val << SDMMC_EISIER_E_MMC_DATTEO_Pos)  /**< (SDMMC_EISIER) An interrupt is generated when the DATTEO status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_DATCRC_Pos       5                                              /**< (SDMMC_EISIER) Data CRC Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_DATCRC_Msk       (_U_(0x1) << SDMMC_EISIER_E_MMC_DATCRC_Pos)    /**< (SDMMC_EISIER) Data CRC Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_DATCRC           SDMMC_EISIER_E_MMC_DATCRC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISIER_E_MMC_DATCRC_Msk instead */
#define   SDMMC_EISIER_E_MMC_DATCRC_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISIER) E_MMC No interrupt is generated when the DATCRC status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_DATCRC_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISIER) E_MMC An interrupt is generated when the DATCRC status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_DATCRC_MASKED    (SDMMC_EISIER_E_MMC_DATCRC_MASKED_Val << SDMMC_EISIER_E_MMC_DATCRC_Pos)  /**< (SDMMC_EISIER) No interrupt is generated when the DATCRC status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_DATCRC_ENABLED   (SDMMC_EISIER_E_MMC_DATCRC_ENABLED_Val << SDMMC_EISIER_E_MMC_DATCRC_Pos)  /**< (SDMMC_EISIER) An interrupt is generated when the DATCRC status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_DATEND_Pos       6                                              /**< (SDMMC_EISIER) Data End Bit Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_DATEND_Msk       (_U_(0x1) << SDMMC_EISIER_E_MMC_DATEND_Pos)    /**< (SDMMC_EISIER) Data End Bit Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_DATEND           SDMMC_EISIER_E_MMC_DATEND_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISIER_E_MMC_DATEND_Msk instead */
#define   SDMMC_EISIER_E_MMC_DATEND_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISIER) E_MMC No interrupt is generated when the DATEND status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_DATEND_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISIER) E_MMC An interrupt is generated when the DATEND status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_DATEND_MASKED    (SDMMC_EISIER_E_MMC_DATEND_MASKED_Val << SDMMC_EISIER_E_MMC_DATEND_Pos)  /**< (SDMMC_EISIER) No interrupt is generated when the DATEND status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_DATEND_ENABLED   (SDMMC_EISIER_E_MMC_DATEND_ENABLED_Val << SDMMC_EISIER_E_MMC_DATEND_Pos)  /**< (SDMMC_EISIER) An interrupt is generated when the DATEND status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_CURLIM_Pos       7                                              /**< (SDMMC_EISIER) Current Limit Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_CURLIM_Msk       (_U_(0x1) << SDMMC_EISIER_E_MMC_CURLIM_Pos)    /**< (SDMMC_EISIER) Current Limit Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_CURLIM           SDMMC_EISIER_E_MMC_CURLIM_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISIER_E_MMC_CURLIM_Msk instead */
#define   SDMMC_EISIER_E_MMC_CURLIM_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISIER) E_MMC No interrupt is generated when the CURLIM status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_CURLIM_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISIER) E_MMC An interrupt is generated when the CURLIM status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_CURLIM_MASKED    (SDMMC_EISIER_E_MMC_CURLIM_MASKED_Val << SDMMC_EISIER_E_MMC_CURLIM_Pos)  /**< (SDMMC_EISIER) No interrupt is generated when the CURLIM status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_CURLIM_ENABLED   (SDMMC_EISIER_E_MMC_CURLIM_ENABLED_Val << SDMMC_EISIER_E_MMC_CURLIM_Pos)  /**< (SDMMC_EISIER) An interrupt is generated when the CURLIM status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_ACMD_Pos         8                                              /**< (SDMMC_EISIER) Auto CMD Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_ACMD_Msk         (_U_(0x1) << SDMMC_EISIER_E_MMC_ACMD_Pos)      /**< (SDMMC_EISIER) Auto CMD Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_ACMD             SDMMC_EISIER_E_MMC_ACMD_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISIER_E_MMC_ACMD_Msk instead */
#define   SDMMC_EISIER_E_MMC_ACMD_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISIER) E_MMC No interrupt is generated when the ACMD status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_ACMD_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISIER) E_MMC An interrupt is generated when the ACMD status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_ACMD_MASKED      (SDMMC_EISIER_E_MMC_ACMD_MASKED_Val << SDMMC_EISIER_E_MMC_ACMD_Pos)  /**< (SDMMC_EISIER) No interrupt is generated when the ACMD status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_ACMD_ENABLED     (SDMMC_EISIER_E_MMC_ACMD_ENABLED_Val << SDMMC_EISIER_E_MMC_ACMD_Pos)  /**< (SDMMC_EISIER) An interrupt is generated when the ACMD status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_ADMA_Pos         9                                              /**< (SDMMC_EISIER) ADMA Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_ADMA_Msk         (_U_(0x1) << SDMMC_EISIER_E_MMC_ADMA_Pos)      /**< (SDMMC_EISIER) ADMA Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_ADMA             SDMMC_EISIER_E_MMC_ADMA_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISIER_E_MMC_ADMA_Msk instead */
#define   SDMMC_EISIER_E_MMC_ADMA_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISIER) E_MMC No interrupt is generated when the ADMA status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_ADMA_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISIER) E_MMC An interrupt is generated when the ADMA status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_ADMA_MASKED      (SDMMC_EISIER_E_MMC_ADMA_MASKED_Val << SDMMC_EISIER_E_MMC_ADMA_Pos)  /**< (SDMMC_EISIER) No interrupt is generated when the ADMA status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_ADMA_ENABLED     (SDMMC_EISIER_E_MMC_ADMA_ENABLED_Val << SDMMC_EISIER_E_MMC_ADMA_Pos)  /**< (SDMMC_EISIER) An interrupt is generated when the ADMA status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_BOOTAE_Pos       12                                             /**< (SDMMC_EISIER) Boot Acknowledge Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_BOOTAE_Msk       (_U_(0x1) << SDMMC_EISIER_E_MMC_BOOTAE_Pos)    /**< (SDMMC_EISIER) Boot Acknowledge Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_BOOTAE           SDMMC_EISIER_E_MMC_BOOTAE_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_EISIER_E_MMC_BOOTAE_Msk instead */
#define   SDMMC_EISIER_E_MMC_BOOTAE_MASKED_Val _U_(0x0)                                       /**< (SDMMC_EISIER) E_MMC No interrupt is generated when the BOOTAE status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_BOOTAE_ENABLED_Val _U_(0x1)                                       /**< (SDMMC_EISIER) E_MMC An interrupt is generated when the BOOTAE status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_BOOTAE_MASKED    (SDMMC_EISIER_E_MMC_BOOTAE_MASKED_Val << SDMMC_EISIER_E_MMC_BOOTAE_Pos)  /**< (SDMMC_EISIER) No interrupt is generated when the BOOTAE status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_BOOTAE_ENABLED   (SDMMC_EISIER_E_MMC_BOOTAE_ENABLED_Val << SDMMC_EISIER_E_MMC_BOOTAE_Pos)  /**< (SDMMC_EISIER) An interrupt is generated when the BOOTAE status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_MASK             _U_(0x13FF)                                    /**< \deprecated (SDMMC_EISIER_E_MMC) Register MASK  (Use SDMMC_EISIER_E_MMC_Msk instead)  */
#define SDMMC_EISIER_E_MMC_Msk              _U_(0x13FF)                                    /**< (SDMMC_EISIER_E_MMC) Register Mask  */


/* -------- SDMMC_ACESR : (SDMMC Offset: 0x3c) (R/ 16) Auto CMD Error Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t ACMD12NE:1;                /**< bit:      0  Auto CMD12 Not Executed                  */
    uint16_t ACMDTEO:1;                 /**< bit:      1  Auto CMD Timeout Error                   */
    uint16_t ACMDCRC:1;                 /**< bit:      2  Auto CMD CRC Error                       */
    uint16_t ACMDEND:1;                 /**< bit:      3  Auto CMD End Bit Error                   */
    uint16_t ACMDIDX:1;                 /**< bit:      4  Auto CMD Index Error                     */
    uint16_t :2;                        /**< bit:   5..6  Reserved */
    uint16_t CMDNI:1;                   /**< bit:      7  Command Not Issued by Auto CMD12 Error   */
    uint16_t :8;                        /**< bit:  8..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} SDMMC_ACESR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_ACESR_OFFSET                  (0x3C)                                        /**<  (SDMMC_ACESR) Auto CMD Error Status Register  Offset */

#define SDMMC_ACESR_ACMD12NE_Pos            0                                              /**< (SDMMC_ACESR) Auto CMD12 Not Executed Position */
#define SDMMC_ACESR_ACMD12NE_Msk            (_U_(0x1) << SDMMC_ACESR_ACMD12NE_Pos)         /**< (SDMMC_ACESR) Auto CMD12 Not Executed Mask */
#define SDMMC_ACESR_ACMD12NE                SDMMC_ACESR_ACMD12NE_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_ACESR_ACMD12NE_Msk instead */
#define SDMMC_ACESR_ACMDTEO_Pos             1                                              /**< (SDMMC_ACESR) Auto CMD Timeout Error Position */
#define SDMMC_ACESR_ACMDTEO_Msk             (_U_(0x1) << SDMMC_ACESR_ACMDTEO_Pos)          /**< (SDMMC_ACESR) Auto CMD Timeout Error Mask */
#define SDMMC_ACESR_ACMDTEO                 SDMMC_ACESR_ACMDTEO_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_ACESR_ACMDTEO_Msk instead */
#define SDMMC_ACESR_ACMDCRC_Pos             2                                              /**< (SDMMC_ACESR) Auto CMD CRC Error Position */
#define SDMMC_ACESR_ACMDCRC_Msk             (_U_(0x1) << SDMMC_ACESR_ACMDCRC_Pos)          /**< (SDMMC_ACESR) Auto CMD CRC Error Mask */
#define SDMMC_ACESR_ACMDCRC                 SDMMC_ACESR_ACMDCRC_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_ACESR_ACMDCRC_Msk instead */
#define SDMMC_ACESR_ACMDEND_Pos             3                                              /**< (SDMMC_ACESR) Auto CMD End Bit Error Position */
#define SDMMC_ACESR_ACMDEND_Msk             (_U_(0x1) << SDMMC_ACESR_ACMDEND_Pos)          /**< (SDMMC_ACESR) Auto CMD End Bit Error Mask */
#define SDMMC_ACESR_ACMDEND                 SDMMC_ACESR_ACMDEND_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_ACESR_ACMDEND_Msk instead */
#define SDMMC_ACESR_ACMDIDX_Pos             4                                              /**< (SDMMC_ACESR) Auto CMD Index Error Position */
#define SDMMC_ACESR_ACMDIDX_Msk             (_U_(0x1) << SDMMC_ACESR_ACMDIDX_Pos)          /**< (SDMMC_ACESR) Auto CMD Index Error Mask */
#define SDMMC_ACESR_ACMDIDX                 SDMMC_ACESR_ACMDIDX_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_ACESR_ACMDIDX_Msk instead */
#define SDMMC_ACESR_CMDNI_Pos               7                                              /**< (SDMMC_ACESR) Command Not Issued by Auto CMD12 Error Position */
#define SDMMC_ACESR_CMDNI_Msk               (_U_(0x1) << SDMMC_ACESR_CMDNI_Pos)            /**< (SDMMC_ACESR) Command Not Issued by Auto CMD12 Error Mask */
#define SDMMC_ACESR_CMDNI                   SDMMC_ACESR_CMDNI_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_ACESR_CMDNI_Msk instead */
#define SDMMC_ACESR_MASK                    _U_(0x9F)                                      /**< \deprecated (SDMMC_ACESR) Register MASK  (Use SDMMC_ACESR_Msk instead)  */
#define SDMMC_ACESR_Msk                     _U_(0x9F)                                      /**< (SDMMC_ACESR) Register Mask  */


/* -------- SDMMC_HC2R : (SDMMC Offset: 0x3e) (R/W 16) Host Control 2 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct { // SD_SDIO mode
    uint16_t UHSMS:3;                   /**< bit:   0..2  UHS Mode Select                          */
    uint16_t VS18EN:1;                  /**< bit:      3  1.8V Signaling Enable                    */
    uint16_t DRVSEL:2;                  /**< bit:   4..5  Driver Strength Select                   */
    uint16_t EXTUN:1;                   /**< bit:      6  Execute Tuning                           */
    uint16_t SCLKSEL:1;                 /**< bit:      7  Sampling Clock Select                    */
    uint16_t :6;                        /**< bit:  8..13  Reserved */
    uint16_t ASINTEN:1;                 /**< bit:     14  Asynchronous Interrupt Enable            */
    uint16_t PVALEN:1;                  /**< bit:     15  Preset Value Enable                      */
  } SD_SDIO;                                /**< Structure used for SD_SDIO mode access */
  struct { // E_MMC mode
    uint16_t HS200EN:4;                 /**< bit:   0..3  HS200 Mode Enable                        */
    uint16_t DRVSEL:2;                  /**< bit:   4..5  Driver Strength Select                   */
    uint16_t EXTUN:1;                   /**< bit:      6  Execute Tuning                           */
    uint16_t SCLKSEL:1;                 /**< bit:      7  Sampling Clock Select                    */
    uint16_t :7;                        /**< bit:  8..14  Reserved */
    uint16_t PVALEN:1;                  /**< bit:     15  Preset Value Enable                      */
  } E_MMC;                                /**< Structure used for E_MMC mode access */
  uint16_t reg;                         /**< Type used for register access */
} SDMMC_HC2R_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_HC2R_OFFSET                   (0x3E)                                        /**<  (SDMMC_HC2R) Host Control 2 Register  Offset */

#define SDMMC_HC2R_MASK                     _U_(0x00)                                      /**< \deprecated (SDMMC_HC2R) Register MASK  (Use SDMMC_HC2R_Msk instead)  */
#define SDMMC_HC2R_Msk                      _U_(0x00)                                      /**< (SDMMC_HC2R) Register Mask  */

/* SD_SDIO mode */
#define SDMMC_HC2R_SD_SDIO_UHSMS_Pos        0                                              /**< (SDMMC_HC2R) UHS Mode Select Position */
#define SDMMC_HC2R_SD_SDIO_UHSMS_Msk        (_U_(0x7) << SDMMC_HC2R_SD_SDIO_UHSMS_Pos)     /**< (SDMMC_HC2R) UHS Mode Select Mask */
#define SDMMC_HC2R_SD_SDIO_UHSMS(value)     (SDMMC_HC2R_SD_SDIO_UHSMS_Msk & ((value) << SDMMC_HC2R_SD_SDIO_UHSMS_Pos))
#define   SDMMC_HC2R_SD_SDIO_UHSMS_SDR12_Val _U_(0x0)                                       /**< (SDMMC_HC2R) SD_SDIO UHS SDR12 Mode  */
#define   SDMMC_HC2R_SD_SDIO_UHSMS_SDR25_Val _U_(0x1)                                       /**< (SDMMC_HC2R) SD_SDIO UHS SDR25 Mode  */
#define   SDMMC_HC2R_SD_SDIO_UHSMS_SDR50_Val _U_(0x2)                                       /**< (SDMMC_HC2R) SD_SDIO UHS SDR50 Mode  */
#define   SDMMC_HC2R_SD_SDIO_UHSMS_SDR104_Val _U_(0x3)                                       /**< (SDMMC_HC2R) SD_SDIO UHS SDR104 Mode  */
#define   SDMMC_HC2R_SD_SDIO_UHSMS_DDR50_Val _U_(0x4)                                       /**< (SDMMC_HC2R) SD_SDIO UHS DDR50 Mode  */
#define SDMMC_HC2R_SD_SDIO_UHSMS_SDR12      (SDMMC_HC2R_SD_SDIO_UHSMS_SDR12_Val << SDMMC_HC2R_SD_SDIO_UHSMS_Pos)  /**< (SDMMC_HC2R) UHS SDR12 Mode Position  */
#define SDMMC_HC2R_SD_SDIO_UHSMS_SDR25      (SDMMC_HC2R_SD_SDIO_UHSMS_SDR25_Val << SDMMC_HC2R_SD_SDIO_UHSMS_Pos)  /**< (SDMMC_HC2R) UHS SDR25 Mode Position  */
#define SDMMC_HC2R_SD_SDIO_UHSMS_SDR50      (SDMMC_HC2R_SD_SDIO_UHSMS_SDR50_Val << SDMMC_HC2R_SD_SDIO_UHSMS_Pos)  /**< (SDMMC_HC2R) UHS SDR50 Mode Position  */
#define SDMMC_HC2R_SD_SDIO_UHSMS_SDR104     (SDMMC_HC2R_SD_SDIO_UHSMS_SDR104_Val << SDMMC_HC2R_SD_SDIO_UHSMS_Pos)  /**< (SDMMC_HC2R) UHS SDR104 Mode Position  */
#define SDMMC_HC2R_SD_SDIO_UHSMS_DDR50      (SDMMC_HC2R_SD_SDIO_UHSMS_DDR50_Val << SDMMC_HC2R_SD_SDIO_UHSMS_Pos)  /**< (SDMMC_HC2R) UHS DDR50 Mode Position  */
#define SDMMC_HC2R_SD_SDIO_VS18EN_Pos       3                                              /**< (SDMMC_HC2R) 1.8V Signaling Enable Position */
#define SDMMC_HC2R_SD_SDIO_VS18EN_Msk       (_U_(0x1) << SDMMC_HC2R_SD_SDIO_VS18EN_Pos)    /**< (SDMMC_HC2R) 1.8V Signaling Enable Mask */
#define SDMMC_HC2R_SD_SDIO_VS18EN           SDMMC_HC2R_SD_SDIO_VS18EN_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_HC2R_SD_SDIO_VS18EN_Msk instead */
#define SDMMC_HC2R_SD_SDIO_DRVSEL_Pos       4                                              /**< (SDMMC_HC2R) Driver Strength Select Position */
#define SDMMC_HC2R_SD_SDIO_DRVSEL_Msk       (_U_(0x3) << SDMMC_HC2R_SD_SDIO_DRVSEL_Pos)    /**< (SDMMC_HC2R) Driver Strength Select Mask */
#define SDMMC_HC2R_SD_SDIO_DRVSEL(value)    (SDMMC_HC2R_SD_SDIO_DRVSEL_Msk & ((value) << SDMMC_HC2R_SD_SDIO_DRVSEL_Pos))
#define   SDMMC_HC2R_SD_SDIO_DRVSEL_TYPEB_Val _U_(0x0)                                       /**< (SDMMC_HC2R) SD_SDIO Driver Type B is selected (Default)  */
#define   SDMMC_HC2R_SD_SDIO_DRVSEL_TYPEA_Val _U_(0x1)                                       /**< (SDMMC_HC2R) SD_SDIO Driver Type A is selected  */
#define   SDMMC_HC2R_SD_SDIO_DRVSEL_TYPEC_Val _U_(0x2)                                       /**< (SDMMC_HC2R) SD_SDIO Driver Type C is selected  */
#define   SDMMC_HC2R_SD_SDIO_DRVSEL_TYPED_Val _U_(0x3)                                       /**< (SDMMC_HC2R) SD_SDIO Driver Type D is selected  */
#define SDMMC_HC2R_SD_SDIO_DRVSEL_TYPEB     (SDMMC_HC2R_SD_SDIO_DRVSEL_TYPEB_Val << SDMMC_HC2R_SD_SDIO_DRVSEL_Pos)  /**< (SDMMC_HC2R) Driver Type B is selected (Default) Position  */
#define SDMMC_HC2R_SD_SDIO_DRVSEL_TYPEA     (SDMMC_HC2R_SD_SDIO_DRVSEL_TYPEA_Val << SDMMC_HC2R_SD_SDIO_DRVSEL_Pos)  /**< (SDMMC_HC2R) Driver Type A is selected Position  */
#define SDMMC_HC2R_SD_SDIO_DRVSEL_TYPEC     (SDMMC_HC2R_SD_SDIO_DRVSEL_TYPEC_Val << SDMMC_HC2R_SD_SDIO_DRVSEL_Pos)  /**< (SDMMC_HC2R) Driver Type C is selected Position  */
#define SDMMC_HC2R_SD_SDIO_DRVSEL_TYPED     (SDMMC_HC2R_SD_SDIO_DRVSEL_TYPED_Val << SDMMC_HC2R_SD_SDIO_DRVSEL_Pos)  /**< (SDMMC_HC2R) Driver Type D is selected Position  */
#define SDMMC_HC2R_SD_SDIO_EXTUN_Pos        6                                              /**< (SDMMC_HC2R) Execute Tuning Position */
#define SDMMC_HC2R_SD_SDIO_EXTUN_Msk        (_U_(0x1) << SDMMC_HC2R_SD_SDIO_EXTUN_Pos)     /**< (SDMMC_HC2R) Execute Tuning Mask */
#define SDMMC_HC2R_SD_SDIO_EXTUN            SDMMC_HC2R_SD_SDIO_EXTUN_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_HC2R_SD_SDIO_EXTUN_Msk instead */
#define SDMMC_HC2R_SD_SDIO_SCLKSEL_Pos      7                                              /**< (SDMMC_HC2R) Sampling Clock Select Position */
#define SDMMC_HC2R_SD_SDIO_SCLKSEL_Msk      (_U_(0x1) << SDMMC_HC2R_SD_SDIO_SCLKSEL_Pos)   /**< (SDMMC_HC2R) Sampling Clock Select Mask */
#define SDMMC_HC2R_SD_SDIO_SCLKSEL          SDMMC_HC2R_SD_SDIO_SCLKSEL_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_HC2R_SD_SDIO_SCLKSEL_Msk instead */
#define SDMMC_HC2R_SD_SDIO_ASINTEN_Pos      14                                             /**< (SDMMC_HC2R) Asynchronous Interrupt Enable Position */
#define SDMMC_HC2R_SD_SDIO_ASINTEN_Msk      (_U_(0x1) << SDMMC_HC2R_SD_SDIO_ASINTEN_Pos)   /**< (SDMMC_HC2R) Asynchronous Interrupt Enable Mask */
#define SDMMC_HC2R_SD_SDIO_ASINTEN          SDMMC_HC2R_SD_SDIO_ASINTEN_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_HC2R_SD_SDIO_ASINTEN_Msk instead */
#define SDMMC_HC2R_SD_SDIO_PVALEN_Pos       15                                             /**< (SDMMC_HC2R) Preset Value Enable Position */
#define SDMMC_HC2R_SD_SDIO_PVALEN_Msk       (_U_(0x1) << SDMMC_HC2R_SD_SDIO_PVALEN_Pos)    /**< (SDMMC_HC2R) Preset Value Enable Mask */
#define SDMMC_HC2R_SD_SDIO_PVALEN           SDMMC_HC2R_SD_SDIO_PVALEN_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_HC2R_SD_SDIO_PVALEN_Msk instead */
#define SDMMC_HC2R_SD_SDIO_MASK             _U_(0xC0FF)                                    /**< \deprecated (SDMMC_HC2R_SD_SDIO) Register MASK  (Use SDMMC_HC2R_SD_SDIO_Msk instead)  */
#define SDMMC_HC2R_SD_SDIO_Msk              _U_(0xC0FF)                                    /**< (SDMMC_HC2R_SD_SDIO) Register Mask  */

/* E_MMC mode */
#define SDMMC_HC2R_E_MMC_HS200EN_Pos        0                                              /**< (SDMMC_HC2R) HS200 Mode Enable Position */
#define SDMMC_HC2R_E_MMC_HS200EN_Msk        (_U_(0xF) << SDMMC_HC2R_E_MMC_HS200EN_Pos)     /**< (SDMMC_HC2R) HS200 Mode Enable Mask */
#define SDMMC_HC2R_E_MMC_HS200EN(value)     (SDMMC_HC2R_E_MMC_HS200EN_Msk & ((value) << SDMMC_HC2R_E_MMC_HS200EN_Pos))
#define SDMMC_HC2R_E_MMC_DRVSEL_Pos         4                                              /**< (SDMMC_HC2R) Driver Strength Select Position */
#define SDMMC_HC2R_E_MMC_DRVSEL_Msk         (_U_(0x3) << SDMMC_HC2R_E_MMC_DRVSEL_Pos)      /**< (SDMMC_HC2R) Driver Strength Select Mask */
#define SDMMC_HC2R_E_MMC_DRVSEL(value)      (SDMMC_HC2R_E_MMC_DRVSEL_Msk & ((value) << SDMMC_HC2R_E_MMC_DRVSEL_Pos))
#define   SDMMC_HC2R_E_MMC_DRVSEL_TYPEB_Val _U_(0x0)                                       /**< (SDMMC_HC2R) E_MMC Driver Type B is selected (Default)  */
#define   SDMMC_HC2R_E_MMC_DRVSEL_TYPEA_Val _U_(0x1)                                       /**< (SDMMC_HC2R) E_MMC Driver Type A is selected  */
#define   SDMMC_HC2R_E_MMC_DRVSEL_TYPEC_Val _U_(0x2)                                       /**< (SDMMC_HC2R) E_MMC Driver Type C is selected  */
#define   SDMMC_HC2R_E_MMC_DRVSEL_TYPED_Val _U_(0x3)                                       /**< (SDMMC_HC2R) E_MMC Driver Type D is selected  */
#define SDMMC_HC2R_E_MMC_DRVSEL_TYPEB       (SDMMC_HC2R_E_MMC_DRVSEL_TYPEB_Val << SDMMC_HC2R_E_MMC_DRVSEL_Pos)  /**< (SDMMC_HC2R) Driver Type B is selected (Default) Position  */
#define SDMMC_HC2R_E_MMC_DRVSEL_TYPEA       (SDMMC_HC2R_E_MMC_DRVSEL_TYPEA_Val << SDMMC_HC2R_E_MMC_DRVSEL_Pos)  /**< (SDMMC_HC2R) Driver Type A is selected Position  */
#define SDMMC_HC2R_E_MMC_DRVSEL_TYPEC       (SDMMC_HC2R_E_MMC_DRVSEL_TYPEC_Val << SDMMC_HC2R_E_MMC_DRVSEL_Pos)  /**< (SDMMC_HC2R) Driver Type C is selected Position  */
#define SDMMC_HC2R_E_MMC_DRVSEL_TYPED       (SDMMC_HC2R_E_MMC_DRVSEL_TYPED_Val << SDMMC_HC2R_E_MMC_DRVSEL_Pos)  /**< (SDMMC_HC2R) Driver Type D is selected Position  */
#define SDMMC_HC2R_E_MMC_EXTUN_Pos          6                                              /**< (SDMMC_HC2R) Execute Tuning Position */
#define SDMMC_HC2R_E_MMC_EXTUN_Msk          (_U_(0x1) << SDMMC_HC2R_E_MMC_EXTUN_Pos)       /**< (SDMMC_HC2R) Execute Tuning Mask */
#define SDMMC_HC2R_E_MMC_EXTUN              SDMMC_HC2R_E_MMC_EXTUN_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_HC2R_E_MMC_EXTUN_Msk instead */
#define SDMMC_HC2R_E_MMC_SCLKSEL_Pos        7                                              /**< (SDMMC_HC2R) Sampling Clock Select Position */
#define SDMMC_HC2R_E_MMC_SCLKSEL_Msk        (_U_(0x1) << SDMMC_HC2R_E_MMC_SCLKSEL_Pos)     /**< (SDMMC_HC2R) Sampling Clock Select Mask */
#define SDMMC_HC2R_E_MMC_SCLKSEL            SDMMC_HC2R_E_MMC_SCLKSEL_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_HC2R_E_MMC_SCLKSEL_Msk instead */
#define SDMMC_HC2R_E_MMC_PVALEN_Pos         15                                             /**< (SDMMC_HC2R) Preset Value Enable Position */
#define SDMMC_HC2R_E_MMC_PVALEN_Msk         (_U_(0x1) << SDMMC_HC2R_E_MMC_PVALEN_Pos)      /**< (SDMMC_HC2R) Preset Value Enable Mask */
#define SDMMC_HC2R_E_MMC_PVALEN             SDMMC_HC2R_E_MMC_PVALEN_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_HC2R_E_MMC_PVALEN_Msk instead */
#define SDMMC_HC2R_E_MMC_MASK               _U_(0x80FF)                                    /**< \deprecated (SDMMC_HC2R_E_MMC) Register MASK  (Use SDMMC_HC2R_E_MMC_Msk instead)  */
#define SDMMC_HC2R_E_MMC_Msk                _U_(0x80FF)                                    /**< (SDMMC_HC2R_E_MMC) Register Mask  */


/* -------- SDMMC_CA0R : (SDMMC Offset: 0x40) (R/ 32) Capabilities 0 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TEOCLKF:6;                 /**< bit:   0..5  Timeout Clock Frequency                  */
    uint32_t :1;                        /**< bit:      6  Reserved */
    uint32_t TEOCLKU:1;                 /**< bit:      7  Timeout Clock Unit                       */
    uint32_t BASECLKF:8;                /**< bit:  8..15  Base Clock Frequency                     */
    uint32_t MAXBLKL:2;                 /**< bit: 16..17  Max Block Length                         */
    uint32_t ED8SUP:1;                  /**< bit:     18  8-Bit Support for Embedded Device        */
    uint32_t ADMA2SUP:1;                /**< bit:     19  ADMA2 Support                            */
    uint32_t :1;                        /**< bit:     20  Reserved */
    uint32_t HSSUP:1;                   /**< bit:     21  High Speed Support                       */
    uint32_t SDMASUP:1;                 /**< bit:     22  SDMA Support                             */
    uint32_t SRSUP:1;                   /**< bit:     23  Suspend/Resume Support                   */
    uint32_t V33VSUP:1;                 /**< bit:     24  Voltage Support 3.3V                     */
    uint32_t V30VSUP:1;                 /**< bit:     25  Voltage Support 3.0V                     */
    uint32_t V18VSUP:1;                 /**< bit:     26  Voltage Support 1.8V                     */
    uint32_t :1;                        /**< bit:     27  Reserved */
    uint32_t SB64SUP:1;                 /**< bit:     28  64-Bit System Bus Support                */
    uint32_t ASINTSUP:1;                /**< bit:     29  Asynchronous Interrupt Support           */
    uint32_t SLTYPE:2;                  /**< bit: 30..31  Slot Type                                */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SDMMC_CA0R_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_CA0R_OFFSET                   (0x40)                                        /**<  (SDMMC_CA0R) Capabilities 0 Register  Offset */

#define SDMMC_CA0R_TEOCLKF_Pos              0                                              /**< (SDMMC_CA0R) Timeout Clock Frequency Position */
#define SDMMC_CA0R_TEOCLKF_Msk              (_U_(0x3F) << SDMMC_CA0R_TEOCLKF_Pos)          /**< (SDMMC_CA0R) Timeout Clock Frequency Mask */
#define SDMMC_CA0R_TEOCLKF(value)           (SDMMC_CA0R_TEOCLKF_Msk & ((value) << SDMMC_CA0R_TEOCLKF_Pos))
#define SDMMC_CA0R_TEOCLKU_Pos              7                                              /**< (SDMMC_CA0R) Timeout Clock Unit Position */
#define SDMMC_CA0R_TEOCLKU_Msk              (_U_(0x1) << SDMMC_CA0R_TEOCLKU_Pos)           /**< (SDMMC_CA0R) Timeout Clock Unit Mask */
#define SDMMC_CA0R_TEOCLKU                  SDMMC_CA0R_TEOCLKU_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CA0R_TEOCLKU_Msk instead */
#define SDMMC_CA0R_BASECLKF_Pos             8                                              /**< (SDMMC_CA0R) Base Clock Frequency Position */
#define SDMMC_CA0R_BASECLKF_Msk             (_U_(0xFF) << SDMMC_CA0R_BASECLKF_Pos)         /**< (SDMMC_CA0R) Base Clock Frequency Mask */
#define SDMMC_CA0R_BASECLKF(value)          (SDMMC_CA0R_BASECLKF_Msk & ((value) << SDMMC_CA0R_BASECLKF_Pos))
#define SDMMC_CA0R_MAXBLKL_Pos              16                                             /**< (SDMMC_CA0R) Max Block Length Position */
#define SDMMC_CA0R_MAXBLKL_Msk              (_U_(0x3) << SDMMC_CA0R_MAXBLKL_Pos)           /**< (SDMMC_CA0R) Max Block Length Mask */
#define SDMMC_CA0R_MAXBLKL(value)           (SDMMC_CA0R_MAXBLKL_Msk & ((value) << SDMMC_CA0R_MAXBLKL_Pos))
#define   SDMMC_CA0R_MAXBLKL_512_Val        _U_(0x0)                                       /**< (SDMMC_CA0R) 512 bytes  */
#define   SDMMC_CA0R_MAXBLKL_1024_Val       _U_(0x1)                                       /**< (SDMMC_CA0R) 1024 bytes  */
#define   SDMMC_CA0R_MAXBLKL_2048_Val       _U_(0x2)                                       /**< (SDMMC_CA0R) 2048 bytes  */
#define SDMMC_CA0R_MAXBLKL_512              (SDMMC_CA0R_MAXBLKL_512_Val << SDMMC_CA0R_MAXBLKL_Pos)  /**< (SDMMC_CA0R) 512 bytes Position  */
#define SDMMC_CA0R_MAXBLKL_1024             (SDMMC_CA0R_MAXBLKL_1024_Val << SDMMC_CA0R_MAXBLKL_Pos)  /**< (SDMMC_CA0R) 1024 bytes Position  */
#define SDMMC_CA0R_MAXBLKL_2048             (SDMMC_CA0R_MAXBLKL_2048_Val << SDMMC_CA0R_MAXBLKL_Pos)  /**< (SDMMC_CA0R) 2048 bytes Position  */
#define SDMMC_CA0R_ED8SUP_Pos               18                                             /**< (SDMMC_CA0R) 8-Bit Support for Embedded Device Position */
#define SDMMC_CA0R_ED8SUP_Msk               (_U_(0x1) << SDMMC_CA0R_ED8SUP_Pos)            /**< (SDMMC_CA0R) 8-Bit Support for Embedded Device Mask */
#define SDMMC_CA0R_ED8SUP                   SDMMC_CA0R_ED8SUP_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CA0R_ED8SUP_Msk instead */
#define SDMMC_CA0R_ADMA2SUP_Pos             19                                             /**< (SDMMC_CA0R) ADMA2 Support Position */
#define SDMMC_CA0R_ADMA2SUP_Msk             (_U_(0x1) << SDMMC_CA0R_ADMA2SUP_Pos)          /**< (SDMMC_CA0R) ADMA2 Support Mask */
#define SDMMC_CA0R_ADMA2SUP                 SDMMC_CA0R_ADMA2SUP_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CA0R_ADMA2SUP_Msk instead */
#define SDMMC_CA0R_HSSUP_Pos                21                                             /**< (SDMMC_CA0R) High Speed Support Position */
#define SDMMC_CA0R_HSSUP_Msk                (_U_(0x1) << SDMMC_CA0R_HSSUP_Pos)             /**< (SDMMC_CA0R) High Speed Support Mask */
#define SDMMC_CA0R_HSSUP                    SDMMC_CA0R_HSSUP_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CA0R_HSSUP_Msk instead */
#define SDMMC_CA0R_SDMASUP_Pos              22                                             /**< (SDMMC_CA0R) SDMA Support Position */
#define SDMMC_CA0R_SDMASUP_Msk              (_U_(0x1) << SDMMC_CA0R_SDMASUP_Pos)           /**< (SDMMC_CA0R) SDMA Support Mask */
#define SDMMC_CA0R_SDMASUP                  SDMMC_CA0R_SDMASUP_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CA0R_SDMASUP_Msk instead */
#define SDMMC_CA0R_SRSUP_Pos                23                                             /**< (SDMMC_CA0R) Suspend/Resume Support Position */
#define SDMMC_CA0R_SRSUP_Msk                (_U_(0x1) << SDMMC_CA0R_SRSUP_Pos)             /**< (SDMMC_CA0R) Suspend/Resume Support Mask */
#define SDMMC_CA0R_SRSUP                    SDMMC_CA0R_SRSUP_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CA0R_SRSUP_Msk instead */
#define SDMMC_CA0R_V33VSUP_Pos              24                                             /**< (SDMMC_CA0R) Voltage Support 3.3V Position */
#define SDMMC_CA0R_V33VSUP_Msk              (_U_(0x1) << SDMMC_CA0R_V33VSUP_Pos)           /**< (SDMMC_CA0R) Voltage Support 3.3V Mask */
#define SDMMC_CA0R_V33VSUP                  SDMMC_CA0R_V33VSUP_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CA0R_V33VSUP_Msk instead */
#define SDMMC_CA0R_V30VSUP_Pos              25                                             /**< (SDMMC_CA0R) Voltage Support 3.0V Position */
#define SDMMC_CA0R_V30VSUP_Msk              (_U_(0x1) << SDMMC_CA0R_V30VSUP_Pos)           /**< (SDMMC_CA0R) Voltage Support 3.0V Mask */
#define SDMMC_CA0R_V30VSUP                  SDMMC_CA0R_V30VSUP_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CA0R_V30VSUP_Msk instead */
#define SDMMC_CA0R_V18VSUP_Pos              26                                             /**< (SDMMC_CA0R) Voltage Support 1.8V Position */
#define SDMMC_CA0R_V18VSUP_Msk              (_U_(0x1) << SDMMC_CA0R_V18VSUP_Pos)           /**< (SDMMC_CA0R) Voltage Support 1.8V Mask */
#define SDMMC_CA0R_V18VSUP                  SDMMC_CA0R_V18VSUP_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CA0R_V18VSUP_Msk instead */
#define SDMMC_CA0R_SB64SUP_Pos              28                                             /**< (SDMMC_CA0R) 64-Bit System Bus Support Position */
#define SDMMC_CA0R_SB64SUP_Msk              (_U_(0x1) << SDMMC_CA0R_SB64SUP_Pos)           /**< (SDMMC_CA0R) 64-Bit System Bus Support Mask */
#define SDMMC_CA0R_SB64SUP                  SDMMC_CA0R_SB64SUP_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CA0R_SB64SUP_Msk instead */
#define SDMMC_CA0R_ASINTSUP_Pos             29                                             /**< (SDMMC_CA0R) Asynchronous Interrupt Support Position */
#define SDMMC_CA0R_ASINTSUP_Msk             (_U_(0x1) << SDMMC_CA0R_ASINTSUP_Pos)          /**< (SDMMC_CA0R) Asynchronous Interrupt Support Mask */
#define SDMMC_CA0R_ASINTSUP                 SDMMC_CA0R_ASINTSUP_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CA0R_ASINTSUP_Msk instead */
#define SDMMC_CA0R_SLTYPE_Pos               30                                             /**< (SDMMC_CA0R) Slot Type Position */
#define SDMMC_CA0R_SLTYPE_Msk               (_U_(0x3) << SDMMC_CA0R_SLTYPE_Pos)            /**< (SDMMC_CA0R) Slot Type Mask */
#define SDMMC_CA0R_SLTYPE(value)            (SDMMC_CA0R_SLTYPE_Msk & ((value) << SDMMC_CA0R_SLTYPE_Pos))
#define SDMMC_CA0R_MASK                     _U_(0xF7EFFFBF)                                /**< \deprecated (SDMMC_CA0R) Register MASK  (Use SDMMC_CA0R_Msk instead)  */
#define SDMMC_CA0R_Msk                      _U_(0xF7EFFFBF)                                /**< (SDMMC_CA0R) Register Mask  */


/* -------- SDMMC_CA1R : (SDMMC Offset: 0x44) (R/W 32) Capabilities 1 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SDR50SUP:1;                /**< bit:      0  SDR50 Support                            */
    uint32_t SDR104SUP:1;               /**< bit:      1  SDR104 Support                           */
    uint32_t DDR50SUP:1;                /**< bit:      2  DDR50 Support                            */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t DRVASUP:1;                 /**< bit:      4  Driver Type A Support                    */
    uint32_t DRVCSUP:1;                 /**< bit:      5  Driver Type C Support                    */
    uint32_t DRVDSUP:1;                 /**< bit:      6  Driver Type D Support                    */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t TCNTRT:4;                  /**< bit:  8..11  Timer Count For Retuning                 */
    uint32_t :1;                        /**< bit:     12  Reserved */
    uint32_t TSDR50:1;                  /**< bit:     13  Use Tuning for SDR50                     */
    uint32_t RTMOD:2;                   /**< bit: 14..15  Retuning Modes                           */
    uint32_t CLKMULT:8;                 /**< bit: 16..23  Clock Multiplier                         */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :13;                       /**< bit:  0..12  Reserved */
    uint32_t TSDR:1;                    /**< bit:     13  Use Tuning for SDR5x                     */
    uint32_t :18;                       /**< bit: 14..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} SDMMC_CA1R_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_CA1R_OFFSET                   (0x44)                                        /**<  (SDMMC_CA1R) Capabilities 1 Register  Offset */

#define SDMMC_CA1R_SDR50SUP_Pos             0                                              /**< (SDMMC_CA1R) SDR50 Support Position */
#define SDMMC_CA1R_SDR50SUP_Msk             (_U_(0x1) << SDMMC_CA1R_SDR50SUP_Pos)          /**< (SDMMC_CA1R) SDR50 Support Mask */
#define SDMMC_CA1R_SDR50SUP                 SDMMC_CA1R_SDR50SUP_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CA1R_SDR50SUP_Msk instead */
#define SDMMC_CA1R_SDR104SUP_Pos            1                                              /**< (SDMMC_CA1R) SDR104 Support Position */
#define SDMMC_CA1R_SDR104SUP_Msk            (_U_(0x1) << SDMMC_CA1R_SDR104SUP_Pos)         /**< (SDMMC_CA1R) SDR104 Support Mask */
#define SDMMC_CA1R_SDR104SUP                SDMMC_CA1R_SDR104SUP_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CA1R_SDR104SUP_Msk instead */
#define SDMMC_CA1R_DDR50SUP_Pos             2                                              /**< (SDMMC_CA1R) DDR50 Support Position */
#define SDMMC_CA1R_DDR50SUP_Msk             (_U_(0x1) << SDMMC_CA1R_DDR50SUP_Pos)          /**< (SDMMC_CA1R) DDR50 Support Mask */
#define SDMMC_CA1R_DDR50SUP                 SDMMC_CA1R_DDR50SUP_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CA1R_DDR50SUP_Msk instead */
#define SDMMC_CA1R_DRVASUP_Pos              4                                              /**< (SDMMC_CA1R) Driver Type A Support Position */
#define SDMMC_CA1R_DRVASUP_Msk              (_U_(0x1) << SDMMC_CA1R_DRVASUP_Pos)           /**< (SDMMC_CA1R) Driver Type A Support Mask */
#define SDMMC_CA1R_DRVASUP                  SDMMC_CA1R_DRVASUP_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CA1R_DRVASUP_Msk instead */
#define SDMMC_CA1R_DRVCSUP_Pos              5                                              /**< (SDMMC_CA1R) Driver Type C Support Position */
#define SDMMC_CA1R_DRVCSUP_Msk              (_U_(0x1) << SDMMC_CA1R_DRVCSUP_Pos)           /**< (SDMMC_CA1R) Driver Type C Support Mask */
#define SDMMC_CA1R_DRVCSUP                  SDMMC_CA1R_DRVCSUP_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CA1R_DRVCSUP_Msk instead */
#define SDMMC_CA1R_DRVDSUP_Pos              6                                              /**< (SDMMC_CA1R) Driver Type D Support Position */
#define SDMMC_CA1R_DRVDSUP_Msk              (_U_(0x1) << SDMMC_CA1R_DRVDSUP_Pos)           /**< (SDMMC_CA1R) Driver Type D Support Mask */
#define SDMMC_CA1R_DRVDSUP                  SDMMC_CA1R_DRVDSUP_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CA1R_DRVDSUP_Msk instead */
#define SDMMC_CA1R_TCNTRT_Pos               8                                              /**< (SDMMC_CA1R) Timer Count For Retuning Position */
#define SDMMC_CA1R_TCNTRT_Msk               (_U_(0xF) << SDMMC_CA1R_TCNTRT_Pos)            /**< (SDMMC_CA1R) Timer Count For Retuning Mask */
#define SDMMC_CA1R_TCNTRT(value)            (SDMMC_CA1R_TCNTRT_Msk & ((value) << SDMMC_CA1R_TCNTRT_Pos))
#define SDMMC_CA1R_TSDR50_Pos               13                                             /**< (SDMMC_CA1R) Use Tuning for SDR50 Position */
#define SDMMC_CA1R_TSDR50_Msk               (_U_(0x1) << SDMMC_CA1R_TSDR50_Pos)            /**< (SDMMC_CA1R) Use Tuning for SDR50 Mask */
#define SDMMC_CA1R_TSDR50                   SDMMC_CA1R_TSDR50_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CA1R_TSDR50_Msk instead */
#define SDMMC_CA1R_RTMOD_Pos                14                                             /**< (SDMMC_CA1R) Retuning Modes Position */
#define SDMMC_CA1R_RTMOD_Msk                (_U_(0x3) << SDMMC_CA1R_RTMOD_Pos)             /**< (SDMMC_CA1R) Retuning Modes Mask */
#define SDMMC_CA1R_RTMOD(value)             (SDMMC_CA1R_RTMOD_Msk & ((value) << SDMMC_CA1R_RTMOD_Pos))
#define   SDMMC_CA1R_RTMOD_MODE1_Val        _U_(0x0)                                       /**< (SDMMC_CA1R) Timer  */
#define   SDMMC_CA1R_RTMOD_MODE2_Val        _U_(0x1)                                       /**< (SDMMC_CA1R) Timer and Retuning Request  */
#define   SDMMC_CA1R_RTMOD_MODE3_Val        _U_(0x2)                                       /**< (SDMMC_CA1R) Auto Retuning (for transfer) Timer and Retuning Request  */
#define SDMMC_CA1R_RTMOD_MODE1              (SDMMC_CA1R_RTMOD_MODE1_Val << SDMMC_CA1R_RTMOD_Pos)  /**< (SDMMC_CA1R) Timer Position  */
#define SDMMC_CA1R_RTMOD_MODE2              (SDMMC_CA1R_RTMOD_MODE2_Val << SDMMC_CA1R_RTMOD_Pos)  /**< (SDMMC_CA1R) Timer and Retuning Request Position  */
#define SDMMC_CA1R_RTMOD_MODE3              (SDMMC_CA1R_RTMOD_MODE3_Val << SDMMC_CA1R_RTMOD_Pos)  /**< (SDMMC_CA1R) Auto Retuning (for transfer) Timer and Retuning Request Position  */
#define SDMMC_CA1R_CLKMULT_Pos              16                                             /**< (SDMMC_CA1R) Clock Multiplier Position */
#define SDMMC_CA1R_CLKMULT_Msk              (_U_(0xFF) << SDMMC_CA1R_CLKMULT_Pos)          /**< (SDMMC_CA1R) Clock Multiplier Mask */
#define SDMMC_CA1R_CLKMULT(value)           (SDMMC_CA1R_CLKMULT_Msk & ((value) << SDMMC_CA1R_CLKMULT_Pos))
#define SDMMC_CA1R_MASK                     _U_(0xFFEF77)                                  /**< \deprecated (SDMMC_CA1R) Register MASK  (Use SDMMC_CA1R_Msk instead)  */
#define SDMMC_CA1R_Msk                      _U_(0xFFEF77)                                  /**< (SDMMC_CA1R) Register Mask  */

#define SDMMC_CA1R_TSDR_Pos                 13                                             /**< (SDMMC_CA1R Position) Use Tuning for SDR5x */
#define SDMMC_CA1R_TSDR_Msk                 (_U_(0x1) << SDMMC_CA1R_TSDR_Pos)              /**< (SDMMC_CA1R Mask) TSDR */
#define SDMMC_CA1R_TSDR(value)              (SDMMC_CA1R_TSDR_Msk & ((value) << SDMMC_CA1R_TSDR_Pos))  

/* -------- SDMMC_MCCAR : (SDMMC Offset: 0x48) (R/W 32) Maximum Current Capabilities Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MAXCUR33V:8;               /**< bit:   0..7  Maximum Current for 3.3V                 */
    uint32_t MAXCUR30V:8;               /**< bit:  8..15  Maximum Current for 3.0V                 */
    uint32_t MAXCUR18V:8;               /**< bit: 16..23  Maximum Current for 1.8V                 */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SDMMC_MCCAR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_MCCAR_OFFSET                  (0x48)                                        /**<  (SDMMC_MCCAR) Maximum Current Capabilities Register  Offset */

#define SDMMC_MCCAR_MAXCUR33V_Pos           0                                              /**< (SDMMC_MCCAR) Maximum Current for 3.3V Position */
#define SDMMC_MCCAR_MAXCUR33V_Msk           (_U_(0xFF) << SDMMC_MCCAR_MAXCUR33V_Pos)       /**< (SDMMC_MCCAR) Maximum Current for 3.3V Mask */
#define SDMMC_MCCAR_MAXCUR33V(value)        (SDMMC_MCCAR_MAXCUR33V_Msk & ((value) << SDMMC_MCCAR_MAXCUR33V_Pos))
#define SDMMC_MCCAR_MAXCUR30V_Pos           8                                              /**< (SDMMC_MCCAR) Maximum Current for 3.0V Position */
#define SDMMC_MCCAR_MAXCUR30V_Msk           (_U_(0xFF) << SDMMC_MCCAR_MAXCUR30V_Pos)       /**< (SDMMC_MCCAR) Maximum Current for 3.0V Mask */
#define SDMMC_MCCAR_MAXCUR30V(value)        (SDMMC_MCCAR_MAXCUR30V_Msk & ((value) << SDMMC_MCCAR_MAXCUR30V_Pos))
#define SDMMC_MCCAR_MAXCUR18V_Pos           16                                             /**< (SDMMC_MCCAR) Maximum Current for 1.8V Position */
#define SDMMC_MCCAR_MAXCUR18V_Msk           (_U_(0xFF) << SDMMC_MCCAR_MAXCUR18V_Pos)       /**< (SDMMC_MCCAR) Maximum Current for 1.8V Mask */
#define SDMMC_MCCAR_MAXCUR18V(value)        (SDMMC_MCCAR_MAXCUR18V_Msk & ((value) << SDMMC_MCCAR_MAXCUR18V_Pos))
#define SDMMC_MCCAR_MASK                    _U_(0xFFFFFF)                                  /**< \deprecated (SDMMC_MCCAR) Register MASK  (Use SDMMC_MCCAR_Msk instead)  */
#define SDMMC_MCCAR_Msk                     _U_(0xFFFFFF)                                  /**< (SDMMC_MCCAR) Register Mask  */


/* -------- SDMMC_FERACES : (SDMMC Offset: 0x50) (/W 16) Force Event Register for Auto CMD Error Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t ACMD12NE:1;                /**< bit:      0  Force Event for Auto CMD12 Not Executed  */
    uint16_t ACMDTEO:1;                 /**< bit:      1  Force Event for Auto CMD Timeout Error   */
    uint16_t ACMDCRC:1;                 /**< bit:      2  Force Event for Auto CMD CRC Error       */
    uint16_t ACMDEND:1;                 /**< bit:      3  Force Event for Auto CMD End Bit Error   */
    uint16_t ACMDIDX:1;                 /**< bit:      4  Force Event for Auto CMD Index Error     */
    uint16_t :2;                        /**< bit:   5..6  Reserved */
    uint16_t CMDNI:1;                   /**< bit:      7  Force Event for Command Not Issued by Auto CMD12 Error */
    uint16_t :8;                        /**< bit:  8..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} SDMMC_FERACES_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_FERACES_OFFSET                (0x50)                                        /**<  (SDMMC_FERACES) Force Event Register for Auto CMD Error Status  Offset */

#define SDMMC_FERACES_ACMD12NE_Pos          0                                              /**< (SDMMC_FERACES) Force Event for Auto CMD12 Not Executed Position */
#define SDMMC_FERACES_ACMD12NE_Msk          (_U_(0x1) << SDMMC_FERACES_ACMD12NE_Pos)       /**< (SDMMC_FERACES) Force Event for Auto CMD12 Not Executed Mask */
#define SDMMC_FERACES_ACMD12NE              SDMMC_FERACES_ACMD12NE_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_FERACES_ACMD12NE_Msk instead */
#define SDMMC_FERACES_ACMDTEO_Pos           1                                              /**< (SDMMC_FERACES) Force Event for Auto CMD Timeout Error Position */
#define SDMMC_FERACES_ACMDTEO_Msk           (_U_(0x1) << SDMMC_FERACES_ACMDTEO_Pos)        /**< (SDMMC_FERACES) Force Event for Auto CMD Timeout Error Mask */
#define SDMMC_FERACES_ACMDTEO               SDMMC_FERACES_ACMDTEO_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_FERACES_ACMDTEO_Msk instead */
#define SDMMC_FERACES_ACMDCRC_Pos           2                                              /**< (SDMMC_FERACES) Force Event for Auto CMD CRC Error Position */
#define SDMMC_FERACES_ACMDCRC_Msk           (_U_(0x1) << SDMMC_FERACES_ACMDCRC_Pos)        /**< (SDMMC_FERACES) Force Event for Auto CMD CRC Error Mask */
#define SDMMC_FERACES_ACMDCRC               SDMMC_FERACES_ACMDCRC_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_FERACES_ACMDCRC_Msk instead */
#define SDMMC_FERACES_ACMDEND_Pos           3                                              /**< (SDMMC_FERACES) Force Event for Auto CMD End Bit Error Position */
#define SDMMC_FERACES_ACMDEND_Msk           (_U_(0x1) << SDMMC_FERACES_ACMDEND_Pos)        /**< (SDMMC_FERACES) Force Event for Auto CMD End Bit Error Mask */
#define SDMMC_FERACES_ACMDEND               SDMMC_FERACES_ACMDEND_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_FERACES_ACMDEND_Msk instead */
#define SDMMC_FERACES_ACMDIDX_Pos           4                                              /**< (SDMMC_FERACES) Force Event for Auto CMD Index Error Position */
#define SDMMC_FERACES_ACMDIDX_Msk           (_U_(0x1) << SDMMC_FERACES_ACMDIDX_Pos)        /**< (SDMMC_FERACES) Force Event for Auto CMD Index Error Mask */
#define SDMMC_FERACES_ACMDIDX               SDMMC_FERACES_ACMDIDX_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_FERACES_ACMDIDX_Msk instead */
#define SDMMC_FERACES_CMDNI_Pos             7                                              /**< (SDMMC_FERACES) Force Event for Command Not Issued by Auto CMD12 Error Position */
#define SDMMC_FERACES_CMDNI_Msk             (_U_(0x1) << SDMMC_FERACES_CMDNI_Pos)          /**< (SDMMC_FERACES) Force Event for Command Not Issued by Auto CMD12 Error Mask */
#define SDMMC_FERACES_CMDNI                 SDMMC_FERACES_CMDNI_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_FERACES_CMDNI_Msk instead */
#define SDMMC_FERACES_MASK                  _U_(0x9F)                                      /**< \deprecated (SDMMC_FERACES) Register MASK  (Use SDMMC_FERACES_Msk instead)  */
#define SDMMC_FERACES_Msk                   _U_(0x9F)                                      /**< (SDMMC_FERACES) Register Mask  */


/* -------- SDMMC_FEREIS : (SDMMC Offset: 0x52) (/W 16) Force Event Register for Error Interrupt Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t CMDTEO:1;                  /**< bit:      0  Force Event for Command Timeout Error    */
    uint16_t CMDCRC:1;                  /**< bit:      1  Force Event for Command CRC Error        */
    uint16_t CMDEND:1;                  /**< bit:      2  Force Event for Command End Bit Error    */
    uint16_t CMDIDX:1;                  /**< bit:      3  Force Event for Command Index Error      */
    uint16_t DATTEO:1;                  /**< bit:      4  Force Event for Data Timeout error       */
    uint16_t DATCRC:1;                  /**< bit:      5  Force Event for Data CRC error           */
    uint16_t DATEND:1;                  /**< bit:      6  Force Event for Data End Bit Error       */
    uint16_t CURLIM:1;                  /**< bit:      7  Force Event for Current Limit Error      */
    uint16_t ACMD:1;                    /**< bit:      8  Force Event for Auto CMD Error           */
    uint16_t ADMA:1;                    /**< bit:      9  Force Event for ADMA Error               */
    uint16_t :2;                        /**< bit: 10..11  Reserved */
    uint16_t BOOTAE:1;                  /**< bit:     12  Force Event for Boot Acknowledge Error   */
    uint16_t :3;                        /**< bit: 13..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} SDMMC_FEREIS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_FEREIS_OFFSET                 (0x52)                                        /**<  (SDMMC_FEREIS) Force Event Register for Error Interrupt Status  Offset */

#define SDMMC_FEREIS_CMDTEO_Pos             0                                              /**< (SDMMC_FEREIS) Force Event for Command Timeout Error Position */
#define SDMMC_FEREIS_CMDTEO_Msk             (_U_(0x1) << SDMMC_FEREIS_CMDTEO_Pos)          /**< (SDMMC_FEREIS) Force Event for Command Timeout Error Mask */
#define SDMMC_FEREIS_CMDTEO                 SDMMC_FEREIS_CMDTEO_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_FEREIS_CMDTEO_Msk instead */
#define SDMMC_FEREIS_CMDCRC_Pos             1                                              /**< (SDMMC_FEREIS) Force Event for Command CRC Error Position */
#define SDMMC_FEREIS_CMDCRC_Msk             (_U_(0x1) << SDMMC_FEREIS_CMDCRC_Pos)          /**< (SDMMC_FEREIS) Force Event for Command CRC Error Mask */
#define SDMMC_FEREIS_CMDCRC                 SDMMC_FEREIS_CMDCRC_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_FEREIS_CMDCRC_Msk instead */
#define SDMMC_FEREIS_CMDEND_Pos             2                                              /**< (SDMMC_FEREIS) Force Event for Command End Bit Error Position */
#define SDMMC_FEREIS_CMDEND_Msk             (_U_(0x1) << SDMMC_FEREIS_CMDEND_Pos)          /**< (SDMMC_FEREIS) Force Event for Command End Bit Error Mask */
#define SDMMC_FEREIS_CMDEND                 SDMMC_FEREIS_CMDEND_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_FEREIS_CMDEND_Msk instead */
#define SDMMC_FEREIS_CMDIDX_Pos             3                                              /**< (SDMMC_FEREIS) Force Event for Command Index Error Position */
#define SDMMC_FEREIS_CMDIDX_Msk             (_U_(0x1) << SDMMC_FEREIS_CMDIDX_Pos)          /**< (SDMMC_FEREIS) Force Event for Command Index Error Mask */
#define SDMMC_FEREIS_CMDIDX                 SDMMC_FEREIS_CMDIDX_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_FEREIS_CMDIDX_Msk instead */
#define SDMMC_FEREIS_DATTEO_Pos             4                                              /**< (SDMMC_FEREIS) Force Event for Data Timeout error Position */
#define SDMMC_FEREIS_DATTEO_Msk             (_U_(0x1) << SDMMC_FEREIS_DATTEO_Pos)          /**< (SDMMC_FEREIS) Force Event for Data Timeout error Mask */
#define SDMMC_FEREIS_DATTEO                 SDMMC_FEREIS_DATTEO_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_FEREIS_DATTEO_Msk instead */
#define SDMMC_FEREIS_DATCRC_Pos             5                                              /**< (SDMMC_FEREIS) Force Event for Data CRC error Position */
#define SDMMC_FEREIS_DATCRC_Msk             (_U_(0x1) << SDMMC_FEREIS_DATCRC_Pos)          /**< (SDMMC_FEREIS) Force Event for Data CRC error Mask */
#define SDMMC_FEREIS_DATCRC                 SDMMC_FEREIS_DATCRC_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_FEREIS_DATCRC_Msk instead */
#define SDMMC_FEREIS_DATEND_Pos             6                                              /**< (SDMMC_FEREIS) Force Event for Data End Bit Error Position */
#define SDMMC_FEREIS_DATEND_Msk             (_U_(0x1) << SDMMC_FEREIS_DATEND_Pos)          /**< (SDMMC_FEREIS) Force Event for Data End Bit Error Mask */
#define SDMMC_FEREIS_DATEND                 SDMMC_FEREIS_DATEND_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_FEREIS_DATEND_Msk instead */
#define SDMMC_FEREIS_CURLIM_Pos             7                                              /**< (SDMMC_FEREIS) Force Event for Current Limit Error Position */
#define SDMMC_FEREIS_CURLIM_Msk             (_U_(0x1) << SDMMC_FEREIS_CURLIM_Pos)          /**< (SDMMC_FEREIS) Force Event for Current Limit Error Mask */
#define SDMMC_FEREIS_CURLIM                 SDMMC_FEREIS_CURLIM_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_FEREIS_CURLIM_Msk instead */
#define SDMMC_FEREIS_ACMD_Pos               8                                              /**< (SDMMC_FEREIS) Force Event for Auto CMD Error Position */
#define SDMMC_FEREIS_ACMD_Msk               (_U_(0x1) << SDMMC_FEREIS_ACMD_Pos)            /**< (SDMMC_FEREIS) Force Event for Auto CMD Error Mask */
#define SDMMC_FEREIS_ACMD                   SDMMC_FEREIS_ACMD_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_FEREIS_ACMD_Msk instead */
#define SDMMC_FEREIS_ADMA_Pos               9                                              /**< (SDMMC_FEREIS) Force Event for ADMA Error Position */
#define SDMMC_FEREIS_ADMA_Msk               (_U_(0x1) << SDMMC_FEREIS_ADMA_Pos)            /**< (SDMMC_FEREIS) Force Event for ADMA Error Mask */
#define SDMMC_FEREIS_ADMA                   SDMMC_FEREIS_ADMA_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_FEREIS_ADMA_Msk instead */
#define SDMMC_FEREIS_BOOTAE_Pos             12                                             /**< (SDMMC_FEREIS) Force Event for Boot Acknowledge Error Position */
#define SDMMC_FEREIS_BOOTAE_Msk             (_U_(0x1) << SDMMC_FEREIS_BOOTAE_Pos)          /**< (SDMMC_FEREIS) Force Event for Boot Acknowledge Error Mask */
#define SDMMC_FEREIS_BOOTAE                 SDMMC_FEREIS_BOOTAE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_FEREIS_BOOTAE_Msk instead */
#define SDMMC_FEREIS_MASK                   _U_(0x13FF)                                    /**< \deprecated (SDMMC_FEREIS) Register MASK  (Use SDMMC_FEREIS_Msk instead)  */
#define SDMMC_FEREIS_Msk                    _U_(0x13FF)                                    /**< (SDMMC_FEREIS) Register Mask  */


/* -------- SDMMC_AESR : (SDMMC Offset: 0x54) (R/ 8) ADMA Error Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  ERRST:2;                   /**< bit:   0..1  ADMA Error State                         */
    uint8_t  LMIS:1;                    /**< bit:      2  ADMA Length Mismatch Error               */
    uint8_t  :5;                        /**< bit:   3..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SDMMC_AESR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_AESR_OFFSET                   (0x54)                                        /**<  (SDMMC_AESR) ADMA Error Status Register  Offset */

#define SDMMC_AESR_ERRST_Pos                0                                              /**< (SDMMC_AESR) ADMA Error State Position */
#define SDMMC_AESR_ERRST_Msk                (_U_(0x3) << SDMMC_AESR_ERRST_Pos)             /**< (SDMMC_AESR) ADMA Error State Mask */
#define SDMMC_AESR_ERRST(value)             (SDMMC_AESR_ERRST_Msk & ((value) << SDMMC_AESR_ERRST_Pos))
#define SDMMC_AESR_LMIS_Pos                 2                                              /**< (SDMMC_AESR) ADMA Length Mismatch Error Position */
#define SDMMC_AESR_LMIS_Msk                 (_U_(0x1) << SDMMC_AESR_LMIS_Pos)              /**< (SDMMC_AESR) ADMA Length Mismatch Error Mask */
#define SDMMC_AESR_LMIS                     SDMMC_AESR_LMIS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_AESR_LMIS_Msk instead */
#define SDMMC_AESR_MASK                     _U_(0x07)                                      /**< \deprecated (SDMMC_AESR) Register MASK  (Use SDMMC_AESR_Msk instead)  */
#define SDMMC_AESR_Msk                      _U_(0x07)                                      /**< (SDMMC_AESR) Register Mask  */


/* -------- SDMMC_ASAR0 : (SDMMC Offset: 0x58) (R/W 32) ADMA System Address Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADMASA:32;                 /**< bit:  0..31  ADMA System Address                      */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SDMMC_ASAR0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_ASAR0_OFFSET                  (0x58)                                        /**<  (SDMMC_ASAR0) ADMA System Address Register 0  Offset */

#define SDMMC_ASAR0_ADMASA_Pos              0                                              /**< (SDMMC_ASAR0) ADMA System Address Position */
#define SDMMC_ASAR0_ADMASA_Msk              (_U_(0xFFFFFFFF) << SDMMC_ASAR0_ADMASA_Pos)    /**< (SDMMC_ASAR0) ADMA System Address Mask */
#define SDMMC_ASAR0_ADMASA(value)           (SDMMC_ASAR0_ADMASA_Msk & ((value) << SDMMC_ASAR0_ADMASA_Pos))
#define SDMMC_ASAR0_MASK                    _U_(0xFFFFFFFF)                                /**< \deprecated (SDMMC_ASAR0) Register MASK  (Use SDMMC_ASAR0_Msk instead)  */
#define SDMMC_ASAR0_Msk                     _U_(0xFFFFFFFF)                                /**< (SDMMC_ASAR0) Register Mask  */


/* -------- SDMMC_PVR : (SDMMC Offset: 0x60) (R/W 16) Preset Value Register 0 (for initialization) -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t SDCLKFSEL:10;              /**< bit:   0..9  SDCLK Frequency Select                   */
    uint16_t CLKGSEL:1;                 /**< bit:     10  Clock Generator Select                   */
    uint16_t :3;                        /**< bit: 11..13  Reserved */
    uint16_t DRVSEL:2;                  /**< bit: 14..15  Driver Strength Select                   */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} SDMMC_PVR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_PVR_OFFSET                    (0x60)                                        /**<  (SDMMC_PVR) Preset Value Register 0 (for initialization)  Offset */

#define SDMMC_PVR_SDCLKFSEL_Pos             0                                              /**< (SDMMC_PVR) SDCLK Frequency Select Position */
#define SDMMC_PVR_SDCLKFSEL_Msk             (_U_(0x3FF) << SDMMC_PVR_SDCLKFSEL_Pos)        /**< (SDMMC_PVR) SDCLK Frequency Select Mask */
#define SDMMC_PVR_SDCLKFSEL(value)          (SDMMC_PVR_SDCLKFSEL_Msk & ((value) << SDMMC_PVR_SDCLKFSEL_Pos))
#define SDMMC_PVR_CLKGSEL_Pos               10                                             /**< (SDMMC_PVR) Clock Generator Select Position */
#define SDMMC_PVR_CLKGSEL_Msk               (_U_(0x1) << SDMMC_PVR_CLKGSEL_Pos)            /**< (SDMMC_PVR) Clock Generator Select Mask */
#define SDMMC_PVR_CLKGSEL                   SDMMC_PVR_CLKGSEL_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_PVR_CLKGSEL_Msk instead */
#define SDMMC_PVR_DRVSEL_Pos                14                                             /**< (SDMMC_PVR) Driver Strength Select Position */
#define SDMMC_PVR_DRVSEL_Msk                (_U_(0x3) << SDMMC_PVR_DRVSEL_Pos)             /**< (SDMMC_PVR) Driver Strength Select Mask */
#define SDMMC_PVR_DRVSEL(value)             (SDMMC_PVR_DRVSEL_Msk & ((value) << SDMMC_PVR_DRVSEL_Pos))
#define SDMMC_PVR_MASK                      _U_(0xC7FF)                                    /**< \deprecated (SDMMC_PVR) Register MASK  (Use SDMMC_PVR_Msk instead)  */
#define SDMMC_PVR_Msk                       _U_(0xC7FF)                                    /**< (SDMMC_PVR) Register Mask  */


/* -------- SDMMC_SISR : (SDMMC Offset: 0xfc) (R/ 16) Slot Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t INTSSL:2;                  /**< bit:   0..1  Interrupt Signal for Each Slot           */
    uint16_t :14;                       /**< bit:  2..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} SDMMC_SISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_SISR_OFFSET                   (0xFC)                                        /**<  (SDMMC_SISR) Slot Interrupt Status Register  Offset */

#define SDMMC_SISR_INTSSL_Pos               0                                              /**< (SDMMC_SISR) Interrupt Signal for Each Slot Position */
#define SDMMC_SISR_INTSSL_Msk               (_U_(0x3) << SDMMC_SISR_INTSSL_Pos)            /**< (SDMMC_SISR) Interrupt Signal for Each Slot Mask */
#define SDMMC_SISR_INTSSL(value)            (SDMMC_SISR_INTSSL_Msk & ((value) << SDMMC_SISR_INTSSL_Pos))
#define SDMMC_SISR_MASK                     _U_(0x03)                                      /**< \deprecated (SDMMC_SISR) Register MASK  (Use SDMMC_SISR_Msk instead)  */
#define SDMMC_SISR_Msk                      _U_(0x03)                                      /**< (SDMMC_SISR) Register Mask  */


/* -------- SDMMC_HCVR : (SDMMC Offset: 0xfe) (R/ 16) Host Controller Version Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t SVER:8;                    /**< bit:   0..7  Specification Version Number             */
    uint16_t VVER:8;                    /**< bit:  8..15  Vendor Version Number                    */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} SDMMC_HCVR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_HCVR_OFFSET                   (0xFE)                                        /**<  (SDMMC_HCVR) Host Controller Version Register  Offset */

#define SDMMC_HCVR_SVER_Pos                 0                                              /**< (SDMMC_HCVR) Specification Version Number Position */
#define SDMMC_HCVR_SVER_Msk                 (_U_(0xFF) << SDMMC_HCVR_SVER_Pos)             /**< (SDMMC_HCVR) Specification Version Number Mask */
#define SDMMC_HCVR_SVER(value)              (SDMMC_HCVR_SVER_Msk & ((value) << SDMMC_HCVR_SVER_Pos))
#define SDMMC_HCVR_VVER_Pos                 8                                              /**< (SDMMC_HCVR) Vendor Version Number Position */
#define SDMMC_HCVR_VVER_Msk                 (_U_(0xFF) << SDMMC_HCVR_VVER_Pos)             /**< (SDMMC_HCVR) Vendor Version Number Mask */
#define SDMMC_HCVR_VVER(value)              (SDMMC_HCVR_VVER_Msk & ((value) << SDMMC_HCVR_VVER_Pos))
#define SDMMC_HCVR_MASK                     _U_(0xFFFF)                                    /**< \deprecated (SDMMC_HCVR) Register MASK  (Use SDMMC_HCVR_Msk instead)  */
#define SDMMC_HCVR_Msk                      _U_(0xFFFF)                                    /**< (SDMMC_HCVR) Register Mask  */


/* -------- SDMMC_APSR : (SDMMC Offset: 0x200) (R/ 32) Additional Present State Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t HDATLL:4;                  /**< bit:   0..3  DAT[7:4] High Line Level                 */
    uint32_t :28;                       /**< bit:  4..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SDMMC_APSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_APSR_OFFSET                   (0x200)                                       /**<  (SDMMC_APSR) Additional Present State Register  Offset */

#define SDMMC_APSR_HDATLL_Pos               0                                              /**< (SDMMC_APSR) DAT[7:4] High Line Level Position */
#define SDMMC_APSR_HDATLL_Msk               (_U_(0xF) << SDMMC_APSR_HDATLL_Pos)            /**< (SDMMC_APSR) DAT[7:4] High Line Level Mask */
#define SDMMC_APSR_HDATLL(value)            (SDMMC_APSR_HDATLL_Msk & ((value) << SDMMC_APSR_HDATLL_Pos))
#define SDMMC_APSR_MASK                     _U_(0x0F)                                      /**< \deprecated (SDMMC_APSR) Register MASK  (Use SDMMC_APSR_Msk instead)  */
#define SDMMC_APSR_Msk                      _U_(0x0F)                                      /**< (SDMMC_APSR) Register Mask  */


/* -------- SDMMC_MC1R : (SDMMC Offset: 0x204) (R/W 8) e.MMC Control 1 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  CMDTYP:2;                  /**< bit:   0..1  e.MMC Command Type                       */
    uint8_t  :1;                        /**< bit:      2  Reserved */
    uint8_t  DDR:1;                     /**< bit:      3  e.MMC HSDDR Mode                         */
    uint8_t  OPD:1;                     /**< bit:      4  e.MMC Open Drain Mode                    */
    uint8_t  BOOTA:1;                   /**< bit:      5  e.MMC Boot Acknowledge Enable            */
    uint8_t  RSTN:1;                    /**< bit:      6  e.MMC Reset Signal                       */
    uint8_t  FCD:1;                     /**< bit:      7  e.MMC Force Card Detect                  */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SDMMC_MC1R_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_MC1R_OFFSET                   (0x204)                                       /**<  (SDMMC_MC1R) e.MMC Control 1 Register  Offset */

#define SDMMC_MC1R_CMDTYP_Pos               0                                              /**< (SDMMC_MC1R) e.MMC Command Type Position */
#define SDMMC_MC1R_CMDTYP_Msk               (_U_(0x3) << SDMMC_MC1R_CMDTYP_Pos)            /**< (SDMMC_MC1R) e.MMC Command Type Mask */
#define SDMMC_MC1R_CMDTYP(value)            (SDMMC_MC1R_CMDTYP_Msk & ((value) << SDMMC_MC1R_CMDTYP_Pos))
#define   SDMMC_MC1R_CMDTYP_NORMAL_Val      _U_(0x0)                                       /**< (SDMMC_MC1R) The command is not an e.MMC specific command.  */
#define   SDMMC_MC1R_CMDTYP_WAITIRQ_Val     _U_(0x1)                                       /**< (SDMMC_MC1R) This bit must be set to 1 when the e.MMC is in Interrupt mode (CMD40). Refer to "Interrupt Mode" in the "Embedded MultiMedia Card (e.MMC) Electrical Standard 4.51" .  */
#define   SDMMC_MC1R_CMDTYP_STREAM_Val      _U_(0x2)                                       /**< (SDMMC_MC1R) This bit must be set to 1 in the case of Stream Read(CMD11) or Stream Write (CMD20). Only effective for e.MMC up to revision 4.41.  */
#define   SDMMC_MC1R_CMDTYP_BOOT_Val        _U_(0x3)                                       /**< (SDMMC_MC1R) Starts a Boot Operation mode at the next write to SDMMC_CR. Boot data are read directly from e.MMC device.  */
#define SDMMC_MC1R_CMDTYP_NORMAL            (SDMMC_MC1R_CMDTYP_NORMAL_Val << SDMMC_MC1R_CMDTYP_Pos)  /**< (SDMMC_MC1R) The command is not an e.MMC specific command. Position  */
#define SDMMC_MC1R_CMDTYP_WAITIRQ           (SDMMC_MC1R_CMDTYP_WAITIRQ_Val << SDMMC_MC1R_CMDTYP_Pos)  /**< (SDMMC_MC1R) This bit must be set to 1 when the e.MMC is in Interrupt mode (CMD40). Refer to "Interrupt Mode" in the "Embedded MultiMedia Card (e.MMC) Electrical Standard 4.51" . Position  */
#define SDMMC_MC1R_CMDTYP_STREAM            (SDMMC_MC1R_CMDTYP_STREAM_Val << SDMMC_MC1R_CMDTYP_Pos)  /**< (SDMMC_MC1R) This bit must be set to 1 in the case of Stream Read(CMD11) or Stream Write (CMD20). Only effective for e.MMC up to revision 4.41. Position  */
#define SDMMC_MC1R_CMDTYP_BOOT              (SDMMC_MC1R_CMDTYP_BOOT_Val << SDMMC_MC1R_CMDTYP_Pos)  /**< (SDMMC_MC1R) Starts a Boot Operation mode at the next write to SDMMC_CR. Boot data are read directly from e.MMC device. Position  */
#define SDMMC_MC1R_DDR_Pos                  3                                              /**< (SDMMC_MC1R) e.MMC HSDDR Mode Position */
#define SDMMC_MC1R_DDR_Msk                  (_U_(0x1) << SDMMC_MC1R_DDR_Pos)               /**< (SDMMC_MC1R) e.MMC HSDDR Mode Mask */
#define SDMMC_MC1R_DDR                      SDMMC_MC1R_DDR_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_MC1R_DDR_Msk instead */
#define SDMMC_MC1R_OPD_Pos                  4                                              /**< (SDMMC_MC1R) e.MMC Open Drain Mode Position */
#define SDMMC_MC1R_OPD_Msk                  (_U_(0x1) << SDMMC_MC1R_OPD_Pos)               /**< (SDMMC_MC1R) e.MMC Open Drain Mode Mask */
#define SDMMC_MC1R_OPD                      SDMMC_MC1R_OPD_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_MC1R_OPD_Msk instead */
#define SDMMC_MC1R_BOOTA_Pos                5                                              /**< (SDMMC_MC1R) e.MMC Boot Acknowledge Enable Position */
#define SDMMC_MC1R_BOOTA_Msk                (_U_(0x1) << SDMMC_MC1R_BOOTA_Pos)             /**< (SDMMC_MC1R) e.MMC Boot Acknowledge Enable Mask */
#define SDMMC_MC1R_BOOTA                    SDMMC_MC1R_BOOTA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_MC1R_BOOTA_Msk instead */
#define SDMMC_MC1R_RSTN_Pos                 6                                              /**< (SDMMC_MC1R) e.MMC Reset Signal Position */
#define SDMMC_MC1R_RSTN_Msk                 (_U_(0x1) << SDMMC_MC1R_RSTN_Pos)              /**< (SDMMC_MC1R) e.MMC Reset Signal Mask */
#define SDMMC_MC1R_RSTN                     SDMMC_MC1R_RSTN_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_MC1R_RSTN_Msk instead */
#define SDMMC_MC1R_FCD_Pos                  7                                              /**< (SDMMC_MC1R) e.MMC Force Card Detect Position */
#define SDMMC_MC1R_FCD_Msk                  (_U_(0x1) << SDMMC_MC1R_FCD_Pos)               /**< (SDMMC_MC1R) e.MMC Force Card Detect Mask */
#define SDMMC_MC1R_FCD                      SDMMC_MC1R_FCD_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_MC1R_FCD_Msk instead */
#define SDMMC_MC1R_MASK                     _U_(0xFB)                                      /**< \deprecated (SDMMC_MC1R) Register MASK  (Use SDMMC_MC1R_Msk instead)  */
#define SDMMC_MC1R_Msk                      _U_(0xFB)                                      /**< (SDMMC_MC1R) Register Mask  */


/* -------- SDMMC_MC2R : (SDMMC Offset: 0x205) (/W 8) e.MMC Control 2 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  SRESP:1;                   /**< bit:      0  e.MMC Abort Wait IRQ                     */
    uint8_t  ABOOT:1;                   /**< bit:      1  e.MMC Abort Boot                         */
    uint8_t  :6;                        /**< bit:   2..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SDMMC_MC2R_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_MC2R_OFFSET                   (0x205)                                       /**<  (SDMMC_MC2R) e.MMC Control 2 Register  Offset */

#define SDMMC_MC2R_SRESP_Pos                0                                              /**< (SDMMC_MC2R) e.MMC Abort Wait IRQ Position */
#define SDMMC_MC2R_SRESP_Msk                (_U_(0x1) << SDMMC_MC2R_SRESP_Pos)             /**< (SDMMC_MC2R) e.MMC Abort Wait IRQ Mask */
#define SDMMC_MC2R_SRESP                    SDMMC_MC2R_SRESP_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_MC2R_SRESP_Msk instead */
#define SDMMC_MC2R_ABOOT_Pos                1                                              /**< (SDMMC_MC2R) e.MMC Abort Boot Position */
#define SDMMC_MC2R_ABOOT_Msk                (_U_(0x1) << SDMMC_MC2R_ABOOT_Pos)             /**< (SDMMC_MC2R) e.MMC Abort Boot Mask */
#define SDMMC_MC2R_ABOOT                    SDMMC_MC2R_ABOOT_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_MC2R_ABOOT_Msk instead */
#define SDMMC_MC2R_MASK                     _U_(0x03)                                      /**< \deprecated (SDMMC_MC2R) Register MASK  (Use SDMMC_MC2R_Msk instead)  */
#define SDMMC_MC2R_Msk                      _U_(0x03)                                      /**< (SDMMC_MC2R) Register Mask  */


/* -------- SDMMC_ACR : (SDMMC Offset: 0x208) (R/W 32) AHB Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BMAX:2;                    /**< bit:   0..1  AHB Maximum Burst                        */
    uint32_t :30;                       /**< bit:  2..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SDMMC_ACR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_ACR_OFFSET                    (0x208)                                       /**<  (SDMMC_ACR) AHB Control Register  Offset */

#define SDMMC_ACR_BMAX_Pos                  0                                              /**< (SDMMC_ACR) AHB Maximum Burst Position */
#define SDMMC_ACR_BMAX_Msk                  (_U_(0x3) << SDMMC_ACR_BMAX_Pos)               /**< (SDMMC_ACR) AHB Maximum Burst Mask */
#define SDMMC_ACR_BMAX(value)               (SDMMC_ACR_BMAX_Msk & ((value) << SDMMC_ACR_BMAX_Pos))
#define   SDMMC_ACR_BMAX_INCR16_Val         _U_(0x0)                                       /**< (SDMMC_ACR) The maximum burst size is INCR16.  */
#define   SDMMC_ACR_BMAX_INCR8_Val          _U_(0x1)                                       /**< (SDMMC_ACR) The maximum burst size is INCR8.  */
#define   SDMMC_ACR_BMAX_INCR4_Val          _U_(0x2)                                       /**< (SDMMC_ACR) The maximum burst size is INCR4.  */
#define   SDMMC_ACR_BMAX_SINGLE_Val         _U_(0x3)                                       /**< (SDMMC_ACR) Only SINGLE transfers are performed.  */
#define SDMMC_ACR_BMAX_INCR16               (SDMMC_ACR_BMAX_INCR16_Val << SDMMC_ACR_BMAX_Pos)  /**< (SDMMC_ACR) The maximum burst size is INCR16. Position  */
#define SDMMC_ACR_BMAX_INCR8                (SDMMC_ACR_BMAX_INCR8_Val << SDMMC_ACR_BMAX_Pos)  /**< (SDMMC_ACR) The maximum burst size is INCR8. Position  */
#define SDMMC_ACR_BMAX_INCR4                (SDMMC_ACR_BMAX_INCR4_Val << SDMMC_ACR_BMAX_Pos)  /**< (SDMMC_ACR) The maximum burst size is INCR4. Position  */
#define SDMMC_ACR_BMAX_SINGLE               (SDMMC_ACR_BMAX_SINGLE_Val << SDMMC_ACR_BMAX_Pos)  /**< (SDMMC_ACR) Only SINGLE transfers are performed. Position  */
#define SDMMC_ACR_MASK                      _U_(0x03)                                      /**< \deprecated (SDMMC_ACR) Register MASK  (Use SDMMC_ACR_Msk instead)  */
#define SDMMC_ACR_Msk                       _U_(0x03)                                      /**< (SDMMC_ACR) Register Mask  */


/* -------- SDMMC_CC2R : (SDMMC Offset: 0x20c) (R/W 32) Clock Control 2 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t FSDCLKD:1;                 /**< bit:      0  Force SDCLK Disabled                     */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SDMMC_CC2R_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_CC2R_OFFSET                   (0x20C)                                       /**<  (SDMMC_CC2R) Clock Control 2 Register  Offset */

#define SDMMC_CC2R_FSDCLKD_Pos              0                                              /**< (SDMMC_CC2R) Force SDCLK Disabled Position */
#define SDMMC_CC2R_FSDCLKD_Msk              (_U_(0x1) << SDMMC_CC2R_FSDCLKD_Pos)           /**< (SDMMC_CC2R) Force SDCLK Disabled Mask */
#define SDMMC_CC2R_FSDCLKD                  SDMMC_CC2R_FSDCLKD_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CC2R_FSDCLKD_Msk instead */
#define SDMMC_CC2R_MASK                     _U_(0x01)                                      /**< \deprecated (SDMMC_CC2R) Register MASK  (Use SDMMC_CC2R_Msk instead)  */
#define SDMMC_CC2R_Msk                      _U_(0x01)                                      /**< (SDMMC_CC2R) Register Mask  */


/* -------- SDMMC_RTC1R : (SDMMC Offset: 0x210) (R/W 8) Retuning Timer Control 1 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  TMREN:1;                   /**< bit:      0  Retuning Timer Enable                    */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SDMMC_RTC1R_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_RTC1R_OFFSET                  (0x210)                                       /**<  (SDMMC_RTC1R) Retuning Timer Control 1 Register  Offset */

#define SDMMC_RTC1R_TMREN_Pos               0                                              /**< (SDMMC_RTC1R) Retuning Timer Enable Position */
#define SDMMC_RTC1R_TMREN_Msk               (_U_(0x1) << SDMMC_RTC1R_TMREN_Pos)            /**< (SDMMC_RTC1R) Retuning Timer Enable Mask */
#define SDMMC_RTC1R_TMREN                   SDMMC_RTC1R_TMREN_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_RTC1R_TMREN_Msk instead */
#define   SDMMC_RTC1R_TMREN_DISABLED_Val    _U_(0x0)                                       /**< (SDMMC_RTC1R) The retuning timer is disabled.  */
#define   SDMMC_RTC1R_TMREN_ENABLED_Val     _U_(0x1)                                       /**< (SDMMC_RTC1R) The retuning timer is enabled.  */
#define SDMMC_RTC1R_TMREN_DISABLED          (SDMMC_RTC1R_TMREN_DISABLED_Val << SDMMC_RTC1R_TMREN_Pos)  /**< (SDMMC_RTC1R) The retuning timer is disabled. Position  */
#define SDMMC_RTC1R_TMREN_ENABLED           (SDMMC_RTC1R_TMREN_ENABLED_Val << SDMMC_RTC1R_TMREN_Pos)  /**< (SDMMC_RTC1R) The retuning timer is enabled. Position  */
#define SDMMC_RTC1R_MASK                    _U_(0x01)                                      /**< \deprecated (SDMMC_RTC1R) Register MASK  (Use SDMMC_RTC1R_Msk instead)  */
#define SDMMC_RTC1R_Msk                     _U_(0x01)                                      /**< (SDMMC_RTC1R) Register Mask  */


/* -------- SDMMC_RTC2R : (SDMMC Offset: 0x211) (/W 8) Retuning Timer Control 2 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  RLD:1;                     /**< bit:      0  Retuning Timer Reload                    */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SDMMC_RTC2R_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_RTC2R_OFFSET                  (0x211)                                       /**<  (SDMMC_RTC2R) Retuning Timer Control 2 Register  Offset */

#define SDMMC_RTC2R_RLD_Pos                 0                                              /**< (SDMMC_RTC2R) Retuning Timer Reload Position */
#define SDMMC_RTC2R_RLD_Msk                 (_U_(0x1) << SDMMC_RTC2R_RLD_Pos)              /**< (SDMMC_RTC2R) Retuning Timer Reload Mask */
#define SDMMC_RTC2R_RLD                     SDMMC_RTC2R_RLD_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_RTC2R_RLD_Msk instead */
#define SDMMC_RTC2R_MASK                    _U_(0x01)                                      /**< \deprecated (SDMMC_RTC2R) Register MASK  (Use SDMMC_RTC2R_Msk instead)  */
#define SDMMC_RTC2R_Msk                     _U_(0x01)                                      /**< (SDMMC_RTC2R) Register Mask  */


/* -------- SDMMC_RTCVR : (SDMMC Offset: 0x214) (R/W 32) Retuning Timer Counter Value Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TCVAL:4;                   /**< bit:   0..3  Retuning Timer Counter Value             */
    uint32_t :28;                       /**< bit:  4..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SDMMC_RTCVR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_RTCVR_OFFSET                  (0x214)                                       /**<  (SDMMC_RTCVR) Retuning Timer Counter Value Register  Offset */

#define SDMMC_RTCVR_TCVAL_Pos               0                                              /**< (SDMMC_RTCVR) Retuning Timer Counter Value Position */
#define SDMMC_RTCVR_TCVAL_Msk               (_U_(0xF) << SDMMC_RTCVR_TCVAL_Pos)            /**< (SDMMC_RTCVR) Retuning Timer Counter Value Mask */
#define SDMMC_RTCVR_TCVAL(value)            (SDMMC_RTCVR_TCVAL_Msk & ((value) << SDMMC_RTCVR_TCVAL_Pos))
#define SDMMC_RTCVR_MASK                    _U_(0x0F)                                      /**< \deprecated (SDMMC_RTCVR) Register MASK  (Use SDMMC_RTCVR_Msk instead)  */
#define SDMMC_RTCVR_Msk                     _U_(0x0F)                                      /**< (SDMMC_RTCVR) Register Mask  */


/* -------- SDMMC_RTISTER : (SDMMC Offset: 0x218) (R/W 8) Retuning Timer Interrupt Status Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  TEVT:1;                    /**< bit:      0  Retuning Timer Event                     */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SDMMC_RTISTER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_RTISTER_OFFSET                (0x218)                                       /**<  (SDMMC_RTISTER) Retuning Timer Interrupt Status Enable Register  Offset */

#define SDMMC_RTISTER_TEVT_Pos              0                                              /**< (SDMMC_RTISTER) Retuning Timer Event Position */
#define SDMMC_RTISTER_TEVT_Msk              (_U_(0x1) << SDMMC_RTISTER_TEVT_Pos)           /**< (SDMMC_RTISTER) Retuning Timer Event Mask */
#define SDMMC_RTISTER_TEVT                  SDMMC_RTISTER_TEVT_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_RTISTER_TEVT_Msk instead */
#define   SDMMC_RTISTER_TEVT_MASKED_Val     _U_(0x0)                                       /**< (SDMMC_RTISTER) The TEVT status flag in SDMMC_RTISTR is masked.  */
#define   SDMMC_RTISTER_TEVT_ENABLED_Val    _U_(0x1)                                       /**< (SDMMC_RTISTER) The TEVT status flag in SDMMC_RTISTR is enabled.  */
#define SDMMC_RTISTER_TEVT_MASKED           (SDMMC_RTISTER_TEVT_MASKED_Val << SDMMC_RTISTER_TEVT_Pos)  /**< (SDMMC_RTISTER) The TEVT status flag in SDMMC_RTISTR is masked. Position  */
#define SDMMC_RTISTER_TEVT_ENABLED          (SDMMC_RTISTER_TEVT_ENABLED_Val << SDMMC_RTISTER_TEVT_Pos)  /**< (SDMMC_RTISTER) The TEVT status flag in SDMMC_RTISTR is enabled. Position  */
#define SDMMC_RTISTER_MASK                  _U_(0x01)                                      /**< \deprecated (SDMMC_RTISTER) Register MASK  (Use SDMMC_RTISTER_Msk instead)  */
#define SDMMC_RTISTER_Msk                   _U_(0x01)                                      /**< (SDMMC_RTISTER) Register Mask  */


/* -------- SDMMC_RTISIER : (SDMMC Offset: 0x219) (R/W 8) Retuning Timer Interrupt Signal Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  TEVT:1;                    /**< bit:      0  Retuning Timer Event                     */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SDMMC_RTISIER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_RTISIER_OFFSET                (0x219)                                       /**<  (SDMMC_RTISIER) Retuning Timer Interrupt Signal Enable Register  Offset */

#define SDMMC_RTISIER_TEVT_Pos              0                                              /**< (SDMMC_RTISIER) Retuning Timer Event Position */
#define SDMMC_RTISIER_TEVT_Msk              (_U_(0x1) << SDMMC_RTISIER_TEVT_Pos)           /**< (SDMMC_RTISIER) Retuning Timer Event Mask */
#define SDMMC_RTISIER_TEVT                  SDMMC_RTISIER_TEVT_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_RTISIER_TEVT_Msk instead */
#define   SDMMC_RTISIER_TEVT_MASKED_Val     _U_(0x0)                                       /**< (SDMMC_RTISIER) No interrupt is generated when the TEVT status rises in SDMMC_RTISTR.  */
#define   SDMMC_RTISIER_TEVT_ENABLED_Val    _U_(0x1)                                       /**< (SDMMC_RTISIER) An interrupt is generated when the TEVT status rises in SDMMC_RTISTR.  */
#define SDMMC_RTISIER_TEVT_MASKED           (SDMMC_RTISIER_TEVT_MASKED_Val << SDMMC_RTISIER_TEVT_Pos)  /**< (SDMMC_RTISIER) No interrupt is generated when the TEVT status rises in SDMMC_RTISTR. Position  */
#define SDMMC_RTISIER_TEVT_ENABLED          (SDMMC_RTISIER_TEVT_ENABLED_Val << SDMMC_RTISIER_TEVT_Pos)  /**< (SDMMC_RTISIER) An interrupt is generated when the TEVT status rises in SDMMC_RTISTR. Position  */
#define SDMMC_RTISIER_MASK                  _U_(0x01)                                      /**< \deprecated (SDMMC_RTISIER) Register MASK  (Use SDMMC_RTISIER_Msk instead)  */
#define SDMMC_RTISIER_Msk                   _U_(0x01)                                      /**< (SDMMC_RTISIER) Register Mask  */


/* -------- SDMMC_RTISTR : (SDMMC Offset: 0x21c) (R/W 8) Retuning Timer Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  TEVT:1;                    /**< bit:      0  Retuning Timer Event                     */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SDMMC_RTISTR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_RTISTR_OFFSET                 (0x21C)                                       /**<  (SDMMC_RTISTR) Retuning Timer Interrupt Status Register  Offset */

#define SDMMC_RTISTR_TEVT_Pos               0                                              /**< (SDMMC_RTISTR) Retuning Timer Event Position */
#define SDMMC_RTISTR_TEVT_Msk               (_U_(0x1) << SDMMC_RTISTR_TEVT_Pos)            /**< (SDMMC_RTISTR) Retuning Timer Event Mask */
#define SDMMC_RTISTR_TEVT                   SDMMC_RTISTR_TEVT_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_RTISTR_TEVT_Msk instead */
#define SDMMC_RTISTR_MASK                   _U_(0x01)                                      /**< \deprecated (SDMMC_RTISTR) Register MASK  (Use SDMMC_RTISTR_Msk instead)  */
#define SDMMC_RTISTR_Msk                    _U_(0x01)                                      /**< (SDMMC_RTISTR) Register Mask  */


/* -------- SDMMC_RTSSR : (SDMMC Offset: 0x21d) (R/ 8) Retuning Timer Status Slots Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  TEVTSLOT:2;                /**< bit:   0..1  Retuning Timer Event Slots               */
    uint8_t  :6;                        /**< bit:   2..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SDMMC_RTSSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_RTSSR_OFFSET                  (0x21D)                                       /**<  (SDMMC_RTSSR) Retuning Timer Status Slots Register  Offset */

#define SDMMC_RTSSR_TEVTSLOT_Pos            0                                              /**< (SDMMC_RTSSR) Retuning Timer Event Slots Position */
#define SDMMC_RTSSR_TEVTSLOT_Msk            (_U_(0x3) << SDMMC_RTSSR_TEVTSLOT_Pos)         /**< (SDMMC_RTSSR) Retuning Timer Event Slots Mask */
#define SDMMC_RTSSR_TEVTSLOT(value)         (SDMMC_RTSSR_TEVTSLOT_Msk & ((value) << SDMMC_RTSSR_TEVTSLOT_Pos))
#define SDMMC_RTSSR_MASK                    _U_(0x03)                                      /**< \deprecated (SDMMC_RTSSR) Register MASK  (Use SDMMC_RTSSR_Msk instead)  */
#define SDMMC_RTSSR_Msk                     _U_(0x03)                                      /**< (SDMMC_RTSSR) Register Mask  */


/* -------- SDMMC_TUNCR : (SDMMC Offset: 0x220) (R/W 32) Tuning Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SMPLPT:1;                  /**< bit:      0  Sampling Point                           */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SDMMC_TUNCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_TUNCR_OFFSET                  (0x220)                                       /**<  (SDMMC_TUNCR) Tuning Control Register  Offset */

#define SDMMC_TUNCR_SMPLPT_Pos              0                                              /**< (SDMMC_TUNCR) Sampling Point Position */
#define SDMMC_TUNCR_SMPLPT_Msk              (_U_(0x1) << SDMMC_TUNCR_SMPLPT_Pos)           /**< (SDMMC_TUNCR) Sampling Point Mask */
#define SDMMC_TUNCR_SMPLPT                  SDMMC_TUNCR_SMPLPT_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_TUNCR_SMPLPT_Msk instead */
#define SDMMC_TUNCR_MASK                    _U_(0x01)                                      /**< \deprecated (SDMMC_TUNCR) Register MASK  (Use SDMMC_TUNCR_Msk instead)  */
#define SDMMC_TUNCR_Msk                     _U_(0x01)                                      /**< (SDMMC_TUNCR) Register Mask  */


/* -------- SDMMC_CACR : (SDMMC Offset: 0x230) (R/W 32) Capabilities Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CAPWREN:1;                 /**< bit:      0  Capabilities Write Enable                */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t KEY:8;                     /**< bit:  8..15  Key                                      */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SDMMC_CACR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_CACR_OFFSET                   (0x230)                                       /**<  (SDMMC_CACR) Capabilities Control Register  Offset */

#define SDMMC_CACR_CAPWREN_Pos              0                                              /**< (SDMMC_CACR) Capabilities Write Enable Position */
#define SDMMC_CACR_CAPWREN_Msk              (_U_(0x1) << SDMMC_CACR_CAPWREN_Pos)           /**< (SDMMC_CACR) Capabilities Write Enable Mask */
#define SDMMC_CACR_CAPWREN                  SDMMC_CACR_CAPWREN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CACR_CAPWREN_Msk instead */
#define SDMMC_CACR_KEY_Pos                  8                                              /**< (SDMMC_CACR) Key Position */
#define SDMMC_CACR_KEY_Msk                  (_U_(0xFF) << SDMMC_CACR_KEY_Pos)              /**< (SDMMC_CACR) Key Mask */
#define SDMMC_CACR_KEY(value)               (SDMMC_CACR_KEY_Msk & ((value) << SDMMC_CACR_KEY_Pos))
#define SDMMC_CACR_MASK                     _U_(0xFF01)                                    /**< \deprecated (SDMMC_CACR) Register MASK  (Use SDMMC_CACR_Msk instead)  */
#define SDMMC_CACR_Msk                      _U_(0xFF01)                                    /**< (SDMMC_CACR) Register Mask  */


/* -------- SDMMC_CALCR : (SDMMC Offset: 0x240) (R/W 32) Calibration Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t EN:1;                      /**< bit:      0  PADs Calibration Enable                  */
    uint32_t :3;                        /**< bit:   1..3  Reserved */
    uint32_t ALWYSON:1;                 /**< bit:      4  Calibration Analog Always ON             */
    uint32_t TUNDIS:1;                  /**< bit:      5  Calibration During Tuning Disabled       */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t CNTVAL:8;                  /**< bit:  8..15  Calibration Counter Value                */
    uint32_t CALN:4;                    /**< bit: 16..19  Calibration N Status                     */
    uint32_t :4;                        /**< bit: 20..23  Reserved */
    uint32_t CALP:4;                    /**< bit: 24..27  Calibration P Status                     */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SDMMC_CALCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SDMMC_CALCR_OFFSET                  (0x240)                                       /**<  (SDMMC_CALCR) Calibration Control Register  Offset */

#define SDMMC_CALCR_EN_Pos                  0                                              /**< (SDMMC_CALCR) PADs Calibration Enable Position */
#define SDMMC_CALCR_EN_Msk                  (_U_(0x1) << SDMMC_CALCR_EN_Pos)               /**< (SDMMC_CALCR) PADs Calibration Enable Mask */
#define SDMMC_CALCR_EN                      SDMMC_CALCR_EN_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CALCR_EN_Msk instead */
#define SDMMC_CALCR_ALWYSON_Pos             4                                              /**< (SDMMC_CALCR) Calibration Analog Always ON Position */
#define SDMMC_CALCR_ALWYSON_Msk             (_U_(0x1) << SDMMC_CALCR_ALWYSON_Pos)          /**< (SDMMC_CALCR) Calibration Analog Always ON Mask */
#define SDMMC_CALCR_ALWYSON                 SDMMC_CALCR_ALWYSON_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CALCR_ALWYSON_Msk instead */
#define SDMMC_CALCR_TUNDIS_Pos              5                                              /**< (SDMMC_CALCR) Calibration During Tuning Disabled Position */
#define SDMMC_CALCR_TUNDIS_Msk              (_U_(0x1) << SDMMC_CALCR_TUNDIS_Pos)           /**< (SDMMC_CALCR) Calibration During Tuning Disabled Mask */
#define SDMMC_CALCR_TUNDIS                  SDMMC_CALCR_TUNDIS_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SDMMC_CALCR_TUNDIS_Msk instead */
#define SDMMC_CALCR_CNTVAL_Pos              8                                              /**< (SDMMC_CALCR) Calibration Counter Value Position */
#define SDMMC_CALCR_CNTVAL_Msk              (_U_(0xFF) << SDMMC_CALCR_CNTVAL_Pos)          /**< (SDMMC_CALCR) Calibration Counter Value Mask */
#define SDMMC_CALCR_CNTVAL(value)           (SDMMC_CALCR_CNTVAL_Msk & ((value) << SDMMC_CALCR_CNTVAL_Pos))
#define SDMMC_CALCR_CALN_Pos                16                                             /**< (SDMMC_CALCR) Calibration N Status Position */
#define SDMMC_CALCR_CALN_Msk                (_U_(0xF) << SDMMC_CALCR_CALN_Pos)             /**< (SDMMC_CALCR) Calibration N Status Mask */
#define SDMMC_CALCR_CALN(value)             (SDMMC_CALCR_CALN_Msk & ((value) << SDMMC_CALCR_CALN_Pos))
#define SDMMC_CALCR_CALP_Pos                24                                             /**< (SDMMC_CALCR) Calibration P Status Position */
#define SDMMC_CALCR_CALP_Msk                (_U_(0xF) << SDMMC_CALCR_CALP_Pos)             /**< (SDMMC_CALCR) Calibration P Status Mask */
#define SDMMC_CALCR_CALP(value)             (SDMMC_CALCR_CALP_Msk & ((value) << SDMMC_CALCR_CALP_Pos))
#define SDMMC_CALCR_MASK                    _U_(0xF0FFF31)                                 /**< \deprecated (SDMMC_CALCR) Register MASK  (Use SDMMC_CALCR_Msk instead)  */
#define SDMMC_CALCR_Msk                     _U_(0xF0FFF31)                                 /**< (SDMMC_CALCR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief SDMMC hardware registers */
typedef struct {  
  __IO uint32_t SDMMC_SSAR;     /**< (SDMMC Offset: 0x00) SDMA System Address / Argument 2 Register */
  __IO uint16_t SDMMC_BSR;      /**< (SDMMC Offset: 0x04) Block Size Register */
  __IO uint16_t SDMMC_BCR;      /**< (SDMMC Offset: 0x06) Block Count Register */
  __IO uint32_t SDMMC_ARG1R;    /**< (SDMMC Offset: 0x08) Argument 1 Register */
  __IO uint16_t SDMMC_TMR;      /**< (SDMMC Offset: 0x0C) Transfer Mode Register */
  __IO uint16_t SDMMC_CR;       /**< (SDMMC Offset: 0x0E) Command Register */
  __I  uint32_t SDMMC_RR[4];    /**< (SDMMC Offset: 0x10) Response Register */
  __IO uint32_t SDMMC_BDPR;     /**< (SDMMC Offset: 0x20) Buffer Data Port Register */
  __I  uint32_t SDMMC_PSR;      /**< (SDMMC Offset: 0x24) Present State Register */
  __IO uint8_t SDMMC_HC1R;     /**< (SDMMC Offset: 0x28) Host Control 1 Register */
  __IO uint8_t SDMMC_PCR;      /**< (SDMMC Offset: 0x29) Power Control Register */
  __IO uint8_t SDMMC_BGCR;     /**< (SDMMC Offset: 0x2A) Block Gap Control Register */
  __IO uint8_t SDMMC_WCR;      /**< (SDMMC Offset: 0x2B) Wakeup Control Register */
  __IO uint16_t SDMMC_CCR;      /**< (SDMMC Offset: 0x2C) Clock Control Register */
  __IO uint8_t SDMMC_TCR;      /**< (SDMMC Offset: 0x2E) Timeout Control Register */
  __IO uint8_t SDMMC_SRR;      /**< (SDMMC Offset: 0x2F) Software Reset Register */
  __IO uint16_t SDMMC_NISTR;    /**< (SDMMC Offset: 0x30) Normal Interrupt Status Register */
  __IO uint16_t SDMMC_EISTR;    /**< (SDMMC Offset: 0x32) Error Interrupt Status Register */
  __IO uint16_t SDMMC_NISTER;   /**< (SDMMC Offset: 0x34) Normal Interrupt Status Enable Register */
  __IO uint16_t SDMMC_EISTER;   /**< (SDMMC Offset: 0x36) Error Interrupt Status Enable Register */
  __IO uint16_t SDMMC_NISIER;   /**< (SDMMC Offset: 0x38) Normal Interrupt Signal Enable Register */
  __IO uint16_t SDMMC_EISIER;   /**< (SDMMC Offset: 0x3A) Error Interrupt Signal Enable Register */
  __I  uint16_t SDMMC_ACESR;    /**< (SDMMC Offset: 0x3C) Auto CMD Error Status Register */
  __IO uint16_t SDMMC_HC2R;     /**< (SDMMC Offset: 0x3E) Host Control 2 Register */
  __I  uint32_t SDMMC_CA0R;     /**< (SDMMC Offset: 0x40) Capabilities 0 Register */
  __IO uint32_t SDMMC_CA1R;     /**< (SDMMC Offset: 0x44) Capabilities 1 Register */
  __IO uint32_t SDMMC_MCCAR;    /**< (SDMMC Offset: 0x48) Maximum Current Capabilities Register */
  __I  uint8_t                        Reserved1[4];
  __O  uint16_t SDMMC_FERACES;  /**< (SDMMC Offset: 0x50) Force Event Register for Auto CMD Error Status */
  __O  uint16_t SDMMC_FEREIS;   /**< (SDMMC Offset: 0x52) Force Event Register for Error Interrupt Status */
  __I  uint8_t SDMMC_AESR;     /**< (SDMMC Offset: 0x54) ADMA Error Status Register */
  __I  uint8_t                        Reserved2[3];
  __IO uint32_t SDMMC_ASAR0;    /**< (SDMMC Offset: 0x58) ADMA System Address Register 0 */
  __I  uint8_t                        Reserved3[4];
  __IO uint16_t SDMMC_PVR[8];   /**< (SDMMC Offset: 0x60) Preset Value Register 0 (for initialization) */
  __I  uint8_t                        Reserved4[140];
  __I  uint16_t SDMMC_SISR;     /**< (SDMMC Offset: 0xFC) Slot Interrupt Status Register */
  __I  uint16_t SDMMC_HCVR;     /**< (SDMMC Offset: 0xFE) Host Controller Version Register */
  __I  uint8_t                        Reserved5[256];
  __I  uint32_t SDMMC_APSR;     /**< (SDMMC Offset: 0x200) Additional Present State Register */
  __IO uint8_t SDMMC_MC1R;     /**< (SDMMC Offset: 0x204) e.MMC Control 1 Register */
  __O  uint8_t SDMMC_MC2R;     /**< (SDMMC Offset: 0x205) e.MMC Control 2 Register */
  __I  uint8_t                        Reserved6[2];
  __IO uint32_t SDMMC_ACR;      /**< (SDMMC Offset: 0x208) AHB Control Register */
  __IO uint32_t SDMMC_CC2R;     /**< (SDMMC Offset: 0x20C) Clock Control 2 Register */
  __IO uint8_t SDMMC_RTC1R;    /**< (SDMMC Offset: 0x210) Retuning Timer Control 1 Register */
  __O  uint8_t SDMMC_RTC2R;    /**< (SDMMC Offset: 0x211) Retuning Timer Control 2 Register */
  __I  uint8_t                        Reserved7[2];
  __IO uint32_t SDMMC_RTCVR;    /**< (SDMMC Offset: 0x214) Retuning Timer Counter Value Register */
  __IO uint8_t SDMMC_RTISTER;  /**< (SDMMC Offset: 0x218) Retuning Timer Interrupt Status Enable Register */
  __IO uint8_t SDMMC_RTISIER;  /**< (SDMMC Offset: 0x219) Retuning Timer Interrupt Signal Enable Register */
  __I  uint8_t                        Reserved8[2];
  __IO uint8_t SDMMC_RTISTR;   /**< (SDMMC Offset: 0x21C) Retuning Timer Interrupt Status Register */
  __I  uint8_t SDMMC_RTSSR;    /**< (SDMMC Offset: 0x21D) Retuning Timer Status Slots Register */
  __I  uint8_t                        Reserved9[2];
  __IO uint32_t SDMMC_TUNCR;    /**< (SDMMC Offset: 0x220) Tuning Control Register */
  __I  uint8_t                        Reserved10[12];
  __IO uint32_t SDMMC_CACR;     /**< (SDMMC Offset: 0x230) Capabilities Control Register */
  __I  uint8_t                        Reserved11[12];
  __IO uint32_t SDMMC_CALCR;    /**< (SDMMC Offset: 0x240) Calibration Control Register */
} Sdmmc;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief SDMMC hardware registers */
typedef struct {  
  __IO SDMMC_SSAR_Type                SDMMC_SSAR;     /**< Offset: 0x00 (R/W  32) SDMA System Address / Argument 2 Register */
  __IO SDMMC_BSR_Type                 SDMMC_BSR;      /**< Offset: 0x04 (R/W  16) Block Size Register */
  __IO SDMMC_BCR_Type                 SDMMC_BCR;      /**< Offset: 0x06 (R/W  16) Block Count Register */
  __IO SDMMC_ARG1R_Type               SDMMC_ARG1R;    /**< Offset: 0x08 (R/W  32) Argument 1 Register */
  __IO SDMMC_TMR_Type                 SDMMC_TMR;      /**< Offset: 0x0C (R/W  16) Transfer Mode Register */
  __IO SDMMC_CR_Type                  SDMMC_CR;       /**< Offset: 0x0E (R/W  16) Command Register */
  __I  SDMMC_RR_Type                  SDMMC_RR[4];    /**< Offset: 0x10 (R/   32) Response Register */
  __IO SDMMC_BDPR_Type                SDMMC_BDPR;     /**< Offset: 0x20 (R/W  32) Buffer Data Port Register */
  __I  SDMMC_PSR_Type                 SDMMC_PSR;      /**< Offset: 0x24 (R/   32) Present State Register */
  __IO SDMMC_HC1R_Type                SDMMC_HC1R;     /**< Offset: 0x28 (R/W   8) Host Control 1 Register */
  __IO SDMMC_PCR_Type                 SDMMC_PCR;      /**< Offset: 0x29 (R/W   8) Power Control Register */
  __IO SDMMC_BGCR_Type                SDMMC_BGCR;     /**< Offset: 0x2A (R/W   8) Block Gap Control Register */
  __IO SDMMC_WCR_Type                 SDMMC_WCR;      /**< Offset: 0x2B (R/W   8) Wakeup Control Register */
  __IO SDMMC_CCR_Type                 SDMMC_CCR;      /**< Offset: 0x2C (R/W  16) Clock Control Register */
  __IO SDMMC_TCR_Type                 SDMMC_TCR;      /**< Offset: 0x2E (R/W   8) Timeout Control Register */
  __IO SDMMC_SRR_Type                 SDMMC_SRR;      /**< Offset: 0x2F (R/W   8) Software Reset Register */
  __IO SDMMC_NISTR_Type               SDMMC_NISTR;    /**< Offset: 0x30 (R/W  16) Normal Interrupt Status Register */
  __IO SDMMC_EISTR_Type               SDMMC_EISTR;    /**< Offset: 0x32 (R/W  16) Error Interrupt Status Register */
  __IO SDMMC_NISTER_Type              SDMMC_NISTER;   /**< Offset: 0x34 (R/W  16) Normal Interrupt Status Enable Register */
  __IO SDMMC_EISTER_Type              SDMMC_EISTER;   /**< Offset: 0x36 (R/W  16) Error Interrupt Status Enable Register */
  __IO SDMMC_NISIER_Type              SDMMC_NISIER;   /**< Offset: 0x38 (R/W  16) Normal Interrupt Signal Enable Register */
  __IO SDMMC_EISIER_Type              SDMMC_EISIER;   /**< Offset: 0x3A (R/W  16) Error Interrupt Signal Enable Register */
  __I  SDMMC_ACESR_Type               SDMMC_ACESR;    /**< Offset: 0x3C (R/   16) Auto CMD Error Status Register */
  __IO SDMMC_HC2R_Type                SDMMC_HC2R;     /**< Offset: 0x3E (R/W  16) Host Control 2 Register */
  __I  SDMMC_CA0R_Type                SDMMC_CA0R;     /**< Offset: 0x40 (R/   32) Capabilities 0 Register */
  __IO SDMMC_CA1R_Type                SDMMC_CA1R;     /**< Offset: 0x44 (R/W  32) Capabilities 1 Register */
  __IO SDMMC_MCCAR_Type               SDMMC_MCCAR;    /**< Offset: 0x48 (R/W  32) Maximum Current Capabilities Register */
  __I  uint8_t                        Reserved1[4];
  __O  SDMMC_FERACES_Type             SDMMC_FERACES;  /**< Offset: 0x50 ( /W  16) Force Event Register for Auto CMD Error Status */
  __O  SDMMC_FEREIS_Type              SDMMC_FEREIS;   /**< Offset: 0x52 ( /W  16) Force Event Register for Error Interrupt Status */
  __I  SDMMC_AESR_Type                SDMMC_AESR;     /**< Offset: 0x54 (R/    8) ADMA Error Status Register */
  __I  uint8_t                        Reserved2[3];
  __IO SDMMC_ASAR0_Type               SDMMC_ASAR0;    /**< Offset: 0x58 (R/W  32) ADMA System Address Register 0 */
  __I  uint8_t                        Reserved3[4];
  __IO SDMMC_PVR_Type                 SDMMC_PVR[8];   /**< Offset: 0x60 (R/W  16) Preset Value Register 0 (for initialization) */
  __I  uint8_t                        Reserved4[140];
  __I  SDMMC_SISR_Type                SDMMC_SISR;     /**< Offset: 0xFC (R/   16) Slot Interrupt Status Register */
  __I  SDMMC_HCVR_Type                SDMMC_HCVR;     /**< Offset: 0xFE (R/   16) Host Controller Version Register */
  __I  uint8_t                        Reserved5[256];
  __I  SDMMC_APSR_Type                SDMMC_APSR;     /**< Offset: 0x200 (R/   32) Additional Present State Register */
  __IO SDMMC_MC1R_Type                SDMMC_MC1R;     /**< Offset: 0x204 (R/W   8) e.MMC Control 1 Register */
  __O  SDMMC_MC2R_Type                SDMMC_MC2R;     /**< Offset: 0x205 ( /W   8) e.MMC Control 2 Register */
  __I  uint8_t                        Reserved6[2];
  __IO SDMMC_ACR_Type                 SDMMC_ACR;      /**< Offset: 0x208 (R/W  32) AHB Control Register */
  __IO SDMMC_CC2R_Type                SDMMC_CC2R;     /**< Offset: 0x20C (R/W  32) Clock Control 2 Register */
  __IO SDMMC_RTC1R_Type               SDMMC_RTC1R;    /**< Offset: 0x210 (R/W   8) Retuning Timer Control 1 Register */
  __O  SDMMC_RTC2R_Type               SDMMC_RTC2R;    /**< Offset: 0x211 ( /W   8) Retuning Timer Control 2 Register */
  __I  uint8_t                        Reserved7[2];
  __IO SDMMC_RTCVR_Type               SDMMC_RTCVR;    /**< Offset: 0x214 (R/W  32) Retuning Timer Counter Value Register */
  __IO SDMMC_RTISTER_Type             SDMMC_RTISTER;  /**< Offset: 0x218 (R/W   8) Retuning Timer Interrupt Status Enable Register */
  __IO SDMMC_RTISIER_Type             SDMMC_RTISIER;  /**< Offset: 0x219 (R/W   8) Retuning Timer Interrupt Signal Enable Register */
  __I  uint8_t                        Reserved8[2];
  __IO SDMMC_RTISTR_Type              SDMMC_RTISTR;   /**< Offset: 0x21C (R/W   8) Retuning Timer Interrupt Status Register */
  __I  SDMMC_RTSSR_Type               SDMMC_RTSSR;    /**< Offset: 0x21D (R/    8) Retuning Timer Status Slots Register */
  __I  uint8_t                        Reserved9[2];
  __IO SDMMC_TUNCR_Type               SDMMC_TUNCR;    /**< Offset: 0x220 (R/W  32) Tuning Control Register */
  __I  uint8_t                        Reserved10[12];
  __IO SDMMC_CACR_Type                SDMMC_CACR;     /**< Offset: 0x230 (R/W  32) Capabilities Control Register */
  __I  uint8_t                        Reserved11[12];
  __IO SDMMC_CALCR_Type               SDMMC_CALCR;    /**< Offset: 0x240 (R/W  32) Calibration Control Register */
} Sdmmc;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Secure Digital MultiMedia Card Controller */

#endif /* _SAMA5D2_SDMMC_COMPONENT_H_ */
