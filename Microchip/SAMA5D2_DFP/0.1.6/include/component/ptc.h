/**
 * \file
 *
 * \brief Component description for PTC
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
#ifndef _SAMA5D2_PTC_COMPONENT_H_
#define _SAMA5D2_PTC_COMPONENT_H_
#define _SAMA5D2_PTC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Peripheral Touch Controller
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PTC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define PTC_44038                      /**< (PTC) Module ID */
#define REV_PTC G                      /**< (PTC) Module revision */

/* -------- PTC_CMD : (PTC Offset: 0x28) (/W 8) PTC Command Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  CMD:4;                     /**< bit:   0..3  Host Command                             */
    uint8_t  :4;                        /**< bit:   4..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} PTC_CMD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PTC_CMD_OFFSET                      (0x28)                                        /**<  (PTC_CMD) PTC Command Register  Offset */

#define PTC_CMD_CMD_Pos                     0                                              /**< (PTC_CMD) Host Command Position */
#define PTC_CMD_CMD_Msk                     (_U_(0xF) << PTC_CMD_CMD_Pos)                  /**< (PTC_CMD) Host Command Mask */
#define PTC_CMD_CMD(value)                  (PTC_CMD_CMD_Msk & ((value) << PTC_CMD_CMD_Pos))
#define   PTC_CMD_CMD_NO_ACTION_Val         _U_(0x0)                                       /**< (PTC_CMD) -  */
#define   PTC_CMD_CMD_STOP_Val              _U_(0x1)                                       /**< (PTC_CMD) Waits for ongoing execution to complete, then stops.  */
#define   PTC_CMD_CMD_REST_Val              _U_(0x2)                                       /**< (PTC_CMD) Stops and resets  */
#define   PTC_CMD_CMD_ABORT_Val             _U_(0x4)                                       /**< (PTC_CMD) Stops without waiting for ongoing execution to complete.  */
#define   PTC_CMD_CMD_RUN_Val               _U_(0x5)                                       /**< (PTC_CMD) Starts execution (from stopped state)  */
#define PTC_CMD_CMD_NO_ACTION               (PTC_CMD_CMD_NO_ACTION_Val << PTC_CMD_CMD_Pos)  /**< (PTC_CMD) - Position  */
#define PTC_CMD_CMD_STOP                    (PTC_CMD_CMD_STOP_Val << PTC_CMD_CMD_Pos)      /**< (PTC_CMD) Waits for ongoing execution to complete, then stops. Position  */
#define PTC_CMD_CMD_REST                    (PTC_CMD_CMD_REST_Val << PTC_CMD_CMD_Pos)      /**< (PTC_CMD) Stops and resets Position  */
#define PTC_CMD_CMD_ABORT                   (PTC_CMD_CMD_ABORT_Val << PTC_CMD_CMD_Pos)     /**< (PTC_CMD) Stops without waiting for ongoing execution to complete. Position  */
#define PTC_CMD_CMD_RUN                     (PTC_CMD_CMD_RUN_Val << PTC_CMD_CMD_Pos)       /**< (PTC_CMD) Starts execution (from stopped state) Position  */
#define PTC_CMD_MASK                        _U_(0x0F)                                      /**< \deprecated (PTC_CMD) Register MASK  (Use PTC_CMD_Msk instead)  */
#define PTC_CMD_Msk                         _U_(0x0F)                                      /**< (PTC_CMD) Register Mask  */


/* -------- PTC_ISR : (PTC Offset: 0x30) (R/W 8) PTC Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  NOTIFY0:1;                 /**< bit:      0  Notification to the Firmware             */
    uint8_t  :3;                        /**< bit:   1..3  Reserved */
    uint8_t  IRQ0:1;                    /**< bit:      4  IRQ0                                     */
    uint8_t  IRQ1:1;                    /**< bit:      5  IRQ1                                     */
    uint8_t  IRQ2:1;                    /**< bit:      6  IRQ2                                     */
    uint8_t  IRQ3:1;                    /**< bit:      7  IRQ3                                     */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint8_t  NOTIFY:1;                  /**< bit:      0  Notification to the Firmware             */
    uint8_t  :3;                        /**< bit:   1..3  Reserved */
    uint8_t  IRQ:4;                     /**< bit:   4..7  IRQ3                                     */
  } vec;                                /**< Structure used for vec  access  */
  uint8_t  reg;                         /**< Type used for register access */
} PTC_ISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PTC_ISR_OFFSET                      (0x30)                                        /**<  (PTC_ISR) PTC Interrupt Status Register  Offset */

