/**
 * \file
 *
 * \brief Instance description for SSC0
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
#ifndef _SAMA5D2_SSC0_INSTANCE_H_
#define _SAMA5D2_SSC0_INSTANCE_H_

/* ========== Register definition for SSC0 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_SSC0_CR             (0xF8004000) /**< (SSC0) Control Register */
#define REG_SSC0_CMR            (0xF8004004) /**< (SSC0) Clock Mode Register */
#define REG_SSC0_RCMR           (0xF8004010) /**< (SSC0) Receive Clock Mode Register */
#define REG_SSC0_RFMR           (0xF8004014) /**< (SSC0) Receive Frame Mode Register */
#define REG_SSC0_TCMR           (0xF8004018) /**< (SSC0) Transmit Clock Mode Register */
#define REG_SSC0_TFMR           (0xF800401C) /**< (SSC0) Transmit Frame Mode Register */
#define REG_SSC0_RHR            (0xF8004020) /**< (SSC0) Receive Holding Register */
#define REG_SSC0_THR            (0xF8004024) /**< (SSC0) Transmit Holding Register */
#define REG_SSC0_RSHR           (0xF8004030) /**< (SSC0) Receive Sync. Holding Register */
#define REG_SSC0_TSHR           (0xF8004034) /**< (SSC0) Transmit Sync. Holding Register */
#define REG_SSC0_RC0R           (0xF8004038) /**< (SSC0) Receive Compare 0 Register */
#define REG_SSC0_RC1R           (0xF800403C) /**< (SSC0) Receive Compare 1 Register */
#define REG_SSC0_SR             (0xF8004040) /**< (SSC0) Status Register */
#define REG_SSC0_IER            (0xF8004044) /**< (SSC0) Interrupt Enable Register */
#define REG_SSC0_IDR            (0xF8004048) /**< (SSC0) Interrupt Disable Register */
#define REG_SSC0_IMR            (0xF800404C) /**< (SSC0) Interrupt Mask Register */
#define REG_SSC0_WPMR           (0xF80040E4) /**< (SSC0) Write Protection Mode Register */
#define REG_SSC0_WPSR           (0xF80040E8) /**< (SSC0) Write Protection Status Register */

#else

#define REG_SSC0_CR             (*(__O  uint32_t*)0xF8004000U) /**< (SSC0) Control Register */
#define REG_SSC0_CMR            (*(__IO uint32_t*)0xF8004004U) /**< (SSC0) Clock Mode Register */
#define REG_SSC0_RCMR           (*(__IO uint32_t*)0xF8004010U) /**< (SSC0) Receive Clock Mode Register */
#define REG_SSC0_RFMR           (*(__IO uint32_t*)0xF8004014U) /**< (SSC0) Receive Frame Mode Register */
#define REG_SSC0_TCMR           (*(__IO uint32_t*)0xF8004018U) /**< (SSC0) Transmit Clock Mode Register */
#define REG_SSC0_TFMR           (*(__IO uint32_t*)0xF800401CU) /**< (SSC0) Transmit Frame Mode Register */
#define REG_SSC0_RHR            (*(__I  uint32_t*)0xF8004020U) /**< (SSC0) Receive Holding Register */
#define REG_SSC0_THR            (*(__O  uint32_t*)0xF8004024U) /**< (SSC0) Transmit Holding Register */
#define REG_SSC0_RSHR           (*(__I  uint32_t*)0xF8004030U) /**< (SSC0) Receive Sync. Holding Register */
#define REG_SSC0_TSHR           (*(__IO uint32_t*)0xF8004034U) /**< (SSC0) Transmit Sync. Holding Register */
#define REG_SSC0_RC0R           (*(__IO uint32_t*)0xF8004038U) /**< (SSC0) Receive Compare 0 Register */
#define REG_SSC0_RC1R           (*(__IO uint32_t*)0xF800403CU) /**< (SSC0) Receive Compare 1 Register */
#define REG_SSC0_SR             (*(__I  uint32_t*)0xF8004040U) /**< (SSC0) Status Register */
#define REG_SSC0_IER            (*(__O  uint32_t*)0xF8004044U) /**< (SSC0) Interrupt Enable Register */
#define REG_SSC0_IDR            (*(__O  uint32_t*)0xF8004048U) /**< (SSC0) Interrupt Disable Register */
#define REG_SSC0_IMR            (*(__I  uint32_t*)0xF800404CU) /**< (SSC0) Interrupt Mask Register */
#define REG_SSC0_WPMR           (*(__IO uint32_t*)0xF80040E4U) /**< (SSC0) Write Protection Mode Register */
#define REG_SSC0_WPSR           (*(__I  uint32_t*)0xF80040E8U) /**< (SSC0) Write Protection Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for SSC0 peripheral ========== */
#define SSC0_INSTANCE_ID                         43         
#define SSC0_CLOCK_ID                            43         
#define SSC0_DMAC_ID_TX                          21         
#define SSC0_DMAC_ID_RX                          22         

#endif /* _SAMA5D2_SSC0_INSTANCE_ */
