/*
 * Component description for DMA_CHAN00
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
#ifndef _CEC_DMA_CHAN00_COMPONENT_H_
#define _CEC_DMA_CHAN00_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR DMA_CHAN00                                   */
/* ************************************************************************** */

/* -------- DMA_CHAN00_ACTIVATE : (DMA_CHAN00 Offset: 0x00) (R/W 8) Enable this channel for operation. The DMA Main Control: Activate must also be enabled for this channel to be operational. -------- */
#define DMA_CHAN00_ACTIVATE_RESETVALUE        _UINT8_(0x00)                                        /*  (DMA_CHAN00_ACTIVATE) Enable this channel for operation. The DMA Main Control: Activate must also be enabled for this channel to be operational.  Reset Value */

#define DMA_CHAN00_ACTIVATE_CHN_Pos           _UINT8_(0)                                           /* (DMA_CHAN00_ACTIVATE) Enable this channel for operation. The DMA Main Control:Activate must also be enabled for this channel to be operational.                  1=Enable channel(block). Each individual channel must be enabled separately.                  0=Disable channel(block). Position */
#define DMA_CHAN00_ACTIVATE_CHN_Msk           (_UINT8_(0x1) << DMA_CHAN00_ACTIVATE_CHN_Pos)        /* (DMA_CHAN00_ACTIVATE) Enable this channel for operation. The DMA Main Control:Activate must also be enabled for this channel to be operational.                  1=Enable channel(block). Each individual channel must be enabled separately.                  0=Disable channel(block). Mask */
#define DMA_CHAN00_ACTIVATE_CHN(value)        (DMA_CHAN00_ACTIVATE_CHN_Msk & (_UINT8_(value) << DMA_CHAN00_ACTIVATE_CHN_Pos)) /* Assigment of value for CHN in the DMA_CHAN00_ACTIVATE register */
#define DMA_CHAN00_ACTIVATE_Msk               _UINT8_(0x01)                                        /* (DMA_CHAN00_ACTIVATE) Register Mask  */


/* -------- DMA_CHAN00_MSTART : (DMA_CHAN00 Offset: 0x04) (R/W 32) This is the starting address for the Memory device. -------- */
#define DMA_CHAN00_MSTART_RESETVALUE          _UINT32_(0x00)                                       /*  (DMA_CHAN00_MSTART) This is the starting address for the Memory device.  Reset Value */

#define DMA_CHAN00_MSTART_Msk                 _UINT32_(0x00000000)                                 /* (DMA_CHAN00_MSTART) Register Mask  */


/* -------- DMA_CHAN00_MEND : (DMA_CHAN00 Offset: 0x08) (R/W 32) This is the ending address for the Memory device. -------- */
#define DMA_CHAN00_MEND_RESETVALUE            _UINT32_(0x00)                                       /*  (DMA_CHAN00_MEND) This is the ending address for the Memory device.  Reset Value */

#define DMA_CHAN00_MEND_Msk                   _UINT32_(0x00000000)                                 /* (DMA_CHAN00_MEND) Register Mask  */


/* -------- DMA_CHAN00_DSTART : (DMA_CHAN00 Offset: 0x0C) (R/W 32) This is the Master Device address. -------- */
#define DMA_CHAN00_DSTART_RESETVALUE          _UINT32_(0x00)                                       /*  (DMA_CHAN00_DSTART) This is the Master Device address.  Reset Value */

#define DMA_CHAN00_DSTART_Msk                 _UINT32_(0x00000000)                                 /* (DMA_CHAN00_DSTART) Register Mask  */


/* -------- DMA_CHAN00_CTRL : (DMA_CHAN00 Offset: 0x10) (R/W 32) DMA Channel N Control -------- */
#define DMA_CHAN00_CTRL_RESETVALUE            _UINT32_(0x00)                                       /*  (DMA_CHAN00_CTRL) DMA Channel N Control  Reset Value */

