/**
 * \file
 *
 * \brief Component description for SECUMOD
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
#ifndef _SAMA5D2_SECUMOD_COMPONENT_H_
#define _SAMA5D2_SECUMOD_COMPONENT_H_
#define _SAMA5D2_SECUMOD_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Security Module
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SECUMOD */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define SECUMOD_44107                      /**< (SECUMOD) Module ID */
#define REV_SECUMOD B                      /**< (SECUMOD) Module revision */

/* -------- SECUMOD_CR : (SECUMOD Offset: 0x00) (/W 32) Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BACKUP:1;                  /**< bit:      0  Backup Mode                              */
    uint32_t NORMAL:1;                  /**< bit:      1  Normal Mode                              */
    uint32_t SWPROT:1;                  /**< bit:      2  Software Protection                      */
    uint32_t :6;                        /**< bit:   3..8  Reserved */
    uint32_t SCRAMB:2;                  /**< bit:  9..10  Memory Scrambling Enable                 */
    uint32_t :5;                        /**< bit: 11..15  Reserved */
    uint32_t KEY:16;                    /**< bit: 16..31  Password                                 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SECUMOD_CR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SECUMOD_CR_OFFSET                   (0x00)                                        /**<  (SECUMOD_CR) Control Register  Offset */

#define SECUMOD_CR_BACKUP_Pos               0                                              /**< (SECUMOD_CR) Backup Mode Position */
#define SECUMOD_CR_BACKUP_Msk               (_U_(0x1) << SECUMOD_CR_BACKUP_Pos)            /**< (SECUMOD_CR) Backup Mode Mask */
#define SECUMOD_CR_BACKUP                   SECUMOD_CR_BACKUP_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_CR_BACKUP_Msk instead */
#define SECUMOD_CR_NORMAL_Pos               1                                              /**< (SECUMOD_CR) Normal Mode Position */
#define SECUMOD_CR_NORMAL_Msk               (_U_(0x1) << SECUMOD_CR_NORMAL_Pos)            /**< (SECUMOD_CR) Normal Mode Mask */
#define SECUMOD_CR_NORMAL                   SECUMOD_CR_NORMAL_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_CR_NORMAL_Msk instead */
#define SECUMOD_CR_SWPROT_Pos               2                                              /**< (SECUMOD_CR) Software Protection Position */
#define SECUMOD_CR_SWPROT_Msk               (_U_(0x1) << SECUMOD_CR_SWPROT_Pos)            /**< (SECUMOD_CR) Software Protection Mask */
#define SECUMOD_CR_SWPROT                   SECUMOD_CR_SWPROT_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_CR_SWPROT_Msk instead */
#define SECUMOD_CR_SCRAMB_Pos               9                                              /**< (SECUMOD_CR) Memory Scrambling Enable Position */
#define SECUMOD_CR_SCRAMB_Msk               (_U_(0x3) << SECUMOD_CR_SCRAMB_Pos)            /**< (SECUMOD_CR) Memory Scrambling Enable Mask */
#define SECUMOD_CR_SCRAMB(value)            (SECUMOD_CR_SCRAMB_Msk & ((value) << SECUMOD_CR_SCRAMB_Pos))
#define SECUMOD_CR_KEY_Pos                  16                                             /**< (SECUMOD_CR) Password Position */
#define SECUMOD_CR_KEY_Msk                  (_U_(0xFFFF) << SECUMOD_CR_KEY_Pos)            /**< (SECUMOD_CR) Password Mask */
#define SECUMOD_CR_KEY(value)               (SECUMOD_CR_KEY_Msk & ((value) << SECUMOD_CR_KEY_Pos))
#define SECUMOD_CR_MASK                     _U_(0xFFFF0607)                                /**< \deprecated (SECUMOD_CR) Register MASK  (Use SECUMOD_CR_Msk instead)  */
#define SECUMOD_CR_Msk                      _U_(0xFFFF0607)                                /**< (SECUMOD_CR) Register Mask  */


/* -------- SECUMOD_SYSR : (SECUMOD Offset: 0x04) (R/W 32) System Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ERASE_DONE:1;              /**< bit:      0  Erasable Memories State (RW)             */
    uint32_t ERASE_ON:1;                /**< bit:      1  Erase Process Ongoing (RO)               */
    uint32_t BACKUP:1;                  /**< bit:      2  Backup Mode (RO)                         */
    uint32_t SWKUP:1;                   /**< bit:      3  SWKUP State (RO)                         */
    uint32_t :2;                        /**< bit:   4..5  Reserved */
    uint32_t AUTOBKP:1;                 /**< bit:      6  Automatic Backup Mode Enabled (RO)       */
    uint32_t SCRAMB:1;                  /**< bit:      7  Scrambling Enabled (RO)                  */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SECUMOD_SYSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SECUMOD_SYSR_OFFSET                 (0x04)                                        /**<  (SECUMOD_SYSR) System Status Register  Offset */

#define SECUMOD_SYSR_ERASE_DONE_Pos         0                                              /**< (SECUMOD_SYSR) Erasable Memories State (RW) Position */
#define SECUMOD_SYSR_ERASE_DONE_Msk         (_U_(0x1) << SECUMOD_SYSR_ERASE_DONE_Pos)      /**< (SECUMOD_SYSR) Erasable Memories State (RW) Mask */
#define SECUMOD_SYSR_ERASE_DONE             SECUMOD_SYSR_ERASE_DONE_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SYSR_ERASE_DONE_Msk instead */
#define SECUMOD_SYSR_ERASE_ON_Pos           1                                              /**< (SECUMOD_SYSR) Erase Process Ongoing (RO) Position */
#define SECUMOD_SYSR_ERASE_ON_Msk           (_U_(0x1) << SECUMOD_SYSR_ERASE_ON_Pos)        /**< (SECUMOD_SYSR) Erase Process Ongoing (RO) Mask */
#define SECUMOD_SYSR_ERASE_ON               SECUMOD_SYSR_ERASE_ON_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SYSR_ERASE_ON_Msk instead */
#define SECUMOD_SYSR_BACKUP_Pos             2                                              /**< (SECUMOD_SYSR) Backup Mode (RO) Position */
#define SECUMOD_SYSR_BACKUP_Msk             (_U_(0x1) << SECUMOD_SYSR_BACKUP_Pos)          /**< (SECUMOD_SYSR) Backup Mode (RO) Mask */
#define SECUMOD_SYSR_BACKUP                 SECUMOD_SYSR_BACKUP_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SYSR_BACKUP_Msk instead */
#define SECUMOD_SYSR_SWKUP_Pos              3                                              /**< (SECUMOD_SYSR) SWKUP State (RO) Position */
#define SECUMOD_SYSR_SWKUP_Msk              (_U_(0x1) << SECUMOD_SYSR_SWKUP_Pos)           /**< (SECUMOD_SYSR) SWKUP State (RO) Mask */
#define SECUMOD_SYSR_SWKUP                  SECUMOD_SYSR_SWKUP_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SYSR_SWKUP_Msk instead */
#define SECUMOD_SYSR_AUTOBKP_Pos            6                                              /**< (SECUMOD_SYSR) Automatic Backup Mode Enabled (RO) Position */
#define SECUMOD_SYSR_AUTOBKP_Msk            (_U_(0x1) << SECUMOD_SYSR_AUTOBKP_Pos)         /**< (SECUMOD_SYSR) Automatic Backup Mode Enabled (RO) Mask */
#define SECUMOD_SYSR_AUTOBKP                SECUMOD_SYSR_AUTOBKP_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SYSR_AUTOBKP_Msk instead */
#define SECUMOD_SYSR_SCRAMB_Pos             7                                              /**< (SECUMOD_SYSR) Scrambling Enabled (RO) Position */
#define SECUMOD_SYSR_SCRAMB_Msk             (_U_(0x1) << SECUMOD_SYSR_SCRAMB_Pos)          /**< (SECUMOD_SYSR) Scrambling Enabled (RO) Mask */
#define SECUMOD_SYSR_SCRAMB                 SECUMOD_SYSR_SCRAMB_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SYSR_SCRAMB_Msk instead */
#define SECUMOD_SYSR_MASK                   _U_(0xCF)                                      /**< \deprecated (SECUMOD_SYSR) Register MASK  (Use SECUMOD_SYSR_Msk instead)  */
#define SECUMOD_SYSR_Msk                    _U_(0xCF)                                      /**< (SECUMOD_SYSR) Register Mask  */


/* -------- SECUMOD_SR : (SECUMOD Offset: 0x08) (R/ 32) Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t DET0:1;                    /**< bit:     16  PIOBU Intrusion Detector                 */
    uint32_t DET1:1;                    /**< bit:     17  PIOBU Intrusion Detector                 */
    uint32_t DET2:1;                    /**< bit:     18  PIOBU Intrusion Detector                 */
    uint32_t DET3:1;                    /**< bit:     19  PIOBU Intrusion Detector                 */
    uint32_t DET4:1;                    /**< bit:     20  PIOBU Intrusion Detector                 */
    uint32_t DET5:1;                    /**< bit:     21  PIOBU Intrusion Detector                 */
    uint32_t DET6:1;                    /**< bit:     22  PIOBU Intrusion Detector                 */
    uint32_t DET7:1;                    /**< bit:     23  PIOBU Intrusion Detector                 */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t DET:8;                     /**< bit: 16..23  PIOBU Intrusion Detector                 */
    uint32_t :8;                        /**< bit: 24..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} SECUMOD_SR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SECUMOD_SR_OFFSET                   (0x08)                                        /**<  (SECUMOD_SR) Status Register  Offset */