#define PTC_ISR_NOTIFY0_Pos                 0                                              /**< (PTC_ISR) Notification to the Firmware Position */
#define PTC_ISR_NOTIFY0_Msk                 (_U_(0x1) << PTC_ISR_NOTIFY0_Pos)              /**< (PTC_ISR) Notification to the Firmware Mask */
#define PTC_ISR_NOTIFY0                     PTC_ISR_NOTIFY0_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PTC_ISR_NOTIFY0_Msk instead */
#define PTC_ISR_IRQ0_Pos                    4                                              /**< (PTC_ISR) IRQ0 Position */
#define PTC_ISR_IRQ0_Msk                    (_U_(0x1) << PTC_ISR_IRQ0_Pos)                 /**< (PTC_ISR) IRQ0 Mask */
#define PTC_ISR_IRQ0                        PTC_ISR_IRQ0_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PTC_ISR_IRQ0_Msk instead */
#define PTC_ISR_IRQ1_Pos                    5                                              /**< (PTC_ISR) IRQ1 Position */
#define PTC_ISR_IRQ1_Msk                    (_U_(0x1) << PTC_ISR_IRQ1_Pos)                 /**< (PTC_ISR) IRQ1 Mask */
#define PTC_ISR_IRQ1                        PTC_ISR_IRQ1_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PTC_ISR_IRQ1_Msk instead */
#define PTC_ISR_IRQ2_Pos                    6                                              /**< (PTC_ISR) IRQ2 Position */
#define PTC_ISR_IRQ2_Msk                    (_U_(0x1) << PTC_ISR_IRQ2_Pos)                 /**< (PTC_ISR) IRQ2 Mask */
#define PTC_ISR_IRQ2                        PTC_ISR_IRQ2_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PTC_ISR_IRQ2_Msk instead */
#define PTC_ISR_IRQ3_Pos                    7                                              /**< (PTC_ISR) IRQ3 Position */
#define PTC_ISR_IRQ3_Msk                    (_U_(0x1) << PTC_ISR_IRQ3_Pos)                 /**< (PTC_ISR) IRQ3 Mask */
#define PTC_ISR_IRQ3                        PTC_ISR_IRQ3_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PTC_ISR_IRQ3_Msk instead */
#define PTC_ISR_MASK                        _U_(0xF1)                                      /**< \deprecated (PTC_ISR) Register MASK  (Use PTC_ISR_Msk instead)  */
#define PTC_ISR_Msk                         _U_(0xF1)                                      /**< (PTC_ISR) Register Mask  */

#define PTC_ISR_NOTIFY_Pos                  0                                              /**< (PTC_ISR Position) Notification to the Firmware */
#define PTC_ISR_NOTIFY_Msk                  (_U_(0x1) << PTC_ISR_NOTIFY_Pos)               /**< (PTC_ISR Mask) NOTIFY */
#define PTC_ISR_NOTIFY(value)               (PTC_ISR_NOTIFY_Msk & ((value) << PTC_ISR_NOTIFY_Pos))  
#define PTC_ISR_IRQ_Pos                     4                                              /**< (PTC_ISR Position) IRQ3 */
#define PTC_ISR_IRQ_Msk                     (_U_(0xF) << PTC_ISR_IRQ_Pos)                  /**< (PTC_ISR Mask) IRQ */
#define PTC_ISR_IRQ(value)                  (PTC_ISR_IRQ_Msk & ((value) << PTC_ISR_IRQ_Pos))  

