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

/* file generated from device description version 2023-01-17T13:00:30Z */
#ifndef _CEC_SMB_COMPONENT_H_
#define _CEC_SMB_COMPONENT_H_

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
#define SMB_RSTS_RESETVALUE                   _UINT32_(0x81)                                       /*  (SMB_RSTS) Status Register  Reset Value */

#define SMB_RSTS_NBB_Pos                      _UINT32_(0)                                          /* (SMB_RSTS) The Bus Busy bit (NBB) is a read-only flag indicating when the bus is in use. A zero indicates that the bus is busy and access is not possible. Position */
#define SMB_RSTS_NBB_Msk                      (_UINT32_(0x1) << SMB_RSTS_NBB_Pos)                  /* (SMB_RSTS) The Bus Busy bit (NBB) is a read-only flag indicating when the bus is in use. A zero indicates that the bus is busy and access is not possible. Mask */
#define SMB_RSTS_NBB(value)                   (SMB_RSTS_NBB_Msk & (_UINT32_(value) << SMB_RSTS_NBB_Pos)) /* Assigment of value for NBB in the SMB_RSTS register */
#define SMB_RSTS_LAB_Pos                      _UINT32_(1)                                          /* (SMB_RSTS) The Lost Arbitration Bit (LAB) is set when, in multi-master operation, arbitration is lost to another master on the bus Position */
#define SMB_RSTS_LAB_Msk                      (_UINT32_(0x1) << SMB_RSTS_LAB_Pos)                  /* (SMB_RSTS) The Lost Arbitration Bit (LAB) is set when, in multi-master operation, arbitration is lost to another master on the bus Mask */
#define SMB_RSTS_LAB(value)                   (SMB_RSTS_LAB_Msk & (_UINT32_(value) << SMB_RSTS_LAB_Pos)) /* Assigment of value for LAB in the SMB_RSTS register */
#define SMB_RSTS_AAS_Pos                      _UINT32_(2)                                          /* (SMB_RSTS) The Addressed As Slave bit (AAS) is valid only when PIN is asserted ('0'). When acting as slave, AAS is set when an incoming address over the bus matches the value in the Own Address Register or if the 'general call' address (00h) has been received Position */
#define SMB_RSTS_AAS_Msk                      (_UINT32_(0x1) << SMB_RSTS_AAS_Pos)                  /* (SMB_RSTS) The Addressed As Slave bit (AAS) is valid only when PIN is asserted ('0'). When acting as slave, AAS is set when an incoming address over the bus matches the value in the Own Address Register or if the 'general call' address (00h) has been received Mask */
#define SMB_RSTS_AAS(value)                   (SMB_RSTS_AAS_Msk & (_UINT32_(value) << SMB_RSTS_AAS_Pos)) /* Assigment of value for AAS in the SMB_RSTS register */
#define SMB_RSTS_LRB_AD0_Pos                  _UINT32_(3)                                          /* (SMB_RSTS) The Last Received Bit  or Address 0 (general call) bit (LRB/AD0) serves a dual function and is valid only while the PIN bit is asserted ('0').                When the AAS bit is not asserted ('0') (i.e., not addressed as a slave), the LRB/AD0 holds the value of the last received bit over the bus.                When the AAS bit is asserted ('1') (i.e., addressed as slave), the SMB Controller Core has been addressed as a slave. Position */
#define SMB_RSTS_LRB_AD0_Msk                  (_UINT32_(0x1) << SMB_RSTS_LRB_AD0_Pos)              /* (SMB_RSTS) The Last Received Bit  or Address 0 (general call) bit (LRB/AD0) serves a dual function and is valid only while the PIN bit is asserted ('0').                When the AAS bit is not asserted ('0') (i.e., not addressed as a slave), the LRB/AD0 holds the value of the last received bit over the bus.                When the AAS bit is asserted ('1') (i.e., addressed as slave), the SMB Controller Core has been addressed as a slave. Mask */
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

#define SMB_RSTS_LRB_AD_Pos                   _UINT32_(3)                                          /* (SMB_RSTS Position) The Last Received Bit  or Address x (general call) bit (LRB/ADx) serves a dual function and is valid only while the PIN bit is asserted ('x').                When the AAS bit is not asserted ('x') (i.e., not addressed as a slave), the LRB/ADx holds the value of the last received bit over the bus.                When the AAS bit is asserted ('x') (i.e., addressed as slave), the SMB Controller Core has been addressed as a slave. */
#define SMB_RSTS_LRB_AD_Msk                   (_UINT32_(0x1) << SMB_RSTS_LRB_AD_Pos)               /* (SMB_RSTS Mask) LRB_AD */
#define SMB_RSTS_LRB_AD(value)                (SMB_RSTS_LRB_AD_Msk & (_UINT32_(value) << SMB_RSTS_LRB_AD_Pos)) 

/* -------- SMB_OWN_ADDR : (SMB Offset: 0x04) (R/W 32) Own Address Register           Note that the Data Register and Own Address fields are offset by one bit, so that programming Own Address 1 with a value of 55h will result in the value AAh being recognized as the SMB Controller Core slave address. -------- */
#define SMB_OWN_ADDR_RESETVALUE               _UINT32_(0x00)                                       /*  (SMB_OWN_ADDR) Own Address Register           Note that the Data Register and Own Address fields are offset by one bit, so that programming Own Address 1 with a value of 55h will result in the value AAh being recognized as the SMB Controller Core slave address.  Reset Value */

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


/* -------- SMB_MCMD : (SMB Offset: 0x0C) (R/W 32) SMBus Master Command Register -------- */
#define SMB_MCMD_RESETVALUE                   _UINT32_(0x00)                                       /*  (SMB_MCMD) SMBus Master Command Register  Reset Value */