#define DMA_CHAN00_CTRL_RUN_Pos               _UINT32_(0)                                          /* (DMA_CHAN00_CTRL) This is a control field. Note: This bit only applies to Hardware Flow Control mode.                  1= This channel is enabled and will service transfer requests                  0=This channel is disabled. All transfer requests are ignored. Position */
#define DMA_CHAN00_CTRL_RUN_Msk               (_UINT32_(0x1) << DMA_CHAN00_CTRL_RUN_Pos)           /* (DMA_CHAN00_CTRL) This is a control field. Note: This bit only applies to Hardware Flow Control mode.                  1= This channel is enabled and will service transfer requests                  0=This channel is disabled. All transfer requests are ignored. Mask */
#define DMA_CHAN00_CTRL_RUN(value)            (DMA_CHAN00_CTRL_RUN_Msk & (_UINT32_(value) << DMA_CHAN00_CTRL_RUN_Pos)) /* Assigment of value for RUN in the DMA_CHAN00_CTRL register */
#define DMA_CHAN00_CTRL_REQ_Pos               _UINT32_(1)                                          /* (DMA_CHAN00_CTRL) This is a status field.                  1= There is a transfer request from the Master Device                  0= There is no transfer request from the Master Device Position */
#define DMA_CHAN00_CTRL_REQ_Msk               (_UINT32_(0x1) << DMA_CHAN00_CTRL_REQ_Pos)           /* (DMA_CHAN00_CTRL) This is a status field.                  1= There is a transfer request from the Master Device                  0= There is no transfer request from the Master Device Mask */
#define DMA_CHAN00_CTRL_REQ(value)            (DMA_CHAN00_CTRL_REQ_Msk & (_UINT32_(value) << DMA_CHAN00_CTRL_REQ_Pos)) /* Assigment of value for REQ in the DMA_CHAN00_CTRL register */
#define DMA_CHAN00_CTRL_DONE_Pos              _UINT32_(2)                                          /* (DMA_CHAN00_CTRL) This is a status signal. It is only valid while DMA Channel Control: Run is Enabled.                   This is the inverse of the DMA Channel Control: Busy field, except this is qualified with the DMA Channel Control:Run field.                  1=Channel is done                  0=Channel is not done or it is OFF Position */
#define DMA_CHAN00_CTRL_DONE_Msk              (_UINT32_(0x1) << DMA_CHAN00_CTRL_DONE_Pos)          /* (DMA_CHAN00_CTRL) This is a status signal. It is only valid while DMA Channel Control: Run is Enabled.                   This is the inverse of the DMA Channel Control: Busy field, except this is qualified with the DMA Channel Control:Run field.                  1=Channel is done                  0=Channel is not done or it is OFF Mask */
#define DMA_CHAN00_CTRL_DONE(value)           (DMA_CHAN00_CTRL_DONE_Msk & (_UINT32_(value) << DMA_CHAN00_CTRL_DONE_Pos)) /* Assigment of value for DONE in the DMA_CHAN00_CTRL register */
#define DMA_CHAN00_CTRL_STS_Pos               _UINT32_(3)                                          /* (DMA_CHAN00_CTRL) This is a status signal. The status decode is listed in priority order with the highest priority first.                  3: Error detected by the DMA                  2: The DMA Channel is externally done, in that the Device has terminated the transfer over the Hardware Flow Control through the Port dma_term                  1: The DMA Channel is locally done, in that Memory Start Address equals Memory End Address                  0: DMA Channel Control:Run is Disabled (0x0) Position */
#define DMA_CHAN00_CTRL_STS_Msk               (_UINT32_(0x3) << DMA_CHAN00_CTRL_STS_Pos)           /* (DMA_CHAN00_CTRL) This is a status signal. The status decode is listed in priority order with the highest priority first.                  3: Error detected by the DMA                  2: The DMA Channel is externally done, in that the Device has terminated the transfer over the Hardware Flow Control through the Port dma_term                  1: The DMA Channel is locally done, in that Memory Start Address equals Memory End Address                  0: DMA Channel Control:Run is Disabled (0x0) Mask */
#define DMA_CHAN00_CTRL_STS(value)            (DMA_CHAN00_CTRL_STS_Msk & (_UINT32_(value) << DMA_CHAN00_CTRL_STS_Pos)) /* Assigment of value for STS in the DMA_CHAN00_CTRL register */
#define   DMA_CHAN00_CTRL_STS_ERROR_Val       _UINT32_(0x3)                                        /* (DMA_CHAN00_CTRL) 3: Error detected by the DMA  */
#define   DMA_CHAN00_CTRL_STS_EXT_DONE_Val    _UINT32_(0x2)                                        /* (DMA_CHAN00_CTRL) 2: The DMA Channel is externally done, in that the Device has terminated the transfer over the Hardware Flow Control through the Port dma_term  */
#define   DMA_CHAN00_CTRL_STS_LOC_DONE_Val    _UINT32_(0x1)                                        /* (DMA_CHAN00_CTRL) 1: The DMA Channel is locally done, in that Memory Start Address equals Memory End Address  */
#define   DMA_CHAN00_CTRL_STS_DIS_Val         _UINT32_(0x0)                                        /* (DMA_CHAN00_CTRL) 0: DMA Channel Control:Run is Disabled (0x0)  */
#define DMA_CHAN00_CTRL_STS_ERROR             (DMA_CHAN00_CTRL_STS_ERROR_Val << DMA_CHAN00_CTRL_STS_Pos) /* (DMA_CHAN00_CTRL) 3: Error detected by the DMA Position  */
#define DMA_CHAN00_CTRL_STS_EXT_DONE          (DMA_CHAN00_CTRL_STS_EXT_DONE_Val << DMA_CHAN00_CTRL_STS_Pos) /* (DMA_CHAN00_CTRL) 2: The DMA Channel is externally done, in that the Device has terminated the transfer over the Hardware Flow Control through the Port dma_term Position  */
#define DMA_CHAN00_CTRL_STS_LOC_DONE          (DMA_CHAN00_CTRL_STS_LOC_DONE_Val << DMA_CHAN00_CTRL_STS_Pos) /* (DMA_CHAN00_CTRL) 1: The DMA Channel is locally done, in that Memory Start Address equals Memory End Address Position  */
#define DMA_CHAN00_CTRL_STS_DIS               (DMA_CHAN00_CTRL_STS_DIS_Val << DMA_CHAN00_CTRL_STS_Pos) /* (DMA_CHAN00_CTRL) 0: DMA Channel Control:Run is Disabled (0x0) Position  */
#define DMA_CHAN00_CTRL_BUSY_Pos              _UINT32_(5)                                          /* (DMA_CHAN00_CTRL) This is a status signal.                  1=The DMA Channel is busy (FSM is not IDLE)                  0=The DMA Channel is not busy (FSM is IDLE) Position */
#define DMA_CHAN00_CTRL_BUSY_Msk              (_UINT32_(0x1) << DMA_CHAN00_CTRL_BUSY_Pos)          /* (DMA_CHAN00_CTRL) This is a status signal.                  1=The DMA Channel is busy (FSM is not IDLE)                  0=The DMA Channel is not busy (FSM is IDLE) Mask */
#define DMA_CHAN00_CTRL_BUSY(value)           (DMA_CHAN00_CTRL_BUSY_Msk & (_UINT32_(value) << DMA_CHAN00_CTRL_BUSY_Pos)) /* Assigment of value for BUSY in the DMA_CHAN00_CTRL register */
#define DMA_CHAN00_CTRL_TX_DIR_Pos            _UINT32_(8)                                          /* (DMA_CHAN00_CTRL) This determines the direction of the DMA Transfer.                  1=Data Packet Read from Memory Start Address followed by Data Packet Write to Device Address                  0=Data Packet Read from Device Address followed by Data Packet Write to Memory Start Address Position */
#define DMA_CHAN00_CTRL_TX_DIR_Msk            (_UINT32_(0x1) << DMA_CHAN00_CTRL_TX_DIR_Pos)        /* (DMA_CHAN00_CTRL) This determines the direction of the DMA Transfer.                  1=Data Packet Read from Memory Start Address followed by Data Packet Write to Device Address                  0=Data Packet Read from Device Address followed by Data Packet Write to Memory Start Address Mask */
#define DMA_CHAN00_CTRL_TX_DIR(value)         (DMA_CHAN00_CTRL_TX_DIR_Msk & (_UINT32_(value) << DMA_CHAN00_CTRL_TX_DIR_Pos)) /* Assigment of value for TX_DIR in the DMA_CHAN00_CTRL register */
#define DMA_CHAN00_CTRL_HW_FLOW_CTRL_DEV_Pos  _UINT32_(9)                                          /* (DMA_CHAN00_CTRL) This is the device that is connected to this channel as its Hardware Flow Control master.                  The Flow Control Interface is a bus with each master concatenated onto it.                  This selects which bus index of the concatenated Flow Control Interface bus is targeted towards this channel.                  The Flow Control Interface Port list is dma_req, dma_term, and dma_done. Position */
#define DMA_CHAN00_CTRL_HW_FLOW_CTRL_DEV_Msk  (_UINT32_(0x7F) << DMA_CHAN00_CTRL_HW_FLOW_CTRL_DEV_Pos) /* (DMA_CHAN00_CTRL) This is the device that is connected to this channel as its Hardware Flow Control master.                  The Flow Control Interface is a bus with each master concatenated onto it.                  This selects which bus index of the concatenated Flow Control Interface bus is targeted towards this channel.                  The Flow Control Interface Port list is dma_req, dma_term, and dma_done. Mask */
#define DMA_CHAN00_CTRL_HW_FLOW_CTRL_DEV(value) (DMA_CHAN00_CTRL_HW_FLOW_CTRL_DEV_Msk & (_UINT32_(value) << DMA_CHAN00_CTRL_HW_FLOW_CTRL_DEV_Pos)) /* Assigment of value for HW_FLOW_CTRL_DEV in the DMA_CHAN00_CTRL register */
#define DMA_CHAN00_CTRL_INC_MEM_ADDR_Pos      _UINT32_(16)                                         /* (DMA_CHAN00_CTRL) This will enable an auto-increment to the DMA Channel Memory Address.                  1=Increment the DMA Channel Memory Address by DMA Channel Control:Transfer Size after every Data Packet transfer                  0=Do nothing Position */
#define DMA_CHAN00_CTRL_INC_MEM_ADDR_Msk      (_UINT32_(0x1) << DMA_CHAN00_CTRL_INC_MEM_ADDR_Pos)  /* (DMA_CHAN00_CTRL) This will enable an auto-increment to the DMA Channel Memory Address.                  1=Increment the DMA Channel Memory Address by DMA Channel Control:Transfer Size after every Data Packet transfer                  0=Do nothing Mask */
#define DMA_CHAN00_CTRL_INC_MEM_ADDR(value)   (DMA_CHAN00_CTRL_INC_MEM_ADDR_Msk & (_UINT32_(value) << DMA_CHAN00_CTRL_INC_MEM_ADDR_Pos)) /* Assigment of value for INC_MEM_ADDR in the DMA_CHAN00_CTRL register */
#define DMA_CHAN00_CTRL_INC_DEV_ADDR_Pos      _UINT32_(17)                                         /* (DMA_CHAN00_CTRL) This will enable an auto-increment to the DMA Channel Device Address.                  1: Increment the DMA Channel Device Address by DMA Channel Control:Transfer Size after every Data Packet transfer                  0: Do nothing Position */
#define DMA_CHAN00_CTRL_INC_DEV_ADDR_Msk      (_UINT32_(0x1) << DMA_CHAN00_CTRL_INC_DEV_ADDR_Pos)  /* (DMA_CHAN00_CTRL) This will enable an auto-increment to the DMA Channel Device Address.                  1: Increment the DMA Channel Device Address by DMA Channel Control:Transfer Size after every Data Packet transfer                  0: Do nothing Mask */
#define DMA_CHAN00_CTRL_INC_DEV_ADDR(value)   (DMA_CHAN00_CTRL_INC_DEV_ADDR_Msk & (_UINT32_(value) << DMA_CHAN00_CTRL_INC_DEV_ADDR_Pos)) /* Assigment of value for INC_DEV_ADDR in the DMA_CHAN00_CTRL register */
#define DMA_CHAN00_CTRL_LOCK_Pos              _UINT32_(18)                                         /* (DMA_CHAN00_CTRL) This is used to lock the arbitration of the Channel Arbiter on this channel once this channel is granted. Once this is locked, it will remain on the arbiter until it has completed it transfer (either the Transfer Aborted, Transfer Done or Transfer Terminated conditions). Position */
#define DMA_CHAN00_CTRL_LOCK_Msk              (_UINT32_(0x1) << DMA_CHAN00_CTRL_LOCK_Pos)          /* (DMA_CHAN00_CTRL) This is used to lock the arbitration of the Channel Arbiter on this channel once this channel is granted. Once this is locked, it will remain on the arbiter until it has completed it transfer (either the Transfer Aborted, Transfer Done or Transfer Terminated conditions). Mask */
#define DMA_CHAN00_CTRL_LOCK(value)           (DMA_CHAN00_CTRL_LOCK_Msk & (_UINT32_(value) << DMA_CHAN00_CTRL_LOCK_Pos)) /* Assigment of value for LOCK in the DMA_CHAN00_CTRL register */
#define DMA_CHAN00_CTRL_DIS_HW_FLOW_CTRL_Pos  _UINT32_(19)                                         /* (DMA_CHAN00_CTRL) This will Disable the Hardware Flow Control. When disabled, any DMA Master device attempting to communicate to the DMA over the DMA Flow Control Interface (Ports: dma_req, dma_term, and dma_done) will be ignored. This should be set before using the DMA channel in Firmware Flow Control mode. Position */
#define DMA_CHAN00_CTRL_DIS_HW_FLOW_CTRL_Msk  (_UINT32_(0x1) << DMA_CHAN00_CTRL_DIS_HW_FLOW_CTRL_Pos) /* (DMA_CHAN00_CTRL) This will Disable the Hardware Flow Control. When disabled, any DMA Master device attempting to communicate to the DMA over the DMA Flow Control Interface (Ports: dma_req, dma_term, and dma_done) will be ignored. This should be set before using the DMA channel in Firmware Flow Control mode. Mask */
#define DMA_CHAN00_CTRL_DIS_HW_FLOW_CTRL(value) (DMA_CHAN00_CTRL_DIS_HW_FLOW_CTRL_Msk & (_UINT32_(value) << DMA_CHAN00_CTRL_DIS_HW_FLOW_CTRL_Pos)) /* Assigment of value for DIS_HW_FLOW_CTRL in the DMA_CHAN00_CTRL register */
#define DMA_CHAN00_CTRL_TRANS_SIZE_Pos        _UINT32_(20)                                         /* (DMA_CHAN00_CTRL) This is the transfer size in Bytes of each Data Packet transfer.                  Note: The transfer size must be a legal AMBA transfer size. Valid sizes are 1, 2 and 4 Bytes. Position */
#define DMA_CHAN00_CTRL_TRANS_SIZE_Msk        (_UINT32_(0x7) << DMA_CHAN00_CTRL_TRANS_SIZE_Pos)    /* (DMA_CHAN00_CTRL) This is the transfer size in Bytes of each Data Packet transfer.                  Note: The transfer size must be a legal AMBA transfer size. Valid sizes are 1, 2 and 4 Bytes. Mask */
#define DMA_CHAN00_CTRL_TRANS_SIZE(value)     (DMA_CHAN00_CTRL_TRANS_SIZE_Msk & (_UINT32_(value) << DMA_CHAN00_CTRL_TRANS_SIZE_Pos)) /* Assigment of value for TRANS_SIZE in the DMA_CHAN00_CTRL register */
#define DMA_CHAN00_CTRL_TRANS_GO_Pos          _UINT32_(24)                                         /* (DMA_CHAN00_CTRL) This is used for the Firmware Flow Control DMA transfer. Position */
#define DMA_CHAN00_CTRL_TRANS_GO_Msk          (_UINT32_(0x1) << DMA_CHAN00_CTRL_TRANS_GO_Pos)      /* (DMA_CHAN00_CTRL) This is used for the Firmware Flow Control DMA transfer. Mask */
#define DMA_CHAN00_CTRL_TRANS_GO(value)       (DMA_CHAN00_CTRL_TRANS_GO_Msk & (_UINT32_(value) << DMA_CHAN00_CTRL_TRANS_GO_Pos)) /* Assigment of value for TRANS_GO in the DMA_CHAN00_CTRL register */
#define DMA_CHAN00_CTRL_TRANS_ABORT_Pos       _UINT32_(25)                                         /* (DMA_CHAN00_CTRL) This is used to abort the current transfer on this DMA Channel. The aborted transfer will be forced to terminate immediately. Position */
#define DMA_CHAN00_CTRL_TRANS_ABORT_Msk       (_UINT32_(0x1) << DMA_CHAN00_CTRL_TRANS_ABORT_Pos)   /* (DMA_CHAN00_CTRL) This is used to abort the current transfer on this DMA Channel. The aborted transfer will be forced to terminate immediately. Mask */
#define DMA_CHAN00_CTRL_TRANS_ABORT(value)    (DMA_CHAN00_CTRL_TRANS_ABORT_Msk & (_UINT32_(value) << DMA_CHAN00_CTRL_TRANS_ABORT_Pos)) /* Assigment of value for TRANS_ABORT in the DMA_CHAN00_CTRL register */
#define DMA_CHAN00_CTRL_Msk                   _UINT32_(0x037FFF3F)                                 /* (DMA_CHAN00_CTRL) Register Mask  */


