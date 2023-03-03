/*
 * Component description for ENV_MON
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
#ifndef _CEC_ENV_MON_COMPONENT_H_
#define _CEC_ENV_MON_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR ENV_MON                                      */
/* ************************************************************************** */

/* -------- ENV_MON_EXT1_TEMP : (ENV_MON Offset: 0x00) ( R/ 16) External Diode 1 Temp Register -------- */
#define ENV_MON_EXT1_TEMP_RESETVALUE          _UINT16_(0x00)                                       /*  (ENV_MON_EXT1_TEMP) External Diode 1 Temp Register  Reset Value */

#define ENV_MON_EXT1_TEMP_DIODE1_TEMP_Pos     _UINT16_(0)                                          /* (ENV_MON_EXT1_TEMP) External Diode 1 Temp Byte Register Position */
#define ENV_MON_EXT1_TEMP_DIODE1_TEMP_Msk     (_UINT16_(0xFFFF) << ENV_MON_EXT1_TEMP_DIODE1_TEMP_Pos) /* (ENV_MON_EXT1_TEMP) External Diode 1 Temp Byte Register Mask */
#define ENV_MON_EXT1_TEMP_DIODE1_TEMP(value)  (ENV_MON_EXT1_TEMP_DIODE1_TEMP_Msk & (_UINT16_(value) << ENV_MON_EXT1_TEMP_DIODE1_TEMP_Pos)) /* Assigment of value for DIODE1_TEMP in the ENV_MON_EXT1_TEMP register */
#define ENV_MON_EXT1_TEMP_Msk                 _UINT16_(0xFFFF)                                     /* (ENV_MON_EXT1_TEMP) Register Mask  */


/* -------- ENV_MON_INT_TEMP : (ENV_MON Offset: 0x02) ( R/ 16) Internal Temp Register -------- */
#define ENV_MON_INT_TEMP_RESETVALUE           _UINT16_(0x00)                                       /*  (ENV_MON_INT_TEMP) Internal Temp Register  Reset Value */

#define ENV_MON_INT_TEMP_INT_TEMP_Pos         _UINT16_(0)                                          /* (ENV_MON_INT_TEMP) Internal Temp Byte Register Position */
#define ENV_MON_INT_TEMP_INT_TEMP_Msk         (_UINT16_(0xFFFF) << ENV_MON_INT_TEMP_INT_TEMP_Pos)  /* (ENV_MON_INT_TEMP) Internal Temp Byte Register Mask */
#define ENV_MON_INT_TEMP_INT_TEMP(value)      (ENV_MON_INT_TEMP_INT_TEMP_Msk & (_UINT16_(value) << ENV_MON_INT_TEMP_INT_TEMP_Pos)) /* Assigment of value for INT_TEMP in the ENV_MON_INT_TEMP register */
#define ENV_MON_INT_TEMP_Msk                  _UINT16_(0xFFFF)                                     /* (ENV_MON_INT_TEMP) Register Mask  */


/* -------- ENV_MON_EXT2_TEMP : (ENV_MON Offset: 0x04) ( R/ 16) External Diode 2 Temp Register -------- */
#define ENV_MON_EXT2_TEMP_RESETVALUE          _UINT16_(0x00)                                       /*  (ENV_MON_EXT2_TEMP) External Diode 2 Temp Register  Reset Value */

#define ENV_MON_EXT2_TEMP_DIODE2_TEMP_Pos     _UINT16_(0)                                          /* (ENV_MON_EXT2_TEMP) External Diode 2 Temp Byte Register Position */
#define ENV_MON_EXT2_TEMP_DIODE2_TEMP_Msk     (_UINT16_(0xFFFF) << ENV_MON_EXT2_TEMP_DIODE2_TEMP_Pos) /* (ENV_MON_EXT2_TEMP) External Diode 2 Temp Byte Register Mask */
#define ENV_MON_EXT2_TEMP_DIODE2_TEMP(value)  (ENV_MON_EXT2_TEMP_DIODE2_TEMP_Msk & (_UINT16_(value) << ENV_MON_EXT2_TEMP_DIODE2_TEMP_Pos)) /* Assigment of value for DIODE2_TEMP in the ENV_MON_EXT2_TEMP register */
#define ENV_MON_EXT2_TEMP_Msk                 _UINT16_(0xFFFF)                                     /* (ENV_MON_EXT2_TEMP) Register Mask  */


/* -------- ENV_MON_EXT3_TEMP : (ENV_MON Offset: 0x06) ( R/ 16) External Diode 3 Temp Register -------- */
#define ENV_MON_EXT3_TEMP_RESETVALUE          _UINT16_(0x00)                                       /*  (ENV_MON_EXT3_TEMP) External Diode 3 Temp Register  Reset Value */

#define ENV_MON_EXT3_TEMP_DIODE3_TEMP_Pos     _UINT16_(0)                                          /* (ENV_MON_EXT3_TEMP) External Diode 3 Temp Byte Register Position */
#define ENV_MON_EXT3_TEMP_DIODE3_TEMP_Msk     (_UINT16_(0xFFFF) << ENV_MON_EXT3_TEMP_DIODE3_TEMP_Pos) /* (ENV_MON_EXT3_TEMP) External Diode 3 Temp Byte Register Mask */
#define ENV_MON_EXT3_TEMP_DIODE3_TEMP(value)  (ENV_MON_EXT3_TEMP_DIODE3_TEMP_Msk & (_UINT16_(value) << ENV_MON_EXT3_TEMP_DIODE3_TEMP_Pos)) /* Assigment of value for DIODE3_TEMP in the ENV_MON_EXT3_TEMP register */
#define ENV_MON_EXT3_TEMP_Msk                 _UINT16_(0xFFFF)                                     /* (ENV_MON_EXT3_TEMP) Register Mask  */


/* -------- ENV_MON_EXT4_TEMP : (ENV_MON Offset: 0x08) ( R/ 16) External Diode 4 Temp Register -------- */
#define ENV_MON_EXT4_TEMP_RESETVALUE          _UINT16_(0x00)                                       /*  (ENV_MON_EXT4_TEMP) External Diode 4 Temp Register  Reset Value */

#define ENV_MON_EXT4_TEMP_DIODE4_TEMP_Pos     _UINT16_(0)                                          /* (ENV_MON_EXT4_TEMP) External Diode 4 Temp Byte Register Position */
#define ENV_MON_EXT4_TEMP_DIODE4_TEMP_Msk     (_UINT16_(0xFFFF) << ENV_MON_EXT4_TEMP_DIODE4_TEMP_Pos) /* (ENV_MON_EXT4_TEMP) External Diode 4 Temp Byte Register Mask */
#define ENV_MON_EXT4_TEMP_DIODE4_TEMP(value)  (ENV_MON_EXT4_TEMP_DIODE4_TEMP_Msk & (_UINT16_(value) << ENV_MON_EXT4_TEMP_DIODE4_TEMP_Pos)) /* Assigment of value for DIODE4_TEMP in the ENV_MON_EXT4_TEMP register */
#define ENV_MON_EXT4_TEMP_Msk                 _UINT16_(0xFFFF)                                     /* (ENV_MON_EXT4_TEMP) Register Mask  */


/* -------- ENV_MON_VIN_VOLT : (ENV_MON Offset: 0x0E) ( R/ 8) Stores the voltage Measured on VIN channel -------- */
#define ENV_MON_VIN_VOLT_RESETVALUE           _UINT8_(0xFF)                                        /*  (ENV_MON_VIN_VOLT) Stores the voltage Measured on VIN channel  Reset Value */

#define ENV_MON_VIN_VOLT_VIN_VOLT_Pos         _UINT8_(0)                                           /* (ENV_MON_VIN_VOLT) Stores the voltage Measured on VIN channel Position */
#define ENV_MON_VIN_VOLT_VIN_VOLT_Msk         (_UINT8_(0xFF) << ENV_MON_VIN_VOLT_VIN_VOLT_Pos)     /* (ENV_MON_VIN_VOLT) Stores the voltage Measured on VIN channel Mask */
#define ENV_MON_VIN_VOLT_VIN_VOLT(value)      (ENV_MON_VIN_VOLT_VIN_VOLT_Msk & (_UINT8_(value) << ENV_MON_VIN_VOLT_VIN_VOLT_Pos)) /* Assigment of value for VIN_VOLT in the ENV_MON_VIN_VOLT register */
#define ENV_MON_VIN_VOLT_Msk                  _UINT8_(0xFF)                                        /* (ENV_MON_VIN_VOLT) Register Mask  */


/* -------- ENV_MON_EXT1A_TEMP : (ENV_MON Offset: 0x12) ( R/ 16) Stores the fractional and integer data for External Diode 1A Register -------- */
#define ENV_MON_EXT1A_TEMP_RESETVALUE         _UINT16_(0x00)                                       /*  (ENV_MON_EXT1A_TEMP) Stores the fractional and integer data for External Diode 1A Register  Reset Value */

#define ENV_MON_EXT1A_TEMP_DIODE1A_TEMP_Pos   _UINT16_(0)                                          /* (ENV_MON_EXT1A_TEMP) Stores the fractional and integer data for External Diode 1A Register Position */
#define ENV_MON_EXT1A_TEMP_DIODE1A_TEMP_Msk   (_UINT16_(0xFFFF) << ENV_MON_EXT1A_TEMP_DIODE1A_TEMP_Pos) /* (ENV_MON_EXT1A_TEMP) Stores the fractional and integer data for External Diode 1A Register Mask */
#define ENV_MON_EXT1A_TEMP_DIODE1A_TEMP(value) (ENV_MON_EXT1A_TEMP_DIODE1A_TEMP_Msk & (_UINT16_(value) << ENV_MON_EXT1A_TEMP_DIODE1A_TEMP_Pos)) /* Assigment of value for DIODE1A_TEMP in the ENV_MON_EXT1A_TEMP register */
#define ENV_MON_EXT1A_TEMP_Msk                _UINT16_(0xFFFF)                                     /* (ENV_MON_EXT1A_TEMP) Register Mask  */


/* -------- ENV_MON_EXT2A_TEMP : (ENV_MON Offset: 0x14) ( R/ 16) Stores the fractional and integer data for External Diode 2A Register -------- */
#define ENV_MON_EXT2A_TEMP_RESETVALUE         _UINT16_(0x00)                                       /*  (ENV_MON_EXT2A_TEMP) Stores the fractional and integer data for External Diode 2A Register  Reset Value */

#define ENV_MON_EXT2A_TEMP_DIODE2A_TEMP_Pos   _UINT16_(0)                                          /* (ENV_MON_EXT2A_TEMP) Stores the fractional and integer data for External Diode 2A Register Position */
#define ENV_MON_EXT2A_TEMP_DIODE2A_TEMP_Msk   (_UINT16_(0xFFFF) << ENV_MON_EXT2A_TEMP_DIODE2A_TEMP_Pos) /* (ENV_MON_EXT2A_TEMP) Stores the fractional and integer data for External Diode 2A Register Mask */
#define ENV_MON_EXT2A_TEMP_DIODE2A_TEMP(value) (ENV_MON_EXT2A_TEMP_DIODE2A_TEMP_Msk & (_UINT16_(value) << ENV_MON_EXT2A_TEMP_DIODE2A_TEMP_Pos)) /* Assigment of value for DIODE2A_TEMP in the ENV_MON_EXT2A_TEMP register */
#define ENV_MON_EXT2A_TEMP_Msk                _UINT16_(0xFFFF)                                     /* (ENV_MON_EXT2A_TEMP) Register Mask  */


/* -------- ENV_MON_EXT3A_TEMP : (ENV_MON Offset: 0x16) ( R/ 16) Stores the fractional and integer data for External Diode 3A Register -------- */
#define ENV_MON_EXT3A_TEMP_RESETVALUE         _UINT16_(0x00)                                       /*  (ENV_MON_EXT3A_TEMP) Stores the fractional and integer data for External Diode 3A Register  Reset Value */

#define ENV_MON_EXT3A_TEMP_DIODE3A_TEMP_Pos   _UINT16_(0)                                          /* (ENV_MON_EXT3A_TEMP) Stores the fractional and integer data for External Diode 3A Register Position */
#define ENV_MON_EXT3A_TEMP_DIODE3A_TEMP_Msk   (_UINT16_(0xFFFF) << ENV_MON_EXT3A_TEMP_DIODE3A_TEMP_Pos) /* (ENV_MON_EXT3A_TEMP) Stores the fractional and integer data for External Diode 3A Register Mask */
#define ENV_MON_EXT3A_TEMP_DIODE3A_TEMP(value) (ENV_MON_EXT3A_TEMP_DIODE3A_TEMP_Msk & (_UINT16_(value) << ENV_MON_EXT3A_TEMP_DIODE3A_TEMP_Pos)) /* Assigment of value for DIODE3A_TEMP in the ENV_MON_EXT3A_TEMP register */
#define ENV_MON_EXT3A_TEMP_Msk                _UINT16_(0xFFFF)                                     /* (ENV_MON_EXT3A_TEMP) Register Mask  */


/* -------- ENV_MON_EXT4A_TEMP : (ENV_MON Offset: 0x18) ( R/ 16) Stores the fractional and integer data for External Diode 4A Register -------- */
#define ENV_MON_EXT4A_TEMP_RESETVALUE         _UINT16_(0x00)                                       /*  (ENV_MON_EXT4A_TEMP) Stores the fractional and integer data for External Diode 4A Register  Reset Value */

#define ENV_MON_EXT4A_TEMP_DIODE4A_TEMP_Pos   _UINT16_(0)                                          /* (ENV_MON_EXT4A_TEMP) Stores the fractional and integerdata for External Diode 4A Register Position */
#define ENV_MON_EXT4A_TEMP_DIODE4A_TEMP_Msk   (_UINT16_(0xFFFF) << ENV_MON_EXT4A_TEMP_DIODE4A_TEMP_Pos) /* (ENV_MON_EXT4A_TEMP) Stores the fractional and integerdata for External Diode 4A Register Mask */
#define ENV_MON_EXT4A_TEMP_DIODE4A_TEMP(value) (ENV_MON_EXT4A_TEMP_DIODE4A_TEMP_Msk & (_UINT16_(value) << ENV_MON_EXT4A_TEMP_DIODE4A_TEMP_Pos)) /* Assigment of value for DIODE4A_TEMP in the ENV_MON_EXT4A_TEMP register */
#define ENV_MON_EXT4A_TEMP_Msk                _UINT16_(0xFFFF)                                     /* (ENV_MON_EXT4A_TEMP) Register Mask  */


/* -------- ENV_MON_VCP_VOLT : (ENV_MON Offset: 0x21) ( R/ 8) Stores the VCP Voltage Monitor data -------- */
#define ENV_MON_VCP_VOLT_RESETVALUE           _UINT8_(0xFF)                                        /*  (ENV_MON_VCP_VOLT) Stores the VCP Voltage Monitor data  Reset Value */

#define ENV_MON_VCP_VOLT_VCP_VOLT_Pos         _UINT8_(0)                                           /* (ENV_MON_VCP_VOLT) Stores the VCP Voltage Monitor data Position */
#define ENV_MON_VCP_VOLT_VCP_VOLT_Msk         (_UINT8_(0xFF) << ENV_MON_VCP_VOLT_VCP_VOLT_Pos)     /* (ENV_MON_VCP_VOLT) Stores the VCP Voltage Monitor data Mask */
#define ENV_MON_VCP_VOLT_VCP_VOLT(value)      (ENV_MON_VCP_VOLT_VCP_VOLT_Msk & (_UINT8_(value) << ENV_MON_VCP_VOLT_VCP_VOLT_Pos)) /* Assigment of value for VCP_VOLT in the ENV_MON_VCP_VOLT register */
#define ENV_MON_VCP_VOLT_Msk                  _UINT8_(0xFF)                                        /* (ENV_MON_VCP_VOLT) Register Mask  */


/* -------- ENV_MON_VTT_VOLT : (ENV_MON Offset: 0x23) ( R/ 8) Stores the VTT Voltage Monitor data -------- */
#define ENV_MON_VTT_VOLT_RESETVALUE           _UINT8_(0xFF)                                        /*  (ENV_MON_VTT_VOLT) Stores the VTT Voltage Monitor data  Reset Value */

#define ENV_MON_VTT_VOLT_VTT_VOLT_Pos         _UINT8_(0)                                           /* (ENV_MON_VTT_VOLT) Stores the VTT Voltage Monitor data Position */
#define ENV_MON_VTT_VOLT_VTT_VOLT_Msk         (_UINT8_(0xFF) << ENV_MON_VTT_VOLT_VTT_VOLT_Pos)     /* (ENV_MON_VTT_VOLT) Stores the VTT Voltage Monitor data Mask */
#define ENV_MON_VTT_VOLT_VTT_VOLT(value)      (ENV_MON_VTT_VOLT_VTT_VOLT_Msk & (_UINT8_(value) << ENV_MON_VTT_VOLT_VTT_VOLT_Pos)) /* Assigment of value for VTT_VOLT in the ENV_MON_VTT_VOLT register */
#define ENV_MON_VTT_VOLT_Msk                  _UINT8_(0xFF)                                        /* (ENV_MON_VTT_VOLT) Register Mask  */


/* -------- ENV_MON_TEMP_CFG1 : (ENV_MON Offset: 0x2B) (R/W 8) Controls temp sensing for external diodes -------- */
#define ENV_MON_TEMP_CFG1_RESETVALUE          _UINT8_(0x00)                                        /*  (ENV_MON_TEMP_CFG1) Controls temp sensing for external diodes  Reset Value */

#define ENV_MON_TEMP_CFG1_TEMP_CFG1_Pos       _UINT8_(0)                                           /* (ENV_MON_TEMP_CFG1) Controls temp sensing for external diodes Position */
#define ENV_MON_TEMP_CFG1_TEMP_CFG1_Msk       (_UINT8_(0xFF) << ENV_MON_TEMP_CFG1_TEMP_CFG1_Pos)   /* (ENV_MON_TEMP_CFG1) Controls temp sensing for external diodes Mask */
#define ENV_MON_TEMP_CFG1_TEMP_CFG1(value)    (ENV_MON_TEMP_CFG1_TEMP_CFG1_Msk & (_UINT8_(value) << ENV_MON_TEMP_CFG1_TEMP_CFG1_Pos)) /* Assigment of value for TEMP_CFG1 in the ENV_MON_TEMP_CFG1 register */
#define ENV_MON_TEMP_CFG1_Msk                 _UINT8_(0xFF)                                        /* (ENV_MON_TEMP_CFG1) Register Mask  */


