/**
 * \brief Component description for MATRIX
 *
 * Copyright (c) 2019 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2018-07-03T15:18:44Z */
#ifndef _SAMG51_MATRIX_COMPONENT_H_
#define _SAMG51_MATRIX_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR MATRIX                                       */
/* ************************************************************************** */

/* -------- MATRIX_MCFG : (MATRIX Offset: 0x00) (R/W 32) Master Configuration Register 0 -------- */
#define MATRIX_MCFG_ULBT_Pos                  _U_(0)                                               /**< (MATRIX_MCFG) Undefined Length Burst Type Position */
#define MATRIX_MCFG_ULBT_Msk                  (_U_(0x7) << MATRIX_MCFG_ULBT_Pos)                   /**< (MATRIX_MCFG) Undefined Length Burst Type Mask */
#define MATRIX_MCFG_ULBT(value)               (MATRIX_MCFG_ULBT_Msk & ((value) << MATRIX_MCFG_ULBT_Pos))
#define   MATRIX_MCFG_ULBT_INFINITE_Val       _U_(0x0)                                             /**< (MATRIX_MCFG) No predicted end of burst is generated and therefore INCR bursts coming from this master cannot be broken.  */
#define   MATRIX_MCFG_ULBT_SINGLE_Val         _U_(0x1)                                             /**< (MATRIX_MCFG) The undefined length burst is treated as a succession of single access allowing rearbitration at each beat of the INCR burst.  */
#define   MATRIX_MCFG_ULBT_FOUR_BEAT_Val      _U_(0x2)                                             /**< (MATRIX_MCFG) The undefined length burst is split into a 4-beat bursts allowing rearbitration at each 4-beat burst end.  */
#define   MATRIX_MCFG_ULBT_EIGHT_BEAT_Val     _U_(0x3)                                             /**< (MATRIX_MCFG) The undefined length burst is split into 8-beat bursts allowing rearbitration at each 8-beat burst end.  */
#define   MATRIX_MCFG_ULBT_SIXTEEN_BEAT_Val   _U_(0x4)                                             /**< (MATRIX_MCFG) The undefined length burst is split into 16-beat bursts allowing rearbitration at each 16-beat burst end.  */
#define MATRIX_MCFG_ULBT_INFINITE             (MATRIX_MCFG_ULBT_INFINITE_Val << MATRIX_MCFG_ULBT_Pos) /**< (MATRIX_MCFG) No predicted end of burst is generated and therefore INCR bursts coming from this master cannot be broken. Position  */
#define MATRIX_MCFG_ULBT_SINGLE               (MATRIX_MCFG_ULBT_SINGLE_Val << MATRIX_MCFG_ULBT_Pos) /**< (MATRIX_MCFG) The undefined length burst is treated as a succession of single access allowing rearbitration at each beat of the INCR burst. Position  */
#define MATRIX_MCFG_ULBT_FOUR_BEAT            (MATRIX_MCFG_ULBT_FOUR_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /**< (MATRIX_MCFG) The undefined length burst is split into a 4-beat bursts allowing rearbitration at each 4-beat burst end. Position  */
#define MATRIX_MCFG_ULBT_EIGHT_BEAT           (MATRIX_MCFG_ULBT_EIGHT_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /**< (MATRIX_MCFG) The undefined length burst is split into 8-beat bursts allowing rearbitration at each 8-beat burst end. Position  */
#define MATRIX_MCFG_ULBT_SIXTEEN_BEAT         (MATRIX_MCFG_ULBT_SIXTEEN_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /**< (MATRIX_MCFG) The undefined length burst is split into 16-beat bursts allowing rearbitration at each 16-beat burst end. Position  */
#define MATRIX_MCFG_Msk                       _U_(0x00000007)                                      /**< (MATRIX_MCFG) Register Mask  */


