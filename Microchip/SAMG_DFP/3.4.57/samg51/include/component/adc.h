/**
 * \brief Component description for ADC
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

/* file generated from device description version 2019-12-20T15:06:01Z */
#ifndef _SAMG51_ADC_COMPONENT_H_
#define _SAMG51_ADC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR ADC                                          */
/* ************************************************************************** */

/* -------- ADC_CR : (ADC Offset: 0x00) ( /W 32) Control Register -------- */
#define ADC_CR_SWRST_Pos                      _U_(0)                                               /**< (ADC_CR) Software Reset Position */
#define ADC_CR_SWRST_Msk                      (_U_(0x1) << ADC_CR_SWRST_Pos)                       /**< (ADC_CR) Software Reset Mask */
#define ADC_CR_SWRST(value)                   (ADC_CR_SWRST_Msk & ((value) << ADC_CR_SWRST_Pos))  
#define ADC_CR_START_Pos                      _U_(1)                                               /**< (ADC_CR) Start Conversion Position */
#define ADC_CR_START_Msk                      (_U_(0x1) << ADC_CR_START_Pos)                       /**< (ADC_CR) Start Conversion Mask */
#define ADC_CR_START(value)                   (ADC_CR_START_Msk & ((value) << ADC_CR_START_Pos))  
#define ADC_CR_AUTOCAL_Pos                    _U_(3)                                               /**< (ADC_CR) Automatic Calibration of ADC Position */
#define ADC_CR_AUTOCAL_Msk                    (_U_(0x1) << ADC_CR_AUTOCAL_Pos)                     /**< (ADC_CR) Automatic Calibration of ADC Mask */
#define ADC_CR_AUTOCAL(value)                 (ADC_CR_AUTOCAL_Msk & ((value) << ADC_CR_AUTOCAL_Pos))
#define ADC_CR_Msk                            _U_(0x0000000B)                                      /**< (ADC_CR) Register Mask  */


/* -------- ADC_MR : (ADC Offset: 0x04) (R/W 32) Mode Register -------- */
#define ADC_MR_TRGEN_Pos                      _U_(0)                                               /**< (ADC_MR) Trigger Enable Position */
#define ADC_MR_TRGEN_Msk                      (_U_(0x1) << ADC_MR_TRGEN_Pos)                       /**< (ADC_MR) Trigger Enable Mask */
#define ADC_MR_TRGEN(value)                   (ADC_MR_TRGEN_Msk & ((value) << ADC_MR_TRGEN_Pos))  
#define   ADC_MR_TRGEN_DIS_Val                _U_(0x0)                                             /**< (ADC_MR) Hardware triggers are disabled. Starting a conversion is only possible by software.  */
#define   ADC_MR_TRGEN_EN_Val                 _U_(0x1)                                             /**< (ADC_MR) Hardware trigger selected by TRGSEL field is enabled.  */
#define ADC_MR_TRGEN_DIS                      (ADC_MR_TRGEN_DIS_Val << ADC_MR_TRGEN_Pos)           /**< (ADC_MR) Hardware triggers are disabled. Starting a conversion is only possible by software. Position  */
#define ADC_MR_TRGEN_EN                       (ADC_MR_TRGEN_EN_Val << ADC_MR_TRGEN_Pos)            /**< (ADC_MR) Hardware trigger selected by TRGSEL field is enabled. Position  */
#define ADC_MR_TRGSEL_Pos                     _U_(1)                                               /**< (ADC_MR) Trigger Selection Position */
#define ADC_MR_TRGSEL_Msk                     (_U_(0x7) << ADC_MR_TRGSEL_Pos)                      /**< (ADC_MR) Trigger Selection Mask */
#define ADC_MR_TRGSEL(value)                  (ADC_MR_TRGSEL_Msk & ((value) << ADC_MR_TRGSEL_Pos))
#define   ADC_MR_TRGSEL_ADC_TRIG0_Val         _U_(0x0)                                             /**< (ADC_MR) External trigger  */
#define   ADC_MR_TRGSEL_ADC_TRIG1_Val         _U_(0x1)                                             /**< (ADC_MR) TIO Output of the Timer Counter Channel 0  */
#define   ADC_MR_TRGSEL_ADC_TRIG2_Val         _U_(0x2)                                             /**< (ADC_MR) TIO Output of the Timer Counter Channel 1  */
#define   ADC_MR_TRGSEL_ADC_TRIG3_Val         _U_(0x3)                                             /**< (ADC_MR) TIO Output of the Timer Counter Channel 2  */
#define   ADC_MR_TRGSEL_ADC_TRIG4_Val         _U_(0x4)                                             /**< (ADC_MR) RTCOUT0  */
#define   ADC_MR_TRGSEL_ADC_TRIG5_Val         _U_(0x5)                                             /**< (ADC_MR) RTTINC  */
#define ADC_MR_TRGSEL_ADC_TRIG0               (ADC_MR_TRGSEL_ADC_TRIG0_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) External trigger Position  */
#define ADC_MR_TRGSEL_ADC_TRIG1               (ADC_MR_TRGSEL_ADC_TRIG1_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) TIO Output of the Timer Counter Channel 0 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG2               (ADC_MR_TRGSEL_ADC_TRIG2_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) TIO Output of the Timer Counter Channel 1 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG3               (ADC_MR_TRGSEL_ADC_TRIG3_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) TIO Output of the Timer Counter Channel 2 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG4               (ADC_MR_TRGSEL_ADC_TRIG4_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) RTCOUT0 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG5               (ADC_MR_TRGSEL_ADC_TRIG5_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) RTTINC Position  */
#define ADC_MR_LOWRES_Pos                     _U_(4)                                               /**< (ADC_MR) Resolution Position */
#define ADC_MR_LOWRES_Msk                     (_U_(0x1) << ADC_MR_LOWRES_Pos)                      /**< (ADC_MR) Resolution Mask */
#define ADC_MR_LOWRES(value)                  (ADC_MR_LOWRES_Msk & ((value) << ADC_MR_LOWRES_Pos))
#define   ADC_MR_LOWRES_BITS_10_Val           _U_(0x0)                                             /**< (ADC_MR) 10-bit resolution. For higher resolution by averaging, please refer to "ADC Extended Mode Register" on page 77.  */
#define   ADC_MR_LOWRES_BITS_8_Val            _U_(0x1)                                             /**< (ADC_MR) 8-bit resolution  */
#define ADC_MR_LOWRES_BITS_10                 (ADC_MR_LOWRES_BITS_10_Val << ADC_MR_LOWRES_Pos)     /**< (ADC_MR) 10-bit resolution. For higher resolution by averaging, please refer to "ADC Extended Mode Register" on page 77. Position  */
#define ADC_MR_LOWRES_BITS_8                  (ADC_MR_LOWRES_BITS_8_Val << ADC_MR_LOWRES_Pos)      /**< (ADC_MR) 8-bit resolution Position  */
#define ADC_MR_SLEEP_Pos                      _U_(5)                                               /**< (ADC_MR) Sleep Mode Position */
#define ADC_MR_SLEEP_Msk                      (_U_(0x1) << ADC_MR_SLEEP_Pos)                       /**< (ADC_MR) Sleep Mode Mask */
#define ADC_MR_SLEEP(value)                   (ADC_MR_SLEEP_Msk & ((value) << ADC_MR_SLEEP_Pos))  
#define   ADC_MR_SLEEP_NORMAL_Val             _U_(0x0)                                             /**< (ADC_MR) Normal Mode: The ADC core and reference voltage circuitry are kept ON between conversions.  */
#define   ADC_MR_SLEEP_SLEEP_Val              _U_(0x1)                                             /**< (ADC_MR) Sleep Mode: The ADC core and reference voltage circuitry are OFF between conversions.  */
#define ADC_MR_SLEEP_NORMAL                   (ADC_MR_SLEEP_NORMAL_Val << ADC_MR_SLEEP_Pos)        /**< (ADC_MR) Normal Mode: The ADC core and reference voltage circuitry are kept ON between conversions. Position  */
#define ADC_MR_SLEEP_SLEEP                    (ADC_MR_SLEEP_SLEEP_Val << ADC_MR_SLEEP_Pos)         /**< (ADC_MR) Sleep Mode: The ADC core and reference voltage circuitry are OFF between conversions. Position  */
#define ADC_MR_FREERUN_Pos                    _U_(7)                                               /**< (ADC_MR) Free Run Mode Position */
#define ADC_MR_FREERUN_Msk                    (_U_(0x1) << ADC_MR_FREERUN_Pos)                     /**< (ADC_MR) Free Run Mode Mask */
#define ADC_MR_FREERUN(value)                 (ADC_MR_FREERUN_Msk & ((value) << ADC_MR_FREERUN_Pos))
#define   ADC_MR_FREERUN_OFF_Val              _U_(0x0)                                             /**< (ADC_MR) Normal Mode  */
#define   ADC_MR_FREERUN_ON_Val               _U_(0x1)                                             /**< (ADC_MR) Free Run Mode: Never wait for any trigger.  */
#define ADC_MR_FREERUN_OFF                    (ADC_MR_FREERUN_OFF_Val << ADC_MR_FREERUN_Pos)       /**< (ADC_MR) Normal Mode Position  */
#define ADC_MR_FREERUN_ON                     (ADC_MR_FREERUN_ON_Val << ADC_MR_FREERUN_Pos)        /**< (ADC_MR) Free Run Mode: Never wait for any trigger. Position  */
#define ADC_MR_PRESCAL_Pos                    _U_(8)                                               /**< (ADC_MR) Prescaler Rate Selection Position */
#define ADC_MR_PRESCAL_Msk                    (_U_(0xFF) << ADC_MR_PRESCAL_Pos)                    /**< (ADC_MR) Prescaler Rate Selection Mask */
#define ADC_MR_PRESCAL(value)                 (ADC_MR_PRESCAL_Msk & ((value) << ADC_MR_PRESCAL_Pos))
#define ADC_MR_STARTUP_Pos                    _U_(16)                                              /**< (ADC_MR) Start Up Time Position */
#define ADC_MR_STARTUP_Msk                    (_U_(0xF) << ADC_MR_STARTUP_Pos)                     /**< (ADC_MR) Start Up Time Mask */
#define ADC_MR_STARTUP(value)                 (ADC_MR_STARTUP_Msk & ((value) << ADC_MR_STARTUP_Pos))
#define   ADC_MR_STARTUP_SUT0_Val             _U_(0x0)                                             /**< (ADC_MR) 0 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT8_Val             _U_(0x1)                                             /**< (ADC_MR) 8 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT16_Val            _U_(0x2)                                             /**< (ADC_MR) 16 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT24_Val            _U_(0x3)                                             /**< (ADC_MR) 24 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT64_Val            _U_(0x4)                                             /**< (ADC_MR) 64 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT80_Val            _U_(0x5)                                             /**< (ADC_MR) 80 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT96_Val            _U_(0x6)                                             /**< (ADC_MR) 96 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT112_Val           _U_(0x7)                                             /**< (ADC_MR) 112 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT512_Val           _U_(0x8)                                             /**< (ADC_MR) 512 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT576_Val           _U_(0x9)                                             /**< (ADC_MR) 576 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT640_Val           _U_(0xA)                                             /**< (ADC_MR) 640 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT704_Val           _U_(0xB)                                             /**< (ADC_MR) 704 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT768_Val           _U_(0xC)                                             /**< (ADC_MR) 768 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT832_Val           _U_(0xD)                                             /**< (ADC_MR) 832 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT896_Val           _U_(0xE)                                             /**< (ADC_MR) 896 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT960_Val           _U_(0xF)                                             /**< (ADC_MR) 960 periods of ADCCLK  */
#define ADC_MR_STARTUP_SUT0                   (ADC_MR_STARTUP_SUT0_Val << ADC_MR_STARTUP_Pos)      /**< (ADC_MR) 0 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT8                   (ADC_MR_STARTUP_SUT8_Val << ADC_MR_STARTUP_Pos)      /**< (ADC_MR) 8 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT16                  (ADC_MR_STARTUP_SUT16_Val << ADC_MR_STARTUP_Pos)     /**< (ADC_MR) 16 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT24                  (ADC_MR_STARTUP_SUT24_Val << ADC_MR_STARTUP_Pos)     /**< (ADC_MR) 24 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT64                  (ADC_MR_STARTUP_SUT64_Val << ADC_MR_STARTUP_Pos)     /**< (ADC_MR) 64 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT80                  (ADC_MR_STARTUP_SUT80_Val << ADC_MR_STARTUP_Pos)     /**< (ADC_MR) 80 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT96                  (ADC_MR_STARTUP_SUT96_Val << ADC_MR_STARTUP_Pos)     /**< (ADC_MR) 96 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT112                 (ADC_MR_STARTUP_SUT112_Val << ADC_MR_STARTUP_Pos)    /**< (ADC_MR) 112 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT512                 (ADC_MR_STARTUP_SUT512_Val << ADC_MR_STARTUP_Pos)    /**< (ADC_MR) 512 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT576                 (ADC_MR_STARTUP_SUT576_Val << ADC_MR_STARTUP_Pos)    /**< (ADC_MR) 576 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT640                 (ADC_MR_STARTUP_SUT640_Val << ADC_MR_STARTUP_Pos)    /**< (ADC_MR) 640 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT704                 (ADC_MR_STARTUP_SUT704_Val << ADC_MR_STARTUP_Pos)    /**< (ADC_MR) 704 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT768                 (ADC_MR_STARTUP_SUT768_Val << ADC_MR_STARTUP_Pos)    /**< (ADC_MR) 768 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT832                 (ADC_MR_STARTUP_SUT832_Val << ADC_MR_STARTUP_Pos)    /**< (ADC_MR) 832 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT896                 (ADC_MR_STARTUP_SUT896_Val << ADC_MR_STARTUP_Pos)    /**< (ADC_MR) 896 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT960                 (ADC_MR_STARTUP_SUT960_Val << ADC_MR_STARTUP_Pos)    /**< (ADC_MR) 960 periods of ADCCLK Position  */
#define ADC_MR_DIV1_Pos                       _U_(22)                                              /**< (ADC_MR) ADC Clock Prescaler Division forced to 1 Position */
#define ADC_MR_DIV1_Msk                       (_U_(0x1) << ADC_MR_DIV1_Pos)                        /**< (ADC_MR) ADC Clock Prescaler Division forced to 1 Mask */
#define ADC_MR_DIV1(value)                    (ADC_MR_DIV1_Msk & ((value) << ADC_MR_DIV1_Pos))    
#define   ADC_MR_DIV1_NO_DIV1_Val             _U_(0x0)                                             /**< (ADC_MR) The PRESCAL field is used to generate the ADC clock unless DIV3 is written to 1.  */
#define   ADC_MR_DIV1_FORCE_DIV1_Val          _U_(0x1)                                             /**< (ADC_MR) The ADC clock equals peripheral clock (PRESCAL and DIV3 fields have no effect).  */
#define ADC_MR_DIV1_NO_DIV1                   (ADC_MR_DIV1_NO_DIV1_Val << ADC_MR_DIV1_Pos)         /**< (ADC_MR) The PRESCAL field is used to generate the ADC clock unless DIV3 is written to 1. Position  */
#define ADC_MR_DIV1_FORCE_DIV1                (ADC_MR_DIV1_FORCE_DIV1_Val << ADC_MR_DIV1_Pos)      /**< (ADC_MR) The ADC clock equals peripheral clock (PRESCAL and DIV3 fields have no effect). Position  */
#define ADC_MR_TRACKTIM_Pos                   _U_(24)                                              /**< (ADC_MR) Tracking Time Position */
#define ADC_MR_TRACKTIM_Msk                   (_U_(0xF) << ADC_MR_TRACKTIM_Pos)                    /**< (ADC_MR) Tracking Time Mask */
#define ADC_MR_TRACKTIM(value)                (ADC_MR_TRACKTIM_Msk & ((value) << ADC_MR_TRACKTIM_Pos))
#define ADC_MR_TRANSFER_Pos                   _U_(28)                                              /**< (ADC_MR) Transfer Period Position */
#define ADC_MR_TRANSFER_Msk                   (_U_(0x3) << ADC_MR_TRANSFER_Pos)                    /**< (ADC_MR) Transfer Period Mask */
#define ADC_MR_TRANSFER(value)                (ADC_MR_TRANSFER_Msk & ((value) << ADC_MR_TRANSFER_Pos))
#define ADC_MR_DIV3_Pos                       _U_(30)                                              /**< (ADC_MR) ADC Clock Prescaler Division forced to 3 Position */
#define ADC_MR_DIV3_Msk                       (_U_(0x1) << ADC_MR_DIV3_Pos)                        /**< (ADC_MR) ADC Clock Prescaler Division forced to 3 Mask */
#define ADC_MR_DIV3(value)                    (ADC_MR_DIV3_Msk & ((value) << ADC_MR_DIV3_Pos))    
#define   ADC_MR_DIV3_NO_DIV3_Val             _U_(0x0)                                             /**< (ADC_MR) The PRESCAL field is used to generate the ADC clock unless DIV1 is written to 1.  */
#define   ADC_MR_DIV3_FORCE_DIV3_Val          _U_(0x1)                                             /**< (ADC_MR) The ADC clock equals peripheral clock/3 unless DIV1 is written to 1.  */
#define ADC_MR_DIV3_NO_DIV3                   (ADC_MR_DIV3_NO_DIV3_Val << ADC_MR_DIV3_Pos)         /**< (ADC_MR) The PRESCAL field is used to generate the ADC clock unless DIV1 is written to 1. Position  */
#define ADC_MR_DIV3_FORCE_DIV3                (ADC_MR_DIV3_FORCE_DIV3_Val << ADC_MR_DIV3_Pos)      /**< (ADC_MR) The ADC clock equals peripheral clock/3 unless DIV1 is written to 1. Position  */
#define ADC_MR_USEQ_Pos                       _U_(31)                                              /**< (ADC_MR) Use Sequence Enable Position */
#define ADC_MR_USEQ_Msk                       (_U_(0x1) << ADC_MR_USEQ_Pos)                        /**< (ADC_MR) Use Sequence Enable Mask */
#define ADC_MR_USEQ(value)                    (ADC_MR_USEQ_Msk & ((value) << ADC_MR_USEQ_Pos))    
#define   ADC_MR_USEQ_NUM_ORDER_Val           _U_(0x0)                                             /**< (ADC_MR) Normal Mode: The controller converts channels in a simple numeric order depending only on the channel index.  */
#define   ADC_MR_USEQ_REG_ORDER_Val           _U_(0x1)                                             /**< (ADC_MR) User Sequence Mode: The sequence respects what is defined in ADC_SEQR1 register and can be used to convert the same channel several times.  */
#define ADC_MR_USEQ_NUM_ORDER                 (ADC_MR_USEQ_NUM_ORDER_Val << ADC_MR_USEQ_Pos)       /**< (ADC_MR) Normal Mode: The controller converts channels in a simple numeric order depending only on the channel index. Position  */
#define ADC_MR_USEQ_REG_ORDER                 (ADC_MR_USEQ_REG_ORDER_Val << ADC_MR_USEQ_Pos)       /**< (ADC_MR) User Sequence Mode: The sequence respects what is defined in ADC_SEQR1 register and can be used to convert the same channel several times. Position  */
#define ADC_MR_Msk                            _U_(0xFF4FFFBF)                                      /**< (ADC_MR) Register Mask  */


