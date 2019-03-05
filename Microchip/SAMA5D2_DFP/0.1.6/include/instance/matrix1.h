/**
 * \file
 *
 * \brief Instance description for MATRIX1
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
#ifndef _SAMA5D2_MATRIX1_INSTANCE_H_
#define _SAMA5D2_MATRIX1_INSTANCE_H_

/* ========== Register definition for MATRIX1 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_MATRIX1_PRAS0       (0xFC03C080) /**< (MATRIX1) Priority Register A for Slave 0 */
#define REG_MATRIX1_PRBS0       (0xFC03C084) /**< (MATRIX1) Priority Register B for Slave 0 */
#define REG_MATRIX1_PRAS1       (0xFC03C088) /**< (MATRIX1) Priority Register A for Slave 1 */
#define REG_MATRIX1_PRBS1       (0xFC03C08C) /**< (MATRIX1) Priority Register B for Slave 1 */
#define REG_MATRIX1_PRAS2       (0xFC03C090) /**< (MATRIX1) Priority Register A for Slave 2 */
#define REG_MATRIX1_PRBS2       (0xFC03C094) /**< (MATRIX1) Priority Register B for Slave 2 */
#define REG_MATRIX1_PRAS3       (0xFC03C098) /**< (MATRIX1) Priority Register A for Slave 3 */
#define REG_MATRIX1_PRBS3       (0xFC03C09C) /**< (MATRIX1) Priority Register B for Slave 3 */
#define REG_MATRIX1_PRAS4       (0xFC03C0A0) /**< (MATRIX1) Priority Register A for Slave 4 */
#define REG_MATRIX1_PRBS4       (0xFC03C0A4) /**< (MATRIX1) Priority Register B for Slave 4 */
#define REG_MATRIX1_PRAS5       (0xFC03C0A8) /**< (MATRIX1) Priority Register A for Slave 5 */
#define REG_MATRIX1_PRBS5       (0xFC03C0AC) /**< (MATRIX1) Priority Register B for Slave 5 */
#define REG_MATRIX1_PRAS6       (0xFC03C0B0) /**< (MATRIX1) Priority Register A for Slave 6 */
#define REG_MATRIX1_PRBS6       (0xFC03C0B4) /**< (MATRIX1) Priority Register B for Slave 6 */
#define REG_MATRIX1_PRAS7       (0xFC03C0B8) /**< (MATRIX1) Priority Register A for Slave 7 */
#define REG_MATRIX1_PRBS7       (0xFC03C0BC) /**< (MATRIX1) Priority Register B for Slave 7 */
#define REG_MATRIX1_PRAS8       (0xFC03C0C0) /**< (MATRIX1) Priority Register A for Slave 8 */
#define REG_MATRIX1_PRBS8       (0xFC03C0C4) /**< (MATRIX1) Priority Register B for Slave 8 */
#define REG_MATRIX1_PRAS9       (0xFC03C0C8) /**< (MATRIX1) Priority Register A for Slave 9 */
#define REG_MATRIX1_PRBS9       (0xFC03C0CC) /**< (MATRIX1) Priority Register B for Slave 9 */
#define REG_MATRIX1_PRAS10      (0xFC03C0D0) /**< (MATRIX1) Priority Register A for Slave 10 */
#define REG_MATRIX1_PRBS10      (0xFC03C0D4) /**< (MATRIX1) Priority Register B for Slave 10 */
#define REG_MATRIX1_PRAS11      (0xFC03C0D8) /**< (MATRIX1) Priority Register A for Slave 11 */
#define REG_MATRIX1_PRBS11      (0xFC03C0DC) /**< (MATRIX1) Priority Register B for Slave 11 */
#define REG_MATRIX1_PRAS12      (0xFC03C0E0) /**< (MATRIX1) Priority Register A for Slave 12 */
#define REG_MATRIX1_PRBS12      (0xFC03C0E4) /**< (MATRIX1) Priority Register B for Slave 12 */
#define REG_MATRIX1_PRAS13      (0xFC03C0E8) /**< (MATRIX1) Priority Register A for Slave 13 */
#define REG_MATRIX1_PRBS13      (0xFC03C0EC) /**< (MATRIX1) Priority Register B for Slave 13 */
#define REG_MATRIX1_PRAS14      (0xFC03C0F0) /**< (MATRIX1) Priority Register A for Slave 14 */
#define REG_MATRIX1_PRBS14      (0xFC03C0F4) /**< (MATRIX1) Priority Register B for Slave 14 */
#define REG_MATRIX1_MCFG        (0xFC03C000) /**< (MATRIX1) Master Configuration Register */
#define REG_MATRIX1_MCFG0       (0xFC03C000) /**< (MATRIX1) Master Configuration Register 0 */
#define REG_MATRIX1_MCFG1       (0xFC03C004) /**< (MATRIX1) Master Configuration Register 1 */
#define REG_MATRIX1_MCFG2       (0xFC03C008) /**< (MATRIX1) Master Configuration Register 2 */
#define REG_MATRIX1_MCFG3       (0xFC03C00C) /**< (MATRIX1) Master Configuration Register 3 */
#define REG_MATRIX1_MCFG4       (0xFC03C010) /**< (MATRIX1) Master Configuration Register 4 */
#define REG_MATRIX1_MCFG5       (0xFC03C014) /**< (MATRIX1) Master Configuration Register 5 */
#define REG_MATRIX1_MCFG6       (0xFC03C018) /**< (MATRIX1) Master Configuration Register 6 */
#define REG_MATRIX1_MCFG7       (0xFC03C01C) /**< (MATRIX1) Master Configuration Register 7 */
#define REG_MATRIX1_MCFG8       (0xFC03C020) /**< (MATRIX1) Master Configuration Register 8 */
#define REG_MATRIX1_MCFG9       (0xFC03C024) /**< (MATRIX1) Master Configuration Register 9 */
#define REG_MATRIX1_MCFG10      (0xFC03C028) /**< (MATRIX1) Master Configuration Register 10 */
#define REG_MATRIX1_MCFG11      (0xFC03C02C) /**< (MATRIX1) Master Configuration Register 11 */
#define REG_MATRIX1_SCFG        (0xFC03C040) /**< (MATRIX1) Slave Configuration Register */
#define REG_MATRIX1_SCFG0       (0xFC03C040) /**< (MATRIX1) Slave Configuration Register 0 */
#define REG_MATRIX1_SCFG1       (0xFC03C044) /**< (MATRIX1) Slave Configuration Register 1 */
#define REG_MATRIX1_SCFG2       (0xFC03C048) /**< (MATRIX1) Slave Configuration Register 2 */
#define REG_MATRIX1_SCFG3       (0xFC03C04C) /**< (MATRIX1) Slave Configuration Register 3 */
#define REG_MATRIX1_SCFG4       (0xFC03C050) /**< (MATRIX1) Slave Configuration Register 4 */
#define REG_MATRIX1_SCFG5       (0xFC03C054) /**< (MATRIX1) Slave Configuration Register 5 */
#define REG_MATRIX1_SCFG6       (0xFC03C058) /**< (MATRIX1) Slave Configuration Register 6 */
#define REG_MATRIX1_SCFG7       (0xFC03C05C) /**< (MATRIX1) Slave Configuration Register 7 */
#define REG_MATRIX1_SCFG8       (0xFC03C060) /**< (MATRIX1) Slave Configuration Register 8 */
#define REG_MATRIX1_SCFG9       (0xFC03C064) /**< (MATRIX1) Slave Configuration Register 9 */
#define REG_MATRIX1_SCFG10      (0xFC03C068) /**< (MATRIX1) Slave Configuration Register 10 */
#define REG_MATRIX1_SCFG11      (0xFC03C06C) /**< (MATRIX1) Slave Configuration Register 11 */
#define REG_MATRIX1_SCFG12      (0xFC03C070) /**< (MATRIX1) Slave Configuration Register 12 */
#define REG_MATRIX1_SCFG13      (0xFC03C074) /**< (MATRIX1) Slave Configuration Register 13 */
#define REG_MATRIX1_SCFG14      (0xFC03C078) /**< (MATRIX1) Slave Configuration Register 14 */
#define REG_MATRIX1_MEIER       (0xFC03C150) /**< (MATRIX1) Master Error Interrupt Enable Register */
#define REG_MATRIX1_MEIDR       (0xFC03C154) /**< (MATRIX1) Master Error Interrupt Disable Register */
#define REG_MATRIX1_MEIMR       (0xFC03C158) /**< (MATRIX1) Master Error Interrupt Mask Register */
#define REG_MATRIX1_MESR        (0xFC03C15C) /**< (MATRIX1) Master Error Status Register */
#define REG_MATRIX1_MEAR        (0xFC03C160) /**< (MATRIX1) Master 0 Error Address Register */
#define REG_MATRIX1_MEAR0       (0xFC03C160) /**< (MATRIX1) Master 0 Error Address Register 0 */
#define REG_MATRIX1_MEAR1       (0xFC03C164) /**< (MATRIX1) Master 0 Error Address Register 1 */
#define REG_MATRIX1_MEAR2       (0xFC03C168) /**< (MATRIX1) Master 0 Error Address Register 2 */
#define REG_MATRIX1_MEAR3       (0xFC03C16C) /**< (MATRIX1) Master 0 Error Address Register 3 */
#define REG_MATRIX1_MEAR4       (0xFC03C170) /**< (MATRIX1) Master 0 Error Address Register 4 */
#define REG_MATRIX1_MEAR5       (0xFC03C174) /**< (MATRIX1) Master 0 Error Address Register 5 */
#define REG_MATRIX1_MEAR6       (0xFC03C178) /**< (MATRIX1) Master 0 Error Address Register 6 */
#define REG_MATRIX1_MEAR7       (0xFC03C17C) /**< (MATRIX1) Master 0 Error Address Register 7 */
#define REG_MATRIX1_MEAR8       (0xFC03C180) /**< (MATRIX1) Master 0 Error Address Register 8 */
#define REG_MATRIX1_MEAR9       (0xFC03C184) /**< (MATRIX1) Master 0 Error Address Register 9 */
#define REG_MATRIX1_MEAR10      (0xFC03C188) /**< (MATRIX1) Master 0 Error Address Register 10 */
#define REG_MATRIX1_MEAR11      (0xFC03C18C) /**< (MATRIX1) Master 0 Error Address Register 11 */
#define REG_MATRIX1_WPMR        (0xFC03C1E4) /**< (MATRIX1) Write Protection Mode Register */
#define REG_MATRIX1_WPSR        (0xFC03C1E8) /**< (MATRIX1) Write Protection Status Register */
#define REG_MATRIX1_SSR         (0xFC03C200) /**< (MATRIX1) Security Slave 0 Register */
#define REG_MATRIX1_SSR0        (0xFC03C200) /**< (MATRIX1) Security Slave 0 Register 0 */
#define REG_MATRIX1_SSR1        (0xFC03C204) /**< (MATRIX1) Security Slave 0 Register 1 */
#define REG_MATRIX1_SSR2        (0xFC03C208) /**< (MATRIX1) Security Slave 0 Register 2 */
#define REG_MATRIX1_SSR3        (0xFC03C20C) /**< (MATRIX1) Security Slave 0 Register 3 */
#define REG_MATRIX1_SSR4        (0xFC03C210) /**< (MATRIX1) Security Slave 0 Register 4 */
#define REG_MATRIX1_SSR5        (0xFC03C214) /**< (MATRIX1) Security Slave 0 Register 5 */
#define REG_MATRIX1_SSR6        (0xFC03C218) /**< (MATRIX1) Security Slave 0 Register 6 */
#define REG_MATRIX1_SSR7        (0xFC03C21C) /**< (MATRIX1) Security Slave 0 Register 7 */
#define REG_MATRIX1_SSR8        (0xFC03C220) /**< (MATRIX1) Security Slave 0 Register 8 */
#define REG_MATRIX1_SSR9        (0xFC03C224) /**< (MATRIX1) Security Slave 0 Register 9 */
#define REG_MATRIX1_SSR10       (0xFC03C228) /**< (MATRIX1) Security Slave 0 Register 10 */
#define REG_MATRIX1_SSR11       (0xFC03C22C) /**< (MATRIX1) Security Slave 0 Register 11 */
#define REG_MATRIX1_SSR12       (0xFC03C230) /**< (MATRIX1) Security Slave 0 Register 12 */
#define REG_MATRIX1_SSR13       (0xFC03C234) /**< (MATRIX1) Security Slave 0 Register 13 */
#define REG_MATRIX1_SSR14       (0xFC03C238) /**< (MATRIX1) Security Slave 0 Register 14 */
#define REG_MATRIX1_SASSR       (0xFC03C240) /**< (MATRIX1) Security Areas Split Slave 0 Register */
#define REG_MATRIX1_SASSR0      (0xFC03C240) /**< (MATRIX1) Security Areas Split Slave 0 Register 0 */
#define REG_MATRIX1_SASSR1      (0xFC03C244) /**< (MATRIX1) Security Areas Split Slave 0 Register 1 */
#define REG_MATRIX1_SASSR2      (0xFC03C248) /**< (MATRIX1) Security Areas Split Slave 0 Register 2 */
#define REG_MATRIX1_SASSR3      (0xFC03C24C) /**< (MATRIX1) Security Areas Split Slave 0 Register 3 */
#define REG_MATRIX1_SASSR4      (0xFC03C250) /**< (MATRIX1) Security Areas Split Slave 0 Register 4 */
#define REG_MATRIX1_SASSR5      (0xFC03C254) /**< (MATRIX1) Security Areas Split Slave 0 Register 5 */
#define REG_MATRIX1_SASSR6      (0xFC03C258) /**< (MATRIX1) Security Areas Split Slave 0 Register 6 */
#define REG_MATRIX1_SASSR7      (0xFC03C25C) /**< (MATRIX1) Security Areas Split Slave 0 Register 7 */
#define REG_MATRIX1_SASSR8      (0xFC03C260) /**< (MATRIX1) Security Areas Split Slave 0 Register 8 */
#define REG_MATRIX1_SASSR9      (0xFC03C264) /**< (MATRIX1) Security Areas Split Slave 0 Register 9 */
#define REG_MATRIX1_SASSR10     (0xFC03C268) /**< (MATRIX1) Security Areas Split Slave 0 Register 10 */
#define REG_MATRIX1_SASSR11     (0xFC03C26C) /**< (MATRIX1) Security Areas Split Slave 0 Register 11 */
#define REG_MATRIX1_SASSR12     (0xFC03C270) /**< (MATRIX1) Security Areas Split Slave 0 Register 12 */
#define REG_MATRIX1_SASSR13     (0xFC03C274) /**< (MATRIX1) Security Areas Split Slave 0 Register 13 */
#define REG_MATRIX1_SASSR14     (0xFC03C278) /**< (MATRIX1) Security Areas Split Slave 0 Register 14 */
#define REG_MATRIX1_SRTSR       (0xFC03C284) /**< (MATRIX1) Security Region Top Slave 1 Register */
#define REG_MATRIX1_SRTSR0      (0xFC03C284) /**< (MATRIX1) Security Region Top Slave 1 Register 0 */
#define REG_MATRIX1_SRTSR1      (0xFC03C288) /**< (MATRIX1) Security Region Top Slave 1 Register 1 */
#define REG_MATRIX1_SRTSR2      (0xFC03C28C) /**< (MATRIX1) Security Region Top Slave 1 Register 2 */
#define REG_MATRIX1_SRTSR3      (0xFC03C290) /**< (MATRIX1) Security Region Top Slave 1 Register 3 */
#define REG_MATRIX1_SRTSR4      (0xFC03C294) /**< (MATRIX1) Security Region Top Slave 1 Register 4 */
#define REG_MATRIX1_SRTSR5      (0xFC03C298) /**< (MATRIX1) Security Region Top Slave 1 Register 5 */
#define REG_MATRIX1_SRTSR6      (0xFC03C29C) /**< (MATRIX1) Security Region Top Slave 1 Register 6 */
#define REG_MATRIX1_SRTSR7      (0xFC03C2A0) /**< (MATRIX1) Security Region Top Slave 1 Register 7 */
#define REG_MATRIX1_SRTSR8      (0xFC03C2A4) /**< (MATRIX1) Security Region Top Slave 1 Register 8 */
#define REG_MATRIX1_SRTSR9      (0xFC03C2A8) /**< (MATRIX1) Security Region Top Slave 1 Register 9 */
#define REG_MATRIX1_SRTSR10     (0xFC03C2AC) /**< (MATRIX1) Security Region Top Slave 1 Register 10 */
#define REG_MATRIX1_SRTSR11     (0xFC03C2B0) /**< (MATRIX1) Security Region Top Slave 1 Register 11 */
#define REG_MATRIX1_SRTSR12     (0xFC03C2B4) /**< (MATRIX1) Security Region Top Slave 1 Register 12 */
#define REG_MATRIX1_SRTSR13     (0xFC03C2B8) /**< (MATRIX1) Security Region Top Slave 1 Register 13 */
#define REG_MATRIX1_SPSELR      (0xFC03C2C0) /**< (MATRIX1) Security Peripheral Select 1 Register */
#define REG_MATRIX1_SPSELR0     (0xFC03C2C0) /**< (MATRIX1) Security Peripheral Select 1 Register 0 */
#define REG_MATRIX1_SPSELR1     (0xFC03C2C4) /**< (MATRIX1) Security Peripheral Select 1 Register 1 */
#define REG_MATRIX1_SPSELR2     (0xFC03C2C8) /**< (MATRIX1) Security Peripheral Select 1 Register 2 */

