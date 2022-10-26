/*
 * Component description for UART
 *
 * Copyright (c) 2022 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2021-05-26T17:25:30Z */
#ifndef _CEC_UART_COMPONENT_H_
#define _CEC_UART_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR UART                                         */
/* ************************************************************************** */

/* -------- UART_DATA_RX_DAT : (UART Offset: 0x00) ( R/ 8) UART Receive (Read) Buffer Register (DLAB=0) -------- */
#define UART_DATA_RX_DAT_RESETVALUE           _UINT8_(0x00)                                        /*  (UART_DATA_RX_DAT) UART Receive (Read) Buffer Register (DLAB=0)  Reset Value */

#define UART_DATA_RX_DAT_Msk                  _UINT8_(0x00)                                        /* (UART_DATA_RX_DAT) Register Mask  */


/* -------- UART_DATA_TX_DAT : (UART Offset: 0x00) ( /W 8) UART Transmit (Write) Buffer Register (DLAB=0) -------- */
#define UART_DATA_TX_DAT_RESETVALUE           _UINT8_(0x00)                                        /*  (UART_DATA_TX_DAT) UART Transmit (Write) Buffer Register (DLAB=0)  Reset Value */

#define UART_DATA_TX_DAT_Msk                  _UINT8_(0x00)                                        /* (UART_DATA_TX_DAT) Register Mask  */


/* -------- UART_DLAB_BAUDRT_LSB : (UART Offset: 0x00) (R/W 8) UART Programmable BAUD Rate Generator (LSB) Register (DLAB=1) -------- */
#define UART_DLAB_BAUDRT_LSB_RESETVALUE       _UINT8_(0x00)                                        /*  (UART_DLAB_BAUDRT_LSB) UART Programmable BAUD Rate Generator (LSB) Register (DLAB=1)  Reset Value */

#define UART_DLAB_BAUDRT_LSB_Msk              _UINT8_(0x00)                                        /* (UART_DLAB_BAUDRT_LSB) Register Mask  */


/* -------- UART_DLAB_BAUDRT_MSB : (UART Offset: 0x01) (R/W 8) UART Programmable BAUD Rate Generator (MSB) Register (DLAB=1). [6:0] BAUD_RATE_DIVISOR_MSB, [7:7] BAUD_CLK_SEL             1=If CLK_SRC is '0', the baud clock is derived from the 1.8432MHz_Clk. If CLK_SRC is '1', this bit has no effect            0=If CLK_SRC is '0', the baud clock is derived from the 24MHz_Clk. If CLK_SRC is '1', this bit has no effect -------- */
#define UART_DLAB_BAUDRT_MSB_RESETVALUE       _UINT8_(0x00)                                        /*  (UART_DLAB_BAUDRT_MSB) UART Programmable BAUD Rate Generator (MSB) Register (DLAB=1). [6:0] BAUD_RATE_DIVISOR_MSB, [7:7] BAUD_CLK_SEL             1=If CLK_SRC is '0', the baud clock is derived from the 1.8432MHz_Clk. If CLK_SRC is '1', this bit has no effect            0=If CLK_SRC is '0', the baud clock is derived from the 24MHz_Clk. If CLK_SRC is '1', this bit has no effect  Reset Value */

#define UART_DLAB_BAUDRT_MSB_BAUDRT_DIV_MSB_Pos _UINT8_(0)                                           /* (UART_DLAB_BAUDRT_MSB) Baud Rate divisor (MSB). Position */
#define UART_DLAB_BAUDRT_MSB_BAUDRT_DIV_MSB_Msk (_UINT8_(0x7F) << UART_DLAB_BAUDRT_MSB_BAUDRT_DIV_MSB_Pos) /* (UART_DLAB_BAUDRT_MSB) Baud Rate divisor (MSB). Mask */
#define UART_DLAB_BAUDRT_MSB_BAUDRT_DIV_MSB(value) (UART_DLAB_BAUDRT_MSB_BAUDRT_DIV_MSB_Msk & (_UINT8_(value) << UART_DLAB_BAUDRT_MSB_BAUDRT_DIV_MSB_Pos)) /* Assigment of value for BAUDRT_DIV_MSB in the UART_DLAB_BAUDRT_MSB register */
#define UART_DLAB_BAUDRT_MSB_BAUD_CLK_SEL_Pos _UINT8_(7)                                           /* (UART_DLAB_BAUDRT_MSB) Baud Clock Selection Position */
#define UART_DLAB_BAUDRT_MSB_BAUD_CLK_SEL_Msk (_UINT8_(0x1) << UART_DLAB_BAUDRT_MSB_BAUD_CLK_SEL_Pos) /* (UART_DLAB_BAUDRT_MSB) Baud Clock Selection Mask */
#define UART_DLAB_BAUDRT_MSB_BAUD_CLK_SEL(value) (UART_DLAB_BAUDRT_MSB_BAUD_CLK_SEL_Msk & (_UINT8_(value) << UART_DLAB_BAUDRT_MSB_BAUD_CLK_SEL_Pos)) /* Assigment of value for BAUD_CLK_SEL in the UART_DLAB_BAUDRT_MSB register */
#define   UART_DLAB_BAUDRT_MSB_BAUD_CLK_SEL_1843200_Hz_Val _UINT8_(0x0)                                         /* (UART_DLAB_BAUDRT_MSB) Baud clock is derived from the 1.8432MHz Clk  */
#define   UART_DLAB_BAUDRT_MSB_BAUD_CLK_SEL_48000000_HZ_Val _UINT8_(0x1)                                         /* (UART_DLAB_BAUDRT_MSB) baud clock is derived from the 48MHz Clk  */
#define UART_DLAB_BAUDRT_MSB_BAUD_CLK_SEL_1843200_Hz (UART_DLAB_BAUDRT_MSB_BAUD_CLK_SEL_1843200_Hz_Val << UART_DLAB_BAUDRT_MSB_BAUD_CLK_SEL_Pos) /* (UART_DLAB_BAUDRT_MSB) Baud clock is derived from the 1.8432MHz Clk Position  */
#define UART_DLAB_BAUDRT_MSB_BAUD_CLK_SEL_48000000_HZ (UART_DLAB_BAUDRT_MSB_BAUD_CLK_SEL_48000000_HZ_Val << UART_DLAB_BAUDRT_MSB_BAUD_CLK_SEL_Pos) /* (UART_DLAB_BAUDRT_MSB) baud clock is derived from the 48MHz Clk Position  */
#define UART_DLAB_BAUDRT_MSB_Msk              _UINT8_(0xFF)                                        /* (UART_DLAB_BAUDRT_MSB) Register Mask  */


/* -------- UART_DATA_IEN : (UART Offset: 0x01) (R/W 8) UART Interrupt Enable Register (DLAB=0) -------- */
#define UART_DATA_IEN_RESETVALUE              _UINT8_(0x00)                                        /*  (UART_DATA_IEN) UART Interrupt Enable Register (DLAB=0)  Reset Value */

#define UART_DATA_IEN_ERDAI_Pos               _UINT8_(0)                                           /* (UART_DATA_IEN) ERDAI This bit enables the Received Data Available Interrupt (and timeout interrupts in the FIFO mode) when set to logic '1'. Position */
#define UART_DATA_IEN_ERDAI_Msk               (_UINT8_(0x1) << UART_DATA_IEN_ERDAI_Pos)            /* (UART_DATA_IEN) ERDAI This bit enables the Received Data Available Interrupt (and timeout interrupts in the FIFO mode) when set to logic '1'. Mask */
#define UART_DATA_IEN_ERDAI(value)            (UART_DATA_IEN_ERDAI_Msk & (_UINT8_(value) << UART_DATA_IEN_ERDAI_Pos)) /* Assigment of value for ERDAI in the UART_DATA_IEN register */
#define UART_DATA_IEN_ETHREI_Pos              _UINT8_(1)                                           /* (UART_DATA_IEN) ETHREI This bit enables the Transmitter Holding Register Empty Interrupt when set to logic '1'. Position */
#define UART_DATA_IEN_ETHREI_Msk              (_UINT8_(0x1) << UART_DATA_IEN_ETHREI_Pos)           /* (UART_DATA_IEN) ETHREI This bit enables the Transmitter Holding Register Empty Interrupt when set to logic '1'. Mask */
#define UART_DATA_IEN_ETHREI(value)           (UART_DATA_IEN_ETHREI_Msk & (_UINT8_(value) << UART_DATA_IEN_ETHREI_Pos)) /* Assigment of value for ETHREI in the UART_DATA_IEN register */
#define UART_DATA_IEN_ELSI_Pos                _UINT8_(2)                                           /* (UART_DATA_IEN) ELSI This bit enables the Received Line Status Interrupt when set to logic '1'. Position */
#define UART_DATA_IEN_ELSI_Msk                (_UINT8_(0x1) << UART_DATA_IEN_ELSI_Pos)             /* (UART_DATA_IEN) ELSI This bit enables the Received Line Status Interrupt when set to logic '1'. Mask */
#define UART_DATA_IEN_ELSI(value)             (UART_DATA_IEN_ELSI_Msk & (_UINT8_(value) << UART_DATA_IEN_ELSI_Pos)) /* Assigment of value for ELSI in the UART_DATA_IEN register */
#define UART_DATA_IEN_EMSI_Pos                _UINT8_(3)                                           /* (UART_DATA_IEN) EMSI  This bit enables the MODEM Status Interrupt when set to logic '1'. Position */
#define UART_DATA_IEN_EMSI_Msk                (_UINT8_(0x1) << UART_DATA_IEN_EMSI_Pos)             /* (UART_DATA_IEN) EMSI  This bit enables the MODEM Status Interrupt when set to logic '1'. Mask */
#define UART_DATA_IEN_EMSI(value)             (UART_DATA_IEN_EMSI_Msk & (_UINT8_(value) << UART_DATA_IEN_EMSI_Pos)) /* Assigment of value for EMSI in the UART_DATA_IEN register */
#define UART_DATA_IEN_Msk                     _UINT8_(0x0F)                                        /* (UART_DATA_IEN) Register Mask  */


/* -------- UART_DLAB_FIFO_CR : (UART Offset: 0x02) ( /W 8) UART FIFO Control Register -------- */
#define UART_DLAB_FIFO_CR_RESETVALUE          _UINT8_(0x00)                                        /*  (UART_DLAB_FIFO_CR) UART FIFO Control Register  Reset Value */