/* -------- ADC_SEQR1 : (ADC Offset: 0x08) (R/W 32) Channel Sequence Register 1 -------- */
#define ADC_SEQR1_USCH1_Pos                   _U_(0)                                               /**< (ADC_SEQR1) User Sequence Number 1 Position */
#define ADC_SEQR1_USCH1_Msk                   (_U_(0xF) << ADC_SEQR1_USCH1_Pos)                    /**< (ADC_SEQR1) User Sequence Number 1 Mask */
#define ADC_SEQR1_USCH1(value)                (ADC_SEQR1_USCH1_Msk & ((value) << ADC_SEQR1_USCH1_Pos))
#define ADC_SEQR1_USCH2_Pos                   _U_(4)                                               /**< (ADC_SEQR1) User Sequence Number 2 Position */
#define ADC_SEQR1_USCH2_Msk                   (_U_(0xF) << ADC_SEQR1_USCH2_Pos)                    /**< (ADC_SEQR1) User Sequence Number 2 Mask */
#define ADC_SEQR1_USCH2(value)                (ADC_SEQR1_USCH2_Msk & ((value) << ADC_SEQR1_USCH2_Pos))
#define ADC_SEQR1_USCH3_Pos                   _U_(8)                                               /**< (ADC_SEQR1) User Sequence Number 3 Position */
#define ADC_SEQR1_USCH3_Msk                   (_U_(0xF) << ADC_SEQR1_USCH3_Pos)                    /**< (ADC_SEQR1) User Sequence Number 3 Mask */
#define ADC_SEQR1_USCH3(value)                (ADC_SEQR1_USCH3_Msk & ((value) << ADC_SEQR1_USCH3_Pos))
#define ADC_SEQR1_USCH4_Pos                   _U_(12)                                              /**< (ADC_SEQR1) User Sequence Number 4 Position */
#define ADC_SEQR1_USCH4_Msk                   (_U_(0xF) << ADC_SEQR1_USCH4_Pos)                    /**< (ADC_SEQR1) User Sequence Number 4 Mask */
#define ADC_SEQR1_USCH4(value)                (ADC_SEQR1_USCH4_Msk & ((value) << ADC_SEQR1_USCH4_Pos))
#define ADC_SEQR1_USCH5_Pos                   _U_(16)                                              /**< (ADC_SEQR1) User Sequence Number 5 Position */
#define ADC_SEQR1_USCH5_Msk                   (_U_(0xF) << ADC_SEQR1_USCH5_Pos)                    /**< (ADC_SEQR1) User Sequence Number 5 Mask */
#define ADC_SEQR1_USCH5(value)                (ADC_SEQR1_USCH5_Msk & ((value) << ADC_SEQR1_USCH5_Pos))
#define ADC_SEQR1_USCH6_Pos                   _U_(20)                                              /**< (ADC_SEQR1) User Sequence Number 6 Position */
#define ADC_SEQR1_USCH6_Msk                   (_U_(0xF) << ADC_SEQR1_USCH6_Pos)                    /**< (ADC_SEQR1) User Sequence Number 6 Mask */
#define ADC_SEQR1_USCH6(value)                (ADC_SEQR1_USCH6_Msk & ((value) << ADC_SEQR1_USCH6_Pos))
#define ADC_SEQR1_USCH7_Pos                   _U_(24)                                              /**< (ADC_SEQR1) User Sequence Number 7 Position */
#define ADC_SEQR1_USCH7_Msk                   (_U_(0xF) << ADC_SEQR1_USCH7_Pos)                    /**< (ADC_SEQR1) User Sequence Number 7 Mask */
#define ADC_SEQR1_USCH7(value)                (ADC_SEQR1_USCH7_Msk & ((value) << ADC_SEQR1_USCH7_Pos))
#define ADC_SEQR1_Msk                         _U_(0x0FFFFFFF)                                      /**< (ADC_SEQR1) Register Mask  */


/* -------- ADC_CHER : (ADC Offset: 0x10) ( /W 32) Channel Enable Register -------- */
#define ADC_CHER_CH0_Pos                      _U_(0)                                               /**< (ADC_CHER) Channel 0 Enable Position */
#define ADC_CHER_CH0_Msk                      (_U_(0x1) << ADC_CHER_CH0_Pos)                       /**< (ADC_CHER) Channel 0 Enable Mask */
#define ADC_CHER_CH0(value)                   (ADC_CHER_CH0_Msk & ((value) << ADC_CHER_CH0_Pos))  
#define ADC_CHER_CH1_Pos                      _U_(1)                                               /**< (ADC_CHER) Channel 1 Enable Position */
#define ADC_CHER_CH1_Msk                      (_U_(0x1) << ADC_CHER_CH1_Pos)                       /**< (ADC_CHER) Channel 1 Enable Mask */
#define ADC_CHER_CH1(value)                   (ADC_CHER_CH1_Msk & ((value) << ADC_CHER_CH1_Pos))  
#define ADC_CHER_CH2_Pos                      _U_(2)                                               /**< (ADC_CHER) Channel 2 Enable Position */
#define ADC_CHER_CH2_Msk                      (_U_(0x1) << ADC_CHER_CH2_Pos)                       /**< (ADC_CHER) Channel 2 Enable Mask */
#define ADC_CHER_CH2(value)                   (ADC_CHER_CH2_Msk & ((value) << ADC_CHER_CH2_Pos))  
#define ADC_CHER_CH3_Pos                      _U_(3)                                               /**< (ADC_CHER) Channel 3 Enable Position */
#define ADC_CHER_CH3_Msk                      (_U_(0x1) << ADC_CHER_CH3_Pos)                       /**< (ADC_CHER) Channel 3 Enable Mask */
#define ADC_CHER_CH3(value)                   (ADC_CHER_CH3_Msk & ((value) << ADC_CHER_CH3_Pos))  
#define ADC_CHER_CH4_Pos                      _U_(4)                                               /**< (ADC_CHER) Channel 4 Enable Position */
#define ADC_CHER_CH4_Msk                      (_U_(0x1) << ADC_CHER_CH4_Pos)                       /**< (ADC_CHER) Channel 4 Enable Mask */
#define ADC_CHER_CH4(value)                   (ADC_CHER_CH4_Msk & ((value) << ADC_CHER_CH4_Pos))  
#define ADC_CHER_CH5_Pos                      _U_(5)                                               /**< (ADC_CHER) Channel 5 Enable Position */
#define ADC_CHER_CH5_Msk                      (_U_(0x1) << ADC_CHER_CH5_Pos)                       /**< (ADC_CHER) Channel 5 Enable Mask */
#define ADC_CHER_CH5(value)                   (ADC_CHER_CH5_Msk & ((value) << ADC_CHER_CH5_Pos))  
#define ADC_CHER_CH6_Pos                      _U_(6)                                               /**< (ADC_CHER) Channel 6 Enable Position */
#define ADC_CHER_CH6_Msk                      (_U_(0x1) << ADC_CHER_CH6_Pos)                       /**< (ADC_CHER) Channel 6 Enable Mask */
#define ADC_CHER_CH6(value)                   (ADC_CHER_CH6_Msk & ((value) << ADC_CHER_CH6_Pos))  
#define ADC_CHER_CH7_Pos                      _U_(7)                                               /**< (ADC_CHER) Channel 7 Enable Position */
#define ADC_CHER_CH7_Msk                      (_U_(0x1) << ADC_CHER_CH7_Pos)                       /**< (ADC_CHER) Channel 7 Enable Mask */
#define ADC_CHER_CH7(value)                   (ADC_CHER_CH7_Msk & ((value) << ADC_CHER_CH7_Pos))  
#define ADC_CHER_Msk                          _U_(0x000000FF)                                      /**< (ADC_CHER) Register Mask  */