#define SMB_MCMD_MRUN_Pos                     _UINT32_(0)                                          /* (SMB_MCMD) While this bit is 1, transfer bytes over SMBus. As long as WriteCount is non-zero, a byte from the Master Transmit Buffer is transmitted to the slave device and WriteCount is decremented. Position */
#define SMB_MCMD_MRUN_Msk                     (_UINT32_(0x1) << SMB_MCMD_MRUN_Pos)                 /* (SMB_MCMD) While this bit is 1, transfer bytes over SMBus. As long as WriteCount is non-zero, a byte from the Master Transmit Buffer is transmitted to the slave device and WriteCount is decremented. Mask */
#define SMB_MCMD_MRUN(value)                  (SMB_MCMD_MRUN_Msk & (_UINT32_(value) << SMB_MCMD_MRUN_Pos)) /* Assigment of value for MRUN in the SMB_MCMD register */
#define SMB_MCMD_MPROCEED_Pos                 _UINT32_(1)                                          /* (SMB_MCMD) When this bit is 0, the Master State Machine does not transition out of the IDLE or PAUSE states. When this bit is 1, the Master State Machine immediately transitions to the WAIT-BUSBUSY and MRUN-RECEIVE states, respectively. Position */
#define SMB_MCMD_MPROCEED_Msk                 (_UINT32_(0x1) << SMB_MCMD_MPROCEED_Pos)             /* (SMB_MCMD) When this bit is 0, the Master State Machine does not transition out of the IDLE or PAUSE states. When this bit is 1, the Master State Machine immediately transitions to the WAIT-BUSBUSY and MRUN-RECEIVE states, respectively. Mask */
#define SMB_MCMD_MPROCEED(value)              (SMB_MCMD_MPROCEED_Msk & (_UINT32_(value) << SMB_MCMD_MPROCEED_Pos)) /* Assigment of value for MPROCEED in the SMB_MCMD register */
#define SMB_MCMD_START0_Pos                   _UINT32_(8)                                          /* (SMB_MCMD) If this bit is 1, send a Start bit on the SMBus before the first byte of the WriteCount is sent to the SMBus transmitter. Position */
#define SMB_MCMD_START0_Msk                   (_UINT32_(0x1) << SMB_MCMD_START0_Pos)               /* (SMB_MCMD) If this bit is 1, send a Start bit on the SMBus before the first byte of the WriteCount is sent to the SMBus transmitter. Mask */
#define SMB_MCMD_START0(value)                (SMB_MCMD_START0_Msk & (_UINT32_(value) << SMB_MCMD_START0_Pos)) /* Assigment of value for START0 in the SMB_MCMD register */
#define SMB_MCMD_STARTN_Pos                   _UINT32_(9)                                          /* (SMB_MCMD) If this bit is 1, send a Start bit just before the last byte of the WriteCount is sent to the SMBus transmitter. Position */
#define SMB_MCMD_STARTN_Msk                   (_UINT32_(0x1) << SMB_MCMD_STARTN_Pos)               /* (SMB_MCMD) If this bit is 1, send a Start bit just before the last byte of the WriteCount is sent to the SMBus transmitter. Mask */
#define SMB_MCMD_STARTN(value)                (SMB_MCMD_STARTN_Msk & (_UINT32_(value) << SMB_MCMD_STARTN_Pos)) /* Assigment of value for STARTN in the SMB_MCMD register */
#define SMB_MCMD_STOP_Pos                     _UINT32_(10)                                         /* (SMB_MCMD) If this bit is 1, send a Stop bit after the transaction completes. Position */
#define SMB_MCMD_STOP_Msk                     (_UINT32_(0x1) << SMB_MCMD_STOP_Pos)                 /* (SMB_MCMD) If this bit is 1, send a Stop bit after the transaction completes. Mask */
#define SMB_MCMD_STOP(value)                  (SMB_MCMD_STOP_Msk & (_UINT32_(value) << SMB_MCMD_STOP_Pos)) /* Assigment of value for STOP in the SMB_MCMD register */
#define SMB_MCMD_PEC_TERM_Pos                 _UINT32_(11)                                         /* (SMB_MCMD) If this bit is 1, a copy of the PEC register is transmitted when WriteCount is 0. After the PEC register is read, both the PEC register and this bit are cleared to 0. Position */
#define SMB_MCMD_PEC_TERM_Msk                 (_UINT32_(0x1) << SMB_MCMD_PEC_TERM_Pos)             /* (SMB_MCMD) If this bit is 1, a copy of the PEC register is transmitted when WriteCount is 0. After the PEC register is read, both the PEC register and this bit are cleared to 0. Mask */
#define SMB_MCMD_PEC_TERM(value)              (SMB_MCMD_PEC_TERM_Msk & (_UINT32_(value) << SMB_MCMD_PEC_TERM_Pos)) /* Assigment of value for PEC_TERM in the SMB_MCMD register */
#define SMB_MCMD_READM_Pos                    _UINT32_(12)                                         /* (SMB_MCMD) If this bit is 1, then the ReadCount field is replaced by the byte that is read from the SMBus when ReadCount[7:0] is 1. After ReadCount[7:0] is updated, this bit is cleared to 0. Position */
#define SMB_MCMD_READM_Msk                    (_UINT32_(0x1) << SMB_MCMD_READM_Pos)                /* (SMB_MCMD) If this bit is 1, then the ReadCount field is replaced by the byte that is read from the SMBus when ReadCount[7:0] is 1. After ReadCount[7:0] is updated, this bit is cleared to 0. Mask */
#define SMB_MCMD_READM(value)                 (SMB_MCMD_READM_Msk & (_UINT32_(value) << SMB_MCMD_READM_Pos)) /* Assigment of value for READM in the SMB_MCMD register */
#define SMB_MCMD_READ_PEC_Pos                 _UINT32_(13)                                         /* (SMB_MCMD) If this bit is 0, reading from the SMBus stops when ReadCount reaches 0. If this bit is 1, reading continues when ReadCount is 0 for one more byte. Position */
#define SMB_MCMD_READ_PEC_Msk                 (_UINT32_(0x1) << SMB_MCMD_READ_PEC_Pos)             /* (SMB_MCMD) If this bit is 0, reading from the SMBus stops when ReadCount reaches 0. If this bit is 1, reading continues when ReadCount is 0 for one more byte. Mask */
#define SMB_MCMD_READ_PEC(value)              (SMB_MCMD_READ_PEC_Msk & (_UINT32_(value) << SMB_MCMD_READ_PEC_Pos)) /* Assigment of value for READ_PEC in the SMB_MCMD register */
#define SMB_MCMD_WR_CNT_Pos                   _UINT32_(16)                                         /* (SMB_MCMD) This field is a count of the number of bytes to transmit to the SMBus from the SMBus Master Transmit Buffer Register It is decremented by 1 for each byte written to the SMBus from the SMBus Master Transmit Buffer Register. Position */
#define SMB_MCMD_WR_CNT_Msk                   (_UINT32_(0xFF) << SMB_MCMD_WR_CNT_Pos)              /* (SMB_MCMD) This field is a count of the number of bytes to transmit to the SMBus from the SMBus Master Transmit Buffer Register It is decremented by 1 for each byte written to the SMBus from the SMBus Master Transmit Buffer Register. Mask */
#define SMB_MCMD_WR_CNT(value)                (SMB_MCMD_WR_CNT_Msk & (_UINT32_(value) << SMB_MCMD_WR_CNT_Pos)) /* Assigment of value for WR_CNT in the SMB_MCMD register */
#define SMB_MCMD_RD_CNT_Pos                   _UINT32_(24)                                         /* (SMB_MCMD) This field is a count of the number of bytes to read in from the SMBus to the SMBus Master Receive Buffer Register and must be greater than 0 in order for the Master State Machine to initiate a read phase. It is decremented by 1 for each byte read from the SMBus into the SMBus Master Receive Buffer Register. It can be overwritten by the first byte read in from the SMBus. Position */
#define SMB_MCMD_RD_CNT_Msk                   (_UINT32_(0xFF) << SMB_MCMD_RD_CNT_Pos)              /* (SMB_MCMD) This field is a count of the number of bytes to read in from the SMBus to the SMBus Master Receive Buffer Register and must be greater than 0 in order for the Master State Machine to initiate a read phase. It is decremented by 1 for each byte read from the SMBus into the SMBus Master Receive Buffer Register. It can be overwritten by the first byte read in from the SMBus. Mask */
#define SMB_MCMD_RD_CNT(value)                (SMB_MCMD_RD_CNT_Msk & (_UINT32_(value) << SMB_MCMD_RD_CNT_Pos)) /* Assigment of value for RD_CNT in the SMB_MCMD register */
#define SMB_MCMD_Msk                          _UINT32_(0xFFFF3F03)                                 /* (SMB_MCMD) Register Mask  */

#define SMB_MCMD_START_Pos                    _UINT32_(8)                                          /* (SMB_MCMD Position) If this bit is x, send a Start bit on the SMBus before the first byte of the WriteCount is sent to the SMBus transmitter. */
#define SMB_MCMD_START_Msk                    (_UINT32_(0x1) << SMB_MCMD_START_Pos)                /* (SMB_MCMD Mask) START */
#define SMB_MCMD_START(value)                 (SMB_MCMD_START_Msk & (_UINT32_(value) << SMB_MCMD_START_Pos)) 

/* -------- SMB_SCMD : (SMB Offset: 0x10) (R/W 32) SMBus Slave Command Register -------- */
#define SMB_SCMD_RESETVALUE                   _UINT32_(0x00)                                       /*  (SMB_SCMD) SMBus Slave Command Register  Reset Value */

#define SMB_SCMD_SRUN_Pos                     _UINT32_(0)                                          /* (SMB_SCMD) Setting this bit to 1 enables the Slave State Machine to operate. Position */
#define SMB_SCMD_SRUN_Msk                     (_UINT32_(0x1) << SMB_SCMD_SRUN_Pos)                 /* (SMB_SCMD) Setting this bit to 1 enables the Slave State Machine to operate. Mask */
#define SMB_SCMD_SRUN(value)                  (SMB_SCMD_SRUN_Msk & (_UINT32_(value) << SMB_SCMD_SRUN_Pos)) /* Assigment of value for SRUN in the SMB_SCMD register */
#define SMB_SCMD_SPROCEED_Pos                 _UINT32_(1)                                          /* (SMB_SCMD) When this bit is 0, the Slave State Machine does not transition out of the IDLE, REPEAT_START_WRITE or REPEAT_START_READ states. When this bit is 1, the Slave State Machine immediately transitions to the START_WAIT, RECEIVE and TRANSMIT states, respectively. Position */
#define SMB_SCMD_SPROCEED_Msk                 (_UINT32_(0x1) << SMB_SCMD_SPROCEED_Pos)             /* (SMB_SCMD) When this bit is 0, the Slave State Machine does not transition out of the IDLE, REPEAT_START_WRITE or REPEAT_START_READ states. When this bit is 1, the Slave State Machine immediately transitions to the START_WAIT, RECEIVE and TRANSMIT states, respectively. Mask */
#define SMB_SCMD_SPROCEED(value)              (SMB_SCMD_SPROCEED_Msk & (_UINT32_(value) << SMB_SCMD_SPROCEED_Pos)) /* Assigment of value for SPROCEED in the SMB_SCMD register */
#define SMB_SCMD_PEC_Pos                      _UINT32_(2)                                          /* (SMB_SCMD) If Slave_WriteCount is 0 and Slave_PEC is 1 when the Master requests data, the PEC Register is copied to the DATA register. After the PEC Register is copied to the SMBus, the PEC Register is cleared and Slave_PEC is set to 0. Position */
#define SMB_SCMD_PEC_Msk                      (_UINT32_(0x1) << SMB_SCMD_PEC_Pos)                  /* (SMB_SCMD) If Slave_WriteCount is 0 and Slave_PEC is 1 when the Master requests data, the PEC Register is copied to the DATA register. After the PEC Register is copied to the SMBus, the PEC Register is cleared and Slave_PEC is set to 0. Mask */
#define SMB_SCMD_PEC(value)                   (SMB_SCMD_PEC_Msk & (_UINT32_(value) << SMB_SCMD_PEC_Pos)) /* Assigment of value for PEC in the SMB_SCMD register */
#define SMB_SCMD_WR_CNT_Pos                   _UINT32_(8)                                          /* (SMB_SCMD) This field is set to the number of bytes software expects to send to the Master. Position */
#define SMB_SCMD_WR_CNT_Msk                   (_UINT32_(0xFF) << SMB_SCMD_WR_CNT_Pos)              /* (SMB_SCMD) This field is set to the number of bytes software expects to send to the Master. Mask */
#define SMB_SCMD_WR_CNT(value)                (SMB_SCMD_WR_CNT_Msk & (_UINT32_(value) << SMB_SCMD_WR_CNT_Pos)) /* Assigment of value for WR_CNT in the SMB_SCMD register */
#define SMB_SCMD_RD_CNT_Pos                   _UINT32_(16)                                         /* (SMB_SCMD) This field is decremented each time a byte is copied from DATA to the SMBus Slave Receive Buffer Register. Position */
#define SMB_SCMD_RD_CNT_Msk                   (_UINT32_(0xFF) << SMB_SCMD_RD_CNT_Pos)              /* (SMB_SCMD) This field is decremented each time a byte is copied from DATA to the SMBus Slave Receive Buffer Register. Mask */
#define SMB_SCMD_RD_CNT(value)                (SMB_SCMD_RD_CNT_Msk & (_UINT32_(value) << SMB_SCMD_RD_CNT_Pos)) /* Assigment of value for RD_CNT in the SMB_SCMD register */
#define SMB_SCMD_Msk                          _UINT32_(0x00FFFF07)                                 /* (SMB_SCMD) Register Mask  */


/* -------- SMB_PEC : (SMB Offset: 0x14) (R/W 32) Packet Error Check (PEC) Register -------- */
#define SMB_PEC_RESETVALUE                    _UINT32_(0x00)                                       /*  (SMB_PEC) Packet Error Check (PEC) Register  Reset Value */

