/*
 * Component description for VCI
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
#ifndef _CEC1702Q_VCI_COMPONENT_H_
#define _CEC1702Q_VCI_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR VCI                                          */
/* ************************************************************************** */

/* -------- VCI_CTRL_STS : (VCI Offset: 0x00) (R/W 32) VCI Register -------- */
#define VCI_CTRL_STS_RESETVALUE               _UINT32_(0x00)                                       /*  (VCI_CTRL_STS) VCI Register  Reset Value */

#define VCI_CTRL_STS_VCI_IN_Pos               _UINT32_(0)                                          /* (VCI_CTRL_STS) These bits provide the latched state of the associated VCI_IN# pin, if latching is enabled or the current state of the pin\n          if latching is not enabled. In both cases, the value is determined after the action of the VCI Polarity Register.\n          Note: The VCI_IN[6:0]# bits default to the state of their respective input pins. Position */
#define VCI_CTRL_STS_VCI_IN_Msk               (_UINT32_(0x7F) << VCI_CTRL_STS_VCI_IN_Pos)          /* (VCI_CTRL_STS) These bits provide the latched state of the associated VCI_IN# pin, if latching is enabled or the current state of the pin\n          if latching is not enabled. In both cases, the value is determined after the action of the VCI Polarity Register.\n          Note: The VCI_IN[6:0]# bits default to the state of their respective input pins. Mask */
#define VCI_CTRL_STS_VCI_IN(value)            (VCI_CTRL_STS_VCI_IN_Msk & (_UINT32_(value) << VCI_CTRL_STS_VCI_IN_Pos)) /* Assigment of value for VCI_IN in the VCI_CTRL_STS register */
#define VCI_CTRL_STS_VCI_OVRD_IN_Pos          _UINT32_(8)                                          /* (VCI_CTRL_STS) This bit provides the current status of the VCI_OVRD_IN pin.\n                   Note: The VCI_OVRD_IN bit defaults to the state of the respective input pin. Position */
#define VCI_CTRL_STS_VCI_OVRD_IN_Msk          (_UINT32_(0x1) << VCI_CTRL_STS_VCI_OVRD_IN_Pos)      /* (VCI_CTRL_STS) This bit provides the current status of the VCI_OVRD_IN pin.\n                   Note: The VCI_OVRD_IN bit defaults to the state of the respective input pin. Mask */
#define VCI_CTRL_STS_VCI_OVRD_IN(value)       (VCI_CTRL_STS_VCI_OVRD_IN_Msk & (_UINT32_(value) << VCI_CTRL_STS_VCI_OVRD_IN_Pos)) /* Assigment of value for VCI_OVRD_IN in the VCI_CTRL_STS register */
#define VCI_CTRL_STS_VCI_OUT_Pos              _UINT32_(9)                                          /* (VCI_CTRL_STS) This bit provides the current status of the VCI_OUT pin. Position */
#define VCI_CTRL_STS_VCI_OUT_Msk              (_UINT32_(0x1) << VCI_CTRL_STS_VCI_OUT_Pos)          /* (VCI_CTRL_STS) This bit provides the current status of the VCI_OUT pin. Mask */
#define VCI_CTRL_STS_VCI_OUT(value)           (VCI_CTRL_STS_VCI_OUT_Msk & (_UINT32_(value) << VCI_CTRL_STS_VCI_OUT_Pos)) /* Assigment of value for VCI_OUT in the VCI_CTRL_STS register */
#define VCI_CTRL_STS_VCI_FW_CTRL_Pos          _UINT32_(10)                                         /* (VCI_CTRL_STS) This bit can allow EC firmware to control the state of the VCI_OUT pin. For example, when VTR_PWRGD is asserted and the\n          FW_EXT bit is 1, clearing the VCI_FW_CNTRL bit de-asserts the active high VCI_OUT pin. BIOS must set this bit to 1 prior to setting\n                the FW_EXT bit to 1 on power up, in order to avoid glitches on the VCI_OUT pin. Position */
#define VCI_CTRL_STS_VCI_FW_CTRL_Msk          (_UINT32_(0x1) << VCI_CTRL_STS_VCI_FW_CTRL_Pos)      /* (VCI_CTRL_STS) This bit can allow EC firmware to control the state of the VCI_OUT pin. For example, when VTR_PWRGD is asserted and the\n          FW_EXT bit is 1, clearing the VCI_FW_CNTRL bit de-asserts the active high VCI_OUT pin. BIOS must set this bit to 1 prior to setting\n                the FW_EXT bit to 1 on power up, in order to avoid glitches on the VCI_OUT pin. Mask */
#define VCI_CTRL_STS_VCI_FW_CTRL(value)       (VCI_CTRL_STS_VCI_FW_CTRL_Msk & (_UINT32_(value) << VCI_CTRL_STS_VCI_FW_CTRL_Pos)) /* Assigment of value for VCI_FW_CTRL in the VCI_CTRL_STS register */
#define VCI_CTRL_STS_FW_EXT_Pos               _UINT32_(11)                                         /* (VCI_CTRL_STS) This bit controls selecting between the external VBAT-Powered Control Interface inputs, or the VCI_FW_CNTRL bit output to control the VCI_OUT pin.\n        1=VCI_OUT is determined by the VCI_FW_CNTRL field, when VTR is active\n                   0=VCI_OUT is determined by the external inputs.\n               Note: This bit used to be called GPO/nEXT. The name was changed to distinguish it from the BGPOs, which are elsewhere, and to remove a / in a bit name. Position */
#define VCI_CTRL_STS_FW_EXT_Msk               (_UINT32_(0x1) << VCI_CTRL_STS_FW_EXT_Pos)           /* (VCI_CTRL_STS) This bit controls selecting between the external VBAT-Powered Control Interface inputs, or the VCI_FW_CNTRL bit output to control the VCI_OUT pin.\n        1=VCI_OUT is determined by the VCI_FW_CNTRL field, when VTR is active\n                   0=VCI_OUT is determined by the external inputs.\n               Note: This bit used to be called GPO/nEXT. The name was changed to distinguish it from the BGPOs, which are elsewhere, and to remove a / in a bit name. Mask */
#define VCI_CTRL_STS_FW_EXT(value)            (VCI_CTRL_STS_FW_EXT_Msk & (_UINT32_(value) << VCI_CTRL_STS_FW_EXT_Pos)) /* Assigment of value for FW_EXT in the VCI_CTRL_STS register */
#define VCI_CTRL_STS_FLTRS_BYPASS_Pos         _UINT32_(12)                                         /* (VCI_CTRL_STS) The Filters Bypass bit is used to enable and disable the input filters on the VCI_IN# pins.\n         1=Filters disabled; 0=Filters enabled (default). Position */
#define VCI_CTRL_STS_FLTRS_BYPASS_Msk         (_UINT32_(0x1) << VCI_CTRL_STS_FLTRS_BYPASS_Pos)     /* (VCI_CTRL_STS) The Filters Bypass bit is used to enable and disable the input filters on the VCI_IN# pins.\n         1=Filters disabled; 0=Filters enabled (default). Mask */
#define VCI_CTRL_STS_FLTRS_BYPASS(value)      (VCI_CTRL_STS_FLTRS_BYPASS_Msk & (_UINT32_(value) << VCI_CTRL_STS_FLTRS_BYPASS_Pos)) /* Assigment of value for FLTRS_BYPASS in the VCI_CTRL_STS register */
#define VCI_CTRL_STS_WK_ALRM_Pos              _UINT32_(16)                                         /* (VCI_CTRL_STS) If enabled by WK_ALRM_LE, this bit is set to 1 if the Week Alarm signal is asserted. It is reset by writes to WK_ALRM_LS. Position */
#define VCI_CTRL_STS_WK_ALRM_Msk              (_UINT32_(0x1) << VCI_CTRL_STS_WK_ALRM_Pos)          /* (VCI_CTRL_STS) If enabled by WK_ALRM_LE, this bit is set to 1 if the Week Alarm signal is asserted. It is reset by writes to WK_ALRM_LS. Mask */
#define VCI_CTRL_STS_WK_ALRM(value)           (VCI_CTRL_STS_WK_ALRM_Msk & (_UINT32_(value) << VCI_CTRL_STS_WK_ALRM_Pos)) /* Assigment of value for WK_ALRM in the VCI_CTRL_STS register */
#define VCI_CTRL_STS_RTC_ALRM_Pos             _UINT32_(17)                                         /* (VCI_CTRL_STS) If enabled by RTC_ALRM_LE, this bit is set to 1 if the RTC Alarm signal is asserted. It is reset by writes to RTC_ALRM_LS. Position */
#define VCI_CTRL_STS_RTC_ALRM_Msk             (_UINT32_(0x1) << VCI_CTRL_STS_RTC_ALRM_Pos)         /* (VCI_CTRL_STS) If enabled by RTC_ALRM_LE, this bit is set to 1 if the RTC Alarm signal is asserted. It is reset by writes to RTC_ALRM_LS. Mask */
#define VCI_CTRL_STS_RTC_ALRM(value)          (VCI_CTRL_STS_RTC_ALRM_Msk & (_UINT32_(value) << VCI_CTRL_STS_RTC_ALRM_Pos)) /* Assigment of value for RTC_ALRM in the VCI_CTRL_STS register */
#define VCI_CTRL_STS_Msk                      _UINT32_(0x00031F7F)                                 /* (VCI_CTRL_STS) Register Mask  */