#define ADC_CHER_CH_Pos                       _U_(0)                                               /**< (ADC_CHER Position) Channel 7 Enable */
#define ADC_CHER_CH_Msk                       (_U_(0xFF) << ADC_CHER_CH_Pos)                       /**< (ADC_CHER Mask) CH */
#define ADC_CHER_CH(value)                    (ADC_CHER_CH_Msk & ((value) << ADC_CHER_CH_Pos))     

/* -------- ADC_CHDR : (ADC Offset: 0x14) ( /W 32) Channel Disable Register -------- */
#define ADC_CHDR_CH0_Pos                      _U_(0)                                               /**< (ADC_CHDR) Channel 0 Disable Position */
#define ADC_CHDR_CH0_Msk                      (_U_(0x1) << ADC_CHDR_CH0_Pos)                       /**< (ADC_CHDR) Channel 0 Disable Mask */
#define ADC_CHDR_CH0(value)                   (ADC_CHDR_CH0_Msk & ((value) << ADC_CHDR_CH0_Pos))  
#define ADC_CHDR_CH1_Pos                      _U_(1)                                               /**< (ADC_CHDR) Channel 1 Disable Position */
#define ADC_CHDR_CH1_Msk                      (_U_(0x1) << ADC_CHDR_CH1_Pos)                       /**< (ADC_CHDR) Channel 1 Disable Mask */
#define ADC_CHDR_CH1(value)                   (ADC_CHDR_CH1_Msk & ((value) << ADC_CHDR_CH1_Pos))  
#define ADC_CHDR_CH2_Pos                      _U_(2)                                               /**< (ADC_CHDR) Channel 2 Disable Position */
#define ADC_CHDR_CH2_Msk                      (_U_(0x1) << ADC_CHDR_CH2_Pos)                       /**< (ADC_CHDR) Channel 2 Disable Mask */
#define ADC_CHDR_CH2(value)                   (ADC_CHDR_CH2_Msk & ((value) << ADC_CHDR_CH2_Pos))  
#define ADC_CHDR_CH3_Pos                      _U_(3)                                               /**< (ADC_CHDR) Channel 3 Disable Position */
#define ADC_CHDR_CH3_Msk                      (_U_(0x1) << ADC_CHDR_CH3_Pos)                       /**< (ADC_CHDR) Channel 3 Disable Mask */
#define ADC_CHDR_CH3(value)                   (ADC_CHDR_CH3_Msk & ((value) << ADC_CHDR_CH3_Pos))  
#define ADC_CHDR_CH4_Pos                      _U_(4)                                               /**< (ADC_CHDR) Channel 4 Disable Position */
#define ADC_CHDR_CH4_Msk                      (_U_(0x1) << ADC_CHDR_CH4_Pos)                       /**< (ADC_CHDR) Channel 4 Disable Mask */
#define ADC_CHDR_CH4(value)                   (ADC_CHDR_CH4_Msk & ((value) << ADC_CHDR_CH4_Pos))  
#define ADC_CHDR_CH5_Pos                      _U_(5)                                               /**< (ADC_CHDR) Channel 5 Disable Position */
#define ADC_CHDR_CH5_Msk                      (_U_(0x1) << ADC_CHDR_CH5_Pos)                       /**< (ADC_CHDR) Channel 5 Disable Mask */
#define ADC_CHDR_CH5(value)                   (ADC_CHDR_CH5_Msk & ((value) << ADC_CHDR_CH5_Pos))  
#define ADC_CHDR_CH6_Pos                      _U_(6)                                               /**< (ADC_CHDR) Channel 6 Disable Position */
#define ADC_CHDR_CH6_Msk                      (_U_(0x1) << ADC_CHDR_CH6_Pos)                       /**< (ADC_CHDR) Channel 6 Disable Mask */
#define ADC_CHDR_CH6(value)                   (ADC_CHDR_CH6_Msk & ((value) << ADC_CHDR_CH6_Pos))  
#define ADC_CHDR_CH7_Pos                      _U_(7)                                               /**< (ADC_CHDR) Channel 7 Disable Position */
#define ADC_CHDR_CH7_Msk                      (_U_(0x1) << ADC_CHDR_CH7_Pos)                       /**< (ADC_CHDR) Channel 7 Disable Mask */
#define ADC_CHDR_CH7(value)                   (ADC_CHDR_CH7_Msk & ((value) << ADC_CHDR_CH7_Pos))  
#define ADC_CHDR_Msk                          _U_(0x000000FF)                                      /**< (ADC_CHDR) Register Mask  */

#define ADC_CHDR_CH_Pos                       _U_(0)                                               /**< (ADC_CHDR Position) Channel 7 Disable */
#define ADC_CHDR_CH_Msk                       (_U_(0xFF) << ADC_CHDR_CH_Pos)                       /**< (ADC_CHDR Mask) CH */
#define ADC_CHDR_CH(value)                    (ADC_CHDR_CH_Msk & ((value) << ADC_CHDR_CH_Pos))     

/* -------- ADC_CHSR : (ADC Offset: 0x18) ( R/ 32) Channel Status Register -------- */
#define ADC_CHSR_CH0_Pos                      _U_(0)                                               /**< (ADC_CHSR) Channel 0 Status Position */
#define ADC_CHSR_CH0_Msk                      (_U_(0x1) << ADC_CHSR_CH0_Pos)                       /**< (ADC_CHSR) Channel 0 Status Mask */
#define ADC_CHSR_CH0(value)                   (ADC_CHSR_CH0_Msk & ((value) << ADC_CHSR_CH0_Pos))  
#define ADC_CHSR_CH1_Pos                      _U_(1)                                               /**< (ADC_CHSR) Channel 1 Status Position */
#define ADC_CHSR_CH1_Msk                      (_U_(0x1) << ADC_CHSR_CH1_Pos)                       /**< (ADC_CHSR) Channel 1 Status Mask */
#define ADC_CHSR_CH1(value)                   (ADC_CHSR_CH1_Msk & ((value) << ADC_CHSR_CH1_Pos))  
#define ADC_CHSR_CH2_Pos                      _U_(2)                                               /**< (ADC_CHSR) Channel 2 Status Position */
#define ADC_CHSR_CH2_Msk                      (_U_(0x1) << ADC_CHSR_CH2_Pos)                       /**< (ADC_CHSR) Channel 2 Status Mask */
#define ADC_CHSR_CH2(value)                   (ADC_CHSR_CH2_Msk & ((value) << ADC_CHSR_CH2_Pos))  
#define ADC_CHSR_CH3_Pos                      _U_(3)                                               /**< (ADC_CHSR) Channel 3 Status Position */
#define ADC_CHSR_CH3_Msk                      (_U_(0x1) << ADC_CHSR_CH3_Pos)                       /**< (ADC_CHSR) Channel 3 Status Mask */
#define ADC_CHSR_CH3(value)                   (ADC_CHSR_CH3_Msk & ((value) << ADC_CHSR_CH3_Pos))  
#define ADC_CHSR_CH4_Pos                      _U_(4)                                               /**< (ADC_CHSR) Channel 4 Status Position */
#define ADC_CHSR_CH4_Msk                      (_U_(0x1) << ADC_CHSR_CH4_Pos)                       /**< (ADC_CHSR) Channel 4 Status Mask */
#define ADC_CHSR_CH4(value)                   (ADC_CHSR_CH4_Msk & ((value) << ADC_CHSR_CH4_Pos))  
#define ADC_CHSR_CH5_Pos                      _U_(5)                                               /**< (ADC_CHSR) Channel 5 Status Position */
#define ADC_CHSR_CH5_Msk                      (_U_(0x1) << ADC_CHSR_CH5_Pos)                       /**< (ADC_CHSR) Channel 5 Status Mask */
#define ADC_CHSR_CH5(value)                   (ADC_CHSR_CH5_Msk & ((value) << ADC_CHSR_CH5_Pos))  
#define ADC_CHSR_CH6_Pos                      _U_(6)                                               /**< (ADC_CHSR) Channel 6 Status Position */
#define ADC_CHSR_CH6_Msk                      (_U_(0x1) << ADC_CHSR_CH6_Pos)                       /**< (ADC_CHSR) Channel 6 Status Mask */
#define ADC_CHSR_CH6(value)                   (ADC_CHSR_CH6_Msk & ((value) << ADC_CHSR_CH6_Pos))  
#define ADC_CHSR_CH7_Pos                      _U_(7)                                               /**< (ADC_CHSR) Channel 7 Status Position */
#define ADC_CHSR_CH7_Msk                      (_U_(0x1) << ADC_CHSR_CH7_Pos)                       /**< (ADC_CHSR) Channel 7 Status Mask */
#define ADC_CHSR_CH7(value)                   (ADC_CHSR_CH7_Msk & ((value) << ADC_CHSR_CH7_Pos))  
#define ADC_CHSR_Msk                          _U_(0x000000FF)                                      /**< (ADC_CHSR) Register Mask  */

#define ADC_CHSR_CH_Pos                       _U_(0)                                               /**< (ADC_CHSR Position) Channel 7 Status */
#define ADC_CHSR_CH_Msk                       (_U_(0xFF) << ADC_CHSR_CH_Pos)                       /**< (ADC_CHSR Mask) CH */
#define ADC_CHSR_CH(value)                    (ADC_CHSR_CH_Msk & ((value) << ADC_CHSR_CH_Pos))     

/* -------- ADC_LCDR : (ADC Offset: 0x20) ( R/ 32) Last Converted Data Register -------- */
#define ADC_LCDR_LDATA_Pos                    _U_(0)                                               /**< (ADC_LCDR) Last Data Converted Position */
#define ADC_LCDR_LDATA_Msk                    (_U_(0xFFF) << ADC_LCDR_LDATA_Pos)                   /**< (ADC_LCDR) Last Data Converted Mask */
#define ADC_LCDR_LDATA(value)                 (ADC_LCDR_LDATA_Msk & ((value) << ADC_LCDR_LDATA_Pos))
#define ADC_LCDR_CHNB_Pos                     _U_(12)                                              /**< (ADC_LCDR) Channel Number Position */
#define ADC_LCDR_CHNB_Msk                     (_U_(0xF) << ADC_LCDR_CHNB_Pos)                      /**< (ADC_LCDR) Channel Number Mask */
#define ADC_LCDR_CHNB(value)                  (ADC_LCDR_CHNB_Msk & ((value) << ADC_LCDR_CHNB_Pos))
#define ADC_LCDR_Msk                          _U_(0x0000FFFF)                                      /**< (ADC_LCDR) Register Mask  */


