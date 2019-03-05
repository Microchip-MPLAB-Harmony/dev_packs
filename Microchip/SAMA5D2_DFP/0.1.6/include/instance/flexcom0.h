/**
 * \file
 *
 * \brief Instance description for FLEXCOM0
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
#ifndef _SAMA5D2_FLEXCOM0_INSTANCE_H_
#define _SAMA5D2_FLEXCOM0_INSTANCE_H_

/* ========== Register definition for FLEXCOM0 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_FLEXCOM0_FLEX_MR    (0xF8034000) /**< (FLEXCOM0) FLEXCOM Mode Register */
#define REG_FLEXCOM0_FLEX_RHR   (0xF8034010) /**< (FLEXCOM0) FLEXCOM Receive Holding Register */
#define REG_FLEXCOM0_FLEX_THR   (0xF8034020) /**< (FLEXCOM0) FLEXCOM Transmit Holding Register */
#define REG_FLEXCOM0_FLEX_US_CR (0xF8034200) /**< (FLEXCOM0) USART Control Register */
#define REG_FLEXCOM0_FLEX_US_MR (0xF8034204) /**< (FLEXCOM0) USART Mode Register */
#define REG_FLEXCOM0_FLEX_US_IER (0xF8034208) /**< (FLEXCOM0) USART Interrupt Enable Register */
#define REG_FLEXCOM0_FLEX_US_IDR (0xF803420C) /**< (FLEXCOM0) USART Interrupt Disable Register */
#define REG_FLEXCOM0_FLEX_US_IMR (0xF8034210) /**< (FLEXCOM0) USART Interrupt Mask Register */
#define REG_FLEXCOM0_FLEX_US_CSR (0xF8034214) /**< (FLEXCOM0) USART Channel Status Register */
#define REG_FLEXCOM0_FLEX_US_RHR (0xF8034218) /**< (FLEXCOM0) USART Receive Holding Register */
#define REG_FLEXCOM0_FLEX_US_THR (0xF803421C) /**< (FLEXCOM0) USART Transmit Holding Register */
#define REG_FLEXCOM0_FLEX_US_BRGR (0xF8034220) /**< (FLEXCOM0) USART Baud Rate Generator Register */
#define REG_FLEXCOM0_FLEX_US_RTOR (0xF8034224) /**< (FLEXCOM0) USART Receiver Timeout Register */
#define REG_FLEXCOM0_FLEX_US_TTGR (0xF8034228) /**< (FLEXCOM0) USART Transmitter Timeguard Register */
#define REG_FLEXCOM0_FLEX_US_FIDI (0xF8034240) /**< (FLEXCOM0) USART FI DI Ratio Register */
#define REG_FLEXCOM0_FLEX_US_NER (0xF8034244) /**< (FLEXCOM0) USART Number of Errors Register */
#define REG_FLEXCOM0_FLEX_US_IF (0xF803424C) /**< (FLEXCOM0) USART IrDA Filter Register */
#define REG_FLEXCOM0_FLEX_US_MAN (0xF8034250) /**< (FLEXCOM0) USART Manchester Configuration Register */
#define REG_FLEXCOM0_FLEX_US_LINMR (0xF8034254) /**< (FLEXCOM0) USART LIN Mode Register */
#define REG_FLEXCOM0_FLEX_US_LINIR (0xF8034258) /**< (FLEXCOM0) USART LIN Identifier Register */
#define REG_FLEXCOM0_FLEX_US_LINBRR (0xF803425C) /**< (FLEXCOM0) USART LIN Baud Rate Register */
#define REG_FLEXCOM0_FLEX_US_CMPR (0xF8034290) /**< (FLEXCOM0) USART Comparison Register */
#define REG_FLEXCOM0_FLEX_US_FMR (0xF80342A0) /**< (FLEXCOM0) USART FIFO Mode Register */
#define REG_FLEXCOM0_FLEX_US_FLR (0xF80342A4) /**< (FLEXCOM0) USART FIFO Level Register */
#define REG_FLEXCOM0_FLEX_US_FIER (0xF80342A8) /**< (FLEXCOM0) USART FIFO Interrupt Enable Register */
#define REG_FLEXCOM0_FLEX_US_FIDR (0xF80342AC) /**< (FLEXCOM0) USART FIFO Interrupt Disable Register */
#define REG_FLEXCOM0_FLEX_US_FIMR (0xF80342B0) /**< (FLEXCOM0) USART FIFO Interrupt Mask Register */
#define REG_FLEXCOM0_FLEX_US_FESR (0xF80342B4) /**< (FLEXCOM0) USART FIFO Event Status Register */
#define REG_FLEXCOM0_FLEX_US_WPMR (0xF80342E4) /**< (FLEXCOM0) USART Write Protection Mode Register */
#define REG_FLEXCOM0_FLEX_US_WPSR (0xF80342E8) /**< (FLEXCOM0) USART Write Protection Status Register */
#define REG_FLEXCOM0_FLEX_SPI_CR (0xF8034400) /**< (FLEXCOM0) SPI Control Register */
#define REG_FLEXCOM0_FLEX_SPI_MR (0xF8034404) /**< (FLEXCOM0) SPI Mode Register */
#define REG_FLEXCOM0_FLEX_SPI_RDR (0xF8034408) /**< (FLEXCOM0) SPI Receive Data Register */
#define REG_FLEXCOM0_FLEX_SPI_TDR (0xF803440C) /**< (FLEXCOM0) SPI Transmit Data Register */
#define REG_FLEXCOM0_FLEX_SPI_SR (0xF8034410) /**< (FLEXCOM0) SPI Status Register */
#define REG_FLEXCOM0_FLEX_SPI_IER (0xF8034414) /**< (FLEXCOM0) SPI Interrupt Enable Register */
#define REG_FLEXCOM0_FLEX_SPI_IDR (0xF8034418) /**< (FLEXCOM0) SPI Interrupt Disable Register */
#define REG_FLEXCOM0_FLEX_SPI_IMR (0xF803441C) /**< (FLEXCOM0) SPI Interrupt Mask Register */
#define REG_FLEXCOM0_FLEX_SPI_CSR (0xF8034430) /**< (FLEXCOM0) SPI Chip Select Register */
#define REG_FLEXCOM0_FLEX_SPI_CSR0 (0xF8034430) /**< (FLEXCOM0) SPI Chip Select Register 0 */
#define REG_FLEXCOM0_FLEX_SPI_CSR1 (0xF8034434) /**< (FLEXCOM0) SPI Chip Select Register 1 */
#define REG_FLEXCOM0_FLEX_SPI_FMR (0xF8034440) /**< (FLEXCOM0) SPI FIFO Mode Register */
#define REG_FLEXCOM0_FLEX_SPI_FLR (0xF8034444) /**< (FLEXCOM0) SPI FIFO Level Register */
#define REG_FLEXCOM0_FLEX_SPI_CMPR (0xF8034448) /**< (FLEXCOM0) SPI Comparison Register */
#define REG_FLEXCOM0_FLEX_SPI_WPMR (0xF80344E4) /**< (FLEXCOM0) SPI Write Protection Mode Register */
#define REG_FLEXCOM0_FLEX_SPI_WPSR (0xF80344E8) /**< (FLEXCOM0) SPI Write Protection Status Register */
#define REG_FLEXCOM0_FLEX_TWI_CR (0xF8034600) /**< (FLEXCOM0) TWI Control Register */
#define REG_FLEXCOM0_FLEX_TWI_MMR (0xF8034604) /**< (FLEXCOM0) TWI Master Mode Register */
#define REG_FLEXCOM0_FLEX_TWI_SMR (0xF8034608) /**< (FLEXCOM0) TWI Slave Mode Register */
#define REG_FLEXCOM0_FLEX_TWI_IADR (0xF803460C) /**< (FLEXCOM0) TWI Internal Address Register */
#define REG_FLEXCOM0_FLEX_TWI_CWGR (0xF8034610) /**< (FLEXCOM0) TWI Clock Waveform Generator Register */
#define REG_FLEXCOM0_FLEX_TWI_SR (0xF8034620) /**< (FLEXCOM0) TWI Status Register */
#define REG_FLEXCOM0_FLEX_TWI_IER (0xF8034624) /**< (FLEXCOM0) TWI Interrupt Enable Register */
#define REG_FLEXCOM0_FLEX_TWI_IDR (0xF8034628) /**< (FLEXCOM0) TWI Interrupt Disable Register */
#define REG_FLEXCOM0_FLEX_TWI_IMR (0xF803462C) /**< (FLEXCOM0) TWI Interrupt Mask Register */
#define REG_FLEXCOM0_FLEX_TWI_RHR (0xF8034630) /**< (FLEXCOM0) TWI Receive Holding Register */
#define REG_FLEXCOM0_FLEX_TWI_THR (0xF8034634) /**< (FLEXCOM0) TWI Transmit Holding Register */
#define REG_FLEXCOM0_FLEX_TWI_SMBTR (0xF8034638) /**< (FLEXCOM0) TWI SMBus Timing Register */
#define REG_FLEXCOM0_FLEX_TWI_ACR (0xF8034640) /**< (FLEXCOM0) TWI Alternative Command Register */
#define REG_FLEXCOM0_FLEX_TWI_FILTR (0xF8034644) /**< (FLEXCOM0) TWI Filter Register */
#define REG_FLEXCOM0_FLEX_TWI_SWMR (0xF803464C) /**< (FLEXCOM0) TWI SleepWalking Matching Register */
#define REG_FLEXCOM0_FLEX_TWI_FMR (0xF8034650) /**< (FLEXCOM0) TWI FIFO Mode Register */
#define REG_FLEXCOM0_FLEX_TWI_FLR (0xF8034654) /**< (FLEXCOM0) TWI FIFO Level Register */
#define REG_FLEXCOM0_FLEX_TWI_FSR (0xF8034660) /**< (FLEXCOM0) TWI FIFO Status Register */
#define REG_FLEXCOM0_FLEX_TWI_FIER (0xF8034664) /**< (FLEXCOM0) TWI FIFO Interrupt Enable Register */
#define REG_FLEXCOM0_FLEX_TWI_FIDR (0xF8034668) /**< (FLEXCOM0) TWI FIFO Interrupt Disable Register */
#define REG_FLEXCOM0_FLEX_TWI_FIMR (0xF803466C) /**< (FLEXCOM0) TWI FIFO Interrupt Mask Register */
#define REG_FLEXCOM0_FLEX_TWI_DR (0xF80346D0) /**< (FLEXCOM0) TWI Debug Register */
#define REG_FLEXCOM0_FLEX_TWI_WPMR (0xF80346E4) /**< (FLEXCOM0) TWI Write Protection Mode Register */
#define REG_FLEXCOM0_FLEX_TWI_WPSR (0xF80346E8) /**< (FLEXCOM0) TWI Write Protection Status Register */

