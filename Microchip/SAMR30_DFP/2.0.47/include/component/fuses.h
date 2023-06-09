/*
 * Component description for FUSES
 *
 * Copyright (c) 2021 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description version 2021-06-07T06:13:46Z */
#ifndef _SAMR30_FUSES_COMPONENT_H_
#define _SAMR30_FUSES_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR FUSES                                        */
/* ************************************************************************** */

/* -------- FUSES_TEMP_LOG_WORD_0 : (FUSES Offset: 0x00) ( R/ 32) TEMP_LOG Page Word 0 -------- */
#define FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_INT_Pos _U_(0)                                               /**< (FUSES_TEMP_LOG_WORD_0) Integer part of room temperature in oC Position */
#define FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_INT_Msk (_U_(0xFF) << FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_INT_Pos) /**< (FUSES_TEMP_LOG_WORD_0) Integer part of room temperature in oC Mask */
#define FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_INT(value) (FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_INT_Msk & ((value) << FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_INT_Pos))
#define FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_DEC_Pos _U_(8)                                               /**< (FUSES_TEMP_LOG_WORD_0) Decimal part of room temperature Position */
#define FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_DEC_Msk (_U_(0xF) << FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_DEC_Pos) /**< (FUSES_TEMP_LOG_WORD_0) Decimal part of room temperature Mask */
#define FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_DEC(value) (FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_DEC_Msk & ((value) << FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_DEC_Pos))
#define FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_INT_Pos _U_(12)                                              /**< (FUSES_TEMP_LOG_WORD_0) Integer part of hot temperature in oC Position */
#define FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_INT_Msk (_U_(0xFF) << FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_INT_Pos) /**< (FUSES_TEMP_LOG_WORD_0) Integer part of hot temperature in oC Mask */
#define FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_INT(value) (FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_INT_Msk & ((value) << FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_INT_Pos))
#define FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_DEC_Pos _U_(20)                                              /**< (FUSES_TEMP_LOG_WORD_0) Decimal part of hot temperature Position */
#define FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_DEC_Msk (_U_(0xF) << FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_DEC_Pos) /**< (FUSES_TEMP_LOG_WORD_0) Decimal part of hot temperature Mask */
#define FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_DEC(value) (FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_DEC_Msk & ((value) << FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_DEC_Pos))
#define FUSES_TEMP_LOG_WORD_0_ROOM_INT1V_VAL_Pos _U_(24)                                              /**< (FUSES_TEMP_LOG_WORD_0) 2's complement of the internal 1V reference drift at room temperature (versus a 1.0 centered value) Position */
#define FUSES_TEMP_LOG_WORD_0_ROOM_INT1V_VAL_Msk (_U_(0xFF) << FUSES_TEMP_LOG_WORD_0_ROOM_INT1V_VAL_Pos) /**< (FUSES_TEMP_LOG_WORD_0) 2's complement of the internal 1V reference drift at room temperature (versus a 1.0 centered value) Mask */
#define FUSES_TEMP_LOG_WORD_0_ROOM_INT1V_VAL(value) (FUSES_TEMP_LOG_WORD_0_ROOM_INT1V_VAL_Msk & ((value) << FUSES_TEMP_LOG_WORD_0_ROOM_INT1V_VAL_Pos))
#define FUSES_TEMP_LOG_WORD_0_Msk             _U_(0xFFFFFFFF)                                      /**< (FUSES_TEMP_LOG_WORD_0) Register Mask  */


