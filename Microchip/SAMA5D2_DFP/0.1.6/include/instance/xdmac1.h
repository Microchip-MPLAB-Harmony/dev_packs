/**
 * \file
 *
 * \brief Instance description for XDMAC1
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
#ifndef _SAMA5D2_XDMAC1_INSTANCE_H_
#define _SAMA5D2_XDMAC1_INSTANCE_H_

/* ========== Register definition for XDMAC1 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_XDMAC1_CIE0         (0xF0004050) /**< (XDMAC1) Channel Interrupt Enable Register 0 */
#define REG_XDMAC1_CID0         (0xF0004054) /**< (XDMAC1) Channel Interrupt Disable Register 0 */
#define REG_XDMAC1_CIM0         (0xF0004058) /**< (XDMAC1) Channel Interrupt Mask Register 0 */
#define REG_XDMAC1_CIS0         (0xF000405C) /**< (XDMAC1) Channel Interrupt Status Register 0 */
#define REG_XDMAC1_CSA0         (0xF0004060) /**< (XDMAC1) Channel Source Address Register 0 */
#define REG_XDMAC1_CDA0         (0xF0004064) /**< (XDMAC1) Channel Destination Address Register 0 */
#define REG_XDMAC1_CNDA0        (0xF0004068) /**< (XDMAC1) Channel Next Descriptor Address Register 0 */
#define REG_XDMAC1_CNDC0        (0xF000406C) /**< (XDMAC1) Channel Next Descriptor Control Register 0 */
#define REG_XDMAC1_CUBC0        (0xF0004070) /**< (XDMAC1) Channel Microblock Control Register 0 */
#define REG_XDMAC1_CBC0         (0xF0004074) /**< (XDMAC1) Channel Block Control Register 0 */
#define REG_XDMAC1_CC0          (0xF0004078) /**< (XDMAC1) Channel Configuration Register 0 */
#define REG_XDMAC1_CDS_MSP0     (0xF000407C) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 0 */
#define REG_XDMAC1_CSUS0        (0xF0004080) /**< (XDMAC1) Channel Source Microblock Stride 0 */
#define REG_XDMAC1_CDUS0        (0xF0004084) /**< (XDMAC1) Channel Destination Microblock Stride 0 */
#define REG_XDMAC1_CIE1         (0xF0004090) /**< (XDMAC1) Channel Interrupt Enable Register 1 */
#define REG_XDMAC1_CID1         (0xF0004094) /**< (XDMAC1) Channel Interrupt Disable Register 1 */
#define REG_XDMAC1_CIM1         (0xF0004098) /**< (XDMAC1) Channel Interrupt Mask Register 1 */
#define REG_XDMAC1_CIS1         (0xF000409C) /**< (XDMAC1) Channel Interrupt Status Register 1 */
#define REG_XDMAC1_CSA1         (0xF00040A0) /**< (XDMAC1) Channel Source Address Register 1 */
#define REG_XDMAC1_CDA1         (0xF00040A4) /**< (XDMAC1) Channel Destination Address Register 1 */
#define REG_XDMAC1_CNDA1        (0xF00040A8) /**< (XDMAC1) Channel Next Descriptor Address Register 1 */
#define REG_XDMAC1_CNDC1        (0xF00040AC) /**< (XDMAC1) Channel Next Descriptor Control Register 1 */
#define REG_XDMAC1_CUBC1        (0xF00040B0) /**< (XDMAC1) Channel Microblock Control Register 1 */
#define REG_XDMAC1_CBC1         (0xF00040B4) /**< (XDMAC1) Channel Block Control Register 1 */
#define REG_XDMAC1_CC1          (0xF00040B8) /**< (XDMAC1) Channel Configuration Register 1 */
#define REG_XDMAC1_CDS_MSP1     (0xF00040BC) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 1 */
#define REG_XDMAC1_CSUS1        (0xF00040C0) /**< (XDMAC1) Channel Source Microblock Stride 1 */
#define REG_XDMAC1_CDUS1        (0xF00040C4) /**< (XDMAC1) Channel Destination Microblock Stride 1 */
#define REG_XDMAC1_CIE2         (0xF00040D0) /**< (XDMAC1) Channel Interrupt Enable Register 2 */
#define REG_XDMAC1_CID2         (0xF00040D4) /**< (XDMAC1) Channel Interrupt Disable Register 2 */
#define REG_XDMAC1_CIM2         (0xF00040D8) /**< (XDMAC1) Channel Interrupt Mask Register 2 */
#define REG_XDMAC1_CIS2         (0xF00040DC) /**< (XDMAC1) Channel Interrupt Status Register 2 */
#define REG_XDMAC1_CSA2         (0xF00040E0) /**< (XDMAC1) Channel Source Address Register 2 */
#define REG_XDMAC1_CDA2         (0xF00040E4) /**< (XDMAC1) Channel Destination Address Register 2 */
#define REG_XDMAC1_CNDA2        (0xF00040E8) /**< (XDMAC1) Channel Next Descriptor Address Register 2 */
#define REG_XDMAC1_CNDC2        (0xF00040EC) /**< (XDMAC1) Channel Next Descriptor Control Register 2 */
#define REG_XDMAC1_CUBC2        (0xF00040F0) /**< (XDMAC1) Channel Microblock Control Register 2 */
#define REG_XDMAC1_CBC2         (0xF00040F4) /**< (XDMAC1) Channel Block Control Register 2 */
#define REG_XDMAC1_CC2          (0xF00040F8) /**< (XDMAC1) Channel Configuration Register 2 */
#define REG_XDMAC1_CDS_MSP2     (0xF00040FC) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 2 */
#define REG_XDMAC1_CSUS2        (0xF0004100) /**< (XDMAC1) Channel Source Microblock Stride 2 */
#define REG_XDMAC1_CDUS2        (0xF0004104) /**< (XDMAC1) Channel Destination Microblock Stride 2 */
#define REG_XDMAC1_CIE3         (0xF0004110) /**< (XDMAC1) Channel Interrupt Enable Register 3 */
#define REG_XDMAC1_CID3         (0xF0004114) /**< (XDMAC1) Channel Interrupt Disable Register 3 */
#define REG_XDMAC1_CIM3         (0xF0004118) /**< (XDMAC1) Channel Interrupt Mask Register 3 */
#define REG_XDMAC1_CIS3         (0xF000411C) /**< (XDMAC1) Channel Interrupt Status Register 3 */
#define REG_XDMAC1_CSA3         (0xF0004120) /**< (XDMAC1) Channel Source Address Register 3 */
#define REG_XDMAC1_CDA3         (0xF0004124) /**< (XDMAC1) Channel Destination Address Register 3 */
#define REG_XDMAC1_CNDA3        (0xF0004128) /**< (XDMAC1) Channel Next Descriptor Address Register 3 */
#define REG_XDMAC1_CNDC3        (0xF000412C) /**< (XDMAC1) Channel Next Descriptor Control Register 3 */
#define REG_XDMAC1_CUBC3        (0xF0004130) /**< (XDMAC1) Channel Microblock Control Register 3 */
#define REG_XDMAC1_CBC3         (0xF0004134) /**< (XDMAC1) Channel Block Control Register 3 */
#define REG_XDMAC1_CC3          (0xF0004138) /**< (XDMAC1) Channel Configuration Register 3 */
#define REG_XDMAC1_CDS_MSP3     (0xF000413C) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 3 */
#define REG_XDMAC1_CSUS3        (0xF0004140) /**< (XDMAC1) Channel Source Microblock Stride 3 */
#define REG_XDMAC1_CDUS3        (0xF0004144) /**< (XDMAC1) Channel Destination Microblock Stride 3 */
#define REG_XDMAC1_CIE4         (0xF0004150) /**< (XDMAC1) Channel Interrupt Enable Register 4 */
#define REG_XDMAC1_CID4         (0xF0004154) /**< (XDMAC1) Channel Interrupt Disable Register 4 */
#define REG_XDMAC1_CIM4         (0xF0004158) /**< (XDMAC1) Channel Interrupt Mask Register 4 */
#define REG_XDMAC1_CIS4         (0xF000415C) /**< (XDMAC1) Channel Interrupt Status Register 4 */
#define REG_XDMAC1_CSA4         (0xF0004160) /**< (XDMAC1) Channel Source Address Register 4 */
#define REG_XDMAC1_CDA4         (0xF0004164) /**< (XDMAC1) Channel Destination Address Register 4 */
#define REG_XDMAC1_CNDA4        (0xF0004168) /**< (XDMAC1) Channel Next Descriptor Address Register 4 */
#define REG_XDMAC1_CNDC4        (0xF000416C) /**< (XDMAC1) Channel Next Descriptor Control Register 4 */
#define REG_XDMAC1_CUBC4        (0xF0004170) /**< (XDMAC1) Channel Microblock Control Register 4 */
#define REG_XDMAC1_CBC4         (0xF0004174) /**< (XDMAC1) Channel Block Control Register 4 */
#define REG_XDMAC1_CC4          (0xF0004178) /**< (XDMAC1) Channel Configuration Register 4 */
#define REG_XDMAC1_CDS_MSP4     (0xF000417C) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 4 */
#define REG_XDMAC1_CSUS4        (0xF0004180) /**< (XDMAC1) Channel Source Microblock Stride 4 */
#define REG_XDMAC1_CDUS4        (0xF0004184) /**< (XDMAC1) Channel Destination Microblock Stride 4 */
#define REG_XDMAC1_CIE5         (0xF0004190) /**< (XDMAC1) Channel Interrupt Enable Register 5 */
#define REG_XDMAC1_CID5         (0xF0004194) /**< (XDMAC1) Channel Interrupt Disable Register 5 */
#define REG_XDMAC1_CIM5         (0xF0004198) /**< (XDMAC1) Channel Interrupt Mask Register 5 */
#define REG_XDMAC1_CIS5         (0xF000419C) /**< (XDMAC1) Channel Interrupt Status Register 5 */
#define REG_XDMAC1_CSA5         (0xF00041A0) /**< (XDMAC1) Channel Source Address Register 5 */
#define REG_XDMAC1_CDA5         (0xF00041A4) /**< (XDMAC1) Channel Destination Address Register 5 */
#define REG_XDMAC1_CNDA5        (0xF00041A8) /**< (XDMAC1) Channel Next Descriptor Address Register 5 */
#define REG_XDMAC1_CNDC5        (0xF00041AC) /**< (XDMAC1) Channel Next Descriptor Control Register 5 */
#define REG_XDMAC1_CUBC5        (0xF00041B0) /**< (XDMAC1) Channel Microblock Control Register 5 */
#define REG_XDMAC1_CBC5         (0xF00041B4) /**< (XDMAC1) Channel Block Control Register 5 */
#define REG_XDMAC1_CC5          (0xF00041B8) /**< (XDMAC1) Channel Configuration Register 5 */
#define REG_XDMAC1_CDS_MSP5     (0xF00041BC) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 5 */
#define REG_XDMAC1_CSUS5        (0xF00041C0) /**< (XDMAC1) Channel Source Microblock Stride 5 */
#define REG_XDMAC1_CDUS5        (0xF00041C4) /**< (XDMAC1) Channel Destination Microblock Stride 5 */
#define REG_XDMAC1_CIE6         (0xF00041D0) /**< (XDMAC1) Channel Interrupt Enable Register 6 */
#define REG_XDMAC1_CID6         (0xF00041D4) /**< (XDMAC1) Channel Interrupt Disable Register 6 */
#define REG_XDMAC1_CIM6         (0xF00041D8) /**< (XDMAC1) Channel Interrupt Mask Register 6 */
#define REG_XDMAC1_CIS6         (0xF00041DC) /**< (XDMAC1) Channel Interrupt Status Register 6 */
#define REG_XDMAC1_CSA6         (0xF00041E0) /**< (XDMAC1) Channel Source Address Register 6 */
#define REG_XDMAC1_CDA6         (0xF00041E4) /**< (XDMAC1) Channel Destination Address Register 6 */
#define REG_XDMAC1_CNDA6        (0xF00041E8) /**< (XDMAC1) Channel Next Descriptor Address Register 6 */
#define REG_XDMAC1_CNDC6        (0xF00041EC) /**< (XDMAC1) Channel Next Descriptor Control Register 6 */
#define REG_XDMAC1_CUBC6        (0xF00041F0) /**< (XDMAC1) Channel Microblock Control Register 6 */
#define REG_XDMAC1_CBC6         (0xF00041F4) /**< (XDMAC1) Channel Block Control Register 6 */
#define REG_XDMAC1_CC6          (0xF00041F8) /**< (XDMAC1) Channel Configuration Register 6 */
#define REG_XDMAC1_CDS_MSP6     (0xF00041FC) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 6 */
#define REG_XDMAC1_CSUS6        (0xF0004200) /**< (XDMAC1) Channel Source Microblock Stride 6 */
#define REG_XDMAC1_CDUS6        (0xF0004204) /**< (XDMAC1) Channel Destination Microblock Stride 6 */
#define REG_XDMAC1_CIE7         (0xF0004210) /**< (XDMAC1) Channel Interrupt Enable Register 7 */
#define REG_XDMAC1_CID7         (0xF0004214) /**< (XDMAC1) Channel Interrupt Disable Register 7 */
#define REG_XDMAC1_CIM7         (0xF0004218) /**< (XDMAC1) Channel Interrupt Mask Register 7 */
#define REG_XDMAC1_CIS7         (0xF000421C) /**< (XDMAC1) Channel Interrupt Status Register 7 */
#define REG_XDMAC1_CSA7         (0xF0004220) /**< (XDMAC1) Channel Source Address Register 7 */
#define REG_XDMAC1_CDA7         (0xF0004224) /**< (XDMAC1) Channel Destination Address Register 7 */
#define REG_XDMAC1_CNDA7        (0xF0004228) /**< (XDMAC1) Channel Next Descriptor Address Register 7 */
#define REG_XDMAC1_CNDC7        (0xF000422C) /**< (XDMAC1) Channel Next Descriptor Control Register 7 */
#define REG_XDMAC1_CUBC7        (0xF0004230) /**< (XDMAC1) Channel Microblock Control Register 7 */
#define REG_XDMAC1_CBC7         (0xF0004234) /**< (XDMAC1) Channel Block Control Register 7 */
#define REG_XDMAC1_CC7          (0xF0004238) /**< (XDMAC1) Channel Configuration Register 7 */
#define REG_XDMAC1_CDS_MSP7     (0xF000423C) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 7 */
#define REG_XDMAC1_CSUS7        (0xF0004240) /**< (XDMAC1) Channel Source Microblock Stride 7 */
#define REG_XDMAC1_CDUS7        (0xF0004244) /**< (XDMAC1) Channel Destination Microblock Stride 7 */
#define REG_XDMAC1_CIE8         (0xF0004250) /**< (XDMAC1) Channel Interrupt Enable Register 8 */
#define REG_XDMAC1_CID8         (0xF0004254) /**< (XDMAC1) Channel Interrupt Disable Register 8 */
#define REG_XDMAC1_CIM8         (0xF0004258) /**< (XDMAC1) Channel Interrupt Mask Register 8 */
#define REG_XDMAC1_CIS8         (0xF000425C) /**< (XDMAC1) Channel Interrupt Status Register 8 */
#define REG_XDMAC1_CSA8         (0xF0004260) /**< (XDMAC1) Channel Source Address Register 8 */
#define REG_XDMAC1_CDA8         (0xF0004264) /**< (XDMAC1) Channel Destination Address Register 8 */
#define REG_XDMAC1_CNDA8        (0xF0004268) /**< (XDMAC1) Channel Next Descriptor Address Register 8 */
#define REG_XDMAC1_CNDC8        (0xF000426C) /**< (XDMAC1) Channel Next Descriptor Control Register 8 */
#define REG_XDMAC1_CUBC8        (0xF0004270) /**< (XDMAC1) Channel Microblock Control Register 8 */
#define REG_XDMAC1_CBC8         (0xF0004274) /**< (XDMAC1) Channel Block Control Register 8 */
#define REG_XDMAC1_CC8          (0xF0004278) /**< (XDMAC1) Channel Configuration Register 8 */
#define REG_XDMAC1_CDS_MSP8     (0xF000427C) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 8 */
#define REG_XDMAC1_CSUS8        (0xF0004280) /**< (XDMAC1) Channel Source Microblock Stride 8 */
#define REG_XDMAC1_CDUS8        (0xF0004284) /**< (XDMAC1) Channel Destination Microblock Stride 8 */
#define REG_XDMAC1_CIE9         (0xF0004290) /**< (XDMAC1) Channel Interrupt Enable Register 9 */
#define REG_XDMAC1_CID9         (0xF0004294) /**< (XDMAC1) Channel Interrupt Disable Register 9 */
#define REG_XDMAC1_CIM9         (0xF0004298) /**< (XDMAC1) Channel Interrupt Mask Register 9 */
#define REG_XDMAC1_CIS9         (0xF000429C) /**< (XDMAC1) Channel Interrupt Status Register 9 */
#define REG_XDMAC1_CSA9         (0xF00042A0) /**< (XDMAC1) Channel Source Address Register 9 */
#define REG_XDMAC1_CDA9         (0xF00042A4) /**< (XDMAC1) Channel Destination Address Register 9 */
#define REG_XDMAC1_CNDA9        (0xF00042A8) /**< (XDMAC1) Channel Next Descriptor Address Register 9 */
#define REG_XDMAC1_CNDC9        (0xF00042AC) /**< (XDMAC1) Channel Next Descriptor Control Register 9 */
#define REG_XDMAC1_CUBC9        (0xF00042B0) /**< (XDMAC1) Channel Microblock Control Register 9 */
#define REG_XDMAC1_CBC9         (0xF00042B4) /**< (XDMAC1) Channel Block Control Register 9 */
#define REG_XDMAC1_CC9          (0xF00042B8) /**< (XDMAC1) Channel Configuration Register 9 */
#define REG_XDMAC1_CDS_MSP9     (0xF00042BC) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 9 */
#define REG_XDMAC1_CSUS9        (0xF00042C0) /**< (XDMAC1) Channel Source Microblock Stride 9 */
#define REG_XDMAC1_CDUS9        (0xF00042C4) /**< (XDMAC1) Channel Destination Microblock Stride 9 */
#define REG_XDMAC1_CIE10        (0xF00042D0) /**< (XDMAC1) Channel Interrupt Enable Register 10 */
#define REG_XDMAC1_CID10        (0xF00042D4) /**< (XDMAC1) Channel Interrupt Disable Register 10 */
#define REG_XDMAC1_CIM10        (0xF00042D8) /**< (XDMAC1) Channel Interrupt Mask Register 10 */
#define REG_XDMAC1_CIS10        (0xF00042DC) /**< (XDMAC1) Channel Interrupt Status Register 10 */
#define REG_XDMAC1_CSA10        (0xF00042E0) /**< (XDMAC1) Channel Source Address Register 10 */
#define REG_XDMAC1_CDA10        (0xF00042E4) /**< (XDMAC1) Channel Destination Address Register 10 */
#define REG_XDMAC1_CNDA10       (0xF00042E8) /**< (XDMAC1) Channel Next Descriptor Address Register 10 */
#define REG_XDMAC1_CNDC10       (0xF00042EC) /**< (XDMAC1) Channel Next Descriptor Control Register 10 */
#define REG_XDMAC1_CUBC10       (0xF00042F0) /**< (XDMAC1) Channel Microblock Control Register 10 */
#define REG_XDMAC1_CBC10        (0xF00042F4) /**< (XDMAC1) Channel Block Control Register 10 */
#define REG_XDMAC1_CC10         (0xF00042F8) /**< (XDMAC1) Channel Configuration Register 10 */
#define REG_XDMAC1_CDS_MSP10    (0xF00042FC) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 10 */
#define REG_XDMAC1_CSUS10       (0xF0004300) /**< (XDMAC1) Channel Source Microblock Stride 10 */
#define REG_XDMAC1_CDUS10       (0xF0004304) /**< (XDMAC1) Channel Destination Microblock Stride 10 */
#define REG_XDMAC1_CIE11        (0xF0004310) /**< (XDMAC1) Channel Interrupt Enable Register 11 */
#define REG_XDMAC1_CID11        (0xF0004314) /**< (XDMAC1) Channel Interrupt Disable Register 11 */
#define REG_XDMAC1_CIM11        (0xF0004318) /**< (XDMAC1) Channel Interrupt Mask Register 11 */
#define REG_XDMAC1_CIS11        (0xF000431C) /**< (XDMAC1) Channel Interrupt Status Register 11 */
#define REG_XDMAC1_CSA11        (0xF0004320) /**< (XDMAC1) Channel Source Address Register 11 */
#define REG_XDMAC1_CDA11        (0xF0004324) /**< (XDMAC1) Channel Destination Address Register 11 */
#define REG_XDMAC1_CNDA11       (0xF0004328) /**< (XDMAC1) Channel Next Descriptor Address Register 11 */
#define REG_XDMAC1_CNDC11       (0xF000432C) /**< (XDMAC1) Channel Next Descriptor Control Register 11 */
#define REG_XDMAC1_CUBC11       (0xF0004330) /**< (XDMAC1) Channel Microblock Control Register 11 */
#define REG_XDMAC1_CBC11        (0xF0004334) /**< (XDMAC1) Channel Block Control Register 11 */
#define REG_XDMAC1_CC11         (0xF0004338) /**< (XDMAC1) Channel Configuration Register 11 */
#define REG_XDMAC1_CDS_MSP11    (0xF000433C) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 11 */
#define REG_XDMAC1_CSUS11       (0xF0004340) /**< (XDMAC1) Channel Source Microblock Stride 11 */
#define REG_XDMAC1_CDUS11       (0xF0004344) /**< (XDMAC1) Channel Destination Microblock Stride 11 */
#define REG_XDMAC1_CIE12        (0xF0004350) /**< (XDMAC1) Channel Interrupt Enable Register 12 */
#define REG_XDMAC1_CID12        (0xF0004354) /**< (XDMAC1) Channel Interrupt Disable Register 12 */
#define REG_XDMAC1_CIM12        (0xF0004358) /**< (XDMAC1) Channel Interrupt Mask Register 12 */
#define REG_XDMAC1_CIS12        (0xF000435C) /**< (XDMAC1) Channel Interrupt Status Register 12 */
#define REG_XDMAC1_CSA12        (0xF0004360) /**< (XDMAC1) Channel Source Address Register 12 */
#define REG_XDMAC1_CDA12        (0xF0004364) /**< (XDMAC1) Channel Destination Address Register 12 */
#define REG_XDMAC1_CNDA12       (0xF0004368) /**< (XDMAC1) Channel Next Descriptor Address Register 12 */
#define REG_XDMAC1_CNDC12       (0xF000436C) /**< (XDMAC1) Channel Next Descriptor Control Register 12 */
#define REG_XDMAC1_CUBC12       (0xF0004370) /**< (XDMAC1) Channel Microblock Control Register 12 */
#define REG_XDMAC1_CBC12        (0xF0004374) /**< (XDMAC1) Channel Block Control Register 12 */
#define REG_XDMAC1_CC12         (0xF0004378) /**< (XDMAC1) Channel Configuration Register 12 */
#define REG_XDMAC1_CDS_MSP12    (0xF000437C) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 12 */
#define REG_XDMAC1_CSUS12       (0xF0004380) /**< (XDMAC1) Channel Source Microblock Stride 12 */
#define REG_XDMAC1_CDUS12       (0xF0004384) /**< (XDMAC1) Channel Destination Microblock Stride 12 */
#define REG_XDMAC1_CIE13        (0xF0004390) /**< (XDMAC1) Channel Interrupt Enable Register 13 */
#define REG_XDMAC1_CID13        (0xF0004394) /**< (XDMAC1) Channel Interrupt Disable Register 13 */
#define REG_XDMAC1_CIM13        (0xF0004398) /**< (XDMAC1) Channel Interrupt Mask Register 13 */
#define REG_XDMAC1_CIS13        (0xF000439C) /**< (XDMAC1) Channel Interrupt Status Register 13 */
#define REG_XDMAC1_CSA13        (0xF00043A0) /**< (XDMAC1) Channel Source Address Register 13 */
#define REG_XDMAC1_CDA13        (0xF00043A4) /**< (XDMAC1) Channel Destination Address Register 13 */
#define REG_XDMAC1_CNDA13       (0xF00043A8) /**< (XDMAC1) Channel Next Descriptor Address Register 13 */
#define REG_XDMAC1_CNDC13       (0xF00043AC) /**< (XDMAC1) Channel Next Descriptor Control Register 13 */
#define REG_XDMAC1_CUBC13       (0xF00043B0) /**< (XDMAC1) Channel Microblock Control Register 13 */
#define REG_XDMAC1_CBC13        (0xF00043B4) /**< (XDMAC1) Channel Block Control Register 13 */
#define REG_XDMAC1_CC13         (0xF00043B8) /**< (XDMAC1) Channel Configuration Register 13 */
#define REG_XDMAC1_CDS_MSP13    (0xF00043BC) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 13 */
#define REG_XDMAC1_CSUS13       (0xF00043C0) /**< (XDMAC1) Channel Source Microblock Stride 13 */
#define REG_XDMAC1_CDUS13       (0xF00043C4) /**< (XDMAC1) Channel Destination Microblock Stride 13 */
#define REG_XDMAC1_CIE14        (0xF00043D0) /**< (XDMAC1) Channel Interrupt Enable Register 14 */
#define REG_XDMAC1_CID14        (0xF00043D4) /**< (XDMAC1) Channel Interrupt Disable Register 14 */
#define REG_XDMAC1_CIM14        (0xF00043D8) /**< (XDMAC1) Channel Interrupt Mask Register 14 */
#define REG_XDMAC1_CIS14        (0xF00043DC) /**< (XDMAC1) Channel Interrupt Status Register 14 */
#define REG_XDMAC1_CSA14        (0xF00043E0) /**< (XDMAC1) Channel Source Address Register 14 */
#define REG_XDMAC1_CDA14        (0xF00043E4) /**< (XDMAC1) Channel Destination Address Register 14 */
#define REG_XDMAC1_CNDA14       (0xF00043E8) /**< (XDMAC1) Channel Next Descriptor Address Register 14 */
#define REG_XDMAC1_CNDC14       (0xF00043EC) /**< (XDMAC1) Channel Next Descriptor Control Register 14 */
#define REG_XDMAC1_CUBC14       (0xF00043F0) /**< (XDMAC1) Channel Microblock Control Register 14 */
#define REG_XDMAC1_CBC14        (0xF00043F4) /**< (XDMAC1) Channel Block Control Register 14 */
#define REG_XDMAC1_CC14         (0xF00043F8) /**< (XDMAC1) Channel Configuration Register 14 */
#define REG_XDMAC1_CDS_MSP14    (0xF00043FC) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 14 */
#define REG_XDMAC1_CSUS14       (0xF0004400) /**< (XDMAC1) Channel Source Microblock Stride 14 */
#define REG_XDMAC1_CDUS14       (0xF0004404) /**< (XDMAC1) Channel Destination Microblock Stride 14 */
#define REG_XDMAC1_CIE15        (0xF0004410) /**< (XDMAC1) Channel Interrupt Enable Register 15 */
#define REG_XDMAC1_CID15        (0xF0004414) /**< (XDMAC1) Channel Interrupt Disable Register 15 */
#define REG_XDMAC1_CIM15        (0xF0004418) /**< (XDMAC1) Channel Interrupt Mask Register 15 */
#define REG_XDMAC1_CIS15        (0xF000441C) /**< (XDMAC1) Channel Interrupt Status Register 15 */
#define REG_XDMAC1_CSA15        (0xF0004420) /**< (XDMAC1) Channel Source Address Register 15 */
#define REG_XDMAC1_CDA15        (0xF0004424) /**< (XDMAC1) Channel Destination Address Register 15 */
#define REG_XDMAC1_CNDA15       (0xF0004428) /**< (XDMAC1) Channel Next Descriptor Address Register 15 */
#define REG_XDMAC1_CNDC15       (0xF000442C) /**< (XDMAC1) Channel Next Descriptor Control Register 15 */
#define REG_XDMAC1_CUBC15       (0xF0004430) /**< (XDMAC1) Channel Microblock Control Register 15 */
#define REG_XDMAC1_CBC15        (0xF0004434) /**< (XDMAC1) Channel Block Control Register 15 */
#define REG_XDMAC1_CC15         (0xF0004438) /**< (XDMAC1) Channel Configuration Register 15 */
#define REG_XDMAC1_CDS_MSP15    (0xF000443C) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 15 */
#define REG_XDMAC1_CSUS15       (0xF0004440) /**< (XDMAC1) Channel Source Microblock Stride 15 */
#define REG_XDMAC1_CDUS15       (0xF0004444) /**< (XDMAC1) Channel Destination Microblock Stride 15 */
#define REG_XDMAC1_GTYPE        (0xF0004000) /**< (XDMAC1) Global Type Register */
#define REG_XDMAC1_GCFG         (0xF0004004) /**< (XDMAC1) Global Configuration Register */
#define REG_XDMAC1_GWAC         (0xF0004008) /**< (XDMAC1) Global Weighted Arbiter Configuration Register */
#define REG_XDMAC1_GIE          (0xF000400C) /**< (XDMAC1) Global Interrupt Enable Register */
#define REG_XDMAC1_GID          (0xF0004010) /**< (XDMAC1) Global Interrupt Disable Register */
#define REG_XDMAC1_GIM          (0xF0004014) /**< (XDMAC1) Global Interrupt Mask Register */
#define REG_XDMAC1_GIS          (0xF0004018) /**< (XDMAC1) Global Interrupt Status Register */
#define REG_XDMAC1_GE           (0xF000401C) /**< (XDMAC1) Global Channel Enable Register */
#define REG_XDMAC1_GD           (0xF0004020) /**< (XDMAC1) Global Channel Disable Register */
#define REG_XDMAC1_GS           (0xF0004024) /**< (XDMAC1) Global Channel Status Register */
#define REG_XDMAC1_GRS          (0xF0004028) /**< (XDMAC1) Global Channel Read Suspend Register */
#define REG_XDMAC1_GWS          (0xF000402C) /**< (XDMAC1) Global Channel Write Suspend Register */
#define REG_XDMAC1_GRWS         (0xF0004030) /**< (XDMAC1) Global Channel Read Write Suspend Register */
#define REG_XDMAC1_GRWR         (0xF0004034) /**< (XDMAC1) Global Channel Read Write Resume Register */
#define REG_XDMAC1_GSWR         (0xF0004038) /**< (XDMAC1) Global Channel Software Request Register */
#define REG_XDMAC1_GSWS         (0xF000403C) /**< (XDMAC1) Global Channel Software Request Status Register */
#define REG_XDMAC1_GSWF         (0xF0004040) /**< (XDMAC1) Global Channel Software Flush Request Register */

