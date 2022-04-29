/*
 * Component description for SPT
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
#ifndef _CEC_SPT_COMPONENT_H_
#define _CEC_SPT_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SPT                                          */
/* ************************************************************************** */

/* -------- SPT_SPI_CFG : (SPT Offset: 0x00) (R/W 32) SPI Peripheral Target Communication Configuration Register. -------- */
#define SPT_SPI_CFG_RESETVALUE                _UINT32_(0x40000)                                    /*  (SPT_SPI_CFG) SPI Peripheral Target Communication Configuration Register.  Reset Value */

#define SPT_SPI_CFG_SNG_QUD_SEL_Pos           _UINT32_(0)                                          /* (SPT_SPI_CFG) This field defines the Single / Quad Wire mode of operation for SPI Peripheral Target block.         0 = Single Wire Slave SPI block operation.         1 = Quad Wire Slave SPI block operation. Position */
#define SPT_SPI_CFG_SNG_QUD_SEL_Msk           (_UINT32_(0x1) << SPT_SPI_CFG_SNG_QUD_SEL_Pos)       /* (SPT_SPI_CFG) This field defines the Single / Quad Wire mode of operation for SPI Peripheral Target block.         0 = Single Wire Slave SPI block operation.         1 = Quad Wire Slave SPI block operation. Mask */
#define SPT_SPI_CFG_SNG_QUD_SEL(value)        (SPT_SPI_CFG_SNG_QUD_SEL_Msk & (_UINT32_(value) << SPT_SPI_CFG_SNG_QUD_SEL_Pos)) /* Assigment of value for SNG_QUD_SEL in the SPT_SPI_CFG register */
#define SPT_SPI_CFG_TAR_TIM_SEL_Pos           _UINT32_(8)                                          /* (SPT_SPI_CFG) Turn Around Time select for Quad wire mode.         0h = 1 cycle.         1h = 2 cycles.         2h = 4 cycles.         3h = 8 cycles.         Other values are reserved. Position */
#define SPT_SPI_CFG_TAR_TIM_SEL_Msk           (_UINT32_(0x7) << SPT_SPI_CFG_TAR_TIM_SEL_Pos)       /* (SPT_SPI_CFG) Turn Around Time select for Quad wire mode.         0h = 1 cycle.         1h = 2 cycles.         2h = 4 cycles.         3h = 8 cycles.         Other values are reserved. Mask */
#define SPT_SPI_CFG_TAR_TIM_SEL(value)        (SPT_SPI_CFG_TAR_TIM_SEL_Msk & (_UINT32_(value) << SPT_SPI_CFG_TAR_TIM_SEL_Pos)) /* Assigment of value for TAR_TIM_SEL in the SPT_SPI_CFG register */
#define SPT_SPI_CFG_WAIT_TIME_Pos             _UINT32_(16)                                         /* (SPT_SPI_CFG) These bits set the amount of wait time in cycles before transmitting data back to master.         During this wait time status bits will be transmitted Position */
#define SPT_SPI_CFG_WAIT_TIME_Msk             (_UINT32_(0xFF) << SPT_SPI_CFG_WAIT_TIME_Pos)        /* (SPT_SPI_CFG) These bits set the amount of wait time in cycles before transmitting data back to master.         During this wait time status bits will be transmitted Mask */
#define SPT_SPI_CFG_WAIT_TIME(value)          (SPT_SPI_CFG_WAIT_TIME_Msk & (_UINT32_(value) << SPT_SPI_CFG_WAIT_TIME_Pos)) /* Assigment of value for WAIT_TIME in the SPT_SPI_CFG register */
#define SPT_SPI_CFG_Msk                       _UINT32_(0x00FF0701)                                 /* (SPT_SPI_CFG) Register Mask  */


/* -------- SPT_SPI_STS : (SPT Offset: 0x04) (R/W 32) SPI Peripheral Target Status Register. -------- */
#define SPT_SPI_STS_RESETVALUE                _UINT32_(0x500)                                      /*  (SPT_SPI_STS) SPI Peripheral Target Status Register.  Reset Value */

#define SPT_SPI_STS_MEM_WR_DONE_Pos           _UINT32_(0)                                          /* (SPT_SPI_STS) When the ARM BUS side has fully finished the last transaction from the FIFO to write the data to         Memory for Posted Writes . Clear with new Write request. Position */
#define SPT_SPI_STS_MEM_WR_DONE_Msk           (_UINT32_(0x1) << SPT_SPI_STS_MEM_WR_DONE_Pos)       /* (SPT_SPI_STS) When the ARM BUS side has fully finished the last transaction from the FIFO to write the data to         Memory for Posted Writes . Clear with new Write request. Mask */
#define SPT_SPI_STS_MEM_WR_DONE(value)        (SPT_SPI_STS_MEM_WR_DONE_Msk & (_UINT32_(value) << SPT_SPI_STS_MEM_WR_DONE_Pos)) /* Assigment of value for MEM_WR_DONE in the SPT_SPI_STS register */
#define SPT_SPI_STS_MEM_RD_DONE_Pos           _UINT32_(1)                                          /* (SPT_SPI_STS) When the ARM BUS side has fully finished writing the last written DWord to the FIFO for a set of data         read from Memory for Posted Reads. - cleared with new Read request. Position */
#define SPT_SPI_STS_MEM_RD_DONE_Msk           (_UINT32_(0x1) << SPT_SPI_STS_MEM_RD_DONE_Pos)       /* (SPT_SPI_STS) When the ARM BUS side has fully finished writing the last written DWord to the FIFO for a set of data         read from Memory for Posted Reads. - cleared with new Read request. Mask */
#define SPT_SPI_STS_MEM_RD_DONE(value)        (SPT_SPI_STS_MEM_RD_DONE_Msk & (_UINT32_(value) << SPT_SPI_STS_MEM_RD_DONE_Pos)) /* Assigment of value for MEM_RD_DONE in the SPT_SPI_STS register */
#define SPT_SPI_STS_MEM_WR_BUSY_Pos           _UINT32_(3)                                          /* (SPT_SPI_STS) When an Memory Write transaction is currently being processed. Position */
#define SPT_SPI_STS_MEM_WR_BUSY_Msk           (_UINT32_(0x1) << SPT_SPI_STS_MEM_WR_BUSY_Pos)       /* (SPT_SPI_STS) When an Memory Write transaction is currently being processed. Mask */
#define SPT_SPI_STS_MEM_WR_BUSY(value)        (SPT_SPI_STS_MEM_WR_BUSY_Msk & (_UINT32_(value) << SPT_SPI_STS_MEM_WR_BUSY_Pos)) /* Assigment of value for MEM_WR_BUSY in the SPT_SPI_STS register */
#define SPT_SPI_STS_MEM_RD_BUSY_Pos           _UINT32_(4)                                          /* (SPT_SPI_STS) When an Memory Read transaction is currently being processed. Position */
#define SPT_SPI_STS_MEM_RD_BUSY_Msk           (_UINT32_(0x1) << SPT_SPI_STS_MEM_RD_BUSY_Pos)       /* (SPT_SPI_STS) When an Memory Read transaction is currently being processed. Mask */
#define SPT_SPI_STS_MEM_RD_BUSY(value)        (SPT_SPI_STS_MEM_RD_BUSY_Msk & (_UINT32_(value) << SPT_SPI_STS_MEM_RD_BUSY_Pos)) /* Assigment of value for MEM_RD_BUSY in the SPT_SPI_STS register */
#define SPT_SPI_STS_SREG_TRANS_Pos            _UINT32_(5)                                          /* (SPT_SPI_STS) When an SREG transaction is currently being processed. Position */
#define SPT_SPI_STS_SREG_TRANS_Msk            (_UINT32_(0x1) << SPT_SPI_STS_SREG_TRANS_Pos)        /* (SPT_SPI_STS) When an SREG transaction is currently being processed. Mask */
#define SPT_SPI_STS_SREG_TRANS(value)         (SPT_SPI_STS_SREG_TRANS_Msk & (_UINT32_(value) << SPT_SPI_STS_SREG_TRANS_Pos)) /* Assigment of value for SREG_TRANS in the SPT_SPI_STS register */
#define SPT_SPI_STS_POLL_HIGH_Pos             _UINT32_(6)                                          /* (SPT_SPI_STS) If this bit is set, then something in the high 16-bit of status register is set and needs to be checked.         SPI Master should take action to clear this. Position */
#define SPT_SPI_STS_POLL_HIGH_Msk             (_UINT32_(0x1) << SPT_SPI_STS_POLL_HIGH_Pos)         /* (SPT_SPI_STS) If this bit is set, then something in the high 16-bit of status register is set and needs to be checked.         SPI Master should take action to clear this. Mask */
#define SPT_SPI_STS_POLL_HIGH(value)          (SPT_SPI_STS_POLL_HIGH_Msk & (_UINT32_(value) << SPT_SPI_STS_POLL_HIGH_Pos)) /* Assigment of value for POLL_HIGH in the SPT_SPI_STS register */
#define SPT_SPI_STS_RXF_EMP_Pos               _UINT32_(8)                                          /* (SPT_SPI_STS) Signifies all Memory write transactions for the SPI Masters requested size have been performed.         New transactions are allowed. Position */
#define SPT_SPI_STS_RXF_EMP_Msk               (_UINT32_(0x1) << SPT_SPI_STS_RXF_EMP_Pos)           /* (SPT_SPI_STS) Signifies all Memory write transactions for the SPI Masters requested size have been performed.         New transactions are allowed. Mask */
#define SPT_SPI_STS_RXF_EMP(value)            (SPT_SPI_STS_RXF_EMP_Msk & (_UINT32_(value) << SPT_SPI_STS_RXF_EMP_Pos)) /* Assigment of value for RXF_EMP in the SPT_SPI_STS register */
#define SPT_SPI_STS_RXF_FUL_Pos               _UINT32_(9)                                          /* (SPT_SPI_STS) The RX FIFO is full of data to be written to Memory. Position */
#define SPT_SPI_STS_RXF_FUL_Msk               (_UINT32_(0x1) << SPT_SPI_STS_RXF_FUL_Pos)           /* (SPT_SPI_STS) The RX FIFO is full of data to be written to Memory. Mask */
#define SPT_SPI_STS_RXF_FUL(value)            (SPT_SPI_STS_RXF_FUL_Msk & (_UINT32_(value) << SPT_SPI_STS_RXF_FUL_Pos)) /* Assigment of value for RXF_FUL in the SPT_SPI_STS register */
#define SPT_SPI_STS_TXF_EMP_Pos               _UINT32_(10)                                         /* (SPT_SPI_STS) Signifies SPI Master has read the data requested from Memory. Can be used to show there is data         the SPI Master has requested and not been read yet. New read transactions will be aligned. Position */
#define SPT_SPI_STS_TXF_EMP_Msk               (_UINT32_(0x1) << SPT_SPI_STS_TXF_EMP_Pos)           /* (SPT_SPI_STS) Signifies SPI Master has read the data requested from Memory. Can be used to show there is data         the SPI Master has requested and not been read yet. New read transactions will be aligned. Mask */
#define SPT_SPI_STS_TXF_EMP(value)            (SPT_SPI_STS_TXF_EMP_Msk & (_UINT32_(value) << SPT_SPI_STS_TXF_EMP_Pos)) /* Assigment of value for TXF_EMP in the SPT_SPI_STS register */
#define SPT_SPI_STS_TXF_FUL_Pos               _UINT32_(11)                                         /* (SPT_SPI_STS) The TX FIFO is full of data that was read from Memory. Position */
#define SPT_SPI_STS_TXF_FUL_Msk               (_UINT32_(0x1) << SPT_SPI_STS_TXF_FUL_Pos)           /* (SPT_SPI_STS) The TX FIFO is full of data that was read from Memory. Mask */
#define SPT_SPI_STS_TXF_FUL(value)            (SPT_SPI_STS_TXF_FUL_Msk & (_UINT32_(value) << SPT_SPI_STS_TXF_FUL_Pos)) /* Assigment of value for TXF_FUL in the SPT_SPI_STS register */
#define SPT_SPI_STS_TMCLK_CNT_ERR_Pos         _UINT32_(13)                                         /* (SPT_SPI_STS) This bit is set when the SPI Clock Count Test Mode is set and there is an uneven amount of clocks. Position */
#define SPT_SPI_STS_TMCLK_CNT_ERR_Msk         (_UINT32_(0x1) << SPT_SPI_STS_TMCLK_CNT_ERR_Pos)     /* (SPT_SPI_STS) This bit is set when the SPI Clock Count Test Mode is set and there is an uneven amount of clocks. Mask */
#define SPT_SPI_STS_TMCLK_CNT_ERR(value)      (SPT_SPI_STS_TMCLK_CNT_ERR_Msk & (_UINT32_(value) << SPT_SPI_STS_TMCLK_CNT_ERR_Pos)) /* Assigment of value for TMCLK_CNT_ERR in the SPT_SPI_STS register */
#define SPT_SPI_STS_IBF_FLG_Pos               _UINT32_(14)                                         /* (SPT_SPI_STS) Set when the Host writes to the Input Buffer signaling there is data for the EC to read. Position */
#define SPT_SPI_STS_IBF_FLG_Msk               (_UINT32_(0x1) << SPT_SPI_STS_IBF_FLG_Pos)           /* (SPT_SPI_STS) Set when the Host writes to the Input Buffer signaling there is data for the EC to read. Mask */
#define SPT_SPI_STS_IBF_FLG(value)            (SPT_SPI_STS_IBF_FLG_Msk & (_UINT32_(value) << SPT_SPI_STS_IBF_FLG_Pos)) /* Assigment of value for IBF_FLG in the SPT_SPI_STS register */
#define SPT_SPI_STS_OBF_FLG_Pos               _UINT32_(15)                                         /* (SPT_SPI_STS) Set when the EC writes to the Output Buffer signaling there is data for the Host to read. Position */
#define SPT_SPI_STS_OBF_FLG_Msk               (_UINT32_(0x1) << SPT_SPI_STS_OBF_FLG_Pos)           /* (SPT_SPI_STS) Set when the EC writes to the Output Buffer signaling there is data for the Host to read. Mask */
#define SPT_SPI_STS_OBF_FLG(value)            (SPT_SPI_STS_OBF_FLG_Msk & (_UINT32_(value) << SPT_SPI_STS_OBF_FLG_Pos)) /* Assigment of value for OBF_FLG in the SPT_SPI_STS register */
#define SPT_SPI_STS_SPIM_RST_REQ_Pos          _UINT32_(16)                                         /* (SPT_SPI_STS) Set when the SPI Master Requested a Configuration Reset. Position */
#define SPT_SPI_STS_SPIM_RST_REQ_Msk          (_UINT32_(0x1) << SPT_SPI_STS_SPIM_RST_REQ_Pos)      /* (SPT_SPI_STS) Set when the SPI Master Requested a Configuration Reset. Mask */
#define SPT_SPI_STS_SPIM_RST_REQ(value)       (SPT_SPI_STS_SPIM_RST_REQ_Msk & (_UINT32_(value) << SPT_SPI_STS_SPIM_RST_REQ_Pos)) /* Assigment of value for SPIM_RST_REQ in the SPT_SPI_STS register */
#define SPT_SPI_STS_RXF_RST_DN_Pos            _UINT32_(17)                                         /* (SPT_SPI_STS) Set after the SPI Master initiates a RX FIFO reset and the reset has been processed. FIFO is cleared. Position */
#define SPT_SPI_STS_RXF_RST_DN_Msk            (_UINT32_(0x1) << SPT_SPI_STS_RXF_RST_DN_Pos)        /* (SPT_SPI_STS) Set after the SPI Master initiates a RX FIFO reset and the reset has been processed. FIFO is cleared. Mask */
#define SPT_SPI_STS_RXF_RST_DN(value)         (SPT_SPI_STS_RXF_RST_DN_Msk & (_UINT32_(value) << SPT_SPI_STS_RXF_RST_DN_Pos)) /* Assigment of value for RXF_RST_DN in the SPT_SPI_STS register */
#define SPT_SPI_STS_TXF_RST_DN_Pos            _UINT32_(18)                                         /* (SPT_SPI_STS) Set after the SPI Master initiates a TX FIFO reset and the reset has been processed. FIFO is cleared. Position */
#define SPT_SPI_STS_TXF_RST_DN_Msk            (_UINT32_(0x1) << SPT_SPI_STS_TXF_RST_DN_Pos)        /* (SPT_SPI_STS) Set after the SPI Master initiates a TX FIFO reset and the reset has been processed. FIFO is cleared. Mask */
#define SPT_SPI_STS_TXF_RST_DN(value)         (SPT_SPI_STS_TXF_RST_DN_Msk & (_UINT32_(value) << SPT_SPI_STS_TXF_RST_DN_Pos)) /* Assigment of value for TXF_RST_DN in the SPT_SPI_STS register */
#define SPT_SPI_STS_OOL0_ERR_Pos              _UINT32_(19)                                         /* (SPT_SPI_STS) This flag is set with the transfer address requested by the master is out of Limit 0 range or when the BAR is disabled. Position */
#define SPT_SPI_STS_OOL0_ERR_Msk              (_UINT32_(0x1) << SPT_SPI_STS_OOL0_ERR_Pos)          /* (SPT_SPI_STS) This flag is set with the transfer address requested by the master is out of Limit 0 range or when the BAR is disabled. Mask */
#define SPT_SPI_STS_OOL0_ERR(value)           (SPT_SPI_STS_OOL0_ERR_Msk & (_UINT32_(value) << SPT_SPI_STS_OOL0_ERR_Pos)) /* Assigment of value for OOL0_ERR in the SPT_SPI_STS register */
#define SPT_SPI_STS_OOL1_ERR_Pos              _UINT32_(20)                                         /* (SPT_SPI_STS) This flag is set with the transfer address requested by the master is out of Limit 1 range or when the BAR is disabled. Position */
#define SPT_SPI_STS_OOL1_ERR_Msk              (_UINT32_(0x1) << SPT_SPI_STS_OOL1_ERR_Pos)          /* (SPT_SPI_STS) This flag is set with the transfer address requested by the master is out of Limit 1 range or when the BAR is disabled. Mask */
#define SPT_SPI_STS_OOL1_ERR(value)           (SPT_SPI_STS_OOL1_ERR_Msk & (_UINT32_(value) << SPT_SPI_STS_OOL1_ERR_Pos)) /* Assigment of value for OOL1_ERR in the SPT_SPI_STS register */
#define SPT_SPI_STS_ARMBUS_ERR_Pos            _UINT32_(21)                                         /* (SPT_SPI_STS) ARM Bus Error returned for the curren data transfer. Position */
#define SPT_SPI_STS_ARMBUS_ERR_Msk            (_UINT32_(0x1) << SPT_SPI_STS_ARMBUS_ERR_Pos)        /* (SPT_SPI_STS) ARM Bus Error returned for the curren data transfer. Mask */
#define SPT_SPI_STS_ARMBUS_ERR(value)         (SPT_SPI_STS_ARMBUS_ERR_Msk & (_UINT32_(value) << SPT_SPI_STS_ARMBUS_ERR_Pos)) /* Assigment of value for ARMBUS_ERR in the SPT_SPI_STS register */
#define SPT_SPI_STS_UNDEF_CMD_ERR_Pos         _UINT32_(22)                                         /* (SPT_SPI_STS) Undefined Command Error: The command received from the master isn't defined. Position */
#define SPT_SPI_STS_UNDEF_CMD_ERR_Msk         (_UINT32_(0x1) << SPT_SPI_STS_UNDEF_CMD_ERR_Pos)     /* (SPT_SPI_STS) Undefined Command Error: The command received from the master isn't defined. Mask */
#define SPT_SPI_STS_UNDEF_CMD_ERR(value)      (SPT_SPI_STS_UNDEF_CMD_ERR_Msk & (_UINT32_(value) << SPT_SPI_STS_UNDEF_CMD_ERR_Pos)) /* Assigment of value for UNDEF_CMD_ERR in the SPT_SPI_STS register */
#define SPT_SPI_STS_DV_BUSY_Pos               _UINT32_(23)                                         /* (SPT_SPI_STS) If the Master requested a transaction whose destination is busy the request is ignored.         Should use the poll or wait for interrupts. Position */
#define SPT_SPI_STS_DV_BUSY_Msk               (_UINT32_(0x1) << SPT_SPI_STS_DV_BUSY_Pos)           /* (SPT_SPI_STS) If the Master requested a transaction whose destination is busy the request is ignored.         Should use the poll or wait for interrupts. Mask */
#define SPT_SPI_STS_DV_BUSY(value)            (SPT_SPI_STS_DV_BUSY_Msk & (_UINT32_(value) << SPT_SPI_STS_DV_BUSY_Pos)) /* Assigment of value for DV_BUSY in the SPT_SPI_STS register */
#define SPT_SPI_STS_RXF_SIZE_ERR_Pos          _UINT32_(24)                                         /* (SPT_SPI_STS) If size requested is more than what Master provided and the Master terminates early error flag         shut down request signal to ARM Bus. Size requested is less than what Master provided -- ignored and         continue transaction, may be taking in garbage. Position */
#define SPT_SPI_STS_RXF_SIZE_ERR_Msk          (_UINT32_(0x1) << SPT_SPI_STS_RXF_SIZE_ERR_Pos)      /* (SPT_SPI_STS) If size requested is more than what Master provided and the Master terminates early error flag         shut down request signal to ARM Bus. Size requested is less than what Master provided -- ignored and         continue transaction, may be taking in garbage. Mask */
#define SPT_SPI_STS_RXF_SIZE_ERR(value)       (SPT_SPI_STS_RXF_SIZE_ERR_Msk & (_UINT32_(value) << SPT_SPI_STS_RXF_SIZE_ERR_Pos)) /* Assigment of value for RXF_SIZE_ERR in the SPT_SPI_STS register */
#define SPT_SPI_STS_TXF_UNFLW_Pos             _UINT32_(25)                                         /* (SPT_SPI_STS) If Master reads more than what is in FIFO, FIFO will flag an underflow error and the data returned         will just be the last valid pointer value. Position */
#define SPT_SPI_STS_TXF_UNFLW_Msk             (_UINT32_(0x1) << SPT_SPI_STS_TXF_UNFLW_Pos)         /* (SPT_SPI_STS) If Master reads more than what is in FIFO, FIFO will flag an underflow error and the data returned         will just be the last valid pointer value. Mask */
#define SPT_SPI_STS_TXF_UNFLW(value)          (SPT_SPI_STS_TXF_UNFLW_Msk & (_UINT32_(value) << SPT_SPI_STS_TXF_UNFLW_Pos)) /* Assigment of value for TXF_UNFLW in the SPT_SPI_STS register */
#define SPT_SPI_STS_TXF_OVRFLW_Pos            _UINT32_(26)                                         /* (SPT_SPI_STS) If Master doesn't read all of the data it requested from the posted read block cycle, than data         will still be left in the FIFO. This will cause misalignment with the following transactions and a new         read cycle can cause overflow. Position */
#define SPT_SPI_STS_TXF_OVRFLW_Msk            (_UINT32_(0x1) << SPT_SPI_STS_TXF_OVRFLW_Pos)        /* (SPT_SPI_STS) If Master doesn't read all of the data it requested from the posted read block cycle, than data         will still be left in the FIFO. This will cause misalignment with the following transactions and a new         read cycle can cause overflow. Mask */
#define SPT_SPI_STS_TXF_OVRFLW(value)         (SPT_SPI_STS_TXF_OVRFLW_Msk & (_UINT32_(value) << SPT_SPI_STS_TXF_OVRFLW_Pos)) /* Assigment of value for TXF_OVRFLW in the SPT_SPI_STS register */
#define SPT_SPI_STS_RXF_UNFLW_Pos             _UINT32_(27)                                         /* (SPT_SPI_STS) If the SPI Peripheral Target reads RX FIFO when it is empty, RX FIFO Underflow flag will be set. This condition         will never happen under normal situation. Position */
#define SPT_SPI_STS_RXF_UNFLW_Msk             (_UINT32_(0x1) << SPT_SPI_STS_RXF_UNFLW_Pos)         /* (SPT_SPI_STS) If the SPI Peripheral Target reads RX FIFO when it is empty, RX FIFO Underflow flag will be set. This condition         will never happen under normal situation. Mask */
#define SPT_SPI_STS_RXF_UNFLW(value)          (SPT_SPI_STS_RXF_UNFLW_Msk & (_UINT32_(value) << SPT_SPI_STS_RXF_UNFLW_Pos)) /* Assigment of value for RXF_UNFLW in the SPT_SPI_STS register */
#define SPT_SPI_STS_RXF_OVRFLW_Pos            _UINT32_(28)                                         /* (SPT_SPI_STS) If SPI Master writes more than the space in the FIFO, the FIFO will flag an overflow error and data         will not be stored. Position */
#define SPT_SPI_STS_RXF_OVRFLW_Msk            (_UINT32_(0x1) << SPT_SPI_STS_RXF_OVRFLW_Pos)        /* (SPT_SPI_STS) If SPI Master writes more than the space in the FIFO, the FIFO will flag an overflow error and data         will not be stored. Mask */
#define SPT_SPI_STS_RXF_OVRFLW(value)         (SPT_SPI_STS_RXF_OVRFLW_Msk & (_UINT32_(value) << SPT_SPI_STS_RXF_OVRFLW_Pos)) /* Assigment of value for RXF_OVRFLW in the SPT_SPI_STS register */
#define SPT_SPI_STS_Msk                       _UINT32_(0x1FFFEF7B)                                 /* (SPT_SPI_STS) Register Mask  */


