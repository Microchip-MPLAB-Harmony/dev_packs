/**
 * \file
 *
 * \brief Component description for UHPHS
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
#ifndef _SAMA5D2_UHPHS_COMPONENT_H_
#define _SAMA5D2_UHPHS_COMPONENT_H_
#define _SAMA5D2_UHPHS_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 USB Host High Speed Port
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR UHPHS */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define UHPHS_6354                       /**< (UHPHS) Module ID */
#define REV_UHPHS R                      /**< (UHPHS) Module revision */

/* -------- UHPHS_HCCAPBASE : (UHPHS Offset: 0x00) (R/ 32) UHPHS Host Controller Capability Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CAPLENGTH:8;               /**< bit:   0..7  Capability Registers Length              */
    uint32_t :8;                        /**< bit:  8..15  Reserved */
    uint32_t HCIVERSION:16;             /**< bit: 16..31  Host Controller Interface Version Number */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_HCCAPBASE_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_HCCAPBASE_OFFSET              (0x00)                                        /**<  (UHPHS_HCCAPBASE) UHPHS Host Controller Capability Register  Offset */

#define UHPHS_HCCAPBASE_CAPLENGTH_Pos       0                                              /**< (UHPHS_HCCAPBASE) Capability Registers Length Position */
#define UHPHS_HCCAPBASE_CAPLENGTH_Msk       (_U_(0xFF) << UHPHS_HCCAPBASE_CAPLENGTH_Pos)   /**< (UHPHS_HCCAPBASE) Capability Registers Length Mask */
#define UHPHS_HCCAPBASE_CAPLENGTH(value)    (UHPHS_HCCAPBASE_CAPLENGTH_Msk & ((value) << UHPHS_HCCAPBASE_CAPLENGTH_Pos))
#define UHPHS_HCCAPBASE_HCIVERSION_Pos      16                                             /**< (UHPHS_HCCAPBASE) Host Controller Interface Version Number Position */
#define UHPHS_HCCAPBASE_HCIVERSION_Msk      (_U_(0xFFFF) << UHPHS_HCCAPBASE_HCIVERSION_Pos)  /**< (UHPHS_HCCAPBASE) Host Controller Interface Version Number Mask */
#define UHPHS_HCCAPBASE_HCIVERSION(value)   (UHPHS_HCCAPBASE_HCIVERSION_Msk & ((value) << UHPHS_HCCAPBASE_HCIVERSION_Pos))
#define UHPHS_HCCAPBASE_MASK                _U_(0xFFFF00FF)                                /**< \deprecated (UHPHS_HCCAPBASE) Register MASK  (Use UHPHS_HCCAPBASE_Msk instead)  */
#define UHPHS_HCCAPBASE_Msk                 _U_(0xFFFF00FF)                                /**< (UHPHS_HCCAPBASE) Register Mask  */


/* -------- UHPHS_HCSPARAMS : (UHPHS Offset: 0x04) (R/ 32) UHPHS Host Controller Structural Parameters Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t N_PORTS:4;                 /**< bit:   0..3  Number of Ports                          */
    uint32_t PPC:1;                     /**< bit:      4  Port Power Control                       */
    uint32_t :3;                        /**< bit:   5..7  Reserved */
    uint32_t N_PCC:4;                   /**< bit:  8..11  Number of Ports per Companion Controller */
    uint32_t N_CC:4;                    /**< bit: 12..15  Number of Companion Controllers          */
    uint32_t P_INDICATOR:1;             /**< bit:     16  Port Indicators                          */
    uint32_t :3;                        /**< bit: 17..19  Reserved */
    uint32_t N_DP:4;                    /**< bit: 20..23  Debug Port Number                        */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_HCSPARAMS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_HCSPARAMS_OFFSET              (0x04)                                        /**<  (UHPHS_HCSPARAMS) UHPHS Host Controller Structural Parameters Register  Offset */

#define UHPHS_HCSPARAMS_N_PORTS_Pos         0                                              /**< (UHPHS_HCSPARAMS) Number of Ports Position */
#define UHPHS_HCSPARAMS_N_PORTS_Msk         (_U_(0xF) << UHPHS_HCSPARAMS_N_PORTS_Pos)      /**< (UHPHS_HCSPARAMS) Number of Ports Mask */
#define UHPHS_HCSPARAMS_N_PORTS(value)      (UHPHS_HCSPARAMS_N_PORTS_Msk & ((value) << UHPHS_HCSPARAMS_N_PORTS_Pos))
#define UHPHS_HCSPARAMS_PPC_Pos             4                                              /**< (UHPHS_HCSPARAMS) Port Power Control Position */
#define UHPHS_HCSPARAMS_PPC_Msk             (_U_(0x1) << UHPHS_HCSPARAMS_PPC_Pos)          /**< (UHPHS_HCSPARAMS) Port Power Control Mask */
#define UHPHS_HCSPARAMS_PPC                 UHPHS_HCSPARAMS_PPC_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_HCSPARAMS_PPC_Msk instead */
#define UHPHS_HCSPARAMS_N_PCC_Pos           8                                              /**< (UHPHS_HCSPARAMS) Number of Ports per Companion Controller Position */
#define UHPHS_HCSPARAMS_N_PCC_Msk           (_U_(0xF) << UHPHS_HCSPARAMS_N_PCC_Pos)        /**< (UHPHS_HCSPARAMS) Number of Ports per Companion Controller Mask */
#define UHPHS_HCSPARAMS_N_PCC(value)        (UHPHS_HCSPARAMS_N_PCC_Msk & ((value) << UHPHS_HCSPARAMS_N_PCC_Pos))
#define UHPHS_HCSPARAMS_N_CC_Pos            12                                             /**< (UHPHS_HCSPARAMS) Number of Companion Controllers Position */
#define UHPHS_HCSPARAMS_N_CC_Msk            (_U_(0xF) << UHPHS_HCSPARAMS_N_CC_Pos)         /**< (UHPHS_HCSPARAMS) Number of Companion Controllers Mask */
#define UHPHS_HCSPARAMS_N_CC(value)         (UHPHS_HCSPARAMS_N_CC_Msk & ((value) << UHPHS_HCSPARAMS_N_CC_Pos))
#define UHPHS_HCSPARAMS_P_INDICATOR_Pos     16                                             /**< (UHPHS_HCSPARAMS) Port Indicators Position */
#define UHPHS_HCSPARAMS_P_INDICATOR_Msk     (_U_(0x1) << UHPHS_HCSPARAMS_P_INDICATOR_Pos)  /**< (UHPHS_HCSPARAMS) Port Indicators Mask */
#define UHPHS_HCSPARAMS_P_INDICATOR         UHPHS_HCSPARAMS_P_INDICATOR_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_HCSPARAMS_P_INDICATOR_Msk instead */
#define UHPHS_HCSPARAMS_N_DP_Pos            20                                             /**< (UHPHS_HCSPARAMS) Debug Port Number Position */
#define UHPHS_HCSPARAMS_N_DP_Msk            (_U_(0xF) << UHPHS_HCSPARAMS_N_DP_Pos)         /**< (UHPHS_HCSPARAMS) Debug Port Number Mask */
#define UHPHS_HCSPARAMS_N_DP(value)         (UHPHS_HCSPARAMS_N_DP_Msk & ((value) << UHPHS_HCSPARAMS_N_DP_Pos))
#define UHPHS_HCSPARAMS_MASK                _U_(0xF1FF1F)                                  /**< \deprecated (UHPHS_HCSPARAMS) Register MASK  (Use UHPHS_HCSPARAMS_Msk instead)  */
#define UHPHS_HCSPARAMS_Msk                 _U_(0xF1FF1F)                                  /**< (UHPHS_HCSPARAMS) Register Mask  */


/* -------- UHPHS_HCCPARAMS : (UHPHS Offset: 0x08) (R/ 32) UHPHS Host Controller Capability Parameters Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t AC:1;                      /**< bit:      0  64-bit Addressing Capability             */
    uint32_t PFLF:1;                    /**< bit:      1  Programmable Frame List Flag             */
    uint32_t ASPC:1;                    /**< bit:      2  Asynchronous Schedule Park Capability    */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t IST:4;                     /**< bit:   4..7  Isochronous Scheduling Threshold         */
    uint32_t EECP:8;                    /**< bit:  8..15  EHCI Extended Capabilities Pointer       */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_HCCPARAMS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_HCCPARAMS_OFFSET              (0x08)                                        /**<  (UHPHS_HCCPARAMS) UHPHS Host Controller Capability Parameters Register  Offset */

#define UHPHS_HCCPARAMS_AC_Pos              0                                              /**< (UHPHS_HCCPARAMS) 64-bit Addressing Capability Position */
#define UHPHS_HCCPARAMS_AC_Msk              (_U_(0x1) << UHPHS_HCCPARAMS_AC_Pos)           /**< (UHPHS_HCCPARAMS) 64-bit Addressing Capability Mask */
#define UHPHS_HCCPARAMS_AC                  UHPHS_HCCPARAMS_AC_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_HCCPARAMS_AC_Msk instead */
#define UHPHS_HCCPARAMS_PFLF_Pos            1                                              /**< (UHPHS_HCCPARAMS) Programmable Frame List Flag Position */
#define UHPHS_HCCPARAMS_PFLF_Msk            (_U_(0x1) << UHPHS_HCCPARAMS_PFLF_Pos)         /**< (UHPHS_HCCPARAMS) Programmable Frame List Flag Mask */
#define UHPHS_HCCPARAMS_PFLF                UHPHS_HCCPARAMS_PFLF_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_HCCPARAMS_PFLF_Msk instead */
#define UHPHS_HCCPARAMS_ASPC_Pos            2                                              /**< (UHPHS_HCCPARAMS) Asynchronous Schedule Park Capability Position */
#define UHPHS_HCCPARAMS_ASPC_Msk            (_U_(0x1) << UHPHS_HCCPARAMS_ASPC_Pos)         /**< (UHPHS_HCCPARAMS) Asynchronous Schedule Park Capability Mask */
#define UHPHS_HCCPARAMS_ASPC                UHPHS_HCCPARAMS_ASPC_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_HCCPARAMS_ASPC_Msk instead */
#define UHPHS_HCCPARAMS_IST_Pos             4                                              /**< (UHPHS_HCCPARAMS) Isochronous Scheduling Threshold Position */
#define UHPHS_HCCPARAMS_IST_Msk             (_U_(0xF) << UHPHS_HCCPARAMS_IST_Pos)          /**< (UHPHS_HCCPARAMS) Isochronous Scheduling Threshold Mask */
#define UHPHS_HCCPARAMS_IST(value)          (UHPHS_HCCPARAMS_IST_Msk & ((value) << UHPHS_HCCPARAMS_IST_Pos))
#define UHPHS_HCCPARAMS_EECP_Pos            8                                              /**< (UHPHS_HCCPARAMS) EHCI Extended Capabilities Pointer Position */
#define UHPHS_HCCPARAMS_EECP_Msk            (_U_(0xFF) << UHPHS_HCCPARAMS_EECP_Pos)        /**< (UHPHS_HCCPARAMS) EHCI Extended Capabilities Pointer Mask */
#define UHPHS_HCCPARAMS_EECP(value)         (UHPHS_HCCPARAMS_EECP_Msk & ((value) << UHPHS_HCCPARAMS_EECP_Pos))
#define UHPHS_HCCPARAMS_MASK                _U_(0xFFF7)                                    /**< \deprecated (UHPHS_HCCPARAMS) Register MASK  (Use UHPHS_HCCPARAMS_Msk instead)  */
#define UHPHS_HCCPARAMS_Msk                 _U_(0xFFF7)                                    /**< (UHPHS_HCCPARAMS) Register Mask  */


/* -------- UHPHS_USBCMD : (UHPHS Offset: 0x10) (R/W 32) UHPHS USB Command Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RS:1;                      /**< bit:      0  Run/Stop (read/write)                    */
    uint32_t HCRESET:1;                 /**< bit:      1  Host Controller Reset (read/write)       */
    uint32_t FLS:2;                     /**< bit:   2..3  Frame List Size (read/write or read-only) */
    uint32_t PSE:1;                     /**< bit:      4  Periodic Schedule Enable (read/write)    */
    uint32_t ASE:1;                     /**< bit:      5  Asynchronous Schedule Enable (read/write) */
    uint32_t IAAD:1;                    /**< bit:      6  Interrupt on Async Advance Doorbell (read/write) */
    uint32_t LHCR:1;                    /**< bit:      7  Light Host Controller Reset (optional) (read/write) */
    uint32_t ASPMC:2;                   /**< bit:   8..9  Asynchronous Schedule Park Mode Count (optional) (read/write or read-only) */
    uint32_t :1;                        /**< bit:     10  Reserved */
    uint32_t ASPME:1;                   /**< bit:     11  Asynchronous Schedule Park Mode Enable (optional) (read/write or read-only) */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t ITC:8;                     /**< bit: 16..23  Interrupt Threshold Control (read/write) */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_USBCMD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_USBCMD_OFFSET                 (0x10)                                        /**<  (UHPHS_USBCMD) UHPHS USB Command Register  Offset */