#define SMB_PEC_PEC_Pos                       _UINT32_(0)                                          /* (SMB_PEC) The SMBus Packet Error Check (PEC) byte. Position */
#define SMB_PEC_PEC_Msk                       (_UINT32_(0xFF) << SMB_PEC_PEC_Pos)                  /* (SMB_PEC) The SMBus Packet Error Check (PEC) byte. Mask */
#define SMB_PEC_PEC(value)                    (SMB_PEC_PEC_Msk & (_UINT32_(value) << SMB_PEC_PEC_Pos)) /* Assigment of value for PEC in the SMB_PEC register */
#define SMB_PEC_Msk                           _UINT32_(0x000000FF)                                 /* (SMB_PEC) Register Mask  */


/* -------- SMB_RSHTM : (SMB Offset: 0x18) (R/W 32) Repeated Start Hold Time Register -------- */
#define SMB_RSHTM_RESETVALUE                  _UINT32_(0x4D)                                       /*  (SMB_RSHTM) Repeated Start Hold Time Register  Reset Value */

#define SMB_RSHTM_RSHTM_Pos                   _UINT32_(0)                                          /* (SMB_RSHTM) This is the value of the timing requirement tHd:Sta in the I2C specification for a repeated START bit. This is used to hold      the clock until the Hold Time for the repeated Start Bit has been satisfied. Position */
#define SMB_RSHTM_RSHTM_Msk                   (_UINT32_(0xFF) << SMB_RSHTM_RSHTM_Pos)              /* (SMB_RSHTM) This is the value of the timing requirement tHd:Sta in the I2C specification for a repeated START bit. This is used to hold      the clock until the Hold Time for the repeated Start Bit has been satisfied. Mask */
#define SMB_RSHTM_RSHTM(value)                (SMB_RSHTM_RSHTM_Msk & (_UINT32_(value) << SMB_RSHTM_RSHTM_Pos)) /* Assigment of value for RSHTM in the SMB_RSHTM register */
#define SMB_RSHTM_Msk                         _UINT32_(0x000000FF)                                 /* (SMB_RSHTM) Register Mask  */


/* -------- SMB_EXTND_LEN : (SMB Offset: 0x1C) ( R/ 32) Extended Length Register -------- */
#define SMB_EXTND_LEN_RESETVALUE              _UINT32_(0x00)                                       /*  (SMB_EXTND_LEN) Extended Length Register  Reset Value */

#define SMB_EXTND_LEN_EXTND_LEN_Pos           _UINT32_(0)                                          /* (SMB_EXTND_LEN) Extended Length Register adds 8 MSB bits to the SMBUS Master/Slave Tx/Rx Length fields. Position */
#define SMB_EXTND_LEN_EXTND_LEN_Msk           (_UINT32_(0xFF) << SMB_EXTND_LEN_EXTND_LEN_Pos)      /* (SMB_EXTND_LEN) Extended Length Register adds 8 MSB bits to the SMBUS Master/Slave Tx/Rx Length fields. Mask */
#define SMB_EXTND_LEN_EXTND_LEN(value)        (SMB_EXTND_LEN_EXTND_LEN_Msk & (_UINT32_(value) << SMB_EXTND_LEN_EXTND_LEN_Pos)) /* Assigment of value for EXTND_LEN in the SMB_EXTND_LEN register */
#define SMB_EXTND_LEN_Msk                     _UINT32_(0x000000FF)                                 /* (SMB_EXTND_LEN) Register Mask  */


/* -------- SMB_COMPL : (SMB Offset: 0x20) (R/W 32) Completion Register -------- */
#define SMB_COMPL_RESETVALUE                  _UINT32_(0x00)                                       /*  (SMB_COMPL) Completion Register  Reset Value */