/* -------- MATRIX_SCFG : (MATRIX Offset: 0x40) (R/W 32) Slave Configuration Register 0 -------- */
#define MATRIX_SCFG_SLOT_CYCLE_Pos            _U_(0)                                               /**< (MATRIX_SCFG) Maximum Number of Allowed Cycles for a Burst Position */
#define MATRIX_SCFG_SLOT_CYCLE_Msk            (_U_(0xFF) << MATRIX_SCFG_SLOT_CYCLE_Pos)            /**< (MATRIX_SCFG) Maximum Number of Allowed Cycles for a Burst Mask */
#define MATRIX_SCFG_SLOT_CYCLE(value)         (MATRIX_SCFG_SLOT_CYCLE_Msk & ((value) << MATRIX_SCFG_SLOT_CYCLE_Pos))
#define MATRIX_SCFG_DEFMSTR_TYPE_Pos          _U_(16)                                              /**< (MATRIX_SCFG) Default Master Type Position */
#define MATRIX_SCFG_DEFMSTR_TYPE_Msk          (_U_(0x3) << MATRIX_SCFG_DEFMSTR_TYPE_Pos)           /**< (MATRIX_SCFG) Default Master Type Mask */
#define MATRIX_SCFG_DEFMSTR_TYPE(value)       (MATRIX_SCFG_DEFMSTR_TYPE_Msk & ((value) << MATRIX_SCFG_DEFMSTR_TYPE_Pos))
#define   MATRIX_SCFG_DEFMSTR_TYPE_NO_DEFAULT_Val _U_(0x0)                                             /**< (MATRIX_SCFG) At the end of current slave access, if no other master request is pending, the slave is disconnected from all masters.This results in having a one cycle latency for the first access of a burst transfer or for a single access.  */
#define   MATRIX_SCFG_DEFMSTR_TYPE_LAST_Val   _U_(0x1)                                             /**< (MATRIX_SCFG) At the end of current slave access, if no other master request is pending, the slave stays connected to the last master having accessed it.This results in not having the one cycle latency when the last master tries to access the slave again.  */
#define   MATRIX_SCFG_DEFMSTR_TYPE_FIXED_Val  _U_(0x2)                                             /**< (MATRIX_SCFG) At the end of the current slave access, if no other master request is pending, the slave connects to the fixed master the number that has been written in the FIXED_DEFMSTR field.This results in not having the one cycle latency when the fixed master tries to access the slave again.  */
#define MATRIX_SCFG_DEFMSTR_TYPE_NO_DEFAULT   (MATRIX_SCFG_DEFMSTR_TYPE_NO_DEFAULT_Val << MATRIX_SCFG_DEFMSTR_TYPE_Pos) /**< (MATRIX_SCFG) At the end of current slave access, if no other master request is pending, the slave is disconnected from all masters.This results in having a one cycle latency for the first access of a burst transfer or for a single access. Position  */
#define MATRIX_SCFG_DEFMSTR_TYPE_LAST         (MATRIX_SCFG_DEFMSTR_TYPE_LAST_Val << MATRIX_SCFG_DEFMSTR_TYPE_Pos) /**< (MATRIX_SCFG) At the end of current slave access, if no other master request is pending, the slave stays connected to the last master having accessed it.This results in not having the one cycle latency when the last master tries to access the slave again. Position  */
#define MATRIX_SCFG_DEFMSTR_TYPE_FIXED        (MATRIX_SCFG_DEFMSTR_TYPE_FIXED_Val << MATRIX_SCFG_DEFMSTR_TYPE_Pos) /**< (MATRIX_SCFG) At the end of the current slave access, if no other master request is pending, the slave connects to the fixed master the number that has been written in the FIXED_DEFMSTR field.This results in not having the one cycle latency when the fixed master tries to access the slave again. Position  */
#define MATRIX_SCFG_FIXED_DEFMSTR_Pos         _U_(18)                                              /**< (MATRIX_SCFG) Fixed Default Master Position */
#define MATRIX_SCFG_FIXED_DEFMSTR_Msk         (_U_(0x7) << MATRIX_SCFG_FIXED_DEFMSTR_Pos)          /**< (MATRIX_SCFG) Fixed Default Master Mask */
#define MATRIX_SCFG_FIXED_DEFMSTR(value)      (MATRIX_SCFG_FIXED_DEFMSTR_Msk & ((value) << MATRIX_SCFG_FIXED_DEFMSTR_Pos))
#define MATRIX_SCFG_Msk                       _U_(0x001F00FF)                                      /**< (MATRIX_SCFG) Register Mask  */


