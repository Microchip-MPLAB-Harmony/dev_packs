/**
 * \file
 *
 * \brief Instance description for PWM
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
#ifndef _SAMA5D2_PWM_INSTANCE_H_
#define _SAMA5D2_PWM_INSTANCE_H_

/* ========== Register definition for PWM peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_PWM_CMPV0           (0xF802C130) /**< (PWM) PWM Comparison 0 Value Register 0 */
#define REG_PWM_CMPVUPD0        (0xF802C134) /**< (PWM) PWM Comparison 0 Value Update Register 0 */
#define REG_PWM_CMPM0           (0xF802C138) /**< (PWM) PWM Comparison 0 Mode Register 0 */
#define REG_PWM_CMPMUPD0        (0xF802C13C) /**< (PWM) PWM Comparison 0 Mode Update Register 0 */
#define REG_PWM_CMPV1           (0xF802C140) /**< (PWM) PWM Comparison 0 Value Register 1 */
#define REG_PWM_CMPVUPD1        (0xF802C144) /**< (PWM) PWM Comparison 0 Value Update Register 1 */
#define REG_PWM_CMPM1           (0xF802C148) /**< (PWM) PWM Comparison 0 Mode Register 1 */
#define REG_PWM_CMPMUPD1        (0xF802C14C) /**< (PWM) PWM Comparison 0 Mode Update Register 1 */
#define REG_PWM_CMPV2           (0xF802C150) /**< (PWM) PWM Comparison 0 Value Register 2 */
#define REG_PWM_CMPVUPD2        (0xF802C154) /**< (PWM) PWM Comparison 0 Value Update Register 2 */
#define REG_PWM_CMPM2           (0xF802C158) /**< (PWM) PWM Comparison 0 Mode Register 2 */
#define REG_PWM_CMPMUPD2        (0xF802C15C) /**< (PWM) PWM Comparison 0 Mode Update Register 2 */
#define REG_PWM_CMPV3           (0xF802C160) /**< (PWM) PWM Comparison 0 Value Register 3 */
#define REG_PWM_CMPVUPD3        (0xF802C164) /**< (PWM) PWM Comparison 0 Value Update Register 3 */
#define REG_PWM_CMPM3           (0xF802C168) /**< (PWM) PWM Comparison 0 Mode Register 3 */
#define REG_PWM_CMPMUPD3        (0xF802C16C) /**< (PWM) PWM Comparison 0 Mode Update Register 3 */
#define REG_PWM_CMPV4           (0xF802C170) /**< (PWM) PWM Comparison 0 Value Register 4 */
#define REG_PWM_CMPVUPD4        (0xF802C174) /**< (PWM) PWM Comparison 0 Value Update Register 4 */
#define REG_PWM_CMPM4           (0xF802C178) /**< (PWM) PWM Comparison 0 Mode Register 4 */
#define REG_PWM_CMPMUPD4        (0xF802C17C) /**< (PWM) PWM Comparison 0 Mode Update Register 4 */
#define REG_PWM_CMPV5           (0xF802C180) /**< (PWM) PWM Comparison 0 Value Register 5 */
#define REG_PWM_CMPVUPD5        (0xF802C184) /**< (PWM) PWM Comparison 0 Value Update Register 5 */
#define REG_PWM_CMPM5           (0xF802C188) /**< (PWM) PWM Comparison 0 Mode Register 5 */
#define REG_PWM_CMPMUPD5        (0xF802C18C) /**< (PWM) PWM Comparison 0 Mode Update Register 5 */
#define REG_PWM_CMPV6           (0xF802C190) /**< (PWM) PWM Comparison 0 Value Register 6 */
#define REG_PWM_CMPVUPD6        (0xF802C194) /**< (PWM) PWM Comparison 0 Value Update Register 6 */
#define REG_PWM_CMPM6           (0xF802C198) /**< (PWM) PWM Comparison 0 Mode Register 6 */
#define REG_PWM_CMPMUPD6        (0xF802C19C) /**< (PWM) PWM Comparison 0 Mode Update Register 6 */
#define REG_PWM_CMPV7           (0xF802C1A0) /**< (PWM) PWM Comparison 0 Value Register 7 */
#define REG_PWM_CMPVUPD7        (0xF802C1A4) /**< (PWM) PWM Comparison 0 Value Update Register 7 */
#define REG_PWM_CMPM7           (0xF802C1A8) /**< (PWM) PWM Comparison 0 Mode Register 7 */
#define REG_PWM_CMPMUPD7        (0xF802C1AC) /**< (PWM) PWM Comparison 0 Mode Update Register 7 */
#define REG_PWM_CMR0            (0xF802C200) /**< (PWM) PWM Channel Mode Register 0 */
#define REG_PWM_CDTY0           (0xF802C204) /**< (PWM) PWM Channel Duty Cycle Register 0 */
#define REG_PWM_CDTYUPD0        (0xF802C208) /**< (PWM) PWM Channel Duty Cycle Update Register 0 */
#define REG_PWM_CPRD0           (0xF802C20C) /**< (PWM) PWM Channel Period Register 0 */
#define REG_PWM_CPRDUPD0        (0xF802C210) /**< (PWM) PWM Channel Period Update Register 0 */
#define REG_PWM_CCNT0           (0xF802C214) /**< (PWM) PWM Channel Counter Register 0 */
#define REG_PWM_DT0             (0xF802C218) /**< (PWM) PWM Channel Dead Time Register 0 */
#define REG_PWM_DTUPD0          (0xF802C21C) /**< (PWM) PWM Channel Dead Time Update Register 0 */
#define REG_PWM_CMR1            (0xF802C220) /**< (PWM) PWM Channel Mode Register 1 */
#define REG_PWM_CDTY1           (0xF802C224) /**< (PWM) PWM Channel Duty Cycle Register 1 */
#define REG_PWM_CDTYUPD1        (0xF802C228) /**< (PWM) PWM Channel Duty Cycle Update Register 1 */
#define REG_PWM_CPRD1           (0xF802C22C) /**< (PWM) PWM Channel Period Register 1 */
#define REG_PWM_CPRDUPD1        (0xF802C230) /**< (PWM) PWM Channel Period Update Register 1 */
#define REG_PWM_CCNT1           (0xF802C234) /**< (PWM) PWM Channel Counter Register 1 */
#define REG_PWM_DT1             (0xF802C238) /**< (PWM) PWM Channel Dead Time Register 1 */
#define REG_PWM_DTUPD1          (0xF802C23C) /**< (PWM) PWM Channel Dead Time Update Register 1 */
#define REG_PWM_CMR2            (0xF802C240) /**< (PWM) PWM Channel Mode Register 2 */
#define REG_PWM_CDTY2           (0xF802C244) /**< (PWM) PWM Channel Duty Cycle Register 2 */
#define REG_PWM_CDTYUPD2        (0xF802C248) /**< (PWM) PWM Channel Duty Cycle Update Register 2 */
#define REG_PWM_CPRD2           (0xF802C24C) /**< (PWM) PWM Channel Period Register 2 */
#define REG_PWM_CPRDUPD2        (0xF802C250) /**< (PWM) PWM Channel Period Update Register 2 */
#define REG_PWM_CCNT2           (0xF802C254) /**< (PWM) PWM Channel Counter Register 2 */
#define REG_PWM_DT2             (0xF802C258) /**< (PWM) PWM Channel Dead Time Register 2 */
#define REG_PWM_DTUPD2          (0xF802C25C) /**< (PWM) PWM Channel Dead Time Update Register 2 */
#define REG_PWM_CMR3            (0xF802C260) /**< (PWM) PWM Channel Mode Register 3 */
#define REG_PWM_CDTY3           (0xF802C264) /**< (PWM) PWM Channel Duty Cycle Register 3 */
#define REG_PWM_CDTYUPD3        (0xF802C268) /**< (PWM) PWM Channel Duty Cycle Update Register 3 */
#define REG_PWM_CPRD3           (0xF802C26C) /**< (PWM) PWM Channel Period Register 3 */
#define REG_PWM_CPRDUPD3        (0xF802C270) /**< (PWM) PWM Channel Period Update Register 3 */
#define REG_PWM_CCNT3           (0xF802C274) /**< (PWM) PWM Channel Counter Register 3 */
#define REG_PWM_DT3             (0xF802C278) /**< (PWM) PWM Channel Dead Time Register 3 */
#define REG_PWM_DTUPD3          (0xF802C27C) /**< (PWM) PWM Channel Dead Time Update Register 3 */
#define REG_PWM_CLK             (0xF802C000) /**< (PWM) PWM Clock Register */
#define REG_PWM_ENA             (0xF802C004) /**< (PWM) PWM Enable Register */
#define REG_PWM_DIS             (0xF802C008) /**< (PWM) PWM Disable Register */
#define REG_PWM_SR              (0xF802C00C) /**< (PWM) PWM Status Register */
#define REG_PWM_IER1            (0xF802C010) /**< (PWM) PWM Interrupt Enable Register 1 */
#define REG_PWM_IDR1            (0xF802C014) /**< (PWM) PWM Interrupt Disable Register 1 */
#define REG_PWM_IMR1            (0xF802C018) /**< (PWM) PWM Interrupt Mask Register 1 */
#define REG_PWM_ISR1            (0xF802C01C) /**< (PWM) PWM Interrupt Status Register 1 */
#define REG_PWM_SCM             (0xF802C020) /**< (PWM) PWM Sync Channels Mode Register */
#define REG_PWM_DMAR            (0xF802C024) /**< (PWM) PWM DMA Register */
#define REG_PWM_SCUC            (0xF802C028) /**< (PWM) PWM Sync Channels Update Control Register */
#define REG_PWM_SCUP            (0xF802C02C) /**< (PWM) PWM Sync Channels Update Period Register */
#define REG_PWM_SCUPUPD         (0xF802C030) /**< (PWM) PWM Sync Channels Update Period Update Register */
#define REG_PWM_IER2            (0xF802C034) /**< (PWM) PWM Interrupt Enable Register 2 */
#define REG_PWM_IDR2            (0xF802C038) /**< (PWM) PWM Interrupt Disable Register 2 */
#define REG_PWM_IMR2            (0xF802C03C) /**< (PWM) PWM Interrupt Mask Register 2 */
#define REG_PWM_ISR2            (0xF802C040) /**< (PWM) PWM Interrupt Status Register 2 */
#define REG_PWM_OOV             (0xF802C044) /**< (PWM) PWM Output Override Value Register */
#define REG_PWM_OS              (0xF802C048) /**< (PWM) PWM Output Selection Register */
#define REG_PWM_OSS             (0xF802C04C) /**< (PWM) PWM Output Selection Set Register */
#define REG_PWM_OSC             (0xF802C050) /**< (PWM) PWM Output Selection Clear Register */
#define REG_PWM_OSSUPD          (0xF802C054) /**< (PWM) PWM Output Selection Set Update Register */
#define REG_PWM_OSCUPD          (0xF802C058) /**< (PWM) PWM Output Selection Clear Update Register */
#define REG_PWM_FMR             (0xF802C05C) /**< (PWM) PWM Fault Mode Register */
#define REG_PWM_FSR             (0xF802C060) /**< (PWM) PWM Fault Status Register */
#define REG_PWM_FCR             (0xF802C064) /**< (PWM) PWM Fault Clear Register */
#define REG_PWM_FPV1            (0xF802C068) /**< (PWM) PWM Fault Protection Value Register 1 */
#define REG_PWM_FPE             (0xF802C06C) /**< (PWM) PWM Fault Protection Enable Register */
#define REG_PWM_ELMR            (0xF802C07C) /**< (PWM) PWM Event Line 0 Mode Register */
#define REG_PWM_ELMR0           (0xF802C07C) /**< (PWM) PWM Event Line 0 Mode Register 0 */
#define REG_PWM_ELMR1           (0xF802C080) /**< (PWM) PWM Event Line 0 Mode Register 1 */
#define REG_PWM_SSPR            (0xF802C0A0) /**< (PWM) PWM Spread Spectrum Register */
#define REG_PWM_SSPUP           (0xF802C0A4) /**< (PWM) PWM Spread Spectrum Update Register */
#define REG_PWM_SMMR            (0xF802C0B0) /**< (PWM) PWM Stepper Motor Mode Register */
#define REG_PWM_FPV2            (0xF802C0C0) /**< (PWM) PWM Fault Protection Value 2 Register */
#define REG_PWM_WPCR            (0xF802C0E4) /**< (PWM) PWM Write Protection Control Register */
#define REG_PWM_WPSR            (0xF802C0E8) /**< (PWM) PWM Write Protection Status Register */
#define REG_PWM_CMUPD0          (0xF802C400) /**< (PWM) PWM Channel Mode Update Register (ch_num = 0) */
#define REG_PWM_CMUPD1          (0xF802C420) /**< (PWM) PWM Channel Mode Update Register (ch_num = 1) */
#define REG_PWM_ETRG1           (0xF802C42C) /**< (PWM) PWM External Trigger Register 1 */
#define REG_PWM_LEBR1           (0xF802C430) /**< (PWM) PWM Leading-Edge Blanking Register 1 */
#define REG_PWM_ETRG2           (0xF802C434) /**< (PWM) PWM External Trigger Register 2 */
#define REG_PWM_LEBR2           (0xF802C438) /**< (PWM) PWM Leading-Edge Blanking Register 2 */
#define REG_PWM_CMUPD2          (0xF802C440) /**< (PWM) PWM Channel Mode Update Register (ch_num = 2) */
#define REG_PWM_CMUPD3          (0xF802C460) /**< (PWM) PWM Channel Mode Update Register (ch_num = 3) */

