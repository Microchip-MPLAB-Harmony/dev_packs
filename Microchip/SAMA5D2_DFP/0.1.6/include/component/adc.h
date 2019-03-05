/**
 * \file
 *
 * \brief Component description for ADC
 *
 * Copyright (c) 2019 Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \license_stop
 *
 */

/* file generated from device description version 2019-01-23T22:42:14Z */
#ifndef _SAMA5D2_ADC_COMPONENT_H_
#define _SAMA5D2_ADC_COMPONENT_H_
#define _SAMA5D2_ADC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMA5D2_SAMA5D2 Analog-to-Digital Converter
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR ADC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define ADC_44073                      /**< (ADC) Module ID */
#define REV_ADC G                      /**< (ADC) Module revision */

/* -------- ADC_CR : (ADC Offset: 0x00) (/W 32) Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset                           */
    uint32_t START:1;                   /**< bit:      1  Start Conversion                         */
    uint32_t TSCALIB:1;                 /**< bit:      2  Touchscreen Calibration                  */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t CMPRST:1;                  /**< bit:      4  Comparison Restart                       */
    uint32_t :27;                       /**< bit:  5..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ADC_CR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_CR_OFFSET                       (0x00)                                        /**<  (ADC_CR) Control Register  Offset */

#define ADC_CR_SWRST_Pos                    0                                              /**< (ADC_CR) Software Reset Position */
#define ADC_CR_SWRST_Msk                    (_U_(0x1) << ADC_CR_SWRST_Pos)                 /**< (ADC_CR) Software Reset Mask */
#define ADC_CR_SWRST                        ADC_CR_SWRST_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CR_SWRST_Msk instead */
#define ADC_CR_START_Pos                    1                                              /**< (ADC_CR) Start Conversion Position */
#define ADC_CR_START_Msk                    (_U_(0x1) << ADC_CR_START_Pos)                 /**< (ADC_CR) Start Conversion Mask */
#define ADC_CR_START                        ADC_CR_START_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CR_START_Msk instead */
#define ADC_CR_TSCALIB_Pos                  2                                              /**< (ADC_CR) Touchscreen Calibration Position */
#define ADC_CR_TSCALIB_Msk                  (_U_(0x1) << ADC_CR_TSCALIB_Pos)               /**< (ADC_CR) Touchscreen Calibration Mask */
#define ADC_CR_TSCALIB                      ADC_CR_TSCALIB_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CR_TSCALIB_Msk instead */
#define ADC_CR_CMPRST_Pos                   4                                              /**< (ADC_CR) Comparison Restart Position */
#define ADC_CR_CMPRST_Msk                   (_U_(0x1) << ADC_CR_CMPRST_Pos)                /**< (ADC_CR) Comparison Restart Mask */
#define ADC_CR_CMPRST                       ADC_CR_CMPRST_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CR_CMPRST_Msk instead */
#define ADC_CR_MASK                         _U_(0x17)                                      /**< \deprecated (ADC_CR) Register MASK  (Use ADC_CR_Msk instead)  */
#define ADC_CR_Msk                          _U_(0x17)                                      /**< (ADC_CR) Register Mask  */


/* -------- ADC_MR : (ADC Offset: 0x04) (R/W 32) Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :1;                        /**< bit:      0  Reserved */
    uint32_t TRGSEL:3;                  /**< bit:   1..3  Trigger Selection                        */
    uint32_t :1;                        /**< bit:      4  Reserved */
    uint32_t SLEEP:1;                   /**< bit:      5  Sleep Mode                               */
    uint32_t FWUP:1;                    /**< bit:      6  Fast Wakeup                              */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t PRESCAL:8;                 /**< bit:  8..15  Prescaler Rate Selection                 */
    uint32_t STARTUP:4;                 /**< bit: 16..19  Startup Time                             */
    uint32_t :3;                        /**< bit: 20..22  Reserved */
    uint32_t ANACH:1;                   /**< bit:     23  Analog Change                            */
    uint32_t TRACKTIM:4;                /**< bit: 24..27  Tracking Time                            */
    uint32_t TRANSFER:2;                /**< bit: 28..29  Transfer Time                            */
    uint32_t MAXSPEED:1;                /**< bit:     30  Maximum Sampling Rate Enable in Freerun Mode */
    uint32_t USEQ:1;                    /**< bit:     31  Use Sequence Enable                      */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ADC_MR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_MR_OFFSET                       (0x04)                                        /**<  (ADC_MR) Mode Register  Offset */

#define ADC_MR_TRGSEL_Pos                   1                                              /**< (ADC_MR) Trigger Selection Position */
#define ADC_MR_TRGSEL_Msk                   (_U_(0x7) << ADC_MR_TRGSEL_Pos)                /**< (ADC_MR) Trigger Selection Mask */
#define ADC_MR_TRGSEL(value)                (ADC_MR_TRGSEL_Msk & ((value) << ADC_MR_TRGSEL_Pos))
#define   ADC_MR_TRGSEL_ADC_TRIG0_Val       _U_(0x0)                                       /**< (ADC_MR) ADTRG  */
#define   ADC_MR_TRGSEL_ADC_TRIG1_Val       _U_(0x1)                                       /**< (ADC_MR) TIOA0  */
#define   ADC_MR_TRGSEL_ADC_TRIG2_Val       _U_(0x2)                                       /**< (ADC_MR) TIOA1  */
#define   ADC_MR_TRGSEL_ADC_TRIG3_Val       _U_(0x3)                                       /**< (ADC_MR) TIOA2  */
#define   ADC_MR_TRGSEL_ADC_TRIG4_Val       _U_(0x4)                                       /**< (ADC_MR) PWM event line 0  */
#define   ADC_MR_TRGSEL_ADC_TRIG5_Val       _U_(0x5)                                       /**< (ADC_MR) PWM event line 1  */
#define   ADC_MR_TRGSEL_ADC_TRIG6_Val       _U_(0x6)                                       /**< (ADC_MR) TIOA3  */
#define   ADC_MR_TRGSEL_ADC_TRIG7_Val       _U_(0x7)                                       /**< (ADC_MR) RTCOUT0  */
#define ADC_MR_TRGSEL_ADC_TRIG0             (ADC_MR_TRGSEL_ADC_TRIG0_Val << ADC_MR_TRGSEL_Pos)  /**< (ADC_MR) ADTRG Position  */
#define ADC_MR_TRGSEL_ADC_TRIG1             (ADC_MR_TRGSEL_ADC_TRIG1_Val << ADC_MR_TRGSEL_Pos)  /**< (ADC_MR) TIOA0 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG2             (ADC_MR_TRGSEL_ADC_TRIG2_Val << ADC_MR_TRGSEL_Pos)  /**< (ADC_MR) TIOA1 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG3             (ADC_MR_TRGSEL_ADC_TRIG3_Val << ADC_MR_TRGSEL_Pos)  /**< (ADC_MR) TIOA2 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG4             (ADC_MR_TRGSEL_ADC_TRIG4_Val << ADC_MR_TRGSEL_Pos)  /**< (ADC_MR) PWM event line 0 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG5             (ADC_MR_TRGSEL_ADC_TRIG5_Val << ADC_MR_TRGSEL_Pos)  /**< (ADC_MR) PWM event line 1 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG6             (ADC_MR_TRGSEL_ADC_TRIG6_Val << ADC_MR_TRGSEL_Pos)  /**< (ADC_MR) TIOA3 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG7             (ADC_MR_TRGSEL_ADC_TRIG7_Val << ADC_MR_TRGSEL_Pos)  /**< (ADC_MR) RTCOUT0 Position  */
#define ADC_MR_SLEEP_Pos                    5                                              /**< (ADC_MR) Sleep Mode Position */
#define ADC_MR_SLEEP_Msk                    (_U_(0x1) << ADC_MR_SLEEP_Pos)                 /**< (ADC_MR) Sleep Mode Mask */
#define ADC_MR_SLEEP                        ADC_MR_SLEEP_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_MR_SLEEP_Msk instead */
#define   ADC_MR_SLEEP_NORMAL_Val           _U_(0x0)                                       /**< (ADC_MR) Normal Mode: The ADC core and reference voltage circuitry are kept ON between conversions.  */
#define   ADC_MR_SLEEP_SLEEP_Val            _U_(0x1)                                       /**< (ADC_MR) Sleep Mode: The wakeup time can be modified by programming the FWUP bit.  */
#define ADC_MR_SLEEP_NORMAL                 (ADC_MR_SLEEP_NORMAL_Val << ADC_MR_SLEEP_Pos)  /**< (ADC_MR) Normal Mode: The ADC core and reference voltage circuitry are kept ON between conversions. Position  */
#define ADC_MR_SLEEP_SLEEP                  (ADC_MR_SLEEP_SLEEP_Val << ADC_MR_SLEEP_Pos)   /**< (ADC_MR) Sleep Mode: The wakeup time can be modified by programming the FWUP bit. Position  */
#define ADC_MR_FWUP_Pos                     6                                              /**< (ADC_MR) Fast Wakeup Position */
#define ADC_MR_FWUP_Msk                     (_U_(0x1) << ADC_MR_FWUP_Pos)                  /**< (ADC_MR) Fast Wakeup Mask */
#define ADC_MR_FWUP                         ADC_MR_FWUP_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_MR_FWUP_Msk instead */
#define   ADC_MR_FWUP_OFF_Val               _U_(0x0)                                       /**< (ADC_MR) If SLEEP is 1, then both ADC core and reference voltage circuitry are OFF between conversions  */
#define   ADC_MR_FWUP_ON_Val                _U_(0x1)                                       /**< (ADC_MR) If SLEEP is 1, then Fast Wakeup Sleep mode: The voltage reference is ON between conversions and ADC core is OFF  */
#define ADC_MR_FWUP_OFF                     (ADC_MR_FWUP_OFF_Val << ADC_MR_FWUP_Pos)       /**< (ADC_MR) If SLEEP is 1, then both ADC core and reference voltage circuitry are OFF between conversions Position  */
#define ADC_MR_FWUP_ON                      (ADC_MR_FWUP_ON_Val << ADC_MR_FWUP_Pos)        /**< (ADC_MR) If SLEEP is 1, then Fast Wakeup Sleep mode: The voltage reference is ON between conversions and ADC core is OFF Position  */
#define ADC_MR_PRESCAL_Pos                  8                                              /**< (ADC_MR) Prescaler Rate Selection Position */
#define ADC_MR_PRESCAL_Msk                  (_U_(0xFF) << ADC_MR_PRESCAL_Pos)              /**< (ADC_MR) Prescaler Rate Selection Mask */
#define ADC_MR_PRESCAL(value)               (ADC_MR_PRESCAL_Msk & ((value) << ADC_MR_PRESCAL_Pos))
#define ADC_MR_STARTUP_Pos                  16                                             /**< (ADC_MR) Startup Time Position */
#define ADC_MR_STARTUP_Msk                  (_U_(0xF) << ADC_MR_STARTUP_Pos)               /**< (ADC_MR) Startup Time Mask */
#define ADC_MR_STARTUP(value)               (ADC_MR_STARTUP_Msk & ((value) << ADC_MR_STARTUP_Pos))
#define   ADC_MR_STARTUP_SUT0_Val           _U_(0x0)                                       /**< (ADC_MR) 0 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT8_Val           _U_(0x1)                                       /**< (ADC_MR) 8 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT16_Val          _U_(0x2)                                       /**< (ADC_MR) 16 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT24_Val          _U_(0x3)                                       /**< (ADC_MR) 24 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT64_Val          _U_(0x4)                                       /**< (ADC_MR) 64 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT80_Val          _U_(0x5)                                       /**< (ADC_MR) 80 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT96_Val          _U_(0x6)                                       /**< (ADC_MR) 96 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT112_Val         _U_(0x7)                                       /**< (ADC_MR) 112 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT512_Val         _U_(0x8)                                       /**< (ADC_MR) 512 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT576_Val         _U_(0x9)                                       /**< (ADC_MR) 576 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT640_Val         _U_(0xA)                                       /**< (ADC_MR) 640 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT704_Val         _U_(0xB)                                       /**< (ADC_MR) 704 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT768_Val         _U_(0xC)                                       /**< (ADC_MR) 768 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT832_Val         _U_(0xD)                                       /**< (ADC_MR) 832 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT896_Val         _U_(0xE)                                       /**< (ADC_MR) 896 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT960_Val         _U_(0xF)                                       /**< (ADC_MR) 960 periods of ADCCLK  */
#define ADC_MR_STARTUP_SUT0                 (ADC_MR_STARTUP_SUT0_Val << ADC_MR_STARTUP_Pos)  /**< (ADC_MR) 0 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT8                 (ADC_MR_STARTUP_SUT8_Val << ADC_MR_STARTUP_Pos)  /**< (ADC_MR) 8 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT16                (ADC_MR_STARTUP_SUT16_Val << ADC_MR_STARTUP_Pos)  /**< (ADC_MR) 16 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT24                (ADC_MR_STARTUP_SUT24_Val << ADC_MR_STARTUP_Pos)  /**< (ADC_MR) 24 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT64                (ADC_MR_STARTUP_SUT64_Val << ADC_MR_STARTUP_Pos)  /**< (ADC_MR) 64 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT80                (ADC_MR_STARTUP_SUT80_Val << ADC_MR_STARTUP_Pos)  /**< (ADC_MR) 80 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT96                (ADC_MR_STARTUP_SUT96_Val << ADC_MR_STARTUP_Pos)  /**< (ADC_MR) 96 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT112               (ADC_MR_STARTUP_SUT112_Val << ADC_MR_STARTUP_Pos)  /**< (ADC_MR) 112 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT512               (ADC_MR_STARTUP_SUT512_Val << ADC_MR_STARTUP_Pos)  /**< (ADC_MR) 512 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT576               (ADC_MR_STARTUP_SUT576_Val << ADC_MR_STARTUP_Pos)  /**< (ADC_MR) 576 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT640               (ADC_MR_STARTUP_SUT640_Val << ADC_MR_STARTUP_Pos)  /**< (ADC_MR) 640 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT704               (ADC_MR_STARTUP_SUT704_Val << ADC_MR_STARTUP_Pos)  /**< (ADC_MR) 704 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT768               (ADC_MR_STARTUP_SUT768_Val << ADC_MR_STARTUP_Pos)  /**< (ADC_MR) 768 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT832               (ADC_MR_STARTUP_SUT832_Val << ADC_MR_STARTUP_Pos)  /**< (ADC_MR) 832 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT896               (ADC_MR_STARTUP_SUT896_Val << ADC_MR_STARTUP_Pos)  /**< (ADC_MR) 896 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT960               (ADC_MR_STARTUP_SUT960_Val << ADC_MR_STARTUP_Pos)  /**< (ADC_MR) 960 periods of ADCCLK Position  */
#define ADC_MR_ANACH_Pos                    23                                             /**< (ADC_MR) Analog Change Position */
#define ADC_MR_ANACH_Msk                    (_U_(0x1) << ADC_MR_ANACH_Pos)                 /**< (ADC_MR) Analog Change Mask */
#define ADC_MR_ANACH                        ADC_MR_ANACH_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_MR_ANACH_Msk instead */
#define   ADC_MR_ANACH_NONE_Val             _U_(0x0)                                       /**< (ADC_MR) No analog change on channel switching: DIFF0 is used for all channels.  */
#define   ADC_MR_ANACH_ALLOWED_Val          _U_(0x1)                                       /**< (ADC_MR) Allows different analog settings for each channel. See ADC Channel Offset RegisterChannel Configuration Register.  */
#define ADC_MR_ANACH_NONE                   (ADC_MR_ANACH_NONE_Val << ADC_MR_ANACH_Pos)    /**< (ADC_MR) No analog change on channel switching: DIFF0 is used for all channels. Position  */
#define ADC_MR_ANACH_ALLOWED                (ADC_MR_ANACH_ALLOWED_Val << ADC_MR_ANACH_Pos)  /**< (ADC_MR) Allows different analog settings for each channel. See ADC Channel Offset RegisterChannel Configuration Register. Position  */
#define ADC_MR_TRACKTIM_Pos                 24                                             /**< (ADC_MR) Tracking Time Position */
#define ADC_MR_TRACKTIM_Msk                 (_U_(0xF) << ADC_MR_TRACKTIM_Pos)              /**< (ADC_MR) Tracking Time Mask */
#define ADC_MR_TRACKTIM(value)              (ADC_MR_TRACKTIM_Msk & ((value) << ADC_MR_TRACKTIM_Pos))
#define ADC_MR_TRANSFER_Pos                 28                                             /**< (ADC_MR) Transfer Time Position */
#define ADC_MR_TRANSFER_Msk                 (_U_(0x3) << ADC_MR_TRANSFER_Pos)              /**< (ADC_MR) Transfer Time Mask */
#define ADC_MR_TRANSFER(value)              (ADC_MR_TRANSFER_Msk & ((value) << ADC_MR_TRANSFER_Pos))
#define ADC_MR_MAXSPEED_Pos                 30                                             /**< (ADC_MR) Maximum Sampling Rate Enable in Freerun Mode Position */
#define ADC_MR_MAXSPEED_Msk                 (_U_(0x1) << ADC_MR_MAXSPEED_Pos)              /**< (ADC_MR) Maximum Sampling Rate Enable in Freerun Mode Mask */
#define ADC_MR_MAXSPEED                     ADC_MR_MAXSPEED_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_MR_MAXSPEED_Msk instead */
#define ADC_MR_USEQ_Pos                     31                                             /**< (ADC_MR) Use Sequence Enable Position */
#define ADC_MR_USEQ_Msk                     (_U_(0x1) << ADC_MR_USEQ_Pos)                  /**< (ADC_MR) Use Sequence Enable Mask */
#define ADC_MR_USEQ                         ADC_MR_USEQ_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_MR_USEQ_Msk instead */
#define   ADC_MR_USEQ_NUM_ORDER_Val         _U_(0x0)                                       /**< (ADC_MR) Normal mode: The controller converts channels in a simple numeric order depending only on the channel index.  */
#define   ADC_MR_USEQ_REG_ORDER_Val         _U_(0x1)                                       /**< (ADC_MR) User Sequence mode: The sequence respects what is defined in ADC_SEQR1 and ADC_SEQR2 registers and can be used to convert the same channel several times.  */
#define ADC_MR_USEQ_NUM_ORDER               (ADC_MR_USEQ_NUM_ORDER_Val << ADC_MR_USEQ_Pos)  /**< (ADC_MR) Normal mode: The controller converts channels in a simple numeric order depending only on the channel index. Position  */
#define ADC_MR_USEQ_REG_ORDER               (ADC_MR_USEQ_REG_ORDER_Val << ADC_MR_USEQ_Pos)  /**< (ADC_MR) User Sequence mode: The sequence respects what is defined in ADC_SEQR1 and ADC_SEQR2 registers and can be used to convert the same channel several times. Position  */
#define ADC_MR_MASK                         _U_(0xFF8FFF6E)                                /**< \deprecated (ADC_MR) Register MASK  (Use ADC_MR_Msk instead)  */
#define ADC_MR_Msk                          _U_(0xFF8FFF6E)                                /**< (ADC_MR) Register Mask  */


/* -------- ADC_SEQR1 : (ADC Offset: 0x08) (R/W 32) Channel Sequence Register 1 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t USCH1:4;                   /**< bit:   0..3  User Sequence Number 1                   */
    uint32_t USCH2:4;                   /**< bit:   4..7  User Sequence Number 2                   */
    uint32_t USCH3:4;                   /**< bit:  8..11  User Sequence Number 3                   */
    uint32_t USCH4:4;                   /**< bit: 12..15  User Sequence Number 4                   */
    uint32_t USCH5:4;                   /**< bit: 16..19  User Sequence Number 5                   */
    uint32_t USCH6:4;                   /**< bit: 20..23  User Sequence Number 6                   */
    uint32_t USCH7:4;                   /**< bit: 24..27  User Sequence Number 7                   */
    uint32_t USCH8:4;                   /**< bit: 28..31  User Sequence Number 8                   */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ADC_SEQR1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_SEQR1_OFFSET                    (0x08)                                        /**<  (ADC_SEQR1) Channel Sequence Register 1  Offset */

#define ADC_SEQR1_USCH1_Pos                 0                                              /**< (ADC_SEQR1) User Sequence Number 1 Position */
#define ADC_SEQR1_USCH1_Msk                 (_U_(0xF) << ADC_SEQR1_USCH1_Pos)              /**< (ADC_SEQR1) User Sequence Number 1 Mask */
#define ADC_SEQR1_USCH1(value)              (ADC_SEQR1_USCH1_Msk & ((value) << ADC_SEQR1_USCH1_Pos))
#define ADC_SEQR1_USCH2_Pos                 4                                              /**< (ADC_SEQR1) User Sequence Number 2 Position */
#define ADC_SEQR1_USCH2_Msk                 (_U_(0xF) << ADC_SEQR1_USCH2_Pos)              /**< (ADC_SEQR1) User Sequence Number 2 Mask */
#define ADC_SEQR1_USCH2(value)              (ADC_SEQR1_USCH2_Msk & ((value) << ADC_SEQR1_USCH2_Pos))
#define ADC_SEQR1_USCH3_Pos                 8                                              /**< (ADC_SEQR1) User Sequence Number 3 Position */
#define ADC_SEQR1_USCH3_Msk                 (_U_(0xF) << ADC_SEQR1_USCH3_Pos)              /**< (ADC_SEQR1) User Sequence Number 3 Mask */
#define ADC_SEQR1_USCH3(value)              (ADC_SEQR1_USCH3_Msk & ((value) << ADC_SEQR1_USCH3_Pos))
#define ADC_SEQR1_USCH4_Pos                 12                                             /**< (ADC_SEQR1) User Sequence Number 4 Position */
#define ADC_SEQR1_USCH4_Msk                 (_U_(0xF) << ADC_SEQR1_USCH4_Pos)              /**< (ADC_SEQR1) User Sequence Number 4 Mask */
#define ADC_SEQR1_USCH4(value)              (ADC_SEQR1_USCH4_Msk & ((value) << ADC_SEQR1_USCH4_Pos))
#define ADC_SEQR1_USCH5_Pos                 16                                             /**< (ADC_SEQR1) User Sequence Number 5 Position */
#define ADC_SEQR1_USCH5_Msk                 (_U_(0xF) << ADC_SEQR1_USCH5_Pos)              /**< (ADC_SEQR1) User Sequence Number 5 Mask */
#define ADC_SEQR1_USCH5(value)              (ADC_SEQR1_USCH5_Msk & ((value) << ADC_SEQR1_USCH5_Pos))
#define ADC_SEQR1_USCH6_Pos                 20                                             /**< (ADC_SEQR1) User Sequence Number 6 Position */
#define ADC_SEQR1_USCH6_Msk                 (_U_(0xF) << ADC_SEQR1_USCH6_Pos)              /**< (ADC_SEQR1) User Sequence Number 6 Mask */
#define ADC_SEQR1_USCH6(value)              (ADC_SEQR1_USCH6_Msk & ((value) << ADC_SEQR1_USCH6_Pos))
#define ADC_SEQR1_USCH7_Pos                 24                                             /**< (ADC_SEQR1) User Sequence Number 7 Position */
#define ADC_SEQR1_USCH7_Msk                 (_U_(0xF) << ADC_SEQR1_USCH7_Pos)              /**< (ADC_SEQR1) User Sequence Number 7 Mask */
#define ADC_SEQR1_USCH7(value)              (ADC_SEQR1_USCH7_Msk & ((value) << ADC_SEQR1_USCH7_Pos))
#define ADC_SEQR1_USCH8_Pos                 28                                             /**< (ADC_SEQR1) User Sequence Number 8 Position */
#define ADC_SEQR1_USCH8_Msk                 (_U_(0xF) << ADC_SEQR1_USCH8_Pos)              /**< (ADC_SEQR1) User Sequence Number 8 Mask */
#define ADC_SEQR1_USCH8(value)              (ADC_SEQR1_USCH8_Msk & ((value) << ADC_SEQR1_USCH8_Pos))
#define ADC_SEQR1_MASK                      _U_(0xFFFFFFFF)                                /**< \deprecated (ADC_SEQR1) Register MASK  (Use ADC_SEQR1_Msk instead)  */
#define ADC_SEQR1_Msk                       _U_(0xFFFFFFFF)                                /**< (ADC_SEQR1) Register Mask  */