/* -------- ENV_MON_TEMP_CFG2 : (ENV_MON Offset: 0x2C) (R/W 8) Controls temp sensing for external diodes -------- */
#define ENV_MON_TEMP_CFG2_RESETVALUE          _UINT8_(0x00)                                        /*  (ENV_MON_TEMP_CFG2) Controls temp sensing for external diodes  Reset Value */

#define ENV_MON_TEMP_CFG2_TEMP_CFG2_Pos       _UINT8_(0)                                           /* (ENV_MON_TEMP_CFG2) Controls temp sensing for external diodes Position */
#define ENV_MON_TEMP_CFG2_TEMP_CFG2_Msk       (_UINT8_(0xFF) << ENV_MON_TEMP_CFG2_TEMP_CFG2_Pos)   /* (ENV_MON_TEMP_CFG2) Controls temp sensing for external diodes Mask */
#define ENV_MON_TEMP_CFG2_TEMP_CFG2(value)    (ENV_MON_TEMP_CFG2_TEMP_CFG2_Msk & (_UINT8_(value) << ENV_MON_TEMP_CFG2_TEMP_CFG2_Pos)) /* Assigment of value for TEMP_CFG2 in the ENV_MON_TEMP_CFG2 register */
#define ENV_MON_TEMP_CFG2_Msk                 _UINT8_(0xFF)                                        /* (ENV_MON_TEMP_CFG2) Register Mask  */


/* -------- ENV_MON_VOLT_CFG : (ENV_MON Offset: 0x2D) (R/W 8) Controls Voltage sensing for external voltages -------- */
#define ENV_MON_VOLT_CFG_RESETVALUE           _UINT8_(0x00)                                        /*  (ENV_MON_VOLT_CFG) Controls Voltage sensing for external voltages  Reset Value */

#define ENV_MON_VOLT_CFG_VOLT_CFG_Pos         _UINT8_(0)                                           /* (ENV_MON_VOLT_CFG) Controls Voltage sensing for external voltages Position */
#define ENV_MON_VOLT_CFG_VOLT_CFG_Msk         (_UINT8_(0xFF) << ENV_MON_VOLT_CFG_VOLT_CFG_Pos)     /* (ENV_MON_VOLT_CFG) Controls Voltage sensing for external voltages Mask */
#define ENV_MON_VOLT_CFG_VOLT_CFG(value)      (ENV_MON_VOLT_CFG_VOLT_CFG_Msk & (_UINT8_(value) << ENV_MON_VOLT_CFG_VOLT_CFG_Pos)) /* Assigment of value for VOLT_CFG in the ENV_MON_VOLT_CFG register */
#define ENV_MON_VOLT_CFG_Msk                  _UINT8_(0xFF)                                        /* (ENV_MON_VOLT_CFG) Register Mask  */


/* -------- ENV_MON_THEM_CFG : (ENV_MON Offset: 0x2E) (R/W 8) Controls Thermistor or diodes Configuration -------- */
#define ENV_MON_THEM_CFG_RESETVALUE           _UINT8_(0x00)                                        /*  (ENV_MON_THEM_CFG) Controls Thermistor or diodes Configuration  Reset Value */

#define ENV_MON_THEM_CFG_THEM_CFG_Pos         _UINT8_(0)                                           /* (ENV_MON_THEM_CFG) Controls Thermistor or diodes Configuration Position */
#define ENV_MON_THEM_CFG_THEM_CFG_Msk         (_UINT8_(0xFF) << ENV_MON_THEM_CFG_THEM_CFG_Pos)     /* (ENV_MON_THEM_CFG) Controls Thermistor or diodes Configuration Mask */
#define ENV_MON_THEM_CFG_THEM_CFG(value)      (ENV_MON_THEM_CFG_THEM_CFG_Msk & (_UINT8_(value) << ENV_MON_THEM_CFG_THEM_CFG_Pos)) /* Assigment of value for THEM_CFG in the ENV_MON_THEM_CFG register */
#define ENV_MON_THEM_CFG_Msk                  _UINT8_(0xFF)                                        /* (ENV_MON_THEM_CFG) Register Mask  */


/* -------- ENV_MON_CNVR_CFG : (ENV_MON Offset: 0x2F) (R/W 8) Controls Temperature Conversion for the temperature channels -------- */
#define ENV_MON_CNVR_CFG_RESETVALUE           _UINT8_(0x00)                                        /*  (ENV_MON_CNVR_CFG) Controls Temperature Conversion for the temperature channels  Reset Value */

#define ENV_MON_CNVR_CFG_CNVR_CFG_Pos         _UINT8_(0)                                           /* (ENV_MON_CNVR_CFG) Controls Temperature Conversion for the temperature channels Position */
#define ENV_MON_CNVR_CFG_CNVR_CFG_Msk         (_UINT8_(0xFF) << ENV_MON_CNVR_CFG_CNVR_CFG_Pos)     /* (ENV_MON_CNVR_CFG) Controls Temperature Conversion for the temperature channels Mask */
#define ENV_MON_CNVR_CFG_CNVR_CFG(value)      (ENV_MON_CNVR_CFG_CNVR_CFG_Msk & (_UINT8_(value) << ENV_MON_CNVR_CFG_CNVR_CFG_Pos)) /* Assigment of value for CNVR_CFG in the ENV_MON_CNVR_CFG register */
#define ENV_MON_CNVR_CFG_Msk                  _UINT8_(0xFF)                                        /* (ENV_MON_CNVR_CFG) Register Mask  */


/* -------- ENV_MON_AVG_EN : (ENV_MON Offset: 0x30) (R/W 8) Software Averaging Enable -------- */
#define ENV_MON_AVG_EN_RESETVALUE             _UINT8_(0x00)                                        /*  (ENV_MON_AVG_EN) Software Averaging Enable  Reset Value */

#define ENV_MON_AVG_EN_AVG_EN_Pos             _UINT8_(0)                                           /* (ENV_MON_AVG_EN) Software Averaging Enable Position */
#define ENV_MON_AVG_EN_AVG_EN_Msk             (_UINT8_(0xFF) << ENV_MON_AVG_EN_AVG_EN_Pos)         /* (ENV_MON_AVG_EN) Software Averaging Enable Mask */
#define ENV_MON_AVG_EN_AVG_EN(value)          (ENV_MON_AVG_EN_AVG_EN_Msk & (_UINT8_(value) << ENV_MON_AVG_EN_AVG_EN_Pos)) /* Assigment of value for AVG_EN in the ENV_MON_AVG_EN register */
#define ENV_MON_AVG_EN_Msk                    _UINT8_(0xFF)                                        /* (ENV_MON_AVG_EN) Register Mask  */


/* -------- ENV_MON_BCOMP1_EN : (ENV_MON Offset: 0x38) (R/W 8) Configure Beta compensation settings for External Diode1 -------- */
#define ENV_MON_BCOMP1_EN_RESETVALUE          _UINT8_(0x00)                                        /*  (ENV_MON_BCOMP1_EN) Configure Beta compensation settings for External Diode1  Reset Value */

#define ENV_MON_BCOMP1_EN_BCOMP1_EN_Pos       _UINT8_(0)                                           /* (ENV_MON_BCOMP1_EN) Beta compensation settings for External Diode1 Enable Position */
#define ENV_MON_BCOMP1_EN_BCOMP1_EN_Msk       (_UINT8_(0xFF) << ENV_MON_BCOMP1_EN_BCOMP1_EN_Pos)   /* (ENV_MON_BCOMP1_EN) Beta compensation settings for External Diode1 Enable Mask */
#define ENV_MON_BCOMP1_EN_BCOMP1_EN(value)    (ENV_MON_BCOMP1_EN_BCOMP1_EN_Msk & (_UINT8_(value) << ENV_MON_BCOMP1_EN_BCOMP1_EN_Pos)) /* Assigment of value for BCOMP1_EN in the ENV_MON_BCOMP1_EN register */
#define ENV_MON_BCOMP1_EN_Msk                 _UINT8_(0xFF)                                        /* (ENV_MON_BCOMP1_EN) Register Mask  */


/* -------- ENV_MON_BCOMP2_EN : (ENV_MON Offset: 0x39) (R/W 8) Configure Beta compensation settings for External Diode2 -------- */
#define ENV_MON_BCOMP2_EN_RESETVALUE          _UINT8_(0x1F)                                        /*  (ENV_MON_BCOMP2_EN) Configure Beta compensation settings for External Diode2  Reset Value */

#define ENV_MON_BCOMP2_EN_BCOMP2_EN_Pos       _UINT8_(0)                                           /* (ENV_MON_BCOMP2_EN) Beta compensation settings for External Diode2 Enable Position */
#define ENV_MON_BCOMP2_EN_BCOMP2_EN_Msk       (_UINT8_(0xFF) << ENV_MON_BCOMP2_EN_BCOMP2_EN_Pos)   /* (ENV_MON_BCOMP2_EN) Beta compensation settings for External Diode2 Enable Mask */
#define ENV_MON_BCOMP2_EN_BCOMP2_EN(value)    (ENV_MON_BCOMP2_EN_BCOMP2_EN_Msk & (_UINT8_(value) << ENV_MON_BCOMP2_EN_BCOMP2_EN_Pos)) /* Assigment of value for BCOMP2_EN in the ENV_MON_BCOMP2_EN register */
#define ENV_MON_BCOMP2_EN_Msk                 _UINT8_(0xFF)                                        /* (ENV_MON_BCOMP2_EN) Register Mask  */


/* -------- ENV_MON_LCK_STRT : (ENV_MON Offset: 0x40) (R/W 8) Lock Start Register -------- */
#define ENV_MON_LCK_STRT_RESETVALUE           _UINT8_(0x01)                                        /*  (ENV_MON_LCK_STRT) Lock Start Register  Reset Value */

#define ENV_MON_LCK_STRT_BCOMP2_EN_Pos        _UINT8_(0)                                           /* (ENV_MON_LCK_STRT) Enables the software lock and monitoring functionality Position */
#define ENV_MON_LCK_STRT_BCOMP2_EN_Msk        (_UINT8_(0xFF) << ENV_MON_LCK_STRT_BCOMP2_EN_Pos)    /* (ENV_MON_LCK_STRT) Enables the software lock and monitoring functionality Mask */
#define ENV_MON_LCK_STRT_BCOMP2_EN(value)     (ENV_MON_LCK_STRT_BCOMP2_EN_Msk & (_UINT8_(value) << ENV_MON_LCK_STRT_BCOMP2_EN_Pos)) /* Assigment of value for BCOMP2_EN in the ENV_MON_LCK_STRT register */
#define ENV_MON_LCK_STRT_Msk                  _UINT8_(0xFF)                                        /* (ENV_MON_LCK_STRT) Register Mask  */


/* -------- ENV_MON_FLT_INTSTS : (ENV_MON Offset: 0x41) (R/W 8) Fault Interrupt Status Register -------- */
#define ENV_MON_FLT_INTSTS_RESETVALUE         _UINT8_(0x00)                                        /*  (ENV_MON_FLT_INTSTS) Fault Interrupt Status Register  Reset Value */

#define ENV_MON_FLT_INTSTS_FLT_INTSTS_Pos     _UINT8_(0)                                           /* (ENV_MON_FLT_INTSTS) Stores the status of the External Diode Faults Position */
#define ENV_MON_FLT_INTSTS_FLT_INTSTS_Msk     (_UINT8_(0xFF) << ENV_MON_FLT_INTSTS_FLT_INTSTS_Pos) /* (ENV_MON_FLT_INTSTS) Stores the status of the External Diode Faults Mask */
#define ENV_MON_FLT_INTSTS_FLT_INTSTS(value)  (ENV_MON_FLT_INTSTS_FLT_INTSTS_Msk & (_UINT8_(value) << ENV_MON_FLT_INTSTS_FLT_INTSTS_Pos)) /* Assigment of value for FLT_INTSTS in the ENV_MON_FLT_INTSTS register */
#define ENV_MON_FLT_INTSTS_Msk                _UINT8_(0xFF)                                        /* (ENV_MON_FLT_INTSTS) Register Mask  */


/* -------- ENV_MON_FLT_TEMPSTS : (ENV_MON Offset: 0x42) (R/W 8) Fault temperature Status Register -------- */
#define ENV_MON_FLT_TEMPSTS_RESETVALUE        _UINT8_(0x00)                                        /*  (ENV_MON_FLT_TEMPSTS) Fault temperature Status Register  Reset Value */

#define ENV_MON_FLT_TEMPSTS_FLT_TEMPSTS_Pos   _UINT8_(0)                                           /* (ENV_MON_FLT_TEMPSTS) Stores the status of the External Diode Faults Position */
#define ENV_MON_FLT_TEMPSTS_FLT_TEMPSTS_Msk   (_UINT8_(0xFF) << ENV_MON_FLT_TEMPSTS_FLT_TEMPSTS_Pos) /* (ENV_MON_FLT_TEMPSTS) Stores the status of the External Diode Faults Mask */
#define ENV_MON_FLT_TEMPSTS_FLT_TEMPSTS(value) (ENV_MON_FLT_TEMPSTS_FLT_TEMPSTS_Msk & (_UINT8_(value) << ENV_MON_FLT_TEMPSTS_FLT_TEMPSTS_Pos)) /* Assigment of value for FLT_TEMPSTS in the ENV_MON_FLT_TEMPSTS register */
#define ENV_MON_FLT_TEMPSTS_Msk               _UINT8_(0xFF)                                        /* (ENV_MON_FLT_TEMPSTS) Register Mask  */


/* -------- ENV_MON_THRMTRP_STS : (ENV_MON Offset: 0x43) ( R/ 8) ThermTrip Pin Status Register -------- */
#define ENV_MON_THRMTRP_STS_RESETVALUE        _UINT8_(0x00)                                        /*  (ENV_MON_THRMTRP_STS) ThermTrip Pin Status Register  Reset Value */

#define ENV_MON_THRMTRP_STS_THRMTRP_STS_Pos   _UINT8_(0)                                           /* (ENV_MON_THRMTRP_STS) Stores the pin state of the signals that affect the SYS_SHDN_n signal Position */
#define ENV_MON_THRMTRP_STS_THRMTRP_STS_Msk   (_UINT8_(0xFF) << ENV_MON_THRMTRP_STS_THRMTRP_STS_Pos) /* (ENV_MON_THRMTRP_STS) Stores the pin state of the signals that affect the SYS_SHDN_n signal Mask */
#define ENV_MON_THRMTRP_STS_THRMTRP_STS(value) (ENV_MON_THRMTRP_STS_THRMTRP_STS_Msk & (_UINT8_(value) << ENV_MON_THRMTRP_STS_THRMTRP_STS_Pos)) /* Assigment of value for THRMTRP_STS in the ENV_MON_THRMTRP_STS register */
#define ENV_MON_THRMTRP_STS_Msk               _UINT8_(0xFF)                                        /* (ENV_MON_THRMTRP_STS) Register Mask  */


/* -------- ENV_MON_INT_TEMP_STS : (ENV_MON Offset: 0x44) (R/W 8) Temperature of Internal Diode Register -------- */
#define ENV_MON_INT_TEMP_STS_RESETVALUE       _UINT8_(0x00)                                        /*  (ENV_MON_INT_TEMP_STS) Temperature of Internal Diode Register  Reset Value */

#define ENV_MON_INT_TEMP_STS_TEMP_STS_Pos     _UINT8_(0)                                           /* (ENV_MON_INT_TEMP_STS) Stores the status bits for the Internal Diode Position */
#define ENV_MON_INT_TEMP_STS_TEMP_STS_Msk     (_UINT8_(0xFF) << ENV_MON_INT_TEMP_STS_TEMP_STS_Pos) /* (ENV_MON_INT_TEMP_STS) Stores the status bits for the Internal Diode Mask */
#define ENV_MON_INT_TEMP_STS_TEMP_STS(value)  (ENV_MON_INT_TEMP_STS_TEMP_STS_Msk & (_UINT8_(value) << ENV_MON_INT_TEMP_STS_TEMP_STS_Pos)) /* Assigment of value for TEMP_STS in the ENV_MON_INT_TEMP_STS register */
#define ENV_MON_INT_TEMP_STS_Msk              _UINT8_(0xFF)                                        /* (ENV_MON_INT_TEMP_STS) Register Mask  */


/* -------- ENV_MON_VLT_INTSTS : (ENV_MON Offset: 0x45) (R/W 8) Volt Interrupt Status Register -------- */
#define ENV_MON_VLT_INTSTS_RESETVALUE         _UINT8_(0x00)                                        /*  (ENV_MON_VLT_INTSTS) Volt Interrupt Status Register  Reset Value */

#define ENV_MON_VLT_INTSTS_VLTINTSTS_Pos      _UINT8_(0)                                           /* (ENV_MON_VLT_INTSTS) Stores the status bits for voltage inputs Position */
#define ENV_MON_VLT_INTSTS_VLTINTSTS_Msk      (_UINT8_(0xFF) << ENV_MON_VLT_INTSTS_VLTINTSTS_Pos)  /* (ENV_MON_VLT_INTSTS) Stores the status bits for voltage inputs Mask */
#define ENV_MON_VLT_INTSTS_VLTINTSTS(value)   (ENV_MON_VLT_INTSTS_VLTINTSTS_Msk & (_UINT8_(value) << ENV_MON_VLT_INTSTS_VLTINTSTS_Pos)) /* Assigment of value for VLTINTSTS in the ENV_MON_VLT_INTSTS register */
#define ENV_MON_VLT_INTSTS_Msk                _UINT8_(0xFF)                                        /* (ENV_MON_VLT_INTSTS) Register Mask  */


/* -------- ENV_MON_VCP_LIMIT : (ENV_MON Offset: 0x46) (R/W 16) VCP Limit Register -------- */
#define ENV_MON_VCP_LIMIT_RESETVALUE          _UINT16_(0x00)                                       /*  (ENV_MON_VCP_LIMIT) VCP Limit Register  Reset Value */

#define ENV_MON_VCP_LIMIT_VCP_LIMIT_Pos       _UINT16_(0)                                          /* (ENV_MON_VCP_LIMIT) Limit for VCP Voltage Monitor Position */
#define ENV_MON_VCP_LIMIT_VCP_LIMIT_Msk       (_UINT16_(0xFFFF) << ENV_MON_VCP_LIMIT_VCP_LIMIT_Pos) /* (ENV_MON_VCP_LIMIT) Limit for VCP Voltage Monitor Mask */
#define ENV_MON_VCP_LIMIT_VCP_LIMIT(value)    (ENV_MON_VCP_LIMIT_VCP_LIMIT_Msk & (_UINT16_(value) << ENV_MON_VCP_LIMIT_VCP_LIMIT_Pos)) /* Assigment of value for VCP_LIMIT in the ENV_MON_VCP_LIMIT register */
#define ENV_MON_VCP_LIMIT_Msk                 _UINT16_(0xFFFF)                                     /* (ENV_MON_VCP_LIMIT) Register Mask  */


