/*
 * Component description for RTC
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
#ifndef _CEC1702Q_RTC_COMPONENT_H_
#define _CEC1702Q_RTC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR RTC                                          */
/* ************************************************************************** */

/* -------- RTC_SEC : (RTC Offset: 0x00) (R/W 8) Seconds Register -------- */
#define RTC_SEC_RESETVALUE                    _UINT8_(0x00)                                        /*  (RTC_SEC) Seconds Register  Reset Value */

#define RTC_SEC_Msk                           _UINT8_(0x00)                                        /* (RTC_SEC) Register Mask  */


/* -------- RTC_SEC_ALARM : (RTC Offset: 0x01) (R/W 8) Seconds Alarm Register -------- */
#define RTC_SEC_ALARM_RESETVALUE              _UINT8_(0x00)                                        /*  (RTC_SEC_ALARM) Seconds Alarm Register  Reset Value */

#define RTC_SEC_ALARM_Msk                     _UINT8_(0x00)                                        /* (RTC_SEC_ALARM) Register Mask  */


/* -------- RTC_MIN : (RTC Offset: 0x02) (R/W 8) Minutes Register -------- */
#define RTC_MIN_RESETVALUE                    _UINT8_(0x00)                                        /*  (RTC_MIN) Minutes Register  Reset Value */

#define RTC_MIN_Msk                           _UINT8_(0x00)                                        /* (RTC_MIN) Register Mask  */


/* -------- RTC_MIN_ALARM : (RTC Offset: 0x03) (R/W 8) Minutes Alarm Register -------- */
#define RTC_MIN_ALARM_RESETVALUE              _UINT8_(0x00)                                        /*  (RTC_MIN_ALARM) Minutes Alarm Register  Reset Value */

#define RTC_MIN_ALARM_Msk                     _UINT8_(0x00)                                        /* (RTC_MIN_ALARM) Register Mask  */


/* -------- RTC_HR : (RTC Offset: 0x04) (R/W 8) Hours Register -------- */
#define RTC_HR_RESETVALUE                     _UINT8_(0x00)                                        /*  (RTC_HR) Hours Register  Reset Value */

#define RTC_HR_Msk                            _UINT8_(0x00)                                        /* (RTC_HR) Register Mask  */


/* -------- RTC_HR_ALARM : (RTC Offset: 0x05) (R/W 8) Hours Alarm Register -------- */
#define RTC_HR_ALARM_RESETVALUE               _UINT8_(0x00)                                        /*  (RTC_HR_ALARM) Hours Alarm Register  Reset Value */

#define RTC_HR_ALARM_Msk                      _UINT8_(0x00)                                        /* (RTC_HR_ALARM) Register Mask  */


/* -------- RTC_DAY_OF_WK : (RTC Offset: 0x06) (R/W 8) Day of Week Register -------- */
#define RTC_DAY_OF_WK_RESETVALUE              _UINT8_(0x00)                                        /*  (RTC_DAY_OF_WK) Day of Week Register  Reset Value */

#define RTC_DAY_OF_WK_Msk                     _UINT8_(0x00)                                        /* (RTC_DAY_OF_WK) Register Mask  */


/* -------- RTC_DAY_OF_MON : (RTC Offset: 0x07) (R/W 8) Day of Month Register -------- */
#define RTC_DAY_OF_MON_RESETVALUE             _UINT8_(0x00)                                        /*  (RTC_DAY_OF_MON) Day of Month Register  Reset Value */

#define RTC_DAY_OF_MON_Msk                    _UINT8_(0x00)                                        /* (RTC_DAY_OF_MON) Register Mask  */


/* -------- RTC_MONTH : (RTC Offset: 0x08) (R/W 8) Month Register -------- */
#define RTC_MONTH_RESETVALUE                  _UINT8_(0x00)                                        /*  (RTC_MONTH) Month Register  Reset Value */

#define RTC_MONTH_Msk                         _UINT8_(0x00)                                        /* (RTC_MONTH) Register Mask  */


/* -------- RTC_YEAR : (RTC Offset: 0x09) (R/W 8) Year Register -------- */
#define RTC_YEAR_RESETVALUE                   _UINT8_(0x00)                                        /*  (RTC_YEAR) Year Register  Reset Value */

#define RTC_YEAR_Msk                          _UINT8_(0x00)                                        /* (RTC_YEAR) Register Mask  */