/* -------- ADC_SEQR2 : (ADC Offset: 0x0c) (R/W 32) Channel Sequence Register 2 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t USCH9:4;                   /**< bit:   0..3  User Sequence Number 9                   */
    uint32_t USCH10:4;                  /**< bit:   4..7  User Sequence Number 10                  */
    uint32_t USCH11:4;                  /**< bit:  8..11  User Sequence Number 11                  */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ADC_SEQR2_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_SEQR2_OFFSET                    (0x0C)                                        /**<  (ADC_SEQR2) Channel Sequence Register 2  Offset */

#define ADC_SEQR2_USCH9_Pos                 0                                              /**< (ADC_SEQR2) User Sequence Number 9 Position */
#define ADC_SEQR2_USCH9_Msk                 (_U_(0xF) << ADC_SEQR2_USCH9_Pos)              /**< (ADC_SEQR2) User Sequence Number 9 Mask */
#define ADC_SEQR2_USCH9(value)              (ADC_SEQR2_USCH9_Msk & ((value) << ADC_SEQR2_USCH9_Pos))
#define ADC_SEQR2_USCH10_Pos                4                                              /**< (ADC_SEQR2) User Sequence Number 10 Position */
#define ADC_SEQR2_USCH10_Msk                (_U_(0xF) << ADC_SEQR2_USCH10_Pos)             /**< (ADC_SEQR2) User Sequence Number 10 Mask */
#define ADC_SEQR2_USCH10(value)             (ADC_SEQR2_USCH10_Msk & ((value) << ADC_SEQR2_USCH10_Pos))
#define ADC_SEQR2_USCH11_Pos                8                                              /**< (ADC_SEQR2) User Sequence Number 11 Position */
#define ADC_SEQR2_USCH11_Msk                (_U_(0xF) << ADC_SEQR2_USCH11_Pos)             /**< (ADC_SEQR2) User Sequence Number 11 Mask */
#define ADC_SEQR2_USCH11(value)             (ADC_SEQR2_USCH11_Msk & ((value) << ADC_SEQR2_USCH11_Pos))
#define ADC_SEQR2_MASK                      _U_(0xFFF)                                     /**< \deprecated (ADC_SEQR2) Register MASK  (Use ADC_SEQR2_Msk instead)  */
#define ADC_SEQR2_Msk                       _U_(0xFFF)                                     /**< (ADC_SEQR2) Register Mask  */


/* -------- ADC_CHER : (ADC Offset: 0x10) (/W 32) Channel Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CH0:1;                     /**< bit:      0  Channel 0 Enable                         */
    uint32_t CH1:1;                     /**< bit:      1  Channel 1 Enable                         */
    uint32_t CH2:1;                     /**< bit:      2  Channel 2 Enable                         */
    uint32_t CH3:1;                     /**< bit:      3  Channel 3 Enable                         */
    uint32_t CH4:1;                     /**< bit:      4  Channel 4 Enable                         */
    uint32_t CH5:1;                     /**< bit:      5  Channel 5 Enable                         */
    uint32_t CH6:1;                     /**< bit:      6  Channel 6 Enable                         */
    uint32_t CH7:1;                     /**< bit:      7  Channel 7 Enable                         */
    uint32_t CH8:1;                     /**< bit:      8  Channel 8 Enable                         */
    uint32_t CH9:1;                     /**< bit:      9  Channel 9 Enable                         */
    uint32_t CH10:1;                    /**< bit:     10  Channel 10 Enable                        */
    uint32_t CH11:1;                    /**< bit:     11  Channel 11 Enable                        */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t CH:12;                     /**< bit:  0..11  Channel xx Enable                        */
    uint32_t :20;                       /**< bit: 12..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} ADC_CHER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_CHER_OFFSET                     (0x10)                                        /**<  (ADC_CHER) Channel Enable Register  Offset */

#define ADC_CHER_CH0_Pos                    0                                              /**< (ADC_CHER) Channel 0 Enable Position */
#define ADC_CHER_CH0_Msk                    (_U_(0x1) << ADC_CHER_CH0_Pos)                 /**< (ADC_CHER) Channel 0 Enable Mask */
#define ADC_CHER_CH0                        ADC_CHER_CH0_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHER_CH0_Msk instead */
#define ADC_CHER_CH1_Pos                    1                                              /**< (ADC_CHER) Channel 1 Enable Position */
#define ADC_CHER_CH1_Msk                    (_U_(0x1) << ADC_CHER_CH1_Pos)                 /**< (ADC_CHER) Channel 1 Enable Mask */
#define ADC_CHER_CH1                        ADC_CHER_CH1_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHER_CH1_Msk instead */
#define ADC_CHER_CH2_Pos                    2                                              /**< (ADC_CHER) Channel 2 Enable Position */
#define ADC_CHER_CH2_Msk                    (_U_(0x1) << ADC_CHER_CH2_Pos)                 /**< (ADC_CHER) Channel 2 Enable Mask */
#define ADC_CHER_CH2                        ADC_CHER_CH2_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHER_CH2_Msk instead */
#define ADC_CHER_CH3_Pos                    3                                              /**< (ADC_CHER) Channel 3 Enable Position */
#define ADC_CHER_CH3_Msk                    (_U_(0x1) << ADC_CHER_CH3_Pos)                 /**< (ADC_CHER) Channel 3 Enable Mask */
#define ADC_CHER_CH3                        ADC_CHER_CH3_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHER_CH3_Msk instead */
#define ADC_CHER_CH4_Pos                    4                                              /**< (ADC_CHER) Channel 4 Enable Position */
#define ADC_CHER_CH4_Msk                    (_U_(0x1) << ADC_CHER_CH4_Pos)                 /**< (ADC_CHER) Channel 4 Enable Mask */
#define ADC_CHER_CH4                        ADC_CHER_CH4_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHER_CH4_Msk instead */
#define ADC_CHER_CH5_Pos                    5                                              /**< (ADC_CHER) Channel 5 Enable Position */
#define ADC_CHER_CH5_Msk                    (_U_(0x1) << ADC_CHER_CH5_Pos)                 /**< (ADC_CHER) Channel 5 Enable Mask */
#define ADC_CHER_CH5                        ADC_CHER_CH5_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHER_CH5_Msk instead */
#define ADC_CHER_CH6_Pos                    6                                              /**< (ADC_CHER) Channel 6 Enable Position */
#define ADC_CHER_CH6_Msk                    (_U_(0x1) << ADC_CHER_CH6_Pos)                 /**< (ADC_CHER) Channel 6 Enable Mask */
#define ADC_CHER_CH6                        ADC_CHER_CH6_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHER_CH6_Msk instead */
#define ADC_CHER_CH7_Pos                    7                                              /**< (ADC_CHER) Channel 7 Enable Position */
#define ADC_CHER_CH7_Msk                    (_U_(0x1) << ADC_CHER_CH7_Pos)                 /**< (ADC_CHER) Channel 7 Enable Mask */
#define ADC_CHER_CH7                        ADC_CHER_CH7_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHER_CH7_Msk instead */
#define ADC_CHER_CH8_Pos                    8                                              /**< (ADC_CHER) Channel 8 Enable Position */
#define ADC_CHER_CH8_Msk                    (_U_(0x1) << ADC_CHER_CH8_Pos)                 /**< (ADC_CHER) Channel 8 Enable Mask */
#define ADC_CHER_CH8                        ADC_CHER_CH8_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHER_CH8_Msk instead */
#define ADC_CHER_CH9_Pos                    9                                              /**< (ADC_CHER) Channel 9 Enable Position */
#define ADC_CHER_CH9_Msk                    (_U_(0x1) << ADC_CHER_CH9_Pos)                 /**< (ADC_CHER) Channel 9 Enable Mask */
#define ADC_CHER_CH9                        ADC_CHER_CH9_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHER_CH9_Msk instead */
#define ADC_CHER_CH10_Pos                   10                                             /**< (ADC_CHER) Channel 10 Enable Position */
#define ADC_CHER_CH10_Msk                   (_U_(0x1) << ADC_CHER_CH10_Pos)                /**< (ADC_CHER) Channel 10 Enable Mask */
#define ADC_CHER_CH10                       ADC_CHER_CH10_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHER_CH10_Msk instead */
#define ADC_CHER_CH11_Pos                   11                                             /**< (ADC_CHER) Channel 11 Enable Position */
#define ADC_CHER_CH11_Msk                   (_U_(0x1) << ADC_CHER_CH11_Pos)                /**< (ADC_CHER) Channel 11 Enable Mask */
#define ADC_CHER_CH11                       ADC_CHER_CH11_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHER_CH11_Msk instead */
#define ADC_CHER_MASK                       _U_(0xFFF)                                     /**< \deprecated (ADC_CHER) Register MASK  (Use ADC_CHER_Msk instead)  */
#define ADC_CHER_Msk                        _U_(0xFFF)                                     /**< (ADC_CHER) Register Mask  */

#define ADC_CHER_CH_Pos                     0                                              /**< (ADC_CHER Position) Channel xx Enable */
#define ADC_CHER_CH_Msk                     (_U_(0xFFF) << ADC_CHER_CH_Pos)                /**< (ADC_CHER Mask) CH */
#define ADC_CHER_CH(value)                  (ADC_CHER_CH_Msk & ((value) << ADC_CHER_CH_Pos))  

/* -------- ADC_CHDR : (ADC Offset: 0x14) (/W 32) Channel Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CH0:1;                     /**< bit:      0  Channel 0 Disable                        */
    uint32_t CH1:1;                     /**< bit:      1  Channel 1 Disable                        */
    uint32_t CH2:1;                     /**< bit:      2  Channel 2 Disable                        */
    uint32_t CH3:1;                     /**< bit:      3  Channel 3 Disable                        */
    uint32_t CH4:1;                     /**< bit:      4  Channel 4 Disable                        */
    uint32_t CH5:1;                     /**< bit:      5  Channel 5 Disable                        */
    uint32_t CH6:1;                     /**< bit:      6  Channel 6 Disable                        */
    uint32_t CH7:1;                     /**< bit:      7  Channel 7 Disable                        */
    uint32_t CH8:1;                     /**< bit:      8  Channel 8 Disable                        */
    uint32_t CH9:1;                     /**< bit:      9  Channel 9 Disable                        */
    uint32_t CH10:1;                    /**< bit:     10  Channel 10 Disable                       */
    uint32_t CH11:1;                    /**< bit:     11  Channel 11 Disable                       */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t CH:12;                     /**< bit:  0..11  Channel xx Disable                       */
    uint32_t :20;                       /**< bit: 12..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} ADC_CHDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_CHDR_OFFSET                     (0x14)                                        /**<  (ADC_CHDR) Channel Disable Register  Offset */

#define ADC_CHDR_CH0_Pos                    0                                              /**< (ADC_CHDR) Channel 0 Disable Position */
#define ADC_CHDR_CH0_Msk                    (_U_(0x1) << ADC_CHDR_CH0_Pos)                 /**< (ADC_CHDR) Channel 0 Disable Mask */
#define ADC_CHDR_CH0                        ADC_CHDR_CH0_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHDR_CH0_Msk instead */
#define ADC_CHDR_CH1_Pos                    1                                              /**< (ADC_CHDR) Channel 1 Disable Position */
#define ADC_CHDR_CH1_Msk                    (_U_(0x1) << ADC_CHDR_CH1_Pos)                 /**< (ADC_CHDR) Channel 1 Disable Mask */
#define ADC_CHDR_CH1                        ADC_CHDR_CH1_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHDR_CH1_Msk instead */
#define ADC_CHDR_CH2_Pos                    2                                              /**< (ADC_CHDR) Channel 2 Disable Position */
#define ADC_CHDR_CH2_Msk                    (_U_(0x1) << ADC_CHDR_CH2_Pos)                 /**< (ADC_CHDR) Channel 2 Disable Mask */
#define ADC_CHDR_CH2                        ADC_CHDR_CH2_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHDR_CH2_Msk instead */
#define ADC_CHDR_CH3_Pos                    3                                              /**< (ADC_CHDR) Channel 3 Disable Position */
#define ADC_CHDR_CH3_Msk                    (_U_(0x1) << ADC_CHDR_CH3_Pos)                 /**< (ADC_CHDR) Channel 3 Disable Mask */
#define ADC_CHDR_CH3                        ADC_CHDR_CH3_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHDR_CH3_Msk instead */
#define ADC_CHDR_CH4_Pos                    4                                              /**< (ADC_CHDR) Channel 4 Disable Position */
#define ADC_CHDR_CH4_Msk                    (_U_(0x1) << ADC_CHDR_CH4_Pos)                 /**< (ADC_CHDR) Channel 4 Disable Mask */
#define ADC_CHDR_CH4                        ADC_CHDR_CH4_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHDR_CH4_Msk instead */
#define ADC_CHDR_CH5_Pos                    5                                              /**< (ADC_CHDR) Channel 5 Disable Position */
#define ADC_CHDR_CH5_Msk                    (_U_(0x1) << ADC_CHDR_CH5_Pos)                 /**< (ADC_CHDR) Channel 5 Disable Mask */
#define ADC_CHDR_CH5                        ADC_CHDR_CH5_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHDR_CH5_Msk instead */
#define ADC_CHDR_CH6_Pos                    6                                              /**< (ADC_CHDR) Channel 6 Disable Position */
#define ADC_CHDR_CH6_Msk                    (_U_(0x1) << ADC_CHDR_CH6_Pos)                 /**< (ADC_CHDR) Channel 6 Disable Mask */
#define ADC_CHDR_CH6                        ADC_CHDR_CH6_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHDR_CH6_Msk instead */
#define ADC_CHDR_CH7_Pos                    7                                              /**< (ADC_CHDR) Channel 7 Disable Position */
#define ADC_CHDR_CH7_Msk                    (_U_(0x1) << ADC_CHDR_CH7_Pos)                 /**< (ADC_CHDR) Channel 7 Disable Mask */
#define ADC_CHDR_CH7                        ADC_CHDR_CH7_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHDR_CH7_Msk instead */
#define ADC_CHDR_CH8_Pos                    8                                              /**< (ADC_CHDR) Channel 8 Disable Position */
#define ADC_CHDR_CH8_Msk                    (_U_(0x1) << ADC_CHDR_CH8_Pos)                 /**< (ADC_CHDR) Channel 8 Disable Mask */
#define ADC_CHDR_CH8                        ADC_CHDR_CH8_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHDR_CH8_Msk instead */
#define ADC_CHDR_CH9_Pos                    9                                              /**< (ADC_CHDR) Channel 9 Disable Position */
#define ADC_CHDR_CH9_Msk                    (_U_(0x1) << ADC_CHDR_CH9_Pos)                 /**< (ADC_CHDR) Channel 9 Disable Mask */
#define ADC_CHDR_CH9                        ADC_CHDR_CH9_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHDR_CH9_Msk instead */
#define ADC_CHDR_CH10_Pos                   10                                             /**< (ADC_CHDR) Channel 10 Disable Position */
#define ADC_CHDR_CH10_Msk                   (_U_(0x1) << ADC_CHDR_CH10_Pos)                /**< (ADC_CHDR) Channel 10 Disable Mask */
#define ADC_CHDR_CH10                       ADC_CHDR_CH10_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHDR_CH10_Msk instead */
#define ADC_CHDR_CH11_Pos                   11                                             /**< (ADC_CHDR) Channel 11 Disable Position */
#define ADC_CHDR_CH11_Msk                   (_U_(0x1) << ADC_CHDR_CH11_Pos)                /**< (ADC_CHDR) Channel 11 Disable Mask */
#define ADC_CHDR_CH11                       ADC_CHDR_CH11_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHDR_CH11_Msk instead */
#define ADC_CHDR_MASK                       _U_(0xFFF)                                     /**< \deprecated (ADC_CHDR) Register MASK  (Use ADC_CHDR_Msk instead)  */
#define ADC_CHDR_Msk                        _U_(0xFFF)                                     /**< (ADC_CHDR) Register Mask  */

#define ADC_CHDR_CH_Pos                     0                                              /**< (ADC_CHDR Position) Channel xx Disable */
#define ADC_CHDR_CH_Msk                     (_U_(0xFFF) << ADC_CHDR_CH_Pos)                /**< (ADC_CHDR Mask) CH */
#define ADC_CHDR_CH(value)                  (ADC_CHDR_CH_Msk & ((value) << ADC_CHDR_CH_Pos))  

/* -------- ADC_CHSR : (ADC Offset: 0x18) (R/ 32) Channel Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CH0:1;                     /**< bit:      0  Channel 0 Status                         */
    uint32_t CH1:1;                     /**< bit:      1  Channel 1 Status                         */
    uint32_t CH2:1;                     /**< bit:      2  Channel 2 Status                         */
    uint32_t CH3:1;                     /**< bit:      3  Channel 3 Status                         */
    uint32_t CH4:1;                     /**< bit:      4  Channel 4 Status                         */
    uint32_t CH5:1;                     /**< bit:      5  Channel 5 Status                         */
    uint32_t CH6:1;                     /**< bit:      6  Channel 6 Status                         */
    uint32_t CH7:1;                     /**< bit:      7  Channel 7 Status                         */
    uint32_t CH8:1;                     /**< bit:      8  Channel 8 Status                         */
    uint32_t CH9:1;                     /**< bit:      9  Channel 9 Status                         */
    uint32_t CH10:1;                    /**< bit:     10  Channel 10 Status                        */
    uint32_t CH11:1;                    /**< bit:     11  Channel 11 Status                        */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t CH:12;                     /**< bit:  0..11  Channel xx Status                        */
    uint32_t :20;                       /**< bit: 12..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} ADC_CHSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_CHSR_OFFSET                     (0x18)                                        /**<  (ADC_CHSR) Channel Status Register  Offset */

#define ADC_CHSR_CH0_Pos                    0                                              /**< (ADC_CHSR) Channel 0 Status Position */
#define ADC_CHSR_CH0_Msk                    (_U_(0x1) << ADC_CHSR_CH0_Pos)                 /**< (ADC_CHSR) Channel 0 Status Mask */
#define ADC_CHSR_CH0                        ADC_CHSR_CH0_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHSR_CH0_Msk instead */
#define ADC_CHSR_CH1_Pos                    1                                              /**< (ADC_CHSR) Channel 1 Status Position */
#define ADC_CHSR_CH1_Msk                    (_U_(0x1) << ADC_CHSR_CH1_Pos)                 /**< (ADC_CHSR) Channel 1 Status Mask */
#define ADC_CHSR_CH1                        ADC_CHSR_CH1_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHSR_CH1_Msk instead */
#define ADC_CHSR_CH2_Pos                    2                                              /**< (ADC_CHSR) Channel 2 Status Position */
#define ADC_CHSR_CH2_Msk                    (_U_(0x1) << ADC_CHSR_CH2_Pos)                 /**< (ADC_CHSR) Channel 2 Status Mask */
#define ADC_CHSR_CH2                        ADC_CHSR_CH2_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHSR_CH2_Msk instead */
#define ADC_CHSR_CH3_Pos                    3                                              /**< (ADC_CHSR) Channel 3 Status Position */
#define ADC_CHSR_CH3_Msk                    (_U_(0x1) << ADC_CHSR_CH3_Pos)                 /**< (ADC_CHSR) Channel 3 Status Mask */
#define ADC_CHSR_CH3                        ADC_CHSR_CH3_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHSR_CH3_Msk instead */
#define ADC_CHSR_CH4_Pos                    4                                              /**< (ADC_CHSR) Channel 4 Status Position */
#define ADC_CHSR_CH4_Msk                    (_U_(0x1) << ADC_CHSR_CH4_Pos)                 /**< (ADC_CHSR) Channel 4 Status Mask */
#define ADC_CHSR_CH4                        ADC_CHSR_CH4_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHSR_CH4_Msk instead */
#define ADC_CHSR_CH5_Pos                    5                                              /**< (ADC_CHSR) Channel 5 Status Position */
#define ADC_CHSR_CH5_Msk                    (_U_(0x1) << ADC_CHSR_CH5_Pos)                 /**< (ADC_CHSR) Channel 5 Status Mask */
#define ADC_CHSR_CH5                        ADC_CHSR_CH5_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHSR_CH5_Msk instead */
#define ADC_CHSR_CH6_Pos                    6                                              /**< (ADC_CHSR) Channel 6 Status Position */
#define ADC_CHSR_CH6_Msk                    (_U_(0x1) << ADC_CHSR_CH6_Pos)                 /**< (ADC_CHSR) Channel 6 Status Mask */
#define ADC_CHSR_CH6                        ADC_CHSR_CH6_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHSR_CH6_Msk instead */
#define ADC_CHSR_CH7_Pos                    7                                              /**< (ADC_CHSR) Channel 7 Status Position */
#define ADC_CHSR_CH7_Msk                    (_U_(0x1) << ADC_CHSR_CH7_Pos)                 /**< (ADC_CHSR) Channel 7 Status Mask */
#define ADC_CHSR_CH7                        ADC_CHSR_CH7_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHSR_CH7_Msk instead */
#define ADC_CHSR_CH8_Pos                    8                                              /**< (ADC_CHSR) Channel 8 Status Position */
#define ADC_CHSR_CH8_Msk                    (_U_(0x1) << ADC_CHSR_CH8_Pos)                 /**< (ADC_CHSR) Channel 8 Status Mask */
#define ADC_CHSR_CH8                        ADC_CHSR_CH8_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHSR_CH8_Msk instead */
#define ADC_CHSR_CH9_Pos                    9                                              /**< (ADC_CHSR) Channel 9 Status Position */
#define ADC_CHSR_CH9_Msk                    (_U_(0x1) << ADC_CHSR_CH9_Pos)                 /**< (ADC_CHSR) Channel 9 Status Mask */
#define ADC_CHSR_CH9                        ADC_CHSR_CH9_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHSR_CH9_Msk instead */
#define ADC_CHSR_CH10_Pos                   10                                             /**< (ADC_CHSR) Channel 10 Status Position */
#define ADC_CHSR_CH10_Msk                   (_U_(0x1) << ADC_CHSR_CH10_Pos)                /**< (ADC_CHSR) Channel 10 Status Mask */
#define ADC_CHSR_CH10                       ADC_CHSR_CH10_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHSR_CH10_Msk instead */
#define ADC_CHSR_CH11_Pos                   11                                             /**< (ADC_CHSR) Channel 11 Status Position */
#define ADC_CHSR_CH11_Msk                   (_U_(0x1) << ADC_CHSR_CH11_Pos)                /**< (ADC_CHSR) Channel 11 Status Mask */
#define ADC_CHSR_CH11                       ADC_CHSR_CH11_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CHSR_CH11_Msk instead */
#define ADC_CHSR_MASK                       _U_(0xFFF)                                     /**< \deprecated (ADC_CHSR) Register MASK  (Use ADC_CHSR_Msk instead)  */
#define ADC_CHSR_Msk                        _U_(0xFFF)                                     /**< (ADC_CHSR) Register Mask  */

