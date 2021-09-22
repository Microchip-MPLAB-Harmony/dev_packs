/*
 * Component description for FUSES
 *
 * Copyright (c) 2021 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description version 2021-05-04T16:48:28Z */
#ifndef _SAMRH71_FUSES_COMPONENT_H_
#define _SAMRH71_FUSES_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR FUSES                                        */
/* ************************************************************************** */

/* -------- FUSES_USER_WORD_0 : (FUSES Offset: 0x00) (R/W 32) USER Page Word 0 -------- */
#define FUSES_USER_WORD_0_DEBUG_INTF_Pos      _U_(1)                                               /**< (FUSES_USER_WORD_0) Debug interface Selection Position */
#define FUSES_USER_WORD_0_DEBUG_INTF_Msk      (_U_(0x1) << FUSES_USER_WORD_0_DEBUG_INTF_Pos)       /**< (FUSES_USER_WORD_0) Debug interface Selection Mask */
#define FUSES_USER_WORD_0_DEBUG_INTF(value)   (FUSES_USER_WORD_0_DEBUG_INTF_Msk & ((value) << FUSES_USER_WORD_0_DEBUG_INTF_Pos))
#define   FUSES_USER_WORD_0_DEBUG_INTF_JTAG_Val _U_(0x0)                                             /**< (FUSES_USER_WORD_0) JTAG  */
#define   FUSES_USER_WORD_0_DEBUG_INTF_SWD_Val _U_(0x1)                                             /**< (FUSES_USER_WORD_0) SWD  */
#define FUSES_USER_WORD_0_DEBUG_INTF_JTAG     (FUSES_USER_WORD_0_DEBUG_INTF_JTAG_Val << FUSES_USER_WORD_0_DEBUG_INTF_Pos) /**< (FUSES_USER_WORD_0) JTAG Position  */
#define FUSES_USER_WORD_0_DEBUG_INTF_SWD      (FUSES_USER_WORD_0_DEBUG_INTF_SWD_Val << FUSES_USER_WORD_0_DEBUG_INTF_Pos) /**< (FUSES_USER_WORD_0) SWD Position  */
#define FUSES_USER_WORD_0_PFD_TRIM_Pos        _U_(8)                                               /**< (FUSES_USER_WORD_0) PFD Trim value Position */
#define FUSES_USER_WORD_0_PFD_TRIM_Msk        (_U_(0x7) << FUSES_USER_WORD_0_PFD_TRIM_Pos)         /**< (FUSES_USER_WORD_0) PFD Trim value Mask */
#define FUSES_USER_WORD_0_PFD_TRIM(value)     (FUSES_USER_WORD_0_PFD_TRIM_Msk & ((value) << FUSES_USER_WORD_0_PFD_TRIM_Pos))
#define FUSES_USER_WORD_0_Msk                 _U_(0x00000702)                                      /**< (FUSES_USER_WORD_0) Register Mask  */


