/**
 * \file
 *
 * \brief Instance description for PMC
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
#ifndef _SAMA5D2_PMC_INSTANCE_H_
#define _SAMA5D2_PMC_INSTANCE_H_

/* ========== Register definition for PMC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_PMC_SCER            (0xF0014000) /**< (PMC) System Clock Enable Register */
#define REG_PMC_SCDR            (0xF0014004) /**< (PMC) System Clock Disable Register */
#define REG_PMC_SCSR            (0xF0014008) /**< (PMC) System Clock Status Register */
#define REG_PMC_PCER0           (0xF0014010) /**< (PMC) Peripheral Clock Enable Register 0 */
#define REG_PMC_PCDR0           (0xF0014014) /**< (PMC) Peripheral Clock Disable Register 0 */
#define REG_PMC_PCSR0           (0xF0014018) /**< (PMC) Peripheral Clock Status Register 0 */
#define REG_CKGR_UCKR           (0xF001401C) /**< (PMC) UTMI Clock Register */
#define REG_CKGR_MOR            (0xF0014020) /**< (PMC) Main Oscillator Register */
#define REG_CKGR_MCFR           (0xF0014024) /**< (PMC) Main Clock Frequency Register */
#define REG_CKGR_PLLAR          (0xF0014028) /**< (PMC) PLLA Register */
#define REG_PMC_MCKR            (0xF0014030) /**< (PMC) Master Clock Register */
#define REG_PMC_USB             (0xF0014038) /**< (PMC) USB Clock Register */
#define REG_PMC_PCK             (0xF0014040) /**< (PMC) Programmable Clock 0 Register */
#define REG_PMC_PCK0            (0xF0014040) /**< (PMC) Programmable Clock 0 Register 0 */
#define REG_PMC_PCK1            (0xF0014044) /**< (PMC) Programmable Clock 0 Register 1 */
#define REG_PMC_PCK2            (0xF0014048) /**< (PMC) Programmable Clock 0 Register 2 */
#define REG_PMC_IER             (0xF0014060) /**< (PMC) Interrupt Enable Register */
#define REG_PMC_IDR             (0xF0014064) /**< (PMC) Interrupt Disable Register */
#define REG_PMC_SR              (0xF0014068) /**< (PMC) Status Register */
#define REG_PMC_IMR             (0xF001406C) /**< (PMC) Interrupt Mask Register */
#define REG_PMC_FSMR            (0xF0014070) /**< (PMC) Fast Startup Mode Register */
#define REG_PMC_FSPR            (0xF0014074) /**< (PMC) Fast Startup Polarity Register */
#define REG_PMC_FOCR            (0xF0014078) /**< (PMC) Fault Output Clear Register */
#define REG_PMC_PLLICPR         (0xF0014080) /**< (PMC) PLL Charge Pump Current Register */
#define REG_PMC_WPMR            (0xF00140E4) /**< (PMC) Write ProtectIon Mode Register */
#define REG_PMC_WPSR            (0xF00140E8) /**< (PMC) Write Protection Status Register */
#define REG_PMC_PCER1           (0xF0014100) /**< (PMC) Peripheral Clock Enable Register 1 */
#define REG_PMC_PCDR1           (0xF0014104) /**< (PMC) Peripheral Clock Disable Register 1 */
#define REG_PMC_PCSR1           (0xF0014108) /**< (PMC) Peripheral Clock Status Register 1 */
#define REG_PMC_PCR             (0xF001410C) /**< (PMC) Peripheral Control Register */
#define REG_PMC_OCR             (0xF0014110) /**< (PMC) Oscillator Calibration Register */
#define REG_PMC_SLPWK_ER0       (0xF0014114) /**< (PMC) SleepWalking Enable Register 0 */
#define REG_PMC_SLPWK_DR0       (0xF0014118) /**< (PMC) SleepWalking Disable Register 0 */
#define REG_PMC_SLPWK_SR0       (0xF001411C) /**< (PMC) SleepWalking Status Register 0 */
#define REG_PMC_SLPWK_ASR0      (0xF0014120) /**< (PMC) SleepWalking Activity Status Register 0 */
#define REG_PMC_SLPWK_ER1       (0xF0014134) /**< (PMC) SleepWalking Enable Register 1 */
#define REG_PMC_SLPWK_DR1       (0xF0014138) /**< (PMC) SleepWalking Disable Register 1 */
#define REG_PMC_SLPWK_SR1       (0xF001413C) /**< (PMC) SleepWalking Status Register 1 */
#define REG_PMC_SLPWK_ASR1      (0xF0014140) /**< (PMC) SleepWalking Activity Status Register 1 */
#define REG_PMC_SLPWK_AIPR      (0xF0014144) /**< (PMC) SleepWalking Activity In Progress Register */
#define REG_PMC_SLPWKCR         (0xF0014148) /**< (PMC) SleepWalking Control Register */
#define REG_PMC_AUDIO_PLL0      (0xF001414C) /**< (PMC) Audio PLL Register 0 */
#define REG_PMC_AUDIO_PLL1      (0xF0014150) /**< (PMC) Audio PLL Register 1 */

#else