#define SECUMOD_SR_DET0_Pos                 16                                             /**< (SECUMOD_SR) PIOBU Intrusion Detector Position */
#define SECUMOD_SR_DET0_Msk                 (_U_(0x1) << SECUMOD_SR_DET0_Pos)              /**< (SECUMOD_SR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SR_DET0                     SECUMOD_SR_DET0_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SR_DET0_Msk instead */
#define SECUMOD_SR_DET1_Pos                 17                                             /**< (SECUMOD_SR) PIOBU Intrusion Detector Position */
#define SECUMOD_SR_DET1_Msk                 (_U_(0x1) << SECUMOD_SR_DET1_Pos)              /**< (SECUMOD_SR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SR_DET1                     SECUMOD_SR_DET1_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SR_DET1_Msk instead */
#define SECUMOD_SR_DET2_Pos                 18                                             /**< (SECUMOD_SR) PIOBU Intrusion Detector Position */
#define SECUMOD_SR_DET2_Msk                 (_U_(0x1) << SECUMOD_SR_DET2_Pos)              /**< (SECUMOD_SR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SR_DET2                     SECUMOD_SR_DET2_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SR_DET2_Msk instead */
#define SECUMOD_SR_DET3_Pos                 19                                             /**< (SECUMOD_SR) PIOBU Intrusion Detector Position */
#define SECUMOD_SR_DET3_Msk                 (_U_(0x1) << SECUMOD_SR_DET3_Pos)              /**< (SECUMOD_SR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SR_DET3                     SECUMOD_SR_DET3_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SR_DET3_Msk instead */
#define SECUMOD_SR_DET4_Pos                 20                                             /**< (SECUMOD_SR) PIOBU Intrusion Detector Position */
#define SECUMOD_SR_DET4_Msk                 (_U_(0x1) << SECUMOD_SR_DET4_Pos)              /**< (SECUMOD_SR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SR_DET4                     SECUMOD_SR_DET4_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SR_DET4_Msk instead */
#define SECUMOD_SR_DET5_Pos                 21                                             /**< (SECUMOD_SR) PIOBU Intrusion Detector Position */
#define SECUMOD_SR_DET5_Msk                 (_U_(0x1) << SECUMOD_SR_DET5_Pos)              /**< (SECUMOD_SR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SR_DET5                     SECUMOD_SR_DET5_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SR_DET5_Msk instead */
#define SECUMOD_SR_DET6_Pos                 22                                             /**< (SECUMOD_SR) PIOBU Intrusion Detector Position */
#define SECUMOD_SR_DET6_Msk                 (_U_(0x1) << SECUMOD_SR_DET6_Pos)              /**< (SECUMOD_SR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SR_DET6                     SECUMOD_SR_DET6_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SR_DET6_Msk instead */
#define SECUMOD_SR_DET7_Pos                 23                                             /**< (SECUMOD_SR) PIOBU Intrusion Detector Position */
#define SECUMOD_SR_DET7_Msk                 (_U_(0x1) << SECUMOD_SR_DET7_Pos)              /**< (SECUMOD_SR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SR_DET7                     SECUMOD_SR_DET7_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SR_DET7_Msk instead */
#define SECUMOD_SR_MASK                     _U_(0xFF0000)                                  /**< \deprecated (SECUMOD_SR) Register MASK  (Use SECUMOD_SR_Msk instead)  */
#define SECUMOD_SR_Msk                      _U_(0xFF0000)                                  /**< (SECUMOD_SR) Register Mask  */

#define SECUMOD_SR_DET_Pos                  16                                             /**< (SECUMOD_SR Position) PIOBU Intrusion Detector */
#define SECUMOD_SR_DET_Msk                  (_U_(0xFF) << SECUMOD_SR_DET_Pos)              /**< (SECUMOD_SR Mask) DET */
#define SECUMOD_SR_DET(value)               (SECUMOD_SR_DET_Msk & ((value) << SECUMOD_SR_DET_Pos))  

/* -------- SECUMOD_SCR : (SECUMOD Offset: 0x10) (/W 32) Status Clear Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t DET0:1;                    /**< bit:     16  PIOBU Intrusion Detector                 */
    uint32_t DET1:1;                    /**< bit:     17  PIOBU Intrusion Detector                 */
    uint32_t DET2:1;                    /**< bit:     18  PIOBU Intrusion Detector                 */
    uint32_t DET3:1;                    /**< bit:     19  PIOBU Intrusion Detector                 */
    uint32_t DET4:1;                    /**< bit:     20  PIOBU Intrusion Detector                 */
    uint32_t DET5:1;                    /**< bit:     21  PIOBU Intrusion Detector                 */
    uint32_t DET6:1;                    /**< bit:     22  PIOBU Intrusion Detector                 */
    uint32_t DET7:1;                    /**< bit:     23  PIOBU Intrusion Detector                 */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t DET:8;                     /**< bit: 16..23  PIOBU Intrusion Detector                 */
    uint32_t :8;                        /**< bit: 24..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} SECUMOD_SCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SECUMOD_SCR_OFFSET                  (0x10)                                        /**<  (SECUMOD_SCR) Status Clear Register  Offset */

#define SECUMOD_SCR_DET0_Pos                16                                             /**< (SECUMOD_SCR) PIOBU Intrusion Detector Position */
#define SECUMOD_SCR_DET0_Msk                (_U_(0x1) << SECUMOD_SCR_DET0_Pos)             /**< (SECUMOD_SCR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SCR_DET0                    SECUMOD_SCR_DET0_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SCR_DET0_Msk instead */
#define SECUMOD_SCR_DET1_Pos                17                                             /**< (SECUMOD_SCR) PIOBU Intrusion Detector Position */
#define SECUMOD_SCR_DET1_Msk                (_U_(0x1) << SECUMOD_SCR_DET1_Pos)             /**< (SECUMOD_SCR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SCR_DET1                    SECUMOD_SCR_DET1_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SCR_DET1_Msk instead */
#define SECUMOD_SCR_DET2_Pos                18                                             /**< (SECUMOD_SCR) PIOBU Intrusion Detector Position */
#define SECUMOD_SCR_DET2_Msk                (_U_(0x1) << SECUMOD_SCR_DET2_Pos)             /**< (SECUMOD_SCR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SCR_DET2                    SECUMOD_SCR_DET2_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SCR_DET2_Msk instead */
#define SECUMOD_SCR_DET3_Pos                19                                             /**< (SECUMOD_SCR) PIOBU Intrusion Detector Position */
#define SECUMOD_SCR_DET3_Msk                (_U_(0x1) << SECUMOD_SCR_DET3_Pos)             /**< (SECUMOD_SCR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SCR_DET3                    SECUMOD_SCR_DET3_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SCR_DET3_Msk instead */
#define SECUMOD_SCR_DET4_Pos                20                                             /**< (SECUMOD_SCR) PIOBU Intrusion Detector Position */
#define SECUMOD_SCR_DET4_Msk                (_U_(0x1) << SECUMOD_SCR_DET4_Pos)             /**< (SECUMOD_SCR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SCR_DET4                    SECUMOD_SCR_DET4_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SCR_DET4_Msk instead */
#define SECUMOD_SCR_DET5_Pos                21                                             /**< (SECUMOD_SCR) PIOBU Intrusion Detector Position */
#define SECUMOD_SCR_DET5_Msk                (_U_(0x1) << SECUMOD_SCR_DET5_Pos)             /**< (SECUMOD_SCR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SCR_DET5                    SECUMOD_SCR_DET5_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SCR_DET5_Msk instead */
#define SECUMOD_SCR_DET6_Pos                22                                             /**< (SECUMOD_SCR) PIOBU Intrusion Detector Position */
#define SECUMOD_SCR_DET6_Msk                (_U_(0x1) << SECUMOD_SCR_DET6_Pos)             /**< (SECUMOD_SCR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SCR_DET6                    SECUMOD_SCR_DET6_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SCR_DET6_Msk instead */
#define SECUMOD_SCR_DET7_Pos                23                                             /**< (SECUMOD_SCR) PIOBU Intrusion Detector Position */
#define SECUMOD_SCR_DET7_Msk                (_U_(0x1) << SECUMOD_SCR_DET7_Pos)             /**< (SECUMOD_SCR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SCR_DET7                    SECUMOD_SCR_DET7_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_SCR_DET7_Msk instead */
#define SECUMOD_SCR_MASK                    _U_(0xFF0000)                                  /**< \deprecated (SECUMOD_SCR) Register MASK  (Use SECUMOD_SCR_Msk instead)  */
#define SECUMOD_SCR_Msk                     _U_(0xFF0000)                                  /**< (SECUMOD_SCR) Register Mask  */

