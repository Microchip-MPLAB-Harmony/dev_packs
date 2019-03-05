/**
 * \file
 *
 * \brief Instance description for TWIHS1
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
#ifndef _SAMA5D2_TWIHS1_INSTANCE_H_
#define _SAMA5D2_TWIHS1_INSTANCE_H_

/* ========== Register definition for TWIHS1 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_TWIHS1_CR           (0xFC028000) /**< (TWIHS1) Control Register */
#define REG_TWIHS1_MMR          (0xFC028004) /**< (TWIHS1) Master Mode Register */
#define REG_TWIHS1_SMR          (0xFC028008) /**< (TWIHS1) Slave Mode Register */
#define REG_TWIHS1_IADR         (0xFC02800C) /**< (TWIHS1) Internal Address Register */
#define REG_TWIHS1_CWGR         (0xFC028010) /**< (TWIHS1) Clock Waveform Generator Register */
#define REG_TWIHS1_SR           (0xFC028020) /**< (TWIHS1) Status Register */
#define REG_TWIHS1_IER          (0xFC028024) /**< (TWIHS1) Interrupt Enable Register */
#define REG_TWIHS1_IDR          (0xFC028028) /**< (TWIHS1) Interrupt Disable Register */
#define REG_TWIHS1_IMR          (0xFC02802C) /**< (TWIHS1) Interrupt Mask Register */
#define REG_TWIHS1_RHR          (0xFC028030) /**< (TWIHS1) Receive Holding Register */
#define REG_TWIHS1_THR          (0xFC028034) /**< (TWIHS1) Transmit Holding Register */
#define REG_TWIHS1_SMBTR        (0xFC028038) /**< (TWIHS1) SMBus Timing Register */
#define REG_TWIHS1_ACR          (0xFC028040) /**< (TWIHS1) Alternative Command Register */
#define REG_TWIHS1_FILTR        (0xFC028044) /**< (TWIHS1) Filter Register */
#define REG_TWIHS1_SWMR         (0xFC02804C) /**< (TWIHS1) SleepWalking Matching Register */
#define REG_TWIHS1_FMR          (0xFC028050) /**< (TWIHS1) FIFO Mode Register */
#define REG_TWIHS1_FLR          (0xFC028054) /**< (TWIHS1) FIFO Level Register */
#define REG_TWIHS1_FSR          (0xFC028060) /**< (TWIHS1) FIFO Status Register */
#define REG_TWIHS1_FIER         (0xFC028064) /**< (TWIHS1) FIFO Interrupt Enable Register */
#define REG_TWIHS1_FIDR         (0xFC028068) /**< (TWIHS1) FIFO Interrupt Disable Register */
#define REG_TWIHS1_FIMR         (0xFC02806C) /**< (TWIHS1) FIFO Interrupt Mask Register */
#define REG_TWIHS1_DR           (0xFC0280D0) /**< (TWIHS1) Debug Register */
#define REG_TWIHS1_WPMR         (0xFC0280E4) /**< (TWIHS1) Write Protection Mode Register */
#define REG_TWIHS1_WPSR         (0xFC0280E8) /**< (TWIHS1) Write Protection Status Register */

#else

#define REG_TWIHS1_CR           (*(__O  uint32_t*)0xFC028000U) /**< (TWIHS1) Control Register */
#define REG_TWIHS1_MMR          (*(__IO uint32_t*)0xFC028004U) /**< (TWIHS1) Master Mode Register */
#define REG_TWIHS1_SMR          (*(__IO uint32_t*)0xFC028008U) /**< (TWIHS1) Slave Mode Register */
#define REG_TWIHS1_IADR         (*(__IO uint32_t*)0xFC02800CU) /**< (TWIHS1) Internal Address Register */
#define REG_TWIHS1_CWGR         (*(__IO uint32_t*)0xFC028010U) /**< (TWIHS1) Clock Waveform Generator Register */
#define REG_TWIHS1_SR           (*(__I  uint32_t*)0xFC028020U) /**< (TWIHS1) Status Register */
#define REG_TWIHS1_IER          (*(__O  uint32_t*)0xFC028024U) /**< (TWIHS1) Interrupt Enable Register */
#define REG_TWIHS1_IDR          (*(__O  uint32_t*)0xFC028028U) /**< (TWIHS1) Interrupt Disable Register */
#define REG_TWIHS1_IMR          (*(__I  uint32_t*)0xFC02802CU) /**< (TWIHS1) Interrupt Mask Register */
#define REG_TWIHS1_RHR          (*(__I  uint32_t*)0xFC028030U) /**< (TWIHS1) Receive Holding Register */
#define REG_TWIHS1_THR          (*(__O  uint32_t*)0xFC028034U) /**< (TWIHS1) Transmit Holding Register */
#define REG_TWIHS1_SMBTR        (*(__IO uint32_t*)0xFC028038U) /**< (TWIHS1) SMBus Timing Register */
#define REG_TWIHS1_ACR          (*(__IO uint32_t*)0xFC028040U) /**< (TWIHS1) Alternative Command Register */
#define REG_TWIHS1_FILTR        (*(__IO uint32_t*)0xFC028044U) /**< (TWIHS1) Filter Register */
#define REG_TWIHS1_SWMR         (*(__IO uint32_t*)0xFC02804CU) /**< (TWIHS1) SleepWalking Matching Register */
#define REG_TWIHS1_FMR          (*(__IO uint32_t*)0xFC028050U) /**< (TWIHS1) FIFO Mode Register */
#define REG_TWIHS1_FLR          (*(__I  uint32_t*)0xFC028054U) /**< (TWIHS1) FIFO Level Register */
#define REG_TWIHS1_FSR          (*(__I  uint32_t*)0xFC028060U) /**< (TWIHS1) FIFO Status Register */
#define REG_TWIHS1_FIER         (*(__O  uint32_t*)0xFC028064U) /**< (TWIHS1) FIFO Interrupt Enable Register */
#define REG_TWIHS1_FIDR         (*(__O  uint32_t*)0xFC028068U) /**< (TWIHS1) FIFO Interrupt Disable Register */
#define REG_TWIHS1_FIMR         (*(__I  uint32_t*)0xFC02806CU) /**< (TWIHS1) FIFO Interrupt Mask Register */
#define REG_TWIHS1_DR           (*(__I  uint32_t*)0xFC0280D0U) /**< (TWIHS1) Debug Register */
#define REG_TWIHS1_WPMR         (*(__IO uint32_t*)0xFC0280E4U) /**< (TWIHS1) Write Protection Mode Register */
#define REG_TWIHS1_WPSR         (*(__I  uint32_t*)0xFC0280E8U) /**< (TWIHS1) Write Protection Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for TWIHS1 peripheral ========== */
#define TWIHS1_INSTANCE_ID                       30         
#define TWIHS1_CLOCK_ID                          30         
#define TWIHS1_DMAC_ID_TX                        2          
#define TWIHS1_DMAC_ID_RX                        3          

#endif /* _SAMA5D2_TWIHS1_INSTANCE_ */