#define UHPHS_USBCMD_RS_Pos                 0                                              /**< (UHPHS_USBCMD) Run/Stop (read/write) Position */
#define UHPHS_USBCMD_RS_Msk                 (_U_(0x1) << UHPHS_USBCMD_RS_Pos)              /**< (UHPHS_USBCMD) Run/Stop (read/write) Mask */
#define UHPHS_USBCMD_RS                     UHPHS_USBCMD_RS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBCMD_RS_Msk instead */
#define UHPHS_USBCMD_HCRESET_Pos            1                                              /**< (UHPHS_USBCMD) Host Controller Reset (read/write) Position */
#define UHPHS_USBCMD_HCRESET_Msk            (_U_(0x1) << UHPHS_USBCMD_HCRESET_Pos)         /**< (UHPHS_USBCMD) Host Controller Reset (read/write) Mask */
#define UHPHS_USBCMD_HCRESET                UHPHS_USBCMD_HCRESET_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBCMD_HCRESET_Msk instead */
#define UHPHS_USBCMD_FLS_Pos                2                                              /**< (UHPHS_USBCMD) Frame List Size (read/write or read-only) Position */
#define UHPHS_USBCMD_FLS_Msk                (_U_(0x3) << UHPHS_USBCMD_FLS_Pos)             /**< (UHPHS_USBCMD) Frame List Size (read/write or read-only) Mask */
#define UHPHS_USBCMD_FLS(value)             (UHPHS_USBCMD_FLS_Msk & ((value) << UHPHS_USBCMD_FLS_Pos))
#define UHPHS_USBCMD_PSE_Pos                4                                              /**< (UHPHS_USBCMD) Periodic Schedule Enable (read/write) Position */
#define UHPHS_USBCMD_PSE_Msk                (_U_(0x1) << UHPHS_USBCMD_PSE_Pos)             /**< (UHPHS_USBCMD) Periodic Schedule Enable (read/write) Mask */
#define UHPHS_USBCMD_PSE                    UHPHS_USBCMD_PSE_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBCMD_PSE_Msk instead */
#define UHPHS_USBCMD_ASE_Pos                5                                              /**< (UHPHS_USBCMD) Asynchronous Schedule Enable (read/write) Position */
#define UHPHS_USBCMD_ASE_Msk                (_U_(0x1) << UHPHS_USBCMD_ASE_Pos)             /**< (UHPHS_USBCMD) Asynchronous Schedule Enable (read/write) Mask */
#define UHPHS_USBCMD_ASE                    UHPHS_USBCMD_ASE_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBCMD_ASE_Msk instead */
#define UHPHS_USBCMD_IAAD_Pos               6                                              /**< (UHPHS_USBCMD) Interrupt on Async Advance Doorbell (read/write) Position */
#define UHPHS_USBCMD_IAAD_Msk               (_U_(0x1) << UHPHS_USBCMD_IAAD_Pos)            /**< (UHPHS_USBCMD) Interrupt on Async Advance Doorbell (read/write) Mask */
#define UHPHS_USBCMD_IAAD                   UHPHS_USBCMD_IAAD_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBCMD_IAAD_Msk instead */
#define UHPHS_USBCMD_LHCR_Pos               7                                              /**< (UHPHS_USBCMD) Light Host Controller Reset (optional) (read/write) Position */
#define UHPHS_USBCMD_LHCR_Msk               (_U_(0x1) << UHPHS_USBCMD_LHCR_Pos)            /**< (UHPHS_USBCMD) Light Host Controller Reset (optional) (read/write) Mask */
#define UHPHS_USBCMD_LHCR                   UHPHS_USBCMD_LHCR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBCMD_LHCR_Msk instead */
#define UHPHS_USBCMD_ASPMC_Pos              8                                              /**< (UHPHS_USBCMD) Asynchronous Schedule Park Mode Count (optional) (read/write or read-only) Position */
#define UHPHS_USBCMD_ASPMC_Msk              (_U_(0x3) << UHPHS_USBCMD_ASPMC_Pos)           /**< (UHPHS_USBCMD) Asynchronous Schedule Park Mode Count (optional) (read/write or read-only) Mask */
#define UHPHS_USBCMD_ASPMC(value)           (UHPHS_USBCMD_ASPMC_Msk & ((value) << UHPHS_USBCMD_ASPMC_Pos))
#define UHPHS_USBCMD_ASPME_Pos              11                                             /**< (UHPHS_USBCMD) Asynchronous Schedule Park Mode Enable (optional) (read/write or read-only) Position */
#define UHPHS_USBCMD_ASPME_Msk              (_U_(0x1) << UHPHS_USBCMD_ASPME_Pos)           /**< (UHPHS_USBCMD) Asynchronous Schedule Park Mode Enable (optional) (read/write or read-only) Mask */
#define UHPHS_USBCMD_ASPME                  UHPHS_USBCMD_ASPME_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBCMD_ASPME_Msk instead */
#define UHPHS_USBCMD_ITC_Pos                16                                             /**< (UHPHS_USBCMD) Interrupt Threshold Control (read/write) Position */
#define UHPHS_USBCMD_ITC_Msk                (_U_(0xFF) << UHPHS_USBCMD_ITC_Pos)            /**< (UHPHS_USBCMD) Interrupt Threshold Control (read/write) Mask */
#define UHPHS_USBCMD_ITC(value)             (UHPHS_USBCMD_ITC_Msk & ((value) << UHPHS_USBCMD_ITC_Pos))
#define UHPHS_USBCMD_MASK                   _U_(0xFF0BFF)                                  /**< \deprecated (UHPHS_USBCMD) Register MASK  (Use UHPHS_USBCMD_Msk instead)  */
#define UHPHS_USBCMD_Msk                    _U_(0xFF0BFF)                                  /**< (UHPHS_USBCMD) Register Mask  */


/* -------- UHPHS_USBSTS : (UHPHS Offset: 0x14) (R/W 32) UHPHS USB Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t USBINT:1;                  /**< bit:      0  USB Interrupt (read/write clear)         */
    uint32_t USBERRINT:1;               /**< bit:      1  USB Error Interrupt (read/write clear)   */
    uint32_t PCD:1;                     /**< bit:      2  Port Change Detect (read/write clear)    */
    uint32_t FLR:1;                     /**< bit:      3  Frame List Rollover (read/write clear)   */
    uint32_t HSE:1;                     /**< bit:      4  Host System Error (read/write clear)     */
    uint32_t IAA:1;                     /**< bit:      5  Interrupt on Async Advance (read/write clear) */
    uint32_t :6;                        /**< bit:  6..11  Reserved */
    uint32_t HCHLT:1;                   /**< bit:     12  HCHalted (read-only)                     */
    uint32_t RCM:1;                     /**< bit:     13  Reclamation (read-only)                  */
    uint32_t PSS:1;                     /**< bit:     14  Periodic Schedule Status (read-only)     */
    uint32_t ASS:1;                     /**< bit:     15  Asynchronous Schedule Status (read-only) */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_USBSTS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_USBSTS_OFFSET                 (0x14)                                        /**<  (UHPHS_USBSTS) UHPHS USB Status Register  Offset */

#define UHPHS_USBSTS_USBINT_Pos             0                                              /**< (UHPHS_USBSTS) USB Interrupt (read/write clear) Position */
#define UHPHS_USBSTS_USBINT_Msk             (_U_(0x1) << UHPHS_USBSTS_USBINT_Pos)          /**< (UHPHS_USBSTS) USB Interrupt (read/write clear) Mask */
#define UHPHS_USBSTS_USBINT                 UHPHS_USBSTS_USBINT_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBSTS_USBINT_Msk instead */
#define UHPHS_USBSTS_USBERRINT_Pos          1                                              /**< (UHPHS_USBSTS) USB Error Interrupt (read/write clear) Position */
#define UHPHS_USBSTS_USBERRINT_Msk          (_U_(0x1) << UHPHS_USBSTS_USBERRINT_Pos)       /**< (UHPHS_USBSTS) USB Error Interrupt (read/write clear) Mask */
#define UHPHS_USBSTS_USBERRINT              UHPHS_USBSTS_USBERRINT_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBSTS_USBERRINT_Msk instead */
#define UHPHS_USBSTS_PCD_Pos                2                                              /**< (UHPHS_USBSTS) Port Change Detect (read/write clear) Position */
#define UHPHS_USBSTS_PCD_Msk                (_U_(0x1) << UHPHS_USBSTS_PCD_Pos)             /**< (UHPHS_USBSTS) Port Change Detect (read/write clear) Mask */
#define UHPHS_USBSTS_PCD                    UHPHS_USBSTS_PCD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBSTS_PCD_Msk instead */
#define UHPHS_USBSTS_FLR_Pos                3                                              /**< (UHPHS_USBSTS) Frame List Rollover (read/write clear) Position */
#define UHPHS_USBSTS_FLR_Msk                (_U_(0x1) << UHPHS_USBSTS_FLR_Pos)             /**< (UHPHS_USBSTS) Frame List Rollover (read/write clear) Mask */
#define UHPHS_USBSTS_FLR                    UHPHS_USBSTS_FLR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBSTS_FLR_Msk instead */
#define UHPHS_USBSTS_HSE_Pos                4                                              /**< (UHPHS_USBSTS) Host System Error (read/write clear) Position */
#define UHPHS_USBSTS_HSE_Msk                (_U_(0x1) << UHPHS_USBSTS_HSE_Pos)             /**< (UHPHS_USBSTS) Host System Error (read/write clear) Mask */
#define UHPHS_USBSTS_HSE                    UHPHS_USBSTS_HSE_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBSTS_HSE_Msk instead */
#define UHPHS_USBSTS_IAA_Pos                5                                              /**< (UHPHS_USBSTS) Interrupt on Async Advance (read/write clear) Position */
#define UHPHS_USBSTS_IAA_Msk                (_U_(0x1) << UHPHS_USBSTS_IAA_Pos)             /**< (UHPHS_USBSTS) Interrupt on Async Advance (read/write clear) Mask */
#define UHPHS_USBSTS_IAA                    UHPHS_USBSTS_IAA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBSTS_IAA_Msk instead */
#define UHPHS_USBSTS_HCHLT_Pos              12                                             /**< (UHPHS_USBSTS) HCHalted (read-only) Position */
#define UHPHS_USBSTS_HCHLT_Msk              (_U_(0x1) << UHPHS_USBSTS_HCHLT_Pos)           /**< (UHPHS_USBSTS) HCHalted (read-only) Mask */
#define UHPHS_USBSTS_HCHLT                  UHPHS_USBSTS_HCHLT_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBSTS_HCHLT_Msk instead */
#define UHPHS_USBSTS_RCM_Pos                13                                             /**< (UHPHS_USBSTS) Reclamation (read-only) Position */
#define UHPHS_USBSTS_RCM_Msk                (_U_(0x1) << UHPHS_USBSTS_RCM_Pos)             /**< (UHPHS_USBSTS) Reclamation (read-only) Mask */
#define UHPHS_USBSTS_RCM                    UHPHS_USBSTS_RCM_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBSTS_RCM_Msk instead */
#define UHPHS_USBSTS_PSS_Pos                14                                             /**< (UHPHS_USBSTS) Periodic Schedule Status (read-only) Position */
#define UHPHS_USBSTS_PSS_Msk                (_U_(0x1) << UHPHS_USBSTS_PSS_Pos)             /**< (UHPHS_USBSTS) Periodic Schedule Status (read-only) Mask */
#define UHPHS_USBSTS_PSS                    UHPHS_USBSTS_PSS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBSTS_PSS_Msk instead */
#define UHPHS_USBSTS_ASS_Pos                15                                             /**< (UHPHS_USBSTS) Asynchronous Schedule Status (read-only) Position */
#define UHPHS_USBSTS_ASS_Msk                (_U_(0x1) << UHPHS_USBSTS_ASS_Pos)             /**< (UHPHS_USBSTS) Asynchronous Schedule Status (read-only) Mask */
#define UHPHS_USBSTS_ASS                    UHPHS_USBSTS_ASS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBSTS_ASS_Msk instead */
#define UHPHS_USBSTS_MASK                   _U_(0xF03F)                                    /**< \deprecated (UHPHS_USBSTS) Register MASK  (Use UHPHS_USBSTS_Msk instead)  */
#define UHPHS_USBSTS_Msk                    _U_(0xF03F)                                    /**< (UHPHS_USBSTS) Register Mask  */


/* -------- UHPHS_USBINTR : (UHPHS Offset: 0x18) (R/W 32) UHPHS USB Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t USBIE:1;                   /**< bit:      0  USB Interrupt Enable                     */
    uint32_t USBEIE:1;                  /**< bit:      1  USB Error Interrupt Enable               */
    uint32_t PCIE:1;                    /**< bit:      2  Port Change Interrupt Enable             */
    uint32_t FLRE:1;                    /**< bit:      3  Frame List Rollover Enable               */
    uint32_t HSEE:1;                    /**< bit:      4  Host System Error Enable                 */
    uint32_t IAAE:1;                    /**< bit:      5  Interrupt on Async Advance Enable        */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_USBINTR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_USBINTR_OFFSET                (0x18)                                        /**<  (UHPHS_USBINTR) UHPHS USB Interrupt Enable Register  Offset */

