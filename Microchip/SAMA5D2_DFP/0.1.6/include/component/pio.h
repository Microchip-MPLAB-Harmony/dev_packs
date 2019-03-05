/**
 * \file
 *
 * \brief Component description for PIO
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
#ifndef _SAMA5D2_PIO_COMPONENT_H_
#define _SAMA5D2_PIO_COMPONENT_H_
#define _SAMA5D2_PIO_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Parallel Input/Output Controller
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PIO */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define PIO_11264                      /**< (PIO) Module ID */
#define REV_PIO K                      /**< (PIO) Module revision */

/* -------- PIO_MSKR : (PIO Offset: 0x00) (R/W 32) PIO Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MSK0:1;                    /**< bit:      0  PIO Line 0 Mask                          */
    uint32_t MSK1:1;                    /**< bit:      1  PIO Line 1 Mask                          */
    uint32_t MSK2:1;                    /**< bit:      2  PIO Line 2 Mask                          */
    uint32_t MSK3:1;                    /**< bit:      3  PIO Line 3 Mask                          */
    uint32_t MSK4:1;                    /**< bit:      4  PIO Line 4 Mask                          */
    uint32_t MSK5:1;                    /**< bit:      5  PIO Line 5 Mask                          */
    uint32_t MSK6:1;                    /**< bit:      6  PIO Line 6 Mask                          */
    uint32_t MSK7:1;                    /**< bit:      7  PIO Line 7 Mask                          */
    uint32_t MSK8:1;                    /**< bit:      8  PIO Line 8 Mask                          */
    uint32_t MSK9:1;                    /**< bit:      9  PIO Line 9 Mask                          */
    uint32_t MSK10:1;                   /**< bit:     10  PIO Line 10 Mask                         */
    uint32_t MSK11:1;                   /**< bit:     11  PIO Line 11 Mask                         */
    uint32_t MSK12:1;                   /**< bit:     12  PIO Line 12 Mask                         */
    uint32_t MSK13:1;                   /**< bit:     13  PIO Line 13 Mask                         */
    uint32_t MSK14:1;                   /**< bit:     14  PIO Line 14 Mask                         */
    uint32_t MSK15:1;                   /**< bit:     15  PIO Line 15 Mask                         */
    uint32_t MSK16:1;                   /**< bit:     16  PIO Line 16 Mask                         */
    uint32_t MSK17:1;                   /**< bit:     17  PIO Line 17 Mask                         */
    uint32_t MSK18:1;                   /**< bit:     18  PIO Line 18 Mask                         */
    uint32_t MSK19:1;                   /**< bit:     19  PIO Line 19 Mask                         */
    uint32_t MSK20:1;                   /**< bit:     20  PIO Line 20 Mask                         */
    uint32_t MSK21:1;                   /**< bit:     21  PIO Line 21 Mask                         */
    uint32_t MSK22:1;                   /**< bit:     22  PIO Line 22 Mask                         */
    uint32_t MSK23:1;                   /**< bit:     23  PIO Line 23 Mask                         */
    uint32_t MSK24:1;                   /**< bit:     24  PIO Line 24 Mask                         */
    uint32_t MSK25:1;                   /**< bit:     25  PIO Line 25 Mask                         */
    uint32_t MSK26:1;                   /**< bit:     26  PIO Line 26 Mask                         */
    uint32_t MSK27:1;                   /**< bit:     27  PIO Line 27 Mask                         */
    uint32_t MSK28:1;                   /**< bit:     28  PIO Line 28 Mask                         */
    uint32_t MSK29:1;                   /**< bit:     29  PIO Line 29 Mask                         */
    uint32_t MSK30:1;                   /**< bit:     30  PIO Line 30 Mask                         */
    uint32_t MSK31:1;                   /**< bit:     31  PIO Line 31 Mask                         */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t MSK:32;                    /**< bit:  0..31  PIO Line 3x Mask                         */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PIO_MSKR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PIO_MSKR_OFFSET                     (0x00)                                        /**<  (PIO_MSKR) PIO Mask Register  Offset */

#define PIO_MSKR_MSK0_Pos                   0                                              /**< (PIO_MSKR) PIO Line 0 Mask Position */
#define PIO_MSKR_MSK0_Msk                   (_U_(0x1) << PIO_MSKR_MSK0_Pos)                /**< (PIO_MSKR) PIO Line 0 Mask Mask */
#define PIO_MSKR_MSK0                       PIO_MSKR_MSK0_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK0_Msk instead */
#define   PIO_MSKR_MSK0_DISABLED_Val        _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK0_ENABLED_Val         _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK0_DISABLED              (PIO_MSKR_MSK0_DISABLED_Val << PIO_MSKR_MSK0_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK0_ENABLED               (PIO_MSKR_MSK0_ENABLED_Val << PIO_MSKR_MSK0_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK1_Pos                   1                                              /**< (PIO_MSKR) PIO Line 1 Mask Position */
#define PIO_MSKR_MSK1_Msk                   (_U_(0x1) << PIO_MSKR_MSK1_Pos)                /**< (PIO_MSKR) PIO Line 1 Mask Mask */
#define PIO_MSKR_MSK1                       PIO_MSKR_MSK1_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK1_Msk instead */
#define   PIO_MSKR_MSK1_DISABLED_Val        _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK1_ENABLED_Val         _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK1_DISABLED              (PIO_MSKR_MSK1_DISABLED_Val << PIO_MSKR_MSK1_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK1_ENABLED               (PIO_MSKR_MSK1_ENABLED_Val << PIO_MSKR_MSK1_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK2_Pos                   2                                              /**< (PIO_MSKR) PIO Line 2 Mask Position */
#define PIO_MSKR_MSK2_Msk                   (_U_(0x1) << PIO_MSKR_MSK2_Pos)                /**< (PIO_MSKR) PIO Line 2 Mask Mask */
#define PIO_MSKR_MSK2                       PIO_MSKR_MSK2_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK2_Msk instead */
#define   PIO_MSKR_MSK2_DISABLED_Val        _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK2_ENABLED_Val         _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK2_DISABLED              (PIO_MSKR_MSK2_DISABLED_Val << PIO_MSKR_MSK2_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK2_ENABLED               (PIO_MSKR_MSK2_ENABLED_Val << PIO_MSKR_MSK2_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK3_Pos                   3                                              /**< (PIO_MSKR) PIO Line 3 Mask Position */
#define PIO_MSKR_MSK3_Msk                   (_U_(0x1) << PIO_MSKR_MSK3_Pos)                /**< (PIO_MSKR) PIO Line 3 Mask Mask */
#define PIO_MSKR_MSK3                       PIO_MSKR_MSK3_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK3_Msk instead */
#define   PIO_MSKR_MSK3_DISABLED_Val        _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK3_ENABLED_Val         _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK3_DISABLED              (PIO_MSKR_MSK3_DISABLED_Val << PIO_MSKR_MSK3_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK3_ENABLED               (PIO_MSKR_MSK3_ENABLED_Val << PIO_MSKR_MSK3_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK4_Pos                   4                                              /**< (PIO_MSKR) PIO Line 4 Mask Position */
#define PIO_MSKR_MSK4_Msk                   (_U_(0x1) << PIO_MSKR_MSK4_Pos)                /**< (PIO_MSKR) PIO Line 4 Mask Mask */
#define PIO_MSKR_MSK4                       PIO_MSKR_MSK4_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK4_Msk instead */
#define   PIO_MSKR_MSK4_DISABLED_Val        _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK4_ENABLED_Val         _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK4_DISABLED              (PIO_MSKR_MSK4_DISABLED_Val << PIO_MSKR_MSK4_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK4_ENABLED               (PIO_MSKR_MSK4_ENABLED_Val << PIO_MSKR_MSK4_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK5_Pos                   5                                              /**< (PIO_MSKR) PIO Line 5 Mask Position */
#define PIO_MSKR_MSK5_Msk                   (_U_(0x1) << PIO_MSKR_MSK5_Pos)                /**< (PIO_MSKR) PIO Line 5 Mask Mask */
#define PIO_MSKR_MSK5                       PIO_MSKR_MSK5_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK5_Msk instead */
#define   PIO_MSKR_MSK5_DISABLED_Val        _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK5_ENABLED_Val         _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK5_DISABLED              (PIO_MSKR_MSK5_DISABLED_Val << PIO_MSKR_MSK5_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK5_ENABLED               (PIO_MSKR_MSK5_ENABLED_Val << PIO_MSKR_MSK5_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK6_Pos                   6                                              /**< (PIO_MSKR) PIO Line 6 Mask Position */
#define PIO_MSKR_MSK6_Msk                   (_U_(0x1) << PIO_MSKR_MSK6_Pos)                /**< (PIO_MSKR) PIO Line 6 Mask Mask */
#define PIO_MSKR_MSK6                       PIO_MSKR_MSK6_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK6_Msk instead */
#define   PIO_MSKR_MSK6_DISABLED_Val        _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK6_ENABLED_Val         _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK6_DISABLED              (PIO_MSKR_MSK6_DISABLED_Val << PIO_MSKR_MSK6_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK6_ENABLED               (PIO_MSKR_MSK6_ENABLED_Val << PIO_MSKR_MSK6_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK7_Pos                   7                                              /**< (PIO_MSKR) PIO Line 7 Mask Position */
#define PIO_MSKR_MSK7_Msk                   (_U_(0x1) << PIO_MSKR_MSK7_Pos)                /**< (PIO_MSKR) PIO Line 7 Mask Mask */
#define PIO_MSKR_MSK7                       PIO_MSKR_MSK7_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK7_Msk instead */
#define   PIO_MSKR_MSK7_DISABLED_Val        _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK7_ENABLED_Val         _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK7_DISABLED              (PIO_MSKR_MSK7_DISABLED_Val << PIO_MSKR_MSK7_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK7_ENABLED               (PIO_MSKR_MSK7_ENABLED_Val << PIO_MSKR_MSK7_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK8_Pos                   8                                              /**< (PIO_MSKR) PIO Line 8 Mask Position */
#define PIO_MSKR_MSK8_Msk                   (_U_(0x1) << PIO_MSKR_MSK8_Pos)                /**< (PIO_MSKR) PIO Line 8 Mask Mask */
#define PIO_MSKR_MSK8                       PIO_MSKR_MSK8_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK8_Msk instead */
#define   PIO_MSKR_MSK8_DISABLED_Val        _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK8_ENABLED_Val         _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK8_DISABLED              (PIO_MSKR_MSK8_DISABLED_Val << PIO_MSKR_MSK8_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK8_ENABLED               (PIO_MSKR_MSK8_ENABLED_Val << PIO_MSKR_MSK8_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK9_Pos                   9                                              /**< (PIO_MSKR) PIO Line 9 Mask Position */
#define PIO_MSKR_MSK9_Msk                   (_U_(0x1) << PIO_MSKR_MSK9_Pos)                /**< (PIO_MSKR) PIO Line 9 Mask Mask */
#define PIO_MSKR_MSK9                       PIO_MSKR_MSK9_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK9_Msk instead */
#define   PIO_MSKR_MSK9_DISABLED_Val        _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK9_ENABLED_Val         _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK9_DISABLED              (PIO_MSKR_MSK9_DISABLED_Val << PIO_MSKR_MSK9_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK9_ENABLED               (PIO_MSKR_MSK9_ENABLED_Val << PIO_MSKR_MSK9_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK10_Pos                  10                                             /**< (PIO_MSKR) PIO Line 10 Mask Position */
#define PIO_MSKR_MSK10_Msk                  (_U_(0x1) << PIO_MSKR_MSK10_Pos)               /**< (PIO_MSKR) PIO Line 10 Mask Mask */
#define PIO_MSKR_MSK10                      PIO_MSKR_MSK10_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK10_Msk instead */
#define   PIO_MSKR_MSK10_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK10_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK10_DISABLED             (PIO_MSKR_MSK10_DISABLED_Val << PIO_MSKR_MSK10_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK10_ENABLED              (PIO_MSKR_MSK10_ENABLED_Val << PIO_MSKR_MSK10_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK11_Pos                  11                                             /**< (PIO_MSKR) PIO Line 11 Mask Position */
#define PIO_MSKR_MSK11_Msk                  (_U_(0x1) << PIO_MSKR_MSK11_Pos)               /**< (PIO_MSKR) PIO Line 11 Mask Mask */
#define PIO_MSKR_MSK11                      PIO_MSKR_MSK11_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK11_Msk instead */
#define   PIO_MSKR_MSK11_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK11_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK11_DISABLED             (PIO_MSKR_MSK11_DISABLED_Val << PIO_MSKR_MSK11_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK11_ENABLED              (PIO_MSKR_MSK11_ENABLED_Val << PIO_MSKR_MSK11_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK12_Pos                  12                                             /**< (PIO_MSKR) PIO Line 12 Mask Position */
#define PIO_MSKR_MSK12_Msk                  (_U_(0x1) << PIO_MSKR_MSK12_Pos)               /**< (PIO_MSKR) PIO Line 12 Mask Mask */
#define PIO_MSKR_MSK12                      PIO_MSKR_MSK12_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK12_Msk instead */
#define   PIO_MSKR_MSK12_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK12_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK12_DISABLED             (PIO_MSKR_MSK12_DISABLED_Val << PIO_MSKR_MSK12_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK12_ENABLED              (PIO_MSKR_MSK12_ENABLED_Val << PIO_MSKR_MSK12_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK13_Pos                  13                                             /**< (PIO_MSKR) PIO Line 13 Mask Position */
#define PIO_MSKR_MSK13_Msk                  (_U_(0x1) << PIO_MSKR_MSK13_Pos)               /**< (PIO_MSKR) PIO Line 13 Mask Mask */
#define PIO_MSKR_MSK13                      PIO_MSKR_MSK13_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK13_Msk instead */
#define   PIO_MSKR_MSK13_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK13_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK13_DISABLED             (PIO_MSKR_MSK13_DISABLED_Val << PIO_MSKR_MSK13_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK13_ENABLED              (PIO_MSKR_MSK13_ENABLED_Val << PIO_MSKR_MSK13_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK14_Pos                  14                                             /**< (PIO_MSKR) PIO Line 14 Mask Position */
#define PIO_MSKR_MSK14_Msk                  (_U_(0x1) << PIO_MSKR_MSK14_Pos)               /**< (PIO_MSKR) PIO Line 14 Mask Mask */
#define PIO_MSKR_MSK14                      PIO_MSKR_MSK14_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK14_Msk instead */
#define   PIO_MSKR_MSK14_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK14_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK14_DISABLED             (PIO_MSKR_MSK14_DISABLED_Val << PIO_MSKR_MSK14_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK14_ENABLED              (PIO_MSKR_MSK14_ENABLED_Val << PIO_MSKR_MSK14_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK15_Pos                  15                                             /**< (PIO_MSKR) PIO Line 15 Mask Position */
#define PIO_MSKR_MSK15_Msk                  (_U_(0x1) << PIO_MSKR_MSK15_Pos)               /**< (PIO_MSKR) PIO Line 15 Mask Mask */
#define PIO_MSKR_MSK15                      PIO_MSKR_MSK15_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK15_Msk instead */
#define   PIO_MSKR_MSK15_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK15_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK15_DISABLED             (PIO_MSKR_MSK15_DISABLED_Val << PIO_MSKR_MSK15_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK15_ENABLED              (PIO_MSKR_MSK15_ENABLED_Val << PIO_MSKR_MSK15_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK16_Pos                  16                                             /**< (PIO_MSKR) PIO Line 16 Mask Position */
#define PIO_MSKR_MSK16_Msk                  (_U_(0x1) << PIO_MSKR_MSK16_Pos)               /**< (PIO_MSKR) PIO Line 16 Mask Mask */
#define PIO_MSKR_MSK16                      PIO_MSKR_MSK16_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK16_Msk instead */
#define   PIO_MSKR_MSK16_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK16_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK16_DISABLED             (PIO_MSKR_MSK16_DISABLED_Val << PIO_MSKR_MSK16_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK16_ENABLED              (PIO_MSKR_MSK16_ENABLED_Val << PIO_MSKR_MSK16_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK17_Pos                  17                                             /**< (PIO_MSKR) PIO Line 17 Mask Position */
#define PIO_MSKR_MSK17_Msk                  (_U_(0x1) << PIO_MSKR_MSK17_Pos)               /**< (PIO_MSKR) PIO Line 17 Mask Mask */
#define PIO_MSKR_MSK17                      PIO_MSKR_MSK17_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK17_Msk instead */
#define   PIO_MSKR_MSK17_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK17_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK17_DISABLED             (PIO_MSKR_MSK17_DISABLED_Val << PIO_MSKR_MSK17_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK17_ENABLED              (PIO_MSKR_MSK17_ENABLED_Val << PIO_MSKR_MSK17_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK18_Pos                  18                                             /**< (PIO_MSKR) PIO Line 18 Mask Position */
#define PIO_MSKR_MSK18_Msk                  (_U_(0x1) << PIO_MSKR_MSK18_Pos)               /**< (PIO_MSKR) PIO Line 18 Mask Mask */
#define PIO_MSKR_MSK18                      PIO_MSKR_MSK18_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK18_Msk instead */
#define   PIO_MSKR_MSK18_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK18_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK18_DISABLED             (PIO_MSKR_MSK18_DISABLED_Val << PIO_MSKR_MSK18_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK18_ENABLED              (PIO_MSKR_MSK18_ENABLED_Val << PIO_MSKR_MSK18_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK19_Pos                  19                                             /**< (PIO_MSKR) PIO Line 19 Mask Position */
#define PIO_MSKR_MSK19_Msk                  (_U_(0x1) << PIO_MSKR_MSK19_Pos)               /**< (PIO_MSKR) PIO Line 19 Mask Mask */
#define PIO_MSKR_MSK19                      PIO_MSKR_MSK19_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK19_Msk instead */
#define   PIO_MSKR_MSK19_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK19_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK19_DISABLED             (PIO_MSKR_MSK19_DISABLED_Val << PIO_MSKR_MSK19_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK19_ENABLED              (PIO_MSKR_MSK19_ENABLED_Val << PIO_MSKR_MSK19_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK20_Pos                  20                                             /**< (PIO_MSKR) PIO Line 20 Mask Position */
#define PIO_MSKR_MSK20_Msk                  (_U_(0x1) << PIO_MSKR_MSK20_Pos)               /**< (PIO_MSKR) PIO Line 20 Mask Mask */
#define PIO_MSKR_MSK20                      PIO_MSKR_MSK20_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK20_Msk instead */
#define   PIO_MSKR_MSK20_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK20_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK20_DISABLED             (PIO_MSKR_MSK20_DISABLED_Val << PIO_MSKR_MSK20_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK20_ENABLED              (PIO_MSKR_MSK20_ENABLED_Val << PIO_MSKR_MSK20_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK21_Pos                  21                                             /**< (PIO_MSKR) PIO Line 21 Mask Position */
#define PIO_MSKR_MSK21_Msk                  (_U_(0x1) << PIO_MSKR_MSK21_Pos)               /**< (PIO_MSKR) PIO Line 21 Mask Mask */
#define PIO_MSKR_MSK21                      PIO_MSKR_MSK21_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK21_Msk instead */
#define   PIO_MSKR_MSK21_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK21_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK21_DISABLED             (PIO_MSKR_MSK21_DISABLED_Val << PIO_MSKR_MSK21_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK21_ENABLED              (PIO_MSKR_MSK21_ENABLED_Val << PIO_MSKR_MSK21_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK22_Pos                  22                                             /**< (PIO_MSKR) PIO Line 22 Mask Position */
#define PIO_MSKR_MSK22_Msk                  (_U_(0x1) << PIO_MSKR_MSK22_Pos)               /**< (PIO_MSKR) PIO Line 22 Mask Mask */
#define PIO_MSKR_MSK22                      PIO_MSKR_MSK22_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK22_Msk instead */
#define   PIO_MSKR_MSK22_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK22_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK22_DISABLED             (PIO_MSKR_MSK22_DISABLED_Val << PIO_MSKR_MSK22_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK22_ENABLED              (PIO_MSKR_MSK22_ENABLED_Val << PIO_MSKR_MSK22_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK23_Pos                  23                                             /**< (PIO_MSKR) PIO Line 23 Mask Position */
#define PIO_MSKR_MSK23_Msk                  (_U_(0x1) << PIO_MSKR_MSK23_Pos)               /**< (PIO_MSKR) PIO Line 23 Mask Mask */
#define PIO_MSKR_MSK23                      PIO_MSKR_MSK23_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK23_Msk instead */
#define   PIO_MSKR_MSK23_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK23_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK23_DISABLED             (PIO_MSKR_MSK23_DISABLED_Val << PIO_MSKR_MSK23_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK23_ENABLED              (PIO_MSKR_MSK23_ENABLED_Val << PIO_MSKR_MSK23_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK24_Pos                  24                                             /**< (PIO_MSKR) PIO Line 24 Mask Position */
#define PIO_MSKR_MSK24_Msk                  (_U_(0x1) << PIO_MSKR_MSK24_Pos)               /**< (PIO_MSKR) PIO Line 24 Mask Mask */
#define PIO_MSKR_MSK24                      PIO_MSKR_MSK24_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK24_Msk instead */
#define   PIO_MSKR_MSK24_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK24_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK24_DISABLED             (PIO_MSKR_MSK24_DISABLED_Val << PIO_MSKR_MSK24_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK24_ENABLED              (PIO_MSKR_MSK24_ENABLED_Val << PIO_MSKR_MSK24_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK25_Pos                  25                                             /**< (PIO_MSKR) PIO Line 25 Mask Position */
#define PIO_MSKR_MSK25_Msk                  (_U_(0x1) << PIO_MSKR_MSK25_Pos)               /**< (PIO_MSKR) PIO Line 25 Mask Mask */
#define PIO_MSKR_MSK25                      PIO_MSKR_MSK25_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK25_Msk instead */
#define   PIO_MSKR_MSK25_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK25_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK25_DISABLED             (PIO_MSKR_MSK25_DISABLED_Val << PIO_MSKR_MSK25_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK25_ENABLED              (PIO_MSKR_MSK25_ENABLED_Val << PIO_MSKR_MSK25_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK26_Pos                  26                                             /**< (PIO_MSKR) PIO Line 26 Mask Position */
#define PIO_MSKR_MSK26_Msk                  (_U_(0x1) << PIO_MSKR_MSK26_Pos)               /**< (PIO_MSKR) PIO Line 26 Mask Mask */
#define PIO_MSKR_MSK26                      PIO_MSKR_MSK26_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK26_Msk instead */
#define   PIO_MSKR_MSK26_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK26_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK26_DISABLED             (PIO_MSKR_MSK26_DISABLED_Val << PIO_MSKR_MSK26_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK26_ENABLED              (PIO_MSKR_MSK26_ENABLED_Val << PIO_MSKR_MSK26_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK27_Pos                  27                                             /**< (PIO_MSKR) PIO Line 27 Mask Position */
#define PIO_MSKR_MSK27_Msk                  (_U_(0x1) << PIO_MSKR_MSK27_Pos)               /**< (PIO_MSKR) PIO Line 27 Mask Mask */
#define PIO_MSKR_MSK27                      PIO_MSKR_MSK27_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK27_Msk instead */
#define   PIO_MSKR_MSK27_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK27_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK27_DISABLED             (PIO_MSKR_MSK27_DISABLED_Val << PIO_MSKR_MSK27_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK27_ENABLED              (PIO_MSKR_MSK27_ENABLED_Val << PIO_MSKR_MSK27_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK28_Pos                  28                                             /**< (PIO_MSKR) PIO Line 28 Mask Position */
#define PIO_MSKR_MSK28_Msk                  (_U_(0x1) << PIO_MSKR_MSK28_Pos)               /**< (PIO_MSKR) PIO Line 28 Mask Mask */
#define PIO_MSKR_MSK28                      PIO_MSKR_MSK28_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK28_Msk instead */
#define   PIO_MSKR_MSK28_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK28_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK28_DISABLED             (PIO_MSKR_MSK28_DISABLED_Val << PIO_MSKR_MSK28_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK28_ENABLED              (PIO_MSKR_MSK28_ENABLED_Val << PIO_MSKR_MSK28_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK29_Pos                  29                                             /**< (PIO_MSKR) PIO Line 29 Mask Position */
#define PIO_MSKR_MSK29_Msk                  (_U_(0x1) << PIO_MSKR_MSK29_Pos)               /**< (PIO_MSKR) PIO Line 29 Mask Mask */
#define PIO_MSKR_MSK29                      PIO_MSKR_MSK29_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK29_Msk instead */
#define   PIO_MSKR_MSK29_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK29_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK29_DISABLED             (PIO_MSKR_MSK29_DISABLED_Val << PIO_MSKR_MSK29_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK29_ENABLED              (PIO_MSKR_MSK29_ENABLED_Val << PIO_MSKR_MSK29_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK30_Pos                  30                                             /**< (PIO_MSKR) PIO Line 30 Mask Position */
#define PIO_MSKR_MSK30_Msk                  (_U_(0x1) << PIO_MSKR_MSK30_Pos)               /**< (PIO_MSKR) PIO Line 30 Mask Mask */
#define PIO_MSKR_MSK30                      PIO_MSKR_MSK30_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK30_Msk instead */
#define   PIO_MSKR_MSK30_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK30_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK30_DISABLED             (PIO_MSKR_MSK30_DISABLED_Val << PIO_MSKR_MSK30_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK30_ENABLED              (PIO_MSKR_MSK30_ENABLED_Val << PIO_MSKR_MSK30_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK31_Pos                  31                                             /**< (PIO_MSKR) PIO Line 31 Mask Position */
#define PIO_MSKR_MSK31_Msk                  (_U_(0x1) << PIO_MSKR_MSK31_Pos)               /**< (PIO_MSKR) PIO Line 31 Mask Mask */
#define PIO_MSKR_MSK31                      PIO_MSKR_MSK31_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_MSKR_MSK31_Msk instead */
#define   PIO_MSKR_MSK31_DISABLED_Val       _U_(0x0)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration.  */
#define   PIO_MSKR_MSK31_ENABLED_Val        _U_(0x1)                                       /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration.  */
#define PIO_MSKR_MSK31_DISABLED             (PIO_MSKR_MSK31_DISABLED_Val << PIO_MSKR_MSK31_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx does not affect the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MSK31_ENABLED              (PIO_MSKR_MSK31_ENABLED_Val << PIO_MSKR_MSK31_Pos)  /**< (PIO_MSKR) Writing the PIO_CFGRx, PIO_ODSRx or PIO_IOFRx updates the corresponding I/O line configuration. Position  */
#define PIO_MSKR_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (PIO_MSKR) Register MASK  (Use PIO_MSKR_Msk instead)  */
#define PIO_MSKR_Msk                        _U_(0xFFFFFFFF)                                /**< (PIO_MSKR) Register Mask  */