#define SECUMOD_SCR_DET_Pos                 16                                             /**< (SECUMOD_SCR Position) PIOBU Intrusion Detector */
#define SECUMOD_SCR_DET_Msk                 (_U_(0xFF) << SECUMOD_SCR_DET_Pos)             /**< (SECUMOD_SCR Mask) DET */
#define SECUMOD_SCR_DET(value)              (SECUMOD_SCR_DET_Msk & ((value) << SECUMOD_SCR_DET_Pos))  

/* -------- SECUMOD_RAMRDY : (SECUMOD Offset: 0x14) (R/ 32) RAM Access Ready Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t READY:1;                   /**< bit:      0  Ready for system access flag             */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SECUMOD_RAMRDY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SECUMOD_RAMRDY_OFFSET               (0x14)                                        /**<  (SECUMOD_RAMRDY) RAM Access Ready Register  Offset */

#define SECUMOD_RAMRDY_READY_Pos            0                                              /**< (SECUMOD_RAMRDY) Ready for system access flag Position */
#define SECUMOD_RAMRDY_READY_Msk            (_U_(0x1) << SECUMOD_RAMRDY_READY_Pos)         /**< (SECUMOD_RAMRDY) Ready for system access flag Mask */
#define SECUMOD_RAMRDY_READY                SECUMOD_RAMRDY_READY_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_RAMRDY_READY_Msk instead */
#define SECUMOD_RAMRDY_MASK                 _U_(0x01)                                      /**< \deprecated (SECUMOD_RAMRDY) Register MASK  (Use SECUMOD_RAMRDY_Msk instead)  */
#define SECUMOD_RAMRDY_Msk                  _U_(0x01)                                      /**< (SECUMOD_RAMRDY) Register Mask  */


/* -------- SECUMOD_PIOBU : (SECUMOD Offset: 0x18) (R/W 32) PIO Backup Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PIOBU_AFV:4;               /**< bit:   0..3  PIOBU Alarm Filter Value                 */
    uint32_t PIOBU_RFV:4;               /**< bit:   4..7  PIOBUx Reset Filter Value                */
    uint32_t OUTPUT:1;                  /**< bit:      8  Configure I/O Line in Input/Output       */
    uint32_t PIO_SOD:1;                 /**< bit:      9  Set/Clear the I/O Line when configured in Output Mode (OUTPUT =1) */
    uint32_t PIO_PDS:1;                 /**< bit:     10  Level on the Pin in Input Mode (OUTPUT = 0) (Read-only) */
    uint32_t :1;                        /**< bit:     11  Reserved */
    uint32_t PULLUP:2;                  /**< bit: 12..13  Programmable Pull-up State               */
    uint32_t SCHEDULE:1;                /**< bit:     14  Pull-up/Down Scheduled                   */
    uint32_t SWITCH:1;                  /**< bit:     15  Switch State for Intrusion Detection     */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SECUMOD_PIOBU_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SECUMOD_PIOBU_OFFSET                (0x18)                                        /**<  (SECUMOD_PIOBU) PIO Backup Register  Offset */

#define SECUMOD_PIOBU_PIOBU_AFV_Pos         0                                              /**< (SECUMOD_PIOBU) PIOBU Alarm Filter Value Position */
#define SECUMOD_PIOBU_PIOBU_AFV_Msk         (_U_(0xF) << SECUMOD_PIOBU_PIOBU_AFV_Pos)      /**< (SECUMOD_PIOBU) PIOBU Alarm Filter Value Mask */
#define SECUMOD_PIOBU_PIOBU_AFV(value)      (SECUMOD_PIOBU_PIOBU_AFV_Msk & ((value) << SECUMOD_PIOBU_PIOBU_AFV_Pos))
#define SECUMOD_PIOBU_PIOBU_RFV_Pos         4                                              /**< (SECUMOD_PIOBU) PIOBUx Reset Filter Value Position */
#define SECUMOD_PIOBU_PIOBU_RFV_Msk         (_U_(0xF) << SECUMOD_PIOBU_PIOBU_RFV_Pos)      /**< (SECUMOD_PIOBU) PIOBUx Reset Filter Value Mask */
#define SECUMOD_PIOBU_PIOBU_RFV(value)      (SECUMOD_PIOBU_PIOBU_RFV_Msk & ((value) << SECUMOD_PIOBU_PIOBU_RFV_Pos))
#define SECUMOD_PIOBU_OUTPUT_Pos            8                                              /**< (SECUMOD_PIOBU) Configure I/O Line in Input/Output Position */
#define SECUMOD_PIOBU_OUTPUT_Msk            (_U_(0x1) << SECUMOD_PIOBU_OUTPUT_Pos)         /**< (SECUMOD_PIOBU) Configure I/O Line in Input/Output Mask */
#define SECUMOD_PIOBU_OUTPUT                SECUMOD_PIOBU_OUTPUT_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_PIOBU_OUTPUT_Msk instead */
#define SECUMOD_PIOBU_PIO_SOD_Pos           9                                              /**< (SECUMOD_PIOBU) Set/Clear the I/O Line when configured in Output Mode (OUTPUT =1) Position */
#define SECUMOD_PIOBU_PIO_SOD_Msk           (_U_(0x1) << SECUMOD_PIOBU_PIO_SOD_Pos)        /**< (SECUMOD_PIOBU) Set/Clear the I/O Line when configured in Output Mode (OUTPUT =1) Mask */
#define SECUMOD_PIOBU_PIO_SOD               SECUMOD_PIOBU_PIO_SOD_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_PIOBU_PIO_SOD_Msk instead */
#define SECUMOD_PIOBU_PIO_PDS_Pos           10                                             /**< (SECUMOD_PIOBU) Level on the Pin in Input Mode (OUTPUT = 0) (Read-only) Position */
#define SECUMOD_PIOBU_PIO_PDS_Msk           (_U_(0x1) << SECUMOD_PIOBU_PIO_PDS_Pos)        /**< (SECUMOD_PIOBU) Level on the Pin in Input Mode (OUTPUT = 0) (Read-only) Mask */
#define SECUMOD_PIOBU_PIO_PDS               SECUMOD_PIOBU_PIO_PDS_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_PIOBU_PIO_PDS_Msk instead */
#define SECUMOD_PIOBU_PULLUP_Pos            12                                             /**< (SECUMOD_PIOBU) Programmable Pull-up State Position */
#define SECUMOD_PIOBU_PULLUP_Msk            (_U_(0x3) << SECUMOD_PIOBU_PULLUP_Pos)         /**< (SECUMOD_PIOBU) Programmable Pull-up State Mask */
#define SECUMOD_PIOBU_PULLUP(value)         (SECUMOD_PIOBU_PULLUP_Msk & ((value) << SECUMOD_PIOBU_PULLUP_Pos))
#define SECUMOD_PIOBU_SCHEDULE_Pos          14                                             /**< (SECUMOD_PIOBU) Pull-up/Down Scheduled Position */
#define SECUMOD_PIOBU_SCHEDULE_Msk          (_U_(0x1) << SECUMOD_PIOBU_SCHEDULE_Pos)       /**< (SECUMOD_PIOBU) Pull-up/Down Scheduled Mask */
#define SECUMOD_PIOBU_SCHEDULE              SECUMOD_PIOBU_SCHEDULE_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_PIOBU_SCHEDULE_Msk instead */
#define SECUMOD_PIOBU_SWITCH_Pos            15                                             /**< (SECUMOD_PIOBU) Switch State for Intrusion Detection Position */
#define SECUMOD_PIOBU_SWITCH_Msk            (_U_(0x1) << SECUMOD_PIOBU_SWITCH_Pos)         /**< (SECUMOD_PIOBU) Switch State for Intrusion Detection Mask */
#define SECUMOD_PIOBU_SWITCH                SECUMOD_PIOBU_SWITCH_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_PIOBU_SWITCH_Msk instead */
#define SECUMOD_PIOBU_MASK                  _U_(0xF7FF)                                    /**< \deprecated (SECUMOD_PIOBU) Register MASK  (Use SECUMOD_PIOBU_Msk instead)  */
#define SECUMOD_PIOBU_Msk                   _U_(0xF7FF)                                    /**< (SECUMOD_PIOBU) Register Mask  */


/* -------- SECUMOD_JTAGCR : (SECUMOD Offset: 0x68) (R/W 32) JTAG Protection Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t FNTRST:1;                  /**< bit:      0  Force NTRST                              */
    uint32_t CA5_DEBUG_MODE:3;          /**< bit:   1..3  Cortex-A5 Invasive/Non-Invasive Secure/Non-Secure Debug Permissions */
    uint32_t WZO:1;                     /**< bit:      4  Write ZERO                               */
    uint32_t :27;                       /**< bit:  5..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SECUMOD_JTAGCR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SECUMOD_JTAGCR_OFFSET               (0x68)                                        /**<  (SECUMOD_JTAGCR) JTAG Protection Control Register  Offset */

