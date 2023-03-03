/*
 * Component description for GPIO
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
#ifndef _CEC_GPIO_COMPONENT_H_
#define _CEC_GPIO_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR GPIO                                         */
/* ************************************************************************** */

/* -------- GPIO_CTRL0 : (GPIO Offset: 0x00) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL0_RESETVALUE                 _UINT32_(0x8040)                                     /*  (GPIO_CTRL0) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL0_PU_PD_Pos                  _UINT32_(0)                                          /* (GPIO_CTRL0) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL0_PU_PD_Msk                  (_UINT32_(0x3) << GPIO_CTRL0_PU_PD_Pos)              /* (GPIO_CTRL0) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL0_PU_PD(value)               (GPIO_CTRL0_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL0_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL0 register */
#define   GPIO_CTRL0_PU_PD_NONE_Val           _UINT32_(0x0)                                        /* (GPIO_CTRL0) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL0_PU_PD_UP_Val             _UINT32_(0x1)                                        /* (GPIO_CTRL0) Pull Up Enabled  */
#define   GPIO_CTRL0_PU_PD_DOWN_Val           _UINT32_(0x2)                                        /* (GPIO_CTRL0) Pull Down Enabled  */
#define   GPIO_CTRL0_PU_PD_REPEATER_Val       _UINT32_(0x3)                                        /* (GPIO_CTRL0) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL0_PU_PD_NONE                 (GPIO_CTRL0_PU_PD_NONE_Val << GPIO_CTRL0_PU_PD_Pos)  /* (GPIO_CTRL0) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL0_PU_PD_UP                   (GPIO_CTRL0_PU_PD_UP_Val << GPIO_CTRL0_PU_PD_Pos)    /* (GPIO_CTRL0) Pull Up Enabled Position  */
#define GPIO_CTRL0_PU_PD_DOWN                 (GPIO_CTRL0_PU_PD_DOWN_Val << GPIO_CTRL0_PU_PD_Pos)  /* (GPIO_CTRL0) Pull Down Enabled Position  */
#define GPIO_CTRL0_PU_PD_REPEATER             (GPIO_CTRL0_PU_PD_REPEATER_Val << GPIO_CTRL0_PU_PD_Pos) /* (GPIO_CTRL0) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL0_PWR_GATING_Pos             _UINT32_(2)                                          /* (GPIO_CTRL0) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL0_PWR_GATING_Msk             (_UINT32_(0x3) << GPIO_CTRL0_PWR_GATING_Pos)         /* (GPIO_CTRL0) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL0_PWR_GATING(value)          (GPIO_CTRL0_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL0_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL0 register */
#define GPIO_CTRL0_INTR_DET_Pos               _UINT32_(4)                                          /* (GPIO_CTRL0) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL0_INTR_DET_Msk               (_UINT32_(0x7) << GPIO_CTRL0_INTR_DET_Pos)           /* (GPIO_CTRL0) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL0_INTR_DET(value)            (GPIO_CTRL0_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL0_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL0 register */
#define GPIO_CTRL0_EDGE_EN_Pos                _UINT32_(7)                                          /* (GPIO_CTRL0) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL0_EDGE_EN_Msk                (_UINT32_(0x1) << GPIO_CTRL0_EDGE_EN_Pos)            /* (GPIO_CTRL0) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL0_EDGE_EN(value)             (GPIO_CTRL0_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL0_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL0 register */
#define GPIO_CTRL0_OUT_BUFF_TYPE_Pos          _UINT32_(8)                                          /* (GPIO_CTRL0) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL0_OUT_BUFF_TYPE_Msk          (_UINT32_(0x1) << GPIO_CTRL0_OUT_BUFF_TYPE_Pos)      /* (GPIO_CTRL0) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL0_OUT_BUFF_TYPE(value)       (GPIO_CTRL0_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL0_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL0 register */
#define GPIO_CTRL0_GPIO_DIR_Pos               _UINT32_(9)                                          /* (GPIO_CTRL0) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL0_GPIO_DIR_Msk               (_UINT32_(0x1) << GPIO_CTRL0_GPIO_DIR_Pos)           /* (GPIO_CTRL0) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL0_GPIO_DIR(value)            (GPIO_CTRL0_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL0_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL0 register */
#define GPIO_CTRL0_GPIO_OUT_SEL_Pos           _UINT32_(10)                                         /* (GPIO_CTRL0) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL0_GPIO_OUT_SEL_Msk           (_UINT32_(0x1) << GPIO_CTRL0_GPIO_OUT_SEL_Pos)       /* (GPIO_CTRL0) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL0_GPIO_OUT_SEL(value)        (GPIO_CTRL0_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL0_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL0 register */
#define GPIO_CTRL0_POL_Pos                    _UINT32_(11)                                         /* (GPIO_CTRL0) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL0_POL_Msk                    (_UINT32_(0x1) << GPIO_CTRL0_POL_Pos)                /* (GPIO_CTRL0) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL0_POL(value)                 (GPIO_CTRL0_POL_Msk & (_UINT32_(value) << GPIO_CTRL0_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL0 register */
#define GPIO_CTRL0_MUX_CTRL_Pos               _UINT32_(12)                                         /* (GPIO_CTRL0) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL0_MUX_CTRL_Msk               (_UINT32_(0x7) << GPIO_CTRL0_MUX_CTRL_Pos)           /* (GPIO_CTRL0) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL0_MUX_CTRL(value)            (GPIO_CTRL0_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL0_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL0 register */
#define   GPIO_CTRL0_MUX_CTRL_GPIO_Val        _UINT32_(0x0)                                        /* (GPIO_CTRL0) GPIO function selected  */
#define   GPIO_CTRL0_MUX_CTRL_FUNC1_Val       _UINT32_(0x1)                                        /* (GPIO_CTRL0) Signal function 1 selected  */
#define   GPIO_CTRL0_MUX_CTRL_FUNC2_Val       _UINT32_(0x2)                                        /* (GPIO_CTRL0) Signal function 2 selected  */
#define   GPIO_CTRL0_MUX_CTRL_FUNC3_Val       _UINT32_(0x3)                                        /* (GPIO_CTRL0) Signal function 3 selected  */
#define GPIO_CTRL0_MUX_CTRL_GPIO              (GPIO_CTRL0_MUX_CTRL_GPIO_Val << GPIO_CTRL0_MUX_CTRL_Pos) /* (GPIO_CTRL0) GPIO function selected Position  */
#define GPIO_CTRL0_MUX_CTRL_FUNC1             (GPIO_CTRL0_MUX_CTRL_FUNC1_Val << GPIO_CTRL0_MUX_CTRL_Pos) /* (GPIO_CTRL0) Signal function 1 selected Position  */
#define GPIO_CTRL0_MUX_CTRL_FUNC2             (GPIO_CTRL0_MUX_CTRL_FUNC2_Val << GPIO_CTRL0_MUX_CTRL_Pos) /* (GPIO_CTRL0) Signal function 2 selected Position  */
#define GPIO_CTRL0_MUX_CTRL_FUNC3             (GPIO_CTRL0_MUX_CTRL_FUNC3_Val << GPIO_CTRL0_MUX_CTRL_Pos) /* (GPIO_CTRL0) Signal function 3 selected Position  */
#define GPIO_CTRL0_INP_DIS_Pos                _UINT32_(15)                                         /* (GPIO_CTRL0) GPIO input disable Position */
#define GPIO_CTRL0_INP_DIS_Msk                (_UINT32_(0x1) << GPIO_CTRL0_INP_DIS_Pos)            /* (GPIO_CTRL0) GPIO input disable Mask */
#define GPIO_CTRL0_INP_DIS(value)             (GPIO_CTRL0_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL0_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL0 register */
#define GPIO_CTRL0_ALT_GPIO_DATA_Pos          _UINT32_(16)                                         /* (GPIO_CTRL0) GPIO Alternate Data Register. Position */
#define GPIO_CTRL0_ALT_GPIO_DATA_Msk          (_UINT32_(0x1) << GPIO_CTRL0_ALT_GPIO_DATA_Pos)      /* (GPIO_CTRL0) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL0_ALT_GPIO_DATA(value)       (GPIO_CTRL0_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL0_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL0 register */
#define GPIO_CTRL0_GPIO_INP_Pos               _UINT32_(24)                                         /* (GPIO_CTRL0) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL0_GPIO_INP_Msk               (_UINT32_(0x1) << GPIO_CTRL0_GPIO_INP_Pos)           /* (GPIO_CTRL0) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL0_GPIO_INP(value)            (GPIO_CTRL0_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL0_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL0 register */
#define GPIO_CTRL0_Msk                        _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL0) Register Mask  */


/* -------- GPIO_CTRL1 : (GPIO Offset: 0x20) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL1_RESETVALUE                 _UINT32_(0x8040)                                     /*  (GPIO_CTRL1) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL1_PU_PD_Pos                  _UINT32_(0)                                          /* (GPIO_CTRL1) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL1_PU_PD_Msk                  (_UINT32_(0x3) << GPIO_CTRL1_PU_PD_Pos)              /* (GPIO_CTRL1) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL1_PU_PD(value)               (GPIO_CTRL1_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL1_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL1 register */
#define   GPIO_CTRL1_PU_PD_NONE_Val           _UINT32_(0x0)                                        /* (GPIO_CTRL1) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL1_PU_PD_UP_Val             _UINT32_(0x1)                                        /* (GPIO_CTRL1) Pull Up Enabled  */
#define   GPIO_CTRL1_PU_PD_DOWN_Val           _UINT32_(0x2)                                        /* (GPIO_CTRL1) Pull Down Enabled  */
#define   GPIO_CTRL1_PU_PD_REPEATER_Val       _UINT32_(0x3)                                        /* (GPIO_CTRL1) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL1_PU_PD_NONE                 (GPIO_CTRL1_PU_PD_NONE_Val << GPIO_CTRL1_PU_PD_Pos)  /* (GPIO_CTRL1) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL1_PU_PD_UP                   (GPIO_CTRL1_PU_PD_UP_Val << GPIO_CTRL1_PU_PD_Pos)    /* (GPIO_CTRL1) Pull Up Enabled Position  */
#define GPIO_CTRL1_PU_PD_DOWN                 (GPIO_CTRL1_PU_PD_DOWN_Val << GPIO_CTRL1_PU_PD_Pos)  /* (GPIO_CTRL1) Pull Down Enabled Position  */
#define GPIO_CTRL1_PU_PD_REPEATER             (GPIO_CTRL1_PU_PD_REPEATER_Val << GPIO_CTRL1_PU_PD_Pos) /* (GPIO_CTRL1) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL1_PWR_GATING_Pos             _UINT32_(2)                                          /* (GPIO_CTRL1) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL1_PWR_GATING_Msk             (_UINT32_(0x3) << GPIO_CTRL1_PWR_GATING_Pos)         /* (GPIO_CTRL1) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL1_PWR_GATING(value)          (GPIO_CTRL1_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL1_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL1 register */
#define GPIO_CTRL1_INTR_DET_Pos               _UINT32_(4)                                          /* (GPIO_CTRL1) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL1_INTR_DET_Msk               (_UINT32_(0x7) << GPIO_CTRL1_INTR_DET_Pos)           /* (GPIO_CTRL1) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL1_INTR_DET(value)            (GPIO_CTRL1_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL1_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL1 register */
#define GPIO_CTRL1_EDGE_EN_Pos                _UINT32_(7)                                          /* (GPIO_CTRL1) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL1_EDGE_EN_Msk                (_UINT32_(0x1) << GPIO_CTRL1_EDGE_EN_Pos)            /* (GPIO_CTRL1) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL1_EDGE_EN(value)             (GPIO_CTRL1_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL1_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL1 register */
#define GPIO_CTRL1_OUT_BUFF_TYPE_Pos          _UINT32_(8)                                          /* (GPIO_CTRL1) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL1_OUT_BUFF_TYPE_Msk          (_UINT32_(0x1) << GPIO_CTRL1_OUT_BUFF_TYPE_Pos)      /* (GPIO_CTRL1) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL1_OUT_BUFF_TYPE(value)       (GPIO_CTRL1_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL1_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL1 register */
#define GPIO_CTRL1_GPIO_DIR_Pos               _UINT32_(9)                                          /* (GPIO_CTRL1) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL1_GPIO_DIR_Msk               (_UINT32_(0x1) << GPIO_CTRL1_GPIO_DIR_Pos)           /* (GPIO_CTRL1) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL1_GPIO_DIR(value)            (GPIO_CTRL1_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL1_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL1 register */
#define GPIO_CTRL1_GPIO_OUT_SEL_Pos           _UINT32_(10)                                         /* (GPIO_CTRL1) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL1_GPIO_OUT_SEL_Msk           (_UINT32_(0x1) << GPIO_CTRL1_GPIO_OUT_SEL_Pos)       /* (GPIO_CTRL1) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL1_GPIO_OUT_SEL(value)        (GPIO_CTRL1_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL1_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL1 register */
#define GPIO_CTRL1_POL_Pos                    _UINT32_(11)                                         /* (GPIO_CTRL1) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL1_POL_Msk                    (_UINT32_(0x1) << GPIO_CTRL1_POL_Pos)                /* (GPIO_CTRL1) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL1_POL(value)                 (GPIO_CTRL1_POL_Msk & (_UINT32_(value) << GPIO_CTRL1_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL1 register */
#define GPIO_CTRL1_MUX_CTRL_Pos               _UINT32_(12)                                         /* (GPIO_CTRL1) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL1_MUX_CTRL_Msk               (_UINT32_(0x7) << GPIO_CTRL1_MUX_CTRL_Pos)           /* (GPIO_CTRL1) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL1_MUX_CTRL(value)            (GPIO_CTRL1_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL1_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL1 register */
#define   GPIO_CTRL1_MUX_CTRL_GPIO_Val        _UINT32_(0x0)                                        /* (GPIO_CTRL1) GPIO function selected  */
#define   GPIO_CTRL1_MUX_CTRL_FUNC1_Val       _UINT32_(0x1)                                        /* (GPIO_CTRL1) Signal function 1 selected  */
#define   GPIO_CTRL1_MUX_CTRL_FUNC2_Val       _UINT32_(0x2)                                        /* (GPIO_CTRL1) Signal function 2 selected  */
#define   GPIO_CTRL1_MUX_CTRL_FUNC3_Val       _UINT32_(0x3)                                        /* (GPIO_CTRL1) Signal function 3 selected  */
#define GPIO_CTRL1_MUX_CTRL_GPIO              (GPIO_CTRL1_MUX_CTRL_GPIO_Val << GPIO_CTRL1_MUX_CTRL_Pos) /* (GPIO_CTRL1) GPIO function selected Position  */
#define GPIO_CTRL1_MUX_CTRL_FUNC1             (GPIO_CTRL1_MUX_CTRL_FUNC1_Val << GPIO_CTRL1_MUX_CTRL_Pos) /* (GPIO_CTRL1) Signal function 1 selected Position  */
#define GPIO_CTRL1_MUX_CTRL_FUNC2             (GPIO_CTRL1_MUX_CTRL_FUNC2_Val << GPIO_CTRL1_MUX_CTRL_Pos) /* (GPIO_CTRL1) Signal function 2 selected Position  */
#define GPIO_CTRL1_MUX_CTRL_FUNC3             (GPIO_CTRL1_MUX_CTRL_FUNC3_Val << GPIO_CTRL1_MUX_CTRL_Pos) /* (GPIO_CTRL1) Signal function 3 selected Position  */
#define GPIO_CTRL1_INP_DIS_Pos                _UINT32_(15)                                         /* (GPIO_CTRL1) GPIO input disable Position */
#define GPIO_CTRL1_INP_DIS_Msk                (_UINT32_(0x1) << GPIO_CTRL1_INP_DIS_Pos)            /* (GPIO_CTRL1) GPIO input disable Mask */
#define GPIO_CTRL1_INP_DIS(value)             (GPIO_CTRL1_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL1_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL1 register */
#define GPIO_CTRL1_ALT_GPIO_DATA_Pos          _UINT32_(16)                                         /* (GPIO_CTRL1) GPIO Alternate Data Register. Position */
#define GPIO_CTRL1_ALT_GPIO_DATA_Msk          (_UINT32_(0x1) << GPIO_CTRL1_ALT_GPIO_DATA_Pos)      /* (GPIO_CTRL1) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL1_ALT_GPIO_DATA(value)       (GPIO_CTRL1_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL1_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL1 register */
#define GPIO_CTRL1_GPIO_INP_Pos               _UINT32_(24)                                         /* (GPIO_CTRL1) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL1_GPIO_INP_Msk               (_UINT32_(0x1) << GPIO_CTRL1_GPIO_INP_Pos)           /* (GPIO_CTRL1) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL1_GPIO_INP(value)            (GPIO_CTRL1_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL1_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL1 register */
#define GPIO_CTRL1_Msk                        _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL1) Register Mask  */


/* -------- GPIO_CTRL2 : (GPIO Offset: 0x40) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL2_RESETVALUE                 _UINT32_(0x8040)                                     /*  (GPIO_CTRL2) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL2_PU_PD_Pos                  _UINT32_(0)                                          /* (GPIO_CTRL2) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL2_PU_PD_Msk                  (_UINT32_(0x3) << GPIO_CTRL2_PU_PD_Pos)              /* (GPIO_CTRL2) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL2_PU_PD(value)               (GPIO_CTRL2_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL2_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL2 register */
#define   GPIO_CTRL2_PU_PD_NONE_Val           _UINT32_(0x0)                                        /* (GPIO_CTRL2) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL2_PU_PD_UP_Val             _UINT32_(0x1)                                        /* (GPIO_CTRL2) Pull Up Enabled  */
#define   GPIO_CTRL2_PU_PD_DOWN_Val           _UINT32_(0x2)                                        /* (GPIO_CTRL2) Pull Down Enabled  */
#define   GPIO_CTRL2_PU_PD_REPEATER_Val       _UINT32_(0x3)                                        /* (GPIO_CTRL2) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL2_PU_PD_NONE                 (GPIO_CTRL2_PU_PD_NONE_Val << GPIO_CTRL2_PU_PD_Pos)  /* (GPIO_CTRL2) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL2_PU_PD_UP                   (GPIO_CTRL2_PU_PD_UP_Val << GPIO_CTRL2_PU_PD_Pos)    /* (GPIO_CTRL2) Pull Up Enabled Position  */
#define GPIO_CTRL2_PU_PD_DOWN                 (GPIO_CTRL2_PU_PD_DOWN_Val << GPIO_CTRL2_PU_PD_Pos)  /* (GPIO_CTRL2) Pull Down Enabled Position  */
#define GPIO_CTRL2_PU_PD_REPEATER             (GPIO_CTRL2_PU_PD_REPEATER_Val << GPIO_CTRL2_PU_PD_Pos) /* (GPIO_CTRL2) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL2_PWR_GATING_Pos             _UINT32_(2)                                          /* (GPIO_CTRL2) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL2_PWR_GATING_Msk             (_UINT32_(0x3) << GPIO_CTRL2_PWR_GATING_Pos)         /* (GPIO_CTRL2) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL2_PWR_GATING(value)          (GPIO_CTRL2_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL2_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL2 register */
#define GPIO_CTRL2_INTR_DET_Pos               _UINT32_(4)                                          /* (GPIO_CTRL2) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL2_INTR_DET_Msk               (_UINT32_(0x7) << GPIO_CTRL2_INTR_DET_Pos)           /* (GPIO_CTRL2) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL2_INTR_DET(value)            (GPIO_CTRL2_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL2_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL2 register */
#define GPIO_CTRL2_EDGE_EN_Pos                _UINT32_(7)                                          /* (GPIO_CTRL2) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL2_EDGE_EN_Msk                (_UINT32_(0x1) << GPIO_CTRL2_EDGE_EN_Pos)            /* (GPIO_CTRL2) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL2_EDGE_EN(value)             (GPIO_CTRL2_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL2_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL2 register */
#define GPIO_CTRL2_OUT_BUFF_TYPE_Pos          _UINT32_(8)                                          /* (GPIO_CTRL2) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL2_OUT_BUFF_TYPE_Msk          (_UINT32_(0x1) << GPIO_CTRL2_OUT_BUFF_TYPE_Pos)      /* (GPIO_CTRL2) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL2_OUT_BUFF_TYPE(value)       (GPIO_CTRL2_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL2_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL2 register */
#define GPIO_CTRL2_GPIO_DIR_Pos               _UINT32_(9)                                          /* (GPIO_CTRL2) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL2_GPIO_DIR_Msk               (_UINT32_(0x1) << GPIO_CTRL2_GPIO_DIR_Pos)           /* (GPIO_CTRL2) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL2_GPIO_DIR(value)            (GPIO_CTRL2_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL2_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL2 register */
#define GPIO_CTRL2_GPIO_OUT_SEL_Pos           _UINT32_(10)                                         /* (GPIO_CTRL2) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL2_GPIO_OUT_SEL_Msk           (_UINT32_(0x1) << GPIO_CTRL2_GPIO_OUT_SEL_Pos)       /* (GPIO_CTRL2) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL2_GPIO_OUT_SEL(value)        (GPIO_CTRL2_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL2_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL2 register */
#define GPIO_CTRL2_POL_Pos                    _UINT32_(11)                                         /* (GPIO_CTRL2) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL2_POL_Msk                    (_UINT32_(0x1) << GPIO_CTRL2_POL_Pos)                /* (GPIO_CTRL2) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL2_POL(value)                 (GPIO_CTRL2_POL_Msk & (_UINT32_(value) << GPIO_CTRL2_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL2 register */
#define GPIO_CTRL2_MUX_CTRL_Pos               _UINT32_(12)                                         /* (GPIO_CTRL2) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL2_MUX_CTRL_Msk               (_UINT32_(0x7) << GPIO_CTRL2_MUX_CTRL_Pos)           /* (GPIO_CTRL2) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL2_MUX_CTRL(value)            (GPIO_CTRL2_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL2 register */
#define   GPIO_CTRL2_MUX_CTRL_GPIO_Val        _UINT32_(0x0)                                        /* (GPIO_CTRL2) GPIO function selected  */
#define   GPIO_CTRL2_MUX_CTRL_FUNC1_Val       _UINT32_(0x1)                                        /* (GPIO_CTRL2) Signal function 1 selected  */
#define   GPIO_CTRL2_MUX_CTRL_FUNC2_Val       _UINT32_(0x2)                                        /* (GPIO_CTRL2) Signal function 2 selected  */
#define   GPIO_CTRL2_MUX_CTRL_FUNC3_Val       _UINT32_(0x3)                                        /* (GPIO_CTRL2) Signal function 3 selected  */
#define GPIO_CTRL2_MUX_CTRL_GPIO              (GPIO_CTRL2_MUX_CTRL_GPIO_Val << GPIO_CTRL2_MUX_CTRL_Pos) /* (GPIO_CTRL2) GPIO function selected Position  */
#define GPIO_CTRL2_MUX_CTRL_FUNC1             (GPIO_CTRL2_MUX_CTRL_FUNC1_Val << GPIO_CTRL2_MUX_CTRL_Pos) /* (GPIO_CTRL2) Signal function 1 selected Position  */
#define GPIO_CTRL2_MUX_CTRL_FUNC2             (GPIO_CTRL2_MUX_CTRL_FUNC2_Val << GPIO_CTRL2_MUX_CTRL_Pos) /* (GPIO_CTRL2) Signal function 2 selected Position  */
#define GPIO_CTRL2_MUX_CTRL_FUNC3             (GPIO_CTRL2_MUX_CTRL_FUNC3_Val << GPIO_CTRL2_MUX_CTRL_Pos) /* (GPIO_CTRL2) Signal function 3 selected Position  */
#define GPIO_CTRL2_INP_DIS_Pos                _UINT32_(15)                                         /* (GPIO_CTRL2) GPIO input disable Position */
#define GPIO_CTRL2_INP_DIS_Msk                (_UINT32_(0x1) << GPIO_CTRL2_INP_DIS_Pos)            /* (GPIO_CTRL2) GPIO input disable Mask */
#define GPIO_CTRL2_INP_DIS(value)             (GPIO_CTRL2_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL2_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL2 register */
#define GPIO_CTRL2_ALT_GPIO_DATA_Pos          _UINT32_(16)                                         /* (GPIO_CTRL2) GPIO Alternate Data Register. Position */
#define GPIO_CTRL2_ALT_GPIO_DATA_Msk          (_UINT32_(0x1) << GPIO_CTRL2_ALT_GPIO_DATA_Pos)      /* (GPIO_CTRL2) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL2_ALT_GPIO_DATA(value)       (GPIO_CTRL2_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL2_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL2 register */
#define GPIO_CTRL2_GPIO_INP_Pos               _UINT32_(24)                                         /* (GPIO_CTRL2) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL2_GPIO_INP_Msk               (_UINT32_(0x1) << GPIO_CTRL2_GPIO_INP_Pos)           /* (GPIO_CTRL2) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL2_GPIO_INP(value)            (GPIO_CTRL2_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL2_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL2 register */
#define GPIO_CTRL2_Msk                        _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL2) Register Mask  */


/* -------- GPIO_CTRL3 : (GPIO Offset: 0x60) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL3_RESETVALUE                 _UINT32_(0x8040)                                     /*  (GPIO_CTRL3) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL3_PU_PD_Pos                  _UINT32_(0)                                          /* (GPIO_CTRL3) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL3_PU_PD_Msk                  (_UINT32_(0x3) << GPIO_CTRL3_PU_PD_Pos)              /* (GPIO_CTRL3) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL3_PU_PD(value)               (GPIO_CTRL3_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL3_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL3 register */
#define   GPIO_CTRL3_PU_PD_NONE_Val           _UINT32_(0x0)                                        /* (GPIO_CTRL3) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL3_PU_PD_UP_Val             _UINT32_(0x1)                                        /* (GPIO_CTRL3) Pull Up Enabled  */
#define   GPIO_CTRL3_PU_PD_DOWN_Val           _UINT32_(0x2)                                        /* (GPIO_CTRL3) Pull Down Enabled  */
#define   GPIO_CTRL3_PU_PD_REPEATER_Val       _UINT32_(0x3)                                        /* (GPIO_CTRL3) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL3_PU_PD_NONE                 (GPIO_CTRL3_PU_PD_NONE_Val << GPIO_CTRL3_PU_PD_Pos)  /* (GPIO_CTRL3) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL3_PU_PD_UP                   (GPIO_CTRL3_PU_PD_UP_Val << GPIO_CTRL3_PU_PD_Pos)    /* (GPIO_CTRL3) Pull Up Enabled Position  */
#define GPIO_CTRL3_PU_PD_DOWN                 (GPIO_CTRL3_PU_PD_DOWN_Val << GPIO_CTRL3_PU_PD_Pos)  /* (GPIO_CTRL3) Pull Down Enabled Position  */
#define GPIO_CTRL3_PU_PD_REPEATER             (GPIO_CTRL3_PU_PD_REPEATER_Val << GPIO_CTRL3_PU_PD_Pos) /* (GPIO_CTRL3) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL3_PWR_GATING_Pos             _UINT32_(2)                                          /* (GPIO_CTRL3) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL3_PWR_GATING_Msk             (_UINT32_(0x3) << GPIO_CTRL3_PWR_GATING_Pos)         /* (GPIO_CTRL3) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL3_PWR_GATING(value)          (GPIO_CTRL3_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL3_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL3 register */
#define GPIO_CTRL3_INTR_DET_Pos               _UINT32_(4)                                          /* (GPIO_CTRL3) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL3_INTR_DET_Msk               (_UINT32_(0x7) << GPIO_CTRL3_INTR_DET_Pos)           /* (GPIO_CTRL3) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL3_INTR_DET(value)            (GPIO_CTRL3_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL3_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL3 register */
#define GPIO_CTRL3_EDGE_EN_Pos                _UINT32_(7)                                          /* (GPIO_CTRL3) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL3_EDGE_EN_Msk                (_UINT32_(0x1) << GPIO_CTRL3_EDGE_EN_Pos)            /* (GPIO_CTRL3) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL3_EDGE_EN(value)             (GPIO_CTRL3_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL3_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL3 register */
#define GPIO_CTRL3_OUT_BUFF_TYPE_Pos          _UINT32_(8)                                          /* (GPIO_CTRL3) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL3_OUT_BUFF_TYPE_Msk          (_UINT32_(0x1) << GPIO_CTRL3_OUT_BUFF_TYPE_Pos)      /* (GPIO_CTRL3) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL3_OUT_BUFF_TYPE(value)       (GPIO_CTRL3_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL3_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL3 register */
#define GPIO_CTRL3_GPIO_DIR_Pos               _UINT32_(9)                                          /* (GPIO_CTRL3) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL3_GPIO_DIR_Msk               (_UINT32_(0x1) << GPIO_CTRL3_GPIO_DIR_Pos)           /* (GPIO_CTRL3) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL3_GPIO_DIR(value)            (GPIO_CTRL3_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL3_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL3 register */
#define GPIO_CTRL3_GPIO_OUT_SEL_Pos           _UINT32_(10)                                         /* (GPIO_CTRL3) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL3_GPIO_OUT_SEL_Msk           (_UINT32_(0x1) << GPIO_CTRL3_GPIO_OUT_SEL_Pos)       /* (GPIO_CTRL3) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL3_GPIO_OUT_SEL(value)        (GPIO_CTRL3_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL3_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL3 register */
#define GPIO_CTRL3_POL_Pos                    _UINT32_(11)                                         /* (GPIO_CTRL3) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL3_POL_Msk                    (_UINT32_(0x1) << GPIO_CTRL3_POL_Pos)                /* (GPIO_CTRL3) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL3_POL(value)                 (GPIO_CTRL3_POL_Msk & (_UINT32_(value) << GPIO_CTRL3_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL3 register */
#define GPIO_CTRL3_MUX_CTRL_Pos               _UINT32_(12)                                         /* (GPIO_CTRL3) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL3_MUX_CTRL_Msk               (_UINT32_(0x7) << GPIO_CTRL3_MUX_CTRL_Pos)           /* (GPIO_CTRL3) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL3_MUX_CTRL(value)            (GPIO_CTRL3_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL3_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL3 register */
#define   GPIO_CTRL3_MUX_CTRL_GPIO_Val        _UINT32_(0x0)                                        /* (GPIO_CTRL3) GPIO function selected  */
#define   GPIO_CTRL3_MUX_CTRL_FUNC1_Val       _UINT32_(0x1)                                        /* (GPIO_CTRL3) Signal function 1 selected  */
#define   GPIO_CTRL3_MUX_CTRL_FUNC2_Val       _UINT32_(0x2)                                        /* (GPIO_CTRL3) Signal function 2 selected  */
#define   GPIO_CTRL3_MUX_CTRL_FUNC3_Val       _UINT32_(0x3)                                        /* (GPIO_CTRL3) Signal function 3 selected  */
#define GPIO_CTRL3_MUX_CTRL_GPIO              (GPIO_CTRL3_MUX_CTRL_GPIO_Val << GPIO_CTRL3_MUX_CTRL_Pos) /* (GPIO_CTRL3) GPIO function selected Position  */
#define GPIO_CTRL3_MUX_CTRL_FUNC1             (GPIO_CTRL3_MUX_CTRL_FUNC1_Val << GPIO_CTRL3_MUX_CTRL_Pos) /* (GPIO_CTRL3) Signal function 1 selected Position  */
#define GPIO_CTRL3_MUX_CTRL_FUNC2             (GPIO_CTRL3_MUX_CTRL_FUNC2_Val << GPIO_CTRL3_MUX_CTRL_Pos) /* (GPIO_CTRL3) Signal function 2 selected Position  */
#define GPIO_CTRL3_MUX_CTRL_FUNC3             (GPIO_CTRL3_MUX_CTRL_FUNC3_Val << GPIO_CTRL3_MUX_CTRL_Pos) /* (GPIO_CTRL3) Signal function 3 selected Position  */
#define GPIO_CTRL3_INP_DIS_Pos                _UINT32_(15)                                         /* (GPIO_CTRL3) GPIO input disable Position */
#define GPIO_CTRL3_INP_DIS_Msk                (_UINT32_(0x1) << GPIO_CTRL3_INP_DIS_Pos)            /* (GPIO_CTRL3) GPIO input disable Mask */
#define GPIO_CTRL3_INP_DIS(value)             (GPIO_CTRL3_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL3_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL3 register */
#define GPIO_CTRL3_ALT_GPIO_DATA_Pos          _UINT32_(16)                                         /* (GPIO_CTRL3) GPIO Alternate Data Register. Position */
#define GPIO_CTRL3_ALT_GPIO_DATA_Msk          (_UINT32_(0x1) << GPIO_CTRL3_ALT_GPIO_DATA_Pos)      /* (GPIO_CTRL3) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL3_ALT_GPIO_DATA(value)       (GPIO_CTRL3_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL3_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL3 register */
#define GPIO_CTRL3_GPIO_INP_Pos               _UINT32_(24)                                         /* (GPIO_CTRL3) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL3_GPIO_INP_Msk               (_UINT32_(0x1) << GPIO_CTRL3_GPIO_INP_Pos)           /* (GPIO_CTRL3) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL3_GPIO_INP(value)            (GPIO_CTRL3_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL3_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL3 register */
#define GPIO_CTRL3_Msk                        _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL3) Register Mask  */