/* -------- SPT_SPI_EC_STS : (SPT Offset: 0x08) (R/W 32) SPI Peripheral Target EC Status Register. -------- */
#define SPT_SPI_EC_STS_RESETVALUE             _UINT32_(0x500)                                      /*  (SPT_SPI_EC_STS) SPI Peripheral Target EC Status Register.  Reset Value */

#define SPT_SPI_EC_STS_MEM_WR_DONE_Pos        _UINT32_(0)                                          /* (SPT_SPI_EC_STS) When the ARM BUS side has fully finished the last transaction from the FIFO to write the data to         Memory for Posted Writes .- clear with new Write request. Position */
#define SPT_SPI_EC_STS_MEM_WR_DONE_Msk        (_UINT32_(0x1) << SPT_SPI_EC_STS_MEM_WR_DONE_Pos)    /* (SPT_SPI_EC_STS) When the ARM BUS side has fully finished the last transaction from the FIFO to write the data to         Memory for Posted Writes .- clear with new Write request. Mask */
#define SPT_SPI_EC_STS_MEM_WR_DONE(value)     (SPT_SPI_EC_STS_MEM_WR_DONE_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_MEM_WR_DONE_Pos)) /* Assigment of value for MEM_WR_DONE in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_MEM_RD_DONE_Pos        _UINT32_(1)                                          /* (SPT_SPI_EC_STS) When the ARM BUS side has fully finished writing the last written DWord to the FIFO for a set of data         read from Memory for Posted Reads. - cleared with new Read request. Position */
#define SPT_SPI_EC_STS_MEM_RD_DONE_Msk        (_UINT32_(0x1) << SPT_SPI_EC_STS_MEM_RD_DONE_Pos)    /* (SPT_SPI_EC_STS) When the ARM BUS side has fully finished writing the last written DWord to the FIFO for a set of data         read from Memory for Posted Reads. - cleared with new Read request. Mask */
#define SPT_SPI_EC_STS_MEM_RD_DONE(value)     (SPT_SPI_EC_STS_MEM_RD_DONE_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_MEM_RD_DONE_Pos)) /* Assigment of value for MEM_RD_DONE in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_MEM_WR_BUSY_Pos        _UINT32_(3)                                          /* (SPT_SPI_EC_STS) When an Memory Write transaction is currently being processed. Position */
#define SPT_SPI_EC_STS_MEM_WR_BUSY_Msk        (_UINT32_(0x1) << SPT_SPI_EC_STS_MEM_WR_BUSY_Pos)    /* (SPT_SPI_EC_STS) When an Memory Write transaction is currently being processed. Mask */
#define SPT_SPI_EC_STS_MEM_WR_BUSY(value)     (SPT_SPI_EC_STS_MEM_WR_BUSY_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_MEM_WR_BUSY_Pos)) /* Assigment of value for MEM_WR_BUSY in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_MEM_RD_BUSY_Pos        _UINT32_(4)                                          /* (SPT_SPI_EC_STS) When an Memory Read transaction is currently being processed. Position */
#define SPT_SPI_EC_STS_MEM_RD_BUSY_Msk        (_UINT32_(0x1) << SPT_SPI_EC_STS_MEM_RD_BUSY_Pos)    /* (SPT_SPI_EC_STS) When an Memory Read transaction is currently being processed. Mask */
#define SPT_SPI_EC_STS_MEM_RD_BUSY(value)     (SPT_SPI_EC_STS_MEM_RD_BUSY_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_MEM_RD_BUSY_Pos)) /* Assigment of value for MEM_RD_BUSY in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_SREG_TRANS_Pos         _UINT32_(5)                                          /* (SPT_SPI_EC_STS) When an SREG transaction is currently being processed. Position */
#define SPT_SPI_EC_STS_SREG_TRANS_Msk         (_UINT32_(0x1) << SPT_SPI_EC_STS_SREG_TRANS_Pos)     /* (SPT_SPI_EC_STS) When an SREG transaction is currently being processed. Mask */
#define SPT_SPI_EC_STS_SREG_TRANS(value)      (SPT_SPI_EC_STS_SREG_TRANS_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_SREG_TRANS_Pos)) /* Assigment of value for SREG_TRANS in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_POLL_HI_Pos            _UINT32_(6)                                          /* (SPT_SPI_EC_STS) If this bit is set, then something in the high 16-bit of status register is set and needs to be checked.         SPI Master should take action to clear this. Position */
#define SPT_SPI_EC_STS_POLL_HI_Msk            (_UINT32_(0x1) << SPT_SPI_EC_STS_POLL_HI_Pos)        /* (SPT_SPI_EC_STS) If this bit is set, then something in the high 16-bit of status register is set and needs to be checked.         SPI Master should take action to clear this. Mask */
#define SPT_SPI_EC_STS_POLL_HI(value)         (SPT_SPI_EC_STS_POLL_HI_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_POLL_HI_Pos)) /* Assigment of value for POLL_HI in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_RXF_EMP_Pos            _UINT32_(8)                                          /* (SPT_SPI_EC_STS) Signifies all Memory write transactions for the SPI Masters requested size have been performed.         New transactions are allowed. Position */
#define SPT_SPI_EC_STS_RXF_EMP_Msk            (_UINT32_(0x1) << SPT_SPI_EC_STS_RXF_EMP_Pos)        /* (SPT_SPI_EC_STS) Signifies all Memory write transactions for the SPI Masters requested size have been performed.         New transactions are allowed. Mask */
#define SPT_SPI_EC_STS_RXF_EMP(value)         (SPT_SPI_EC_STS_RXF_EMP_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_RXF_EMP_Pos)) /* Assigment of value for RXF_EMP in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_RXF_FUL_Pos            _UINT32_(9)                                          /* (SPT_SPI_EC_STS) The RX FIFO is full of data to be written to Memory. Position */
#define SPT_SPI_EC_STS_RXF_FUL_Msk            (_UINT32_(0x1) << SPT_SPI_EC_STS_RXF_FUL_Pos)        /* (SPT_SPI_EC_STS) The RX FIFO is full of data to be written to Memory. Mask */
#define SPT_SPI_EC_STS_RXF_FUL(value)         (SPT_SPI_EC_STS_RXF_FUL_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_RXF_FUL_Pos)) /* Assigment of value for RXF_FUL in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_TXF_EMP_Pos            _UINT32_(10)                                         /* (SPT_SPI_EC_STS) Signifies SPI Master has read the data requested from Memory. Can be used to show there is data         the SPI Master has requested and not been read yet. New read transactions will be aligned. Position */
#define SPT_SPI_EC_STS_TXF_EMP_Msk            (_UINT32_(0x1) << SPT_SPI_EC_STS_TXF_EMP_Pos)        /* (SPT_SPI_EC_STS) Signifies SPI Master has read the data requested from Memory. Can be used to show there is data         the SPI Master has requested and not been read yet. New read transactions will be aligned. Mask */
#define SPT_SPI_EC_STS_TXF_EMP(value)         (SPT_SPI_EC_STS_TXF_EMP_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_TXF_EMP_Pos)) /* Assigment of value for TXF_EMP in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_TXF_FUL_Pos            _UINT32_(11)                                         /* (SPT_SPI_EC_STS) The TX FIFO is full of data that was read from Memory. Position */
#define SPT_SPI_EC_STS_TXF_FUL_Msk            (_UINT32_(0x1) << SPT_SPI_EC_STS_TXF_FUL_Pos)        /* (SPT_SPI_EC_STS) The TX FIFO is full of data that was read from Memory. Mask */
#define SPT_SPI_EC_STS_TXF_FUL(value)         (SPT_SPI_EC_STS_TXF_FUL_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_TXF_FUL_Pos)) /* Assigment of value for TXF_FUL in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_TMCLK_CNT_ERR_Pos      _UINT32_(13)                                         /* (SPT_SPI_EC_STS) This bit is set when the SPI Clock Count Test Mode is set and there is an uneven amount of clocks. Position */
#define SPT_SPI_EC_STS_TMCLK_CNT_ERR_Msk      (_UINT32_(0x1) << SPT_SPI_EC_STS_TMCLK_CNT_ERR_Pos)  /* (SPT_SPI_EC_STS) This bit is set when the SPI Clock Count Test Mode is set and there is an uneven amount of clocks. Mask */
#define SPT_SPI_EC_STS_TMCLK_CNT_ERR(value)   (SPT_SPI_EC_STS_TMCLK_CNT_ERR_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_TMCLK_CNT_ERR_Pos)) /* Assigment of value for TMCLK_CNT_ERR in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_IBF_FLG_Pos            _UINT32_(14)                                         /* (SPT_SPI_EC_STS) Set when the Host writes to the Input Buffer signaling there is data for the EC to read. Position */
#define SPT_SPI_EC_STS_IBF_FLG_Msk            (_UINT32_(0x1) << SPT_SPI_EC_STS_IBF_FLG_Pos)        /* (SPT_SPI_EC_STS) Set when the Host writes to the Input Buffer signaling there is data for the EC to read. Mask */
#define SPT_SPI_EC_STS_IBF_FLG(value)         (SPT_SPI_EC_STS_IBF_FLG_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_IBF_FLG_Pos)) /* Assigment of value for IBF_FLG in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_OBF_FLG_Pos            _UINT32_(15)                                         /* (SPT_SPI_EC_STS) Set when the EC writes to the Output Buffer signaling there is data for the Host to read. Position */
#define SPT_SPI_EC_STS_OBF_FLG_Msk            (_UINT32_(0x1) << SPT_SPI_EC_STS_OBF_FLG_Pos)        /* (SPT_SPI_EC_STS) Set when the EC writes to the Output Buffer signaling there is data for the Host to read. Mask */
#define SPT_SPI_EC_STS_OBF_FLG(value)         (SPT_SPI_EC_STS_OBF_FLG_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_OBF_FLG_Pos)) /* Assigment of value for OBF_FLG in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_SPIM_RST_REQ_Pos       _UINT32_(16)                                         /* (SPT_SPI_EC_STS) Set when the SPI Master Requested a Configuration Reset. Position */
#define SPT_SPI_EC_STS_SPIM_RST_REQ_Msk       (_UINT32_(0x1) << SPT_SPI_EC_STS_SPIM_RST_REQ_Pos)   /* (SPT_SPI_EC_STS) Set when the SPI Master Requested a Configuration Reset. Mask */
#define SPT_SPI_EC_STS_SPIM_RST_REQ(value)    (SPT_SPI_EC_STS_SPIM_RST_REQ_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_SPIM_RST_REQ_Pos)) /* Assigment of value for SPIM_RST_REQ in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_RXF_RST_DN_Pos         _UINT32_(17)                                         /* (SPT_SPI_EC_STS) Set after the SPI Master initiates a RX FIFO reset and the reset has been processed. FIFO is cleared. Position */
#define SPT_SPI_EC_STS_RXF_RST_DN_Msk         (_UINT32_(0x1) << SPT_SPI_EC_STS_RXF_RST_DN_Pos)     /* (SPT_SPI_EC_STS) Set after the SPI Master initiates a RX FIFO reset and the reset has been processed. FIFO is cleared. Mask */
#define SPT_SPI_EC_STS_RXF_RST_DN(value)      (SPT_SPI_EC_STS_RXF_RST_DN_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_RXF_RST_DN_Pos)) /* Assigment of value for RXF_RST_DN in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_TXF_RST_DN_Pos         _UINT32_(18)                                         /* (SPT_SPI_EC_STS) Set after the SPI Master initiates a TX FIFO reset and the reset has been processed. FIFO is cleared. Position */
#define SPT_SPI_EC_STS_TXF_RST_DN_Msk         (_UINT32_(0x1) << SPT_SPI_EC_STS_TXF_RST_DN_Pos)     /* (SPT_SPI_EC_STS) Set after the SPI Master initiates a TX FIFO reset and the reset has been processed. FIFO is cleared. Mask */
#define SPT_SPI_EC_STS_TXF_RST_DN(value)      (SPT_SPI_EC_STS_TXF_RST_DN_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_TXF_RST_DN_Pos)) /* Assigment of value for TXF_RST_DN in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_OOL0_ERR_Pos           _UINT32_(19)                                         /* (SPT_SPI_EC_STS) This flag is set with the transfer address requested by the master is out of Limit 0 range or when the BAR is disabled. Position */
#define SPT_SPI_EC_STS_OOL0_ERR_Msk           (_UINT32_(0x1) << SPT_SPI_EC_STS_OOL0_ERR_Pos)       /* (SPT_SPI_EC_STS) This flag is set with the transfer address requested by the master is out of Limit 0 range or when the BAR is disabled. Mask */
#define SPT_SPI_EC_STS_OOL0_ERR(value)        (SPT_SPI_EC_STS_OOL0_ERR_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_OOL0_ERR_Pos)) /* Assigment of value for OOL0_ERR in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_OOL1_ERR_Pos           _UINT32_(20)                                         /* (SPT_SPI_EC_STS) This flag is set with the transfer address requested by the master is out of Limit 1 range or when the BAR is disabled. Position */
#define SPT_SPI_EC_STS_OOL1_ERR_Msk           (_UINT32_(0x1) << SPT_SPI_EC_STS_OOL1_ERR_Pos)       /* (SPT_SPI_EC_STS) This flag is set with the transfer address requested by the master is out of Limit 1 range or when the BAR is disabled. Mask */
#define SPT_SPI_EC_STS_OOL1_ERR(value)        (SPT_SPI_EC_STS_OOL1_ERR_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_OOL1_ERR_Pos)) /* Assigment of value for OOL1_ERR in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_ARMBUS_ERR_Pos         _UINT32_(21)                                         /* (SPT_SPI_EC_STS) ARM Bus Error returned for the curren data transfer. Position */
#define SPT_SPI_EC_STS_ARMBUS_ERR_Msk         (_UINT32_(0x1) << SPT_SPI_EC_STS_ARMBUS_ERR_Pos)     /* (SPT_SPI_EC_STS) ARM Bus Error returned for the curren data transfer. Mask */
#define SPT_SPI_EC_STS_ARMBUS_ERR(value)      (SPT_SPI_EC_STS_ARMBUS_ERR_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_ARMBUS_ERR_Pos)) /* Assigment of value for ARMBUS_ERR in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_UNDEF_CMD_ERR_Pos      _UINT32_(22)                                         /* (SPT_SPI_EC_STS) Undefined Command Error: The command received from the master isn't defined. Position */
#define SPT_SPI_EC_STS_UNDEF_CMD_ERR_Msk      (_UINT32_(0x1) << SPT_SPI_EC_STS_UNDEF_CMD_ERR_Pos)  /* (SPT_SPI_EC_STS) Undefined Command Error: The command received from the master isn't defined. Mask */
#define SPT_SPI_EC_STS_UNDEF_CMD_ERR(value)   (SPT_SPI_EC_STS_UNDEF_CMD_ERR_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_UNDEF_CMD_ERR_Pos)) /* Assigment of value for UNDEF_CMD_ERR in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_DV_BUSY_Pos            _UINT32_(23)                                         /* (SPT_SPI_EC_STS) If the Master requested a transaction whose destination is busy the request is ignored.         Should use the poll or wait for interrupts. Position */
#define SPT_SPI_EC_STS_DV_BUSY_Msk            (_UINT32_(0x1) << SPT_SPI_EC_STS_DV_BUSY_Pos)        /* (SPT_SPI_EC_STS) If the Master requested a transaction whose destination is busy the request is ignored.         Should use the poll or wait for interrupts. Mask */
#define SPT_SPI_EC_STS_DV_BUSY(value)         (SPT_SPI_EC_STS_DV_BUSY_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_DV_BUSY_Pos)) /* Assigment of value for DV_BUSY in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_RXF_SIZE_ERR_Pos       _UINT32_(24)                                         /* (SPT_SPI_EC_STS) If size requested is more than what Master provided and the Master terminates early error flag         shut down request signal to ARM Bus. Size requested is less than what Master provided -- ignored and         continue transaction, may be taking in garbage. Position */
#define SPT_SPI_EC_STS_RXF_SIZE_ERR_Msk       (_UINT32_(0x1) << SPT_SPI_EC_STS_RXF_SIZE_ERR_Pos)   /* (SPT_SPI_EC_STS) If size requested is more than what Master provided and the Master terminates early error flag         shut down request signal to ARM Bus. Size requested is less than what Master provided -- ignored and         continue transaction, may be taking in garbage. Mask */
#define SPT_SPI_EC_STS_RXF_SIZE_ERR(value)    (SPT_SPI_EC_STS_RXF_SIZE_ERR_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_RXF_SIZE_ERR_Pos)) /* Assigment of value for RXF_SIZE_ERR in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_TXF_UNFLW_Pos          _UINT32_(25)                                         /* (SPT_SPI_EC_STS) If Master reads more than what is in FIFO, FIFO will flag an underflow error and the data returned         will just be the last valid pointer value. Position */
#define SPT_SPI_EC_STS_TXF_UNFLW_Msk          (_UINT32_(0x1) << SPT_SPI_EC_STS_TXF_UNFLW_Pos)      /* (SPT_SPI_EC_STS) If Master reads more than what is in FIFO, FIFO will flag an underflow error and the data returned         will just be the last valid pointer value. Mask */
#define SPT_SPI_EC_STS_TXF_UNFLW(value)       (SPT_SPI_EC_STS_TXF_UNFLW_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_TXF_UNFLW_Pos)) /* Assigment of value for TXF_UNFLW in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_TXF_OVRFLW_Pos         _UINT32_(26)                                         /* (SPT_SPI_EC_STS) If Master doesn't read all of the data it requested from the posted read block cycle, than data         will still be left in the FIFO. This will cause misalignment with the following transactions and a new         read cycle can cause overflow. Position */
#define SPT_SPI_EC_STS_TXF_OVRFLW_Msk         (_UINT32_(0x1) << SPT_SPI_EC_STS_TXF_OVRFLW_Pos)     /* (SPT_SPI_EC_STS) If Master doesn't read all of the data it requested from the posted read block cycle, than data         will still be left in the FIFO. This will cause misalignment with the following transactions and a new         read cycle can cause overflow. Mask */
#define SPT_SPI_EC_STS_TXF_OVRFLW(value)      (SPT_SPI_EC_STS_TXF_OVRFLW_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_TXF_OVRFLW_Pos)) /* Assigment of value for TXF_OVRFLW in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_RXF_UNFLW_Pos          _UINT32_(27)                                         /* (SPT_SPI_EC_STS) If the SPI Peripheral Target reads RX FIFO when it is empty, RX FIFO Underflow flag will be set. This condition         will never happen under normal situation. Position */
#define SPT_SPI_EC_STS_RXF_UNFLW_Msk          (_UINT32_(0x1) << SPT_SPI_EC_STS_RXF_UNFLW_Pos)      /* (SPT_SPI_EC_STS) If the SPI Peripheral Target reads RX FIFO when it is empty, RX FIFO Underflow flag will be set. This condition         will never happen under normal situation. Mask */
#define SPT_SPI_EC_STS_RXF_UNFLW(value)       (SPT_SPI_EC_STS_RXF_UNFLW_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_RXF_UNFLW_Pos)) /* Assigment of value for RXF_UNFLW in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_RXF_OVRFLW_Pos         _UINT32_(28)                                         /* (SPT_SPI_EC_STS) If SPI Master writes more than the space in the FIFO, the FIFO will flag an overflow error and data         will not be stored. Position */
#define SPT_SPI_EC_STS_RXF_OVRFLW_Msk         (_UINT32_(0x1) << SPT_SPI_EC_STS_RXF_OVRFLW_Pos)     /* (SPT_SPI_EC_STS) If SPI Master writes more than the space in the FIFO, the FIFO will flag an overflow error and data         will not be stored. Mask */
#define SPT_SPI_EC_STS_RXF_OVRFLW(value)      (SPT_SPI_EC_STS_RXF_OVRFLW_Msk & (_UINT32_(value) << SPT_SPI_EC_STS_RXF_OVRFLW_Pos)) /* Assigment of value for RXF_OVRFLW in the SPT_SPI_EC_STS register */
#define SPT_SPI_EC_STS_Msk                    _UINT32_(0x1FFFEF7B)                                 /* (SPT_SPI_EC_STS) Register Mask  */