#define PIO_MSKR_MSK_Pos                    0                                              /**< (PIO_MSKR Position) PIO Line 3x Mask */
#define PIO_MSKR_MSK_Msk                    (_U_(0xFFFFFFFF) << PIO_MSKR_MSK_Pos)          /**< (PIO_MSKR Mask) MSK */
#define PIO_MSKR_MSK(value)                 (PIO_MSKR_MSK_Msk & ((value) << PIO_MSKR_MSK_Pos))  

/* -------- PIO_CFGR : (PIO Offset: 0x04) (R/W 32) PIO Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t FUNC:3;                    /**< bit:   0..2  I/O Line Function                        */
    uint32_t :5;                        /**< bit:   3..7  Reserved */
    uint32_t DIR:1;                     /**< bit:      8  Direction                                */
    uint32_t PUEN:1;                    /**< bit:      9  Pull-Up Enable                           */
    uint32_t PDEN:1;                    /**< bit:     10  Pull-Down Enable                         */
    uint32_t :1;                        /**< bit:     11  Reserved */
    uint32_t IFEN:1;                    /**< bit:     12  Input Filter Enable                      */
    uint32_t IFSCEN:1;                  /**< bit:     13  Input Filter Slow Clock Enable           */
    uint32_t OPD:1;                     /**< bit:     14  Open-Drain                               */
    uint32_t SCHMITT:1;                 /**< bit:     15  Schmitt Trigger                          */
    uint32_t DRVSTR:2;                  /**< bit: 16..17  Drive Strength                           */
    uint32_t :6;                        /**< bit: 18..23  Reserved */
    uint32_t EVTSEL:3;                  /**< bit: 24..26  Event Selection                          */
    uint32_t :2;                        /**< bit: 27..28  Reserved */
    uint32_t PCFS:1;                    /**< bit:     29  Physical Configuration Freeze Status (read-only) */
    uint32_t ICFS:1;                    /**< bit:     30  Interrupt Configuration Freeze Status (read-only) */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PIO_CFGR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PIO_CFGR_OFFSET                     (0x04)                                        /**<  (PIO_CFGR) PIO Configuration Register  Offset */

