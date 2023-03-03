/*
 * Component description for FAN
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
#ifndef _CEC1702Q_FAN_COMPONENT_H_
#define _CEC1702Q_FAN_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR FAN                                          */
/* ************************************************************************** */

/* -------- FAN_SET : (FAN Offset: 0x00) (R/W 16) The Fan Driver Setting used to control the output of the Fan Driver. -------- */
#define FAN_SET_RESETVALUE                    _UINT16_(0x00)                                       /*  (FAN_SET) The Fan Driver Setting used to control the output of the Fan Driver.  Reset Value */

#define FAN_SET_FAN_SETTING_Pos               _UINT16_(6)                                          /* (FAN_SET) The Fan Driver Setting used to control the output of the Fan Driver. Position */
#define FAN_SET_FAN_SETTING_Msk               (_UINT16_(0x3FF) << FAN_SET_FAN_SETTING_Pos)         /* (FAN_SET) The Fan Driver Setting used to control the output of the Fan Driver. Mask */
#define FAN_SET_FAN_SETTING(value)            (FAN_SET_FAN_SETTING_Msk & (_UINT16_(value) << FAN_SET_FAN_SETTING_Pos)) /* Assigment of value for FAN_SETTING in the FAN_SET register */
#define FAN_SET_Msk                           _UINT16_(0xFFC0)                                     /* (FAN_SET) Register Mask  */


/* -------- FAN_CFG : (FAN Offset: 0x02) (R/W 16) The Fan Configuration Register controls the general operation of the RPM based Fan Control Algorithm used by the fan driver. -------- */
#define FAN_CFG_RESETVALUE                    _UINT16_(0x342B)                                     /*  (FAN_CFG) The Fan Configuration Register controls the general operation of the RPM based Fan Control Algorithm used by the fan driver.  Reset Value */

