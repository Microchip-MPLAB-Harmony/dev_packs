/**
 * \file
 *
 * \brief Instance description for QSPI0
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
#ifndef _SAMA5D2_QSPI0_INSTANCE_H_
#define _SAMA5D2_QSPI0_INSTANCE_H_

/* ========== Register definition for QSPI0 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_QSPI0_CR            (0xF0020000) /**< (QSPI0) Control Register */
#define REG_QSPI0_MR            (0xF0020004) /**< (QSPI0) Mode Register */
#define REG_QSPI0_RDR           (0xF0020008) /**< (QSPI0) Receive Data Register */
#define REG_QSPI0_TDR           (0xF002000C) /**< (QSPI0) Transmit Data Register */
#define REG_QSPI0_SR            (0xF0020010) /**< (QSPI0) Status Register */
#define REG_QSPI0_IER           (0xF0020014) /**< (QSPI0) Interrupt Enable Register */
#define REG_QSPI0_IDR           (0xF0020018) /**< (QSPI0) Interrupt Disable Register */
#define REG_QSPI0_IMR           (0xF002001C) /**< (QSPI0) Interrupt Mask Register */
#define REG_QSPI0_SCR           (0xF0020020) /**< (QSPI0) Serial Clock Register */
#define REG_QSPI0_IAR           (0xF0020030) /**< (QSPI0) Instruction Address Register */
#define REG_QSPI0_ICR           (0xF0020034) /**< (QSPI0) Instruction Code Register */
#define REG_QSPI0_IFR           (0xF0020038) /**< (QSPI0) Instruction Frame Register */
#define REG_QSPI0_SMR           (0xF0020040) /**< (QSPI0) Scrambling Mode Register */
#define REG_QSPI0_SKR           (0xF0020044) /**< (QSPI0) Scrambling Key Register */
#define REG_QSPI0_WPMR          (0xF00200E4) /**< (QSPI0) Write Protection Mode Register */
#define REG_QSPI0_WPSR          (0xF00200E8) /**< (QSPI0) Write Protection Status Register */

#else

#define REG_QSPI0_CR            (*(__O  uint32_t*)0xF0020000U) /**< (QSPI0) Control Register */
#define REG_QSPI0_MR            (*(__IO uint32_t*)0xF0020004U) /**< (QSPI0) Mode Register */
#define REG_QSPI0_RDR           (*(__I  uint32_t*)0xF0020008U) /**< (QSPI0) Receive Data Register */
#define REG_QSPI0_TDR           (*(__O  uint32_t*)0xF002000CU) /**< (QSPI0) Transmit Data Register */
#define REG_QSPI0_SR            (*(__I  uint32_t*)0xF0020010U) /**< (QSPI0) Status Register */
#define REG_QSPI0_IER           (*(__O  uint32_t*)0xF0020014U) /**< (QSPI0) Interrupt Enable Register */
#define REG_QSPI0_IDR           (*(__O  uint32_t*)0xF0020018U) /**< (QSPI0) Interrupt Disable Register */
#define REG_QSPI0_IMR           (*(__I  uint32_t*)0xF002001CU) /**< (QSPI0) Interrupt Mask Register */
#define REG_QSPI0_SCR           (*(__IO uint32_t*)0xF0020020U) /**< (QSPI0) Serial Clock Register */
#define REG_QSPI0_IAR           (*(__IO uint32_t*)0xF0020030U) /**< (QSPI0) Instruction Address Register */
#define REG_QSPI0_ICR           (*(__IO uint32_t*)0xF0020034U) /**< (QSPI0) Instruction Code Register */
#define REG_QSPI0_IFR           (*(__IO uint32_t*)0xF0020038U) /**< (QSPI0) Instruction Frame Register */
#define REG_QSPI0_SMR           (*(__IO uint32_t*)0xF0020040U) /**< (QSPI0) Scrambling Mode Register */
#define REG_QSPI0_SKR           (*(__O  uint32_t*)0xF0020044U) /**< (QSPI0) Scrambling Key Register */
#define REG_QSPI0_WPMR          (*(__IO uint32_t*)0xF00200E4U) /**< (QSPI0) Write Protection Mode Register */
#define REG_QSPI0_WPSR          (*(__I  uint32_t*)0xF00200E8U) /**< (QSPI0) Write Protection Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for QSPI0 peripheral ========== */
#define QSPI0_INSTANCE_ID                        52         
#define QSPI0_CLOCK_ID                           52         
#define QSPI0_DMAC_ID_TX                         4          
#define QSPI0_DMAC_ID_RX                         5          

#endif /* _SAMA5D2_QSPI0_INSTANCE_ */
