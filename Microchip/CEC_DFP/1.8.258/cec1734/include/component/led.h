/*
 * Component description for LED
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
#ifndef _CEC_LED_COMPONENT_H_
#define _CEC_LED_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR LED                                          */
/* ************************************************************************** */

/* -------- LED_CFG : (LED Offset: 0x00) (R/W 32) LED Configuration -------- */
#define LED_CFG_RESETVALUE                    _UINT32_(0x1400)                                     /*  (LED_CFG) LED Configuration  Reset Value */

#define LED_CFG_CTRL_Pos                      _UINT32_(0)                                          /* (LED_CFG) CONTROL 3=PWM is always on                  2=LED blinking (standard PWM)                  1=LED breathing configuration                  0=PWM is always off. All internal registers and counters are reset to 0. Clocks are gated Position */
#define LED_CFG_CTRL_Msk                      (_UINT32_(0x3) << LED_CFG_CTRL_Pos)                  /* (LED_CFG) CONTROL 3=PWM is always on                  2=LED blinking (standard PWM)                  1=LED breathing configuration                  0=PWM is always off. All internal registers and counters are reset to 0. Clocks are gated Mask */
#define LED_CFG_CTRL(value)                   (LED_CFG_CTRL_Msk & (_UINT32_(value) << LED_CFG_CTRL_Pos)) /* Assigment of value for CTRL in the LED_CFG register */
#define   LED_CFG_CTRL_PWM_ALWAYS_OFF_Val     _UINT32_(0x0)                                        /* (LED_CFG) PWM is always off  */
#define   LED_CFG_CTRL_LED_BREATHING_Val      _UINT32_(0x1)                                        /* (LED_CFG) LED Breathing  */
#define   LED_CFG_CTRL_LED_BLINKING_Val       _UINT32_(0x2)                                        /* (LED_CFG) LED Blinking  */
#define   LED_CFG_CTRL_PWM_ALWAYS_ON_Val      _UINT32_(0x3)                                        /* (LED_CFG) PWM is always on  */
#define LED_CFG_CTRL_PWM_ALWAYS_OFF           (LED_CFG_CTRL_PWM_ALWAYS_OFF_Val << LED_CFG_CTRL_Pos) /* (LED_CFG) PWM is always off Position  */
#define LED_CFG_CTRL_LED_BREATHING            (LED_CFG_CTRL_LED_BREATHING_Val << LED_CFG_CTRL_Pos) /* (LED_CFG) LED Breathing Position  */
#define LED_CFG_CTRL_LED_BLINKING             (LED_CFG_CTRL_LED_BLINKING_Val << LED_CFG_CTRL_Pos)  /* (LED_CFG) LED Blinking Position  */
#define LED_CFG_CTRL_PWM_ALWAYS_ON            (LED_CFG_CTRL_PWM_ALWAYS_ON_Val << LED_CFG_CTRL_Pos) /* (LED_CFG) PWM is always on Position  */
#define LED_CFG_CLK_SRC_Pos                   _UINT32_(2)                                          /* (LED_CFG) 1=Clock source is the 48 MHz clock, 0=Clock source is the 32.768 KHz clock Position */
#define LED_CFG_CLK_SRC_Msk                   (_UINT32_(0x1) << LED_CFG_CLK_SRC_Pos)               /* (LED_CFG) 1=Clock source is the 48 MHz clock, 0=Clock source is the 32.768 KHz clock Mask */
#define LED_CFG_CLK_SRC(value)                (LED_CFG_CLK_SRC_Msk & (_UINT32_(value) << LED_CFG_CLK_SRC_Pos)) /* Assigment of value for CLK_SRC in the LED_CFG register */
#define   LED_CFG_CLK_SRC_LED_CLK_SRC_32KHZ_Val _UINT32_(0x0)                                        /* (LED_CFG) 32.768 KHz clock  */
#define   LED_CFG_CLK_SRC_LED_CLK_SRC_48MHZ_Val _UINT32_(0x1)                                        /* (LED_CFG) 48 MHz clock  */
#define LED_CFG_CLK_SRC_LED_CLK_SRC_32KHZ     (LED_CFG_CLK_SRC_LED_CLK_SRC_32KHZ_Val << LED_CFG_CLK_SRC_Pos) /* (LED_CFG) 32.768 KHz clock Position  */
#define LED_CFG_CLK_SRC_LED_CLK_SRC_48MHZ     (LED_CFG_CLK_SRC_LED_CLK_SRC_48MHZ_Val << LED_CFG_CLK_SRC_Pos) /* (LED_CFG) 48 MHz clock Position  */
#define LED_CFG_SYNCH_Pos                     _UINT32_(3)                                          /* (LED_CFG) SYNCHRONIZE  When this bit is '1', all counters for all LEDs are reset to their initial values. When this bit is '0' in the LED Configuration Register for all LEDs, then all counters for LEDs that are configured to blink or breathe will increment or decrement, as required. Position */
#define LED_CFG_SYNCH_Msk                     (_UINT32_(0x1) << LED_CFG_SYNCH_Pos)                 /* (LED_CFG) SYNCHRONIZE  When this bit is '1', all counters for all LEDs are reset to their initial values. When this bit is '0' in the LED Configuration Register for all LEDs, then all counters for LEDs that are configured to blink or breathe will increment or decrement, as required. Mask */
#define LED_CFG_SYNCH(value)                  (LED_CFG_SYNCH_Msk & (_UINT32_(value) << LED_CFG_SYNCH_Pos)) /* Assigment of value for SYNCH in the LED_CFG register */
#define LED_CFG_PWM_SIZE_Pos                  _UINT32_(4)                                          /* (LED_CFG) PWM_SIZE This bit controls the behavior of PWM:                  3=Reserved                  2=PWM is configured as a 6-bit PWM                  1=PWM is configured as a 7-bit PWM                  0=PWM is configured as an 8-bit PWM Position */
#define LED_CFG_PWM_SIZE_Msk                  (_UINT32_(0x3) << LED_CFG_PWM_SIZE_Pos)              /* (LED_CFG) PWM_SIZE This bit controls the behavior of PWM:                  3=Reserved                  2=PWM is configured as a 6-bit PWM                  1=PWM is configured as a 7-bit PWM                  0=PWM is configured as an 8-bit PWM Mask */
#define LED_CFG_PWM_SIZE(value)               (LED_CFG_PWM_SIZE_Msk & (_UINT32_(value) << LED_CFG_PWM_SIZE_Pos)) /* Assigment of value for PWM_SIZE in the LED_CFG register */
#define   LED_CFG_PWM_SIZE_PWM_SIZE_8BIT_Val  _UINT32_(0x0)                                        /* (LED_CFG) PWM is configured as an 8-bit PWM  */
#define   LED_CFG_PWM_SIZE_PWM_SIZE_7BIT_Val  _UINT32_(0x1)                                        /* (LED_CFG) PWM is configured as an 7-bit PWM  */
#define   LED_CFG_PWM_SIZE_PWM_SIZE_6BIT_Val  _UINT32_(0x2)                                        /* (LED_CFG) PWM is configured as an 6-bit PWM  */
#define LED_CFG_PWM_SIZE_PWM_SIZE_8BIT        (LED_CFG_PWM_SIZE_PWM_SIZE_8BIT_Val << LED_CFG_PWM_SIZE_Pos) /* (LED_CFG) PWM is configured as an 8-bit PWM Position  */
#define LED_CFG_PWM_SIZE_PWM_SIZE_7BIT        (LED_CFG_PWM_SIZE_PWM_SIZE_7BIT_Val << LED_CFG_PWM_SIZE_Pos) /* (LED_CFG) PWM is configured as an 7-bit PWM Position  */
#define LED_CFG_PWM_SIZE_PWM_SIZE_6BIT        (LED_CFG_PWM_SIZE_PWM_SIZE_6BIT_Val << LED_CFG_PWM_SIZE_Pos) /* (LED_CFG) PWM is configured as an 6-bit PWM Position  */
#define LED_CFG_EN_UPDATE_Pos                 _UINT32_(6)                                          /* (LED_CFG) ENABLE_UPDATE  This bit is set to 1 when written with a '1'. Writes of '0' have no effect. Hardware clears this bit to 0 when the breathing configuration registers are updated at the end of a PWM period. The current state of the bit is readable any time. Position */
#define LED_CFG_EN_UPDATE_Msk                 (_UINT32_(0x1) << LED_CFG_EN_UPDATE_Pos)             /* (LED_CFG) ENABLE_UPDATE  This bit is set to 1 when written with a '1'. Writes of '0' have no effect. Hardware clears this bit to 0 when the breathing configuration registers are updated at the end of a PWM period. The current state of the bit is readable any time. Mask */
#define LED_CFG_EN_UPDATE(value)              (LED_CFG_EN_UPDATE_Msk & (_UINT32_(value) << LED_CFG_EN_UPDATE_Pos)) /* Assigment of value for EN_UPDATE in the LED_CFG register */
#define LED_CFG_RST_Pos                       _UINT32_(7)                                          /* (LED_CFG) RESET  Writes of '1' to this bit resets the PWM registers to their default values. This bit is self clearing. Writes of '0' to this bit have no effect. Position */
#define LED_CFG_RST_Msk                       (_UINT32_(0x1) << LED_CFG_RST_Pos)                   /* (LED_CFG) RESET  Writes of '1' to this bit resets the PWM registers to their default values. This bit is self clearing. Writes of '0' to this bit have no effect. Mask */
#define LED_CFG_RST(value)                    (LED_CFG_RST_Msk & (_UINT32_(value) << LED_CFG_RST_Pos)) /* Assigment of value for RST in the LED_CFG register */
#define LED_CFG_WDT_RELOAD_Pos                _UINT32_(8)                                          /* (LED_CFG) WDT_RELOAD  The PWM Watchdog Timer counter reload value. On system reset, it defaults to 14h, which corresponds to a 4 second Watchdog timeout value. Position */
#define LED_CFG_WDT_RELOAD_Msk                (_UINT32_(0xFF) << LED_CFG_WDT_RELOAD_Pos)           /* (LED_CFG) WDT_RELOAD  The PWM Watchdog Timer counter reload value. On system reset, it defaults to 14h, which corresponds to a 4 second Watchdog timeout value. Mask */
#define LED_CFG_WDT_RELOAD(value)             (LED_CFG_WDT_RELOAD_Msk & (_UINT32_(value) << LED_CFG_WDT_RELOAD_Pos)) /* Assigment of value for WDT_RELOAD in the LED_CFG register */
#define LED_CFG_SYMMETRY_Pos                  _UINT32_(16)                                         /* (LED_CFG) SYMMETRY  1=The rising and falling ramp times are in Asymmetric mode.                  0=The rising and falling ramp times are in Symmetric mode. Position */
#define LED_CFG_SYMMETRY_Msk                  (_UINT32_(0x1) << LED_CFG_SYMMETRY_Pos)              /* (LED_CFG) SYMMETRY  1=The rising and falling ramp times are in Asymmetric mode.                  0=The rising and falling ramp times are in Symmetric mode. Mask */
#define LED_CFG_SYMMETRY(value)               (LED_CFG_SYMMETRY_Msk & (_UINT32_(value) << LED_CFG_SYMMETRY_Pos)) /* Assigment of value for SYMMETRY in the LED_CFG register */
#define LED_CFG_Msk                           _UINT32_(0x0001FFFF)                                 /* (LED_CFG) Register Mask  */