/* -------- VCI_LATCH_EN : (VCI Offset: 0x04) (R/W 32) Latch Enable Register -------- */
#define VCI_LATCH_EN_RESETVALUE               _UINT32_(0x30)                                       /*  (VCI_LATCH_EN) Latch Enable Register  Reset Value */

#define VCI_LATCH_EN_LE_Pos                   _UINT32_(0)                                          /* (VCI_LATCH_EN) Latching Enables. Latching occurs after the Polarity configuration, so a VCI_INi# pin is asserted when it is '0' if VCI_IN_POL is '0',\n       and asserted when it is '1' if VCI_IN_POL is '1'. For each bit in the field: \n          1=Enabled. Assertions of the VCI_INi# pin are held until the latch is reset by writing the corresponding LS bit\n          0=Not Enabled. The VCI_INi# signal is not latched but passed directly to the VCI_OUT logic Position */
#define VCI_LATCH_EN_LE_Msk                   (_UINT32_(0x7F) << VCI_LATCH_EN_LE_Pos)              /* (VCI_LATCH_EN) Latching Enables. Latching occurs after the Polarity configuration, so a VCI_INi# pin is asserted when it is '0' if VCI_IN_POL is '0',\n       and asserted when it is '1' if VCI_IN_POL is '1'. For each bit in the field: \n          1=Enabled. Assertions of the VCI_INi# pin are held until the latch is reset by writing the corresponding LS bit\n          0=Not Enabled. The VCI_INi# signal is not latched but passed directly to the VCI_OUT logic Mask */
#define VCI_LATCH_EN_LE(value)                (VCI_LATCH_EN_LE_Msk & (_UINT32_(value) << VCI_LATCH_EN_LE_Pos)) /* Assigment of value for LE in the VCI_LATCH_EN register */
#define VCI_LATCH_EN_WK_ALRM_LE_Pos           _UINT32_(16)                                         /* (VCI_LATCH_EN) Latch enable for the Week Alarm Power-Up signal.\n          1=Enabled. Assertions of the Week Alarm are held until the latch is reset by writing the corresponding LS bit\n        0=Not Enabled. The Week Alarm signal is not latched but passed directly to the VCI_OUT logic Position */
#define VCI_LATCH_EN_WK_ALRM_LE_Msk           (_UINT32_(0x1) << VCI_LATCH_EN_WK_ALRM_LE_Pos)       /* (VCI_LATCH_EN) Latch enable for the Week Alarm Power-Up signal.\n          1=Enabled. Assertions of the Week Alarm are held until the latch is reset by writing the corresponding LS bit\n        0=Not Enabled. The Week Alarm signal is not latched but passed directly to the VCI_OUT logic Mask */
#define VCI_LATCH_EN_WK_ALRM_LE(value)        (VCI_LATCH_EN_WK_ALRM_LE_Msk & (_UINT32_(value) << VCI_LATCH_EN_WK_ALRM_LE_Pos)) /* Assigment of value for WK_ALRM_LE in the VCI_LATCH_EN register */
#define VCI_LATCH_EN_RTC_ALRM_LE_Pos          _UINT32_(17)                                         /* (VCI_LATCH_EN) Latch enable for the RTC Power-Up signal.\n             1=Enabled. Assertions of the RTC Alarm are held until the latch is reset by writing the corresponding LS bit\n           0=Not Enabled. The RTC Alarm signal is not latched but passed directly to the VCI_OUT logic Position */
#define VCI_LATCH_EN_RTC_ALRM_LE_Msk          (_UINT32_(0x1) << VCI_LATCH_EN_RTC_ALRM_LE_Pos)      /* (VCI_LATCH_EN) Latch enable for the RTC Power-Up signal.\n             1=Enabled. Assertions of the RTC Alarm are held until the latch is reset by writing the corresponding LS bit\n           0=Not Enabled. The RTC Alarm signal is not latched but passed directly to the VCI_OUT logic Mask */
#define VCI_LATCH_EN_RTC_ALRM_LE(value)       (VCI_LATCH_EN_RTC_ALRM_LE_Msk & (_UINT32_(value) << VCI_LATCH_EN_RTC_ALRM_LE_Pos)) /* Assigment of value for RTC_ALRM_LE in the VCI_LATCH_EN register */
#define VCI_LATCH_EN_Msk                      _UINT32_(0x0003007F)                                 /* (VCI_LATCH_EN) Register Mask  */