#define SMB_COMPL_DTEN_Pos                    _UINT32_(2)                                          /* (SMB_COMPL) When DTEN is asserted ('1'), Device Time-out checking is enabled. When DTEN is not asserted ('0'), Device Time-out checking is disabled. Position */
#define SMB_COMPL_DTEN_Msk                    (_UINT32_(0x1) << SMB_COMPL_DTEN_Pos)                /* (SMB_COMPL) When DTEN is asserted ('1'), Device Time-out checking is enabled. When DTEN is not asserted ('0'), Device Time-out checking is disabled. Mask */
#define SMB_COMPL_DTEN(value)                 (SMB_COMPL_DTEN_Msk & (_UINT32_(value) << SMB_COMPL_DTEN_Pos)) /* Assigment of value for DTEN in the SMB_COMPL register */
#define SMB_COMPL_MCEN_Pos                    _UINT32_(3)                                          /* (SMB_COMPL) When MCEN is asserted ('1'), Master Cumulative Time-Out checking is enabled. When MCEN is not asserted ('0'), Master Cumulative Time-Out checking is disabled. Position */
#define SMB_COMPL_MCEN_Msk                    (_UINT32_(0x1) << SMB_COMPL_MCEN_Pos)                /* (SMB_COMPL) When MCEN is asserted ('1'), Master Cumulative Time-Out checking is enabled. When MCEN is not asserted ('0'), Master Cumulative Time-Out checking is disabled. Mask */
#define SMB_COMPL_MCEN(value)                 (SMB_COMPL_MCEN_Msk & (_UINT32_(value) << SMB_COMPL_MCEN_Pos)) /* Assigment of value for MCEN in the SMB_COMPL register */
#define SMB_COMPL_SCEN_Pos                    _UINT32_(4)                                          /* (SMB_COMPL) When SCEN is asserted ('1'), Slave Cumulative Time-Out checking is enabled. When SCEN is not asserted ('0'), Slave Cumulative Time-Out checking is disabled. Position */
#define SMB_COMPL_SCEN_Msk                    (_UINT32_(0x1) << SMB_COMPL_SCEN_Pos)                /* (SMB_COMPL) When SCEN is asserted ('1'), Slave Cumulative Time-Out checking is enabled. When SCEN is not asserted ('0'), Slave Cumulative Time-Out checking is disabled. Mask */
#define SMB_COMPL_SCEN(value)                 (SMB_COMPL_SCEN_Msk & (_UINT32_(value) << SMB_COMPL_SCEN_Pos)) /* Assigment of value for SCEN in the SMB_COMPL register */
#define SMB_COMPL_BIDEN_Pos                   _UINT32_(5)                                          /* (SMB_COMPL) When BIDEN is asserted ('1'), Bus Idle Detect Time-Out checking is enabled. When BIDEN is not asserted ('0'), Bus Idle Detect Time-Out checking is disabled. Position */
#define SMB_COMPL_BIDEN_Msk                   (_UINT32_(0x1) << SMB_COMPL_BIDEN_Pos)               /* (SMB_COMPL) When BIDEN is asserted ('1'), Bus Idle Detect Time-Out checking is enabled. When BIDEN is not asserted ('0'), Bus Idle Detect Time-Out checking is disabled. Mask */
#define SMB_COMPL_BIDEN(value)                (SMB_COMPL_BIDEN_Msk & (_UINT32_(value) << SMB_COMPL_BIDEN_Pos)) /* Assigment of value for BIDEN in the SMB_COMPL register */
#define SMB_COMPL_TIMERR_Pos                  _UINT32_(6)                                          /* (SMB_COMPL) The Time-out Error Detected bit (TIMERR) is asserted ('1') whenever any of the enabled time-out error detect status bits (CHDH, CHDL, SCTO, MCTO and DTO) are asserted. Position */
#define SMB_COMPL_TIMERR_Msk                  (_UINT32_(0x1) << SMB_COMPL_TIMERR_Pos)              /* (SMB_COMPL) The Time-out Error Detected bit (TIMERR) is asserted ('1') whenever any of the enabled time-out error detect status bits (CHDH, CHDL, SCTO, MCTO and DTO) are asserted. Mask */
#define SMB_COMPL_TIMERR(value)               (SMB_COMPL_TIMERR_Msk & (_UINT32_(value) << SMB_COMPL_TIMERR_Pos)) /* Assigment of value for TIMERR in the SMB_COMPL register */
#define SMB_COMPL_DTO_Pos                     _UINT32_(8)                                          /* (SMB_COMPL) DTO is the Device Time-out bit. (R/WC) Position */
#define SMB_COMPL_DTO_Msk                     (_UINT32_(0x1) << SMB_COMPL_DTO_Pos)                 /* (SMB_COMPL) DTO is the Device Time-out bit. (R/WC) Mask */
#define SMB_COMPL_DTO(value)                  (SMB_COMPL_DTO_Msk & (_UINT32_(value) << SMB_COMPL_DTO_Pos)) /* Assigment of value for DTO in the SMB_COMPL register */
#define SMB_COMPL_MCTO_Pos                    _UINT32_(9)                                          /* (SMB_COMPL) MCTO is the Master Cumulative Time-out bit. (R/WC) Position */
#define SMB_COMPL_MCTO_Msk                    (_UINT32_(0x1) << SMB_COMPL_MCTO_Pos)                /* (SMB_COMPL) MCTO is the Master Cumulative Time-out bit. (R/WC) Mask */
#define SMB_COMPL_MCTO(value)                 (SMB_COMPL_MCTO_Msk & (_UINT32_(value) << SMB_COMPL_MCTO_Pos)) /* Assigment of value for MCTO in the SMB_COMPL register */
#define SMB_COMPL_SCTO_Pos                    _UINT32_(10)                                         /* (SMB_COMPL) SCTO is the Slave Cumulative Time-out bit(R/WC) Position */
#define SMB_COMPL_SCTO_Msk                    (_UINT32_(0x1) << SMB_COMPL_SCTO_Pos)                /* (SMB_COMPL) SCTO is the Slave Cumulative Time-out bit(R/WC) Mask */
#define SMB_COMPL_SCTO(value)                 (SMB_COMPL_SCTO_Msk & (_UINT32_(value) << SMB_COMPL_SCTO_Pos)) /* Assigment of value for SCTO in the SMB_COMPL register */
#define SMB_COMPL_CHDL_Pos                    _UINT32_(11)                                         /* (SMB_COMPL) CHDL is the clock high time-out detect bit(R/WC) Position */
#define SMB_COMPL_CHDL_Msk                    (_UINT32_(0x1) << SMB_COMPL_CHDL_Pos)                /* (SMB_COMPL) CHDL is the clock high time-out detect bit(R/WC) Mask */
#define SMB_COMPL_CHDL(value)                 (SMB_COMPL_CHDL_Msk & (_UINT32_(value) << SMB_COMPL_CHDL_Pos)) /* Assigment of value for CHDL in the SMB_COMPL register */
#define SMB_COMPL_CHDH_Pos                    _UINT32_(12)                                         /* (SMB_COMPL) CHDH is the bus idle time-out detect bit(R/WC) Position */
#define SMB_COMPL_CHDH_Msk                    (_UINT32_(0x1) << SMB_COMPL_CHDH_Pos)                /* (SMB_COMPL) CHDH is the bus idle time-out detect bit(R/WC) Mask */
#define SMB_COMPL_CHDH(value)                 (SMB_COMPL_CHDH_Msk & (_UINT32_(value) << SMB_COMPL_CHDH_Pos)) /* Assigment of value for CHDH in the SMB_COMPL register */
#define SMB_COMPL_BER_Pos                     _UINT32_(13)                                         /* (SMB_COMPL) If this bit is 1, the BER bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Position */
#define SMB_COMPL_BER_Msk                     (_UINT32_(0x1) << SMB_COMPL_BER_Pos)                 /* (SMB_COMPL) If this bit is 1, the BER bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Mask */
#define SMB_COMPL_BER(value)                  (SMB_COMPL_BER_Msk & (_UINT32_(value) << SMB_COMPL_BER_Pos)) /* Assigment of value for BER in the SMB_COMPL register */
#define SMB_COMPL_LAB_Pos                     _UINT32_(14)                                         /* (SMB_COMPL) If this bit is 1, the LAB bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Position */
#define SMB_COMPL_LAB_Msk                     (_UINT32_(0x1) << SMB_COMPL_LAB_Pos)                 /* (SMB_COMPL) If this bit is 1, the LAB bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Mask */
#define SMB_COMPL_LAB(value)                  (SMB_COMPL_LAB_Msk & (_UINT32_(value) << SMB_COMPL_LAB_Pos)) /* Assigment of value for LAB in the SMB_COMPL register */
#define SMB_COMPL_SNAKR_Pos                   _UINT32_(16)                                         /* (SMB_COMPL) If this bit is 1, the Slave state machine sent a NACK to the transmitting Master while the Slave was receiving data from the SMBus interface. Position */
#define SMB_COMPL_SNAKR_Msk                   (_UINT32_(0x1) << SMB_COMPL_SNAKR_Pos)               /* (SMB_COMPL) If this bit is 1, the Slave state machine sent a NACK to the transmitting Master while the Slave was receiving data from the SMBus interface. Mask */
#define SMB_COMPL_SNAKR(value)                (SMB_COMPL_SNAKR_Msk & (_UINT32_(value) << SMB_COMPL_SNAKR_Pos)) /* Assigment of value for SNAKR in the SMB_COMPL register */
#define SMB_COMPL_STR_Pos                     _UINT32_(17)                                         /* (SMB_COMPL) 0: Slave has just finished the receive phase of a transaction.                 1: Slave has just finished the transmit phase of a transaction. Position */
#define SMB_COMPL_STR_Msk                     (_UINT32_(0x1) << SMB_COMPL_STR_Pos)                 /* (SMB_COMPL) 0: Slave has just finished the receive phase of a transaction.                 1: Slave has just finished the transmit phase of a transaction. Mask */
#define SMB_COMPL_STR(value)                  (SMB_COMPL_STR_Msk & (_UINT32_(value) << SMB_COMPL_STR_Pos)) /* Assigment of value for STR in the SMB_COMPL register */
#define SMB_COMPL_SPROT_Pos                   _UINT32_(19)                                         /* (SMB_COMPL) If this bit is 1, the WriteCount[7:0] counter in the Slave state machine either counted down to 0 before the Master sent a NACK signal, or the Slave received a NACK signal before the counter reached 0. Position */
#define SMB_COMPL_SPROT_Msk                   (_UINT32_(0x1) << SMB_COMPL_SPROT_Pos)               /* (SMB_COMPL) If this bit is 1, the WriteCount[7:0] counter in the Slave state machine either counted down to 0 before the Master sent a NACK signal, or the Slave received a NACK signal before the counter reached 0. Mask */
#define SMB_COMPL_SPROT(value)                (SMB_COMPL_SPROT_Msk & (_UINT32_(value) << SMB_COMPL_SPROT_Pos)) /* Assigment of value for SPROT in the SMB_COMPL register */
#define SMB_COMPL_REP_RD_Pos                  _UINT32_(20)                                         /* (SMB_COMPL) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 1, indicating that the Master requested a Read operation. Position */
#define SMB_COMPL_REP_RD_Msk                  (_UINT32_(0x1) << SMB_COMPL_REP_RD_Pos)              /* (SMB_COMPL) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 1, indicating that the Master requested a Read operation. Mask */
#define SMB_COMPL_REP_RD(value)               (SMB_COMPL_REP_RD_Msk & (_UINT32_(value) << SMB_COMPL_REP_RD_Pos)) /* Assigment of value for REP_RD in the SMB_COMPL register */
#define SMB_COMPL_REP_WR_Pos                  _UINT32_(21)                                         /* (SMB_COMPL) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 0, indicating that the Master requested a Write operation. Position */
#define SMB_COMPL_REP_WR_Msk                  (_UINT32_(0x1) << SMB_COMPL_REP_WR_Pos)              /* (SMB_COMPL) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 0, indicating that the Master requested a Write operation. Mask */
#define SMB_COMPL_REP_WR(value)               (SMB_COMPL_REP_WR_Msk & (_UINT32_(value) << SMB_COMPL_REP_WR_Pos)) /* Assigment of value for REP_WR in the SMB_COMPL register */
#define SMB_COMPL_MNAKX_Pos                   _UINT32_(24)                                         /* (SMB_COMPL) If this bit is 1, the Master state machine received a NACK from the receiving Slave while the Master was transmitting data over the SMBus interface. (R/WC) Position */
#define SMB_COMPL_MNAKX_Msk                   (_UINT32_(0x1) << SMB_COMPL_MNAKX_Pos)               /* (SMB_COMPL) If this bit is 1, the Master state machine received a NACK from the receiving Slave while the Master was transmitting data over the SMBus interface. (R/WC) Mask */
#define SMB_COMPL_MNAKX(value)                (SMB_COMPL_MNAKX_Msk & (_UINT32_(value) << SMB_COMPL_MNAKX_Pos)) /* Assigment of value for MNAKX in the SMB_COMPL register */
#define SMB_COMPL_MTR_Pos                     _UINT32_(25)                                         /* (SMB_COMPL) 0: Master has just finished the receive phase of a transaction.                 1: Master has just finished the transmit phase of a transaction. Position */
#define SMB_COMPL_MTR_Msk                     (_UINT32_(0x1) << SMB_COMPL_MTR_Pos)                 /* (SMB_COMPL) 0: Master has just finished the receive phase of a transaction.                 1: Master has just finished the transmit phase of a transaction. Mask */
#define SMB_COMPL_MTR(value)                  (SMB_COMPL_MTR_Msk & (_UINT32_(value) << SMB_COMPL_MTR_Pos)) /* Assigment of value for MTR in the SMB_COMPL register */
#define SMB_COMPL_IDLE_Pos                    _UINT32_(29)                                         /* (SMB_COMPL) This bit is set when the I2C bus becomes idle (on the rising edge of nBB). (R/WC) Position */
#define SMB_COMPL_IDLE_Msk                    (_UINT32_(0x1) << SMB_COMPL_IDLE_Pos)                /* (SMB_COMPL) This bit is set when the I2C bus becomes idle (on the rising edge of nBB). (R/WC) Mask */
#define SMB_COMPL_IDLE(value)                 (SMB_COMPL_IDLE_Msk & (_UINT32_(value) << SMB_COMPL_IDLE_Pos)) /* Assigment of value for IDLE in the SMB_COMPL register */
#define SMB_COMPL_MDONE_Pos                   _UINT32_(30)                                         /* (SMB_COMPL) If this bit is 1, Master State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect. (R/WC) Position */
#define SMB_COMPL_MDONE_Msk                   (_UINT32_(0x1) << SMB_COMPL_MDONE_Pos)               /* (SMB_COMPL) If this bit is 1, Master State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect. (R/WC) Mask */
#define SMB_COMPL_MDONE(value)                (SMB_COMPL_MDONE_Msk & (_UINT32_(value) << SMB_COMPL_MDONE_Pos)) /* Assigment of value for MDONE in the SMB_COMPL register */
#define SMB_COMPL_SDONE_Pos                   _UINT32_(31)                                         /* (SMB_COMPL) If this bit is 1, Slave State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect.(R/WC) Position */
#define SMB_COMPL_SDONE_Msk                   (_UINT32_(0x1) << SMB_COMPL_SDONE_Pos)               /* (SMB_COMPL) If this bit is 1, Slave State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect.(R/WC) Mask */
#define SMB_COMPL_SDONE(value)                (SMB_COMPL_SDONE_Msk & (_UINT32_(value) << SMB_COMPL_SDONE_Pos)) /* Assigment of value for SDONE in the SMB_COMPL register */
#define SMB_COMPL_Msk                         _UINT32_(0xE33B7F7C)                                 /* (SMB_COMPL) Register Mask  */


