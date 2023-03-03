/*
 * Component description for SMB
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
#ifndef _CEC1702Q_SMB_COMPONENT_H_
#define _CEC1702Q_SMB_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SMB                                          */
/* ************************************************************************** */

/* -------- SMB_WCTRL : (SMB Offset: 0x00) ( /W 32) Control Register -------- */
#define SMB_WCTRL_RESETVALUE                  _UINT32_(0x00)                                       /*  (SMB_WCTRL) Control Register  Reset Value */

#define SMB_WCTRL_ACK_Pos                     _UINT32_(0)                                          /* (SMB_WCTRL) The Acknowledge bit (ACK) must normally be asserted ('1'). This causes the controller to send an acknowledge automatically after each byte (this occurs during the 9th clock pulse). The ACK bit must not be asserted ('0') when the controller is operating in master/receiver mode and requires no further data to be sent from the slave transmitter. This causes a negative acknowledge on the I2C bus, which halts further transmission from the slave device. Position */
#define SMB_WCTRL_ACK_Msk                     (_UINT32_(0x1) << SMB_WCTRL_ACK_Pos)                 /* (SMB_WCTRL) The Acknowledge bit (ACK) must normally be asserted ('1'). This causes the controller to send an acknowledge automatically after each byte (this occurs during the 9th clock pulse). The ACK bit must not be asserted ('0') when the controller is operating in master/receiver mode and requires no further data to be sent from the slave transmitter. This causes a negative acknowledge on the I2C bus, which halts further transmission from the slave device. Mask */
#define SMB_WCTRL_ACK(value)                  (SMB_WCTRL_ACK_Msk & (_UINT32_(value) << SMB_WCTRL_ACK_Pos)) /* Assigment of value for ACK in the SMB_WCTRL register */
#define SMB_WCTRL_STO_Pos                     _UINT32_(1)                                          /* (SMB_WCTRL) See STA description Position */
#define SMB_WCTRL_STO_Msk                     (_UINT32_(0x1) << SMB_WCTRL_STO_Pos)                 /* (SMB_WCTRL) See STA description Mask */
#define SMB_WCTRL_STO(value)                  (SMB_WCTRL_STO_Msk & (_UINT32_(value) << SMB_WCTRL_STO_Pos)) /* Assigment of value for STO in the SMB_WCTRL register */
#define SMB_WCTRL_STA_Pos                     _UINT32_(2)                                          /* (SMB_WCTRL) The STA and STO bits control the generation of the I2C Start condition and the transmission of the Slave Address and R/nW bit (from the Data Register), generation of repeated Start condition, and generation of the Stop condition Position */
#define SMB_WCTRL_STA_Msk                     (_UINT32_(0x1) << SMB_WCTRL_STA_Pos)                 /* (SMB_WCTRL) The STA and STO bits control the generation of the I2C Start condition and the transmission of the Slave Address and R/nW bit (from the Data Register), generation of repeated Start condition, and generation of the Stop condition Mask */
#define SMB_WCTRL_STA(value)                  (SMB_WCTRL_STA_Msk & (_UINT32_(value) << SMB_WCTRL_STA_Pos)) /* Assigment of value for STA in the SMB_WCTRL register */
#define SMB_WCTRL_ENI_Pos                     _UINT32_(3)                                          /* (SMB_WCTRL) Enable Interrupt bit (ENI) controls the Interrupt Interface Position */
#define SMB_WCTRL_ENI_Msk                     (_UINT32_(0x1) << SMB_WCTRL_ENI_Pos)                 /* (SMB_WCTRL) Enable Interrupt bit (ENI) controls the Interrupt Interface Mask */
#define SMB_WCTRL_ENI(value)                  (SMB_WCTRL_ENI_Msk & (_UINT32_(value) << SMB_WCTRL_ENI_Pos)) /* Assigment of value for ENI in the SMB_WCTRL register */
#define SMB_WCTRL_ESO_Pos                     _UINT32_(6)                                          /* (SMB_WCTRL) The Enable Serial Output bit (ESO) enables and disables the SMB Controller Core serial data output (SDAT) Position */
#define SMB_WCTRL_ESO_Msk                     (_UINT32_(0x1) << SMB_WCTRL_ESO_Pos)                 /* (SMB_WCTRL) The Enable Serial Output bit (ESO) enables and disables the SMB Controller Core serial data output (SDAT) Mask */
#define SMB_WCTRL_ESO(value)                  (SMB_WCTRL_ESO_Msk & (_UINT32_(value) << SMB_WCTRL_ESO_Pos)) /* Assigment of value for ESO in the SMB_WCTRL register */
#define SMB_WCTRL_PIN_Pos                     _UINT32_(7)                                          /* (SMB_WCTRL) The Pending Interrupt Not (PIN) bit serves as a software reset function. Writing the PIN bit to a logic '1' de-asserts all status bits except for the nBB bit which is not affected by the PIN bit. The PIN bit is a self-clearing bit. Writing this bit to a logic '0' has no effect. Position */
#define SMB_WCTRL_PIN_Msk                     (_UINT32_(0x1) << SMB_WCTRL_PIN_Pos)                 /* (SMB_WCTRL) The Pending Interrupt Not (PIN) bit serves as a software reset function. Writing the PIN bit to a logic '1' de-asserts all status bits except for the nBB bit which is not affected by the PIN bit. The PIN bit is a self-clearing bit. Writing this bit to a logic '0' has no effect. Mask */
#define SMB_WCTRL_PIN(value)                  (SMB_WCTRL_PIN_Msk & (_UINT32_(value) << SMB_WCTRL_PIN_Pos)) /* Assigment of value for PIN in the SMB_WCTRL register */
#define SMB_WCTRL_Msk                         _UINT32_(0x000000CF)                                 /* (SMB_WCTRL) Register Mask  */


/* -------- SMB_RSTS : (SMB Offset: 0x00) ( R/ 32) Status Register -------- */
#define SMB_RSTS_RESETVALUE                   _UINT32_(0x00)                                       /*  (SMB_RSTS) Status Register  Reset Value */

#define SMB_RSTS_NBB_Pos                      _UINT32_(0)                                          /* (SMB_RSTS) The Bus Busy bit (NBB) is a read-only flag indicating when the bus is in use. A zero indicates that the bus is busy and access is not possible. Position */
#define SMB_RSTS_NBB_Msk                      (_UINT32_(0x1) << SMB_RSTS_NBB_Pos)                  /* (SMB_RSTS) The Bus Busy bit (NBB) is a read-only flag indicating when the bus is in use. A zero indicates that the bus is busy and access is not possible. Mask */
#define SMB_RSTS_NBB(value)                   (SMB_RSTS_NBB_Msk & (_UINT32_(value) << SMB_RSTS_NBB_Pos)) /* Assigment of value for NBB in the SMB_RSTS register */
#define SMB_RSTS_LAB_Pos                      _UINT32_(1)                                          /* (SMB_RSTS) The Lost Arbitration Bit (LAB) is set when, in multi-master operation, arbitration is lost to another master on the bus Position */
#define SMB_RSTS_LAB_Msk                      (_UINT32_(0x1) << SMB_RSTS_LAB_Pos)                  /* (SMB_RSTS) The Lost Arbitration Bit (LAB) is set when, in multi-master operation, arbitration is lost to another master on the bus Mask */
#define SMB_RSTS_LAB(value)                   (SMB_RSTS_LAB_Msk & (_UINT32_(value) << SMB_RSTS_LAB_Pos)) /* Assigment of value for LAB in the SMB_RSTS register */
#define SMB_RSTS_AAS_Pos                      _UINT32_(2)                                          /* (SMB_RSTS) The Addressed As Slave bit (AAS) is valid only when PIN is asserted ('0'). When acting as slave, AAS is set when an incoming address over the bus matches the value in the Own Address Register or if the 'general call' address (00h) has been received Position */
#define SMB_RSTS_AAS_Msk                      (_UINT32_(0x1) << SMB_RSTS_AAS_Pos)                  /* (SMB_RSTS) The Addressed As Slave bit (AAS) is valid only when PIN is asserted ('0'). When acting as slave, AAS is set when an incoming address over the bus matches the value in the Own Address Register or if the 'general call' address (00h) has been received Mask */
#define SMB_RSTS_AAS(value)                   (SMB_RSTS_AAS_Msk & (_UINT32_(value) << SMB_RSTS_AAS_Pos)) /* Assigment of value for AAS in the SMB_RSTS register */
#define SMB_RSTS_LRB_AD0_Pos                  _UINT32_(3)                                          /* (SMB_RSTS) The Last Received Bit  or Address 0 (general call) bit (LRB/AD0) serves a dual function and is valid only while the PIN bit is asserted ('0').\n                When the AAS bit is not asserted ('0') (i.e., not addressed as a slave), the LRB/AD0 holds the value of the last received bit over the bus.\n                When the AAS bit is asserted ('1') (i.e., addressed as slave), the SMB Controller Core has been addressed as a slave. Position */
#define SMB_RSTS_LRB_AD0_Msk                  (_UINT32_(0x1) << SMB_RSTS_LRB_AD0_Pos)              /* (SMB_RSTS) The Last Received Bit  or Address 0 (general call) bit (LRB/AD0) serves a dual function and is valid only while the PIN bit is asserted ('0').\n                When the AAS bit is not asserted ('0') (i.e., not addressed as a slave), the LRB/AD0 holds the value of the last received bit over the bus.\n                When the AAS bit is asserted ('1') (i.e., addressed as slave), the SMB Controller Core has been addressed as a slave. Mask */
#define SMB_RSTS_LRB_AD0(value)               (SMB_RSTS_LRB_AD0_Msk & (_UINT32_(value) << SMB_RSTS_LRB_AD0_Pos)) /* Assigment of value for LRB_AD0 in the SMB_RSTS register */
#define SMB_RSTS_BER_Pos                      _UINT32_(4)                                          /* (SMB_RSTS) When Bus Error (BER) is asserted, a misplaced START or STOP condition or Bus Time-Outs have been detected. Position */
#define SMB_RSTS_BER_Msk                      (_UINT32_(0x1) << SMB_RSTS_BER_Pos)                  /* (SMB_RSTS) When Bus Error (BER) is asserted, a misplaced START or STOP condition or Bus Time-Outs have been detected. Mask */
#define SMB_RSTS_BER(value)                   (SMB_RSTS_BER_Msk & (_UINT32_(value) << SMB_RSTS_BER_Pos)) /* Assigment of value for BER in the SMB_RSTS register */
#define SMB_RSTS_STS_Pos                      _UINT32_(5)                                          /* (SMB_RSTS) When in slave receiver mode, STS is asserted ('1') when an externally generated STOP condition is detected. Note that STS is used only in slave receiver mode. Position */
#define SMB_RSTS_STS_Msk                      (_UINT32_(0x1) << SMB_RSTS_STS_Pos)                  /* (SMB_RSTS) When in slave receiver mode, STS is asserted ('1') when an externally generated STOP condition is detected. Note that STS is used only in slave receiver mode. Mask */
#define SMB_RSTS_STS(value)                   (SMB_RSTS_STS_Msk & (_UINT32_(value) << SMB_RSTS_STS_Pos)) /* Assigment of value for STS in the SMB_RSTS register */
#define SMB_RSTS_SAD_Pos                      _UINT32_(6)                                          /* (SMB_RSTS) SMBus Address Decoded (SAD) Position */
#define SMB_RSTS_SAD_Msk                      (_UINT32_(0x1) << SMB_RSTS_SAD_Pos)                  /* (SMB_RSTS) SMBus Address Decoded (SAD) Mask */
#define SMB_RSTS_SAD(value)                   (SMB_RSTS_SAD_Msk & (_UINT32_(value) << SMB_RSTS_SAD_Pos)) /* Assigment of value for SAD in the SMB_RSTS register */
#define SMB_RSTS_PIN_Pos                      _UINT32_(7)                                          /* (SMB_RSTS) Pending Interrupt bit Position */
#define SMB_RSTS_PIN_Msk                      (_UINT32_(0x1) << SMB_RSTS_PIN_Pos)                  /* (SMB_RSTS) Pending Interrupt bit Mask */
#define SMB_RSTS_PIN(value)                   (SMB_RSTS_PIN_Msk & (_UINT32_(value) << SMB_RSTS_PIN_Pos)) /* Assigment of value for PIN in the SMB_RSTS register */
#define SMB_RSTS_Msk                          _UINT32_(0x000000FF)                                 /* (SMB_RSTS) Register Mask  */

#define SMB_RSTS_LRB_AD_Pos                   _UINT32_(3)                                          /* (SMB_RSTS Position) The Last Received Bit  or Address x (general call) bit (LRB/ADx) serves a dual function and is valid only while the PIN bit is asserted ('x').\n                When the AAS bit is not asserted ('x') (i.e., not addressed as a slave), the LRB/ADx holds the value of the last received bit over the bus.\n                When the AAS bit is asserted ('x') (i.e., addressed as slave), the SMB Controller Core has been addressed as a slave. */
#define SMB_RSTS_LRB_AD_Msk                   (_UINT32_(0x1) << SMB_RSTS_LRB_AD_Pos)               /* (SMB_RSTS Mask) LRB_AD */
#define SMB_RSTS_LRB_AD(value)                (SMB_RSTS_LRB_AD_Msk & (_UINT32_(value) << SMB_RSTS_LRB_AD_Pos)) 

/* -------- SMB_OWN_ADDR : (SMB Offset: 0x04) (R/W 32) Own Address Register\n           Note that the Data Register and Own Address fields are offset by one bit, so that programming Own Address 1 with a value of 55h will result in the value AAh being recognized as the SMB Controller Core slave address. -------- */
#define SMB_OWN_ADDR_RESETVALUE               _UINT32_(0x00)                                       /*  (SMB_OWN_ADDR) Own Address Register\n           Note that the Data Register and Own Address fields are offset by one bit, so that programming Own Address 1 with a value of 55h will result in the value AAh being recognized as the SMB Controller Core slave address.  Reset Value */

#define SMB_OWN_ADDR_ADDR1_Pos                _UINT32_(0)                                          /* (SMB_OWN_ADDR) The Own Address 1 bits configure one of the two addresses to which the SMB Controller Core will respond when addressed as a slave. Position */
#define SMB_OWN_ADDR_ADDR1_Msk                (_UINT32_(0x7F) << SMB_OWN_ADDR_ADDR1_Pos)           /* (SMB_OWN_ADDR) The Own Address 1 bits configure one of the two addresses to which the SMB Controller Core will respond when addressed as a slave. Mask */
#define SMB_OWN_ADDR_ADDR1(value)             (SMB_OWN_ADDR_ADDR1_Msk & (_UINT32_(value) << SMB_OWN_ADDR_ADDR1_Pos)) /* Assigment of value for ADDR1 in the SMB_OWN_ADDR register */
#define SMB_OWN_ADDR_ADDR2_Pos                _UINT32_(8)                                          /* (SMB_OWN_ADDR) The Own Address 2 bits configure one of the two addresses to which the SMB Controller Core will respond when addressed as a slave. Position */
#define SMB_OWN_ADDR_ADDR2_Msk                (_UINT32_(0x7F) << SMB_OWN_ADDR_ADDR2_Pos)           /* (SMB_OWN_ADDR) The Own Address 2 bits configure one of the two addresses to which the SMB Controller Core will respond when addressed as a slave. Mask */
#define SMB_OWN_ADDR_ADDR2(value)             (SMB_OWN_ADDR_ADDR2_Msk & (_UINT32_(value) << SMB_OWN_ADDR_ADDR2_Pos)) /* Assigment of value for ADDR2 in the SMB_OWN_ADDR register */
#define SMB_OWN_ADDR_Msk                      _UINT32_(0x00007F7F)                                 /* (SMB_OWN_ADDR) Register Mask  */


/* -------- SMB_I2CDATA : (SMB Offset: 0x08) (R/W 8) This register holds the data that are either shifted out to or shifted in from the I2C port. -------- */
#define SMB_I2CDATA_RESETVALUE                _UINT8_(0x00)                                        /*  (SMB_I2CDATA) This register holds the data that are either shifted out to or shifted in from the I2C port.  Reset Value */

#define SMB_I2CDATA_Msk                       _UINT8_(0x00)                                        /* (SMB_I2CDATA) Register Mask  */


/* -------- SMB_RSVD1 : (SMB Offset: 0x09) ( R/ 8) Reserved -------- */
#define SMB_RSVD1_RESETVALUE                  _UINT8_(0x00)                                        /*  (SMB_RSVD1) Reserved  Reset Value */

#define SMB_RSVD1_Msk                         _UINT8_(0x00)                                        /* (SMB_RSVD1) Register Mask  */


/* -------- SMB_MCMD_u32 : (SMB Offset: 0x0C) (R/W 32) SMBus Master Command Register -------- */
#define SMB_MCMD_u32_RESETVALUE               _UINT32_(0x00)                                       /*  (SMB_MCMD_u32) SMBus Master Command Register  Reset Value */

#define SMB_MCMD_u32_MRUN_Pos                 _UINT32_(0)                                          /* (SMB_MCMD_u32) While this bit is 1, transfer bytes over SMBus. As long as WriteCount is non-zero, a byte from the Master Transmit Buffer is transmitted to the slave device and WriteCount is decremented. Position */
#define SMB_MCMD_u32_MRUN_Msk                 (_UINT32_(0x1) << SMB_MCMD_u32_MRUN_Pos)             /* (SMB_MCMD_u32) While this bit is 1, transfer bytes over SMBus. As long as WriteCount is non-zero, a byte from the Master Transmit Buffer is transmitted to the slave device and WriteCount is decremented. Mask */
#define SMB_MCMD_u32_MRUN(value)              (SMB_MCMD_u32_MRUN_Msk & (_UINT32_(value) << SMB_MCMD_u32_MRUN_Pos)) /* Assigment of value for MRUN in the SMB_MCMD_u32 register */
#define SMB_MCMD_u32_MPROCEED_Pos             _UINT32_(1)                                          /* (SMB_MCMD_u32) When this bit is 0, the Master State Machine does not transition out of the IDLE or PAUSE states. When this bit is 1, the Master State Machine immediately transitions to the WAIT-BUSBUSY and MRUN-RECEIVE states, respectively. Position */
#define SMB_MCMD_u32_MPROCEED_Msk             (_UINT32_(0x1) << SMB_MCMD_u32_MPROCEED_Pos)         /* (SMB_MCMD_u32) When this bit is 0, the Master State Machine does not transition out of the IDLE or PAUSE states. When this bit is 1, the Master State Machine immediately transitions to the WAIT-BUSBUSY and MRUN-RECEIVE states, respectively. Mask */
#define SMB_MCMD_u32_MPROCEED(value)          (SMB_MCMD_u32_MPROCEED_Msk & (_UINT32_(value) << SMB_MCMD_u32_MPROCEED_Pos)) /* Assigment of value for MPROCEED in the SMB_MCMD_u32 register */
#define SMB_MCMD_u32_START0_Pos               _UINT32_(8)                                          /* (SMB_MCMD_u32) If this bit is 1, send a Start bit on the SMBus before the first byte of the WriteCount is sent to the SMBus transmitter. Position */
#define SMB_MCMD_u32_START0_Msk               (_UINT32_(0x1) << SMB_MCMD_u32_START0_Pos)           /* (SMB_MCMD_u32) If this bit is 1, send a Start bit on the SMBus before the first byte of the WriteCount is sent to the SMBus transmitter. Mask */
#define SMB_MCMD_u32_START0(value)            (SMB_MCMD_u32_START0_Msk & (_UINT32_(value) << SMB_MCMD_u32_START0_Pos)) /* Assigment of value for START0 in the SMB_MCMD_u32 register */
#define SMB_MCMD_u32_STARTN_Pos               _UINT32_(9)                                          /* (SMB_MCMD_u32) If this bit is 1, send a Start bit just before the last byte of the WriteCount is sent to the SMBus transmitter. Position */
#define SMB_MCMD_u32_STARTN_Msk               (_UINT32_(0x1) << SMB_MCMD_u32_STARTN_Pos)           /* (SMB_MCMD_u32) If this bit is 1, send a Start bit just before the last byte of the WriteCount is sent to the SMBus transmitter. Mask */
#define SMB_MCMD_u32_STARTN(value)            (SMB_MCMD_u32_STARTN_Msk & (_UINT32_(value) << SMB_MCMD_u32_STARTN_Pos)) /* Assigment of value for STARTN in the SMB_MCMD_u32 register */
#define SMB_MCMD_u32_STOP_Pos                 _UINT32_(10)                                         /* (SMB_MCMD_u32) If this bit is 1, send a Stop bit after the transaction completes. Position */
#define SMB_MCMD_u32_STOP_Msk                 (_UINT32_(0x1) << SMB_MCMD_u32_STOP_Pos)             /* (SMB_MCMD_u32) If this bit is 1, send a Stop bit after the transaction completes. Mask */
#define SMB_MCMD_u32_STOP(value)              (SMB_MCMD_u32_STOP_Msk & (_UINT32_(value) << SMB_MCMD_u32_STOP_Pos)) /* Assigment of value for STOP in the SMB_MCMD_u32 register */
#define SMB_MCMD_u32_PEC_TERM_Pos             _UINT32_(11)                                         /* (SMB_MCMD_u32) If this bit is 1, a copy of the PEC register is transmitted when WriteCount is 0. After the PEC register is read, both the PEC register and this bit are cleared to 0. Position */
#define SMB_MCMD_u32_PEC_TERM_Msk             (_UINT32_(0x1) << SMB_MCMD_u32_PEC_TERM_Pos)         /* (SMB_MCMD_u32) If this bit is 1, a copy of the PEC register is transmitted when WriteCount is 0. After the PEC register is read, both the PEC register and this bit are cleared to 0. Mask */
#define SMB_MCMD_u32_PEC_TERM(value)          (SMB_MCMD_u32_PEC_TERM_Msk & (_UINT32_(value) << SMB_MCMD_u32_PEC_TERM_Pos)) /* Assigment of value for PEC_TERM in the SMB_MCMD_u32 register */
#define SMB_MCMD_u32_READM_Pos                _UINT32_(12)                                         /* (SMB_MCMD_u32) If this bit is 1, then the ReadCount field is replaced by the byte that is read from the SMBus when ReadCount[7:0] is 1. After ReadCount[7:0] is updated, this bit is cleared to 0. Position */
#define SMB_MCMD_u32_READM_Msk                (_UINT32_(0x1) << SMB_MCMD_u32_READM_Pos)            /* (SMB_MCMD_u32) If this bit is 1, then the ReadCount field is replaced by the byte that is read from the SMBus when ReadCount[7:0] is 1. After ReadCount[7:0] is updated, this bit is cleared to 0. Mask */
#define SMB_MCMD_u32_READM(value)             (SMB_MCMD_u32_READM_Msk & (_UINT32_(value) << SMB_MCMD_u32_READM_Pos)) /* Assigment of value for READM in the SMB_MCMD_u32 register */
#define SMB_MCMD_u32_RD_PEC_Pos               _UINT32_(13)                                         /* (SMB_MCMD_u32) If this bit is 0, reading from the SMBus stops when ReadCount reaches 0. If this bit is 1, reading continues when ReadCount is 0 for one more byte. Position */
#define SMB_MCMD_u32_RD_PEC_Msk               (_UINT32_(0x1) << SMB_MCMD_u32_RD_PEC_Pos)           /* (SMB_MCMD_u32) If this bit is 0, reading from the SMBus stops when ReadCount reaches 0. If this bit is 1, reading continues when ReadCount is 0 for one more byte. Mask */
#define SMB_MCMD_u32_RD_PEC(value)            (SMB_MCMD_u32_RD_PEC_Msk & (_UINT32_(value) << SMB_MCMD_u32_RD_PEC_Pos)) /* Assigment of value for RD_PEC in the SMB_MCMD_u32 register */
#define SMB_MCMD_u32_WR_CNT_Pos               _UINT32_(16)                                         /* (SMB_MCMD_u32) This field is a count of the number of bytes to transmit to the SMBus from the SMBus Master Transmit Buffer Register It is decremented by 1 for each byte written to the SMBus from the SMBus Master Transmit Buffer Register. Position */
#define SMB_MCMD_u32_WR_CNT_Msk               (_UINT32_(0xFF) << SMB_MCMD_u32_WR_CNT_Pos)          /* (SMB_MCMD_u32) This field is a count of the number of bytes to transmit to the SMBus from the SMBus Master Transmit Buffer Register It is decremented by 1 for each byte written to the SMBus from the SMBus Master Transmit Buffer Register. Mask */
#define SMB_MCMD_u32_WR_CNT(value)            (SMB_MCMD_u32_WR_CNT_Msk & (_UINT32_(value) << SMB_MCMD_u32_WR_CNT_Pos)) /* Assigment of value for WR_CNT in the SMB_MCMD_u32 register */
#define SMB_MCMD_u32_RD_CNT_Pos               _UINT32_(24)                                         /* (SMB_MCMD_u32) This field is a count of the number of bytes to read in from the SMBus to the SMBus Master Receive Buffer Register and must be greater than 0 in order for the Master State Machine to initiate a read phase. It is decremented by 1 for each byte read from the SMBus into the SMBus Master Receive Buffer Register. It can be overwritten by the first byte read in from the SMBus. Position */
#define SMB_MCMD_u32_RD_CNT_Msk               (_UINT32_(0xFF) << SMB_MCMD_u32_RD_CNT_Pos)          /* (SMB_MCMD_u32) This field is a count of the number of bytes to read in from the SMBus to the SMBus Master Receive Buffer Register and must be greater than 0 in order for the Master State Machine to initiate a read phase. It is decremented by 1 for each byte read from the SMBus into the SMBus Master Receive Buffer Register. It can be overwritten by the first byte read in from the SMBus. Mask */
#define SMB_MCMD_u32_RD_CNT(value)            (SMB_MCMD_u32_RD_CNT_Msk & (_UINT32_(value) << SMB_MCMD_u32_RD_CNT_Pos)) /* Assigment of value for RD_CNT in the SMB_MCMD_u32 register */
#define SMB_MCMD_u32_Msk                      _UINT32_(0xFFFF3F03)                                 /* (SMB_MCMD_u32) Register Mask  */

