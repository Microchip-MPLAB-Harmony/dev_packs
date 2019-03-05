/**
 * \file
 *
 * \brief Instance description for MATRIX0
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
#ifndef _SAMA5D2_MATRIX0_INSTANCE_H_
#define _SAMA5D2_MATRIX0_INSTANCE_H_

/* ========== Register definition for MATRIX0 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_MATRIX0_PRAS0       (0xF0018080) /**< (MATRIX0) Priority Register A for Slave 0 */
#define REG_MATRIX0_PRBS0       (0xF0018084) /**< (MATRIX0) Priority Register B for Slave 0 */
#define REG_MATRIX0_PRAS1       (0xF0018088) /**< (MATRIX0) Priority Register A for Slave 1 */
#define REG_MATRIX0_PRBS1       (0xF001808C) /**< (MATRIX0) Priority Register B for Slave 1 */
#define REG_MATRIX0_PRAS2       (0xF0018090) /**< (MATRIX0) Priority Register A for Slave 2 */
#define REG_MATRIX0_PRBS2       (0xF0018094) /**< (MATRIX0) Priority Register B for Slave 2 */
#define REG_MATRIX0_PRAS3       (0xF0018098) /**< (MATRIX0) Priority Register A for Slave 3 */
#define REG_MATRIX0_PRBS3       (0xF001809C) /**< (MATRIX0) Priority Register B for Slave 3 */
#define REG_MATRIX0_PRAS4       (0xF00180A0) /**< (MATRIX0) Priority Register A for Slave 4 */
#define REG_MATRIX0_PRBS4       (0xF00180A4) /**< (MATRIX0) Priority Register B for Slave 4 */
#define REG_MATRIX0_PRAS5       (0xF00180A8) /**< (MATRIX0) Priority Register A for Slave 5 */
#define REG_MATRIX0_PRBS5       (0xF00180AC) /**< (MATRIX0) Priority Register B for Slave 5 */
#define REG_MATRIX0_PRAS6       (0xF00180B0) /**< (MATRIX0) Priority Register A for Slave 6 */
#define REG_MATRIX0_PRBS6       (0xF00180B4) /**< (MATRIX0) Priority Register B for Slave 6 */
#define REG_MATRIX0_PRAS7       (0xF00180B8) /**< (MATRIX0) Priority Register A for Slave 7 */
#define REG_MATRIX0_PRBS7       (0xF00180BC) /**< (MATRIX0) Priority Register B for Slave 7 */
#define REG_MATRIX0_PRAS8       (0xF00180C0) /**< (MATRIX0) Priority Register A for Slave 8 */
#define REG_MATRIX0_PRBS8       (0xF00180C4) /**< (MATRIX0) Priority Register B for Slave 8 */
#define REG_MATRIX0_PRAS9       (0xF00180C8) /**< (MATRIX0) Priority Register A for Slave 9 */
#define REG_MATRIX0_PRBS9       (0xF00180CC) /**< (MATRIX0) Priority Register B for Slave 9 */
#define REG_MATRIX0_PRAS10      (0xF00180D0) /**< (MATRIX0) Priority Register A for Slave 10 */
#define REG_MATRIX0_PRBS10      (0xF00180D4) /**< (MATRIX0) Priority Register B for Slave 10 */
#define REG_MATRIX0_PRAS11      (0xF00180D8) /**< (MATRIX0) Priority Register A for Slave 11 */
#define REG_MATRIX0_PRBS11      (0xF00180DC) /**< (MATRIX0) Priority Register B for Slave 11 */
#define REG_MATRIX0_PRAS12      (0xF00180E0) /**< (MATRIX0) Priority Register A for Slave 12 */
#define REG_MATRIX0_PRBS12      (0xF00180E4) /**< (MATRIX0) Priority Register B for Slave 12 */
#define REG_MATRIX0_PRAS13      (0xF00180E8) /**< (MATRIX0) Priority Register A for Slave 13 */
#define REG_MATRIX0_PRBS13      (0xF00180EC) /**< (MATRIX0) Priority Register B for Slave 13 */
#define REG_MATRIX0_PRAS14      (0xF00180F0) /**< (MATRIX0) Priority Register A for Slave 14 */
#define REG_MATRIX0_PRBS14      (0xF00180F4) /**< (MATRIX0) Priority Register B for Slave 14 */
#define REG_MATRIX0_MCFG        (0xF0018000) /**< (MATRIX0) Master Configuration Register */
#define REG_MATRIX0_MCFG0       (0xF0018000) /**< (MATRIX0) Master Configuration Register 0 */
#define REG_MATRIX0_MCFG1       (0xF0018004) /**< (MATRIX0) Master Configuration Register 1 */
#define REG_MATRIX0_MCFG2       (0xF0018008) /**< (MATRIX0) Master Configuration Register 2 */
#define REG_MATRIX0_MCFG3       (0xF001800C) /**< (MATRIX0) Master Configuration Register 3 */
#define REG_MATRIX0_MCFG4       (0xF0018010) /**< (MATRIX0) Master Configuration Register 4 */
#define REG_MATRIX0_MCFG5       (0xF0018014) /**< (MATRIX0) Master Configuration Register 5 */
#define REG_MATRIX0_MCFG6       (0xF0018018) /**< (MATRIX0) Master Configuration Register 6 */
#define REG_MATRIX0_MCFG7       (0xF001801C) /**< (MATRIX0) Master Configuration Register 7 */
#define REG_MATRIX0_MCFG8       (0xF0018020) /**< (MATRIX0) Master Configuration Register 8 */
#define REG_MATRIX0_MCFG9       (0xF0018024) /**< (MATRIX0) Master Configuration Register 9 */
#define REG_MATRIX0_MCFG10      (0xF0018028) /**< (MATRIX0) Master Configuration Register 10 */
#define REG_MATRIX0_MCFG11      (0xF001802C) /**< (MATRIX0) Master Configuration Register 11 */
#define REG_MATRIX0_SCFG        (0xF0018040) /**< (MATRIX0) Slave Configuration Register */
#define REG_MATRIX0_SCFG0       (0xF0018040) /**< (MATRIX0) Slave Configuration Register 0 */
#define REG_MATRIX0_SCFG1       (0xF0018044) /**< (MATRIX0) Slave Configuration Register 1 */
#define REG_MATRIX0_SCFG2       (0xF0018048) /**< (MATRIX0) Slave Configuration Register 2 */
#define REG_MATRIX0_SCFG3       (0xF001804C) /**< (MATRIX0) Slave Configuration Register 3 */
#define REG_MATRIX0_SCFG4       (0xF0018050) /**< (MATRIX0) Slave Configuration Register 4 */
#define REG_MATRIX0_SCFG5       (0xF0018054) /**< (MATRIX0) Slave Configuration Register 5 */
#define REG_MATRIX0_SCFG6       (0xF0018058) /**< (MATRIX0) Slave Configuration Register 6 */
#define REG_MATRIX0_SCFG7       (0xF001805C) /**< (MATRIX0) Slave Configuration Register 7 */
#define REG_MATRIX0_SCFG8       (0xF0018060) /**< (MATRIX0) Slave Configuration Register 8 */
#define REG_MATRIX0_SCFG9       (0xF0018064) /**< (MATRIX0) Slave Configuration Register 9 */
#define REG_MATRIX0_SCFG10      (0xF0018068) /**< (MATRIX0) Slave Configuration Register 10 */
#define REG_MATRIX0_SCFG11      (0xF001806C) /**< (MATRIX0) Slave Configuration Register 11 */
#define REG_MATRIX0_SCFG12      (0xF0018070) /**< (MATRIX0) Slave Configuration Register 12 */
#define REG_MATRIX0_SCFG13      (0xF0018074) /**< (MATRIX0) Slave Configuration Register 13 */
#define REG_MATRIX0_SCFG14      (0xF0018078) /**< (MATRIX0) Slave Configuration Register 14 */
#define REG_MATRIX0_MEIER       (0xF0018150) /**< (MATRIX0) Master Error Interrupt Enable Register */
#define REG_MATRIX0_MEIDR       (0xF0018154) /**< (MATRIX0) Master Error Interrupt Disable Register */
#define REG_MATRIX0_MEIMR       (0xF0018158) /**< (MATRIX0) Master Error Interrupt Mask Register */
#define REG_MATRIX0_MESR        (0xF001815C) /**< (MATRIX0) Master Error Status Register */
#define REG_MATRIX0_MEAR        (0xF0018160) /**< (MATRIX0) Master 0 Error Address Register */
#define REG_MATRIX0_MEAR0       (0xF0018160) /**< (MATRIX0) Master 0 Error Address Register 0 */
#define REG_MATRIX0_MEAR1       (0xF0018164) /**< (MATRIX0) Master 0 Error Address Register 1 */
#define REG_MATRIX0_MEAR2       (0xF0018168) /**< (MATRIX0) Master 0 Error Address Register 2 */
#define REG_MATRIX0_MEAR3       (0xF001816C) /**< (MATRIX0) Master 0 Error Address Register 3 */
#define REG_MATRIX0_MEAR4       (0xF0018170) /**< (MATRIX0) Master 0 Error Address Register 4 */
#define REG_MATRIX0_MEAR5       (0xF0018174) /**< (MATRIX0) Master 0 Error Address Register 5 */
#define REG_MATRIX0_MEAR6       (0xF0018178) /**< (MATRIX0) Master 0 Error Address Register 6 */
#define REG_MATRIX0_MEAR7       (0xF001817C) /**< (MATRIX0) Master 0 Error Address Register 7 */
#define REG_MATRIX0_MEAR8       (0xF0018180) /**< (MATRIX0) Master 0 Error Address Register 8 */
#define REG_MATRIX0_MEAR9       (0xF0018184) /**< (MATRIX0) Master 0 Error Address Register 9 */
#define REG_MATRIX0_MEAR10      (0xF0018188) /**< (MATRIX0) Master 0 Error Address Register 10 */
#define REG_MATRIX0_MEAR11      (0xF001818C) /**< (MATRIX0) Master 0 Error Address Register 11 */
#define REG_MATRIX0_WPMR        (0xF00181E4) /**< (MATRIX0) Write Protection Mode Register */
#define REG_MATRIX0_WPSR        (0xF00181E8) /**< (MATRIX0) Write Protection Status Register */
#define REG_MATRIX0_SSR         (0xF0018200) /**< (MATRIX0) Security Slave 0 Register */
#define REG_MATRIX0_SSR0        (0xF0018200) /**< (MATRIX0) Security Slave 0 Register 0 */
#define REG_MATRIX0_SSR1        (0xF0018204) /**< (MATRIX0) Security Slave 0 Register 1 */
#define REG_MATRIX0_SSR2        (0xF0018208) /**< (MATRIX0) Security Slave 0 Register 2 */
#define REG_MATRIX0_SSR3        (0xF001820C) /**< (MATRIX0) Security Slave 0 Register 3 */
#define REG_MATRIX0_SSR4        (0xF0018210) /**< (MATRIX0) Security Slave 0 Register 4 */
#define REG_MATRIX0_SSR5        (0xF0018214) /**< (MATRIX0) Security Slave 0 Register 5 */
#define REG_MATRIX0_SSR6        (0xF0018218) /**< (MATRIX0) Security Slave 0 Register 6 */
#define REG_MATRIX0_SSR7        (0xF001821C) /**< (MATRIX0) Security Slave 0 Register 7 */
#define REG_MATRIX0_SSR8        (0xF0018220) /**< (MATRIX0) Security Slave 0 Register 8 */
#define REG_MATRIX0_SSR9        (0xF0018224) /**< (MATRIX0) Security Slave 0 Register 9 */
#define REG_MATRIX0_SSR10       (0xF0018228) /**< (MATRIX0) Security Slave 0 Register 10 */
#define REG_MATRIX0_SSR11       (0xF001822C) /**< (MATRIX0) Security Slave 0 Register 11 */
#define REG_MATRIX0_SSR12       (0xF0018230) /**< (MATRIX0) Security Slave 0 Register 12 */
#define REG_MATRIX0_SSR13       (0xF0018234) /**< (MATRIX0) Security Slave 0 Register 13 */
#define REG_MATRIX0_SSR14       (0xF0018238) /**< (MATRIX0) Security Slave 0 Register 14 */
#define REG_MATRIX0_SASSR       (0xF0018240) /**< (MATRIX0) Security Areas Split Slave 0 Register */
#define REG_MATRIX0_SASSR0      (0xF0018240) /**< (MATRIX0) Security Areas Split Slave 0 Register 0 */
#define REG_MATRIX0_SASSR1      (0xF0018244) /**< (MATRIX0) Security Areas Split Slave 0 Register 1 */
#define REG_MATRIX0_SASSR2      (0xF0018248) /**< (MATRIX0) Security Areas Split Slave 0 Register 2 */
#define REG_MATRIX0_SASSR3      (0xF001824C) /**< (MATRIX0) Security Areas Split Slave 0 Register 3 */
#define REG_MATRIX0_SASSR4      (0xF0018250) /**< (MATRIX0) Security Areas Split Slave 0 Register 4 */
#define REG_MATRIX0_SASSR5      (0xF0018254) /**< (MATRIX0) Security Areas Split Slave 0 Register 5 */
#define REG_MATRIX0_SASSR6      (0xF0018258) /**< (MATRIX0) Security Areas Split Slave 0 Register 6 */
#define REG_MATRIX0_SASSR7      (0xF001825C) /**< (MATRIX0) Security Areas Split Slave 0 Register 7 */
#define REG_MATRIX0_SASSR8      (0xF0018260) /**< (MATRIX0) Security Areas Split Slave 0 Register 8 */
#define REG_MATRIX0_SASSR9      (0xF0018264) /**< (MATRIX0) Security Areas Split Slave 0 Register 9 */
#define REG_MATRIX0_SASSR10     (0xF0018268) /**< (MATRIX0) Security Areas Split Slave 0 Register 10 */
#define REG_MATRIX0_SASSR11     (0xF001826C) /**< (MATRIX0) Security Areas Split Slave 0 Register 11 */
#define REG_MATRIX0_SASSR12     (0xF0018270) /**< (MATRIX0) Security Areas Split Slave 0 Register 12 */
#define REG_MATRIX0_SASSR13     (0xF0018274) /**< (MATRIX0) Security Areas Split Slave 0 Register 13 */
#define REG_MATRIX0_SASSR14     (0xF0018278) /**< (MATRIX0) Security Areas Split Slave 0 Register 14 */
#define REG_MATRIX0_SRTSR       (0xF0018284) /**< (MATRIX0) Security Region Top Slave 1 Register */
#define REG_MATRIX0_SRTSR0      (0xF0018284) /**< (MATRIX0) Security Region Top Slave 1 Register 0 */
#define REG_MATRIX0_SRTSR1      (0xF0018288) /**< (MATRIX0) Security Region Top Slave 1 Register 1 */
#define REG_MATRIX0_SRTSR2      (0xF001828C) /**< (MATRIX0) Security Region Top Slave 1 Register 2 */
#define REG_MATRIX0_SRTSR3      (0xF0018290) /**< (MATRIX0) Security Region Top Slave 1 Register 3 */
#define REG_MATRIX0_SRTSR4      (0xF0018294) /**< (MATRIX0) Security Region Top Slave 1 Register 4 */
#define REG_MATRIX0_SRTSR5      (0xF0018298) /**< (MATRIX0) Security Region Top Slave 1 Register 5 */
#define REG_MATRIX0_SRTSR6      (0xF001829C) /**< (MATRIX0) Security Region Top Slave 1 Register 6 */
#define REG_MATRIX0_SRTSR7      (0xF00182A0) /**< (MATRIX0) Security Region Top Slave 1 Register 7 */
#define REG_MATRIX0_SRTSR8      (0xF00182A4) /**< (MATRIX0) Security Region Top Slave 1 Register 8 */
#define REG_MATRIX0_SRTSR9      (0xF00182A8) /**< (MATRIX0) Security Region Top Slave 1 Register 9 */
#define REG_MATRIX0_SRTSR10     (0xF00182AC) /**< (MATRIX0) Security Region Top Slave 1 Register 10 */
#define REG_MATRIX0_SRTSR11     (0xF00182B0) /**< (MATRIX0) Security Region Top Slave 1 Register 11 */
#define REG_MATRIX0_SRTSR12     (0xF00182B4) /**< (MATRIX0) Security Region Top Slave 1 Register 12 */
#define REG_MATRIX0_SRTSR13     (0xF00182B8) /**< (MATRIX0) Security Region Top Slave 1 Register 13 */
#define REG_MATRIX0_SPSELR      (0xF00182C0) /**< (MATRIX0) Security Peripheral Select 1 Register */
#define REG_MATRIX0_SPSELR0     (0xF00182C0) /**< (MATRIX0) Security Peripheral Select 1 Register 0 */
#define REG_MATRIX0_SPSELR1     (0xF00182C4) /**< (MATRIX0) Security Peripheral Select 1 Register 1 */
#define REG_MATRIX0_SPSELR2     (0xF00182C8) /**< (MATRIX0) Security Peripheral Select 1 Register 2 */

