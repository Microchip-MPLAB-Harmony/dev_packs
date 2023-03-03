/*
 * Component description for GP_SPI
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description version 2018-10-01T10:50:03Z */
#ifndef _CEC1702Q_GP_SPI_COMPONENT_H_
#define _CEC1702Q_GP_SPI_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR GP_SPI                                       */
/* ************************************************************************** */

/* -------- GP_SPI_ENABLE : (GP_SPI Offset: 0x00) (R/W 32) [0:0]  1=Enabled. The device is fully operational\n          0=Disabled. Clocks are gated to conserve power and the SPDOUT and SPI_CLK signals are set to their inactive state -------- */
#define GP_SPI_ENABLE_RESETVALUE              _UINT32_(0x0F)                                       /*  (GP_SPI_ENABLE) [0:0]  1=Enabled. The device is fully operational\n          0=Disabled. Clocks are gated to conserve power and the SPDOUT and SPI_CLK signals are set to their inactive state  Reset Value */

#define GP_SPI_ENABLE_Msk                     _UINT32_(0x00000000)                                 /* (GP_SPI_ENABLE) Register Mask  */


/* -------- GP_SPI_CTRL : (GP_SPI Offset: 0x04) (R/W 32) SPI Control -------- */
#define GP_SPI_CTRL_RESETVALUE                _UINT32_(0x02)                                       /*  (GP_SPI_CTRL) SPI Control  Reset Value */

