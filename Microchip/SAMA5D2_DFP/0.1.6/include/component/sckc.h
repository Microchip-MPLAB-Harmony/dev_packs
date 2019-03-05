/**
 * \file
 *
 * \brief Component description for SCKC
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
#ifndef _SAMA5D2_SCKC_COMPONENT_H_
#define _SAMA5D2_SCKC_COMPONENT_H_
#define _SAMA5D2_SCKC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Slow Clock Controller
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SCKC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define SCKC_11073                      /**< (SCKC) Module ID */
#define REV_SCKC G                      /**< (SCKC) Module revision */

/* -------- SCKC_CR : (SCKC Offset: 0x00) (R/W 32) Slow Clock Controller Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :3;                        /**< bit:   0..2  Reserved */
    uint32_t OSCSEL:1;                  /**< bit:      3  Slow Clock Selector                      */
    uint32_t :28;                       /**< bit:  4..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SCKC_CR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCKC_CR_OFFSET                      (0x00)                                        /**<  (SCKC_CR) Slow Clock Controller Configuration Register  Offset */

#define SCKC_CR_OSCSEL_Pos                  3                                              /**< (SCKC_CR) Slow Clock Selector Position */
#define SCKC_CR_OSCSEL_Msk                  (_U_(0x1) << SCKC_CR_OSCSEL_Pos)               /**< (SCKC_CR) Slow Clock Selector Mask */
#define SCKC_CR_OSCSEL                      SCKC_CR_OSCSEL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SCKC_CR_OSCSEL_Msk instead */
#define   SCKC_CR_OSCSEL_RC_Val             _U_(0x0)                                       /**< (SCKC_CR) Slow clock is the embedded 64 kHz (typical) RC oscillator.  */
#define   SCKC_CR_OSCSEL_XTAL_Val           _U_(0x1)                                       /**< (SCKC_CR) Slow clock is the 32.768 kHz crystal oscillator.  */
#define SCKC_CR_OSCSEL_RC                   (SCKC_CR_OSCSEL_RC_Val << SCKC_CR_OSCSEL_Pos)  /**< (SCKC_CR) Slow clock is the embedded 64 kHz (typical) RC oscillator. Position  */
#define SCKC_CR_OSCSEL_XTAL                 (SCKC_CR_OSCSEL_XTAL_Val << SCKC_CR_OSCSEL_Pos)  /**< (SCKC_CR) Slow clock is the 32.768 kHz crystal oscillator. Position  */
#define SCKC_CR_MASK                        _U_(0x08)                                      /**< \deprecated (SCKC_CR) Register MASK  (Use SCKC_CR_Msk instead)  */
#define SCKC_CR_Msk                         _U_(0x08)                                      /**< (SCKC_CR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief SCKC hardware registers */
typedef struct {  
  __IO uint32_t SCKC_CR;        /**< (SCKC Offset: 0x00) Slow Clock Controller Configuration Register */
} Sckc;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief SCKC hardware registers */
typedef struct {  
  __IO SCKC_CR_Type                   SCKC_CR;        /**< Offset: 0x00 (R/W  32) Slow Clock Controller Configuration Register */
} Sckc;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Slow Clock Controller */

#endif /* _SAMA5D2_SCKC_COMPONENT_H_ */
