/*
 * Component description for I2C
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

/* file generated from device description version 2020-03-24T11:15:30Z */
#ifndef _CEC1712H_S2_SX_I2C_COMPONENT_H_
#define _CEC1712H_S2_SX_I2C_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR I2C                                          */
/* ************************************************************************** */

/* -------- I2C_WCTRL : (I2C Offset: 0x00) ( /W 32) Control Register -------- */
#define I2C_WCTRL_RESETVALUE                  _UINT32_(0x00)                                       /*  (I2C_WCTRL) Control Register  Reset Value */

#define I2C_WCTRL_ACK_Pos                     _UINT32_(0)                                          /* (I2C_WCTRL) The Acknowledge bit (ACK) must normally be asserted ('1'). This causes the controller to send an acknowledge automatically after each byte (this occurs during the 9th clock pulse). The ACK bit must not be asserted ('0') when the controller is operating in master/receiver mode and requires no further data to be sent from the slave transmitter. This causes a negative acknowledge on the I2C bus, which halts further transmission from the slave device. Position */
#define I2C_WCTRL_ACK_Msk                     (_UINT32_(0x1) << I2C_WCTRL_ACK_Pos)                 /* (I2C_WCTRL) The Acknowledge bit (ACK) must normally be asserted ('1'). This causes the controller to send an acknowledge automatically after each byte (this occurs during the 9th clock pulse). The ACK bit must not be asserted ('0') when the controller is operating in master/receiver mode and requires no further data to be sent from the slave transmitter. This causes a negative acknowledge on the I2C bus, which halts further transmission from the slave device. Mask */
#define I2C_WCTRL_ACK(value)                  (I2C_WCTRL_ACK_Msk & (_UINT32_(value) << I2C_WCTRL_ACK_Pos)) /* Assigment of value for ACK in the I2C_WCTRL register */
#define I2C_WCTRL_STO_Pos                     _UINT32_(1)                                          /* (I2C_WCTRL) See STA description Position */
#define I2C_WCTRL_STO_Msk                     (_UINT32_(0x1) << I2C_WCTRL_STO_Pos)                 /* (I2C_WCTRL) See STA description Mask */
#define I2C_WCTRL_STO(value)                  (I2C_WCTRL_STO_Msk & (_UINT32_(value) << I2C_WCTRL_STO_Pos)) /* Assigment of value for STO in the I2C_WCTRL register */
#define I2C_WCTRL_STA_Pos                     _UINT32_(2)                                          /* (I2C_WCTRL) The STA and STO bits control the generation of the I2C Start condition and the transmission of the Slave Address and R/nW bit (from the Data Register), generation of repeated Start condition, and generation of the Stop condition Position */
#define I2C_WCTRL_STA_Msk                     (_UINT32_(0x1) << I2C_WCTRL_STA_Pos)                 /* (I2C_WCTRL) The STA and STO bits control the generation of the I2C Start condition and the transmission of the Slave Address and R/nW bit (from the Data Register), generation of repeated Start condition, and generation of the Stop condition Mask */
#define I2C_WCTRL_STA(value)                  (I2C_WCTRL_STA_Msk & (_UINT32_(value) << I2C_WCTRL_STA_Pos)) /* Assigment of value for STA in the I2C_WCTRL register */
#define I2C_WCTRL_ENI_Pos                     _UINT32_(3)                                          /* (I2C_WCTRL) Enable Interrupt bit (ENI) controls the Interrupt Interface Position */
#define I2C_WCTRL_ENI_Msk                     (_UINT32_(0x1) << I2C_WCTRL_ENI_Pos)                 /* (I2C_WCTRL) Enable Interrupt bit (ENI) controls the Interrupt Interface Mask */
#define I2C_WCTRL_ENI(value)                  (I2C_WCTRL_ENI_Msk & (_UINT32_(value) << I2C_WCTRL_ENI_Pos)) /* Assigment of value for ENI in the I2C_WCTRL register */
#define I2C_WCTRL_ESO_Pos                     _UINT32_(6)                                          /* (I2C_WCTRL) The Enable Serial Output bit (ESO) enables and disables the SMB Controller Core serial data output (SDAT) Position */
#define I2C_WCTRL_ESO_Msk                     (_UINT32_(0x1) << I2C_WCTRL_ESO_Pos)                 /* (I2C_WCTRL) The Enable Serial Output bit (ESO) enables and disables the SMB Controller Core serial data output (SDAT) Mask */
#define I2C_WCTRL_ESO(value)                  (I2C_WCTRL_ESO_Msk & (_UINT32_(value) << I2C_WCTRL_ESO_Pos)) /* Assigment of value for ESO in the I2C_WCTRL register */
#define I2C_WCTRL_PIN_Pos                     _UINT32_(7)                                          /* (I2C_WCTRL) The Pending Interrupt Not (PIN) bit serves as a software reset function. Writing the PIN bit to a logic '1' de-asserts all status bits except for the nBB bit which is not affected by the PIN bit. The PIN bit is a self-clearing bit. Writing this bit to a logic '0' has no effect. Position */
#define I2C_WCTRL_PIN_Msk                     (_UINT32_(0x1) << I2C_WCTRL_PIN_Pos)                 /* (I2C_WCTRL) The Pending Interrupt Not (PIN) bit serves as a software reset function. Writing the PIN bit to a logic '1' de-asserts all status bits except for the nBB bit which is not affected by the PIN bit. The PIN bit is a self-clearing bit. Writing this bit to a logic '0' has no effect. Mask */
#define I2C_WCTRL_PIN(value)                  (I2C_WCTRL_PIN_Msk & (_UINT32_(value) << I2C_WCTRL_PIN_Pos)) /* Assigment of value for PIN in the I2C_WCTRL register */
#define I2C_WCTRL_Msk                         _UINT32_(0x000000CF)                                 /* (I2C_WCTRL) Register Mask  */


/* -------- I2C_RSTS : (I2C Offset: 0x00) ( R/ 32) Status Register -------- */
#define I2C_RSTS_RESETVALUE                   _UINT32_(0x00)                                       /*  (I2C_RSTS) Status Register  Reset Value */

#define I2C_RSTS_NBB_Pos                      _UINT32_(0)                                          /* (I2C_RSTS) The Bus Busy bit (NBB) is a read-only flag indicating when the bus is in use. A zero indicates that the bus is busy and access is not possible. Position */
#define I2C_RSTS_NBB_Msk                      (_UINT32_(0x1) << I2C_RSTS_NBB_Pos)                  /* (I2C_RSTS) The Bus Busy bit (NBB) is a read-only flag indicating when the bus is in use. A zero indicates that the bus is busy and access is not possible. Mask */
#define I2C_RSTS_NBB(value)                   (I2C_RSTS_NBB_Msk & (_UINT32_(value) << I2C_RSTS_NBB_Pos)) /* Assigment of value for NBB in the I2C_RSTS register */
#define I2C_RSTS_LAB_Pos                      _UINT32_(1)                                          /* (I2C_RSTS) The Lost Arbitration Bit (LAB) is set when, in multi-master operation, arbitration is lost to another master on the bus Position */
#define I2C_RSTS_LAB_Msk                      (_UINT32_(0x1) << I2C_RSTS_LAB_Pos)                  /* (I2C_RSTS) The Lost Arbitration Bit (LAB) is set when, in multi-master operation, arbitration is lost to another master on the bus Mask */
#define I2C_RSTS_LAB(value)                   (I2C_RSTS_LAB_Msk & (_UINT32_(value) << I2C_RSTS_LAB_Pos)) /* Assigment of value for LAB in the I2C_RSTS register */
#define I2C_RSTS_AAS_Pos                      _UINT32_(2)                                          /* (I2C_RSTS) The Addressed As Slave bit (AAS) is valid only when PIN is asserted ('0'). When acting as slave, AAS is set when an incoming address over the bus matches the value in the Own Address Register or if the 'general call' address (00h) has been received Position */
#define I2C_RSTS_AAS_Msk                      (_UINT32_(0x1) << I2C_RSTS_AAS_Pos)                  /* (I2C_RSTS) The Addressed As Slave bit (AAS) is valid only when PIN is asserted ('0'). When acting as slave, AAS is set when an incoming address over the bus matches the value in the Own Address Register or if the 'general call' address (00h) has been received Mask */
#define I2C_RSTS_AAS(value)                   (I2C_RSTS_AAS_Msk & (_UINT32_(value) << I2C_RSTS_AAS_Pos)) /* Assigment of value for AAS in the I2C_RSTS register */
#define I2C_RSTS_LRB_AD0_Pos                  _UINT32_(3)                                          /* (I2C_RSTS) The (Last Received Bit)  or (Address 0) (general call) bit (LRB/AD0) serves a dual function and is valid only while the PIN bit is asserted ('0').\n                When the AAS bit is not asserted ('0') (i.e., not addressed as a slave), the LRB/AD0 holds the value of the last received bit over the bus.\n                When the AAS bit is asserted ('1') (i.e., addressed as slave), the SMB Controller Core has been addressed as a slave. Position */
#define I2C_RSTS_LRB_AD0_Msk                  (_UINT32_(0x1) << I2C_RSTS_LRB_AD0_Pos)              /* (I2C_RSTS) The (Last Received Bit)  or (Address 0) (general call) bit (LRB/AD0) serves a dual function and is valid only while the PIN bit is asserted ('0').\n                When the AAS bit is not asserted ('0') (i.e., not addressed as a slave), the LRB/AD0 holds the value of the last received bit over the bus.\n                When the AAS bit is asserted ('1') (i.e., addressed as slave), the SMB Controller Core has been addressed as a slave. Mask */
#define I2C_RSTS_LRB_AD0(value)               (I2C_RSTS_LRB_AD0_Msk & (_UINT32_(value) << I2C_RSTS_LRB_AD0_Pos)) /* Assigment of value for LRB_AD0 in the I2C_RSTS register */
#define I2C_RSTS_BER_Pos                      _UINT32_(4)                                          /* (I2C_RSTS) When Bus Error (BER) is asserted, a misplaced START or STOP condition or Bus Time-Outs have been detected. Position */
#define I2C_RSTS_BER_Msk                      (_UINT32_(0x1) << I2C_RSTS_BER_Pos)                  /* (I2C_RSTS) When Bus Error (BER) is asserted, a misplaced START or STOP condition or Bus Time-Outs have been detected. Mask */
#define I2C_RSTS_BER(value)                   (I2C_RSTS_BER_Msk & (_UINT32_(value) << I2C_RSTS_BER_Pos)) /* Assigment of value for BER in the I2C_RSTS register */
#define I2C_RSTS_STS_Pos                      _UINT32_(5)                                          /* (I2C_RSTS) When in slave receiver mode, STS is asserted ('1') when an externally generated STOP condition is detected. Note that STS is used only in slave receiver mode. Position */
#define I2C_RSTS_STS_Msk                      (_UINT32_(0x1) << I2C_RSTS_STS_Pos)                  /* (I2C_RSTS) When in slave receiver mode, STS is asserted ('1') when an externally generated STOP condition is detected. Note that STS is used only in slave receiver mode. Mask */
#define I2C_RSTS_STS(value)                   (I2C_RSTS_STS_Msk & (_UINT32_(value) << I2C_RSTS_STS_Pos)) /* Assigment of value for STS in the I2C_RSTS register */
#define I2C_RSTS_SAD_Pos                      _UINT32_(6)                                          /* (I2C_RSTS) SMBus Address Decoded (SAD) Position */
#define I2C_RSTS_SAD_Msk                      (_UINT32_(0x1) << I2C_RSTS_SAD_Pos)                  /* (I2C_RSTS) SMBus Address Decoded (SAD) Mask */
#define I2C_RSTS_SAD(value)                   (I2C_RSTS_SAD_Msk & (_UINT32_(value) << I2C_RSTS_SAD_Pos)) /* Assigment of value for SAD in the I2C_RSTS register */
#define I2C_RSTS_PIN_Pos                      _UINT32_(7)                                          /* (I2C_RSTS) Pending Interrupt bit Position */
#define I2C_RSTS_PIN_Msk                      (_UINT32_(0x1) << I2C_RSTS_PIN_Pos)                  /* (I2C_RSTS) Pending Interrupt bit Mask */
#define I2C_RSTS_PIN(value)                   (I2C_RSTS_PIN_Msk & (_UINT32_(value) << I2C_RSTS_PIN_Pos)) /* Assigment of value for PIN in the I2C_RSTS register */
#define I2C_RSTS_Msk                          _UINT32_(0x000000FF)                                 /* (I2C_RSTS) Register Mask  */

