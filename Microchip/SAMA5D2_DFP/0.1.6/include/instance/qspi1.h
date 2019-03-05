/**
 * \file
 *
 * \brief Instance description for QSPI1
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
#ifndef _SAMA5D2_QSPI1_INSTANCE_H_
#define _SAMA5D2_QSPI1_INSTANCE_H_

/* ========== Register definition for QSPI1 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_QSPI1_CR            (0xF0024000) /**< (QSPI1) Control Register */
#define REG_QSPI1_MR            (0xF0024004) /**< (QSPI1) Mode Register */
#define REG_QSPI1_RDR           (0xF0024008) /**< (QSPI1) Receive Data Register */
#define REG_QSPI1_TDR           (0xF002400C) /**< (QSPI1) Transmit Data Register */
#define REG_QSPI1_SR            (0xF0024010) /**< (QSPI1) Status Register */
#define REG_QSPI1_IER           (0xF0024014) /**< (QSPI1) Interrupt Enable Register */
#define REG_QSPI1_IDR           (0xF0024018) /**< (QSPI1) Interrupt Disable Register */
#define REG_QSPI1_IMR           (0xF002401C) /**< (QSPI1) Interrupt Mask Register */
#define REG_QSPI1_SCR           (0xF0024020) /**< (QSPI1) Serial Clock Register */
#define REG_QSPI1_IAR           (0xF0024030) /**< (QSPI1) Instruction Address Register */
#define REG_QSPI1_ICR           (0xF0024034) /**< (QSPI1) Instruction Code Register */
#define REG_QSPI1_IFR           (0xF0024038) /**< (QSPI1) Instruction Frame Register */
#define REG_QSPI1_SMR           (0xF0024040) /**< (QSPI1) Scrambling Mode Register */
#define REG_QSPI1_SKR           (0xF0024044) /**< (QSPI1) Scrambling Key Register */
#define REG_QSPI1_WPMR          (0xF00240E4) /**< (QSPI1) Write Protection Mode Register */
#define REG_QSPI1_WPSR          (0xF00240E8) /**< (QSPI1) Write Protection Status Register */

#else

#define REG_QSPI1_CR            (*(__O  uint32_t*)0xF0024000U) /**< (QSPI1) Control Register */
#define REG_QSPI1_MR            (*(__IO uint32_t*)0xF0024004U) /**< (QSPI1) Mode Register */
#define REG_QSPI1_RDR           (*(__I  uint32_t*)0xF0024008U) /**< (QSPI1) Receive Data Register */
#define REG_QSPI1_TDR           (*(__O  uint32_t*)0xF002400CU) /**< (QSPI1) Transmit Data Register */
#define REG_QSPI1_SR            (*(__I  uint32_t*)0xF0024010U) /**< (QSPI1) Status Register */
#define REG_QSPI1_IER           (*(__O  uint32_t*)0xF0024014U) /**< (QSPI1) Interrupt Enable Register */
#define REG_QSPI1_IDR           (*(__O  uint32_t*)0xF0024018U) /**< (QSPI1) Interrupt Disable Register */
#define REG_QSPI1_IMR           (*(__I  uint32_t*)0xF002401CU) /**< (QSPI1) Interrupt Mask Register */
#define REG_QSPI1_SCR           (*(__IO uint32_t*)0xF0024020U) /**< (QSPI1) Serial Clock Register */
#define REG_QSPI1_IAR           (*(__IO uint32_t*)0xF0024030U) /**< (QSPI1) Instruction Address Register */
#define REG_QSPI1_ICR           (*(__IO uint32_t*)0xF0024034U) /**< (QSPI1) Instruction Code Register */
#define REG_QSPI1_IFR           (*(__IO uint32_t*)0xF0024038U) /**< (QSPI1) Instruction Frame Register */
#define REG_QSPI1_SMR           (*(__IO uint32_t*)0xF0024040U) /**< (QSPI1) Scrambling Mode Register */
#define REG_QSPI1_SKR           (*(__O  uint32_t*)0xF0024044U) /**< (QSPI1) Scrambling Key Register */
#define REG_QSPI1_WPMR          (*(__IO uint32_t*)0xF00240E4U) /**< (QSPI1) Write Protection Mode Register */
#define REG_QSPI1_WPSR          (*(__I  uint32_t*)0xF00240E8U) /**< (QSPI1) Write Protection Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for QSPI1 peripheral ========== */
#define QSPI1_INSTANCE_ID                        53         
#define QSPI1_CLOCK_ID                           53         
#define QSPI1_DMAC_ID_TX                         48         
#define QSPI1_DMAC_ID_RX                         49         

#endif /* _SAMA5D2_QSPI1_INSTANCE_ */
