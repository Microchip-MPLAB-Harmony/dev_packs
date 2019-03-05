/**
 * \file
 *
 * \brief Instance description for PIOD
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
#ifndef _SAMA5D2_PIOD_INSTANCE_H_
#define _SAMA5D2_PIOD_INSTANCE_H_

/* ========== Register definition for PIOD peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_PIOD_MSKR           (0xFC0380C0) /**< (PIOD) PIO Mask Register */
#define REG_PIOD_CFGR           (0xFC0380C4) /**< (PIOD) PIO Configuration Register */
#define REG_PIOD_PDSR           (0xFC0380C8) /**< (PIOD) PIO Pin Data Status Register */
#define REG_PIOD_LOCKSR         (0xFC0380CC) /**< (PIOD) PIO Lock Status Register */
#define REG_PIOD_SODR           (0xFC0380D0) /**< (PIOD) PIO Set Output Data Register */
#define REG_PIOD_CODR           (0xFC0380D4) /**< (PIOD) PIO Clear Output Data Register */
#define REG_PIOD_ODSR           (0xFC0380D8) /**< (PIOD) PIO Output Data Status Register */
#define REG_PIOD_IER            (0xFC0380E0) /**< (PIOD) PIO Interrupt Enable Register */
#define REG_PIOD_IDR            (0xFC0380E4) /**< (PIOD) PIO Interrupt Disable Register */
#define REG_PIOD_IMR            (0xFC0380E8) /**< (PIOD) PIO Interrupt Mask Register */
#define REG_PIOD_ISR            (0xFC0380EC) /**< (PIOD) PIO Interrupt Status Register */
#define REG_PIOD_IOFR           (0xFC0380FC) /**< (PIOD) PIO I/O Freeze Configuration Register */

#else

#define REG_PIOD_MSKR           (*(__IO uint32_t*)0xFC0380C0U) /**< (PIOD) PIO Mask Register */
#define REG_PIOD_CFGR           (*(__IO uint32_t*)0xFC0380C4U) /**< (PIOD) PIO Configuration Register */
#define REG_PIOD_PDSR           (*(__I  uint32_t*)0xFC0380C8U) /**< (PIOD) PIO Pin Data Status Register */
#define REG_PIOD_LOCKSR         (*(__I  uint32_t*)0xFC0380CCU) /**< (PIOD) PIO Lock Status Register */
#define REG_PIOD_SODR           (*(__O  uint32_t*)0xFC0380D0U) /**< (PIOD) PIO Set Output Data Register */
#define REG_PIOD_CODR           (*(__O  uint32_t*)0xFC0380D4U) /**< (PIOD) PIO Clear Output Data Register */
#define REG_PIOD_ODSR           (*(__IO uint32_t*)0xFC0380D8U) /**< (PIOD) PIO Output Data Status Register */
#define REG_PIOD_IER            (*(__O  uint32_t*)0xFC0380E0U) /**< (PIOD) PIO Interrupt Enable Register */
#define REG_PIOD_IDR            (*(__O  uint32_t*)0xFC0380E4U) /**< (PIOD) PIO Interrupt Disable Register */
#define REG_PIOD_IMR            (*(__I  uint32_t*)0xFC0380E8U) /**< (PIOD) PIO Interrupt Mask Register */
#define REG_PIOD_ISR            (*(__I  uint32_t*)0xFC0380ECU) /**< (PIOD) PIO Interrupt Status Register */
#define REG_PIOD_IOFR           (*(__O  uint32_t*)0xFC0380FCU) /**< (PIOD) PIO I/O Freeze Configuration Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for PIOD peripheral ========== */
#define PIOD_INSTANCE_ID                         70         

#endif /* _SAMA5D2_PIOD_INSTANCE_ */