#define ADC_CHSR_CH_Pos                     0                                              /**< (ADC_CHSR Position) Channel xx Status */
#define ADC_CHSR_CH_Msk                     (_U_(0xFFF) << ADC_CHSR_CH_Pos)                /**< (ADC_CHSR Mask) CH */
#define ADC_CHSR_CH(value)                  (ADC_CHSR_CH_Msk & ((value) << ADC_CHSR_CH_Pos))  

/* -------- ADC_LCDR : (ADC Offset: 0x20) (R/ 32) Last Converted Data Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t LDATA:16;                  /**< bit:  0..15  Last Data Converted                      */
    uint32_t :8;                        /**< bit: 16..23  Reserved */
    uint32_t CHNBOSR:5;                 /**< bit: 24..28  Channel Number in Oversampling Mode      */
    uint32_t :3;                        /**< bit: 29..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ADC_LCDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_LCDR_OFFSET                     (0x20)                                        /**<  (ADC_LCDR) Last Converted Data Register  Offset */

#define ADC_LCDR_LDATA_Pos                  0                                              /**< (ADC_LCDR) Last Data Converted Position */
#define ADC_LCDR_LDATA_Msk                  (_U_(0xFFFF) << ADC_LCDR_LDATA_Pos)            /**< (ADC_LCDR) Last Data Converted Mask */
#define ADC_LCDR_LDATA(value)               (ADC_LCDR_LDATA_Msk & ((value) << ADC_LCDR_LDATA_Pos))
#define ADC_LCDR_CHNBOSR_Pos                24                                             /**< (ADC_LCDR) Channel Number in Oversampling Mode Position */
#define ADC_LCDR_CHNBOSR_Msk                (_U_(0x1F) << ADC_LCDR_CHNBOSR_Pos)            /**< (ADC_LCDR) Channel Number in Oversampling Mode Mask */
#define ADC_LCDR_CHNBOSR(value)             (ADC_LCDR_CHNBOSR_Msk & ((value) << ADC_LCDR_CHNBOSR_Pos))
#define ADC_LCDR_MASK                       _U_(0x1F00FFFF)                                /**< \deprecated (ADC_LCDR) Register MASK  (Use ADC_LCDR_Msk instead)  */
#define ADC_LCDR_Msk                        _U_(0x1F00FFFF)                                /**< (ADC_LCDR) Register Mask  */


/* -------- ADC_IER : (ADC Offset: 0x24) (/W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t EOC0:1;                    /**< bit:      0  End of Conversion Interrupt Enable 0     */
    uint32_t EOC1:1;                    /**< bit:      1  End of Conversion Interrupt Enable 1     */
    uint32_t EOC2:1;                    /**< bit:      2  End of Conversion Interrupt Enable 2     */
    uint32_t EOC3:1;                    /**< bit:      3  End of Conversion Interrupt Enable 3     */
    uint32_t EOC4:1;                    /**< bit:      4  End of Conversion Interrupt Enable 4     */
    uint32_t EOC5:1;                    /**< bit:      5  End of Conversion Interrupt Enable 5     */
    uint32_t EOC6:1;                    /**< bit:      6  End of Conversion Interrupt Enable 6     */
    uint32_t EOC7:1;                    /**< bit:      7  End of Conversion Interrupt Enable 7     */
    uint32_t EOC8:1;                    /**< bit:      8  End of Conversion Interrupt Enable 8     */
    uint32_t EOC9:1;                    /**< bit:      9  End of Conversion Interrupt Enable 9     */
    uint32_t EOC10:1;                   /**< bit:     10  End of Conversion Interrupt Enable 10    */
    uint32_t EOC11:1;                   /**< bit:     11  End of Conversion Interrupt Enable 11    */
    uint32_t :7;                        /**< bit: 12..18  Reserved */
    uint32_t LCCHG:1;                   /**< bit:     19  Last Channel Change Interrupt Enable     */
    uint32_t XRDY:1;                    /**< bit:     20  Touchscreen Measure XPOS Ready Interrupt Enable */
    uint32_t YRDY:1;                    /**< bit:     21  Touchscreen Measure YPOS Ready Interrupt Enable */
    uint32_t PRDY:1;                    /**< bit:     22  Touchscreen Measure Pressure Ready Interrupt Enable */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t DRDY:1;                    /**< bit:     24  Data Ready Interrupt Enable              */
    uint32_t GOVRE:1;                   /**< bit:     25  General Overrun Error Interrupt Enable   */
    uint32_t COMPE:1;                   /**< bit:     26  Comparison Event Interrupt Enable        */
    uint32_t :2;                        /**< bit: 27..28  Reserved */
    uint32_t PEN:1;                     /**< bit:     29  Pen Contact Interrupt Enable             */
    uint32_t NOPEN:1;                   /**< bit:     30  No Pen Contact Interrupt Enable          */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t EOC:12;                    /**< bit:  0..11  End of Conversion Interrupt Enable x     */
    uint32_t :20;                       /**< bit: 12..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} ADC_IER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_IER_OFFSET                      (0x24)                                        /**<  (ADC_IER) Interrupt Enable Register  Offset */

#define ADC_IER_EOC0_Pos                    0                                              /**< (ADC_IER) End of Conversion Interrupt Enable 0 Position */
#define ADC_IER_EOC0_Msk                    (_U_(0x1) << ADC_IER_EOC0_Pos)                 /**< (ADC_IER) End of Conversion Interrupt Enable 0 Mask */
#define ADC_IER_EOC0                        ADC_IER_EOC0_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IER_EOC0_Msk instead */
#define ADC_IER_EOC1_Pos                    1                                              /**< (ADC_IER) End of Conversion Interrupt Enable 1 Position */
#define ADC_IER_EOC1_Msk                    (_U_(0x1) << ADC_IER_EOC1_Pos)                 /**< (ADC_IER) End of Conversion Interrupt Enable 1 Mask */
#define ADC_IER_EOC1                        ADC_IER_EOC1_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IER_EOC1_Msk instead */
#define ADC_IER_EOC2_Pos                    2                                              /**< (ADC_IER) End of Conversion Interrupt Enable 2 Position */
#define ADC_IER_EOC2_Msk                    (_U_(0x1) << ADC_IER_EOC2_Pos)                 /**< (ADC_IER) End of Conversion Interrupt Enable 2 Mask */
#define ADC_IER_EOC2                        ADC_IER_EOC2_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IER_EOC2_Msk instead */
#define ADC_IER_EOC3_Pos                    3                                              /**< (ADC_IER) End of Conversion Interrupt Enable 3 Position */
#define ADC_IER_EOC3_Msk                    (_U_(0x1) << ADC_IER_EOC3_Pos)                 /**< (ADC_IER) End of Conversion Interrupt Enable 3 Mask */
#define ADC_IER_EOC3                        ADC_IER_EOC3_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IER_EOC3_Msk instead */
#define ADC_IER_EOC4_Pos                    4                                              /**< (ADC_IER) End of Conversion Interrupt Enable 4 Position */
#define ADC_IER_EOC4_Msk                    (_U_(0x1) << ADC_IER_EOC4_Pos)                 /**< (ADC_IER) End of Conversion Interrupt Enable 4 Mask */
#define ADC_IER_EOC4                        ADC_IER_EOC4_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IER_EOC4_Msk instead */
#define ADC_IER_EOC5_Pos                    5                                              /**< (ADC_IER) End of Conversion Interrupt Enable 5 Position */
#define ADC_IER_EOC5_Msk                    (_U_(0x1) << ADC_IER_EOC5_Pos)                 /**< (ADC_IER) End of Conversion Interrupt Enable 5 Mask */
#define ADC_IER_EOC5                        ADC_IER_EOC5_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IER_EOC5_Msk instead */
#define ADC_IER_EOC6_Pos                    6                                              /**< (ADC_IER) End of Conversion Interrupt Enable 6 Position */
#define ADC_IER_EOC6_Msk                    (_U_(0x1) << ADC_IER_EOC6_Pos)                 /**< (ADC_IER) End of Conversion Interrupt Enable 6 Mask */
#define ADC_IER_EOC6                        ADC_IER_EOC6_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IER_EOC6_Msk instead */
#define ADC_IER_EOC7_Pos                    7                                              /**< (ADC_IER) End of Conversion Interrupt Enable 7 Position */
#define ADC_IER_EOC7_Msk                    (_U_(0x1) << ADC_IER_EOC7_Pos)                 /**< (ADC_IER) End of Conversion Interrupt Enable 7 Mask */
#define ADC_IER_EOC7                        ADC_IER_EOC7_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IER_EOC7_Msk instead */
#define ADC_IER_EOC8_Pos                    8                                              /**< (ADC_IER) End of Conversion Interrupt Enable 8 Position */
#define ADC_IER_EOC8_Msk                    (_U_(0x1) << ADC_IER_EOC8_Pos)                 /**< (ADC_IER) End of Conversion Interrupt Enable 8 Mask */
#define ADC_IER_EOC8                        ADC_IER_EOC8_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IER_EOC8_Msk instead */
#define ADC_IER_EOC9_Pos                    9                                              /**< (ADC_IER) End of Conversion Interrupt Enable 9 Position */
#define ADC_IER_EOC9_Msk                    (_U_(0x1) << ADC_IER_EOC9_Pos)                 /**< (ADC_IER) End of Conversion Interrupt Enable 9 Mask */
#define ADC_IER_EOC9                        ADC_IER_EOC9_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IER_EOC9_Msk instead */
#define ADC_IER_EOC10_Pos                   10                                             /**< (ADC_IER) End of Conversion Interrupt Enable 10 Position */
#define ADC_IER_EOC10_Msk                   (_U_(0x1) << ADC_IER_EOC10_Pos)                /**< (ADC_IER) End of Conversion Interrupt Enable 10 Mask */
#define ADC_IER_EOC10                       ADC_IER_EOC10_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IER_EOC10_Msk instead */
#define ADC_IER_EOC11_Pos                   11                                             /**< (ADC_IER) End of Conversion Interrupt Enable 11 Position */
#define ADC_IER_EOC11_Msk                   (_U_(0x1) << ADC_IER_EOC11_Pos)                /**< (ADC_IER) End of Conversion Interrupt Enable 11 Mask */
#define ADC_IER_EOC11                       ADC_IER_EOC11_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IER_EOC11_Msk instead */
#define ADC_IER_LCCHG_Pos                   19                                             /**< (ADC_IER) Last Channel Change Interrupt Enable Position */
#define ADC_IER_LCCHG_Msk                   (_U_(0x1) << ADC_IER_LCCHG_Pos)                /**< (ADC_IER) Last Channel Change Interrupt Enable Mask */
#define ADC_IER_LCCHG                       ADC_IER_LCCHG_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IER_LCCHG_Msk instead */
#define ADC_IER_XRDY_Pos                    20                                             /**< (ADC_IER) Touchscreen Measure XPOS Ready Interrupt Enable Position */
#define ADC_IER_XRDY_Msk                    (_U_(0x1) << ADC_IER_XRDY_Pos)                 /**< (ADC_IER) Touchscreen Measure XPOS Ready Interrupt Enable Mask */
#define ADC_IER_XRDY                        ADC_IER_XRDY_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IER_XRDY_Msk instead */
#define ADC_IER_YRDY_Pos                    21                                             /**< (ADC_IER) Touchscreen Measure YPOS Ready Interrupt Enable Position */
#define ADC_IER_YRDY_Msk                    (_U_(0x1) << ADC_IER_YRDY_Pos)                 /**< (ADC_IER) Touchscreen Measure YPOS Ready Interrupt Enable Mask */
#define ADC_IER_YRDY                        ADC_IER_YRDY_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IER_YRDY_Msk instead */
#define ADC_IER_PRDY_Pos                    22                                             /**< (ADC_IER) Touchscreen Measure Pressure Ready Interrupt Enable Position */
#define ADC_IER_PRDY_Msk                    (_U_(0x1) << ADC_IER_PRDY_Pos)                 /**< (ADC_IER) Touchscreen Measure Pressure Ready Interrupt Enable Mask */
#define ADC_IER_PRDY                        ADC_IER_PRDY_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IER_PRDY_Msk instead */
#define ADC_IER_DRDY_Pos                    24                                             /**< (ADC_IER) Data Ready Interrupt Enable Position */
#define ADC_IER_DRDY_Msk                    (_U_(0x1) << ADC_IER_DRDY_Pos)                 /**< (ADC_IER) Data Ready Interrupt Enable Mask */
#define ADC_IER_DRDY                        ADC_IER_DRDY_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IER_DRDY_Msk instead */
#define ADC_IER_GOVRE_Pos                   25                                             /**< (ADC_IER) General Overrun Error Interrupt Enable Position */
#define ADC_IER_GOVRE_Msk                   (_U_(0x1) << ADC_IER_GOVRE_Pos)                /**< (ADC_IER) General Overrun Error Interrupt Enable Mask */
#define ADC_IER_GOVRE                       ADC_IER_GOVRE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IER_GOVRE_Msk instead */
#define ADC_IER_COMPE_Pos                   26                                             /**< (ADC_IER) Comparison Event Interrupt Enable Position */
#define ADC_IER_COMPE_Msk                   (_U_(0x1) << ADC_IER_COMPE_Pos)                /**< (ADC_IER) Comparison Event Interrupt Enable Mask */
#define ADC_IER_COMPE                       ADC_IER_COMPE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IER_COMPE_Msk instead */
#define ADC_IER_PEN_Pos                     29                                             /**< (ADC_IER) Pen Contact Interrupt Enable Position */
#define ADC_IER_PEN_Msk                     (_U_(0x1) << ADC_IER_PEN_Pos)                  /**< (ADC_IER) Pen Contact Interrupt Enable Mask */
#define ADC_IER_PEN                         ADC_IER_PEN_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IER_PEN_Msk instead */
#define ADC_IER_NOPEN_Pos                   30                                             /**< (ADC_IER) No Pen Contact Interrupt Enable Position */
#define ADC_IER_NOPEN_Msk                   (_U_(0x1) << ADC_IER_NOPEN_Pos)                /**< (ADC_IER) No Pen Contact Interrupt Enable Mask */
#define ADC_IER_NOPEN                       ADC_IER_NOPEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IER_NOPEN_Msk instead */
#define ADC_IER_MASK                        _U_(0x67780FFF)                                /**< \deprecated (ADC_IER) Register MASK  (Use ADC_IER_Msk instead)  */
#define ADC_IER_Msk                         _U_(0x67780FFF)                                /**< (ADC_IER) Register Mask  */

#define ADC_IER_EOC_Pos                     0                                              /**< (ADC_IER Position) End of Conversion Interrupt Enable x */
#define ADC_IER_EOC_Msk                     (_U_(0xFFF) << ADC_IER_EOC_Pos)                /**< (ADC_IER Mask) EOC */
#define ADC_IER_EOC(value)                  (ADC_IER_EOC_Msk & ((value) << ADC_IER_EOC_Pos))  

/* -------- ADC_IDR : (ADC Offset: 0x28) (/W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t EOC0:1;                    /**< bit:      0  End of Conversion Interrupt Disable 0    */
    uint32_t EOC1:1;                    /**< bit:      1  End of Conversion Interrupt Disable 1    */
    uint32_t EOC2:1;                    /**< bit:      2  End of Conversion Interrupt Disable 2    */
    uint32_t EOC3:1;                    /**< bit:      3  End of Conversion Interrupt Disable 3    */
    uint32_t EOC4:1;                    /**< bit:      4  End of Conversion Interrupt Disable 4    */
    uint32_t EOC5:1;                    /**< bit:      5  End of Conversion Interrupt Disable 5    */
    uint32_t EOC6:1;                    /**< bit:      6  End of Conversion Interrupt Disable 6    */
    uint32_t EOC7:1;                    /**< bit:      7  End of Conversion Interrupt Disable 7    */
    uint32_t EOC8:1;                    /**< bit:      8  End of Conversion Interrupt Disable 8    */
    uint32_t EOC9:1;                    /**< bit:      9  End of Conversion Interrupt Disable 9    */
    uint32_t EOC10:1;                   /**< bit:     10  End of Conversion Interrupt Disable 10   */
    uint32_t EOC11:1;                   /**< bit:     11  End of Conversion Interrupt Disable 11   */
    uint32_t :7;                        /**< bit: 12..18  Reserved */
    uint32_t LCCHG:1;                   /**< bit:     19  Last Channel Change Interrupt Disable    */
    uint32_t XRDY:1;                    /**< bit:     20  Touchscreen Measure XPOS Ready Interrupt Disable */
    uint32_t YRDY:1;                    /**< bit:     21  Touchscreen Measure YPOS Ready Interrupt Disable */
    uint32_t PRDY:1;                    /**< bit:     22  Touchscreen Measure Pressure Ready Interrupt Disable */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t DRDY:1;                    /**< bit:     24  Data Ready Interrupt Disable             */
    uint32_t GOVRE:1;                   /**< bit:     25  General Overrun Error Interrupt Disable  */
    uint32_t COMPE:1;                   /**< bit:     26  Comparison Event Interrupt Disable       */
    uint32_t :2;                        /**< bit: 27..28  Reserved */
    uint32_t PEN:1;                     /**< bit:     29  Pen Contact Interrupt Disable            */
    uint32_t NOPEN:1;                   /**< bit:     30  No Pen Contact Interrupt Disable         */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t EOC:12;                    /**< bit:  0..11  End of Conversion Interrupt Disable x    */
    uint32_t :20;                       /**< bit: 12..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} ADC_IDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_IDR_OFFSET                      (0x28)                                        /**<  (ADC_IDR) Interrupt Disable Register  Offset */