/* -------- MATRIX_PRAS0 : (MATRIX Offset: 0x80) (R/W 32) Priority Register A for Slave 0 -------- */
#define MATRIX_PRAS0_M0PR_Pos                 _U_(0)                                               /**< (MATRIX_PRAS0) Master 0 Priority Position */
#define MATRIX_PRAS0_M0PR_Msk                 (_U_(0x3) << MATRIX_PRAS0_M0PR_Pos)                  /**< (MATRIX_PRAS0) Master 0 Priority Mask */
#define MATRIX_PRAS0_M0PR(value)              (MATRIX_PRAS0_M0PR_Msk & ((value) << MATRIX_PRAS0_M0PR_Pos))
#define MATRIX_PRAS0_M1PR_Pos                 _U_(4)                                               /**< (MATRIX_PRAS0) Master 1 Priority Position */
#define MATRIX_PRAS0_M1PR_Msk                 (_U_(0x3) << MATRIX_PRAS0_M1PR_Pos)                  /**< (MATRIX_PRAS0) Master 1 Priority Mask */
#define MATRIX_PRAS0_M1PR(value)              (MATRIX_PRAS0_M1PR_Msk & ((value) << MATRIX_PRAS0_M1PR_Pos))
#define MATRIX_PRAS0_M2PR_Pos                 _U_(8)                                               /**< (MATRIX_PRAS0) Master 2 Priority Position */
#define MATRIX_PRAS0_M2PR_Msk                 (_U_(0x3) << MATRIX_PRAS0_M2PR_Pos)                  /**< (MATRIX_PRAS0) Master 2 Priority Mask */
#define MATRIX_PRAS0_M2PR(value)              (MATRIX_PRAS0_M2PR_Msk & ((value) << MATRIX_PRAS0_M2PR_Pos))
#define MATRIX_PRAS0_M3PR_Pos                 _U_(12)                                              /**< (MATRIX_PRAS0) Master 3 Priority Position */
#define MATRIX_PRAS0_M3PR_Msk                 (_U_(0x3) << MATRIX_PRAS0_M3PR_Pos)                  /**< (MATRIX_PRAS0) Master 3 Priority Mask */
#define MATRIX_PRAS0_M3PR(value)              (MATRIX_PRAS0_M3PR_Msk & ((value) << MATRIX_PRAS0_M3PR_Pos))
#define MATRIX_PRAS0_Msk                      _U_(0x00003333)                                      /**< (MATRIX_PRAS0) Register Mask  */