/* -------- RTC_REGA : (RTC Offset: 0x0A) (R/W 8) Register A -------- */
#define RTC_REGA_RESETVALUE                   _UINT8_(0x00)                                        /*  (RTC_REGA) Register A  Reset Value */

#define RTC_REGA_Msk                          _UINT8_(0x00)                                        /* (RTC_REGA) Register Mask  */


/* -------- RTC_REGB : (RTC Offset: 0x0B) (R/W 8) Register B -------- */
#define RTC_REGB_RESETVALUE                   _UINT8_(0x00)                                        /*  (RTC_REGB) Register B  Reset Value */

#define RTC_REGB_Msk                          _UINT8_(0x00)                                        /* (RTC_REGB) Register Mask  */


/* -------- RTC_REGC : (RTC Offset: 0x0C) (R/W 8) Register C -------- */
#define RTC_REGC_RESETVALUE                   _UINT8_(0x00)                                        /*  (RTC_REGC) Register C  Reset Value */

#define RTC_REGC_Msk                          _UINT8_(0x00)                                        /* (RTC_REGC) Register Mask  */


/* -------- RTC_REGD : (RTC Offset: 0x0D) (R/W 8) Register D -------- */
#define RTC_REGD_RESETVALUE                   _UINT8_(0x00)                                        /*  (RTC_REGD) Register D  Reset Value */

#define RTC_REGD_Msk                          _UINT8_(0x00)                                        /* (RTC_REGD) Register Mask  */


/* -------- RTC_CTRL : (RTC Offset: 0x10) (R/W 32) RTC Control Register -------- */
#define RTC_CTRL_RESETVALUE                   _UINT32_(0x00)                                       /*  (RTC_CTRL) RTC Control Register  Reset Value */

#define RTC_CTRL_BLK_EN_Pos                   _UINT32_(0)                                          /* (RTC_CTRL) BLK_EN This bit must be '1' in order for the block to function internally. Registers may be initialized first, before\n      setting this bit to '1' to start operation. Position */
#define RTC_CTRL_BLK_EN_Msk                   (_UINT32_(0x1) << RTC_CTRL_BLK_EN_Pos)               /* (RTC_CTRL) BLK_EN This bit must be '1' in order for the block to function internally. Registers may be initialized first, before\n      setting this bit to '1' to start operation. Mask */
#define RTC_CTRL_BLK_EN(value)                (RTC_CTRL_BLK_EN_Msk & (_UINT32_(value) << RTC_CTRL_BLK_EN_Pos)) /* Assigment of value for BLK_EN in the RTC_CTRL register */
#define RTC_CTRL_SOFT_RST_Pos                 _UINT32_(1)                                          /* (RTC_CTRL) SOFT_RST A '1' written to this bit position will trigger the RTC_RST reset, resetting the block and all registers except\n      this one and the Test Register. This bit is self-clearing at the end of the reset, one cycle of Host Bus Clock later, and so requires\n      no waiting. Position */
#define RTC_CTRL_SOFT_RST_Msk                 (_UINT32_(0x1) << RTC_CTRL_SOFT_RST_Pos)             /* (RTC_CTRL) SOFT_RST A '1' written to this bit position will trigger the RTC_RST reset, resetting the block and all registers except\n      this one and the Test Register. This bit is self-clearing at the end of the reset, one cycle of Host Bus Clock later, and so requires\n      no waiting. Mask */
#define RTC_CTRL_SOFT_RST(value)              (RTC_CTRL_SOFT_RST_Msk & (_UINT32_(value) << RTC_CTRL_SOFT_RST_Pos)) /* Assigment of value for SOFT_RST in the RTC_CTRL register */
#define RTC_CTRL_TEST_Pos                     _UINT32_(2)                                          /* (RTC_CTRL) TEST Position */
#define RTC_CTRL_TEST_Msk                     (_UINT32_(0x1) << RTC_CTRL_TEST_Pos)                 /* (RTC_CTRL) TEST Mask */
#define RTC_CTRL_TEST(value)                  (RTC_CTRL_TEST_Msk & (_UINT32_(value) << RTC_CTRL_TEST_Pos)) /* Assigment of value for TEST in the RTC_CTRL register */
#define RTC_CTRL_ALM_EN_Pos                   _UINT32_(3)                                          /* (RTC_CTRL) ALM_EN  1=Enables the Alarm features, 0=Disables the Alarm features Position */
#define RTC_CTRL_ALM_EN_Msk                   (_UINT32_(0x1) << RTC_CTRL_ALM_EN_Pos)               /* (RTC_CTRL) ALM_EN  1=Enables the Alarm features, 0=Disables the Alarm features Mask */
#define RTC_CTRL_ALM_EN(value)                (RTC_CTRL_ALM_EN_Msk & (_UINT32_(value) << RTC_CTRL_ALM_EN_Pos)) /* Assigment of value for ALM_EN in the RTC_CTRL register */
#define RTC_CTRL_Msk                          _UINT32_(0x0000000F)                                 /* (RTC_CTRL) Register Mask  */