/* -------- FUSES_TEMP_LOG_WORD_1 : (FUSES Offset: 0x04) ( R/ 32) TEMP_LOG Page Word 1 -------- */
#define FUSES_TEMP_LOG_WORD_1_HOT_INT1V_VAL_Pos _U_(0)                                               /**< (FUSES_TEMP_LOG_WORD_1) 2's complement of the internal 1V reference drift at hot temperature (versus a 1.0 centered value) Position */
#define FUSES_TEMP_LOG_WORD_1_HOT_INT1V_VAL_Msk (_U_(0xFF) << FUSES_TEMP_LOG_WORD_1_HOT_INT1V_VAL_Pos) /**< (FUSES_TEMP_LOG_WORD_1) 2's complement of the internal 1V reference drift at hot temperature (versus a 1.0 centered value) Mask */
#define FUSES_TEMP_LOG_WORD_1_HOT_INT1V_VAL(value) (FUSES_TEMP_LOG_WORD_1_HOT_INT1V_VAL_Msk & ((value) << FUSES_TEMP_LOG_WORD_1_HOT_INT1V_VAL_Pos))
#define FUSES_TEMP_LOG_WORD_1_ROOM_ADC_VAL_Pos _U_(8)                                               /**< (FUSES_TEMP_LOG_WORD_1) 12-bit ADC conversion at room temperature Position */
#define FUSES_TEMP_LOG_WORD_1_ROOM_ADC_VAL_Msk (_U_(0xFFF) << FUSES_TEMP_LOG_WORD_1_ROOM_ADC_VAL_Pos) /**< (FUSES_TEMP_LOG_WORD_1) 12-bit ADC conversion at room temperature Mask */
#define FUSES_TEMP_LOG_WORD_1_ROOM_ADC_VAL(value) (FUSES_TEMP_LOG_WORD_1_ROOM_ADC_VAL_Msk & ((value) << FUSES_TEMP_LOG_WORD_1_ROOM_ADC_VAL_Pos))
#define FUSES_TEMP_LOG_WORD_1_HOT_ADC_VAL_Pos _U_(20)                                              /**< (FUSES_TEMP_LOG_WORD_1) 12-bit ADC conversion at hot temperature Position */
#define FUSES_TEMP_LOG_WORD_1_HOT_ADC_VAL_Msk (_U_(0xFFF) << FUSES_TEMP_LOG_WORD_1_HOT_ADC_VAL_Pos) /**< (FUSES_TEMP_LOG_WORD_1) 12-bit ADC conversion at hot temperature Mask */
#define FUSES_TEMP_LOG_WORD_1_HOT_ADC_VAL(value) (FUSES_TEMP_LOG_WORD_1_HOT_ADC_VAL_Msk & ((value) << FUSES_TEMP_LOG_WORD_1_HOT_ADC_VAL_Pos))
#define FUSES_TEMP_LOG_WORD_1_Msk             _U_(0xFFFFFFFF)                                      /**< (FUSES_TEMP_LOG_WORD_1) Register Mask  */


/* -------- FUSES_OTP5_WORD_0 : (FUSES Offset: 0x00) ( R/ 32) OTP5 Page Word 0 -------- */
#define FUSES_OTP5_WORD_0_ADC_BIASREFBUF_Pos  _U_(0)                                               /**< (FUSES_OTP5_WORD_0) ADC Bias Reference Buffer Scaling Position */
#define FUSES_OTP5_WORD_0_ADC_BIASREFBUF_Msk  (_U_(0x7) << FUSES_OTP5_WORD_0_ADC_BIASREFBUF_Pos)   /**< (FUSES_OTP5_WORD_0) ADC Bias Reference Buffer Scaling Mask */
#define FUSES_OTP5_WORD_0_ADC_BIASREFBUF(value) (FUSES_OTP5_WORD_0_ADC_BIASREFBUF_Msk & ((value) << FUSES_OTP5_WORD_0_ADC_BIASREFBUF_Pos))
#define FUSES_OTP5_WORD_0_ADC_BIASCOMP_Pos    _U_(3)                                               /**< (FUSES_OTP5_WORD_0) ADC Comparator Scaling Position */
#define FUSES_OTP5_WORD_0_ADC_BIASCOMP_Msk    (_U_(0x7) << FUSES_OTP5_WORD_0_ADC_BIASCOMP_Pos)     /**< (FUSES_OTP5_WORD_0) ADC Comparator Scaling Mask */
#define FUSES_OTP5_WORD_0_ADC_BIASCOMP(value) (FUSES_OTP5_WORD_0_ADC_BIASCOMP_Msk & ((value) << FUSES_OTP5_WORD_0_ADC_BIASCOMP_Pos))
#define FUSES_OTP5_WORD_0_USB_TRANSN_Pos      _U_(13)                                              /**< (FUSES_OTP5_WORD_0) USB pad Transn calibration Position */
#define FUSES_OTP5_WORD_0_USB_TRANSN_Msk      (_U_(0x1F) << FUSES_OTP5_WORD_0_USB_TRANSN_Pos)      /**< (FUSES_OTP5_WORD_0) USB pad Transn calibration Mask */
#define FUSES_OTP5_WORD_0_USB_TRANSN(value)   (FUSES_OTP5_WORD_0_USB_TRANSN_Msk & ((value) << FUSES_OTP5_WORD_0_USB_TRANSN_Pos))
#define FUSES_OTP5_WORD_0_USB_TRANSP_Pos      _U_(18)                                              /**< (FUSES_OTP5_WORD_0) USB pad Transp calibration Position */
#define FUSES_OTP5_WORD_0_USB_TRANSP_Msk      (_U_(0x1F) << FUSES_OTP5_WORD_0_USB_TRANSP_Pos)      /**< (FUSES_OTP5_WORD_0) USB pad Transp calibration Mask */
#define FUSES_OTP5_WORD_0_USB_TRANSP(value)   (FUSES_OTP5_WORD_0_USB_TRANSP_Msk & ((value) << FUSES_OTP5_WORD_0_USB_TRANSP_Pos))
#define FUSES_OTP5_WORD_0_USB_TRIM_Pos        _U_(23)                                              /**< (FUSES_OTP5_WORD_0) USB pad Trim calibration Position */
#define FUSES_OTP5_WORD_0_USB_TRIM_Msk        (_U_(0x7) << FUSES_OTP5_WORD_0_USB_TRIM_Pos)         /**< (FUSES_OTP5_WORD_0) USB pad Trim calibration Mask */
#define FUSES_OTP5_WORD_0_USB_TRIM(value)     (FUSES_OTP5_WORD_0_USB_TRIM_Msk & ((value) << FUSES_OTP5_WORD_0_USB_TRIM_Pos))
#define FUSES_OTP5_WORD_0_Msk                 _U_(0x03FFE03F)                                      /**< (FUSES_OTP5_WORD_0) Register Mask  */