#define SECUMOD_JTAGCR_FNTRST_Pos           0                                              /**< (SECUMOD_JTAGCR) Force NTRST Position */
#define SECUMOD_JTAGCR_FNTRST_Msk           (_U_(0x1) << SECUMOD_JTAGCR_FNTRST_Pos)        /**< (SECUMOD_JTAGCR) Force NTRST Mask */
#define SECUMOD_JTAGCR_FNTRST               SECUMOD_JTAGCR_FNTRST_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_JTAGCR_FNTRST_Msk instead */
#define SECUMOD_JTAGCR_CA5_DEBUG_MODE_Pos   1                                              /**< (SECUMOD_JTAGCR) Cortex-A5 Invasive/Non-Invasive Secure/Non-Secure Debug Permissions Position */
#define SECUMOD_JTAGCR_CA5_DEBUG_MODE_Msk   (_U_(0x7) << SECUMOD_JTAGCR_CA5_DEBUG_MODE_Pos)  /**< (SECUMOD_JTAGCR) Cortex-A5 Invasive/Non-Invasive Secure/Non-Secure Debug Permissions Mask */
#define SECUMOD_JTAGCR_CA5_DEBUG_MODE(value) (SECUMOD_JTAGCR_CA5_DEBUG_MODE_Msk & ((value) << SECUMOD_JTAGCR_CA5_DEBUG_MODE_Pos))
#define SECUMOD_JTAGCR_WZO_Pos              4                                              /**< (SECUMOD_JTAGCR) Write ZERO Position */
#define SECUMOD_JTAGCR_WZO_Msk              (_U_(0x1) << SECUMOD_JTAGCR_WZO_Pos)           /**< (SECUMOD_JTAGCR) Write ZERO Mask */
#define SECUMOD_JTAGCR_WZO                  SECUMOD_JTAGCR_WZO_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_JTAGCR_WZO_Msk instead */
#define SECUMOD_JTAGCR_MASK                 _U_(0x1F)                                      /**< \deprecated (SECUMOD_JTAGCR) Register MASK  (Use SECUMOD_JTAGCR_Msk instead)  */
#define SECUMOD_JTAGCR_Msk                  _U_(0x1F)                                      /**< (SECUMOD_JTAGCR) Register Mask  */


/* -------- SECUMOD_SCRKEY : (SECUMOD Offset: 0x70) (R/W 32) Scrambling Key Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SCRKEY:32;                 /**< bit:  0..31  Scrambling Key Value                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SECUMOD_SCRKEY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SECUMOD_SCRKEY_OFFSET               (0x70)                                        /**<  (SECUMOD_SCRKEY) Scrambling Key Register  Offset */

#define SECUMOD_SCRKEY_SCRKEY_Pos           0                                              /**< (SECUMOD_SCRKEY) Scrambling Key Value Position */
#define SECUMOD_SCRKEY_SCRKEY_Msk           (_U_(0xFFFFFFFF) << SECUMOD_SCRKEY_SCRKEY_Pos)  /**< (SECUMOD_SCRKEY) Scrambling Key Value Mask */
#define SECUMOD_SCRKEY_SCRKEY(value)        (SECUMOD_SCRKEY_SCRKEY_Msk & ((value) << SECUMOD_SCRKEY_SCRKEY_Pos))
#define SECUMOD_SCRKEY_MASK                 _U_(0xFFFFFFFF)                                /**< \deprecated (SECUMOD_SCRKEY) Register MASK  (Use SECUMOD_SCRKEY_Msk instead)  */
#define SECUMOD_SCRKEY_Msk                  _U_(0xFFFFFFFF)                                /**< (SECUMOD_SCRKEY) Register Mask  */


/* -------- SECUMOD_RAMACC : (SECUMOD Offset: 0x74) (R/W 32) RAM Access Rights Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RW0:2;                     /**< bit:   0..1  Access right for RAM region [0; 1 Kbyte] */
    uint32_t RW1:2;                     /**< bit:   2..3  Access right for RAM region [1 Kbyte; 2 Kbytes] */
    uint32_t RW2:2;                     /**< bit:   4..5  Access right for RAM region [2 Kbytes; 3 Kbytes] */
    uint32_t RW3:2;                     /**< bit:   6..7  Access right for RAM region [3 Kbytes; 4 Kbytes] */
    uint32_t RW4:2;                     /**< bit:   8..9  Access right for RAM region [4 Kbytes; 5 Kbytes] */
    uint32_t RW5:2;                     /**< bit: 10..11  Access right for RAM region [5 Kbytes; 6 Kbytes] (register bank BUREG256b) */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SECUMOD_RAMACC_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SECUMOD_RAMACC_OFFSET               (0x74)                                        /**<  (SECUMOD_RAMACC) RAM Access Rights Register  Offset */

#define SECUMOD_RAMACC_RW0_Pos              0                                              /**< (SECUMOD_RAMACC) Access right for RAM region [0; 1 Kbyte] Position */
#define SECUMOD_RAMACC_RW0_Msk              (_U_(0x3) << SECUMOD_RAMACC_RW0_Pos)           /**< (SECUMOD_RAMACC) Access right for RAM region [0; 1 Kbyte] Mask */
#define SECUMOD_RAMACC_RW0(value)           (SECUMOD_RAMACC_RW0_Msk & ((value) << SECUMOD_RAMACC_RW0_Pos))
#define SECUMOD_RAMACC_RW1_Pos              2                                              /**< (SECUMOD_RAMACC) Access right for RAM region [1 Kbyte; 2 Kbytes] Position */
#define SECUMOD_RAMACC_RW1_Msk              (_U_(0x3) << SECUMOD_RAMACC_RW1_Pos)           /**< (SECUMOD_RAMACC) Access right for RAM region [1 Kbyte; 2 Kbytes] Mask */
#define SECUMOD_RAMACC_RW1(value)           (SECUMOD_RAMACC_RW1_Msk & ((value) << SECUMOD_RAMACC_RW1_Pos))
#define SECUMOD_RAMACC_RW2_Pos              4                                              /**< (SECUMOD_RAMACC) Access right for RAM region [2 Kbytes; 3 Kbytes] Position */
#define SECUMOD_RAMACC_RW2_Msk              (_U_(0x3) << SECUMOD_RAMACC_RW2_Pos)           /**< (SECUMOD_RAMACC) Access right for RAM region [2 Kbytes; 3 Kbytes] Mask */
#define SECUMOD_RAMACC_RW2(value)           (SECUMOD_RAMACC_RW2_Msk & ((value) << SECUMOD_RAMACC_RW2_Pos))
#define SECUMOD_RAMACC_RW3_Pos              6                                              /**< (SECUMOD_RAMACC) Access right for RAM region [3 Kbytes; 4 Kbytes] Position */
#define SECUMOD_RAMACC_RW3_Msk              (_U_(0x3) << SECUMOD_RAMACC_RW3_Pos)           /**< (SECUMOD_RAMACC) Access right for RAM region [3 Kbytes; 4 Kbytes] Mask */
#define SECUMOD_RAMACC_RW3(value)           (SECUMOD_RAMACC_RW3_Msk & ((value) << SECUMOD_RAMACC_RW3_Pos))
#define SECUMOD_RAMACC_RW4_Pos              8                                              /**< (SECUMOD_RAMACC) Access right for RAM region [4 Kbytes; 5 Kbytes] Position */
#define SECUMOD_RAMACC_RW4_Msk              (_U_(0x3) << SECUMOD_RAMACC_RW4_Pos)           /**< (SECUMOD_RAMACC) Access right for RAM region [4 Kbytes; 5 Kbytes] Mask */
#define SECUMOD_RAMACC_RW4(value)           (SECUMOD_RAMACC_RW4_Msk & ((value) << SECUMOD_RAMACC_RW4_Pos))
#define SECUMOD_RAMACC_RW5_Pos              10                                             /**< (SECUMOD_RAMACC) Access right for RAM region [5 Kbytes; 6 Kbytes] (register bank BUREG256b) Position */
#define SECUMOD_RAMACC_RW5_Msk              (_U_(0x3) << SECUMOD_RAMACC_RW5_Pos)           /**< (SECUMOD_RAMACC) Access right for RAM region [5 Kbytes; 6 Kbytes] (register bank BUREG256b) Mask */
#define SECUMOD_RAMACC_RW5(value)           (SECUMOD_RAMACC_RW5_Msk & ((value) << SECUMOD_RAMACC_RW5_Pos))
#define SECUMOD_RAMACC_MASK                 _U_(0xFFF)                                     /**< \deprecated (SECUMOD_RAMACC) Register MASK  (Use SECUMOD_RAMACC_Msk instead)  */
#define SECUMOD_RAMACC_Msk                  _U_(0xFFF)                                     /**< (SECUMOD_RAMACC) Register Mask  */


/* -------- SECUMOD_RAMACCSR : (SECUMOD Offset: 0x78) (R/W 32) RAM Access Rights Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RW0:2;                     /**< bit:   0..1  Access right status for RAM region [0; 1 Kbyte] */
    uint32_t RW1:2;                     /**< bit:   2..3  Access right status for RAM region [1 Kbytes; 2 Kbytes] */
    uint32_t RW2:2;                     /**< bit:   4..5  Access right status for RAM region [2 Kbytes; 3 Kbytes] */
    uint32_t RW3:2;                     /**< bit:   6..7  Access right status for RAM region [3 Kbytes; 4 Kbytes] */
    uint32_t RW4:2;                     /**< bit:   8..9  Access right status for RAM region [4 Kbytes; 5 Kbytes] */
    uint32_t RW5:2;                     /**< bit: 10..11  Access right status for RAM region [5 Kbytes; 6 Kbytes] (register bank BUREG256b) */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SECUMOD_RAMACCSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SECUMOD_RAMACCSR_OFFSET             (0x78)                                        /**<  (SECUMOD_RAMACCSR) RAM Access Rights Status Register  Offset */