#define UHPHS_USBINTR_USBIE_Pos             0                                              /**< (UHPHS_USBINTR) USB Interrupt Enable Position */
#define UHPHS_USBINTR_USBIE_Msk             (_U_(0x1) << UHPHS_USBINTR_USBIE_Pos)          /**< (UHPHS_USBINTR) USB Interrupt Enable Mask */
#define UHPHS_USBINTR_USBIE                 UHPHS_USBINTR_USBIE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBINTR_USBIE_Msk instead */
#define UHPHS_USBINTR_USBEIE_Pos            1                                              /**< (UHPHS_USBINTR) USB Error Interrupt Enable Position */
#define UHPHS_USBINTR_USBEIE_Msk            (_U_(0x1) << UHPHS_USBINTR_USBEIE_Pos)         /**< (UHPHS_USBINTR) USB Error Interrupt Enable Mask */
#define UHPHS_USBINTR_USBEIE                UHPHS_USBINTR_USBEIE_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBINTR_USBEIE_Msk instead */
#define UHPHS_USBINTR_PCIE_Pos              2                                              /**< (UHPHS_USBINTR) Port Change Interrupt Enable Position */
#define UHPHS_USBINTR_PCIE_Msk              (_U_(0x1) << UHPHS_USBINTR_PCIE_Pos)           /**< (UHPHS_USBINTR) Port Change Interrupt Enable Mask */
#define UHPHS_USBINTR_PCIE                  UHPHS_USBINTR_PCIE_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBINTR_PCIE_Msk instead */
#define UHPHS_USBINTR_FLRE_Pos              3                                              /**< (UHPHS_USBINTR) Frame List Rollover Enable Position */
#define UHPHS_USBINTR_FLRE_Msk              (_U_(0x1) << UHPHS_USBINTR_FLRE_Pos)           /**< (UHPHS_USBINTR) Frame List Rollover Enable Mask */
#define UHPHS_USBINTR_FLRE                  UHPHS_USBINTR_FLRE_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBINTR_FLRE_Msk instead */
#define UHPHS_USBINTR_HSEE_Pos              4                                              /**< (UHPHS_USBINTR) Host System Error Enable Position */
#define UHPHS_USBINTR_HSEE_Msk              (_U_(0x1) << UHPHS_USBINTR_HSEE_Pos)           /**< (UHPHS_USBINTR) Host System Error Enable Mask */
#define UHPHS_USBINTR_HSEE                  UHPHS_USBINTR_HSEE_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBINTR_HSEE_Msk instead */
#define UHPHS_USBINTR_IAAE_Pos              5                                              /**< (UHPHS_USBINTR) Interrupt on Async Advance Enable Position */
#define UHPHS_USBINTR_IAAE_Msk              (_U_(0x1) << UHPHS_USBINTR_IAAE_Pos)           /**< (UHPHS_USBINTR) Interrupt on Async Advance Enable Mask */
#define UHPHS_USBINTR_IAAE                  UHPHS_USBINTR_IAAE_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_USBINTR_IAAE_Msk instead */
#define UHPHS_USBINTR_MASK                  _U_(0x3F)                                      /**< \deprecated (UHPHS_USBINTR) Register MASK  (Use UHPHS_USBINTR_Msk instead)  */
#define UHPHS_USBINTR_Msk                   _U_(0x3F)                                      /**< (UHPHS_USBINTR) Register Mask  */


/* -------- UHPHS_FRINDEX : (UHPHS Offset: 0x1c) (R/W 32) UHPHS USB Frame Index Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t FI:14;                     /**< bit:  0..13  Frame Index                              */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_FRINDEX_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_FRINDEX_OFFSET                (0x1C)                                        /**<  (UHPHS_FRINDEX) UHPHS USB Frame Index Register  Offset */

#define UHPHS_FRINDEX_FI_Pos                0                                              /**< (UHPHS_FRINDEX) Frame Index Position */
#define UHPHS_FRINDEX_FI_Msk                (_U_(0x3FFF) << UHPHS_FRINDEX_FI_Pos)          /**< (UHPHS_FRINDEX) Frame Index Mask */
#define UHPHS_FRINDEX_FI(value)             (UHPHS_FRINDEX_FI_Msk & ((value) << UHPHS_FRINDEX_FI_Pos))
#define UHPHS_FRINDEX_MASK                  _U_(0x3FFF)                                    /**< \deprecated (UHPHS_FRINDEX) Register MASK  (Use UHPHS_FRINDEX_Msk instead)  */
#define UHPHS_FRINDEX_Msk                   _U_(0x3FFF)                                    /**< (UHPHS_FRINDEX) Register Mask  */


/* -------- UHPHS_CTRLDSSEGMENT : (UHPHS Offset: 0x20) (R/W 32) UHPHS Control Data Structure Segment Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_CTRLDSSEGMENT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_CTRLDSSEGMENT_OFFSET          (0x20)                                        /**<  (UHPHS_CTRLDSSEGMENT) UHPHS Control Data Structure Segment Register  Offset */

#define UHPHS_CTRLDSSEGMENT_MASK            _U_(0x00)                                      /**< \deprecated (UHPHS_CTRLDSSEGMENT) Register MASK  (Use UHPHS_CTRLDSSEGMENT_Msk instead)  */
#define UHPHS_CTRLDSSEGMENT_Msk             _U_(0x00)                                      /**< (UHPHS_CTRLDSSEGMENT) Register Mask  */


/* -------- UHPHS_PERIODICLISTBASE : (UHPHS Offset: 0x24) (R/W 32) UHPHS Periodic Frame List Base Address Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :12;                       /**< bit:  0..11  Reserved */
    uint32_t BA:20;                     /**< bit: 12..31  Base Address (Low)                       */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_PERIODICLISTBASE_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_PERIODICLISTBASE_OFFSET       (0x24)                                        /**<  (UHPHS_PERIODICLISTBASE) UHPHS Periodic Frame List Base Address Register  Offset */

#define UHPHS_PERIODICLISTBASE_BA_Pos       12                                             /**< (UHPHS_PERIODICLISTBASE) Base Address (Low) Position */
#define UHPHS_PERIODICLISTBASE_BA_Msk       (_U_(0xFFFFF) << UHPHS_PERIODICLISTBASE_BA_Pos)  /**< (UHPHS_PERIODICLISTBASE) Base Address (Low) Mask */
#define UHPHS_PERIODICLISTBASE_BA(value)    (UHPHS_PERIODICLISTBASE_BA_Msk & ((value) << UHPHS_PERIODICLISTBASE_BA_Pos))
#define UHPHS_PERIODICLISTBASE_MASK         _U_(0xFFFFF000)                                /**< \deprecated (UHPHS_PERIODICLISTBASE) Register MASK  (Use UHPHS_PERIODICLISTBASE_Msk instead)  */
#define UHPHS_PERIODICLISTBASE_Msk          _U_(0xFFFFF000)                                /**< (UHPHS_PERIODICLISTBASE) Register Mask  */


/* -------- UHPHS_ASYNCLISTADDR : (UHPHS Offset: 0x28) (R/W 32) UHPHS Asynchronous List Address Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :5;                        /**< bit:   0..4  Reserved */
    uint32_t LPL:27;                    /**< bit:  5..31  Link Pointer Low                         */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_ASYNCLISTADDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_ASYNCLISTADDR_OFFSET          (0x28)                                        /**<  (UHPHS_ASYNCLISTADDR) UHPHS Asynchronous List Address Register  Offset */

#define UHPHS_ASYNCLISTADDR_LPL_Pos         5                                              /**< (UHPHS_ASYNCLISTADDR) Link Pointer Low Position */
#define UHPHS_ASYNCLISTADDR_LPL_Msk         (_U_(0x7FFFFFF) << UHPHS_ASYNCLISTADDR_LPL_Pos)  /**< (UHPHS_ASYNCLISTADDR) Link Pointer Low Mask */
#define UHPHS_ASYNCLISTADDR_LPL(value)      (UHPHS_ASYNCLISTADDR_LPL_Msk & ((value) << UHPHS_ASYNCLISTADDR_LPL_Pos))
#define UHPHS_ASYNCLISTADDR_MASK            _U_(0xFFFFFFE0)                                /**< \deprecated (UHPHS_ASYNCLISTADDR) Register MASK  (Use UHPHS_ASYNCLISTADDR_Msk instead)  */
#define UHPHS_ASYNCLISTADDR_Msk             _U_(0xFFFFFFE0)                                /**< (UHPHS_ASYNCLISTADDR) Register Mask  */


/* -------- UHPHS_CONFIGFLAG : (UHPHS Offset: 0x50) (R/W 32) UHPHS Configured Flag Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CF:1;                      /**< bit:      0  Configure Flag (read/write)              */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_CONFIGFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_CONFIGFLAG_OFFSET             (0x50)                                        /**<  (UHPHS_CONFIGFLAG) UHPHS Configured Flag Register  Offset */

#define UHPHS_CONFIGFLAG_CF_Pos             0                                              /**< (UHPHS_CONFIGFLAG) Configure Flag (read/write) Position */
#define UHPHS_CONFIGFLAG_CF_Msk             (_U_(0x1) << UHPHS_CONFIGFLAG_CF_Pos)          /**< (UHPHS_CONFIGFLAG) Configure Flag (read/write) Mask */
#define UHPHS_CONFIGFLAG_CF                 UHPHS_CONFIGFLAG_CF_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_CONFIGFLAG_CF_Msk instead */
#define UHPHS_CONFIGFLAG_MASK               _U_(0x01)                                      /**< \deprecated (UHPHS_CONFIGFLAG) Register MASK  (Use UHPHS_CONFIGFLAG_Msk instead)  */
#define UHPHS_CONFIGFLAG_Msk                _U_(0x01)                                      /**< (UHPHS_CONFIGFLAG) Register Mask  */


/* -------- UHPHS_PORTSC_0 : (UHPHS Offset: 0x54) (R/W 32) UHPHS Port Status and Control Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CCS:1;                     /**< bit:      0  Current Connect Status (read-only)       */
    uint32_t CSC:1;                     /**< bit:      1  Connect Status Change (read/write clear) */
    uint32_t PED:1;                     /**< bit:      2  Port Enabled/Disabled (read/write)       */
    uint32_t PEDC:1;                    /**< bit:      3  Port Enable/Disable Change (read/write clear) */
    uint32_t OCA:1;                     /**< bit:      4  Over-current Active (read-only)          */
    uint32_t OCC:1;                     /**< bit:      5  Over-current Change (read/write clear)   */
    uint32_t FPR:1;                     /**< bit:      6  Force Port Resume (read/write)           */
    uint32_t SUS:1;                     /**< bit:      7  Suspend (read/write)                     */
    uint32_t PR:1;                      /**< bit:      8  Port Reset (read/write)                  */
    uint32_t :1;                        /**< bit:      9  Reserved */
    uint32_t LS:2;                      /**< bit: 10..11  Line Status (read-only)                  */
    uint32_t PP:1;                      /**< bit:     12  Port Power (read/write or read-only)     */
    uint32_t PO:1;                      /**< bit:     13  Port Owner (read/write)                  */
    uint32_t PIC:2;                     /**< bit: 14..15  Port Indicator Control (read/write)      */
    uint32_t PTC:4;                     /**< bit: 16..19  Port Test Control (read/write)           */
    uint32_t WKCNNT_E:1;                /**< bit:     20  Wake on Connect Enable (read/write)      */
    uint32_t WKDSCNNT_E:1;              /**< bit:     21  Wake on Disconnect Enable (read/write)   */
    uint32_t WKOC_E:1;                  /**< bit:     22  Wake on Over-current Enable (read/write) */
    uint32_t :9;                        /**< bit: 23..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_PORTSC_0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_PORTSC_0_OFFSET               (0x54)                                        /**<  (UHPHS_PORTSC_0) UHPHS Port Status and Control Register 0  Offset */