/* -------- VCI_LATCH_RST : (VCI Offset: 0x08) (R/W 32) Latch Resets Register -------- */
#define VCI_LATCH_RST_RESETVALUE              _UINT32_(0x00)                                       /*  (VCI_LATCH_RST) Latch Resets Register  Reset Value */

#define VCI_LATCH_RST_LS_Pos                  _UINT32_(0)                                          /* (VCI_LATCH_RST) Latch Resets. When a Latch Resets bit is written with a '1', the corresponding VCI_INi# latch is de-asserted ('1'). The VCI_INi#\n         input to the latch has priority over the Latch Reset input, so firmware cannot reset the latch while the VCI_INi# pin is asserted. Firmware\n                 should sample the state of the pin in the VCI Register before attempting to reset the latch. As noted in the Latch Enable Register,\n                 the assertion level is determined by the VCI_IN_POL bit. Reads of this register are undefined. Position */
#define VCI_LATCH_RST_LS_Msk                  (_UINT32_(0x7F) << VCI_LATCH_RST_LS_Pos)             /* (VCI_LATCH_RST) Latch Resets. When a Latch Resets bit is written with a '1', the corresponding VCI_INi# latch is de-asserted ('1'). The VCI_INi#\n         input to the latch has priority over the Latch Reset input, so firmware cannot reset the latch while the VCI_INi# pin is asserted. Firmware\n                 should sample the state of the pin in the VCI Register before attempting to reset the latch. As noted in the Latch Enable Register,\n                 the assertion level is determined by the VCI_IN_POL bit. Reads of this register are undefined. Mask */
#define VCI_LATCH_RST_LS(value)               (VCI_LATCH_RST_LS_Msk & (_UINT32_(value) << VCI_LATCH_RST_LS_Pos)) /* Assigment of value for LS in the VCI_LATCH_RST register */
#define VCI_LATCH_RST_WK_ALRM_LS_Pos          _UINT32_(16)                                         /* (VCI_LATCH_RST) Week Alarm Latch Reset. When this bit is written with a '1', the Week Alarm Event latch is reset.\n          The Week Alarm input to the latch has priority over the Reset input Reads of this register are undefined. Position */
#define VCI_LATCH_RST_WK_ALRM_LS_Msk          (_UINT32_(0x1) << VCI_LATCH_RST_WK_ALRM_LS_Pos)      /* (VCI_LATCH_RST) Week Alarm Latch Reset. When this bit is written with a '1', the Week Alarm Event latch is reset.\n          The Week Alarm input to the latch has priority over the Reset input Reads of this register are undefined. Mask */
#define VCI_LATCH_RST_WK_ALRM_LS(value)       (VCI_LATCH_RST_WK_ALRM_LS_Msk & (_UINT32_(value) << VCI_LATCH_RST_WK_ALRM_LS_Pos)) /* Assigment of value for WK_ALRM_LS in the VCI_LATCH_RST register */
#define VCI_LATCH_RST_RTC_ALRM_LS_Pos         _UINT32_(17)                                         /* (VCI_LATCH_RST) RTC Alarm Latch Reset. When this bit is written with a '1', the RTC Alarm Event latch is reset.\n           The RTC Alarm input to the latch has priority over the Reset input Reads of this register are undefined. Position */
#define VCI_LATCH_RST_RTC_ALRM_LS_Msk         (_UINT32_(0x1) << VCI_LATCH_RST_RTC_ALRM_LS_Pos)     /* (VCI_LATCH_RST) RTC Alarm Latch Reset. When this bit is written with a '1', the RTC Alarm Event latch is reset.\n           The RTC Alarm input to the latch has priority over the Reset input Reads of this register are undefined. Mask */
#define VCI_LATCH_RST_RTC_ALRM_LS(value)      (VCI_LATCH_RST_RTC_ALRM_LS_Msk & (_UINT32_(value) << VCI_LATCH_RST_RTC_ALRM_LS_Pos)) /* Assigment of value for RTC_ALRM_LS in the VCI_LATCH_RST register */
#define VCI_LATCH_RST_Msk                     _UINT32_(0x0003007F)                                 /* (VCI_LATCH_RST) Register Mask  */