#define FAN_CFG_UPDATE_Pos                    _UINT16_(0)                                          /* (FAN_CFG) Determines the base time between fan driver updates. The Update Time, along with the Fan Step Register, is used to control\n       the ramp rate of the drive response to provide a cleaner transition of the actual fan operation as the desired fan speed changes.\n           7=1600ms\n          6=1200ms\n                  5=800ms\n            4=500ms\n            3=400ms\n                   2=300ms\n                 1=200ms\n                 0=100ms\n              Note: This ramp rate control applies for all changes to the active PWM output including when the RPM based Fan Speed Control Algorithm\n       is disabled. Position */
#define FAN_CFG_UPDATE_Msk                    (_UINT16_(0x7) << FAN_CFG_UPDATE_Pos)                /* (FAN_CFG) Determines the base time between fan driver updates. The Update Time, along with the Fan Step Register, is used to control\n       the ramp rate of the drive response to provide a cleaner transition of the actual fan operation as the desired fan speed changes.\n           7=1600ms\n          6=1200ms\n                  5=800ms\n            4=500ms\n            3=400ms\n                   2=300ms\n                 1=200ms\n                 0=100ms\n              Note: This ramp rate control applies for all changes to the active PWM output including when the RPM based Fan Speed Control Algorithm\n       is disabled. Mask */
#define FAN_CFG_UPDATE(value)                 (FAN_CFG_UPDATE_Msk & (_UINT16_(value) << FAN_CFG_UPDATE_Pos)) /* Assigment of value for UPDATE in the FAN_CFG register */
#define   FAN_CFG_UPDATE_BASE_TIME_1600ms_Val _UINT16_(0x7)                                        /* (FAN_CFG) 7=1600ms  */
#define   FAN_CFG_UPDATE_BASE_TIME_1200ms_Val _UINT16_(0x6)                                        /* (FAN_CFG) 6=1200ms  */
#define   FAN_CFG_UPDATE_BASE_TIME_800ms _Val _UINT16_(0x6)                                        /* (FAN_CFG) 5=800ms   */
#define   FAN_CFG_UPDATE_BASE_TIME_500ms _Val _UINT16_(0x5)                                        /* (FAN_CFG) 4=500ms   */
#define   FAN_CFG_UPDATE_BASE_TIME_400ms _Val _UINT16_(0x4)                                        /* (FAN_CFG) 3=400ms   */
#define   FAN_CFG_UPDATE_BASE_TIME_300ms _Val _UINT16_(0x3)                                        /* (FAN_CFG) 2=300ms   */
#define   FAN_CFG_UPDATE_BASE_TIME_200ms _Val _UINT16_(0x2)                                        /* (FAN_CFG) 1=200ms   */
#define   FAN_CFG_UPDATE_BASE_TIME_100ms _Val _UINT16_(0x1)                                        /* (FAN_CFG) 0=100ms   */
#define FAN_CFG_UPDATE_BASE_TIME_1600ms       (FAN_CFG_UPDATE_BASE_TIME_1600ms_Val << FAN_CFG_UPDATE_Pos) /* (FAN_CFG) 7=1600ms Position  */
#define FAN_CFG_UPDATE_BASE_TIME_1200ms       (FAN_CFG_UPDATE_BASE_TIME_1200ms_Val << FAN_CFG_UPDATE_Pos) /* (FAN_CFG) 6=1200ms Position  */
#define FAN_CFG_UPDATE_BASE_TIME_800ms        (FAN_CFG_UPDATE_BASE_TIME_800ms _Val << FAN_CFG_UPDATE_Pos) /* (FAN_CFG) 5=800ms  Position  */
#define FAN_CFG_UPDATE_BASE_TIME_500ms        (FAN_CFG_UPDATE_BASE_TIME_500ms _Val << FAN_CFG_UPDATE_Pos) /* (FAN_CFG) 4=500ms  Position  */
#define FAN_CFG_UPDATE_BASE_TIME_400ms        (FAN_CFG_UPDATE_BASE_TIME_400ms _Val << FAN_CFG_UPDATE_Pos) /* (FAN_CFG) 3=400ms  Position  */
#define FAN_CFG_UPDATE_BASE_TIME_300ms        (FAN_CFG_UPDATE_BASE_TIME_300ms _Val << FAN_CFG_UPDATE_Pos) /* (FAN_CFG) 2=300ms  Position  */
#define FAN_CFG_UPDATE_BASE_TIME_200ms        (FAN_CFG_UPDATE_BASE_TIME_200ms _Val << FAN_CFG_UPDATE_Pos) /* (FAN_CFG) 1=200ms  Position  */
#define FAN_CFG_UPDATE_BASE_TIME_100ms        (FAN_CFG_UPDATE_BASE_TIME_100ms _Val << FAN_CFG_UPDATE_Pos) /* (FAN_CFG) 0=100ms  Position  */
#define FAN_CFG_EDGES_Pos                     _UINT16_(3)                                          /* (FAN_CFG) Determines the minimum number of edges that must be detected on the TACH signal to determine a single rotation. A typical\n      fan measured 5 edges (for a 2-pole fan). Increasing the number of edges measured with respect to the number of poles of the fan will\n         cause the TACH Reading registers to indicate a fan speed that is higher or lower than the actual speed. In order for the FSC Algorithm\n       to operate correctly, the TACH Target must be updated by the user to accommodate this shift. The Effective Tach Multiplier is used as\n        a direct multiplier term that is applied to the Actual RPM to achieve the Reported RPM. It should only be applied if the number of\n        edges measured does not match the number of edges expected based on the number of poles of the fan (which is fixed for any given fan). Position */
#define FAN_CFG_EDGES_Msk                     (_UINT16_(0x3) << FAN_CFG_EDGES_Pos)                 /* (FAN_CFG) Determines the minimum number of edges that must be detected on the TACH signal to determine a single rotation. A typical\n      fan measured 5 edges (for a 2-pole fan). Increasing the number of edges measured with respect to the number of poles of the fan will\n         cause the TACH Reading registers to indicate a fan speed that is higher or lower than the actual speed. In order for the FSC Algorithm\n       to operate correctly, the TACH Target must be updated by the user to accommodate this shift. The Effective Tach Multiplier is used as\n        a direct multiplier term that is applied to the Actual RPM to achieve the Reported RPM. It should only be applied if the number of\n        edges measured does not match the number of edges expected based on the number of poles of the fan (which is fixed for any given fan). Mask */
#define FAN_CFG_EDGES(value)                  (FAN_CFG_EDGES_Msk & (_UINT16_(value) << FAN_CFG_EDGES_Pos)) /* Assigment of value for EDGES in the FAN_CFG register */
#define FAN_CFG_RANGE_Pos                     _UINT16_(5)                                          /* (FAN_CFG) Adjusts the range of reported and programmed tachometer reading values. The RANGE bits determine the weighting of all\n        TACH values (including the Valid TACH Count, TACH Target, and TACH reading).\n                   3=Reported Minimum RPM: 4000. Tach Count Multiplier: 1\n               2=Reported Minimum RPM: 2000. Tach Count Multiplier: 2\n                1=Reported Minimum RPM: 1000. Tach Count Multiplier: 4\n                0=Reported Minimum RPM: 500. Tach Count Multiplier: 8 Position */
#define FAN_CFG_RANGE_Msk                     (_UINT16_(0x3) << FAN_CFG_RANGE_Pos)                 /* (FAN_CFG) Adjusts the range of reported and programmed tachometer reading values. The RANGE bits determine the weighting of all\n        TACH values (including the Valid TACH Count, TACH Target, and TACH reading).\n                   3=Reported Minimum RPM: 4000. Tach Count Multiplier: 1\n               2=Reported Minimum RPM: 2000. Tach Count Multiplier: 2\n                1=Reported Minimum RPM: 1000. Tach Count Multiplier: 4\n                0=Reported Minimum RPM: 500. Tach Count Multiplier: 8 Mask */
#define FAN_CFG_RANGE(value)                  (FAN_CFG_RANGE_Msk & (_UINT16_(value) << FAN_CFG_RANGE_Pos)) /* Assigment of value for RANGE in the FAN_CFG register */
#define   FAN_CFG_RANGE_TACH_COUNT_MULTIPLIER_8_Val _UINT16_(0x3)                                        /* (FAN_CFG) 3=Reported Minimum RPM: 4000. Tach Count Multiplier: 8  */
#define   FAN_CFG_RANGE_TACH_COUNT_MULTIPLIER_4_Val _UINT16_(0x2)                                        /* (FAN_CFG) 2=Reported Minimum RPM: 2000. Tach Count Multiplier: 4  */
#define   FAN_CFG_RANGE_TACH_COUNT_MULTIPLIER_2_Val _UINT16_(0x1)                                        /* (FAN_CFG) 1=Reported Minimum RPM: 1000. Tach Count Multiplier: 2  */
#define   FAN_CFG_RANGE_TACH_COUNT_MULTIPLIER_1_Val _UINT16_(0x0)                                        /* (FAN_CFG) 0=Reported Minimum RPM:  500. Tach Count Multiplier: 1  */
#define FAN_CFG_RANGE_TACH_COUNT_MULTIPLIER_8 (FAN_CFG_RANGE_TACH_COUNT_MULTIPLIER_8_Val << FAN_CFG_RANGE_Pos) /* (FAN_CFG) 3=Reported Minimum RPM: 4000. Tach Count Multiplier: 8 Position  */
#define FAN_CFG_RANGE_TACH_COUNT_MULTIPLIER_4 (FAN_CFG_RANGE_TACH_COUNT_MULTIPLIER_4_Val << FAN_CFG_RANGE_Pos) /* (FAN_CFG) 2=Reported Minimum RPM: 2000. Tach Count Multiplier: 4 Position  */
#define FAN_CFG_RANGE_TACH_COUNT_MULTIPLIER_2 (FAN_CFG_RANGE_TACH_COUNT_MULTIPLIER_2_Val << FAN_CFG_RANGE_Pos) /* (FAN_CFG) 1=Reported Minimum RPM: 1000. Tach Count Multiplier: 2 Position  */
#define FAN_CFG_RANGE_TACH_COUNT_MULTIPLIER_1 (FAN_CFG_RANGE_TACH_COUNT_MULTIPLIER_1_Val << FAN_CFG_RANGE_Pos) /* (FAN_CFG) 0=Reported Minimum RPM:  500. Tach Count Multiplier: 1 Position  */
#define FAN_CFG_EN_ALGO_Pos                   _UINT16_(7)                                          /* (FAN_CFG) Enables the RPM based Fan Control Algorithm.\n                  1=The control circuitry is enabled and the Fan Driver output will be automatically updated to maintain the programmed fan speed\n        as indicated by the TACH Target Register.\n        0=The control circuitry is disabled and the fan driver output is determined by the Fan Driver Setting Register. Position */
#define FAN_CFG_EN_ALGO_Msk                   (_UINT16_(0x1) << FAN_CFG_EN_ALGO_Pos)               /* (FAN_CFG) Enables the RPM based Fan Control Algorithm.\n                  1=The control circuitry is enabled and the Fan Driver output will be automatically updated to maintain the programmed fan speed\n        as indicated by the TACH Target Register.\n        0=The control circuitry is disabled and the fan driver output is determined by the Fan Driver Setting Register. Mask */
#define FAN_CFG_EN_ALGO(value)                (FAN_CFG_EN_ALGO_Msk & (_UINT16_(value) << FAN_CFG_EN_ALGO_Pos)) /* Assigment of value for EN_ALGO in the FAN_CFG register */
#define FAN_CFG_POLARITY_Pos                  _UINT16_(9)                                          /* (FAN_CFG) Determines the polarity of the PWM driver. This does NOT affect the drive setting registers. A setting of 0% drive will\n      still correspond to 0% drive independent of the polarity.\n      1 - The Polarity of the PWM driver is inverted. A drive setting of 00h will cause the output to be set at 100% duty cycle and\n       a drive setting of FFh will cause the output to be set at 0% duty cycle.\n       0 - the Polarity of the PWM driver is normal. A drive setting of 00h will cause the output to be set at 0% duty cycle and\n      a drive setting of FFh will cause the output to be set at 100% duty cycle. Position */
#define FAN_CFG_POLARITY_Msk                  (_UINT16_(0x1) << FAN_CFG_POLARITY_Pos)              /* (FAN_CFG) Determines the polarity of the PWM driver. This does NOT affect the drive setting registers. A setting of 0% drive will\n      still correspond to 0% drive independent of the polarity.\n      1 - The Polarity of the PWM driver is inverted. A drive setting of 00h will cause the output to be set at 100% duty cycle and\n       a drive setting of FFh will cause the output to be set at 0% duty cycle.\n       0 - the Polarity of the PWM driver is normal. A drive setting of 00h will cause the output to be set at 0% duty cycle and\n      a drive setting of FFh will cause the output to be set at 100% duty cycle. Mask */
#define FAN_CFG_POLARITY(value)               (FAN_CFG_POLARITY_Msk & (_UINT16_(value) << FAN_CFG_POLARITY_Pos)) /* Assigment of value for POLARITY in the FAN_CFG register */
#define FAN_CFG_ERR_RNG_Pos                   _UINT16_(10)                                         /* (FAN_CFG) Control some of the advanced options that affect the error window. When the measured fan speed is within the programmed\n         error window around the target speed, the fan drive setting is not updated. These bits only apply if the Fan Speed Control Algorithm is used.\n            3=200 RPM\n               2=100 RPM\n               1=50 RPM\n              0=0 RPM Position */
#define FAN_CFG_ERR_RNG_Msk                   (_UINT16_(0x3) << FAN_CFG_ERR_RNG_Pos)               /* (FAN_CFG) Control some of the advanced options that affect the error window. When the measured fan speed is within the programmed\n         error window around the target speed, the fan drive setting is not updated. These bits only apply if the Fan Speed Control Algorithm is used.\n            3=200 RPM\n               2=100 RPM\n               1=50 RPM\n              0=0 RPM Mask */
#define FAN_CFG_ERR_RNG(value)                (FAN_CFG_ERR_RNG_Msk & (_UINT16_(value) << FAN_CFG_ERR_RNG_Pos)) /* Assigment of value for ERR_RNG in the FAN_CFG register */
#define   FAN_CFG_ERR_RNG_RPM_200_Val         _UINT16_(0x3)                                        /* (FAN_CFG) 3=200 RPM  */
#define   FAN_CFG_ERR_RNG_RPM_100_Val         _UINT16_(0x2)                                        /* (FAN_CFG) 2=100 RPM  */
#define   FAN_CFG_ERR_RNG_RPM_50 _Val         _UINT16_(0x1)                                        /* (FAN_CFG) 1=50 RPM   */
#define   FAN_CFG_ERR_RNG_RPM_0  _Val         _UINT16_(0x0)                                        /* (FAN_CFG) 0=0 RPM    */
#define FAN_CFG_ERR_RNG_RPM_200               (FAN_CFG_ERR_RNG_RPM_200_Val << FAN_CFG_ERR_RNG_Pos) /* (FAN_CFG) 3=200 RPM Position  */
#define FAN_CFG_ERR_RNG_RPM_100               (FAN_CFG_ERR_RNG_RPM_100_Val << FAN_CFG_ERR_RNG_Pos) /* (FAN_CFG) 2=100 RPM Position  */
#define FAN_CFG_ERR_RNG_RPM_50                (FAN_CFG_ERR_RNG_RPM_50 _Val << FAN_CFG_ERR_RNG_Pos) /* (FAN_CFG) 1=50 RPM  Position  */
#define FAN_CFG_ERR_RNG_RPM_0                 (FAN_CFG_ERR_RNG_RPM_0  _Val << FAN_CFG_ERR_RNG_Pos) /* (FAN_CFG) 0=0 RPM   Position  */
#define FAN_CFG_DER_OPT_Pos                   _UINT16_(12)                                         /* (FAN_CFG) Control some of the advanced options that affect the derivative portion of the RPM based fan control algorithm.\n        These bits only apply if the Fan Speed Control Algorithm is used. Position */
#define FAN_CFG_DER_OPT_Msk                   (_UINT16_(0x3) << FAN_CFG_DER_OPT_Pos)               /* (FAN_CFG) Control some of the advanced options that affect the derivative portion of the RPM based fan control algorithm.\n        These bits only apply if the Fan Speed Control Algorithm is used. Mask */
#define FAN_CFG_DER_OPT(value)                (FAN_CFG_DER_OPT_Msk & (_UINT16_(value) << FAN_CFG_DER_OPT_Pos)) /* Assigment of value for DER_OPT in the FAN_CFG register */
#define FAN_CFG_DIS_GLITCH_Pos                _UINT16_(14)                                         /* (FAN_CFG) Disables the low pass glitch filter that removes high frequency noise injected on the TACH pin.\n       1 - The glitch filter is disabled.\n      0 - The glitch filter is enabled. Position */
#define FAN_CFG_DIS_GLITCH_Msk                (_UINT16_(0x1) << FAN_CFG_DIS_GLITCH_Pos)            /* (FAN_CFG) Disables the low pass glitch filter that removes high frequency noise injected on the TACH pin.\n       1 - The glitch filter is disabled.\n      0 - The glitch filter is enabled. Mask */
#define FAN_CFG_DIS_GLITCH(value)             (FAN_CFG_DIS_GLITCH_Msk & (_UINT16_(value) << FAN_CFG_DIS_GLITCH_Pos)) /* Assigment of value for DIS_GLITCH in the FAN_CFG register */
#define FAN_CFG_EN_RRC_Pos                    _UINT16_(15)                                         /* (FAN_CFG) Enables the ramp rate control circuitry during the Manual Mode of operation.\n        1=The ramp rate control circuitry for the Manual Mode of operation is enabled. The PWM setting will follow the ramp rate controls\n       as determined by the Fan Step and Update Time settings. The maximum PWM step is capped at the Fan Step setting and is updated\n        based on the Update Time as given by the field UPDATE.\n         0=The ramp rate control circuitry for the Manual Mode of operation is disabled. When the Fan Drive Setting values are changed\n        and the RPM based Fan Control Algorithm is disabled, the fan driver will be set to the new setting immediately. Position */
#define FAN_CFG_EN_RRC_Msk                    (_UINT16_(0x1) << FAN_CFG_EN_RRC_Pos)                /* (FAN_CFG) Enables the ramp rate control circuitry during the Manual Mode of operation.\n        1=The ramp rate control circuitry for the Manual Mode of operation is enabled. The PWM setting will follow the ramp rate controls\n       as determined by the Fan Step and Update Time settings. The maximum PWM step is capped at the Fan Step setting and is updated\n        based on the Update Time as given by the field UPDATE.\n         0=The ramp rate control circuitry for the Manual Mode of operation is disabled. When the Fan Drive Setting values are changed\n        and the RPM based Fan Control Algorithm is disabled, the fan driver will be set to the new setting immediately. Mask */
#define FAN_CFG_EN_RRC(value)                 (FAN_CFG_EN_RRC_Msk & (_UINT16_(value) << FAN_CFG_EN_RRC_Pos)) /* Assigment of value for EN_RRC in the FAN_CFG register */
#define FAN_CFG_Msk                           _UINT16_(0xFEFF)                                     /* (FAN_CFG) Register Mask  */