/* -------- GPIO_CTRL4 : (GPIO Offset: 0x80) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL4_RESETVALUE                 _UINT32_(0x8040)                                     /*  (GPIO_CTRL4) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL4_PU_PD_Pos                  _UINT32_(0)                                          /* (GPIO_CTRL4) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL4_PU_PD_Msk                  (_UINT32_(0x3) << GPIO_CTRL4_PU_PD_Pos)              /* (GPIO_CTRL4) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL4_PU_PD(value)               (GPIO_CTRL4_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL4_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL4 register */
#define   GPIO_CTRL4_PU_PD_NONE_Val           _UINT32_(0x0)                                        /* (GPIO_CTRL4) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL4_PU_PD_UP_Val             _UINT32_(0x1)                                        /* (GPIO_CTRL4) Pull Up Enabled  */
#define   GPIO_CTRL4_PU_PD_DOWN_Val           _UINT32_(0x2)                                        /* (GPIO_CTRL4) Pull Down Enabled  */
#define   GPIO_CTRL4_PU_PD_REPEATER_Val       _UINT32_(0x3)                                        /* (GPIO_CTRL4) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL4_PU_PD_NONE                 (GPIO_CTRL4_PU_PD_NONE_Val << GPIO_CTRL4_PU_PD_Pos)  /* (GPIO_CTRL4) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL4_PU_PD_UP                   (GPIO_CTRL4_PU_PD_UP_Val << GPIO_CTRL4_PU_PD_Pos)    /* (GPIO_CTRL4) Pull Up Enabled Position  */
#define GPIO_CTRL4_PU_PD_DOWN                 (GPIO_CTRL4_PU_PD_DOWN_Val << GPIO_CTRL4_PU_PD_Pos)  /* (GPIO_CTRL4) Pull Down Enabled Position  */
#define GPIO_CTRL4_PU_PD_REPEATER             (GPIO_CTRL4_PU_PD_REPEATER_Val << GPIO_CTRL4_PU_PD_Pos) /* (GPIO_CTRL4) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL4_PWR_GATING_Pos             _UINT32_(2)                                          /* (GPIO_CTRL4) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL4_PWR_GATING_Msk             (_UINT32_(0x3) << GPIO_CTRL4_PWR_GATING_Pos)         /* (GPIO_CTRL4) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL4_PWR_GATING(value)          (GPIO_CTRL4_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL4_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL4 register */
#define GPIO_CTRL4_INTR_DET_Pos               _UINT32_(4)                                          /* (GPIO_CTRL4) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL4_INTR_DET_Msk               (_UINT32_(0x7) << GPIO_CTRL4_INTR_DET_Pos)           /* (GPIO_CTRL4) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL4_INTR_DET(value)            (GPIO_CTRL4_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL4_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL4 register */
#define GPIO_CTRL4_EDGE_EN_Pos                _UINT32_(7)                                          /* (GPIO_CTRL4) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL4_EDGE_EN_Msk                (_UINT32_(0x1) << GPIO_CTRL4_EDGE_EN_Pos)            /* (GPIO_CTRL4) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL4_EDGE_EN(value)             (GPIO_CTRL4_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL4_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL4 register */
#define GPIO_CTRL4_OUT_BUFF_TYPE_Pos          _UINT32_(8)                                          /* (GPIO_CTRL4) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL4_OUT_BUFF_TYPE_Msk          (_UINT32_(0x1) << GPIO_CTRL4_OUT_BUFF_TYPE_Pos)      /* (GPIO_CTRL4) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL4_OUT_BUFF_TYPE(value)       (GPIO_CTRL4_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL4_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL4 register */
#define GPIO_CTRL4_GPIO_DIR_Pos               _UINT32_(9)                                          /* (GPIO_CTRL4) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL4_GPIO_DIR_Msk               (_UINT32_(0x1) << GPIO_CTRL4_GPIO_DIR_Pos)           /* (GPIO_CTRL4) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL4_GPIO_DIR(value)            (GPIO_CTRL4_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL4_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL4 register */
#define GPIO_CTRL4_GPIO_OUT_SEL_Pos           _UINT32_(10)                                         /* (GPIO_CTRL4) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL4_GPIO_OUT_SEL_Msk           (_UINT32_(0x1) << GPIO_CTRL4_GPIO_OUT_SEL_Pos)       /* (GPIO_CTRL4) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL4_GPIO_OUT_SEL(value)        (GPIO_CTRL4_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL4_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL4 register */
#define GPIO_CTRL4_POL_Pos                    _UINT32_(11)                                         /* (GPIO_CTRL4) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL4_POL_Msk                    (_UINT32_(0x1) << GPIO_CTRL4_POL_Pos)                /* (GPIO_CTRL4) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL4_POL(value)                 (GPIO_CTRL4_POL_Msk & (_UINT32_(value) << GPIO_CTRL4_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL4 register */
#define GPIO_CTRL4_MUX_CTRL_Pos               _UINT32_(12)                                         /* (GPIO_CTRL4) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL4_MUX_CTRL_Msk               (_UINT32_(0x7) << GPIO_CTRL4_MUX_CTRL_Pos)           /* (GPIO_CTRL4) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL4_MUX_CTRL(value)            (GPIO_CTRL4_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL4_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL4 register */
#define   GPIO_CTRL4_MUX_CTRL_GPIO_Val        _UINT32_(0x0)                                        /* (GPIO_CTRL4) GPIO function selected  */
#define   GPIO_CTRL4_MUX_CTRL_FUNC1_Val       _UINT32_(0x1)                                        /* (GPIO_CTRL4) Signal function 1 selected  */
#define   GPIO_CTRL4_MUX_CTRL_FUNC2_Val       _UINT32_(0x2)                                        /* (GPIO_CTRL4) Signal function 2 selected  */
#define   GPIO_CTRL4_MUX_CTRL_FUNC3_Val       _UINT32_(0x3)                                        /* (GPIO_CTRL4) Signal function 3 selected  */
#define GPIO_CTRL4_MUX_CTRL_GPIO              (GPIO_CTRL4_MUX_CTRL_GPIO_Val << GPIO_CTRL4_MUX_CTRL_Pos) /* (GPIO_CTRL4) GPIO function selected Position  */
#define GPIO_CTRL4_MUX_CTRL_FUNC1             (GPIO_CTRL4_MUX_CTRL_FUNC1_Val << GPIO_CTRL4_MUX_CTRL_Pos) /* (GPIO_CTRL4) Signal function 1 selected Position  */
#define GPIO_CTRL4_MUX_CTRL_FUNC2             (GPIO_CTRL4_MUX_CTRL_FUNC2_Val << GPIO_CTRL4_MUX_CTRL_Pos) /* (GPIO_CTRL4) Signal function 2 selected Position  */
#define GPIO_CTRL4_MUX_CTRL_FUNC3             (GPIO_CTRL4_MUX_CTRL_FUNC3_Val << GPIO_CTRL4_MUX_CTRL_Pos) /* (GPIO_CTRL4) Signal function 3 selected Position  */
#define GPIO_CTRL4_INP_DIS_Pos                _UINT32_(15)                                         /* (GPIO_CTRL4) GPIO input disable Position */
#define GPIO_CTRL4_INP_DIS_Msk                (_UINT32_(0x1) << GPIO_CTRL4_INP_DIS_Pos)            /* (GPIO_CTRL4) GPIO input disable Mask */
#define GPIO_CTRL4_INP_DIS(value)             (GPIO_CTRL4_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL4_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL4 register */
#define GPIO_CTRL4_ALT_GPIO_DATA_Pos          _UINT32_(16)                                         /* (GPIO_CTRL4) GPIO Alternate Data Register. Position */
#define GPIO_CTRL4_ALT_GPIO_DATA_Msk          (_UINT32_(0x1) << GPIO_CTRL4_ALT_GPIO_DATA_Pos)      /* (GPIO_CTRL4) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL4_ALT_GPIO_DATA(value)       (GPIO_CTRL4_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL4_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL4 register */
#define GPIO_CTRL4_GPIO_INP_Pos               _UINT32_(24)                                         /* (GPIO_CTRL4) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL4_GPIO_INP_Msk               (_UINT32_(0x1) << GPIO_CTRL4_GPIO_INP_Pos)           /* (GPIO_CTRL4) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL4_GPIO_INP(value)            (GPIO_CTRL4_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL4_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL4 register */
#define GPIO_CTRL4_Msk                        _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL4) Register Mask  */


/* -------- GPIO_CTRL5 : (GPIO Offset: 0xA0) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL5_RESETVALUE                 _UINT32_(0x8040)                                     /*  (GPIO_CTRL5) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL5_PU_PD_Pos                  _UINT32_(0)                                          /* (GPIO_CTRL5) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL5_PU_PD_Msk                  (_UINT32_(0x3) << GPIO_CTRL5_PU_PD_Pos)              /* (GPIO_CTRL5) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL5_PU_PD(value)               (GPIO_CTRL5_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL5_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL5 register */
#define   GPIO_CTRL5_PU_PD_NONE_Val           _UINT32_(0x0)                                        /* (GPIO_CTRL5) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL5_PU_PD_UP_Val             _UINT32_(0x1)                                        /* (GPIO_CTRL5) Pull Up Enabled  */
#define   GPIO_CTRL5_PU_PD_DOWN_Val           _UINT32_(0x2)                                        /* (GPIO_CTRL5) Pull Down Enabled  */
#define   GPIO_CTRL5_PU_PD_REPEATER_Val       _UINT32_(0x3)                                        /* (GPIO_CTRL5) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL5_PU_PD_NONE                 (GPIO_CTRL5_PU_PD_NONE_Val << GPIO_CTRL5_PU_PD_Pos)  /* (GPIO_CTRL5) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL5_PU_PD_UP                   (GPIO_CTRL5_PU_PD_UP_Val << GPIO_CTRL5_PU_PD_Pos)    /* (GPIO_CTRL5) Pull Up Enabled Position  */
#define GPIO_CTRL5_PU_PD_DOWN                 (GPIO_CTRL5_PU_PD_DOWN_Val << GPIO_CTRL5_PU_PD_Pos)  /* (GPIO_CTRL5) Pull Down Enabled Position  */
#define GPIO_CTRL5_PU_PD_REPEATER             (GPIO_CTRL5_PU_PD_REPEATER_Val << GPIO_CTRL5_PU_PD_Pos) /* (GPIO_CTRL5) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL5_PWR_GATING_Pos             _UINT32_(2)                                          /* (GPIO_CTRL5) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL5_PWR_GATING_Msk             (_UINT32_(0x3) << GPIO_CTRL5_PWR_GATING_Pos)         /* (GPIO_CTRL5) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL5_PWR_GATING(value)          (GPIO_CTRL5_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL5_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL5 register */
#define GPIO_CTRL5_INTR_DET_Pos               _UINT32_(4)                                          /* (GPIO_CTRL5) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL5_INTR_DET_Msk               (_UINT32_(0x7) << GPIO_CTRL5_INTR_DET_Pos)           /* (GPIO_CTRL5) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL5_INTR_DET(value)            (GPIO_CTRL5_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL5_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL5 register */
#define GPIO_CTRL5_EDGE_EN_Pos                _UINT32_(7)                                          /* (GPIO_CTRL5) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL5_EDGE_EN_Msk                (_UINT32_(0x1) << GPIO_CTRL5_EDGE_EN_Pos)            /* (GPIO_CTRL5) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL5_EDGE_EN(value)             (GPIO_CTRL5_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL5_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL5 register */
#define GPIO_CTRL5_OUT_BUFF_TYPE_Pos          _UINT32_(8)                                          /* (GPIO_CTRL5) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL5_OUT_BUFF_TYPE_Msk          (_UINT32_(0x1) << GPIO_CTRL5_OUT_BUFF_TYPE_Pos)      /* (GPIO_CTRL5) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL5_OUT_BUFF_TYPE(value)       (GPIO_CTRL5_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL5_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL5 register */
#define GPIO_CTRL5_GPIO_DIR_Pos               _UINT32_(9)                                          /* (GPIO_CTRL5) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL5_GPIO_DIR_Msk               (_UINT32_(0x1) << GPIO_CTRL5_GPIO_DIR_Pos)           /* (GPIO_CTRL5) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL5_GPIO_DIR(value)            (GPIO_CTRL5_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL5_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL5 register */
#define GPIO_CTRL5_GPIO_OUT_SEL_Pos           _UINT32_(10)                                         /* (GPIO_CTRL5) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL5_GPIO_OUT_SEL_Msk           (_UINT32_(0x1) << GPIO_CTRL5_GPIO_OUT_SEL_Pos)       /* (GPIO_CTRL5) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL5_GPIO_OUT_SEL(value)        (GPIO_CTRL5_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL5_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL5 register */
#define GPIO_CTRL5_POL_Pos                    _UINT32_(11)                                         /* (GPIO_CTRL5) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL5_POL_Msk                    (_UINT32_(0x1) << GPIO_CTRL5_POL_Pos)                /* (GPIO_CTRL5) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL5_POL(value)                 (GPIO_CTRL5_POL_Msk & (_UINT32_(value) << GPIO_CTRL5_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL5 register */
#define GPIO_CTRL5_MUX_CTRL_Pos               _UINT32_(12)                                         /* (GPIO_CTRL5) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL5_MUX_CTRL_Msk               (_UINT32_(0x7) << GPIO_CTRL5_MUX_CTRL_Pos)           /* (GPIO_CTRL5) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL5_MUX_CTRL(value)            (GPIO_CTRL5_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL5_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL5 register */
#define   GPIO_CTRL5_MUX_CTRL_GPIO_Val        _UINT32_(0x0)                                        /* (GPIO_CTRL5) GPIO function selected  */
#define   GPIO_CTRL5_MUX_CTRL_FUNC1_Val       _UINT32_(0x1)                                        /* (GPIO_CTRL5) Signal function 1 selected  */
#define   GPIO_CTRL5_MUX_CTRL_FUNC2_Val       _UINT32_(0x2)                                        /* (GPIO_CTRL5) Signal function 2 selected  */
#define   GPIO_CTRL5_MUX_CTRL_FUNC3_Val       _UINT32_(0x3)                                        /* (GPIO_CTRL5) Signal function 3 selected  */
#define GPIO_CTRL5_MUX_CTRL_GPIO              (GPIO_CTRL5_MUX_CTRL_GPIO_Val << GPIO_CTRL5_MUX_CTRL_Pos) /* (GPIO_CTRL5) GPIO function selected Position  */
#define GPIO_CTRL5_MUX_CTRL_FUNC1             (GPIO_CTRL5_MUX_CTRL_FUNC1_Val << GPIO_CTRL5_MUX_CTRL_Pos) /* (GPIO_CTRL5) Signal function 1 selected Position  */
#define GPIO_CTRL5_MUX_CTRL_FUNC2             (GPIO_CTRL5_MUX_CTRL_FUNC2_Val << GPIO_CTRL5_MUX_CTRL_Pos) /* (GPIO_CTRL5) Signal function 2 selected Position  */
#define GPIO_CTRL5_MUX_CTRL_FUNC3             (GPIO_CTRL5_MUX_CTRL_FUNC3_Val << GPIO_CTRL5_MUX_CTRL_Pos) /* (GPIO_CTRL5) Signal function 3 selected Position  */
#define GPIO_CTRL5_INP_DIS_Pos                _UINT32_(15)                                         /* (GPIO_CTRL5) GPIO input disable Position */
#define GPIO_CTRL5_INP_DIS_Msk                (_UINT32_(0x1) << GPIO_CTRL5_INP_DIS_Pos)            /* (GPIO_CTRL5) GPIO input disable Mask */
#define GPIO_CTRL5_INP_DIS(value)             (GPIO_CTRL5_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL5_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL5 register */
#define GPIO_CTRL5_ALT_GPIO_DATA_Pos          _UINT32_(16)                                         /* (GPIO_CTRL5) GPIO Alternate Data Register. Position */
#define GPIO_CTRL5_ALT_GPIO_DATA_Msk          (_UINT32_(0x1) << GPIO_CTRL5_ALT_GPIO_DATA_Pos)      /* (GPIO_CTRL5) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL5_ALT_GPIO_DATA(value)       (GPIO_CTRL5_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL5_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL5 register */
#define GPIO_CTRL5_GPIO_INP_Pos               _UINT32_(24)                                         /* (GPIO_CTRL5) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL5_GPIO_INP_Msk               (_UINT32_(0x1) << GPIO_CTRL5_GPIO_INP_Pos)           /* (GPIO_CTRL5) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL5_GPIO_INP(value)            (GPIO_CTRL5_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL5_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL5 register */
#define GPIO_CTRL5_Msk                        _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL5) Register Mask  */


/* -------- GPIO_CTRL6 : (GPIO Offset: 0xC0) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL6_RESETVALUE                 _UINT32_(0x8040)                                     /*  (GPIO_CTRL6) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL6_PU_PD_Pos                  _UINT32_(0)                                          /* (GPIO_CTRL6) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL6_PU_PD_Msk                  (_UINT32_(0x3) << GPIO_CTRL6_PU_PD_Pos)              /* (GPIO_CTRL6) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL6_PU_PD(value)               (GPIO_CTRL6_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL6_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL6 register */
#define   GPIO_CTRL6_PU_PD_NONE_Val           _UINT32_(0x0)                                        /* (GPIO_CTRL6) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL6_PU_PD_UP_Val             _UINT32_(0x1)                                        /* (GPIO_CTRL6) Pull Up Enabled  */
#define   GPIO_CTRL6_PU_PD_DOWN_Val           _UINT32_(0x2)                                        /* (GPIO_CTRL6) Pull Down Enabled  */
#define   GPIO_CTRL6_PU_PD_REPEATER_Val       _UINT32_(0x3)                                        /* (GPIO_CTRL6) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL6_PU_PD_NONE                 (GPIO_CTRL6_PU_PD_NONE_Val << GPIO_CTRL6_PU_PD_Pos)  /* (GPIO_CTRL6) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL6_PU_PD_UP                   (GPIO_CTRL6_PU_PD_UP_Val << GPIO_CTRL6_PU_PD_Pos)    /* (GPIO_CTRL6) Pull Up Enabled Position  */
#define GPIO_CTRL6_PU_PD_DOWN                 (GPIO_CTRL6_PU_PD_DOWN_Val << GPIO_CTRL6_PU_PD_Pos)  /* (GPIO_CTRL6) Pull Down Enabled Position  */
#define GPIO_CTRL6_PU_PD_REPEATER             (GPIO_CTRL6_PU_PD_REPEATER_Val << GPIO_CTRL6_PU_PD_Pos) /* (GPIO_CTRL6) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL6_PWR_GATING_Pos             _UINT32_(2)                                          /* (GPIO_CTRL6) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL6_PWR_GATING_Msk             (_UINT32_(0x3) << GPIO_CTRL6_PWR_GATING_Pos)         /* (GPIO_CTRL6) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL6_PWR_GATING(value)          (GPIO_CTRL6_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL6_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL6 register */
#define GPIO_CTRL6_INTR_DET_Pos               _UINT32_(4)                                          /* (GPIO_CTRL6) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL6_INTR_DET_Msk               (_UINT32_(0x7) << GPIO_CTRL6_INTR_DET_Pos)           /* (GPIO_CTRL6) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL6_INTR_DET(value)            (GPIO_CTRL6_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL6_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL6 register */
#define GPIO_CTRL6_EDGE_EN_Pos                _UINT32_(7)                                          /* (GPIO_CTRL6) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL6_EDGE_EN_Msk                (_UINT32_(0x1) << GPIO_CTRL6_EDGE_EN_Pos)            /* (GPIO_CTRL6) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL6_EDGE_EN(value)             (GPIO_CTRL6_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL6_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL6 register */
#define GPIO_CTRL6_OUT_BUFF_TYPE_Pos          _UINT32_(8)                                          /* (GPIO_CTRL6) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL6_OUT_BUFF_TYPE_Msk          (_UINT32_(0x1) << GPIO_CTRL6_OUT_BUFF_TYPE_Pos)      /* (GPIO_CTRL6) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL6_OUT_BUFF_TYPE(value)       (GPIO_CTRL6_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL6_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL6 register */
#define GPIO_CTRL6_GPIO_DIR_Pos               _UINT32_(9)                                          /* (GPIO_CTRL6) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL6_GPIO_DIR_Msk               (_UINT32_(0x1) << GPIO_CTRL6_GPIO_DIR_Pos)           /* (GPIO_CTRL6) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL6_GPIO_DIR(value)            (GPIO_CTRL6_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL6_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL6 register */
#define GPIO_CTRL6_GPIO_OUT_SEL_Pos           _UINT32_(10)                                         /* (GPIO_CTRL6) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL6_GPIO_OUT_SEL_Msk           (_UINT32_(0x1) << GPIO_CTRL6_GPIO_OUT_SEL_Pos)       /* (GPIO_CTRL6) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL6_GPIO_OUT_SEL(value)        (GPIO_CTRL6_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL6_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL6 register */
#define GPIO_CTRL6_POL_Pos                    _UINT32_(11)                                         /* (GPIO_CTRL6) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL6_POL_Msk                    (_UINT32_(0x1) << GPIO_CTRL6_POL_Pos)                /* (GPIO_CTRL6) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL6_POL(value)                 (GPIO_CTRL6_POL_Msk & (_UINT32_(value) << GPIO_CTRL6_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL6 register */
#define GPIO_CTRL6_MUX_CTRL_Pos               _UINT32_(12)                                         /* (GPIO_CTRL6) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL6_MUX_CTRL_Msk               (_UINT32_(0x7) << GPIO_CTRL6_MUX_CTRL_Pos)           /* (GPIO_CTRL6) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL6_MUX_CTRL(value)            (GPIO_CTRL6_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL6_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL6 register */
#define   GPIO_CTRL6_MUX_CTRL_GPIO_Val        _UINT32_(0x0)                                        /* (GPIO_CTRL6) GPIO function selected  */
#define   GPIO_CTRL6_MUX_CTRL_FUNC1_Val       _UINT32_(0x1)                                        /* (GPIO_CTRL6) Signal function 1 selected  */
#define   GPIO_CTRL6_MUX_CTRL_FUNC2_Val       _UINT32_(0x2)                                        /* (GPIO_CTRL6) Signal function 2 selected  */
#define   GPIO_CTRL6_MUX_CTRL_FUNC3_Val       _UINT32_(0x3)                                        /* (GPIO_CTRL6) Signal function 3 selected  */
#define GPIO_CTRL6_MUX_CTRL_GPIO              (GPIO_CTRL6_MUX_CTRL_GPIO_Val << GPIO_CTRL6_MUX_CTRL_Pos) /* (GPIO_CTRL6) GPIO function selected Position  */
#define GPIO_CTRL6_MUX_CTRL_FUNC1             (GPIO_CTRL6_MUX_CTRL_FUNC1_Val << GPIO_CTRL6_MUX_CTRL_Pos) /* (GPIO_CTRL6) Signal function 1 selected Position  */
#define GPIO_CTRL6_MUX_CTRL_FUNC2             (GPIO_CTRL6_MUX_CTRL_FUNC2_Val << GPIO_CTRL6_MUX_CTRL_Pos) /* (GPIO_CTRL6) Signal function 2 selected Position  */
#define GPIO_CTRL6_MUX_CTRL_FUNC3             (GPIO_CTRL6_MUX_CTRL_FUNC3_Val << GPIO_CTRL6_MUX_CTRL_Pos) /* (GPIO_CTRL6) Signal function 3 selected Position  */
#define GPIO_CTRL6_INP_DIS_Pos                _UINT32_(15)                                         /* (GPIO_CTRL6) GPIO input disable Position */
#define GPIO_CTRL6_INP_DIS_Msk                (_UINT32_(0x1) << GPIO_CTRL6_INP_DIS_Pos)            /* (GPIO_CTRL6) GPIO input disable Mask */
#define GPIO_CTRL6_INP_DIS(value)             (GPIO_CTRL6_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL6_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL6 register */
#define GPIO_CTRL6_ALT_GPIO_DATA_Pos          _UINT32_(16)                                         /* (GPIO_CTRL6) GPIO Alternate Data Register. Position */
#define GPIO_CTRL6_ALT_GPIO_DATA_Msk          (_UINT32_(0x1) << GPIO_CTRL6_ALT_GPIO_DATA_Pos)      /* (GPIO_CTRL6) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL6_ALT_GPIO_DATA(value)       (GPIO_CTRL6_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL6_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL6 register */
#define GPIO_CTRL6_GPIO_INP_Pos               _UINT32_(24)                                         /* (GPIO_CTRL6) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL6_GPIO_INP_Msk               (_UINT32_(0x1) << GPIO_CTRL6_GPIO_INP_Pos)           /* (GPIO_CTRL6) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL6_GPIO_INP(value)            (GPIO_CTRL6_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL6_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL6 register */
#define GPIO_CTRL6_Msk                        _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL6) Register Mask  */


/* -------- GPIO_CTRL7 : (GPIO Offset: 0xE0) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL7_RESETVALUE                 _UINT32_(0x8040)                                     /*  (GPIO_CTRL7) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL7_PU_PD_Pos                  _UINT32_(0)                                          /* (GPIO_CTRL7) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL7_PU_PD_Msk                  (_UINT32_(0x3) << GPIO_CTRL7_PU_PD_Pos)              /* (GPIO_CTRL7) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL7_PU_PD(value)               (GPIO_CTRL7_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL7_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL7 register */
#define   GPIO_CTRL7_PU_PD_NONE_Val           _UINT32_(0x0)                                        /* (GPIO_CTRL7) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL7_PU_PD_UP_Val             _UINT32_(0x1)                                        /* (GPIO_CTRL7) Pull Up Enabled  */
#define   GPIO_CTRL7_PU_PD_DOWN_Val           _UINT32_(0x2)                                        /* (GPIO_CTRL7) Pull Down Enabled  */
#define   GPIO_CTRL7_PU_PD_REPEATER_Val       _UINT32_(0x3)                                        /* (GPIO_CTRL7) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL7_PU_PD_NONE                 (GPIO_CTRL7_PU_PD_NONE_Val << GPIO_CTRL7_PU_PD_Pos)  /* (GPIO_CTRL7) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL7_PU_PD_UP                   (GPIO_CTRL7_PU_PD_UP_Val << GPIO_CTRL7_PU_PD_Pos)    /* (GPIO_CTRL7) Pull Up Enabled Position  */
#define GPIO_CTRL7_PU_PD_DOWN                 (GPIO_CTRL7_PU_PD_DOWN_Val << GPIO_CTRL7_PU_PD_Pos)  /* (GPIO_CTRL7) Pull Down Enabled Position  */
#define GPIO_CTRL7_PU_PD_REPEATER             (GPIO_CTRL7_PU_PD_REPEATER_Val << GPIO_CTRL7_PU_PD_Pos) /* (GPIO_CTRL7) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL7_PWR_GATING_Pos             _UINT32_(2)                                          /* (GPIO_CTRL7) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL7_PWR_GATING_Msk             (_UINT32_(0x3) << GPIO_CTRL7_PWR_GATING_Pos)         /* (GPIO_CTRL7) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL7_PWR_GATING(value)          (GPIO_CTRL7_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL7_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL7 register */
#define GPIO_CTRL7_INTR_DET_Pos               _UINT32_(4)                                          /* (GPIO_CTRL7) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL7_INTR_DET_Msk               (_UINT32_(0x7) << GPIO_CTRL7_INTR_DET_Pos)           /* (GPIO_CTRL7) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL7_INTR_DET(value)            (GPIO_CTRL7_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL7_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL7 register */
#define GPIO_CTRL7_EDGE_EN_Pos                _UINT32_(7)                                          /* (GPIO_CTRL7) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL7_EDGE_EN_Msk                (_UINT32_(0x1) << GPIO_CTRL7_EDGE_EN_Pos)            /* (GPIO_CTRL7) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL7_EDGE_EN(value)             (GPIO_CTRL7_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL7_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL7 register */
#define GPIO_CTRL7_OUT_BUFF_TYPE_Pos          _UINT32_(8)                                          /* (GPIO_CTRL7) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL7_OUT_BUFF_TYPE_Msk          (_UINT32_(0x1) << GPIO_CTRL7_OUT_BUFF_TYPE_Pos)      /* (GPIO_CTRL7) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL7_OUT_BUFF_TYPE(value)       (GPIO_CTRL7_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL7_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL7 register */
#define GPIO_CTRL7_GPIO_DIR_Pos               _UINT32_(9)                                          /* (GPIO_CTRL7) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL7_GPIO_DIR_Msk               (_UINT32_(0x1) << GPIO_CTRL7_GPIO_DIR_Pos)           /* (GPIO_CTRL7) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL7_GPIO_DIR(value)            (GPIO_CTRL7_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL7_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL7 register */
#define GPIO_CTRL7_GPIO_OUT_SEL_Pos           _UINT32_(10)                                         /* (GPIO_CTRL7) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL7_GPIO_OUT_SEL_Msk           (_UINT32_(0x1) << GPIO_CTRL7_GPIO_OUT_SEL_Pos)       /* (GPIO_CTRL7) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL7_GPIO_OUT_SEL(value)        (GPIO_CTRL7_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL7_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL7 register */
#define GPIO_CTRL7_POL_Pos                    _UINT32_(11)                                         /* (GPIO_CTRL7) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL7_POL_Msk                    (_UINT32_(0x1) << GPIO_CTRL7_POL_Pos)                /* (GPIO_CTRL7) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL7_POL(value)                 (GPIO_CTRL7_POL_Msk & (_UINT32_(value) << GPIO_CTRL7_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL7 register */
#define GPIO_CTRL7_MUX_CTRL_Pos               _UINT32_(12)                                         /* (GPIO_CTRL7) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL7_MUX_CTRL_Msk               (_UINT32_(0x7) << GPIO_CTRL7_MUX_CTRL_Pos)           /* (GPIO_CTRL7) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL7_MUX_CTRL(value)            (GPIO_CTRL7_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL7_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL7 register */
#define   GPIO_CTRL7_MUX_CTRL_GPIO_Val        _UINT32_(0x0)                                        /* (GPIO_CTRL7) GPIO function selected  */
#define   GPIO_CTRL7_MUX_CTRL_FUNC1_Val       _UINT32_(0x1)                                        /* (GPIO_CTRL7) Signal function 1 selected  */
#define   GPIO_CTRL7_MUX_CTRL_FUNC2_Val       _UINT32_(0x2)                                        /* (GPIO_CTRL7) Signal function 2 selected  */
#define   GPIO_CTRL7_MUX_CTRL_FUNC3_Val       _UINT32_(0x3)                                        /* (GPIO_CTRL7) Signal function 3 selected  */
#define GPIO_CTRL7_MUX_CTRL_GPIO              (GPIO_CTRL7_MUX_CTRL_GPIO_Val << GPIO_CTRL7_MUX_CTRL_Pos) /* (GPIO_CTRL7) GPIO function selected Position  */
#define GPIO_CTRL7_MUX_CTRL_FUNC1             (GPIO_CTRL7_MUX_CTRL_FUNC1_Val << GPIO_CTRL7_MUX_CTRL_Pos) /* (GPIO_CTRL7) Signal function 1 selected Position  */
#define GPIO_CTRL7_MUX_CTRL_FUNC2             (GPIO_CTRL7_MUX_CTRL_FUNC2_Val << GPIO_CTRL7_MUX_CTRL_Pos) /* (GPIO_CTRL7) Signal function 2 selected Position  */
#define GPIO_CTRL7_MUX_CTRL_FUNC3             (GPIO_CTRL7_MUX_CTRL_FUNC3_Val << GPIO_CTRL7_MUX_CTRL_Pos) /* (GPIO_CTRL7) Signal function 3 selected Position  */
#define GPIO_CTRL7_INP_DIS_Pos                _UINT32_(15)                                         /* (GPIO_CTRL7) GPIO input disable Position */
#define GPIO_CTRL7_INP_DIS_Msk                (_UINT32_(0x1) << GPIO_CTRL7_INP_DIS_Pos)            /* (GPIO_CTRL7) GPIO input disable Mask */
#define GPIO_CTRL7_INP_DIS(value)             (GPIO_CTRL7_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL7_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL7 register */
#define GPIO_CTRL7_ALT_GPIO_DATA_Pos          _UINT32_(16)                                         /* (GPIO_CTRL7) GPIO Alternate Data Register. Position */
#define GPIO_CTRL7_ALT_GPIO_DATA_Msk          (_UINT32_(0x1) << GPIO_CTRL7_ALT_GPIO_DATA_Pos)      /* (GPIO_CTRL7) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL7_ALT_GPIO_DATA(value)       (GPIO_CTRL7_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL7_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL7 register */
#define GPIO_CTRL7_GPIO_INP_Pos               _UINT32_(24)                                         /* (GPIO_CTRL7) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL7_GPIO_INP_Msk               (_UINT32_(0x1) << GPIO_CTRL7_GPIO_INP_Pos)           /* (GPIO_CTRL7) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL7_GPIO_INP(value)            (GPIO_CTRL7_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL7_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL7 register */
#define GPIO_CTRL7_Msk                        _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL7) Register Mask  */


/* -------- GPIO_CTRL10 : (GPIO Offset: 0x100) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL10_RESETVALUE                _UINT32_(0x8040)                                     /*  (GPIO_CTRL10) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL10_PU_PD_Pos                 _UINT32_(0)                                          /* (GPIO_CTRL10) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL10_PU_PD_Msk                 (_UINT32_(0x3) << GPIO_CTRL10_PU_PD_Pos)             /* (GPIO_CTRL10) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL10_PU_PD(value)              (GPIO_CTRL10_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL10_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL10 register */
#define   GPIO_CTRL10_PU_PD_NONE_Val          _UINT32_(0x0)                                        /* (GPIO_CTRL10) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL10_PU_PD_UP_Val            _UINT32_(0x1)                                        /* (GPIO_CTRL10) Pull Up Enabled  */
#define   GPIO_CTRL10_PU_PD_DOWN_Val          _UINT32_(0x2)                                        /* (GPIO_CTRL10) Pull Down Enabled  */
#define   GPIO_CTRL10_PU_PD_REPEATER_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL10) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL10_PU_PD_NONE                (GPIO_CTRL10_PU_PD_NONE_Val << GPIO_CTRL10_PU_PD_Pos) /* (GPIO_CTRL10) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL10_PU_PD_UP                  (GPIO_CTRL10_PU_PD_UP_Val << GPIO_CTRL10_PU_PD_Pos)  /* (GPIO_CTRL10) Pull Up Enabled Position  */
#define GPIO_CTRL10_PU_PD_DOWN                (GPIO_CTRL10_PU_PD_DOWN_Val << GPIO_CTRL10_PU_PD_Pos) /* (GPIO_CTRL10) Pull Down Enabled Position  */
#define GPIO_CTRL10_PU_PD_REPEATER            (GPIO_CTRL10_PU_PD_REPEATER_Val << GPIO_CTRL10_PU_PD_Pos) /* (GPIO_CTRL10) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL10_PWR_GATING_Pos            _UINT32_(2)                                          /* (GPIO_CTRL10) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL10_PWR_GATING_Msk            (_UINT32_(0x3) << GPIO_CTRL10_PWR_GATING_Pos)        /* (GPIO_CTRL10) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL10_PWR_GATING(value)         (GPIO_CTRL10_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL10_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL10 register */
#define GPIO_CTRL10_INTR_DET_Pos              _UINT32_(4)                                          /* (GPIO_CTRL10) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL10_INTR_DET_Msk              (_UINT32_(0x7) << GPIO_CTRL10_INTR_DET_Pos)          /* (GPIO_CTRL10) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL10_INTR_DET(value)           (GPIO_CTRL10_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL10_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL10 register */
#define GPIO_CTRL10_EDGE_EN_Pos               _UINT32_(7)                                          /* (GPIO_CTRL10) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL10_EDGE_EN_Msk               (_UINT32_(0x1) << GPIO_CTRL10_EDGE_EN_Pos)           /* (GPIO_CTRL10) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL10_EDGE_EN(value)            (GPIO_CTRL10_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL10_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL10 register */
#define GPIO_CTRL10_OUT_BUFF_TYPE_Pos         _UINT32_(8)                                          /* (GPIO_CTRL10) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL10_OUT_BUFF_TYPE_Msk         (_UINT32_(0x1) << GPIO_CTRL10_OUT_BUFF_TYPE_Pos)     /* (GPIO_CTRL10) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL10_OUT_BUFF_TYPE(value)      (GPIO_CTRL10_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL10_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL10 register */
#define GPIO_CTRL10_GPIO_DIR_Pos              _UINT32_(9)                                          /* (GPIO_CTRL10) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL10_GPIO_DIR_Msk              (_UINT32_(0x1) << GPIO_CTRL10_GPIO_DIR_Pos)          /* (GPIO_CTRL10) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL10_GPIO_DIR(value)           (GPIO_CTRL10_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL10_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL10 register */
#define GPIO_CTRL10_GPIO_OUT_SEL_Pos          _UINT32_(10)                                         /* (GPIO_CTRL10) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL10_GPIO_OUT_SEL_Msk          (_UINT32_(0x1) << GPIO_CTRL10_GPIO_OUT_SEL_Pos)      /* (GPIO_CTRL10) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL10_GPIO_OUT_SEL(value)       (GPIO_CTRL10_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL10_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL10 register */
#define GPIO_CTRL10_POL_Pos                   _UINT32_(11)                                         /* (GPIO_CTRL10) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL10_POL_Msk                   (_UINT32_(0x1) << GPIO_CTRL10_POL_Pos)               /* (GPIO_CTRL10) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL10_POL(value)                (GPIO_CTRL10_POL_Msk & (_UINT32_(value) << GPIO_CTRL10_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL10 register */
#define GPIO_CTRL10_MUX_CTRL_Pos              _UINT32_(12)                                         /* (GPIO_CTRL10) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL10_MUX_CTRL_Msk              (_UINT32_(0x7) << GPIO_CTRL10_MUX_CTRL_Pos)          /* (GPIO_CTRL10) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL10_MUX_CTRL(value)           (GPIO_CTRL10_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL10_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL10 register */
#define   GPIO_CTRL10_MUX_CTRL_GPIO_Val       _UINT32_(0x0)                                        /* (GPIO_CTRL10) GPIO function selected  */
#define   GPIO_CTRL10_MUX_CTRL_FUNC1_Val      _UINT32_(0x1)                                        /* (GPIO_CTRL10) Signal function 1 selected  */
#define   GPIO_CTRL10_MUX_CTRL_FUNC2_Val      _UINT32_(0x2)                                        /* (GPIO_CTRL10) Signal function 2 selected  */
#define   GPIO_CTRL10_MUX_CTRL_FUNC3_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL10) Signal function 3 selected  */
#define GPIO_CTRL10_MUX_CTRL_GPIO             (GPIO_CTRL10_MUX_CTRL_GPIO_Val << GPIO_CTRL10_MUX_CTRL_Pos) /* (GPIO_CTRL10) GPIO function selected Position  */
#define GPIO_CTRL10_MUX_CTRL_FUNC1            (GPIO_CTRL10_MUX_CTRL_FUNC1_Val << GPIO_CTRL10_MUX_CTRL_Pos) /* (GPIO_CTRL10) Signal function 1 selected Position  */
#define GPIO_CTRL10_MUX_CTRL_FUNC2            (GPIO_CTRL10_MUX_CTRL_FUNC2_Val << GPIO_CTRL10_MUX_CTRL_Pos) /* (GPIO_CTRL10) Signal function 2 selected Position  */
#define GPIO_CTRL10_MUX_CTRL_FUNC3            (GPIO_CTRL10_MUX_CTRL_FUNC3_Val << GPIO_CTRL10_MUX_CTRL_Pos) /* (GPIO_CTRL10) Signal function 3 selected Position  */
#define GPIO_CTRL10_INP_DIS_Pos               _UINT32_(15)                                         /* (GPIO_CTRL10) GPIO input disable Position */
#define GPIO_CTRL10_INP_DIS_Msk               (_UINT32_(0x1) << GPIO_CTRL10_INP_DIS_Pos)           /* (GPIO_CTRL10) GPIO input disable Mask */
#define GPIO_CTRL10_INP_DIS(value)            (GPIO_CTRL10_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL10_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL10 register */
#define GPIO_CTRL10_ALT_GPIO_DATA_Pos         _UINT32_(16)                                         /* (GPIO_CTRL10) GPIO Alternate Data Register. Position */
#define GPIO_CTRL10_ALT_GPIO_DATA_Msk         (_UINT32_(0x1) << GPIO_CTRL10_ALT_GPIO_DATA_Pos)     /* (GPIO_CTRL10) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL10_ALT_GPIO_DATA(value)      (GPIO_CTRL10_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL10_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL10 register */
#define GPIO_CTRL10_GPIO_INP_Pos              _UINT32_(24)                                         /* (GPIO_CTRL10) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL10_GPIO_INP_Msk              (_UINT32_(0x1) << GPIO_CTRL10_GPIO_INP_Pos)          /* (GPIO_CTRL10) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL10_GPIO_INP(value)           (GPIO_CTRL10_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL10_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL10 register */
#define GPIO_CTRL10_Msk                       _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL10) Register Mask  */