/* -------- VCI_INPUT_EN : (VCI Offset: 0x0C) (R/W 32) VCI Input Enable Register -------- */
#define VCI_INPUT_EN_RESETVALUE               _UINT32_(0x0F)                                       /*  (VCI_INPUT_EN) VCI Input Enable Register  Reset Value */

#define VCI_INPUT_EN_IE_Pos                   _UINT32_(0)                                          /* (VCI_INPUT_EN) Input Enables for VCI_IN# signals. After changing the input enable for a VCI input, firmware should reset the input latch and clear\n         any potential interrupt that may have been triggered by the input, as changing the enable may cause the internal status to change.\n                For each bit in the field:\n             1=Enabled. The corresponding VCI_IN# input is not gated and toggling the pin will affect the VCI_OUT pin\n        0=Not Enabled. the corresponding VCI_IN# input does not affect the VCI_OUT pin, even if the input is '0'. Unless the corresponding bit\n            in the VCI Buffer Enable Register is 1, latches are not asserted, even if the VCI_IN# pin is low, during a VBAT power transition Position */
#define VCI_INPUT_EN_IE_Msk                   (_UINT32_(0x7F) << VCI_INPUT_EN_IE_Pos)              /* (VCI_INPUT_EN) Input Enables for VCI_IN# signals. After changing the input enable for a VCI input, firmware should reset the input latch and clear\n         any potential interrupt that may have been triggered by the input, as changing the enable may cause the internal status to change.\n                For each bit in the field:\n             1=Enabled. The corresponding VCI_IN# input is not gated and toggling the pin will affect the VCI_OUT pin\n        0=Not Enabled. the corresponding VCI_IN# input does not affect the VCI_OUT pin, even if the input is '0'. Unless the corresponding bit\n            in the VCI Buffer Enable Register is 1, latches are not asserted, even if the VCI_IN# pin is low, during a VBAT power transition Mask */
#define VCI_INPUT_EN_IE(value)                (VCI_INPUT_EN_IE_Msk & (_UINT32_(value) << VCI_INPUT_EN_IE_Pos)) /* Assigment of value for IE in the VCI_INPUT_EN register */
#define VCI_INPUT_EN_Msk                      _UINT32_(0x0000007F)                                 /* (VCI_INPUT_EN) Register Mask  */


