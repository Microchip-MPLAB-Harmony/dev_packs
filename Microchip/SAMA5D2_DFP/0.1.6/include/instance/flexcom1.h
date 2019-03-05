/**
 * \file
 *
 * \brief Instance description for FLEXCOM1
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
#ifndef _SAMA5D2_FLEXCOM1_INSTANCE_H_
#define _SAMA5D2_FLEXCOM1_INSTANCE_H_

/* ========== Register definition for FLEXCOM1 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_FLEXCOM1_FLEX_MR    (0xF8038000) /**< (FLEXCOM1) FLEXCOM Mode Register */
#define REG_FLEXCOM1_FLEX_RHR   (0xF8038010) /**< (FLEXCOM1) FLEXCOM Receive Holding Register */
#define REG_FLEXCOM1_FLEX_THR   (0xF8038020) /**< (FLEXCOM1) FLEXCOM Transmit Holding Register */
#define REG_FLEXCOM1_FLEX_US_CR (0xF8038200) /**< (FLEXCOM1) USART Control Register */
#define REG_FLEXCOM1_FLEX_US_MR (0xF8038204) /**< (FLEXCOM1) USART Mode Register */
#define REG_FLEXCOM1_FLEX_US_IER (0xF8038208) /**< (FLEXCOM1) USART Interrupt Enable Register */
#define REG_FLEXCOM1_FLEX_US_IDR (0xF803820C) /**< (FLEXCOM1) USART Interrupt Disable Register */
#define REG_FLEXCOM1_FLEX_US_IMR (0xF8038210) /**< (FLEXCOM1) USART Interrupt Mask Register */
#define REG_FLEXCOM1_FLEX_US_CSR (0xF8038214) /**< (FLEXCOM1) USART Channel Status Register */
#define REG_FLEXCOM1_FLEX_US_RHR (0xF8038218) /**< (FLEXCOM1) USART Receive Holding Register */
#define REG_FLEXCOM1_FLEX_US_THR (0xF803821C) /**< (FLEXCOM1) USART Transmit Holding Register */
#define REG_FLEXCOM1_FLEX_US_BRGR (0xF8038220) /**< (FLEXCOM1) USART Baud Rate Generator Register */
#define REG_FLEXCOM1_FLEX_US_RTOR (0xF8038224) /**< (FLEXCOM1) USART Receiver Timeout Register */
#define REG_FLEXCOM1_FLEX_US_TTGR (0xF8038228) /**< (FLEXCOM1) USART Transmitter Timeguard Register */
#define REG_FLEXCOM1_FLEX_US_FIDI (0xF8038240) /**< (FLEXCOM1) USART FI DI Ratio Register */
#define REG_FLEXCOM1_FLEX_US_NER (0xF8038244) /**< (FLEXCOM1) USART Number of Errors Register */
#define REG_FLEXCOM1_FLEX_US_IF (0xF803824C) /**< (FLEXCOM1) USART IrDA Filter Register */
#define REG_FLEXCOM1_FLEX_US_MAN (0xF8038250) /**< (FLEXCOM1) USART Manchester Configuration Register */
#define REG_FLEXCOM1_FLEX_US_LINMR (0xF8038254) /**< (FLEXCOM1) USART LIN Mode Register */
#define REG_FLEXCOM1_FLEX_US_LINIR (0xF8038258) /**< (FLEXCOM1) USART LIN Identifier Register */
#define REG_FLEXCOM1_FLEX_US_LINBRR (0xF803825C) /**< (FLEXCOM1) USART LIN Baud Rate Register */
#define REG_FLEXCOM1_FLEX_US_CMPR (0xF8038290) /**< (FLEXCOM1) USART Comparison Register */
#define REG_FLEXCOM1_FLEX_US_FMR (0xF80382A0) /**< (FLEXCOM1) USART FIFO Mode Register */
#define REG_FLEXCOM1_FLEX_US_FLR (0xF80382A4) /**< (FLEXCOM1) USART FIFO Level Register */
#define REG_FLEXCOM1_FLEX_US_FIER (0xF80382A8) /**< (FLEXCOM1) USART FIFO Interrupt Enable Register */
#define REG_FLEXCOM1_FLEX_US_FIDR (0xF80382AC) /**< (FLEXCOM1) USART FIFO Interrupt Disable Register */
#define REG_FLEXCOM1_FLEX_US_FIMR (0xF80382B0) /**< (FLEXCOM1) USART FIFO Interrupt Mask Register */
#define REG_FLEXCOM1_FLEX_US_FESR (0xF80382B4) /**< (FLEXCOM1) USART FIFO Event Status Register */
#define REG_FLEXCOM1_FLEX_US_WPMR (0xF80382E4) /**< (FLEXCOM1) USART Write Protection Mode Register */
#define REG_FLEXCOM1_FLEX_US_WPSR (0xF80382E8) /**< (FLEXCOM1) USART Write Protection Status Register */
#define REG_FLEXCOM1_FLEX_SPI_CR (0xF8038400) /**< (FLEXCOM1) SPI Control Register */
#define REG_FLEXCOM1_FLEX_SPI_MR (0xF8038404) /**< (FLEXCOM1) SPI Mode Register */
#define REG_FLEXCOM1_FLEX_SPI_RDR (0xF8038408) /**< (FLEXCOM1) SPI Receive Data Register */
#define REG_FLEXCOM1_FLEX_SPI_TDR (0xF803840C) /**< (FLEXCOM1) SPI Transmit Data Register */
#define REG_FLEXCOM1_FLEX_SPI_SR (0xF8038410) /**< (FLEXCOM1) SPI Status Register */
#define REG_FLEXCOM1_FLEX_SPI_IER (0xF8038414) /**< (FLEXCOM1) SPI Interrupt Enable Register */
#define REG_FLEXCOM1_FLEX_SPI_IDR (0xF8038418) /**< (FLEXCOM1) SPI Interrupt Disable Register */
#define REG_FLEXCOM1_FLEX_SPI_IMR (0xF803841C) /**< (FLEXCOM1) SPI Interrupt Mask Register */
#define REG_FLEXCOM1_FLEX_SPI_CSR (0xF8038430) /**< (FLEXCOM1) SPI Chip Select Register */
#define REG_FLEXCOM1_FLEX_SPI_CSR0 (0xF8038430) /**< (FLEXCOM1) SPI Chip Select Register 0 */
#define REG_FLEXCOM1_FLEX_SPI_CSR1 (0xF8038434) /**< (FLEXCOM1) SPI Chip Select Register 1 */
#define REG_FLEXCOM1_FLEX_SPI_FMR (0xF8038440) /**< (FLEXCOM1) SPI FIFO Mode Register */
#define REG_FLEXCOM1_FLEX_SPI_FLR (0xF8038444) /**< (FLEXCOM1) SPI FIFO Level Register */
#define REG_FLEXCOM1_FLEX_SPI_CMPR (0xF8038448) /**< (FLEXCOM1) SPI Comparison Register */
#define REG_FLEXCOM1_FLEX_SPI_WPMR (0xF80384E4) /**< (FLEXCOM1) SPI Write Protection Mode Register */
#define REG_FLEXCOM1_FLEX_SPI_WPSR (0xF80384E8) /**< (FLEXCOM1) SPI Write Protection Status Register */
#define REG_FLEXCOM1_FLEX_TWI_CR (0xF8038600) /**< (FLEXCOM1) TWI Control Register */
#define REG_FLEXCOM1_FLEX_TWI_MMR (0xF8038604) /**< (FLEXCOM1) TWI Master Mode Register */
#define REG_FLEXCOM1_FLEX_TWI_SMR (0xF8038608) /**< (FLEXCOM1) TWI Slave Mode Register */
#define REG_FLEXCOM1_FLEX_TWI_IADR (0xF803860C) /**< (FLEXCOM1) TWI Internal Address Register */
#define REG_FLEXCOM1_FLEX_TWI_CWGR (0xF8038610) /**< (FLEXCOM1) TWI Clock Waveform Generator Register */
#define REG_FLEXCOM1_FLEX_TWI_SR (0xF8038620) /**< (FLEXCOM1) TWI Status Register */
#define REG_FLEXCOM1_FLEX_TWI_IER (0xF8038624) /**< (FLEXCOM1) TWI Interrupt Enable Register */
#define REG_FLEXCOM1_FLEX_TWI_IDR (0xF8038628) /**< (FLEXCOM1) TWI Interrupt Disable Register */
#define REG_FLEXCOM1_FLEX_TWI_IMR (0xF803862C) /**< (FLEXCOM1) TWI Interrupt Mask Register */
#define REG_FLEXCOM1_FLEX_TWI_RHR (0xF8038630) /**< (FLEXCOM1) TWI Receive Holding Register */
#define REG_FLEXCOM1_FLEX_TWI_THR (0xF8038634) /**< (FLEXCOM1) TWI Transmit Holding Register */
#define REG_FLEXCOM1_FLEX_TWI_SMBTR (0xF8038638) /**< (FLEXCOM1) TWI SMBus Timing Register */
#define REG_FLEXCOM1_FLEX_TWI_ACR (0xF8038640) /**< (FLEXCOM1) TWI Alternative Command Register */
#define REG_FLEXCOM1_FLEX_TWI_FILTR (0xF8038644) /**< (FLEXCOM1) TWI Filter Register */
#define REG_FLEXCOM1_FLEX_TWI_SWMR (0xF803864C) /**< (FLEXCOM1) TWI SleepWalking Matching Register */
#define REG_FLEXCOM1_FLEX_TWI_FMR (0xF8038650) /**< (FLEXCOM1) TWI FIFO Mode Register */
#define REG_FLEXCOM1_FLEX_TWI_FLR (0xF8038654) /**< (FLEXCOM1) TWI FIFO Level Register */
#define REG_FLEXCOM1_FLEX_TWI_FSR (0xF8038660) /**< (FLEXCOM1) TWI FIFO Status Register */
#define REG_FLEXCOM1_FLEX_TWI_FIER (0xF8038664) /**< (FLEXCOM1) TWI FIFO Interrupt Enable Register */
#define REG_FLEXCOM1_FLEX_TWI_FIDR (0xF8038668) /**< (FLEXCOM1) TWI FIFO Interrupt Disable Register */
#define REG_FLEXCOM1_FLEX_TWI_FIMR (0xF803866C) /**< (FLEXCOM1) TWI FIFO Interrupt Mask Register */
#define REG_FLEXCOM1_FLEX_TWI_DR (0xF80386D0) /**< (FLEXCOM1) TWI Debug Register */
#define REG_FLEXCOM1_FLEX_TWI_WPMR (0xF80386E4) /**< (FLEXCOM1) TWI Write Protection Mode Register */
#define REG_FLEXCOM1_FLEX_TWI_WPSR (0xF80386E8) /**< (FLEXCOM1) TWI Write Protection Status Register */