/* -------- LED_LIMIT : (LED Offset: 0x04) (R/W 32) LED Limits This register may be written at any time. Values written into the register are held in an holding register, which is transferred into the actual register at the end of a PWM period. The two byte fields may be written independently. Reads of this register return the current contents and not the value of the holding register. -------- */
#define LED_LIMIT_RESETVALUE                  _UINT32_(0x00)                                       /*  (LED_LIMIT) LED Limits This register may be written at any time. Values written into the register are held in an holding register, which is transferred into the actual register at the end of a PWM period. The two byte fields may be written independently. Reads of this register return the current contents and not the value of the holding register.  Reset Value */

#define LED_LIMIT_MIN_Pos                     _UINT32_(0)                                          /* (LED_LIMIT) In breathing mode, when the current duty cycle is less than or equal to this value the breathing apparatus holds the current duty cycle for the period specified by the field LD in register LED_DELAY, then starts incrementing the current duty cycle In blinking mode, this field defines the duty cycle of the blink function. Position */
#define LED_LIMIT_MIN_Msk                     (_UINT32_(0xFF) << LED_LIMIT_MIN_Pos)                /* (LED_LIMIT) In breathing mode, when the current duty cycle is less than or equal to this value the breathing apparatus holds the current duty cycle for the period specified by the field LD in register LED_DELAY, then starts incrementing the current duty cycle In blinking mode, this field defines the duty cycle of the blink function. Mask */
#define LED_LIMIT_MIN(value)                  (LED_LIMIT_MIN_Msk & (_UINT32_(value) << LED_LIMIT_MIN_Pos)) /* Assigment of value for MIN in the LED_LIMIT register */
#define LED_LIMIT_MAX_Pos                     _UINT32_(8)                                          /* (LED_LIMIT) In breathing mode, when the current duty cycle is greater than or equal to this value the breathing apparatus holds the current duty cycle for the period specified by the field HD in register LED_DELAY, then starts decrementing the current duty cycle Position */
#define LED_LIMIT_MAX_Msk                     (_UINT32_(0xFF) << LED_LIMIT_MAX_Pos)                /* (LED_LIMIT) In breathing mode, when the current duty cycle is greater than or equal to this value the breathing apparatus holds the current duty cycle for the period specified by the field HD in register LED_DELAY, then starts decrementing the current duty cycle Mask */
#define LED_LIMIT_MAX(value)                  (LED_LIMIT_MAX_Msk & (_UINT32_(value) << LED_LIMIT_MAX_Pos)) /* Assigment of value for MAX in the LED_LIMIT register */
#define LED_LIMIT_Msk                         _UINT32_(0x0000FFFF)                                 /* (LED_LIMIT) Register Mask  */