/* -------- SMB_IDLSC : (SMB Offset: 0x24) (R/W 32) Idle Scaling Register -------- */
#define SMB_IDLSC_RESETVALUE                  _UINT32_(0x1FC01ED)                                  /*  (SMB_IDLSC) Idle Scaling Register  Reset Value */

#define SMB_IDLSC_FAIR_BUS_IDL_MIN_Pos        _UINT32_(0)                                          /* (SMB_IDLSC) This field defines the number of ticks of the baud clock required to satisfy the fairness protocol. The default value for this field sets the idle window to 31us, which is the appropriate value for a 100 KHz bus Position */
#define SMB_IDLSC_FAIR_BUS_IDL_MIN_Msk        (_UINT32_(0xFFF) << SMB_IDLSC_FAIR_BUS_IDL_MIN_Pos)  /* (SMB_IDLSC) This field defines the number of ticks of the baud clock required to satisfy the fairness protocol. The default value for this field sets the idle window to 31us, which is the appropriate value for a 100 KHz bus Mask */
#define SMB_IDLSC_FAIR_BUS_IDL_MIN(value)     (SMB_IDLSC_FAIR_BUS_IDL_MIN_Msk & (_UINT32_(value) << SMB_IDLSC_FAIR_BUS_IDL_MIN_Pos)) /* Assigment of value for FAIR_BUS_IDL_MIN in the SMB_IDLSC register */
#define SMB_IDLSC_FAIR_IDL_DLY_Pos            _UINT32_(16)                                         /* (SMB_IDLSC) This field defines the number of ticks of the baud clock required to program the delay. The default value for this field sets the delay period to 32us, which is the appropriate value for a 100 KHz bus Position */
#define SMB_IDLSC_FAIR_IDL_DLY_Msk            (_UINT32_(0xFFF) << SMB_IDLSC_FAIR_IDL_DLY_Pos)      /* (SMB_IDLSC) This field defines the number of ticks of the baud clock required to program the delay. The default value for this field sets the delay period to 32us, which is the appropriate value for a 100 KHz bus Mask */
#define SMB_IDLSC_FAIR_IDL_DLY(value)         (SMB_IDLSC_FAIR_IDL_DLY_Msk & (_UINT32_(value) << SMB_IDLSC_FAIR_IDL_DLY_Pos)) /* Assigment of value for FAIR_IDL_DLY in the SMB_IDLSC register */
#define SMB_IDLSC_Msk                         _UINT32_(0x0FFF0FFF)                                 /* (SMB_IDLSC) Register Mask  */


/* -------- SMB_CFG : (SMB Offset: 0x28) (R/W 32) Configuration Register -------- */
#define SMB_CFG_RESETVALUE                    _UINT32_(0x00)                                       /*  (SMB_CFG) Configuration Register  Reset Value */

