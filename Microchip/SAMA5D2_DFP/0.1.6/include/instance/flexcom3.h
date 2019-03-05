/**
 * \file
 *
 * \brief Instance description for FLEXCOM3
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
#ifndef _SAMA5D2_FLEXCOM3_INSTANCE_H_
#define _SAMA5D2_FLEXCOM3_INSTANCE_H_

/* ========== Register definition for FLEXCOM3 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_FLEXCOM3_FLEX_MR    (0xFC014000) /**< (FLEXCOM3) FLEXCOM Mode Register */
#define REG_FLEXCOM3_FLEX_RHR   (0xFC014010) /**< (FLEXCOM3) FLEXCOM Receive Holding Register */
#define REG_FLEXCOM3_FLEX_THR   (0xFC014020) /**< (FLEXCOM3) FLEXCOM Transmit Holding Register */
#define REG_FLEXCOM3_FLEX_US_CR (0xFC014200) /**< (FLEXCOM3) USART Control Register */
#define REG_FLEXCOM3_FLEX_US_MR (0xFC014204) /**< (FLEXCOM3) USART Mode Register */
#define REG_FLEXCOM3_FLEX_US_IER (0xFC014208) /**< (FLEXCOM3) USART Interrupt Enable Register */
#define REG_FLEXCOM3_FLEX_US_IDR (0xFC01420C) /**< (FLEXCOM3) USART Interrupt Disable Register */
#define REG_FLEXCOM3_FLEX_US_IMR (0xFC014210) /**< (FLEXCOM3) USART Interrupt Mask Register */
#define REG_FLEXCOM3_FLEX_US_CSR (0xFC014214) /**< (FLEXCOM3) USART Channel Status Register */
#define REG_FLEXCOM3_FLEX_US_RHR (0xFC014218) /**< (FLEXCOM3) USART Receive Holding Register */
#define REG_FLEXCOM3_FLEX_US_THR (0xFC01421C) /**< (FLEXCOM3) USART Transmit Holding Register */
#define REG_FLEXCOM3_FLEX_US_BRGR (0xFC014220) /**< (FLEXCOM3) USART Baud Rate Generator Register */
#define REG_FLEXCOM3_FLEX_US_RTOR (0xFC014224) /**< (FLEXCOM3) USART Receiver Timeout Register */
#define REG_FLEXCOM3_FLEX_US_TTGR (0xFC014228) /**< (FLEXCOM3) USART Transmitter Timeguard Register */
#define REG_FLEXCOM3_FLEX_US_FIDI (0xFC014240) /**< (FLEXCOM3) USART FI DI Ratio Register */
#define REG_FLEXCOM3_FLEX_US_NER (0xFC014244) /**< (FLEXCOM3) USART Number of Errors Register */
#define REG_FLEXCOM3_FLEX_US_IF (0xFC01424C) /**< (FLEXCOM3) USART IrDA Filter Register */
#define REG_FLEXCOM3_FLEX_US_MAN (0xFC014250) /**< (FLEXCOM3) USART Manchester Configuration Register */
#define REG_FLEXCOM3_FLEX_US_LINMR (0xFC014254) /**< (FLEXCOM3) USART LIN Mode Register */
#define REG_FLEXCOM3_FLEX_US_LINIR (0xFC014258) /**< (FLEXCOM3) USART LIN Identifier Register */
#define REG_FLEXCOM3_FLEX_US_LINBRR (0xFC01425C) /**< (FLEXCOM3) USART LIN Baud Rate Register */
#define REG_FLEXCOM3_FLEX_US_CMPR (0xFC014290) /**< (FLEXCOM3) USART Comparison Register */
#define REG_FLEXCOM3_FLEX_US_FMR (0xFC0142A0) /**< (FLEXCOM3) USART FIFO Mode Register */
#define REG_FLEXCOM3_FLEX_US_FLR (0xFC0142A4) /**< (FLEXCOM3) USART FIFO Level Register */
#define REG_FLEXCOM3_FLEX_US_FIER (0xFC0142A8) /**< (FLEXCOM3) USART FIFO Interrupt Enable Register */
#define REG_FLEXCOM3_FLEX_US_FIDR (0xFC0142AC) /**< (FLEXCOM3) USART FIFO Interrupt Disable Register */
#define REG_FLEXCOM3_FLEX_US_FIMR (0xFC0142B0) /**< (FLEXCOM3) USART FIFO Interrupt Mask Register */
#define REG_FLEXCOM3_FLEX_US_FESR (0xFC0142B4) /**< (FLEXCOM3) USART FIFO Event Status Register */
#define REG_FLEXCOM3_FLEX_US_WPMR (0xFC0142E4) /**< (FLEXCOM3) USART Write Protection Mode Register */
#define REG_FLEXCOM3_FLEX_US_WPSR (0xFC0142E8) /**< (FLEXCOM3) USART Write Protection Status Register */
#define REG_FLEXCOM3_FLEX_SPI_CR (0xFC014400) /**< (FLEXCOM3) SPI Control Register */
#define REG_FLEXCOM3_FLEX_SPI_MR (0xFC014404) /**< (FLEXCOM3) SPI Mode Register */
#define REG_FLEXCOM3_FLEX_SPI_RDR (0xFC014408) /**< (FLEXCOM3) SPI Receive Data Register */
#define REG_FLEXCOM3_FLEX_SPI_TDR (0xFC01440C) /**< (FLEXCOM3) SPI Transmit Data Register */
#define REG_FLEXCOM3_FLEX_SPI_SR (0xFC014410) /**< (FLEXCOM3) SPI Status Register */
#define REG_FLEXCOM3_FLEX_SPI_IER (0xFC014414) /**< (FLEXCOM3) SPI Interrupt Enable Register */
#define REG_FLEXCOM3_FLEX_SPI_IDR (0xFC014418) /**< (FLEXCOM3) SPI Interrupt Disable Register */
#define REG_FLEXCOM3_FLEX_SPI_IMR (0xFC01441C) /**< (FLEXCOM3) SPI Interrupt Mask Register */
#define REG_FLEXCOM3_FLEX_SPI_CSR (0xFC014430) /**< (FLEXCOM3) SPI Chip Select Register */
#define REG_FLEXCOM3_FLEX_SPI_CSR0 (0xFC014430) /**< (FLEXCOM3) SPI Chip Select Register 0 */
#define REG_FLEXCOM3_FLEX_SPI_CSR1 (0xFC014434) /**< (FLEXCOM3) SPI Chip Select Register 1 */
#define REG_FLEXCOM3_FLEX_SPI_FMR (0xFC014440) /**< (FLEXCOM3) SPI FIFO Mode Register */
#define REG_FLEXCOM3_FLEX_SPI_FLR (0xFC014444) /**< (FLEXCOM3) SPI FIFO Level Register */
#define REG_FLEXCOM3_FLEX_SPI_CMPR (0xFC014448) /**< (FLEXCOM3) SPI Comparison Register */
#define REG_FLEXCOM3_FLEX_SPI_WPMR (0xFC0144E4) /**< (FLEXCOM3) SPI Write Protection Mode Register */
#define REG_FLEXCOM3_FLEX_SPI_WPSR (0xFC0144E8) /**< (FLEXCOM3) SPI Write Protection Status Register */
#define REG_FLEXCOM3_FLEX_TWI_CR (0xFC014600) /**< (FLEXCOM3) TWI Control Register */
#define REG_FLEXCOM3_FLEX_TWI_MMR (0xFC014604) /**< (FLEXCOM3) TWI Master Mode Register */
#define REG_FLEXCOM3_FLEX_TWI_SMR (0xFC014608) /**< (FLEXCOM3) TWI Slave Mode Register */
#define REG_FLEXCOM3_FLEX_TWI_IADR (0xFC01460C) /**< (FLEXCOM3) TWI Internal Address Register */
#define REG_FLEXCOM3_FLEX_TWI_CWGR (0xFC014610) /**< (FLEXCOM3) TWI Clock Waveform Generator Register */
#define REG_FLEXCOM3_FLEX_TWI_SR (0xFC014620) /**< (FLEXCOM3) TWI Status Register */
#define REG_FLEXCOM3_FLEX_TWI_IER (0xFC014624) /**< (FLEXCOM3) TWI Interrupt Enable Register */
#define REG_FLEXCOM3_FLEX_TWI_IDR (0xFC014628) /**< (FLEXCOM3) TWI Interrupt Disable Register */
#define REG_FLEXCOM3_FLEX_TWI_IMR (0xFC01462C) /**< (FLEXCOM3) TWI Interrupt Mask Register */
#define REG_FLEXCOM3_FLEX_TWI_RHR (0xFC014630) /**< (FLEXCOM3) TWI Receive Holding Register */
#define REG_FLEXCOM3_FLEX_TWI_THR (0xFC014634) /**< (FLEXCOM3) TWI Transmit Holding Register */
#define REG_FLEXCOM3_FLEX_TWI_SMBTR (0xFC014638) /**< (FLEXCOM3) TWI SMBus Timing Register */
#define REG_FLEXCOM3_FLEX_TWI_ACR (0xFC014640) /**< (FLEXCOM3) TWI Alternative Command Register */
#define REG_FLEXCOM3_FLEX_TWI_FILTR (0xFC014644) /**< (FLEXCOM3) TWI Filter Register */
#define REG_FLEXCOM3_FLEX_TWI_SWMR (0xFC01464C) /**< (FLEXCOM3) TWI SleepWalking Matching Register */
#define REG_FLEXCOM3_FLEX_TWI_FMR (0xFC014650) /**< (FLEXCOM3) TWI FIFO Mode Register */
#define REG_FLEXCOM3_FLEX_TWI_FLR (0xFC014654) /**< (FLEXCOM3) TWI FIFO Level Register */
#define REG_FLEXCOM3_FLEX_TWI_FSR (0xFC014660) /**< (FLEXCOM3) TWI FIFO Status Register */
#define REG_FLEXCOM3_FLEX_TWI_FIER (0xFC014664) /**< (FLEXCOM3) TWI FIFO Interrupt Enable Register */
#define REG_FLEXCOM3_FLEX_TWI_FIDR (0xFC014668) /**< (FLEXCOM3) TWI FIFO Interrupt Disable Register */
#define REG_FLEXCOM3_FLEX_TWI_FIMR (0xFC01466C) /**< (FLEXCOM3) TWI FIFO Interrupt Mask Register */
#define REG_FLEXCOM3_FLEX_TWI_DR (0xFC0146D0) /**< (FLEXCOM3) TWI Debug Register */
#define REG_FLEXCOM3_FLEX_TWI_WPMR (0xFC0146E4) /**< (FLEXCOM3) TWI Write Protection Mode Register */
#define REG_FLEXCOM3_FLEX_TWI_WPSR (0xFC0146E8) /**< (FLEXCOM3) TWI Write Protection Status Register */

