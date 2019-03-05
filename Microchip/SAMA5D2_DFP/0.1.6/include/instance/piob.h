/**
 * \file
 *
 * \brief Instance description for PIOB
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
#ifndef _SAMA5D2_PIOB_INSTANCE_H_
#define _SAMA5D2_PIOB_INSTANCE_H_

/* ========== Register definition for PIOB peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_PIOB_MSKR           (0xFC038040) /**< (PIOB) PIO Mask Register */
#define REG_PIOB_CFGR           (0xFC038044) /**< (PIOB) PIO Configuration Register */
#define REG_PIOB_PDSR           (0xFC038048) /**< (PIOB) PIO Pin Data Status Register */
#define REG_PIOB_LOCKSR         (0xFC03804C) /**< (PIOB) PIO Lock Status Register */
#define REG_PIOB_SODR           (0xFC038050) /**< (PIOB) PIO Set Output Data Register */
#define REG_PIOB_CODR           (0xFC038054) /**< (PIOB) PIO Clear Output Data Register */
#define REG_PIOB_ODSR           (0xFC038058) /**< (PIOB) PIO Output Data Status Register */
#define REG_PIOB_IER            (0xFC038060) /**< (PIOB) PIO Interrupt Enable Register */
#define REG_PIOB_IDR            (0xFC038064) /**< (PIOB) PIO Interrupt Disable Register */
#define REG_PIOB_IMR            (0xFC038068) /**< (PIOB) PIO Interrupt Mask Register */
#define REG_PIOB_ISR            (0xFC03806C) /**< (PIOB) PIO Interrupt Status Register */
#define REG_PIOB_IOFR           (0xFC03807C) /**< (PIOB) PIO I/O Freeze Configuration Register */

#else

#define REG_PIOB_MSKR           (*(__IO uint32_t*)0xFC038040U) /**< (PIOB) PIO Mask Register */
#define REG_PIOB_CFGR           (*(__IO uint32_t*)0xFC038044U) /**< (PIOB) PIO Configuration Register */
#define REG_PIOB_PDSR           (*(__I  uint32_t*)0xFC038048U) /**< (PIOB) PIO Pin Data Status Register */
#define REG_PIOB_LOCKSR         (*(__I  uint32_t*)0xFC03804CU) /**< (PIOB) PIO Lock Status Register */
#define REG_PIOB_SODR           (*(__O  uint32_t*)0xFC038050U) /**< (PIOB) PIO Set Output Data Register */
#define REG_PIOB_CODR           (*(__O  uint32_t*)0xFC038054U) /**< (PIOB) PIO Clear Output Data Register */
#define REG_PIOB_ODSR           (*(__IO uint32_t*)0xFC038058U) /**< (PIOB) PIO Output Data Status Register */
#define REG_PIOB_IER            (*(__O  uint32_t*)0xFC038060U) /**< (PIOB) PIO Interrupt Enable Register */
#define REG_PIOB_IDR            (*(__O  uint32_t*)0xFC038064U) /**< (PIOB) PIO Interrupt Disable Register */
#define REG_PIOB_IMR            (*(__I  uint32_t*)0xFC038068U) /**< (PIOB) PIO Interrupt Mask Register */
#define REG_PIOB_ISR            (*(__I  uint32_t*)0xFC03806CU) /**< (PIOB) PIO Interrupt Status Register */
#define REG_PIOB_IOFR           (*(__O  uint32_t*)0xFC03807CU) /**< (PIOB) PIO I/O Freeze Configuration Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for PIOB peripheral ========== */
#define PIOB_INSTANCE_ID                         68         

#endif /* _SAMA5D2_PIOB_INSTANCE_ */