#define UHPHS_PORTSC_0_CCS_Pos              0                                              /**< (UHPHS_PORTSC_0) Current Connect Status (read-only) Position */
#define UHPHS_PORTSC_0_CCS_Msk              (_U_(0x1) << UHPHS_PORTSC_0_CCS_Pos)           /**< (UHPHS_PORTSC_0) Current Connect Status (read-only) Mask */
#define UHPHS_PORTSC_0_CCS                  UHPHS_PORTSC_0_CCS_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_0_CCS_Msk instead */
#define UHPHS_PORTSC_0_CSC_Pos              1                                              /**< (UHPHS_PORTSC_0) Connect Status Change (read/write clear) Position */
#define UHPHS_PORTSC_0_CSC_Msk              (_U_(0x1) << UHPHS_PORTSC_0_CSC_Pos)           /**< (UHPHS_PORTSC_0) Connect Status Change (read/write clear) Mask */
#define UHPHS_PORTSC_0_CSC                  UHPHS_PORTSC_0_CSC_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_0_CSC_Msk instead */
#define UHPHS_PORTSC_0_PED_Pos              2                                              /**< (UHPHS_PORTSC_0) Port Enabled/Disabled (read/write) Position */
#define UHPHS_PORTSC_0_PED_Msk              (_U_(0x1) << UHPHS_PORTSC_0_PED_Pos)           /**< (UHPHS_PORTSC_0) Port Enabled/Disabled (read/write) Mask */
#define UHPHS_PORTSC_0_PED                  UHPHS_PORTSC_0_PED_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_0_PED_Msk instead */
#define UHPHS_PORTSC_0_PEDC_Pos             3                                              /**< (UHPHS_PORTSC_0) Port Enable/Disable Change (read/write clear) Position */
#define UHPHS_PORTSC_0_PEDC_Msk             (_U_(0x1) << UHPHS_PORTSC_0_PEDC_Pos)          /**< (UHPHS_PORTSC_0) Port Enable/Disable Change (read/write clear) Mask */
#define UHPHS_PORTSC_0_PEDC                 UHPHS_PORTSC_0_PEDC_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_0_PEDC_Msk instead */
#define UHPHS_PORTSC_0_OCA_Pos              4                                              /**< (UHPHS_PORTSC_0) Over-current Active (read-only) Position */
#define UHPHS_PORTSC_0_OCA_Msk              (_U_(0x1) << UHPHS_PORTSC_0_OCA_Pos)           /**< (UHPHS_PORTSC_0) Over-current Active (read-only) Mask */
#define UHPHS_PORTSC_0_OCA                  UHPHS_PORTSC_0_OCA_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_0_OCA_Msk instead */
#define UHPHS_PORTSC_0_OCC_Pos              5                                              /**< (UHPHS_PORTSC_0) Over-current Change (read/write clear) Position */
#define UHPHS_PORTSC_0_OCC_Msk              (_U_(0x1) << UHPHS_PORTSC_0_OCC_Pos)           /**< (UHPHS_PORTSC_0) Over-current Change (read/write clear) Mask */
#define UHPHS_PORTSC_0_OCC                  UHPHS_PORTSC_0_OCC_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_0_OCC_Msk instead */
#define UHPHS_PORTSC_0_FPR_Pos              6                                              /**< (UHPHS_PORTSC_0) Force Port Resume (read/write) Position */
#define UHPHS_PORTSC_0_FPR_Msk              (_U_(0x1) << UHPHS_PORTSC_0_FPR_Pos)           /**< (UHPHS_PORTSC_0) Force Port Resume (read/write) Mask */
#define UHPHS_PORTSC_0_FPR                  UHPHS_PORTSC_0_FPR_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_0_FPR_Msk instead */
#define UHPHS_PORTSC_0_SUS_Pos              7                                              /**< (UHPHS_PORTSC_0) Suspend (read/write) Position */
#define UHPHS_PORTSC_0_SUS_Msk              (_U_(0x1) << UHPHS_PORTSC_0_SUS_Pos)           /**< (UHPHS_PORTSC_0) Suspend (read/write) Mask */
#define UHPHS_PORTSC_0_SUS                  UHPHS_PORTSC_0_SUS_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_0_SUS_Msk instead */
#define UHPHS_PORTSC_0_PR_Pos               8                                              /**< (UHPHS_PORTSC_0) Port Reset (read/write) Position */
#define UHPHS_PORTSC_0_PR_Msk               (_U_(0x1) << UHPHS_PORTSC_0_PR_Pos)            /**< (UHPHS_PORTSC_0) Port Reset (read/write) Mask */
#define UHPHS_PORTSC_0_PR                   UHPHS_PORTSC_0_PR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_0_PR_Msk instead */
#define UHPHS_PORTSC_0_LS_Pos               10                                             /**< (UHPHS_PORTSC_0) Line Status (read-only) Position */
#define UHPHS_PORTSC_0_LS_Msk               (_U_(0x3) << UHPHS_PORTSC_0_LS_Pos)            /**< (UHPHS_PORTSC_0) Line Status (read-only) Mask */
#define UHPHS_PORTSC_0_LS(value)            (UHPHS_PORTSC_0_LS_Msk & ((value) << UHPHS_PORTSC_0_LS_Pos))
#define UHPHS_PORTSC_0_PP_Pos               12                                             /**< (UHPHS_PORTSC_0) Port Power (read/write or read-only) Position */
#define UHPHS_PORTSC_0_PP_Msk               (_U_(0x1) << UHPHS_PORTSC_0_PP_Pos)            /**< (UHPHS_PORTSC_0) Port Power (read/write or read-only) Mask */
#define UHPHS_PORTSC_0_PP                   UHPHS_PORTSC_0_PP_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_0_PP_Msk instead */
#define UHPHS_PORTSC_0_PO_Pos               13                                             /**< (UHPHS_PORTSC_0) Port Owner (read/write) Position */
#define UHPHS_PORTSC_0_PO_Msk               (_U_(0x1) << UHPHS_PORTSC_0_PO_Pos)            /**< (UHPHS_PORTSC_0) Port Owner (read/write) Mask */
#define UHPHS_PORTSC_0_PO                   UHPHS_PORTSC_0_PO_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_0_PO_Msk instead */
#define UHPHS_PORTSC_0_PIC_Pos              14                                             /**< (UHPHS_PORTSC_0) Port Indicator Control (read/write) Position */
#define UHPHS_PORTSC_0_PIC_Msk              (_U_(0x3) << UHPHS_PORTSC_0_PIC_Pos)           /**< (UHPHS_PORTSC_0) Port Indicator Control (read/write) Mask */
#define UHPHS_PORTSC_0_PIC(value)           (UHPHS_PORTSC_0_PIC_Msk & ((value) << UHPHS_PORTSC_0_PIC_Pos))
#define UHPHS_PORTSC_0_PTC_Pos              16                                             /**< (UHPHS_PORTSC_0) Port Test Control (read/write) Position */
#define UHPHS_PORTSC_0_PTC_Msk              (_U_(0xF) << UHPHS_PORTSC_0_PTC_Pos)           /**< (UHPHS_PORTSC_0) Port Test Control (read/write) Mask */
#define UHPHS_PORTSC_0_PTC(value)           (UHPHS_PORTSC_0_PTC_Msk & ((value) << UHPHS_PORTSC_0_PTC_Pos))
#define UHPHS_PORTSC_0_WKCNNT_E_Pos         20                                             /**< (UHPHS_PORTSC_0) Wake on Connect Enable (read/write) Position */
#define UHPHS_PORTSC_0_WKCNNT_E_Msk         (_U_(0x1) << UHPHS_PORTSC_0_WKCNNT_E_Pos)      /**< (UHPHS_PORTSC_0) Wake on Connect Enable (read/write) Mask */
#define UHPHS_PORTSC_0_WKCNNT_E             UHPHS_PORTSC_0_WKCNNT_E_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_0_WKCNNT_E_Msk instead */
#define UHPHS_PORTSC_0_WKDSCNNT_E_Pos       21                                             /**< (UHPHS_PORTSC_0) Wake on Disconnect Enable (read/write) Position */
#define UHPHS_PORTSC_0_WKDSCNNT_E_Msk       (_U_(0x1) << UHPHS_PORTSC_0_WKDSCNNT_E_Pos)    /**< (UHPHS_PORTSC_0) Wake on Disconnect Enable (read/write) Mask */
#define UHPHS_PORTSC_0_WKDSCNNT_E           UHPHS_PORTSC_0_WKDSCNNT_E_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_0_WKDSCNNT_E_Msk instead */
#define UHPHS_PORTSC_0_WKOC_E_Pos           22                                             /**< (UHPHS_PORTSC_0) Wake on Over-current Enable (read/write) Position */
#define UHPHS_PORTSC_0_WKOC_E_Msk           (_U_(0x1) << UHPHS_PORTSC_0_WKOC_E_Pos)        /**< (UHPHS_PORTSC_0) Wake on Over-current Enable (read/write) Mask */
#define UHPHS_PORTSC_0_WKOC_E               UHPHS_PORTSC_0_WKOC_E_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_0_WKOC_E_Msk instead */
#define UHPHS_PORTSC_0_MASK                 _U_(0x7FFDFF)                                  /**< \deprecated (UHPHS_PORTSC_0) Register MASK  (Use UHPHS_PORTSC_0_Msk instead)  */
#define UHPHS_PORTSC_0_Msk                  _U_(0x7FFDFF)                                  /**< (UHPHS_PORTSC_0) Register Mask  */


/* -------- UHPHS_PORTSC_1 : (UHPHS Offset: 0x58) (R/W 32) UHPHS Port Status and Control Register 1 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CCS:1;                     /**< bit:      0  Current Connect Status (read-only)       */
    uint32_t CSC:1;                     /**< bit:      1  Connect Status Change (read/write clear) */
    uint32_t PED:1;                     /**< bit:      2  Port Enabled/Disabled (read/write)       */
    uint32_t PEDC:1;                    /**< bit:      3  Port Enable/Disable Change (read/write clear) */
    uint32_t OCA:1;                     /**< bit:      4  Over-current Active (read-only)          */
    uint32_t OCC:1;                     /**< bit:      5  Over-current Change (read/write clear)   */
    uint32_t FPR:1;                     /**< bit:      6  Force Port Resume (read/write)           */
    uint32_t SUS:1;                     /**< bit:      7  Suspend (read/write)                     */
    uint32_t PR:1;                      /**< bit:      8  Port Reset (read/write)                  */
    uint32_t :1;                        /**< bit:      9  Reserved */
    uint32_t LS:2;                      /**< bit: 10..11  Line Status (read-only)                  */
    uint32_t PP:1;                      /**< bit:     12  Port Power (read/write or read-only)     */
    uint32_t PO:1;                      /**< bit:     13  Port Owner (read/write)                  */
    uint32_t PIC:2;                     /**< bit: 14..15  Port Indicator Control (read/write)      */
    uint32_t PTC:4;                     /**< bit: 16..19  Port Test Control (read/write)           */
    uint32_t WKCNNT_E:1;                /**< bit:     20  Wake on Connect Enable (read/write)      */
    uint32_t WKDSCNNT_E:1;              /**< bit:     21  Wake on Disconnect Enable (read/write)   */
    uint32_t WKOC_E:1;                  /**< bit:     22  Wake on Over-current Enable (read/write) */
    uint32_t :9;                        /**< bit: 23..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_PORTSC_1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_PORTSC_1_OFFSET               (0x58)                                        /**<  (UHPHS_PORTSC_1) UHPHS Port Status and Control Register 1  Offset */