#define SMB_CFG_PORT_SEL_Pos                  _UINT32_(0)                                          /* (SMB_CFG) The PORT SEL [3:0] bits determine which one of 16 possible bus ports apply to the active 2-wire SDAT and SCLK bus pair. Position */
#define SMB_CFG_PORT_SEL_Msk                  (_UINT32_(0xF) << SMB_CFG_PORT_SEL_Pos)              /* (SMB_CFG) The PORT SEL [3:0] bits determine which one of 16 possible bus ports apply to the active 2-wire SDAT and SCLK bus pair. Mask */
#define SMB_CFG_PORT_SEL(value)               (SMB_CFG_PORT_SEL_Msk & (_UINT32_(value) << SMB_CFG_PORT_SEL_Pos)) /* Assigment of value for PORT_SEL in the SMB_CFG register */
#define SMB_CFG_TCEN_Pos                      _UINT32_(4)                                          /* (SMB_CFG) When the Timing Check Enable bit (TCEN) is asserted ('1'), Bus Time-Outs are enabled Position */
#define SMB_CFG_TCEN_Msk                      (_UINT32_(0x1) << SMB_CFG_TCEN_Pos)                  /* (SMB_CFG) When the Timing Check Enable bit (TCEN) is asserted ('1'), Bus Time-Outs are enabled Mask */
#define SMB_CFG_TCEN(value)                   (SMB_CFG_TCEN_Msk & (_UINT32_(value) << SMB_CFG_TCEN_Pos)) /* Assigment of value for TCEN in the SMB_CFG register */
#define SMB_CFG_SLOW_CLK_Pos                  _UINT32_(5)                                          /* (SMB_CFG) When this bit is 1, the base period for the Bus Clock Register is multiplied by 4, and thus the frequency is divided by 4. Position */
#define SMB_CFG_SLOW_CLK_Msk                  (_UINT32_(0x1) << SMB_CFG_SLOW_CLK_Pos)              /* (SMB_CFG) When this bit is 1, the base period for the Bus Clock Register is multiplied by 4, and thus the frequency is divided by 4. Mask */
#define SMB_CFG_SLOW_CLK(value)               (SMB_CFG_SLOW_CLK_Msk & (_UINT32_(value) << SMB_CFG_SLOW_CLK_Pos)) /* Assigment of value for SLOW_CLK in the SMB_CFG register */
#define SMB_CFG_TEST_Pos                      _UINT32_(6)                                          /* (SMB_CFG) Must be always written with 0. Position */
#define SMB_CFG_TEST_Msk                      (_UINT32_(0x1) << SMB_CFG_TEST_Pos)                  /* (SMB_CFG) Must be always written with 0. Mask */
#define SMB_CFG_TEST(value)                   (SMB_CFG_TEST_Msk & (_UINT32_(value) << SMB_CFG_TEST_Pos)) /* Assigment of value for TEST in the SMB_CFG register */
#define SMB_CFG_PECEN_Pos                     _UINT32_(7)                                          /* (SMB_CFG) When the PEC Enable bit (PECEN) is asserted ('1'), Hardware PEC Support is enabled Position */
#define SMB_CFG_PECEN_Msk                     (_UINT32_(0x1) << SMB_CFG_PECEN_Pos)                 /* (SMB_CFG) When the PEC Enable bit (PECEN) is asserted ('1'), Hardware PEC Support is enabled Mask */
#define SMB_CFG_PECEN(value)                  (SMB_CFG_PECEN_Msk & (_UINT32_(value) << SMB_CFG_PECEN_Pos)) /* Assigment of value for PECEN in the SMB_CFG register */
#define SMB_CFG_FEN_Pos                       _UINT32_(8)                                          /* (SMB_CFG) Input filtering enable. Input filtering is required by the I2C specification if external filtering is not available.      1=Input filtering is enabled; 0=Input filtering is disabled. Position */
#define SMB_CFG_FEN_Msk                       (_UINT32_(0x1) << SMB_CFG_FEN_Pos)                   /* (SMB_CFG) Input filtering enable. Input filtering is required by the I2C specification if external filtering is not available.      1=Input filtering is enabled; 0=Input filtering is disabled. Mask */
#define SMB_CFG_FEN(value)                    (SMB_CFG_FEN_Msk & (_UINT32_(value) << SMB_CFG_FEN_Pos)) /* Assigment of value for FEN in the SMB_CFG register */
#define SMB_CFG_RST_Pos                       _UINT32_(9)                                          /* (SMB_CFG) When RESET is asserted ('1'), all logic and registers except for the RESET bit itself are initialized to the power-on default state. Position */
#define SMB_CFG_RST_Msk                       (_UINT32_(0x1) << SMB_CFG_RST_Pos)                   /* (SMB_CFG) When RESET is asserted ('1'), all logic and registers except for the RESET bit itself are initialized to the power-on default state. Mask */
#define SMB_CFG_RST(value)                    (SMB_CFG_RST_Msk & (_UINT32_(value) << SMB_CFG_RST_Pos)) /* Assigment of value for RST in the SMB_CFG register */
#define SMB_CFG_EN_Pos                        _UINT32_(10)                                         /* (SMB_CFG) When ENAB (Enable) is not asserted ('0') (default), the SMB Controller Core is disabled and in the lowest power consumption state (Disabled State).                The ENAB bit must be asserted ('1') for normal operation. Position */
#define SMB_CFG_EN_Msk                        (_UINT32_(0x1) << SMB_CFG_EN_Pos)                    /* (SMB_CFG) When ENAB (Enable) is not asserted ('0') (default), the SMB Controller Core is disabled and in the lowest power consumption state (Disabled State).                The ENAB bit must be asserted ('1') for normal operation. Mask */
#define SMB_CFG_EN(value)                     (SMB_CFG_EN_Msk & (_UINT32_(value) << SMB_CFG_EN_Pos)) /* Assigment of value for EN in the SMB_CFG register */
#define SMB_CFG_DSA_Pos                       _UINT32_(11)                                         /* (SMB_CFG) 0: Slave Address I2C Compatibility Mode (default). 1: SMBus Address Decode Mode Position */
#define SMB_CFG_DSA_Msk                       (_UINT32_(0x1) << SMB_CFG_DSA_Pos)                   /* (SMB_CFG) 0: Slave Address I2C Compatibility Mode (default). 1: SMBus Address Decode Mode Mask */
#define SMB_CFG_DSA(value)                    (SMB_CFG_DSA_Msk & (_UINT32_(value) << SMB_CFG_DSA_Pos)) /* Assigment of value for DSA in the SMB_CFG register */
#define SMB_CFG_FAIR_Pos                      _UINT32_(12)                                         /* (SMB_CFG) If this bit is 1, the MCTP Fairness protocol is in effect. Position */
#define SMB_CFG_FAIR_Msk                      (_UINT32_(0x1) << SMB_CFG_FAIR_Pos)                  /* (SMB_CFG) If this bit is 1, the MCTP Fairness protocol is in effect. Mask */
#define SMB_CFG_FAIR(value)                   (SMB_CFG_FAIR_Msk & (_UINT32_(value) << SMB_CFG_FAIR_Pos)) /* Assigment of value for FAIR in the SMB_CFG register */
#define SMB_CFG_TEST0_Pos                     _UINT32_(13)                                         /* (SMB_CFG) Must be always written with 0. Position */
#define SMB_CFG_TEST0_Msk                     (_UINT32_(0x1) << SMB_CFG_TEST0_Pos)                 /* (SMB_CFG) Must be always written with 0. Mask */
#define SMB_CFG_TEST0(value)                  (SMB_CFG_TEST0_Msk & (_UINT32_(value) << SMB_CFG_TEST0_Pos)) /* Assigment of value for TEST0 in the SMB_CFG register */
#define SMB_CFG_GC_DIS_Pos                    _UINT32_(14)                                         /* (SMB_CFG) This is the General Call Disable bit.                0: the response to the General Call address as a slave is enabled                1: the response to the General Call address as a slave is disabled. Position */
#define SMB_CFG_GC_DIS_Msk                    (_UINT32_(0x1) << SMB_CFG_GC_DIS_Pos)                /* (SMB_CFG) This is the General Call Disable bit.                0: the response to the General Call address as a slave is enabled                1: the response to the General Call address as a slave is disabled. Mask */
#define SMB_CFG_GC_DIS(value)                 (SMB_CFG_GC_DIS_Msk & (_UINT32_(value) << SMB_CFG_GC_DIS_Pos)) /* Assigment of value for GC_DIS in the SMB_CFG register */
#define SMB_CFG_CFG_PROMIS_Pos                _UINT32_(15)                                         /* (SMB_CFG) This bit define the Mode of SM Bus Controler Mode of operation.         0= Normal Operation.         1=  Promiscuous Mode Enable. Position */
#define SMB_CFG_CFG_PROMIS_Msk                (_UINT32_(0x1) << SMB_CFG_CFG_PROMIS_Pos)            /* (SMB_CFG) This bit define the Mode of SM Bus Controler Mode of operation.         0= Normal Operation.         1=  Promiscuous Mode Enable. Mask */
#define SMB_CFG_CFG_PROMIS(value)             (SMB_CFG_CFG_PROMIS_Msk & (_UINT32_(value) << SMB_CFG_CFG_PROMIS_Pos)) /* Assigment of value for CFG_PROMIS in the SMB_CFG register */
#define SMB_CFG_FLUSH_SXBUF_Pos               _UINT32_(16)                                         /* (SMB_CFG) A write of a 1 to this bit forces the SMBus Slave Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Position */
#define SMB_CFG_FLUSH_SXBUF_Msk               (_UINT32_(0x1) << SMB_CFG_FLUSH_SXBUF_Pos)           /* (SMB_CFG) A write of a 1 to this bit forces the SMBus Slave Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Mask */
#define SMB_CFG_FLUSH_SXBUF(value)            (SMB_CFG_FLUSH_SXBUF_Msk & (_UINT32_(value) << SMB_CFG_FLUSH_SXBUF_Pos)) /* Assigment of value for FLUSH_SXBUF in the SMB_CFG register */
#define SMB_CFG_FLUSH_SRBUF_Pos               _UINT32_(17)                                         /* (SMB_CFG) A write of a 1 to this bit forces the SMBus Slave Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Position */
#define SMB_CFG_FLUSH_SRBUF_Msk               (_UINT32_(0x1) << SMB_CFG_FLUSH_SRBUF_Pos)           /* (SMB_CFG) A write of a 1 to this bit forces the SMBus Slave Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Mask */
#define SMB_CFG_FLUSH_SRBUF(value)            (SMB_CFG_FLUSH_SRBUF_Msk & (_UINT32_(value) << SMB_CFG_FLUSH_SRBUF_Pos)) /* Assigment of value for FLUSH_SRBUF in the SMB_CFG register */
#define SMB_CFG_FLUSH_MXBUF_Pos               _UINT32_(18)                                         /* (SMB_CFG) A write of a 1 to this bit forces the SMBus Master Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Position */
#define SMB_CFG_FLUSH_MXBUF_Msk               (_UINT32_(0x1) << SMB_CFG_FLUSH_MXBUF_Pos)           /* (SMB_CFG) A write of a 1 to this bit forces the SMBus Master Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Mask */
#define SMB_CFG_FLUSH_MXBUF(value)            (SMB_CFG_FLUSH_MXBUF_Msk & (_UINT32_(value) << SMB_CFG_FLUSH_MXBUF_Pos)) /* Assigment of value for FLUSH_MXBUF in the SMB_CFG register */
#define SMB_CFG_FLUSH_MRBUF_Pos               _UINT32_(19)                                         /* (SMB_CFG) A write of a 1 to this bit forces the SMBus Master Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Position */
#define SMB_CFG_FLUSH_MRBUF_Msk               (_UINT32_(0x1) << SMB_CFG_FLUSH_MRBUF_Pos)           /* (SMB_CFG) A write of a 1 to this bit forces the SMBus Master Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Mask */
#define SMB_CFG_FLUSH_MRBUF(value)            (SMB_CFG_FLUSH_MRBUF_Msk & (_UINT32_(value) << SMB_CFG_FLUSH_MRBUF_Pos)) /* Assigment of value for FLUSH_MRBUF in the SMB_CFG register */
#define SMB_CFG_EN_AAS_Pos                    _UINT32_(28)                                         /* (SMB_CFG) 0: Disable the AAS, 1: Enable the AAS Interrupt Position */
#define SMB_CFG_EN_AAS_Msk                    (_UINT32_(0x1) << SMB_CFG_EN_AAS_Pos)                /* (SMB_CFG) 0: Disable the AAS, 1: Enable the AAS Interrupt Mask */
#define SMB_CFG_EN_AAS(value)                 (SMB_CFG_EN_AAS_Msk & (_UINT32_(value) << SMB_CFG_EN_AAS_Pos)) /* Assigment of value for EN_AAS in the SMB_CFG register */
#define SMB_CFG_ENIDI_Pos                     _UINT32_(29)                                         /* (SMB_CFG) If this bit is 1, the Idle interrupt is enabled. If this bit is 0, the Idle interrupt is disabled. Position */
#define SMB_CFG_ENIDI_Msk                     (_UINT32_(0x1) << SMB_CFG_ENIDI_Pos)                 /* (SMB_CFG) If this bit is 1, the Idle interrupt is enabled. If this bit is 0, the Idle interrupt is disabled. Mask */
#define SMB_CFG_ENIDI(value)                  (SMB_CFG_ENIDI_Msk & (_UINT32_(value) << SMB_CFG_ENIDI_Pos)) /* Assigment of value for ENIDI in the SMB_CFG register */
#define SMB_CFG_ENMI_Pos                      _UINT32_(30)                                         /* (SMB_CFG) If this bit is 1, the Master Done interrupt is enabled. If this bit is 0, the Master Done interrupt is disabled. Position */
#define SMB_CFG_ENMI_Msk                      (_UINT32_(0x1) << SMB_CFG_ENMI_Pos)                  /* (SMB_CFG) If this bit is 1, the Master Done interrupt is enabled. If this bit is 0, the Master Done interrupt is disabled. Mask */
#define SMB_CFG_ENMI(value)                   (SMB_CFG_ENMI_Msk & (_UINT32_(value) << SMB_CFG_ENMI_Pos)) /* Assigment of value for ENMI in the SMB_CFG register */
#define SMB_CFG_ENSI_Pos                      _UINT32_(31)                                         /* (SMB_CFG) If this bit is 1, the Slave Done interrupt is enabled. If this bit is 0, the Slave Done interrupt is disabled Position */
#define SMB_CFG_ENSI_Msk                      (_UINT32_(0x1) << SMB_CFG_ENSI_Pos)                  /* (SMB_CFG) If this bit is 1, the Slave Done interrupt is enabled. If this bit is 0, the Slave Done interrupt is disabled Mask */
#define SMB_CFG_ENSI(value)                   (SMB_CFG_ENSI_Msk & (_UINT32_(value) << SMB_CFG_ENSI_Pos)) /* Assigment of value for ENSI in the SMB_CFG register */
#define SMB_CFG_Msk                           _UINT32_(0xF00FFFFF)                                 /* (SMB_CFG) Register Mask  */


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
#define SMB_BLKID_RESETVALUE                  _UINT8_(0x11)                                        /*  (SMB_BLKID) Block ID Register  Reset Value */

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
#define SMB_TEST_RESETVALUE                   _UINT8_(0x05)                                        /*  (SMB_TEST) Test  Reset Value */

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
#define SMB_DATATM_FIRST_START_HOLD_Pos       _UINT32_(24)                                         /* (SMB_DATATM) This field determines the SCL hold time following SDA driven low during the first START bit in a transfer. It is the parameter      THD:STA in the I2C Specification for an initial START bit. Repeated START hold time is determined by the Repeated START Hold Time Register. Position */
#define SMB_DATATM_FIRST_START_HOLD_Msk       (_UINT32_(0xFF) << SMB_DATATM_FIRST_START_HOLD_Pos)  /* (SMB_DATATM) This field determines the SCL hold time following SDA driven low during the first START bit in a transfer. It is the parameter      THD:STA in the I2C Specification for an initial START bit. Repeated START hold time is determined by the Repeated START Hold Time Register. Mask */
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

#define SMB_SLV_TXB_STXB_Pos                  _UINT32_(0)                                          /* (SMB_SLV_TXB) SLAVE_TRANSMIT_BUFFER Position */
#define SMB_SLV_TXB_STXB_Msk                  (_UINT32_(0xFF) << SMB_SLV_TXB_STXB_Pos)             /* (SMB_SLV_TXB) SLAVE_TRANSMIT_BUFFER Mask */
#define SMB_SLV_TXB_STXB(value)               (SMB_SLV_TXB_STXB_Msk & (_UINT32_(value) << SMB_SLV_TXB_STXB_Pos)) /* Assigment of value for STXB in the SMB_SLV_TXB register */
#define SMB_SLV_TXB_Msk                       _UINT32_(0x000000FF)                                 /* (SMB_SLV_TXB) Register Mask  */