#define I2C_RSTS_LRB_AD_Pos                   _UINT32_(3)                                          /* (I2C_RSTS Position) The (Last Received Bit)  or (Address x) (general call) bit (LRB/ADx) serves a dual function and is valid only while the PIN bit is asserted ('x').\n                When the AAS bit is not asserted ('x') (i.e., not addressed as a slave), the LRB/ADx holds the value of the last received bit over the bus.\n                When the AAS bit is asserted ('x') (i.e., addressed as slave), the SMB Controller Core has been addressed as a slave. */
#define I2C_RSTS_LRB_AD_Msk                   (_UINT32_(0x1) << I2C_RSTS_LRB_AD_Pos)               /* (I2C_RSTS Mask) LRB_AD */
#define I2C_RSTS_LRB_AD(value)                (I2C_RSTS_LRB_AD_Msk & (_UINT32_(value) << I2C_RSTS_LRB_AD_Pos)) 

/* -------- I2C_OWN_ADDR : (I2C Offset: 0x04) (R/W 32) Own Address Register\n           Note that the Data Register and Own Address fields are offset by one bit, so that programming Own Address 1 with a value of 55h will result in the value AAh being recognized as the SMB Controller Core slave address. -------- */
#define I2C_OWN_ADDR_RESETVALUE               _UINT32_(0x00)                                       /*  (I2C_OWN_ADDR) Own Address Register\n           Note that the Data Register and Own Address fields are offset by one bit, so that programming Own Address 1 with a value of 55h will result in the value AAh being recognized as the SMB Controller Core slave address.  Reset Value */

#define I2C_OWN_ADDR_ADDR1_Pos                _UINT32_(0)                                          /* (I2C_OWN_ADDR) The Own Address 1 bits configure one of the two addresses to which the SMB Controller Core will respond when addressed as a slave. Position */
#define I2C_OWN_ADDR_ADDR1_Msk                (_UINT32_(0x7F) << I2C_OWN_ADDR_ADDR1_Pos)           /* (I2C_OWN_ADDR) The Own Address 1 bits configure one of the two addresses to which the SMB Controller Core will respond when addressed as a slave. Mask */
#define I2C_OWN_ADDR_ADDR1(value)             (I2C_OWN_ADDR_ADDR1_Msk & (_UINT32_(value) << I2C_OWN_ADDR_ADDR1_Pos)) /* Assigment of value for ADDR1 in the I2C_OWN_ADDR register */
#define I2C_OWN_ADDR_ADDR2_Pos                _UINT32_(8)                                          /* (I2C_OWN_ADDR) The Own Address 2 bits configure one of the two addresses to which the SMB Controller Core will respond when addressed as a slave. Position */
#define I2C_OWN_ADDR_ADDR2_Msk                (_UINT32_(0x7F) << I2C_OWN_ADDR_ADDR2_Pos)           /* (I2C_OWN_ADDR) The Own Address 2 bits configure one of the two addresses to which the SMB Controller Core will respond when addressed as a slave. Mask */
#define I2C_OWN_ADDR_ADDR2(value)             (I2C_OWN_ADDR_ADDR2_Msk & (_UINT32_(value) << I2C_OWN_ADDR_ADDR2_Pos)) /* Assigment of value for ADDR2 in the I2C_OWN_ADDR register */
#define I2C_OWN_ADDR_Msk                      _UINT32_(0x00007F7F)                                 /* (I2C_OWN_ADDR) Register Mask  */


/* -------- I2C_I2CDATA : (I2C Offset: 0x08) (R/W 8) This register holds the data that are either shifted out to or shifted in from the I2C port. -------- */
#define I2C_I2CDATA_RESETVALUE                _UINT8_(0x00)                                        /*  (I2C_I2CDATA) This register holds the data that are either shifted out to or shifted in from the I2C port.  Reset Value */

#define I2C_I2CDATA_Msk                       _UINT8_(0x00)                                        /* (I2C_I2CDATA) Register Mask  */


/* -------- I2C_RSHTM : (I2C Offset: 0x18) (R/W 32) Repeated Start Hold Time Register -------- */
#define I2C_RSHTM_RESETVALUE                  _UINT32_(0x4D)                                       /*  (I2C_RSHTM) Repeated Start Hold Time Register  Reset Value */

#define I2C_RSHTM_RSHTM_Pos                   _UINT32_(0)                                          /* (I2C_RSHTM) This is the value of the timing requirement tHd:Sta in the I2C specification for a repeated START bit. This is used to hold\n      the clock until the Hold Time for the repeated Start Bit has been satisfied. Position */
#define I2C_RSHTM_RSHTM_Msk                   (_UINT32_(0xFF) << I2C_RSHTM_RSHTM_Pos)              /* (I2C_RSHTM) This is the value of the timing requirement tHd:Sta in the I2C specification for a repeated START bit. This is used to hold\n      the clock until the Hold Time for the repeated Start Bit has been satisfied. Mask */
#define I2C_RSHTM_RSHTM(value)                (I2C_RSHTM_RSHTM_Msk & (_UINT32_(value) << I2C_RSHTM_RSHTM_Pos)) /* Assigment of value for RSHTM in the I2C_RSHTM register */
#define I2C_RSHTM_Msk                         _UINT32_(0x000000FF)                                 /* (I2C_RSHTM) Register Mask  */


/* -------- I2C_RSVD1 : (I2C Offset: 0x1C) ( R/ 32) Reserved -------- */
#define I2C_RSVD1_RESETVALUE                  _UINT32_(0x00)                                       /*  (I2C_RSVD1) Reserved  Reset Value */

#define I2C_RSVD1_Msk                         _UINT32_(0x00000000)                                 /* (I2C_RSVD1) Register Mask  */


/* -------- I2C_COMPL : (I2C Offset: 0x20) (R/W 32) Completion Register -------- */
#define I2C_COMPL_RESETVALUE                  _UINT32_(0x00)                                       /*  (I2C_COMPL) Completion Register  Reset Value */