#define SECUMOD_RAMACCSR_RW0_Pos            0                                              /**< (SECUMOD_RAMACCSR) Access right status for RAM region [0; 1 Kbyte] Position */
#define SECUMOD_RAMACCSR_RW0_Msk            (_U_(0x3) << SECUMOD_RAMACCSR_RW0_Pos)         /**< (SECUMOD_RAMACCSR) Access right status for RAM region [0; 1 Kbyte] Mask */
#define SECUMOD_RAMACCSR_RW0(value)         (SECUMOD_RAMACCSR_RW0_Msk & ((value) << SECUMOD_RAMACCSR_RW0_Pos))
#define SECUMOD_RAMACCSR_RW1_Pos            2                                              /**< (SECUMOD_RAMACCSR) Access right status for RAM region [1 Kbytes; 2 Kbytes] Position */
#define SECUMOD_RAMACCSR_RW1_Msk            (_U_(0x3) << SECUMOD_RAMACCSR_RW1_Pos)         /**< (SECUMOD_RAMACCSR) Access right status for RAM region [1 Kbytes; 2 Kbytes] Mask */
#define SECUMOD_RAMACCSR_RW1(value)         (SECUMOD_RAMACCSR_RW1_Msk & ((value) << SECUMOD_RAMACCSR_RW1_Pos))
#define SECUMOD_RAMACCSR_RW2_Pos            4                                              /**< (SECUMOD_RAMACCSR) Access right status for RAM region [2 Kbytes; 3 Kbytes] Position */
#define SECUMOD_RAMACCSR_RW2_Msk            (_U_(0x3) << SECUMOD_RAMACCSR_RW2_Pos)         /**< (SECUMOD_RAMACCSR) Access right status for RAM region [2 Kbytes; 3 Kbytes] Mask */
#define SECUMOD_RAMACCSR_RW2(value)         (SECUMOD_RAMACCSR_RW2_Msk & ((value) << SECUMOD_RAMACCSR_RW2_Pos))
#define SECUMOD_RAMACCSR_RW3_Pos            6                                              /**< (SECUMOD_RAMACCSR) Access right status for RAM region [3 Kbytes; 4 Kbytes] Position */
#define SECUMOD_RAMACCSR_RW3_Msk            (_U_(0x3) << SECUMOD_RAMACCSR_RW3_Pos)         /**< (SECUMOD_RAMACCSR) Access right status for RAM region [3 Kbytes; 4 Kbytes] Mask */
#define SECUMOD_RAMACCSR_RW3(value)         (SECUMOD_RAMACCSR_RW3_Msk & ((value) << SECUMOD_RAMACCSR_RW3_Pos))
#define SECUMOD_RAMACCSR_RW4_Pos            8                                              /**< (SECUMOD_RAMACCSR) Access right status for RAM region [4 Kbytes; 5 Kbytes] Position */
#define SECUMOD_RAMACCSR_RW4_Msk            (_U_(0x3) << SECUMOD_RAMACCSR_RW4_Pos)         /**< (SECUMOD_RAMACCSR) Access right status for RAM region [4 Kbytes; 5 Kbytes] Mask */
#define SECUMOD_RAMACCSR_RW4(value)         (SECUMOD_RAMACCSR_RW4_Msk & ((value) << SECUMOD_RAMACCSR_RW4_Pos))
#define SECUMOD_RAMACCSR_RW5_Pos            10                                             /**< (SECUMOD_RAMACCSR) Access right status for RAM region [5 Kbytes; 6 Kbytes] (register bank BUREG256b) Position */
#define SECUMOD_RAMACCSR_RW5_Msk            (_U_(0x3) << SECUMOD_RAMACCSR_RW5_Pos)         /**< (SECUMOD_RAMACCSR) Access right status for RAM region [5 Kbytes; 6 Kbytes] (register bank BUREG256b) Mask */
#define SECUMOD_RAMACCSR_RW5(value)         (SECUMOD_RAMACCSR_RW5_Msk & ((value) << SECUMOD_RAMACCSR_RW5_Pos))
#define SECUMOD_RAMACCSR_MASK               _U_(0xFFF)                                     /**< \deprecated (SECUMOD_RAMACCSR) Register MASK  (Use SECUMOD_RAMACCSR_Msk instead)  */
#define SECUMOD_RAMACCSR_Msk                _U_(0xFFF)                                     /**< (SECUMOD_RAMACCSR) Register Mask  */


/* -------- SECUMOD_BMPR : (SECUMOD Offset: 0x7c) (R/W 32) Backup Mode Protection Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t DET0:1;                    /**< bit:     16  PIOBU Intrusion Detector Protection      */
    uint32_t DET1:1;                    /**< bit:     17  PIOBU Intrusion Detector Protection      */
    uint32_t DET2:1;                    /**< bit:     18  PIOBU Intrusion Detector Protection      */
    uint32_t DET3:1;                    /**< bit:     19  PIOBU Intrusion Detector Protection      */
    uint32_t DET4:1;                    /**< bit:     20  PIOBU Intrusion Detector Protection      */
    uint32_t DET5:1;                    /**< bit:     21  PIOBU Intrusion Detector Protection      */
    uint32_t DET6:1;                    /**< bit:     22  PIOBU Intrusion Detector Protection      */
    uint32_t DET7:1;                    /**< bit:     23  PIOBU Intrusion Detector Protection      */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t DET:8;                     /**< bit: 16..23  PIOBU Intrusion Detector Protection      */
    uint32_t :8;                        /**< bit: 24..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} SECUMOD_BMPR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SECUMOD_BMPR_OFFSET                 (0x7C)                                        /**<  (SECUMOD_BMPR) Backup Mode Protection Register  Offset */

#define SECUMOD_BMPR_DET0_Pos               16                                             /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_BMPR_DET0_Msk               (_U_(0x1) << SECUMOD_BMPR_DET0_Pos)            /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_BMPR_DET0                   SECUMOD_BMPR_DET0_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_BMPR_DET0_Msk instead */
#define SECUMOD_BMPR_DET1_Pos               17                                             /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_BMPR_DET1_Msk               (_U_(0x1) << SECUMOD_BMPR_DET1_Pos)            /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_BMPR_DET1                   SECUMOD_BMPR_DET1_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_BMPR_DET1_Msk instead */
#define SECUMOD_BMPR_DET2_Pos               18                                             /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_BMPR_DET2_Msk               (_U_(0x1) << SECUMOD_BMPR_DET2_Pos)            /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_BMPR_DET2                   SECUMOD_BMPR_DET2_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_BMPR_DET2_Msk instead */
#define SECUMOD_BMPR_DET3_Pos               19                                             /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_BMPR_DET3_Msk               (_U_(0x1) << SECUMOD_BMPR_DET3_Pos)            /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_BMPR_DET3                   SECUMOD_BMPR_DET3_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_BMPR_DET3_Msk instead */
#define SECUMOD_BMPR_DET4_Pos               20                                             /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_BMPR_DET4_Msk               (_U_(0x1) << SECUMOD_BMPR_DET4_Pos)            /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_BMPR_DET4                   SECUMOD_BMPR_DET4_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_BMPR_DET4_Msk instead */
#define SECUMOD_BMPR_DET5_Pos               21                                             /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_BMPR_DET5_Msk               (_U_(0x1) << SECUMOD_BMPR_DET5_Pos)            /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_BMPR_DET5                   SECUMOD_BMPR_DET5_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_BMPR_DET5_Msk instead */
#define SECUMOD_BMPR_DET6_Pos               22                                             /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_BMPR_DET6_Msk               (_U_(0x1) << SECUMOD_BMPR_DET6_Pos)            /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_BMPR_DET6                   SECUMOD_BMPR_DET6_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_BMPR_DET6_Msk instead */
#define SECUMOD_BMPR_DET7_Pos               23                                             /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_BMPR_DET7_Msk               (_U_(0x1) << SECUMOD_BMPR_DET7_Pos)            /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_BMPR_DET7                   SECUMOD_BMPR_DET7_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_BMPR_DET7_Msk instead */
#define SECUMOD_BMPR_MASK                   _U_(0xFF0000)                                  /**< \deprecated (SECUMOD_BMPR) Register MASK  (Use SECUMOD_BMPR_Msk instead)  */
#define SECUMOD_BMPR_Msk                    _U_(0xFF0000)                                  /**< (SECUMOD_BMPR) Register Mask  */

#define SECUMOD_BMPR_DET_Pos                16                                             /**< (SECUMOD_BMPR Position) PIOBU Intrusion Detector Protection */
#define SECUMOD_BMPR_DET_Msk                (_U_(0xFF) << SECUMOD_BMPR_DET_Pos)            /**< (SECUMOD_BMPR Mask) DET */
#define SECUMOD_BMPR_DET(value)             (SECUMOD_BMPR_DET_Msk & ((value) << SECUMOD_BMPR_DET_Pos))  