#else

#define REG_FLEXCOM0_FLEX_MR    (*(__IO uint32_t*)0xF8034000U) /**< (FLEXCOM0) FLEXCOM Mode Register */
#define REG_FLEXCOM0_FLEX_RHR   (*(__I  uint32_t*)0xF8034010U) /**< (FLEXCOM0) FLEXCOM Receive Holding Register */
#define REG_FLEXCOM0_FLEX_THR   (*(__IO uint32_t*)0xF8034020U) /**< (FLEXCOM0) FLEXCOM Transmit Holding Register */
#define REG_FLEXCOM0_FLEX_US_CR (*(__O  uint32_t*)0xF8034200U) /**< (FLEXCOM0) USART Control Register */
#define REG_FLEXCOM0_FLEX_US_MR (*(__IO uint32_t*)0xF8034204U) /**< (FLEXCOM0) USART Mode Register */
#define REG_FLEXCOM0_FLEX_US_IER (*(__O  uint32_t*)0xF8034208U) /**< (FLEXCOM0) USART Interrupt Enable Register */
#define REG_FLEXCOM0_FLEX_US_IDR (*(__O  uint32_t*)0xF803420CU) /**< (FLEXCOM0) USART Interrupt Disable Register */
#define REG_FLEXCOM0_FLEX_US_IMR (*(__I  uint32_t*)0xF8034210U) /**< (FLEXCOM0) USART Interrupt Mask Register */
#define REG_FLEXCOM0_FLEX_US_CSR (*(__I  uint32_t*)0xF8034214U) /**< (FLEXCOM0) USART Channel Status Register */
#define REG_FLEXCOM0_FLEX_US_RHR (*(__I  uint32_t*)0xF8034218U) /**< (FLEXCOM0) USART Receive Holding Register */
#define REG_FLEXCOM0_FLEX_US_THR (*(__O  uint32_t*)0xF803421CU) /**< (FLEXCOM0) USART Transmit Holding Register */
#define REG_FLEXCOM0_FLEX_US_BRGR (*(__IO uint32_t*)0xF8034220U) /**< (FLEXCOM0) USART Baud Rate Generator Register */
#define REG_FLEXCOM0_FLEX_US_RTOR (*(__IO uint32_t*)0xF8034224U) /**< (FLEXCOM0) USART Receiver Timeout Register */
#define REG_FLEXCOM0_FLEX_US_TTGR (*(__IO uint32_t*)0xF8034228U) /**< (FLEXCOM0) USART Transmitter Timeguard Register */
#define REG_FLEXCOM0_FLEX_US_FIDI (*(__IO uint32_t*)0xF8034240U) /**< (FLEXCOM0) USART FI DI Ratio Register */
#define REG_FLEXCOM0_FLEX_US_NER (*(__I  uint32_t*)0xF8034244U) /**< (FLEXCOM0) USART Number of Errors Register */
#define REG_FLEXCOM0_FLEX_US_IF (*(__IO uint32_t*)0xF803424CU) /**< (FLEXCOM0) USART IrDA Filter Register */
#define REG_FLEXCOM0_FLEX_US_MAN (*(__IO uint32_t*)0xF8034250U) /**< (FLEXCOM0) USART Manchester Configuration Register */
#define REG_FLEXCOM0_FLEX_US_LINMR (*(__IO uint32_t*)0xF8034254U) /**< (FLEXCOM0) USART LIN Mode Register */
#define REG_FLEXCOM0_FLEX_US_LINIR (*(__IO uint32_t*)0xF8034258U) /**< (FLEXCOM0) USART LIN Identifier Register */
#define REG_FLEXCOM0_FLEX_US_LINBRR (*(__I  uint32_t*)0xF803425CU) /**< (FLEXCOM0) USART LIN Baud Rate Register */
#define REG_FLEXCOM0_FLEX_US_CMPR (*(__IO uint32_t*)0xF8034290U) /**< (FLEXCOM0) USART Comparison Register */
#define REG_FLEXCOM0_FLEX_US_FMR (*(__IO uint32_t*)0xF80342A0U) /**< (FLEXCOM0) USART FIFO Mode Register */
#define REG_FLEXCOM0_FLEX_US_FLR (*(__I  uint32_t*)0xF80342A4U) /**< (FLEXCOM0) USART FIFO Level Register */
#define REG_FLEXCOM0_FLEX_US_FIER (*(__O  uint32_t*)0xF80342A8U) /**< (FLEXCOM0) USART FIFO Interrupt Enable Register */
#define REG_FLEXCOM0_FLEX_US_FIDR (*(__O  uint32_t*)0xF80342ACU) /**< (FLEXCOM0) USART FIFO Interrupt Disable Register */
#define REG_FLEXCOM0_FLEX_US_FIMR (*(__I  uint32_t*)0xF80342B0U) /**< (FLEXCOM0) USART FIFO Interrupt Mask Register */
#define REG_FLEXCOM0_FLEX_US_FESR (*(__I  uint32_t*)0xF80342B4U) /**< (FLEXCOM0) USART FIFO Event Status Register */
#define REG_FLEXCOM0_FLEX_US_WPMR (*(__IO uint32_t*)0xF80342E4U) /**< (FLEXCOM0) USART Write Protection Mode Register */
#define REG_FLEXCOM0_FLEX_US_WPSR (*(__I  uint32_t*)0xF80342E8U) /**< (FLEXCOM0) USART Write Protection Status Register */
#define REG_FLEXCOM0_FLEX_SPI_CR (*(__O  uint32_t*)0xF8034400U) /**< (FLEXCOM0) SPI Control Register */
#define REG_FLEXCOM0_FLEX_SPI_MR (*(__IO uint32_t*)0xF8034404U) /**< (FLEXCOM0) SPI Mode Register */
#define REG_FLEXCOM0_FLEX_SPI_RDR (*(__I  uint32_t*)0xF8034408U) /**< (FLEXCOM0) SPI Receive Data Register */
#define REG_FLEXCOM0_FLEX_SPI_TDR (*(__O  uint32_t*)0xF803440CU) /**< (FLEXCOM0) SPI Transmit Data Register */
#define REG_FLEXCOM0_FLEX_SPI_SR (*(__I  uint32_t*)0xF8034410U) /**< (FLEXCOM0) SPI Status Register */
#define REG_FLEXCOM0_FLEX_SPI_IER (*(__O  uint32_t*)0xF8034414U) /**< (FLEXCOM0) SPI Interrupt Enable Register */
#define REG_FLEXCOM0_FLEX_SPI_IDR (*(__O  uint32_t*)0xF8034418U) /**< (FLEXCOM0) SPI Interrupt Disable Register */
#define REG_FLEXCOM0_FLEX_SPI_IMR (*(__I  uint32_t*)0xF803441CU) /**< (FLEXCOM0) SPI Interrupt Mask Register */
#define REG_FLEXCOM0_FLEX_SPI_CSR (*(__IO uint32_t*)0xF8034430U) /**< (FLEXCOM0) SPI Chip Select Register */
#define REG_FLEXCOM0_FLEX_SPI_CSR0 (*(__IO uint32_t*)0xF8034430U) /**< (FLEXCOM0) SPI Chip Select Register 0 */
#define REG_FLEXCOM0_FLEX_SPI_CSR1 (*(__IO uint32_t*)0xF8034434U) /**< (FLEXCOM0) SPI Chip Select Register 1 */
#define REG_FLEXCOM0_FLEX_SPI_FMR (*(__IO uint32_t*)0xF8034440U) /**< (FLEXCOM0) SPI FIFO Mode Register */
#define REG_FLEXCOM0_FLEX_SPI_FLR (*(__I  uint32_t*)0xF8034444U) /**< (FLEXCOM0) SPI FIFO Level Register */
#define REG_FLEXCOM0_FLEX_SPI_CMPR (*(__IO uint32_t*)0xF8034448U) /**< (FLEXCOM0) SPI Comparison Register */
#define REG_FLEXCOM0_FLEX_SPI_WPMR (*(__IO uint32_t*)0xF80344E4U) /**< (FLEXCOM0) SPI Write Protection Mode Register */
#define REG_FLEXCOM0_FLEX_SPI_WPSR (*(__I  uint32_t*)0xF80344E8U) /**< (FLEXCOM0) SPI Write Protection Status Register */
#define REG_FLEXCOM0_FLEX_TWI_CR (*(__O  uint32_t*)0xF8034600U) /**< (FLEXCOM0) TWI Control Register */
#define REG_FLEXCOM0_FLEX_TWI_MMR (*(__IO uint32_t*)0xF8034604U) /**< (FLEXCOM0) TWI Master Mode Register */
#define REG_FLEXCOM0_FLEX_TWI_SMR (*(__IO uint32_t*)0xF8034608U) /**< (FLEXCOM0) TWI Slave Mode Register */
#define REG_FLEXCOM0_FLEX_TWI_IADR (*(__IO uint32_t*)0xF803460CU) /**< (FLEXCOM0) TWI Internal Address Register */
#define REG_FLEXCOM0_FLEX_TWI_CWGR (*(__IO uint32_t*)0xF8034610U) /**< (FLEXCOM0) TWI Clock Waveform Generator Register */
#define REG_FLEXCOM0_FLEX_TWI_SR (*(__I  uint32_t*)0xF8034620U) /**< (FLEXCOM0) TWI Status Register */
#define REG_FLEXCOM0_FLEX_TWI_IER (*(__O  uint32_t*)0xF8034624U) /**< (FLEXCOM0) TWI Interrupt Enable Register */
#define REG_FLEXCOM0_FLEX_TWI_IDR (*(__O  uint32_t*)0xF8034628U) /**< (FLEXCOM0) TWI Interrupt Disable Register */
#define REG_FLEXCOM0_FLEX_TWI_IMR (*(__I  uint32_t*)0xF803462CU) /**< (FLEXCOM0) TWI Interrupt Mask Register */
#define REG_FLEXCOM0_FLEX_TWI_RHR (*(__I  uint32_t*)0xF8034630U) /**< (FLEXCOM0) TWI Receive Holding Register */
#define REG_FLEXCOM0_FLEX_TWI_THR (*(__O  uint32_t*)0xF8034634U) /**< (FLEXCOM0) TWI Transmit Holding Register */
#define REG_FLEXCOM0_FLEX_TWI_SMBTR (*(__IO uint32_t*)0xF8034638U) /**< (FLEXCOM0) TWI SMBus Timing Register */
#define REG_FLEXCOM0_FLEX_TWI_ACR (*(__IO uint32_t*)0xF8034640U) /**< (FLEXCOM0) TWI Alternative Command Register */
#define REG_FLEXCOM0_FLEX_TWI_FILTR (*(__IO uint32_t*)0xF8034644U) /**< (FLEXCOM0) TWI Filter Register */
#define REG_FLEXCOM0_FLEX_TWI_SWMR (*(__IO uint32_t*)0xF803464CU) /**< (FLEXCOM0) TWI SleepWalking Matching Register */
#define REG_FLEXCOM0_FLEX_TWI_FMR (*(__IO uint32_t*)0xF8034650U) /**< (FLEXCOM0) TWI FIFO Mode Register */
#define REG_FLEXCOM0_FLEX_TWI_FLR (*(__I  uint32_t*)0xF8034654U) /**< (FLEXCOM0) TWI FIFO Level Register */
#define REG_FLEXCOM0_FLEX_TWI_FSR (*(__I  uint32_t*)0xF8034660U) /**< (FLEXCOM0) TWI FIFO Status Register */
#define REG_FLEXCOM0_FLEX_TWI_FIER (*(__O  uint32_t*)0xF8034664U) /**< (FLEXCOM0) TWI FIFO Interrupt Enable Register */
#define REG_FLEXCOM0_FLEX_TWI_FIDR (*(__O  uint32_t*)0xF8034668U) /**< (FLEXCOM0) TWI FIFO Interrupt Disable Register */
#define REG_FLEXCOM0_FLEX_TWI_FIMR (*(__I  uint32_t*)0xF803466CU) /**< (FLEXCOM0) TWI FIFO Interrupt Mask Register */
#define REG_FLEXCOM0_FLEX_TWI_DR (*(__I  uint32_t*)0xF80346D0U) /**< (FLEXCOM0) TWI Debug Register */
#define REG_FLEXCOM0_FLEX_TWI_WPMR (*(__IO uint32_t*)0xF80346E4U) /**< (FLEXCOM0) TWI Write Protection Mode Register */
#define REG_FLEXCOM0_FLEX_TWI_WPSR (*(__I  uint32_t*)0xF80346E8U) /**< (FLEXCOM0) TWI Write Protection Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for FLEXCOM0 peripheral ========== */
#define FLEXCOM0_INSTANCE_ID                     19         
#define FLEXCOM0_CLOCK_ID                        19         
#define FLEXCOM0_DMAC_ID_TX                      11         
#define FLEXCOM0_DMAC_ID_RX                      12         

#endif /* _SAMA5D2_FLEXCOM0_INSTANCE_ */
