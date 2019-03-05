/**
 * \file
 *
 * \brief Component description for MATRIX
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
#ifndef _SAMA5D2_MATRIX_COMPONENT_H_
#define _SAMA5D2_MATRIX_COMPONENT_H_
#define _SAMA5D2_MATRIX_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 AHB Bus Matrix
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR MATRIX */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define MATRIX_44025                      /**< (MATRIX) Module ID */
#define REV_MATRIX I                      /**< (MATRIX) Module revision */

/* -------- MATRIX_PRAS : (MATRIX Offset: 0x00) (R/W 32) Priority Register A for Slave 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t M0PR:2;                    /**< bit:   0..1  Master 0 Priority                        */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t M1PR:2;                    /**< bit:   4..5  Master 1 Priority                        */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t M2PR:2;                    /**< bit:   8..9  Master 2 Priority                        */
    uint32_t :2;                        /**< bit: 10..11  Reserved */
    uint32_t M3PR:2;                    /**< bit: 12..13  Master 3 Priority                        */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t M4PR:2;                    /**< bit: 16..17  Master 4 Priority                        */
    uint32_t :2;                        /**< bit: 18..19  Reserved */
    uint32_t M5PR:2;                    /**< bit: 20..21  Master 5 Priority                        */
    uint32_t :2;                        /**< bit: 22..23  Reserved */
    uint32_t M6PR:2;                    /**< bit: 24..25  Master 6 Priority                        */
    uint32_t :2;                        /**< bit: 26..27  Reserved */
    uint32_t M7PR:2;                    /**< bit: 28..29  Master 7 Priority                        */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MATRIX_PRAS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MATRIX_PRAS_OFFSET                  (0x00)                                        /**<  (MATRIX_PRAS) Priority Register A for Slave 0  Offset */

#define MATRIX_PRAS_M0PR_Pos                0                                              /**< (MATRIX_PRAS) Master 0 Priority Position */
#define MATRIX_PRAS_M0PR_Msk                (_U_(0x3) << MATRIX_PRAS_M0PR_Pos)             /**< (MATRIX_PRAS) Master 0 Priority Mask */
#define MATRIX_PRAS_M0PR(value)             (MATRIX_PRAS_M0PR_Msk & ((value) << MATRIX_PRAS_M0PR_Pos))
#define MATRIX_PRAS_M1PR_Pos                4                                              /**< (MATRIX_PRAS) Master 1 Priority Position */
#define MATRIX_PRAS_M1PR_Msk                (_U_(0x3) << MATRIX_PRAS_M1PR_Pos)             /**< (MATRIX_PRAS) Master 1 Priority Mask */
#define MATRIX_PRAS_M1PR(value)             (MATRIX_PRAS_M1PR_Msk & ((value) << MATRIX_PRAS_M1PR_Pos))
#define MATRIX_PRAS_M2PR_Pos                8                                              /**< (MATRIX_PRAS) Master 2 Priority Position */
#define MATRIX_PRAS_M2PR_Msk                (_U_(0x3) << MATRIX_PRAS_M2PR_Pos)             /**< (MATRIX_PRAS) Master 2 Priority Mask */
#define MATRIX_PRAS_M2PR(value)             (MATRIX_PRAS_M2PR_Msk & ((value) << MATRIX_PRAS_M2PR_Pos))
#define MATRIX_PRAS_M3PR_Pos                12                                             /**< (MATRIX_PRAS) Master 3 Priority Position */
#define MATRIX_PRAS_M3PR_Msk                (_U_(0x3) << MATRIX_PRAS_M3PR_Pos)             /**< (MATRIX_PRAS) Master 3 Priority Mask */
#define MATRIX_PRAS_M3PR(value)             (MATRIX_PRAS_M3PR_Msk & ((value) << MATRIX_PRAS_M3PR_Pos))
#define MATRIX_PRAS_M4PR_Pos                16                                             /**< (MATRIX_PRAS) Master 4 Priority Position */
#define MATRIX_PRAS_M4PR_Msk                (_U_(0x3) << MATRIX_PRAS_M4PR_Pos)             /**< (MATRIX_PRAS) Master 4 Priority Mask */
#define MATRIX_PRAS_M4PR(value)             (MATRIX_PRAS_M4PR_Msk & ((value) << MATRIX_PRAS_M4PR_Pos))
#define MATRIX_PRAS_M5PR_Pos                20                                             /**< (MATRIX_PRAS) Master 5 Priority Position */
#define MATRIX_PRAS_M5PR_Msk                (_U_(0x3) << MATRIX_PRAS_M5PR_Pos)             /**< (MATRIX_PRAS) Master 5 Priority Mask */
#define MATRIX_PRAS_M5PR(value)             (MATRIX_PRAS_M5PR_Msk & ((value) << MATRIX_PRAS_M5PR_Pos))
#define MATRIX_PRAS_M6PR_Pos                24                                             /**< (MATRIX_PRAS) Master 6 Priority Position */
#define MATRIX_PRAS_M6PR_Msk                (_U_(0x3) << MATRIX_PRAS_M6PR_Pos)             /**< (MATRIX_PRAS) Master 6 Priority Mask */
#define MATRIX_PRAS_M6PR(value)             (MATRIX_PRAS_M6PR_Msk & ((value) << MATRIX_PRAS_M6PR_Pos))
#define MATRIX_PRAS_M7PR_Pos                28                                             /**< (MATRIX_PRAS) Master 7 Priority Position */
#define MATRIX_PRAS_M7PR_Msk                (_U_(0x3) << MATRIX_PRAS_M7PR_Pos)             /**< (MATRIX_PRAS) Master 7 Priority Mask */
#define MATRIX_PRAS_M7PR(value)             (MATRIX_PRAS_M7PR_Msk & ((value) << MATRIX_PRAS_M7PR_Pos))
#define MATRIX_PRAS_MASK                    _U_(0x33333333)                                /**< \deprecated (MATRIX_PRAS) Register MASK  (Use MATRIX_PRAS_Msk instead)  */
#define MATRIX_PRAS_Msk                     _U_(0x33333333)                                /**< (MATRIX_PRAS) Register Mask  */


/* -------- MATRIX_PRBS : (MATRIX Offset: 0x04) (R/W 32) Priority Register B for Slave 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t M8PR:2;                    /**< bit:   0..1  Master 8 Priority                        */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t M9PR:2;                    /**< bit:   4..5  Master 9 Priority                        */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t M10PR:2;                   /**< bit:   8..9  Master 10 Priority                       */
    uint32_t :2;                        /**< bit: 10..11  Reserved */
    uint32_t M11PR:2;                   /**< bit: 12..13  Master 11 Priority                       */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MATRIX_PRBS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MATRIX_PRBS_OFFSET                  (0x04)                                        /**<  (MATRIX_PRBS) Priority Register B for Slave 0  Offset */

#define MATRIX_PRBS_M8PR_Pos                0                                              /**< (MATRIX_PRBS) Master 8 Priority Position */
#define MATRIX_PRBS_M8PR_Msk                (_U_(0x3) << MATRIX_PRBS_M8PR_Pos)             /**< (MATRIX_PRBS) Master 8 Priority Mask */
#define MATRIX_PRBS_M8PR(value)             (MATRIX_PRBS_M8PR_Msk & ((value) << MATRIX_PRBS_M8PR_Pos))
#define MATRIX_PRBS_M9PR_Pos                4                                              /**< (MATRIX_PRBS) Master 9 Priority Position */
#define MATRIX_PRBS_M9PR_Msk                (_U_(0x3) << MATRIX_PRBS_M9PR_Pos)             /**< (MATRIX_PRBS) Master 9 Priority Mask */
#define MATRIX_PRBS_M9PR(value)             (MATRIX_PRBS_M9PR_Msk & ((value) << MATRIX_PRBS_M9PR_Pos))
#define MATRIX_PRBS_M10PR_Pos               8                                              /**< (MATRIX_PRBS) Master 10 Priority Position */
#define MATRIX_PRBS_M10PR_Msk               (_U_(0x3) << MATRIX_PRBS_M10PR_Pos)            /**< (MATRIX_PRBS) Master 10 Priority Mask */
#define MATRIX_PRBS_M10PR(value)            (MATRIX_PRBS_M10PR_Msk & ((value) << MATRIX_PRBS_M10PR_Pos))
#define MATRIX_PRBS_M11PR_Pos               12                                             /**< (MATRIX_PRBS) Master 11 Priority Position */
#define MATRIX_PRBS_M11PR_Msk               (_U_(0x3) << MATRIX_PRBS_M11PR_Pos)            /**< (MATRIX_PRBS) Master 11 Priority Mask */
#define MATRIX_PRBS_M11PR(value)            (MATRIX_PRBS_M11PR_Msk & ((value) << MATRIX_PRBS_M11PR_Pos))
#define MATRIX_PRBS_MASK                    _U_(0x3333)                                    /**< \deprecated (MATRIX_PRBS) Register MASK  (Use MATRIX_PRBS_Msk instead)  */
#define MATRIX_PRBS_Msk                     _U_(0x3333)                                    /**< (MATRIX_PRBS) Register Mask  */


/* -------- MATRIX_MCFG : (MATRIX Offset: 0x00) (R/W 32) Master Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ULBT:3;                    /**< bit:   0..2  Undefined Length Burst Type              */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MATRIX_MCFG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MATRIX_MCFG_OFFSET                  (0x00)                                        /**<  (MATRIX_MCFG) Master Configuration Register  Offset */

#define MATRIX_MCFG_ULBT_Pos                0                                              /**< (MATRIX_MCFG) Undefined Length Burst Type Position */
#define MATRIX_MCFG_ULBT_Msk                (_U_(0x7) << MATRIX_MCFG_ULBT_Pos)             /**< (MATRIX_MCFG) Undefined Length Burst Type Mask */
#define MATRIX_MCFG_ULBT(value)             (MATRIX_MCFG_ULBT_Msk & ((value) << MATRIX_MCFG_ULBT_Pos))
#define   MATRIX_MCFG_ULBT_UNLIMITED_Val    _U_(0x0)                                       /**< (MATRIX_MCFG) Unlimited Length Burst-No predicted end of burst is generated, therefore INCR bursts coming from this master can only be broken if the Slave Slot Cycle Limit is reached. If the Slot Cycle Limit is not reached, the burst is normally completed by the master, at the latest, on the next AHB 1 Kbyte address boundary, allowing up to 256-beat word bursts or 128-beat double-word bursts.This value should not be used in the very particular case of a master capable of performing back-to-back undefined length bursts on a single slave, since this could indefinitely freeze the slave arbitration and thus prevent another master from accessing this slave.  */
#define   MATRIX_MCFG_ULBT_SINGLE_Val       _U_(0x1)                                       /**< (MATRIX_MCFG) Single Access-The undefined length burst is treated as a succession of single accesses, allowing rearbitration at each beat of the INCR burst or bursts sequence.  */
#define   MATRIX_MCFG_ULBT_4_BEAT_Val       _U_(0x2)                                       /**< (MATRIX_MCFG) 4-beat Burst-The undefined length burst or bursts sequence is split into 4-beat bursts or less, allowing rearbitration every 4 beats.  */
#define   MATRIX_MCFG_ULBT_8_BEAT_Val       _U_(0x3)                                       /**< (MATRIX_MCFG) 8-beat Burst-The undefined length burst or bursts sequence is split into 8-beat bursts or less, allowing rearbitration every 8 beats.  */
#define   MATRIX_MCFG_ULBT_16_BEAT_Val      _U_(0x4)                                       /**< (MATRIX_MCFG) 16-beat Burst-The undefined length burst or bursts sequence is split into 16-beat bursts or less, allowing rearbitration every 16 beats.  */
#define   MATRIX_MCFG_ULBT_32_BEAT_Val      _U_(0x5)                                       /**< (MATRIX_MCFG) 32-beat Burst-The undefined length burst or bursts sequence is split into 32-beat bursts or less, allowing rearbitration every 32 beats.  */
#define   MATRIX_MCFG_ULBT_64_BEAT_Val      _U_(0x6)                                       /**< (MATRIX_MCFG) 64-beat Burst-The undefined length burst or bursts sequence is split into 64-beat bursts or less, allowing rearbitration every 64 beats.  */
#define   MATRIX_MCFG_ULBT_128_BEAT_Val     _U_(0x7)                                       /**< (MATRIX_MCFG) 128-beat Burst-The undefined length burst or bursts sequence is split into 128-beat bursts or less, allowing rearbitration every 128 beats.Unless duly needed, the ULBT should be left at its default 0 value for power saving.  */
#define MATRIX_MCFG_ULBT_UNLIMITED          (MATRIX_MCFG_ULBT_UNLIMITED_Val << MATRIX_MCFG_ULBT_Pos)  /**< (MATRIX_MCFG) Unlimited Length Burst-No predicted end of burst is generated, therefore INCR bursts coming from this master can only be broken if the Slave Slot Cycle Limit is reached. If the Slot Cycle Limit is not reached, the burst is normally completed by the master, at the latest, on the next AHB 1 Kbyte address boundary, allowing up to 256-beat word bursts or 128-beat double-word bursts.This value should not be used in the very particular case of a master capable of performing back-to-back undefined length bursts on a single slave, since this could indefinitely freeze the slave arbitration and thus prevent another master from accessing this slave. Position  */
#define MATRIX_MCFG_ULBT_SINGLE             (MATRIX_MCFG_ULBT_SINGLE_Val << MATRIX_MCFG_ULBT_Pos)  /**< (MATRIX_MCFG) Single Access-The undefined length burst is treated as a succession of single accesses, allowing rearbitration at each beat of the INCR burst or bursts sequence. Position  */
#define MATRIX_MCFG_ULBT_4_BEAT             (MATRIX_MCFG_ULBT_4_BEAT_Val << MATRIX_MCFG_ULBT_Pos)  /**< (MATRIX_MCFG) 4-beat Burst-The undefined length burst or bursts sequence is split into 4-beat bursts or less, allowing rearbitration every 4 beats. Position  */
#define MATRIX_MCFG_ULBT_8_BEAT             (MATRIX_MCFG_ULBT_8_BEAT_Val << MATRIX_MCFG_ULBT_Pos)  /**< (MATRIX_MCFG) 8-beat Burst-The undefined length burst or bursts sequence is split into 8-beat bursts or less, allowing rearbitration every 8 beats. Position  */
#define MATRIX_MCFG_ULBT_16_BEAT            (MATRIX_MCFG_ULBT_16_BEAT_Val << MATRIX_MCFG_ULBT_Pos)  /**< (MATRIX_MCFG) 16-beat Burst-The undefined length burst or bursts sequence is split into 16-beat bursts or less, allowing rearbitration every 16 beats. Position  */
#define MATRIX_MCFG_ULBT_32_BEAT            (MATRIX_MCFG_ULBT_32_BEAT_Val << MATRIX_MCFG_ULBT_Pos)  /**< (MATRIX_MCFG) 32-beat Burst-The undefined length burst or bursts sequence is split into 32-beat bursts or less, allowing rearbitration every 32 beats. Position  */
#define MATRIX_MCFG_ULBT_64_BEAT            (MATRIX_MCFG_ULBT_64_BEAT_Val << MATRIX_MCFG_ULBT_Pos)  /**< (MATRIX_MCFG) 64-beat Burst-The undefined length burst or bursts sequence is split into 64-beat bursts or less, allowing rearbitration every 64 beats. Position  */
#define MATRIX_MCFG_ULBT_128_BEAT           (MATRIX_MCFG_ULBT_128_BEAT_Val << MATRIX_MCFG_ULBT_Pos)  /**< (MATRIX_MCFG) 128-beat Burst-The undefined length burst or bursts sequence is split into 128-beat bursts or less, allowing rearbitration every 128 beats.Unless duly needed, the ULBT should be left at its default 0 value for power saving. Position  */
#define MATRIX_MCFG_MASK                    _U_(0x07)                                      /**< \deprecated (MATRIX_MCFG) Register MASK  (Use MATRIX_MCFG_Msk instead)  */
#define MATRIX_MCFG_Msk                     _U_(0x07)                                      /**< (MATRIX_MCFG) Register Mask  */