/* -------- SECUMOD_NMPR : (SECUMOD Offset: 0x80) (R/W 32) Normal Mode Protection Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t DET0:1;                    /**< bit:     16  PIOBU Intrusion Detector Protection      */
    uint32_t DET1:1;                    /**< bit:     17  PIOBU Intrusion Detector Protection      */
    uint32_t DET2:1;                    /**< bit:     18  PIOBU Intrusion Detector Protection      */
    uint32_t DET3:1;                    /**< bit:     19  PIOBU Intrusion Detector Protection      */
    uint32_t DET4:1;                    /**< bit:     20  PIOBU Intrusion Detector Protection      */
    uint32_t DET5:1;                    /**< bit:     21  PIOBU Intrusion Detector Protection      */
    uint32_t DET6:1;                    /**< bit:     22  PIOBU Intrusion Detector Protection      */
    uint32_t DET7:1;                    /**< bit:     23  PIOBU Intrusion Detector Protection      */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t DET:8;                     /**< bit: 16..23  PIOBU Intrusion Detector Protection      */
    uint32_t :8;                        /**< bit: 24..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} SECUMOD_NMPR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SECUMOD_NMPR_OFFSET                 (0x80)                                        /**<  (SECUMOD_NMPR) Normal Mode Protection Register  Offset */

#define SECUMOD_NMPR_DET0_Pos               16                                             /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_NMPR_DET0_Msk               (_U_(0x1) << SECUMOD_NMPR_DET0_Pos)            /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_NMPR_DET0                   SECUMOD_NMPR_DET0_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NMPR_DET0_Msk instead */
#define SECUMOD_NMPR_DET1_Pos               17                                             /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_NMPR_DET1_Msk               (_U_(0x1) << SECUMOD_NMPR_DET1_Pos)            /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_NMPR_DET1                   SECUMOD_NMPR_DET1_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NMPR_DET1_Msk instead */
#define SECUMOD_NMPR_DET2_Pos               18                                             /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_NMPR_DET2_Msk               (_U_(0x1) << SECUMOD_NMPR_DET2_Pos)            /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_NMPR_DET2                   SECUMOD_NMPR_DET2_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NMPR_DET2_Msk instead */
#define SECUMOD_NMPR_DET3_Pos               19                                             /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_NMPR_DET3_Msk               (_U_(0x1) << SECUMOD_NMPR_DET3_Pos)            /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_NMPR_DET3                   SECUMOD_NMPR_DET3_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NMPR_DET3_Msk instead */
#define SECUMOD_NMPR_DET4_Pos               20                                             /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_NMPR_DET4_Msk               (_U_(0x1) << SECUMOD_NMPR_DET4_Pos)            /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_NMPR_DET4                   SECUMOD_NMPR_DET4_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NMPR_DET4_Msk instead */
#define SECUMOD_NMPR_DET5_Pos               21                                             /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_NMPR_DET5_Msk               (_U_(0x1) << SECUMOD_NMPR_DET5_Pos)            /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_NMPR_DET5                   SECUMOD_NMPR_DET5_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NMPR_DET5_Msk instead */
#define SECUMOD_NMPR_DET6_Pos               22                                             /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_NMPR_DET6_Msk               (_U_(0x1) << SECUMOD_NMPR_DET6_Pos)            /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_NMPR_DET6                   SECUMOD_NMPR_DET6_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NMPR_DET6_Msk instead */
#define SECUMOD_NMPR_DET7_Pos               23                                             /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_NMPR_DET7_Msk               (_U_(0x1) << SECUMOD_NMPR_DET7_Pos)            /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_NMPR_DET7                   SECUMOD_NMPR_DET7_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NMPR_DET7_Msk instead */
#define SECUMOD_NMPR_MASK                   _U_(0xFF0000)                                  /**< \deprecated (SECUMOD_NMPR) Register MASK  (Use SECUMOD_NMPR_Msk instead)  */
#define SECUMOD_NMPR_Msk                    _U_(0xFF0000)                                  /**< (SECUMOD_NMPR) Register Mask  */

#define SECUMOD_NMPR_DET_Pos                16                                             /**< (SECUMOD_NMPR Position) PIOBU Intrusion Detector Protection */
#define SECUMOD_NMPR_DET_Msk                (_U_(0xFF) << SECUMOD_NMPR_DET_Pos)            /**< (SECUMOD_NMPR Mask) DET */
#define SECUMOD_NMPR_DET(value)             (SECUMOD_NMPR_DET_Msk & ((value) << SECUMOD_NMPR_DET_Pos))  

/* -------- SECUMOD_NIEPR : (SECUMOD Offset: 0x84) (/W 32) Normal Interrupt Enable Protection Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t DET0:1;                    /**< bit:     16  PIOBU Intrusion Detector Protection Interrupt Enable */
    uint32_t DET1:1;                    /**< bit:     17  PIOBU Intrusion Detector Protection Interrupt Enable */
    uint32_t DET2:1;                    /**< bit:     18  PIOBU Intrusion Detector Protection Interrupt Enable */
    uint32_t DET3:1;                    /**< bit:     19  PIOBU Intrusion Detector Protection Interrupt Enable */
    uint32_t DET4:1;                    /**< bit:     20  PIOBU Intrusion Detector Protection Interrupt Enable */
    uint32_t DET5:1;                    /**< bit:     21  PIOBU Intrusion Detector Protection Interrupt Enable */
    uint32_t DET6:1;                    /**< bit:     22  PIOBU Intrusion Detector Protection Interrupt Enable */
    uint32_t DET7:1;                    /**< bit:     23  PIOBU Intrusion Detector Protection Interrupt Enable */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t DET:8;                     /**< bit: 16..23  PIOBU Intrusion Detector Protection Interrupt Enable */
    uint32_t :8;                        /**< bit: 24..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} SECUMOD_NIEPR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SECUMOD_NIEPR_OFFSET                (0x84)                                        /**<  (SECUMOD_NIEPR) Normal Interrupt Enable Protection Register  Offset */

#define SECUMOD_NIEPR_DET0_Pos              16                                             /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_DET0_Msk              (_U_(0x1) << SECUMOD_NIEPR_DET0_Pos)           /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_DET0                  SECUMOD_NIEPR_DET0_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIEPR_DET0_Msk instead */
#define SECUMOD_NIEPR_DET1_Pos              17                                             /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_DET1_Msk              (_U_(0x1) << SECUMOD_NIEPR_DET1_Pos)           /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_DET1                  SECUMOD_NIEPR_DET1_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIEPR_DET1_Msk instead */
#define SECUMOD_NIEPR_DET2_Pos              18                                             /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_DET2_Msk              (_U_(0x1) << SECUMOD_NIEPR_DET2_Pos)           /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_DET2                  SECUMOD_NIEPR_DET2_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIEPR_DET2_Msk instead */
#define SECUMOD_NIEPR_DET3_Pos              19                                             /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_DET3_Msk              (_U_(0x1) << SECUMOD_NIEPR_DET3_Pos)           /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_DET3                  SECUMOD_NIEPR_DET3_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIEPR_DET3_Msk instead */
#define SECUMOD_NIEPR_DET4_Pos              20                                             /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_DET4_Msk              (_U_(0x1) << SECUMOD_NIEPR_DET4_Pos)           /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_DET4                  SECUMOD_NIEPR_DET4_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIEPR_DET4_Msk instead */
#define SECUMOD_NIEPR_DET5_Pos              21                                             /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_DET5_Msk              (_U_(0x1) << SECUMOD_NIEPR_DET5_Pos)           /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_DET5                  SECUMOD_NIEPR_DET5_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIEPR_DET5_Msk instead */
#define SECUMOD_NIEPR_DET6_Pos              22                                             /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_DET6_Msk              (_U_(0x1) << SECUMOD_NIEPR_DET6_Pos)           /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_DET6                  SECUMOD_NIEPR_DET6_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIEPR_DET6_Msk instead */
#define SECUMOD_NIEPR_DET7_Pos              23                                             /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_DET7_Msk              (_U_(0x1) << SECUMOD_NIEPR_DET7_Pos)           /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_DET7                  SECUMOD_NIEPR_DET7_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIEPR_DET7_Msk instead */
#define SECUMOD_NIEPR_MASK                  _U_(0xFF0000)                                  /**< \deprecated (SECUMOD_NIEPR) Register MASK  (Use SECUMOD_NIEPR_Msk instead)  */
#define SECUMOD_NIEPR_Msk                   _U_(0xFF0000)                                  /**< (SECUMOD_NIEPR) Register Mask  */

#define SECUMOD_NIEPR_DET_Pos               16                                             /**< (SECUMOD_NIEPR Position) PIOBU Intrusion Detector Protection Interrupt Enable */
#define SECUMOD_NIEPR_DET_Msk               (_U_(0xFF) << SECUMOD_NIEPR_DET_Pos)           /**< (SECUMOD_NIEPR Mask) DET */
#define SECUMOD_NIEPR_DET(value)            (SECUMOD_NIEPR_DET_Msk & ((value) << SECUMOD_NIEPR_DET_Pos))  