/* -------- DMA_CHAN00_ISTS : (DMA_CHAN00 Offset: 0x14) (R/W 8) DMA Channel N Interrupt Status -------- */
#define DMA_CHAN00_ISTS_RESETVALUE            _UINT8_(0x00)                                        /*  (DMA_CHAN00_ISTS) DMA Channel N Interrupt Status  Reset Value */

#define DMA_CHAN00_ISTS_BUS_ERR_Pos           _UINT8_(0)                                           /* (DMA_CHAN00_ISTS) This is an interrupt source register. This flags when there is an Error detected over the internal 32-bit Bus.                  1: Error detected. (R/WC) Position */
#define DMA_CHAN00_ISTS_BUS_ERR_Msk           (_UINT8_(0x1) << DMA_CHAN00_ISTS_BUS_ERR_Pos)        /* (DMA_CHAN00_ISTS) This is an interrupt source register. This flags when there is an Error detected over the internal 32-bit Bus.                  1: Error detected. (R/WC) Mask */
#define DMA_CHAN00_ISTS_BUS_ERR(value)        (DMA_CHAN00_ISTS_BUS_ERR_Msk & (_UINT8_(value) << DMA_CHAN00_ISTS_BUS_ERR_Pos)) /* Assigment of value for BUS_ERR in the DMA_CHAN00_ISTS register */
#define DMA_CHAN00_ISTS_FLOW_CTRL_Pos         _UINT8_(1)                                           /* (DMA_CHAN00_ISTS) This is an interrupt source register. This flags when the DMA Channel has encountered a Hardware Flow Control Request     after the DMA Channel has completed the transfer. This means the Master Device is attempting to overflow the DMA.                  1=Hardware Flow Control is requesting after the transfer has completed                  0=No Hardware Flow Control event Position */
#define DMA_CHAN00_ISTS_FLOW_CTRL_Msk         (_UINT8_(0x1) << DMA_CHAN00_ISTS_FLOW_CTRL_Pos)      /* (DMA_CHAN00_ISTS) This is an interrupt source register. This flags when the DMA Channel has encountered a Hardware Flow Control Request     after the DMA Channel has completed the transfer. This means the Master Device is attempting to overflow the DMA.                  1=Hardware Flow Control is requesting after the transfer has completed                  0=No Hardware Flow Control event Mask */
#define DMA_CHAN00_ISTS_FLOW_CTRL(value)      (DMA_CHAN00_ISTS_FLOW_CTRL_Msk & (_UINT8_(value) << DMA_CHAN00_ISTS_FLOW_CTRL_Pos)) /* Assigment of value for FLOW_CTRL in the DMA_CHAN00_ISTS register */
#define DMA_CHAN00_ISTS_DONE_Pos              _UINT8_(2)                                           /* (DMA_CHAN00_ISTS) This is an interrupt source register. This flags when the DMA Channel has completed a transfer successfully on its side.     A completed transfer is defined as when the DMA Channel reaches its limit; Memory Start Address equals Memory End Address.     A completion due to a Hardware Flow Control Terminate will not flag this interrupt.                  1=Memory Start Address equals Memory End Address                  0=Memory Start Address does not equal Memory End Address Position */
#define DMA_CHAN00_ISTS_DONE_Msk              (_UINT8_(0x1) << DMA_CHAN00_ISTS_DONE_Pos)           /* (DMA_CHAN00_ISTS) This is an interrupt source register. This flags when the DMA Channel has completed a transfer successfully on its side.     A completed transfer is defined as when the DMA Channel reaches its limit; Memory Start Address equals Memory End Address.     A completion due to a Hardware Flow Control Terminate will not flag this interrupt.                  1=Memory Start Address equals Memory End Address                  0=Memory Start Address does not equal Memory End Address Mask */
#define DMA_CHAN00_ISTS_DONE(value)           (DMA_CHAN00_ISTS_DONE_Msk & (_UINT8_(value) << DMA_CHAN00_ISTS_DONE_Pos)) /* Assigment of value for DONE in the DMA_CHAN00_ISTS register */
#define DMA_CHAN00_ISTS_Msk                   _UINT8_(0x07)                                        /* (DMA_CHAN00_ISTS) Register Mask  */