#define SMB_MCMD_u32_START_Pos                _UINT32_(8)                                          /* (SMB_MCMD_u32 Position) If this bit is x, send a Start bit on the SMBus before the first byte of the WriteCount is sent to the SMBus transmitter. */
#define SMB_MCMD_u32_START_Msk                (_UINT32_(0x1) << SMB_MCMD_u32_START_Pos)            /* (SMB_MCMD_u32 Mask) START */
#define SMB_MCMD_u32_START(value)             (SMB_MCMD_u32_START_Msk & (_UINT32_(value) << SMB_MCMD_u32_START_Pos)) 

/* -------- SMB_MCMD_u16 : (SMB Offset: 0x0C) (R/W 16) SMBus Master Command Register -------- */
#define SMB_MCMD_u16_RESETVALUE               _UINT16_(0x00)                                       /*  (SMB_MCMD_u16) SMBus Master Command Register  Reset Value */

#define SMB_MCMD_u16_MRUN_Pos                 _UINT16_(0)                                          /* (SMB_MCMD_u16) While this bit is 1, transfer bytes over SMBus. As long as WriteCount is non-zero, a byte from the Master Transmit Buffer is transmitted to the slave device and WriteCount is decremented. Position */
#define SMB_MCMD_u16_MRUN_Msk                 (_UINT16_(0x1) << SMB_MCMD_u16_MRUN_Pos)             /* (SMB_MCMD_u16) While this bit is 1, transfer bytes over SMBus. As long as WriteCount is non-zero, a byte from the Master Transmit Buffer is transmitted to the slave device and WriteCount is decremented. Mask */
#define SMB_MCMD_u16_MRUN(value)              (SMB_MCMD_u16_MRUN_Msk & (_UINT16_(value) << SMB_MCMD_u16_MRUN_Pos)) /* Assigment of value for MRUN in the SMB_MCMD_u16 register */
#define SMB_MCMD_u16_MPROCEED_Pos             _UINT16_(1)                                          /* (SMB_MCMD_u16) When this bit is 0, the Master State Machine does not transition out of the IDLE or PAUSE states. When this bit is 1, the Master State Machine immediately transitions to the WAIT-BUSBUSY and MRUN-RECEIVE states, respectively. Position */
#define SMB_MCMD_u16_MPROCEED_Msk             (_UINT16_(0x1) << SMB_MCMD_u16_MPROCEED_Pos)         /* (SMB_MCMD_u16) When this bit is 0, the Master State Machine does not transition out of the IDLE or PAUSE states. When this bit is 1, the Master State Machine immediately transitions to the WAIT-BUSBUSY and MRUN-RECEIVE states, respectively. Mask */
#define SMB_MCMD_u16_MPROCEED(value)          (SMB_MCMD_u16_MPROCEED_Msk & (_UINT16_(value) << SMB_MCMD_u16_MPROCEED_Pos)) /* Assigment of value for MPROCEED in the SMB_MCMD_u16 register */
#define SMB_MCMD_u16_START0_Pos               _UINT16_(8)                                          /* (SMB_MCMD_u16) If this bit is 1, send a Start bit on the SMBus before the first byte of the WriteCount is sent to the SMBus transmitter. Position */
#define SMB_MCMD_u16_START0_Msk               (_UINT16_(0x1) << SMB_MCMD_u16_START0_Pos)           /* (SMB_MCMD_u16) If this bit is 1, send a Start bit on the SMBus before the first byte of the WriteCount is sent to the SMBus transmitter. Mask */
#define SMB_MCMD_u16_START0(value)            (SMB_MCMD_u16_START0_Msk & (_UINT16_(value) << SMB_MCMD_u16_START0_Pos)) /* Assigment of value for START0 in the SMB_MCMD_u16 register */
#define SMB_MCMD_u16_STARTN_Pos               _UINT16_(9)                                          /* (SMB_MCMD_u16) If this bit is 1, send a Start bit just before the last byte of the WriteCount is sent to the SMBus transmitter. Position */
#define SMB_MCMD_u16_STARTN_Msk               (_UINT16_(0x1) << SMB_MCMD_u16_STARTN_Pos)           /* (SMB_MCMD_u16) If this bit is 1, send a Start bit just before the last byte of the WriteCount is sent to the SMBus transmitter. Mask */
#define SMB_MCMD_u16_STARTN(value)            (SMB_MCMD_u16_STARTN_Msk & (_UINT16_(value) << SMB_MCMD_u16_STARTN_Pos)) /* Assigment of value for STARTN in the SMB_MCMD_u16 register */
#define SMB_MCMD_u16_STOP_Pos                 _UINT16_(10)                                         /* (SMB_MCMD_u16) If this bit is 1, send a Stop bit after the transaction completes. Position */
#define SMB_MCMD_u16_STOP_Msk                 (_UINT16_(0x1) << SMB_MCMD_u16_STOP_Pos)             /* (SMB_MCMD_u16) If this bit is 1, send a Stop bit after the transaction completes. Mask */
#define SMB_MCMD_u16_STOP(value)              (SMB_MCMD_u16_STOP_Msk & (_UINT16_(value) << SMB_MCMD_u16_STOP_Pos)) /* Assigment of value for STOP in the SMB_MCMD_u16 register */
#define SMB_MCMD_u16_PEC_TERM_Pos             _UINT16_(11)                                         /* (SMB_MCMD_u16) If this bit is 1, a copy of the PEC register is transmitted when WriteCount is 0. After the PEC register is read, both the PEC register and this bit are cleared to 0. Position */
#define SMB_MCMD_u16_PEC_TERM_Msk             (_UINT16_(0x1) << SMB_MCMD_u16_PEC_TERM_Pos)         /* (SMB_MCMD_u16) If this bit is 1, a copy of the PEC register is transmitted when WriteCount is 0. After the PEC register is read, both the PEC register and this bit are cleared to 0. Mask */
#define SMB_MCMD_u16_PEC_TERM(value)          (SMB_MCMD_u16_PEC_TERM_Msk & (_UINT16_(value) << SMB_MCMD_u16_PEC_TERM_Pos)) /* Assigment of value for PEC_TERM in the SMB_MCMD_u16 register */
#define SMB_MCMD_u16_READM_Pos                _UINT16_(12)                                         /* (SMB_MCMD_u16) If this bit is 1, then the ReadCount field is replaced by the byte that is read from the SMBus when ReadCount[7:0] is 1. After ReadCount[7:0] is updated, this bit is cleared to 0. Position */
#define SMB_MCMD_u16_READM_Msk                (_UINT16_(0x1) << SMB_MCMD_u16_READM_Pos)            /* (SMB_MCMD_u16) If this bit is 1, then the ReadCount field is replaced by the byte that is read from the SMBus when ReadCount[7:0] is 1. After ReadCount[7:0] is updated, this bit is cleared to 0. Mask */
#define SMB_MCMD_u16_READM(value)             (SMB_MCMD_u16_READM_Msk & (_UINT16_(value) << SMB_MCMD_u16_READM_Pos)) /* Assigment of value for READM in the SMB_MCMD_u16 register */
#define SMB_MCMD_u16_READ_PEC_Pos             _UINT16_(13)                                         /* (SMB_MCMD_u16) If this bit is 0, reading from the SMBus stops when ReadCount reaches 0. If this bit is 1, reading continues when ReadCount is 0 for one more byte. Position */
#define SMB_MCMD_u16_READ_PEC_Msk             (_UINT16_(0x1) << SMB_MCMD_u16_READ_PEC_Pos)         /* (SMB_MCMD_u16) If this bit is 0, reading from the SMBus stops when ReadCount reaches 0. If this bit is 1, reading continues when ReadCount is 0 for one more byte. Mask */
#define SMB_MCMD_u16_READ_PEC(value)          (SMB_MCMD_u16_READ_PEC_Msk & (_UINT16_(value) << SMB_MCMD_u16_READ_PEC_Pos)) /* Assigment of value for READ_PEC in the SMB_MCMD_u16 register */
#define SMB_MCMD_u16_WR_CNT_Pos               _UINT16_(16)                                         /* (SMB_MCMD_u16) This field is a count of the number of bytes to transmit to the SMBus from the SMBus Master Transmit Buffer Register It is decremented by 1 for each byte written to the SMBus from the SMBus Master Transmit Buffer Register. Position */
#define SMB_MCMD_u16_WR_CNT_Msk               (_UINT16_(0xFF) << SMB_MCMD_u16_WR_CNT_Pos)          /* (SMB_MCMD_u16) This field is a count of the number of bytes to transmit to the SMBus from the SMBus Master Transmit Buffer Register It is decremented by 1 for each byte written to the SMBus from the SMBus Master Transmit Buffer Register. Mask */
#define SMB_MCMD_u16_WR_CNT(value)            (SMB_MCMD_u16_WR_CNT_Msk & (_UINT16_(value) << SMB_MCMD_u16_WR_CNT_Pos)) /* Assigment of value for WR_CNT in the SMB_MCMD_u16 register */
#define SMB_MCMD_u16_RD_CNT_Pos               _UINT16_(24)                                         /* (SMB_MCMD_u16) This field is a count of the number of bytes to read in from the SMBus to the SMBus Master Receive Buffer Register and must be greater than 0 in order for the Master State Machine to initiate a read phase. It is decremented by 1 for each byte read from the SMBus into the SMBus Master Receive Buffer Register. It can be overwritten by the first byte read in from the SMBus. Position */
#define SMB_MCMD_u16_RD_CNT_Msk               (_UINT16_(0xFF) << SMB_MCMD_u16_RD_CNT_Pos)          /* (SMB_MCMD_u16) This field is a count of the number of bytes to read in from the SMBus to the SMBus Master Receive Buffer Register and must be greater than 0 in order for the Master State Machine to initiate a read phase. It is decremented by 1 for each byte read from the SMBus into the SMBus Master Receive Buffer Register. It can be overwritten by the first byte read in from the SMBus. Mask */
#define SMB_MCMD_u16_RD_CNT(value)            (SMB_MCMD_u16_RD_CNT_Msk & (_UINT16_(value) << SMB_MCMD_u16_RD_CNT_Pos)) /* Assigment of value for RD_CNT in the SMB_MCMD_u16 register */
#define SMB_MCMD_u16_Msk                      _UINT16_(0xFFFF3F03)                                 /* (SMB_MCMD_u16) Register Mask  */

#define SMB_MCMD_u16_START_Pos                _UINT16_(8)                                          /* (SMB_MCMD_u16 Position) If this bit is x, send a Start bit on the SMBus before the first byte of the WriteCount is sent to the SMBus transmitter. */
#define SMB_MCMD_u16_START_Msk                (_UINT16_(0x1) << SMB_MCMD_u16_START_Pos)            /* (SMB_MCMD_u16 Mask) START */
#define SMB_MCMD_u16_START(value)             (SMB_MCMD_u16_START_Msk & (_UINT16_(value) << SMB_MCMD_u16_START_Pos)) 

/* -------- SMB_MCMD_u08 : (SMB Offset: 0x0C) (R/W 8) SMBus Master Command Register -------- */
#define SMB_MCMD_u08_RESETVALUE               _UINT8_(0x00)                                        /*  (SMB_MCMD_u08) SMBus Master Command Register  Reset Value */

#define SMB_MCMD_u08_MRUN_Pos                 _UINT8_(0)                                           /* (SMB_MCMD_u08) While this bit is 1, transfer bytes over SMBus. As long as WriteCount is non-zero, a byte from the Master Transmit Buffer is transmitted to the slave device and WriteCount is decremented. Position */
#define SMB_MCMD_u08_MRUN_Msk                 (_UINT8_(0x1) << SMB_MCMD_u08_MRUN_Pos)              /* (SMB_MCMD_u08) While this bit is 1, transfer bytes over SMBus. As long as WriteCount is non-zero, a byte from the Master Transmit Buffer is transmitted to the slave device and WriteCount is decremented. Mask */
#define SMB_MCMD_u08_MRUN(value)              (SMB_MCMD_u08_MRUN_Msk & (_UINT8_(value) << SMB_MCMD_u08_MRUN_Pos)) /* Assigment of value for MRUN in the SMB_MCMD_u08 register */
#define SMB_MCMD_u08_MPROCEED_Pos             _UINT8_(1)                                           /* (SMB_MCMD_u08) When this bit is 0, the Master State Machine does not transition out of the IDLE or PAUSE states. When this bit is 1, the Master State Machine immediately transitions to the WAIT-BUSBUSY and MRUN-RECEIVE states, respectively. Position */
#define SMB_MCMD_u08_MPROCEED_Msk             (_UINT8_(0x1) << SMB_MCMD_u08_MPROCEED_Pos)          /* (SMB_MCMD_u08) When this bit is 0, the Master State Machine does not transition out of the IDLE or PAUSE states. When this bit is 1, the Master State Machine immediately transitions to the WAIT-BUSBUSY and MRUN-RECEIVE states, respectively. Mask */
#define SMB_MCMD_u08_MPROCEED(value)          (SMB_MCMD_u08_MPROCEED_Msk & (_UINT8_(value) << SMB_MCMD_u08_MPROCEED_Pos)) /* Assigment of value for MPROCEED in the SMB_MCMD_u08 register */
#define SMB_MCMD_u08_START0_Pos               _UINT8_(8)                                           /* (SMB_MCMD_u08) If this bit is 1, send a Start bit on the SMBus before the first byte of the WriteCount is sent to the SMBus transmitter. Position */
#define SMB_MCMD_u08_START0_Msk               (_UINT8_(0x1) << SMB_MCMD_u08_START0_Pos)            /* (SMB_MCMD_u08) If this bit is 1, send a Start bit on the SMBus before the first byte of the WriteCount is sent to the SMBus transmitter. Mask */
#define SMB_MCMD_u08_START0(value)            (SMB_MCMD_u08_START0_Msk & (_UINT8_(value) << SMB_MCMD_u08_START0_Pos)) /* Assigment of value for START0 in the SMB_MCMD_u08 register */
#define SMB_MCMD_u08_STARTN_Pos               _UINT8_(9)                                           /* (SMB_MCMD_u08) If this bit is 1, send a Start bit just before the last byte of the WriteCount is sent to the SMBus transmitter. Position */
#define SMB_MCMD_u08_STARTN_Msk               (_UINT8_(0x1) << SMB_MCMD_u08_STARTN_Pos)            /* (SMB_MCMD_u08) If this bit is 1, send a Start bit just before the last byte of the WriteCount is sent to the SMBus transmitter. Mask */
#define SMB_MCMD_u08_STARTN(value)            (SMB_MCMD_u08_STARTN_Msk & (_UINT8_(value) << SMB_MCMD_u08_STARTN_Pos)) /* Assigment of value for STARTN in the SMB_MCMD_u08 register */
#define SMB_MCMD_u08_STOP_Pos                 _UINT8_(10)                                          /* (SMB_MCMD_u08) If this bit is 1, send a Stop bit after the transaction completes. Position */
#define SMB_MCMD_u08_STOP_Msk                 (_UINT8_(0x1) << SMB_MCMD_u08_STOP_Pos)              /* (SMB_MCMD_u08) If this bit is 1, send a Stop bit after the transaction completes. Mask */
#define SMB_MCMD_u08_STOP(value)              (SMB_MCMD_u08_STOP_Msk & (_UINT8_(value) << SMB_MCMD_u08_STOP_Pos)) /* Assigment of value for STOP in the SMB_MCMD_u08 register */
#define SMB_MCMD_u08_PEC_TERM_Pos             _UINT8_(11)                                          /* (SMB_MCMD_u08) If this bit is 1, a copy of the PEC register is transmitted when WriteCount is 0. After the PEC register is read, both the PEC register and this bit are cleared to 0. Position */
#define SMB_MCMD_u08_PEC_TERM_Msk             (_UINT8_(0x1) << SMB_MCMD_u08_PEC_TERM_Pos)          /* (SMB_MCMD_u08) If this bit is 1, a copy of the PEC register is transmitted when WriteCount is 0. After the PEC register is read, both the PEC register and this bit are cleared to 0. Mask */
#define SMB_MCMD_u08_PEC_TERM(value)          (SMB_MCMD_u08_PEC_TERM_Msk & (_UINT8_(value) << SMB_MCMD_u08_PEC_TERM_Pos)) /* Assigment of value for PEC_TERM in the SMB_MCMD_u08 register */
#define SMB_MCMD_u08_READM_Pos                _UINT8_(12)                                          /* (SMB_MCMD_u08) If this bit is 1, then the ReadCount field is replaced by the byte that is read from the SMBus when ReadCount[7:0] is 1. After ReadCount[7:0] is updated, this bit is cleared to 0. Position */
#define SMB_MCMD_u08_READM_Msk                (_UINT8_(0x1) << SMB_MCMD_u08_READM_Pos)             /* (SMB_MCMD_u08) If this bit is 1, then the ReadCount field is replaced by the byte that is read from the SMBus when ReadCount[7:0] is 1. After ReadCount[7:0] is updated, this bit is cleared to 0. Mask */
#define SMB_MCMD_u08_READM(value)             (SMB_MCMD_u08_READM_Msk & (_UINT8_(value) << SMB_MCMD_u08_READM_Pos)) /* Assigment of value for READM in the SMB_MCMD_u08 register */
#define SMB_MCMD_u08_READ_PEC_Pos             _UINT8_(13)                                          /* (SMB_MCMD_u08) If this bit is 0, reading from the SMBus stops when ReadCount reaches 0. If this bit is 1, reading continues when ReadCount is 0 for one more byte. Position */
#define SMB_MCMD_u08_READ_PEC_Msk             (_UINT8_(0x1) << SMB_MCMD_u08_READ_PEC_Pos)          /* (SMB_MCMD_u08) If this bit is 0, reading from the SMBus stops when ReadCount reaches 0. If this bit is 1, reading continues when ReadCount is 0 for one more byte. Mask */
#define SMB_MCMD_u08_READ_PEC(value)          (SMB_MCMD_u08_READ_PEC_Msk & (_UINT8_(value) << SMB_MCMD_u08_READ_PEC_Pos)) /* Assigment of value for READ_PEC in the SMB_MCMD_u08 register */
#define SMB_MCMD_u08_WR_CNT_Pos               _UINT8_(16)                                          /* (SMB_MCMD_u08) This field is a count of the number of bytes to transmit to the SMBus from the SMBus Master Transmit Buffer Register It is decremented by 1 for each byte written to the SMBus from the SMBus Master Transmit Buffer Register. Position */
#define SMB_MCMD_u08_WR_CNT_Msk               (_UINT8_(0xFF) << SMB_MCMD_u08_WR_CNT_Pos)           /* (SMB_MCMD_u08) This field is a count of the number of bytes to transmit to the SMBus from the SMBus Master Transmit Buffer Register It is decremented by 1 for each byte written to the SMBus from the SMBus Master Transmit Buffer Register. Mask */
#define SMB_MCMD_u08_WR_CNT(value)            (SMB_MCMD_u08_WR_CNT_Msk & (_UINT8_(value) << SMB_MCMD_u08_WR_CNT_Pos)) /* Assigment of value for WR_CNT in the SMB_MCMD_u08 register */
#define SMB_MCMD_u08_RD_CNT_Pos               _UINT8_(24)                                          /* (SMB_MCMD_u08) This field is a count of the number of bytes to read in from the SMBus to the SMBus Master Receive Buffer Register and must be greater than 0 in order for the Master State Machine to initiate a read phase. It is decremented by 1 for each byte read from the SMBus into the SMBus Master Receive Buffer Register. It can be overwritten by the first byte read in from the SMBus. Position */
#define SMB_MCMD_u08_RD_CNT_Msk               (_UINT8_(0xFF) << SMB_MCMD_u08_RD_CNT_Pos)           /* (SMB_MCMD_u08) This field is a count of the number of bytes to read in from the SMBus to the SMBus Master Receive Buffer Register and must be greater than 0 in order for the Master State Machine to initiate a read phase. It is decremented by 1 for each byte read from the SMBus into the SMBus Master Receive Buffer Register. It can be overwritten by the first byte read in from the SMBus. Mask */
#define SMB_MCMD_u08_RD_CNT(value)            (SMB_MCMD_u08_RD_CNT_Msk & (_UINT8_(value) << SMB_MCMD_u08_RD_CNT_Pos)) /* Assigment of value for RD_CNT in the SMB_MCMD_u08 register */
#define SMB_MCMD_u08_Msk                      _UINT8_(0xFFFF3F03)                                  /* (SMB_MCMD_u08) Register Mask  */

#define SMB_MCMD_u08_START_Pos                _UINT8_(8)                                           /* (SMB_MCMD_u08 Position) If this bit is x, send a Start bit on the SMBus before the first byte of the WriteCount is sent to the SMBus transmitter. */
#define SMB_MCMD_u08_START_Msk                (_UINT8_(0x1) << SMB_MCMD_u08_START_Pos)             /* (SMB_MCMD_u08 Mask) START */
#define SMB_MCMD_u08_START(value)             (SMB_MCMD_u08_START_Msk & (_UINT8_(value) << SMB_MCMD_u08_START_Pos)) 

/* -------- SMB_SCMD_u32 : (SMB Offset: 0x10) (R/W 32) SMBus Slave Command Register -------- */
#define SMB_SCMD_u32_RESETVALUE               _UINT32_(0x00)                                       /*  (SMB_SCMD_u32) SMBus Slave Command Register  Reset Value */

#define SMB_SCMD_u32_SRUN_Pos                 _UINT32_(0)                                          /* (SMB_SCMD_u32) Setting this bit to 1 enables the Slave State Machine to operate. Position */
#define SMB_SCMD_u32_SRUN_Msk                 (_UINT32_(0x1) << SMB_SCMD_u32_SRUN_Pos)             /* (SMB_SCMD_u32) Setting this bit to 1 enables the Slave State Machine to operate. Mask */
#define SMB_SCMD_u32_SRUN(value)              (SMB_SCMD_u32_SRUN_Msk & (_UINT32_(value) << SMB_SCMD_u32_SRUN_Pos)) /* Assigment of value for SRUN in the SMB_SCMD_u32 register */
#define SMB_SCMD_u32_SPROCEED_Pos             _UINT32_(1)                                          /* (SMB_SCMD_u32) When this bit is 0, the Slave State Machine does not transition out of the IDLE, REPEAT_START_WRITE or REPEAT_START_READ states. When this bit is 1, the Slave State Machine immediately transitions to the START_WAIT, RECEIVE and TRANSMIT states, respectively. Position */
#define SMB_SCMD_u32_SPROCEED_Msk             (_UINT32_(0x1) << SMB_SCMD_u32_SPROCEED_Pos)         /* (SMB_SCMD_u32) When this bit is 0, the Slave State Machine does not transition out of the IDLE, REPEAT_START_WRITE or REPEAT_START_READ states. When this bit is 1, the Slave State Machine immediately transitions to the START_WAIT, RECEIVE and TRANSMIT states, respectively. Mask */
#define SMB_SCMD_u32_SPROCEED(value)          (SMB_SCMD_u32_SPROCEED_Msk & (_UINT32_(value) << SMB_SCMD_u32_SPROCEED_Pos)) /* Assigment of value for SPROCEED in the SMB_SCMD_u32 register */
#define SMB_SCMD_u32_PEC_Pos                  _UINT32_(2)                                          /* (SMB_SCMD_u32) If Slave_WriteCount is 0 and Slave_PEC is 1 when the Master requests data, the PEC Register is copied to the DATA register. After the PEC Register is copied to the SMBus, the PEC Register is cleared and Slave_PEC is set to 0. Position */
#define SMB_SCMD_u32_PEC_Msk                  (_UINT32_(0x1) << SMB_SCMD_u32_PEC_Pos)              /* (SMB_SCMD_u32) If Slave_WriteCount is 0 and Slave_PEC is 1 when the Master requests data, the PEC Register is copied to the DATA register. After the PEC Register is copied to the SMBus, the PEC Register is cleared and Slave_PEC is set to 0. Mask */
#define SMB_SCMD_u32_PEC(value)               (SMB_SCMD_u32_PEC_Msk & (_UINT32_(value) << SMB_SCMD_u32_PEC_Pos)) /* Assigment of value for PEC in the SMB_SCMD_u32 register */
#define SMB_SCMD_u32_WR_CNT_Pos               _UINT32_(8)                                          /* (SMB_SCMD_u32) This field is set to the number of bytes software expects to send to the Master. Position */
#define SMB_SCMD_u32_WR_CNT_Msk               (_UINT32_(0xFF) << SMB_SCMD_u32_WR_CNT_Pos)          /* (SMB_SCMD_u32) This field is set to the number of bytes software expects to send to the Master. Mask */
#define SMB_SCMD_u32_WR_CNT(value)            (SMB_SCMD_u32_WR_CNT_Msk & (_UINT32_(value) << SMB_SCMD_u32_WR_CNT_Pos)) /* Assigment of value for WR_CNT in the SMB_SCMD_u32 register */
#define SMB_SCMD_u32_RD_CNT_Pos               _UINT32_(16)                                         /* (SMB_SCMD_u32) This field is decremented each time a byte is copied from DATA to the SMBus Slave Receive Buffer Register. Position */
#define SMB_SCMD_u32_RD_CNT_Msk               (_UINT32_(0xFF) << SMB_SCMD_u32_RD_CNT_Pos)          /* (SMB_SCMD_u32) This field is decremented each time a byte is copied from DATA to the SMBus Slave Receive Buffer Register. Mask */
#define SMB_SCMD_u32_RD_CNT(value)            (SMB_SCMD_u32_RD_CNT_Msk & (_UINT32_(value) << SMB_SCMD_u32_RD_CNT_Pos)) /* Assigment of value for RD_CNT in the SMB_SCMD_u32 register */
#define SMB_SCMD_u32_Msk                      _UINT32_(0x00FFFF07)                                 /* (SMB_SCMD_u32) Register Mask  */