#define ADC_IDR_EOC0_Pos                    0                                              /**< (ADC_IDR) End of Conversion Interrupt Disable 0 Position */
#define ADC_IDR_EOC0_Msk                    (_U_(0x1) << ADC_IDR_EOC0_Pos)                 /**< (ADC_IDR) End of Conversion Interrupt Disable 0 Mask */
#define ADC_IDR_EOC0                        ADC_IDR_EOC0_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IDR_EOC0_Msk instead */
#define ADC_IDR_EOC1_Pos                    1                                              /**< (ADC_IDR) End of Conversion Interrupt Disable 1 Position */
#define ADC_IDR_EOC1_Msk                    (_U_(0x1) << ADC_IDR_EOC1_Pos)                 /**< (ADC_IDR) End of Conversion Interrupt Disable 1 Mask */
#define ADC_IDR_EOC1                        ADC_IDR_EOC1_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IDR_EOC1_Msk instead */
#define ADC_IDR_EOC2_Pos                    2                                              /**< (ADC_IDR) End of Conversion Interrupt Disable 2 Position */
#define ADC_IDR_EOC2_Msk                    (_U_(0x1) << ADC_IDR_EOC2_Pos)                 /**< (ADC_IDR) End of Conversion Interrupt Disable 2 Mask */
#define ADC_IDR_EOC2                        ADC_IDR_EOC2_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IDR_EOC2_Msk instead */
#define ADC_IDR_EOC3_Pos                    3                                              /**< (ADC_IDR) End of Conversion Interrupt Disable 3 Position */
#define ADC_IDR_EOC3_Msk                    (_U_(0x1) << ADC_IDR_EOC3_Pos)                 /**< (ADC_IDR) End of Conversion Interrupt Disable 3 Mask */
#define ADC_IDR_EOC3                        ADC_IDR_EOC3_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IDR_EOC3_Msk instead */
#define ADC_IDR_EOC4_Pos                    4                                              /**< (ADC_IDR) End of Conversion Interrupt Disable 4 Position */
#define ADC_IDR_EOC4_Msk                    (_U_(0x1) << ADC_IDR_EOC4_Pos)                 /**< (ADC_IDR) End of Conversion Interrupt Disable 4 Mask */
#define ADC_IDR_EOC4                        ADC_IDR_EOC4_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IDR_EOC4_Msk instead */
#define ADC_IDR_EOC5_Pos                    5                                              /**< (ADC_IDR) End of Conversion Interrupt Disable 5 Position */
#define ADC_IDR_EOC5_Msk                    (_U_(0x1) << ADC_IDR_EOC5_Pos)                 /**< (ADC_IDR) End of Conversion Interrupt Disable 5 Mask */
#define ADC_IDR_EOC5                        ADC_IDR_EOC5_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IDR_EOC5_Msk instead */
#define ADC_IDR_EOC6_Pos                    6                                              /**< (ADC_IDR) End of Conversion Interrupt Disable 6 Position */
#define ADC_IDR_EOC6_Msk                    (_U_(0x1) << ADC_IDR_EOC6_Pos)                 /**< (ADC_IDR) End of Conversion Interrupt Disable 6 Mask */
#define ADC_IDR_EOC6                        ADC_IDR_EOC6_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IDR_EOC6_Msk instead */
#define ADC_IDR_EOC7_Pos                    7                                              /**< (ADC_IDR) End of Conversion Interrupt Disable 7 Position */
#define ADC_IDR_EOC7_Msk                    (_U_(0x1) << ADC_IDR_EOC7_Pos)                 /**< (ADC_IDR) End of Conversion Interrupt Disable 7 Mask */
#define ADC_IDR_EOC7                        ADC_IDR_EOC7_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IDR_EOC7_Msk instead */
#define ADC_IDR_EOC8_Pos                    8                                              /**< (ADC_IDR) End of Conversion Interrupt Disable 8 Position */
#define ADC_IDR_EOC8_Msk                    (_U_(0x1) << ADC_IDR_EOC8_Pos)                 /**< (ADC_IDR) End of Conversion Interrupt Disable 8 Mask */
#define ADC_IDR_EOC8                        ADC_IDR_EOC8_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IDR_EOC8_Msk instead */
#define ADC_IDR_EOC9_Pos                    9                                              /**< (ADC_IDR) End of Conversion Interrupt Disable 9 Position */
#define ADC_IDR_EOC9_Msk                    (_U_(0x1) << ADC_IDR_EOC9_Pos)                 /**< (ADC_IDR) End of Conversion Interrupt Disable 9 Mask */
#define ADC_IDR_EOC9                        ADC_IDR_EOC9_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IDR_EOC9_Msk instead */
#define ADC_IDR_EOC10_Pos                   10                                             /**< (ADC_IDR) End of Conversion Interrupt Disable 10 Position */
#define ADC_IDR_EOC10_Msk                   (_U_(0x1) << ADC_IDR_EOC10_Pos)                /**< (ADC_IDR) End of Conversion Interrupt Disable 10 Mask */
#define ADC_IDR_EOC10                       ADC_IDR_EOC10_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IDR_EOC10_Msk instead */
#define ADC_IDR_EOC11_Pos                   11                                             /**< (ADC_IDR) End of Conversion Interrupt Disable 11 Position */
#define ADC_IDR_EOC11_Msk                   (_U_(0x1) << ADC_IDR_EOC11_Pos)                /**< (ADC_IDR) End of Conversion Interrupt Disable 11 Mask */
#define ADC_IDR_EOC11                       ADC_IDR_EOC11_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IDR_EOC11_Msk instead */
#define ADC_IDR_LCCHG_Pos                   19                                             /**< (ADC_IDR) Last Channel Change Interrupt Disable Position */
#define ADC_IDR_LCCHG_Msk                   (_U_(0x1) << ADC_IDR_LCCHG_Pos)                /**< (ADC_IDR) Last Channel Change Interrupt Disable Mask */
#define ADC_IDR_LCCHG                       ADC_IDR_LCCHG_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IDR_LCCHG_Msk instead */
#define ADC_IDR_XRDY_Pos                    20                                             /**< (ADC_IDR) Touchscreen Measure XPOS Ready Interrupt Disable Position */
#define ADC_IDR_XRDY_Msk                    (_U_(0x1) << ADC_IDR_XRDY_Pos)                 /**< (ADC_IDR) Touchscreen Measure XPOS Ready Interrupt Disable Mask */
#define ADC_IDR_XRDY                        ADC_IDR_XRDY_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IDR_XRDY_Msk instead */
#define ADC_IDR_YRDY_Pos                    21                                             /**< (ADC_IDR) Touchscreen Measure YPOS Ready Interrupt Disable Position */
#define ADC_IDR_YRDY_Msk                    (_U_(0x1) << ADC_IDR_YRDY_Pos)                 /**< (ADC_IDR) Touchscreen Measure YPOS Ready Interrupt Disable Mask */
#define ADC_IDR_YRDY                        ADC_IDR_YRDY_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IDR_YRDY_Msk instead */
#define ADC_IDR_PRDY_Pos                    22                                             /**< (ADC_IDR) Touchscreen Measure Pressure Ready Interrupt Disable Position */
#define ADC_IDR_PRDY_Msk                    (_U_(0x1) << ADC_IDR_PRDY_Pos)                 /**< (ADC_IDR) Touchscreen Measure Pressure Ready Interrupt Disable Mask */
#define ADC_IDR_PRDY                        ADC_IDR_PRDY_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IDR_PRDY_Msk instead */
#define ADC_IDR_DRDY_Pos                    24                                             /**< (ADC_IDR) Data Ready Interrupt Disable Position */
#define ADC_IDR_DRDY_Msk                    (_U_(0x1) << ADC_IDR_DRDY_Pos)                 /**< (ADC_IDR) Data Ready Interrupt Disable Mask */
#define ADC_IDR_DRDY                        ADC_IDR_DRDY_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IDR_DRDY_Msk instead */
#define ADC_IDR_GOVRE_Pos                   25                                             /**< (ADC_IDR) General Overrun Error Interrupt Disable Position */
#define ADC_IDR_GOVRE_Msk                   (_U_(0x1) << ADC_IDR_GOVRE_Pos)                /**< (ADC_IDR) General Overrun Error Interrupt Disable Mask */
#define ADC_IDR_GOVRE                       ADC_IDR_GOVRE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IDR_GOVRE_Msk instead */
#define ADC_IDR_COMPE_Pos                   26                                             /**< (ADC_IDR) Comparison Event Interrupt Disable Position */
#define ADC_IDR_COMPE_Msk                   (_U_(0x1) << ADC_IDR_COMPE_Pos)                /**< (ADC_IDR) Comparison Event Interrupt Disable Mask */
#define ADC_IDR_COMPE                       ADC_IDR_COMPE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IDR_COMPE_Msk instead */
#define ADC_IDR_PEN_Pos                     29                                             /**< (ADC_IDR) Pen Contact Interrupt Disable Position */
#define ADC_IDR_PEN_Msk                     (_U_(0x1) << ADC_IDR_PEN_Pos)                  /**< (ADC_IDR) Pen Contact Interrupt Disable Mask */
#define ADC_IDR_PEN                         ADC_IDR_PEN_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IDR_PEN_Msk instead */
#define ADC_IDR_NOPEN_Pos                   30                                             /**< (ADC_IDR) No Pen Contact Interrupt Disable Position */
#define ADC_IDR_NOPEN_Msk                   (_U_(0x1) << ADC_IDR_NOPEN_Pos)                /**< (ADC_IDR) No Pen Contact Interrupt Disable Mask */
#define ADC_IDR_NOPEN                       ADC_IDR_NOPEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IDR_NOPEN_Msk instead */
#define ADC_IDR_MASK                        _U_(0x67780FFF)                                /**< \deprecated (ADC_IDR) Register MASK  (Use ADC_IDR_Msk instead)  */
#define ADC_IDR_Msk                         _U_(0x67780FFF)                                /**< (ADC_IDR) Register Mask  */

#define ADC_IDR_EOC_Pos                     0                                              /**< (ADC_IDR Position) End of Conversion Interrupt Disable x */
#define ADC_IDR_EOC_Msk                     (_U_(0xFFF) << ADC_IDR_EOC_Pos)                /**< (ADC_IDR Mask) EOC */
#define ADC_IDR_EOC(value)                  (ADC_IDR_EOC_Msk & ((value) << ADC_IDR_EOC_Pos))  

/* -------- ADC_IMR : (ADC Offset: 0x2c) (R/ 32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t EOC0:1;                    /**< bit:      0  End of Conversion Interrupt Mask 0       */
    uint32_t EOC1:1;                    /**< bit:      1  End of Conversion Interrupt Mask 1       */
    uint32_t EOC2:1;                    /**< bit:      2  End of Conversion Interrupt Mask 2       */
    uint32_t EOC3:1;                    /**< bit:      3  End of Conversion Interrupt Mask 3       */
    uint32_t EOC4:1;                    /**< bit:      4  End of Conversion Interrupt Mask 4       */
    uint32_t EOC5:1;                    /**< bit:      5  End of Conversion Interrupt Mask 5       */
    uint32_t EOC6:1;                    /**< bit:      6  End of Conversion Interrupt Mask 6       */
    uint32_t EOC7:1;                    /**< bit:      7  End of Conversion Interrupt Mask 7       */
    uint32_t EOC8:1;                    /**< bit:      8  End of Conversion Interrupt Mask 8       */
    uint32_t EOC9:1;                    /**< bit:      9  End of Conversion Interrupt Mask 9       */
    uint32_t EOC10:1;                   /**< bit:     10  End of Conversion Interrupt Mask 10      */
    uint32_t EOC11:1;                   /**< bit:     11  End of Conversion Interrupt Mask 11      */
    uint32_t :7;                        /**< bit: 12..18  Reserved */
    uint32_t LCCHG:1;                   /**< bit:     19  Last Channel Change Interrupt Disable    */
    uint32_t XRDY:1;                    /**< bit:     20  Touchscreen Measure XPOS Ready Interrupt Mask */
    uint32_t YRDY:1;                    /**< bit:     21  Touchscreen Measure YPOS Ready Interrupt Mask */
    uint32_t PRDY:1;                    /**< bit:     22  Touchscreen Measure Pressure Ready Interrupt Mask */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t DRDY:1;                    /**< bit:     24  Data Ready Interrupt Mask                */
    uint32_t GOVRE:1;                   /**< bit:     25  General Overrun Error Interrupt Mask     */
    uint32_t COMPE:1;                   /**< bit:     26  Comparison Event Interrupt Mask          */
    uint32_t :2;                        /**< bit: 27..28  Reserved */
    uint32_t PEN:1;                     /**< bit:     29  Pen Contact Interrupt Mask               */
    uint32_t NOPEN:1;                   /**< bit:     30  No Pen Contact Interrupt Mask            */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t EOC:12;                    /**< bit:  0..11  End of Conversion Interrupt Mask x       */
    uint32_t :20;                       /**< bit: 12..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} ADC_IMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_IMR_OFFSET                      (0x2C)                                        /**<  (ADC_IMR) Interrupt Mask Register  Offset */

#define ADC_IMR_EOC0_Pos                    0                                              /**< (ADC_IMR) End of Conversion Interrupt Mask 0 Position */
#define ADC_IMR_EOC0_Msk                    (_U_(0x1) << ADC_IMR_EOC0_Pos)                 /**< (ADC_IMR) End of Conversion Interrupt Mask 0 Mask */
#define ADC_IMR_EOC0                        ADC_IMR_EOC0_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IMR_EOC0_Msk instead */
#define ADC_IMR_EOC1_Pos                    1                                              /**< (ADC_IMR) End of Conversion Interrupt Mask 1 Position */
#define ADC_IMR_EOC1_Msk                    (_U_(0x1) << ADC_IMR_EOC1_Pos)                 /**< (ADC_IMR) End of Conversion Interrupt Mask 1 Mask */
#define ADC_IMR_EOC1                        ADC_IMR_EOC1_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IMR_EOC1_Msk instead */
#define ADC_IMR_EOC2_Pos                    2                                              /**< (ADC_IMR) End of Conversion Interrupt Mask 2 Position */
#define ADC_IMR_EOC2_Msk                    (_U_(0x1) << ADC_IMR_EOC2_Pos)                 /**< (ADC_IMR) End of Conversion Interrupt Mask 2 Mask */
#define ADC_IMR_EOC2                        ADC_IMR_EOC2_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IMR_EOC2_Msk instead */
#define ADC_IMR_EOC3_Pos                    3                                              /**< (ADC_IMR) End of Conversion Interrupt Mask 3 Position */
#define ADC_IMR_EOC3_Msk                    (_U_(0x1) << ADC_IMR_EOC3_Pos)                 /**< (ADC_IMR) End of Conversion Interrupt Mask 3 Mask */
#define ADC_IMR_EOC3                        ADC_IMR_EOC3_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IMR_EOC3_Msk instead */
#define ADC_IMR_EOC4_Pos                    4                                              /**< (ADC_IMR) End of Conversion Interrupt Mask 4 Position */
#define ADC_IMR_EOC4_Msk                    (_U_(0x1) << ADC_IMR_EOC4_Pos)                 /**< (ADC_IMR) End of Conversion Interrupt Mask 4 Mask */
#define ADC_IMR_EOC4                        ADC_IMR_EOC4_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IMR_EOC4_Msk instead */
#define ADC_IMR_EOC5_Pos                    5                                              /**< (ADC_IMR) End of Conversion Interrupt Mask 5 Position */
#define ADC_IMR_EOC5_Msk                    (_U_(0x1) << ADC_IMR_EOC5_Pos)                 /**< (ADC_IMR) End of Conversion Interrupt Mask 5 Mask */
#define ADC_IMR_EOC5                        ADC_IMR_EOC5_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IMR_EOC5_Msk instead */
#define ADC_IMR_EOC6_Pos                    6                                              /**< (ADC_IMR) End of Conversion Interrupt Mask 6 Position */
#define ADC_IMR_EOC6_Msk                    (_U_(0x1) << ADC_IMR_EOC6_Pos)                 /**< (ADC_IMR) End of Conversion Interrupt Mask 6 Mask */
#define ADC_IMR_EOC6                        ADC_IMR_EOC6_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IMR_EOC6_Msk instead */
#define ADC_IMR_EOC7_Pos                    7                                              /**< (ADC_IMR) End of Conversion Interrupt Mask 7 Position */
#define ADC_IMR_EOC7_Msk                    (_U_(0x1) << ADC_IMR_EOC7_Pos)                 /**< (ADC_IMR) End of Conversion Interrupt Mask 7 Mask */
#define ADC_IMR_EOC7                        ADC_IMR_EOC7_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IMR_EOC7_Msk instead */
#define ADC_IMR_EOC8_Pos                    8                                              /**< (ADC_IMR) End of Conversion Interrupt Mask 8 Position */
#define ADC_IMR_EOC8_Msk                    (_U_(0x1) << ADC_IMR_EOC8_Pos)                 /**< (ADC_IMR) End of Conversion Interrupt Mask 8 Mask */
#define ADC_IMR_EOC8                        ADC_IMR_EOC8_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IMR_EOC8_Msk instead */
#define ADC_IMR_EOC9_Pos                    9                                              /**< (ADC_IMR) End of Conversion Interrupt Mask 9 Position */
#define ADC_IMR_EOC9_Msk                    (_U_(0x1) << ADC_IMR_EOC9_Pos)                 /**< (ADC_IMR) End of Conversion Interrupt Mask 9 Mask */
#define ADC_IMR_EOC9                        ADC_IMR_EOC9_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IMR_EOC9_Msk instead */
#define ADC_IMR_EOC10_Pos                   10                                             /**< (ADC_IMR) End of Conversion Interrupt Mask 10 Position */
#define ADC_IMR_EOC10_Msk                   (_U_(0x1) << ADC_IMR_EOC10_Pos)                /**< (ADC_IMR) End of Conversion Interrupt Mask 10 Mask */
#define ADC_IMR_EOC10                       ADC_IMR_EOC10_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IMR_EOC10_Msk instead */
#define ADC_IMR_EOC11_Pos                   11                                             /**< (ADC_IMR) End of Conversion Interrupt Mask 11 Position */
#define ADC_IMR_EOC11_Msk                   (_U_(0x1) << ADC_IMR_EOC11_Pos)                /**< (ADC_IMR) End of Conversion Interrupt Mask 11 Mask */
#define ADC_IMR_EOC11                       ADC_IMR_EOC11_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IMR_EOC11_Msk instead */
#define ADC_IMR_LCCHG_Pos                   19                                             /**< (ADC_IMR) Last Channel Change Interrupt Disable Position */
#define ADC_IMR_LCCHG_Msk                   (_U_(0x1) << ADC_IMR_LCCHG_Pos)                /**< (ADC_IMR) Last Channel Change Interrupt Disable Mask */
#define ADC_IMR_LCCHG                       ADC_IMR_LCCHG_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IMR_LCCHG_Msk instead */
#define ADC_IMR_XRDY_Pos                    20                                             /**< (ADC_IMR) Touchscreen Measure XPOS Ready Interrupt Mask Position */
#define ADC_IMR_XRDY_Msk                    (_U_(0x1) << ADC_IMR_XRDY_Pos)                 /**< (ADC_IMR) Touchscreen Measure XPOS Ready Interrupt Mask Mask */
#define ADC_IMR_XRDY                        ADC_IMR_XRDY_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IMR_XRDY_Msk instead */
#define ADC_IMR_YRDY_Pos                    21                                             /**< (ADC_IMR) Touchscreen Measure YPOS Ready Interrupt Mask Position */
#define ADC_IMR_YRDY_Msk                    (_U_(0x1) << ADC_IMR_YRDY_Pos)                 /**< (ADC_IMR) Touchscreen Measure YPOS Ready Interrupt Mask Mask */
#define ADC_IMR_YRDY                        ADC_IMR_YRDY_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IMR_YRDY_Msk instead */
#define ADC_IMR_PRDY_Pos                    22                                             /**< (ADC_IMR) Touchscreen Measure Pressure Ready Interrupt Mask Position */
#define ADC_IMR_PRDY_Msk                    (_U_(0x1) << ADC_IMR_PRDY_Pos)                 /**< (ADC_IMR) Touchscreen Measure Pressure Ready Interrupt Mask Mask */
#define ADC_IMR_PRDY                        ADC_IMR_PRDY_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IMR_PRDY_Msk instead */
#define ADC_IMR_DRDY_Pos                    24                                             /**< (ADC_IMR) Data Ready Interrupt Mask Position */
#define ADC_IMR_DRDY_Msk                    (_U_(0x1) << ADC_IMR_DRDY_Pos)                 /**< (ADC_IMR) Data Ready Interrupt Mask Mask */
#define ADC_IMR_DRDY                        ADC_IMR_DRDY_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IMR_DRDY_Msk instead */
#define ADC_IMR_GOVRE_Pos                   25                                             /**< (ADC_IMR) General Overrun Error Interrupt Mask Position */
#define ADC_IMR_GOVRE_Msk                   (_U_(0x1) << ADC_IMR_GOVRE_Pos)                /**< (ADC_IMR) General Overrun Error Interrupt Mask Mask */
#define ADC_IMR_GOVRE                       ADC_IMR_GOVRE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IMR_GOVRE_Msk instead */
#define ADC_IMR_COMPE_Pos                   26                                             /**< (ADC_IMR) Comparison Event Interrupt Mask Position */
#define ADC_IMR_COMPE_Msk                   (_U_(0x1) << ADC_IMR_COMPE_Pos)                /**< (ADC_IMR) Comparison Event Interrupt Mask Mask */
#define ADC_IMR_COMPE                       ADC_IMR_COMPE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IMR_COMPE_Msk instead */
#define ADC_IMR_PEN_Pos                     29                                             /**< (ADC_IMR) Pen Contact Interrupt Mask Position */
#define ADC_IMR_PEN_Msk                     (_U_(0x1) << ADC_IMR_PEN_Pos)                  /**< (ADC_IMR) Pen Contact Interrupt Mask Mask */
#define ADC_IMR_PEN                         ADC_IMR_PEN_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IMR_PEN_Msk instead */
#define ADC_IMR_NOPEN_Pos                   30                                             /**< (ADC_IMR) No Pen Contact Interrupt Mask Position */
#define ADC_IMR_NOPEN_Msk                   (_U_(0x1) << ADC_IMR_NOPEN_Pos)                /**< (ADC_IMR) No Pen Contact Interrupt Mask Mask */
#define ADC_IMR_NOPEN                       ADC_IMR_NOPEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_IMR_NOPEN_Msk instead */
#define ADC_IMR_MASK                        _U_(0x67780FFF)                                /**< \deprecated (ADC_IMR) Register MASK  (Use ADC_IMR_Msk instead)  */
#define ADC_IMR_Msk                         _U_(0x67780FFF)                                /**< (ADC_IMR) Register Mask  */

#define ADC_IMR_EOC_Pos                     0                                              /**< (ADC_IMR Position) End of Conversion Interrupt Mask x */
#define ADC_IMR_EOC_Msk                     (_U_(0xFFF) << ADC_IMR_EOC_Pos)                /**< (ADC_IMR Mask) EOC */
#define ADC_IMR_EOC(value)                  (ADC_IMR_EOC_Msk & ((value) << ADC_IMR_EOC_Pos))  

/* -------- ADC_ISR : (ADC Offset: 0x30) (R/ 32) Interrupt Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t EOC0:1;                    /**< bit:      0  End of Conversion 0 (automatically set / cleared) */
    uint32_t EOC1:1;                    /**< bit:      1  End of Conversion 1 (automatically set / cleared) */
    uint32_t EOC2:1;                    /**< bit:      2  End of Conversion 2 (automatically set / cleared) */
    uint32_t EOC3:1;                    /**< bit:      3  End of Conversion 3 (automatically set / cleared) */
    uint32_t EOC4:1;                    /**< bit:      4  End of Conversion 4 (automatically set / cleared) */
    uint32_t EOC5:1;                    /**< bit:      5  End of Conversion 5 (automatically set / cleared) */
    uint32_t EOC6:1;                    /**< bit:      6  End of Conversion 6 (automatically set / cleared) */
    uint32_t EOC7:1;                    /**< bit:      7  End of Conversion 7 (automatically set / cleared) */
    uint32_t EOC8:1;                    /**< bit:      8  End of Conversion 8 (automatically set / cleared) */
    uint32_t EOC9:1;                    /**< bit:      9  End of Conversion 9 (automatically set / cleared) */
    uint32_t EOC10:1;                   /**< bit:     10  End of Conversion 10 (automatically set / cleared) */
    uint32_t EOC11:1;                   /**< bit:     11  End of Conversion 11 (automatically set / cleared) */
    uint32_t :7;                        /**< bit: 12..18  Reserved */
    uint32_t LCCHG:1;                   /**< bit:     19  Last Channel Change (cleared on read)    */
    uint32_t XRDY:1;                    /**< bit:     20  Touchscreen XPOS Measure Ready (cleared on read) */
    uint32_t YRDY:1;                    /**< bit:     21  Touchscreen YPOS Measure Ready (cleared on read) */
    uint32_t PRDY:1;                    /**< bit:     22  Touchscreen Pressure Measure Ready (cleared on read) */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t DRDY:1;                    /**< bit:     24  Data Ready (automatically set / cleared) */
    uint32_t GOVRE:1;                   /**< bit:     25  General Overrun Error (cleared on read)  */
    uint32_t COMPE:1;                   /**< bit:     26  Comparison Event (cleared on read)       */
    uint32_t :2;                        /**< bit: 27..28  Reserved */
    uint32_t PEN:1;                     /**< bit:     29  Pen contact (cleared on read)            */
    uint32_t NOPEN:1;                   /**< bit:     30  No Pen Contact (cleared on read)         */
    uint32_t PENS:1;                    /**< bit:     31  Pen Detect Status                        */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t EOC:12;                    /**< bit:  0..11  End of Conversion x (automatically set / cleared) */
    uint32_t :20;                       /**< bit: 12..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} ADC_ISR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_ISR_OFFSET                      (0x30)                                        /**<  (ADC_ISR) Interrupt Status Register  Offset */