/* -------- VCI_HLDOFF_CNT : (VCI Offset: 0x10) (R/W 32) Holdoff Count Register -------- */
#define VCI_HLDOFF_CNT_RESETVALUE             _UINT32_(0x00)                                       /*  (VCI_HLDOFF_CNT) Holdoff Count Register  Reset Value */

#define VCI_HLDOFF_CNT_TIME_Pos               _UINT32_(0)                                          /* (VCI_HLDOFF_CNT) These bits determine the period of time the VCI_OUT logic is inhibited from re-asserting VCI_OUT after a SYS_SHDN# event.\n        FFh-01h=The Power On Inhibit Holdoff Time is set to a period between 125ms and 31.875 seconds.\n             0=The Power On Inhibit function is disabled. Position */
#define VCI_HLDOFF_CNT_TIME_Msk               (_UINT32_(0xFF) << VCI_HLDOFF_CNT_TIME_Pos)          /* (VCI_HLDOFF_CNT) These bits determine the period of time the VCI_OUT logic is inhibited from re-asserting VCI_OUT after a SYS_SHDN# event.\n        FFh-01h=The Power On Inhibit Holdoff Time is set to a period between 125ms and 31.875 seconds.\n             0=The Power On Inhibit function is disabled. Mask */
#define VCI_HLDOFF_CNT_TIME(value)            (VCI_HLDOFF_CNT_TIME_Msk & (_UINT32_(value) << VCI_HLDOFF_CNT_TIME_Pos)) /* Assigment of value for TIME in the VCI_HLDOFF_CNT register */
#define VCI_HLDOFF_CNT_Msk                    _UINT32_(0x000000FF)                                 /* (VCI_HLDOFF_CNT) Register Mask  */