#define UART_DLAB_FIFO_CR_EXRF_Pos            _UINT8_(0)                                           /* (UART_DLAB_FIFO_CR) EXRF Enable XMIT and RECV FIFO. Position */
#define UART_DLAB_FIFO_CR_EXRF_Msk            (_UINT8_(0x1) << UART_DLAB_FIFO_CR_EXRF_Pos)         /* (UART_DLAB_FIFO_CR) EXRF Enable XMIT and RECV FIFO. Mask */
#define UART_DLAB_FIFO_CR_EXRF(value)         (UART_DLAB_FIFO_CR_EXRF_Msk & (_UINT8_(value) << UART_DLAB_FIFO_CR_EXRF_Pos)) /* Assigment of value for EXRF in the UART_DLAB_FIFO_CR register */
#define UART_DLAB_FIFO_CR_CLR_RECV_FIFO_Pos   _UINT8_(1)                                           /* (UART_DLAB_FIFO_CR) CLEAR_RECV_FIFO  Setting this bit to a logic '1' clears all bytes in the RCVR FIFO and resets its counter logic to '0'. Position */
#define UART_DLAB_FIFO_CR_CLR_RECV_FIFO_Msk   (_UINT8_(0x1) << UART_DLAB_FIFO_CR_CLR_RECV_FIFO_Pos) /* (UART_DLAB_FIFO_CR) CLEAR_RECV_FIFO  Setting this bit to a logic '1' clears all bytes in the RCVR FIFO and resets its counter logic to '0'. Mask */
#define UART_DLAB_FIFO_CR_CLR_RECV_FIFO(value) (UART_DLAB_FIFO_CR_CLR_RECV_FIFO_Msk & (_UINT8_(value) << UART_DLAB_FIFO_CR_CLR_RECV_FIFO_Pos)) /* Assigment of value for CLR_RECV_FIFO in the UART_DLAB_FIFO_CR register */
#define UART_DLAB_FIFO_CR_CLR_XMIT_FIFO_Pos   _UINT8_(2)                                           /* (UART_DLAB_FIFO_CR) CLEAR_XMIT_FIFO  Setting this bit to a logic '1' clears all bytes in the XMIT FIFO and resets its counter logic to '0' . The shift register is not cleared. This bit is self-clearing. Position */
#define UART_DLAB_FIFO_CR_CLR_XMIT_FIFO_Msk   (_UINT8_(0x1) << UART_DLAB_FIFO_CR_CLR_XMIT_FIFO_Pos) /* (UART_DLAB_FIFO_CR) CLEAR_XMIT_FIFO  Setting this bit to a logic '1' clears all bytes in the XMIT FIFO and resets its counter logic to '0' . The shift register is not cleared. This bit is self-clearing. Mask */
#define UART_DLAB_FIFO_CR_CLR_XMIT_FIFO(value) (UART_DLAB_FIFO_CR_CLR_XMIT_FIFO_Msk & (_UINT8_(value) << UART_DLAB_FIFO_CR_CLR_XMIT_FIFO_Pos)) /* Assigment of value for CLR_XMIT_FIFO in the UART_DLAB_FIFO_CR register */
#define UART_DLAB_FIFO_CR_DMA_MODE_SEL_Pos    _UINT8_(3)                                           /* (UART_DLAB_FIFO_CR) DMA_MODE_SELECT  Writing to this bit has no effect on the operation of the UART. The RXRDY and TXRDY pins are not available on this chip. Position */
#define UART_DLAB_FIFO_CR_DMA_MODE_SEL_Msk    (_UINT8_(0x1) << UART_DLAB_FIFO_CR_DMA_MODE_SEL_Pos) /* (UART_DLAB_FIFO_CR) DMA_MODE_SELECT  Writing to this bit has no effect on the operation of the UART. The RXRDY and TXRDY pins are not available on this chip. Mask */
#define UART_DLAB_FIFO_CR_DMA_MODE_SEL(value) (UART_DLAB_FIFO_CR_DMA_MODE_SEL_Msk & (_UINT8_(value) << UART_DLAB_FIFO_CR_DMA_MODE_SEL_Pos)) /* Assigment of value for DMA_MODE_SEL in the UART_DLAB_FIFO_CR register */
#define UART_DLAB_FIFO_CR_RECV_FIFO_TRIG_LVL_Pos _UINT8_(6)                                           /* (UART_DLAB_FIFO_CR) RECV_FIFO_TRIGGER_LEVEL These bits are used to set the trigger level for the RCVR FIFO interrupt. Position */
#define UART_DLAB_FIFO_CR_RECV_FIFO_TRIG_LVL_Msk (_UINT8_(0x3) << UART_DLAB_FIFO_CR_RECV_FIFO_TRIG_LVL_Pos) /* (UART_DLAB_FIFO_CR) RECV_FIFO_TRIGGER_LEVEL These bits are used to set the trigger level for the RCVR FIFO interrupt. Mask */
#define UART_DLAB_FIFO_CR_RECV_FIFO_TRIG_LVL(value) (UART_DLAB_FIFO_CR_RECV_FIFO_TRIG_LVL_Msk & (_UINT8_(value) << UART_DLAB_FIFO_CR_RECV_FIFO_TRIG_LVL_Pos)) /* Assigment of value for RECV_FIFO_TRIG_LVL in the UART_DLAB_FIFO_CR register */
#define UART_DLAB_FIFO_CR_Msk                 _UINT8_(0xCF)                                        /* (UART_DLAB_FIFO_CR) Register Mask  */


/* -------- UART_DATA_FIFO_CR : (UART Offset: 0x02) ( /W 8) UART FIFO Control Register -------- */
#define UART_DATA_FIFO_CR_RESETVALUE          _UINT8_(0x00)                                        /*  (UART_DATA_FIFO_CR) UART FIFO Control Register  Reset Value */

#define UART_DATA_FIFO_CR_EXRF_Pos            _UINT8_(0)                                           /* (UART_DATA_FIFO_CR) EXRF Enable XMIT and RECV FIFO. Position */
#define UART_DATA_FIFO_CR_EXRF_Msk            (_UINT8_(0x1) << UART_DATA_FIFO_CR_EXRF_Pos)         /* (UART_DATA_FIFO_CR) EXRF Enable XMIT and RECV FIFO. Mask */
#define UART_DATA_FIFO_CR_EXRF(value)         (UART_DATA_FIFO_CR_EXRF_Msk & (_UINT8_(value) << UART_DATA_FIFO_CR_EXRF_Pos)) /* Assigment of value for EXRF in the UART_DATA_FIFO_CR register */
#define UART_DATA_FIFO_CR_CLR_RECV_FIFO_Pos   _UINT8_(1)                                           /* (UART_DATA_FIFO_CR) CLEAR_RECV_FIFO  Setting this bit to a logic '1' clears all bytes in the RCVR FIFO and resets its counter logic to '0'. Position */
#define UART_DATA_FIFO_CR_CLR_RECV_FIFO_Msk   (_UINT8_(0x1) << UART_DATA_FIFO_CR_CLR_RECV_FIFO_Pos) /* (UART_DATA_FIFO_CR) CLEAR_RECV_FIFO  Setting this bit to a logic '1' clears all bytes in the RCVR FIFO and resets its counter logic to '0'. Mask */
#define UART_DATA_FIFO_CR_CLR_RECV_FIFO(value) (UART_DATA_FIFO_CR_CLR_RECV_FIFO_Msk & (_UINT8_(value) << UART_DATA_FIFO_CR_CLR_RECV_FIFO_Pos)) /* Assigment of value for CLR_RECV_FIFO in the UART_DATA_FIFO_CR register */
#define UART_DATA_FIFO_CR_CLR_XMIT_FIFO_Pos   _UINT8_(2)                                           /* (UART_DATA_FIFO_CR) CLEAR_XMIT_FIFO  Setting this bit to a logic '1' clears all bytes in the XMIT FIFO and resets its counter logic to '0' . The shift register is not cleared. This bit is self-clearing. Position */
#define UART_DATA_FIFO_CR_CLR_XMIT_FIFO_Msk   (_UINT8_(0x1) << UART_DATA_FIFO_CR_CLR_XMIT_FIFO_Pos) /* (UART_DATA_FIFO_CR) CLEAR_XMIT_FIFO  Setting this bit to a logic '1' clears all bytes in the XMIT FIFO and resets its counter logic to '0' . The shift register is not cleared. This bit is self-clearing. Mask */
#define UART_DATA_FIFO_CR_CLR_XMIT_FIFO(value) (UART_DATA_FIFO_CR_CLR_XMIT_FIFO_Msk & (_UINT8_(value) << UART_DATA_FIFO_CR_CLR_XMIT_FIFO_Pos)) /* Assigment of value for CLR_XMIT_FIFO in the UART_DATA_FIFO_CR register */
#define UART_DATA_FIFO_CR_DMA_MODE_SEL_Pos    _UINT8_(3)                                           /* (UART_DATA_FIFO_CR) DMA_MODE_SELECT  Writing to this bit has no effect on the operation of the UART. The RXRDY and TXRDY pins are not available on this chip. Position */
#define UART_DATA_FIFO_CR_DMA_MODE_SEL_Msk    (_UINT8_(0x1) << UART_DATA_FIFO_CR_DMA_MODE_SEL_Pos) /* (UART_DATA_FIFO_CR) DMA_MODE_SELECT  Writing to this bit has no effect on the operation of the UART. The RXRDY and TXRDY pins are not available on this chip. Mask */
#define UART_DATA_FIFO_CR_DMA_MODE_SEL(value) (UART_DATA_FIFO_CR_DMA_MODE_SEL_Msk & (_UINT8_(value) << UART_DATA_FIFO_CR_DMA_MODE_SEL_Pos)) /* Assigment of value for DMA_MODE_SEL in the UART_DATA_FIFO_CR register */
#define UART_DATA_FIFO_CR_RECV_FIFO_TRIG_LVL_Pos _UINT8_(6)                                           /* (UART_DATA_FIFO_CR) RECV_FIFO_TRIGGER_LEVEL These bits are used to set the trigger level for the RCVR FIFO interrupt. Position */
#define UART_DATA_FIFO_CR_RECV_FIFO_TRIG_LVL_Msk (_UINT8_(0x3) << UART_DATA_FIFO_CR_RECV_FIFO_TRIG_LVL_Pos) /* (UART_DATA_FIFO_CR) RECV_FIFO_TRIGGER_LEVEL These bits are used to set the trigger level for the RCVR FIFO interrupt. Mask */
#define UART_DATA_FIFO_CR_RECV_FIFO_TRIG_LVL(value) (UART_DATA_FIFO_CR_RECV_FIFO_TRIG_LVL_Msk & (_UINT8_(value) << UART_DATA_FIFO_CR_RECV_FIFO_TRIG_LVL_Pos)) /* Assigment of value for RECV_FIFO_TRIG_LVL in the UART_DATA_FIFO_CR register */
#define UART_DATA_FIFO_CR_Msk                 _UINT8_(0xCF)                                        /* (UART_DATA_FIFO_CR) Register Mask  */


/* -------- UART_DLAB_INT_ID : (UART Offset: 0x02) ( R/ 8) UART Interrupt Identification Register -------- */
#define UART_DLAB_INT_ID_RESETVALUE           _UINT8_(0x00)                                        /*  (UART_DLAB_INT_ID) UART Interrupt Identification Register  Reset Value */

#define UART_DLAB_INT_ID_IPEND_Pos            _UINT8_(0)                                           /* (UART_DLAB_INT_ID) IPEND  This bit can be used in either a hardwired prioritized or polled environment to indicate whether an interrupt is pending. Position */
#define UART_DLAB_INT_ID_IPEND_Msk            (_UINT8_(0x1) << UART_DLAB_INT_ID_IPEND_Pos)         /* (UART_DLAB_INT_ID) IPEND  This bit can be used in either a hardwired prioritized or polled environment to indicate whether an interrupt is pending. Mask */
#define UART_DLAB_INT_ID_IPEND(value)         (UART_DLAB_INT_ID_IPEND_Msk & (_UINT8_(value) << UART_DLAB_INT_ID_IPEND_Pos)) /* Assigment of value for IPEND in the UART_DLAB_INT_ID register */
#define UART_DLAB_INT_ID_INTID_Pos            _UINT8_(1)                                           /* (UART_DLAB_INT_ID) INTID  These bits identify the highest priority interrupt pending Position */
#define UART_DLAB_INT_ID_INTID_Msk            (_UINT8_(0x7) << UART_DLAB_INT_ID_INTID_Pos)         /* (UART_DLAB_INT_ID) INTID  These bits identify the highest priority interrupt pending Mask */
#define UART_DLAB_INT_ID_INTID(value)         (UART_DLAB_INT_ID_INTID_Msk & (_UINT8_(value) << UART_DLAB_INT_ID_INTID_Pos)) /* Assigment of value for INTID in the UART_DLAB_INT_ID register */
#define UART_DLAB_INT_ID_FIFO_EN_Pos          _UINT8_(6)                                           /* (UART_DLAB_INT_ID) These two bits are set when the FIFO CONTROL Register bit 0 equals 1. Position */
#define UART_DLAB_INT_ID_FIFO_EN_Msk          (_UINT8_(0x3) << UART_DLAB_INT_ID_FIFO_EN_Pos)       /* (UART_DLAB_INT_ID) These two bits are set when the FIFO CONTROL Register bit 0 equals 1. Mask */
#define UART_DLAB_INT_ID_FIFO_EN(value)       (UART_DLAB_INT_ID_FIFO_EN_Msk & (_UINT8_(value) << UART_DLAB_INT_ID_FIFO_EN_Pos)) /* Assigment of value for FIFO_EN in the UART_DLAB_INT_ID register */
#define UART_DLAB_INT_ID_Msk                  _UINT8_(0xCF)                                        /* (UART_DLAB_INT_ID) Register Mask  */


/* -------- UART_DATA_INT_ID : (UART Offset: 0x02) ( R/ 8) UART Interrupt Identification Register -------- */
#define UART_DATA_INT_ID_RESETVALUE           _UINT8_(0x00)                                        /*  (UART_DATA_INT_ID) UART Interrupt Identification Register  Reset Value */