/* -------- SMB_SLV_RXB : (SMB Offset: 0x4C) (R/W 32) SMBus Slave Receive Buffer Register -------- */
#define SMB_SLV_RXB_RESETVALUE                _UINT32_(0x00)                                       /*  (SMB_SLV_RXB) SMBus Slave Receive Buffer Register  Reset Value */

#define SMB_SLV_RXB_SRXB_Pos                  _UINT32_(0)                                          /* (SMB_SLV_RXB) SLAVE_RECEIVE_BUFFER Position */
#define SMB_SLV_RXB_SRXB_Msk                  (_UINT32_(0xFF) << SMB_SLV_RXB_SRXB_Pos)             /* (SMB_SLV_RXB) SLAVE_RECEIVE_BUFFER Mask */
#define SMB_SLV_RXB_SRXB(value)               (SMB_SLV_RXB_SRXB_Msk & (_UINT32_(value) << SMB_SLV_RXB_SRXB_Pos)) /* Assigment of value for SRXB in the SMB_SLV_RXB register */
#define SMB_SLV_RXB_Msk                       _UINT32_(0x000000FF)                                 /* (SMB_SLV_RXB) Register Mask  */


/* -------- SMB_MTR_TXB : (SMB Offset: 0x50) (R/W 32) SMBus Master Transmit Buffer Register -------- */
#define SMB_MTR_TXB_RESETVALUE                _UINT32_(0x00)                                       /*  (SMB_MTR_TXB) SMBus Master Transmit Buffer Register  Reset Value */

#define SMB_MTR_TXB_MTXB_Pos                  _UINT32_(0)                                          /* (SMB_MTR_TXB) MASTER_TRANSMIT_BUFFER Position */
#define SMB_MTR_TXB_MTXB_Msk                  (_UINT32_(0xFF) << SMB_MTR_TXB_MTXB_Pos)             /* (SMB_MTR_TXB) MASTER_TRANSMIT_BUFFER Mask */
#define SMB_MTR_TXB_MTXB(value)               (SMB_MTR_TXB_MTXB_Msk & (_UINT32_(value) << SMB_MTR_TXB_MTXB_Pos)) /* Assigment of value for MTXB in the SMB_MTR_TXB register */
#define SMB_MTR_TXB_Msk                       _UINT32_(0x000000FF)                                 /* (SMB_MTR_TXB) Register Mask  */


/* -------- SMB_MTR_RXB : (SMB Offset: 0x54) (R/W 32) SMBus Master Receive Buffer Register -------- */
#define SMB_MTR_RXB_RESETVALUE                _UINT32_(0x00)                                       /*  (SMB_MTR_RXB) SMBus Master Receive Buffer Register  Reset Value */

#define SMB_MTR_RXB_MRXB_Pos                  _UINT32_(0)                                          /* (SMB_MTR_RXB) MASTER_RECEIVE_BUFFER Position */
#define SMB_MTR_RXB_MRXB_Msk                  (_UINT32_(0xFF) << SMB_MTR_RXB_MRXB_Pos)             /* (SMB_MTR_RXB) MASTER_RECEIVE_BUFFER Mask */
#define SMB_MTR_RXB_MRXB(value)               (SMB_MTR_RXB_MRXB_Msk & (_UINT32_(value) << SMB_MTR_RXB_MRXB_Pos)) /* Assigment of value for MRXB in the SMB_MTR_RXB register */
#define SMB_MTR_RXB_Msk                       _UINT32_(0x000000FF)                                 /* (SMB_MTR_RXB) Register Mask  */


/* -------- SMB_WAKE_STS : (SMB Offset: 0x60) (R/W 32) WAKE STATUS Register -------- */
#define SMB_WAKE_STS_RESETVALUE               _UINT32_(0x00)                                       /*  (SMB_WAKE_STS) WAKE STATUS Register  Reset Value */

#define SMB_WAKE_STS_START_BIT_DET_Pos        _UINT32_(0)                                          /* (SMB_WAKE_STS) This bit is set to '1' when a START bit is detected while the controller is enabled. This bit is cleared to '0' when      written with a '1'. Writes of '0' have no effect. (R/WC) Position */
#define SMB_WAKE_STS_START_BIT_DET_Msk        (_UINT32_(0x1) << SMB_WAKE_STS_START_BIT_DET_Pos)    /* (SMB_WAKE_STS) This bit is set to '1' when a START bit is detected while the controller is enabled. This bit is cleared to '0' when      written with a '1'. Writes of '0' have no effect. (R/WC) Mask */
#define SMB_WAKE_STS_START_BIT_DET(value)     (SMB_WAKE_STS_START_BIT_DET_Msk & (_UINT32_(value) << SMB_WAKE_STS_START_BIT_DET_Pos)) /* Assigment of value for START_BIT_DET in the SMB_WAKE_STS register */
#define SMB_WAKE_STS_Msk                      _UINT32_(0x00000001)                                 /* (SMB_WAKE_STS) Register Mask  */


/* -------- SMB_WAKE_EN : (SMB Offset: 0x64) (R/W 32) WAKE ENABLE Register -------- */
#define SMB_WAKE_EN_RESETVALUE                _UINT32_(0x00)                                       /*  (SMB_WAKE_EN) WAKE ENABLE Register  Reset Value */

#define SMB_WAKE_EN_START_DET_INT_EN_Pos      _UINT32_(0)                                          /* (SMB_WAKE_EN) Enable Start Bit Detection Interrupt. The Start Bit Detection Interrupt is wake-capable.      1=Start Bit Detection Interrupt enabled; 0=Start Bit Detection Interrupt disabled Position */
#define SMB_WAKE_EN_START_DET_INT_EN_Msk      (_UINT32_(0x1) << SMB_WAKE_EN_START_DET_INT_EN_Pos)  /* (SMB_WAKE_EN) Enable Start Bit Detection Interrupt. The Start Bit Detection Interrupt is wake-capable.      1=Start Bit Detection Interrupt enabled; 0=Start Bit Detection Interrupt disabled Mask */
#define SMB_WAKE_EN_START_DET_INT_EN(value)   (SMB_WAKE_EN_START_DET_INT_EN_Msk & (_UINT32_(value) << SMB_WAKE_EN_START_DET_INT_EN_Pos)) /* Assigment of value for START_DET_INT_EN in the SMB_WAKE_EN register */
#define SMB_WAKE_EN_Msk                       _UINT32_(0x00000001)                                 /* (SMB_WAKE_EN) Register Mask  */


/* -------- SMB_SLV_ADDR : (SMB Offset: 0x6C) (R/W 8) This is the Slave Address Register -------- */
#define SMB_SLV_ADDR_RESETVALUE               _UINT8_(0x00)                                        /*  (SMB_SLV_ADDR) This is the Slave Address Register  Reset Value */

#define SMB_SLV_ADDR_SADDR_Pos                _UINT8_(0)                                           /* (SMB_SLV_ADDR) This register stores value of address + LSB direction after the 8th clock of the Address Byte. Position */
#define SMB_SLV_ADDR_SADDR_Msk                (_UINT8_(0xFF) << SMB_SLV_ADDR_SADDR_Pos)            /* (SMB_SLV_ADDR) This register stores value of address + LSB direction after the 8th clock of the Address Byte. Mask */
#define SMB_SLV_ADDR_SADDR(value)             (SMB_SLV_ADDR_SADDR_Msk & (_UINT8_(value) << SMB_SLV_ADDR_SADDR_Pos)) /* Assigment of value for SADDR in the SMB_SLV_ADDR register */
#define SMB_SLV_ADDR_Msk                      _UINT8_(0xFF)                                        /* (SMB_SLV_ADDR) Register Mask  */


/* -------- SMB_PRM_STS : (SMB Offset: 0x70) (R/W 8) This is the Promiscuous Interrupt Register -------- */
#define SMB_PRM_STS_RESETVALUE                _UINT8_(0x00)                                        /*  (SMB_PRM_STS) This is the Promiscuous Interrupt Register  Reset Value */

#define SMB_PRM_STS_ADDR_INTR_Pos             _UINT8_(0)                                           /* (SMB_PRM_STS) This is the Promiscuous Address Status interrupt and is set on the 8th clock of the I2C Address.         This bit will hold the Clock line low till this register bit is cleared. This is Write 1 to clear.         R/W1C. Position */
#define SMB_PRM_STS_ADDR_INTR_Msk             (_UINT8_(0x1) << SMB_PRM_STS_ADDR_INTR_Pos)          /* (SMB_PRM_STS) This is the Promiscuous Address Status interrupt and is set on the 8th clock of the I2C Address.         This bit will hold the Clock line low till this register bit is cleared. This is Write 1 to clear.         R/W1C. Mask */
#define SMB_PRM_STS_ADDR_INTR(value)          (SMB_PRM_STS_ADDR_INTR_Msk & (_UINT8_(value) << SMB_PRM_STS_ADDR_INTR_Pos)) /* Assigment of value for ADDR_INTR in the SMB_PRM_STS register */
#define SMB_PRM_STS_Msk                       _UINT8_(0x01)                                        /* (SMB_PRM_STS) Register Mask  */


/* -------- SMB_PRM_IEN : (SMB Offset: 0x74) (R/W 8) This is the Promiscuous Interrupt Enable Register -------- */
#define SMB_PRM_IEN_RESETVALUE                _UINT8_(0x00)                                        /*  (SMB_PRM_IEN) This is the Promiscuous Interrupt Enable Register  Reset Value */

#define SMB_PRM_IEN_ADDR_Pos                  _UINT8_(0)                                           /* (SMB_PRM_IEN) This is the Promiscuous interrupt enable register.         1= Interrupt Enable.          0= Interrupt Disabled.  Position */
#define SMB_PRM_IEN_ADDR_Msk                  (_UINT8_(0x1) << SMB_PRM_IEN_ADDR_Pos)               /* (SMB_PRM_IEN) This is the Promiscuous interrupt enable register.         1= Interrupt Enable.          0= Interrupt Disabled.  Mask */
#define SMB_PRM_IEN_ADDR(value)               (SMB_PRM_IEN_ADDR_Msk & (_UINT8_(value) << SMB_PRM_IEN_ADDR_Pos)) /* Assigment of value for ADDR in the SMB_PRM_IEN register */
#define SMB_PRM_IEN_Msk                       _UINT8_(0x01)                                        /* (SMB_PRM_IEN) Register Mask  */


