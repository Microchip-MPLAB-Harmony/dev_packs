/**
 * \file
 *
 * \brief Instance description for PIOA
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
#ifndef _SAMA5D2_PIOA_INSTANCE_H_
#define _SAMA5D2_PIOA_INSTANCE_H_

/* ========== Register definition for PIOA peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_PIOA_MSKR           (0xFC038000) /**< (PIOA) PIO Mask Register */
#define REG_PIOA_CFGR           (0xFC038004) /**< (PIOA) PIO Configuration Register */
#define REG_PIOA_PDSR           (0xFC038008) /**< (PIOA) PIO Pin Data Status Register */
#define REG_PIOA_LOCKSR         (0xFC03800C) /**< (PIOA) PIO Lock Status Register */
#define REG_PIOA_SODR           (0xFC038010) /**< (PIOA) PIO Set Output Data Register */
#define REG_PIOA_CODR           (0xFC038014) /**< (PIOA) PIO Clear Output Data Register */
#define REG_PIOA_ODSR           (0xFC038018) /**< (PIOA) PIO Output Data Status Register */
#define REG_PIOA_IER            (0xFC038020) /**< (PIOA) PIO Interrupt Enable Register */
#define REG_PIOA_IDR            (0xFC038024) /**< (PIOA) PIO Interrupt Disable Register */
#define REG_PIOA_IMR            (0xFC038028) /**< (PIOA) PIO Interrupt Mask Register */
#define REG_PIOA_ISR            (0xFC03802C) /**< (PIOA) PIO Interrupt Status Register */
#define REG_PIOA_IOFR           (0xFC03803C) /**< (PIOA) PIO I/O Freeze Configuration Register */

#else

#define REG_PIOA_MSKR           (*(__IO uint32_t*)0xFC038000U) /**< (PIOA) PIO Mask Register */
#define REG_PIOA_CFGR           (*(__IO uint32_t*)0xFC038004U) /**< (PIOA) PIO Configuration Register */
#define REG_PIOA_PDSR           (*(__I  uint32_t*)0xFC038008U) /**< (PIOA) PIO Pin Data Status Register */
#define REG_PIOA_LOCKSR         (*(__I  uint32_t*)0xFC03800CU) /**< (PIOA) PIO Lock Status Register */
#define REG_PIOA_SODR           (*(__O  uint32_t*)0xFC038010U) /**< (PIOA) PIO Set Output Data Register */
#define REG_PIOA_CODR           (*(__O  uint32_t*)0xFC038014U) /**< (PIOA) PIO Clear Output Data Register */
#define REG_PIOA_ODSR           (*(__IO uint32_t*)0xFC038018U) /**< (PIOA) PIO Output Data Status Register */
#define REG_PIOA_IER            (*(__O  uint32_t*)0xFC038020U) /**< (PIOA) PIO Interrupt Enable Register */
#define REG_PIOA_IDR            (*(__O  uint32_t*)0xFC038024U) /**< (PIOA) PIO Interrupt Disable Register */
#define REG_PIOA_IMR            (*(__I  uint32_t*)0xFC038028U) /**< (PIOA) PIO Interrupt Mask Register */
#define REG_PIOA_ISR            (*(__I  uint32_t*)0xFC03802CU) /**< (PIOA) PIO Interrupt Status Register */
#define REG_PIOA_IOFR           (*(__O  uint32_t*)0xFC03803CU) /**< (PIOA) PIO I/O Freeze Configuration Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for PIOA peripheral ========== */
#define PIOA_INSTANCE_ID                         18         
#define PIOA_CLOCK_ID                            18         

#endif /* _SAMA5D2_PIOA_INSTANCE_ */