/* -------- FAN_PWM_DIV : (FAN Offset: 0x04) (R/W 8) PWM Divide -------- */
#define FAN_PWM_DIV_RESETVALUE                _UINT8_(0x01)                                        /*  (FAN_PWM_DIV) PWM Divide  Reset Value */

#define FAN_PWM_DIV_PWM_DIV_Pos               _UINT8_(0)                                           /* (FAN_PWM_DIV) The PWM Divide value determines the final frequency of the PWM driver. The driver base frequency is divided by the\n      PWM Divide value to determine the final frequency. Position */
#define FAN_PWM_DIV_PWM_DIV_Msk               (_UINT8_(0xFF) << FAN_PWM_DIV_PWM_DIV_Pos)           /* (FAN_PWM_DIV) The PWM Divide value determines the final frequency of the PWM driver. The driver base frequency is divided by the\n      PWM Divide value to determine the final frequency. Mask */
#define FAN_PWM_DIV_PWM_DIV(value)            (FAN_PWM_DIV_PWM_DIV_Msk & (_UINT8_(value) << FAN_PWM_DIV_PWM_DIV_Pos)) /* Assigment of value for PWM_DIV in the FAN_PWM_DIV register */
#define FAN_PWM_DIV_Msk                       _UINT8_(0xFF)                                        /* (FAN_PWM_DIV) Register Mask  */


/* -------- FAN_GAIN : (FAN Offset: 0x05) (R/W 8) Gain Register stores the gain terms used by the proportional and integral portions of the RPM based Fan Control Algorithm. -------- */
#define FAN_GAIN_RESETVALUE                   _UINT8_(0x2A)                                        /*  (FAN_GAIN) Gain Register stores the gain terms used by the proportional and integral portions of the RPM based Fan Control Algorithm.  Reset Value */