#define GP_SPI_CTRL_LSBF_Pos                  _UINT32_(0)                                          /* (GP_SPI_CTRL) Least Significant Bit First\n             1= The data is transferred in LSB-first order.\n        0= The data is transferred in MSB-first order. (default) Position */
#define GP_SPI_CTRL_LSBF_Msk                  (_UINT32_(0x1) << GP_SPI_CTRL_LSBF_Pos)              /* (GP_SPI_CTRL) Least Significant Bit First\n             1= The data is transferred in LSB-first order.\n        0= The data is transferred in MSB-first order. (default) Mask */
#define GP_SPI_CTRL_LSBF(value)               (GP_SPI_CTRL_LSBF_Msk & (_UINT32_(value) << GP_SPI_CTRL_LSBF_Pos)) /* Assigment of value for LSBF in the GP_SPI_CTRL register */
#define GP_SPI_CTRL_BIOEN_Pos                 _UINT32_(1)                                          /* (GP_SPI_CTRL) Bidirectional Output Enable control.\n             1=The SPDOUT_Direction signal configures the SPDOUT signal as an output.\n         0=The SPDOUT_Direction signal configures the SPDOUT signal as an input. Position */
#define GP_SPI_CTRL_BIOEN_Msk                 (_UINT32_(0x1) << GP_SPI_CTRL_BIOEN_Pos)             /* (GP_SPI_CTRL) Bidirectional Output Enable control.\n             1=The SPDOUT_Direction signal configures the SPDOUT signal as an output.\n         0=The SPDOUT_Direction signal configures the SPDOUT signal as an input. Mask */
#define GP_SPI_CTRL_BIOEN(value)              (GP_SPI_CTRL_BIOEN_Msk & (_UINT32_(value) << GP_SPI_CTRL_BIOEN_Pos)) /* Assigment of value for BIOEN in the GP_SPI_CTRL register */
#define GP_SPI_CTRL_SPDIN_SEL_Pos             _UINT32_(2)                                          /* (GP_SPI_CTRL) [3:2] 1xb=SPDIN1 and SPDIN2. Select this option for Dual Mode\n        [3:2] 01b=SPDIN2 only. Select this option for Half Duplex\n                   [3:2] 00b=SPDIN1 only. Select this option for Full Duplex Position */
#define GP_SPI_CTRL_SPDIN_SEL_Msk             (_UINT32_(0x3) << GP_SPI_CTRL_SPDIN_SEL_Pos)         /* (GP_SPI_CTRL) [3:2] 1xb=SPDIN1 and SPDIN2. Select this option for Dual Mode\n        [3:2] 01b=SPDIN2 only. Select this option for Half Duplex\n                   [3:2] 00b=SPDIN1 only. Select this option for Full Duplex Mask */
#define GP_SPI_CTRL_SPDIN_SEL(value)          (GP_SPI_CTRL_SPDIN_SEL_Msk & (_UINT32_(value) << GP_SPI_CTRL_SPDIN_SEL_Pos)) /* Assigment of value for SPDIN_SEL in the GP_SPI_CTRL register */
#define GP_SPI_CTRL_SOFT_RST_Pos              _UINT32_(4)                                          /* (GP_SPI_CTRL) Soft Reset is a self-clearing bit. Writing zero to this bit has no effect. \n      Writing a one to this bit resets the entire SPI Interface, including all counters and registers back to their initial state. Position */
#define GP_SPI_CTRL_SOFT_RST_Msk              (_UINT32_(0x1) << GP_SPI_CTRL_SOFT_RST_Pos)          /* (GP_SPI_CTRL) Soft Reset is a self-clearing bit. Writing zero to this bit has no effect. \n      Writing a one to this bit resets the entire SPI Interface, including all counters and registers back to their initial state. Mask */
#define GP_SPI_CTRL_SOFT_RST(value)           (GP_SPI_CTRL_SOFT_RST_Msk & (_UINT32_(value) << GP_SPI_CTRL_SOFT_RST_Pos)) /* Assigment of value for SOFT_RST in the GP_SPI_CTRL register */
#define GP_SPI_CTRL_AUTO_RD_Pos               _UINT32_(5)                                          /* (GP_SPI_CTRL) Auto Read Enable.\n             1=A read of the SPI RX_DATA Register will clear both the RXBF status bit and the TXBE status bit\n          0=A read of the SPI RX_DATA Register will clear the RXBF status bit. The TXBE status bit will not be modified Position */
#define GP_SPI_CTRL_AUTO_RD_Msk               (_UINT32_(0x1) << GP_SPI_CTRL_AUTO_RD_Pos)           /* (GP_SPI_CTRL) Auto Read Enable.\n             1=A read of the SPI RX_DATA Register will clear both the RXBF status bit and the TXBE status bit\n          0=A read of the SPI RX_DATA Register will clear the RXBF status bit. The TXBE status bit will not be modified Mask */
#define GP_SPI_CTRL_AUTO_RD(value)            (GP_SPI_CTRL_AUTO_RD_Msk & (_UINT32_(value) << GP_SPI_CTRL_AUTO_RD_Pos)) /* Assigment of value for AUTO_RD in the GP_SPI_CTRL register */
#define GP_SPI_CTRL_CE_Pos                    _UINT32_(6)                                          /* (GP_SPI_CTRL) SPI Chip Select Enable.\n                 1= SPI_CS# output signal is asserted, i.e., driven to logic '0' \n                    0= SPI_CS# output signal is deasserted, i.e., driven to logic '1' Position */
#define GP_SPI_CTRL_CE_Msk                    (_UINT32_(0x1) << GP_SPI_CTRL_CE_Pos)                /* (GP_SPI_CTRL) SPI Chip Select Enable.\n                 1= SPI_CS# output signal is asserted, i.e., driven to logic '0' \n                    0= SPI_CS# output signal is deasserted, i.e., driven to logic '1' Mask */
#define GP_SPI_CTRL_CE(value)                 (GP_SPI_CTRL_CE_Msk & (_UINT32_(value) << GP_SPI_CTRL_CE_Pos)) /* Assigment of value for CE in the GP_SPI_CTRL register */
#define GP_SPI_CTRL_Msk                       _UINT32_(0x0000007F)                                 /* (GP_SPI_CTRL) Register Mask  */


/* -------- GP_SPI_STS : (GP_SPI Offset: 0x08) ( R/ 32) SPI Status -------- */
#define GP_SPI_STS_RESETVALUE                 _UINT32_(0x00)                                       /*  (GP_SPI_STS) SPI Status  Reset Value */

