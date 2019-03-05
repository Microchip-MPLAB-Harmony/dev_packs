/**
 * \file
 *
 * \brief Instance description for XDMAC0
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
#ifndef _SAMA5D2_XDMAC0_INSTANCE_H_
#define _SAMA5D2_XDMAC0_INSTANCE_H_

/* ========== Register definition for XDMAC0 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_XDMAC0_CIE0         (0xF0010050) /**< (XDMAC0) Channel Interrupt Enable Register 0 */
#define REG_XDMAC0_CID0         (0xF0010054) /**< (XDMAC0) Channel Interrupt Disable Register 0 */
#define REG_XDMAC0_CIM0         (0xF0010058) /**< (XDMAC0) Channel Interrupt Mask Register 0 */
#define REG_XDMAC0_CIS0         (0xF001005C) /**< (XDMAC0) Channel Interrupt Status Register 0 */
#define REG_XDMAC0_CSA0         (0xF0010060) /**< (XDMAC0) Channel Source Address Register 0 */
#define REG_XDMAC0_CDA0         (0xF0010064) /**< (XDMAC0) Channel Destination Address Register 0 */
#define REG_XDMAC0_CNDA0        (0xF0010068) /**< (XDMAC0) Channel Next Descriptor Address Register 0 */
#define REG_XDMAC0_CNDC0        (0xF001006C) /**< (XDMAC0) Channel Next Descriptor Control Register 0 */
#define REG_XDMAC0_CUBC0        (0xF0010070) /**< (XDMAC0) Channel Microblock Control Register 0 */
#define REG_XDMAC0_CBC0         (0xF0010074) /**< (XDMAC0) Channel Block Control Register 0 */
#define REG_XDMAC0_CC0          (0xF0010078) /**< (XDMAC0) Channel Configuration Register 0 */
#define REG_XDMAC0_CDS_MSP0     (0xF001007C) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 0 */
#define REG_XDMAC0_CSUS0        (0xF0010080) /**< (XDMAC0) Channel Source Microblock Stride 0 */
#define REG_XDMAC0_CDUS0        (0xF0010084) /**< (XDMAC0) Channel Destination Microblock Stride 0 */
#define REG_XDMAC0_CIE1         (0xF0010090) /**< (XDMAC0) Channel Interrupt Enable Register 1 */
#define REG_XDMAC0_CID1         (0xF0010094) /**< (XDMAC0) Channel Interrupt Disable Register 1 */
#define REG_XDMAC0_CIM1         (0xF0010098) /**< (XDMAC0) Channel Interrupt Mask Register 1 */
#define REG_XDMAC0_CIS1         (0xF001009C) /**< (XDMAC0) Channel Interrupt Status Register 1 */
#define REG_XDMAC0_CSA1         (0xF00100A0) /**< (XDMAC0) Channel Source Address Register 1 */
#define REG_XDMAC0_CDA1         (0xF00100A4) /**< (XDMAC0) Channel Destination Address Register 1 */
#define REG_XDMAC0_CNDA1        (0xF00100A8) /**< (XDMAC0) Channel Next Descriptor Address Register 1 */
#define REG_XDMAC0_CNDC1        (0xF00100AC) /**< (XDMAC0) Channel Next Descriptor Control Register 1 */
#define REG_XDMAC0_CUBC1        (0xF00100B0) /**< (XDMAC0) Channel Microblock Control Register 1 */
#define REG_XDMAC0_CBC1         (0xF00100B4) /**< (XDMAC0) Channel Block Control Register 1 */
#define REG_XDMAC0_CC1          (0xF00100B8) /**< (XDMAC0) Channel Configuration Register 1 */
#define REG_XDMAC0_CDS_MSP1     (0xF00100BC) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 1 */
#define REG_XDMAC0_CSUS1        (0xF00100C0) /**< (XDMAC0) Channel Source Microblock Stride 1 */
#define REG_XDMAC0_CDUS1        (0xF00100C4) /**< (XDMAC0) Channel Destination Microblock Stride 1 */
#define REG_XDMAC0_CIE2         (0xF00100D0) /**< (XDMAC0) Channel Interrupt Enable Register 2 */
#define REG_XDMAC0_CID2         (0xF00100D4) /**< (XDMAC0) Channel Interrupt Disable Register 2 */
#define REG_XDMAC0_CIM2         (0xF00100D8) /**< (XDMAC0) Channel Interrupt Mask Register 2 */
#define REG_XDMAC0_CIS2         (0xF00100DC) /**< (XDMAC0) Channel Interrupt Status Register 2 */
#define REG_XDMAC0_CSA2         (0xF00100E0) /**< (XDMAC0) Channel Source Address Register 2 */
#define REG_XDMAC0_CDA2         (0xF00100E4) /**< (XDMAC0) Channel Destination Address Register 2 */
#define REG_XDMAC0_CNDA2        (0xF00100E8) /**< (XDMAC0) Channel Next Descriptor Address Register 2 */
#define REG_XDMAC0_CNDC2        (0xF00100EC) /**< (XDMAC0) Channel Next Descriptor Control Register 2 */
#define REG_XDMAC0_CUBC2        (0xF00100F0) /**< (XDMAC0) Channel Microblock Control Register 2 */
#define REG_XDMAC0_CBC2         (0xF00100F4) /**< (XDMAC0) Channel Block Control Register 2 */
#define REG_XDMAC0_CC2          (0xF00100F8) /**< (XDMAC0) Channel Configuration Register 2 */
#define REG_XDMAC0_CDS_MSP2     (0xF00100FC) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 2 */
#define REG_XDMAC0_CSUS2        (0xF0010100) /**< (XDMAC0) Channel Source Microblock Stride 2 */
#define REG_XDMAC0_CDUS2        (0xF0010104) /**< (XDMAC0) Channel Destination Microblock Stride 2 */
#define REG_XDMAC0_CIE3         (0xF0010110) /**< (XDMAC0) Channel Interrupt Enable Register 3 */
#define REG_XDMAC0_CID3         (0xF0010114) /**< (XDMAC0) Channel Interrupt Disable Register 3 */
#define REG_XDMAC0_CIM3         (0xF0010118) /**< (XDMAC0) Channel Interrupt Mask Register 3 */
#define REG_XDMAC0_CIS3         (0xF001011C) /**< (XDMAC0) Channel Interrupt Status Register 3 */
#define REG_XDMAC0_CSA3         (0xF0010120) /**< (XDMAC0) Channel Source Address Register 3 */
#define REG_XDMAC0_CDA3         (0xF0010124) /**< (XDMAC0) Channel Destination Address Register 3 */
#define REG_XDMAC0_CNDA3        (0xF0010128) /**< (XDMAC0) Channel Next Descriptor Address Register 3 */
#define REG_XDMAC0_CNDC3        (0xF001012C) /**< (XDMAC0) Channel Next Descriptor Control Register 3 */
#define REG_XDMAC0_CUBC3        (0xF0010130) /**< (XDMAC0) Channel Microblock Control Register 3 */
#define REG_XDMAC0_CBC3         (0xF0010134) /**< (XDMAC0) Channel Block Control Register 3 */
#define REG_XDMAC0_CC3          (0xF0010138) /**< (XDMAC0) Channel Configuration Register 3 */
#define REG_XDMAC0_CDS_MSP3     (0xF001013C) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 3 */
#define REG_XDMAC0_CSUS3        (0xF0010140) /**< (XDMAC0) Channel Source Microblock Stride 3 */
#define REG_XDMAC0_CDUS3        (0xF0010144) /**< (XDMAC0) Channel Destination Microblock Stride 3 */
#define REG_XDMAC0_CIE4         (0xF0010150) /**< (XDMAC0) Channel Interrupt Enable Register 4 */
#define REG_XDMAC0_CID4         (0xF0010154) /**< (XDMAC0) Channel Interrupt Disable Register 4 */
#define REG_XDMAC0_CIM4         (0xF0010158) /**< (XDMAC0) Channel Interrupt Mask Register 4 */
#define REG_XDMAC0_CIS4         (0xF001015C) /**< (XDMAC0) Channel Interrupt Status Register 4 */
#define REG_XDMAC0_CSA4         (0xF0010160) /**< (XDMAC0) Channel Source Address Register 4 */
#define REG_XDMAC0_CDA4         (0xF0010164) /**< (XDMAC0) Channel Destination Address Register 4 */
#define REG_XDMAC0_CNDA4        (0xF0010168) /**< (XDMAC0) Channel Next Descriptor Address Register 4 */
#define REG_XDMAC0_CNDC4        (0xF001016C) /**< (XDMAC0) Channel Next Descriptor Control Register 4 */
#define REG_XDMAC0_CUBC4        (0xF0010170) /**< (XDMAC0) Channel Microblock Control Register 4 */
#define REG_XDMAC0_CBC4         (0xF0010174) /**< (XDMAC0) Channel Block Control Register 4 */
#define REG_XDMAC0_CC4          (0xF0010178) /**< (XDMAC0) Channel Configuration Register 4 */
#define REG_XDMAC0_CDS_MSP4     (0xF001017C) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 4 */
#define REG_XDMAC0_CSUS4        (0xF0010180) /**< (XDMAC0) Channel Source Microblock Stride 4 */
#define REG_XDMAC0_CDUS4        (0xF0010184) /**< (XDMAC0) Channel Destination Microblock Stride 4 */
#define REG_XDMAC0_CIE5         (0xF0010190) /**< (XDMAC0) Channel Interrupt Enable Register 5 */
#define REG_XDMAC0_CID5         (0xF0010194) /**< (XDMAC0) Channel Interrupt Disable Register 5 */
#define REG_XDMAC0_CIM5         (0xF0010198) /**< (XDMAC0) Channel Interrupt Mask Register 5 */
#define REG_XDMAC0_CIS5         (0xF001019C) /**< (XDMAC0) Channel Interrupt Status Register 5 */
#define REG_XDMAC0_CSA5         (0xF00101A0) /**< (XDMAC0) Channel Source Address Register 5 */
#define REG_XDMAC0_CDA5         (0xF00101A4) /**< (XDMAC0) Channel Destination Address Register 5 */
#define REG_XDMAC0_CNDA5        (0xF00101A8) /**< (XDMAC0) Channel Next Descriptor Address Register 5 */
#define REG_XDMAC0_CNDC5        (0xF00101AC) /**< (XDMAC0) Channel Next Descriptor Control Register 5 */
#define REG_XDMAC0_CUBC5        (0xF00101B0) /**< (XDMAC0) Channel Microblock Control Register 5 */
#define REG_XDMAC0_CBC5         (0xF00101B4) /**< (XDMAC0) Channel Block Control Register 5 */
#define REG_XDMAC0_CC5          (0xF00101B8) /**< (XDMAC0) Channel Configuration Register 5 */
#define REG_XDMAC0_CDS_MSP5     (0xF00101BC) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 5 */
#define REG_XDMAC0_CSUS5        (0xF00101C0) /**< (XDMAC0) Channel Source Microblock Stride 5 */
#define REG_XDMAC0_CDUS5        (0xF00101C4) /**< (XDMAC0) Channel Destination Microblock Stride 5 */
#define REG_XDMAC0_CIE6         (0xF00101D0) /**< (XDMAC0) Channel Interrupt Enable Register 6 */
#define REG_XDMAC0_CID6         (0xF00101D4) /**< (XDMAC0) Channel Interrupt Disable Register 6 */
#define REG_XDMAC0_CIM6         (0xF00101D8) /**< (XDMAC0) Channel Interrupt Mask Register 6 */
#define REG_XDMAC0_CIS6         (0xF00101DC) /**< (XDMAC0) Channel Interrupt Status Register 6 */
#define REG_XDMAC0_CSA6         (0xF00101E0) /**< (XDMAC0) Channel Source Address Register 6 */
#define REG_XDMAC0_CDA6         (0xF00101E4) /**< (XDMAC0) Channel Destination Address Register 6 */
#define REG_XDMAC0_CNDA6        (0xF00101E8) /**< (XDMAC0) Channel Next Descriptor Address Register 6 */
#define REG_XDMAC0_CNDC6        (0xF00101EC) /**< (XDMAC0) Channel Next Descriptor Control Register 6 */
#define REG_XDMAC0_CUBC6        (0xF00101F0) /**< (XDMAC0) Channel Microblock Control Register 6 */
#define REG_XDMAC0_CBC6         (0xF00101F4) /**< (XDMAC0) Channel Block Control Register 6 */
#define REG_XDMAC0_CC6          (0xF00101F8) /**< (XDMAC0) Channel Configuration Register 6 */
#define REG_XDMAC0_CDS_MSP6     (0xF00101FC) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 6 */
#define REG_XDMAC0_CSUS6        (0xF0010200) /**< (XDMAC0) Channel Source Microblock Stride 6 */
#define REG_XDMAC0_CDUS6        (0xF0010204) /**< (XDMAC0) Channel Destination Microblock Stride 6 */
#define REG_XDMAC0_CIE7         (0xF0010210) /**< (XDMAC0) Channel Interrupt Enable Register 7 */
#define REG_XDMAC0_CID7         (0xF0010214) /**< (XDMAC0) Channel Interrupt Disable Register 7 */
#define REG_XDMAC0_CIM7         (0xF0010218) /**< (XDMAC0) Channel Interrupt Mask Register 7 */
#define REG_XDMAC0_CIS7         (0xF001021C) /**< (XDMAC0) Channel Interrupt Status Register 7 */
#define REG_XDMAC0_CSA7         (0xF0010220) /**< (XDMAC0) Channel Source Address Register 7 */
#define REG_XDMAC0_CDA7         (0xF0010224) /**< (XDMAC0) Channel Destination Address Register 7 */
#define REG_XDMAC0_CNDA7        (0xF0010228) /**< (XDMAC0) Channel Next Descriptor Address Register 7 */
#define REG_XDMAC0_CNDC7        (0xF001022C) /**< (XDMAC0) Channel Next Descriptor Control Register 7 */
#define REG_XDMAC0_CUBC7        (0xF0010230) /**< (XDMAC0) Channel Microblock Control Register 7 */
#define REG_XDMAC0_CBC7         (0xF0010234) /**< (XDMAC0) Channel Block Control Register 7 */
#define REG_XDMAC0_CC7          (0xF0010238) /**< (XDMAC0) Channel Configuration Register 7 */
#define REG_XDMAC0_CDS_MSP7     (0xF001023C) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 7 */
#define REG_XDMAC0_CSUS7        (0xF0010240) /**< (XDMAC0) Channel Source Microblock Stride 7 */
#define REG_XDMAC0_CDUS7        (0xF0010244) /**< (XDMAC0) Channel Destination Microblock Stride 7 */
#define REG_XDMAC0_CIE8         (0xF0010250) /**< (XDMAC0) Channel Interrupt Enable Register 8 */
#define REG_XDMAC0_CID8         (0xF0010254) /**< (XDMAC0) Channel Interrupt Disable Register 8 */
#define REG_XDMAC0_CIM8         (0xF0010258) /**< (XDMAC0) Channel Interrupt Mask Register 8 */
#define REG_XDMAC0_CIS8         (0xF001025C) /**< (XDMAC0) Channel Interrupt Status Register 8 */
#define REG_XDMAC0_CSA8         (0xF0010260) /**< (XDMAC0) Channel Source Address Register 8 */
#define REG_XDMAC0_CDA8         (0xF0010264) /**< (XDMAC0) Channel Destination Address Register 8 */
#define REG_XDMAC0_CNDA8        (0xF0010268) /**< (XDMAC0) Channel Next Descriptor Address Register 8 */
#define REG_XDMAC0_CNDC8        (0xF001026C) /**< (XDMAC0) Channel Next Descriptor Control Register 8 */
#define REG_XDMAC0_CUBC8        (0xF0010270) /**< (XDMAC0) Channel Microblock Control Register 8 */
#define REG_XDMAC0_CBC8         (0xF0010274) /**< (XDMAC0) Channel Block Control Register 8 */
#define REG_XDMAC0_CC8          (0xF0010278) /**< (XDMAC0) Channel Configuration Register 8 */
#define REG_XDMAC0_CDS_MSP8     (0xF001027C) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 8 */
#define REG_XDMAC0_CSUS8        (0xF0010280) /**< (XDMAC0) Channel Source Microblock Stride 8 */
#define REG_XDMAC0_CDUS8        (0xF0010284) /**< (XDMAC0) Channel Destination Microblock Stride 8 */
#define REG_XDMAC0_CIE9         (0xF0010290) /**< (XDMAC0) Channel Interrupt Enable Register 9 */
#define REG_XDMAC0_CID9         (0xF0010294) /**< (XDMAC0) Channel Interrupt Disable Register 9 */
#define REG_XDMAC0_CIM9         (0xF0010298) /**< (XDMAC0) Channel Interrupt Mask Register 9 */
#define REG_XDMAC0_CIS9         (0xF001029C) /**< (XDMAC0) Channel Interrupt Status Register 9 */
#define REG_XDMAC0_CSA9         (0xF00102A0) /**< (XDMAC0) Channel Source Address Register 9 */
#define REG_XDMAC0_CDA9         (0xF00102A4) /**< (XDMAC0) Channel Destination Address Register 9 */
#define REG_XDMAC0_CNDA9        (0xF00102A8) /**< (XDMAC0) Channel Next Descriptor Address Register 9 */
#define REG_XDMAC0_CNDC9        (0xF00102AC) /**< (XDMAC0) Channel Next Descriptor Control Register 9 */
#define REG_XDMAC0_CUBC9        (0xF00102B0) /**< (XDMAC0) Channel Microblock Control Register 9 */
#define REG_XDMAC0_CBC9         (0xF00102B4) /**< (XDMAC0) Channel Block Control Register 9 */
#define REG_XDMAC0_CC9          (0xF00102B8) /**< (XDMAC0) Channel Configuration Register 9 */
#define REG_XDMAC0_CDS_MSP9     (0xF00102BC) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 9 */
#define REG_XDMAC0_CSUS9        (0xF00102C0) /**< (XDMAC0) Channel Source Microblock Stride 9 */
#define REG_XDMAC0_CDUS9        (0xF00102C4) /**< (XDMAC0) Channel Destination Microblock Stride 9 */
#define REG_XDMAC0_CIE10        (0xF00102D0) /**< (XDMAC0) Channel Interrupt Enable Register 10 */
#define REG_XDMAC0_CID10        (0xF00102D4) /**< (XDMAC0) Channel Interrupt Disable Register 10 */
#define REG_XDMAC0_CIM10        (0xF00102D8) /**< (XDMAC0) Channel Interrupt Mask Register 10 */
#define REG_XDMAC0_CIS10        (0xF00102DC) /**< (XDMAC0) Channel Interrupt Status Register 10 */
#define REG_XDMAC0_CSA10        (0xF00102E0) /**< (XDMAC0) Channel Source Address Register 10 */
#define REG_XDMAC0_CDA10        (0xF00102E4) /**< (XDMAC0) Channel Destination Address Register 10 */
#define REG_XDMAC0_CNDA10       (0xF00102E8) /**< (XDMAC0) Channel Next Descriptor Address Register 10 */
#define REG_XDMAC0_CNDC10       (0xF00102EC) /**< (XDMAC0) Channel Next Descriptor Control Register 10 */
#define REG_XDMAC0_CUBC10       (0xF00102F0) /**< (XDMAC0) Channel Microblock Control Register 10 */
#define REG_XDMAC0_CBC10        (0xF00102F4) /**< (XDMAC0) Channel Block Control Register 10 */
#define REG_XDMAC0_CC10         (0xF00102F8) /**< (XDMAC0) Channel Configuration Register 10 */
#define REG_XDMAC0_CDS_MSP10    (0xF00102FC) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 10 */
#define REG_XDMAC0_CSUS10       (0xF0010300) /**< (XDMAC0) Channel Source Microblock Stride 10 */
#define REG_XDMAC0_CDUS10       (0xF0010304) /**< (XDMAC0) Channel Destination Microblock Stride 10 */
#define REG_XDMAC0_CIE11        (0xF0010310) /**< (XDMAC0) Channel Interrupt Enable Register 11 */
#define REG_XDMAC0_CID11        (0xF0010314) /**< (XDMAC0) Channel Interrupt Disable Register 11 */
#define REG_XDMAC0_CIM11        (0xF0010318) /**< (XDMAC0) Channel Interrupt Mask Register 11 */
#define REG_XDMAC0_CIS11        (0xF001031C) /**< (XDMAC0) Channel Interrupt Status Register 11 */
#define REG_XDMAC0_CSA11        (0xF0010320) /**< (XDMAC0) Channel Source Address Register 11 */
#define REG_XDMAC0_CDA11        (0xF0010324) /**< (XDMAC0) Channel Destination Address Register 11 */
#define REG_XDMAC0_CNDA11       (0xF0010328) /**< (XDMAC0) Channel Next Descriptor Address Register 11 */
#define REG_XDMAC0_CNDC11       (0xF001032C) /**< (XDMAC0) Channel Next Descriptor Control Register 11 */
#define REG_XDMAC0_CUBC11       (0xF0010330) /**< (XDMAC0) Channel Microblock Control Register 11 */
#define REG_XDMAC0_CBC11        (0xF0010334) /**< (XDMAC0) Channel Block Control Register 11 */
#define REG_XDMAC0_CC11         (0xF0010338) /**< (XDMAC0) Channel Configuration Register 11 */
#define REG_XDMAC0_CDS_MSP11    (0xF001033C) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 11 */
#define REG_XDMAC0_CSUS11       (0xF0010340) /**< (XDMAC0) Channel Source Microblock Stride 11 */
#define REG_XDMAC0_CDUS11       (0xF0010344) /**< (XDMAC0) Channel Destination Microblock Stride 11 */
#define REG_XDMAC0_CIE12        (0xF0010350) /**< (XDMAC0) Channel Interrupt Enable Register 12 */
#define REG_XDMAC0_CID12        (0xF0010354) /**< (XDMAC0) Channel Interrupt Disable Register 12 */
#define REG_XDMAC0_CIM12        (0xF0010358) /**< (XDMAC0) Channel Interrupt Mask Register 12 */
#define REG_XDMAC0_CIS12        (0xF001035C) /**< (XDMAC0) Channel Interrupt Status Register 12 */
#define REG_XDMAC0_CSA12        (0xF0010360) /**< (XDMAC0) Channel Source Address Register 12 */
#define REG_XDMAC0_CDA12        (0xF0010364) /**< (XDMAC0) Channel Destination Address Register 12 */
#define REG_XDMAC0_CNDA12       (0xF0010368) /**< (XDMAC0) Channel Next Descriptor Address Register 12 */
#define REG_XDMAC0_CNDC12       (0xF001036C) /**< (XDMAC0) Channel Next Descriptor Control Register 12 */
#define REG_XDMAC0_CUBC12       (0xF0010370) /**< (XDMAC0) Channel Microblock Control Register 12 */
#define REG_XDMAC0_CBC12        (0xF0010374) /**< (XDMAC0) Channel Block Control Register 12 */
#define REG_XDMAC0_CC12         (0xF0010378) /**< (XDMAC0) Channel Configuration Register 12 */
#define REG_XDMAC0_CDS_MSP12    (0xF001037C) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 12 */
#define REG_XDMAC0_CSUS12       (0xF0010380) /**< (XDMAC0) Channel Source Microblock Stride 12 */
#define REG_XDMAC0_CDUS12       (0xF0010384) /**< (XDMAC0) Channel Destination Microblock Stride 12 */
#define REG_XDMAC0_CIE13        (0xF0010390) /**< (XDMAC0) Channel Interrupt Enable Register 13 */
#define REG_XDMAC0_CID13        (0xF0010394) /**< (XDMAC0) Channel Interrupt Disable Register 13 */
#define REG_XDMAC0_CIM13        (0xF0010398) /**< (XDMAC0) Channel Interrupt Mask Register 13 */
#define REG_XDMAC0_CIS13        (0xF001039C) /**< (XDMAC0) Channel Interrupt Status Register 13 */
#define REG_XDMAC0_CSA13        (0xF00103A0) /**< (XDMAC0) Channel Source Address Register 13 */
#define REG_XDMAC0_CDA13        (0xF00103A4) /**< (XDMAC0) Channel Destination Address Register 13 */
#define REG_XDMAC0_CNDA13       (0xF00103A8) /**< (XDMAC0) Channel Next Descriptor Address Register 13 */
#define REG_XDMAC0_CNDC13       (0xF00103AC) /**< (XDMAC0) Channel Next Descriptor Control Register 13 */
#define REG_XDMAC0_CUBC13       (0xF00103B0) /**< (XDMAC0) Channel Microblock Control Register 13 */
#define REG_XDMAC0_CBC13        (0xF00103B4) /**< (XDMAC0) Channel Block Control Register 13 */
#define REG_XDMAC0_CC13         (0xF00103B8) /**< (XDMAC0) Channel Configuration Register 13 */
#define REG_XDMAC0_CDS_MSP13    (0xF00103BC) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 13 */
#define REG_XDMAC0_CSUS13       (0xF00103C0) /**< (XDMAC0) Channel Source Microblock Stride 13 */
#define REG_XDMAC0_CDUS13       (0xF00103C4) /**< (XDMAC0) Channel Destination Microblock Stride 13 */
#define REG_XDMAC0_CIE14        (0xF00103D0) /**< (XDMAC0) Channel Interrupt Enable Register 14 */
#define REG_XDMAC0_CID14        (0xF00103D4) /**< (XDMAC0) Channel Interrupt Disable Register 14 */
#define REG_XDMAC0_CIM14        (0xF00103D8) /**< (XDMAC0) Channel Interrupt Mask Register 14 */
#define REG_XDMAC0_CIS14        (0xF00103DC) /**< (XDMAC0) Channel Interrupt Status Register 14 */
#define REG_XDMAC0_CSA14        (0xF00103E0) /**< (XDMAC0) Channel Source Address Register 14 */
#define REG_XDMAC0_CDA14        (0xF00103E4) /**< (XDMAC0) Channel Destination Address Register 14 */
#define REG_XDMAC0_CNDA14       (0xF00103E8) /**< (XDMAC0) Channel Next Descriptor Address Register 14 */
#define REG_XDMAC0_CNDC14       (0xF00103EC) /**< (XDMAC0) Channel Next Descriptor Control Register 14 */
#define REG_XDMAC0_CUBC14       (0xF00103F0) /**< (XDMAC0) Channel Microblock Control Register 14 */
#define REG_XDMAC0_CBC14        (0xF00103F4) /**< (XDMAC0) Channel Block Control Register 14 */
#define REG_XDMAC0_CC14         (0xF00103F8) /**< (XDMAC0) Channel Configuration Register 14 */
#define REG_XDMAC0_CDS_MSP14    (0xF00103FC) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 14 */
#define REG_XDMAC0_CSUS14       (0xF0010400) /**< (XDMAC0) Channel Source Microblock Stride 14 */
#define REG_XDMAC0_CDUS14       (0xF0010404) /**< (XDMAC0) Channel Destination Microblock Stride 14 */
#define REG_XDMAC0_CIE15        (0xF0010410) /**< (XDMAC0) Channel Interrupt Enable Register 15 */
#define REG_XDMAC0_CID15        (0xF0010414) /**< (XDMAC0) Channel Interrupt Disable Register 15 */
#define REG_XDMAC0_CIM15        (0xF0010418) /**< (XDMAC0) Channel Interrupt Mask Register 15 */
#define REG_XDMAC0_CIS15        (0xF001041C) /**< (XDMAC0) Channel Interrupt Status Register 15 */
#define REG_XDMAC0_CSA15        (0xF0010420) /**< (XDMAC0) Channel Source Address Register 15 */
#define REG_XDMAC0_CDA15        (0xF0010424) /**< (XDMAC0) Channel Destination Address Register 15 */
#define REG_XDMAC0_CNDA15       (0xF0010428) /**< (XDMAC0) Channel Next Descriptor Address Register 15 */
#define REG_XDMAC0_CNDC15       (0xF001042C) /**< (XDMAC0) Channel Next Descriptor Control Register 15 */
#define REG_XDMAC0_CUBC15       (0xF0010430) /**< (XDMAC0) Channel Microblock Control Register 15 */
#define REG_XDMAC0_CBC15        (0xF0010434) /**< (XDMAC0) Channel Block Control Register 15 */
#define REG_XDMAC0_CC15         (0xF0010438) /**< (XDMAC0) Channel Configuration Register 15 */
#define REG_XDMAC0_CDS_MSP15    (0xF001043C) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 15 */
#define REG_XDMAC0_CSUS15       (0xF0010440) /**< (XDMAC0) Channel Source Microblock Stride 15 */
#define REG_XDMAC0_CDUS15       (0xF0010444) /**< (XDMAC0) Channel Destination Microblock Stride 15 */
#define REG_XDMAC0_GTYPE        (0xF0010000) /**< (XDMAC0) Global Type Register */
#define REG_XDMAC0_GCFG         (0xF0010004) /**< (XDMAC0) Global Configuration Register */
#define REG_XDMAC0_GWAC         (0xF0010008) /**< (XDMAC0) Global Weighted Arbiter Configuration Register */
#define REG_XDMAC0_GIE          (0xF001000C) /**< (XDMAC0) Global Interrupt Enable Register */
#define REG_XDMAC0_GID          (0xF0010010) /**< (XDMAC0) Global Interrupt Disable Register */
#define REG_XDMAC0_GIM          (0xF0010014) /**< (XDMAC0) Global Interrupt Mask Register */
#define REG_XDMAC0_GIS          (0xF0010018) /**< (XDMAC0) Global Interrupt Status Register */
#define REG_XDMAC0_GE           (0xF001001C) /**< (XDMAC0) Global Channel Enable Register */
#define REG_XDMAC0_GD           (0xF0010020) /**< (XDMAC0) Global Channel Disable Register */
#define REG_XDMAC0_GS           (0xF0010024) /**< (XDMAC0) Global Channel Status Register */
#define REG_XDMAC0_GRS          (0xF0010028) /**< (XDMAC0) Global Channel Read Suspend Register */
#define REG_XDMAC0_GWS          (0xF001002C) /**< (XDMAC0) Global Channel Write Suspend Register */
#define REG_XDMAC0_GRWS         (0xF0010030) /**< (XDMAC0) Global Channel Read Write Suspend Register */
#define REG_XDMAC0_GRWR         (0xF0010034) /**< (XDMAC0) Global Channel Read Write Resume Register */
#define REG_XDMAC0_GSWR         (0xF0010038) /**< (XDMAC0) Global Channel Software Request Register */
#define REG_XDMAC0_GSWS         (0xF001003C) /**< (XDMAC0) Global Channel Software Request Status Register */
#define REG_XDMAC0_GSWF         (0xF0010040) /**< (XDMAC0) Global Channel Software Flush Request Register */