/* -------- ENV_MON_VTR_LIMIT : (ENV_MON Offset: 0x48) (R/W 16) VTR Limit Register -------- */
#define ENV_MON_VTR_LIMIT_RESETVALUE          _UINT16_(0xFF00)                                     /*  (ENV_MON_VTR_LIMIT) VTR Limit Register  Reset Value */

#define ENV_MON_VTR_LIMIT_VTR_LIMIT_Pos       _UINT16_(0)                                          /* (ENV_MON_VTR_LIMIT) Limit for VTR Voltage Monitor Position */
#define ENV_MON_VTR_LIMIT_VTR_LIMIT_Msk       (_UINT16_(0xFFFF) << ENV_MON_VTR_LIMIT_VTR_LIMIT_Pos) /* (ENV_MON_VTR_LIMIT) Limit for VTR Voltage Monitor Mask */
#define ENV_MON_VTR_LIMIT_VTR_LIMIT(value)    (ENV_MON_VTR_LIMIT_VTR_LIMIT_Msk & (_UINT16_(value) << ENV_MON_VTR_LIMIT_VTR_LIMIT_Pos)) /* Assigment of value for VTR_LIMIT in the ENV_MON_VTR_LIMIT register */
#define ENV_MON_VTR_LIMIT_Msk                 _UINT16_(0xFFFF)                                     /* (ENV_MON_VTR_LIMIT) Register Mask  */


/* -------- ENV_MON_VTT_LIMIT : (ENV_MON Offset: 0x4A) (R/W 16) VTT Limit Register -------- */
#define ENV_MON_VTT_LIMIT_RESETVALUE          _UINT16_(0xFF00)                                     /*  (ENV_MON_VTT_LIMIT) VTT Limit Register  Reset Value */

#define ENV_MON_VTT_LIMIT_VTT_LIMIT_Pos       _UINT16_(0)                                          /* (ENV_MON_VTT_LIMIT) Limit for VTT Voltage Monitor Position */
#define ENV_MON_VTT_LIMIT_VTT_LIMIT_Msk       (_UINT16_(0xFFFF) << ENV_MON_VTT_LIMIT_VTT_LIMIT_Pos) /* (ENV_MON_VTT_LIMIT) Limit for VTT Voltage Monitor Mask */
#define ENV_MON_VTT_LIMIT_VTT_LIMIT(value)    (ENV_MON_VTT_LIMIT_VTT_LIMIT_Msk & (_UINT16_(value) << ENV_MON_VTT_LIMIT_VTT_LIMIT_Pos)) /* Assigment of value for VTT_LIMIT in the ENV_MON_VTT_LIMIT register */
#define ENV_MON_VTT_LIMIT_Msk                 _UINT16_(0xFFFF)                                     /* (ENV_MON_VTT_LIMIT) Register Mask  */


/* -------- ENV_MON_VIN_LIMIT : (ENV_MON Offset: 0x4C) (R/W 16) VIN Limit Register -------- */
#define ENV_MON_VIN_LIMIT_RESETVALUE          _UINT16_(0xFF00)                                     /*  (ENV_MON_VIN_LIMIT) VIN Limit Register  Reset Value */

#define ENV_MON_VIN_LIMIT_VTT_LIMIT_Pos       _UINT16_(0)                                          /* (ENV_MON_VIN_LIMIT) Limit for VIN Voltage Monitor Position */
#define ENV_MON_VIN_LIMIT_VTT_LIMIT_Msk       (_UINT16_(0xFFFF) << ENV_MON_VIN_LIMIT_VTT_LIMIT_Pos) /* (ENV_MON_VIN_LIMIT) Limit for VIN Voltage Monitor Mask */
#define ENV_MON_VIN_LIMIT_VTT_LIMIT(value)    (ENV_MON_VIN_LIMIT_VTT_LIMIT_Msk & (_UINT16_(value) << ENV_MON_VIN_LIMIT_VTT_LIMIT_Pos)) /* Assigment of value for VTT_LIMIT in the ENV_MON_VIN_LIMIT register */
#define ENV_MON_VIN_LIMIT_Msk                 _UINT16_(0xFFFF)                                     /* (ENV_MON_VIN_LIMIT) Register Mask  */


/* -------- ENV_MON_EXT1_TMPLO_LMT : (ENV_MON Offset: 0x4E) (R/W 8) Low limit for External Diode 1 Register -------- */
#define ENV_MON_EXT1_TMPLO_LMT_RESETVALUE     _UINT8_(0x81)                                        /*  (ENV_MON_EXT1_TMPLO_LMT) Low limit for External Diode 1 Register  Reset Value */

#define ENV_MON_EXT1_TMPLO_LMT_TMPLO1_LIMIT_Pos _UINT8_(0)                                           /* (ENV_MON_EXT1_TMPLO_LMT) Low limit for External Diode 1 Register Position */
#define ENV_MON_EXT1_TMPLO_LMT_TMPLO1_LIMIT_Msk (_UINT8_(0xFF) << ENV_MON_EXT1_TMPLO_LMT_TMPLO1_LIMIT_Pos) /* (ENV_MON_EXT1_TMPLO_LMT) Low limit for External Diode 1 Register Mask */
#define ENV_MON_EXT1_TMPLO_LMT_TMPLO1_LIMIT(value) (ENV_MON_EXT1_TMPLO_LMT_TMPLO1_LIMIT_Msk & (_UINT8_(value) << ENV_MON_EXT1_TMPLO_LMT_TMPLO1_LIMIT_Pos)) /* Assigment of value for TMPLO1_LIMIT in the ENV_MON_EXT1_TMPLO_LMT register */
#define ENV_MON_EXT1_TMPLO_LMT_Msk            _UINT8_(0xFF)                                        /* (ENV_MON_EXT1_TMPLO_LMT) Register Mask  */


/* -------- ENV_MON_EXT1_TMPHI_LMT : (ENV_MON Offset: 0x4F) (R/W 8) High limit for External Diode 1 Register -------- */
#define ENV_MON_EXT1_TMPHI_LMT_RESETVALUE     _UINT8_(0x7F)                                        /*  (ENV_MON_EXT1_TMPHI_LMT) High limit for External Diode 1 Register  Reset Value */

#define ENV_MON_EXT1_TMPHI_LMT_TMPHI1_LIMIT_Pos _UINT8_(0)                                           /* (ENV_MON_EXT1_TMPHI_LMT) High limit for External Diode 1 Register Position */
#define ENV_MON_EXT1_TMPHI_LMT_TMPHI1_LIMIT_Msk (_UINT8_(0xFF) << ENV_MON_EXT1_TMPHI_LMT_TMPHI1_LIMIT_Pos) /* (ENV_MON_EXT1_TMPHI_LMT) High limit for External Diode 1 Register Mask */
#define ENV_MON_EXT1_TMPHI_LMT_TMPHI1_LIMIT(value) (ENV_MON_EXT1_TMPHI_LMT_TMPHI1_LIMIT_Msk & (_UINT8_(value) << ENV_MON_EXT1_TMPHI_LMT_TMPHI1_LIMIT_Pos)) /* Assigment of value for TMPHI1_LIMIT in the ENV_MON_EXT1_TMPHI_LMT register */
#define ENV_MON_EXT1_TMPHI_LMT_Msk            _UINT8_(0xFF)                                        /* (ENV_MON_EXT1_TMPHI_LMT) Register Mask  */


/* -------- ENV_MON_INT_TMPLO_LMT : (ENV_MON Offset: 0x50) (R/W 8) Low limit for Internal Diode Register -------- */
#define ENV_MON_INT_TMPLO_LMT_RESETVALUE      _UINT8_(0x81)                                        /*  (ENV_MON_INT_TMPLO_LMT) Low limit for Internal Diode Register  Reset Value */

#define ENV_MON_INT_TMPLO_LMT_TMPLO_LIMIT_Pos _UINT8_(0)                                           /* (ENV_MON_INT_TMPLO_LMT) Low limit for Internal Diode Register Position */
#define ENV_MON_INT_TMPLO_LMT_TMPLO_LIMIT_Msk (_UINT8_(0xFF) << ENV_MON_INT_TMPLO_LMT_TMPLO_LIMIT_Pos) /* (ENV_MON_INT_TMPLO_LMT) Low limit for Internal Diode Register Mask */
#define ENV_MON_INT_TMPLO_LMT_TMPLO_LIMIT(value) (ENV_MON_INT_TMPLO_LMT_TMPLO_LIMIT_Msk & (_UINT8_(value) << ENV_MON_INT_TMPLO_LMT_TMPLO_LIMIT_Pos)) /* Assigment of value for TMPLO_LIMIT in the ENV_MON_INT_TMPLO_LMT register */
#define ENV_MON_INT_TMPLO_LMT_Msk             _UINT8_(0xFF)                                        /* (ENV_MON_INT_TMPLO_LMT) Register Mask  */


/* -------- ENV_MON_INT_TMPHI_LMT : (ENV_MON Offset: 0x51) (R/W 8) High limit for Internal Diode Register -------- */
#define ENV_MON_INT_TMPHI_LMT_RESETVALUE      _UINT8_(0x7F)                                        /*  (ENV_MON_INT_TMPHI_LMT) High limit for Internal Diode Register  Reset Value */

#define ENV_MON_INT_TMPHI_LMT_TMPHI_LIMIT_Pos _UINT8_(0)                                           /* (ENV_MON_INT_TMPHI_LMT) High limit for internal Diode Register Position */
#define ENV_MON_INT_TMPHI_LMT_TMPHI_LIMIT_Msk (_UINT8_(0xFF) << ENV_MON_INT_TMPHI_LMT_TMPHI_LIMIT_Pos) /* (ENV_MON_INT_TMPHI_LMT) High limit for internal Diode Register Mask */
#define ENV_MON_INT_TMPHI_LMT_TMPHI_LIMIT(value) (ENV_MON_INT_TMPHI_LMT_TMPHI_LIMIT_Msk & (_UINT8_(value) << ENV_MON_INT_TMPHI_LMT_TMPHI_LIMIT_Pos)) /* Assigment of value for TMPHI_LIMIT in the ENV_MON_INT_TMPHI_LMT register */
#define ENV_MON_INT_TMPHI_LMT_Msk             _UINT8_(0xFF)                                        /* (ENV_MON_INT_TMPHI_LMT) Register Mask  */


/* -------- ENV_MON_EXT2_TMPLO_LMT : (ENV_MON Offset: 0x52) (R/W 8) Low limit for External Diode 2 Register -------- */
#define ENV_MON_EXT2_TMPLO_LMT_RESETVALUE     _UINT8_(0x81)                                        /*  (ENV_MON_EXT2_TMPLO_LMT) Low limit for External Diode 2 Register  Reset Value */

#define ENV_MON_EXT2_TMPLO_LMT_TMPLO2_LIMIT_Pos _UINT8_(0)                                           /* (ENV_MON_EXT2_TMPLO_LMT) Low limit for External Diode 2 Register Position */
#define ENV_MON_EXT2_TMPLO_LMT_TMPLO2_LIMIT_Msk (_UINT8_(0xFF) << ENV_MON_EXT2_TMPLO_LMT_TMPLO2_LIMIT_Pos) /* (ENV_MON_EXT2_TMPLO_LMT) Low limit for External Diode 2 Register Mask */
#define ENV_MON_EXT2_TMPLO_LMT_TMPLO2_LIMIT(value) (ENV_MON_EXT2_TMPLO_LMT_TMPLO2_LIMIT_Msk & (_UINT8_(value) << ENV_MON_EXT2_TMPLO_LMT_TMPLO2_LIMIT_Pos)) /* Assigment of value for TMPLO2_LIMIT in the ENV_MON_EXT2_TMPLO_LMT register */
#define ENV_MON_EXT2_TMPLO_LMT_Msk            _UINT8_(0xFF)                                        /* (ENV_MON_EXT2_TMPLO_LMT) Register Mask  */


/* -------- ENV_MON_EXT2_TMPHI_LMT : (ENV_MON Offset: 0x53) (R/W 8) High limit for External Diode 2 Register -------- */
#define ENV_MON_EXT2_TMPHI_LMT_RESETVALUE     _UINT8_(0x7F)                                        /*  (ENV_MON_EXT2_TMPHI_LMT) High limit for External Diode 2 Register  Reset Value */

#define ENV_MON_EXT2_TMPHI_LMT_TMPHI2_LIMIT_Pos _UINT8_(0)                                           /* (ENV_MON_EXT2_TMPHI_LMT) High limit for External Diode 2 Register Position */
#define ENV_MON_EXT2_TMPHI_LMT_TMPHI2_LIMIT_Msk (_UINT8_(0xFF) << ENV_MON_EXT2_TMPHI_LMT_TMPHI2_LIMIT_Pos) /* (ENV_MON_EXT2_TMPHI_LMT) High limit for External Diode 2 Register Mask */
#define ENV_MON_EXT2_TMPHI_LMT_TMPHI2_LIMIT(value) (ENV_MON_EXT2_TMPHI_LMT_TMPHI2_LIMIT_Msk & (_UINT8_(value) << ENV_MON_EXT2_TMPHI_LMT_TMPHI2_LIMIT_Pos)) /* Assigment of value for TMPHI2_LIMIT in the ENV_MON_EXT2_TMPHI_LMT register */
#define ENV_MON_EXT2_TMPHI_LMT_Msk            _UINT8_(0xFF)                                        /* (ENV_MON_EXT2_TMPHI_LMT) Register Mask  */


/* -------- ENV_MON_EXT3_TMPLO_LMT : (ENV_MON Offset: 0x54) (R/W 8) Low limit for External Diode 3 Register -------- */
#define ENV_MON_EXT3_TMPLO_LMT_RESETVALUE     _UINT8_(0x81)                                        /*  (ENV_MON_EXT3_TMPLO_LMT) Low limit for External Diode 3 Register  Reset Value */

#define ENV_MON_EXT3_TMPLO_LMT_TMPLO3_LIMIT_Pos _UINT8_(0)                                           /* (ENV_MON_EXT3_TMPLO_LMT) Low limit for External Diode 3 Register Position */
#define ENV_MON_EXT3_TMPLO_LMT_TMPLO3_LIMIT_Msk (_UINT8_(0xFF) << ENV_MON_EXT3_TMPLO_LMT_TMPLO3_LIMIT_Pos) /* (ENV_MON_EXT3_TMPLO_LMT) Low limit for External Diode 3 Register Mask */
#define ENV_MON_EXT3_TMPLO_LMT_TMPLO3_LIMIT(value) (ENV_MON_EXT3_TMPLO_LMT_TMPLO3_LIMIT_Msk & (_UINT8_(value) << ENV_MON_EXT3_TMPLO_LMT_TMPLO3_LIMIT_Pos)) /* Assigment of value for TMPLO3_LIMIT in the ENV_MON_EXT3_TMPLO_LMT register */
#define ENV_MON_EXT3_TMPLO_LMT_Msk            _UINT8_(0xFF)                                        /* (ENV_MON_EXT3_TMPLO_LMT) Register Mask  */


/* -------- ENV_MON_EXT3_TMPHI_LMT : (ENV_MON Offset: 0x55) (R/W 8) High limit for External Diode 3 Register -------- */
#define ENV_MON_EXT3_TMPHI_LMT_RESETVALUE     _UINT8_(0x7F)                                        /*  (ENV_MON_EXT3_TMPHI_LMT) High limit for External Diode 3 Register  Reset Value */

#define ENV_MON_EXT3_TMPHI_LMT_TMPHI3_LIMIT_Pos _UINT8_(0)                                           /* (ENV_MON_EXT3_TMPHI_LMT) High limit for External Diode 3 Register Position */
#define ENV_MON_EXT3_TMPHI_LMT_TMPHI3_LIMIT_Msk (_UINT8_(0xFF) << ENV_MON_EXT3_TMPHI_LMT_TMPHI3_LIMIT_Pos) /* (ENV_MON_EXT3_TMPHI_LMT) High limit for External Diode 3 Register Mask */
#define ENV_MON_EXT3_TMPHI_LMT_TMPHI3_LIMIT(value) (ENV_MON_EXT3_TMPHI_LMT_TMPHI3_LIMIT_Msk & (_UINT8_(value) << ENV_MON_EXT3_TMPHI_LMT_TMPHI3_LIMIT_Pos)) /* Assigment of value for TMPHI3_LIMIT in the ENV_MON_EXT3_TMPHI_LMT register */
#define ENV_MON_EXT3_TMPHI_LMT_Msk            _UINT8_(0xFF)                                        /* (ENV_MON_EXT3_TMPHI_LMT) Register Mask  */


/* -------- ENV_MON_EXT4_TMPLO_LMT : (ENV_MON Offset: 0x56) (R/W 8) Low limit for External Diode 4 Register -------- */
#define ENV_MON_EXT4_TMPLO_LMT_RESETVALUE     _UINT8_(0x81)                                        /*  (ENV_MON_EXT4_TMPLO_LMT) Low limit for External Diode 4 Register  Reset Value */

#define ENV_MON_EXT4_TMPLO_LMT_TMPLO4_LIMIT_Pos _UINT8_(0)                                           /* (ENV_MON_EXT4_TMPLO_LMT) Low limit for External Diode 4 Register Position */
#define ENV_MON_EXT4_TMPLO_LMT_TMPLO4_LIMIT_Msk (_UINT8_(0xFF) << ENV_MON_EXT4_TMPLO_LMT_TMPLO4_LIMIT_Pos) /* (ENV_MON_EXT4_TMPLO_LMT) Low limit for External Diode 4 Register Mask */
#define ENV_MON_EXT4_TMPLO_LMT_TMPLO4_LIMIT(value) (ENV_MON_EXT4_TMPLO_LMT_TMPLO4_LIMIT_Msk & (_UINT8_(value) << ENV_MON_EXT4_TMPLO_LMT_TMPLO4_LIMIT_Pos)) /* Assigment of value for TMPLO4_LIMIT in the ENV_MON_EXT4_TMPLO_LMT register */
#define ENV_MON_EXT4_TMPLO_LMT_Msk            _UINT8_(0xFF)                                        /* (ENV_MON_EXT4_TMPLO_LMT) Register Mask  */