/* -------- ADC_IER : (ADC Offset: 0x24) ( /W 32) Interrupt Enable Register -------- */
#define ADC_IER_EOC0_Pos                      _U_(0)                                               /**< (ADC_IER) End of Conversion Interrupt Enable 0 Position */
#define ADC_IER_EOC0_Msk                      (_U_(0x1) << ADC_IER_EOC0_Pos)                       /**< (ADC_IER) End of Conversion Interrupt Enable 0 Mask */
#define ADC_IER_EOC0(value)                   (ADC_IER_EOC0_Msk & ((value) << ADC_IER_EOC0_Pos))  
#define ADC_IER_EOC1_Pos                      _U_(1)                                               /**< (ADC_IER) End of Conversion Interrupt Enable 1 Position */
#define ADC_IER_EOC1_Msk                      (_U_(0x1) << ADC_IER_EOC1_Pos)                       /**< (ADC_IER) End of Conversion Interrupt Enable 1 Mask */
#define ADC_IER_EOC1(value)                   (ADC_IER_EOC1_Msk & ((value) << ADC_IER_EOC1_Pos))  
#define ADC_IER_EOC2_Pos                      _U_(2)                                               /**< (ADC_IER) End of Conversion Interrupt Enable 2 Position */
#define ADC_IER_EOC2_Msk                      (_U_(0x1) << ADC_IER_EOC2_Pos)                       /**< (ADC_IER) End of Conversion Interrupt Enable 2 Mask */
#define ADC_IER_EOC2(value)                   (ADC_IER_EOC2_Msk & ((value) << ADC_IER_EOC2_Pos))  
#define ADC_IER_EOC3_Pos                      _U_(3)                                               /**< (ADC_IER) End of Conversion Interrupt Enable 3 Position */
#define ADC_IER_EOC3_Msk                      (_U_(0x1) << ADC_IER_EOC3_Pos)                       /**< (ADC_IER) End of Conversion Interrupt Enable 3 Mask */
#define ADC_IER_EOC3(value)                   (ADC_IER_EOC3_Msk & ((value) << ADC_IER_EOC3_Pos))  
#define ADC_IER_EOC4_Pos                      _U_(4)                                               /**< (ADC_IER) End of Conversion Interrupt Enable 4 Position */
#define ADC_IER_EOC4_Msk                      (_U_(0x1) << ADC_IER_EOC4_Pos)                       /**< (ADC_IER) End of Conversion Interrupt Enable 4 Mask */
#define ADC_IER_EOC4(value)                   (ADC_IER_EOC4_Msk & ((value) << ADC_IER_EOC4_Pos))  
#define ADC_IER_EOC5_Pos                      _U_(5)                                               /**< (ADC_IER) End of Conversion Interrupt Enable 5 Position */
#define ADC_IER_EOC5_Msk                      (_U_(0x1) << ADC_IER_EOC5_Pos)                       /**< (ADC_IER) End of Conversion Interrupt Enable 5 Mask */
#define ADC_IER_EOC5(value)                   (ADC_IER_EOC5_Msk & ((value) << ADC_IER_EOC5_Pos))  
#define ADC_IER_EOC6_Pos                      _U_(6)                                               /**< (ADC_IER) End of Conversion Interrupt Enable 6 Position */
#define ADC_IER_EOC6_Msk                      (_U_(0x1) << ADC_IER_EOC6_Pos)                       /**< (ADC_IER) End of Conversion Interrupt Enable 6 Mask */
#define ADC_IER_EOC6(value)                   (ADC_IER_EOC6_Msk & ((value) << ADC_IER_EOC6_Pos))  
#define ADC_IER_EOC7_Pos                      _U_(7)                                               /**< (ADC_IER) End of Conversion Interrupt Enable 7 Position */
#define ADC_IER_EOC7_Msk                      (_U_(0x1) << ADC_IER_EOC7_Pos)                       /**< (ADC_IER) End of Conversion Interrupt Enable 7 Mask */
#define ADC_IER_EOC7(value)                   (ADC_IER_EOC7_Msk & ((value) << ADC_IER_EOC7_Pos))  
#define ADC_IER_LCCHG_Pos                     _U_(19)                                              /**< (ADC_IER) Last Channel Change Interrupt Enable Position */
#define ADC_IER_LCCHG_Msk                     (_U_(0x1) << ADC_IER_LCCHG_Pos)                      /**< (ADC_IER) Last Channel Change Interrupt Enable Mask */
#define ADC_IER_LCCHG(value)                  (ADC_IER_LCCHG_Msk & ((value) << ADC_IER_LCCHG_Pos))
#define ADC_IER_EOCAL_Pos                     _U_(23)                                              /**< (ADC_IER) End of Calibration Sequence Position */
#define ADC_IER_EOCAL_Msk                     (_U_(0x1) << ADC_IER_EOCAL_Pos)                      /**< (ADC_IER) End of Calibration Sequence Mask */
#define ADC_IER_EOCAL(value)                  (ADC_IER_EOCAL_Msk & ((value) << ADC_IER_EOCAL_Pos))
#define ADC_IER_DRDY_Pos                      _U_(24)                                              /**< (ADC_IER) Data Ready Interrupt Enable Position */
#define ADC_IER_DRDY_Msk                      (_U_(0x1) << ADC_IER_DRDY_Pos)                       /**< (ADC_IER) Data Ready Interrupt Enable Mask */
#define ADC_IER_DRDY(value)                   (ADC_IER_DRDY_Msk & ((value) << ADC_IER_DRDY_Pos))  
#define ADC_IER_GOVRE_Pos                     _U_(25)                                              /**< (ADC_IER) General Overrun Error Interrupt Enable Position */
#define ADC_IER_GOVRE_Msk                     (_U_(0x1) << ADC_IER_GOVRE_Pos)                      /**< (ADC_IER) General Overrun Error Interrupt Enable Mask */
#define ADC_IER_GOVRE(value)                  (ADC_IER_GOVRE_Msk & ((value) << ADC_IER_GOVRE_Pos))
#define ADC_IER_COMPE_Pos                     _U_(26)                                              /**< (ADC_IER) Comparison Event Interrupt Enable Position */
#define ADC_IER_COMPE_Msk                     (_U_(0x1) << ADC_IER_COMPE_Pos)                      /**< (ADC_IER) Comparison Event Interrupt Enable Mask */
#define ADC_IER_COMPE(value)                  (ADC_IER_COMPE_Msk & ((value) << ADC_IER_COMPE_Pos))
#define ADC_IER_ENDRX_Pos                     _U_(27)                                              /**< (ADC_IER) End of Receive Buffer Interrupt Enable Position */
#define ADC_IER_ENDRX_Msk                     (_U_(0x1) << ADC_IER_ENDRX_Pos)                      /**< (ADC_IER) End of Receive Buffer Interrupt Enable Mask */
#define ADC_IER_ENDRX(value)                  (ADC_IER_ENDRX_Msk & ((value) << ADC_IER_ENDRX_Pos))
#define ADC_IER_RXBUFF_Pos                    _U_(28)                                              /**< (ADC_IER) Receive Buffer Full Interrupt Enable Position */
#define ADC_IER_RXBUFF_Msk                    (_U_(0x1) << ADC_IER_RXBUFF_Pos)                     /**< (ADC_IER) Receive Buffer Full Interrupt Enable Mask */
#define ADC_IER_RXBUFF(value)                 (ADC_IER_RXBUFF_Msk & ((value) << ADC_IER_RXBUFF_Pos))
#define ADC_IER_Msk                           _U_(0x1F8800FF)                                      /**< (ADC_IER) Register Mask  */

#define ADC_IER_EOC_Pos                       _U_(0)                                               /**< (ADC_IER Position) End of Conversion Interrupt Enable x */
#define ADC_IER_EOC_Msk                       (_U_(0xFF) << ADC_IER_EOC_Pos)                       /**< (ADC_IER Mask) EOC */
#define ADC_IER_EOC(value)                    (ADC_IER_EOC_Msk & ((value) << ADC_IER_EOC_Pos))     

/* -------- ADC_IDR : (ADC Offset: 0x28) ( /W 32) Interrupt Disable Register -------- */
#define ADC_IDR_EOC0_Pos                      _U_(0)                                               /**< (ADC_IDR) End of Conversion Interrupt Disable 0 Position */
#define ADC_IDR_EOC0_Msk                      (_U_(0x1) << ADC_IDR_EOC0_Pos)                       /**< (ADC_IDR) End of Conversion Interrupt Disable 0 Mask */
#define ADC_IDR_EOC0(value)                   (ADC_IDR_EOC0_Msk & ((value) << ADC_IDR_EOC0_Pos))  
#define ADC_IDR_EOC1_Pos                      _U_(1)                                               /**< (ADC_IDR) End of Conversion Interrupt Disable 1 Position */
#define ADC_IDR_EOC1_Msk                      (_U_(0x1) << ADC_IDR_EOC1_Pos)                       /**< (ADC_IDR) End of Conversion Interrupt Disable 1 Mask */
#define ADC_IDR_EOC1(value)                   (ADC_IDR_EOC1_Msk & ((value) << ADC_IDR_EOC1_Pos))  
#define ADC_IDR_EOC2_Pos                      _U_(2)                                               /**< (ADC_IDR) End of Conversion Interrupt Disable 2 Position */
#define ADC_IDR_EOC2_Msk                      (_U_(0x1) << ADC_IDR_EOC2_Pos)                       /**< (ADC_IDR) End of Conversion Interrupt Disable 2 Mask */
#define ADC_IDR_EOC2(value)                   (ADC_IDR_EOC2_Msk & ((value) << ADC_IDR_EOC2_Pos))  
#define ADC_IDR_EOC3_Pos                      _U_(3)                                               /**< (ADC_IDR) End of Conversion Interrupt Disable 3 Position */
#define ADC_IDR_EOC3_Msk                      (_U_(0x1) << ADC_IDR_EOC3_Pos)                       /**< (ADC_IDR) End of Conversion Interrupt Disable 3 Mask */
#define ADC_IDR_EOC3(value)                   (ADC_IDR_EOC3_Msk & ((value) << ADC_IDR_EOC3_Pos))  
#define ADC_IDR_EOC4_Pos                      _U_(4)                                               /**< (ADC_IDR) End of Conversion Interrupt Disable 4 Position */
#define ADC_IDR_EOC4_Msk                      (_U_(0x1) << ADC_IDR_EOC4_Pos)                       /**< (ADC_IDR) End of Conversion Interrupt Disable 4 Mask */
#define ADC_IDR_EOC4(value)                   (ADC_IDR_EOC4_Msk & ((value) << ADC_IDR_EOC4_Pos))  
#define ADC_IDR_EOC5_Pos                      _U_(5)                                               /**< (ADC_IDR) End of Conversion Interrupt Disable 5 Position */
#define ADC_IDR_EOC5_Msk                      (_U_(0x1) << ADC_IDR_EOC5_Pos)                       /**< (ADC_IDR) End of Conversion Interrupt Disable 5 Mask */
#define ADC_IDR_EOC5(value)                   (ADC_IDR_EOC5_Msk & ((value) << ADC_IDR_EOC5_Pos))  
#define ADC_IDR_EOC6_Pos                      _U_(6)                                               /**< (ADC_IDR) End of Conversion Interrupt Disable 6 Position */
#define ADC_IDR_EOC6_Msk                      (_U_(0x1) << ADC_IDR_EOC6_Pos)                       /**< (ADC_IDR) End of Conversion Interrupt Disable 6 Mask */
#define ADC_IDR_EOC6(value)                   (ADC_IDR_EOC6_Msk & ((value) << ADC_IDR_EOC6_Pos))  
#define ADC_IDR_EOC7_Pos                      _U_(7)                                               /**< (ADC_IDR) End of Conversion Interrupt Disable 7 Position */
#define ADC_IDR_EOC7_Msk                      (_U_(0x1) << ADC_IDR_EOC7_Pos)                       /**< (ADC_IDR) End of Conversion Interrupt Disable 7 Mask */
#define ADC_IDR_EOC7(value)                   (ADC_IDR_EOC7_Msk & ((value) << ADC_IDR_EOC7_Pos))  
#define ADC_IDR_LCCHG_Pos                     _U_(19)                                              /**< (ADC_IDR) Last Channel Change Interrupt Disable Position */
#define ADC_IDR_LCCHG_Msk                     (_U_(0x1) << ADC_IDR_LCCHG_Pos)                      /**< (ADC_IDR) Last Channel Change Interrupt Disable Mask */
#define ADC_IDR_LCCHG(value)                  (ADC_IDR_LCCHG_Msk & ((value) << ADC_IDR_LCCHG_Pos))
#define ADC_IDR_EOCAL_Pos                     _U_(23)                                              /**< (ADC_IDR) End of Calibration Sequence Position */
#define ADC_IDR_EOCAL_Msk                     (_U_(0x1) << ADC_IDR_EOCAL_Pos)                      /**< (ADC_IDR) End of Calibration Sequence Mask */
#define ADC_IDR_EOCAL(value)                  (ADC_IDR_EOCAL_Msk & ((value) << ADC_IDR_EOCAL_Pos))
#define ADC_IDR_DRDY_Pos                      _U_(24)                                              /**< (ADC_IDR) Data Ready Interrupt Disable Position */
#define ADC_IDR_DRDY_Msk                      (_U_(0x1) << ADC_IDR_DRDY_Pos)                       /**< (ADC_IDR) Data Ready Interrupt Disable Mask */
#define ADC_IDR_DRDY(value)                   (ADC_IDR_DRDY_Msk & ((value) << ADC_IDR_DRDY_Pos))  
#define ADC_IDR_GOVRE_Pos                     _U_(25)                                              /**< (ADC_IDR) General Overrun Error Interrupt Disable Position */
#define ADC_IDR_GOVRE_Msk                     (_U_(0x1) << ADC_IDR_GOVRE_Pos)                      /**< (ADC_IDR) General Overrun Error Interrupt Disable Mask */
#define ADC_IDR_GOVRE(value)                  (ADC_IDR_GOVRE_Msk & ((value) << ADC_IDR_GOVRE_Pos))
#define ADC_IDR_COMPE_Pos                     _U_(26)                                              /**< (ADC_IDR) Comparison Event Interrupt Disable Position */
#define ADC_IDR_COMPE_Msk                     (_U_(0x1) << ADC_IDR_COMPE_Pos)                      /**< (ADC_IDR) Comparison Event Interrupt Disable Mask */
#define ADC_IDR_COMPE(value)                  (ADC_IDR_COMPE_Msk & ((value) << ADC_IDR_COMPE_Pos))
#define ADC_IDR_ENDRX_Pos                     _U_(27)                                              /**< (ADC_IDR) End of Receive Buffer Interrupt Disable Position */
#define ADC_IDR_ENDRX_Msk                     (_U_(0x1) << ADC_IDR_ENDRX_Pos)                      /**< (ADC_IDR) End of Receive Buffer Interrupt Disable Mask */
#define ADC_IDR_ENDRX(value)                  (ADC_IDR_ENDRX_Msk & ((value) << ADC_IDR_ENDRX_Pos))
#define ADC_IDR_RXBUFF_Pos                    _U_(28)                                              /**< (ADC_IDR) Receive Buffer Full Interrupt Disable Position */
#define ADC_IDR_RXBUFF_Msk                    (_U_(0x1) << ADC_IDR_RXBUFF_Pos)                     /**< (ADC_IDR) Receive Buffer Full Interrupt Disable Mask */
#define ADC_IDR_RXBUFF(value)                 (ADC_IDR_RXBUFF_Msk & ((value) << ADC_IDR_RXBUFF_Pos))
#define ADC_IDR_Msk                           _U_(0x1F8800FF)                                      /**< (ADC_IDR) Register Mask  */