/* -------- SPT_SPI_IEN : (SPT Offset: 0x0C) (R/W 32) SPI Peripheral Target Interrupt Enable Register. -------- */
#define SPT_SPI_IEN_RESETVALUE                _UINT32_(0x00)                                       /*  (SPT_SPI_IEN) SPI Peripheral Target Interrupt Enable Register.  Reset Value */

#define SPT_SPI_IEN_MEM_WR_DONE_Pos           _UINT32_(0)                                          /* (SPT_SPI_IEN) Enable Memory Write Done Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_MEM_WR_DONE_Msk           (_UINT32_(0x1) << SPT_SPI_IEN_MEM_WR_DONE_Pos)       /* (SPT_SPI_IEN) Enable Memory Write Done Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_MEM_WR_DONE(value)        (SPT_SPI_IEN_MEM_WR_DONE_Msk & (_UINT32_(value) << SPT_SPI_IEN_MEM_WR_DONE_Pos)) /* Assigment of value for MEM_WR_DONE in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_MEM_RD_DONE_Pos           _UINT32_(1)                                          /* (SPT_SPI_IEN) Enable Memory Read Done Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_MEM_RD_DONE_Msk           (_UINT32_(0x1) << SPT_SPI_IEN_MEM_RD_DONE_Pos)       /* (SPT_SPI_IEN) Enable Memory Read Done Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_MEM_RD_DONE(value)        (SPT_SPI_IEN_MEM_RD_DONE_Msk & (_UINT32_(value) << SPT_SPI_IEN_MEM_RD_DONE_Pos)) /* Assigment of value for MEM_RD_DONE in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_MEM_WR_BUSY_Pos           _UINT32_(3)                                          /* (SPT_SPI_IEN) Enable Memory Write Busy Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_MEM_WR_BUSY_Msk           (_UINT32_(0x1) << SPT_SPI_IEN_MEM_WR_BUSY_Pos)       /* (SPT_SPI_IEN) Enable Memory Write Busy Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_MEM_WR_BUSY(value)        (SPT_SPI_IEN_MEM_WR_BUSY_Msk & (_UINT32_(value) << SPT_SPI_IEN_MEM_WR_BUSY_Pos)) /* Assigment of value for MEM_WR_BUSY in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_MEM_RD_BUSY_Pos           _UINT32_(4)                                          /* (SPT_SPI_IEN) Enable Memory Read Busy Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_MEM_RD_BUSY_Msk           (_UINT32_(0x1) << SPT_SPI_IEN_MEM_RD_BUSY_Pos)       /* (SPT_SPI_IEN) Enable Memory Read Busy Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_MEM_RD_BUSY(value)        (SPT_SPI_IEN_MEM_RD_BUSY_Msk & (_UINT32_(value) << SPT_SPI_IEN_MEM_RD_BUSY_Pos)) /* Assigment of value for MEM_RD_BUSY in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_SREG_TRANS_Pos            _UINT32_(5)                                          /* (SPT_SPI_IEN) Enable SREG Trans Busy Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_SREG_TRANS_Msk            (_UINT32_(0x1) << SPT_SPI_IEN_SREG_TRANS_Pos)        /* (SPT_SPI_IEN) Enable SREG Trans Busy Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_SREG_TRANS(value)         (SPT_SPI_IEN_SREG_TRANS_Msk & (_UINT32_(value) << SPT_SPI_IEN_SREG_TRANS_Pos)) /* Assigment of value for SREG_TRANS in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_POLL_HI_Pos               _UINT32_(6)                                          /* (SPT_SPI_IEN) Enable Poll High Request Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_POLL_HI_Msk               (_UINT32_(0x1) << SPT_SPI_IEN_POLL_HI_Pos)           /* (SPT_SPI_IEN) Enable Poll High Request Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_POLL_HI(value)            (SPT_SPI_IEN_POLL_HI_Msk & (_UINT32_(value) << SPT_SPI_IEN_POLL_HI_Pos)) /* Assigment of value for POLL_HI in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_RXF_EMP_Pos               _UINT32_(8)                                          /* (SPT_SPI_IEN) Enable SREG RX FIFO Empty Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_RXF_EMP_Msk               (_UINT32_(0x1) << SPT_SPI_IEN_RXF_EMP_Pos)           /* (SPT_SPI_IEN) Enable SREG RX FIFO Empty Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_RXF_EMP(value)            (SPT_SPI_IEN_RXF_EMP_Msk & (_UINT32_(value) << SPT_SPI_IEN_RXF_EMP_Pos)) /* Assigment of value for RXF_EMP in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_RXF_FUL_Pos               _UINT32_(9)                                          /* (SPT_SPI_IEN) Enable RX FIFO Full Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_RXF_FUL_Msk               (_UINT32_(0x1) << SPT_SPI_IEN_RXF_FUL_Pos)           /* (SPT_SPI_IEN) Enable RX FIFO Full Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_RXF_FUL(value)            (SPT_SPI_IEN_RXF_FUL_Msk & (_UINT32_(value) << SPT_SPI_IEN_RXF_FUL_Pos)) /* Assigment of value for RXF_FUL in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_TXF_EMP_Pos               _UINT32_(10)                                         /* (SPT_SPI_IEN) Enable TX FIFO Empty Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_TXF_EMP_Msk               (_UINT32_(0x1) << SPT_SPI_IEN_TXF_EMP_Pos)           /* (SPT_SPI_IEN) Enable TX FIFO Empty Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_TXF_EMP(value)            (SPT_SPI_IEN_TXF_EMP_Msk & (_UINT32_(value) << SPT_SPI_IEN_TXF_EMP_Pos)) /* Assigment of value for TXF_EMP in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_TXF_FUL_Pos               _UINT32_(11)                                         /* (SPT_SPI_IEN) Enable TX FIFI FULL Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_TXF_FUL_Msk               (_UINT32_(0x1) << SPT_SPI_IEN_TXF_FUL_Pos)           /* (SPT_SPI_IEN) Enable TX FIFI FULL Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_TXF_FUL(value)            (SPT_SPI_IEN_TXF_FUL_Msk & (_UINT32_(value) << SPT_SPI_IEN_TXF_FUL_Pos)) /* Assigment of value for TXF_FUL in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_TMCLK_CNT_ERR_Pos         _UINT32_(13)                                         /* (SPT_SPI_IEN) Enable Test Mode SPI Clock Count Error Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_TMCLK_CNT_ERR_Msk         (_UINT32_(0x1) << SPT_SPI_IEN_TMCLK_CNT_ERR_Pos)     /* (SPT_SPI_IEN) Enable Test Mode SPI Clock Count Error Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_TMCLK_CNT_ERR(value)      (SPT_SPI_IEN_TMCLK_CNT_ERR_Msk & (_UINT32_(value) << SPT_SPI_IEN_TMCLK_CNT_ERR_Pos)) /* Assigment of value for TMCLK_CNT_ERR in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_IBF_FLG_Pos               _UINT32_(14)                                         /* (SPT_SPI_IEN) Enable Input Buffer Signaling Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_IBF_FLG_Msk               (_UINT32_(0x1) << SPT_SPI_IEN_IBF_FLG_Pos)           /* (SPT_SPI_IEN) Enable Input Buffer Signaling Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_IBF_FLG(value)            (SPT_SPI_IEN_IBF_FLG_Msk & (_UINT32_(value) << SPT_SPI_IEN_IBF_FLG_Pos)) /* Assigment of value for IBF_FLG in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_OBF_FLG_Pos               _UINT32_(15)                                         /* (SPT_SPI_IEN) Enable Output Buffer signaling Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_OBF_FLG_Msk               (_UINT32_(0x1) << SPT_SPI_IEN_OBF_FLG_Pos)           /* (SPT_SPI_IEN) Enable Output Buffer signaling Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_OBF_FLG(value)            (SPT_SPI_IEN_OBF_FLG_Msk & (_UINT32_(value) << SPT_SPI_IEN_OBF_FLG_Pos)) /* Assigment of value for OBF_FLG in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_SPIM_RST_REQ_Pos          _UINT32_(16)                                         /* (SPT_SPI_IEN) Enable SPI Master Request Reset Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_SPIM_RST_REQ_Msk          (_UINT32_(0x1) << SPT_SPI_IEN_SPIM_RST_REQ_Pos)      /* (SPT_SPI_IEN) Enable SPI Master Request Reset Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_SPIM_RST_REQ(value)       (SPT_SPI_IEN_SPIM_RST_REQ_Msk & (_UINT32_(value) << SPT_SPI_IEN_SPIM_RST_REQ_Pos)) /* Assigment of value for SPIM_RST_REQ in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_RXF_RST_DN_Pos            _UINT32_(17)                                         /* (SPT_SPI_IEN) Enable RX FIFO Reset Done Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_RXF_RST_DN_Msk            (_UINT32_(0x1) << SPT_SPI_IEN_RXF_RST_DN_Pos)        /* (SPT_SPI_IEN) Enable RX FIFO Reset Done Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_RXF_RST_DN(value)         (SPT_SPI_IEN_RXF_RST_DN_Msk & (_UINT32_(value) << SPT_SPI_IEN_RXF_RST_DN_Pos)) /* Assigment of value for RXF_RST_DN in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_TXF_RST_DN_Pos            _UINT32_(18)                                         /* (SPT_SPI_IEN) Enable TX FIFO Reset Done Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_TXF_RST_DN_Msk            (_UINT32_(0x1) << SPT_SPI_IEN_TXF_RST_DN_Pos)        /* (SPT_SPI_IEN) Enable TX FIFO Reset Done Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_TXF_RST_DN(value)         (SPT_SPI_IEN_TXF_RST_DN_Msk & (_UINT32_(value) << SPT_SPI_IEN_TXF_RST_DN_Pos)) /* Assigment of value for TXF_RST_DN in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_OOL0_ERR_Pos              _UINT32_(19)                                         /* (SPT_SPI_IEN) Enable Out Of Limit 0 Error Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_OOL0_ERR_Msk              (_UINT32_(0x1) << SPT_SPI_IEN_OOL0_ERR_Pos)          /* (SPT_SPI_IEN) Enable Out Of Limit 0 Error Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_OOL0_ERR(value)           (SPT_SPI_IEN_OOL0_ERR_Msk & (_UINT32_(value) << SPT_SPI_IEN_OOL0_ERR_Pos)) /* Assigment of value for OOL0_ERR in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_OOL1_ERR_Pos              _UINT32_(20)                                         /* (SPT_SPI_IEN) Enable Out Of Limit 1 Error Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_OOL1_ERR_Msk              (_UINT32_(0x1) << SPT_SPI_IEN_OOL1_ERR_Pos)          /* (SPT_SPI_IEN) Enable Out Of Limit 1 Error Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_OOL1_ERR(value)           (SPT_SPI_IEN_OOL1_ERR_Msk & (_UINT32_(value) << SPT_SPI_IEN_OOL1_ERR_Pos)) /* Assigment of value for OOL1_ERR in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_ARMBUS_ERR_Pos            _UINT32_(21)                                         /* (SPT_SPI_IEN) Enable AHB BUS Error Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_ARMBUS_ERR_Msk            (_UINT32_(0x1) << SPT_SPI_IEN_ARMBUS_ERR_Pos)        /* (SPT_SPI_IEN) Enable AHB BUS Error Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_ARMBUS_ERR(value)         (SPT_SPI_IEN_ARMBUS_ERR_Msk & (_UINT32_(value) << SPT_SPI_IEN_ARMBUS_ERR_Pos)) /* Assigment of value for ARMBUS_ERR in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_UNDEF_CMD_ERR_Pos         _UINT32_(22)                                         /* (SPT_SPI_IEN) Enable Undefined Command Error Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_UNDEF_CMD_ERR_Msk         (_UINT32_(0x1) << SPT_SPI_IEN_UNDEF_CMD_ERR_Pos)     /* (SPT_SPI_IEN) Enable Undefined Command Error Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_UNDEF_CMD_ERR(value)      (SPT_SPI_IEN_UNDEF_CMD_ERR_Msk & (_UINT32_(value) << SPT_SPI_IEN_UNDEF_CMD_ERR_Pos)) /* Assigment of value for UNDEF_CMD_ERR in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_DV_BUSY_Pos               _UINT32_(23)                                         /* (SPT_SPI_IEN) Enable Device Busy Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_DV_BUSY_Msk               (_UINT32_(0x1) << SPT_SPI_IEN_DV_BUSY_Pos)           /* (SPT_SPI_IEN) Enable Device Busy Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_DV_BUSY(value)            (SPT_SPI_IEN_DV_BUSY_Msk & (_UINT32_(value) << SPT_SPI_IEN_DV_BUSY_Pos)) /* Assigment of value for DV_BUSY in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_RXF_SIZE_ERR_Pos          _UINT32_(24)                                         /* (SPT_SPI_IEN) Enable RX FIFO SIZE Error Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_RXF_SIZE_ERR_Msk          (_UINT32_(0x1) << SPT_SPI_IEN_RXF_SIZE_ERR_Pos)      /* (SPT_SPI_IEN) Enable RX FIFO SIZE Error Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_RXF_SIZE_ERR(value)       (SPT_SPI_IEN_RXF_SIZE_ERR_Msk & (_UINT32_(value) << SPT_SPI_IEN_RXF_SIZE_ERR_Pos)) /* Assigment of value for RXF_SIZE_ERR in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_TXF_UNFLW_Pos             _UINT32_(25)                                         /* (SPT_SPI_IEN) Enable TX FIFO Underflow Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_TXF_UNFLW_Msk             (_UINT32_(0x1) << SPT_SPI_IEN_TXF_UNFLW_Pos)         /* (SPT_SPI_IEN) Enable TX FIFO Underflow Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_TXF_UNFLW(value)          (SPT_SPI_IEN_TXF_UNFLW_Msk & (_UINT32_(value) << SPT_SPI_IEN_TXF_UNFLW_Pos)) /* Assigment of value for TXF_UNFLW in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_TXF_OVRFLOW_Pos           _UINT32_(26)                                         /* (SPT_SPI_IEN) Enable TX FIFO Overflow Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_TXF_OVRFLOW_Msk           (_UINT32_(0x1) << SPT_SPI_IEN_TXF_OVRFLOW_Pos)       /* (SPT_SPI_IEN) Enable TX FIFO Overflow Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_TXF_OVRFLOW(value)        (SPT_SPI_IEN_TXF_OVRFLOW_Msk & (_UINT32_(value) << SPT_SPI_IEN_TXF_OVRFLOW_Pos)) /* Assigment of value for TXF_OVRFLOW in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_RXF_UNFLW_Pos             _UINT32_(27)                                         /* (SPT_SPI_IEN) Enable RX FIFO Underflow Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_RXF_UNFLW_Msk             (_UINT32_(0x1) << SPT_SPI_IEN_RXF_UNFLW_Pos)         /* (SPT_SPI_IEN) Enable RX FIFO Underflow Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_RXF_UNFLW(value)          (SPT_SPI_IEN_RXF_UNFLW_Msk & (_UINT32_(value) << SPT_SPI_IEN_RXF_UNFLW_Pos)) /* Assigment of value for RXF_UNFLW in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_RXF_OVRFLW_Pos            _UINT32_(28)                                         /* (SPT_SPI_IEN) Enable RX FIFO Overflow Interrupt to SPI Master. Position */
#define SPT_SPI_IEN_RXF_OVRFLW_Msk            (_UINT32_(0x1) << SPT_SPI_IEN_RXF_OVRFLW_Pos)        /* (SPT_SPI_IEN) Enable RX FIFO Overflow Interrupt to SPI Master. Mask */
#define SPT_SPI_IEN_RXF_OVRFLW(value)         (SPT_SPI_IEN_RXF_OVRFLW_Msk & (_UINT32_(value) << SPT_SPI_IEN_RXF_OVRFLW_Pos)) /* Assigment of value for RXF_OVRFLW in the SPT_SPI_IEN register */
#define SPT_SPI_IEN_Msk                       _UINT32_(0x1FFFEF7B)                                 /* (SPT_SPI_IEN) Register Mask  */