/* -------- LED_DLY : (LED Offset: 0x08) (R/W 32) LED Delay -------- */
#define LED_DLY_RESETVALUE                    _UINT32_(0x00)                                       /*  (LED_DLY) LED Delay  Reset Value */

#define LED_DLY_LOW_PULSE_Pos                 _UINT32_(0)                                          /* (LED_DLY) The number of PWM periods to wait before updating the current duty cycle when the current duty cycle is greater than or equal to the value MIN in register LED_LIMIT. Position */
#define LED_DLY_LOW_PULSE_Msk                 (_UINT32_(0xFFF) << LED_DLY_LOW_PULSE_Pos)           /* (LED_DLY) The number of PWM periods to wait before updating the current duty cycle when the current duty cycle is greater than or equal to the value MIN in register LED_LIMIT. Mask */
#define LED_DLY_LOW_PULSE(value)              (LED_DLY_LOW_PULSE_Msk & (_UINT32_(value) << LED_DLY_LOW_PULSE_Pos)) /* Assigment of value for LOW_PULSE in the LED_DLY register */
#define LED_DLY_HIGH_PULSE_Pos                _UINT32_(12)                                         /* (LED_DLY) In breathing mode, the number of PWM periods to wait before updating the current duty cycle when the current duty cycle is greater than or equal to the value MAX in register LED_LIMIT. Position */
#define LED_DLY_HIGH_PULSE_Msk                (_UINT32_(0xFFF) << LED_DLY_HIGH_PULSE_Pos)          /* (LED_DLY) In breathing mode, the number of PWM periods to wait before updating the current duty cycle when the current duty cycle is greater than or equal to the value MAX in register LED_LIMIT. Mask */
#define LED_DLY_HIGH_PULSE(value)             (LED_DLY_HIGH_PULSE_Msk & (_UINT32_(value) << LED_DLY_HIGH_PULSE_Pos)) /* Assigment of value for HIGH_PULSE in the LED_DLY register */
#define LED_DLY_Msk                           _UINT32_(0x00FFFFFF)                                 /* (LED_DLY) Register Mask  */