#else

#define REG_XDMAC0_CIE0         (*(__O  uint32_t*)0xF0010050U) /**< (XDMAC0) Channel Interrupt Enable Register 0 */
#define REG_XDMAC0_CID0         (*(__O  uint32_t*)0xF0010054U) /**< (XDMAC0) Channel Interrupt Disable Register 0 */
#define REG_XDMAC0_CIM0         (*(__I  uint32_t*)0xF0010058U) /**< (XDMAC0) Channel Interrupt Mask Register 0 */
#define REG_XDMAC0_CIS0         (*(__I  uint32_t*)0xF001005CU) /**< (XDMAC0) Channel Interrupt Status Register 0 */
#define REG_XDMAC0_CSA0         (*(__IO uint32_t*)0xF0010060U) /**< (XDMAC0) Channel Source Address Register 0 */
#define REG_XDMAC0_CDA0         (*(__IO uint32_t*)0xF0010064U) /**< (XDMAC0) Channel Destination Address Register 0 */
#define REG_XDMAC0_CNDA0        (*(__IO uint32_t*)0xF0010068U) /**< (XDMAC0) Channel Next Descriptor Address Register 0 */
#define REG_XDMAC0_CNDC0        (*(__IO uint32_t*)0xF001006CU) /**< (XDMAC0) Channel Next Descriptor Control Register 0 */
#define REG_XDMAC0_CUBC0        (*(__IO uint32_t*)0xF0010070U) /**< (XDMAC0) Channel Microblock Control Register 0 */
#define REG_XDMAC0_CBC0         (*(__IO uint32_t*)0xF0010074U) /**< (XDMAC0) Channel Block Control Register 0 */
#define REG_XDMAC0_CC0          (*(__IO uint32_t*)0xF0010078U) /**< (XDMAC0) Channel Configuration Register 0 */
#define REG_XDMAC0_CDS_MSP0     (*(__IO uint32_t*)0xF001007CU) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 0 */
#define REG_XDMAC0_CSUS0        (*(__IO uint32_t*)0xF0010080U) /**< (XDMAC0) Channel Source Microblock Stride 0 */
#define REG_XDMAC0_CDUS0        (*(__IO uint32_t*)0xF0010084U) /**< (XDMAC0) Channel Destination Microblock Stride 0 */
#define REG_XDMAC0_CIE1         (*(__O  uint32_t*)0xF0010090U) /**< (XDMAC0) Channel Interrupt Enable Register 1 */
#define REG_XDMAC0_CID1         (*(__O  uint32_t*)0xF0010094U) /**< (XDMAC0) Channel Interrupt Disable Register 1 */
#define REG_XDMAC0_CIM1         (*(__I  uint32_t*)0xF0010098U) /**< (XDMAC0) Channel Interrupt Mask Register 1 */
#define REG_XDMAC0_CIS1         (*(__I  uint32_t*)0xF001009CU) /**< (XDMAC0) Channel Interrupt Status Register 1 */
#define REG_XDMAC0_CSA1         (*(__IO uint32_t*)0xF00100A0U) /**< (XDMAC0) Channel Source Address Register 1 */
#define REG_XDMAC0_CDA1         (*(__IO uint32_t*)0xF00100A4U) /**< (XDMAC0) Channel Destination Address Register 1 */
#define REG_XDMAC0_CNDA1        (*(__IO uint32_t*)0xF00100A8U) /**< (XDMAC0) Channel Next Descriptor Address Register 1 */
#define REG_XDMAC0_CNDC1        (*(__IO uint32_t*)0xF00100ACU) /**< (XDMAC0) Channel Next Descriptor Control Register 1 */
#define REG_XDMAC0_CUBC1        (*(__IO uint32_t*)0xF00100B0U) /**< (XDMAC0) Channel Microblock Control Register 1 */
#define REG_XDMAC0_CBC1         (*(__IO uint32_t*)0xF00100B4U) /**< (XDMAC0) Channel Block Control Register 1 */
#define REG_XDMAC0_CC1          (*(__IO uint32_t*)0xF00100B8U) /**< (XDMAC0) Channel Configuration Register 1 */
#define REG_XDMAC0_CDS_MSP1     (*(__IO uint32_t*)0xF00100BCU) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 1 */
#define REG_XDMAC0_CSUS1        (*(__IO uint32_t*)0xF00100C0U) /**< (XDMAC0) Channel Source Microblock Stride 1 */
#define REG_XDMAC0_CDUS1        (*(__IO uint32_t*)0xF00100C4U) /**< (XDMAC0) Channel Destination Microblock Stride 1 */
#define REG_XDMAC0_CIE2         (*(__O  uint32_t*)0xF00100D0U) /**< (XDMAC0) Channel Interrupt Enable Register 2 */
#define REG_XDMAC0_CID2         (*(__O  uint32_t*)0xF00100D4U) /**< (XDMAC0) Channel Interrupt Disable Register 2 */
#define REG_XDMAC0_CIM2         (*(__I  uint32_t*)0xF00100D8U) /**< (XDMAC0) Channel Interrupt Mask Register 2 */
#define REG_XDMAC0_CIS2         (*(__I  uint32_t*)0xF00100DCU) /**< (XDMAC0) Channel Interrupt Status Register 2 */
#define REG_XDMAC0_CSA2         (*(__IO uint32_t*)0xF00100E0U) /**< (XDMAC0) Channel Source Address Register 2 */
#define REG_XDMAC0_CDA2         (*(__IO uint32_t*)0xF00100E4U) /**< (XDMAC0) Channel Destination Address Register 2 */
#define REG_XDMAC0_CNDA2        (*(__IO uint32_t*)0xF00100E8U) /**< (XDMAC0) Channel Next Descriptor Address Register 2 */
#define REG_XDMAC0_CNDC2        (*(__IO uint32_t*)0xF00100ECU) /**< (XDMAC0) Channel Next Descriptor Control Register 2 */
#define REG_XDMAC0_CUBC2        (*(__IO uint32_t*)0xF00100F0U) /**< (XDMAC0) Channel Microblock Control Register 2 */
#define REG_XDMAC0_CBC2         (*(__IO uint32_t*)0xF00100F4U) /**< (XDMAC0) Channel Block Control Register 2 */
#define REG_XDMAC0_CC2          (*(__IO uint32_t*)0xF00100F8U) /**< (XDMAC0) Channel Configuration Register 2 */
#define REG_XDMAC0_CDS_MSP2     (*(__IO uint32_t*)0xF00100FCU) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 2 */
#define REG_XDMAC0_CSUS2        (*(__IO uint32_t*)0xF0010100U) /**< (XDMAC0) Channel Source Microblock Stride 2 */
#define REG_XDMAC0_CDUS2        (*(__IO uint32_t*)0xF0010104U) /**< (XDMAC0) Channel Destination Microblock Stride 2 */
#define REG_XDMAC0_CIE3         (*(__O  uint32_t*)0xF0010110U) /**< (XDMAC0) Channel Interrupt Enable Register 3 */
#define REG_XDMAC0_CID3         (*(__O  uint32_t*)0xF0010114U) /**< (XDMAC0) Channel Interrupt Disable Register 3 */
#define REG_XDMAC0_CIM3         (*(__I  uint32_t*)0xF0010118U) /**< (XDMAC0) Channel Interrupt Mask Register 3 */
#define REG_XDMAC0_CIS3         (*(__I  uint32_t*)0xF001011CU) /**< (XDMAC0) Channel Interrupt Status Register 3 */
#define REG_XDMAC0_CSA3         (*(__IO uint32_t*)0xF0010120U) /**< (XDMAC0) Channel Source Address Register 3 */
#define REG_XDMAC0_CDA3         (*(__IO uint32_t*)0xF0010124U) /**< (XDMAC0) Channel Destination Address Register 3 */
#define REG_XDMAC0_CNDA3        (*(__IO uint32_t*)0xF0010128U) /**< (XDMAC0) Channel Next Descriptor Address Register 3 */
#define REG_XDMAC0_CNDC3        (*(__IO uint32_t*)0xF001012CU) /**< (XDMAC0) Channel Next Descriptor Control Register 3 */
#define REG_XDMAC0_CUBC3        (*(__IO uint32_t*)0xF0010130U) /**< (XDMAC0) Channel Microblock Control Register 3 */
#define REG_XDMAC0_CBC3         (*(__IO uint32_t*)0xF0010134U) /**< (XDMAC0) Channel Block Control Register 3 */
#define REG_XDMAC0_CC3          (*(__IO uint32_t*)0xF0010138U) /**< (XDMAC0) Channel Configuration Register 3 */
#define REG_XDMAC0_CDS_MSP3     (*(__IO uint32_t*)0xF001013CU) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 3 */
#define REG_XDMAC0_CSUS3        (*(__IO uint32_t*)0xF0010140U) /**< (XDMAC0) Channel Source Microblock Stride 3 */
#define REG_XDMAC0_CDUS3        (*(__IO uint32_t*)0xF0010144U) /**< (XDMAC0) Channel Destination Microblock Stride 3 */
#define REG_XDMAC0_CIE4         (*(__O  uint32_t*)0xF0010150U) /**< (XDMAC0) Channel Interrupt Enable Register 4 */
#define REG_XDMAC0_CID4         (*(__O  uint32_t*)0xF0010154U) /**< (XDMAC0) Channel Interrupt Disable Register 4 */
#define REG_XDMAC0_CIM4         (*(__I  uint32_t*)0xF0010158U) /**< (XDMAC0) Channel Interrupt Mask Register 4 */
#define REG_XDMAC0_CIS4         (*(__I  uint32_t*)0xF001015CU) /**< (XDMAC0) Channel Interrupt Status Register 4 */
#define REG_XDMAC0_CSA4         (*(__IO uint32_t*)0xF0010160U) /**< (XDMAC0) Channel Source Address Register 4 */
#define REG_XDMAC0_CDA4         (*(__IO uint32_t*)0xF0010164U) /**< (XDMAC0) Channel Destination Address Register 4 */
#define REG_XDMAC0_CNDA4        (*(__IO uint32_t*)0xF0010168U) /**< (XDMAC0) Channel Next Descriptor Address Register 4 */
#define REG_XDMAC0_CNDC4        (*(__IO uint32_t*)0xF001016CU) /**< (XDMAC0) Channel Next Descriptor Control Register 4 */
#define REG_XDMAC0_CUBC4        (*(__IO uint32_t*)0xF0010170U) /**< (XDMAC0) Channel Microblock Control Register 4 */
#define REG_XDMAC0_CBC4         (*(__IO uint32_t*)0xF0010174U) /**< (XDMAC0) Channel Block Control Register 4 */
#define REG_XDMAC0_CC4          (*(__IO uint32_t*)0xF0010178U) /**< (XDMAC0) Channel Configuration Register 4 */
#define REG_XDMAC0_CDS_MSP4     (*(__IO uint32_t*)0xF001017CU) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 4 */
#define REG_XDMAC0_CSUS4        (*(__IO uint32_t*)0xF0010180U) /**< (XDMAC0) Channel Source Microblock Stride 4 */
#define REG_XDMAC0_CDUS4        (*(__IO uint32_t*)0xF0010184U) /**< (XDMAC0) Channel Destination Microblock Stride 4 */
#define REG_XDMAC0_CIE5         (*(__O  uint32_t*)0xF0010190U) /**< (XDMAC0) Channel Interrupt Enable Register 5 */
#define REG_XDMAC0_CID5         (*(__O  uint32_t*)0xF0010194U) /**< (XDMAC0) Channel Interrupt Disable Register 5 */
#define REG_XDMAC0_CIM5         (*(__I  uint32_t*)0xF0010198U) /**< (XDMAC0) Channel Interrupt Mask Register 5 */
#define REG_XDMAC0_CIS5         (*(__I  uint32_t*)0xF001019CU) /**< (XDMAC0) Channel Interrupt Status Register 5 */
#define REG_XDMAC0_CSA5         (*(__IO uint32_t*)0xF00101A0U) /**< (XDMAC0) Channel Source Address Register 5 */
#define REG_XDMAC0_CDA5         (*(__IO uint32_t*)0xF00101A4U) /**< (XDMAC0) Channel Destination Address Register 5 */
#define REG_XDMAC0_CNDA5        (*(__IO uint32_t*)0xF00101A8U) /**< (XDMAC0) Channel Next Descriptor Address Register 5 */
#define REG_XDMAC0_CNDC5        (*(__IO uint32_t*)0xF00101ACU) /**< (XDMAC0) Channel Next Descriptor Control Register 5 */
#define REG_XDMAC0_CUBC5        (*(__IO uint32_t*)0xF00101B0U) /**< (XDMAC0) Channel Microblock Control Register 5 */
#define REG_XDMAC0_CBC5         (*(__IO uint32_t*)0xF00101B4U) /**< (XDMAC0) Channel Block Control Register 5 */
#define REG_XDMAC0_CC5          (*(__IO uint32_t*)0xF00101B8U) /**< (XDMAC0) Channel Configuration Register 5 */
#define REG_XDMAC0_CDS_MSP5     (*(__IO uint32_t*)0xF00101BCU) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 5 */
#define REG_XDMAC0_CSUS5        (*(__IO uint32_t*)0xF00101C0U) /**< (XDMAC0) Channel Source Microblock Stride 5 */
#define REG_XDMAC0_CDUS5        (*(__IO uint32_t*)0xF00101C4U) /**< (XDMAC0) Channel Destination Microblock Stride 5 */
#define REG_XDMAC0_CIE6         (*(__O  uint32_t*)0xF00101D0U) /**< (XDMAC0) Channel Interrupt Enable Register 6 */
#define REG_XDMAC0_CID6         (*(__O  uint32_t*)0xF00101D4U) /**< (XDMAC0) Channel Interrupt Disable Register 6 */
#define REG_XDMAC0_CIM6         (*(__I  uint32_t*)0xF00101D8U) /**< (XDMAC0) Channel Interrupt Mask Register 6 */
#define REG_XDMAC0_CIS6         (*(__I  uint32_t*)0xF00101DCU) /**< (XDMAC0) Channel Interrupt Status Register 6 */
#define REG_XDMAC0_CSA6         (*(__IO uint32_t*)0xF00101E0U) /**< (XDMAC0) Channel Source Address Register 6 */
#define REG_XDMAC0_CDA6         (*(__IO uint32_t*)0xF00101E4U) /**< (XDMAC0) Channel Destination Address Register 6 */
#define REG_XDMAC0_CNDA6        (*(__IO uint32_t*)0xF00101E8U) /**< (XDMAC0) Channel Next Descriptor Address Register 6 */
#define REG_XDMAC0_CNDC6        (*(__IO uint32_t*)0xF00101ECU) /**< (XDMAC0) Channel Next Descriptor Control Register 6 */
#define REG_XDMAC0_CUBC6        (*(__IO uint32_t*)0xF00101F0U) /**< (XDMAC0) Channel Microblock Control Register 6 */
#define REG_XDMAC0_CBC6         (*(__IO uint32_t*)0xF00101F4U) /**< (XDMAC0) Channel Block Control Register 6 */
#define REG_XDMAC0_CC6          (*(__IO uint32_t*)0xF00101F8U) /**< (XDMAC0) Channel Configuration Register 6 */
#define REG_XDMAC0_CDS_MSP6     (*(__IO uint32_t*)0xF00101FCU) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 6 */
#define REG_XDMAC0_CSUS6        (*(__IO uint32_t*)0xF0010200U) /**< (XDMAC0) Channel Source Microblock Stride 6 */
#define REG_XDMAC0_CDUS6        (*(__IO uint32_t*)0xF0010204U) /**< (XDMAC0) Channel Destination Microblock Stride 6 */
#define REG_XDMAC0_CIE7         (*(__O  uint32_t*)0xF0010210U) /**< (XDMAC0) Channel Interrupt Enable Register 7 */
#define REG_XDMAC0_CID7         (*(__O  uint32_t*)0xF0010214U) /**< (XDMAC0) Channel Interrupt Disable Register 7 */
#define REG_XDMAC0_CIM7         (*(__I  uint32_t*)0xF0010218U) /**< (XDMAC0) Channel Interrupt Mask Register 7 */
#define REG_XDMAC0_CIS7         (*(__I  uint32_t*)0xF001021CU) /**< (XDMAC0) Channel Interrupt Status Register 7 */
#define REG_XDMAC0_CSA7         (*(__IO uint32_t*)0xF0010220U) /**< (XDMAC0) Channel Source Address Register 7 */
#define REG_XDMAC0_CDA7         (*(__IO uint32_t*)0xF0010224U) /**< (XDMAC0) Channel Destination Address Register 7 */
#define REG_XDMAC0_CNDA7        (*(__IO uint32_t*)0xF0010228U) /**< (XDMAC0) Channel Next Descriptor Address Register 7 */
#define REG_XDMAC0_CNDC7        (*(__IO uint32_t*)0xF001022CU) /**< (XDMAC0) Channel Next Descriptor Control Register 7 */
#define REG_XDMAC0_CUBC7        (*(__IO uint32_t*)0xF0010230U) /**< (XDMAC0) Channel Microblock Control Register 7 */
#define REG_XDMAC0_CBC7         (*(__IO uint32_t*)0xF0010234U) /**< (XDMAC0) Channel Block Control Register 7 */
#define REG_XDMAC0_CC7          (*(__IO uint32_t*)0xF0010238U) /**< (XDMAC0) Channel Configuration Register 7 */
#define REG_XDMAC0_CDS_MSP7     (*(__IO uint32_t*)0xF001023CU) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 7 */
#define REG_XDMAC0_CSUS7        (*(__IO uint32_t*)0xF0010240U) /**< (XDMAC0) Channel Source Microblock Stride 7 */
#define REG_XDMAC0_CDUS7        (*(__IO uint32_t*)0xF0010244U) /**< (XDMAC0) Channel Destination Microblock Stride 7 */
#define REG_XDMAC0_CIE8         (*(__O  uint32_t*)0xF0010250U) /**< (XDMAC0) Channel Interrupt Enable Register 8 */
#define REG_XDMAC0_CID8         (*(__O  uint32_t*)0xF0010254U) /**< (XDMAC0) Channel Interrupt Disable Register 8 */
#define REG_XDMAC0_CIM8         (*(__I  uint32_t*)0xF0010258U) /**< (XDMAC0) Channel Interrupt Mask Register 8 */
#define REG_XDMAC0_CIS8         (*(__I  uint32_t*)0xF001025CU) /**< (XDMAC0) Channel Interrupt Status Register 8 */
#define REG_XDMAC0_CSA8         (*(__IO uint32_t*)0xF0010260U) /**< (XDMAC0) Channel Source Address Register 8 */
#define REG_XDMAC0_CDA8         (*(__IO uint32_t*)0xF0010264U) /**< (XDMAC0) Channel Destination Address Register 8 */
#define REG_XDMAC0_CNDA8        (*(__IO uint32_t*)0xF0010268U) /**< (XDMAC0) Channel Next Descriptor Address Register 8 */
#define REG_XDMAC0_CNDC8        (*(__IO uint32_t*)0xF001026CU) /**< (XDMAC0) Channel Next Descriptor Control Register 8 */
#define REG_XDMAC0_CUBC8        (*(__IO uint32_t*)0xF0010270U) /**< (XDMAC0) Channel Microblock Control Register 8 */
#define REG_XDMAC0_CBC8         (*(__IO uint32_t*)0xF0010274U) /**< (XDMAC0) Channel Block Control Register 8 */
#define REG_XDMAC0_CC8          (*(__IO uint32_t*)0xF0010278U) /**< (XDMAC0) Channel Configuration Register 8 */
#define REG_XDMAC0_CDS_MSP8     (*(__IO uint32_t*)0xF001027CU) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 8 */
#define REG_XDMAC0_CSUS8        (*(__IO uint32_t*)0xF0010280U) /**< (XDMAC0) Channel Source Microblock Stride 8 */
#define REG_XDMAC0_CDUS8        (*(__IO uint32_t*)0xF0010284U) /**< (XDMAC0) Channel Destination Microblock Stride 8 */
#define REG_XDMAC0_CIE9         (*(__O  uint32_t*)0xF0010290U) /**< (XDMAC0) Channel Interrupt Enable Register 9 */
#define REG_XDMAC0_CID9         (*(__O  uint32_t*)0xF0010294U) /**< (XDMAC0) Channel Interrupt Disable Register 9 */
#define REG_XDMAC0_CIM9         (*(__I  uint32_t*)0xF0010298U) /**< (XDMAC0) Channel Interrupt Mask Register 9 */
#define REG_XDMAC0_CIS9         (*(__I  uint32_t*)0xF001029CU) /**< (XDMAC0) Channel Interrupt Status Register 9 */
#define REG_XDMAC0_CSA9         (*(__IO uint32_t*)0xF00102A0U) /**< (XDMAC0) Channel Source Address Register 9 */
#define REG_XDMAC0_CDA9         (*(__IO uint32_t*)0xF00102A4U) /**< (XDMAC0) Channel Destination Address Register 9 */
#define REG_XDMAC0_CNDA9        (*(__IO uint32_t*)0xF00102A8U) /**< (XDMAC0) Channel Next Descriptor Address Register 9 */
#define REG_XDMAC0_CNDC9        (*(__IO uint32_t*)0xF00102ACU) /**< (XDMAC0) Channel Next Descriptor Control Register 9 */
#define REG_XDMAC0_CUBC9        (*(__IO uint32_t*)0xF00102B0U) /**< (XDMAC0) Channel Microblock Control Register 9 */
#define REG_XDMAC0_CBC9         (*(__IO uint32_t*)0xF00102B4U) /**< (XDMAC0) Channel Block Control Register 9 */
#define REG_XDMAC0_CC9          (*(__IO uint32_t*)0xF00102B8U) /**< (XDMAC0) Channel Configuration Register 9 */
#define REG_XDMAC0_CDS_MSP9     (*(__IO uint32_t*)0xF00102BCU) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 9 */
#define REG_XDMAC0_CSUS9        (*(__IO uint32_t*)0xF00102C0U) /**< (XDMAC0) Channel Source Microblock Stride 9 */
#define REG_XDMAC0_CDUS9        (*(__IO uint32_t*)0xF00102C4U) /**< (XDMAC0) Channel Destination Microblock Stride 9 */
#define REG_XDMAC0_CIE10        (*(__O  uint32_t*)0xF00102D0U) /**< (XDMAC0) Channel Interrupt Enable Register 10 */
#define REG_XDMAC0_CID10        (*(__O  uint32_t*)0xF00102D4U) /**< (XDMAC0) Channel Interrupt Disable Register 10 */
#define REG_XDMAC0_CIM10        (*(__I  uint32_t*)0xF00102D8U) /**< (XDMAC0) Channel Interrupt Mask Register 10 */
#define REG_XDMAC0_CIS10        (*(__I  uint32_t*)0xF00102DCU) /**< (XDMAC0) Channel Interrupt Status Register 10 */
#define REG_XDMAC0_CSA10        (*(__IO uint32_t*)0xF00102E0U) /**< (XDMAC0) Channel Source Address Register 10 */
#define REG_XDMAC0_CDA10        (*(__IO uint32_t*)0xF00102E4U) /**< (XDMAC0) Channel Destination Address Register 10 */
#define REG_XDMAC0_CNDA10       (*(__IO uint32_t*)0xF00102E8U) /**< (XDMAC0) Channel Next Descriptor Address Register 10 */
#define REG_XDMAC0_CNDC10       (*(__IO uint32_t*)0xF00102ECU) /**< (XDMAC0) Channel Next Descriptor Control Register 10 */
#define REG_XDMAC0_CUBC10       (*(__IO uint32_t*)0xF00102F0U) /**< (XDMAC0) Channel Microblock Control Register 10 */
#define REG_XDMAC0_CBC10        (*(__IO uint32_t*)0xF00102F4U) /**< (XDMAC0) Channel Block Control Register 10 */
#define REG_XDMAC0_CC10         (*(__IO uint32_t*)0xF00102F8U) /**< (XDMAC0) Channel Configuration Register 10 */
#define REG_XDMAC0_CDS_MSP10    (*(__IO uint32_t*)0xF00102FCU) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 10 */
#define REG_XDMAC0_CSUS10       (*(__IO uint32_t*)0xF0010300U) /**< (XDMAC0) Channel Source Microblock Stride 10 */
#define REG_XDMAC0_CDUS10       (*(__IO uint32_t*)0xF0010304U) /**< (XDMAC0) Channel Destination Microblock Stride 10 */
#define REG_XDMAC0_CIE11        (*(__O  uint32_t*)0xF0010310U) /**< (XDMAC0) Channel Interrupt Enable Register 11 */
#define REG_XDMAC0_CID11        (*(__O  uint32_t*)0xF0010314U) /**< (XDMAC0) Channel Interrupt Disable Register 11 */
#define REG_XDMAC0_CIM11        (*(__I  uint32_t*)0xF0010318U) /**< (XDMAC0) Channel Interrupt Mask Register 11 */
#define REG_XDMAC0_CIS11        (*(__I  uint32_t*)0xF001031CU) /**< (XDMAC0) Channel Interrupt Status Register 11 */
#define REG_XDMAC0_CSA11        (*(__IO uint32_t*)0xF0010320U) /**< (XDMAC0) Channel Source Address Register 11 */
#define REG_XDMAC0_CDA11        (*(__IO uint32_t*)0xF0010324U) /**< (XDMAC0) Channel Destination Address Register 11 */
#define REG_XDMAC0_CNDA11       (*(__IO uint32_t*)0xF0010328U) /**< (XDMAC0) Channel Next Descriptor Address Register 11 */
#define REG_XDMAC0_CNDC11       (*(__IO uint32_t*)0xF001032CU) /**< (XDMAC0) Channel Next Descriptor Control Register 11 */
#define REG_XDMAC0_CUBC11       (*(__IO uint32_t*)0xF0010330U) /**< (XDMAC0) Channel Microblock Control Register 11 */
#define REG_XDMAC0_CBC11        (*(__IO uint32_t*)0xF0010334U) /**< (XDMAC0) Channel Block Control Register 11 */
#define REG_XDMAC0_CC11         (*(__IO uint32_t*)0xF0010338U) /**< (XDMAC0) Channel Configuration Register 11 */
#define REG_XDMAC0_CDS_MSP11    (*(__IO uint32_t*)0xF001033CU) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 11 */
#define REG_XDMAC0_CSUS11       (*(__IO uint32_t*)0xF0010340U) /**< (XDMAC0) Channel Source Microblock Stride 11 */
#define REG_XDMAC0_CDUS11       (*(__IO uint32_t*)0xF0010344U) /**< (XDMAC0) Channel Destination Microblock Stride 11 */
#define REG_XDMAC0_CIE12        (*(__O  uint32_t*)0xF0010350U) /**< (XDMAC0) Channel Interrupt Enable Register 12 */
#define REG_XDMAC0_CID12        (*(__O  uint32_t*)0xF0010354U) /**< (XDMAC0) Channel Interrupt Disable Register 12 */
#define REG_XDMAC0_CIM12        (*(__I  uint32_t*)0xF0010358U) /**< (XDMAC0) Channel Interrupt Mask Register 12 */
#define REG_XDMAC0_CIS12        (*(__I  uint32_t*)0xF001035CU) /**< (XDMAC0) Channel Interrupt Status Register 12 */
#define REG_XDMAC0_CSA12        (*(__IO uint32_t*)0xF0010360U) /**< (XDMAC0) Channel Source Address Register 12 */
#define REG_XDMAC0_CDA12        (*(__IO uint32_t*)0xF0010364U) /**< (XDMAC0) Channel Destination Address Register 12 */
#define REG_XDMAC0_CNDA12       (*(__IO uint32_t*)0xF0010368U) /**< (XDMAC0) Channel Next Descriptor Address Register 12 */
#define REG_XDMAC0_CNDC12       (*(__IO uint32_t*)0xF001036CU) /**< (XDMAC0) Channel Next Descriptor Control Register 12 */
#define REG_XDMAC0_CUBC12       (*(__IO uint32_t*)0xF0010370U) /**< (XDMAC0) Channel Microblock Control Register 12 */
#define REG_XDMAC0_CBC12        (*(__IO uint32_t*)0xF0010374U) /**< (XDMAC0) Channel Block Control Register 12 */
#define REG_XDMAC0_CC12         (*(__IO uint32_t*)0xF0010378U) /**< (XDMAC0) Channel Configuration Register 12 */
#define REG_XDMAC0_CDS_MSP12    (*(__IO uint32_t*)0xF001037CU) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 12 */
#define REG_XDMAC0_CSUS12       (*(__IO uint32_t*)0xF0010380U) /**< (XDMAC0) Channel Source Microblock Stride 12 */
#define REG_XDMAC0_CDUS12       (*(__IO uint32_t*)0xF0010384U) /**< (XDMAC0) Channel Destination Microblock Stride 12 */
#define REG_XDMAC0_CIE13        (*(__O  uint32_t*)0xF0010390U) /**< (XDMAC0) Channel Interrupt Enable Register 13 */
#define REG_XDMAC0_CID13        (*(__O  uint32_t*)0xF0010394U) /**< (XDMAC0) Channel Interrupt Disable Register 13 */
#define REG_XDMAC0_CIM13        (*(__I  uint32_t*)0xF0010398U) /**< (XDMAC0) Channel Interrupt Mask Register 13 */
#define REG_XDMAC0_CIS13        (*(__I  uint32_t*)0xF001039CU) /**< (XDMAC0) Channel Interrupt Status Register 13 */
#define REG_XDMAC0_CSA13        (*(__IO uint32_t*)0xF00103A0U) /**< (XDMAC0) Channel Source Address Register 13 */
#define REG_XDMAC0_CDA13        (*(__IO uint32_t*)0xF00103A4U) /**< (XDMAC0) Channel Destination Address Register 13 */
#define REG_XDMAC0_CNDA13       (*(__IO uint32_t*)0xF00103A8U) /**< (XDMAC0) Channel Next Descriptor Address Register 13 */
#define REG_XDMAC0_CNDC13       (*(__IO uint32_t*)0xF00103ACU) /**< (XDMAC0) Channel Next Descriptor Control Register 13 */
#define REG_XDMAC0_CUBC13       (*(__IO uint32_t*)0xF00103B0U) /**< (XDMAC0) Channel Microblock Control Register 13 */
#define REG_XDMAC0_CBC13        (*(__IO uint32_t*)0xF00103B4U) /**< (XDMAC0) Channel Block Control Register 13 */
#define REG_XDMAC0_CC13         (*(__IO uint32_t*)0xF00103B8U) /**< (XDMAC0) Channel Configuration Register 13 */
#define REG_XDMAC0_CDS_MSP13    (*(__IO uint32_t*)0xF00103BCU) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 13 */
#define REG_XDMAC0_CSUS13       (*(__IO uint32_t*)0xF00103C0U) /**< (XDMAC0) Channel Source Microblock Stride 13 */
#define REG_XDMAC0_CDUS13       (*(__IO uint32_t*)0xF00103C4U) /**< (XDMAC0) Channel Destination Microblock Stride 13 */
#define REG_XDMAC0_CIE14        (*(__O  uint32_t*)0xF00103D0U) /**< (XDMAC0) Channel Interrupt Enable Register 14 */
#define REG_XDMAC0_CID14        (*(__O  uint32_t*)0xF00103D4U) /**< (XDMAC0) Channel Interrupt Disable Register 14 */
#define REG_XDMAC0_CIM14        (*(__I  uint32_t*)0xF00103D8U) /**< (XDMAC0) Channel Interrupt Mask Register 14 */
#define REG_XDMAC0_CIS14        (*(__I  uint32_t*)0xF00103DCU) /**< (XDMAC0) Channel Interrupt Status Register 14 */
#define REG_XDMAC0_CSA14        (*(__IO uint32_t*)0xF00103E0U) /**< (XDMAC0) Channel Source Address Register 14 */
#define REG_XDMAC0_CDA14        (*(__IO uint32_t*)0xF00103E4U) /**< (XDMAC0) Channel Destination Address Register 14 */
#define REG_XDMAC0_CNDA14       (*(__IO uint32_t*)0xF00103E8U) /**< (XDMAC0) Channel Next Descriptor Address Register 14 */
#define REG_XDMAC0_CNDC14       (*(__IO uint32_t*)0xF00103ECU) /**< (XDMAC0) Channel Next Descriptor Control Register 14 */
#define REG_XDMAC0_CUBC14       (*(__IO uint32_t*)0xF00103F0U) /**< (XDMAC0) Channel Microblock Control Register 14 */
#define REG_XDMAC0_CBC14        (*(__IO uint32_t*)0xF00103F4U) /**< (XDMAC0) Channel Block Control Register 14 */
#define REG_XDMAC0_CC14         (*(__IO uint32_t*)0xF00103F8U) /**< (XDMAC0) Channel Configuration Register 14 */
#define REG_XDMAC0_CDS_MSP14    (*(__IO uint32_t*)0xF00103FCU) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 14 */
#define REG_XDMAC0_CSUS14       (*(__IO uint32_t*)0xF0010400U) /**< (XDMAC0) Channel Source Microblock Stride 14 */
#define REG_XDMAC0_CDUS14       (*(__IO uint32_t*)0xF0010404U) /**< (XDMAC0) Channel Destination Microblock Stride 14 */
#define REG_XDMAC0_CIE15        (*(__O  uint32_t*)0xF0010410U) /**< (XDMAC0) Channel Interrupt Enable Register 15 */
#define REG_XDMAC0_CID15        (*(__O  uint32_t*)0xF0010414U) /**< (XDMAC0) Channel Interrupt Disable Register 15 */
#define REG_XDMAC0_CIM15        (*(__I  uint32_t*)0xF0010418U) /**< (XDMAC0) Channel Interrupt Mask Register 15 */
#define REG_XDMAC0_CIS15        (*(__I  uint32_t*)0xF001041CU) /**< (XDMAC0) Channel Interrupt Status Register 15 */
#define REG_XDMAC0_CSA15        (*(__IO uint32_t*)0xF0010420U) /**< (XDMAC0) Channel Source Address Register 15 */
#define REG_XDMAC0_CDA15        (*(__IO uint32_t*)0xF0010424U) /**< (XDMAC0) Channel Destination Address Register 15 */
#define REG_XDMAC0_CNDA15       (*(__IO uint32_t*)0xF0010428U) /**< (XDMAC0) Channel Next Descriptor Address Register 15 */
#define REG_XDMAC0_CNDC15       (*(__IO uint32_t*)0xF001042CU) /**< (XDMAC0) Channel Next Descriptor Control Register 15 */
#define REG_XDMAC0_CUBC15       (*(__IO uint32_t*)0xF0010430U) /**< (XDMAC0) Channel Microblock Control Register 15 */
#define REG_XDMAC0_CBC15        (*(__IO uint32_t*)0xF0010434U) /**< (XDMAC0) Channel Block Control Register 15 */
#define REG_XDMAC0_CC15         (*(__IO uint32_t*)0xF0010438U) /**< (XDMAC0) Channel Configuration Register 15 */
#define REG_XDMAC0_CDS_MSP15    (*(__IO uint32_t*)0xF001043CU) /**< (XDMAC0) Channel Data Stride Memory Set Pattern 15 */
#define REG_XDMAC0_CSUS15       (*(__IO uint32_t*)0xF0010440U) /**< (XDMAC0) Channel Source Microblock Stride 15 */
#define REG_XDMAC0_CDUS15       (*(__IO uint32_t*)0xF0010444U) /**< (XDMAC0) Channel Destination Microblock Stride 15 */
#define REG_XDMAC0_GTYPE        (*(__I  uint32_t*)0xF0010000U) /**< (XDMAC0) Global Type Register */
#define REG_XDMAC0_GCFG         (*(__IO uint32_t*)0xF0010004U) /**< (XDMAC0) Global Configuration Register */
#define REG_XDMAC0_GWAC         (*(__IO uint32_t*)0xF0010008U) /**< (XDMAC0) Global Weighted Arbiter Configuration Register */
#define REG_XDMAC0_GIE          (*(__O  uint32_t*)0xF001000CU) /**< (XDMAC0) Global Interrupt Enable Register */
#define REG_XDMAC0_GID          (*(__O  uint32_t*)0xF0010010U) /**< (XDMAC0) Global Interrupt Disable Register */
#define REG_XDMAC0_GIM          (*(__I  uint32_t*)0xF0010014U) /**< (XDMAC0) Global Interrupt Mask Register */
#define REG_XDMAC0_GIS          (*(__I  uint32_t*)0xF0010018U) /**< (XDMAC0) Global Interrupt Status Register */
#define REG_XDMAC0_GE           (*(__O  uint32_t*)0xF001001CU) /**< (XDMAC0) Global Channel Enable Register */
#define REG_XDMAC0_GD           (*(__O  uint32_t*)0xF0010020U) /**< (XDMAC0) Global Channel Disable Register */
#define REG_XDMAC0_GS           (*(__I  uint32_t*)0xF0010024U) /**< (XDMAC0) Global Channel Status Register */
#define REG_XDMAC0_GRS          (*(__IO uint32_t*)0xF0010028U) /**< (XDMAC0) Global Channel Read Suspend Register */
#define REG_XDMAC0_GWS          (*(__IO uint32_t*)0xF001002CU) /**< (XDMAC0) Global Channel Write Suspend Register */
#define REG_XDMAC0_GRWS         (*(__O  uint32_t*)0xF0010030U) /**< (XDMAC0) Global Channel Read Write Suspend Register */
#define REG_XDMAC0_GRWR         (*(__O  uint32_t*)0xF0010034U) /**< (XDMAC0) Global Channel Read Write Resume Register */
#define REG_XDMAC0_GSWR         (*(__O  uint32_t*)0xF0010038U) /**< (XDMAC0) Global Channel Software Request Register */
#define REG_XDMAC0_GSWS         (*(__I  uint32_t*)0xF001003CU) /**< (XDMAC0) Global Channel Software Request Status Register */
#define REG_XDMAC0_GSWF         (*(__O  uint32_t*)0xF0010040U) /**< (XDMAC0) Global Channel Software Flush Request Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for XDMAC0 peripheral ========== */
#define XDMAC0_INSTANCE_ID                       6          
#define XDMAC0_CLOCK_ID                          6          

#endif /* _SAMA5D2_XDMAC0_INSTANCE_ */