#define ADC_ISR_EOC0_Pos                    0                                              /**< (ADC_ISR) End of Conversion 0 (automatically set / cleared) Position */
#define ADC_ISR_EOC0_Msk                    (_U_(0x1) << ADC_ISR_EOC0_Pos)                 /**< (ADC_ISR) End of Conversion 0 (automatically set / cleared) Mask */
#define ADC_ISR_EOC0                        ADC_ISR_EOC0_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_EOC0_Msk instead */
#define ADC_ISR_EOC1_Pos                    1                                              /**< (ADC_ISR) End of Conversion 1 (automatically set / cleared) Position */
#define ADC_ISR_EOC1_Msk                    (_U_(0x1) << ADC_ISR_EOC1_Pos)                 /**< (ADC_ISR) End of Conversion 1 (automatically set / cleared) Mask */
#define ADC_ISR_EOC1                        ADC_ISR_EOC1_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_EOC1_Msk instead */
#define ADC_ISR_EOC2_Pos                    2                                              /**< (ADC_ISR) End of Conversion 2 (automatically set / cleared) Position */
#define ADC_ISR_EOC2_Msk                    (_U_(0x1) << ADC_ISR_EOC2_Pos)                 /**< (ADC_ISR) End of Conversion 2 (automatically set / cleared) Mask */
#define ADC_ISR_EOC2                        ADC_ISR_EOC2_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_EOC2_Msk instead */
#define ADC_ISR_EOC3_Pos                    3                                              /**< (ADC_ISR) End of Conversion 3 (automatically set / cleared) Position */
#define ADC_ISR_EOC3_Msk                    (_U_(0x1) << ADC_ISR_EOC3_Pos)                 /**< (ADC_ISR) End of Conversion 3 (automatically set / cleared) Mask */
#define ADC_ISR_EOC3                        ADC_ISR_EOC3_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_EOC3_Msk instead */
#define ADC_ISR_EOC4_Pos                    4                                              /**< (ADC_ISR) End of Conversion 4 (automatically set / cleared) Position */
#define ADC_ISR_EOC4_Msk                    (_U_(0x1) << ADC_ISR_EOC4_Pos)                 /**< (ADC_ISR) End of Conversion 4 (automatically set / cleared) Mask */
#define ADC_ISR_EOC4                        ADC_ISR_EOC4_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_EOC4_Msk instead */
#define ADC_ISR_EOC5_Pos                    5                                              /**< (ADC_ISR) End of Conversion 5 (automatically set / cleared) Position */
#define ADC_ISR_EOC5_Msk                    (_U_(0x1) << ADC_ISR_EOC5_Pos)                 /**< (ADC_ISR) End of Conversion 5 (automatically set / cleared) Mask */
#define ADC_ISR_EOC5                        ADC_ISR_EOC5_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_EOC5_Msk instead */
#define ADC_ISR_EOC6_Pos                    6                                              /**< (ADC_ISR) End of Conversion 6 (automatically set / cleared) Position */
#define ADC_ISR_EOC6_Msk                    (_U_(0x1) << ADC_ISR_EOC6_Pos)                 /**< (ADC_ISR) End of Conversion 6 (automatically set / cleared) Mask */
#define ADC_ISR_EOC6                        ADC_ISR_EOC6_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_EOC6_Msk instead */
#define ADC_ISR_EOC7_Pos                    7                                              /**< (ADC_ISR) End of Conversion 7 (automatically set / cleared) Position */
#define ADC_ISR_EOC7_Msk                    (_U_(0x1) << ADC_ISR_EOC7_Pos)                 /**< (ADC_ISR) End of Conversion 7 (automatically set / cleared) Mask */
#define ADC_ISR_EOC7                        ADC_ISR_EOC7_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_EOC7_Msk instead */
#define ADC_ISR_EOC8_Pos                    8                                              /**< (ADC_ISR) End of Conversion 8 (automatically set / cleared) Position */
#define ADC_ISR_EOC8_Msk                    (_U_(0x1) << ADC_ISR_EOC8_Pos)                 /**< (ADC_ISR) End of Conversion 8 (automatically set / cleared) Mask */
#define ADC_ISR_EOC8                        ADC_ISR_EOC8_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_EOC8_Msk instead */
#define ADC_ISR_EOC9_Pos                    9                                              /**< (ADC_ISR) End of Conversion 9 (automatically set / cleared) Position */
#define ADC_ISR_EOC9_Msk                    (_U_(0x1) << ADC_ISR_EOC9_Pos)                 /**< (ADC_ISR) End of Conversion 9 (automatically set / cleared) Mask */
#define ADC_ISR_EOC9                        ADC_ISR_EOC9_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_EOC9_Msk instead */
#define ADC_ISR_EOC10_Pos                   10                                             /**< (ADC_ISR) End of Conversion 10 (automatically set / cleared) Position */
#define ADC_ISR_EOC10_Msk                   (_U_(0x1) << ADC_ISR_EOC10_Pos)                /**< (ADC_ISR) End of Conversion 10 (automatically set / cleared) Mask */
#define ADC_ISR_EOC10                       ADC_ISR_EOC10_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_EOC10_Msk instead */
#define ADC_ISR_EOC11_Pos                   11                                             /**< (ADC_ISR) End of Conversion 11 (automatically set / cleared) Position */
#define ADC_ISR_EOC11_Msk                   (_U_(0x1) << ADC_ISR_EOC11_Pos)                /**< (ADC_ISR) End of Conversion 11 (automatically set / cleared) Mask */
#define ADC_ISR_EOC11                       ADC_ISR_EOC11_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_EOC11_Msk instead */
#define ADC_ISR_LCCHG_Pos                   19                                             /**< (ADC_ISR) Last Channel Change (cleared on read) Position */
#define ADC_ISR_LCCHG_Msk                   (_U_(0x1) << ADC_ISR_LCCHG_Pos)                /**< (ADC_ISR) Last Channel Change (cleared on read) Mask */
#define ADC_ISR_LCCHG                       ADC_ISR_LCCHG_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_LCCHG_Msk instead */
#define ADC_ISR_XRDY_Pos                    20                                             /**< (ADC_ISR) Touchscreen XPOS Measure Ready (cleared on read) Position */
#define ADC_ISR_XRDY_Msk                    (_U_(0x1) << ADC_ISR_XRDY_Pos)                 /**< (ADC_ISR) Touchscreen XPOS Measure Ready (cleared on read) Mask */
#define ADC_ISR_XRDY                        ADC_ISR_XRDY_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_XRDY_Msk instead */
#define ADC_ISR_YRDY_Pos                    21                                             /**< (ADC_ISR) Touchscreen YPOS Measure Ready (cleared on read) Position */
#define ADC_ISR_YRDY_Msk                    (_U_(0x1) << ADC_ISR_YRDY_Pos)                 /**< (ADC_ISR) Touchscreen YPOS Measure Ready (cleared on read) Mask */
#define ADC_ISR_YRDY                        ADC_ISR_YRDY_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_YRDY_Msk instead */
#define ADC_ISR_PRDY_Pos                    22                                             /**< (ADC_ISR) Touchscreen Pressure Measure Ready (cleared on read) Position */
#define ADC_ISR_PRDY_Msk                    (_U_(0x1) << ADC_ISR_PRDY_Pos)                 /**< (ADC_ISR) Touchscreen Pressure Measure Ready (cleared on read) Mask */
#define ADC_ISR_PRDY                        ADC_ISR_PRDY_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_PRDY_Msk instead */
#define ADC_ISR_DRDY_Pos                    24                                             /**< (ADC_ISR) Data Ready (automatically set / cleared) Position */
#define ADC_ISR_DRDY_Msk                    (_U_(0x1) << ADC_ISR_DRDY_Pos)                 /**< (ADC_ISR) Data Ready (automatically set / cleared) Mask */
#define ADC_ISR_DRDY                        ADC_ISR_DRDY_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_DRDY_Msk instead */
#define ADC_ISR_GOVRE_Pos                   25                                             /**< (ADC_ISR) General Overrun Error (cleared on read) Position */
#define ADC_ISR_GOVRE_Msk                   (_U_(0x1) << ADC_ISR_GOVRE_Pos)                /**< (ADC_ISR) General Overrun Error (cleared on read) Mask */
#define ADC_ISR_GOVRE                       ADC_ISR_GOVRE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_GOVRE_Msk instead */
#define ADC_ISR_COMPE_Pos                   26                                             /**< (ADC_ISR) Comparison Event (cleared on read) Position */
#define ADC_ISR_COMPE_Msk                   (_U_(0x1) << ADC_ISR_COMPE_Pos)                /**< (ADC_ISR) Comparison Event (cleared on read) Mask */
#define ADC_ISR_COMPE                       ADC_ISR_COMPE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_COMPE_Msk instead */
#define ADC_ISR_PEN_Pos                     29                                             /**< (ADC_ISR) Pen contact (cleared on read) Position */
#define ADC_ISR_PEN_Msk                     (_U_(0x1) << ADC_ISR_PEN_Pos)                  /**< (ADC_ISR) Pen contact (cleared on read) Mask */
#define ADC_ISR_PEN                         ADC_ISR_PEN_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_PEN_Msk instead */
#define ADC_ISR_NOPEN_Pos                   30                                             /**< (ADC_ISR) No Pen Contact (cleared on read) Position */
#define ADC_ISR_NOPEN_Msk                   (_U_(0x1) << ADC_ISR_NOPEN_Pos)                /**< (ADC_ISR) No Pen Contact (cleared on read) Mask */
#define ADC_ISR_NOPEN                       ADC_ISR_NOPEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_NOPEN_Msk instead */
#define ADC_ISR_PENS_Pos                    31                                             /**< (ADC_ISR) Pen Detect Status Position */
#define ADC_ISR_PENS_Msk                    (_U_(0x1) << ADC_ISR_PENS_Pos)                 /**< (ADC_ISR) Pen Detect Status Mask */
#define ADC_ISR_PENS                        ADC_ISR_PENS_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_ISR_PENS_Msk instead */
#define ADC_ISR_MASK                        _U_(0xE7780FFF)                                /**< \deprecated (ADC_ISR) Register MASK  (Use ADC_ISR_Msk instead)  */
#define ADC_ISR_Msk                         _U_(0xE7780FFF)                                /**< (ADC_ISR) Register Mask  */

#define ADC_ISR_EOC_Pos                     0                                              /**< (ADC_ISR Position) End of Conversion x (automatically set / cleared) */
#define ADC_ISR_EOC_Msk                     (_U_(0xFFF) << ADC_ISR_EOC_Pos)                /**< (ADC_ISR Mask) EOC */
#define ADC_ISR_EOC(value)                  (ADC_ISR_EOC_Msk & ((value) << ADC_ISR_EOC_Pos))  

/* -------- ADC_LCTMR : (ADC Offset: 0x34) (R/W 32) Last Channel Trigger Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DUALTRIG:1;                /**< bit:      0  Dual Trigger ON                          */
    uint32_t :3;                        /**< bit:   1..3  Reserved */
    uint32_t CMPMOD:2;                  /**< bit:   4..5  Last Channel Comparison Mode             */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ADC_LCTMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_LCTMR_OFFSET                    (0x34)                                        /**<  (ADC_LCTMR) Last Channel Trigger Mode Register  Offset */

#define ADC_LCTMR_DUALTRIG_Pos              0                                              /**< (ADC_LCTMR) Dual Trigger ON Position */
#define ADC_LCTMR_DUALTRIG_Msk              (_U_(0x1) << ADC_LCTMR_DUALTRIG_Pos)           /**< (ADC_LCTMR) Dual Trigger ON Mask */
#define ADC_LCTMR_DUALTRIG                  ADC_LCTMR_DUALTRIG_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_LCTMR_DUALTRIG_Msk instead */
#define ADC_LCTMR_CMPMOD_Pos                4                                              /**< (ADC_LCTMR) Last Channel Comparison Mode Position */
#define ADC_LCTMR_CMPMOD_Msk                (_U_(0x3) << ADC_LCTMR_CMPMOD_Pos)             /**< (ADC_LCTMR) Last Channel Comparison Mode Mask */
#define ADC_LCTMR_CMPMOD(value)             (ADC_LCTMR_CMPMOD_Msk & ((value) << ADC_LCTMR_CMPMOD_Pos))
#define   ADC_LCTMR_CMPMOD_LOW_Val          _U_(0x0)                                       /**< (ADC_LCTMR) Generates the LCCHG flag in ADC_ISR when the converted data is lower than the low threshold of the window.  */
#define   ADC_LCTMR_CMPMOD_HIGH_Val         _U_(0x1)                                       /**< (ADC_LCTMR) Generates the LCCHG flag in ADC_ISR when the converted data is higher than the high threshold of the window.  */
#define   ADC_LCTMR_CMPMOD_IN_Val           _U_(0x2)                                       /**< (ADC_LCTMR) Generates the LCCHG flag in ADC_ISR when the converted data is in the comparison window.  */
#define   ADC_LCTMR_CMPMOD_OUT_Val          _U_(0x3)                                       /**< (ADC_LCTMR) Generates the LCCHG flag in ADC_ISR when the converted data is out of the comparison window.  */
#define ADC_LCTMR_CMPMOD_LOW                (ADC_LCTMR_CMPMOD_LOW_Val << ADC_LCTMR_CMPMOD_Pos)  /**< (ADC_LCTMR) Generates the LCCHG flag in ADC_ISR when the converted data is lower than the low threshold of the window. Position  */
#define ADC_LCTMR_CMPMOD_HIGH               (ADC_LCTMR_CMPMOD_HIGH_Val << ADC_LCTMR_CMPMOD_Pos)  /**< (ADC_LCTMR) Generates the LCCHG flag in ADC_ISR when the converted data is higher than the high threshold of the window. Position  */
#define ADC_LCTMR_CMPMOD_IN                 (ADC_LCTMR_CMPMOD_IN_Val << ADC_LCTMR_CMPMOD_Pos)  /**< (ADC_LCTMR) Generates the LCCHG flag in ADC_ISR when the converted data is in the comparison window. Position  */
#define ADC_LCTMR_CMPMOD_OUT                (ADC_LCTMR_CMPMOD_OUT_Val << ADC_LCTMR_CMPMOD_Pos)  /**< (ADC_LCTMR) Generates the LCCHG flag in ADC_ISR when the converted data is out of the comparison window. Position  */
#define ADC_LCTMR_MASK                      _U_(0x31)                                      /**< \deprecated (ADC_LCTMR) Register MASK  (Use ADC_LCTMR_Msk instead)  */
#define ADC_LCTMR_Msk                       _U_(0x31)                                      /**< (ADC_LCTMR) Register Mask  */


/* -------- ADC_LCCWR : (ADC Offset: 0x38) (R/W 32) Last Channel Compare Window Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t LOWTHRES:12;               /**< bit:  0..11  Low Threshold                            */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t HIGHTHRES:12;              /**< bit: 16..27  High Threshold                           */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ADC_LCCWR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_LCCWR_OFFSET                    (0x38)                                        /**<  (ADC_LCCWR) Last Channel Compare Window Register  Offset */

#define ADC_LCCWR_LOWTHRES_Pos              0                                              /**< (ADC_LCCWR) Low Threshold Position */
#define ADC_LCCWR_LOWTHRES_Msk              (_U_(0xFFF) << ADC_LCCWR_LOWTHRES_Pos)         /**< (ADC_LCCWR) Low Threshold Mask */
#define ADC_LCCWR_LOWTHRES(value)           (ADC_LCCWR_LOWTHRES_Msk & ((value) << ADC_LCCWR_LOWTHRES_Pos))
#define ADC_LCCWR_HIGHTHRES_Pos             16                                             /**< (ADC_LCCWR) High Threshold Position */
#define ADC_LCCWR_HIGHTHRES_Msk             (_U_(0xFFF) << ADC_LCCWR_HIGHTHRES_Pos)        /**< (ADC_LCCWR) High Threshold Mask */
#define ADC_LCCWR_HIGHTHRES(value)          (ADC_LCCWR_HIGHTHRES_Msk & ((value) << ADC_LCCWR_HIGHTHRES_Pos))
#define ADC_LCCWR_MASK                      _U_(0xFFF0FFF)                                 /**< \deprecated (ADC_LCCWR) Register MASK  (Use ADC_LCCWR_Msk instead)  */
#define ADC_LCCWR_Msk                       _U_(0xFFF0FFF)                                 /**< (ADC_LCCWR) Register Mask  */


/* -------- ADC_OVER : (ADC Offset: 0x3c) (R/ 32) Overrun Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t OVRE0:1;                   /**< bit:      0  Overrun Error 0                          */
    uint32_t OVRE1:1;                   /**< bit:      1  Overrun Error 1                          */
    uint32_t OVRE2:1;                   /**< bit:      2  Overrun Error 2                          */
    uint32_t OVRE3:1;                   /**< bit:      3  Overrun Error 3                          */
    uint32_t OVRE4:1;                   /**< bit:      4  Overrun Error 4                          */
    uint32_t OVRE5:1;                   /**< bit:      5  Overrun Error 5                          */
    uint32_t OVRE6:1;                   /**< bit:      6  Overrun Error 6                          */
    uint32_t OVRE7:1;                   /**< bit:      7  Overrun Error 7                          */
    uint32_t OVRE8:1;                   /**< bit:      8  Overrun Error 8                          */
    uint32_t OVRE9:1;                   /**< bit:      9  Overrun Error 9                          */
    uint32_t OVRE10:1;                  /**< bit:     10  Overrun Error 10                         */
    uint32_t OVRE11:1;                  /**< bit:     11  Overrun Error 11                         */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t OVRE:12;                   /**< bit:  0..11  Overrun Error xx                         */
    uint32_t :20;                       /**< bit: 12..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} ADC_OVER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_OVER_OFFSET                     (0x3C)                                        /**<  (ADC_OVER) Overrun Status Register  Offset */

#define ADC_OVER_OVRE0_Pos                  0                                              /**< (ADC_OVER) Overrun Error 0 Position */
#define ADC_OVER_OVRE0_Msk                  (_U_(0x1) << ADC_OVER_OVRE0_Pos)               /**< (ADC_OVER) Overrun Error 0 Mask */
#define ADC_OVER_OVRE0                      ADC_OVER_OVRE0_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_OVER_OVRE0_Msk instead */
#define ADC_OVER_OVRE1_Pos                  1                                              /**< (ADC_OVER) Overrun Error 1 Position */
#define ADC_OVER_OVRE1_Msk                  (_U_(0x1) << ADC_OVER_OVRE1_Pos)               /**< (ADC_OVER) Overrun Error 1 Mask */
#define ADC_OVER_OVRE1                      ADC_OVER_OVRE1_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_OVER_OVRE1_Msk instead */
#define ADC_OVER_OVRE2_Pos                  2                                              /**< (ADC_OVER) Overrun Error 2 Position */
#define ADC_OVER_OVRE2_Msk                  (_U_(0x1) << ADC_OVER_OVRE2_Pos)               /**< (ADC_OVER) Overrun Error 2 Mask */
#define ADC_OVER_OVRE2                      ADC_OVER_OVRE2_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_OVER_OVRE2_Msk instead */
#define ADC_OVER_OVRE3_Pos                  3                                              /**< (ADC_OVER) Overrun Error 3 Position */
#define ADC_OVER_OVRE3_Msk                  (_U_(0x1) << ADC_OVER_OVRE3_Pos)               /**< (ADC_OVER) Overrun Error 3 Mask */
#define ADC_OVER_OVRE3                      ADC_OVER_OVRE3_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_OVER_OVRE3_Msk instead */
#define ADC_OVER_OVRE4_Pos                  4                                              /**< (ADC_OVER) Overrun Error 4 Position */
#define ADC_OVER_OVRE4_Msk                  (_U_(0x1) << ADC_OVER_OVRE4_Pos)               /**< (ADC_OVER) Overrun Error 4 Mask */
#define ADC_OVER_OVRE4                      ADC_OVER_OVRE4_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_OVER_OVRE4_Msk instead */
#define ADC_OVER_OVRE5_Pos                  5                                              /**< (ADC_OVER) Overrun Error 5 Position */
#define ADC_OVER_OVRE5_Msk                  (_U_(0x1) << ADC_OVER_OVRE5_Pos)               /**< (ADC_OVER) Overrun Error 5 Mask */
#define ADC_OVER_OVRE5                      ADC_OVER_OVRE5_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_OVER_OVRE5_Msk instead */
#define ADC_OVER_OVRE6_Pos                  6                                              /**< (ADC_OVER) Overrun Error 6 Position */
#define ADC_OVER_OVRE6_Msk                  (_U_(0x1) << ADC_OVER_OVRE6_Pos)               /**< (ADC_OVER) Overrun Error 6 Mask */
#define ADC_OVER_OVRE6                      ADC_OVER_OVRE6_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_OVER_OVRE6_Msk instead */
#define ADC_OVER_OVRE7_Pos                  7                                              /**< (ADC_OVER) Overrun Error 7 Position */
#define ADC_OVER_OVRE7_Msk                  (_U_(0x1) << ADC_OVER_OVRE7_Pos)               /**< (ADC_OVER) Overrun Error 7 Mask */
#define ADC_OVER_OVRE7                      ADC_OVER_OVRE7_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_OVER_OVRE7_Msk instead */
#define ADC_OVER_OVRE8_Pos                  8                                              /**< (ADC_OVER) Overrun Error 8 Position */
#define ADC_OVER_OVRE8_Msk                  (_U_(0x1) << ADC_OVER_OVRE8_Pos)               /**< (ADC_OVER) Overrun Error 8 Mask */
#define ADC_OVER_OVRE8                      ADC_OVER_OVRE8_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_OVER_OVRE8_Msk instead */
#define ADC_OVER_OVRE9_Pos                  9                                              /**< (ADC_OVER) Overrun Error 9 Position */
#define ADC_OVER_OVRE9_Msk                  (_U_(0x1) << ADC_OVER_OVRE9_Pos)               /**< (ADC_OVER) Overrun Error 9 Mask */
#define ADC_OVER_OVRE9                      ADC_OVER_OVRE9_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_OVER_OVRE9_Msk instead */
#define ADC_OVER_OVRE10_Pos                 10                                             /**< (ADC_OVER) Overrun Error 10 Position */
#define ADC_OVER_OVRE10_Msk                 (_U_(0x1) << ADC_OVER_OVRE10_Pos)              /**< (ADC_OVER) Overrun Error 10 Mask */
#define ADC_OVER_OVRE10                     ADC_OVER_OVRE10_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_OVER_OVRE10_Msk instead */
#define ADC_OVER_OVRE11_Pos                 11                                             /**< (ADC_OVER) Overrun Error 11 Position */
#define ADC_OVER_OVRE11_Msk                 (_U_(0x1) << ADC_OVER_OVRE11_Pos)              /**< (ADC_OVER) Overrun Error 11 Mask */
#define ADC_OVER_OVRE11                     ADC_OVER_OVRE11_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_OVER_OVRE11_Msk instead */
#define ADC_OVER_MASK                       _U_(0xFFF)                                     /**< \deprecated (ADC_OVER) Register MASK  (Use ADC_OVER_Msk instead)  */
#define ADC_OVER_Msk                        _U_(0xFFF)                                     /**< (ADC_OVER) Register Mask  */

#define ADC_OVER_OVRE_Pos                   0                                              /**< (ADC_OVER Position) Overrun Error xx */
#define ADC_OVER_OVRE_Msk                   (_U_(0xFFF) << ADC_OVER_OVRE_Pos)              /**< (ADC_OVER Mask) OVRE */
#define ADC_OVER_OVRE(value)                (ADC_OVER_OVRE_Msk & ((value) << ADC_OVER_OVRE_Pos))  

/* -------- ADC_EMR : (ADC Offset: 0x40) (R/W 32) Extended Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CMPMODE:2;                 /**< bit:   0..1  Comparison Mode                          */
    uint32_t CMPTYPE:1;                 /**< bit:      2  Comparison Type                          */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t CMPSEL:4;                  /**< bit:   4..7  Comparison Selected Channel              */
    uint32_t :1;                        /**< bit:      8  Reserved */
    uint32_t CMPALL:1;                  /**< bit:      9  Compare All Channels                     */
    uint32_t :2;                        /**< bit: 10..11  Reserved */
    uint32_t CMPFILTER:2;               /**< bit: 12..13  Compare Event Filtering                  */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t OSR:2;                     /**< bit: 16..17  Over Sampling Rate                       */
    uint32_t :2;                        /**< bit: 18..19  Reserved */
    uint32_t ASTE:1;                    /**< bit:     20  Averaging on Single Trigger Event        */
    uint32_t SRCCLK:1;                  /**< bit:     21  External Clock Selection                 */
    uint32_t :2;                        /**< bit: 22..23  Reserved */
    uint32_t TAG:1;                     /**< bit:     24  Tag of ADC_LCDR                          */
    uint32_t SIGNMODE:2;                /**< bit: 25..26  Sign Mode                                */
    uint32_t :1;                        /**< bit:     27  Reserved */
    uint32_t ADCMODE:2;                 /**< bit: 28..29  ADC Running Mode                         */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ADC_EMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_EMR_OFFSET                      (0x40)                                        /**<  (ADC_EMR) Extended Mode Register  Offset */