/* -------- PTC_IED : (PTC Offset: 0x35) (/W 8) PTC Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  :4;                        /**< bit:   0..3  Reserved */
    uint8_t  IER0:1;                    /**< bit:      4  IER0                                     */
    uint8_t  IER1:1;                    /**< bit:      5  IER1                                     */
    uint8_t  IER2:1;                    /**< bit:      6  IER2                                     */
    uint8_t  IER3:1;                    /**< bit:      7  IER3                                     */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint8_t  :4;                        /**< bit:   0..3  Reserved */
    uint8_t  IER:4;                     /**< bit:   4..7  IER3                                     */
  } vec;                                /**< Structure used for vec  access  */
  uint8_t  reg;                         /**< Type used for register access */
} PTC_IED_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PTC_IED_OFFSET                      (0x35)                                        /**<  (PTC_IED) PTC Enable Register  Offset */

#define PTC_IED_IER0_Pos                    4                                              /**< (PTC_IED) IER0 Position */
#define PTC_IED_IER0_Msk                    (_U_(0x1) << PTC_IED_IER0_Pos)                 /**< (PTC_IED) IER0 Mask */
#define PTC_IED_IER0                        PTC_IED_IER0_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PTC_IED_IER0_Msk instead */
#define PTC_IED_IER1_Pos                    5                                              /**< (PTC_IED) IER1 Position */
#define PTC_IED_IER1_Msk                    (_U_(0x1) << PTC_IED_IER1_Pos)                 /**< (PTC_IED) IER1 Mask */
#define PTC_IED_IER1                        PTC_IED_IER1_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PTC_IED_IER1_Msk instead */
#define PTC_IED_IER2_Pos                    6                                              /**< (PTC_IED) IER2 Position */
#define PTC_IED_IER2_Msk                    (_U_(0x1) << PTC_IED_IER2_Pos)                 /**< (PTC_IED) IER2 Mask */
#define PTC_IED_IER2                        PTC_IED_IER2_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PTC_IED_IER2_Msk instead */
#define PTC_IED_IER3_Pos                    7                                              /**< (PTC_IED) IER3 Position */
#define PTC_IED_IER3_Msk                    (_U_(0x1) << PTC_IED_IER3_Pos)                 /**< (PTC_IED) IER3 Mask */
#define PTC_IED_IER3                        PTC_IED_IER3_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PTC_IED_IER3_Msk instead */
#define PTC_IED_MASK                        _U_(0xF0)                                      /**< \deprecated (PTC_IED) Register MASK  (Use PTC_IED_Msk instead)  */
#define PTC_IED_Msk                         _U_(0xF0)                                      /**< (PTC_IED) Register Mask  */

#define PTC_IED_IER_Pos                     4                                              /**< (PTC_IED Position) IER3 */
#define PTC_IED_IER_Msk                     (_U_(0xF) << PTC_IED_IER_Pos)                  /**< (PTC_IED Mask) IER */
#define PTC_IED_IER(value)                  (PTC_IED_IER_Msk & ((value) << PTC_IED_IER_Pos))  

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief PTC hardware registers */
typedef struct {  
  __I  uint8_t                        Reserved1[40];
  __O  uint8_t PTC_CMD;        /**< (PTC Offset: 0x28) PTC Command Register */
  __I  uint8_t                        Reserved2[7];
  __IO uint8_t PTC_ISR;        /**< (PTC Offset: 0x30) PTC Interrupt Status Register */
  __I  uint8_t                        Reserved3[4];
  __O  uint8_t PTC_IED;        /**< (PTC Offset: 0x35) PTC Enable Register */
} Ptc;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief PTC hardware registers */
typedef struct {  
  __I  uint8_t                        Reserved1[40];
  __O  PTC_CMD_Type                   PTC_CMD;        /**< Offset: 0x28 ( /W   8) PTC Command Register */
  __I  uint8_t                        Reserved2[7];
  __IO PTC_ISR_Type                   PTC_ISR;        /**< Offset: 0x30 (R/W   8) PTC Interrupt Status Register */
  __I  uint8_t                        Reserved3[4];
  __O  PTC_IED_Type                   PTC_IED;        /**< Offset: 0x35 ( /W   8) PTC Enable Register */
} Ptc;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Peripheral Touch Controller */

#endif /* _SAMA5D2_PTC_COMPONENT_H_ */