/* -------- SMB_SCMD_u16 : (SMB Offset: 0x10) (R/W 16) SMBus Slave Command Register -------- */
#define SMB_SCMD_u16_RESETVALUE               _UINT16_(0x00)                                       /*  (SMB_SCMD_u16) SMBus Slave Command Register  Reset Value */

#define SMB_SCMD_u16_SRUN_Pos                 _UINT16_(0)                                          /* (SMB_SCMD_u16) Setting this bit to 1 enables the Slave State Machine to operate. Position */
#define SMB_SCMD_u16_SRUN_Msk                 (_UINT16_(0x1) << SMB_SCMD_u16_SRUN_Pos)             /* (SMB_SCMD_u16) Setting this bit to 1 enables the Slave State Machine to operate. Mask */
#define SMB_SCMD_u16_SRUN(value)              (SMB_SCMD_u16_SRUN_Msk & (_UINT16_(value) << SMB_SCMD_u16_SRUN_Pos)) /* Assigment of value for SRUN in the SMB_SCMD_u16 register */
#define SMB_SCMD_u16_SPROCEED_Pos             _UINT16_(1)                                          /* (SMB_SCMD_u16) When this bit is 0, the Slave State Machine does not transition out of the IDLE, REPEAT_START_WRITE or REPEAT_START_READ states. When this bit is 1, the Slave State Machine immediately transitions to the START_WAIT, RECEIVE and TRANSMIT states, respectively. Position */
#define SMB_SCMD_u16_SPROCEED_Msk             (_UINT16_(0x1) << SMB_SCMD_u16_SPROCEED_Pos)         /* (SMB_SCMD_u16) When this bit is 0, the Slave State Machine does not transition out of the IDLE, REPEAT_START_WRITE or REPEAT_START_READ states. When this bit is 1, the Slave State Machine immediately transitions to the START_WAIT, RECEIVE and TRANSMIT states, respectively. Mask */
#define SMB_SCMD_u16_SPROCEED(value)          (SMB_SCMD_u16_SPROCEED_Msk & (_UINT16_(value) << SMB_SCMD_u16_SPROCEED_Pos)) /* Assigment of value for SPROCEED in the SMB_SCMD_u16 register */
#define SMB_SCMD_u16_PEC_Pos                  _UINT16_(2)                                          /* (SMB_SCMD_u16) If Slave_WriteCount is 0 and Slave_PEC is 1 when the Master requests data, the PEC Register is copied to the DATA register. After the PEC Register is copied to the SMBus, the PEC Register is cleared and Slave_PEC is set to 0. Position */
#define SMB_SCMD_u16_PEC_Msk                  (_UINT16_(0x1) << SMB_SCMD_u16_PEC_Pos)              /* (SMB_SCMD_u16) If Slave_WriteCount is 0 and Slave_PEC is 1 when the Master requests data, the PEC Register is copied to the DATA register. After the PEC Register is copied to the SMBus, the PEC Register is cleared and Slave_PEC is set to 0. Mask */
#define SMB_SCMD_u16_PEC(value)               (SMB_SCMD_u16_PEC_Msk & (_UINT16_(value) << SMB_SCMD_u16_PEC_Pos)) /* Assigment of value for PEC in the SMB_SCMD_u16 register */
#define SMB_SCMD_u16_WR_CNT_Pos               _UINT16_(8)                                          /* (SMB_SCMD_u16) This field is set to the number of bytes software expects to send to the Master. Position */
#define SMB_SCMD_u16_WR_CNT_Msk               (_UINT16_(0xFF) << SMB_SCMD_u16_WR_CNT_Pos)          /* (SMB_SCMD_u16) This field is set to the number of bytes software expects to send to the Master. Mask */
#define SMB_SCMD_u16_WR_CNT(value)            (SMB_SCMD_u16_WR_CNT_Msk & (_UINT16_(value) << SMB_SCMD_u16_WR_CNT_Pos)) /* Assigment of value for WR_CNT in the SMB_SCMD_u16 register */
#define SMB_SCMD_u16_RD_CNT_Pos               _UINT16_(16)                                         /* (SMB_SCMD_u16) This field is decremented each time a byte is copied from DATA to the SMBus Slave Receive Buffer Register. Position */
#define SMB_SCMD_u16_RD_CNT_Msk               (_UINT16_(0xFF) << SMB_SCMD_u16_RD_CNT_Pos)          /* (SMB_SCMD_u16) This field is decremented each time a byte is copied from DATA to the SMBus Slave Receive Buffer Register. Mask */
#define SMB_SCMD_u16_RD_CNT(value)            (SMB_SCMD_u16_RD_CNT_Msk & (_UINT16_(value) << SMB_SCMD_u16_RD_CNT_Pos)) /* Assigment of value for RD_CNT in the SMB_SCMD_u16 register */
#define SMB_SCMD_u16_Msk                      _UINT16_(0xFFFF07)                                   /* (SMB_SCMD_u16) Register Mask  */


/* -------- SMB_SCMD_u08 : (SMB Offset: 0x10) (R/W 8) SMBus Slave Command Register -------- */
#define SMB_SCMD_u08_RESETVALUE               _UINT8_(0x00)                                        /*  (SMB_SCMD_u08) SMBus Slave Command Register  Reset Value */

#define SMB_SCMD_u08_SRUN_Pos                 _UINT8_(0)                                           /* (SMB_SCMD_u08) Setting this bit to 1 enables the Slave State Machine to operate. Position */
#define SMB_SCMD_u08_SRUN_Msk                 (_UINT8_(0x1) << SMB_SCMD_u08_SRUN_Pos)              /* (SMB_SCMD_u08) Setting this bit to 1 enables the Slave State Machine to operate. Mask */
#define SMB_SCMD_u08_SRUN(value)              (SMB_SCMD_u08_SRUN_Msk & (_UINT8_(value) << SMB_SCMD_u08_SRUN_Pos)) /* Assigment of value for SRUN in the SMB_SCMD_u08 register */
#define SMB_SCMD_u08_SPROCEED_Pos             _UINT8_(1)                                           /* (SMB_SCMD_u08) When this bit is 0, the Slave State Machine does not transition out of the IDLE, REPEAT_START_WRITE or REPEAT_START_READ states. When this bit is 1, the Slave State Machine immediately transitions to the START_WAIT, RECEIVE and TRANSMIT states, respectively. Position */
#define SMB_SCMD_u08_SPROCEED_Msk             (_UINT8_(0x1) << SMB_SCMD_u08_SPROCEED_Pos)          /* (SMB_SCMD_u08) When this bit is 0, the Slave State Machine does not transition out of the IDLE, REPEAT_START_WRITE or REPEAT_START_READ states. When this bit is 1, the Slave State Machine immediately transitions to the START_WAIT, RECEIVE and TRANSMIT states, respectively. Mask */
#define SMB_SCMD_u08_SPROCEED(value)          (SMB_SCMD_u08_SPROCEED_Msk & (_UINT8_(value) << SMB_SCMD_u08_SPROCEED_Pos)) /* Assigment of value for SPROCEED in the SMB_SCMD_u08 register */
#define SMB_SCMD_u08_PEC_Pos                  _UINT8_(2)                                           /* (SMB_SCMD_u08) If Slave_WriteCount is 0 and Slave_PEC is 1 when the Master requests data, the PEC Register is copied to the DATA register. After the PEC Register is copied to the SMBus, the PEC Register is cleared and Slave_PEC is set to 0. Position */
#define SMB_SCMD_u08_PEC_Msk                  (_UINT8_(0x1) << SMB_SCMD_u08_PEC_Pos)               /* (SMB_SCMD_u08) If Slave_WriteCount is 0 and Slave_PEC is 1 when the Master requests data, the PEC Register is copied to the DATA register. After the PEC Register is copied to the SMBus, the PEC Register is cleared and Slave_PEC is set to 0. Mask */
#define SMB_SCMD_u08_PEC(value)               (SMB_SCMD_u08_PEC_Msk & (_UINT8_(value) << SMB_SCMD_u08_PEC_Pos)) /* Assigment of value for PEC in the SMB_SCMD_u08 register */
#define SMB_SCMD_u08_WR_CNT_Pos               _UINT8_(8)                                           /* (SMB_SCMD_u08) This field is set to the number of bytes software expects to send to the Master. Position */
#define SMB_SCMD_u08_WR_CNT_Msk               (_UINT8_(0xFF) << SMB_SCMD_u08_WR_CNT_Pos)           /* (SMB_SCMD_u08) This field is set to the number of bytes software expects to send to the Master. Mask */
#define SMB_SCMD_u08_WR_CNT(value)            (SMB_SCMD_u08_WR_CNT_Msk & (_UINT8_(value) << SMB_SCMD_u08_WR_CNT_Pos)) /* Assigment of value for WR_CNT in the SMB_SCMD_u08 register */
#define SMB_SCMD_u08_RD_CNT_Pos               _UINT8_(16)                                          /* (SMB_SCMD_u08) This field is decremented each time a byte is copied from DATA to the SMBus Slave Receive Buffer Register. Position */
#define SMB_SCMD_u08_RD_CNT_Msk               (_UINT8_(0xFF) << SMB_SCMD_u08_RD_CNT_Pos)           /* (SMB_SCMD_u08) This field is decremented each time a byte is copied from DATA to the SMBus Slave Receive Buffer Register. Mask */
#define SMB_SCMD_u08_RD_CNT(value)            (SMB_SCMD_u08_RD_CNT_Msk & (_UINT8_(value) << SMB_SCMD_u08_RD_CNT_Pos)) /* Assigment of value for RD_CNT in the SMB_SCMD_u08 register */
#define SMB_SCMD_u08_Msk                      _UINT8_(0xFFFF07)                                    /* (SMB_SCMD_u08) Register Mask  */


/* -------- SMB_PEC : (SMB Offset: 0x14) (R/W 32) Packet Error Check (PEC) Register -------- */
#define SMB_PEC_RESETVALUE                    _UINT32_(0x00)                                       /*  (SMB_PEC) Packet Error Check (PEC) Register  Reset Value */

#define SMB_PEC_PEC_Pos                       _UINT32_(0)                                          /* (SMB_PEC) The SMBus Packet Error Check (PEC) byte. Position */
#define SMB_PEC_PEC_Msk                       (_UINT32_(0xFF) << SMB_PEC_PEC_Pos)                  /* (SMB_PEC) The SMBus Packet Error Check (PEC) byte. Mask */
#define SMB_PEC_PEC(value)                    (SMB_PEC_PEC_Msk & (_UINT32_(value) << SMB_PEC_PEC_Pos)) /* Assigment of value for PEC in the SMB_PEC register */
#define SMB_PEC_Msk                           _UINT32_(0x000000FF)                                 /* (SMB_PEC) Register Mask  */


/* -------- SMB_RSHTM : (SMB Offset: 0x18) (R/W 32) Repeated Start Hold Time Register -------- */
#define SMB_RSHTM_RESETVALUE                  _UINT32_(0x4D)                                       /*  (SMB_RSHTM) Repeated Start Hold Time Register  Reset Value */

#define SMB_RSHTM_RSHTM_Pos                   _UINT32_(0)                                          /* (SMB_RSHTM) This is the value of the timing requirement tHd:Sta in the I2C specification for a repeated START bit. This is used to hold\n      the clock until the Hold Time for the repeated Start Bit has been satisfied. Position */
#define SMB_RSHTM_RSHTM_Msk                   (_UINT32_(0xFF) << SMB_RSHTM_RSHTM_Pos)              /* (SMB_RSHTM) This is the value of the timing requirement tHd:Sta in the I2C specification for a repeated START bit. This is used to hold\n      the clock until the Hold Time for the repeated Start Bit has been satisfied. Mask */
#define SMB_RSHTM_RSHTM(value)                (SMB_RSHTM_RSHTM_Msk & (_UINT32_(value) << SMB_RSHTM_RSHTM_Pos)) /* Assigment of value for RSHTM in the SMB_RSHTM register */
#define SMB_RSHTM_Msk                         _UINT32_(0x000000FF)                                 /* (SMB_RSHTM) Register Mask  */


/* -------- SMB_RSVD2 : (SMB Offset: 0x1C) ( R/ 32) Reserved -------- */
#define SMB_RSVD2_RESETVALUE                  _UINT32_(0x00)                                       /*  (SMB_RSVD2) Reserved  Reset Value */

#define SMB_RSVD2_Msk                         _UINT32_(0x00000000)                                 /* (SMB_RSVD2) Register Mask  */


/* -------- SMB_COMPL_u32 : (SMB Offset: 0x20) (R/W 32) Completion Register -------- */
#define SMB_COMPL_u32_RESETVALUE              _UINT32_(0x00)                                       /*  (SMB_COMPL_u32) Completion Register  Reset Value */

#define SMB_COMPL_u32_DTEN_Pos                _UINT32_(2)                                          /* (SMB_COMPL_u32) When DTEN is asserted ('1'), Device Time-out checking is enabled. When DTEN is not asserted ('0'), Device Time-out checking is disabled. Position */
#define SMB_COMPL_u32_DTEN_Msk                (_UINT32_(0x1) << SMB_COMPL_u32_DTEN_Pos)            /* (SMB_COMPL_u32) When DTEN is asserted ('1'), Device Time-out checking is enabled. When DTEN is not asserted ('0'), Device Time-out checking is disabled. Mask */
#define SMB_COMPL_u32_DTEN(value)             (SMB_COMPL_u32_DTEN_Msk & (_UINT32_(value) << SMB_COMPL_u32_DTEN_Pos)) /* Assigment of value for DTEN in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_MCEN_Pos                _UINT32_(3)                                          /* (SMB_COMPL_u32) When MCEN is asserted ('1'), Master Cumulative Time-Out checking is enabled. When MCEN is not asserted ('0'), Master Cumulative Time-Out checking is disabled. Position */
#define SMB_COMPL_u32_MCEN_Msk                (_UINT32_(0x1) << SMB_COMPL_u32_MCEN_Pos)            /* (SMB_COMPL_u32) When MCEN is asserted ('1'), Master Cumulative Time-Out checking is enabled. When MCEN is not asserted ('0'), Master Cumulative Time-Out checking is disabled. Mask */
#define SMB_COMPL_u32_MCEN(value)             (SMB_COMPL_u32_MCEN_Msk & (_UINT32_(value) << SMB_COMPL_u32_MCEN_Pos)) /* Assigment of value for MCEN in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_SCEN_Pos                _UINT32_(4)                                          /* (SMB_COMPL_u32) When SCEN is asserted ('1'), Slave Cumulative Time-Out checking is enabled. When SCEN is not asserted ('0'), Slave Cumulative Time-Out checking is disabled. Position */
#define SMB_COMPL_u32_SCEN_Msk                (_UINT32_(0x1) << SMB_COMPL_u32_SCEN_Pos)            /* (SMB_COMPL_u32) When SCEN is asserted ('1'), Slave Cumulative Time-Out checking is enabled. When SCEN is not asserted ('0'), Slave Cumulative Time-Out checking is disabled. Mask */
#define SMB_COMPL_u32_SCEN(value)             (SMB_COMPL_u32_SCEN_Msk & (_UINT32_(value) << SMB_COMPL_u32_SCEN_Pos)) /* Assigment of value for SCEN in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_BIDEN_Pos               _UINT32_(5)                                          /* (SMB_COMPL_u32) When BIDEN is asserted ('1'), Bus Idle Detect Time-Out checking is enabled. When BIDEN is not asserted ('0'), Bus Idle Detect Time-Out checking is disabled. Position */
#define SMB_COMPL_u32_BIDEN_Msk               (_UINT32_(0x1) << SMB_COMPL_u32_BIDEN_Pos)           /* (SMB_COMPL_u32) When BIDEN is asserted ('1'), Bus Idle Detect Time-Out checking is enabled. When BIDEN is not asserted ('0'), Bus Idle Detect Time-Out checking is disabled. Mask */
#define SMB_COMPL_u32_BIDEN(value)            (SMB_COMPL_u32_BIDEN_Msk & (_UINT32_(value) << SMB_COMPL_u32_BIDEN_Pos)) /* Assigment of value for BIDEN in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_TIMERR_Pos              _UINT32_(6)                                          /* (SMB_COMPL_u32) The Time-out Error Detected bit (TIMERR) is asserted ('1') whenever any of the enabled time-out error detect status bits (CHDH, CHDL, SCTO, MCTO and DTO) are asserted. Position */
#define SMB_COMPL_u32_TIMERR_Msk              (_UINT32_(0x1) << SMB_COMPL_u32_TIMERR_Pos)          /* (SMB_COMPL_u32) The Time-out Error Detected bit (TIMERR) is asserted ('1') whenever any of the enabled time-out error detect status bits (CHDH, CHDL, SCTO, MCTO and DTO) are asserted. Mask */
#define SMB_COMPL_u32_TIMERR(value)           (SMB_COMPL_u32_TIMERR_Msk & (_UINT32_(value) << SMB_COMPL_u32_TIMERR_Pos)) /* Assigment of value for TIMERR in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_DTO_Pos                 _UINT32_(8)                                          /* (SMB_COMPL_u32) DTO is the Device Time-out bit. (R/WC) Position */
#define SMB_COMPL_u32_DTO_Msk                 (_UINT32_(0x1) << SMB_COMPL_u32_DTO_Pos)             /* (SMB_COMPL_u32) DTO is the Device Time-out bit. (R/WC) Mask */
#define SMB_COMPL_u32_DTO(value)              (SMB_COMPL_u32_DTO_Msk & (_UINT32_(value) << SMB_COMPL_u32_DTO_Pos)) /* Assigment of value for DTO in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_MCTO_Pos                _UINT32_(9)                                          /* (SMB_COMPL_u32) MCTO is the Master Cumulative Time-out bit. (R/WC) Position */
#define SMB_COMPL_u32_MCTO_Msk                (_UINT32_(0x1) << SMB_COMPL_u32_MCTO_Pos)            /* (SMB_COMPL_u32) MCTO is the Master Cumulative Time-out bit. (R/WC) Mask */
#define SMB_COMPL_u32_MCTO(value)             (SMB_COMPL_u32_MCTO_Msk & (_UINT32_(value) << SMB_COMPL_u32_MCTO_Pos)) /* Assigment of value for MCTO in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_SCTO_Pos                _UINT32_(10)                                         /* (SMB_COMPL_u32) SCTO is the Slave Cumulative Time-out bit(R/WC) Position */
#define SMB_COMPL_u32_SCTO_Msk                (_UINT32_(0x1) << SMB_COMPL_u32_SCTO_Pos)            /* (SMB_COMPL_u32) SCTO is the Slave Cumulative Time-out bit(R/WC) Mask */
#define SMB_COMPL_u32_SCTO(value)             (SMB_COMPL_u32_SCTO_Msk & (_UINT32_(value) << SMB_COMPL_u32_SCTO_Pos)) /* Assigment of value for SCTO in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_CHDL_Pos                _UINT32_(11)                                         /* (SMB_COMPL_u32) CHDL is the clock high time-out detect bit(R/WC) Position */
#define SMB_COMPL_u32_CHDL_Msk                (_UINT32_(0x1) << SMB_COMPL_u32_CHDL_Pos)            /* (SMB_COMPL_u32) CHDL is the clock high time-out detect bit(R/WC) Mask */
#define SMB_COMPL_u32_CHDL(value)             (SMB_COMPL_u32_CHDL_Msk & (_UINT32_(value) << SMB_COMPL_u32_CHDL_Pos)) /* Assigment of value for CHDL in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_CHDH_Pos                _UINT32_(12)                                         /* (SMB_COMPL_u32) CHDH is the bus idle time-out detect bit(R/WC) Position */
#define SMB_COMPL_u32_CHDH_Msk                (_UINT32_(0x1) << SMB_COMPL_u32_CHDH_Pos)            /* (SMB_COMPL_u32) CHDH is the bus idle time-out detect bit(R/WC) Mask */
#define SMB_COMPL_u32_CHDH(value)             (SMB_COMPL_u32_CHDH_Msk & (_UINT32_(value) << SMB_COMPL_u32_CHDH_Pos)) /* Assigment of value for CHDH in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_BER_Pos                 _UINT32_(13)                                         /* (SMB_COMPL_u32) If this bit is 1, the BER bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Position */
#define SMB_COMPL_u32_BER_Msk                 (_UINT32_(0x1) << SMB_COMPL_u32_BER_Pos)             /* (SMB_COMPL_u32) If this bit is 1, the BER bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Mask */
#define SMB_COMPL_u32_BER(value)              (SMB_COMPL_u32_BER_Msk & (_UINT32_(value) << SMB_COMPL_u32_BER_Pos)) /* Assigment of value for BER in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_LAB_Pos                 _UINT32_(14)                                         /* (SMB_COMPL_u32) If this bit is 1, the LAB bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Position */
#define SMB_COMPL_u32_LAB_Msk                 (_UINT32_(0x1) << SMB_COMPL_u32_LAB_Pos)             /* (SMB_COMPL_u32) If this bit is 1, the LAB bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Mask */
#define SMB_COMPL_u32_LAB(value)              (SMB_COMPL_u32_LAB_Msk & (_UINT32_(value) << SMB_COMPL_u32_LAB_Pos)) /* Assigment of value for LAB in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_SNAKR_Pos               _UINT32_(16)                                         /* (SMB_COMPL_u32) If this bit is 1, the Slave state machine sent a NACK to the transmitting Master while the Slave was receiving data from the SMBus interface. Position */
#define SMB_COMPL_u32_SNAKR_Msk               (_UINT32_(0x1) << SMB_COMPL_u32_SNAKR_Pos)           /* (SMB_COMPL_u32) If this bit is 1, the Slave state machine sent a NACK to the transmitting Master while the Slave was receiving data from the SMBus interface. Mask */
#define SMB_COMPL_u32_SNAKR(value)            (SMB_COMPL_u32_SNAKR_Msk & (_UINT32_(value) << SMB_COMPL_u32_SNAKR_Pos)) /* Assigment of value for SNAKR in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_STR_Pos                 _UINT32_(17)                                         /* (SMB_COMPL_u32) 0: Slave has just finished the receive phase of a transaction. \n                1: Slave has just finished the transmit phase of a transaction. Position */
#define SMB_COMPL_u32_STR_Msk                 (_UINT32_(0x1) << SMB_COMPL_u32_STR_Pos)             /* (SMB_COMPL_u32) 0: Slave has just finished the receive phase of a transaction. \n                1: Slave has just finished the transmit phase of a transaction. Mask */
#define SMB_COMPL_u32_STR(value)              (SMB_COMPL_u32_STR_Msk & (_UINT32_(value) << SMB_COMPL_u32_STR_Pos)) /* Assigment of value for STR in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_SPROT_Pos               _UINT32_(19)                                         /* (SMB_COMPL_u32) If this bit is 1, the WriteCount[7:0] counter in the Slave state machine either counted down to 0 before the Master sent a NACK signal, or the Slave received a NACK signal before the counter reached 0. Position */
#define SMB_COMPL_u32_SPROT_Msk               (_UINT32_(0x1) << SMB_COMPL_u32_SPROT_Pos)           /* (SMB_COMPL_u32) If this bit is 1, the WriteCount[7:0] counter in the Slave state machine either counted down to 0 before the Master sent a NACK signal, or the Slave received a NACK signal before the counter reached 0. Mask */
#define SMB_COMPL_u32_SPROT(value)            (SMB_COMPL_u32_SPROT_Msk & (_UINT32_(value) << SMB_COMPL_u32_SPROT_Pos)) /* Assigment of value for SPROT in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_REP_RD_Pos              _UINT32_(20)                                         /* (SMB_COMPL_u32) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 1, indicating that the Master requested a Read operation. Position */
#define SMB_COMPL_u32_REP_RD_Msk              (_UINT32_(0x1) << SMB_COMPL_u32_REP_RD_Pos)          /* (SMB_COMPL_u32) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 1, indicating that the Master requested a Read operation. Mask */
#define SMB_COMPL_u32_REP_RD(value)           (SMB_COMPL_u32_REP_RD_Msk & (_UINT32_(value) << SMB_COMPL_u32_REP_RD_Pos)) /* Assigment of value for REP_RD in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_REP_WR_Pos              _UINT32_(21)                                         /* (SMB_COMPL_u32) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 0, indicating that the Master requested a Write operation. Position */
#define SMB_COMPL_u32_REP_WR_Msk              (_UINT32_(0x1) << SMB_COMPL_u32_REP_WR_Pos)          /* (SMB_COMPL_u32) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 0, indicating that the Master requested a Write operation. Mask */
#define SMB_COMPL_u32_REP_WR(value)           (SMB_COMPL_u32_REP_WR_Msk & (_UINT32_(value) << SMB_COMPL_u32_REP_WR_Pos)) /* Assigment of value for REP_WR in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_MNAKX_Pos               _UINT32_(24)                                         /* (SMB_COMPL_u32) If this bit is 1, the Master state machine received a NACK from the receiving Slave while the Master was transmitting data over the SMBus interface. (R/WC) Position */
#define SMB_COMPL_u32_MNAKX_Msk               (_UINT32_(0x1) << SMB_COMPL_u32_MNAKX_Pos)           /* (SMB_COMPL_u32) If this bit is 1, the Master state machine received a NACK from the receiving Slave while the Master was transmitting data over the SMBus interface. (R/WC) Mask */
#define SMB_COMPL_u32_MNAKX(value)            (SMB_COMPL_u32_MNAKX_Msk & (_UINT32_(value) << SMB_COMPL_u32_MNAKX_Pos)) /* Assigment of value for MNAKX in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_MTR_Pos                 _UINT32_(25)                                         /* (SMB_COMPL_u32) 0: Master has just finished the receive phase of a transaction. \n                1: Master has just finished the transmit phase of a transaction. Position */
#define SMB_COMPL_u32_MTR_Msk                 (_UINT32_(0x1) << SMB_COMPL_u32_MTR_Pos)             /* (SMB_COMPL_u32) 0: Master has just finished the receive phase of a transaction. \n                1: Master has just finished the transmit phase of a transaction. Mask */
#define SMB_COMPL_u32_MTR(value)              (SMB_COMPL_u32_MTR_Msk & (_UINT32_(value) << SMB_COMPL_u32_MTR_Pos)) /* Assigment of value for MTR in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_IDLE_Pos                _UINT32_(29)                                         /* (SMB_COMPL_u32) This bit is set when the I2C bus becomes idle (on the rising edge of nBB). (R/WC) Position */
#define SMB_COMPL_u32_IDLE_Msk                (_UINT32_(0x1) << SMB_COMPL_u32_IDLE_Pos)            /* (SMB_COMPL_u32) This bit is set when the I2C bus becomes idle (on the rising edge of nBB). (R/WC) Mask */
#define SMB_COMPL_u32_IDLE(value)             (SMB_COMPL_u32_IDLE_Msk & (_UINT32_(value) << SMB_COMPL_u32_IDLE_Pos)) /* Assigment of value for IDLE in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_MDONE_Pos               _UINT32_(30)                                         /* (SMB_COMPL_u32) If this bit is 1, Master State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect. (R/WC) Position */
#define SMB_COMPL_u32_MDONE_Msk               (_UINT32_(0x1) << SMB_COMPL_u32_MDONE_Pos)           /* (SMB_COMPL_u32) If this bit is 1, Master State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect. (R/WC) Mask */
#define SMB_COMPL_u32_MDONE(value)            (SMB_COMPL_u32_MDONE_Msk & (_UINT32_(value) << SMB_COMPL_u32_MDONE_Pos)) /* Assigment of value for MDONE in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_SDONE_Pos               _UINT32_(31)                                         /* (SMB_COMPL_u32) If this bit is 1, Slave State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect.(R/WC) Position */
#define SMB_COMPL_u32_SDONE_Msk               (_UINT32_(0x1) << SMB_COMPL_u32_SDONE_Pos)           /* (SMB_COMPL_u32) If this bit is 1, Slave State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect.(R/WC) Mask */
#define SMB_COMPL_u32_SDONE(value)            (SMB_COMPL_u32_SDONE_Msk & (_UINT32_(value) << SMB_COMPL_u32_SDONE_Pos)) /* Assigment of value for SDONE in the SMB_COMPL_u32 register */
#define SMB_COMPL_u32_Msk                     _UINT32_(0xE33B7F7C)                                 /* (SMB_COMPL_u32) Register Mask  */