#define UART_DATA_INT_ID_IPEND_Pos            _UINT8_(0)                                           /* (UART_DATA_INT_ID) IPEND  This bit can be used in either a hardwired prioritized or polled environment to indicate whether an interrupt is pending. Position */
#define UART_DATA_INT_ID_IPEND_Msk            (_UINT8_(0x1) << UART_DATA_INT_ID_IPEND_Pos)         /* (UART_DATA_INT_ID) IPEND  This bit can be used in either a hardwired prioritized or polled environment to indicate whether an interrupt is pending. Mask */
#define UART_DATA_INT_ID_IPEND(value)         (UART_DATA_INT_ID_IPEND_Msk & (_UINT8_(value) << UART_DATA_INT_ID_IPEND_Pos)) /* Assigment of value for IPEND in the UART_DATA_INT_ID register */
#define UART_DATA_INT_ID_INTID_Pos            _UINT8_(1)                                           /* (UART_DATA_INT_ID) INTID  These bits identify the highest priority interrupt pending Position */
#define UART_DATA_INT_ID_INTID_Msk            (_UINT8_(0x7) << UART_DATA_INT_ID_INTID_Pos)         /* (UART_DATA_INT_ID) INTID  These bits identify the highest priority interrupt pending Mask */
#define UART_DATA_INT_ID_INTID(value)         (UART_DATA_INT_ID_INTID_Msk & (_UINT8_(value) << UART_DATA_INT_ID_INTID_Pos)) /* Assigment of value for INTID in the UART_DATA_INT_ID register */
#define UART_DATA_INT_ID_FIFO_EN_Pos          _UINT8_(6)                                           /* (UART_DATA_INT_ID) These two bits are set when the FIFO CONTROL Register bit 0 equals 1. Position */
#define UART_DATA_INT_ID_FIFO_EN_Msk          (_UINT8_(0x3) << UART_DATA_INT_ID_FIFO_EN_Pos)       /* (UART_DATA_INT_ID) These two bits are set when the FIFO CONTROL Register bit 0 equals 1. Mask */
#define UART_DATA_INT_ID_FIFO_EN(value)       (UART_DATA_INT_ID_FIFO_EN_Msk & (_UINT8_(value) << UART_DATA_INT_ID_FIFO_EN_Pos)) /* Assigment of value for FIFO_EN in the UART_DATA_INT_ID register */
#define UART_DATA_INT_ID_Msk                  _UINT8_(0xCF)                                        /* (UART_DATA_INT_ID) Register Mask  */


/* -------- UART_DLAB_LCR : (UART Offset: 0x03) (R/W 8) UART Line Control Register -------- */
#define UART_DLAB_LCR_RESETVALUE              _UINT8_(0x00)                                        /*  (UART_DLAB_LCR) UART Line Control Register  Reset Value */

#define UART_DLAB_LCR_WORD_LEN_Pos            _UINT8_(0)                                           /* (UART_DLAB_LCR) WORD_LENGTH These two bits specify the number of bits in each transmitted or received serial character. Position */
#define UART_DLAB_LCR_WORD_LEN_Msk            (_UINT8_(0x3) << UART_DLAB_LCR_WORD_LEN_Pos)         /* (UART_DLAB_LCR) WORD_LENGTH These two bits specify the number of bits in each transmitted or received serial character. Mask */
#define UART_DLAB_LCR_WORD_LEN(value)         (UART_DLAB_LCR_WORD_LEN_Msk & (_UINT8_(value) << UART_DLAB_LCR_WORD_LEN_Pos)) /* Assigment of value for WORD_LEN in the UART_DLAB_LCR register */
#define   UART_DLAB_LCR_WORD_LEN_5_BIT_Val    _UINT8_(0x0)                                         /* (UART_DLAB_LCR) 5 Bits  */
#define   UART_DLAB_LCR_WORD_LEN_6_BIT_Val    _UINT8_(0x1)                                         /* (UART_DLAB_LCR) 6 Bits  */
#define   UART_DLAB_LCR_WORD_LEN_7_BIT_Val    _UINT8_(0x2)                                         /* (UART_DLAB_LCR) 7 Bits  */
#define   UART_DLAB_LCR_WORD_LEN_8_BIT_Val    _UINT8_(0x3)                                         /* (UART_DLAB_LCR) 8 Bits  */
#define UART_DLAB_LCR_WORD_LEN_5_BIT          (UART_DLAB_LCR_WORD_LEN_5_BIT_Val << UART_DLAB_LCR_WORD_LEN_Pos) /* (UART_DLAB_LCR) 5 Bits Position  */
#define UART_DLAB_LCR_WORD_LEN_6_BIT          (UART_DLAB_LCR_WORD_LEN_6_BIT_Val << UART_DLAB_LCR_WORD_LEN_Pos) /* (UART_DLAB_LCR) 6 Bits Position  */
#define UART_DLAB_LCR_WORD_LEN_7_BIT          (UART_DLAB_LCR_WORD_LEN_7_BIT_Val << UART_DLAB_LCR_WORD_LEN_Pos) /* (UART_DLAB_LCR) 7 Bits Position  */
#define UART_DLAB_LCR_WORD_LEN_8_BIT          (UART_DLAB_LCR_WORD_LEN_8_BIT_Val << UART_DLAB_LCR_WORD_LEN_Pos) /* (UART_DLAB_LCR) 8 Bits Position  */
#define UART_DLAB_LCR_STOP_BITS_Pos           _UINT8_(2)                                           /* (UART_DLAB_LCR) STOP_BITS  This bit specifies the number of stop bits in each transmitted or received serial character. Position */
#define UART_DLAB_LCR_STOP_BITS_Msk           (_UINT8_(0x1) << UART_DLAB_LCR_STOP_BITS_Pos)        /* (UART_DLAB_LCR) STOP_BITS  This bit specifies the number of stop bits in each transmitted or received serial character. Mask */
#define UART_DLAB_LCR_STOP_BITS(value)        (UART_DLAB_LCR_STOP_BITS_Msk & (_UINT8_(value) << UART_DLAB_LCR_STOP_BITS_Pos)) /* Assigment of value for STOP_BITS in the UART_DLAB_LCR register */
#define   UART_DLAB_LCR_STOP_BITS_ONE_STOP_BIT_Val _UINT8_(0x0)                                         /* (UART_DLAB_LCR) 1 Stop bit  */
#define   UART_DLAB_LCR_STOP_BITS_ONE_FIVE_TWO_STOP_BITS_Val _UINT8_(0x1)                                         /* (UART_DLAB_LCR) 1.5 or 2 Stop bits  */
#define UART_DLAB_LCR_STOP_BITS_ONE_STOP_BIT  (UART_DLAB_LCR_STOP_BITS_ONE_STOP_BIT_Val << UART_DLAB_LCR_STOP_BITS_Pos) /* (UART_DLAB_LCR) 1 Stop bit Position  */
#define UART_DLAB_LCR_STOP_BITS_ONE_FIVE_TWO_STOP_BITS (UART_DLAB_LCR_STOP_BITS_ONE_FIVE_TWO_STOP_BITS_Val << UART_DLAB_LCR_STOP_BITS_Pos) /* (UART_DLAB_LCR) 1.5 or 2 Stop bits Position  */
#define UART_DLAB_LCR_EN_PAR_Pos              _UINT8_(3)                                           /* (UART_DLAB_LCR) ENABLE_PARITY  Parity Enable bit. Position */
#define UART_DLAB_LCR_EN_PAR_Msk              (_UINT8_(0x1) << UART_DLAB_LCR_EN_PAR_Pos)           /* (UART_DLAB_LCR) ENABLE_PARITY  Parity Enable bit. Mask */
#define UART_DLAB_LCR_EN_PAR(value)           (UART_DLAB_LCR_EN_PAR_Msk & (_UINT8_(value) << UART_DLAB_LCR_EN_PAR_Pos)) /* Assigment of value for EN_PAR in the UART_DLAB_LCR register */
#define UART_DLAB_LCR_PAR_SEL_Pos             _UINT8_(4)                                           /* (UART_DLAB_LCR) PARITY_SELECT Even Parity Select bit. Position */
#define UART_DLAB_LCR_PAR_SEL_Msk             (_UINT8_(0x1) << UART_DLAB_LCR_PAR_SEL_Pos)          /* (UART_DLAB_LCR) PARITY_SELECT Even Parity Select bit. Mask */
#define UART_DLAB_LCR_PAR_SEL(value)          (UART_DLAB_LCR_PAR_SEL_Msk & (_UINT8_(value) << UART_DLAB_LCR_PAR_SEL_Pos)) /* Assigment of value for PAR_SEL in the UART_DLAB_LCR register */
#define   UART_DLAB_LCR_PAR_SEL_ODD_Val       _UINT8_(0x0)                                         /* (UART_DLAB_LCR) Odd Parity  */
#define   UART_DLAB_LCR_PAR_SEL_EVEN_Val      _UINT8_(0x1)                                         /* (UART_DLAB_LCR) Even Parity  */
#define UART_DLAB_LCR_PAR_SEL_ODD             (UART_DLAB_LCR_PAR_SEL_ODD_Val << UART_DLAB_LCR_PAR_SEL_Pos) /* (UART_DLAB_LCR) Odd Parity Position  */
#define UART_DLAB_LCR_PAR_SEL_EVEN            (UART_DLAB_LCR_PAR_SEL_EVEN_Val << UART_DLAB_LCR_PAR_SEL_Pos) /* (UART_DLAB_LCR) Even Parity Position  */
#define UART_DLAB_LCR_STICK_PAR_Pos           _UINT8_(5)                                           /* (UART_DLAB_LCR) STICK_PARITY  Stick Parity bit. Position */
#define UART_DLAB_LCR_STICK_PAR_Msk           (_UINT8_(0x1) << UART_DLAB_LCR_STICK_PAR_Pos)        /* (UART_DLAB_LCR) STICK_PARITY  Stick Parity bit. Mask */
#define UART_DLAB_LCR_STICK_PAR(value)        (UART_DLAB_LCR_STICK_PAR_Msk & (_UINT8_(value) << UART_DLAB_LCR_STICK_PAR_Pos)) /* Assigment of value for STICK_PAR in the UART_DLAB_LCR register */
#define UART_DLAB_LCR_BRK_CTRL_Pos            _UINT8_(6)                                           /* (UART_DLAB_LCR) BREAK_CONTROL Set Break Control bit Position */
#define UART_DLAB_LCR_BRK_CTRL_Msk            (_UINT8_(0x1) << UART_DLAB_LCR_BRK_CTRL_Pos)         /* (UART_DLAB_LCR) BREAK_CONTROL Set Break Control bit Mask */
#define UART_DLAB_LCR_BRK_CTRL(value)         (UART_DLAB_LCR_BRK_CTRL_Msk & (_UINT8_(value) << UART_DLAB_LCR_BRK_CTRL_Pos)) /* Assigment of value for BRK_CTRL in the UART_DLAB_LCR register */
#define UART_DLAB_LCR_DLAB_Pos                _UINT8_(7)                                           /* (UART_DLAB_LCR) DLAB Divisor Latch Access Bit (DLAB). Position */
#define UART_DLAB_LCR_DLAB_Msk                (_UINT8_(0x1) << UART_DLAB_LCR_DLAB_Pos)             /* (UART_DLAB_LCR) DLAB Divisor Latch Access Bit (DLAB). Mask */
#define UART_DLAB_LCR_DLAB(value)             (UART_DLAB_LCR_DLAB_Msk & (_UINT8_(value) << UART_DLAB_LCR_DLAB_Pos)) /* Assigment of value for DLAB in the UART_DLAB_LCR register */
#define UART_DLAB_LCR_Msk                     _UINT8_(0xFF)                                        /* (UART_DLAB_LCR) Register Mask  */


/* -------- UART_DATA_LCR : (UART Offset: 0x03) (R/W 8) UART Line Control Register -------- */
#define UART_DATA_LCR_RESETVALUE              _UINT8_(0x00)                                        /*  (UART_DATA_LCR) UART Line Control Register  Reset Value */