#else

#define REG_XDMAC1_CIE0         (*(__O  uint32_t*)0xF0004050U) /**< (XDMAC1) Channel Interrupt Enable Register 0 */
#define REG_XDMAC1_CID0         (*(__O  uint32_t*)0xF0004054U) /**< (XDMAC1) Channel Interrupt Disable Register 0 */
#define REG_XDMAC1_CIM0         (*(__I  uint32_t*)0xF0004058U) /**< (XDMAC1) Channel Interrupt Mask Register 0 */
#define REG_XDMAC1_CIS0         (*(__I  uint32_t*)0xF000405CU) /**< (XDMAC1) Channel Interrupt Status Register 0 */
#define REG_XDMAC1_CSA0         (*(__IO uint32_t*)0xF0004060U) /**< (XDMAC1) Channel Source Address Register 0 */
#define REG_XDMAC1_CDA0         (*(__IO uint32_t*)0xF0004064U) /**< (XDMAC1) Channel Destination Address Register 0 */
#define REG_XDMAC1_CNDA0        (*(__IO uint32_t*)0xF0004068U) /**< (XDMAC1) Channel Next Descriptor Address Register 0 */
#define REG_XDMAC1_CNDC0        (*(__IO uint32_t*)0xF000406CU) /**< (XDMAC1) Channel Next Descriptor Control Register 0 */
#define REG_XDMAC1_CUBC0        (*(__IO uint32_t*)0xF0004070U) /**< (XDMAC1) Channel Microblock Control Register 0 */
#define REG_XDMAC1_CBC0         (*(__IO uint32_t*)0xF0004074U) /**< (XDMAC1) Channel Block Control Register 0 */
#define REG_XDMAC1_CC0          (*(__IO uint32_t*)0xF0004078U) /**< (XDMAC1) Channel Configuration Register 0 */
#define REG_XDMAC1_CDS_MSP0     (*(__IO uint32_t*)0xF000407CU) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 0 */
#define REG_XDMAC1_CSUS0        (*(__IO uint32_t*)0xF0004080U) /**< (XDMAC1) Channel Source Microblock Stride 0 */
#define REG_XDMAC1_CDUS0        (*(__IO uint32_t*)0xF0004084U) /**< (XDMAC1) Channel Destination Microblock Stride 0 */
#define REG_XDMAC1_CIE1         (*(__O  uint32_t*)0xF0004090U) /**< (XDMAC1) Channel Interrupt Enable Register 1 */
#define REG_XDMAC1_CID1         (*(__O  uint32_t*)0xF0004094U) /**< (XDMAC1) Channel Interrupt Disable Register 1 */
#define REG_XDMAC1_CIM1         (*(__I  uint32_t*)0xF0004098U) /**< (XDMAC1) Channel Interrupt Mask Register 1 */
#define REG_XDMAC1_CIS1         (*(__I  uint32_t*)0xF000409CU) /**< (XDMAC1) Channel Interrupt Status Register 1 */
#define REG_XDMAC1_CSA1         (*(__IO uint32_t*)0xF00040A0U) /**< (XDMAC1) Channel Source Address Register 1 */
#define REG_XDMAC1_CDA1         (*(__IO uint32_t*)0xF00040A4U) /**< (XDMAC1) Channel Destination Address Register 1 */
#define REG_XDMAC1_CNDA1        (*(__IO uint32_t*)0xF00040A8U) /**< (XDMAC1) Channel Next Descriptor Address Register 1 */
#define REG_XDMAC1_CNDC1        (*(__IO uint32_t*)0xF00040ACU) /**< (XDMAC1) Channel Next Descriptor Control Register 1 */
#define REG_XDMAC1_CUBC1        (*(__IO uint32_t*)0xF00040B0U) /**< (XDMAC1) Channel Microblock Control Register 1 */
#define REG_XDMAC1_CBC1         (*(__IO uint32_t*)0xF00040B4U) /**< (XDMAC1) Channel Block Control Register 1 */
#define REG_XDMAC1_CC1          (*(__IO uint32_t*)0xF00040B8U) /**< (XDMAC1) Channel Configuration Register 1 */
#define REG_XDMAC1_CDS_MSP1     (*(__IO uint32_t*)0xF00040BCU) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 1 */
#define REG_XDMAC1_CSUS1        (*(__IO uint32_t*)0xF00040C0U) /**< (XDMAC1) Channel Source Microblock Stride 1 */
#define REG_XDMAC1_CDUS1        (*(__IO uint32_t*)0xF00040C4U) /**< (XDMAC1) Channel Destination Microblock Stride 1 */
#define REG_XDMAC1_CIE2         (*(__O  uint32_t*)0xF00040D0U) /**< (XDMAC1) Channel Interrupt Enable Register 2 */
#define REG_XDMAC1_CID2         (*(__O  uint32_t*)0xF00040D4U) /**< (XDMAC1) Channel Interrupt Disable Register 2 */
#define REG_XDMAC1_CIM2         (*(__I  uint32_t*)0xF00040D8U) /**< (XDMAC1) Channel Interrupt Mask Register 2 */
#define REG_XDMAC1_CIS2         (*(__I  uint32_t*)0xF00040DCU) /**< (XDMAC1) Channel Interrupt Status Register 2 */
#define REG_XDMAC1_CSA2         (*(__IO uint32_t*)0xF00040E0U) /**< (XDMAC1) Channel Source Address Register 2 */
#define REG_XDMAC1_CDA2         (*(__IO uint32_t*)0xF00040E4U) /**< (XDMAC1) Channel Destination Address Register 2 */
#define REG_XDMAC1_CNDA2        (*(__IO uint32_t*)0xF00040E8U) /**< (XDMAC1) Channel Next Descriptor Address Register 2 */
#define REG_XDMAC1_CNDC2        (*(__IO uint32_t*)0xF00040ECU) /**< (XDMAC1) Channel Next Descriptor Control Register 2 */
#define REG_XDMAC1_CUBC2        (*(__IO uint32_t*)0xF00040F0U) /**< (XDMAC1) Channel Microblock Control Register 2 */
#define REG_XDMAC1_CBC2         (*(__IO uint32_t*)0xF00040F4U) /**< (XDMAC1) Channel Block Control Register 2 */
#define REG_XDMAC1_CC2          (*(__IO uint32_t*)0xF00040F8U) /**< (XDMAC1) Channel Configuration Register 2 */
#define REG_XDMAC1_CDS_MSP2     (*(__IO uint32_t*)0xF00040FCU) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 2 */
#define REG_XDMAC1_CSUS2        (*(__IO uint32_t*)0xF0004100U) /**< (XDMAC1) Channel Source Microblock Stride 2 */
#define REG_XDMAC1_CDUS2        (*(__IO uint32_t*)0xF0004104U) /**< (XDMAC1) Channel Destination Microblock Stride 2 */
#define REG_XDMAC1_CIE3         (*(__O  uint32_t*)0xF0004110U) /**< (XDMAC1) Channel Interrupt Enable Register 3 */
#define REG_XDMAC1_CID3         (*(__O  uint32_t*)0xF0004114U) /**< (XDMAC1) Channel Interrupt Disable Register 3 */
#define REG_XDMAC1_CIM3         (*(__I  uint32_t*)0xF0004118U) /**< (XDMAC1) Channel Interrupt Mask Register 3 */
#define REG_XDMAC1_CIS3         (*(__I  uint32_t*)0xF000411CU) /**< (XDMAC1) Channel Interrupt Status Register 3 */
#define REG_XDMAC1_CSA3         (*(__IO uint32_t*)0xF0004120U) /**< (XDMAC1) Channel Source Address Register 3 */
#define REG_XDMAC1_CDA3         (*(__IO uint32_t*)0xF0004124U) /**< (XDMAC1) Channel Destination Address Register 3 */
#define REG_XDMAC1_CNDA3        (*(__IO uint32_t*)0xF0004128U) /**< (XDMAC1) Channel Next Descriptor Address Register 3 */
#define REG_XDMAC1_CNDC3        (*(__IO uint32_t*)0xF000412CU) /**< (XDMAC1) Channel Next Descriptor Control Register 3 */
#define REG_XDMAC1_CUBC3        (*(__IO uint32_t*)0xF0004130U) /**< (XDMAC1) Channel Microblock Control Register 3 */
#define REG_XDMAC1_CBC3         (*(__IO uint32_t*)0xF0004134U) /**< (XDMAC1) Channel Block Control Register 3 */
#define REG_XDMAC1_CC3          (*(__IO uint32_t*)0xF0004138U) /**< (XDMAC1) Channel Configuration Register 3 */
#define REG_XDMAC1_CDS_MSP3     (*(__IO uint32_t*)0xF000413CU) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 3 */
#define REG_XDMAC1_CSUS3        (*(__IO uint32_t*)0xF0004140U) /**< (XDMAC1) Channel Source Microblock Stride 3 */
#define REG_XDMAC1_CDUS3        (*(__IO uint32_t*)0xF0004144U) /**< (XDMAC1) Channel Destination Microblock Stride 3 */
#define REG_XDMAC1_CIE4         (*(__O  uint32_t*)0xF0004150U) /**< (XDMAC1) Channel Interrupt Enable Register 4 */
#define REG_XDMAC1_CID4         (*(__O  uint32_t*)0xF0004154U) /**< (XDMAC1) Channel Interrupt Disable Register 4 */
#define REG_XDMAC1_CIM4         (*(__I  uint32_t*)0xF0004158U) /**< (XDMAC1) Channel Interrupt Mask Register 4 */
#define REG_XDMAC1_CIS4         (*(__I  uint32_t*)0xF000415CU) /**< (XDMAC1) Channel Interrupt Status Register 4 */
#define REG_XDMAC1_CSA4         (*(__IO uint32_t*)0xF0004160U) /**< (XDMAC1) Channel Source Address Register 4 */
#define REG_XDMAC1_CDA4         (*(__IO uint32_t*)0xF0004164U) /**< (XDMAC1) Channel Destination Address Register 4 */
#define REG_XDMAC1_CNDA4        (*(__IO uint32_t*)0xF0004168U) /**< (XDMAC1) Channel Next Descriptor Address Register 4 */
#define REG_XDMAC1_CNDC4        (*(__IO uint32_t*)0xF000416CU) /**< (XDMAC1) Channel Next Descriptor Control Register 4 */
#define REG_XDMAC1_CUBC4        (*(__IO uint32_t*)0xF0004170U) /**< (XDMAC1) Channel Microblock Control Register 4 */
#define REG_XDMAC1_CBC4         (*(__IO uint32_t*)0xF0004174U) /**< (XDMAC1) Channel Block Control Register 4 */
#define REG_XDMAC1_CC4          (*(__IO uint32_t*)0xF0004178U) /**< (XDMAC1) Channel Configuration Register 4 */
#define REG_XDMAC1_CDS_MSP4     (*(__IO uint32_t*)0xF000417CU) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 4 */
#define REG_XDMAC1_CSUS4        (*(__IO uint32_t*)0xF0004180U) /**< (XDMAC1) Channel Source Microblock Stride 4 */
#define REG_XDMAC1_CDUS4        (*(__IO uint32_t*)0xF0004184U) /**< (XDMAC1) Channel Destination Microblock Stride 4 */
#define REG_XDMAC1_CIE5         (*(__O  uint32_t*)0xF0004190U) /**< (XDMAC1) Channel Interrupt Enable Register 5 */
#define REG_XDMAC1_CID5         (*(__O  uint32_t*)0xF0004194U) /**< (XDMAC1) Channel Interrupt Disable Register 5 */
#define REG_XDMAC1_CIM5         (*(__I  uint32_t*)0xF0004198U) /**< (XDMAC1) Channel Interrupt Mask Register 5 */
#define REG_XDMAC1_CIS5         (*(__I  uint32_t*)0xF000419CU) /**< (XDMAC1) Channel Interrupt Status Register 5 */
#define REG_XDMAC1_CSA5         (*(__IO uint32_t*)0xF00041A0U) /**< (XDMAC1) Channel Source Address Register 5 */
#define REG_XDMAC1_CDA5         (*(__IO uint32_t*)0xF00041A4U) /**< (XDMAC1) Channel Destination Address Register 5 */
#define REG_XDMAC1_CNDA5        (*(__IO uint32_t*)0xF00041A8U) /**< (XDMAC1) Channel Next Descriptor Address Register 5 */
#define REG_XDMAC1_CNDC5        (*(__IO uint32_t*)0xF00041ACU) /**< (XDMAC1) Channel Next Descriptor Control Register 5 */
#define REG_XDMAC1_CUBC5        (*(__IO uint32_t*)0xF00041B0U) /**< (XDMAC1) Channel Microblock Control Register 5 */
#define REG_XDMAC1_CBC5         (*(__IO uint32_t*)0xF00041B4U) /**< (XDMAC1) Channel Block Control Register 5 */
#define REG_XDMAC1_CC5          (*(__IO uint32_t*)0xF00041B8U) /**< (XDMAC1) Channel Configuration Register 5 */
#define REG_XDMAC1_CDS_MSP5     (*(__IO uint32_t*)0xF00041BCU) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 5 */
#define REG_XDMAC1_CSUS5        (*(__IO uint32_t*)0xF00041C0U) /**< (XDMAC1) Channel Source Microblock Stride 5 */
#define REG_XDMAC1_CDUS5        (*(__IO uint32_t*)0xF00041C4U) /**< (XDMAC1) Channel Destination Microblock Stride 5 */
#define REG_XDMAC1_CIE6         (*(__O  uint32_t*)0xF00041D0U) /**< (XDMAC1) Channel Interrupt Enable Register 6 */
#define REG_XDMAC1_CID6         (*(__O  uint32_t*)0xF00041D4U) /**< (XDMAC1) Channel Interrupt Disable Register 6 */
#define REG_XDMAC1_CIM6         (*(__I  uint32_t*)0xF00041D8U) /**< (XDMAC1) Channel Interrupt Mask Register 6 */
#define REG_XDMAC1_CIS6         (*(__I  uint32_t*)0xF00041DCU) /**< (XDMAC1) Channel Interrupt Status Register 6 */
#define REG_XDMAC1_CSA6         (*(__IO uint32_t*)0xF00041E0U) /**< (XDMAC1) Channel Source Address Register 6 */
#define REG_XDMAC1_CDA6         (*(__IO uint32_t*)0xF00041E4U) /**< (XDMAC1) Channel Destination Address Register 6 */
#define REG_XDMAC1_CNDA6        (*(__IO uint32_t*)0xF00041E8U) /**< (XDMAC1) Channel Next Descriptor Address Register 6 */
#define REG_XDMAC1_CNDC6        (*(__IO uint32_t*)0xF00041ECU) /**< (XDMAC1) Channel Next Descriptor Control Register 6 */
#define REG_XDMAC1_CUBC6        (*(__IO uint32_t*)0xF00041F0U) /**< (XDMAC1) Channel Microblock Control Register 6 */
#define REG_XDMAC1_CBC6         (*(__IO uint32_t*)0xF00041F4U) /**< (XDMAC1) Channel Block Control Register 6 */
#define REG_XDMAC1_CC6          (*(__IO uint32_t*)0xF00041F8U) /**< (XDMAC1) Channel Configuration Register 6 */
#define REG_XDMAC1_CDS_MSP6     (*(__IO uint32_t*)0xF00041FCU) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 6 */
#define REG_XDMAC1_CSUS6        (*(__IO uint32_t*)0xF0004200U) /**< (XDMAC1) Channel Source Microblock Stride 6 */
#define REG_XDMAC1_CDUS6        (*(__IO uint32_t*)0xF0004204U) /**< (XDMAC1) Channel Destination Microblock Stride 6 */
#define REG_XDMAC1_CIE7         (*(__O  uint32_t*)0xF0004210U) /**< (XDMAC1) Channel Interrupt Enable Register 7 */
#define REG_XDMAC1_CID7         (*(__O  uint32_t*)0xF0004214U) /**< (XDMAC1) Channel Interrupt Disable Register 7 */
#define REG_XDMAC1_CIM7         (*(__I  uint32_t*)0xF0004218U) /**< (XDMAC1) Channel Interrupt Mask Register 7 */
#define REG_XDMAC1_CIS7         (*(__I  uint32_t*)0xF000421CU) /**< (XDMAC1) Channel Interrupt Status Register 7 */
#define REG_XDMAC1_CSA7         (*(__IO uint32_t*)0xF0004220U) /**< (XDMAC1) Channel Source Address Register 7 */
#define REG_XDMAC1_CDA7         (*(__IO uint32_t*)0xF0004224U) /**< (XDMAC1) Channel Destination Address Register 7 */
#define REG_XDMAC1_CNDA7        (*(__IO uint32_t*)0xF0004228U) /**< (XDMAC1) Channel Next Descriptor Address Register 7 */
#define REG_XDMAC1_CNDC7        (*(__IO uint32_t*)0xF000422CU) /**< (XDMAC1) Channel Next Descriptor Control Register 7 */
#define REG_XDMAC1_CUBC7        (*(__IO uint32_t*)0xF0004230U) /**< (XDMAC1) Channel Microblock Control Register 7 */
#define REG_XDMAC1_CBC7         (*(__IO uint32_t*)0xF0004234U) /**< (XDMAC1) Channel Block Control Register 7 */
#define REG_XDMAC1_CC7          (*(__IO uint32_t*)0xF0004238U) /**< (XDMAC1) Channel Configuration Register 7 */
#define REG_XDMAC1_CDS_MSP7     (*(__IO uint32_t*)0xF000423CU) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 7 */
#define REG_XDMAC1_CSUS7        (*(__IO uint32_t*)0xF0004240U) /**< (XDMAC1) Channel Source Microblock Stride 7 */
#define REG_XDMAC1_CDUS7        (*(__IO uint32_t*)0xF0004244U) /**< (XDMAC1) Channel Destination Microblock Stride 7 */
#define REG_XDMAC1_CIE8         (*(__O  uint32_t*)0xF0004250U) /**< (XDMAC1) Channel Interrupt Enable Register 8 */
#define REG_XDMAC1_CID8         (*(__O  uint32_t*)0xF0004254U) /**< (XDMAC1) Channel Interrupt Disable Register 8 */
#define REG_XDMAC1_CIM8         (*(__I  uint32_t*)0xF0004258U) /**< (XDMAC1) Channel Interrupt Mask Register 8 */
#define REG_XDMAC1_CIS8         (*(__I  uint32_t*)0xF000425CU) /**< (XDMAC1) Channel Interrupt Status Register 8 */
#define REG_XDMAC1_CSA8         (*(__IO uint32_t*)0xF0004260U) /**< (XDMAC1) Channel Source Address Register 8 */
#define REG_XDMAC1_CDA8         (*(__IO uint32_t*)0xF0004264U) /**< (XDMAC1) Channel Destination Address Register 8 */
#define REG_XDMAC1_CNDA8        (*(__IO uint32_t*)0xF0004268U) /**< (XDMAC1) Channel Next Descriptor Address Register 8 */
#define REG_XDMAC1_CNDC8        (*(__IO uint32_t*)0xF000426CU) /**< (XDMAC1) Channel Next Descriptor Control Register 8 */
#define REG_XDMAC1_CUBC8        (*(__IO uint32_t*)0xF0004270U) /**< (XDMAC1) Channel Microblock Control Register 8 */
#define REG_XDMAC1_CBC8         (*(__IO uint32_t*)0xF0004274U) /**< (XDMAC1) Channel Block Control Register 8 */
#define REG_XDMAC1_CC8          (*(__IO uint32_t*)0xF0004278U) /**< (XDMAC1) Channel Configuration Register 8 */
#define REG_XDMAC1_CDS_MSP8     (*(__IO uint32_t*)0xF000427CU) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 8 */
#define REG_XDMAC1_CSUS8        (*(__IO uint32_t*)0xF0004280U) /**< (XDMAC1) Channel Source Microblock Stride 8 */
#define REG_XDMAC1_CDUS8        (*(__IO uint32_t*)0xF0004284U) /**< (XDMAC1) Channel Destination Microblock Stride 8 */
#define REG_XDMAC1_CIE9         (*(__O  uint32_t*)0xF0004290U) /**< (XDMAC1) Channel Interrupt Enable Register 9 */
#define REG_XDMAC1_CID9         (*(__O  uint32_t*)0xF0004294U) /**< (XDMAC1) Channel Interrupt Disable Register 9 */
#define REG_XDMAC1_CIM9         (*(__I  uint32_t*)0xF0004298U) /**< (XDMAC1) Channel Interrupt Mask Register 9 */
#define REG_XDMAC1_CIS9         (*(__I  uint32_t*)0xF000429CU) /**< (XDMAC1) Channel Interrupt Status Register 9 */
#define REG_XDMAC1_CSA9         (*(__IO uint32_t*)0xF00042A0U) /**< (XDMAC1) Channel Source Address Register 9 */
#define REG_XDMAC1_CDA9         (*(__IO uint32_t*)0xF00042A4U) /**< (XDMAC1) Channel Destination Address Register 9 */
#define REG_XDMAC1_CNDA9        (*(__IO uint32_t*)0xF00042A8U) /**< (XDMAC1) Channel Next Descriptor Address Register 9 */
#define REG_XDMAC1_CNDC9        (*(__IO uint32_t*)0xF00042ACU) /**< (XDMAC1) Channel Next Descriptor Control Register 9 */
#define REG_XDMAC1_CUBC9        (*(__IO uint32_t*)0xF00042B0U) /**< (XDMAC1) Channel Microblock Control Register 9 */
#define REG_XDMAC1_CBC9         (*(__IO uint32_t*)0xF00042B4U) /**< (XDMAC1) Channel Block Control Register 9 */
#define REG_XDMAC1_CC9          (*(__IO uint32_t*)0xF00042B8U) /**< (XDMAC1) Channel Configuration Register 9 */
#define REG_XDMAC1_CDS_MSP9     (*(__IO uint32_t*)0xF00042BCU) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 9 */
#define REG_XDMAC1_CSUS9        (*(__IO uint32_t*)0xF00042C0U) /**< (XDMAC1) Channel Source Microblock Stride 9 */
#define REG_XDMAC1_CDUS9        (*(__IO uint32_t*)0xF00042C4U) /**< (XDMAC1) Channel Destination Microblock Stride 9 */
#define REG_XDMAC1_CIE10        (*(__O  uint32_t*)0xF00042D0U) /**< (XDMAC1) Channel Interrupt Enable Register 10 */
#define REG_XDMAC1_CID10        (*(__O  uint32_t*)0xF00042D4U) /**< (XDMAC1) Channel Interrupt Disable Register 10 */
#define REG_XDMAC1_CIM10        (*(__I  uint32_t*)0xF00042D8U) /**< (XDMAC1) Channel Interrupt Mask Register 10 */
#define REG_XDMAC1_CIS10        (*(__I  uint32_t*)0xF00042DCU) /**< (XDMAC1) Channel Interrupt Status Register 10 */
#define REG_XDMAC1_CSA10        (*(__IO uint32_t*)0xF00042E0U) /**< (XDMAC1) Channel Source Address Register 10 */
#define REG_XDMAC1_CDA10        (*(__IO uint32_t*)0xF00042E4U) /**< (XDMAC1) Channel Destination Address Register 10 */
#define REG_XDMAC1_CNDA10       (*(__IO uint32_t*)0xF00042E8U) /**< (XDMAC1) Channel Next Descriptor Address Register 10 */
#define REG_XDMAC1_CNDC10       (*(__IO uint32_t*)0xF00042ECU) /**< (XDMAC1) Channel Next Descriptor Control Register 10 */
#define REG_XDMAC1_CUBC10       (*(__IO uint32_t*)0xF00042F0U) /**< (XDMAC1) Channel Microblock Control Register 10 */
#define REG_XDMAC1_CBC10        (*(__IO uint32_t*)0xF00042F4U) /**< (XDMAC1) Channel Block Control Register 10 */
#define REG_XDMAC1_CC10         (*(__IO uint32_t*)0xF00042F8U) /**< (XDMAC1) Channel Configuration Register 10 */
#define REG_XDMAC1_CDS_MSP10    (*(__IO uint32_t*)0xF00042FCU) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 10 */
#define REG_XDMAC1_CSUS10       (*(__IO uint32_t*)0xF0004300U) /**< (XDMAC1) Channel Source Microblock Stride 10 */
#define REG_XDMAC1_CDUS10       (*(__IO uint32_t*)0xF0004304U) /**< (XDMAC1) Channel Destination Microblock Stride 10 */
#define REG_XDMAC1_CIE11        (*(__O  uint32_t*)0xF0004310U) /**< (XDMAC1) Channel Interrupt Enable Register 11 */
#define REG_XDMAC1_CID11        (*(__O  uint32_t*)0xF0004314U) /**< (XDMAC1) Channel Interrupt Disable Register 11 */
#define REG_XDMAC1_CIM11        (*(__I  uint32_t*)0xF0004318U) /**< (XDMAC1) Channel Interrupt Mask Register 11 */
#define REG_XDMAC1_CIS11        (*(__I  uint32_t*)0xF000431CU) /**< (XDMAC1) Channel Interrupt Status Register 11 */
#define REG_XDMAC1_CSA11        (*(__IO uint32_t*)0xF0004320U) /**< (XDMAC1) Channel Source Address Register 11 */
#define REG_XDMAC1_CDA11        (*(__IO uint32_t*)0xF0004324U) /**< (XDMAC1) Channel Destination Address Register 11 */
#define REG_XDMAC1_CNDA11       (*(__IO uint32_t*)0xF0004328U) /**< (XDMAC1) Channel Next Descriptor Address Register 11 */
#define REG_XDMAC1_CNDC11       (*(__IO uint32_t*)0xF000432CU) /**< (XDMAC1) Channel Next Descriptor Control Register 11 */
#define REG_XDMAC1_CUBC11       (*(__IO uint32_t*)0xF0004330U) /**< (XDMAC1) Channel Microblock Control Register 11 */
#define REG_XDMAC1_CBC11        (*(__IO uint32_t*)0xF0004334U) /**< (XDMAC1) Channel Block Control Register 11 */
#define REG_XDMAC1_CC11         (*(__IO uint32_t*)0xF0004338U) /**< (XDMAC1) Channel Configuration Register 11 */
#define REG_XDMAC1_CDS_MSP11    (*(__IO uint32_t*)0xF000433CU) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 11 */
#define REG_XDMAC1_CSUS11       (*(__IO uint32_t*)0xF0004340U) /**< (XDMAC1) Channel Source Microblock Stride 11 */
#define REG_XDMAC1_CDUS11       (*(__IO uint32_t*)0xF0004344U) /**< (XDMAC1) Channel Destination Microblock Stride 11 */
#define REG_XDMAC1_CIE12        (*(__O  uint32_t*)0xF0004350U) /**< (XDMAC1) Channel Interrupt Enable Register 12 */
#define REG_XDMAC1_CID12        (*(__O  uint32_t*)0xF0004354U) /**< (XDMAC1) Channel Interrupt Disable Register 12 */
#define REG_XDMAC1_CIM12        (*(__I  uint32_t*)0xF0004358U) /**< (XDMAC1) Channel Interrupt Mask Register 12 */
#define REG_XDMAC1_CIS12        (*(__I  uint32_t*)0xF000435CU) /**< (XDMAC1) Channel Interrupt Status Register 12 */
#define REG_XDMAC1_CSA12        (*(__IO uint32_t*)0xF0004360U) /**< (XDMAC1) Channel Source Address Register 12 */
#define REG_XDMAC1_CDA12        (*(__IO uint32_t*)0xF0004364U) /**< (XDMAC1) Channel Destination Address Register 12 */
#define REG_XDMAC1_CNDA12       (*(__IO uint32_t*)0xF0004368U) /**< (XDMAC1) Channel Next Descriptor Address Register 12 */
#define REG_XDMAC1_CNDC12       (*(__IO uint32_t*)0xF000436CU) /**< (XDMAC1) Channel Next Descriptor Control Register 12 */
#define REG_XDMAC1_CUBC12       (*(__IO uint32_t*)0xF0004370U) /**< (XDMAC1) Channel Microblock Control Register 12 */
#define REG_XDMAC1_CBC12        (*(__IO uint32_t*)0xF0004374U) /**< (XDMAC1) Channel Block Control Register 12 */
#define REG_XDMAC1_CC12         (*(__IO uint32_t*)0xF0004378U) /**< (XDMAC1) Channel Configuration Register 12 */
#define REG_XDMAC1_CDS_MSP12    (*(__IO uint32_t*)0xF000437CU) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 12 */
#define REG_XDMAC1_CSUS12       (*(__IO uint32_t*)0xF0004380U) /**< (XDMAC1) Channel Source Microblock Stride 12 */
#define REG_XDMAC1_CDUS12       (*(__IO uint32_t*)0xF0004384U) /**< (XDMAC1) Channel Destination Microblock Stride 12 */
#define REG_XDMAC1_CIE13        (*(__O  uint32_t*)0xF0004390U) /**< (XDMAC1) Channel Interrupt Enable Register 13 */
#define REG_XDMAC1_CID13        (*(__O  uint32_t*)0xF0004394U) /**< (XDMAC1) Channel Interrupt Disable Register 13 */
#define REG_XDMAC1_CIM13        (*(__I  uint32_t*)0xF0004398U) /**< (XDMAC1) Channel Interrupt Mask Register 13 */
#define REG_XDMAC1_CIS13        (*(__I  uint32_t*)0xF000439CU) /**< (XDMAC1) Channel Interrupt Status Register 13 */
#define REG_XDMAC1_CSA13        (*(__IO uint32_t*)0xF00043A0U) /**< (XDMAC1) Channel Source Address Register 13 */
#define REG_XDMAC1_CDA13        (*(__IO uint32_t*)0xF00043A4U) /**< (XDMAC1) Channel Destination Address Register 13 */
#define REG_XDMAC1_CNDA13       (*(__IO uint32_t*)0xF00043A8U) /**< (XDMAC1) Channel Next Descriptor Address Register 13 */
#define REG_XDMAC1_CNDC13       (*(__IO uint32_t*)0xF00043ACU) /**< (XDMAC1) Channel Next Descriptor Control Register 13 */
#define REG_XDMAC1_CUBC13       (*(__IO uint32_t*)0xF00043B0U) /**< (XDMAC1) Channel Microblock Control Register 13 */
#define REG_XDMAC1_CBC13        (*(__IO uint32_t*)0xF00043B4U) /**< (XDMAC1) Channel Block Control Register 13 */
#define REG_XDMAC1_CC13         (*(__IO uint32_t*)0xF00043B8U) /**< (XDMAC1) Channel Configuration Register 13 */
#define REG_XDMAC1_CDS_MSP13    (*(__IO uint32_t*)0xF00043BCU) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 13 */
#define REG_XDMAC1_CSUS13       (*(__IO uint32_t*)0xF00043C0U) /**< (XDMAC1) Channel Source Microblock Stride 13 */
#define REG_XDMAC1_CDUS13       (*(__IO uint32_t*)0xF00043C4U) /**< (XDMAC1) Channel Destination Microblock Stride 13 */
#define REG_XDMAC1_CIE14        (*(__O  uint32_t*)0xF00043D0U) /**< (XDMAC1) Channel Interrupt Enable Register 14 */
#define REG_XDMAC1_CID14        (*(__O  uint32_t*)0xF00043D4U) /**< (XDMAC1) Channel Interrupt Disable Register 14 */
#define REG_XDMAC1_CIM14        (*(__I  uint32_t*)0xF00043D8U) /**< (XDMAC1) Channel Interrupt Mask Register 14 */
#define REG_XDMAC1_CIS14        (*(__I  uint32_t*)0xF00043DCU) /**< (XDMAC1) Channel Interrupt Status Register 14 */
#define REG_XDMAC1_CSA14        (*(__IO uint32_t*)0xF00043E0U) /**< (XDMAC1) Channel Source Address Register 14 */
#define REG_XDMAC1_CDA14        (*(__IO uint32_t*)0xF00043E4U) /**< (XDMAC1) Channel Destination Address Register 14 */
#define REG_XDMAC1_CNDA14       (*(__IO uint32_t*)0xF00043E8U) /**< (XDMAC1) Channel Next Descriptor Address Register 14 */
#define REG_XDMAC1_CNDC14       (*(__IO uint32_t*)0xF00043ECU) /**< (XDMAC1) Channel Next Descriptor Control Register 14 */
#define REG_XDMAC1_CUBC14       (*(__IO uint32_t*)0xF00043F0U) /**< (XDMAC1) Channel Microblock Control Register 14 */
#define REG_XDMAC1_CBC14        (*(__IO uint32_t*)0xF00043F4U) /**< (XDMAC1) Channel Block Control Register 14 */
#define REG_XDMAC1_CC14         (*(__IO uint32_t*)0xF00043F8U) /**< (XDMAC1) Channel Configuration Register 14 */
#define REG_XDMAC1_CDS_MSP14    (*(__IO uint32_t*)0xF00043FCU) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 14 */
#define REG_XDMAC1_CSUS14       (*(__IO uint32_t*)0xF0004400U) /**< (XDMAC1) Channel Source Microblock Stride 14 */
#define REG_XDMAC1_CDUS14       (*(__IO uint32_t*)0xF0004404U) /**< (XDMAC1) Channel Destination Microblock Stride 14 */
#define REG_XDMAC1_CIE15        (*(__O  uint32_t*)0xF0004410U) /**< (XDMAC1) Channel Interrupt Enable Register 15 */
#define REG_XDMAC1_CID15        (*(__O  uint32_t*)0xF0004414U) /**< (XDMAC1) Channel Interrupt Disable Register 15 */
#define REG_XDMAC1_CIM15        (*(__I  uint32_t*)0xF0004418U) /**< (XDMAC1) Channel Interrupt Mask Register 15 */
#define REG_XDMAC1_CIS15        (*(__I  uint32_t*)0xF000441CU) /**< (XDMAC1) Channel Interrupt Status Register 15 */
#define REG_XDMAC1_CSA15        (*(__IO uint32_t*)0xF0004420U) /**< (XDMAC1) Channel Source Address Register 15 */
#define REG_XDMAC1_CDA15        (*(__IO uint32_t*)0xF0004424U) /**< (XDMAC1) Channel Destination Address Register 15 */
#define REG_XDMAC1_CNDA15       (*(__IO uint32_t*)0xF0004428U) /**< (XDMAC1) Channel Next Descriptor Address Register 15 */
#define REG_XDMAC1_CNDC15       (*(__IO uint32_t*)0xF000442CU) /**< (XDMAC1) Channel Next Descriptor Control Register 15 */
#define REG_XDMAC1_CUBC15       (*(__IO uint32_t*)0xF0004430U) /**< (XDMAC1) Channel Microblock Control Register 15 */
#define REG_XDMAC1_CBC15        (*(__IO uint32_t*)0xF0004434U) /**< (XDMAC1) Channel Block Control Register 15 */
#define REG_XDMAC1_CC15         (*(__IO uint32_t*)0xF0004438U) /**< (XDMAC1) Channel Configuration Register 15 */
#define REG_XDMAC1_CDS_MSP15    (*(__IO uint32_t*)0xF000443CU) /**< (XDMAC1) Channel Data Stride Memory Set Pattern 15 */
#define REG_XDMAC1_CSUS15       (*(__IO uint32_t*)0xF0004440U) /**< (XDMAC1) Channel Source Microblock Stride 15 */
#define REG_XDMAC1_CDUS15       (*(__IO uint32_t*)0xF0004444U) /**< (XDMAC1) Channel Destination Microblock Stride 15 */
#define REG_XDMAC1_GTYPE        (*(__I  uint32_t*)0xF0004000U) /**< (XDMAC1) Global Type Register */
#define REG_XDMAC1_GCFG         (*(__IO uint32_t*)0xF0004004U) /**< (XDMAC1) Global Configuration Register */
#define REG_XDMAC1_GWAC         (*(__IO uint32_t*)0xF0004008U) /**< (XDMAC1) Global Weighted Arbiter Configuration Register */
#define REG_XDMAC1_GIE          (*(__O  uint32_t*)0xF000400CU) /**< (XDMAC1) Global Interrupt Enable Register */
#define REG_XDMAC1_GID          (*(__O  uint32_t*)0xF0004010U) /**< (XDMAC1) Global Interrupt Disable Register */
#define REG_XDMAC1_GIM          (*(__I  uint32_t*)0xF0004014U) /**< (XDMAC1) Global Interrupt Mask Register */
#define REG_XDMAC1_GIS          (*(__I  uint32_t*)0xF0004018U) /**< (XDMAC1) Global Interrupt Status Register */
#define REG_XDMAC1_GE           (*(__O  uint32_t*)0xF000401CU) /**< (XDMAC1) Global Channel Enable Register */
#define REG_XDMAC1_GD           (*(__O  uint32_t*)0xF0004020U) /**< (XDMAC1) Global Channel Disable Register */
#define REG_XDMAC1_GS           (*(__I  uint32_t*)0xF0004024U) /**< (XDMAC1) Global Channel Status Register */
#define REG_XDMAC1_GRS          (*(__IO uint32_t*)0xF0004028U) /**< (XDMAC1) Global Channel Read Suspend Register */
#define REG_XDMAC1_GWS          (*(__IO uint32_t*)0xF000402CU) /**< (XDMAC1) Global Channel Write Suspend Register */
#define REG_XDMAC1_GRWS         (*(__O  uint32_t*)0xF0004030U) /**< (XDMAC1) Global Channel Read Write Suspend Register */
#define REG_XDMAC1_GRWR         (*(__O  uint32_t*)0xF0004034U) /**< (XDMAC1) Global Channel Read Write Resume Register */
#define REG_XDMAC1_GSWR         (*(__O  uint32_t*)0xF0004038U) /**< (XDMAC1) Global Channel Software Request Register */
#define REG_XDMAC1_GSWS         (*(__I  uint32_t*)0xF000403CU) /**< (XDMAC1) Global Channel Software Request Status Register */
#define REG_XDMAC1_GSWF         (*(__O  uint32_t*)0xF0004040U) /**< (XDMAC1) Global Channel Software Flush Request Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for XDMAC1 peripheral ========== */
#define XDMAC1_INSTANCE_ID                       7          
#define XDMAC1_CLOCK_ID                          7          

#endif /* _SAMA5D2_XDMAC1_INSTANCE_ */