/* -------- FUSES_USER_WORD_0 : (FUSES Offset: 0x00) (R/W 32) USER Page Word 0 -------- */
#define FUSES_USER_WORD_0_NVMCTRL_BOOTPROT_Pos _U_(0)                                               /**< (FUSES_USER_WORD_0) Bootloader Size Position */
#define FUSES_USER_WORD_0_NVMCTRL_BOOTPROT_Msk (_U_(0x7) << FUSES_USER_WORD_0_NVMCTRL_BOOTPROT_Pos) /**< (FUSES_USER_WORD_0) Bootloader Size Mask */
#define FUSES_USER_WORD_0_NVMCTRL_BOOTPROT(value) (FUSES_USER_WORD_0_NVMCTRL_BOOTPROT_Msk & ((value) << FUSES_USER_WORD_0_NVMCTRL_BOOTPROT_Pos))
#define FUSES_USER_WORD_0_NVMCTRL_EEPROM_SIZE_Pos _U_(4)                                               /**< (FUSES_USER_WORD_0) EEPROM Size Position */
#define FUSES_USER_WORD_0_NVMCTRL_EEPROM_SIZE_Msk (_U_(0x7) << FUSES_USER_WORD_0_NVMCTRL_EEPROM_SIZE_Pos) /**< (FUSES_USER_WORD_0) EEPROM Size Mask */
#define FUSES_USER_WORD_0_NVMCTRL_EEPROM_SIZE(value) (FUSES_USER_WORD_0_NVMCTRL_EEPROM_SIZE_Msk & ((value) << FUSES_USER_WORD_0_NVMCTRL_EEPROM_SIZE_Pos))
#define FUSES_USER_WORD_0_BOD33USERLEVEL_Pos  _U_(8)                                               /**< (FUSES_USER_WORD_0) BOD33 User Level Position */
#define FUSES_USER_WORD_0_BOD33USERLEVEL_Msk  (_U_(0x3F) << FUSES_USER_WORD_0_BOD33USERLEVEL_Pos)  /**< (FUSES_USER_WORD_0) BOD33 User Level Mask */
#define FUSES_USER_WORD_0_BOD33USERLEVEL(value) (FUSES_USER_WORD_0_BOD33USERLEVEL_Msk & ((value) << FUSES_USER_WORD_0_BOD33USERLEVEL_Pos))
#define FUSES_USER_WORD_0_BOD33_DIS_Pos       _U_(14)                                              /**< (FUSES_USER_WORD_0) BOD33 Disable Position */
#define FUSES_USER_WORD_0_BOD33_DIS_Msk       (_U_(0x1) << FUSES_USER_WORD_0_BOD33_DIS_Pos)        /**< (FUSES_USER_WORD_0) BOD33 Disable Mask */
#define FUSES_USER_WORD_0_BOD33_DIS(value)    (FUSES_USER_WORD_0_BOD33_DIS_Msk & ((value) << FUSES_USER_WORD_0_BOD33_DIS_Pos))
#define FUSES_USER_WORD_0_BOD33_ACTION_Pos    _U_(15)                                              /**< (FUSES_USER_WORD_0) BOD33 Action Position */
#define FUSES_USER_WORD_0_BOD33_ACTION_Msk    (_U_(0x3) << FUSES_USER_WORD_0_BOD33_ACTION_Pos)     /**< (FUSES_USER_WORD_0) BOD33 Action Mask */
#define FUSES_USER_WORD_0_BOD33_ACTION(value) (FUSES_USER_WORD_0_BOD33_ACTION_Msk & ((value) << FUSES_USER_WORD_0_BOD33_ACTION_Pos))
#define FUSES_USER_WORD_0_BOD12_DIS_Pos       _U_(23)                                              /**< (FUSES_USER_WORD_0) BOD12 Disable Position */
#define FUSES_USER_WORD_0_BOD12_DIS_Msk       (_U_(0x1) << FUSES_USER_WORD_0_BOD12_DIS_Pos)        /**< (FUSES_USER_WORD_0) BOD12 Disable Mask */
#define FUSES_USER_WORD_0_BOD12_DIS(value)    (FUSES_USER_WORD_0_BOD12_DIS_Msk & ((value) << FUSES_USER_WORD_0_BOD12_DIS_Pos))
#define FUSES_USER_WORD_0_WDT_ENABLE_Pos      _U_(26)                                              /**< (FUSES_USER_WORD_0) WDT Enable Position */
#define FUSES_USER_WORD_0_WDT_ENABLE_Msk      (_U_(0x1) << FUSES_USER_WORD_0_WDT_ENABLE_Pos)       /**< (FUSES_USER_WORD_0) WDT Enable Mask */
#define FUSES_USER_WORD_0_WDT_ENABLE(value)   (FUSES_USER_WORD_0_WDT_ENABLE_Msk & ((value) << FUSES_USER_WORD_0_WDT_ENABLE_Pos))
#define FUSES_USER_WORD_0_WDT_ALWAYSON_Pos    _U_(27)                                              /**< (FUSES_USER_WORD_0) WDT Always On Position */
#define FUSES_USER_WORD_0_WDT_ALWAYSON_Msk    (_U_(0x1) << FUSES_USER_WORD_0_WDT_ALWAYSON_Pos)     /**< (FUSES_USER_WORD_0) WDT Always On Mask */
#define FUSES_USER_WORD_0_WDT_ALWAYSON(value) (FUSES_USER_WORD_0_WDT_ALWAYSON_Msk & ((value) << FUSES_USER_WORD_0_WDT_ALWAYSON_Pos))
#define FUSES_USER_WORD_0_WDT_PER_Pos         _U_(28)                                              /**< (FUSES_USER_WORD_0) WDT Period Position */
#define FUSES_USER_WORD_0_WDT_PER_Msk         (_U_(0xF) << FUSES_USER_WORD_0_WDT_PER_Pos)          /**< (FUSES_USER_WORD_0) WDT Period Mask */
#define FUSES_USER_WORD_0_WDT_PER(value)      (FUSES_USER_WORD_0_WDT_PER_Msk & ((value) << FUSES_USER_WORD_0_WDT_PER_Pos))
#define FUSES_USER_WORD_0_Msk                 _U_(0xFC81FF77)                                      /**< (FUSES_USER_WORD_0) Register Mask  */