/* -------- SPT_EC_IEN : (SPT Offset: 0x10) (R/W 32) SPI Peripheral Target EC Interrupt Enable Register. -------- */
#define SPT_EC_IEN_RESETVALUE                 _UINT32_(0x00)                                       /*  (SPT_EC_IEN) SPI Peripheral Target EC Interrupt Enable Register.  Reset Value */

#define SPT_EC_IEN_MEM_WR_DONE_Pos            _UINT32_(0)                                          /* (SPT_EC_IEN) Enable Memory Write Done Interrupt to EC. Position */
#define SPT_EC_IEN_MEM_WR_DONE_Msk            (_UINT32_(0x1) << SPT_EC_IEN_MEM_WR_DONE_Pos)        /* (SPT_EC_IEN) Enable Memory Write Done Interrupt to EC. Mask */
#define SPT_EC_IEN_MEM_WR_DONE(value)         (SPT_EC_IEN_MEM_WR_DONE_Msk & (_UINT32_(value) << SPT_EC_IEN_MEM_WR_DONE_Pos)) /* Assigment of value for MEM_WR_DONE in the SPT_EC_IEN register */
#define SPT_EC_IEN_MEM_RD_DONE_Pos            _UINT32_(1)                                          /* (SPT_EC_IEN) Enable Memory Read Done Interrupt to EC. Position */
#define SPT_EC_IEN_MEM_RD_DONE_Msk            (_UINT32_(0x1) << SPT_EC_IEN_MEM_RD_DONE_Pos)        /* (SPT_EC_IEN) Enable Memory Read Done Interrupt to EC. Mask */
#define SPT_EC_IEN_MEM_RD_DONE(value)         (SPT_EC_IEN_MEM_RD_DONE_Msk & (_UINT32_(value) << SPT_EC_IEN_MEM_RD_DONE_Pos)) /* Assigment of value for MEM_RD_DONE in the SPT_EC_IEN register */
#define SPT_EC_IEN_MEM_WR_BUSY_Pos            _UINT32_(3)                                          /* (SPT_EC_IEN) Enable Memory Write Busy Interrupt to EC. Position */
#define SPT_EC_IEN_MEM_WR_BUSY_Msk            (_UINT32_(0x1) << SPT_EC_IEN_MEM_WR_BUSY_Pos)        /* (SPT_EC_IEN) Enable Memory Write Busy Interrupt to EC. Mask */
#define SPT_EC_IEN_MEM_WR_BUSY(value)         (SPT_EC_IEN_MEM_WR_BUSY_Msk & (_UINT32_(value) << SPT_EC_IEN_MEM_WR_BUSY_Pos)) /* Assigment of value for MEM_WR_BUSY in the SPT_EC_IEN register */
#define SPT_EC_IEN_MEM_RD_BUSY_Pos            _UINT32_(4)                                          /* (SPT_EC_IEN) Enable Memory Read Busy Interrupt to EC. Position */
#define SPT_EC_IEN_MEM_RD_BUSY_Msk            (_UINT32_(0x1) << SPT_EC_IEN_MEM_RD_BUSY_Pos)        /* (SPT_EC_IEN) Enable Memory Read Busy Interrupt to EC. Mask */
#define SPT_EC_IEN_MEM_RD_BUSY(value)         (SPT_EC_IEN_MEM_RD_BUSY_Msk & (_UINT32_(value) << SPT_EC_IEN_MEM_RD_BUSY_Pos)) /* Assigment of value for MEM_RD_BUSY in the SPT_EC_IEN register */
#define SPT_EC_IEN_SREG_TRANS_Pos             _UINT32_(5)                                          /* (SPT_EC_IEN) Enable SREG Trans Busy Interrupt to EC. Position */
#define SPT_EC_IEN_SREG_TRANS_Msk             (_UINT32_(0x1) << SPT_EC_IEN_SREG_TRANS_Pos)         /* (SPT_EC_IEN) Enable SREG Trans Busy Interrupt to EC. Mask */
#define SPT_EC_IEN_SREG_TRANS(value)          (SPT_EC_IEN_SREG_TRANS_Msk & (_UINT32_(value) << SPT_EC_IEN_SREG_TRANS_Pos)) /* Assigment of value for SREG_TRANS in the SPT_EC_IEN register */
#define SPT_EC_IEN_POLL_HI_Pos                _UINT32_(6)                                          /* (SPT_EC_IEN) Enable Poll High Request Interrupt to EC. Position */
#define SPT_EC_IEN_POLL_HI_Msk                (_UINT32_(0x1) << SPT_EC_IEN_POLL_HI_Pos)            /* (SPT_EC_IEN) Enable Poll High Request Interrupt to EC. Mask */
#define SPT_EC_IEN_POLL_HI(value)             (SPT_EC_IEN_POLL_HI_Msk & (_UINT32_(value) << SPT_EC_IEN_POLL_HI_Pos)) /* Assigment of value for POLL_HI in the SPT_EC_IEN register */
#define SPT_EC_IEN_RXF_EMP_Pos                _UINT32_(8)                                          /* (SPT_EC_IEN) Enable SREG RX FIFO Empty Interrupt to EC. Position */
#define SPT_EC_IEN_RXF_EMP_Msk                (_UINT32_(0x1) << SPT_EC_IEN_RXF_EMP_Pos)            /* (SPT_EC_IEN) Enable SREG RX FIFO Empty Interrupt to EC. Mask */
#define SPT_EC_IEN_RXF_EMP(value)             (SPT_EC_IEN_RXF_EMP_Msk & (_UINT32_(value) << SPT_EC_IEN_RXF_EMP_Pos)) /* Assigment of value for RXF_EMP in the SPT_EC_IEN register */
#define SPT_EC_IEN_RXF_FUL_Pos                _UINT32_(9)                                          /* (SPT_EC_IEN) Enable RX FIFO Full Interrupt to EC. Position */
#define SPT_EC_IEN_RXF_FUL_Msk                (_UINT32_(0x1) << SPT_EC_IEN_RXF_FUL_Pos)            /* (SPT_EC_IEN) Enable RX FIFO Full Interrupt to EC. Mask */
#define SPT_EC_IEN_RXF_FUL(value)             (SPT_EC_IEN_RXF_FUL_Msk & (_UINT32_(value) << SPT_EC_IEN_RXF_FUL_Pos)) /* Assigment of value for RXF_FUL in the SPT_EC_IEN register */
#define SPT_EC_IEN_TXF_EMP_Pos                _UINT32_(10)                                         /* (SPT_EC_IEN) Enable TX FIFO Empty Interrupt to EC. Position */
#define SPT_EC_IEN_TXF_EMP_Msk                (_UINT32_(0x1) << SPT_EC_IEN_TXF_EMP_Pos)            /* (SPT_EC_IEN) Enable TX FIFO Empty Interrupt to EC. Mask */
#define SPT_EC_IEN_TXF_EMP(value)             (SPT_EC_IEN_TXF_EMP_Msk & (_UINT32_(value) << SPT_EC_IEN_TXF_EMP_Pos)) /* Assigment of value for TXF_EMP in the SPT_EC_IEN register */
#define SPT_EC_IEN_TXF_FUL_Pos                _UINT32_(11)                                         /* (SPT_EC_IEN) Enable TX FIFI FULL Interrupt to EC. Position */
#define SPT_EC_IEN_TXF_FUL_Msk                (_UINT32_(0x1) << SPT_EC_IEN_TXF_FUL_Pos)            /* (SPT_EC_IEN) Enable TX FIFI FULL Interrupt to EC. Mask */
#define SPT_EC_IEN_TXF_FUL(value)             (SPT_EC_IEN_TXF_FUL_Msk & (_UINT32_(value) << SPT_EC_IEN_TXF_FUL_Pos)) /* Assigment of value for TXF_FUL in the SPT_EC_IEN register */
#define SPT_EC_IEN_TMCLK_CNT_ERR_Pos          _UINT32_(13)                                         /* (SPT_EC_IEN) Enable Test Mode SPI Clock Count Error Interrupt to EC. Position */
#define SPT_EC_IEN_TMCLK_CNT_ERR_Msk          (_UINT32_(0x1) << SPT_EC_IEN_TMCLK_CNT_ERR_Pos)      /* (SPT_EC_IEN) Enable Test Mode SPI Clock Count Error Interrupt to EC. Mask */
#define SPT_EC_IEN_TMCLK_CNT_ERR(value)       (SPT_EC_IEN_TMCLK_CNT_ERR_Msk & (_UINT32_(value) << SPT_EC_IEN_TMCLK_CNT_ERR_Pos)) /* Assigment of value for TMCLK_CNT_ERR in the SPT_EC_IEN register */
#define SPT_EC_IEN_IBF_FLG_Pos                _UINT32_(14)                                         /* (SPT_EC_IEN) Enable Input Buffer Signaling Interrupt to EC. Position */
#define SPT_EC_IEN_IBF_FLG_Msk                (_UINT32_(0x1) << SPT_EC_IEN_IBF_FLG_Pos)            /* (SPT_EC_IEN) Enable Input Buffer Signaling Interrupt to EC. Mask */
#define SPT_EC_IEN_IBF_FLG(value)             (SPT_EC_IEN_IBF_FLG_Msk & (_UINT32_(value) << SPT_EC_IEN_IBF_FLG_Pos)) /* Assigment of value for IBF_FLG in the SPT_EC_IEN register */
#define SPT_EC_IEN_OBF_FLG_Pos                _UINT32_(15)                                         /* (SPT_EC_IEN) Enable Output Buffer signaling Interrupt to EC. Position */
#define SPT_EC_IEN_OBF_FLG_Msk                (_UINT32_(0x1) << SPT_EC_IEN_OBF_FLG_Pos)            /* (SPT_EC_IEN) Enable Output Buffer signaling Interrupt to EC. Mask */
#define SPT_EC_IEN_OBF_FLG(value)             (SPT_EC_IEN_OBF_FLG_Msk & (_UINT32_(value) << SPT_EC_IEN_OBF_FLG_Pos)) /* Assigment of value for OBF_FLG in the SPT_EC_IEN register */
#define SPT_EC_IEN_SPIM_RST_REQ_Pos           _UINT32_(16)                                         /* (SPT_EC_IEN) Enable SPI Master Request Reset Interrupt to EC. Position */
#define SPT_EC_IEN_SPIM_RST_REQ_Msk           (_UINT32_(0x1) << SPT_EC_IEN_SPIM_RST_REQ_Pos)       /* (SPT_EC_IEN) Enable SPI Master Request Reset Interrupt to EC. Mask */
#define SPT_EC_IEN_SPIM_RST_REQ(value)        (SPT_EC_IEN_SPIM_RST_REQ_Msk & (_UINT32_(value) << SPT_EC_IEN_SPIM_RST_REQ_Pos)) /* Assigment of value for SPIM_RST_REQ in the SPT_EC_IEN register */
#define SPT_EC_IEN_RXF_RST_DN_Pos             _UINT32_(17)                                         /* (SPT_EC_IEN) Enable RX FIFO Reset Done Interrupt to EC. Position */
#define SPT_EC_IEN_RXF_RST_DN_Msk             (_UINT32_(0x1) << SPT_EC_IEN_RXF_RST_DN_Pos)         /* (SPT_EC_IEN) Enable RX FIFO Reset Done Interrupt to EC. Mask */
#define SPT_EC_IEN_RXF_RST_DN(value)          (SPT_EC_IEN_RXF_RST_DN_Msk & (_UINT32_(value) << SPT_EC_IEN_RXF_RST_DN_Pos)) /* Assigment of value for RXF_RST_DN in the SPT_EC_IEN register */
#define SPT_EC_IEN_TXF_RST_DN_Pos             _UINT32_(18)                                         /* (SPT_EC_IEN) Enable TX FIFO Reset Done Interrupt to EC. Position */
#define SPT_EC_IEN_TXF_RST_DN_Msk             (_UINT32_(0x1) << SPT_EC_IEN_TXF_RST_DN_Pos)         /* (SPT_EC_IEN) Enable TX FIFO Reset Done Interrupt to EC. Mask */
#define SPT_EC_IEN_TXF_RST_DN(value)          (SPT_EC_IEN_TXF_RST_DN_Msk & (_UINT32_(value) << SPT_EC_IEN_TXF_RST_DN_Pos)) /* Assigment of value for TXF_RST_DN in the SPT_EC_IEN register */
#define SPT_EC_IEN_OOL0_ERR_Pos               _UINT32_(19)                                         /* (SPT_EC_IEN) Enable Out Of Limit 0 Error Interrupt to EC. Position */
#define SPT_EC_IEN_OOL0_ERR_Msk               (_UINT32_(0x1) << SPT_EC_IEN_OOL0_ERR_Pos)           /* (SPT_EC_IEN) Enable Out Of Limit 0 Error Interrupt to EC. Mask */
#define SPT_EC_IEN_OOL0_ERR(value)            (SPT_EC_IEN_OOL0_ERR_Msk & (_UINT32_(value) << SPT_EC_IEN_OOL0_ERR_Pos)) /* Assigment of value for OOL0_ERR in the SPT_EC_IEN register */
#define SPT_EC_IEN_OOL1_ERR_Pos               _UINT32_(20)                                         /* (SPT_EC_IEN) Enable Out Of Limit 1 Error Interrupt to EC. Position */
#define SPT_EC_IEN_OOL1_ERR_Msk               (_UINT32_(0x1) << SPT_EC_IEN_OOL1_ERR_Pos)           /* (SPT_EC_IEN) Enable Out Of Limit 1 Error Interrupt to EC. Mask */
#define SPT_EC_IEN_OOL1_ERR(value)            (SPT_EC_IEN_OOL1_ERR_Msk & (_UINT32_(value) << SPT_EC_IEN_OOL1_ERR_Pos)) /* Assigment of value for OOL1_ERR in the SPT_EC_IEN register */
#define SPT_EC_IEN_ARMBUS_ERR_Pos             _UINT32_(21)                                         /* (SPT_EC_IEN) Enable AHB BUS Error Interrupt to EC. Position */
#define SPT_EC_IEN_ARMBUS_ERR_Msk             (_UINT32_(0x1) << SPT_EC_IEN_ARMBUS_ERR_Pos)         /* (SPT_EC_IEN) Enable AHB BUS Error Interrupt to EC. Mask */
#define SPT_EC_IEN_ARMBUS_ERR(value)          (SPT_EC_IEN_ARMBUS_ERR_Msk & (_UINT32_(value) << SPT_EC_IEN_ARMBUS_ERR_Pos)) /* Assigment of value for ARMBUS_ERR in the SPT_EC_IEN register */
#define SPT_EC_IEN_UNDEF_CMD_ERR_Pos          _UINT32_(22)                                         /* (SPT_EC_IEN) Enable Undefined Command Error Interrupt to EC. Position */
#define SPT_EC_IEN_UNDEF_CMD_ERR_Msk          (_UINT32_(0x1) << SPT_EC_IEN_UNDEF_CMD_ERR_Pos)      /* (SPT_EC_IEN) Enable Undefined Command Error Interrupt to EC. Mask */
#define SPT_EC_IEN_UNDEF_CMD_ERR(value)       (SPT_EC_IEN_UNDEF_CMD_ERR_Msk & (_UINT32_(value) << SPT_EC_IEN_UNDEF_CMD_ERR_Pos)) /* Assigment of value for UNDEF_CMD_ERR in the SPT_EC_IEN register */
#define SPT_EC_IEN_DV_BUSY_Pos                _UINT32_(23)                                         /* (SPT_EC_IEN) Enable Device Busy Interrupt to EC. Position */
#define SPT_EC_IEN_DV_BUSY_Msk                (_UINT32_(0x1) << SPT_EC_IEN_DV_BUSY_Pos)            /* (SPT_EC_IEN) Enable Device Busy Interrupt to EC. Mask */
#define SPT_EC_IEN_DV_BUSY(value)             (SPT_EC_IEN_DV_BUSY_Msk & (_UINT32_(value) << SPT_EC_IEN_DV_BUSY_Pos)) /* Assigment of value for DV_BUSY in the SPT_EC_IEN register */
#define SPT_EC_IEN_RXF_SIZE_ERR_Pos           _UINT32_(24)                                         /* (SPT_EC_IEN) Enable RX FIFO SIZE Error Interrupt to EC. Position */
#define SPT_EC_IEN_RXF_SIZE_ERR_Msk           (_UINT32_(0x1) << SPT_EC_IEN_RXF_SIZE_ERR_Pos)       /* (SPT_EC_IEN) Enable RX FIFO SIZE Error Interrupt to EC. Mask */
#define SPT_EC_IEN_RXF_SIZE_ERR(value)        (SPT_EC_IEN_RXF_SIZE_ERR_Msk & (_UINT32_(value) << SPT_EC_IEN_RXF_SIZE_ERR_Pos)) /* Assigment of value for RXF_SIZE_ERR in the SPT_EC_IEN register */
#define SPT_EC_IEN_TXF_UNFLW_Pos              _UINT32_(25)                                         /* (SPT_EC_IEN) Enable TX FIFO Underflow Interrupt to EC. Position */
#define SPT_EC_IEN_TXF_UNFLW_Msk              (_UINT32_(0x1) << SPT_EC_IEN_TXF_UNFLW_Pos)          /* (SPT_EC_IEN) Enable TX FIFO Underflow Interrupt to EC. Mask */
#define SPT_EC_IEN_TXF_UNFLW(value)           (SPT_EC_IEN_TXF_UNFLW_Msk & (_UINT32_(value) << SPT_EC_IEN_TXF_UNFLW_Pos)) /* Assigment of value for TXF_UNFLW in the SPT_EC_IEN register */
#define SPT_EC_IEN_TXF_OVRFLW_Pos             _UINT32_(26)                                         /* (SPT_EC_IEN) Enable TX FIFO Overflow Interrupt to EC. Position */
#define SPT_EC_IEN_TXF_OVRFLW_Msk             (_UINT32_(0x1) << SPT_EC_IEN_TXF_OVRFLW_Pos)         /* (SPT_EC_IEN) Enable TX FIFO Overflow Interrupt to EC. Mask */
#define SPT_EC_IEN_TXF_OVRFLW(value)          (SPT_EC_IEN_TXF_OVRFLW_Msk & (_UINT32_(value) << SPT_EC_IEN_TXF_OVRFLW_Pos)) /* Assigment of value for TXF_OVRFLW in the SPT_EC_IEN register */
#define SPT_EC_IEN_RXF_UNFLW_Pos              _UINT32_(27)                                         /* (SPT_EC_IEN) Enable RX FIFO Underflow Interrupt to EC. Position */
#define SPT_EC_IEN_RXF_UNFLW_Msk              (_UINT32_(0x1) << SPT_EC_IEN_RXF_UNFLW_Pos)          /* (SPT_EC_IEN) Enable RX FIFO Underflow Interrupt to EC. Mask */
#define SPT_EC_IEN_RXF_UNFLW(value)           (SPT_EC_IEN_RXF_UNFLW_Msk & (_UINT32_(value) << SPT_EC_IEN_RXF_UNFLW_Pos)) /* Assigment of value for RXF_UNFLW in the SPT_EC_IEN register */
#define SPT_EC_IEN_RXF_OVRFLW_Pos             _UINT32_(28)                                         /* (SPT_EC_IEN) Enable RX FIFO Overflow Interrupt to EC. Position */
#define SPT_EC_IEN_RXF_OVRFLW_Msk             (_UINT32_(0x1) << SPT_EC_IEN_RXF_OVRFLW_Pos)         /* (SPT_EC_IEN) Enable RX FIFO Overflow Interrupt to EC. Mask */
#define SPT_EC_IEN_RXF_OVRFLW(value)          (SPT_EC_IEN_RXF_OVRFLW_Msk & (_UINT32_(value) << SPT_EC_IEN_RXF_OVRFLW_Pos)) /* Assigment of value for RXF_OVRFLW in the SPT_EC_IEN register */
#define SPT_EC_IEN_Msk                        _UINT32_(0x1FFFEF7B)                                 /* (SPT_EC_IEN) Register Mask  */