#define UART_DATA_LCR_WORD_LEN_Pos            _UINT8_(0)                                           /* (UART_DATA_LCR) WORD_LENGTH These two bits specify the number of bits in each transmitted or received serial character. Position */
#define UART_DATA_LCR_WORD_LEN_Msk            (_UINT8_(0x3) << UART_DATA_LCR_WORD_LEN_Pos)         /* (UART_DATA_LCR) WORD_LENGTH These two bits specify the number of bits in each transmitted or received serial character. Mask */
#define UART_DATA_LCR_WORD_LEN(value)         (UART_DATA_LCR_WORD_LEN_Msk & (_UINT8_(value) << UART_DATA_LCR_WORD_LEN_Pos)) /* Assigment of value for WORD_LEN in the UART_DATA_LCR register */
#define   UART_DATA_LCR_WORD_LEN_5_BIT_Val    _UINT8_(0x0)                                         /* (UART_DATA_LCR) 5 Bits  */
#define   UART_DATA_LCR_WORD_LEN_6_BIT_Val    _UINT8_(0x1)                                         /* (UART_DATA_LCR) 6 Bits  */
#define   UART_DATA_LCR_WORD_LEN_7_BIT_Val    _UINT8_(0x2)                                         /* (UART_DATA_LCR) 7 Bits  */
#define   UART_DATA_LCR_WORD_LEN_8_BIT_Val    _UINT8_(0x3)                                         /* (UART_DATA_LCR) 8 Bits  */
#define UART_DATA_LCR_WORD_LEN_5_BIT          (UART_DATA_LCR_WORD_LEN_5_BIT_Val << UART_DATA_LCR_WORD_LEN_Pos) /* (UART_DATA_LCR) 5 Bits Position  */
#define UART_DATA_LCR_WORD_LEN_6_BIT          (UART_DATA_LCR_WORD_LEN_6_BIT_Val << UART_DATA_LCR_WORD_LEN_Pos) /* (UART_DATA_LCR) 6 Bits Position  */
#define UART_DATA_LCR_WORD_LEN_7_BIT          (UART_DATA_LCR_WORD_LEN_7_BIT_Val << UART_DATA_LCR_WORD_LEN_Pos) /* (UART_DATA_LCR) 7 Bits Position  */
#define UART_DATA_LCR_WORD_LEN_8_BIT          (UART_DATA_LCR_WORD_LEN_8_BIT_Val << UART_DATA_LCR_WORD_LEN_Pos) /* (UART_DATA_LCR) 8 Bits Position  */
#define UART_DATA_LCR_STOP_BITS_Pos           _UINT8_(2)                                           /* (UART_DATA_LCR) STOP_BITS  This bit specifies the number of stop bits in each transmitted or received serial character. Position */
#define UART_DATA_LCR_STOP_BITS_Msk           (_UINT8_(0x1) << UART_DATA_LCR_STOP_BITS_Pos)        /* (UART_DATA_LCR) STOP_BITS  This bit specifies the number of stop bits in each transmitted or received serial character. Mask */
#define UART_DATA_LCR_STOP_BITS(value)        (UART_DATA_LCR_STOP_BITS_Msk & (_UINT8_(value) << UART_DATA_LCR_STOP_BITS_Pos)) /* Assigment of value for STOP_BITS in the UART_DATA_LCR register */
#define   UART_DATA_LCR_STOP_BITS_ONE_STOP_BIT_Val _UINT8_(0x0)                                         /* (UART_DATA_LCR) 1 Stop bit  */
#define   UART_DATA_LCR_STOP_BITS_ONE_FIVE_TWO_STOP_BITS_Val _UINT8_(0x1)                                         /* (UART_DATA_LCR) 1.5 or 2 Stop bits  */
#define UART_DATA_LCR_STOP_BITS_ONE_STOP_BIT  (UART_DATA_LCR_STOP_BITS_ONE_STOP_BIT_Val << UART_DATA_LCR_STOP_BITS_Pos) /* (UART_DATA_LCR) 1 Stop bit Position  */
#define UART_DATA_LCR_STOP_BITS_ONE_FIVE_TWO_STOP_BITS (UART_DATA_LCR_STOP_BITS_ONE_FIVE_TWO_STOP_BITS_Val << UART_DATA_LCR_STOP_BITS_Pos) /* (UART_DATA_LCR) 1.5 or 2 Stop bits Position  */
#define UART_DATA_LCR_EN_PAR_Pos              _UINT8_(3)                                           /* (UART_DATA_LCR) ENABLE_PARITY  Parity Enable bit. Position */
#define UART_DATA_LCR_EN_PAR_Msk              (_UINT8_(0x1) << UART_DATA_LCR_EN_PAR_Pos)           /* (UART_DATA_LCR) ENABLE_PARITY  Parity Enable bit. Mask */
#define UART_DATA_LCR_EN_PAR(value)           (UART_DATA_LCR_EN_PAR_Msk & (_UINT8_(value) << UART_DATA_LCR_EN_PAR_Pos)) /* Assigment of value for EN_PAR in the UART_DATA_LCR register */
#define UART_DATA_LCR_PAR_SEL_Pos             _UINT8_(4)                                           /* (UART_DATA_LCR) PARITY_SELECT Even Parity Select bit. Position */
#define UART_DATA_LCR_PAR_SEL_Msk             (_UINT8_(0x1) << UART_DATA_LCR_PAR_SEL_Pos)          /* (UART_DATA_LCR) PARITY_SELECT Even Parity Select bit. Mask */
#define UART_DATA_LCR_PAR_SEL(value)          (UART_DATA_LCR_PAR_SEL_Msk & (_UINT8_(value) << UART_DATA_LCR_PAR_SEL_Pos)) /* Assigment of value for PAR_SEL in the UART_DATA_LCR register */
#define   UART_DATA_LCR_PAR_SEL_ODD_Val       _UINT8_(0x0)                                         /* (UART_DATA_LCR) Odd Parity  */
#define   UART_DATA_LCR_PAR_SEL_EVEN_Val      _UINT8_(0x1)                                         /* (UART_DATA_LCR) Even Parity  */
#define UART_DATA_LCR_PAR_SEL_ODD             (UART_DATA_LCR_PAR_SEL_ODD_Val << UART_DATA_LCR_PAR_SEL_Pos) /* (UART_DATA_LCR) Odd Parity Position  */
#define UART_DATA_LCR_PAR_SEL_EVEN            (UART_DATA_LCR_PAR_SEL_EVEN_Val << UART_DATA_LCR_PAR_SEL_Pos) /* (UART_DATA_LCR) Even Parity Position  */
#define UART_DATA_LCR_STICK_PAR_Pos           _UINT8_(5)                                           /* (UART_DATA_LCR) STICK_PARITY  Stick Parity bit. Position */
#define UART_DATA_LCR_STICK_PAR_Msk           (_UINT8_(0x1) << UART_DATA_LCR_STICK_PAR_Pos)        /* (UART_DATA_LCR) STICK_PARITY  Stick Parity bit. Mask */
#define UART_DATA_LCR_STICK_PAR(value)        (UART_DATA_LCR_STICK_PAR_Msk & (_UINT8_(value) << UART_DATA_LCR_STICK_PAR_Pos)) /* Assigment of value for STICK_PAR in the UART_DATA_LCR register */
#define UART_DATA_LCR_BRK_CTRL_Pos            _UINT8_(6)                                           /* (UART_DATA_LCR) BREAK_CONTROL Set Break Control bit Position */
#define UART_DATA_LCR_BRK_CTRL_Msk            (_UINT8_(0x1) << UART_DATA_LCR_BRK_CTRL_Pos)         /* (UART_DATA_LCR) BREAK_CONTROL Set Break Control bit Mask */
#define UART_DATA_LCR_BRK_CTRL(value)         (UART_DATA_LCR_BRK_CTRL_Msk & (_UINT8_(value) << UART_DATA_LCR_BRK_CTRL_Pos)) /* Assigment of value for BRK_CTRL in the UART_DATA_LCR register */
#define UART_DATA_LCR_DLAB_Pos                _UINT8_(7)                                           /* (UART_DATA_LCR) DLAB Divisor Latch Access Bit (DLAB). Position */
#define UART_DATA_LCR_DLAB_Msk                (_UINT8_(0x1) << UART_DATA_LCR_DLAB_Pos)             /* (UART_DATA_LCR) DLAB Divisor Latch Access Bit (DLAB). Mask */
#define UART_DATA_LCR_DLAB(value)             (UART_DATA_LCR_DLAB_Msk & (_UINT8_(value) << UART_DATA_LCR_DLAB_Pos)) /* Assigment of value for DLAB in the UART_DATA_LCR register */
#define UART_DATA_LCR_Msk                     _UINT8_(0xFF)                                        /* (UART_DATA_LCR) Register Mask  */


/* -------- UART_DLAB_MCR : (UART Offset: 0x04) (R/W 8) UART Modem Control Register -------- */
#define UART_DLAB_MCR_RESETVALUE              _UINT8_(0x00)                                        /*  (UART_DLAB_MCR) UART Modem Control Register  Reset Value */

#define UART_DLAB_MCR_DTR_Pos                 _UINT8_(0)                                           /* (UART_DLAB_MCR) DTR  This bit controls the Data Terminal Ready (nDTR) output. Position */
#define UART_DLAB_MCR_DTR_Msk                 (_UINT8_(0x1) << UART_DLAB_MCR_DTR_Pos)              /* (UART_DLAB_MCR) DTR  This bit controls the Data Terminal Ready (nDTR) output. Mask */
#define UART_DLAB_MCR_DTR(value)              (UART_DLAB_MCR_DTR_Msk & (_UINT8_(value) << UART_DLAB_MCR_DTR_Pos)) /* Assigment of value for DTR in the UART_DLAB_MCR register */
#define UART_DLAB_MCR_RTS_Pos                 _UINT8_(1)                                           /* (UART_DLAB_MCR) RTS  This bit controls the Request To Send (nRTS) output. Position */
#define UART_DLAB_MCR_RTS_Msk                 (_UINT8_(0x1) << UART_DLAB_MCR_RTS_Pos)              /* (UART_DLAB_MCR) RTS  This bit controls the Request To Send (nRTS) output. Mask */
#define UART_DLAB_MCR_RTS(value)              (UART_DLAB_MCR_RTS_Msk & (_UINT8_(value) << UART_DLAB_MCR_RTS_Pos)) /* Assigment of value for RTS in the UART_DLAB_MCR register */
#define UART_DLAB_MCR_OUT1_Pos                _UINT8_(2)                                           /* (UART_DLAB_MCR) OUT1 This bit controls the Output 1 (OUT1) bit. Position */
#define UART_DLAB_MCR_OUT1_Msk                (_UINT8_(0x1) << UART_DLAB_MCR_OUT1_Pos)             /* (UART_DLAB_MCR) OUT1 This bit controls the Output 1 (OUT1) bit. Mask */
#define UART_DLAB_MCR_OUT1(value)             (UART_DLAB_MCR_OUT1_Msk & (_UINT8_(value) << UART_DLAB_MCR_OUT1_Pos)) /* Assigment of value for OUT1 in the UART_DLAB_MCR register */
#define UART_DLAB_MCR_OUT2_Pos                _UINT8_(3)                                           /* (UART_DLAB_MCR) OUT2  This bit is used to enable an UART interrupt. Position */
#define UART_DLAB_MCR_OUT2_Msk                (_UINT8_(0x1) << UART_DLAB_MCR_OUT2_Pos)             /* (UART_DLAB_MCR) OUT2  This bit is used to enable an UART interrupt. Mask */
#define UART_DLAB_MCR_OUT2(value)             (UART_DLAB_MCR_OUT2_Msk & (_UINT8_(value) << UART_DLAB_MCR_OUT2_Pos)) /* Assigment of value for OUT2 in the UART_DLAB_MCR register */
#define UART_DLAB_MCR_LOOPBACK_Pos            _UINT8_(4)                                           /* (UART_DLAB_MCR) LOOPBACK  This bit provides the loopback feature for diagnostic testing of the Serial Port. Position */
#define UART_DLAB_MCR_LOOPBACK_Msk            (_UINT8_(0x1) << UART_DLAB_MCR_LOOPBACK_Pos)         /* (UART_DLAB_MCR) LOOPBACK  This bit provides the loopback feature for diagnostic testing of the Serial Port. Mask */
#define UART_DLAB_MCR_LOOPBACK(value)         (UART_DLAB_MCR_LOOPBACK_Msk & (_UINT8_(value) << UART_DLAB_MCR_LOOPBACK_Pos)) /* Assigment of value for LOOPBACK in the UART_DLAB_MCR register */
#define UART_DLAB_MCR_Msk                     _UINT8_(0x1F)                                        /* (UART_DLAB_MCR) Register Mask  */

#define UART_DLAB_MCR_OUT_Pos                 _UINT8_(2)                                           /* (UART_DLAB_MCR Position) OUTx This bit controls the Output x (OUTx) bit. */
#define UART_DLAB_MCR_OUT_Msk                 (_UINT8_(0x3) << UART_DLAB_MCR_OUT_Pos)              /* (UART_DLAB_MCR Mask) OUT */
#define UART_DLAB_MCR_OUT(value)              (UART_DLAB_MCR_OUT_Msk & (_UINT8_(value) << UART_DLAB_MCR_OUT_Pos)) 

/* -------- UART_DATA_MCR : (UART Offset: 0x04) (R/W 8) UART Modem Control Register -------- */
#define UART_DATA_MCR_RESETVALUE              _UINT8_(0x00)                                        /*  (UART_DATA_MCR) UART Modem Control Register  Reset Value */