/* -------- MATRIX_SCFG : (MATRIX Offset: 0x40) (R/W 32) Slave Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SLOT_CYCLE:9;              /**< bit:   0..8  Maximum Bus Grant Duration for Masters   */
    uint32_t :7;                        /**< bit:  9..15  Reserved */
    uint32_t DEFMSTR_TYPE:2;            /**< bit: 16..17  Default Master Type                      */
    uint32_t FIXED_DEFMSTR:4;           /**< bit: 18..21  Fixed Default Master                     */
    uint32_t :10;                       /**< bit: 22..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MATRIX_SCFG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MATRIX_SCFG_OFFSET                  (0x40)                                        /**<  (MATRIX_SCFG) Slave Configuration Register  Offset */

#define MATRIX_SCFG_SLOT_CYCLE_Pos          0                                              /**< (MATRIX_SCFG) Maximum Bus Grant Duration for Masters Position */
#define MATRIX_SCFG_SLOT_CYCLE_Msk          (_U_(0x1FF) << MATRIX_SCFG_SLOT_CYCLE_Pos)     /**< (MATRIX_SCFG) Maximum Bus Grant Duration for Masters Mask */
#define MATRIX_SCFG_SLOT_CYCLE(value)       (MATRIX_SCFG_SLOT_CYCLE_Msk & ((value) << MATRIX_SCFG_SLOT_CYCLE_Pos))
#define MATRIX_SCFG_DEFMSTR_TYPE_Pos        16                                             /**< (MATRIX_SCFG) Default Master Type Position */
#define MATRIX_SCFG_DEFMSTR_TYPE_Msk        (_U_(0x3) << MATRIX_SCFG_DEFMSTR_TYPE_Pos)     /**< (MATRIX_SCFG) Default Master Type Mask */
#define MATRIX_SCFG_DEFMSTR_TYPE(value)     (MATRIX_SCFG_DEFMSTR_TYPE_Msk & ((value) << MATRIX_SCFG_DEFMSTR_TYPE_Pos))
#define   MATRIX_SCFG_DEFMSTR_TYPE_NONE_Val _U_(0x0)                                       /**< (MATRIX_SCFG) No Default Master-At the end of the current slave access, if no other master request is pending, the slave is disconnected from all masters.This results in a one clock cycle latency for the first access of a burst transfer or for a single access.  */
#define   MATRIX_SCFG_DEFMSTR_TYPE_LAST_Val _U_(0x1)                                       /**< (MATRIX_SCFG) Last Default Master-At the end of the current slave access, if no other master request is pending, the slave stays connected to the last master having accessed it.This results in not having one clock cycle latency when the last master tries to access the slave again.  */
#define   MATRIX_SCFG_DEFMSTR_TYPE_FIXED_Val _U_(0x2)                                       /**< (MATRIX_SCFG) Fixed Default Master-At the end of the current slave access, if no other master request is pending, the slave connects to the fixed master the number that has been written in the FIXED_DEFMSTR field.This results in not having one clock cycle latency when the fixed master tries to access the slave again.  */
#define MATRIX_SCFG_DEFMSTR_TYPE_NONE       (MATRIX_SCFG_DEFMSTR_TYPE_NONE_Val << MATRIX_SCFG_DEFMSTR_TYPE_Pos)  /**< (MATRIX_SCFG) No Default Master-At the end of the current slave access, if no other master request is pending, the slave is disconnected from all masters.This results in a one clock cycle latency for the first access of a burst transfer or for a single access. Position  */
#define MATRIX_SCFG_DEFMSTR_TYPE_LAST       (MATRIX_SCFG_DEFMSTR_TYPE_LAST_Val << MATRIX_SCFG_DEFMSTR_TYPE_Pos)  /**< (MATRIX_SCFG) Last Default Master-At the end of the current slave access, if no other master request is pending, the slave stays connected to the last master having accessed it.This results in not having one clock cycle latency when the last master tries to access the slave again. Position  */
#define MATRIX_SCFG_DEFMSTR_TYPE_FIXED      (MATRIX_SCFG_DEFMSTR_TYPE_FIXED_Val << MATRIX_SCFG_DEFMSTR_TYPE_Pos)  /**< (MATRIX_SCFG) Fixed Default Master-At the end of the current slave access, if no other master request is pending, the slave connects to the fixed master the number that has been written in the FIXED_DEFMSTR field.This results in not having one clock cycle latency when the fixed master tries to access the slave again. Position  */
#define MATRIX_SCFG_FIXED_DEFMSTR_Pos       18                                             /**< (MATRIX_SCFG) Fixed Default Master Position */
#define MATRIX_SCFG_FIXED_DEFMSTR_Msk       (_U_(0xF) << MATRIX_SCFG_FIXED_DEFMSTR_Pos)    /**< (MATRIX_SCFG) Fixed Default Master Mask */
#define MATRIX_SCFG_FIXED_DEFMSTR(value)    (MATRIX_SCFG_FIXED_DEFMSTR_Msk & ((value) << MATRIX_SCFG_FIXED_DEFMSTR_Pos))
#define MATRIX_SCFG_MASK                    _U_(0x3F01FF)                                  /**< \deprecated (MATRIX_SCFG) Register MASK  (Use MATRIX_SCFG_Msk instead)  */
#define MATRIX_SCFG_Msk                     _U_(0x3F01FF)                                  /**< (MATRIX_SCFG) Register Mask  */


/* -------- MATRIX_MEIER : (MATRIX Offset: 0x150) (/W 32) Master Error Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MERR0:1;                   /**< bit:      0  Master 0 Access Error                    */
    uint32_t MERR1:1;                   /**< bit:      1  Master 1 Access Error                    */
    uint32_t MERR2:1;                   /**< bit:      2  Master 2 Access Error                    */
    uint32_t MERR3:1;                   /**< bit:      3  Master 3 Access Error                    */
    uint32_t MERR4:1;                   /**< bit:      4  Master 4 Access Error                    */
    uint32_t MERR5:1;                   /**< bit:      5  Master 5 Access Error                    */
    uint32_t MERR6:1;                   /**< bit:      6  Master 6 Access Error                    */
    uint32_t MERR7:1;                   /**< bit:      7  Master 7 Access Error                    */
    uint32_t MERR8:1;                   /**< bit:      8  Master 8 Access Error                    */
    uint32_t MERR9:1;                   /**< bit:      9  Master 9 Access Error                    */
    uint32_t MERR10:1;                  /**< bit:     10  Master 10 Access Error                   */
    uint32_t MERR11:1;                  /**< bit:     11  Master 11 Access Error                   */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t MERR:12;                   /**< bit:  0..11  Master xx Access Error                   */
    uint32_t :20;                       /**< bit: 12..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} MATRIX_MEIER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MATRIX_MEIER_OFFSET                 (0x150)                                       /**<  (MATRIX_MEIER) Master Error Interrupt Enable Register  Offset */