/* -------- VCI_POLARITY : (VCI Offset: 0x14) (R/W 32) VCI Polarity Register -------- */
#define VCI_POLARITY_RESETVALUE               _UINT32_(0x00)                                       /*  (VCI_POLARITY) VCI Polarity Register  Reset Value */

#define VCI_POLARITY_VCI_IN_Pos               _UINT32_(0)                                          /* (VCI_POLARITY) These bits determine the polarity of the VCI_IN input signals: For each bit in the field:\n          1=Active High. The value on the pins is inverted before use\n                0=Active Low (default). Position */
#define VCI_POLARITY_VCI_IN_Msk               (_UINT32_(0x7F) << VCI_POLARITY_VCI_IN_Pos)          /* (VCI_POLARITY) These bits determine the polarity of the VCI_IN input signals: For each bit in the field:\n          1=Active High. The value on the pins is inverted before use\n                0=Active Low (default). Mask */
#define VCI_POLARITY_VCI_IN(value)            (VCI_POLARITY_VCI_IN_Msk & (_UINT32_(value) << VCI_POLARITY_VCI_IN_Pos)) /* Assigment of value for VCI_IN in the VCI_POLARITY register */
#define VCI_POLARITY_Msk                      _UINT32_(0x0000007F)                                 /* (VCI_POLARITY) Register Mask  */


