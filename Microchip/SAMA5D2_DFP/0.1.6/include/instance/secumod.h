/**
 * \file
 *
 * \brief Instance description for SECUMOD
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
#ifndef _SAMA5D2_SECUMOD_INSTANCE_H_
#define _SAMA5D2_SECUMOD_INSTANCE_H_

/* ========== Register definition for SECUMOD peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_SECUMOD_CR          (0xFC040000) /**< (SECUMOD) Control Register */
#define REG_SECUMOD_SYSR        (0xFC040004) /**< (SECUMOD) System Status Register */
#define REG_SECUMOD_SR          (0xFC040008) /**< (SECUMOD) Status Register */
#define REG_SECUMOD_SCR         (0xFC040010) /**< (SECUMOD) Status Clear Register */
#define REG_SECUMOD_RAMRDY      (0xFC040014) /**< (SECUMOD) RAM Access Ready Register */
#define REG_SECUMOD_PIOBU       (0xFC040018) /**< (SECUMOD) PIO Backup Register */
#define REG_SECUMOD_PIOBU0      (0xFC040018) /**< (SECUMOD) PIO Backup Register 0 */
#define REG_SECUMOD_PIOBU1      (0xFC04001C) /**< (SECUMOD) PIO Backup Register 1 */
#define REG_SECUMOD_PIOBU2      (0xFC040020) /**< (SECUMOD) PIO Backup Register 2 */
#define REG_SECUMOD_PIOBU3      (0xFC040024) /**< (SECUMOD) PIO Backup Register 3 */
#define REG_SECUMOD_PIOBU4      (0xFC040028) /**< (SECUMOD) PIO Backup Register 4 */
#define REG_SECUMOD_PIOBU5      (0xFC04002C) /**< (SECUMOD) PIO Backup Register 5 */
#define REG_SECUMOD_PIOBU6      (0xFC040030) /**< (SECUMOD) PIO Backup Register 6 */
#define REG_SECUMOD_PIOBU7      (0xFC040034) /**< (SECUMOD) PIO Backup Register 7 */
#define REG_SECUMOD_JTAGCR      (0xFC040068) /**< (SECUMOD) JTAG Protection Control Register */
#define REG_SECUMOD_SCRKEY      (0xFC040070) /**< (SECUMOD) Scrambling Key Register */
#define REG_SECUMOD_RAMACC      (0xFC040074) /**< (SECUMOD) RAM Access Rights Register */
#define REG_SECUMOD_RAMACCSR    (0xFC040078) /**< (SECUMOD) RAM Access Rights Status Register */
#define REG_SECUMOD_BMPR        (0xFC04007C) /**< (SECUMOD) Backup Mode Protection Register */
#define REG_SECUMOD_NMPR        (0xFC040080) /**< (SECUMOD) Normal Mode Protection Register */
#define REG_SECUMOD_NIEPR       (0xFC040084) /**< (SECUMOD) Normal Interrupt Enable Protection Register */
#define REG_SECUMOD_NIDPR       (0xFC040088) /**< (SECUMOD) Normal Interrupt Disable Protection Register */
#define REG_SECUMOD_NIMPR       (0xFC04008C) /**< (SECUMOD) Normal Interrupt Mask Protection Register */
#define REG_SECUMOD_WKPR        (0xFC040090) /**< (SECUMOD) Wakeup Protection Register */

#else

#define REG_SECUMOD_CR          (*(__O  uint32_t*)0xFC040000U) /**< (SECUMOD) Control Register */
#define REG_SECUMOD_SYSR        (*(__IO uint32_t*)0xFC040004U) /**< (SECUMOD) System Status Register */
#define REG_SECUMOD_SR          (*(__I  uint32_t*)0xFC040008U) /**< (SECUMOD) Status Register */
#define REG_SECUMOD_SCR         (*(__O  uint32_t*)0xFC040010U) /**< (SECUMOD) Status Clear Register */
#define REG_SECUMOD_RAMRDY      (*(__I  uint32_t*)0xFC040014U) /**< (SECUMOD) RAM Access Ready Register */
#define REG_SECUMOD_PIOBU       (*(__IO uint32_t*)0xFC040018U) /**< (SECUMOD) PIO Backup Register */
#define REG_SECUMOD_PIOBU0      (*(__IO uint32_t*)0xFC040018U) /**< (SECUMOD) PIO Backup Register 0 */
#define REG_SECUMOD_PIOBU1      (*(__IO uint32_t*)0xFC04001CU) /**< (SECUMOD) PIO Backup Register 1 */
#define REG_SECUMOD_PIOBU2      (*(__IO uint32_t*)0xFC040020U) /**< (SECUMOD) PIO Backup Register 2 */
#define REG_SECUMOD_PIOBU3      (*(__IO uint32_t*)0xFC040024U) /**< (SECUMOD) PIO Backup Register 3 */
#define REG_SECUMOD_PIOBU4      (*(__IO uint32_t*)0xFC040028U) /**< (SECUMOD) PIO Backup Register 4 */
#define REG_SECUMOD_PIOBU5      (*(__IO uint32_t*)0xFC04002CU) /**< (SECUMOD) PIO Backup Register 5 */
#define REG_SECUMOD_PIOBU6      (*(__IO uint32_t*)0xFC040030U) /**< (SECUMOD) PIO Backup Register 6 */
#define REG_SECUMOD_PIOBU7      (*(__IO uint32_t*)0xFC040034U) /**< (SECUMOD) PIO Backup Register 7 */
#define REG_SECUMOD_JTAGCR      (*(__IO uint32_t*)0xFC040068U) /**< (SECUMOD) JTAG Protection Control Register */
#define REG_SECUMOD_SCRKEY      (*(__IO uint32_t*)0xFC040070U) /**< (SECUMOD) Scrambling Key Register */
#define REG_SECUMOD_RAMACC      (*(__IO uint32_t*)0xFC040074U) /**< (SECUMOD) RAM Access Rights Register */
#define REG_SECUMOD_RAMACCSR    (*(__IO uint32_t*)0xFC040078U) /**< (SECUMOD) RAM Access Rights Status Register */
#define REG_SECUMOD_BMPR        (*(__IO uint32_t*)0xFC04007CU) /**< (SECUMOD) Backup Mode Protection Register */
#define REG_SECUMOD_NMPR        (*(__IO uint32_t*)0xFC040080U) /**< (SECUMOD) Normal Mode Protection Register */
#define REG_SECUMOD_NIEPR       (*(__O  uint32_t*)0xFC040084U) /**< (SECUMOD) Normal Interrupt Enable Protection Register */
#define REG_SECUMOD_NIDPR       (*(__O  uint32_t*)0xFC040088U) /**< (SECUMOD) Normal Interrupt Disable Protection Register */
#define REG_SECUMOD_NIMPR       (*(__I  uint32_t*)0xFC04008CU) /**< (SECUMOD) Normal Interrupt Mask Protection Register */
#define REG_SECUMOD_WKPR        (*(__IO uint32_t*)0xFC040090U) /**< (SECUMOD) Wakeup Protection Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for SECUMOD peripheral ========== */
#define SECUMOD_INSTANCE_ID                      16         
#define SECUMOD_CLOCK_ID                         16         

#endif /* _SAMA5D2_SECUMOD_INSTANCE_ */