/* -------- SMB_COMPL_u16 : (SMB Offset: 0x20) (R/W 16) Completion Register -------- */
#define SMB_COMPL_u16_RESETVALUE              _UINT16_(0x00)                                       /*  (SMB_COMPL_u16) Completion Register  Reset Value */

#define SMB_COMPL_u16_DTEN_Pos                _UINT16_(2)                                          /* (SMB_COMPL_u16) When DTEN is asserted ('1'), Device Time-out checking is enabled. When DTEN is not asserted ('0'), Device Time-out checking is disabled. Position */
#define SMB_COMPL_u16_DTEN_Msk                (_UINT16_(0x1) << SMB_COMPL_u16_DTEN_Pos)            /* (SMB_COMPL_u16) When DTEN is asserted ('1'), Device Time-out checking is enabled. When DTEN is not asserted ('0'), Device Time-out checking is disabled. Mask */
#define SMB_COMPL_u16_DTEN(value)             (SMB_COMPL_u16_DTEN_Msk & (_UINT16_(value) << SMB_COMPL_u16_DTEN_Pos)) /* Assigment of value for DTEN in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_MCEN_Pos                _UINT16_(3)                                          /* (SMB_COMPL_u16) When MCEN is asserted ('1'), Master Cumulative Time-Out checking is enabled. When MCEN is not asserted ('0'), Master Cumulative Time-Out checking is disabled. Position */
#define SMB_COMPL_u16_MCEN_Msk                (_UINT16_(0x1) << SMB_COMPL_u16_MCEN_Pos)            /* (SMB_COMPL_u16) When MCEN is asserted ('1'), Master Cumulative Time-Out checking is enabled. When MCEN is not asserted ('0'), Master Cumulative Time-Out checking is disabled. Mask */
#define SMB_COMPL_u16_MCEN(value)             (SMB_COMPL_u16_MCEN_Msk & (_UINT16_(value) << SMB_COMPL_u16_MCEN_Pos)) /* Assigment of value for MCEN in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_SCEN_Pos                _UINT16_(4)                                          /* (SMB_COMPL_u16) When SCEN is asserted ('1'), Slave Cumulative Time-Out checking is enabled. When SCEN is not asserted ('0'), Slave Cumulative Time-Out checking is disabled. Position */
#define SMB_COMPL_u16_SCEN_Msk                (_UINT16_(0x1) << SMB_COMPL_u16_SCEN_Pos)            /* (SMB_COMPL_u16) When SCEN is asserted ('1'), Slave Cumulative Time-Out checking is enabled. When SCEN is not asserted ('0'), Slave Cumulative Time-Out checking is disabled. Mask */
#define SMB_COMPL_u16_SCEN(value)             (SMB_COMPL_u16_SCEN_Msk & (_UINT16_(value) << SMB_COMPL_u16_SCEN_Pos)) /* Assigment of value for SCEN in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_BIDEN_Pos               _UINT16_(5)                                          /* (SMB_COMPL_u16) When BIDEN is asserted ('1'), Bus Idle Detect Time-Out checking is enabled. When BIDEN is not asserted ('0'), Bus Idle Detect Time-Out checking is disabled. Position */
#define SMB_COMPL_u16_BIDEN_Msk               (_UINT16_(0x1) << SMB_COMPL_u16_BIDEN_Pos)           /* (SMB_COMPL_u16) When BIDEN is asserted ('1'), Bus Idle Detect Time-Out checking is enabled. When BIDEN is not asserted ('0'), Bus Idle Detect Time-Out checking is disabled. Mask */
#define SMB_COMPL_u16_BIDEN(value)            (SMB_COMPL_u16_BIDEN_Msk & (_UINT16_(value) << SMB_COMPL_u16_BIDEN_Pos)) /* Assigment of value for BIDEN in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_TIMERR_Pos              _UINT16_(6)                                          /* (SMB_COMPL_u16) The Time-out Error Detected bit (TIMERR) is asserted ('1') whenever any of the enabled time-out error detect status bits (CHDH, CHDL, SCTO, MCTO and DTO) are asserted. Position */
#define SMB_COMPL_u16_TIMERR_Msk              (_UINT16_(0x1) << SMB_COMPL_u16_TIMERR_Pos)          /* (SMB_COMPL_u16) The Time-out Error Detected bit (TIMERR) is asserted ('1') whenever any of the enabled time-out error detect status bits (CHDH, CHDL, SCTO, MCTO and DTO) are asserted. Mask */
#define SMB_COMPL_u16_TIMERR(value)           (SMB_COMPL_u16_TIMERR_Msk & (_UINT16_(value) << SMB_COMPL_u16_TIMERR_Pos)) /* Assigment of value for TIMERR in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_DTO_Pos                 _UINT16_(8)                                          /* (SMB_COMPL_u16) DTO is the Device Time-out bit. (R/WC) Position */
#define SMB_COMPL_u16_DTO_Msk                 (_UINT16_(0x1) << SMB_COMPL_u16_DTO_Pos)             /* (SMB_COMPL_u16) DTO is the Device Time-out bit. (R/WC) Mask */
#define SMB_COMPL_u16_DTO(value)              (SMB_COMPL_u16_DTO_Msk & (_UINT16_(value) << SMB_COMPL_u16_DTO_Pos)) /* Assigment of value for DTO in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_MCTO_Pos                _UINT16_(9)                                          /* (SMB_COMPL_u16) MCTO is the Master Cumulative Time-out bit. (R/WC) Position */
#define SMB_COMPL_u16_MCTO_Msk                (_UINT16_(0x1) << SMB_COMPL_u16_MCTO_Pos)            /* (SMB_COMPL_u16) MCTO is the Master Cumulative Time-out bit. (R/WC) Mask */
#define SMB_COMPL_u16_MCTO(value)             (SMB_COMPL_u16_MCTO_Msk & (_UINT16_(value) << SMB_COMPL_u16_MCTO_Pos)) /* Assigment of value for MCTO in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_SCTO_Pos                _UINT16_(10)                                         /* (SMB_COMPL_u16) SCTO is the Slave Cumulative Time-out bit(R/WC) Position */
#define SMB_COMPL_u16_SCTO_Msk                (_UINT16_(0x1) << SMB_COMPL_u16_SCTO_Pos)            /* (SMB_COMPL_u16) SCTO is the Slave Cumulative Time-out bit(R/WC) Mask */
#define SMB_COMPL_u16_SCTO(value)             (SMB_COMPL_u16_SCTO_Msk & (_UINT16_(value) << SMB_COMPL_u16_SCTO_Pos)) /* Assigment of value for SCTO in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_CHDL_Pos                _UINT16_(11)                                         /* (SMB_COMPL_u16) CHDL is the clock high time-out detect bit(R/WC) Position */
#define SMB_COMPL_u16_CHDL_Msk                (_UINT16_(0x1) << SMB_COMPL_u16_CHDL_Pos)            /* (SMB_COMPL_u16) CHDL is the clock high time-out detect bit(R/WC) Mask */
#define SMB_COMPL_u16_CHDL(value)             (SMB_COMPL_u16_CHDL_Msk & (_UINT16_(value) << SMB_COMPL_u16_CHDL_Pos)) /* Assigment of value for CHDL in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_CHDH_Pos                _UINT16_(12)                                         /* (SMB_COMPL_u16) CHDH is the bus idle time-out detect bit(R/WC) Position */
#define SMB_COMPL_u16_CHDH_Msk                (_UINT16_(0x1) << SMB_COMPL_u16_CHDH_Pos)            /* (SMB_COMPL_u16) CHDH is the bus idle time-out detect bit(R/WC) Mask */
#define SMB_COMPL_u16_CHDH(value)             (SMB_COMPL_u16_CHDH_Msk & (_UINT16_(value) << SMB_COMPL_u16_CHDH_Pos)) /* Assigment of value for CHDH in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_BER_Pos                 _UINT16_(13)                                         /* (SMB_COMPL_u16) If this bit is 1, the BER bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Position */
#define SMB_COMPL_u16_BER_Msk                 (_UINT16_(0x1) << SMB_COMPL_u16_BER_Pos)             /* (SMB_COMPL_u16) If this bit is 1, the BER bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Mask */
#define SMB_COMPL_u16_BER(value)              (SMB_COMPL_u16_BER_Msk & (_UINT16_(value) << SMB_COMPL_u16_BER_Pos)) /* Assigment of value for BER in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_LAB_Pos                 _UINT16_(14)                                         /* (SMB_COMPL_u16) If this bit is 1, the LAB bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Position */
#define SMB_COMPL_u16_LAB_Msk                 (_UINT16_(0x1) << SMB_COMPL_u16_LAB_Pos)             /* (SMB_COMPL_u16) If this bit is 1, the LAB bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Mask */
#define SMB_COMPL_u16_LAB(value)              (SMB_COMPL_u16_LAB_Msk & (_UINT16_(value) << SMB_COMPL_u16_LAB_Pos)) /* Assigment of value for LAB in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_SNAKR_Pos               _UINT16_(16)                                         /* (SMB_COMPL_u16) If this bit is 1, the Slave state machine sent a NACK to the transmitting Master while the Slave was receiving data from the SMBus interface. Position */
#define SMB_COMPL_u16_SNAKR_Msk               (_UINT16_(0x1) << SMB_COMPL_u16_SNAKR_Pos)           /* (SMB_COMPL_u16) If this bit is 1, the Slave state machine sent a NACK to the transmitting Master while the Slave was receiving data from the SMBus interface. Mask */
#define SMB_COMPL_u16_SNAKR(value)            (SMB_COMPL_u16_SNAKR_Msk & (_UINT16_(value) << SMB_COMPL_u16_SNAKR_Pos)) /* Assigment of value for SNAKR in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_STR_Pos                 _UINT16_(17)                                         /* (SMB_COMPL_u16) 0: Slave has just finished the receive phase of a transaction. \n                1: Slave has just finished the transmit phase of a transaction. Position */
#define SMB_COMPL_u16_STR_Msk                 (_UINT16_(0x1) << SMB_COMPL_u16_STR_Pos)             /* (SMB_COMPL_u16) 0: Slave has just finished the receive phase of a transaction. \n                1: Slave has just finished the transmit phase of a transaction. Mask */
#define SMB_COMPL_u16_STR(value)              (SMB_COMPL_u16_STR_Msk & (_UINT16_(value) << SMB_COMPL_u16_STR_Pos)) /* Assigment of value for STR in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_SPROT_Pos               _UINT16_(19)                                         /* (SMB_COMPL_u16) If this bit is 1, the WriteCount[7:0] counter in the Slave state machine either counted down to 0 before the Master sent a NACK signal, or the Slave received a NACK signal before the counter reached 0. Position */
#define SMB_COMPL_u16_SPROT_Msk               (_UINT16_(0x1) << SMB_COMPL_u16_SPROT_Pos)           /* (SMB_COMPL_u16) If this bit is 1, the WriteCount[7:0] counter in the Slave state machine either counted down to 0 before the Master sent a NACK signal, or the Slave received a NACK signal before the counter reached 0. Mask */
#define SMB_COMPL_u16_SPROT(value)            (SMB_COMPL_u16_SPROT_Msk & (_UINT16_(value) << SMB_COMPL_u16_SPROT_Pos)) /* Assigment of value for SPROT in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_REP_RD_Pos              _UINT16_(20)                                         /* (SMB_COMPL_u16) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 1, indicating that the Master requested a Read operation. Position */
#define SMB_COMPL_u16_REP_RD_Msk              (_UINT16_(0x1) << SMB_COMPL_u16_REP_RD_Pos)          /* (SMB_COMPL_u16) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 1, indicating that the Master requested a Read operation. Mask */
#define SMB_COMPL_u16_REP_RD(value)           (SMB_COMPL_u16_REP_RD_Msk & (_UINT16_(value) << SMB_COMPL_u16_REP_RD_Pos)) /* Assigment of value for REP_RD in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_REP_WR_Pos              _UINT16_(21)                                         /* (SMB_COMPL_u16) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 0, indicating that the Master requested a Write operation. Position */
#define SMB_COMPL_u16_REP_WR_Msk              (_UINT16_(0x1) << SMB_COMPL_u16_REP_WR_Pos)          /* (SMB_COMPL_u16) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 0, indicating that the Master requested a Write operation. Mask */
#define SMB_COMPL_u16_REP_WR(value)           (SMB_COMPL_u16_REP_WR_Msk & (_UINT16_(value) << SMB_COMPL_u16_REP_WR_Pos)) /* Assigment of value for REP_WR in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_MNAKX_Pos               _UINT16_(24)                                         /* (SMB_COMPL_u16) If this bit is 1, the Master state machine received a NACK from the receiving Slave while the Master was transmitting data over the SMBus interface. (R/WC) Position */
#define SMB_COMPL_u16_MNAKX_Msk               (_UINT16_(0x1) << SMB_COMPL_u16_MNAKX_Pos)           /* (SMB_COMPL_u16) If this bit is 1, the Master state machine received a NACK from the receiving Slave while the Master was transmitting data over the SMBus interface. (R/WC) Mask */
#define SMB_COMPL_u16_MNAKX(value)            (SMB_COMPL_u16_MNAKX_Msk & (_UINT16_(value) << SMB_COMPL_u16_MNAKX_Pos)) /* Assigment of value for MNAKX in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_MTR_Pos                 _UINT16_(25)                                         /* (SMB_COMPL_u16) 0: Master has just finished the receive phase of a transaction. \n                1: Master has just finished the transmit phase of a transaction. Position */
#define SMB_COMPL_u16_MTR_Msk                 (_UINT16_(0x1) << SMB_COMPL_u16_MTR_Pos)             /* (SMB_COMPL_u16) 0: Master has just finished the receive phase of a transaction. \n                1: Master has just finished the transmit phase of a transaction. Mask */
#define SMB_COMPL_u16_MTR(value)              (SMB_COMPL_u16_MTR_Msk & (_UINT16_(value) << SMB_COMPL_u16_MTR_Pos)) /* Assigment of value for MTR in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_IDLE_Pos                _UINT16_(29)                                         /* (SMB_COMPL_u16) This bit is set when the I2C bus becomes idle (on the rising edge of nBB). (R/WC) Position */
#define SMB_COMPL_u16_IDLE_Msk                (_UINT16_(0x1) << SMB_COMPL_u16_IDLE_Pos)            /* (SMB_COMPL_u16) This bit is set when the I2C bus becomes idle (on the rising edge of nBB). (R/WC) Mask */
#define SMB_COMPL_u16_IDLE(value)             (SMB_COMPL_u16_IDLE_Msk & (_UINT16_(value) << SMB_COMPL_u16_IDLE_Pos)) /* Assigment of value for IDLE in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_MDONE_Pos               _UINT16_(30)                                         /* (SMB_COMPL_u16) If this bit is 1, Master State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect. (R/WC) Position */
#define SMB_COMPL_u16_MDONE_Msk               (_UINT16_(0x1) << SMB_COMPL_u16_MDONE_Pos)           /* (SMB_COMPL_u16) If this bit is 1, Master State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect. (R/WC) Mask */
#define SMB_COMPL_u16_MDONE(value)            (SMB_COMPL_u16_MDONE_Msk & (_UINT16_(value) << SMB_COMPL_u16_MDONE_Pos)) /* Assigment of value for MDONE in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_SDONE_Pos               _UINT16_(31)                                         /* (SMB_COMPL_u16) If this bit is 1, Slave State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect.(R/WC) Position */
#define SMB_COMPL_u16_SDONE_Msk               (_UINT16_(0x1) << SMB_COMPL_u16_SDONE_Pos)           /* (SMB_COMPL_u16) If this bit is 1, Slave State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect.(R/WC) Mask */
#define SMB_COMPL_u16_SDONE(value)            (SMB_COMPL_u16_SDONE_Msk & (_UINT16_(value) << SMB_COMPL_u16_SDONE_Pos)) /* Assigment of value for SDONE in the SMB_COMPL_u16 register */
#define SMB_COMPL_u16_Msk                     _UINT16_(0xE33B7F7C)                                 /* (SMB_COMPL_u16) Register Mask  */


/* -------- SMB_COMPL_u08 : (SMB Offset: 0x20) (R/W 8) Completion Register -------- */
#define SMB_COMPL_u08_RESETVALUE              _UINT8_(0x00)                                        /*  (SMB_COMPL_u08) Completion Register  Reset Value */