#define PIO_CFGR_FUNC_Pos                   0                                              /**< (PIO_CFGR) I/O Line Function Position */
#define PIO_CFGR_FUNC_Msk                   (_U_(0x7) << PIO_CFGR_FUNC_Pos)                /**< (PIO_CFGR) I/O Line Function Mask */
#define PIO_CFGR_FUNC(value)                (PIO_CFGR_FUNC_Msk & ((value) << PIO_CFGR_FUNC_Pos))
#define   PIO_CFGR_FUNC_GPIO_Val            _U_(0x0)                                       /**< (PIO_CFGR) Select the PIO mode for the selected I/O lines.  */
#define   PIO_CFGR_FUNC_PERIPH_A_Val        _U_(0x1)                                       /**< (PIO_CFGR) Select the peripheral A for the selected I/O lines.  */
#define   PIO_CFGR_FUNC_PERIPH_B_Val        _U_(0x2)                                       /**< (PIO_CFGR) Select the peripheral B for the selected I/O lines.  */
#define   PIO_CFGR_FUNC_PERIPH_C_Val        _U_(0x3)                                       /**< (PIO_CFGR) Select the peripheral C for the selected I/O lines.  */
#define   PIO_CFGR_FUNC_PERIPH_D_Val        _U_(0x4)                                       /**< (PIO_CFGR) Select the peripheral D for the selected I/O lines.  */
#define   PIO_CFGR_FUNC_PERIPH_E_Val        _U_(0x5)                                       /**< (PIO_CFGR) Select the peripheral E for the selected I/O lines.  */
#define   PIO_CFGR_FUNC_PERIPH_F_Val        _U_(0x6)                                       /**< (PIO_CFGR) Select the peripheral F for the selected I/O lines.  */
#define   PIO_CFGR_FUNC_PERIPH_G_Val        _U_(0x7)                                       /**< (PIO_CFGR) Select the peripheral G for the selected I/O lines.  */
#define PIO_CFGR_FUNC_GPIO                  (PIO_CFGR_FUNC_GPIO_Val << PIO_CFGR_FUNC_Pos)  /**< (PIO_CFGR) Select the PIO mode for the selected I/O lines. Position  */
#define PIO_CFGR_FUNC_PERIPH_A              (PIO_CFGR_FUNC_PERIPH_A_Val << PIO_CFGR_FUNC_Pos)  /**< (PIO_CFGR) Select the peripheral A for the selected I/O lines. Position  */
#define PIO_CFGR_FUNC_PERIPH_B              (PIO_CFGR_FUNC_PERIPH_B_Val << PIO_CFGR_FUNC_Pos)  /**< (PIO_CFGR) Select the peripheral B for the selected I/O lines. Position  */
#define PIO_CFGR_FUNC_PERIPH_C              (PIO_CFGR_FUNC_PERIPH_C_Val << PIO_CFGR_FUNC_Pos)  /**< (PIO_CFGR) Select the peripheral C for the selected I/O lines. Position  */
#define PIO_CFGR_FUNC_PERIPH_D              (PIO_CFGR_FUNC_PERIPH_D_Val << PIO_CFGR_FUNC_Pos)  /**< (PIO_CFGR) Select the peripheral D for the selected I/O lines. Position  */
#define PIO_CFGR_FUNC_PERIPH_E              (PIO_CFGR_FUNC_PERIPH_E_Val << PIO_CFGR_FUNC_Pos)  /**< (PIO_CFGR) Select the peripheral E for the selected I/O lines. Position  */
#define PIO_CFGR_FUNC_PERIPH_F              (PIO_CFGR_FUNC_PERIPH_F_Val << PIO_CFGR_FUNC_Pos)  /**< (PIO_CFGR) Select the peripheral F for the selected I/O lines. Position  */
#define PIO_CFGR_FUNC_PERIPH_G              (PIO_CFGR_FUNC_PERIPH_G_Val << PIO_CFGR_FUNC_Pos)  /**< (PIO_CFGR) Select the peripheral G for the selected I/O lines. Position  */
#define PIO_CFGR_DIR_Pos                    8                                              /**< (PIO_CFGR) Direction Position */
#define PIO_CFGR_DIR_Msk                    (_U_(0x1) << PIO_CFGR_DIR_Pos)                 /**< (PIO_CFGR) Direction Mask */
#define PIO_CFGR_DIR                        PIO_CFGR_DIR_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CFGR_DIR_Msk instead */
#define   PIO_CFGR_DIR_INPUT_Val            _U_(0x0)                                       /**< (PIO_CFGR) The selected I/O lines are pure inputs.  */
#define   PIO_CFGR_DIR_OUTPUT_Val           _U_(0x1)                                       /**< (PIO_CFGR) The selected I/O lines are enabled in output.  */
#define PIO_CFGR_DIR_INPUT                  (PIO_CFGR_DIR_INPUT_Val << PIO_CFGR_DIR_Pos)   /**< (PIO_CFGR) The selected I/O lines are pure inputs. Position  */
#define PIO_CFGR_DIR_OUTPUT                 (PIO_CFGR_DIR_OUTPUT_Val << PIO_CFGR_DIR_Pos)  /**< (PIO_CFGR) The selected I/O lines are enabled in output. Position  */
#define PIO_CFGR_PUEN_Pos                   9                                              /**< (PIO_CFGR) Pull-Up Enable Position */
#define PIO_CFGR_PUEN_Msk                   (_U_(0x1) << PIO_CFGR_PUEN_Pos)                /**< (PIO_CFGR) Pull-Up Enable Mask */
#define PIO_CFGR_PUEN                       PIO_CFGR_PUEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CFGR_PUEN_Msk instead */
#define   PIO_CFGR_PUEN_DISABLED_Val        _U_(0x0)                                       /**< (PIO_CFGR) Pull-Up is disabled for the selected I/O lines.  */
#define   PIO_CFGR_PUEN_ENABLED_Val         _U_(0x1)                                       /**< (PIO_CFGR) Pull-Up is enabled for the selected I/O lines.  */
#define PIO_CFGR_PUEN_DISABLED              (PIO_CFGR_PUEN_DISABLED_Val << PIO_CFGR_PUEN_Pos)  /**< (PIO_CFGR) Pull-Up is disabled for the selected I/O lines. Position  */
#define PIO_CFGR_PUEN_ENABLED               (PIO_CFGR_PUEN_ENABLED_Val << PIO_CFGR_PUEN_Pos)  /**< (PIO_CFGR) Pull-Up is enabled for the selected I/O lines. Position  */
#define PIO_CFGR_PDEN_Pos                   10                                             /**< (PIO_CFGR) Pull-Down Enable Position */
#define PIO_CFGR_PDEN_Msk                   (_U_(0x1) << PIO_CFGR_PDEN_Pos)                /**< (PIO_CFGR) Pull-Down Enable Mask */
#define PIO_CFGR_PDEN                       PIO_CFGR_PDEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CFGR_PDEN_Msk instead */
#define   PIO_CFGR_PDEN_DISABLED_Val        _U_(0x0)                                       /**< (PIO_CFGR) Pull-Down is disabled for the selected I/O lines.  */
#define   PIO_CFGR_PDEN_ENABLED_Val         _U_(0x1)                                       /**< (PIO_CFGR) Pull-Down is enabled for the selected I/O lines only if PUEN is 0(1).  */
#define PIO_CFGR_PDEN_DISABLED              (PIO_CFGR_PDEN_DISABLED_Val << PIO_CFGR_PDEN_Pos)  /**< (PIO_CFGR) Pull-Down is disabled for the selected I/O lines. Position  */
#define PIO_CFGR_PDEN_ENABLED               (PIO_CFGR_PDEN_ENABLED_Val << PIO_CFGR_PDEN_Pos)  /**< (PIO_CFGR) Pull-Down is enabled for the selected I/O lines only if PUEN is 0(1). Position  */
#define PIO_CFGR_IFEN_Pos                   12                                             /**< (PIO_CFGR) Input Filter Enable Position */
#define PIO_CFGR_IFEN_Msk                   (_U_(0x1) << PIO_CFGR_IFEN_Pos)                /**< (PIO_CFGR) Input Filter Enable Mask */
#define PIO_CFGR_IFEN                       PIO_CFGR_IFEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CFGR_IFEN_Msk instead */
#define   PIO_CFGR_IFEN_DISABLED_Val        _U_(0x0)                                       /**< (PIO_CFGR) The input filter is disabled for the selected I/O lines.  */
#define   PIO_CFGR_IFEN_ENABLED_Val         _U_(0x1)                                       /**< (PIO_CFGR) The input filter is enabled for the selected I/O lines.  */
#define PIO_CFGR_IFEN_DISABLED              (PIO_CFGR_IFEN_DISABLED_Val << PIO_CFGR_IFEN_Pos)  /**< (PIO_CFGR) The input filter is disabled for the selected I/O lines. Position  */
#define PIO_CFGR_IFEN_ENABLED               (PIO_CFGR_IFEN_ENABLED_Val << PIO_CFGR_IFEN_Pos)  /**< (PIO_CFGR) The input filter is enabled for the selected I/O lines. Position  */
#define PIO_CFGR_IFSCEN_Pos                 13                                             /**< (PIO_CFGR) Input Filter Slow Clock Enable Position */
#define PIO_CFGR_IFSCEN_Msk                 (_U_(0x1) << PIO_CFGR_IFSCEN_Pos)              /**< (PIO_CFGR) Input Filter Slow Clock Enable Mask */
#define PIO_CFGR_IFSCEN                     PIO_CFGR_IFSCEN_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CFGR_IFSCEN_Msk instead */
#define   PIO_CFGR_IFSCEN_DISABLED_Val      _U_(0x0)                                       /**< (PIO_CFGR) The glitch filter is able to filter glitches with a duration < tmck/2 for the selected I/O lines.  */
#define   PIO_CFGR_IFSCEN_ENABLED_Val       _U_(0x1)                                       /**< (PIO_CFGR) The debouncing filter is able to filter pulses with a duration < tdiv_slck/2 for the selected I/O lines.  */
#define PIO_CFGR_IFSCEN_DISABLED            (PIO_CFGR_IFSCEN_DISABLED_Val << PIO_CFGR_IFSCEN_Pos)  /**< (PIO_CFGR) The glitch filter is able to filter glitches with a duration < tmck/2 for the selected I/O lines. Position  */
#define PIO_CFGR_IFSCEN_ENABLED             (PIO_CFGR_IFSCEN_ENABLED_Val << PIO_CFGR_IFSCEN_Pos)  /**< (PIO_CFGR) The debouncing filter is able to filter pulses with a duration < tdiv_slck/2 for the selected I/O lines. Position  */
#define PIO_CFGR_OPD_Pos                    14                                             /**< (PIO_CFGR) Open-Drain Position */
#define PIO_CFGR_OPD_Msk                    (_U_(0x1) << PIO_CFGR_OPD_Pos)                 /**< (PIO_CFGR) Open-Drain Mask */
#define PIO_CFGR_OPD                        PIO_CFGR_OPD_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CFGR_OPD_Msk instead */
#define   PIO_CFGR_OPD_DISABLED_Val         _U_(0x0)                                       /**< (PIO_CFGR) The open-drain is disabled for the selected I/O lines. I/O lines are driven at high- and low-level.  */
#define   PIO_CFGR_OPD_ENABLED_Val          _U_(0x1)                                       /**< (PIO_CFGR) The open-drain is enabled for the selected I/O lines. I/O lines are driven at low-level only.  */
#define PIO_CFGR_OPD_DISABLED               (PIO_CFGR_OPD_DISABLED_Val << PIO_CFGR_OPD_Pos)  /**< (PIO_CFGR) The open-drain is disabled for the selected I/O lines. I/O lines are driven at high- and low-level. Position  */
#define PIO_CFGR_OPD_ENABLED                (PIO_CFGR_OPD_ENABLED_Val << PIO_CFGR_OPD_Pos)  /**< (PIO_CFGR) The open-drain is enabled for the selected I/O lines. I/O lines are driven at low-level only. Position  */
#define PIO_CFGR_SCHMITT_Pos                15                                             /**< (PIO_CFGR) Schmitt Trigger Position */
#define PIO_CFGR_SCHMITT_Msk                (_U_(0x1) << PIO_CFGR_SCHMITT_Pos)             /**< (PIO_CFGR) Schmitt Trigger Mask */
#define PIO_CFGR_SCHMITT                    PIO_CFGR_SCHMITT_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CFGR_SCHMITT_Msk instead */
#define   PIO_CFGR_SCHMITT_ENABLED_Val      _U_(0x0)                                       /**< (PIO_CFGR) Schmitt trigger is enabled for the selected I/O lines.  */
#define   PIO_CFGR_SCHMITT_DISABLED_Val     _U_(0x1)                                       /**< (PIO_CFGR) Schmitt trigger is disabled for the selected I/O lines.  */
#define PIO_CFGR_SCHMITT_ENABLED            (PIO_CFGR_SCHMITT_ENABLED_Val << PIO_CFGR_SCHMITT_Pos)  /**< (PIO_CFGR) Schmitt trigger is enabled for the selected I/O lines. Position  */
#define PIO_CFGR_SCHMITT_DISABLED           (PIO_CFGR_SCHMITT_DISABLED_Val << PIO_CFGR_SCHMITT_Pos)  /**< (PIO_CFGR) Schmitt trigger is disabled for the selected I/O lines. Position  */
#define PIO_CFGR_DRVSTR_Pos                 16                                             /**< (PIO_CFGR) Drive Strength Position */
#define PIO_CFGR_DRVSTR_Msk                 (_U_(0x3) << PIO_CFGR_DRVSTR_Pos)              /**< (PIO_CFGR) Drive Strength Mask */
#define PIO_CFGR_DRVSTR(value)              (PIO_CFGR_DRVSTR_Msk & ((value) << PIO_CFGR_DRVSTR_Pos))
#define   PIO_CFGR_DRVSTR_LO_Val            _U_(0x1)                                       /**< (PIO_CFGR) Low drive  */
#define   PIO_CFGR_DRVSTR_ME_Val            _U_(0x2)                                       /**< (PIO_CFGR) Medium drive  */
#define   PIO_CFGR_DRVSTR_HI_Val            _U_(0x3)                                       /**< (PIO_CFGR) High drive  */
#define PIO_CFGR_DRVSTR_LO                  (PIO_CFGR_DRVSTR_LO_Val << PIO_CFGR_DRVSTR_Pos)  /**< (PIO_CFGR) Low drive Position  */
#define PIO_CFGR_DRVSTR_ME                  (PIO_CFGR_DRVSTR_ME_Val << PIO_CFGR_DRVSTR_Pos)  /**< (PIO_CFGR) Medium drive Position  */
#define PIO_CFGR_DRVSTR_HI                  (PIO_CFGR_DRVSTR_HI_Val << PIO_CFGR_DRVSTR_Pos)  /**< (PIO_CFGR) High drive Position  */
#define PIO_CFGR_EVTSEL_Pos                 24                                             /**< (PIO_CFGR) Event Selection Position */
#define PIO_CFGR_EVTSEL_Msk                 (_U_(0x7) << PIO_CFGR_EVTSEL_Pos)              /**< (PIO_CFGR) Event Selection Mask */
#define PIO_CFGR_EVTSEL(value)              (PIO_CFGR_EVTSEL_Msk & ((value) << PIO_CFGR_EVTSEL_Pos))
#define   PIO_CFGR_EVTSEL_FALLING_Val       _U_(0x0)                                       /**< (PIO_CFGR) Event detection on input falling edge  */
#define   PIO_CFGR_EVTSEL_RISING_Val        _U_(0x1)                                       /**< (PIO_CFGR) Event detection on input rising edge  */
#define   PIO_CFGR_EVTSEL_BOTH_Val          _U_(0x2)                                       /**< (PIO_CFGR) Event detection on input both edge  */
#define   PIO_CFGR_EVTSEL_LOW_Val           _U_(0x3)                                       /**< (PIO_CFGR) Event detection on low level input  */
#define   PIO_CFGR_EVTSEL_HIGH_Val          _U_(0x4)                                       /**< (PIO_CFGR) Event detection on high level input  */
#define PIO_CFGR_EVTSEL_FALLING             (PIO_CFGR_EVTSEL_FALLING_Val << PIO_CFGR_EVTSEL_Pos)  /**< (PIO_CFGR) Event detection on input falling edge Position  */
#define PIO_CFGR_EVTSEL_RISING              (PIO_CFGR_EVTSEL_RISING_Val << PIO_CFGR_EVTSEL_Pos)  /**< (PIO_CFGR) Event detection on input rising edge Position  */
#define PIO_CFGR_EVTSEL_BOTH                (PIO_CFGR_EVTSEL_BOTH_Val << PIO_CFGR_EVTSEL_Pos)  /**< (PIO_CFGR) Event detection on input both edge Position  */
#define PIO_CFGR_EVTSEL_LOW                 (PIO_CFGR_EVTSEL_LOW_Val << PIO_CFGR_EVTSEL_Pos)  /**< (PIO_CFGR) Event detection on low level input Position  */
#define PIO_CFGR_EVTSEL_HIGH                (PIO_CFGR_EVTSEL_HIGH_Val << PIO_CFGR_EVTSEL_Pos)  /**< (PIO_CFGR) Event detection on high level input Position  */
#define PIO_CFGR_PCFS_Pos                   29                                             /**< (PIO_CFGR) Physical Configuration Freeze Status (read-only) Position */
#define PIO_CFGR_PCFS_Msk                   (_U_(0x1) << PIO_CFGR_PCFS_Pos)                /**< (PIO_CFGR) Physical Configuration Freeze Status (read-only) Mask */
#define PIO_CFGR_PCFS                       PIO_CFGR_PCFS_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CFGR_PCFS_Msk instead */
#define   PIO_CFGR_PCFS_NOT_FROZEN_Val      _U_(0x0)                                       /**< (PIO_CFGR) The fields are not frozen and can be written for this I/O line.  */
#define   PIO_CFGR_PCFS_FROZEN_Val          _U_(0x1)                                       /**< (PIO_CFGR) The fields are frozen and cannot be written for this I/O line. Only a hardware reset can release these fields.  */
#define PIO_CFGR_PCFS_NOT_FROZEN            (PIO_CFGR_PCFS_NOT_FROZEN_Val << PIO_CFGR_PCFS_Pos)  /**< (PIO_CFGR) The fields are not frozen and can be written for this I/O line. Position  */
#define PIO_CFGR_PCFS_FROZEN                (PIO_CFGR_PCFS_FROZEN_Val << PIO_CFGR_PCFS_Pos)  /**< (PIO_CFGR) The fields are frozen and cannot be written for this I/O line. Only a hardware reset can release these fields. Position  */
#define PIO_CFGR_ICFS_Pos                   30                                             /**< (PIO_CFGR) Interrupt Configuration Freeze Status (read-only) Position */
#define PIO_CFGR_ICFS_Msk                   (_U_(0x1) << PIO_CFGR_ICFS_Pos)                /**< (PIO_CFGR) Interrupt Configuration Freeze Status (read-only) Mask */
#define PIO_CFGR_ICFS                       PIO_CFGR_ICFS_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CFGR_ICFS_Msk instead */
#define   PIO_CFGR_ICFS_NOT_FROZEN_Val      _U_(0x0)                                       /**< (PIO_CFGR) The fields are not frozen and can be written for this I/O line.  */
#define   PIO_CFGR_ICFS_FROZEN_Val          _U_(0x1)                                       /**< (PIO_CFGR) The fields are frozen and cannot be written for this I/O line. Only a hardware reset can release these fields.  */
#define PIO_CFGR_ICFS_NOT_FROZEN            (PIO_CFGR_ICFS_NOT_FROZEN_Val << PIO_CFGR_ICFS_Pos)  /**< (PIO_CFGR) The fields are not frozen and can be written for this I/O line. Position  */
#define PIO_CFGR_ICFS_FROZEN                (PIO_CFGR_ICFS_FROZEN_Val << PIO_CFGR_ICFS_Pos)  /**< (PIO_CFGR) The fields are frozen and cannot be written for this I/O line. Only a hardware reset can release these fields. Position  */
#define PIO_CFGR_MASK                       _U_(0x6703F707)                                /**< \deprecated (PIO_CFGR) Register MASK  (Use PIO_CFGR_Msk instead)  */
#define PIO_CFGR_Msk                        _U_(0x6703F707)                                /**< (PIO_CFGR) Register Mask  */


/* -------- PIO_PDSR : (PIO Offset: 0x08) (R/ 32) PIO Pin Data Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t P0:1;                      /**< bit:      0  Input Data Status                        */
    uint32_t P1:1;                      /**< bit:      1  Input Data Status                        */
    uint32_t P2:1;                      /**< bit:      2  Input Data Status                        */
    uint32_t P3:1;                      /**< bit:      3  Input Data Status                        */
    uint32_t P4:1;                      /**< bit:      4  Input Data Status                        */
    uint32_t P5:1;                      /**< bit:      5  Input Data Status                        */
    uint32_t P6:1;                      /**< bit:      6  Input Data Status                        */
    uint32_t P7:1;                      /**< bit:      7  Input Data Status                        */
    uint32_t P8:1;                      /**< bit:      8  Input Data Status                        */
    uint32_t P9:1;                      /**< bit:      9  Input Data Status                        */
    uint32_t P10:1;                     /**< bit:     10  Input Data Status                        */
    uint32_t P11:1;                     /**< bit:     11  Input Data Status                        */
    uint32_t P12:1;                     /**< bit:     12  Input Data Status                        */
    uint32_t P13:1;                     /**< bit:     13  Input Data Status                        */
    uint32_t P14:1;                     /**< bit:     14  Input Data Status                        */
    uint32_t P15:1;                     /**< bit:     15  Input Data Status                        */
    uint32_t P16:1;                     /**< bit:     16  Input Data Status                        */
    uint32_t P17:1;                     /**< bit:     17  Input Data Status                        */
    uint32_t P18:1;                     /**< bit:     18  Input Data Status                        */
    uint32_t P19:1;                     /**< bit:     19  Input Data Status                        */
    uint32_t P20:1;                     /**< bit:     20  Input Data Status                        */
    uint32_t P21:1;                     /**< bit:     21  Input Data Status                        */
    uint32_t P22:1;                     /**< bit:     22  Input Data Status                        */
    uint32_t P23:1;                     /**< bit:     23  Input Data Status                        */
    uint32_t P24:1;                     /**< bit:     24  Input Data Status                        */
    uint32_t P25:1;                     /**< bit:     25  Input Data Status                        */
    uint32_t P26:1;                     /**< bit:     26  Input Data Status                        */
    uint32_t P27:1;                     /**< bit:     27  Input Data Status                        */
    uint32_t P28:1;                     /**< bit:     28  Input Data Status                        */
    uint32_t P29:1;                     /**< bit:     29  Input Data Status                        */
    uint32_t P30:1;                     /**< bit:     30  Input Data Status                        */
    uint32_t P31:1;                     /**< bit:     31  Input Data Status                        */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t P:32;                      /**< bit:  0..31  Input Data Status                        */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PIO_PDSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PIO_PDSR_OFFSET                     (0x08)                                        /**<  (PIO_PDSR) PIO Pin Data Status Register  Offset */