#define MATRIX_MEIER_MERR0_Pos              0                                              /**< (MATRIX_MEIER) Master 0 Access Error Position */
#define MATRIX_MEIER_MERR0_Msk              (_U_(0x1) << MATRIX_MEIER_MERR0_Pos)           /**< (MATRIX_MEIER) Master 0 Access Error Mask */
#define MATRIX_MEIER_MERR0                  MATRIX_MEIER_MERR0_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIER_MERR0_Msk instead */
#define MATRIX_MEIER_MERR1_Pos              1                                              /**< (MATRIX_MEIER) Master 1 Access Error Position */
#define MATRIX_MEIER_MERR1_Msk              (_U_(0x1) << MATRIX_MEIER_MERR1_Pos)           /**< (MATRIX_MEIER) Master 1 Access Error Mask */
#define MATRIX_MEIER_MERR1                  MATRIX_MEIER_MERR1_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIER_MERR1_Msk instead */
#define MATRIX_MEIER_MERR2_Pos              2                                              /**< (MATRIX_MEIER) Master 2 Access Error Position */
#define MATRIX_MEIER_MERR2_Msk              (_U_(0x1) << MATRIX_MEIER_MERR2_Pos)           /**< (MATRIX_MEIER) Master 2 Access Error Mask */
#define MATRIX_MEIER_MERR2                  MATRIX_MEIER_MERR2_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIER_MERR2_Msk instead */
#define MATRIX_MEIER_MERR3_Pos              3                                              /**< (MATRIX_MEIER) Master 3 Access Error Position */
#define MATRIX_MEIER_MERR3_Msk              (_U_(0x1) << MATRIX_MEIER_MERR3_Pos)           /**< (MATRIX_MEIER) Master 3 Access Error Mask */
#define MATRIX_MEIER_MERR3                  MATRIX_MEIER_MERR3_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIER_MERR3_Msk instead */
#define MATRIX_MEIER_MERR4_Pos              4                                              /**< (MATRIX_MEIER) Master 4 Access Error Position */
#define MATRIX_MEIER_MERR4_Msk              (_U_(0x1) << MATRIX_MEIER_MERR4_Pos)           /**< (MATRIX_MEIER) Master 4 Access Error Mask */
#define MATRIX_MEIER_MERR4                  MATRIX_MEIER_MERR4_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIER_MERR4_Msk instead */
#define MATRIX_MEIER_MERR5_Pos              5                                              /**< (MATRIX_MEIER) Master 5 Access Error Position */
#define MATRIX_MEIER_MERR5_Msk              (_U_(0x1) << MATRIX_MEIER_MERR5_Pos)           /**< (MATRIX_MEIER) Master 5 Access Error Mask */
#define MATRIX_MEIER_MERR5                  MATRIX_MEIER_MERR5_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIER_MERR5_Msk instead */
#define MATRIX_MEIER_MERR6_Pos              6                                              /**< (MATRIX_MEIER) Master 6 Access Error Position */
#define MATRIX_MEIER_MERR6_Msk              (_U_(0x1) << MATRIX_MEIER_MERR6_Pos)           /**< (MATRIX_MEIER) Master 6 Access Error Mask */
#define MATRIX_MEIER_MERR6                  MATRIX_MEIER_MERR6_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIER_MERR6_Msk instead */
#define MATRIX_MEIER_MERR7_Pos              7                                              /**< (MATRIX_MEIER) Master 7 Access Error Position */
#define MATRIX_MEIER_MERR7_Msk              (_U_(0x1) << MATRIX_MEIER_MERR7_Pos)           /**< (MATRIX_MEIER) Master 7 Access Error Mask */
#define MATRIX_MEIER_MERR7                  MATRIX_MEIER_MERR7_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIER_MERR7_Msk instead */
#define MATRIX_MEIER_MERR8_Pos              8                                              /**< (MATRIX_MEIER) Master 8 Access Error Position */
#define MATRIX_MEIER_MERR8_Msk              (_U_(0x1) << MATRIX_MEIER_MERR8_Pos)           /**< (MATRIX_MEIER) Master 8 Access Error Mask */
#define MATRIX_MEIER_MERR8                  MATRIX_MEIER_MERR8_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIER_MERR8_Msk instead */
#define MATRIX_MEIER_MERR9_Pos              9                                              /**< (MATRIX_MEIER) Master 9 Access Error Position */
#define MATRIX_MEIER_MERR9_Msk              (_U_(0x1) << MATRIX_MEIER_MERR9_Pos)           /**< (MATRIX_MEIER) Master 9 Access Error Mask */
#define MATRIX_MEIER_MERR9                  MATRIX_MEIER_MERR9_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIER_MERR9_Msk instead */
#define MATRIX_MEIER_MERR10_Pos             10                                             /**< (MATRIX_MEIER) Master 10 Access Error Position */
#define MATRIX_MEIER_MERR10_Msk             (_U_(0x1) << MATRIX_MEIER_MERR10_Pos)          /**< (MATRIX_MEIER) Master 10 Access Error Mask */
#define MATRIX_MEIER_MERR10                 MATRIX_MEIER_MERR10_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIER_MERR10_Msk instead */
#define MATRIX_MEIER_MERR11_Pos             11                                             /**< (MATRIX_MEIER) Master 11 Access Error Position */
#define MATRIX_MEIER_MERR11_Msk             (_U_(0x1) << MATRIX_MEIER_MERR11_Pos)          /**< (MATRIX_MEIER) Master 11 Access Error Mask */
#define MATRIX_MEIER_MERR11                 MATRIX_MEIER_MERR11_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIER_MERR11_Msk instead */
#define MATRIX_MEIER_MASK                   _U_(0xFFF)                                     /**< \deprecated (MATRIX_MEIER) Register MASK  (Use MATRIX_MEIER_Msk instead)  */
#define MATRIX_MEIER_Msk                    _U_(0xFFF)                                     /**< (MATRIX_MEIER) Register Mask  */

#define MATRIX_MEIER_MERR_Pos               0                                              /**< (MATRIX_MEIER Position) Master xx Access Error */
#define MATRIX_MEIER_MERR_Msk               (_U_(0xFFF) << MATRIX_MEIER_MERR_Pos)          /**< (MATRIX_MEIER Mask) MERR */
#define MATRIX_MEIER_MERR(value)            (MATRIX_MEIER_MERR_Msk & ((value) << MATRIX_MEIER_MERR_Pos))  

/* -------- MATRIX_MEIDR : (MATRIX Offset: 0x154) (/W 32) Master Error Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MERR0:1;                   /**< bit:      0  Master 0 Access Error                    */
    uint32_t MERR1:1;                   /**< bit:      1  Master 1 Access Error                    */
    uint32_t MERR2:1;                   /**< bit:      2  Master 2 Access Error                    */
    uint32_t MERR3:1;                   /**< bit:      3  Master 3 Access Error                    */
    uint32_t MERR4:1;                   /**< bit:      4  Master 4 Access Error                    */
    uint32_t MERR5:1;                   /**< bit:      5  Master 5 Access Error                    */
    uint32_t MERR6:1;                   /**< bit:      6  Master 6 Access Error                    */
    uint32_t MERR7:1;                   /**< bit:      7  Master 7 Access Error                    */
    uint32_t MERR8:1;                   /**< bit:      8  Master 8 Access Error                    */
    uint32_t MERR9:1;                   /**< bit:      9  Master 9 Access Error                    */
    uint32_t MERR10:1;                  /**< bit:     10  Master 10 Access Error                   */
    uint32_t MERR11:1;                  /**< bit:     11  Master 11 Access Error                   */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t MERR:12;                   /**< bit:  0..11  Master xx Access Error                   */
    uint32_t :20;                       /**< bit: 12..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} MATRIX_MEIDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MATRIX_MEIDR_OFFSET                 (0x154)                                       /**<  (MATRIX_MEIDR) Master Error Interrupt Disable Register  Offset */

#define MATRIX_MEIDR_MERR0_Pos              0                                              /**< (MATRIX_MEIDR) Master 0 Access Error Position */
#define MATRIX_MEIDR_MERR0_Msk              (_U_(0x1) << MATRIX_MEIDR_MERR0_Pos)           /**< (MATRIX_MEIDR) Master 0 Access Error Mask */
#define MATRIX_MEIDR_MERR0                  MATRIX_MEIDR_MERR0_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIDR_MERR0_Msk instead */
#define MATRIX_MEIDR_MERR1_Pos              1                                              /**< (MATRIX_MEIDR) Master 1 Access Error Position */
#define MATRIX_MEIDR_MERR1_Msk              (_U_(0x1) << MATRIX_MEIDR_MERR1_Pos)           /**< (MATRIX_MEIDR) Master 1 Access Error Mask */
#define MATRIX_MEIDR_MERR1                  MATRIX_MEIDR_MERR1_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIDR_MERR1_Msk instead */
#define MATRIX_MEIDR_MERR2_Pos              2                                              /**< (MATRIX_MEIDR) Master 2 Access Error Position */
#define MATRIX_MEIDR_MERR2_Msk              (_U_(0x1) << MATRIX_MEIDR_MERR2_Pos)           /**< (MATRIX_MEIDR) Master 2 Access Error Mask */
#define MATRIX_MEIDR_MERR2                  MATRIX_MEIDR_MERR2_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIDR_MERR2_Msk instead */
#define MATRIX_MEIDR_MERR3_Pos              3                                              /**< (MATRIX_MEIDR) Master 3 Access Error Position */
#define MATRIX_MEIDR_MERR3_Msk              (_U_(0x1) << MATRIX_MEIDR_MERR3_Pos)           /**< (MATRIX_MEIDR) Master 3 Access Error Mask */
#define MATRIX_MEIDR_MERR3                  MATRIX_MEIDR_MERR3_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIDR_MERR3_Msk instead */
#define MATRIX_MEIDR_MERR4_Pos              4                                              /**< (MATRIX_MEIDR) Master 4 Access Error Position */
#define MATRIX_MEIDR_MERR4_Msk              (_U_(0x1) << MATRIX_MEIDR_MERR4_Pos)           /**< (MATRIX_MEIDR) Master 4 Access Error Mask */
#define MATRIX_MEIDR_MERR4                  MATRIX_MEIDR_MERR4_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIDR_MERR4_Msk instead */
#define MATRIX_MEIDR_MERR5_Pos              5                                              /**< (MATRIX_MEIDR) Master 5 Access Error Position */
#define MATRIX_MEIDR_MERR5_Msk              (_U_(0x1) << MATRIX_MEIDR_MERR5_Pos)           /**< (MATRIX_MEIDR) Master 5 Access Error Mask */
#define MATRIX_MEIDR_MERR5                  MATRIX_MEIDR_MERR5_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIDR_MERR5_Msk instead */
#define MATRIX_MEIDR_MERR6_Pos              6                                              /**< (MATRIX_MEIDR) Master 6 Access Error Position */
#define MATRIX_MEIDR_MERR6_Msk              (_U_(0x1) << MATRIX_MEIDR_MERR6_Pos)           /**< (MATRIX_MEIDR) Master 6 Access Error Mask */
#define MATRIX_MEIDR_MERR6                  MATRIX_MEIDR_MERR6_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIDR_MERR6_Msk instead */
#define MATRIX_MEIDR_MERR7_Pos              7                                              /**< (MATRIX_MEIDR) Master 7 Access Error Position */
#define MATRIX_MEIDR_MERR7_Msk              (_U_(0x1) << MATRIX_MEIDR_MERR7_Pos)           /**< (MATRIX_MEIDR) Master 7 Access Error Mask */
#define MATRIX_MEIDR_MERR7                  MATRIX_MEIDR_MERR7_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIDR_MERR7_Msk instead */
#define MATRIX_MEIDR_MERR8_Pos              8                                              /**< (MATRIX_MEIDR) Master 8 Access Error Position */
#define MATRIX_MEIDR_MERR8_Msk              (_U_(0x1) << MATRIX_MEIDR_MERR8_Pos)           /**< (MATRIX_MEIDR) Master 8 Access Error Mask */
#define MATRIX_MEIDR_MERR8                  MATRIX_MEIDR_MERR8_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIDR_MERR8_Msk instead */
#define MATRIX_MEIDR_MERR9_Pos              9                                              /**< (MATRIX_MEIDR) Master 9 Access Error Position */
#define MATRIX_MEIDR_MERR9_Msk              (_U_(0x1) << MATRIX_MEIDR_MERR9_Pos)           /**< (MATRIX_MEIDR) Master 9 Access Error Mask */
#define MATRIX_MEIDR_MERR9                  MATRIX_MEIDR_MERR9_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIDR_MERR9_Msk instead */
#define MATRIX_MEIDR_MERR10_Pos             10                                             /**< (MATRIX_MEIDR) Master 10 Access Error Position */
#define MATRIX_MEIDR_MERR10_Msk             (_U_(0x1) << MATRIX_MEIDR_MERR10_Pos)          /**< (MATRIX_MEIDR) Master 10 Access Error Mask */
#define MATRIX_MEIDR_MERR10                 MATRIX_MEIDR_MERR10_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIDR_MERR10_Msk instead */
#define MATRIX_MEIDR_MERR11_Pos             11                                             /**< (MATRIX_MEIDR) Master 11 Access Error Position */
#define MATRIX_MEIDR_MERR11_Msk             (_U_(0x1) << MATRIX_MEIDR_MERR11_Pos)          /**< (MATRIX_MEIDR) Master 11 Access Error Mask */
#define MATRIX_MEIDR_MERR11                 MATRIX_MEIDR_MERR11_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIDR_MERR11_Msk instead */
#define MATRIX_MEIDR_MASK                   _U_(0xFFF)                                     /**< \deprecated (MATRIX_MEIDR) Register MASK  (Use MATRIX_MEIDR_Msk instead)  */
#define MATRIX_MEIDR_Msk                    _U_(0xFFF)                                     /**< (MATRIX_MEIDR) Register Mask  */

#define MATRIX_MEIDR_MERR_Pos               0                                              /**< (MATRIX_MEIDR Position) Master xx Access Error */
#define MATRIX_MEIDR_MERR_Msk               (_U_(0xFFF) << MATRIX_MEIDR_MERR_Pos)          /**< (MATRIX_MEIDR Mask) MERR */
#define MATRIX_MEIDR_MERR(value)            (MATRIX_MEIDR_MERR_Msk & ((value) << MATRIX_MEIDR_MERR_Pos))  

/* -------- MATRIX_MEIMR : (MATRIX Offset: 0x158) (R/ 32) Master Error Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MERR0:1;                   /**< bit:      0  Master 0 Access Error                    */
    uint32_t MERR1:1;                   /**< bit:      1  Master 1 Access Error                    */
    uint32_t MERR2:1;                   /**< bit:      2  Master 2 Access Error                    */
    uint32_t MERR3:1;                   /**< bit:      3  Master 3 Access Error                    */
    uint32_t MERR4:1;                   /**< bit:      4  Master 4 Access Error                    */
    uint32_t MERR5:1;                   /**< bit:      5  Master 5 Access Error                    */
    uint32_t MERR6:1;                   /**< bit:      6  Master 6 Access Error                    */
    uint32_t MERR7:1;                   /**< bit:      7  Master 7 Access Error                    */
    uint32_t MERR8:1;                   /**< bit:      8  Master 8 Access Error                    */
    uint32_t MERR9:1;                   /**< bit:      9  Master 9 Access Error                    */
    uint32_t MERR10:1;                  /**< bit:     10  Master 10 Access Error                   */
    uint32_t MERR11:1;                  /**< bit:     11  Master 11 Access Error                   */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t MERR:12;                   /**< bit:  0..11  Master xx Access Error                   */
    uint32_t :20;                       /**< bit: 12..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} MATRIX_MEIMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MATRIX_MEIMR_OFFSET                 (0x158)                                       /**<  (MATRIX_MEIMR) Master Error Interrupt Mask Register  Offset */