/* -------- ENV_MON_EXT4_TMPHI_LMT : (ENV_MON Offset: 0x57) (R/W 8) High limit for External Diode 4 Register -------- */
#define ENV_MON_EXT4_TMPHI_LMT_RESETVALUE     _UINT8_(0x7F)                                        /*  (ENV_MON_EXT4_TMPHI_LMT) High limit for External Diode 4 Register  Reset Value */

#define ENV_MON_EXT4_TMPHI_LMT_TMPHI4_LIMIT_Pos _UINT8_(0)                                           /* (ENV_MON_EXT4_TMPHI_LMT) High limit for External Diode 4 Register Position */
#define ENV_MON_EXT4_TMPHI_LMT_TMPHI4_LIMIT_Msk (_UINT8_(0xFF) << ENV_MON_EXT4_TMPHI_LMT_TMPHI4_LIMIT_Pos) /* (ENV_MON_EXT4_TMPHI_LMT) High limit for External Diode 4 Register Mask */
#define ENV_MON_EXT4_TMPHI_LMT_TMPHI4_LIMIT(value) (ENV_MON_EXT4_TMPHI_LMT_TMPHI4_LIMIT_Msk & (_UINT8_(value) << ENV_MON_EXT4_TMPHI_LMT_TMPHI4_LIMIT_Pos)) /* Assigment of value for TMPHI4_LIMIT in the ENV_MON_EXT4_TMPHI_LMT register */
#define ENV_MON_EXT4_TMPHI_LMT_Msk            _UINT8_(0xFF)                                        /* (ENV_MON_EXT4_TMPHI_LMT) Register Mask  */


/* -------- ENV_MON_EXT1A_TMPLO_LMT : (ENV_MON Offset: 0x58) (R/W 8) Low limit for External Diode 1A Register -------- */
#define ENV_MON_EXT1A_TMPLO_LMT_RESETVALUE    _UINT8_(0x81)                                        /*  (ENV_MON_EXT1A_TMPLO_LMT) Low limit for External Diode 1A Register  Reset Value */

#define ENV_MON_EXT1A_TMPLO_LMT_TMPLO1A_LIMIT_Pos _UINT8_(0)                                           /* (ENV_MON_EXT1A_TMPLO_LMT) Low limit for External Diode 1A Register Position */
#define ENV_MON_EXT1A_TMPLO_LMT_TMPLO1A_LIMIT_Msk (_UINT8_(0xFF) << ENV_MON_EXT1A_TMPLO_LMT_TMPLO1A_LIMIT_Pos) /* (ENV_MON_EXT1A_TMPLO_LMT) Low limit for External Diode 1A Register Mask */
#define ENV_MON_EXT1A_TMPLO_LMT_TMPLO1A_LIMIT(value) (ENV_MON_EXT1A_TMPLO_LMT_TMPLO1A_LIMIT_Msk & (_UINT8_(value) << ENV_MON_EXT1A_TMPLO_LMT_TMPLO1A_LIMIT_Pos)) /* Assigment of value for TMPLO1A_LIMIT in the ENV_MON_EXT1A_TMPLO_LMT register */
#define ENV_MON_EXT1A_TMPLO_LMT_Msk           _UINT8_(0xFF)                                        /* (ENV_MON_EXT1A_TMPLO_LMT) Register Mask  */


/* -------- ENV_MON_EXT1A_TMPHI_LMT : (ENV_MON Offset: 0x59) (R/W 8) High limit for External Diode 1A Register -------- */
#define ENV_MON_EXT1A_TMPHI_LMT_RESETVALUE    _UINT8_(0x7F)                                        /*  (ENV_MON_EXT1A_TMPHI_LMT) High limit for External Diode 1A Register  Reset Value */

#define ENV_MON_EXT1A_TMPHI_LMT_TMPHI1A_LIMIT_Pos _UINT8_(0)                                           /* (ENV_MON_EXT1A_TMPHI_LMT) High limit for External Diode 1A Register Position */
#define ENV_MON_EXT1A_TMPHI_LMT_TMPHI1A_LIMIT_Msk (_UINT8_(0xFF) << ENV_MON_EXT1A_TMPHI_LMT_TMPHI1A_LIMIT_Pos) /* (ENV_MON_EXT1A_TMPHI_LMT) High limit for External Diode 1A Register Mask */
#define ENV_MON_EXT1A_TMPHI_LMT_TMPHI1A_LIMIT(value) (ENV_MON_EXT1A_TMPHI_LMT_TMPHI1A_LIMIT_Msk & (_UINT8_(value) << ENV_MON_EXT1A_TMPHI_LMT_TMPHI1A_LIMIT_Pos)) /* Assigment of value for TMPHI1A_LIMIT in the ENV_MON_EXT1A_TMPHI_LMT register */
#define ENV_MON_EXT1A_TMPHI_LMT_Msk           _UINT8_(0xFF)                                        /* (ENV_MON_EXT1A_TMPHI_LMT) Register Mask  */


/* -------- ENV_MON_EXT2A_TMPLO_LMT : (ENV_MON Offset: 0x5A) (R/W 8) Low limit for External Diode 2A Register -------- */
#define ENV_MON_EXT2A_TMPLO_LMT_RESETVALUE    _UINT8_(0x81)                                        /*  (ENV_MON_EXT2A_TMPLO_LMT) Low limit for External Diode 2A Register  Reset Value */

#define ENV_MON_EXT2A_TMPLO_LMT_TMPLO2A_LIMIT_Pos _UINT8_(0)                                           /* (ENV_MON_EXT2A_TMPLO_LMT) Low limit for External Diode 2A Register Position */
#define ENV_MON_EXT2A_TMPLO_LMT_TMPLO2A_LIMIT_Msk (_UINT8_(0xFF) << ENV_MON_EXT2A_TMPLO_LMT_TMPLO2A_LIMIT_Pos) /* (ENV_MON_EXT2A_TMPLO_LMT) Low limit for External Diode 2A Register Mask */
#define ENV_MON_EXT2A_TMPLO_LMT_TMPLO2A_LIMIT(value) (ENV_MON_EXT2A_TMPLO_LMT_TMPLO2A_LIMIT_Msk & (_UINT8_(value) << ENV_MON_EXT2A_TMPLO_LMT_TMPLO2A_LIMIT_Pos)) /* Assigment of value for TMPLO2A_LIMIT in the ENV_MON_EXT2A_TMPLO_LMT register */
#define ENV_MON_EXT2A_TMPLO_LMT_Msk           _UINT8_(0xFF)                                        /* (ENV_MON_EXT2A_TMPLO_LMT) Register Mask  */


/* -------- ENV_MON_EXT2A_TMPHI_LMT : (ENV_MON Offset: 0x5B) (R/W 8) High limit for External Diode 2A Register -------- */
#define ENV_MON_EXT2A_TMPHI_LMT_RESETVALUE    _UINT8_(0x7F)                                        /*  (ENV_MON_EXT2A_TMPHI_LMT) High limit for External Diode 2A Register  Reset Value */

#define ENV_MON_EXT2A_TMPHI_LMT_TMPHI2A_LIMIT_Pos _UINT8_(0)                                           /* (ENV_MON_EXT2A_TMPHI_LMT) High limit for External Diode 2A Register Position */
#define ENV_MON_EXT2A_TMPHI_LMT_TMPHI2A_LIMIT_Msk (_UINT8_(0xFF) << ENV_MON_EXT2A_TMPHI_LMT_TMPHI2A_LIMIT_Pos) /* (ENV_MON_EXT2A_TMPHI_LMT) High limit for External Diode 2A Register Mask */
#define ENV_MON_EXT2A_TMPHI_LMT_TMPHI2A_LIMIT(value) (ENV_MON_EXT2A_TMPHI_LMT_TMPHI2A_LIMIT_Msk & (_UINT8_(value) << ENV_MON_EXT2A_TMPHI_LMT_TMPHI2A_LIMIT_Pos)) /* Assigment of value for TMPHI2A_LIMIT in the ENV_MON_EXT2A_TMPHI_LMT register */
#define ENV_MON_EXT2A_TMPHI_LMT_Msk           _UINT8_(0xFF)                                        /* (ENV_MON_EXT2A_TMPHI_LMT) Register Mask  */


/* -------- ENV_MON_EXT3A_TMPLO_LMT : (ENV_MON Offset: 0x5C) (R/W 8) Low limit for External Diode 3A Register -------- */
#define ENV_MON_EXT3A_TMPLO_LMT_RESETVALUE    _UINT8_(0x81)                                        /*  (ENV_MON_EXT3A_TMPLO_LMT) Low limit for External Diode 3A Register  Reset Value */

#define ENV_MON_EXT3A_TMPLO_LMT_TMPLO3A_LIMIT_Pos _UINT8_(0)                                           /* (ENV_MON_EXT3A_TMPLO_LMT) Low limit for External Diode 3A Register Position */
#define ENV_MON_EXT3A_TMPLO_LMT_TMPLO3A_LIMIT_Msk (_UINT8_(0xFF) << ENV_MON_EXT3A_TMPLO_LMT_TMPLO3A_LIMIT_Pos) /* (ENV_MON_EXT3A_TMPLO_LMT) Low limit for External Diode 3A Register Mask */
#define ENV_MON_EXT3A_TMPLO_LMT_TMPLO3A_LIMIT(value) (ENV_MON_EXT3A_TMPLO_LMT_TMPLO3A_LIMIT_Msk & (_UINT8_(value) << ENV_MON_EXT3A_TMPLO_LMT_TMPLO3A_LIMIT_Pos)) /* Assigment of value for TMPLO3A_LIMIT in the ENV_MON_EXT3A_TMPLO_LMT register */
#define ENV_MON_EXT3A_TMPLO_LMT_Msk           _UINT8_(0xFF)                                        /* (ENV_MON_EXT3A_TMPLO_LMT) Register Mask  */


/* -------- ENV_MON_EXT3A_TMPHI_LMT : (ENV_MON Offset: 0x5D) (R/W 8) High limit for External Diode 3A Register -------- */
#define ENV_MON_EXT3A_TMPHI_LMT_RESETVALUE    _UINT8_(0x7F)                                        /*  (ENV_MON_EXT3A_TMPHI_LMT) High limit for External Diode 3A Register  Reset Value */

#define ENV_MON_EXT3A_TMPHI_LMT_TMPHI3A_LIMIT_Pos _UINT8_(0)                                           /* (ENV_MON_EXT3A_TMPHI_LMT) High limit for External Diode 3A Register Position */
#define ENV_MON_EXT3A_TMPHI_LMT_TMPHI3A_LIMIT_Msk (_UINT8_(0xFF) << ENV_MON_EXT3A_TMPHI_LMT_TMPHI3A_LIMIT_Pos) /* (ENV_MON_EXT3A_TMPHI_LMT) High limit for External Diode 3A Register Mask */
#define ENV_MON_EXT3A_TMPHI_LMT_TMPHI3A_LIMIT(value) (ENV_MON_EXT3A_TMPHI_LMT_TMPHI3A_LIMIT_Msk & (_UINT8_(value) << ENV_MON_EXT3A_TMPHI_LMT_TMPHI3A_LIMIT_Pos)) /* Assigment of value for TMPHI3A_LIMIT in the ENV_MON_EXT3A_TMPHI_LMT register */
#define ENV_MON_EXT3A_TMPHI_LMT_Msk           _UINT8_(0xFF)                                        /* (ENV_MON_EXT3A_TMPHI_LMT) Register Mask  */


/* -------- ENV_MON_EXT4A_TMPLO_LMT : (ENV_MON Offset: 0x5E) (R/W 8) Low limit for External Diode 4A Register -------- */
#define ENV_MON_EXT4A_TMPLO_LMT_RESETVALUE    _UINT8_(0x81)                                        /*  (ENV_MON_EXT4A_TMPLO_LMT) Low limit for External Diode 4A Register  Reset Value */

#define ENV_MON_EXT4A_TMPLO_LMT_TMPLO4A_LIMIT_Pos _UINT8_(0)                                           /* (ENV_MON_EXT4A_TMPLO_LMT) Low limit for External Diode 4A Register Position */
#define ENV_MON_EXT4A_TMPLO_LMT_TMPLO4A_LIMIT_Msk (_UINT8_(0xFF) << ENV_MON_EXT4A_TMPLO_LMT_TMPLO4A_LIMIT_Pos) /* (ENV_MON_EXT4A_TMPLO_LMT) Low limit for External Diode 4A Register Mask */
#define ENV_MON_EXT4A_TMPLO_LMT_TMPLO4A_LIMIT(value) (ENV_MON_EXT4A_TMPLO_LMT_TMPLO4A_LIMIT_Msk & (_UINT8_(value) << ENV_MON_EXT4A_TMPLO_LMT_TMPLO4A_LIMIT_Pos)) /* Assigment of value for TMPLO4A_LIMIT in the ENV_MON_EXT4A_TMPLO_LMT register */
#define ENV_MON_EXT4A_TMPLO_LMT_Msk           _UINT8_(0xFF)                                        /* (ENV_MON_EXT4A_TMPLO_LMT) Register Mask  */


/* -------- ENV_MON_EXT4A_TMPHI_LMT : (ENV_MON Offset: 0x5F) (R/W 8) High limit for External Diode 4A Register -------- */
#define ENV_MON_EXT4A_TMPHI_LMT_RESETVALUE    _UINT8_(0x7F)                                        /*  (ENV_MON_EXT4A_TMPHI_LMT) High limit for External Diode 4A Register  Reset Value */

#define ENV_MON_EXT4A_TMPHI_LMT_TMPHI4A_LIMIT_Pos _UINT8_(0)                                           /* (ENV_MON_EXT4A_TMPHI_LMT) High limit for External Diode 4A Register Position */
#define ENV_MON_EXT4A_TMPHI_LMT_TMPHI4A_LIMIT_Msk (_UINT8_(0xFF) << ENV_MON_EXT4A_TMPHI_LMT_TMPHI4A_LIMIT_Pos) /* (ENV_MON_EXT4A_TMPHI_LMT) High limit for External Diode 4A Register Mask */
#define ENV_MON_EXT4A_TMPHI_LMT_TMPHI4A_LIMIT(value) (ENV_MON_EXT4A_TMPHI_LMT_TMPHI4A_LIMIT_Msk & (_UINT8_(value) << ENV_MON_EXT4A_TMPHI_LMT_TMPHI4A_LIMIT_Pos)) /* Assigment of value for TMPHI4A_LIMIT in the ENV_MON_EXT4A_TMPHI_LMT register */
#define ENV_MON_EXT4A_TMPHI_LMT_Msk           _UINT8_(0xFF)                                        /* (ENV_MON_EXT4A_TMPHI_LMT) Register Mask  */


/* -------- ENV_MON_BCOMP3_EN : (ENV_MON Offset: 0x64) (R/W 8) External Diode3 Beta compensation Register -------- */
#define ENV_MON_BCOMP3_EN_RESETVALUE          _UINT8_(0x1F)                                        /*  (ENV_MON_BCOMP3_EN) External Diode3 Beta compensation Register  Reset Value */

#define ENV_MON_BCOMP3_EN_BCOMP3_EN_Pos       _UINT8_(0)                                           /* (ENV_MON_BCOMP3_EN) Beta compensation settings for External Diode3 Enable Position */
#define ENV_MON_BCOMP3_EN_BCOMP3_EN_Msk       (_UINT8_(0xFF) << ENV_MON_BCOMP3_EN_BCOMP3_EN_Pos)   /* (ENV_MON_BCOMP3_EN) Beta compensation settings for External Diode3 Enable Mask */
#define ENV_MON_BCOMP3_EN_BCOMP3_EN(value)    (ENV_MON_BCOMP3_EN_BCOMP3_EN_Msk & (_UINT8_(value) << ENV_MON_BCOMP3_EN_BCOMP3_EN_Pos)) /* Assigment of value for BCOMP3_EN in the ENV_MON_BCOMP3_EN register */
#define ENV_MON_BCOMP3_EN_Msk                 _UINT8_(0xFF)                                        /* (ENV_MON_BCOMP3_EN) Register Mask  */


/* -------- ENV_MON_BCOMP4_EN : (ENV_MON Offset: 0x65) (R/W 8) External Diode4 Beta compensation Register -------- */
#define ENV_MON_BCOMP4_EN_RESETVALUE          _UINT8_(0x1F)                                        /*  (ENV_MON_BCOMP4_EN) External Diode4 Beta compensation Register  Reset Value */

#define ENV_MON_BCOMP4_EN_BCOMP4_EN_Pos       _UINT8_(0)                                           /* (ENV_MON_BCOMP4_EN) Beta compensation settings for External Diode4 Enable Position */
#define ENV_MON_BCOMP4_EN_BCOMP4_EN_Msk       (_UINT8_(0xFF) << ENV_MON_BCOMP4_EN_BCOMP4_EN_Pos)   /* (ENV_MON_BCOMP4_EN) Beta compensation settings for External Diode4 Enable Mask */
#define ENV_MON_BCOMP4_EN_BCOMP4_EN(value)    (ENV_MON_BCOMP4_EN_BCOMP4_EN_Msk & (_UINT8_(value) << ENV_MON_BCOMP4_EN_BCOMP4_EN_Pos)) /* Assigment of value for BCOMP4_EN in the ENV_MON_BCOMP4_EN register */
#define ENV_MON_BCOMP4_EN_Msk                 _UINT8_(0xFF)                                        /* (ENV_MON_BCOMP4_EN) Register Mask  */


/* -------- ENV_MON_BCOMP_INTD_EN : (ENV_MON Offset: 0x67) (R/W 8) Internal Diode Beta compensation Register -------- */
#define ENV_MON_BCOMP_INTD_EN_RESETVALUE      _UINT8_(0x0E)                                        /*  (ENV_MON_BCOMP_INTD_EN) Internal Diode Beta compensation Register  Reset Value */