/* -------- SPT_MEM_CFG : (SPT Offset: 0x14) (R/W 32) SPI Peripheral Target Memory Configuration Register. -------- */
#define SPT_MEM_CFG_RESETVALUE                _UINT32_(0x00)                                       /*  (SPT_MEM_CFG) SPI Peripheral Target Memory Configuration Register.  Reset Value */

#define SPT_MEM_CFG_BAR_EN0_SEL_Pos           _UINT32_(0)                                          /* (SPT_MEM_CFG) Enables Region 0 operation.         0 = Disable Region 0.         1 = Enable Region 0. Position */
#define SPT_MEM_CFG_BAR_EN0_SEL_Msk           (_UINT32_(0x1) << SPT_MEM_CFG_BAR_EN0_SEL_Pos)       /* (SPT_MEM_CFG) Enables Region 0 operation.         0 = Disable Region 0.         1 = Enable Region 0. Mask */
#define SPT_MEM_CFG_BAR_EN0_SEL(value)        (SPT_MEM_CFG_BAR_EN0_SEL_Msk & (_UINT32_(value) << SPT_MEM_CFG_BAR_EN0_SEL_Pos)) /* Assigment of value for BAR_EN0_SEL in the SPT_MEM_CFG register */
#define SPT_MEM_CFG_BAR_EN1_SEL_Pos           _UINT32_(1)                                          /* (SPT_MEM_CFG) Enables Region 1 operation.         0 = Disable Region 1.         1 = Enable Region 1. Position */
#define SPT_MEM_CFG_BAR_EN1_SEL_Msk           (_UINT32_(0x1) << SPT_MEM_CFG_BAR_EN1_SEL_Pos)       /* (SPT_MEM_CFG) Enables Region 1 operation.         0 = Disable Region 1.         1 = Enable Region 1. Mask */
#define SPT_MEM_CFG_BAR_EN1_SEL(value)        (SPT_MEM_CFG_BAR_EN1_SEL_Msk & (_UINT32_(value) << SPT_MEM_CFG_BAR_EN1_SEL_Pos)) /* Assigment of value for BAR_EN1_SEL in the SPT_MEM_CFG register */
#define SPT_MEM_CFG_Msk                       _UINT32_(0x00000003)                                 /* (SPT_MEM_CFG) Register Mask  */