#define MATRIX_MEIMR_MERR0_Pos              0                                              /**< (MATRIX_MEIMR) Master 0 Access Error Position */
#define MATRIX_MEIMR_MERR0_Msk              (_U_(0x1) << MATRIX_MEIMR_MERR0_Pos)           /**< (MATRIX_MEIMR) Master 0 Access Error Mask */
#define MATRIX_MEIMR_MERR0                  MATRIX_MEIMR_MERR0_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIMR_MERR0_Msk instead */
#define MATRIX_MEIMR_MERR1_Pos              1                                              /**< (MATRIX_MEIMR) Master 1 Access Error Position */
#define MATRIX_MEIMR_MERR1_Msk              (_U_(0x1) << MATRIX_MEIMR_MERR1_Pos)           /**< (MATRIX_MEIMR) Master 1 Access Error Mask */
#define MATRIX_MEIMR_MERR1                  MATRIX_MEIMR_MERR1_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIMR_MERR1_Msk instead */
#define MATRIX_MEIMR_MERR2_Pos              2                                              /**< (MATRIX_MEIMR) Master 2 Access Error Position */
#define MATRIX_MEIMR_MERR2_Msk              (_U_(0x1) << MATRIX_MEIMR_MERR2_Pos)           /**< (MATRIX_MEIMR) Master 2 Access Error Mask */
#define MATRIX_MEIMR_MERR2                  MATRIX_MEIMR_MERR2_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIMR_MERR2_Msk instead */
#define MATRIX_MEIMR_MERR3_Pos              3                                              /**< (MATRIX_MEIMR) Master 3 Access Error Position */
#define MATRIX_MEIMR_MERR3_Msk              (_U_(0x1) << MATRIX_MEIMR_MERR3_Pos)           /**< (MATRIX_MEIMR) Master 3 Access Error Mask */
#define MATRIX_MEIMR_MERR3                  MATRIX_MEIMR_MERR3_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIMR_MERR3_Msk instead */
#define MATRIX_MEIMR_MERR4_Pos              4                                              /**< (MATRIX_MEIMR) Master 4 Access Error Position */
#define MATRIX_MEIMR_MERR4_Msk              (_U_(0x1) << MATRIX_MEIMR_MERR4_Pos)           /**< (MATRIX_MEIMR) Master 4 Access Error Mask */
#define MATRIX_MEIMR_MERR4                  MATRIX_MEIMR_MERR4_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIMR_MERR4_Msk instead */
#define MATRIX_MEIMR_MERR5_Pos              5                                              /**< (MATRIX_MEIMR) Master 5 Access Error Position */
#define MATRIX_MEIMR_MERR5_Msk              (_U_(0x1) << MATRIX_MEIMR_MERR5_Pos)           /**< (MATRIX_MEIMR) Master 5 Access Error Mask */
#define MATRIX_MEIMR_MERR5                  MATRIX_MEIMR_MERR5_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIMR_MERR5_Msk instead */
#define MATRIX_MEIMR_MERR6_Pos              6                                              /**< (MATRIX_MEIMR) Master 6 Access Error Position */
#define MATRIX_MEIMR_MERR6_Msk              (_U_(0x1) << MATRIX_MEIMR_MERR6_Pos)           /**< (MATRIX_MEIMR) Master 6 Access Error Mask */
#define MATRIX_MEIMR_MERR6                  MATRIX_MEIMR_MERR6_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIMR_MERR6_Msk instead */
#define MATRIX_MEIMR_MERR7_Pos              7                                              /**< (MATRIX_MEIMR) Master 7 Access Error Position */
#define MATRIX_MEIMR_MERR7_Msk              (_U_(0x1) << MATRIX_MEIMR_MERR7_Pos)           /**< (MATRIX_MEIMR) Master 7 Access Error Mask */
#define MATRIX_MEIMR_MERR7                  MATRIX_MEIMR_MERR7_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIMR_MERR7_Msk instead */
#define MATRIX_MEIMR_MERR8_Pos              8                                              /**< (MATRIX_MEIMR) Master 8 Access Error Position */
#define MATRIX_MEIMR_MERR8_Msk              (_U_(0x1) << MATRIX_MEIMR_MERR8_Pos)           /**< (MATRIX_MEIMR) Master 8 Access Error Mask */
#define MATRIX_MEIMR_MERR8                  MATRIX_MEIMR_MERR8_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIMR_MERR8_Msk instead */
#define MATRIX_MEIMR_MERR9_Pos              9                                              /**< (MATRIX_MEIMR) Master 9 Access Error Position */
#define MATRIX_MEIMR_MERR9_Msk              (_U_(0x1) << MATRIX_MEIMR_MERR9_Pos)           /**< (MATRIX_MEIMR) Master 9 Access Error Mask */
#define MATRIX_MEIMR_MERR9                  MATRIX_MEIMR_MERR9_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIMR_MERR9_Msk instead */
#define MATRIX_MEIMR_MERR10_Pos             10                                             /**< (MATRIX_MEIMR) Master 10 Access Error Position */
#define MATRIX_MEIMR_MERR10_Msk             (_U_(0x1) << MATRIX_MEIMR_MERR10_Pos)          /**< (MATRIX_MEIMR) Master 10 Access Error Mask */
#define MATRIX_MEIMR_MERR10                 MATRIX_MEIMR_MERR10_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIMR_MERR10_Msk instead */
#define MATRIX_MEIMR_MERR11_Pos             11                                             /**< (MATRIX_MEIMR) Master 11 Access Error Position */
#define MATRIX_MEIMR_MERR11_Msk             (_U_(0x1) << MATRIX_MEIMR_MERR11_Pos)          /**< (MATRIX_MEIMR) Master 11 Access Error Mask */
#define MATRIX_MEIMR_MERR11                 MATRIX_MEIMR_MERR11_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MEIMR_MERR11_Msk instead */
#define MATRIX_MEIMR_MASK                   _U_(0xFFF)                                     /**< \deprecated (MATRIX_MEIMR) Register MASK  (Use MATRIX_MEIMR_Msk instead)  */
#define MATRIX_MEIMR_Msk                    _U_(0xFFF)                                     /**< (MATRIX_MEIMR) Register Mask  */

#define MATRIX_MEIMR_MERR_Pos               0                                              /**< (MATRIX_MEIMR Position) Master xx Access Error */
#define MATRIX_MEIMR_MERR_Msk               (_U_(0xFFF) << MATRIX_MEIMR_MERR_Pos)          /**< (MATRIX_MEIMR Mask) MERR */
#define MATRIX_MEIMR_MERR(value)            (MATRIX_MEIMR_MERR_Msk & ((value) << MATRIX_MEIMR_MERR_Pos))  

/* -------- MATRIX_MESR : (MATRIX Offset: 0x15c) (R/ 32) Master Error Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MERR0:1;                   /**< bit:      0  Master 0 Access Error                    */
    uint32_t MERR1:1;                   /**< bit:      1  Master 1 Access Error                    */
    uint32_t MERR2:1;                   /**< bit:      2  Master 2 Access Error                    */
    uint32_t MERR3:1;                   /**< bit:      3  Master 3 Access Error                    */
    uint32_t MERR4:1;                   /**< bit:      4  Master 4 Access Error                    */
    uint32_t MERR5:1;                   /**< bit:      5  Master 5 Access Error                    */
    uint32_t MERR6:1;                   /**< bit:      6  Master 6 Access Error                    */
    uint32_t MERR7:1;                   /**< bit:      7  Master 7 Access Error                    */
    uint32_t MERR8:1;                   /**< bit:      8  Master 8 Access Error                    */
    uint32_t MERR9:1;                   /**< bit:      9  Master 9 Access Error                    */
    uint32_t MERR10:1;                  /**< bit:     10  Master 10 Access Error                   */
    uint32_t MERR11:1;                  /**< bit:     11  Master 11 Access Error                   */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t MERR:12;                   /**< bit:  0..11  Master xx Access Error                   */
    uint32_t :20;                       /**< bit: 12..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} MATRIX_MESR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MATRIX_MESR_OFFSET                  (0x15C)                                       /**<  (MATRIX_MESR) Master Error Status Register  Offset */

#define MATRIX_MESR_MERR0_Pos               0                                              /**< (MATRIX_MESR) Master 0 Access Error Position */
#define MATRIX_MESR_MERR0_Msk               (_U_(0x1) << MATRIX_MESR_MERR0_Pos)            /**< (MATRIX_MESR) Master 0 Access Error Mask */
#define MATRIX_MESR_MERR0                   MATRIX_MESR_MERR0_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MESR_MERR0_Msk instead */
#define MATRIX_MESR_MERR1_Pos               1                                              /**< (MATRIX_MESR) Master 1 Access Error Position */
#define MATRIX_MESR_MERR1_Msk               (_U_(0x1) << MATRIX_MESR_MERR1_Pos)            /**< (MATRIX_MESR) Master 1 Access Error Mask */
#define MATRIX_MESR_MERR1                   MATRIX_MESR_MERR1_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MESR_MERR1_Msk instead */
#define MATRIX_MESR_MERR2_Pos               2                                              /**< (MATRIX_MESR) Master 2 Access Error Position */
#define MATRIX_MESR_MERR2_Msk               (_U_(0x1) << MATRIX_MESR_MERR2_Pos)            /**< (MATRIX_MESR) Master 2 Access Error Mask */
#define MATRIX_MESR_MERR2                   MATRIX_MESR_MERR2_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MESR_MERR2_Msk instead */
#define MATRIX_MESR_MERR3_Pos               3                                              /**< (MATRIX_MESR) Master 3 Access Error Position */
#define MATRIX_MESR_MERR3_Msk               (_U_(0x1) << MATRIX_MESR_MERR3_Pos)            /**< (MATRIX_MESR) Master 3 Access Error Mask */
#define MATRIX_MESR_MERR3                   MATRIX_MESR_MERR3_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MESR_MERR3_Msk instead */
#define MATRIX_MESR_MERR4_Pos               4                                              /**< (MATRIX_MESR) Master 4 Access Error Position */
#define MATRIX_MESR_MERR4_Msk               (_U_(0x1) << MATRIX_MESR_MERR4_Pos)            /**< (MATRIX_MESR) Master 4 Access Error Mask */
#define MATRIX_MESR_MERR4                   MATRIX_MESR_MERR4_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MESR_MERR4_Msk instead */
#define MATRIX_MESR_MERR5_Pos               5                                              /**< (MATRIX_MESR) Master 5 Access Error Position */
#define MATRIX_MESR_MERR5_Msk               (_U_(0x1) << MATRIX_MESR_MERR5_Pos)            /**< (MATRIX_MESR) Master 5 Access Error Mask */
#define MATRIX_MESR_MERR5                   MATRIX_MESR_MERR5_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MESR_MERR5_Msk instead */
#define MATRIX_MESR_MERR6_Pos               6                                              /**< (MATRIX_MESR) Master 6 Access Error Position */
#define MATRIX_MESR_MERR6_Msk               (_U_(0x1) << MATRIX_MESR_MERR6_Pos)            /**< (MATRIX_MESR) Master 6 Access Error Mask */
#define MATRIX_MESR_MERR6                   MATRIX_MESR_MERR6_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MESR_MERR6_Msk instead */
#define MATRIX_MESR_MERR7_Pos               7                                              /**< (MATRIX_MESR) Master 7 Access Error Position */
#define MATRIX_MESR_MERR7_Msk               (_U_(0x1) << MATRIX_MESR_MERR7_Pos)            /**< (MATRIX_MESR) Master 7 Access Error Mask */
#define MATRIX_MESR_MERR7                   MATRIX_MESR_MERR7_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MESR_MERR7_Msk instead */
#define MATRIX_MESR_MERR8_Pos               8                                              /**< (MATRIX_MESR) Master 8 Access Error Position */
#define MATRIX_MESR_MERR8_Msk               (_U_(0x1) << MATRIX_MESR_MERR8_Pos)            /**< (MATRIX_MESR) Master 8 Access Error Mask */
#define MATRIX_MESR_MERR8                   MATRIX_MESR_MERR8_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MESR_MERR8_Msk instead */
#define MATRIX_MESR_MERR9_Pos               9                                              /**< (MATRIX_MESR) Master 9 Access Error Position */
#define MATRIX_MESR_MERR9_Msk               (_U_(0x1) << MATRIX_MESR_MERR9_Pos)            /**< (MATRIX_MESR) Master 9 Access Error Mask */
#define MATRIX_MESR_MERR9                   MATRIX_MESR_MERR9_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MESR_MERR9_Msk instead */
#define MATRIX_MESR_MERR10_Pos              10                                             /**< (MATRIX_MESR) Master 10 Access Error Position */
#define MATRIX_MESR_MERR10_Msk              (_U_(0x1) << MATRIX_MESR_MERR10_Pos)           /**< (MATRIX_MESR) Master 10 Access Error Mask */
#define MATRIX_MESR_MERR10                  MATRIX_MESR_MERR10_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MESR_MERR10_Msk instead */
#define MATRIX_MESR_MERR11_Pos              11                                             /**< (MATRIX_MESR) Master 11 Access Error Position */
#define MATRIX_MESR_MERR11_Msk              (_U_(0x1) << MATRIX_MESR_MERR11_Pos)           /**< (MATRIX_MESR) Master 11 Access Error Mask */
#define MATRIX_MESR_MERR11                  MATRIX_MESR_MERR11_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_MESR_MERR11_Msk instead */
#define MATRIX_MESR_MASK                    _U_(0xFFF)                                     /**< \deprecated (MATRIX_MESR) Register MASK  (Use MATRIX_MESR_Msk instead)  */
#define MATRIX_MESR_Msk                     _U_(0xFFF)                                     /**< (MATRIX_MESR) Register Mask  */