/* -------- FUSES_USER_WORD_1 : (FUSES Offset: 0x04) (R/W 32) USER Page Word 1 -------- */
#define FUSES_USER_WORD_1_RC_TTRIM_Pos        _U_(0)                                               /**< (FUSES_USER_WORD_1) RC Temperature Trim Position */
#define FUSES_USER_WORD_1_RC_TTRIM_Msk        (_U_(0x3) << FUSES_USER_WORD_1_RC_TTRIM_Pos)         /**< (FUSES_USER_WORD_1) RC Temperature Trim Mask */
#define FUSES_USER_WORD_1_RC_TTRIM(value)     (FUSES_USER_WORD_1_RC_TTRIM_Msk & ((value) << FUSES_USER_WORD_1_RC_TTRIM_Pos))
#define FUSES_USER_WORD_1_RC2_TTRIM_Pos       _U_(2)                                               /**< (FUSES_USER_WORD_1) RC2 Temperature Trim Position */
#define FUSES_USER_WORD_1_RC2_TTRIM_Msk       (_U_(0x3) << FUSES_USER_WORD_1_RC2_TTRIM_Pos)        /**< (FUSES_USER_WORD_1) RC2 Temperature Trim Mask */
#define FUSES_USER_WORD_1_RC2_TTRIM(value)    (FUSES_USER_WORD_1_RC2_TTRIM_Msk & ((value) << FUSES_USER_WORD_1_RC2_TTRIM_Pos))
#define FUSES_USER_WORD_1_RC_FTRIM_4MHZ_Pos   _U_(4)                                               /**< (FUSES_USER_WORD_1) RC Frequency Trim 4MHz Position */
#define FUSES_USER_WORD_1_RC_FTRIM_4MHZ_Msk   (_U_(0x7) << FUSES_USER_WORD_1_RC_FTRIM_4MHZ_Pos)    /**< (FUSES_USER_WORD_1) RC Frequency Trim 4MHz Mask */
#define FUSES_USER_WORD_1_RC_FTRIM_4MHZ(value) (FUSES_USER_WORD_1_RC_FTRIM_4MHZ_Msk & ((value) << FUSES_USER_WORD_1_RC_FTRIM_4MHZ_Pos))
#define FUSES_USER_WORD_1_RC_FTRIM_8MHZ_Pos   _U_(7)                                               /**< (FUSES_USER_WORD_1) RC Frequency Trim 8MHz Position */
#define FUSES_USER_WORD_1_RC_FTRIM_8MHZ_Msk   (_U_(0x7) << FUSES_USER_WORD_1_RC_FTRIM_8MHZ_Pos)    /**< (FUSES_USER_WORD_1) RC Frequency Trim 8MHz Mask */
#define FUSES_USER_WORD_1_RC_FTRIM_8MHZ(value) (FUSES_USER_WORD_1_RC_FTRIM_8MHZ_Msk & ((value) << FUSES_USER_WORD_1_RC_FTRIM_8MHZ_Pos))
#define FUSES_USER_WORD_1_RC_FTRIM_10MHZ_Pos  _U_(10)                                              /**< (FUSES_USER_WORD_1) RC Frequency Trim 10MHz Position */
#define FUSES_USER_WORD_1_RC_FTRIM_10MHZ_Msk  (_U_(0x7) << FUSES_USER_WORD_1_RC_FTRIM_10MHZ_Pos)   /**< (FUSES_USER_WORD_1) RC Frequency Trim 10MHz Mask */
#define FUSES_USER_WORD_1_RC_FTRIM_10MHZ(value) (FUSES_USER_WORD_1_RC_FTRIM_10MHZ_Msk & ((value) << FUSES_USER_WORD_1_RC_FTRIM_10MHZ_Pos))
#define FUSES_USER_WORD_1_RC_FTRIM_12MHZ_Pos  _U_(13)                                              /**< (FUSES_USER_WORD_1) RC Frequency Trim 12MHz Position */
#define FUSES_USER_WORD_1_RC_FTRIM_12MHZ_Msk  (_U_(0x7) << FUSES_USER_WORD_1_RC_FTRIM_12MHZ_Pos)   /**< (FUSES_USER_WORD_1) RC Frequency Trim 12MHz Mask */
#define FUSES_USER_WORD_1_RC_FTRIM_12MHZ(value) (FUSES_USER_WORD_1_RC_FTRIM_12MHZ_Msk & ((value) << FUSES_USER_WORD_1_RC_FTRIM_12MHZ_Pos))
#define FUSES_USER_WORD_1_RC2_FTRIM_4MHZ_Pos  _U_(16)                                              /**< (FUSES_USER_WORD_1) RC2 Frequency Trim 4MHz Position */
#define FUSES_USER_WORD_1_RC2_FTRIM_4MHZ_Msk  (_U_(0x7) << FUSES_USER_WORD_1_RC2_FTRIM_4MHZ_Pos)   /**< (FUSES_USER_WORD_1) RC2 Frequency Trim 4MHz Mask */
#define FUSES_USER_WORD_1_RC2_FTRIM_4MHZ(value) (FUSES_USER_WORD_1_RC2_FTRIM_4MHZ_Msk & ((value) << FUSES_USER_WORD_1_RC2_FTRIM_4MHZ_Pos))
#define FUSES_USER_WORD_1_RC2_FTRIM_8MHZ_Pos  _U_(19)                                              /**< (FUSES_USER_WORD_1) RC2 Frequency Trim 8MHz Position */
#define FUSES_USER_WORD_1_RC2_FTRIM_8MHZ_Msk  (_U_(0x7) << FUSES_USER_WORD_1_RC2_FTRIM_8MHZ_Pos)   /**< (FUSES_USER_WORD_1) RC2 Frequency Trim 8MHz Mask */
#define FUSES_USER_WORD_1_RC2_FTRIM_8MHZ(value) (FUSES_USER_WORD_1_RC2_FTRIM_8MHZ_Msk & ((value) << FUSES_USER_WORD_1_RC2_FTRIM_8MHZ_Pos))
#define FUSES_USER_WORD_1_RC2_FTRIM_10MHZ_Pos _U_(22)                                              /**< (FUSES_USER_WORD_1) RC2 Frequency Trim 10MHz Position */
#define FUSES_USER_WORD_1_RC2_FTRIM_10MHZ_Msk (_U_(0x7) << FUSES_USER_WORD_1_RC2_FTRIM_10MHZ_Pos)  /**< (FUSES_USER_WORD_1) RC2 Frequency Trim 10MHz Mask */
#define FUSES_USER_WORD_1_RC2_FTRIM_10MHZ(value) (FUSES_USER_WORD_1_RC2_FTRIM_10MHZ_Msk & ((value) << FUSES_USER_WORD_1_RC2_FTRIM_10MHZ_Pos))
#define FUSES_USER_WORD_1_RC2_FTRIM_12MHZ_Pos _U_(25)                                              /**< (FUSES_USER_WORD_1) RC2 Frequency Trim 12MHz Position */
#define FUSES_USER_WORD_1_RC2_FTRIM_12MHZ_Msk (_U_(0x7) << FUSES_USER_WORD_1_RC2_FTRIM_12MHZ_Pos)  /**< (FUSES_USER_WORD_1) RC2 Frequency Trim 12MHz Mask */
#define FUSES_USER_WORD_1_RC2_FTRIM_12MHZ(value) (FUSES_USER_WORD_1_RC2_FTRIM_12MHZ_Msk & ((value) << FUSES_USER_WORD_1_RC2_FTRIM_12MHZ_Pos))
#define FUSES_USER_WORD_1_Msk                 _U_(0x0FFFFFFF)                                      /**< (FUSES_USER_WORD_1) Register Mask  */