#define I2C_COMPL_DTEN_Pos                    _UINT32_(2)                                          /* (I2C_COMPL) When DTEN is asserted ('1'), Device Time-out checking is enabled. When DTEN is not asserted ('0'), Device Time-out checking is disabled. Position */
#define I2C_COMPL_DTEN_Msk                    (_UINT32_(0x1) << I2C_COMPL_DTEN_Pos)                /* (I2C_COMPL) When DTEN is asserted ('1'), Device Time-out checking is enabled. When DTEN is not asserted ('0'), Device Time-out checking is disabled. Mask */
#define I2C_COMPL_DTEN(value)                 (I2C_COMPL_DTEN_Msk & (_UINT32_(value) << I2C_COMPL_DTEN_Pos)) /* Assigment of value for DTEN in the I2C_COMPL register */
#define I2C_COMPL_MCEN_Pos                    _UINT32_(3)                                          /* (I2C_COMPL) When MCEN is asserted ('1'), Master Cumulative Time-Out checking is enabled. When MCEN is not asserted ('0'), Master Cumulative Time-Out checking is disabled. Position */
#define I2C_COMPL_MCEN_Msk                    (_UINT32_(0x1) << I2C_COMPL_MCEN_Pos)                /* (I2C_COMPL) When MCEN is asserted ('1'), Master Cumulative Time-Out checking is enabled. When MCEN is not asserted ('0'), Master Cumulative Time-Out checking is disabled. Mask */
#define I2C_COMPL_MCEN(value)                 (I2C_COMPL_MCEN_Msk & (_UINT32_(value) << I2C_COMPL_MCEN_Pos)) /* Assigment of value for MCEN in the I2C_COMPL register */
#define I2C_COMPL_SCEN_Pos                    _UINT32_(4)                                          /* (I2C_COMPL) When SCEN is asserted ('1'), Slave Cumulative Time-Out checking is enabled. When SCEN is not asserted ('0'), Slave Cumulative Time-Out checking is disabled. Position */
#define I2C_COMPL_SCEN_Msk                    (_UINT32_(0x1) << I2C_COMPL_SCEN_Pos)                /* (I2C_COMPL) When SCEN is asserted ('1'), Slave Cumulative Time-Out checking is enabled. When SCEN is not asserted ('0'), Slave Cumulative Time-Out checking is disabled. Mask */
#define I2C_COMPL_SCEN(value)                 (I2C_COMPL_SCEN_Msk & (_UINT32_(value) << I2C_COMPL_SCEN_Pos)) /* Assigment of value for SCEN in the I2C_COMPL register */
#define I2C_COMPL_BIDEN_Pos                   _UINT32_(5)                                          /* (I2C_COMPL) When BIDEN is asserted ('1'), Bus Idle Detect Time-Out checking is enabled. When BIDEN is not asserted ('0'), Bus Idle Detect Time-Out checking is disabled. Position */
#define I2C_COMPL_BIDEN_Msk                   (_UINT32_(0x1) << I2C_COMPL_BIDEN_Pos)               /* (I2C_COMPL) When BIDEN is asserted ('1'), Bus Idle Detect Time-Out checking is enabled. When BIDEN is not asserted ('0'), Bus Idle Detect Time-Out checking is disabled. Mask */
#define I2C_COMPL_BIDEN(value)                (I2C_COMPL_BIDEN_Msk & (_UINT32_(value) << I2C_COMPL_BIDEN_Pos)) /* Assigment of value for BIDEN in the I2C_COMPL register */
#define I2C_COMPL_TIMERR_Pos                  _UINT32_(6)                                          /* (I2C_COMPL) The Time-out Error Detected bit (TIMERR) is asserted ('1') whenever any of the enabled time-out error detect status bits (CHDH, CHDL, SCTO, MCTO and DTO) are asserted. Position */
#define I2C_COMPL_TIMERR_Msk                  (_UINT32_(0x1) << I2C_COMPL_TIMERR_Pos)              /* (I2C_COMPL) The Time-out Error Detected bit (TIMERR) is asserted ('1') whenever any of the enabled time-out error detect status bits (CHDH, CHDL, SCTO, MCTO and DTO) are asserted. Mask */
#define I2C_COMPL_TIMERR(value)               (I2C_COMPL_TIMERR_Msk & (_UINT32_(value) << I2C_COMPL_TIMERR_Pos)) /* Assigment of value for TIMERR in the I2C_COMPL register */
#define I2C_COMPL_DTO_Pos                     _UINT32_(8)                                          /* (I2C_COMPL) DTO is the Device Time-out bit. (R/WC) Position */
#define I2C_COMPL_DTO_Msk                     (_UINT32_(0x1) << I2C_COMPL_DTO_Pos)                 /* (I2C_COMPL) DTO is the Device Time-out bit. (R/WC) Mask */
#define I2C_COMPL_DTO(value)                  (I2C_COMPL_DTO_Msk & (_UINT32_(value) << I2C_COMPL_DTO_Pos)) /* Assigment of value for DTO in the I2C_COMPL register */
#define I2C_COMPL_MCTO_Pos                    _UINT32_(9)                                          /* (I2C_COMPL) MCTO is the Master Cumulative Time-out bit. (R/WC) Position */
#define I2C_COMPL_MCTO_Msk                    (_UINT32_(0x1) << I2C_COMPL_MCTO_Pos)                /* (I2C_COMPL) MCTO is the Master Cumulative Time-out bit. (R/WC) Mask */
#define I2C_COMPL_MCTO(value)                 (I2C_COMPL_MCTO_Msk & (_UINT32_(value) << I2C_COMPL_MCTO_Pos)) /* Assigment of value for MCTO in the I2C_COMPL register */
#define I2C_COMPL_SCTO_Pos                    _UINT32_(10)                                         /* (I2C_COMPL) SCTO is the Slave Cumulative Time-out bit(R/WC) Position */
#define I2C_COMPL_SCTO_Msk                    (_UINT32_(0x1) << I2C_COMPL_SCTO_Pos)                /* (I2C_COMPL) SCTO is the Slave Cumulative Time-out bit(R/WC) Mask */
#define I2C_COMPL_SCTO(value)                 (I2C_COMPL_SCTO_Msk & (_UINT32_(value) << I2C_COMPL_SCTO_Pos)) /* Assigment of value for SCTO in the I2C_COMPL register */
#define I2C_COMPL_CHDL_Pos                    _UINT32_(11)                                         /* (I2C_COMPL) CHDL is the clock high time-out detect bit(R/WC) Position */
#define I2C_COMPL_CHDL_Msk                    (_UINT32_(0x1) << I2C_COMPL_CHDL_Pos)                /* (I2C_COMPL) CHDL is the clock high time-out detect bit(R/WC) Mask */
#define I2C_COMPL_CHDL(value)                 (I2C_COMPL_CHDL_Msk & (_UINT32_(value) << I2C_COMPL_CHDL_Pos)) /* Assigment of value for CHDL in the I2C_COMPL register */
#define I2C_COMPL_CHDH_Pos                    _UINT32_(12)                                         /* (I2C_COMPL) CHDH is the bus idle time-out detect bit(R/WC) Position */
#define I2C_COMPL_CHDH_Msk                    (_UINT32_(0x1) << I2C_COMPL_CHDH_Pos)                /* (I2C_COMPL) CHDH is the bus idle time-out detect bit(R/WC) Mask */
#define I2C_COMPL_CHDH(value)                 (I2C_COMPL_CHDH_Msk & (_UINT32_(value) << I2C_COMPL_CHDH_Pos)) /* Assigment of value for CHDH in the I2C_COMPL register */
#define I2C_COMPL_BER_Pos                     _UINT32_(13)                                         /* (I2C_COMPL) If this bit is 1, the BER bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Position */
#define I2C_COMPL_BER_Msk                     (_UINT32_(0x1) << I2C_COMPL_BER_Pos)                 /* (I2C_COMPL) If this bit is 1, the BER bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Mask */
#define I2C_COMPL_BER(value)                  (I2C_COMPL_BER_Msk & (_UINT32_(value) << I2C_COMPL_BER_Pos)) /* Assigment of value for BER in the I2C_COMPL register */
#define I2C_COMPL_LAB_Pos                     _UINT32_(14)                                         /* (I2C_COMPL) If this bit is 1, the LAB bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Position */
#define I2C_COMPL_LAB_Msk                     (_UINT32_(0x1) << I2C_COMPL_LAB_Pos)                 /* (I2C_COMPL) If this bit is 1, the LAB bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Mask */
#define I2C_COMPL_LAB(value)                  (I2C_COMPL_LAB_Msk & (_UINT32_(value) << I2C_COMPL_LAB_Pos)) /* Assigment of value for LAB in the I2C_COMPL register */
#define I2C_COMPL_SNAKR_Pos                   _UINT32_(16)                                         /* (I2C_COMPL) If this bit is 1, the Slave state machine sent a NACK to the transmitting Master while the Slave was receiving data from the SMBus interface. Position */
#define I2C_COMPL_SNAKR_Msk                   (_UINT32_(0x1) << I2C_COMPL_SNAKR_Pos)               /* (I2C_COMPL) If this bit is 1, the Slave state machine sent a NACK to the transmitting Master while the Slave was receiving data from the SMBus interface. Mask */
#define I2C_COMPL_SNAKR(value)                (I2C_COMPL_SNAKR_Msk & (_UINT32_(value) << I2C_COMPL_SNAKR_Pos)) /* Assigment of value for SNAKR in the I2C_COMPL register */
#define I2C_COMPL_STR_Pos                     _UINT32_(17)                                         /* (I2C_COMPL) 0: Slave has just finished the receive phase of a transaction. \n                1: Slave has just finished the transmit phase of a transaction. Position */
#define I2C_COMPL_STR_Msk                     (_UINT32_(0x1) << I2C_COMPL_STR_Pos)                 /* (I2C_COMPL) 0: Slave has just finished the receive phase of a transaction. \n                1: Slave has just finished the transmit phase of a transaction. Mask */
#define I2C_COMPL_STR(value)                  (I2C_COMPL_STR_Msk & (_UINT32_(value) << I2C_COMPL_STR_Pos)) /* Assigment of value for STR in the I2C_COMPL register */
#define I2C_COMPL_REP_RD_Pos                  _UINT32_(20)                                         /* (I2C_COMPL) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 1, indicating that the Master requested a Read operation. Position */
#define I2C_COMPL_REP_RD_Msk                  (_UINT32_(0x1) << I2C_COMPL_REP_RD_Pos)              /* (I2C_COMPL) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 1, indicating that the Master requested a Read operation. Mask */
#define I2C_COMPL_REP_RD(value)               (I2C_COMPL_REP_RD_Msk & (_UINT32_(value) << I2C_COMPL_REP_RD_Pos)) /* Assigment of value for REP_RD in the I2C_COMPL register */
#define I2C_COMPL_REP_WR_Pos                  _UINT32_(21)                                         /* (I2C_COMPL) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 0, indicating that the Master requested a Write operation. Position */
#define I2C_COMPL_REP_WR_Msk                  (_UINT32_(0x1) << I2C_COMPL_REP_WR_Pos)              /* (I2C_COMPL) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 0, indicating that the Master requested a Write operation. Mask */
#define I2C_COMPL_REP_WR(value)               (I2C_COMPL_REP_WR_Msk & (_UINT32_(value) << I2C_COMPL_REP_WR_Pos)) /* Assigment of value for REP_WR in the I2C_COMPL register */
#define I2C_COMPL_MNAKX_Pos                   _UINT32_(24)                                         /* (I2C_COMPL) If this bit is 1, the Master state machine received a NACK from the receiving Slave while the Master was transmitting data over the SMBus interface. (R/WC) Position */
#define I2C_COMPL_MNAKX_Msk                   (_UINT32_(0x1) << I2C_COMPL_MNAKX_Pos)               /* (I2C_COMPL) If this bit is 1, the Master state machine received a NACK from the receiving Slave while the Master was transmitting data over the SMBus interface. (R/WC) Mask */
#define I2C_COMPL_MNAKX(value)                (I2C_COMPL_MNAKX_Msk & (_UINT32_(value) << I2C_COMPL_MNAKX_Pos)) /* Assigment of value for MNAKX in the I2C_COMPL register */
#define I2C_COMPL_MTR_Pos                     _UINT32_(25)                                         /* (I2C_COMPL) 0: Master has just finished the receive phase of a transaction. \n                1: Master has just finished the transmit phase of a transaction. Position */
#define I2C_COMPL_MTR_Msk                     (_UINT32_(0x1) << I2C_COMPL_MTR_Pos)                 /* (I2C_COMPL) 0: Master has just finished the receive phase of a transaction. \n                1: Master has just finished the transmit phase of a transaction. Mask */
#define I2C_COMPL_MTR(value)                  (I2C_COMPL_MTR_Msk & (_UINT32_(value) << I2C_COMPL_MTR_Pos)) /* Assigment of value for MTR in the I2C_COMPL register */
#define I2C_COMPL_IDLE_Pos                    _UINT32_(29)                                         /* (I2C_COMPL) This bit is set when the I2C bus becomes idle (on the rising edge of nBB). (R/WC) Position */
#define I2C_COMPL_IDLE_Msk                    (_UINT32_(0x1) << I2C_COMPL_IDLE_Pos)                /* (I2C_COMPL) This bit is set when the I2C bus becomes idle (on the rising edge of nBB). (R/WC) Mask */
#define I2C_COMPL_IDLE(value)                 (I2C_COMPL_IDLE_Msk & (_UINT32_(value) << I2C_COMPL_IDLE_Pos)) /* Assigment of value for IDLE in the I2C_COMPL register */
#define I2C_COMPL_MDONE_Pos                   _UINT32_(30)                                         /* (I2C_COMPL) If this bit is 1, Master State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect. (R/WC) Position */
#define I2C_COMPL_MDONE_Msk                   (_UINT32_(0x1) << I2C_COMPL_MDONE_Pos)               /* (I2C_COMPL) If this bit is 1, Master State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect. (R/WC) Mask */
#define I2C_COMPL_MDONE(value)                (I2C_COMPL_MDONE_Msk & (_UINT32_(value) << I2C_COMPL_MDONE_Pos)) /* Assigment of value for MDONE in the I2C_COMPL register */
#define I2C_COMPL_SDONE_Pos                   _UINT32_(31)                                         /* (I2C_COMPL) If this bit is 1, Slave State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect.(R/WC) Position */
#define I2C_COMPL_SDONE_Msk                   (_UINT32_(0x1) << I2C_COMPL_SDONE_Pos)               /* (I2C_COMPL) If this bit is 1, Slave State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect.(R/WC) Mask */
#define I2C_COMPL_SDONE(value)                (I2C_COMPL_SDONE_Msk & (_UINT32_(value) << I2C_COMPL_SDONE_Pos)) /* Assigment of value for SDONE in the I2C_COMPL register */
#define I2C_COMPL_Msk                         _UINT32_(0xE3337F7C)                                 /* (I2C_COMPL) Register Mask  */