#define MATRIX_MESR_MERR_Pos                0                                              /**< (MATRIX_MESR Position) Master xx Access Error */
#define MATRIX_MESR_MERR_Msk                (_U_(0xFFF) << MATRIX_MESR_MERR_Pos)           /**< (MATRIX_MESR Mask) MERR */
#define MATRIX_MESR_MERR(value)             (MATRIX_MESR_MERR_Msk & ((value) << MATRIX_MESR_MERR_Pos))  

/* -------- MATRIX_MEAR : (MATRIX Offset: 0x160) (R/ 32) Master 0 Error Address Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ERRADD:32;                 /**< bit:  0..31  Master Error Address                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MATRIX_MEAR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MATRIX_MEAR_OFFSET                  (0x160)                                       /**<  (MATRIX_MEAR) Master 0 Error Address Register  Offset */

#define MATRIX_MEAR_ERRADD_Pos              0                                              /**< (MATRIX_MEAR) Master Error Address Position */
#define MATRIX_MEAR_ERRADD_Msk              (_U_(0xFFFFFFFF) << MATRIX_MEAR_ERRADD_Pos)    /**< (MATRIX_MEAR) Master Error Address Mask */
#define MATRIX_MEAR_ERRADD(value)           (MATRIX_MEAR_ERRADD_Msk & ((value) << MATRIX_MEAR_ERRADD_Pos))
#define MATRIX_MEAR_MASK                    _U_(0xFFFFFFFF)                                /**< \deprecated (MATRIX_MEAR) Register MASK  (Use MATRIX_MEAR_Msk instead)  */
#define MATRIX_MEAR_Msk                     _U_(0xFFFFFFFF)                                /**< (MATRIX_MEAR) Register Mask  */


/* -------- MATRIX_WPMR : (MATRIX Offset: 0x1e4) (R/W 32) Write Protection Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPEN:1;                    /**< bit:      0  Write Protection Enable                  */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPKEY:24;                  /**< bit:  8..31  Write Protection Key (Write-only)        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MATRIX_WPMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MATRIX_WPMR_OFFSET                  (0x1E4)                                       /**<  (MATRIX_WPMR) Write Protection Mode Register  Offset */

#define MATRIX_WPMR_WPEN_Pos                0                                              /**< (MATRIX_WPMR) Write Protection Enable Position */
#define MATRIX_WPMR_WPEN_Msk                (_U_(0x1) << MATRIX_WPMR_WPEN_Pos)             /**< (MATRIX_WPMR) Write Protection Enable Mask */
#define MATRIX_WPMR_WPEN                    MATRIX_WPMR_WPEN_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_WPMR_WPEN_Msk instead */
#define MATRIX_WPMR_WPKEY_Pos               8                                              /**< (MATRIX_WPMR) Write Protection Key (Write-only) Position */
#define MATRIX_WPMR_WPKEY_Msk               (_U_(0xFFFFFF) << MATRIX_WPMR_WPKEY_Pos)       /**< (MATRIX_WPMR) Write Protection Key (Write-only) Mask */
#define MATRIX_WPMR_WPKEY(value)            (MATRIX_WPMR_WPKEY_Msk & ((value) << MATRIX_WPMR_WPKEY_Pos))
#define   MATRIX_WPMR_WPKEY_PASSWD_Val      _U_(0x4D4154)                                  /**< (MATRIX_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0.  */
#define MATRIX_WPMR_WPKEY_PASSWD            (MATRIX_WPMR_WPKEY_PASSWD_Val << MATRIX_WPMR_WPKEY_Pos)  /**< (MATRIX_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0. Position  */
#define MATRIX_WPMR_MASK                    _U_(0xFFFFFF01)                                /**< \deprecated (MATRIX_WPMR) Register MASK  (Use MATRIX_WPMR_Msk instead)  */
#define MATRIX_WPMR_Msk                     _U_(0xFFFFFF01)                                /**< (MATRIX_WPMR) Register Mask  */


/* -------- MATRIX_WPSR : (MATRIX Offset: 0x1e8) (R/ 32) Write Protection Status Register -------- */
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
} MATRIX_WPSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MATRIX_WPSR_OFFSET                  (0x1E8)                                       /**<  (MATRIX_WPSR) Write Protection Status Register  Offset */

#define MATRIX_WPSR_WPVS_Pos                0                                              /**< (MATRIX_WPSR) Write Protection Violation Status Position */
#define MATRIX_WPSR_WPVS_Msk                (_U_(0x1) << MATRIX_WPSR_WPVS_Pos)             /**< (MATRIX_WPSR) Write Protection Violation Status Mask */
#define MATRIX_WPSR_WPVS                    MATRIX_WPSR_WPVS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_WPSR_WPVS_Msk instead */
#define MATRIX_WPSR_WPVSRC_Pos              8                                              /**< (MATRIX_WPSR) Write Protection Violation Source Position */
#define MATRIX_WPSR_WPVSRC_Msk              (_U_(0xFFFF) << MATRIX_WPSR_WPVSRC_Pos)        /**< (MATRIX_WPSR) Write Protection Violation Source Mask */
#define MATRIX_WPSR_WPVSRC(value)           (MATRIX_WPSR_WPVSRC_Msk & ((value) << MATRIX_WPSR_WPVSRC_Pos))
#define MATRIX_WPSR_MASK                    _U_(0xFFFF01)                                  /**< \deprecated (MATRIX_WPSR) Register MASK  (Use MATRIX_WPSR_Msk instead)  */
#define MATRIX_WPSR_Msk                     _U_(0xFFFF01)                                  /**< (MATRIX_WPSR) Register Mask  */


/* -------- MATRIX_SSR : (MATRIX Offset: 0x200) (R/W 32) Security Slave 0 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t LANSECH0:1;                /**< bit:      0  Low Area Non-secured in HSELx Security Region */
    uint32_t LANSECH1:1;                /**< bit:      1  Low Area Non-secured in HSELx Security Region */
    uint32_t LANSECH2:1;                /**< bit:      2  Low Area Non-secured in HSELx Security Region */
    uint32_t LANSECH3:1;                /**< bit:      3  Low Area Non-secured in HSELx Security Region */
    uint32_t LANSECH4:1;                /**< bit:      4  Low Area Non-secured in HSELx Security Region */
    uint32_t LANSECH5:1;                /**< bit:      5  Low Area Non-secured in HSELx Security Region */
    uint32_t LANSECH6:1;                /**< bit:      6  Low Area Non-secured in HSELx Security Region */
    uint32_t LANSECH7:1;                /**< bit:      7  Low Area Non-secured in HSELx Security Region */
    uint32_t RDNSECH0:1;                /**< bit:      8  Read Non-secured for HSELx Security Region */
    uint32_t RDNSECH1:1;                /**< bit:      9  Read Non-secured for HSELx Security Region */
    uint32_t RDNSECH2:1;                /**< bit:     10  Read Non-secured for HSELx Security Region */
    uint32_t RDNSECH3:1;                /**< bit:     11  Read Non-secured for HSELx Security Region */
    uint32_t RDNSECH4:1;                /**< bit:     12  Read Non-secured for HSELx Security Region */
    uint32_t RDNSECH5:1;                /**< bit:     13  Read Non-secured for HSELx Security Region */
    uint32_t RDNSECH6:1;                /**< bit:     14  Read Non-secured for HSELx Security Region */
    uint32_t RDNSECH7:1;                /**< bit:     15  Read Non-secured for HSELx Security Region */
    uint32_t WRNSECH0:1;                /**< bit:     16  Write Non-secured for HSELx Security Region */
    uint32_t WRNSECH1:1;                /**< bit:     17  Write Non-secured for HSELx Security Region */
    uint32_t WRNSECH2:1;                /**< bit:     18  Write Non-secured for HSELx Security Region */
    uint32_t WRNSECH3:1;                /**< bit:     19  Write Non-secured for HSELx Security Region */
    uint32_t WRNSECH4:1;                /**< bit:     20  Write Non-secured for HSELx Security Region */
    uint32_t WRNSECH5:1;                /**< bit:     21  Write Non-secured for HSELx Security Region */
    uint32_t WRNSECH6:1;                /**< bit:     22  Write Non-secured for HSELx Security Region */
    uint32_t WRNSECH7:1;                /**< bit:     23  Write Non-secured for HSELx Security Region */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t LANSECH:8;                 /**< bit:   0..7  Low Area Non-secured in HSELx Security Region */
    uint32_t RDNSECH:8;                 /**< bit:  8..15  Read Non-secured for HSELx Security Region */
    uint32_t WRNSECH:8;                 /**< bit: 16..23  Write Non-secured for HSELx Security Region */
    uint32_t :8;                        /**< bit: 24..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} MATRIX_SSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MATRIX_SSR_OFFSET                   (0x200)                                       /**<  (MATRIX_SSR) Security Slave 0 Register  Offset */