/* -------- DMA_CHAN00_IEN : (DMA_CHAN00 Offset: 0x18) (R/W 8) DMA CHANNEL N INTERRUPT ENABLE -------- */
#define DMA_CHAN00_IEN_RESETVALUE             _UINT8_(0x00)                                        /*  (DMA_CHAN00_IEN) DMA CHANNEL N INTERRUPT ENABLE  Reset Value */

#define DMA_CHAN00_IEN_STS_EN_BUS_ERR_Pos     _UINT8_(0)                                           /* (DMA_CHAN00_IEN) This is an interrupt enable for DMA Channel Interrupt:Status Bus Error.                  1=Enable Interrupt                  0=Disable Interrupt Position */
#define DMA_CHAN00_IEN_STS_EN_BUS_ERR_Msk     (_UINT8_(0x1) << DMA_CHAN00_IEN_STS_EN_BUS_ERR_Pos)  /* (DMA_CHAN00_IEN) This is an interrupt enable for DMA Channel Interrupt:Status Bus Error.                  1=Enable Interrupt                  0=Disable Interrupt Mask */
#define DMA_CHAN00_IEN_STS_EN_BUS_ERR(value)  (DMA_CHAN00_IEN_STS_EN_BUS_ERR_Msk & (_UINT8_(value) << DMA_CHAN00_IEN_STS_EN_BUS_ERR_Pos)) /* Assigment of value for STS_EN_BUS_ERR in the DMA_CHAN00_IEN register */
#define DMA_CHAN00_IEN_STS_EN_FLOW_CTRL_Pos   _UINT8_(1)                                           /* (DMA_CHAN00_IEN) This is an interrupt enable for DMA Channel Interrupt:Status Flow Control Error.                  1=Enable Interrupt                  0=Disable Interrupt Position */
#define DMA_CHAN00_IEN_STS_EN_FLOW_CTRL_Msk   (_UINT8_(0x1) << DMA_CHAN00_IEN_STS_EN_FLOW_CTRL_Pos) /* (DMA_CHAN00_IEN) This is an interrupt enable for DMA Channel Interrupt:Status Flow Control Error.                  1=Enable Interrupt                  0=Disable Interrupt Mask */
#define DMA_CHAN00_IEN_STS_EN_FLOW_CTRL(value) (DMA_CHAN00_IEN_STS_EN_FLOW_CTRL_Msk & (_UINT8_(value) << DMA_CHAN00_IEN_STS_EN_FLOW_CTRL_Pos)) /* Assigment of value for STS_EN_FLOW_CTRL in the DMA_CHAN00_IEN register */
#define DMA_CHAN00_IEN_STS_EN_DONE_Pos        _UINT8_(2)                                           /* (DMA_CHAN00_IEN) This is an interrupt enable for DMA Channel Interrupt:Status Done.                  1=Enable Interrupt                  0=Disable Interrupt Position */
#define DMA_CHAN00_IEN_STS_EN_DONE_Msk        (_UINT8_(0x1) << DMA_CHAN00_IEN_STS_EN_DONE_Pos)     /* (DMA_CHAN00_IEN) This is an interrupt enable for DMA Channel Interrupt:Status Done.                  1=Enable Interrupt                  0=Disable Interrupt Mask */
#define DMA_CHAN00_IEN_STS_EN_DONE(value)     (DMA_CHAN00_IEN_STS_EN_DONE_Msk & (_UINT8_(value) << DMA_CHAN00_IEN_STS_EN_DONE_Pos)) /* Assigment of value for STS_EN_DONE in the DMA_CHAN00_IEN register */
#define DMA_CHAN00_IEN_Msk                    _UINT8_(0x07)                                        /* (DMA_CHAN00_IEN) Register Mask  */