/* -------- I2C_RSVD2 : (I2C Offset: 0x24) ( R/ 32) Reserved -------- */
#define I2C_RSVD2_RESETVALUE                  _UINT32_(0x00)                                       /*  (I2C_RSVD2) Reserved  Reset Value */

#define I2C_RSVD2_Msk                         _UINT32_(0x00000000)                                 /* (I2C_RSVD2) Register Mask  */


/* -------- I2C_CFG : (I2C Offset: 0x28) (R/W 32) Configuration Register -------- */
#define I2C_CFG_RESETVALUE                    _UINT32_(0x00)                                       /*  (I2C_CFG) Configuration Register  Reset Value */

#define I2C_CFG_PORT_SEL_Pos                  _UINT32_(0)                                          /* (I2C_CFG) The PORT SEL [3:0] bits determine which one of 16 possible bus ports apply to the active 2-wire SDAT and SCLK bus pair. Position */
#define I2C_CFG_PORT_SEL_Msk                  (_UINT32_(0xF) << I2C_CFG_PORT_SEL_Pos)              /* (I2C_CFG) The PORT SEL [3:0] bits determine which one of 16 possible bus ports apply to the active 2-wire SDAT and SCLK bus pair. Mask */
#define I2C_CFG_PORT_SEL(value)               (I2C_CFG_PORT_SEL_Msk & (_UINT32_(value) << I2C_CFG_PORT_SEL_Pos)) /* Assigment of value for PORT_SEL in the I2C_CFG register */
#define I2C_CFG_TCEN_Pos                      _UINT32_(4)                                          /* (I2C_CFG) When the Timing Check Enable bit (TCEN) is asserted ('1'), Bus Time-Outs are enabled Position */
#define I2C_CFG_TCEN_Msk                      (_UINT32_(0x1) << I2C_CFG_TCEN_Pos)                  /* (I2C_CFG) When the Timing Check Enable bit (TCEN) is asserted ('1'), Bus Time-Outs are enabled Mask */
#define I2C_CFG_TCEN(value)                   (I2C_CFG_TCEN_Msk & (_UINT32_(value) << I2C_CFG_TCEN_Pos)) /* Assigment of value for TCEN in the I2C_CFG register */
#define I2C_CFG_SLOW_CLK_Pos                  _UINT32_(5)                                          /* (I2C_CFG) When this bit is 1, the base period for the Bus Clock Register is multiplied by 4, and thus the frequency is divided by 4. Position */
#define I2C_CFG_SLOW_CLK_Msk                  (_UINT32_(0x1) << I2C_CFG_SLOW_CLK_Pos)              /* (I2C_CFG) When this bit is 1, the base period for the Bus Clock Register is multiplied by 4, and thus the frequency is divided by 4. Mask */
#define I2C_CFG_SLOW_CLK(value)               (I2C_CFG_SLOW_CLK_Msk & (_UINT32_(value) << I2C_CFG_SLOW_CLK_Pos)) /* Assigment of value for SLOW_CLK in the I2C_CFG register */
#define I2C_CFG_TEST_Pos                      _UINT32_(6)                                          /* (I2C_CFG) Must be always written with 0. Position */
#define I2C_CFG_TEST_Msk                      (_UINT32_(0x3) << I2C_CFG_TEST_Pos)                  /* (I2C_CFG) Must be always written with 0. Mask */
#define I2C_CFG_TEST(value)                   (I2C_CFG_TEST_Msk & (_UINT32_(value) << I2C_CFG_TEST_Pos)) /* Assigment of value for TEST in the I2C_CFG register */
#define I2C_CFG_FEN_Pos                       _UINT32_(8)                                          /* (I2C_CFG) Input filtering enable. Input filtering is required by the I2C specification if external filtering is not available.\n      1=Input filtering is enabled; 0=Input filtering is disabled. Position */
#define I2C_CFG_FEN_Msk                       (_UINT32_(0x1) << I2C_CFG_FEN_Pos)                   /* (I2C_CFG) Input filtering enable. Input filtering is required by the I2C specification if external filtering is not available.\n      1=Input filtering is enabled; 0=Input filtering is disabled. Mask */
#define I2C_CFG_FEN(value)                    (I2C_CFG_FEN_Msk & (_UINT32_(value) << I2C_CFG_FEN_Pos)) /* Assigment of value for FEN in the I2C_CFG register */
#define I2C_CFG_RST_Pos                       _UINT32_(9)                                          /* (I2C_CFG) When RESET is asserted ('1'), all logic and registers except for the RESET bit itself are initialized to the power-on default state. Position */
#define I2C_CFG_RST_Msk                       (_UINT32_(0x1) << I2C_CFG_RST_Pos)                   /* (I2C_CFG) When RESET is asserted ('1'), all logic and registers except for the RESET bit itself are initialized to the power-on default state. Mask */
#define I2C_CFG_RST(value)                    (I2C_CFG_RST_Msk & (_UINT32_(value) << I2C_CFG_RST_Pos)) /* Assigment of value for RST in the I2C_CFG register */
#define I2C_CFG_EN_Pos                        _UINT32_(10)                                         /* (I2C_CFG) When ENAB (Enable) is not asserted ('0') (default), the SMB Controller Core is disabled and in the lowest power consumption state (Disabled State).\n                The ENAB bit must be asserted ('1') for normal operation. Position */
#define I2C_CFG_EN_Msk                        (_UINT32_(0x1) << I2C_CFG_EN_Pos)                    /* (I2C_CFG) When ENAB (Enable) is not asserted ('0') (default), the SMB Controller Core is disabled and in the lowest power consumption state (Disabled State).\n                The ENAB bit must be asserted ('1') for normal operation. Mask */
#define I2C_CFG_EN(value)                     (I2C_CFG_EN_Msk & (_UINT32_(value) << I2C_CFG_EN_Pos)) /* Assigment of value for EN in the I2C_CFG register */
#define I2C_CFG_TEST0_Pos                     _UINT32_(11)                                         /* (I2C_CFG) Must be always written with 0. Position */
#define I2C_CFG_TEST0_Msk                     (_UINT32_(0x7) << I2C_CFG_TEST0_Pos)                 /* (I2C_CFG) Must be always written with 0. Mask */
#define I2C_CFG_TEST0(value)                  (I2C_CFG_TEST0_Msk & (_UINT32_(value) << I2C_CFG_TEST0_Pos)) /* Assigment of value for TEST0 in the I2C_CFG register */
#define I2C_CFG_GC_DIS_Pos                    _UINT32_(14)                                         /* (I2C_CFG) This is the General Call Disable bit.\n                0: the response to the General Call address as a slave is enabled\n                1: the response to the General Call address as a slave is disabled. Position */
#define I2C_CFG_GC_DIS_Msk                    (_UINT32_(0x1) << I2C_CFG_GC_DIS_Pos)                /* (I2C_CFG) This is the General Call Disable bit.\n                0: the response to the General Call address as a slave is enabled\n                1: the response to the General Call address as a slave is disabled. Mask */
#define I2C_CFG_GC_DIS(value)                 (I2C_CFG_GC_DIS_Msk & (_UINT32_(value) << I2C_CFG_GC_DIS_Pos)) /* Assigment of value for GC_DIS in the I2C_CFG register */
#define I2C_CFG_CNFG_PROMIS_Pos               _UINT32_(15)                                         /* (I2C_CFG) This is the configur Promiscuous bit.\n                0: Normal operation is enabled. \n         1: Promiscuous Mode enabled , General Call Address disabled, Promiscuous Address Interrupt function enabled.    Stall 9th clock of address byte enabled.  Address byte ACK/NAK done by Promiscuous ACK setting.\n Position */
#define I2C_CFG_CNFG_PROMIS_Msk               (_UINT32_(0x1) << I2C_CFG_CNFG_PROMIS_Pos)           /* (I2C_CFG) This is the configur Promiscuous bit.\n                0: Normal operation is enabled. \n         1: Promiscuous Mode enabled , General Call Address disabled, Promiscuous Address Interrupt function enabled.    Stall 9th clock of address byte enabled.  Address byte ACK/NAK done by Promiscuous ACK setting.\n Mask */
#define I2C_CFG_CNFG_PROMIS(value)            (I2C_CFG_CNFG_PROMIS_Msk & (_UINT32_(value) << I2C_CFG_CNFG_PROMIS_Pos)) /* Assigment of value for CNFG_PROMIS in the I2C_CFG register */
#define I2C_CFG_Msk                           _UINT32_(0x0000FFFF)                                 /* (I2C_CFG) Register Mask  */


