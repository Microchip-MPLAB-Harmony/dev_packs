/**
 * \file
 *
 * \brief Instance description for GMAC
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
#ifndef _SAMA5D2_GMAC_INSTANCE_H_
#define _SAMA5D2_GMAC_INSTANCE_H_

/* ========== Register definition for GMAC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_GMAC_SAB1           (0xF8008088) /**< (GMAC) Specific Address 1 Bottom Register 0 */
#define REG_GMAC_SAT1           (0xF800808C) /**< (GMAC) Specific Address 1 Top Register 0 */
#define REG_GMAC_SAB2           (0xF8008090) /**< (GMAC) Specific Address 1 Bottom Register 1 */
#define REG_GMAC_SAT2           (0xF8008094) /**< (GMAC) Specific Address 1 Top Register 1 */
#define REG_GMAC_SAB3           (0xF8008098) /**< (GMAC) Specific Address 1 Bottom Register 2 */
#define REG_GMAC_SAT3           (0xF800809C) /**< (GMAC) Specific Address 1 Top Register 2 */
#define REG_GMAC_SAB4           (0xF80080A0) /**< (GMAC) Specific Address 1 Bottom Register 3 */
#define REG_GMAC_SAT4           (0xF80080A4) /**< (GMAC) Specific Address 1 Top Register 3 */
#define REG_GMAC_ST2CW00        (0xF8008700) /**< (GMAC) Screening Type 2 Compare Word 0 Register 0 */
#define REG_GMAC_ST2CW10        (0xF8008704) /**< (GMAC) Screening Type 2 Compare Word 1 Register 0 */
#define REG_GMAC_ST2CW01        (0xF8008708) /**< (GMAC) Screening Type 2 Compare Word 0 Register 1 */
#define REG_GMAC_ST2CW11        (0xF800870C) /**< (GMAC) Screening Type 2 Compare Word 1 Register 1 */
#define REG_GMAC_ST2CW02        (0xF8008710) /**< (GMAC) Screening Type 2 Compare Word 0 Register 2 */
#define REG_GMAC_ST2CW12        (0xF8008714) /**< (GMAC) Screening Type 2 Compare Word 1 Register 2 */
#define REG_GMAC_ST2CW03        (0xF8008718) /**< (GMAC) Screening Type 2 Compare Word 0 Register 3 */
#define REG_GMAC_ST2CW13        (0xF800871C) /**< (GMAC) Screening Type 2 Compare Word 1 Register 3 */
#define REG_GMAC_ST2CW04        (0xF8008720) /**< (GMAC) Screening Type 2 Compare Word 0 Register 4 */
#define REG_GMAC_ST2CW14        (0xF8008724) /**< (GMAC) Screening Type 2 Compare Word 1 Register 4 */
#define REG_GMAC_ST2CW05        (0xF8008728) /**< (GMAC) Screening Type 2 Compare Word 0 Register 5 */
#define REG_GMAC_ST2CW15        (0xF800872C) /**< (GMAC) Screening Type 2 Compare Word 1 Register 5 */
#define REG_GMAC_ST2CW06        (0xF8008730) /**< (GMAC) Screening Type 2 Compare Word 0 Register 6 */
#define REG_GMAC_ST2CW16        (0xF8008734) /**< (GMAC) Screening Type 2 Compare Word 1 Register 6 */
#define REG_GMAC_ST2CW07        (0xF8008738) /**< (GMAC) Screening Type 2 Compare Word 0 Register 7 */
#define REG_GMAC_ST2CW17        (0xF800873C) /**< (GMAC) Screening Type 2 Compare Word 1 Register 7 */
#define REG_GMAC_ST2CW08        (0xF8008740) /**< (GMAC) Screening Type 2 Compare Word 0 Register 8 */
#define REG_GMAC_ST2CW18        (0xF8008744) /**< (GMAC) Screening Type 2 Compare Word 1 Register 8 */
#define REG_GMAC_ST2CW09        (0xF8008748) /**< (GMAC) Screening Type 2 Compare Word 0 Register 9 */
#define REG_GMAC_ST2CW19        (0xF800874C) /**< (GMAC) Screening Type 2 Compare Word 1 Register 9 */
#define REG_GMAC_ST2CW010       (0xF8008750) /**< (GMAC) Screening Type 2 Compare Word 0 Register 10 */
#define REG_GMAC_ST2CW110       (0xF8008754) /**< (GMAC) Screening Type 2 Compare Word 1 Register 10 */
#define REG_GMAC_ST2CW011       (0xF8008758) /**< (GMAC) Screening Type 2 Compare Word 0 Register 11 */
#define REG_GMAC_ST2CW111       (0xF800875C) /**< (GMAC) Screening Type 2 Compare Word 1 Register 11 */
#define REG_GMAC_ST2CW012       (0xF8008760) /**< (GMAC) Screening Type 2 Compare Word 0 Register 12 */
#define REG_GMAC_ST2CW112       (0xF8008764) /**< (GMAC) Screening Type 2 Compare Word 1 Register 12 */
#define REG_GMAC_ST2CW013       (0xF8008768) /**< (GMAC) Screening Type 2 Compare Word 0 Register 13 */
#define REG_GMAC_ST2CW113       (0xF800876C) /**< (GMAC) Screening Type 2 Compare Word 1 Register 13 */
#define REG_GMAC_ST2CW014       (0xF8008770) /**< (GMAC) Screening Type 2 Compare Word 0 Register 14 */
#define REG_GMAC_ST2CW114       (0xF8008774) /**< (GMAC) Screening Type 2 Compare Word 1 Register 14 */
#define REG_GMAC_ST2CW015       (0xF8008778) /**< (GMAC) Screening Type 2 Compare Word 0 Register 15 */
#define REG_GMAC_ST2CW115       (0xF800877C) /**< (GMAC) Screening Type 2 Compare Word 1 Register 15 */
#define REG_GMAC_ST2CW016       (0xF8008780) /**< (GMAC) Screening Type 2 Compare Word 0 Register 16 */
#define REG_GMAC_ST2CW116       (0xF8008784) /**< (GMAC) Screening Type 2 Compare Word 1 Register 16 */
#define REG_GMAC_ST2CW017       (0xF8008788) /**< (GMAC) Screening Type 2 Compare Word 0 Register 17 */
#define REG_GMAC_ST2CW117       (0xF800878C) /**< (GMAC) Screening Type 2 Compare Word 1 Register 17 */
#define REG_GMAC_ST2CW018       (0xF8008790) /**< (GMAC) Screening Type 2 Compare Word 0 Register 18 */
#define REG_GMAC_ST2CW118       (0xF8008794) /**< (GMAC) Screening Type 2 Compare Word 1 Register 18 */
#define REG_GMAC_ST2CW019       (0xF8008798) /**< (GMAC) Screening Type 2 Compare Word 0 Register 19 */
#define REG_GMAC_ST2CW119       (0xF800879C) /**< (GMAC) Screening Type 2 Compare Word 1 Register 19 */
#define REG_GMAC_ST2CW020       (0xF80087A0) /**< (GMAC) Screening Type 2 Compare Word 0 Register 20 */
#define REG_GMAC_ST2CW120       (0xF80087A4) /**< (GMAC) Screening Type 2 Compare Word 1 Register 20 */
#define REG_GMAC_ST2CW021       (0xF80087A8) /**< (GMAC) Screening Type 2 Compare Word 0 Register 21 */
#define REG_GMAC_ST2CW121       (0xF80087AC) /**< (GMAC) Screening Type 2 Compare Word 1 Register 21 */
#define REG_GMAC_ST2CW022       (0xF80087B0) /**< (GMAC) Screening Type 2 Compare Word 0 Register 22 */
#define REG_GMAC_ST2CW122       (0xF80087B4) /**< (GMAC) Screening Type 2 Compare Word 1 Register 22 */
#define REG_GMAC_ST2CW023       (0xF80087B8) /**< (GMAC) Screening Type 2 Compare Word 0 Register 23 */
#define REG_GMAC_ST2CW123       (0xF80087BC) /**< (GMAC) Screening Type 2 Compare Word 1 Register 23 */
#define REG_GMAC_NCR            (0xF8008000) /**< (GMAC) Network Control Register */
#define REG_GMAC_NCFGR          (0xF8008004) /**< (GMAC) Network Configuration Register */
#define REG_GMAC_NSR            (0xF8008008) /**< (GMAC) Network Status Register */
#define REG_GMAC_UR             (0xF800800C) /**< (GMAC) User Register */
#define REG_GMAC_DCFGR          (0xF8008010) /**< (GMAC) DMA Configuration Register */
#define REG_GMAC_TSR            (0xF8008014) /**< (GMAC) Transmit Status Register */
#define REG_GMAC_RBQB           (0xF8008018) /**< (GMAC) Receive Buffer Queue Base Address Register */
#define REG_GMAC_TBQB           (0xF800801C) /**< (GMAC) Transmit Buffer Queue Base Address Register */
#define REG_GMAC_RSR            (0xF8008020) /**< (GMAC) Receive Status Register */
#define REG_GMAC_ISR            (0xF8008024) /**< (GMAC) Interrupt Status Register */
#define REG_GMAC_IER            (0xF8008028) /**< (GMAC) Interrupt Enable Register */
#define REG_GMAC_IDR            (0xF800802C) /**< (GMAC) Interrupt Disable Register */
#define REG_GMAC_IMR            (0xF8008030) /**< (GMAC) Interrupt Mask Register */
#define REG_GMAC_MAN            (0xF8008034) /**< (GMAC) PHY Maintenance Register */
#define REG_GMAC_RPQ            (0xF8008038) /**< (GMAC) Received Pause Quantum Register */
#define REG_GMAC_TPQ            (0xF800803C) /**< (GMAC) Transmit Pause Quantum Register */
#define REG_GMAC_TPSF           (0xF8008040) /**< (GMAC) TX Partial Store and Forward Register */
#define REG_GMAC_RPSF           (0xF8008044) /**< (GMAC) RX Partial Store and Forward Register */
#define REG_GMAC_RJFML          (0xF8008048) /**< (GMAC) RX Jumbo Frame Max Length Register */
#define REG_GMAC_HRB            (0xF8008080) /**< (GMAC) Hash Register Bottom */
#define REG_GMAC_HRT            (0xF8008084) /**< (GMAC) Hash Register Top */
#define REG_GMAC_TIDM1          (0xF80080A8) /**< (GMAC) Type ID Match 1 Register */
#define REG_GMAC_TIDM2          (0xF80080AC) /**< (GMAC) Type ID Match 2 Register */
#define REG_GMAC_TIDM3          (0xF80080B0) /**< (GMAC) Type ID Match 3 Register */
#define REG_GMAC_TIDM4          (0xF80080B4) /**< (GMAC) Type ID Match 4 Register */
#define REG_GMAC_WOL            (0xF80080B8) /**< (GMAC) Wake on LAN Register */
#define REG_GMAC_IPGS           (0xF80080BC) /**< (GMAC) IPG Stretch Register */
#define REG_GMAC_SVLAN          (0xF80080C0) /**< (GMAC) Stacked VLAN Register */
#define REG_GMAC_TPFCP          (0xF80080C4) /**< (GMAC) Transmit PFC Pause Register */
#define REG_GMAC_SAMB1          (0xF80080C8) /**< (GMAC) Specific Address 1 Mask Bottom Register */
#define REG_GMAC_SAMT1          (0xF80080CC) /**< (GMAC) Specific Address 1 Mask Top Register */
#define REG_GMAC_NSC            (0xF80080DC) /**< (GMAC) 1588 Timer Nanosecond Comparison Register */
#define REG_GMAC_SCL            (0xF80080E0) /**< (GMAC) 1588 Timer Second Comparison Low Register */
#define REG_GMAC_SCH            (0xF80080E4) /**< (GMAC) 1588 Timer Second Comparison High Register */
#define REG_GMAC_EFTSH          (0xF80080E8) /**< (GMAC) PTP Event Frame Transmitted Seconds High Register */
#define REG_GMAC_EFRSH          (0xF80080EC) /**< (GMAC) PTP Event Frame Received Seconds High Register */
#define REG_GMAC_PEFTSH         (0xF80080F0) /**< (GMAC) PTP Peer Event Frame Transmitted Seconds High Register */
#define REG_GMAC_PEFRSH         (0xF80080F4) /**< (GMAC) PTP Peer Event Frame Received Seconds High Register */
#define REG_GMAC_OTLO           (0xF8008100) /**< (GMAC) Octets Transmitted Low Register */
#define REG_GMAC_OTHI           (0xF8008104) /**< (GMAC) Octets Transmitted High Register */
#define REG_GMAC_FT             (0xF8008108) /**< (GMAC) Frames Transmitted Register */
#define REG_GMAC_BCFT           (0xF800810C) /**< (GMAC) Broadcast Frames Transmitted Register */
#define REG_GMAC_MFT            (0xF8008110) /**< (GMAC) Multicast Frames Transmitted Register */
#define REG_GMAC_PFT            (0xF8008114) /**< (GMAC) Pause Frames Transmitted Register */
#define REG_GMAC_BFT64          (0xF8008118) /**< (GMAC) 64 Byte Frames Transmitted Register */
#define REG_GMAC_TBFT127        (0xF800811C) /**< (GMAC) 65 to 127 Byte Frames Transmitted Register */
#define REG_GMAC_TBFT255        (0xF8008120) /**< (GMAC) 128 to 255 Byte Frames Transmitted Register */
#define REG_GMAC_TBFT511        (0xF8008124) /**< (GMAC) 256 to 511 Byte Frames Transmitted Register */
#define REG_GMAC_TBFT1023       (0xF8008128) /**< (GMAC) 512 to 1023 Byte Frames Transmitted Register */
#define REG_GMAC_TBFT1518       (0xF800812C) /**< (GMAC) 1024 to 1518 Byte Frames Transmitted Register */
#define REG_GMAC_GTBFT1518      (0xF8008130) /**< (GMAC) Greater Than 1518 Byte Frames Transmitted Register */
#define REG_GMAC_TUR            (0xF8008134) /**< (GMAC) Transmit Underruns Register */
#define REG_GMAC_SCF            (0xF8008138) /**< (GMAC) Single Collision Frames Register */
#define REG_GMAC_MCF            (0xF800813C) /**< (GMAC) Multiple Collision Frames Register */
#define REG_GMAC_EC             (0xF8008140) /**< (GMAC) Excessive Collisions Register */
#define REG_GMAC_LC             (0xF8008144) /**< (GMAC) Late Collisions Register */
#define REG_GMAC_DTF            (0xF8008148) /**< (GMAC) Deferred Transmission Frames Register */
#define REG_GMAC_CSE            (0xF800814C) /**< (GMAC) Carrier Sense Errors Register */
#define REG_GMAC_ORLO           (0xF8008150) /**< (GMAC) Octets Received Low Received Register */
#define REG_GMAC_ORHI           (0xF8008154) /**< (GMAC) Octets Received High Received Register */
#define REG_GMAC_FR             (0xF8008158) /**< (GMAC) Frames Received Register */
#define REG_GMAC_BCFR           (0xF800815C) /**< (GMAC) Broadcast Frames Received Register */
#define REG_GMAC_MFR            (0xF8008160) /**< (GMAC) Multicast Frames Received Register */
#define REG_GMAC_PFR            (0xF8008164) /**< (GMAC) Pause Frames Received Register */
#define REG_GMAC_BFR64          (0xF8008168) /**< (GMAC) 64 Byte Frames Received Register */
#define REG_GMAC_TBFR127        (0xF800816C) /**< (GMAC) 65 to 127 Byte Frames Received Register */
#define REG_GMAC_TBFR255        (0xF8008170) /**< (GMAC) 128 to 255 Byte Frames Received Register */
#define REG_GMAC_TBFR511        (0xF8008174) /**< (GMAC) 256 to 511 Byte Frames Received Register */
#define REG_GMAC_TBFR1023       (0xF8008178) /**< (GMAC) 512 to 1023 Byte Frames Received Register */
#define REG_GMAC_TBFR1518       (0xF800817C) /**< (GMAC) 1024 to 1518 Byte Frames Received Register */
#define REG_GMAC_TMXBFR         (0xF8008180) /**< (GMAC) 1519 to Maximum Byte Frames Received Register */
#define REG_GMAC_UFR            (0xF8008184) /**< (GMAC) Undersize Frames Received Register */
#define REG_GMAC_OFR            (0xF8008188) /**< (GMAC) Oversize Frames Received Register */
#define REG_GMAC_JR             (0xF800818C) /**< (GMAC) Jabbers Received Register */
#define REG_GMAC_FCSE           (0xF8008190) /**< (GMAC) Frame Check Sequence Errors Register */
#define REG_GMAC_LFFE           (0xF8008194) /**< (GMAC) Length Field Frame Errors Register */
#define REG_GMAC_RSE            (0xF8008198) /**< (GMAC) Receive Symbol Errors Register */
#define REG_GMAC_AE             (0xF800819C) /**< (GMAC) Alignment Errors Register */
#define REG_GMAC_RRE            (0xF80081A0) /**< (GMAC) Receive Resource Errors Register */
#define REG_GMAC_ROE            (0xF80081A4) /**< (GMAC) Receive Overrun Register */
#define REG_GMAC_IHCE           (0xF80081A8) /**< (GMAC) IP Header Checksum Errors Register */
#define REG_GMAC_TCE            (0xF80081AC) /**< (GMAC) TCP Checksum Errors Register */
#define REG_GMAC_UCE            (0xF80081B0) /**< (GMAC) UDP Checksum Errors Register */
#define REG_GMAC_TISUBN         (0xF80081BC) /**< (GMAC) 1588 Timer Increment Sub-nanoseconds Register */
#define REG_GMAC_TSH            (0xF80081C0) /**< (GMAC) 1588 Timer Seconds High Register */
#define REG_GMAC_TSL            (0xF80081D0) /**< (GMAC) 1588 Timer Seconds Low Register */
#define REG_GMAC_TN             (0xF80081D4) /**< (GMAC) 1588 Timer Nanoseconds Register */
#define REG_GMAC_TA             (0xF80081D8) /**< (GMAC) 1588 Timer Adjust Register */
#define REG_GMAC_TI             (0xF80081DC) /**< (GMAC) 1588 Timer Increment Register */
#define REG_GMAC_EFTSL          (0xF80081E0) /**< (GMAC) PTP Event Frame Transmitted Seconds Low Register */
#define REG_GMAC_EFTN           (0xF80081E4) /**< (GMAC) PTP Event Frame Transmitted Nanoseconds Register */
#define REG_GMAC_EFRSL          (0xF80081E8) /**< (GMAC) PTP Event Frame Received Seconds Low Register */
#define REG_GMAC_EFRN           (0xF80081EC) /**< (GMAC) PTP Event Frame Received Nanoseconds Register */
#define REG_GMAC_PEFTSL         (0xF80081F0) /**< (GMAC) PTP Peer Event Frame Transmitted Seconds Low Register */
#define REG_GMAC_PEFTN          (0xF80081F4) /**< (GMAC) PTP Peer Event Frame Transmitted Nanoseconds Register */
#define REG_GMAC_PEFRSL         (0xF80081F8) /**< (GMAC) PTP Peer Event Frame Received Seconds Low Register */
#define REG_GMAC_PEFRN          (0xF80081FC) /**< (GMAC) PTP Peer Event Frame Received Nanoseconds Register */
#define REG_GMAC_RXLPI          (0xF8008270) /**< (GMAC) Received LPI Transitions */
#define REG_GMAC_RXLPITIME      (0xF8008274) /**< (GMAC) Received LPI Time */
#define REG_GMAC_TXLPI          (0xF8008278) /**< (GMAC) Transmit LPI Transitions */
#define REG_GMAC_TXLPITIME      (0xF800827C) /**< (GMAC) Transmit LPI Time */
#define REG_GMAC_ISRPQ          (0xF8008400) /**< (GMAC) Interrupt Status Register Priority Queue (1..2) */
#define REG_GMAC_ISRPQ0         (0xF8008400) /**< (GMAC) Interrupt Status Register Priority Queue (1..2) 0 */
#define REG_GMAC_ISRPQ1         (0xF8008404) /**< (GMAC) Interrupt Status Register Priority Queue (1..2) 1 */
#define REG_GMAC_TBQBAPQ        (0xF8008440) /**< (GMAC) Transmit Buffer Queue Base Address Register Priority Queue (1..2) */
#define REG_GMAC_TBQBAPQ0       (0xF8008440) /**< (GMAC) Transmit Buffer Queue Base Address Register Priority Queue (1..2) 0 */
#define REG_GMAC_TBQBAPQ1       (0xF8008444) /**< (GMAC) Transmit Buffer Queue Base Address Register Priority Queue (1..2) 1 */
#define REG_GMAC_RBQBAPQ        (0xF8008480) /**< (GMAC) Receive Buffer Queue Base Address Register Priority Queue (1..2) */
#define REG_GMAC_RBQBAPQ0       (0xF8008480) /**< (GMAC) Receive Buffer Queue Base Address Register Priority Queue (1..2) 0 */
#define REG_GMAC_RBQBAPQ1       (0xF8008484) /**< (GMAC) Receive Buffer Queue Base Address Register Priority Queue (1..2) 1 */
#define REG_GMAC_RBSRPQ         (0xF80084A0) /**< (GMAC) Receive Buffer Size Register Priority Queue (1..2) */
#define REG_GMAC_RBSRPQ0        (0xF80084A0) /**< (GMAC) Receive Buffer Size Register Priority Queue (1..2) 0 */
#define REG_GMAC_RBSRPQ1        (0xF80084A4) /**< (GMAC) Receive Buffer Size Register Priority Queue (1..2) 1 */
#define REG_GMAC_CBSCR          (0xF80084BC) /**< (GMAC) Credit-Based Shaping Control Register */
#define REG_GMAC_CBSISQA        (0xF80084C0) /**< (GMAC) Credit-Based Shaping IdleSlope Register for Queue A */
#define REG_GMAC_CBSISQB        (0xF80084C4) /**< (GMAC) Credit-Based Shaping IdleSlope Register for Queue B */
#define REG_GMAC_ST1RPQ         (0xF8008500) /**< (GMAC) Screening Type 1 Register Priority Queue */
#define REG_GMAC_ST1RPQ0        (0xF8008500) /**< (GMAC) Screening Type 1 Register Priority Queue 0 */
#define REG_GMAC_ST1RPQ1        (0xF8008504) /**< (GMAC) Screening Type 1 Register Priority Queue 1 */
#define REG_GMAC_ST1RPQ2        (0xF8008508) /**< (GMAC) Screening Type 1 Register Priority Queue 2 */
#define REG_GMAC_ST1RPQ3        (0xF800850C) /**< (GMAC) Screening Type 1 Register Priority Queue 3 */
#define REG_GMAC_ST2RPQ         (0xF8008540) /**< (GMAC) Screening Type 2 Register Priority Queue */
#define REG_GMAC_ST2RPQ0        (0xF8008540) /**< (GMAC) Screening Type 2 Register Priority Queue 0 */
#define REG_GMAC_ST2RPQ1        (0xF8008544) /**< (GMAC) Screening Type 2 Register Priority Queue 1 */
#define REG_GMAC_ST2RPQ2        (0xF8008548) /**< (GMAC) Screening Type 2 Register Priority Queue 2 */
#define REG_GMAC_ST2RPQ3        (0xF800854C) /**< (GMAC) Screening Type 2 Register Priority Queue 3 */
#define REG_GMAC_ST2RPQ4        (0xF8008550) /**< (GMAC) Screening Type 2 Register Priority Queue 4 */
#define REG_GMAC_ST2RPQ5        (0xF8008554) /**< (GMAC) Screening Type 2 Register Priority Queue 5 */
#define REG_GMAC_ST2RPQ6        (0xF8008558) /**< (GMAC) Screening Type 2 Register Priority Queue 6 */
#define REG_GMAC_ST2RPQ7        (0xF800855C) /**< (GMAC) Screening Type 2 Register Priority Queue 7 */
#define REG_GMAC_IERPQ          (0xF8008600) /**< (GMAC) Interrupt Enable Register Priority Queue (1..2) */
#define REG_GMAC_IERPQ0         (0xF8008600) /**< (GMAC) Interrupt Enable Register Priority Queue (1..2) 0 */
#define REG_GMAC_IERPQ1         (0xF8008604) /**< (GMAC) Interrupt Enable Register Priority Queue (1..2) 1 */
#define REG_GMAC_IDRPQ          (0xF8008620) /**< (GMAC) Interrupt Disable Register Priority Queue (1..2) */
#define REG_GMAC_IDRPQ0         (0xF8008620) /**< (GMAC) Interrupt Disable Register Priority Queue (1..2) 0 */
#define REG_GMAC_IDRPQ1         (0xF8008624) /**< (GMAC) Interrupt Disable Register Priority Queue (1..2) 1 */
#define REG_GMAC_IMRPQ          (0xF8008640) /**< (GMAC) Interrupt Mask Register Priority Queue (1..2) */
#define REG_GMAC_IMRPQ0         (0xF8008640) /**< (GMAC) Interrupt Mask Register Priority Queue (1..2) 0 */
#define REG_GMAC_IMRPQ1         (0xF8008644) /**< (GMAC) Interrupt Mask Register Priority Queue (1..2) 1 */
#define REG_GMAC_ST2ER          (0xF80086E0) /**< (GMAC) Screening Type 2 Ethertype Register */
#define REG_GMAC_ST2ER0         (0xF80086E0) /**< (GMAC) Screening Type 2 Ethertype Register 0 */
#define REG_GMAC_ST2ER1         (0xF80086E4) /**< (GMAC) Screening Type 2 Ethertype Register 1 */
#define REG_GMAC_ST2ER2         (0xF80086E8) /**< (GMAC) Screening Type 2 Ethertype Register 2 */
#define REG_GMAC_ST2ER3         (0xF80086EC) /**< (GMAC) Screening Type 2 Ethertype Register 3 */