#define UART_DATA_MCR_DTR_Pos                 _UINT8_(0)                                           /* (UART_DATA_MCR) DTR  This bit controls the Data Terminal Ready (nDTR) output. Position */
#define UART_DATA_MCR_DTR_Msk                 (_UINT8_(0x1) << UART_DATA_MCR_DTR_Pos)              /* (UART_DATA_MCR) DTR  This bit controls the Data Terminal Ready (nDTR) output. Mask */
#define UART_DATA_MCR_DTR(value)              (UART_DATA_MCR_DTR_Msk & (_UINT8_(value) << UART_DATA_MCR_DTR_Pos)) /* Assigment of value for DTR in the UART_DATA_MCR register */
#define UART_DATA_MCR_RTS_Pos                 _UINT8_(1)                                           /* (UART_DATA_MCR) RTS  This bit controls the Request To Send (nRTS) output. Position */
#define UART_DATA_MCR_RTS_Msk                 (_UINT8_(0x1) << UART_DATA_MCR_RTS_Pos)              /* (UART_DATA_MCR) RTS  This bit controls the Request To Send (nRTS) output. Mask */
#define UART_DATA_MCR_RTS(value)              (UART_DATA_MCR_RTS_Msk & (_UINT8_(value) << UART_DATA_MCR_RTS_Pos)) /* Assigment of value for RTS in the UART_DATA_MCR register */
#define UART_DATA_MCR_OUT1_Pos                _UINT8_(2)                                           /* (UART_DATA_MCR) OUT1 This bit controls the Output 1 (OUT1) bit. Position */
#define UART_DATA_MCR_OUT1_Msk                (_UINT8_(0x1) << UART_DATA_MCR_OUT1_Pos)             /* (UART_DATA_MCR) OUT1 This bit controls the Output 1 (OUT1) bit. Mask */
#define UART_DATA_MCR_OUT1(value)             (UART_DATA_MCR_OUT1_Msk & (_UINT8_(value) << UART_DATA_MCR_OUT1_Pos)) /* Assigment of value for OUT1 in the UART_DATA_MCR register */
#define UART_DATA_MCR_OUT2_Pos                _UINT8_(3)                                           /* (UART_DATA_MCR) OUT2  This bit is used to enable an UART interrupt. Position */
#define UART_DATA_MCR_OUT2_Msk                (_UINT8_(0x1) << UART_DATA_MCR_OUT2_Pos)             /* (UART_DATA_MCR) OUT2  This bit is used to enable an UART interrupt. Mask */
#define UART_DATA_MCR_OUT2(value)             (UART_DATA_MCR_OUT2_Msk & (_UINT8_(value) << UART_DATA_MCR_OUT2_Pos)) /* Assigment of value for OUT2 in the UART_DATA_MCR register */
#define UART_DATA_MCR_LOOPBACK_Pos            _UINT8_(4)                                           /* (UART_DATA_MCR) LOOPBACK  This bit provides the loopback feature for diagnostic testing of the Serial Port. Position */
#define UART_DATA_MCR_LOOPBACK_Msk            (_UINT8_(0x1) << UART_DATA_MCR_LOOPBACK_Pos)         /* (UART_DATA_MCR) LOOPBACK  This bit provides the loopback feature for diagnostic testing of the Serial Port. Mask */
#define UART_DATA_MCR_LOOPBACK(value)         (UART_DATA_MCR_LOOPBACK_Msk & (_UINT8_(value) << UART_DATA_MCR_LOOPBACK_Pos)) /* Assigment of value for LOOPBACK in the UART_DATA_MCR register */
#define UART_DATA_MCR_Msk                     _UINT8_(0x1F)                                        /* (UART_DATA_MCR) Register Mask  */

#define UART_DATA_MCR_OUT_Pos                 _UINT8_(2)                                           /* (UART_DATA_MCR Position) OUTx This bit controls the Output x (OUTx) bit. */
#define UART_DATA_MCR_OUT_Msk                 (_UINT8_(0x3) << UART_DATA_MCR_OUT_Pos)              /* (UART_DATA_MCR Mask) OUT */
#define UART_DATA_MCR_OUT(value)              (UART_DATA_MCR_OUT_Msk & (_UINT8_(value) << UART_DATA_MCR_OUT_Pos)) 

/* -------- UART_DLAB_LSR : (UART Offset: 0x05) ( R/ 8) UART Line Status Register -------- */
#define UART_DLAB_LSR_RESETVALUE              _UINT8_(0x00)                                        /*  (UART_DLAB_LSR) UART Line Status Register  Reset Value */

#define UART_DLAB_LSR_DATA_READY_Pos          _UINT8_(0)                                           /* (UART_DLAB_LSR) DATA_READY  Data Ready. It is set to a logic '1' whenever a complete incoming character has been received and transferred into the Receiver Buffer Register or the FIFO Position */
#define UART_DLAB_LSR_DATA_READY_Msk          (_UINT8_(0x1) << UART_DLAB_LSR_DATA_READY_Pos)       /* (UART_DLAB_LSR) DATA_READY  Data Ready. It is set to a logic '1' whenever a complete incoming character has been received and transferred into the Receiver Buffer Register or the FIFO Mask */
#define UART_DLAB_LSR_DATA_READY(value)       (UART_DLAB_LSR_DATA_READY_Msk & (_UINT8_(value) << UART_DLAB_LSR_DATA_READY_Pos)) /* Assigment of value for DATA_READY in the UART_DLAB_LSR register */
#define UART_DLAB_LSR_OVERRUN_Pos             _UINT8_(1)                                           /* (UART_DLAB_LSR) OVERRUN  Overrun Error. Position */
#define UART_DLAB_LSR_OVERRUN_Msk             (_UINT8_(0x1) << UART_DLAB_LSR_OVERRUN_Pos)          /* (UART_DLAB_LSR) OVERRUN  Overrun Error. Mask */
#define UART_DLAB_LSR_OVERRUN(value)          (UART_DLAB_LSR_OVERRUN_Msk & (_UINT8_(value) << UART_DLAB_LSR_OVERRUN_Pos)) /* Assigment of value for OVERRUN in the UART_DLAB_LSR register */
#define UART_DLAB_LSR_PE_Pos                  _UINT8_(2)                                           /* (UART_DLAB_LSR) PARITY ERROR  Parity Error. Position */
#define UART_DLAB_LSR_PE_Msk                  (_UINT8_(0x1) << UART_DLAB_LSR_PE_Pos)               /* (UART_DLAB_LSR) PARITY ERROR  Parity Error. Mask */
#define UART_DLAB_LSR_PE(value)               (UART_DLAB_LSR_PE_Msk & (_UINT8_(value) << UART_DLAB_LSR_PE_Pos)) /* Assigment of value for PE in the UART_DLAB_LSR register */
#define UART_DLAB_LSR_FRAME_ERR_Pos           _UINT8_(3)                                           /* (UART_DLAB_LSR) FRAME_ERROR Framing Error. Position */
#define UART_DLAB_LSR_FRAME_ERR_Msk           (_UINT8_(0x1) << UART_DLAB_LSR_FRAME_ERR_Pos)        /* (UART_DLAB_LSR) FRAME_ERROR Framing Error. Mask */
#define UART_DLAB_LSR_FRAME_ERR(value)        (UART_DLAB_LSR_FRAME_ERR_Msk & (_UINT8_(value) << UART_DLAB_LSR_FRAME_ERR_Pos)) /* Assigment of value for FRAME_ERR in the UART_DLAB_LSR register */
#define UART_DLAB_LSR_BRK_INTR_Pos            _UINT8_(4)                                           /* (UART_DLAB_LSR) BREAK_INTERRUPT   Break Interrupt. Position */
#define UART_DLAB_LSR_BRK_INTR_Msk            (_UINT8_(0x1) << UART_DLAB_LSR_BRK_INTR_Pos)         /* (UART_DLAB_LSR) BREAK_INTERRUPT   Break Interrupt. Mask */
#define UART_DLAB_LSR_BRK_INTR(value)         (UART_DLAB_LSR_BRK_INTR_Msk & (_UINT8_(value) << UART_DLAB_LSR_BRK_INTR_Pos)) /* Assigment of value for BRK_INTR in the UART_DLAB_LSR register */
#define UART_DLAB_LSR_TRANS_EMPTY_Pos         _UINT8_(5)                                           /* (UART_DLAB_LSR) TRANSMIT_EMPTY  Transmitter Holding Register Empty Bit 5 indicates that the Serial Port is ready to accept a new character for transmission. Position */
#define UART_DLAB_LSR_TRANS_EMPTY_Msk         (_UINT8_(0x1) << UART_DLAB_LSR_TRANS_EMPTY_Pos)      /* (UART_DLAB_LSR) TRANSMIT_EMPTY  Transmitter Holding Register Empty Bit 5 indicates that the Serial Port is ready to accept a new character for transmission. Mask */
#define UART_DLAB_LSR_TRANS_EMPTY(value)      (UART_DLAB_LSR_TRANS_EMPTY_Msk & (_UINT8_(value) << UART_DLAB_LSR_TRANS_EMPTY_Pos)) /* Assigment of value for TRANS_EMPTY in the UART_DLAB_LSR register */
#define UART_DLAB_LSR_TRANS_ERR_Pos           _UINT8_(6)                                           /* (UART_DLAB_LSR) Transmitter Empty. Bit 6 is set to a logic '1' whenever the Transmitter Holding Register (THR) and Transmitter Shift Register (TSR) are both empty. Position */
#define UART_DLAB_LSR_TRANS_ERR_Msk           (_UINT8_(0x1) << UART_DLAB_LSR_TRANS_ERR_Pos)        /* (UART_DLAB_LSR) Transmitter Empty. Bit 6 is set to a logic '1' whenever the Transmitter Holding Register (THR) and Transmitter Shift Register (TSR) are both empty. Mask */
#define UART_DLAB_LSR_TRANS_ERR(value)        (UART_DLAB_LSR_TRANS_ERR_Msk & (_UINT8_(value) << UART_DLAB_LSR_TRANS_ERR_Pos)) /* Assigment of value for TRANS_ERR in the UART_DLAB_LSR register */
#define UART_DLAB_LSR_FIFO_ERR_Pos            _UINT8_(7)                                           /* (UART_DLAB_LSR) FIFO_ERROR Position */
#define UART_DLAB_LSR_FIFO_ERR_Msk            (_UINT8_(0x1) << UART_DLAB_LSR_FIFO_ERR_Pos)         /* (UART_DLAB_LSR) FIFO_ERROR Mask */
#define UART_DLAB_LSR_FIFO_ERR(value)         (UART_DLAB_LSR_FIFO_ERR_Msk & (_UINT8_(value) << UART_DLAB_LSR_FIFO_ERR_Pos)) /* Assigment of value for FIFO_ERR in the UART_DLAB_LSR register */
#define UART_DLAB_LSR_Msk                     _UINT8_(0xFF)                                        /* (UART_DLAB_LSR) Register Mask  */


/* -------- UART_DATA_LSR : (UART Offset: 0x05) ( R/ 8) UART Line Status Register -------- */
#define UART_DATA_LSR_RESETVALUE              _UINT8_(0x00)                                        /*  (UART_DATA_LSR) UART Line Status Register  Reset Value */