/* -------- I2C_BUSCLK : (I2C Offset: 0x2C) (R/W 32) Bus Clock Register -------- */
#define I2C_BUSCLK_RESETVALUE                 _UINT32_(0x4F4F)                                     /*  (I2C_BUSCLK) Bus Clock Register  Reset Value */

#define I2C_BUSCLK_LOW_PER_Pos                _UINT32_(0)                                          /* (I2C_BUSCLK) This field defines the number of I2C Baud Clock periods that make up the low phase of the I2C/SMBus bus clock. Position */
#define I2C_BUSCLK_LOW_PER_Msk                (_UINT32_(0xFF) << I2C_BUSCLK_LOW_PER_Pos)           /* (I2C_BUSCLK) This field defines the number of I2C Baud Clock periods that make up the low phase of the I2C/SMBus bus clock. Mask */
#define I2C_BUSCLK_LOW_PER(value)             (I2C_BUSCLK_LOW_PER_Msk & (_UINT32_(value) << I2C_BUSCLK_LOW_PER_Pos)) /* Assigment of value for LOW_PER in the I2C_BUSCLK register */
#define I2C_BUSCLK_HIGH_PER_Pos               _UINT32_(8)                                          /* (I2C_BUSCLK) This field defines the number of I2C Baud Clock periods that make up the high phase of the I2C/SMBus bus clock. Position */
#define I2C_BUSCLK_HIGH_PER_Msk               (_UINT32_(0xFF) << I2C_BUSCLK_HIGH_PER_Pos)          /* (I2C_BUSCLK) This field defines the number of I2C Baud Clock periods that make up the high phase of the I2C/SMBus bus clock. Mask */
#define I2C_BUSCLK_HIGH_PER(value)            (I2C_BUSCLK_HIGH_PER_Msk & (_UINT32_(value) << I2C_BUSCLK_HIGH_PER_Pos)) /* Assigment of value for HIGH_PER in the I2C_BUSCLK register */
#define I2C_BUSCLK_Msk                        _UINT32_(0x0000FFFF)                                 /* (I2C_BUSCLK) Register Mask  */


/* -------- I2C_BLKID : (I2C Offset: 0x30) ( R/ 8) Block ID Register -------- */
#define I2C_BLKID_RESETVALUE                  _UINT8_(0x00)                                        /*  (I2C_BLKID) Block ID Register  Reset Value */

#define I2C_BLKID_ID_Pos                      _UINT8_(0)                                           /* (I2C_BLKID) Block ID. Position */
#define I2C_BLKID_ID_Msk                      (_UINT8_(0xFF) << I2C_BLKID_ID_Pos)                  /* (I2C_BLKID) Block ID. Mask */
#define I2C_BLKID_ID(value)                   (I2C_BLKID_ID_Msk & (_UINT8_(value) << I2C_BLKID_ID_Pos)) /* Assigment of value for ID in the I2C_BLKID register */
#define I2C_BLKID_Msk                         _UINT8_(0xFF)                                        /* (I2C_BLKID) Register Mask  */


/* -------- I2C_BLKREV : (I2C Offset: 0x34) ( R/ 8) Revision Register -------- */
#define I2C_BLKREV_RESETVALUE                 _UINT8_(0x00)                                        /*  (I2C_BLKREV) Revision Register  Reset Value */

#define I2C_BLKREV_REV_Pos                    _UINT8_(0)                                           /* (I2C_BLKREV) Block Revision Number Position */
#define I2C_BLKREV_REV_Msk                    (_UINT8_(0xFF) << I2C_BLKREV_REV_Pos)                /* (I2C_BLKREV) Block Revision Number Mask */
#define I2C_BLKREV_REV(value)                 (I2C_BLKREV_REV_Msk & (_UINT8_(value) << I2C_BLKREV_REV_Pos)) /* Assigment of value for REV in the I2C_BLKREV register */
#define I2C_BLKREV_Msk                        _UINT8_(0xFF)                                        /* (I2C_BLKREV) Register Mask  */


/* -------- I2C_BB_CTRL : (I2C Offset: 0x38) (R/W 32) Bit-Bang Control Register -------- */
#define I2C_BB_CTRL_RESETVALUE                _UINT32_(0x60)                                       /*  (I2C_BB_CTRL) Bit-Bang Control Register  Reset Value */