#define MATRIX_SSR_LANSECH0_Pos             0                                              /**< (MATRIX_SSR) Low Area Non-secured in HSELx Security Region Position */
#define MATRIX_SSR_LANSECH0_Msk             (_U_(0x1) << MATRIX_SSR_LANSECH0_Pos)          /**< (MATRIX_SSR) Low Area Non-secured in HSELx Security Region Mask */
#define MATRIX_SSR_LANSECH0                 MATRIX_SSR_LANSECH0_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_LANSECH0_Msk instead */
#define MATRIX_SSR_LANSECH1_Pos             1                                              /**< (MATRIX_SSR) Low Area Non-secured in HSELx Security Region Position */
#define MATRIX_SSR_LANSECH1_Msk             (_U_(0x1) << MATRIX_SSR_LANSECH1_Pos)          /**< (MATRIX_SSR) Low Area Non-secured in HSELx Security Region Mask */
#define MATRIX_SSR_LANSECH1                 MATRIX_SSR_LANSECH1_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_LANSECH1_Msk instead */
#define MATRIX_SSR_LANSECH2_Pos             2                                              /**< (MATRIX_SSR) Low Area Non-secured in HSELx Security Region Position */
#define MATRIX_SSR_LANSECH2_Msk             (_U_(0x1) << MATRIX_SSR_LANSECH2_Pos)          /**< (MATRIX_SSR) Low Area Non-secured in HSELx Security Region Mask */
#define MATRIX_SSR_LANSECH2                 MATRIX_SSR_LANSECH2_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_LANSECH2_Msk instead */
#define MATRIX_SSR_LANSECH3_Pos             3                                              /**< (MATRIX_SSR) Low Area Non-secured in HSELx Security Region Position */
#define MATRIX_SSR_LANSECH3_Msk             (_U_(0x1) << MATRIX_SSR_LANSECH3_Pos)          /**< (MATRIX_SSR) Low Area Non-secured in HSELx Security Region Mask */
#define MATRIX_SSR_LANSECH3                 MATRIX_SSR_LANSECH3_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_LANSECH3_Msk instead */
#define MATRIX_SSR_LANSECH4_Pos             4                                              /**< (MATRIX_SSR) Low Area Non-secured in HSELx Security Region Position */
#define MATRIX_SSR_LANSECH4_Msk             (_U_(0x1) << MATRIX_SSR_LANSECH4_Pos)          /**< (MATRIX_SSR) Low Area Non-secured in HSELx Security Region Mask */
#define MATRIX_SSR_LANSECH4                 MATRIX_SSR_LANSECH4_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_LANSECH4_Msk instead */
#define MATRIX_SSR_LANSECH5_Pos             5                                              /**< (MATRIX_SSR) Low Area Non-secured in HSELx Security Region Position */
#define MATRIX_SSR_LANSECH5_Msk             (_U_(0x1) << MATRIX_SSR_LANSECH5_Pos)          /**< (MATRIX_SSR) Low Area Non-secured in HSELx Security Region Mask */
#define MATRIX_SSR_LANSECH5                 MATRIX_SSR_LANSECH5_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_LANSECH5_Msk instead */
#define MATRIX_SSR_LANSECH6_Pos             6                                              /**< (MATRIX_SSR) Low Area Non-secured in HSELx Security Region Position */
#define MATRIX_SSR_LANSECH6_Msk             (_U_(0x1) << MATRIX_SSR_LANSECH6_Pos)          /**< (MATRIX_SSR) Low Area Non-secured in HSELx Security Region Mask */
#define MATRIX_SSR_LANSECH6                 MATRIX_SSR_LANSECH6_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_LANSECH6_Msk instead */
#define MATRIX_SSR_LANSECH7_Pos             7                                              /**< (MATRIX_SSR) Low Area Non-secured in HSELx Security Region Position */
#define MATRIX_SSR_LANSECH7_Msk             (_U_(0x1) << MATRIX_SSR_LANSECH7_Pos)          /**< (MATRIX_SSR) Low Area Non-secured in HSELx Security Region Mask */
#define MATRIX_SSR_LANSECH7                 MATRIX_SSR_LANSECH7_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_LANSECH7_Msk instead */
#define MATRIX_SSR_RDNSECH0_Pos             8                                              /**< (MATRIX_SSR) Read Non-secured for HSELx Security Region Position */
#define MATRIX_SSR_RDNSECH0_Msk             (_U_(0x1) << MATRIX_SSR_RDNSECH0_Pos)          /**< (MATRIX_SSR) Read Non-secured for HSELx Security Region Mask */
#define MATRIX_SSR_RDNSECH0                 MATRIX_SSR_RDNSECH0_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_RDNSECH0_Msk instead */
#define MATRIX_SSR_RDNSECH1_Pos             9                                              /**< (MATRIX_SSR) Read Non-secured for HSELx Security Region Position */
#define MATRIX_SSR_RDNSECH1_Msk             (_U_(0x1) << MATRIX_SSR_RDNSECH1_Pos)          /**< (MATRIX_SSR) Read Non-secured for HSELx Security Region Mask */
#define MATRIX_SSR_RDNSECH1                 MATRIX_SSR_RDNSECH1_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_RDNSECH1_Msk instead */
#define MATRIX_SSR_RDNSECH2_Pos             10                                             /**< (MATRIX_SSR) Read Non-secured for HSELx Security Region Position */
#define MATRIX_SSR_RDNSECH2_Msk             (_U_(0x1) << MATRIX_SSR_RDNSECH2_Pos)          /**< (MATRIX_SSR) Read Non-secured for HSELx Security Region Mask */
#define MATRIX_SSR_RDNSECH2                 MATRIX_SSR_RDNSECH2_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_RDNSECH2_Msk instead */
#define MATRIX_SSR_RDNSECH3_Pos             11                                             /**< (MATRIX_SSR) Read Non-secured for HSELx Security Region Position */
#define MATRIX_SSR_RDNSECH3_Msk             (_U_(0x1) << MATRIX_SSR_RDNSECH3_Pos)          /**< (MATRIX_SSR) Read Non-secured for HSELx Security Region Mask */
#define MATRIX_SSR_RDNSECH3                 MATRIX_SSR_RDNSECH3_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_RDNSECH3_Msk instead */
#define MATRIX_SSR_RDNSECH4_Pos             12                                             /**< (MATRIX_SSR) Read Non-secured for HSELx Security Region Position */
#define MATRIX_SSR_RDNSECH4_Msk             (_U_(0x1) << MATRIX_SSR_RDNSECH4_Pos)          /**< (MATRIX_SSR) Read Non-secured for HSELx Security Region Mask */
#define MATRIX_SSR_RDNSECH4                 MATRIX_SSR_RDNSECH4_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_RDNSECH4_Msk instead */
#define MATRIX_SSR_RDNSECH5_Pos             13                                             /**< (MATRIX_SSR) Read Non-secured for HSELx Security Region Position */
#define MATRIX_SSR_RDNSECH5_Msk             (_U_(0x1) << MATRIX_SSR_RDNSECH5_Pos)          /**< (MATRIX_SSR) Read Non-secured for HSELx Security Region Mask */
#define MATRIX_SSR_RDNSECH5                 MATRIX_SSR_RDNSECH5_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_RDNSECH5_Msk instead */
#define MATRIX_SSR_RDNSECH6_Pos             14                                             /**< (MATRIX_SSR) Read Non-secured for HSELx Security Region Position */
#define MATRIX_SSR_RDNSECH6_Msk             (_U_(0x1) << MATRIX_SSR_RDNSECH6_Pos)          /**< (MATRIX_SSR) Read Non-secured for HSELx Security Region Mask */
#define MATRIX_SSR_RDNSECH6                 MATRIX_SSR_RDNSECH6_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_RDNSECH6_Msk instead */
#define MATRIX_SSR_RDNSECH7_Pos             15                                             /**< (MATRIX_SSR) Read Non-secured for HSELx Security Region Position */
#define MATRIX_SSR_RDNSECH7_Msk             (_U_(0x1) << MATRIX_SSR_RDNSECH7_Pos)          /**< (MATRIX_SSR) Read Non-secured for HSELx Security Region Mask */
#define MATRIX_SSR_RDNSECH7                 MATRIX_SSR_RDNSECH7_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_RDNSECH7_Msk instead */
#define MATRIX_SSR_WRNSECH0_Pos             16                                             /**< (MATRIX_SSR) Write Non-secured for HSELx Security Region Position */
#define MATRIX_SSR_WRNSECH0_Msk             (_U_(0x1) << MATRIX_SSR_WRNSECH0_Pos)          /**< (MATRIX_SSR) Write Non-secured for HSELx Security Region Mask */
#define MATRIX_SSR_WRNSECH0                 MATRIX_SSR_WRNSECH0_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_WRNSECH0_Msk instead */
#define MATRIX_SSR_WRNSECH1_Pos             17                                             /**< (MATRIX_SSR) Write Non-secured for HSELx Security Region Position */
#define MATRIX_SSR_WRNSECH1_Msk             (_U_(0x1) << MATRIX_SSR_WRNSECH1_Pos)          /**< (MATRIX_SSR) Write Non-secured for HSELx Security Region Mask */
#define MATRIX_SSR_WRNSECH1                 MATRIX_SSR_WRNSECH1_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_WRNSECH1_Msk instead */
#define MATRIX_SSR_WRNSECH2_Pos             18                                             /**< (MATRIX_SSR) Write Non-secured for HSELx Security Region Position */
#define MATRIX_SSR_WRNSECH2_Msk             (_U_(0x1) << MATRIX_SSR_WRNSECH2_Pos)          /**< (MATRIX_SSR) Write Non-secured for HSELx Security Region Mask */
#define MATRIX_SSR_WRNSECH2                 MATRIX_SSR_WRNSECH2_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_WRNSECH2_Msk instead */
#define MATRIX_SSR_WRNSECH3_Pos             19                                             /**< (MATRIX_SSR) Write Non-secured for HSELx Security Region Position */
#define MATRIX_SSR_WRNSECH3_Msk             (_U_(0x1) << MATRIX_SSR_WRNSECH3_Pos)          /**< (MATRIX_SSR) Write Non-secured for HSELx Security Region Mask */
#define MATRIX_SSR_WRNSECH3                 MATRIX_SSR_WRNSECH3_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_WRNSECH3_Msk instead */
#define MATRIX_SSR_WRNSECH4_Pos             20                                             /**< (MATRIX_SSR) Write Non-secured for HSELx Security Region Position */
#define MATRIX_SSR_WRNSECH4_Msk             (_U_(0x1) << MATRIX_SSR_WRNSECH4_Pos)          /**< (MATRIX_SSR) Write Non-secured for HSELx Security Region Mask */
#define MATRIX_SSR_WRNSECH4                 MATRIX_SSR_WRNSECH4_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_WRNSECH4_Msk instead */
#define MATRIX_SSR_WRNSECH5_Pos             21                                             /**< (MATRIX_SSR) Write Non-secured for HSELx Security Region Position */
#define MATRIX_SSR_WRNSECH5_Msk             (_U_(0x1) << MATRIX_SSR_WRNSECH5_Pos)          /**< (MATRIX_SSR) Write Non-secured for HSELx Security Region Mask */
#define MATRIX_SSR_WRNSECH5                 MATRIX_SSR_WRNSECH5_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_WRNSECH5_Msk instead */
#define MATRIX_SSR_WRNSECH6_Pos             22                                             /**< (MATRIX_SSR) Write Non-secured for HSELx Security Region Position */
#define MATRIX_SSR_WRNSECH6_Msk             (_U_(0x1) << MATRIX_SSR_WRNSECH6_Pos)          /**< (MATRIX_SSR) Write Non-secured for HSELx Security Region Mask */
#define MATRIX_SSR_WRNSECH6                 MATRIX_SSR_WRNSECH6_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_WRNSECH6_Msk instead */
#define MATRIX_SSR_WRNSECH7_Pos             23                                             /**< (MATRIX_SSR) Write Non-secured for HSELx Security Region Position */
#define MATRIX_SSR_WRNSECH7_Msk             (_U_(0x1) << MATRIX_SSR_WRNSECH7_Pos)          /**< (MATRIX_SSR) Write Non-secured for HSELx Security Region Mask */
#define MATRIX_SSR_WRNSECH7                 MATRIX_SSR_WRNSECH7_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SSR_WRNSECH7_Msk instead */
#define MATRIX_SSR_MASK                     _U_(0xFFFFFF)                                  /**< \deprecated (MATRIX_SSR) Register MASK  (Use MATRIX_SSR_Msk instead)  */
#define MATRIX_SSR_Msk                      _U_(0xFFFFFF)                                  /**< (MATRIX_SSR) Register Mask  */

#define MATRIX_SSR_LANSECH_Pos              0                                              /**< (MATRIX_SSR Position) Low Area Non-secured in HSELx Security Region */
#define MATRIX_SSR_LANSECH_Msk              (_U_(0xFF) << MATRIX_SSR_LANSECH_Pos)          /**< (MATRIX_SSR Mask) LANSECH */
#define MATRIX_SSR_LANSECH(value)           (MATRIX_SSR_LANSECH_Msk & ((value) << MATRIX_SSR_LANSECH_Pos))  
#define MATRIX_SSR_RDNSECH_Pos              8                                              /**< (MATRIX_SSR Position) Read Non-secured for HSELx Security Region */
#define MATRIX_SSR_RDNSECH_Msk              (_U_(0xFF) << MATRIX_SSR_RDNSECH_Pos)          /**< (MATRIX_SSR Mask) RDNSECH */
#define MATRIX_SSR_RDNSECH(value)           (MATRIX_SSR_RDNSECH_Msk & ((value) << MATRIX_SSR_RDNSECH_Pos))  
#define MATRIX_SSR_WRNSECH_Pos              16                                             /**< (MATRIX_SSR Position) Write Non-secured for HSELx Security Region */
#define MATRIX_SSR_WRNSECH_Msk              (_U_(0xFF) << MATRIX_SSR_WRNSECH_Pos)          /**< (MATRIX_SSR Mask) WRNSECH */
#define MATRIX_SSR_WRNSECH(value)           (MATRIX_SSR_WRNSECH_Msk & ((value) << MATRIX_SSR_WRNSECH_Pos))  

/* -------- MATRIX_SASSR : (MATRIX Offset: 0x240) (R/W 32) Security Areas Split Slave 0 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SASPLIT0:4;                /**< bit:   0..3  Security Areas Split for HSELx Security Region */
    uint32_t SASPLIT1:4;                /**< bit:   4..7  Security Areas Split for HSELx Security Region */
    uint32_t SASPLIT2:4;                /**< bit:  8..11  Security Areas Split for HSELx Security Region */
    uint32_t SASPLIT3:4;                /**< bit: 12..15  Security Areas Split for HSELx Security Region */
    uint32_t SASPLIT4:4;                /**< bit: 16..19  Security Areas Split for HSELx Security Region */
    uint32_t SASPLIT5:4;                /**< bit: 20..23  Security Areas Split for HSELx Security Region */
    uint32_t SASPLIT6:4;                /**< bit: 24..27  Security Areas Split for HSELx Security Region */
    uint32_t SASPLIT7:4;                /**< bit: 28..31  Security Areas Split for HSELx Security Region */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MATRIX_SASSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MATRIX_SASSR_OFFSET                 (0x240)                                       /**<  (MATRIX_SASSR) Security Areas Split Slave 0 Register  Offset */