#define UART_DATA_LSR_DATA_READY_Pos          _UINT8_(0)                                           /* (UART_DATA_LSR) DATA_READY  Data Ready. It is set to a logic '1' whenever a complete incoming character has been received and transferred into the Receiver Buffer Register or the FIFO Position */
#define UART_DATA_LSR_DATA_READY_Msk          (_UINT8_(0x1) << UART_DATA_LSR_DATA_READY_Pos)       /* (UART_DATA_LSR) DATA_READY  Data Ready. It is set to a logic '1' whenever a complete incoming character has been received and transferred into the Receiver Buffer Register or the FIFO Mask */
#define UART_DATA_LSR_DATA_READY(value)       (UART_DATA_LSR_DATA_READY_Msk & (_UINT8_(value) << UART_DATA_LSR_DATA_READY_Pos)) /* Assigment of value for DATA_READY in the UART_DATA_LSR register */
#define UART_DATA_LSR_OVERRUN_Pos             _UINT8_(1)                                           /* (UART_DATA_LSR) OVERRUN  Overrun Error. Position */
#define UART_DATA_LSR_OVERRUN_Msk             (_UINT8_(0x1) << UART_DATA_LSR_OVERRUN_Pos)          /* (UART_DATA_LSR) OVERRUN  Overrun Error. Mask */
#define UART_DATA_LSR_OVERRUN(value)          (UART_DATA_LSR_OVERRUN_Msk & (_UINT8_(value) << UART_DATA_LSR_OVERRUN_Pos)) /* Assigment of value for OVERRUN in the UART_DATA_LSR register */
#define UART_DATA_LSR_PE_Pos                  _UINT8_(2)                                           /* (UART_DATA_LSR) PARITY ERROR  Parity Error. Position */
#define UART_DATA_LSR_PE_Msk                  (_UINT8_(0x1) << UART_DATA_LSR_PE_Pos)               /* (UART_DATA_LSR) PARITY ERROR  Parity Error. Mask */
#define UART_DATA_LSR_PE(value)               (UART_DATA_LSR_PE_Msk & (_UINT8_(value) << UART_DATA_LSR_PE_Pos)) /* Assigment of value for PE in the UART_DATA_LSR register */
#define UART_DATA_LSR_FRAME_ERR_Pos           _UINT8_(3)                                           /* (UART_DATA_LSR) FRAME_ERROR Framing Error. Position */
#define UART_DATA_LSR_FRAME_ERR_Msk           (_UINT8_(0x1) << UART_DATA_LSR_FRAME_ERR_Pos)        /* (UART_DATA_LSR) FRAME_ERROR Framing Error. Mask */
#define UART_DATA_LSR_FRAME_ERR(value)        (UART_DATA_LSR_FRAME_ERR_Msk & (_UINT8_(value) << UART_DATA_LSR_FRAME_ERR_Pos)) /* Assigment of value for FRAME_ERR in the UART_DATA_LSR register */
#define UART_DATA_LSR_BRK_INTR_Pos            _UINT8_(4)                                           /* (UART_DATA_LSR) BREAK_INTERRUPT   Break Interrupt. Position */
#define UART_DATA_LSR_BRK_INTR_Msk            (_UINT8_(0x1) << UART_DATA_LSR_BRK_INTR_Pos)         /* (UART_DATA_LSR) BREAK_INTERRUPT   Break Interrupt. Mask */
#define UART_DATA_LSR_BRK_INTR(value)         (UART_DATA_LSR_BRK_INTR_Msk & (_UINT8_(value) << UART_DATA_LSR_BRK_INTR_Pos)) /* Assigment of value for BRK_INTR in the UART_DATA_LSR register */
#define UART_DATA_LSR_TRANS_EMPTY_Pos         _UINT8_(5)                                           /* (UART_DATA_LSR) TRANSMIT_EMPTY  Transmitter Holding Register Empty Bit 5 indicates that the Serial Port is ready to accept a new character for transmission. Position */
#define UART_DATA_LSR_TRANS_EMPTY_Msk         (_UINT8_(0x1) << UART_DATA_LSR_TRANS_EMPTY_Pos)      /* (UART_DATA_LSR) TRANSMIT_EMPTY  Transmitter Holding Register Empty Bit 5 indicates that the Serial Port is ready to accept a new character for transmission. Mask */
#define UART_DATA_LSR_TRANS_EMPTY(value)      (UART_DATA_LSR_TRANS_EMPTY_Msk & (_UINT8_(value) << UART_DATA_LSR_TRANS_EMPTY_Pos)) /* Assigment of value for TRANS_EMPTY in the UART_DATA_LSR register */
#define UART_DATA_LSR_TRANS_ERR_Pos           _UINT8_(6)                                           /* (UART_DATA_LSR) Transmitter Empty. Bit 6 is set to a logic '1' whenever the Transmitter Holding Register (THR) and Transmitter Shift Register (TSR) are both empty. Position */
#define UART_DATA_LSR_TRANS_ERR_Msk           (_UINT8_(0x1) << UART_DATA_LSR_TRANS_ERR_Pos)        /* (UART_DATA_LSR) Transmitter Empty. Bit 6 is set to a logic '1' whenever the Transmitter Holding Register (THR) and Transmitter Shift Register (TSR) are both empty. Mask */
#define UART_DATA_LSR_TRANS_ERR(value)        (UART_DATA_LSR_TRANS_ERR_Msk & (_UINT8_(value) << UART_DATA_LSR_TRANS_ERR_Pos)) /* Assigment of value for TRANS_ERR in the UART_DATA_LSR register */
#define UART_DATA_LSR_FIFO_ERR_Pos            _UINT8_(7)                                           /* (UART_DATA_LSR) FIFO_ERROR Position */
#define UART_DATA_LSR_FIFO_ERR_Msk            (_UINT8_(0x1) << UART_DATA_LSR_FIFO_ERR_Pos)         /* (UART_DATA_LSR) FIFO_ERROR Mask */
#define UART_DATA_LSR_FIFO_ERR(value)         (UART_DATA_LSR_FIFO_ERR_Msk & (_UINT8_(value) << UART_DATA_LSR_FIFO_ERR_Pos)) /* Assigment of value for FIFO_ERR in the UART_DATA_LSR register */
#define UART_DATA_LSR_Msk                     _UINT8_(0xFF)                                        /* (UART_DATA_LSR) Register Mask  */


/* -------- UART_DLAB_MSR : (UART Offset: 0x06) ( R/ 8) UART Modem Status Register -------- */
#define UART_DLAB_MSR_RESETVALUE              _UINT8_(0x00)                                        /*  (UART_DLAB_MSR) UART Modem Status Register  Reset Value */

#define UART_DLAB_MSR_CTS_Pos                 _UINT8_(0)                                           /* (UART_DLAB_MSR) CTS  Delta Clear To Send (DCTS). Position */
#define UART_DLAB_MSR_CTS_Msk                 (_UINT8_(0x1) << UART_DLAB_MSR_CTS_Pos)              /* (UART_DLAB_MSR) CTS  Delta Clear To Send (DCTS). Mask */
#define UART_DLAB_MSR_CTS(value)              (UART_DLAB_MSR_CTS_Msk & (_UINT8_(value) << UART_DLAB_MSR_CTS_Pos)) /* Assigment of value for CTS in the UART_DLAB_MSR register */
#define UART_DLAB_MSR_DSR_Pos                 _UINT8_(1)                                           /* (UART_DLAB_MSR) DSR  Delta Data Set Ready (DDSR). Position */
#define UART_DLAB_MSR_DSR_Msk                 (_UINT8_(0x1) << UART_DLAB_MSR_DSR_Pos)              /* (UART_DLAB_MSR) DSR  Delta Data Set Ready (DDSR). Mask */
#define UART_DLAB_MSR_DSR(value)              (UART_DLAB_MSR_DSR_Msk & (_UINT8_(value) << UART_DLAB_MSR_DSR_Pos)) /* Assigment of value for DSR in the UART_DLAB_MSR register */
#define UART_DLAB_MSR_RI_Pos                  _UINT8_(2)                                           /* (UART_DLAB_MSR) RI  Trailing Edge of Ring Indicator (TERI). Position */
#define UART_DLAB_MSR_RI_Msk                  (_UINT8_(0x1) << UART_DLAB_MSR_RI_Pos)               /* (UART_DLAB_MSR) RI  Trailing Edge of Ring Indicator (TERI). Mask */
#define UART_DLAB_MSR_RI(value)               (UART_DLAB_MSR_RI_Msk & (_UINT8_(value) << UART_DLAB_MSR_RI_Pos)) /* Assigment of value for RI in the UART_DLAB_MSR register */
#define UART_DLAB_MSR_DCD_Pos                 _UINT8_(3)                                           /* (UART_DLAB_MSR) DCD  Delta Data Carrier Detect (DDCD). Position */
#define UART_DLAB_MSR_DCD_Msk                 (_UINT8_(0x1) << UART_DLAB_MSR_DCD_Pos)              /* (UART_DLAB_MSR) DCD  Delta Data Carrier Detect (DDCD). Mask */
#define UART_DLAB_MSR_DCD(value)              (UART_DLAB_MSR_DCD_Msk & (_UINT8_(value) << UART_DLAB_MSR_DCD_Pos)) /* Assigment of value for DCD in the UART_DLAB_MSR register */
#define UART_DLAB_MSR_nCTS_Pos                _UINT8_(4)                                           /* (UART_DLAB_MSR) nCTS  This bit is the complement of the Clear To Send (nCTS) input. Position */
#define UART_DLAB_MSR_nCTS_Msk                (_UINT8_(0x1) << UART_DLAB_MSR_nCTS_Pos)             /* (UART_DLAB_MSR) nCTS  This bit is the complement of the Clear To Send (nCTS) input. Mask */
#define UART_DLAB_MSR_nCTS(value)             (UART_DLAB_MSR_nCTS_Msk & (_UINT8_(value) << UART_DLAB_MSR_nCTS_Pos)) /* Assigment of value for nCTS in the UART_DLAB_MSR register */
#define UART_DLAB_MSR_nDSR_Pos                _UINT8_(5)                                           /* (UART_DLAB_MSR) This bit is the complement of the Data Set Ready (nDSR) input. Position */
#define UART_DLAB_MSR_nDSR_Msk                (_UINT8_(0x1) << UART_DLAB_MSR_nDSR_Pos)             /* (UART_DLAB_MSR) This bit is the complement of the Data Set Ready (nDSR) input. Mask */
#define UART_DLAB_MSR_nDSR(value)             (UART_DLAB_MSR_nDSR_Msk & (_UINT8_(value) << UART_DLAB_MSR_nDSR_Pos)) /* Assigment of value for nDSR in the UART_DLAB_MSR register */
#define UART_DLAB_MSR_nRI_Pos                 _UINT8_(6)                                           /* (UART_DLAB_MSR) nRI This bit is the complement of the Ring Indicator (nRI) input. Position */
#define UART_DLAB_MSR_nRI_Msk                 (_UINT8_(0x1) << UART_DLAB_MSR_nRI_Pos)              /* (UART_DLAB_MSR) nRI This bit is the complement of the Ring Indicator (nRI) input. Mask */
#define UART_DLAB_MSR_nRI(value)              (UART_DLAB_MSR_nRI_Msk & (_UINT8_(value) << UART_DLAB_MSR_nRI_Pos)) /* Assigment of value for nRI in the UART_DLAB_MSR register */
#define UART_DLAB_MSR_nDCD_Pos                _UINT8_(7)                                           /* (UART_DLAB_MSR) nDCD   This bit is the complement of the Data Carrier Detect (nDCD) input. Position */
#define UART_DLAB_MSR_nDCD_Msk                (_UINT8_(0x1) << UART_DLAB_MSR_nDCD_Pos)             /* (UART_DLAB_MSR) nDCD   This bit is the complement of the Data Carrier Detect (nDCD) input. Mask */
#define UART_DLAB_MSR_nDCD(value)             (UART_DLAB_MSR_nDCD_Msk & (_UINT8_(value) << UART_DLAB_MSR_nDCD_Pos)) /* Assigment of value for nDCD in the UART_DLAB_MSR register */
#define UART_DLAB_MSR_Msk                     _UINT8_(0xFF)                                        /* (UART_DLAB_MSR) Register Mask  */


/* -------- UART_DATA_MSR : (UART Offset: 0x06) ( R/ 8) UART Modem Status Register -------- */
#define UART_DATA_MSR_RESETVALUE              _UINT8_(0x00)                                        /*  (UART_DATA_MSR) UART Modem Status Register  Reset Value */