#define PIO_PDSR_P0_Pos                     0                                              /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P0_Msk                     (_U_(0x1) << PIO_PDSR_P0_Pos)                  /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P0                         PIO_PDSR_P0_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P0_Msk instead */
#define PIO_PDSR_P1_Pos                     1                                              /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P1_Msk                     (_U_(0x1) << PIO_PDSR_P1_Pos)                  /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P1                         PIO_PDSR_P1_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P1_Msk instead */
#define PIO_PDSR_P2_Pos                     2                                              /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P2_Msk                     (_U_(0x1) << PIO_PDSR_P2_Pos)                  /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P2                         PIO_PDSR_P2_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P2_Msk instead */
#define PIO_PDSR_P3_Pos                     3                                              /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P3_Msk                     (_U_(0x1) << PIO_PDSR_P3_Pos)                  /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P3                         PIO_PDSR_P3_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P3_Msk instead */
#define PIO_PDSR_P4_Pos                     4                                              /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P4_Msk                     (_U_(0x1) << PIO_PDSR_P4_Pos)                  /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P4                         PIO_PDSR_P4_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P4_Msk instead */
#define PIO_PDSR_P5_Pos                     5                                              /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P5_Msk                     (_U_(0x1) << PIO_PDSR_P5_Pos)                  /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P5                         PIO_PDSR_P5_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P5_Msk instead */
#define PIO_PDSR_P6_Pos                     6                                              /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P6_Msk                     (_U_(0x1) << PIO_PDSR_P6_Pos)                  /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P6                         PIO_PDSR_P6_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P6_Msk instead */
#define PIO_PDSR_P7_Pos                     7                                              /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P7_Msk                     (_U_(0x1) << PIO_PDSR_P7_Pos)                  /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P7                         PIO_PDSR_P7_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P7_Msk instead */
#define PIO_PDSR_P8_Pos                     8                                              /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P8_Msk                     (_U_(0x1) << PIO_PDSR_P8_Pos)                  /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P8                         PIO_PDSR_P8_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P8_Msk instead */
#define PIO_PDSR_P9_Pos                     9                                              /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P9_Msk                     (_U_(0x1) << PIO_PDSR_P9_Pos)                  /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P9                         PIO_PDSR_P9_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P9_Msk instead */
#define PIO_PDSR_P10_Pos                    10                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P10_Msk                    (_U_(0x1) << PIO_PDSR_P10_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P10                        PIO_PDSR_P10_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P10_Msk instead */
#define PIO_PDSR_P11_Pos                    11                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P11_Msk                    (_U_(0x1) << PIO_PDSR_P11_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P11                        PIO_PDSR_P11_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P11_Msk instead */
#define PIO_PDSR_P12_Pos                    12                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P12_Msk                    (_U_(0x1) << PIO_PDSR_P12_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P12                        PIO_PDSR_P12_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P12_Msk instead */
#define PIO_PDSR_P13_Pos                    13                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P13_Msk                    (_U_(0x1) << PIO_PDSR_P13_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P13                        PIO_PDSR_P13_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P13_Msk instead */
#define PIO_PDSR_P14_Pos                    14                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P14_Msk                    (_U_(0x1) << PIO_PDSR_P14_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P14                        PIO_PDSR_P14_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P14_Msk instead */
#define PIO_PDSR_P15_Pos                    15                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P15_Msk                    (_U_(0x1) << PIO_PDSR_P15_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P15                        PIO_PDSR_P15_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P15_Msk instead */
#define PIO_PDSR_P16_Pos                    16                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P16_Msk                    (_U_(0x1) << PIO_PDSR_P16_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P16                        PIO_PDSR_P16_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P16_Msk instead */
#define PIO_PDSR_P17_Pos                    17                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P17_Msk                    (_U_(0x1) << PIO_PDSR_P17_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P17                        PIO_PDSR_P17_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P17_Msk instead */
#define PIO_PDSR_P18_Pos                    18                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P18_Msk                    (_U_(0x1) << PIO_PDSR_P18_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P18                        PIO_PDSR_P18_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P18_Msk instead */
#define PIO_PDSR_P19_Pos                    19                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P19_Msk                    (_U_(0x1) << PIO_PDSR_P19_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P19                        PIO_PDSR_P19_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P19_Msk instead */
#define PIO_PDSR_P20_Pos                    20                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P20_Msk                    (_U_(0x1) << PIO_PDSR_P20_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P20                        PIO_PDSR_P20_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P20_Msk instead */
#define PIO_PDSR_P21_Pos                    21                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P21_Msk                    (_U_(0x1) << PIO_PDSR_P21_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P21                        PIO_PDSR_P21_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P21_Msk instead */
#define PIO_PDSR_P22_Pos                    22                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P22_Msk                    (_U_(0x1) << PIO_PDSR_P22_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P22                        PIO_PDSR_P22_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P22_Msk instead */
#define PIO_PDSR_P23_Pos                    23                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P23_Msk                    (_U_(0x1) << PIO_PDSR_P23_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P23                        PIO_PDSR_P23_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P23_Msk instead */
#define PIO_PDSR_P24_Pos                    24                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P24_Msk                    (_U_(0x1) << PIO_PDSR_P24_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P24                        PIO_PDSR_P24_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P24_Msk instead */
#define PIO_PDSR_P25_Pos                    25                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P25_Msk                    (_U_(0x1) << PIO_PDSR_P25_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P25                        PIO_PDSR_P25_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P25_Msk instead */
#define PIO_PDSR_P26_Pos                    26                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P26_Msk                    (_U_(0x1) << PIO_PDSR_P26_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P26                        PIO_PDSR_P26_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P26_Msk instead */
#define PIO_PDSR_P27_Pos                    27                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P27_Msk                    (_U_(0x1) << PIO_PDSR_P27_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P27                        PIO_PDSR_P27_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P27_Msk instead */
#define PIO_PDSR_P28_Pos                    28                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P28_Msk                    (_U_(0x1) << PIO_PDSR_P28_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P28                        PIO_PDSR_P28_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P28_Msk instead */
#define PIO_PDSR_P29_Pos                    29                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P29_Msk                    (_U_(0x1) << PIO_PDSR_P29_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P29                        PIO_PDSR_P29_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P29_Msk instead */
#define PIO_PDSR_P30_Pos                    30                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P30_Msk                    (_U_(0x1) << PIO_PDSR_P30_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P30                        PIO_PDSR_P30_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P30_Msk instead */
#define PIO_PDSR_P31_Pos                    31                                             /**< (PIO_PDSR) Input Data Status Position */
#define PIO_PDSR_P31_Msk                    (_U_(0x1) << PIO_PDSR_P31_Pos)                 /**< (PIO_PDSR) Input Data Status Mask */
#define PIO_PDSR_P31                        PIO_PDSR_P31_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_PDSR_P31_Msk instead */
#define PIO_PDSR_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (PIO_PDSR) Register MASK  (Use PIO_PDSR_Msk instead)  */
#define PIO_PDSR_Msk                        _U_(0xFFFFFFFF)                                /**< (PIO_PDSR) Register Mask  */

#define PIO_PDSR_P_Pos                      0                                              /**< (PIO_PDSR Position) Input Data Status */
#define PIO_PDSR_P_Msk                      (_U_(0xFFFFFFFF) << PIO_PDSR_P_Pos)            /**< (PIO_PDSR Mask) P */
#define PIO_PDSR_P(value)                   (PIO_PDSR_P_Msk & ((value) << PIO_PDSR_P_Pos))  

/* -------- PIO_LOCKSR : (PIO Offset: 0x0c) (R/ 32) PIO Lock Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t P0:1;                      /**< bit:      0  Lock Status                              */
    uint32_t P1:1;                      /**< bit:      1  Lock Status                              */
    uint32_t P2:1;                      /**< bit:      2  Lock Status                              */
    uint32_t P3:1;                      /**< bit:      3  Lock Status                              */
    uint32_t P4:1;                      /**< bit:      4  Lock Status                              */
    uint32_t P5:1;                      /**< bit:      5  Lock Status                              */
    uint32_t P6:1;                      /**< bit:      6  Lock Status                              */
    uint32_t P7:1;                      /**< bit:      7  Lock Status                              */
    uint32_t P8:1;                      /**< bit:      8  Lock Status                              */
    uint32_t P9:1;                      /**< bit:      9  Lock Status                              */
    uint32_t P10:1;                     /**< bit:     10  Lock Status                              */
    uint32_t P11:1;                     /**< bit:     11  Lock Status                              */
    uint32_t P12:1;                     /**< bit:     12  Lock Status                              */
    uint32_t P13:1;                     /**< bit:     13  Lock Status                              */
    uint32_t P14:1;                     /**< bit:     14  Lock Status                              */
    uint32_t P15:1;                     /**< bit:     15  Lock Status                              */
    uint32_t P16:1;                     /**< bit:     16  Lock Status                              */
    uint32_t P17:1;                     /**< bit:     17  Lock Status                              */
    uint32_t P18:1;                     /**< bit:     18  Lock Status                              */
    uint32_t P19:1;                     /**< bit:     19  Lock Status                              */
    uint32_t P20:1;                     /**< bit:     20  Lock Status                              */
    uint32_t P21:1;                     /**< bit:     21  Lock Status                              */
    uint32_t P22:1;                     /**< bit:     22  Lock Status                              */
    uint32_t P23:1;                     /**< bit:     23  Lock Status                              */
    uint32_t P24:1;                     /**< bit:     24  Lock Status                              */
    uint32_t P25:1;                     /**< bit:     25  Lock Status                              */
    uint32_t P26:1;                     /**< bit:     26  Lock Status                              */
    uint32_t P27:1;                     /**< bit:     27  Lock Status                              */
    uint32_t P28:1;                     /**< bit:     28  Lock Status                              */
    uint32_t P29:1;                     /**< bit:     29  Lock Status                              */
    uint32_t P30:1;                     /**< bit:     30  Lock Status                              */
    uint32_t P31:1;                     /**< bit:     31  Lock Status                              */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t P:32;                      /**< bit:  0..31  Lock Status                              */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PIO_LOCKSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PIO_LOCKSR_OFFSET                   (0x0C)                                        /**<  (PIO_LOCKSR) PIO Lock Status Register  Offset */

#define PIO_LOCKSR_P0_Pos                   0                                              /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P0_Msk                   (_U_(0x1) << PIO_LOCKSR_P0_Pos)                /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P0                       PIO_LOCKSR_P0_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P0_Msk instead */
#define PIO_LOCKSR_P1_Pos                   1                                              /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P1_Msk                   (_U_(0x1) << PIO_LOCKSR_P1_Pos)                /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P1                       PIO_LOCKSR_P1_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P1_Msk instead */
#define PIO_LOCKSR_P2_Pos                   2                                              /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P2_Msk                   (_U_(0x1) << PIO_LOCKSR_P2_Pos)                /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P2                       PIO_LOCKSR_P2_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P2_Msk instead */
#define PIO_LOCKSR_P3_Pos                   3                                              /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P3_Msk                   (_U_(0x1) << PIO_LOCKSR_P3_Pos)                /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P3                       PIO_LOCKSR_P3_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P3_Msk instead */
#define PIO_LOCKSR_P4_Pos                   4                                              /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P4_Msk                   (_U_(0x1) << PIO_LOCKSR_P4_Pos)                /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P4                       PIO_LOCKSR_P4_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P4_Msk instead */
#define PIO_LOCKSR_P5_Pos                   5                                              /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P5_Msk                   (_U_(0x1) << PIO_LOCKSR_P5_Pos)                /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P5                       PIO_LOCKSR_P5_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P5_Msk instead */
#define PIO_LOCKSR_P6_Pos                   6                                              /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P6_Msk                   (_U_(0x1) << PIO_LOCKSR_P6_Pos)                /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P6                       PIO_LOCKSR_P6_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P6_Msk instead */
#define PIO_LOCKSR_P7_Pos                   7                                              /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P7_Msk                   (_U_(0x1) << PIO_LOCKSR_P7_Pos)                /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P7                       PIO_LOCKSR_P7_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P7_Msk instead */
#define PIO_LOCKSR_P8_Pos                   8                                              /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P8_Msk                   (_U_(0x1) << PIO_LOCKSR_P8_Pos)                /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P8                       PIO_LOCKSR_P8_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P8_Msk instead */
#define PIO_LOCKSR_P9_Pos                   9                                              /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P9_Msk                   (_U_(0x1) << PIO_LOCKSR_P9_Pos)                /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P9                       PIO_LOCKSR_P9_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P9_Msk instead */
#define PIO_LOCKSR_P10_Pos                  10                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P10_Msk                  (_U_(0x1) << PIO_LOCKSR_P10_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P10                      PIO_LOCKSR_P10_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P10_Msk instead */
#define PIO_LOCKSR_P11_Pos                  11                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P11_Msk                  (_U_(0x1) << PIO_LOCKSR_P11_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P11                      PIO_LOCKSR_P11_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P11_Msk instead */
#define PIO_LOCKSR_P12_Pos                  12                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P12_Msk                  (_U_(0x1) << PIO_LOCKSR_P12_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P12                      PIO_LOCKSR_P12_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P12_Msk instead */
#define PIO_LOCKSR_P13_Pos                  13                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P13_Msk                  (_U_(0x1) << PIO_LOCKSR_P13_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P13                      PIO_LOCKSR_P13_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P13_Msk instead */
#define PIO_LOCKSR_P14_Pos                  14                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P14_Msk                  (_U_(0x1) << PIO_LOCKSR_P14_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P14                      PIO_LOCKSR_P14_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P14_Msk instead */
#define PIO_LOCKSR_P15_Pos                  15                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P15_Msk                  (_U_(0x1) << PIO_LOCKSR_P15_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P15                      PIO_LOCKSR_P15_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P15_Msk instead */
#define PIO_LOCKSR_P16_Pos                  16                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P16_Msk                  (_U_(0x1) << PIO_LOCKSR_P16_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P16                      PIO_LOCKSR_P16_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P16_Msk instead */
#define PIO_LOCKSR_P17_Pos                  17                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P17_Msk                  (_U_(0x1) << PIO_LOCKSR_P17_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P17                      PIO_LOCKSR_P17_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P17_Msk instead */
#define PIO_LOCKSR_P18_Pos                  18                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P18_Msk                  (_U_(0x1) << PIO_LOCKSR_P18_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P18                      PIO_LOCKSR_P18_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P18_Msk instead */
#define PIO_LOCKSR_P19_Pos                  19                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P19_Msk                  (_U_(0x1) << PIO_LOCKSR_P19_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P19                      PIO_LOCKSR_P19_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P19_Msk instead */
#define PIO_LOCKSR_P20_Pos                  20                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P20_Msk                  (_U_(0x1) << PIO_LOCKSR_P20_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P20                      PIO_LOCKSR_P20_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P20_Msk instead */
#define PIO_LOCKSR_P21_Pos                  21                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P21_Msk                  (_U_(0x1) << PIO_LOCKSR_P21_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P21                      PIO_LOCKSR_P21_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P21_Msk instead */
#define PIO_LOCKSR_P22_Pos                  22                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P22_Msk                  (_U_(0x1) << PIO_LOCKSR_P22_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P22                      PIO_LOCKSR_P22_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P22_Msk instead */
#define PIO_LOCKSR_P23_Pos                  23                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P23_Msk                  (_U_(0x1) << PIO_LOCKSR_P23_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P23                      PIO_LOCKSR_P23_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P23_Msk instead */
#define PIO_LOCKSR_P24_Pos                  24                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P24_Msk                  (_U_(0x1) << PIO_LOCKSR_P24_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P24                      PIO_LOCKSR_P24_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P24_Msk instead */
#define PIO_LOCKSR_P25_Pos                  25                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P25_Msk                  (_U_(0x1) << PIO_LOCKSR_P25_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P25                      PIO_LOCKSR_P25_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P25_Msk instead */
#define PIO_LOCKSR_P26_Pos                  26                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P26_Msk                  (_U_(0x1) << PIO_LOCKSR_P26_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P26                      PIO_LOCKSR_P26_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P26_Msk instead */
#define PIO_LOCKSR_P27_Pos                  27                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P27_Msk                  (_U_(0x1) << PIO_LOCKSR_P27_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P27                      PIO_LOCKSR_P27_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P27_Msk instead */
#define PIO_LOCKSR_P28_Pos                  28                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P28_Msk                  (_U_(0x1) << PIO_LOCKSR_P28_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P28                      PIO_LOCKSR_P28_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P28_Msk instead */
#define PIO_LOCKSR_P29_Pos                  29                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P29_Msk                  (_U_(0x1) << PIO_LOCKSR_P29_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P29                      PIO_LOCKSR_P29_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P29_Msk instead */
#define PIO_LOCKSR_P30_Pos                  30                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P30_Msk                  (_U_(0x1) << PIO_LOCKSR_P30_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P30                      PIO_LOCKSR_P30_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P30_Msk instead */
#define PIO_LOCKSR_P31_Pos                  31                                             /**< (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P31_Msk                  (_U_(0x1) << PIO_LOCKSR_P31_Pos)               /**< (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P31                      PIO_LOCKSR_P31_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_LOCKSR_P31_Msk instead */
#define PIO_LOCKSR_MASK                     _U_(0xFFFFFFFF)                                /**< \deprecated (PIO_LOCKSR) Register MASK  (Use PIO_LOCKSR_Msk instead)  */
#define PIO_LOCKSR_Msk                      _U_(0xFFFFFFFF)                                /**< (PIO_LOCKSR) Register Mask  */

#define PIO_LOCKSR_P_Pos                    0                                              /**< (PIO_LOCKSR Position) Lock Status */
#define PIO_LOCKSR_P_Msk                    (_U_(0xFFFFFFFF) << PIO_LOCKSR_P_Pos)          /**< (PIO_LOCKSR Mask) P */
#define PIO_LOCKSR_P(value)                 (PIO_LOCKSR_P_Msk & ((value) << PIO_LOCKSR_P_Pos))  

/* -------- PIO_SODR : (PIO Offset: 0x10) (/W 32) PIO Set Output Data Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t P0:1;                      /**< bit:      0  Set Output Data                          */
    uint32_t P1:1;                      /**< bit:      1  Set Output Data                          */
    uint32_t P2:1;                      /**< bit:      2  Set Output Data                          */
    uint32_t P3:1;                      /**< bit:      3  Set Output Data                          */
    uint32_t P4:1;                      /**< bit:      4  Set Output Data                          */
    uint32_t P5:1;                      /**< bit:      5  Set Output Data                          */
    uint32_t P6:1;                      /**< bit:      6  Set Output Data                          */
    uint32_t P7:1;                      /**< bit:      7  Set Output Data                          */
    uint32_t P8:1;                      /**< bit:      8  Set Output Data                          */
    uint32_t P9:1;                      /**< bit:      9  Set Output Data                          */
    uint32_t P10:1;                     /**< bit:     10  Set Output Data                          */
    uint32_t P11:1;                     /**< bit:     11  Set Output Data                          */
    uint32_t P12:1;                     /**< bit:     12  Set Output Data                          */
    uint32_t P13:1;                     /**< bit:     13  Set Output Data                          */
    uint32_t P14:1;                     /**< bit:     14  Set Output Data                          */
    uint32_t P15:1;                     /**< bit:     15  Set Output Data                          */
    uint32_t P16:1;                     /**< bit:     16  Set Output Data                          */
    uint32_t P17:1;                     /**< bit:     17  Set Output Data                          */
    uint32_t P18:1;                     /**< bit:     18  Set Output Data                          */
    uint32_t P19:1;                     /**< bit:     19  Set Output Data                          */
    uint32_t P20:1;                     /**< bit:     20  Set Output Data                          */
    uint32_t P21:1;                     /**< bit:     21  Set Output Data                          */
    uint32_t P22:1;                     /**< bit:     22  Set Output Data                          */
    uint32_t P23:1;                     /**< bit:     23  Set Output Data                          */
    uint32_t P24:1;                     /**< bit:     24  Set Output Data                          */
    uint32_t P25:1;                     /**< bit:     25  Set Output Data                          */
    uint32_t P26:1;                     /**< bit:     26  Set Output Data                          */
    uint32_t P27:1;                     /**< bit:     27  Set Output Data                          */
    uint32_t P28:1;                     /**< bit:     28  Set Output Data                          */
    uint32_t P29:1;                     /**< bit:     29  Set Output Data                          */
    uint32_t P30:1;                     /**< bit:     30  Set Output Data                          */
    uint32_t P31:1;                     /**< bit:     31  Set Output Data                          */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t P:32;                      /**< bit:  0..31  Set Output Data                          */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PIO_SODR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PIO_SODR_OFFSET                     (0x10)                                        /**<  (PIO_SODR) PIO Set Output Data Register  Offset */