#define ADC_IDR_EOC_Pos                       _U_(0)                                               /**< (ADC_IDR Position) End of Conversion Interrupt Disable x */
#define ADC_IDR_EOC_Msk                       (_U_(0xFF) << ADC_IDR_EOC_Pos)                       /**< (ADC_IDR Mask) EOC */
#define ADC_IDR_EOC(value)                    (ADC_IDR_EOC_Msk & ((value) << ADC_IDR_EOC_Pos))     

/* -------- ADC_IMR : (ADC Offset: 0x2C) ( R/ 32) Interrupt Mask Register -------- */
#define ADC_IMR_EOC0_Pos                      _U_(0)                                               /**< (ADC_IMR) End of Conversion Interrupt Mask 0 Position */
#define ADC_IMR_EOC0_Msk                      (_U_(0x1) << ADC_IMR_EOC0_Pos)                       /**< (ADC_IMR) End of Conversion Interrupt Mask 0 Mask */
#define ADC_IMR_EOC0(value)                   (ADC_IMR_EOC0_Msk & ((value) << ADC_IMR_EOC0_Pos))  
#define ADC_IMR_EOC1_Pos                      _U_(1)                                               /**< (ADC_IMR) End of Conversion Interrupt Mask 1 Position */
#define ADC_IMR_EOC1_Msk                      (_U_(0x1) << ADC_IMR_EOC1_Pos)                       /**< (ADC_IMR) End of Conversion Interrupt Mask 1 Mask */
#define ADC_IMR_EOC1(value)                   (ADC_IMR_EOC1_Msk & ((value) << ADC_IMR_EOC1_Pos))  
#define ADC_IMR_EOC2_Pos                      _U_(2)                                               /**< (ADC_IMR) End of Conversion Interrupt Mask 2 Position */
#define ADC_IMR_EOC2_Msk                      (_U_(0x1) << ADC_IMR_EOC2_Pos)                       /**< (ADC_IMR) End of Conversion Interrupt Mask 2 Mask */
#define ADC_IMR_EOC2(value)                   (ADC_IMR_EOC2_Msk & ((value) << ADC_IMR_EOC2_Pos))  
#define ADC_IMR_EOC3_Pos                      _U_(3)                                               /**< (ADC_IMR) End of Conversion Interrupt Mask 3 Position */
#define ADC_IMR_EOC3_Msk                      (_U_(0x1) << ADC_IMR_EOC3_Pos)                       /**< (ADC_IMR) End of Conversion Interrupt Mask 3 Mask */
#define ADC_IMR_EOC3(value)                   (ADC_IMR_EOC3_Msk & ((value) << ADC_IMR_EOC3_Pos))  
#define ADC_IMR_EOC4_Pos                      _U_(4)                                               /**< (ADC_IMR) End of Conversion Interrupt Mask 4 Position */
#define ADC_IMR_EOC4_Msk                      (_U_(0x1) << ADC_IMR_EOC4_Pos)                       /**< (ADC_IMR) End of Conversion Interrupt Mask 4 Mask */
#define ADC_IMR_EOC4(value)                   (ADC_IMR_EOC4_Msk & ((value) << ADC_IMR_EOC4_Pos))  
#define ADC_IMR_EOC5_Pos                      _U_(5)                                               /**< (ADC_IMR) End of Conversion Interrupt Mask 5 Position */
#define ADC_IMR_EOC5_Msk                      (_U_(0x1) << ADC_IMR_EOC5_Pos)                       /**< (ADC_IMR) End of Conversion Interrupt Mask 5 Mask */
#define ADC_IMR_EOC5(value)                   (ADC_IMR_EOC5_Msk & ((value) << ADC_IMR_EOC5_Pos))  
#define ADC_IMR_EOC6_Pos                      _U_(6)                                               /**< (ADC_IMR) End of Conversion Interrupt Mask 6 Position */
#define ADC_IMR_EOC6_Msk                      (_U_(0x1) << ADC_IMR_EOC6_Pos)                       /**< (ADC_IMR) End of Conversion Interrupt Mask 6 Mask */
#define ADC_IMR_EOC6(value)                   (ADC_IMR_EOC6_Msk & ((value) << ADC_IMR_EOC6_Pos))  
#define ADC_IMR_EOC7_Pos                      _U_(7)                                               /**< (ADC_IMR) End of Conversion Interrupt Mask 7 Position */
#define ADC_IMR_EOC7_Msk                      (_U_(0x1) << ADC_IMR_EOC7_Pos)                       /**< (ADC_IMR) End of Conversion Interrupt Mask 7 Mask */
#define ADC_IMR_EOC7(value)                   (ADC_IMR_EOC7_Msk & ((value) << ADC_IMR_EOC7_Pos))  
#define ADC_IMR_LCCHG_Pos                     _U_(19)                                              /**< (ADC_IMR) Last Channel Change Interrupt Mask Position */
#define ADC_IMR_LCCHG_Msk                     (_U_(0x1) << ADC_IMR_LCCHG_Pos)                      /**< (ADC_IMR) Last Channel Change Interrupt Mask Mask */
#define ADC_IMR_LCCHG(value)                  (ADC_IMR_LCCHG_Msk & ((value) << ADC_IMR_LCCHG_Pos))
#define ADC_IMR_EOCAL_Pos                     _U_(23)                                              /**< (ADC_IMR) End of Calibration Sequence Position */
#define ADC_IMR_EOCAL_Msk                     (_U_(0x1) << ADC_IMR_EOCAL_Pos)                      /**< (ADC_IMR) End of Calibration Sequence Mask */
#define ADC_IMR_EOCAL(value)                  (ADC_IMR_EOCAL_Msk & ((value) << ADC_IMR_EOCAL_Pos))
#define ADC_IMR_DRDY_Pos                      _U_(24)                                              /**< (ADC_IMR) Data Ready Interrupt Mask Position */
#define ADC_IMR_DRDY_Msk                      (_U_(0x1) << ADC_IMR_DRDY_Pos)                       /**< (ADC_IMR) Data Ready Interrupt Mask Mask */
#define ADC_IMR_DRDY(value)                   (ADC_IMR_DRDY_Msk & ((value) << ADC_IMR_DRDY_Pos))  
#define ADC_IMR_GOVRE_Pos                     _U_(25)                                              /**< (ADC_IMR) General Overrun Error Interrupt Mask Position */
#define ADC_IMR_GOVRE_Msk                     (_U_(0x1) << ADC_IMR_GOVRE_Pos)                      /**< (ADC_IMR) General Overrun Error Interrupt Mask Mask */
#define ADC_IMR_GOVRE(value)                  (ADC_IMR_GOVRE_Msk & ((value) << ADC_IMR_GOVRE_Pos))
#define ADC_IMR_COMPE_Pos                     _U_(26)                                              /**< (ADC_IMR) Comparison Event Interrupt Mask Position */
#define ADC_IMR_COMPE_Msk                     (_U_(0x1) << ADC_IMR_COMPE_Pos)                      /**< (ADC_IMR) Comparison Event Interrupt Mask Mask */
#define ADC_IMR_COMPE(value)                  (ADC_IMR_COMPE_Msk & ((value) << ADC_IMR_COMPE_Pos))
#define ADC_IMR_ENDRX_Pos                     _U_(27)                                              /**< (ADC_IMR) End of Receive Buffer Interrupt Mask Position */
#define ADC_IMR_ENDRX_Msk                     (_U_(0x1) << ADC_IMR_ENDRX_Pos)                      /**< (ADC_IMR) End of Receive Buffer Interrupt Mask Mask */
#define ADC_IMR_ENDRX(value)                  (ADC_IMR_ENDRX_Msk & ((value) << ADC_IMR_ENDRX_Pos))
#define ADC_IMR_RXBUFF_Pos                    _U_(28)                                              /**< (ADC_IMR) Receive Buffer Full Interrupt Mask Position */
#define ADC_IMR_RXBUFF_Msk                    (_U_(0x1) << ADC_IMR_RXBUFF_Pos)                     /**< (ADC_IMR) Receive Buffer Full Interrupt Mask Mask */
#define ADC_IMR_RXBUFF(value)                 (ADC_IMR_RXBUFF_Msk & ((value) << ADC_IMR_RXBUFF_Pos))
#define ADC_IMR_Msk                           _U_(0x1F8800FF)                                      /**< (ADC_IMR) Register Mask  */

#define ADC_IMR_EOC_Pos                       _U_(0)                                               /**< (ADC_IMR Position) End of Conversion Interrupt Mask x */
#define ADC_IMR_EOC_Msk                       (_U_(0xFF) << ADC_IMR_EOC_Pos)                       /**< (ADC_IMR Mask) EOC */
#define ADC_IMR_EOC(value)                    (ADC_IMR_EOC_Msk & ((value) << ADC_IMR_EOC_Pos))     