#define ENV_MON_BCOMP_INTD_EN_BCOMP4_EN_Pos   _UINT8_(0)                                           /* (ENV_MON_BCOMP_INTD_EN) Beta compensation settings for internal Diode1 Enable Position */
#define ENV_MON_BCOMP_INTD_EN_BCOMP4_EN_Msk   (_UINT8_(0xFF) << ENV_MON_BCOMP_INTD_EN_BCOMP4_EN_Pos) /* (ENV_MON_BCOMP_INTD_EN) Beta compensation settings for internal Diode1 Enable Mask */
#define ENV_MON_BCOMP_INTD_EN_BCOMP4_EN(value) (ENV_MON_BCOMP_INTD_EN_BCOMP4_EN_Msk & (_UINT8_(value) << ENV_MON_BCOMP_INTD_EN_BCOMP4_EN_Pos)) /* Assigment of value for BCOMP4_EN in the ENV_MON_BCOMP_INTD_EN register */
#define ENV_MON_BCOMP_INTD_EN_Msk             _UINT8_(0xFF)                                        /* (ENV_MON_BCOMP_INTD_EN) Register Mask  */


/* -------- ENV_MON_CONV_SRATE : (ENV_MON Offset: 0x6C) (R/W 8) Conversion Seconds Rate Register -------- */
#define ENV_MON_CONV_SRATE_RESETVALUE         _UINT8_(0x00)                                        /*  (ENV_MON_CONV_SRATE) Conversion Seconds Rate Register  Reset Value */

#define ENV_MON_CONV_SRATE_CONV_SRATE_Pos     _UINT8_(0)                                           /* (ENV_MON_CONV_SRATE) Conversion Seconds Rate Register Position */
#define ENV_MON_CONV_SRATE_CONV_SRATE_Msk     (_UINT8_(0xFF) << ENV_MON_CONV_SRATE_CONV_SRATE_Pos) /* (ENV_MON_CONV_SRATE) Conversion Seconds Rate Register Mask */
#define ENV_MON_CONV_SRATE_CONV_SRATE(value)  (ENV_MON_CONV_SRATE_CONV_SRATE_Msk & (_UINT8_(value) << ENV_MON_CONV_SRATE_CONV_SRATE_Pos)) /* Assigment of value for CONV_SRATE in the ENV_MON_CONV_SRATE register */
#define ENV_MON_CONV_SRATE_Msk                _UINT8_(0xFF)                                        /* (ENV_MON_CONV_SRATE) Register Mask  */


/* -------- ENV_MON_CONV_MOD : (ENV_MON Offset: 0x6E) (R/W 8) Conversion Mode Register -------- */
#define ENV_MON_CONV_MOD_RESETVALUE           _UINT8_(0x00)                                        /*  (ENV_MON_CONV_MOD) Conversion Mode Register  Reset Value */

#define ENV_MON_CONV_MOD_CONV_MOD_Pos         _UINT8_(0)                                           /* (ENV_MON_CONV_MOD) Conversion Mode Register Position */
#define ENV_MON_CONV_MOD_CONV_MOD_Msk         (_UINT8_(0xFF) << ENV_MON_CONV_MOD_CONV_MOD_Pos)     /* (ENV_MON_CONV_MOD) Conversion Mode Register Mask */
#define ENV_MON_CONV_MOD_CONV_MOD(value)      (ENV_MON_CONV_MOD_CONV_MOD_Msk & (_UINT8_(value) << ENV_MON_CONV_MOD_CONV_MOD_Pos)) /* Assigment of value for CONV_MOD in the ENV_MON_CONV_MOD register */
#define ENV_MON_CONV_MOD_Msk                  _UINT8_(0xFF)                                        /* (ENV_MON_CONV_MOD) Register Mask  */


/* -------- ENV_MON_REC_EN : (ENV_MON Offset: 0x70) (R/W 8) REC Enable Register -------- */
#define ENV_MON_REC_EN_RESETVALUE             _UINT8_(0xFF)                                        /*  (ENV_MON_REC_EN) REC Enable Register  Reset Value */

#define ENV_MON_REC_EN_REC_EN_Pos             _UINT8_(0)                                           /* (ENV_MON_REC_EN) Enables REC for all external diode channels Position */
#define ENV_MON_REC_EN_REC_EN_Msk             (_UINT8_(0xFF) << ENV_MON_REC_EN_REC_EN_Pos)         /* (ENV_MON_REC_EN) Enables REC for all external diode channels Mask */
#define ENV_MON_REC_EN_REC_EN(value)          (ENV_MON_REC_EN_REC_EN_Msk & (_UINT8_(value) << ENV_MON_REC_EN_REC_EN_Pos)) /* Assigment of value for REC_EN in the ENV_MON_REC_EN register */
#define ENV_MON_REC_EN_Msk                    _UINT8_(0xFF)                                        /* (ENV_MON_REC_EN) Register Mask  */


/* -------- ENV_MON_VSET_VLT : (ENV_MON Offset: 0x71) ( R/ 8) VSET Voltage Reading Register -------- */
#define ENV_MON_VSET_VLT_RESETVALUE           _UINT8_(0xFF)                                        /*  (ENV_MON_VSET_VLT) VSET Voltage Reading Register  Reset Value */

#define ENV_MON_VSET_VLT_VSET_VLT_Pos         _UINT8_(0)                                           /* (ENV_MON_VSET_VLT) Stores the VSET Voltage Monitor reading Position */
#define ENV_MON_VSET_VLT_VSET_VLT_Msk         (_UINT8_(0xFF) << ENV_MON_VSET_VLT_VSET_VLT_Pos)     /* (ENV_MON_VSET_VLT) Stores the VSET Voltage Monitor reading Mask */
#define ENV_MON_VSET_VLT_VSET_VLT(value)      (ENV_MON_VSET_VLT_VSET_VLT_Msk & (_UINT8_(value) << ENV_MON_VSET_VLT_VSET_VLT_Pos)) /* Assigment of value for VSET_VLT in the ENV_MON_VSET_VLT register */
#define ENV_MON_VSET_VLT_Msk                  _UINT8_(0xFF)                                        /* (ENV_MON_VSET_VLT) Register Mask  */


/* -------- ENV_MON_THERM1 : (ENV_MON Offset: 0x75) ( R/ 8) Thermal Trip Temperature Diode 1 Register -------- */
#define ENV_MON_THERM1_RESETVALUE             _UINT8_(0x7F)                                        /*  (ENV_MON_THERM1) Thermal Trip Temperature Diode 1 Register  Reset Value */

#define ENV_MON_THERM1_THERM1_Pos             _UINT8_(0)                                           /* (ENV_MON_THERM1) Stores the calculated ThermTrip temperature high limit derived from the voltage on VSET and compared against External Diode 1. Position */
#define ENV_MON_THERM1_THERM1_Msk             (_UINT8_(0xFF) << ENV_MON_THERM1_THERM1_Pos)         /* (ENV_MON_THERM1) Stores the calculated ThermTrip temperature high limit derived from the voltage on VSET and compared against External Diode 1. Mask */
#define ENV_MON_THERM1_THERM1(value)          (ENV_MON_THERM1_THERM1_Msk & (_UINT8_(value) << ENV_MON_THERM1_THERM1_Pos)) /* Assigment of value for THERM1 in the ENV_MON_THERM1 register */
#define ENV_MON_THERM1_Msk                    _UINT8_(0xFF)                                        /* (ENV_MON_THERM1) Register Mask  */


/* -------- ENV_MON_FLSF_STS : (ENV_MON Offset: 0x76) ( R/ 8) FailSafe Status Register -------- */
#define ENV_MON_FLSF_STS_RESETVALUE           _UINT8_(0x00)                                        /*  (ENV_MON_FLSF_STS) FailSafe Status Register  Reset Value */

#define ENV_MON_FLSF_STS_FLSF_STS_Pos         _UINT8_(0)                                           /* (ENV_MON_FLSF_STS) Stores the status indicate which ThermTrip input condition caused the SYS_SHDN# pin to be asserted. Position */
#define ENV_MON_FLSF_STS_FLSF_STS_Msk         (_UINT8_(0xFF) << ENV_MON_FLSF_STS_FLSF_STS_Pos)     /* (ENV_MON_FLSF_STS) Stores the status indicate which ThermTrip input condition caused the SYS_SHDN# pin to be asserted. Mask */
#define ENV_MON_FLSF_STS_FLSF_STS(value)      (ENV_MON_FLSF_STS_FLSF_STS_Msk & (_UINT8_(value) << ENV_MON_FLSF_STS_FLSF_STS_Pos)) /* Assigment of value for FLSF_STS in the ENV_MON_FLSF_STS register */
#define ENV_MON_FLSF_STS_Msk                  _UINT8_(0xFF)                                        /* (ENV_MON_FLSF_STS) Register Mask  */


/* -------- ENV_MON_FLSF_CFG : (ENV_MON Offset: 0x77) (R/W 8) FailSafe Configuration Register -------- */
#define ENV_MON_FLSF_CFG_RESETVALUE           _UINT8_(0x00)                                        /*  (ENV_MON_FLSF_CFG) FailSafe Configuration Register  Reset Value */

#define ENV_MON_FLSF_CFG_FLSF_CFG_Pos         _UINT8_(0)                                           /* (ENV_MON_FLSF_CFG) Stores configuration bits that are retained over all power modes Position */
#define ENV_MON_FLSF_CFG_FLSF_CFG_Msk         (_UINT8_(0xFF) << ENV_MON_FLSF_CFG_FLSF_CFG_Pos)     /* (ENV_MON_FLSF_CFG) Stores configuration bits that are retained over all power modes Mask */
#define ENV_MON_FLSF_CFG_FLSF_CFG(value)      (ENV_MON_FLSF_CFG_FLSF_CFG_Msk & (_UINT8_(value) << ENV_MON_FLSF_CFG_FLSF_CFG_Pos)) /* Assigment of value for FLSF_CFG in the ENV_MON_FLSF_CFG register */
#define ENV_MON_FLSF_CFG_Msk                  _UINT8_(0xFF)                                        /* (ENV_MON_FLSF_CFG) Register Mask  */


/* -------- ENV_MON_SHDN_STS : (ENV_MON Offset: 0x78) ( R/ 8) Shutdown Status Register -------- */
#define ENV_MON_SHDN_STS_RESETVALUE           _UINT8_(0x00)                                        /*  (ENV_MON_SHDN_STS) Shutdown Status Register  Reset Value */

#define ENV_MON_SHDN_STS_SHDN_STS_Pos         _UINT8_(0)                                           /* (ENV_MON_SHDN_STS) Stores the status bits that indicate which diode caused the SYS_SHDN# output to assert. Position */
#define ENV_MON_SHDN_STS_SHDN_STS_Msk         (_UINT8_(0xFF) << ENV_MON_SHDN_STS_SHDN_STS_Pos)     /* (ENV_MON_SHDN_STS) Stores the status bits that indicate which diode caused the SYS_SHDN# output to assert. Mask */
#define ENV_MON_SHDN_STS_SHDN_STS(value)      (ENV_MON_SHDN_STS_SHDN_STS_Msk & (_UINT8_(value) << ENV_MON_SHDN_STS_SHDN_STS_Pos)) /* Assigment of value for SHDN_STS in the ENV_MON_SHDN_STS register */
#define ENV_MON_SHDN_STS_Msk                  _UINT8_(0xFF)                                        /* (ENV_MON_SHDN_STS) Register Mask  */


/* -------- ENV_MON_SHDN_CFG : (ENV_MON Offset: 0x79) (R/W 8) Shutdown Configuration Register -------- */
#define ENV_MON_SHDN_CFG_RESETVALUE           _UINT8_(0x01)                                        /*  (ENV_MON_SHDN_CFG) Shutdown Configuration Register  Reset Value */

#define ENV_MON_SHDN_CFG_SHDN_CFG_Pos         _UINT8_(0)                                           /* (ENV_MON_SHDN_CFG) Stores configuration bits that are retained over all power modes Position */
#define ENV_MON_SHDN_CFG_SHDN_CFG_Msk         (_UINT8_(0xFF) << ENV_MON_SHDN_CFG_SHDN_CFG_Pos)     /* (ENV_MON_SHDN_CFG) Stores configuration bits that are retained over all power modes Mask */
#define ENV_MON_SHDN_CFG_SHDN_CFG(value)      (ENV_MON_SHDN_CFG_SHDN_CFG_Msk & (_UINT8_(value) << ENV_MON_SHDN_CFG_SHDN_CFG_Pos)) /* Assigment of value for SHDN_CFG in the ENV_MON_SHDN_CFG register */
#define ENV_MON_SHDN_CFG_Msk                  _UINT8_(0xFF)                                        /* (ENV_MON_SHDN_CFG) Register Mask  */


/* -------- ENV_MON_FLT_INTSTS_EN : (ENV_MON Offset: 0x7A) (R/W 8) Fault Interrupt Status Enable Register -------- */
#define ENV_MON_FLT_INTSTS_EN_RESETVALUE      _UINT8_(0x01)                                        /*  (ENV_MON_FLT_INTSTS_EN) Fault Interrupt Status Enable Register  Reset Value */

#define ENV_MON_FLT_INTSTS_EN_FLT_INTSTS_EN_Pos _UINT8_(0)                                           /* (ENV_MON_FLT_INTSTS_EN) Controls whether the External Diode Fault events generates interrupt if the associated status bit is 1. Position */
#define ENV_MON_FLT_INTSTS_EN_FLT_INTSTS_EN_Msk (_UINT8_(0xFF) << ENV_MON_FLT_INTSTS_EN_FLT_INTSTS_EN_Pos) /* (ENV_MON_FLT_INTSTS_EN) Controls whether the External Diode Fault events generates interrupt if the associated status bit is 1. Mask */
#define ENV_MON_FLT_INTSTS_EN_FLT_INTSTS_EN(value) (ENV_MON_FLT_INTSTS_EN_FLT_INTSTS_EN_Msk & (_UINT8_(value) << ENV_MON_FLT_INTSTS_EN_FLT_INTSTS_EN_Pos)) /* Assigment of value for FLT_INTSTS_EN in the ENV_MON_FLT_INTSTS_EN register */
#define ENV_MON_FLT_INTSTS_EN_Msk             _UINT8_(0xFF)                                        /* (ENV_MON_FLT_INTSTS_EN) Register Mask  */


/* -------- ENV_MON_TMP_INTSTS : (ENV_MON Offset: 0x7B) (R/W 8) Temp Interrupt Status Enable Register -------- */
#define ENV_MON_TMP_INTSTS_RESETVALUE         _UINT8_(0x00)                                        /*  (ENV_MON_TMP_INTSTS) Temp Interrupt Status Enable Register  Reset Value */

#define ENV_MON_TMP_INTSTS_TMP_INTSTS_Pos     _UINT8_(0)                                           /* (ENV_MON_TMP_INTSTS) Controls whether the External Diode events generate an interrupt if the associated status bit is set. Position */
#define ENV_MON_TMP_INTSTS_TMP_INTSTS_Msk     (_UINT8_(0xFF) << ENV_MON_TMP_INTSTS_TMP_INTSTS_Pos) /* (ENV_MON_TMP_INTSTS) Controls whether the External Diode events generate an interrupt if the associated status bit is set. Mask */
#define ENV_MON_TMP_INTSTS_TMP_INTSTS(value)  (ENV_MON_TMP_INTSTS_TMP_INTSTS_Msk & (_UINT8_(value) << ENV_MON_TMP_INTSTS_TMP_INTSTS_Pos)) /* Assigment of value for TMP_INTSTS in the ENV_MON_TMP_INTSTS register */
#define ENV_MON_TMP_INTSTS_Msk                _UINT8_(0xFF)                                        /* (ENV_MON_TMP_INTSTS) Register Mask  */


/* -------- ENV_MON_SPCL_FN : (ENV_MON Offset: 0x7C) (R/W 8) Special Function Register -------- */
#define ENV_MON_SPCL_FN_RESETVALUE            _UINT8_(0x00)                                        /*  (ENV_MON_SPCL_FN) Special Function Register  Reset Value */

#define ENV_MON_SPCL_FN_TMP_INTSTS_Pos        _UINT8_(0)                                           /* (ENV_MON_SPCL_FN) Controls the bit that resets the FailSafe Status Register Position */
#define ENV_MON_SPCL_FN_TMP_INTSTS_Msk        (_UINT8_(0xFF) << ENV_MON_SPCL_FN_TMP_INTSTS_Pos)    /* (ENV_MON_SPCL_FN) Controls the bit that resets the FailSafe Status Register Mask */
#define ENV_MON_SPCL_FN_TMP_INTSTS(value)     (ENV_MON_SPCL_FN_TMP_INTSTS_Msk & (_UINT8_(value) << ENV_MON_SPCL_FN_TMP_INTSTS_Pos)) /* Assigment of value for TMP_INTSTS in the ENV_MON_SPCL_FN register */
#define ENV_MON_SPCL_FN_Msk                   _UINT8_(0xFF)                                        /* (ENV_MON_SPCL_FN) Register Mask  */


/* -------- ENV_MON_INTTMP_INTEN : (ENV_MON Offset: 0x7D) (R/W 8) Int Temp Interrupt Status Enable Register -------- */
#define ENV_MON_INTTMP_INTEN_RESETVALUE       _UINT8_(0x00)                                        /*  (ENV_MON_INTTMP_INTEN) Int Temp Interrupt Status Enable Register  Reset Value */

#define ENV_MON_INTTMP_INTEN_INTTMP_INTEN_Pos _UINT8_(0)                                           /* (ENV_MON_INTTMP_INTEN) Controls whether the Internal Diode event generate an interrupt if the associated status bit is set. Position */
#define ENV_MON_INTTMP_INTEN_INTTMP_INTEN_Msk (_UINT8_(0xFF) << ENV_MON_INTTMP_INTEN_INTTMP_INTEN_Pos) /* (ENV_MON_INTTMP_INTEN) Controls whether the Internal Diode event generate an interrupt if the associated status bit is set. Mask */
#define ENV_MON_INTTMP_INTEN_INTTMP_INTEN(value) (ENV_MON_INTTMP_INTEN_INTTMP_INTEN_Msk & (_UINT8_(value) << ENV_MON_INTTMP_INTEN_INTTMP_INTEN_Pos)) /* Assigment of value for INTTMP_INTEN in the ENV_MON_INTTMP_INTEN register */
#define ENV_MON_INTTMP_INTEN_Msk              _UINT8_(0xFF)                                        /* (ENV_MON_INTTMP_INTEN) Register Mask  */


/* -------- ENV_MON_VLT_INTEN : (ENV_MON Offset: 0x7E) (R/W 8) Volt Interrupt Status Enable Register -------- */
#define ENV_MON_VLT_INTEN_RESETVALUE          _UINT8_(0x00)                                        /*  (ENV_MON_VLT_INTEN) Volt Interrupt Status Enable Register  Reset Value */

