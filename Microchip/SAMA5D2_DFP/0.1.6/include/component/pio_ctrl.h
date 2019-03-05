/**
 * \file
 *
 * \brief Component description for PIO_CTRL
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
#ifndef _SAMA5D2_PIO_CTRL_COMPONENT_H_
#define _SAMA5D2_PIO_CTRL_COMPONENT_H_
#define _SAMA5D2_PIO_CTRL_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Parallel Input/Output Controller Control
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PIO_CTRL */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define PIO_CTRL_11264                      /**< (PIO_CTRL) Module ID */
#define REV_PIO_CTRL K                      /**< (PIO_CTRL) Module revision */

/* -------- PIO_CTRL_WPMR : (PIO_CTRL Offset: 0xe0) (R/W 32) PIO Write Protection Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPEN:1;                    /**< bit:      0  Write Protection Enable                  */
    uint32_t WPITEN:1;                  /**< bit:      1  Write Protection Interrupt Enable        */
    uint32_t :6;                        /**< bit:   2..7  Reserved */
    uint32_t WPKEY:24;                  /**< bit:  8..31  Write Protection Key                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PIO_CTRL_WPMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PIO_CTRL_WPMR_OFFSET                (0xE0)                                        /**<  (PIO_CTRL_WPMR) PIO Write Protection Mode Register  Offset */

#define PIO_CTRL_WPMR_WPEN_Pos              0                                              /**< (PIO_CTRL_WPMR) Write Protection Enable Position */
#define PIO_CTRL_WPMR_WPEN_Msk              (_U_(0x1) << PIO_CTRL_WPMR_WPEN_Pos)           /**< (PIO_CTRL_WPMR) Write Protection Enable Mask */
#define PIO_CTRL_WPMR_WPEN                  PIO_CTRL_WPMR_WPEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CTRL_WPMR_WPEN_Msk instead */
#define PIO_CTRL_WPMR_WPITEN_Pos            1                                              /**< (PIO_CTRL_WPMR) Write Protection Interrupt Enable Position */
#define PIO_CTRL_WPMR_WPITEN_Msk            (_U_(0x1) << PIO_CTRL_WPMR_WPITEN_Pos)         /**< (PIO_CTRL_WPMR) Write Protection Interrupt Enable Mask */
#define PIO_CTRL_WPMR_WPITEN                PIO_CTRL_WPMR_WPITEN_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CTRL_WPMR_WPITEN_Msk instead */
#define PIO_CTRL_WPMR_WPKEY_Pos             8                                              /**< (PIO_CTRL_WPMR) Write Protection Key Position */
#define PIO_CTRL_WPMR_WPKEY_Msk             (_U_(0xFFFFFF) << PIO_CTRL_WPMR_WPKEY_Pos)     /**< (PIO_CTRL_WPMR) Write Protection Key Mask */
#define PIO_CTRL_WPMR_WPKEY(value)          (PIO_CTRL_WPMR_WPKEY_Msk & ((value) << PIO_CTRL_WPMR_WPKEY_Pos))
#define   PIO_CTRL_WPMR_WPKEY_PASSWD_Val    _U_(0x50494F)                                  /**< (PIO_CTRL_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define PIO_CTRL_WPMR_WPKEY_PASSWD          (PIO_CTRL_WPMR_WPKEY_PASSWD_Val << PIO_CTRL_WPMR_WPKEY_Pos)  /**< (PIO_CTRL_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define PIO_CTRL_WPMR_MASK                  _U_(0xFFFFFF03)                                /**< \deprecated (PIO_CTRL_WPMR) Register MASK  (Use PIO_CTRL_WPMR_Msk instead)  */
#define PIO_CTRL_WPMR_Msk                   _U_(0xFFFFFF03)                                /**< (PIO_CTRL_WPMR) Register Mask  */


/* -------- PIO_CTRL_WPSR : (PIO_CTRL Offset: 0xe4) (R/ 32) PIO Write Protection Status Register -------- */
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
} PIO_CTRL_WPSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PIO_CTRL_WPSR_OFFSET                (0xE4)                                        /**<  (PIO_CTRL_WPSR) PIO Write Protection Status Register  Offset */

#define PIO_CTRL_WPSR_WPVS_Pos              0                                              /**< (PIO_CTRL_WPSR) Write Protection Violation Status Position */
#define PIO_CTRL_WPSR_WPVS_Msk              (_U_(0x1) << PIO_CTRL_WPSR_WPVS_Pos)           /**< (PIO_CTRL_WPSR) Write Protection Violation Status Mask */
#define PIO_CTRL_WPSR_WPVS                  PIO_CTRL_WPSR_WPVS_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CTRL_WPSR_WPVS_Msk instead */
#define PIO_CTRL_WPSR_WPVSRC_Pos            8                                              /**< (PIO_CTRL_WPSR) Write Protection Violation Source Position */
#define PIO_CTRL_WPSR_WPVSRC_Msk            (_U_(0xFFFF) << PIO_CTRL_WPSR_WPVSRC_Pos)      /**< (PIO_CTRL_WPSR) Write Protection Violation Source Mask */
#define PIO_CTRL_WPSR_WPVSRC(value)         (PIO_CTRL_WPSR_WPVSRC_Msk & ((value) << PIO_CTRL_WPSR_WPVSRC_Pos))
#define PIO_CTRL_WPSR_MASK                  _U_(0xFFFF01)                                  /**< \deprecated (PIO_CTRL_WPSR) Register MASK  (Use PIO_CTRL_WPSR_Msk instead)  */
#define PIO_CTRL_WPSR_Msk                   _U_(0xFFFF01)                                  /**< (PIO_CTRL_WPSR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief PIO_CTRL hardware registers */
typedef struct {  
  __I  uint8_t                        Reserved1[224];
  __IO uint32_t PIO_CTRL_WPMR;  /**< (PIO_CTRL Offset: 0xE0) PIO Write Protection Mode Register */
  __I  uint32_t PIO_CTRL_WPSR;  /**< (PIO_CTRL Offset: 0xE4) PIO Write Protection Status Register */
} PioCtrl;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief PIO_CTRL hardware registers */
typedef struct {  
  __I  uint8_t                        Reserved1[224];
  __IO PIO_CTRL_WPMR_Type             PIO_CTRL_WPMR;  /**< Offset: 0xE0 (R/W  32) PIO Write Protection Mode Register */
  __I  PIO_CTRL_WPSR_Type             PIO_CTRL_WPSR;  /**< Offset: 0xE4 (R/   32) PIO Write Protection Status Register */
} PioCtrl;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Parallel Input/Output Controller Control */

#endif /* _SAMA5D2_PIO_CTRL_COMPONENT_H_ */