/* -------- RTC_WK_ALARM : (RTC Offset: 0x14) (R/W 32) Week Alarm Register[7:0] - ALARM_DAY_OF_WEEK This register, if written to a value in the range 1- -7, will inhibit the Alarm\n      interrupt unless this field matches the contents of the Day of Week Register also. -------- */
#define RTC_WK_ALARM_RESETVALUE               _UINT32_(0x00)                                       /*  (RTC_WK_ALARM) Week Alarm Register[7:0] - ALARM_DAY_OF_WEEK This register, if written to a value in the range 1- -7, will inhibit the Alarm\n      interrupt unless this field matches the contents of the Day of Week Register also.  Reset Value */

#define RTC_WK_ALARM_Msk                      _UINT32_(0x00000000)                                 /* (RTC_WK_ALARM) Register Mask  */


/* -------- RTC_DAYLT_SAVF : (RTC Offset: 0x18) (R/W 32) Daylight Savings Forward Register -------- */
#define RTC_DAYLT_SAVF_RESETVALUE             _UINT32_(0x00)                                       /*  (RTC_DAYLT_SAVF) Daylight Savings Forward Register  Reset Value */

#define RTC_DAYLT_SAVF_DST_MON_Pos            _UINT32_(0)                                          /* (RTC_DAYLT_SAVF) This field matches the Month Register. Position */
#define RTC_DAYLT_SAVF_DST_MON_Msk            (_UINT32_(0xFF) << RTC_DAYLT_SAVF_DST_MON_Pos)       /* (RTC_DAYLT_SAVF) This field matches the Month Register. Mask */
#define RTC_DAYLT_SAVF_DST_MON(value)         (RTC_DAYLT_SAVF_DST_MON_Msk & (_UINT32_(value) << RTC_DAYLT_SAVF_DST_MON_Pos)) /* Assigment of value for DST_MON in the RTC_DAYLT_SAVF register */
#define RTC_DAYLT_SAVF_DST_DAY_OF_WK_Pos      _UINT32_(8)                                          /* (RTC_DAYLT_SAVF) This field matches the Day of Week Register bits[2:0]. Position */
#define RTC_DAYLT_SAVF_DST_DAY_OF_WK_Msk      (_UINT32_(0x7) << RTC_DAYLT_SAVF_DST_DAY_OF_WK_Pos)  /* (RTC_DAYLT_SAVF) This field matches the Day of Week Register bits[2:0]. Mask */
#define RTC_DAYLT_SAVF_DST_DAY_OF_WK(value)   (RTC_DAYLT_SAVF_DST_DAY_OF_WK_Msk & (_UINT32_(value) << RTC_DAYLT_SAVF_DST_DAY_OF_WK_Pos)) /* Assigment of value for DST_DAY_OF_WK in the RTC_DAYLT_SAVF register */
#define RTC_DAYLT_SAVF_DST_WK_Pos             _UINT32_(16)                                         /* (RTC_DAYLT_SAVF) 5=Last week of month, 4 =Fourth week of month, 3=Third week of month, 2=Second week of month, 1=First week of month Position */
#define RTC_DAYLT_SAVF_DST_WK_Msk             (_UINT32_(0x7) << RTC_DAYLT_SAVF_DST_WK_Pos)         /* (RTC_DAYLT_SAVF) 5=Last week of month, 4 =Fourth week of month, 3=Third week of month, 2=Second week of month, 1=First week of month Mask */
#define RTC_DAYLT_SAVF_DST_WK(value)          (RTC_DAYLT_SAVF_DST_WK_Msk & (_UINT32_(value) << RTC_DAYLT_SAVF_DST_WK_Pos)) /* Assigment of value for DST_WK in the RTC_DAYLT_SAVF register */
#define RTC_DAYLT_SAVF_DST_HR_Pos             _UINT32_(24)                                         /* (RTC_DAYLT_SAVF) This field holds the matching value for bits[6:0] of the Hours register. The written value will be interpreted according\n      to the 24/12 Hour mode and DM mode settings at the time of writing. Position */
#define RTC_DAYLT_SAVF_DST_HR_Msk             (_UINT32_(0x7F) << RTC_DAYLT_SAVF_DST_HR_Pos)        /* (RTC_DAYLT_SAVF) This field holds the matching value for bits[6:0] of the Hours register. The written value will be interpreted according\n      to the 24/12 Hour mode and DM mode settings at the time of writing. Mask */
#define RTC_DAYLT_SAVF_DST_HR(value)          (RTC_DAYLT_SAVF_DST_HR_Msk & (_UINT32_(value) << RTC_DAYLT_SAVF_DST_HR_Pos)) /* Assigment of value for DST_HR in the RTC_DAYLT_SAVF register */
#define RTC_DAYLT_SAVF_DST_AM_PM_Pos          _UINT32_(31)                                         /* (RTC_DAYLT_SAVF) This bit selects AM vs. PM, to match bit[7] of the Hours Register if 12-Hour mode is selected in Register B at the time\n      of writing. Position */
#define RTC_DAYLT_SAVF_DST_AM_PM_Msk          (_UINT32_(0x1) << RTC_DAYLT_SAVF_DST_AM_PM_Pos)      /* (RTC_DAYLT_SAVF) This bit selects AM vs. PM, to match bit[7] of the Hours Register if 12-Hour mode is selected in Register B at the time\n      of writing. Mask */
#define RTC_DAYLT_SAVF_DST_AM_PM(value)       (RTC_DAYLT_SAVF_DST_AM_PM_Msk & (_UINT32_(value) << RTC_DAYLT_SAVF_DST_AM_PM_Pos)) /* Assigment of value for DST_AM_PM in the RTC_DAYLT_SAVF register */
#define RTC_DAYLT_SAVF_Msk                    _UINT32_(0xFF0707FF)                                 /* (RTC_DAYLT_SAVF) Register Mask  */