#define I2C_BB_CTRL_BBEN_Pos                  _UINT32_(0)                                          /* (I2C_BB_CTRL) Bit-Bang Mode Enable. 0 - Bit Bang Mode Disabled. 1 - Bit Bang Mode Enabled Position */
#define I2C_BB_CTRL_BBEN_Msk                  (_UINT32_(0x1) << I2C_BB_CTRL_BBEN_Pos)              /* (I2C_BB_CTRL) Bit-Bang Mode Enable. 0 - Bit Bang Mode Disabled. 1 - Bit Bang Mode Enabled Mask */
#define I2C_BB_CTRL_BBEN(value)               (I2C_BB_CTRL_BBEN_Msk & (_UINT32_(value) << I2C_BB_CTRL_BBEN_Pos)) /* Assigment of value for BBEN in the I2C_BB_CTRL register */
#define I2C_BB_CTRL_CLDIR_Pos                 _UINT32_(1)                                          /* (I2C_BB_CTRL) Bit-Bang Clock Direction. The CLDIR bit controls the direction of SCLK. 0 - Input, 1 - Output Position */
#define I2C_BB_CTRL_CLDIR_Msk                 (_UINT32_(0x1) << I2C_BB_CTRL_CLDIR_Pos)             /* (I2C_BB_CTRL) Bit-Bang Clock Direction. The CLDIR bit controls the direction of SCLK. 0 - Input, 1 - Output Mask */
#define I2C_BB_CTRL_CLDIR(value)              (I2C_BB_CTRL_CLDIR_Msk & (_UINT32_(value) << I2C_BB_CTRL_CLDIR_Pos)) /* Assigment of value for CLDIR in the I2C_BB_CTRL register */
#define I2C_BB_CTRL_DADIR_Pos                 _UINT32_(2)                                          /* (I2C_BB_CTRL) Bit-Bang Data Direction. The DADIR bit controls the direction of SDAT. 0 - Input. 1 - Output Position */
#define I2C_BB_CTRL_DADIR_Msk                 (_UINT32_(0x1) << I2C_BB_CTRL_DADIR_Pos)             /* (I2C_BB_CTRL) Bit-Bang Data Direction. The DADIR bit controls the direction of SDAT. 0 - Input. 1 - Output Mask */
#define I2C_BB_CTRL_DADIR(value)              (I2C_BB_CTRL_DADIR_Msk & (_UINT32_(value) << I2C_BB_CTRL_DADIR_Pos)) /* Assigment of value for DADIR in the I2C_BB_CTRL register */
#define I2C_BB_CTRL_BBCLK_Pos                 _UINT32_(3)                                          /* (I2C_BB_CTRL) Bit-Bang Clock. The BBCLK bit controls the state of SCLK when BBEN = and CLDIR = '1' Position */
#define I2C_BB_CTRL_BBCLK_Msk                 (_UINT32_(0x1) << I2C_BB_CTRL_BBCLK_Pos)             /* (I2C_BB_CTRL) Bit-Bang Clock. The BBCLK bit controls the state of SCLK when BBEN = and CLDIR = '1' Mask */
#define I2C_BB_CTRL_BBCLK(value)              (I2C_BB_CTRL_BBCLK_Msk & (_UINT32_(value) << I2C_BB_CTRL_BBCLK_Pos)) /* Assigment of value for BBCLK in the I2C_BB_CTRL register */
#define I2C_BB_CTRL_BBDAT_Pos                 _UINT32_(4)                                          /* (I2C_BB_CTRL) Bit-Bang Data. The BBDAT bit controls the state of SDAT when BBEN = and DADIR = '1' Position */
#define I2C_BB_CTRL_BBDAT_Msk                 (_UINT32_(0x1) << I2C_BB_CTRL_BBDAT_Pos)             /* (I2C_BB_CTRL) Bit-Bang Data. The BBDAT bit controls the state of SDAT when BBEN = and DADIR = '1' Mask */
#define I2C_BB_CTRL_BBDAT(value)              (I2C_BB_CTRL_BBDAT_Msk & (_UINT32_(value) << I2C_BB_CTRL_BBDAT_Pos)) /* Assigment of value for BBDAT in the I2C_BB_CTRL register */
#define I2C_BB_CTRL_BBCLKI_Pos                _UINT32_(5)                                          /* (I2C_BB_CTRL) Bit-Bang Clock In. The BBCLKI bit always returns the state of SCLK. Position */
#define I2C_BB_CTRL_BBCLKI_Msk                (_UINT32_(0x1) << I2C_BB_CTRL_BBCLKI_Pos)            /* (I2C_BB_CTRL) Bit-Bang Clock In. The BBCLKI bit always returns the state of SCLK. Mask */
#define I2C_BB_CTRL_BBCLKI(value)             (I2C_BB_CTRL_BBCLKI_Msk & (_UINT32_(value) << I2C_BB_CTRL_BBCLKI_Pos)) /* Assigment of value for BBCLKI in the I2C_BB_CTRL register */
#define I2C_BB_CTRL_BBDATI_Pos                _UINT32_(6)                                          /* (I2C_BB_CTRL) Bit-Bang Data In. The BBDATI bit always returns the state of SDAT Position */
#define I2C_BB_CTRL_BBDATI_Msk                (_UINT32_(0x1) << I2C_BB_CTRL_BBDATI_Pos)            /* (I2C_BB_CTRL) Bit-Bang Data In. The BBDATI bit always returns the state of SDAT Mask */
#define I2C_BB_CTRL_BBDATI(value)             (I2C_BB_CTRL_BBDATI_Msk & (_UINT32_(value) << I2C_BB_CTRL_BBDATI_Pos)) /* Assigment of value for BBDATI in the I2C_BB_CTRL register */
#define I2C_BB_CTRL_Msk                       _UINT32_(0x0000007F)                                 /* (I2C_BB_CTRL) Register Mask  */


/* -------- I2C_CLKSYNC : (I2C Offset: 0x3C) ( R/ 8) This is Clock Sync Register. This register must not be written, or undesirable results may occur.\n -------- */
#define I2C_CLKSYNC_RESETVALUE                _UINT8_(0x00)                                        /*  (I2C_CLKSYNC) This is Clock Sync Register. This register must not be written, or undesirable results may occur.\n  Reset Value */

#define I2C_CLKSYNC_CLK_SYNC_Pos              _UINT8_(0)                                           /* (I2C_CLKSYNC) This register must not be written, or undesirable results may occur. Position */
#define I2C_CLKSYNC_CLK_SYNC_Msk              (_UINT8_(0xFF) << I2C_CLKSYNC_CLK_SYNC_Pos)          /* (I2C_CLKSYNC) This register must not be written, or undesirable results may occur. Mask */
#define I2C_CLKSYNC_CLK_SYNC(value)           (I2C_CLKSYNC_CLK_SYNC_Msk & (_UINT8_(value) << I2C_CLKSYNC_CLK_SYNC_Pos)) /* Assigment of value for CLK_SYNC in the I2C_CLKSYNC register */
#define I2C_CLKSYNC_Msk                       _UINT8_(0xFF)                                        /* (I2C_CLKSYNC) Register Mask  */


/* -------- I2C_DATATM : (I2C Offset: 0x40) (R/W 32) Data Timing Register -------- */
#define I2C_DATATM_RESETVALUE                 _UINT32_(0xC4D5006)                                  /*  (I2C_DATATM) Data Timing Register  Reset Value */

#define I2C_DATATM_DATA_HOLD_Pos              _UINT32_(0)                                          /* (I2C_DATATM) The Data Hold [7:0] timer determines the SDAT hold time following SCLK driven low. Position */
#define I2C_DATATM_DATA_HOLD_Msk              (_UINT32_(0xFF) << I2C_DATATM_DATA_HOLD_Pos)         /* (I2C_DATATM) The Data Hold [7:0] timer determines the SDAT hold time following SCLK driven low. Mask */
#define I2C_DATATM_DATA_HOLD(value)           (I2C_DATATM_DATA_HOLD_Msk & (_UINT32_(value) << I2C_DATATM_DATA_HOLD_Pos)) /* Assigment of value for DATA_HOLD in the I2C_DATATM register */
#define I2C_DATATM_RESTART_SETUP_Pos          _UINT32_(8)                                          /* (I2C_DATATM) The Restart Setup [7:0] timer determines the SDAT setup time from the rising edge of SCLK for a repeated START condition. Position */
#define I2C_DATATM_RESTART_SETUP_Msk          (_UINT32_(0xFF) << I2C_DATATM_RESTART_SETUP_Pos)     /* (I2C_DATATM) The Restart Setup [7:0] timer determines the SDAT setup time from the rising edge of SCLK for a repeated START condition. Mask */
#define I2C_DATATM_RESTART_SETUP(value)       (I2C_DATATM_RESTART_SETUP_Msk & (_UINT32_(value) << I2C_DATATM_RESTART_SETUP_Pos)) /* Assigment of value for RESTART_SETUP in the I2C_DATATM register */
#define I2C_DATATM_STOP_SETUP_Pos             _UINT32_(16)                                         /* (I2C_DATATM) The Stop Setup [7:0] timer determines the SDAT setup time from the rising edge of SCLK for a STOP condition. Position */
#define I2C_DATATM_STOP_SETUP_Msk             (_UINT32_(0xFF) << I2C_DATATM_STOP_SETUP_Pos)        /* (I2C_DATATM) The Stop Setup [7:0] timer determines the SDAT setup time from the rising edge of SCLK for a STOP condition. Mask */
#define I2C_DATATM_STOP_SETUP(value)          (I2C_DATATM_STOP_SETUP_Msk & (_UINT32_(value) << I2C_DATATM_STOP_SETUP_Pos)) /* Assigment of value for STOP_SETUP in the I2C_DATATM register */
#define I2C_DATATM_FIRST_START_HOLD_Pos       _UINT32_(24)                                         /* (I2C_DATATM) This field determines the SCL hold time following SDA driven low during the first START bit in a transfer. It is the parameter\n      THD:STA in the I2C Specification for an initial START bit. Repeated START hold time is determined by the Repeated START Hold Time Register. Position */
#define I2C_DATATM_FIRST_START_HOLD_Msk       (_UINT32_(0xFF) << I2C_DATATM_FIRST_START_HOLD_Pos)  /* (I2C_DATATM) This field determines the SCL hold time following SDA driven low during the first START bit in a transfer. It is the parameter\n      THD:STA in the I2C Specification for an initial START bit. Repeated START hold time is determined by the Repeated START Hold Time Register. Mask */
#define I2C_DATATM_FIRST_START_HOLD(value)    (I2C_DATATM_FIRST_START_HOLD_Msk & (_UINT32_(value) << I2C_DATATM_FIRST_START_HOLD_Pos)) /* Assigment of value for FIRST_START_HOLD in the I2C_DATATM register */
#define I2C_DATATM_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (I2C_DATATM) Register Mask  */