#define MATRIX_SASSR_SASPLIT0_Pos           0                                              /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Position */
#define MATRIX_SASSR_SASPLIT0_Msk           (_U_(0xF) << MATRIX_SASSR_SASPLIT0_Pos)        /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Mask */
#define MATRIX_SASSR_SASPLIT0(value)        (MATRIX_SASSR_SASPLIT0_Msk & ((value) << MATRIX_SASSR_SASPLIT0_Pos))
#define MATRIX_SASSR_SASPLIT1_Pos           4                                              /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Position */
#define MATRIX_SASSR_SASPLIT1_Msk           (_U_(0xF) << MATRIX_SASSR_SASPLIT1_Pos)        /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Mask */
#define MATRIX_SASSR_SASPLIT1(value)        (MATRIX_SASSR_SASPLIT1_Msk & ((value) << MATRIX_SASSR_SASPLIT1_Pos))
#define MATRIX_SASSR_SASPLIT2_Pos           8                                              /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Position */
#define MATRIX_SASSR_SASPLIT2_Msk           (_U_(0xF) << MATRIX_SASSR_SASPLIT2_Pos)        /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Mask */
#define MATRIX_SASSR_SASPLIT2(value)        (MATRIX_SASSR_SASPLIT2_Msk & ((value) << MATRIX_SASSR_SASPLIT2_Pos))
#define MATRIX_SASSR_SASPLIT3_Pos           12                                             /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Position */
#define MATRIX_SASSR_SASPLIT3_Msk           (_U_(0xF) << MATRIX_SASSR_SASPLIT3_Pos)        /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Mask */
#define MATRIX_SASSR_SASPLIT3(value)        (MATRIX_SASSR_SASPLIT3_Msk & ((value) << MATRIX_SASSR_SASPLIT3_Pos))
#define MATRIX_SASSR_SASPLIT4_Pos           16                                             /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Position */
#define MATRIX_SASSR_SASPLIT4_Msk           (_U_(0xF) << MATRIX_SASSR_SASPLIT4_Pos)        /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Mask */
#define MATRIX_SASSR_SASPLIT4(value)        (MATRIX_SASSR_SASPLIT4_Msk & ((value) << MATRIX_SASSR_SASPLIT4_Pos))
#define MATRIX_SASSR_SASPLIT5_Pos           20                                             /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Position */
#define MATRIX_SASSR_SASPLIT5_Msk           (_U_(0xF) << MATRIX_SASSR_SASPLIT5_Pos)        /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Mask */
#define MATRIX_SASSR_SASPLIT5(value)        (MATRIX_SASSR_SASPLIT5_Msk & ((value) << MATRIX_SASSR_SASPLIT5_Pos))
#define MATRIX_SASSR_SASPLIT6_Pos           24                                             /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Position */
#define MATRIX_SASSR_SASPLIT6_Msk           (_U_(0xF) << MATRIX_SASSR_SASPLIT6_Pos)        /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Mask */
#define MATRIX_SASSR_SASPLIT6(value)        (MATRIX_SASSR_SASPLIT6_Msk & ((value) << MATRIX_SASSR_SASPLIT6_Pos))
#define MATRIX_SASSR_SASPLIT7_Pos           28                                             /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Position */
#define MATRIX_SASSR_SASPLIT7_Msk           (_U_(0xF) << MATRIX_SASSR_SASPLIT7_Pos)        /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Mask */
#define MATRIX_SASSR_SASPLIT7(value)        (MATRIX_SASSR_SASPLIT7_Msk & ((value) << MATRIX_SASSR_SASPLIT7_Pos))
#define MATRIX_SASSR_MASK                   _U_(0xFFFFFFFF)                                /**< \deprecated (MATRIX_SASSR) Register MASK  (Use MATRIX_SASSR_Msk instead)  */
#define MATRIX_SASSR_Msk                    _U_(0xFFFFFFFF)                                /**< (MATRIX_SASSR) Register Mask  */


/* -------- MATRIX_SRTSR : (MATRIX Offset: 0x284) (R/W 32) Security Region Top Slave 1 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SRTOP0:4;                  /**< bit:   0..3  HSELx Security Region Top                */
    uint32_t SRTOP1:4;                  /**< bit:   4..7  HSELx Security Region Top                */
    uint32_t SRTOP2:4;                  /**< bit:  8..11  HSELx Security Region Top                */
    uint32_t SRTOP3:4;                  /**< bit: 12..15  HSELx Security Region Top                */
    uint32_t SRTOP4:4;                  /**< bit: 16..19  HSELx Security Region Top                */
    uint32_t SRTOP5:4;                  /**< bit: 20..23  HSELx Security Region Top                */
    uint32_t SRTOP6:4;                  /**< bit: 24..27  HSELx Security Region Top                */
    uint32_t SRTOP7:4;                  /**< bit: 28..31  HSELx Security Region Top                */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MATRIX_SRTSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MATRIX_SRTSR_OFFSET                 (0x284)                                       /**<  (MATRIX_SRTSR) Security Region Top Slave 1 Register  Offset */

#define MATRIX_SRTSR_SRTOP0_Pos             0                                              /**< (MATRIX_SRTSR) HSELx Security Region Top Position */
#define MATRIX_SRTSR_SRTOP0_Msk             (_U_(0xF) << MATRIX_SRTSR_SRTOP0_Pos)          /**< (MATRIX_SRTSR) HSELx Security Region Top Mask */
#define MATRIX_SRTSR_SRTOP0(value)          (MATRIX_SRTSR_SRTOP0_Msk & ((value) << MATRIX_SRTSR_SRTOP0_Pos))
#define MATRIX_SRTSR_SRTOP1_Pos             4                                              /**< (MATRIX_SRTSR) HSELx Security Region Top Position */
#define MATRIX_SRTSR_SRTOP1_Msk             (_U_(0xF) << MATRIX_SRTSR_SRTOP1_Pos)          /**< (MATRIX_SRTSR) HSELx Security Region Top Mask */
#define MATRIX_SRTSR_SRTOP1(value)          (MATRIX_SRTSR_SRTOP1_Msk & ((value) << MATRIX_SRTSR_SRTOP1_Pos))
#define MATRIX_SRTSR_SRTOP2_Pos             8                                              /**< (MATRIX_SRTSR) HSELx Security Region Top Position */
#define MATRIX_SRTSR_SRTOP2_Msk             (_U_(0xF) << MATRIX_SRTSR_SRTOP2_Pos)          /**< (MATRIX_SRTSR) HSELx Security Region Top Mask */
#define MATRIX_SRTSR_SRTOP2(value)          (MATRIX_SRTSR_SRTOP2_Msk & ((value) << MATRIX_SRTSR_SRTOP2_Pos))
#define MATRIX_SRTSR_SRTOP3_Pos             12                                             /**< (MATRIX_SRTSR) HSELx Security Region Top Position */
#define MATRIX_SRTSR_SRTOP3_Msk             (_U_(0xF) << MATRIX_SRTSR_SRTOP3_Pos)          /**< (MATRIX_SRTSR) HSELx Security Region Top Mask */
#define MATRIX_SRTSR_SRTOP3(value)          (MATRIX_SRTSR_SRTOP3_Msk & ((value) << MATRIX_SRTSR_SRTOP3_Pos))
#define MATRIX_SRTSR_SRTOP4_Pos             16                                             /**< (MATRIX_SRTSR) HSELx Security Region Top Position */
#define MATRIX_SRTSR_SRTOP4_Msk             (_U_(0xF) << MATRIX_SRTSR_SRTOP4_Pos)          /**< (MATRIX_SRTSR) HSELx Security Region Top Mask */
#define MATRIX_SRTSR_SRTOP4(value)          (MATRIX_SRTSR_SRTOP4_Msk & ((value) << MATRIX_SRTSR_SRTOP4_Pos))
#define MATRIX_SRTSR_SRTOP5_Pos             20                                             /**< (MATRIX_SRTSR) HSELx Security Region Top Position */
#define MATRIX_SRTSR_SRTOP5_Msk             (_U_(0xF) << MATRIX_SRTSR_SRTOP5_Pos)          /**< (MATRIX_SRTSR) HSELx Security Region Top Mask */
#define MATRIX_SRTSR_SRTOP5(value)          (MATRIX_SRTSR_SRTOP5_Msk & ((value) << MATRIX_SRTSR_SRTOP5_Pos))
#define MATRIX_SRTSR_SRTOP6_Pos             24                                             /**< (MATRIX_SRTSR) HSELx Security Region Top Position */
#define MATRIX_SRTSR_SRTOP6_Msk             (_U_(0xF) << MATRIX_SRTSR_SRTOP6_Pos)          /**< (MATRIX_SRTSR) HSELx Security Region Top Mask */
#define MATRIX_SRTSR_SRTOP6(value)          (MATRIX_SRTSR_SRTOP6_Msk & ((value) << MATRIX_SRTSR_SRTOP6_Pos))
#define MATRIX_SRTSR_SRTOP7_Pos             28                                             /**< (MATRIX_SRTSR) HSELx Security Region Top Position */
#define MATRIX_SRTSR_SRTOP7_Msk             (_U_(0xF) << MATRIX_SRTSR_SRTOP7_Pos)          /**< (MATRIX_SRTSR) HSELx Security Region Top Mask */
#define MATRIX_SRTSR_SRTOP7(value)          (MATRIX_SRTSR_SRTOP7_Msk & ((value) << MATRIX_SRTSR_SRTOP7_Pos))
#define MATRIX_SRTSR_MASK                   _U_(0xFFFFFFFF)                                /**< \deprecated (MATRIX_SRTSR) Register MASK  (Use MATRIX_SRTSR_Msk instead)  */
#define MATRIX_SRTSR_Msk                    _U_(0xFFFFFFFF)                                /**< (MATRIX_SRTSR) Register Mask  */


/* -------- MATRIX_SPSELR : (MATRIX Offset: 0x2c0) (R/W 32) Security Peripheral Select 1 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NSECP0:1;                  /**< bit:      0  Non-secured Peripheral                   */
    uint32_t NSECP1:1;                  /**< bit:      1  Non-secured Peripheral                   */
    uint32_t NSECP2:1;                  /**< bit:      2  Non-secured Peripheral                   */
    uint32_t NSECP3:1;                  /**< bit:      3  Non-secured Peripheral                   */
    uint32_t NSECP4:1;                  /**< bit:      4  Non-secured Peripheral                   */
    uint32_t NSECP5:1;                  /**< bit:      5  Non-secured Peripheral                   */
    uint32_t NSECP6:1;                  /**< bit:      6  Non-secured Peripheral                   */
    uint32_t NSECP7:1;                  /**< bit:      7  Non-secured Peripheral                   */
    uint32_t NSECP8:1;                  /**< bit:      8  Non-secured Peripheral                   */
    uint32_t NSECP9:1;                  /**< bit:      9  Non-secured Peripheral                   */
    uint32_t NSECP10:1;                 /**< bit:     10  Non-secured Peripheral                   */
    uint32_t NSECP11:1;                 /**< bit:     11  Non-secured Peripheral                   */
    uint32_t NSECP12:1;                 /**< bit:     12  Non-secured Peripheral                   */
    uint32_t NSECP13:1;                 /**< bit:     13  Non-secured Peripheral                   */
    uint32_t NSECP14:1;                 /**< bit:     14  Non-secured Peripheral                   */
    uint32_t NSECP15:1;                 /**< bit:     15  Non-secured Peripheral                   */
    uint32_t NSECP16:1;                 /**< bit:     16  Non-secured Peripheral                   */
    uint32_t NSECP17:1;                 /**< bit:     17  Non-secured Peripheral                   */
    uint32_t NSECP18:1;                 /**< bit:     18  Non-secured Peripheral                   */
    uint32_t NSECP19:1;                 /**< bit:     19  Non-secured Peripheral                   */
    uint32_t NSECP20:1;                 /**< bit:     20  Non-secured Peripheral                   */
    uint32_t NSECP21:1;                 /**< bit:     21  Non-secured Peripheral                   */
    uint32_t NSECP22:1;                 /**< bit:     22  Non-secured Peripheral                   */
    uint32_t NSECP23:1;                 /**< bit:     23  Non-secured Peripheral                   */
    uint32_t NSECP24:1;                 /**< bit:     24  Non-secured Peripheral                   */
    uint32_t NSECP25:1;                 /**< bit:     25  Non-secured Peripheral                   */
    uint32_t NSECP26:1;                 /**< bit:     26  Non-secured Peripheral                   */
    uint32_t NSECP27:1;                 /**< bit:     27  Non-secured Peripheral                   */
    uint32_t NSECP28:1;                 /**< bit:     28  Non-secured Peripheral                   */
    uint32_t NSECP29:1;                 /**< bit:     29  Non-secured Peripheral                   */
    uint32_t NSECP30:1;                 /**< bit:     30  Non-secured Peripheral                   */
    uint32_t NSECP31:1;                 /**< bit:     31  Non-secured Peripheral                   */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t NSECP:32;                  /**< bit:  0..31  Non-secured Peripheral                   */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} MATRIX_SPSELR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MATRIX_SPSELR_OFFSET                (0x2C0)                                       /**<  (MATRIX_SPSELR) Security Peripheral Select 1 Register  Offset */