#define UART_DATA_MSR_CTS_Pos                 _UINT8_(0)                                           /* (UART_DATA_MSR) CTS  Delta Clear To Send (DCTS). Position */
#define UART_DATA_MSR_CTS_Msk                 (_UINT8_(0x1) << UART_DATA_MSR_CTS_Pos)              /* (UART_DATA_MSR) CTS  Delta Clear To Send (DCTS). Mask */
#define UART_DATA_MSR_CTS(value)              (UART_DATA_MSR_CTS_Msk & (_UINT8_(value) << UART_DATA_MSR_CTS_Pos)) /* Assigment of value for CTS in the UART_DATA_MSR register */
#define UART_DATA_MSR_DSR_Pos                 _UINT8_(1)                                           /* (UART_DATA_MSR) DSR  Delta Data Set Ready (DDSR). Position */
#define UART_DATA_MSR_DSR_Msk                 (_UINT8_(0x1) << UART_DATA_MSR_DSR_Pos)              /* (UART_DATA_MSR) DSR  Delta Data Set Ready (DDSR). Mask */
#define UART_DATA_MSR_DSR(value)              (UART_DATA_MSR_DSR_Msk & (_UINT8_(value) << UART_DATA_MSR_DSR_Pos)) /* Assigment of value for DSR in the UART_DATA_MSR register */
#define UART_DATA_MSR_RI_Pos                  _UINT8_(2)                                           /* (UART_DATA_MSR) RI  Trailing Edge of Ring Indicator (TERI). Position */
#define UART_DATA_MSR_RI_Msk                  (_UINT8_(0x1) << UART_DATA_MSR_RI_Pos)               /* (UART_DATA_MSR) RI  Trailing Edge of Ring Indicator (TERI). Mask */
#define UART_DATA_MSR_RI(value)               (UART_DATA_MSR_RI_Msk & (_UINT8_(value) << UART_DATA_MSR_RI_Pos)) /* Assigment of value for RI in the UART_DATA_MSR register */
#define UART_DATA_MSR_DCD_Pos                 _UINT8_(3)                                           /* (UART_DATA_MSR) DCD  Delta Data Carrier Detect (DDCD). Position */
#define UART_DATA_MSR_DCD_Msk                 (_UINT8_(0x1) << UART_DATA_MSR_DCD_Pos)              /* (UART_DATA_MSR) DCD  Delta Data Carrier Detect (DDCD). Mask */
#define UART_DATA_MSR_DCD(value)              (UART_DATA_MSR_DCD_Msk & (_UINT8_(value) << UART_DATA_MSR_DCD_Pos)) /* Assigment of value for DCD in the UART_DATA_MSR register */
#define UART_DATA_MSR_nCTS_Pos                _UINT8_(4)                                           /* (UART_DATA_MSR) nCTS  This bit is the complement of the Clear To Send (nCTS) input. Position */
#define UART_DATA_MSR_nCTS_Msk                (_UINT8_(0x1) << UART_DATA_MSR_nCTS_Pos)             /* (UART_DATA_MSR) nCTS  This bit is the complement of the Clear To Send (nCTS) input. Mask */
#define UART_DATA_MSR_nCTS(value)             (UART_DATA_MSR_nCTS_Msk & (_UINT8_(value) << UART_DATA_MSR_nCTS_Pos)) /* Assigment of value for nCTS in the UART_DATA_MSR register */
#define UART_DATA_MSR_nDSR_Pos                _UINT8_(5)                                           /* (UART_DATA_MSR) This bit is the complement of the Data Set Ready (nDSR) input. Position */
#define UART_DATA_MSR_nDSR_Msk                (_UINT8_(0x1) << UART_DATA_MSR_nDSR_Pos)             /* (UART_DATA_MSR) This bit is the complement of the Data Set Ready (nDSR) input. Mask */
#define UART_DATA_MSR_nDSR(value)             (UART_DATA_MSR_nDSR_Msk & (_UINT8_(value) << UART_DATA_MSR_nDSR_Pos)) /* Assigment of value for nDSR in the UART_DATA_MSR register */
#define UART_DATA_MSR_nRI_Pos                 _UINT8_(6)                                           /* (UART_DATA_MSR) nRI This bit is the complement of the Ring Indicator (nRI) input. Position */
#define UART_DATA_MSR_nRI_Msk                 (_UINT8_(0x1) << UART_DATA_MSR_nRI_Pos)              /* (UART_DATA_MSR) nRI This bit is the complement of the Ring Indicator (nRI) input. Mask */
#define UART_DATA_MSR_nRI(value)              (UART_DATA_MSR_nRI_Msk & (_UINT8_(value) << UART_DATA_MSR_nRI_Pos)) /* Assigment of value for nRI in the UART_DATA_MSR register */
#define UART_DATA_MSR_nDCD_Pos                _UINT8_(7)                                           /* (UART_DATA_MSR) nDCD   This bit is the complement of the Data Carrier Detect (nDCD) input. Position */
#define UART_DATA_MSR_nDCD_Msk                (_UINT8_(0x1) << UART_DATA_MSR_nDCD_Pos)             /* (UART_DATA_MSR) nDCD   This bit is the complement of the Data Carrier Detect (nDCD) input. Mask */
#define UART_DATA_MSR_nDCD(value)             (UART_DATA_MSR_nDCD_Msk & (_UINT8_(value) << UART_DATA_MSR_nDCD_Pos)) /* Assigment of value for nDCD in the UART_DATA_MSR register */
#define UART_DATA_MSR_Msk                     _UINT8_(0xFF)                                        /* (UART_DATA_MSR) Register Mask  */


/* -------- UART_DLAB_SCR : (UART Offset: 0x07) (R/W 8) UART Scratchpad Register    This 8 bit read/write register has no effect on the operation of the Serial Port. It is intended as a scratchpad register to be used by the programmer to hold data temporarily. -------- */
#define UART_DLAB_SCR_RESETVALUE              _UINT8_(0x00)                                        /*  (UART_DLAB_SCR) UART Scratchpad Register    This 8 bit read/write register has no effect on the operation of the Serial Port. It is intended as a scratchpad register to be used by the programmer to hold data temporarily.  Reset Value */

#define UART_DLAB_SCR_Msk                     _UINT8_(0x00)                                        /* (UART_DLAB_SCR) Register Mask  */


/* -------- UART_DATA_SCR : (UART Offset: 0x07) (R/W 8) UART Scratchpad Register    This 8 bit read/write register has no effect on the operation of the Serial Port. It is intended as a scratchpad register to be used by the programmer to hold data temporarily. -------- */
#define UART_DATA_SCR_RESETVALUE              _UINT8_(0x00)                                        /*  (UART_DATA_SCR) UART Scratchpad Register    This 8 bit read/write register has no effect on the operation of the Serial Port. It is intended as a scratchpad register to be used by the programmer to hold data temporarily.  Reset Value */

#define UART_DATA_SCR_Msk                     _UINT8_(0x00)                                        /* (UART_DATA_SCR) Register Mask  */


/* -------- UART_DLAB_ACTIVATE : (UART Offset: 0x330) (R/W 8) UART Activate Register. [0:0] ACTIVATE When this bit is 1, the UART logical device is powered and functional. When this bit is 0, the UART logical device is powered down and inactive. -------- */
#define UART_DLAB_ACTIVATE_RESETVALUE         _UINT8_(0x00)                                        /*  (UART_DLAB_ACTIVATE) UART Activate Register. [0:0] ACTIVATE When this bit is 1, the UART logical device is powered and functional. When this bit is 0, the UART logical device is powered down and inactive.  Reset Value */

#define UART_DLAB_ACTIVATE_Msk                _UINT8_(0x00)                                        /* (UART_DLAB_ACTIVATE) Register Mask  */


/* -------- UART_DATA_ACTIVATE : (UART Offset: 0x330) (R/W 8) UART Activate Register. [0:0] ACTIVATE When this bit is 1, the UART logical device is powered and functional. When this bit is 0, the UART logical device is powered down and inactive. -------- */
#define UART_DATA_ACTIVATE_RESETVALUE         _UINT8_(0x00)                                        /*  (UART_DATA_ACTIVATE) UART Activate Register. [0:0] ACTIVATE When this bit is 1, the UART logical device is powered and functional. When this bit is 0, the UART logical device is powered down and inactive.  Reset Value */

#define UART_DATA_ACTIVATE_Msk                _UINT8_(0x00)                                        /* (UART_DATA_ACTIVATE) Register Mask  */


/* -------- UART_DLAB_CFG_SEL : (UART Offset: 0x3F0) (R/W 8) UART Config Select Register -------- */
#define UART_DLAB_CFG_SEL_RESETVALUE          _UINT8_(0x00)                                        /*  (UART_DLAB_CFG_SEL) UART Config Select Register  Reset Value */

#define UART_DLAB_CFG_SEL_CLK_SRC_Pos         _UINT8_(0)                                           /* (UART_DLAB_CFG_SEL) CLK_SRC  1=The UART Baud Clock is derived from an external clock source, 0=The UART Baud Clock is derived from one of the two internal clock sources Position */
#define UART_DLAB_CFG_SEL_CLK_SRC_Msk         (_UINT8_(0x1) << UART_DLAB_CFG_SEL_CLK_SRC_Pos)      /* (UART_DLAB_CFG_SEL) CLK_SRC  1=The UART Baud Clock is derived from an external clock source, 0=The UART Baud Clock is derived from one of the two internal clock sources Mask */
#define UART_DLAB_CFG_SEL_CLK_SRC(value)      (UART_DLAB_CFG_SEL_CLK_SRC_Msk & (_UINT8_(value) << UART_DLAB_CFG_SEL_CLK_SRC_Pos)) /* Assigment of value for CLK_SRC in the UART_DLAB_CFG_SEL register */
#define   UART_DLAB_CFG_SEL_CLK_SRC_INTERNAL_Val _UINT8_(0x0)                                         /* (UART_DLAB_CFG_SEL) Baud Clock is derived from one of the two internal clock sources  */
#define   UART_DLAB_CFG_SEL_CLK_SRC_EXTERNAL_Val _UINT8_(0x1)                                         /* (UART_DLAB_CFG_SEL) Baud Clock is derived from an external clock source  */
#define UART_DLAB_CFG_SEL_CLK_SRC_INTERNAL    (UART_DLAB_CFG_SEL_CLK_SRC_INTERNAL_Val << UART_DLAB_CFG_SEL_CLK_SRC_Pos) /* (UART_DLAB_CFG_SEL) Baud Clock is derived from one of the two internal clock sources Position  */
#define UART_DLAB_CFG_SEL_CLK_SRC_EXTERNAL    (UART_DLAB_CFG_SEL_CLK_SRC_EXTERNAL_Val << UART_DLAB_CFG_SEL_CLK_SRC_Pos) /* (UART_DLAB_CFG_SEL) Baud Clock is derived from an external clock source Position  */
#define UART_DLAB_CFG_SEL_PWR_Pos             _UINT8_(1)                                           /* (UART_DLAB_CFG_SEL) POWER  1=The RESET reset signal is derived from nSIO_RESET, 0=The RESET reset signal is derived from VCC1_RESET Position */
#define UART_DLAB_CFG_SEL_PWR_Msk             (_UINT8_(0x1) << UART_DLAB_CFG_SEL_PWR_Pos)          /* (UART_DLAB_CFG_SEL) POWER  1=The RESET reset signal is derived from nSIO_RESET, 0=The RESET reset signal is derived from VCC1_RESET Mask */
#define UART_DLAB_CFG_SEL_PWR(value)          (UART_DLAB_CFG_SEL_PWR_Msk & (_UINT8_(value) << UART_DLAB_CFG_SEL_PWR_Pos)) /* Assigment of value for PWR in the UART_DLAB_CFG_SEL register */
#define UART_DLAB_CFG_SEL_POLAR_Pos           _UINT8_(2)                                           /* (UART_DLAB_CFG_SEL) POLARITY  1=The UART_TX and UART_RX pins functions are inverted, 0=The UART_TX and UART_RX pins functions are not inverted Position */
#define UART_DLAB_CFG_SEL_POLAR_Msk           (_UINT8_(0x1) << UART_DLAB_CFG_SEL_POLAR_Pos)        /* (UART_DLAB_CFG_SEL) POLARITY  1=The UART_TX and UART_RX pins functions are inverted, 0=The UART_TX and UART_RX pins functions are not inverted Mask */
#define UART_DLAB_CFG_SEL_POLAR(value)        (UART_DLAB_CFG_SEL_POLAR_Msk & (_UINT8_(value) << UART_DLAB_CFG_SEL_POLAR_Pos)) /* Assigment of value for POLAR in the UART_DLAB_CFG_SEL register */
#define UART_DLAB_CFG_SEL_Msk                 _UINT8_(0x07)                                        /* (UART_DLAB_CFG_SEL) Register Mask  */


/* -------- UART_DATA_CFG_SEL : (UART Offset: 0x3F0) (R/W 8) UART Config Select Register -------- */
#define UART_DATA_CFG_SEL_RESETVALUE          _UINT8_(0x00)                                        /*  (UART_DATA_CFG_SEL) UART Config Select Register  Reset Value */

