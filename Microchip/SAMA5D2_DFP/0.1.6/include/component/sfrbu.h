/**
 * \file
 *
 * \brief Component description for SFRBU
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
#ifndef _SAMA5D2_SFRBU_COMPONENT_H_
#define _SAMA5D2_SFRBU_COMPONENT_H_
#define _SAMA5D2_SFRBU_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Special Function Registers Backup
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SFRBU */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define SFRBU_44053                      /**< (SFRBU) Module ID */
#define REV_SFRBU B                      /**< (SFRBU) Module revision */

/* -------- SFRBU_PSWBUCTRL : (SFRBU Offset: 0x00) (R/W 32) Power Switch BU Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SCTRL:1;                   /**< bit:      0  Power Switch BU Software Control         */
    uint32_t SSWCTRL:1;                 /**< bit:      1  Power Switch BU Source Selection         */
    uint32_t SMCTRL:1;                  /**< bit:      2  Allow Power Switch BU Control by Security Module Autobackup (Hardware) */
    uint32_t STATE:1;                   /**< bit:      3  Power Switch BU state (Read-only)        */
    uint32_t :4;                        /**< bit:   4..7  Reserved */
    uint32_t KEYPSWMODE:24;             /**< bit:  8..31                                           */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFRBU_PSWBUCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFRBU_PSWBUCTRL_OFFSET              (0x00)                                        /**<  (SFRBU_PSWBUCTRL) Power Switch BU Control Register  Offset */

#define SFRBU_PSWBUCTRL_SCTRL_Pos           0                                              /**< (SFRBU_PSWBUCTRL) Power Switch BU Software Control Position */
#define SFRBU_PSWBUCTRL_SCTRL_Msk           (_U_(0x1) << SFRBU_PSWBUCTRL_SCTRL_Pos)        /**< (SFRBU_PSWBUCTRL) Power Switch BU Software Control Mask */
#define SFRBU_PSWBUCTRL_SCTRL               SFRBU_PSWBUCTRL_SCTRL_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFRBU_PSWBUCTRL_SCTRL_Msk instead */
#define SFRBU_PSWBUCTRL_SSWCTRL_Pos         1                                              /**< (SFRBU_PSWBUCTRL) Power Switch BU Source Selection Position */
#define SFRBU_PSWBUCTRL_SSWCTRL_Msk         (_U_(0x1) << SFRBU_PSWBUCTRL_SSWCTRL_Pos)      /**< (SFRBU_PSWBUCTRL) Power Switch BU Source Selection Mask */
#define SFRBU_PSWBUCTRL_SSWCTRL             SFRBU_PSWBUCTRL_SSWCTRL_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFRBU_PSWBUCTRL_SSWCTRL_Msk instead */
#define SFRBU_PSWBUCTRL_SMCTRL_Pos          2                                              /**< (SFRBU_PSWBUCTRL) Allow Power Switch BU Control by Security Module Autobackup (Hardware) Position */
#define SFRBU_PSWBUCTRL_SMCTRL_Msk          (_U_(0x1) << SFRBU_PSWBUCTRL_SMCTRL_Pos)       /**< (SFRBU_PSWBUCTRL) Allow Power Switch BU Control by Security Module Autobackup (Hardware) Mask */
#define SFRBU_PSWBUCTRL_SMCTRL              SFRBU_PSWBUCTRL_SMCTRL_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFRBU_PSWBUCTRL_SMCTRL_Msk instead */
#define SFRBU_PSWBUCTRL_STATE_Pos           3                                              /**< (SFRBU_PSWBUCTRL) Power Switch BU state (Read-only) Position */
#define SFRBU_PSWBUCTRL_STATE_Msk           (_U_(0x1) << SFRBU_PSWBUCTRL_STATE_Pos)        /**< (SFRBU_PSWBUCTRL) Power Switch BU state (Read-only) Mask */
#define SFRBU_PSWBUCTRL_STATE               SFRBU_PSWBUCTRL_STATE_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFRBU_PSWBUCTRL_STATE_Msk instead */
#define SFRBU_PSWBUCTRL_KEYPSWMODE_Pos      8                                              /**< (SFRBU_PSWBUCTRL)  Position */
#define SFRBU_PSWBUCTRL_KEYPSWMODE_Msk      (_U_(0xFFFFFF) << SFRBU_PSWBUCTRL_KEYPSWMODE_Pos)  /**< (SFRBU_PSWBUCTRL)  Mask */
#define SFRBU_PSWBUCTRL_KEYPSWMODE(value)   (SFRBU_PSWBUCTRL_KEYPSWMODE_Msk & ((value) << SFRBU_PSWBUCTRL_KEYPSWMODE_Pos))
#define SFRBU_PSWBUCTRL_MASK                _U_(0xFFFFFF0F)                                /**< \deprecated (SFRBU_PSWBUCTRL) Register MASK  (Use SFRBU_PSWBUCTRL_Msk instead)  */
#define SFRBU_PSWBUCTRL_Msk                 _U_(0xFFFFFF0F)                                /**< (SFRBU_PSWBUCTRL) Register Mask  */


/* -------- SFRBU_TSRANGECFG : (SFRBU Offset: 0x04) (R/W 32) TS Range Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TSHRSEL:1;                 /**< bit:      0  Temperature Sensor Range Selection       */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFRBU_TSRANGECFG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFRBU_TSRANGECFG_OFFSET             (0x04)                                        /**<  (SFRBU_TSRANGECFG) TS Range Configuration Register  Offset */