/* -------- VCI_PEDGE_DET : (VCI Offset: 0x18) (R/W 32) VCI Posedge Detect Register -------- */
#define VCI_PEDGE_DET_RESETVALUE              _UINT32_(0x00)                                       /*  (VCI_PEDGE_DET) VCI Posedge Detect Register  Reset Value */

#define VCI_PEDGE_DET_VCI_IN_Pos              _UINT32_(0)                                          /* (VCI_PEDGE_DET) These bits record a low to high transition on the VCI_IN# pins. A 1 indicates a transition occurred. For each bit in the field:\n          1=Positive Edge Detected; 0=No edge detected. Position */
#define VCI_PEDGE_DET_VCI_IN_Msk              (_UINT32_(0x7F) << VCI_PEDGE_DET_VCI_IN_Pos)         /* (VCI_PEDGE_DET) These bits record a low to high transition on the VCI_IN# pins. A 1 indicates a transition occurred. For each bit in the field:\n          1=Positive Edge Detected; 0=No edge detected. Mask */
#define VCI_PEDGE_DET_VCI_IN(value)           (VCI_PEDGE_DET_VCI_IN_Msk & (_UINT32_(value) << VCI_PEDGE_DET_VCI_IN_Pos)) /* Assigment of value for VCI_IN in the VCI_PEDGE_DET register */
#define VCI_PEDGE_DET_Msk                     _UINT32_(0x0000007F)                                 /* (VCI_PEDGE_DET) Register Mask  */


/* -------- VCI_NEDGE_DET : (VCI Offset: 0x1C) (R/W 32) VCI Negedge Detect Register -------- */
#define VCI_NEDGE_DET_RESETVALUE              _UINT32_(0x00)                                       /*  (VCI_NEDGE_DET) VCI Negedge Detect Register  Reset Value */

#define VCI_NEDGE_DET_VCI_IN_Pos              _UINT32_(0)                                          /* (VCI_NEDGE_DET) These bits record a high to low transition on the VCI_IN# pins. A 1 indicates a transition occurred. For each bit in the field:\n       1=Negative Edge Detected; 0=No edge detected. Position */
#define VCI_NEDGE_DET_VCI_IN_Msk              (_UINT32_(0x7F) << VCI_NEDGE_DET_VCI_IN_Pos)         /* (VCI_NEDGE_DET) These bits record a high to low transition on the VCI_IN# pins. A 1 indicates a transition occurred. For each bit in the field:\n       1=Negative Edge Detected; 0=No edge detected. Mask */
#define VCI_NEDGE_DET_VCI_IN(value)           (VCI_NEDGE_DET_VCI_IN_Msk & (_UINT32_(value) << VCI_NEDGE_DET_VCI_IN_Pos)) /* Assigment of value for VCI_IN in the VCI_NEDGE_DET register */
#define VCI_NEDGE_DET_Msk                     _UINT32_(0x0000007F)                                 /* (VCI_NEDGE_DET) Register Mask  */


/* -------- VCI_BUFFER_EN : (VCI Offset: 0x20) (R/W 32) VCI Buffer Enable Register -------- */
#define VCI_BUFFER_EN_RESETVALUE              _UINT32_(0x00)                                       /*  (VCI_BUFFER_EN) VCI Buffer Enable Register  Reset Value */