/* -------- LED_STEP : (LED Offset: 0x0C) (R/W 32) This register has eight segment fields which provide the amount the current duty cycle is adjusted at the end of every PWM period. Segment field selection is decoded based on the segment index. The segment index equation utilized depends on the SYMMETRY bit in the LED Configuration Register Register)              . In Symmetric Mode the Segment_Index[2:0] = Duty Cycle Bits[7:5]              . In Asymmetric Mode the Segment_Index[2:0] is the bit concatenation of following: Segment_Index[2] = (FALLING RAMP TIME in Figure 30-3, Clipping Example) and Segment_Index[1:0] = Duty Cycle Bits[7:6]. -------- */
#define LED_STEP_RESETVALUE                   _UINT32_(0x00)                                       /*  (LED_STEP) This register has eight segment fields which provide the amount the current duty cycle is adjusted at the end of every PWM period. Segment field selection is decoded based on the segment index. The segment index equation utilized depends on the SYMMETRY bit in the LED Configuration Register Register)              . In Symmetric Mode the Segment_Index[2:0] = Duty Cycle Bits[7:5]              . In Asymmetric Mode the Segment_Index[2:0] is the bit concatenation of following: Segment_Index[2] = (FALLING RAMP TIME in Figure 30-3, Clipping Example) and Segment_Index[1:0] = Duty Cycle Bits[7:6].  Reset Value */