#else

#define REG_GMAC_SAB1           (*(__IO uint32_t*)0xF8008088U) /**< (GMAC) Specific Address 1 Bottom Register 0 */
#define REG_GMAC_SAT1           (*(__IO uint32_t*)0xF800808CU) /**< (GMAC) Specific Address 1 Top Register 0 */
#define REG_GMAC_SAB2           (*(__IO uint32_t*)0xF8008090U) /**< (GMAC) Specific Address 1 Bottom Register 1 */
#define REG_GMAC_SAT2           (*(__IO uint32_t*)0xF8008094U) /**< (GMAC) Specific Address 1 Top Register 1 */
#define REG_GMAC_SAB3           (*(__IO uint32_t*)0xF8008098U) /**< (GMAC) Specific Address 1 Bottom Register 2 */
#define REG_GMAC_SAT3           (*(__IO uint32_t*)0xF800809CU) /**< (GMAC) Specific Address 1 Top Register 2 */
#define REG_GMAC_SAB4           (*(__IO uint32_t*)0xF80080A0U) /**< (GMAC) Specific Address 1 Bottom Register 3 */
#define REG_GMAC_SAT4           (*(__IO uint32_t*)0xF80080A4U) /**< (GMAC) Specific Address 1 Top Register 3 */
#define REG_GMAC_ST2CW00        (*(__IO uint32_t*)0xF8008700U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 0 */
#define REG_GMAC_ST2CW10        (*(__IO uint32_t*)0xF8008704U) /**< (GMAC) Screening Type 2 Compare Word 1 Register 0 */
#define REG_GMAC_ST2CW01        (*(__IO uint32_t*)0xF8008708U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 1 */
#define REG_GMAC_ST2CW11        (*(__IO uint32_t*)0xF800870CU) /**< (GMAC) Screening Type 2 Compare Word 1 Register 1 */
#define REG_GMAC_ST2CW02        (*(__IO uint32_t*)0xF8008710U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 2 */
#define REG_GMAC_ST2CW12        (*(__IO uint32_t*)0xF8008714U) /**< (GMAC) Screening Type 2 Compare Word 1 Register 2 */
#define REG_GMAC_ST2CW03        (*(__IO uint32_t*)0xF8008718U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 3 */
#define REG_GMAC_ST2CW13        (*(__IO uint32_t*)0xF800871CU) /**< (GMAC) Screening Type 2 Compare Word 1 Register 3 */
#define REG_GMAC_ST2CW04        (*(__IO uint32_t*)0xF8008720U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 4 */
#define REG_GMAC_ST2CW14        (*(__IO uint32_t*)0xF8008724U) /**< (GMAC) Screening Type 2 Compare Word 1 Register 4 */
#define REG_GMAC_ST2CW05        (*(__IO uint32_t*)0xF8008728U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 5 */
#define REG_GMAC_ST2CW15        (*(__IO uint32_t*)0xF800872CU) /**< (GMAC) Screening Type 2 Compare Word 1 Register 5 */
#define REG_GMAC_ST2CW06        (*(__IO uint32_t*)0xF8008730U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 6 */
#define REG_GMAC_ST2CW16        (*(__IO uint32_t*)0xF8008734U) /**< (GMAC) Screening Type 2 Compare Word 1 Register 6 */
#define REG_GMAC_ST2CW07        (*(__IO uint32_t*)0xF8008738U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 7 */
#define REG_GMAC_ST2CW17        (*(__IO uint32_t*)0xF800873CU) /**< (GMAC) Screening Type 2 Compare Word 1 Register 7 */
#define REG_GMAC_ST2CW08        (*(__IO uint32_t*)0xF8008740U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 8 */
#define REG_GMAC_ST2CW18        (*(__IO uint32_t*)0xF8008744U) /**< (GMAC) Screening Type 2 Compare Word 1 Register 8 */
#define REG_GMAC_ST2CW09        (*(__IO uint32_t*)0xF8008748U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 9 */
#define REG_GMAC_ST2CW19        (*(__IO uint32_t*)0xF800874CU) /**< (GMAC) Screening Type 2 Compare Word 1 Register 9 */
#define REG_GMAC_ST2CW010       (*(__IO uint32_t*)0xF8008750U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 10 */
#define REG_GMAC_ST2CW110       (*(__IO uint32_t*)0xF8008754U) /**< (GMAC) Screening Type 2 Compare Word 1 Register 10 */
#define REG_GMAC_ST2CW011       (*(__IO uint32_t*)0xF8008758U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 11 */
#define REG_GMAC_ST2CW111       (*(__IO uint32_t*)0xF800875CU) /**< (GMAC) Screening Type 2 Compare Word 1 Register 11 */
#define REG_GMAC_ST2CW012       (*(__IO uint32_t*)0xF8008760U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 12 */
#define REG_GMAC_ST2CW112       (*(__IO uint32_t*)0xF8008764U) /**< (GMAC) Screening Type 2 Compare Word 1 Register 12 */
#define REG_GMAC_ST2CW013       (*(__IO uint32_t*)0xF8008768U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 13 */
#define REG_GMAC_ST2CW113       (*(__IO uint32_t*)0xF800876CU) /**< (GMAC) Screening Type 2 Compare Word 1 Register 13 */
#define REG_GMAC_ST2CW014       (*(__IO uint32_t*)0xF8008770U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 14 */
#define REG_GMAC_ST2CW114       (*(__IO uint32_t*)0xF8008774U) /**< (GMAC) Screening Type 2 Compare Word 1 Register 14 */
#define REG_GMAC_ST2CW015       (*(__IO uint32_t*)0xF8008778U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 15 */
#define REG_GMAC_ST2CW115       (*(__IO uint32_t*)0xF800877CU) /**< (GMAC) Screening Type 2 Compare Word 1 Register 15 */
#define REG_GMAC_ST2CW016       (*(__IO uint32_t*)0xF8008780U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 16 */
#define REG_GMAC_ST2CW116       (*(__IO uint32_t*)0xF8008784U) /**< (GMAC) Screening Type 2 Compare Word 1 Register 16 */
#define REG_GMAC_ST2CW017       (*(__IO uint32_t*)0xF8008788U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 17 */
#define REG_GMAC_ST2CW117       (*(__IO uint32_t*)0xF800878CU) /**< (GMAC) Screening Type 2 Compare Word 1 Register 17 */
#define REG_GMAC_ST2CW018       (*(__IO uint32_t*)0xF8008790U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 18 */
#define REG_GMAC_ST2CW118       (*(__IO uint32_t*)0xF8008794U) /**< (GMAC) Screening Type 2 Compare Word 1 Register 18 */
#define REG_GMAC_ST2CW019       (*(__IO uint32_t*)0xF8008798U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 19 */
#define REG_GMAC_ST2CW119       (*(__IO uint32_t*)0xF800879CU) /**< (GMAC) Screening Type 2 Compare Word 1 Register 19 */
#define REG_GMAC_ST2CW020       (*(__IO uint32_t*)0xF80087A0U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 20 */
#define REG_GMAC_ST2CW120       (*(__IO uint32_t*)0xF80087A4U) /**< (GMAC) Screening Type 2 Compare Word 1 Register 20 */
#define REG_GMAC_ST2CW021       (*(__IO uint32_t*)0xF80087A8U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 21 */
#define REG_GMAC_ST2CW121       (*(__IO uint32_t*)0xF80087ACU) /**< (GMAC) Screening Type 2 Compare Word 1 Register 21 */
#define REG_GMAC_ST2CW022       (*(__IO uint32_t*)0xF80087B0U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 22 */
#define REG_GMAC_ST2CW122       (*(__IO uint32_t*)0xF80087B4U) /**< (GMAC) Screening Type 2 Compare Word 1 Register 22 */
#define REG_GMAC_ST2CW023       (*(__IO uint32_t*)0xF80087B8U) /**< (GMAC) Screening Type 2 Compare Word 0 Register 23 */
#define REG_GMAC_ST2CW123       (*(__IO uint32_t*)0xF80087BCU) /**< (GMAC) Screening Type 2 Compare Word 1 Register 23 */
#define REG_GMAC_NCR            (*(__IO uint32_t*)0xF8008000U) /**< (GMAC) Network Control Register */
#define REG_GMAC_NCFGR          (*(__IO uint32_t*)0xF8008004U) /**< (GMAC) Network Configuration Register */
#define REG_GMAC_NSR            (*(__I  uint32_t*)0xF8008008U) /**< (GMAC) Network Status Register */
#define REG_GMAC_UR             (*(__IO uint32_t*)0xF800800CU) /**< (GMAC) User Register */
#define REG_GMAC_DCFGR          (*(__IO uint32_t*)0xF8008010U) /**< (GMAC) DMA Configuration Register */
#define REG_GMAC_TSR            (*(__IO uint32_t*)0xF8008014U) /**< (GMAC) Transmit Status Register */
#define REG_GMAC_RBQB           (*(__IO uint32_t*)0xF8008018U) /**< (GMAC) Receive Buffer Queue Base Address Register */
#define REG_GMAC_TBQB           (*(__IO uint32_t*)0xF800801CU) /**< (GMAC) Transmit Buffer Queue Base Address Register */
#define REG_GMAC_RSR            (*(__IO uint32_t*)0xF8008020U) /**< (GMAC) Receive Status Register */
#define REG_GMAC_ISR            (*(__I  uint32_t*)0xF8008024U) /**< (GMAC) Interrupt Status Register */
#define REG_GMAC_IER            (*(__O  uint32_t*)0xF8008028U) /**< (GMAC) Interrupt Enable Register */
#define REG_GMAC_IDR            (*(__O  uint32_t*)0xF800802CU) /**< (GMAC) Interrupt Disable Register */
#define REG_GMAC_IMR            (*(__IO uint32_t*)0xF8008030U) /**< (GMAC) Interrupt Mask Register */
#define REG_GMAC_MAN            (*(__IO uint32_t*)0xF8008034U) /**< (GMAC) PHY Maintenance Register */
#define REG_GMAC_RPQ            (*(__I  uint32_t*)0xF8008038U) /**< (GMAC) Received Pause Quantum Register */
#define REG_GMAC_TPQ            (*(__IO uint32_t*)0xF800803CU) /**< (GMAC) Transmit Pause Quantum Register */
#define REG_GMAC_TPSF           (*(__IO uint32_t*)0xF8008040U) /**< (GMAC) TX Partial Store and Forward Register */
#define REG_GMAC_RPSF           (*(__IO uint32_t*)0xF8008044U) /**< (GMAC) RX Partial Store and Forward Register */
#define REG_GMAC_RJFML          (*(__IO uint32_t*)0xF8008048U) /**< (GMAC) RX Jumbo Frame Max Length Register */
#define REG_GMAC_HRB            (*(__IO uint32_t*)0xF8008080U) /**< (GMAC) Hash Register Bottom */
#define REG_GMAC_HRT            (*(__IO uint32_t*)0xF8008084U) /**< (GMAC) Hash Register Top */
#define REG_GMAC_TIDM1          (*(__IO uint32_t*)0xF80080A8U) /**< (GMAC) Type ID Match 1 Register */
#define REG_GMAC_TIDM2          (*(__IO uint32_t*)0xF80080ACU) /**< (GMAC) Type ID Match 2 Register */
#define REG_GMAC_TIDM3          (*(__IO uint32_t*)0xF80080B0U) /**< (GMAC) Type ID Match 3 Register */
#define REG_GMAC_TIDM4          (*(__IO uint32_t*)0xF80080B4U) /**< (GMAC) Type ID Match 4 Register */
#define REG_GMAC_WOL            (*(__IO uint32_t*)0xF80080B8U) /**< (GMAC) Wake on LAN Register */
#define REG_GMAC_IPGS           (*(__IO uint32_t*)0xF80080BCU) /**< (GMAC) IPG Stretch Register */
#define REG_GMAC_SVLAN          (*(__IO uint32_t*)0xF80080C0U) /**< (GMAC) Stacked VLAN Register */
#define REG_GMAC_TPFCP          (*(__IO uint32_t*)0xF80080C4U) /**< (GMAC) Transmit PFC Pause Register */
#define REG_GMAC_SAMB1          (*(__IO uint32_t*)0xF80080C8U) /**< (GMAC) Specific Address 1 Mask Bottom Register */
#define REG_GMAC_SAMT1          (*(__IO uint32_t*)0xF80080CCU) /**< (GMAC) Specific Address 1 Mask Top Register */
#define REG_GMAC_NSC            (*(__IO uint32_t*)0xF80080DCU) /**< (GMAC) 1588 Timer Nanosecond Comparison Register */
#define REG_GMAC_SCL            (*(__IO uint32_t*)0xF80080E0U) /**< (GMAC) 1588 Timer Second Comparison Low Register */
#define REG_GMAC_SCH            (*(__IO uint32_t*)0xF80080E4U) /**< (GMAC) 1588 Timer Second Comparison High Register */
#define REG_GMAC_EFTSH          (*(__I  uint32_t*)0xF80080E8U) /**< (GMAC) PTP Event Frame Transmitted Seconds High Register */
#define REG_GMAC_EFRSH          (*(__I  uint32_t*)0xF80080ECU) /**< (GMAC) PTP Event Frame Received Seconds High Register */
#define REG_GMAC_PEFTSH         (*(__I  uint32_t*)0xF80080F0U) /**< (GMAC) PTP Peer Event Frame Transmitted Seconds High Register */
#define REG_GMAC_PEFRSH         (*(__I  uint32_t*)0xF80080F4U) /**< (GMAC) PTP Peer Event Frame Received Seconds High Register */
#define REG_GMAC_OTLO           (*(__I  uint32_t*)0xF8008100U) /**< (GMAC) Octets Transmitted Low Register */
#define REG_GMAC_OTHI           (*(__I  uint32_t*)0xF8008104U) /**< (GMAC) Octets Transmitted High Register */
#define REG_GMAC_FT             (*(__I  uint32_t*)0xF8008108U) /**< (GMAC) Frames Transmitted Register */
#define REG_GMAC_BCFT           (*(__I  uint32_t*)0xF800810CU) /**< (GMAC) Broadcast Frames Transmitted Register */
#define REG_GMAC_MFT            (*(__I  uint32_t*)0xF8008110U) /**< (GMAC) Multicast Frames Transmitted Register */
#define REG_GMAC_PFT            (*(__I  uint32_t*)0xF8008114U) /**< (GMAC) Pause Frames Transmitted Register */
#define REG_GMAC_BFT64          (*(__I  uint32_t*)0xF8008118U) /**< (GMAC) 64 Byte Frames Transmitted Register */
#define REG_GMAC_TBFT127        (*(__I  uint32_t*)0xF800811CU) /**< (GMAC) 65 to 127 Byte Frames Transmitted Register */
#define REG_GMAC_TBFT255        (*(__I  uint32_t*)0xF8008120U) /**< (GMAC) 128 to 255 Byte Frames Transmitted Register */
#define REG_GMAC_TBFT511        (*(__I  uint32_t*)0xF8008124U) /**< (GMAC) 256 to 511 Byte Frames Transmitted Register */
#define REG_GMAC_TBFT1023       (*(__I  uint32_t*)0xF8008128U) /**< (GMAC) 512 to 1023 Byte Frames Transmitted Register */
#define REG_GMAC_TBFT1518       (*(__I  uint32_t*)0xF800812CU) /**< (GMAC) 1024 to 1518 Byte Frames Transmitted Register */
#define REG_GMAC_GTBFT1518      (*(__I  uint32_t*)0xF8008130U) /**< (GMAC) Greater Than 1518 Byte Frames Transmitted Register */
#define REG_GMAC_TUR            (*(__I  uint32_t*)0xF8008134U) /**< (GMAC) Transmit Underruns Register */
#define REG_GMAC_SCF            (*(__I  uint32_t*)0xF8008138U) /**< (GMAC) Single Collision Frames Register */
#define REG_GMAC_MCF            (*(__I  uint32_t*)0xF800813CU) /**< (GMAC) Multiple Collision Frames Register */
#define REG_GMAC_EC             (*(__I  uint32_t*)0xF8008140U) /**< (GMAC) Excessive Collisions Register */
#define REG_GMAC_LC             (*(__I  uint32_t*)0xF8008144U) /**< (GMAC) Late Collisions Register */
#define REG_GMAC_DTF            (*(__I  uint32_t*)0xF8008148U) /**< (GMAC) Deferred Transmission Frames Register */
#define REG_GMAC_CSE            (*(__I  uint32_t*)0xF800814CU) /**< (GMAC) Carrier Sense Errors Register */
#define REG_GMAC_ORLO           (*(__I  uint32_t*)0xF8008150U) /**< (GMAC) Octets Received Low Received Register */
#define REG_GMAC_ORHI           (*(__I  uint32_t*)0xF8008154U) /**< (GMAC) Octets Received High Received Register */
#define REG_GMAC_FR             (*(__I  uint32_t*)0xF8008158U) /**< (GMAC) Frames Received Register */
#define REG_GMAC_BCFR           (*(__I  uint32_t*)0xF800815CU) /**< (GMAC) Broadcast Frames Received Register */
#define REG_GMAC_MFR            (*(__I  uint32_t*)0xF8008160U) /**< (GMAC) Multicast Frames Received Register */
#define REG_GMAC_PFR            (*(__I  uint32_t*)0xF8008164U) /**< (GMAC) Pause Frames Received Register */
#define REG_GMAC_BFR64          (*(__I  uint32_t*)0xF8008168U) /**< (GMAC) 64 Byte Frames Received Register */
#define REG_GMAC_TBFR127        (*(__I  uint32_t*)0xF800816CU) /**< (GMAC) 65 to 127 Byte Frames Received Register */
#define REG_GMAC_TBFR255        (*(__I  uint32_t*)0xF8008170U) /**< (GMAC) 128 to 255 Byte Frames Received Register */
#define REG_GMAC_TBFR511        (*(__I  uint32_t*)0xF8008174U) /**< (GMAC) 256 to 511 Byte Frames Received Register */
#define REG_GMAC_TBFR1023       (*(__I  uint32_t*)0xF8008178U) /**< (GMAC) 512 to 1023 Byte Frames Received Register */
#define REG_GMAC_TBFR1518       (*(__I  uint32_t*)0xF800817CU) /**< (GMAC) 1024 to 1518 Byte Frames Received Register */
#define REG_GMAC_TMXBFR         (*(__I  uint32_t*)0xF8008180U) /**< (GMAC) 1519 to Maximum Byte Frames Received Register */
#define REG_GMAC_UFR            (*(__I  uint32_t*)0xF8008184U) /**< (GMAC) Undersize Frames Received Register */
#define REG_GMAC_OFR            (*(__I  uint32_t*)0xF8008188U) /**< (GMAC) Oversize Frames Received Register */
#define REG_GMAC_JR             (*(__I  uint32_t*)0xF800818CU) /**< (GMAC) Jabbers Received Register */
#define REG_GMAC_FCSE           (*(__I  uint32_t*)0xF8008190U) /**< (GMAC) Frame Check Sequence Errors Register */
#define REG_GMAC_LFFE           (*(__I  uint32_t*)0xF8008194U) /**< (GMAC) Length Field Frame Errors Register */
#define REG_GMAC_RSE            (*(__I  uint32_t*)0xF8008198U) /**< (GMAC) Receive Symbol Errors Register */
#define REG_GMAC_AE             (*(__I  uint32_t*)0xF800819CU) /**< (GMAC) Alignment Errors Register */
#define REG_GMAC_RRE            (*(__I  uint32_t*)0xF80081A0U) /**< (GMAC) Receive Resource Errors Register */
#define REG_GMAC_ROE            (*(__I  uint32_t*)0xF80081A4U) /**< (GMAC) Receive Overrun Register */
#define REG_GMAC_IHCE           (*(__I  uint32_t*)0xF80081A8U) /**< (GMAC) IP Header Checksum Errors Register */
#define REG_GMAC_TCE            (*(__I  uint32_t*)0xF80081ACU) /**< (GMAC) TCP Checksum Errors Register */
#define REG_GMAC_UCE            (*(__I  uint32_t*)0xF80081B0U) /**< (GMAC) UDP Checksum Errors Register */
#define REG_GMAC_TISUBN         (*(__IO uint32_t*)0xF80081BCU) /**< (GMAC) 1588 Timer Increment Sub-nanoseconds Register */
#define REG_GMAC_TSH            (*(__IO uint32_t*)0xF80081C0U) /**< (GMAC) 1588 Timer Seconds High Register */
#define REG_GMAC_TSL            (*(__IO uint32_t*)0xF80081D0U) /**< (GMAC) 1588 Timer Seconds Low Register */
#define REG_GMAC_TN             (*(__IO uint32_t*)0xF80081D4U) /**< (GMAC) 1588 Timer Nanoseconds Register */
#define REG_GMAC_TA             (*(__O  uint32_t*)0xF80081D8U) /**< (GMAC) 1588 Timer Adjust Register */
#define REG_GMAC_TI             (*(__IO uint32_t*)0xF80081DCU) /**< (GMAC) 1588 Timer Increment Register */
#define REG_GMAC_EFTSL          (*(__I  uint32_t*)0xF80081E0U) /**< (GMAC) PTP Event Frame Transmitted Seconds Low Register */
#define REG_GMAC_EFTN           (*(__I  uint32_t*)0xF80081E4U) /**< (GMAC) PTP Event Frame Transmitted Nanoseconds Register */
#define REG_GMAC_EFRSL          (*(__I  uint32_t*)0xF80081E8U) /**< (GMAC) PTP Event Frame Received Seconds Low Register */
#define REG_GMAC_EFRN           (*(__I  uint32_t*)0xF80081ECU) /**< (GMAC) PTP Event Frame Received Nanoseconds Register */
#define REG_GMAC_PEFTSL         (*(__I  uint32_t*)0xF80081F0U) /**< (GMAC) PTP Peer Event Frame Transmitted Seconds Low Register */
#define REG_GMAC_PEFTN          (*(__I  uint32_t*)0xF80081F4U) /**< (GMAC) PTP Peer Event Frame Transmitted Nanoseconds Register */
#define REG_GMAC_PEFRSL         (*(__I  uint32_t*)0xF80081F8U) /**< (GMAC) PTP Peer Event Frame Received Seconds Low Register */
#define REG_GMAC_PEFRN          (*(__I  uint32_t*)0xF80081FCU) /**< (GMAC) PTP Peer Event Frame Received Nanoseconds Register */
#define REG_GMAC_RXLPI          (*(__I  uint32_t*)0xF8008270U) /**< (GMAC) Received LPI Transitions */
#define REG_GMAC_RXLPITIME      (*(__I  uint32_t*)0xF8008274U) /**< (GMAC) Received LPI Time */
#define REG_GMAC_TXLPI          (*(__I  uint32_t*)0xF8008278U) /**< (GMAC) Transmit LPI Transitions */
#define REG_GMAC_TXLPITIME      (*(__I  uint32_t*)0xF800827CU) /**< (GMAC) Transmit LPI Time */
#define REG_GMAC_ISRPQ          (*(__I  uint32_t*)0xF8008400U) /**< (GMAC) Interrupt Status Register Priority Queue (1..2) */
#define REG_GMAC_ISRPQ0         (*(__I  uint32_t*)0xF8008400U) /**< (GMAC) Interrupt Status Register Priority Queue (1..2) 0 */
#define REG_GMAC_ISRPQ1         (*(__I  uint32_t*)0xF8008404U) /**< (GMAC) Interrupt Status Register Priority Queue (1..2) 1 */
#define REG_GMAC_TBQBAPQ        (*(__IO uint32_t*)0xF8008440U) /**< (GMAC) Transmit Buffer Queue Base Address Register Priority Queue (1..2) */
#define REG_GMAC_TBQBAPQ0       (*(__IO uint32_t*)0xF8008440U) /**< (GMAC) Transmit Buffer Queue Base Address Register Priority Queue (1..2) 0 */
#define REG_GMAC_TBQBAPQ1       (*(__IO uint32_t*)0xF8008444U) /**< (GMAC) Transmit Buffer Queue Base Address Register Priority Queue (1..2) 1 */
#define REG_GMAC_RBQBAPQ        (*(__IO uint32_t*)0xF8008480U) /**< (GMAC) Receive Buffer Queue Base Address Register Priority Queue (1..2) */
#define REG_GMAC_RBQBAPQ0       (*(__IO uint32_t*)0xF8008480U) /**< (GMAC) Receive Buffer Queue Base Address Register Priority Queue (1..2) 0 */
#define REG_GMAC_RBQBAPQ1       (*(__IO uint32_t*)0xF8008484U) /**< (GMAC) Receive Buffer Queue Base Address Register Priority Queue (1..2) 1 */
#define REG_GMAC_RBSRPQ         (*(__IO uint32_t*)0xF80084A0U) /**< (GMAC) Receive Buffer Size Register Priority Queue (1..2) */
#define REG_GMAC_RBSRPQ0        (*(__IO uint32_t*)0xF80084A0U) /**< (GMAC) Receive Buffer Size Register Priority Queue (1..2) 0 */
#define REG_GMAC_RBSRPQ1        (*(__IO uint32_t*)0xF80084A4U) /**< (GMAC) Receive Buffer Size Register Priority Queue (1..2) 1 */
#define REG_GMAC_CBSCR          (*(__IO uint32_t*)0xF80084BCU) /**< (GMAC) Credit-Based Shaping Control Register */
#define REG_GMAC_CBSISQA        (*(__IO uint32_t*)0xF80084C0U) /**< (GMAC) Credit-Based Shaping IdleSlope Register for Queue A */
#define REG_GMAC_CBSISQB        (*(__IO uint32_t*)0xF80084C4U) /**< (GMAC) Credit-Based Shaping IdleSlope Register for Queue B */
#define REG_GMAC_ST1RPQ         (*(__IO uint32_t*)0xF8008500U) /**< (GMAC) Screening Type 1 Register Priority Queue */
#define REG_GMAC_ST1RPQ0        (*(__IO uint32_t*)0xF8008500U) /**< (GMAC) Screening Type 1 Register Priority Queue 0 */
#define REG_GMAC_ST1RPQ1        (*(__IO uint32_t*)0xF8008504U) /**< (GMAC) Screening Type 1 Register Priority Queue 1 */
#define REG_GMAC_ST1RPQ2        (*(__IO uint32_t*)0xF8008508U) /**< (GMAC) Screening Type 1 Register Priority Queue 2 */
#define REG_GMAC_ST1RPQ3        (*(__IO uint32_t*)0xF800850CU) /**< (GMAC) Screening Type 1 Register Priority Queue 3 */
#define REG_GMAC_ST2RPQ         (*(__IO uint32_t*)0xF8008540U) /**< (GMAC) Screening Type 2 Register Priority Queue */
#define REG_GMAC_ST2RPQ0        (*(__IO uint32_t*)0xF8008540U) /**< (GMAC) Screening Type 2 Register Priority Queue 0 */
#define REG_GMAC_ST2RPQ1        (*(__IO uint32_t*)0xF8008544U) /**< (GMAC) Screening Type 2 Register Priority Queue 1 */
#define REG_GMAC_ST2RPQ2        (*(__IO uint32_t*)0xF8008548U) /**< (GMAC) Screening Type 2 Register Priority Queue 2 */
#define REG_GMAC_ST2RPQ3        (*(__IO uint32_t*)0xF800854CU) /**< (GMAC) Screening Type 2 Register Priority Queue 3 */
#define REG_GMAC_ST2RPQ4        (*(__IO uint32_t*)0xF8008550U) /**< (GMAC) Screening Type 2 Register Priority Queue 4 */
#define REG_GMAC_ST2RPQ5        (*(__IO uint32_t*)0xF8008554U) /**< (GMAC) Screening Type 2 Register Priority Queue 5 */
#define REG_GMAC_ST2RPQ6        (*(__IO uint32_t*)0xF8008558U) /**< (GMAC) Screening Type 2 Register Priority Queue 6 */
#define REG_GMAC_ST2RPQ7        (*(__IO uint32_t*)0xF800855CU) /**< (GMAC) Screening Type 2 Register Priority Queue 7 */
#define REG_GMAC_IERPQ          (*(__O  uint32_t*)0xF8008600U) /**< (GMAC) Interrupt Enable Register Priority Queue (1..2) */
#define REG_GMAC_IERPQ0         (*(__O  uint32_t*)0xF8008600U) /**< (GMAC) Interrupt Enable Register Priority Queue (1..2) 0 */
#define REG_GMAC_IERPQ1         (*(__O  uint32_t*)0xF8008604U) /**< (GMAC) Interrupt Enable Register Priority Queue (1..2) 1 */
#define REG_GMAC_IDRPQ          (*(__O  uint32_t*)0xF8008620U) /**< (GMAC) Interrupt Disable Register Priority Queue (1..2) */
#define REG_GMAC_IDRPQ0         (*(__O  uint32_t*)0xF8008620U) /**< (GMAC) Interrupt Disable Register Priority Queue (1..2) 0 */
#define REG_GMAC_IDRPQ1         (*(__O  uint32_t*)0xF8008624U) /**< (GMAC) Interrupt Disable Register Priority Queue (1..2) 1 */
#define REG_GMAC_IMRPQ          (*(__IO uint32_t*)0xF8008640U) /**< (GMAC) Interrupt Mask Register Priority Queue (1..2) */
#define REG_GMAC_IMRPQ0         (*(__IO uint32_t*)0xF8008640U) /**< (GMAC) Interrupt Mask Register Priority Queue (1..2) 0 */
#define REG_GMAC_IMRPQ1         (*(__IO uint32_t*)0xF8008644U) /**< (GMAC) Interrupt Mask Register Priority Queue (1..2) 1 */
#define REG_GMAC_ST2ER          (*(__IO uint32_t*)0xF80086E0U) /**< (GMAC) Screening Type 2 Ethertype Register */
#define REG_GMAC_ST2ER0         (*(__IO uint32_t*)0xF80086E0U) /**< (GMAC) Screening Type 2 Ethertype Register 0 */
#define REG_GMAC_ST2ER1         (*(__IO uint32_t*)0xF80086E4U) /**< (GMAC) Screening Type 2 Ethertype Register 1 */
#define REG_GMAC_ST2ER2         (*(__IO uint32_t*)0xF80086E8U) /**< (GMAC) Screening Type 2 Ethertype Register 2 */
#define REG_GMAC_ST2ER3         (*(__IO uint32_t*)0xF80086ECU) /**< (GMAC) Screening Type 2 Ethertype Register 3 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for GMAC peripheral ========== */
#define GMAC_INSTANCE_ID                         5          
#define GMAC_CLOCK_ID                            5          

#endif /* _SAMA5D2_GMAC_INSTANCE_ */
