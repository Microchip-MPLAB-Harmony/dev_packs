/**
 * \file
 *
 * \brief Instance description for UDPHS
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
#ifndef _SAMA5D2_UDPHS_INSTANCE_H_
#define _SAMA5D2_UDPHS_INSTANCE_H_

/* ========== Register definition for UDPHS peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_UDPHS_EPTCFG0       (0xFC02C100) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 0 */
#define REG_UDPHS_EPTCTLENB0    (0xFC02C104) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 0 */
#define REG_UDPHS_EPTCTLDIS0    (0xFC02C108) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 0 */
#define REG_UDPHS_EPTCTL0       (0xFC02C10C) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 0 */
#define REG_UDPHS_EPTSETSTA0    (0xFC02C114) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 0 */
#define REG_UDPHS_EPTCLRSTA0    (0xFC02C118) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 0 */
#define REG_UDPHS_EPTSTA0       (0xFC02C11C) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 0 */
#define REG_UDPHS_EPTCFG1       (0xFC02C120) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 1 */
#define REG_UDPHS_EPTCTLENB1    (0xFC02C124) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 1 */
#define REG_UDPHS_EPTCTLDIS1    (0xFC02C128) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 1 */
#define REG_UDPHS_EPTCTL1       (0xFC02C12C) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 1 */
#define REG_UDPHS_EPTSETSTA1    (0xFC02C134) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 1 */
#define REG_UDPHS_EPTCLRSTA1    (0xFC02C138) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 1 */
#define REG_UDPHS_EPTSTA1       (0xFC02C13C) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 1 */
#define REG_UDPHS_EPTCFG2       (0xFC02C140) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 2 */
#define REG_UDPHS_EPTCTLENB2    (0xFC02C144) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 2 */
#define REG_UDPHS_EPTCTLDIS2    (0xFC02C148) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 2 */
#define REG_UDPHS_EPTCTL2       (0xFC02C14C) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 2 */
#define REG_UDPHS_EPTSETSTA2    (0xFC02C154) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 2 */
#define REG_UDPHS_EPTCLRSTA2    (0xFC02C158) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 2 */
#define REG_UDPHS_EPTSTA2       (0xFC02C15C) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 2 */
#define REG_UDPHS_EPTCFG3       (0xFC02C160) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 3 */
#define REG_UDPHS_EPTCTLENB3    (0xFC02C164) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 3 */
#define REG_UDPHS_EPTCTLDIS3    (0xFC02C168) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 3 */
#define REG_UDPHS_EPTCTL3       (0xFC02C16C) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 3 */
#define REG_UDPHS_EPTSETSTA3    (0xFC02C174) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 3 */
#define REG_UDPHS_EPTCLRSTA3    (0xFC02C178) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 3 */
#define REG_UDPHS_EPTSTA3       (0xFC02C17C) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 3 */
#define REG_UDPHS_EPTCFG4       (0xFC02C180) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 4 */
#define REG_UDPHS_EPTCTLENB4    (0xFC02C184) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 4 */
#define REG_UDPHS_EPTCTLDIS4    (0xFC02C188) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 4 */
#define REG_UDPHS_EPTCTL4       (0xFC02C18C) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 4 */
#define REG_UDPHS_EPTSETSTA4    (0xFC02C194) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 4 */
#define REG_UDPHS_EPTCLRSTA4    (0xFC02C198) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 4 */
#define REG_UDPHS_EPTSTA4       (0xFC02C19C) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 4 */
#define REG_UDPHS_EPTCFG5       (0xFC02C1A0) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 5 */
#define REG_UDPHS_EPTCTLENB5    (0xFC02C1A4) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 5 */
#define REG_UDPHS_EPTCTLDIS5    (0xFC02C1A8) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 5 */
#define REG_UDPHS_EPTCTL5       (0xFC02C1AC) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 5 */
#define REG_UDPHS_EPTSETSTA5    (0xFC02C1B4) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 5 */
#define REG_UDPHS_EPTCLRSTA5    (0xFC02C1B8) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 5 */
#define REG_UDPHS_EPTSTA5       (0xFC02C1BC) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 5 */
#define REG_UDPHS_EPTCFG6       (0xFC02C1C0) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 6 */
#define REG_UDPHS_EPTCTLENB6    (0xFC02C1C4) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 6 */
#define REG_UDPHS_EPTCTLDIS6    (0xFC02C1C8) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 6 */
#define REG_UDPHS_EPTCTL6       (0xFC02C1CC) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 6 */
#define REG_UDPHS_EPTSETSTA6    (0xFC02C1D4) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 6 */
#define REG_UDPHS_EPTCLRSTA6    (0xFC02C1D8) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 6 */
#define REG_UDPHS_EPTSTA6       (0xFC02C1DC) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 6 */
#define REG_UDPHS_EPTCFG7       (0xFC02C1E0) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 7 */
#define REG_UDPHS_EPTCTLENB7    (0xFC02C1E4) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 7 */
#define REG_UDPHS_EPTCTLDIS7    (0xFC02C1E8) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 7 */
#define REG_UDPHS_EPTCTL7       (0xFC02C1EC) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 7 */
#define REG_UDPHS_EPTSETSTA7    (0xFC02C1F4) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 7 */
#define REG_UDPHS_EPTCLRSTA7    (0xFC02C1F8) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 7 */
#define REG_UDPHS_EPTSTA7       (0xFC02C1FC) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 7 */
#define REG_UDPHS_EPTCFG8       (0xFC02C200) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 8 */
#define REG_UDPHS_EPTCTLENB8    (0xFC02C204) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 8 */
#define REG_UDPHS_EPTCTLDIS8    (0xFC02C208) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 8 */
#define REG_UDPHS_EPTCTL8       (0xFC02C20C) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 8 */
#define REG_UDPHS_EPTSETSTA8    (0xFC02C214) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 8 */
#define REG_UDPHS_EPTCLRSTA8    (0xFC02C218) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 8 */
#define REG_UDPHS_EPTSTA8       (0xFC02C21C) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 8 */
#define REG_UDPHS_EPTCFG9       (0xFC02C220) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 9 */
#define REG_UDPHS_EPTCTLENB9    (0xFC02C224) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 9 */
#define REG_UDPHS_EPTCTLDIS9    (0xFC02C228) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 9 */
#define REG_UDPHS_EPTCTL9       (0xFC02C22C) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 9 */
#define REG_UDPHS_EPTSETSTA9    (0xFC02C234) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 9 */
#define REG_UDPHS_EPTCLRSTA9    (0xFC02C238) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 9 */
#define REG_UDPHS_EPTSTA9       (0xFC02C23C) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 9 */
#define REG_UDPHS_EPTCFG10      (0xFC02C240) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 10 */
#define REG_UDPHS_EPTCTLENB10   (0xFC02C244) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 10 */
#define REG_UDPHS_EPTCTLDIS10   (0xFC02C248) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 10 */
#define REG_UDPHS_EPTCTL10      (0xFC02C24C) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 10 */
#define REG_UDPHS_EPTSETSTA10   (0xFC02C254) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 10 */
#define REG_UDPHS_EPTCLRSTA10   (0xFC02C258) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 10 */
#define REG_UDPHS_EPTSTA10      (0xFC02C25C) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 10 */
#define REG_UDPHS_EPTCFG11      (0xFC02C260) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 11 */
#define REG_UDPHS_EPTCTLENB11   (0xFC02C264) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 11 */
#define REG_UDPHS_EPTCTLDIS11   (0xFC02C268) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 11 */
#define REG_UDPHS_EPTCTL11      (0xFC02C26C) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 11 */
#define REG_UDPHS_EPTSETSTA11   (0xFC02C274) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 11 */
#define REG_UDPHS_EPTCLRSTA11   (0xFC02C278) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 11 */
#define REG_UDPHS_EPTSTA11      (0xFC02C27C) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 11 */
#define REG_UDPHS_EPTCFG12      (0xFC02C280) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 12 */
#define REG_UDPHS_EPTCTLENB12   (0xFC02C284) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 12 */
#define REG_UDPHS_EPTCTLDIS12   (0xFC02C288) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 12 */
#define REG_UDPHS_EPTCTL12      (0xFC02C28C) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 12 */
#define REG_UDPHS_EPTSETSTA12   (0xFC02C294) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 12 */
#define REG_UDPHS_EPTCLRSTA12   (0xFC02C298) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 12 */
#define REG_UDPHS_EPTSTA12      (0xFC02C29C) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 12 */
#define REG_UDPHS_EPTCFG13      (0xFC02C2A0) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 13 */
#define REG_UDPHS_EPTCTLENB13   (0xFC02C2A4) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 13 */
#define REG_UDPHS_EPTCTLDIS13   (0xFC02C2A8) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 13 */
#define REG_UDPHS_EPTCTL13      (0xFC02C2AC) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 13 */
#define REG_UDPHS_EPTSETSTA13   (0xFC02C2B4) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 13 */
#define REG_UDPHS_EPTCLRSTA13   (0xFC02C2B8) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 13 */
#define REG_UDPHS_EPTSTA13      (0xFC02C2BC) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 13 */
#define REG_UDPHS_EPTCFG14      (0xFC02C2C0) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 14 */
#define REG_UDPHS_EPTCTLENB14   (0xFC02C2C4) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 14 */
#define REG_UDPHS_EPTCTLDIS14   (0xFC02C2C8) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 14 */
#define REG_UDPHS_EPTCTL14      (0xFC02C2CC) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 14 */
#define REG_UDPHS_EPTSETSTA14   (0xFC02C2D4) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 14 */
#define REG_UDPHS_EPTCLRSTA14   (0xFC02C2D8) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 14 */
#define REG_UDPHS_EPTSTA14      (0xFC02C2DC) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 14 */
#define REG_UDPHS_EPTCFG15      (0xFC02C2E0) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 15 */
#define REG_UDPHS_EPTCTLENB15   (0xFC02C2E4) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 15 */
#define REG_UDPHS_EPTCTLDIS15   (0xFC02C2E8) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 15 */
#define REG_UDPHS_EPTCTL15      (0xFC02C2EC) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 15 */
#define REG_UDPHS_EPTSETSTA15   (0xFC02C2F4) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 15 */
#define REG_UDPHS_EPTCLRSTA15   (0xFC02C2F8) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 15 */
#define REG_UDPHS_EPTSTA15      (0xFC02C2FC) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 15 */
#define REG_UDPHS_DMANXTDSC0    (0xFC02C300) /**< (UDPHS) UDPHS DMA Next Descriptor Address Register (channel = 0) 0 */
#define REG_UDPHS_DMAADDRESS0   (0xFC02C304) /**< (UDPHS) UDPHS DMA Channel Address Register (channel = 0) 0 */
#define REG_UDPHS_DMACONTROL0   (0xFC02C308) /**< (UDPHS) UDPHS DMA Channel Control Register (channel = 0) 0 */
#define REG_UDPHS_DMASTATUS0    (0xFC02C30C) /**< (UDPHS) UDPHS DMA Channel Status Register (channel = 0) 0 */
#define REG_UDPHS_DMANXTDSC1    (0xFC02C310) /**< (UDPHS) UDPHS DMA Next Descriptor Address Register (channel = 0) 1 */
#define REG_UDPHS_DMAADDRESS1   (0xFC02C314) /**< (UDPHS) UDPHS DMA Channel Address Register (channel = 0) 1 */
#define REG_UDPHS_DMACONTROL1   (0xFC02C318) /**< (UDPHS) UDPHS DMA Channel Control Register (channel = 0) 1 */
#define REG_UDPHS_DMASTATUS1    (0xFC02C31C) /**< (UDPHS) UDPHS DMA Channel Status Register (channel = 0) 1 */
#define REG_UDPHS_DMANXTDSC2    (0xFC02C320) /**< (UDPHS) UDPHS DMA Next Descriptor Address Register (channel = 0) 2 */
#define REG_UDPHS_DMAADDRESS2   (0xFC02C324) /**< (UDPHS) UDPHS DMA Channel Address Register (channel = 0) 2 */
#define REG_UDPHS_DMACONTROL2   (0xFC02C328) /**< (UDPHS) UDPHS DMA Channel Control Register (channel = 0) 2 */
#define REG_UDPHS_DMASTATUS2    (0xFC02C32C) /**< (UDPHS) UDPHS DMA Channel Status Register (channel = 0) 2 */
#define REG_UDPHS_DMANXTDSC3    (0xFC02C330) /**< (UDPHS) UDPHS DMA Next Descriptor Address Register (channel = 0) 3 */
#define REG_UDPHS_DMAADDRESS3   (0xFC02C334) /**< (UDPHS) UDPHS DMA Channel Address Register (channel = 0) 3 */
#define REG_UDPHS_DMACONTROL3   (0xFC02C338) /**< (UDPHS) UDPHS DMA Channel Control Register (channel = 0) 3 */
#define REG_UDPHS_DMASTATUS3    (0xFC02C33C) /**< (UDPHS) UDPHS DMA Channel Status Register (channel = 0) 3 */
#define REG_UDPHS_DMANXTDSC4    (0xFC02C340) /**< (UDPHS) UDPHS DMA Next Descriptor Address Register (channel = 0) 4 */
#define REG_UDPHS_DMAADDRESS4   (0xFC02C344) /**< (UDPHS) UDPHS DMA Channel Address Register (channel = 0) 4 */
#define REG_UDPHS_DMACONTROL4   (0xFC02C348) /**< (UDPHS) UDPHS DMA Channel Control Register (channel = 0) 4 */
#define REG_UDPHS_DMASTATUS4    (0xFC02C34C) /**< (UDPHS) UDPHS DMA Channel Status Register (channel = 0) 4 */
#define REG_UDPHS_DMANXTDSC5    (0xFC02C350) /**< (UDPHS) UDPHS DMA Next Descriptor Address Register (channel = 0) 5 */
#define REG_UDPHS_DMAADDRESS5   (0xFC02C354) /**< (UDPHS) UDPHS DMA Channel Address Register (channel = 0) 5 */
#define REG_UDPHS_DMACONTROL5   (0xFC02C358) /**< (UDPHS) UDPHS DMA Channel Control Register (channel = 0) 5 */
#define REG_UDPHS_DMASTATUS5    (0xFC02C35C) /**< (UDPHS) UDPHS DMA Channel Status Register (channel = 0) 5 */
#define REG_UDPHS_DMANXTDSC6    (0xFC02C360) /**< (UDPHS) UDPHS DMA Next Descriptor Address Register (channel = 0) 6 */
#define REG_UDPHS_DMAADDRESS6   (0xFC02C364) /**< (UDPHS) UDPHS DMA Channel Address Register (channel = 0) 6 */
#define REG_UDPHS_DMACONTROL6   (0xFC02C368) /**< (UDPHS) UDPHS DMA Channel Control Register (channel = 0) 6 */
#define REG_UDPHS_DMASTATUS6    (0xFC02C36C) /**< (UDPHS) UDPHS DMA Channel Status Register (channel = 0) 6 */
#define REG_UDPHS_CTRL          (0xFC02C000) /**< (UDPHS) UDPHS Control Register */
#define REG_UDPHS_FNUM          (0xFC02C004) /**< (UDPHS) UDPHS Frame Number Register */
#define REG_UDPHS_IEN           (0xFC02C010) /**< (UDPHS) UDPHS Interrupt Enable Register */
#define REG_UDPHS_INTSTA        (0xFC02C014) /**< (UDPHS) UDPHS Interrupt Status Register */
#define REG_UDPHS_CLRINT        (0xFC02C018) /**< (UDPHS) UDPHS Clear Interrupt Register */
#define REG_UDPHS_EPTRST        (0xFC02C01C) /**< (UDPHS) UDPHS Endpoints Reset Register */
#define REG_UDPHS_TST           (0xFC02C0E0) /**< (UDPHS) UDPHS Test Register */
#define REG_UDPHS_ADDRSIZE      (0xFC02C0EC) /**< (UDPHS) UDPHS IP Address Size Register */
#define REG_UDPHS_IPNAME        (0xFC02C0F0) /**< (UDPHS) UDPHS IP Name1 Register */
#define REG_UDPHS_IPNAME0       (0xFC02C0F0) /**< (UDPHS) UDPHS IP Name1 Register 0 */
#define REG_UDPHS_IPNAME1       (0xFC02C0F4) /**< (UDPHS) UDPHS IP Name1 Register 1 */
#define REG_UDPHS_FEATURES      (0xFC02C0F8) /**< (UDPHS) UDPHS Features Register */