#define REG_PMC_SCER            (*(__O  uint32_t*)0xF0014000U) /**< (PMC) System Clock Enable Register */
#define REG_PMC_SCDR            (*(__O  uint32_t*)0xF0014004U) /**< (PMC) System Clock Disable Register */
#define REG_PMC_SCSR            (*(__I  uint32_t*)0xF0014008U) /**< (PMC) System Clock Status Register */
#define REG_PMC_PCER0           (*(__O  uint32_t*)0xF0014010U) /**< (PMC) Peripheral Clock Enable Register 0 */
#define REG_PMC_PCDR0           (*(__O  uint32_t*)0xF0014014U) /**< (PMC) Peripheral Clock Disable Register 0 */
#define REG_PMC_PCSR0           (*(__I  uint32_t*)0xF0014018U) /**< (PMC) Peripheral Clock Status Register 0 */
#define REG_CKGR_UCKR           (*(__IO uint32_t*)0xF001401CU) /**< (PMC) UTMI Clock Register */
#define REG_CKGR_MOR            (*(__IO uint32_t*)0xF0014020U) /**< (PMC) Main Oscillator Register */
#define REG_CKGR_MCFR           (*(__IO uint32_t*)0xF0014024U) /**< (PMC) Main Clock Frequency Register */
#define REG_CKGR_PLLAR          (*(__IO uint32_t*)0xF0014028U) /**< (PMC) PLLA Register */
#define REG_PMC_MCKR            (*(__IO uint32_t*)0xF0014030U) /**< (PMC) Master Clock Register */
#define REG_PMC_USB             (*(__IO uint32_t*)0xF0014038U) /**< (PMC) USB Clock Register */
#define REG_PMC_PCK             (*(__IO uint32_t*)0xF0014040U) /**< (PMC) Programmable Clock 0 Register */
#define REG_PMC_PCK0            (*(__IO uint32_t*)0xF0014040U) /**< (PMC) Programmable Clock 0 Register 0 */
#define REG_PMC_PCK1            (*(__IO uint32_t*)0xF0014044U) /**< (PMC) Programmable Clock 0 Register 1 */
#define REG_PMC_PCK2            (*(__IO uint32_t*)0xF0014048U) /**< (PMC) Programmable Clock 0 Register 2 */
#define REG_PMC_IER             (*(__O  uint32_t*)0xF0014060U) /**< (PMC) Interrupt Enable Register */
#define REG_PMC_IDR             (*(__O  uint32_t*)0xF0014064U) /**< (PMC) Interrupt Disable Register */
#define REG_PMC_SR              (*(__I  uint32_t*)0xF0014068U) /**< (PMC) Status Register */
#define REG_PMC_IMR             (*(__I  uint32_t*)0xF001406CU) /**< (PMC) Interrupt Mask Register */
#define REG_PMC_FSMR            (*(__IO uint32_t*)0xF0014070U) /**< (PMC) Fast Startup Mode Register */
#define REG_PMC_FSPR            (*(__IO uint32_t*)0xF0014074U) /**< (PMC) Fast Startup Polarity Register */
#define REG_PMC_FOCR            (*(__O  uint32_t*)0xF0014078U) /**< (PMC) Fault Output Clear Register */
#define REG_PMC_PLLICPR         (*(__IO uint32_t*)0xF0014080U) /**< (PMC) PLL Charge Pump Current Register */
#define REG_PMC_WPMR            (*(__IO uint32_t*)0xF00140E4U) /**< (PMC) Write ProtectIon Mode Register */
#define REG_PMC_WPSR            (*(__I  uint32_t*)0xF00140E8U) /**< (PMC) Write Protection Status Register */
#define REG_PMC_PCER1           (*(__O  uint32_t*)0xF0014100U) /**< (PMC) Peripheral Clock Enable Register 1 */
#define REG_PMC_PCDR1           (*(__O  uint32_t*)0xF0014104U) /**< (PMC) Peripheral Clock Disable Register 1 */
#define REG_PMC_PCSR1           (*(__I  uint32_t*)0xF0014108U) /**< (PMC) Peripheral Clock Status Register 1 */
#define REG_PMC_PCR             (*(__IO uint32_t*)0xF001410CU) /**< (PMC) Peripheral Control Register */
#define REG_PMC_OCR             (*(__IO uint32_t*)0xF0014110U) /**< (PMC) Oscillator Calibration Register */
#define REG_PMC_SLPWK_ER0       (*(__O  uint32_t*)0xF0014114U) /**< (PMC) SleepWalking Enable Register 0 */
#define REG_PMC_SLPWK_DR0       (*(__O  uint32_t*)0xF0014118U) /**< (PMC) SleepWalking Disable Register 0 */
#define REG_PMC_SLPWK_SR0       (*(__I  uint32_t*)0xF001411CU) /**< (PMC) SleepWalking Status Register 0 */
#define REG_PMC_SLPWK_ASR0      (*(__I  uint32_t*)0xF0014120U) /**< (PMC) SleepWalking Activity Status Register 0 */
#define REG_PMC_SLPWK_ER1       (*(__O  uint32_t*)0xF0014134U) /**< (PMC) SleepWalking Enable Register 1 */
#define REG_PMC_SLPWK_DR1       (*(__O  uint32_t*)0xF0014138U) /**< (PMC) SleepWalking Disable Register 1 */
#define REG_PMC_SLPWK_SR1       (*(__I  uint32_t*)0xF001413CU) /**< (PMC) SleepWalking Status Register 1 */
#define REG_PMC_SLPWK_ASR1      (*(__I  uint32_t*)0xF0014140U) /**< (PMC) SleepWalking Activity Status Register 1 */
#define REG_PMC_SLPWK_AIPR      (*(__I  uint32_t*)0xF0014144U) /**< (PMC) SleepWalking Activity In Progress Register */
#define REG_PMC_SLPWKCR         (*(__IO uint32_t*)0xF0014148U) /**< (PMC) SleepWalking Control Register */
#define REG_PMC_AUDIO_PLL0      (*(__IO uint32_t*)0xF001414CU) /**< (PMC) Audio PLL Register 0 */
#define REG_PMC_AUDIO_PLL1      (*(__IO uint32_t*)0xF0014150U) /**< (PMC) Audio PLL Register 1 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_PMC_INSTANCE_ */