/* -------- GPIO_CTRL11 : (GPIO Offset: 0x120) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL11_RESETVALUE                _UINT32_(0x8040)                                     /*  (GPIO_CTRL11) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL11_PU_PD_Pos                 _UINT32_(0)                                          /* (GPIO_CTRL11) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL11_PU_PD_Msk                 (_UINT32_(0x3) << GPIO_CTRL11_PU_PD_Pos)             /* (GPIO_CTRL11) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL11_PU_PD(value)              (GPIO_CTRL11_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL11_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL11 register */
#define   GPIO_CTRL11_PU_PD_NONE_Val          _UINT32_(0x0)                                        /* (GPIO_CTRL11) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL11_PU_PD_UP_Val            _UINT32_(0x1)                                        /* (GPIO_CTRL11) Pull Up Enabled  */
#define   GPIO_CTRL11_PU_PD_DOWN_Val          _UINT32_(0x2)                                        /* (GPIO_CTRL11) Pull Down Enabled  */
#define   GPIO_CTRL11_PU_PD_REPEATER_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL11) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL11_PU_PD_NONE                (GPIO_CTRL11_PU_PD_NONE_Val << GPIO_CTRL11_PU_PD_Pos) /* (GPIO_CTRL11) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL11_PU_PD_UP                  (GPIO_CTRL11_PU_PD_UP_Val << GPIO_CTRL11_PU_PD_Pos)  /* (GPIO_CTRL11) Pull Up Enabled Position  */
#define GPIO_CTRL11_PU_PD_DOWN                (GPIO_CTRL11_PU_PD_DOWN_Val << GPIO_CTRL11_PU_PD_Pos) /* (GPIO_CTRL11) Pull Down Enabled Position  */
#define GPIO_CTRL11_PU_PD_REPEATER            (GPIO_CTRL11_PU_PD_REPEATER_Val << GPIO_CTRL11_PU_PD_Pos) /* (GPIO_CTRL11) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL11_PWR_GATING_Pos            _UINT32_(2)                                          /* (GPIO_CTRL11) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL11_PWR_GATING_Msk            (_UINT32_(0x3) << GPIO_CTRL11_PWR_GATING_Pos)        /* (GPIO_CTRL11) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL11_PWR_GATING(value)         (GPIO_CTRL11_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL11_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL11 register */
#define GPIO_CTRL11_INTR_DET_Pos              _UINT32_(4)                                          /* (GPIO_CTRL11) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL11_INTR_DET_Msk              (_UINT32_(0x7) << GPIO_CTRL11_INTR_DET_Pos)          /* (GPIO_CTRL11) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL11_INTR_DET(value)           (GPIO_CTRL11_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL11_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL11 register */
#define GPIO_CTRL11_EDGE_EN_Pos               _UINT32_(7)                                          /* (GPIO_CTRL11) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL11_EDGE_EN_Msk               (_UINT32_(0x1) << GPIO_CTRL11_EDGE_EN_Pos)           /* (GPIO_CTRL11) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL11_EDGE_EN(value)            (GPIO_CTRL11_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL11_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL11 register */
#define GPIO_CTRL11_OUT_BUFF_TYPE_Pos         _UINT32_(8)                                          /* (GPIO_CTRL11) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL11_OUT_BUFF_TYPE_Msk         (_UINT32_(0x1) << GPIO_CTRL11_OUT_BUFF_TYPE_Pos)     /* (GPIO_CTRL11) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL11_OUT_BUFF_TYPE(value)      (GPIO_CTRL11_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL11_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL11 register */
#define GPIO_CTRL11_GPIO_DIR_Pos              _UINT32_(9)                                          /* (GPIO_CTRL11) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL11_GPIO_DIR_Msk              (_UINT32_(0x1) << GPIO_CTRL11_GPIO_DIR_Pos)          /* (GPIO_CTRL11) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL11_GPIO_DIR(value)           (GPIO_CTRL11_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL11_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL11 register */
#define GPIO_CTRL11_GPIO_OUT_SEL_Pos          _UINT32_(10)                                         /* (GPIO_CTRL11) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL11_GPIO_OUT_SEL_Msk          (_UINT32_(0x1) << GPIO_CTRL11_GPIO_OUT_SEL_Pos)      /* (GPIO_CTRL11) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL11_GPIO_OUT_SEL(value)       (GPIO_CTRL11_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL11_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL11 register */
#define GPIO_CTRL11_POL_Pos                   _UINT32_(11)                                         /* (GPIO_CTRL11) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL11_POL_Msk                   (_UINT32_(0x1) << GPIO_CTRL11_POL_Pos)               /* (GPIO_CTRL11) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL11_POL(value)                (GPIO_CTRL11_POL_Msk & (_UINT32_(value) << GPIO_CTRL11_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL11 register */
#define GPIO_CTRL11_MUX_CTRL_Pos              _UINT32_(12)                                         /* (GPIO_CTRL11) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL11_MUX_CTRL_Msk              (_UINT32_(0x7) << GPIO_CTRL11_MUX_CTRL_Pos)          /* (GPIO_CTRL11) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL11_MUX_CTRL(value)           (GPIO_CTRL11_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL11_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL11 register */
#define   GPIO_CTRL11_MUX_CTRL_GPIO_Val       _UINT32_(0x0)                                        /* (GPIO_CTRL11) GPIO function selected  */
#define   GPIO_CTRL11_MUX_CTRL_FUNC1_Val      _UINT32_(0x1)                                        /* (GPIO_CTRL11) Signal function 1 selected  */
#define   GPIO_CTRL11_MUX_CTRL_FUNC2_Val      _UINT32_(0x2)                                        /* (GPIO_CTRL11) Signal function 2 selected  */
#define   GPIO_CTRL11_MUX_CTRL_FUNC3_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL11) Signal function 3 selected  */
#define GPIO_CTRL11_MUX_CTRL_GPIO             (GPIO_CTRL11_MUX_CTRL_GPIO_Val << GPIO_CTRL11_MUX_CTRL_Pos) /* (GPIO_CTRL11) GPIO function selected Position  */
#define GPIO_CTRL11_MUX_CTRL_FUNC1            (GPIO_CTRL11_MUX_CTRL_FUNC1_Val << GPIO_CTRL11_MUX_CTRL_Pos) /* (GPIO_CTRL11) Signal function 1 selected Position  */
#define GPIO_CTRL11_MUX_CTRL_FUNC2            (GPIO_CTRL11_MUX_CTRL_FUNC2_Val << GPIO_CTRL11_MUX_CTRL_Pos) /* (GPIO_CTRL11) Signal function 2 selected Position  */
#define GPIO_CTRL11_MUX_CTRL_FUNC3            (GPIO_CTRL11_MUX_CTRL_FUNC3_Val << GPIO_CTRL11_MUX_CTRL_Pos) /* (GPIO_CTRL11) Signal function 3 selected Position  */
#define GPIO_CTRL11_INP_DIS_Pos               _UINT32_(15)                                         /* (GPIO_CTRL11) GPIO input disable Position */
#define GPIO_CTRL11_INP_DIS_Msk               (_UINT32_(0x1) << GPIO_CTRL11_INP_DIS_Pos)           /* (GPIO_CTRL11) GPIO input disable Mask */
#define GPIO_CTRL11_INP_DIS(value)            (GPIO_CTRL11_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL11_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL11 register */
#define GPIO_CTRL11_ALT_GPIO_DATA_Pos         _UINT32_(16)                                         /* (GPIO_CTRL11) GPIO Alternate Data Register. Position */
#define GPIO_CTRL11_ALT_GPIO_DATA_Msk         (_UINT32_(0x1) << GPIO_CTRL11_ALT_GPIO_DATA_Pos)     /* (GPIO_CTRL11) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL11_ALT_GPIO_DATA(value)      (GPIO_CTRL11_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL11_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL11 register */
#define GPIO_CTRL11_GPIO_INP_Pos              _UINT32_(24)                                         /* (GPIO_CTRL11) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL11_GPIO_INP_Msk              (_UINT32_(0x1) << GPIO_CTRL11_GPIO_INP_Pos)          /* (GPIO_CTRL11) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL11_GPIO_INP(value)           (GPIO_CTRL11_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL11_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL11 register */
#define GPIO_CTRL11_Msk                       _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL11) Register Mask  */


/* -------- GPIO_CTRL12 : (GPIO Offset: 0x140) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL12_RESETVALUE                _UINT32_(0x8040)                                     /*  (GPIO_CTRL12) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL12_PU_PD_Pos                 _UINT32_(0)                                          /* (GPIO_CTRL12) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL12_PU_PD_Msk                 (_UINT32_(0x3) << GPIO_CTRL12_PU_PD_Pos)             /* (GPIO_CTRL12) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL12_PU_PD(value)              (GPIO_CTRL12_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL12_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL12 register */
#define   GPIO_CTRL12_PU_PD_NONE_Val          _UINT32_(0x0)                                        /* (GPIO_CTRL12) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL12_PU_PD_UP_Val            _UINT32_(0x1)                                        /* (GPIO_CTRL12) Pull Up Enabled  */
#define   GPIO_CTRL12_PU_PD_DOWN_Val          _UINT32_(0x2)                                        /* (GPIO_CTRL12) Pull Down Enabled  */
#define   GPIO_CTRL12_PU_PD_REPEATER_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL12) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL12_PU_PD_NONE                (GPIO_CTRL12_PU_PD_NONE_Val << GPIO_CTRL12_PU_PD_Pos) /* (GPIO_CTRL12) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL12_PU_PD_UP                  (GPIO_CTRL12_PU_PD_UP_Val << GPIO_CTRL12_PU_PD_Pos)  /* (GPIO_CTRL12) Pull Up Enabled Position  */
#define GPIO_CTRL12_PU_PD_DOWN                (GPIO_CTRL12_PU_PD_DOWN_Val << GPIO_CTRL12_PU_PD_Pos) /* (GPIO_CTRL12) Pull Down Enabled Position  */
#define GPIO_CTRL12_PU_PD_REPEATER            (GPIO_CTRL12_PU_PD_REPEATER_Val << GPIO_CTRL12_PU_PD_Pos) /* (GPIO_CTRL12) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL12_PWR_GATING_Pos            _UINT32_(2)                                          /* (GPIO_CTRL12) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL12_PWR_GATING_Msk            (_UINT32_(0x3) << GPIO_CTRL12_PWR_GATING_Pos)        /* (GPIO_CTRL12) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL12_PWR_GATING(value)         (GPIO_CTRL12_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL12_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL12 register */
#define GPIO_CTRL12_INTR_DET_Pos              _UINT32_(4)                                          /* (GPIO_CTRL12) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL12_INTR_DET_Msk              (_UINT32_(0x7) << GPIO_CTRL12_INTR_DET_Pos)          /* (GPIO_CTRL12) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL12_INTR_DET(value)           (GPIO_CTRL12_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL12_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL12 register */
#define GPIO_CTRL12_EDGE_EN_Pos               _UINT32_(7)                                          /* (GPIO_CTRL12) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL12_EDGE_EN_Msk               (_UINT32_(0x1) << GPIO_CTRL12_EDGE_EN_Pos)           /* (GPIO_CTRL12) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL12_EDGE_EN(value)            (GPIO_CTRL12_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL12_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL12 register */
#define GPIO_CTRL12_OUT_BUFF_TYPE_Pos         _UINT32_(8)                                          /* (GPIO_CTRL12) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL12_OUT_BUFF_TYPE_Msk         (_UINT32_(0x1) << GPIO_CTRL12_OUT_BUFF_TYPE_Pos)     /* (GPIO_CTRL12) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL12_OUT_BUFF_TYPE(value)      (GPIO_CTRL12_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL12_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL12 register */
#define GPIO_CTRL12_GPIO_DIR_Pos              _UINT32_(9)                                          /* (GPIO_CTRL12) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL12_GPIO_DIR_Msk              (_UINT32_(0x1) << GPIO_CTRL12_GPIO_DIR_Pos)          /* (GPIO_CTRL12) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL12_GPIO_DIR(value)           (GPIO_CTRL12_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL12_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL12 register */
#define GPIO_CTRL12_GPIO_OUT_SEL_Pos          _UINT32_(10)                                         /* (GPIO_CTRL12) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL12_GPIO_OUT_SEL_Msk          (_UINT32_(0x1) << GPIO_CTRL12_GPIO_OUT_SEL_Pos)      /* (GPIO_CTRL12) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL12_GPIO_OUT_SEL(value)       (GPIO_CTRL12_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL12_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL12 register */
#define GPIO_CTRL12_POL_Pos                   _UINT32_(11)                                         /* (GPIO_CTRL12) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL12_POL_Msk                   (_UINT32_(0x1) << GPIO_CTRL12_POL_Pos)               /* (GPIO_CTRL12) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL12_POL(value)                (GPIO_CTRL12_POL_Msk & (_UINT32_(value) << GPIO_CTRL12_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL12 register */
#define GPIO_CTRL12_MUX_CTRL_Pos              _UINT32_(12)                                         /* (GPIO_CTRL12) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL12_MUX_CTRL_Msk              (_UINT32_(0x7) << GPIO_CTRL12_MUX_CTRL_Pos)          /* (GPIO_CTRL12) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL12_MUX_CTRL(value)           (GPIO_CTRL12_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL12_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL12 register */
#define   GPIO_CTRL12_MUX_CTRL_GPIO_Val       _UINT32_(0x0)                                        /* (GPIO_CTRL12) GPIO function selected  */
#define   GPIO_CTRL12_MUX_CTRL_FUNC1_Val      _UINT32_(0x1)                                        /* (GPIO_CTRL12) Signal function 1 selected  */
#define   GPIO_CTRL12_MUX_CTRL_FUNC2_Val      _UINT32_(0x2)                                        /* (GPIO_CTRL12) Signal function 2 selected  */
#define   GPIO_CTRL12_MUX_CTRL_FUNC3_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL12) Signal function 3 selected  */
#define GPIO_CTRL12_MUX_CTRL_GPIO             (GPIO_CTRL12_MUX_CTRL_GPIO_Val << GPIO_CTRL12_MUX_CTRL_Pos) /* (GPIO_CTRL12) GPIO function selected Position  */
#define GPIO_CTRL12_MUX_CTRL_FUNC1            (GPIO_CTRL12_MUX_CTRL_FUNC1_Val << GPIO_CTRL12_MUX_CTRL_Pos) /* (GPIO_CTRL12) Signal function 1 selected Position  */
#define GPIO_CTRL12_MUX_CTRL_FUNC2            (GPIO_CTRL12_MUX_CTRL_FUNC2_Val << GPIO_CTRL12_MUX_CTRL_Pos) /* (GPIO_CTRL12) Signal function 2 selected Position  */
#define GPIO_CTRL12_MUX_CTRL_FUNC3            (GPIO_CTRL12_MUX_CTRL_FUNC3_Val << GPIO_CTRL12_MUX_CTRL_Pos) /* (GPIO_CTRL12) Signal function 3 selected Position  */
#define GPIO_CTRL12_INP_DIS_Pos               _UINT32_(15)                                         /* (GPIO_CTRL12) GPIO input disable Position */
#define GPIO_CTRL12_INP_DIS_Msk               (_UINT32_(0x1) << GPIO_CTRL12_INP_DIS_Pos)           /* (GPIO_CTRL12) GPIO input disable Mask */
#define GPIO_CTRL12_INP_DIS(value)            (GPIO_CTRL12_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL12_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL12 register */
#define GPIO_CTRL12_ALT_GPIO_DATA_Pos         _UINT32_(16)                                         /* (GPIO_CTRL12) GPIO Alternate Data Register. Position */
#define GPIO_CTRL12_ALT_GPIO_DATA_Msk         (_UINT32_(0x1) << GPIO_CTRL12_ALT_GPIO_DATA_Pos)     /* (GPIO_CTRL12) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL12_ALT_GPIO_DATA(value)      (GPIO_CTRL12_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL12_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL12 register */
#define GPIO_CTRL12_GPIO_INP_Pos              _UINT32_(24)                                         /* (GPIO_CTRL12) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL12_GPIO_INP_Msk              (_UINT32_(0x1) << GPIO_CTRL12_GPIO_INP_Pos)          /* (GPIO_CTRL12) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL12_GPIO_INP(value)           (GPIO_CTRL12_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL12_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL12 register */
#define GPIO_CTRL12_Msk                       _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL12) Register Mask  */


/* -------- GPIO_CTRL13 : (GPIO Offset: 0x160) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL13_RESETVALUE                _UINT32_(0x8040)                                     /*  (GPIO_CTRL13) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL13_PU_PD_Pos                 _UINT32_(0)                                          /* (GPIO_CTRL13) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL13_PU_PD_Msk                 (_UINT32_(0x3) << GPIO_CTRL13_PU_PD_Pos)             /* (GPIO_CTRL13) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL13_PU_PD(value)              (GPIO_CTRL13_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL13_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL13 register */
#define   GPIO_CTRL13_PU_PD_NONE_Val          _UINT32_(0x0)                                        /* (GPIO_CTRL13) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL13_PU_PD_UP_Val            _UINT32_(0x1)                                        /* (GPIO_CTRL13) Pull Up Enabled  */
#define   GPIO_CTRL13_PU_PD_DOWN_Val          _UINT32_(0x2)                                        /* (GPIO_CTRL13) Pull Down Enabled  */
#define   GPIO_CTRL13_PU_PD_REPEATER_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL13) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL13_PU_PD_NONE                (GPIO_CTRL13_PU_PD_NONE_Val << GPIO_CTRL13_PU_PD_Pos) /* (GPIO_CTRL13) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL13_PU_PD_UP                  (GPIO_CTRL13_PU_PD_UP_Val << GPIO_CTRL13_PU_PD_Pos)  /* (GPIO_CTRL13) Pull Up Enabled Position  */
#define GPIO_CTRL13_PU_PD_DOWN                (GPIO_CTRL13_PU_PD_DOWN_Val << GPIO_CTRL13_PU_PD_Pos) /* (GPIO_CTRL13) Pull Down Enabled Position  */
#define GPIO_CTRL13_PU_PD_REPEATER            (GPIO_CTRL13_PU_PD_REPEATER_Val << GPIO_CTRL13_PU_PD_Pos) /* (GPIO_CTRL13) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL13_PWR_GATING_Pos            _UINT32_(2)                                          /* (GPIO_CTRL13) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL13_PWR_GATING_Msk            (_UINT32_(0x3) << GPIO_CTRL13_PWR_GATING_Pos)        /* (GPIO_CTRL13) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL13_PWR_GATING(value)         (GPIO_CTRL13_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL13_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL13 register */
#define GPIO_CTRL13_INTR_DET_Pos              _UINT32_(4)                                          /* (GPIO_CTRL13) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL13_INTR_DET_Msk              (_UINT32_(0x7) << GPIO_CTRL13_INTR_DET_Pos)          /* (GPIO_CTRL13) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL13_INTR_DET(value)           (GPIO_CTRL13_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL13_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL13 register */
#define GPIO_CTRL13_EDGE_EN_Pos               _UINT32_(7)                                          /* (GPIO_CTRL13) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL13_EDGE_EN_Msk               (_UINT32_(0x1) << GPIO_CTRL13_EDGE_EN_Pos)           /* (GPIO_CTRL13) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL13_EDGE_EN(value)            (GPIO_CTRL13_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL13_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL13 register */
#define GPIO_CTRL13_OUT_BUFF_TYPE_Pos         _UINT32_(8)                                          /* (GPIO_CTRL13) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL13_OUT_BUFF_TYPE_Msk         (_UINT32_(0x1) << GPIO_CTRL13_OUT_BUFF_TYPE_Pos)     /* (GPIO_CTRL13) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL13_OUT_BUFF_TYPE(value)      (GPIO_CTRL13_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL13_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL13 register */
#define GPIO_CTRL13_GPIO_DIR_Pos              _UINT32_(9)                                          /* (GPIO_CTRL13) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL13_GPIO_DIR_Msk              (_UINT32_(0x1) << GPIO_CTRL13_GPIO_DIR_Pos)          /* (GPIO_CTRL13) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL13_GPIO_DIR(value)           (GPIO_CTRL13_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL13_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL13 register */
#define GPIO_CTRL13_GPIO_OUT_SEL_Pos          _UINT32_(10)                                         /* (GPIO_CTRL13) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL13_GPIO_OUT_SEL_Msk          (_UINT32_(0x1) << GPIO_CTRL13_GPIO_OUT_SEL_Pos)      /* (GPIO_CTRL13) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL13_GPIO_OUT_SEL(value)       (GPIO_CTRL13_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL13_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL13 register */
#define GPIO_CTRL13_POL_Pos                   _UINT32_(11)                                         /* (GPIO_CTRL13) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL13_POL_Msk                   (_UINT32_(0x1) << GPIO_CTRL13_POL_Pos)               /* (GPIO_CTRL13) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL13_POL(value)                (GPIO_CTRL13_POL_Msk & (_UINT32_(value) << GPIO_CTRL13_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL13 register */
#define GPIO_CTRL13_MUX_CTRL_Pos              _UINT32_(12)                                         /* (GPIO_CTRL13) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL13_MUX_CTRL_Msk              (_UINT32_(0x7) << GPIO_CTRL13_MUX_CTRL_Pos)          /* (GPIO_CTRL13) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL13_MUX_CTRL(value)           (GPIO_CTRL13_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL13_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL13 register */
#define   GPIO_CTRL13_MUX_CTRL_GPIO_Val       _UINT32_(0x0)                                        /* (GPIO_CTRL13) GPIO function selected  */
#define   GPIO_CTRL13_MUX_CTRL_FUNC1_Val      _UINT32_(0x1)                                        /* (GPIO_CTRL13) Signal function 1 selected  */
#define   GPIO_CTRL13_MUX_CTRL_FUNC2_Val      _UINT32_(0x2)                                        /* (GPIO_CTRL13) Signal function 2 selected  */
#define   GPIO_CTRL13_MUX_CTRL_FUNC3_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL13) Signal function 3 selected  */
#define GPIO_CTRL13_MUX_CTRL_GPIO             (GPIO_CTRL13_MUX_CTRL_GPIO_Val << GPIO_CTRL13_MUX_CTRL_Pos) /* (GPIO_CTRL13) GPIO function selected Position  */
#define GPIO_CTRL13_MUX_CTRL_FUNC1            (GPIO_CTRL13_MUX_CTRL_FUNC1_Val << GPIO_CTRL13_MUX_CTRL_Pos) /* (GPIO_CTRL13) Signal function 1 selected Position  */
#define GPIO_CTRL13_MUX_CTRL_FUNC2            (GPIO_CTRL13_MUX_CTRL_FUNC2_Val << GPIO_CTRL13_MUX_CTRL_Pos) /* (GPIO_CTRL13) Signal function 2 selected Position  */
#define GPIO_CTRL13_MUX_CTRL_FUNC3            (GPIO_CTRL13_MUX_CTRL_FUNC3_Val << GPIO_CTRL13_MUX_CTRL_Pos) /* (GPIO_CTRL13) Signal function 3 selected Position  */
#define GPIO_CTRL13_INP_DIS_Pos               _UINT32_(15)                                         /* (GPIO_CTRL13) GPIO input disable Position */
#define GPIO_CTRL13_INP_DIS_Msk               (_UINT32_(0x1) << GPIO_CTRL13_INP_DIS_Pos)           /* (GPIO_CTRL13) GPIO input disable Mask */
#define GPIO_CTRL13_INP_DIS(value)            (GPIO_CTRL13_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL13_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL13 register */
#define GPIO_CTRL13_ALT_GPIO_DATA_Pos         _UINT32_(16)                                         /* (GPIO_CTRL13) GPIO Alternate Data Register. Position */
#define GPIO_CTRL13_ALT_GPIO_DATA_Msk         (_UINT32_(0x1) << GPIO_CTRL13_ALT_GPIO_DATA_Pos)     /* (GPIO_CTRL13) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL13_ALT_GPIO_DATA(value)      (GPIO_CTRL13_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL13_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL13 register */
#define GPIO_CTRL13_GPIO_INP_Pos              _UINT32_(24)                                         /* (GPIO_CTRL13) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL13_GPIO_INP_Msk              (_UINT32_(0x1) << GPIO_CTRL13_GPIO_INP_Pos)          /* (GPIO_CTRL13) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL13_GPIO_INP(value)           (GPIO_CTRL13_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL13_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL13 register */
#define GPIO_CTRL13_Msk                       _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL13) Register Mask  */


/* -------- GPIO_CTRL14 : (GPIO Offset: 0x180) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL14_RESETVALUE                _UINT32_(0x8040)                                     /*  (GPIO_CTRL14) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL14_PU_PD_Pos                 _UINT32_(0)                                          /* (GPIO_CTRL14) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL14_PU_PD_Msk                 (_UINT32_(0x3) << GPIO_CTRL14_PU_PD_Pos)             /* (GPIO_CTRL14) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL14_PU_PD(value)              (GPIO_CTRL14_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL14_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL14 register */
#define   GPIO_CTRL14_PU_PD_NONE_Val          _UINT32_(0x0)                                        /* (GPIO_CTRL14) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL14_PU_PD_UP_Val            _UINT32_(0x1)                                        /* (GPIO_CTRL14) Pull Up Enabled  */
#define   GPIO_CTRL14_PU_PD_DOWN_Val          _UINT32_(0x2)                                        /* (GPIO_CTRL14) Pull Down Enabled  */
#define   GPIO_CTRL14_PU_PD_REPEATER_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL14) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL14_PU_PD_NONE                (GPIO_CTRL14_PU_PD_NONE_Val << GPIO_CTRL14_PU_PD_Pos) /* (GPIO_CTRL14) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL14_PU_PD_UP                  (GPIO_CTRL14_PU_PD_UP_Val << GPIO_CTRL14_PU_PD_Pos)  /* (GPIO_CTRL14) Pull Up Enabled Position  */
#define GPIO_CTRL14_PU_PD_DOWN                (GPIO_CTRL14_PU_PD_DOWN_Val << GPIO_CTRL14_PU_PD_Pos) /* (GPIO_CTRL14) Pull Down Enabled Position  */
#define GPIO_CTRL14_PU_PD_REPEATER            (GPIO_CTRL14_PU_PD_REPEATER_Val << GPIO_CTRL14_PU_PD_Pos) /* (GPIO_CTRL14) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL14_PWR_GATING_Pos            _UINT32_(2)                                          /* (GPIO_CTRL14) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL14_PWR_GATING_Msk            (_UINT32_(0x3) << GPIO_CTRL14_PWR_GATING_Pos)        /* (GPIO_CTRL14) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL14_PWR_GATING(value)         (GPIO_CTRL14_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL14_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL14 register */
#define GPIO_CTRL14_INTR_DET_Pos              _UINT32_(4)                                          /* (GPIO_CTRL14) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL14_INTR_DET_Msk              (_UINT32_(0x7) << GPIO_CTRL14_INTR_DET_Pos)          /* (GPIO_CTRL14) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL14_INTR_DET(value)           (GPIO_CTRL14_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL14_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL14 register */
#define GPIO_CTRL14_EDGE_EN_Pos               _UINT32_(7)                                          /* (GPIO_CTRL14) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL14_EDGE_EN_Msk               (_UINT32_(0x1) << GPIO_CTRL14_EDGE_EN_Pos)           /* (GPIO_CTRL14) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL14_EDGE_EN(value)            (GPIO_CTRL14_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL14_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL14 register */
#define GPIO_CTRL14_OUT_BUFF_TYPE_Pos         _UINT32_(8)                                          /* (GPIO_CTRL14) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL14_OUT_BUFF_TYPE_Msk         (_UINT32_(0x1) << GPIO_CTRL14_OUT_BUFF_TYPE_Pos)     /* (GPIO_CTRL14) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL14_OUT_BUFF_TYPE(value)      (GPIO_CTRL14_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL14_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL14 register */
#define GPIO_CTRL14_GPIO_DIR_Pos              _UINT32_(9)                                          /* (GPIO_CTRL14) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL14_GPIO_DIR_Msk              (_UINT32_(0x1) << GPIO_CTRL14_GPIO_DIR_Pos)          /* (GPIO_CTRL14) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL14_GPIO_DIR(value)           (GPIO_CTRL14_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL14_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL14 register */
#define GPIO_CTRL14_GPIO_OUT_SEL_Pos          _UINT32_(10)                                         /* (GPIO_CTRL14) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL14_GPIO_OUT_SEL_Msk          (_UINT32_(0x1) << GPIO_CTRL14_GPIO_OUT_SEL_Pos)      /* (GPIO_CTRL14) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL14_GPIO_OUT_SEL(value)       (GPIO_CTRL14_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL14_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL14 register */
#define GPIO_CTRL14_POL_Pos                   _UINT32_(11)                                         /* (GPIO_CTRL14) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL14_POL_Msk                   (_UINT32_(0x1) << GPIO_CTRL14_POL_Pos)               /* (GPIO_CTRL14) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL14_POL(value)                (GPIO_CTRL14_POL_Msk & (_UINT32_(value) << GPIO_CTRL14_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL14 register */
#define GPIO_CTRL14_MUX_CTRL_Pos              _UINT32_(12)                                         /* (GPIO_CTRL14) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL14_MUX_CTRL_Msk              (_UINT32_(0x7) << GPIO_CTRL14_MUX_CTRL_Pos)          /* (GPIO_CTRL14) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL14_MUX_CTRL(value)           (GPIO_CTRL14_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL14_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL14 register */
#define   GPIO_CTRL14_MUX_CTRL_GPIO_Val       _UINT32_(0x0)                                        /* (GPIO_CTRL14) GPIO function selected  */
#define   GPIO_CTRL14_MUX_CTRL_FUNC1_Val      _UINT32_(0x1)                                        /* (GPIO_CTRL14) Signal function 1 selected  */
#define   GPIO_CTRL14_MUX_CTRL_FUNC2_Val      _UINT32_(0x2)                                        /* (GPIO_CTRL14) Signal function 2 selected  */
#define   GPIO_CTRL14_MUX_CTRL_FUNC3_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL14) Signal function 3 selected  */
#define GPIO_CTRL14_MUX_CTRL_GPIO             (GPIO_CTRL14_MUX_CTRL_GPIO_Val << GPIO_CTRL14_MUX_CTRL_Pos) /* (GPIO_CTRL14) GPIO function selected Position  */
#define GPIO_CTRL14_MUX_CTRL_FUNC1            (GPIO_CTRL14_MUX_CTRL_FUNC1_Val << GPIO_CTRL14_MUX_CTRL_Pos) /* (GPIO_CTRL14) Signal function 1 selected Position  */
#define GPIO_CTRL14_MUX_CTRL_FUNC2            (GPIO_CTRL14_MUX_CTRL_FUNC2_Val << GPIO_CTRL14_MUX_CTRL_Pos) /* (GPIO_CTRL14) Signal function 2 selected Position  */
#define GPIO_CTRL14_MUX_CTRL_FUNC3            (GPIO_CTRL14_MUX_CTRL_FUNC3_Val << GPIO_CTRL14_MUX_CTRL_Pos) /* (GPIO_CTRL14) Signal function 3 selected Position  */
#define GPIO_CTRL14_INP_DIS_Pos               _UINT32_(15)                                         /* (GPIO_CTRL14) GPIO input disable Position */
#define GPIO_CTRL14_INP_DIS_Msk               (_UINT32_(0x1) << GPIO_CTRL14_INP_DIS_Pos)           /* (GPIO_CTRL14) GPIO input disable Mask */
#define GPIO_CTRL14_INP_DIS(value)            (GPIO_CTRL14_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL14_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL14 register */
#define GPIO_CTRL14_ALT_GPIO_DATA_Pos         _UINT32_(16)                                         /* (GPIO_CTRL14) GPIO Alternate Data Register. Position */
#define GPIO_CTRL14_ALT_GPIO_DATA_Msk         (_UINT32_(0x1) << GPIO_CTRL14_ALT_GPIO_DATA_Pos)     /* (GPIO_CTRL14) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL14_ALT_GPIO_DATA(value)      (GPIO_CTRL14_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL14_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL14 register */
#define GPIO_CTRL14_GPIO_INP_Pos              _UINT32_(24)                                         /* (GPIO_CTRL14) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL14_GPIO_INP_Msk              (_UINT32_(0x1) << GPIO_CTRL14_GPIO_INP_Pos)          /* (GPIO_CTRL14) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL14_GPIO_INP(value)           (GPIO_CTRL14_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL14_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL14 register */
#define GPIO_CTRL14_Msk                       _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL14) Register Mask  */