#define SMB_COMPL_u08_DTEN_Pos                _UINT8_(2)                                           /* (SMB_COMPL_u08) When DTEN is asserted ('1'), Device Time-out checking is enabled. When DTEN is not asserted ('0'), Device Time-out checking is disabled. Position */
#define SMB_COMPL_u08_DTEN_Msk                (_UINT8_(0x1) << SMB_COMPL_u08_DTEN_Pos)             /* (SMB_COMPL_u08) When DTEN is asserted ('1'), Device Time-out checking is enabled. When DTEN is not asserted ('0'), Device Time-out checking is disabled. Mask */
#define SMB_COMPL_u08_DTEN(value)             (SMB_COMPL_u08_DTEN_Msk & (_UINT8_(value) << SMB_COMPL_u08_DTEN_Pos)) /* Assigment of value for DTEN in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_MCEN_Pos                _UINT8_(3)                                           /* (SMB_COMPL_u08) When MCEN is asserted ('1'), Master Cumulative Time-Out checking is enabled. When MCEN is not asserted ('0'), Master Cumulative Time-Out checking is disabled. Position */
#define SMB_COMPL_u08_MCEN_Msk                (_UINT8_(0x1) << SMB_COMPL_u08_MCEN_Pos)             /* (SMB_COMPL_u08) When MCEN is asserted ('1'), Master Cumulative Time-Out checking is enabled. When MCEN is not asserted ('0'), Master Cumulative Time-Out checking is disabled. Mask */
#define SMB_COMPL_u08_MCEN(value)             (SMB_COMPL_u08_MCEN_Msk & (_UINT8_(value) << SMB_COMPL_u08_MCEN_Pos)) /* Assigment of value for MCEN in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_SCEN_Pos                _UINT8_(4)                                           /* (SMB_COMPL_u08) When SCEN is asserted ('1'), Slave Cumulative Time-Out checking is enabled. When SCEN is not asserted ('0'), Slave Cumulative Time-Out checking is disabled. Position */
#define SMB_COMPL_u08_SCEN_Msk                (_UINT8_(0x1) << SMB_COMPL_u08_SCEN_Pos)             /* (SMB_COMPL_u08) When SCEN is asserted ('1'), Slave Cumulative Time-Out checking is enabled. When SCEN is not asserted ('0'), Slave Cumulative Time-Out checking is disabled. Mask */
#define SMB_COMPL_u08_SCEN(value)             (SMB_COMPL_u08_SCEN_Msk & (_UINT8_(value) << SMB_COMPL_u08_SCEN_Pos)) /* Assigment of value for SCEN in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_BIDEN_Pos               _UINT8_(5)                                           /* (SMB_COMPL_u08) When BIDEN is asserted ('1'), Bus Idle Detect Time-Out checking is enabled. When BIDEN is not asserted ('0'), Bus Idle Detect Time-Out checking is disabled. Position */
#define SMB_COMPL_u08_BIDEN_Msk               (_UINT8_(0x1) << SMB_COMPL_u08_BIDEN_Pos)            /* (SMB_COMPL_u08) When BIDEN is asserted ('1'), Bus Idle Detect Time-Out checking is enabled. When BIDEN is not asserted ('0'), Bus Idle Detect Time-Out checking is disabled. Mask */
#define SMB_COMPL_u08_BIDEN(value)            (SMB_COMPL_u08_BIDEN_Msk & (_UINT8_(value) << SMB_COMPL_u08_BIDEN_Pos)) /* Assigment of value for BIDEN in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_TIMERR_Pos              _UINT8_(6)                                           /* (SMB_COMPL_u08) The Time-out Error Detected bit (TIMERR) is asserted ('1') whenever any of the enabled time-out error detect status bits (CHDH, CHDL, SCTO, MCTO and DTO) are asserted. Position */
#define SMB_COMPL_u08_TIMERR_Msk              (_UINT8_(0x1) << SMB_COMPL_u08_TIMERR_Pos)           /* (SMB_COMPL_u08) The Time-out Error Detected bit (TIMERR) is asserted ('1') whenever any of the enabled time-out error detect status bits (CHDH, CHDL, SCTO, MCTO and DTO) are asserted. Mask */
#define SMB_COMPL_u08_TIMERR(value)           (SMB_COMPL_u08_TIMERR_Msk & (_UINT8_(value) << SMB_COMPL_u08_TIMERR_Pos)) /* Assigment of value for TIMERR in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_DTO_Pos                 _UINT8_(8)                                           /* (SMB_COMPL_u08) DTO is the Device Time-out bit. (R/WC) Position */
#define SMB_COMPL_u08_DTO_Msk                 (_UINT8_(0x1) << SMB_COMPL_u08_DTO_Pos)              /* (SMB_COMPL_u08) DTO is the Device Time-out bit. (R/WC) Mask */
#define SMB_COMPL_u08_DTO(value)              (SMB_COMPL_u08_DTO_Msk & (_UINT8_(value) << SMB_COMPL_u08_DTO_Pos)) /* Assigment of value for DTO in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_MCTO_Pos                _UINT8_(9)                                           /* (SMB_COMPL_u08) MCTO is the Master Cumulative Time-out bit. (R/WC) Position */
#define SMB_COMPL_u08_MCTO_Msk                (_UINT8_(0x1) << SMB_COMPL_u08_MCTO_Pos)             /* (SMB_COMPL_u08) MCTO is the Master Cumulative Time-out bit. (R/WC) Mask */
#define SMB_COMPL_u08_MCTO(value)             (SMB_COMPL_u08_MCTO_Msk & (_UINT8_(value) << SMB_COMPL_u08_MCTO_Pos)) /* Assigment of value for MCTO in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_SCTO_Pos                _UINT8_(10)                                          /* (SMB_COMPL_u08) SCTO is the Slave Cumulative Time-out bit(R/WC) Position */
#define SMB_COMPL_u08_SCTO_Msk                (_UINT8_(0x1) << SMB_COMPL_u08_SCTO_Pos)             /* (SMB_COMPL_u08) SCTO is the Slave Cumulative Time-out bit(R/WC) Mask */
#define SMB_COMPL_u08_SCTO(value)             (SMB_COMPL_u08_SCTO_Msk & (_UINT8_(value) << SMB_COMPL_u08_SCTO_Pos)) /* Assigment of value for SCTO in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_CHDL_Pos                _UINT8_(11)                                          /* (SMB_COMPL_u08) CHDL is the clock high time-out detect bit(R/WC) Position */
#define SMB_COMPL_u08_CHDL_Msk                (_UINT8_(0x1) << SMB_COMPL_u08_CHDL_Pos)             /* (SMB_COMPL_u08) CHDL is the clock high time-out detect bit(R/WC) Mask */
#define SMB_COMPL_u08_CHDL(value)             (SMB_COMPL_u08_CHDL_Msk & (_UINT8_(value) << SMB_COMPL_u08_CHDL_Pos)) /* Assigment of value for CHDL in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_CHDH_Pos                _UINT8_(12)                                          /* (SMB_COMPL_u08) CHDH is the bus idle time-out detect bit(R/WC) Position */
#define SMB_COMPL_u08_CHDH_Msk                (_UINT8_(0x1) << SMB_COMPL_u08_CHDH_Pos)             /* (SMB_COMPL_u08) CHDH is the bus idle time-out detect bit(R/WC) Mask */
#define SMB_COMPL_u08_CHDH(value)             (SMB_COMPL_u08_CHDH_Msk & (_UINT8_(value) << SMB_COMPL_u08_CHDH_Pos)) /* Assigment of value for CHDH in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_BER_Pos                 _UINT8_(13)                                          /* (SMB_COMPL_u08) If this bit is 1, the BER bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Position */
#define SMB_COMPL_u08_BER_Msk                 (_UINT8_(0x1) << SMB_COMPL_u08_BER_Pos)              /* (SMB_COMPL_u08) If this bit is 1, the BER bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Mask */
#define SMB_COMPL_u08_BER(value)              (SMB_COMPL_u08_BER_Msk & (_UINT8_(value) << SMB_COMPL_u08_BER_Pos)) /* Assigment of value for BER in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_LAB_Pos                 _UINT8_(14)                                          /* (SMB_COMPL_u08) If this bit is 1, the LAB bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Position */
#define SMB_COMPL_u08_LAB_Msk                 (_UINT8_(0x1) << SMB_COMPL_u08_LAB_Pos)              /* (SMB_COMPL_u08) If this bit is 1, the LAB bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Mask */
#define SMB_COMPL_u08_LAB(value)              (SMB_COMPL_u08_LAB_Msk & (_UINT8_(value) << SMB_COMPL_u08_LAB_Pos)) /* Assigment of value for LAB in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_SNAKR_Pos               _UINT8_(16)                                          /* (SMB_COMPL_u08) If this bit is 1, the Slave state machine sent a NACK to the transmitting Master while the Slave was receiving data from the SMBus interface. Position */
#define SMB_COMPL_u08_SNAKR_Msk               (_UINT8_(0x1) << SMB_COMPL_u08_SNAKR_Pos)            /* (SMB_COMPL_u08) If this bit is 1, the Slave state machine sent a NACK to the transmitting Master while the Slave was receiving data from the SMBus interface. Mask */
#define SMB_COMPL_u08_SNAKR(value)            (SMB_COMPL_u08_SNAKR_Msk & (_UINT8_(value) << SMB_COMPL_u08_SNAKR_Pos)) /* Assigment of value for SNAKR in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_STR_Pos                 _UINT8_(17)                                          /* (SMB_COMPL_u08) 0: Slave has just finished the receive phase of a transaction. \n                1: Slave has just finished the transmit phase of a transaction. Position */
#define SMB_COMPL_u08_STR_Msk                 (_UINT8_(0x1) << SMB_COMPL_u08_STR_Pos)              /* (SMB_COMPL_u08) 0: Slave has just finished the receive phase of a transaction. \n                1: Slave has just finished the transmit phase of a transaction. Mask */
#define SMB_COMPL_u08_STR(value)              (SMB_COMPL_u08_STR_Msk & (_UINT8_(value) << SMB_COMPL_u08_STR_Pos)) /* Assigment of value for STR in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_SPROT_Pos               _UINT8_(19)                                          /* (SMB_COMPL_u08) If this bit is 1, the WriteCount[7:0] counter in the Slave state machine either counted down to 0 before the Master sent a NACK signal, or the Slave received a NACK signal before the counter reached 0. Position */
#define SMB_COMPL_u08_SPROT_Msk               (_UINT8_(0x1) << SMB_COMPL_u08_SPROT_Pos)            /* (SMB_COMPL_u08) If this bit is 1, the WriteCount[7:0] counter in the Slave state machine either counted down to 0 before the Master sent a NACK signal, or the Slave received a NACK signal before the counter reached 0. Mask */
#define SMB_COMPL_u08_SPROT(value)            (SMB_COMPL_u08_SPROT_Msk & (_UINT8_(value) << SMB_COMPL_u08_SPROT_Pos)) /* Assigment of value for SPROT in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_REP_RD_Pos              _UINT8_(20)                                          /* (SMB_COMPL_u08) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 1, indicating that the Master requested a Read operation. Position */
#define SMB_COMPL_u08_REP_RD_Msk              (_UINT8_(0x1) << SMB_COMPL_u08_REP_RD_Pos)           /* (SMB_COMPL_u08) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 1, indicating that the Master requested a Read operation. Mask */
#define SMB_COMPL_u08_REP_RD(value)           (SMB_COMPL_u08_REP_RD_Msk & (_UINT8_(value) << SMB_COMPL_u08_REP_RD_Pos)) /* Assigment of value for REP_RD in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_REP_WR_Pos              _UINT8_(21)                                          /* (SMB_COMPL_u08) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 0, indicating that the Master requested a Write operation. Position */
#define SMB_COMPL_u08_REP_WR_Msk              (_UINT8_(0x1) << SMB_COMPL_u08_REP_WR_Pos)           /* (SMB_COMPL_u08) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 0, indicating that the Master requested a Write operation. Mask */
#define SMB_COMPL_u08_REP_WR(value)           (SMB_COMPL_u08_REP_WR_Msk & (_UINT8_(value) << SMB_COMPL_u08_REP_WR_Pos)) /* Assigment of value for REP_WR in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_MNAKX_Pos               _UINT8_(24)                                          /* (SMB_COMPL_u08) If this bit is 1, the Master state machine received a NACK from the receiving Slave while the Master was transmitting data over the SMBus interface. (R/WC) Position */
#define SMB_COMPL_u08_MNAKX_Msk               (_UINT8_(0x1) << SMB_COMPL_u08_MNAKX_Pos)            /* (SMB_COMPL_u08) If this bit is 1, the Master state machine received a NACK from the receiving Slave while the Master was transmitting data over the SMBus interface. (R/WC) Mask */
#define SMB_COMPL_u08_MNAKX(value)            (SMB_COMPL_u08_MNAKX_Msk & (_UINT8_(value) << SMB_COMPL_u08_MNAKX_Pos)) /* Assigment of value for MNAKX in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_MTR_Pos                 _UINT8_(25)                                          /* (SMB_COMPL_u08) 0: Master has just finished the receive phase of a transaction. \n                1: Master has just finished the transmit phase of a transaction. Position */
#define SMB_COMPL_u08_MTR_Msk                 (_UINT8_(0x1) << SMB_COMPL_u08_MTR_Pos)              /* (SMB_COMPL_u08) 0: Master has just finished the receive phase of a transaction. \n                1: Master has just finished the transmit phase of a transaction. Mask */
#define SMB_COMPL_u08_MTR(value)              (SMB_COMPL_u08_MTR_Msk & (_UINT8_(value) << SMB_COMPL_u08_MTR_Pos)) /* Assigment of value for MTR in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_IDLE_Pos                _UINT8_(29)                                          /* (SMB_COMPL_u08) This bit is set when the I2C bus becomes idle (on the rising edge of nBB). (R/WC) Position */
#define SMB_COMPL_u08_IDLE_Msk                (_UINT8_(0x1) << SMB_COMPL_u08_IDLE_Pos)             /* (SMB_COMPL_u08) This bit is set when the I2C bus becomes idle (on the rising edge of nBB). (R/WC) Mask */
#define SMB_COMPL_u08_IDLE(value)             (SMB_COMPL_u08_IDLE_Msk & (_UINT8_(value) << SMB_COMPL_u08_IDLE_Pos)) /* Assigment of value for IDLE in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_MDONE_Pos               _UINT8_(30)                                          /* (SMB_COMPL_u08) If this bit is 1, Master State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect. (R/WC) Position */
#define SMB_COMPL_u08_MDONE_Msk               (_UINT8_(0x1) << SMB_COMPL_u08_MDONE_Pos)            /* (SMB_COMPL_u08) If this bit is 1, Master State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect. (R/WC) Mask */
#define SMB_COMPL_u08_MDONE(value)            (SMB_COMPL_u08_MDONE_Msk & (_UINT8_(value) << SMB_COMPL_u08_MDONE_Pos)) /* Assigment of value for MDONE in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_SDONE_Pos               _UINT8_(31)                                          /* (SMB_COMPL_u08) If this bit is 1, Slave State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect.(R/WC) Position */
#define SMB_COMPL_u08_SDONE_Msk               (_UINT8_(0x1) << SMB_COMPL_u08_SDONE_Pos)            /* (SMB_COMPL_u08) If this bit is 1, Slave State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect.(R/WC) Mask */
#define SMB_COMPL_u08_SDONE(value)            (SMB_COMPL_u08_SDONE_Msk & (_UINT8_(value) << SMB_COMPL_u08_SDONE_Pos)) /* Assigment of value for SDONE in the SMB_COMPL_u08 register */
#define SMB_COMPL_u08_Msk                     _UINT8_(0xE33B7F7C)                                  /* (SMB_COMPL_u08) Register Mask  */


/* -------- SMB_IDLSC : (SMB Offset: 0x24) (R/W 32) Idle Scaling Register -------- */
#define SMB_IDLSC_RESETVALUE                  _UINT32_(0x1FC01ED)                                  /*  (SMB_IDLSC) Idle Scaling Register  Reset Value */

#define SMB_IDLSC_FAIR_BUS_IDL_MIN_Pos        _UINT32_(0)                                          /* (SMB_IDLSC) This field defines the number of ticks of the baud clock required to satisfy the fairness protocol. The default value for this field sets the idle window to 31us, which is the appropriate value for a 100 KHz bus Position */
#define SMB_IDLSC_FAIR_BUS_IDL_MIN_Msk        (_UINT32_(0xFFF) << SMB_IDLSC_FAIR_BUS_IDL_MIN_Pos)  /* (SMB_IDLSC) This field defines the number of ticks of the baud clock required to satisfy the fairness protocol. The default value for this field sets the idle window to 31us, which is the appropriate value for a 100 KHz bus Mask */
#define SMB_IDLSC_FAIR_BUS_IDL_MIN(value)     (SMB_IDLSC_FAIR_BUS_IDL_MIN_Msk & (_UINT32_(value) << SMB_IDLSC_FAIR_BUS_IDL_MIN_Pos)) /* Assigment of value for FAIR_BUS_IDL_MIN in the SMB_IDLSC register */
#define SMB_IDLSC_FAIR_IDL_DLY_Pos            _UINT32_(16)                                         /* (SMB_IDLSC) This field defines the number of ticks of the baud clock required to program the delay. The default value for this field sets the delay period to 32us, which is the appropriate value for a 100 KHz bus Position */
#define SMB_IDLSC_FAIR_IDL_DLY_Msk            (_UINT32_(0xFFF) << SMB_IDLSC_FAIR_IDL_DLY_Pos)      /* (SMB_IDLSC) This field defines the number of ticks of the baud clock required to program the delay. The default value for this field sets the delay period to 32us, which is the appropriate value for a 100 KHz bus Mask */
#define SMB_IDLSC_FAIR_IDL_DLY(value)         (SMB_IDLSC_FAIR_IDL_DLY_Msk & (_UINT32_(value) << SMB_IDLSC_FAIR_IDL_DLY_Pos)) /* Assigment of value for FAIR_IDL_DLY in the SMB_IDLSC register */
#define SMB_IDLSC_Msk                         _UINT32_(0x0FFF0FFF)                                 /* (SMB_IDLSC) Register Mask  */


/* -------- SMB_CFG_u32 : (SMB Offset: 0x28) (R/W 32) Configuration Register -------- */
#define SMB_CFG_u32_RESETVALUE                _UINT32_(0x00)                                       /*  (SMB_CFG_u32) Configuration Register  Reset Value */

#define SMB_CFG_u32_PORT_SEL_Pos              _UINT32_(0)                                          /* (SMB_CFG_u32) The PORT SEL [3:0] bits determine which one of 16 possible bus ports apply to the active 2-wire SDAT and SCLK bus pair. Position */
#define SMB_CFG_u32_PORT_SEL_Msk              (_UINT32_(0xF) << SMB_CFG_u32_PORT_SEL_Pos)          /* (SMB_CFG_u32) The PORT SEL [3:0] bits determine which one of 16 possible bus ports apply to the active 2-wire SDAT and SCLK bus pair. Mask */
#define SMB_CFG_u32_PORT_SEL(value)           (SMB_CFG_u32_PORT_SEL_Msk & (_UINT32_(value) << SMB_CFG_u32_PORT_SEL_Pos)) /* Assigment of value for PORT_SEL in the SMB_CFG_u32 register */
#define SMB_CFG_u32_TCEN_Pos                  _UINT32_(4)                                          /* (SMB_CFG_u32) When the Timing Check Enable bit (TCEN) is asserted ('1'), Bus Time-Outs are enabled Position */
#define SMB_CFG_u32_TCEN_Msk                  (_UINT32_(0x1) << SMB_CFG_u32_TCEN_Pos)              /* (SMB_CFG_u32) When the Timing Check Enable bit (TCEN) is asserted ('1'), Bus Time-Outs are enabled Mask */
#define SMB_CFG_u32_TCEN(value)               (SMB_CFG_u32_TCEN_Msk & (_UINT32_(value) << SMB_CFG_u32_TCEN_Pos)) /* Assigment of value for TCEN in the SMB_CFG_u32 register */
#define SMB_CFG_u32_SLOW_CLK_Pos              _UINT32_(5)                                          /* (SMB_CFG_u32) When this bit is 1, the base period for the Bus Clock Register is multiplied by 4, and thus the frequency is divided by 4. Position */
#define SMB_CFG_u32_SLOW_CLK_Msk              (_UINT32_(0x1) << SMB_CFG_u32_SLOW_CLK_Pos)          /* (SMB_CFG_u32) When this bit is 1, the base period for the Bus Clock Register is multiplied by 4, and thus the frequency is divided by 4. Mask */
#define SMB_CFG_u32_SLOW_CLK(value)           (SMB_CFG_u32_SLOW_CLK_Msk & (_UINT32_(value) << SMB_CFG_u32_SLOW_CLK_Pos)) /* Assigment of value for SLOW_CLK in the SMB_CFG_u32 register */
#define SMB_CFG_u32_TEST_Pos                  _UINT32_(6)                                          /* (SMB_CFG_u32) Must be always written with 0. Position */
#define SMB_CFG_u32_TEST_Msk                  (_UINT32_(0x1) << SMB_CFG_u32_TEST_Pos)              /* (SMB_CFG_u32) Must be always written with 0. Mask */
#define SMB_CFG_u32_TEST(value)               (SMB_CFG_u32_TEST_Msk & (_UINT32_(value) << SMB_CFG_u32_TEST_Pos)) /* Assigment of value for TEST in the SMB_CFG_u32 register */
#define SMB_CFG_u32_PECEN_Pos                 _UINT32_(7)                                          /* (SMB_CFG_u32) When the PEC Enable bit (PECEN) is asserted ('1'), Hardware PEC Support is enabled Position */
#define SMB_CFG_u32_PECEN_Msk                 (_UINT32_(0x1) << SMB_CFG_u32_PECEN_Pos)             /* (SMB_CFG_u32) When the PEC Enable bit (PECEN) is asserted ('1'), Hardware PEC Support is enabled Mask */
#define SMB_CFG_u32_PECEN(value)              (SMB_CFG_u32_PECEN_Msk & (_UINT32_(value) << SMB_CFG_u32_PECEN_Pos)) /* Assigment of value for PECEN in the SMB_CFG_u32 register */
#define SMB_CFG_u32_FEN_Pos                   _UINT32_(8)                                          /* (SMB_CFG_u32) Input filtering enable. Input filtering is required by the I2C specification if external filtering is not available.\n      1=Input filtering is enabled; 0=Input filtering is disabled. Position */
#define SMB_CFG_u32_FEN_Msk                   (_UINT32_(0x1) << SMB_CFG_u32_FEN_Pos)               /* (SMB_CFG_u32) Input filtering enable. Input filtering is required by the I2C specification if external filtering is not available.\n      1=Input filtering is enabled; 0=Input filtering is disabled. Mask */
#define SMB_CFG_u32_FEN(value)                (SMB_CFG_u32_FEN_Msk & (_UINT32_(value) << SMB_CFG_u32_FEN_Pos)) /* Assigment of value for FEN in the SMB_CFG_u32 register */
#define SMB_CFG_u32_RST_Pos                   _UINT32_(9)                                          /* (SMB_CFG_u32) When RESET is asserted ('1'), all logic and registers except for the RESET bit itself are initialized to the power-on default state. Position */
#define SMB_CFG_u32_RST_Msk                   (_UINT32_(0x1) << SMB_CFG_u32_RST_Pos)               /* (SMB_CFG_u32) When RESET is asserted ('1'), all logic and registers except for the RESET bit itself are initialized to the power-on default state. Mask */
#define SMB_CFG_u32_RST(value)                (SMB_CFG_u32_RST_Msk & (_UINT32_(value) << SMB_CFG_u32_RST_Pos)) /* Assigment of value for RST in the SMB_CFG_u32 register */
#define SMB_CFG_u32_EN_Pos                    _UINT32_(10)                                         /* (SMB_CFG_u32) When ENAB (Enable) is not asserted ('0') (default), the SMB Controller Core is disabled and in the lowest power consumption state (Disabled State).\n                The ENAB bit must be asserted ('1') for normal operation. Position */
#define SMB_CFG_u32_EN_Msk                    (_UINT32_(0x1) << SMB_CFG_u32_EN_Pos)                /* (SMB_CFG_u32) When ENAB (Enable) is not asserted ('0') (default), the SMB Controller Core is disabled and in the lowest power consumption state (Disabled State).\n                The ENAB bit must be asserted ('1') for normal operation. Mask */
#define SMB_CFG_u32_EN(value)                 (SMB_CFG_u32_EN_Msk & (_UINT32_(value) << SMB_CFG_u32_EN_Pos)) /* Assigment of value for EN in the SMB_CFG_u32 register */
#define SMB_CFG_u32_DSA_Pos                   _UINT32_(11)                                         /* (SMB_CFG_u32) 0: Slave Address I2C Compatibility Mode (default). 1: SMBus Address Decode Mode Position */
#define SMB_CFG_u32_DSA_Msk                   (_UINT32_(0x1) << SMB_CFG_u32_DSA_Pos)               /* (SMB_CFG_u32) 0: Slave Address I2C Compatibility Mode (default). 1: SMBus Address Decode Mode Mask */
#define SMB_CFG_u32_DSA(value)                (SMB_CFG_u32_DSA_Msk & (_UINT32_(value) << SMB_CFG_u32_DSA_Pos)) /* Assigment of value for DSA in the SMB_CFG_u32 register */
#define SMB_CFG_u32_FAIR_Pos                  _UINT32_(12)                                         /* (SMB_CFG_u32) If this bit is 1, the MCTP Fairness protocol is in effect. Position */
#define SMB_CFG_u32_FAIR_Msk                  (_UINT32_(0x1) << SMB_CFG_u32_FAIR_Pos)              /* (SMB_CFG_u32) If this bit is 1, the MCTP Fairness protocol is in effect. Mask */
#define SMB_CFG_u32_FAIR(value)               (SMB_CFG_u32_FAIR_Msk & (_UINT32_(value) << SMB_CFG_u32_FAIR_Pos)) /* Assigment of value for FAIR in the SMB_CFG_u32 register */
#define SMB_CFG_u32_TEST0_Pos                 _UINT32_(13)                                         /* (SMB_CFG_u32) Must be always written with 0. Position */
#define SMB_CFG_u32_TEST0_Msk                 (_UINT32_(0x1) << SMB_CFG_u32_TEST0_Pos)             /* (SMB_CFG_u32) Must be always written with 0. Mask */
#define SMB_CFG_u32_TEST0(value)              (SMB_CFG_u32_TEST0_Msk & (_UINT32_(value) << SMB_CFG_u32_TEST0_Pos)) /* Assigment of value for TEST0 in the SMB_CFG_u32 register */
#define SMB_CFG_u32_GC_DIS_Pos                _UINT32_(14)                                         /* (SMB_CFG_u32) This is the General Call Disable bit.\n                0: the response to the General Call address as a slave is enabled\n                1: the response to the General Call address as a slave is disabled. Position */
#define SMB_CFG_u32_GC_DIS_Msk                (_UINT32_(0x1) << SMB_CFG_u32_GC_DIS_Pos)            /* (SMB_CFG_u32) This is the General Call Disable bit.\n                0: the response to the General Call address as a slave is enabled\n                1: the response to the General Call address as a slave is disabled. Mask */
#define SMB_CFG_u32_GC_DIS(value)             (SMB_CFG_u32_GC_DIS_Msk & (_UINT32_(value) << SMB_CFG_u32_GC_DIS_Pos)) /* Assigment of value for GC_DIS in the SMB_CFG_u32 register */
#define SMB_CFG_u32_FLUSH_SXBUF_Pos           _UINT32_(16)                                         /* (SMB_CFG_u32) A write of a 1 to this bit forces the SMBus Slave Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Position */
#define SMB_CFG_u32_FLUSH_SXBUF_Msk           (_UINT32_(0x1) << SMB_CFG_u32_FLUSH_SXBUF_Pos)       /* (SMB_CFG_u32) A write of a 1 to this bit forces the SMBus Slave Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Mask */
#define SMB_CFG_u32_FLUSH_SXBUF(value)        (SMB_CFG_u32_FLUSH_SXBUF_Msk & (_UINT32_(value) << SMB_CFG_u32_FLUSH_SXBUF_Pos)) /* Assigment of value for FLUSH_SXBUF in the SMB_CFG_u32 register */
#define SMB_CFG_u32_FLUSH_SRBUF_Pos           _UINT32_(17)                                         /* (SMB_CFG_u32) A write of a 1 to this bit forces the SMBus Slave Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Position */
#define SMB_CFG_u32_FLUSH_SRBUF_Msk           (_UINT32_(0x1) << SMB_CFG_u32_FLUSH_SRBUF_Pos)       /* (SMB_CFG_u32) A write of a 1 to this bit forces the SMBus Slave Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Mask */
#define SMB_CFG_u32_FLUSH_SRBUF(value)        (SMB_CFG_u32_FLUSH_SRBUF_Msk & (_UINT32_(value) << SMB_CFG_u32_FLUSH_SRBUF_Pos)) /* Assigment of value for FLUSH_SRBUF in the SMB_CFG_u32 register */
#define SMB_CFG_u32_FLUSH_MXBUF_Pos           _UINT32_(18)                                         /* (SMB_CFG_u32) A write of a 1 to this bit forces the SMBus Master Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Position */
#define SMB_CFG_u32_FLUSH_MXBUF_Msk           (_UINT32_(0x1) << SMB_CFG_u32_FLUSH_MXBUF_Pos)       /* (SMB_CFG_u32) A write of a 1 to this bit forces the SMBus Master Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Mask */
#define SMB_CFG_u32_FLUSH_MXBUF(value)        (SMB_CFG_u32_FLUSH_MXBUF_Msk & (_UINT32_(value) << SMB_CFG_u32_FLUSH_MXBUF_Pos)) /* Assigment of value for FLUSH_MXBUF in the SMB_CFG_u32 register */
#define SMB_CFG_u32_FLUSH_MRBUF_Pos           _UINT32_(19)                                         /* (SMB_CFG_u32) A write of a 1 to this bit forces the SMBus Master Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Position */
#define SMB_CFG_u32_FLUSH_MRBUF_Msk           (_UINT32_(0x1) << SMB_CFG_u32_FLUSH_MRBUF_Pos)       /* (SMB_CFG_u32) A write of a 1 to this bit forces the SMBus Master Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Mask */
#define SMB_CFG_u32_FLUSH_MRBUF(value)        (SMB_CFG_u32_FLUSH_MRBUF_Msk & (_UINT32_(value) << SMB_CFG_u32_FLUSH_MRBUF_Pos)) /* Assigment of value for FLUSH_MRBUF in the SMB_CFG_u32 register */
#define SMB_CFG_u32_EN_AAS_Pos                _UINT32_(28)                                         /* (SMB_CFG_u32) 0: Disable the AAS, 1: Enable the AAS Interrupt Position */
#define SMB_CFG_u32_EN_AAS_Msk                (_UINT32_(0x1) << SMB_CFG_u32_EN_AAS_Pos)            /* (SMB_CFG_u32) 0: Disable the AAS, 1: Enable the AAS Interrupt Mask */
#define SMB_CFG_u32_EN_AAS(value)             (SMB_CFG_u32_EN_AAS_Msk & (_UINT32_(value) << SMB_CFG_u32_EN_AAS_Pos)) /* Assigment of value for EN_AAS in the SMB_CFG_u32 register */
#define SMB_CFG_u32_ENIDI_Pos                 _UINT32_(29)                                         /* (SMB_CFG_u32) If this bit is 1, the Idle interrupt is enabled. If this bit is 0, the Idle interrupt is disabled. Position */
#define SMB_CFG_u32_ENIDI_Msk                 (_UINT32_(0x1) << SMB_CFG_u32_ENIDI_Pos)             /* (SMB_CFG_u32) If this bit is 1, the Idle interrupt is enabled. If this bit is 0, the Idle interrupt is disabled. Mask */
#define SMB_CFG_u32_ENIDI(value)              (SMB_CFG_u32_ENIDI_Msk & (_UINT32_(value) << SMB_CFG_u32_ENIDI_Pos)) /* Assigment of value for ENIDI in the SMB_CFG_u32 register */
#define SMB_CFG_u32_ENMI_Pos                  _UINT32_(30)                                         /* (SMB_CFG_u32) If this bit is 1, the Master Done interrupt is enabled. If this bit is 0, the Master Done interrupt is disabled. Position */
#define SMB_CFG_u32_ENMI_Msk                  (_UINT32_(0x1) << SMB_CFG_u32_ENMI_Pos)              /* (SMB_CFG_u32) If this bit is 1, the Master Done interrupt is enabled. If this bit is 0, the Master Done interrupt is disabled. Mask */
#define SMB_CFG_u32_ENMI(value)               (SMB_CFG_u32_ENMI_Msk & (_UINT32_(value) << SMB_CFG_u32_ENMI_Pos)) /* Assigment of value for ENMI in the SMB_CFG_u32 register */
#define SMB_CFG_u32_ENSI_Pos                  _UINT32_(31)                                         /* (SMB_CFG_u32) If this bit is 1, the Slave Done interrupt is enabled. If this bit is 0, the Slave Done interrupt is disabled Position */
#define SMB_CFG_u32_ENSI_Msk                  (_UINT32_(0x1) << SMB_CFG_u32_ENSI_Pos)              /* (SMB_CFG_u32) If this bit is 1, the Slave Done interrupt is enabled. If this bit is 0, the Slave Done interrupt is disabled Mask */
#define SMB_CFG_u32_ENSI(value)               (SMB_CFG_u32_ENSI_Msk & (_UINT32_(value) << SMB_CFG_u32_ENSI_Pos)) /* Assigment of value for ENSI in the SMB_CFG_u32 register */
#define SMB_CFG_u32_Msk                       _UINT32_(0xF00F7FFF)                                 /* (SMB_CFG_u32) Register Mask  */