/* -------- FUSES_USER_WORD_2 : (FUSES Offset: 0x08) (R/W 32) USER Page Word 2 -------- */
#define FUSES_USER_WORD_2_RC_TTRIM_Pos        _U_(0)                                               /**< (FUSES_USER_WORD_2) RC Temperature Trim Position */
#define FUSES_USER_WORD_2_RC_TTRIM_Msk        (_U_(0x3) << FUSES_USER_WORD_2_RC_TTRIM_Pos)         /**< (FUSES_USER_WORD_2) RC Temperature Trim Mask */
#define FUSES_USER_WORD_2_RC_TTRIM(value)     (FUSES_USER_WORD_2_RC_TTRIM_Msk & ((value) << FUSES_USER_WORD_2_RC_TTRIM_Pos))
#define FUSES_USER_WORD_2_RC2_TTRIM_Pos       _U_(2)                                               /**< (FUSES_USER_WORD_2) RC2 Temperature Trim Position */
#define FUSES_USER_WORD_2_RC2_TTRIM_Msk       (_U_(0x3) << FUSES_USER_WORD_2_RC2_TTRIM_Pos)        /**< (FUSES_USER_WORD_2) RC2 Temperature Trim Mask */
#define FUSES_USER_WORD_2_RC2_TTRIM(value)    (FUSES_USER_WORD_2_RC2_TTRIM_Msk & ((value) << FUSES_USER_WORD_2_RC2_TTRIM_Pos))
#define FUSES_USER_WORD_2_RC_FTRIM_4MHZ_Pos   _U_(4)                                               /**< (FUSES_USER_WORD_2) RC Frequency Trim 4MHz Position */
#define FUSES_USER_WORD_2_RC_FTRIM_4MHZ_Msk   (_U_(0x7) << FUSES_USER_WORD_2_RC_FTRIM_4MHZ_Pos)    /**< (FUSES_USER_WORD_2) RC Frequency Trim 4MHz Mask */
#define FUSES_USER_WORD_2_RC_FTRIM_4MHZ(value) (FUSES_USER_WORD_2_RC_FTRIM_4MHZ_Msk & ((value) << FUSES_USER_WORD_2_RC_FTRIM_4MHZ_Pos))
#define FUSES_USER_WORD_2_RC_FTRIM_8MHZ_Pos   _U_(7)                                               /**< (FUSES_USER_WORD_2) RC Frequency Trim 8MHz Position */
#define FUSES_USER_WORD_2_RC_FTRIM_8MHZ_Msk   (_U_(0x7) << FUSES_USER_WORD_2_RC_FTRIM_8MHZ_Pos)    /**< (FUSES_USER_WORD_2) RC Frequency Trim 8MHz Mask */
#define FUSES_USER_WORD_2_RC_FTRIM_8MHZ(value) (FUSES_USER_WORD_2_RC_FTRIM_8MHZ_Msk & ((value) << FUSES_USER_WORD_2_RC_FTRIM_8MHZ_Pos))
#define FUSES_USER_WORD_2_RC_FTRIM_10MHZ_Pos  _U_(10)                                              /**< (FUSES_USER_WORD_2) RC Frequency Trim 10MHz Position */
#define FUSES_USER_WORD_2_RC_FTRIM_10MHZ_Msk  (_U_(0x7) << FUSES_USER_WORD_2_RC_FTRIM_10MHZ_Pos)   /**< (FUSES_USER_WORD_2) RC Frequency Trim 10MHz Mask */
#define FUSES_USER_WORD_2_RC_FTRIM_10MHZ(value) (FUSES_USER_WORD_2_RC_FTRIM_10MHZ_Msk & ((value) << FUSES_USER_WORD_2_RC_FTRIM_10MHZ_Pos))
#define FUSES_USER_WORD_2_RC_FTRIM_12MHZ_Pos  _U_(13)                                              /**< (FUSES_USER_WORD_2) RC Frequency Trim 12MHz Position */
#define FUSES_USER_WORD_2_RC_FTRIM_12MHZ_Msk  (_U_(0x7) << FUSES_USER_WORD_2_RC_FTRIM_12MHZ_Pos)   /**< (FUSES_USER_WORD_2) RC Frequency Trim 12MHz Mask */
#define FUSES_USER_WORD_2_RC_FTRIM_12MHZ(value) (FUSES_USER_WORD_2_RC_FTRIM_12MHZ_Msk & ((value) << FUSES_USER_WORD_2_RC_FTRIM_12MHZ_Pos))
#define FUSES_USER_WORD_2_RC2_FTRIM_4MHZ_Pos  _U_(16)                                              /**< (FUSES_USER_WORD_2) RC2 Frequency Trim 4MHz Position */
#define FUSES_USER_WORD_2_RC2_FTRIM_4MHZ_Msk  (_U_(0x7) << FUSES_USER_WORD_2_RC2_FTRIM_4MHZ_Pos)   /**< (FUSES_USER_WORD_2) RC2 Frequency Trim 4MHz Mask */
#define FUSES_USER_WORD_2_RC2_FTRIM_4MHZ(value) (FUSES_USER_WORD_2_RC2_FTRIM_4MHZ_Msk & ((value) << FUSES_USER_WORD_2_RC2_FTRIM_4MHZ_Pos))
#define FUSES_USER_WORD_2_RC2_FTRIM_8MHZ_Pos  _U_(19)                                              /**< (FUSES_USER_WORD_2) RC2 Frequency Trim 8MHz Position */
#define FUSES_USER_WORD_2_RC2_FTRIM_8MHZ_Msk  (_U_(0x7) << FUSES_USER_WORD_2_RC2_FTRIM_8MHZ_Pos)   /**< (FUSES_USER_WORD_2) RC2 Frequency Trim 8MHz Mask */
#define FUSES_USER_WORD_2_RC2_FTRIM_8MHZ(value) (FUSES_USER_WORD_2_RC2_FTRIM_8MHZ_Msk & ((value) << FUSES_USER_WORD_2_RC2_FTRIM_8MHZ_Pos))
#define FUSES_USER_WORD_2_RC2_FTRIM_10MHZ_Pos _U_(22)                                              /**< (FUSES_USER_WORD_2) RC2 Frequency Trim 10MHz Position */
#define FUSES_USER_WORD_2_RC2_FTRIM_10MHZ_Msk (_U_(0x7) << FUSES_USER_WORD_2_RC2_FTRIM_10MHZ_Pos)  /**< (FUSES_USER_WORD_2) RC2 Frequency Trim 10MHz Mask */
#define FUSES_USER_WORD_2_RC2_FTRIM_10MHZ(value) (FUSES_USER_WORD_2_RC2_FTRIM_10MHZ_Msk & ((value) << FUSES_USER_WORD_2_RC2_FTRIM_10MHZ_Pos))
#define FUSES_USER_WORD_2_RC2_FTRIM_12MHZ_Pos _U_(25)                                              /**< (FUSES_USER_WORD_2) RC2 Frequency Trim 12MHz Position */
#define FUSES_USER_WORD_2_RC2_FTRIM_12MHZ_Msk (_U_(0x7) << FUSES_USER_WORD_2_RC2_FTRIM_12MHZ_Pos)  /**< (FUSES_USER_WORD_2) RC2 Frequency Trim 12MHz Mask */
#define FUSES_USER_WORD_2_RC2_FTRIM_12MHZ(value) (FUSES_USER_WORD_2_RC2_FTRIM_12MHZ_Msk & ((value) << FUSES_USER_WORD_2_RC2_FTRIM_12MHZ_Pos))
#define FUSES_USER_WORD_2_Msk                 _U_(0x0FFFFFFF)                                      /**< (FUSES_USER_WORD_2) Register Mask  */