#define MATRIX_SPSELR_NSECP0_Pos            0                                              /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP0_Msk            (_U_(0x1) << MATRIX_SPSELR_NSECP0_Pos)         /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP0                MATRIX_SPSELR_NSECP0_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP0_Msk instead */
#define MATRIX_SPSELR_NSECP1_Pos            1                                              /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP1_Msk            (_U_(0x1) << MATRIX_SPSELR_NSECP1_Pos)         /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP1                MATRIX_SPSELR_NSECP1_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP1_Msk instead */
#define MATRIX_SPSELR_NSECP2_Pos            2                                              /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP2_Msk            (_U_(0x1) << MATRIX_SPSELR_NSECP2_Pos)         /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP2                MATRIX_SPSELR_NSECP2_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP2_Msk instead */
#define MATRIX_SPSELR_NSECP3_Pos            3                                              /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP3_Msk            (_U_(0x1) << MATRIX_SPSELR_NSECP3_Pos)         /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP3                MATRIX_SPSELR_NSECP3_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP3_Msk instead */
#define MATRIX_SPSELR_NSECP4_Pos            4                                              /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP4_Msk            (_U_(0x1) << MATRIX_SPSELR_NSECP4_Pos)         /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP4                MATRIX_SPSELR_NSECP4_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP4_Msk instead */
#define MATRIX_SPSELR_NSECP5_Pos            5                                              /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP5_Msk            (_U_(0x1) << MATRIX_SPSELR_NSECP5_Pos)         /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP5                MATRIX_SPSELR_NSECP5_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP5_Msk instead */
#define MATRIX_SPSELR_NSECP6_Pos            6                                              /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP6_Msk            (_U_(0x1) << MATRIX_SPSELR_NSECP6_Pos)         /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP6                MATRIX_SPSELR_NSECP6_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP6_Msk instead */
#define MATRIX_SPSELR_NSECP7_Pos            7                                              /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP7_Msk            (_U_(0x1) << MATRIX_SPSELR_NSECP7_Pos)         /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP7                MATRIX_SPSELR_NSECP7_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP7_Msk instead */
#define MATRIX_SPSELR_NSECP8_Pos            8                                              /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP8_Msk            (_U_(0x1) << MATRIX_SPSELR_NSECP8_Pos)         /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP8                MATRIX_SPSELR_NSECP8_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP8_Msk instead */
#define MATRIX_SPSELR_NSECP9_Pos            9                                              /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP9_Msk            (_U_(0x1) << MATRIX_SPSELR_NSECP9_Pos)         /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP9                MATRIX_SPSELR_NSECP9_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP9_Msk instead */
#define MATRIX_SPSELR_NSECP10_Pos           10                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP10_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP10_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP10               MATRIX_SPSELR_NSECP10_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP10_Msk instead */
#define MATRIX_SPSELR_NSECP11_Pos           11                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP11_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP11_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP11               MATRIX_SPSELR_NSECP11_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP11_Msk instead */
#define MATRIX_SPSELR_NSECP12_Pos           12                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP12_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP12_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP12               MATRIX_SPSELR_NSECP12_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP12_Msk instead */
#define MATRIX_SPSELR_NSECP13_Pos           13                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP13_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP13_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP13               MATRIX_SPSELR_NSECP13_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP13_Msk instead */
#define MATRIX_SPSELR_NSECP14_Pos           14                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP14_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP14_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP14               MATRIX_SPSELR_NSECP14_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP14_Msk instead */
#define MATRIX_SPSELR_NSECP15_Pos           15                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP15_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP15_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP15               MATRIX_SPSELR_NSECP15_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP15_Msk instead */
#define MATRIX_SPSELR_NSECP16_Pos           16                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP16_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP16_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP16               MATRIX_SPSELR_NSECP16_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP16_Msk instead */
#define MATRIX_SPSELR_NSECP17_Pos           17                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP17_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP17_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP17               MATRIX_SPSELR_NSECP17_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP17_Msk instead */
#define MATRIX_SPSELR_NSECP18_Pos           18                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP18_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP18_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP18               MATRIX_SPSELR_NSECP18_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP18_Msk instead */
#define MATRIX_SPSELR_NSECP19_Pos           19                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP19_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP19_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP19               MATRIX_SPSELR_NSECP19_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP19_Msk instead */
#define MATRIX_SPSELR_NSECP20_Pos           20                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP20_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP20_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP20               MATRIX_SPSELR_NSECP20_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP20_Msk instead */
#define MATRIX_SPSELR_NSECP21_Pos           21                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP21_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP21_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP21               MATRIX_SPSELR_NSECP21_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP21_Msk instead */
#define MATRIX_SPSELR_NSECP22_Pos           22                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP22_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP22_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP22               MATRIX_SPSELR_NSECP22_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP22_Msk instead */
#define MATRIX_SPSELR_NSECP23_Pos           23                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP23_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP23_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP23               MATRIX_SPSELR_NSECP23_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP23_Msk instead */
#define MATRIX_SPSELR_NSECP24_Pos           24                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP24_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP24_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP24               MATRIX_SPSELR_NSECP24_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP24_Msk instead */
#define MATRIX_SPSELR_NSECP25_Pos           25                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP25_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP25_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP25               MATRIX_SPSELR_NSECP25_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP25_Msk instead */
#define MATRIX_SPSELR_NSECP26_Pos           26                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP26_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP26_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP26               MATRIX_SPSELR_NSECP26_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP26_Msk instead */
#define MATRIX_SPSELR_NSECP27_Pos           27                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP27_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP27_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP27               MATRIX_SPSELR_NSECP27_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP27_Msk instead */
#define MATRIX_SPSELR_NSECP28_Pos           28                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP28_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP28_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP28               MATRIX_SPSELR_NSECP28_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP28_Msk instead */
#define MATRIX_SPSELR_NSECP29_Pos           29                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP29_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP29_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP29               MATRIX_SPSELR_NSECP29_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP29_Msk instead */
#define MATRIX_SPSELR_NSECP30_Pos           30                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP30_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP30_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP30               MATRIX_SPSELR_NSECP30_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP30_Msk instead */
#define MATRIX_SPSELR_NSECP31_Pos           31                                             /**< (MATRIX_SPSELR) Non-secured Peripheral Position */
#define MATRIX_SPSELR_NSECP31_Msk           (_U_(0x1) << MATRIX_SPSELR_NSECP31_Pos)        /**< (MATRIX_SPSELR) Non-secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP31               MATRIX_SPSELR_NSECP31_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use MATRIX_SPSELR_NSECP31_Msk instead */
#define MATRIX_SPSELR_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (MATRIX_SPSELR) Register MASK  (Use MATRIX_SPSELR_Msk instead)  */
#define MATRIX_SPSELR_Msk                   _U_(0xFFFFFFFF)                                /**< (MATRIX_SPSELR) Register Mask  */

#define MATRIX_SPSELR_NSECP_Pos             0                                              /**< (MATRIX_SPSELR Position) Non-secured Peripheral */
#define MATRIX_SPSELR_NSECP_Msk             (_U_(0xFFFFFFFF) << MATRIX_SPSELR_NSECP_Pos)   /**< (MATRIX_SPSELR Mask) NSECP */
#define MATRIX_SPSELR_NSECP(value)          (MATRIX_SPSELR_NSECP_Msk & ((value) << MATRIX_SPSELR_NSECP_Pos))  

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief MATRIX_PR hardware registers */
typedef struct {  
  __IO uint32_t MATRIX_PRAS;    /**< (MATRIX_PR Offset: 0x00) Priority Register A for Slave 0 */
  __IO uint32_t MATRIX_PRBS;    /**< (MATRIX_PR Offset: 0x04) Priority Register B for Slave 0 */
} MatrixPr;

#define MATRIXPR_NUMBER 15
/** \brief MATRIX hardware registers */
typedef struct {  
  __IO uint32_t MATRIX_MCFG[12]; /**< (MATRIX Offset: 0x00) Master Configuration Register */
  __I  uint8_t                        Reserved1[16];
  __IO uint32_t MATRIX_SCFG[15]; /**< (MATRIX Offset: 0x40) Slave Configuration Register */
  __I  uint8_t                        Reserved2[4];
       MatrixPr MatrixPr[MATRIXPR_NUMBER]; /**< Offset: 0x80  */
  __I  uint8_t                        Reserved3[88];
  __O  uint32_t MATRIX_MEIER;   /**< (MATRIX Offset: 0x150) Master Error Interrupt Enable Register */
  __O  uint32_t MATRIX_MEIDR;   /**< (MATRIX Offset: 0x154) Master Error Interrupt Disable Register */
  __I  uint32_t MATRIX_MEIMR;   /**< (MATRIX Offset: 0x158) Master Error Interrupt Mask Register */
  __I  uint32_t MATRIX_MESR;    /**< (MATRIX Offset: 0x15C) Master Error Status Register */
  __I  uint32_t MATRIX_MEAR[12]; /**< (MATRIX Offset: 0x160) Master 0 Error Address Register */
  __I  uint8_t                        Reserved4[84];
  __IO uint32_t MATRIX_WPMR;    /**< (MATRIX Offset: 0x1E4) Write Protection Mode Register */
  __I  uint32_t MATRIX_WPSR;    /**< (MATRIX Offset: 0x1E8) Write Protection Status Register */
  __I  uint8_t                        Reserved5[20];
  __IO uint32_t MATRIX_SSR[15]; /**< (MATRIX Offset: 0x200) Security Slave 0 Register */
  __I  uint8_t                        Reserved6[4];
  __IO uint32_t MATRIX_SASSR[15]; /**< (MATRIX Offset: 0x240) Security Areas Split Slave 0 Register */
  __I  uint8_t                        Reserved7[8];
  __IO uint32_t MATRIX_SRTSR[14]; /**< (MATRIX Offset: 0x284) Security Region Top Slave 1 Register */
  __I  uint8_t                        Reserved8[4];
  __IO uint32_t MATRIX_SPSELR[3]; /**< (MATRIX Offset: 0x2C0) Security Peripheral Select 1 Register */
} Matrix;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief MATRIX_PR hardware registers */
typedef struct {  
  __IO MATRIX_PRAS_Type               MATRIX_PRAS;    /**< Offset: 0x00 (R/W  32) Priority Register A for Slave 0 */
  __IO MATRIX_PRBS_Type               MATRIX_PRBS;    /**< Offset: 0x04 (R/W  32) Priority Register B for Slave 0 */
} MatrixPr;

/** \brief MATRIX hardware registers */
typedef struct {  
  __IO MATRIX_MCFG_Type               MATRIX_MCFG[12]; /**< Offset: 0x00 (R/W  32) Master Configuration Register */
  __I  uint8_t                        Reserved1[16];
  __IO MATRIX_SCFG_Type               MATRIX_SCFG[15]; /**< Offset: 0x40 (R/W  32) Slave Configuration Register */
  __I  uint8_t                        Reserved2[4];
       MatrixPr                       MatrixPr[15];   /**< Offset: 0x80  */
  __I  uint8_t                        Reserved3[88];
  __O  MATRIX_MEIER_Type              MATRIX_MEIER;   /**< Offset: 0x150 ( /W  32) Master Error Interrupt Enable Register */
  __O  MATRIX_MEIDR_Type              MATRIX_MEIDR;   /**< Offset: 0x154 ( /W  32) Master Error Interrupt Disable Register */
  __I  MATRIX_MEIMR_Type              MATRIX_MEIMR;   /**< Offset: 0x158 (R/   32) Master Error Interrupt Mask Register */
  __I  MATRIX_MESR_Type               MATRIX_MESR;    /**< Offset: 0x15C (R/   32) Master Error Status Register */
  __I  MATRIX_MEAR_Type               MATRIX_MEAR[12]; /**< Offset: 0x160 (R/   32) Master 0 Error Address Register */
  __I  uint8_t                        Reserved4[84];
  __IO MATRIX_WPMR_Type               MATRIX_WPMR;    /**< Offset: 0x1E4 (R/W  32) Write Protection Mode Register */
  __I  MATRIX_WPSR_Type               MATRIX_WPSR;    /**< Offset: 0x1E8 (R/   32) Write Protection Status Register */
  __I  uint8_t                        Reserved5[20];
  __IO MATRIX_SSR_Type                MATRIX_SSR[15]; /**< Offset: 0x200 (R/W  32) Security Slave 0 Register */
  __I  uint8_t                        Reserved6[4];
  __IO MATRIX_SASSR_Type              MATRIX_SASSR[15]; /**< Offset: 0x240 (R/W  32) Security Areas Split Slave 0 Register */
  __I  uint8_t                        Reserved7[8];
  __IO MATRIX_SRTSR_Type              MATRIX_SRTSR[14]; /**< Offset: 0x284 (R/W  32) Security Region Top Slave 1 Register */
  __I  uint8_t                        Reserved8[4];
  __IO MATRIX_SPSELR_Type             MATRIX_SPSELR[3]; /**< Offset: 0x2C0 (R/W  32) Security Peripheral Select 1 Register */
} Matrix;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of AHB Bus Matrix */

#endif /* _SAMA5D2_MATRIX_COMPONENT_H_ */
