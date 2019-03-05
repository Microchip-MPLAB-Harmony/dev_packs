/**
 * \file
 *
 * \brief Instance description for PIOC
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
#ifndef _SAMA5D2_PIOC_INSTANCE_H_
#define _SAMA5D2_PIOC_INSTANCE_H_

/* ========== Register definition for PIOC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_PIOC_MSKR           (0xFC038080) /**< (PIOC) PIO Mask Register */
#define REG_PIOC_CFGR           (0xFC038084) /**< (PIOC) PIO Configuration Register */
#define REG_PIOC_PDSR           (0xFC038088) /**< (PIOC) PIO Pin Data Status Register */
#define REG_PIOC_LOCKSR         (0xFC03808C) /**< (PIOC) PIO Lock Status Register */
#define REG_PIOC_SODR           (0xFC038090) /**< (PIOC) PIO Set Output Data Register */
#define REG_PIOC_CODR           (0xFC038094) /**< (PIOC) PIO Clear Output Data Register */
#define REG_PIOC_ODSR           (0xFC038098) /**< (PIOC) PIO Output Data Status Register */
#define REG_PIOC_IER            (0xFC0380A0) /**< (PIOC) PIO Interrupt Enable Register */
#define REG_PIOC_IDR            (0xFC0380A4) /**< (PIOC) PIO Interrupt Disable Register */
#define REG_PIOC_IMR            (0xFC0380A8) /**< (PIOC) PIO Interrupt Mask Register */
#define REG_PIOC_ISR            (0xFC0380AC) /**< (PIOC) PIO Interrupt Status Register */
#define REG_PIOC_IOFR           (0xFC0380BC) /**< (PIOC) PIO I/O Freeze Configuration Register */

#else

#define REG_PIOC_MSKR           (*(__IO uint32_t*)0xFC038080U) /**< (PIOC) PIO Mask Register */
#define REG_PIOC_CFGR           (*(__IO uint32_t*)0xFC038084U) /**< (PIOC) PIO Configuration Register */
#define REG_PIOC_PDSR           (*(__I  uint32_t*)0xFC038088U) /**< (PIOC) PIO Pin Data Status Register */
#define REG_PIOC_LOCKSR         (*(__I  uint32_t*)0xFC03808CU) /**< (PIOC) PIO Lock Status Register */
#define REG_PIOC_SODR           (*(__O  uint32_t*)0xFC038090U) /**< (PIOC) PIO Set Output Data Register */
#define REG_PIOC_CODR           (*(__O  uint32_t*)0xFC038094U) /**< (PIOC) PIO Clear Output Data Register */
#define REG_PIOC_ODSR           (*(__IO uint32_t*)0xFC038098U) /**< (PIOC) PIO Output Data Status Register */
#define REG_PIOC_IER            (*(__O  uint32_t*)0xFC0380A0U) /**< (PIOC) PIO Interrupt Enable Register */
#define REG_PIOC_IDR            (*(__O  uint32_t*)0xFC0380A4U) /**< (PIOC) PIO Interrupt Disable Register */
#define REG_PIOC_IMR            (*(__I  uint32_t*)0xFC0380A8U) /**< (PIOC) PIO Interrupt Mask Register */
#define REG_PIOC_ISR            (*(__I  uint32_t*)0xFC0380ACU) /**< (PIOC) PIO Interrupt Status Register */
#define REG_PIOC_IOFR           (*(__O  uint32_t*)0xFC0380BCU) /**< (PIOC) PIO I/O Freeze Configuration Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for PIOC peripheral ========== */
#define PIOC_INSTANCE_ID                         69         

#endif /* _SAMA5D2_PIOC_INSTANCE_ */