#define UART_DATA_CFG_SEL_CLK_SRC_Pos         _UINT8_(0)                                           /* (UART_DATA_CFG_SEL) CLK_SRC  1=The UART Baud Clock is derived from an external clock source, 0=The UART Baud Clock is derived from one of the two internal clock sources Position */
#define UART_DATA_CFG_SEL_CLK_SRC_Msk         (_UINT8_(0x1) << UART_DATA_CFG_SEL_CLK_SRC_Pos)      /* (UART_DATA_CFG_SEL) CLK_SRC  1=The UART Baud Clock is derived from an external clock source, 0=The UART Baud Clock is derived from one of the two internal clock sources Mask */
#define UART_DATA_CFG_SEL_CLK_SRC(value)      (UART_DATA_CFG_SEL_CLK_SRC_Msk & (_UINT8_(value) << UART_DATA_CFG_SEL_CLK_SRC_Pos)) /* Assigment of value for CLK_SRC in the UART_DATA_CFG_SEL register */
#define   UART_DATA_CFG_SEL_CLK_SRC_INTERNAL_Val _UINT8_(0x0)                                         /* (UART_DATA_CFG_SEL) Baud Clock is derived from one of the two internal clock sources  */
#define   UART_DATA_CFG_SEL_CLK_SRC_EXTERNAL_Val _UINT8_(0x1)                                         /* (UART_DATA_CFG_SEL) Baud Clock is derived from an external clock source  */
#define UART_DATA_CFG_SEL_CLK_SRC_INTERNAL    (UART_DATA_CFG_SEL_CLK_SRC_INTERNAL_Val << UART_DATA_CFG_SEL_CLK_SRC_Pos) /* (UART_DATA_CFG_SEL) Baud Clock is derived from one of the two internal clock sources Position  */
#define UART_DATA_CFG_SEL_CLK_SRC_EXTERNAL    (UART_DATA_CFG_SEL_CLK_SRC_EXTERNAL_Val << UART_DATA_CFG_SEL_CLK_SRC_Pos) /* (UART_DATA_CFG_SEL) Baud Clock is derived from an external clock source Position  */
#define UART_DATA_CFG_SEL_PWR_Pos             _UINT8_(1)                                           /* (UART_DATA_CFG_SEL) POWER  1=The RESET reset signal is derived from nSIO_RESET, 0=The RESET reset signal is derived from VCC1_RESET Position */
#define UART_DATA_CFG_SEL_PWR_Msk             (_UINT8_(0x1) << UART_DATA_CFG_SEL_PWR_Pos)          /* (UART_DATA_CFG_SEL) POWER  1=The RESET reset signal is derived from nSIO_RESET, 0=The RESET reset signal is derived from VCC1_RESET Mask */
#define UART_DATA_CFG_SEL_PWR(value)          (UART_DATA_CFG_SEL_PWR_Msk & (_UINT8_(value) << UART_DATA_CFG_SEL_PWR_Pos)) /* Assigment of value for PWR in the UART_DATA_CFG_SEL register */
#define UART_DATA_CFG_SEL_POLAR_Pos           _UINT8_(2)                                           /* (UART_DATA_CFG_SEL) POLARITY  1=The UART_TX and UART_RX pins functions are inverted, 0=The UART_TX and UART_RX pins functions are not inverted Position */
#define UART_DATA_CFG_SEL_POLAR_Msk           (_UINT8_(0x1) << UART_DATA_CFG_SEL_POLAR_Pos)        /* (UART_DATA_CFG_SEL) POLARITY  1=The UART_TX and UART_RX pins functions are inverted, 0=The UART_TX and UART_RX pins functions are not inverted Mask */
#define UART_DATA_CFG_SEL_POLAR(value)        (UART_DATA_CFG_SEL_POLAR_Msk & (_UINT8_(value) << UART_DATA_CFG_SEL_POLAR_Pos)) /* Assigment of value for POLAR in the UART_DATA_CFG_SEL register */
#define UART_DATA_CFG_SEL_Msk                 _UINT8_(0x07)                                        /* (UART_DATA_CFG_SEL) Register Mask  */


/** \brief UART register offsets definitions */
#define UART_DATA_RX_DAT_REG_OFST      _UINT32_(0x00)      /* (UART_DATA_RX_DAT) UART Receive (Read) Buffer Register (DLAB=0) Offset */
#define UART_DATA_TX_DAT_REG_OFST      _UINT32_(0x00)      /* (UART_DATA_TX_DAT) UART Transmit (Write) Buffer Register (DLAB=0) Offset */
#define UART_DLAB_BAUDRT_LSB_REG_OFST  _UINT32_(0x00)      /* (UART_DLAB_BAUDRT_LSB) UART Programmable BAUD Rate Generator (LSB) Register (DLAB=1) Offset */
#define UART_DLAB_BAUDRT_MSB_REG_OFST  _UINT32_(0x01)      /* (UART_DLAB_BAUDRT_MSB) UART Programmable BAUD Rate Generator (MSB) Register (DLAB=1). [6:0] BAUD_RATE_DIVISOR_MSB, [7:7] BAUD_CLK_SEL             1=If CLK_SRC is '0', the baud clock is derived from the 1.8432MHz_Clk. If CLK_SRC is '1', this bit has no effect            0=If CLK_SRC is '0', the baud clock is derived from the 24MHz_Clk. If CLK_SRC is '1', this bit has no effect Offset */
#define UART_DATA_IEN_REG_OFST         _UINT32_(0x01)      /* (UART_DATA_IEN) UART Interrupt Enable Register (DLAB=0) Offset */
#define UART_DLAB_FIFO_CR_REG_OFST     _UINT32_(0x02)      /* (UART_DLAB_FIFO_CR) UART FIFO Control Register Offset */
#define UART_DATA_FIFO_CR_REG_OFST     _UINT32_(0x02)      /* (UART_DATA_FIFO_CR) UART FIFO Control Register Offset */
#define UART_DLAB_INT_ID_REG_OFST      _UINT32_(0x02)      /* (UART_DLAB_INT_ID) UART Interrupt Identification Register Offset */
#define UART_DATA_INT_ID_REG_OFST      _UINT32_(0x02)      /* (UART_DATA_INT_ID) UART Interrupt Identification Register Offset */
#define UART_DLAB_LCR_REG_OFST         _UINT32_(0x03)      /* (UART_DLAB_LCR) UART Line Control Register Offset */
#define UART_DATA_LCR_REG_OFST         _UINT32_(0x03)      /* (UART_DATA_LCR) UART Line Control Register Offset */
#define UART_DLAB_MCR_REG_OFST         _UINT32_(0x04)      /* (UART_DLAB_MCR) UART Modem Control Register Offset */
#define UART_DATA_MCR_REG_OFST         _UINT32_(0x04)      /* (UART_DATA_MCR) UART Modem Control Register Offset */
#define UART_DLAB_LSR_REG_OFST         _UINT32_(0x05)      /* (UART_DLAB_LSR) UART Line Status Register Offset */
#define UART_DATA_LSR_REG_OFST         _UINT32_(0x05)      /* (UART_DATA_LSR) UART Line Status Register Offset */
#define UART_DLAB_MSR_REG_OFST         _UINT32_(0x06)      /* (UART_DLAB_MSR) UART Modem Status Register Offset */
#define UART_DATA_MSR_REG_OFST         _UINT32_(0x06)      /* (UART_DATA_MSR) UART Modem Status Register Offset */
#define UART_DLAB_SCR_REG_OFST         _UINT32_(0x07)      /* (UART_DLAB_SCR) UART Scratchpad Register    This 8 bit read/write register has no effect on the operation of the Serial Port. It is intended as a scratchpad register to be used by the programmer to hold data temporarily. Offset */
#define UART_DATA_SCR_REG_OFST         _UINT32_(0x07)      /* (UART_DATA_SCR) UART Scratchpad Register    This 8 bit read/write register has no effect on the operation of the Serial Port. It is intended as a scratchpad register to be used by the programmer to hold data temporarily. Offset */
#define UART_DLAB_ACTIVATE_REG_OFST    _UINT32_(0x330)     /* (UART_DLAB_ACTIVATE) UART Activate Register. [0:0] ACTIVATE When this bit is 1, the UART logical device is powered and functional. When this bit is 0, the UART logical device is powered down and inactive. Offset */
#define UART_DATA_ACTIVATE_REG_OFST    _UINT32_(0x330)     /* (UART_DATA_ACTIVATE) UART Activate Register. [0:0] ACTIVATE When this bit is 1, the UART logical device is powered and functional. When this bit is 0, the UART logical device is powered down and inactive. Offset */
#define UART_DLAB_CFG_SEL_REG_OFST     _UINT32_(0x3F0)     /* (UART_DLAB_CFG_SEL) UART Config Select Register Offset */
#define UART_DATA_CFG_SEL_REG_OFST     _UINT32_(0x3F0)     /* (UART_DATA_CFG_SEL) UART Config Select Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief UART register API structure */
typedef struct
{  /* The 16550 UART is a full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
  union
  {
      __O   uint8_t                        UART_TX_DAT;        /**< Offset: 0x00 ( /W  8) UART Transmit (Write) Buffer Register (DLAB=0) */
      __I   uint8_t                        UART_RX_DAT;        /**< Offset: 0x00 (R/   8) UART Receive (Read) Buffer Register (DLAB=0) */
  };
  __IO  uint8_t                        UART_IEN;           /**< Offset: 0x01 (R/W  8) UART Interrupt Enable Register (DLAB=0) */
  union
  {
      __I   uint8_t                        UART_INT_ID;        /**< Offset: 0x02 (R/   8) UART Interrupt Identification Register */
      __O   uint8_t                        UART_FIFO_CR;       /**< Offset: 0x02 ( /W  8) UART FIFO Control Register */
  };
  __IO  uint8_t                        UART_LCR;           /**< Offset: 0x03 (R/W  8) UART Line Control Register */
  __IO  uint8_t                        UART_MCR;           /**< Offset: 0x04 (R/W  8) UART Modem Control Register */
  __I   uint8_t                        UART_LSR;           /**< Offset: 0x05 (R/   8) UART Line Status Register */
  __I   uint8_t                        UART_MSR;           /**< Offset: 0x06 (R/   8) UART Modem Status Register */
  __IO  uint8_t                        UART_SCR;           /**< Offset: 0x07 (R/W  8) UART Scratchpad Register    This 8 bit read/write register has no effect on the operation of the Serial Port. It is intended as a scratchpad register to be used by the programmer to hold data temporarily. */
  __I   uint8_t                        Reserved1[0x328];
  __IO  uint8_t                        UART_ACTIVATE;      /**< Offset: 0x330 (R/W  8) UART Activate Register. [0:0] ACTIVATE When this bit is 1, the UART logical device is powered and functional. When this bit is 0, the UART logical device is powered down and inactive. */
  __I   uint8_t                        Reserved2[0xBF];
  __IO  uint8_t                        UART_CFG_SEL;       /**< Offset: 0x3F0 (R/W  8) UART Config Select Register */
} uart_data_registers_t;

/** \brief UART register API structure */
typedef struct
{  /* The 16550 UART is a full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
  __IO  uint8_t                        UART_BAUDRT_LSB;    /**< Offset: 0x00 (R/W  8) UART Programmable BAUD Rate Generator (LSB) Register (DLAB=1) */
  __IO  uint8_t                        UART_BAUDRT_MSB;    /**< Offset: 0x01 (R/W  8) UART Programmable BAUD Rate Generator (MSB) Register (DLAB=1). [6:0] BAUD_RATE_DIVISOR_MSB, [7:7] BAUD_CLK_SEL             1=If CLK_SRC is '0', the baud clock is derived from the 1.8432MHz_Clk. If CLK_SRC is '1', this bit has no effect            0=If CLK_SRC is '0', the baud clock is derived from the 24MHz_Clk. If CLK_SRC is '1', this bit has no effect */
  union
  {
      __I   uint8_t                        UART_INT_ID;        /**< Offset: 0x02 (R/   8) UART Interrupt Identification Register */
      __O   uint8_t                        UART_FIFO_CR;       /**< Offset: 0x02 ( /W  8) UART FIFO Control Register */
  };
  __IO  uint8_t                        UART_LCR;           /**< Offset: 0x03 (R/W  8) UART Line Control Register */
  __IO  uint8_t                        UART_MCR;           /**< Offset: 0x04 (R/W  8) UART Modem Control Register */
  __I   uint8_t                        UART_LSR;           /**< Offset: 0x05 (R/   8) UART Line Status Register */
  __I   uint8_t                        UART_MSR;           /**< Offset: 0x06 (R/   8) UART Modem Status Register */
  __IO  uint8_t                        UART_SCR;           /**< Offset: 0x07 (R/W  8) UART Scratchpad Register    This 8 bit read/write register has no effect on the operation of the Serial Port. It is intended as a scratchpad register to be used by the programmer to hold data temporarily. */
  __I   uint8_t                        Reserved1[0x328];
  __IO  uint8_t                        UART_ACTIVATE;      /**< Offset: 0x330 (R/W  8) UART Activate Register. [0:0] ACTIVATE When this bit is 1, the UART logical device is powered and functional. When this bit is 0, the UART logical device is powered down and inactive. */
  __I   uint8_t                        Reserved2[0xBF];
  __IO  uint8_t                        UART_CFG_SEL;       /**< Offset: 0x3F0 (R/W  8) UART Config Select Register */
} uart_dlab_registers_t;

/** \brief UART hardware registers */
typedef union
{  /* The 16550 UART is a full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
       uart_data_registers_t          DATA;           /**< UART when DLAB=0 */
       uart_dlab_registers_t          DLAB;           /**< UART when DLAB=1 */
} uart_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_UART_COMPONENT_H_ */