#define PIO_SODR_P0_Pos                     0                                              /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P0_Msk                     (_U_(0x1) << PIO_SODR_P0_Pos)                  /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P0                         PIO_SODR_P0_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P0_Msk instead */
#define PIO_SODR_P1_Pos                     1                                              /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P1_Msk                     (_U_(0x1) << PIO_SODR_P1_Pos)                  /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P1                         PIO_SODR_P1_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P1_Msk instead */
#define PIO_SODR_P2_Pos                     2                                              /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P2_Msk                     (_U_(0x1) << PIO_SODR_P2_Pos)                  /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P2                         PIO_SODR_P2_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P2_Msk instead */
#define PIO_SODR_P3_Pos                     3                                              /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P3_Msk                     (_U_(0x1) << PIO_SODR_P3_Pos)                  /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P3                         PIO_SODR_P3_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P3_Msk instead */
#define PIO_SODR_P4_Pos                     4                                              /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P4_Msk                     (_U_(0x1) << PIO_SODR_P4_Pos)                  /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P4                         PIO_SODR_P4_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P4_Msk instead */
#define PIO_SODR_P5_Pos                     5                                              /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P5_Msk                     (_U_(0x1) << PIO_SODR_P5_Pos)                  /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P5                         PIO_SODR_P5_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P5_Msk instead */
#define PIO_SODR_P6_Pos                     6                                              /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P6_Msk                     (_U_(0x1) << PIO_SODR_P6_Pos)                  /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P6                         PIO_SODR_P6_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P6_Msk instead */
#define PIO_SODR_P7_Pos                     7                                              /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P7_Msk                     (_U_(0x1) << PIO_SODR_P7_Pos)                  /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P7                         PIO_SODR_P7_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P7_Msk instead */
#define PIO_SODR_P8_Pos                     8                                              /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P8_Msk                     (_U_(0x1) << PIO_SODR_P8_Pos)                  /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P8                         PIO_SODR_P8_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P8_Msk instead */
#define PIO_SODR_P9_Pos                     9                                              /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P9_Msk                     (_U_(0x1) << PIO_SODR_P9_Pos)                  /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P9                         PIO_SODR_P9_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P9_Msk instead */
#define PIO_SODR_P10_Pos                    10                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P10_Msk                    (_U_(0x1) << PIO_SODR_P10_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P10                        PIO_SODR_P10_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P10_Msk instead */
#define PIO_SODR_P11_Pos                    11                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P11_Msk                    (_U_(0x1) << PIO_SODR_P11_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P11                        PIO_SODR_P11_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P11_Msk instead */
#define PIO_SODR_P12_Pos                    12                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P12_Msk                    (_U_(0x1) << PIO_SODR_P12_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P12                        PIO_SODR_P12_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P12_Msk instead */
#define PIO_SODR_P13_Pos                    13                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P13_Msk                    (_U_(0x1) << PIO_SODR_P13_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P13                        PIO_SODR_P13_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P13_Msk instead */
#define PIO_SODR_P14_Pos                    14                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P14_Msk                    (_U_(0x1) << PIO_SODR_P14_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P14                        PIO_SODR_P14_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P14_Msk instead */
#define PIO_SODR_P15_Pos                    15                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P15_Msk                    (_U_(0x1) << PIO_SODR_P15_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P15                        PIO_SODR_P15_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P15_Msk instead */
#define PIO_SODR_P16_Pos                    16                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P16_Msk                    (_U_(0x1) << PIO_SODR_P16_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P16                        PIO_SODR_P16_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P16_Msk instead */
#define PIO_SODR_P17_Pos                    17                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P17_Msk                    (_U_(0x1) << PIO_SODR_P17_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P17                        PIO_SODR_P17_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P17_Msk instead */
#define PIO_SODR_P18_Pos                    18                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P18_Msk                    (_U_(0x1) << PIO_SODR_P18_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P18                        PIO_SODR_P18_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P18_Msk instead */
#define PIO_SODR_P19_Pos                    19                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P19_Msk                    (_U_(0x1) << PIO_SODR_P19_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P19                        PIO_SODR_P19_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P19_Msk instead */
#define PIO_SODR_P20_Pos                    20                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P20_Msk                    (_U_(0x1) << PIO_SODR_P20_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P20                        PIO_SODR_P20_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P20_Msk instead */
#define PIO_SODR_P21_Pos                    21                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P21_Msk                    (_U_(0x1) << PIO_SODR_P21_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P21                        PIO_SODR_P21_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P21_Msk instead */
#define PIO_SODR_P22_Pos                    22                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P22_Msk                    (_U_(0x1) << PIO_SODR_P22_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P22                        PIO_SODR_P22_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P22_Msk instead */
#define PIO_SODR_P23_Pos                    23                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P23_Msk                    (_U_(0x1) << PIO_SODR_P23_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P23                        PIO_SODR_P23_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P23_Msk instead */
#define PIO_SODR_P24_Pos                    24                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P24_Msk                    (_U_(0x1) << PIO_SODR_P24_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P24                        PIO_SODR_P24_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P24_Msk instead */
#define PIO_SODR_P25_Pos                    25                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P25_Msk                    (_U_(0x1) << PIO_SODR_P25_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P25                        PIO_SODR_P25_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P25_Msk instead */
#define PIO_SODR_P26_Pos                    26                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P26_Msk                    (_U_(0x1) << PIO_SODR_P26_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P26                        PIO_SODR_P26_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P26_Msk instead */
#define PIO_SODR_P27_Pos                    27                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P27_Msk                    (_U_(0x1) << PIO_SODR_P27_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P27                        PIO_SODR_P27_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P27_Msk instead */
#define PIO_SODR_P28_Pos                    28                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P28_Msk                    (_U_(0x1) << PIO_SODR_P28_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P28                        PIO_SODR_P28_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P28_Msk instead */
#define PIO_SODR_P29_Pos                    29                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P29_Msk                    (_U_(0x1) << PIO_SODR_P29_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P29                        PIO_SODR_P29_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P29_Msk instead */
#define PIO_SODR_P30_Pos                    30                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P30_Msk                    (_U_(0x1) << PIO_SODR_P30_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P30                        PIO_SODR_P30_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P30_Msk instead */
#define PIO_SODR_P31_Pos                    31                                             /**< (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P31_Msk                    (_U_(0x1) << PIO_SODR_P31_Pos)                 /**< (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P31                        PIO_SODR_P31_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_SODR_P31_Msk instead */
#define PIO_SODR_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (PIO_SODR) Register MASK  (Use PIO_SODR_Msk instead)  */
#define PIO_SODR_Msk                        _U_(0xFFFFFFFF)                                /**< (PIO_SODR) Register Mask  */

#define PIO_SODR_P_Pos                      0                                              /**< (PIO_SODR Position) Set Output Data */
#define PIO_SODR_P_Msk                      (_U_(0xFFFFFFFF) << PIO_SODR_P_Pos)            /**< (PIO_SODR Mask) P */
#define PIO_SODR_P(value)                   (PIO_SODR_P_Msk & ((value) << PIO_SODR_P_Pos))  

/* -------- PIO_CODR : (PIO Offset: 0x14) (/W 32) PIO Clear Output Data Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t P0:1;                      /**< bit:      0  Clear Output Data                        */
    uint32_t P1:1;                      /**< bit:      1  Clear Output Data                        */
    uint32_t P2:1;                      /**< bit:      2  Clear Output Data                        */
    uint32_t P3:1;                      /**< bit:      3  Clear Output Data                        */
    uint32_t P4:1;                      /**< bit:      4  Clear Output Data                        */
    uint32_t P5:1;                      /**< bit:      5  Clear Output Data                        */
    uint32_t P6:1;                      /**< bit:      6  Clear Output Data                        */
    uint32_t P7:1;                      /**< bit:      7  Clear Output Data                        */
    uint32_t P8:1;                      /**< bit:      8  Clear Output Data                        */
    uint32_t P9:1;                      /**< bit:      9  Clear Output Data                        */
    uint32_t P10:1;                     /**< bit:     10  Clear Output Data                        */
    uint32_t P11:1;                     /**< bit:     11  Clear Output Data                        */
    uint32_t P12:1;                     /**< bit:     12  Clear Output Data                        */
    uint32_t P13:1;                     /**< bit:     13  Clear Output Data                        */
    uint32_t P14:1;                     /**< bit:     14  Clear Output Data                        */
    uint32_t P15:1;                     /**< bit:     15  Clear Output Data                        */
    uint32_t P16:1;                     /**< bit:     16  Clear Output Data                        */
    uint32_t P17:1;                     /**< bit:     17  Clear Output Data                        */
    uint32_t P18:1;                     /**< bit:     18  Clear Output Data                        */
    uint32_t P19:1;                     /**< bit:     19  Clear Output Data                        */
    uint32_t P20:1;                     /**< bit:     20  Clear Output Data                        */
    uint32_t P21:1;                     /**< bit:     21  Clear Output Data                        */
    uint32_t P22:1;                     /**< bit:     22  Clear Output Data                        */
    uint32_t P23:1;                     /**< bit:     23  Clear Output Data                        */
    uint32_t P24:1;                     /**< bit:     24  Clear Output Data                        */
    uint32_t P25:1;                     /**< bit:     25  Clear Output Data                        */
    uint32_t P26:1;                     /**< bit:     26  Clear Output Data                        */
    uint32_t P27:1;                     /**< bit:     27  Clear Output Data                        */
    uint32_t P28:1;                     /**< bit:     28  Clear Output Data                        */
    uint32_t P29:1;                     /**< bit:     29  Clear Output Data                        */
    uint32_t P30:1;                     /**< bit:     30  Clear Output Data                        */
    uint32_t P31:1;                     /**< bit:     31  Clear Output Data                        */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t P:32;                      /**< bit:  0..31  Clear Output Data                        */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PIO_CODR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PIO_CODR_OFFSET                     (0x14)                                        /**<  (PIO_CODR) PIO Clear Output Data Register  Offset */

#define PIO_CODR_P0_Pos                     0                                              /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P0_Msk                     (_U_(0x1) << PIO_CODR_P0_Pos)                  /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P0                         PIO_CODR_P0_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P0_Msk instead */
#define PIO_CODR_P1_Pos                     1                                              /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P1_Msk                     (_U_(0x1) << PIO_CODR_P1_Pos)                  /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P1                         PIO_CODR_P1_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P1_Msk instead */
#define PIO_CODR_P2_Pos                     2                                              /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P2_Msk                     (_U_(0x1) << PIO_CODR_P2_Pos)                  /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P2                         PIO_CODR_P2_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P2_Msk instead */
#define PIO_CODR_P3_Pos                     3                                              /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P3_Msk                     (_U_(0x1) << PIO_CODR_P3_Pos)                  /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P3                         PIO_CODR_P3_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P3_Msk instead */
#define PIO_CODR_P4_Pos                     4                                              /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P4_Msk                     (_U_(0x1) << PIO_CODR_P4_Pos)                  /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P4                         PIO_CODR_P4_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P4_Msk instead */
#define PIO_CODR_P5_Pos                     5                                              /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P5_Msk                     (_U_(0x1) << PIO_CODR_P5_Pos)                  /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P5                         PIO_CODR_P5_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P5_Msk instead */
#define PIO_CODR_P6_Pos                     6                                              /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P6_Msk                     (_U_(0x1) << PIO_CODR_P6_Pos)                  /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P6                         PIO_CODR_P6_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P6_Msk instead */
#define PIO_CODR_P7_Pos                     7                                              /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P7_Msk                     (_U_(0x1) << PIO_CODR_P7_Pos)                  /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P7                         PIO_CODR_P7_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P7_Msk instead */
#define PIO_CODR_P8_Pos                     8                                              /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P8_Msk                     (_U_(0x1) << PIO_CODR_P8_Pos)                  /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P8                         PIO_CODR_P8_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P8_Msk instead */
#define PIO_CODR_P9_Pos                     9                                              /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P9_Msk                     (_U_(0x1) << PIO_CODR_P9_Pos)                  /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P9                         PIO_CODR_P9_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P9_Msk instead */
#define PIO_CODR_P10_Pos                    10                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P10_Msk                    (_U_(0x1) << PIO_CODR_P10_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P10                        PIO_CODR_P10_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P10_Msk instead */
#define PIO_CODR_P11_Pos                    11                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P11_Msk                    (_U_(0x1) << PIO_CODR_P11_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P11                        PIO_CODR_P11_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P11_Msk instead */
#define PIO_CODR_P12_Pos                    12                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P12_Msk                    (_U_(0x1) << PIO_CODR_P12_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P12                        PIO_CODR_P12_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P12_Msk instead */
#define PIO_CODR_P13_Pos                    13                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P13_Msk                    (_U_(0x1) << PIO_CODR_P13_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P13                        PIO_CODR_P13_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P13_Msk instead */
#define PIO_CODR_P14_Pos                    14                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P14_Msk                    (_U_(0x1) << PIO_CODR_P14_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P14                        PIO_CODR_P14_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P14_Msk instead */
#define PIO_CODR_P15_Pos                    15                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P15_Msk                    (_U_(0x1) << PIO_CODR_P15_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P15                        PIO_CODR_P15_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P15_Msk instead */
#define PIO_CODR_P16_Pos                    16                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P16_Msk                    (_U_(0x1) << PIO_CODR_P16_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P16                        PIO_CODR_P16_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P16_Msk instead */
#define PIO_CODR_P17_Pos                    17                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P17_Msk                    (_U_(0x1) << PIO_CODR_P17_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P17                        PIO_CODR_P17_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P17_Msk instead */
#define PIO_CODR_P18_Pos                    18                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P18_Msk                    (_U_(0x1) << PIO_CODR_P18_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P18                        PIO_CODR_P18_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P18_Msk instead */
#define PIO_CODR_P19_Pos                    19                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P19_Msk                    (_U_(0x1) << PIO_CODR_P19_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P19                        PIO_CODR_P19_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P19_Msk instead */
#define PIO_CODR_P20_Pos                    20                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P20_Msk                    (_U_(0x1) << PIO_CODR_P20_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P20                        PIO_CODR_P20_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P20_Msk instead */
#define PIO_CODR_P21_Pos                    21                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P21_Msk                    (_U_(0x1) << PIO_CODR_P21_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P21                        PIO_CODR_P21_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P21_Msk instead */
#define PIO_CODR_P22_Pos                    22                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P22_Msk                    (_U_(0x1) << PIO_CODR_P22_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P22                        PIO_CODR_P22_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P22_Msk instead */
#define PIO_CODR_P23_Pos                    23                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P23_Msk                    (_U_(0x1) << PIO_CODR_P23_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P23                        PIO_CODR_P23_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P23_Msk instead */
#define PIO_CODR_P24_Pos                    24                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P24_Msk                    (_U_(0x1) << PIO_CODR_P24_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P24                        PIO_CODR_P24_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P24_Msk instead */
#define PIO_CODR_P25_Pos                    25                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P25_Msk                    (_U_(0x1) << PIO_CODR_P25_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P25                        PIO_CODR_P25_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P25_Msk instead */
#define PIO_CODR_P26_Pos                    26                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P26_Msk                    (_U_(0x1) << PIO_CODR_P26_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P26                        PIO_CODR_P26_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P26_Msk instead */
#define PIO_CODR_P27_Pos                    27                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P27_Msk                    (_U_(0x1) << PIO_CODR_P27_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P27                        PIO_CODR_P27_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P27_Msk instead */
#define PIO_CODR_P28_Pos                    28                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P28_Msk                    (_U_(0x1) << PIO_CODR_P28_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P28                        PIO_CODR_P28_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P28_Msk instead */
#define PIO_CODR_P29_Pos                    29                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P29_Msk                    (_U_(0x1) << PIO_CODR_P29_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P29                        PIO_CODR_P29_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P29_Msk instead */
#define PIO_CODR_P30_Pos                    30                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P30_Msk                    (_U_(0x1) << PIO_CODR_P30_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P30                        PIO_CODR_P30_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P30_Msk instead */
#define PIO_CODR_P31_Pos                    31                                             /**< (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P31_Msk                    (_U_(0x1) << PIO_CODR_P31_Pos)                 /**< (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P31                        PIO_CODR_P31_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_CODR_P31_Msk instead */
#define PIO_CODR_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (PIO_CODR) Register MASK  (Use PIO_CODR_Msk instead)  */
#define PIO_CODR_Msk                        _U_(0xFFFFFFFF)                                /**< (PIO_CODR) Register Mask  */

#define PIO_CODR_P_Pos                      0                                              /**< (PIO_CODR Position) Clear Output Data */
#define PIO_CODR_P_Msk                      (_U_(0xFFFFFFFF) << PIO_CODR_P_Pos)            /**< (PIO_CODR Mask) P */
#define PIO_CODR_P(value)                   (PIO_CODR_P_Msk & ((value) << PIO_CODR_P_Pos))  

/* -------- PIO_ODSR : (PIO Offset: 0x18) (R/W 32) PIO Output Data Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t P0:1;                      /**< bit:      0  Output Data Status                       */
    uint32_t P1:1;                      /**< bit:      1  Output Data Status                       */
    uint32_t P2:1;                      /**< bit:      2  Output Data Status                       */
    uint32_t P3:1;                      /**< bit:      3  Output Data Status                       */
    uint32_t P4:1;                      /**< bit:      4  Output Data Status                       */
    uint32_t P5:1;                      /**< bit:      5  Output Data Status                       */
    uint32_t P6:1;                      /**< bit:      6  Output Data Status                       */
    uint32_t P7:1;                      /**< bit:      7  Output Data Status                       */
    uint32_t P8:1;                      /**< bit:      8  Output Data Status                       */
    uint32_t P9:1;                      /**< bit:      9  Output Data Status                       */
    uint32_t P10:1;                     /**< bit:     10  Output Data Status                       */
    uint32_t P11:1;                     /**< bit:     11  Output Data Status                       */
    uint32_t P12:1;                     /**< bit:     12  Output Data Status                       */
    uint32_t P13:1;                     /**< bit:     13  Output Data Status                       */
    uint32_t P14:1;                     /**< bit:     14  Output Data Status                       */
    uint32_t P15:1;                     /**< bit:     15  Output Data Status                       */
    uint32_t P16:1;                     /**< bit:     16  Output Data Status                       */
    uint32_t P17:1;                     /**< bit:     17  Output Data Status                       */
    uint32_t P18:1;                     /**< bit:     18  Output Data Status                       */
    uint32_t P19:1;                     /**< bit:     19  Output Data Status                       */
    uint32_t P20:1;                     /**< bit:     20  Output Data Status                       */
    uint32_t P21:1;                     /**< bit:     21  Output Data Status                       */
    uint32_t P22:1;                     /**< bit:     22  Output Data Status                       */
    uint32_t P23:1;                     /**< bit:     23  Output Data Status                       */
    uint32_t P24:1;                     /**< bit:     24  Output Data Status                       */
    uint32_t P25:1;                     /**< bit:     25  Output Data Status                       */
    uint32_t P26:1;                     /**< bit:     26  Output Data Status                       */
    uint32_t P27:1;                     /**< bit:     27  Output Data Status                       */
    uint32_t P28:1;                     /**< bit:     28  Output Data Status                       */
    uint32_t P29:1;                     /**< bit:     29  Output Data Status                       */
    uint32_t P30:1;                     /**< bit:     30  Output Data Status                       */
    uint32_t P31:1;                     /**< bit:     31  Output Data Status                       */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t P:32;                      /**< bit:  0..31  Output Data Status                       */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PIO_ODSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PIO_ODSR_OFFSET                     (0x18)                                        /**<  (PIO_ODSR) PIO Output Data Status Register  Offset */