#define UHPHS_PORTSC_1_CCS_Pos              0                                              /**< (UHPHS_PORTSC_1) Current Connect Status (read-only) Position */
#define UHPHS_PORTSC_1_CCS_Msk              (_U_(0x1) << UHPHS_PORTSC_1_CCS_Pos)           /**< (UHPHS_PORTSC_1) Current Connect Status (read-only) Mask */
#define UHPHS_PORTSC_1_CCS                  UHPHS_PORTSC_1_CCS_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_1_CCS_Msk instead */
#define UHPHS_PORTSC_1_CSC_Pos              1                                              /**< (UHPHS_PORTSC_1) Connect Status Change (read/write clear) Position */
#define UHPHS_PORTSC_1_CSC_Msk              (_U_(0x1) << UHPHS_PORTSC_1_CSC_Pos)           /**< (UHPHS_PORTSC_1) Connect Status Change (read/write clear) Mask */
#define UHPHS_PORTSC_1_CSC                  UHPHS_PORTSC_1_CSC_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_1_CSC_Msk instead */
#define UHPHS_PORTSC_1_PED_Pos              2                                              /**< (UHPHS_PORTSC_1) Port Enabled/Disabled (read/write) Position */
#define UHPHS_PORTSC_1_PED_Msk              (_U_(0x1) << UHPHS_PORTSC_1_PED_Pos)           /**< (UHPHS_PORTSC_1) Port Enabled/Disabled (read/write) Mask */
#define UHPHS_PORTSC_1_PED                  UHPHS_PORTSC_1_PED_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_1_PED_Msk instead */
#define UHPHS_PORTSC_1_PEDC_Pos             3                                              /**< (UHPHS_PORTSC_1) Port Enable/Disable Change (read/write clear) Position */
#define UHPHS_PORTSC_1_PEDC_Msk             (_U_(0x1) << UHPHS_PORTSC_1_PEDC_Pos)          /**< (UHPHS_PORTSC_1) Port Enable/Disable Change (read/write clear) Mask */
#define UHPHS_PORTSC_1_PEDC                 UHPHS_PORTSC_1_PEDC_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_1_PEDC_Msk instead */
#define UHPHS_PORTSC_1_OCA_Pos              4                                              /**< (UHPHS_PORTSC_1) Over-current Active (read-only) Position */
#define UHPHS_PORTSC_1_OCA_Msk              (_U_(0x1) << UHPHS_PORTSC_1_OCA_Pos)           /**< (UHPHS_PORTSC_1) Over-current Active (read-only) Mask */
#define UHPHS_PORTSC_1_OCA                  UHPHS_PORTSC_1_OCA_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_1_OCA_Msk instead */
#define UHPHS_PORTSC_1_OCC_Pos              5                                              /**< (UHPHS_PORTSC_1) Over-current Change (read/write clear) Position */
#define UHPHS_PORTSC_1_OCC_Msk              (_U_(0x1) << UHPHS_PORTSC_1_OCC_Pos)           /**< (UHPHS_PORTSC_1) Over-current Change (read/write clear) Mask */
#define UHPHS_PORTSC_1_OCC                  UHPHS_PORTSC_1_OCC_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_1_OCC_Msk instead */
#define UHPHS_PORTSC_1_FPR_Pos              6                                              /**< (UHPHS_PORTSC_1) Force Port Resume (read/write) Position */
#define UHPHS_PORTSC_1_FPR_Msk              (_U_(0x1) << UHPHS_PORTSC_1_FPR_Pos)           /**< (UHPHS_PORTSC_1) Force Port Resume (read/write) Mask */
#define UHPHS_PORTSC_1_FPR                  UHPHS_PORTSC_1_FPR_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_1_FPR_Msk instead */
#define UHPHS_PORTSC_1_SUS_Pos              7                                              /**< (UHPHS_PORTSC_1) Suspend (read/write) Position */
#define UHPHS_PORTSC_1_SUS_Msk              (_U_(0x1) << UHPHS_PORTSC_1_SUS_Pos)           /**< (UHPHS_PORTSC_1) Suspend (read/write) Mask */
#define UHPHS_PORTSC_1_SUS                  UHPHS_PORTSC_1_SUS_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_1_SUS_Msk instead */
#define UHPHS_PORTSC_1_PR_Pos               8                                              /**< (UHPHS_PORTSC_1) Port Reset (read/write) Position */
#define UHPHS_PORTSC_1_PR_Msk               (_U_(0x1) << UHPHS_PORTSC_1_PR_Pos)            /**< (UHPHS_PORTSC_1) Port Reset (read/write) Mask */
#define UHPHS_PORTSC_1_PR                   UHPHS_PORTSC_1_PR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_1_PR_Msk instead */
#define UHPHS_PORTSC_1_LS_Pos               10                                             /**< (UHPHS_PORTSC_1) Line Status (read-only) Position */
#define UHPHS_PORTSC_1_LS_Msk               (_U_(0x3) << UHPHS_PORTSC_1_LS_Pos)            /**< (UHPHS_PORTSC_1) Line Status (read-only) Mask */
#define UHPHS_PORTSC_1_LS(value)            (UHPHS_PORTSC_1_LS_Msk & ((value) << UHPHS_PORTSC_1_LS_Pos))
#define UHPHS_PORTSC_1_PP_Pos               12                                             /**< (UHPHS_PORTSC_1) Port Power (read/write or read-only) Position */
#define UHPHS_PORTSC_1_PP_Msk               (_U_(0x1) << UHPHS_PORTSC_1_PP_Pos)            /**< (UHPHS_PORTSC_1) Port Power (read/write or read-only) Mask */
#define UHPHS_PORTSC_1_PP                   UHPHS_PORTSC_1_PP_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_1_PP_Msk instead */
#define UHPHS_PORTSC_1_PO_Pos               13                                             /**< (UHPHS_PORTSC_1) Port Owner (read/write) Position */
#define UHPHS_PORTSC_1_PO_Msk               (_U_(0x1) << UHPHS_PORTSC_1_PO_Pos)            /**< (UHPHS_PORTSC_1) Port Owner (read/write) Mask */
#define UHPHS_PORTSC_1_PO                   UHPHS_PORTSC_1_PO_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_1_PO_Msk instead */
#define UHPHS_PORTSC_1_PIC_Pos              14                                             /**< (UHPHS_PORTSC_1) Port Indicator Control (read/write) Position */
#define UHPHS_PORTSC_1_PIC_Msk              (_U_(0x3) << UHPHS_PORTSC_1_PIC_Pos)           /**< (UHPHS_PORTSC_1) Port Indicator Control (read/write) Mask */
#define UHPHS_PORTSC_1_PIC(value)           (UHPHS_PORTSC_1_PIC_Msk & ((value) << UHPHS_PORTSC_1_PIC_Pos))
#define UHPHS_PORTSC_1_PTC_Pos              16                                             /**< (UHPHS_PORTSC_1) Port Test Control (read/write) Position */
#define UHPHS_PORTSC_1_PTC_Msk              (_U_(0xF) << UHPHS_PORTSC_1_PTC_Pos)           /**< (UHPHS_PORTSC_1) Port Test Control (read/write) Mask */
#define UHPHS_PORTSC_1_PTC(value)           (UHPHS_PORTSC_1_PTC_Msk & ((value) << UHPHS_PORTSC_1_PTC_Pos))
#define UHPHS_PORTSC_1_WKCNNT_E_Pos         20                                             /**< (UHPHS_PORTSC_1) Wake on Connect Enable (read/write) Position */
#define UHPHS_PORTSC_1_WKCNNT_E_Msk         (_U_(0x1) << UHPHS_PORTSC_1_WKCNNT_E_Pos)      /**< (UHPHS_PORTSC_1) Wake on Connect Enable (read/write) Mask */
#define UHPHS_PORTSC_1_WKCNNT_E             UHPHS_PORTSC_1_WKCNNT_E_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_1_WKCNNT_E_Msk instead */
#define UHPHS_PORTSC_1_WKDSCNNT_E_Pos       21                                             /**< (UHPHS_PORTSC_1) Wake on Disconnect Enable (read/write) Position */
#define UHPHS_PORTSC_1_WKDSCNNT_E_Msk       (_U_(0x1) << UHPHS_PORTSC_1_WKDSCNNT_E_Pos)    /**< (UHPHS_PORTSC_1) Wake on Disconnect Enable (read/write) Mask */
#define UHPHS_PORTSC_1_WKDSCNNT_E           UHPHS_PORTSC_1_WKDSCNNT_E_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_1_WKDSCNNT_E_Msk instead */
#define UHPHS_PORTSC_1_WKOC_E_Pos           22                                             /**< (UHPHS_PORTSC_1) Wake on Over-current Enable (read/write) Position */
#define UHPHS_PORTSC_1_WKOC_E_Msk           (_U_(0x1) << UHPHS_PORTSC_1_WKOC_E_Pos)        /**< (UHPHS_PORTSC_1) Wake on Over-current Enable (read/write) Mask */
#define UHPHS_PORTSC_1_WKOC_E               UHPHS_PORTSC_1_WKOC_E_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_1_WKOC_E_Msk instead */
#define UHPHS_PORTSC_1_MASK                 _U_(0x7FFDFF)                                  /**< \deprecated (UHPHS_PORTSC_1) Register MASK  (Use UHPHS_PORTSC_1_Msk instead)  */
#define UHPHS_PORTSC_1_Msk                  _U_(0x7FFDFF)                                  /**< (UHPHS_PORTSC_1) Register Mask  */


/* -------- UHPHS_PORTSC_2 : (UHPHS Offset: 0x5c) (R/W 32) UHPHS Port Status and Control Register 2 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CCS:1;                     /**< bit:      0  Current Connect Status (read-only)       */
    uint32_t CSC:1;                     /**< bit:      1  Connect Status Change (read/write clear) */
    uint32_t PED:1;                     /**< bit:      2  Port Enabled/Disabled (read/write)       */
    uint32_t PEDC:1;                    /**< bit:      3  Port Enable/Disable Change (read/write clear) */
    uint32_t OCA:1;                     /**< bit:      4  Over-current Active (read-only)          */
    uint32_t OCC:1;                     /**< bit:      5  Over-current Change (read/write clear)   */
    uint32_t FPR:1;                     /**< bit:      6  Force Port Resume (read/write)           */
    uint32_t SUS:1;                     /**< bit:      7  Suspend (read/write)                     */
    uint32_t PR:1;                      /**< bit:      8  Port Reset (read/write)                  */
    uint32_t :1;                        /**< bit:      9  Reserved */
    uint32_t LS:2;                      /**< bit: 10..11  Line Status (read-only)                  */
    uint32_t PP:1;                      /**< bit:     12  Port Power (read/write or read-only)     */
    uint32_t PO:1;                      /**< bit:     13  Port Owner (read/write)                  */
    uint32_t PIC:2;                     /**< bit: 14..15  Port Indicator Control (read/write)      */
    uint32_t PTC:4;                     /**< bit: 16..19  Port Test Control (read/write)           */
    uint32_t WKCNNT_E:1;                /**< bit:     20  Wake on Connect Enable (read/write)      */
    uint32_t WKDSCNNT_E:1;              /**< bit:     21  Wake on Disconnect Enable (read/write)   */
    uint32_t WKOC_E:1;                  /**< bit:     22  Wake on Over-current Enable (read/write) */
    uint32_t :9;                        /**< bit: 23..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_PORTSC_2_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_PORTSC_2_OFFSET               (0x5C)                                        /**<  (UHPHS_PORTSC_2) UHPHS Port Status and Control Register 2  Offset */

#define UHPHS_PORTSC_2_CCS_Pos              0                                              /**< (UHPHS_PORTSC_2) Current Connect Status (read-only) Position */
#define UHPHS_PORTSC_2_CCS_Msk              (_U_(0x1) << UHPHS_PORTSC_2_CCS_Pos)           /**< (UHPHS_PORTSC_2) Current Connect Status (read-only) Mask */
#define UHPHS_PORTSC_2_CCS                  UHPHS_PORTSC_2_CCS_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_2_CCS_Msk instead */
#define UHPHS_PORTSC_2_CSC_Pos              1                                              /**< (UHPHS_PORTSC_2) Connect Status Change (read/write clear) Position */
#define UHPHS_PORTSC_2_CSC_Msk              (_U_(0x1) << UHPHS_PORTSC_2_CSC_Pos)           /**< (UHPHS_PORTSC_2) Connect Status Change (read/write clear) Mask */
#define UHPHS_PORTSC_2_CSC                  UHPHS_PORTSC_2_CSC_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_2_CSC_Msk instead */
#define UHPHS_PORTSC_2_PED_Pos              2                                              /**< (UHPHS_PORTSC_2) Port Enabled/Disabled (read/write) Position */
#define UHPHS_PORTSC_2_PED_Msk              (_U_(0x1) << UHPHS_PORTSC_2_PED_Pos)           /**< (UHPHS_PORTSC_2) Port Enabled/Disabled (read/write) Mask */
#define UHPHS_PORTSC_2_PED                  UHPHS_PORTSC_2_PED_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_2_PED_Msk instead */
#define UHPHS_PORTSC_2_PEDC_Pos             3                                              /**< (UHPHS_PORTSC_2) Port Enable/Disable Change (read/write clear) Position */
#define UHPHS_PORTSC_2_PEDC_Msk             (_U_(0x1) << UHPHS_PORTSC_2_PEDC_Pos)          /**< (UHPHS_PORTSC_2) Port Enable/Disable Change (read/write clear) Mask */
#define UHPHS_PORTSC_2_PEDC                 UHPHS_PORTSC_2_PEDC_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_2_PEDC_Msk instead */
#define UHPHS_PORTSC_2_OCA_Pos              4                                              /**< (UHPHS_PORTSC_2) Over-current Active (read-only) Position */
#define UHPHS_PORTSC_2_OCA_Msk              (_U_(0x1) << UHPHS_PORTSC_2_OCA_Pos)           /**< (UHPHS_PORTSC_2) Over-current Active (read-only) Mask */
#define UHPHS_PORTSC_2_OCA                  UHPHS_PORTSC_2_OCA_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_2_OCA_Msk instead */
#define UHPHS_PORTSC_2_OCC_Pos              5                                              /**< (UHPHS_PORTSC_2) Over-current Change (read/write clear) Position */
#define UHPHS_PORTSC_2_OCC_Msk              (_U_(0x1) << UHPHS_PORTSC_2_OCC_Pos)           /**< (UHPHS_PORTSC_2) Over-current Change (read/write clear) Mask */
#define UHPHS_PORTSC_2_OCC                  UHPHS_PORTSC_2_OCC_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_2_OCC_Msk instead */
#define UHPHS_PORTSC_2_FPR_Pos              6                                              /**< (UHPHS_PORTSC_2) Force Port Resume (read/write) Position */
#define UHPHS_PORTSC_2_FPR_Msk              (_U_(0x1) << UHPHS_PORTSC_2_FPR_Pos)           /**< (UHPHS_PORTSC_2) Force Port Resume (read/write) Mask */
#define UHPHS_PORTSC_2_FPR                  UHPHS_PORTSC_2_FPR_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_2_FPR_Msk instead */
#define UHPHS_PORTSC_2_SUS_Pos              7                                              /**< (UHPHS_PORTSC_2) Suspend (read/write) Position */
#define UHPHS_PORTSC_2_SUS_Msk              (_U_(0x1) << UHPHS_PORTSC_2_SUS_Pos)           /**< (UHPHS_PORTSC_2) Suspend (read/write) Mask */
#define UHPHS_PORTSC_2_SUS                  UHPHS_PORTSC_2_SUS_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_2_SUS_Msk instead */
#define UHPHS_PORTSC_2_PR_Pos               8                                              /**< (UHPHS_PORTSC_2) Port Reset (read/write) Position */
#define UHPHS_PORTSC_2_PR_Msk               (_U_(0x1) << UHPHS_PORTSC_2_PR_Pos)            /**< (UHPHS_PORTSC_2) Port Reset (read/write) Mask */
#define UHPHS_PORTSC_2_PR                   UHPHS_PORTSC_2_PR_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_2_PR_Msk instead */
#define UHPHS_PORTSC_2_LS_Pos               10                                             /**< (UHPHS_PORTSC_2) Line Status (read-only) Position */
#define UHPHS_PORTSC_2_LS_Msk               (_U_(0x3) << UHPHS_PORTSC_2_LS_Pos)            /**< (UHPHS_PORTSC_2) Line Status (read-only) Mask */
#define UHPHS_PORTSC_2_LS(value)            (UHPHS_PORTSC_2_LS_Msk & ((value) << UHPHS_PORTSC_2_LS_Pos))
#define UHPHS_PORTSC_2_PP_Pos               12                                             /**< (UHPHS_PORTSC_2) Port Power (read/write or read-only) Position */
#define UHPHS_PORTSC_2_PP_Msk               (_U_(0x1) << UHPHS_PORTSC_2_PP_Pos)            /**< (UHPHS_PORTSC_2) Port Power (read/write or read-only) Mask */
#define UHPHS_PORTSC_2_PP                   UHPHS_PORTSC_2_PP_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_2_PP_Msk instead */
#define UHPHS_PORTSC_2_PO_Pos               13                                             /**< (UHPHS_PORTSC_2) Port Owner (read/write) Position */
#define UHPHS_PORTSC_2_PO_Msk               (_U_(0x1) << UHPHS_PORTSC_2_PO_Pos)            /**< (UHPHS_PORTSC_2) Port Owner (read/write) Mask */
#define UHPHS_PORTSC_2_PO                   UHPHS_PORTSC_2_PO_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_2_PO_Msk instead */
#define UHPHS_PORTSC_2_PIC_Pos              14                                             /**< (UHPHS_PORTSC_2) Port Indicator Control (read/write) Position */
#define UHPHS_PORTSC_2_PIC_Msk              (_U_(0x3) << UHPHS_PORTSC_2_PIC_Pos)           /**< (UHPHS_PORTSC_2) Port Indicator Control (read/write) Mask */
#define UHPHS_PORTSC_2_PIC(value)           (UHPHS_PORTSC_2_PIC_Msk & ((value) << UHPHS_PORTSC_2_PIC_Pos))
#define UHPHS_PORTSC_2_PTC_Pos              16                                             /**< (UHPHS_PORTSC_2) Port Test Control (read/write) Position */
#define UHPHS_PORTSC_2_PTC_Msk              (_U_(0xF) << UHPHS_PORTSC_2_PTC_Pos)           /**< (UHPHS_PORTSC_2) Port Test Control (read/write) Mask */
#define UHPHS_PORTSC_2_PTC(value)           (UHPHS_PORTSC_2_PTC_Msk & ((value) << UHPHS_PORTSC_2_PTC_Pos))
#define UHPHS_PORTSC_2_WKCNNT_E_Pos         20                                             /**< (UHPHS_PORTSC_2) Wake on Connect Enable (read/write) Position */
#define UHPHS_PORTSC_2_WKCNNT_E_Msk         (_U_(0x1) << UHPHS_PORTSC_2_WKCNNT_E_Pos)      /**< (UHPHS_PORTSC_2) Wake on Connect Enable (read/write) Mask */
#define UHPHS_PORTSC_2_WKCNNT_E             UHPHS_PORTSC_2_WKCNNT_E_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_2_WKCNNT_E_Msk instead */
#define UHPHS_PORTSC_2_WKDSCNNT_E_Pos       21                                             /**< (UHPHS_PORTSC_2) Wake on Disconnect Enable (read/write) Position */
#define UHPHS_PORTSC_2_WKDSCNNT_E_Msk       (_U_(0x1) << UHPHS_PORTSC_2_WKDSCNNT_E_Pos)    /**< (UHPHS_PORTSC_2) Wake on Disconnect Enable (read/write) Mask */
#define UHPHS_PORTSC_2_WKDSCNNT_E           UHPHS_PORTSC_2_WKDSCNNT_E_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_2_WKDSCNNT_E_Msk instead */
#define UHPHS_PORTSC_2_WKOC_E_Pos           22                                             /**< (UHPHS_PORTSC_2) Wake on Over-current Enable (read/write) Position */
#define UHPHS_PORTSC_2_WKOC_E_Msk           (_U_(0x1) << UHPHS_PORTSC_2_WKOC_E_Pos)        /**< (UHPHS_PORTSC_2) Wake on Over-current Enable (read/write) Mask */
#define UHPHS_PORTSC_2_WKOC_E               UHPHS_PORTSC_2_WKOC_E_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_PORTSC_2_WKOC_E_Msk instead */
#define UHPHS_PORTSC_2_MASK                 _U_(0x7FFDFF)                                  /**< \deprecated (UHPHS_PORTSC_2) Register MASK  (Use UHPHS_PORTSC_2_Msk instead)  */
#define UHPHS_PORTSC_2_Msk                  _U_(0x7FFDFF)                                  /**< (UHPHS_PORTSC_2) Register Mask  */