/* -------- SPT_MEM_BAR0 : (SPT Offset: 0x18) (R/W 32) SPI Peripheral Target Memory Base Address0 Register. -------- */
#define SPT_MEM_BAR0_RESETVALUE               _UINT32_(0x00)                                       /*  (SPT_MEM_BAR0) SPI Peripheral Target Memory Base Address0 Register.  Reset Value */

#define SPT_MEM_BAR0_BAS_ADD0_Pos             _UINT32_(0)                                          /* (SPT_MEM_BAR0) Base Address for Region 0. Position */
#define SPT_MEM_BAR0_BAS_ADD0_Msk             (_UINT32_(0xFFFFFFFF) << SPT_MEM_BAR0_BAS_ADD0_Pos)  /* (SPT_MEM_BAR0) Base Address for Region 0. Mask */
#define SPT_MEM_BAR0_BAS_ADD0(value)          (SPT_MEM_BAR0_BAS_ADD0_Msk & (_UINT32_(value) << SPT_MEM_BAR0_BAS_ADD0_Pos)) /* Assigment of value for BAS_ADD0 in the SPT_MEM_BAR0 register */
#define SPT_MEM_BAR0_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (SPT_MEM_BAR0) Register Mask  */


/* -------- SPT_MEM_WR_LIM0 : (SPT Offset: 0x1C) (R/W 32) SPI Peripheral Target Memory Write LIMIT 0 Register. -------- */
#define SPT_MEM_WR_LIM0_RESETVALUE            _UINT32_(0x00)                                       /*  (SPT_MEM_WR_LIM0) SPI Peripheral Target Memory Write LIMIT 0 Register.  Reset Value */

#define SPT_MEM_WR_LIM0_LMT0_Pos              _UINT32_(0)                                          /* (SPT_MEM_WR_LIM0) Write Limit for Region 0. Position */
#define SPT_MEM_WR_LIM0_LMT0_Msk              (_UINT32_(0x7FFF) << SPT_MEM_WR_LIM0_LMT0_Pos)       /* (SPT_MEM_WR_LIM0) Write Limit for Region 0. Mask */
#define SPT_MEM_WR_LIM0_LMT0(value)           (SPT_MEM_WR_LIM0_LMT0_Msk & (_UINT32_(value) << SPT_MEM_WR_LIM0_LMT0_Pos)) /* Assigment of value for LMT0 in the SPT_MEM_WR_LIM0 register */
#define SPT_MEM_WR_LIM0_Msk                   _UINT32_(0x00007FFF)                                 /* (SPT_MEM_WR_LIM0) Register Mask  */


/* -------- SPT_MEM_RD_LIM0 : (SPT Offset: 0x20) (R/W 32) SPI Peripheral Target Memory Read LIMIT 0 Register. -------- */
#define SPT_MEM_RD_LIM0_RESETVALUE            _UINT32_(0x00)                                       /*  (SPT_MEM_RD_LIM0) SPI Peripheral Target Memory Read LIMIT 0 Register.  Reset Value */

#define SPT_MEM_RD_LIM0_LMT0_Pos              _UINT32_(0)                                          /* (SPT_MEM_RD_LIM0) Read Limit for Region 0. Position */
#define SPT_MEM_RD_LIM0_LMT0_Msk              (_UINT32_(0x7FFF) << SPT_MEM_RD_LIM0_LMT0_Pos)       /* (SPT_MEM_RD_LIM0) Read Limit for Region 0. Mask */
#define SPT_MEM_RD_LIM0_LMT0(value)           (SPT_MEM_RD_LIM0_LMT0_Msk & (_UINT32_(value) << SPT_MEM_RD_LIM0_LMT0_Pos)) /* Assigment of value for LMT0 in the SPT_MEM_RD_LIM0 register */
#define SPT_MEM_RD_LIM0_Msk                   _UINT32_(0x00007FFF)                                 /* (SPT_MEM_RD_LIM0) Register Mask  */


/* -------- SPT_MEM_BAR1 : (SPT Offset: 0x24) (R/W 32) SPI Peripheral Target Memory Base Address1 Register. -------- */
#define SPT_MEM_BAR1_RESETVALUE               _UINT32_(0x00)                                       /*  (SPT_MEM_BAR1) SPI Peripheral Target Memory Base Address1 Register.  Reset Value */

#define SPT_MEM_BAR1_ADD1_Pos                 _UINT32_(0)                                          /* (SPT_MEM_BAR1) Base Address for Region 1. Position */
#define SPT_MEM_BAR1_ADD1_Msk                 (_UINT32_(0xFFFFFFFF) << SPT_MEM_BAR1_ADD1_Pos)      /* (SPT_MEM_BAR1) Base Address for Region 1. Mask */
#define SPT_MEM_BAR1_ADD1(value)              (SPT_MEM_BAR1_ADD1_Msk & (_UINT32_(value) << SPT_MEM_BAR1_ADD1_Pos)) /* Assigment of value for ADD1 in the SPT_MEM_BAR1 register */
#define SPT_MEM_BAR1_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (SPT_MEM_BAR1) Register Mask  */


/* -------- SPT_MEM_WR_LIM1 : (SPT Offset: 0x28) (R/W 32) SPI Peripheral Target Memory Write LIMIT 1 Register. -------- */
#define SPT_MEM_WR_LIM1_RESETVALUE            _UINT32_(0x00)                                       /*  (SPT_MEM_WR_LIM1) SPI Peripheral Target Memory Write LIMIT 1 Register.  Reset Value */