#define PIO_ODSR_P0_Pos                     0                                              /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P0_Msk                     (_U_(0x1) << PIO_ODSR_P0_Pos)                  /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P0                         PIO_ODSR_P0_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P0_Msk instead */
#define PIO_ODSR_P1_Pos                     1                                              /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P1_Msk                     (_U_(0x1) << PIO_ODSR_P1_Pos)                  /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P1                         PIO_ODSR_P1_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P1_Msk instead */
#define PIO_ODSR_P2_Pos                     2                                              /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P2_Msk                     (_U_(0x1) << PIO_ODSR_P2_Pos)                  /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P2                         PIO_ODSR_P2_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P2_Msk instead */
#define PIO_ODSR_P3_Pos                     3                                              /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P3_Msk                     (_U_(0x1) << PIO_ODSR_P3_Pos)                  /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P3                         PIO_ODSR_P3_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P3_Msk instead */
#define PIO_ODSR_P4_Pos                     4                                              /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P4_Msk                     (_U_(0x1) << PIO_ODSR_P4_Pos)                  /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P4                         PIO_ODSR_P4_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P4_Msk instead */
#define PIO_ODSR_P5_Pos                     5                                              /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P5_Msk                     (_U_(0x1) << PIO_ODSR_P5_Pos)                  /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P5                         PIO_ODSR_P5_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P5_Msk instead */
#define PIO_ODSR_P6_Pos                     6                                              /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P6_Msk                     (_U_(0x1) << PIO_ODSR_P6_Pos)                  /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P6                         PIO_ODSR_P6_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P6_Msk instead */
#define PIO_ODSR_P7_Pos                     7                                              /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P7_Msk                     (_U_(0x1) << PIO_ODSR_P7_Pos)                  /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P7                         PIO_ODSR_P7_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P7_Msk instead */
#define PIO_ODSR_P8_Pos                     8                                              /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P8_Msk                     (_U_(0x1) << PIO_ODSR_P8_Pos)                  /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P8                         PIO_ODSR_P8_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P8_Msk instead */
#define PIO_ODSR_P9_Pos                     9                                              /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P9_Msk                     (_U_(0x1) << PIO_ODSR_P9_Pos)                  /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P9                         PIO_ODSR_P9_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P9_Msk instead */
#define PIO_ODSR_P10_Pos                    10                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P10_Msk                    (_U_(0x1) << PIO_ODSR_P10_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P10                        PIO_ODSR_P10_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P10_Msk instead */
#define PIO_ODSR_P11_Pos                    11                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P11_Msk                    (_U_(0x1) << PIO_ODSR_P11_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P11                        PIO_ODSR_P11_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P11_Msk instead */
#define PIO_ODSR_P12_Pos                    12                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P12_Msk                    (_U_(0x1) << PIO_ODSR_P12_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P12                        PIO_ODSR_P12_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P12_Msk instead */
#define PIO_ODSR_P13_Pos                    13                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P13_Msk                    (_U_(0x1) << PIO_ODSR_P13_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P13                        PIO_ODSR_P13_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P13_Msk instead */
#define PIO_ODSR_P14_Pos                    14                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P14_Msk                    (_U_(0x1) << PIO_ODSR_P14_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P14                        PIO_ODSR_P14_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P14_Msk instead */
#define PIO_ODSR_P15_Pos                    15                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P15_Msk                    (_U_(0x1) << PIO_ODSR_P15_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P15                        PIO_ODSR_P15_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P15_Msk instead */
#define PIO_ODSR_P16_Pos                    16                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P16_Msk                    (_U_(0x1) << PIO_ODSR_P16_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P16                        PIO_ODSR_P16_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P16_Msk instead */
#define PIO_ODSR_P17_Pos                    17                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P17_Msk                    (_U_(0x1) << PIO_ODSR_P17_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P17                        PIO_ODSR_P17_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P17_Msk instead */
#define PIO_ODSR_P18_Pos                    18                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P18_Msk                    (_U_(0x1) << PIO_ODSR_P18_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P18                        PIO_ODSR_P18_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P18_Msk instead */
#define PIO_ODSR_P19_Pos                    19                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P19_Msk                    (_U_(0x1) << PIO_ODSR_P19_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P19                        PIO_ODSR_P19_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P19_Msk instead */
#define PIO_ODSR_P20_Pos                    20                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P20_Msk                    (_U_(0x1) << PIO_ODSR_P20_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P20                        PIO_ODSR_P20_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P20_Msk instead */
#define PIO_ODSR_P21_Pos                    21                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P21_Msk                    (_U_(0x1) << PIO_ODSR_P21_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P21                        PIO_ODSR_P21_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P21_Msk instead */
#define PIO_ODSR_P22_Pos                    22                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P22_Msk                    (_U_(0x1) << PIO_ODSR_P22_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P22                        PIO_ODSR_P22_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P22_Msk instead */
#define PIO_ODSR_P23_Pos                    23                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P23_Msk                    (_U_(0x1) << PIO_ODSR_P23_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P23                        PIO_ODSR_P23_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P23_Msk instead */
#define PIO_ODSR_P24_Pos                    24                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P24_Msk                    (_U_(0x1) << PIO_ODSR_P24_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P24                        PIO_ODSR_P24_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P24_Msk instead */
#define PIO_ODSR_P25_Pos                    25                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P25_Msk                    (_U_(0x1) << PIO_ODSR_P25_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P25                        PIO_ODSR_P25_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P25_Msk instead */
#define PIO_ODSR_P26_Pos                    26                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P26_Msk                    (_U_(0x1) << PIO_ODSR_P26_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P26                        PIO_ODSR_P26_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P26_Msk instead */
#define PIO_ODSR_P27_Pos                    27                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P27_Msk                    (_U_(0x1) << PIO_ODSR_P27_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P27                        PIO_ODSR_P27_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P27_Msk instead */
#define PIO_ODSR_P28_Pos                    28                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P28_Msk                    (_U_(0x1) << PIO_ODSR_P28_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P28                        PIO_ODSR_P28_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P28_Msk instead */
#define PIO_ODSR_P29_Pos                    29                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P29_Msk                    (_U_(0x1) << PIO_ODSR_P29_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P29                        PIO_ODSR_P29_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P29_Msk instead */
#define PIO_ODSR_P30_Pos                    30                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P30_Msk                    (_U_(0x1) << PIO_ODSR_P30_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P30                        PIO_ODSR_P30_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P30_Msk instead */
#define PIO_ODSR_P31_Pos                    31                                             /**< (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P31_Msk                    (_U_(0x1) << PIO_ODSR_P31_Pos)                 /**< (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P31                        PIO_ODSR_P31_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ODSR_P31_Msk instead */
#define PIO_ODSR_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (PIO_ODSR) Register MASK  (Use PIO_ODSR_Msk instead)  */
#define PIO_ODSR_Msk                        _U_(0xFFFFFFFF)                                /**< (PIO_ODSR) Register Mask  */

#define PIO_ODSR_P_Pos                      0                                              /**< (PIO_ODSR Position) Output Data Status */
#define PIO_ODSR_P_Msk                      (_U_(0xFFFFFFFF) << PIO_ODSR_P_Pos)            /**< (PIO_ODSR Mask) P */
#define PIO_ODSR_P(value)                   (PIO_ODSR_P_Msk & ((value) << PIO_ODSR_P_Pos))  

/* -------- PIO_IER : (PIO Offset: 0x20) (/W 32) PIO Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t P0:1;                      /**< bit:      0  Input Change Interrupt Enable            */
    uint32_t P1:1;                      /**< bit:      1  Input Change Interrupt Enable            */
    uint32_t P2:1;                      /**< bit:      2  Input Change Interrupt Enable            */
    uint32_t P3:1;                      /**< bit:      3  Input Change Interrupt Enable            */
    uint32_t P4:1;                      /**< bit:      4  Input Change Interrupt Enable            */
    uint32_t P5:1;                      /**< bit:      5  Input Change Interrupt Enable            */
    uint32_t P6:1;                      /**< bit:      6  Input Change Interrupt Enable            */
    uint32_t P7:1;                      /**< bit:      7  Input Change Interrupt Enable            */
    uint32_t P8:1;                      /**< bit:      8  Input Change Interrupt Enable            */
    uint32_t P9:1;                      /**< bit:      9  Input Change Interrupt Enable            */
    uint32_t P10:1;                     /**< bit:     10  Input Change Interrupt Enable            */
    uint32_t P11:1;                     /**< bit:     11  Input Change Interrupt Enable            */
    uint32_t P12:1;                     /**< bit:     12  Input Change Interrupt Enable            */
    uint32_t P13:1;                     /**< bit:     13  Input Change Interrupt Enable            */
    uint32_t P14:1;                     /**< bit:     14  Input Change Interrupt Enable            */
    uint32_t P15:1;                     /**< bit:     15  Input Change Interrupt Enable            */
    uint32_t P16:1;                     /**< bit:     16  Input Change Interrupt Enable            */
    uint32_t P17:1;                     /**< bit:     17  Input Change Interrupt Enable            */
    uint32_t P18:1;                     /**< bit:     18  Input Change Interrupt Enable            */
    uint32_t P19:1;                     /**< bit:     19  Input Change Interrupt Enable            */
    uint32_t P20:1;                     /**< bit:     20  Input Change Interrupt Enable            */
    uint32_t P21:1;                     /**< bit:     21  Input Change Interrupt Enable            */
    uint32_t P22:1;                     /**< bit:     22  Input Change Interrupt Enable            */
    uint32_t P23:1;                     /**< bit:     23  Input Change Interrupt Enable            */
    uint32_t P24:1;                     /**< bit:     24  Input Change Interrupt Enable            */
    uint32_t P25:1;                     /**< bit:     25  Input Change Interrupt Enable            */
    uint32_t P26:1;                     /**< bit:     26  Input Change Interrupt Enable            */
    uint32_t P27:1;                     /**< bit:     27  Input Change Interrupt Enable            */
    uint32_t P28:1;                     /**< bit:     28  Input Change Interrupt Enable            */
    uint32_t P29:1;                     /**< bit:     29  Input Change Interrupt Enable            */
    uint32_t P30:1;                     /**< bit:     30  Input Change Interrupt Enable            */
    uint32_t P31:1;                     /**< bit:     31  Input Change Interrupt Enable            */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t P:32;                      /**< bit:  0..31  Input Change Interrupt Enable            */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PIO_IER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PIO_IER_OFFSET                      (0x20)                                        /**<  (PIO_IER) PIO Interrupt Enable Register  Offset */

#define PIO_IER_P0_Pos                      0                                              /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P0_Msk                      (_U_(0x1) << PIO_IER_P0_Pos)                   /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P0                          PIO_IER_P0_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P0_Msk instead */
#define PIO_IER_P1_Pos                      1                                              /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P1_Msk                      (_U_(0x1) << PIO_IER_P1_Pos)                   /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P1                          PIO_IER_P1_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P1_Msk instead */
#define PIO_IER_P2_Pos                      2                                              /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P2_Msk                      (_U_(0x1) << PIO_IER_P2_Pos)                   /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P2                          PIO_IER_P2_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P2_Msk instead */
#define PIO_IER_P3_Pos                      3                                              /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P3_Msk                      (_U_(0x1) << PIO_IER_P3_Pos)                   /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P3                          PIO_IER_P3_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P3_Msk instead */
#define PIO_IER_P4_Pos                      4                                              /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P4_Msk                      (_U_(0x1) << PIO_IER_P4_Pos)                   /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P4                          PIO_IER_P4_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P4_Msk instead */
#define PIO_IER_P5_Pos                      5                                              /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P5_Msk                      (_U_(0x1) << PIO_IER_P5_Pos)                   /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P5                          PIO_IER_P5_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P5_Msk instead */
#define PIO_IER_P6_Pos                      6                                              /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P6_Msk                      (_U_(0x1) << PIO_IER_P6_Pos)                   /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P6                          PIO_IER_P6_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P6_Msk instead */
#define PIO_IER_P7_Pos                      7                                              /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P7_Msk                      (_U_(0x1) << PIO_IER_P7_Pos)                   /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P7                          PIO_IER_P7_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P7_Msk instead */
#define PIO_IER_P8_Pos                      8                                              /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P8_Msk                      (_U_(0x1) << PIO_IER_P8_Pos)                   /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P8                          PIO_IER_P8_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P8_Msk instead */
#define PIO_IER_P9_Pos                      9                                              /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P9_Msk                      (_U_(0x1) << PIO_IER_P9_Pos)                   /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P9                          PIO_IER_P9_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P9_Msk instead */
#define PIO_IER_P10_Pos                     10                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P10_Msk                     (_U_(0x1) << PIO_IER_P10_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P10                         PIO_IER_P10_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P10_Msk instead */
#define PIO_IER_P11_Pos                     11                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P11_Msk                     (_U_(0x1) << PIO_IER_P11_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P11                         PIO_IER_P11_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P11_Msk instead */
#define PIO_IER_P12_Pos                     12                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P12_Msk                     (_U_(0x1) << PIO_IER_P12_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P12                         PIO_IER_P12_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P12_Msk instead */
#define PIO_IER_P13_Pos                     13                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P13_Msk                     (_U_(0x1) << PIO_IER_P13_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P13                         PIO_IER_P13_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P13_Msk instead */
#define PIO_IER_P14_Pos                     14                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P14_Msk                     (_U_(0x1) << PIO_IER_P14_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P14                         PIO_IER_P14_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P14_Msk instead */
#define PIO_IER_P15_Pos                     15                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P15_Msk                     (_U_(0x1) << PIO_IER_P15_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P15                         PIO_IER_P15_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P15_Msk instead */
#define PIO_IER_P16_Pos                     16                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P16_Msk                     (_U_(0x1) << PIO_IER_P16_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P16                         PIO_IER_P16_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P16_Msk instead */
#define PIO_IER_P17_Pos                     17                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P17_Msk                     (_U_(0x1) << PIO_IER_P17_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P17                         PIO_IER_P17_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P17_Msk instead */
#define PIO_IER_P18_Pos                     18                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P18_Msk                     (_U_(0x1) << PIO_IER_P18_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P18                         PIO_IER_P18_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P18_Msk instead */
#define PIO_IER_P19_Pos                     19                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P19_Msk                     (_U_(0x1) << PIO_IER_P19_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P19                         PIO_IER_P19_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P19_Msk instead */
#define PIO_IER_P20_Pos                     20                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P20_Msk                     (_U_(0x1) << PIO_IER_P20_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P20                         PIO_IER_P20_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P20_Msk instead */
#define PIO_IER_P21_Pos                     21                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P21_Msk                     (_U_(0x1) << PIO_IER_P21_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P21                         PIO_IER_P21_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P21_Msk instead */
#define PIO_IER_P22_Pos                     22                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P22_Msk                     (_U_(0x1) << PIO_IER_P22_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P22                         PIO_IER_P22_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P22_Msk instead */
#define PIO_IER_P23_Pos                     23                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P23_Msk                     (_U_(0x1) << PIO_IER_P23_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P23                         PIO_IER_P23_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P23_Msk instead */
#define PIO_IER_P24_Pos                     24                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P24_Msk                     (_U_(0x1) << PIO_IER_P24_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P24                         PIO_IER_P24_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P24_Msk instead */
#define PIO_IER_P25_Pos                     25                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P25_Msk                     (_U_(0x1) << PIO_IER_P25_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P25                         PIO_IER_P25_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P25_Msk instead */
#define PIO_IER_P26_Pos                     26                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P26_Msk                     (_U_(0x1) << PIO_IER_P26_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P26                         PIO_IER_P26_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P26_Msk instead */
#define PIO_IER_P27_Pos                     27                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P27_Msk                     (_U_(0x1) << PIO_IER_P27_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P27                         PIO_IER_P27_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P27_Msk instead */
#define PIO_IER_P28_Pos                     28                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P28_Msk                     (_U_(0x1) << PIO_IER_P28_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P28                         PIO_IER_P28_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P28_Msk instead */
#define PIO_IER_P29_Pos                     29                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P29_Msk                     (_U_(0x1) << PIO_IER_P29_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P29                         PIO_IER_P29_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P29_Msk instead */
#define PIO_IER_P30_Pos                     30                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P30_Msk                     (_U_(0x1) << PIO_IER_P30_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P30                         PIO_IER_P30_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P30_Msk instead */
#define PIO_IER_P31_Pos                     31                                             /**< (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P31_Msk                     (_U_(0x1) << PIO_IER_P31_Pos)                  /**< (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P31                         PIO_IER_P31_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IER_P31_Msk instead */
#define PIO_IER_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (PIO_IER) Register MASK  (Use PIO_IER_Msk instead)  */
#define PIO_IER_Msk                         _U_(0xFFFFFFFF)                                /**< (PIO_IER) Register Mask  */

#define PIO_IER_P_Pos                       0                                              /**< (PIO_IER Position) Input Change Interrupt Enable */
#define PIO_IER_P_Msk                       (_U_(0xFFFFFFFF) << PIO_IER_P_Pos)             /**< (PIO_IER Mask) P */
#define PIO_IER_P(value)                    (PIO_IER_P_Msk & ((value) << PIO_IER_P_Pos))   