#else

#define REG_MATRIX1_PRAS0       (*(__IO uint32_t*)0xFC03C080U) /**< (MATRIX1) Priority Register A for Slave 0 */
#define REG_MATRIX1_PRBS0       (*(__IO uint32_t*)0xFC03C084U) /**< (MATRIX1) Priority Register B for Slave 0 */
#define REG_MATRIX1_PRAS1       (*(__IO uint32_t*)0xFC03C088U) /**< (MATRIX1) Priority Register A for Slave 1 */
#define REG_MATRIX1_PRBS1       (*(__IO uint32_t*)0xFC03C08CU) /**< (MATRIX1) Priority Register B for Slave 1 */
#define REG_MATRIX1_PRAS2       (*(__IO uint32_t*)0xFC03C090U) /**< (MATRIX1) Priority Register A for Slave 2 */
#define REG_MATRIX1_PRBS2       (*(__IO uint32_t*)0xFC03C094U) /**< (MATRIX1) Priority Register B for Slave 2 */
#define REG_MATRIX1_PRAS3       (*(__IO uint32_t*)0xFC03C098U) /**< (MATRIX1) Priority Register A for Slave 3 */
#define REG_MATRIX1_PRBS3       (*(__IO uint32_t*)0xFC03C09CU) /**< (MATRIX1) Priority Register B for Slave 3 */
#define REG_MATRIX1_PRAS4       (*(__IO uint32_t*)0xFC03C0A0U) /**< (MATRIX1) Priority Register A for Slave 4 */
#define REG_MATRIX1_PRBS4       (*(__IO uint32_t*)0xFC03C0A4U) /**< (MATRIX1) Priority Register B for Slave 4 */
#define REG_MATRIX1_PRAS5       (*(__IO uint32_t*)0xFC03C0A8U) /**< (MATRIX1) Priority Register A for Slave 5 */
#define REG_MATRIX1_PRBS5       (*(__IO uint32_t*)0xFC03C0ACU) /**< (MATRIX1) Priority Register B for Slave 5 */
#define REG_MATRIX1_PRAS6       (*(__IO uint32_t*)0xFC03C0B0U) /**< (MATRIX1) Priority Register A for Slave 6 */
#define REG_MATRIX1_PRBS6       (*(__IO uint32_t*)0xFC03C0B4U) /**< (MATRIX1) Priority Register B for Slave 6 */
#define REG_MATRIX1_PRAS7       (*(__IO uint32_t*)0xFC03C0B8U) /**< (MATRIX1) Priority Register A for Slave 7 */
#define REG_MATRIX1_PRBS7       (*(__IO uint32_t*)0xFC03C0BCU) /**< (MATRIX1) Priority Register B for Slave 7 */
#define REG_MATRIX1_PRAS8       (*(__IO uint32_t*)0xFC03C0C0U) /**< (MATRIX1) Priority Register A for Slave 8 */
#define REG_MATRIX1_PRBS8       (*(__IO uint32_t*)0xFC03C0C4U) /**< (MATRIX1) Priority Register B for Slave 8 */
#define REG_MATRIX1_PRAS9       (*(__IO uint32_t*)0xFC03C0C8U) /**< (MATRIX1) Priority Register A for Slave 9 */
#define REG_MATRIX1_PRBS9       (*(__IO uint32_t*)0xFC03C0CCU) /**< (MATRIX1) Priority Register B for Slave 9 */
#define REG_MATRIX1_PRAS10      (*(__IO uint32_t*)0xFC03C0D0U) /**< (MATRIX1) Priority Register A for Slave 10 */
#define REG_MATRIX1_PRBS10      (*(__IO uint32_t*)0xFC03C0D4U) /**< (MATRIX1) Priority Register B for Slave 10 */
#define REG_MATRIX1_PRAS11      (*(__IO uint32_t*)0xFC03C0D8U) /**< (MATRIX1) Priority Register A for Slave 11 */
#define REG_MATRIX1_PRBS11      (*(__IO uint32_t*)0xFC03C0DCU) /**< (MATRIX1) Priority Register B for Slave 11 */
#define REG_MATRIX1_PRAS12      (*(__IO uint32_t*)0xFC03C0E0U) /**< (MATRIX1) Priority Register A for Slave 12 */
#define REG_MATRIX1_PRBS12      (*(__IO uint32_t*)0xFC03C0E4U) /**< (MATRIX1) Priority Register B for Slave 12 */
#define REG_MATRIX1_PRAS13      (*(__IO uint32_t*)0xFC03C0E8U) /**< (MATRIX1) Priority Register A for Slave 13 */
#define REG_MATRIX1_PRBS13      (*(__IO uint32_t*)0xFC03C0ECU) /**< (MATRIX1) Priority Register B for Slave 13 */
#define REG_MATRIX1_PRAS14      (*(__IO uint32_t*)0xFC03C0F0U) /**< (MATRIX1) Priority Register A for Slave 14 */
#define REG_MATRIX1_PRBS14      (*(__IO uint32_t*)0xFC03C0F4U) /**< (MATRIX1) Priority Register B for Slave 14 */
#define REG_MATRIX1_MCFG        (*(__IO uint32_t*)0xFC03C000U) /**< (MATRIX1) Master Configuration Register */
#define REG_MATRIX1_MCFG0       (*(__IO uint32_t*)0xFC03C000U) /**< (MATRIX1) Master Configuration Register 0 */
#define REG_MATRIX1_MCFG1       (*(__IO uint32_t*)0xFC03C004U) /**< (MATRIX1) Master Configuration Register 1 */
#define REG_MATRIX1_MCFG2       (*(__IO uint32_t*)0xFC03C008U) /**< (MATRIX1) Master Configuration Register 2 */
#define REG_MATRIX1_MCFG3       (*(__IO uint32_t*)0xFC03C00CU) /**< (MATRIX1) Master Configuration Register 3 */
#define REG_MATRIX1_MCFG4       (*(__IO uint32_t*)0xFC03C010U) /**< (MATRIX1) Master Configuration Register 4 */
#define REG_MATRIX1_MCFG5       (*(__IO uint32_t*)0xFC03C014U) /**< (MATRIX1) Master Configuration Register 5 */
#define REG_MATRIX1_MCFG6       (*(__IO uint32_t*)0xFC03C018U) /**< (MATRIX1) Master Configuration Register 6 */
#define REG_MATRIX1_MCFG7       (*(__IO uint32_t*)0xFC03C01CU) /**< (MATRIX1) Master Configuration Register 7 */
#define REG_MATRIX1_MCFG8       (*(__IO uint32_t*)0xFC03C020U) /**< (MATRIX1) Master Configuration Register 8 */
#define REG_MATRIX1_MCFG9       (*(__IO uint32_t*)0xFC03C024U) /**< (MATRIX1) Master Configuration Register 9 */
#define REG_MATRIX1_MCFG10      (*(__IO uint32_t*)0xFC03C028U) /**< (MATRIX1) Master Configuration Register 10 */
#define REG_MATRIX1_MCFG11      (*(__IO uint32_t*)0xFC03C02CU) /**< (MATRIX1) Master Configuration Register 11 */
#define REG_MATRIX1_SCFG        (*(__IO uint32_t*)0xFC03C040U) /**< (MATRIX1) Slave Configuration Register */
#define REG_MATRIX1_SCFG0       (*(__IO uint32_t*)0xFC03C040U) /**< (MATRIX1) Slave Configuration Register 0 */
#define REG_MATRIX1_SCFG1       (*(__IO uint32_t*)0xFC03C044U) /**< (MATRIX1) Slave Configuration Register 1 */
#define REG_MATRIX1_SCFG2       (*(__IO uint32_t*)0xFC03C048U) /**< (MATRIX1) Slave Configuration Register 2 */
#define REG_MATRIX1_SCFG3       (*(__IO uint32_t*)0xFC03C04CU) /**< (MATRIX1) Slave Configuration Register 3 */
#define REG_MATRIX1_SCFG4       (*(__IO uint32_t*)0xFC03C050U) /**< (MATRIX1) Slave Configuration Register 4 */
#define REG_MATRIX1_SCFG5       (*(__IO uint32_t*)0xFC03C054U) /**< (MATRIX1) Slave Configuration Register 5 */
#define REG_MATRIX1_SCFG6       (*(__IO uint32_t*)0xFC03C058U) /**< (MATRIX1) Slave Configuration Register 6 */
#define REG_MATRIX1_SCFG7       (*(__IO uint32_t*)0xFC03C05CU) /**< (MATRIX1) Slave Configuration Register 7 */
#define REG_MATRIX1_SCFG8       (*(__IO uint32_t*)0xFC03C060U) /**< (MATRIX1) Slave Configuration Register 8 */
#define REG_MATRIX1_SCFG9       (*(__IO uint32_t*)0xFC03C064U) /**< (MATRIX1) Slave Configuration Register 9 */
#define REG_MATRIX1_SCFG10      (*(__IO uint32_t*)0xFC03C068U) /**< (MATRIX1) Slave Configuration Register 10 */
#define REG_MATRIX1_SCFG11      (*(__IO uint32_t*)0xFC03C06CU) /**< (MATRIX1) Slave Configuration Register 11 */
#define REG_MATRIX1_SCFG12      (*(__IO uint32_t*)0xFC03C070U) /**< (MATRIX1) Slave Configuration Register 12 */
#define REG_MATRIX1_SCFG13      (*(__IO uint32_t*)0xFC03C074U) /**< (MATRIX1) Slave Configuration Register 13 */
#define REG_MATRIX1_SCFG14      (*(__IO uint32_t*)0xFC03C078U) /**< (MATRIX1) Slave Configuration Register 14 */
#define REG_MATRIX1_MEIER       (*(__O  uint32_t*)0xFC03C150U) /**< (MATRIX1) Master Error Interrupt Enable Register */
#define REG_MATRIX1_MEIDR       (*(__O  uint32_t*)0xFC03C154U) /**< (MATRIX1) Master Error Interrupt Disable Register */
#define REG_MATRIX1_MEIMR       (*(__I  uint32_t*)0xFC03C158U) /**< (MATRIX1) Master Error Interrupt Mask Register */
#define REG_MATRIX1_MESR        (*(__I  uint32_t*)0xFC03C15CU) /**< (MATRIX1) Master Error Status Register */
#define REG_MATRIX1_MEAR        (*(__I  uint32_t*)0xFC03C160U) /**< (MATRIX1) Master 0 Error Address Register */
#define REG_MATRIX1_MEAR0       (*(__I  uint32_t*)0xFC03C160U) /**< (MATRIX1) Master 0 Error Address Register 0 */
#define REG_MATRIX1_MEAR1       (*(__I  uint32_t*)0xFC03C164U) /**< (MATRIX1) Master 0 Error Address Register 1 */
#define REG_MATRIX1_MEAR2       (*(__I  uint32_t*)0xFC03C168U) /**< (MATRIX1) Master 0 Error Address Register 2 */
#define REG_MATRIX1_MEAR3       (*(__I  uint32_t*)0xFC03C16CU) /**< (MATRIX1) Master 0 Error Address Register 3 */
#define REG_MATRIX1_MEAR4       (*(__I  uint32_t*)0xFC03C170U) /**< (MATRIX1) Master 0 Error Address Register 4 */
#define REG_MATRIX1_MEAR5       (*(__I  uint32_t*)0xFC03C174U) /**< (MATRIX1) Master 0 Error Address Register 5 */
#define REG_MATRIX1_MEAR6       (*(__I  uint32_t*)0xFC03C178U) /**< (MATRIX1) Master 0 Error Address Register 6 */
#define REG_MATRIX1_MEAR7       (*(__I  uint32_t*)0xFC03C17CU) /**< (MATRIX1) Master 0 Error Address Register 7 */
#define REG_MATRIX1_MEAR8       (*(__I  uint32_t*)0xFC03C180U) /**< (MATRIX1) Master 0 Error Address Register 8 */
#define REG_MATRIX1_MEAR9       (*(__I  uint32_t*)0xFC03C184U) /**< (MATRIX1) Master 0 Error Address Register 9 */
#define REG_MATRIX1_MEAR10      (*(__I  uint32_t*)0xFC03C188U) /**< (MATRIX1) Master 0 Error Address Register 10 */
#define REG_MATRIX1_MEAR11      (*(__I  uint32_t*)0xFC03C18CU) /**< (MATRIX1) Master 0 Error Address Register 11 */
#define REG_MATRIX1_WPMR        (*(__IO uint32_t*)0xFC03C1E4U) /**< (MATRIX1) Write Protection Mode Register */
#define REG_MATRIX1_WPSR        (*(__I  uint32_t*)0xFC03C1E8U) /**< (MATRIX1) Write Protection Status Register */
#define REG_MATRIX1_SSR         (*(__IO uint32_t*)0xFC03C200U) /**< (MATRIX1) Security Slave 0 Register */
#define REG_MATRIX1_SSR0        (*(__IO uint32_t*)0xFC03C200U) /**< (MATRIX1) Security Slave 0 Register 0 */
#define REG_MATRIX1_SSR1        (*(__IO uint32_t*)0xFC03C204U) /**< (MATRIX1) Security Slave 0 Register 1 */
#define REG_MATRIX1_SSR2        (*(__IO uint32_t*)0xFC03C208U) /**< (MATRIX1) Security Slave 0 Register 2 */
#define REG_MATRIX1_SSR3        (*(__IO uint32_t*)0xFC03C20CU) /**< (MATRIX1) Security Slave 0 Register 3 */
#define REG_MATRIX1_SSR4        (*(__IO uint32_t*)0xFC03C210U) /**< (MATRIX1) Security Slave 0 Register 4 */
#define REG_MATRIX1_SSR5        (*(__IO uint32_t*)0xFC03C214U) /**< (MATRIX1) Security Slave 0 Register 5 */
#define REG_MATRIX1_SSR6        (*(__IO uint32_t*)0xFC03C218U) /**< (MATRIX1) Security Slave 0 Register 6 */
#define REG_MATRIX1_SSR7        (*(__IO uint32_t*)0xFC03C21CU) /**< (MATRIX1) Security Slave 0 Register 7 */
#define REG_MATRIX1_SSR8        (*(__IO uint32_t*)0xFC03C220U) /**< (MATRIX1) Security Slave 0 Register 8 */
#define REG_MATRIX1_SSR9        (*(__IO uint32_t*)0xFC03C224U) /**< (MATRIX1) Security Slave 0 Register 9 */
#define REG_MATRIX1_SSR10       (*(__IO uint32_t*)0xFC03C228U) /**< (MATRIX1) Security Slave 0 Register 10 */
#define REG_MATRIX1_SSR11       (*(__IO uint32_t*)0xFC03C22CU) /**< (MATRIX1) Security Slave 0 Register 11 */
#define REG_MATRIX1_SSR12       (*(__IO uint32_t*)0xFC03C230U) /**< (MATRIX1) Security Slave 0 Register 12 */
#define REG_MATRIX1_SSR13       (*(__IO uint32_t*)0xFC03C234U) /**< (MATRIX1) Security Slave 0 Register 13 */
#define REG_MATRIX1_SSR14       (*(__IO uint32_t*)0xFC03C238U) /**< (MATRIX1) Security Slave 0 Register 14 */
#define REG_MATRIX1_SASSR       (*(__IO uint32_t*)0xFC03C240U) /**< (MATRIX1) Security Areas Split Slave 0 Register */
#define REG_MATRIX1_SASSR0      (*(__IO uint32_t*)0xFC03C240U) /**< (MATRIX1) Security Areas Split Slave 0 Register 0 */
#define REG_MATRIX1_SASSR1      (*(__IO uint32_t*)0xFC03C244U) /**< (MATRIX1) Security Areas Split Slave 0 Register 1 */
#define REG_MATRIX1_SASSR2      (*(__IO uint32_t*)0xFC03C248U) /**< (MATRIX1) Security Areas Split Slave 0 Register 2 */
#define REG_MATRIX1_SASSR3      (*(__IO uint32_t*)0xFC03C24CU) /**< (MATRIX1) Security Areas Split Slave 0 Register 3 */
#define REG_MATRIX1_SASSR4      (*(__IO uint32_t*)0xFC03C250U) /**< (MATRIX1) Security Areas Split Slave 0 Register 4 */
#define REG_MATRIX1_SASSR5      (*(__IO uint32_t*)0xFC03C254U) /**< (MATRIX1) Security Areas Split Slave 0 Register 5 */
#define REG_MATRIX1_SASSR6      (*(__IO uint32_t*)0xFC03C258U) /**< (MATRIX1) Security Areas Split Slave 0 Register 6 */
#define REG_MATRIX1_SASSR7      (*(__IO uint32_t*)0xFC03C25CU) /**< (MATRIX1) Security Areas Split Slave 0 Register 7 */
#define REG_MATRIX1_SASSR8      (*(__IO uint32_t*)0xFC03C260U) /**< (MATRIX1) Security Areas Split Slave 0 Register 8 */
#define REG_MATRIX1_SASSR9      (*(__IO uint32_t*)0xFC03C264U) /**< (MATRIX1) Security Areas Split Slave 0 Register 9 */
#define REG_MATRIX1_SASSR10     (*(__IO uint32_t*)0xFC03C268U) /**< (MATRIX1) Security Areas Split Slave 0 Register 10 */
#define REG_MATRIX1_SASSR11     (*(__IO uint32_t*)0xFC03C26CU) /**< (MATRIX1) Security Areas Split Slave 0 Register 11 */
#define REG_MATRIX1_SASSR12     (*(__IO uint32_t*)0xFC03C270U) /**< (MATRIX1) Security Areas Split Slave 0 Register 12 */
#define REG_MATRIX1_SASSR13     (*(__IO uint32_t*)0xFC03C274U) /**< (MATRIX1) Security Areas Split Slave 0 Register 13 */
#define REG_MATRIX1_SASSR14     (*(__IO uint32_t*)0xFC03C278U) /**< (MATRIX1) Security Areas Split Slave 0 Register 14 */
#define REG_MATRIX1_SRTSR       (*(__IO uint32_t*)0xFC03C284U) /**< (MATRIX1) Security Region Top Slave 1 Register */
#define REG_MATRIX1_SRTSR0      (*(__IO uint32_t*)0xFC03C284U) /**< (MATRIX1) Security Region Top Slave 1 Register 0 */
#define REG_MATRIX1_SRTSR1      (*(__IO uint32_t*)0xFC03C288U) /**< (MATRIX1) Security Region Top Slave 1 Register 1 */
#define REG_MATRIX1_SRTSR2      (*(__IO uint32_t*)0xFC03C28CU) /**< (MATRIX1) Security Region Top Slave 1 Register 2 */
#define REG_MATRIX1_SRTSR3      (*(__IO uint32_t*)0xFC03C290U) /**< (MATRIX1) Security Region Top Slave 1 Register 3 */
#define REG_MATRIX1_SRTSR4      (*(__IO uint32_t*)0xFC03C294U) /**< (MATRIX1) Security Region Top Slave 1 Register 4 */
#define REG_MATRIX1_SRTSR5      (*(__IO uint32_t*)0xFC03C298U) /**< (MATRIX1) Security Region Top Slave 1 Register 5 */
#define REG_MATRIX1_SRTSR6      (*(__IO uint32_t*)0xFC03C29CU) /**< (MATRIX1) Security Region Top Slave 1 Register 6 */
#define REG_MATRIX1_SRTSR7      (*(__IO uint32_t*)0xFC03C2A0U) /**< (MATRIX1) Security Region Top Slave 1 Register 7 */
#define REG_MATRIX1_SRTSR8      (*(__IO uint32_t*)0xFC03C2A4U) /**< (MATRIX1) Security Region Top Slave 1 Register 8 */
#define REG_MATRIX1_SRTSR9      (*(__IO uint32_t*)0xFC03C2A8U) /**< (MATRIX1) Security Region Top Slave 1 Register 9 */
#define REG_MATRIX1_SRTSR10     (*(__IO uint32_t*)0xFC03C2ACU) /**< (MATRIX1) Security Region Top Slave 1 Register 10 */
#define REG_MATRIX1_SRTSR11     (*(__IO uint32_t*)0xFC03C2B0U) /**< (MATRIX1) Security Region Top Slave 1 Register 11 */
#define REG_MATRIX1_SRTSR12     (*(__IO uint32_t*)0xFC03C2B4U) /**< (MATRIX1) Security Region Top Slave 1 Register 12 */
#define REG_MATRIX1_SRTSR13     (*(__IO uint32_t*)0xFC03C2B8U) /**< (MATRIX1) Security Region Top Slave 1 Register 13 */
#define REG_MATRIX1_SPSELR      (*(__IO uint32_t*)0xFC03C2C0U) /**< (MATRIX1) Security Peripheral Select 1 Register */
#define REG_MATRIX1_SPSELR0     (*(__IO uint32_t*)0xFC03C2C0U) /**< (MATRIX1) Security Peripheral Select 1 Register 0 */
#define REG_MATRIX1_SPSELR1     (*(__IO uint32_t*)0xFC03C2C4U) /**< (MATRIX1) Security Peripheral Select 1 Register 1 */
#define REG_MATRIX1_SPSELR2     (*(__IO uint32_t*)0xFC03C2C8U) /**< (MATRIX1) Security Peripheral Select 1 Register 2 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for MATRIX1 peripheral ========== */
#define MATRIX1_INSTANCE_ID                      14         
#define MATRIX1_CLOCK_ID                         14         

#endif /* _SAMA5D2_MATRIX1_INSTANCE_ */