#define LED_STEP_S0_Pos                       _UINT32_(0)                                          /* (LED_STEP) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 000. Position */
#define LED_STEP_S0_Msk                       (_UINT32_(0xF) << LED_STEP_S0_Pos)                   /* (LED_STEP) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 000. Mask */
#define LED_STEP_S0(value)                    (LED_STEP_S0_Msk & (_UINT32_(value) << LED_STEP_S0_Pos)) /* Assigment of value for S0 in the LED_STEP register */
#define LED_STEP_S1_Pos                       _UINT32_(4)                                          /* (LED_STEP) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 001. Position */
#define LED_STEP_S1_Msk                       (_UINT32_(0xF) << LED_STEP_S1_Pos)                   /* (LED_STEP) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 001. Mask */
#define LED_STEP_S1(value)                    (LED_STEP_S1_Msk & (_UINT32_(value) << LED_STEP_S1_Pos)) /* Assigment of value for S1 in the LED_STEP register */
#define LED_STEP_S2_Pos                       _UINT32_(8)                                          /* (LED_STEP) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 010. Position */
#define LED_STEP_S2_Msk                       (_UINT32_(0xF) << LED_STEP_S2_Pos)                   /* (LED_STEP) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 010. Mask */
#define LED_STEP_S2(value)                    (LED_STEP_S2_Msk & (_UINT32_(value) << LED_STEP_S2_Pos)) /* Assigment of value for S2 in the LED_STEP register */
#define LED_STEP_S3_Pos                       _UINT32_(12)                                         /* (LED_STEP) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 011. Position */
#define LED_STEP_S3_Msk                       (_UINT32_(0xF) << LED_STEP_S3_Pos)                   /* (LED_STEP) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 011. Mask */
#define LED_STEP_S3(value)                    (LED_STEP_S3_Msk & (_UINT32_(value) << LED_STEP_S3_Pos)) /* Assigment of value for S3 in the LED_STEP register */
#define LED_STEP_S4_Pos                       _UINT32_(16)                                         /* (LED_STEP) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 100. Position */
#define LED_STEP_S4_Msk                       (_UINT32_(0xF) << LED_STEP_S4_Pos)                   /* (LED_STEP) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 100. Mask */
#define LED_STEP_S4(value)                    (LED_STEP_S4_Msk & (_UINT32_(value) << LED_STEP_S4_Pos)) /* Assigment of value for S4 in the LED_STEP register */
#define LED_STEP_S5_Pos                       _UINT32_(20)                                         /* (LED_STEP) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 101 Position */
#define LED_STEP_S5_Msk                       (_UINT32_(0xF) << LED_STEP_S5_Pos)                   /* (LED_STEP) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 101 Mask */
#define LED_STEP_S5(value)                    (LED_STEP_S5_Msk & (_UINT32_(value) << LED_STEP_S5_Pos)) /* Assigment of value for S5 in the LED_STEP register */
#define LED_STEP_S6_Pos                       _UINT32_(24)                                         /* (LED_STEP) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 110. Position */
#define LED_STEP_S6_Msk                       (_UINT32_(0xF) << LED_STEP_S6_Pos)                   /* (LED_STEP) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 110. Mask */
#define LED_STEP_S6(value)                    (LED_STEP_S6_Msk & (_UINT32_(value) << LED_STEP_S6_Pos)) /* Assigment of value for S6 in the LED_STEP register */
#define LED_STEP_S7_Pos                       _UINT32_(28)                                         /* (LED_STEP) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 111. Position */
#define LED_STEP_S7_Msk                       (_UINT32_(0xF) << LED_STEP_S7_Pos)                   /* (LED_STEP) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 111. Mask */
#define LED_STEP_S7(value)                    (LED_STEP_S7_Msk & (_UINT32_(value) << LED_STEP_S7_Pos)) /* Assigment of value for S7 in the LED_STEP register */
#define LED_STEP_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (LED_STEP) Register Mask  */