/* -------- SMB_CFG_u16 : (SMB Offset: 0x28) (R/W 16) Configuration Register -------- */
#define SMB_CFG_u16_RESETVALUE                _UINT16_(0x00)                                       /*  (SMB_CFG_u16) Configuration Register  Reset Value */

#define SMB_CFG_u16_PORT_SEL_Pos              _UINT16_(0)                                          /* (SMB_CFG_u16) The PORT SEL [3:0] bits determine which one of 16 possible bus ports apply to the active 2-wire SDAT and SCLK bus pair. Position */
#define SMB_CFG_u16_PORT_SEL_Msk              (_UINT16_(0xF) << SMB_CFG_u16_PORT_SEL_Pos)          /* (SMB_CFG_u16) The PORT SEL [3:0] bits determine which one of 16 possible bus ports apply to the active 2-wire SDAT and SCLK bus pair. Mask */
#define SMB_CFG_u16_PORT_SEL(value)           (SMB_CFG_u16_PORT_SEL_Msk & (_UINT16_(value) << SMB_CFG_u16_PORT_SEL_Pos)) /* Assigment of value for PORT_SEL in the SMB_CFG_u16 register */
#define SMB_CFG_u16_TCEN_Pos                  _UINT16_(4)                                          /* (SMB_CFG_u16) When the Timing Check Enable bit (TCEN) is asserted ('1'), Bus Time-Outs are enabled Position */
#define SMB_CFG_u16_TCEN_Msk                  (_UINT16_(0x1) << SMB_CFG_u16_TCEN_Pos)              /* (SMB_CFG_u16) When the Timing Check Enable bit (TCEN) is asserted ('1'), Bus Time-Outs are enabled Mask */
#define SMB_CFG_u16_TCEN(value)               (SMB_CFG_u16_TCEN_Msk & (_UINT16_(value) << SMB_CFG_u16_TCEN_Pos)) /* Assigment of value for TCEN in the SMB_CFG_u16 register */
#define SMB_CFG_u16_SLOW_CLK_Pos              _UINT16_(5)                                          /* (SMB_CFG_u16) When this bit is 1, the base period for the Bus Clock Register is multiplied by 4, and thus the frequency is divided by 4. Position */
#define SMB_CFG_u16_SLOW_CLK_Msk              (_UINT16_(0x1) << SMB_CFG_u16_SLOW_CLK_Pos)          /* (SMB_CFG_u16) When this bit is 1, the base period for the Bus Clock Register is multiplied by 4, and thus the frequency is divided by 4. Mask */
#define SMB_CFG_u16_SLOW_CLK(value)           (SMB_CFG_u16_SLOW_CLK_Msk & (_UINT16_(value) << SMB_CFG_u16_SLOW_CLK_Pos)) /* Assigment of value for SLOW_CLK in the SMB_CFG_u16 register */
#define SMB_CFG_u16_TEST_Pos                  _UINT16_(6)                                          /* (SMB_CFG_u16) Must be always written with 0. Position */
#define SMB_CFG_u16_TEST_Msk                  (_UINT16_(0x1) << SMB_CFG_u16_TEST_Pos)              /* (SMB_CFG_u16) Must be always written with 0. Mask */
#define SMB_CFG_u16_TEST(value)               (SMB_CFG_u16_TEST_Msk & (_UINT16_(value) << SMB_CFG_u16_TEST_Pos)) /* Assigment of value for TEST in the SMB_CFG_u16 register */
#define SMB_CFG_u16_PECEN_Pos                 _UINT16_(7)                                          /* (SMB_CFG_u16) When the PEC Enable bit (PECEN) is asserted ('1'), Hardware PEC Support is enabled Position */
#define SMB_CFG_u16_PECEN_Msk                 (_UINT16_(0x1) << SMB_CFG_u16_PECEN_Pos)             /* (SMB_CFG_u16) When the PEC Enable bit (PECEN) is asserted ('1'), Hardware PEC Support is enabled Mask */
#define SMB_CFG_u16_PECEN(value)              (SMB_CFG_u16_PECEN_Msk & (_UINT16_(value) << SMB_CFG_u16_PECEN_Pos)) /* Assigment of value for PECEN in the SMB_CFG_u16 register */
#define SMB_CFG_u16_FEN_Pos                   _UINT16_(8)                                          /* (SMB_CFG_u16) Input filtering enable. Input filtering is required by the I2C specification if external filtering is not available.\n      1=Input filtering is enabled; 0=Input filtering is disabled. Position */
#define SMB_CFG_u16_FEN_Msk                   (_UINT16_(0x1) << SMB_CFG_u16_FEN_Pos)               /* (SMB_CFG_u16) Input filtering enable. Input filtering is required by the I2C specification if external filtering is not available.\n      1=Input filtering is enabled; 0=Input filtering is disabled. Mask */
#define SMB_CFG_u16_FEN(value)                (SMB_CFG_u16_FEN_Msk & (_UINT16_(value) << SMB_CFG_u16_FEN_Pos)) /* Assigment of value for FEN in the SMB_CFG_u16 register */
#define SMB_CFG_u16_RST_Pos                   _UINT16_(9)                                          /* (SMB_CFG_u16) When RESET is asserted ('1'), all logic and registers except for the RESET bit itself are initialized to the power-on default state. Position */
#define SMB_CFG_u16_RST_Msk                   (_UINT16_(0x1) << SMB_CFG_u16_RST_Pos)               /* (SMB_CFG_u16) When RESET is asserted ('1'), all logic and registers except for the RESET bit itself are initialized to the power-on default state. Mask */
#define SMB_CFG_u16_RST(value)                (SMB_CFG_u16_RST_Msk & (_UINT16_(value) << SMB_CFG_u16_RST_Pos)) /* Assigment of value for RST in the SMB_CFG_u16 register */
#define SMB_CFG_u16_EN_Pos                    _UINT16_(10)                                         /* (SMB_CFG_u16) When ENAB (Enable) is not asserted ('0') (default), the SMB Controller Core is disabled and in the lowest power consumption state (Disabled State).\n                The ENAB bit must be asserted ('1') for normal operation. Position */
#define SMB_CFG_u16_EN_Msk                    (_UINT16_(0x1) << SMB_CFG_u16_EN_Pos)                /* (SMB_CFG_u16) When ENAB (Enable) is not asserted ('0') (default), the SMB Controller Core is disabled and in the lowest power consumption state (Disabled State).\n                The ENAB bit must be asserted ('1') for normal operation. Mask */
#define SMB_CFG_u16_EN(value)                 (SMB_CFG_u16_EN_Msk & (_UINT16_(value) << SMB_CFG_u16_EN_Pos)) /* Assigment of value for EN in the SMB_CFG_u16 register */
#define SMB_CFG_u16_DSA_Pos                   _UINT16_(11)                                         /* (SMB_CFG_u16) 0: Slave Address I2C Compatibility Mode (default). 1: SMBus Address Decode Mode Position */
#define SMB_CFG_u16_DSA_Msk                   (_UINT16_(0x1) << SMB_CFG_u16_DSA_Pos)               /* (SMB_CFG_u16) 0: Slave Address I2C Compatibility Mode (default). 1: SMBus Address Decode Mode Mask */
#define SMB_CFG_u16_DSA(value)                (SMB_CFG_u16_DSA_Msk & (_UINT16_(value) << SMB_CFG_u16_DSA_Pos)) /* Assigment of value for DSA in the SMB_CFG_u16 register */
#define SMB_CFG_u16_FAIR_Pos                  _UINT16_(12)                                         /* (SMB_CFG_u16) If this bit is 1, the MCTP Fairness protocol is in effect. Position */
#define SMB_CFG_u16_FAIR_Msk                  (_UINT16_(0x1) << SMB_CFG_u16_FAIR_Pos)              /* (SMB_CFG_u16) If this bit is 1, the MCTP Fairness protocol is in effect. Mask */
#define SMB_CFG_u16_FAIR(value)               (SMB_CFG_u16_FAIR_Msk & (_UINT16_(value) << SMB_CFG_u16_FAIR_Pos)) /* Assigment of value for FAIR in the SMB_CFG_u16 register */
#define SMB_CFG_u16_TEST0_Pos                 _UINT16_(13)                                         /* (SMB_CFG_u16) Must be always written with 0. Position */
#define SMB_CFG_u16_TEST0_Msk                 (_UINT16_(0x1) << SMB_CFG_u16_TEST0_Pos)             /* (SMB_CFG_u16) Must be always written with 0. Mask */
#define SMB_CFG_u16_TEST0(value)              (SMB_CFG_u16_TEST0_Msk & (_UINT16_(value) << SMB_CFG_u16_TEST0_Pos)) /* Assigment of value for TEST0 in the SMB_CFG_u16 register */
#define SMB_CFG_u16_GC_DIS_Pos                _UINT16_(14)                                         /* (SMB_CFG_u16) This is the General Call Disable bit.\n                0: the response to the General Call address as a slave is enabled\n                1: the response to the General Call address as a slave is disabled. Position */
#define SMB_CFG_u16_GC_DIS_Msk                (_UINT16_(0x1) << SMB_CFG_u16_GC_DIS_Pos)            /* (SMB_CFG_u16) This is the General Call Disable bit.\n                0: the response to the General Call address as a slave is enabled\n                1: the response to the General Call address as a slave is disabled. Mask */
#define SMB_CFG_u16_GC_DIS(value)             (SMB_CFG_u16_GC_DIS_Msk & (_UINT16_(value) << SMB_CFG_u16_GC_DIS_Pos)) /* Assigment of value for GC_DIS in the SMB_CFG_u16 register */
#define SMB_CFG_u16_FLUSH_SXBUF_Pos           _UINT16_(16)                                         /* (SMB_CFG_u16) A write of a 1 to this bit forces the SMBus Slave Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Position */
#define SMB_CFG_u16_FLUSH_SXBUF_Msk           (_UINT16_(0x1) << SMB_CFG_u16_FLUSH_SXBUF_Pos)       /* (SMB_CFG_u16) A write of a 1 to this bit forces the SMBus Slave Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Mask */
#define SMB_CFG_u16_FLUSH_SXBUF(value)        (SMB_CFG_u16_FLUSH_SXBUF_Msk & (_UINT16_(value) << SMB_CFG_u16_FLUSH_SXBUF_Pos)) /* Assigment of value for FLUSH_SXBUF in the SMB_CFG_u16 register */
#define SMB_CFG_u16_FLUSH_SRBUF_Pos           _UINT16_(17)                                         /* (SMB_CFG_u16) A write of a 1 to this bit forces the SMBus Slave Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Position */
#define SMB_CFG_u16_FLUSH_SRBUF_Msk           (_UINT16_(0x1) << SMB_CFG_u16_FLUSH_SRBUF_Pos)       /* (SMB_CFG_u16) A write of a 1 to this bit forces the SMBus Slave Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Mask */
#define SMB_CFG_u16_FLUSH_SRBUF(value)        (SMB_CFG_u16_FLUSH_SRBUF_Msk & (_UINT16_(value) << SMB_CFG_u16_FLUSH_SRBUF_Pos)) /* Assigment of value for FLUSH_SRBUF in the SMB_CFG_u16 register */
#define SMB_CFG_u16_FLUSH_MXBUF_Pos           _UINT16_(18)                                         /* (SMB_CFG_u16) A write of a 1 to this bit forces the SMBus Master Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Position */
#define SMB_CFG_u16_FLUSH_MXBUF_Msk           (_UINT16_(0x1) << SMB_CFG_u16_FLUSH_MXBUF_Pos)       /* (SMB_CFG_u16) A write of a 1 to this bit forces the SMBus Master Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Mask */
#define SMB_CFG_u16_FLUSH_MXBUF(value)        (SMB_CFG_u16_FLUSH_MXBUF_Msk & (_UINT16_(value) << SMB_CFG_u16_FLUSH_MXBUF_Pos)) /* Assigment of value for FLUSH_MXBUF in the SMB_CFG_u16 register */
#define SMB_CFG_u16_FLUSH_MRBUF_Pos           _UINT16_(19)                                         /* (SMB_CFG_u16) A write of a 1 to this bit forces the SMBus Master Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Position */
#define SMB_CFG_u16_FLUSH_MRBUF_Msk           (_UINT16_(0x1) << SMB_CFG_u16_FLUSH_MRBUF_Pos)       /* (SMB_CFG_u16) A write of a 1 to this bit forces the SMBus Master Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Mask */
#define SMB_CFG_u16_FLUSH_MRBUF(value)        (SMB_CFG_u16_FLUSH_MRBUF_Msk & (_UINT16_(value) << SMB_CFG_u16_FLUSH_MRBUF_Pos)) /* Assigment of value for FLUSH_MRBUF in the SMB_CFG_u16 register */
#define SMB_CFG_u16_EN_AAS_Pos                _UINT16_(28)                                         /* (SMB_CFG_u16) 0: Disable the AAS, 1: Enable the AAS Interrupt Position */
#define SMB_CFG_u16_EN_AAS_Msk                (_UINT16_(0x1) << SMB_CFG_u16_EN_AAS_Pos)            /* (SMB_CFG_u16) 0: Disable the AAS, 1: Enable the AAS Interrupt Mask */
#define SMB_CFG_u16_EN_AAS(value)             (SMB_CFG_u16_EN_AAS_Msk & (_UINT16_(value) << SMB_CFG_u16_EN_AAS_Pos)) /* Assigment of value for EN_AAS in the SMB_CFG_u16 register */
#define SMB_CFG_u16_ENIDI_Pos                 _UINT16_(29)                                         /* (SMB_CFG_u16) If this bit is 1, the Idle interrupt is enabled. If this bit is 0, the Idle interrupt is disabled. Position */
#define SMB_CFG_u16_ENIDI_Msk                 (_UINT16_(0x1) << SMB_CFG_u16_ENIDI_Pos)             /* (SMB_CFG_u16) If this bit is 1, the Idle interrupt is enabled. If this bit is 0, the Idle interrupt is disabled. Mask */
#define SMB_CFG_u16_ENIDI(value)              (SMB_CFG_u16_ENIDI_Msk & (_UINT16_(value) << SMB_CFG_u16_ENIDI_Pos)) /* Assigment of value for ENIDI in the SMB_CFG_u16 register */
#define SMB_CFG_u16_ENMI_Pos                  _UINT16_(30)                                         /* (SMB_CFG_u16) If this bit is 1, the Master Done interrupt is enabled. If this bit is 0, the Master Done interrupt is disabled. Position */
#define SMB_CFG_u16_ENMI_Msk                  (_UINT16_(0x1) << SMB_CFG_u16_ENMI_Pos)              /* (SMB_CFG_u16) If this bit is 1, the Master Done interrupt is enabled. If this bit is 0, the Master Done interrupt is disabled. Mask */
#define SMB_CFG_u16_ENMI(value)               (SMB_CFG_u16_ENMI_Msk & (_UINT16_(value) << SMB_CFG_u16_ENMI_Pos)) /* Assigment of value for ENMI in the SMB_CFG_u16 register */
#define SMB_CFG_u16_ENSI_Pos                  _UINT16_(31)                                         /* (SMB_CFG_u16) If this bit is 1, the Slave Done interrupt is enabled. If this bit is 0, the Slave Done interrupt is disabled Position */
#define SMB_CFG_u16_ENSI_Msk                  (_UINT16_(0x1) << SMB_CFG_u16_ENSI_Pos)              /* (SMB_CFG_u16) If this bit is 1, the Slave Done interrupt is enabled. If this bit is 0, the Slave Done interrupt is disabled Mask */
#define SMB_CFG_u16_ENSI(value)               (SMB_CFG_u16_ENSI_Msk & (_UINT16_(value) << SMB_CFG_u16_ENSI_Pos)) /* Assigment of value for ENSI in the SMB_CFG_u16 register */
#define SMB_CFG_u16_Msk                       _UINT16_(0xF00F7FFF)                                 /* (SMB_CFG_u16) Register Mask  */


/* -------- SMB_CFG_u08 : (SMB Offset: 0x28) (R/W 8) Configuration Register -------- */
#define SMB_CFG_u08_RESETVALUE                _UINT8_(0x00)                                        /*  (SMB_CFG_u08) Configuration Register  Reset Value */