/* -------- DMA_CHAN00_CRC_EN : (DMA_CHAN00 Offset: 0x20) (R/W 32) DMA CHANNEL N CRC ENABLE -------- */
#define DMA_CHAN00_CRC_EN_RESETVALUE          _UINT32_(0x00)                                       /*  (DMA_CHAN00_CRC_EN) DMA CHANNEL N CRC ENABLE  Reset Value */

#define DMA_CHAN00_CRC_EN_MODE_Pos            _UINT32_(0)                                          /* (DMA_CHAN00_CRC_EN) 1=Enable the calculation of CRC-32 for DMA Channel N     0=Disable the calculation of CRC-32 for DMA Channel N Position */
#define DMA_CHAN00_CRC_EN_MODE_Msk            (_UINT32_(0x1) << DMA_CHAN00_CRC_EN_MODE_Pos)        /* (DMA_CHAN00_CRC_EN) 1=Enable the calculation of CRC-32 for DMA Channel N     0=Disable the calculation of CRC-32 for DMA Channel N Mask */
#define DMA_CHAN00_CRC_EN_MODE(value)         (DMA_CHAN00_CRC_EN_MODE_Msk & (_UINT32_(value) << DMA_CHAN00_CRC_EN_MODE_Pos)) /* Assigment of value for MODE in the DMA_CHAN00_CRC_EN register */
#define DMA_CHAN00_CRC_EN_POST_TRANS_Pos      _UINT32_(1)                                          /* (DMA_CHAN00_CRC_EN) The bit enables the transfer of the calculated CRC-32 after the completion of the DMA transaction.     If the DMA transaction is aborted by either firmware or an internal bus error, the transfer will not occur.     If the target of the DMA transfer is a device and the device signaled the termination of the DMA transaction,     the CRC post transfer will not occur.     1=Enable the transfer of CRC-32 for DMA Channel N after the DMA transaction completes     0=Disable the automatic transfer of the CRC Position */
#define DMA_CHAN00_CRC_EN_POST_TRANS_Msk      (_UINT32_(0x1) << DMA_CHAN00_CRC_EN_POST_TRANS_Pos)  /* (DMA_CHAN00_CRC_EN) The bit enables the transfer of the calculated CRC-32 after the completion of the DMA transaction.     If the DMA transaction is aborted by either firmware or an internal bus error, the transfer will not occur.     If the target of the DMA transfer is a device and the device signaled the termination of the DMA transaction,     the CRC post transfer will not occur.     1=Enable the transfer of CRC-32 for DMA Channel N after the DMA transaction completes     0=Disable the automatic transfer of the CRC Mask */
#define DMA_CHAN00_CRC_EN_POST_TRANS(value)   (DMA_CHAN00_CRC_EN_POST_TRANS_Msk & (_UINT32_(value) << DMA_CHAN00_CRC_EN_POST_TRANS_Pos)) /* Assigment of value for POST_TRANS in the DMA_CHAN00_CRC_EN register */
#define DMA_CHAN00_CRC_EN_Msk                 _UINT32_(0x00000003)                                 /* (DMA_CHAN00_CRC_EN) Register Mask  */