/* -------- UHPHS_INSNREG00 : (UHPHS Offset: 0x90) (R/W 32) EHCI Synopsys-Specific Registers 00 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t En:1;                      /**< bit:      0  Enable this Register                     */
    uint32_t MFC_16:11;                 /**< bit:  1..11  Microframe Counter with Word Byte Interface */
    uint32_t MFC_8:2;                   /**< bit: 12..13  Microframe Counter with Byte Interface   */
    uint32_t Debug:6;                   /**< bit: 14..19  Debug Purposes                           */
    uint32_t :12;                       /**< bit: 20..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_INSNREG00_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_INSNREG00_OFFSET              (0x90)                                        /**<  (UHPHS_INSNREG00) EHCI Synopsys-Specific Registers 00  Offset */

#define UHPHS_INSNREG00_En_Pos              0                                              /**< (UHPHS_INSNREG00) Enable this Register Position */
#define UHPHS_INSNREG00_En_Msk              (_U_(0x1) << UHPHS_INSNREG00_En_Pos)           /**< (UHPHS_INSNREG00) Enable this Register Mask */
#define UHPHS_INSNREG00_En                  UHPHS_INSNREG00_En_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_INSNREG00_En_Msk instead */
#define UHPHS_INSNREG00_MFC_16_Pos          1                                              /**< (UHPHS_INSNREG00) Microframe Counter with Word Byte Interface Position */
#define UHPHS_INSNREG00_MFC_16_Msk          (_U_(0x7FF) << UHPHS_INSNREG00_MFC_16_Pos)     /**< (UHPHS_INSNREG00) Microframe Counter with Word Byte Interface Mask */
#define UHPHS_INSNREG00_MFC_16(value)       (UHPHS_INSNREG00_MFC_16_Msk & ((value) << UHPHS_INSNREG00_MFC_16_Pos))
#define UHPHS_INSNREG00_MFC_8_Pos           12                                             /**< (UHPHS_INSNREG00) Microframe Counter with Byte Interface Position */
#define UHPHS_INSNREG00_MFC_8_Msk           (_U_(0x3) << UHPHS_INSNREG00_MFC_8_Pos)        /**< (UHPHS_INSNREG00) Microframe Counter with Byte Interface Mask */
#define UHPHS_INSNREG00_MFC_8(value)        (UHPHS_INSNREG00_MFC_8_Msk & ((value) << UHPHS_INSNREG00_MFC_8_Pos))
#define UHPHS_INSNREG00_Debug_Pos           14                                             /**< (UHPHS_INSNREG00) Debug Purposes Position */
#define UHPHS_INSNREG00_Debug_Msk           (_U_(0x3F) << UHPHS_INSNREG00_Debug_Pos)       /**< (UHPHS_INSNREG00) Debug Purposes Mask */
#define UHPHS_INSNREG00_Debug(value)        (UHPHS_INSNREG00_Debug_Msk & ((value) << UHPHS_INSNREG00_Debug_Pos))
#define UHPHS_INSNREG00_MASK                _U_(0xFFFFF)                                   /**< \deprecated (UHPHS_INSNREG00) Register MASK  (Use UHPHS_INSNREG00_Msk instead)  */
#define UHPHS_INSNREG00_Msk                 _U_(0xFFFFF)                                   /**< (UHPHS_INSNREG00) Register Mask  */


/* -------- UHPHS_INSNREG01 : (UHPHS Offset: 0x94) (R/W 32) EHCI Synopsys-Specific Registers 01 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t In_Threshold:16;           /**< bit:  0..15  Amount of Data Available in the IN Packet Buffer */
    uint32_t Out_Threshold:16;          /**< bit: 16..31  Amount of Data Available in the OUT Packet Buffer */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_INSNREG01_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_INSNREG01_OFFSET              (0x94)                                        /**<  (UHPHS_INSNREG01) EHCI Synopsys-Specific Registers 01  Offset */

#define UHPHS_INSNREG01_In_Threshold_Pos    0                                              /**< (UHPHS_INSNREG01) Amount of Data Available in the IN Packet Buffer Position */
#define UHPHS_INSNREG01_In_Threshold_Msk    (_U_(0xFFFF) << UHPHS_INSNREG01_In_Threshold_Pos)  /**< (UHPHS_INSNREG01) Amount of Data Available in the IN Packet Buffer Mask */
#define UHPHS_INSNREG01_In_Threshold(value) (UHPHS_INSNREG01_In_Threshold_Msk & ((value) << UHPHS_INSNREG01_In_Threshold_Pos))
#define UHPHS_INSNREG01_Out_Threshold_Pos   16                                             /**< (UHPHS_INSNREG01) Amount of Data Available in the OUT Packet Buffer Position */
#define UHPHS_INSNREG01_Out_Threshold_Msk   (_U_(0xFFFF) << UHPHS_INSNREG01_Out_Threshold_Pos)  /**< (UHPHS_INSNREG01) Amount of Data Available in the OUT Packet Buffer Mask */
#define UHPHS_INSNREG01_Out_Threshold(value) (UHPHS_INSNREG01_Out_Threshold_Msk & ((value) << UHPHS_INSNREG01_Out_Threshold_Pos))
#define UHPHS_INSNREG01_MASK                _U_(0xFFFFFFFF)                                /**< \deprecated (UHPHS_INSNREG01) Register MASK  (Use UHPHS_INSNREG01_Msk instead)  */
#define UHPHS_INSNREG01_Msk                 _U_(0xFFFFFFFF)                                /**< (UHPHS_INSNREG01) Register Mask  */


/* -------- UHPHS_INSNREG02 : (UHPHS Offset: 0x98) (R/W 32) EHCI Synopsys-Specific Registers 02 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t Dwords:12;                 /**< bit:  0..11  Number of Entries                        */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_INSNREG02_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_INSNREG02_OFFSET              (0x98)                                        /**<  (UHPHS_INSNREG02) EHCI Synopsys-Specific Registers 02  Offset */

#define UHPHS_INSNREG02_Dwords_Pos          0                                              /**< (UHPHS_INSNREG02) Number of Entries Position */
#define UHPHS_INSNREG02_Dwords_Msk          (_U_(0xFFF) << UHPHS_INSNREG02_Dwords_Pos)     /**< (UHPHS_INSNREG02) Number of Entries Mask */
#define UHPHS_INSNREG02_Dwords(value)       (UHPHS_INSNREG02_Dwords_Msk & ((value) << UHPHS_INSNREG02_Dwords_Pos))
#define UHPHS_INSNREG02_MASK                _U_(0xFFF)                                     /**< \deprecated (UHPHS_INSNREG02) Register MASK  (Use UHPHS_INSNREG02_Msk instead)  */
#define UHPHS_INSNREG02_Msk                 _U_(0xFFF)                                     /**< (UHPHS_INSNREG02) Register Mask  */


/* -------- UHPHS_INSNREG03 : (UHPHS Offset: 0x9c) (R/W 32) EHCI Synopsys-Specific Registers 03 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t Break_Mem:1;               /**< bit:      0  Break Memory Transfer (in CONFIG1 mode only, not applicable in CONFIG2 mode) */
    uint32_t TA_Offset:8;               /**< bit:   1..8  Time-Available Offset                    */
    uint32_t Per_Frame:1;               /**< bit:      9  Periodic Frame List Fetch                */
    uint32_t T03_Tx:3;                  /**< bit: 10..12  Tx-Tx Turnaround Delay Add-on            */
    uint32_t Ignore_LS:1;               /**< bit:     13  Ignore Linestate During TestSE0 Nak      */
    uint32_t EN_CK256:1;                /**< bit:     14  Enable 256 Clock Checking                */
    uint32_t :17;                       /**< bit: 15..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :14;                       /**< bit:  0..13  Reserved */
    uint32_t EN_CK:1;                   /**< bit:     14  Enable 256 Clock Checking                */
    uint32_t :17;                       /**< bit: 15..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_INSNREG03_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_INSNREG03_OFFSET              (0x9C)                                        /**<  (UHPHS_INSNREG03) EHCI Synopsys-Specific Registers 03  Offset */