/* -------- MATRIX_PRAS1 : (MATRIX Offset: 0x88) (R/W 32) Priority Register A for Slave 1 -------- */
#define MATRIX_PRAS1_M0PR_Pos                 _U_(0)                                               /**< (MATRIX_PRAS1) Master 0 Priority Position */
#define MATRIX_PRAS1_M0PR_Msk                 (_U_(0x3) << MATRIX_PRAS1_M0PR_Pos)                  /**< (MATRIX_PRAS1) Master 0 Priority Mask */
#define MATRIX_PRAS1_M0PR(value)              (MATRIX_PRAS1_M0PR_Msk & ((value) << MATRIX_PRAS1_M0PR_Pos))
#define MATRIX_PRAS1_M1PR_Pos                 _U_(4)                                               /**< (MATRIX_PRAS1) Master 1 Priority Position */
#define MATRIX_PRAS1_M1PR_Msk                 (_U_(0x3) << MATRIX_PRAS1_M1PR_Pos)                  /**< (MATRIX_PRAS1) Master 1 Priority Mask */
#define MATRIX_PRAS1_M1PR(value)              (MATRIX_PRAS1_M1PR_Msk & ((value) << MATRIX_PRAS1_M1PR_Pos))
#define MATRIX_PRAS1_M2PR_Pos                 _U_(8)                                               /**< (MATRIX_PRAS1) Master 2 Priority Position */
#define MATRIX_PRAS1_M2PR_Msk                 (_U_(0x3) << MATRIX_PRAS1_M2PR_Pos)                  /**< (MATRIX_PRAS1) Master 2 Priority Mask */
#define MATRIX_PRAS1_M2PR(value)              (MATRIX_PRAS1_M2PR_Msk & ((value) << MATRIX_PRAS1_M2PR_Pos))
#define MATRIX_PRAS1_M3PR_Pos                 _U_(12)                                              /**< (MATRIX_PRAS1) Master 3 Priority Position */
#define MATRIX_PRAS1_M3PR_Msk                 (_U_(0x3) << MATRIX_PRAS1_M3PR_Pos)                  /**< (MATRIX_PRAS1) Master 3 Priority Mask */
#define MATRIX_PRAS1_M3PR(value)              (MATRIX_PRAS1_M3PR_Msk & ((value) << MATRIX_PRAS1_M3PR_Pos))
#define MATRIX_PRAS1_Msk                      _U_(0x00003333)                                      /**< (MATRIX_PRAS1) Register Mask  */


/* -------- MATRIX_PRAS2 : (MATRIX Offset: 0x90) (R/W 32) Priority Register A for Slave 2 -------- */
#define MATRIX_PRAS2_M0PR_Pos                 _U_(0)                                               /**< (MATRIX_PRAS2) Master 0 Priority Position */
#define MATRIX_PRAS2_M0PR_Msk                 (_U_(0x3) << MATRIX_PRAS2_M0PR_Pos)                  /**< (MATRIX_PRAS2) Master 0 Priority Mask */
#define MATRIX_PRAS2_M0PR(value)              (MATRIX_PRAS2_M0PR_Msk & ((value) << MATRIX_PRAS2_M0PR_Pos))
#define MATRIX_PRAS2_M1PR_Pos                 _U_(4)                                               /**< (MATRIX_PRAS2) Master 1 Priority Position */
#define MATRIX_PRAS2_M1PR_Msk                 (_U_(0x3) << MATRIX_PRAS2_M1PR_Pos)                  /**< (MATRIX_PRAS2) Master 1 Priority Mask */
#define MATRIX_PRAS2_M1PR(value)              (MATRIX_PRAS2_M1PR_Msk & ((value) << MATRIX_PRAS2_M1PR_Pos))
#define MATRIX_PRAS2_M2PR_Pos                 _U_(8)                                               /**< (MATRIX_PRAS2) Master 2 Priority Position */
#define MATRIX_PRAS2_M2PR_Msk                 (_U_(0x3) << MATRIX_PRAS2_M2PR_Pos)                  /**< (MATRIX_PRAS2) Master 2 Priority Mask */
#define MATRIX_PRAS2_M2PR(value)              (MATRIX_PRAS2_M2PR_Msk & ((value) << MATRIX_PRAS2_M2PR_Pos))
#define MATRIX_PRAS2_M3PR_Pos                 _U_(12)                                              /**< (MATRIX_PRAS2) Master 3 Priority Position */
#define MATRIX_PRAS2_M3PR_Msk                 (_U_(0x3) << MATRIX_PRAS2_M3PR_Pos)                  /**< (MATRIX_PRAS2) Master 3 Priority Mask */
#define MATRIX_PRAS2_M3PR(value)              (MATRIX_PRAS2_M3PR_Msk & ((value) << MATRIX_PRAS2_M3PR_Pos))
#define MATRIX_PRAS2_Msk                      _U_(0x00003333)                                      /**< (MATRIX_PRAS2) Register Mask  */