#else

#define REG_UDPHS_EPTCFG0       (*(__IO uint32_t*)0xFC02C100U) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 0 */
#define REG_UDPHS_EPTCTLENB0    (*(__O  uint32_t*)0xFC02C104U) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 0 */
#define REG_UDPHS_EPTCTLDIS0    (*(__O  uint32_t*)0xFC02C108U) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 0 */
#define REG_UDPHS_EPTCTL0       (*(__I  uint32_t*)0xFC02C10CU) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 0 */
#define REG_UDPHS_EPTSETSTA0    (*(__O  uint32_t*)0xFC02C114U) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 0 */
#define REG_UDPHS_EPTCLRSTA0    (*(__O  uint32_t*)0xFC02C118U) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 0 */
#define REG_UDPHS_EPTSTA0       (*(__I  uint32_t*)0xFC02C11CU) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 0 */
#define REG_UDPHS_EPTCFG1       (*(__IO uint32_t*)0xFC02C120U) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 1 */
#define REG_UDPHS_EPTCTLENB1    (*(__O  uint32_t*)0xFC02C124U) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 1 */
#define REG_UDPHS_EPTCTLDIS1    (*(__O  uint32_t*)0xFC02C128U) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 1 */
#define REG_UDPHS_EPTCTL1       (*(__I  uint32_t*)0xFC02C12CU) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 1 */
#define REG_UDPHS_EPTSETSTA1    (*(__O  uint32_t*)0xFC02C134U) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 1 */
#define REG_UDPHS_EPTCLRSTA1    (*(__O  uint32_t*)0xFC02C138U) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 1 */
#define REG_UDPHS_EPTSTA1       (*(__I  uint32_t*)0xFC02C13CU) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 1 */
#define REG_UDPHS_EPTCFG2       (*(__IO uint32_t*)0xFC02C140U) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 2 */
#define REG_UDPHS_EPTCTLENB2    (*(__O  uint32_t*)0xFC02C144U) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 2 */
#define REG_UDPHS_EPTCTLDIS2    (*(__O  uint32_t*)0xFC02C148U) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 2 */
#define REG_UDPHS_EPTCTL2       (*(__I  uint32_t*)0xFC02C14CU) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 2 */
#define REG_UDPHS_EPTSETSTA2    (*(__O  uint32_t*)0xFC02C154U) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 2 */
#define REG_UDPHS_EPTCLRSTA2    (*(__O  uint32_t*)0xFC02C158U) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 2 */
#define REG_UDPHS_EPTSTA2       (*(__I  uint32_t*)0xFC02C15CU) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 2 */
#define REG_UDPHS_EPTCFG3       (*(__IO uint32_t*)0xFC02C160U) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 3 */
#define REG_UDPHS_EPTCTLENB3    (*(__O  uint32_t*)0xFC02C164U) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 3 */
#define REG_UDPHS_EPTCTLDIS3    (*(__O  uint32_t*)0xFC02C168U) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 3 */
#define REG_UDPHS_EPTCTL3       (*(__I  uint32_t*)0xFC02C16CU) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 3 */
#define REG_UDPHS_EPTSETSTA3    (*(__O  uint32_t*)0xFC02C174U) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 3 */
#define REG_UDPHS_EPTCLRSTA3    (*(__O  uint32_t*)0xFC02C178U) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 3 */
#define REG_UDPHS_EPTSTA3       (*(__I  uint32_t*)0xFC02C17CU) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 3 */
#define REG_UDPHS_EPTCFG4       (*(__IO uint32_t*)0xFC02C180U) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 4 */
#define REG_UDPHS_EPTCTLENB4    (*(__O  uint32_t*)0xFC02C184U) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 4 */
#define REG_UDPHS_EPTCTLDIS4    (*(__O  uint32_t*)0xFC02C188U) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 4 */
#define REG_UDPHS_EPTCTL4       (*(__I  uint32_t*)0xFC02C18CU) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 4 */
#define REG_UDPHS_EPTSETSTA4    (*(__O  uint32_t*)0xFC02C194U) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 4 */
#define REG_UDPHS_EPTCLRSTA4    (*(__O  uint32_t*)0xFC02C198U) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 4 */
#define REG_UDPHS_EPTSTA4       (*(__I  uint32_t*)0xFC02C19CU) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 4 */
#define REG_UDPHS_EPTCFG5       (*(__IO uint32_t*)0xFC02C1A0U) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 5 */
#define REG_UDPHS_EPTCTLENB5    (*(__O  uint32_t*)0xFC02C1A4U) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 5 */
#define REG_UDPHS_EPTCTLDIS5    (*(__O  uint32_t*)0xFC02C1A8U) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 5 */
#define REG_UDPHS_EPTCTL5       (*(__I  uint32_t*)0xFC02C1ACU) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 5 */
#define REG_UDPHS_EPTSETSTA5    (*(__O  uint32_t*)0xFC02C1B4U) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 5 */
#define REG_UDPHS_EPTCLRSTA5    (*(__O  uint32_t*)0xFC02C1B8U) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 5 */
#define REG_UDPHS_EPTSTA5       (*(__I  uint32_t*)0xFC02C1BCU) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 5 */
#define REG_UDPHS_EPTCFG6       (*(__IO uint32_t*)0xFC02C1C0U) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 6 */
#define REG_UDPHS_EPTCTLENB6    (*(__O  uint32_t*)0xFC02C1C4U) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 6 */
#define REG_UDPHS_EPTCTLDIS6    (*(__O  uint32_t*)0xFC02C1C8U) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 6 */
#define REG_UDPHS_EPTCTL6       (*(__I  uint32_t*)0xFC02C1CCU) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 6 */
#define REG_UDPHS_EPTSETSTA6    (*(__O  uint32_t*)0xFC02C1D4U) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 6 */
#define REG_UDPHS_EPTCLRSTA6    (*(__O  uint32_t*)0xFC02C1D8U) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 6 */
#define REG_UDPHS_EPTSTA6       (*(__I  uint32_t*)0xFC02C1DCU) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 6 */
#define REG_UDPHS_EPTCFG7       (*(__IO uint32_t*)0xFC02C1E0U) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 7 */
#define REG_UDPHS_EPTCTLENB7    (*(__O  uint32_t*)0xFC02C1E4U) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 7 */
#define REG_UDPHS_EPTCTLDIS7    (*(__O  uint32_t*)0xFC02C1E8U) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 7 */
#define REG_UDPHS_EPTCTL7       (*(__I  uint32_t*)0xFC02C1ECU) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 7 */
#define REG_UDPHS_EPTSETSTA7    (*(__O  uint32_t*)0xFC02C1F4U) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 7 */
#define REG_UDPHS_EPTCLRSTA7    (*(__O  uint32_t*)0xFC02C1F8U) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 7 */
#define REG_UDPHS_EPTSTA7       (*(__I  uint32_t*)0xFC02C1FCU) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 7 */
#define REG_UDPHS_EPTCFG8       (*(__IO uint32_t*)0xFC02C200U) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 8 */
#define REG_UDPHS_EPTCTLENB8    (*(__O  uint32_t*)0xFC02C204U) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 8 */
#define REG_UDPHS_EPTCTLDIS8    (*(__O  uint32_t*)0xFC02C208U) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 8 */
#define REG_UDPHS_EPTCTL8       (*(__I  uint32_t*)0xFC02C20CU) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 8 */
#define REG_UDPHS_EPTSETSTA8    (*(__O  uint32_t*)0xFC02C214U) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 8 */
#define REG_UDPHS_EPTCLRSTA8    (*(__O  uint32_t*)0xFC02C218U) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 8 */
#define REG_UDPHS_EPTSTA8       (*(__I  uint32_t*)0xFC02C21CU) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 8 */
#define REG_UDPHS_EPTCFG9       (*(__IO uint32_t*)0xFC02C220U) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 9 */
#define REG_UDPHS_EPTCTLENB9    (*(__O  uint32_t*)0xFC02C224U) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 9 */
#define REG_UDPHS_EPTCTLDIS9    (*(__O  uint32_t*)0xFC02C228U) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 9 */
#define REG_UDPHS_EPTCTL9       (*(__I  uint32_t*)0xFC02C22CU) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 9 */
#define REG_UDPHS_EPTSETSTA9    (*(__O  uint32_t*)0xFC02C234U) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 9 */
#define REG_UDPHS_EPTCLRSTA9    (*(__O  uint32_t*)0xFC02C238U) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 9 */
#define REG_UDPHS_EPTSTA9       (*(__I  uint32_t*)0xFC02C23CU) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 9 */
#define REG_UDPHS_EPTCFG10      (*(__IO uint32_t*)0xFC02C240U) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 10 */
#define REG_UDPHS_EPTCTLENB10   (*(__O  uint32_t*)0xFC02C244U) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 10 */
#define REG_UDPHS_EPTCTLDIS10   (*(__O  uint32_t*)0xFC02C248U) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 10 */
#define REG_UDPHS_EPTCTL10      (*(__I  uint32_t*)0xFC02C24CU) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 10 */
#define REG_UDPHS_EPTSETSTA10   (*(__O  uint32_t*)0xFC02C254U) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 10 */
#define REG_UDPHS_EPTCLRSTA10   (*(__O  uint32_t*)0xFC02C258U) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 10 */
#define REG_UDPHS_EPTSTA10      (*(__I  uint32_t*)0xFC02C25CU) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 10 */
#define REG_UDPHS_EPTCFG11      (*(__IO uint32_t*)0xFC02C260U) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 11 */
#define REG_UDPHS_EPTCTLENB11   (*(__O  uint32_t*)0xFC02C264U) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 11 */
#define REG_UDPHS_EPTCTLDIS11   (*(__O  uint32_t*)0xFC02C268U) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 11 */
#define REG_UDPHS_EPTCTL11      (*(__I  uint32_t*)0xFC02C26CU) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 11 */
#define REG_UDPHS_EPTSETSTA11   (*(__O  uint32_t*)0xFC02C274U) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 11 */
#define REG_UDPHS_EPTCLRSTA11   (*(__O  uint32_t*)0xFC02C278U) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 11 */
#define REG_UDPHS_EPTSTA11      (*(__I  uint32_t*)0xFC02C27CU) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 11 */
#define REG_UDPHS_EPTCFG12      (*(__IO uint32_t*)0xFC02C280U) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 12 */
#define REG_UDPHS_EPTCTLENB12   (*(__O  uint32_t*)0xFC02C284U) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 12 */
#define REG_UDPHS_EPTCTLDIS12   (*(__O  uint32_t*)0xFC02C288U) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 12 */
#define REG_UDPHS_EPTCTL12      (*(__I  uint32_t*)0xFC02C28CU) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 12 */
#define REG_UDPHS_EPTSETSTA12   (*(__O  uint32_t*)0xFC02C294U) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 12 */
#define REG_UDPHS_EPTCLRSTA12   (*(__O  uint32_t*)0xFC02C298U) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 12 */
#define REG_UDPHS_EPTSTA12      (*(__I  uint32_t*)0xFC02C29CU) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 12 */
#define REG_UDPHS_EPTCFG13      (*(__IO uint32_t*)0xFC02C2A0U) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 13 */
#define REG_UDPHS_EPTCTLENB13   (*(__O  uint32_t*)0xFC02C2A4U) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 13 */
#define REG_UDPHS_EPTCTLDIS13   (*(__O  uint32_t*)0xFC02C2A8U) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 13 */
#define REG_UDPHS_EPTCTL13      (*(__I  uint32_t*)0xFC02C2ACU) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 13 */
#define REG_UDPHS_EPTSETSTA13   (*(__O  uint32_t*)0xFC02C2B4U) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 13 */
#define REG_UDPHS_EPTCLRSTA13   (*(__O  uint32_t*)0xFC02C2B8U) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 13 */
#define REG_UDPHS_EPTSTA13      (*(__I  uint32_t*)0xFC02C2BCU) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 13 */
#define REG_UDPHS_EPTCFG14      (*(__IO uint32_t*)0xFC02C2C0U) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 14 */
#define REG_UDPHS_EPTCTLENB14   (*(__O  uint32_t*)0xFC02C2C4U) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 14 */
#define REG_UDPHS_EPTCTLDIS14   (*(__O  uint32_t*)0xFC02C2C8U) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 14 */
#define REG_UDPHS_EPTCTL14      (*(__I  uint32_t*)0xFC02C2CCU) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 14 */
#define REG_UDPHS_EPTSETSTA14   (*(__O  uint32_t*)0xFC02C2D4U) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 14 */
#define REG_UDPHS_EPTCLRSTA14   (*(__O  uint32_t*)0xFC02C2D8U) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 14 */
#define REG_UDPHS_EPTSTA14      (*(__I  uint32_t*)0xFC02C2DCU) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 14 */
#define REG_UDPHS_EPTCFG15      (*(__IO uint32_t*)0xFC02C2E0U) /**< (UDPHS) UDPHS Endpoint Configuration Register (endpoint = 0) 15 */
#define REG_UDPHS_EPTCTLENB15   (*(__O  uint32_t*)0xFC02C2E4U) /**< (UDPHS) UDPHS Endpoint Control Enable Register (endpoint = 0) 15 */
#define REG_UDPHS_EPTCTLDIS15   (*(__O  uint32_t*)0xFC02C2E8U) /**< (UDPHS) UDPHS Endpoint Control Disable Register (endpoint = 0) 15 */
#define REG_UDPHS_EPTCTL15      (*(__I  uint32_t*)0xFC02C2ECU) /**< (UDPHS) UDPHS Endpoint Control Register (endpoint = 0) 15 */
#define REG_UDPHS_EPTSETSTA15   (*(__O  uint32_t*)0xFC02C2F4U) /**< (UDPHS) UDPHS Endpoint Set Status Register (endpoint = 0) 15 */
#define REG_UDPHS_EPTCLRSTA15   (*(__O  uint32_t*)0xFC02C2F8U) /**< (UDPHS) UDPHS Endpoint Clear Status Register (endpoint = 0) 15 */
#define REG_UDPHS_EPTSTA15      (*(__I  uint32_t*)0xFC02C2FCU) /**< (UDPHS) UDPHS Endpoint Status Register (endpoint = 0) 15 */
#define REG_UDPHS_DMANXTDSC0    (*(__IO uint32_t*)0xFC02C300U) /**< (UDPHS) UDPHS DMA Next Descriptor Address Register (channel = 0) 0 */
#define REG_UDPHS_DMAADDRESS0   (*(__IO uint32_t*)0xFC02C304U) /**< (UDPHS) UDPHS DMA Channel Address Register (channel = 0) 0 */
#define REG_UDPHS_DMACONTROL0   (*(__IO uint32_t*)0xFC02C308U) /**< (UDPHS) UDPHS DMA Channel Control Register (channel = 0) 0 */
#define REG_UDPHS_DMASTATUS0    (*(__IO uint32_t*)0xFC02C30CU) /**< (UDPHS) UDPHS DMA Channel Status Register (channel = 0) 0 */
#define REG_UDPHS_DMANXTDSC1    (*(__IO uint32_t*)0xFC02C310U) /**< (UDPHS) UDPHS DMA Next Descriptor Address Register (channel = 0) 1 */
#define REG_UDPHS_DMAADDRESS1   (*(__IO uint32_t*)0xFC02C314U) /**< (UDPHS) UDPHS DMA Channel Address Register (channel = 0) 1 */
#define REG_UDPHS_DMACONTROL1   (*(__IO uint32_t*)0xFC02C318U) /**< (UDPHS) UDPHS DMA Channel Control Register (channel = 0) 1 */
#define REG_UDPHS_DMASTATUS1    (*(__IO uint32_t*)0xFC02C31CU) /**< (UDPHS) UDPHS DMA Channel Status Register (channel = 0) 1 */
#define REG_UDPHS_DMANXTDSC2    (*(__IO uint32_t*)0xFC02C320U) /**< (UDPHS) UDPHS DMA Next Descriptor Address Register (channel = 0) 2 */
#define REG_UDPHS_DMAADDRESS2   (*(__IO uint32_t*)0xFC02C324U) /**< (UDPHS) UDPHS DMA Channel Address Register (channel = 0) 2 */
#define REG_UDPHS_DMACONTROL2   (*(__IO uint32_t*)0xFC02C328U) /**< (UDPHS) UDPHS DMA Channel Control Register (channel = 0) 2 */
#define REG_UDPHS_DMASTATUS2    (*(__IO uint32_t*)0xFC02C32CU) /**< (UDPHS) UDPHS DMA Channel Status Register (channel = 0) 2 */
#define REG_UDPHS_DMANXTDSC3    (*(__IO uint32_t*)0xFC02C330U) /**< (UDPHS) UDPHS DMA Next Descriptor Address Register (channel = 0) 3 */
#define REG_UDPHS_DMAADDRESS3   (*(__IO uint32_t*)0xFC02C334U) /**< (UDPHS) UDPHS DMA Channel Address Register (channel = 0) 3 */
#define REG_UDPHS_DMACONTROL3   (*(__IO uint32_t*)0xFC02C338U) /**< (UDPHS) UDPHS DMA Channel Control Register (channel = 0) 3 */
#define REG_UDPHS_DMASTATUS3    (*(__IO uint32_t*)0xFC02C33CU) /**< (UDPHS) UDPHS DMA Channel Status Register (channel = 0) 3 */
#define REG_UDPHS_DMANXTDSC4    (*(__IO uint32_t*)0xFC02C340U) /**< (UDPHS) UDPHS DMA Next Descriptor Address Register (channel = 0) 4 */
#define REG_UDPHS_DMAADDRESS4   (*(__IO uint32_t*)0xFC02C344U) /**< (UDPHS) UDPHS DMA Channel Address Register (channel = 0) 4 */
#define REG_UDPHS_DMACONTROL4   (*(__IO uint32_t*)0xFC02C348U) /**< (UDPHS) UDPHS DMA Channel Control Register (channel = 0) 4 */
#define REG_UDPHS_DMASTATUS4    (*(__IO uint32_t*)0xFC02C34CU) /**< (UDPHS) UDPHS DMA Channel Status Register (channel = 0) 4 */
#define REG_UDPHS_DMANXTDSC5    (*(__IO uint32_t*)0xFC02C350U) /**< (UDPHS) UDPHS DMA Next Descriptor Address Register (channel = 0) 5 */
#define REG_UDPHS_DMAADDRESS5   (*(__IO uint32_t*)0xFC02C354U) /**< (UDPHS) UDPHS DMA Channel Address Register (channel = 0) 5 */
#define REG_UDPHS_DMACONTROL5   (*(__IO uint32_t*)0xFC02C358U) /**< (UDPHS) UDPHS DMA Channel Control Register (channel = 0) 5 */
#define REG_UDPHS_DMASTATUS5    (*(__IO uint32_t*)0xFC02C35CU) /**< (UDPHS) UDPHS DMA Channel Status Register (channel = 0) 5 */
#define REG_UDPHS_DMANXTDSC6    (*(__IO uint32_t*)0xFC02C360U) /**< (UDPHS) UDPHS DMA Next Descriptor Address Register (channel = 0) 6 */
#define REG_UDPHS_DMAADDRESS6   (*(__IO uint32_t*)0xFC02C364U) /**< (UDPHS) UDPHS DMA Channel Address Register (channel = 0) 6 */
#define REG_UDPHS_DMACONTROL6   (*(__IO uint32_t*)0xFC02C368U) /**< (UDPHS) UDPHS DMA Channel Control Register (channel = 0) 6 */
#define REG_UDPHS_DMASTATUS6    (*(__IO uint32_t*)0xFC02C36CU) /**< (UDPHS) UDPHS DMA Channel Status Register (channel = 0) 6 */
#define REG_UDPHS_CTRL          (*(__IO uint32_t*)0xFC02C000U) /**< (UDPHS) UDPHS Control Register */
#define REG_UDPHS_FNUM          (*(__I  uint32_t*)0xFC02C004U) /**< (UDPHS) UDPHS Frame Number Register */
#define REG_UDPHS_IEN           (*(__IO uint32_t*)0xFC02C010U) /**< (UDPHS) UDPHS Interrupt Enable Register */
#define REG_UDPHS_INTSTA        (*(__I  uint32_t*)0xFC02C014U) /**< (UDPHS) UDPHS Interrupt Status Register */
#define REG_UDPHS_CLRINT        (*(__O  uint32_t*)0xFC02C018U) /**< (UDPHS) UDPHS Clear Interrupt Register */
#define REG_UDPHS_EPTRST        (*(__O  uint32_t*)0xFC02C01CU) /**< (UDPHS) UDPHS Endpoints Reset Register */
#define REG_UDPHS_TST           (*(__IO uint32_t*)0xFC02C0E0U) /**< (UDPHS) UDPHS Test Register */
#define REG_UDPHS_ADDRSIZE      (*(__I  uint32_t*)0xFC02C0ECU) /**< (UDPHS) UDPHS IP Address Size Register */
#define REG_UDPHS_IPNAME        (*(__I  uint32_t*)0xFC02C0F0U) /**< (UDPHS) UDPHS IP Name1 Register */
#define REG_UDPHS_IPNAME0       (*(__I  uint32_t*)0xFC02C0F0U) /**< (UDPHS) UDPHS IP Name1 Register 0 */
#define REG_UDPHS_IPNAME1       (*(__I  uint32_t*)0xFC02C0F4U) /**< (UDPHS) UDPHS IP Name1 Register 1 */
#define REG_UDPHS_FEATURES      (*(__I  uint32_t*)0xFC02C0F8U) /**< (UDPHS) UDPHS Features Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for UDPHS peripheral ========== */
#define UDPHS_INSTANCE_ID                        42         
#define UDPHS_CLOCK_ID                           42         

#endif /* _SAMA5D2_UDPHS_INSTANCE_ */