/* -------- ADC_ISR : (ADC Offset: 0x30) ( R/ 32) Interrupt Status Register -------- */
#define ADC_ISR_EOC0_Pos                      _U_(0)                                               /**< (ADC_ISR) End of Conversion 0 (automatically set / cleared) Position */
#define ADC_ISR_EOC0_Msk                      (_U_(0x1) << ADC_ISR_EOC0_Pos)                       /**< (ADC_ISR) End of Conversion 0 (automatically set / cleared) Mask */
#define ADC_ISR_EOC0(value)                   (ADC_ISR_EOC0_Msk & ((value) << ADC_ISR_EOC0_Pos))  
#define ADC_ISR_EOC1_Pos                      _U_(1)                                               /**< (ADC_ISR) End of Conversion 1 (automatically set / cleared) Position */
#define ADC_ISR_EOC1_Msk                      (_U_(0x1) << ADC_ISR_EOC1_Pos)                       /**< (ADC_ISR) End of Conversion 1 (automatically set / cleared) Mask */
#define ADC_ISR_EOC1(value)                   (ADC_ISR_EOC1_Msk & ((value) << ADC_ISR_EOC1_Pos))  
#define ADC_ISR_EOC2_Pos                      _U_(2)                                               /**< (ADC_ISR) End of Conversion 2 (automatically set / cleared) Position */
#define ADC_ISR_EOC2_Msk                      (_U_(0x1) << ADC_ISR_EOC2_Pos)                       /**< (ADC_ISR) End of Conversion 2 (automatically set / cleared) Mask */
#define ADC_ISR_EOC2(value)                   (ADC_ISR_EOC2_Msk & ((value) << ADC_ISR_EOC2_Pos))  
#define ADC_ISR_EOC3_Pos                      _U_(3)                                               /**< (ADC_ISR) End of Conversion 3 (automatically set / cleared) Position */
#define ADC_ISR_EOC3_Msk                      (_U_(0x1) << ADC_ISR_EOC3_Pos)                       /**< (ADC_ISR) End of Conversion 3 (automatically set / cleared) Mask */
#define ADC_ISR_EOC3(value)                   (ADC_ISR_EOC3_Msk & ((value) << ADC_ISR_EOC3_Pos))  
#define ADC_ISR_EOC4_Pos                      _U_(4)                                               /**< (ADC_ISR) End of Conversion 4 (automatically set / cleared) Position */
#define ADC_ISR_EOC4_Msk                      (_U_(0x1) << ADC_ISR_EOC4_Pos)                       /**< (ADC_ISR) End of Conversion 4 (automatically set / cleared) Mask */
#define ADC_ISR_EOC4(value)                   (ADC_ISR_EOC4_Msk & ((value) << ADC_ISR_EOC4_Pos))  
#define ADC_ISR_EOC5_Pos                      _U_(5)                                               /**< (ADC_ISR) End of Conversion 5 (automatically set / cleared) Position */
#define ADC_ISR_EOC5_Msk                      (_U_(0x1) << ADC_ISR_EOC5_Pos)                       /**< (ADC_ISR) End of Conversion 5 (automatically set / cleared) Mask */
#define ADC_ISR_EOC5(value)                   (ADC_ISR_EOC5_Msk & ((value) << ADC_ISR_EOC5_Pos))  
#define ADC_ISR_EOC6_Pos                      _U_(6)                                               /**< (ADC_ISR) End of Conversion 6 (automatically set / cleared) Position */
#define ADC_ISR_EOC6_Msk                      (_U_(0x1) << ADC_ISR_EOC6_Pos)                       /**< (ADC_ISR) End of Conversion 6 (automatically set / cleared) Mask */
#define ADC_ISR_EOC6(value)                   (ADC_ISR_EOC6_Msk & ((value) << ADC_ISR_EOC6_Pos))  
#define ADC_ISR_EOC7_Pos                      _U_(7)                                               /**< (ADC_ISR) End of Conversion 7 (automatically set / cleared) Position */
#define ADC_ISR_EOC7_Msk                      (_U_(0x1) << ADC_ISR_EOC7_Pos)                       /**< (ADC_ISR) End of Conversion 7 (automatically set / cleared) Mask */
#define ADC_ISR_EOC7(value)                   (ADC_ISR_EOC7_Msk & ((value) << ADC_ISR_EOC7_Pos))  
#define ADC_ISR_LCCHG_Pos                     _U_(19)                                              /**< (ADC_ISR) Last Channel Change (cleared on read) Position */
#define ADC_ISR_LCCHG_Msk                     (_U_(0x1) << ADC_ISR_LCCHG_Pos)                      /**< (ADC_ISR) Last Channel Change (cleared on read) Mask */
#define ADC_ISR_LCCHG(value)                  (ADC_ISR_LCCHG_Msk & ((value) << ADC_ISR_LCCHG_Pos))
#define ADC_ISR_EOCAL_Pos                     _U_(23)                                              /**< (ADC_ISR) End of Calibration Sequence Position */
#define ADC_ISR_EOCAL_Msk                     (_U_(0x1) << ADC_ISR_EOCAL_Pos)                      /**< (ADC_ISR) End of Calibration Sequence Mask */
#define ADC_ISR_EOCAL(value)                  (ADC_ISR_EOCAL_Msk & ((value) << ADC_ISR_EOCAL_Pos))
#define ADC_ISR_DRDY_Pos                      _U_(24)                                              /**< (ADC_ISR) Data Ready (automatically set / cleared) Position */
#define ADC_ISR_DRDY_Msk                      (_U_(0x1) << ADC_ISR_DRDY_Pos)                       /**< (ADC_ISR) Data Ready (automatically set / cleared) Mask */
#define ADC_ISR_DRDY(value)                   (ADC_ISR_DRDY_Msk & ((value) << ADC_ISR_DRDY_Pos))  
#define ADC_ISR_GOVRE_Pos                     _U_(25)                                              /**< (ADC_ISR) General Overrun Error (cleared on read) Position */
#define ADC_ISR_GOVRE_Msk                     (_U_(0x1) << ADC_ISR_GOVRE_Pos)                      /**< (ADC_ISR) General Overrun Error (cleared on read) Mask */
#define ADC_ISR_GOVRE(value)                  (ADC_ISR_GOVRE_Msk & ((value) << ADC_ISR_GOVRE_Pos))
#define ADC_ISR_COMPE_Pos                     _U_(26)                                              /**< (ADC_ISR) Comparison Event (cleared on read) Position */
#define ADC_ISR_COMPE_Msk                     (_U_(0x1) << ADC_ISR_COMPE_Pos)                      /**< (ADC_ISR) Comparison Event (cleared on read) Mask */
#define ADC_ISR_COMPE(value)                  (ADC_ISR_COMPE_Msk & ((value) << ADC_ISR_COMPE_Pos))
#define ADC_ISR_ENDRX_Pos                     _U_(27)                                              /**< (ADC_ISR) End of Receive Transfer (cleared by writing ADC_RCR or ADC_RNCR) Position */
#define ADC_ISR_ENDRX_Msk                     (_U_(0x1) << ADC_ISR_ENDRX_Pos)                      /**< (ADC_ISR) End of Receive Transfer (cleared by writing ADC_RCR or ADC_RNCR) Mask */
#define ADC_ISR_ENDRX(value)                  (ADC_ISR_ENDRX_Msk & ((value) << ADC_ISR_ENDRX_Pos))
#define ADC_ISR_RXBUFF_Pos                    _U_(28)                                              /**< (ADC_ISR) Receive Buffer Full (cleared by writing ADC_RCR or ADC_RNCR) Position */
#define ADC_ISR_RXBUFF_Msk                    (_U_(0x1) << ADC_ISR_RXBUFF_Pos)                     /**< (ADC_ISR) Receive Buffer Full (cleared by writing ADC_RCR or ADC_RNCR) Mask */
#define ADC_ISR_RXBUFF(value)                 (ADC_ISR_RXBUFF_Msk & ((value) << ADC_ISR_RXBUFF_Pos))
#define ADC_ISR_Msk                           _U_(0x1F8800FF)                                      /**< (ADC_ISR) Register Mask  */

#define ADC_ISR_EOC_Pos                       _U_(0)                                               /**< (ADC_ISR Position) End of Conversion x (automatically set / cleared) */
#define ADC_ISR_EOC_Msk                       (_U_(0xFF) << ADC_ISR_EOC_Pos)                       /**< (ADC_ISR Mask) EOC */
#define ADC_ISR_EOC(value)                    (ADC_ISR_EOC_Msk & ((value) << ADC_ISR_EOC_Pos))     

/* -------- ADC_LCTMR : (ADC Offset: 0x34) (R/W 32) Last Channel Trigger Mode Register -------- */
#define ADC_LCTMR_DUALTRIG_Pos                _U_(0)                                               /**< (ADC_LCTMR) Dual Trigger ON Position */
#define ADC_LCTMR_DUALTRIG_Msk                (_U_(0x1) << ADC_LCTMR_DUALTRIG_Pos)                 /**< (ADC_LCTMR) Dual Trigger ON Mask */
#define ADC_LCTMR_DUALTRIG(value)             (ADC_LCTMR_DUALTRIG_Msk & ((value) << ADC_LCTMR_DUALTRIG_Pos))
#define ADC_LCTMR_CMPMOD_Pos                  _U_(4)                                               /**< (ADC_LCTMR) Last Channel Comparison Mode Position */
#define ADC_LCTMR_CMPMOD_Msk                  (_U_(0x3) << ADC_LCTMR_CMPMOD_Pos)                   /**< (ADC_LCTMR) Last Channel Comparison Mode Mask */
#define ADC_LCTMR_CMPMOD(value)               (ADC_LCTMR_CMPMOD_Msk & ((value) << ADC_LCTMR_CMPMOD_Pos))
#define   ADC_LCTMR_CMPMOD_LOW_Val            _U_(0x0)                                             /**< (ADC_LCTMR) Generates an event when the converted data is lower than the low threshold of the window.  */
#define   ADC_LCTMR_CMPMOD_HIGH_Val           _U_(0x1)                                             /**< (ADC_LCTMR) Generates an event when the converted data is higher than the high threshold of the window.  */
#define   ADC_LCTMR_CMPMOD_IN_Val             _U_(0x2)                                             /**< (ADC_LCTMR) Generates an event when the converted data is in the comparison window.  */
#define   ADC_LCTMR_CMPMOD_OUT_Val            _U_(0x3)                                             /**< (ADC_LCTMR) Generates an event when the converted data is out of the comparison window.  */
#define ADC_LCTMR_CMPMOD_LOW                  (ADC_LCTMR_CMPMOD_LOW_Val << ADC_LCTMR_CMPMOD_Pos)   /**< (ADC_LCTMR) Generates an event when the converted data is lower than the low threshold of the window. Position  */
#define ADC_LCTMR_CMPMOD_HIGH                 (ADC_LCTMR_CMPMOD_HIGH_Val << ADC_LCTMR_CMPMOD_Pos)  /**< (ADC_LCTMR) Generates an event when the converted data is higher than the high threshold of the window. Position  */
#define ADC_LCTMR_CMPMOD_IN                   (ADC_LCTMR_CMPMOD_IN_Val << ADC_LCTMR_CMPMOD_Pos)    /**< (ADC_LCTMR) Generates an event when the converted data is in the comparison window. Position  */
#define ADC_LCTMR_CMPMOD_OUT                  (ADC_LCTMR_CMPMOD_OUT_Val << ADC_LCTMR_CMPMOD_Pos)   /**< (ADC_LCTMR) Generates an event when the converted data is out of the comparison window. Position  */
#define ADC_LCTMR_Msk                         _U_(0x00000031)                                      /**< (ADC_LCTMR) Register Mask  */


/* -------- ADC_LCCWR : (ADC Offset: 0x38) (R/W 32) Last Channel Compare Window Register -------- */
#define ADC_LCCWR_LOWTHRES_Pos                _U_(0)                                               /**< (ADC_LCCWR) Low Threshold Position */
#define ADC_LCCWR_LOWTHRES_Msk                (_U_(0xFFF) << ADC_LCCWR_LOWTHRES_Pos)               /**< (ADC_LCCWR) Low Threshold Mask */
#define ADC_LCCWR_LOWTHRES(value)             (ADC_LCCWR_LOWTHRES_Msk & ((value) << ADC_LCCWR_LOWTHRES_Pos))
#define ADC_LCCWR_HIGHTHRES_Pos               _U_(16)                                              /**< (ADC_LCCWR) High Threshold Position */
#define ADC_LCCWR_HIGHTHRES_Msk               (_U_(0xFFF) << ADC_LCCWR_HIGHTHRES_Pos)              /**< (ADC_LCCWR) High Threshold Mask */
#define ADC_LCCWR_HIGHTHRES(value)            (ADC_LCCWR_HIGHTHRES_Msk & ((value) << ADC_LCCWR_HIGHTHRES_Pos))
#define ADC_LCCWR_Msk                         _U_(0x0FFF0FFF)                                      /**< (ADC_LCCWR) Register Mask  */


/* -------- ADC_OVER : (ADC Offset: 0x3C) ( R/ 32) Overrun Status Register -------- */
#define ADC_OVER_OVRE0_Pos                    _U_(0)                                               /**< (ADC_OVER) Overrun Error 0 Position */
#define ADC_OVER_OVRE0_Msk                    (_U_(0x1) << ADC_OVER_OVRE0_Pos)                     /**< (ADC_OVER) Overrun Error 0 Mask */
#define ADC_OVER_OVRE0(value)                 (ADC_OVER_OVRE0_Msk & ((value) << ADC_OVER_OVRE0_Pos))
#define ADC_OVER_OVRE1_Pos                    _U_(1)                                               /**< (ADC_OVER) Overrun Error 1 Position */
#define ADC_OVER_OVRE1_Msk                    (_U_(0x1) << ADC_OVER_OVRE1_Pos)                     /**< (ADC_OVER) Overrun Error 1 Mask */
#define ADC_OVER_OVRE1(value)                 (ADC_OVER_OVRE1_Msk & ((value) << ADC_OVER_OVRE1_Pos))
#define ADC_OVER_OVRE2_Pos                    _U_(2)                                               /**< (ADC_OVER) Overrun Error 2 Position */
#define ADC_OVER_OVRE2_Msk                    (_U_(0x1) << ADC_OVER_OVRE2_Pos)                     /**< (ADC_OVER) Overrun Error 2 Mask */
#define ADC_OVER_OVRE2(value)                 (ADC_OVER_OVRE2_Msk & ((value) << ADC_OVER_OVRE2_Pos))
#define ADC_OVER_OVRE3_Pos                    _U_(3)                                               /**< (ADC_OVER) Overrun Error 3 Position */
#define ADC_OVER_OVRE3_Msk                    (_U_(0x1) << ADC_OVER_OVRE3_Pos)                     /**< (ADC_OVER) Overrun Error 3 Mask */
#define ADC_OVER_OVRE3(value)                 (ADC_OVER_OVRE3_Msk & ((value) << ADC_OVER_OVRE3_Pos))
#define ADC_OVER_OVRE4_Pos                    _U_(4)                                               /**< (ADC_OVER) Overrun Error 4 Position */
#define ADC_OVER_OVRE4_Msk                    (_U_(0x1) << ADC_OVER_OVRE4_Pos)                     /**< (ADC_OVER) Overrun Error 4 Mask */
#define ADC_OVER_OVRE4(value)                 (ADC_OVER_OVRE4_Msk & ((value) << ADC_OVER_OVRE4_Pos))
#define ADC_OVER_OVRE5_Pos                    _U_(5)                                               /**< (ADC_OVER) Overrun Error 5 Position */
#define ADC_OVER_OVRE5_Msk                    (_U_(0x1) << ADC_OVER_OVRE5_Pos)                     /**< (ADC_OVER) Overrun Error 5 Mask */
#define ADC_OVER_OVRE5(value)                 (ADC_OVER_OVRE5_Msk & ((value) << ADC_OVER_OVRE5_Pos))
#define ADC_OVER_OVRE6_Pos                    _U_(6)                                               /**< (ADC_OVER) Overrun Error 6 Position */
#define ADC_OVER_OVRE6_Msk                    (_U_(0x1) << ADC_OVER_OVRE6_Pos)                     /**< (ADC_OVER) Overrun Error 6 Mask */
#define ADC_OVER_OVRE6(value)                 (ADC_OVER_OVRE6_Msk & ((value) << ADC_OVER_OVRE6_Pos))
#define ADC_OVER_OVRE7_Pos                    _U_(7)                                               /**< (ADC_OVER) Overrun Error 7 Position */
#define ADC_OVER_OVRE7_Msk                    (_U_(0x1) << ADC_OVER_OVRE7_Pos)                     /**< (ADC_OVER) Overrun Error 7 Mask */
#define ADC_OVER_OVRE7(value)                 (ADC_OVER_OVRE7_Msk & ((value) << ADC_OVER_OVRE7_Pos))
#define ADC_OVER_Msk                          _U_(0x000000FF)                                      /**< (ADC_OVER) Register Mask  */