#define ADC_EMR_CMPMODE_Pos                 0                                              /**< (ADC_EMR) Comparison Mode Position */
#define ADC_EMR_CMPMODE_Msk                 (_U_(0x3) << ADC_EMR_CMPMODE_Pos)              /**< (ADC_EMR) Comparison Mode Mask */
#define ADC_EMR_CMPMODE(value)              (ADC_EMR_CMPMODE_Msk & ((value) << ADC_EMR_CMPMODE_Pos))
#define   ADC_EMR_CMPMODE_LOW_Val           _U_(0x0)                                       /**< (ADC_EMR) When the converted data is lower than the low threshold of the window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit system from Wait mode.  */
#define   ADC_EMR_CMPMODE_HIGH_Val          _U_(0x1)                                       /**< (ADC_EMR) When the converted data is higher than the high threshold of the window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit system from Wait mode.  */
#define   ADC_EMR_CMPMODE_IN_Val            _U_(0x2)                                       /**< (ADC_EMR) When the converted data is in the comparison window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit system from Wait mode.  */
#define   ADC_EMR_CMPMODE_OUT_Val           _U_(0x3)                                       /**< (ADC_EMR) When the converted data is out of the comparison window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit system from Wait mode.  */
#define ADC_EMR_CMPMODE_LOW                 (ADC_EMR_CMPMODE_LOW_Val << ADC_EMR_CMPMODE_Pos)  /**< (ADC_EMR) When the converted data is lower than the low threshold of the window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit system from Wait mode. Position  */
#define ADC_EMR_CMPMODE_HIGH                (ADC_EMR_CMPMODE_HIGH_Val << ADC_EMR_CMPMODE_Pos)  /**< (ADC_EMR) When the converted data is higher than the high threshold of the window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit system from Wait mode. Position  */
#define ADC_EMR_CMPMODE_IN                  (ADC_EMR_CMPMODE_IN_Val << ADC_EMR_CMPMODE_Pos)  /**< (ADC_EMR) When the converted data is in the comparison window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit system from Wait mode. Position  */
#define ADC_EMR_CMPMODE_OUT                 (ADC_EMR_CMPMODE_OUT_Val << ADC_EMR_CMPMODE_Pos)  /**< (ADC_EMR) When the converted data is out of the comparison window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit system from Wait mode. Position  */
#define ADC_EMR_CMPTYPE_Pos                 2                                              /**< (ADC_EMR) Comparison Type Position */
#define ADC_EMR_CMPTYPE_Msk                 (_U_(0x1) << ADC_EMR_CMPTYPE_Pos)              /**< (ADC_EMR) Comparison Type Mask */
#define ADC_EMR_CMPTYPE                     ADC_EMR_CMPTYPE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_EMR_CMPTYPE_Msk instead */
#define   ADC_EMR_CMPTYPE_FLAG_ONLY_Val     _U_(0x0)                                       /**< (ADC_EMR) Any conversion is performed and comparison function drives the COMPE flag.  */
#define   ADC_EMR_CMPTYPE_START_CONDITION_Val _U_(0x1)                                       /**< (ADC_EMR) Comparison conditions must be met to start the storage of all conversions until the CMPRST bit is set.  */
#define ADC_EMR_CMPTYPE_FLAG_ONLY           (ADC_EMR_CMPTYPE_FLAG_ONLY_Val << ADC_EMR_CMPTYPE_Pos)  /**< (ADC_EMR) Any conversion is performed and comparison function drives the COMPE flag. Position  */
#define ADC_EMR_CMPTYPE_START_CONDITION     (ADC_EMR_CMPTYPE_START_CONDITION_Val << ADC_EMR_CMPTYPE_Pos)  /**< (ADC_EMR) Comparison conditions must be met to start the storage of all conversions until the CMPRST bit is set. Position  */
#define ADC_EMR_CMPSEL_Pos                  4                                              /**< (ADC_EMR) Comparison Selected Channel Position */
#define ADC_EMR_CMPSEL_Msk                  (_U_(0xF) << ADC_EMR_CMPSEL_Pos)               /**< (ADC_EMR) Comparison Selected Channel Mask */
#define ADC_EMR_CMPSEL(value)               (ADC_EMR_CMPSEL_Msk & ((value) << ADC_EMR_CMPSEL_Pos))
#define ADC_EMR_CMPALL_Pos                  9                                              /**< (ADC_EMR) Compare All Channels Position */
#define ADC_EMR_CMPALL_Msk                  (_U_(0x1) << ADC_EMR_CMPALL_Pos)               /**< (ADC_EMR) Compare All Channels Mask */
#define ADC_EMR_CMPALL                      ADC_EMR_CMPALL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_EMR_CMPALL_Msk instead */
#define ADC_EMR_CMPFILTER_Pos               12                                             /**< (ADC_EMR) Compare Event Filtering Position */
#define ADC_EMR_CMPFILTER_Msk               (_U_(0x3) << ADC_EMR_CMPFILTER_Pos)            /**< (ADC_EMR) Compare Event Filtering Mask */
#define ADC_EMR_CMPFILTER(value)            (ADC_EMR_CMPFILTER_Msk & ((value) << ADC_EMR_CMPFILTER_Pos))
#define ADC_EMR_OSR_Pos                     16                                             /**< (ADC_EMR) Over Sampling Rate Position */
#define ADC_EMR_OSR_Msk                     (_U_(0x3) << ADC_EMR_OSR_Pos)                  /**< (ADC_EMR) Over Sampling Rate Mask */
#define ADC_EMR_OSR(value)                  (ADC_EMR_OSR_Msk & ((value) << ADC_EMR_OSR_Pos))
#define   ADC_EMR_OSR_NO_AVERAGE_Val        _U_(0x0)                                       /**< (ADC_EMR) No averaging. ADC sample rate is maximum.  */
#define   ADC_EMR_OSR_OSR4_Val              _U_(0x1)                                       /**< (ADC_EMR) 1-bit enhanced resolution by averaging. ADC sample rate divided by 4.  */
#define   ADC_EMR_OSR_OSR16_Val             _U_(0x2)                                       /**< (ADC_EMR) 2-bit enhanced resolution by averaging. ADC sample rate divided by 16.  */
#define ADC_EMR_OSR_NO_AVERAGE              (ADC_EMR_OSR_NO_AVERAGE_Val << ADC_EMR_OSR_Pos)  /**< (ADC_EMR) No averaging. ADC sample rate is maximum. Position  */
#define ADC_EMR_OSR_OSR4                    (ADC_EMR_OSR_OSR4_Val << ADC_EMR_OSR_Pos)      /**< (ADC_EMR) 1-bit enhanced resolution by averaging. ADC sample rate divided by 4. Position  */
#define ADC_EMR_OSR_OSR16                   (ADC_EMR_OSR_OSR16_Val << ADC_EMR_OSR_Pos)     /**< (ADC_EMR) 2-bit enhanced resolution by averaging. ADC sample rate divided by 16. Position  */
#define ADC_EMR_ASTE_Pos                    20                                             /**< (ADC_EMR) Averaging on Single Trigger Event Position */
#define ADC_EMR_ASTE_Msk                    (_U_(0x1) << ADC_EMR_ASTE_Pos)                 /**< (ADC_EMR) Averaging on Single Trigger Event Mask */
#define ADC_EMR_ASTE                        ADC_EMR_ASTE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_EMR_ASTE_Msk instead */
#define   ADC_EMR_ASTE_MULTI_TRIG_AVERAGE_Val _U_(0x0)                                       /**< (ADC_EMR) The average requests several trigger events.  */
#define   ADC_EMR_ASTE_SINGLE_TRIG_AVERAGE_Val _U_(0x1)                                       /**< (ADC_EMR) The average requests only one trigger event.  */
#define ADC_EMR_ASTE_MULTI_TRIG_AVERAGE     (ADC_EMR_ASTE_MULTI_TRIG_AVERAGE_Val << ADC_EMR_ASTE_Pos)  /**< (ADC_EMR) The average requests several trigger events. Position  */
#define ADC_EMR_ASTE_SINGLE_TRIG_AVERAGE    (ADC_EMR_ASTE_SINGLE_TRIG_AVERAGE_Val << ADC_EMR_ASTE_Pos)  /**< (ADC_EMR) The average requests only one trigger event. Position  */
#define ADC_EMR_SRCCLK_Pos                  21                                             /**< (ADC_EMR) External Clock Selection Position */
#define ADC_EMR_SRCCLK_Msk                  (_U_(0x1) << ADC_EMR_SRCCLK_Pos)               /**< (ADC_EMR) External Clock Selection Mask */
#define ADC_EMR_SRCCLK                      ADC_EMR_SRCCLK_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_EMR_SRCCLK_Msk instead */
#define   ADC_EMR_SRCCLK_PERIPH_CLK_Val     _U_(0x0)                                       /**< (ADC_EMR) The peripheral clock is the source for the ADC prescaler.  */
#define   ADC_EMR_SRCCLK_GCLK_Val           _U_(0x1)                                       /**< (ADC_EMR) GCLK is the source clock for the ADC prescaler, thus the ADC clock can be independent of the core/peripheral clock.  */
#define ADC_EMR_SRCCLK_PERIPH_CLK           (ADC_EMR_SRCCLK_PERIPH_CLK_Val << ADC_EMR_SRCCLK_Pos)  /**< (ADC_EMR) The peripheral clock is the source for the ADC prescaler. Position  */
#define ADC_EMR_SRCCLK_GCLK                 (ADC_EMR_SRCCLK_GCLK_Val << ADC_EMR_SRCCLK_Pos)  /**< (ADC_EMR) GCLK is the source clock for the ADC prescaler, thus the ADC clock can be independent of the core/peripheral clock. Position  */
#define ADC_EMR_TAG_Pos                     24                                             /**< (ADC_EMR) Tag of ADC_LCDR Position */
#define ADC_EMR_TAG_Msk                     (_U_(0x1) << ADC_EMR_TAG_Pos)                  /**< (ADC_EMR) Tag of ADC_LCDR Mask */
#define ADC_EMR_TAG                         ADC_EMR_TAG_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_EMR_TAG_Msk instead */
#define ADC_EMR_SIGNMODE_Pos                25                                             /**< (ADC_EMR) Sign Mode Position */
#define ADC_EMR_SIGNMODE_Msk                (_U_(0x3) << ADC_EMR_SIGNMODE_Pos)             /**< (ADC_EMR) Sign Mode Mask */
#define ADC_EMR_SIGNMODE(value)             (ADC_EMR_SIGNMODE_Msk & ((value) << ADC_EMR_SIGNMODE_Pos))
#define   ADC_EMR_SIGNMODE_SE_UNSG_DF_SIGN_Val _U_(0x0)                                       /**< (ADC_EMR) Single-Ended channels: Unsigned conversions.Differential channels: Signed conversions.  */
#define   ADC_EMR_SIGNMODE_SE_SIGN_DF_UNSG_Val _U_(0x1)                                       /**< (ADC_EMR) Single-Ended channels: Signed conversions.Differential channels: Unsigned conversions.  */
#define   ADC_EMR_SIGNMODE_ALL_UNSIGNED_Val _U_(0x2)                                       /**< (ADC_EMR) All channels: Unsigned conversions.  */
#define   ADC_EMR_SIGNMODE_ALL_SIGNED_Val   _U_(0x3)                                       /**< (ADC_EMR) All channels: Signed conversions.  */
#define ADC_EMR_SIGNMODE_SE_UNSG_DF_SIGN    (ADC_EMR_SIGNMODE_SE_UNSG_DF_SIGN_Val << ADC_EMR_SIGNMODE_Pos)  /**< (ADC_EMR) Single-Ended channels: Unsigned conversions.Differential channels: Signed conversions. Position  */
#define ADC_EMR_SIGNMODE_SE_SIGN_DF_UNSG    (ADC_EMR_SIGNMODE_SE_SIGN_DF_UNSG_Val << ADC_EMR_SIGNMODE_Pos)  /**< (ADC_EMR) Single-Ended channels: Signed conversions.Differential channels: Unsigned conversions. Position  */
#define ADC_EMR_SIGNMODE_ALL_UNSIGNED       (ADC_EMR_SIGNMODE_ALL_UNSIGNED_Val << ADC_EMR_SIGNMODE_Pos)  /**< (ADC_EMR) All channels: Unsigned conversions. Position  */
#define ADC_EMR_SIGNMODE_ALL_SIGNED         (ADC_EMR_SIGNMODE_ALL_SIGNED_Val << ADC_EMR_SIGNMODE_Pos)  /**< (ADC_EMR) All channels: Signed conversions. Position  */
#define ADC_EMR_ADCMODE_Pos                 28                                             /**< (ADC_EMR) ADC Running Mode Position */
#define ADC_EMR_ADCMODE_Msk                 (_U_(0x3) << ADC_EMR_ADCMODE_Pos)              /**< (ADC_EMR) ADC Running Mode Mask */
#define ADC_EMR_ADCMODE(value)              (ADC_EMR_ADCMODE_Msk & ((value) << ADC_EMR_ADCMODE_Pos))
#define   ADC_EMR_ADCMODE_NORMAL_Val        _U_(0x0)                                       /**< (ADC_EMR) Normal mode of operation.  */
#define   ADC_EMR_ADCMODE_OFFSET_ERROR_Val  _U_(0x1)                                       /**< (ADC_EMR) Offset Error mode to measure the offset error. See Table 7-6.  */
#define   ADC_EMR_ADCMODE_GAIN_ERROR_HIGH_Val _U_(0x2)                                       /**< (ADC_EMR) Gain Error mode to measure the gain error. See Table 7-6.  */
#define   ADC_EMR_ADCMODE_GAIN_ERROR_LOW_Val _U_(0x3)                                       /**< (ADC_EMR) Gain Error mode to measure the gain error. See Table 7-6.  */
#define ADC_EMR_ADCMODE_NORMAL              (ADC_EMR_ADCMODE_NORMAL_Val << ADC_EMR_ADCMODE_Pos)  /**< (ADC_EMR) Normal mode of operation. Position  */
#define ADC_EMR_ADCMODE_OFFSET_ERROR        (ADC_EMR_ADCMODE_OFFSET_ERROR_Val << ADC_EMR_ADCMODE_Pos)  /**< (ADC_EMR) Offset Error mode to measure the offset error. See Table 7-6. Position  */
#define ADC_EMR_ADCMODE_GAIN_ERROR_HIGH     (ADC_EMR_ADCMODE_GAIN_ERROR_HIGH_Val << ADC_EMR_ADCMODE_Pos)  /**< (ADC_EMR) Gain Error mode to measure the gain error. See Table 7-6. Position  */
#define ADC_EMR_ADCMODE_GAIN_ERROR_LOW      (ADC_EMR_ADCMODE_GAIN_ERROR_LOW_Val << ADC_EMR_ADCMODE_Pos)  /**< (ADC_EMR) Gain Error mode to measure the gain error. See Table 7-6. Position  */
#define ADC_EMR_MASK                        _U_(0x373332F7)                                /**< \deprecated (ADC_EMR) Register MASK  (Use ADC_EMR_Msk instead)  */
#define ADC_EMR_Msk                         _U_(0x373332F7)                                /**< (ADC_EMR) Register Mask  */


/* -------- ADC_CWR : (ADC Offset: 0x44) (R/W 32) Compare Window Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t LOWTHRES:14;               /**< bit:  0..13  Low Threshold                            */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t HIGHTHRES:14;              /**< bit: 16..29  High Threshold                           */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ADC_CWR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_CWR_OFFSET                      (0x44)                                        /**<  (ADC_CWR) Compare Window Register  Offset */

#define ADC_CWR_LOWTHRES_Pos                0                                              /**< (ADC_CWR) Low Threshold Position */
#define ADC_CWR_LOWTHRES_Msk                (_U_(0x3FFF) << ADC_CWR_LOWTHRES_Pos)          /**< (ADC_CWR) Low Threshold Mask */
#define ADC_CWR_LOWTHRES(value)             (ADC_CWR_LOWTHRES_Msk & ((value) << ADC_CWR_LOWTHRES_Pos))
#define ADC_CWR_HIGHTHRES_Pos               16                                             /**< (ADC_CWR) High Threshold Position */
#define ADC_CWR_HIGHTHRES_Msk               (_U_(0x3FFF) << ADC_CWR_HIGHTHRES_Pos)         /**< (ADC_CWR) High Threshold Mask */
#define ADC_CWR_HIGHTHRES(value)            (ADC_CWR_HIGHTHRES_Msk & ((value) << ADC_CWR_HIGHTHRES_Pos))
#define ADC_CWR_MASK                        _U_(0x3FFF3FFF)                                /**< \deprecated (ADC_CWR) Register MASK  (Use ADC_CWR_Msk instead)  */
#define ADC_CWR_Msk                         _U_(0x3FFF3FFF)                                /**< (ADC_CWR) Register Mask  */


/* -------- ADC_COR : (ADC Offset: 0x4c) (R/W 32) Channel Offset Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t DIFF0:1;                   /**< bit:     16  Differential Inputs for Channel 0        */
    uint32_t DIFF1:1;                   /**< bit:     17  Differential Inputs for Channel 1        */
    uint32_t DIFF2:1;                   /**< bit:     18  Differential Inputs for Channel 2        */
    uint32_t DIFF3:1;                   /**< bit:     19  Differential Inputs for Channel 3        */
    uint32_t DIFF4:1;                   /**< bit:     20  Differential Inputs for Channel 4        */
    uint32_t DIFF5:1;                   /**< bit:     21  Differential Inputs for Channel 5        */
    uint32_t DIFF6:1;                   /**< bit:     22  Differential Inputs for Channel 6        */
    uint32_t DIFF7:1;                   /**< bit:     23  Differential Inputs for Channel 7        */
    uint32_t DIFF8:1;                   /**< bit:     24  Differential Inputs for Channel 8        */
    uint32_t DIFF9:1;                   /**< bit:     25  Differential Inputs for Channel 9        */
    uint32_t DIFF10:1;                  /**< bit:     26  Differential Inputs for Channel 10       */
    uint32_t DIFF11:1;                  /**< bit:     27  Differential Inputs for Channel 11       */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t DIFF:12;                   /**< bit: 16..27  Differential Inputs for Channel xx       */
    uint32_t :4;                        /**< bit: 28..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} ADC_COR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_COR_OFFSET                      (0x4C)                                        /**<  (ADC_COR) Channel Offset Register  Offset */

#define ADC_COR_DIFF0_Pos                   16                                             /**< (ADC_COR) Differential Inputs for Channel 0 Position */
#define ADC_COR_DIFF0_Msk                   (_U_(0x1) << ADC_COR_DIFF0_Pos)                /**< (ADC_COR) Differential Inputs for Channel 0 Mask */
#define ADC_COR_DIFF0                       ADC_COR_DIFF0_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_COR_DIFF0_Msk instead */
#define ADC_COR_DIFF1_Pos                   17                                             /**< (ADC_COR) Differential Inputs for Channel 1 Position */
#define ADC_COR_DIFF1_Msk                   (_U_(0x1) << ADC_COR_DIFF1_Pos)                /**< (ADC_COR) Differential Inputs for Channel 1 Mask */
#define ADC_COR_DIFF1                       ADC_COR_DIFF1_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_COR_DIFF1_Msk instead */
#define ADC_COR_DIFF2_Pos                   18                                             /**< (ADC_COR) Differential Inputs for Channel 2 Position */
#define ADC_COR_DIFF2_Msk                   (_U_(0x1) << ADC_COR_DIFF2_Pos)                /**< (ADC_COR) Differential Inputs for Channel 2 Mask */
#define ADC_COR_DIFF2                       ADC_COR_DIFF2_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_COR_DIFF2_Msk instead */
#define ADC_COR_DIFF3_Pos                   19                                             /**< (ADC_COR) Differential Inputs for Channel 3 Position */
#define ADC_COR_DIFF3_Msk                   (_U_(0x1) << ADC_COR_DIFF3_Pos)                /**< (ADC_COR) Differential Inputs for Channel 3 Mask */
#define ADC_COR_DIFF3                       ADC_COR_DIFF3_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_COR_DIFF3_Msk instead */
#define ADC_COR_DIFF4_Pos                   20                                             /**< (ADC_COR) Differential Inputs for Channel 4 Position */
#define ADC_COR_DIFF4_Msk                   (_U_(0x1) << ADC_COR_DIFF4_Pos)                /**< (ADC_COR) Differential Inputs for Channel 4 Mask */
#define ADC_COR_DIFF4                       ADC_COR_DIFF4_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_COR_DIFF4_Msk instead */
#define ADC_COR_DIFF5_Pos                   21                                             /**< (ADC_COR) Differential Inputs for Channel 5 Position */
#define ADC_COR_DIFF5_Msk                   (_U_(0x1) << ADC_COR_DIFF5_Pos)                /**< (ADC_COR) Differential Inputs for Channel 5 Mask */
#define ADC_COR_DIFF5                       ADC_COR_DIFF5_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_COR_DIFF5_Msk instead */
#define ADC_COR_DIFF6_Pos                   22                                             /**< (ADC_COR) Differential Inputs for Channel 6 Position */
#define ADC_COR_DIFF6_Msk                   (_U_(0x1) << ADC_COR_DIFF6_Pos)                /**< (ADC_COR) Differential Inputs for Channel 6 Mask */
#define ADC_COR_DIFF6                       ADC_COR_DIFF6_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_COR_DIFF6_Msk instead */
#define ADC_COR_DIFF7_Pos                   23                                             /**< (ADC_COR) Differential Inputs for Channel 7 Position */
#define ADC_COR_DIFF7_Msk                   (_U_(0x1) << ADC_COR_DIFF7_Pos)                /**< (ADC_COR) Differential Inputs for Channel 7 Mask */
#define ADC_COR_DIFF7                       ADC_COR_DIFF7_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_COR_DIFF7_Msk instead */
#define ADC_COR_DIFF8_Pos                   24                                             /**< (ADC_COR) Differential Inputs for Channel 8 Position */
#define ADC_COR_DIFF8_Msk                   (_U_(0x1) << ADC_COR_DIFF8_Pos)                /**< (ADC_COR) Differential Inputs for Channel 8 Mask */
#define ADC_COR_DIFF8                       ADC_COR_DIFF8_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_COR_DIFF8_Msk instead */
#define ADC_COR_DIFF9_Pos                   25                                             /**< (ADC_COR) Differential Inputs for Channel 9 Position */
#define ADC_COR_DIFF9_Msk                   (_U_(0x1) << ADC_COR_DIFF9_Pos)                /**< (ADC_COR) Differential Inputs for Channel 9 Mask */
#define ADC_COR_DIFF9                       ADC_COR_DIFF9_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_COR_DIFF9_Msk instead */
#define ADC_COR_DIFF10_Pos                  26                                             /**< (ADC_COR) Differential Inputs for Channel 10 Position */
#define ADC_COR_DIFF10_Msk                  (_U_(0x1) << ADC_COR_DIFF10_Pos)               /**< (ADC_COR) Differential Inputs for Channel 10 Mask */
#define ADC_COR_DIFF10                      ADC_COR_DIFF10_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_COR_DIFF10_Msk instead */
#define ADC_COR_DIFF11_Pos                  27                                             /**< (ADC_COR) Differential Inputs for Channel 11 Position */
#define ADC_COR_DIFF11_Msk                  (_U_(0x1) << ADC_COR_DIFF11_Pos)               /**< (ADC_COR) Differential Inputs for Channel 11 Mask */
#define ADC_COR_DIFF11                      ADC_COR_DIFF11_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_COR_DIFF11_Msk instead */
#define ADC_COR_MASK                        _U_(0xFFF0000)                                 /**< \deprecated (ADC_COR) Register MASK  (Use ADC_COR_Msk instead)  */
#define ADC_COR_Msk                         _U_(0xFFF0000)                                 /**< (ADC_COR) Register Mask  */