/* -------- DMA_CHAN00_CRC_DATA : (DMA_CHAN00 Offset: 0x24) (R/W 32) DMA CHANNEL N CRC DATA -------- */
#define DMA_CHAN00_CRC_DATA_RESETVALUE        _UINT32_(0x00)                                       /*  (DMA_CHAN00_CRC_DATA) DMA CHANNEL N CRC DATA  Reset Value */

#define DMA_CHAN00_CRC_DATA_CRC_Pos           _UINT32_(0)                                          /* (DMA_CHAN00_CRC_DATA) Writes to this register initialize the CRC generator. Reads from this register return the output of the     CRC that is calculated from the data transferred by DMA Channel N. The output of the CRC generator is bit-reversed     and inverted on reads, as required by the CRC-32-IEEE definition. A CRC can be accumulated across multiple DMA transactions     on Channel N. If it is necessary to save the intermediate CRC value, the result of the read of this register must be     bit-reversed and inverted before being written back to this register. Position */
#define DMA_CHAN00_CRC_DATA_CRC_Msk           (_UINT32_(0xFFFFFFFF) << DMA_CHAN00_CRC_DATA_CRC_Pos) /* (DMA_CHAN00_CRC_DATA) Writes to this register initialize the CRC generator. Reads from this register return the output of the     CRC that is calculated from the data transferred by DMA Channel N. The output of the CRC generator is bit-reversed     and inverted on reads, as required by the CRC-32-IEEE definition. A CRC can be accumulated across multiple DMA transactions     on Channel N. If it is necessary to save the intermediate CRC value, the result of the read of this register must be     bit-reversed and inverted before being written back to this register. Mask */
#define DMA_CHAN00_CRC_DATA_CRC(value)        (DMA_CHAN00_CRC_DATA_CRC_Msk & (_UINT32_(value) << DMA_CHAN00_CRC_DATA_CRC_Pos)) /* Assigment of value for CRC in the DMA_CHAN00_CRC_DATA register */
#define DMA_CHAN00_CRC_DATA_Msk               _UINT32_(0xFFFFFFFF)                                 /* (DMA_CHAN00_CRC_DATA) Register Mask  */