/* -------- LED_INTRVL : (LED Offset: 0x10) (R/W 32) LED Update Interval -------- */
#define LED_INTRVL_RESETVALUE                 _UINT32_(0x00)                                       /*  (LED_INTRVL) LED Update Interval  Reset Value */

#define LED_INTRVL_I0_Pos                     _UINT32_(0)                                          /* (LED_INTRVL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 000b. Position */
#define LED_INTRVL_I0_Msk                     (_UINT32_(0xF) << LED_INTRVL_I0_Pos)                 /* (LED_INTRVL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 000b. Mask */
#define LED_INTRVL_I0(value)                  (LED_INTRVL_I0_Msk & (_UINT32_(value) << LED_INTRVL_I0_Pos)) /* Assigment of value for I0 in the LED_INTRVL register */
#define LED_INTRVL_I1_Pos                     _UINT32_(4)                                          /* (LED_INTRVL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 001b. Position */
#define LED_INTRVL_I1_Msk                     (_UINT32_(0xF) << LED_INTRVL_I1_Pos)                 /* (LED_INTRVL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 001b. Mask */
#define LED_INTRVL_I1(value)                  (LED_INTRVL_I1_Msk & (_UINT32_(value) << LED_INTRVL_I1_Pos)) /* Assigment of value for I1 in the LED_INTRVL register */
#define LED_INTRVL_I2_Pos                     _UINT32_(8)                                          /* (LED_INTRVL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 010b. Position */
#define LED_INTRVL_I2_Msk                     (_UINT32_(0xF) << LED_INTRVL_I2_Pos)                 /* (LED_INTRVL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 010b. Mask */
#define LED_INTRVL_I2(value)                  (LED_INTRVL_I2_Msk & (_UINT32_(value) << LED_INTRVL_I2_Pos)) /* Assigment of value for I2 in the LED_INTRVL register */
#define LED_INTRVL_I3_Pos                     _UINT32_(12)                                         /* (LED_INTRVL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 011b. Position */
#define LED_INTRVL_I3_Msk                     (_UINT32_(0xF) << LED_INTRVL_I3_Pos)                 /* (LED_INTRVL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 011b. Mask */
#define LED_INTRVL_I3(value)                  (LED_INTRVL_I3_Msk & (_UINT32_(value) << LED_INTRVL_I3_Pos)) /* Assigment of value for I3 in the LED_INTRVL register */
#define LED_INTRVL_I4_Pos                     _UINT32_(16)                                         /* (LED_INTRVL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 100b. Position */
#define LED_INTRVL_I4_Msk                     (_UINT32_(0xF) << LED_INTRVL_I4_Pos)                 /* (LED_INTRVL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 100b. Mask */
#define LED_INTRVL_I4(value)                  (LED_INTRVL_I4_Msk & (_UINT32_(value) << LED_INTRVL_I4_Pos)) /* Assigment of value for I4 in the LED_INTRVL register */
#define LED_INTRVL_I5_Pos                     _UINT32_(20)                                         /* (LED_INTRVL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 101b. Position */
#define LED_INTRVL_I5_Msk                     (_UINT32_(0xF) << LED_INTRVL_I5_Pos)                 /* (LED_INTRVL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 101b. Mask */
#define LED_INTRVL_I5(value)                  (LED_INTRVL_I5_Msk & (_UINT32_(value) << LED_INTRVL_I5_Pos)) /* Assigment of value for I5 in the LED_INTRVL register */
#define LED_INTRVL_I6_Pos                     _UINT32_(24)                                         /* (LED_INTRVL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 110b. Position */
#define LED_INTRVL_I6_Msk                     (_UINT32_(0xF) << LED_INTRVL_I6_Pos)                 /* (LED_INTRVL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 110b. Mask */
#define LED_INTRVL_I6(value)                  (LED_INTRVL_I6_Msk & (_UINT32_(value) << LED_INTRVL_I6_Pos)) /* Assigment of value for I6 in the LED_INTRVL register */
#define LED_INTRVL_I7_Pos                     _UINT32_(28)                                         /* (LED_INTRVL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 111b. Position */
#define LED_INTRVL_I7_Msk                     (_UINT32_(0xF) << LED_INTRVL_I7_Pos)                 /* (LED_INTRVL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 111b. Mask */
#define LED_INTRVL_I7(value)                  (LED_INTRVL_I7_Msk & (_UINT32_(value) << LED_INTRVL_I7_Pos)) /* Assigment of value for I7 in the LED_INTRVL register */
#define LED_INTRVL_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (LED_INTRVL) Register Mask  */