/* -------- GPIO_CTRL15 : (GPIO Offset: 0x1A0) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL15_RESETVALUE                _UINT32_(0x8040)                                     /*  (GPIO_CTRL15) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL15_PU_PD_Pos                 _UINT32_(0)                                          /* (GPIO_CTRL15) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL15_PU_PD_Msk                 (_UINT32_(0x3) << GPIO_CTRL15_PU_PD_Pos)             /* (GPIO_CTRL15) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL15_PU_PD(value)              (GPIO_CTRL15_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL15_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL15 register */
#define   GPIO_CTRL15_PU_PD_NONE_Val          _UINT32_(0x0)                                        /* (GPIO_CTRL15) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL15_PU_PD_UP_Val            _UINT32_(0x1)                                        /* (GPIO_CTRL15) Pull Up Enabled  */
#define   GPIO_CTRL15_PU_PD_DOWN_Val          _UINT32_(0x2)                                        /* (GPIO_CTRL15) Pull Down Enabled  */
#define   GPIO_CTRL15_PU_PD_REPEATER_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL15) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL15_PU_PD_NONE                (GPIO_CTRL15_PU_PD_NONE_Val << GPIO_CTRL15_PU_PD_Pos) /* (GPIO_CTRL15) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL15_PU_PD_UP                  (GPIO_CTRL15_PU_PD_UP_Val << GPIO_CTRL15_PU_PD_Pos)  /* (GPIO_CTRL15) Pull Up Enabled Position  */
#define GPIO_CTRL15_PU_PD_DOWN                (GPIO_CTRL15_PU_PD_DOWN_Val << GPIO_CTRL15_PU_PD_Pos) /* (GPIO_CTRL15) Pull Down Enabled Position  */
#define GPIO_CTRL15_PU_PD_REPEATER            (GPIO_CTRL15_PU_PD_REPEATER_Val << GPIO_CTRL15_PU_PD_Pos) /* (GPIO_CTRL15) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL15_PWR_GATING_Pos            _UINT32_(2)                                          /* (GPIO_CTRL15) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL15_PWR_GATING_Msk            (_UINT32_(0x3) << GPIO_CTRL15_PWR_GATING_Pos)        /* (GPIO_CTRL15) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL15_PWR_GATING(value)         (GPIO_CTRL15_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL15_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL15 register */
#define GPIO_CTRL15_INTR_DET_Pos              _UINT32_(4)                                          /* (GPIO_CTRL15) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL15_INTR_DET_Msk              (_UINT32_(0x7) << GPIO_CTRL15_INTR_DET_Pos)          /* (GPIO_CTRL15) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL15_INTR_DET(value)           (GPIO_CTRL15_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL15_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL15 register */
#define GPIO_CTRL15_EDGE_EN_Pos               _UINT32_(7)                                          /* (GPIO_CTRL15) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL15_EDGE_EN_Msk               (_UINT32_(0x1) << GPIO_CTRL15_EDGE_EN_Pos)           /* (GPIO_CTRL15) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL15_EDGE_EN(value)            (GPIO_CTRL15_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL15_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL15 register */
#define GPIO_CTRL15_OUT_BUFF_TYPE_Pos         _UINT32_(8)                                          /* (GPIO_CTRL15) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL15_OUT_BUFF_TYPE_Msk         (_UINT32_(0x1) << GPIO_CTRL15_OUT_BUFF_TYPE_Pos)     /* (GPIO_CTRL15) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL15_OUT_BUFF_TYPE(value)      (GPIO_CTRL15_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL15_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL15 register */
#define GPIO_CTRL15_GPIO_DIR_Pos              _UINT32_(9)                                          /* (GPIO_CTRL15) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL15_GPIO_DIR_Msk              (_UINT32_(0x1) << GPIO_CTRL15_GPIO_DIR_Pos)          /* (GPIO_CTRL15) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL15_GPIO_DIR(value)           (GPIO_CTRL15_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL15_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL15 register */
#define GPIO_CTRL15_GPIO_OUT_SEL_Pos          _UINT32_(10)                                         /* (GPIO_CTRL15) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL15_GPIO_OUT_SEL_Msk          (_UINT32_(0x1) << GPIO_CTRL15_GPIO_OUT_SEL_Pos)      /* (GPIO_CTRL15) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL15_GPIO_OUT_SEL(value)       (GPIO_CTRL15_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL15_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL15 register */
#define GPIO_CTRL15_POL_Pos                   _UINT32_(11)                                         /* (GPIO_CTRL15) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL15_POL_Msk                   (_UINT32_(0x1) << GPIO_CTRL15_POL_Pos)               /* (GPIO_CTRL15) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL15_POL(value)                (GPIO_CTRL15_POL_Msk & (_UINT32_(value) << GPIO_CTRL15_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL15 register */
#define GPIO_CTRL15_MUX_CTRL_Pos              _UINT32_(12)                                         /* (GPIO_CTRL15) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL15_MUX_CTRL_Msk              (_UINT32_(0x7) << GPIO_CTRL15_MUX_CTRL_Pos)          /* (GPIO_CTRL15) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL15_MUX_CTRL(value)           (GPIO_CTRL15_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL15_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL15 register */
#define   GPIO_CTRL15_MUX_CTRL_GPIO_Val       _UINT32_(0x0)                                        /* (GPIO_CTRL15) GPIO function selected  */
#define   GPIO_CTRL15_MUX_CTRL_FUNC1_Val      _UINT32_(0x1)                                        /* (GPIO_CTRL15) Signal function 1 selected  */
#define   GPIO_CTRL15_MUX_CTRL_FUNC2_Val      _UINT32_(0x2)                                        /* (GPIO_CTRL15) Signal function 2 selected  */
#define   GPIO_CTRL15_MUX_CTRL_FUNC3_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL15) Signal function 3 selected  */
#define GPIO_CTRL15_MUX_CTRL_GPIO             (GPIO_CTRL15_MUX_CTRL_GPIO_Val << GPIO_CTRL15_MUX_CTRL_Pos) /* (GPIO_CTRL15) GPIO function selected Position  */
#define GPIO_CTRL15_MUX_CTRL_FUNC1            (GPIO_CTRL15_MUX_CTRL_FUNC1_Val << GPIO_CTRL15_MUX_CTRL_Pos) /* (GPIO_CTRL15) Signal function 1 selected Position  */
#define GPIO_CTRL15_MUX_CTRL_FUNC2            (GPIO_CTRL15_MUX_CTRL_FUNC2_Val << GPIO_CTRL15_MUX_CTRL_Pos) /* (GPIO_CTRL15) Signal function 2 selected Position  */
#define GPIO_CTRL15_MUX_CTRL_FUNC3            (GPIO_CTRL15_MUX_CTRL_FUNC3_Val << GPIO_CTRL15_MUX_CTRL_Pos) /* (GPIO_CTRL15) Signal function 3 selected Position  */
#define GPIO_CTRL15_INP_DIS_Pos               _UINT32_(15)                                         /* (GPIO_CTRL15) GPIO input disable Position */
#define GPIO_CTRL15_INP_DIS_Msk               (_UINT32_(0x1) << GPIO_CTRL15_INP_DIS_Pos)           /* (GPIO_CTRL15) GPIO input disable Mask */
#define GPIO_CTRL15_INP_DIS(value)            (GPIO_CTRL15_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL15_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL15 register */
#define GPIO_CTRL15_ALT_GPIO_DATA_Pos         _UINT32_(16)                                         /* (GPIO_CTRL15) GPIO Alternate Data Register. Position */
#define GPIO_CTRL15_ALT_GPIO_DATA_Msk         (_UINT32_(0x1) << GPIO_CTRL15_ALT_GPIO_DATA_Pos)     /* (GPIO_CTRL15) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL15_ALT_GPIO_DATA(value)      (GPIO_CTRL15_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL15_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL15 register */
#define GPIO_CTRL15_GPIO_INP_Pos              _UINT32_(24)                                         /* (GPIO_CTRL15) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL15_GPIO_INP_Msk              (_UINT32_(0x1) << GPIO_CTRL15_GPIO_INP_Pos)          /* (GPIO_CTRL15) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL15_GPIO_INP(value)           (GPIO_CTRL15_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL15_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL15 register */
#define GPIO_CTRL15_Msk                       _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL15) Register Mask  */


/* -------- GPIO_CTRL16 : (GPIO Offset: 0x1C0) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL16_RESETVALUE                _UINT32_(0x8040)                                     /*  (GPIO_CTRL16) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL16_PU_PD_Pos                 _UINT32_(0)                                          /* (GPIO_CTRL16) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL16_PU_PD_Msk                 (_UINT32_(0x3) << GPIO_CTRL16_PU_PD_Pos)             /* (GPIO_CTRL16) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL16_PU_PD(value)              (GPIO_CTRL16_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL16_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL16 register */
#define   GPIO_CTRL16_PU_PD_NONE_Val          _UINT32_(0x0)                                        /* (GPIO_CTRL16) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL16_PU_PD_UP_Val            _UINT32_(0x1)                                        /* (GPIO_CTRL16) Pull Up Enabled  */
#define   GPIO_CTRL16_PU_PD_DOWN_Val          _UINT32_(0x2)                                        /* (GPIO_CTRL16) Pull Down Enabled  */
#define   GPIO_CTRL16_PU_PD_REPEATER_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL16) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL16_PU_PD_NONE                (GPIO_CTRL16_PU_PD_NONE_Val << GPIO_CTRL16_PU_PD_Pos) /* (GPIO_CTRL16) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL16_PU_PD_UP                  (GPIO_CTRL16_PU_PD_UP_Val << GPIO_CTRL16_PU_PD_Pos)  /* (GPIO_CTRL16) Pull Up Enabled Position  */
#define GPIO_CTRL16_PU_PD_DOWN                (GPIO_CTRL16_PU_PD_DOWN_Val << GPIO_CTRL16_PU_PD_Pos) /* (GPIO_CTRL16) Pull Down Enabled Position  */
#define GPIO_CTRL16_PU_PD_REPEATER            (GPIO_CTRL16_PU_PD_REPEATER_Val << GPIO_CTRL16_PU_PD_Pos) /* (GPIO_CTRL16) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL16_PWR_GATING_Pos            _UINT32_(2)                                          /* (GPIO_CTRL16) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL16_PWR_GATING_Msk            (_UINT32_(0x3) << GPIO_CTRL16_PWR_GATING_Pos)        /* (GPIO_CTRL16) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL16_PWR_GATING(value)         (GPIO_CTRL16_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL16_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL16 register */
#define GPIO_CTRL16_INTR_DET_Pos              _UINT32_(4)                                          /* (GPIO_CTRL16) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL16_INTR_DET_Msk              (_UINT32_(0x7) << GPIO_CTRL16_INTR_DET_Pos)          /* (GPIO_CTRL16) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL16_INTR_DET(value)           (GPIO_CTRL16_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL16_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL16 register */
#define GPIO_CTRL16_EDGE_EN_Pos               _UINT32_(7)                                          /* (GPIO_CTRL16) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL16_EDGE_EN_Msk               (_UINT32_(0x1) << GPIO_CTRL16_EDGE_EN_Pos)           /* (GPIO_CTRL16) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL16_EDGE_EN(value)            (GPIO_CTRL16_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL16_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL16 register */
#define GPIO_CTRL16_OUT_BUFF_TYPE_Pos         _UINT32_(8)                                          /* (GPIO_CTRL16) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL16_OUT_BUFF_TYPE_Msk         (_UINT32_(0x1) << GPIO_CTRL16_OUT_BUFF_TYPE_Pos)     /* (GPIO_CTRL16) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL16_OUT_BUFF_TYPE(value)      (GPIO_CTRL16_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL16_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL16 register */
#define GPIO_CTRL16_GPIO_DIR_Pos              _UINT32_(9)                                          /* (GPIO_CTRL16) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL16_GPIO_DIR_Msk              (_UINT32_(0x1) << GPIO_CTRL16_GPIO_DIR_Pos)          /* (GPIO_CTRL16) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL16_GPIO_DIR(value)           (GPIO_CTRL16_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL16_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL16 register */
#define GPIO_CTRL16_GPIO_OUT_SEL_Pos          _UINT32_(10)                                         /* (GPIO_CTRL16) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL16_GPIO_OUT_SEL_Msk          (_UINT32_(0x1) << GPIO_CTRL16_GPIO_OUT_SEL_Pos)      /* (GPIO_CTRL16) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL16_GPIO_OUT_SEL(value)       (GPIO_CTRL16_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL16_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL16 register */
#define GPIO_CTRL16_POL_Pos                   _UINT32_(11)                                         /* (GPIO_CTRL16) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL16_POL_Msk                   (_UINT32_(0x1) << GPIO_CTRL16_POL_Pos)               /* (GPIO_CTRL16) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL16_POL(value)                (GPIO_CTRL16_POL_Msk & (_UINT32_(value) << GPIO_CTRL16_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL16 register */
#define GPIO_CTRL16_MUX_CTRL_Pos              _UINT32_(12)                                         /* (GPIO_CTRL16) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL16_MUX_CTRL_Msk              (_UINT32_(0x7) << GPIO_CTRL16_MUX_CTRL_Pos)          /* (GPIO_CTRL16) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL16_MUX_CTRL(value)           (GPIO_CTRL16_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL16_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL16 register */
#define   GPIO_CTRL16_MUX_CTRL_GPIO_Val       _UINT32_(0x0)                                        /* (GPIO_CTRL16) GPIO function selected  */
#define   GPIO_CTRL16_MUX_CTRL_FUNC1_Val      _UINT32_(0x1)                                        /* (GPIO_CTRL16) Signal function 1 selected  */
#define   GPIO_CTRL16_MUX_CTRL_FUNC2_Val      _UINT32_(0x2)                                        /* (GPIO_CTRL16) Signal function 2 selected  */
#define   GPIO_CTRL16_MUX_CTRL_FUNC3_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL16) Signal function 3 selected  */
#define GPIO_CTRL16_MUX_CTRL_GPIO             (GPIO_CTRL16_MUX_CTRL_GPIO_Val << GPIO_CTRL16_MUX_CTRL_Pos) /* (GPIO_CTRL16) GPIO function selected Position  */
#define GPIO_CTRL16_MUX_CTRL_FUNC1            (GPIO_CTRL16_MUX_CTRL_FUNC1_Val << GPIO_CTRL16_MUX_CTRL_Pos) /* (GPIO_CTRL16) Signal function 1 selected Position  */
#define GPIO_CTRL16_MUX_CTRL_FUNC2            (GPIO_CTRL16_MUX_CTRL_FUNC2_Val << GPIO_CTRL16_MUX_CTRL_Pos) /* (GPIO_CTRL16) Signal function 2 selected Position  */
#define GPIO_CTRL16_MUX_CTRL_FUNC3            (GPIO_CTRL16_MUX_CTRL_FUNC3_Val << GPIO_CTRL16_MUX_CTRL_Pos) /* (GPIO_CTRL16) Signal function 3 selected Position  */
#define GPIO_CTRL16_INP_DIS_Pos               _UINT32_(15)                                         /* (GPIO_CTRL16) GPIO input disable Position */
#define GPIO_CTRL16_INP_DIS_Msk               (_UINT32_(0x1) << GPIO_CTRL16_INP_DIS_Pos)           /* (GPIO_CTRL16) GPIO input disable Mask */
#define GPIO_CTRL16_INP_DIS(value)            (GPIO_CTRL16_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL16_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL16 register */
#define GPIO_CTRL16_ALT_GPIO_DATA_Pos         _UINT32_(16)                                         /* (GPIO_CTRL16) GPIO Alternate Data Register. Position */
#define GPIO_CTRL16_ALT_GPIO_DATA_Msk         (_UINT32_(0x1) << GPIO_CTRL16_ALT_GPIO_DATA_Pos)     /* (GPIO_CTRL16) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL16_ALT_GPIO_DATA(value)      (GPIO_CTRL16_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL16_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL16 register */
#define GPIO_CTRL16_GPIO_INP_Pos              _UINT32_(24)                                         /* (GPIO_CTRL16) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL16_GPIO_INP_Msk              (_UINT32_(0x1) << GPIO_CTRL16_GPIO_INP_Pos)          /* (GPIO_CTRL16) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL16_GPIO_INP(value)           (GPIO_CTRL16_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL16_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL16 register */
#define GPIO_CTRL16_Msk                       _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL16) Register Mask  */


/* -------- GPIO_CTRL17 : (GPIO Offset: 0x1E0) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL17_RESETVALUE                _UINT32_(0x8040)                                     /*  (GPIO_CTRL17) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL17_PU_PD_Pos                 _UINT32_(0)                                          /* (GPIO_CTRL17) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL17_PU_PD_Msk                 (_UINT32_(0x3) << GPIO_CTRL17_PU_PD_Pos)             /* (GPIO_CTRL17) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL17_PU_PD(value)              (GPIO_CTRL17_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL17_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL17 register */
#define   GPIO_CTRL17_PU_PD_NONE_Val          _UINT32_(0x0)                                        /* (GPIO_CTRL17) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL17_PU_PD_UP_Val            _UINT32_(0x1)                                        /* (GPIO_CTRL17) Pull Up Enabled  */
#define   GPIO_CTRL17_PU_PD_DOWN_Val          _UINT32_(0x2)                                        /* (GPIO_CTRL17) Pull Down Enabled  */
#define   GPIO_CTRL17_PU_PD_REPEATER_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL17) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL17_PU_PD_NONE                (GPIO_CTRL17_PU_PD_NONE_Val << GPIO_CTRL17_PU_PD_Pos) /* (GPIO_CTRL17) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL17_PU_PD_UP                  (GPIO_CTRL17_PU_PD_UP_Val << GPIO_CTRL17_PU_PD_Pos)  /* (GPIO_CTRL17) Pull Up Enabled Position  */
#define GPIO_CTRL17_PU_PD_DOWN                (GPIO_CTRL17_PU_PD_DOWN_Val << GPIO_CTRL17_PU_PD_Pos) /* (GPIO_CTRL17) Pull Down Enabled Position  */
#define GPIO_CTRL17_PU_PD_REPEATER            (GPIO_CTRL17_PU_PD_REPEATER_Val << GPIO_CTRL17_PU_PD_Pos) /* (GPIO_CTRL17) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL17_PWR_GATING_Pos            _UINT32_(2)                                          /* (GPIO_CTRL17) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL17_PWR_GATING_Msk            (_UINT32_(0x3) << GPIO_CTRL17_PWR_GATING_Pos)        /* (GPIO_CTRL17) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL17_PWR_GATING(value)         (GPIO_CTRL17_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL17_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL17 register */
#define GPIO_CTRL17_INTR_DET_Pos              _UINT32_(4)                                          /* (GPIO_CTRL17) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL17_INTR_DET_Msk              (_UINT32_(0x7) << GPIO_CTRL17_INTR_DET_Pos)          /* (GPIO_CTRL17) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL17_INTR_DET(value)           (GPIO_CTRL17_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL17_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL17 register */
#define GPIO_CTRL17_EDGE_EN_Pos               _UINT32_(7)                                          /* (GPIO_CTRL17) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL17_EDGE_EN_Msk               (_UINT32_(0x1) << GPIO_CTRL17_EDGE_EN_Pos)           /* (GPIO_CTRL17) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL17_EDGE_EN(value)            (GPIO_CTRL17_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL17_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL17 register */
#define GPIO_CTRL17_OUT_BUFF_TYPE_Pos         _UINT32_(8)                                          /* (GPIO_CTRL17) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL17_OUT_BUFF_TYPE_Msk         (_UINT32_(0x1) << GPIO_CTRL17_OUT_BUFF_TYPE_Pos)     /* (GPIO_CTRL17) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL17_OUT_BUFF_TYPE(value)      (GPIO_CTRL17_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL17_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL17 register */
#define GPIO_CTRL17_GPIO_DIR_Pos              _UINT32_(9)                                          /* (GPIO_CTRL17) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL17_GPIO_DIR_Msk              (_UINT32_(0x1) << GPIO_CTRL17_GPIO_DIR_Pos)          /* (GPIO_CTRL17) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL17_GPIO_DIR(value)           (GPIO_CTRL17_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL17_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL17 register */
#define GPIO_CTRL17_GPIO_OUT_SEL_Pos          _UINT32_(10)                                         /* (GPIO_CTRL17) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL17_GPIO_OUT_SEL_Msk          (_UINT32_(0x1) << GPIO_CTRL17_GPIO_OUT_SEL_Pos)      /* (GPIO_CTRL17) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL17_GPIO_OUT_SEL(value)       (GPIO_CTRL17_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL17_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL17 register */
#define GPIO_CTRL17_POL_Pos                   _UINT32_(11)                                         /* (GPIO_CTRL17) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL17_POL_Msk                   (_UINT32_(0x1) << GPIO_CTRL17_POL_Pos)               /* (GPIO_CTRL17) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL17_POL(value)                (GPIO_CTRL17_POL_Msk & (_UINT32_(value) << GPIO_CTRL17_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL17 register */
#define GPIO_CTRL17_MUX_CTRL_Pos              _UINT32_(12)                                         /* (GPIO_CTRL17) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL17_MUX_CTRL_Msk              (_UINT32_(0x7) << GPIO_CTRL17_MUX_CTRL_Pos)          /* (GPIO_CTRL17) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL17_MUX_CTRL(value)           (GPIO_CTRL17_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL17_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL17 register */
#define   GPIO_CTRL17_MUX_CTRL_GPIO_Val       _UINT32_(0x0)                                        /* (GPIO_CTRL17) GPIO function selected  */
#define   GPIO_CTRL17_MUX_CTRL_FUNC1_Val      _UINT32_(0x1)                                        /* (GPIO_CTRL17) Signal function 1 selected  */
#define   GPIO_CTRL17_MUX_CTRL_FUNC2_Val      _UINT32_(0x2)                                        /* (GPIO_CTRL17) Signal function 2 selected  */
#define   GPIO_CTRL17_MUX_CTRL_FUNC3_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL17) Signal function 3 selected  */
#define GPIO_CTRL17_MUX_CTRL_GPIO             (GPIO_CTRL17_MUX_CTRL_GPIO_Val << GPIO_CTRL17_MUX_CTRL_Pos) /* (GPIO_CTRL17) GPIO function selected Position  */
#define GPIO_CTRL17_MUX_CTRL_FUNC1            (GPIO_CTRL17_MUX_CTRL_FUNC1_Val << GPIO_CTRL17_MUX_CTRL_Pos) /* (GPIO_CTRL17) Signal function 1 selected Position  */
#define GPIO_CTRL17_MUX_CTRL_FUNC2            (GPIO_CTRL17_MUX_CTRL_FUNC2_Val << GPIO_CTRL17_MUX_CTRL_Pos) /* (GPIO_CTRL17) Signal function 2 selected Position  */
#define GPIO_CTRL17_MUX_CTRL_FUNC3            (GPIO_CTRL17_MUX_CTRL_FUNC3_Val << GPIO_CTRL17_MUX_CTRL_Pos) /* (GPIO_CTRL17) Signal function 3 selected Position  */
#define GPIO_CTRL17_INP_DIS_Pos               _UINT32_(15)                                         /* (GPIO_CTRL17) GPIO input disable Position */
#define GPIO_CTRL17_INP_DIS_Msk               (_UINT32_(0x1) << GPIO_CTRL17_INP_DIS_Pos)           /* (GPIO_CTRL17) GPIO input disable Mask */
#define GPIO_CTRL17_INP_DIS(value)            (GPIO_CTRL17_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL17_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL17 register */
#define GPIO_CTRL17_ALT_GPIO_DATA_Pos         _UINT32_(16)                                         /* (GPIO_CTRL17) GPIO Alternate Data Register. Position */
#define GPIO_CTRL17_ALT_GPIO_DATA_Msk         (_UINT32_(0x1) << GPIO_CTRL17_ALT_GPIO_DATA_Pos)     /* (GPIO_CTRL17) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL17_ALT_GPIO_DATA(value)      (GPIO_CTRL17_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL17_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL17 register */
#define GPIO_CTRL17_GPIO_INP_Pos              _UINT32_(24)                                         /* (GPIO_CTRL17) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL17_GPIO_INP_Msk              (_UINT32_(0x1) << GPIO_CTRL17_GPIO_INP_Pos)          /* (GPIO_CTRL17) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL17_GPIO_INP(value)           (GPIO_CTRL17_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL17_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL17 register */
#define GPIO_CTRL17_Msk                       _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL17) Register Mask  */


/* -------- GPIO_CTRL20 : (GPIO Offset: 0x200) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL20_RESETVALUE                _UINT32_(0x8040)                                     /*  (GPIO_CTRL20) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL20_PU_PD_Pos                 _UINT32_(0)                                          /* (GPIO_CTRL20) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL20_PU_PD_Msk                 (_UINT32_(0x3) << GPIO_CTRL20_PU_PD_Pos)             /* (GPIO_CTRL20) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL20_PU_PD(value)              (GPIO_CTRL20_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL20_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL20 register */
#define   GPIO_CTRL20_PU_PD_NONE_Val          _UINT32_(0x0)                                        /* (GPIO_CTRL20) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL20_PU_PD_UP_Val            _UINT32_(0x1)                                        /* (GPIO_CTRL20) Pull Up Enabled  */
#define   GPIO_CTRL20_PU_PD_DOWN_Val          _UINT32_(0x2)                                        /* (GPIO_CTRL20) Pull Down Enabled  */
#define   GPIO_CTRL20_PU_PD_REPEATER_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL20) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL20_PU_PD_NONE                (GPIO_CTRL20_PU_PD_NONE_Val << GPIO_CTRL20_PU_PD_Pos) /* (GPIO_CTRL20) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL20_PU_PD_UP                  (GPIO_CTRL20_PU_PD_UP_Val << GPIO_CTRL20_PU_PD_Pos)  /* (GPIO_CTRL20) Pull Up Enabled Position  */
#define GPIO_CTRL20_PU_PD_DOWN                (GPIO_CTRL20_PU_PD_DOWN_Val << GPIO_CTRL20_PU_PD_Pos) /* (GPIO_CTRL20) Pull Down Enabled Position  */
#define GPIO_CTRL20_PU_PD_REPEATER            (GPIO_CTRL20_PU_PD_REPEATER_Val << GPIO_CTRL20_PU_PD_Pos) /* (GPIO_CTRL20) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL20_PWR_GATING_Pos            _UINT32_(2)                                          /* (GPIO_CTRL20) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL20_PWR_GATING_Msk            (_UINT32_(0x3) << GPIO_CTRL20_PWR_GATING_Pos)        /* (GPIO_CTRL20) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL20_PWR_GATING(value)         (GPIO_CTRL20_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL20_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL20 register */
#define GPIO_CTRL20_INTR_DET_Pos              _UINT32_(4)                                          /* (GPIO_CTRL20) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL20_INTR_DET_Msk              (_UINT32_(0x7) << GPIO_CTRL20_INTR_DET_Pos)          /* (GPIO_CTRL20) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL20_INTR_DET(value)           (GPIO_CTRL20_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL20_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL20 register */
#define GPIO_CTRL20_EDGE_EN_Pos               _UINT32_(7)                                          /* (GPIO_CTRL20) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL20_EDGE_EN_Msk               (_UINT32_(0x1) << GPIO_CTRL20_EDGE_EN_Pos)           /* (GPIO_CTRL20) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL20_EDGE_EN(value)            (GPIO_CTRL20_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL20_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL20 register */
#define GPIO_CTRL20_OUT_BUFF_TYPE_Pos         _UINT32_(8)                                          /* (GPIO_CTRL20) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL20_OUT_BUFF_TYPE_Msk         (_UINT32_(0x1) << GPIO_CTRL20_OUT_BUFF_TYPE_Pos)     /* (GPIO_CTRL20) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL20_OUT_BUFF_TYPE(value)      (GPIO_CTRL20_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL20_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL20 register */
#define GPIO_CTRL20_GPIO_DIR_Pos              _UINT32_(9)                                          /* (GPIO_CTRL20) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL20_GPIO_DIR_Msk              (_UINT32_(0x1) << GPIO_CTRL20_GPIO_DIR_Pos)          /* (GPIO_CTRL20) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL20_GPIO_DIR(value)           (GPIO_CTRL20_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL20_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL20 register */
#define GPIO_CTRL20_GPIO_OUT_SEL_Pos          _UINT32_(10)                                         /* (GPIO_CTRL20) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL20_GPIO_OUT_SEL_Msk          (_UINT32_(0x1) << GPIO_CTRL20_GPIO_OUT_SEL_Pos)      /* (GPIO_CTRL20) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL20_GPIO_OUT_SEL(value)       (GPIO_CTRL20_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL20_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL20 register */
#define GPIO_CTRL20_POL_Pos                   _UINT32_(11)                                         /* (GPIO_CTRL20) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL20_POL_Msk                   (_UINT32_(0x1) << GPIO_CTRL20_POL_Pos)               /* (GPIO_CTRL20) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL20_POL(value)                (GPIO_CTRL20_POL_Msk & (_UINT32_(value) << GPIO_CTRL20_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL20 register */
#define GPIO_CTRL20_MUX_CTRL_Pos              _UINT32_(12)                                         /* (GPIO_CTRL20) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL20_MUX_CTRL_Msk              (_UINT32_(0x7) << GPIO_CTRL20_MUX_CTRL_Pos)          /* (GPIO_CTRL20) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL20_MUX_CTRL(value)           (GPIO_CTRL20_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL20_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL20 register */
#define   GPIO_CTRL20_MUX_CTRL_GPIO_Val       _UINT32_(0x0)                                        /* (GPIO_CTRL20) GPIO function selected  */
#define   GPIO_CTRL20_MUX_CTRL_FUNC1_Val      _UINT32_(0x1)                                        /* (GPIO_CTRL20) Signal function 1 selected  */
#define   GPIO_CTRL20_MUX_CTRL_FUNC2_Val      _UINT32_(0x2)                                        /* (GPIO_CTRL20) Signal function 2 selected  */
#define   GPIO_CTRL20_MUX_CTRL_FUNC3_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL20) Signal function 3 selected  */
#define GPIO_CTRL20_MUX_CTRL_GPIO             (GPIO_CTRL20_MUX_CTRL_GPIO_Val << GPIO_CTRL20_MUX_CTRL_Pos) /* (GPIO_CTRL20) GPIO function selected Position  */
#define GPIO_CTRL20_MUX_CTRL_FUNC1            (GPIO_CTRL20_MUX_CTRL_FUNC1_Val << GPIO_CTRL20_MUX_CTRL_Pos) /* (GPIO_CTRL20) Signal function 1 selected Position  */
#define GPIO_CTRL20_MUX_CTRL_FUNC2            (GPIO_CTRL20_MUX_CTRL_FUNC2_Val << GPIO_CTRL20_MUX_CTRL_Pos) /* (GPIO_CTRL20) Signal function 2 selected Position  */
#define GPIO_CTRL20_MUX_CTRL_FUNC3            (GPIO_CTRL20_MUX_CTRL_FUNC3_Val << GPIO_CTRL20_MUX_CTRL_Pos) /* (GPIO_CTRL20) Signal function 3 selected Position  */
#define GPIO_CTRL20_INP_DIS_Pos               _UINT32_(15)                                         /* (GPIO_CTRL20) GPIO input disable Position */
#define GPIO_CTRL20_INP_DIS_Msk               (_UINT32_(0x1) << GPIO_CTRL20_INP_DIS_Pos)           /* (GPIO_CTRL20) GPIO input disable Mask */
#define GPIO_CTRL20_INP_DIS(value)            (GPIO_CTRL20_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL20_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL20 register */
#define GPIO_CTRL20_ALT_GPIO_DATA_Pos         _UINT32_(16)                                         /* (GPIO_CTRL20) GPIO Alternate Data Register. Position */
#define GPIO_CTRL20_ALT_GPIO_DATA_Msk         (_UINT32_(0x1) << GPIO_CTRL20_ALT_GPIO_DATA_Pos)     /* (GPIO_CTRL20) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL20_ALT_GPIO_DATA(value)      (GPIO_CTRL20_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL20_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL20 register */
#define GPIO_CTRL20_GPIO_INP_Pos              _UINT32_(24)                                         /* (GPIO_CTRL20) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL20_GPIO_INP_Msk              (_UINT32_(0x1) << GPIO_CTRL20_GPIO_INP_Pos)          /* (GPIO_CTRL20) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL20_GPIO_INP(value)           (GPIO_CTRL20_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL20_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL20 register */
#define GPIO_CTRL20_Msk                       _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL20) Register Mask  */


/* -------- GPIO_CTRL21 : (GPIO Offset: 0x220) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL21_RESETVALUE                _UINT32_(0x8040)                                     /*  (GPIO_CTRL21) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL21_PU_PD_Pos                 _UINT32_(0)                                          /* (GPIO_CTRL21) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL21_PU_PD_Msk                 (_UINT32_(0x3) << GPIO_CTRL21_PU_PD_Pos)             /* (GPIO_CTRL21) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL21_PU_PD(value)              (GPIO_CTRL21_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL21_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL21 register */
#define   GPIO_CTRL21_PU_PD_NONE_Val          _UINT32_(0x0)                                        /* (GPIO_CTRL21) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL21_PU_PD_UP_Val            _UINT32_(0x1)                                        /* (GPIO_CTRL21) Pull Up Enabled  */
#define   GPIO_CTRL21_PU_PD_DOWN_Val          _UINT32_(0x2)                                        /* (GPIO_CTRL21) Pull Down Enabled  */
#define   GPIO_CTRL21_PU_PD_REPEATER_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL21) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL21_PU_PD_NONE                (GPIO_CTRL21_PU_PD_NONE_Val << GPIO_CTRL21_PU_PD_Pos) /* (GPIO_CTRL21) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL21_PU_PD_UP                  (GPIO_CTRL21_PU_PD_UP_Val << GPIO_CTRL21_PU_PD_Pos)  /* (GPIO_CTRL21) Pull Up Enabled Position  */
#define GPIO_CTRL21_PU_PD_DOWN                (GPIO_CTRL21_PU_PD_DOWN_Val << GPIO_CTRL21_PU_PD_Pos) /* (GPIO_CTRL21) Pull Down Enabled Position  */
#define GPIO_CTRL21_PU_PD_REPEATER            (GPIO_CTRL21_PU_PD_REPEATER_Val << GPIO_CTRL21_PU_PD_Pos) /* (GPIO_CTRL21) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL21_PWR_GATING_Pos            _UINT32_(2)                                          /* (GPIO_CTRL21) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL21_PWR_GATING_Msk            (_UINT32_(0x3) << GPIO_CTRL21_PWR_GATING_Pos)        /* (GPIO_CTRL21) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL21_PWR_GATING(value)         (GPIO_CTRL21_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL21_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL21 register */
#define GPIO_CTRL21_INTR_DET_Pos              _UINT32_(4)                                          /* (GPIO_CTRL21) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL21_INTR_DET_Msk              (_UINT32_(0x7) << GPIO_CTRL21_INTR_DET_Pos)          /* (GPIO_CTRL21) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL21_INTR_DET(value)           (GPIO_CTRL21_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL21_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL21 register */
#define GPIO_CTRL21_EDGE_EN_Pos               _UINT32_(7)                                          /* (GPIO_CTRL21) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL21_EDGE_EN_Msk               (_UINT32_(0x1) << GPIO_CTRL21_EDGE_EN_Pos)           /* (GPIO_CTRL21) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL21_EDGE_EN(value)            (GPIO_CTRL21_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL21_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL21 register */
#define GPIO_CTRL21_OUT_BUFF_TYPE_Pos         _UINT32_(8)                                          /* (GPIO_CTRL21) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL21_OUT_BUFF_TYPE_Msk         (_UINT32_(0x1) << GPIO_CTRL21_OUT_BUFF_TYPE_Pos)     /* (GPIO_CTRL21) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL21_OUT_BUFF_TYPE(value)      (GPIO_CTRL21_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL21_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL21 register */
#define GPIO_CTRL21_GPIO_DIR_Pos              _UINT32_(9)                                          /* (GPIO_CTRL21) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL21_GPIO_DIR_Msk              (_UINT32_(0x1) << GPIO_CTRL21_GPIO_DIR_Pos)          /* (GPIO_CTRL21) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL21_GPIO_DIR(value)           (GPIO_CTRL21_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL21_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL21 register */
#define GPIO_CTRL21_GPIO_OUT_SEL_Pos          _UINT32_(10)                                         /* (GPIO_CTRL21) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL21_GPIO_OUT_SEL_Msk          (_UINT32_(0x1) << GPIO_CTRL21_GPIO_OUT_SEL_Pos)      /* (GPIO_CTRL21) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL21_GPIO_OUT_SEL(value)       (GPIO_CTRL21_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL21_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL21 register */
#define GPIO_CTRL21_POL_Pos                   _UINT32_(11)                                         /* (GPIO_CTRL21) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL21_POL_Msk                   (_UINT32_(0x1) << GPIO_CTRL21_POL_Pos)               /* (GPIO_CTRL21) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL21_POL(value)                (GPIO_CTRL21_POL_Msk & (_UINT32_(value) << GPIO_CTRL21_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL21 register */
#define GPIO_CTRL21_MUX_CTRL_Pos              _UINT32_(12)                                         /* (GPIO_CTRL21) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL21_MUX_CTRL_Msk              (_UINT32_(0x7) << GPIO_CTRL21_MUX_CTRL_Pos)          /* (GPIO_CTRL21) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL21_MUX_CTRL(value)           (GPIO_CTRL21_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL21_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL21 register */
#define   GPIO_CTRL21_MUX_CTRL_GPIO_Val       _UINT32_(0x0)                                        /* (GPIO_CTRL21) GPIO function selected  */
#define   GPIO_CTRL21_MUX_CTRL_FUNC1_Val      _UINT32_(0x1)                                        /* (GPIO_CTRL21) Signal function 1 selected  */
#define   GPIO_CTRL21_MUX_CTRL_FUNC2_Val      _UINT32_(0x2)                                        /* (GPIO_CTRL21) Signal function 2 selected  */
#define   GPIO_CTRL21_MUX_CTRL_FUNC3_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL21) Signal function 3 selected  */
#define GPIO_CTRL21_MUX_CTRL_GPIO             (GPIO_CTRL21_MUX_CTRL_GPIO_Val << GPIO_CTRL21_MUX_CTRL_Pos) /* (GPIO_CTRL21) GPIO function selected Position  */
#define GPIO_CTRL21_MUX_CTRL_FUNC1            (GPIO_CTRL21_MUX_CTRL_FUNC1_Val << GPIO_CTRL21_MUX_CTRL_Pos) /* (GPIO_CTRL21) Signal function 1 selected Position  */
#define GPIO_CTRL21_MUX_CTRL_FUNC2            (GPIO_CTRL21_MUX_CTRL_FUNC2_Val << GPIO_CTRL21_MUX_CTRL_Pos) /* (GPIO_CTRL21) Signal function 2 selected Position  */
#define GPIO_CTRL21_MUX_CTRL_FUNC3            (GPIO_CTRL21_MUX_CTRL_FUNC3_Val << GPIO_CTRL21_MUX_CTRL_Pos) /* (GPIO_CTRL21) Signal function 3 selected Position  */
#define GPIO_CTRL21_INP_DIS_Pos               _UINT32_(15)                                         /* (GPIO_CTRL21) GPIO input disable Position */
#define GPIO_CTRL21_INP_DIS_Msk               (_UINT32_(0x1) << GPIO_CTRL21_INP_DIS_Pos)           /* (GPIO_CTRL21) GPIO input disable Mask */
#define GPIO_CTRL21_INP_DIS(value)            (GPIO_CTRL21_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL21_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL21 register */
#define GPIO_CTRL21_ALT_GPIO_DATA_Pos         _UINT32_(16)                                         /* (GPIO_CTRL21) GPIO Alternate Data Register. Position */
#define GPIO_CTRL21_ALT_GPIO_DATA_Msk         (_UINT32_(0x1) << GPIO_CTRL21_ALT_GPIO_DATA_Pos)     /* (GPIO_CTRL21) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL21_ALT_GPIO_DATA(value)      (GPIO_CTRL21_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL21_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL21 register */
#define GPIO_CTRL21_GPIO_INP_Pos              _UINT32_(24)                                         /* (GPIO_CTRL21) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL21_GPIO_INP_Msk              (_UINT32_(0x1) << GPIO_CTRL21_GPIO_INP_Pos)          /* (GPIO_CTRL21) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL21_GPIO_INP(value)           (GPIO_CTRL21_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL21_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL21 register */
#define GPIO_CTRL21_Msk                       _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL21) Register Mask  */