#define ADC_OVER_OVRE_Pos                     _U_(0)                                               /**< (ADC_OVER Position) Overrun Error 7 */
#define ADC_OVER_OVRE_Msk                     (_U_(0xFF) << ADC_OVER_OVRE_Pos)                     /**< (ADC_OVER Mask) OVRE */
#define ADC_OVER_OVRE(value)                  (ADC_OVER_OVRE_Msk & ((value) << ADC_OVER_OVRE_Pos)) 

/* -------- ADC_EMR : (ADC Offset: 0x40) (R/W 32) Extended Mode Register -------- */
#define ADC_EMR_CMPMODE_Pos                   _U_(0)                                               /**< (ADC_EMR) Comparison Mode Position */
#define ADC_EMR_CMPMODE_Msk                   (_U_(0x3) << ADC_EMR_CMPMODE_Pos)                    /**< (ADC_EMR) Comparison Mode Mask */
#define ADC_EMR_CMPMODE(value)                (ADC_EMR_CMPMODE_Msk & ((value) << ADC_EMR_CMPMODE_Pos))
#define   ADC_EMR_CMPMODE_LOW_Val             _U_(0x0)                                             /**< (ADC_EMR) Generates an event when the converted data is lower than the low threshold of the window.  */
#define   ADC_EMR_CMPMODE_HIGH_Val            _U_(0x1)                                             /**< (ADC_EMR) Generates an event when the converted data is higher than the high threshold of the window.  */
#define   ADC_EMR_CMPMODE_IN_Val              _U_(0x2)                                             /**< (ADC_EMR) Generates an event when the converted data is in the comparison window.  */
#define   ADC_EMR_CMPMODE_OUT_Val             _U_(0x3)                                             /**< (ADC_EMR) Generates an event when the converted data is out of the comparison window.  */
#define ADC_EMR_CMPMODE_LOW                   (ADC_EMR_CMPMODE_LOW_Val << ADC_EMR_CMPMODE_Pos)     /**< (ADC_EMR) Generates an event when the converted data is lower than the low threshold of the window. Position  */
#define ADC_EMR_CMPMODE_HIGH                  (ADC_EMR_CMPMODE_HIGH_Val << ADC_EMR_CMPMODE_Pos)    /**< (ADC_EMR) Generates an event when the converted data is higher than the high threshold of the window. Position  */
#define ADC_EMR_CMPMODE_IN                    (ADC_EMR_CMPMODE_IN_Val << ADC_EMR_CMPMODE_Pos)      /**< (ADC_EMR) Generates an event when the converted data is in the comparison window. Position  */
#define ADC_EMR_CMPMODE_OUT                   (ADC_EMR_CMPMODE_OUT_Val << ADC_EMR_CMPMODE_Pos)     /**< (ADC_EMR) Generates an event when the converted data is out of the comparison window. Position  */
#define ADC_EMR_CMPSEL_Pos                    _U_(4)                                               /**< (ADC_EMR) Comparison Selected Channel Position */
#define ADC_EMR_CMPSEL_Msk                    (_U_(0xF) << ADC_EMR_CMPSEL_Pos)                     /**< (ADC_EMR) Comparison Selected Channel Mask */
#define ADC_EMR_CMPSEL(value)                 (ADC_EMR_CMPSEL_Msk & ((value) << ADC_EMR_CMPSEL_Pos))
#define ADC_EMR_CMPALL_Pos                    _U_(9)                                               /**< (ADC_EMR) Compare All Channels Position */
#define ADC_EMR_CMPALL_Msk                    (_U_(0x1) << ADC_EMR_CMPALL_Pos)                     /**< (ADC_EMR) Compare All Channels Mask */
#define ADC_EMR_CMPALL(value)                 (ADC_EMR_CMPALL_Msk & ((value) << ADC_EMR_CMPALL_Pos))
#define ADC_EMR_CMPFILTER_Pos                 _U_(12)                                              /**< (ADC_EMR) Compare Event Filtering Position */
#define ADC_EMR_CMPFILTER_Msk                 (_U_(0x3) << ADC_EMR_CMPFILTER_Pos)                  /**< (ADC_EMR) Compare Event Filtering Mask */
#define ADC_EMR_CMPFILTER(value)              (ADC_EMR_CMPFILTER_Msk & ((value) << ADC_EMR_CMPFILTER_Pos))
#define ADC_EMR_OSR_Pos                       _U_(16)                                              /**< (ADC_EMR) Over Sampling Rate Position */
#define ADC_EMR_OSR_Msk                       (_U_(0x3) << ADC_EMR_OSR_Pos)                        /**< (ADC_EMR) Over Sampling Rate Mask */
#define ADC_EMR_OSR(value)                    (ADC_EMR_OSR_Msk & ((value) << ADC_EMR_OSR_Pos))    
#define   ADC_EMR_OSR_NO_AVERAGE_Val          _U_(0x0)                                             /**< (ADC_EMR) No averaging. ADC sample rate is maximum.  */
#define   ADC_EMR_OSR_OSR4_Val                _U_(0x1)                                             /**< (ADC_EMR) 1-bit enhanced resolution by averaging. ADC sample rate divided by 4.  */
#define   ADC_EMR_OSR_OSR16_Val               _U_(0x2)                                             /**< (ADC_EMR) 2-bit enhanced resolution by averaging. ADC sample rate divided by 16.  */
#define ADC_EMR_OSR_NO_AVERAGE                (ADC_EMR_OSR_NO_AVERAGE_Val << ADC_EMR_OSR_Pos)      /**< (ADC_EMR) No averaging. ADC sample rate is maximum. Position  */
#define ADC_EMR_OSR_OSR4                      (ADC_EMR_OSR_OSR4_Val << ADC_EMR_OSR_Pos)            /**< (ADC_EMR) 1-bit enhanced resolution by averaging. ADC sample rate divided by 4. Position  */
#define ADC_EMR_OSR_OSR16                     (ADC_EMR_OSR_OSR16_Val << ADC_EMR_OSR_Pos)           /**< (ADC_EMR) 2-bit enhanced resolution by averaging. ADC sample rate divided by 16. Position  */
#define ADC_EMR_ASTE_Pos                      _U_(20)                                              /**< (ADC_EMR) Averaging on Single Trigger Event Position */
#define ADC_EMR_ASTE_Msk                      (_U_(0x1) << ADC_EMR_ASTE_Pos)                       /**< (ADC_EMR) Averaging on Single Trigger Event Mask */
#define ADC_EMR_ASTE(value)                   (ADC_EMR_ASTE_Msk & ((value) << ADC_EMR_ASTE_Pos))  
#define   ADC_EMR_ASTE_MULTI_TRIG_AVERAGE_Val _U_(0x0)                                             /**< (ADC_EMR) The average requests several trigger events.  */
#define   ADC_EMR_ASTE_SINGLE_TRIG_AVERAGE_Val _U_(0x1)                                             /**< (ADC_EMR) The average requests only one trigger event.  */
#define ADC_EMR_ASTE_MULTI_TRIG_AVERAGE       (ADC_EMR_ASTE_MULTI_TRIG_AVERAGE_Val << ADC_EMR_ASTE_Pos) /**< (ADC_EMR) The average requests several trigger events. Position  */
#define ADC_EMR_ASTE_SINGLE_TRIG_AVERAGE      (ADC_EMR_ASTE_SINGLE_TRIG_AVERAGE_Val << ADC_EMR_ASTE_Pos) /**< (ADC_EMR) The average requests only one trigger event. Position  */
#define ADC_EMR_TAG_Pos                       _U_(24)                                              /**< (ADC_EMR) Tag of the ADC_LCDR Position */
#define ADC_EMR_TAG_Msk                       (_U_(0x1) << ADC_EMR_TAG_Pos)                        /**< (ADC_EMR) Tag of the ADC_LCDR Mask */
#define ADC_EMR_TAG(value)                    (ADC_EMR_TAG_Msk & ((value) << ADC_EMR_TAG_Pos))    
#define ADC_EMR_Msk                           _U_(0x011332F3)                                      /**< (ADC_EMR) Register Mask  */


/* -------- ADC_CWR : (ADC Offset: 0x44) (R/W 32) Compare Window Register -------- */
#define ADC_CWR_LOWTHRES_Pos                  _U_(0)                                               /**< (ADC_CWR) Low Threshold Position */
#define ADC_CWR_LOWTHRES_Msk                  (_U_(0xFFF) << ADC_CWR_LOWTHRES_Pos)                 /**< (ADC_CWR) Low Threshold Mask */
#define ADC_CWR_LOWTHRES(value)               (ADC_CWR_LOWTHRES_Msk & ((value) << ADC_CWR_LOWTHRES_Pos))
#define ADC_CWR_HIGHTHRES_Pos                 _U_(16)                                              /**< (ADC_CWR) High Threshold Position */
#define ADC_CWR_HIGHTHRES_Msk                 (_U_(0xFFF) << ADC_CWR_HIGHTHRES_Pos)                /**< (ADC_CWR) High Threshold Mask */
#define ADC_CWR_HIGHTHRES(value)              (ADC_CWR_HIGHTHRES_Msk & ((value) << ADC_CWR_HIGHTHRES_Pos))
#define ADC_CWR_Msk                           _U_(0x0FFF0FFF)                                      /**< (ADC_CWR) Register Mask  */


/* -------- ADC_CDR : (ADC Offset: 0x50) ( R/ 32) Channel Data Register 0 -------- */
#define ADC_CDR_DATA_Pos                      _U_(0)                                               /**< (ADC_CDR) Converted Data Position */
#define ADC_CDR_DATA_Msk                      (_U_(0xFFF) << ADC_CDR_DATA_Pos)                     /**< (ADC_CDR) Converted Data Mask */
#define ADC_CDR_DATA(value)                   (ADC_CDR_DATA_Msk & ((value) << ADC_CDR_DATA_Pos))  
#define ADC_CDR_Msk                           _U_(0x00000FFF)                                      /**< (ADC_CDR) Register Mask  */


/* -------- ADC_WPMR : (ADC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define ADC_WPMR_WPEN_Pos                     _U_(0)                                               /**< (ADC_WPMR) Write Protection Enable Position */
#define ADC_WPMR_WPEN_Msk                     (_U_(0x1) << ADC_WPMR_WPEN_Pos)                      /**< (ADC_WPMR) Write Protection Enable Mask */
#define ADC_WPMR_WPEN(value)                  (ADC_WPMR_WPEN_Msk & ((value) << ADC_WPMR_WPEN_Pos))
#define ADC_WPMR_WPKEY_Pos                    _U_(8)                                               /**< (ADC_WPMR) Write Protection Key Position */
#define ADC_WPMR_WPKEY_Msk                    (_U_(0xFFFFFF) << ADC_WPMR_WPKEY_Pos)                /**< (ADC_WPMR) Write Protection Key Mask */
#define ADC_WPMR_WPKEY(value)                 (ADC_WPMR_WPKEY_Msk & ((value) << ADC_WPMR_WPKEY_Pos))
#define   ADC_WPMR_WPKEY_PASSWD_Val           _U_(0x414443)                                        /**< (ADC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0  */
#define ADC_WPMR_WPKEY_PASSWD                 (ADC_WPMR_WPKEY_PASSWD_Val << ADC_WPMR_WPKEY_Pos)    /**< (ADC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0 Position  */
#define ADC_WPMR_Msk                          _U_(0xFFFFFF01)                                      /**< (ADC_WPMR) Register Mask  */


/* -------- ADC_WPSR : (ADC Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define ADC_WPSR_WPVS_Pos                     _U_(0)                                               /**< (ADC_WPSR) Write Protection Violation Status Position */
#define ADC_WPSR_WPVS_Msk                     (_U_(0x1) << ADC_WPSR_WPVS_Pos)                      /**< (ADC_WPSR) Write Protection Violation Status Mask */
#define ADC_WPSR_WPVS(value)                  (ADC_WPSR_WPVS_Msk & ((value) << ADC_WPSR_WPVS_Pos))
#define ADC_WPSR_WPVSRC_Pos                   _U_(8)                                               /**< (ADC_WPSR) Write Protection Violation Source Position */
#define ADC_WPSR_WPVSRC_Msk                   (_U_(0xFFFF) << ADC_WPSR_WPVSRC_Pos)                 /**< (ADC_WPSR) Write Protection Violation Source Mask */
#define ADC_WPSR_WPVSRC(value)                (ADC_WPSR_WPVSRC_Msk & ((value) << ADC_WPSR_WPVSRC_Pos))
#define ADC_WPSR_Msk                          _U_(0x00FFFF01)                                      /**< (ADC_WPSR) Register Mask  */


/* -------- ADC_RPR : (ADC Offset: 0x100) (R/W 32) Receive Pointer Register -------- */
#define ADC_RPR_RXPTR_Pos                     _U_(0)                                               /**< (ADC_RPR) Receive Pointer Register Position */
#define ADC_RPR_RXPTR_Msk                     (_U_(0xFFFFFFFF) << ADC_RPR_RXPTR_Pos)               /**< (ADC_RPR) Receive Pointer Register Mask */
#define ADC_RPR_RXPTR(value)                  (ADC_RPR_RXPTR_Msk & ((value) << ADC_RPR_RXPTR_Pos))
#define ADC_RPR_Msk                           _U_(0xFFFFFFFF)                                      /**< (ADC_RPR) Register Mask  */