#define FAN_GAIN_GAINP_Pos                    _UINT8_(0)                                           /* (FAN_GAIN) The proportional gain term.\n       Gain Factor:\n          3=8x\n             2=4x\n              1=2x\n             0=1x Position */
#define FAN_GAIN_GAINP_Msk                    (_UINT8_(0x3) << FAN_GAIN_GAINP_Pos)                 /* (FAN_GAIN) The proportional gain term.\n       Gain Factor:\n          3=8x\n             2=4x\n              1=2x\n             0=1x Mask */
#define FAN_GAIN_GAINP(value)                 (FAN_GAIN_GAINP_Msk & (_UINT8_(value) << FAN_GAIN_GAINP_Pos)) /* Assigment of value for GAINP in the FAN_GAIN register */
#define   FAN_GAIN_GAINP_GAINP_8X_Val         _UINT8_(0x3)                                         /* (FAN_GAIN) Gain Factor: 3=8x  */
#define   FAN_GAIN_GAINP_GAINP_4X_Val         _UINT8_(0x2)                                         /* (FAN_GAIN) Gain Factor: 2=4x  */
#define   FAN_GAIN_GAINP_GAINP_2X_Val         _UINT8_(0x1)                                         /* (FAN_GAIN) Gain Factor: 1=2x  */
#define   FAN_GAIN_GAINP_GAINP_1X_Val         _UINT8_(0x0)                                         /* (FAN_GAIN) Gain Factor: 0=1x  */
#define FAN_GAIN_GAINP_GAINP_8X               (FAN_GAIN_GAINP_GAINP_8X_Val << FAN_GAIN_GAINP_Pos)  /* (FAN_GAIN) Gain Factor: 3=8x Position  */
#define FAN_GAIN_GAINP_GAINP_4X               (FAN_GAIN_GAINP_GAINP_4X_Val << FAN_GAIN_GAINP_Pos)  /* (FAN_GAIN) Gain Factor: 2=4x Position  */
#define FAN_GAIN_GAINP_GAINP_2X               (FAN_GAIN_GAINP_GAINP_2X_Val << FAN_GAIN_GAINP_Pos)  /* (FAN_GAIN) Gain Factor: 1=2x Position  */
#define FAN_GAIN_GAINP_GAINP_1X               (FAN_GAIN_GAINP_GAINP_1X_Val << FAN_GAIN_GAINP_Pos)  /* (FAN_GAIN) Gain Factor: 0=1x Position  */
#define FAN_GAIN_GAINI_Pos                    _UINT8_(2)                                           /* (FAN_GAIN) The integral gain term.\n        Gain Factor:\n                3=8x\n               2=4x\n                 1=2x\n                 0=1x Position */
#define FAN_GAIN_GAINI_Msk                    (_UINT8_(0x3) << FAN_GAIN_GAINI_Pos)                 /* (FAN_GAIN) The integral gain term.\n        Gain Factor:\n                3=8x\n               2=4x\n                 1=2x\n                 0=1x Mask */
#define FAN_GAIN_GAINI(value)                 (FAN_GAIN_GAINI_Msk & (_UINT8_(value) << FAN_GAIN_GAINI_Pos)) /* Assigment of value for GAINI in the FAN_GAIN register */
#define   FAN_GAIN_GAINI_GAINI_8X_Val         _UINT8_(0x3)                                         /* (FAN_GAIN) Gain Factor: 3=8x  */
#define   FAN_GAIN_GAINI_GAINI_4X_Val         _UINT8_(0x2)                                         /* (FAN_GAIN) Gain Factor: 2=4x  */
#define   FAN_GAIN_GAINI_GAINI_2X_Val         _UINT8_(0x1)                                         /* (FAN_GAIN) Gain Factor: 1=2x  */
#define   FAN_GAIN_GAINI_GAINI_1X_Val         _UINT8_(0x0)                                         /* (FAN_GAIN) Gain Factor: 0=1x  */
#define FAN_GAIN_GAINI_GAINI_8X               (FAN_GAIN_GAINI_GAINI_8X_Val << FAN_GAIN_GAINI_Pos)  /* (FAN_GAIN) Gain Factor: 3=8x Position  */
#define FAN_GAIN_GAINI_GAINI_4X               (FAN_GAIN_GAINI_GAINI_4X_Val << FAN_GAIN_GAINI_Pos)  /* (FAN_GAIN) Gain Factor: 2=4x Position  */
#define FAN_GAIN_GAINI_GAINI_2X               (FAN_GAIN_GAINI_GAINI_2X_Val << FAN_GAIN_GAINI_Pos)  /* (FAN_GAIN) Gain Factor: 1=2x Position  */
#define FAN_GAIN_GAINI_GAINI_1X               (FAN_GAIN_GAINI_GAINI_1X_Val << FAN_GAIN_GAINI_Pos)  /* (FAN_GAIN) Gain Factor: 0=1x Position  */
#define FAN_GAIN_GAIND_Pos                    _UINT8_(4)                                           /* (FAN_GAIN) The derivative gain term.\n      Gain Factor:\n       3=8x\n           2=4x\n           1=2x\n              0=1x Position */
#define FAN_GAIN_GAIND_Msk                    (_UINT8_(0x3) << FAN_GAIN_GAIND_Pos)                 /* (FAN_GAIN) The derivative gain term.\n      Gain Factor:\n       3=8x\n           2=4x\n           1=2x\n              0=1x Mask */
#define FAN_GAIN_GAIND(value)                 (FAN_GAIN_GAIND_Msk & (_UINT8_(value) << FAN_GAIN_GAIND_Pos)) /* Assigment of value for GAIND in the FAN_GAIN register */
#define   FAN_GAIN_GAIND_GAIND_8X_Val         _UINT8_(0x3)                                         /* (FAN_GAIN) Gain Factor: 3=8x  */
#define   FAN_GAIN_GAIND_GAIND_4X_Val         _UINT8_(0x2)                                         /* (FAN_GAIN) Gain Factor: 2=4x  */
#define   FAN_GAIN_GAIND_GAIND_2X_Val         _UINT8_(0x1)                                         /* (FAN_GAIN) Gain Factor: 1=2x  */
#define   FAN_GAIN_GAIND_GAIND_1X_Val         _UINT8_(0x0)                                         /* (FAN_GAIN) Gain Factor: 0=1x  */
#define FAN_GAIN_GAIND_GAIND_8X               (FAN_GAIN_GAIND_GAIND_8X_Val << FAN_GAIN_GAIND_Pos)  /* (FAN_GAIN) Gain Factor: 3=8x Position  */
#define FAN_GAIN_GAIND_GAIND_4X               (FAN_GAIN_GAIND_GAIND_4X_Val << FAN_GAIN_GAIND_Pos)  /* (FAN_GAIN) Gain Factor: 2=4x Position  */
#define FAN_GAIN_GAIND_GAIND_2X               (FAN_GAIN_GAIND_GAIND_2X_Val << FAN_GAIN_GAIND_Pos)  /* (FAN_GAIN) Gain Factor: 1=2x Position  */
#define FAN_GAIN_GAIND_GAIND_1X               (FAN_GAIN_GAIND_GAIND_1X_Val << FAN_GAIN_GAIND_Pos)  /* (FAN_GAIN) Gain Factor: 0=1x Position  */
#define FAN_GAIN_Msk                          _UINT8_(0x3F)                                        /* (FAN_GAIN) Register Mask  */


/* -------- FAN_SPIN_UP_CFG : (FAN Offset: 0x06) (R/W 8) The Fan Spin Up Configuration Register controls the settings of Spin Up Routine. -------- */
#define FAN_SPIN_UP_CFG_RESETVALUE            _UINT8_(0x19)                                        /*  (FAN_SPIN_UP_CFG) The Fan Spin Up Configuration Register controls the settings of Spin Up Routine.  Reset Value */