/* -------- RTC_DAYLT_SAVB : (RTC Offset: 0x1C) (R/W 32) Daylight Savings Backward Register -------- */
#define RTC_DAYLT_SAVB_RESETVALUE             _UINT32_(0x00)                                       /*  (RTC_DAYLT_SAVB) Daylight Savings Backward Register  Reset Value */

#define RTC_DAYLT_SAVB_DST_MON_Pos            _UINT32_(0)                                          /* (RTC_DAYLT_SAVB) This field matches the Month Register. Position */
#define RTC_DAYLT_SAVB_DST_MON_Msk            (_UINT32_(0xFF) << RTC_DAYLT_SAVB_DST_MON_Pos)       /* (RTC_DAYLT_SAVB) This field matches the Month Register. Mask */
#define RTC_DAYLT_SAVB_DST_MON(value)         (RTC_DAYLT_SAVB_DST_MON_Msk & (_UINT32_(value) << RTC_DAYLT_SAVB_DST_MON_Pos)) /* Assigment of value for DST_MON in the RTC_DAYLT_SAVB register */
#define RTC_DAYLT_SAVB_DST_DAY_OF_WK_Pos      _UINT32_(8)                                          /* (RTC_DAYLT_SAVB) This field matches the Day of Week Register bits[2:0]. Position */
#define RTC_DAYLT_SAVB_DST_DAY_OF_WK_Msk      (_UINT32_(0x7) << RTC_DAYLT_SAVB_DST_DAY_OF_WK_Pos)  /* (RTC_DAYLT_SAVB) This field matches the Day of Week Register bits[2:0]. Mask */
#define RTC_DAYLT_SAVB_DST_DAY_OF_WK(value)   (RTC_DAYLT_SAVB_DST_DAY_OF_WK_Msk & (_UINT32_(value) << RTC_DAYLT_SAVB_DST_DAY_OF_WK_Pos)) /* Assigment of value for DST_DAY_OF_WK in the RTC_DAYLT_SAVB register */
#define RTC_DAYLT_SAVB_DST_WK_Pos             _UINT32_(16)                                         /* (RTC_DAYLT_SAVB) 5=Last week of month, 4 =Fourth week of month, 3=Third week of month, 2=Second week of month, 1=First week of month Position */
#define RTC_DAYLT_SAVB_DST_WK_Msk             (_UINT32_(0x7) << RTC_DAYLT_SAVB_DST_WK_Pos)         /* (RTC_DAYLT_SAVB) 5=Last week of month, 4 =Fourth week of month, 3=Third week of month, 2=Second week of month, 1=First week of month Mask */
#define RTC_DAYLT_SAVB_DST_WK(value)          (RTC_DAYLT_SAVB_DST_WK_Msk & (_UINT32_(value) << RTC_DAYLT_SAVB_DST_WK_Pos)) /* Assigment of value for DST_WK in the RTC_DAYLT_SAVB register */
#define RTC_DAYLT_SAVB_DST_HR_Pos             _UINT32_(24)                                         /* (RTC_DAYLT_SAVB) This field holds the matching value for bits[6:0] of the Hours register. The written value will be interpreted according\n      to the 24/12 Hour mode and DM mode settings at the time of writing. Position */
#define RTC_DAYLT_SAVB_DST_HR_Msk             (_UINT32_(0x7F) << RTC_DAYLT_SAVB_DST_HR_Pos)        /* (RTC_DAYLT_SAVB) This field holds the matching value for bits[6:0] of the Hours register. The written value will be interpreted according\n      to the 24/12 Hour mode and DM mode settings at the time of writing. Mask */
#define RTC_DAYLT_SAVB_DST_HR(value)          (RTC_DAYLT_SAVB_DST_HR_Msk & (_UINT32_(value) << RTC_DAYLT_SAVB_DST_HR_Pos)) /* Assigment of value for DST_HR in the RTC_DAYLT_SAVB register */
#define RTC_DAYLT_SAVB_DST_AM_PM_Pos          _UINT32_(31)                                         /* (RTC_DAYLT_SAVB) This bit selects AM vs. PM, to match bit[7] of the Hours Register if 12-Hour mode is selected in Register B at the time\n      of writing. Position */
#define RTC_DAYLT_SAVB_DST_AM_PM_Msk          (_UINT32_(0x1) << RTC_DAYLT_SAVB_DST_AM_PM_Pos)      /* (RTC_DAYLT_SAVB) This bit selects AM vs. PM, to match bit[7] of the Hours Register if 12-Hour mode is selected in Register B at the time\n      of writing. Mask */
#define RTC_DAYLT_SAVB_DST_AM_PM(value)       (RTC_DAYLT_SAVB_DST_AM_PM_Msk & (_UINT32_(value) << RTC_DAYLT_SAVB_DST_AM_PM_Pos)) /* Assigment of value for DST_AM_PM in the RTC_DAYLT_SAVB register */
#define RTC_DAYLT_SAVB_Msk                    _UINT32_(0xFF0707FF)                                 /* (RTC_DAYLT_SAVB) Register Mask  */