/* -------- LED_OUTDLY : (LED Offset: 0x14) (R/W 32) LED Output Delay -------- */
#define LED_OUTDLY_RESETVALUE                 _UINT32_(0x00)                                       /*  (LED_OUTDLY) LED Output Delay  Reset Value */

#define LED_OUTDLY_DELAY_Pos                  _UINT32_(0)                                          /* (LED_OUTDLY) The delay, in counts of the clock defined in Clock Source (CLKSRC), in which output transitions are delayed.     When this field is 0, there is no added transition delay. When the LED is programmed to be Always On or Always Off, the     Output Delay field has no effect. Position */
#define LED_OUTDLY_DELAY_Msk                  (_UINT32_(0xFF) << LED_OUTDLY_DELAY_Pos)             /* (LED_OUTDLY) The delay, in counts of the clock defined in Clock Source (CLKSRC), in which output transitions are delayed.     When this field is 0, there is no added transition delay. When the LED is programmed to be Always On or Always Off, the     Output Delay field has no effect. Mask */
#define LED_OUTDLY_DELAY(value)               (LED_OUTDLY_DELAY_Msk & (_UINT32_(value) << LED_OUTDLY_DELAY_Pos)) /* Assigment of value for DELAY in the LED_OUTDLY register */
#define LED_OUTDLY_Msk                        _UINT32_(0x000000FF)                                 /* (LED_OUTDLY) Register Mask  */