#define ADC_COR_DIFF_Pos                    16                                             /**< (ADC_COR Position) Differential Inputs for Channel xx */
#define ADC_COR_DIFF_Msk                    (_U_(0xFFF) << ADC_COR_DIFF_Pos)               /**< (ADC_COR Mask) DIFF */
#define ADC_COR_DIFF(value)                 (ADC_COR_DIFF_Msk & ((value) << ADC_COR_DIFF_Pos))  

/* -------- ADC_CDR : (ADC Offset: 0x50) (R/ 32) Channel Data Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DATA:14;                   /**< bit:  0..13  Converted Data                           */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ADC_CDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_CDR_OFFSET                      (0x50)                                        /**<  (ADC_CDR) Channel Data Register  Offset */

#define ADC_CDR_DATA_Pos                    0                                              /**< (ADC_CDR) Converted Data Position */
#define ADC_CDR_DATA_Msk                    (_U_(0x3FFF) << ADC_CDR_DATA_Pos)              /**< (ADC_CDR) Converted Data Mask */
#define ADC_CDR_DATA(value)                 (ADC_CDR_DATA_Msk & ((value) << ADC_CDR_DATA_Pos))
#define ADC_CDR_MASK                        _U_(0x3FFF)                                    /**< \deprecated (ADC_CDR) Register MASK  (Use ADC_CDR_Msk instead)  */
#define ADC_CDR_Msk                         _U_(0x3FFF)                                    /**< (ADC_CDR) Register Mask  */


/* -------- ADC_ACR : (ADC Offset: 0x94) (R/W 32) Analog Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PENDETSENS:2;              /**< bit:   0..1  Pen Detection Sensitivity                */
    uint32_t :6;                        /**< bit:   2..7  Reserved */
    uint32_t IBCTL:2;                   /**< bit:   8..9  ADC Bias Current Control                 */
    uint32_t :22;                       /**< bit: 10..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ADC_ACR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_ACR_OFFSET                      (0x94)                                        /**<  (ADC_ACR) Analog Control Register  Offset */

#define ADC_ACR_PENDETSENS_Pos              0                                              /**< (ADC_ACR) Pen Detection Sensitivity Position */
#define ADC_ACR_PENDETSENS_Msk              (_U_(0x3) << ADC_ACR_PENDETSENS_Pos)           /**< (ADC_ACR) Pen Detection Sensitivity Mask */
#define ADC_ACR_PENDETSENS(value)           (ADC_ACR_PENDETSENS_Msk & ((value) << ADC_ACR_PENDETSENS_Pos))
#define ADC_ACR_IBCTL_Pos                   8                                              /**< (ADC_ACR) ADC Bias Current Control Position */
#define ADC_ACR_IBCTL_Msk                   (_U_(0x3) << ADC_ACR_IBCTL_Pos)                /**< (ADC_ACR) ADC Bias Current Control Mask */
#define ADC_ACR_IBCTL(value)                (ADC_ACR_IBCTL_Msk & ((value) << ADC_ACR_IBCTL_Pos))
#define ADC_ACR_MASK                        _U_(0x303)                                     /**< \deprecated (ADC_ACR) Register MASK  (Use ADC_ACR_Msk instead)  */
#define ADC_ACR_Msk                         _U_(0x303)                                     /**< (ADC_ACR) Register Mask  */


/* -------- ADC_TSMR : (ADC Offset: 0xb0) (R/W 32) Touchscreen Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TSMODE:2;                  /**< bit:   0..1  Touchscreen Mode                         */
    uint32_t :2;                        /**< bit:   2..3  Reserved */
    uint32_t TSAV:2;                    /**< bit:   4..5  Touchscreen Average                      */
    uint32_t :2;                        /**< bit:   6..7  Reserved */
    uint32_t TSFREQ:4;                  /**< bit:  8..11  Touchscreen Frequency                    */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t TSSCTIM:4;                 /**< bit: 16..19  Touchscreen Switches Closure Time        */
    uint32_t :2;                        /**< bit: 20..21  Reserved */
    uint32_t NOTSDMA:1;                 /**< bit:     22  No TouchScreen DMA                       */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t PENDET:1;                  /**< bit:     24  Pen Contact Detection Enable             */
    uint32_t :3;                        /**< bit: 25..27  Reserved */
    uint32_t PENDBC:4;                  /**< bit: 28..31  Pen Detect Debouncing Period             */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ADC_TSMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_TSMR_OFFSET                     (0xB0)                                        /**<  (ADC_TSMR) Touchscreen Mode Register  Offset */

#define ADC_TSMR_TSMODE_Pos                 0                                              /**< (ADC_TSMR) Touchscreen Mode Position */
#define ADC_TSMR_TSMODE_Msk                 (_U_(0x3) << ADC_TSMR_TSMODE_Pos)              /**< (ADC_TSMR) Touchscreen Mode Mask */
#define ADC_TSMR_TSMODE(value)              (ADC_TSMR_TSMODE_Msk & ((value) << ADC_TSMR_TSMODE_Pos))
#define   ADC_TSMR_TSMODE_NONE_Val          _U_(0x0)                                       /**< (ADC_TSMR) No Touchscreen  */
#define   ADC_TSMR_TSMODE_4_WIRE_NO_PM_Val  _U_(0x1)                                       /**< (ADC_TSMR) 4-wire Touchscreen without pressure measurement  */
#define   ADC_TSMR_TSMODE_4_WIRE_Val        _U_(0x2)                                       /**< (ADC_TSMR) 4-wire Touchscreen with pressure measurement  */
#define   ADC_TSMR_TSMODE_5_WIRE_Val        _U_(0x3)                                       /**< (ADC_TSMR) 5-wire Touchscreen  */
#define ADC_TSMR_TSMODE_NONE                (ADC_TSMR_TSMODE_NONE_Val << ADC_TSMR_TSMODE_Pos)  /**< (ADC_TSMR) No Touchscreen Position  */
#define ADC_TSMR_TSMODE_4_WIRE_NO_PM        (ADC_TSMR_TSMODE_4_WIRE_NO_PM_Val << ADC_TSMR_TSMODE_Pos)  /**< (ADC_TSMR) 4-wire Touchscreen without pressure measurement Position  */
#define ADC_TSMR_TSMODE_4_WIRE              (ADC_TSMR_TSMODE_4_WIRE_Val << ADC_TSMR_TSMODE_Pos)  /**< (ADC_TSMR) 4-wire Touchscreen with pressure measurement Position  */
#define ADC_TSMR_TSMODE_5_WIRE              (ADC_TSMR_TSMODE_5_WIRE_Val << ADC_TSMR_TSMODE_Pos)  /**< (ADC_TSMR) 5-wire Touchscreen Position  */
#define ADC_TSMR_TSAV_Pos                   4                                              /**< (ADC_TSMR) Touchscreen Average Position */
#define ADC_TSMR_TSAV_Msk                   (_U_(0x3) << ADC_TSMR_TSAV_Pos)                /**< (ADC_TSMR) Touchscreen Average Mask */
#define ADC_TSMR_TSAV(value)                (ADC_TSMR_TSAV_Msk & ((value) << ADC_TSMR_TSAV_Pos))
#define   ADC_TSMR_TSAV_NO_FILTER_Val       _U_(0x0)                                       /**< (ADC_TSMR) No Filtering. Only one ADC conversion per measure  */
#define   ADC_TSMR_TSAV_AVG2CONV_Val        _U_(0x1)                                       /**< (ADC_TSMR) Averages 2 ADC conversions  */
#define   ADC_TSMR_TSAV_AVG4CONV_Val        _U_(0x2)                                       /**< (ADC_TSMR) Averages 4 ADC conversions  */
#define   ADC_TSMR_TSAV_AVG8CONV_Val        _U_(0x3)                                       /**< (ADC_TSMR) Averages 8 ADC conversions  */
#define ADC_TSMR_TSAV_NO_FILTER             (ADC_TSMR_TSAV_NO_FILTER_Val << ADC_TSMR_TSAV_Pos)  /**< (ADC_TSMR) No Filtering. Only one ADC conversion per measure Position  */
#define ADC_TSMR_TSAV_AVG2CONV              (ADC_TSMR_TSAV_AVG2CONV_Val << ADC_TSMR_TSAV_Pos)  /**< (ADC_TSMR) Averages 2 ADC conversions Position  */
#define ADC_TSMR_TSAV_AVG4CONV              (ADC_TSMR_TSAV_AVG4CONV_Val << ADC_TSMR_TSAV_Pos)  /**< (ADC_TSMR) Averages 4 ADC conversions Position  */
#define ADC_TSMR_TSAV_AVG8CONV              (ADC_TSMR_TSAV_AVG8CONV_Val << ADC_TSMR_TSAV_Pos)  /**< (ADC_TSMR) Averages 8 ADC conversions Position  */
#define ADC_TSMR_TSFREQ_Pos                 8                                              /**< (ADC_TSMR) Touchscreen Frequency Position */
#define ADC_TSMR_TSFREQ_Msk                 (_U_(0xF) << ADC_TSMR_TSFREQ_Pos)              /**< (ADC_TSMR) Touchscreen Frequency Mask */
#define ADC_TSMR_TSFREQ(value)              (ADC_TSMR_TSFREQ_Msk & ((value) << ADC_TSMR_TSFREQ_Pos))
#define ADC_TSMR_TSSCTIM_Pos                16                                             /**< (ADC_TSMR) Touchscreen Switches Closure Time Position */
#define ADC_TSMR_TSSCTIM_Msk                (_U_(0xF) << ADC_TSMR_TSSCTIM_Pos)             /**< (ADC_TSMR) Touchscreen Switches Closure Time Mask */
#define ADC_TSMR_TSSCTIM(value)             (ADC_TSMR_TSSCTIM_Msk & ((value) << ADC_TSMR_TSSCTIM_Pos))
#define ADC_TSMR_NOTSDMA_Pos                22                                             /**< (ADC_TSMR) No TouchScreen DMA Position */
#define ADC_TSMR_NOTSDMA_Msk                (_U_(0x1) << ADC_TSMR_NOTSDMA_Pos)             /**< (ADC_TSMR) No TouchScreen DMA Mask */
#define ADC_TSMR_NOTSDMA                    ADC_TSMR_NOTSDMA_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_TSMR_NOTSDMA_Msk instead */
#define ADC_TSMR_PENDET_Pos                 24                                             /**< (ADC_TSMR) Pen Contact Detection Enable Position */
#define ADC_TSMR_PENDET_Msk                 (_U_(0x1) << ADC_TSMR_PENDET_Pos)              /**< (ADC_TSMR) Pen Contact Detection Enable Mask */
#define ADC_TSMR_PENDET                     ADC_TSMR_PENDET_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_TSMR_PENDET_Msk instead */
#define ADC_TSMR_PENDBC_Pos                 28                                             /**< (ADC_TSMR) Pen Detect Debouncing Period Position */
#define ADC_TSMR_PENDBC_Msk                 (_U_(0xF) << ADC_TSMR_PENDBC_Pos)              /**< (ADC_TSMR) Pen Detect Debouncing Period Mask */
#define ADC_TSMR_PENDBC(value)              (ADC_TSMR_PENDBC_Msk & ((value) << ADC_TSMR_PENDBC_Pos))
#define ADC_TSMR_MASK                       _U_(0xF14F0F33)                                /**< \deprecated (ADC_TSMR) Register MASK  (Use ADC_TSMR_Msk instead)  */
#define ADC_TSMR_Msk                        _U_(0xF14F0F33)                                /**< (ADC_TSMR) Register Mask  */


/* -------- ADC_XPOSR : (ADC Offset: 0xb4) (R/ 32) Touchscreen X Position Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XPOS:12;                   /**< bit:  0..11  X Position                               */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t XSCALE:12;                 /**< bit: 16..27  Scale of XPOS                            */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ADC_XPOSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_XPOSR_OFFSET                    (0xB4)                                        /**<  (ADC_XPOSR) Touchscreen X Position Register  Offset */

#define ADC_XPOSR_XPOS_Pos                  0                                              /**< (ADC_XPOSR) X Position Position */
#define ADC_XPOSR_XPOS_Msk                  (_U_(0xFFF) << ADC_XPOSR_XPOS_Pos)             /**< (ADC_XPOSR) X Position Mask */
#define ADC_XPOSR_XPOS(value)               (ADC_XPOSR_XPOS_Msk & ((value) << ADC_XPOSR_XPOS_Pos))
#define ADC_XPOSR_XSCALE_Pos                16                                             /**< (ADC_XPOSR) Scale of XPOS Position */
#define ADC_XPOSR_XSCALE_Msk                (_U_(0xFFF) << ADC_XPOSR_XSCALE_Pos)           /**< (ADC_XPOSR) Scale of XPOS Mask */
#define ADC_XPOSR_XSCALE(value)             (ADC_XPOSR_XSCALE_Msk & ((value) << ADC_XPOSR_XSCALE_Pos))
#define ADC_XPOSR_MASK                      _U_(0xFFF0FFF)                                 /**< \deprecated (ADC_XPOSR) Register MASK  (Use ADC_XPOSR_Msk instead)  */
#define ADC_XPOSR_Msk                       _U_(0xFFF0FFF)                                 /**< (ADC_XPOSR) Register Mask  */


/* -------- ADC_YPOSR : (ADC Offset: 0xb8) (R/ 32) Touchscreen Y Position Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t YPOS:12;                   /**< bit:  0..11  Y Position                               */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t YSCALE:12;                 /**< bit: 16..27  Scale of YPOS                            */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ADC_YPOSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_YPOSR_OFFSET                    (0xB8)                                        /**<  (ADC_YPOSR) Touchscreen Y Position Register  Offset */

#define ADC_YPOSR_YPOS_Pos                  0                                              /**< (ADC_YPOSR) Y Position Position */
#define ADC_YPOSR_YPOS_Msk                  (_U_(0xFFF) << ADC_YPOSR_YPOS_Pos)             /**< (ADC_YPOSR) Y Position Mask */
#define ADC_YPOSR_YPOS(value)               (ADC_YPOSR_YPOS_Msk & ((value) << ADC_YPOSR_YPOS_Pos))
#define ADC_YPOSR_YSCALE_Pos                16                                             /**< (ADC_YPOSR) Scale of YPOS Position */
#define ADC_YPOSR_YSCALE_Msk                (_U_(0xFFF) << ADC_YPOSR_YSCALE_Pos)           /**< (ADC_YPOSR) Scale of YPOS Mask */
#define ADC_YPOSR_YSCALE(value)             (ADC_YPOSR_YSCALE_Msk & ((value) << ADC_YPOSR_YSCALE_Pos))
#define ADC_YPOSR_MASK                      _U_(0xFFF0FFF)                                 /**< \deprecated (ADC_YPOSR) Register MASK  (Use ADC_YPOSR_Msk instead)  */
#define ADC_YPOSR_Msk                       _U_(0xFFF0FFF)                                 /**< (ADC_YPOSR) Register Mask  */


/* -------- ADC_PRESSR : (ADC Offset: 0xbc) (R/ 32) Touchscreen Pressure Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t Z1:12;                     /**< bit:  0..11  Data of Z1 Measurement                   */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t Z2:12;                     /**< bit: 16..27  Data of Z2 Measurement                   */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ADC_PRESSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_PRESSR_OFFSET                   (0xBC)                                        /**<  (ADC_PRESSR) Touchscreen Pressure Register  Offset */

#define ADC_PRESSR_Z1_Pos                   0                                              /**< (ADC_PRESSR) Data of Z1 Measurement Position */
#define ADC_PRESSR_Z1_Msk                   (_U_(0xFFF) << ADC_PRESSR_Z1_Pos)              /**< (ADC_PRESSR) Data of Z1 Measurement Mask */
#define ADC_PRESSR_Z1(value)                (ADC_PRESSR_Z1_Msk & ((value) << ADC_PRESSR_Z1_Pos))
#define ADC_PRESSR_Z2_Pos                   16                                             /**< (ADC_PRESSR) Data of Z2 Measurement Position */
#define ADC_PRESSR_Z2_Msk                   (_U_(0xFFF) << ADC_PRESSR_Z2_Pos)              /**< (ADC_PRESSR) Data of Z2 Measurement Mask */
#define ADC_PRESSR_Z2(value)                (ADC_PRESSR_Z2_Msk & ((value) << ADC_PRESSR_Z2_Pos))
#define ADC_PRESSR_MASK                     _U_(0xFFF0FFF)                                 /**< \deprecated (ADC_PRESSR) Register MASK  (Use ADC_PRESSR_Msk instead)  */
#define ADC_PRESSR_Msk                      _U_(0xFFF0FFF)                                 /**< (ADC_PRESSR) Register Mask  */


/* -------- ADC_TRGR : (ADC Offset: 0xc0) (R/W 32) Trigger Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TRGMOD:3;                  /**< bit:   0..2  Trigger Mode                             */
    uint32_t :13;                       /**< bit:  3..15  Reserved */
    uint32_t TRGPER:16;                 /**< bit: 16..31  Trigger Period                           */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ADC_TRGR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_TRGR_OFFSET                     (0xC0)                                        /**<  (ADC_TRGR) Trigger Register  Offset */

#define ADC_TRGR_TRGMOD_Pos                 0                                              /**< (ADC_TRGR) Trigger Mode Position */
#define ADC_TRGR_TRGMOD_Msk                 (_U_(0x7) << ADC_TRGR_TRGMOD_Pos)              /**< (ADC_TRGR) Trigger Mode Mask */
#define ADC_TRGR_TRGMOD(value)              (ADC_TRGR_TRGMOD_Msk & ((value) << ADC_TRGR_TRGMOD_Pos))
#define   ADC_TRGR_TRGMOD_NO_TRIGGER_Val    _U_(0x0)                                       /**< (ADC_TRGR) No trigger, only software trigger can start conversions  */
#define   ADC_TRGR_TRGMOD_EXT_TRIG_RISE_Val _U_(0x1)                                       /**< (ADC_TRGR) External trigger rising edge  */
#define   ADC_TRGR_TRGMOD_EXT_TRIG_FALL_Val _U_(0x2)                                       /**< (ADC_TRGR) External trigger falling edge  */
#define   ADC_TRGR_TRGMOD_EXT_TRIG_ANY_Val  _U_(0x3)                                       /**< (ADC_TRGR) External trigger any edge  */
#define   ADC_TRGR_TRGMOD_PEN_TRIG_Val      _U_(0x4)                                       /**< (ADC_TRGR) Pen Detect Trigger (shall be selected only if PENDET is set and TSAMOD = Touchscreen only mode)  */
#define   ADC_TRGR_TRGMOD_PERIOD_TRIG_Val   _U_(0x5)                                       /**< (ADC_TRGR) ADC internal periodic trigger (see field TRGPER)  */
#define   ADC_TRGR_TRGMOD_CONTINUOUS_Val    _U_(0x6)                                       /**< (ADC_TRGR) Continuous mode  */
#define ADC_TRGR_TRGMOD_NO_TRIGGER          (ADC_TRGR_TRGMOD_NO_TRIGGER_Val << ADC_TRGR_TRGMOD_Pos)  /**< (ADC_TRGR) No trigger, only software trigger can start conversions Position  */
#define ADC_TRGR_TRGMOD_EXT_TRIG_RISE       (ADC_TRGR_TRGMOD_EXT_TRIG_RISE_Val << ADC_TRGR_TRGMOD_Pos)  /**< (ADC_TRGR) External trigger rising edge Position  */
#define ADC_TRGR_TRGMOD_EXT_TRIG_FALL       (ADC_TRGR_TRGMOD_EXT_TRIG_FALL_Val << ADC_TRGR_TRGMOD_Pos)  /**< (ADC_TRGR) External trigger falling edge Position  */
#define ADC_TRGR_TRGMOD_EXT_TRIG_ANY        (ADC_TRGR_TRGMOD_EXT_TRIG_ANY_Val << ADC_TRGR_TRGMOD_Pos)  /**< (ADC_TRGR) External trigger any edge Position  */
#define ADC_TRGR_TRGMOD_PEN_TRIG            (ADC_TRGR_TRGMOD_PEN_TRIG_Val << ADC_TRGR_TRGMOD_Pos)  /**< (ADC_TRGR) Pen Detect Trigger (shall be selected only if PENDET is set and TSAMOD = Touchscreen only mode) Position  */
#define ADC_TRGR_TRGMOD_PERIOD_TRIG         (ADC_TRGR_TRGMOD_PERIOD_TRIG_Val << ADC_TRGR_TRGMOD_Pos)  /**< (ADC_TRGR) ADC internal periodic trigger (see field TRGPER) Position  */
#define ADC_TRGR_TRGMOD_CONTINUOUS          (ADC_TRGR_TRGMOD_CONTINUOUS_Val << ADC_TRGR_TRGMOD_Pos)  /**< (ADC_TRGR) Continuous mode Position  */
#define ADC_TRGR_TRGPER_Pos                 16                                             /**< (ADC_TRGR) Trigger Period Position */
#define ADC_TRGR_TRGPER_Msk                 (_U_(0xFFFF) << ADC_TRGR_TRGPER_Pos)           /**< (ADC_TRGR) Trigger Period Mask */
#define ADC_TRGR_TRGPER(value)              (ADC_TRGR_TRGPER_Msk & ((value) << ADC_TRGR_TRGPER_Pos))
#define ADC_TRGR_MASK                       _U_(0xFFFF0007)                                /**< \deprecated (ADC_TRGR) Register MASK  (Use ADC_TRGR_Msk instead)  */
#define ADC_TRGR_Msk                        _U_(0xFFFF0007)                                /**< (ADC_TRGR) Register Mask  */