#define FAN_SPIN_UP_CFG_SPINUP_TIME_Pos       _UINT8_(0)                                           /* (FAN_SPIN_UP_CFG) Determines the maximum Spin Time that the Spin Up Routine will run for. If a valid tachometer measurement is not\n           detected before the Spin Time has elapsed, an interrupt will be generated. When the RPM based Fan Control Algorithm is active,\n         the fan driver will attempt to re-start the fan immediately after the end of the last spin up attempt.\n               3=2 seconds\n               2=1 second\n                 1=500 ms\n               0=250 ms Position */
#define FAN_SPIN_UP_CFG_SPINUP_TIME_Msk       (_UINT8_(0x3) << FAN_SPIN_UP_CFG_SPINUP_TIME_Pos)    /* (FAN_SPIN_UP_CFG) Determines the maximum Spin Time that the Spin Up Routine will run for. If a valid tachometer measurement is not\n           detected before the Spin Time has elapsed, an interrupt will be generated. When the RPM based Fan Control Algorithm is active,\n         the fan driver will attempt to re-start the fan immediately after the end of the last spin up attempt.\n               3=2 seconds\n               2=1 second\n                 1=500 ms\n               0=250 ms Mask */
#define FAN_SPIN_UP_CFG_SPINUP_TIME(value)    (FAN_SPIN_UP_CFG_SPINUP_TIME_Msk & (_UINT8_(value) << FAN_SPIN_UP_CFG_SPINUP_TIME_Pos)) /* Assigment of value for SPINUP_TIME in the FAN_SPIN_UP_CFG register */
#define   FAN_SPIN_UP_CFG_SPINUP_TIME_SPINUP_2_SEC_Val _UINT8_(0x3)                                         /* (FAN_SPIN_UP_CFG) 3=2 seconds  */
#define   FAN_SPIN_UP_CFG_SPINUP_TIME_SPINUP_1_SEC_Val _UINT8_(0x2)                                         /* (FAN_SPIN_UP_CFG) 2=1 second   */
#define   FAN_SPIN_UP_CFG_SPINUP_TIME_SPINUP_500_MSEC_Val _UINT8_(0x1)                                         /* (FAN_SPIN_UP_CFG) 1=500 ms  */
#define   FAN_SPIN_UP_CFG_SPINUP_TIME_SPINUP_250_MSEC_Val _UINT8_(0x0)                                         /* (FAN_SPIN_UP_CFG) 0=250 ms  */
#define FAN_SPIN_UP_CFG_SPINUP_TIME_SPINUP_2_SEC (FAN_SPIN_UP_CFG_SPINUP_TIME_SPINUP_2_SEC_Val << FAN_SPIN_UP_CFG_SPINUP_TIME_Pos) /* (FAN_SPIN_UP_CFG) 3=2 seconds Position  */
#define FAN_SPIN_UP_CFG_SPINUP_TIME_SPINUP_1_SEC (FAN_SPIN_UP_CFG_SPINUP_TIME_SPINUP_1_SEC_Val << FAN_SPIN_UP_CFG_SPINUP_TIME_Pos) /* (FAN_SPIN_UP_CFG) 2=1 second  Position  */
#define FAN_SPIN_UP_CFG_SPINUP_TIME_SPINUP_500_MSEC (FAN_SPIN_UP_CFG_SPINUP_TIME_SPINUP_500_MSEC_Val << FAN_SPIN_UP_CFG_SPINUP_TIME_Pos) /* (FAN_SPIN_UP_CFG) 1=500 ms Position  */
#define FAN_SPIN_UP_CFG_SPINUP_TIME_SPINUP_250_MSEC (FAN_SPIN_UP_CFG_SPINUP_TIME_SPINUP_250_MSEC_Val << FAN_SPIN_UP_CFG_SPINUP_TIME_Pos) /* (FAN_SPIN_UP_CFG) 0=250 ms Position  */
#define FAN_SPIN_UP_CFG_SPIN_LVL_Pos          _UINT8_(2)                                           /* (FAN_SPIN_UP_CFG) Determines the final drive level that is used by the Spin Up Routine.\n       7=65%\n             6=60%\n           5=55%\n            4=50%\n               3=45%\n            2=40%\n            1=35%\n           0=30% Position */
#define FAN_SPIN_UP_CFG_SPIN_LVL_Msk          (_UINT8_(0x7) << FAN_SPIN_UP_CFG_SPIN_LVL_Pos)       /* (FAN_SPIN_UP_CFG) Determines the final drive level that is used by the Spin Up Routine.\n       7=65%\n             6=60%\n           5=55%\n            4=50%\n               3=45%\n            2=40%\n            1=35%\n           0=30% Mask */
#define FAN_SPIN_UP_CFG_SPIN_LVL(value)       (FAN_SPIN_UP_CFG_SPIN_LVL_Msk & (_UINT8_(value) << FAN_SPIN_UP_CFG_SPIN_LVL_Pos)) /* Assigment of value for SPIN_LVL in the FAN_SPIN_UP_CFG register */
#define   FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_65_Val _UINT8_(0x7)                                         /* (FAN_SPIN_UP_CFG) 7=65%  */
#define   FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_60_Val _UINT8_(0x6)                                         /* (FAN_SPIN_UP_CFG) 6=60%  */
#define   FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_55_Val _UINT8_(0x5)                                         /* (FAN_SPIN_UP_CFG) 5=55%  */
#define   FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_50_Val _UINT8_(0x4)                                         /* (FAN_SPIN_UP_CFG) 4=50%  */
#define   FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_45_Val _UINT8_(0x3)                                         /* (FAN_SPIN_UP_CFG) 3=45%  */
#define   FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_40_Val _UINT8_(0x2)                                         /* (FAN_SPIN_UP_CFG) 2=40%  */
#define   FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_35_Val _UINT8_(0x1)                                         /* (FAN_SPIN_UP_CFG) 1=35%  */
#define   FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_30_Val _UINT8_(0x0)                                         /* (FAN_SPIN_UP_CFG) 0=30%  */
#define FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_65  (FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_65_Val << FAN_SPIN_UP_CFG_SPIN_LVL_Pos) /* (FAN_SPIN_UP_CFG) 7=65% Position  */
#define FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_60  (FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_60_Val << FAN_SPIN_UP_CFG_SPIN_LVL_Pos) /* (FAN_SPIN_UP_CFG) 6=60% Position  */
#define FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_55  (FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_55_Val << FAN_SPIN_UP_CFG_SPIN_LVL_Pos) /* (FAN_SPIN_UP_CFG) 5=55% Position  */
#define FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_50  (FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_50_Val << FAN_SPIN_UP_CFG_SPIN_LVL_Pos) /* (FAN_SPIN_UP_CFG) 4=50% Position  */
#define FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_45  (FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_45_Val << FAN_SPIN_UP_CFG_SPIN_LVL_Pos) /* (FAN_SPIN_UP_CFG) 3=45% Position  */
#define FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_40  (FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_40_Val << FAN_SPIN_UP_CFG_SPIN_LVL_Pos) /* (FAN_SPIN_UP_CFG) 2=40% Position  */
#define FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_35  (FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_35_Val << FAN_SPIN_UP_CFG_SPIN_LVL_Pos) /* (FAN_SPIN_UP_CFG) 1=35% Position  */
#define FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_30  (FAN_SPIN_UP_CFG_SPIN_LVL_SPIN_LVL_30_Val << FAN_SPIN_UP_CFG_SPIN_LVL_Pos) /* (FAN_SPIN_UP_CFG) 0=30% Position  */
#define FAN_SPIN_UP_CFG_NOKICK_Pos            _UINT8_(5)                                           /* (FAN_SPIN_UP_CFG) Determines if the Spin Up Routine will drive the fan to 100% duty cycle for 1/4 of the programmed spin up time before\n            driving it at the programmed level.\n              1=The Spin Up Routine will not drive the PWM to 100%. It will set the drive at the programmed spin level for the entire duration of\n         the programmed spin up time\n         0=The Spin Up Routine will drive the PWM to 100% for 1/4 of the programmed spin up time before reverting to the programmed spin level. Position */
#define FAN_SPIN_UP_CFG_NOKICK_Msk            (_UINT8_(0x1) << FAN_SPIN_UP_CFG_NOKICK_Pos)         /* (FAN_SPIN_UP_CFG) Determines if the Spin Up Routine will drive the fan to 100% duty cycle for 1/4 of the programmed spin up time before\n            driving it at the programmed level.\n              1=The Spin Up Routine will not drive the PWM to 100%. It will set the drive at the programmed spin level for the entire duration of\n         the programmed spin up time\n         0=The Spin Up Routine will drive the PWM to 100% for 1/4 of the programmed spin up time before reverting to the programmed spin level. Mask */
#define FAN_SPIN_UP_CFG_NOKICK(value)         (FAN_SPIN_UP_CFG_NOKICK_Msk & (_UINT8_(value) << FAN_SPIN_UP_CFG_NOKICK_Pos)) /* Assigment of value for NOKICK in the FAN_SPIN_UP_CFG register */
#define FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT_Pos    _UINT8_(6)                                           /* (FAN_SPIN_UP_CFG) Determines how many update cycles are used for the Drive Fail detection function. This circuitry determines whether the\n      fan can be driven to the desired Tach target. These settings only apply if the Fan Speed Control Algorithm is enabled.\n        3=Drive Fail detection circuitry will count for 64 update periods\n       2=Drive Fail detection circuitry will count for 32 update periods\n         1=Drive Fail detection circuitry will count for 16 update periods\n          0=Drive Fail detection circuitry is disabled. Position */
#define FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT_Msk    (_UINT8_(0x3) << FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT_Pos) /* (FAN_SPIN_UP_CFG) Determines how many update cycles are used for the Drive Fail detection function. This circuitry determines whether the\n      fan can be driven to the desired Tach target. These settings only apply if the Fan Speed Control Algorithm is enabled.\n        3=Drive Fail detection circuitry will count for 64 update periods\n       2=Drive Fail detection circuitry will count for 32 update periods\n         1=Drive Fail detection circuitry will count for 16 update periods\n          0=Drive Fail detection circuitry is disabled. Mask */
#define FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT(value) (FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT_Msk & (_UINT8_(value) << FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT_Pos)) /* Assigment of value for DRIVE_FAIL_CNT in the FAN_SPIN_UP_CFG register */
#define   FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT_DRIVE_FAIL_CNT_64_PERIOD_Val _UINT8_(0x3)                                         /* (FAN_SPIN_UP_CFG) 3=Drive Fail detection circuitry will count for 64 update periods  */
#define   FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT_DRIVE_FAIL_CNT_32_PERIOD_Val _UINT8_(0x2)                                         /* (FAN_SPIN_UP_CFG) 2=Drive Fail detection circuitry will count for 32 update periods  */
#define   FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT_DRIVE_FAIL_CNT_16_PERIOD_Val _UINT8_(0x1)                                         /* (FAN_SPIN_UP_CFG) 1=Drive Fail detection circuitry will count for 16 update periods  */
#define   FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT_DRIVE_FAIL_CNT_DIS_Val _UINT8_(0x0)                                         /* (FAN_SPIN_UP_CFG) 0=Drive Fail detection circuitry is disabled.  */
#define FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT_DRIVE_FAIL_CNT_64_PERIOD (FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT_DRIVE_FAIL_CNT_64_PERIOD_Val << FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT_Pos) /* (FAN_SPIN_UP_CFG) 3=Drive Fail detection circuitry will count for 64 update periods Position  */
#define FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT_DRIVE_FAIL_CNT_32_PERIOD (FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT_DRIVE_FAIL_CNT_32_PERIOD_Val << FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT_Pos) /* (FAN_SPIN_UP_CFG) 2=Drive Fail detection circuitry will count for 32 update periods Position  */
#define FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT_DRIVE_FAIL_CNT_16_PERIOD (FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT_DRIVE_FAIL_CNT_16_PERIOD_Val << FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT_Pos) /* (FAN_SPIN_UP_CFG) 1=Drive Fail detection circuitry will count for 16 update periods Position  */
#define FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT_DRIVE_FAIL_CNT_DIS (FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT_DRIVE_FAIL_CNT_DIS_Val << FAN_SPIN_UP_CFG_DRIVE_FAIL_CNT_Pos) /* (FAN_SPIN_UP_CFG) 0=Drive Fail detection circuitry is disabled. Position  */
#define FAN_SPIN_UP_CFG_Msk                   _UINT8_(0xFF)                                        /* (FAN_SPIN_UP_CFG) Register Mask  */