#define UHPHS_INSNREG03_Break_Mem_Pos       0                                              /**< (UHPHS_INSNREG03) Break Memory Transfer (in CONFIG1 mode only, not applicable in CONFIG2 mode) Position */
#define UHPHS_INSNREG03_Break_Mem_Msk       (_U_(0x1) << UHPHS_INSNREG03_Break_Mem_Pos)    /**< (UHPHS_INSNREG03) Break Memory Transfer (in CONFIG1 mode only, not applicable in CONFIG2 mode) Mask */
#define UHPHS_INSNREG03_Break_Mem           UHPHS_INSNREG03_Break_Mem_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_INSNREG03_Break_Mem_Msk instead */
#define UHPHS_INSNREG03_TA_Offset_Pos       1                                              /**< (UHPHS_INSNREG03) Time-Available Offset Position */
#define UHPHS_INSNREG03_TA_Offset_Msk       (_U_(0xFF) << UHPHS_INSNREG03_TA_Offset_Pos)   /**< (UHPHS_INSNREG03) Time-Available Offset Mask */
#define UHPHS_INSNREG03_TA_Offset(value)    (UHPHS_INSNREG03_TA_Offset_Msk & ((value) << UHPHS_INSNREG03_TA_Offset_Pos))
#define UHPHS_INSNREG03_Per_Frame_Pos       9                                              /**< (UHPHS_INSNREG03) Periodic Frame List Fetch Position */
#define UHPHS_INSNREG03_Per_Frame_Msk       (_U_(0x1) << UHPHS_INSNREG03_Per_Frame_Pos)    /**< (UHPHS_INSNREG03) Periodic Frame List Fetch Mask */
#define UHPHS_INSNREG03_Per_Frame           UHPHS_INSNREG03_Per_Frame_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_INSNREG03_Per_Frame_Msk instead */
#define UHPHS_INSNREG03_T03_Tx_Pos          10                                             /**< (UHPHS_INSNREG03) Tx-Tx Turnaround Delay Add-on Position */
#define UHPHS_INSNREG03_T03_Tx_Msk          (_U_(0x7) << UHPHS_INSNREG03_T03_Tx_Pos)       /**< (UHPHS_INSNREG03) Tx-Tx Turnaround Delay Add-on Mask */
#define UHPHS_INSNREG03_T03_Tx(value)       (UHPHS_INSNREG03_T03_Tx_Msk & ((value) << UHPHS_INSNREG03_T03_Tx_Pos))
#define UHPHS_INSNREG03_Ignore_LS_Pos       13                                             /**< (UHPHS_INSNREG03) Ignore Linestate During TestSE0 Nak Position */
#define UHPHS_INSNREG03_Ignore_LS_Msk       (_U_(0x1) << UHPHS_INSNREG03_Ignore_LS_Pos)    /**< (UHPHS_INSNREG03) Ignore Linestate During TestSE0 Nak Mask */
#define UHPHS_INSNREG03_Ignore_LS           UHPHS_INSNREG03_Ignore_LS_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_INSNREG03_Ignore_LS_Msk instead */
#define UHPHS_INSNREG03_EN_CK256_Pos        14                                             /**< (UHPHS_INSNREG03) Enable 256 Clock Checking Position */
#define UHPHS_INSNREG03_EN_CK256_Msk        (_U_(0x1) << UHPHS_INSNREG03_EN_CK256_Pos)     /**< (UHPHS_INSNREG03) Enable 256 Clock Checking Mask */
#define UHPHS_INSNREG03_EN_CK256            UHPHS_INSNREG03_EN_CK256_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_INSNREG03_EN_CK256_Msk instead */
#define UHPHS_INSNREG03_MASK                _U_(0x7FFF)                                    /**< \deprecated (UHPHS_INSNREG03) Register MASK  (Use UHPHS_INSNREG03_Msk instead)  */
#define UHPHS_INSNREG03_Msk                 _U_(0x7FFF)                                    /**< (UHPHS_INSNREG03) Register Mask  */

#define UHPHS_INSNREG03_EN_CK_Pos           14                                             /**< (UHPHS_INSNREG03 Position) Enable 256 Clock Checking */
#define UHPHS_INSNREG03_EN_CK_Msk           (_U_(0x1) << UHPHS_INSNREG03_EN_CK_Pos)        /**< (UHPHS_INSNREG03 Mask) EN_CK */
#define UHPHS_INSNREG03_EN_CK(value)        (UHPHS_INSNREG03_EN_CK_Msk & ((value) << UHPHS_INSNREG03_EN_CK_Pos))  

/* -------- UHPHS_INSNREG04 : (UHPHS Offset: 0xa0) (R/W 32) EHCI Synopsys-Specific Registers 04 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t HCSPARAMS_W:1;             /**< bit:      0  HCSPARAMS Write                          */
    uint32_t HCCPARAMS_BW:1;            /**< bit:      1  HCCPARAMS Bits Write                     */
    uint32_t SDPE_TIME:1;               /**< bit:      2  Scales Down Port Enumeration Time        */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t NAK_RF:1;                  /**< bit:      4  NAK Reload Fix (Read/Write)              */
    uint32_t EN_AutoFunc:1;             /**< bit:      5  Enable Automatic Feature                 */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_INSNREG04_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_INSNREG04_OFFSET              (0xA0)                                        /**<  (UHPHS_INSNREG04) EHCI Synopsys-Specific Registers 04  Offset */

#define UHPHS_INSNREG04_HCSPARAMS_W_Pos     0                                              /**< (UHPHS_INSNREG04) HCSPARAMS Write Position */
#define UHPHS_INSNREG04_HCSPARAMS_W_Msk     (_U_(0x1) << UHPHS_INSNREG04_HCSPARAMS_W_Pos)  /**< (UHPHS_INSNREG04) HCSPARAMS Write Mask */
#define UHPHS_INSNREG04_HCSPARAMS_W         UHPHS_INSNREG04_HCSPARAMS_W_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_INSNREG04_HCSPARAMS_W_Msk instead */
#define UHPHS_INSNREG04_HCCPARAMS_BW_Pos    1                                              /**< (UHPHS_INSNREG04) HCCPARAMS Bits Write Position */
#define UHPHS_INSNREG04_HCCPARAMS_BW_Msk    (_U_(0x1) << UHPHS_INSNREG04_HCCPARAMS_BW_Pos)  /**< (UHPHS_INSNREG04) HCCPARAMS Bits Write Mask */
#define UHPHS_INSNREG04_HCCPARAMS_BW        UHPHS_INSNREG04_HCCPARAMS_BW_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_INSNREG04_HCCPARAMS_BW_Msk instead */
#define UHPHS_INSNREG04_SDPE_TIME_Pos       2                                              /**< (UHPHS_INSNREG04) Scales Down Port Enumeration Time Position */
#define UHPHS_INSNREG04_SDPE_TIME_Msk       (_U_(0x1) << UHPHS_INSNREG04_SDPE_TIME_Pos)    /**< (UHPHS_INSNREG04) Scales Down Port Enumeration Time Mask */
#define UHPHS_INSNREG04_SDPE_TIME           UHPHS_INSNREG04_SDPE_TIME_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_INSNREG04_SDPE_TIME_Msk instead */
#define UHPHS_INSNREG04_NAK_RF_Pos          4                                              /**< (UHPHS_INSNREG04) NAK Reload Fix (Read/Write) Position */
#define UHPHS_INSNREG04_NAK_RF_Msk          (_U_(0x1) << UHPHS_INSNREG04_NAK_RF_Pos)       /**< (UHPHS_INSNREG04) NAK Reload Fix (Read/Write) Mask */
#define UHPHS_INSNREG04_NAK_RF              UHPHS_INSNREG04_NAK_RF_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_INSNREG04_NAK_RF_Msk instead */
#define UHPHS_INSNREG04_EN_AutoFunc_Pos     5                                              /**< (UHPHS_INSNREG04) Enable Automatic Feature Position */
#define UHPHS_INSNREG04_EN_AutoFunc_Msk     (_U_(0x1) << UHPHS_INSNREG04_EN_AutoFunc_Pos)  /**< (UHPHS_INSNREG04) Enable Automatic Feature Mask */
#define UHPHS_INSNREG04_EN_AutoFunc         UHPHS_INSNREG04_EN_AutoFunc_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_INSNREG04_EN_AutoFunc_Msk instead */
#define UHPHS_INSNREG04_MASK                _U_(0x37)                                      /**< \deprecated (UHPHS_INSNREG04) Register MASK  (Use UHPHS_INSNREG04_Msk instead)  */
#define UHPHS_INSNREG04_Msk                 _U_(0x37)                                      /**< (UHPHS_INSNREG04) Register Mask  */


/* -------- UHPHS_INSNREG05 : (UHPHS Offset: 0xa4) (R/W 32) EHCI Synopsys-Specific Registers 05 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t VStatus:8;                 /**< bit:   0..7  Vendor Status (Software RO)              */
    uint32_t VControl:4;                /**< bit:  8..11  Vendor Control (Software R/W)            */
    uint32_t VControlLoadM:1;           /**< bit:     12  Vendor Control Load Microframe           */
    uint32_t VPort:4;                   /**< bit: 13..16  Vendor Port (Software R/W)               */
    uint32_t VBusy:1;                   /**< bit:     17  Vendor Busy (Software RO)                */
    uint32_t :14;                       /**< bit: 18..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_INSNREG05_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_INSNREG05_OFFSET              (0xA4)                                        /**<  (UHPHS_INSNREG05) EHCI Synopsys-Specific Registers 05  Offset */

#define UHPHS_INSNREG05_VStatus_Pos         0                                              /**< (UHPHS_INSNREG05) Vendor Status (Software RO) Position */
#define UHPHS_INSNREG05_VStatus_Msk         (_U_(0xFF) << UHPHS_INSNREG05_VStatus_Pos)     /**< (UHPHS_INSNREG05) Vendor Status (Software RO) Mask */
#define UHPHS_INSNREG05_VStatus(value)      (UHPHS_INSNREG05_VStatus_Msk & ((value) << UHPHS_INSNREG05_VStatus_Pos))
#define UHPHS_INSNREG05_VControl_Pos        8                                              /**< (UHPHS_INSNREG05) Vendor Control (Software R/W) Position */
#define UHPHS_INSNREG05_VControl_Msk        (_U_(0xF) << UHPHS_INSNREG05_VControl_Pos)     /**< (UHPHS_INSNREG05) Vendor Control (Software R/W) Mask */
#define UHPHS_INSNREG05_VControl(value)     (UHPHS_INSNREG05_VControl_Msk & ((value) << UHPHS_INSNREG05_VControl_Pos))
#define UHPHS_INSNREG05_VControlLoadM_Pos   12                                             /**< (UHPHS_INSNREG05) Vendor Control Load Microframe Position */
#define UHPHS_INSNREG05_VControlLoadM_Msk   (_U_(0x1) << UHPHS_INSNREG05_VControlLoadM_Pos)  /**< (UHPHS_INSNREG05) Vendor Control Load Microframe Mask */
#define UHPHS_INSNREG05_VControlLoadM       UHPHS_INSNREG05_VControlLoadM_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_INSNREG05_VControlLoadM_Msk instead */
#define UHPHS_INSNREG05_VPort_Pos           13                                             /**< (UHPHS_INSNREG05) Vendor Port (Software R/W) Position */
#define UHPHS_INSNREG05_VPort_Msk           (_U_(0xF) << UHPHS_INSNREG05_VPort_Pos)        /**< (UHPHS_INSNREG05) Vendor Port (Software R/W) Mask */
#define UHPHS_INSNREG05_VPort(value)        (UHPHS_INSNREG05_VPort_Msk & ((value) << UHPHS_INSNREG05_VPort_Pos))
#define UHPHS_INSNREG05_VBusy_Pos           17                                             /**< (UHPHS_INSNREG05) Vendor Busy (Software RO) Position */
#define UHPHS_INSNREG05_VBusy_Msk           (_U_(0x1) << UHPHS_INSNREG05_VBusy_Pos)        /**< (UHPHS_INSNREG05) Vendor Busy (Software RO) Mask */
#define UHPHS_INSNREG05_VBusy               UHPHS_INSNREG05_VBusy_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_INSNREG05_VBusy_Msk instead */
#define UHPHS_INSNREG05_MASK                _U_(0x3FFFF)                                   /**< \deprecated (UHPHS_INSNREG05) Register MASK  (Use UHPHS_INSNREG05_Msk instead)  */
#define UHPHS_INSNREG05_Msk                 _U_(0x3FFFF)                                   /**< (UHPHS_INSNREG05) Register Mask  */


/* -------- UHPHS_INSNREG06 : (UHPHS Offset: 0xa8) (R/W 32) EHCI Synopsys-Specific Registers 06 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t Nb_Success_Burst:4;        /**< bit:   0..3  Number of Successful Bursts (read-only)(1) */
    uint32_t Nb_Burst:5;                /**< bit:   4..8  Number of Bursts (read-only)(1)          */
    uint32_t HBURST:3;                  /**< bit:  9..11  Burst Value (read-only)(1)               */
    uint32_t :19;                       /**< bit: 12..30  Reserved */
    uint32_t AHB_ERR:1;                 /**< bit:     31  AHB Error                                */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_INSNREG06_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_INSNREG06_OFFSET              (0xA8)                                        /**<  (UHPHS_INSNREG06) EHCI Synopsys-Specific Registers 06  Offset */