/* -------- GPIO_CTRL22 : (GPIO Offset: 0x240) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL22_RESETVALUE                _UINT32_(0x8040)                                     /*  (GPIO_CTRL22) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL22_PU_PD_Pos                 _UINT32_(0)                                          /* (GPIO_CTRL22) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL22_PU_PD_Msk                 (_UINT32_(0x3) << GPIO_CTRL22_PU_PD_Pos)             /* (GPIO_CTRL22) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL22_PU_PD(value)              (GPIO_CTRL22_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL22_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL22 register */
#define   GPIO_CTRL22_PU_PD_NONE_Val          _UINT32_(0x0)                                        /* (GPIO_CTRL22) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL22_PU_PD_UP_Val            _UINT32_(0x1)                                        /* (GPIO_CTRL22) Pull Up Enabled  */
#define   GPIO_CTRL22_PU_PD_DOWN_Val          _UINT32_(0x2)                                        /* (GPIO_CTRL22) Pull Down Enabled  */
#define   GPIO_CTRL22_PU_PD_REPEATER_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL22) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL22_PU_PD_NONE                (GPIO_CTRL22_PU_PD_NONE_Val << GPIO_CTRL22_PU_PD_Pos) /* (GPIO_CTRL22) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL22_PU_PD_UP                  (GPIO_CTRL22_PU_PD_UP_Val << GPIO_CTRL22_PU_PD_Pos)  /* (GPIO_CTRL22) Pull Up Enabled Position  */
#define GPIO_CTRL22_PU_PD_DOWN                (GPIO_CTRL22_PU_PD_DOWN_Val << GPIO_CTRL22_PU_PD_Pos) /* (GPIO_CTRL22) Pull Down Enabled Position  */
#define GPIO_CTRL22_PU_PD_REPEATER            (GPIO_CTRL22_PU_PD_REPEATER_Val << GPIO_CTRL22_PU_PD_Pos) /* (GPIO_CTRL22) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL22_PWR_GATING_Pos            _UINT32_(2)                                          /* (GPIO_CTRL22) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL22_PWR_GATING_Msk            (_UINT32_(0x3) << GPIO_CTRL22_PWR_GATING_Pos)        /* (GPIO_CTRL22) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL22_PWR_GATING(value)         (GPIO_CTRL22_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL22_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL22 register */
#define GPIO_CTRL22_INTR_DET_Pos              _UINT32_(4)                                          /* (GPIO_CTRL22) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL22_INTR_DET_Msk              (_UINT32_(0x7) << GPIO_CTRL22_INTR_DET_Pos)          /* (GPIO_CTRL22) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL22_INTR_DET(value)           (GPIO_CTRL22_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL22_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL22 register */
#define GPIO_CTRL22_EDGE_EN_Pos               _UINT32_(7)                                          /* (GPIO_CTRL22) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL22_EDGE_EN_Msk               (_UINT32_(0x1) << GPIO_CTRL22_EDGE_EN_Pos)           /* (GPIO_CTRL22) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL22_EDGE_EN(value)            (GPIO_CTRL22_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL22_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL22 register */
#define GPIO_CTRL22_OUT_BUFF_TYPE_Pos         _UINT32_(8)                                          /* (GPIO_CTRL22) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL22_OUT_BUFF_TYPE_Msk         (_UINT32_(0x1) << GPIO_CTRL22_OUT_BUFF_TYPE_Pos)     /* (GPIO_CTRL22) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL22_OUT_BUFF_TYPE(value)      (GPIO_CTRL22_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL22_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL22 register */
#define GPIO_CTRL22_GPIO_DIR_Pos              _UINT32_(9)                                          /* (GPIO_CTRL22) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL22_GPIO_DIR_Msk              (_UINT32_(0x1) << GPIO_CTRL22_GPIO_DIR_Pos)          /* (GPIO_CTRL22) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL22_GPIO_DIR(value)           (GPIO_CTRL22_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL22_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL22 register */
#define GPIO_CTRL22_GPIO_OUT_SEL_Pos          _UINT32_(10)                                         /* (GPIO_CTRL22) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL22_GPIO_OUT_SEL_Msk          (_UINT32_(0x1) << GPIO_CTRL22_GPIO_OUT_SEL_Pos)      /* (GPIO_CTRL22) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL22_GPIO_OUT_SEL(value)       (GPIO_CTRL22_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL22_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL22 register */
#define GPIO_CTRL22_POL_Pos                   _UINT32_(11)                                         /* (GPIO_CTRL22) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL22_POL_Msk                   (_UINT32_(0x1) << GPIO_CTRL22_POL_Pos)               /* (GPIO_CTRL22) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL22_POL(value)                (GPIO_CTRL22_POL_Msk & (_UINT32_(value) << GPIO_CTRL22_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL22 register */
#define GPIO_CTRL22_MUX_CTRL_Pos              _UINT32_(12)                                         /* (GPIO_CTRL22) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL22_MUX_CTRL_Msk              (_UINT32_(0x7) << GPIO_CTRL22_MUX_CTRL_Pos)          /* (GPIO_CTRL22) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL22_MUX_CTRL(value)           (GPIO_CTRL22_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL22_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL22 register */
#define   GPIO_CTRL22_MUX_CTRL_GPIO_Val       _UINT32_(0x0)                                        /* (GPIO_CTRL22) GPIO function selected  */
#define   GPIO_CTRL22_MUX_CTRL_FUNC1_Val      _UINT32_(0x1)                                        /* (GPIO_CTRL22) Signal function 1 selected  */
#define   GPIO_CTRL22_MUX_CTRL_FUNC2_Val      _UINT32_(0x2)                                        /* (GPIO_CTRL22) Signal function 2 selected  */
#define   GPIO_CTRL22_MUX_CTRL_FUNC3_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL22) Signal function 3 selected  */
#define GPIO_CTRL22_MUX_CTRL_GPIO             (GPIO_CTRL22_MUX_CTRL_GPIO_Val << GPIO_CTRL22_MUX_CTRL_Pos) /* (GPIO_CTRL22) GPIO function selected Position  */
#define GPIO_CTRL22_MUX_CTRL_FUNC1            (GPIO_CTRL22_MUX_CTRL_FUNC1_Val << GPIO_CTRL22_MUX_CTRL_Pos) /* (GPIO_CTRL22) Signal function 1 selected Position  */
#define GPIO_CTRL22_MUX_CTRL_FUNC2            (GPIO_CTRL22_MUX_CTRL_FUNC2_Val << GPIO_CTRL22_MUX_CTRL_Pos) /* (GPIO_CTRL22) Signal function 2 selected Position  */
#define GPIO_CTRL22_MUX_CTRL_FUNC3            (GPIO_CTRL22_MUX_CTRL_FUNC3_Val << GPIO_CTRL22_MUX_CTRL_Pos) /* (GPIO_CTRL22) Signal function 3 selected Position  */
#define GPIO_CTRL22_INP_DIS_Pos               _UINT32_(15)                                         /* (GPIO_CTRL22) GPIO input disable Position */
#define GPIO_CTRL22_INP_DIS_Msk               (_UINT32_(0x1) << GPIO_CTRL22_INP_DIS_Pos)           /* (GPIO_CTRL22) GPIO input disable Mask */
#define GPIO_CTRL22_INP_DIS(value)            (GPIO_CTRL22_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL22_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL22 register */
#define GPIO_CTRL22_ALT_GPIO_DATA_Pos         _UINT32_(16)                                         /* (GPIO_CTRL22) GPIO Alternate Data Register. Position */
#define GPIO_CTRL22_ALT_GPIO_DATA_Msk         (_UINT32_(0x1) << GPIO_CTRL22_ALT_GPIO_DATA_Pos)     /* (GPIO_CTRL22) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL22_ALT_GPIO_DATA(value)      (GPIO_CTRL22_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL22_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL22 register */
#define GPIO_CTRL22_GPIO_INP_Pos              _UINT32_(24)                                         /* (GPIO_CTRL22) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL22_GPIO_INP_Msk              (_UINT32_(0x1) << GPIO_CTRL22_GPIO_INP_Pos)          /* (GPIO_CTRL22) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL22_GPIO_INP(value)           (GPIO_CTRL22_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL22_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL22 register */
#define GPIO_CTRL22_Msk                       _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL22) Register Mask  */


/* -------- GPIO_CTRL23 : (GPIO Offset: 0x260) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL23_RESETVALUE                _UINT32_(0x8040)                                     /*  (GPIO_CTRL23) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL23_PU_PD_Pos                 _UINT32_(0)                                          /* (GPIO_CTRL23) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL23_PU_PD_Msk                 (_UINT32_(0x3) << GPIO_CTRL23_PU_PD_Pos)             /* (GPIO_CTRL23) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL23_PU_PD(value)              (GPIO_CTRL23_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL23_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL23 register */
#define   GPIO_CTRL23_PU_PD_NONE_Val          _UINT32_(0x0)                                        /* (GPIO_CTRL23) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL23_PU_PD_UP_Val            _UINT32_(0x1)                                        /* (GPIO_CTRL23) Pull Up Enabled  */
#define   GPIO_CTRL23_PU_PD_DOWN_Val          _UINT32_(0x2)                                        /* (GPIO_CTRL23) Pull Down Enabled  */
#define   GPIO_CTRL23_PU_PD_REPEATER_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL23) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL23_PU_PD_NONE                (GPIO_CTRL23_PU_PD_NONE_Val << GPIO_CTRL23_PU_PD_Pos) /* (GPIO_CTRL23) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL23_PU_PD_UP                  (GPIO_CTRL23_PU_PD_UP_Val << GPIO_CTRL23_PU_PD_Pos)  /* (GPIO_CTRL23) Pull Up Enabled Position  */
#define GPIO_CTRL23_PU_PD_DOWN                (GPIO_CTRL23_PU_PD_DOWN_Val << GPIO_CTRL23_PU_PD_Pos) /* (GPIO_CTRL23) Pull Down Enabled Position  */
#define GPIO_CTRL23_PU_PD_REPEATER            (GPIO_CTRL23_PU_PD_REPEATER_Val << GPIO_CTRL23_PU_PD_Pos) /* (GPIO_CTRL23) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL23_PWR_GATING_Pos            _UINT32_(2)                                          /* (GPIO_CTRL23) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL23_PWR_GATING_Msk            (_UINT32_(0x3) << GPIO_CTRL23_PWR_GATING_Pos)        /* (GPIO_CTRL23) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL23_PWR_GATING(value)         (GPIO_CTRL23_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL23_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL23 register */
#define GPIO_CTRL23_INTR_DET_Pos              _UINT32_(4)                                          /* (GPIO_CTRL23) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL23_INTR_DET_Msk              (_UINT32_(0x7) << GPIO_CTRL23_INTR_DET_Pos)          /* (GPIO_CTRL23) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL23_INTR_DET(value)           (GPIO_CTRL23_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL23_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL23 register */
#define GPIO_CTRL23_EDGE_EN_Pos               _UINT32_(7)                                          /* (GPIO_CTRL23) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL23_EDGE_EN_Msk               (_UINT32_(0x1) << GPIO_CTRL23_EDGE_EN_Pos)           /* (GPIO_CTRL23) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL23_EDGE_EN(value)            (GPIO_CTRL23_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL23_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL23 register */
#define GPIO_CTRL23_OUT_BUFF_TYPE_Pos         _UINT32_(8)                                          /* (GPIO_CTRL23) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL23_OUT_BUFF_TYPE_Msk         (_UINT32_(0x1) << GPIO_CTRL23_OUT_BUFF_TYPE_Pos)     /* (GPIO_CTRL23) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL23_OUT_BUFF_TYPE(value)      (GPIO_CTRL23_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL23_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL23 register */
#define GPIO_CTRL23_GPIO_DIR_Pos              _UINT32_(9)                                          /* (GPIO_CTRL23) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL23_GPIO_DIR_Msk              (_UINT32_(0x1) << GPIO_CTRL23_GPIO_DIR_Pos)          /* (GPIO_CTRL23) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL23_GPIO_DIR(value)           (GPIO_CTRL23_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL23_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL23 register */
#define GPIO_CTRL23_GPIO_OUT_SEL_Pos          _UINT32_(10)                                         /* (GPIO_CTRL23) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL23_GPIO_OUT_SEL_Msk          (_UINT32_(0x1) << GPIO_CTRL23_GPIO_OUT_SEL_Pos)      /* (GPIO_CTRL23) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL23_GPIO_OUT_SEL(value)       (GPIO_CTRL23_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL23_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL23 register */
#define GPIO_CTRL23_POL_Pos                   _UINT32_(11)                                         /* (GPIO_CTRL23) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL23_POL_Msk                   (_UINT32_(0x1) << GPIO_CTRL23_POL_Pos)               /* (GPIO_CTRL23) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL23_POL(value)                (GPIO_CTRL23_POL_Msk & (_UINT32_(value) << GPIO_CTRL23_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL23 register */
#define GPIO_CTRL23_MUX_CTRL_Pos              _UINT32_(12)                                         /* (GPIO_CTRL23) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL23_MUX_CTRL_Msk              (_UINT32_(0x7) << GPIO_CTRL23_MUX_CTRL_Pos)          /* (GPIO_CTRL23) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL23_MUX_CTRL(value)           (GPIO_CTRL23_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL23_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL23 register */
#define   GPIO_CTRL23_MUX_CTRL_GPIO_Val       _UINT32_(0x0)                                        /* (GPIO_CTRL23) GPIO function selected  */
#define   GPIO_CTRL23_MUX_CTRL_FUNC1_Val      _UINT32_(0x1)                                        /* (GPIO_CTRL23) Signal function 1 selected  */
#define   GPIO_CTRL23_MUX_CTRL_FUNC2_Val      _UINT32_(0x2)                                        /* (GPIO_CTRL23) Signal function 2 selected  */
#define   GPIO_CTRL23_MUX_CTRL_FUNC3_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL23) Signal function 3 selected  */
#define GPIO_CTRL23_MUX_CTRL_GPIO             (GPIO_CTRL23_MUX_CTRL_GPIO_Val << GPIO_CTRL23_MUX_CTRL_Pos) /* (GPIO_CTRL23) GPIO function selected Position  */
#define GPIO_CTRL23_MUX_CTRL_FUNC1            (GPIO_CTRL23_MUX_CTRL_FUNC1_Val << GPIO_CTRL23_MUX_CTRL_Pos) /* (GPIO_CTRL23) Signal function 1 selected Position  */
#define GPIO_CTRL23_MUX_CTRL_FUNC2            (GPIO_CTRL23_MUX_CTRL_FUNC2_Val << GPIO_CTRL23_MUX_CTRL_Pos) /* (GPIO_CTRL23) Signal function 2 selected Position  */
#define GPIO_CTRL23_MUX_CTRL_FUNC3            (GPIO_CTRL23_MUX_CTRL_FUNC3_Val << GPIO_CTRL23_MUX_CTRL_Pos) /* (GPIO_CTRL23) Signal function 3 selected Position  */
#define GPIO_CTRL23_INP_DIS_Pos               _UINT32_(15)                                         /* (GPIO_CTRL23) GPIO input disable Position */
#define GPIO_CTRL23_INP_DIS_Msk               (_UINT32_(0x1) << GPIO_CTRL23_INP_DIS_Pos)           /* (GPIO_CTRL23) GPIO input disable Mask */
#define GPIO_CTRL23_INP_DIS(value)            (GPIO_CTRL23_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL23_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL23 register */
#define GPIO_CTRL23_ALT_GPIO_DATA_Pos         _UINT32_(16)                                         /* (GPIO_CTRL23) GPIO Alternate Data Register. Position */
#define GPIO_CTRL23_ALT_GPIO_DATA_Msk         (_UINT32_(0x1) << GPIO_CTRL23_ALT_GPIO_DATA_Pos)     /* (GPIO_CTRL23) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL23_ALT_GPIO_DATA(value)      (GPIO_CTRL23_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL23_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL23 register */
#define GPIO_CTRL23_GPIO_INP_Pos              _UINT32_(24)                                         /* (GPIO_CTRL23) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL23_GPIO_INP_Msk              (_UINT32_(0x1) << GPIO_CTRL23_GPIO_INP_Pos)          /* (GPIO_CTRL23) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL23_GPIO_INP(value)           (GPIO_CTRL23_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL23_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL23 register */
#define GPIO_CTRL23_Msk                       _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL23) Register Mask  */


/* -------- GPIO_CTRL24 : (GPIO Offset: 0x280) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL24_RESETVALUE                _UINT32_(0x8040)                                     /*  (GPIO_CTRL24) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL24_PU_PD_Pos                 _UINT32_(0)                                          /* (GPIO_CTRL24) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL24_PU_PD_Msk                 (_UINT32_(0x3) << GPIO_CTRL24_PU_PD_Pos)             /* (GPIO_CTRL24) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL24_PU_PD(value)              (GPIO_CTRL24_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL24_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL24 register */
#define   GPIO_CTRL24_PU_PD_NONE_Val          _UINT32_(0x0)                                        /* (GPIO_CTRL24) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL24_PU_PD_UP_Val            _UINT32_(0x1)                                        /* (GPIO_CTRL24) Pull Up Enabled  */
#define   GPIO_CTRL24_PU_PD_DOWN_Val          _UINT32_(0x2)                                        /* (GPIO_CTRL24) Pull Down Enabled  */
#define   GPIO_CTRL24_PU_PD_REPEATER_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL24) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL24_PU_PD_NONE                (GPIO_CTRL24_PU_PD_NONE_Val << GPIO_CTRL24_PU_PD_Pos) /* (GPIO_CTRL24) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL24_PU_PD_UP                  (GPIO_CTRL24_PU_PD_UP_Val << GPIO_CTRL24_PU_PD_Pos)  /* (GPIO_CTRL24) Pull Up Enabled Position  */
#define GPIO_CTRL24_PU_PD_DOWN                (GPIO_CTRL24_PU_PD_DOWN_Val << GPIO_CTRL24_PU_PD_Pos) /* (GPIO_CTRL24) Pull Down Enabled Position  */
#define GPIO_CTRL24_PU_PD_REPEATER            (GPIO_CTRL24_PU_PD_REPEATER_Val << GPIO_CTRL24_PU_PD_Pos) /* (GPIO_CTRL24) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL24_PWR_GATING_Pos            _UINT32_(2)                                          /* (GPIO_CTRL24) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL24_PWR_GATING_Msk            (_UINT32_(0x3) << GPIO_CTRL24_PWR_GATING_Pos)        /* (GPIO_CTRL24) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL24_PWR_GATING(value)         (GPIO_CTRL24_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL24_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL24 register */
#define GPIO_CTRL24_INTR_DET_Pos              _UINT32_(4)                                          /* (GPIO_CTRL24) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL24_INTR_DET_Msk              (_UINT32_(0x7) << GPIO_CTRL24_INTR_DET_Pos)          /* (GPIO_CTRL24) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL24_INTR_DET(value)           (GPIO_CTRL24_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL24_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL24 register */
#define GPIO_CTRL24_EDGE_EN_Pos               _UINT32_(7)                                          /* (GPIO_CTRL24) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL24_EDGE_EN_Msk               (_UINT32_(0x1) << GPIO_CTRL24_EDGE_EN_Pos)           /* (GPIO_CTRL24) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL24_EDGE_EN(value)            (GPIO_CTRL24_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL24_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL24 register */
#define GPIO_CTRL24_OUT_BUFF_TYPE_Pos         _UINT32_(8)                                          /* (GPIO_CTRL24) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL24_OUT_BUFF_TYPE_Msk         (_UINT32_(0x1) << GPIO_CTRL24_OUT_BUFF_TYPE_Pos)     /* (GPIO_CTRL24) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL24_OUT_BUFF_TYPE(value)      (GPIO_CTRL24_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL24_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL24 register */
#define GPIO_CTRL24_GPIO_DIR_Pos              _UINT32_(9)                                          /* (GPIO_CTRL24) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL24_GPIO_DIR_Msk              (_UINT32_(0x1) << GPIO_CTRL24_GPIO_DIR_Pos)          /* (GPIO_CTRL24) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL24_GPIO_DIR(value)           (GPIO_CTRL24_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL24_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL24 register */
#define GPIO_CTRL24_GPIO_OUT_SEL_Pos          _UINT32_(10)                                         /* (GPIO_CTRL24) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL24_GPIO_OUT_SEL_Msk          (_UINT32_(0x1) << GPIO_CTRL24_GPIO_OUT_SEL_Pos)      /* (GPIO_CTRL24) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL24_GPIO_OUT_SEL(value)       (GPIO_CTRL24_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL24_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL24 register */
#define GPIO_CTRL24_POL_Pos                   _UINT32_(11)                                         /* (GPIO_CTRL24) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL24_POL_Msk                   (_UINT32_(0x1) << GPIO_CTRL24_POL_Pos)               /* (GPIO_CTRL24) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL24_POL(value)                (GPIO_CTRL24_POL_Msk & (_UINT32_(value) << GPIO_CTRL24_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL24 register */
#define GPIO_CTRL24_MUX_CTRL_Pos              _UINT32_(12)                                         /* (GPIO_CTRL24) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL24_MUX_CTRL_Msk              (_UINT32_(0x7) << GPIO_CTRL24_MUX_CTRL_Pos)          /* (GPIO_CTRL24) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL24_MUX_CTRL(value)           (GPIO_CTRL24_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL24_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL24 register */
#define   GPIO_CTRL24_MUX_CTRL_GPIO_Val       _UINT32_(0x0)                                        /* (GPIO_CTRL24) GPIO function selected  */
#define   GPIO_CTRL24_MUX_CTRL_FUNC1_Val      _UINT32_(0x1)                                        /* (GPIO_CTRL24) Signal function 1 selected  */
#define   GPIO_CTRL24_MUX_CTRL_FUNC2_Val      _UINT32_(0x2)                                        /* (GPIO_CTRL24) Signal function 2 selected  */
#define   GPIO_CTRL24_MUX_CTRL_FUNC3_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL24) Signal function 3 selected  */
#define GPIO_CTRL24_MUX_CTRL_GPIO             (GPIO_CTRL24_MUX_CTRL_GPIO_Val << GPIO_CTRL24_MUX_CTRL_Pos) /* (GPIO_CTRL24) GPIO function selected Position  */
#define GPIO_CTRL24_MUX_CTRL_FUNC1            (GPIO_CTRL24_MUX_CTRL_FUNC1_Val << GPIO_CTRL24_MUX_CTRL_Pos) /* (GPIO_CTRL24) Signal function 1 selected Position  */
#define GPIO_CTRL24_MUX_CTRL_FUNC2            (GPIO_CTRL24_MUX_CTRL_FUNC2_Val << GPIO_CTRL24_MUX_CTRL_Pos) /* (GPIO_CTRL24) Signal function 2 selected Position  */
#define GPIO_CTRL24_MUX_CTRL_FUNC3            (GPIO_CTRL24_MUX_CTRL_FUNC3_Val << GPIO_CTRL24_MUX_CTRL_Pos) /* (GPIO_CTRL24) Signal function 3 selected Position  */
#define GPIO_CTRL24_INP_DIS_Pos               _UINT32_(15)                                         /* (GPIO_CTRL24) GPIO input disable Position */
#define GPIO_CTRL24_INP_DIS_Msk               (_UINT32_(0x1) << GPIO_CTRL24_INP_DIS_Pos)           /* (GPIO_CTRL24) GPIO input disable Mask */
#define GPIO_CTRL24_INP_DIS(value)            (GPIO_CTRL24_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL24_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL24 register */
#define GPIO_CTRL24_ALT_GPIO_DATA_Pos         _UINT32_(16)                                         /* (GPIO_CTRL24) GPIO Alternate Data Register. Position */
#define GPIO_CTRL24_ALT_GPIO_DATA_Msk         (_UINT32_(0x1) << GPIO_CTRL24_ALT_GPIO_DATA_Pos)     /* (GPIO_CTRL24) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL24_ALT_GPIO_DATA(value)      (GPIO_CTRL24_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL24_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL24 register */
#define GPIO_CTRL24_GPIO_INP_Pos              _UINT32_(24)                                         /* (GPIO_CTRL24) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL24_GPIO_INP_Msk              (_UINT32_(0x1) << GPIO_CTRL24_GPIO_INP_Pos)          /* (GPIO_CTRL24) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL24_GPIO_INP(value)           (GPIO_CTRL24_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL24_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL24 register */
#define GPIO_CTRL24_Msk                       _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL24) Register Mask  */


/* -------- GPIO_CTRL25 : (GPIO Offset: 0x2A0) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL25_RESETVALUE                _UINT32_(0x8040)                                     /*  (GPIO_CTRL25) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL25_PU_PD_Pos                 _UINT32_(0)                                          /* (GPIO_CTRL25) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL25_PU_PD_Msk                 (_UINT32_(0x3) << GPIO_CTRL25_PU_PD_Pos)             /* (GPIO_CTRL25) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL25_PU_PD(value)              (GPIO_CTRL25_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL25_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL25 register */
#define   GPIO_CTRL25_PU_PD_NONE_Val          _UINT32_(0x0)                                        /* (GPIO_CTRL25) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL25_PU_PD_UP_Val            _UINT32_(0x1)                                        /* (GPIO_CTRL25) Pull Up Enabled  */
#define   GPIO_CTRL25_PU_PD_DOWN_Val          _UINT32_(0x2)                                        /* (GPIO_CTRL25) Pull Down Enabled  */
#define   GPIO_CTRL25_PU_PD_REPEATER_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL25) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL25_PU_PD_NONE                (GPIO_CTRL25_PU_PD_NONE_Val << GPIO_CTRL25_PU_PD_Pos) /* (GPIO_CTRL25) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL25_PU_PD_UP                  (GPIO_CTRL25_PU_PD_UP_Val << GPIO_CTRL25_PU_PD_Pos)  /* (GPIO_CTRL25) Pull Up Enabled Position  */
#define GPIO_CTRL25_PU_PD_DOWN                (GPIO_CTRL25_PU_PD_DOWN_Val << GPIO_CTRL25_PU_PD_Pos) /* (GPIO_CTRL25) Pull Down Enabled Position  */
#define GPIO_CTRL25_PU_PD_REPEATER            (GPIO_CTRL25_PU_PD_REPEATER_Val << GPIO_CTRL25_PU_PD_Pos) /* (GPIO_CTRL25) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL25_PWR_GATING_Pos            _UINT32_(2)                                          /* (GPIO_CTRL25) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL25_PWR_GATING_Msk            (_UINT32_(0x3) << GPIO_CTRL25_PWR_GATING_Pos)        /* (GPIO_CTRL25) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL25_PWR_GATING(value)         (GPIO_CTRL25_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL25_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL25 register */
#define GPIO_CTRL25_INTR_DET_Pos              _UINT32_(4)                                          /* (GPIO_CTRL25) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL25_INTR_DET_Msk              (_UINT32_(0x7) << GPIO_CTRL25_INTR_DET_Pos)          /* (GPIO_CTRL25) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL25_INTR_DET(value)           (GPIO_CTRL25_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL25_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL25 register */
#define GPIO_CTRL25_EDGE_EN_Pos               _UINT32_(7)                                          /* (GPIO_CTRL25) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL25_EDGE_EN_Msk               (_UINT32_(0x1) << GPIO_CTRL25_EDGE_EN_Pos)           /* (GPIO_CTRL25) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL25_EDGE_EN(value)            (GPIO_CTRL25_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL25_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL25 register */
#define GPIO_CTRL25_OUT_BUFF_TYPE_Pos         _UINT32_(8)                                          /* (GPIO_CTRL25) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL25_OUT_BUFF_TYPE_Msk         (_UINT32_(0x1) << GPIO_CTRL25_OUT_BUFF_TYPE_Pos)     /* (GPIO_CTRL25) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL25_OUT_BUFF_TYPE(value)      (GPIO_CTRL25_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL25_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL25 register */
#define GPIO_CTRL25_GPIO_DIR_Pos              _UINT32_(9)                                          /* (GPIO_CTRL25) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL25_GPIO_DIR_Msk              (_UINT32_(0x1) << GPIO_CTRL25_GPIO_DIR_Pos)          /* (GPIO_CTRL25) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL25_GPIO_DIR(value)           (GPIO_CTRL25_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL25_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL25 register */
#define GPIO_CTRL25_GPIO_OUT_SEL_Pos          _UINT32_(10)                                         /* (GPIO_CTRL25) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL25_GPIO_OUT_SEL_Msk          (_UINT32_(0x1) << GPIO_CTRL25_GPIO_OUT_SEL_Pos)      /* (GPIO_CTRL25) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL25_GPIO_OUT_SEL(value)       (GPIO_CTRL25_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL25_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL25 register */
#define GPIO_CTRL25_POL_Pos                   _UINT32_(11)                                         /* (GPIO_CTRL25) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL25_POL_Msk                   (_UINT32_(0x1) << GPIO_CTRL25_POL_Pos)               /* (GPIO_CTRL25) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL25_POL(value)                (GPIO_CTRL25_POL_Msk & (_UINT32_(value) << GPIO_CTRL25_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL25 register */
#define GPIO_CTRL25_MUX_CTRL_Pos              _UINT32_(12)                                         /* (GPIO_CTRL25) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL25_MUX_CTRL_Msk              (_UINT32_(0x7) << GPIO_CTRL25_MUX_CTRL_Pos)          /* (GPIO_CTRL25) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL25_MUX_CTRL(value)           (GPIO_CTRL25_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL25_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL25 register */
#define   GPIO_CTRL25_MUX_CTRL_GPIO_Val       _UINT32_(0x0)                                        /* (GPIO_CTRL25) GPIO function selected  */
#define   GPIO_CTRL25_MUX_CTRL_FUNC1_Val      _UINT32_(0x1)                                        /* (GPIO_CTRL25) Signal function 1 selected  */
#define   GPIO_CTRL25_MUX_CTRL_FUNC2_Val      _UINT32_(0x2)                                        /* (GPIO_CTRL25) Signal function 2 selected  */
#define   GPIO_CTRL25_MUX_CTRL_FUNC3_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL25) Signal function 3 selected  */
#define GPIO_CTRL25_MUX_CTRL_GPIO             (GPIO_CTRL25_MUX_CTRL_GPIO_Val << GPIO_CTRL25_MUX_CTRL_Pos) /* (GPIO_CTRL25) GPIO function selected Position  */
#define GPIO_CTRL25_MUX_CTRL_FUNC1            (GPIO_CTRL25_MUX_CTRL_FUNC1_Val << GPIO_CTRL25_MUX_CTRL_Pos) /* (GPIO_CTRL25) Signal function 1 selected Position  */
#define GPIO_CTRL25_MUX_CTRL_FUNC2            (GPIO_CTRL25_MUX_CTRL_FUNC2_Val << GPIO_CTRL25_MUX_CTRL_Pos) /* (GPIO_CTRL25) Signal function 2 selected Position  */
#define GPIO_CTRL25_MUX_CTRL_FUNC3            (GPIO_CTRL25_MUX_CTRL_FUNC3_Val << GPIO_CTRL25_MUX_CTRL_Pos) /* (GPIO_CTRL25) Signal function 3 selected Position  */
#define GPIO_CTRL25_INP_DIS_Pos               _UINT32_(15)                                         /* (GPIO_CTRL25) GPIO input disable Position */
#define GPIO_CTRL25_INP_DIS_Msk               (_UINT32_(0x1) << GPIO_CTRL25_INP_DIS_Pos)           /* (GPIO_CTRL25) GPIO input disable Mask */
#define GPIO_CTRL25_INP_DIS(value)            (GPIO_CTRL25_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL25_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL25 register */
#define GPIO_CTRL25_ALT_GPIO_DATA_Pos         _UINT32_(16)                                         /* (GPIO_CTRL25) GPIO Alternate Data Register. Position */
#define GPIO_CTRL25_ALT_GPIO_DATA_Msk         (_UINT32_(0x1) << GPIO_CTRL25_ALT_GPIO_DATA_Pos)     /* (GPIO_CTRL25) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL25_ALT_GPIO_DATA(value)      (GPIO_CTRL25_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL25_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL25 register */
#define GPIO_CTRL25_GPIO_INP_Pos              _UINT32_(24)                                         /* (GPIO_CTRL25) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL25_GPIO_INP_Msk              (_UINT32_(0x1) << GPIO_CTRL25_GPIO_INP_Pos)          /* (GPIO_CTRL25) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL25_GPIO_INP(value)           (GPIO_CTRL25_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL25_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL25 register */
#define GPIO_CTRL25_Msk                       _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL25) Register Mask  */