#define SPT_MEM_WR_LIM1_LMT1_Pos              _UINT32_(0)                                          /* (SPT_MEM_WR_LIM1) Write Limit for Region 1. Position */
#define SPT_MEM_WR_LIM1_LMT1_Msk              (_UINT32_(0x7FFF) << SPT_MEM_WR_LIM1_LMT1_Pos)       /* (SPT_MEM_WR_LIM1) Write Limit for Region 1. Mask */
#define SPT_MEM_WR_LIM1_LMT1(value)           (SPT_MEM_WR_LIM1_LMT1_Msk & (_UINT32_(value) << SPT_MEM_WR_LIM1_LMT1_Pos)) /* Assigment of value for LMT1 in the SPT_MEM_WR_LIM1 register */
#define SPT_MEM_WR_LIM1_Msk                   _UINT32_(0x00007FFF)                                 /* (SPT_MEM_WR_LIM1) Register Mask  */


/* -------- SPT_MEM_RD_LIM1 : (SPT Offset: 0x2C) (R/W 32) SPI Peripheral Target Memory Read LIMIT 1 Register. -------- */
#define SPT_MEM_RD_LIM1_RESETVALUE            _UINT32_(0x00)                                       /*  (SPT_MEM_RD_LIM1) SPI Peripheral Target Memory Read LIMIT 1 Register.  Reset Value */

#define SPT_MEM_RD_LIM1_LMT1_Pos              _UINT32_(0)                                          /* (SPT_MEM_RD_LIM1) Read Limit for Region 1. Position */
#define SPT_MEM_RD_LIM1_LMT1_Msk              (_UINT32_(0x7FFF) << SPT_MEM_RD_LIM1_LMT1_Pos)       /* (SPT_MEM_RD_LIM1) Read Limit for Region 1. Mask */
#define SPT_MEM_RD_LIM1_LMT1(value)           (SPT_MEM_RD_LIM1_LMT1_Msk & (_UINT32_(value) << SPT_MEM_RD_LIM1_LMT1_Pos)) /* Assigment of value for LMT1 in the SPT_MEM_RD_LIM1 register */
#define SPT_MEM_RD_LIM1_Msk                   _UINT32_(0x00007FFF)                                 /* (SPT_MEM_RD_LIM1) Register Mask  */


/* -------- SPT_RXF_HOST_BAR : (SPT Offset: 0x30) ( R/ 32) SPI Peripheral Target RX FIFO Host Bar Register. -------- */
#define SPT_RXF_HOST_BAR_RESETVALUE           _UINT32_(0x00)                                       /*  (SPT_RXF_HOST_BAR) SPI Peripheral Target RX FIFO Host Bar Register.  Reset Value */

#define SPT_RXF_HOST_BAR_BAR_Pos              _UINT32_(0)                                          /* (SPT_RXF_HOST_BAR) RX FIFO Host Bar Register. Position */
#define SPT_RXF_HOST_BAR_BAR_Msk              (_UINT32_(0xFFFF) << SPT_RXF_HOST_BAR_BAR_Pos)       /* (SPT_RXF_HOST_BAR) RX FIFO Host Bar Register. Mask */
#define SPT_RXF_HOST_BAR_BAR(value)           (SPT_RXF_HOST_BAR_BAR_Msk & (_UINT32_(value) << SPT_RXF_HOST_BAR_BAR_Pos)) /* Assigment of value for BAR in the SPT_RXF_HOST_BAR register */
#define SPT_RXF_HOST_BAR_Msk                  _UINT32_(0x0000FFFF)                                 /* (SPT_RXF_HOST_BAR) Register Mask  */


/* -------- SPT_RXF_BYTE_CNT : (SPT Offset: 0x34) ( R/ 32) SPI Peripheral Target RX FIFO Byte Counter Register. -------- */
#define SPT_RXF_BYTE_CNT_RESETVALUE           _UINT32_(0x00)                                       /*  (SPT_RXF_BYTE_CNT) SPI Peripheral Target RX FIFO Byte Counter Register.  Reset Value */

#define SPT_RXF_BYTE_CNT_BCNT_Pos             _UINT32_(0)                                          /* (SPT_RXF_BYTE_CNT) RX FIFO Byte Count Register. Position */
#define SPT_RXF_BYTE_CNT_BCNT_Msk             (_UINT32_(0x7FFF) << SPT_RXF_BYTE_CNT_BCNT_Pos)      /* (SPT_RXF_BYTE_CNT) RX FIFO Byte Count Register. Mask */
#define SPT_RXF_BYTE_CNT_BCNT(value)          (SPT_RXF_BYTE_CNT_BCNT_Msk & (_UINT32_(value) << SPT_RXF_BYTE_CNT_BCNT_Pos)) /* Assigment of value for BCNT in the SPT_RXF_BYTE_CNT register */
#define SPT_RXF_BYTE_CNT_Msk                  _UINT32_(0x00007FFF)                                 /* (SPT_RXF_BYTE_CNT) Register Mask  */


/* -------- SPT_TXF_HOST_BAR : (SPT Offset: 0x38) ( R/ 32) SPI Peripheral Target TX FIFO Host Bar Register. -------- */
#define SPT_TXF_HOST_BAR_RESETVALUE           _UINT32_(0x00)                                       /*  (SPT_TXF_HOST_BAR) SPI Peripheral Target TX FIFO Host Bar Register.  Reset Value */

#define SPT_TXF_HOST_BAR_BAR_Pos              _UINT32_(0)                                          /* (SPT_TXF_HOST_BAR) TX FIFO Host Bar Register. Position */
#define SPT_TXF_HOST_BAR_BAR_Msk              (_UINT32_(0xFFFF) << SPT_TXF_HOST_BAR_BAR_Pos)       /* (SPT_TXF_HOST_BAR) TX FIFO Host Bar Register. Mask */
#define SPT_TXF_HOST_BAR_BAR(value)           (SPT_TXF_HOST_BAR_BAR_Msk & (_UINT32_(value) << SPT_TXF_HOST_BAR_BAR_Pos)) /* Assigment of value for BAR in the SPT_TXF_HOST_BAR register */
#define SPT_TXF_HOST_BAR_Msk                  _UINT32_(0x0000FFFF)                                 /* (SPT_TXF_HOST_BAR) Register Mask  */


/* -------- SPT_TXF_BYTE_CNT : (SPT Offset: 0x3C) ( R/ 32) SPI Peripheral Target TX FIFO Byte Counter Register. -------- */
#define SPT_TXF_BYTE_CNT_RESETVALUE           _UINT32_(0x00)                                       /*  (SPT_TXF_BYTE_CNT) SPI Peripheral Target TX FIFO Byte Counter Register.  Reset Value */

#define SPT_TXF_BYTE_CNT_BCNT_Pos             _UINT32_(0)                                          /* (SPT_TXF_BYTE_CNT) TX FIFO Byte Count Register. Position */
#define SPT_TXF_BYTE_CNT_BCNT_Msk             (_UINT32_(0x7FFF) << SPT_TXF_BYTE_CNT_BCNT_Pos)      /* (SPT_TXF_BYTE_CNT) TX FIFO Byte Count Register. Mask */
#define SPT_TXF_BYTE_CNT_BCNT(value)          (SPT_TXF_BYTE_CNT_BCNT_Msk & (_UINT32_(value) << SPT_TXF_BYTE_CNT_BCNT_Pos)) /* Assigment of value for BCNT in the SPT_TXF_BYTE_CNT register */
#define SPT_TXF_BYTE_CNT_Msk                  _UINT32_(0x00007FFF)                                 /* (SPT_TXF_BYTE_CNT) Register Mask  */


/* -------- SPT_SYS_CFG : (SPT Offset: 0x40) (R/W 32) SPI Peripheral Target System Configuration Register. -------- */
#define SPT_SYS_CFG_RESETVALUE                _UINT32_(0x4C0)                                      /*  (SPT_SYS_CFG) SPI Peripheral Target System Configuration Register.  Reset Value */

#define SPT_SYS_CFG_SOFT_RST_Pos              _UINT32_(0)                                          /* (SPT_SYS_CFG) Soft reset for entire SPI Peripheral Target Block. This bit is self clearing. Position */
#define SPT_SYS_CFG_SOFT_RST_Msk              (_UINT32_(0x1) << SPT_SYS_CFG_SOFT_RST_Pos)          /* (SPT_SYS_CFG) Soft reset for entire SPI Peripheral Target Block. This bit is self clearing. Mask */
#define SPT_SYS_CFG_SOFT_RST(value)           (SPT_SYS_CFG_SOFT_RST_Msk & (_UINT32_(value) << SPT_SYS_CFG_SOFT_RST_Pos)) /* Assigment of value for SOFT_RST in the SPT_SYS_CFG register */
#define SPT_SYS_CFG_LOCK_QUAD_SNGL_WRMOD_Pos  _UINT32_(1)                                          /* (SPT_SYS_CFG) Lock Quad / Single Write Mode bit, write access from SPI Master. Position */
#define SPT_SYS_CFG_LOCK_QUAD_SNGL_WRMOD_Msk  (_UINT32_(0x1) << SPT_SYS_CFG_LOCK_QUAD_SNGL_WRMOD_Pos) /* (SPT_SYS_CFG) Lock Quad / Single Write Mode bit, write access from SPI Master. Mask */
#define SPT_SYS_CFG_LOCK_QUAD_SNGL_WRMOD(value) (SPT_SYS_CFG_LOCK_QUAD_SNGL_WRMOD_Msk & (_UINT32_(value) << SPT_SYS_CFG_LOCK_QUAD_SNGL_WRMOD_Pos)) /* Assigment of value for LOCK_QUAD_SNGL_WRMOD in the SPT_SYS_CFG register */
#define SPT_SYS_CFG_LOCK_TAR_TIME_Pos         _UINT32_(2)                                          /* (SPT_SYS_CFG) Lock Tar Time bit, write access from SPI Master. Position */
#define SPT_SYS_CFG_LOCK_TAR_TIME_Msk         (_UINT32_(0x1) << SPT_SYS_CFG_LOCK_TAR_TIME_Pos)     /* (SPT_SYS_CFG) Lock Tar Time bit, write access from SPI Master. Mask */
#define SPT_SYS_CFG_LOCK_TAR_TIME(value)      (SPT_SYS_CFG_LOCK_TAR_TIME_Msk & (_UINT32_(value) << SPT_SYS_CFG_LOCK_TAR_TIME_Pos)) /* Assigment of value for LOCK_TAR_TIME in the SPT_SYS_CFG register */
#define SPT_SYS_CFG_LOCK_WAIT_CYCL_Pos        _UINT32_(3)                                          /* (SPT_SYS_CFG) Lock Wait Cycle bits, write access from SPI Master. Position */
#define SPT_SYS_CFG_LOCK_WAIT_CYCL_Msk        (_UINT32_(0x1) << SPT_SYS_CFG_LOCK_WAIT_CYCL_Pos)    /* (SPT_SYS_CFG) Lock Wait Cycle bits, write access from SPI Master. Mask */
#define SPT_SYS_CFG_LOCK_WAIT_CYCL(value)     (SPT_SYS_CFG_LOCK_WAIT_CYCL_Msk & (_UINT32_(value) << SPT_SYS_CFG_LOCK_WAIT_CYCL_Pos)) /* Assigment of value for LOCK_WAIT_CYCL in the SPT_SYS_CFG register */
#define SPT_SYS_CFG_LOCK_MEM_CFG_Pos          _UINT32_(4)                                          /* (SPT_SYS_CFG) Lock Memory Configuration register, write access from SPI Master. Position */
#define SPT_SYS_CFG_LOCK_MEM_CFG_Msk          (_UINT32_(0x1) << SPT_SYS_CFG_LOCK_MEM_CFG_Pos)      /* (SPT_SYS_CFG) Lock Memory Configuration register, write access from SPI Master. Mask */
#define SPT_SYS_CFG_LOCK_MEM_CFG(value)       (SPT_SYS_CFG_LOCK_MEM_CFG_Msk & (_UINT32_(value) << SPT_SYS_CFG_LOCK_MEM_CFG_Pos)) /* Assigment of value for LOCK_MEM_CFG in the SPT_SYS_CFG register */
#define SPT_SYS_CFG_LOCK_SPIINT_EN_Pos        _UINT32_(5)                                          /* (SPT_SYS_CFG) Lock SPI Interrupt Enable register, write access from SPI Master. Position */
#define SPT_SYS_CFG_LOCK_SPIINT_EN_Msk        (_UINT32_(0x1) << SPT_SYS_CFG_LOCK_SPIINT_EN_Pos)    /* (SPT_SYS_CFG) Lock SPI Interrupt Enable register, write access from SPI Master. Mask */
#define SPT_SYS_CFG_LOCK_SPIINT_EN(value)     (SPT_SYS_CFG_LOCK_SPIINT_EN_Msk & (_UINT32_(value) << SPT_SYS_CFG_LOCK_SPIINT_EN_Pos)) /* Assigment of value for LOCK_SPIINT_EN in the SPT_SYS_CFG register */
#define SPT_SYS_CFG_LOCK_MEM_BAR0_Pos         _UINT32_(6)                                          /* (SPT_SYS_CFG) Lock Memory Bar 0 register, write access from SPI Master. Position */
#define SPT_SYS_CFG_LOCK_MEM_BAR0_Msk         (_UINT32_(0x1) << SPT_SYS_CFG_LOCK_MEM_BAR0_Pos)     /* (SPT_SYS_CFG) Lock Memory Bar 0 register, write access from SPI Master. Mask */
#define SPT_SYS_CFG_LOCK_MEM_BAR0(value)      (SPT_SYS_CFG_LOCK_MEM_BAR0_Msk & (_UINT32_(value) << SPT_SYS_CFG_LOCK_MEM_BAR0_Pos)) /* Assigment of value for LOCK_MEM_BAR0 in the SPT_SYS_CFG register */
#define SPT_SYS_CFG_LOCK_MEM_BAR1_Pos         _UINT32_(7)                                          /* (SPT_SYS_CFG) Lock Memory Bar 1 register, write access from SPI Master. Position */
#define SPT_SYS_CFG_LOCK_MEM_BAR1_Msk         (_UINT32_(0x1) << SPT_SYS_CFG_LOCK_MEM_BAR1_Pos)     /* (SPT_SYS_CFG) Lock Memory Bar 1 register, write access from SPI Master. Mask */
#define SPT_SYS_CFG_LOCK_MEM_BAR1(value)      (SPT_SYS_CFG_LOCK_MEM_BAR1_Msk & (_UINT32_(value) << SPT_SYS_CFG_LOCK_MEM_BAR1_Pos)) /* Assigment of value for LOCK_MEM_BAR1 in the SPT_SYS_CFG register */
#define SPT_SYS_CFG_LOCK_TEST_MODE_Pos        _UINT32_(10)                                         /* (SPT_SYS_CFG) Lock TEST Mode register, write access from SPI Master. Position */
#define SPT_SYS_CFG_LOCK_TEST_MODE_Msk        (_UINT32_(0x1) << SPT_SYS_CFG_LOCK_TEST_MODE_Pos)    /* (SPT_SYS_CFG) Lock TEST Mode register, write access from SPI Master. Mask */
#define SPT_SYS_CFG_LOCK_TEST_MODE(value)     (SPT_SYS_CFG_LOCK_TEST_MODE_Msk & (_UINT32_(value) << SPT_SYS_CFG_LOCK_TEST_MODE_Pos)) /* Assigment of value for LOCK_TEST_MODE in the SPT_SYS_CFG register */
#define SPT_SYS_CFG_SPI_SLV_EN_Pos            _UINT32_(16)                                         /* (SPT_SYS_CFG) Enable / Disable SPI Peripheral Target Block.         0 = Disable SPI Peripheral Target module.         1 = Enable SPI Peripheral Target module. Position */
#define SPT_SYS_CFG_SPI_SLV_EN_Msk            (_UINT32_(0x1) << SPT_SYS_CFG_SPI_SLV_EN_Pos)        /* (SPT_SYS_CFG) Enable / Disable SPI Peripheral Target Block.         0 = Disable SPI Peripheral Target module.         1 = Enable SPI Peripheral Target module. Mask */
#define SPT_SYS_CFG_SPI_SLV_EN(value)         (SPT_SYS_CFG_SPI_SLV_EN_Msk & (_UINT32_(value) << SPT_SYS_CFG_SPI_SLV_EN_Pos)) /* Assigment of value for SPI_SLV_EN in the SPT_SYS_CFG register */
#define SPT_SYS_CFG_MAS_ECREG_Pos             _UINT32_(17)                                         /* (SPT_SYS_CFG) Fixed in hardware to 1 Position */
#define SPT_SYS_CFG_MAS_ECREG_Msk             (_UINT32_(0x1) << SPT_SYS_CFG_MAS_ECREG_Pos)         /* (SPT_SYS_CFG) Fixed in hardware to 1 Mask */
#define SPT_SYS_CFG_MAS_ECREG(value)          (SPT_SYS_CFG_MAS_ECREG_Msk & (_UINT32_(value) << SPT_SYS_CFG_MAS_ECREG_Pos)) /* Assigment of value for MAS_ECREG in the SPT_SYS_CFG register */
#define SPT_SYS_CFG_SIM_EN_Pos                _UINT32_(18)                                         /* (SPT_SYS_CFG) Enable SPI Peripheral Target Simple Mode operation. Position */
#define SPT_SYS_CFG_SIM_EN_Msk                (_UINT32_(0x1) << SPT_SYS_CFG_SIM_EN_Pos)            /* (SPT_SYS_CFG) Enable SPI Peripheral Target Simple Mode operation. Mask */
#define SPT_SYS_CFG_SIM_EN(value)             (SPT_SYS_CFG_SIM_EN_Msk & (_UINT32_(value) << SPT_SYS_CFG_SIM_EN_Pos)) /* Assigment of value for SIM_EN in the SPT_SYS_CFG register */
#define SPT_SYS_CFG_ECDATL_Pos                _UINT32_(19)                                         /* (SPT_SYS_CFG) Notification to TX FIFO Engine that data is available for AHB Transfer. This register         but is cleared by Hardware at the end of the transaction, with SPI_CS_N de-assertion.         (R/WC). Position */
#define SPT_SYS_CFG_ECDATL_Msk                (_UINT32_(0x1) << SPT_SYS_CFG_ECDATL_Pos)            /* (SPT_SYS_CFG) Notification to TX FIFO Engine that data is available for AHB Transfer. This register         but is cleared by Hardware at the end of the transaction, with SPI_CS_N de-assertion.         (R/WC). Mask */
#define SPT_SYS_CFG_ECDATL(value)             (SPT_SYS_CFG_ECDATL_Msk & (_UINT32_(value) << SPT_SYS_CFG_ECDATL_Pos)) /* Assigment of value for ECDATL in the SPT_SYS_CFG register */
#define SPT_SYS_CFG_Msk                       _UINT32_(0x000F04FF)                                 /* (SPT_SYS_CFG) Register Mask  */