/* -------- SECUMOD_NIDPR : (SECUMOD Offset: 0x88) (/W 32) Normal Interrupt Disable Protection Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t DET0:1;                    /**< bit:     16  PIOBU Intrusion Detector Protection Interrupt Disable */
    uint32_t DET1:1;                    /**< bit:     17  PIOBU Intrusion Detector Protection Interrupt Disable */
    uint32_t DET2:1;                    /**< bit:     18  PIOBU Intrusion Detector Protection Interrupt Disable */
    uint32_t DET3:1;                    /**< bit:     19  PIOBU Intrusion Detector Protection Interrupt Disable */
    uint32_t DET4:1;                    /**< bit:     20  PIOBU Intrusion Detector Protection Interrupt Disable */
    uint32_t DET5:1;                    /**< bit:     21  PIOBU Intrusion Detector Protection Interrupt Disable */
    uint32_t DET6:1;                    /**< bit:     22  PIOBU Intrusion Detector Protection Interrupt Disable */
    uint32_t DET7:1;                    /**< bit:     23  PIOBU Intrusion Detector Protection Interrupt Disable */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t DET:8;                     /**< bit: 16..23  PIOBU Intrusion Detector Protection Interrupt Disable */
    uint32_t :8;                        /**< bit: 24..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} SECUMOD_NIDPR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SECUMOD_NIDPR_OFFSET                (0x88)                                        /**<  (SECUMOD_NIDPR) Normal Interrupt Disable Protection Register  Offset */

#define SECUMOD_NIDPR_DET0_Pos              16                                             /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_DET0_Msk              (_U_(0x1) << SECUMOD_NIDPR_DET0_Pos)           /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_DET0                  SECUMOD_NIDPR_DET0_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIDPR_DET0_Msk instead */
#define SECUMOD_NIDPR_DET1_Pos              17                                             /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_DET1_Msk              (_U_(0x1) << SECUMOD_NIDPR_DET1_Pos)           /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_DET1                  SECUMOD_NIDPR_DET1_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIDPR_DET1_Msk instead */
#define SECUMOD_NIDPR_DET2_Pos              18                                             /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_DET2_Msk              (_U_(0x1) << SECUMOD_NIDPR_DET2_Pos)           /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_DET2                  SECUMOD_NIDPR_DET2_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIDPR_DET2_Msk instead */
#define SECUMOD_NIDPR_DET3_Pos              19                                             /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_DET3_Msk              (_U_(0x1) << SECUMOD_NIDPR_DET3_Pos)           /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_DET3                  SECUMOD_NIDPR_DET3_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIDPR_DET3_Msk instead */
#define SECUMOD_NIDPR_DET4_Pos              20                                             /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_DET4_Msk              (_U_(0x1) << SECUMOD_NIDPR_DET4_Pos)           /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_DET4                  SECUMOD_NIDPR_DET4_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIDPR_DET4_Msk instead */
#define SECUMOD_NIDPR_DET5_Pos              21                                             /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_DET5_Msk              (_U_(0x1) << SECUMOD_NIDPR_DET5_Pos)           /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_DET5                  SECUMOD_NIDPR_DET5_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIDPR_DET5_Msk instead */
#define SECUMOD_NIDPR_DET6_Pos              22                                             /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_DET6_Msk              (_U_(0x1) << SECUMOD_NIDPR_DET6_Pos)           /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_DET6                  SECUMOD_NIDPR_DET6_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIDPR_DET6_Msk instead */
#define SECUMOD_NIDPR_DET7_Pos              23                                             /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_DET7_Msk              (_U_(0x1) << SECUMOD_NIDPR_DET7_Pos)           /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_DET7                  SECUMOD_NIDPR_DET7_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIDPR_DET7_Msk instead */
#define SECUMOD_NIDPR_MASK                  _U_(0xFF0000)                                  /**< \deprecated (SECUMOD_NIDPR) Register MASK  (Use SECUMOD_NIDPR_Msk instead)  */
#define SECUMOD_NIDPR_Msk                   _U_(0xFF0000)                                  /**< (SECUMOD_NIDPR) Register Mask  */

#define SECUMOD_NIDPR_DET_Pos               16                                             /**< (SECUMOD_NIDPR Position) PIOBU Intrusion Detector Protection Interrupt Disable */
#define SECUMOD_NIDPR_DET_Msk               (_U_(0xFF) << SECUMOD_NIDPR_DET_Pos)           /**< (SECUMOD_NIDPR Mask) DET */
#define SECUMOD_NIDPR_DET(value)            (SECUMOD_NIDPR_DET_Msk & ((value) << SECUMOD_NIDPR_DET_Pos))  

/* -------- SECUMOD_NIMPR : (SECUMOD Offset: 0x8c) (R/ 32) Normal Interrupt Mask Protection Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t DET0:1;                    /**< bit:     16  PIOBU Intrusion Detector Protection Interrupt Mask */
    uint32_t DET1:1;                    /**< bit:     17  PIOBU Intrusion Detector Protection Interrupt Mask */
    uint32_t DET2:1;                    /**< bit:     18  PIOBU Intrusion Detector Protection Interrupt Mask */
    uint32_t DET3:1;                    /**< bit:     19  PIOBU Intrusion Detector Protection Interrupt Mask */
    uint32_t DET4:1;                    /**< bit:     20  PIOBU Intrusion Detector Protection Interrupt Mask */
    uint32_t DET5:1;                    /**< bit:     21  PIOBU Intrusion Detector Protection Interrupt Mask */
    uint32_t DET6:1;                    /**< bit:     22  PIOBU Intrusion Detector Protection Interrupt Mask */
    uint32_t DET7:1;                    /**< bit:     23  PIOBU Intrusion Detector Protection Interrupt Mask */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t DET:8;                     /**< bit: 16..23  PIOBU Intrusion Detector Protection Interrupt Mask */
    uint32_t :8;                        /**< bit: 24..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} SECUMOD_NIMPR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SECUMOD_NIMPR_OFFSET                (0x8C)                                        /**<  (SECUMOD_NIMPR) Normal Interrupt Mask Protection Register  Offset */

#define SECUMOD_NIMPR_DET0_Pos              16                                             /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_DET0_Msk              (_U_(0x1) << SECUMOD_NIMPR_DET0_Pos)           /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_DET0                  SECUMOD_NIMPR_DET0_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIMPR_DET0_Msk instead */
#define SECUMOD_NIMPR_DET1_Pos              17                                             /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_DET1_Msk              (_U_(0x1) << SECUMOD_NIMPR_DET1_Pos)           /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_DET1                  SECUMOD_NIMPR_DET1_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIMPR_DET1_Msk instead */
#define SECUMOD_NIMPR_DET2_Pos              18                                             /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_DET2_Msk              (_U_(0x1) << SECUMOD_NIMPR_DET2_Pos)           /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_DET2                  SECUMOD_NIMPR_DET2_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIMPR_DET2_Msk instead */
#define SECUMOD_NIMPR_DET3_Pos              19                                             /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_DET3_Msk              (_U_(0x1) << SECUMOD_NIMPR_DET3_Pos)           /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_DET3                  SECUMOD_NIMPR_DET3_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIMPR_DET3_Msk instead */
#define SECUMOD_NIMPR_DET4_Pos              20                                             /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_DET4_Msk              (_U_(0x1) << SECUMOD_NIMPR_DET4_Pos)           /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_DET4                  SECUMOD_NIMPR_DET4_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIMPR_DET4_Msk instead */
#define SECUMOD_NIMPR_DET5_Pos              21                                             /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_DET5_Msk              (_U_(0x1) << SECUMOD_NIMPR_DET5_Pos)           /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_DET5                  SECUMOD_NIMPR_DET5_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIMPR_DET5_Msk instead */
#define SECUMOD_NIMPR_DET6_Pos              22                                             /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_DET6_Msk              (_U_(0x1) << SECUMOD_NIMPR_DET6_Pos)           /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_DET6                  SECUMOD_NIMPR_DET6_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIMPR_DET6_Msk instead */
#define SECUMOD_NIMPR_DET7_Pos              23                                             /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_DET7_Msk              (_U_(0x1) << SECUMOD_NIMPR_DET7_Pos)           /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_DET7                  SECUMOD_NIMPR_DET7_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_NIMPR_DET7_Msk instead */
#define SECUMOD_NIMPR_MASK                  _U_(0xFF0000)                                  /**< \deprecated (SECUMOD_NIMPR) Register MASK  (Use SECUMOD_NIMPR_Msk instead)  */
#define SECUMOD_NIMPR_Msk                   _U_(0xFF0000)                                  /**< (SECUMOD_NIMPR) Register Mask  */

#define SECUMOD_NIMPR_DET_Pos               16                                             /**< (SECUMOD_NIMPR Position) PIOBU Intrusion Detector Protection Interrupt Mask */
#define SECUMOD_NIMPR_DET_Msk               (_U_(0xFF) << SECUMOD_NIMPR_DET_Pos)           /**< (SECUMOD_NIMPR Mask) DET */
#define SECUMOD_NIMPR_DET(value)            (SECUMOD_NIMPR_DET_Msk & ((value) << SECUMOD_NIMPR_DET_Pos))  