/* -------- PIO_IDR : (PIO Offset: 0x24) (/W 32) PIO Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t P0:1;                      /**< bit:      0  Input Change Interrupt Disable           */
    uint32_t P1:1;                      /**< bit:      1  Input Change Interrupt Disable           */
    uint32_t P2:1;                      /**< bit:      2  Input Change Interrupt Disable           */
    uint32_t P3:1;                      /**< bit:      3  Input Change Interrupt Disable           */
    uint32_t P4:1;                      /**< bit:      4  Input Change Interrupt Disable           */
    uint32_t P5:1;                      /**< bit:      5  Input Change Interrupt Disable           */
    uint32_t P6:1;                      /**< bit:      6  Input Change Interrupt Disable           */
    uint32_t P7:1;                      /**< bit:      7  Input Change Interrupt Disable           */
    uint32_t P8:1;                      /**< bit:      8  Input Change Interrupt Disable           */
    uint32_t P9:1;                      /**< bit:      9  Input Change Interrupt Disable           */
    uint32_t P10:1;                     /**< bit:     10  Input Change Interrupt Disable           */
    uint32_t P11:1;                     /**< bit:     11  Input Change Interrupt Disable           */
    uint32_t P12:1;                     /**< bit:     12  Input Change Interrupt Disable           */
    uint32_t P13:1;                     /**< bit:     13  Input Change Interrupt Disable           */
    uint32_t P14:1;                     /**< bit:     14  Input Change Interrupt Disable           */
    uint32_t P15:1;                     /**< bit:     15  Input Change Interrupt Disable           */
    uint32_t P16:1;                     /**< bit:     16  Input Change Interrupt Disable           */
    uint32_t P17:1;                     /**< bit:     17  Input Change Interrupt Disable           */
    uint32_t P18:1;                     /**< bit:     18  Input Change Interrupt Disable           */
    uint32_t P19:1;                     /**< bit:     19  Input Change Interrupt Disable           */
    uint32_t P20:1;                     /**< bit:     20  Input Change Interrupt Disable           */
    uint32_t P21:1;                     /**< bit:     21  Input Change Interrupt Disable           */
    uint32_t P22:1;                     /**< bit:     22  Input Change Interrupt Disable           */
    uint32_t P23:1;                     /**< bit:     23  Input Change Interrupt Disable           */
    uint32_t P24:1;                     /**< bit:     24  Input Change Interrupt Disable           */
    uint32_t P25:1;                     /**< bit:     25  Input Change Interrupt Disable           */
    uint32_t P26:1;                     /**< bit:     26  Input Change Interrupt Disable           */
    uint32_t P27:1;                     /**< bit:     27  Input Change Interrupt Disable           */
    uint32_t P28:1;                     /**< bit:     28  Input Change Interrupt Disable           */
    uint32_t P29:1;                     /**< bit:     29  Input Change Interrupt Disable           */
    uint32_t P30:1;                     /**< bit:     30  Input Change Interrupt Disable           */
    uint32_t P31:1;                     /**< bit:     31  Input Change Interrupt Disable           */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t P:32;                      /**< bit:  0..31  Input Change Interrupt Disable           */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PIO_IDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PIO_IDR_OFFSET                      (0x24)                                        /**<  (PIO_IDR) PIO Interrupt Disable Register  Offset */

#define PIO_IDR_P0_Pos                      0                                              /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P0_Msk                      (_U_(0x1) << PIO_IDR_P0_Pos)                   /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P0                          PIO_IDR_P0_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P0_Msk instead */
#define PIO_IDR_P1_Pos                      1                                              /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P1_Msk                      (_U_(0x1) << PIO_IDR_P1_Pos)                   /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P1                          PIO_IDR_P1_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P1_Msk instead */
#define PIO_IDR_P2_Pos                      2                                              /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P2_Msk                      (_U_(0x1) << PIO_IDR_P2_Pos)                   /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P2                          PIO_IDR_P2_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P2_Msk instead */
#define PIO_IDR_P3_Pos                      3                                              /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P3_Msk                      (_U_(0x1) << PIO_IDR_P3_Pos)                   /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P3                          PIO_IDR_P3_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P3_Msk instead */
#define PIO_IDR_P4_Pos                      4                                              /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P4_Msk                      (_U_(0x1) << PIO_IDR_P4_Pos)                   /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P4                          PIO_IDR_P4_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P4_Msk instead */
#define PIO_IDR_P5_Pos                      5                                              /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P5_Msk                      (_U_(0x1) << PIO_IDR_P5_Pos)                   /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P5                          PIO_IDR_P5_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P5_Msk instead */
#define PIO_IDR_P6_Pos                      6                                              /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P6_Msk                      (_U_(0x1) << PIO_IDR_P6_Pos)                   /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P6                          PIO_IDR_P6_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P6_Msk instead */
#define PIO_IDR_P7_Pos                      7                                              /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P7_Msk                      (_U_(0x1) << PIO_IDR_P7_Pos)                   /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P7                          PIO_IDR_P7_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P7_Msk instead */
#define PIO_IDR_P8_Pos                      8                                              /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P8_Msk                      (_U_(0x1) << PIO_IDR_P8_Pos)                   /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P8                          PIO_IDR_P8_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P8_Msk instead */
#define PIO_IDR_P9_Pos                      9                                              /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P9_Msk                      (_U_(0x1) << PIO_IDR_P9_Pos)                   /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P9                          PIO_IDR_P9_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P9_Msk instead */
#define PIO_IDR_P10_Pos                     10                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P10_Msk                     (_U_(0x1) << PIO_IDR_P10_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P10                         PIO_IDR_P10_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P10_Msk instead */
#define PIO_IDR_P11_Pos                     11                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P11_Msk                     (_U_(0x1) << PIO_IDR_P11_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P11                         PIO_IDR_P11_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P11_Msk instead */
#define PIO_IDR_P12_Pos                     12                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P12_Msk                     (_U_(0x1) << PIO_IDR_P12_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P12                         PIO_IDR_P12_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P12_Msk instead */
#define PIO_IDR_P13_Pos                     13                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P13_Msk                     (_U_(0x1) << PIO_IDR_P13_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P13                         PIO_IDR_P13_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P13_Msk instead */
#define PIO_IDR_P14_Pos                     14                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P14_Msk                     (_U_(0x1) << PIO_IDR_P14_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P14                         PIO_IDR_P14_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P14_Msk instead */
#define PIO_IDR_P15_Pos                     15                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P15_Msk                     (_U_(0x1) << PIO_IDR_P15_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P15                         PIO_IDR_P15_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P15_Msk instead */
#define PIO_IDR_P16_Pos                     16                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P16_Msk                     (_U_(0x1) << PIO_IDR_P16_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P16                         PIO_IDR_P16_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P16_Msk instead */
#define PIO_IDR_P17_Pos                     17                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P17_Msk                     (_U_(0x1) << PIO_IDR_P17_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P17                         PIO_IDR_P17_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P17_Msk instead */
#define PIO_IDR_P18_Pos                     18                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P18_Msk                     (_U_(0x1) << PIO_IDR_P18_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P18                         PIO_IDR_P18_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P18_Msk instead */
#define PIO_IDR_P19_Pos                     19                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P19_Msk                     (_U_(0x1) << PIO_IDR_P19_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P19                         PIO_IDR_P19_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P19_Msk instead */
#define PIO_IDR_P20_Pos                     20                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P20_Msk                     (_U_(0x1) << PIO_IDR_P20_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P20                         PIO_IDR_P20_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P20_Msk instead */
#define PIO_IDR_P21_Pos                     21                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P21_Msk                     (_U_(0x1) << PIO_IDR_P21_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P21                         PIO_IDR_P21_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P21_Msk instead */
#define PIO_IDR_P22_Pos                     22                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P22_Msk                     (_U_(0x1) << PIO_IDR_P22_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P22                         PIO_IDR_P22_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P22_Msk instead */
#define PIO_IDR_P23_Pos                     23                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P23_Msk                     (_U_(0x1) << PIO_IDR_P23_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P23                         PIO_IDR_P23_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P23_Msk instead */
#define PIO_IDR_P24_Pos                     24                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P24_Msk                     (_U_(0x1) << PIO_IDR_P24_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P24                         PIO_IDR_P24_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P24_Msk instead */
#define PIO_IDR_P25_Pos                     25                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P25_Msk                     (_U_(0x1) << PIO_IDR_P25_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P25                         PIO_IDR_P25_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P25_Msk instead */
#define PIO_IDR_P26_Pos                     26                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P26_Msk                     (_U_(0x1) << PIO_IDR_P26_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P26                         PIO_IDR_P26_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P26_Msk instead */
#define PIO_IDR_P27_Pos                     27                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P27_Msk                     (_U_(0x1) << PIO_IDR_P27_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P27                         PIO_IDR_P27_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P27_Msk instead */
#define PIO_IDR_P28_Pos                     28                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P28_Msk                     (_U_(0x1) << PIO_IDR_P28_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P28                         PIO_IDR_P28_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P28_Msk instead */
#define PIO_IDR_P29_Pos                     29                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P29_Msk                     (_U_(0x1) << PIO_IDR_P29_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P29                         PIO_IDR_P29_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P29_Msk instead */
#define PIO_IDR_P30_Pos                     30                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P30_Msk                     (_U_(0x1) << PIO_IDR_P30_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P30                         PIO_IDR_P30_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P30_Msk instead */
#define PIO_IDR_P31_Pos                     31                                             /**< (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P31_Msk                     (_U_(0x1) << PIO_IDR_P31_Pos)                  /**< (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P31                         PIO_IDR_P31_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IDR_P31_Msk instead */
#define PIO_IDR_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (PIO_IDR) Register MASK  (Use PIO_IDR_Msk instead)  */
#define PIO_IDR_Msk                         _U_(0xFFFFFFFF)                                /**< (PIO_IDR) Register Mask  */

#define PIO_IDR_P_Pos                       0                                              /**< (PIO_IDR Position) Input Change Interrupt Disable */
#define PIO_IDR_P_Msk                       (_U_(0xFFFFFFFF) << PIO_IDR_P_Pos)             /**< (PIO_IDR Mask) P */
#define PIO_IDR_P(value)                    (PIO_IDR_P_Msk & ((value) << PIO_IDR_P_Pos))   

/* -------- PIO_IMR : (PIO Offset: 0x28) (R/ 32) PIO Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t P0:1;                      /**< bit:      0  Input Change Interrupt Mask              */
    uint32_t P1:1;                      /**< bit:      1  Input Change Interrupt Mask              */
    uint32_t P2:1;                      /**< bit:      2  Input Change Interrupt Mask              */
    uint32_t P3:1;                      /**< bit:      3  Input Change Interrupt Mask              */
    uint32_t P4:1;                      /**< bit:      4  Input Change Interrupt Mask              */
    uint32_t P5:1;                      /**< bit:      5  Input Change Interrupt Mask              */
    uint32_t P6:1;                      /**< bit:      6  Input Change Interrupt Mask              */
    uint32_t P7:1;                      /**< bit:      7  Input Change Interrupt Mask              */
    uint32_t P8:1;                      /**< bit:      8  Input Change Interrupt Mask              */
    uint32_t P9:1;                      /**< bit:      9  Input Change Interrupt Mask              */
    uint32_t P10:1;                     /**< bit:     10  Input Change Interrupt Mask              */
    uint32_t P11:1;                     /**< bit:     11  Input Change Interrupt Mask              */
    uint32_t P12:1;                     /**< bit:     12  Input Change Interrupt Mask              */
    uint32_t P13:1;                     /**< bit:     13  Input Change Interrupt Mask              */
    uint32_t P14:1;                     /**< bit:     14  Input Change Interrupt Mask              */
    uint32_t P15:1;                     /**< bit:     15  Input Change Interrupt Mask              */
    uint32_t P16:1;                     /**< bit:     16  Input Change Interrupt Mask              */
    uint32_t P17:1;                     /**< bit:     17  Input Change Interrupt Mask              */
    uint32_t P18:1;                     /**< bit:     18  Input Change Interrupt Mask              */
    uint32_t P19:1;                     /**< bit:     19  Input Change Interrupt Mask              */
    uint32_t P20:1;                     /**< bit:     20  Input Change Interrupt Mask              */
    uint32_t P21:1;                     /**< bit:     21  Input Change Interrupt Mask              */
    uint32_t P22:1;                     /**< bit:     22  Input Change Interrupt Mask              */
    uint32_t P23:1;                     /**< bit:     23  Input Change Interrupt Mask              */
    uint32_t P24:1;                     /**< bit:     24  Input Change Interrupt Mask              */
    uint32_t P25:1;                     /**< bit:     25  Input Change Interrupt Mask              */
    uint32_t P26:1;                     /**< bit:     26  Input Change Interrupt Mask              */
    uint32_t P27:1;                     /**< bit:     27  Input Change Interrupt Mask              */
    uint32_t P28:1;                     /**< bit:     28  Input Change Interrupt Mask              */
    uint32_t P29:1;                     /**< bit:     29  Input Change Interrupt Mask              */
    uint32_t P30:1;                     /**< bit:     30  Input Change Interrupt Mask              */
    uint32_t P31:1;                     /**< bit:     31  Input Change Interrupt Mask              */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t P:32;                      /**< bit:  0..31  Input Change Interrupt Mask              */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PIO_IMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PIO_IMR_OFFSET                      (0x28)                                        /**<  (PIO_IMR) PIO Interrupt Mask Register  Offset */

#define PIO_IMR_P0_Pos                      0                                              /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P0_Msk                      (_U_(0x1) << PIO_IMR_P0_Pos)                   /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P0                          PIO_IMR_P0_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P0_Msk instead */
#define PIO_IMR_P1_Pos                      1                                              /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P1_Msk                      (_U_(0x1) << PIO_IMR_P1_Pos)                   /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P1                          PIO_IMR_P1_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P1_Msk instead */
#define PIO_IMR_P2_Pos                      2                                              /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P2_Msk                      (_U_(0x1) << PIO_IMR_P2_Pos)                   /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P2                          PIO_IMR_P2_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P2_Msk instead */
#define PIO_IMR_P3_Pos                      3                                              /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P3_Msk                      (_U_(0x1) << PIO_IMR_P3_Pos)                   /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P3                          PIO_IMR_P3_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P3_Msk instead */
#define PIO_IMR_P4_Pos                      4                                              /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P4_Msk                      (_U_(0x1) << PIO_IMR_P4_Pos)                   /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P4                          PIO_IMR_P4_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P4_Msk instead */
#define PIO_IMR_P5_Pos                      5                                              /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P5_Msk                      (_U_(0x1) << PIO_IMR_P5_Pos)                   /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P5                          PIO_IMR_P5_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P5_Msk instead */
#define PIO_IMR_P6_Pos                      6                                              /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P6_Msk                      (_U_(0x1) << PIO_IMR_P6_Pos)                   /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P6                          PIO_IMR_P6_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P6_Msk instead */
#define PIO_IMR_P7_Pos                      7                                              /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P7_Msk                      (_U_(0x1) << PIO_IMR_P7_Pos)                   /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P7                          PIO_IMR_P7_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P7_Msk instead */
#define PIO_IMR_P8_Pos                      8                                              /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P8_Msk                      (_U_(0x1) << PIO_IMR_P8_Pos)                   /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P8                          PIO_IMR_P8_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P8_Msk instead */
#define PIO_IMR_P9_Pos                      9                                              /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P9_Msk                      (_U_(0x1) << PIO_IMR_P9_Pos)                   /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P9                          PIO_IMR_P9_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P9_Msk instead */
#define PIO_IMR_P10_Pos                     10                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P10_Msk                     (_U_(0x1) << PIO_IMR_P10_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P10                         PIO_IMR_P10_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P10_Msk instead */
#define PIO_IMR_P11_Pos                     11                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P11_Msk                     (_U_(0x1) << PIO_IMR_P11_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P11                         PIO_IMR_P11_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P11_Msk instead */
#define PIO_IMR_P12_Pos                     12                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P12_Msk                     (_U_(0x1) << PIO_IMR_P12_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P12                         PIO_IMR_P12_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P12_Msk instead */
#define PIO_IMR_P13_Pos                     13                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P13_Msk                     (_U_(0x1) << PIO_IMR_P13_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P13                         PIO_IMR_P13_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P13_Msk instead */
#define PIO_IMR_P14_Pos                     14                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P14_Msk                     (_U_(0x1) << PIO_IMR_P14_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P14                         PIO_IMR_P14_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P14_Msk instead */
#define PIO_IMR_P15_Pos                     15                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P15_Msk                     (_U_(0x1) << PIO_IMR_P15_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P15                         PIO_IMR_P15_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P15_Msk instead */
#define PIO_IMR_P16_Pos                     16                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P16_Msk                     (_U_(0x1) << PIO_IMR_P16_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P16                         PIO_IMR_P16_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P16_Msk instead */
#define PIO_IMR_P17_Pos                     17                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P17_Msk                     (_U_(0x1) << PIO_IMR_P17_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P17                         PIO_IMR_P17_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P17_Msk instead */
#define PIO_IMR_P18_Pos                     18                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P18_Msk                     (_U_(0x1) << PIO_IMR_P18_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P18                         PIO_IMR_P18_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P18_Msk instead */
#define PIO_IMR_P19_Pos                     19                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P19_Msk                     (_U_(0x1) << PIO_IMR_P19_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P19                         PIO_IMR_P19_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P19_Msk instead */
#define PIO_IMR_P20_Pos                     20                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P20_Msk                     (_U_(0x1) << PIO_IMR_P20_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P20                         PIO_IMR_P20_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P20_Msk instead */
#define PIO_IMR_P21_Pos                     21                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P21_Msk                     (_U_(0x1) << PIO_IMR_P21_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P21                         PIO_IMR_P21_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P21_Msk instead */
#define PIO_IMR_P22_Pos                     22                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P22_Msk                     (_U_(0x1) << PIO_IMR_P22_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P22                         PIO_IMR_P22_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P22_Msk instead */
#define PIO_IMR_P23_Pos                     23                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P23_Msk                     (_U_(0x1) << PIO_IMR_P23_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P23                         PIO_IMR_P23_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P23_Msk instead */
#define PIO_IMR_P24_Pos                     24                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P24_Msk                     (_U_(0x1) << PIO_IMR_P24_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P24                         PIO_IMR_P24_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P24_Msk instead */
#define PIO_IMR_P25_Pos                     25                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P25_Msk                     (_U_(0x1) << PIO_IMR_P25_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P25                         PIO_IMR_P25_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P25_Msk instead */
#define PIO_IMR_P26_Pos                     26                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P26_Msk                     (_U_(0x1) << PIO_IMR_P26_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P26                         PIO_IMR_P26_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P26_Msk instead */
#define PIO_IMR_P27_Pos                     27                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P27_Msk                     (_U_(0x1) << PIO_IMR_P27_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P27                         PIO_IMR_P27_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P27_Msk instead */
#define PIO_IMR_P28_Pos                     28                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P28_Msk                     (_U_(0x1) << PIO_IMR_P28_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P28                         PIO_IMR_P28_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P28_Msk instead */
#define PIO_IMR_P29_Pos                     29                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P29_Msk                     (_U_(0x1) << PIO_IMR_P29_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P29                         PIO_IMR_P29_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P29_Msk instead */
#define PIO_IMR_P30_Pos                     30                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P30_Msk                     (_U_(0x1) << PIO_IMR_P30_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P30                         PIO_IMR_P30_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P30_Msk instead */
#define PIO_IMR_P31_Pos                     31                                             /**< (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P31_Msk                     (_U_(0x1) << PIO_IMR_P31_Pos)                  /**< (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P31                         PIO_IMR_P31_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IMR_P31_Msk instead */
#define PIO_IMR_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (PIO_IMR) Register MASK  (Use PIO_IMR_Msk instead)  */
#define PIO_IMR_Msk                         _U_(0xFFFFFFFF)                                /**< (PIO_IMR) Register Mask  */