#define ENV_MON_VLT_INTEN_VLT_INTEN_Pos       _UINT8_(0)                                           /* (ENV_MON_VLT_INTEN) Controls whether the Voltage event generate an interrupt if the associated status bit is set. Position */
#define ENV_MON_VLT_INTEN_VLT_INTEN_Msk       (_UINT8_(0xFF) << ENV_MON_VLT_INTEN_VLT_INTEN_Pos)   /* (ENV_MON_VLT_INTEN) Controls whether the Voltage event generate an interrupt if the associated status bit is set. Mask */
#define ENV_MON_VLT_INTEN_VLT_INTEN(value)    (ENV_MON_VLT_INTEN_VLT_INTEN_Msk & (_UINT8_(value) << ENV_MON_VLT_INTEN_VLT_INTEN_Pos)) /* Assigment of value for VLT_INTEN in the ENV_MON_VLT_INTEN register */
#define ENV_MON_VLT_INTEN_Msk                 _UINT8_(0xFF)                                        /* (ENV_MON_VLT_INTEN) Register Mask  */


/* -------- ENV_MON_THRMTRP_TMP2 : (ENV_MON Offset: 0x80) (R/W 8) Thermal Trip Temperature Diode 2 Register -------- */
#define ENV_MON_THRMTRP_TMP2_RESETVALUE       _UINT8_(0x7F)                                        /*  (ENV_MON_THRMTRP_TMP2) Thermal Trip Temperature Diode 2 Register  Reset Value */

#define ENV_MON_THRMTRP_TMP2_THRMTRP_TMP2_Pos _UINT8_(0)                                           /* (ENV_MON_THRMTRP_TMP2) ThermTrip temperature high limit compared against External Diode 2 Position */
#define ENV_MON_THRMTRP_TMP2_THRMTRP_TMP2_Msk (_UINT8_(0xFF) << ENV_MON_THRMTRP_TMP2_THRMTRP_TMP2_Pos) /* (ENV_MON_THRMTRP_TMP2) ThermTrip temperature high limit compared against External Diode 2 Mask */
#define ENV_MON_THRMTRP_TMP2_THRMTRP_TMP2(value) (ENV_MON_THRMTRP_TMP2_THRMTRP_TMP2_Msk & (_UINT8_(value) << ENV_MON_THRMTRP_TMP2_THRMTRP_TMP2_Pos)) /* Assigment of value for THRMTRP_TMP2 in the ENV_MON_THRMTRP_TMP2 register */
#define ENV_MON_THRMTRP_TMP2_Msk              _UINT8_(0xFF)                                        /* (ENV_MON_THRMTRP_TMP2) Register Mask  */


/* -------- ENV_MON_THRMTRP_TMP3 : (ENV_MON Offset: 0x81) (R/W 8) Thermal Trip Temperature Diode 3 Register -------- */
#define ENV_MON_THRMTRP_TMP3_RESETVALUE       _UINT8_(0x7F)                                        /*  (ENV_MON_THRMTRP_TMP3) Thermal Trip Temperature Diode 3 Register  Reset Value */

#define ENV_MON_THRMTRP_TMP3_THRMTRP_TMP3_Pos _UINT8_(0)                                           /* (ENV_MON_THRMTRP_TMP3) ThermTrip temperature high limit compared against External Diode 3 Position */
#define ENV_MON_THRMTRP_TMP3_THRMTRP_TMP3_Msk (_UINT8_(0xFF) << ENV_MON_THRMTRP_TMP3_THRMTRP_TMP3_Pos) /* (ENV_MON_THRMTRP_TMP3) ThermTrip temperature high limit compared against External Diode 3 Mask */
#define ENV_MON_THRMTRP_TMP3_THRMTRP_TMP3(value) (ENV_MON_THRMTRP_TMP3_THRMTRP_TMP3_Msk & (_UINT8_(value) << ENV_MON_THRMTRP_TMP3_THRMTRP_TMP3_Pos)) /* Assigment of value for THRMTRP_TMP3 in the ENV_MON_THRMTRP_TMP3 register */
#define ENV_MON_THRMTRP_TMP3_Msk              _UINT8_(0xFF)                                        /* (ENV_MON_THRMTRP_TMP3) Register Mask  */


/* -------- ENV_MON_THRMTRP_TMP4 : (ENV_MON Offset: 0x82) (R/W 8) Thermal Trip Temperature Diode 4 Register -------- */
#define ENV_MON_THRMTRP_TMP4_RESETVALUE       _UINT8_(0x7F)                                        /*  (ENV_MON_THRMTRP_TMP4) Thermal Trip Temperature Diode 4 Register  Reset Value */

#define ENV_MON_THRMTRP_TMP4_THRMTRP_TMP4_Pos _UINT8_(0)                                           /* (ENV_MON_THRMTRP_TMP4) ThermTrip temperature high limit compared against External Diode 4 Position */
#define ENV_MON_THRMTRP_TMP4_THRMTRP_TMP4_Msk (_UINT8_(0xFF) << ENV_MON_THRMTRP_TMP4_THRMTRP_TMP4_Pos) /* (ENV_MON_THRMTRP_TMP4) ThermTrip temperature high limit compared against External Diode 4 Mask */
#define ENV_MON_THRMTRP_TMP4_THRMTRP_TMP4(value) (ENV_MON_THRMTRP_TMP4_THRMTRP_TMP4_Msk & (_UINT8_(value) << ENV_MON_THRMTRP_TMP4_THRMTRP_TMP4_Pos)) /* Assigment of value for THRMTRP_TMP4 in the ENV_MON_THRMTRP_TMP4 register */
#define ENV_MON_THRMTRP_TMP4_Msk              _UINT8_(0xFF)                                        /* (ENV_MON_THRMTRP_TMP4) Register Mask  */


/* -------- ENV_MON_THRMTRP_TMP1A : (ENV_MON Offset: 0x83) (R/W 8) Thermal Trip Temperature Diode 1A Register -------- */
#define ENV_MON_THRMTRP_TMP1A_RESETVALUE      _UINT8_(0x7F)                                        /*  (ENV_MON_THRMTRP_TMP1A) Thermal Trip Temperature Diode 1A Register  Reset Value */

#define ENV_MON_THRMTRP_TMP1A_THRMTRP_TMP1A_Pos _UINT8_(0)                                           /* (ENV_MON_THRMTRP_TMP1A) ThermTrip temperature high limit compared against External Diode 1A Position */
#define ENV_MON_THRMTRP_TMP1A_THRMTRP_TMP1A_Msk (_UINT8_(0xFF) << ENV_MON_THRMTRP_TMP1A_THRMTRP_TMP1A_Pos) /* (ENV_MON_THRMTRP_TMP1A) ThermTrip temperature high limit compared against External Diode 1A Mask */
#define ENV_MON_THRMTRP_TMP1A_THRMTRP_TMP1A(value) (ENV_MON_THRMTRP_TMP1A_THRMTRP_TMP1A_Msk & (_UINT8_(value) << ENV_MON_THRMTRP_TMP1A_THRMTRP_TMP1A_Pos)) /* Assigment of value for THRMTRP_TMP1A in the ENV_MON_THRMTRP_TMP1A register */
#define ENV_MON_THRMTRP_TMP1A_Msk             _UINT8_(0xFF)                                        /* (ENV_MON_THRMTRP_TMP1A) Register Mask  */


/* -------- ENV_MON_THRMTRP_TMP2A : (ENV_MON Offset: 0x84) (R/W 8) Thermal Trip Temperature Diode 2A Register -------- */
#define ENV_MON_THRMTRP_TMP2A_RESETVALUE      _UINT8_(0x7F)                                        /*  (ENV_MON_THRMTRP_TMP2A) Thermal Trip Temperature Diode 2A Register  Reset Value */

#define ENV_MON_THRMTRP_TMP2A_THRMTRP_TMP2A_Pos _UINT8_(0)                                           /* (ENV_MON_THRMTRP_TMP2A) ThermTrip temperature high limit compared against External Diode 2A Position */
#define ENV_MON_THRMTRP_TMP2A_THRMTRP_TMP2A_Msk (_UINT8_(0xFF) << ENV_MON_THRMTRP_TMP2A_THRMTRP_TMP2A_Pos) /* (ENV_MON_THRMTRP_TMP2A) ThermTrip temperature high limit compared against External Diode 2A Mask */
#define ENV_MON_THRMTRP_TMP2A_THRMTRP_TMP2A(value) (ENV_MON_THRMTRP_TMP2A_THRMTRP_TMP2A_Msk & (_UINT8_(value) << ENV_MON_THRMTRP_TMP2A_THRMTRP_TMP2A_Pos)) /* Assigment of value for THRMTRP_TMP2A in the ENV_MON_THRMTRP_TMP2A register */
#define ENV_MON_THRMTRP_TMP2A_Msk             _UINT8_(0xFF)                                        /* (ENV_MON_THRMTRP_TMP2A) Register Mask  */


/* -------- ENV_MON_THRMTRP_TMP3A : (ENV_MON Offset: 0x85) (R/W 8) Thermal Trip Temperature Diode 3A Register -------- */
#define ENV_MON_THRMTRP_TMP3A_RESETVALUE      _UINT8_(0x7F)                                        /*  (ENV_MON_THRMTRP_TMP3A) Thermal Trip Temperature Diode 3A Register  Reset Value */

#define ENV_MON_THRMTRP_TMP3A_THRMTRP_TMP3A_Pos _UINT8_(0)                                           /* (ENV_MON_THRMTRP_TMP3A) ThermTrip temperature high limit compared against External Diode 3A Position */
#define ENV_MON_THRMTRP_TMP3A_THRMTRP_TMP3A_Msk (_UINT8_(0xFF) << ENV_MON_THRMTRP_TMP3A_THRMTRP_TMP3A_Pos) /* (ENV_MON_THRMTRP_TMP3A) ThermTrip temperature high limit compared against External Diode 3A Mask */
#define ENV_MON_THRMTRP_TMP3A_THRMTRP_TMP3A(value) (ENV_MON_THRMTRP_TMP3A_THRMTRP_TMP3A_Msk & (_UINT8_(value) << ENV_MON_THRMTRP_TMP3A_THRMTRP_TMP3A_Pos)) /* Assigment of value for THRMTRP_TMP3A in the ENV_MON_THRMTRP_TMP3A register */
#define ENV_MON_THRMTRP_TMP3A_Msk             _UINT8_(0xFF)                                        /* (ENV_MON_THRMTRP_TMP3A) Register Mask  */


/* -------- ENV_MON_THRMTRP_TMP4A : (ENV_MON Offset: 0x86) (R/W 8) Thermal Trip Temperature Diode 4A Register -------- */
#define ENV_MON_THRMTRP_TMP4A_RESETVALUE      _UINT8_(0x7F)                                        /*  (ENV_MON_THRMTRP_TMP4A) Thermal Trip Temperature Diode 4A Register  Reset Value */

#define ENV_MON_THRMTRP_TMP4A_THRMTRP_TMP4A_Pos _UINT8_(0)                                           /* (ENV_MON_THRMTRP_TMP4A) ThermTrip temperature high limit compared against External Diode 4A Position */
#define ENV_MON_THRMTRP_TMP4A_THRMTRP_TMP4A_Msk (_UINT8_(0xFF) << ENV_MON_THRMTRP_TMP4A_THRMTRP_TMP4A_Pos) /* (ENV_MON_THRMTRP_TMP4A) ThermTrip temperature high limit compared against External Diode 4A Mask */
#define ENV_MON_THRMTRP_TMP4A_THRMTRP_TMP4A(value) (ENV_MON_THRMTRP_TMP4A_THRMTRP_TMP4A_Msk & (_UINT8_(value) << ENV_MON_THRMTRP_TMP4A_THRMTRP_TMP4A_Pos)) /* Assigment of value for THRMTRP_TMP4A in the ENV_MON_THRMTRP_TMP4A register */
#define ENV_MON_THRMTRP_TMP4A_Msk             _UINT8_(0xFF)                                        /* (ENV_MON_THRMTRP_TMP4A) Register Mask  */


/* -------- ENV_MON_ADJ_CH1 : (ENV_MON Offset: 0x88) (R/W 8) Adjusted Channel 1 Register -------- */
#define ENV_MON_ADJ_CH1_RESETVALUE            _UINT8_(0x00)                                        /*  (ENV_MON_ADJ_CH1) Adjusted Channel 1 Register  Reset Value */

#define ENV_MON_ADJ_CH1_ADJ_CH1_Pos           _UINT8_(0)                                           /* (ENV_MON_ADJ_CH1) Contain EMC IP Trim Adjust values for External Channel 1 Position */
#define ENV_MON_ADJ_CH1_ADJ_CH1_Msk           (_UINT8_(0xFF) << ENV_MON_ADJ_CH1_ADJ_CH1_Pos)       /* (ENV_MON_ADJ_CH1) Contain EMC IP Trim Adjust values for External Channel 1 Mask */
#define ENV_MON_ADJ_CH1_ADJ_CH1(value)        (ENV_MON_ADJ_CH1_ADJ_CH1_Msk & (_UINT8_(value) << ENV_MON_ADJ_CH1_ADJ_CH1_Pos)) /* Assigment of value for ADJ_CH1 in the ENV_MON_ADJ_CH1 register */
#define ENV_MON_ADJ_CH1_Msk                   _UINT8_(0xFF)                                        /* (ENV_MON_ADJ_CH1) Register Mask  */


/* -------- ENV_MON_ADJ_CH2 : (ENV_MON Offset: 0x89) (R/W 8) Adjusted Channel 2 Register -------- */
#define ENV_MON_ADJ_CH2_RESETVALUE            _UINT8_(0x00)                                        /*  (ENV_MON_ADJ_CH2) Adjusted Channel 2 Register  Reset Value */

#define ENV_MON_ADJ_CH2_ADJ_CH2_Pos           _UINT8_(0)                                           /* (ENV_MON_ADJ_CH2) Contain EMC IP Trim Adjust values for External Channel 2 Position */
#define ENV_MON_ADJ_CH2_ADJ_CH2_Msk           (_UINT8_(0xFF) << ENV_MON_ADJ_CH2_ADJ_CH2_Pos)       /* (ENV_MON_ADJ_CH2) Contain EMC IP Trim Adjust values for External Channel 2 Mask */
#define ENV_MON_ADJ_CH2_ADJ_CH2(value)        (ENV_MON_ADJ_CH2_ADJ_CH2_Msk & (_UINT8_(value) << ENV_MON_ADJ_CH2_ADJ_CH2_Pos)) /* Assigment of value for ADJ_CH2 in the ENV_MON_ADJ_CH2 register */
#define ENV_MON_ADJ_CH2_Msk                   _UINT8_(0xFF)                                        /* (ENV_MON_ADJ_CH2) Register Mask  */


/* -------- ENV_MON_ADJ_CH3 : (ENV_MON Offset: 0x8A) (R/W 8) Adjusted Channel 3 Register -------- */
#define ENV_MON_ADJ_CH3_RESETVALUE            _UINT8_(0x00)                                        /*  (ENV_MON_ADJ_CH3) Adjusted Channel 3 Register  Reset Value */

#define ENV_MON_ADJ_CH3_ADJ_CH3_Pos           _UINT8_(0)                                           /* (ENV_MON_ADJ_CH3) Contain EMC IP Trim Adjust values for External Channel 3 Position */
#define ENV_MON_ADJ_CH3_ADJ_CH3_Msk           (_UINT8_(0xFF) << ENV_MON_ADJ_CH3_ADJ_CH3_Pos)       /* (ENV_MON_ADJ_CH3) Contain EMC IP Trim Adjust values for External Channel 3 Mask */
#define ENV_MON_ADJ_CH3_ADJ_CH3(value)        (ENV_MON_ADJ_CH3_ADJ_CH3_Msk & (_UINT8_(value) << ENV_MON_ADJ_CH3_ADJ_CH3_Pos)) /* Assigment of value for ADJ_CH3 in the ENV_MON_ADJ_CH3 register */
#define ENV_MON_ADJ_CH3_Msk                   _UINT8_(0xFF)                                        /* (ENV_MON_ADJ_CH3) Register Mask  */


/* -------- ENV_MON_ADJ_CH4 : (ENV_MON Offset: 0x8B) (R/W 8) Adjusted Channel 4 Register -------- */
#define ENV_MON_ADJ_CH4_RESETVALUE            _UINT8_(0x00)                                        /*  (ENV_MON_ADJ_CH4) Adjusted Channel 4 Register  Reset Value */

#define ENV_MON_ADJ_CH4_ADJ_CH4_Pos           _UINT8_(0)                                           /* (ENV_MON_ADJ_CH4) Contain EMC IP Trim Adjust values for External Channel 4 Position */
#define ENV_MON_ADJ_CH4_ADJ_CH4_Msk           (_UINT8_(0xFF) << ENV_MON_ADJ_CH4_ADJ_CH4_Pos)       /* (ENV_MON_ADJ_CH4) Contain EMC IP Trim Adjust values for External Channel 4 Mask */
#define ENV_MON_ADJ_CH4_ADJ_CH4(value)        (ENV_MON_ADJ_CH4_ADJ_CH4_Msk & (_UINT8_(value) << ENV_MON_ADJ_CH4_ADJ_CH4_Pos)) /* Assigment of value for ADJ_CH4 in the ENV_MON_ADJ_CH4 register */
#define ENV_MON_ADJ_CH4_Msk                   _UINT8_(0xFF)                                        /* (ENV_MON_ADJ_CH4) Register Mask  */


/* -------- ENV_MON_ADJ_CH1A : (ENV_MON Offset: 0x8C) (R/W 8) Adjusted Channel 1A Register -------- */
#define ENV_MON_ADJ_CH1A_RESETVALUE           _UINT8_(0x00)                                        /*  (ENV_MON_ADJ_CH1A) Adjusted Channel 1A Register  Reset Value */

#define ENV_MON_ADJ_CH1A_ADJ_CH1A_Pos         _UINT8_(0)                                           /* (ENV_MON_ADJ_CH1A) Contain EMC IP Trim Adjust values for External Channel 1A Position */
#define ENV_MON_ADJ_CH1A_ADJ_CH1A_Msk         (_UINT8_(0xFF) << ENV_MON_ADJ_CH1A_ADJ_CH1A_Pos)     /* (ENV_MON_ADJ_CH1A) Contain EMC IP Trim Adjust values for External Channel 1A Mask */
#define ENV_MON_ADJ_CH1A_ADJ_CH1A(value)      (ENV_MON_ADJ_CH1A_ADJ_CH1A_Msk & (_UINT8_(value) << ENV_MON_ADJ_CH1A_ADJ_CH1A_Pos)) /* Assigment of value for ADJ_CH1A in the ENV_MON_ADJ_CH1A register */
#define ENV_MON_ADJ_CH1A_Msk                  _UINT8_(0xFF)                                        /* (ENV_MON_ADJ_CH1A) Register Mask  */