/* -------- DMA_CHAN00_CRC_POST_STS : (DMA_CHAN00 Offset: 0x28) (R/W 32) DMA CHANNEL N CRC POST STATUS -------- */
#define DMA_CHAN00_CRC_POST_STS_RESETVALUE    _UINT32_(0x00)                                       /*  (DMA_CHAN00_CRC_POST_STS) DMA CHANNEL N CRC POST STATUS  Reset Value */

#define DMA_CHAN00_CRC_POST_STS_CRC_DONE_Pos  _UINT32_(0)                                          /* (DMA_CHAN00_CRC_POST_STS) This bit is set to '1b' when the CRC calculation has completed from either normal or forced termination.     It is cleared to '0b' when the DMA controller starts a new transfer on the channel. Position */
#define DMA_CHAN00_CRC_POST_STS_CRC_DONE_Msk  (_UINT32_(0x1) << DMA_CHAN00_CRC_POST_STS_CRC_DONE_Pos) /* (DMA_CHAN00_CRC_POST_STS) This bit is set to '1b' when the CRC calculation has completed from either normal or forced termination.     It is cleared to '0b' when the DMA controller starts a new transfer on the channel. Mask */
#define DMA_CHAN00_CRC_POST_STS_CRC_DONE(value) (DMA_CHAN00_CRC_POST_STS_CRC_DONE_Msk & (_UINT32_(value) << DMA_CHAN00_CRC_POST_STS_CRC_DONE_Pos)) /* Assigment of value for CRC_DONE in the DMA_CHAN00_CRC_POST_STS register */
#define DMA_CHAN00_CRC_POST_STS_CRC_RUNNING_Pos _UINT32_(1)                                          /* (DMA_CHAN00_CRC_POST_STS) This bit is set to '1b' when the DMA controller starts the post-transfer transmission of the CRC.     It is only set when the post-transfer is enabled by the CRC_POST_TRANSFER_ENABLE field. This bit is cleared     to '0b' when the post-transfer completes. Position */
#define DMA_CHAN00_CRC_POST_STS_CRC_RUNNING_Msk (_UINT32_(0x1) << DMA_CHAN00_CRC_POST_STS_CRC_RUNNING_Pos) /* (DMA_CHAN00_CRC_POST_STS) This bit is set to '1b' when the DMA controller starts the post-transfer transmission of the CRC.     It is only set when the post-transfer is enabled by the CRC_POST_TRANSFER_ENABLE field. This bit is cleared     to '0b' when the post-transfer completes. Mask */
#define DMA_CHAN00_CRC_POST_STS_CRC_RUNNING(value) (DMA_CHAN00_CRC_POST_STS_CRC_RUNNING_Msk & (_UINT32_(value) << DMA_CHAN00_CRC_POST_STS_CRC_RUNNING_Pos)) /* Assigment of value for CRC_RUNNING in the DMA_CHAN00_CRC_POST_STS register */
#define DMA_CHAN00_CRC_POST_STS_CRC_DATA_DONE_Pos _UINT32_(2)                                          /* (DMA_CHAN00_CRC_POST_STS) This bit is set to '1b' when the DMA controller has completed the post-transfer of the CRC data.     This bit is cleared to '0b' when the a new DMA transfer starts. Position */
#define DMA_CHAN00_CRC_POST_STS_CRC_DATA_DONE_Msk (_UINT32_(0x1) << DMA_CHAN00_CRC_POST_STS_CRC_DATA_DONE_Pos) /* (DMA_CHAN00_CRC_POST_STS) This bit is set to '1b' when the DMA controller has completed the post-transfer of the CRC data.     This bit is cleared to '0b' when the a new DMA transfer starts. Mask */
#define DMA_CHAN00_CRC_POST_STS_CRC_DATA_DONE(value) (DMA_CHAN00_CRC_POST_STS_CRC_DATA_DONE_Msk & (_UINT32_(value) << DMA_CHAN00_CRC_POST_STS_CRC_DATA_DONE_Pos)) /* Assigment of value for CRC_DATA_DONE in the DMA_CHAN00_CRC_POST_STS register */
#define DMA_CHAN00_CRC_POST_STS_CRC_DATA_READY_Pos _UINT32_(3)                                          /* (DMA_CHAN00_CRC_POST_STS) This bit is set to '1b' when the DMA controller is processing the post-transfer of the CRC data.     This bit is cleared to '0b' when the post-transfer completes. Position */
#define DMA_CHAN00_CRC_POST_STS_CRC_DATA_READY_Msk (_UINT32_(0x1) << DMA_CHAN00_CRC_POST_STS_CRC_DATA_READY_Pos) /* (DMA_CHAN00_CRC_POST_STS) This bit is set to '1b' when the DMA controller is processing the post-transfer of the CRC data.     This bit is cleared to '0b' when the post-transfer completes. Mask */
#define DMA_CHAN00_CRC_POST_STS_CRC_DATA_READY(value) (DMA_CHAN00_CRC_POST_STS_CRC_DATA_READY_Msk & (_UINT32_(value) << DMA_CHAN00_CRC_POST_STS_CRC_DATA_READY_Pos)) /* Assigment of value for CRC_DATA_READY in the DMA_CHAN00_CRC_POST_STS register */
#define DMA_CHAN00_CRC_POST_STS_Msk           _UINT32_(0x0000000F)                                 /* (DMA_CHAN00_CRC_POST_STS) Register Mask  */