/* -------- ADC_CVR : (ADC Offset: 0xd4) (R/W 32) Correction Values Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t OFFSETCORR:16;             /**< bit:  0..15  Offset Correction                        */
    uint32_t GAINCORR:16;               /**< bit: 16..31  Gain Correction                          */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ADC_CVR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_CVR_OFFSET                      (0xD4)                                        /**<  (ADC_CVR) Correction Values Register  Offset */

#define ADC_CVR_OFFSETCORR_Pos              0                                              /**< (ADC_CVR) Offset Correction Position */
#define ADC_CVR_OFFSETCORR_Msk              (_U_(0xFFFF) << ADC_CVR_OFFSETCORR_Pos)        /**< (ADC_CVR) Offset Correction Mask */
#define ADC_CVR_OFFSETCORR(value)           (ADC_CVR_OFFSETCORR_Msk & ((value) << ADC_CVR_OFFSETCORR_Pos))
#define ADC_CVR_GAINCORR_Pos                16                                             /**< (ADC_CVR) Gain Correction Position */
#define ADC_CVR_GAINCORR_Msk                (_U_(0xFFFF) << ADC_CVR_GAINCORR_Pos)          /**< (ADC_CVR) Gain Correction Mask */
#define ADC_CVR_GAINCORR(value)             (ADC_CVR_GAINCORR_Msk & ((value) << ADC_CVR_GAINCORR_Pos))
#define ADC_CVR_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (ADC_CVR) Register MASK  (Use ADC_CVR_Msk instead)  */
#define ADC_CVR_Msk                         _U_(0xFFFFFFFF)                                /**< (ADC_CVR) Register Mask  */


/* -------- ADC_CECR : (ADC Offset: 0xd8) (R/W 32) Channel Error Correction Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ECORR0:1;                  /**< bit:      0  Error Correction Enable for channel 0    */
    uint32_t ECORR1:1;                  /**< bit:      1  Error Correction Enable for channel 1    */
    uint32_t ECORR2:1;                  /**< bit:      2  Error Correction Enable for channel 2    */
    uint32_t ECORR3:1;                  /**< bit:      3  Error Correction Enable for channel 3    */
    uint32_t ECORR4:1;                  /**< bit:      4  Error Correction Enable for channel 4    */
    uint32_t ECORR5:1;                  /**< bit:      5  Error Correction Enable for channel 5    */
    uint32_t ECORR6:1;                  /**< bit:      6  Error Correction Enable for channel 6    */
    uint32_t ECORR7:1;                  /**< bit:      7  Error Correction Enable for channel 7    */
    uint32_t ECORR8:1;                  /**< bit:      8  Error Correction Enable for channel 8    */
    uint32_t ECORR9:1;                  /**< bit:      9  Error Correction Enable for channel 9    */
    uint32_t ECORR10:1;                 /**< bit:     10  Error Correction Enable for channel 10   */
    uint32_t ECORR11:1;                 /**< bit:     11  Error Correction Enable for channel 11   */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t ECORR:12;                  /**< bit:  0..11  Error Correction Enable for channel xx   */
    uint32_t :20;                       /**< bit: 12..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} ADC_CECR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_CECR_OFFSET                     (0xD8)                                        /**<  (ADC_CECR) Channel Error Correction Register  Offset */

#define ADC_CECR_ECORR0_Pos                 0                                              /**< (ADC_CECR) Error Correction Enable for channel 0 Position */
#define ADC_CECR_ECORR0_Msk                 (_U_(0x1) << ADC_CECR_ECORR0_Pos)              /**< (ADC_CECR) Error Correction Enable for channel 0 Mask */
#define ADC_CECR_ECORR0                     ADC_CECR_ECORR0_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CECR_ECORR0_Msk instead */
#define ADC_CECR_ECORR1_Pos                 1                                              /**< (ADC_CECR) Error Correction Enable for channel 1 Position */
#define ADC_CECR_ECORR1_Msk                 (_U_(0x1) << ADC_CECR_ECORR1_Pos)              /**< (ADC_CECR) Error Correction Enable for channel 1 Mask */
#define ADC_CECR_ECORR1                     ADC_CECR_ECORR1_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CECR_ECORR1_Msk instead */
#define ADC_CECR_ECORR2_Pos                 2                                              /**< (ADC_CECR) Error Correction Enable for channel 2 Position */
#define ADC_CECR_ECORR2_Msk                 (_U_(0x1) << ADC_CECR_ECORR2_Pos)              /**< (ADC_CECR) Error Correction Enable for channel 2 Mask */
#define ADC_CECR_ECORR2                     ADC_CECR_ECORR2_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CECR_ECORR2_Msk instead */
#define ADC_CECR_ECORR3_Pos                 3                                              /**< (ADC_CECR) Error Correction Enable for channel 3 Position */
#define ADC_CECR_ECORR3_Msk                 (_U_(0x1) << ADC_CECR_ECORR3_Pos)              /**< (ADC_CECR) Error Correction Enable for channel 3 Mask */
#define ADC_CECR_ECORR3                     ADC_CECR_ECORR3_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CECR_ECORR3_Msk instead */
#define ADC_CECR_ECORR4_Pos                 4                                              /**< (ADC_CECR) Error Correction Enable for channel 4 Position */
#define ADC_CECR_ECORR4_Msk                 (_U_(0x1) << ADC_CECR_ECORR4_Pos)              /**< (ADC_CECR) Error Correction Enable for channel 4 Mask */
#define ADC_CECR_ECORR4                     ADC_CECR_ECORR4_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CECR_ECORR4_Msk instead */
#define ADC_CECR_ECORR5_Pos                 5                                              /**< (ADC_CECR) Error Correction Enable for channel 5 Position */
#define ADC_CECR_ECORR5_Msk                 (_U_(0x1) << ADC_CECR_ECORR5_Pos)              /**< (ADC_CECR) Error Correction Enable for channel 5 Mask */
#define ADC_CECR_ECORR5                     ADC_CECR_ECORR5_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CECR_ECORR5_Msk instead */
#define ADC_CECR_ECORR6_Pos                 6                                              /**< (ADC_CECR) Error Correction Enable for channel 6 Position */
#define ADC_CECR_ECORR6_Msk                 (_U_(0x1) << ADC_CECR_ECORR6_Pos)              /**< (ADC_CECR) Error Correction Enable for channel 6 Mask */
#define ADC_CECR_ECORR6                     ADC_CECR_ECORR6_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CECR_ECORR6_Msk instead */
#define ADC_CECR_ECORR7_Pos                 7                                              /**< (ADC_CECR) Error Correction Enable for channel 7 Position */
#define ADC_CECR_ECORR7_Msk                 (_U_(0x1) << ADC_CECR_ECORR7_Pos)              /**< (ADC_CECR) Error Correction Enable for channel 7 Mask */
#define ADC_CECR_ECORR7                     ADC_CECR_ECORR7_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CECR_ECORR7_Msk instead */
#define ADC_CECR_ECORR8_Pos                 8                                              /**< (ADC_CECR) Error Correction Enable for channel 8 Position */
#define ADC_CECR_ECORR8_Msk                 (_U_(0x1) << ADC_CECR_ECORR8_Pos)              /**< (ADC_CECR) Error Correction Enable for channel 8 Mask */
#define ADC_CECR_ECORR8                     ADC_CECR_ECORR8_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CECR_ECORR8_Msk instead */
#define ADC_CECR_ECORR9_Pos                 9                                              /**< (ADC_CECR) Error Correction Enable for channel 9 Position */
#define ADC_CECR_ECORR9_Msk                 (_U_(0x1) << ADC_CECR_ECORR9_Pos)              /**< (ADC_CECR) Error Correction Enable for channel 9 Mask */
#define ADC_CECR_ECORR9                     ADC_CECR_ECORR9_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CECR_ECORR9_Msk instead */
#define ADC_CECR_ECORR10_Pos                10                                             /**< (ADC_CECR) Error Correction Enable for channel 10 Position */
#define ADC_CECR_ECORR10_Msk                (_U_(0x1) << ADC_CECR_ECORR10_Pos)             /**< (ADC_CECR) Error Correction Enable for channel 10 Mask */
#define ADC_CECR_ECORR10                    ADC_CECR_ECORR10_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CECR_ECORR10_Msk instead */
#define ADC_CECR_ECORR11_Pos                11                                             /**< (ADC_CECR) Error Correction Enable for channel 11 Position */
#define ADC_CECR_ECORR11_Msk                (_U_(0x1) << ADC_CECR_ECORR11_Pos)             /**< (ADC_CECR) Error Correction Enable for channel 11 Mask */
#define ADC_CECR_ECORR11                    ADC_CECR_ECORR11_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_CECR_ECORR11_Msk instead */
#define ADC_CECR_MASK                       _U_(0xFFF)                                     /**< \deprecated (ADC_CECR) Register MASK  (Use ADC_CECR_Msk instead)  */
#define ADC_CECR_Msk                        _U_(0xFFF)                                     /**< (ADC_CECR) Register Mask  */

#define ADC_CECR_ECORR_Pos                  0                                              /**< (ADC_CECR Position) Error Correction Enable for channel xx */
#define ADC_CECR_ECORR_Msk                  (_U_(0xFFF) << ADC_CECR_ECORR_Pos)             /**< (ADC_CECR Mask) ECORR */
#define ADC_CECR_ECORR(value)               (ADC_CECR_ECORR_Msk & ((value) << ADC_CECR_ECORR_Pos))  

/* -------- ADC_TSCVR : (ADC Offset: 0xdc) (R/W 32) Touchscreen Correction Values Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t TSOFFSETCORR:16;           /**< bit:  0..15  Touchscreen Offset Correction            */
    uint32_t TSGAINCORR:16;             /**< bit: 16..31  Touchscreen Gain Correction              */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ADC_TSCVR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_TSCVR_OFFSET                    (0xDC)                                        /**<  (ADC_TSCVR) Touchscreen Correction Values Register  Offset */

#define ADC_TSCVR_TSOFFSETCORR_Pos          0                                              /**< (ADC_TSCVR) Touchscreen Offset Correction Position */
#define ADC_TSCVR_TSOFFSETCORR_Msk          (_U_(0xFFFF) << ADC_TSCVR_TSOFFSETCORR_Pos)    /**< (ADC_TSCVR) Touchscreen Offset Correction Mask */
#define ADC_TSCVR_TSOFFSETCORR(value)       (ADC_TSCVR_TSOFFSETCORR_Msk & ((value) << ADC_TSCVR_TSOFFSETCORR_Pos))
#define ADC_TSCVR_TSGAINCORR_Pos            16                                             /**< (ADC_TSCVR) Touchscreen Gain Correction Position */
#define ADC_TSCVR_TSGAINCORR_Msk            (_U_(0xFFFF) << ADC_TSCVR_TSGAINCORR_Pos)      /**< (ADC_TSCVR) Touchscreen Gain Correction Mask */
#define ADC_TSCVR_TSGAINCORR(value)         (ADC_TSCVR_TSGAINCORR_Msk & ((value) << ADC_TSCVR_TSGAINCORR_Pos))
#define ADC_TSCVR_MASK                      _U_(0xFFFFFFFF)                                /**< \deprecated (ADC_TSCVR) Register MASK  (Use ADC_TSCVR_Msk instead)  */
#define ADC_TSCVR_Msk                       _U_(0xFFFFFFFF)                                /**< (ADC_TSCVR) Register Mask  */


/* -------- ADC_WPMR : (ADC Offset: 0xe4) (R/W 32) Write Protection Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPEN:1;                    /**< bit:      0  Write Protection Enable                  */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPKEY:24;                  /**< bit:  8..31  Write Protection Key                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ADC_WPMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_WPMR_OFFSET                     (0xE4)                                        /**<  (ADC_WPMR) Write Protection Mode Register  Offset */

#define ADC_WPMR_WPEN_Pos                   0                                              /**< (ADC_WPMR) Write Protection Enable Position */
#define ADC_WPMR_WPEN_Msk                   (_U_(0x1) << ADC_WPMR_WPEN_Pos)                /**< (ADC_WPMR) Write Protection Enable Mask */
#define ADC_WPMR_WPEN                       ADC_WPMR_WPEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_WPMR_WPEN_Msk instead */
#define ADC_WPMR_WPKEY_Pos                  8                                              /**< (ADC_WPMR) Write Protection Key Position */
#define ADC_WPMR_WPKEY_Msk                  (_U_(0xFFFFFF) << ADC_WPMR_WPKEY_Pos)          /**< (ADC_WPMR) Write Protection Key Mask */
#define ADC_WPMR_WPKEY(value)               (ADC_WPMR_WPKEY_Msk & ((value) << ADC_WPMR_WPKEY_Pos))
#define   ADC_WPMR_WPKEY_PASSWD_Val         _U_(0x414443)                                  /**< (ADC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0  */
#define ADC_WPMR_WPKEY_PASSWD               (ADC_WPMR_WPKEY_PASSWD_Val << ADC_WPMR_WPKEY_Pos)  /**< (ADC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0 Position  */
#define ADC_WPMR_MASK                       _U_(0xFFFFFF01)                                /**< \deprecated (ADC_WPMR) Register MASK  (Use ADC_WPMR_Msk instead)  */
#define ADC_WPMR_Msk                        _U_(0xFFFFFF01)                                /**< (ADC_WPMR) Register Mask  */


/* -------- ADC_WPSR : (ADC Offset: 0xe8) (R/ 32) Write Protection Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WPVS:1;                    /**< bit:      0  Write Protection Violation Status        */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPVSRC:16;                 /**< bit:  8..23  Write Protection Violation Source        */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} ADC_WPSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADC_WPSR_OFFSET                     (0xE8)                                        /**<  (ADC_WPSR) Write Protection Status Register  Offset */

#define ADC_WPSR_WPVS_Pos                   0                                              /**< (ADC_WPSR) Write Protection Violation Status Position */
#define ADC_WPSR_WPVS_Msk                   (_U_(0x1) << ADC_WPSR_WPVS_Pos)                /**< (ADC_WPSR) Write Protection Violation Status Mask */
#define ADC_WPSR_WPVS                       ADC_WPSR_WPVS_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use ADC_WPSR_WPVS_Msk instead */
#define ADC_WPSR_WPVSRC_Pos                 8                                              /**< (ADC_WPSR) Write Protection Violation Source Position */
#define ADC_WPSR_WPVSRC_Msk                 (_U_(0xFFFF) << ADC_WPSR_WPVSRC_Pos)           /**< (ADC_WPSR) Write Protection Violation Source Mask */
#define ADC_WPSR_WPVSRC(value)              (ADC_WPSR_WPVSRC_Msk & ((value) << ADC_WPSR_WPVSRC_Pos))
#define ADC_WPSR_MASK                       _U_(0xFFFF01)                                  /**< \deprecated (ADC_WPSR) Register MASK  (Use ADC_WPSR_Msk instead)  */
#define ADC_WPSR_Msk                        _U_(0xFFFF01)                                  /**< (ADC_WPSR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief ADC hardware registers */
typedef struct {  
  __O  uint32_t ADC_CR;         /**< (ADC Offset: 0x00) Control Register */
  __IO uint32_t ADC_MR;         /**< (ADC Offset: 0x04) Mode Register */
  __IO uint32_t ADC_SEQR1;      /**< (ADC Offset: 0x08) Channel Sequence Register 1 */
  __IO uint32_t ADC_SEQR2;      /**< (ADC Offset: 0x0C) Channel Sequence Register 2 */
  __O  uint32_t ADC_CHER;       /**< (ADC Offset: 0x10) Channel Enable Register */
  __O  uint32_t ADC_CHDR;       /**< (ADC Offset: 0x14) Channel Disable Register */
  __I  uint32_t ADC_CHSR;       /**< (ADC Offset: 0x18) Channel Status Register */
  __I  uint8_t                        Reserved1[4];
  __I  uint32_t ADC_LCDR;       /**< (ADC Offset: 0x20) Last Converted Data Register */
  __O  uint32_t ADC_IER;        /**< (ADC Offset: 0x24) Interrupt Enable Register */
  __O  uint32_t ADC_IDR;        /**< (ADC Offset: 0x28) Interrupt Disable Register */
  __I  uint32_t ADC_IMR;        /**< (ADC Offset: 0x2C) Interrupt Mask Register */
  __I  uint32_t ADC_ISR;        /**< (ADC Offset: 0x30) Interrupt Status Register */
  __IO uint32_t ADC_LCTMR;      /**< (ADC Offset: 0x34) Last Channel Trigger Mode Register */
  __IO uint32_t ADC_LCCWR;      /**< (ADC Offset: 0x38) Last Channel Compare Window Register */
  __I  uint32_t ADC_OVER;       /**< (ADC Offset: 0x3C) Overrun Status Register */
  __IO uint32_t ADC_EMR;        /**< (ADC Offset: 0x40) Extended Mode Register */
  __IO uint32_t ADC_CWR;        /**< (ADC Offset: 0x44) Compare Window Register */
  __I  uint8_t                        Reserved2[4];
  __IO uint32_t ADC_COR;        /**< (ADC Offset: 0x4C) Channel Offset Register */
  __I  uint32_t ADC_CDR[12];    /**< (ADC Offset: 0x50) Channel Data Register */
  __I  uint8_t                        Reserved3[20];
  __IO uint32_t ADC_ACR;        /**< (ADC Offset: 0x94) Analog Control Register */
  __I  uint8_t                        Reserved4[24];
  __IO uint32_t ADC_TSMR;       /**< (ADC Offset: 0xB0) Touchscreen Mode Register */
  __I  uint32_t ADC_XPOSR;      /**< (ADC Offset: 0xB4) Touchscreen X Position Register */
  __I  uint32_t ADC_YPOSR;      /**< (ADC Offset: 0xB8) Touchscreen Y Position Register */
  __I  uint32_t ADC_PRESSR;     /**< (ADC Offset: 0xBC) Touchscreen Pressure Register */
  __IO uint32_t ADC_TRGR;       /**< (ADC Offset: 0xC0) Trigger Register */
  __I  uint8_t                        Reserved5[16];
  __IO uint32_t ADC_CVR;        /**< (ADC Offset: 0xD4) Correction Values Register */
  __IO uint32_t ADC_CECR;       /**< (ADC Offset: 0xD8) Channel Error Correction Register */
  __IO uint32_t ADC_TSCVR;      /**< (ADC Offset: 0xDC) Touchscreen Correction Values Register */
  __I  uint8_t                        Reserved6[4];
  __IO uint32_t ADC_WPMR;       /**< (ADC Offset: 0xE4) Write Protection Mode Register */
  __I  uint32_t ADC_WPSR;       /**< (ADC Offset: 0xE8) Write Protection Status Register */
} Adc;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief ADC hardware registers */
typedef struct {  
  __O  ADC_CR_Type                    ADC_CR;         /**< Offset: 0x00 ( /W  32) Control Register */
  __IO ADC_MR_Type                    ADC_MR;         /**< Offset: 0x04 (R/W  32) Mode Register */
  __IO ADC_SEQR1_Type                 ADC_SEQR1;      /**< Offset: 0x08 (R/W  32) Channel Sequence Register 1 */
  __IO ADC_SEQR2_Type                 ADC_SEQR2;      /**< Offset: 0x0C (R/W  32) Channel Sequence Register 2 */
  __O  ADC_CHER_Type                  ADC_CHER;       /**< Offset: 0x10 ( /W  32) Channel Enable Register */
  __O  ADC_CHDR_Type                  ADC_CHDR;       /**< Offset: 0x14 ( /W  32) Channel Disable Register */
  __I  ADC_CHSR_Type                  ADC_CHSR;       /**< Offset: 0x18 (R/   32) Channel Status Register */
  __I  uint8_t                        Reserved1[4];
  __I  ADC_LCDR_Type                  ADC_LCDR;       /**< Offset: 0x20 (R/   32) Last Converted Data Register */
  __O  ADC_IER_Type                   ADC_IER;        /**< Offset: 0x24 ( /W  32) Interrupt Enable Register */
  __O  ADC_IDR_Type                   ADC_IDR;        /**< Offset: 0x28 ( /W  32) Interrupt Disable Register */
  __I  ADC_IMR_Type                   ADC_IMR;        /**< Offset: 0x2C (R/   32) Interrupt Mask Register */
  __I  ADC_ISR_Type                   ADC_ISR;        /**< Offset: 0x30 (R/   32) Interrupt Status Register */
  __IO ADC_LCTMR_Type                 ADC_LCTMR;      /**< Offset: 0x34 (R/W  32) Last Channel Trigger Mode Register */
  __IO ADC_LCCWR_Type                 ADC_LCCWR;      /**< Offset: 0x38 (R/W  32) Last Channel Compare Window Register */
  __I  ADC_OVER_Type                  ADC_OVER;       /**< Offset: 0x3C (R/   32) Overrun Status Register */
  __IO ADC_EMR_Type                   ADC_EMR;        /**< Offset: 0x40 (R/W  32) Extended Mode Register */
  __IO ADC_CWR_Type                   ADC_CWR;        /**< Offset: 0x44 (R/W  32) Compare Window Register */
  __I  uint8_t                        Reserved2[4];
  __IO ADC_COR_Type                   ADC_COR;        /**< Offset: 0x4C (R/W  32) Channel Offset Register */
  __I  ADC_CDR_Type                   ADC_CDR[12];    /**< Offset: 0x50 (R/   32) Channel Data Register */
  __I  uint8_t                        Reserved3[20];
  __IO ADC_ACR_Type                   ADC_ACR;        /**< Offset: 0x94 (R/W  32) Analog Control Register */
  __I  uint8_t                        Reserved4[24];
  __IO ADC_TSMR_Type                  ADC_TSMR;       /**< Offset: 0xB0 (R/W  32) Touchscreen Mode Register */
  __I  ADC_XPOSR_Type                 ADC_XPOSR;      /**< Offset: 0xB4 (R/   32) Touchscreen X Position Register */
  __I  ADC_YPOSR_Type                 ADC_YPOSR;      /**< Offset: 0xB8 (R/   32) Touchscreen Y Position Register */
  __I  ADC_PRESSR_Type                ADC_PRESSR;     /**< Offset: 0xBC (R/   32) Touchscreen Pressure Register */
  __IO ADC_TRGR_Type                  ADC_TRGR;       /**< Offset: 0xC0 (R/W  32) Trigger Register */
  __I  uint8_t                        Reserved5[16];
  __IO ADC_CVR_Type                   ADC_CVR;        /**< Offset: 0xD4 (R/W  32) Correction Values Register */
  __IO ADC_CECR_Type                  ADC_CECR;       /**< Offset: 0xD8 (R/W  32) Channel Error Correction Register */
  __IO ADC_TSCVR_Type                 ADC_TSCVR;      /**< Offset: 0xDC (R/W  32) Touchscreen Correction Values Register */
  __I  uint8_t                        Reserved6[4];
  __IO ADC_WPMR_Type                  ADC_WPMR;       /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I  ADC_WPSR_Type                  ADC_WPSR;       /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
} Adc;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Analog-to-Digital Converter */

#endif /* _SAMA5D2_ADC_COMPONENT_H_ */