/* -------- MATRIX_PRAS3 : (MATRIX Offset: 0x98) (R/W 32) Priority Register A for Slave 3 -------- */
#define MATRIX_PRAS3_M0PR_Pos                 _U_(0)                                               /**< (MATRIX_PRAS3) Master 0 Priority Position */
#define MATRIX_PRAS3_M0PR_Msk                 (_U_(0x3) << MATRIX_PRAS3_M0PR_Pos)                  /**< (MATRIX_PRAS3) Master 0 Priority Mask */
#define MATRIX_PRAS3_M0PR(value)              (MATRIX_PRAS3_M0PR_Msk & ((value) << MATRIX_PRAS3_M0PR_Pos))
#define MATRIX_PRAS3_M1PR_Pos                 _U_(4)                                               /**< (MATRIX_PRAS3) Master 1 Priority Position */
#define MATRIX_PRAS3_M1PR_Msk                 (_U_(0x3) << MATRIX_PRAS3_M1PR_Pos)                  /**< (MATRIX_PRAS3) Master 1 Priority Mask */
#define MATRIX_PRAS3_M1PR(value)              (MATRIX_PRAS3_M1PR_Msk & ((value) << MATRIX_PRAS3_M1PR_Pos))
#define MATRIX_PRAS3_M2PR_Pos                 _U_(8)                                               /**< (MATRIX_PRAS3) Master 2 Priority Position */
#define MATRIX_PRAS3_M2PR_Msk                 (_U_(0x3) << MATRIX_PRAS3_M2PR_Pos)                  /**< (MATRIX_PRAS3) Master 2 Priority Mask */
#define MATRIX_PRAS3_M2PR(value)              (MATRIX_PRAS3_M2PR_Msk & ((value) << MATRIX_PRAS3_M2PR_Pos))
#define MATRIX_PRAS3_M3PR_Pos                 _U_(12)                                              /**< (MATRIX_PRAS3) Master 3 Priority Position */
#define MATRIX_PRAS3_M3PR_Msk                 (_U_(0x3) << MATRIX_PRAS3_M3PR_Pos)                  /**< (MATRIX_PRAS3) Master 3 Priority Mask */
#define MATRIX_PRAS3_M3PR(value)              (MATRIX_PRAS3_M3PR_Msk & ((value) << MATRIX_PRAS3_M3PR_Pos))
#define MATRIX_PRAS3_Msk                      _U_(0x00003333)                                      /**< (MATRIX_PRAS3) Register Mask  */


/* -------- CCFG_SYSIO : (MATRIX Offset: 0x114) (R/W 32) System I/O Configuration Register -------- */
#define CCFG_SYSIO_SYSIO4_Pos                 _U_(4)                                               /**< (CCFG_SYSIO) PB4 or TDI Assignment Position */
#define CCFG_SYSIO_SYSIO4_Msk                 (_U_(0x1) << CCFG_SYSIO_SYSIO4_Pos)                  /**< (CCFG_SYSIO) PB4 or TDI Assignment Mask */
#define CCFG_SYSIO_SYSIO4(value)              (CCFG_SYSIO_SYSIO4_Msk & ((value) << CCFG_SYSIO_SYSIO4_Pos))
#define CCFG_SYSIO_SYSIO5_Pos                 _U_(5)                                               /**< (CCFG_SYSIO) PB5 or TDO/TRACESWO Assignment Position */
#define CCFG_SYSIO_SYSIO5_Msk                 (_U_(0x1) << CCFG_SYSIO_SYSIO5_Pos)                  /**< (CCFG_SYSIO) PB5 or TDO/TRACESWO Assignment Mask */
#define CCFG_SYSIO_SYSIO5(value)              (CCFG_SYSIO_SYSIO5_Msk & ((value) << CCFG_SYSIO_SYSIO5_Pos))
#define CCFG_SYSIO_SYSIO6_Pos                 _U_(6)                                               /**< (CCFG_SYSIO) PB6 or TMS/SWDIO Assignment Position */
#define CCFG_SYSIO_SYSIO6_Msk                 (_U_(0x1) << CCFG_SYSIO_SYSIO6_Pos)                  /**< (CCFG_SYSIO) PB6 or TMS/SWDIO Assignment Mask */
#define CCFG_SYSIO_SYSIO6(value)              (CCFG_SYSIO_SYSIO6_Msk & ((value) << CCFG_SYSIO_SYSIO6_Pos))
#define CCFG_SYSIO_SYSIO7_Pos                 _U_(7)                                               /**< (CCFG_SYSIO) PB7 or TCK/SWCLK Assignment Position */
#define CCFG_SYSIO_SYSIO7_Msk                 (_U_(0x1) << CCFG_SYSIO_SYSIO7_Pos)                  /**< (CCFG_SYSIO) PB7 or TCK/SWCLK Assignment Mask */
#define CCFG_SYSIO_SYSIO7(value)              (CCFG_SYSIO_SYSIO7_Msk & ((value) << CCFG_SYSIO_SYSIO7_Pos))
#define CCFG_SYSIO_SYSIO12_Pos                _U_(12)                                              /**< (CCFG_SYSIO) PB12 or ERASE Assignment Position */
#define CCFG_SYSIO_SYSIO12_Msk                (_U_(0x1) << CCFG_SYSIO_SYSIO12_Pos)                 /**< (CCFG_SYSIO) PB12 or ERASE Assignment Mask */
#define CCFG_SYSIO_SYSIO12(value)             (CCFG_SYSIO_SYSIO12_Msk & ((value) << CCFG_SYSIO_SYSIO12_Pos))
#define CCFG_SYSIO_Msk                        _U_(0x000010F0)                                      /**< (CCFG_SYSIO) Register Mask  */

