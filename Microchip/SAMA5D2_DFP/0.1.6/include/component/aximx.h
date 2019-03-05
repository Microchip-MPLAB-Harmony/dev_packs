/**
 * \file
 *
 * \brief Component description for AXIMX
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
#ifndef _SAMA5D2_AXIMX_COMPONENT_H_
#define _SAMA5D2_AXIMX_COMPONENT_H_
#define _SAMA5D2_AXIMX_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 AXI Matrix
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR AXIMX */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define AXIMX_11103                      /**< (AXIMX) Module ID */
#define REV_AXIMX E                      /**< (AXIMX) Module revision */

/* -------- AXIMX_REMAP : (AXIMX Offset: 0x00) (/W 32) AXI Matrix Remap Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t REMAP0:1;                  /**< bit:      0  Remap State 0                            */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t REMAP:1;                   /**< bit:      0  Remap State x                            */
    uint32_t :31;                       /**< bit:  1..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} AXIMX_REMAP_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AXIMX_REMAP_OFFSET                  (0x00)                                        /**<  (AXIMX_REMAP) AXI Matrix Remap Register  Offset */

#define AXIMX_REMAP_REMAP0_Pos              0                                              /**< (AXIMX_REMAP) Remap State 0 Position */
#define AXIMX_REMAP_REMAP0_Msk              (_U_(0x1) << AXIMX_REMAP_REMAP0_Pos)           /**< (AXIMX_REMAP) Remap State 0 Mask */
#define AXIMX_REMAP_REMAP0                  AXIMX_REMAP_REMAP0_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use AXIMX_REMAP_REMAP0_Msk instead */
#define AXIMX_REMAP_MASK                    _U_(0x01)                                      /**< \deprecated (AXIMX_REMAP) Register MASK  (Use AXIMX_REMAP_Msk instead)  */
#define AXIMX_REMAP_Msk                     _U_(0x01)                                      /**< (AXIMX_REMAP) Register Mask  */

#define AXIMX_REMAP_REMAP_Pos               0                                              /**< (AXIMX_REMAP Position) Remap State x */
#define AXIMX_REMAP_REMAP_Msk               (_U_(0x1) << AXIMX_REMAP_REMAP_Pos)            /**< (AXIMX_REMAP Mask) REMAP */
#define AXIMX_REMAP_REMAP(value)            (AXIMX_REMAP_REMAP_Msk & ((value) << AXIMX_REMAP_REMAP_Pos))  

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief AXIMX hardware registers */
typedef struct {  
  __O  uint32_t AXIMX_REMAP;    /**< (AXIMX Offset: 0x00) AXI Matrix Remap Register */
} Aximx;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief AXIMX hardware registers */
typedef struct {  
  __O  AXIMX_REMAP_Type               AXIMX_REMAP;    /**< Offset: 0x00 ( /W  32) AXI Matrix Remap Register */
} Aximx;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of AXI Matrix */

#endif /* _SAMA5D2_AXIMX_COMPONENT_H_ */