/* -------- GPIO_CTRL26 : (GPIO Offset: 0x2C0) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL26_RESETVALUE                _UINT32_(0x8040)                                     /*  (GPIO_CTRL26) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL26_PU_PD_Pos                 _UINT32_(0)                                          /* (GPIO_CTRL26) These bits are used to enable an internal pull-up or pull-down resistor. Position */
#define GPIO_CTRL26_PU_PD_Msk                 (_UINT32_(0x3) << GPIO_CTRL26_PU_PD_Pos)             /* (GPIO_CTRL26) These bits are used to enable an internal pull-up or pull-down resistor. Mask */
#define GPIO_CTRL26_PU_PD(value)              (GPIO_CTRL26_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL26_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL26 register */
#define   GPIO_CTRL26_PU_PD_NONE_Val          _UINT32_(0x0)                                        /* (GPIO_CTRL26) None. Pin tristates when no active driver is present on the pin.  */
#define   GPIO_CTRL26_PU_PD_UP_Val            _UINT32_(0x1)                                        /* (GPIO_CTRL26) Pull Up Enabled  */
#define   GPIO_CTRL26_PU_PD_DOWN_Val          _UINT32_(0x2)                                        /* (GPIO_CTRL26) Pull Down Enabled  */
#define   GPIO_CTRL26_PU_PD_REPEATER_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL26) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin.  */
#define GPIO_CTRL26_PU_PD_NONE                (GPIO_CTRL26_PU_PD_NONE_Val << GPIO_CTRL26_PU_PD_Pos) /* (GPIO_CTRL26) None. Pin tristates when no active driver is present on the pin. Position  */
#define GPIO_CTRL26_PU_PD_UP                  (GPIO_CTRL26_PU_PD_UP_Val << GPIO_CTRL26_PU_PD_Pos)  /* (GPIO_CTRL26) Pull Up Enabled Position  */
#define GPIO_CTRL26_PU_PD_DOWN                (GPIO_CTRL26_PU_PD_DOWN_Val << GPIO_CTRL26_PU_PD_Pos) /* (GPIO_CTRL26) Pull Down Enabled Position  */
#define GPIO_CTRL26_PU_PD_REPEATER            (GPIO_CTRL26_PU_PD_REPEATER_Val << GPIO_CTRL26_PU_PD_Pos) /* (GPIO_CTRL26) Repeater mode. Pin is kept at previous voltage level when no active driver is present on the pin. Position  */
#define GPIO_CTRL26_PWR_GATING_Pos            _UINT32_(2)                                          /* (GPIO_CTRL26) The GPIO pin will be tristated when the selected power well is off. Position */
#define GPIO_CTRL26_PWR_GATING_Msk            (_UINT32_(0x3) << GPIO_CTRL26_PWR_GATING_Pos)        /* (GPIO_CTRL26) The GPIO pin will be tristated when the selected power well is off. Mask */
#define GPIO_CTRL26_PWR_GATING(value)         (GPIO_CTRL26_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL26_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL26 register */
#define GPIO_CTRL26_INTR_DET_Pos              _UINT32_(4)                                          /* (GPIO_CTRL26) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL26_INTR_DET_Msk              (_UINT32_(0x7) << GPIO_CTRL26_INTR_DET_Pos)          /* (GPIO_CTRL26) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL26_INTR_DET(value)           (GPIO_CTRL26_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL26_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL26 register */
#define GPIO_CTRL26_EDGE_EN_Pos               _UINT32_(7)                                          /* (GPIO_CTRL26) Determines the interrupt capability of the GPIO input. Position */
#define GPIO_CTRL26_EDGE_EN_Msk               (_UINT32_(0x1) << GPIO_CTRL26_EDGE_EN_Pos)           /* (GPIO_CTRL26) Determines the interrupt capability of the GPIO input. Mask */
#define GPIO_CTRL26_EDGE_EN(value)            (GPIO_CTRL26_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL26_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL26 register */
#define GPIO_CTRL26_OUT_BUFF_TYPE_Pos         _UINT32_(8)                                          /* (GPIO_CTRL26) 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL26_OUT_BUFF_TYPE_Msk         (_UINT32_(0x1) << GPIO_CTRL26_OUT_BUFF_TYPE_Pos)     /* (GPIO_CTRL26) 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL26_OUT_BUFF_TYPE(value)      (GPIO_CTRL26_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL26_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL26 register */
#define GPIO_CTRL26_GPIO_DIR_Pos              _UINT32_(9)                                          /* (GPIO_CTRL26) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Position */
#define GPIO_CTRL26_GPIO_DIR_Msk              (_UINT32_(0x1) << GPIO_CTRL26_GPIO_DIR_Pos)          /* (GPIO_CTRL26) Buffer direction when GPIO selected by pin mux 0 = Input, 1 = Output Mask */
#define GPIO_CTRL26_GPIO_DIR(value)           (GPIO_CTRL26_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL26_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL26 register */
#define GPIO_CTRL26_GPIO_OUT_SEL_Pos          _UINT32_(10)                                         /* (GPIO_CTRL26) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Position */
#define GPIO_CTRL26_GPIO_OUT_SEL_Msk          (_UINT32_(0x1) << GPIO_CTRL26_GPIO_OUT_SEL_Pos)      /* (GPIO_CTRL26) GPIO outputs registe select.0=GPIO ALTERNATE_GPIO_DATA 1=GPIO Output Register. Mask */
#define GPIO_CTRL26_GPIO_OUT_SEL(value)       (GPIO_CTRL26_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL26_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL26 register */
#define GPIO_CTRL26_POL_Pos                   _UINT32_(11)                                         /* (GPIO_CTRL26) 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL26_POL_Msk                   (_UINT32_(0x1) << GPIO_CTRL26_POL_Pos)               /* (GPIO_CTRL26) 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL26_POL(value)                (GPIO_CTRL26_POL_Msk & (_UINT32_(value) << GPIO_CTRL26_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL26 register */
#define GPIO_CTRL26_MUX_CTRL_Pos              _UINT32_(12)                                         /* (GPIO_CTRL26) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Position */
#define GPIO_CTRL26_MUX_CTRL_Msk              (_UINT32_(0x7) << GPIO_CTRL26_MUX_CTRL_Pos)          /* (GPIO_CTRL26) 00 = GPIO Function, 01 = Function 1, 10 = Function 2, 11 = Function 3. Mask */
#define GPIO_CTRL26_MUX_CTRL(value)           (GPIO_CTRL26_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL26_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL26 register */
#define   GPIO_CTRL26_MUX_CTRL_GPIO_Val       _UINT32_(0x0)                                        /* (GPIO_CTRL26) GPIO function selected  */
#define   GPIO_CTRL26_MUX_CTRL_FUNC1_Val      _UINT32_(0x1)                                        /* (GPIO_CTRL26) Signal function 1 selected  */
#define   GPIO_CTRL26_MUX_CTRL_FUNC2_Val      _UINT32_(0x2)                                        /* (GPIO_CTRL26) Signal function 2 selected  */
#define   GPIO_CTRL26_MUX_CTRL_FUNC3_Val      _UINT32_(0x3)                                        /* (GPIO_CTRL26) Signal function 3 selected  */
#define GPIO_CTRL26_MUX_CTRL_GPIO             (GPIO_CTRL26_MUX_CTRL_GPIO_Val << GPIO_CTRL26_MUX_CTRL_Pos) /* (GPIO_CTRL26) GPIO function selected Position  */
#define GPIO_CTRL26_MUX_CTRL_FUNC1            (GPIO_CTRL26_MUX_CTRL_FUNC1_Val << GPIO_CTRL26_MUX_CTRL_Pos) /* (GPIO_CTRL26) Signal function 1 selected Position  */
#define GPIO_CTRL26_MUX_CTRL_FUNC2            (GPIO_CTRL26_MUX_CTRL_FUNC2_Val << GPIO_CTRL26_MUX_CTRL_Pos) /* (GPIO_CTRL26) Signal function 2 selected Position  */
#define GPIO_CTRL26_MUX_CTRL_FUNC3            (GPIO_CTRL26_MUX_CTRL_FUNC3_Val << GPIO_CTRL26_MUX_CTRL_Pos) /* (GPIO_CTRL26) Signal function 3 selected Position  */
#define GPIO_CTRL26_INP_DIS_Pos               _UINT32_(15)                                         /* (GPIO_CTRL26) GPIO input disable Position */
#define GPIO_CTRL26_INP_DIS_Msk               (_UINT32_(0x1) << GPIO_CTRL26_INP_DIS_Pos)           /* (GPIO_CTRL26) GPIO input disable Mask */
#define GPIO_CTRL26_INP_DIS(value)            (GPIO_CTRL26_INP_DIS_Msk & (_UINT32_(value) << GPIO_CTRL26_INP_DIS_Pos)) /* Assigment of value for INP_DIS in the GPIO_CTRL26 register */
#define GPIO_CTRL26_ALT_GPIO_DATA_Pos         _UINT32_(16)                                         /* (GPIO_CTRL26) GPIO Alternate Data Register. Position */
#define GPIO_CTRL26_ALT_GPIO_DATA_Msk         (_UINT32_(0x1) << GPIO_CTRL26_ALT_GPIO_DATA_Pos)     /* (GPIO_CTRL26) GPIO Alternate Data Register. Mask */
#define GPIO_CTRL26_ALT_GPIO_DATA(value)      (GPIO_CTRL26_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL26_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL26 register */
#define GPIO_CTRL26_GPIO_INP_Pos              _UINT32_(24)                                         /* (GPIO_CTRL26) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Position */
#define GPIO_CTRL26_GPIO_INP_Msk              (_UINT32_(0x1) << GPIO_CTRL26_GPIO_INP_Pos)          /* (GPIO_CTRL26) GPIO input from pin, independent of the Mux selection for the pin or the Direction. Mask */
#define GPIO_CTRL26_GPIO_INP(value)           (GPIO_CTRL26_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL26_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL26 register */
#define GPIO_CTRL26_Msk                       _UINT32_(0x0101FFFF)                                 /* (GPIO_CTRL26) Register Mask  */


/* -------- GPIO_PARIN : (GPIO Offset: 0x300) (R/W 32) The GPIO Input Registers. -------- */
#define GPIO_PARIN_RESETVALUE                 _UINT32_(0x00)                                       /*  (GPIO_PARIN) The GPIO Input Registers.  Reset Value */

#define GPIO_PARIN_Msk                        _UINT32_(0x00000000)                                 /* (GPIO_PARIN) Register Mask  */


/* -------- GPIO_PAROUT : (GPIO Offset: 0x380) (R/W 32) The GPIO Output Registers. -------- */
#define GPIO_PAROUT_RESETVALUE                _UINT32_(0x00)                                       /*  (GPIO_PAROUT) The GPIO Output Registers.  Reset Value */

#define GPIO_PAROUT_Msk                       _UINT32_(0x00000000)                                 /* (GPIO_PAROUT) Register Mask  */


/* -------- GPIO_CTRL2P0 : (GPIO Offset: 0x500) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P0_RESETVALUE               _UINT32_(0x00)                                       /*  (GPIO_CTRL2P0) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P0_SLEW_CTRL_Pos            _UINT32_(0)                                          /* (GPIO_CTRL2P0) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P0_SLEW_CTRL_Msk            (_UINT32_(0x1) << GPIO_CTRL2P0_SLEW_CTRL_Pos)        /* (GPIO_CTRL2P0) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P0_SLEW_CTRL(value)         (GPIO_CTRL2P0_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P0_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P0 register */
#define GPIO_CTRL2P0_DRIV_STREN_Pos           _UINT32_(4)                                          /* (GPIO_CTRL2P0) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P0_DRIV_STREN_Msk           (_UINT32_(0x3) << GPIO_CTRL2P0_DRIV_STREN_Pos)       /* (GPIO_CTRL2P0) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P0_DRIV_STREN(value)        (GPIO_CTRL2P0_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P0_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P0 register */
#define   GPIO_CTRL2P0_DRIV_STREN_LEVEL0_Val  _UINT32_(0x0)                                        /* (GPIO_CTRL2P0) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P0_DRIV_STREN_LEVEL1_Val  _UINT32_(0x1)                                        /* (GPIO_CTRL2P0) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P0_DRIV_STREN_LEVEL2_Val  _UINT32_(0x2)                                        /* (GPIO_CTRL2P0) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P0_DRIV_STREN_LEVEL3_Val  _UINT32_(0x3)                                        /* (GPIO_CTRL2P0) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P0_DRIV_STREN_LEVEL0        (GPIO_CTRL2P0_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P0_DRIV_STREN_Pos) /* (GPIO_CTRL2P0) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P0_DRIV_STREN_LEVEL1        (GPIO_CTRL2P0_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P0_DRIV_STREN_Pos) /* (GPIO_CTRL2P0) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P0_DRIV_STREN_LEVEL2        (GPIO_CTRL2P0_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P0_DRIV_STREN_Pos) /* (GPIO_CTRL2P0) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P0_DRIV_STREN_LEVEL3        (GPIO_CTRL2P0_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P0_DRIV_STREN_Pos) /* (GPIO_CTRL2P0) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P0_Msk                      _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P0) Register Mask  */


/* -------- GPIO_CTRL2P1 : (GPIO Offset: 0x520) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P1_RESETVALUE               _UINT32_(0x00)                                       /*  (GPIO_CTRL2P1) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P1_SLEW_CTRL_Pos            _UINT32_(0)                                          /* (GPIO_CTRL2P1) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P1_SLEW_CTRL_Msk            (_UINT32_(0x1) << GPIO_CTRL2P1_SLEW_CTRL_Pos)        /* (GPIO_CTRL2P1) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P1_SLEW_CTRL(value)         (GPIO_CTRL2P1_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P1_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P1 register */
#define GPIO_CTRL2P1_DRIV_STREN_Pos           _UINT32_(4)                                          /* (GPIO_CTRL2P1) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P1_DRIV_STREN_Msk           (_UINT32_(0x3) << GPIO_CTRL2P1_DRIV_STREN_Pos)       /* (GPIO_CTRL2P1) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P1_DRIV_STREN(value)        (GPIO_CTRL2P1_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P1_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P1 register */
#define   GPIO_CTRL2P1_DRIV_STREN_LEVEL0_Val  _UINT32_(0x0)                                        /* (GPIO_CTRL2P1) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P1_DRIV_STREN_LEVEL1_Val  _UINT32_(0x1)                                        /* (GPIO_CTRL2P1) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P1_DRIV_STREN_LEVEL2_Val  _UINT32_(0x2)                                        /* (GPIO_CTRL2P1) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P1_DRIV_STREN_LEVEL3_Val  _UINT32_(0x3)                                        /* (GPIO_CTRL2P1) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P1_DRIV_STREN_LEVEL0        (GPIO_CTRL2P1_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P1_DRIV_STREN_Pos) /* (GPIO_CTRL2P1) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P1_DRIV_STREN_LEVEL1        (GPIO_CTRL2P1_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P1_DRIV_STREN_Pos) /* (GPIO_CTRL2P1) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P1_DRIV_STREN_LEVEL2        (GPIO_CTRL2P1_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P1_DRIV_STREN_Pos) /* (GPIO_CTRL2P1) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P1_DRIV_STREN_LEVEL3        (GPIO_CTRL2P1_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P1_DRIV_STREN_Pos) /* (GPIO_CTRL2P1) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P1_Msk                      _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P1) Register Mask  */


/* -------- GPIO_CTRL2P2 : (GPIO Offset: 0x540) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P2_RESETVALUE               _UINT32_(0x00)                                       /*  (GPIO_CTRL2P2) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P2_SLEW_CTRL_Pos            _UINT32_(0)                                          /* (GPIO_CTRL2P2) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P2_SLEW_CTRL_Msk            (_UINT32_(0x1) << GPIO_CTRL2P2_SLEW_CTRL_Pos)        /* (GPIO_CTRL2P2) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P2_SLEW_CTRL(value)         (GPIO_CTRL2P2_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P2_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P2 register */
#define GPIO_CTRL2P2_DRIV_STREN_Pos           _UINT32_(4)                                          /* (GPIO_CTRL2P2) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P2_DRIV_STREN_Msk           (_UINT32_(0x3) << GPIO_CTRL2P2_DRIV_STREN_Pos)       /* (GPIO_CTRL2P2) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P2_DRIV_STREN(value)        (GPIO_CTRL2P2_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P2_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P2 register */
#define   GPIO_CTRL2P2_DRIV_STREN_LEVEL0_Val  _UINT32_(0x0)                                        /* (GPIO_CTRL2P2) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P2_DRIV_STREN_LEVEL1_Val  _UINT32_(0x1)                                        /* (GPIO_CTRL2P2) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P2_DRIV_STREN_LEVEL2_Val  _UINT32_(0x2)                                        /* (GPIO_CTRL2P2) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P2_DRIV_STREN_LEVEL3_Val  _UINT32_(0x3)                                        /* (GPIO_CTRL2P2) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P2_DRIV_STREN_LEVEL0        (GPIO_CTRL2P2_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P2_DRIV_STREN_Pos) /* (GPIO_CTRL2P2) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P2_DRIV_STREN_LEVEL1        (GPIO_CTRL2P2_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P2_DRIV_STREN_Pos) /* (GPIO_CTRL2P2) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P2_DRIV_STREN_LEVEL2        (GPIO_CTRL2P2_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P2_DRIV_STREN_Pos) /* (GPIO_CTRL2P2) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P2_DRIV_STREN_LEVEL3        (GPIO_CTRL2P2_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P2_DRIV_STREN_Pos) /* (GPIO_CTRL2P2) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P2_Msk                      _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P2) Register Mask  */


/* -------- GPIO_CTRL2P3 : (GPIO Offset: 0x560) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P3_RESETVALUE               _UINT32_(0x00)                                       /*  (GPIO_CTRL2P3) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P3_SLEW_CTRL_Pos            _UINT32_(0)                                          /* (GPIO_CTRL2P3) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P3_SLEW_CTRL_Msk            (_UINT32_(0x1) << GPIO_CTRL2P3_SLEW_CTRL_Pos)        /* (GPIO_CTRL2P3) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P3_SLEW_CTRL(value)         (GPIO_CTRL2P3_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P3_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P3 register */
#define GPIO_CTRL2P3_DRIV_STREN_Pos           _UINT32_(4)                                          /* (GPIO_CTRL2P3) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P3_DRIV_STREN_Msk           (_UINT32_(0x3) << GPIO_CTRL2P3_DRIV_STREN_Pos)       /* (GPIO_CTRL2P3) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P3_DRIV_STREN(value)        (GPIO_CTRL2P3_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P3_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P3 register */
#define   GPIO_CTRL2P3_DRIV_STREN_LEVEL0_Val  _UINT32_(0x0)                                        /* (GPIO_CTRL2P3) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P3_DRIV_STREN_LEVEL1_Val  _UINT32_(0x1)                                        /* (GPIO_CTRL2P3) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P3_DRIV_STREN_LEVEL2_Val  _UINT32_(0x2)                                        /* (GPIO_CTRL2P3) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P3_DRIV_STREN_LEVEL3_Val  _UINT32_(0x3)                                        /* (GPIO_CTRL2P3) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P3_DRIV_STREN_LEVEL0        (GPIO_CTRL2P3_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P3_DRIV_STREN_Pos) /* (GPIO_CTRL2P3) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P3_DRIV_STREN_LEVEL1        (GPIO_CTRL2P3_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P3_DRIV_STREN_Pos) /* (GPIO_CTRL2P3) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P3_DRIV_STREN_LEVEL2        (GPIO_CTRL2P3_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P3_DRIV_STREN_Pos) /* (GPIO_CTRL2P3) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P3_DRIV_STREN_LEVEL3        (GPIO_CTRL2P3_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P3_DRIV_STREN_Pos) /* (GPIO_CTRL2P3) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P3_Msk                      _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P3) Register Mask  */


/* -------- GPIO_CTRL2P4 : (GPIO Offset: 0x580) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P4_RESETVALUE               _UINT32_(0x00)                                       /*  (GPIO_CTRL2P4) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P4_SLEW_CTRL_Pos            _UINT32_(0)                                          /* (GPIO_CTRL2P4) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P4_SLEW_CTRL_Msk            (_UINT32_(0x1) << GPIO_CTRL2P4_SLEW_CTRL_Pos)        /* (GPIO_CTRL2P4) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P4_SLEW_CTRL(value)         (GPIO_CTRL2P4_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P4_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P4 register */
#define GPIO_CTRL2P4_DRIV_STREN_Pos           _UINT32_(4)                                          /* (GPIO_CTRL2P4) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P4_DRIV_STREN_Msk           (_UINT32_(0x3) << GPIO_CTRL2P4_DRIV_STREN_Pos)       /* (GPIO_CTRL2P4) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P4_DRIV_STREN(value)        (GPIO_CTRL2P4_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P4_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P4 register */
#define   GPIO_CTRL2P4_DRIV_STREN_LEVEL0_Val  _UINT32_(0x0)                                        /* (GPIO_CTRL2P4) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P4_DRIV_STREN_LEVEL1_Val  _UINT32_(0x1)                                        /* (GPIO_CTRL2P4) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P4_DRIV_STREN_LEVEL2_Val  _UINT32_(0x2)                                        /* (GPIO_CTRL2P4) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P4_DRIV_STREN_LEVEL3_Val  _UINT32_(0x3)                                        /* (GPIO_CTRL2P4) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P4_DRIV_STREN_LEVEL0        (GPIO_CTRL2P4_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P4_DRIV_STREN_Pos) /* (GPIO_CTRL2P4) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P4_DRIV_STREN_LEVEL1        (GPIO_CTRL2P4_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P4_DRIV_STREN_Pos) /* (GPIO_CTRL2P4) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P4_DRIV_STREN_LEVEL2        (GPIO_CTRL2P4_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P4_DRIV_STREN_Pos) /* (GPIO_CTRL2P4) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P4_DRIV_STREN_LEVEL3        (GPIO_CTRL2P4_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P4_DRIV_STREN_Pos) /* (GPIO_CTRL2P4) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P4_Msk                      _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P4) Register Mask  */


/* -------- GPIO_CTRL2P5 : (GPIO Offset: 0x5A0) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P5_RESETVALUE               _UINT32_(0x00)                                       /*  (GPIO_CTRL2P5) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P5_SLEW_CTRL_Pos            _UINT32_(0)                                          /* (GPIO_CTRL2P5) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P5_SLEW_CTRL_Msk            (_UINT32_(0x1) << GPIO_CTRL2P5_SLEW_CTRL_Pos)        /* (GPIO_CTRL2P5) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P5_SLEW_CTRL(value)         (GPIO_CTRL2P5_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P5_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P5 register */
#define GPIO_CTRL2P5_DRIV_STREN_Pos           _UINT32_(4)                                          /* (GPIO_CTRL2P5) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P5_DRIV_STREN_Msk           (_UINT32_(0x3) << GPIO_CTRL2P5_DRIV_STREN_Pos)       /* (GPIO_CTRL2P5) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P5_DRIV_STREN(value)        (GPIO_CTRL2P5_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P5_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P5 register */
#define   GPIO_CTRL2P5_DRIV_STREN_LEVEL0_Val  _UINT32_(0x0)                                        /* (GPIO_CTRL2P5) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P5_DRIV_STREN_LEVEL1_Val  _UINT32_(0x1)                                        /* (GPIO_CTRL2P5) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P5_DRIV_STREN_LEVEL2_Val  _UINT32_(0x2)                                        /* (GPIO_CTRL2P5) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P5_DRIV_STREN_LEVEL3_Val  _UINT32_(0x3)                                        /* (GPIO_CTRL2P5) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P5_DRIV_STREN_LEVEL0        (GPIO_CTRL2P5_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P5_DRIV_STREN_Pos) /* (GPIO_CTRL2P5) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P5_DRIV_STREN_LEVEL1        (GPIO_CTRL2P5_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P5_DRIV_STREN_Pos) /* (GPIO_CTRL2P5) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P5_DRIV_STREN_LEVEL2        (GPIO_CTRL2P5_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P5_DRIV_STREN_Pos) /* (GPIO_CTRL2P5) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P5_DRIV_STREN_LEVEL3        (GPIO_CTRL2P5_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P5_DRIV_STREN_Pos) /* (GPIO_CTRL2P5) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P5_Msk                      _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P5) Register Mask  */


/* -------- GPIO_CTRL2P6 : (GPIO Offset: 0x5C0) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P6_RESETVALUE               _UINT32_(0x00)                                       /*  (GPIO_CTRL2P6) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P6_SLEW_CTRL_Pos            _UINT32_(0)                                          /* (GPIO_CTRL2P6) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P6_SLEW_CTRL_Msk            (_UINT32_(0x1) << GPIO_CTRL2P6_SLEW_CTRL_Pos)        /* (GPIO_CTRL2P6) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P6_SLEW_CTRL(value)         (GPIO_CTRL2P6_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P6_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P6 register */
#define GPIO_CTRL2P6_DRIV_STREN_Pos           _UINT32_(4)                                          /* (GPIO_CTRL2P6) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P6_DRIV_STREN_Msk           (_UINT32_(0x3) << GPIO_CTRL2P6_DRIV_STREN_Pos)       /* (GPIO_CTRL2P6) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P6_DRIV_STREN(value)        (GPIO_CTRL2P6_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P6_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P6 register */
#define   GPIO_CTRL2P6_DRIV_STREN_LEVEL0_Val  _UINT32_(0x0)                                        /* (GPIO_CTRL2P6) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P6_DRIV_STREN_LEVEL1_Val  _UINT32_(0x1)                                        /* (GPIO_CTRL2P6) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P6_DRIV_STREN_LEVEL2_Val  _UINT32_(0x2)                                        /* (GPIO_CTRL2P6) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P6_DRIV_STREN_LEVEL3_Val  _UINT32_(0x3)                                        /* (GPIO_CTRL2P6) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P6_DRIV_STREN_LEVEL0        (GPIO_CTRL2P6_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P6_DRIV_STREN_Pos) /* (GPIO_CTRL2P6) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P6_DRIV_STREN_LEVEL1        (GPIO_CTRL2P6_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P6_DRIV_STREN_Pos) /* (GPIO_CTRL2P6) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P6_DRIV_STREN_LEVEL2        (GPIO_CTRL2P6_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P6_DRIV_STREN_Pos) /* (GPIO_CTRL2P6) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P6_DRIV_STREN_LEVEL3        (GPIO_CTRL2P6_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P6_DRIV_STREN_Pos) /* (GPIO_CTRL2P6) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P6_Msk                      _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P6) Register Mask  */


/* -------- GPIO_CTRL2P7 : (GPIO Offset: 0x5E0) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P7_RESETVALUE               _UINT32_(0x00)                                       /*  (GPIO_CTRL2P7) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P7_SLEW_CTRL_Pos            _UINT32_(0)                                          /* (GPIO_CTRL2P7) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P7_SLEW_CTRL_Msk            (_UINT32_(0x1) << GPIO_CTRL2P7_SLEW_CTRL_Pos)        /* (GPIO_CTRL2P7) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P7_SLEW_CTRL(value)         (GPIO_CTRL2P7_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P7_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P7 register */
#define GPIO_CTRL2P7_DRIV_STREN_Pos           _UINT32_(4)                                          /* (GPIO_CTRL2P7) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P7_DRIV_STREN_Msk           (_UINT32_(0x3) << GPIO_CTRL2P7_DRIV_STREN_Pos)       /* (GPIO_CTRL2P7) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P7_DRIV_STREN(value)        (GPIO_CTRL2P7_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P7_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P7 register */
#define   GPIO_CTRL2P7_DRIV_STREN_LEVEL0_Val  _UINT32_(0x0)                                        /* (GPIO_CTRL2P7) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P7_DRIV_STREN_LEVEL1_Val  _UINT32_(0x1)                                        /* (GPIO_CTRL2P7) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P7_DRIV_STREN_LEVEL2_Val  _UINT32_(0x2)                                        /* (GPIO_CTRL2P7) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P7_DRIV_STREN_LEVEL3_Val  _UINT32_(0x3)                                        /* (GPIO_CTRL2P7) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P7_DRIV_STREN_LEVEL0        (GPIO_CTRL2P7_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P7_DRIV_STREN_Pos) /* (GPIO_CTRL2P7) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P7_DRIV_STREN_LEVEL1        (GPIO_CTRL2P7_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P7_DRIV_STREN_Pos) /* (GPIO_CTRL2P7) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P7_DRIV_STREN_LEVEL2        (GPIO_CTRL2P7_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P7_DRIV_STREN_Pos) /* (GPIO_CTRL2P7) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P7_DRIV_STREN_LEVEL3        (GPIO_CTRL2P7_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P7_DRIV_STREN_Pos) /* (GPIO_CTRL2P7) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P7_Msk                      _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P7) Register Mask  */


/* -------- GPIO_CTRL2P10 : (GPIO Offset: 0x600) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P10_RESETVALUE              _UINT32_(0x00)                                       /*  (GPIO_CTRL2P10) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P10_SLEW_CTRL_Pos           _UINT32_(0)                                          /* (GPIO_CTRL2P10) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P10_SLEW_CTRL_Msk           (_UINT32_(0x1) << GPIO_CTRL2P10_SLEW_CTRL_Pos)       /* (GPIO_CTRL2P10) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P10_SLEW_CTRL(value)        (GPIO_CTRL2P10_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P10_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P10 register */
#define GPIO_CTRL2P10_DRIV_STREN_Pos          _UINT32_(4)                                          /* (GPIO_CTRL2P10) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P10_DRIV_STREN_Msk          (_UINT32_(0x3) << GPIO_CTRL2P10_DRIV_STREN_Pos)      /* (GPIO_CTRL2P10) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P10_DRIV_STREN(value)       (GPIO_CTRL2P10_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P10_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P10 register */
#define   GPIO_CTRL2P10_DRIV_STREN_LEVEL0_Val _UINT32_(0x0)                                        /* (GPIO_CTRL2P10) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P10_DRIV_STREN_LEVEL1_Val _UINT32_(0x1)                                        /* (GPIO_CTRL2P10) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P10_DRIV_STREN_LEVEL2_Val _UINT32_(0x2)                                        /* (GPIO_CTRL2P10) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P10_DRIV_STREN_LEVEL3_Val _UINT32_(0x3)                                        /* (GPIO_CTRL2P10) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P10_DRIV_STREN_LEVEL0       (GPIO_CTRL2P10_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P10_DRIV_STREN_Pos) /* (GPIO_CTRL2P10) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P10_DRIV_STREN_LEVEL1       (GPIO_CTRL2P10_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P10_DRIV_STREN_Pos) /* (GPIO_CTRL2P10) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P10_DRIV_STREN_LEVEL2       (GPIO_CTRL2P10_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P10_DRIV_STREN_Pos) /* (GPIO_CTRL2P10) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P10_DRIV_STREN_LEVEL3       (GPIO_CTRL2P10_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P10_DRIV_STREN_Pos) /* (GPIO_CTRL2P10) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P10_Msk                     _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P10) Register Mask  */


/* -------- GPIO_CTRL2P11 : (GPIO Offset: 0x620) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P11_RESETVALUE              _UINT32_(0x00)                                       /*  (GPIO_CTRL2P11) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P11_SLEW_CTRL_Pos           _UINT32_(0)                                          /* (GPIO_CTRL2P11) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P11_SLEW_CTRL_Msk           (_UINT32_(0x1) << GPIO_CTRL2P11_SLEW_CTRL_Pos)       /* (GPIO_CTRL2P11) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P11_SLEW_CTRL(value)        (GPIO_CTRL2P11_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P11_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P11 register */
#define GPIO_CTRL2P11_DRIV_STREN_Pos          _UINT32_(4)                                          /* (GPIO_CTRL2P11) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P11_DRIV_STREN_Msk          (_UINT32_(0x3) << GPIO_CTRL2P11_DRIV_STREN_Pos)      /* (GPIO_CTRL2P11) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P11_DRIV_STREN(value)       (GPIO_CTRL2P11_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P11_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P11 register */
#define   GPIO_CTRL2P11_DRIV_STREN_LEVEL0_Val _UINT32_(0x0)                                        /* (GPIO_CTRL2P11) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P11_DRIV_STREN_LEVEL1_Val _UINT32_(0x1)                                        /* (GPIO_CTRL2P11) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P11_DRIV_STREN_LEVEL2_Val _UINT32_(0x2)                                        /* (GPIO_CTRL2P11) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P11_DRIV_STREN_LEVEL3_Val _UINT32_(0x3)                                        /* (GPIO_CTRL2P11) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P11_DRIV_STREN_LEVEL0       (GPIO_CTRL2P11_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P11_DRIV_STREN_Pos) /* (GPIO_CTRL2P11) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P11_DRIV_STREN_LEVEL1       (GPIO_CTRL2P11_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P11_DRIV_STREN_Pos) /* (GPIO_CTRL2P11) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P11_DRIV_STREN_LEVEL2       (GPIO_CTRL2P11_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P11_DRIV_STREN_Pos) /* (GPIO_CTRL2P11) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P11_DRIV_STREN_LEVEL3       (GPIO_CTRL2P11_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P11_DRIV_STREN_Pos) /* (GPIO_CTRL2P11) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P11_Msk                     _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P11) Register Mask  */


/* -------- GPIO_CTRL2P12 : (GPIO Offset: 0x640) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P12_RESETVALUE              _UINT32_(0x00)                                       /*  (GPIO_CTRL2P12) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P12_SLEW_CTRL_Pos           _UINT32_(0)                                          /* (GPIO_CTRL2P12) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P12_SLEW_CTRL_Msk           (_UINT32_(0x1) << GPIO_CTRL2P12_SLEW_CTRL_Pos)       /* (GPIO_CTRL2P12) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P12_SLEW_CTRL(value)        (GPIO_CTRL2P12_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P12_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P12 register */
#define GPIO_CTRL2P12_DRIV_STREN_Pos          _UINT32_(4)                                          /* (GPIO_CTRL2P12) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P12_DRIV_STREN_Msk          (_UINT32_(0x3) << GPIO_CTRL2P12_DRIV_STREN_Pos)      /* (GPIO_CTRL2P12) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P12_DRIV_STREN(value)       (GPIO_CTRL2P12_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P12_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P12 register */
#define   GPIO_CTRL2P12_DRIV_STREN_LEVEL0_Val _UINT32_(0x0)                                        /* (GPIO_CTRL2P12) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P12_DRIV_STREN_LEVEL1_Val _UINT32_(0x1)                                        /* (GPIO_CTRL2P12) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P12_DRIV_STREN_LEVEL2_Val _UINT32_(0x2)                                        /* (GPIO_CTRL2P12) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P12_DRIV_STREN_LEVEL3_Val _UINT32_(0x3)                                        /* (GPIO_CTRL2P12) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P12_DRIV_STREN_LEVEL0       (GPIO_CTRL2P12_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P12_DRIV_STREN_Pos) /* (GPIO_CTRL2P12) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P12_DRIV_STREN_LEVEL1       (GPIO_CTRL2P12_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P12_DRIV_STREN_Pos) /* (GPIO_CTRL2P12) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P12_DRIV_STREN_LEVEL2       (GPIO_CTRL2P12_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P12_DRIV_STREN_Pos) /* (GPIO_CTRL2P12) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P12_DRIV_STREN_LEVEL3       (GPIO_CTRL2P12_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P12_DRIV_STREN_Pos) /* (GPIO_CTRL2P12) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P12_Msk                     _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P12) Register Mask  */


/* -------- GPIO_CTRL2P13 : (GPIO Offset: 0x660) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P13_RESETVALUE              _UINT32_(0x00)                                       /*  (GPIO_CTRL2P13) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P13_SLEW_CTRL_Pos           _UINT32_(0)                                          /* (GPIO_CTRL2P13) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P13_SLEW_CTRL_Msk           (_UINT32_(0x1) << GPIO_CTRL2P13_SLEW_CTRL_Pos)       /* (GPIO_CTRL2P13) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P13_SLEW_CTRL(value)        (GPIO_CTRL2P13_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P13_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P13 register */
#define GPIO_CTRL2P13_DRIV_STREN_Pos          _UINT32_(4)                                          /* (GPIO_CTRL2P13) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P13_DRIV_STREN_Msk          (_UINT32_(0x3) << GPIO_CTRL2P13_DRIV_STREN_Pos)      /* (GPIO_CTRL2P13) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P13_DRIV_STREN(value)       (GPIO_CTRL2P13_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P13_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P13 register */
#define   GPIO_CTRL2P13_DRIV_STREN_LEVEL0_Val _UINT32_(0x0)                                        /* (GPIO_CTRL2P13) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P13_DRIV_STREN_LEVEL1_Val _UINT32_(0x1)                                        /* (GPIO_CTRL2P13) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P13_DRIV_STREN_LEVEL2_Val _UINT32_(0x2)                                        /* (GPIO_CTRL2P13) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P13_DRIV_STREN_LEVEL3_Val _UINT32_(0x3)                                        /* (GPIO_CTRL2P13) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P13_DRIV_STREN_LEVEL0       (GPIO_CTRL2P13_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P13_DRIV_STREN_Pos) /* (GPIO_CTRL2P13) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P13_DRIV_STREN_LEVEL1       (GPIO_CTRL2P13_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P13_DRIV_STREN_Pos) /* (GPIO_CTRL2P13) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P13_DRIV_STREN_LEVEL2       (GPIO_CTRL2P13_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P13_DRIV_STREN_Pos) /* (GPIO_CTRL2P13) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P13_DRIV_STREN_LEVEL3       (GPIO_CTRL2P13_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P13_DRIV_STREN_Pos) /* (GPIO_CTRL2P13) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P13_Msk                     _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P13) Register Mask  */