#define CCFG_SYSIO_SYSIO_Pos                  _U_(4)                                               /**< (CCFG_SYSIO Position) PBx2 or ERASE Assignment */
#define CCFG_SYSIO_SYSIO_Msk                  (_U_(0x1F) << CCFG_SYSIO_SYSIO_Pos)                  /**< (CCFG_SYSIO Mask) SYSIO */
#define CCFG_SYSIO_SYSIO(value)               (CCFG_SYSIO_SYSIO_Msk & ((value) << CCFG_SYSIO_SYSIO_Pos)) 

/* -------- MATRIX_WPMR : (MATRIX Offset: 0x1E4) (R/W 32) Write Protection Mode Register -------- */
#define MATRIX_WPMR_WPEN_Pos                  _U_(0)                                               /**< (MATRIX_WPMR) Write Protection Enable Position */
#define MATRIX_WPMR_WPEN_Msk                  (_U_(0x1) << MATRIX_WPMR_WPEN_Pos)                   /**< (MATRIX_WPMR) Write Protection Enable Mask */
#define MATRIX_WPMR_WPEN(value)               (MATRIX_WPMR_WPEN_Msk & ((value) << MATRIX_WPMR_WPEN_Pos))
#define MATRIX_WPMR_WPKEY_Pos                 _U_(8)                                               /**< (MATRIX_WPMR) Write Protection Key Position */
#define MATRIX_WPMR_WPKEY_Msk                 (_U_(0xFFFFFF) << MATRIX_WPMR_WPKEY_Pos)             /**< (MATRIX_WPMR) Write Protection Key Mask */
#define MATRIX_WPMR_WPKEY(value)              (MATRIX_WPMR_WPKEY_Msk & ((value) << MATRIX_WPMR_WPKEY_Pos))
#define   MATRIX_WPMR_WPKEY_PASSWD_Val        _U_(0x4D4154)                                        /**< (MATRIX_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define MATRIX_WPMR_WPKEY_PASSWD              (MATRIX_WPMR_WPKEY_PASSWD_Val << MATRIX_WPMR_WPKEY_Pos) /**< (MATRIX_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define MATRIX_WPMR_Msk                       _U_(0xFFFFFF01)                                      /**< (MATRIX_WPMR) Register Mask  */