#define UHPHS_INSNREG06_Nb_Success_Burst_Pos 0                                              /**< (UHPHS_INSNREG06) Number of Successful Bursts (read-only)(1) Position */
#define UHPHS_INSNREG06_Nb_Success_Burst_Msk (_U_(0xF) << UHPHS_INSNREG06_Nb_Success_Burst_Pos)  /**< (UHPHS_INSNREG06) Number of Successful Bursts (read-only)(1) Mask */
#define UHPHS_INSNREG06_Nb_Success_Burst(value) (UHPHS_INSNREG06_Nb_Success_Burst_Msk & ((value) << UHPHS_INSNREG06_Nb_Success_Burst_Pos))
#define UHPHS_INSNREG06_Nb_Burst_Pos        4                                              /**< (UHPHS_INSNREG06) Number of Bursts (read-only)(1) Position */
#define UHPHS_INSNREG06_Nb_Burst_Msk        (_U_(0x1F) << UHPHS_INSNREG06_Nb_Burst_Pos)    /**< (UHPHS_INSNREG06) Number of Bursts (read-only)(1) Mask */
#define UHPHS_INSNREG06_Nb_Burst(value)     (UHPHS_INSNREG06_Nb_Burst_Msk & ((value) << UHPHS_INSNREG06_Nb_Burst_Pos))
#define UHPHS_INSNREG06_HBURST_Pos          9                                              /**< (UHPHS_INSNREG06) Burst Value (read-only)(1) Position */
#define UHPHS_INSNREG06_HBURST_Msk          (_U_(0x7) << UHPHS_INSNREG06_HBURST_Pos)       /**< (UHPHS_INSNREG06) Burst Value (read-only)(1) Mask */
#define UHPHS_INSNREG06_HBURST(value)       (UHPHS_INSNREG06_HBURST_Msk & ((value) << UHPHS_INSNREG06_HBURST_Pos))
#define UHPHS_INSNREG06_AHB_ERR_Pos         31                                             /**< (UHPHS_INSNREG06) AHB Error Position */
#define UHPHS_INSNREG06_AHB_ERR_Msk         (_U_(0x1) << UHPHS_INSNREG06_AHB_ERR_Pos)      /**< (UHPHS_INSNREG06) AHB Error Mask */
#define UHPHS_INSNREG06_AHB_ERR             UHPHS_INSNREG06_AHB_ERR_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_INSNREG06_AHB_ERR_Msk instead */
#define UHPHS_INSNREG06_MASK                _U_(0x80000FFF)                                /**< \deprecated (UHPHS_INSNREG06) Register MASK  (Use UHPHS_INSNREG06_Msk instead)  */
#define UHPHS_INSNREG06_Msk                 _U_(0x80000FFF)                                /**< (UHPHS_INSNREG06) Register Mask  */


/* -------- UHPHS_INSNREG07 : (UHPHS Offset: 0xac) (R/W 32) EHCI Synopsys-Specific Registers 07 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t AHB_ADDR:32;               /**< bit:  0..31  AHB Address (read only)                  */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_INSNREG07_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_INSNREG07_OFFSET              (0xAC)                                        /**<  (UHPHS_INSNREG07) EHCI Synopsys-Specific Registers 07  Offset */

#define UHPHS_INSNREG07_AHB_ADDR_Pos        0                                              /**< (UHPHS_INSNREG07) AHB Address (read only) Position */
#define UHPHS_INSNREG07_AHB_ADDR_Msk        (_U_(0xFFFFFFFF) << UHPHS_INSNREG07_AHB_ADDR_Pos)  /**< (UHPHS_INSNREG07) AHB Address (read only) Mask */
#define UHPHS_INSNREG07_AHB_ADDR(value)     (UHPHS_INSNREG07_AHB_ADDR_Msk & ((value) << UHPHS_INSNREG07_AHB_ADDR_Pos))
#define UHPHS_INSNREG07_MASK                _U_(0xFFFFFFFF)                                /**< \deprecated (UHPHS_INSNREG07) Register MASK  (Use UHPHS_INSNREG07_Msk instead)  */
#define UHPHS_INSNREG07_Msk                 _U_(0xFFFFFFFF)                                /**< (UHPHS_INSNREG07) Register Mask  */


/* -------- UHPHS_INSNREG08 : (UHPHS Offset: 0xb0) (R/W 32) EHCI Synopsys-Specific Registers 08 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t HSIC_EN:1;                 /**< bit:      2  HSIC Enable/Disable                      */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UHPHS_INSNREG08_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UHPHS_INSNREG08_OFFSET              (0xB0)                                        /**<  (UHPHS_INSNREG08) EHCI Synopsys-Specific Registers 08  Offset */

#define UHPHS_INSNREG08_HSIC_EN_Pos         2                                              /**< (UHPHS_INSNREG08) HSIC Enable/Disable Position */
#define UHPHS_INSNREG08_HSIC_EN_Msk         (_U_(0x1) << UHPHS_INSNREG08_HSIC_EN_Pos)      /**< (UHPHS_INSNREG08) HSIC Enable/Disable Mask */
#define UHPHS_INSNREG08_HSIC_EN             UHPHS_INSNREG08_HSIC_EN_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use UHPHS_INSNREG08_HSIC_EN_Msk instead */
#define UHPHS_INSNREG08_MASK                _U_(0x04)                                      /**< \deprecated (UHPHS_INSNREG08) Register MASK  (Use UHPHS_INSNREG08_Msk instead)  */
#define UHPHS_INSNREG08_Msk                 _U_(0x04)                                      /**< (UHPHS_INSNREG08) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief UHPHS hardware registers */
typedef struct {  
  __I  uint32_t UHPHS_HCCAPBASE; /**< (UHPHS Offset: 0x00) UHPHS Host Controller Capability Register */
  __I  uint32_t UHPHS_HCSPARAMS; /**< (UHPHS Offset: 0x04) UHPHS Host Controller Structural Parameters Register */
  __I  uint32_t UHPHS_HCCPARAMS; /**< (UHPHS Offset: 0x08) UHPHS Host Controller Capability Parameters Register */
  __I  uint8_t                        Reserved1[4];
  __IO uint32_t UHPHS_USBCMD;   /**< (UHPHS Offset: 0x10) UHPHS USB Command Register */
  __IO uint32_t UHPHS_USBSTS;   /**< (UHPHS Offset: 0x14) UHPHS USB Status Register */
  __IO uint32_t UHPHS_USBINTR;  /**< (UHPHS Offset: 0x18) UHPHS USB Interrupt Enable Register */
  __IO uint32_t UHPHS_FRINDEX;  /**< (UHPHS Offset: 0x1C) UHPHS USB Frame Index Register */
  __IO uint32_t UHPHS_CTRLDSSEGMENT; /**< (UHPHS Offset: 0x20) UHPHS Control Data Structure Segment Register */
  __IO uint32_t UHPHS_PERIODICLISTBASE; /**< (UHPHS Offset: 0x24) UHPHS Periodic Frame List Base Address Register */
  __IO uint32_t UHPHS_ASYNCLISTADDR; /**< (UHPHS Offset: 0x28) UHPHS Asynchronous List Address Register */
  __I  uint8_t                        Reserved2[36];
  __IO uint32_t UHPHS_CONFIGFLAG; /**< (UHPHS Offset: 0x50) UHPHS Configured Flag Register */
  __IO uint32_t UHPHS_PORTSC_0; /**< (UHPHS Offset: 0x54) UHPHS Port Status and Control Register 0 */
  __IO uint32_t UHPHS_PORTSC_1; /**< (UHPHS Offset: 0x58) UHPHS Port Status and Control Register 1 */
  __IO uint32_t UHPHS_PORTSC_2; /**< (UHPHS Offset: 0x5C) UHPHS Port Status and Control Register 2 */
  __I  uint8_t                        Reserved3[48];
  __IO uint32_t UHPHS_INSNREG00; /**< (UHPHS Offset: 0x90) EHCI Synopsys-Specific Registers 00 */
  __IO uint32_t UHPHS_INSNREG01; /**< (UHPHS Offset: 0x94) EHCI Synopsys-Specific Registers 01 */
  __IO uint32_t UHPHS_INSNREG02; /**< (UHPHS Offset: 0x98) EHCI Synopsys-Specific Registers 02 */
  __IO uint32_t UHPHS_INSNREG03; /**< (UHPHS Offset: 0x9C) EHCI Synopsys-Specific Registers 03 */
  __IO uint32_t UHPHS_INSNREG04; /**< (UHPHS Offset: 0xA0) EHCI Synopsys-Specific Registers 04 */
  __IO uint32_t UHPHS_INSNREG05; /**< (UHPHS Offset: 0xA4) EHCI Synopsys-Specific Registers 05 */
  __IO uint32_t UHPHS_INSNREG06; /**< (UHPHS Offset: 0xA8) EHCI Synopsys-Specific Registers 06 */
  __IO uint32_t UHPHS_INSNREG07; /**< (UHPHS Offset: 0xAC) EHCI Synopsys-Specific Registers 07 */
  __IO uint32_t UHPHS_INSNREG08; /**< (UHPHS Offset: 0xB0) EHCI Synopsys-Specific Registers 08 */
} Uhphs;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief UHPHS hardware registers */
typedef struct {  
  __I  UHPHS_HCCAPBASE_Type           UHPHS_HCCAPBASE; /**< Offset: 0x00 (R/   32) UHPHS Host Controller Capability Register */
  __I  UHPHS_HCSPARAMS_Type           UHPHS_HCSPARAMS; /**< Offset: 0x04 (R/   32) UHPHS Host Controller Structural Parameters Register */
  __I  UHPHS_HCCPARAMS_Type           UHPHS_HCCPARAMS; /**< Offset: 0x08 (R/   32) UHPHS Host Controller Capability Parameters Register */
  __I  uint8_t                        Reserved1[4];
  __IO UHPHS_USBCMD_Type              UHPHS_USBCMD;   /**< Offset: 0x10 (R/W  32) UHPHS USB Command Register */
  __IO UHPHS_USBSTS_Type              UHPHS_USBSTS;   /**< Offset: 0x14 (R/W  32) UHPHS USB Status Register */
  __IO UHPHS_USBINTR_Type             UHPHS_USBINTR;  /**< Offset: 0x18 (R/W  32) UHPHS USB Interrupt Enable Register */
  __IO UHPHS_FRINDEX_Type             UHPHS_FRINDEX;  /**< Offset: 0x1C (R/W  32) UHPHS USB Frame Index Register */
  __IO UHPHS_CTRLDSSEGMENT_Type       UHPHS_CTRLDSSEGMENT; /**< Offset: 0x20 (R/W  32) UHPHS Control Data Structure Segment Register */
  __IO UHPHS_PERIODICLISTBASE_Type    UHPHS_PERIODICLISTBASE; /**< Offset: 0x24 (R/W  32) UHPHS Periodic Frame List Base Address Register */
  __IO UHPHS_ASYNCLISTADDR_Type       UHPHS_ASYNCLISTADDR; /**< Offset: 0x28 (R/W  32) UHPHS Asynchronous List Address Register */
  __I  uint8_t                        Reserved2[36];
  __IO UHPHS_CONFIGFLAG_Type          UHPHS_CONFIGFLAG; /**< Offset: 0x50 (R/W  32) UHPHS Configured Flag Register */
  __IO UHPHS_PORTSC_0_Type            UHPHS_PORTSC_0; /**< Offset: 0x54 (R/W  32) UHPHS Port Status and Control Register 0 */
  __IO UHPHS_PORTSC_1_Type            UHPHS_PORTSC_1; /**< Offset: 0x58 (R/W  32) UHPHS Port Status and Control Register 1 */
  __IO UHPHS_PORTSC_2_Type            UHPHS_PORTSC_2; /**< Offset: 0x5C (R/W  32) UHPHS Port Status and Control Register 2 */
  __I  uint8_t                        Reserved3[48];
  __IO UHPHS_INSNREG00_Type           UHPHS_INSNREG00; /**< Offset: 0x90 (R/W  32) EHCI Synopsys-Specific Registers 00 */
  __IO UHPHS_INSNREG01_Type           UHPHS_INSNREG01; /**< Offset: 0x94 (R/W  32) EHCI Synopsys-Specific Registers 01 */
  __IO UHPHS_INSNREG02_Type           UHPHS_INSNREG02; /**< Offset: 0x98 (R/W  32) EHCI Synopsys-Specific Registers 02 */
  __IO UHPHS_INSNREG03_Type           UHPHS_INSNREG03; /**< Offset: 0x9C (R/W  32) EHCI Synopsys-Specific Registers 03 */
  __IO UHPHS_INSNREG04_Type           UHPHS_INSNREG04; /**< Offset: 0xA0 (R/W  32) EHCI Synopsys-Specific Registers 04 */
  __IO UHPHS_INSNREG05_Type           UHPHS_INSNREG05; /**< Offset: 0xA4 (R/W  32) EHCI Synopsys-Specific Registers 05 */
  __IO UHPHS_INSNREG06_Type           UHPHS_INSNREG06; /**< Offset: 0xA8 (R/W  32) EHCI Synopsys-Specific Registers 06 */
  __IO UHPHS_INSNREG07_Type           UHPHS_INSNREG07; /**< Offset: 0xAC (R/W  32) EHCI Synopsys-Specific Registers 07 */
  __IO UHPHS_INSNREG08_Type           UHPHS_INSNREG08; /**< Offset: 0xB0 (R/W  32) EHCI Synopsys-Specific Registers 08 */
} Uhphs;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of USB Host High Speed Port */

#endif /* _SAMA5D2_UHPHS_COMPONENT_H_ */