/** \brief RTC register offsets definitions */
#define RTC_SEC_REG_OFST               _UINT32_(0x00)      /* (RTC_SEC) Seconds Register Offset */
#define RTC_SEC_ALARM_REG_OFST         _UINT32_(0x01)      /* (RTC_SEC_ALARM) Seconds Alarm Register Offset */
#define RTC_MIN_REG_OFST               _UINT32_(0x02)      /* (RTC_MIN) Minutes Register Offset */
#define RTC_MIN_ALARM_REG_OFST         _UINT32_(0x03)      /* (RTC_MIN_ALARM) Minutes Alarm Register Offset */
#define RTC_HR_REG_OFST                _UINT32_(0x04)      /* (RTC_HR) Hours Register Offset */
#define RTC_HR_ALARM_REG_OFST          _UINT32_(0x05)      /* (RTC_HR_ALARM) Hours Alarm Register Offset */
#define RTC_DAY_OF_WK_REG_OFST         _UINT32_(0x06)      /* (RTC_DAY_OF_WK) Day of Week Register Offset */
#define RTC_DAY_OF_MON_REG_OFST        _UINT32_(0x07)      /* (RTC_DAY_OF_MON) Day of Month Register Offset */
#define RTC_MONTH_REG_OFST             _UINT32_(0x08)      /* (RTC_MONTH) Month Register Offset */
#define RTC_YEAR_REG_OFST              _UINT32_(0x09)      /* (RTC_YEAR) Year Register Offset */
#define RTC_REGA_REG_OFST              _UINT32_(0x0A)      /* (RTC_REGA) Register A Offset */
#define RTC_REGB_REG_OFST              _UINT32_(0x0B)      /* (RTC_REGB) Register B Offset */
#define RTC_REGC_REG_OFST              _UINT32_(0x0C)      /* (RTC_REGC) Register C Offset */
#define RTC_REGD_REG_OFST              _UINT32_(0x0D)      /* (RTC_REGD) Register D Offset */
#define RTC_CTRL_REG_OFST              _UINT32_(0x10)      /* (RTC_CTRL) RTC Control Register Offset */
#define RTC_WK_ALARM_REG_OFST          _UINT32_(0x14)      /* (RTC_WK_ALARM) Week Alarm Register[7:0] - ALARM_DAY_OF_WEEK This register, if written to a value in the range 1- -7, will inhibit the Alarm\n      interrupt unless this field matches the contents of the Day of Week Register also. Offset */
#define RTC_DAYLT_SAVF_REG_OFST        _UINT32_(0x18)      /* (RTC_DAYLT_SAVF) Daylight Savings Forward Register Offset */
#define RTC_DAYLT_SAVB_REG_OFST        _UINT32_(0x1C)      /* (RTC_DAYLT_SAVB) Daylight Savings Backward Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief RTC register API structure */
typedef struct
{  /* This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n      to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. */
  __IO  uint8_t                        RTC_SEC;            /**< Offset: 0x00 (R/W  8) Seconds Register */
  __IO  uint8_t                        RTC_SEC_ALARM;      /**< Offset: 0x01 (R/W  8) Seconds Alarm Register */
  __IO  uint8_t                        RTC_MIN;            /**< Offset: 0x02 (R/W  8) Minutes Register */
  __IO  uint8_t                        RTC_MIN_ALARM;      /**< Offset: 0x03 (R/W  8) Minutes Alarm Register */
  __IO  uint8_t                        RTC_HR;             /**< Offset: 0x04 (R/W  8) Hours Register */
  __IO  uint8_t                        RTC_HR_ALARM;       /**< Offset: 0x05 (R/W  8) Hours Alarm Register */
  __IO  uint8_t                        RTC_DAY_OF_WK;      /**< Offset: 0x06 (R/W  8) Day of Week Register */
  __IO  uint8_t                        RTC_DAY_OF_MON;     /**< Offset: 0x07 (R/W  8) Day of Month Register */
  __IO  uint8_t                        RTC_MONTH;          /**< Offset: 0x08 (R/W  8) Month Register */
  __IO  uint8_t                        RTC_YEAR;           /**< Offset: 0x09 (R/W  8) Year Register */
  __IO  uint8_t                        RTC_REGA;           /**< Offset: 0x0A (R/W  8) Register A */
  __IO  uint8_t                        RTC_REGB;           /**< Offset: 0x0B (R/W  8) Register B */
  __IO  uint8_t                        RTC_REGC;           /**< Offset: 0x0C (R/W  8) Register C */
  __IO  uint8_t                        RTC_REGD;           /**< Offset: 0x0D (R/W  8) Register D */
  __I   uint8_t                        Reserved1[0x02];
  __IO  uint32_t                       RTC_CTRL;           /**< Offset: 0x10 (R/W  32) RTC Control Register */
  __IO  uint32_t                       RTC_WK_ALARM;       /**< Offset: 0x14 (R/W  32) Week Alarm Register[7:0] - ALARM_DAY_OF_WEEK This register, if written to a value in the range 1- -7, will inhibit the Alarm\n      interrupt unless this field matches the contents of the Day of Week Register also. */
  __IO  uint32_t                       RTC_DAYLT_SAVF;     /**< Offset: 0x18 (R/W  32) Daylight Savings Forward Register */
  __IO  uint32_t                       RTC_DAYLT_SAVB;     /**< Offset: 0x1C (R/W  32) Daylight Savings Backward Register */
} rtc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC1702Q_RTC_COMPONENT_H_ */
