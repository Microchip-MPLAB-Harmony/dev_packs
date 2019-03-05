/**
 * \file
 *
 * \brief Instance description for I2SC1
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
#ifndef _SAMA5D2_I2SC1_INSTANCE_H_
#define _SAMA5D2_I2SC1_INSTANCE_H_

/* ========== Register definition for I2SC1 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_I2SC1_CR            (0xFC04C000) /**< (I2SC1) Control Register */
#define REG_I2SC1_MR            (0xFC04C004) /**< (I2SC1) Mode Register */
#define REG_I2SC1_SR            (0xFC04C008) /**< (I2SC1) Status Register */
#define REG_I2SC1_SCR           (0xFC04C00C) /**< (I2SC1) Status Clear Register */
#define REG_I2SC1_SSR           (0xFC04C010) /**< (I2SC1) Status Set Register */
#define REG_I2SC1_IER           (0xFC04C014) /**< (I2SC1) Interrupt Enable Register */
#define REG_I2SC1_IDR           (0xFC04C018) /**< (I2SC1) Interrupt Disable Register */
#define REG_I2SC1_IMR           (0xFC04C01C) /**< (I2SC1) Interrupt Mask Register */
#define REG_I2SC1_RHR           (0xFC04C020) /**< (I2SC1) Receiver Holding Register */
#define REG_I2SC1_THR           (0xFC04C024) /**< (I2SC1) Transmitter Holding Register */

#else

#define REG_I2SC1_CR            (*(__O  uint32_t*)0xFC04C000U) /**< (I2SC1) Control Register */
#define REG_I2SC1_MR            (*(__IO uint32_t*)0xFC04C004U) /**< (I2SC1) Mode Register */
#define REG_I2SC1_SR            (*(__I  uint32_t*)0xFC04C008U) /**< (I2SC1) Status Register */
#define REG_I2SC1_SCR           (*(__O  uint32_t*)0xFC04C00CU) /**< (I2SC1) Status Clear Register */
#define REG_I2SC1_SSR           (*(__O  uint32_t*)0xFC04C010U) /**< (I2SC1) Status Set Register */
#define REG_I2SC1_IER           (*(__O  uint32_t*)0xFC04C014U) /**< (I2SC1) Interrupt Enable Register */
#define REG_I2SC1_IDR           (*(__O  uint32_t*)0xFC04C018U) /**< (I2SC1) Interrupt Disable Register */
#define REG_I2SC1_IMR           (*(__I  uint32_t*)0xFC04C01CU) /**< (I2SC1) Interrupt Mask Register */
#define REG_I2SC1_RHR           (*(__I  uint32_t*)0xFC04C020U) /**< (I2SC1) Receiver Holding Register */
#define REG_I2SC1_THR           (*(__O  uint32_t*)0xFC04C024U) /**< (I2SC1) Transmitter Holding Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for I2SC1 peripheral ========== */
#define I2SC1_INSTANCE_ID                        55         
#define I2SC1_CLOCK_ID                           55         
#define I2SC1_DMAC_ID_TX                         33         
#define I2SC1_DMAC_ID_RX                         34         

#endif /* _SAMA5D2_I2SC1_INSTANCE_ */