/* -------- GPIO_CTRL2P14 : (GPIO Offset: 0x680) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P14_RESETVALUE              _UINT32_(0x00)                                       /*  (GPIO_CTRL2P14) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P14_SLEW_CTRL_Pos           _UINT32_(0)                                          /* (GPIO_CTRL2P14) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P14_SLEW_CTRL_Msk           (_UINT32_(0x1) << GPIO_CTRL2P14_SLEW_CTRL_Pos)       /* (GPIO_CTRL2P14) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P14_SLEW_CTRL(value)        (GPIO_CTRL2P14_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P14_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P14 register */
#define GPIO_CTRL2P14_DRIV_STREN_Pos          _UINT32_(4)                                          /* (GPIO_CTRL2P14) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P14_DRIV_STREN_Msk          (_UINT32_(0x3) << GPIO_CTRL2P14_DRIV_STREN_Pos)      /* (GPIO_CTRL2P14) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P14_DRIV_STREN(value)       (GPIO_CTRL2P14_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P14_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P14 register */
#define   GPIO_CTRL2P14_DRIV_STREN_LEVEL0_Val _UINT32_(0x0)                                        /* (GPIO_CTRL2P14) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P14_DRIV_STREN_LEVEL1_Val _UINT32_(0x1)                                        /* (GPIO_CTRL2P14) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P14_DRIV_STREN_LEVEL2_Val _UINT32_(0x2)                                        /* (GPIO_CTRL2P14) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P14_DRIV_STREN_LEVEL3_Val _UINT32_(0x3)                                        /* (GPIO_CTRL2P14) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P14_DRIV_STREN_LEVEL0       (GPIO_CTRL2P14_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P14_DRIV_STREN_Pos) /* (GPIO_CTRL2P14) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P14_DRIV_STREN_LEVEL1       (GPIO_CTRL2P14_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P14_DRIV_STREN_Pos) /* (GPIO_CTRL2P14) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P14_DRIV_STREN_LEVEL2       (GPIO_CTRL2P14_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P14_DRIV_STREN_Pos) /* (GPIO_CTRL2P14) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P14_DRIV_STREN_LEVEL3       (GPIO_CTRL2P14_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P14_DRIV_STREN_Pos) /* (GPIO_CTRL2P14) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P14_Msk                     _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P14) Register Mask  */


/* -------- GPIO_CTRL2P15 : (GPIO Offset: 0x6A0) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P15_RESETVALUE              _UINT32_(0x00)                                       /*  (GPIO_CTRL2P15) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P15_SLEW_CTRL_Pos           _UINT32_(0)                                          /* (GPIO_CTRL2P15) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P15_SLEW_CTRL_Msk           (_UINT32_(0x1) << GPIO_CTRL2P15_SLEW_CTRL_Pos)       /* (GPIO_CTRL2P15) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P15_SLEW_CTRL(value)        (GPIO_CTRL2P15_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P15_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P15 register */
#define GPIO_CTRL2P15_DRIV_STREN_Pos          _UINT32_(4)                                          /* (GPIO_CTRL2P15) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P15_DRIV_STREN_Msk          (_UINT32_(0x3) << GPIO_CTRL2P15_DRIV_STREN_Pos)      /* (GPIO_CTRL2P15) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P15_DRIV_STREN(value)       (GPIO_CTRL2P15_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P15_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P15 register */
#define   GPIO_CTRL2P15_DRIV_STREN_LEVEL0_Val _UINT32_(0x0)                                        /* (GPIO_CTRL2P15) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P15_DRIV_STREN_LEVEL1_Val _UINT32_(0x1)                                        /* (GPIO_CTRL2P15) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P15_DRIV_STREN_LEVEL2_Val _UINT32_(0x2)                                        /* (GPIO_CTRL2P15) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P15_DRIV_STREN_LEVEL3_Val _UINT32_(0x3)                                        /* (GPIO_CTRL2P15) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P15_DRIV_STREN_LEVEL0       (GPIO_CTRL2P15_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P15_DRIV_STREN_Pos) /* (GPIO_CTRL2P15) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P15_DRIV_STREN_LEVEL1       (GPIO_CTRL2P15_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P15_DRIV_STREN_Pos) /* (GPIO_CTRL2P15) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P15_DRIV_STREN_LEVEL2       (GPIO_CTRL2P15_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P15_DRIV_STREN_Pos) /* (GPIO_CTRL2P15) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P15_DRIV_STREN_LEVEL3       (GPIO_CTRL2P15_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P15_DRIV_STREN_Pos) /* (GPIO_CTRL2P15) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P15_Msk                     _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P15) Register Mask  */


/* -------- GPIO_CTRL2P16 : (GPIO Offset: 0x6C0) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P16_RESETVALUE              _UINT32_(0x00)                                       /*  (GPIO_CTRL2P16) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P16_SLEW_CTRL_Pos           _UINT32_(0)                                          /* (GPIO_CTRL2P16) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P16_SLEW_CTRL_Msk           (_UINT32_(0x1) << GPIO_CTRL2P16_SLEW_CTRL_Pos)       /* (GPIO_CTRL2P16) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P16_SLEW_CTRL(value)        (GPIO_CTRL2P16_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P16_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P16 register */
#define GPIO_CTRL2P16_DRIV_STREN_Pos          _UINT32_(4)                                          /* (GPIO_CTRL2P16) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P16_DRIV_STREN_Msk          (_UINT32_(0x3) << GPIO_CTRL2P16_DRIV_STREN_Pos)      /* (GPIO_CTRL2P16) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P16_DRIV_STREN(value)       (GPIO_CTRL2P16_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P16_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P16 register */
#define   GPIO_CTRL2P16_DRIV_STREN_LEVEL0_Val _UINT32_(0x0)                                        /* (GPIO_CTRL2P16) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P16_DRIV_STREN_LEVEL1_Val _UINT32_(0x1)                                        /* (GPIO_CTRL2P16) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P16_DRIV_STREN_LEVEL2_Val _UINT32_(0x2)                                        /* (GPIO_CTRL2P16) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P16_DRIV_STREN_LEVEL3_Val _UINT32_(0x3)                                        /* (GPIO_CTRL2P16) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P16_DRIV_STREN_LEVEL0       (GPIO_CTRL2P16_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P16_DRIV_STREN_Pos) /* (GPIO_CTRL2P16) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P16_DRIV_STREN_LEVEL1       (GPIO_CTRL2P16_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P16_DRIV_STREN_Pos) /* (GPIO_CTRL2P16) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P16_DRIV_STREN_LEVEL2       (GPIO_CTRL2P16_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P16_DRIV_STREN_Pos) /* (GPIO_CTRL2P16) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P16_DRIV_STREN_LEVEL3       (GPIO_CTRL2P16_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P16_DRIV_STREN_Pos) /* (GPIO_CTRL2P16) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P16_Msk                     _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P16) Register Mask  */


/* -------- GPIO_CTRL2P17 : (GPIO Offset: 0x6E0) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P17_RESETVALUE              _UINT32_(0x00)                                       /*  (GPIO_CTRL2P17) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P17_SLEW_CTRL_Pos           _UINT32_(0)                                          /* (GPIO_CTRL2P17) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P17_SLEW_CTRL_Msk           (_UINT32_(0x1) << GPIO_CTRL2P17_SLEW_CTRL_Pos)       /* (GPIO_CTRL2P17) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P17_SLEW_CTRL(value)        (GPIO_CTRL2P17_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P17_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P17 register */
#define GPIO_CTRL2P17_DRIV_STREN_Pos          _UINT32_(4)                                          /* (GPIO_CTRL2P17) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P17_DRIV_STREN_Msk          (_UINT32_(0x3) << GPIO_CTRL2P17_DRIV_STREN_Pos)      /* (GPIO_CTRL2P17) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P17_DRIV_STREN(value)       (GPIO_CTRL2P17_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P17_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P17 register */
#define   GPIO_CTRL2P17_DRIV_STREN_LEVEL0_Val _UINT32_(0x0)                                        /* (GPIO_CTRL2P17) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P17_DRIV_STREN_LEVEL1_Val _UINT32_(0x1)                                        /* (GPIO_CTRL2P17) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P17_DRIV_STREN_LEVEL2_Val _UINT32_(0x2)                                        /* (GPIO_CTRL2P17) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P17_DRIV_STREN_LEVEL3_Val _UINT32_(0x3)                                        /* (GPIO_CTRL2P17) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P17_DRIV_STREN_LEVEL0       (GPIO_CTRL2P17_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P17_DRIV_STREN_Pos) /* (GPIO_CTRL2P17) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P17_DRIV_STREN_LEVEL1       (GPIO_CTRL2P17_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P17_DRIV_STREN_Pos) /* (GPIO_CTRL2P17) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P17_DRIV_STREN_LEVEL2       (GPIO_CTRL2P17_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P17_DRIV_STREN_Pos) /* (GPIO_CTRL2P17) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P17_DRIV_STREN_LEVEL3       (GPIO_CTRL2P17_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P17_DRIV_STREN_Pos) /* (GPIO_CTRL2P17) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P17_Msk                     _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P17) Register Mask  */


/* -------- GPIO_CTRL2P20 : (GPIO Offset: 0x700) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P20_RESETVALUE              _UINT32_(0x00)                                       /*  (GPIO_CTRL2P20) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P20_SLEW_CTRL_Pos           _UINT32_(0)                                          /* (GPIO_CTRL2P20) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P20_SLEW_CTRL_Msk           (_UINT32_(0x1) << GPIO_CTRL2P20_SLEW_CTRL_Pos)       /* (GPIO_CTRL2P20) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P20_SLEW_CTRL(value)        (GPIO_CTRL2P20_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P20_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P20 register */
#define GPIO_CTRL2P20_DRIV_STREN_Pos          _UINT32_(4)                                          /* (GPIO_CTRL2P20) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P20_DRIV_STREN_Msk          (_UINT32_(0x3) << GPIO_CTRL2P20_DRIV_STREN_Pos)      /* (GPIO_CTRL2P20) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P20_DRIV_STREN(value)       (GPIO_CTRL2P20_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P20_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P20 register */
#define   GPIO_CTRL2P20_DRIV_STREN_LEVEL0_Val _UINT32_(0x0)                                        /* (GPIO_CTRL2P20) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P20_DRIV_STREN_LEVEL1_Val _UINT32_(0x1)                                        /* (GPIO_CTRL2P20) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P20_DRIV_STREN_LEVEL2_Val _UINT32_(0x2)                                        /* (GPIO_CTRL2P20) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P20_DRIV_STREN_LEVEL3_Val _UINT32_(0x3)                                        /* (GPIO_CTRL2P20) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P20_DRIV_STREN_LEVEL0       (GPIO_CTRL2P20_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P20_DRIV_STREN_Pos) /* (GPIO_CTRL2P20) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P20_DRIV_STREN_LEVEL1       (GPIO_CTRL2P20_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P20_DRIV_STREN_Pos) /* (GPIO_CTRL2P20) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P20_DRIV_STREN_LEVEL2       (GPIO_CTRL2P20_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P20_DRIV_STREN_Pos) /* (GPIO_CTRL2P20) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P20_DRIV_STREN_LEVEL3       (GPIO_CTRL2P20_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P20_DRIV_STREN_Pos) /* (GPIO_CTRL2P20) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P20_Msk                     _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P20) Register Mask  */


/* -------- GPIO_CTRL2P21 : (GPIO Offset: 0x720) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P21_RESETVALUE              _UINT32_(0x00)                                       /*  (GPIO_CTRL2P21) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P21_SLEW_CTRL_Pos           _UINT32_(0)                                          /* (GPIO_CTRL2P21) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P21_SLEW_CTRL_Msk           (_UINT32_(0x1) << GPIO_CTRL2P21_SLEW_CTRL_Pos)       /* (GPIO_CTRL2P21) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P21_SLEW_CTRL(value)        (GPIO_CTRL2P21_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P21_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P21 register */
#define GPIO_CTRL2P21_DRIV_STREN_Pos          _UINT32_(4)                                          /* (GPIO_CTRL2P21) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P21_DRIV_STREN_Msk          (_UINT32_(0x3) << GPIO_CTRL2P21_DRIV_STREN_Pos)      /* (GPIO_CTRL2P21) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P21_DRIV_STREN(value)       (GPIO_CTRL2P21_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P21_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P21 register */
#define   GPIO_CTRL2P21_DRIV_STREN_LEVEL0_Val _UINT32_(0x0)                                        /* (GPIO_CTRL2P21) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P21_DRIV_STREN_LEVEL1_Val _UINT32_(0x1)                                        /* (GPIO_CTRL2P21) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P21_DRIV_STREN_LEVEL2_Val _UINT32_(0x2)                                        /* (GPIO_CTRL2P21) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P21_DRIV_STREN_LEVEL3_Val _UINT32_(0x3)                                        /* (GPIO_CTRL2P21) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P21_DRIV_STREN_LEVEL0       (GPIO_CTRL2P21_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P21_DRIV_STREN_Pos) /* (GPIO_CTRL2P21) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P21_DRIV_STREN_LEVEL1       (GPIO_CTRL2P21_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P21_DRIV_STREN_Pos) /* (GPIO_CTRL2P21) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P21_DRIV_STREN_LEVEL2       (GPIO_CTRL2P21_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P21_DRIV_STREN_Pos) /* (GPIO_CTRL2P21) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P21_DRIV_STREN_LEVEL3       (GPIO_CTRL2P21_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P21_DRIV_STREN_Pos) /* (GPIO_CTRL2P21) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P21_Msk                     _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P21) Register Mask  */


/* -------- GPIO_CTRL2P22 : (GPIO Offset: 0x740) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P22_RESETVALUE              _UINT32_(0x00)                                       /*  (GPIO_CTRL2P22) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P22_SLEW_CTRL_Pos           _UINT32_(0)                                          /* (GPIO_CTRL2P22) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P22_SLEW_CTRL_Msk           (_UINT32_(0x1) << GPIO_CTRL2P22_SLEW_CTRL_Pos)       /* (GPIO_CTRL2P22) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P22_SLEW_CTRL(value)        (GPIO_CTRL2P22_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P22_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P22 register */
#define GPIO_CTRL2P22_DRIV_STREN_Pos          _UINT32_(4)                                          /* (GPIO_CTRL2P22) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P22_DRIV_STREN_Msk          (_UINT32_(0x3) << GPIO_CTRL2P22_DRIV_STREN_Pos)      /* (GPIO_CTRL2P22) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P22_DRIV_STREN(value)       (GPIO_CTRL2P22_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P22_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P22 register */
#define   GPIO_CTRL2P22_DRIV_STREN_LEVEL0_Val _UINT32_(0x0)                                        /* (GPIO_CTRL2P22) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P22_DRIV_STREN_LEVEL1_Val _UINT32_(0x1)                                        /* (GPIO_CTRL2P22) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P22_DRIV_STREN_LEVEL2_Val _UINT32_(0x2)                                        /* (GPIO_CTRL2P22) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P22_DRIV_STREN_LEVEL3_Val _UINT32_(0x3)                                        /* (GPIO_CTRL2P22) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P22_DRIV_STREN_LEVEL0       (GPIO_CTRL2P22_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P22_DRIV_STREN_Pos) /* (GPIO_CTRL2P22) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P22_DRIV_STREN_LEVEL1       (GPIO_CTRL2P22_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P22_DRIV_STREN_Pos) /* (GPIO_CTRL2P22) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P22_DRIV_STREN_LEVEL2       (GPIO_CTRL2P22_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P22_DRIV_STREN_Pos) /* (GPIO_CTRL2P22) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P22_DRIV_STREN_LEVEL3       (GPIO_CTRL2P22_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P22_DRIV_STREN_Pos) /* (GPIO_CTRL2P22) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P22_Msk                     _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P22) Register Mask  */


/* -------- GPIO_CTRL2P23 : (GPIO Offset: 0x760) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P23_RESETVALUE              _UINT32_(0x00)                                       /*  (GPIO_CTRL2P23) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P23_SLEW_CTRL_Pos           _UINT32_(0)                                          /* (GPIO_CTRL2P23) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P23_SLEW_CTRL_Msk           (_UINT32_(0x1) << GPIO_CTRL2P23_SLEW_CTRL_Pos)       /* (GPIO_CTRL2P23) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P23_SLEW_CTRL(value)        (GPIO_CTRL2P23_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P23_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P23 register */
#define GPIO_CTRL2P23_DRIV_STREN_Pos          _UINT32_(4)                                          /* (GPIO_CTRL2P23) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P23_DRIV_STREN_Msk          (_UINT32_(0x3) << GPIO_CTRL2P23_DRIV_STREN_Pos)      /* (GPIO_CTRL2P23) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P23_DRIV_STREN(value)       (GPIO_CTRL2P23_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P23_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P23 register */
#define   GPIO_CTRL2P23_DRIV_STREN_LEVEL0_Val _UINT32_(0x0)                                        /* (GPIO_CTRL2P23) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P23_DRIV_STREN_LEVEL1_Val _UINT32_(0x1)                                        /* (GPIO_CTRL2P23) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P23_DRIV_STREN_LEVEL2_Val _UINT32_(0x2)                                        /* (GPIO_CTRL2P23) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P23_DRIV_STREN_LEVEL3_Val _UINT32_(0x3)                                        /* (GPIO_CTRL2P23) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P23_DRIV_STREN_LEVEL0       (GPIO_CTRL2P23_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P23_DRIV_STREN_Pos) /* (GPIO_CTRL2P23) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P23_DRIV_STREN_LEVEL1       (GPIO_CTRL2P23_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P23_DRIV_STREN_Pos) /* (GPIO_CTRL2P23) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P23_DRIV_STREN_LEVEL2       (GPIO_CTRL2P23_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P23_DRIV_STREN_Pos) /* (GPIO_CTRL2P23) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P23_DRIV_STREN_LEVEL3       (GPIO_CTRL2P23_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P23_DRIV_STREN_Pos) /* (GPIO_CTRL2P23) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P23_Msk                     _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P23) Register Mask  */


/* -------- GPIO_CTRL2P24 : (GPIO Offset: 0x780) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P24_RESETVALUE              _UINT32_(0x00)                                       /*  (GPIO_CTRL2P24) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P24_SLEW_CTRL_Pos           _UINT32_(0)                                          /* (GPIO_CTRL2P24) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P24_SLEW_CTRL_Msk           (_UINT32_(0x1) << GPIO_CTRL2P24_SLEW_CTRL_Pos)       /* (GPIO_CTRL2P24) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P24_SLEW_CTRL(value)        (GPIO_CTRL2P24_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P24_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P24 register */
#define GPIO_CTRL2P24_DRIV_STREN_Pos          _UINT32_(4)                                          /* (GPIO_CTRL2P24) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P24_DRIV_STREN_Msk          (_UINT32_(0x3) << GPIO_CTRL2P24_DRIV_STREN_Pos)      /* (GPIO_CTRL2P24) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P24_DRIV_STREN(value)       (GPIO_CTRL2P24_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P24_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P24 register */
#define   GPIO_CTRL2P24_DRIV_STREN_LEVEL0_Val _UINT32_(0x0)                                        /* (GPIO_CTRL2P24) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P24_DRIV_STREN_LEVEL1_Val _UINT32_(0x1)                                        /* (GPIO_CTRL2P24) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P24_DRIV_STREN_LEVEL2_Val _UINT32_(0x2)                                        /* (GPIO_CTRL2P24) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P24_DRIV_STREN_LEVEL3_Val _UINT32_(0x3)                                        /* (GPIO_CTRL2P24) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P24_DRIV_STREN_LEVEL0       (GPIO_CTRL2P24_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P24_DRIV_STREN_Pos) /* (GPIO_CTRL2P24) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P24_DRIV_STREN_LEVEL1       (GPIO_CTRL2P24_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P24_DRIV_STREN_Pos) /* (GPIO_CTRL2P24) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P24_DRIV_STREN_LEVEL2       (GPIO_CTRL2P24_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P24_DRIV_STREN_Pos) /* (GPIO_CTRL2P24) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P24_DRIV_STREN_LEVEL3       (GPIO_CTRL2P24_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P24_DRIV_STREN_Pos) /* (GPIO_CTRL2P24) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P24_Msk                     _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P24) Register Mask  */


/* -------- GPIO_CTRL2P25 : (GPIO Offset: 0x7A0) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P25_RESETVALUE              _UINT32_(0x00)                                       /*  (GPIO_CTRL2P25) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P25_SLEW_CTRL_Pos           _UINT32_(0)                                          /* (GPIO_CTRL2P25) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P25_SLEW_CTRL_Msk           (_UINT32_(0x1) << GPIO_CTRL2P25_SLEW_CTRL_Pos)       /* (GPIO_CTRL2P25) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P25_SLEW_CTRL(value)        (GPIO_CTRL2P25_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P25_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P25 register */
#define GPIO_CTRL2P25_DRIV_STREN_Pos          _UINT32_(4)                                          /* (GPIO_CTRL2P25) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P25_DRIV_STREN_Msk          (_UINT32_(0x3) << GPIO_CTRL2P25_DRIV_STREN_Pos)      /* (GPIO_CTRL2P25) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P25_DRIV_STREN(value)       (GPIO_CTRL2P25_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P25_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P25 register */
#define   GPIO_CTRL2P25_DRIV_STREN_LEVEL0_Val _UINT32_(0x0)                                        /* (GPIO_CTRL2P25) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P25_DRIV_STREN_LEVEL1_Val _UINT32_(0x1)                                        /* (GPIO_CTRL2P25) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P25_DRIV_STREN_LEVEL2_Val _UINT32_(0x2)                                        /* (GPIO_CTRL2P25) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P25_DRIV_STREN_LEVEL3_Val _UINT32_(0x3)                                        /* (GPIO_CTRL2P25) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P25_DRIV_STREN_LEVEL0       (GPIO_CTRL2P25_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P25_DRIV_STREN_Pos) /* (GPIO_CTRL2P25) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P25_DRIV_STREN_LEVEL1       (GPIO_CTRL2P25_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P25_DRIV_STREN_Pos) /* (GPIO_CTRL2P25) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P25_DRIV_STREN_LEVEL2       (GPIO_CTRL2P25_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P25_DRIV_STREN_Pos) /* (GPIO_CTRL2P25) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P25_DRIV_STREN_LEVEL3       (GPIO_CTRL2P25_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P25_DRIV_STREN_Pos) /* (GPIO_CTRL2P25) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P25_Msk                     _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P25) Register Mask  */


/* -------- GPIO_CTRL2P26 : (GPIO Offset: 0x7C0) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P26_RESETVALUE              _UINT32_(0x00)                                       /*  (GPIO_CTRL2P26) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P26_SLEW_CTRL_Pos           _UINT32_(0)                                          /* (GPIO_CTRL2P26) Selects slew rate on the pin. 1=fast 0=slow Position */
#define GPIO_CTRL2P26_SLEW_CTRL_Msk           (_UINT32_(0x1) << GPIO_CTRL2P26_SLEW_CTRL_Pos)       /* (GPIO_CTRL2P26) Selects slew rate on the pin. 1=fast 0=slow Mask */
#define GPIO_CTRL2P26_SLEW_CTRL(value)        (GPIO_CTRL2P26_SLEW_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL2P26_SLEW_CTRL_Pos)) /* Assigment of value for SLEW_CTRL in the GPIO_CTRL2P26 register */
#define GPIO_CTRL2P26_DRIV_STREN_Pos          _UINT32_(4)                                          /* (GPIO_CTRL2P26) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P26_DRIV_STREN_Msk          (_UINT32_(0x3) << GPIO_CTRL2P26_DRIV_STREN_Pos)      /* (GPIO_CTRL2P26) Selects the drive strength on the pin. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P26_DRIV_STREN(value)       (GPIO_CTRL2P26_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P26_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P26 register */
#define   GPIO_CTRL2P26_DRIV_STREN_LEVEL0_Val _UINT32_(0x0)                                        /* (GPIO_CTRL2P26) For PIO12 = 2mA, PIO24 = 4mA  */
#define   GPIO_CTRL2P26_DRIV_STREN_LEVEL1_Val _UINT32_(0x1)                                        /* (GPIO_CTRL2P26) For PIO12 = 4mA, PIO24 = 8mA  */
#define   GPIO_CTRL2P26_DRIV_STREN_LEVEL2_Val _UINT32_(0x2)                                        /* (GPIO_CTRL2P26) For PIO12 = 8mA, PIO24 = 16mA  */
#define   GPIO_CTRL2P26_DRIV_STREN_LEVEL3_Val _UINT32_(0x3)                                        /* (GPIO_CTRL2P26) For PIO12 = 12mA, PIO24 = 24mA  */
#define GPIO_CTRL2P26_DRIV_STREN_LEVEL0       (GPIO_CTRL2P26_DRIV_STREN_LEVEL0_Val << GPIO_CTRL2P26_DRIV_STREN_Pos) /* (GPIO_CTRL2P26) For PIO12 = 2mA, PIO24 = 4mA Position  */
#define GPIO_CTRL2P26_DRIV_STREN_LEVEL1       (GPIO_CTRL2P26_DRIV_STREN_LEVEL1_Val << GPIO_CTRL2P26_DRIV_STREN_Pos) /* (GPIO_CTRL2P26) For PIO12 = 4mA, PIO24 = 8mA Position  */
#define GPIO_CTRL2P26_DRIV_STREN_LEVEL2       (GPIO_CTRL2P26_DRIV_STREN_LEVEL2_Val << GPIO_CTRL2P26_DRIV_STREN_Pos) /* (GPIO_CTRL2P26) For PIO12 = 8mA, PIO24 = 16mA Position  */
#define GPIO_CTRL2P26_DRIV_STREN_LEVEL3       (GPIO_CTRL2P26_DRIV_STREN_LEVEL3_Val << GPIO_CTRL2P26_DRIV_STREN_Pos) /* (GPIO_CTRL2P26) For PIO12 = 12mA, PIO24 = 24mA Position  */
#define GPIO_CTRL2P26_Msk                     _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P26) Register Mask  */


