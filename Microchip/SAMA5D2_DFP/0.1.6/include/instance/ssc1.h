/**
 * \file
 *
 * \brief Instance description for SSC1
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
#ifndef _SAMA5D2_SSC1_INSTANCE_H_
#define _SAMA5D2_SSC1_INSTANCE_H_

/* ========== Register definition for SSC1 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_SSC1_CR             (0xFC004000) /**< (SSC1) Control Register */
#define REG_SSC1_CMR            (0xFC004004) /**< (SSC1) Clock Mode Register */
#define REG_SSC1_RCMR           (0xFC004010) /**< (SSC1) Receive Clock Mode Register */
#define REG_SSC1_RFMR           (0xFC004014) /**< (SSC1) Receive Frame Mode Register */
#define REG_SSC1_TCMR           (0xFC004018) /**< (SSC1) Transmit Clock Mode Register */
#define REG_SSC1_TFMR           (0xFC00401C) /**< (SSC1) Transmit Frame Mode Register */
#define REG_SSC1_RHR            (0xFC004020) /**< (SSC1) Receive Holding Register */
#define REG_SSC1_THR            (0xFC004024) /**< (SSC1) Transmit Holding Register */
#define REG_SSC1_RSHR           (0xFC004030) /**< (SSC1) Receive Sync. Holding Register */
#define REG_SSC1_TSHR           (0xFC004034) /**< (SSC1) Transmit Sync. Holding Register */
#define REG_SSC1_RC0R           (0xFC004038) /**< (SSC1) Receive Compare 0 Register */
#define REG_SSC1_RC1R           (0xFC00403C) /**< (SSC1) Receive Compare 1 Register */
#define REG_SSC1_SR             (0xFC004040) /**< (SSC1) Status Register */
#define REG_SSC1_IER            (0xFC004044) /**< (SSC1) Interrupt Enable Register */
#define REG_SSC1_IDR            (0xFC004048) /**< (SSC1) Interrupt Disable Register */
#define REG_SSC1_IMR            (0xFC00404C) /**< (SSC1) Interrupt Mask Register */
#define REG_SSC1_WPMR           (0xFC0040E4) /**< (SSC1) Write Protection Mode Register */
#define REG_SSC1_WPSR           (0xFC0040E8) /**< (SSC1) Write Protection Status Register */

#else

#define REG_SSC1_CR             (*(__O  uint32_t*)0xFC004000U) /**< (SSC1) Control Register */
#define REG_SSC1_CMR            (*(__IO uint32_t*)0xFC004004U) /**< (SSC1) Clock Mode Register */
#define REG_SSC1_RCMR           (*(__IO uint32_t*)0xFC004010U) /**< (SSC1) Receive Clock Mode Register */
#define REG_SSC1_RFMR           (*(__IO uint32_t*)0xFC004014U) /**< (SSC1) Receive Frame Mode Register */
#define REG_SSC1_TCMR           (*(__IO uint32_t*)0xFC004018U) /**< (SSC1) Transmit Clock Mode Register */
#define REG_SSC1_TFMR           (*(__IO uint32_t*)0xFC00401CU) /**< (SSC1) Transmit Frame Mode Register */
#define REG_SSC1_RHR            (*(__I  uint32_t*)0xFC004020U) /**< (SSC1) Receive Holding Register */
#define REG_SSC1_THR            (*(__O  uint32_t*)0xFC004024U) /**< (SSC1) Transmit Holding Register */
#define REG_SSC1_RSHR           (*(__I  uint32_t*)0xFC004030U) /**< (SSC1) Receive Sync. Holding Register */
#define REG_SSC1_TSHR           (*(__IO uint32_t*)0xFC004034U) /**< (SSC1) Transmit Sync. Holding Register */
#define REG_SSC1_RC0R           (*(__IO uint32_t*)0xFC004038U) /**< (SSC1) Receive Compare 0 Register */
#define REG_SSC1_RC1R           (*(__IO uint32_t*)0xFC00403CU) /**< (SSC1) Receive Compare 1 Register */
#define REG_SSC1_SR             (*(__I  uint32_t*)0xFC004040U) /**< (SSC1) Status Register */
#define REG_SSC1_IER            (*(__O  uint32_t*)0xFC004044U) /**< (SSC1) Interrupt Enable Register */
#define REG_SSC1_IDR            (*(__O  uint32_t*)0xFC004048U) /**< (SSC1) Interrupt Disable Register */
#define REG_SSC1_IMR            (*(__I  uint32_t*)0xFC00404CU) /**< (SSC1) Interrupt Mask Register */
#define REG_SSC1_WPMR           (*(__IO uint32_t*)0xFC0040E4U) /**< (SSC1) Write Protection Mode Register */
#define REG_SSC1_WPSR           (*(__I  uint32_t*)0xFC0040E8U) /**< (SSC1) Write Protection Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for SSC1 peripheral ========== */
#define SSC1_INSTANCE_ID                         44         
#define SSC1_CLOCK_ID                            44         
#define SSC1_DMAC_ID_TX                          23         
#define SSC1_DMAC_ID_RX                          24         

#endif /* _SAMA5D2_SSC1_INSTANCE_ */