/* -------- MATRIX_WPSR : (MATRIX Offset: 0x1E8) ( R/ 32) Write Protection Status Register -------- */
#define MATRIX_WPSR_WPVS_Pos                  _U_(0)                                               /**< (MATRIX_WPSR) Write Protection Violation Status Position */
#define MATRIX_WPSR_WPVS_Msk                  (_U_(0x1) << MATRIX_WPSR_WPVS_Pos)                   /**< (MATRIX_WPSR) Write Protection Violation Status Mask */
#define MATRIX_WPSR_WPVS(value)               (MATRIX_WPSR_WPVS_Msk & ((value) << MATRIX_WPSR_WPVS_Pos))
#define MATRIX_WPSR_WPVSRC_Pos                _U_(8)                                               /**< (MATRIX_WPSR) Write Protection Violation Source Position */
#define MATRIX_WPSR_WPVSRC_Msk                (_U_(0xFFFF) << MATRIX_WPSR_WPVSRC_Pos)              /**< (MATRIX_WPSR) Write Protection Violation Source Mask */
#define MATRIX_WPSR_WPVSRC(value)             (MATRIX_WPSR_WPVSRC_Msk & ((value) << MATRIX_WPSR_WPVSRC_Pos))
#define MATRIX_WPSR_Msk                       _U_(0x00FFFF01)                                      /**< (MATRIX_WPSR) Register Mask  */


/** \brief MATRIX register offsets definitions */
#define MATRIX_MCFG_REG_OFST           (0x00)              /**< (MATRIX_MCFG) Master Configuration Register 0 Offset */
#define MATRIX_SCFG_REG_OFST           (0x40)              /**< (MATRIX_SCFG) Slave Configuration Register 0 Offset */
#define MATRIX_PRAS0_REG_OFST          (0x80)              /**< (MATRIX_PRAS0) Priority Register A for Slave 0 Offset */
#define MATRIX_PRAS1_REG_OFST          (0x88)              /**< (MATRIX_PRAS1) Priority Register A for Slave 1 Offset */
#define MATRIX_PRAS2_REG_OFST          (0x90)              /**< (MATRIX_PRAS2) Priority Register A for Slave 2 Offset */
#define MATRIX_PRAS3_REG_OFST          (0x98)              /**< (MATRIX_PRAS3) Priority Register A for Slave 3 Offset */
#define CCFG_SYSIO_REG_OFST            (0x114)             /**< (CCFG_SYSIO) System I/O Configuration Register Offset */
#define MATRIX_WPMR_REG_OFST           (0x1E4)             /**< (MATRIX_WPMR) Write Protection Mode Register Offset */
#define MATRIX_WPSR_REG_OFST           (0x1E8)             /**< (MATRIX_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief MATRIX register API structure */
typedef struct
{
  __IO  uint32_t                       MATRIX_MCFG[3];     /**< Offset: 0x00 (R/W  32) Master Configuration Register 0 */
  __I   uint8_t                        Reserved1[0x34];
  __IO  uint32_t                       MATRIX_SCFG[4];     /**< Offset: 0x40 (R/W  32) Slave Configuration Register 0 */
  __I   uint8_t                        Reserved2[0x30];
  __IO  uint32_t                       MATRIX_PRAS0;       /**< Offset: 0x80 (R/W  32) Priority Register A for Slave 0 */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint32_t                       MATRIX_PRAS1;       /**< Offset: 0x88 (R/W  32) Priority Register A for Slave 1 */
  __I   uint8_t                        Reserved4[0x04];
  __IO  uint32_t                       MATRIX_PRAS2;       /**< Offset: 0x90 (R/W  32) Priority Register A for Slave 2 */
  __I   uint8_t                        Reserved5[0x04];
  __IO  uint32_t                       MATRIX_PRAS3;       /**< Offset: 0x98 (R/W  32) Priority Register A for Slave 3 */
  __I   uint8_t                        Reserved6[0x78];
  __IO  uint32_t                       CCFG_SYSIO;         /**< Offset: 0x114 (R/W  32) System I/O Configuration Register */
  __I   uint8_t                        Reserved7[0xCC];
  __IO  uint32_t                       MATRIX_WPMR;        /**< Offset: 0x1E4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       MATRIX_WPSR;        /**< Offset: 0x1E8 (R/   32) Write Protection Status Register */
} matrix_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMG51_MATRIX_COMPONENT_H_ */