#define SMB_CFG_u08_PORT_SEL_Pos              _UINT8_(0)                                           /* (SMB_CFG_u08) The PORT SEL [3:0] bits determine which one of 16 possible bus ports apply to the active 2-wire SDAT and SCLK bus pair. Position */
#define SMB_CFG_u08_PORT_SEL_Msk              (_UINT8_(0xF) << SMB_CFG_u08_PORT_SEL_Pos)           /* (SMB_CFG_u08) The PORT SEL [3:0] bits determine which one of 16 possible bus ports apply to the active 2-wire SDAT and SCLK bus pair. Mask */
#define SMB_CFG_u08_PORT_SEL(value)           (SMB_CFG_u08_PORT_SEL_Msk & (_UINT8_(value) << SMB_CFG_u08_PORT_SEL_Pos)) /* Assigment of value for PORT_SEL in the SMB_CFG_u08 register */
#define SMB_CFG_u08_TCEN_Pos                  _UINT8_(4)                                           /* (SMB_CFG_u08) When the Timing Check Enable bit (TCEN) is asserted ('1'), Bus Time-Outs are enabled Position */
#define SMB_CFG_u08_TCEN_Msk                  (_UINT8_(0x1) << SMB_CFG_u08_TCEN_Pos)               /* (SMB_CFG_u08) When the Timing Check Enable bit (TCEN) is asserted ('1'), Bus Time-Outs are enabled Mask */
#define SMB_CFG_u08_TCEN(value)               (SMB_CFG_u08_TCEN_Msk & (_UINT8_(value) << SMB_CFG_u08_TCEN_Pos)) /* Assigment of value for TCEN in the SMB_CFG_u08 register */
#define SMB_CFG_u08_SLOW_CLK_Pos              _UINT8_(5)                                           /* (SMB_CFG_u08) When this bit is 1, the base period for the Bus Clock Register is multiplied by 4, and thus the frequency is divided by 4. Position */
#define SMB_CFG_u08_SLOW_CLK_Msk              (_UINT8_(0x1) << SMB_CFG_u08_SLOW_CLK_Pos)           /* (SMB_CFG_u08) When this bit is 1, the base period for the Bus Clock Register is multiplied by 4, and thus the frequency is divided by 4. Mask */
#define SMB_CFG_u08_SLOW_CLK(value)           (SMB_CFG_u08_SLOW_CLK_Msk & (_UINT8_(value) << SMB_CFG_u08_SLOW_CLK_Pos)) /* Assigment of value for SLOW_CLK in the SMB_CFG_u08 register */
#define SMB_CFG_u08_TEST_Pos                  _UINT8_(6)                                           /* (SMB_CFG_u08) Must be always written with 0. Position */
#define SMB_CFG_u08_TEST_Msk                  (_UINT8_(0x1) << SMB_CFG_u08_TEST_Pos)               /* (SMB_CFG_u08) Must be always written with 0. Mask */
#define SMB_CFG_u08_TEST(value)               (SMB_CFG_u08_TEST_Msk & (_UINT8_(value) << SMB_CFG_u08_TEST_Pos)) /* Assigment of value for TEST in the SMB_CFG_u08 register */
#define SMB_CFG_u08_PECEN_Pos                 _UINT8_(7)                                           /* (SMB_CFG_u08) When the PEC Enable bit (PECEN) is asserted ('1'), Hardware PEC Support is enabled Position */
#define SMB_CFG_u08_PECEN_Msk                 (_UINT8_(0x1) << SMB_CFG_u08_PECEN_Pos)              /* (SMB_CFG_u08) When the PEC Enable bit (PECEN) is asserted ('1'), Hardware PEC Support is enabled Mask */
#define SMB_CFG_u08_PECEN(value)              (SMB_CFG_u08_PECEN_Msk & (_UINT8_(value) << SMB_CFG_u08_PECEN_Pos)) /* Assigment of value for PECEN in the SMB_CFG_u08 register */
#define SMB_CFG_u08_FEN_Pos                   _UINT8_(8)                                           /* (SMB_CFG_u08) Input filtering enable. Input filtering is required by the I2C specification if external filtering is not available.\n      1=Input filtering is enabled; 0=Input filtering is disabled. Position */
#define SMB_CFG_u08_FEN_Msk                   (_UINT8_(0x1) << SMB_CFG_u08_FEN_Pos)                /* (SMB_CFG_u08) Input filtering enable. Input filtering is required by the I2C specification if external filtering is not available.\n      1=Input filtering is enabled; 0=Input filtering is disabled. Mask */
#define SMB_CFG_u08_FEN(value)                (SMB_CFG_u08_FEN_Msk & (_UINT8_(value) << SMB_CFG_u08_FEN_Pos)) /* Assigment of value for FEN in the SMB_CFG_u08 register */
#define SMB_CFG_u08_RST_Pos                   _UINT8_(9)                                           /* (SMB_CFG_u08) When RESET is asserted ('1'), all logic and registers except for the RESET bit itself are initialized to the power-on default state. Position */
#define SMB_CFG_u08_RST_Msk                   (_UINT8_(0x1) << SMB_CFG_u08_RST_Pos)                /* (SMB_CFG_u08) When RESET is asserted ('1'), all logic and registers except for the RESET bit itself are initialized to the power-on default state. Mask */
#define SMB_CFG_u08_RST(value)                (SMB_CFG_u08_RST_Msk & (_UINT8_(value) << SMB_CFG_u08_RST_Pos)) /* Assigment of value for RST in the SMB_CFG_u08 register */
#define SMB_CFG_u08_EN_Pos                    _UINT8_(10)                                          /* (SMB_CFG_u08) When ENAB (Enable) is not asserted ('0') (default), the SMB Controller Core is disabled and in the lowest power consumption state (Disabled State).\n                The ENAB bit must be asserted ('1') for normal operation. Position */
#define SMB_CFG_u08_EN_Msk                    (_UINT8_(0x1) << SMB_CFG_u08_EN_Pos)                 /* (SMB_CFG_u08) When ENAB (Enable) is not asserted ('0') (default), the SMB Controller Core is disabled and in the lowest power consumption state (Disabled State).\n                The ENAB bit must be asserted ('1') for normal operation. Mask */
#define SMB_CFG_u08_EN(value)                 (SMB_CFG_u08_EN_Msk & (_UINT8_(value) << SMB_CFG_u08_EN_Pos)) /* Assigment of value for EN in the SMB_CFG_u08 register */
#define SMB_CFG_u08_DSA_Pos                   _UINT8_(11)                                          /* (SMB_CFG_u08) 0: Slave Address I2C Compatibility Mode (default). 1: SMBus Address Decode Mode Position */
#define SMB_CFG_u08_DSA_Msk                   (_UINT8_(0x1) << SMB_CFG_u08_DSA_Pos)                /* (SMB_CFG_u08) 0: Slave Address I2C Compatibility Mode (default). 1: SMBus Address Decode Mode Mask */
#define SMB_CFG_u08_DSA(value)                (SMB_CFG_u08_DSA_Msk & (_UINT8_(value) << SMB_CFG_u08_DSA_Pos)) /* Assigment of value for DSA in the SMB_CFG_u08 register */
#define SMB_CFG_u08_FAIR_Pos                  _UINT8_(12)                                          /* (SMB_CFG_u08) If this bit is 1, the MCTP Fairness protocol is in effect. Position */
#define SMB_CFG_u08_FAIR_Msk                  (_UINT8_(0x1) << SMB_CFG_u08_FAIR_Pos)               /* (SMB_CFG_u08) If this bit is 1, the MCTP Fairness protocol is in effect. Mask */
#define SMB_CFG_u08_FAIR(value)               (SMB_CFG_u08_FAIR_Msk & (_UINT8_(value) << SMB_CFG_u08_FAIR_Pos)) /* Assigment of value for FAIR in the SMB_CFG_u08 register */
#define SMB_CFG_u08_TEST0_Pos                 _UINT8_(13)                                          /* (SMB_CFG_u08) Must be always written with 0. Position */
#define SMB_CFG_u08_TEST0_Msk                 (_UINT8_(0x1) << SMB_CFG_u08_TEST0_Pos)              /* (SMB_CFG_u08) Must be always written with 0. Mask */
#define SMB_CFG_u08_TEST0(value)              (SMB_CFG_u08_TEST0_Msk & (_UINT8_(value) << SMB_CFG_u08_TEST0_Pos)) /* Assigment of value for TEST0 in the SMB_CFG_u08 register */
#define SMB_CFG_u08_GC_DIS_Pos                _UINT8_(14)                                          /* (SMB_CFG_u08) This is the General Call Disable bit.\n                0: the response to the General Call address as a slave is enabled\n                1: the response to the General Call address as a slave is disabled. Position */
#define SMB_CFG_u08_GC_DIS_Msk                (_UINT8_(0x1) << SMB_CFG_u08_GC_DIS_Pos)             /* (SMB_CFG_u08) This is the General Call Disable bit.\n                0: the response to the General Call address as a slave is enabled\n                1: the response to the General Call address as a slave is disabled. Mask */
#define SMB_CFG_u08_GC_DIS(value)             (SMB_CFG_u08_GC_DIS_Msk & (_UINT8_(value) << SMB_CFG_u08_GC_DIS_Pos)) /* Assigment of value for GC_DIS in the SMB_CFG_u08 register */
#define SMB_CFG_u08_FLUSH_SXBUF_Pos           _UINT8_(16)                                          /* (SMB_CFG_u08) A write of a 1 to this bit forces the SMBus Slave Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Position */
#define SMB_CFG_u08_FLUSH_SXBUF_Msk           (_UINT8_(0x1) << SMB_CFG_u08_FLUSH_SXBUF_Pos)        /* (SMB_CFG_u08) A write of a 1 to this bit forces the SMBus Slave Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Mask */
#define SMB_CFG_u08_FLUSH_SXBUF(value)        (SMB_CFG_u08_FLUSH_SXBUF_Msk & (_UINT8_(value) << SMB_CFG_u08_FLUSH_SXBUF_Pos)) /* Assigment of value for FLUSH_SXBUF in the SMB_CFG_u08 register */
#define SMB_CFG_u08_FLUSH_SRBUF_Pos           _UINT8_(17)                                          /* (SMB_CFG_u08) A write of a 1 to this bit forces the SMBus Slave Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Position */
#define SMB_CFG_u08_FLUSH_SRBUF_Msk           (_UINT8_(0x1) << SMB_CFG_u08_FLUSH_SRBUF_Pos)        /* (SMB_CFG_u08) A write of a 1 to this bit forces the SMBus Slave Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Mask */
#define SMB_CFG_u08_FLUSH_SRBUF(value)        (SMB_CFG_u08_FLUSH_SRBUF_Msk & (_UINT8_(value) << SMB_CFG_u08_FLUSH_SRBUF_Pos)) /* Assigment of value for FLUSH_SRBUF in the SMB_CFG_u08 register */
#define SMB_CFG_u08_FLUSH_MXBUF_Pos           _UINT8_(18)                                          /* (SMB_CFG_u08) A write of a 1 to this bit forces the SMBus Master Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Position */
#define SMB_CFG_u08_FLUSH_MXBUF_Msk           (_UINT8_(0x1) << SMB_CFG_u08_FLUSH_MXBUF_Pos)        /* (SMB_CFG_u08) A write of a 1 to this bit forces the SMBus Master Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Mask */
#define SMB_CFG_u08_FLUSH_MXBUF(value)        (SMB_CFG_u08_FLUSH_MXBUF_Msk & (_UINT8_(value) << SMB_CFG_u08_FLUSH_MXBUF_Pos)) /* Assigment of value for FLUSH_MXBUF in the SMB_CFG_u08 register */
#define SMB_CFG_u08_FLUSH_MRBUF_Pos           _UINT8_(19)                                          /* (SMB_CFG_u08) A write of a 1 to this bit forces the SMBus Master Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Position */
#define SMB_CFG_u08_FLUSH_MRBUF_Msk           (_UINT8_(0x1) << SMB_CFG_u08_FLUSH_MRBUF_Pos)        /* (SMB_CFG_u08) A write of a 1 to this bit forces the SMBus Master Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Mask */
#define SMB_CFG_u08_FLUSH_MRBUF(value)        (SMB_CFG_u08_FLUSH_MRBUF_Msk & (_UINT8_(value) << SMB_CFG_u08_FLUSH_MRBUF_Pos)) /* Assigment of value for FLUSH_MRBUF in the SMB_CFG_u08 register */
#define SMB_CFG_u08_EN_AAS_Pos                _UINT8_(28)                                          /* (SMB_CFG_u08) 0: Disable the AAS, 1: Enable the AAS Interrupt Position */
#define SMB_CFG_u08_EN_AAS_Msk                (_UINT8_(0x1) << SMB_CFG_u08_EN_AAS_Pos)             /* (SMB_CFG_u08) 0: Disable the AAS, 1: Enable the AAS Interrupt Mask */
#define SMB_CFG_u08_EN_AAS(value)             (SMB_CFG_u08_EN_AAS_Msk & (_UINT8_(value) << SMB_CFG_u08_EN_AAS_Pos)) /* Assigment of value for EN_AAS in the SMB_CFG_u08 register */
#define SMB_CFG_u08_ENIDI_Pos                 _UINT8_(29)                                          /* (SMB_CFG_u08) If this bit is 1, the Idle interrupt is enabled. If this bit is 0, the Idle interrupt is disabled. Position */
#define SMB_CFG_u08_ENIDI_Msk                 (_UINT8_(0x1) << SMB_CFG_u08_ENIDI_Pos)              /* (SMB_CFG_u08) If this bit is 1, the Idle interrupt is enabled. If this bit is 0, the Idle interrupt is disabled. Mask */
#define SMB_CFG_u08_ENIDI(value)              (SMB_CFG_u08_ENIDI_Msk & (_UINT8_(value) << SMB_CFG_u08_ENIDI_Pos)) /* Assigment of value for ENIDI in the SMB_CFG_u08 register */
#define SMB_CFG_u08_ENMI_Pos                  _UINT8_(30)                                          /* (SMB_CFG_u08) If this bit is 1, the Master Done interrupt is enabled. If this bit is 0, the Master Done interrupt is disabled. Position */
#define SMB_CFG_u08_ENMI_Msk                  (_UINT8_(0x1) << SMB_CFG_u08_ENMI_Pos)               /* (SMB_CFG_u08) If this bit is 1, the Master Done interrupt is enabled. If this bit is 0, the Master Done interrupt is disabled. Mask */
#define SMB_CFG_u08_ENMI(value)               (SMB_CFG_u08_ENMI_Msk & (_UINT8_(value) << SMB_CFG_u08_ENMI_Pos)) /* Assigment of value for ENMI in the SMB_CFG_u08 register */
#define SMB_CFG_u08_ENSI_Pos                  _UINT8_(31)                                          /* (SMB_CFG_u08) If this bit is 1, the Slave Done interrupt is enabled. If this bit is 0, the Slave Done interrupt is disabled Position */
#define SMB_CFG_u08_ENSI_Msk                  (_UINT8_(0x1) << SMB_CFG_u08_ENSI_Pos)               /* (SMB_CFG_u08) If this bit is 1, the Slave Done interrupt is enabled. If this bit is 0, the Slave Done interrupt is disabled Mask */
#define SMB_CFG_u08_ENSI(value)               (SMB_CFG_u08_ENSI_Msk & (_UINT8_(value) << SMB_CFG_u08_ENSI_Pos)) /* Assigment of value for ENSI in the SMB_CFG_u08 register */
#define SMB_CFG_u08_Msk                       _UINT8_(0xF00F7FFF)                                  /* (SMB_CFG_u08) Register Mask  */


/* -------- SMB_BUSCLK : (SMB Offset: 0x2C) (R/W 32) Bus Clock Register -------- */
#define SMB_BUSCLK_RESETVALUE                 _UINT32_(0x4F4F)                                     /*  (SMB_BUSCLK) Bus Clock Register  Reset Value */

#define SMB_BUSCLK_LOW_PER_Pos                _UINT32_(0)                                          /* (SMB_BUSCLK) This field defines the number of I2C Baud Clock periods that make up the low phase of the I2C/SMBus bus clock. Position */
#define SMB_BUSCLK_LOW_PER_Msk                (_UINT32_(0xFF) << SMB_BUSCLK_LOW_PER_Pos)           /* (SMB_BUSCLK) This field defines the number of I2C Baud Clock periods that make up the low phase of the I2C/SMBus bus clock. Mask */
#define SMB_BUSCLK_LOW_PER(value)             (SMB_BUSCLK_LOW_PER_Msk & (_UINT32_(value) << SMB_BUSCLK_LOW_PER_Pos)) /* Assigment of value for LOW_PER in the SMB_BUSCLK register */
#define SMB_BUSCLK_HIGH_PER_Pos               _UINT32_(8)                                          /* (SMB_BUSCLK) This field defines the number of I2C Baud Clock periods that make up the high phase of the I2C/SMBus bus clock. Position */
#define SMB_BUSCLK_HIGH_PER_Msk               (_UINT32_(0xFF) << SMB_BUSCLK_HIGH_PER_Pos)          /* (SMB_BUSCLK) This field defines the number of I2C Baud Clock periods that make up the high phase of the I2C/SMBus bus clock. Mask */
#define SMB_BUSCLK_HIGH_PER(value)            (SMB_BUSCLK_HIGH_PER_Msk & (_UINT32_(value) << SMB_BUSCLK_HIGH_PER_Pos)) /* Assigment of value for HIGH_PER in the SMB_BUSCLK register */
#define SMB_BUSCLK_Msk                        _UINT32_(0x0000FFFF)                                 /* (SMB_BUSCLK) Register Mask  */


/* -------- SMB_BLKID : (SMB Offset: 0x30) ( R/ 8) Block ID Register -------- */
#define SMB_BLKID_RESETVALUE                  _UINT8_(0x00)                                        /*  (SMB_BLKID) Block ID Register  Reset Value */

#define SMB_BLKID_ID_Pos                      _UINT8_(0)                                           /* (SMB_BLKID) Block ID. Position */
#define SMB_BLKID_ID_Msk                      (_UINT8_(0xFF) << SMB_BLKID_ID_Pos)                  /* (SMB_BLKID) Block ID. Mask */
#define SMB_BLKID_ID(value)                   (SMB_BLKID_ID_Msk & (_UINT8_(value) << SMB_BLKID_ID_Pos)) /* Assigment of value for ID in the SMB_BLKID register */
#define SMB_BLKID_Msk                         _UINT8_(0xFF)                                        /* (SMB_BLKID) Register Mask  */


/* -------- SMB_BLKREV : (SMB Offset: 0x34) ( R/ 8) Revision Register -------- */
#define SMB_BLKREV_RESETVALUE                 _UINT8_(0x00)                                        /*  (SMB_BLKREV) Revision Register  Reset Value */

#define SMB_BLKREV_REV_Pos                    _UINT8_(0)                                           /* (SMB_BLKREV) Block Revision Number Position */
#define SMB_BLKREV_REV_Msk                    (_UINT8_(0xFF) << SMB_BLKREV_REV_Pos)                /* (SMB_BLKREV) Block Revision Number Mask */
#define SMB_BLKREV_REV(value)                 (SMB_BLKREV_REV_Msk & (_UINT8_(value) << SMB_BLKREV_REV_Pos)) /* Assigment of value for REV in the SMB_BLKREV register */
#define SMB_BLKREV_Msk                        _UINT8_(0xFF)                                        /* (SMB_BLKREV) Register Mask  */


/* -------- SMB_BBCTRL : (SMB Offset: 0x38) (R/W 32) Bit-Bang Control Register -------- */
#define SMB_BBCTRL_RESETVALUE                 _UINT32_(0x60)                                       /*  (SMB_BBCTRL) Bit-Bang Control Register  Reset Value */

#define SMB_BBCTRL_BBEN_Pos                   _UINT32_(0)                                          /* (SMB_BBCTRL) Bit-Bang Mode Enable. 0 - Bit Bang Mode Disabled. 1 - Bit Bang Mode Enabled Position */
#define SMB_BBCTRL_BBEN_Msk                   (_UINT32_(0x1) << SMB_BBCTRL_BBEN_Pos)               /* (SMB_BBCTRL) Bit-Bang Mode Enable. 0 - Bit Bang Mode Disabled. 1 - Bit Bang Mode Enabled Mask */
#define SMB_BBCTRL_BBEN(value)                (SMB_BBCTRL_BBEN_Msk & (_UINT32_(value) << SMB_BBCTRL_BBEN_Pos)) /* Assigment of value for BBEN in the SMB_BBCTRL register */
#define SMB_BBCTRL_CLDIR_Pos                  _UINT32_(1)                                          /* (SMB_BBCTRL) Bit-Bang Clock Direction. The CLDIR bit controls the direction of SCLK. 0 - Input, 1 - Output Position */
#define SMB_BBCTRL_CLDIR_Msk                  (_UINT32_(0x1) << SMB_BBCTRL_CLDIR_Pos)              /* (SMB_BBCTRL) Bit-Bang Clock Direction. The CLDIR bit controls the direction of SCLK. 0 - Input, 1 - Output Mask */
#define SMB_BBCTRL_CLDIR(value)               (SMB_BBCTRL_CLDIR_Msk & (_UINT32_(value) << SMB_BBCTRL_CLDIR_Pos)) /* Assigment of value for CLDIR in the SMB_BBCTRL register */
#define SMB_BBCTRL_DADIR_Pos                  _UINT32_(2)                                          /* (SMB_BBCTRL) Bit-Bang Data Direction. The DADIR bit controls the direction of SDAT. 0 - Input. 1 - Output Position */
#define SMB_BBCTRL_DADIR_Msk                  (_UINT32_(0x1) << SMB_BBCTRL_DADIR_Pos)              /* (SMB_BBCTRL) Bit-Bang Data Direction. The DADIR bit controls the direction of SDAT. 0 - Input. 1 - Output Mask */
#define SMB_BBCTRL_DADIR(value)               (SMB_BBCTRL_DADIR_Msk & (_UINT32_(value) << SMB_BBCTRL_DADIR_Pos)) /* Assigment of value for DADIR in the SMB_BBCTRL register */
#define SMB_BBCTRL_BBCLK_Pos                  _UINT32_(3)                                          /* (SMB_BBCTRL) Bit-Bang Clock. The BBCLK bit controls the state of SCLK when BBEN = and CLDIR = '1' Position */
#define SMB_BBCTRL_BBCLK_Msk                  (_UINT32_(0x1) << SMB_BBCTRL_BBCLK_Pos)              /* (SMB_BBCTRL) Bit-Bang Clock. The BBCLK bit controls the state of SCLK when BBEN = and CLDIR = '1' Mask */
#define SMB_BBCTRL_BBCLK(value)               (SMB_BBCTRL_BBCLK_Msk & (_UINT32_(value) << SMB_BBCTRL_BBCLK_Pos)) /* Assigment of value for BBCLK in the SMB_BBCTRL register */
#define SMB_BBCTRL_BBDAT_Pos                  _UINT32_(4)                                          /* (SMB_BBCTRL) Bit-Bang Data. The BBDAT bit controls the state of SDAT when BBEN = and DADIR = '1' Position */
#define SMB_BBCTRL_BBDAT_Msk                  (_UINT32_(0x1) << SMB_BBCTRL_BBDAT_Pos)              /* (SMB_BBCTRL) Bit-Bang Data. The BBDAT bit controls the state of SDAT when BBEN = and DADIR = '1' Mask */
#define SMB_BBCTRL_BBDAT(value)               (SMB_BBCTRL_BBDAT_Msk & (_UINT32_(value) << SMB_BBCTRL_BBDAT_Pos)) /* Assigment of value for BBDAT in the SMB_BBCTRL register */
#define SMB_BBCTRL_BBCLKI_Pos                 _UINT32_(5)                                          /* (SMB_BBCTRL) Bit-Bang Clock In. The BBCLKI bit always returns the state of SCLK. Position */
#define SMB_BBCTRL_BBCLKI_Msk                 (_UINT32_(0x1) << SMB_BBCTRL_BBCLKI_Pos)             /* (SMB_BBCTRL) Bit-Bang Clock In. The BBCLKI bit always returns the state of SCLK. Mask */
#define SMB_BBCTRL_BBCLKI(value)              (SMB_BBCTRL_BBCLKI_Msk & (_UINT32_(value) << SMB_BBCTRL_BBCLKI_Pos)) /* Assigment of value for BBCLKI in the SMB_BBCTRL register */
#define SMB_BBCTRL_BBDATI_Pos                 _UINT32_(6)                                          /* (SMB_BBCTRL) Bit-Bang Data In. The BBDATI bit always returns the state of SDAT Position */
#define SMB_BBCTRL_BBDATI_Msk                 (_UINT32_(0x1) << SMB_BBCTRL_BBDATI_Pos)             /* (SMB_BBCTRL) Bit-Bang Data In. The BBDATI bit always returns the state of SDAT Mask */
#define SMB_BBCTRL_BBDATI(value)              (SMB_BBCTRL_BBDATI_Msk & (_UINT32_(value) << SMB_BBCTRL_BBDATI_Pos)) /* Assigment of value for BBDATI in the SMB_BBCTRL register */
#define SMB_BBCTRL_Msk                        _UINT32_(0x0000007F)                                 /* (SMB_BBCTRL) Register Mask  */


/* -------- SMB_TEST : (SMB Offset: 0x3C) ( R/ 8) Test -------- */
#define SMB_TEST_RESETVALUE                   _UINT8_(0x00)                                        /*  (SMB_TEST) Test  Reset Value */

#define SMB_TEST_TEST_Pos                     _UINT8_(0)                                           /* (SMB_TEST) This register must not be written, or undesirable results may occur. Position */
#define SMB_TEST_TEST_Msk                     (_UINT8_(0xFF) << SMB_TEST_TEST_Pos)                 /* (SMB_TEST) This register must not be written, or undesirable results may occur. Mask */
#define SMB_TEST_TEST(value)                  (SMB_TEST_TEST_Msk & (_UINT8_(value) << SMB_TEST_TEST_Pos)) /* Assigment of value for TEST in the SMB_TEST register */
#define SMB_TEST_Msk                          _UINT8_(0xFF)                                        /* (SMB_TEST) Register Mask  */


/* -------- SMB_DATATM : (SMB Offset: 0x40) (R/W 32) Data Timing Register -------- */
#define SMB_DATATM_RESETVALUE                 _UINT32_(0xC4D5006)                                  /*  (SMB_DATATM) Data Timing Register  Reset Value */

#define SMB_DATATM_DATA_HOLD_Pos              _UINT32_(0)                                          /* (SMB_DATATM) The Data Hold [7:0] timer determines the SDAT hold time following SCLK driven low. Position */
#define SMB_DATATM_DATA_HOLD_Msk              (_UINT32_(0xFF) << SMB_DATATM_DATA_HOLD_Pos)         /* (SMB_DATATM) The Data Hold [7:0] timer determines the SDAT hold time following SCLK driven low. Mask */
#define SMB_DATATM_DATA_HOLD(value)           (SMB_DATATM_DATA_HOLD_Msk & (_UINT32_(value) << SMB_DATATM_DATA_HOLD_Pos)) /* Assigment of value for DATA_HOLD in the SMB_DATATM register */
#define SMB_DATATM_RESTART_SETUP_Pos          _UINT32_(8)                                          /* (SMB_DATATM) The Restart Setup [7:0] timer determines the SDAT setup time from the rising edge of SCLK for a repeated START condition. Position */
#define SMB_DATATM_RESTART_SETUP_Msk          (_UINT32_(0xFF) << SMB_DATATM_RESTART_SETUP_Pos)     /* (SMB_DATATM) The Restart Setup [7:0] timer determines the SDAT setup time from the rising edge of SCLK for a repeated START condition. Mask */
#define SMB_DATATM_RESTART_SETUP(value)       (SMB_DATATM_RESTART_SETUP_Msk & (_UINT32_(value) << SMB_DATATM_RESTART_SETUP_Pos)) /* Assigment of value for RESTART_SETUP in the SMB_DATATM register */
#define SMB_DATATM_STOP_SETUP_Pos             _UINT32_(16)                                         /* (SMB_DATATM) The Stop Setup [7:0] timer determines the SDAT setup time from the rising edge of SCLK for a STOP condition. Position */
#define SMB_DATATM_STOP_SETUP_Msk             (_UINT32_(0xFF) << SMB_DATATM_STOP_SETUP_Pos)        /* (SMB_DATATM) The Stop Setup [7:0] timer determines the SDAT setup time from the rising edge of SCLK for a STOP condition. Mask */
#define SMB_DATATM_STOP_SETUP(value)          (SMB_DATATM_STOP_SETUP_Msk & (_UINT32_(value) << SMB_DATATM_STOP_SETUP_Pos)) /* Assigment of value for STOP_SETUP in the SMB_DATATM register */
#define SMB_DATATM_FIRST_START_HOLD_Pos       _UINT32_(24)                                         /* (SMB_DATATM) This field determines the SCL hold time following SDA driven low during the first START bit in a transfer. It is the parameter\n      THD:STA in the I2C Specification for an initial START bit. Repeated START hold time is determined by the Repeated START Hold Time Register. Position */
#define SMB_DATATM_FIRST_START_HOLD_Msk       (_UINT32_(0xFF) << SMB_DATATM_FIRST_START_HOLD_Pos)  /* (SMB_DATATM) This field determines the SCL hold time following SDA driven low during the first START bit in a transfer. It is the parameter\n      THD:STA in the I2C Specification for an initial START bit. Repeated START hold time is determined by the Repeated START Hold Time Register. Mask */
#define SMB_DATATM_FIRST_START_HOLD(value)    (SMB_DATATM_FIRST_START_HOLD_Msk & (_UINT32_(value) << SMB_DATATM_FIRST_START_HOLD_Pos)) /* Assigment of value for FIRST_START_HOLD in the SMB_DATATM register */
#define SMB_DATATM_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (SMB_DATATM) Register Mask  */


/* -------- SMB_TMOUTSC : (SMB Offset: 0x44) (R/W 32) Time-Out Scaling Register -------- */
#define SMB_TMOUTSC_RESETVALUE                _UINT32_(0x4B9CC2C7)                                 /*  (SMB_TMOUTSC) Time-Out Scaling Register  Reset Value */