#define PIO_IMR_P_Pos                       0                                              /**< (PIO_IMR Position) Input Change Interrupt Mask */
#define PIO_IMR_P_Msk                       (_U_(0xFFFFFFFF) << PIO_IMR_P_Pos)             /**< (PIO_IMR Mask) P */
#define PIO_IMR_P(value)                    (PIO_IMR_P_Msk & ((value) << PIO_IMR_P_Pos))   

/* -------- PIO_ISR : (PIO Offset: 0x2c) (R/ 32) PIO Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t P0:1;                      /**< bit:      0  Input Change Interrupt Status            */
    uint32_t P1:1;                      /**< bit:      1  Input Change Interrupt Status            */
    uint32_t P2:1;                      /**< bit:      2  Input Change Interrupt Status            */
    uint32_t P3:1;                      /**< bit:      3  Input Change Interrupt Status            */
    uint32_t P4:1;                      /**< bit:      4  Input Change Interrupt Status            */
    uint32_t P5:1;                      /**< bit:      5  Input Change Interrupt Status            */
    uint32_t P6:1;                      /**< bit:      6  Input Change Interrupt Status            */
    uint32_t P7:1;                      /**< bit:      7  Input Change Interrupt Status            */
    uint32_t P8:1;                      /**< bit:      8  Input Change Interrupt Status            */
    uint32_t P9:1;                      /**< bit:      9  Input Change Interrupt Status            */
    uint32_t P10:1;                     /**< bit:     10  Input Change Interrupt Status            */
    uint32_t P11:1;                     /**< bit:     11  Input Change Interrupt Status            */
    uint32_t P12:1;                     /**< bit:     12  Input Change Interrupt Status            */
    uint32_t P13:1;                     /**< bit:     13  Input Change Interrupt Status            */
    uint32_t P14:1;                     /**< bit:     14  Input Change Interrupt Status            */
    uint32_t P15:1;                     /**< bit:     15  Input Change Interrupt Status            */
    uint32_t P16:1;                     /**< bit:     16  Input Change Interrupt Status            */
    uint32_t P17:1;                     /**< bit:     17  Input Change Interrupt Status            */
    uint32_t P18:1;                     /**< bit:     18  Input Change Interrupt Status            */
    uint32_t P19:1;                     /**< bit:     19  Input Change Interrupt Status            */
    uint32_t P20:1;                     /**< bit:     20  Input Change Interrupt Status            */
    uint32_t P21:1;                     /**< bit:     21  Input Change Interrupt Status            */
    uint32_t P22:1;                     /**< bit:     22  Input Change Interrupt Status            */
    uint32_t P23:1;                     /**< bit:     23  Input Change Interrupt Status            */
    uint32_t P24:1;                     /**< bit:     24  Input Change Interrupt Status            */
    uint32_t P25:1;                     /**< bit:     25  Input Change Interrupt Status            */
    uint32_t P26:1;                     /**< bit:     26  Input Change Interrupt Status            */
    uint32_t P27:1;                     /**< bit:     27  Input Change Interrupt Status            */
    uint32_t P28:1;                     /**< bit:     28  Input Change Interrupt Status            */
    uint32_t P29:1;                     /**< bit:     29  Input Change Interrupt Status            */
    uint32_t P30:1;                     /**< bit:     30  Input Change Interrupt Status            */
    uint32_t P31:1;                     /**< bit:     31  Input Change Interrupt Status            */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t P:32;                      /**< bit:  0..31  Input Change Interrupt Status            */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} PIO_ISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PIO_ISR_OFFSET                      (0x2C)                                        /**<  (PIO_ISR) PIO Interrupt Status Register  Offset */

#define PIO_ISR_P0_Pos                      0                                              /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P0_Msk                      (_U_(0x1) << PIO_ISR_P0_Pos)                   /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P0                          PIO_ISR_P0_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P0_Msk instead */
#define PIO_ISR_P1_Pos                      1                                              /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P1_Msk                      (_U_(0x1) << PIO_ISR_P1_Pos)                   /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P1                          PIO_ISR_P1_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P1_Msk instead */
#define PIO_ISR_P2_Pos                      2                                              /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P2_Msk                      (_U_(0x1) << PIO_ISR_P2_Pos)                   /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P2                          PIO_ISR_P2_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P2_Msk instead */
#define PIO_ISR_P3_Pos                      3                                              /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P3_Msk                      (_U_(0x1) << PIO_ISR_P3_Pos)                   /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P3                          PIO_ISR_P3_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P3_Msk instead */
#define PIO_ISR_P4_Pos                      4                                              /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P4_Msk                      (_U_(0x1) << PIO_ISR_P4_Pos)                   /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P4                          PIO_ISR_P4_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P4_Msk instead */
#define PIO_ISR_P5_Pos                      5                                              /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P5_Msk                      (_U_(0x1) << PIO_ISR_P5_Pos)                   /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P5                          PIO_ISR_P5_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P5_Msk instead */
#define PIO_ISR_P6_Pos                      6                                              /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P6_Msk                      (_U_(0x1) << PIO_ISR_P6_Pos)                   /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P6                          PIO_ISR_P6_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P6_Msk instead */
#define PIO_ISR_P7_Pos                      7                                              /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P7_Msk                      (_U_(0x1) << PIO_ISR_P7_Pos)                   /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P7                          PIO_ISR_P7_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P7_Msk instead */
#define PIO_ISR_P8_Pos                      8                                              /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P8_Msk                      (_U_(0x1) << PIO_ISR_P8_Pos)                   /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P8                          PIO_ISR_P8_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P8_Msk instead */
#define PIO_ISR_P9_Pos                      9                                              /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P9_Msk                      (_U_(0x1) << PIO_ISR_P9_Pos)                   /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P9                          PIO_ISR_P9_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P9_Msk instead */
#define PIO_ISR_P10_Pos                     10                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P10_Msk                     (_U_(0x1) << PIO_ISR_P10_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P10                         PIO_ISR_P10_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P10_Msk instead */
#define PIO_ISR_P11_Pos                     11                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P11_Msk                     (_U_(0x1) << PIO_ISR_P11_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P11                         PIO_ISR_P11_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P11_Msk instead */
#define PIO_ISR_P12_Pos                     12                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P12_Msk                     (_U_(0x1) << PIO_ISR_P12_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P12                         PIO_ISR_P12_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P12_Msk instead */
#define PIO_ISR_P13_Pos                     13                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P13_Msk                     (_U_(0x1) << PIO_ISR_P13_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P13                         PIO_ISR_P13_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P13_Msk instead */
#define PIO_ISR_P14_Pos                     14                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P14_Msk                     (_U_(0x1) << PIO_ISR_P14_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P14                         PIO_ISR_P14_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P14_Msk instead */
#define PIO_ISR_P15_Pos                     15                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P15_Msk                     (_U_(0x1) << PIO_ISR_P15_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P15                         PIO_ISR_P15_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P15_Msk instead */
#define PIO_ISR_P16_Pos                     16                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P16_Msk                     (_U_(0x1) << PIO_ISR_P16_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P16                         PIO_ISR_P16_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P16_Msk instead */
#define PIO_ISR_P17_Pos                     17                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P17_Msk                     (_U_(0x1) << PIO_ISR_P17_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P17                         PIO_ISR_P17_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P17_Msk instead */
#define PIO_ISR_P18_Pos                     18                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P18_Msk                     (_U_(0x1) << PIO_ISR_P18_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P18                         PIO_ISR_P18_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P18_Msk instead */
#define PIO_ISR_P19_Pos                     19                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P19_Msk                     (_U_(0x1) << PIO_ISR_P19_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P19                         PIO_ISR_P19_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P19_Msk instead */
#define PIO_ISR_P20_Pos                     20                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P20_Msk                     (_U_(0x1) << PIO_ISR_P20_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P20                         PIO_ISR_P20_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P20_Msk instead */
#define PIO_ISR_P21_Pos                     21                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P21_Msk                     (_U_(0x1) << PIO_ISR_P21_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P21                         PIO_ISR_P21_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P21_Msk instead */
#define PIO_ISR_P22_Pos                     22                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P22_Msk                     (_U_(0x1) << PIO_ISR_P22_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P22                         PIO_ISR_P22_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P22_Msk instead */
#define PIO_ISR_P23_Pos                     23                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P23_Msk                     (_U_(0x1) << PIO_ISR_P23_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P23                         PIO_ISR_P23_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P23_Msk instead */
#define PIO_ISR_P24_Pos                     24                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P24_Msk                     (_U_(0x1) << PIO_ISR_P24_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P24                         PIO_ISR_P24_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P24_Msk instead */
#define PIO_ISR_P25_Pos                     25                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P25_Msk                     (_U_(0x1) << PIO_ISR_P25_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P25                         PIO_ISR_P25_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P25_Msk instead */
#define PIO_ISR_P26_Pos                     26                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P26_Msk                     (_U_(0x1) << PIO_ISR_P26_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P26                         PIO_ISR_P26_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P26_Msk instead */
#define PIO_ISR_P27_Pos                     27                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P27_Msk                     (_U_(0x1) << PIO_ISR_P27_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P27                         PIO_ISR_P27_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P27_Msk instead */
#define PIO_ISR_P28_Pos                     28                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P28_Msk                     (_U_(0x1) << PIO_ISR_P28_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P28                         PIO_ISR_P28_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P28_Msk instead */
#define PIO_ISR_P29_Pos                     29                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P29_Msk                     (_U_(0x1) << PIO_ISR_P29_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P29                         PIO_ISR_P29_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P29_Msk instead */
#define PIO_ISR_P30_Pos                     30                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P30_Msk                     (_U_(0x1) << PIO_ISR_P30_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P30                         PIO_ISR_P30_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P30_Msk instead */
#define PIO_ISR_P31_Pos                     31                                             /**< (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P31_Msk                     (_U_(0x1) << PIO_ISR_P31_Pos)                  /**< (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P31                         PIO_ISR_P31_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_ISR_P31_Msk instead */
#define PIO_ISR_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (PIO_ISR) Register MASK  (Use PIO_ISR_Msk instead)  */
#define PIO_ISR_Msk                         _U_(0xFFFFFFFF)                                /**< (PIO_ISR) Register Mask  */

#define PIO_ISR_P_Pos                       0                                              /**< (PIO_ISR Position) Input Change Interrupt Status */
#define PIO_ISR_P_Msk                       (_U_(0xFFFFFFFF) << PIO_ISR_P_Pos)             /**< (PIO_ISR Mask) P */
#define PIO_ISR_P(value)                    (PIO_ISR_P_Msk & ((value) << PIO_ISR_P_Pos))   

/* -------- PIO_IOFR : (PIO Offset: 0x3c) (/W 32) PIO I/O Freeze Configuration Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t FPHY:1;                    /**< bit:      0  Freeze Physical Configuration            */
    uint32_t FINT:1;                    /**< bit:      1  Freeze Interrupt Configuration           */
    uint32_t :6;                        /**< bit:   2..7  Reserved */
    uint32_t FRZKEY:24;                 /**< bit:  8..31  Freeze Key                               */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} PIO_IOFR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PIO_IOFR_OFFSET                     (0x3C)                                        /**<  (PIO_IOFR) PIO I/O Freeze Configuration Register  Offset */

#define PIO_IOFR_FPHY_Pos                   0                                              /**< (PIO_IOFR) Freeze Physical Configuration Position */
#define PIO_IOFR_FPHY_Msk                   (_U_(0x1) << PIO_IOFR_FPHY_Pos)                /**< (PIO_IOFR) Freeze Physical Configuration Mask */
#define PIO_IOFR_FPHY                       PIO_IOFR_FPHY_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IOFR_FPHY_Msk instead */
#define PIO_IOFR_FINT_Pos                   1                                              /**< (PIO_IOFR) Freeze Interrupt Configuration Position */
#define PIO_IOFR_FINT_Msk                   (_U_(0x1) << PIO_IOFR_FINT_Pos)                /**< (PIO_IOFR) Freeze Interrupt Configuration Mask */
#define PIO_IOFR_FINT                       PIO_IOFR_FINT_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use PIO_IOFR_FINT_Msk instead */
#define PIO_IOFR_FRZKEY_Pos                 8                                              /**< (PIO_IOFR) Freeze Key Position */
#define PIO_IOFR_FRZKEY_Msk                 (_U_(0xFFFFFF) << PIO_IOFR_FRZKEY_Pos)         /**< (PIO_IOFR) Freeze Key Mask */
#define PIO_IOFR_FRZKEY(value)              (PIO_IOFR_FRZKEY_Msk & ((value) << PIO_IOFR_FRZKEY_Pos))
#define   PIO_IOFR_FRZKEY_PASSWD_Val        _U_(0x494F46)                                  /**< (PIO_IOFR) Writing any other value in this field aborts the write operation of the WPEN bit.  */
#define PIO_IOFR_FRZKEY_PASSWD              (PIO_IOFR_FRZKEY_PASSWD_Val << PIO_IOFR_FRZKEY_Pos)  /**< (PIO_IOFR) Writing any other value in this field aborts the write operation of the WPEN bit. Position  */
#define PIO_IOFR_MASK                       _U_(0xFFFFFF03)                                /**< \deprecated (PIO_IOFR) Register MASK  (Use PIO_IOFR_Msk instead)  */
#define PIO_IOFR_Msk                        _U_(0xFFFFFF03)                                /**< (PIO_IOFR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief PIO hardware registers */
typedef struct {  
  __IO uint32_t PIO_MSKR;       /**< (PIO Offset: 0x00) PIO Mask Register */
  __IO uint32_t PIO_CFGR;       /**< (PIO Offset: 0x04) PIO Configuration Register */
  __I  uint32_t PIO_PDSR;       /**< (PIO Offset: 0x08) PIO Pin Data Status Register */
  __I  uint32_t PIO_LOCKSR;     /**< (PIO Offset: 0x0C) PIO Lock Status Register */
  __O  uint32_t PIO_SODR;       /**< (PIO Offset: 0x10) PIO Set Output Data Register */
  __O  uint32_t PIO_CODR;       /**< (PIO Offset: 0x14) PIO Clear Output Data Register */
  __IO uint32_t PIO_ODSR;       /**< (PIO Offset: 0x18) PIO Output Data Status Register */
  __I  uint8_t                        Reserved1[4];
  __O  uint32_t PIO_IER;        /**< (PIO Offset: 0x20) PIO Interrupt Enable Register */
  __O  uint32_t PIO_IDR;        /**< (PIO Offset: 0x24) PIO Interrupt Disable Register */
  __I  uint32_t PIO_IMR;        /**< (PIO Offset: 0x28) PIO Interrupt Mask Register */
  __I  uint32_t PIO_ISR;        /**< (PIO Offset: 0x2C) PIO Interrupt Status Register */
  __I  uint8_t                        Reserved2[12];
  __O  uint32_t PIO_IOFR;       /**< (PIO Offset: 0x3C) PIO I/O Freeze Configuration Register */
} Pio;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief PIO hardware registers */
typedef struct {  
  __IO PIO_MSKR_Type                  PIO_MSKR;       /**< Offset: 0x00 (R/W  32) PIO Mask Register */
  __IO PIO_CFGR_Type                  PIO_CFGR;       /**< Offset: 0x04 (R/W  32) PIO Configuration Register */
  __I  PIO_PDSR_Type                  PIO_PDSR;       /**< Offset: 0x08 (R/   32) PIO Pin Data Status Register */
  __I  PIO_LOCKSR_Type                PIO_LOCKSR;     /**< Offset: 0x0C (R/   32) PIO Lock Status Register */
  __O  PIO_SODR_Type                  PIO_SODR;       /**< Offset: 0x10 ( /W  32) PIO Set Output Data Register */
  __O  PIO_CODR_Type                  PIO_CODR;       /**< Offset: 0x14 ( /W  32) PIO Clear Output Data Register */
  __IO PIO_ODSR_Type                  PIO_ODSR;       /**< Offset: 0x18 (R/W  32) PIO Output Data Status Register */
  __I  uint8_t                        Reserved1[4];
  __O  PIO_IER_Type                   PIO_IER;        /**< Offset: 0x20 ( /W  32) PIO Interrupt Enable Register */
  __O  PIO_IDR_Type                   PIO_IDR;        /**< Offset: 0x24 ( /W  32) PIO Interrupt Disable Register */
  __I  PIO_IMR_Type                   PIO_IMR;        /**< Offset: 0x28 (R/   32) PIO Interrupt Mask Register */
  __I  PIO_ISR_Type                   PIO_ISR;        /**< Offset: 0x2C (R/   32) PIO Interrupt Status Register */
  __I  uint8_t                        Reserved2[12];
  __O  PIO_IOFR_Type                  PIO_IOFR;       /**< Offset: 0x3C ( /W  32) PIO I/O Freeze Configuration Register */
} Pio;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Parallel Input/Output Controller */

#endif /* _SAMA5D2_PIO_COMPONENT_H_ */