/** \brief GPIO register offsets definitions */
#define GPIO_CTRL0_REG_OFST            _UINT32_(0x00)      /* (GPIO_CTRL0) GPIO Pin Control Register Offset */
#define GPIO_CTRL0_0_REG_OFST          _UINT32_(0x00)      /* (GPIO_CTRL0_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL0_1_REG_OFST          _UINT32_(0x04)      /* (GPIO_CTRL0_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL0_2_REG_OFST          _UINT32_(0x08)      /* (GPIO_CTRL0_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL0_3_REG_OFST          _UINT32_(0x0C)      /* (GPIO_CTRL0_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL0_4_REG_OFST          _UINT32_(0x10)      /* (GPIO_CTRL0_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL0_5_REG_OFST          _UINT32_(0x14)      /* (GPIO_CTRL0_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL0_6_REG_OFST          _UINT32_(0x18)      /* (GPIO_CTRL0_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL0_7_REG_OFST          _UINT32_(0x1C)      /* (GPIO_CTRL0_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL1_REG_OFST            _UINT32_(0x20)      /* (GPIO_CTRL1) GPIO Pin Control Register Offset */
#define GPIO_CTRL1_0_REG_OFST          _UINT32_(0x20)      /* (GPIO_CTRL1_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL1_1_REG_OFST          _UINT32_(0x24)      /* (GPIO_CTRL1_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL1_2_REG_OFST          _UINT32_(0x28)      /* (GPIO_CTRL1_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL1_3_REG_OFST          _UINT32_(0x2C)      /* (GPIO_CTRL1_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL1_4_REG_OFST          _UINT32_(0x30)      /* (GPIO_CTRL1_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL1_5_REG_OFST          _UINT32_(0x34)      /* (GPIO_CTRL1_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL1_6_REG_OFST          _UINT32_(0x38)      /* (GPIO_CTRL1_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL1_7_REG_OFST          _UINT32_(0x3C)      /* (GPIO_CTRL1_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL2_REG_OFST            _UINT32_(0x40)      /* (GPIO_CTRL2) GPIO Pin Control Register Offset */
#define GPIO_CTRL2_0_REG_OFST          _UINT32_(0x40)      /* (GPIO_CTRL2_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL2_1_REG_OFST          _UINT32_(0x44)      /* (GPIO_CTRL2_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL2_2_REG_OFST          _UINT32_(0x48)      /* (GPIO_CTRL2_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL2_3_REG_OFST          _UINT32_(0x4C)      /* (GPIO_CTRL2_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL2_4_REG_OFST          _UINT32_(0x50)      /* (GPIO_CTRL2_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL2_5_REG_OFST          _UINT32_(0x54)      /* (GPIO_CTRL2_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL2_6_REG_OFST          _UINT32_(0x58)      /* (GPIO_CTRL2_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL2_7_REG_OFST          _UINT32_(0x5C)      /* (GPIO_CTRL2_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL3_REG_OFST            _UINT32_(0x60)      /* (GPIO_CTRL3) GPIO Pin Control Register Offset */
#define GPIO_CTRL3_0_REG_OFST          _UINT32_(0x60)      /* (GPIO_CTRL3_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL3_1_REG_OFST          _UINT32_(0x64)      /* (GPIO_CTRL3_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL3_2_REG_OFST          _UINT32_(0x68)      /* (GPIO_CTRL3_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL3_3_REG_OFST          _UINT32_(0x6C)      /* (GPIO_CTRL3_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL3_4_REG_OFST          _UINT32_(0x70)      /* (GPIO_CTRL3_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL3_5_REG_OFST          _UINT32_(0x74)      /* (GPIO_CTRL3_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL3_6_REG_OFST          _UINT32_(0x78)      /* (GPIO_CTRL3_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL3_7_REG_OFST          _UINT32_(0x7C)      /* (GPIO_CTRL3_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL4_REG_OFST            _UINT32_(0x80)      /* (GPIO_CTRL4) GPIO Pin Control Register Offset */
#define GPIO_CTRL4_0_REG_OFST          _UINT32_(0x80)      /* (GPIO_CTRL4_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL4_1_REG_OFST          _UINT32_(0x84)      /* (GPIO_CTRL4_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL4_2_REG_OFST          _UINT32_(0x88)      /* (GPIO_CTRL4_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL4_3_REG_OFST          _UINT32_(0x8C)      /* (GPIO_CTRL4_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL4_4_REG_OFST          _UINT32_(0x90)      /* (GPIO_CTRL4_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL4_5_REG_OFST          _UINT32_(0x94)      /* (GPIO_CTRL4_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL4_6_REG_OFST          _UINT32_(0x98)      /* (GPIO_CTRL4_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL4_7_REG_OFST          _UINT32_(0x9C)      /* (GPIO_CTRL4_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL5_REG_OFST            _UINT32_(0xA0)      /* (GPIO_CTRL5) GPIO Pin Control Register Offset */
#define GPIO_CTRL5_0_REG_OFST          _UINT32_(0xA0)      /* (GPIO_CTRL5_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL5_1_REG_OFST          _UINT32_(0xA4)      /* (GPIO_CTRL5_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL5_2_REG_OFST          _UINT32_(0xA8)      /* (GPIO_CTRL5_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL5_3_REG_OFST          _UINT32_(0xAC)      /* (GPIO_CTRL5_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL5_4_REG_OFST          _UINT32_(0xB0)      /* (GPIO_CTRL5_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL5_5_REG_OFST          _UINT32_(0xB4)      /* (GPIO_CTRL5_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL5_6_REG_OFST          _UINT32_(0xB8)      /* (GPIO_CTRL5_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL5_7_REG_OFST          _UINT32_(0xBC)      /* (GPIO_CTRL5_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL6_REG_OFST            _UINT32_(0xC0)      /* (GPIO_CTRL6) GPIO Pin Control Register Offset */
#define GPIO_CTRL6_0_REG_OFST          _UINT32_(0xC0)      /* (GPIO_CTRL6_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL6_1_REG_OFST          _UINT32_(0xC4)      /* (GPIO_CTRL6_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL6_2_REG_OFST          _UINT32_(0xC8)      /* (GPIO_CTRL6_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL6_3_REG_OFST          _UINT32_(0xCC)      /* (GPIO_CTRL6_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL6_4_REG_OFST          _UINT32_(0xD0)      /* (GPIO_CTRL6_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL6_5_REG_OFST          _UINT32_(0xD4)      /* (GPIO_CTRL6_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL6_6_REG_OFST          _UINT32_(0xD8)      /* (GPIO_CTRL6_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL6_7_REG_OFST          _UINT32_(0xDC)      /* (GPIO_CTRL6_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL7_REG_OFST            _UINT32_(0xE0)      /* (GPIO_CTRL7) GPIO Pin Control Register Offset */
#define GPIO_CTRL7_0_REG_OFST          _UINT32_(0xE0)      /* (GPIO_CTRL7_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL7_1_REG_OFST          _UINT32_(0xE4)      /* (GPIO_CTRL7_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL7_2_REG_OFST          _UINT32_(0xE8)      /* (GPIO_CTRL7_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL7_3_REG_OFST          _UINT32_(0xEC)      /* (GPIO_CTRL7_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL7_4_REG_OFST          _UINT32_(0xF0)      /* (GPIO_CTRL7_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL7_5_REG_OFST          _UINT32_(0xF4)      /* (GPIO_CTRL7_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL7_6_REG_OFST          _UINT32_(0xF8)      /* (GPIO_CTRL7_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL7_7_REG_OFST          _UINT32_(0xFC)      /* (GPIO_CTRL7_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL10_REG_OFST           _UINT32_(0x100)     /* (GPIO_CTRL10) GPIO Pin Control Register Offset */
#define GPIO_CTRL10_0_REG_OFST         _UINT32_(0x100)     /* (GPIO_CTRL10_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL10_1_REG_OFST         _UINT32_(0x104)     /* (GPIO_CTRL10_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL10_2_REG_OFST         _UINT32_(0x108)     /* (GPIO_CTRL10_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL10_3_REG_OFST         _UINT32_(0x10C)     /* (GPIO_CTRL10_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL10_4_REG_OFST         _UINT32_(0x110)     /* (GPIO_CTRL10_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL10_5_REG_OFST         _UINT32_(0x114)     /* (GPIO_CTRL10_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL10_6_REG_OFST         _UINT32_(0x118)     /* (GPIO_CTRL10_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL10_7_REG_OFST         _UINT32_(0x11C)     /* (GPIO_CTRL10_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL11_REG_OFST           _UINT32_(0x120)     /* (GPIO_CTRL11) GPIO Pin Control Register Offset */
#define GPIO_CTRL11_0_REG_OFST         _UINT32_(0x120)     /* (GPIO_CTRL11_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL11_1_REG_OFST         _UINT32_(0x124)     /* (GPIO_CTRL11_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL11_2_REG_OFST         _UINT32_(0x128)     /* (GPIO_CTRL11_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL11_3_REG_OFST         _UINT32_(0x12C)     /* (GPIO_CTRL11_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL11_4_REG_OFST         _UINT32_(0x130)     /* (GPIO_CTRL11_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL11_5_REG_OFST         _UINT32_(0x134)     /* (GPIO_CTRL11_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL11_6_REG_OFST         _UINT32_(0x138)     /* (GPIO_CTRL11_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL11_7_REG_OFST         _UINT32_(0x13C)     /* (GPIO_CTRL11_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL12_REG_OFST           _UINT32_(0x140)     /* (GPIO_CTRL12) GPIO Pin Control Register Offset */
#define GPIO_CTRL12_0_REG_OFST         _UINT32_(0x140)     /* (GPIO_CTRL12_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL12_1_REG_OFST         _UINT32_(0x144)     /* (GPIO_CTRL12_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL12_2_REG_OFST         _UINT32_(0x148)     /* (GPIO_CTRL12_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL12_3_REG_OFST         _UINT32_(0x14C)     /* (GPIO_CTRL12_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL12_4_REG_OFST         _UINT32_(0x150)     /* (GPIO_CTRL12_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL12_5_REG_OFST         _UINT32_(0x154)     /* (GPIO_CTRL12_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL12_6_REG_OFST         _UINT32_(0x158)     /* (GPIO_CTRL12_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL12_7_REG_OFST         _UINT32_(0x15C)     /* (GPIO_CTRL12_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL13_REG_OFST           _UINT32_(0x160)     /* (GPIO_CTRL13) GPIO Pin Control Register Offset */
#define GPIO_CTRL13_0_REG_OFST         _UINT32_(0x160)     /* (GPIO_CTRL13_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL13_1_REG_OFST         _UINT32_(0x164)     /* (GPIO_CTRL13_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL13_2_REG_OFST         _UINT32_(0x168)     /* (GPIO_CTRL13_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL13_3_REG_OFST         _UINT32_(0x16C)     /* (GPIO_CTRL13_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL13_4_REG_OFST         _UINT32_(0x170)     /* (GPIO_CTRL13_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL13_5_REG_OFST         _UINT32_(0x174)     /* (GPIO_CTRL13_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL13_6_REG_OFST         _UINT32_(0x178)     /* (GPIO_CTRL13_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL13_7_REG_OFST         _UINT32_(0x17C)     /* (GPIO_CTRL13_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL14_REG_OFST           _UINT32_(0x180)     /* (GPIO_CTRL14) GPIO Pin Control Register Offset */
#define GPIO_CTRL14_0_REG_OFST         _UINT32_(0x180)     /* (GPIO_CTRL14_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL14_1_REG_OFST         _UINT32_(0x184)     /* (GPIO_CTRL14_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL14_2_REG_OFST         _UINT32_(0x188)     /* (GPIO_CTRL14_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL14_3_REG_OFST         _UINT32_(0x18C)     /* (GPIO_CTRL14_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL14_4_REG_OFST         _UINT32_(0x190)     /* (GPIO_CTRL14_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL14_5_REG_OFST         _UINT32_(0x194)     /* (GPIO_CTRL14_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL14_6_REG_OFST         _UINT32_(0x198)     /* (GPIO_CTRL14_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL14_7_REG_OFST         _UINT32_(0x19C)     /* (GPIO_CTRL14_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL15_REG_OFST           _UINT32_(0x1A0)     /* (GPIO_CTRL15) GPIO Pin Control Register Offset */
#define GPIO_CTRL15_0_REG_OFST         _UINT32_(0x1A0)     /* (GPIO_CTRL15_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL15_1_REG_OFST         _UINT32_(0x1A4)     /* (GPIO_CTRL15_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL15_2_REG_OFST         _UINT32_(0x1A8)     /* (GPIO_CTRL15_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL15_3_REG_OFST         _UINT32_(0x1AC)     /* (GPIO_CTRL15_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL15_4_REG_OFST         _UINT32_(0x1B0)     /* (GPIO_CTRL15_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL15_5_REG_OFST         _UINT32_(0x1B4)     /* (GPIO_CTRL15_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL15_6_REG_OFST         _UINT32_(0x1B8)     /* (GPIO_CTRL15_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL15_7_REG_OFST         _UINT32_(0x1BC)     /* (GPIO_CTRL15_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL16_REG_OFST           _UINT32_(0x1C0)     /* (GPIO_CTRL16) GPIO Pin Control Register Offset */
#define GPIO_CTRL16_0_REG_OFST         _UINT32_(0x1C0)     /* (GPIO_CTRL16_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL16_1_REG_OFST         _UINT32_(0x1C4)     /* (GPIO_CTRL16_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL16_2_REG_OFST         _UINT32_(0x1C8)     /* (GPIO_CTRL16_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL16_3_REG_OFST         _UINT32_(0x1CC)     /* (GPIO_CTRL16_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL16_4_REG_OFST         _UINT32_(0x1D0)     /* (GPIO_CTRL16_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL16_5_REG_OFST         _UINT32_(0x1D4)     /* (GPIO_CTRL16_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL16_6_REG_OFST         _UINT32_(0x1D8)     /* (GPIO_CTRL16_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL16_7_REG_OFST         _UINT32_(0x1DC)     /* (GPIO_CTRL16_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL17_REG_OFST           _UINT32_(0x1E0)     /* (GPIO_CTRL17) GPIO Pin Control Register Offset */
#define GPIO_CTRL17_0_REG_OFST         _UINT32_(0x1E0)     /* (GPIO_CTRL17_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL17_1_REG_OFST         _UINT32_(0x1E4)     /* (GPIO_CTRL17_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL17_2_REG_OFST         _UINT32_(0x1E8)     /* (GPIO_CTRL17_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL17_3_REG_OFST         _UINT32_(0x1EC)     /* (GPIO_CTRL17_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL17_4_REG_OFST         _UINT32_(0x1F0)     /* (GPIO_CTRL17_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL17_5_REG_OFST         _UINT32_(0x1F4)     /* (GPIO_CTRL17_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL17_6_REG_OFST         _UINT32_(0x1F8)     /* (GPIO_CTRL17_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL17_7_REG_OFST         _UINT32_(0x1FC)     /* (GPIO_CTRL17_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL20_REG_OFST           _UINT32_(0x200)     /* (GPIO_CTRL20) GPIO Pin Control Register Offset */
#define GPIO_CTRL20_0_REG_OFST         _UINT32_(0x200)     /* (GPIO_CTRL20_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL20_1_REG_OFST         _UINT32_(0x204)     /* (GPIO_CTRL20_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL20_2_REG_OFST         _UINT32_(0x208)     /* (GPIO_CTRL20_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL20_3_REG_OFST         _UINT32_(0x20C)     /* (GPIO_CTRL20_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL20_4_REG_OFST         _UINT32_(0x210)     /* (GPIO_CTRL20_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL20_5_REG_OFST         _UINT32_(0x214)     /* (GPIO_CTRL20_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL20_6_REG_OFST         _UINT32_(0x218)     /* (GPIO_CTRL20_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL20_7_REG_OFST         _UINT32_(0x21C)     /* (GPIO_CTRL20_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL21_REG_OFST           _UINT32_(0x220)     /* (GPIO_CTRL21) GPIO Pin Control Register Offset */
#define GPIO_CTRL21_0_REG_OFST         _UINT32_(0x220)     /* (GPIO_CTRL21_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL21_1_REG_OFST         _UINT32_(0x224)     /* (GPIO_CTRL21_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL21_2_REG_OFST         _UINT32_(0x228)     /* (GPIO_CTRL21_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL21_3_REG_OFST         _UINT32_(0x22C)     /* (GPIO_CTRL21_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL21_4_REG_OFST         _UINT32_(0x230)     /* (GPIO_CTRL21_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL21_5_REG_OFST         _UINT32_(0x234)     /* (GPIO_CTRL21_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL21_6_REG_OFST         _UINT32_(0x238)     /* (GPIO_CTRL21_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL21_7_REG_OFST         _UINT32_(0x23C)     /* (GPIO_CTRL21_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL22_REG_OFST           _UINT32_(0x240)     /* (GPIO_CTRL22) GPIO Pin Control Register Offset */
#define GPIO_CTRL22_0_REG_OFST         _UINT32_(0x240)     /* (GPIO_CTRL22_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL22_1_REG_OFST         _UINT32_(0x244)     /* (GPIO_CTRL22_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL22_2_REG_OFST         _UINT32_(0x248)     /* (GPIO_CTRL22_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL22_3_REG_OFST         _UINT32_(0x24C)     /* (GPIO_CTRL22_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL22_4_REG_OFST         _UINT32_(0x250)     /* (GPIO_CTRL22_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL22_5_REG_OFST         _UINT32_(0x254)     /* (GPIO_CTRL22_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL22_6_REG_OFST         _UINT32_(0x258)     /* (GPIO_CTRL22_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL22_7_REG_OFST         _UINT32_(0x25C)     /* (GPIO_CTRL22_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL23_REG_OFST           _UINT32_(0x260)     /* (GPIO_CTRL23) GPIO Pin Control Register Offset */
#define GPIO_CTRL23_0_REG_OFST         _UINT32_(0x260)     /* (GPIO_CTRL23_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL23_1_REG_OFST         _UINT32_(0x264)     /* (GPIO_CTRL23_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL23_2_REG_OFST         _UINT32_(0x268)     /* (GPIO_CTRL23_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL23_3_REG_OFST         _UINT32_(0x26C)     /* (GPIO_CTRL23_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL23_4_REG_OFST         _UINT32_(0x270)     /* (GPIO_CTRL23_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL23_5_REG_OFST         _UINT32_(0x274)     /* (GPIO_CTRL23_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL23_6_REG_OFST         _UINT32_(0x278)     /* (GPIO_CTRL23_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL23_7_REG_OFST         _UINT32_(0x27C)     /* (GPIO_CTRL23_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL24_REG_OFST           _UINT32_(0x280)     /* (GPIO_CTRL24) GPIO Pin Control Register Offset */
#define GPIO_CTRL24_0_REG_OFST         _UINT32_(0x280)     /* (GPIO_CTRL24_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL24_1_REG_OFST         _UINT32_(0x284)     /* (GPIO_CTRL24_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL24_2_REG_OFST         _UINT32_(0x288)     /* (GPIO_CTRL24_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL24_3_REG_OFST         _UINT32_(0x28C)     /* (GPIO_CTRL24_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL24_4_REG_OFST         _UINT32_(0x290)     /* (GPIO_CTRL24_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL24_5_REG_OFST         _UINT32_(0x294)     /* (GPIO_CTRL24_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL24_6_REG_OFST         _UINT32_(0x298)     /* (GPIO_CTRL24_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL24_7_REG_OFST         _UINT32_(0x29C)     /* (GPIO_CTRL24_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL25_REG_OFST           _UINT32_(0x2A0)     /* (GPIO_CTRL25) GPIO Pin Control Register Offset */
#define GPIO_CTRL25_0_REG_OFST         _UINT32_(0x2A0)     /* (GPIO_CTRL25_0) GPIO Pin Control Register Offset */
#define GPIO_CTRL25_1_REG_OFST         _UINT32_(0x2A4)     /* (GPIO_CTRL25_1) GPIO Pin Control Register Offset */
#define GPIO_CTRL25_2_REG_OFST         _UINT32_(0x2A8)     /* (GPIO_CTRL25_2) GPIO Pin Control Register Offset */
#define GPIO_CTRL25_3_REG_OFST         _UINT32_(0x2AC)     /* (GPIO_CTRL25_3) GPIO Pin Control Register Offset */
#define GPIO_CTRL25_4_REG_OFST         _UINT32_(0x2B0)     /* (GPIO_CTRL25_4) GPIO Pin Control Register Offset */
#define GPIO_CTRL25_5_REG_OFST         _UINT32_(0x2B4)     /* (GPIO_CTRL25_5) GPIO Pin Control Register Offset */
#define GPIO_CTRL25_6_REG_OFST         _UINT32_(0x2B8)     /* (GPIO_CTRL25_6) GPIO Pin Control Register Offset */
#define GPIO_CTRL25_7_REG_OFST         _UINT32_(0x2BC)     /* (GPIO_CTRL25_7) GPIO Pin Control Register Offset */
#define GPIO_CTRL26_REG_OFST           _UINT32_(0x2C0)     /* (GPIO_CTRL26) GPIO Pin Control Register Offset */
#define GPIO_CTRL26_0_REG_OFST         _UINT32_(0x2C0)     /* (GPIO_CTRL26_0) GPIO Pin Control Register Offset */
#define GPIO_PARIN_REG_OFST            _UINT32_(0x300)     /* (GPIO_PARIN) The GPIO Input Registers. Offset */
#define GPIO_PARIN0_REG_OFST           _UINT32_(0x300)     /* (GPIO_PARIN0) The GPIO Input Registers. Offset */
#define GPIO_PARIN1_REG_OFST           _UINT32_(0x304)     /* (GPIO_PARIN1) The GPIO Input Registers. Offset */
#define GPIO_PARIN2_REG_OFST           _UINT32_(0x308)     /* (GPIO_PARIN2) The GPIO Input Registers. Offset */
#define GPIO_PARIN3_REG_OFST           _UINT32_(0x30C)     /* (GPIO_PARIN3) The GPIO Input Registers. Offset */
#define GPIO_PARIN4_REG_OFST           _UINT32_(0x310)     /* (GPIO_PARIN4) The GPIO Input Registers. Offset */
#define GPIO_PARIN5_REG_OFST           _UINT32_(0x314)     /* (GPIO_PARIN5) The GPIO Input Registers. Offset */
#define GPIO_PAROUT_REG_OFST           _UINT32_(0x380)     /* (GPIO_PAROUT) The GPIO Output Registers. Offset */
#define GPIO_PAROUT0_REG_OFST          _UINT32_(0x380)     /* (GPIO_PAROUT0) The GPIO Output Registers. Offset */
#define GPIO_PAROUT1_REG_OFST          _UINT32_(0x384)     /* (GPIO_PAROUT1) The GPIO Output Registers. Offset */
#define GPIO_PAROUT2_REG_OFST          _UINT32_(0x388)     /* (GPIO_PAROUT2) The GPIO Output Registers. Offset */
#define GPIO_PAROUT3_REG_OFST          _UINT32_(0x38C)     /* (GPIO_PAROUT3) The GPIO Output Registers. Offset */
#define GPIO_PAROUT4_REG_OFST          _UINT32_(0x390)     /* (GPIO_PAROUT4) The GPIO Output Registers. Offset */
#define GPIO_PAROUT5_REG_OFST          _UINT32_(0x394)     /* (GPIO_PAROUT5) The GPIO Output Registers. Offset */
#define GPIO_CTRL2P0_REG_OFST          _UINT32_(0x500)     /* (GPIO_CTRL2P0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P0_0_REG_OFST        _UINT32_(0x500)     /* (GPIO_CTRL2P0_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P0_1_REG_OFST        _UINT32_(0x504)     /* (GPIO_CTRL2P0_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P0_2_REG_OFST        _UINT32_(0x508)     /* (GPIO_CTRL2P0_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P0_3_REG_OFST        _UINT32_(0x50C)     /* (GPIO_CTRL2P0_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P0_4_REG_OFST        _UINT32_(0x510)     /* (GPIO_CTRL2P0_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P0_5_REG_OFST        _UINT32_(0x514)     /* (GPIO_CTRL2P0_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P0_6_REG_OFST        _UINT32_(0x518)     /* (GPIO_CTRL2P0_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P0_7_REG_OFST        _UINT32_(0x51C)     /* (GPIO_CTRL2P0_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P1_REG_OFST          _UINT32_(0x520)     /* (GPIO_CTRL2P1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P1_0_REG_OFST        _UINT32_(0x520)     /* (GPIO_CTRL2P1_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P1_1_REG_OFST        _UINT32_(0x524)     /* (GPIO_CTRL2P1_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P1_2_REG_OFST        _UINT32_(0x528)     /* (GPIO_CTRL2P1_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P1_3_REG_OFST        _UINT32_(0x52C)     /* (GPIO_CTRL2P1_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P1_4_REG_OFST        _UINT32_(0x530)     /* (GPIO_CTRL2P1_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P1_5_REG_OFST        _UINT32_(0x534)     /* (GPIO_CTRL2P1_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P1_6_REG_OFST        _UINT32_(0x538)     /* (GPIO_CTRL2P1_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P1_7_REG_OFST        _UINT32_(0x53C)     /* (GPIO_CTRL2P1_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P2_REG_OFST          _UINT32_(0x540)     /* (GPIO_CTRL2P2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P2_0_REG_OFST        _UINT32_(0x540)     /* (GPIO_CTRL2P2_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P2_1_REG_OFST        _UINT32_(0x544)     /* (GPIO_CTRL2P2_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P2_2_REG_OFST        _UINT32_(0x548)     /* (GPIO_CTRL2P2_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P2_3_REG_OFST        _UINT32_(0x54C)     /* (GPIO_CTRL2P2_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P2_4_REG_OFST        _UINT32_(0x550)     /* (GPIO_CTRL2P2_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P2_5_REG_OFST        _UINT32_(0x554)     /* (GPIO_CTRL2P2_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P2_6_REG_OFST        _UINT32_(0x558)     /* (GPIO_CTRL2P2_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P2_7_REG_OFST        _UINT32_(0x55C)     /* (GPIO_CTRL2P2_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P3_REG_OFST          _UINT32_(0x560)     /* (GPIO_CTRL2P3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P3_0_REG_OFST        _UINT32_(0x560)     /* (GPIO_CTRL2P3_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P3_1_REG_OFST        _UINT32_(0x564)     /* (GPIO_CTRL2P3_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P3_2_REG_OFST        _UINT32_(0x568)     /* (GPIO_CTRL2P3_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P3_3_REG_OFST        _UINT32_(0x56C)     /* (GPIO_CTRL2P3_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P3_4_REG_OFST        _UINT32_(0x570)     /* (GPIO_CTRL2P3_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P3_5_REG_OFST        _UINT32_(0x574)     /* (GPIO_CTRL2P3_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P3_6_REG_OFST        _UINT32_(0x578)     /* (GPIO_CTRL2P3_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P3_7_REG_OFST        _UINT32_(0x57C)     /* (GPIO_CTRL2P3_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P4_REG_OFST          _UINT32_(0x580)     /* (GPIO_CTRL2P4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P4_0_REG_OFST        _UINT32_(0x580)     /* (GPIO_CTRL2P4_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P4_1_REG_OFST        _UINT32_(0x584)     /* (GPIO_CTRL2P4_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P4_2_REG_OFST        _UINT32_(0x588)     /* (GPIO_CTRL2P4_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P4_3_REG_OFST        _UINT32_(0x58C)     /* (GPIO_CTRL2P4_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P4_4_REG_OFST        _UINT32_(0x590)     /* (GPIO_CTRL2P4_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P4_5_REG_OFST        _UINT32_(0x594)     /* (GPIO_CTRL2P4_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P4_6_REG_OFST        _UINT32_(0x598)     /* (GPIO_CTRL2P4_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P4_7_REG_OFST        _UINT32_(0x59C)     /* (GPIO_CTRL2P4_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P5_REG_OFST          _UINT32_(0x5A0)     /* (GPIO_CTRL2P5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P5_0_REG_OFST        _UINT32_(0x5A0)     /* (GPIO_CTRL2P5_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P5_1_REG_OFST        _UINT32_(0x5A4)     /* (GPIO_CTRL2P5_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P5_2_REG_OFST        _UINT32_(0x5A8)     /* (GPIO_CTRL2P5_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P5_3_REG_OFST        _UINT32_(0x5AC)     /* (GPIO_CTRL2P5_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P5_4_REG_OFST        _UINT32_(0x5B0)     /* (GPIO_CTRL2P5_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P5_5_REG_OFST        _UINT32_(0x5B4)     /* (GPIO_CTRL2P5_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P5_6_REG_OFST        _UINT32_(0x5B8)     /* (GPIO_CTRL2P5_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P5_7_REG_OFST        _UINT32_(0x5BC)     /* (GPIO_CTRL2P5_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P6_REG_OFST          _UINT32_(0x5C0)     /* (GPIO_CTRL2P6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P6_0_REG_OFST        _UINT32_(0x5C0)     /* (GPIO_CTRL2P6_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P6_1_REG_OFST        _UINT32_(0x5C4)     /* (GPIO_CTRL2P6_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P6_2_REG_OFST        _UINT32_(0x5C8)     /* (GPIO_CTRL2P6_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P6_3_REG_OFST        _UINT32_(0x5CC)     /* (GPIO_CTRL2P6_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P6_4_REG_OFST        _UINT32_(0x5D0)     /* (GPIO_CTRL2P6_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P6_5_REG_OFST        _UINT32_(0x5D4)     /* (GPIO_CTRL2P6_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P6_6_REG_OFST        _UINT32_(0x5D8)     /* (GPIO_CTRL2P6_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P6_7_REG_OFST        _UINT32_(0x5DC)     /* (GPIO_CTRL2P6_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P7_REG_OFST          _UINT32_(0x5E0)     /* (GPIO_CTRL2P7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P7_0_REG_OFST        _UINT32_(0x5E0)     /* (GPIO_CTRL2P7_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P7_1_REG_OFST        _UINT32_(0x5E4)     /* (GPIO_CTRL2P7_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P7_2_REG_OFST        _UINT32_(0x5E8)     /* (GPIO_CTRL2P7_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P7_3_REG_OFST        _UINT32_(0x5EC)     /* (GPIO_CTRL2P7_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P7_4_REG_OFST        _UINT32_(0x5F0)     /* (GPIO_CTRL2P7_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P7_5_REG_OFST        _UINT32_(0x5F4)     /* (GPIO_CTRL2P7_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P7_6_REG_OFST        _UINT32_(0x5F8)     /* (GPIO_CTRL2P7_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P7_7_REG_OFST        _UINT32_(0x5FC)     /* (GPIO_CTRL2P7_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P10_REG_OFST         _UINT32_(0x600)     /* (GPIO_CTRL2P10) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P10_0_REG_OFST       _UINT32_(0x600)     /* (GPIO_CTRL2P10_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P10_1_REG_OFST       _UINT32_(0x604)     /* (GPIO_CTRL2P10_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P10_2_REG_OFST       _UINT32_(0x608)     /* (GPIO_CTRL2P10_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P10_3_REG_OFST       _UINT32_(0x60C)     /* (GPIO_CTRL2P10_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P10_4_REG_OFST       _UINT32_(0x610)     /* (GPIO_CTRL2P10_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P10_5_REG_OFST       _UINT32_(0x614)     /* (GPIO_CTRL2P10_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P10_6_REG_OFST       _UINT32_(0x618)     /* (GPIO_CTRL2P10_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P10_7_REG_OFST       _UINT32_(0x61C)     /* (GPIO_CTRL2P10_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P11_REG_OFST         _UINT32_(0x620)     /* (GPIO_CTRL2P11) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P11_0_REG_OFST       _UINT32_(0x620)     /* (GPIO_CTRL2P11_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P11_1_REG_OFST       _UINT32_(0x624)     /* (GPIO_CTRL2P11_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P11_2_REG_OFST       _UINT32_(0x628)     /* (GPIO_CTRL2P11_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P11_3_REG_OFST       _UINT32_(0x62C)     /* (GPIO_CTRL2P11_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P11_4_REG_OFST       _UINT32_(0x630)     /* (GPIO_CTRL2P11_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P11_5_REG_OFST       _UINT32_(0x634)     /* (GPIO_CTRL2P11_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P11_6_REG_OFST       _UINT32_(0x638)     /* (GPIO_CTRL2P11_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P11_7_REG_OFST       _UINT32_(0x63C)     /* (GPIO_CTRL2P11_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P12_REG_OFST         _UINT32_(0x640)     /* (GPIO_CTRL2P12) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P12_0_REG_OFST       _UINT32_(0x640)     /* (GPIO_CTRL2P12_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P12_1_REG_OFST       _UINT32_(0x644)     /* (GPIO_CTRL2P12_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P12_2_REG_OFST       _UINT32_(0x648)     /* (GPIO_CTRL2P12_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P12_3_REG_OFST       _UINT32_(0x64C)     /* (GPIO_CTRL2P12_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P12_4_REG_OFST       _UINT32_(0x650)     /* (GPIO_CTRL2P12_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P12_5_REG_OFST       _UINT32_(0x654)     /* (GPIO_CTRL2P12_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P12_6_REG_OFST       _UINT32_(0x658)     /* (GPIO_CTRL2P12_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P12_7_REG_OFST       _UINT32_(0x65C)     /* (GPIO_CTRL2P12_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P13_REG_OFST         _UINT32_(0x660)     /* (GPIO_CTRL2P13) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P13_0_REG_OFST       _UINT32_(0x660)     /* (GPIO_CTRL2P13_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P13_1_REG_OFST       _UINT32_(0x664)     /* (GPIO_CTRL2P13_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P13_2_REG_OFST       _UINT32_(0x668)     /* (GPIO_CTRL2P13_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P13_3_REG_OFST       _UINT32_(0x66C)     /* (GPIO_CTRL2P13_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P13_4_REG_OFST       _UINT32_(0x670)     /* (GPIO_CTRL2P13_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P13_5_REG_OFST       _UINT32_(0x674)     /* (GPIO_CTRL2P13_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P13_6_REG_OFST       _UINT32_(0x678)     /* (GPIO_CTRL2P13_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P13_7_REG_OFST       _UINT32_(0x67C)     /* (GPIO_CTRL2P13_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P14_REG_OFST         _UINT32_(0x680)     /* (GPIO_CTRL2P14) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P14_0_REG_OFST       _UINT32_(0x680)     /* (GPIO_CTRL2P14_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P14_1_REG_OFST       _UINT32_(0x684)     /* (GPIO_CTRL2P14_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P14_2_REG_OFST       _UINT32_(0x688)     /* (GPIO_CTRL2P14_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P14_3_REG_OFST       _UINT32_(0x68C)     /* (GPIO_CTRL2P14_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P14_4_REG_OFST       _UINT32_(0x690)     /* (GPIO_CTRL2P14_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P14_5_REG_OFST       _UINT32_(0x694)     /* (GPIO_CTRL2P14_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P14_6_REG_OFST       _UINT32_(0x698)     /* (GPIO_CTRL2P14_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P14_7_REG_OFST       _UINT32_(0x69C)     /* (GPIO_CTRL2P14_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P15_REG_OFST         _UINT32_(0x6A0)     /* (GPIO_CTRL2P15) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P15_0_REG_OFST       _UINT32_(0x6A0)     /* (GPIO_CTRL2P15_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P15_1_REG_OFST       _UINT32_(0x6A4)     /* (GPIO_CTRL2P15_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P15_2_REG_OFST       _UINT32_(0x6A8)     /* (GPIO_CTRL2P15_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P15_3_REG_OFST       _UINT32_(0x6AC)     /* (GPIO_CTRL2P15_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P15_4_REG_OFST       _UINT32_(0x6B0)     /* (GPIO_CTRL2P15_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P15_5_REG_OFST       _UINT32_(0x6B4)     /* (GPIO_CTRL2P15_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P15_6_REG_OFST       _UINT32_(0x6B8)     /* (GPIO_CTRL2P15_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P15_7_REG_OFST       _UINT32_(0x6BC)     /* (GPIO_CTRL2P15_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P16_REG_OFST         _UINT32_(0x6C0)     /* (GPIO_CTRL2P16) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P16_0_REG_OFST       _UINT32_(0x6C0)     /* (GPIO_CTRL2P16_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P16_1_REG_OFST       _UINT32_(0x6C4)     /* (GPIO_CTRL2P16_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P16_2_REG_OFST       _UINT32_(0x6C8)     /* (GPIO_CTRL2P16_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P16_3_REG_OFST       _UINT32_(0x6CC)     /* (GPIO_CTRL2P16_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P16_4_REG_OFST       _UINT32_(0x6D0)     /* (GPIO_CTRL2P16_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P16_5_REG_OFST       _UINT32_(0x6D4)     /* (GPIO_CTRL2P16_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P16_6_REG_OFST       _UINT32_(0x6D8)     /* (GPIO_CTRL2P16_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P16_7_REG_OFST       _UINT32_(0x6DC)     /* (GPIO_CTRL2P16_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P17_REG_OFST         _UINT32_(0x6E0)     /* (GPIO_CTRL2P17) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P17_0_REG_OFST       _UINT32_(0x6E0)     /* (GPIO_CTRL2P17_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P17_1_REG_OFST       _UINT32_(0x6E4)     /* (GPIO_CTRL2P17_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P17_2_REG_OFST       _UINT32_(0x6E8)     /* (GPIO_CTRL2P17_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P17_3_REG_OFST       _UINT32_(0x6EC)     /* (GPIO_CTRL2P17_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P17_4_REG_OFST       _UINT32_(0x6F0)     /* (GPIO_CTRL2P17_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P17_5_REG_OFST       _UINT32_(0x6F4)     /* (GPIO_CTRL2P17_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P17_6_REG_OFST       _UINT32_(0x6F8)     /* (GPIO_CTRL2P17_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P17_7_REG_OFST       _UINT32_(0x6FC)     /* (GPIO_CTRL2P17_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P20_REG_OFST         _UINT32_(0x700)     /* (GPIO_CTRL2P20) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P20_0_REG_OFST       _UINT32_(0x700)     /* (GPIO_CTRL2P20_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P20_1_REG_OFST       _UINT32_(0x704)     /* (GPIO_CTRL2P20_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P20_2_REG_OFST       _UINT32_(0x708)     /* (GPIO_CTRL2P20_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P20_3_REG_OFST       _UINT32_(0x70C)     /* (GPIO_CTRL2P20_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P20_4_REG_OFST       _UINT32_(0x710)     /* (GPIO_CTRL2P20_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P20_5_REG_OFST       _UINT32_(0x714)     /* (GPIO_CTRL2P20_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P20_6_REG_OFST       _UINT32_(0x718)     /* (GPIO_CTRL2P20_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P20_7_REG_OFST       _UINT32_(0x71C)     /* (GPIO_CTRL2P20_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P21_REG_OFST         _UINT32_(0x720)     /* (GPIO_CTRL2P21) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P21_0_REG_OFST       _UINT32_(0x720)     /* (GPIO_CTRL2P21_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P21_1_REG_OFST       _UINT32_(0x724)     /* (GPIO_CTRL2P21_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P21_2_REG_OFST       _UINT32_(0x728)     /* (GPIO_CTRL2P21_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P21_3_REG_OFST       _UINT32_(0x72C)     /* (GPIO_CTRL2P21_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P21_4_REG_OFST       _UINT32_(0x730)     /* (GPIO_CTRL2P21_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P21_5_REG_OFST       _UINT32_(0x734)     /* (GPIO_CTRL2P21_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P21_6_REG_OFST       _UINT32_(0x738)     /* (GPIO_CTRL2P21_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P21_7_REG_OFST       _UINT32_(0x73C)     /* (GPIO_CTRL2P21_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P22_REG_OFST         _UINT32_(0x740)     /* (GPIO_CTRL2P22) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P22_0_REG_OFST       _UINT32_(0x740)     /* (GPIO_CTRL2P22_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P22_1_REG_OFST       _UINT32_(0x744)     /* (GPIO_CTRL2P22_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P22_2_REG_OFST       _UINT32_(0x748)     /* (GPIO_CTRL2P22_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P22_3_REG_OFST       _UINT32_(0x74C)     /* (GPIO_CTRL2P22_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P22_4_REG_OFST       _UINT32_(0x750)     /* (GPIO_CTRL2P22_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P22_5_REG_OFST       _UINT32_(0x754)     /* (GPIO_CTRL2P22_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P22_6_REG_OFST       _UINT32_(0x758)     /* (GPIO_CTRL2P22_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P22_7_REG_OFST       _UINT32_(0x75C)     /* (GPIO_CTRL2P22_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P23_REG_OFST         _UINT32_(0x760)     /* (GPIO_CTRL2P23) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P23_0_REG_OFST       _UINT32_(0x760)     /* (GPIO_CTRL2P23_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P23_1_REG_OFST       _UINT32_(0x764)     /* (GPIO_CTRL2P23_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P23_2_REG_OFST       _UINT32_(0x768)     /* (GPIO_CTRL2P23_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P23_3_REG_OFST       _UINT32_(0x76C)     /* (GPIO_CTRL2P23_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P23_4_REG_OFST       _UINT32_(0x770)     /* (GPIO_CTRL2P23_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P23_5_REG_OFST       _UINT32_(0x774)     /* (GPIO_CTRL2P23_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P23_6_REG_OFST       _UINT32_(0x778)     /* (GPIO_CTRL2P23_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P23_7_REG_OFST       _UINT32_(0x77C)     /* (GPIO_CTRL2P23_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P24_REG_OFST         _UINT32_(0x780)     /* (GPIO_CTRL2P24) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P24_0_REG_OFST       _UINT32_(0x780)     /* (GPIO_CTRL2P24_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P24_1_REG_OFST       _UINT32_(0x784)     /* (GPIO_CTRL2P24_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P24_2_REG_OFST       _UINT32_(0x788)     /* (GPIO_CTRL2P24_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P24_3_REG_OFST       _UINT32_(0x78C)     /* (GPIO_CTRL2P24_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P24_4_REG_OFST       _UINT32_(0x790)     /* (GPIO_CTRL2P24_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P24_5_REG_OFST       _UINT32_(0x794)     /* (GPIO_CTRL2P24_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P24_6_REG_OFST       _UINT32_(0x798)     /* (GPIO_CTRL2P24_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P24_7_REG_OFST       _UINT32_(0x79C)     /* (GPIO_CTRL2P24_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P25_REG_OFST         _UINT32_(0x7A0)     /* (GPIO_CTRL2P25) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P25_0_REG_OFST       _UINT32_(0x7A0)     /* (GPIO_CTRL2P25_0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P25_1_REG_OFST       _UINT32_(0x7A4)     /* (GPIO_CTRL2P25_1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P25_2_REG_OFST       _UINT32_(0x7A8)     /* (GPIO_CTRL2P25_2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P25_3_REG_OFST       _UINT32_(0x7AC)     /* (GPIO_CTRL2P25_3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P25_4_REG_OFST       _UINT32_(0x7B0)     /* (GPIO_CTRL2P25_4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P25_5_REG_OFST       _UINT32_(0x7B4)     /* (GPIO_CTRL2P25_5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P25_6_REG_OFST       _UINT32_(0x7B8)     /* (GPIO_CTRL2P25_6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P25_7_REG_OFST       _UINT32_(0x7BC)     /* (GPIO_CTRL2P25_7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P26_REG_OFST         _UINT32_(0x7C0)     /* (GPIO_CTRL2P26) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P26_0_REG_OFST       _UINT32_(0x7C0)     /* (GPIO_CTRL2P26_0) The GPIO PIN_CTRL2 Registers Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief GPIO register API structure */
typedef struct
{  /* GPIO Pin Control Registers */
  __IO  uint32_t                       GPIO_CTRL0[8];      /**< Offset: 0x00 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL1[8];      /**< Offset: 0x20 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL2[8];      /**< Offset: 0x40 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL3[8];      /**< Offset: 0x60 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL4[8];      /**< Offset: 0x80 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL5[8];      /**< Offset: 0xA0 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL6[8];      /**< Offset: 0xC0 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL7[8];      /**< Offset: 0xE0 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL10[8];     /**< Offset: 0x100 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL11[8];     /**< Offset: 0x120 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL12[8];     /**< Offset: 0x140 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL13[8];     /**< Offset: 0x160 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL14[8];     /**< Offset: 0x180 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL15[8];     /**< Offset: 0x1A0 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL16[8];     /**< Offset: 0x1C0 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL17[8];     /**< Offset: 0x1E0 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL20[8];     /**< Offset: 0x200 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL21[8];     /**< Offset: 0x220 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL22[8];     /**< Offset: 0x240 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL23[8];     /**< Offset: 0x260 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL24[8];     /**< Offset: 0x280 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL25[8];     /**< Offset: 0x2A0 (R/W  32) GPIO Pin Control Register */
  __IO  uint32_t                       GPIO_CTRL26[1];     /**< Offset: 0x2C0 (R/W  32) GPIO Pin Control Register */
  __I   uint8_t                        Reserved1[0x3C];
  __IO  uint32_t                       GPIO_PARIN[6];      /**< Offset: 0x300 (R/W  32) The GPIO Input Registers. */
  __I   uint8_t                        Reserved2[0x68];
  __IO  uint32_t                       GPIO_PAROUT[6];     /**< Offset: 0x380 (R/W  32) The GPIO Output Registers. */
  __I   uint8_t                        Reserved3[0x168];
  __IO  uint32_t                       GPIO_CTRL2P0[8];    /**< Offset: 0x500 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P1[8];    /**< Offset: 0x520 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P2[8];    /**< Offset: 0x540 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P3[8];    /**< Offset: 0x560 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P4[8];    /**< Offset: 0x580 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P5[8];    /**< Offset: 0x5A0 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P6[8];    /**< Offset: 0x5C0 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P7[8];    /**< Offset: 0x5E0 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P10[8];   /**< Offset: 0x600 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P11[8];   /**< Offset: 0x620 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P12[8];   /**< Offset: 0x640 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P13[8];   /**< Offset: 0x660 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P14[8];   /**< Offset: 0x680 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P15[8];   /**< Offset: 0x6A0 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P16[8];   /**< Offset: 0x6C0 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P17[8];   /**< Offset: 0x6E0 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P20[8];   /**< Offset: 0x700 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P21[8];   /**< Offset: 0x720 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P22[8];   /**< Offset: 0x740 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P23[8];   /**< Offset: 0x760 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P24[8];   /**< Offset: 0x780 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P25[8];   /**< Offset: 0x7A0 (R/W  32) The GPIO PIN_CTRL2 Registers */
  __IO  uint32_t                       GPIO_CTRL2P26[1];   /**< Offset: 0x7C0 (R/W  32) The GPIO PIN_CTRL2 Registers */
} gpio_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_GPIO_COMPONENT_H_ */