#define SMB_TMOUTSC_CLK_HIGH_TIM_OUT_Pos      _UINT32_(0)                                          /* (SMB_TMOUTSC) Clock High time out period = Clock High Time-Out [7:0] x Baud_Clock_Period x 2 Position */
#define SMB_TMOUTSC_CLK_HIGH_TIM_OUT_Msk      (_UINT32_(0xFF) << SMB_TMOUTSC_CLK_HIGH_TIM_OUT_Pos) /* (SMB_TMOUTSC) Clock High time out period = Clock High Time-Out [7:0] x Baud_Clock_Period x 2 Mask */
#define SMB_TMOUTSC_CLK_HIGH_TIM_OUT(value)   (SMB_TMOUTSC_CLK_HIGH_TIM_OUT_Msk & (_UINT32_(value) << SMB_TMOUTSC_CLK_HIGH_TIM_OUT_Pos)) /* Assigment of value for CLK_HIGH_TIM_OUT in the SMB_TMOUTSC register */
#define SMB_TMOUTSC_SLV_CUM_TIM_OUT_Pos       _UINT32_(8)                                          /* (SMB_TMOUTSC) Slave Cumulative Time-Out duration = Slave Cum Time-Out [7:0] x Baud_Clock_Period x 1024 Position */
#define SMB_TMOUTSC_SLV_CUM_TIM_OUT_Msk       (_UINT32_(0xFF) << SMB_TMOUTSC_SLV_CUM_TIM_OUT_Pos)  /* (SMB_TMOUTSC) Slave Cumulative Time-Out duration = Slave Cum Time-Out [7:0] x Baud_Clock_Period x 1024 Mask */
#define SMB_TMOUTSC_SLV_CUM_TIM_OUT(value)    (SMB_TMOUTSC_SLV_CUM_TIM_OUT_Msk & (_UINT32_(value) << SMB_TMOUTSC_SLV_CUM_TIM_OUT_Pos)) /* Assigment of value for SLV_CUM_TIM_OUT in the SMB_TMOUTSC register */
#define SMB_TMOUTSC_MAST_CUM_TIM_OUT_Pos      _UINT32_(16)                                         /* (SMB_TMOUTSC) Master Cumulative Time-Out duration = Master Cum Time-Out [7:0] x Baud_Clock_Period x 512 Position */
#define SMB_TMOUTSC_MAST_CUM_TIM_OUT_Msk      (_UINT32_(0xFF) << SMB_TMOUTSC_MAST_CUM_TIM_OUT_Pos) /* (SMB_TMOUTSC) Master Cumulative Time-Out duration = Master Cum Time-Out [7:0] x Baud_Clock_Period x 512 Mask */
#define SMB_TMOUTSC_MAST_CUM_TIM_OUT(value)   (SMB_TMOUTSC_MAST_CUM_TIM_OUT_Msk & (_UINT32_(value) << SMB_TMOUTSC_MAST_CUM_TIM_OUT_Pos)) /* Assigment of value for MAST_CUM_TIM_OUT in the SMB_TMOUTSC register */
#define SMB_TMOUTSC_BUS_IDLE_MIN_Pos          _UINT32_(24)                                         /* (SMB_TMOUTSC) Bus Idle Minimum time = Bus Idle Min [7:0] x Baud_Clock_Period Position */
#define SMB_TMOUTSC_BUS_IDLE_MIN_Msk          (_UINT32_(0xFF) << SMB_TMOUTSC_BUS_IDLE_MIN_Pos)     /* (SMB_TMOUTSC) Bus Idle Minimum time = Bus Idle Min [7:0] x Baud_Clock_Period Mask */
#define SMB_TMOUTSC_BUS_IDLE_MIN(value)       (SMB_TMOUTSC_BUS_IDLE_MIN_Msk & (_UINT32_(value) << SMB_TMOUTSC_BUS_IDLE_MIN_Pos)) /* Assigment of value for BUS_IDLE_MIN in the SMB_TMOUTSC register */
#define SMB_TMOUTSC_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (SMB_TMOUTSC) Register Mask  */


/* -------- SMB_SLV_TXB : (SMB Offset: 0x48) (R/W 32) SMBus Slave Transmit Buffer Register -------- */
#define SMB_SLV_TXB_RESETVALUE                _UINT32_(0x00)                                       /*  (SMB_SLV_TXB) SMBus Slave Transmit Buffer Register  Reset Value */

#define SMB_SLV_TXB_STXB_Pos                  _UINT32_(0)                                          /* (SMB_SLV_TXB) STXB Position */
#define SMB_SLV_TXB_STXB_Msk                  (_UINT32_(0xFF) << SMB_SLV_TXB_STXB_Pos)             /* (SMB_SLV_TXB) STXB Mask */
#define SMB_SLV_TXB_STXB(value)               (SMB_SLV_TXB_STXB_Msk & (_UINT32_(value) << SMB_SLV_TXB_STXB_Pos)) /* Assigment of value for STXB in the SMB_SLV_TXB register */
#define SMB_SLV_TXB_Msk                       _UINT32_(0x000000FF)                                 /* (SMB_SLV_TXB) Register Mask  */


/* -------- SMB_SLV_RXB : (SMB Offset: 0x4C) (R/W 32) SMBus Slave Receive Buffer Register -------- */
#define SMB_SLV_RXB_RESETVALUE                _UINT32_(0x00)                                       /*  (SMB_SLV_RXB) SMBus Slave Receive Buffer Register  Reset Value */

#define SMB_SLV_RXB_SRXB_Pos                  _UINT32_(0)                                          /* (SMB_SLV_RXB) SRXB Position */
#define SMB_SLV_RXB_SRXB_Msk                  (_UINT32_(0xFF) << SMB_SLV_RXB_SRXB_Pos)             /* (SMB_SLV_RXB) SRXB Mask */
#define SMB_SLV_RXB_SRXB(value)               (SMB_SLV_RXB_SRXB_Msk & (_UINT32_(value) << SMB_SLV_RXB_SRXB_Pos)) /* Assigment of value for SRXB in the SMB_SLV_RXB register */
#define SMB_SLV_RXB_Msk                       _UINT32_(0x000000FF)                                 /* (SMB_SLV_RXB) Register Mask  */


/* -------- SMB_MTR_TXB : (SMB Offset: 0x50) (R/W 32) SMBus Master Transmit Buffer Register -------- */
#define SMB_MTR_TXB_RESETVALUE                _UINT32_(0x00)                                       /*  (SMB_MTR_TXB) SMBus Master Transmit Buffer Register  Reset Value */

#define SMB_MTR_TXB_MTXB_Pos                  _UINT32_(0)                                          /* (SMB_MTR_TXB) MTXB Position */
#define SMB_MTR_TXB_MTXB_Msk                  (_UINT32_(0xFF) << SMB_MTR_TXB_MTXB_Pos)             /* (SMB_MTR_TXB) MTXB Mask */
#define SMB_MTR_TXB_MTXB(value)               (SMB_MTR_TXB_MTXB_Msk & (_UINT32_(value) << SMB_MTR_TXB_MTXB_Pos)) /* Assigment of value for MTXB in the SMB_MTR_TXB register */
#define SMB_MTR_TXB_Msk                       _UINT32_(0x000000FF)                                 /* (SMB_MTR_TXB) Register Mask  */


/* -------- SMB_MTR_RXB : (SMB Offset: 0x54) (R/W 32) SMBus Master Receive Buffer Register -------- */
#define SMB_MTR_RXB_RESETVALUE                _UINT32_(0x00)                                       /*  (SMB_MTR_RXB) SMBus Master Receive Buffer Register  Reset Value */

#define SMB_MTR_RXB_MRXB_Pos                  _UINT32_(0)                                          /* (SMB_MTR_RXB) MRXB Position */
#define SMB_MTR_RXB_MRXB_Msk                  (_UINT32_(0xFF) << SMB_MTR_RXB_MRXB_Pos)             /* (SMB_MTR_RXB) MRXB Mask */
#define SMB_MTR_RXB_MRXB(value)               (SMB_MTR_RXB_MRXB_Msk & (_UINT32_(value) << SMB_MTR_RXB_MRXB_Pos)) /* Assigment of value for MRXB in the SMB_MTR_RXB register */
#define SMB_MTR_RXB_Msk                       _UINT32_(0x000000FF)                                 /* (SMB_MTR_RXB) Register Mask  */


/* -------- SMB_WAKE_STS : (SMB Offset: 0x60) (R/W 32) WAKE STATUS Register -------- */
#define SMB_WAKE_STS_RESETVALUE               _UINT32_(0x00)                                       /*  (SMB_WAKE_STS) WAKE STATUS Register  Reset Value */

#define SMB_WAKE_STS_START_BIT_DET_Pos        _UINT32_(0)                                          /* (SMB_WAKE_STS) This bit is set to '1' when a START bit is detected while the controller is enabled. This bit is cleared to '0' when\n      written with a '1'. Writes of '0' have no effect. (R/WC) Position */
#define SMB_WAKE_STS_START_BIT_DET_Msk        (_UINT32_(0x1) << SMB_WAKE_STS_START_BIT_DET_Pos)    /* (SMB_WAKE_STS) This bit is set to '1' when a START bit is detected while the controller is enabled. This bit is cleared to '0' when\n      written with a '1'. Writes of '0' have no effect. (R/WC) Mask */
#define SMB_WAKE_STS_START_BIT_DET(value)     (SMB_WAKE_STS_START_BIT_DET_Msk & (_UINT32_(value) << SMB_WAKE_STS_START_BIT_DET_Pos)) /* Assigment of value for START_BIT_DET in the SMB_WAKE_STS register */
#define SMB_WAKE_STS_Msk                      _UINT32_(0x00000001)                                 /* (SMB_WAKE_STS) Register Mask  */


/* -------- SMB_WAKE_EN : (SMB Offset: 0x64) (R/W 32) WAKE ENABLE Register -------- */
#define SMB_WAKE_EN_RESETVALUE                _UINT32_(0x00)                                       /*  (SMB_WAKE_EN) WAKE ENABLE Register  Reset Value */

#define SMB_WAKE_EN_START_DET_INT_EN_Pos      _UINT32_(0)                                          /* (SMB_WAKE_EN) Enable Start Bit Detection Interrupt. The Start Bit Detection Interrupt is wake-capable.\n      1=Start Bit Detection Interrupt enabled; 0=Start Bit Detection Interrupt disabled Position */
#define SMB_WAKE_EN_START_DET_INT_EN_Msk      (_UINT32_(0x1) << SMB_WAKE_EN_START_DET_INT_EN_Pos)  /* (SMB_WAKE_EN) Enable Start Bit Detection Interrupt. The Start Bit Detection Interrupt is wake-capable.\n      1=Start Bit Detection Interrupt enabled; 0=Start Bit Detection Interrupt disabled Mask */
#define SMB_WAKE_EN_START_DET_INT_EN(value)   (SMB_WAKE_EN_START_DET_INT_EN_Msk & (_UINT32_(value) << SMB_WAKE_EN_START_DET_INT_EN_Pos)) /* Assigment of value for START_DET_INT_EN in the SMB_WAKE_EN register */
#define SMB_WAKE_EN_Msk                       _UINT32_(0x00000001)                                 /* (SMB_WAKE_EN) Register Mask  */


/** \brief SMB register offsets definitions */
#define SMB_WCTRL_REG_OFST             _UINT32_(0x00)      /* (SMB_WCTRL) Control Register Offset */
#define SMB_RSTS_REG_OFST              _UINT32_(0x00)      /* (SMB_RSTS) Status Register Offset */
#define SMB_OWN_ADDR_REG_OFST          _UINT32_(0x04)      /* (SMB_OWN_ADDR) Own Address Register\n           Note that the Data Register and Own Address fields are offset by one bit, so that programming Own Address 1 with a value of 55h will result in the value AAh being recognized as the SMB Controller Core slave address. Offset */
#define SMB_I2CDATA_REG_OFST           _UINT32_(0x08)      /* (SMB_I2CDATA) This register holds the data that are either shifted out to or shifted in from the I2C port. Offset */
#define SMB_RSVD1_REG_OFST             _UINT32_(0x09)      /* (SMB_RSVD1) Reserved Offset */
#define SMB_RSVD1_0_REG_OFST           _UINT32_(0x09)      /* (SMB_RSVD1_0) Reserved Offset */
#define SMB_RSVD1_1_REG_OFST           _UINT32_(0x0A)      /* (SMB_RSVD1_1) Reserved Offset */
#define SMB_RSVD1_2_REG_OFST           _UINT32_(0x0B)      /* (SMB_RSVD1_2) Reserved Offset */
#define SMB_MCMD_u32_REG_OFST          _UINT32_(0x0C)      /* (SMB_MCMD_u32) SMBus Master Command Register Offset */
#define SMB_MCMD_u16_REG_OFST          _UINT32_(0x0C)      /* (SMB_MCMD_u16) SMBus Master Command Register Offset */
#define SMB_MCMD_u16_0_REG_OFST        _UINT32_(0x0C)      /* (SMB_MCMD_u16_0) SMBus Master Command Register Offset */
#define SMB_MCMD_u16_1_REG_OFST        _UINT32_(0x0E)      /* (SMB_MCMD_u16_1) SMBus Master Command Register Offset */
#define SMB_MCMD_u08_REG_OFST          _UINT32_(0x0C)      /* (SMB_MCMD_u08) SMBus Master Command Register Offset */
#define SMB_MCMD_u08_0_REG_OFST        _UINT32_(0x0C)      /* (SMB_MCMD_u08_0) SMBus Master Command Register Offset */
#define SMB_MCMD_u08_1_REG_OFST        _UINT32_(0x0D)      /* (SMB_MCMD_u08_1) SMBus Master Command Register Offset */
#define SMB_MCMD_u08_2_REG_OFST        _UINT32_(0x0E)      /* (SMB_MCMD_u08_2) SMBus Master Command Register Offset */
#define SMB_MCMD_u08_3_REG_OFST        _UINT32_(0x0F)      /* (SMB_MCMD_u08_3) SMBus Master Command Register Offset */
#define SMB_SCMD_u32_REG_OFST          _UINT32_(0x10)      /* (SMB_SCMD_u32) SMBus Slave Command Register Offset */
#define SMB_SCMD_u16_REG_OFST          _UINT32_(0x10)      /* (SMB_SCMD_u16) SMBus Slave Command Register Offset */
#define SMB_SCMD_u16_0_REG_OFST        _UINT32_(0x10)      /* (SMB_SCMD_u16_0) SMBus Slave Command Register Offset */
#define SMB_SCMD_u16_1_REG_OFST        _UINT32_(0x12)      /* (SMB_SCMD_u16_1) SMBus Slave Command Register Offset */
#define SMB_SCMD_u08_REG_OFST          _UINT32_(0x10)      /* (SMB_SCMD_u08) SMBus Slave Command Register Offset */
#define SMB_SCMD_u08_0_REG_OFST        _UINT32_(0x10)      /* (SMB_SCMD_u08_0) SMBus Slave Command Register Offset */
#define SMB_SCMD_u08_1_REG_OFST        _UINT32_(0x11)      /* (SMB_SCMD_u08_1) SMBus Slave Command Register Offset */
#define SMB_SCMD_u08_2_REG_OFST        _UINT32_(0x12)      /* (SMB_SCMD_u08_2) SMBus Slave Command Register Offset */
#define SMB_SCMD_u08_3_REG_OFST        _UINT32_(0x13)      /* (SMB_SCMD_u08_3) SMBus Slave Command Register Offset */
#define SMB_PEC_REG_OFST               _UINT32_(0x14)      /* (SMB_PEC) Packet Error Check (PEC) Register Offset */
#define SMB_RSHTM_REG_OFST             _UINT32_(0x18)      /* (SMB_RSHTM) Repeated Start Hold Time Register Offset */
#define SMB_RSVD2_REG_OFST             _UINT32_(0x1C)      /* (SMB_RSVD2) Reserved Offset */
#define SMB_COMPL_u32_REG_OFST         _UINT32_(0x20)      /* (SMB_COMPL_u32) Completion Register Offset */
#define SMB_COMPL_u16_REG_OFST         _UINT32_(0x20)      /* (SMB_COMPL_u16) Completion Register Offset */
#define SMB_COMPL_u16_0_REG_OFST       _UINT32_(0x20)      /* (SMB_COMPL_u16_0) Completion Register Offset */
#define SMB_COMPL_u16_1_REG_OFST       _UINT32_(0x22)      /* (SMB_COMPL_u16_1) Completion Register Offset */
#define SMB_COMPL_u08_REG_OFST         _UINT32_(0x20)      /* (SMB_COMPL_u08) Completion Register Offset */
#define SMB_COMPL_u08_0_REG_OFST       _UINT32_(0x20)      /* (SMB_COMPL_u08_0) Completion Register Offset */
#define SMB_COMPL_u08_1_REG_OFST       _UINT32_(0x21)      /* (SMB_COMPL_u08_1) Completion Register Offset */
#define SMB_COMPL_u08_2_REG_OFST       _UINT32_(0x22)      /* (SMB_COMPL_u08_2) Completion Register Offset */
#define SMB_COMPL_u08_3_REG_OFST       _UINT32_(0x23)      /* (SMB_COMPL_u08_3) Completion Register Offset */
#define SMB_IDLSC_REG_OFST             _UINT32_(0x24)      /* (SMB_IDLSC) Idle Scaling Register Offset */
#define SMB_CFG_u32_REG_OFST           _UINT32_(0x28)      /* (SMB_CFG_u32) Configuration Register Offset */
#define SMB_CFG_u16_REG_OFST           _UINT32_(0x28)      /* (SMB_CFG_u16) Configuration Register Offset */
#define SMB_CFG_u16_0_REG_OFST         _UINT32_(0x28)      /* (SMB_CFG_u16_0) Configuration Register Offset */
#define SMB_CFG_u16_1_REG_OFST         _UINT32_(0x2A)      /* (SMB_CFG_u16_1) Configuration Register Offset */
#define SMB_CFG_u08_REG_OFST           _UINT32_(0x28)      /* (SMB_CFG_u08) Configuration Register Offset */
#define SMB_CFG_u08_0_REG_OFST         _UINT32_(0x28)      /* (SMB_CFG_u08_0) Configuration Register Offset */
#define SMB_CFG_u08_1_REG_OFST         _UINT32_(0x29)      /* (SMB_CFG_u08_1) Configuration Register Offset */
#define SMB_CFG_u08_2_REG_OFST         _UINT32_(0x2A)      /* (SMB_CFG_u08_2) Configuration Register Offset */
#define SMB_CFG_u08_3_REG_OFST         _UINT32_(0x2B)      /* (SMB_CFG_u08_3) Configuration Register Offset */
#define SMB_BUSCLK_REG_OFST            _UINT32_(0x2C)      /* (SMB_BUSCLK) Bus Clock Register Offset */
#define SMB_BLKID_REG_OFST             _UINT32_(0x30)      /* (SMB_BLKID) Block ID Register Offset */
#define SMB_BLKREV_REG_OFST            _UINT32_(0x34)      /* (SMB_BLKREV) Revision Register Offset */
#define SMB_BBCTRL_REG_OFST            _UINT32_(0x38)      /* (SMB_BBCTRL) Bit-Bang Control Register Offset */
#define SMB_TEST_REG_OFST              _UINT32_(0x3C)      /* (SMB_TEST) Test Offset */
#define SMB_DATATM_REG_OFST            _UINT32_(0x40)      /* (SMB_DATATM) Data Timing Register Offset */
#define SMB_TMOUTSC_REG_OFST           _UINT32_(0x44)      /* (SMB_TMOUTSC) Time-Out Scaling Register Offset */
#define SMB_SLV_TXB_REG_OFST           _UINT32_(0x48)      /* (SMB_SLV_TXB) SMBus Slave Transmit Buffer Register Offset */
#define SMB_SLV_RXB_REG_OFST           _UINT32_(0x4C)      /* (SMB_SLV_RXB) SMBus Slave Receive Buffer Register Offset */
#define SMB_MTR_TXB_REG_OFST           _UINT32_(0x50)      /* (SMB_MTR_TXB) SMBus Master Transmit Buffer Register Offset */
#define SMB_MTR_RXB_REG_OFST           _UINT32_(0x54)      /* (SMB_MTR_RXB) SMBus Master Receive Buffer Register Offset */
#define SMB_WAKE_STS_REG_OFST          _UINT32_(0x60)      /* (SMB_WAKE_STS) WAKE STATUS Register Offset */
#define SMB_WAKE_EN_REG_OFST           _UINT32_(0x64)      /* (SMB_WAKE_EN) WAKE ENABLE Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SMB register API structure */
typedef struct
{  /* The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
  union
  {
      __I   uint32_t                       SMB_RSTS;           /**< Offset: 0x00 (R/   32) Status Register */
      __O   uint32_t                       SMB_WCTRL;          /**< Offset: 0x00 ( /W  32) Control Register */
  };
  __IO  uint32_t                       SMB_OWN_ADDR;       /**< Offset: 0x04 (R/W  32) Own Address Register\n           Note that the Data Register and Own Address fields are offset by one bit, so that programming Own Address 1 with a value of 55h will result in the value AAh being recognized as the SMB Controller Core slave address. */
  __IO  uint8_t                        SMB_I2CDATA;        /**< Offset: 0x08 (R/W  8) This register holds the data that are either shifted out to or shifted in from the I2C port. */
  __I   uint8_t                        SMB_RSVD1[3];       /**< Offset: 0x09 (R/   8) Reserved */
  union
  {
      __IO  uint16_t                       SMB_MCMD_u16[2];    /**< Offset: 0x0C (R/W  16) SMBus Master Command Register */
      __IO  uint8_t                        SMB_MCMD_u08[4];    /**< Offset: 0x0C (R/W  8) SMBus Master Command Register */
      __IO  uint32_t                       SMB_MCMD_u32;       /**< Offset: 0x0C (R/W  32) SMBus Master Command Register */
  };
  union
  {
      __IO  uint16_t                       SMB_SCMD_u16[2];    /**< Offset: 0x10 (R/W  16) SMBus Slave Command Register */
      __IO  uint8_t                        SMB_SCMD_u08[4];    /**< Offset: 0x10 (R/W  8) SMBus Slave Command Register */
      __IO  uint32_t                       SMB_SCMD_u32;       /**< Offset: 0x10 (R/W  32) SMBus Slave Command Register */
  };
  __IO  uint32_t                       SMB_PEC;            /**< Offset: 0x14 (R/W  32) Packet Error Check (PEC) Register */
  __IO  uint32_t                       SMB_RSHTM;          /**< Offset: 0x18 (R/W  32) Repeated Start Hold Time Register */
  __I   uint32_t                       SMB_RSVD2;          /**< Offset: 0x1C (R/   32) Reserved */
  union
  {
      __IO  uint16_t                       SMB_COMPL_u16[2];   /**< Offset: 0x20 (R/W  16) Completion Register */
      __IO  uint8_t                        SMB_COMPL_u08[4];   /**< Offset: 0x20 (R/W  8) Completion Register */
      __IO  uint32_t                       SMB_COMPL_u32;      /**< Offset: 0x20 (R/W  32) Completion Register */
  };
  __IO  uint32_t                       SMB_IDLSC;          /**< Offset: 0x24 (R/W  32) Idle Scaling Register */
  union
  {
      __IO  uint16_t                       SMB_CFG_u16[2];     /**< Offset: 0x28 (R/W  16) Configuration Register */
      __IO  uint8_t                        SMB_CFG_u08[4];     /**< Offset: 0x28 (R/W  8) Configuration Register */
      __IO  uint32_t                       SMB_CFG_u32;        /**< Offset: 0x28 (R/W  32) Configuration Register */
  };
  __IO  uint32_t                       SMB_BUSCLK;         /**< Offset: 0x2C (R/W  32) Bus Clock Register */
  __I   uint8_t                        SMB_BLKID;          /**< Offset: 0x30 (R/   8) Block ID Register */
  __I   uint8_t                        Reserved1[0x03];
  __I   uint8_t                        SMB_BLKREV;         /**< Offset: 0x34 (R/   8) Revision Register */
  __I   uint8_t                        Reserved2[0x03];
  __IO  uint32_t                       SMB_BBCTRL;         /**< Offset: 0x38 (R/W  32) Bit-Bang Control Register */
  __I   uint8_t                        SMB_TEST;           /**< Offset: 0x3C (R/   8) Test */
  __I   uint8_t                        Reserved3[0x03];
  __IO  uint32_t                       SMB_DATATM;         /**< Offset: 0x40 (R/W  32) Data Timing Register */
  __IO  uint32_t                       SMB_TMOUTSC;        /**< Offset: 0x44 (R/W  32) Time-Out Scaling Register */
  __IO  uint32_t                       SMB_SLV_TXB;        /**< Offset: 0x48 (R/W  32) SMBus Slave Transmit Buffer Register */
  __IO  uint32_t                       SMB_SLV_RXB;        /**< Offset: 0x4C (R/W  32) SMBus Slave Receive Buffer Register */
  __IO  uint32_t                       SMB_MTR_TXB;        /**< Offset: 0x50 (R/W  32) SMBus Master Transmit Buffer Register */
  __IO  uint32_t                       SMB_MTR_RXB;        /**< Offset: 0x54 (R/W  32) SMBus Master Receive Buffer Register */
  __I   uint8_t                        Reserved4[0x08];
  __IO  uint32_t                       SMB_WAKE_STS;       /**< Offset: 0x60 (R/W  32) WAKE STATUS Register */
  __IO  uint32_t                       SMB_WAKE_EN;        /**< Offset: 0x64 (R/W  32) WAKE ENABLE Register */
} smb_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC1702Q_SMB_COMPONENT_H_ */
