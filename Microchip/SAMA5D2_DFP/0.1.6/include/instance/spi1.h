/**
 * \file
 *
 * \brief Instance description for SPI1
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
#ifndef _SAMA5D2_SPI1_INSTANCE_H_
#define _SAMA5D2_SPI1_INSTANCE_H_

/* ========== Register definition for SPI1 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_SPI1_CR             (0xFC000000) /**< (SPI1) Control Register */
#define REG_SPI1_MR             (0xFC000004) /**< (SPI1) Mode Register */
#define REG_SPI1_RDR            (0xFC000008) /**< (SPI1) Receive Data Register */
#define REG_SPI1_TDR            (0xFC00000C) /**< (SPI1) Transmit Data Register */
#define REG_SPI1_SR             (0xFC000010) /**< (SPI1) Status Register */
#define REG_SPI1_IER            (0xFC000014) /**< (SPI1) Interrupt Enable Register */
#define REG_SPI1_IDR            (0xFC000018) /**< (SPI1) Interrupt Disable Register */
#define REG_SPI1_IMR            (0xFC00001C) /**< (SPI1) Interrupt Mask Register */
#define REG_SPI1_CSR            (0xFC000030) /**< (SPI1) Chip Select Register */
#define REG_SPI1_CSR0           (0xFC000030) /**< (SPI1) Chip Select Register 0 */
#define REG_SPI1_CSR1           (0xFC000034) /**< (SPI1) Chip Select Register 1 */
#define REG_SPI1_CSR2           (0xFC000038) /**< (SPI1) Chip Select Register 2 */
#define REG_SPI1_CSR3           (0xFC00003C) /**< (SPI1) Chip Select Register 3 */
#define REG_SPI1_FMR            (0xFC000040) /**< (SPI1) FIFO Mode Register */
#define REG_SPI1_FLR            (0xFC000044) /**< (SPI1) FIFO Level Register */
#define REG_SPI1_CMPR           (0xFC000048) /**< (SPI1) Comparison Register */
#define REG_SPI1_WPMR           (0xFC0000E4) /**< (SPI1) Write Protection Mode Register */
#define REG_SPI1_WPSR           (0xFC0000E8) /**< (SPI1) Write Protection Status Register */

#else

#define REG_SPI1_CR             (*(__O  uint32_t*)0xFC000000U) /**< (SPI1) Control Register */
#define REG_SPI1_MR             (*(__IO uint32_t*)0xFC000004U) /**< (SPI1) Mode Register */
#define REG_SPI1_RDR            (*(__I  uint32_t*)0xFC000008U) /**< (SPI1) Receive Data Register */
#define REG_SPI1_TDR            (*(__O  uint32_t*)0xFC00000CU) /**< (SPI1) Transmit Data Register */
#define REG_SPI1_SR             (*(__I  uint32_t*)0xFC000010U) /**< (SPI1) Status Register */
#define REG_SPI1_IER            (*(__O  uint32_t*)0xFC000014U) /**< (SPI1) Interrupt Enable Register */
#define REG_SPI1_IDR            (*(__O  uint32_t*)0xFC000018U) /**< (SPI1) Interrupt Disable Register */
#define REG_SPI1_IMR            (*(__I  uint32_t*)0xFC00001CU) /**< (SPI1) Interrupt Mask Register */
#define REG_SPI1_CSR            (*(__IO uint32_t*)0xFC000030U) /**< (SPI1) Chip Select Register */
#define REG_SPI1_CSR0           (*(__IO uint32_t*)0xFC000030U) /**< (SPI1) Chip Select Register 0 */
#define REG_SPI1_CSR1           (*(__IO uint32_t*)0xFC000034U) /**< (SPI1) Chip Select Register 1 */
#define REG_SPI1_CSR2           (*(__IO uint32_t*)0xFC000038U) /**< (SPI1) Chip Select Register 2 */
#define REG_SPI1_CSR3           (*(__IO uint32_t*)0xFC00003CU) /**< (SPI1) Chip Select Register 3 */
#define REG_SPI1_FMR            (*(__IO uint32_t*)0xFC000040U) /**< (SPI1) FIFO Mode Register */
#define REG_SPI1_FLR            (*(__I  uint32_t*)0xFC000044U) /**< (SPI1) FIFO Level Register */
#define REG_SPI1_CMPR           (*(__I  uint32_t*)0xFC000048U) /**< (SPI1) Comparison Register */
#define REG_SPI1_WPMR           (*(__IO uint32_t*)0xFC0000E4U) /**< (SPI1) Write Protection Mode Register */
#define REG_SPI1_WPSR           (*(__I  uint32_t*)0xFC0000E8U) /**< (SPI1) Write Protection Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for SPI1 peripheral ========== */
#define SPI1_INSTANCE_ID                         34         
#define SPI1_CLOCK_ID                            34         
#define SPI1_DMAC_ID_TX                          8          
#define SPI1_DMAC_ID_RX                          9          

#endif /* _SAMA5D2_SPI1_INSTANCE_ */