/* -------- SECUMOD_WKPR : (SECUMOD Offset: 0x90) (R/W 32) Wakeup Protection Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t DET0:1;                    /**< bit:     16  PIOBU Intrusion Detector Protection      */
    uint32_t DET1:1;                    /**< bit:     17  PIOBU Intrusion Detector Protection      */
    uint32_t DET2:1;                    /**< bit:     18  PIOBU Intrusion Detector Protection      */
    uint32_t DET3:1;                    /**< bit:     19  PIOBU Intrusion Detector Protection      */
    uint32_t DET4:1;                    /**< bit:     20  PIOBU Intrusion Detector Protection      */
    uint32_t DET5:1;                    /**< bit:     21  PIOBU Intrusion Detector Protection      */
    uint32_t DET6:1;                    /**< bit:     22  PIOBU Intrusion Detector Protection      */
    uint32_t DET7:1;                    /**< bit:     23  PIOBU Intrusion Detector Protection      */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t DET:8;                     /**< bit: 16..23  PIOBU Intrusion Detector Protection      */
    uint32_t :8;                        /**< bit: 24..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} SECUMOD_WKPR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SECUMOD_WKPR_OFFSET                 (0x90)                                        /**<  (SECUMOD_WKPR) Wakeup Protection Register  Offset */

#define SECUMOD_WKPR_DET0_Pos               16                                             /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_WKPR_DET0_Msk               (_U_(0x1) << SECUMOD_WKPR_DET0_Pos)            /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_WKPR_DET0                   SECUMOD_WKPR_DET0_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_WKPR_DET0_Msk instead */
#define SECUMOD_WKPR_DET1_Pos               17                                             /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_WKPR_DET1_Msk               (_U_(0x1) << SECUMOD_WKPR_DET1_Pos)            /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_WKPR_DET1                   SECUMOD_WKPR_DET1_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_WKPR_DET1_Msk instead */
#define SECUMOD_WKPR_DET2_Pos               18                                             /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_WKPR_DET2_Msk               (_U_(0x1) << SECUMOD_WKPR_DET2_Pos)            /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_WKPR_DET2                   SECUMOD_WKPR_DET2_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_WKPR_DET2_Msk instead */
#define SECUMOD_WKPR_DET3_Pos               19                                             /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_WKPR_DET3_Msk               (_U_(0x1) << SECUMOD_WKPR_DET3_Pos)            /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_WKPR_DET3                   SECUMOD_WKPR_DET3_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_WKPR_DET3_Msk instead */
#define SECUMOD_WKPR_DET4_Pos               20                                             /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_WKPR_DET4_Msk               (_U_(0x1) << SECUMOD_WKPR_DET4_Pos)            /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_WKPR_DET4                   SECUMOD_WKPR_DET4_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_WKPR_DET4_Msk instead */
#define SECUMOD_WKPR_DET5_Pos               21                                             /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_WKPR_DET5_Msk               (_U_(0x1) << SECUMOD_WKPR_DET5_Pos)            /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_WKPR_DET5                   SECUMOD_WKPR_DET5_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_WKPR_DET5_Msk instead */
#define SECUMOD_WKPR_DET6_Pos               22                                             /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_WKPR_DET6_Msk               (_U_(0x1) << SECUMOD_WKPR_DET6_Pos)            /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_WKPR_DET6                   SECUMOD_WKPR_DET6_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_WKPR_DET6_Msk instead */
#define SECUMOD_WKPR_DET7_Pos               23                                             /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_WKPR_DET7_Msk               (_U_(0x1) << SECUMOD_WKPR_DET7_Pos)            /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_WKPR_DET7                   SECUMOD_WKPR_DET7_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SECUMOD_WKPR_DET7_Msk instead */
#define SECUMOD_WKPR_MASK                   _U_(0xFF0000)                                  /**< \deprecated (SECUMOD_WKPR) Register MASK  (Use SECUMOD_WKPR_Msk instead)  */
#define SECUMOD_WKPR_Msk                    _U_(0xFF0000)                                  /**< (SECUMOD_WKPR) Register Mask  */

#define SECUMOD_WKPR_DET_Pos                16                                             /**< (SECUMOD_WKPR Position) PIOBU Intrusion Detector Protection */
#define SECUMOD_WKPR_DET_Msk                (_U_(0xFF) << SECUMOD_WKPR_DET_Pos)            /**< (SECUMOD_WKPR Mask) DET */
#define SECUMOD_WKPR_DET(value)             (SECUMOD_WKPR_DET_Msk & ((value) << SECUMOD_WKPR_DET_Pos))  

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief SECUMOD hardware registers */
typedef struct {  
  __O  uint32_t SECUMOD_CR;     /**< (SECUMOD Offset: 0x00) Control Register */
  __IO uint32_t SECUMOD_SYSR;   /**< (SECUMOD Offset: 0x04) System Status Register */
  __I  uint32_t SECUMOD_SR;     /**< (SECUMOD Offset: 0x08) Status Register */
  __I  uint8_t                        Reserved1[4];
  __O  uint32_t SECUMOD_SCR;    /**< (SECUMOD Offset: 0x10) Status Clear Register */
  __I  uint32_t SECUMOD_RAMRDY; /**< (SECUMOD Offset: 0x14) RAM Access Ready Register */
  __IO uint32_t SECUMOD_PIOBU[8]; /**< (SECUMOD Offset: 0x18) PIO Backup Register */
  __I  uint8_t                        Reserved2[48];
  __IO uint32_t SECUMOD_JTAGCR; /**< (SECUMOD Offset: 0x68) JTAG Protection Control Register */
  __I  uint8_t                        Reserved3[4];
  __IO uint32_t SECUMOD_SCRKEY; /**< (SECUMOD Offset: 0x70) Scrambling Key Register */
  __IO uint32_t SECUMOD_RAMACC; /**< (SECUMOD Offset: 0x74) RAM Access Rights Register */
  __IO uint32_t SECUMOD_RAMACCSR; /**< (SECUMOD Offset: 0x78) RAM Access Rights Status Register */
  __IO uint32_t SECUMOD_BMPR;   /**< (SECUMOD Offset: 0x7C) Backup Mode Protection Register */
  __IO uint32_t SECUMOD_NMPR;   /**< (SECUMOD Offset: 0x80) Normal Mode Protection Register */
  __O  uint32_t SECUMOD_NIEPR;  /**< (SECUMOD Offset: 0x84) Normal Interrupt Enable Protection Register */
  __O  uint32_t SECUMOD_NIDPR;  /**< (SECUMOD Offset: 0x88) Normal Interrupt Disable Protection Register */
  __I  uint32_t SECUMOD_NIMPR;  /**< (SECUMOD Offset: 0x8C) Normal Interrupt Mask Protection Register */
  __IO uint32_t SECUMOD_WKPR;   /**< (SECUMOD Offset: 0x90) Wakeup Protection Register */
} Secumod;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief SECUMOD hardware registers */
typedef struct {  
  __O  SECUMOD_CR_Type                SECUMOD_CR;     /**< Offset: 0x00 ( /W  32) Control Register */
  __IO SECUMOD_SYSR_Type              SECUMOD_SYSR;   /**< Offset: 0x04 (R/W  32) System Status Register */
  __I  SECUMOD_SR_Type                SECUMOD_SR;     /**< Offset: 0x08 (R/   32) Status Register */
  __I  uint8_t                        Reserved1[4];
  __O  SECUMOD_SCR_Type               SECUMOD_SCR;    /**< Offset: 0x10 ( /W  32) Status Clear Register */
  __I  SECUMOD_RAMRDY_Type            SECUMOD_RAMRDY; /**< Offset: 0x14 (R/   32) RAM Access Ready Register */
  __IO SECUMOD_PIOBU_Type             SECUMOD_PIOBU[8]; /**< Offset: 0x18 (R/W  32) PIO Backup Register */
  __I  uint8_t                        Reserved2[48];
  __IO SECUMOD_JTAGCR_Type            SECUMOD_JTAGCR; /**< Offset: 0x68 (R/W  32) JTAG Protection Control Register */
  __I  uint8_t                        Reserved3[4];
  __IO SECUMOD_SCRKEY_Type            SECUMOD_SCRKEY; /**< Offset: 0x70 (R/W  32) Scrambling Key Register */
  __IO SECUMOD_RAMACC_Type            SECUMOD_RAMACC; /**< Offset: 0x74 (R/W  32) RAM Access Rights Register */
  __IO SECUMOD_RAMACCSR_Type          SECUMOD_RAMACCSR; /**< Offset: 0x78 (R/W  32) RAM Access Rights Status Register */
  __IO SECUMOD_BMPR_Type              SECUMOD_BMPR;   /**< Offset: 0x7C (R/W  32) Backup Mode Protection Register */
  __IO SECUMOD_NMPR_Type              SECUMOD_NMPR;   /**< Offset: 0x80 (R/W  32) Normal Mode Protection Register */
  __O  SECUMOD_NIEPR_Type             SECUMOD_NIEPR;  /**< Offset: 0x84 ( /W  32) Normal Interrupt Enable Protection Register */
  __O  SECUMOD_NIDPR_Type             SECUMOD_NIDPR;  /**< Offset: 0x88 ( /W  32) Normal Interrupt Disable Protection Register */
  __I  SECUMOD_NIMPR_Type             SECUMOD_NIMPR;  /**< Offset: 0x8C (R/   32) Normal Interrupt Mask Protection Register */
  __IO SECUMOD_WKPR_Type              SECUMOD_WKPR;   /**< Offset: 0x90 (R/W  32) Wakeup Protection Register */
} Secumod;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Security Module */

#endif /* _SAMA5D2_SECUMOD_COMPONENT_H_ */