#else

#define REG_FLEXCOM1_FLEX_MR    (*(__IO uint32_t*)0xF8038000U) /**< (FLEXCOM1) FLEXCOM Mode Register */
#define REG_FLEXCOM1_FLEX_RHR   (*(__I  uint32_t*)0xF8038010U) /**< (FLEXCOM1) FLEXCOM Receive Holding Register */
#define REG_FLEXCOM1_FLEX_THR   (*(__IO uint32_t*)0xF8038020U) /**< (FLEXCOM1) FLEXCOM Transmit Holding Register */
#define REG_FLEXCOM1_FLEX_US_CR (*(__O  uint32_t*)0xF8038200U) /**< (FLEXCOM1) USART Control Register */
#define REG_FLEXCOM1_FLEX_US_MR (*(__IO uint32_t*)0xF8038204U) /**< (FLEXCOM1) USART Mode Register */
#define REG_FLEXCOM1_FLEX_US_IER (*(__O  uint32_t*)0xF8038208U) /**< (FLEXCOM1) USART Interrupt Enable Register */
#define REG_FLEXCOM1_FLEX_US_IDR (*(__O  uint32_t*)0xF803820CU) /**< (FLEXCOM1) USART Interrupt Disable Register */
#define REG_FLEXCOM1_FLEX_US_IMR (*(__I  uint32_t*)0xF8038210U) /**< (FLEXCOM1) USART Interrupt Mask Register */
#define REG_FLEXCOM1_FLEX_US_CSR (*(__I  uint32_t*)0xF8038214U) /**< (FLEXCOM1) USART Channel Status Register */
#define REG_FLEXCOM1_FLEX_US_RHR (*(__I  uint32_t*)0xF8038218U) /**< (FLEXCOM1) USART Receive Holding Register */
#define REG_FLEXCOM1_FLEX_US_THR (*(__O  uint32_t*)0xF803821CU) /**< (FLEXCOM1) USART Transmit Holding Register */
#define REG_FLEXCOM1_FLEX_US_BRGR (*(__IO uint32_t*)0xF8038220U) /**< (FLEXCOM1) USART Baud Rate Generator Register */
#define REG_FLEXCOM1_FLEX_US_RTOR (*(__IO uint32_t*)0xF8038224U) /**< (FLEXCOM1) USART Receiver Timeout Register */
#define REG_FLEXCOM1_FLEX_US_TTGR (*(__IO uint32_t*)0xF8038228U) /**< (FLEXCOM1) USART Transmitter Timeguard Register */
#define REG_FLEXCOM1_FLEX_US_FIDI (*(__IO uint32_t*)0xF8038240U) /**< (FLEXCOM1) USART FI DI Ratio Register */
#define REG_FLEXCOM1_FLEX_US_NER (*(__I  uint32_t*)0xF8038244U) /**< (FLEXCOM1) USART Number of Errors Register */
#define REG_FLEXCOM1_FLEX_US_IF (*(__IO uint32_t*)0xF803824CU) /**< (FLEXCOM1) USART IrDA Filter Register */
#define REG_FLEXCOM1_FLEX_US_MAN (*(__IO uint32_t*)0xF8038250U) /**< (FLEXCOM1) USART Manchester Configuration Register */
#define REG_FLEXCOM1_FLEX_US_LINMR (*(__IO uint32_t*)0xF8038254U) /**< (FLEXCOM1) USART LIN Mode Register */
#define REG_FLEXCOM1_FLEX_US_LINIR (*(__IO uint32_t*)0xF8038258U) /**< (FLEXCOM1) USART LIN Identifier Register */
#define REG_FLEXCOM1_FLEX_US_LINBRR (*(__I  uint32_t*)0xF803825CU) /**< (FLEXCOM1) USART LIN Baud Rate Register */
#define REG_FLEXCOM1_FLEX_US_CMPR (*(__IO uint32_t*)0xF8038290U) /**< (FLEXCOM1) USART Comparison Register */
#define REG_FLEXCOM1_FLEX_US_FMR (*(__IO uint32_t*)0xF80382A0U) /**< (FLEXCOM1) USART FIFO Mode Register */
#define REG_FLEXCOM1_FLEX_US_FLR (*(__I  uint32_t*)0xF80382A4U) /**< (FLEXCOM1) USART FIFO Level Register */
#define REG_FLEXCOM1_FLEX_US_FIER (*(__O  uint32_t*)0xF80382A8U) /**< (FLEXCOM1) USART FIFO Interrupt Enable Register */
#define REG_FLEXCOM1_FLEX_US_FIDR (*(__O  uint32_t*)0xF80382ACU) /**< (FLEXCOM1) USART FIFO Interrupt Disable Register */
#define REG_FLEXCOM1_FLEX_US_FIMR (*(__I  uint32_t*)0xF80382B0U) /**< (FLEXCOM1) USART FIFO Interrupt Mask Register */
#define REG_FLEXCOM1_FLEX_US_FESR (*(__I  uint32_t*)0xF80382B4U) /**< (FLEXCOM1) USART FIFO Event Status Register */
#define REG_FLEXCOM1_FLEX_US_WPMR (*(__IO uint32_t*)0xF80382E4U) /**< (FLEXCOM1) USART Write Protection Mode Register */
#define REG_FLEXCOM1_FLEX_US_WPSR (*(__I  uint32_t*)0xF80382E8U) /**< (FLEXCOM1) USART Write Protection Status Register */
#define REG_FLEXCOM1_FLEX_SPI_CR (*(__O  uint32_t*)0xF8038400U) /**< (FLEXCOM1) SPI Control Register */
#define REG_FLEXCOM1_FLEX_SPI_MR (*(__IO uint32_t*)0xF8038404U) /**< (FLEXCOM1) SPI Mode Register */
#define REG_FLEXCOM1_FLEX_SPI_RDR (*(__I  uint32_t*)0xF8038408U) /**< (FLEXCOM1) SPI Receive Data Register */
#define REG_FLEXCOM1_FLEX_SPI_TDR (*(__O  uint32_t*)0xF803840CU) /**< (FLEXCOM1) SPI Transmit Data Register */
#define REG_FLEXCOM1_FLEX_SPI_SR (*(__I  uint32_t*)0xF8038410U) /**< (FLEXCOM1) SPI Status Register */
#define REG_FLEXCOM1_FLEX_SPI_IER (*(__O  uint32_t*)0xF8038414U) /**< (FLEXCOM1) SPI Interrupt Enable Register */
#define REG_FLEXCOM1_FLEX_SPI_IDR (*(__O  uint32_t*)0xF8038418U) /**< (FLEXCOM1) SPI Interrupt Disable Register */
#define REG_FLEXCOM1_FLEX_SPI_IMR (*(__I  uint32_t*)0xF803841CU) /**< (FLEXCOM1) SPI Interrupt Mask Register */
#define REG_FLEXCOM1_FLEX_SPI_CSR (*(__IO uint32_t*)0xF8038430U) /**< (FLEXCOM1) SPI Chip Select Register */
#define REG_FLEXCOM1_FLEX_SPI_CSR0 (*(__IO uint32_t*)0xF8038430U) /**< (FLEXCOM1) SPI Chip Select Register 0 */
#define REG_FLEXCOM1_FLEX_SPI_CSR1 (*(__IO uint32_t*)0xF8038434U) /**< (FLEXCOM1) SPI Chip Select Register 1 */
#define REG_FLEXCOM1_FLEX_SPI_FMR (*(__IO uint32_t*)0xF8038440U) /**< (FLEXCOM1) SPI FIFO Mode Register */
#define REG_FLEXCOM1_FLEX_SPI_FLR (*(__I  uint32_t*)0xF8038444U) /**< (FLEXCOM1) SPI FIFO Level Register */
#define REG_FLEXCOM1_FLEX_SPI_CMPR (*(__IO uint32_t*)0xF8038448U) /**< (FLEXCOM1) SPI Comparison Register */
#define REG_FLEXCOM1_FLEX_SPI_WPMR (*(__IO uint32_t*)0xF80384E4U) /**< (FLEXCOM1) SPI Write Protection Mode Register */
#define REG_FLEXCOM1_FLEX_SPI_WPSR (*(__I  uint32_t*)0xF80384E8U) /**< (FLEXCOM1) SPI Write Protection Status Register */
#define REG_FLEXCOM1_FLEX_TWI_CR (*(__O  uint32_t*)0xF8038600U) /**< (FLEXCOM1) TWI Control Register */
#define REG_FLEXCOM1_FLEX_TWI_MMR (*(__IO uint32_t*)0xF8038604U) /**< (FLEXCOM1) TWI Master Mode Register */
#define REG_FLEXCOM1_FLEX_TWI_SMR (*(__IO uint32_t*)0xF8038608U) /**< (FLEXCOM1) TWI Slave Mode Register */
#define REG_FLEXCOM1_FLEX_TWI_IADR (*(__IO uint32_t*)0xF803860CU) /**< (FLEXCOM1) TWI Internal Address Register */
#define REG_FLEXCOM1_FLEX_TWI_CWGR (*(__IO uint32_t*)0xF8038610U) /**< (FLEXCOM1) TWI Clock Waveform Generator Register */
#define REG_FLEXCOM1_FLEX_TWI_SR (*(__I  uint32_t*)0xF8038620U) /**< (FLEXCOM1) TWI Status Register */
#define REG_FLEXCOM1_FLEX_TWI_IER (*(__O  uint32_t*)0xF8038624U) /**< (FLEXCOM1) TWI Interrupt Enable Register */
#define REG_FLEXCOM1_FLEX_TWI_IDR (*(__O  uint32_t*)0xF8038628U) /**< (FLEXCOM1) TWI Interrupt Disable Register */
#define REG_FLEXCOM1_FLEX_TWI_IMR (*(__I  uint32_t*)0xF803862CU) /**< (FLEXCOM1) TWI Interrupt Mask Register */
#define REG_FLEXCOM1_FLEX_TWI_RHR (*(__I  uint32_t*)0xF8038630U) /**< (FLEXCOM1) TWI Receive Holding Register */
#define REG_FLEXCOM1_FLEX_TWI_THR (*(__O  uint32_t*)0xF8038634U) /**< (FLEXCOM1) TWI Transmit Holding Register */
#define REG_FLEXCOM1_FLEX_TWI_SMBTR (*(__IO uint32_t*)0xF8038638U) /**< (FLEXCOM1) TWI SMBus Timing Register */
#define REG_FLEXCOM1_FLEX_TWI_ACR (*(__IO uint32_t*)0xF8038640U) /**< (FLEXCOM1) TWI Alternative Command Register */
#define REG_FLEXCOM1_FLEX_TWI_FILTR (*(__IO uint32_t*)0xF8038644U) /**< (FLEXCOM1) TWI Filter Register */
#define REG_FLEXCOM1_FLEX_TWI_SWMR (*(__IO uint32_t*)0xF803864CU) /**< (FLEXCOM1) TWI SleepWalking Matching Register */
#define REG_FLEXCOM1_FLEX_TWI_FMR (*(__IO uint32_t*)0xF8038650U) /**< (FLEXCOM1) TWI FIFO Mode Register */
#define REG_FLEXCOM1_FLEX_TWI_FLR (*(__I  uint32_t*)0xF8038654U) /**< (FLEXCOM1) TWI FIFO Level Register */
#define REG_FLEXCOM1_FLEX_TWI_FSR (*(__I  uint32_t*)0xF8038660U) /**< (FLEXCOM1) TWI FIFO Status Register */
#define REG_FLEXCOM1_FLEX_TWI_FIER (*(__O  uint32_t*)0xF8038664U) /**< (FLEXCOM1) TWI FIFO Interrupt Enable Register */
#define REG_FLEXCOM1_FLEX_TWI_FIDR (*(__O  uint32_t*)0xF8038668U) /**< (FLEXCOM1) TWI FIFO Interrupt Disable Register */
#define REG_FLEXCOM1_FLEX_TWI_FIMR (*(__I  uint32_t*)0xF803866CU) /**< (FLEXCOM1) TWI FIFO Interrupt Mask Register */
#define REG_FLEXCOM1_FLEX_TWI_DR (*(__I  uint32_t*)0xF80386D0U) /**< (FLEXCOM1) TWI Debug Register */
#define REG_FLEXCOM1_FLEX_TWI_WPMR (*(__IO uint32_t*)0xF80386E4U) /**< (FLEXCOM1) TWI Write Protection Mode Register */
#define REG_FLEXCOM1_FLEX_TWI_WPSR (*(__I  uint32_t*)0xF80386E8U) /**< (FLEXCOM1) TWI Write Protection Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for FLEXCOM1 peripheral ========== */
#define FLEXCOM1_INSTANCE_ID                     20         
#define FLEXCOM1_CLOCK_ID                        20         
#define FLEXCOM1_DMAC_ID_TX                      13         
#define FLEXCOM1_DMAC_ID_RX                      14         

#endif /* _SAMA5D2_FLEXCOM1_INSTANCE_ */