#else

#define REG_PWM_CMPV0           (*(__IO uint32_t*)0xF802C130U) /**< (PWM) PWM Comparison 0 Value Register 0 */
#define REG_PWM_CMPVUPD0        (*(__O  uint32_t*)0xF802C134U) /**< (PWM) PWM Comparison 0 Value Update Register 0 */
#define REG_PWM_CMPM0           (*(__IO uint32_t*)0xF802C138U) /**< (PWM) PWM Comparison 0 Mode Register 0 */
#define REG_PWM_CMPMUPD0        (*(__O  uint32_t*)0xF802C13CU) /**< (PWM) PWM Comparison 0 Mode Update Register 0 */
#define REG_PWM_CMPV1           (*(__IO uint32_t*)0xF802C140U) /**< (PWM) PWM Comparison 0 Value Register 1 */
#define REG_PWM_CMPVUPD1        (*(__O  uint32_t*)0xF802C144U) /**< (PWM) PWM Comparison 0 Value Update Register 1 */
#define REG_PWM_CMPM1           (*(__IO uint32_t*)0xF802C148U) /**< (PWM) PWM Comparison 0 Mode Register 1 */
#define REG_PWM_CMPMUPD1        (*(__O  uint32_t*)0xF802C14CU) /**< (PWM) PWM Comparison 0 Mode Update Register 1 */
#define REG_PWM_CMPV2           (*(__IO uint32_t*)0xF802C150U) /**< (PWM) PWM Comparison 0 Value Register 2 */
#define REG_PWM_CMPVUPD2        (*(__O  uint32_t*)0xF802C154U) /**< (PWM) PWM Comparison 0 Value Update Register 2 */
#define REG_PWM_CMPM2           (*(__IO uint32_t*)0xF802C158U) /**< (PWM) PWM Comparison 0 Mode Register 2 */
#define REG_PWM_CMPMUPD2        (*(__O  uint32_t*)0xF802C15CU) /**< (PWM) PWM Comparison 0 Mode Update Register 2 */
#define REG_PWM_CMPV3           (*(__IO uint32_t*)0xF802C160U) /**< (PWM) PWM Comparison 0 Value Register 3 */
#define REG_PWM_CMPVUPD3        (*(__O  uint32_t*)0xF802C164U) /**< (PWM) PWM Comparison 0 Value Update Register 3 */
#define REG_PWM_CMPM3           (*(__IO uint32_t*)0xF802C168U) /**< (PWM) PWM Comparison 0 Mode Register 3 */
#define REG_PWM_CMPMUPD3        (*(__O  uint32_t*)0xF802C16CU) /**< (PWM) PWM Comparison 0 Mode Update Register 3 */
#define REG_PWM_CMPV4           (*(__IO uint32_t*)0xF802C170U) /**< (PWM) PWM Comparison 0 Value Register 4 */
#define REG_PWM_CMPVUPD4        (*(__O  uint32_t*)0xF802C174U) /**< (PWM) PWM Comparison 0 Value Update Register 4 */
#define REG_PWM_CMPM4           (*(__IO uint32_t*)0xF802C178U) /**< (PWM) PWM Comparison 0 Mode Register 4 */
#define REG_PWM_CMPMUPD4        (*(__O  uint32_t*)0xF802C17CU) /**< (PWM) PWM Comparison 0 Mode Update Register 4 */
#define REG_PWM_CMPV5           (*(__IO uint32_t*)0xF802C180U) /**< (PWM) PWM Comparison 0 Value Register 5 */
#define REG_PWM_CMPVUPD5        (*(__O  uint32_t*)0xF802C184U) /**< (PWM) PWM Comparison 0 Value Update Register 5 */
#define REG_PWM_CMPM5           (*(__IO uint32_t*)0xF802C188U) /**< (PWM) PWM Comparison 0 Mode Register 5 */
#define REG_PWM_CMPMUPD5        (*(__O  uint32_t*)0xF802C18CU) /**< (PWM) PWM Comparison 0 Mode Update Register 5 */
#define REG_PWM_CMPV6           (*(__IO uint32_t*)0xF802C190U) /**< (PWM) PWM Comparison 0 Value Register 6 */
#define REG_PWM_CMPVUPD6        (*(__O  uint32_t*)0xF802C194U) /**< (PWM) PWM Comparison 0 Value Update Register 6 */
#define REG_PWM_CMPM6           (*(__IO uint32_t*)0xF802C198U) /**< (PWM) PWM Comparison 0 Mode Register 6 */
#define REG_PWM_CMPMUPD6        (*(__O  uint32_t*)0xF802C19CU) /**< (PWM) PWM Comparison 0 Mode Update Register 6 */
#define REG_PWM_CMPV7           (*(__IO uint32_t*)0xF802C1A0U) /**< (PWM) PWM Comparison 0 Value Register 7 */
#define REG_PWM_CMPVUPD7        (*(__O  uint32_t*)0xF802C1A4U) /**< (PWM) PWM Comparison 0 Value Update Register 7 */
#define REG_PWM_CMPM7           (*(__IO uint32_t*)0xF802C1A8U) /**< (PWM) PWM Comparison 0 Mode Register 7 */
#define REG_PWM_CMPMUPD7        (*(__O  uint32_t*)0xF802C1ACU) /**< (PWM) PWM Comparison 0 Mode Update Register 7 */
#define REG_PWM_CMR0            (*(__IO uint32_t*)0xF802C200U) /**< (PWM) PWM Channel Mode Register 0 */
#define REG_PWM_CDTY0           (*(__IO uint32_t*)0xF802C204U) /**< (PWM) PWM Channel Duty Cycle Register 0 */
#define REG_PWM_CDTYUPD0        (*(__O  uint32_t*)0xF802C208U) /**< (PWM) PWM Channel Duty Cycle Update Register 0 */
#define REG_PWM_CPRD0           (*(__IO uint32_t*)0xF802C20CU) /**< (PWM) PWM Channel Period Register 0 */
#define REG_PWM_CPRDUPD0        (*(__O  uint32_t*)0xF802C210U) /**< (PWM) PWM Channel Period Update Register 0 */
#define REG_PWM_CCNT0           (*(__I  uint32_t*)0xF802C214U) /**< (PWM) PWM Channel Counter Register 0 */
#define REG_PWM_DT0             (*(__IO uint32_t*)0xF802C218U) /**< (PWM) PWM Channel Dead Time Register 0 */
#define REG_PWM_DTUPD0          (*(__O  uint32_t*)0xF802C21CU) /**< (PWM) PWM Channel Dead Time Update Register 0 */
#define REG_PWM_CMR1            (*(__IO uint32_t*)0xF802C220U) /**< (PWM) PWM Channel Mode Register 1 */
#define REG_PWM_CDTY1           (*(__IO uint32_t*)0xF802C224U) /**< (PWM) PWM Channel Duty Cycle Register 1 */
#define REG_PWM_CDTYUPD1        (*(__O  uint32_t*)0xF802C228U) /**< (PWM) PWM Channel Duty Cycle Update Register 1 */
#define REG_PWM_CPRD1           (*(__IO uint32_t*)0xF802C22CU) /**< (PWM) PWM Channel Period Register 1 */
#define REG_PWM_CPRDUPD1        (*(__O  uint32_t*)0xF802C230U) /**< (PWM) PWM Channel Period Update Register 1 */
#define REG_PWM_CCNT1           (*(__I  uint32_t*)0xF802C234U) /**< (PWM) PWM Channel Counter Register 1 */
#define REG_PWM_DT1             (*(__IO uint32_t*)0xF802C238U) /**< (PWM) PWM Channel Dead Time Register 1 */
#define REG_PWM_DTUPD1          (*(__O  uint32_t*)0xF802C23CU) /**< (PWM) PWM Channel Dead Time Update Register 1 */
#define REG_PWM_CMR2            (*(__IO uint32_t*)0xF802C240U) /**< (PWM) PWM Channel Mode Register 2 */
#define REG_PWM_CDTY2           (*(__IO uint32_t*)0xF802C244U) /**< (PWM) PWM Channel Duty Cycle Register 2 */
#define REG_PWM_CDTYUPD2        (*(__O  uint32_t*)0xF802C248U) /**< (PWM) PWM Channel Duty Cycle Update Register 2 */
#define REG_PWM_CPRD2           (*(__IO uint32_t*)0xF802C24CU) /**< (PWM) PWM Channel Period Register 2 */
#define REG_PWM_CPRDUPD2        (*(__O  uint32_t*)0xF802C250U) /**< (PWM) PWM Channel Period Update Register 2 */
#define REG_PWM_CCNT2           (*(__I  uint32_t*)0xF802C254U) /**< (PWM) PWM Channel Counter Register 2 */
#define REG_PWM_DT2             (*(__IO uint32_t*)0xF802C258U) /**< (PWM) PWM Channel Dead Time Register 2 */
#define REG_PWM_DTUPD2          (*(__O  uint32_t*)0xF802C25CU) /**< (PWM) PWM Channel Dead Time Update Register 2 */
#define REG_PWM_CMR3            (*(__IO uint32_t*)0xF802C260U) /**< (PWM) PWM Channel Mode Register 3 */
#define REG_PWM_CDTY3           (*(__IO uint32_t*)0xF802C264U) /**< (PWM) PWM Channel Duty Cycle Register 3 */
#define REG_PWM_CDTYUPD3        (*(__O  uint32_t*)0xF802C268U) /**< (PWM) PWM Channel Duty Cycle Update Register 3 */
#define REG_PWM_CPRD3           (*(__IO uint32_t*)0xF802C26CU) /**< (PWM) PWM Channel Period Register 3 */
#define REG_PWM_CPRDUPD3        (*(__O  uint32_t*)0xF802C270U) /**< (PWM) PWM Channel Period Update Register 3 */
#define REG_PWM_CCNT3           (*(__I  uint32_t*)0xF802C274U) /**< (PWM) PWM Channel Counter Register 3 */
#define REG_PWM_DT3             (*(__IO uint32_t*)0xF802C278U) /**< (PWM) PWM Channel Dead Time Register 3 */
#define REG_PWM_DTUPD3          (*(__O  uint32_t*)0xF802C27CU) /**< (PWM) PWM Channel Dead Time Update Register 3 */
#define REG_PWM_CLK             (*(__IO uint32_t*)0xF802C000U) /**< (PWM) PWM Clock Register */
#define REG_PWM_ENA             (*(__O  uint32_t*)0xF802C004U) /**< (PWM) PWM Enable Register */
#define REG_PWM_DIS             (*(__O  uint32_t*)0xF802C008U) /**< (PWM) PWM Disable Register */
#define REG_PWM_SR              (*(__I  uint32_t*)0xF802C00CU) /**< (PWM) PWM Status Register */
#define REG_PWM_IER1            (*(__O  uint32_t*)0xF802C010U) /**< (PWM) PWM Interrupt Enable Register 1 */
#define REG_PWM_IDR1            (*(__O  uint32_t*)0xF802C014U) /**< (PWM) PWM Interrupt Disable Register 1 */
#define REG_PWM_IMR1            (*(__I  uint32_t*)0xF802C018U) /**< (PWM) PWM Interrupt Mask Register 1 */
#define REG_PWM_ISR1            (*(__I  uint32_t*)0xF802C01CU) /**< (PWM) PWM Interrupt Status Register 1 */
#define REG_PWM_SCM             (*(__IO uint32_t*)0xF802C020U) /**< (PWM) PWM Sync Channels Mode Register */
#define REG_PWM_DMAR            (*(__O  uint32_t*)0xF802C024U) /**< (PWM) PWM DMA Register */
#define REG_PWM_SCUC            (*(__IO uint32_t*)0xF802C028U) /**< (PWM) PWM Sync Channels Update Control Register */
#define REG_PWM_SCUP            (*(__IO uint32_t*)0xF802C02CU) /**< (PWM) PWM Sync Channels Update Period Register */
#define REG_PWM_SCUPUPD         (*(__O  uint32_t*)0xF802C030U) /**< (PWM) PWM Sync Channels Update Period Update Register */
#define REG_PWM_IER2            (*(__O  uint32_t*)0xF802C034U) /**< (PWM) PWM Interrupt Enable Register 2 */
#define REG_PWM_IDR2            (*(__O  uint32_t*)0xF802C038U) /**< (PWM) PWM Interrupt Disable Register 2 */
#define REG_PWM_IMR2            (*(__I  uint32_t*)0xF802C03CU) /**< (PWM) PWM Interrupt Mask Register 2 */
#define REG_PWM_ISR2            (*(__I  uint32_t*)0xF802C040U) /**< (PWM) PWM Interrupt Status Register 2 */
#define REG_PWM_OOV             (*(__IO uint32_t*)0xF802C044U) /**< (PWM) PWM Output Override Value Register */
#define REG_PWM_OS              (*(__IO uint32_t*)0xF802C048U) /**< (PWM) PWM Output Selection Register */
#define REG_PWM_OSS             (*(__O  uint32_t*)0xF802C04CU) /**< (PWM) PWM Output Selection Set Register */
#define REG_PWM_OSC             (*(__O  uint32_t*)0xF802C050U) /**< (PWM) PWM Output Selection Clear Register */
#define REG_PWM_OSSUPD          (*(__O  uint32_t*)0xF802C054U) /**< (PWM) PWM Output Selection Set Update Register */
#define REG_PWM_OSCUPD          (*(__O  uint32_t*)0xF802C058U) /**< (PWM) PWM Output Selection Clear Update Register */
#define REG_PWM_FMR             (*(__IO uint32_t*)0xF802C05CU) /**< (PWM) PWM Fault Mode Register */
#define REG_PWM_FSR             (*(__I  uint32_t*)0xF802C060U) /**< (PWM) PWM Fault Status Register */
#define REG_PWM_FCR             (*(__O  uint32_t*)0xF802C064U) /**< (PWM) PWM Fault Clear Register */
#define REG_PWM_FPV1            (*(__IO uint32_t*)0xF802C068U) /**< (PWM) PWM Fault Protection Value Register 1 */
#define REG_PWM_FPE             (*(__IO uint32_t*)0xF802C06CU) /**< (PWM) PWM Fault Protection Enable Register */
#define REG_PWM_ELMR            (*(__IO uint32_t*)0xF802C07CU) /**< (PWM) PWM Event Line 0 Mode Register */
#define REG_PWM_ELMR0           (*(__IO uint32_t*)0xF802C07CU) /**< (PWM) PWM Event Line 0 Mode Register 0 */
#define REG_PWM_ELMR1           (*(__IO uint32_t*)0xF802C080U) /**< (PWM) PWM Event Line 0 Mode Register 1 */
#define REG_PWM_SSPR            (*(__IO uint32_t*)0xF802C0A0U) /**< (PWM) PWM Spread Spectrum Register */
#define REG_PWM_SSPUP           (*(__O  uint32_t*)0xF802C0A4U) /**< (PWM) PWM Spread Spectrum Update Register */
#define REG_PWM_SMMR            (*(__IO uint32_t*)0xF802C0B0U) /**< (PWM) PWM Stepper Motor Mode Register */
#define REG_PWM_FPV2            (*(__IO uint32_t*)0xF802C0C0U) /**< (PWM) PWM Fault Protection Value 2 Register */
#define REG_PWM_WPCR            (*(__O  uint32_t*)0xF802C0E4U) /**< (PWM) PWM Write Protection Control Register */
#define REG_PWM_WPSR            (*(__I  uint32_t*)0xF802C0E8U) /**< (PWM) PWM Write Protection Status Register */
#define REG_PWM_CMUPD0          (*(__O  uint32_t*)0xF802C400U) /**< (PWM) PWM Channel Mode Update Register (ch_num = 0) */
#define REG_PWM_CMUPD1          (*(__O  uint32_t*)0xF802C420U) /**< (PWM) PWM Channel Mode Update Register (ch_num = 1) */
#define REG_PWM_ETRG1           (*(__IO uint32_t*)0xF802C42CU) /**< (PWM) PWM External Trigger Register 1 */
#define REG_PWM_LEBR1           (*(__IO uint32_t*)0xF802C430U) /**< (PWM) PWM Leading-Edge Blanking Register 1 */
#define REG_PWM_ETRG2           (*(__IO uint32_t*)0xF802C434U) /**< (PWM) PWM External Trigger Register 2 */
#define REG_PWM_LEBR2           (*(__IO uint32_t*)0xF802C438U) /**< (PWM) PWM Leading-Edge Blanking Register 2 */
#define REG_PWM_CMUPD2          (*(__O  uint32_t*)0xF802C440U) /**< (PWM) PWM Channel Mode Update Register (ch_num = 2) */
#define REG_PWM_CMUPD3          (*(__O  uint32_t*)0xF802C460U) /**< (PWM) PWM Channel Mode Update Register (ch_num = 3) */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for PWM peripheral ========== */
#define PWM_INSTANCE_ID                          38         
#define PWM_CLOCK_ID                             38         
#define PWM_DMAC_ID_TX                           10         
#define PWM_FAULT_PWM_ID0                        0x0        /* Fault 0 - PWM0_PWMFI0 Input pin */
#define PWM_FAULT_PWM_ID1                        0x1        /* Fault 1 - PWM0_PWMFI1 Input pin */
#define PWM_FAULT_PWM_ID2                        0x2        /* Fault 2 - MAIN_OSC_PMC */
#define PWM_FAULT_PWM_ID3                        0x3        /* Fault 3 - ADC */
#define PWM_FAULT_PWM_ID4                        0x4        /* Fault 4 - TIMER0 */
#define PWM_FAULT_PWM_ID5                        0x5        /* Fault 5 - TIMER1 */

#endif /* _SAMA5D2_PWM_INSTANCE_ */