/* -------- I2C_TMOUTSC : (I2C Offset: 0x44) (R/W 32) Time-Out Scaling Register -------- */
#define I2C_TMOUTSC_RESETVALUE                _UINT32_(0x4B9CC2C7)                                 /*  (I2C_TMOUTSC) Time-Out Scaling Register  Reset Value */

#define I2C_TMOUTSC_BUS_IDLE_MIN_Pos          _UINT32_(24)                                         /* (I2C_TMOUTSC) Bus Idle Minimum time = Bus Idle Min [7:0] x Baud_Clock_Period Position */
#define I2C_TMOUTSC_BUS_IDLE_MIN_Msk          (_UINT32_(0xFF) << I2C_TMOUTSC_BUS_IDLE_MIN_Pos)     /* (I2C_TMOUTSC) Bus Idle Minimum time = Bus Idle Min [7:0] x Baud_Clock_Period Mask */
#define I2C_TMOUTSC_BUS_IDLE_MIN(value)       (I2C_TMOUTSC_BUS_IDLE_MIN_Msk & (_UINT32_(value) << I2C_TMOUTSC_BUS_IDLE_MIN_Pos)) /* Assigment of value for BUS_IDLE_MIN in the I2C_TMOUTSC register */
#define I2C_TMOUTSC_Msk                       _UINT32_(0xFF000000)                                 /* (I2C_TMOUTSC) Register Mask  */


/* -------- I2C_WAKE_STS : (I2C Offset: 0x60) (R/W 32) WAKE STATUS Register -------- */
#define I2C_WAKE_STS_RESETVALUE               _UINT32_(0x00)                                       /*  (I2C_WAKE_STS) WAKE STATUS Register  Reset Value */

#define I2C_WAKE_STS_START_BIT_DET_Pos        _UINT32_(0)                                          /* (I2C_WAKE_STS) This bit is set to '1' when a START bit is detected while the controller is enabled. This bit is cleared to '0' when\n      written with a '1'. Writes of '0' have no effect. (R/WC) Position */
#define I2C_WAKE_STS_START_BIT_DET_Msk        (_UINT32_(0x1) << I2C_WAKE_STS_START_BIT_DET_Pos)    /* (I2C_WAKE_STS) This bit is set to '1' when a START bit is detected while the controller is enabled. This bit is cleared to '0' when\n      written with a '1'. Writes of '0' have no effect. (R/WC) Mask */
#define I2C_WAKE_STS_START_BIT_DET(value)     (I2C_WAKE_STS_START_BIT_DET_Msk & (_UINT32_(value) << I2C_WAKE_STS_START_BIT_DET_Pos)) /* Assigment of value for START_BIT_DET in the I2C_WAKE_STS register */
#define I2C_WAKE_STS_Msk                      _UINT32_(0x00000001)                                 /* (I2C_WAKE_STS) Register Mask  */


/* -------- I2C_WAKE_EN : (I2C Offset: 0x64) (R/W 32) WAKE ENABLE Register -------- */
#define I2C_WAKE_EN_RESETVALUE                _UINT32_(0x00)                                       /*  (I2C_WAKE_EN) WAKE ENABLE Register  Reset Value */

#define I2C_WAKE_EN_START_DET_INT_EN_Pos      _UINT32_(0)                                          /* (I2C_WAKE_EN) Enable Start Bit Detection Interrupt. The Start Bit Detection Interrupt is wake-capable.\n         1=Start Bit Detection Interrupt enabled. \n         0=Start Bit Detection Interrupt disabled.\n Position */
#define I2C_WAKE_EN_START_DET_INT_EN_Msk      (_UINT32_(0x1) << I2C_WAKE_EN_START_DET_INT_EN_Pos)  /* (I2C_WAKE_EN) Enable Start Bit Detection Interrupt. The Start Bit Detection Interrupt is wake-capable.\n         1=Start Bit Detection Interrupt enabled. \n         0=Start Bit Detection Interrupt disabled.\n Mask */
#define I2C_WAKE_EN_START_DET_INT_EN(value)   (I2C_WAKE_EN_START_DET_INT_EN_Msk & (_UINT32_(value) << I2C_WAKE_EN_START_DET_INT_EN_Pos)) /* Assigment of value for START_DET_INT_EN in the I2C_WAKE_EN register */
#define I2C_WAKE_EN_Msk                       _UINT32_(0x00000001)                                 /* (I2C_WAKE_EN) Register Mask  */


/* -------- I2C_SLV_ADDR : (I2C Offset: 0x6C) (R/W 8) This is the Slave Address Register.\n -------- */
#define I2C_SLV_ADDR_RESETVALUE               _UINT8_(0x00)                                        /*  (I2C_SLV_ADDR) This is the Slave Address Register.\n  Reset Value */

#define I2C_SLV_ADDR_SADDR_Pos                _UINT8_(0)                                           /* (I2C_SLV_ADDR) This register stores the value of the Slave Address and Direction Bit from the 1st byte of a Slave transfer.\n    This is loaded immediately upon receipt of the address byte, before the ACK/NAK 9th clock. \n Position */
#define I2C_SLV_ADDR_SADDR_Msk                (_UINT8_(0xFF) << I2C_SLV_ADDR_SADDR_Pos)            /* (I2C_SLV_ADDR) This register stores the value of the Slave Address and Direction Bit from the 1st byte of a Slave transfer.\n    This is loaded immediately upon receipt of the address byte, before the ACK/NAK 9th clock. \n Mask */
#define I2C_SLV_ADDR_SADDR(value)             (I2C_SLV_ADDR_SADDR_Msk & (_UINT8_(value) << I2C_SLV_ADDR_SADDR_Pos)) /* Assigment of value for SADDR in the I2C_SLV_ADDR register */
#define I2C_SLV_ADDR_Msk                      _UINT8_(0xFF)                                        /* (I2C_SLV_ADDR) Register Mask  */


/* -------- I2C_PRM_STS : (I2C Offset: 0x70) (R/W 8) This is the Promiscuous Interrupt Register. This register bit will be functional only in Promiscuous mode.\n -------- */
#define I2C_PRM_STS_RESETVALUE                _UINT8_(0x00)                                        /*  (I2C_PRM_STS) This is the Promiscuous Interrupt Register. This register bit will be functional only in Promiscuous mode.\n  Reset Value */

#define I2C_PRM_STS_ADDR_INTR_Pos             _UINT8_(0)                                           /* (I2C_PRM_STS) This is the Promiscuous Address Status interrupt. This bit is functional only in Promiscuous mode. This bit is set \n         on the 8th clock of the I2C Address. This bit will hold the Clock line low till this register bit is cleared. In other words, \n         Software should read the address program ACK/NAK and clear this bit for the ACK/NAK clock to appear on the I2C clock (SCL) line. \n         This is Write 1 to clear. R/W1C. Position */
#define I2C_PRM_STS_ADDR_INTR_Msk             (_UINT8_(0x1) << I2C_PRM_STS_ADDR_INTR_Pos)          /* (I2C_PRM_STS) This is the Promiscuous Address Status interrupt. This bit is functional only in Promiscuous mode. This bit is set \n         on the 8th clock of the I2C Address. This bit will hold the Clock line low till this register bit is cleared. In other words, \n         Software should read the address program ACK/NAK and clear this bit for the ACK/NAK clock to appear on the I2C clock (SCL) line. \n         This is Write 1 to clear. R/W1C. Mask */
#define I2C_PRM_STS_ADDR_INTR(value)          (I2C_PRM_STS_ADDR_INTR_Msk & (_UINT8_(value) << I2C_PRM_STS_ADDR_INTR_Pos)) /* Assigment of value for ADDR_INTR in the I2C_PRM_STS register */
#define I2C_PRM_STS_Msk                       _UINT8_(0x01)                                        /* (I2C_PRM_STS) Register Mask  */


/* -------- I2C_PRM_IEN : (I2C Offset: 0x74) (R/W 8) This is the Promiscuous Interrupt Enable Register.\n -------- */
#define I2C_PRM_IEN_RESETVALUE                _UINT8_(0x00)                                        /*  (I2C_PRM_IEN) This is the Promiscuous Interrupt Enable Register.\n  Reset Value */

#define I2C_PRM_IEN_ADDR_Pos                  _UINT8_(0)                                           /* (I2C_PRM_IEN) This is the Promiscuous interrupt enable register.\n         1= Interrupt Enable. \n         0= Interrupt Disabled. \n Position */
#define I2C_PRM_IEN_ADDR_Msk                  (_UINT8_(0x1) << I2C_PRM_IEN_ADDR_Pos)               /* (I2C_PRM_IEN) This is the Promiscuous interrupt enable register.\n         1= Interrupt Enable. \n         0= Interrupt Disabled. \n Mask */
#define I2C_PRM_IEN_ADDR(value)               (I2C_PRM_IEN_ADDR_Msk & (_UINT8_(value) << I2C_PRM_IEN_ADDR_Pos)) /* Assigment of value for ADDR in the I2C_PRM_IEN register */
#define I2C_PRM_IEN_Msk                       _UINT8_(0x01)                                        /* (I2C_PRM_IEN) Register Mask  */