/* -------- FUSES_USER_WORD_1 : (FUSES Offset: 0x04) (R/W 32) USER Page Word 1 -------- */
#define FUSES_USER_WORD_1_WDT_WINDOW_Pos      _U_(0)                                               /**< (FUSES_USER_WORD_1) WDT Window Position */
#define FUSES_USER_WORD_1_WDT_WINDOW_Msk      (_U_(0xF) << FUSES_USER_WORD_1_WDT_WINDOW_Pos)       /**< (FUSES_USER_WORD_1) WDT Window Mask */
#define FUSES_USER_WORD_1_WDT_WINDOW(value)   (FUSES_USER_WORD_1_WDT_WINDOW_Msk & ((value) << FUSES_USER_WORD_1_WDT_WINDOW_Pos))
#define FUSES_USER_WORD_1_WDT_EWOFFSET_Pos    _U_(4)                                               /**< (FUSES_USER_WORD_1) WDT Early Warning Offset Position */
#define FUSES_USER_WORD_1_WDT_EWOFFSET_Msk    (_U_(0xF) << FUSES_USER_WORD_1_WDT_EWOFFSET_Pos)     /**< (FUSES_USER_WORD_1) WDT Early Warning Offset Mask */
#define FUSES_USER_WORD_1_WDT_EWOFFSET(value) (FUSES_USER_WORD_1_WDT_EWOFFSET_Msk & ((value) << FUSES_USER_WORD_1_WDT_EWOFFSET_Pos))
#define FUSES_USER_WORD_1_WDT_WEN_Pos         _U_(8)                                               /**< (FUSES_USER_WORD_1) WDT Window Mode Enable Position */
#define FUSES_USER_WORD_1_WDT_WEN_Msk         (_U_(0x1) << FUSES_USER_WORD_1_WDT_WEN_Pos)          /**< (FUSES_USER_WORD_1) WDT Window Mode Enable Mask */
#define FUSES_USER_WORD_1_WDT_WEN(value)      (FUSES_USER_WORD_1_WDT_WEN_Msk & ((value) << FUSES_USER_WORD_1_WDT_WEN_Pos))
#define FUSES_USER_WORD_1_BOD33_HYST_Pos      _U_(9)                                               /**< (FUSES_USER_WORD_1) BOD33 Hysteresis Position */
#define FUSES_USER_WORD_1_BOD33_HYST_Msk      (_U_(0x1) << FUSES_USER_WORD_1_BOD33_HYST_Pos)       /**< (FUSES_USER_WORD_1) BOD33 Hysteresis Mask */
#define FUSES_USER_WORD_1_BOD33_HYST(value)   (FUSES_USER_WORD_1_BOD33_HYST_Msk & ((value) << FUSES_USER_WORD_1_BOD33_HYST_Pos))
#define FUSES_USER_WORD_1_BOD12_HYST_Pos      _U_(10)                                              /**< (FUSES_USER_WORD_1) BOD12 Hysteresis Position */
#define FUSES_USER_WORD_1_BOD12_HYST_Msk      (_U_(0x1) << FUSES_USER_WORD_1_BOD12_HYST_Pos)       /**< (FUSES_USER_WORD_1) BOD12 Hysteresis Mask */
#define FUSES_USER_WORD_1_BOD12_HYST(value)   (FUSES_USER_WORD_1_BOD12_HYST_Msk & ((value) << FUSES_USER_WORD_1_BOD12_HYST_Pos))
#define FUSES_USER_WORD_1_NVMCTRL_REGION_LOCKS_Pos _U_(16)                                              /**< (FUSES_USER_WORD_1) NVM Region Locks Position */
#define FUSES_USER_WORD_1_NVMCTRL_REGION_LOCKS_Msk (_U_(0xFFFF) << FUSES_USER_WORD_1_NVMCTRL_REGION_LOCKS_Pos) /**< (FUSES_USER_WORD_1) NVM Region Locks Mask */
#define FUSES_USER_WORD_1_NVMCTRL_REGION_LOCKS(value) (FUSES_USER_WORD_1_NVMCTRL_REGION_LOCKS_Msk & ((value) << FUSES_USER_WORD_1_NVMCTRL_REGION_LOCKS_Pos))
#define FUSES_USER_WORD_1_Msk                 _U_(0xFFFF07FF)                                      /**< (FUSES_USER_WORD_1) Register Mask  */