#define GP_SPI_STS_TXBE_Pos                   _UINT32_(0)                                          /* (GP_SPI_STS) 1=TX_Data buffer is empty, 0=TX_Data buffer is not empty Position */
#define GP_SPI_STS_TXBE_Msk                   (_UINT32_(0x1) << GP_SPI_STS_TXBE_Pos)               /* (GP_SPI_STS) 1=TX_Data buffer is empty, 0=TX_Data buffer is not empty Mask */
#define GP_SPI_STS_TXBE(value)                (GP_SPI_STS_TXBE_Msk & (_UINT32_(value) << GP_SPI_STS_TXBE_Pos)) /* Assigment of value for TXBE in the GP_SPI_STS register */
#define GP_SPI_STS_RXBF_Pos                   _UINT32_(1)                                          /* (GP_SPI_STS) 1=RX_Data buffer is full, 0=RX_Data buffer is not full Position */
#define GP_SPI_STS_RXBF_Msk                   (_UINT32_(0x1) << GP_SPI_STS_RXBF_Pos)               /* (GP_SPI_STS) 1=RX_Data buffer is full, 0=RX_Data buffer is not full Mask */
#define GP_SPI_STS_RXBF(value)                (GP_SPI_STS_RXBF_Msk & (_UINT32_(value) << GP_SPI_STS_RXBF_Pos)) /* Assigment of value for RXBF in the GP_SPI_STS register */
#define GP_SPI_STS_ACTIVE_Pos                 _UINT32_(2)                                          /* (GP_SPI_STS) ACTIVE status Position */
#define GP_SPI_STS_ACTIVE_Msk                 (_UINT32_(0x1) << GP_SPI_STS_ACTIVE_Pos)             /* (GP_SPI_STS) ACTIVE status Mask */
#define GP_SPI_STS_ACTIVE(value)              (GP_SPI_STS_ACTIVE_Msk & (_UINT32_(value) << GP_SPI_STS_ACTIVE_Pos)) /* Assigment of value for ACTIVE in the GP_SPI_STS register */
#define GP_SPI_STS_Msk                        _UINT32_(0x00000007)                                 /* (GP_SPI_STS) Register Mask  */


/* -------- GP_SPI_TX_DAT : (GP_SPI Offset: 0x0C) (R/W 32) [7:0]  A write to this register when the \n       Tx_Data buffer is empty (TXBE in the SPI Status Register is '1') initiates a SPI transaction. -------- */
#define GP_SPI_TX_DAT_RESETVALUE              _UINT32_(0x00)                                       /*  (GP_SPI_TX_DAT) [7:0]  A write to this register when the \n       Tx_Data buffer is empty (TXBE in the SPI Status Register is '1') initiates a SPI transaction.  Reset Value */

#define GP_SPI_TX_DAT_Msk                     _UINT32_(0x00000000)                                 /* (GP_SPI_TX_DAT) Register Mask  */


/* -------- GP_SPI_RX_DAT : (GP_SPI Offset: 0x10) (R/W 32) [7:0] This register is used to read the value returned by the external SPI device. -------- */
#define GP_SPI_RX_DAT_RESETVALUE              _UINT32_(0x00)                                       /*  (GP_SPI_RX_DAT) [7:0] This register is used to read the value returned by the external SPI device.  Reset Value */

#define GP_SPI_RX_DAT_Msk                     _UINT32_(0x00000000)                                 /* (GP_SPI_RX_DAT) Register Mask  */


/* -------- GP_SPI_CLK_CTRL : (GP_SPI Offset: 0x14) (R/W 32) SPI Clock Control. This register should not be changed during an active SPI transaction. -------- */
#define GP_SPI_CLK_CTRL_RESETVALUE            _UINT32_(0x00)                                       /*  (GP_SPI_CLK_CTRL) SPI Clock Control. This register should not be changed during an active SPI transaction.  Reset Value */