#define SFRBU_TSRANGECFG_TSHRSEL_Pos        0                                              /**< (SFRBU_TSRANGECFG) Temperature Sensor Range Selection Position */
#define SFRBU_TSRANGECFG_TSHRSEL_Msk        (_U_(0x1) << SFRBU_TSRANGECFG_TSHRSEL_Pos)     /**< (SFRBU_TSRANGECFG) Temperature Sensor Range Selection Mask */
#define SFRBU_TSRANGECFG_TSHRSEL            SFRBU_TSRANGECFG_TSHRSEL_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFRBU_TSRANGECFG_TSHRSEL_Msk instead */
#define SFRBU_TSRANGECFG_MASK               _U_(0x01)                                      /**< \deprecated (SFRBU_TSRANGECFG) Register MASK  (Use SFRBU_TSRANGECFG_Msk instead)  */
#define SFRBU_TSRANGECFG_Msk                _U_(0x01)                                      /**< (SFRBU_TSRANGECFG) Register Mask  */


/* -------- SFRBU_DDRBUMCR : (SFRBU Offset: 0x10) (R/W 32) DDR BU Mode Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BUMEN:1;                   /**< bit:      0  DDR BU Mode Enable                       */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFRBU_DDRBUMCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFRBU_DDRBUMCR_OFFSET               (0x10)                                        /**<  (SFRBU_DDRBUMCR) DDR BU Mode Control Register  Offset */

#define SFRBU_DDRBUMCR_BUMEN_Pos            0                                              /**< (SFRBU_DDRBUMCR) DDR BU Mode Enable Position */
#define SFRBU_DDRBUMCR_BUMEN_Msk            (_U_(0x1) << SFRBU_DDRBUMCR_BUMEN_Pos)         /**< (SFRBU_DDRBUMCR) DDR BU Mode Enable Mask */
#define SFRBU_DDRBUMCR_BUMEN                SFRBU_DDRBUMCR_BUMEN_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFRBU_DDRBUMCR_BUMEN_Msk instead */
#define SFRBU_DDRBUMCR_MASK                 _U_(0x01)                                      /**< \deprecated (SFRBU_DDRBUMCR) Register MASK  (Use SFRBU_DDRBUMCR_Msk instead)  */
#define SFRBU_DDRBUMCR_Msk                  _U_(0x01)                                      /**< (SFRBU_DDRBUMCR) Register Mask  */


/* -------- SFRBU_RXLPPUCR : (SFRBU Offset: 0x14) (R/W 32) RXLP Pull-Up Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RXDPUCTRL:1;               /**< bit:      0  RXLP RXD Pull-Up Control                 */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SFRBU_RXLPPUCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SFRBU_RXLPPUCR_OFFSET               (0x14)                                        /**<  (SFRBU_RXLPPUCR) RXLP Pull-Up Control Register  Offset */

#define SFRBU_RXLPPUCR_RXDPUCTRL_Pos        0                                              /**< (SFRBU_RXLPPUCR) RXLP RXD Pull-Up Control Position */
#define SFRBU_RXLPPUCR_RXDPUCTRL_Msk        (_U_(0x1) << SFRBU_RXLPPUCR_RXDPUCTRL_Pos)     /**< (SFRBU_RXLPPUCR) RXLP RXD Pull-Up Control Mask */
#define SFRBU_RXLPPUCR_RXDPUCTRL            SFRBU_RXLPPUCR_RXDPUCTRL_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SFRBU_RXLPPUCR_RXDPUCTRL_Msk instead */
#define SFRBU_RXLPPUCR_MASK                 _U_(0x01)                                      /**< \deprecated (SFRBU_RXLPPUCR) Register MASK  (Use SFRBU_RXLPPUCR_Msk instead)  */
#define SFRBU_RXLPPUCR_Msk                  _U_(0x01)                                      /**< (SFRBU_RXLPPUCR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief SFRBU hardware registers */
typedef struct {  
  __IO uint32_t SFRBU_PSWBUCTRL; /**< (SFRBU Offset: 0x00) Power Switch BU Control Register */
  __IO uint32_t SFRBU_TSRANGECFG; /**< (SFRBU Offset: 0x04) TS Range Configuration Register */
  __I  uint8_t                        Reserved1[8];
  __IO uint32_t SFRBU_DDRBUMCR; /**< (SFRBU Offset: 0x10) DDR BU Mode Control Register */
  __IO uint32_t SFRBU_RXLPPUCR; /**< (SFRBU Offset: 0x14) RXLP Pull-Up Control Register */
} Sfrbu;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief SFRBU hardware registers */
typedef struct {  
  __IO SFRBU_PSWBUCTRL_Type           SFRBU_PSWBUCTRL; /**< Offset: 0x00 (R/W  32) Power Switch BU Control Register */
  __IO SFRBU_TSRANGECFG_Type          SFRBU_TSRANGECFG; /**< Offset: 0x04 (R/W  32) TS Range Configuration Register */
  __I  uint8_t                        Reserved1[8];
  __IO SFRBU_DDRBUMCR_Type            SFRBU_DDRBUMCR; /**< Offset: 0x10 (R/W  32) DDR BU Mode Control Register */
  __IO SFRBU_RXLPPUCR_Type            SFRBU_RXLPPUCR; /**< Offset: 0x14 (R/W  32) RXLP Pull-Up Control Register */
} Sfrbu;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Special Function Registers Backup */

#endif /* _SAMA5D2_SFRBU_COMPONENT_H_ */