/** \brief FUSES register offsets definitions */
#define FUSES_TEMP_LOG_WORD_0_REG_OFST (0x00)              /**< (FUSES_TEMP_LOG_WORD_0) TEMP_LOG Page Word 0 Offset */
#define FUSES_TEMP_LOG_WORD_1_REG_OFST (0x04)              /**< (FUSES_TEMP_LOG_WORD_1) TEMP_LOG Page Word 1 Offset */
#define FUSES_OTP5_WORD_0_REG_OFST     (0x00)              /**< (FUSES_OTP5_WORD_0) OTP5 Page Word 0 Offset */
#define FUSES_USER_WORD_0_REG_OFST     (0x00)              /**< (FUSES_USER_WORD_0) USER Page Word 0 Offset */
#define FUSES_USER_WORD_1_REG_OFST     (0x04)              /**< (FUSES_USER_WORD_1) USER Page Word 1 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief TEMP_LOG_FUSES register API structure */
typedef struct
{
  __I   uint32_t                       FUSES_TEMP_LOG_WORD_0; /**< Offset: 0x00 (R/   32) TEMP_LOG Page Word 0 */
  __I   uint32_t                       FUSES_TEMP_LOG_WORD_1; /**< Offset: 0x04 (R/   32) TEMP_LOG Page Word 1 */
} fuses_temp_log_fuses_registers_t;

/** \brief OTP5_FUSES register API structure */
typedef struct
{
  __I   uint32_t                       FUSES_OTP5_WORD_0;  /**< Offset: 0x00 (R/   32) OTP5 Page Word 0 */
} fuses_otp5_fuses_registers_t;

/** \brief USER_FUSES register API structure */
typedef struct
{
  __IO  uint32_t                       FUSES_USER_WORD_0;  /**< Offset: 0x00 (R/W  32) USER Page Word 0 */
  __IO  uint32_t                       FUSES_USER_WORD_1;  /**< Offset: 0x04 (R/W  32) USER Page Word 1 */
} fuses_user_fuses_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMR30_FUSES_COMPONENT_H_ */