/* -------- SMB_PRM_CTRL : (SMB Offset: 0x78) (R/W 8) This is the Promiscuous Control Register -------- */
#define SMB_PRM_CTRL_RESETVALUE               _UINT8_(0x00)                                        /*  (SMB_PRM_CTRL) This is the Promiscuous Control Register  Reset Value */

#define SMB_PRM_CTRL_ACK_NAK_Pos              _UINT8_(0)                                           /* (SMB_PRM_CTRL) This is the Promiscuous ACK / NAK response register.         1= ACK.          0= NAK.  Position */
#define SMB_PRM_CTRL_ACK_NAK_Msk              (_UINT8_(0x1) << SMB_PRM_CTRL_ACK_NAK_Pos)           /* (SMB_PRM_CTRL) This is the Promiscuous ACK / NAK response register.         1= ACK.          0= NAK.  Mask */
#define SMB_PRM_CTRL_ACK_NAK(value)           (SMB_PRM_CTRL_ACK_NAK_Msk & (_UINT8_(value) << SMB_PRM_CTRL_ACK_NAK_Pos)) /* Assigment of value for ACK_NAK in the SMB_PRM_CTRL register */
#define SMB_PRM_CTRL_Msk                      _UINT8_(0x01)                                        /* (SMB_PRM_CTRL) Register Mask  */


/* -------- SMB_SHDW_DATA : (SMB Offset: 0x7C) (R/W 8) This is the I2C Shadow Data Register -------- */
#define SMB_SHDW_DATA_RESETVALUE              _UINT8_(0x00)                                        /*  (SMB_SHDW_DATA) This is the I2C Shadow Data Register  Reset Value */

#define SMB_SHDW_DATA_SHDW_DATA_Pos           _UINT8_(0)                                           /* (SMB_SHDW_DATA) This is the I2C Shadow Data Register Position */
#define SMB_SHDW_DATA_SHDW_DATA_Msk           (_UINT8_(0xFF) << SMB_SHDW_DATA_SHDW_DATA_Pos)       /* (SMB_SHDW_DATA) This is the I2C Shadow Data Register Mask */
#define SMB_SHDW_DATA_SHDW_DATA(value)        (SMB_SHDW_DATA_SHDW_DATA_Msk & (_UINT8_(value) << SMB_SHDW_DATA_SHDW_DATA_Pos)) /* Assigment of value for SHDW_DATA in the SMB_SHDW_DATA register */
#define SMB_SHDW_DATA_Msk                     _UINT8_(0xFF)                                        /* (SMB_SHDW_DATA) Register Mask  */


/** \brief SMB register offsets definitions */
#define SMB_WCTRL_REG_OFST             _UINT32_(0x00)      /* (SMB_WCTRL) Control Register Offset */
#define SMB_RSTS_REG_OFST              _UINT32_(0x00)      /* (SMB_RSTS) Status Register Offset */
#define SMB_OWN_ADDR_REG_OFST          _UINT32_(0x04)      /* (SMB_OWN_ADDR) Own Address Register           Note that the Data Register and Own Address fields are offset by one bit, so that programming Own Address 1 with a value of 55h will result in the value AAh being recognized as the SMB Controller Core slave address. Offset */
#define SMB_I2CDATA_REG_OFST           _UINT32_(0x08)      /* (SMB_I2CDATA) This register holds the data that are either shifted out to or shifted in from the I2C port. Offset */
#define SMB_RSVD1_REG_OFST             _UINT32_(0x09)      /* (SMB_RSVD1) Reserved Offset */
#define SMB_RSVD1_0_REG_OFST           _UINT32_(0x09)      /* (SMB_RSVD1_0) Reserved Offset */
#define SMB_RSVD1_1_REG_OFST           _UINT32_(0x0A)      /* (SMB_RSVD1_1) Reserved Offset */
#define SMB_RSVD1_2_REG_OFST           _UINT32_(0x0B)      /* (SMB_RSVD1_2) Reserved Offset */
#define SMB_MCMD_REG_OFST              _UINT32_(0x0C)      /* (SMB_MCMD) SMBus Master Command Register Offset */
#define SMB_MCMD0_REG_OFST             _UINT32_(0x0C)      /* (SMB_MCMD0) SMBus Master Command Register Offset */
#define SMB_SCMD_REG_OFST              _UINT32_(0x10)      /* (SMB_SCMD) SMBus Slave Command Register Offset */
#define SMB_SCMD0_REG_OFST             _UINT32_(0x10)      /* (SMB_SCMD0) SMBus Slave Command Register Offset */
#define SMB_PEC_REG_OFST               _UINT32_(0x14)      /* (SMB_PEC) Packet Error Check (PEC) Register Offset */
#define SMB_RSHTM_REG_OFST             _UINT32_(0x18)      /* (SMB_RSHTM) Repeated Start Hold Time Register Offset */
#define SMB_EXTND_LEN_REG_OFST         _UINT32_(0x1C)      /* (SMB_EXTND_LEN) Extended Length Register Offset */
#define SMB_COMPL_REG_OFST             _UINT32_(0x20)      /* (SMB_COMPL) Completion Register Offset */
#define SMB_COMPL0_REG_OFST            _UINT32_(0x20)      /* (SMB_COMPL0) Completion Register Offset */
#define SMB_IDLSC_REG_OFST             _UINT32_(0x24)      /* (SMB_IDLSC) Idle Scaling Register Offset */
#define SMB_CFG_REG_OFST               _UINT32_(0x28)      /* (SMB_CFG) Configuration Register Offset */
#define SMB_CFG0_REG_OFST              _UINT32_(0x28)      /* (SMB_CFG0) Configuration Register Offset */
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
#define SMB_SLV_ADDR_REG_OFST          _UINT32_(0x6C)      /* (SMB_SLV_ADDR) This is the Slave Address Register Offset */
#define SMB_PRM_STS_REG_OFST           _UINT32_(0x70)      /* (SMB_PRM_STS) This is the Promiscuous Interrupt Register Offset */
#define SMB_PRM_IEN_REG_OFST           _UINT32_(0x74)      /* (SMB_PRM_IEN) This is the Promiscuous Interrupt Enable Register Offset */
#define SMB_PRM_CTRL_REG_OFST          _UINT32_(0x78)      /* (SMB_PRM_CTRL) This is the Promiscuous Control Register Offset */
#define SMB_SHDW_DATA_REG_OFST         _UINT32_(0x7C)      /* (SMB_SHDW_DATA) This is the I2C Shadow Data Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SMB register API structure */
typedef struct
{  /* The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
  union
  {
      __I   uint32_t                       SMB_RSTS;           /**< Offset: 0x00 (R/   32) Status Register */
      __O   uint32_t                       SMB_WCTRL;          /**< Offset: 0x00 ( /W  32) Control Register */
  };
  __IO  uint32_t                       SMB_OWN_ADDR;       /**< Offset: 0x04 (R/W  32) Own Address Register           Note that the Data Register and Own Address fields are offset by one bit, so that programming Own Address 1 with a value of 55h will result in the value AAh being recognized as the SMB Controller Core slave address. */
  __IO  uint8_t                        SMB_I2CDATA;        /**< Offset: 0x08 (R/W  8) This register holds the data that are either shifted out to or shifted in from the I2C port. */
  __I   uint8_t                        SMB_RSVD1[3];       /**< Offset: 0x09 (R/   8) Reserved */
  __IO  uint32_t                       SMB_MCMD[1];        /**< Offset: 0x0C (R/W  32) SMBus Master Command Register */
  __IO  uint32_t                       SMB_SCMD[1];        /**< Offset: 0x10 (R/W  32) SMBus Slave Command Register */
  __IO  uint32_t                       SMB_PEC;            /**< Offset: 0x14 (R/W  32) Packet Error Check (PEC) Register */
  __IO  uint32_t                       SMB_RSHTM;          /**< Offset: 0x18 (R/W  32) Repeated Start Hold Time Register */
  __I   uint32_t                       SMB_EXTND_LEN;      /**< Offset: 0x1C (R/   32) Extended Length Register */
  __IO  uint32_t                       SMB_COMPL[1];       /**< Offset: 0x20 (R/W  32) Completion Register */
  __IO  uint32_t                       SMB_IDLSC;          /**< Offset: 0x24 (R/W  32) Idle Scaling Register */
  __IO  uint32_t                       SMB_CFG[1];         /**< Offset: 0x28 (R/W  32) Configuration Register */
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
  __I   uint8_t                        Reserved5[0x04];
  __IO  uint8_t                        SMB_SLV_ADDR;       /**< Offset: 0x6C (R/W  8) This is the Slave Address Register */
  __I   uint8_t                        Reserved6[0x03];
  __IO  uint8_t                        SMB_PRM_STS;        /**< Offset: 0x70 (R/W  8) This is the Promiscuous Interrupt Register */
  __I   uint8_t                        Reserved7[0x03];
  __IO  uint8_t                        SMB_PRM_IEN;        /**< Offset: 0x74 (R/W  8) This is the Promiscuous Interrupt Enable Register */
  __I   uint8_t                        Reserved8[0x03];
  __IO  uint8_t                        SMB_PRM_CTRL;       /**< Offset: 0x78 (R/W  8) This is the Promiscuous Control Register */
  __I   uint8_t                        Reserved9[0x03];
  __IO  uint8_t                        SMB_SHDW_DATA;      /**< Offset: 0x7C (R/W  8) This is the I2C Shadow Data Register */
} smb_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_SMB_COMPONENT_H_ */