#define GP_SPI_CLK_CTRL_TCLKPH_Pos            _UINT32_(0)                                          /* (GP_SPI_CLK_CTRL) 1=Valid data is clocked out on the first SPI_CLK edge on SPDOUT signal. The slave device should sample this data on the second and \n       following even SPI_CLK edges (i.e., sample data on falling edge) 0=Valid data is clocked out on the SPDOUT signal prior to the first SPI_CLK edge. \n       The slave device should sample this data on the first and following odd SPI_CLK edges (i.e., sample data on rising edge) Position */
#define GP_SPI_CLK_CTRL_TCLKPH_Msk            (_UINT32_(0x1) << GP_SPI_CLK_CTRL_TCLKPH_Pos)        /* (GP_SPI_CLK_CTRL) 1=Valid data is clocked out on the first SPI_CLK edge on SPDOUT signal. The slave device should sample this data on the second and \n       following even SPI_CLK edges (i.e., sample data on falling edge) 0=Valid data is clocked out on the SPDOUT signal prior to the first SPI_CLK edge. \n       The slave device should sample this data on the first and following odd SPI_CLK edges (i.e., sample data on rising edge) Mask */
#define GP_SPI_CLK_CTRL_TCLKPH(value)         (GP_SPI_CLK_CTRL_TCLKPH_Msk & (_UINT32_(value) << GP_SPI_CLK_CTRL_TCLKPH_Pos)) /* Assigment of value for TCLKPH in the GP_SPI_CLK_CTRL register */
#define GP_SPI_CLK_CTRL_RCLKPH_Pos            _UINT32_(1)                                          /* (GP_SPI_CLK_CTRL) 1=Valid data on SPDIN signal is expected after the first SPI_CLK edge. This data is sampled on the second and \n       following even SPI_CLK edges (i.e., sample data on falling edge) 0=Valid data is expected on the SPDIN signal on the first SPI_CLK edge. \n       This data is sampled on the first and following odd SPI_-CLK edges (i.e., sample data on rising edge) Position */
#define GP_SPI_CLK_CTRL_RCLKPH_Msk            (_UINT32_(0x1) << GP_SPI_CLK_CTRL_RCLKPH_Pos)        /* (GP_SPI_CLK_CTRL) 1=Valid data on SPDIN signal is expected after the first SPI_CLK edge. This data is sampled on the second and \n       following even SPI_CLK edges (i.e., sample data on falling edge) 0=Valid data is expected on the SPDIN signal on the first SPI_CLK edge. \n       This data is sampled on the first and following odd SPI_-CLK edges (i.e., sample data on rising edge) Mask */
#define GP_SPI_CLK_CTRL_RCLKPH(value)         (GP_SPI_CLK_CTRL_RCLKPH_Msk & (_UINT32_(value) << GP_SPI_CLK_CTRL_RCLKPH_Pos)) /* Assigment of value for RCLKPH in the GP_SPI_CLK_CTRL register */
#define GP_SPI_CLK_CTRL_CLKPOL_Pos            _UINT32_(2)                                          /* (GP_SPI_CLK_CTRL) 1=The SPI_CLK signal is high when the interface is idle and the first clock edge is a falling edge\n            0=The SPI_CLK is low when the interface is idle and the first clock edge is a rising edge Position */
#define GP_SPI_CLK_CTRL_CLKPOL_Msk            (_UINT32_(0x1) << GP_SPI_CLK_CTRL_CLKPOL_Pos)        /* (GP_SPI_CLK_CTRL) 1=The SPI_CLK signal is high when the interface is idle and the first clock edge is a falling edge\n            0=The SPI_CLK is low when the interface is idle and the first clock edge is a rising edge Mask */
#define GP_SPI_CLK_CTRL_CLKPOL(value)         (GP_SPI_CLK_CTRL_CLKPOL_Msk & (_UINT32_(value) << GP_SPI_CLK_CTRL_CLKPOL_Pos)) /* Assigment of value for CLKPOL in the GP_SPI_CLK_CTRL register */
#define GP_SPI_CLK_CTRL_CLKSRC_Pos            _UINT32_(4)                                          /* (GP_SPI_CLK_CTRL) 1=2MHz, 0=48 MHz Ring Oscillator Position */
#define GP_SPI_CLK_CTRL_CLKSRC_Msk            (_UINT32_(0x1) << GP_SPI_CLK_CTRL_CLKSRC_Pos)        /* (GP_SPI_CLK_CTRL) 1=2MHz, 0=48 MHz Ring Oscillator Mask */
#define GP_SPI_CLK_CTRL_CLKSRC(value)         (GP_SPI_CLK_CTRL_CLKSRC_Msk & (_UINT32_(value) << GP_SPI_CLK_CTRL_CLKSRC_Pos)) /* Assigment of value for CLKSRC in the GP_SPI_CLK_CTRL register */
#define GP_SPI_CLK_CTRL_Msk                   _UINT32_(0x00000017)                                 /* (GP_SPI_CLK_CTRL) Register Mask  */


/* -------- GP_SPI_CLK_GEN : (GP_SPI Offset: 0x18) (R/W 32) [5:0] PRELOAD SPI Clock Generator Preload value. -------- */
#define GP_SPI_CLK_GEN_RESETVALUE             _UINT32_(0x02)                                       /*  (GP_SPI_CLK_GEN) [5:0] PRELOAD SPI Clock Generator Preload value.  Reset Value */