/* -------- ADC_RCR : (ADC Offset: 0x104) (R/W 32) Receive Counter Register -------- */
#define ADC_RCR_RXCTR_Pos                     _U_(0)                                               /**< (ADC_RCR) Receive Counter Register Position */
#define ADC_RCR_RXCTR_Msk                     (_U_(0xFFFF) << ADC_RCR_RXCTR_Pos)                   /**< (ADC_RCR) Receive Counter Register Mask */
#define ADC_RCR_RXCTR(value)                  (ADC_RCR_RXCTR_Msk & ((value) << ADC_RCR_RXCTR_Pos))
#define ADC_RCR_Msk                           _U_(0x0000FFFF)                                      /**< (ADC_RCR) Register Mask  */


/* -------- ADC_RNPR : (ADC Offset: 0x110) (R/W 32) Receive Next Pointer Register -------- */
#define ADC_RNPR_RXNPTR_Pos                   _U_(0)                                               /**< (ADC_RNPR) Receive Next Pointer Position */
#define ADC_RNPR_RXNPTR_Msk                   (_U_(0xFFFFFFFF) << ADC_RNPR_RXNPTR_Pos)             /**< (ADC_RNPR) Receive Next Pointer Mask */
#define ADC_RNPR_RXNPTR(value)                (ADC_RNPR_RXNPTR_Msk & ((value) << ADC_RNPR_RXNPTR_Pos))
#define ADC_RNPR_Msk                          _U_(0xFFFFFFFF)                                      /**< (ADC_RNPR) Register Mask  */


/* -------- ADC_RNCR : (ADC Offset: 0x114) (R/W 32) Receive Next Counter Register -------- */
#define ADC_RNCR_RXNCTR_Pos                   _U_(0)                                               /**< (ADC_RNCR) Receive Next Counter Position */
#define ADC_RNCR_RXNCTR_Msk                   (_U_(0xFFFF) << ADC_RNCR_RXNCTR_Pos)                 /**< (ADC_RNCR) Receive Next Counter Mask */
#define ADC_RNCR_RXNCTR(value)                (ADC_RNCR_RXNCTR_Msk & ((value) << ADC_RNCR_RXNCTR_Pos))
#define ADC_RNCR_Msk                          _U_(0x0000FFFF)                                      /**< (ADC_RNCR) Register Mask  */


/* -------- ADC_PTCR : (ADC Offset: 0x120) ( /W 32) Transfer Control Register -------- */
#define ADC_PTCR_RXTEN_Pos                    _U_(0)                                               /**< (ADC_PTCR) Receiver Transfer Enable Position */
#define ADC_PTCR_RXTEN_Msk                    (_U_(0x1) << ADC_PTCR_RXTEN_Pos)                     /**< (ADC_PTCR) Receiver Transfer Enable Mask */
#define ADC_PTCR_RXTEN(value)                 (ADC_PTCR_RXTEN_Msk & ((value) << ADC_PTCR_RXTEN_Pos))
#define ADC_PTCR_RXTDIS_Pos                   _U_(1)                                               /**< (ADC_PTCR) Receiver Transfer Disable Position */
#define ADC_PTCR_RXTDIS_Msk                   (_U_(0x1) << ADC_PTCR_RXTDIS_Pos)                    /**< (ADC_PTCR) Receiver Transfer Disable Mask */
#define ADC_PTCR_RXTDIS(value)                (ADC_PTCR_RXTDIS_Msk & ((value) << ADC_PTCR_RXTDIS_Pos))
#define ADC_PTCR_TXTEN_Pos                    _U_(8)                                               /**< (ADC_PTCR) Transmitter Transfer Enable Position */
#define ADC_PTCR_TXTEN_Msk                    (_U_(0x1) << ADC_PTCR_TXTEN_Pos)                     /**< (ADC_PTCR) Transmitter Transfer Enable Mask */
#define ADC_PTCR_TXTEN(value)                 (ADC_PTCR_TXTEN_Msk & ((value) << ADC_PTCR_TXTEN_Pos))
#define ADC_PTCR_TXTDIS_Pos                   _U_(9)                                               /**< (ADC_PTCR) Transmitter Transfer Disable Position */
#define ADC_PTCR_TXTDIS_Msk                   (_U_(0x1) << ADC_PTCR_TXTDIS_Pos)                    /**< (ADC_PTCR) Transmitter Transfer Disable Mask */
#define ADC_PTCR_TXTDIS(value)                (ADC_PTCR_TXTDIS_Msk & ((value) << ADC_PTCR_TXTDIS_Pos))
#define ADC_PTCR_Msk                          _U_(0x00000303)                                      /**< (ADC_PTCR) Register Mask  */


/* -------- ADC_PTSR : (ADC Offset: 0x124) ( R/ 32) Transfer Status Register -------- */
#define ADC_PTSR_RXTEN_Pos                    _U_(0)                                               /**< (ADC_PTSR) Receiver Transfer Enable Position */
#define ADC_PTSR_RXTEN_Msk                    (_U_(0x1) << ADC_PTSR_RXTEN_Pos)                     /**< (ADC_PTSR) Receiver Transfer Enable Mask */
#define ADC_PTSR_RXTEN(value)                 (ADC_PTSR_RXTEN_Msk & ((value) << ADC_PTSR_RXTEN_Pos))
#define ADC_PTSR_TXTEN_Pos                    _U_(8)                                               /**< (ADC_PTSR) Transmitter Transfer Enable Position */
#define ADC_PTSR_TXTEN_Msk                    (_U_(0x1) << ADC_PTSR_TXTEN_Pos)                     /**< (ADC_PTSR) Transmitter Transfer Enable Mask */
#define ADC_PTSR_TXTEN(value)                 (ADC_PTSR_TXTEN_Msk & ((value) << ADC_PTSR_TXTEN_Pos))
#define ADC_PTSR_Msk                          _U_(0x00000101)                                      /**< (ADC_PTSR) Register Mask  */


/** \brief ADC register offsets definitions */
#define ADC_CR_REG_OFST                (0x00)              /**< (ADC_CR) Control Register Offset */
#define ADC_MR_REG_OFST                (0x04)              /**< (ADC_MR) Mode Register Offset */
#define ADC_SEQR1_REG_OFST             (0x08)              /**< (ADC_SEQR1) Channel Sequence Register 1 Offset */
#define ADC_CHER_REG_OFST              (0x10)              /**< (ADC_CHER) Channel Enable Register Offset */
#define ADC_CHDR_REG_OFST              (0x14)              /**< (ADC_CHDR) Channel Disable Register Offset */
#define ADC_CHSR_REG_OFST              (0x18)              /**< (ADC_CHSR) Channel Status Register Offset */
#define ADC_LCDR_REG_OFST              (0x20)              /**< (ADC_LCDR) Last Converted Data Register Offset */
#define ADC_IER_REG_OFST               (0x24)              /**< (ADC_IER) Interrupt Enable Register Offset */
#define ADC_IDR_REG_OFST               (0x28)              /**< (ADC_IDR) Interrupt Disable Register Offset */
#define ADC_IMR_REG_OFST               (0x2C)              /**< (ADC_IMR) Interrupt Mask Register Offset */
#define ADC_ISR_REG_OFST               (0x30)              /**< (ADC_ISR) Interrupt Status Register Offset */
#define ADC_LCTMR_REG_OFST             (0x34)              /**< (ADC_LCTMR) Last Channel Trigger Mode Register Offset */
#define ADC_LCCWR_REG_OFST             (0x38)              /**< (ADC_LCCWR) Last Channel Compare Window Register Offset */
#define ADC_OVER_REG_OFST              (0x3C)              /**< (ADC_OVER) Overrun Status Register Offset */
#define ADC_EMR_REG_OFST               (0x40)              /**< (ADC_EMR) Extended Mode Register Offset */
#define ADC_CWR_REG_OFST               (0x44)              /**< (ADC_CWR) Compare Window Register Offset */
#define ADC_CDR_REG_OFST               (0x50)              /**< (ADC_CDR) Channel Data Register 0 Offset */
#define ADC_CDR0_REG_OFST              (0x50)              /**< (ADC_CDR0) Channel Data Register 0 Offset */
#define ADC_CDR1_REG_OFST              (0x54)              /**< (ADC_CDR1) Channel Data Register 0 Offset */
#define ADC_CDR2_REG_OFST              (0x58)              /**< (ADC_CDR2) Channel Data Register 0 Offset */
#define ADC_CDR3_REG_OFST              (0x5C)              /**< (ADC_CDR3) Channel Data Register 0 Offset */
#define ADC_CDR4_REG_OFST              (0x60)              /**< (ADC_CDR4) Channel Data Register 0 Offset */
#define ADC_CDR5_REG_OFST              (0x64)              /**< (ADC_CDR5) Channel Data Register 0 Offset */
#define ADC_CDR6_REG_OFST              (0x68)              /**< (ADC_CDR6) Channel Data Register 0 Offset */
#define ADC_CDR7_REG_OFST              (0x6C)              /**< (ADC_CDR7) Channel Data Register 0 Offset */
#define ADC_WPMR_REG_OFST              (0xE4)              /**< (ADC_WPMR) Write Protection Mode Register Offset */
#define ADC_WPSR_REG_OFST              (0xE8)              /**< (ADC_WPSR) Write Protection Status Register Offset */
#define ADC_RPR_REG_OFST               (0x100)             /**< (ADC_RPR) Receive Pointer Register Offset */
#define ADC_RCR_REG_OFST               (0x104)             /**< (ADC_RCR) Receive Counter Register Offset */
#define ADC_RNPR_REG_OFST              (0x110)             /**< (ADC_RNPR) Receive Next Pointer Register Offset */
#define ADC_RNCR_REG_OFST              (0x114)             /**< (ADC_RNCR) Receive Next Counter Register Offset */
#define ADC_PTCR_REG_OFST              (0x120)             /**< (ADC_PTCR) Transfer Control Register Offset */
#define ADC_PTSR_REG_OFST              (0x124)             /**< (ADC_PTSR) Transfer Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief ADC register API structure */
typedef struct
{
  __O   uint32_t                       ADC_CR;             /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       ADC_MR;             /**< Offset: 0x04 (R/W  32) Mode Register */
  __IO  uint32_t                       ADC_SEQR1;          /**< Offset: 0x08 (R/W  32) Channel Sequence Register 1 */
  __I   uint8_t                        Reserved1[0x04];
  __O   uint32_t                       ADC_CHER;           /**< Offset: 0x10 ( /W  32) Channel Enable Register */
  __O   uint32_t                       ADC_CHDR;           /**< Offset: 0x14 ( /W  32) Channel Disable Register */
  __I   uint32_t                       ADC_CHSR;           /**< Offset: 0x18 (R/   32) Channel Status Register */
  __I   uint8_t                        Reserved2[0x04];
  __I   uint32_t                       ADC_LCDR;           /**< Offset: 0x20 (R/   32) Last Converted Data Register */
  __O   uint32_t                       ADC_IER;            /**< Offset: 0x24 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       ADC_IDR;            /**< Offset: 0x28 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       ADC_IMR;            /**< Offset: 0x2C (R/   32) Interrupt Mask Register */
  __I   uint32_t                       ADC_ISR;            /**< Offset: 0x30 (R/   32) Interrupt Status Register */
  __IO  uint32_t                       ADC_LCTMR;          /**< Offset: 0x34 (R/W  32) Last Channel Trigger Mode Register */
  __IO  uint32_t                       ADC_LCCWR;          /**< Offset: 0x38 (R/W  32) Last Channel Compare Window Register */
  __I   uint32_t                       ADC_OVER;           /**< Offset: 0x3C (R/   32) Overrun Status Register */
  __IO  uint32_t                       ADC_EMR;            /**< Offset: 0x40 (R/W  32) Extended Mode Register */
  __IO  uint32_t                       ADC_CWR;            /**< Offset: 0x44 (R/W  32) Compare Window Register */
  __I   uint8_t                        Reserved3[0x08];
  __I   uint32_t                       ADC_CDR[8];         /**< Offset: 0x50 (R/   32) Channel Data Register 0 */
  __I   uint8_t                        Reserved4[0x74];
  __IO  uint32_t                       ADC_WPMR;           /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       ADC_WPSR;           /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
  __I   uint8_t                        Reserved5[0x14];
  __IO  uint32_t                       ADC_RPR;            /**< Offset: 0x100 (R/W  32) Receive Pointer Register */
  __IO  uint32_t                       ADC_RCR;            /**< Offset: 0x104 (R/W  32) Receive Counter Register */
  __I   uint8_t                        Reserved6[0x08];
  __IO  uint32_t                       ADC_RNPR;           /**< Offset: 0x110 (R/W  32) Receive Next Pointer Register */
  __IO  uint32_t                       ADC_RNCR;           /**< Offset: 0x114 (R/W  32) Receive Next Counter Register */
  __I   uint8_t                        Reserved7[0x08];
  __O   uint32_t                       ADC_PTCR;           /**< Offset: 0x120 ( /W  32) Transfer Control Register */
  __I   uint32_t                       ADC_PTSR;           /**< Offset: 0x124 (R/   32) Transfer Status Register */
} adc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMG51_ADC_COMPONENT_H_ */