/* -------- FAN_STEP : (FAN Offset: 0x07) (R/W 8) FAN_STEP The Fan Step value represents the maximum step size the fan driver will take between update times -------- */
#define FAN_STEP_RESETVALUE                   _UINT8_(0x10)                                        /*  (FAN_STEP) FAN_STEP The Fan Step value represents the maximum step size the fan driver will take between update times  Reset Value */

#define FAN_STEP_FAN_STEP_Pos                 _UINT8_(0)                                           /* (FAN_STEP) The Fan Step value represents the maximum step size the fan driver will take between update times.\n      When the PWM_BASE frequency range field in the PWM Driver Base Frequency Register is set to the value 1, 2 or 3, this 8-bit field\n        is added to the 10-bit PWM duty cycle, for a maximum step size of 25%. When the PWM_BASE field is set to 0, the PWM operates in\n        an 8-bit mode. In 8-bit mode, this 8-bit field is added to the 8-bit duty cycle, for a maximum step size of 100%. Position */
#define FAN_STEP_FAN_STEP_Msk                 (_UINT8_(0xFF) << FAN_STEP_FAN_STEP_Pos)             /* (FAN_STEP) The Fan Step value represents the maximum step size the fan driver will take between update times.\n      When the PWM_BASE frequency range field in the PWM Driver Base Frequency Register is set to the value 1, 2 or 3, this 8-bit field\n        is added to the 10-bit PWM duty cycle, for a maximum step size of 25%. When the PWM_BASE field is set to 0, the PWM operates in\n        an 8-bit mode. In 8-bit mode, this 8-bit field is added to the 8-bit duty cycle, for a maximum step size of 100%. Mask */
#define FAN_STEP_FAN_STEP(value)              (FAN_STEP_FAN_STEP_Msk & (_UINT8_(value) << FAN_STEP_FAN_STEP_Pos)) /* Assigment of value for FAN_STEP in the FAN_STEP register */
#define FAN_STEP_Msk                          _UINT8_(0xFF)                                        /* (FAN_STEP) Register Mask  */


/* -------- FAN_MIN_DRIVE : (FAN Offset: 0x08) (R/W 8) the minimum drive setting for the RPM based Fan Control Algorithm. -------- */
#define FAN_MIN_DRIVE_RESETVALUE              _UINT8_(0x66)                                        /*  (FAN_MIN_DRIVE) the minimum drive setting for the RPM based Fan Control Algorithm.  Reset Value */

#define FAN_MIN_DRIVE_MIN_DRIVE_Pos           _UINT8_(0)                                           /* (FAN_MIN_DRIVE) The minimum drive setting. Position */
#define FAN_MIN_DRIVE_MIN_DRIVE_Msk           (_UINT8_(0xFF) << FAN_MIN_DRIVE_MIN_DRIVE_Pos)       /* (FAN_MIN_DRIVE) The minimum drive setting. Mask */
#define FAN_MIN_DRIVE_MIN_DRIVE(value)        (FAN_MIN_DRIVE_MIN_DRIVE_Msk & (_UINT8_(value) << FAN_MIN_DRIVE_MIN_DRIVE_Pos)) /* Assigment of value for MIN_DRIVE in the FAN_MIN_DRIVE register */
#define FAN_MIN_DRIVE_Msk                     _UINT8_(0xFF)                                        /* (FAN_MIN_DRIVE) Register Mask  */


/* -------- FAN_VAL_TACH_CNT : (FAN Offset: 0x09) (R/W 8) The maximum TACH Reading Register value to indicate that the fan is spinning properly. -------- */
#define FAN_VAL_TACH_CNT_RESETVALUE           _UINT8_(0xF5)                                        /*  (FAN_VAL_TACH_CNT) The maximum TACH Reading Register value to indicate that the fan is spinning properly.  Reset Value */

#define FAN_VAL_TACH_CNT_VALID_TACH_CNT_Pos   _UINT8_(0)                                           /* (FAN_VAL_TACH_CNT) The maximum TACH Reading Register value to indicate that the fan is spinning properly. Position */
#define FAN_VAL_TACH_CNT_VALID_TACH_CNT_Msk   (_UINT8_(0xFF) << FAN_VAL_TACH_CNT_VALID_TACH_CNT_Pos) /* (FAN_VAL_TACH_CNT) The maximum TACH Reading Register value to indicate that the fan is spinning properly. Mask */
#define FAN_VAL_TACH_CNT_VALID_TACH_CNT(value) (FAN_VAL_TACH_CNT_VALID_TACH_CNT_Msk & (_UINT8_(value) << FAN_VAL_TACH_CNT_VALID_TACH_CNT_Pos)) /* Assigment of value for VALID_TACH_CNT in the FAN_VAL_TACH_CNT register */
#define FAN_VAL_TACH_CNT_Msk                  _UINT8_(0xFF)                                        /* (FAN_VAL_TACH_CNT) Register Mask  */


/* -------- FAN_DRIVE_FAIL_BAND : (FAN Offset: 0x0A) (R/W 16) The number of Tach counts used by the Fan Drive Fail detection circuitry -------- */
#define FAN_DRIVE_FAIL_BAND_RESETVALUE        _UINT16_(0x00)                                       /*  (FAN_DRIVE_FAIL_BAND) The number of Tach counts used by the Fan Drive Fail detection circuitry  Reset Value */