#else

#define REG_FLEXCOM3_FLEX_MR    (*(__IO uint32_t*)0xFC014000U) /**< (FLEXCOM3) FLEXCOM Mode Register */
#define REG_FLEXCOM3_FLEX_RHR   (*(__I  uint32_t*)0xFC014010U) /**< (FLEXCOM3) FLEXCOM Receive Holding Register */
#define REG_FLEXCOM3_FLEX_THR   (*(__IO uint32_t*)0xFC014020U) /**< (FLEXCOM3) FLEXCOM Transmit Holding Register */
#define REG_FLEXCOM3_FLEX_US_CR (*(__O  uint32_t*)0xFC014200U) /**< (FLEXCOM3) USART Control Register */
#define REG_FLEXCOM3_FLEX_US_MR (*(__IO uint32_t*)0xFC014204U) /**< (FLEXCOM3) USART Mode Register */
#define REG_FLEXCOM3_FLEX_US_IER (*(__O  uint32_t*)0xFC014208U) /**< (FLEXCOM3) USART Interrupt Enable Register */
#define REG_FLEXCOM3_FLEX_US_IDR (*(__O  uint32_t*)0xFC01420CU) /**< (FLEXCOM3) USART Interrupt Disable Register */
#define REG_FLEXCOM3_FLEX_US_IMR (*(__I  uint32_t*)0xFC014210U) /**< (FLEXCOM3) USART Interrupt Mask Register */
#define REG_FLEXCOM3_FLEX_US_CSR (*(__I  uint32_t*)0xFC014214U) /**< (FLEXCOM3) USART Channel Status Register */
#define REG_FLEXCOM3_FLEX_US_RHR (*(__I  uint32_t*)0xFC014218U) /**< (FLEXCOM3) USART Receive Holding Register */
#define REG_FLEXCOM3_FLEX_US_THR (*(__O  uint32_t*)0xFC01421CU) /**< (FLEXCOM3) USART Transmit Holding Register */
#define REG_FLEXCOM3_FLEX_US_BRGR (*(__IO uint32_t*)0xFC014220U) /**< (FLEXCOM3) USART Baud Rate Generator Register */
#define REG_FLEXCOM3_FLEX_US_RTOR (*(__IO uint32_t*)0xFC014224U) /**< (FLEXCOM3) USART Receiver Timeout Register */
#define REG_FLEXCOM3_FLEX_US_TTGR (*(__IO uint32_t*)0xFC014228U) /**< (FLEXCOM3) USART Transmitter Timeguard Register */
#define REG_FLEXCOM3_FLEX_US_FIDI (*(__IO uint32_t*)0xFC014240U) /**< (FLEXCOM3) USART FI DI Ratio Register */
#define REG_FLEXCOM3_FLEX_US_NER (*(__I  uint32_t*)0xFC014244U) /**< (FLEXCOM3) USART Number of Errors Register */
#define REG_FLEXCOM3_FLEX_US_IF (*(__IO uint32_t*)0xFC01424CU) /**< (FLEXCOM3) USART IrDA Filter Register */
#define REG_FLEXCOM3_FLEX_US_MAN (*(__IO uint32_t*)0xFC014250U) /**< (FLEXCOM3) USART Manchester Configuration Register */
#define REG_FLEXCOM3_FLEX_US_LINMR (*(__IO uint32_t*)0xFC014254U) /**< (FLEXCOM3) USART LIN Mode Register */
#define REG_FLEXCOM3_FLEX_US_LINIR (*(__IO uint32_t*)0xFC014258U) /**< (FLEXCOM3) USART LIN Identifier Register */
#define REG_FLEXCOM3_FLEX_US_LINBRR (*(__I  uint32_t*)0xFC01425CU) /**< (FLEXCOM3) USART LIN Baud Rate Register */
#define REG_FLEXCOM3_FLEX_US_CMPR (*(__IO uint32_t*)0xFC014290U) /**< (FLEXCOM3) USART Comparison Register */
#define REG_FLEXCOM3_FLEX_US_FMR (*(__IO uint32_t*)0xFC0142A0U) /**< (FLEXCOM3) USART FIFO Mode Register */
#define REG_FLEXCOM3_FLEX_US_FLR (*(__I  uint32_t*)0xFC0142A4U) /**< (FLEXCOM3) USART FIFO Level Register */
#define REG_FLEXCOM3_FLEX_US_FIER (*(__O  uint32_t*)0xFC0142A8U) /**< (FLEXCOM3) USART FIFO Interrupt Enable Register */
#define REG_FLEXCOM3_FLEX_US_FIDR (*(__O  uint32_t*)0xFC0142ACU) /**< (FLEXCOM3) USART FIFO Interrupt Disable Register */
#define REG_FLEXCOM3_FLEX_US_FIMR (*(__I  uint32_t*)0xFC0142B0U) /**< (FLEXCOM3) USART FIFO Interrupt Mask Register */
#define REG_FLEXCOM3_FLEX_US_FESR (*(__I  uint32_t*)0xFC0142B4U) /**< (FLEXCOM3) USART FIFO Event Status Register */
#define REG_FLEXCOM3_FLEX_US_WPMR (*(__IO uint32_t*)0xFC0142E4U) /**< (FLEXCOM3) USART Write Protection Mode Register */
#define REG_FLEXCOM3_FLEX_US_WPSR (*(__I  uint32_t*)0xFC0142E8U) /**< (FLEXCOM3) USART Write Protection Status Register */
#define REG_FLEXCOM3_FLEX_SPI_CR (*(__O  uint32_t*)0xFC014400U) /**< (FLEXCOM3) SPI Control Register */
#define REG_FLEXCOM3_FLEX_SPI_MR (*(__IO uint32_t*)0xFC014404U) /**< (FLEXCOM3) SPI Mode Register */
#define REG_FLEXCOM3_FLEX_SPI_RDR (*(__I  uint32_t*)0xFC014408U) /**< (FLEXCOM3) SPI Receive Data Register */
#define REG_FLEXCOM3_FLEX_SPI_TDR (*(__O  uint32_t*)0xFC01440CU) /**< (FLEXCOM3) SPI Transmit Data Register */
#define REG_FLEXCOM3_FLEX_SPI_SR (*(__I  uint32_t*)0xFC014410U) /**< (FLEXCOM3) SPI Status Register */
#define REG_FLEXCOM3_FLEX_SPI_IER (*(__O  uint32_t*)0xFC014414U) /**< (FLEXCOM3) SPI Interrupt Enable Register */
#define REG_FLEXCOM3_FLEX_SPI_IDR (*(__O  uint32_t*)0xFC014418U) /**< (FLEXCOM3) SPI Interrupt Disable Register */
#define REG_FLEXCOM3_FLEX_SPI_IMR (*(__I  uint32_t*)0xFC01441CU) /**< (FLEXCOM3) SPI Interrupt Mask Register */
#define REG_FLEXCOM3_FLEX_SPI_CSR (*(__IO uint32_t*)0xFC014430U) /**< (FLEXCOM3) SPI Chip Select Register */
#define REG_FLEXCOM3_FLEX_SPI_CSR0 (*(__IO uint32_t*)0xFC014430U) /**< (FLEXCOM3) SPI Chip Select Register 0 */
#define REG_FLEXCOM3_FLEX_SPI_CSR1 (*(__IO uint32_t*)0xFC014434U) /**< (FLEXCOM3) SPI Chip Select Register 1 */
#define REG_FLEXCOM3_FLEX_SPI_FMR (*(__IO uint32_t*)0xFC014440U) /**< (FLEXCOM3) SPI FIFO Mode Register */
#define REG_FLEXCOM3_FLEX_SPI_FLR (*(__I  uint32_t*)0xFC014444U) /**< (FLEXCOM3) SPI FIFO Level Register */
#define REG_FLEXCOM3_FLEX_SPI_CMPR (*(__IO uint32_t*)0xFC014448U) /**< (FLEXCOM3) SPI Comparison Register */
#define REG_FLEXCOM3_FLEX_SPI_WPMR (*(__IO uint32_t*)0xFC0144E4U) /**< (FLEXCOM3) SPI Write Protection Mode Register */
#define REG_FLEXCOM3_FLEX_SPI_WPSR (*(__I  uint32_t*)0xFC0144E8U) /**< (FLEXCOM3) SPI Write Protection Status Register */
#define REG_FLEXCOM3_FLEX_TWI_CR (*(__O  uint32_t*)0xFC014600U) /**< (FLEXCOM3) TWI Control Register */
#define REG_FLEXCOM3_FLEX_TWI_MMR (*(__IO uint32_t*)0xFC014604U) /**< (FLEXCOM3) TWI Master Mode Register */
#define REG_FLEXCOM3_FLEX_TWI_SMR (*(__IO uint32_t*)0xFC014608U) /**< (FLEXCOM3) TWI Slave Mode Register */
#define REG_FLEXCOM3_FLEX_TWI_IADR (*(__IO uint32_t*)0xFC01460CU) /**< (FLEXCOM3) TWI Internal Address Register */
#define REG_FLEXCOM3_FLEX_TWI_CWGR (*(__IO uint32_t*)0xFC014610U) /**< (FLEXCOM3) TWI Clock Waveform Generator Register */
#define REG_FLEXCOM3_FLEX_TWI_SR (*(__I  uint32_t*)0xFC014620U) /**< (FLEXCOM3) TWI Status Register */
#define REG_FLEXCOM3_FLEX_TWI_IER (*(__O  uint32_t*)0xFC014624U) /**< (FLEXCOM3) TWI Interrupt Enable Register */
#define REG_FLEXCOM3_FLEX_TWI_IDR (*(__O  uint32_t*)0xFC014628U) /**< (FLEXCOM3) TWI Interrupt Disable Register */
#define REG_FLEXCOM3_FLEX_TWI_IMR (*(__I  uint32_t*)0xFC01462CU) /**< (FLEXCOM3) TWI Interrupt Mask Register */
#define REG_FLEXCOM3_FLEX_TWI_RHR (*(__I  uint32_t*)0xFC014630U) /**< (FLEXCOM3) TWI Receive Holding Register */
#define REG_FLEXCOM3_FLEX_TWI_THR (*(__O  uint32_t*)0xFC014634U) /**< (FLEXCOM3) TWI Transmit Holding Register */
#define REG_FLEXCOM3_FLEX_TWI_SMBTR (*(__IO uint32_t*)0xFC014638U) /**< (FLEXCOM3) TWI SMBus Timing Register */
#define REG_FLEXCOM3_FLEX_TWI_ACR (*(__IO uint32_t*)0xFC014640U) /**< (FLEXCOM3) TWI Alternative Command Register */
#define REG_FLEXCOM3_FLEX_TWI_FILTR (*(__IO uint32_t*)0xFC014644U) /**< (FLEXCOM3) TWI Filter Register */
#define REG_FLEXCOM3_FLEX_TWI_SWMR (*(__IO uint32_t*)0xFC01464CU) /**< (FLEXCOM3) TWI SleepWalking Matching Register */
#define REG_FLEXCOM3_FLEX_TWI_FMR (*(__IO uint32_t*)0xFC014650U) /**< (FLEXCOM3) TWI FIFO Mode Register */
#define REG_FLEXCOM3_FLEX_TWI_FLR (*(__I  uint32_t*)0xFC014654U) /**< (FLEXCOM3) TWI FIFO Level Register */
#define REG_FLEXCOM3_FLEX_TWI_FSR (*(__I  uint32_t*)0xFC014660U) /**< (FLEXCOM3) TWI FIFO Status Register */
#define REG_FLEXCOM3_FLEX_TWI_FIER (*(__O  uint32_t*)0xFC014664U) /**< (FLEXCOM3) TWI FIFO Interrupt Enable Register */
#define REG_FLEXCOM3_FLEX_TWI_FIDR (*(__O  uint32_t*)0xFC014668U) /**< (FLEXCOM3) TWI FIFO Interrupt Disable Register */
#define REG_FLEXCOM3_FLEX_TWI_FIMR (*(__I  uint32_t*)0xFC01466CU) /**< (FLEXCOM3) TWI FIFO Interrupt Mask Register */
#define REG_FLEXCOM3_FLEX_TWI_DR (*(__I  uint32_t*)0xFC0146D0U) /**< (FLEXCOM3) TWI Debug Register */
#define REG_FLEXCOM3_FLEX_TWI_WPMR (*(__IO uint32_t*)0xFC0146E4U) /**< (FLEXCOM3) TWI Write Protection Mode Register */
#define REG_FLEXCOM3_FLEX_TWI_WPSR (*(__I  uint32_t*)0xFC0146E8U) /**< (FLEXCOM3) TWI Write Protection Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for FLEXCOM3 peripheral ========== */
#define FLEXCOM3_INSTANCE_ID                     22         
#define FLEXCOM3_CLOCK_ID                        22         
#define FLEXCOM3_DMAC_ID_TX                      17         
#define FLEXCOM3_DMAC_ID_RX                      18         

#endif /* _SAMA5D2_FLEXCOM3_INSTANCE_ */