/** \brief DMA_CHAN00 register offsets definitions */
#define DMA_CHAN00_ACTIVATE_REG_OFST   _UINT32_(0x00)      /* (DMA_CHAN00_ACTIVATE) Enable this channel for operation. The DMA Main Control: Activate must also be enabled for this channel to be operational. Offset */
#define DMA_CHAN00_MSTART_REG_OFST     _UINT32_(0x04)      /* (DMA_CHAN00_MSTART) This is the starting address for the Memory device. Offset */
#define DMA_CHAN00_MEND_REG_OFST       _UINT32_(0x08)      /* (DMA_CHAN00_MEND) This is the ending address for the Memory device. Offset */
#define DMA_CHAN00_DSTART_REG_OFST     _UINT32_(0x0C)      /* (DMA_CHAN00_DSTART) This is the Master Device address. Offset */
#define DMA_CHAN00_CTRL_REG_OFST       _UINT32_(0x10)      /* (DMA_CHAN00_CTRL) DMA Channel N Control Offset */
#define DMA_CHAN00_ISTS_REG_OFST       _UINT32_(0x14)      /* (DMA_CHAN00_ISTS) DMA Channel N Interrupt Status Offset */
#define DMA_CHAN00_IEN_REG_OFST        _UINT32_(0x18)      /* (DMA_CHAN00_IEN) DMA CHANNEL N INTERRUPT ENABLE Offset */
#define DMA_CHAN00_CRC_EN_REG_OFST     _UINT32_(0x20)      /* (DMA_CHAN00_CRC_EN) DMA CHANNEL N CRC ENABLE Offset */
#define DMA_CHAN00_CRC_DATA_REG_OFST   _UINT32_(0x24)      /* (DMA_CHAN00_CRC_DATA) DMA CHANNEL N CRC DATA Offset */
#define DMA_CHAN00_CRC_POST_STS_REG_OFST _UINT32_(0x28)      /* (DMA_CHAN00_CRC_POST_STS) DMA CHANNEL N CRC POST STATUS Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief DMA_CHAN00 register API structure */
typedef struct
{  /* DMA Channel 00 Registers */
  __IO  uint8_t                        DMA_CHAN00_ACTIVATE; /**< Offset: 0x00 (R/W  8) Enable this channel for operation. The DMA Main Control: Activate must also be enabled for this channel to be operational. */
  __I   uint8_t                        Reserved1[0x03];
  __IO  uint32_t                       DMA_CHAN00_MSTART;  /**< Offset: 0x04 (R/W  32) This is the starting address for the Memory device. */
  __IO  uint32_t                       DMA_CHAN00_MEND;    /**< Offset: 0x08 (R/W  32) This is the ending address for the Memory device. */
  __IO  uint32_t                       DMA_CHAN00_DSTART;  /**< Offset: 0x0C (R/W  32) This is the Master Device address. */
  __IO  uint32_t                       DMA_CHAN00_CTRL;    /**< Offset: 0x10 (R/W  32) DMA Channel N Control */
  __IO  uint8_t                        DMA_CHAN00_ISTS;    /**< Offset: 0x14 (R/W  8) DMA Channel N Interrupt Status */
  __I   uint8_t                        Reserved2[0x03];
  __IO  uint8_t                        DMA_CHAN00_IEN;     /**< Offset: 0x18 (R/W  8) DMA CHANNEL N INTERRUPT ENABLE */
  __I   uint8_t                        Reserved3[0x07];
  __IO  uint32_t                       DMA_CHAN00_CRC_EN;  /**< Offset: 0x20 (R/W  32) DMA CHANNEL N CRC ENABLE */
  __IO  uint32_t                       DMA_CHAN00_CRC_DATA; /**< Offset: 0x24 (R/W  32) DMA CHANNEL N CRC DATA */
  __IO  uint32_t                       DMA_CHAN00_CRC_POST_STS; /**< Offset: 0x28 (R/W  32) DMA CHANNEL N CRC POST STATUS */
} dma_chan00_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_DMA_CHAN00_COMPONENT_H_ */