#define FAN_DRIVE_FAIL_BAND_FAN_DRIVE_FAIL_BAND_Pos _UINT16_(3)                                          /* (FAN_DRIVE_FAIL_BAND) The number of Tach counts used by the Fan Drive Fail detection circuitry. Position */
#define FAN_DRIVE_FAIL_BAND_FAN_DRIVE_FAIL_BAND_Msk (_UINT16_(0x1FFF) << FAN_DRIVE_FAIL_BAND_FAN_DRIVE_FAIL_BAND_Pos) /* (FAN_DRIVE_FAIL_BAND) The number of Tach counts used by the Fan Drive Fail detection circuitry. Mask */
#define FAN_DRIVE_FAIL_BAND_FAN_DRIVE_FAIL_BAND(value) (FAN_DRIVE_FAIL_BAND_FAN_DRIVE_FAIL_BAND_Msk & (_UINT16_(value) << FAN_DRIVE_FAIL_BAND_FAN_DRIVE_FAIL_BAND_Pos)) /* Assigment of value for FAN_DRIVE_FAIL_BAND in the FAN_DRIVE_FAIL_BAND register */
#define FAN_DRIVE_FAIL_BAND_Msk               _UINT16_(0xFFF8)                                     /* (FAN_DRIVE_FAIL_BAND) Register Mask  */


/* -------- FAN_TACH_TGT : (FAN Offset: 0x0C) (R/W 16) The target tachometer value. -------- */
#define FAN_TACH_TGT_RESETVALUE               _UINT16_(0x00)                                       /*  (FAN_TACH_TGT) The target tachometer value.  Reset Value */

#define FAN_TACH_TGT_TACH_TGT_Pos             _UINT16_(3)                                          /* (FAN_TACH_TGT) The target tachometer value. Position */
#define FAN_TACH_TGT_TACH_TGT_Msk             (_UINT16_(0x1FFF) << FAN_TACH_TGT_TACH_TGT_Pos)      /* (FAN_TACH_TGT) The target tachometer value. Mask */
#define FAN_TACH_TGT_TACH_TGT(value)          (FAN_TACH_TGT_TACH_TGT_Msk & (_UINT16_(value) << FAN_TACH_TGT_TACH_TGT_Pos)) /* Assigment of value for TACH_TGT in the FAN_TACH_TGT register */
#define FAN_TACH_TGT_Msk                      _UINT16_(0xFFF8)                                     /* (FAN_TACH_TGT) Register Mask  */


/* -------- FAN_TACH_RD : (FAN Offset: 0x0E) (R/W 16) [15:3] The current tachometer reading value. -------- */
#define FAN_TACH_RD_RESETVALUE                _UINT16_(0x00)                                       /*  (FAN_TACH_RD) [15:3] The current tachometer reading value.  Reset Value */

#define FAN_TACH_RD_TACH_RD_Pos               _UINT16_(3)                                          /* (FAN_TACH_RD) The current tachometer reading value. Position */
#define FAN_TACH_RD_TACH_RD_Msk               (_UINT16_(0x1FFF) << FAN_TACH_RD_TACH_RD_Pos)        /* (FAN_TACH_RD) The current tachometer reading value. Mask */
#define FAN_TACH_RD_TACH_RD(value)            (FAN_TACH_RD_TACH_RD_Msk & (_UINT16_(value) << FAN_TACH_RD_TACH_RD_Pos)) /* Assigment of value for TACH_RD in the FAN_TACH_RD register */
#define FAN_TACH_RD_Msk                       _UINT16_(0xFFF8)                                     /* (FAN_TACH_RD) Register Mask  */


/* -------- FAN_DRIV_BASE_FREQ : (FAN Offset: 0x10) (R/W 8) [1:0] Determines the frequency range of the PWM fan driver -------- */
#define FAN_DRIV_BASE_FREQ_RESETVALUE         _UINT8_(0x00)                                        /*  (FAN_DRIV_BASE_FREQ) [1:0] Determines the frequency range of the PWM fan driver  Reset Value */

#define FAN_DRIV_BASE_FREQ_PWM_BASE_Pos       _UINT8_(0)                                           /* (FAN_DRIV_BASE_FREQ) Determines the frequency range of the PWM fan driver (when enabled). PWM resolution is 10-bit, except when this field\n        is set to '0b', when it is 8-bit.\n                 3=2.34KHz\n                 2=4.67KHz\n                 1=23.4KHz\n                0=26.8KHz Position */
#define FAN_DRIV_BASE_FREQ_PWM_BASE_Msk       (_UINT8_(0x3) << FAN_DRIV_BASE_FREQ_PWM_BASE_Pos)    /* (FAN_DRIV_BASE_FREQ) Determines the frequency range of the PWM fan driver (when enabled). PWM resolution is 10-bit, except when this field\n        is set to '0b', when it is 8-bit.\n                 3=2.34KHz\n                 2=4.67KHz\n                 1=23.4KHz\n                0=26.8KHz Mask */
#define FAN_DRIV_BASE_FREQ_PWM_BASE(value)    (FAN_DRIV_BASE_FREQ_PWM_BASE_Msk & (_UINT8_(value) << FAN_DRIV_BASE_FREQ_PWM_BASE_Pos)) /* Assigment of value for PWM_BASE in the FAN_DRIV_BASE_FREQ register */
#define   FAN_DRIV_BASE_FREQ_PWM_BASE_PWM_FAN_FREQ_2KHZ_Val _UINT8_(0x3)                                         /* (FAN_DRIV_BASE_FREQ) 3=2.34KHz  */
#define   FAN_DRIV_BASE_FREQ_PWM_BASE_PWM_FAN_FREQ_4KHZ_Val _UINT8_(0x2)                                         /* (FAN_DRIV_BASE_FREQ) 2=4.67KHz  */
#define   FAN_DRIV_BASE_FREQ_PWM_BASE_PWM_FAN_FREQ_23KHZ_Val _UINT8_(0x1)                                         /* (FAN_DRIV_BASE_FREQ) 1=23.4KHz  */
#define   FAN_DRIV_BASE_FREQ_PWM_BASE_PWM_FAN_FREQ_26KHZ_Val _UINT8_(0x0)                                         /* (FAN_DRIV_BASE_FREQ) 0=26.8KHz  */
#define FAN_DRIV_BASE_FREQ_PWM_BASE_PWM_FAN_FREQ_2KHZ (FAN_DRIV_BASE_FREQ_PWM_BASE_PWM_FAN_FREQ_2KHZ_Val << FAN_DRIV_BASE_FREQ_PWM_BASE_Pos) /* (FAN_DRIV_BASE_FREQ) 3=2.34KHz Position  */
#define FAN_DRIV_BASE_FREQ_PWM_BASE_PWM_FAN_FREQ_4KHZ (FAN_DRIV_BASE_FREQ_PWM_BASE_PWM_FAN_FREQ_4KHZ_Val << FAN_DRIV_BASE_FREQ_PWM_BASE_Pos) /* (FAN_DRIV_BASE_FREQ) 2=4.67KHz Position  */
#define FAN_DRIV_BASE_FREQ_PWM_BASE_PWM_FAN_FREQ_23KHZ (FAN_DRIV_BASE_FREQ_PWM_BASE_PWM_FAN_FREQ_23KHZ_Val << FAN_DRIV_BASE_FREQ_PWM_BASE_Pos) /* (FAN_DRIV_BASE_FREQ) 1=23.4KHz Position  */
#define FAN_DRIV_BASE_FREQ_PWM_BASE_PWM_FAN_FREQ_26KHZ (FAN_DRIV_BASE_FREQ_PWM_BASE_PWM_FAN_FREQ_26KHZ_Val << FAN_DRIV_BASE_FREQ_PWM_BASE_Pos) /* (FAN_DRIV_BASE_FREQ) 0=26.8KHz Position  */
#define FAN_DRIV_BASE_FREQ_Msk                _UINT8_(0x03)                                        /* (FAN_DRIV_BASE_FREQ) Register Mask  */


/* -------- FAN_STS : (FAN Offset: 0x11) (R/W 8) The bits in this register are routed to interrupts. -------- */
#define FAN_STS_RESETVALUE                    _UINT8_(0x00)                                        /*  (FAN_STS) The bits in this register are routed to interrupts.  Reset Value */