#define GP_SPI_CLK_GEN_PRLD_Pos               _UINT32_(0)                                          /* (GP_SPI_CLK_GEN) SPI Clock Generator Preload Value Position */
#define GP_SPI_CLK_GEN_PRLD_Msk               (_UINT32_(0x3F) << GP_SPI_CLK_GEN_PRLD_Pos)          /* (GP_SPI_CLK_GEN) SPI Clock Generator Preload Value Mask */
#define GP_SPI_CLK_GEN_PRLD(value)            (GP_SPI_CLK_GEN_PRLD_Msk & (_UINT32_(value) << GP_SPI_CLK_GEN_PRLD_Pos)) /* Assigment of value for PRLD in the GP_SPI_CLK_GEN register */
#define GP_SPI_CLK_GEN_Msk                    _UINT32_(0x0000003F)                                 /* (GP_SPI_CLK_GEN) Register Mask  */


/** \brief GP_SPI register offsets definitions */
#define GP_SPI_ENABLE_REG_OFST         _UINT32_(0x00)      /* (GP_SPI_ENABLE) [0:0]  1=Enabled. The device is fully operational\n          0=Disabled. Clocks are gated to conserve power and the SPDOUT and SPI_CLK signals are set to their inactive state Offset */
#define GP_SPI_CTRL_REG_OFST           _UINT32_(0x04)      /* (GP_SPI_CTRL) SPI Control Offset */
#define GP_SPI_STS_REG_OFST            _UINT32_(0x08)      /* (GP_SPI_STS) SPI Status Offset */
#define GP_SPI_TX_DAT_REG_OFST         _UINT32_(0x0C)      /* (GP_SPI_TX_DAT) [7:0]  A write to this register when the \n       Tx_Data buffer is empty (TXBE in the SPI Status Register is '1') initiates a SPI transaction. Offset */
#define GP_SPI_RX_DAT_REG_OFST         _UINT32_(0x10)      /* (GP_SPI_RX_DAT) [7:0] This register is used to read the value returned by the external SPI device. Offset */
#define GP_SPI_CLK_CTRL_REG_OFST       _UINT32_(0x14)      /* (GP_SPI_CLK_CTRL) SPI Clock Control. This register should not be changed during an active SPI transaction. Offset */
#define GP_SPI_CLK_GEN_REG_OFST        _UINT32_(0x18)      /* (GP_SPI_CLK_GEN) [5:0] PRELOAD SPI Clock Generator Preload value. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief GP_SPI register API structure */
typedef struct
{  /* The General Purpose Serial Peripheral Interface (GP-SPI) may be used\n          to communicate with various peripheral devices, e.g., EEPROMS, DACs, ADCs, that use a\n           standard Serial Peripheral Interface. */
  __IO  uint32_t                       GP_SPI_ENABLE;      /**< Offset: 0x00 (R/W  32) [0:0]  1=Enabled. The device is fully operational\n          0=Disabled. Clocks are gated to conserve power and the SPDOUT and SPI_CLK signals are set to their inactive state */
  __IO  uint32_t                       GP_SPI_CTRL;        /**< Offset: 0x04 (R/W  32) SPI Control */
  __I   uint32_t                       GP_SPI_STS;         /**< Offset: 0x08 (R/   32) SPI Status */
  __IO  uint32_t                       GP_SPI_TX_DAT;      /**< Offset: 0x0C (R/W  32) [7:0]  A write to this register when the \n       Tx_Data buffer is empty (TXBE in the SPI Status Register is '1') initiates a SPI transaction. */
  __IO  uint32_t                       GP_SPI_RX_DAT;      /**< Offset: 0x10 (R/W  32) [7:0] This register is used to read the value returned by the external SPI device. */
  __IO  uint32_t                       GP_SPI_CLK_CTRL;    /**< Offset: 0x14 (R/W  32) SPI Clock Control. This register should not be changed during an active SPI transaction. */
  __IO  uint32_t                       GP_SPI_CLK_GEN;     /**< Offset: 0x18 (R/W  32) [5:0] PRELOAD SPI Clock Generator Preload value. */
} gp_spi_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC1702Q_GP_SPI_COMPONENT_H_ */