#else

#define REG_MATRIX0_PRAS0       (*(__IO uint32_t*)0xF0018080U) /**< (MATRIX0) Priority Register A for Slave 0 */
#define REG_MATRIX0_PRBS0       (*(__IO uint32_t*)0xF0018084U) /**< (MATRIX0) Priority Register B for Slave 0 */
#define REG_MATRIX0_PRAS1       (*(__IO uint32_t*)0xF0018088U) /**< (MATRIX0) Priority Register A for Slave 1 */
#define REG_MATRIX0_PRBS1       (*(__IO uint32_t*)0xF001808CU) /**< (MATRIX0) Priority Register B for Slave 1 */
#define REG_MATRIX0_PRAS2       (*(__IO uint32_t*)0xF0018090U) /**< (MATRIX0) Priority Register A for Slave 2 */
#define REG_MATRIX0_PRBS2       (*(__IO uint32_t*)0xF0018094U) /**< (MATRIX0) Priority Register B for Slave 2 */
#define REG_MATRIX0_PRAS3       (*(__IO uint32_t*)0xF0018098U) /**< (MATRIX0) Priority Register A for Slave 3 */
#define REG_MATRIX0_PRBS3       (*(__IO uint32_t*)0xF001809CU) /**< (MATRIX0) Priority Register B for Slave 3 */
#define REG_MATRIX0_PRAS4       (*(__IO uint32_t*)0xF00180A0U) /**< (MATRIX0) Priority Register A for Slave 4 */
#define REG_MATRIX0_PRBS4       (*(__IO uint32_t*)0xF00180A4U) /**< (MATRIX0) Priority Register B for Slave 4 */
#define REG_MATRIX0_PRAS5       (*(__IO uint32_t*)0xF00180A8U) /**< (MATRIX0) Priority Register A for Slave 5 */
#define REG_MATRIX0_PRBS5       (*(__IO uint32_t*)0xF00180ACU) /**< (MATRIX0) Priority Register B for Slave 5 */
#define REG_MATRIX0_PRAS6       (*(__IO uint32_t*)0xF00180B0U) /**< (MATRIX0) Priority Register A for Slave 6 */
#define REG_MATRIX0_PRBS6       (*(__IO uint32_t*)0xF00180B4U) /**< (MATRIX0) Priority Register B for Slave 6 */
#define REG_MATRIX0_PRAS7       (*(__IO uint32_t*)0xF00180B8U) /**< (MATRIX0) Priority Register A for Slave 7 */
#define REG_MATRIX0_PRBS7       (*(__IO uint32_t*)0xF00180BCU) /**< (MATRIX0) Priority Register B for Slave 7 */
#define REG_MATRIX0_PRAS8       (*(__IO uint32_t*)0xF00180C0U) /**< (MATRIX0) Priority Register A for Slave 8 */
#define REG_MATRIX0_PRBS8       (*(__IO uint32_t*)0xF00180C4U) /**< (MATRIX0) Priority Register B for Slave 8 */
#define REG_MATRIX0_PRAS9       (*(__IO uint32_t*)0xF00180C8U) /**< (MATRIX0) Priority Register A for Slave 9 */
#define REG_MATRIX0_PRBS9       (*(__IO uint32_t*)0xF00180CCU) /**< (MATRIX0) Priority Register B for Slave 9 */
#define REG_MATRIX0_PRAS10      (*(__IO uint32_t*)0xF00180D0U) /**< (MATRIX0) Priority Register A for Slave 10 */
#define REG_MATRIX0_PRBS10      (*(__IO uint32_t*)0xF00180D4U) /**< (MATRIX0) Priority Register B for Slave 10 */
#define REG_MATRIX0_PRAS11      (*(__IO uint32_t*)0xF00180D8U) /**< (MATRIX0) Priority Register A for Slave 11 */
#define REG_MATRIX0_PRBS11      (*(__IO uint32_t*)0xF00180DCU) /**< (MATRIX0) Priority Register B for Slave 11 */
#define REG_MATRIX0_PRAS12      (*(__IO uint32_t*)0xF00180E0U) /**< (MATRIX0) Priority Register A for Slave 12 */
#define REG_MATRIX0_PRBS12      (*(__IO uint32_t*)0xF00180E4U) /**< (MATRIX0) Priority Register B for Slave 12 */
#define REG_MATRIX0_PRAS13      (*(__IO uint32_t*)0xF00180E8U) /**< (MATRIX0) Priority Register A for Slave 13 */
#define REG_MATRIX0_PRBS13      (*(__IO uint32_t*)0xF00180ECU) /**< (MATRIX0) Priority Register B for Slave 13 */
#define REG_MATRIX0_PRAS14      (*(__IO uint32_t*)0xF00180F0U) /**< (MATRIX0) Priority Register A for Slave 14 */
#define REG_MATRIX0_PRBS14      (*(__IO uint32_t*)0xF00180F4U) /**< (MATRIX0) Priority Register B for Slave 14 */
#define REG_MATRIX0_MCFG        (*(__IO uint32_t*)0xF0018000U) /**< (MATRIX0) Master Configuration Register */
#define REG_MATRIX0_MCFG0       (*(__IO uint32_t*)0xF0018000U) /**< (MATRIX0) Master Configuration Register 0 */
#define REG_MATRIX0_MCFG1       (*(__IO uint32_t*)0xF0018004U) /**< (MATRIX0) Master Configuration Register 1 */
#define REG_MATRIX0_MCFG2       (*(__IO uint32_t*)0xF0018008U) /**< (MATRIX0) Master Configuration Register 2 */
#define REG_MATRIX0_MCFG3       (*(__IO uint32_t*)0xF001800CU) /**< (MATRIX0) Master Configuration Register 3 */
#define REG_MATRIX0_MCFG4       (*(__IO uint32_t*)0xF0018010U) /**< (MATRIX0) Master Configuration Register 4 */
#define REG_MATRIX0_MCFG5       (*(__IO uint32_t*)0xF0018014U) /**< (MATRIX0) Master Configuration Register 5 */
#define REG_MATRIX0_MCFG6       (*(__IO uint32_t*)0xF0018018U) /**< (MATRIX0) Master Configuration Register 6 */
#define REG_MATRIX0_MCFG7       (*(__IO uint32_t*)0xF001801CU) /**< (MATRIX0) Master Configuration Register 7 */
#define REG_MATRIX0_MCFG8       (*(__IO uint32_t*)0xF0018020U) /**< (MATRIX0) Master Configuration Register 8 */
#define REG_MATRIX0_MCFG9       (*(__IO uint32_t*)0xF0018024U) /**< (MATRIX0) Master Configuration Register 9 */
#define REG_MATRIX0_MCFG10      (*(__IO uint32_t*)0xF0018028U) /**< (MATRIX0) Master Configuration Register 10 */
#define REG_MATRIX0_MCFG11      (*(__IO uint32_t*)0xF001802CU) /**< (MATRIX0) Master Configuration Register 11 */
#define REG_MATRIX0_SCFG        (*(__IO uint32_t*)0xF0018040U) /**< (MATRIX0) Slave Configuration Register */
#define REG_MATRIX0_SCFG0       (*(__IO uint32_t*)0xF0018040U) /**< (MATRIX0) Slave Configuration Register 0 */
#define REG_MATRIX0_SCFG1       (*(__IO uint32_t*)0xF0018044U) /**< (MATRIX0) Slave Configuration Register 1 */
#define REG_MATRIX0_SCFG2       (*(__IO uint32_t*)0xF0018048U) /**< (MATRIX0) Slave Configuration Register 2 */
#define REG_MATRIX0_SCFG3       (*(__IO uint32_t*)0xF001804CU) /**< (MATRIX0) Slave Configuration Register 3 */
#define REG_MATRIX0_SCFG4       (*(__IO uint32_t*)0xF0018050U) /**< (MATRIX0) Slave Configuration Register 4 */
#define REG_MATRIX0_SCFG5       (*(__IO uint32_t*)0xF0018054U) /**< (MATRIX0) Slave Configuration Register 5 */
#define REG_MATRIX0_SCFG6       (*(__IO uint32_t*)0xF0018058U) /**< (MATRIX0) Slave Configuration Register 6 */
#define REG_MATRIX0_SCFG7       (*(__IO uint32_t*)0xF001805CU) /**< (MATRIX0) Slave Configuration Register 7 */
#define REG_MATRIX0_SCFG8       (*(__IO uint32_t*)0xF0018060U) /**< (MATRIX0) Slave Configuration Register 8 */
#define REG_MATRIX0_SCFG9       (*(__IO uint32_t*)0xF0018064U) /**< (MATRIX0) Slave Configuration Register 9 */
#define REG_MATRIX0_SCFG10      (*(__IO uint32_t*)0xF0018068U) /**< (MATRIX0) Slave Configuration Register 10 */
#define REG_MATRIX0_SCFG11      (*(__IO uint32_t*)0xF001806CU) /**< (MATRIX0) Slave Configuration Register 11 */
#define REG_MATRIX0_SCFG12      (*(__IO uint32_t*)0xF0018070U) /**< (MATRIX0) Slave Configuration Register 12 */
#define REG_MATRIX0_SCFG13      (*(__IO uint32_t*)0xF0018074U) /**< (MATRIX0) Slave Configuration Register 13 */
#define REG_MATRIX0_SCFG14      (*(__IO uint32_t*)0xF0018078U) /**< (MATRIX0) Slave Configuration Register 14 */
#define REG_MATRIX0_MEIER       (*(__O  uint32_t*)0xF0018150U) /**< (MATRIX0) Master Error Interrupt Enable Register */
#define REG_MATRIX0_MEIDR       (*(__O  uint32_t*)0xF0018154U) /**< (MATRIX0) Master Error Interrupt Disable Register */
#define REG_MATRIX0_MEIMR       (*(__I  uint32_t*)0xF0018158U) /**< (MATRIX0) Master Error Interrupt Mask Register */
#define REG_MATRIX0_MESR        (*(__I  uint32_t*)0xF001815CU) /**< (MATRIX0) Master Error Status Register */
#define REG_MATRIX0_MEAR        (*(__I  uint32_t*)0xF0018160U) /**< (MATRIX0) Master 0 Error Address Register */
#define REG_MATRIX0_MEAR0       (*(__I  uint32_t*)0xF0018160U) /**< (MATRIX0) Master 0 Error Address Register 0 */
#define REG_MATRIX0_MEAR1       (*(__I  uint32_t*)0xF0018164U) /**< (MATRIX0) Master 0 Error Address Register 1 */
#define REG_MATRIX0_MEAR2       (*(__I  uint32_t*)0xF0018168U) /**< (MATRIX0) Master 0 Error Address Register 2 */
#define REG_MATRIX0_MEAR3       (*(__I  uint32_t*)0xF001816CU) /**< (MATRIX0) Master 0 Error Address Register 3 */
#define REG_MATRIX0_MEAR4       (*(__I  uint32_t*)0xF0018170U) /**< (MATRIX0) Master 0 Error Address Register 4 */
#define REG_MATRIX0_MEAR5       (*(__I  uint32_t*)0xF0018174U) /**< (MATRIX0) Master 0 Error Address Register 5 */
#define REG_MATRIX0_MEAR6       (*(__I  uint32_t*)0xF0018178U) /**< (MATRIX0) Master 0 Error Address Register 6 */
#define REG_MATRIX0_MEAR7       (*(__I  uint32_t*)0xF001817CU) /**< (MATRIX0) Master 0 Error Address Register 7 */
#define REG_MATRIX0_MEAR8       (*(__I  uint32_t*)0xF0018180U) /**< (MATRIX0) Master 0 Error Address Register 8 */
#define REG_MATRIX0_MEAR9       (*(__I  uint32_t*)0xF0018184U) /**< (MATRIX0) Master 0 Error Address Register 9 */
#define REG_MATRIX0_MEAR10      (*(__I  uint32_t*)0xF0018188U) /**< (MATRIX0) Master 0 Error Address Register 10 */
#define REG_MATRIX0_MEAR11      (*(__I  uint32_t*)0xF001818CU) /**< (MATRIX0) Master 0 Error Address Register 11 */
#define REG_MATRIX0_WPMR        (*(__IO uint32_t*)0xF00181E4U) /**< (MATRIX0) Write Protection Mode Register */
#define REG_MATRIX0_WPSR        (*(__I  uint32_t*)0xF00181E8U) /**< (MATRIX0) Write Protection Status Register */
#define REG_MATRIX0_SSR         (*(__IO uint32_t*)0xF0018200U) /**< (MATRIX0) Security Slave 0 Register */
#define REG_MATRIX0_SSR0        (*(__IO uint32_t*)0xF0018200U) /**< (MATRIX0) Security Slave 0 Register 0 */
#define REG_MATRIX0_SSR1        (*(__IO uint32_t*)0xF0018204U) /**< (MATRIX0) Security Slave 0 Register 1 */
#define REG_MATRIX0_SSR2        (*(__IO uint32_t*)0xF0018208U) /**< (MATRIX0) Security Slave 0 Register 2 */
#define REG_MATRIX0_SSR3        (*(__IO uint32_t*)0xF001820CU) /**< (MATRIX0) Security Slave 0 Register 3 */
#define REG_MATRIX0_SSR4        (*(__IO uint32_t*)0xF0018210U) /**< (MATRIX0) Security Slave 0 Register 4 */
#define REG_MATRIX0_SSR5        (*(__IO uint32_t*)0xF0018214U) /**< (MATRIX0) Security Slave 0 Register 5 */
#define REG_MATRIX0_SSR6        (*(__IO uint32_t*)0xF0018218U) /**< (MATRIX0) Security Slave 0 Register 6 */
#define REG_MATRIX0_SSR7        (*(__IO uint32_t*)0xF001821CU) /**< (MATRIX0) Security Slave 0 Register 7 */
#define REG_MATRIX0_SSR8        (*(__IO uint32_t*)0xF0018220U) /**< (MATRIX0) Security Slave 0 Register 8 */
#define REG_MATRIX0_SSR9        (*(__IO uint32_t*)0xF0018224U) /**< (MATRIX0) Security Slave 0 Register 9 */
#define REG_MATRIX0_SSR10       (*(__IO uint32_t*)0xF0018228U) /**< (MATRIX0) Security Slave 0 Register 10 */
#define REG_MATRIX0_SSR11       (*(__IO uint32_t*)0xF001822CU) /**< (MATRIX0) Security Slave 0 Register 11 */
#define REG_MATRIX0_SSR12       (*(__IO uint32_t*)0xF0018230U) /**< (MATRIX0) Security Slave 0 Register 12 */
#define REG_MATRIX0_SSR13       (*(__IO uint32_t*)0xF0018234U) /**< (MATRIX0) Security Slave 0 Register 13 */
#define REG_MATRIX0_SSR14       (*(__IO uint32_t*)0xF0018238U) /**< (MATRIX0) Security Slave 0 Register 14 */
#define REG_MATRIX0_SASSR       (*(__IO uint32_t*)0xF0018240U) /**< (MATRIX0) Security Areas Split Slave 0 Register */
#define REG_MATRIX0_SASSR0      (*(__IO uint32_t*)0xF0018240U) /**< (MATRIX0) Security Areas Split Slave 0 Register 0 */
#define REG_MATRIX0_SASSR1      (*(__IO uint32_t*)0xF0018244U) /**< (MATRIX0) Security Areas Split Slave 0 Register 1 */
#define REG_MATRIX0_SASSR2      (*(__IO uint32_t*)0xF0018248U) /**< (MATRIX0) Security Areas Split Slave 0 Register 2 */
#define REG_MATRIX0_SASSR3      (*(__IO uint32_t*)0xF001824CU) /**< (MATRIX0) Security Areas Split Slave 0 Register 3 */
#define REG_MATRIX0_SASSR4      (*(__IO uint32_t*)0xF0018250U) /**< (MATRIX0) Security Areas Split Slave 0 Register 4 */
#define REG_MATRIX0_SASSR5      (*(__IO uint32_t*)0xF0018254U) /**< (MATRIX0) Security Areas Split Slave 0 Register 5 */
#define REG_MATRIX0_SASSR6      (*(__IO uint32_t*)0xF0018258U) /**< (MATRIX0) Security Areas Split Slave 0 Register 6 */
#define REG_MATRIX0_SASSR7      (*(__IO uint32_t*)0xF001825CU) /**< (MATRIX0) Security Areas Split Slave 0 Register 7 */
#define REG_MATRIX0_SASSR8      (*(__IO uint32_t*)0xF0018260U) /**< (MATRIX0) Security Areas Split Slave 0 Register 8 */
#define REG_MATRIX0_SASSR9      (*(__IO uint32_t*)0xF0018264U) /**< (MATRIX0) Security Areas Split Slave 0 Register 9 */
#define REG_MATRIX0_SASSR10     (*(__IO uint32_t*)0xF0018268U) /**< (MATRIX0) Security Areas Split Slave 0 Register 10 */
#define REG_MATRIX0_SASSR11     (*(__IO uint32_t*)0xF001826CU) /**< (MATRIX0) Security Areas Split Slave 0 Register 11 */
#define REG_MATRIX0_SASSR12     (*(__IO uint32_t*)0xF0018270U) /**< (MATRIX0) Security Areas Split Slave 0 Register 12 */
#define REG_MATRIX0_SASSR13     (*(__IO uint32_t*)0xF0018274U) /**< (MATRIX0) Security Areas Split Slave 0 Register 13 */
#define REG_MATRIX0_SASSR14     (*(__IO uint32_t*)0xF0018278U) /**< (MATRIX0) Security Areas Split Slave 0 Register 14 */
#define REG_MATRIX0_SRTSR       (*(__IO uint32_t*)0xF0018284U) /**< (MATRIX0) Security Region Top Slave 1 Register */
#define REG_MATRIX0_SRTSR0      (*(__IO uint32_t*)0xF0018284U) /**< (MATRIX0) Security Region Top Slave 1 Register 0 */
#define REG_MATRIX0_SRTSR1      (*(__IO uint32_t*)0xF0018288U) /**< (MATRIX0) Security Region Top Slave 1 Register 1 */
#define REG_MATRIX0_SRTSR2      (*(__IO uint32_t*)0xF001828CU) /**< (MATRIX0) Security Region Top Slave 1 Register 2 */
#define REG_MATRIX0_SRTSR3      (*(__IO uint32_t*)0xF0018290U) /**< (MATRIX0) Security Region Top Slave 1 Register 3 */
#define REG_MATRIX0_SRTSR4      (*(__IO uint32_t*)0xF0018294U) /**< (MATRIX0) Security Region Top Slave 1 Register 4 */
#define REG_MATRIX0_SRTSR5      (*(__IO uint32_t*)0xF0018298U) /**< (MATRIX0) Security Region Top Slave 1 Register 5 */
#define REG_MATRIX0_SRTSR6      (*(__IO uint32_t*)0xF001829CU) /**< (MATRIX0) Security Region Top Slave 1 Register 6 */
#define REG_MATRIX0_SRTSR7      (*(__IO uint32_t*)0xF00182A0U) /**< (MATRIX0) Security Region Top Slave 1 Register 7 */
#define REG_MATRIX0_SRTSR8      (*(__IO uint32_t*)0xF00182A4U) /**< (MATRIX0) Security Region Top Slave 1 Register 8 */
#define REG_MATRIX0_SRTSR9      (*(__IO uint32_t*)0xF00182A8U) /**< (MATRIX0) Security Region Top Slave 1 Register 9 */
#define REG_MATRIX0_SRTSR10     (*(__IO uint32_t*)0xF00182ACU) /**< (MATRIX0) Security Region Top Slave 1 Register 10 */
#define REG_MATRIX0_SRTSR11     (*(__IO uint32_t*)0xF00182B0U) /**< (MATRIX0) Security Region Top Slave 1 Register 11 */
#define REG_MATRIX0_SRTSR12     (*(__IO uint32_t*)0xF00182B4U) /**< (MATRIX0) Security Region Top Slave 1 Register 12 */
#define REG_MATRIX0_SRTSR13     (*(__IO uint32_t*)0xF00182B8U) /**< (MATRIX0) Security Region Top Slave 1 Register 13 */
#define REG_MATRIX0_SPSELR      (*(__IO uint32_t*)0xF00182C0U) /**< (MATRIX0) Security Peripheral Select 1 Register */
#define REG_MATRIX0_SPSELR0     (*(__IO uint32_t*)0xF00182C0U) /**< (MATRIX0) Security Peripheral Select 1 Register 0 */
#define REG_MATRIX0_SPSELR1     (*(__IO uint32_t*)0xF00182C4U) /**< (MATRIX0) Security Peripheral Select 1 Register 1 */
#define REG_MATRIX0_SPSELR2     (*(__IO uint32_t*)0xF00182C8U) /**< (MATRIX0) Security Peripheral Select 1 Register 2 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for MATRIX0 peripheral ========== */
#define MATRIX0_INSTANCE_ID                      15         
#define MATRIX0_CLOCK_ID                         15         

#endif /* _SAMA5D2_MATRIX0_INSTANCE_ */