#define FAN_STS_FAN_STALL_Pos                 _UINT8_(0)                                           /* (FAN_STS) The bit Indicates that the tachometer measurement on the Fan detects a stalled fan.  (R/WC)\n       0 - Stalled fan not detected.\n               1 - Stalled fan detected. Position */
#define FAN_STS_FAN_STALL_Msk                 (_UINT8_(0x1) << FAN_STS_FAN_STALL_Pos)              /* (FAN_STS) The bit Indicates that the tachometer measurement on the Fan detects a stalled fan.  (R/WC)\n       0 - Stalled fan not detected.\n               1 - Stalled fan detected. Mask */
#define FAN_STS_FAN_STALL(value)              (FAN_STS_FAN_STALL_Msk & (_UINT8_(value) << FAN_STS_FAN_STALL_Pos)) /* Assigment of value for FAN_STALL in the FAN_STS register */
#define FAN_STS_FAN_SPIN_Pos                  _UINT8_(1)                                           /* (FAN_STS) The bit Indicates that the Spin up Routine for the Fan could not detect a valid tachometer reading within its maximum\n           time window. (R/WC)\n            1 - The Spin up Routine for the Fan could not detect a valid tachometer reading within its maximum time window.\n          0 - The Spin up Routine for the Fan detected a valid tachometer reading within its maximum time window. Position */
#define FAN_STS_FAN_SPIN_Msk                  (_UINT8_(0x1) << FAN_STS_FAN_SPIN_Pos)               /* (FAN_STS) The bit Indicates that the Spin up Routine for the Fan could not detect a valid tachometer reading within its maximum\n           time window. (R/WC)\n            1 - The Spin up Routine for the Fan could not detect a valid tachometer reading within its maximum time window.\n          0 - The Spin up Routine for the Fan detected a valid tachometer reading within its maximum time window. Mask */
#define FAN_STS_FAN_SPIN(value)               (FAN_STS_FAN_SPIN_Msk & (_UINT8_(value) << FAN_STS_FAN_SPIN_Pos)) /* Assigment of value for FAN_SPIN in the FAN_STS register */
#define FAN_STS_DRIVE_FAIL_Pos                _UINT8_(5)                                           /* (FAN_STS) The bit Indicates that the RPM-based Fan Speed Control Algorithm cannot drive the Fan to the desired target setting at\n       maximum drive. (R/WC)\n        1- The RPM-based Fan Speed Control Algorithm cannot drive Fan to the desired target setting at maximum drive.\n                0- The RPM-based Fan Speed Control Algorithm can drive Fan to the desired target setting. Position */
#define FAN_STS_DRIVE_FAIL_Msk                (_UINT8_(0x1) << FAN_STS_DRIVE_FAIL_Pos)             /* (FAN_STS) The bit Indicates that the RPM-based Fan Speed Control Algorithm cannot drive the Fan to the desired target setting at\n       maximum drive. (R/WC)\n        1- The RPM-based Fan Speed Control Algorithm cannot drive Fan to the desired target setting at maximum drive.\n                0- The RPM-based Fan Speed Control Algorithm can drive Fan to the desired target setting. Mask */
#define FAN_STS_DRIVE_FAIL(value)             (FAN_STS_DRIVE_FAIL_Msk & (_UINT8_(value) << FAN_STS_DRIVE_FAIL_Pos)) /* Assigment of value for DRIVE_FAIL in the FAN_STS register */
#define FAN_STS_Msk                           _UINT8_(0x23)                                        /* (FAN_STS) Register Mask  */


/** \brief FAN register offsets definitions */
#define FAN_SET_REG_OFST               _UINT32_(0x00)      /* (FAN_SET) The Fan Driver Setting used to control the output of the Fan Driver. Offset */
#define FAN_CFG_REG_OFST               _UINT32_(0x02)      /* (FAN_CFG) The Fan Configuration Register controls the general operation of the RPM based Fan Control Algorithm used by the fan driver. Offset */
#define FAN_PWM_DIV_REG_OFST           _UINT32_(0x04)      /* (FAN_PWM_DIV) PWM Divide Offset */
#define FAN_GAIN_REG_OFST              _UINT32_(0x05)      /* (FAN_GAIN) Gain Register stores the gain terms used by the proportional and integral portions of the RPM based Fan Control Algorithm. Offset */
#define FAN_SPIN_UP_CFG_REG_OFST       _UINT32_(0x06)      /* (FAN_SPIN_UP_CFG) The Fan Spin Up Configuration Register controls the settings of Spin Up Routine. Offset */
#define FAN_STEP_REG_OFST              _UINT32_(0x07)      /* (FAN_STEP) FAN_STEP The Fan Step value represents the maximum step size the fan driver will take between update times Offset */
#define FAN_MIN_DRIVE_REG_OFST         _UINT32_(0x08)      /* (FAN_MIN_DRIVE) the minimum drive setting for the RPM based Fan Control Algorithm. Offset */
#define FAN_VAL_TACH_CNT_REG_OFST      _UINT32_(0x09)      /* (FAN_VAL_TACH_CNT) The maximum TACH Reading Register value to indicate that the fan is spinning properly. Offset */
#define FAN_DRIVE_FAIL_BAND_REG_OFST   _UINT32_(0x0A)      /* (FAN_DRIVE_FAIL_BAND) The number of Tach counts used by the Fan Drive Fail detection circuitry Offset */
#define FAN_TACH_TGT_REG_OFST          _UINT32_(0x0C)      /* (FAN_TACH_TGT) The target tachometer value. Offset */
#define FAN_TACH_RD_REG_OFST           _UINT32_(0x0E)      /* (FAN_TACH_RD) [15:3] The current tachometer reading value. Offset */
#define FAN_DRIV_BASE_FREQ_REG_OFST    _UINT32_(0x10)      /* (FAN_DRIV_BASE_FREQ) [1:0] Determines the frequency range of the PWM fan driver Offset */
#define FAN_STS_REG_OFST               _UINT32_(0x11)      /* (FAN_STS) The bits in this register are routed to interrupts. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief FAN register API structure */
typedef struct
{  /* The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n          the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. */
  __IO  uint16_t                       FAN_SET;            /**< Offset: 0x00 (R/W  16) The Fan Driver Setting used to control the output of the Fan Driver. */
  __IO  uint16_t                       FAN_CFG;            /**< Offset: 0x02 (R/W  16) The Fan Configuration Register controls the general operation of the RPM based Fan Control Algorithm used by the fan driver. */
  __IO  uint8_t                        FAN_PWM_DIV;        /**< Offset: 0x04 (R/W  8) PWM Divide */
  __IO  uint8_t                        FAN_GAIN;           /**< Offset: 0x05 (R/W  8) Gain Register stores the gain terms used by the proportional and integral portions of the RPM based Fan Control Algorithm. */
  __IO  uint8_t                        FAN_SPIN_UP_CFG;    /**< Offset: 0x06 (R/W  8) The Fan Spin Up Configuration Register controls the settings of Spin Up Routine. */
  __IO  uint8_t                        FAN_STEP;           /**< Offset: 0x07 (R/W  8) FAN_STEP The Fan Step value represents the maximum step size the fan driver will take between update times */
  __IO  uint8_t                        FAN_MIN_DRIVE;      /**< Offset: 0x08 (R/W  8) the minimum drive setting for the RPM based Fan Control Algorithm. */
  __IO  uint8_t                        FAN_VAL_TACH_CNT;   /**< Offset: 0x09 (R/W  8) The maximum TACH Reading Register value to indicate that the fan is spinning properly. */
  __IO  uint16_t                       FAN_DRIVE_FAIL_BAND; /**< Offset: 0x0A (R/W  16) The number of Tach counts used by the Fan Drive Fail detection circuitry */
  __IO  uint16_t                       FAN_TACH_TGT;       /**< Offset: 0x0C (R/W  16) The target tachometer value. */
  __IO  uint16_t                       FAN_TACH_RD;        /**< Offset: 0x0E (R/W  16) [15:3] The current tachometer reading value. */
  __IO  uint8_t                        FAN_DRIV_BASE_FREQ; /**< Offset: 0x10 (R/W  8) [1:0] Determines the frequency range of the PWM fan driver */
  __IO  uint8_t                        FAN_STS;            /**< Offset: 0x11 (R/W  8) The bits in this register are routed to interrupts. */
} fan_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC1702Q_FAN_COMPONENT_H_ */
