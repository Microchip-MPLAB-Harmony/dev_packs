/**
 * \file
 *
 * \brief Instance description for TWIHS0
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
#ifndef _SAMA5D2_TWIHS0_INSTANCE_H_
#define _SAMA5D2_TWIHS0_INSTANCE_H_

/* ========== Register definition for TWIHS0 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_TWIHS0_CR           (0xF8028000) /**< (TWIHS0) Control Register */
#define REG_TWIHS0_MMR          (0xF8028004) /**< (TWIHS0) Master Mode Register */
#define REG_TWIHS0_SMR          (0xF8028008) /**< (TWIHS0) Slave Mode Register */
#define REG_TWIHS0_IADR         (0xF802800C) /**< (TWIHS0) Internal Address Register */
#define REG_TWIHS0_CWGR         (0xF8028010) /**< (TWIHS0) Clock Waveform Generator Register */
#define REG_TWIHS0_SR           (0xF8028020) /**< (TWIHS0) Status Register */
#define REG_TWIHS0_IER          (0xF8028024) /**< (TWIHS0) Interrupt Enable Register */
#define REG_TWIHS0_IDR          (0xF8028028) /**< (TWIHS0) Interrupt Disable Register */
#define REG_TWIHS0_IMR          (0xF802802C) /**< (TWIHS0) Interrupt Mask Register */
#define REG_TWIHS0_RHR          (0xF8028030) /**< (TWIHS0) Receive Holding Register */
#define REG_TWIHS0_THR          (0xF8028034) /**< (TWIHS0) Transmit Holding Register */
#define REG_TWIHS0_SMBTR        (0xF8028038) /**< (TWIHS0) SMBus Timing Register */
#define REG_TWIHS0_ACR          (0xF8028040) /**< (TWIHS0) Alternative Command Register */
#define REG_TWIHS0_FILTR        (0xF8028044) /**< (TWIHS0) Filter Register */
#define REG_TWIHS0_SWMR         (0xF802804C) /**< (TWIHS0) SleepWalking Matching Register */
#define REG_TWIHS0_FMR          (0xF8028050) /**< (TWIHS0) FIFO Mode Register */
#define REG_TWIHS0_FLR          (0xF8028054) /**< (TWIHS0) FIFO Level Register */
#define REG_TWIHS0_FSR          (0xF8028060) /**< (TWIHS0) FIFO Status Register */
#define REG_TWIHS0_FIER         (0xF8028064) /**< (TWIHS0) FIFO Interrupt Enable Register */
#define REG_TWIHS0_FIDR         (0xF8028068) /**< (TWIHS0) FIFO Interrupt Disable Register */
#define REG_TWIHS0_FIMR         (0xF802806C) /**< (TWIHS0) FIFO Interrupt Mask Register */
#define REG_TWIHS0_DR           (0xF80280D0) /**< (TWIHS0) Debug Register */
#define REG_TWIHS0_WPMR         (0xF80280E4) /**< (TWIHS0) Write Protection Mode Register */
#define REG_TWIHS0_WPSR         (0xF80280E8) /**< (TWIHS0) Write Protection Status Register */

#else

#define REG_TWIHS0_CR           (*(__O  uint32_t*)0xF8028000U) /**< (TWIHS0) Control Register */
#define REG_TWIHS0_MMR          (*(__IO uint32_t*)0xF8028004U) /**< (TWIHS0) Master Mode Register */
#define REG_TWIHS0_SMR          (*(__IO uint32_t*)0xF8028008U) /**< (TWIHS0) Slave Mode Register */
#define REG_TWIHS0_IADR         (*(__IO uint32_t*)0xF802800CU) /**< (TWIHS0) Internal Address Register */
#define REG_TWIHS0_CWGR         (*(__IO uint32_t*)0xF8028010U) /**< (TWIHS0) Clock Waveform Generator Register */
#define REG_TWIHS0_SR           (*(__I  uint32_t*)0xF8028020U) /**< (TWIHS0) Status Register */
#define REG_TWIHS0_IER          (*(__O  uint32_t*)0xF8028024U) /**< (TWIHS0) Interrupt Enable Register */
#define REG_TWIHS0_IDR          (*(__O  uint32_t*)0xF8028028U) /**< (TWIHS0) Interrupt Disable Register */
#define REG_TWIHS0_IMR          (*(__I  uint32_t*)0xF802802CU) /**< (TWIHS0) Interrupt Mask Register */
#define REG_TWIHS0_RHR          (*(__I  uint32_t*)0xF8028030U) /**< (TWIHS0) Receive Holding Register */
#define REG_TWIHS0_THR          (*(__O  uint32_t*)0xF8028034U) /**< (TWIHS0) Transmit Holding Register */
#define REG_TWIHS0_SMBTR        (*(__IO uint32_t*)0xF8028038U) /**< (TWIHS0) SMBus Timing Register */
#define REG_TWIHS0_ACR          (*(__IO uint32_t*)0xF8028040U) /**< (TWIHS0) Alternative Command Register */
#define REG_TWIHS0_FILTR        (*(__IO uint32_t*)0xF8028044U) /**< (TWIHS0) Filter Register */
#define REG_TWIHS0_SWMR         (*(__IO uint32_t*)0xF802804CU) /**< (TWIHS0) SleepWalking Matching Register */
#define REG_TWIHS0_FMR          (*(__IO uint32_t*)0xF8028050U) /**< (TWIHS0) FIFO Mode Register */
#define REG_TWIHS0_FLR          (*(__I  uint32_t*)0xF8028054U) /**< (TWIHS0) FIFO Level Register */
#define REG_TWIHS0_FSR          (*(__I  uint32_t*)0xF8028060U) /**< (TWIHS0) FIFO Status Register */
#define REG_TWIHS0_FIER         (*(__O  uint32_t*)0xF8028064U) /**< (TWIHS0) FIFO Interrupt Enable Register */
#define REG_TWIHS0_FIDR         (*(__O  uint32_t*)0xF8028068U) /**< (TWIHS0) FIFO Interrupt Disable Register */
#define REG_TWIHS0_FIMR         (*(__I  uint32_t*)0xF802806CU) /**< (TWIHS0) FIFO Interrupt Mask Register */
#define REG_TWIHS0_DR           (*(__I  uint32_t*)0xF80280D0U) /**< (TWIHS0) Debug Register */
#define REG_TWIHS0_WPMR         (*(__IO uint32_t*)0xF80280E4U) /**< (TWIHS0) Write Protection Mode Register */
#define REG_TWIHS0_WPSR         (*(__I  uint32_t*)0xF80280E8U) /**< (TWIHS0) Write Protection Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for TWIHS0 peripheral ========== */
#define TWIHS0_INSTANCE_ID                       29         
#define TWIHS0_CLOCK_ID                          29         
#define TWIHS0_DMAC_ID_TX                        0          
#define TWIHS0_DMAC_ID_RX                        1          

#endif /* _SAMA5D2_TWIHS0_INSTANCE_ */