#define VCI_BUFFER_EN_V_BUF_Pos               _UINT32_(0)                                          /* (VCI_BUFFER_EN) Input Buffer enable. After changing the buffer enable for a VCI input, firmware should reset the input latch and clear any\n       potential interrupt that may have been triggered by the input, as changing the buffer may cause the internal status to change. This register\n           has no effect when VTR is powered. When VTR is on, the input buffers are enabled only by the IE bit. For each bit in the field:\n                1=VCI_IN# input buffer enabled independent of the IE bit. The edge detection latches for this input are always enabled\n              0=VCI_IN# input buffer enabled by the IE bit. The edge detection latches are only enabled when the IE bit is 1 (default). Position */
#define VCI_BUFFER_EN_V_BUF_Msk               (_UINT32_(0x7F) << VCI_BUFFER_EN_V_BUF_Pos)          /* (VCI_BUFFER_EN) Input Buffer enable. After changing the buffer enable for a VCI input, firmware should reset the input latch and clear any\n       potential interrupt that may have been triggered by the input, as changing the buffer may cause the internal status to change. This register\n           has no effect when VTR is powered. When VTR is on, the input buffers are enabled only by the IE bit. For each bit in the field:\n                1=VCI_IN# input buffer enabled independent of the IE bit. The edge detection latches for this input are always enabled\n              0=VCI_IN# input buffer enabled by the IE bit. The edge detection latches are only enabled when the IE bit is 1 (default). Mask */
#define VCI_BUFFER_EN_V_BUF(value)            (VCI_BUFFER_EN_V_BUF_Msk & (_UINT32_(value) << VCI_BUFFER_EN_V_BUF_Pos)) /* Assigment of value for V_BUF in the VCI_BUFFER_EN register */
#define VCI_BUFFER_EN_Msk                     _UINT32_(0x0000007F)                                 /* (VCI_BUFFER_EN) Register Mask  */


/** \brief VCI register offsets definitions */
#define VCI_CTRL_STS_REG_OFST          _UINT32_(0x00)      /* (VCI_CTRL_STS) VCI Register Offset */
#define VCI_LATCH_EN_REG_OFST          _UINT32_(0x04)      /* (VCI_LATCH_EN) Latch Enable Register Offset */
#define VCI_LATCH_RST_REG_OFST         _UINT32_(0x08)      /* (VCI_LATCH_RST) Latch Resets Register Offset */
#define VCI_INPUT_EN_REG_OFST          _UINT32_(0x0C)      /* (VCI_INPUT_EN) VCI Input Enable Register Offset */
#define VCI_HLDOFF_CNT_REG_OFST        _UINT32_(0x10)      /* (VCI_HLDOFF_CNT) Holdoff Count Register Offset */
#define VCI_POLARITY_REG_OFST          _UINT32_(0x14)      /* (VCI_POLARITY) VCI Polarity Register Offset */
#define VCI_PEDGE_DET_REG_OFST         _UINT32_(0x18)      /* (VCI_PEDGE_DET) VCI Posedge Detect Register Offset */
#define VCI_NEDGE_DET_REG_OFST         _UINT32_(0x1C)      /* (VCI_NEDGE_DET) VCI Negedge Detect Register Offset */
#define VCI_BUFFER_EN_REG_OFST         _UINT32_(0x20)      /* (VCI_BUFFER_EN) VCI Buffer Enable Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief VCI register API structure */
typedef struct
{  /* The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
  __IO  uint32_t                       VCI_CTRL_STS;       /**< Offset: 0x00 (R/W  32) VCI Register */
  __IO  uint32_t                       VCI_LATCH_EN;       /**< Offset: 0x04 (R/W  32) Latch Enable Register */
  __IO  uint32_t                       VCI_LATCH_RST;      /**< Offset: 0x08 (R/W  32) Latch Resets Register */
  __IO  uint32_t                       VCI_INPUT_EN;       /**< Offset: 0x0C (R/W  32) VCI Input Enable Register */
  __IO  uint32_t                       VCI_HLDOFF_CNT;     /**< Offset: 0x10 (R/W  32) Holdoff Count Register */
  __IO  uint32_t                       VCI_POLARITY;       /**< Offset: 0x14 (R/W  32) VCI Polarity Register */
  __IO  uint32_t                       VCI_PEDGE_DET;      /**< Offset: 0x18 (R/W  32) VCI Posedge Detect Register */
  __IO  uint32_t                       VCI_NEDGE_DET;      /**< Offset: 0x1C (R/W  32) VCI Negedge Detect Register */
  __IO  uint32_t                       VCI_BUFFER_EN;      /**< Offset: 0x20 (R/W  32) VCI Buffer Enable Register */
} vci_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC1702Q_VCI_COMPONENT_H_ */