/* -------- FUSES_USER_WORD_3 : (FUSES Offset: 0x0C) (R/W 32) USER Page Word 3 -------- */
#define FUSES_USER_WORD_3_RC_TTRIM_Pos        _U_(0)                                               /**< (FUSES_USER_WORD_3) RC Temperature Trim Position */
#define FUSES_USER_WORD_3_RC_TTRIM_Msk        (_U_(0x3) << FUSES_USER_WORD_3_RC_TTRIM_Pos)         /**< (FUSES_USER_WORD_3) RC Temperature Trim Mask */
#define FUSES_USER_WORD_3_RC_TTRIM(value)     (FUSES_USER_WORD_3_RC_TTRIM_Msk & ((value) << FUSES_USER_WORD_3_RC_TTRIM_Pos))
#define FUSES_USER_WORD_3_RC2_TTRIM_Pos       _U_(2)                                               /**< (FUSES_USER_WORD_3) RC2 Temperature Trim Position */
#define FUSES_USER_WORD_3_RC2_TTRIM_Msk       (_U_(0x3) << FUSES_USER_WORD_3_RC2_TTRIM_Pos)        /**< (FUSES_USER_WORD_3) RC2 Temperature Trim Mask */
#define FUSES_USER_WORD_3_RC2_TTRIM(value)    (FUSES_USER_WORD_3_RC2_TTRIM_Msk & ((value) << FUSES_USER_WORD_3_RC2_TTRIM_Pos))
#define FUSES_USER_WORD_3_RC_FTRIM_4MHZ_Pos   _U_(4)                                               /**< (FUSES_USER_WORD_3) RC Frequency Trim 4MHz Position */
#define FUSES_USER_WORD_3_RC_FTRIM_4MHZ_Msk   (_U_(0x7) << FUSES_USER_WORD_3_RC_FTRIM_4MHZ_Pos)    /**< (FUSES_USER_WORD_3) RC Frequency Trim 4MHz Mask */
#define FUSES_USER_WORD_3_RC_FTRIM_4MHZ(value) (FUSES_USER_WORD_3_RC_FTRIM_4MHZ_Msk & ((value) << FUSES_USER_WORD_3_RC_FTRIM_4MHZ_Pos))
#define FUSES_USER_WORD_3_RC_FTRIM_8MHZ_Pos   _U_(7)                                               /**< (FUSES_USER_WORD_3) RC Frequency Trim 8MHz Position */
#define FUSES_USER_WORD_3_RC_FTRIM_8MHZ_Msk   (_U_(0x7) << FUSES_USER_WORD_3_RC_FTRIM_8MHZ_Pos)    /**< (FUSES_USER_WORD_3) RC Frequency Trim 8MHz Mask */
#define FUSES_USER_WORD_3_RC_FTRIM_8MHZ(value) (FUSES_USER_WORD_3_RC_FTRIM_8MHZ_Msk & ((value) << FUSES_USER_WORD_3_RC_FTRIM_8MHZ_Pos))
#define FUSES_USER_WORD_3_RC_FTRIM_10MHZ_Pos  _U_(10)                                              /**< (FUSES_USER_WORD_3) RC Frequency Trim 10MHz Position */
#define FUSES_USER_WORD_3_RC_FTRIM_10MHZ_Msk  (_U_(0x7) << FUSES_USER_WORD_3_RC_FTRIM_10MHZ_Pos)   /**< (FUSES_USER_WORD_3) RC Frequency Trim 10MHz Mask */
#define FUSES_USER_WORD_3_RC_FTRIM_10MHZ(value) (FUSES_USER_WORD_3_RC_FTRIM_10MHZ_Msk & ((value) << FUSES_USER_WORD_3_RC_FTRIM_10MHZ_Pos))
#define FUSES_USER_WORD_3_RC_FTRIM_12MHZ_Pos  _U_(13)                                              /**< (FUSES_USER_WORD_3) RC Frequency Trim 12MHz Position */
#define FUSES_USER_WORD_3_RC_FTRIM_12MHZ_Msk  (_U_(0x7) << FUSES_USER_WORD_3_RC_FTRIM_12MHZ_Pos)   /**< (FUSES_USER_WORD_3) RC Frequency Trim 12MHz Mask */
#define FUSES_USER_WORD_3_RC_FTRIM_12MHZ(value) (FUSES_USER_WORD_3_RC_FTRIM_12MHZ_Msk & ((value) << FUSES_USER_WORD_3_RC_FTRIM_12MHZ_Pos))
#define FUSES_USER_WORD_3_RC2_FTRIM_4MHZ_Pos  _U_(16)                                              /**< (FUSES_USER_WORD_3) RC2 Frequency Trim 4MHz Position */
#define FUSES_USER_WORD_3_RC2_FTRIM_4MHZ_Msk  (_U_(0x7) << FUSES_USER_WORD_3_RC2_FTRIM_4MHZ_Pos)   /**< (FUSES_USER_WORD_3) RC2 Frequency Trim 4MHz Mask */
#define FUSES_USER_WORD_3_RC2_FTRIM_4MHZ(value) (FUSES_USER_WORD_3_RC2_FTRIM_4MHZ_Msk & ((value) << FUSES_USER_WORD_3_RC2_FTRIM_4MHZ_Pos))
#define FUSES_USER_WORD_3_RC2_FTRIM_8MHZ_Pos  _U_(19)                                              /**< (FUSES_USER_WORD_3) RC2 Frequency Trim 8MHz Position */
#define FUSES_USER_WORD_3_RC2_FTRIM_8MHZ_Msk  (_U_(0x7) << FUSES_USER_WORD_3_RC2_FTRIM_8MHZ_Pos)   /**< (FUSES_USER_WORD_3) RC2 Frequency Trim 8MHz Mask */
#define FUSES_USER_WORD_3_RC2_FTRIM_8MHZ(value) (FUSES_USER_WORD_3_RC2_FTRIM_8MHZ_Msk & ((value) << FUSES_USER_WORD_3_RC2_FTRIM_8MHZ_Pos))
#define FUSES_USER_WORD_3_RC2_FTRIM_10MHZ_Pos _U_(22)                                              /**< (FUSES_USER_WORD_3) RC2 Frequency Trim 10MHz Position */
#define FUSES_USER_WORD_3_RC2_FTRIM_10MHZ_Msk (_U_(0x7) << FUSES_USER_WORD_3_RC2_FTRIM_10MHZ_Pos)  /**< (FUSES_USER_WORD_3) RC2 Frequency Trim 10MHz Mask */
#define FUSES_USER_WORD_3_RC2_FTRIM_10MHZ(value) (FUSES_USER_WORD_3_RC2_FTRIM_10MHZ_Msk & ((value) << FUSES_USER_WORD_3_RC2_FTRIM_10MHZ_Pos))
#define FUSES_USER_WORD_3_RC2_FTRIM_12MHZ_Pos _U_(25)                                              /**< (FUSES_USER_WORD_3) RC2 Frequency Trim 12MHz Position */
#define FUSES_USER_WORD_3_RC2_FTRIM_12MHZ_Msk (_U_(0x7) << FUSES_USER_WORD_3_RC2_FTRIM_12MHZ_Pos)  /**< (FUSES_USER_WORD_3) RC2 Frequency Trim 12MHz Mask */
#define FUSES_USER_WORD_3_RC2_FTRIM_12MHZ(value) (FUSES_USER_WORD_3_RC2_FTRIM_12MHZ_Msk & ((value) << FUSES_USER_WORD_3_RC2_FTRIM_12MHZ_Pos))
#define FUSES_USER_WORD_3_Msk                 _U_(0x0FFFFFFF)                                      /**< (FUSES_USER_WORD_3) Register Mask  */