/* -------- ENV_MON_ADJ_CH2A : (ENV_MON Offset: 0x8D) (R/W 8) Adjusted Channel 2A Register -------- */
#define ENV_MON_ADJ_CH2A_RESETVALUE           _UINT8_(0x00)                                        /*  (ENV_MON_ADJ_CH2A) Adjusted Channel 2A Register  Reset Value */

#define ENV_MON_ADJ_CH2A_ADJ_CH2A_Pos         _UINT8_(0)                                           /* (ENV_MON_ADJ_CH2A) Contain EMC IP Trim Adjust values for External Channel 2A Position */
#define ENV_MON_ADJ_CH2A_ADJ_CH2A_Msk         (_UINT8_(0xFF) << ENV_MON_ADJ_CH2A_ADJ_CH2A_Pos)     /* (ENV_MON_ADJ_CH2A) Contain EMC IP Trim Adjust values for External Channel 2A Mask */
#define ENV_MON_ADJ_CH2A_ADJ_CH2A(value)      (ENV_MON_ADJ_CH2A_ADJ_CH2A_Msk & (_UINT8_(value) << ENV_MON_ADJ_CH2A_ADJ_CH2A_Pos)) /* Assigment of value for ADJ_CH2A in the ENV_MON_ADJ_CH2A register */
#define ENV_MON_ADJ_CH2A_Msk                  _UINT8_(0xFF)                                        /* (ENV_MON_ADJ_CH2A) Register Mask  */


/* -------- ENV_MON_ADJ_CH3A : (ENV_MON Offset: 0x8E) (R/W 8) Adjusted Channel 3A Register -------- */
#define ENV_MON_ADJ_CH3A_RESETVALUE           _UINT8_(0x00)                                        /*  (ENV_MON_ADJ_CH3A) Adjusted Channel 3A Register  Reset Value */

#define ENV_MON_ADJ_CH3A_ADJ_CH3A_Pos         _UINT8_(0)                                           /* (ENV_MON_ADJ_CH3A) Contain EMC IP Trim Adjust values for External Channel 3A Position */
#define ENV_MON_ADJ_CH3A_ADJ_CH3A_Msk         (_UINT8_(0xFF) << ENV_MON_ADJ_CH3A_ADJ_CH3A_Pos)     /* (ENV_MON_ADJ_CH3A) Contain EMC IP Trim Adjust values for External Channel 3A Mask */
#define ENV_MON_ADJ_CH3A_ADJ_CH3A(value)      (ENV_MON_ADJ_CH3A_ADJ_CH3A_Msk & (_UINT8_(value) << ENV_MON_ADJ_CH3A_ADJ_CH3A_Pos)) /* Assigment of value for ADJ_CH3A in the ENV_MON_ADJ_CH3A register */
#define ENV_MON_ADJ_CH3A_Msk                  _UINT8_(0xFF)                                        /* (ENV_MON_ADJ_CH3A) Register Mask  */


/* -------- ENV_MON_ADJ_CH4A : (ENV_MON Offset: 0x8F) (R/W 8) Adjusted Channel 4A Register -------- */
#define ENV_MON_ADJ_CH4A_RESETVALUE           _UINT8_(0x00)                                        /*  (ENV_MON_ADJ_CH4A) Adjusted Channel 4A Register  Reset Value */

#define ENV_MON_ADJ_CH4A_ADJ_CH4A_Pos         _UINT8_(0)                                           /* (ENV_MON_ADJ_CH4A) Contain EMC IP Trim Adjust values for External Channel 4A Position */
#define ENV_MON_ADJ_CH4A_ADJ_CH4A_Msk         (_UINT8_(0xFF) << ENV_MON_ADJ_CH4A_ADJ_CH4A_Pos)     /* (ENV_MON_ADJ_CH4A) Contain EMC IP Trim Adjust values for External Channel 4A Mask */
#define ENV_MON_ADJ_CH4A_ADJ_CH4A(value)      (ENV_MON_ADJ_CH4A_ADJ_CH4A_Msk & (_UINT8_(value) << ENV_MON_ADJ_CH4A_ADJ_CH4A_Pos)) /* Assigment of value for ADJ_CH4A in the ENV_MON_ADJ_CH4A register */
#define ENV_MON_ADJ_CH4A_Msk                  _UINT8_(0xFF)                                        /* (ENV_MON_ADJ_CH4A) Register Mask  */


/* -------- ENV_MON_UNLCK : (ENV_MON Offset: 0xFC) ( R/ 8) Unlock Register -------- */
#define ENV_MON_UNLCK_RESETVALUE              _UINT8_(0x00)                                        /*  (ENV_MON_UNLCK) Unlock Register  Reset Value */

#define ENV_MON_UNLCK_UNLCK_Pos               _UINT8_(0)                                           /* (ENV_MON_UNLCK) Unlock Register Position */
#define ENV_MON_UNLCK_UNLCK_Msk               (_UINT8_(0xFF) << ENV_MON_UNLCK_UNLCK_Pos)           /* (ENV_MON_UNLCK) Unlock Register Mask */
#define ENV_MON_UNLCK_UNLCK(value)            (ENV_MON_UNLCK_UNLCK_Msk & (_UINT8_(value) << ENV_MON_UNLCK_UNLCK_Pos)) /* Assigment of value for UNLCK in the ENV_MON_UNLCK register */
#define ENV_MON_UNLCK_Msk                     _UINT8_(0xFF)                                        /* (ENV_MON_UNLCK) Register Mask  */


/* -------- ENV_MON_SYS_SHDN_RST : (ENV_MON Offset: 0x400) ( R/ 8) System Shutdown Reset Register -------- */
#define ENV_MON_SYS_SHDN_RST_RESETVALUE       _UINT8_(0x00)                                        /*  (ENV_MON_SYS_SHDN_RST) System Shutdown Reset Register  Reset Value */

#define ENV_MON_SYS_SHDN_RST_SYS_SHDN_RST_Pos _UINT8_(0)                                           /* (ENV_MON_SYS_SHDN_RST) Used to de-assert the SYS_SHDN# signal Register Position */
#define ENV_MON_SYS_SHDN_RST_SYS_SHDN_RST_Msk (_UINT8_(0xFF) << ENV_MON_SYS_SHDN_RST_SYS_SHDN_RST_Pos) /* (ENV_MON_SYS_SHDN_RST) Used to de-assert the SYS_SHDN# signal Register Mask */
#define ENV_MON_SYS_SHDN_RST_SYS_SHDN_RST(value) (ENV_MON_SYS_SHDN_RST_SYS_SHDN_RST_Msk & (_UINT8_(value) << ENV_MON_SYS_SHDN_RST_SYS_SHDN_RST_Pos)) /* Assigment of value for SYS_SHDN_RST in the ENV_MON_SYS_SHDN_RST register */
#define ENV_MON_SYS_SHDN_RST_Msk              _UINT8_(0xFF)                                        /* (ENV_MON_SYS_SHDN_RST) Register Mask  */