/** \brief LED register offsets definitions */
#define LED_CFG_REG_OFST               _UINT32_(0x00)      /* (LED_CFG) LED Configuration Offset */
#define LED_LIMIT_REG_OFST             _UINT32_(0x04)      /* (LED_LIMIT) LED Limits This register may be written at any time. Values written into the register are held in an holding register, which is transferred into the actual register at the end of a PWM period. The two byte fields may be written independently. Reads of this register return the current contents and not the value of the holding register. Offset */
#define LED_DLY_REG_OFST               _UINT32_(0x08)      /* (LED_DLY) LED Delay Offset */
#define LED_STEP_REG_OFST              _UINT32_(0x0C)      /* (LED_STEP) This register has eight segment fields which provide the amount the current duty cycle is adjusted at the end of every PWM period. Segment field selection is decoded based on the segment index. The segment index equation utilized depends on the SYMMETRY bit in the LED Configuration Register Register)              . In Symmetric Mode the Segment_Index[2:0] = Duty Cycle Bits[7:5]              . In Asymmetric Mode the Segment_Index[2:0] is the bit concatenation of following: Segment_Index[2] = (FALLING RAMP TIME in Figure 30-3, Clipping Example) and Segment_Index[1:0] = Duty Cycle Bits[7:6]. Offset */
#define LED_INTRVL_REG_OFST            _UINT32_(0x10)      /* (LED_INTRVL) LED Update Interval Offset */
#define LED_OUTDLY_REG_OFST            _UINT32_(0x14)      /* (LED_OUTDLY) LED Output Delay Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief LED register API structure */
typedef struct
{  /* The LED is implemented using a PWM that can be driven either by the 48 MHz clock or by a 32.768 KHz clock input. */
  __IO  uint32_t                       LED_CFG;            /**< Offset: 0x00 (R/W  32) LED Configuration */
  __IO  uint32_t                       LED_LIMIT;          /**< Offset: 0x04 (R/W  32) LED Limits This register may be written at any time. Values written into the register are held in an holding register, which is transferred into the actual register at the end of a PWM period. The two byte fields may be written independently. Reads of this register return the current contents and not the value of the holding register. */
  __IO  uint32_t                       LED_DLY;            /**< Offset: 0x08 (R/W  32) LED Delay */
  __IO  uint32_t                       LED_STEP;           /**< Offset: 0x0C (R/W  32) This register has eight segment fields which provide the amount the current duty cycle is adjusted at the end of every PWM period. Segment field selection is decoded based on the segment index. The segment index equation utilized depends on the SYMMETRY bit in the LED Configuration Register Register)              . In Symmetric Mode the Segment_Index[2:0] = Duty Cycle Bits[7:5]              . In Asymmetric Mode the Segment_Index[2:0] is the bit concatenation of following: Segment_Index[2] = (FALLING RAMP TIME in Figure 30-3, Clipping Example) and Segment_Index[1:0] = Duty Cycle Bits[7:6]. */
  __IO  uint32_t                       LED_INTRVL;         /**< Offset: 0x10 (R/W  32) LED Update Interval */
  __IO  uint32_t                       LED_OUTDLY;         /**< Offset: 0x14 (R/W  32) LED Output Delay */
} led_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_LED_COMPONENT_H_ */