/* -------- I2C_PRM_CTRL : (I2C Offset: 0x78) (R/W 8) This is the Promiscuous Control Register. This register is functional only in Promiscuous mode.\n -------- */
#define I2C_PRM_CTRL_RESETVALUE               _UINT8_(0x00)                                        /*  (I2C_PRM_CTRL) This is the Promiscuous Control Register. This register is functional only in Promiscuous mode.\n  Reset Value */

#define I2C_PRM_CTRL_ACK_NAK_Pos              _UINT8_(0)                                           /* (I2C_PRM_CTRL) This is the Promiscuous ACK / NAK response register. This bit has no effect in Normal mode of operation.\n         1= ACK the address byte. \n         0= NAK the address byte. \n Position */
#define I2C_PRM_CTRL_ACK_NAK_Msk              (_UINT8_(0x1) << I2C_PRM_CTRL_ACK_NAK_Pos)           /* (I2C_PRM_CTRL) This is the Promiscuous ACK / NAK response register. This bit has no effect in Normal mode of operation.\n         1= ACK the address byte. \n         0= NAK the address byte. \n Mask */
#define I2C_PRM_CTRL_ACK_NAK(value)           (I2C_PRM_CTRL_ACK_NAK_Msk & (_UINT8_(value) << I2C_PRM_CTRL_ACK_NAK_Pos)) /* Assigment of value for ACK_NAK in the I2C_PRM_CTRL register */
#define I2C_PRM_CTRL_Msk                      _UINT8_(0x01)                                        /* (I2C_PRM_CTRL) Register Mask  */


/** \brief I2C register offsets definitions */
#define I2C_WCTRL_REG_OFST             _UINT32_(0x00)      /* (I2C_WCTRL) Control Register Offset */
#define I2C_RSTS_REG_OFST              _UINT32_(0x00)      /* (I2C_RSTS) Status Register Offset */
#define I2C_OWN_ADDR_REG_OFST          _UINT32_(0x04)      /* (I2C_OWN_ADDR) Own Address Register\n           Note that the Data Register and Own Address fields are offset by one bit, so that programming Own Address 1 with a value of 55h will result in the value AAh being recognized as the SMB Controller Core slave address. Offset */
#define I2C_I2CDATA_REG_OFST           _UINT32_(0x08)      /* (I2C_I2CDATA) This register holds the data that are either shifted out to or shifted in from the I2C port. Offset */
#define I2C_RSHTM_REG_OFST             _UINT32_(0x18)      /* (I2C_RSHTM) Repeated Start Hold Time Register Offset */
#define I2C_RSVD1_REG_OFST             _UINT32_(0x1C)      /* (I2C_RSVD1) Reserved Offset */
#define I2C_COMPL_REG_OFST             _UINT32_(0x20)      /* (I2C_COMPL) Completion Register Offset */
#define I2C_RSVD2_REG_OFST             _UINT32_(0x24)      /* (I2C_RSVD2) Reserved Offset */
#define I2C_CFG_REG_OFST               _UINT32_(0x28)      /* (I2C_CFG) Configuration Register Offset */
#define I2C_BUSCLK_REG_OFST            _UINT32_(0x2C)      /* (I2C_BUSCLK) Bus Clock Register Offset */
#define I2C_BLKID_REG_OFST             _UINT32_(0x30)      /* (I2C_BLKID) Block ID Register Offset */
#define I2C_BLKREV_REG_OFST            _UINT32_(0x34)      /* (I2C_BLKREV) Revision Register Offset */
#define I2C_BB_CTRL_REG_OFST           _UINT32_(0x38)      /* (I2C_BB_CTRL) Bit-Bang Control Register Offset */
#define I2C_CLKSYNC_REG_OFST           _UINT32_(0x3C)      /* (I2C_CLKSYNC) This is Clock Sync Register. This register must not be written, or undesirable results may occur.\n Offset */
#define I2C_DATATM_REG_OFST            _UINT32_(0x40)      /* (I2C_DATATM) Data Timing Register Offset */
#define I2C_TMOUTSC_REG_OFST           _UINT32_(0x44)      /* (I2C_TMOUTSC) Time-Out Scaling Register Offset */
#define I2C_WAKE_STS_REG_OFST          _UINT32_(0x60)      /* (I2C_WAKE_STS) WAKE STATUS Register Offset */
#define I2C_WAKE_EN_REG_OFST           _UINT32_(0x64)      /* (I2C_WAKE_EN) WAKE ENABLE Register Offset */
#define I2C_SLV_ADDR_REG_OFST          _UINT32_(0x6C)      /* (I2C_SLV_ADDR) This is the Slave Address Register.\n Offset */
#define I2C_PRM_STS_REG_OFST           _UINT32_(0x70)      /* (I2C_PRM_STS) This is the Promiscuous Interrupt Register. This register bit will be functional only in Promiscuous mode.\n Offset */
#define I2C_PRM_IEN_REG_OFST           _UINT32_(0x74)      /* (I2C_PRM_IEN) This is the Promiscuous Interrupt Enable Register.\n Offset */
#define I2C_PRM_CTRL_REG_OFST          _UINT32_(0x78)      /* (I2C_PRM_CTRL) This is the Promiscuous Control Register. This register is functional only in Promiscuous mode.\n Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief I2C register API structure */
typedef struct
{  /* The I2C interface can handle standard I2C interface. */
  union
  {
      __I   uint32_t                       I2C_RSTS;           /**< Offset: 0x00 (R/   32) Status Register */
      __O   uint32_t                       I2C_WCTRL;          /**< Offset: 0x00 ( /W  32) Control Register */
  };
  __IO  uint32_t                       I2C_OWN_ADDR;       /**< Offset: 0x04 (R/W  32) Own Address Register\n           Note that the Data Register and Own Address fields are offset by one bit, so that programming Own Address 1 with a value of 55h will result in the value AAh being recognized as the SMB Controller Core slave address. */
  __IO  uint8_t                        I2C_I2CDATA;        /**< Offset: 0x08 (R/W  8) This register holds the data that are either shifted out to or shifted in from the I2C port. */
  __I   uint8_t                        Reserved1[0x0F];
  __IO  uint32_t                       I2C_RSHTM;          /**< Offset: 0x18 (R/W  32) Repeated Start Hold Time Register */
  __I   uint32_t                       I2C_RSVD1;          /**< Offset: 0x1C (R/   32) Reserved */
  __IO  uint32_t                       I2C_COMPL;          /**< Offset: 0x20 (R/W  32) Completion Register */
  __I   uint32_t                       I2C_RSVD2;          /**< Offset: 0x24 (R/   32) Reserved */
  __IO  uint32_t                       I2C_CFG;            /**< Offset: 0x28 (R/W  32) Configuration Register */
  __IO  uint32_t                       I2C_BUSCLK;         /**< Offset: 0x2C (R/W  32) Bus Clock Register */
  __I   uint8_t                        I2C_BLKID;          /**< Offset: 0x30 (R/   8) Block ID Register */
  __I   uint8_t                        Reserved2[0x03];
  __I   uint8_t                        I2C_BLKREV;         /**< Offset: 0x34 (R/   8) Revision Register */
  __I   uint8_t                        Reserved3[0x03];
  __IO  uint32_t                       I2C_BB_CTRL;        /**< Offset: 0x38 (R/W  32) Bit-Bang Control Register */
  __I   uint8_t                        I2C_CLKSYNC;        /**< Offset: 0x3C (R/   8) This is Clock Sync Register. This register must not be written, or undesirable results may occur.\n */
  __I   uint8_t                        Reserved4[0x03];
  __IO  uint32_t                       I2C_DATATM;         /**< Offset: 0x40 (R/W  32) Data Timing Register */
  __IO  uint32_t                       I2C_TMOUTSC;        /**< Offset: 0x44 (R/W  32) Time-Out Scaling Register */
  __I   uint8_t                        Reserved5[0x18];
  __IO  uint32_t                       I2C_WAKE_STS;       /**< Offset: 0x60 (R/W  32) WAKE STATUS Register */
  __IO  uint32_t                       I2C_WAKE_EN;        /**< Offset: 0x64 (R/W  32) WAKE ENABLE Register */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint8_t                        I2C_SLV_ADDR;       /**< Offset: 0x6C (R/W  8) This is the Slave Address Register.\n */
  __I   uint8_t                        Reserved7[0x03];
  __IO  uint8_t                        I2C_PRM_STS;        /**< Offset: 0x70 (R/W  8) This is the Promiscuous Interrupt Register. This register bit will be functional only in Promiscuous mode.\n */
  __I   uint8_t                        Reserved8[0x03];
  __IO  uint8_t                        I2C_PRM_IEN;        /**< Offset: 0x74 (R/W  8) This is the Promiscuous Interrupt Enable Register.\n */
  __I   uint8_t                        Reserved9[0x03];
  __IO  uint8_t                        I2C_PRM_CTRL;       /**< Offset: 0x78 (R/W  8) This is the Promiscuous Control Register. This register is functional only in Promiscuous mode.\n */
} i2c_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC1712H_S2_SX_I2C_COMPONENT_H_ */