#define SPT_SYS_CFG_LOCK_MEM_BAR_Pos          _UINT32_(6)                                          /* (SPT_SYS_CFG Position) Lock Memory Bar x register, write access from SPI Master. */
#define SPT_SYS_CFG_LOCK_MEM_BAR_Msk          (_UINT32_(0x3) << SPT_SYS_CFG_LOCK_MEM_BAR_Pos)      /* (SPT_SYS_CFG Mask) LOCK_MEM_BAR */
#define SPT_SYS_CFG_LOCK_MEM_BAR(value)       (SPT_SYS_CFG_LOCK_MEM_BAR_Msk & (_UINT32_(value) << SPT_SYS_CFG_LOCK_MEM_BAR_Pos)) 

/* -------- SPT_SPIM2EC_MBX : (SPT Offset: 0x44) (R/W 32) SPI Peripheral Target Master to EC Mailbox Register. -------- */
#define SPT_SPIM2EC_MBX_RESETVALUE            _UINT32_(0x00)                                       /*  (SPT_SPIM2EC_MBX) SPI Peripheral Target Master to EC Mailbox Register.  Reset Value */

#define SPT_SPIM2EC_MBX_M2EC_Pos              _UINT32_(0)                                          /* (SPT_SPIM2EC_MBX) Write only register for the Host. When data is written to this register the IBF Flag         is set. EC can read the data and writes of 0xFFFF will clear this register. Any form of         read will clear the flag for this register. Position */
#define SPT_SPIM2EC_MBX_M2EC_Msk              (_UINT32_(0xFFFFFFFF) << SPT_SPIM2EC_MBX_M2EC_Pos)   /* (SPT_SPIM2EC_MBX) Write only register for the Host. When data is written to this register the IBF Flag         is set. EC can read the data and writes of 0xFFFF will clear this register. Any form of         read will clear the flag for this register. Mask */
#define SPT_SPIM2EC_MBX_M2EC(value)           (SPT_SPIM2EC_MBX_M2EC_Msk & (_UINT32_(value) << SPT_SPIM2EC_MBX_M2EC_Pos)) /* Assigment of value for M2EC in the SPT_SPIM2EC_MBX register */
#define SPT_SPIM2EC_MBX_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (SPT_SPIM2EC_MBX) Register Mask  */


/* -------- SPT_EC2SPIM_MBX : (SPT Offset: 0x48) (R/W 32) SPI Peripheral Target Master to EC Mailbox Register. -------- */
#define SPT_EC2SPIM_MBX_RESETVALUE            _UINT32_(0x00)                                       /*  (SPT_EC2SPIM_MBX) SPI Peripheral Target Master to EC Mailbox Register.  Reset Value */

#define SPT_EC2SPIM_MBX_EC2M_Pos              _UINT32_(0)                                          /* (SPT_EC2SPIM_MBX) Read only register for the Host. When data is written to this register the OBF Flag         is set. Host can read the data and writes of 0xFFFF_FFFF will clear this register, also         clearing the flag. Any form of read will clear the flag for this register Position */
#define SPT_EC2SPIM_MBX_EC2M_Msk              (_UINT32_(0xFFFFFFFF) << SPT_EC2SPIM_MBX_EC2M_Pos)   /* (SPT_EC2SPIM_MBX) Read only register for the Host. When data is written to this register the OBF Flag         is set. Host can read the data and writes of 0xFFFF_FFFF will clear this register, also         clearing the flag. Any form of read will clear the flag for this register Mask */
#define SPT_EC2SPIM_MBX_EC2M(value)           (SPT_EC2SPIM_MBX_EC2M_Msk & (_UINT32_(value) << SPT_EC2SPIM_MBX_EC2M_Pos)) /* Assigment of value for EC2M in the SPT_EC2SPIM_MBX register */
#define SPT_EC2SPIM_MBX_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (SPT_EC2SPIM_MBX) Register Mask  */


/** \brief SPT register offsets definitions */
#define SPT_SPI_CFG_REG_OFST           _UINT32_(0x00)      /* (SPT_SPI_CFG) SPI Peripheral Target Communication Configuration Register. Offset */
#define SPT_SPI_STS_REG_OFST           _UINT32_(0x04)      /* (SPT_SPI_STS) SPI Peripheral Target Status Register. Offset */
#define SPT_SPI_EC_STS_REG_OFST        _UINT32_(0x08)      /* (SPT_SPI_EC_STS) SPI Peripheral Target EC Status Register. Offset */
#define SPT_SPI_IEN_REG_OFST           _UINT32_(0x0C)      /* (SPT_SPI_IEN) SPI Peripheral Target Interrupt Enable Register. Offset */
#define SPT_EC_IEN_REG_OFST            _UINT32_(0x10)      /* (SPT_EC_IEN) SPI Peripheral Target EC Interrupt Enable Register. Offset */
#define SPT_MEM_CFG_REG_OFST           _UINT32_(0x14)      /* (SPT_MEM_CFG) SPI Peripheral Target Memory Configuration Register. Offset */
#define SPT_MEM_BAR0_REG_OFST          _UINT32_(0x18)      /* (SPT_MEM_BAR0) SPI Peripheral Target Memory Base Address0 Register. Offset */
#define SPT_MEM_WR_LIM0_REG_OFST       _UINT32_(0x1C)      /* (SPT_MEM_WR_LIM0) SPI Peripheral Target Memory Write LIMIT 0 Register. Offset */
#define SPT_MEM_RD_LIM0_REG_OFST       _UINT32_(0x20)      /* (SPT_MEM_RD_LIM0) SPI Peripheral Target Memory Read LIMIT 0 Register. Offset */
#define SPT_MEM_BAR1_REG_OFST          _UINT32_(0x24)      /* (SPT_MEM_BAR1) SPI Peripheral Target Memory Base Address1 Register. Offset */
#define SPT_MEM_WR_LIM1_REG_OFST       _UINT32_(0x28)      /* (SPT_MEM_WR_LIM1) SPI Peripheral Target Memory Write LIMIT 1 Register. Offset */
#define SPT_MEM_RD_LIM1_REG_OFST       _UINT32_(0x2C)      /* (SPT_MEM_RD_LIM1) SPI Peripheral Target Memory Read LIMIT 1 Register. Offset */
#define SPT_RXF_HOST_BAR_REG_OFST      _UINT32_(0x30)      /* (SPT_RXF_HOST_BAR) SPI Peripheral Target RX FIFO Host Bar Register. Offset */
#define SPT_RXF_BYTE_CNT_REG_OFST      _UINT32_(0x34)      /* (SPT_RXF_BYTE_CNT) SPI Peripheral Target RX FIFO Byte Counter Register. Offset */
#define SPT_TXF_HOST_BAR_REG_OFST      _UINT32_(0x38)      /* (SPT_TXF_HOST_BAR) SPI Peripheral Target TX FIFO Host Bar Register. Offset */
#define SPT_TXF_BYTE_CNT_REG_OFST      _UINT32_(0x3C)      /* (SPT_TXF_BYTE_CNT) SPI Peripheral Target TX FIFO Byte Counter Register. Offset */
#define SPT_SYS_CFG_REG_OFST           _UINT32_(0x40)      /* (SPT_SYS_CFG) SPI Peripheral Target System Configuration Register. Offset */
#define SPT_SPIM2EC_MBX_REG_OFST       _UINT32_(0x44)      /* (SPT_SPIM2EC_MBX) SPI Peripheral Target Master to EC Mailbox Register. Offset */
#define SPT_EC2SPIM_MBX_REG_OFST       _UINT32_(0x48)      /* (SPT_EC2SPIM_MBX) SPI Peripheral Target Master to EC Mailbox Register. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SPT register API structure */
typedef struct
{  /* SPI Peripheral Target Register. */
  __IO  uint32_t                       SPT_SPI_CFG;        /**< Offset: 0x00 (R/W  32) SPI Peripheral Target Communication Configuration Register. */
  __IO  uint32_t                       SPT_SPI_STS;        /**< Offset: 0x04 (R/W  32) SPI Peripheral Target Status Register. */
  __IO  uint32_t                       SPT_SPI_EC_STS;     /**< Offset: 0x08 (R/W  32) SPI Peripheral Target EC Status Register. */
  __IO  uint32_t                       SPT_SPI_IEN;        /**< Offset: 0x0C (R/W  32) SPI Peripheral Target Interrupt Enable Register. */
  __IO  uint32_t                       SPT_EC_IEN;         /**< Offset: 0x10 (R/W  32) SPI Peripheral Target EC Interrupt Enable Register. */
  __IO  uint32_t                       SPT_MEM_CFG;        /**< Offset: 0x14 (R/W  32) SPI Peripheral Target Memory Configuration Register. */
  __IO  uint32_t                       SPT_MEM_BAR0;       /**< Offset: 0x18 (R/W  32) SPI Peripheral Target Memory Base Address0 Register. */
  __IO  uint32_t                       SPT_MEM_WR_LIM0;    /**< Offset: 0x1C (R/W  32) SPI Peripheral Target Memory Write LIMIT 0 Register. */
  __IO  uint32_t                       SPT_MEM_RD_LIM0;    /**< Offset: 0x20 (R/W  32) SPI Peripheral Target Memory Read LIMIT 0 Register. */
  __IO  uint32_t                       SPT_MEM_BAR1;       /**< Offset: 0x24 (R/W  32) SPI Peripheral Target Memory Base Address1 Register. */
  __IO  uint32_t                       SPT_MEM_WR_LIM1;    /**< Offset: 0x28 (R/W  32) SPI Peripheral Target Memory Write LIMIT 1 Register. */
  __IO  uint32_t                       SPT_MEM_RD_LIM1;    /**< Offset: 0x2C (R/W  32) SPI Peripheral Target Memory Read LIMIT 1 Register. */
  __I   uint32_t                       SPT_RXF_HOST_BAR;   /**< Offset: 0x30 (R/   32) SPI Peripheral Target RX FIFO Host Bar Register. */
  __I   uint32_t                       SPT_RXF_BYTE_CNT;   /**< Offset: 0x34 (R/   32) SPI Peripheral Target RX FIFO Byte Counter Register. */
  __I   uint32_t                       SPT_TXF_HOST_BAR;   /**< Offset: 0x38 (R/   32) SPI Peripheral Target TX FIFO Host Bar Register. */
  __I   uint32_t                       SPT_TXF_BYTE_CNT;   /**< Offset: 0x3C (R/   32) SPI Peripheral Target TX FIFO Byte Counter Register. */
  __IO  uint32_t                       SPT_SYS_CFG;        /**< Offset: 0x40 (R/W  32) SPI Peripheral Target System Configuration Register. */
  __IO  uint32_t                       SPT_SPIM2EC_MBX;    /**< Offset: 0x44 (R/W  32) SPI Peripheral Target Master to EC Mailbox Register. */
  __IO  uint32_t                       SPT_EC2SPIM_MBX;    /**< Offset: 0x48 (R/W  32) SPI Peripheral Target Master to EC Mailbox Register. */
} spt_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_SPT_COMPONENT_H_ */