/** \brief ENV_MON register offsets definitions */
#define ENV_MON_EXT1_TEMP_REG_OFST     _UINT32_(0x00)      /* (ENV_MON_EXT1_TEMP) External Diode 1 Temp Register Offset */
#define ENV_MON_INT_TEMP_REG_OFST      _UINT32_(0x02)      /* (ENV_MON_INT_TEMP) Internal Temp Register Offset */
#define ENV_MON_EXT2_TEMP_REG_OFST     _UINT32_(0x04)      /* (ENV_MON_EXT2_TEMP) External Diode 2 Temp Register Offset */
#define ENV_MON_EXT3_TEMP_REG_OFST     _UINT32_(0x06)      /* (ENV_MON_EXT3_TEMP) External Diode 3 Temp Register Offset */
#define ENV_MON_EXT4_TEMP_REG_OFST     _UINT32_(0x08)      /* (ENV_MON_EXT4_TEMP) External Diode 4 Temp Register Offset */
#define ENV_MON_VIN_VOLT_REG_OFST      _UINT32_(0x0E)      /* (ENV_MON_VIN_VOLT) Stores the voltage Measured on VIN channel Offset */
#define ENV_MON_EXT1A_TEMP_REG_OFST    _UINT32_(0x12)      /* (ENV_MON_EXT1A_TEMP) Stores the fractional and integer data for External Diode 1A Register Offset */
#define ENV_MON_EXT2A_TEMP_REG_OFST    _UINT32_(0x14)      /* (ENV_MON_EXT2A_TEMP) Stores the fractional and integer data for External Diode 2A Register Offset */
#define ENV_MON_EXT3A_TEMP_REG_OFST    _UINT32_(0x16)      /* (ENV_MON_EXT3A_TEMP) Stores the fractional and integer data for External Diode 3A Register Offset */
#define ENV_MON_EXT4A_TEMP_REG_OFST    _UINT32_(0x18)      /* (ENV_MON_EXT4A_TEMP) Stores the fractional and integer data for External Diode 4A Register Offset */
#define ENV_MON_VCP_VOLT_REG_OFST      _UINT32_(0x21)      /* (ENV_MON_VCP_VOLT) Stores the VCP Voltage Monitor data Offset */
#define ENV_MON_VTT_VOLT_REG_OFST      _UINT32_(0x23)      /* (ENV_MON_VTT_VOLT) Stores the VTT Voltage Monitor data Offset */
#define ENV_MON_TEMP_CFG1_REG_OFST     _UINT32_(0x2B)      /* (ENV_MON_TEMP_CFG1) Controls temp sensing for external diodes Offset */
#define ENV_MON_TEMP_CFG2_REG_OFST     _UINT32_(0x2C)      /* (ENV_MON_TEMP_CFG2) Controls temp sensing for external diodes Offset */
#define ENV_MON_VOLT_CFG_REG_OFST      _UINT32_(0x2D)      /* (ENV_MON_VOLT_CFG) Controls Voltage sensing for external voltages Offset */
#define ENV_MON_THEM_CFG_REG_OFST      _UINT32_(0x2E)      /* (ENV_MON_THEM_CFG) Controls Thermistor or diodes Configuration Offset */
#define ENV_MON_CNVR_CFG_REG_OFST      _UINT32_(0x2F)      /* (ENV_MON_CNVR_CFG) Controls Temperature Conversion for the temperature channels Offset */
#define ENV_MON_AVG_EN_REG_OFST        _UINT32_(0x30)      /* (ENV_MON_AVG_EN) Software Averaging Enable Offset */
#define ENV_MON_BCOMP1_EN_REG_OFST     _UINT32_(0x38)      /* (ENV_MON_BCOMP1_EN) Configure Beta compensation settings for External Diode1 Offset */
#define ENV_MON_BCOMP2_EN_REG_OFST     _UINT32_(0x39)      /* (ENV_MON_BCOMP2_EN) Configure Beta compensation settings for External Diode2 Offset */
#define ENV_MON_LCK_STRT_REG_OFST      _UINT32_(0x40)      /* (ENV_MON_LCK_STRT) Lock Start Register Offset */
#define ENV_MON_FLT_INTSTS_REG_OFST    _UINT32_(0x41)      /* (ENV_MON_FLT_INTSTS) Fault Interrupt Status Register Offset */
#define ENV_MON_FLT_TEMPSTS_REG_OFST   _UINT32_(0x42)      /* (ENV_MON_FLT_TEMPSTS) Fault temperature Status Register Offset */
#define ENV_MON_THRMTRP_STS_REG_OFST   _UINT32_(0x43)      /* (ENV_MON_THRMTRP_STS) ThermTrip Pin Status Register Offset */
#define ENV_MON_INT_TEMP_STS_REG_OFST  _UINT32_(0x44)      /* (ENV_MON_INT_TEMP_STS) Temperature of Internal Diode Register Offset */
#define ENV_MON_VLT_INTSTS_REG_OFST    _UINT32_(0x45)      /* (ENV_MON_VLT_INTSTS) Volt Interrupt Status Register Offset */
#define ENV_MON_VCP_LIMIT_REG_OFST     _UINT32_(0x46)      /* (ENV_MON_VCP_LIMIT) VCP Limit Register Offset */
#define ENV_MON_VTR_LIMIT_REG_OFST     _UINT32_(0x48)      /* (ENV_MON_VTR_LIMIT) VTR Limit Register Offset */
#define ENV_MON_VTT_LIMIT_REG_OFST     _UINT32_(0x4A)      /* (ENV_MON_VTT_LIMIT) VTT Limit Register Offset */
#define ENV_MON_VIN_LIMIT_REG_OFST     _UINT32_(0x4C)      /* (ENV_MON_VIN_LIMIT) VIN Limit Register Offset */
#define ENV_MON_EXT1_TMPLO_LMT_REG_OFST _UINT32_(0x4E)      /* (ENV_MON_EXT1_TMPLO_LMT) Low limit for External Diode 1 Register Offset */
#define ENV_MON_EXT1_TMPHI_LMT_REG_OFST _UINT32_(0x4F)      /* (ENV_MON_EXT1_TMPHI_LMT) High limit for External Diode 1 Register Offset */
#define ENV_MON_INT_TMPLO_LMT_REG_OFST _UINT32_(0x50)      /* (ENV_MON_INT_TMPLO_LMT) Low limit for Internal Diode Register Offset */
#define ENV_MON_INT_TMPHI_LMT_REG_OFST _UINT32_(0x51)      /* (ENV_MON_INT_TMPHI_LMT) High limit for Internal Diode Register Offset */
#define ENV_MON_EXT2_TMPLO_LMT_REG_OFST _UINT32_(0x52)      /* (ENV_MON_EXT2_TMPLO_LMT) Low limit for External Diode 2 Register Offset */
#define ENV_MON_EXT2_TMPHI_LMT_REG_OFST _UINT32_(0x53)      /* (ENV_MON_EXT2_TMPHI_LMT) High limit for External Diode 2 Register Offset */
#define ENV_MON_EXT3_TMPLO_LMT_REG_OFST _UINT32_(0x54)      /* (ENV_MON_EXT3_TMPLO_LMT) Low limit for External Diode 3 Register Offset */
#define ENV_MON_EXT3_TMPHI_LMT_REG_OFST _UINT32_(0x55)      /* (ENV_MON_EXT3_TMPHI_LMT) High limit for External Diode 3 Register Offset */
#define ENV_MON_EXT4_TMPLO_LMT_REG_OFST _UINT32_(0x56)      /* (ENV_MON_EXT4_TMPLO_LMT) Low limit for External Diode 4 Register Offset */
#define ENV_MON_EXT4_TMPHI_LMT_REG_OFST _UINT32_(0x57)      /* (ENV_MON_EXT4_TMPHI_LMT) High limit for External Diode 4 Register Offset */
#define ENV_MON_EXT1A_TMPLO_LMT_REG_OFST _UINT32_(0x58)      /* (ENV_MON_EXT1A_TMPLO_LMT) Low limit for External Diode 1A Register Offset */
#define ENV_MON_EXT1A_TMPHI_LMT_REG_OFST _UINT32_(0x59)      /* (ENV_MON_EXT1A_TMPHI_LMT) High limit for External Diode 1A Register Offset */
#define ENV_MON_EXT2A_TMPLO_LMT_REG_OFST _UINT32_(0x5A)      /* (ENV_MON_EXT2A_TMPLO_LMT) Low limit for External Diode 2A Register Offset */
#define ENV_MON_EXT2A_TMPHI_LMT_REG_OFST _UINT32_(0x5B)      /* (ENV_MON_EXT2A_TMPHI_LMT) High limit for External Diode 2A Register Offset */
#define ENV_MON_EXT3A_TMPLO_LMT_REG_OFST _UINT32_(0x5C)      /* (ENV_MON_EXT3A_TMPLO_LMT) Low limit for External Diode 3A Register Offset */
#define ENV_MON_EXT3A_TMPHI_LMT_REG_OFST _UINT32_(0x5D)      /* (ENV_MON_EXT3A_TMPHI_LMT) High limit for External Diode 3A Register Offset */
#define ENV_MON_EXT4A_TMPLO_LMT_REG_OFST _UINT32_(0x5E)      /* (ENV_MON_EXT4A_TMPLO_LMT) Low limit for External Diode 4A Register Offset */
#define ENV_MON_EXT4A_TMPHI_LMT_REG_OFST _UINT32_(0x5F)      /* (ENV_MON_EXT4A_TMPHI_LMT) High limit for External Diode 4A Register Offset */
#define ENV_MON_BCOMP3_EN_REG_OFST     _UINT32_(0x64)      /* (ENV_MON_BCOMP3_EN) External Diode3 Beta compensation Register Offset */
#define ENV_MON_BCOMP4_EN_REG_OFST     _UINT32_(0x65)      /* (ENV_MON_BCOMP4_EN) External Diode4 Beta compensation Register Offset */
#define ENV_MON_BCOMP_INTD_EN_REG_OFST _UINT32_(0x67)      /* (ENV_MON_BCOMP_INTD_EN) Internal Diode Beta compensation Register Offset */
#define ENV_MON_CONV_SRATE_REG_OFST    _UINT32_(0x6C)      /* (ENV_MON_CONV_SRATE) Conversion Seconds Rate Register Offset */
#define ENV_MON_CONV_MOD_REG_OFST      _UINT32_(0x6E)      /* (ENV_MON_CONV_MOD) Conversion Mode Register Offset */
#define ENV_MON_REC_EN_REG_OFST        _UINT32_(0x70)      /* (ENV_MON_REC_EN) REC Enable Register Offset */
#define ENV_MON_VSET_VLT_REG_OFST      _UINT32_(0x71)      /* (ENV_MON_VSET_VLT) VSET Voltage Reading Register Offset */
#define ENV_MON_THERM1_REG_OFST        _UINT32_(0x75)      /* (ENV_MON_THERM1) Thermal Trip Temperature Diode 1 Register Offset */
#define ENV_MON_FLSF_STS_REG_OFST      _UINT32_(0x76)      /* (ENV_MON_FLSF_STS) FailSafe Status Register Offset */
#define ENV_MON_FLSF_CFG_REG_OFST      _UINT32_(0x77)      /* (ENV_MON_FLSF_CFG) FailSafe Configuration Register Offset */
#define ENV_MON_SHDN_STS_REG_OFST      _UINT32_(0x78)      /* (ENV_MON_SHDN_STS) Shutdown Status Register Offset */
#define ENV_MON_SHDN_CFG_REG_OFST      _UINT32_(0x79)      /* (ENV_MON_SHDN_CFG) Shutdown Configuration Register Offset */
#define ENV_MON_FLT_INTSTS_EN_REG_OFST _UINT32_(0x7A)      /* (ENV_MON_FLT_INTSTS_EN) Fault Interrupt Status Enable Register Offset */
#define ENV_MON_TMP_INTSTS_REG_OFST    _UINT32_(0x7B)      /* (ENV_MON_TMP_INTSTS) Temp Interrupt Status Enable Register Offset */
#define ENV_MON_SPCL_FN_REG_OFST       _UINT32_(0x7C)      /* (ENV_MON_SPCL_FN) Special Function Register Offset */
#define ENV_MON_INTTMP_INTEN_REG_OFST  _UINT32_(0x7D)      /* (ENV_MON_INTTMP_INTEN) Int Temp Interrupt Status Enable Register Offset */
#define ENV_MON_VLT_INTEN_REG_OFST     _UINT32_(0x7E)      /* (ENV_MON_VLT_INTEN) Volt Interrupt Status Enable Register Offset */
#define ENV_MON_THRMTRP_TMP2_REG_OFST  _UINT32_(0x80)      /* (ENV_MON_THRMTRP_TMP2) Thermal Trip Temperature Diode 2 Register Offset */
#define ENV_MON_THRMTRP_TMP3_REG_OFST  _UINT32_(0x81)      /* (ENV_MON_THRMTRP_TMP3) Thermal Trip Temperature Diode 3 Register Offset */
#define ENV_MON_THRMTRP_TMP4_REG_OFST  _UINT32_(0x82)      /* (ENV_MON_THRMTRP_TMP4) Thermal Trip Temperature Diode 4 Register Offset */
#define ENV_MON_THRMTRP_TMP1A_REG_OFST _UINT32_(0x83)      /* (ENV_MON_THRMTRP_TMP1A) Thermal Trip Temperature Diode 1A Register Offset */
#define ENV_MON_THRMTRP_TMP2A_REG_OFST _UINT32_(0x84)      /* (ENV_MON_THRMTRP_TMP2A) Thermal Trip Temperature Diode 2A Register Offset */
#define ENV_MON_THRMTRP_TMP3A_REG_OFST _UINT32_(0x85)      /* (ENV_MON_THRMTRP_TMP3A) Thermal Trip Temperature Diode 3A Register Offset */
#define ENV_MON_THRMTRP_TMP4A_REG_OFST _UINT32_(0x86)      /* (ENV_MON_THRMTRP_TMP4A) Thermal Trip Temperature Diode 4A Register Offset */
#define ENV_MON_ADJ_CH1_REG_OFST       _UINT32_(0x88)      /* (ENV_MON_ADJ_CH1) Adjusted Channel 1 Register Offset */
#define ENV_MON_ADJ_CH2_REG_OFST       _UINT32_(0x89)      /* (ENV_MON_ADJ_CH2) Adjusted Channel 2 Register Offset */
#define ENV_MON_ADJ_CH3_REG_OFST       _UINT32_(0x8A)      /* (ENV_MON_ADJ_CH3) Adjusted Channel 3 Register Offset */
#define ENV_MON_ADJ_CH4_REG_OFST       _UINT32_(0x8B)      /* (ENV_MON_ADJ_CH4) Adjusted Channel 4 Register Offset */
#define ENV_MON_ADJ_CH1A_REG_OFST      _UINT32_(0x8C)      /* (ENV_MON_ADJ_CH1A) Adjusted Channel 1A Register Offset */
#define ENV_MON_ADJ_CH2A_REG_OFST      _UINT32_(0x8D)      /* (ENV_MON_ADJ_CH2A) Adjusted Channel 2A Register Offset */
#define ENV_MON_ADJ_CH3A_REG_OFST      _UINT32_(0x8E)      /* (ENV_MON_ADJ_CH3A) Adjusted Channel 3A Register Offset */
#define ENV_MON_ADJ_CH4A_REG_OFST      _UINT32_(0x8F)      /* (ENV_MON_ADJ_CH4A) Adjusted Channel 4A Register Offset */
#define ENV_MON_UNLCK_REG_OFST         _UINT32_(0xFC)      /* (ENV_MON_UNLCK) Unlock Register Offset */
#define ENV_MON_SYS_SHDN_RST_REG_OFST  _UINT32_(0x400)     /* (ENV_MON_SYS_SHDN_RST) System Shutdown Reset Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief ENV_MON register API structure */
typedef struct
{  /* Environmental Monitor Block */
  __I   uint16_t                       ENV_MON_EXT1_TEMP;  /**< Offset: 0x00 (R/   16) External Diode 1 Temp Register */
  __I   uint16_t                       ENV_MON_INT_TEMP;   /**< Offset: 0x02 (R/   16) Internal Temp Register */
  __I   uint16_t                       ENV_MON_EXT2_TEMP;  /**< Offset: 0x04 (R/   16) External Diode 2 Temp Register */
  __I   uint16_t                       ENV_MON_EXT3_TEMP;  /**< Offset: 0x06 (R/   16) External Diode 3 Temp Register */
  __I   uint16_t                       ENV_MON_EXT4_TEMP;  /**< Offset: 0x08 (R/   16) External Diode 4 Temp Register */
  __I   uint8_t                        Reserved1[0x04];
  __I   uint8_t                        ENV_MON_VIN_VOLT;   /**< Offset: 0x0E (R/   8) Stores the voltage Measured on VIN channel */
  __I   uint8_t                        Reserved2[0x03];
  __I   uint16_t                       ENV_MON_EXT1A_TEMP; /**< Offset: 0x12 (R/   16) Stores the fractional and integer data for External Diode 1A Register */
  __I   uint16_t                       ENV_MON_EXT2A_TEMP; /**< Offset: 0x14 (R/   16) Stores the fractional and integer data for External Diode 2A Register */
  __I   uint16_t                       ENV_MON_EXT3A_TEMP; /**< Offset: 0x16 (R/   16) Stores the fractional and integer data for External Diode 3A Register */
  __I   uint16_t                       ENV_MON_EXT4A_TEMP; /**< Offset: 0x18 (R/   16) Stores the fractional and integer data for External Diode 4A Register */
  __I   uint8_t                        Reserved3[0x07];
  __I   uint8_t                        ENV_MON_VCP_VOLT;   /**< Offset: 0x21 (R/   8) Stores the VCP Voltage Monitor data */
  __I   uint8_t                        Reserved4[0x01];
  __I   uint8_t                        ENV_MON_VTT_VOLT;   /**< Offset: 0x23 (R/   8) Stores the VTT Voltage Monitor data */
  __I   uint8_t                        Reserved5[0x07];
  __IO  uint8_t                        ENV_MON_TEMP_CFG1;  /**< Offset: 0x2B (R/W  8) Controls temp sensing for external diodes */
  __IO  uint8_t                        ENV_MON_TEMP_CFG2;  /**< Offset: 0x2C (R/W  8) Controls temp sensing for external diodes */
  __IO  uint8_t                        ENV_MON_VOLT_CFG;   /**< Offset: 0x2D (R/W  8) Controls Voltage sensing for external voltages */
  __IO  uint8_t                        ENV_MON_THEM_CFG;   /**< Offset: 0x2E (R/W  8) Controls Thermistor or diodes Configuration */
  __IO  uint8_t                        ENV_MON_CNVR_CFG;   /**< Offset: 0x2F (R/W  8) Controls Temperature Conversion for the temperature channels */
  __IO  uint8_t                        ENV_MON_AVG_EN;     /**< Offset: 0x30 (R/W  8) Software Averaging Enable */
  __I   uint8_t                        Reserved6[0x07];
  __IO  uint8_t                        ENV_MON_BCOMP1_EN;  /**< Offset: 0x38 (R/W  8) Configure Beta compensation settings for External Diode1 */
  __IO  uint8_t                        ENV_MON_BCOMP2_EN;  /**< Offset: 0x39 (R/W  8) Configure Beta compensation settings for External Diode2 */
  __I   uint8_t                        Reserved7[0x06];
  __IO  uint8_t                        ENV_MON_LCK_STRT;   /**< Offset: 0x40 (R/W  8) Lock Start Register */
  __IO  uint8_t                        ENV_MON_FLT_INTSTS; /**< Offset: 0x41 (R/W  8) Fault Interrupt Status Register */
  __IO  uint8_t                        ENV_MON_FLT_TEMPSTS; /**< Offset: 0x42 (R/W  8) Fault temperature Status Register */
  __I   uint8_t                        ENV_MON_THRMTRP_STS; /**< Offset: 0x43 (R/   8) ThermTrip Pin Status Register */
  __IO  uint8_t                        ENV_MON_INT_TEMP_STS; /**< Offset: 0x44 (R/W  8) Temperature of Internal Diode Register */
  __IO  uint8_t                        ENV_MON_VLT_INTSTS; /**< Offset: 0x45 (R/W  8) Volt Interrupt Status Register */
  __IO  uint16_t                       ENV_MON_VCP_LIMIT;  /**< Offset: 0x46 (R/W  16) VCP Limit Register */
  __IO  uint16_t                       ENV_MON_VTR_LIMIT;  /**< Offset: 0x48 (R/W  16) VTR Limit Register */
  __IO  uint16_t                       ENV_MON_VTT_LIMIT;  /**< Offset: 0x4A (R/W  16) VTT Limit Register */
  __IO  uint16_t                       ENV_MON_VIN_LIMIT;  /**< Offset: 0x4C (R/W  16) VIN Limit Register */
  __IO  uint8_t                        ENV_MON_EXT1_TMPLO_LMT; /**< Offset: 0x4E (R/W  8) Low limit for External Diode 1 Register */
  __IO  uint8_t                        ENV_MON_EXT1_TMPHI_LMT; /**< Offset: 0x4F (R/W  8) High limit for External Diode 1 Register */
  __IO  uint8_t                        ENV_MON_INT_TMPLO_LMT; /**< Offset: 0x50 (R/W  8) Low limit for Internal Diode Register */
  __IO  uint8_t                        ENV_MON_INT_TMPHI_LMT; /**< Offset: 0x51 (R/W  8) High limit for Internal Diode Register */
  __IO  uint8_t                        ENV_MON_EXT2_TMPLO_LMT; /**< Offset: 0x52 (R/W  8) Low limit for External Diode 2 Register */
  __IO  uint8_t                        ENV_MON_EXT2_TMPHI_LMT; /**< Offset: 0x53 (R/W  8) High limit for External Diode 2 Register */
  __IO  uint8_t                        ENV_MON_EXT3_TMPLO_LMT; /**< Offset: 0x54 (R/W  8) Low limit for External Diode 3 Register */
  __IO  uint8_t                        ENV_MON_EXT3_TMPHI_LMT; /**< Offset: 0x55 (R/W  8) High limit for External Diode 3 Register */
  __IO  uint8_t                        ENV_MON_EXT4_TMPLO_LMT; /**< Offset: 0x56 (R/W  8) Low limit for External Diode 4 Register */
  __IO  uint8_t                        ENV_MON_EXT4_TMPHI_LMT; /**< Offset: 0x57 (R/W  8) High limit for External Diode 4 Register */
  __IO  uint8_t                        ENV_MON_EXT1A_TMPLO_LMT; /**< Offset: 0x58 (R/W  8) Low limit for External Diode 1A Register */
  __IO  uint8_t                        ENV_MON_EXT1A_TMPHI_LMT; /**< Offset: 0x59 (R/W  8) High limit for External Diode 1A Register */
  __IO  uint8_t                        ENV_MON_EXT2A_TMPLO_LMT; /**< Offset: 0x5A (R/W  8) Low limit for External Diode 2A Register */
  __IO  uint8_t                        ENV_MON_EXT2A_TMPHI_LMT; /**< Offset: 0x5B (R/W  8) High limit for External Diode 2A Register */
  __IO  uint8_t                        ENV_MON_EXT3A_TMPLO_LMT; /**< Offset: 0x5C (R/W  8) Low limit for External Diode 3A Register */
  __IO  uint8_t                        ENV_MON_EXT3A_TMPHI_LMT; /**< Offset: 0x5D (R/W  8) High limit for External Diode 3A Register */
  __IO  uint8_t                        ENV_MON_EXT4A_TMPLO_LMT; /**< Offset: 0x5E (R/W  8) Low limit for External Diode 4A Register */
  __IO  uint8_t                        ENV_MON_EXT4A_TMPHI_LMT; /**< Offset: 0x5F (R/W  8) High limit for External Diode 4A Register */
  __I   uint8_t                        Reserved8[0x04];
  __IO  uint8_t                        ENV_MON_BCOMP3_EN;  /**< Offset: 0x64 (R/W  8) External Diode3 Beta compensation Register */
  __IO  uint8_t                        ENV_MON_BCOMP4_EN;  /**< Offset: 0x65 (R/W  8) External Diode4 Beta compensation Register */
  __I   uint8_t                        Reserved9[0x01];
  __IO  uint8_t                        ENV_MON_BCOMP_INTD_EN; /**< Offset: 0x67 (R/W  8) Internal Diode Beta compensation Register */
  __I   uint8_t                        Reserved10[0x04];
  __IO  uint8_t                        ENV_MON_CONV_SRATE; /**< Offset: 0x6C (R/W  8) Conversion Seconds Rate Register */
  __I   uint8_t                        Reserved11[0x01];
  __IO  uint8_t                        ENV_MON_CONV_MOD;   /**< Offset: 0x6E (R/W  8) Conversion Mode Register */
  __I   uint8_t                        Reserved12[0x01];
  __IO  uint8_t                        ENV_MON_REC_EN;     /**< Offset: 0x70 (R/W  8) REC Enable Register */
  __I   uint8_t                        ENV_MON_VSET_VLT;   /**< Offset: 0x71 (R/   8) VSET Voltage Reading Register */
  __I   uint8_t                        Reserved13[0x03];
  __I   uint8_t                        ENV_MON_THERM1;     /**< Offset: 0x75 (R/   8) Thermal Trip Temperature Diode 1 Register */
  __I   uint8_t                        ENV_MON_FLSF_STS;   /**< Offset: 0x76 (R/   8) FailSafe Status Register */
  __IO  uint8_t                        ENV_MON_FLSF_CFG;   /**< Offset: 0x77 (R/W  8) FailSafe Configuration Register */
  __I   uint8_t                        ENV_MON_SHDN_STS;   /**< Offset: 0x78 (R/   8) Shutdown Status Register */
  __IO  uint8_t                        ENV_MON_SHDN_CFG;   /**< Offset: 0x79 (R/W  8) Shutdown Configuration Register */
  __IO  uint8_t                        ENV_MON_FLT_INTSTS_EN; /**< Offset: 0x7A (R/W  8) Fault Interrupt Status Enable Register */
  __IO  uint8_t                        ENV_MON_TMP_INTSTS; /**< Offset: 0x7B (R/W  8) Temp Interrupt Status Enable Register */
  __IO  uint8_t                        ENV_MON_SPCL_FN;    /**< Offset: 0x7C (R/W  8) Special Function Register */
  __IO  uint8_t                        ENV_MON_INTTMP_INTEN; /**< Offset: 0x7D (R/W  8) Int Temp Interrupt Status Enable Register */
  __IO  uint8_t                        ENV_MON_VLT_INTEN;  /**< Offset: 0x7E (R/W  8) Volt Interrupt Status Enable Register */
  __I   uint8_t                        Reserved14[0x01];
  __IO  uint8_t                        ENV_MON_THRMTRP_TMP2; /**< Offset: 0x80 (R/W  8) Thermal Trip Temperature Diode 2 Register */
  __IO  uint8_t                        ENV_MON_THRMTRP_TMP3; /**< Offset: 0x81 (R/W  8) Thermal Trip Temperature Diode 3 Register */
  __IO  uint8_t                        ENV_MON_THRMTRP_TMP4; /**< Offset: 0x82 (R/W  8) Thermal Trip Temperature Diode 4 Register */
  __IO  uint8_t                        ENV_MON_THRMTRP_TMP1A; /**< Offset: 0x83 (R/W  8) Thermal Trip Temperature Diode 1A Register */
  __IO  uint8_t                        ENV_MON_THRMTRP_TMP2A; /**< Offset: 0x84 (R/W  8) Thermal Trip Temperature Diode 2A Register */
  __IO  uint8_t                        ENV_MON_THRMTRP_TMP3A; /**< Offset: 0x85 (R/W  8) Thermal Trip Temperature Diode 3A Register */
  __IO  uint8_t                        ENV_MON_THRMTRP_TMP4A; /**< Offset: 0x86 (R/W  8) Thermal Trip Temperature Diode 4A Register */
  __I   uint8_t                        Reserved15[0x01];
  __IO  uint8_t                        ENV_MON_ADJ_CH1;    /**< Offset: 0x88 (R/W  8) Adjusted Channel 1 Register */
  __IO  uint8_t                        ENV_MON_ADJ_CH2;    /**< Offset: 0x89 (R/W  8) Adjusted Channel 2 Register */
  __IO  uint8_t                        ENV_MON_ADJ_CH3;    /**< Offset: 0x8A (R/W  8) Adjusted Channel 3 Register */
  __IO  uint8_t                        ENV_MON_ADJ_CH4;    /**< Offset: 0x8B (R/W  8) Adjusted Channel 4 Register */
  __IO  uint8_t                        ENV_MON_ADJ_CH1A;   /**< Offset: 0x8C (R/W  8) Adjusted Channel 1A Register */
  __IO  uint8_t                        ENV_MON_ADJ_CH2A;   /**< Offset: 0x8D (R/W  8) Adjusted Channel 2A Register */
  __IO  uint8_t                        ENV_MON_ADJ_CH3A;   /**< Offset: 0x8E (R/W  8) Adjusted Channel 3A Register */
  __IO  uint8_t                        ENV_MON_ADJ_CH4A;   /**< Offset: 0x8F (R/W  8) Adjusted Channel 4A Register */
  __I   uint8_t                        Reserved16[0x6C];
  __I   uint8_t                        ENV_MON_UNLCK;      /**< Offset: 0xFC (R/   8) Unlock Register */
  __I   uint8_t                        Reserved17[0x303];
  __I   uint8_t                        ENV_MON_SYS_SHDN_RST; /**< Offset: 0x400 (R/   8) System Shutdown Reset Register */
} env_mon_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_ENV_MON_COMPONENT_H_ */