/** \brief FUSES register offsets definitions */
#define FUSES_USER_WORD_0_REG_OFST     (0x00)              /**< (FUSES_USER_WORD_0) USER Page Word 0 Offset */
#define FUSES_USER_WORD_1_REG_OFST     (0x04)              /**< (FUSES_USER_WORD_1) USER Page Word 1 Offset */
#define FUSES_USER_WORD_2_REG_OFST     (0x08)              /**< (FUSES_USER_WORD_2) USER Page Word 2 Offset */
#define FUSES_USER_WORD_3_REG_OFST     (0x0C)              /**< (FUSES_USER_WORD_3) USER Page Word 3 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief GPNVMBITS register API structure */
typedef struct
{  /* GPNVM Bits */
  __IO  uint32_t                       FUSES_USER_WORD_0;  /**< Offset: 0x00 (R/W  32) USER Page Word 0 */
  __IO  uint32_t                       FUSES_USER_WORD_1;  /**< Offset: 0x04 (R/W  32) USER Page Word 1 */
  __IO  uint32_t                       FUSES_USER_WORD_2;  /**< Offset: 0x08 (R/W  32) USER Page Word 2 */
  __IO  uint32_t                       FUSES_USER_WORD_3;  /**< Offset: 0x0C (R/W  32) USER Page Word 3 */
} fuses_gpnvmbits_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMRH71_FUSES_COMPONENT_H_ */
